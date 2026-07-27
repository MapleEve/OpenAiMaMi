# AiMaMi 1.2.3 macOS relay — thread-model / call-tree 摘要（intermediate）

生成：2026-07-24。本文件是 SMB `intermediate/` 层的中间摘要，供 `internal-reverse/audits/macos-1.2.3-relay/` 结论包的 logic/ 文档引用/追溯；不放 raw dump 原文。

## Thread model

- **主进程（App）**：Tauri 主线程持有 `RelayManager`（`core::relay::manager`，57 函数）单例，作为 relay 状态中枢；命令层（`commands::relay`）通过 Tauri IPC async command handler 调用，`tauri::ipc::InvokeResolver<R>::respond_async_serialized` 是常见的异步响应路径（见 `get_relay_active`/`get_relay_proxy_status`/`load_quota_history` 等的定位方法，均经由该 closure hash 匹配定位）。
- **本地代理线程**：`core::relay::proxy_server`（38 函数）起本地 axum HTTP server，独立于主 UI 线程处理转发请求；`translator`（49 函数）在该线程/task 内做协议转换（Anthropic↔OpenAI Chat↔Responses）。
- **SSE 流状态机**：4 个（`stream` 相关，散落在 `translator`/`proxy_server` 命名空间内，未独立成子模块目录），处理流式响应转发给前端 `test_relay_draft_stream`（Tauri Channel）。
- **诊断/自愈**：`codex_diagnostic`（83 函数，本模块内函数数量最多）在检测到线程污染（`thread_poisoned`/`guardian_poisoned`）时触发自愈流程，涉及 `codex_thread_visibility`（62 函数）改写 rollout session_meta。
- **文件系统交互线程/task**：`atomic_write`（3 函数）+ `storage`（13 函数）负责 config.toml、quota 快照、MiniMax M3 迁移的原子写；`keychain`（10 函数）负责明文密钥文件读写（红线：不加混淆/系统 keychain）。

## Call-tree 深度观察（非系统化 dim3 leaf 目录，仅摘要）

- 命令层 → core 层通常 1-2 跳（wrapper 反序列化入参 → 调用 manager/proxy_server/translator 等模块函数）。
- core 层内部调用较深：`translator` 模块 98K 行逻辑体量意味着单个转换函数内部有大量分支（模型族判定、reasoning 处理、多轮工具调用状态维护），尚未逐层拆解成显式调用树文档。
- 破坏性副作用叶子（见 BASELINE-FINAL-1.2.3.md 全编目）：`quit_keeping_router`（`AppHandle::exit(0)`）、`codex_thread_visibility::checkpoint_after_committed_write`（`PRAGMA wal_checkpoint(TRUNCATE)`）、多处 `codex_writer`/`invariants`/`config_takeover`/`transition_journal`/`router_unlock_auth` 的 `remove_file`（均有备份/存在性兜底）。

## 已知残留（与结论包一致）

- 系统化 per-command call-tree-to-leaf 规约未产出（dim3 partial，非 closed）。
- 语义关键词孤儿扫描未执行——可能存在挂在 `core::relay` 命名空间外、用 `brand`/`litellm`/`defaultWireApi`/`noAccountMode` 才能搜到的孤儿函数，本摘要未覆盖。

指针：详细来源见 `internal-reverse/audits/macos-1.2.3-relay/pointers/evidence-paths.md`。
