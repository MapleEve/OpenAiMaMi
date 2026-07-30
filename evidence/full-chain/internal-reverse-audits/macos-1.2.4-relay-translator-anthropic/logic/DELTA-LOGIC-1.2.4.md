# DELTA-LOGIC-1.2.4 — macOS relay-translator 相对 1.2.3 的行为差异

来源：`raw/aimami/1.2.4/macos-arm64/version-delta/relay-translator-anthropic-6dims.md`（6dims 详实分析，24278 字节，本文件是其核心逻辑抽取，不复制 raw 伪代码）。
baseline：1.2.3（已消费 `internal-reverse/audits/macos-1.2.3-relay/`）。

## 1. 命令维度

【架构解释】这里说的 command 指 Tauri `#[tauri::command]` 暴露给前端的 IPC。本批 6 个目录是 relay 内部库（core），**自身不定义 command**，只被 command 层调用。win delta 里和本模块强相关的 command 有 3 个（来自 `windows-x64/version-delta`）：

| command (win 锚定) | 地址 | 消费的本模块函数 | 行为 |
|---|---|---|---|
| `get_claude_web_search_compat` | 0x140156ef0 | manager → native_responses_compat 配置读 | 读 Claude web_search 兼容开关（`aGetClaudeWebSe` 28 字节 = "get_claude_web_search_compat"，挂在 `manager` 0x140156ef0）|
| `set_claude_web_search_compat` | 0x140e01580 | native_responses_compat 配置写 + strip 校验 | 写兼容开关；写前用 `strip_hosted_web_search_tools` 语义决定剥离策略 |
| `set_codex_no_account_slots` / get | 0x140e2de30 | models::CodexNoAccountSlot 序列化 | 读写「无账号槽」配置，DTO 经 `models::serialize`(0x10057cbe0/cd30/cea0 三份单态) 落盘 |

- 这 3 个 command 是**新增**（1.2.3 的 win delta 无同名锚点），对应前端新增的「Claude web 搜索兼容」与「无账号槽」两个配置面。
- relay translator / stream / anthropic_reasoning / anthropic_history **无 command 直出**，它们是 proxy/relay 请求路径上的纯函数库，被 `proxy_server`/`dialects` 调用。

## 2. DTO 维度

### 2.1 CodexNoAccountSlot（models，NEW DTO）
三份 `Serialize` 单态（0x10057cbe0 / 0x10057cd30 / 0x10057cea0，分别序列化到 serde_json::Value / String / compact writer）确认同一结构：
```jsonc
{
  "<key_10>": <value>,          // anon_495 (10 字节键)，必有
  "<key_5>":  <value>,          // anon_30  (5 字节键)，必有
  "<key_11>": <value>           // anon_496 (11 字节键)，Option；__OFSUB__(-v2,1) 判 None(i64::MIN=0x8000000000000000)
}
```
- 结构体布局：offset 0..24 = 字段1，24..48 = 字段2，48 = Option<i64> 字段3（None 用 `0x8000000000000000` 哨兵）。
- 序列化用 `serialize_struct(... count = __OFSUB__(-v2,1)^3)`，Option 字段缺席时字段数减 1，**不输出 null**。

### 2.2 AnthropicDirectToResponsesStream 输出 DTO（translator/stream 重写产物）
`finish_response` / `fail_with_type` 构造的 Responses 协议对象（BTreeMap 有序键）：

**response 顶层**（finish_response @0x100acfdc0）：
- `id`（2 字节前缀 + stream 的 id 串，对应 self@+32..+40）
- `object` = `"response"`（8 字节常量 0x65736E6F70736572 = "response"）
- `created_at`（i64，self@+192 的 Utc::now 秒数；`>>63` 取符号位作 None 判定）
- `status` = `"completed"` | `"incomplete"`
- `model`（self@+8..+16）
- `output`（数组，`collect_seq(self+48)`）
- `usage`（仅当 self@+254=1 时输出）→ `{input_tokens, output_tokens, total_tokens}`，total = in+out
- 收尾事件 type = `"response.completed"`(18) ；失败时 `"response.failed"`(15)

**error 子对象**（fail_with_type @0x100aced60）：
- `type`（4 字节键，DWORD 0x65707974 = b"type"）= 传入 type 串（注：0x65646F63 才是 "code"，函数内无此常量）
- `message`(7) = 传入 msg
- 外层 status 必为 `"failed"`（DWORD 0x6C696166 + WORD 0x6465 = b"failed"），事件 `"response.failed"`
- 注意与 finish_response 的 `"incomplete"` 分支区分：`"incomplete"` 是 finish_response(@0x100acfdc0) 在 stop_reason 命中 content_filter/max_output_tokens 时的 status，不是 fail_with_type 的 status。

### 2.3 anthropic_history 输入 DTO（normalize_messages @0x1004ac900 处理的 messages 数组）
- 入口是 messages 数组（键 `messages`/`id_token` blob），逐条按 `role` + `content` 遍历。
- 内容块 type 识别常量：`0x6573755F6C6F6F74`="tool_use"、`0x7365725F6C6F6F74`+`0x746C757365725F6C`="tool_result"(11)、`0x676E696B6E696874`="thinking"(8)、redacted_thinking(17)。

## 3. 字段维度（字段/判定逻辑）

### 3.1 anthropic_reasoning（NEW，7 函数全部 NEW-delta）

**`normalize_model_name` @0x100572da0**：trim → SIMD 批量小写化 → 把 `.`(`0x2E`) 和 `_`(`0x5F`) 统一替换成 `-`(`0x2D`)。
- 例：`Claude_Sonnet_4.5` → `claude-sonnet-4-5`。所有模型名匹配都先过这一刀。

**`uses_adaptive_thinking` @0x1005731d0**（win `0x1408a2a20` 锚定 9 个明文串）：normalized 名 **包含任一** 即返回 true：
`fable-5`(7) · `mythos-5`(8) · `mythos-preview`(14) · `sonnet-5`(8) · `opus-5`(6) · `opus-4-8`(8) · `opus-4-7`(8) · `opus-4-6`(8) · `sonnet-4-6`(10)。

**`adaptive_thinking_is_default` @0x1005739f0**：默认 true；仅当模型名 **不含** fable-5/mythos-5/mythos-preview 时，退化为「是否含 sonnet-5」。
→ 语义：fable-5/mythos-5/mythos-preview/sonnet-5 默认开 adaptive thinking，其余默认关。

**`thinking_cannot_be_disabled` @0x100573940**：normalized 名含 `fable-5`(7) 或 `mythos-5`(8) → true（这两类模型强制 thinking，用户关不掉）。

**`codex_effort_to_anthropic` @0x100573340**：trim+小写后按长度 switch 映射 codex effort → anthropic effort 字符串（返回静态串或 null）：
- len4 `"high"` → `"high"`；len5 `"xhigh"`(0x67696878+'h') → 上档串；len6 `"medium"`(0x6964656D+0x6D75) → 中档；len7 `"minimal"` → 低档；len3 `"low"`/`"max"` 各自映射；default → null。

**`effort_to_thinking_budget` @0x100573640**：同上的 switch，返回 **bool**——该 effort 等级是否应配 thinking budget。low/max/high/xhigh/medium/minimal → true；未知/none → false。

**`reasoning_explicitly_disabled` @0x100573ad0**：effort（trim+小写）== `"off"`(3) / `"none"`(4) / `"disabled"`(8) → true（用户显式关闭推理）。null/空入参直接 false。

### 3.2 AnthropicDirectToResponsesStream 结构体布局（with_tool_maps @0x100acf9f0 初始化）
| offset | 字段 | 初始化 |
|---|---|---|
| +0 / +8 / +16 | tools len/ptr/len2 | 入参 a2(size=a3) 拷贝 |
| +24..+40 | id 串（Uuid v4 → Simple hex 前 16 字符 + 前缀格式化）| `uuid::v4::new_v4` |
| +48..+95 | (token/name 映射占位) | 0 / `0x8000000000000000` 哨兵 |
| +96..+143 | tool_map（a4，6×qword=48B）| 入参 a4 |
| +144..+191 | tool_name_map（a5，6×qword）| 入参 a5 |
| +192 | created_at（i64 Utc 秒，`Utc::now` + 400 年周期修正）| 运行时 |
| +200/+216 | blocks BTreeMap 根/页 | 0 |
| +224 | input_tokens | 0 |
| +232 | output_tokens | 0 |
| +240.. | responses_event sink | — |
| +248 | (dword 状态) | 0 |
| +252 | (word) | 0 |
| +253 | **finished** 标志（byte）| 0 |
| +254 | **usage_tracked** 标志（byte）| 0 |

- `with_tool_maps` 是 1.2.3 `with_tool_name_map`(0x100ac11b0) 的**重命名+扩参**版：1.2.3 只收单个 name_map，1.2.4 收 `tool_map`+`tool_name_map` 双图（支持 custom tool 反查）。

### 3.3 translator 辅助字段
- `leading_think_prefix_decision` @0x10080a950：trim_start 后判 `<dim>`(0x6968743C + 0x3E6B6E69 = "<think")前缀 → 返回 1=有前缀 / 2=无前缀 / 0=空串。
- `strip_leading_think_open_tag` @0x100809440：剥掉开头的 `<dim>` 并 trim，无标签则返回 `0x8000000000000000`(None) 哨兵串。

## 4. 错误路径维度（逐条具体到变体）

### 4.1 stream 收尾错误路径（translator/stream 重写核心）
- **`fail_with_type` @0x100aced60**：`finished` 标志(@253)已置位 → 直接返回空 buf（幂等）。否则 ensure_created → close_all_blocks → 置 finished=1 → 构造 `{id, object:"response", created_at, status:"failed", model, output, error:{type, message}}` → 发 `response.failed` 事件。错误 type/message 由调用方传入（type 4B、msg 变长）。status 用 `"failed"`（v33 DWORD 0x6C696166="fail"+WORD 0x6465="de"），**不是** `"incomplete"`——后者属 finish_response 的分支。
- **`finish_response` @0x100acfdc0**：
  - 已 finished → 返回空（幂等）。
  - `incomplete=true` 入参 → status=`"incomplete"`，stop_reason 二选一：`"max_output_tokens"`(17) 或 `"content_filter"`(14)。
  - `incomplete=false` → 默认 status=`"completed"`；但若 stop_reason 字段命中三种「不完整」串则改判 incomplete：
    - len7 → `"content_filter"`（DWORD 异或 anon_603 比对）
    - len29 → 16 字节 SSE 全异或比对（anon_602）
    - len10 → `"max_output_tokens"`(anon_299 ^ qword + 0x736E word)
  - usage_tracked(@254)=1 时才挂 `{input_tokens, output_tokens, total_tokens}`。
  - 收尾发 `"response.completed"`(18) 事件。

### 4.2 anthropic_history 修正路径（NEW）
- **`rectify_invalid_thinking_signature` @0x1004afd70**：遍历 messages 末轮的 content 块；对 role!=user 或含 `tool_result` 块的轮次跳过；对其余轮次用 `retain_mut` 闭包(@0x1009af720)逐块过滤：
  - 闭包命中 `thinking`(8) 或 `redacted_thinking`(17) → **删除该块**（`return 0`，retain_mut 约定返回 0 即移除），对应计数器(a1+0 / a1+8) +1，是**移除计数**而非保留计数。
  - 命中普通 object 块(variant 5) → **移除其 `signature`(9) 字段**（`BTreeMap::remove`），累计已清计数(a1+16)，但**保留该块**（`return 1`）。
  - 最后整体 `retain` 收尾，返回 `{removed_counts...}`（三个计数器均为移除/清除计数）。
  → 语义：上游因 thinking signature 非法拒绝时，直接删掉非法的 thinking/redacted_thinking 块、并清掉普通块里残留的 signature 字段，让请求能重放。
- **`trailing_turn_supports_thinking` @0x1004afa50**：判最后一轮（role!=user 即 assistant）能否挂 thinking。收集该轮所有 `tool_result` 块的某 11 字节字段(anon@0x10166D0E3)成 Vec，再查倒数第二轮（assistant）的 content 是否引用了这些；用 HashSet 求交，全部命中才返回 true。空轮/无 tool_result → true。

### 4.3 非流式翻译错误/收尾路径（translator 一次性同步）
- **`anthropic_to_responses_response_with_tool_maps` @0x100829870**（[FULL decompile 3192 行]）：是流式 stream 的**非流式兄弟**——不走 SSE/事件 sink，直接把整个 Anthropic response(JSON Value) 翻译成一个 Responses response BTreeMap 返回。
  - stop_reason → status 映射与 finish_response 同构：len7 `"refuse"`(异或 0x75666572/0x6C617375)→`content_filter`+incomplete；len10 `"max_output_to..."`(异或 0x656B6F745F78616D/0x736E)→`max_output_tokens`+incomplete；len29 SSE 串(16 字节异或 anon xmmword)→incomplete；其余 → `completed`+`summary_text`(13)。
  - output 项构造覆盖 `custom_tool_call`(16)、`function_call`(13)、`encrypted_content`(17) 及 reasoning，依赖 tool_map/tool_name_map 双图反查。
  - error 路径主要是 serde_json 解析失败 → `core::result::unwrap_failed`（多处，如 index_into/object 构造/insert），属输入结构不符预期时的 panic，非业务可恢复错误。
  - 收尾 usage 同 finish_response：input_tokens + output_tokens，total = in+out。

### 4.4 native_responses_compat 剥离路径
- **`strip_hosted_web_search_tools` @0x1003f5f60**：遍历请求根 BTreeMap 找 `"tools"`(5) 数组 → `Vec::retain` 删掉 hosted web_search 工具（识别串：`"web_search"`(10)、`"web_search_"`+... (13)、`"allowed_tools"`(13) 的 choices）；全删空则 `BTreeMap::remove("tools")`。再扫 `"tool_choice"`(11)：若是 `web_search` 类型对象也连带删掉。返回被剥离的工具计数（i64）。
  - 内联 `panic_bounds_check`(@0x10057e300 路径) 仅在 `contains_http_status_code` 越界时触发（见下）。

### 4.5 models 边界
- **`contains_http_status_code` @0x10057e240**：在字符串里搜 3 位 HTTP 状态码子串（前后字符须非 `:`-区段，`(c-58)<0xF6` 判定）。越界走 `core::panicking::panic_bounds_check`(@0x10057e300)——这是本批唯一显式 panic 点，属库内不变量违例，非业务路径。

## 5. 持久化维度（文件/DB/Keychain/config.toml）

【人话结论】本批 6 个模块 **不直接碰文件/DB/Keychain/config.toml**。它们是内存态翻译/决策库。

- **anthropic_reasoning / anthropic_history / translator / translator/stream**：纯内存。stream 的 BTreeMap/Vec 都是请求生命周期内的缓冲区，请求结束即弃。无文件读写、无 DB、无 Keychain。
- **native_responses_compat**：`strip_hosted_web_search_tools` 只改内存 JSON Value（serde_json::Value），不落盘。真正的持久化在上层 `set_claude_web_search_compat` command（manager 层），写的是 **Claude web_search 兼容开关配置**（疑似 config.toml 的一个 bool/section，具体路径在 manager 模块，不在本批）。
- **models::CodexNoAccountSlot**：定义 DTO + Serialize，自身不落盘；由 `set_codex_no_account_slots` command 序列化后写「无账号槽」配置（同样在 manager/command 层落盘）。

→ 持久化责任全部上移到 command/manager 层；本批模块只负责「值怎么算」「JSON 怎么塑形」。这是 1.2.4 的一个清晰边界：**决策/翻译与持久化解耦**。

## 6. sidecar 维度（进程/Codex 重启）

【人话结论】本批 6 个模块 **零 sidecar 行为**：不 spawn 进程、不重启 Codex、不碰 daemon。

- 全部函数签名和调用链都是同步内存计算（`__fastcall` 纯函数 + serde_json 操作 + BTreeMap/Vec/HashMap）。
- relay 的「重启 Codex」逻辑在 `codex_runtime`/`manager`/`daemon` 模块（1.2.3 已存在，不属本批 delta）。
- stream 翻译的是 **HTTP 响应流**（Anthropic SSE → Responses 协议），不涉及子进程生命周期。
- 唯一「外部交互」是 `with_tool_maps` 里的 `Utc::now()`（取时间戳）和 `uuid::v4::new_v4()`（生成 response id），均为本机纯计算，无 IPC/网络/进程。

## 7. 与 1.2.3 的结构差异总览

| 1.2.3 (translator/stream) | 1.2.4 (translator/stream) | 性质 |
|---|---|---|
| `with_tool_name_map` @0x100ac11b0 | `with_tool_maps` @0x100acf9f0 | 重命名+扩参(单图→双图) |
| `close_text_block` @0x100abafb0 | } 合并入 `close_anthropic_block` @0x100ad10d0 | **合并重写** |
| `close_thinking_block` @0x100ac1660 | } 同上 | **合并重写** |
| `close_tool_blocks` @0x100abe930 | `close_anthropic_tool_block` @0x100ad52a0 + `close_all_blocks` @0x100ad0f40 | **拆分重写** |
| `flush` @0x100ac5a10 | `finish_response` @0x100acfdc0 + `fail_with_type` @0x100aced60 | **重写+拆分**(成功/失败分径) |
| `emit_created` @0x100aadf10 | `ensure_created`(被 finish/fail 内联调用) | 重命名 |
| `responses_event` @0x100abad00 | `responses_event` @0x100acf717(被 finish/fail 调用) | 保留 |
| `handle_event` @0x100aaf640 | (stream 入口，未在本批 delta 伪代码中，疑保留) | — |
| — | `anthropic_reasoning` 全模块(7 fn) | **NEW** |
| — | `anthropic_history` 全模块(5 fn) | **NEW** |
| `rejects_hosted_web_search`/`sanitize_request` @native_responses_compat | `strip_hosted_web_search_tools` @0x1003f5f60 | **NEW 函数**(旧函数本批未见 delta，疑保留) |
| — | `models::CodexNoAccountSlot` + 3 serialize | **NEW DTO** |

**核心重构主题**：1.2.3 的 stream 是「按块类型分散收尾」，1.2.4 统一成「`close_anthropic_block` 单入口分发 + `close_all_blocks` 批量迭代 + 成功/失败双收尾径」，并把「要不要 thinking / thinking 合不合法」的决策抽成独立 `anthropic_reasoning` + `anthropic_history` 模块，stream 只管翻译不管策略——**策略与翻译解耦**。

## 8. 未决/不臆断项

- `handle_event`(stream 主事件循环) 未在本批 delta 伪代码中露出，无法确认其内部对 `redacted_thinking`/`tool_search_call` 新块类型的分发是否新增；标 **待查**，不臆断。
- `normalize_messages`(66KB) 内嵌 SHA-256 轮常量，强烈指向 thinking signature 计算；但完整 signature 算法需逐 round 还原，本次只确认「使用了 SHA-256」，**不展开伪算法**。
- `codex_effort_to_anthropic` 的 len3(low/max)/len5(xhigh) 返回的具体静态串(anon_289/290/293) 是哪几个 anthropic effort 枚举值，需交叉 anon 数据段确认；本次只确认映射存在，**不强行命名**。
- 1.2.3 `native_responses_compat` 的 `rejects_hosted_web_search`/`sanitize_request` 在 1.2.4 是否仍存在（本批只给了 NEW 的 strip 函数），标 **待对账**。
