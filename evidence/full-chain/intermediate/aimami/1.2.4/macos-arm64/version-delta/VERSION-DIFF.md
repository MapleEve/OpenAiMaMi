# VERSION-DIFF.md — AiMaMi 1.2.3 → 1.2.4 (macOS arm64)

**Generated**: 2026-08-08 (canonical migration from non-canonical JSON)
**Source schema**: `c5cm.reverse.version_delta.authoritative_symbol_diff.v1`
**Session**: `baseline-gap-fill-aimami123-124-symbol-diff`
**Method scope**: macOS Mach-O universal binary (x86_64 slice) defined-external symbol table diff, AiMaMi 1.2.3.app vs 1.2.4.app.

## Binaries (SHA binding)
- 1.2.3: `sha256=e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d`, size=65072960, arch=x86_64, symbols_raw=5982, symbols_normalized_unique=4892
- 1.2.4: `sha256=7ac4fc861c3be7181ca2f6d19b47dff9fffa22eaf1ec971ad1c77dae97ca8f32`, size=65546304, arch=x86_64, symbols_raw=6039, symbols_normalized_unique=4931

## Diff counts (normalized, semantically meaningful)
- Added: **62** normalized (19 functional + 43 serde-DTO)
- Removed: **23** normalized
- Note: un-normalized diff yields 1112 added / 1055 removed — almost entirely per-build hash churn on identical monomorphized generics. Normalized figures are the real diff.

## Added functional symbols (新增 — need IDA full-chain / delta-逆)
- `+ codexmate_lib::commands::system::get_claude_web_search_compat` [module=codexmate_lib::commands::system]
- `+ codexmate_lib::core::relay::anthropic_history::rectify_invalid_thinking_signature` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::codex_catalog::default_no_account_slots` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::codex_catalog::normalize_no_account_slot_preference` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::codex_catalog::validate_no_account_slots` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::codex_thread_visibility::restore_no_account_model_threads` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::manager::RelayManager::set_claude_web_search_compat` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::manager::RelayManager::set_codex_no_account_slots` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::proxy_server::claude_web_search_compat_enabled` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::proxy_server::is_anthropic_thinking_signature_rejection` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::router_unlock_auth::commit_auth_for_router` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::router_unlock_auth::has_restorable_real_oauth` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::router_unlock_auth::has_usable_real_oauth_login` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::router_unlock_auth::managed_api_key_marker_matches` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::router_unlock_auth::should_use_no_account_mode` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::translator::anthropic_to_responses_response_with_tool_maps` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::with_tool_maps` [module=codexmate_lib::core::relay]
- `+ codexmate_lib::platform::process::codex_bundled_cli_path` [module=codexmate_lib::platform::process]
- `+ <http::header::value::HeaderValue as core::fmt::Debug>::fmt` [module=external/http]

## Added serde-DTO Deserialize impls (43 — new persisted types, not commands)
Represent new DTO schema additions in: core::analytics (CachedRolloutEntry, DailyActivity, SessionStats, TodaySummary, UsageAnalyticsIndex/Payload), core::auth (AuthFile), core::bootstrap_cache (BootstrapCacheFile, BootstrapStatePayload), core::models (ClaudeWebSearchCompatPayload), core::oauth_login (TokenResponse, TokenErrorResponse), core::relay (CodexNoAccountSlot, RelayExportFile/Provider, NoAccountModelRestoreEntry/Journal, config_takeover types, RouterUnlockAuth types, legacy_virtual_auth), core::repository (ApiConfig, AutoSwitchConfig, CodexMateSettings, HotspotConfig, MysteryRouteGrant, RegistryFile/Item), core::voice (VoiceSearchResultPayload, VoiceGenerateRequest, VoiceTemplateUpsertRequest, etc.)

## Removed symbols (删除)
- `- codexmate_lib::commands::relay::get_codex_router_auth_readiness` [module=codexmate_lib::commands::relay] (icf_alias)
- `- codexmate_lib::core::mcp::remove_mcp_server` [module=codexmate_lib::core::mcp] (icf_alias)
- `- codexmate_lib::core::relay::codex_catalog::build_catalog_bytes` [module=codexmate_lib::core::relay] (icf_alias)
- `- codexmate_lib::core::relay::codex_catalog::write_catalog` [module=codexmate_lib::core::relay] (icf_alias, renamed to write_prepared_catalog)
- `- codexmate_lib::core::relay::native_responses_compat::sanitize_request` [module=codexmate_lib::core::relay] (icf_alias, renamed to strip_hosted_web_search_tools)
- `- codexmate_lib::core::relay::router_unlock_auth::ensure_auth_for_router` [module=codexmate_lib::core::relay] (icf_alias, renamed to prepare_auth_for_router)
- `- codexmate_lib::core::relay::translator::anthropic_to_responses_response_with_tool_map` [module=codexmate_lib::core::relay] (icf_alias, singular->plural)
- `- codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::with_tool_name_map` [module=codexmate_lib::core::relay] (icf_alias, singular->plural)
- `- codexmate_lib::platform::single_instance::acquire` [module=codexmate_lib::platform::single_instance] (icf_alias)
- 14 additional serde-DTO icf_alias removals (folded Visitor::expecting stubs no longer emitted)
