# 1.1.8 → 1.2.2(mac)/1.2.1(win) 前端 delta

前端命令: base 131 → new 129 (两平台一致)。

## 命令面
- ADDED(7): default_debug_bundle_file_name, export_debug_bundle, export_session_markdown, migrate_session_worktree, set_voice_overlay_style, upload_debug_report, write_client_debug_log
- REMOVED(9): diagnose_codex_router, fix_codex_router_issue, get_or_create_remote_device_secret, graceful_restart_for_update, import_remote_device_secret_if_empty, run_codex_router_diagnostics, set_relay_display_tags, test_relay_draft_stream, test_relay_provider_stream
- ARGKEY_CHANGED(1): voice_processing_done

## 前端组件面(用户重点)
- relay-page 变(CybVyflj→BZJDyZ5A)、accounts-page 变(DRo3by-s→CyksLBgI)、settings/mcp/skills page 均变。
- 图标库→动态图标(index-De7J35HL.js 含 createLucideIcon/dynamicIcon/icon-registry)。
- 平台版本不同步: mac=1.2.2, win=1.2.1。
