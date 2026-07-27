import json, idautils, idc, ida_funcs, ida_bytes, ida_xref, ida_nalt, IDA decompiler, ida_name
BASE=r"Z://intermediate/aimami/1.2.3/windows-x64/module-recovery"
eas=[int(x,16) for x in open(BASE+"/unk_eas.txt").read().split()]
OUT=BASE+"/unk_semantics.jsonl"

def get_str(ea):
    if not ida_bytes.is_loaded(ea): return None
    for st in (ida_nalt.STRTYPE_C, ida_nalt.STRTYPE_C_16):
        b=ida_bytes.get_strlit_contents(ea,-1,st)
        if b:
            try: t=b.decode("utf-8","ignore")
            except: t=""
            if 2<=len(t)<=300: return t
    return None

def strings_and_calls(fea):
    f=ida_funcs.get_func(fea)
    if not f: return [],[]
    strs=[]; calls=[]
    ea=f.start_ea; end=f.end_ea
    while ea<end:
        # data refs -> strings (direct + 1 hop)
        d=ida_xref.get_first_dref_from(ea)
        while d not in (idc.BADADDR,-1,0xffffffffffffffff):
            s=get_str(d)
            if s: strs.append(s)
            else:
                p=ida_bytes.get_qword(d) if ida_bytes.is_loaded(d) else 0
                if p:
                    s2=get_str(p)
                    if s2: strs.append(s2)
            d=ida_xref.get_next_dref_from(ea,d)
        # code refs -> callee names
        c=ida_xref.get_first_cref_from(ea)
        while c not in (idc.BADADDR,-1,0xffffffffffffffff):
            nm=ida_funcs.get_func_name(c)
            if nm: calls.append(nm)
            c=ida_xref.get_next_cref_from(ea,c)
        ea=idc.next_head(ea,end)
    return strs,calls

fh=open(OUT,"w")
n=0
for fea in eas:
    strs,calls=strings_and_calls(fea)
    # dedup preserve
    us=[]; seen=set()
    for s in strs:
        if s not in seen: seen.add(s); us.append(s)
    uc=[]; seen=set()
    for c in calls:
        if c not in seen: seen.add(c); uc.append(c)
    rec={"ea":"0x%x"%fea,"strs":us[:40],"calls":uc[:40]}
    fh.write(json.dumps(rec,ensure_ascii=False)+"\n"); n+=1
fh.close()
print("WROTE",n)
