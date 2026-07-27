# AiMaMi 1.2.3 Windows relay — thread-model / call-tree 摘要（intermediate）

生成：2026-07-24。本文件是 SMB `intermediate/` 层的中间摘要，供 `internal-reverse/audits/windows-1.2.3-relay/` 结论包的 logic/ 文档引用/追溯；不放 raw dump 原文。

## Thread model

- 与 macOS 侧结构假定一致（同一 Rust 代码库交叉编译）：`manager`（RelayManager 中枢）、`proxy_server`（本地 axum 代理）、`translator`（协议转换）分别承担类似角色。**但本轮 Windows 侧未对每个模块做独立的线程边界验证**，此摘要的"一致假定"是基于同代码库推理，非 Windows 侧独立反编译逐一证实（dim5 platform gate 要求独立闭合，此摘要不作为独立证据使用）。
- **`get_codex_router_auth_readiness` 的特殊性**：Windows 链接器把该命令的包装体与 25+ 其他命令的包装体 ICF 折叠进同一个共享 dispatcher trampoline（`open_path@0x140194810`），说明 Windows 构建在这一批"简单反序列化入参→调用内层→序列化返回"形状的命令上做了比 macOS/LLVM 更激进的代码折叠——这是一个真实的**平台构建/链接器差异**观察点，不是逆向遗漏。
- Windows 侧命令层普遍走 `tauri::ipc` 异步响应路径（与 macOS 一致的框架层行为，Tauri 本身跨平台）。

## Call-tree 深度观察

- Windows 侧 208 个已反编译地址中，函数体本身（非 wrapper-only）的深度与 macOS 侧同名函数在体量上大致可比（例如 `translator` 相关大函数体量普遍在 60KB-260KB 反编译文本量级，与 Mac `translator` 98K 行逻辑体量的量级相符）。
- 系统化 per-command call-tree-to-leaf 规约未产出（dim3 weak，弱于 macOS 侧的 partial）。

## 已知残留（与结论包一致）

- 18 个原零反编译子模块的逐模块最终完成度未逐一重新核实（仅聚合 208 数字确认）。
- 4 个 macOS-only 子模块（`transition_journal`/`breaker`/`native_responses_compat`/`upstream_url`）在 Windows 侧零证据，标 Unknown。
- 语义关键词孤儿扫描未执行。

指针：详细来源见 `internal-reverse/audits/windows-1.2.3-relay/pointers/evidence-paths.md`。
