# Registration Table — AiMaMi 1.2.3 windows-x64 voice

生成时间：2026-07-26（reduce pass，续接 2026-07-25 distillation）
范围：37 个前端 `*voice*` IPC 命令的 Windows 后端注册表 + DTO 字段面 + 非命令支撑模块清单。

来源：`raw/aimami/1.2.3/windows-x64/` 已落盘 raw `.c` 文件的字段级重读（本轮独立重新打开逐个文件，不是照抄 manifest 数字），加上本轮对 IDA MCP `<内网IP>`（`server_health` 确认 `status=ok`/`<反编译器>_ready=true`/`idb_path=<二进制路径>\AiMaMi.1.2.3 win64.exe.i64`）发起的只读验证调用（`get_bytes`/`decompile`/`lookup_funcs`/`find_regex`）。本轮**未写任何新 raw `.c` 文件**，未做 rename/comment 写回，只读取已存在于 IDB 里的信息（4 个此前 `blocked` 命令的 owner 函数在 live IDB 中已有他人此前 pass 留下的中文分析注释和真实函数名——本轮只是把这份既有信息读出来纳入结论，不是本轮新做的逆向标注）。

## 1. 37 命令注册表

| # | 前端命令名 | 后端 owner 文件/地址 | 归属类别 | 请求 DTO 字段（symbol-derived） | 备注 |
|---|---|---|---|---|---|
| 1 | `load_voice_asr_config` | `commands/ida/pseudocode/load_voice_asr_config_0x14016e5c0.c` | 独立命名文件 | `provider` | 按 provider 读 ASR 配置 |
| 2 | `load_voice_llm_config` | `commands/ida/pseudocode/load_voice_llm_config_0x140170220.c` | 独立命名文件 | `provider` | 按 provider 读 LLM 配置 |
| 3 | `load_voice_processing_modes` | `commands/ida/pseudocode/load_voice_processing_modes_0x1401853f0.c` | 独立命名文件 | （仅 repo state，无用户参数） | |
| 4 | `load_voice_runtime_status` | `commands/ida/pseudocode/load_voice_runtime_status_0x140184670.c` | 独立命名文件 | `app` | |
| 5 | `load_voice_workspace` | `commands/ida/pseudocode/load_voice_workspace_0x140175890.c` | 独立命名文件 | （仅 repo state） | |
| 6 | `remove_voice_history_entry` | `commands/ida/pseudocode/remove_voice_history_entry_0x1401859d0.c` | 独立命名文件 | `id` | |
| 7 | `remove_voice_mode_shortcut` | `commands/ida/pseudocode/remove_voice_mode_shortcut_0x14017aa10.c` | 独立命名文件 | `app`, `modeId` | |
| 8 | `remove_voice_template` | `commands/ida/pseudocode/remove_voice_template_0x1401744e0.c` | 独立命名文件 | `id` | |
| 9 | `remove_voice_vocabulary` | `commands/ida/pseudocode/remove_voice_vocabulary_0x1401729e0.c` | 独立命名文件 | `id` | 与 #34 `remove_voice_vocabulary_app_scope` 是不同命令（后者窄化到 app 作用域，注意不要混淆） |
| 10 | `replace_voice_vocabulary_kind` | `commands/ida/pseudocode/replace_voice_vocabulary_kind_0x140171e30.c` | 独立命名文件 | `appBundleId`, `appName`, `entries`, `kind` | |
| 11 | `request_voice_permissions` | `commands/ida/pseudocode/request_voice_permissions_0x1401840f0.c` | 独立命名文件 | `app` | |
| 12 | `save_voice_asr_config` | `commands/ida/pseudocode/save_voice_asr_config_0x14016da70.c` | 独立命名文件 | `asrProvider`(推断), `asrApiKey`(推断), `asrModel`(推断), `asrBaseUrl`(推断) — 4 字段结构与 #24 `test_voice_asr_config` 完全一致 | 字段名由 IDA 截断符号 `aAsrprovider`/`aAsrapikey`/`aAsrmodel`/`aAsrbaseurl` 反推，非直接读原始大小写；结构确认，拼写待 mac 对照 |
| 13 | `save_voice_llm_config` | `commands/ida/pseudocode/save_voice_llm_config_0x14016f6d0.c` | 独立命名文件 | `llmProvider`(推断), `llmApiKey`(推断), `llmModel`(推断), `llmBaseUrl`(推断) | 与 save_voice_asr_config 同构，llm 前缀对称 |
| 14 | `save_voice_processing_modes` | `commands/ida/pseudocode/save_voice_processing_modes_0x140184d00.c` | 独立命名文件 | `modes` | |
| 15 | `set_voice_global_shortcut` | `commands/ida/pseudocode/set_voice_global_shortcut_0x1401838c0.c` | 独立命名文件 | `app`, `shortcut` | |
| 16 | `set_voice_mode_shortcut` | `commands/ida/pseudocode/set_voice_mode_shortcut_0x14017b150.c` | 独立命名文件 | `app`, `keyCode`(推断), `keyKind`(推断), `keyLabel`(推断), `modeId`, `modifierMask`(推断), `style` | |
| 17 | `set_voice_overlay_style` | `commands/ida/pseudocode/set_voice_overlay_style_0x14017e3e0.c` | 独立命名文件 | `app`, `style` | |
| 18 | `set_voice_processing_mode_id` | `commands/ida/pseudocode/set_voice_processing_mode_id_0x14017ec00.c` | 独立命名文件 | `app`, `modeId`, `processingMode`(推断) | |
| 19 | `set_voice_trigger_bindings` | `commands/ida/pseudocode/set_voice_trigger_bindings_0x140180440.c` | 独立命名文件 | `activeStyle`(推断), `app`, `holdKeyCode`/`holdKeyKind`/`holdKeyLabel`/`holdModifierMask`(均推断), `toggleKeyCode`/`toggleKeyKind`/`toggleKeyLabel`/`toggleModifierMask`(均推断) | hold/toggle 双绑定结构（长按 vs 切换触发） |
| 20 | `set_voice_trigger_key` | `commands/ida/pseudocode/set_voice_trigger_key_0x140181d20.c` | 独立命名文件 | `app`, `keyCode`, `keyKind`, `keyLabel`, `modifierMask`, `style`（均推断） | |
| 21 | `show_voice_search_overlay` | `commands/ida/pseudocode/show_voice_search_overlay_0x140179b20.c` | 独立命名文件 | `app`, `output`(推断), `query`(推断) | |
| 22 | `start_voice_capture` | `commands/ida/pseudocode/start_voice_capture_0x14017d080.c` | 独立命名文件 | `app` | |
| 23 | `stop_voice_capture` | `commands/ida/pseudocode/stop_voice_capture_0x14017ca10.c` | 独立命名文件 | `app` | |
| 24 | `test_voice_asr_config` | `commands/ida/pseudocode/test_voice_asr_config_0x14016ced0.c` | 独立命名文件 | 同 #12 4 字段 | **call-tree-to-leaf 已追**：调用 `sub_140755DC0`（位于 `commands/voice/ida/pseudocode/`）→ provider 分支（`appleSpeech` vs 另一 11 字节 provider 常量，疑似 aliyun）→ 非 appleSpeech 分支发起真实 HTTP 请求（`Authorization` 头，`aAuthorization_1` 符号引用）→ 200-299 状态码判定（`(unsigned __int16)(v75-200) < 0x64u` 经典 2xx 模式）→ 失败回 `"ASR config is incomplete"` 错误串 → 经 `sub_140ACDB60` 包装成响应 envelope。见 FULL-CHAIN 文档 §2.1 |
| 25 | `test_voice_llm_config` | `commands/ida/pseudocode/test_voice_llm_config_0x14016eb30.c` | 独立命名文件 | 同 #13 4 字段 | 未逐行追至 leaf（结构与 test_voice_asr_config 高度类似，未验证是否共享同一 sub_140755DC0） |
| 26 | `update_voice_runtime_settings` | `commands/ida/pseudocode/update_voice_runtime_settings_0x14017f650.c` | 独立命名文件 | `app`, `enabled`(推断), `processingMode`×2(推断，疑似 id+label), `shortcut`(推断), `speechModel`(推断) | |
| 27 | `upsert_voice_template` | `commands/ida/pseudocode/upsert_voice_template_0x140174bb0.c` | 独立命名文件 | `content`, `description`, `id`, `title`（均推断） | |
| 28 | `upsert_voice_vocabulary` | `commands/ida/pseudocode/upsert_voice_vocabulary_0x1401730b0.c` | 独立命名文件 | `appBundleId`, `appName`, `id`, `kind`, `notes`, `replacement`, `source`（均推断） | |
| 29 | `voice_processing_done` | `commands/ida/pseudocode/voice_processing_done_0x14017d6f0.c` | 独立命名文件 | `app`, `sessionGenerated...`(推断，截断) | |
| 30 | `capture_voice_trigger_key` | `codexmate_lib/ida/pseudocode/capture_voice_trigger_key_0x140ca39b0.c` | 独立命名文件 | 未本轮细读（header 已确认 `tauri command handler = capture_voice_trigger_key，mapped via command-name string xref, ground-truth`） | |
| 31 | `generate_voice_prompt` | `codexmate_lib/ida/pseudocode/generate_voice_prompt_0x140ce21d0.c`（2919 行，本模块最大文件） | 独立命名文件 | 未本轮全文细读（体量过大） | 其嵌套闭包 `{{closure}}::{{closure}}::{{closure}}` 落在 `commands/voice/ida/pseudocode/__u7b__u7b_closure_u7d__u7d__17_0x140abe3c0.c`（module-attributed + 跨平台字符串签名匹配已确认），闭包体内经 `sub_140063A40` 调用引用符号 `aVoiceLlmToken`（"voice_llm_token" 推断）——真实证据表明该命令走 LLM token 鉴权路径。见 FULL-CHAIN §2.2 |
| 32 | `inject_voice_text` | `codexmate_lib/ida/pseudocode/inject_voice_text_0x140ca27d0.c` | 独立命名文件 | 未本轮细读 | |
| 33 | `resolve_voice_vocabulary_app_info` | **owner VA `0x140170790`**（物理体位于共享 ICF-folded 调度器 `commands/relay/ida/pseudocode/open_path_0x140194810.c` 内部一个 case 分支，未单独落盘为独立 raw 文件） | ⚡ 本轮 live-IDA 解析 | `path` | 只读操作，调 `read_app_bundle_identity_fields`（真实业务函数名，已在 live IDB 中）返回 bundleId/displayName；无破坏性副作用。cross-check mac `@0x100694140`。此前 2026-07-25 pass 标记为 `blocked`（5 缺口之一），本轮解析为**误标**——它不在 voice 专属目录，而在 `open_path` 共享分发器里，前一轮只扫了 voice 命名目录未扫到 |
| 34 | `upsert_voice_vocabulary_app_scope` | **owner VA `0x140170D00`**（同上，`open_path` 内部） | ⚡ 本轮 live-IDA 解析 | `repo`(State), `bundleId`, `name`, `path` | 调 `sub_14075B300`，IDB 注释标 **⚠持久化写**（upsert 应用作用域词表条目）。cross-check mac `@0x100694770` |
| 35 | `remove_voice_vocabulary_app_scope` | **owner VA `0x140171760`**（同上） | ⚡ 本轮 live-IDA 解析 | `repo`(State), `appBundleId` | 调 `sub_14075A760`，IDB 注释标 **⚠删除数据**（删除该 app 作用域词表记录）。cross-check mac `@0x100693cd0` |
| 36 | `set_voice_trigger_listener_suppressed` | **owner VA `0x140182C20`**（同上） | ⚡ 本轮 live-IDA 解析 | `app`, `suppressed`(bool) | 调 `sub_1401C3650`/`sub_1401BCE80`/`sub_140886400` 切换 trigger listener 抑制状态，成功走 `commands_ok_success_result_new` → `Ok()`。cross-check 备注 "mac commands::voice (fn renamed)"（暗示 mac 侧该函数在某次 pass 中已被改名，需后续核对 mac 包） |
| 37 | `cancel_voice_trigger_capture` | **未找到** | 🚫 blocked（本轮加强确认） | — | 三重排除法本轮完成：①171→180 个 voice 域 raw 文件全文件名/全字符串 grep 无命中；②`open_path` 共享调度器 26+ 命令清单逐一读取无命中（该调度器本身声明"not exhaustive of all commands"）；③**本轮 live IDA `find_regex` 对整个二进制字符串缓存做 `cancel_voice_trigger_capture` 精确匹配，`n:0`，零命中**（`server_health` 确认 `strings_cache_ready=true`，非冷缓存漏检）。合理假设（未证实）：该命令可能是纯前端 `AbortController` 语义（取消一个尚未 resolve 的 `start_voice_capture` promise），从未有对应的 Tauri invoke 到达后端，因此二进制里不存在这个字符串——但这只是假设，不作为 accepted_unknown 或 confirmed-absent 的替代，仍记 `truly_undone` |

## 2. Extra（前端无对应命令的后端项）

| 后端函数 | 地址 | 说明 |
|---|---|---|
| `show_voice_overlay` | `runtime/ida/pseudocode/show_voice_overlay_0x140aedb20.c` | 内部渲染触发，非顶层 invoke 命令；module-attributed 到 `codexmate_lib/core/voice/runtime`，跨平台字符串签名匹配 mac `core::voice::runtime::overlay::show_voice_overlay` |

## 3. 非命令支撑模块（backend-internal，不在 37 命令面内）

| 目录 | 文件数（本轮修正） | 已命名 | 说明 |
|---|---|---|---|
| `aliyun_asr/ida/pseudocode/` | 63 | 5：`endpoint_for_protocol`、`start_message`、`hbb4b340bd79fba8f`、`hbb4b340bd79fba8f_0`、`hbb4b340bd79fba8f_1` | `AliyunAsrSession::connect` 闭包链 + endpoint 选择逻辑；ASR 会话/HTTP 客户端底层实现 |
| `asr/ida/pseudocode/` | 3 | 0（`keyring_entry`、`load_saved_config`、1 个闭包，均 module-attributed 但未个体命名） | **本轮新发现**：module header 明确 `codexmate_lib/core/voice/asr`。2026-07-25 SYSTEM-DIFF.md 曾把 `core::voice::asr`（mac 8 文件）列为 "0 — no dedicated dir found — Unknown, not confirmed-absent"；**本轮更正为已确认存在**（3 文件，非 0），该 Unknown 项应关闭为 `confirmed-present-thinner`，见 SYSTEM-DIFF 更新 |
| `llm/ida/pseudocode/` | 7（原 6） | 1：`save_config` | 本轮发现遗漏的第 7 个文件（`save_config_0x140a58220.c`），其余 6 个仍为 unnamed sub_ |
| `runtime/ida/pseudocode/` | 42 | 1：`show_voice_overlay` | |
| `tray/ida/pseudocode/` | 2 | 0 | |
| `workspace/ida/pseudocode/` | 21 | 3：`default_templates`、`read_workspace_file`、`serialize_2` | `serialize_2` = `Serialize for VoiceWorkspacePayload`（与 `models/serialize_VoiceWorkspacePayload` 疑似重复独立实现，见 §4 观察项） |
| `voice_trigger_windows/ida/pseudocode/` | 4 | 0 | |
| `text_injection_windows/ida/pseudocode/` | 1 | 0 | macOS 侧 `platform/text_injection` 有 10 个，Windows 仅 1 个，明显更薄（沿用 2026-07-25 SYSTEM-DIFF.md 结论，未变） |
| `models/ida/pseudocode/`（voice 相关） | 2（本轮新发现，原包完全未计入） | 2：`serialize_VoiceGeneratePayload`（本轮命名 `serialize_7`）、`serialize_VoiceWorkspacePayload`（本轮命名 `serialize_6`） | 真实 DTO 响应序列化实现（dim4 证据）；`serialize_6` 与 `workspace/serialize_2` 疑似同一逻辑类型的两份不同单态化，见 §4 |
| `commands/voice/ida/pseudocode/` | 3（本轮修正，原包记为 2） | 1（本轮修正）：`__u7b__u7b_closure_u7d__u7d__17` = `generate_voice_prompt` 的三层嵌套闭包（跨平台字符串签名匹配已确认） | 另 2 个仍未命名：`sub_140755DC0`（535 行，已确认是 `test_voice_asr_config` 的 call-tree 目标，见上）、`sub_140ACDB60`（37 行，已确认是响应 envelope 辅助函数，被 `sub_140755DC0` 反复调用） |
| `commands/relay/ida/pseudocode/open_path_0x140194810.c` | 1（2205 行） | 是（但非 voice 专属——ICF-folded 共享调度器） | **本轮核心发现**：此文件是共享 Tauri IPC 命令字符串调度器（按参数长度 switch，再 memcmp/SIMD 比对候选命令名），header 已有此前 pass 留下的说明注释，列出 26+ 个它承载的命令（含 4 个 voice 命令，见上表 #33-36）。此前 2026-07-25 voice 包的目录扫描只看 voice 专属目录，未把这个 relay 目录下的共享调度器纳入 voice 命令的 owner 搜索范围，导致 4/5 blocked 命令被误判 |

## 4. 观察项（非 blocking，供后续 producer 参考）

1. `workspace/serialize_2_0x1407ae080.c` 与 `models/serialize_VoiceWorkspacePayload_0x140aa76f0.c` 两个不同地址的文件都声称是 `Serialize for VoiceWorkspacePayload` 的实现（前者本轮命名 `serialize_2`，后者 IDA 当前显示为 `serialize_6`）。可能是 serde 对同一类型生成的两份不同单态化（例如面向不同 Serializer backend），也可能是重复归属。未消歧，记为观察项，不影响本包任何 gate 判定。
2. `save_voice_asr_config`/`test_voice_asr_config` 的字段名是从 IDA 截断符号（`aAsrprovider` 等）反推的推断值，真实 Rust 结构体字段的准确大小写/全名未经 mac 符号或前端 TS 类型定义交叉核实，标记"推断"，非"确认"。
3. 本表列的 DTO 字段面仅覆盖**请求入参**；响应 payload 结构、错误 envelope 具体字段、以及副作用的完整边界（除 4 个新解析命令已知的 persistence write/delete 之外）仍未产出，dim4 对全部 37 命令而言仍是 partial 而非 closed。
