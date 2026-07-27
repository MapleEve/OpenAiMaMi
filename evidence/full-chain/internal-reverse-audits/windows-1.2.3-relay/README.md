# AiMaMi 1.2.3 Windows relay — internal-reverse 结论包

同步时间：2026-07-24
范围：`core::relay::*`（Windows 侧 28/32 已知子模块有目录，4 个 macOS-only 子模块 Windows 侧确认零证据）+ `commands::relay`（23 条命令，Windows 侧 23 个 `.c` 文件，其中 1 个是 ICF 折叠共享 dispatcher + 2 个未命名 helper）
最终结论：**Windows 侧反编译覆盖明显落后于 macOS**（208 个去重地址 vs Mac 638），六维 full_leaf_100 门未闭合。当前档位 `consumerStartReady` 22/23（`get_codex_router_auth_readiness` 因 ICF 折叠单独标记为 blocked-on-Windows-native-evidence，需引 Mac 侧为准）。本包内部专用，不对外发布（红线 23）。

## 证据索引

- 底稿：`internal-reverse/audits/BASELINE-FINAL-1.2.3.md`、`internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`
- 双平台字节级门禁终审：`goal-aimami-122/RELAY-DOUBLE-PLATFORM-100-GATE.md`（§③ Win 完整性首轮/§④ 工具截断上限实测+owner-map 补完/§⑤ 终审文件系统实测）
- raw evidence 指针：见 `pointers/evidence-paths.md`

## Coverage

- **owner-map 基线**：`relay-core/owner-map.jsonl` 177 行（`no_decompile_performed=true`，仅 owner/addr/size/name），Tier B（已命名）64 / Tier C（`sub_XXXX` 候选）113。
- **首轮 decompile 落盘核验**：9 个模块 100% 落盘（atomic_write/codex_diagnostic/codex_project_state/codex_writer/fetch_models/health_check/image_compat/manager/proxy_server/router_transition，owner-map 80 / 落盘 83），19 个模块 0 落盘（97 个函数）。
- **同日后续两轮补完**：decompile 工具存在 999 字符硬截断（`code` 字段总长恒 1024），改用 `disasm` 分块反汇编（`max_instructions≤300` 安全阈值）续接补完；15 个函数用此方法从纯截断桩补成完整反汇编。
- **三轮终审（文件系统直接实测）**：`windows-x64/**/ida/pseudocode/*.c` 全量 311 个文件，去重后 **208 个不同地址**；103 个重复文件中 23 组是"截断桩+完整孪生"配对（逐组人工核验有完整孪生），5 组是 `version-delta/` 版本差异摘录副产物（非缺口）。
- **commands/relay**：23 个 `.c` 文件，与 23 条上游命令一一对应（含 1 个 ICF 折叠 `open_path` + 2 个未命名 `sub_140187580`/`sub_140CCE030`）。

**诚实说明**：208 是聚合去重数字，本包**未对原 19 个零反编译模块逐个重新核实最终完成度**（只有聚合数字被重新核验），见 `gate-report.json` unknowns。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status`）与 `data/task-plan.json`。dim2 标 `partial`（非 `strong`，区别于 macOS 包）；dim1 标 `N/A-for-this-package`（前端证据是跨平台的，在 macOS 包里，不在此重复）。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/WIN-DECOMPILE-CLOSEOUT-1.2.3.md`。

## Interface / Error / Boundary

未闭合（dim4），同 macOS 包。

## Gate Leaf Status

consumerStartReady 22/23；`get_codex_router_auth_readiness` blocked-on-Windows-native-evidence（引 Mac 为准）；strictImplementationUse/readyToImplement 均 0。

## Diff 结论

Windows relay-core 与 macOS core/relay 的模块切分方式不完全一致：Win 的 `managed_blocks`（10 个 owner-mapped 函数）在 Mac 侧没有独立目录，等价逻辑并入 Mac 的 `codex_writer`（19 文件）——两平台模块切分差异，非漏逆（`local_outtake` 分类）。详见 `SYSTEM-DIFF.md`。

## Unknown / Missing

1. 4 个 macOS-only 子模块（`transition_journal`/`breaker`/`native_responses_compat`/`upstream_url`，20 个 Mac 函数）在 Windows 侧经四层方法学搜索零命中，标 `Unknown`（非确认不存在，strip 二进制+可能的条件编译无法完全排除以完全不同字符串形态存在）。
2. `sub_140187580`/`sub_140CCE030` 与 Mac `diagnose_codex_router`/`test_relay_draft_stream` 的身份映射未做字节签名比对。
3. 18 个原零反编译子模块的逐模块最终完成度未重新逐一核实（仅聚合 208 数字被核实）。
4. dim3 call-tree-to-leaf 目录、dim4 interface/DTO、dim6 test/acceptance mapping：均未产出。
5. 23 个截断桩重复文件仍物理存在于 raw/（已确认均有完整孪生，属文件卫生问题非阻断项）。

## Action / Non-action

- **可以做**：22/23 命令达 `consumerStartReady`，可开工但不得宣称 upstream 100% 等价；`get_codex_router_auth_readiness` 的 Windows 特定实现细节应参照 macOS 侧证据 + 平台差异推理，而非等待一份根本不存在的 Windows 独立反编译。
- **不要做**：不得用 macOS 证据外推 Windows 4 个 macOS-only 子模块的存在或行为；不得把 208 去重数字当作 `full_leaf_100`；不得对外发布本包任何内容。
