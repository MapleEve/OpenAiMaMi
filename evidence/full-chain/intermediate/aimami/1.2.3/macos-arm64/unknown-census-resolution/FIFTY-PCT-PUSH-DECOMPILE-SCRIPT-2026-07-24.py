import json, re, os, time

ROOT = "/Volumes/Work/internal-history//intermediate/aimami/1.2.3/macos-arm64"
UCR = ROOT + "/unknown-census-resolution"

with open(UCR + "/_fifty_pct_selected.json") as f:
    selected = json.load(f)

print("loaded selected:", len(selected))

import IDA decompiler, idaapi
IDA decompiler_ok = IDA decompiler.init_IDA decompiler_plugin()
print("IDA decompiler_init:", IDA decompiler_ok)

GLUE_RE = re.compile(r"drop_in_place|drop_slow|_rust_dealloc|Drop\$GT\$::drop|InterlockedDecrement|InterlockedCompareExchange")
KEYWORDS = ["send(", "write(", "log::", "tracing::", "File::", "encode", "validate", "handle_",
            "sqlite", "parse_", "hash(", "INSERT", "SELECT", "reqwest::", "Client::", "http::",
            "Url::", "serde_json::to_", "fwrite", "fopen"]
VTABLE_RE = re.compile(r"\(\*\(void \(__fastcall \*\*\)")
TRUNC_MARKERS = ["[TRUNCATED", "chars total]", "truncates", "..."]

verif_path = UCR + "/FIFTY-PCT-PUSH-VERIFICATION-2026-07-24.jsonl"
dec_path = UCR + "/FIFTY-PCT-PUSH-DECOMPILES-2026-07-24.jsonl"

n_ok = 0
n_fail = 0
n_glue = 0
n_nonglue = 0
biz_candidates = []
vtable_funcs = []

t0 = time.time()
with open(verif_path, "w") as vf, open(dec_path, "w") as df:
    for i, row in enumerate(selected):
        ea_str = row["ea"]
        ea = int(ea_str, 16)
        try:
            cf = IDA decompiler.decompile(ea)
            if cf is None:
                n_fail += 1
                vf.write(json.dumps({"ea": ea_str, "module": row["module"], "name": row["name"],
                                      "size": row["size"], "error": "decompile_returned_none",
                                      "resolution_pass": "2026-07-24-track-b-fifty-pct-push"}) + "\n")
                continue
            txt = str(cf)
        except Exception as e:
            n_fail += 1
            vf.write(json.dumps({"ea": ea_str, "module": row["module"], "name": row["name"],
                                  "size": row["size"], "error": repr(e),
                                  "resolution_pass": "2026-07-24-track-b-fifty-pct-push"}) + "\n")
            continue

        n_ok += 1
        char_len = len(txt)
        truncated = any(m in txt for m in TRUNC_MARKERS)

        glue_hits = sorted(set(m for m in ["drop_in_place","drop_slow","_rust_dealloc","Drop$GT$::drop",
                                            "InterlockedDecrement","InterlockedCompareExchange"] if m in txt))
        pure_drop_glue_shape = bool(GLUE_RE.search(txt))

        kw_hits = [k for k in KEYWORDS if k in txt]

        vtable_matches = VTABLE_RE.findall(txt)
        vtable_count = len(vtable_matches)
        if vtable_count > 0:
            vtable_funcs.append(ea_str)

        if pure_drop_glue_shape and not kw_hits:
            n_glue += 1
        else:
            n_nonglue += 1
            biz_candidates.append({"ea": ea_str, "module": row["module"], "name": row["name"],
                                    "kw_hits": kw_hits, "pure_drop_glue_shape": pure_drop_glue_shape,
                                    "char_len": char_len})

        rec = {
            "ea": ea_str,
            "module": row["module"],
            "name": row["name"],
            "size": row["size"],
            "bucket_quota": row.get("_bucket_quota"),
            "selection_angle": row.get("_selection_angle"),
            "verdict": "genuinely_inlined" if (pure_drop_glue_shape and not kw_hits) else "NEEDS_MANUAL_REVIEW",
            "glue_hits": glue_hits,
            "biz_keyword_hits_raw": kw_hits,
            "vtable_indirect_call_count": vtable_count,
            "truncated": truncated,
            "char_len": char_len,
            "resolution_pass": "2026-07-24-track-b-fifty-pct-push",
        }
        vf.write(json.dumps(rec, ensure_ascii=False) + "\n")
        df.write(json.dumps({"ea": ea_str, "name": row["name"], "module": row["module"],
                              "pseudocode": txt}, ensure_ascii=False) + "\n")

        if (i+1) % 50 == 0:
            print(f"progress {i+1}/{len(selected)} elapsed={time.time()-t0:.1f}s")

print("DONE")
print("n_ok:", n_ok, "n_fail:", n_fail)
print("n_pure_glue_no_kw:", n_glue, "n_needs_review:", n_nonglue)
print("vtable_funcs count:", len(vtable_funcs))
summary = {
    "n_selected": len(selected),
    "n_ok": n_ok,
    "n_fail": n_fail,
    "n_pure_glue_no_kw": n_glue,
    "n_needs_manual_review": n_nonglue,
    "biz_candidates": biz_candidates,
    "vtable_func_eas": vtable_funcs,
    "elapsed_sec": time.time() - t0,
}
with open(UCR + "/_fifty_pct_run_summary.json", "w") as sf:
    json.dump(summary, sf, ensure_ascii=False, indent=2)
print("summary written")
