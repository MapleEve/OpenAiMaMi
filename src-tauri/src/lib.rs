pub mod adapters;
pub mod application;
pub mod commands;
pub mod contracts;
pub mod core;
pub mod platform;
pub mod repository;

use repository::Repository;
use std::sync::Mutex;
use tauri::Manager;

pub fn run() {
    tauri::Builder::default()
        .plugin(tauri_plugin_dialog::init())
        .plugin(tauri_plugin_global_shortcut::Builder::new().build())
        .plugin(tauri_plugin_process::init())
        .plugin(tauri_plugin_shell::init())
        .plugin(tauri_plugin_updater::Builder::new().build())
        .manage(Mutex::new(Repository::new()))
        .setup(|app| {
            let repo = app.state::<Mutex<Repository>>();
            if let Ok(repo) = repo.lock() {
                let summary = adapters::tauri::bootstrap_runtime_watchers(&repo);
                if let Some(status) = &summary.usage_refresh_watcher_status {
                    adapters::tauri::emit_runtime_bridge_event(app.handle(), status);
                }
                if let Some(status) = &summary.auto_switch_pending_watcher_status {
                    adapters::tauri::emit_runtime_bridge_event(app.handle(), status);
                }
            }
            Ok(())
        })
        .invoke_handler(tauri::generate_handler![
            commands::accounts::begin_add_account_attach_monitor,
            commands::accounts::export_accounts_to_file,
            commands::accounts::import_accounts_from_file,
            commands::accounts::logout,
            commands::accounts::preview_account_import,
            commands::accounts::remove_accounts,
            commands::accounts::switch_account,
            commands::accounts::switch_account_and_restart_codex,
            commands::sessions::load_sessions,
            commands::sessions::delete_sessions,
            commands::sessions::import_chatgpt_session_account,
            commands::sessions::load_session_analytics,
            commands::analytics::load_usage_analytics,
            commands::analytics::load_quota_history,
            commands::analytics::load_token_analytics,
            commands::analytics::load_tool_analytics,
            commands::analytics::load_change_analytics,
            commands::mcp::load_mcp_servers,
            commands::mcp::upsert_mcp_server,
            commands::mcp::set_mcp_server_enabled,
            commands::mcp::remove_mcp_server,
            commands::skills::load_installed_skills,
            commands::skills::load_skill_backups,
            commands::skills::import_skill,
            commands::skills::remove_skill,
            commands::skills::restore_skill_backup,
            commands::skills::delete_skill_backup,
            commands::custom_instructions::load_custom_instruction_state,
            commands::custom_instructions::preview_custom_instruction_apply,
            commands::custom_instructions::apply_custom_instruction,
            commands::custom_instructions::clear_custom_instruction_block,
            commands::custom_instructions::rollback_custom_instruction,
            commands::runtime_extensions::list_plugins,
            commands::runtime_extensions::toggle_plugin,
            commands::runtime_extensions::get_plugin_config,
            commands::runtime_extensions::update_plugin_config,
            commands::relay::activate_relay_provider,
            commands::relay::deactivate_relay_provider,
            commands::relay::delete_relay_provider,
            commands::relay::diagnose_codex_router,
            commands::relay::export_relay_config,
            commands::relay::fetch_relay_models_draft,
            commands::relay::fix_codex_router_issue,
            commands::relay::get_relay_active,
            commands::relay::get_relay_proxy_status,
            commands::relay::import_relay_config,
            commands::relay::load_relay_state,
            commands::relay::parse_aimami_deeplink,
            commands::relay::run_codex_router_diagnostics,
            commands::relay::set_codex_router_enabled,
            commands::relay::set_block_official_passthrough,
            commands::relay::get_passthrough_audit_log,
            commands::relay::set_relay_provider_network,
            commands::relay::test_relay_draft,
            commands::relay::test_relay_provider,
            commands::relay::upsert_relay_provider,
            commands::tray::create_or_refresh_tray_menu,
            commands::tray::create_tray_icon_window,
            commands::tray::handle_tray_menu_event,
            commands::tray::set_tray_locale,
            commands::tray::tray_relay_usage_quota_model,
            commands::system::load_snapshot,
            commands::system::refresh_usage_snapshot,
            commands::system::load_bootstrap_state,
            commands::maintenance::clean,
            commands::maintenance::rebuild_registry,
            commands::maintenance::diagnose,
            commands::system::set_auto_switch,
            commands::system::configure_auto_switch,
            commands::settings::set_api_proxy_config,
            commands::settings::test_api_proxy_config,
            commands::settings::detect_api_proxy_config,
            commands::daemon::run_daemon_once,
            commands::settings::get_usage_refresh_interval,
            commands::settings::set_usage_refresh_interval,
            commands::daemon::note_usage_refresh_activity,
            commands::daemon::schedule_full_runtime_refresh,
            commands::daemon::start_auto_switch_pending_watcher,
            commands::daemon::start_usage_refresh_watcher,
            commands::daemon::update_usage_refresh_schedule,
            commands::settings::check_update_installability,
            commands::settings::graceful_restart_for_update,
            commands::maintenance::restart_codex,
            commands::maintenance::force_kill_codex,
            commands::maintenance::reset_codex_config,
            commands::maintenance::open_path,
            commands::maintenance::get_system_info,
            commands::system::focus_main_window,
            commands::system::get_device_id,
            commands::system::get_notification_client_state,
            commands::mystery::get_mystery_unlock_grants,
            commands::mystery::merge_mystery_unlock_grants,
            commands::system::get_or_create_remote_device_secret,
            commands::system::import_remote_device_secret_if_empty,
            commands::daemon::load_pending_auto_switch,
            commands::daemon::dismiss_pending_auto_switch,
            commands::daemon::confirm_pending_auto_switch,
            commands::daemon::confirm_pending_auto_switch_and_restart_codex,
            commands::hotspot::has_notch,
            commands::hotspot::get_hotspot_enabled,
            commands::hotspot::set_hotspot_enabled,
            commands::hotspot::hotspot_ready,
            commands::relay::get_image_compat,
            commands::relay::set_image_compat,
        ])
        .run(tauri::generate_context!())
        .expect("AiMaMi 后端启动失败");
}
