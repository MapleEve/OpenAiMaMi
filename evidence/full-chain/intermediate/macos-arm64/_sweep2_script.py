import idaapi, idautils, idc, ida_funcs, ida_name, IDA decompiler
import re, json, os, time

OUT_DIR = "/Volumes/Work/internal-history//intermediate/aimami/1.2.3/macos-arm64"
CENSUS_JSONL = os.path.join(OUT_DIR, "CENSUS-TRUE-DENOMINATOR.jsonl")
RAW_DIR = "/Volumes/Work/internal-history//raw/aimami/1.2.3/macos-arm64"
LOG_PATH = os.path.join(OUT_DIR, "_sweep2_run.log")
OUT_A = os.path.join(OUT_DIR, "SWEEP2-A-unresolved461.jsonl")
OUT_B = os.path.join(OUT_DIR, "SWEEP2-B-gracefulshutdown.jsonl")
OUT_C = os.path.join(OUT_DIR, "SWEEP2-C-cappedhandler.jsonl")
OUT_D = os.path.join(OUT_DIR, "SWEEP2-D-newnamespaces.jsonl")
OUT_SUMMARY = os.path.join(OUT_DIR, "SWEEP2-summary.json")
UNRESOLVED_ADDRS_PATH = os.path.join(OUT_DIR, "_unresolved_addrs.json")

t0 = time.time()
log_lines = []
def log(msg):
    line = "[%.1fs] %s" % (time.time() - t0, msg)
    log_lines.append(line)
    with open(LOG_PATH, "w") as f:
        f.write("\n".join(log_lines) + "\n")

# ---------------------------------------------------------------------------
# shared helpers (same as original census/sweep scripts)
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
    if not s:
        return s
    out = s.replace('..', '::')
    out = UNI_ESCAPE_RE.sub(lambda m: chr(int(m.group(1), 16)), out)
    for k, v in LEGACY_NAMED_ESCAPES.items():
        out = out.replace(k, v)
    return out

def get_demangled_raw(ea, raw):
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
    decoded_raw = decode_legacy_mangling(raw)
    best = decoded if decoded else (decoded_raw if decoded_raw else raw)
    return best, decoded_raw

def name_for_ea(ea):
    raw = idc.get_func_name(ea)
    best, _ = get_demangled_raw(ea, raw)
    return best

def get_callees(ea, cap_items=20000):
    pfn = ida_funcs.get_func(ea)
    callees = set()
    if pfn is None:
        return callees
    try:
        item = pfn.start_ea
        guard = 0
        while item < pfn.end_ea and item != idaapi.BADADDR and guard < cap_items:
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

def get_callers(ea, cap_items=4000):
    callers = set()
    try:
        n = 0
        for xref in idautils.CodeRefsTo(ea, 0):
            callers.add(xref)
            n += 1
            if n >= cap_items:
                break
    except Exception:
        pass
    return callers

already_covered = set()
try:
    with open(CENSUS_JSONL, "r") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            try:
                obj = json.loads(line)
                ea_s = obj.get("ea")
                if ea_s:
                    already_covered.add(int(ea_s, 16))
            except Exception:
                continue
except Exception as e:
    log("census load err: %s" % e)
log("already_covered=%d" % len(already_covered))

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
log("disk .c files=%d disk_addrs=%d" % (disk_file_count, len(disk_addrs)))

SQL_RE = re.compile(r'\b(SELECT|INSERT INTO|UPDATE|DELETE FROM|CREATE TABLE|PRAGMA)\b', re.I)
HTTP_RE = re.compile(r'https?://|127\.0\.0\.1:\d+|/auth/callback|/api/')
FRAMEWORK_ONLY_MARKERS = ("StateManager", "ResolvedCommand", "CommandArg", "InvokeMessage",
                           "AclResolved", "acl::resolved", "InvokeError", "InvokeResponse")
# families proven 100% false-positive in the audited pass-2 review (CENSUS-COMPLETENESS-SWEEP.md
# section 2): generic monomorphized library glue whose only codexmate_lib touch is a
# tail-call/delegate to an already-counted App Serialize/Deserialize/Clone/Debug impl or a
# drop_in_place of a captured App-typed value.
KNOWN_FALSE_POSITIVE_FAMILY_RE = re.compile(
    r'tokio::runtime::task::(harness|raw|core)::|'
    r'serde_core::ser::|serde_json::ser::|serde::private::de::|serde_core::de::|'
    r'_<.*as tauri::ipc::IpcResponse>::body|'
    r'tokio::runtime::blocking::task::BlockingTask'
)
DROP_IN_PLACE_RE = re.compile(r'^core::ptr::drop_in_place<')
SERIALIZE_DELEGATE_RE = re.compile(r'::(serialize|deserialize|clone|fmt)::h[0-9a-f]+$', re.I)

def strings_for_func(ea, size):
    pfn = ida_funcs.get_func(ea)
    string_refs = []
    try:
        f_start = pfn.start_ea if pfn else ea
        f_end = pfn.end_ea if pfn else ea + size
        item_ea = f_start
        guard = 0
        while item_ea < f_end and guard < 20000:
            guard += 1
            for xref in idautils.DataRefsFrom(item_ea):
                s = idc.get_strlit_contents(xref)
                if s:
                    try:
                        string_refs.append(s.decode('utf-8', 'replace'))
                    except Exception:
                        pass
            nxt = idc.next_head(item_ea, f_end)
            if nxt <= item_ea:
                break
            item_ea = nxt
    except Exception:
        pass
    return string_refs

def judge_function(ea, extra_name_hint=""):
    """Full decompile + audited-style judgment for one function. Returns dict."""
    pfn = ida_funcs.get_func(ea)
    size = (pfn.end_ea - pfn.start_ea) if pfn else 0
    raw = idc.get_func_name(ea)
    best, decoded_raw = get_demangled_raw(ea, raw)
    item = {
        "addr": "0x%x" % ea,
        "name": best,
        "raw": raw,
        "size": size,
        "on_disk": ea in disk_addrs,
        "app_logic_carrying": None,
        "why": "",
    }
    hay = (best or "") + " | " + (decoded_raw or "")
    if KNOWN_FALSE_POSITIVE_FAMILY_RE.search(hay):
        item["app_logic_carrying"] = False
        item["why"] = "matches KNOWN_FALSE_POSITIVE_FAMILY_RE (audited pass-2 debunked family: generic tokio-harness/serde/IpcResponse-body/BlockingTask monomorphization) -- excluded without needing per-instance decompile, consistent with CENSUS-COMPLETENESS-SWEEP.md sec.2"
        return item
    try:
        cfunc = IDA decompiler.decompile(ea)
        text = str(cfunc) if cfunc is not None else ""
    except Exception as e:
        item["app_logic_carrying"] = None
        item["why"] = "decompile exception: %s" % e
        return item
    truncated = (not text) or ('TRUNCAT' in text.upper()) or ('[...]' in text)
    callee_names = [name_for_ea(c) or "" for c in get_callees(ea)]
    codexmate_callees = [c for c in callee_names if 'codexmate_lib' in c]
    # "strong" codexmate callee = calls something that is NOT itself a bare
    # drop_in_place/serialize/deserialize/clone/fmt delegate (those are already
    # counted elsewhere and this fn adds no new decision content per sec.2 audit)
    strong_codexmate_callees = [c for c in codexmate_callees
                                 if not DROP_IN_PLACE_RE.search(c) and not SERIALIZE_DELEGATE_RE.search(c)]
    string_refs = strings_for_func(ea, size)
    joined_strings = " | ".join(string_refs)[:4000]
    has_sql = bool(SQL_RE.search(text)) or bool(SQL_RE.search(joined_strings))
    has_http = bool(HTTP_RE.search(text)) or bool(HTTP_RE.search(joined_strings))
    has_cmdname_blob = any(
        len(s) >= 60 and re.fullmatch(r'[a-zA-Z0-9_./:]+', s) and '_' in s
        for s in string_refs
    )
    has_strong_callee = len(strong_codexmate_callees) > 0
    has_weak_callee_only = (len(codexmate_callees) > 0) and not has_strong_callee
    framework_only_hits = sum(1 for m in FRAMEWORK_ONLY_MARKERS if m in text)

    business_signal = has_strong_callee or has_sql or has_http or has_cmdname_blob
    if truncated:
        item["app_logic_carrying"] = None
        item["why"] = "decompile truncated/empty"
    elif business_signal:
        item["app_logic_carrying"] = True
        reasons = []
        if has_strong_callee:
            reasons.append("direct callee to NON-drop/NON-serialize codexmate_lib function: %s" % strong_codexmate_callees[:3])
        if has_sql:
            reasons.append("SQL-keyword string ref present")
        if has_http:
            reasons.append("HTTP path / 127.0.0.1 endpoint string ref present")
        if has_cmdname_blob:
            reasons.append("large snake_case/command-name-shaped string blob present")
        item["why"] = "; ".join(reasons)
    elif has_weak_callee_only:
        item["app_logic_carrying"] = False
        item["why"] = "decompiled; ONLY weak (drop_in_place/serialize/deserialize/clone) codexmate_lib callee(s) present (%s) -- same debunked false-positive pattern as sec.2, no independent business signal" % codexmate_callees[:3]
    elif framework_only_hits > 0:
        item["app_logic_carrying"] = False
        item["why"] = "decompiled; only framework plumbing markers present (%s)" % [m for m in FRAMEWORK_ONLY_MARKERS if m in text][:5]
    else:
        item["app_logic_carrying"] = False
        item["why"] = "decompiled; no business-logic markers matched heuristics -- likely generic library glue"

    item["n_lines"] = text.count('\n') if text else 0
    item["sample_strings"] = string_refs[:6]
    if item["app_logic_carrying"] is True:
        item["decompile_snippet"] = text[:1500]
    return item

# ---------------------------------------------------------------------------
# Part A: the 461 previously-unresolved adjacency candidates
# ---------------------------------------------------------------------------
with open(UNRESOLVED_ADDRS_PATH, "r") as f:
    unresolved_addrs = json.load(f)
log("part A: loaded %d unresolved addrs" % len(unresolved_addrs))

part_a_results = []
for idx, addr_s in enumerate(unresolved_addrs):
    ea = int(addr_s, 16)
    rec = judge_function(ea)
    part_a_results.append(rec)
    if idx % 100 == 0:
        log("part A progress idx=%d/%d" % (idx, len(unresolved_addrs)))

with open(OUT_A, "w") as f:
    for r in part_a_results:
        f.write(json.dumps(r, ensure_ascii=False) + "\n")
a_true = [r for r in part_a_results if r["app_logic_carrying"] is True]
a_false = [r for r in part_a_results if r["app_logic_carrying"] is False]
a_unknown = [r for r in part_a_results if r["app_logic_carrying"] is None]
log("part A DONE: total=%d true=%d false=%d unknown=%d" % (len(part_a_results), len(a_true), len(a_false), len(a_unknown)))

# ---------------------------------------------------------------------------
# Part B: 4 WithGracefulShutdown closures (explicit follow-up item #2)
# ---------------------------------------------------------------------------
gs_addrs = [0x1000ceab0, 0x1000ced20, 0x1000cef90, 0x1000cf3f0]
part_b_results = []
for ea in gs_addrs:
    rec = judge_function(ea)
    # for this small explicit set, always keep full decompile text + all strings
    # regardless of verdict, since this is a manual-review follow-up item
    try:
        cfunc = IDA decompiler.decompile(ea)
        rec["decompile_full"] = str(cfunc) if cfunc is not None else None
    except Exception as e:
        rec["decompile_full"] = None
        rec["decompile_exc"] = str(e)
    rec["all_callees"] = [name_for_ea(c) for c in get_callees(ea)]
    part_b_results.append(rec)
    log("part B ea=0x%x verdict=%s" % (ea, rec["app_logic_carrying"]))

with open(OUT_B, "w") as f:
    for r in part_b_results:
        f.write(json.dumps(r, ensure_ascii=False) + "\n")

# ---------------------------------------------------------------------------
# Part C: capped axum handler 0x100933b10 (explicit follow-up item #3)
# ---------------------------------------------------------------------------
c_ea = 0x100933b10
rec_c = judge_function(c_ea)
try:
    cfunc = IDA decompiler.decompile(c_ea)
    rec_c["decompile_full"] = str(cfunc) if cfunc is not None else None
except Exception as e:
    rec_c["decompile_full"] = None
    rec_c["decompile_exc"] = str(e)
rec_c["all_callees"] = [name_for_ea(c) for c in get_callees(c_ea)]
with open(OUT_C, "w") as f:
    f.write(json.dumps(rec_c, ensure_ascii=False) + "\n")
log("part C ea=0x%x verdict=%s" % (c_ea, rec_c["app_logic_carrying"]))

# ---------------------------------------------------------------------------
# Part D: new namespace sweep (explicit follow-up item #4)
# ---------------------------------------------------------------------------
NEW_FRAMEWORK_RE = re.compile(
    r'(^|::|<|,|\s)('
    r'objc2::|objc2_foundation::|objc2_app_kit::|objc2_web_kit::|dispatch2::|core_foundation::|'
    r'security_framework::|'
    r'tao::|wry::|muda::|tray_icon::|global_hotkey::|'
    r'keyring::|rusqlite::|'
    r'auto_launch::|rfd::|'
    r'zip::|tar::|cfb::|plist::|toml_edit::|toml::|'
    r'infer::|png::|image::|'
    r'chrono::|url::|'
    r'tungstenite::|tokio_tungstenite::|'
    r'tokio::|rustls_pki_types::|hyper_rustls::|tokio_rustls::'
    r')'
)
already_swept_names = set()  # not needed; we rely on already_covered + not-codexmate + regex match

total_funcs = 0
already_covered_seen = 0
framework_candidates = []
for ea in idautils.Functions():
    total_funcs += 1
    if ea in already_covered:
        already_covered_seen += 1
        continue
    raw = idc.get_func_name(ea)
    best, decoded_raw = get_demangled_raw(ea, raw)
    if (best and 'codexmate_lib' in best) or (decoded_raw and 'codexmate_lib' in decoded_raw):
        continue  # bookkeeping-gap bucket, already handled by original sweep pass1
    hay = (best or "") + " | " + (raw or "")
    if NEW_FRAMEWORK_RE.search(hay):
        framework_candidates.append({"ea": ea, "name": best, "raw": raw})
log("part D: total_funcs=%d framework_candidates(new namespaces)=%d" % (total_funcs, len(framework_candidates)))

adjacent_d = []
for rec in framework_candidates:
    ea = rec["ea"]
    callees = get_callees(ea)
    callee_hit = None
    for c in callees:
        if c in already_covered:
            callee_hit = c
            break
    caller_hit = None
    if callee_hit is None:
        for caller_ea in get_callers(ea):
            caller_fn = ida_funcs.get_func(caller_ea)
            caller_start = caller_fn.start_ea if caller_fn else caller_ea
            if caller_start in already_covered:
                caller_hit = caller_start
                break
    if callee_hit is not None or caller_hit is not None:
        rec["callee_hit"] = ("0x%x" % callee_hit) if callee_hit else None
        rec["caller_hit"] = ("0x%x" % caller_hit) if caller_hit else None
        adjacent_d.append(rec)
log("part D: adjacent_candidates=%d (of %d framework_candidates)" % (len(adjacent_d), len(framework_candidates)))

part_d_results = []
for idx, rec in enumerate(adjacent_d):
    ea = rec["ea"]
    jr = judge_function(ea)
    jr["callee_hit"] = rec.get("callee_hit")
    jr["caller_hit"] = rec.get("caller_hit")
    part_d_results.append(jr)
    if idx % 100 == 0:
        log("part D progress idx=%d/%d" % (idx, len(adjacent_d)))

with open(OUT_D, "w") as f:
    for r in part_d_results:
        f.write(json.dumps(r, ensure_ascii=False) + "\n")
d_true = [r for r in part_d_results if r["app_logic_carrying"] is True]
d_false = [r for r in part_d_results if r["app_logic_carrying"] is False]
d_unknown = [r for r in part_d_results if r["app_logic_carrying"] is None]
log("part D DONE: total=%d true=%d false=%d unknown=%d" % (len(part_d_results), len(d_true), len(d_false), len(d_unknown)))

# ---------------------------------------------------------------------------
# Summary
# ---------------------------------------------------------------------------
summary = {
    "part_a_461_unresolved": {
        "total": len(part_a_results), "true": len(a_true), "false": len(a_false), "unknown_still": len(a_unknown),
        "true_addrs": [r["addr"] for r in a_true],
    },
    "part_b_gracefulshutdown4": {
        "total": len(part_b_results),
        "verdicts": [{"addr": r["addr"], "verdict": r["app_logic_carrying"], "why": r["why"]} for r in part_b_results],
    },
    "part_c_cappedhandler1": {
        "addr": rec_c["addr"], "verdict": rec_c["app_logic_carrying"], "why": rec_c["why"],
    },
    "part_d_new_namespaces": {
        "namespaces_swept": ["objc2", "objc2_foundation", "objc2_app_kit", "objc2_web_kit", "dispatch2",
                              "core_foundation", "security_framework", "tao", "wry", "muda", "tray_icon",
                              "global_hotkey", "keyring", "rusqlite", "auto_launch", "rfd", "zip", "tar",
                              "cfb", "plist", "toml_edit", "toml", "infer", "png", "image", "chrono", "url",
                              "tungstenite", "tokio_tungstenite", "tokio (full, closing gap vs sweep1 partial regex)",
                              "rustls_pki_types", "hyper_rustls", "tokio_rustls"],
        "framework_candidates_matched": len(framework_candidates),
        "adjacent_candidates": len(adjacent_d),
        "total_judged": len(part_d_results), "true": len(d_true), "false": len(d_false), "unknown_still": len(d_unknown),
        "true_addrs": [r["addr"] for r in d_true],
    },
    "total_funcs_in_binary": total_funcs,
    "already_covered_population": len(already_covered),
}
with open(OUT_SUMMARY, "w") as f:
    json.dump(summary, f, indent=2, ensure_ascii=False)
log("ALL DONE. summary written to %s" % OUT_SUMMARY)
print("DONE a_true=%d a_false=%d a_unk=%d | b=%s | c=%s | d_true=%d d_false=%d d_unk=%d d_adjacent=%d d_candidates=%d" % (
    len(a_true), len(a_false), len(a_unknown),
    [r["app_logic_carrying"] for r in part_b_results],
    rec_c["app_logic_carrying"],
    len(d_true), len(d_false), len(d_unknown), len(adjacent_d), len(framework_candidates)))
