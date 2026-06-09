use crate::contracts::AppSettingsFile;
use crate::core::error::CoreError;
use crate::core::model::settings::UsageRefreshInterval;
use crate::repository::Repository;

// settings 仓储 owning settings.json 的读取、写入和字段级持久化更新。
pub fn load_app_settings(repo: &Repository) -> Result<AppSettingsFile, CoreError> {
    if !repo.fs().exists(&repo.paths().settings_path) {
        return Ok(AppSettingsFile::default());
    }

    let raw = repo.fs().read_to_string(&repo.paths().settings_path)?;
    Ok(serde_json::from_str(&raw).unwrap_or_default())
}

pub fn save_app_settings(repo: &Repository, settings: &AppSettingsFile) -> Result<(), CoreError> {
    repo.paths().ensure_app_directories()?;
    repo.fs().write_string(
        &repo.paths().settings_path,
        &serde_json::to_string_pretty(settings)?,
    )
}

pub fn get_usage_refresh_interval(repo: &Repository) -> Result<UsageRefreshInterval, CoreError> {
    let settings = load_app_settings(repo)?;
    UsageRefreshInterval::parse(&settings.usage_refresh_interval)
}

pub fn set_usage_refresh_interval(
    repo: &Repository,
    interval: UsageRefreshInterval,
) -> Result<UsageRefreshInterval, CoreError> {
    let mut settings = load_app_settings(repo)?;
    settings.usage_refresh_interval = interval.as_str().to_string();
    save_app_settings(repo, &settings)?;
    Ok(interval)
}

pub fn get_hotspot_enabled(repo: &Repository) -> Result<bool, CoreError> {
    Ok(load_app_settings(repo)?.hotspot_enabled)
}

pub fn set_hotspot_enabled(repo: &Repository, enabled: bool) -> Result<bool, CoreError> {
    let mut settings = load_app_settings(repo)?;
    settings.hotspot_enabled = enabled;
    save_app_settings(repo, &settings)?;
    Ok(enabled)
}
