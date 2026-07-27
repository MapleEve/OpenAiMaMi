import idaapi, idautils, idc, ida_funcs, ida_name
import re, json, os, sys, traceback

OUT_DIR = "/Volumes/Work/internal-history//intermediate/aimami/1.2.3/macos-arm64"
RAW_DIR = "/Volumes/Work/internal-history//raw/aimami/1.2.3/macos-arm64"
JSONL_PATH = os.path.join(OUT_DIR, "CENSUS-TRUE-DENOMINATOR.jsonl")
SUMMARY_PATH = os.path.join(OUT_DIR, "CENSUS-TRUE-DENOMINATOR.summary.json")
LOG_PATH = os.path.join(OUT_DIR, "_census_run.log")

log_lines = []
def log(msg):
    log_lines.append(str(msg))

# ---------------------------------------------------------------------------
# 1. Disk cross-check set (by address, not filename)
# ---------------------------------------------------------------------------
disk_addrs = set()
addr_re = re.compile(r'_0x([0-9a-fA-F]+)\.c$')
disk_file_count = 0
for root, dirs, files in os.walk(RAW_DIR):
    for fn in files:
        if fn.endswith('.c'):
            disk_file_count += 1
            m = addr_re.search(fn)
            if m:
                try:
                    disk_addrs.add(int(m.group(1), 16))
                except Exception:
                    pass
log("disk .c files=%d disk_addrs_extracted=%d" % (disk_file_count, len(disk_addrs)))

# ---------------------------------------------------------------------------
# 2. Demangled name resolution (defensive across IDA API variants)
# ---------------------------------------------------------------------------
LEGACY_NAMED_ESCAPES = {
    '$LT$': '<', '$GT$': '>', '$LP$': '(', '$RP$': ')',
    '$C$': ',', '$RF$': '&', '$BP$': '*', '$SP$': '@',
    '$u20$': ' ', '$u27$': "'", '$u7b$': '{', '$u7d$': '}',
    '$u5b$': '[', '$u5d$': ']', '$u3b$': ';', '$u21$': '!',
    '$u2b$': '+', '$u3d$': '=',
}
UNI_ESCAPE_RE = re.compile(r'\$u([0-9a-fA-F]+)\$')

def decode_legacy_mangling(s):
    """Decode rustc legacy symbol-mangling artifacts left over after IDA's
    generic Itanium demangler strips the outer __ZN..E wrapper but leaves
    embedded generic-argument text '..'-separated and $xx$-escaped."""
    if not s:
        return s
    out = s.replace('..', '::')
    out = UNI_ESCAPE_RE.sub(lambda m: chr(int(m.group(1), 16)), out)
    for k, v in LEGACY_NAMED_ESCAPES.items():
        out = out.replace(k, v)
    return out

def get_demangled(ea, raw):
    dn = None
    for attempt in range(3):
        try:
            if attempt == 0:
                dn = idc.demangle_name(raw, 0) if raw else None
            elif attempt == 1:
                dn = idc.demangle_name(raw, idc.get_inf_attr(idc.INF_SHORT_DN))
            else:
                dn = ida_name.get_demangled_name(ea, -1, 0)
            if dn:
                break
        except Exception:
            dn = None
            continue
    candidate = dn if dn else raw
    decoded = decode_legacy_mangling(candidate)
    if decoded and 'codexmate_lib' in decoded:
        return decoded
    decoded_raw = decode_legacy_mangling(raw)
    if decoded_raw and 'codexmate_lib' in decoded_raw:
        return decoded_raw
    return decoded if decoded else raw

# ---------------------------------------------------------------------------
# 3. Pass 1: enumerate all functions, filter to codexmate_lib population
# ---------------------------------------------------------------------------
funcs = []  # list of dict: ea, name, size, is_thunk
name_index = {}  # demangled_name -> ea (for shim target resolution by name)
total_funcs_seen = 0
for ea in idautils.Functions():
    total_funcs_seen += 1
    raw = idc.get_func_name(ea)
    name = get_demangled(ea, raw)
    if not name or 'codexmate_lib' not in name:
        continue
    pfn = ida_funcs.get_func(ea)
    size = (pfn.end_ea - pfn.start_ea) if pfn else 0
    is_thunk = bool(pfn and (pfn.flags & ida_funcs.FUNC_THUNK))
    rec = {"ea": ea, "name": name, "raw": raw, "size": size, "is_thunk": is_thunk}
    funcs.append(rec)
    name_index[name] = ea

log("total_funcs_seen=%d codexmate_lib_population=%d" % (total_funcs_seen, len(funcs)))

# ---------------------------------------------------------------------------
# 4. Helpers: module path derivation, thunk target, callee scan
# ---------------------------------------------------------------------------
def split_segments(anchored):
    """Bracket/brace-aware split on '::' starting at the codexmate_lib anchor."""
    segs = []
    depth = 0
    cur = ''
    i = 0
    n = len(anchored)
    while i < n:
        c = anchored[i]
        if c in '<{':
            depth += 1
            cur += c
        elif c in '>}':
            depth -= 1
            cur += c
        elif c == ':' and depth == 0 and i + 1 < n and anchored[i + 1] == ':':
            segs.append(cur)
            cur = ''
            i += 1
        else:
            cur += c
        i += 1
    if cur:
        segs.append(cur)
    return segs

HASH_RE = re.compile(r'^h[0-9a-fA-F]{16}$')

def module_of(name):
    idx = name.find('codexmate_lib')
    if idx == -1:
        return "unknown_module"
    anchored = name[idx:]
    segs = split_segments(anchored)
    segs = [s for s in segs if not HASH_RE.match(s)]
    if not segs:
        return "codexmate_lib"
    take = min(3, len(segs))
    return "::".join(segs[:take])

def app_native(name):
    idx = name.find('codexmate_lib')
    if idx == 0:
        return True
    if idx > 0:
        prefix = name[:idx]
        if prefix.endswith('<') or prefix.endswith('< ') or prefix.strip().endswith('<'):
            return False
    return name.startswith('codexmate_lib::') or name.startswith('<codexmate_lib::')

def extract_inner_anchor(name):
    """Depth-aware extraction of the innermost generic-argument text that starts
    at the first 'codexmate_lib' occurrence, correctly handling arbitrary
    wrapper nesting (drop_in_place<BlockingTask<Pin<Box<codexmate_lib::...>>>>
    etc.) via a real '<'/'>' depth counter rather than naive rstrip()."""
    idx = name.find('codexmate_lib')
    if idx == -1:
        return None
    depth = 0
    for i in range(idx):
        if name[i] == '<':
            depth += 1
        elif name[i] == '>':
            depth -= 1
    base_depth = depth
    out = []
    for ch in name[idx:]:
        if ch == '<':
            depth += 1
            out.append(ch)
        elif ch == '>':
            depth -= 1
            if depth < base_depth:
                break
            out.append(ch)
        else:
            out.append(ch)
    inner = ''.join(out)
    inner = re.sub(r'::h[0-9a-fA-F]{16}$', '', inner)
    return inner

def find_real_body_by_name(inner):
    """Search name_index for a non-drop_in_place symbol whose name relates to inner."""
    if not inner:
        return None
    exact = []
    candidates = []
    for k, v in name_index.items():
        if 'drop_in_place<' in k:
            continue
        kk = re.sub(r'::h[0-9a-fA-F]{16}$', '', k)
        if kk == inner:
            exact.append((k, v))
        elif inner in k or k in inner:
            candidates.append((k, v))
    if exact:
        return exact[0]
    if not candidates:
        return None
    # Prefer poll bodies, then call_once, then anything else; prefer exact-ish matches (shorter extra text)
    def rank(item):
        k, v = item
        r = 3
        if 'as core::future::future::Future>::poll' in k or '>::poll' in k:
            r = 0
        elif 'call_once' in k or 'call_mut' in k or 'call(' in k:
            r = 1
        elif '{{closure}}' in k:
            r = 2
        return (r, len(k))
    candidates.sort(key=rank)
    return candidates[0]

def thunk_target(ea):
    pfn = ida_funcs.get_func(ea)
    if pfn is None:
        return None
    try:
        if pfn.flags & ida_funcs.FUNC_THUNK:
            res = ida_funcs.calc_thunk_func_target(pfn)
            if isinstance(res, tuple):
                tgt = res[0]
            else:
                tgt = res
            if tgt and tgt != idaapi.BADADDR:
                return tgt
    except Exception:
        pass
    return None

def decompile_trivia_check(ea):
    """Attempt Hex-Rays decompile of a drop_in_place shim with no resolvable
    real body elsewhere. Returns (status, detail):
      status='trivial'   -> confirmed pure destructor glue (safe to call inlined)
      status='nontrivial'-> decompiled but shows unexplained extra logic -> unknown
      status='failed'    -> decompile unavailable/errored/truncated -> unknown
    Never silently treats failure as trivial (red line 20 truncation guard)."""
    try:
        import IDA decompiler
    except Exception:
        return ("failed", "IDA decompiler import failed")
    try:
        cfunc = IDA decompiler.decompile(ea)
    except Exception as e:
        return ("failed", "decompile exception: %s" % e)
    if cfunc is None:
        return ("failed", "decompile returned None")
    try:
        text = str(cfunc)
    except Exception as e:
        return ("failed", "str(cfunc) exception: %s" % e)
    if not text or 'TRUNCAT' in text.upper() or '[...]' in text:
        return ("failed", "empty or truncated pseudocode")
    # crude heuristic: a pure destructor is short and only references
    # drop/dealloc/panic runtime plumbing, not further business logic calls.
    n_lines = text.count('\n')
    suspicious = re.findall(r'\b\w+\s*\(', text)
    non_drop_calls = [s for s in suspicious if 'drop' not in s.lower()
                       and 'dealloc' not in s.lower() and 'free' not in s.lower()
                       and 'panic' not in s.lower() and 'qword' not in s.lower()]
    if n_lines <= 25 and len(non_drop_calls) <= 2:
        return ("trivial", "n_lines=%d non_drop_calls=%s" % (n_lines, non_drop_calls[:5]))
    return ("nontrivial", "n_lines=%d non_drop_calls=%s" % (n_lines, non_drop_calls[:5]))

def get_callees(ea):
    pfn = ida_funcs.get_func(ea)
    callees = set()
    if pfn is None:
        return callees
    try:
        item = pfn.start_ea
        guard = 0
        while item < pfn.end_ea and item != idaapi.BADADDR and guard < 20000:
            guard += 1
            for xref in idautils.CodeRefsFrom(item, 0):
                if xref < pfn.start_ea or xref >= pfn.end_ea:
                    callees.add(xref)
            nxt = idc.next_head(item, pfn.end_ea)
            if nxt <= item:
                break
            item = nxt
    except Exception:
        pass
    return callees

def name_for_ea(ea):
    raw = idc.get_func_name(ea)
    return get_demangled(ea, raw)

# ---------------------------------------------------------------------------
# 5. Pass 2: classify every function in the population
# ---------------------------------------------------------------------------
records = []
resolved_targets_used = set()  # eas that some shim points to (for cross-reference)

for rec in funcs:
    ea = rec["ea"]
    name = rec["name"]
    size = rec["size"]
    is_thunk = rec["is_thunk"]
    mod = module_of(name)
    native = app_native(name)
    item = {
        "ea": "0x%x" % ea,
        "name": name,
        "module": mod,
        "app_native": native,
        "size": size,
        "category": None,
        "real_body_addr": None,
        "evidence": "",
        "recovery_attempts": [],
    }

    is_drop_shim = 'drop_in_place<' in name

    resolved_ea = None
    attempts = item["recovery_attempts"]

    # (a) real IDA-flagged thunk
    if is_thunk:
        tgt = thunk_target(ea)
        attempts.append("ida_thunk_flag=true;calc_thunk_func_target=%s" % (hex(tgt) if tgt else "None"))
        if tgt:
            resolved_ea = tgt

    # (b) drop_in_place pattern
    if resolved_ea is None and is_drop_shim:
        inner = extract_inner_anchor(name)
        cand = find_real_body_by_name(inner)
        attempts.append("drop_in_place_pattern;inner_anchor=%r;name_search_candidate=%s" %
                         (inner, (cand[0] if cand else None)))
        if cand:
            resolved_ea = cand[1]
        else:
            # fall back to callee scan: does the destructor call out to any OTHER
            # codexmate_lib (non drop_in_place) function?
            callees = get_callees(ea)
            found_callee = None
            for c in callees:
                cname = name_for_ea(c)
                if cname and 'codexmate_lib' in cname and 'drop_in_place<' not in cname:
                    found_callee = (cname, c)
                    break
            attempts.append("callee_scan;n_callees=%d;found_non_drop_app_callee=%s" %
                             (len(callees), found_callee[0] if found_callee else None))
            if found_callee:
                resolved_ea = found_callee[1]
            else:
                # no separate symbol, no meaningful callee by disasm-level scan.
                # Do NOT default to genuinely_inlined on absence of evidence alone
                # (that would be exactly the "unknown washed into inlined" cheat
                # the anti-cheat red line forbids). Require positive decompile
                # confirmation that the shim is truly trivial destructor glue.
                status, detail = decompile_trivia_check(ea)
                attempts.append("decompile_trivia_check;status=%s;detail=%s" % (status, detail))
                if status == "trivial":
                    item["category"] = "genuinely_inlined"
                    item["evidence"] = ("sole reference is drop_in_place stub; no separate "
                                         "symbol found via name search; callee scan found no "
                                         "app-code callee; decompile CONFIRMS trivial destructor "
                                         "(%s); inner_anchor=%r" % (detail, inner))
                else:
                    item["category"] = "unknown"
                    item["evidence"] = ("drop_in_place shim, no real-body symbol found by name "
                                         "search, no app-code callee found by disasm scan, "
                                         "decompile confirmation=%s (%s) -- NOT enough evidence "
                                         "to call genuinely_inlined; counted as true gap. "
                                         "inner_anchor=%r" % (status, detail, inner))

    if item["category"] is None:
        if resolved_ea is not None:
            item["category"] = "shim_with_real_body_elsewhere"
            item["real_body_addr"] = "0x%x" % resolved_ea
            resolved_targets_used.add(resolved_ea)
            item["evidence"] = "resolved real body via " + ("thunk_target" if is_thunk else
                                 ("name_search" if not is_drop_shim or 'name_search_candidate' in attempts[-1] else "callee_scan"))
        elif is_drop_shim:
            # drop_in_place but resolution loop never set category (shouldn't happen,
            # but keep safe fallback)
            item["category"] = "unknown"
            item["evidence"] = "drop_in_place shim, no resolution path succeeded"
        else:
            item["category"] = "real_body"
            item["evidence"] = "not a thunk, not drop_in_place pattern; treated as real function body"

    item["on_disk"] = ea in disk_addrs
    records.append(item)

# ---------------------------------------------------------------------------
# 6. Also check on-disk status for shim-resolved target addresses even if the
#    target ea wasn't itself in the codexmate_lib-filtered population (edge case)
# ---------------------------------------------------------------------------
for item in records:
    if item["category"] == "shim_with_real_body_elsewhere" and item["real_body_addr"]:
        tgt_ea = int(item["real_body_addr"], 16)
        item["real_body_on_disk"] = tgt_ea in disk_addrs
        item["real_body_in_population"] = any(
            (r["ea"] == item["real_body_addr"]) for r in records
        )

# ---------------------------------------------------------------------------
# 7. Write JSONL
# ---------------------------------------------------------------------------
with open(JSONL_PATH, "w") as f:
    for item in records:
        f.write(json.dumps(item, ensure_ascii=False) + "\n")

# ---------------------------------------------------------------------------
# 8. Aggregate per module
# ---------------------------------------------------------------------------
from collections import defaultdict
agg = defaultdict(lambda: {"real_body_count": 0, "on_disk_by_addr": 0, "shim_count": 0,
                            "inlined_count": 0, "unknown_count": 0})

for item in records:
    mod = item["module"]
    cat = item["category"]
    if cat == "real_body":
        agg[mod]["real_body_count"] += 1
        if item["on_disk"]:
            agg[mod]["on_disk_by_addr"] += 1
    elif cat == "shim_with_real_body_elsewhere":
        agg[mod]["shim_count"] += 1
    elif cat == "genuinely_inlined":
        agg[mod]["inlined_count"] += 1
    elif cat == "unknown":
        agg[mod]["unknown_count"] += 1

# also fold shim-resolved targets into real_body denominator/on-disk count by the
# TARGET's own module if the target itself never separately appeared in `records`
# (edge case: target not in codexmate_lib population, e.g. stripped/std boundary)
extra_real_body = 0
for item in records:
    if item["category"] == "shim_with_real_body_elsewhere":
        if not item.get("real_body_in_population", True):
            tgt_ea = int(item["real_body_addr"], 16)
            tgt_name = name_for_ea(tgt_ea)
            tmod = module_of(tgt_name) if tgt_name and 'codexmate_lib' in tgt_name else item["module"]
            agg[tmod]["real_body_count"] += 1
            extra_real_body += 1
            if item.get("real_body_on_disk"):
                agg[tmod]["on_disk_by_addr"] += 1

per_module = []
for mod, d in agg.items():
    true_gap = d["real_body_count"] - d["on_disk_by_addr"]
    per_module.append({
        "module": mod,
        "real_body_count": d["real_body_count"],
        "on_disk_by_addr": d["on_disk_by_addr"],
        "true_gap": true_gap,
        "shim_count": d["shim_count"],
        "inlined_count": d["inlined_count"],
        "unknown_count": d["unknown_count"],
    })
per_module.sort(key=lambda x: -x["true_gap"])

totals = {
    "population_total": len(records),
    "real_body_total": sum(d["real_body_count"] for d in agg.values()),
    "on_disk_by_addr_total": sum(d["on_disk_by_addr"] for d in agg.values()),
    "shim_total": sum(d["shim_count"] for d in agg.values()),
    "inlined_total": sum(d["inlined_count"] for d in agg.values()),
    "unknown_total": sum(d["unknown_count"] for d in agg.values()),
    "extra_real_body_from_offpopulation_targets": extra_real_body,
    "std_generic_wrapper_count": sum(1 for r in records if not r["app_native"]),
    "app_native_count": sum(1 for r in records if r["app_native"]),
    "disk_c_file_count": disk_file_count,
    "disk_addr_extracted_count": len(disk_addrs),
}
totals["true_gap_total"] = totals["real_body_total"] - totals["on_disk_by_addr_total"]
totals["coverage_pct"] = (100.0 * totals["on_disk_by_addr_total"] / totals["real_body_total"]) if totals["real_body_total"] else 0.0

summary = {"totals": totals, "per_module": per_module}
with open(SUMMARY_PATH, "w") as f:
    json.dump(summary, f, ensure_ascii=False, indent=2)

log("DONE totals=%s" % json.dumps(totals))
with open(LOG_PATH, "w") as f:
    f.write("\n".join(log_lines))

print("CENSUS_OK " + json.dumps(totals))
