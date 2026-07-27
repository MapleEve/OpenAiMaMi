# Reconstruct frontier + extract features. Runs inside win IDA (strip PE).
import json, idautils, idc, ida_funcs, ida_dirtree, ida_bytes, ida_xref, ida_nalt, ida_name
BASE = r"Z://intermediate/aimami/1.2.3/windows-x64/module-recovery"
OUT  = BASE + "/frontier.jsonl"
MODMAP_OUT = BASE + "/attr_modmap.json"

dt = ida_dirtree.get_std_dirtree(ida_dirtree.DIRTREE_FUNCS)

# ---- 1. attributed set + ea->module map (walk /codexmate_lib subtree) ----
attr_mod = {}   # ea -> module path (relative under codexmate_lib)
def walk(path, mod):
    dt.chdir(path)
    ite = ida_dirtree.dirtree_iterator_t()
    ok = dt.findfirst(ite, "*")
    subs=[]; leafs=[]
    while ok:
        de = dt.resolve_cursor(ite.cursor)
        name = dt.get_entry_name(de)
        full = path.rstrip("/")+"/"+name
        if dt.isdir(full): subs.append((full,name))
        else: leafs.append(de.idx)  # idx == ea for FUNCS dirtree
        ok = dt.findnext(ite)
    for ea in leafs:
        attr_mod[ea] = mod
    for full,name in subs:
        walk(full, (mod+"/"+name) if mod else name)
walk("/codexmate_lib", "codexmate_lib")
attr_set = set(attr_mod.keys())

# ---- 2. helpers ----
def func_start(ea):
    f = ida_funcs.get_func(ea)
    return f.start_ea if f else None

def is_lib_name(nm):
    low = nm
    for k in ("drop_in_place","__rust_alloc","__rust_dealloc","__rust_realloc","__rust_alloc_zeroed",
              "memcpy","memmove","memset","memcmp","_memcpy","hashbrown","RawVec","alloc::","core::ptr",
              "core::fmt","serde","nullsub","__CxxFrameHandler","__GSHandler","_guard_","__scrt",
              "std::","core::slice","core::iter","tokio::","mio::","hyper::","reqwest::","h2::"):
        if k in low: return True
    return False

# code callers/callees of a func
def callers_of(ea):
    res=set()
    r = ida_xref.get_first_cref_to(ea)
    while r != idc.BADADDR and r != 0xffffffffffffffff and r != -1:
        fs = func_start(r)
        if fs is not None: res.add(fs)
        r = ida_xref.get_next_cref_to(ea, r)
    return res

def callees_of(fea):
    res=set()
    f = ida_funcs.get_func(fea)
    if not f: return res
    ea = f.start_ea
    end = f.end_ea
    while ea < end:
        r = ida_xref.get_first_cref_from(ea)
        while r != idc.BADADDR and r != -1 and r != 0xffffffffffffffff:
            if ida_xref.is_call_insn if False else True:
                fs = func_start(r)
                if fs is not None and fs != fea: res.add(fs)
            r = ida_xref.get_next_cref_from(ea, r)
        ea = idc.next_head(ea, end)
    return res

# reference strings (direct + one hop via .rdata pointer) -> collect string texts
def ref_strings(fea, maxs=40):
    f = ida_funcs.get_func(fea)
    if not f: return []
    out=[]
    ea=f.start_ea; end=f.end_ea; cnt=0
    while ea < end and cnt < 400:
        d = ida_xref.get_first_dref_from(ea)
        while d != idc.BADADDR and d != -1 and d != 0xffffffffffffffff:
            s = get_str(d)
            if s: out.append(s)
            else:
                # one hop: d may be a Location/ptr struct; read qword ptr -> string
                p = ida_bytes.get_qword(d) if ida_bytes.is_loaded(d) else 0
                if p:
                    s2 = get_str(p)
                    if s2: out.append(s2)
            cnt+=1
            if len(out) >= maxs: return out
            d = ida_xref.get_next_dref_from(ea, d)
        ea = idc.next_head(ea, end)
    return out

def get_str(ea):
    if not ida_bytes.is_loaded(ea): return None
    for st in (ida_nalt.STRTYPE_C, ida_nalt.STRTYPE_C_16):
        b = ida_bytes.get_strlit_contents(ea, -1, st)
        if b:
            try: t=b.decode("utf-8","ignore")
            except: t=""
            if 3 <= len(t) <= 300: return t
    return None

CMDS = set(l.strip() for l in open(BASE+"/commands.txt") if l.strip())

# ---- 3. build frontier = neighbors(attr) - attr - libname ----
frontier=set()
for aea in attr_set:
    for n in callers_of(aea) | callees_of(aea):
        if n in attr_set: continue
        nm = ida_funcs.get_func_name(n)
        if is_lib_name(nm): continue
        frontier.add(n)

# ---- 4. features per frontier func ----
fh = open(OUT, "w")
for fea in sorted(frontier):
    nm = ida_funcs.get_func_name(fea)
    f = ida_funcs.get_func(fea)
    size = (f.end_ea - f.start_ea) if f else 0
    callees = callees_of(fea)
    callers = callers_of(fea)
    attr_callees = [attr_mod[c] for c in callees if c in attr_set]
    attr_callers = [attr_mod[c] for c in callers if c in attr_set]
    strs = ref_strings(fea)
    app_src = [s for s in strs if ("src\\" in s or "src/" in s) and s.endswith(".rs")
               and "/rustc/" not in s and ".cargo" not in s and "index.crates" not in s]
    lib_str = any(("/rustc/" in s or ".cargo" in s or "index.crates.io" in s) for s in strs)
    cmd_hit = [s for s in strs if s in CMDS]
    # count library callees by name
    lib_callees = sum(1 for c in callees if is_lib_name(ida_funcs.get_func_name(c)))
    rec = {"ea":"0x%x"%fea,"name":nm,"size":size,
           "n_callees":len(callees),"n_callers":len(callers),
           "n_attr_callees":len(attr_callees),"n_attr_callers":len(attr_callers),
           "attr_callee_mods":attr_callees[:12],"attr_caller_mods":attr_callers[:12],
           "lib_callees":lib_callees,"app_src":app_src[:4],"lib_str":lib_str,"cmd_hit":cmd_hit[:2]}
    fh.write(json.dumps(rec,ensure_ascii=False)+"\n")
fh.close()
json.dump({"%x"%k:v for k,v in attr_mod.items()}, open(MODMAP_OUT,"w"))
print("FRONTIER", len(frontier), "ATTR", len(attr_set))
