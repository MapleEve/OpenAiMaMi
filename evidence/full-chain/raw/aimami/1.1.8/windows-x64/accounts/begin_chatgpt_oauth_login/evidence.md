# evidence.md — begin_chatgpt_oauth_login (AiMaMi 1.1.8, windows-x64)

- session: <审计会话>
- machine: <本地机器> (反编译器 后端: win <内网>)
- module: `AiMaMi 1.1.8 win64.exe`
- source_binary_sha256: `f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10`
- owner_va: `0x14096b4e0` (`sub_14096B4E0`, size `0x389d`)
- owner-map 来源: `intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` row 3, method=`find_regex_string_pool_hit+xrefs_to_owner=dedicated_per_command_wrapper_fn`
- gate 定位: A/B-level owner，not gate promotion（本轮只做证据留档，不做实现放行判定）

## Confirmed

1. `begin_chatgpt_oauth_login` 是 Tauri IPC 命令，字符串常量 `aBeginChatgptOa`（"begin_chatgpt_oauth_login"，长度 25）与 `aApp_4`（"app"）在 owner 内被组装为一个长度=25 的字符串结构，用于命令名标记/追踪（tracing span 或 panic 位置标签），经 `decompile(0x14096b4e0)` 直接观察到（第 401/403 行伪代码）。
2. owner 内联构造了字面量 `"127.0.0.1:1455"`（长度 14）作为回环监听地址：伪代码第 904-905 行 `v59 = a1270011455; *(_QWORD *)(v3 + 2752) = a1270011455;` 随后传入 `sub_140EF3FB0(&v333, v59, v61)`（`v61=14`）做字符串构造。
3. owner 内联注册了一个路径为 `"/auth/callback"`（长度 14）的处理路由：伪代码第 1191 行 `sub_1405A01C0(v364, (unsigned int)aAuthCallback, 14, (unsigned int)v277, (__int64)&off_141361690)`；紧随其后 `sub_140EE5810(&v333, 300, 0, &off_1413616D8)` 传入常量 300（疑似 300 秒超时，见 Inferred）。
4. 经 `xrefs_to(["0x1413648a8","0x141361628","0x141361680"])` 核实：三个业务关键字符串（DNS 解析失败提示 `"could not resolve to any address"`、回环地址 `"127.0.0.1:1455"`、回调路径 `"/auth/callback"`）**只**被 owner 自身（`0x14096b4e0`）引用，无其它函数交叉引用 —— 说明回环监听 + 回调路由这部分业务逻辑是内联在 owner 单函数里，没有被拆到独立 helper。
5. `win-divergence-118.json` 的 `dispatcher_delta_cmds.added_win_1_1_8` 列表证实 `begin_chatgpt_oauth_login` 与其配对命令 `cancel_chatgpt_oauth_login` 是 **1.1.8 相对 1.0.9 新增**的命令；在 1.0.9 的 `raw/` 与 `intermediate/` 全量语料中未检索到该命令名的任何痕迹（`grep -rl` 零命中）。
6. call-tree 沿一条真实链路验证到 depth5（owner → tokio JoinHandle 结果解包 `sub_140F019E0` → TLS/TEB panic-hook 状态探测 `sub_140EE6440` → 分配+拼接 panic/cancel 消息串 `sub_14105F2D0` → Rust 全局分配器 thunk `sub_140001360→sub_141064840`），链路每一跳均经 `decompile()` 实际观察，非猜测。

## Inferred

1. `300` 这个常量（`sub_140EE5810(&v333, 300, 0, &off_1413616D8)`）在语义上最贴近"等待浏览器回调的超时时长"，单位大概率是秒（300s=5min），但未找到独立的时间单位换算函数调用可交叉验证，故列为推断而非确认。
2. owner 是"每命令专属包装函数"（`dedicated_per_command_wrapper_fn`），意味着该二进制的 Tauri 命令分发层对每个 `#[tauri::command] async fn` 生成一个独立包装函数，包装函数体内联了 Rust 编译器为该 `async fn` 生成的 state machine —— 这解释了为何单个 owner 伪代码膨胀到 106548 字符。
3. 84 个直接 callee 中，经采样 decompile 的 6 个（`sub_140F019E0`/`sub_140EE6440`/`sub_14105F2D0`/`sub_140001360`/`sub_140969AA0`/`sub_140230C00`）全部呈现 tokio/futures 任务轮询、panic-hook、堆分配、Future 组合子的通用运行时特征（无一处包含业务专属字符串或常量），据此推断其余未逐一 decompile 的 callee 大概率属于同类运行时基础设施，而非独立的 OAuth 业务步骤（PKCE 生成、authorize URL 拼装、token 交换等）。
4. 结合 AiMaMi 定位为"Codex/ChatGPT 账号配置管理"桌面壳应用，回环监听 + 固定端口 1455 + `/auth/callback` 路由的实现模式，与业界公开的 Tauri OAuth loopback 插件（如 `tauri-plugin-oauth`）以及 OpenAI 官方 Codex CLI 自身登录流程使用的本地回环回调机制高度一致，推断这是同一类公开可知模式的落地，而非专有加密/绕过手段。
5. 配对命令 `cancel_chatgpt_oauth_login` 大概率是取消/中止本命令发起的回环监听等待（例如用户主动取消登录，或超时前手动退出），但本轮未对该命令做独立 owner 定位，留待后续 1/20 批次条目处理。

## Unknown

1. 未定位到 PKCE（`code_verifier`/`code_challenge`）生成逻辑的具体调用点——owner 的 refs 枚举（反编译器 `decompile()` 返回上限约 136 条 ref）未出现 `client_id`/`scope`/`code_verifier` 等字面量；这些参数可能位于 owner 未采样到的深层代码段，或位于一个被多个登录相关命令共享的独立 helper 中，本轮未定位到该 helper 的地址。
2. 未确认 authorize URL 的完整拼装位置与 token 交换（`POST /oauth/token` 或等价端点）的目标地址/域名——本轮 6 次采样 decompile 均落在 Rust 运行时基础设施区间，未触达网络请求层（reqwest/hyper client 构造）。
3. 未确认账号/session 持久化的具体写入路径（例如是否复用 1.0.9 `import_chatgpt_session_account` 同款的账号存储结构），需要交叉比对 accounts 模块其它 owner 才能闭合。
4. owner 直接 callee 共 85 个，本轮仅完整 decompile 6 个（约 7%），其余 79 个（含 73 个未归类 + 6 个仅按字符串调用点/地址簇归类而未完整 decompile 的 alloc-error 簇）按 `accepted_unknown` 处理，`recovery_attempts` 见 call-tree jsonl 对应条目；后续若该命令进入 `readyToImplement` 判定，需要补齐这部分深度。
5. 300 常量的具体消费路径（是否真的作为 select! 宏的 timeout 分支）未经独立验证，`sub_140EE5810` 本身未被本轮 decompile。

## 相对 1.0.9 基线的变更点

- `begin_chatgpt_oauth_login` / `cancel_chatgpt_oauth_login` 是 1.1.8 **新增**的一对命令（`win-divergence-118.json.dispatcher_delta_cmds.added_win_1_1_8` 命中，1.0.9 全量语料零命中）。
- 1.0.9 基线中与 ChatGPT 账号相关的命令是 `accounts` 模块下的 `import_chatgpt_session_account`（会话/Cookie 导入式，非完整 OAuth 授权码流程）、`begin_add_account_attach_monitor`、`logout` 等；1.1.8 新增的这对命令引入了一个本机回环 HTTP 监听 + 系统浏览器跳转的完整 OAuth 授权码流程雏形，是登录方式的能力扩展，而非替换（1.0.9 的会话导入类命令是否在 1.1.8 中保留/共存需在其它 1/20 批次条目中单独核实）。
