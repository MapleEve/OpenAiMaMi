use crate::core::error::CoreError;
use crate::core::model::runtime::{RuntimeWatcherSchedule, RuntimeWatcherSnapshot};
use crate::core::model::settings::UsageRefreshInterval;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;

// runtime 仓储 owning 可重建监听器快照，只从路径和 settings 文件状态推导结果。
pub fn load_runtime_watcher_snapshot(
    repo: &Repository,
) -> Result<RuntimeWatcherSnapshot, CoreError> {
    let settings = settings_repository::load_app_settings(repo)?;
    let interval = UsageRefreshInterval::parse(&settings.usage_refresh_interval)
        .unwrap_or_else(|_| UsageRefreshInterval::default());

    Ok(RuntimeWatcherSnapshot {
        settings_path: repo.paths().settings_path.display().to_string(),
        auto_switch_enabled: settings.auto_switch_enabled,
        schedule_interval: RuntimeWatcherSchedule::new(interval),
    })
}
