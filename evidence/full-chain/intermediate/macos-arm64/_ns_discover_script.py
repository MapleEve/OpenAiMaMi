import idaapi, idautils, idc, ida_funcs, ida_name
import re, json, os, time, collections

OUT_DIR = "/Volumes/Work/internal-history//intermediate/aimami/1.2.3/macos-arm64"
CENSUS_JSONL = os.path.join(OUT_DIR, "CENSUS-TRUE-DENOMINATOR.jsonl")
LOG_PATH = os.path.join(OUT_DIR, "_ns_discover_run.log")
OUT_JSON = os.path.join(OUT_DIR, "_ns_discover_histogram.json")

t0 = time.time()
log_lines = []
def log(msg):
    line = "[%.1fs] %s" % (time.time() - t0, msg)
    log_lines.append(line)

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

# same FRAMEWORK_RE/DISPATCH_HINT_RE as original sweep, so we can exclude
# already-swept namespaces from this histogram
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

# crate-prefix extraction: leading identifier before first '::', with
# generics/closures stripped, ignoring core::ptr::drop_in_place<...> (unwrap
# the generic to look at the inner type's prefix instead, since that's the
# thing that actually indicates which crate this shim belongs to)
DROP_RE = re.compile(r'^core::ptr::drop_in_place<(.*)>::h[0-9a-f]+$')
PREFIX_RE = re.compile(r'^([A-Za-z_][A-Za-z0-9_]*)')

def crate_prefix(name):
    if not name:
        return "(none)"
    n = name
    m = DROP_RE.match(n)
    if m:
        n = m.group(1)
    n = n.lstrip('_').lstrip('<')
    m = PREFIX_RE.match(n)
    return m.group(1) if m else "(unparsed)"

total_funcs = 0
already_covered_seen = 0
codexmate_named_but_missed = 0
already_swept_framework = 0
histogram = collections.Counter()
examples = {}

for ea in idautils.Functions():
    total_funcs += 1
    if ea in already_covered:
        already_covered_seen += 1
        continue
    raw = idc.get_func_name(ea)
    best, decoded_raw = get_demangled_raw(ea, raw)
    if (best and 'codexmate_lib' in best) or (decoded_raw and 'codexmate_lib' in decoded_raw):
        codexmate_named_but_missed += 1
        continue
    hay = (best or "") + " | " + (raw or "")
    if FRAMEWORK_RE.search(hay) or DISPATCH_HINT_RE.search(hay):
        already_swept_framework += 1
        continue
    pfx = crate_prefix(best or raw or "")
    histogram[pfx] += 1
    if pfx not in examples:
        examples[pfx] = []
    if len(examples[pfx]) < 3:
        examples[pfx].append({"ea": "0x%x" % ea, "name": best})

log("total_funcs=%d already_covered_seen=%d codexmate_named_but_missed=%d already_swept_framework=%d distinct_prefixes=%d"
    % (total_funcs, already_covered_seen, codexmate_named_but_missed, already_swept_framework, len(histogram)))

top = histogram.most_common(120)
out = {
    "total_funcs": total_funcs,
    "already_covered_seen": already_covered_seen,
    "codexmate_named_but_missed_bookkeeping_gap": codexmate_named_but_missed,
    "already_swept_by_original_framework_re": already_swept_framework,
    "remaining_unswept_pool": sum(histogram.values()),
    "distinct_prefixes_in_remaining_pool": len(histogram),
    "top_prefixes": [{"prefix": p, "count": c, "examples": examples.get(p, [])} for p, c in top],
}
with open(OUT_JSON, "w") as f:
    json.dump(out, f, indent=2, ensure_ascii=False)
log("wrote %s" % OUT_JSON)
with open(LOG_PATH, "w") as f:
    f.write("\n".join(log_lines) + "\n")
print("DONE remaining_unswept_pool=%d distinct_prefixes=%d" % (sum(histogram.values()), len(histogram)))
