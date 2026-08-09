# windows AiMaMi 1.2.3 custom-instructions

同步时间：2026-07-25
范围：windows-x64 AiMaMi 1.2.3, custom-instructions frontend command cluster (5 commands)
最终结论：5/5 migrated_no_behavior_diff — 与 1.0.9 windows 基线（`audits/windows-1.0.9-custom-instructions`）比对无行为差异，本轮已在 1.2.3 windows 真实二进制上独立重新核验（live IDA，2 method 交叉），非直接照抄旧结论。gate 上限沿用 1.0.9 基线（accepted_ready_absent_backend_orphan_ida_direct），未升级。

## 证据索引
- 前端契约：`raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`（5 命令 grep 命中，camelCase wrapper + snake_case command 均一致）
- 后端逆向（本轮新增）：`raw/aimami/1.2.3/windows-x64/custom-instructions/<command>/`（5 leaf，各含 manifest.json/README.md/AI.md/SYSTEM-DIFF.md/audits/*-ida-closure.json/validation/result.json/file-manifest.json）
- IDA live gate：`server_health` on win IDA -> status=ok, uptime_sec=120249.041, IDA decompiler_ready=true, module="AiMaMi.1.2.3 win64.exe", idb_path="<二进制路径>\AiMaMi.1.2.3 win64.exe.i64"（本轮查询前已确认）
- 1.0.9 windows 基线（migration source）：`audits/windows-1.0.9-custom-instructions/`（source_binary_sha256=a5822387fa3f56dc03893111f4ffdd074daa882e8887ec4e7c394879c0e9fe0b, absence_anchor=0x1412804eb）
- 二进制 SOT：`raw/binary/AiMaMi.1.2.3 win64.exe`（sha256=aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396）

## Coverage
5/5 commands covered — locator canonical=5 (ipc-contracts.jsonl 双写命名 grep), locator=5, missed=0, extra=0. coverage_mode=backend-owned-target-universe (frontend-orphan cluster; not full-app).

## Per-target Result Matrix

| command | frontend CCF | backend owner/pseudocode | call-tree | interface | error path | boundary | gate leaf |
|---|---|---|---|---|---|---|---|
| load_custom_instruction_state | confirmed (argKeys=[]) | absent (2-method 0/0) | n/a | frontend-only stub `{}` | frontend-only stub semantics unchanged from 1.0.9 | pre-existing cross-version cross-platform gap, not a 1.2.3 regression | accepted (absence substitute) |
| preview_custom_instruction_apply | confirmed (argKeys=[content]) | absent (2-method 0/0) | n/a | `{ content: string }` | 同上 | 同上 | accepted |
| apply_custom_instruction | confirmed (argKeys=[content,templateCode,templateTitle,source]) | absent (2-method 0/0) | n/a | `{ content, templateCode?, templateTitle?, source? }` | 同上 | 同上 | accepted |
| clear_custom_instruction_block | confirmed (argKeys=[]) | absent (2-method 0/0) | n/a | `{}` | 同上 | 同上 | accepted |
| rollback_custom_instruction | confirmed (argKeys=[historyId]) | absent (2-method 0/0) | n/a | `{ historyId: string }` | 同上 | 同上 | accepted |

## Frontend Control Flow
5 个 `tauriInvokeWrapper`（`assets/index-*.js`，callee=`re`），argKeys 与 1.0.9 基线逐字节一致；无 UI/argKeys/wrapper 结构变化。

## Backend Control Flow / Pseudocode / Call-tree
无 owner——`func_query name_regex=<command>`（5 次，逐命令）与模块级 `func_query name_regex=custom_instruction`（1 次，全模块扫描）全部 0 命中；`find_regex pattern=<command>`（5 次）全部 0 命中。广义子串 `find_regex pattern=custom.instruct` 命中 1 处（0x1417893f2，字符串 "custom-instructions"），`xrefs_to(0x1417893f2)` 显示唯一 1 处 **data** xref，来自共享函数 `sub_140714E90`（0x838 bytes）——与 1.0.9 windows 锚点（0x1412804eb）、1.1.1 macOS 锚点（0x1011514d1）同角色：路径/位置常量 blob，非命令 rodata 字符串。无 pseudocode、无 call-tree（无 owner 可逆）。

## Interface / Error / Boundary
接口边界完全继承自 1.0.9 前端契约（本轮已逐字段核对 argKeys 一致）；无 upstream backend DTO 可比对（backend absent）。C5 当前实现为 product/local 行为，非 upstream backend parity 复刻。

## Gate Leaf Status
5/5 accepted，accepted_substitute=same_platform_ida_backend_absence_for_frontend_orphan_command，gate ceiling 与 1.0.9 基线一致（未升级）：consumerStartReady=true / strictImplementationUse=true / readyToImplement=true / implementation_use=true / gate_accepted=true / full_leaf_100=true。

## Diff 结论
migration_class=migrated_no_behavior_diff。5 个命令的命令名、argKeys、后端 absent 状态在 1.0.9→1.2.3 之间逐项核对均无变化（跨 1.1.1/1.1.8 mac+win 的既有记录中，该 voice/custom_instruction cluster 也持续确认为 pre-existing platform gap，非某次版本引入的回归）。本轮未见 1.1.8 REVERSE-STATUS.md 记录中曾出现过的任何新增 owner 迹象。

## Unknown / Missing
- macOS 1.2.3 custom-instructions 尚无独立 canonical `audits/macos-1.2.3-custom-instructions/` 包（见 REVERSE-STATUS.md 4011 行 targets 清单）；本包**仅覆盖 windows-x64**，禁止用本结论外推 macOS 1.2.3。
- 继承自 1.0.9 基线的未解决项（原样保留，未新增）：`load_custom_instruction_state` 首次加载失败时当前 C5 页面缺少专门可见的错误提示，可能被感知为 spinner/空状态；成功 apply/clear/rollback 使用 `setQueryData` 而非 invalidation，改动会影响 UI 状态时序。

## Action / Non-action
- Action：C5 侧继续视 custom-instructions 为纯前端/product-local 行为，不追加 upstream backend 复刻工作。
- Non-action：不对 5 个命令做进一步 IDA 深逆（无 owner 可逆，无新证据可挖）；不外推至 macOS 1.2.3（保持 Unknown，交由未来独立轮次核验）。
