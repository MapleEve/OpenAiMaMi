use crate::application::service::{current_timestamp, restored_status};
use crate::contracts::{
    ApiConfigPayload, ApiConnectivityPayload, ApiReachabilityStatus, AppPathState, AppSettingsFile,
    AppStatusPayload, AutoSwitchRuntimeState, AutoSwitchStatusPayload, BackendEffect,
    BootstrapStatePayload, CoreSnapshotPayload, UsageSource,
};
use crate::core::error::CoreError;
use crate::repository::accounts as accounts_repository;
use crate::repository::bootstrap as bootstrap_repository;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;

// snapshot-bootstrap usecase 只负责启动快照组装和 bootstrap cache 切片读写。
pub fn load_snapshot(repo: &Repository) -> Result<CoreSnapshotPayload, CoreError> {
    let settings = settings_repository::load_app_settings(repo)?;
    let accounts = accounts_repository::load_account_summaries(repo)?;
    let payload = CoreSnapshotPayload {
        backend_status: restored_status("system", "load_snapshot", BackendEffect::NoOp),
        status: make_status(repo, &settings),
        accounts,
    };
    store_bootstrap_snapshot_progressive(repo, &payload);
    Ok(payload)
}

pub fn load_bootstrap_state(repo: &Repository) -> Result<BootstrapStatePayload, CoreError> {
    let settings = settings_repository::load_app_settings(repo)?;
    let cache = bootstrap_repository::load_bootstrap_cache(repo).unwrap_or_default();
    Ok(BootstrapStatePayload {
        backend_status: restored_status("system", "load_bootstrap_state", BackendEffect::NoOp),
        written_at: cache.written_at,
        snapshot_progressive: cache.snapshot_progressive,
        usage_analytics: cache.usage_analytics,
        mcp_servers: cache.mcp_servers,
        installed_skills: cache.installed_skills,
        executed_at: None,
        run_once: false,
        auto_switch_enabled: settings.auto_switch_enabled,
        active_account_key: None,
        switched_account_key: None,
        pending_switch_account_key: None,
    })
}

fn make_status(repo: &Repository, settings: &AppSettingsFile) -> AppStatusPayload {
    AppStatusPayload {
        paths: make_path_state(repo),
        last_scan_at: current_timestamp(),
        usage_source: UsageSource::Local,
        auto_switch: make_auto_switch_status(settings),
        api: ApiConfigPayload {
            proxy: settings.api_proxy.clone(),
        },
        api_connectivity: ApiConnectivityPayload {
            usage_status: ApiReachabilityStatus::Unknown,
            usage_last_error: None,
        },
    }
}

pub(super) fn make_path_state(repo: &Repository) -> AppPathState {
    let paths = repo.paths();
    AppPathState {
        codex_home: paths.codex_home.display().to_string(),
        accounts_path: paths.accounts_dir.display().to_string(),
        auth_path: paths.auth_path.display().to_string(),
        registry_path: paths.registry_path.display().to_string(),
        sessions_path: paths.sessions_dir.display().to_string(),
        launch_agent_path: paths.launch_agent_path.display().to_string(),
        auto_switch_log_path: paths.auto_switch_log_path.display().to_string(),
        auth_exists: repo.fs().exists(&paths.auth_path),
        registry_exists: repo.fs().exists(&paths.registry_path),
        sessions_exists: repo.fs().exists(&paths.sessions_dir),
    }
}

pub(super) fn make_auto_switch_status(settings: &AppSettingsFile) -> AutoSwitchStatusPayload {
    AutoSwitchStatusPayload {
        enabled: settings.auto_switch_enabled,
        threshold_5h_percent: settings.threshold_5h_percent,
        threshold_weekly_percent: settings.threshold_weekly_percent,
        service_state: AutoSwitchRuntimeState::NotInstalled,
        service_label: "dev.aimami.auto-switch".to_string(),
    }
}

pub(super) fn store_bootstrap_snapshot_progressive(
    repo: &Repository,
    payload: &CoreSnapshotPayload,
) {
    if let Ok(snapshot_progressive) = serde_json::to_value(payload) {
        let _ = bootstrap_repository::store_bootstrap_snapshot_progressive(
            repo,
            current_timestamp(),
            snapshot_progressive,
        );
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn load_bootstrap_state_reads_cache_slices_without_losing_compat_fields() {
        let repo = Repository::with_temp_file_system("bootstrap-state-cache");
        repo.paths().ensure_app_directories().expect("create dirs");
        settings_repository::save_app_settings(
            &repo,
            &AppSettingsFile {
                auto_switch_enabled: true,
                ..AppSettingsFile::default()
            },
        )
        .expect("save settings");
        repo.fs()
            .write_string(
                &repo.paths().bootstrap_cache_path,
                r#"{
  "writtenAt": "2026-06-09T00:00:00Z",
  "snapshotProgressive": {"stage": "boot"},
  "mcpServers": [],
  "installedSkills": []
}"#,
            )
            .expect("write cache");

        let payload = load_bootstrap_state(&repo).expect("load bootstrap");

        assert_eq!(
            payload.written_at,
            Some(serde_json::Value::String(
                "2026-06-09T00:00:00Z".to_string()
            ))
        );
        assert!(payload.snapshot_progressive.is_some());
        assert_eq!(payload.mcp_servers, Some(Vec::new()));
        assert_eq!(payload.installed_skills, Some(Vec::new()));
        assert!(payload.auto_switch_enabled);
    }

    #[test]
    fn load_bootstrap_state_hides_cache_parse_errors_from_frontend() {
        let repo = Repository::with_temp_file_system("bootstrap-state-bad-json");
        repo.paths().ensure_app_directories().expect("create dirs");
        repo.fs()
            .write_string(&repo.paths().bootstrap_cache_path, "{")
            .expect("write cache");

        let payload = load_bootstrap_state(&repo).expect("load bootstrap");

        assert!(payload.written_at.is_none());
        assert!(payload.snapshot_progressive.is_none());
        assert!(payload.usage_analytics.is_none());
        assert!(payload.mcp_servers.is_none());
        assert!(payload.installed_skills.is_none());
    }
}
