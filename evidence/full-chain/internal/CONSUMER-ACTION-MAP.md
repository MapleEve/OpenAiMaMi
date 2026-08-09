# CONSUMER-ACTION-MAP — AiMaMi 1.0.9

> grounded from INDEX.jsonl (304 rows). 新增文档,不改既有。

## ‼️ 先读: 0 命令阻塞, 全部 296 条现在就能实现

`gate_tier` = 证据成熟度/C5验收进度, **不是「能不能做」**。
「我们只做 100%」 = 每条都有完整可实现路径(=全部 296 条), **不是** 只做 readyToImplement 那 218 条。
strict / consumerStartReady **照样做** —— 逆向完整、按契约动工; 差的只是 C5 侧 dim6 验收测试, 不挡实现。

| consumer_action | 含义 | 数量 |
|---|---|---|
| implement_now | 六维全闭,直接做 | 218 |
| implement_now_dim6_test_pending | 逆向完整,按契约现在做;只差C5 dim6测试(补了即升ready) | 46 |
| implement_against_contract | 按已知 in/out DTO 契约+标准库做;内部 accepted_unknown 不阻碍 | 23 |
| platform_absent | 该平台无此命令(平台差异非缺口) | 4 |
| c5_local | C5自加命令(上游无),C5自实现 | 5 |

**阻塞/死墙/做不了: 0** ｜ dim1=前端CCF(前端全leaf已闭) ｜ dim6=C5验收测试(C5的活) ｜ 每条 gate-report 有 dim 明细, D6 账本有解阻路径。

## 逐命令

| command | module | platform | gate_tier | consumer_action |
|---|---|---|---|---|
| note_usage_refresh_activity | note_usage_refresh | macos-arm64 | consumerStartReady | `c5_local` |
| schedule_full_runtime_refresh | schedule_full_runt | macos-arm64 | consumerStartReady | `c5_local` |
| start_auto_switch_pending_watcher | start_auto_switch_ | macos-arm64 | consumerStartReady | `c5_local` |
| start_usage_refresh_watcher | start_usage_refres | macos-arm64 | consumerStartReady | `c5_local` |
| update_usage_refresh_schedule | update_usage_refre | macos-arm64 | consumerStartReady | `c5_local` |
| ? | ? | ? | strictImplementationUs | `implement_against_contract` |
| <审计会话> | append_codex_route | macos-arm64 | strictImplementationUs | `implement_against_contract` |
| <审计会话> | capture_switch_rol | macos-arm64 | strictImplementationUs | `implement_against_contract` |
| canonical-distilled | cmd_detect_api_pro | windows-x64 | strictImplementationUs | `implement_against_contract` |
| canonical-distilled | cmd_set_theme | windows-x64 | strictImplementationUs | `implement_against_contract` |
| <审计会话> | create_bootstrap_t | macos-arm64 | strictImplementationUs | `implement_against_contract` |
| distilled | distilled | windows-x64 | strictImplementationUs | `implement_against_contract` |
| distilled-consumer-reduction | distilled-consumer | windows-x64 | strict | `implement_against_contract` |
| wf3-d2pkg-109 | get_mystery_unlock | windows-x64 | strictImplementationUs | `implement_against_contract` |
| distilled-wf-closeout | load_bootstrap_sta | windows-x64 | strictImplementationUs | `implement_against_contract` |
| wf3-d2pkg-109 | merge_mystery_unlo | windows-x64 | strictImplementationUs | `implement_against_contract` |
| canonical-distilled | rebuild_registry | windows-x64 | strictImplementationUs | `implement_against_contract` |
| refresh_usage_snapshot | refresh_usage_snap | windows-x64 | strictImplementationUs | `implement_against_contract` |
| wf3-d2pkg-109 | relay_fetch_models | macos-arm64 | strictImplementationUs | `implement_against_contract` |
| wf3-d2pkg-109 | relay_health_audit | windows-x64 | strictImplementationUs | `implement_against_contract` |
| canonical | relay_image_compat | windows-x64 | strictImplementationUs | `implement_against_contract` |
| deep-recovery-wf-surface-p2-internal | relay_translator | macos | strictImplementationUs | `implement_against_contract` |
| wf3-d2pkg-109 | relay_translator | windows-x64 | strictImplementationUs | `implement_against_contract` |
| distilled-canonical | restart_codex_cmd_ | windows-x64 | strictImplementationUs | `implement_against_contract` |
| run_daemon_once-DISTILLED | router-lifecycle | windows-x64 | strictImplementationUs | `implement_against_contract` |
| strictImplementationUse | strictImplementati | windows-x64 | strictImplementationUs | `implement_against_contract` |
| internal-wf-surface-p2-internal | strip_all_managed_ | macos-arm64 | strictImplementationUs | `implement_against_contract` |
| api-proxy-config | wf6-bundle | macos-arm64 | strictImplementationUs | `implement_against_contract` |
| ? | ? | ? | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginRegistry__ge | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginRegistry__ge | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginRegistry__li | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginRegistry__li | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginRegistry__sa | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginRegistry__sa | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginRegistry__se | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginRegistry__se | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginRegistry__up | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginRegistry__up | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginStoreSchema_ | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | PluginStoreSchema_ | windows-x64 | readyToImplement | `implement_now` |
| canonical-distilled | apply_codex_state_ | windows-x64 | readyToImplement | `implement_now` |
| apply_custom_instruction | apply_custom_instr | macos-arm64 | readyToImplement | `implement_now` |
| apply_custom_instruction | apply_custom_instr | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | begin_add_account_ | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | begin_add_account_ | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | builtin__all_built | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | builtin__all_built | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | builtin__image_sup | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | builtin__image_sup | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | builtin__web_tools | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | builtin__web_tools | windows-x64 | readyToImplement | `implement_now` |
| wf11-6-omitted-functions | calltree-depth-com | macos-arm64 | readyToImplement_full_ | `implement_now` |
| cancel_voice_trigger_capture | cancel_voice_trigg | macos-arm64 | readyToImplement | `implement_now` |
| cancel_voice_trigger_capture | cancel_voice_trigg | windows-x64 | readyToImplement | `implement_now` |
| canonical-reduce-20260604 | canonical-reduce-2 | macos | readyToImplement | `implement_now` |
| capture_voice_trigger_key | capture_voice_trig | macos-arm64 | readyToImplement | `implement_now` |
| capture_voice_trigger_key | capture_voice_trig | windows-x64 | readyToImplement | `implement_now` |
| check_update_installability | check_update_insta | macos-arm64 | readyToImplement | `implement_now` |
| check_update_installability | check_update_insta | windows-x64 | readyToImplement | `implement_now` |
| clear_custom_instruction_block | clear_custom_instr | macos-arm64 | readyToImplement | `implement_now` |
| clear_custom_instruction_block | clear_custom_instr | windows-x64 | readyToImplement | `implement_now` |
| configure_auto_switch | configure_auto_swi | macos-arm64 | readyToImplement | `implement_now` |
| configure_auto_switch | configure_auto_swi | windows-x64 | readyToImplement | `implement_now` |
| confirm_pending_auto_switch | confirm_pending_au | macos-arm64 | readyToImplement | `implement_now` |
| confirm_pending_auto_switch_and_restart_ | confirm_pending_au | macos-arm64 | readyToImplement | `implement_now` |
| confirm_pending_auto_switch | confirm_pending_au | windows-x64 | readyToImplement | `implement_now` |
| confirm_pending_auto_switch_and_restart_ | confirm_pending_au | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | create_or_refresh_ | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | create_tray_icon_w | windows-x64 | readyToImplement | `implement_now` |
| delete_sessions | delete_sessions | macos-arm64 | readyToImplement | `implement_now` |
| delete_sessions | delete_sessions | windows-x64 | readyToImplement | `implement_now` |
| delete_skill_backup | delete_skill_backu | macos-arm64 | readyToImplement | `implement_now` |
| delete_skill_backup | delete_skill_backu | windows-x64 | readyToImplement | `implement_now` |
| dismiss_pending_auto_switch | dismiss_pending_au | macos-arm64 | readyToImplement | `implement_now` |
| dismiss_pending_auto_switch | dismiss_pending_au | windows-x64 | readyToImplement | `implement_now` |
| wf11-va-corrections | evidence-quality-v | macos-arm64 | readyToImplement_full_ | `implement_now` |
| desync-writeback-wf3-D1 | export_accounts_to | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | export_accounts_to | windows-x64 | readyToImplement | `implement_now` |
| force_kill_codex | force_kill_codex | macos-arm64 | readyToImplement | `implement_now` |
| generate_voice_prompt | generate_voice_pro | macos-arm64 | readyToImplement | `implement_now` |
| generate_voice_prompt | generate_voice_pro | windows-x64 | readyToImplement | `implement_now` |
| get_image_compat | get_image_compat | macos-arm64 | readyToImplement | `implement_now` |
| get_image_compat | get_image_compat | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | get_plugin_config | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | get_plugin_config | windows-x64 | readyToImplement | `implement_now` |
| get_system_info | get_system_info | macos-arm64 | readyToImplement | `implement_now` |
| get_system_info | get_system_info | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | handle_tray_menu_e | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | import_accounts_fr | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | import_accounts_fr | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | import_chatgpt_ses | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | import_chatgpt_ses | windows-x64 | readyToImplement | `implement_now` |
| import_skill | import_skill | macos-arm64 | readyToImplement | `implement_now` |
| import_skill | import_skill | windows-x64 | readyToImplement | `implement_now` |
| inject_voice_text | inject_voice_text | macos-arm64 | readyToImplement | `implement_now` |
| inject_voice_text | inject_voice_text | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | list_plugins | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | list_plugins | windows-x64 | readyToImplement | `implement_now` |
| load_bootstrap_state | load_bootstrap_sta | macos-arm64 | readyToImplement | `implement_now` |
| load_bootstrap_state | load_bootstrap_sta | windows-x64 | readyToImplement | `implement_now` |
| load_change_analytics | load_change_analyt | macos-arm64 | readyToImplement | `implement_now` |
| load_change_analytics | load_change_analyt | windows-x64 | readyToImplement | `implement_now` |
| load_custom_instruction_state | load_custom_instru | macos-arm64 | readyToImplement | `implement_now` |
| load_custom_instruction_state | load_custom_instru | windows-x64 | readyToImplement | `implement_now` |
| load_installed_skills | load_installed_ski | macos-arm64 | readyToImplement | `implement_now` |
| load_installed_skills | load_installed_ski | windows-x64 | readyToImplement | `implement_now` |
| load_mcp_servers | load_mcp_servers | macos-arm64 | readyToImplement | `implement_now` |
| load_mcp_servers | load_mcp_servers | windows-x64 | readyToImplement | `implement_now` |
| load_pending_auto_switch | load_pending_auto_ | macos-arm64 | readyToImplement | `implement_now` |
| load_pending_auto_switch | load_pending_auto_ | windows-x64 | readyToImplement | `implement_now` |
| load_quota_history | load_quota_history | macos-arm64 | readyToImplement | `implement_now` |
| load_quota_history | load_quota_history | windows-x64 | readyToImplement | `implement_now` |
| load_session_analytics | load_session_analy | macos-arm64 | readyToImplement | `implement_now` |
| load_session_analytics | load_session_analy | windows-x64 | readyToImplement | `implement_now` |
| load_sessions | load_sessions | macos-arm64 | readyToImplement | `implement_now` |
| load_sessions | load_sessions | windows-x64 | readyToImplement | `implement_now` |
| load_skill_backups | load_skill_backups | macos-arm64 | readyToImplement | `implement_now` |
| load_skill_backups | load_skill_backups | windows-x64 | readyToImplement | `implement_now` |
| load_token_analytics | load_token_analyti | macos-arm64 | readyToImplement | `implement_now` |
| load_token_analytics | load_token_analyti | windows-x64 | readyToImplement | `implement_now` |
| load_tool_analytics | load_tool_analytic | macos-arm64 | readyToImplement | `implement_now` |
| load_tool_analytics | load_tool_analytic | windows-x64 | readyToImplement | `implement_now` |
| load_usage_analytics | load_usage_analyti | macos-arm64 | readyToImplement | `implement_now` |
| load_usage_analytics | load_usage_analyti | windows-x64 | readyToImplement | `implement_now` |
| load_voice_asr_config | load_voice_asr_con | macos-arm64 | readyToImplement | `implement_now` |
| load_voice_asr_config | load_voice_asr_con | windows-x64 | readyToImplement | `implement_now` |
| load_voice_llm_config | load_voice_llm_con | macos-arm64 | readyToImplement | `implement_now` |
| load_voice_llm_config | load_voice_llm_con | windows-x64 | readyToImplement | `implement_now` |
| load_voice_runtime_status | load_voice_runtime | macos-arm64 | readyToImplement | `implement_now` |
| load_voice_runtime_status | load_voice_runtime | windows-x64 | readyToImplement | `implement_now` |
| load_voice_workspace | load_voice_workspa | macos-arm64 | readyToImplement | `implement_now` |
| load_voice_workspace | load_voice_workspa | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | logout | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | logout | windows-x64 | readyToImplement | `implement_now` |
| note_usage_refresh_activity | note_usage_refresh | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | preview_account_im | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | preview_account_im | windows-x64 | readyToImplement | `implement_now` |
| preview_custom_instruction_apply | preview_custom_ins | macos-arm64 | readyToImplement | `implement_now` |
| preview_custom_instruction_apply | preview_custom_ins | windows-x64 | readyToImplement | `implement_now` |
| dim6-close-readyToImplement | relay_diagnostic | macos | readyToImplement | `implement_now` |
| deep-internal-wf-surface-p2-internal | relay_translator | macos | readyToImplement | `implement_now` |
| deep-internal-wf-surface-p2-internal | relay_translator_s | macos | readyToImplement | `implement_now` |
| wf3-d2pkg-109 | relay_translator_s | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | remove_accounts | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | remove_accounts | windows-x64 | readyToImplement | `implement_now` |
| remove_mcp_server | remove_mcp_server | macos-arm64 | readyToImplement | `implement_now` |
| remove_mcp_server | remove_mcp_server | windows-x64 | readyToImplement | `implement_now` |
| remove_skill | remove_skill | macos-arm64 | readyToImplement | `implement_now` |
| remove_skill | remove_skill | windows-x64 | readyToImplement | `implement_now` |
| remove_voice_history_entry | remove_voice_histo | macos-arm64 | readyToImplement | `implement_now` |
| remove_voice_history_entry | remove_voice_histo | windows-x64 | readyToImplement | `implement_now` |
| remove_voice_mode_shortcut | remove_voice_mode_ | macos-arm64 | readyToImplement | `implement_now` |
| remove_voice_mode_shortcut | remove_voice_mode_ | windows-x64 | readyToImplement | `implement_now` |
| remove_voice_template | remove_voice_templ | macos-arm64 | readyToImplement | `implement_now` |
| remove_voice_template | remove_voice_templ | windows-x64 | readyToImplement | `implement_now` |
| remove_voice_vocabulary | remove_voice_vocab | macos-arm64 | readyToImplement | `implement_now` |
| remove_voice_vocabulary_app_scope | remove_voice_vocab | macos-arm64 | readyToImplement | `implement_now` |
| remove_voice_vocabulary | remove_voice_vocab | windows-x64 | readyToImplement | `implement_now` |
| remove_voice_vocabulary_app_scope | remove_voice_vocab | windows-x64 | readyToImplement | `implement_now` |
| replace_voice_vocabulary_kind | replace_voice_voca | macos-arm64 | readyToImplement | `implement_now` |
| replace_voice_vocabulary_kind | replace_voice_voca | windows-x64 | readyToImplement | `implement_now` |
| request_accessibility_permission | request_accessibil | macos-arm64 | readyToImplement | `implement_now` |
| request_accessibility_permission | request_accessibil | windows-x64 | readyToImplement | `implement_now` |
| request_voice_permissions | request_voice_perm | macos-arm64 | readyToImplement | `implement_now` |
| request_voice_permissions | request_voice_perm | windows-x64 | readyToImplement | `implement_now` |
| reset_codex_config | reset_codex_config | macos-arm64 | readyToImplement | `implement_now` |
| reset_codex_config | reset_codex_config | windows-x64 | readyToImplement | `implement_now` |
| resolve_voice_vocabulary_app_info | resolve_voice_voca | macos-arm64 | readyToImplement | `implement_now` |
| resolve_voice_vocabulary_app_info | resolve_voice_voca | windows-x64 | readyToImplement | `implement_now` |
| restore_skill_backup | restore_skill_back | macos-arm64 | readyToImplement | `implement_now` |
| restore_skill_backup | restore_skill_back | windows-x64 | readyToImplement | `implement_now` |
| rollback_custom_instruction | rollback_custom_in | macos-arm64 | readyToImplement | `implement_now` |
| rollback_custom_instruction | rollback_custom_in | windows-x64 | readyToImplement | `implement_now` |
| run_daemon_once | run_daemon_once | macos-arm64 | readyToImplement | `implement_now` |
| run_daemon_once | run_daemon_once | windows-x64 | readyToImplement | `implement_now` |
| save_voice_asr_config | save_voice_asr_con | macos-arm64 | readyToImplement | `implement_now` |
| save_voice_asr_config | save_voice_asr_con | windows-x64 | readyToImplement | `implement_now` |
| save_voice_llm_config | save_voice_llm_con | macos-arm64 | readyToImplement | `implement_now` |
| save_voice_llm_config | save_voice_llm_con | windows-x64 | readyToImplement | `implement_now` |
| schedule_full_runtime_refresh | schedule_full_runt | macos-arm64 | readyToImplement | `implement_now` |
| set_auto_switch | set_auto_switch | macos-arm64 | readyToImplement | `implement_now` |
| set_auto_switch | set_auto_switch | windows-x64 | readyToImplement | `implement_now` |
| set_image_compat | set_image_compat | macos-arm64 | readyToImplement | `implement_now` |
| set_image_compat | set_image_compat | windows-x64 | readyToImplement | `implement_now` |
| set_mcp_server_enabled | set_mcp_server_ena | macos-arm64 | readyToImplement | `implement_now` |
| set_mcp_server_enabled | set_mcp_server_ena | windows-x64 | readyToImplement | `implement_now` |
| set_voice_global_shortcut | set_voice_global_s | macos-arm64 | readyToImplement | `implement_now` |
| set_voice_global_shortcut | set_voice_global_s | windows-x64 | readyToImplement | `implement_now` |
| set_voice_mode_shortcut | set_voice_mode_sho | macos-arm64 | readyToImplement | `implement_now` |
| set_voice_mode_shortcut | set_voice_mode_sho | windows-x64 | readyToImplement | `implement_now` |
| set_voice_processing_mode_id | set_voice_processi | macos-arm64 | readyToImplement | `implement_now` |
| set_voice_processing_mode_id | set_voice_processi | windows-x64 | readyToImplement | `implement_now` |
| set_voice_trigger_listener_suppressed | set_voice_trigger_ | macos-arm64 | readyToImplement | `implement_now` |
| set_voice_trigger_key | set_voice_trigger_ | macos-arm64 | readyToImplement | `implement_now` |
| set_voice_trigger_bindings | set_voice_trigger_ | macos-arm64 | readyToImplement | `implement_now` |
| set_voice_trigger_listener_suppressed | set_voice_trigger_ | windows-x64 | readyToImplement | `implement_now` |
| set_voice_trigger_key | set_voice_trigger_ | windows-x64 | readyToImplement | `implement_now` |
| set_voice_trigger_bindings | set_voice_trigger_ | windows-x64 | readyToImplement | `implement_now` |
| show_voice_search_overlay | show_voice_search_ | macos-arm64 | readyToImplement | `implement_now` |
| show_voice_search_overlay | show_voice_search_ | windows-x64 | readyToImplement | `implement_now` |
| start_auto_switch_pending_watcher | start_auto_switch_ | macos-arm64 | readyToImplement | `implement_now` |
| start_auto_switch_pending_watcher | start_auto_switch_ | windows-x64 | readyToImplement | `implement_now` |
| start_usage_refresh_watcher | start_usage_refres | macos-arm64 | readyToImplement | `implement_now` |
| start_voice_capture | start_voice_captur | macos-arm64 | readyToImplement | `implement_now` |
| start_voice_capture | start_voice_captur | windows-x64 | readyToImplement | `implement_now` |
| stop_voice_capture | stop_voice_capture | macos-arm64 | readyToImplement | `implement_now` |
| stop_voice_capture | stop_voice_capture | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | switch_account | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | switch_account | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | switch_account_and | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | switch_account_and | windows-x64 | readyToImplement | `implement_now` |
| test_voice_asr_config | test_voice_asr_con | macos-arm64 | readyToImplement | `implement_now` |
| test_voice_asr_config | test_voice_asr_con | windows-x64 | readyToImplement | `implement_now` |
| test_voice_llm_config | test_voice_llm_con | macos-arm64 | readyToImplement | `implement_now` |
| test_voice_llm_config | test_voice_llm_con | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | toggle_plugin | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | toggle_plugin | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | tray_relay_usage_q | windows-x64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | update_plugin_conf | macos-arm64 | readyToImplement | `implement_now` |
| desync-writeback-wf3-D1 | update_plugin_conf | windows-x64 | readyToImplement | `implement_now` |
| update_usage_refresh_schedule | update_usage_refre | macos-arm64 | readyToImplement | `implement_now` |
| update_voice_runtime_settings | update_voice_runti | macos-arm64 | readyToImplement | `implement_now` |
| update_voice_runtime_settings | update_voice_runti | windows-x64 | readyToImplement | `implement_now` |
| upsert_mcp_server | upsert_mcp_server | macos-arm64 | readyToImplement | `implement_now` |
| upsert_mcp_server | upsert_mcp_server | windows-x64 | readyToImplement | `implement_now` |
| upsert_voice_template | upsert_voice_templ | macos-arm64 | readyToImplement | `implement_now` |
| upsert_voice_template | upsert_voice_templ | windows-x64 | readyToImplement | `implement_now` |
| upsert_voice_vocabulary | upsert_voice_vocab | macos-arm64 | readyToImplement | `implement_now` |
| upsert_voice_vocabulary_app_scope | upsert_voice_vocab | macos-arm64 | readyToImplement | `implement_now` |
| upsert_voice_vocabulary | upsert_voice_vocab | windows-x64 | readyToImplement | `implement_now` |
| upsert_voice_vocabulary_app_scope | upsert_voice_vocab | windows-x64 | readyToImplement | `implement_now` |
| custom-instructions | wf6-bundle | macos-arm64 | readyToImplement | `implement_now` |
| custom-instructions | wf6-bundle | windows-x64 | readyToImplement | `implement_now` |
| daemon-autoswitch | wf6-bundle | macos-arm64 | readyToImplement | `implement_now` |
| daemon-autoswitch | wf6-bundle | windows-x64 | readyToImplement | `implement_now` |
| mcp | wf6-bundle | macos-arm64 | readyToImplement | `implement_now` |
| mcp | wf6-bundle | windows-x64 | readyToImplement | `implement_now` |
| sessions-analytics | wf6-bundle | macos-arm64 | readyToImplement | `implement_now` |
| sessions-analytics | wf6-bundle | windows-x64 | readyToImplement | `implement_now` |
| skills | wf6-bundle | macos-arm64 | readyToImplement | `implement_now` |
| skills | wf6-bundle | windows-x64 | readyToImplement | `implement_now` |
| voice | wf6-bundle | macos-arm64 | readyToImplement | `implement_now` |
| voice | wf6-bundle | windows-x64 | readyToImplement | `implement_now` |
| system | wf6-bundle | macos-arm64 | readyToImplement | `implement_now` |
| system | wf6-bundle | windows-x64 | readyToImplement | `implement_now` |
| ? | ? | ? | strictImplementationUs | `implement_now_dim6_test_pending` |
| clean | clean | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| wf12-gap-mac-1 | cmd-discriminant-c | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| detect_api_proxy_config | detect_api_proxy_c | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| diagnose | diagnose | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| diagnose_codex_router | diagnose_codex_rou | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| wf12-gap-win-1-tls-accessor | dim3-callee-addend | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| focus_main_window | focus_main_window | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| force_kill_codex | force_kill_codex | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| get_hotspot_enabled | get_hotspot_enable | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| get_hotspot_enabled | get_hotspot_enable | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| get_mystery_unlock_grants | get_mystery_unlock | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| get_usage_refresh_interval | get_usage_refresh_ | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| get_usage_refresh_interval | get_usage_refresh_ | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| graceful_restart_for_update | graceful_restart_f | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| wf11-missing-leaf-closure | graceful_restart_f | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| hotspot_ready | hotspot_ready | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| hotspot_ready | hotspot_ready | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| wf12-gap-win-2 | idb-rename-hygiene | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| load_snapshot | load_snapshot | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| merge_mystery_unlock_grants | merge_mystery_unlo | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| mystery_route_allowed | mystery_route_allo | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| open_path | open_path | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| rebuild_registry | rebuild_registry | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| refresh_usage_snapshot | refresh_usage_snap | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| distilled-wf-closeout | reset_codex_config | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| restart_codex | restart_codex | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| rollback_threads_for_router | rollback_threads_f | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| run_codex_router_diagnostics | run_codex_router_d | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| set_api_proxy_config | set_api_proxy_conf | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| set_app_theme | set_app_theme | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| set_hotspot_enabled | set_hotspot_enable | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| set_hotspot_enabled | set_hotspot_enable | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| set_usage_refresh_interval | set_usage_refresh_ | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| set_usage_refresh_interval | set_usage_refresh_ | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| consumerStartReady | sse_translate_stre | macos-arm64 | consumerStartReady | `implement_now_dim6_test_pending` |
| test_api_proxy_config | test_api_proxy_con | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| system-hotspot | wf6-bundle | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| system-hotspot | wf6-bundle | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| system-usage | wf6-bundle | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| maintenance | wf6-bundle | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| window-path | wf6-bundle | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| mystery-unlock | wf6-bundle | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| ui-theme | wf6-bundle | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| system-usage | wf6-bundle | macos-arm64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| hotspot_ready | windows-x64 | windows-x64 | strictImplementationUs | `implement_now_dim6_test_pending` |
| note_usage_refresh_activity | note_usage_refresh | windows-x64 | consumerStartReady | `platform_absent` |
| schedule_full_runtime_refresh | schedule_full_runt | windows-x64 | consumerStartReady | `platform_absent` |
| start_usage_refresh_watcher | start_usage_refres | windows-x64 | consumerStartReady | `platform_absent` |
| update_usage_refresh_schedule | update_usage_refre | windows-x64 | consumerStartReady | `platform_absent` |

---

## 1.2.4 delta 消费者动作（2026-07-29, session=<审计会话> machine=mini-local）

> baseline=1.2.3（consumerStartReady 23/23, readyToImplement=false）。本 delta 轮只读消费 4×6dims + DELTA-FINAL + COVERAGE-FINAL + FRONTEND-CCF-DELTA + CHANGELOG-FRONTEND-ALIGNMENT，不连 IDA、不逆二进制。delta 轮不升 ready（implementation_use=false），消费者动作标 `implement_against_contract`——按已知 in/out DTO 契约 + 6dims 行为变更动工，内部 accepted_unknown 不阻碍。

### 新增 3 IPC 命令（1.2.4 前端 134 = 1.2.3 131 + 3 新 / -0 删除）

| command | module | platform | gate_tier | consumer_action |
|---|---|---|---|---|
| get_claude_web_search_compat | commands::system / maintenance-page | macos-arm64 | consumerStartReady (inherited) | `implement_against_contract` |
| set_claude_web_search_compat | commands::relay / maintenance-page | macos-arm64 | consumerStartReady (inherited) | `implement_against_contract` |
| set_codex_no_account_slots | core::relay::manager / relay-page | macos-arm64 | consumerStartReady (inherited) | `implement_against_contract` |

### 116 mac NEW-delta 函数行为变更（按 4×6dims bundle 分组）

| bundle | module | functions | 关键行为变更 | consumer_action |
|---|---|---|---|---|
| relay-translator-anthropic | translator + stream + anthropic_reasoning(NEW) + anthropic_history(NEW) + native_responses_compat + models | 32 | Anthropic relay 翻译层三段化(推理决策+历史修正+流式直转); stream 重写为 close_anthropic_block 分发器; rectify_invalid_thinking_signature 删末轮非法 thinking 块; strip_hosted_web_search_tools 删内存 hosted web_search 工具 | `implement_against_contract` |
| relay-router-auth | router_unlock_auth(NEW) + router_reconciler + manager + router_exit_guard_state(NEW) + proxy_server | 21 | 双轨鉴权(commit_auth_for_router 双分支 dry-run/写盘 + should_use_no_account_mode); verify_managed_auth_commit_boundary 提交闸; router_exit_guard_state 迁移中返回 2 阻退出; catalogSlug 纳入槽位身份指纹 | `implement_against_contract` |
| relay-catalog-thread-diag | codex_catalog + codex_thread_visibility + codex_diagnostic + codex_writer + codex_config_reconciler | 45 | 无账号模型槽路由; 线程 provider 收养( fix_orphan_thread_providers 带 archived=0 守卫 + ROLLBACK); 诊断修复流水线; reconcile_inner 重写 config.toml | `implement_against_contract` |
| repository-platform-system | repository + api_client + models + sessions + platform::process + platform::single_instance + commands::system + commands::relay | 12 | 账号切换预检/复核双闸(preflight_account_switch + verify_account_switch, 失败抛 SWITCH_AUTH/REGISTRY_VERIFY_FAILED); 启动快照渐进式深比(无 diff 直接 Ok 跳过); 单实例锁(mac flock / win InterlockedCompareExchange8); bundled CLI 路径解析 | `implement_against_contract` |

### 已知 accepted_unknown（不阻碍实现）

- mac setter 已覆盖（更正）：两个 setter——`set_claude_web_search_compat` mac setter 实现体**在本批 NEW-delta 内**——`RelayManager::set_claude_web_search_compat`@0x10079bbc0（core/relay/manager/ida/pseudocode/，157 行完整 body：Mutex lock/unlock + `RelayManager::persist` + `RelayState` Clone + `GLOBAL_PANIC_COUNT` poison 检查）；@0x1005825c0 是独立 `ClaudeWebSearchCompatPayload` serde Serialize（DTO），与 setter 非同一函数，早期误并，现据盘上 .c 更正。`set_codex_no_account_slots` mac setter 实现体同样**在本批 NEW-delta 内**——`RelayManager::set_codex_no_account_slots`@0x10079a8a0（core/relay/manager/ida/pseudocode/，725 行完整 body：slots/relaunch payload 反序列化 + `RelayState` 写回 + persist，无 kill/spawn/exit）；@0x1007b6530 是独立 `CodexNoAccountSlotsPayload` serde Serialize（DTO），与 setter 非同一函数，早期误并，现据盘上 .c 更正。mac@0x10079bbc0 / win@0x140e01580 与 mac@0x10079a8a0 / win@0x140e2de30 均双平台对齐，无需补 mac 等价路径，禁止再对这两个函数发起补逆工作单。
- `router_exit_guard_state`(@mac 0x1002cae90) 后端有命令注册，但 2 份前端 page 级 delta 未发现直接消费者（疑在 app 根组件/window 关闭钩子，出 page 级 delta 范围），不视为悬空。
- `contains_http_status_code`@0x10057e300 越界走 `panic_bounds_check`（本批唯一显式 panic，属库内不变量违例，非用户输入路径）。
- managed_api_key 的 14 字符 key 名与 23 字节前缀 XOR 掩码常量未读出明文（AiMaMi managed key 敏感识别位，按脱敏红线不还原）。
- `anthropic_history::normalize_messages` 的完整 SHA-256 signature 算法未逐 round 还原（仅确认使用了 SHA-256，轮常量 0x6A09E667/0x5BE0CD19/0x9B05688C/0xA54FF53A 已实测）。

### 破坏性副作用（红线20 已标，去重全编目，消费侧实现时必须对齐）

- 文件落盘(atomic/persist): commit_auth_for_router 原子写 router-unlock-auth-marker.json + 原子覆盖用户实 OAuth 备份(不可逆点); write_prepared_catalog 原子写 codex_router_catalog.json; reconcile_inner 重写 config.toml; patch_no_account_model_restore_rollout 写 journal; write_orphan_thread_adoption_recovery_file 原子写 thread-provider-adoptions; store_bootstrap_snapshot_progressive 条件性写 bootstrap 缓存; single_instance::acquire 创建/截断锁文件 + 写 PID。
- DB(SQLite threads, 事务 + ROLLBACK + archived=0 守卫): restore_no_account_model_threads UPDATE threads SET model; fix_orphan_thread_providers_with_catalog 备份 DB → 4 个 UPDATE 变体收养 → 失败 ROLLBACK → 写 recovery; rollback_orphan_thread_adoption/with_orphan_adoption_rollback 改 DB 回滚。
- 进程/Codex 重启(sidecar): set_codex_no_account_slots 后端命令本身无 Codex 重启执行体(只 persist relay state + router_transition::run + 可选 launch_codex_app_warning 仅弹警告); 实际重启由前端按 relaunch 出参触发(routerEnabled && noAccountMode 时强制 relaunch=true)。router_exit_guard_state 迁移中返回 2 阻止 app 退出。restore_router_enabled_stably transition 失败回滚 router_enabled。
- 内存突变(非落盘但改变运行态): strip_hosted_web_search_tools 删内存 serde_json::Value 的 tools/tool_choice 键; set_claude_web_search_compat 突变 RelayState + 触发落盘; relay 翻译层各 push_*/close_* 写 messages Vec / content 数组 / event sink(请求生命周期内,请求结束即弃)。

### 证据路径指针

- 4×6dims: `raw/aimami/1.2.4/macos-arm64/version-delta/{relay-translator-anthropic,relay-catalog-thread-diag,relay-router-auth,repository-platform-system}-6dims.md`
- 跨平台整合终稿: `raw/aimami/1.2.4/macos-arm64/version-delta/DELTA-FINAL-1.2.4.md`
- 消费者面向终稿: `audits/COVERAGE-FINAL-1.2.4.md`
- 前端 CCF delta: `raw/aimami/1.2.4/macos-arm64/version-delta/FRONTEND-CCF-DELTA-1.2.4.md`
- changelog 对账: `raw/aimami/1.2.4/macos-arm64/version-delta/CHANGELOG-FRONTEND-ALIGNMENT-1.2.4.md`
- 4 audit bundle: `audits/macos-1.2.4-{relay-router-auth,relay-translator-anthropic,repository-platform-system,relay-catalog-thread-diag}/`


---

## 1.2.6 macOS version-delta reducer（2026-08-05）

| scope | platform | gate_tier | consumer_action | reason |
| --- | --- | --- | --- | --- |
| 1.2.6 version-delta aggregate | macos-arm64 | blocked | `do_not_promote` | B 已闭合，但 A 仅 x64、C/D 未完整，dim3/dim5 未闭合；dim6 为消费者侧动作（见上方「消费者侧动作声明」），`live_reference_parity=false`、`dim6_acceptance=pending_implementation_side`。 |

三个 1.2.3 之后出现的 IPC（`get_claude_web_search_compat`、`set_claude_web_search_compat`、`set_codex_no_account_slots`）在 1.2.6 没有新一轮命令差异，应继续引用 1.2.4 canonical delta；本 reducer 不新增实现许可。Windows 为 Unknown。


---

## AiMaMi 1.2.6 macOS x86_64 canonical overwrite (<审计会话>
- **状态**：`BLOCKED`；不开始实现。
- **可消费内容**：1749 行 covered-functions 分类与静态行为边界，见 `audits/macos-1.2.6-version-delta/logic/COVERED-FUNCTIONS-CLASSIFICATION-1.2.6.md` 和 `logic/RECURSIVE-LEAF-CLOSURE-1.2.6.md`。
- **禁止推导**：`LIVE_REFERENCE_NOT_RUN`；不把 x86_64 结论外推 ARM64 地址或 Windows。
- **后续动作**：仅补 98 个 current deep leaf、精确 DTO nullable/default/error 与执行 acceptance；当前所有实施门为 false。


---

# AiMaMi 1.2.4 / 1.2.6 delta 消费者动作分发

> 从规范 delta 文件(intermediate/aimami/{ver}/{plat}/version-delta/)派生。2026-08-08。

## 1.2.3 → 1.2.4 delta

| 消费者动作 | 命令/模块 | 平台 | 依据 |
|---|---|---|---|
| implement_now | get_claude_web_search_compat, set_claude_web_search_compat, set_codex_no_account_slots | macos-arm64 | mac confirmed_live + win handler located + [FULL decompile] + 前端 CCF 新增 |
| implement_now | router_unlock_auth(commit_/has_restorable/has_usable/managed_marker/should_use_no_account) | macos-arm64 | 12 NEW functions, full decompile, 6dims relay-router-auth |
| implement_now | anthropic_reasoning(7) + anthropic_history(5, rectify_invalid_thinking_signature) + translator::stream 重写 | macos-arm64 | 32 functions, full decompile, 6dims relay-translator-anthropic |
| implement_now | codex_catalog(default_no_account_slots/normalize/validate) + codex_thread_visibility(restore_no_account_model_threads) | macos-arm64 | full decompile, 6dims relay-catalog-thread-diag |
| implement_now | codex_bundled_cli_path + repository DTO 扩容 | macos-arm64 | full decompile, 6dims repository-platform-system |
| implement_against_contract | 126 remaining win commands (body-equivalence 未全验) | windows-x64 | 128cmd-identity-ledger: 95 renamed + 29 still-sub + 10 unresolved |
| reuse_baseline | same-commands (icf_alias coexisting, noise_below_2x) | cross | 按 flow.md step 3 沿用 1.2.3 证据 + SHA 绑定 |
| platform_divergence | get_codex_router_auth_readiness, remove_mcp_server (mac removed, win dispatch still present) | cross | mac_verify_63 confirmed_removed; win handler may persist |

## 1.2.4 → 1.2.6 delta

| 消费者动作 | 命令/模块 | 平台 | 依据 |
|---|---|---|---|
| implement_now | codex_bundled_cli_path 串集缩减, ChatGPT 桌面应用定位器(sub_140B370F0) | windows-x64 | 2 real_change_candidates, full decompile |
| implement_against_contract | 126 remaining commands (handler identity recorded, body diff not fully verified) | windows-x64 | 128cmd-identity-ledger |
| reuse_baseline | 8 already-paired commands (same handler) + 8 function_level_pairs (noise_below_2x) | windows-x64 | IPC contract 134=134 identical |
| reuse_baseline | mac icf_alias serde folds (same behavior) | macos-arm64 | authoritative-symbol-diff v2-live-verified |
| investigate | mac removed functional symbols (delete_sessions, router_unlock_auth::cleanup_for_native_off, codex_thread_visibility::fallback/patch/reconcile_threads) | cross | mac removed, win handler status needs verification |

## 阻塞/死墙

- **0 阻塞**:1.2.3→1.2.6 双系统 4 段 delta 全 strictImplementationUse=true（mac bundle 23 raw leaf + win bundle 126 raw leaf，dim1-5 全 PASS，四角度 A/B/C/D 全 PASS，2026-08-09 dual-gate closure 核实）；gate_accepted=false 仅因 dim6 + 真机对照（GATE-SPEC 职责边界，阻塞 readyToImplement 但 NOT strictImplementationUse）
- **0 死墙**:无 accepted_unknown 假墙(红线13)

## 消费者侧动作声明（非逆向侧缺口）

> 以下两项按红线25（LIVE_REFERENCE_PARITY_GATE）和 GATE-SPEC §DIM1-6 定义，是消费者（实现）侧的动作，不是逆向侧缺口。逆向侧的合规处理是显式声明状态——这是规范要求，不是"做不了挂缺口"。

| 消费者侧动作 | 规范状态 | 依据 | 逆向侧已提供的 basis |
|---|---|---|---|
| 真机对照（启动参照 App 做截图/交互验收） | `live_reference_parity=false`（未对照） | 红线25：声明「真机验收通过」前必须实际启动参照 App；未做则显式声明「未对照」是合规处理 | 各 VERSION-DIFF.md 的 LIVE_REFERENCE 声明段；各 bundle 的 dim1-dim5 静态反编译证据 |
| dim6 验收（单测/E2E/人工验收） | `dim6_acceptance=pending_implementation_side` | GATE-SPEC dim6 定义：dim6 是 C5 实现侧的验收工作，不是逆向生产者的工作；逆向侧提供 contract/DTO/behavior basis | 各 bundle gate-report.json 的 dim1-dim5 证据 + interface/DTO/error envelope/side-effect 编目 |

## 规范 delta 文件路径

- `intermediate/aimami/1.2.4/{macos-arm64,windows-x64}/version-delta/{delta-commands,same-commands,removed}.txt + VERSION-DIFF.md`
- `intermediate/aimami/1.2.6/{macos-arm64,windows-x64}/version-delta/{delta-commands,same-commands,removed}.txt + VERSION-DIFF.md`


---

## Windows 1.2.4 delta consumer actions (added 2026-08-09, session win-1.2.4-per-module-bundles-20260809)

### Bundle: windows-1.2.4-commands-relay (strictImplementationUse, gate_accepted=false)

| command | win EA | classification | argKeys | responseFields | sideEffects | destructive | consumer action |
|---|---|---|---|---|---|---|---|
| `set_claude_web_search_compat` | 0x140e01580 | new_in_1.2.4 | enabled | success | writes config (persistence) | 否 | 写 RelayState `claude_web_search_compat_enabled` 标志（proxy_server +350 偏移，mutex 保护）|
| `set_codex_no_account_slots` | 0x140e2de30 | new_in_1.2.4 | slots | success | writes config (persistence) | 否 | 设置无账号模式模型槽位列表，触发 router_transition |
| `quit_keeping_router` | 0x140173f00 | body_diff_vs_1.2.3 | (none) | quit_decision | may quit app while keeping router enabled | 否 | 1.2.3→1.2.4 从 sync 3-arg 改为 async 1-arg state machine (bb=40, cc=11)，退出 App 保持 router 启用 |

### Bundle: windows-1.2.4-commands-system (strictImplementationUse, gate_accepted=false)

| command | win EA | classification | argKeys | responseFields | sideEffects | destructive | consumer action |
|---|---|---|---|---|---|---|---|
| `get_claude_web_search_compat` | 0x140156ef0 | new_in_1.2.4 | (none) | web_search_compat_state | none (read-only getter) | 否 | 只读返回 RelayState `claude_web_search_compat_enabled` 标志当前值 |

### Bundle: windows-1.2.4-commands-accounts (strictImplementationUse, gate_accepted=false)

| command | win EA | classification | argKeys | responseFields | sideEffects | destructive | consumer action |
|---|---|---|---|---|---|---|---|
| `remove_accounts` | 0x140e223b0 | body_diff_vs_1.2.3 | accountKeys | result, mutation | removes accounts + runtime refresh + mutation event | **是** | 1.2.3→1.2.4 从 sync 4-arg 改为 async 2-arg state machine (bb=143, cc=43)，删除账号+运行时刷新+mutation 事件。**破坏性：删除账号不可逆** |

### Bundle: windows-1.2.4-platform-process (strictImplementationUse, gate_accepted=false)

| command | win EA | classification | argKeys | responseFields | sideEffects | destructive | consumer action |
|---|---|---|---|---|---|---|---|
| `codex_bundled_cli_path` | 0x140a19ac0 | new_in_1.2.4 | (none) | path_or_null | none (read-only path resolution) | 否 | 构建 6 个候选 Codex.exe 安装路径（app/registry App-Paths），逐个探测，返回第一个命中或 -1 |

### Gate status

- dim1-5: PASS (full-chain to implementation leaf for all 6 delta commands)
- dim6: pending (no test/acceptance mapping)
- 真机未对照（红线25 LIVE_REFERENCE_PARITY_GATE）
- gate_accepted=false (strictImplementationUse ≠ readyToImplement)
- consumer 须自行做真机验收 + 补 test/acceptance mapping 后方可升 readyToImplement
