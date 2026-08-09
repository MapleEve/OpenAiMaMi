# 指定行为面的递归叶归约 — AiMaMi 1.2.6 macOS x86_64

> 证据类型：活动 x86_64 IDB 的命名、完整反编译、直接调用边、前端 `ipc-contracts.jsonl` 与中文 IDB 注释。`LIVE_REFERENCE_NOT_RUN`；未运行真实 App。此页只陈述已到达的实现叶与 terminal，不用 body 大小代替分支证据。

## 逐叶递归闭合

| 面 | 已证实调用链 | 终端/边界 | 状态 |
| --- | --- | --- | --- |
| router readiness | dispatcher `0x10062b180` → `router_unlock_auth::readiness 0x1007365a0` → `load_auth_file 0x10023d510`、`auth_is_usable_real_oauth 0x100733b60`、`read_marker`、`backup_contains_usable_real_oauth 0x100735d30`、`has_restorable_real_oauth 0x100733c80` → snapshot | `std::fs::read_to_string`、`std::fs::read`、serde parse 是 filesystem/parser terminal；OAuth 剩余时长是 auth-domain terminal；Tauri 回调 serializer 是 external terminal。 | x86_64 body 证据完整，行为等价比对部分完成（见下方“证据类型标注”） |
| voice settings | dispatcher `0x100623880` → handler `0x1004961d0` → `update_settings_internal 0x10048ffb0` → `write_runtime_file 0x10047f700` / listener 控制 / `shutdown_standby_sidecar 0x10048fa80` / `load_status 0x100475170` → `emit_status 0x100474d50` | `write_atomic_with_mode 0x100a4ca40` 经临时文件、`write_all`、`sync_data`、`rename` 与 `TempFileCleanup` 到 filesystem terminal；sidecar stdin/`Command::spawn` 是 process terminal；watchdog/cleanup 是 thread terminal；`Emitter::emit` 是 Tauri event terminal。 | x86_64 body 证据完整，行为等价比对部分完成（见下方“证据类型标注”） |
| start capture | command `0x100494f50` → `start_capture 0x100476ac0` → permission sync、workspace/config 读取、sidecar temporary config 写入、standby/legacy 启动、watchdog、tray/overlay/audio、`emit_status`*、cleanup `remove_file` | macOS 权限服务是 system terminal；临时文件 `OpenOptions`/`write_all`/`remove_file` 是 filesystem terminal；sidecar spawn 是 process terminal；watchdog 是 thread terminal；状态事件是 Tauri event terminal。 | `start_capture` 自身 body 已确认非截断（45186 B）；`emit_status`* 见下方证据类型标注（无基线文件可比对） |

## 证据类型标注（2026-08-06 首轮，见 `reviews/X64-DIRECT-DECOMPILE-REVERIFY-20260806.md`；同日精修见 `reviews/RECURSIVE-LEAF-REPAIR-20260806.md`）

本页三个面共涉及 9 个指定递归叶函数。9 项均已在当前 x86_64 IDB 直接反编译命中，函数体真实存在、非空、非截断，且 mangled hash 与 ARM64 基线不同（排除"符号迁移伪造"假说）。截至 2026-08-06 追加轮，9 项已**全部**完成逐行行为等价比对：

> **20260806 精修说明（首轮）**：首轮对 `load_auth_file` 的"逐行比对"实际建立在被 MCP 传输层截断在约 1023 字符的预览上（伪代码字段内嵌 `"[45329 chars total]"` 标记），从未取得完整 body；`emit_status`/`load_status` 的"未找到基线文件"表述是错误的——两个基线文件均确实存在。精修轮已通过 `basic_blocks` 分块枚举 + MCP `output_truncated` 的 `download_url` 拉取完整 45329 字符 body（花括号配平 66/66，验证非截断桩），并基于两侧完整 body 对 `load_auth_file`、`emit_status`、`load_status` 三项重做真实逐行比对，详见 `reviews/RECURSIVE-LEAF-REPAIR-20260806.md` 第1-3节。
>
> **20260806 追加轮说明**：剩余 5 项（`shutdown_standby_sidecar`、`write_runtime_file`、`auth_is_usable_real_oauth`、`backup_contains_usable_real_oauth`、`has_restorable_real_oauth`）已在同日晚些时候补做完毕，direct mac IDA MCP 单次 `decompile()` 取得完整 body（无截断标记），与 1.2.3/1.2.4 ARM64 baseline 逐段控制流/调用序列/字段偏移比对，全部裁定 `CONFIRMED logic_consistent`，详见 `reviews/RECURSIVE-LEAF-REPAIR-20260806.md` 第5-6节。

| 证据类型 | 函数 | 说明 |
| --- | --- | --- |
| 逐行行为等价比对已确认逻辑一致 | 全部 9 项：`load_auth_file 0x10023d510`、`write_atomic_with_mode 0x100a4ca40`、`emit_status 0x100474d50`、`load_status 0x100475170`、`shutdown_standby_sidecar 0x10048fa80`、`write_runtime_file 0x10047f700`、`auth_is_usable_real_oauth 0x100733b60`、`backup_contains_usable_real_oauth 0x100735d30`、`has_restorable_real_oauth 0x100733c80`（后者基线取自 1.2.4 ARM64，1.2.3 无此符号） | 全部 9 项 x64 hash 与对应 ARM64 基线 hash 不同但逻辑一致；差异仅限编译器内联深度（state wrapper vs 内联 try_get+panic）与 Hex-Rays 字符串常量显示折叠方式，均非行为差异。`emit_status`/`load_status` 的基线文件此前被误报"未找到"，实际存在于 `raw/aimami/1.2.3/macos-arm64/core/voice/runtime/ida/pseudocode/` |
| x64 body 真实存在，ARM64 基线文件独立存在但未逐行比对 | （无，5 项已于追加轮补做完毕） | — |
| x64 body 真实存在，未找到同名 ARM64 基线独立文件可比对 | （无） | — |

**9/9 完成，accepted_unknown=0。** 上表与 `data/producer-ledger.json`/`gate-report.json`/`manifest.json` 的 `canonical_unknown_closure_20260806.recursive_leaf_verification_20260806_reverify` 字段和 `data/diff-readiness-report.json` 的 `unresolved_in_refinement` 字段一致，均已同步更新为 9/9，不构成矛盾。`behavior_blockers`/`blockers` 中 `recursive-implementation-leaf-closure-not-produced`（本页所述 9 函数逐行比对维度）现已闭合；顶层 `gate-report.json`/`manifest.json` 的当前 `blockers` 数组本就未列出该项（与本页三个 IPC 面的"叶归类闭合"维度一致，两者是独立维度，此前 `REVERSE-STATUS.md` 曾混用两者措辞造成表述不一致，已在本轮同步修正）。

## DTO、decode 与 error envelope

- 前端 `update_voice_runtime_settings` 合同为 `{enabled, shortcut, speechModel, processingMode, processingModeId}`；`enabled` 直接透传，后四项由前端以 `??null` 归一化。x86_64 dispatcher 对应顺序逐项 `CommandArg::from_command`：`enabled`、`shortcut`、`speechModel`、`processingMode`、16-byte `processingModeId` payload。
- 任一 `CommandArg` decode 分支均立即进入 `InvokeResolver::return_result 0x10026b540`；该函数将错误对象交给 Tauri resolver callback。JSON 形状属于 Tauri serializer external terminal，本包不把它伪造为自定义 DTO schema。
- decode 完成后 handler 调用 core；业务失败的 `Result` 转为 responder 输入，成功由 `CoreEnvelope::ok` 包装并由 `InvokeResolver::respond` 交给同一 Tauri callback terminal。`CoreEnvelope::ok` 的 x86_64 helper 为 `0x1005ac480`。
- `start_voice_capture` 与 `get_codex_router_auth_readiness` 均为零业务参数前端调用；readiness 前端消费目标字段包含 `willUseNoAccountMode`，但完整响应字段由 Tauri serializer external terminal 输出，不扩大为未经运行验证的字段表。

## 写入、sidecar、回滚和危险副作用

- `write_runtime_file` 先确保目录、序列化 runtime 内容，再调用原子写。`write_atomic_with_mode` 建立同目录 temporary file，执行 `write_all` 与 `sync_data`，随后以 `replace_staged_file` 的 `rename` 替换；每一个写入/同步/替换失败均返回 `Result`，失败路径由 `TempFileCleanup` 清理 staged file。这里闭合的是文件原子性与 temporary-file cleanup，不宣称高层设置、listener、sidecar 之间存在跨资源 business rollback transaction。
- `shutdown_standby_sidecar` 向 sidecar stdin 写控制消息，并可创建 cleanup thread；线程创建失败有显式错误分支。`start_capture` 的 temporary config cleanup 会调用 `remove_file`，这是危险删除副作用，必须由未来验收检查残留。
- `emit_status` 把 `VoiceRuntimeInner` payload 交给 `Tauri::Emitter::emit`；事件投递结果属于 Tauri external terminal。`load_status` 是 runtime-state read leaf，不据其读取行为推断持久化写入。
- auth readiness 的 file、marker、backup 和 snapshot 读取路径均已定位；没有把 file parse failure 或 backup validation failure 夸大为 IPC JSON error schema。

## 收口与平台界限

- 本页的三个指定面没有 `accepted_unknown`：`accepted_unknown_count=0`，因此没有可省略的 `recovery_attempts`。每一项原先未展开的内部边都已落到直接 IDA 证据或上述 system/external terminal；不以 `drop_in_place`、shim、body-size 或相邻地址作为闭合依据。
- macOS x86_64 是本轮 sidecar/IO/process 行为证据的平台；ARM64 地址 parity 仅为 scope note，不构成本页 blocker。Windows 是独立下一 lane，未开始。
- `LIVE_REFERENCE_NOT_RUN` 保持；implementation gate、`consumerStartReady`、`strictImplementationUse`、`readyToImplement`、`implementation_use` 与 `gate_accepted` 均保持 false。