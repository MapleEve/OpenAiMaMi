#!/usr/bin/env python3
# WIN 1.2.3 strip 函数普查: 分类 (named/thunk/lib/drop_glue_shaped/remaining_sub)
# + 从 relay owner-map 种子做调用图可达性 BFS。
# 纯 IDAPython, 服务端跑完, 结果写盘避免 MCP 截断。
import idautils, idc, ida_funcs, ida_bytes, json, re, time

SEEDS_PATH = r"Z:\\intermediate\aimami\1.2.3\windows-x64\_census\seeds.json"
OUT_PATH = r"Z:\\intermediate\aimami\1.2.3\windows-x64\_census\census_result.json"

t0 = time.time()

with open(SEEDS_PATH, "r") as f:
    seed_data = json.load(f)
seed_addrs = [int(a, 16) for a in seed_data["seeds"]]

NAME_SUB_RE = re.compile(r'^(sub_|nullsub_)[0-9A-Fa-f]+$')
NAME_J_RE = re.compile(r'^j_')

# conditional jump mnemonics (x86-64) -- excludes 'jmp' (unconditional)
COND_JMP = {
    "jz","jnz","je","jne","jg","jl","jge","jle","ja","jb","jae","jbe",
    "js","jns","jo","jno","jp","jnp","jpe","jpo","jcxz","jecxz","jrcxz",
    "loop","loope","loopne","loopz","loopnz",
}

all_funcs = list(idautils.Functions())
total = len(all_funcs)

named = 0
thunk = 0
lib_flagged = 0          # FUNC_LIB set (FLIRT-recognized library code), independent tag
drop_glue_shaped = 0
remaining_sub = 0

drop_glue_examples = []
remaining_examples = []
named_examples = []
thunk_examples = []
lib_examples = []

CHECK_LIMIT_EXAMPLES = 40

scanned_sub_count = 0

for fea in all_funcs:
    name = idc.get_func_name(fea)
    flags = idc.get_func_flags(fea)
    is_thunk_flag = bool(flags & idc.FUNC_THUNK)
    is_lib_flag = bool(flags & idc.FUNC_LIB)

    if is_lib_flag:
        lib_flagged += 1
        if len(lib_examples) < CHECK_LIMIT_EXAMPLES:
            lib_examples.append({"addr": hex(fea), "name": name})

    is_sub_pattern = bool(NAME_SUB_RE.match(name))
    is_j_pattern = bool(NAME_J_RE.match(name))

    if is_thunk_flag or is_j_pattern:
        thunk += 1
        if len(thunk_examples) < CHECK_LIMIT_EXAMPLES:
            thunk_examples.append({"addr": hex(fea), "name": name})
        continue

    if not is_sub_pattern:
        named += 1
        if len(named_examples) < CHECK_LIMIT_EXAMPLES:
            named_examples.append({"addr": hex(fea), "name": name})
        continue

    # remaining: sub_/nullsub_ pattern, not thunk -- candidate pool to sub-classify
    scanned_sub_count += 1
    is_nullsub = name.startswith("nullsub_")

    if is_nullsub:
        drop_glue_shaped += 1
        if len(drop_glue_examples) < CHECK_LIMIT_EXAMPLES:
            drop_glue_examples.append({"addr": hex(fea), "name": name, "reason": "nullsub-trivial-empty"})
        continue

    # structural heuristic scan (sub_ only)
    try:
        items = list(idautils.FuncItems(fea))
    except Exception:
        items = []
    n_insns = len(items)
    n_calls = 0
    n_cond = 0
    for iea in items:
        m = idc.print_insn_mnem(iea)
        if m == "call":
            n_calls += 1
        elif m in COND_JMP:
            n_cond += 1

    is_drop_glue = (
        n_insns > 0 and n_insns <= 40 and
        n_cond == 0 and
        n_calls >= 1 and
        (n_calls / max(n_insns, 1)) >= 0.15
    )

    if is_drop_glue and not is_lib_flag:
        drop_glue_shaped += 1
        if len(drop_glue_examples) < CHECK_LIMIT_EXAMPLES:
            drop_glue_examples.append({
                "addr": hex(fea), "name": name,
                "reason": "structural-heuristic",
                "n_insns": n_insns, "n_calls": n_calls, "n_cond": n_cond,
            })
    else:
        remaining_sub += 1
        if len(remaining_examples) < CHECK_LIMIT_EXAMPLES:
            remaining_examples.append({
                "addr": hex(fea), "name": name,
                "n_insns": n_insns, "n_calls": n_calls, "n_cond": n_cond,
                "is_lib_flag": is_lib_flag,
            })

t1 = time.time()

# ---- reachability BFS from relay owner-map seeds ----
def containing_func_start(addr):
    fn = ida_funcs.get_func(addr)
    return fn.start_ea if fn else None

seed_func_starts = set()
seed_unresolved = 0
for a in seed_addrs:
    s = containing_func_start(a)
    if s is not None:
        seed_func_starts.add(s)
    else:
        seed_unresolved += 1

visited = set()
queue = list(seed_func_starts)
for s in seed_func_starts:
    visited.add(s)

qi = 0
while qi < len(queue):
    fea = queue[qi]
    qi += 1
    fn = ida_funcs.get_func(fea)
    if fn is None:
        continue
    try:
        items = list(idautils.FuncItems(fea))
    except Exception:
        items = []
    callees = set()
    for iea in items:
        for xref in idautils.CodeRefsFrom(iea, 0):
            tf = ida_funcs.get_func(xref)
            if tf is not None and tf.start_ea == xref and tf.start_ea != fea:
                callees.add(tf.start_ea)
    for c in callees:
        if c not in visited:
            visited.add(c)
            queue.append(c)

t2 = time.time()

reachable_from_relay_anchors = len(visited)

estimated_app_candidate_pool = remaining_sub

result = {
    "win_total": total,
    "named": named,
    "thunk": thunk,
    "lib_flagged_FUNC_LIB": lib_flagged,
    "drop_glue_shaped": drop_glue_shaped,
    "remaining_sub": remaining_sub,
    "scanned_sub_candidate_count": scanned_sub_count,
    "seed_count_input": len(seed_addrs),
    "seed_func_starts_resolved": len(seed_func_starts),
    "seed_unresolved": seed_unresolved,
    "reachable_from_relay_anchors": reachable_from_relay_anchors,
    "estimated_app_candidate_pool": estimated_app_candidate_pool,
    "timing_sec": {"classify": round(t1 - t0, 2), "bfs": round(t2 - t1, 2), "total": round(t2 - t0, 2)},
    "examples": {
        "named": named_examples,
        "thunk": thunk_examples,
        "lib_flagged": lib_examples,
        "drop_glue_shaped": drop_glue_examples,
        "remaining_sub": remaining_examples,
    },
    "notes": {
        "classification_order": "priority: FUNC_THUNK-flag-or-j_-prefix -> thunk; else non-sub_/nullsub_-name -> named; else sub_/nullsub_ pattern scanned for drop_glue_shaped heuristic; leftover -> remaining_sub",
        "drop_glue_heuristic": "nullsub_ prefix always counted; else n_insns<=40 and zero conditional jumps and >=1 call and call-ratio>=0.15 and not FUNC_LIB-flagged -- structural approximation of Rust compiler drop_in_place/destructor glue on a stripped binary, NOT name-based (no drop_in_place symbols survive strip)",
        "lib_flagged_is_orthogonal": "lib_flagged_FUNC_LIB counts FLIRT-recognized functions regardless of name/thunk bucket; NOT subtracted from named/thunk/drop_glue/remaining_sub buckets (those are mutually exclusive & exhaustive over win_total); use it as an additional cross-cut view of stdlib/CRT coverage",
        "reachability_method": "BFS over call-graph edges = CodeRefsFrom(insn,0) landing exactly on another function's start_ea (captures direct calls + tail-call jmp-to-function-start); seeds = 200 dedup addrs from relay-core(177)+commands/relay(23) owner-map.jsonl",
    },
}

with open(OUT_PATH, "w") as f:
    json.dump(result, f, ensure_ascii=False)

print(json.dumps({k: v for k, v in result.items() if k != "examples"}, ensure_ascii=False))
