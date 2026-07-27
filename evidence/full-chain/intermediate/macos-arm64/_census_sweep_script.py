import idaapi, idautils, idc, ida_funcs, ida_name
import re, json, os, sys, time, traceback

OUT_DIR = "/Volumes/Work/internal-history//intermediate/aimami/1.2.3/macos-arm64"
RAW_DIR = "/Volumes/Work/internal-history//raw/aimami/1.2.3/macos-arm64"
CENSUS_JSONL = os.path.join(OUT_DIR, "CENSUS-TRUE-DENOMINATOR.jsonl")
JSONL_PATH = os.path.join(OUT_DIR, "CENSUS-COMPLETENESS-SWEEP.jsonl")
MD_PATH = "intermediate/aimami/1.2.3/macos-arm64/CENSUS-COMPLETENESS-SWEEP.md"
# NOTE: MD_PATH intentionally uses the client-visible SMB mount prefix in the doc
# string only; actual write below uses OUT_DIR host-local path (both point at
# same share, host-local write avoids any host-side mount alias mismatch).
MD_PATH_HOST = os.path.join(OUT_DIR, "CENSUS-COMPLETENESS-SWEEP.md")
LOG_PATH = os.path.join(OUT_DIR, "_census_sweep_run.log")

t0 = time.time()
log_lines = []
def log(msg):
    line = "[%.1fs] %s" % (time.time() - t0, msg)
    log_lines.append(line)

# ---------------------------------------------------------------------------
# 0. Reuse census demangle helpers (same decode logic as CENSUS-TRUE-DENOMINATOR)
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
    """Return (best_display_name, decoded_raw) without the codexmate_lib
    short-circuit the original census used -- we need the decoded_raw
    unconditionally here to test truncation hypotheses."""
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

# ---------------------------------------------------------------------------
# 1. Load existing population (already_covered) addr set from CENSUS-TRUE-DENOMINATOR.jsonl
# ---------------------------------------------------------------------------
already_covered = set()
census_load_err = None
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
    census_load_err = str(e)
log("already_covered population loaded: %d (load_err=%s)" % (len(already_covered), census_load_err))

# ---------------------------------------------------------------------------
# 2. Disk cross-check set (by address) -- reuse census convention
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
# 3. Enumerate ALL functions, split into already_covered vs candidate pool.
#    Candidate pool = NOT in already_covered set (by ea) AND does not contain
#    'codexmate_lib' in EITHER decoded-demangled name OR decoded-raw name
#    (i.e. genuinely outside the original filter, not just an ea bookkeeping
#    mismatch).
# ---------------------------------------------------------------------------
FRAMEWORK_RE = re.compile(
    r'(^|::|<|,|\s)(tauri::|tauri_runtime|tauri_utils::|tauri_plugin|'
    r'tokio::runtime::task|tokio::runtime::|tokio::sync|tokio::net|'
    r'axum::|axum_core|hyper::|hyper_util|tower::|tower_http|'
    r'serde::|serde_json|serde_core|reqwest::|rustls::|h2::|'
    r'futures_util|futures_core|futures_channel)'
)
DISPATCH_HINT_RE = re.compile(
    r'InvokeResolver|invoke_handler|CommandArg|CommandItem|ResolvedCommand|'
    r'harness::|Harness<|respond_async|from_command|InvokeMessage|'
    r'BlockingTask|JoinHandle|spawn_blocking|UnboundedSender|UnboundedReceiver'
)

total_funcs = 0
already_covered_seen = 0
framework_all = 0          # all non-app functions matching FRAMEWORK_RE/DISPATCH_HINT_RE
framework_candidates = []  # dicts: ea,name,raw_decoded

for ea in idautils.Functions():
    total_funcs += 1
    if ea in already_covered:
        already_covered_seen += 1
        continue
    raw = idc.get_func_name(ea)
    best, decoded_raw = get_demangled_raw(ea, raw)
    if (best and 'codexmate_lib' in best) or (decoded_raw and 'codexmate_lib' in decoded_raw):
        # genuinely should have been in the original population but the ea
        # bookkeeping missed it (e.g. function added/renamed after census run) --
        # record separately, still a completeness finding but different root
        # cause bucket than the framework-generic hypothesis.
        framework_candidates.append({"ea": ea, "name": best, "raw": raw,
                                      "bucket": "missed_direct_codexmate_lib_name"})
        framework_all += 1
        continue
    hay = (best or "") + " | " + (raw or "")
    if FRAMEWORK_RE.search(hay) or DISPATCH_HINT_RE.search(hay):
        framework_all += 1
        framework_candidates.append({"ea": ea, "name": best, "raw": raw,
                                      "bucket": "framework_generic_or_dispatch_hint"})

log("total_funcs=%d already_covered_seen=%d framework_all_candidates=%d" %
    (total_funcs, already_covered_seen, framework_all))

# ---------------------------------------------------------------------------
# 4. Adjacency filter: keep candidate if any callee OR any caller is itself
#    in already_covered (direct xref-reachability to/from app code), per the
#    task's stated candidate source ("run::{{closure}} 链路上 xrefs 可达的非
#    drop 函数" and "泛型参数里曾经含 codexmate_lib 但外层名不含的").
# ---------------------------------------------------------------------------
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

adjacent = []
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
    is_missed_direct = (rec["bucket"] == "missed_direct_codexmate_lib_name")
    if is_missed_direct or callee_hit is not None or caller_hit is not None:
        rec["callee_hit"] = ("0x%x" % callee_hit) if callee_hit else None
        rec["caller_hit"] = ("0x%x" % caller_hit) if caller_hit else None
        rec["n_callees"] = len(callees)
        adjacent.append(rec)

log("adjacent_candidates=%d (of %d framework_all)" % (len(adjacent), len(framework_candidates)))

# ---------------------------------------------------------------------------
# 5. Decompile-based business-logic judgment, bounded to avoid runaway runtime.
# ---------------------------------------------------------------------------
try:
    import IDA decompiler
    HEXRAYS_OK = True
except Exception:
    HEXRAYS_OK = False

DECOMPILE_CAP = 2000
SQL_RE = re.compile(r'\b(SELECT|INSERT INTO|UPDATE|DELETE FROM|CREATE TABLE|PRAGMA)\b', re.I)
HTTP_RE = re.compile(r'https?://|127\.0\.0\.1:\d+|/auth/callback|/api/')
FRAMEWORK_ONLY_MARKERS = ("StateManager", "ResolvedCommand", "CommandArg", "InvokeMessage",
                           "AclResolved", "acl::resolved", "InvokeError", "InvokeResponse")

decompile_attempted = 0
results = []
capped = False
for idx, rec in enumerate(adjacent):
    ea = rec["ea"]
    pfn = ida_funcs.get_func(ea)
    size = (pfn.end_ea - pfn.start_ea) if pfn else 0
    item = {
        "addr": "0x%x" % ea,
        "name": rec["name"],
        "raw": rec["raw"],
        "size": size,
        "bucket": rec["bucket"],
        "callee_hit": rec.get("callee_hit"),
        "caller_hit": rec.get("caller_hit"),
        "on_disk": ea in disk_addrs,
        "app_logic_carrying": None,
        "why": "",
    }
    if rec["bucket"] == "missed_direct_codexmate_lib_name":
        item["app_logic_carrying"] = True
        item["why"] = "name (demangled or raw-decoded) directly contains codexmate_lib but was absent from the original 4160-item CENSUS-TRUE-DENOMINATOR population set (address bookkeeping gap, not a generics-hiding gap)"
        results.append(item)
        continue

    if not HEXRAYS_OK or decompile_attempted >= DECOMPILE_CAP:
        if decompile_attempted >= DECOMPILE_CAP:
            capped = True
        item["app_logic_carrying"] = None
        item["why"] = "decompile skipped (IDA decompiler_unavailable=%s, cap_reached=%s); adjacency-only signal: callee_hit=%s caller_hit=%s" % (
            not HEXRAYS_OK, decompile_attempted >= DECOMPILE_CAP, item["callee_hit"], item["caller_hit"])
        results.append(item)
        continue

    decompile_attempted += 1
    try:
        cfunc = IDA decompiler.decompile(ea)
    except Exception as e:
        item["app_logic_carrying"] = None
        item["why"] = "decompile exception: %s" % e
        results.append(item)
        continue
    if cfunc is None:
        item["app_logic_carrying"] = None
        item["why"] = "decompile returned None"
        results.append(item)
        continue
    try:
        text = str(cfunc)
    except Exception as e:
        item["app_logic_carrying"] = None
        item["why"] = "str(cfunc) exception: %s" % e
        results.append(item)
        continue
    truncated = (not text) or ('TRUNCAT' in text.upper()) or ('[...]' in text)

    # collect callee names + string refs for this function's body via disasm-level
    # scan (independent of get_callees cap, small enough per-function here)
    callee_names = []
    for c in get_callees(ea):
        cn = name_for_ea(c)
        if cn:
            callee_names.append(cn)
    codexmate_callee = [c for c in callee_names if 'codexmate_lib' in c]

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
    joined_strings = " | ".join(string_refs)[:4000]

    has_codexmate_callee = len(codexmate_callee) > 0
    has_sql = bool(SQL_RE.search(text)) or bool(SQL_RE.search(joined_strings))
    has_http = bool(HTTP_RE.search(text)) or bool(HTTP_RE.search(joined_strings))
    # command-name-ish signal: long snake_case identifier chains embedded as one
    # literal blob (the tauri generate_handler! command-name concatenation
    # pattern seen at 0x100180170), heuristically: a string literal >= 60 chars
    # made almost entirely of [a-z0-9_] with no spaces.
    has_cmdname_blob = any(
        len(s) >= 60 and re.fullmatch(r'[a-zA-Z0-9_./:]+', s) and '_' in s
        for s in string_refs
    )
    framework_only_hits = sum(1 for m in FRAMEWORK_ONLY_MARKERS if m in text)

    business_signal = has_codexmate_callee or has_sql or has_http or has_cmdname_blob
    if truncated:
        item["app_logic_carrying"] = None
        item["why"] = "decompile truncated/empty; adjacency-only signal preserved (callee_hit=%s caller_hit=%s)" % (
            item["callee_hit"], item["caller_hit"])
    elif business_signal:
        item["app_logic_carrying"] = True
        reasons = []
        if has_codexmate_callee:
            reasons.append("direct callee to codexmate_lib-named function: %s" % codexmate_callee[:3])
        if has_sql:
            reasons.append("SQL-keyword string ref present")
        if has_http:
            reasons.append("HTTP path / 127.0.0.1 endpoint string ref present")
        if has_cmdname_blob:
            reasons.append("large snake_case/command-name-shaped string blob present")
        item["why"] = "; ".join(reasons)
    elif framework_only_hits > 0 and not business_signal:
        item["app_logic_carrying"] = False
        item["why"] = "decompiled; only framework plumbing markers present (%s), no app-specific string/DB/HTTP/codexmate_lib callee found" % (
            [m for m in FRAMEWORK_ONLY_MARKERS if m in text][:5])
    else:
        item["app_logic_carrying"] = False
        item["why"] = "decompiled; no business-logic or framework-only markers matched heuristics -- likely generic library glue"

    item["n_lines"] = text.count('\n') if text else 0
    item["sample_strings"] = string_refs[:5]
    results.append(item)

    if idx % 200 == 0:
        log("progress idx=%d/%d decompile_attempted=%d" % (idx, len(adjacent), decompile_attempted))

log("decompile_attempted=%d capped=%s" % (decompile_attempted, capped))

# ---------------------------------------------------------------------------
# 6. Write JSONL
# ---------------------------------------------------------------------------
with open(JSONL_PATH, "w") as f:
    for item in results:
        f.write(json.dumps(item, ensure_ascii=False) + "\n")

app_logic_found = [r for r in results if r["app_logic_carrying"] is True]
framework_only_confirmed = [r for r in results if r["app_logic_carrying"] is False]
unresolved_adjacency_only = [r for r in results if r["app_logic_carrying"] is None]
already_on_disk = [r for r in app_logic_found if r["on_disk"]]
missing_from_disk = [r for r in app_logic_found if not r["on_disk"]]

summary = {
    "total_funcs_in_binary": total_funcs,
    "already_covered_population": len(already_covered),
    "already_covered_seen_during_enum": already_covered_seen,
    "framework_all_candidates": framework_all,
    "adjacent_candidates": len(adjacent),
    "decompile_attempted": decompile_attempted,
    "decompile_cap": DECOMPILE_CAP,
    "capped": capped,
    "app_logic_carrying_found": len(app_logic_found),
    "framework_only_confirmed": len(framework_only_confirmed),
    "unresolved_adjacency_only": len(unresolved_adjacency_only),
    "already_on_disk": len(already_on_disk),
    "missing_from_disk": len(missing_from_disk),
    "original_true_denominator": 3590,
    "corrected_true_denominator": 3590 + len(app_logic_found),
}
with open(os.path.join(OUT_DIR, "CENSUS-COMPLETENESS-SWEEP.summary.json"), "w") as f:
    json.dump(summary, f, ensure_ascii=False, indent=2)

with open(LOG_PATH, "w") as f:
    f.write("\n".join(log_lines))

# ---------------------------------------------------------------------------
# 7. Markdown report
# ---------------------------------------------------------------------------
md = []
md.append("# AiMaMi 1.2.3 macOS-arm64 -- Census Completeness Sweep\n")
md.append("Generated by `_census_sweep_script.py` via `IDA Python` run directly on the "
           "IDA host, per rust-reverse-pipeline IDA_LIVE_GATE + SMB_ABSOLUTE_PATH rules. "
           "Purpose: find functions carrying real App business logic whose demangled name "
           "does NOT contain `codexmate_lib` and were therefore excluded from the prior "
           "CENSUS-TRUE-DENOMINATOR population=4160 filter (`'codexmate_lib' in name`).\n")
md.append("## 1. Root cause confirmed\n")
md.append("Empirically verified example `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::"
           "{{closure}}` @ 0x100180170 (13.6KB): its own demangled+raw-decoded name never contains "
           "`codexmate_lib` (it is generic over the Tauri `Runtime` type only), but its **body directly "
           "calls/references a codexmate_lib-named symbol** "
           "(`core::ptr::drop_in_place<codexmate_lib::run::{{closure}}::{{closure}}::{{closure}}>`) "
           "and embeds a giant literal string blob concatenating dozens of this App's actual IPC command "
           "names (`load_quota_history`, `test_api_proxy_config`, `export_session_markdown`, "
           "`fix_codex_router_issue`, `set_codex_router_enabled`, `remove_accounts`, `import_skill`, "
           "`set_auto_switch`, `inject_voice_text`, `switch_account_and_restart_codex`, ... and the "
           "app's own OAuth callback endpoint `127.0.0.1:1455/auth/callback`) plus `CommandArg::from_command` "
           "DTO-field-name extraction. **This confirms the denominator=4160 name-substring filter is "
           "structurally incomplete**: Tauri's `generate_handler!`-produced giant command-dispatch closure "
           "is a shared, non-app-namespaced generic instantiation that nonetheless carries this App's "
           "IPC surface as embedded data + direct xrefs, and the original census never enumerated it "
           "because its own name never contains the string `codexmate_lib`.\n")
md.append("## 2. Method\n")
md.append("1. Loaded the 4160-address `already_covered` set from `CENSUS-TRUE-DENOMINATOR.jsonl`.\n"
           "2. Enumerated **all %d** functions in the binary (`idautils.Functions()`), not just the "
           "codexmate_lib-named subset.\n"
           "3. For every function NOT in `already_covered`: flagged as a candidate if (a) its name "
           "genuinely does contain `codexmate_lib` after full decode (an address-bookkeeping miss, "
           "bucket=`missed_direct_codexmate_lib_name`), OR (b) its demangled/raw name matches known "
           "framework-generic namespaces (`tauri::`, `tauri_utils::`, `tokio::runtime::task`, `axum::`, "
           "`hyper::`, `tower::`, `serde::`/`serde_json`, `reqwest::`, `rustls::`, `h2::`, "
           "`futures_util`/`futures_core`) or dispatch-shaped name hints (`InvokeResolver`, "
           "`invoke_handler`, `CommandArg`, `ResolvedCommand`, `harness::`, `respond_async`, "
           "`from_command`, `BlockingTask`, `spawn_blocking`) (bucket=`framework_generic_or_dispatch_hint`).\n"
           "4. **Adjacency filter**: kept only candidates with at least one direct callee OR caller "
           "that is itself in `already_covered` (i.e. genuinely wired into the app's call graph, not "
           "just namespace-matched noise) -- this directly targets the task's stated candidate source "
           "(\"run::{{closure}} 链路上 xrefs 可达的非 drop 函数\" and \"泛型参数里曾经含 codexmate_lib "
           "但外层名不含的\").\n"
           "5. Decompiled each adjacency-passing candidate (Hex-Rays, capped at %d to bound runtime) "
           "and applied a **business-logic-vs-pure-framework-plumbing judgment**: `app_logic_carrying=True` "
           "requires at least one of (a) a direct callee whose name contains `codexmate_lib`, (b) an "
           "embedded SQL-keyword string, (c) an embedded HTTP path / `127.0.0.1:<port>` endpoint string, "
           "(d) a large (>=60 char) snake_case/command-name-shaped string blob. Otherwise, if only "
           "framework markers (`StateManager`, `ResolvedCommand`, `CommandArg`, `InvokeMessage`, "
           "`acl::resolved`, `InvokeError`, `InvokeResponse`) are present with no app-specific signal, "
           "classified `app_logic_carrying=False` (pure plumbing, correctly excluded).\n"
           "6. Cross-checked disk presence the same way as the original census: by address against "
           "`*_0x<addr>.c` files under `raw/aimami/1.2.3/macos-arm64/**`.\n" % (total_funcs, DECOMPILE_CAP))
md.append("## 3. Totals\n")
md.append("| Metric | Value |\n|---|---:|\n")
for k, v in summary.items():
    md.append("| `%s` | %s |\n" % (k, v))
md.append("\n")
md.append("## 4. Examples (first 40 app_logic_carrying hits)\n")
md.append("| addr | name | size | why |\n|---|---|---:|---|\n")
for r in app_logic_found[:40]:
    nm = (r["name"] or r["raw"] or "")[:140].replace("|", "\\|")
    why = (r["why"] or "")[:200].replace("|", "\\|")
    md.append("| %s | %s | %s | %s |\n" % (r["addr"], nm, r["size"], why))
md.append("\n## 5. Unresolved (adjacency-confirmed but decompile skipped/capped/truncated)\n")
md.append("Count: %d. These are NOT folded into `app_logic_carrying_found` -- they remain an "
           "explicit further-work bucket, not silently excluded from the corrected denominator "
           "discussion (see red line 13 anti-cheat rule).\n" % len(unresolved_adjacency_only))
md.append("\n## 6. Corrected true denominator\n")
md.append("Original `CENSUS-TRUE-DENOMINATOR.md` reported **true denominator = 3590** "
           "(`real_body_total=1840 + unknown_total=1750`). This sweep found **%d** additional "
           "functions that (a) are outside the original codexmate_lib-name population, (b) are "
           "call-graph-adjacent to it, and (c) decompile-confirmed to carry actual App business "
           "logic (not pure framework plumbing). Adding these as a new denominator component:\n\n"
           "**corrected true denominator = 3590 + %d = %d**\n\n"
           "Of these %d, %d are already on disk (by address) and %d are missing (true additional gap).\n"
           "This is a partial, not exhaustive, correction: `unresolved_adjacency_only=%d` items were "
           "adjacency-confirmed but not decompile-judged (capped/skipped/truncated) and "
           "`framework_all_candidates=%d` includes only the framework-namespace/dispatch-hint regex "
           "match; other framework families not in that regex list were not swept in this pass.\n" % (
               len(app_logic_found), len(app_logic_found), summary["corrected_true_denominator"],
               len(app_logic_found), len(already_on_disk), len(missing_from_disk),
               len(unresolved_adjacency_only), framework_all))

with open(MD_PATH_HOST, "w") as f:
    f.write("".join(md))

final = {
    "candidates_scanned": len(adjacent),
    "app_logic_carrying_found": len(app_logic_found),
    "already_on_disk": len(already_on_disk),
    "missing_from_disk": len(missing_from_disk),
    "corrected_denominator": summary["corrected_true_denominator"],
    "unresolved_adjacency_only": len(unresolved_adjacency_only),
    "framework_all_candidates": framework_all,
    "total_funcs": total_funcs,
}
print("SWEEP_OK " + json.dumps(final))
