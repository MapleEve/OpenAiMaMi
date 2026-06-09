use crate::contracts::AppSettingsFile;
use crate::core::error::CoreError;
use crate::core::model::hotspot::HotspotSettingsSnapshot;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;

// 热点仓储负责配置路径和可重建配置快照；不保存跨命令内存状态。
pub(crate) fn load_hotspot_settings_snapshot(
    repo: &Repository,
) -> Result<HotspotSettingsSnapshot, CoreError> {
    let source_exists = repo.fs().exists(&repo.paths().settings_path);
    let settings = settings_repository::load_app_settings(repo)?;
    Ok(snapshot_from_settings(repo, settings, source_exists))
}

pub(crate) fn save_hotspot_enabled(
    repo: &Repository,
    enabled: bool,
) -> Result<HotspotSettingsSnapshot, CoreError> {
    let mut settings = settings_repository::load_app_settings(repo)?;
    settings.hotspot_enabled = enabled;
    settings_repository::save_app_settings(repo, &settings)?;
    Ok(snapshot_from_settings(repo, settings, true))
}

fn snapshot_from_settings(
    repo: &Repository,
    settings: AppSettingsFile,
    source_exists: bool,
) -> HotspotSettingsSnapshot {
    HotspotSettingsSnapshot {
        enabled: settings.hotspot_enabled,
        source_path: repo.paths().settings_path.display().to_string(),
        source_exists,
    }
}
