# WIN-BUSINESS-CANDIDATES — AiMaMi 1.2.3 跨平台字符串签名匹配

**方法**：Mac 业务字符串索引（distinctive strings per function）→ Win strip 二进制字符串池精确匹配（`IDA Python`，`idautils.Strings()` + `XrefsTo`）→ 逐 Mac 函数投票聚合 Win 候选函数，按投票唯一性分高/中/低置信度。附加：36 个 `.rs` panic-Location 源码路径用 `\` 分隔符两跳 xref 做模块级交叉确认（win rustc target 用反斜杠，mac 用正斜杠，直接精确匹配会全部失败——已定位并修正）。

服务端：win 94（`AiMaMi.1.2.3 win64.exe`，strip，103,358 函数，`IDA decompiler_ready=true`），`server_health` 已过门。

---

## 1. 规模

| 项 | 值 |
|---|---|
| Mac `.c` 落盘文件（macos-arm64，含 framework-monomorph） | 1888 |
| 其中提取出 distinctive 字符串常量的函数 | **667** |
| Win 二进制字符串池总量（`idautils.Strings()`） | **29,581** |
| Mac 候选字符串（去重、排除拼接 blob 后用于匹配） | 1438 |
| Win 侧字符串精确匹配命中（1438 条中） | 229 |

## 2. 函数级匹配结果（按置信度）

| 置信度 | 定义 | 数量 |
|---|---|---|
| **high** | 有 ≥1 条串在 Win 侧唯一解析到同一函数，且该函数得到 ≥2 条独立串支持，或该函数是所有匹配串的唯一候选 | **69** |
| medium | 有 1 条串唯一解析到某函数，但该 Mac 函数的其它匹配串存在歧义（多候选） | 33 |
| low | 所有匹配串在 Win 侧都命中多个函数（无法唯一定位，通常因 Win 端 ICF/单态化把多个调用点折叠成共享 wrapper） | 158 |
| **zero match**（Win 字符串池里完全找不到对应串） | — | **407** |

69 个 high-confidence 里：

| 子类 | 数量 |
|---|---|
| 已在 `raw/aimami/1.2.3/windows-x64/*.c` 磁盘落盘 | **9** |
| 未落盘、待新逆（本报告的 Win 该逆清单） | **60**（对应 **53** 个不同 Win 函数地址，7 处因 Win 端内联/折叠导致多个 Mac 函数共享同一 Win 函数） |

53 个待逆 Win 函数地址中，**34 个已在此前的 dirtree 模块归属/命令名恢复流程（红线 24）里拿到了真实函数名**（例如 `apply_extra_headers`／`build_openai_headers`／`reconcile_router_on`／`extract_stream_text_delta`／`make_relay_model_info`／`router_http_contract_issues`／`exchange_code_for_tokens`／`refresh_token_with_policy`），只是还没有对应的 `.c` 伪代码落盘到 `raw/aimami/1.2.3/windows-x64/`；另外 19 个仍是裸 `sub_XXXXXXXX`，命名和逆向都待做。**"已有真名" ≠ "已在磁盘落盘"，两者分开统计，不得混报。**

## 3. Win 该逆清单（60 条，high-confidence + 未落盘）

格式：`win_addr` `win_func_name(可能仍是sub_)`  <=  mac 源函数（命中串举例）

```
0x14076df50 run_diagnostics_with_mode        <= core::relay::codex_diagnostic::run_diagnostics_with_mode (/tokens/refresh_token, OPENAI_API_KEY)
0x1406cff30 sub_1406CFF30                    <= core::debug_bundle::export_debug_bundle (This bundle is read-only:…, appVersion)
0x140a4c3f0 make_relay_model_info            <= core::relay::codex_catalog::make_relay_model_info (base_instructions, context_window)
0x14099c7b0 sub_14099C7B0                    <= core::relay::translator::stream::OpenAiToAnthropicStream::emit_finish (content_block_stop, message_delta)
0x14073a730 load_sessions_0                  <= core::sessions::load_sessions (/payload/agent_role, /payload/role)
0x14073a730 load_sessions_0                  <= core::sessions::normalize_export_text (/payload/role)  [同一 Win 函数,疑似内联折叠]
0x14040e970 router_http_contract_issues      <= core::relay::codex_writer::router_http_contract_issues (model_providers, requires_openai_auth)
0x140665920 build_openai_headers             <= core::relay::health_check::build_openai_headers (codex_cli_rs, codex_cli_rs/0.80.0 AiMaMi)
0x1403c8920 sub_1403C8920                    <= core::account_coordination::snapshot_lock_path (account.json, oauth-refresh.lock)
0x1409dc660 refresh_token_with_policy        <= core::oauth_refresh::refresh_token_with_policy ([AiMaMi][oauth-refresh] skipped auth.json sync…, core::oauth_refresh)
0x14054f750 reconcile_router_on              <= core::relay::router_reconciler::reconcile_router_on (auth_ready, model_restore)
0x1403c0f50 sub_1403C0F50                    <= core::repository::fetch_usage_with_one_auth_retry (usage_401_retry)
0x1403bcf70 sub_1403BCF70                    <= core::repository::enrich_single_account_usage (single_account_usage)
0x140388d60 sub_140388D60                    <= core::repository::Repository::load_settings (mysteryUnlockedRoutes)
0x1403e90b0 enrich_active_account_usage_via_api <= core::repository::enrich_active_account_usage_via_api (active_usage)
0x14039c710 confirm_pending_auto_switch_0    <= core::repository::Repository::confirm_pending_auto_switch (pending_auto_switch)
0x140738810 sub_140738810                    <= core::account_metadata::is_usable_account (/account/state)
0x140aa9980 serialize_10                     <= core::models::…SkillRemovePayload::serialize (remainingInstalledCount)
0x140aa8b60 serialize_8                      <= core::models::…AccountImportPayload::serialize (importedAccountKeys)
0x140aa7ae0 serialize_7                      <= core::models::…VoiceGeneratePayload::serialize (processingStatus)
0x140aaa880 serialize_12                     <= core::models::…DiagnoseSessionState::serialize (latestRolloutTimestamp)
0x1403c5510 exchange_code_for_tokens         <= core::oauth_login::exchange_code_for_tokens (core::oauth_login)
0x140ae8f40 start_message                    <= core::voice::aliyun_asr::start_message (language_hints)
0x140a543a0 __{{closure}}__16                <= core::voice::runtime::VoiceRuntimeInner::new (appleSpeech)
0x14066a270 chat_to_responses_response       <= core::relay::translator::stream::{ChatToResponsesStream::close_text_block, ChatToResponsesStream::handle_text_delta, AnthropicDirectToResponsesStream::close_text_block} (output_text)  [3 个 mac 函数折叠进同一 Win 函数]
0x140666fa0 extract_stream_text_delta        <= core::relay::translator::stream::ChatToResponsesStream::handle_reasoning_delta ; core::relay::health_check::extract_stream_text_delta (response.reasoning_summary_text.delta)
0x140a1f800 sub_140A1F800                    <= core::relay::translator::supports_anthropic_budget_thinking (claude-sonnet-4)
0x140a0fed0 claude_code_alias_target_name    <= core::relay::translator::claude_code_alias_target_name (exec_command)
0x140a20290 sub_140A20290                    <= core::relay::translator::translate_openai_message_to_anthropic (tool_use_id)
0x14076df50 run_diagnostics_with_mode        <= core::relay::codex_diagnostic::fix_residual_cache (residual_cache)  [同一 Win 函数,疑似内联折叠]
0x14076bac0 sub_14076BAC0                    <= core::relay::codex_diagnostic::is_cc_switch_fingerprint (provider_router)
0x1408488e0 fix_diagnostic_issue             <= core::relay::manager::RelayManager::fix_diagnostic_issue (repairing Codex diagnostics)
0x14066baa0 sub_14066BAA0                    <= core::relay::proxy_server::record_codex_openai_images_route (gpt-image-2)
0x140cfcd20 detect_official_provider_0       <= core::relay::quota::fetch_async::{{closure}} (total_granted)
0x140d04180 __{{closure}}__19                <= core::relay::quota::fetch_minimax_coding_plan::{{closure}} (model_name)
0x140465450 serialize                        <= core::relay::router_unlock_auth::…RouterUnlockAuthReadiness::serialize (canRestorePreviousAuth)
0x14075f760 sub_14075F760                    <= core::relay::fetch_models::parse_model_ids (upstream model list is empty)
0x140664740 apply_extra_headers              <= core::relay::health_check::apply_extra_headers (x-b3-parentspanid)
0x1404addd0 converge_threads_to_provider     <= core::relay::codex_thread_visibility::converge_threads_to_provider (thread provider convergence)
0x140aa8270 sub_140AA8270                    <= core::relay::codex_thread_visibility::repair_missing_rollouts_for_convergence (backupPath)
0x1406cf940 sub_1406CF940                    <= core::debug_bundle::add_codex_files (codex/schema-shape.json)
0x140445700 sub_140445700                    <= core::debug_bundle::read_catalog_file_shape (parseError)
0x140736610 sub_140736610                    <= core::debug_bundle::redact_json_value_with_key (bearer)
0x1409d9d10 infer_pro_tier_from_raw          <= core::plan_mapping::infer_pro_tier_from_raw (chatgptpro)
0x1409dad50 sub_1409DAD50                    <= core::plan_mapping::parse_plan_from_account_entry (/amount)
0x1403feba0 sub_1403FEBA0                    <= platform::process::{is_openai_ide_extension_writer_path, classify_macos_codex_writer} (/extensions/openai.chatgpt)  [2 个 mac 函数折叠]
0x1403b4720 sub_1403B4720                    <= platform::process::CodexProcessLifecycle::force_close_all (force_close_complete)
0x1403ed030 sub_1403ED030                    <= commands::accounts::load_full_runtime_snapshot_with_policy (full_refresh)
0x140485420 quit_keeping_router_0            <= commands::relay::quit_keeping_router (keep_router_exit)
0x1404645b0 sub_1404645B0                    <= commands::relay::…CodexRouterDiagnostic::serialize (proxy_running) ; route_handler (router_enabled)  [2 个 mac 侧不同来源折叠]
0x140bf3c60 sub_140BF3C60                    <= commands::account_oauth::begin_chatgpt_oauth_login::{{closure}} (/auth/callback)
0x14018bf50 sub_14018BF50                    <= run::{{closure}}::{{closure}} (graceful_restart_for_update)
0x1401940d0 write_client_debug_log           <= run::{{closure}}::{{closure}} (write_client_debug_log)
0x140178e70 sub_140178E70                    <= run::{{closure}}::{{closure}} (voice_search_overlay_ready)
0x14018aa10 dismiss_pending_auto_switch      <= run::{{closure}}::{{closure}} (dismiss_pending_auto_switch)
```

完整 260 条（含 medium/low）见 `WIN-BUSINESS-CANDIDATES.jsonl`（每条含 mac_func / confidence / best_win_func_addr / matched_strings / candidate_win_funcs 全列表，供后续精确核对用，**不要直接当 readyToImplement 用，仍需 `decompile` 逐条肉眼核**）。

## 4. `.rs` panic-Location 模块级补充证据（36 个源文件）

直接字符串匹配对 `src/....rs` 这类路径**全部失败**——根因：**Win rustc target 用反斜杠 `\` 做 panic-Location 路径分隔符，Mac 用正斜杠 `/`**，两边二进制内容字面不同，不是"没有"。转 `\` 后二跳 xref（串→Location 结构体→引用它的函数，参见 dirtree recovery 文档 §3①）36 个全部命中，对应 module 里的函数集合（数量从 0～13 不等，因为一个 .rs 文件的 panic-Location 串可能被该模块内多个函数共同引用，不是一对一，只能做**模块级**存在性确认，不折算进函数级 high_conf_matches）：

`account_oauth.rs / accounts.rs / autostart.rs / debug_bundle.rs / debug_report.rs / relay.rs / voice.rs / voice_runtime.rs / analytics.rs / codex_config.rs / oauth_login.rs / relay/…` 等 36 个 `src/**/*.rs` 全部在 Win 侧确认存在对应模块代码。

## 5. 零匹配（407）原因分类

| 分类 | 数量 | 说明 |
|---|---|---|
| `other_no_win_stringpool_hit` | 311 | 最大头。相当一部分是**解码伪影**：Mac `.c` 伪代码里同一行相邻的多个 `format!()` 片段被我方正则当成一个拼接串抓取（如 `"account state" + ".oauth-refresh.lock"` 被连成 `"account state.oauth-refresh.lock"`），真正的独立字面量（如裸 `"oauth-refresh.lock"`）在 Win 侧其实命中了（见 §3）。其余是措辞/格式在两次编译间确实不同、或该字符串被 Rust 常量折叠/去重成不同形式。**这是本方法的已知精度上限，不代表函数在 Win 不存在。**
| `source_path_string_(compiler_embeds_differ)` | 53 | 根因已定位：正斜杠 vs 反斜杠分隔符（见 §4）。这 53 条里的 36 个不同 `.rs` 路径本体经二跳+反斜杠转换后**全部模块级确认存在**，不是真空缺；只是函数级归属未逐一二跳拆分（超出本轮 exact-match pass 范围，需要专门再跑一轮 §4 式的二跳批处理）。
| `macos_platform_specific_path_or_api` | 42 | 真·平台专属（NSString/Cocoa、`~/Library/…`、`.app/Contents/…`、mac 语音 sidecar 路径、开发机绝对路径 `/Users/borawong/...`），**Win 侧本就不该有对应函数**，正确排除，不是待逆缺口。
| `too_short_generic` | 1 | 候选串本身过泛（如裸 `"opus"`），过滤器该收紧但未收紧，个例，可忽略。

## 6. Win 真业务分母估算

本轮字符串匹配法**不能**单独得出可靠的 Win 侧真业务函数总数——它只能给出"能用字面量证据钉住"的下限（69 个 high-confidence，外加 191 个 medium/low 需要人工消歧），命中率受限于：
1. Win/Mac 两次编译对相同源码的字符串常量处理不完全一致（分隔符、format! 片段合并方式、常量折叠）；
2. Win 侧 ICF/单态化把多份逻辑折叠成共享 wrapper，导致大量 low-confidence（158 个）。

**更可靠的分母锚点**来自已有的 dirtree 结构化恢复实证（`references/ida-dirtree-module-recovery.md`，1.2.1 win 数据）：在 99,569 个 strip 函数中，panic-Location 两跳 + 严格调用图传播恢复出 **937 个函数 / 67 个干净模块目录**，其中 111 个通过 tauri 命令名精确命名——这是**结构化枚举**的结果，覆盖面比字符串签名匹配广得多（不依赖该函数是否恰好嵌了一条可幸存到发布二进制的 distinctive 字符串）。

结合本轮独立证据（69 个字符串锚点里 34 个已经在 win 侧拿到真名，与 937 的既有命名集合高度重合/印证一致），**estimated_win_true_denominator ≈ 900–1000**（以 1.2.1 的 937 为锚，1.2.3 版本相近、架构未变，预期同量级；不是 WIN-RECON-CENSUS.md 里"101,708 = 总数减已知 glue"这个未经验证的上限）。字符串匹配法产出的 69＋191 应作为**补充交叉验证 / 新逆种子清单**喂给下一轮结构化 dirtree 恢复，而不是替代它。

---

**产出文件**：
- `intermediate/aimami/1.2.3/windows-x64/WIN-BUSINESS-CANDIDATES.md`（本文件）
- `intermediate/aimami/1.2.3/windows-x64/WIN-BUSINESS-CANDIDATES.jsonl`（260 条完整匹配记录）
