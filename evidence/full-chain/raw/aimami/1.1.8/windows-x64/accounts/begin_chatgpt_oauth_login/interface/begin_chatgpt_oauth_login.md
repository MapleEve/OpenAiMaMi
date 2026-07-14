# interface — begin_chatgpt_oauth_login (AiMaMi 1.1.8, windows-x64)

## 命令标识

- IPC 命令名: `begin_chatgpt_oauth_login`（Tauri `#[command]`，字符串常量 `aBeginChatgptOa` @0x141361450，长度 25）
- 配对命令: `cancel_chatgpt_oauth_login`（同批 `added_win_1_1_8`，本轮未展开其 owner）
- owner_va: `0x14096b4e0`（`sub_14096B4E0`，size `0x389d`）
- 参数结构起始偏移: 命令处理函数在 `a2 + 2880` 读取一个判别字节（`switch` 分派多分支），推测对应 Tauri command 参数枚举/状态机 tag，尚未做类型恢复（Unknown，见 evidence.md）。
- `Address = (PVOID)25` 在字符串组装分支中与命令名长度一致，用于命令名/追踪标签，非请求参数。

## argKeys（Confirmed 部分）

- 未在 owner 采样到的 refs 范围内发现显式 `client_id` / `scope` / `redirect_uri` 等 argKey 字面量；owner 参数（`a1`/`a2`）经栈布局观察为 Tauri 运行时上下文/AppHandle 类型（字符串 `"app"` @0x1413613f9 佐证），而非用户可见 JSON 参数。判断本命令大概率是**无参或极少参**命令（例如仅接收 `AppHandle`/`Window` 状态），实际发起登录所需参数（如账号 slot、client 配置）需要在 Unknown 中标注的共享 helper 内确认。

## 副作用（Confirmed）

1. **网络监听**: 在本机绑定 `127.0.0.1:1455`（TCP 回环监听），字面量长度 14，经 xrefs_to 确认只在 owner 内使用。
2. **HTTP 路由注册**: 注册路径 `/auth/callback`（长度 14）的处理器，用于接收 OAuth 授权服务器重定向回调。
3. **超时窗口**: 疑似 300（秒，Inferred）作为等待回调的超时时长。
4. **浏览器跳转**: 本轮未在采样的 6 个 callee 中直接观察到 `ShellExecute`/`CreateProcess` 等系统 API 调用；owner 的 refs 未见对应 Windows API 导入名，浏览器打开动作可能位于未采样的 callee 中，或由前端 JS 侧（`tauri::api::shell::open` 走另一条 command）触发（Unknown）。

## 错误路径（Confirmed 字符串）

| 字符串 | 地址 | 语义 |
|---|---|---|
| `could not resolve to any address` | 0x1413648a8 | 本机回环地址解析/绑定失败（std::net 地址解析错误） |
| `poisoned lock: another task failed inside` | 0x141322060 | 共享状态锁（Mutex/RwLock）被污染，说明本命令与其它任务共享账号/会话状态 |
| `a Display implementation returned an error unexpectedly`（出现两次: 0x141363370, 0x14132c4c0） | — | 通用 `fmt::Display` 格式化失败兜底（Rust std/anyhow 样板，非命令专属） |
| `all branches are disabled and there is no else branch` | 0x141361348 | 穷尽性分支 panic（可能来自 feature-flag/配置匹配宏），非命令专属 |
| `task was cancelled` / `task panicked` | 0x1414d92d0 | tokio JoinHandle 结果为 Cancelled/Panicked 时的错误消息拼装 |

## response 字段

Unknown — 本轮未定位到该命令向前端返回的成功态 payload 结构（例如是否返回一个用于前端展示的授权 URL 或仅返回 `()`/`Result<(), String>`）。需要在参数判别 `switch` 的其它分支（owner 内除 `case 0` 外的分支）中继续追踪，或对照前端 `ipc-contracts.jsonl` 中该命令的 TS 类型定义做交叉核实（4 角度中的前端 CCF 角度，本轮只做了后端角度）。

## 与 1.0.9 基线的接口差异

- 1.0.9 无此命令；最接近的既有能力是 `accounts/import_chatgpt_session_account`（会话导入式，推测走 Cookie/Token 直接写入而非授权码交换），二者参数/副作用形状不同，不能视为同一接口的版本演进，应视为**新增能力**。
