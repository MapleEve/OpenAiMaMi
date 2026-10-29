# backend-fullchain-win-anthropic-platform.md — AiMaMi 1.2.7 Windows Anthropic V1 协议 + platform 面 delta

- session: `<审计会话>`（windows-x64）；行为合同以 mac 分册 `backend-fullchain-anthropic-translator.md` 为准（红线5）
- 伪代码: `decomp-win-1.2.7/4xxx__anthropic__*.c`（20 文件 + trace/platform fixups，0 截断）

## 1. Anthropic 直连面（win 实证）

| 函数 | win EA | 规模 | 锚 | 判定 |
|---|---|---|---|---|
| 流引擎（handle_event 族/状态机） | `0x140e38370` | 50168B / **1643bb** / 81cal | `anthropic_search_incomplete`（×2 owner 之一）+ `Conflicting Anthropic stop_reason` | `stream_truncated` 1|4、`message_start` 1|2、`web_search_20250305` 1|2 —— 扩张证据；decomp 210391 字符完整落盘 |
| 流入口（feed_line 族） | `0x140dc42e0` / `0x140dc5580` / `0x140e5a130` | — | `Upstream Anthropic stream ended before message_stop` owner 三函数 | 截断检测面 win 在 |
| Exchange::resume（续传） | `0x140d36390` | 2433B / 89bb / 29cal | `Anthropic server continuation limit reached`（**0|1 新增**，内联命中）+ `paused without a supported`（内联命中） | 1.2.7 新增，≈mac 27cal |
| server 工具定义（web_search tool） | `0x14027f810` / `0x140327c90` | — | `web_search_20250305` 内联命中 | 底子 1|2 扩张；`external_web_access` **0|1 新增**（门控） |
| 中途工具能力门 | `0x14032e670` | — | `This Anthropic model does not support mid-conversation tool additions`（0|1 新增 owner） | 1.2.7 新增 |
| 签名历史保护 | `0x140362420` | — | `Conflicting discovered tool definitions; signed history was not modified`（0|1 新增 owner） | 1.2.7 新增 |
| anthropic_trace | `0x1401b1c10` / `0x1401f6f80` / `0x1401f9780` / `0x1402249d0` / `0x140227cf0` | 9.9K/3.2K/9K/13K 字符 decomp | panic-Location `anthropic_trace`（0x1401c5e4e 代码引用 + 6 个 Location 结构两跳） | trace 子模块 win 落位（`anthropic_trace.rs` 路径 0|1 新增） |

- 请求方向锚（win 二进制 grep）：`toolu_` 2|2、`stop_sequences` 1|1、`encrypted_content` 5|5 —— OpenAI↔Anthropic 映射底子在 1.2.6 已部分存在（1.2.6 win `backend/claude-web-search-compat/` 证据束）；1.2.7 V1 的重写证据 = mac 侧 bb 202→508 + win 侧新增字面量族（continuation/midconv/signed-history/external_web_access/anthropic_trace 全 0|1）。
- `anthropic_search_incomplete` **0|2 新增**（owner `0x140302d50` 23856B/919bb/61cal + `0x140e38370`）—— 搜索未完态错误面 win 在。

## 2. translator 新文件面（panic-Location 双命中）

- `src\core\relay\translator\anthropic_search.rs`（两跳 4 函数：0x14027c620 / 0x14027d620 / 0x14027e150 / 0x14027fcc0）
- `src\core\relay\translator\anthropic_tools.rs` / `chat_content.rs`（0|1 新增路径）
- `anthropic_reasoning.rs` / `anthropic_history.rs`：路径串 1|1 —— **底子文件**（1.2.6 已存在），1.2.7 扩展函数面（mac 侧 model_matches_family bb 20→63 等）。
- 旧 `translator.rs`（单文件）路径 1.2.7 消失（盘点轮 removed 列表）→ 拆分为子模块结构，win 与 mac 一致。

## 3. platform 面（dim5）

- **进程枚举**：Toolhelp32 API 族 + 3 个扫描叶（详见 win-router-catalog §3）——win/mac 平台分叉的直接证据。
- `src\core\relay\http_client.rs` 新路径（0|1）：win HTTP 客户端栈有新文件面；reqwest 底层栈 1.2.6 既有（红线5 迁移引用），1.2.7 增量为本文件承载的新配置面。深层差异（TLS/代理栈）未逆，维持 Unknown。
- `src\core\relay\proxy_access.rs` / `proxy_stream.rs` / `transition_journal.rs` / `keychain\revisions.rs` / `models.rs` 新路径 IDB 命中（盘点轮 27 增路径成员）；其中 `proxy_passthrough.rs`、`platform\proxy.rs`、`storage.rs` 路径删除（1.2.6 有→1.2.7 无，与 mac 模块面一致）。
- keychain：mac 用 Keychain，win 对应凭据存储面未专项逆（voice 无关；本轮 out-of-detail）。

## 4. 未闭合/Unknown

- `handle_event` 全转移表（mac 侧亦未逐枚举）win 侧同粒度闭合（事件字面量 + 1643bb 状态机体在案，伪代码已落盘可后续精修）。
- HTTP 客户端栈 win 专项差异（TLS 后端/代理链）未逆。
- 1.2.6 win IDB 体级比对 PENDING（同前三份分册 §5）。
