# relay/translator baseline — AiMaMi 1.2.3 macOS arm64

来源：`core/relay/{translator,translator/stream,models,codex_catalog,image_compat,quota,storage,atomic_write,keychain,dialects}/ida/pseudocode/*.c`（IDA 已反编译好的伪代码，全部 192 个函数文件，本次只读盘整理，未连 IDA、未逆二进制）。

文件头统一格式：`// __ZN...<mangled symbol> @ 0x<addr> [| 基线 same-set]`，部分带 `// 1.2.3 NEW-delta | ... | vs 1.2.2 新增` 标记（本目录集合内 6 个：`find_official_reasoning_model`、`read_catalog_model_slugs`（codex_catalog）、`value_to_f64`（quota）、`is_minimax_m3_model`（storage）、`copy_api_key_from_legacy_id`（keychain）、`clean_input_for_anthropic_relay`/`leading_think_prefix_decision`/`strip_leading_think_open_tag`/`unwrap_custom_tool_input`（translator，4 个））。

**完整性检查**：对全部 10 个目录 grep `TRUNCATED` / `DECOMPILE-FAILED` / `chars total]`，命中 0 个文件 — 无截断桩、无反编译失败函数。唯一需要特别标注的是 `translator/translate_openai_message_to_anthropic_0x100881a60.c`，文件头写明 `// [FULL — <反编译器> 全解 60201B, 超大体分页取回]`：这是一个真实存在的超大函数（约 60KB 反编译体、2346 行），已完整反编译（非截断），只是取回时分页拉取。其余标 `// [FULL <反编译器>]` 的文件同样表示完整反编译，不是截断标记。

自动生成 glue 计数（略读未逐行读）：`models/` 目录 43 个文件中 24 个 `serialize_*` + 10 个 `deserialize_*` = 34 个 serde derive glue（`RelayBrand`/`RelayIde`/`RelayProvider` 等 DTO 的 `Serialize`/`Deserialize` 实现，纯字段搬运，无业务逻辑）。其余目录未见 `Debug`/`Clone`/`drop_in_place`/`fmt` 类自动生成函数单独成文件（这类 glue 大多被内联进业务函数体内，如 `String::clone`、`Vec::clone` 调用点，未单独占用函数文件）。

---

## 1. module_roles

| 子模块 | 职责一句话 |
|---|---|
| `translator/` | 三种上游 API 报文格式（Anthropic Messages / OpenAI Chat Completions / OpenAI Responses）之间的双向请求体+响应体转换器：工具 schema 转换、思考(thinking)/推理(reasoning)负载编码、文本拍平、图片剥离、exec_command 的 shell 引用等。 |
| `translator/stream/` | `translator/` 的流式(SSE)版本：4 个有状态流转换器结构体（`AnthropicToOpenAiStream`、`OpenAiToAnthropicStream`、`ChatToResponsesStream`、`AnthropicDirectToResponsesStream`），逐行/逐 chunk 消费上游 SSE 并实时按目标 API 格式重新发出 SSE 事件。 |
| `models/` | relay 数据模型层：`RelayBrand`/`RelayIde`/`RelayProvider`/`RelayActiveById`/`RelayState` 等 DTO 的 serde 序列化实现（多数文件），加上业务函数：model id 归一化/校验、provider id 文件名安全校验、按 model 前缀判定厂商 brand、错误信息脱敏+启发式 hint 分类。 |
| `codex_catalog/` | 内置"官方模型目录"本地缓存：读写/删除本地 JSON 缓存（`models_cache.json`、`codex_router_catalog.json`），为每个模型构建完整 `RelayModelInfo` 元数据（上下文窗口、推理档位、工具/verbosity 支持位、service tiers 等），并从目录里解析出原生默认模型与最佳推理模型。 |
| `image_compat/` | 图片输入兼容层：带 mtime 缓存的"image compat 开关是否启用"判定（全局互斥锁 + OnceLock 缓存），从配置文件读取该开关，并对已知不支持视觉输入的模型递归剥离/替换 `image_url` 内容块为纯文本占位。 |
| `quota/` | 第三方 provider 余额/用量轮询：拼 provider 根 URL / v1 URL、脱敏展示 API Key、格式化货币/百分比/带单位数字、按 base_url 探测官方 provider 身份，通过共享的 reqwest 异步 GET(带 Bearer 认证) 拉取并解析 Kimi/SiliconFlow/MiniMax/DeepSeek/Novita/OpenRouter/StepFun/NewAPI/Sub2API 的余额与用量响应。 |
| `storage/` | relay 状态持久化层：加载/保存 `RelayState` JSON 到磁盘（原子写）、从 keychain 把各 provider 的密钥水合(hydrate)进内存、导出前脱敏(去掉 api_key)、执行 provider-id 迁移（含遗留 MiniMax M3 官方协议迁移）并在迁移前备份+校验状态。 |
| `atomic_write/` | 通用崩溃安全写文件原语：写临时文件→fsync→rename 的原子写，外加父目录 fsync 和临时文件的 Drop 清理守卫；另有"读源文件后原子复制到目标路径"的辅助函数（供状态迁移备份使用）。 |
| `keychain/` | 每个 provider 的 API Key 三级存取：macOS 系统 Keychain（首选）→ 本地受限权限文件（`<CODEX_HOME>/keys/<provider_id>`，兜底/缓存）→ 遗留格式文件（老版本迁移读取）；含路径穿越安全的标识符校验和"读到旧格式后自愈写回新格式"的逻辑。 |
| `dialects/` | Chat-Completions 风格"推理/思考"参数注入的小辅助模块：判定原始请求是否请求了 reasoning effort（读 `/reasoning/effort` JSON 指针），是则把对应 provider 方言的 reasoning/thinking 字段注入到转换后的下游请求体。 |

文件规模：`translator/` 49 文件 41443 行、`translator/stream/` 39 文件 32357 行、`models/` 43 文件 5157 行、`codex_catalog/` 9 文件 6789 行（含 4690 行的 `make_relay_model_info` 单文件）、`image_compat/` 4 文件 1045 行、`quota/` 20 文件 5914 行（含 2475 行的 `fetch_async` 闭包）、`storage/` 13 文件 2888 行、`atomic_write/` 3 文件 263 行、`keychain/` 10 文件 1417 行、`dialects/` 2 文件 885 行。共 192 个函数文件，约 98158 行伪代码。

---

## 2. key_functions

### translator/

- **anthropic_to_openai_chat_request** — Anthropic Messages 请求体 → OpenAI Chat Completions 请求体：转换 `model`/`stop_sequences`/`system`→`instructions`/`tool_choice` 等字段。
- **openai_chat_to_anthropic_request** — 反方向：Chat Completions 请求 → Anthropic Messages 请求（`max_tokens`/`stop_sequences`/`tool_choice`）。
- **responses_to_chat_request** — Responses API 请求 → Chat Completions 请求：工具/parameters/strict schema、`instructions`→`system`、`tool_call`/`tool_call_output` 处理（超大函数，7412 行）。
- **responses_to_anthropic_request_with_context** — Responses API 请求 → Anthropic Messages 请求：含 thinking/`budget_tokens`、`cache_control`、多档 reasoning effort（`minimal/low/medium/high/xhigh/max/ultra`）（超大函数，6865 行）。
- **chat_to_responses_response / anthropic_to_responses_response_with_tool_map / openai_chat_to_anthropic_response / anthropic_to_openai_chat_response** — 四个非流式响应体转换器，映射 finish/stop 原因、usage token 计数、`tool_calls`。
- **translate_openai_message_to_anthropic** — 单条消息级转换器（Chat→Anthropic 方向），本目录集合内最大函数：约 60KB 反编译体、2346 行，文件头明确标注"[FULL — <反编译器> 全解]"（完整反编译，非截断）。
- **strip_image_url_from_messages / shell_quote** — 前者剥离消息里的 `image_url` 内容块；后者为 `exec_command` 工具调用展示的命令做 POSIX shell 引用转义。

destructive：均无（纯内存 JSON 结构转换，无文件/进程操作）。

### translator/stream/

- **ChatToResponsesStream::handle_chunk / OpenAiToAnthropicStream::handle_chunk / AnthropicToOpenAiStream::handle_event / AnthropicDirectToResponsesStream::handle_event** — 4 个流状态机的核心：解析一条上游 SSE 行/JSON chunk，按目标格式发出 0~N 条转换后的 SSE 事件。
- **close_text_block / close_tool_blocks / close_reasoning_block / close_thinking_block**（多个结构体各有实现）— 在 chunk 边界/结束信号到达时，关闭当前打开的内容块并发出对应的 `response.*.done` 事件。
- **capture_usage / emit_finish / final_chunk** — 从终止 chunk 里提取 token 用量，发出目标 API 的最终 usage/finish_reason 事件。
- **map_anthropic_stop_to_openai** — 把 Anthropic 的 `stop_reason` 映射为 OpenAI 的 `finish_reason` 字符串。
- **sse_event** — 底层共享发射器：格式化 `event: <name>\ndata: <json>\n\n` 的 SSE 帧，被 4 个流结构体复用。

destructive：均无。

### models/

- **validate_relay_provider_id** — 拒绝空/超长(>128)/`.`/`..`/含路径分隔符或控制字符/Windows 保留设备名(CON/PRN/AUX/NUL/COM1-9/LPT1-9) 的 provider id，防止把它当文件名用时发生路径穿越或非法文件名。
- **normalize_model_id / normalize_relay_models** — 前者裁剪+校验单个 model id（空/控制字符/长度上限 256）；后者构建去重后的 active model id → info 映射表，供 relay 分发使用。
- **brand_for_model** — 归一化(裁剪+小写)后按已知厂商关键字判定 model 所属 brand。
- **sanitize_error_for_display / error_hint** — 前者截断+脱敏(经 `platform::debug_log::redact_text_inner`)上游错误信息；后者对错误文本做约 20 类子串匹配，附加一句启发式 hint（如上下文超限、image_url 不支持、限流等）。

destructive：均无。

### codex_catalog/

- **remove_catalog** — `std::sys::fs::remove_file` 删除本地 `codex_router_catalog.json` 缓存文件。**destructive: remove_file**
- **write_catalog / build_catalog_bytes** — 序列化目录并原子写入 `codex_router_catalog.json`。
- **load_official_models / read_catalog_model_slugs** — 读取 `models_cache.json` / 目录文件并解析官方模型列表（后者为 1.2.3 新增函数）。
- **make_relay_model_info** — 构建单个模型的完整 `RelayModelInfo` 元数据（上下文窗口/最大窗口/有效窗口百分比、默认与支持的推理档位、`tool_mode`、verbosity 支持、`multi_agent_version`、service tiers、按 brand 区分的 `base_instructions`，其中含一段内嵌文案 "...Your knowledge cutoff date is December 2024."）——纯数据构造，本目录集合内最大单文件（4690 行）。
- **resolve_native_default_model / find_official_reasoning_model** — 从已加载目录里按每条记录的 `model`/`visibility` 字段挑选原生默认模型/最佳推理模型（后者为 1.2.3 新增函数）。

destructive：仅 `remove_catalog`。

### image_compat/

- **image_compat_enabled** — 基于路径+mtime 的缓存判定（全局互斥锁 + `IMAGE_COMPAT_CACHE` OnceLock），缓存未命中时委托 `read_image_compat_enabled`。
- **read_image_compat_enabled** — 把配置文件读成字符串，逐行扫描寻找 `[features]` 段落下的 `image_compat = true`。
- **replace_image_blocks** — 递归遍历 `serde_json::Value` 内容树，把任意 `image_url` 内容块替换为纯文本占位块。
- **replace_images_for_text_only_model** — 按 model id 匹配一份硬编码的"已知不支持视觉"模型名单（`deepseek-chat`/`-reasoner`/`-v4-flash`/`-v4-pro`、`glm-5.1`/`5.2`、`mimo-v2.5-pro`、`minimax-m2.x`、`qwen3-coder(-flash)`），命中则调用 `replace_image_blocks`。

destructive：均无。

### quota/

- **fetch_async**（闭包）— 顶层 provider 无关的余额/用量拉取调度器：拼 URL、调 `get_json`(带 Bearer 认证)，按探测出的 provider 分支解析 DeepSeek/Kimi/NewAPI/Novita/OpenRouter/StepFun/Sub2API `/v1/usage` 响应（本目录集合内最大函数，2475 行）。
- **get_json**（闭包）— 共享异步 HTTP GET 助手（reqwest），带 `Authorization: Bearer <api_key>` 头并解析 JSON body。
- **fetch_kimi_balance / fetch_siliconflow / fetch_minimax_coding_plan**（闭包）— 各 provider 专属响应解析器，提取余额/配额/剩余百分比字段，各自带"response missing X field"错误信息。
- **detect_official_provider** — 按 base_url 关键字匹配约 11 个已知官方 provider 端点以选择解析分支（具体端点字符串以未解析的匿名数据符号形式存在于本反编译产物中，未能在不重连 IDA 的前提下逐一还原明文）。
- **sanitize_api_key** — 展示前对 API Key 做裁剪处理（用于 UI 展示脱敏，非落盘加密）。

destructive：均无（仅网络读取）。

### storage/

- **load** — relay 状态顶层加载器：读 relay 状态 JSON → 跑 `migrate_legacy_minimax_m3_official_protocol` → 规划+执行 provider-id 迁移（先备份状态，再调 `keychain::set_api_key`/`cleanup_legacy_provider_key` 重新挂载密钥）→ 逐条校验 provider id → 重新保存。
- **save** — 序列化 `RelayState` 并通过 `atomic_write::write_atomic_with_mode` 原子写盘（写前先确保目录存在）。
- **hydrate_secrets** — 遍历所有 provider，逐个从 keychain 懒加载 API Key 到内存（调用 `lazy_load_api_key`）。
- **sanitize_for_export** — 深拷贝 `RelayState` 并把每个 provider 的 `api_key` 字段清零后返回——用于生成可安全导出/展示的无密钥副本。
- **preserve_state_before_provider_id_migration** — 在 `state-migration-backups/` 下写入带时间戳的状态备份并校验备份完整性，校验失败对应错误串 "relay state provider-id migration backup verification failed"，通过后才允许继续迁移。
- **apply_provider_id_migrations / plan_provider_id_migrations** — 计算并执行 provider-id 改名迁移集合，同步重新挂载 keychain 条目。
- **migrate_legacy_minimax_m3_official_protocol** — 把遗留 MiniMax M3 provider 的协议/base_url(`https`)改写为当前官方格式。

destructive：无直接删除用户配置（迁移前先备份）；真正的文件/Keychain 删除发生在 `keychain/` 模块。

### atomic_write/

- **write_atomic_with_mode** — 创建父目录 → 写入带 pid+uuid 后缀的临时文件（指定 Unix 权限位）→ fsync → rename 原子替换目标文件 → fsync 父目录；`TempFileCleanup` Drop 守卫在任何提前返回/出错路径上删除临时文件。**destructive(条件性): 失败路径下删除自身临时文件，非用户数据**
- **sync_parent_dir** — 打开父目录并调用 `File::sync_data` 强制让 rename 落盘持久化。
- **copy_atomic_private** — 完整读入源文件到内存，再调 `write_atomic_with_mode` 原子复制到目标路径（供 storage 的迁移备份步骤使用）。

### keychain/

- **get_api_key** — 三级读取：本地 key 文件 → 遗留格式密钥文件 → macOS Keychain；命中较旧层级后自愈写回当前文件格式(`write_key_file`)。
- **set_api_key / delete_api_key** — 校验 provider id 后写入/删除本地 key 文件；`delete_api_key` 额外删除对应的 macOS Keychain 条目。**delete_api_key destructive: remove_file(经 delete_key_file) + macOS Keychain 条目删除**
- **delete_key_file** — 从磁盘删除 `<CODEX_HOME>/keys/<provider_id>`。**destructive: remove_file**
- **write_key_file** — 以受限权限创建 keys 目录，并原子写入密钥到 `<CODEX_HOME>/keys/<provider_id>`（写入模式标记为私有/安全）。
- **cleanup_legacy_provider_key** — 校验遗留 id 是路径安全的文件名后，删除遗留 key 文件与遗留 macOS Keychain 条目——供 provider-id 迁移流程调用。**destructive: remove_file + Keychain 条目删除**
- **copy_api_key_from_legacy_id** — 把旧 provider id 下找到的密钥（文件/遗留格式文件/Keychain）迁移写入新 provider id（经 `write_key_file`）。
- **legacy_id_is_safe_identifier** — 在把遗留 id 当文件名组件使用前，拒绝 `.`/`..`/路径分隔符/控制字符（路径穿越防护）。

### dialects/

- **reasoning_requested** — 通过 JSON 指针 `/reasoning/effort` 读取原始 Responses 风格请求，判断是否请求了非 "none" 的 reasoning effort。
- **apply_chat_reasoning** — 若 `reasoning_requested` 为真，向转换后的下游 Chat-Completions 风格请求体注入对应 provider 方言的 reasoning/thinking 字段（本函数写入的具体字段名在本反编译产物中以未解析的原始整数常量形式存在，未能在不重连 IDA 的前提下逐一还原明文 key 名）。

destructive：均无。

---

## 3. 标注：截断/失败函数

全量 grep `TRUNCATED` / `DECOMPILE-FAILED` / `chars total]`，在本次涉及的 10 个目录、192 个函数文件中命中 **0** 个 —— 没有需要标注"内部不可臆断"的截断桩或反编译失败函数。

唯一需要说明的规模异常项：`translator/translate_openai_message_to_anthropic_0x100881a60.c` 文件头写明 `// [FULL — <反编译器> 全解 60201B, 超大体分页取回]`，表示该函数体约 60KB、需分页取回，但**已完整反编译**，不属于截断/失败范畴，本文档据此按其函数签名与调用上下文归纳职责，未逐行通读全部 2346 行。同理 `codex_catalog/make_relay_model_info_0x1008a20e0.c`（4690 行）与 `quota/fetch_async_0x1000da9c0.c`（2475 行）也是完整反编译的大体量函数，本文档基于字符串常量枚举 + 调用图交叉验证其行为，未逐行通读。
