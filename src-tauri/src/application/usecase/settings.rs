use crate::application::ports::{AppProcessPort, AppSystemPort, RuntimePlatformPort};
use crate::application::usecase::daemon as daemon_usecase;
use crate::application::usecase::platform_actions;
use crate::contracts::{
    ApiConfigPayload, ApiModePayload, ApiProxyConfigPayload, ApiProxyDetectPayload, ApiProxyMode,
    ApiProxyTestPayload, SystemActionPayload, UpdateInstallabilityPayload,
};
use crate::core::error::CoreError;
use crate::core::model::settings::UsageRefreshInterval;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;

// settings usecase owning 设置页用户动作事务，不承载其它模块 override。
pub fn set_api_proxy_config(
    repo: &Repository,
    mode: ApiProxyMode,
    url: Option<String>,
) -> Result<ApiModePayload, CoreError> {
    let mut settings = settings_repository::load_app_settings(repo)?;
    settings.api_proxy = ApiProxyConfigPayload {
        mode,
        url: normalize_proxy_url(url),
    };
    settings_repository::save_app_settings(repo, &settings)?;
    Ok(ApiModePayload {
        api: ApiConfigPayload {
            proxy: settings.api_proxy,
        },
    })
}

pub fn test_api_proxy_config(mode: ApiProxyMode, url: Option<String>) -> ApiProxyTestPayload {
    let reachable = matches!(mode, ApiProxyMode::Direct)
        || normalize_proxy_url(url.clone()).is_some_and(|value| value.contains("://"));
    ApiProxyTestPayload {
        code: if reachable {
            "proxy.accepted"
        } else {
            "proxy.invalid"
        }
        .to_string(),
        reachable,
        status_code: None,
        message: if reachable {
            "公开后端仅校验代理格式，不主动发起外部探测。"
        } else {
            "代理地址格式不可用。"
        }
        .to_string(),
    }
}

pub fn detect_api_proxy_config() -> ApiProxyDetectPayload {
    let probe = test_api_proxy_config(ApiProxyMode::Direct, None);
    ApiProxyDetectPayload {
        found: false,
        mode: None,
        url: None,
        probe,
    }
}

pub fn get_usage_refresh_interval(repo: &Repository) -> Result<String, CoreError> {
    Ok(settings_repository::get_usage_refresh_interval(repo)?
        .as_str()
        .to_string())
}

pub fn set_usage_refresh_interval(
    repo: &Repository,
    interval: String,
    platform: &impl RuntimePlatformPort,
) -> Result<String, CoreError> {
    let normalized = UsageRefreshInterval::parse(&interval)?;
    let saved = settings_repository::set_usage_refresh_interval(repo, normalized)?;
    let _schedule_update = daemon_usecase::update_usage_refresh_schedule(repo, platform).ok();
    Ok(saved.as_str().to_string())
}

pub fn check_update_installability(system: &impl AppSystemPort) -> UpdateInstallabilityPayload {
    platform_actions::check_update_installability(system)
}

pub fn graceful_restart_for_update(process: &impl AppProcessPort) -> SystemActionPayload {
    platform_actions::graceful_restart_for_update(process)
}

fn normalize_proxy_url(url: Option<String>) -> Option<String> {
    url.map(|value| value.trim().to_string())
        .filter(|value| !value.is_empty())
}
