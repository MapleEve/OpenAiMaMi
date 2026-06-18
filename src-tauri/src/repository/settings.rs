use crate::contracts::{AppSettingsFile, MysteryRouteGrant};
use crate::core::error::CoreError;
use crate::core::model::settings::UsageRefreshInterval;
use crate::repository::directories;
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
    directories::ensure_app_directories(repo)?;
    let path = &repo.paths().settings_path;
    let tmp_path = path.with_extension("json.tmp");
    repo.fs()
        .write_string(&tmp_path, &serde_json::to_string_pretty(settings)?)?;
    repo.fs().rename(&tmp_path, path)
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

pub fn load_mystery_unlock_grants(repo: &Repository) -> Result<Vec<MysteryRouteGrant>, CoreError> {
    Ok(load_app_settings(repo)?.mystery_unlock_grants)
}

pub fn save_mystery_unlock_grants(
    repo: &Repository,
    grants: Vec<MysteryRouteGrant>,
) -> Result<(), CoreError> {
    let mut settings = load_app_settings(repo)?;
    settings.mystery_unlock_grants = grants;
    save_app_settings(repo, &settings)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn usage_refresh_interval_save_uses_atomic_temp_replace() {
        let repo = Repository::with_temp_file_system("settings-usage-atomic");

        let saved =
            set_usage_refresh_interval(&repo, UsageRefreshInterval::ThreeMinutes).expect("save");

        assert_eq!(saved, UsageRefreshInterval::ThreeMinutes);
        assert_eq!(
            get_usage_refresh_interval(&repo).expect("read interval"),
            UsageRefreshInterval::ThreeMinutes
        );
        assert!(repo.fs().exists(&repo.paths().settings_path));
        assert!(!repo
            .fs()
            .exists(&repo.paths().settings_path.with_extension("json.tmp")));
    }

    #[test]
    fn hotspot_save_preserves_usage_refresh_interval() {
        let repo = Repository::with_temp_file_system("settings-hotspot-preserve");
        set_usage_refresh_interval(&repo, UsageRefreshInterval::FiveMinutes)
            .expect("save interval");

        assert!(set_hotspot_enabled(&repo, true).expect("save hotspot"));

        let settings = load_app_settings(&repo).expect("read settings");
        assert!(settings.hotspot_enabled);
        assert_eq!(settings.usage_refresh_interval, "5m");
    }
}
