use crate::application::ports::{
    ApiProxyEndpoint, ApiProxyPlatformPort, AppProcessPort, AppSystemPort, RuntimePlatformPort,
};
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
use std::collections::HashSet;

const API_PROXY_TCP_PROBE_TIMEOUT_MS: u64 = 200;

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

pub fn test_api_proxy_config(
    mode: ApiProxyMode,
    url: Option<String>,
    platform: &impl ApiProxyPlatformPort,
) -> ApiProxyTestPayload {
    match mode {
        ApiProxyMode::Direct => direct_api_proxy_probe(),
        ApiProxyMode::Manual => test_manual_api_proxy_config(url, platform),
    }
}

pub fn detect_api_proxy_config(platform: &impl ApiProxyPlatformPort) -> ApiProxyDetectPayload {
    let mut raw_seen = HashSet::new();
    let mut endpoint_seen = HashSet::new();
    let mut last_probe = None;

    for candidate in platform.proxy_environment_candidates().candidates {
        let Some(raw_url) = normalize_proxy_url(Some(candidate)) else {
            continue;
        };
        if !raw_seen.insert(raw_url.to_ascii_lowercase()) {
            continue;
        }

        let Ok(endpoint) = platform.normalize_proxy_url(&raw_url) else {
            continue;
        };
        if is_loopback_proxy_host(&endpoint.host) {
            continue;
        }
        if !endpoint_seen.insert(endpoint.normalized_url.to_ascii_lowercase()) {
            continue;
        }

        let probe = probe_api_proxy_endpoint(platform, &endpoint);
        if probe.reachable {
            return ApiProxyDetectPayload {
                found: true,
                mode: Some(ApiProxyMode::Manual),
                url: Some(endpoint.normalized_url),
                probe,
            };
        }
        last_probe = Some(probe);
    }

    ApiProxyDetectPayload {
        found: false,
        mode: None,
        url: None,
        probe: last_probe.unwrap_or_else(api_proxy_not_found_probe),
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

fn test_manual_api_proxy_config(
    url: Option<String>,
    platform: &impl ApiProxyPlatformPort,
) -> ApiProxyTestPayload {
    let Some(raw_url) = normalize_proxy_url(url) else {
        return invalid_api_proxy_probe("手动代理模式缺少代理地址");
    };

    match platform.normalize_proxy_url(&raw_url) {
        Ok(endpoint) => probe_api_proxy_endpoint(platform, &endpoint),
        Err(error) => invalid_api_proxy_probe(&error.message),
    }
}

fn probe_api_proxy_endpoint(
    platform: &impl ApiProxyPlatformPort,
    endpoint: &ApiProxyEndpoint,
) -> ApiProxyTestPayload {
    let probe = platform.probe_tcp(endpoint, API_PROXY_TCP_PROBE_TIMEOUT_MS);
    if probe.reachable {
        ApiProxyTestPayload {
            code: "ok".to_string(),
            reachable: true,
            status_code: None,
            message: format!(
                "代理地址 {} 已规范化，TCP 端口在 {}ms 内可连接；未发起外部 HTTP 请求。",
                endpoint.normalized_url, API_PROXY_TCP_PROBE_TIMEOUT_MS
            ),
        }
    } else {
        ApiProxyTestPayload {
            code: "network_error".to_string(),
            reachable: false,
            status_code: None,
            message: format!("代理 TCP 探针不可达：{}", probe.detail),
        }
    }
}

fn direct_api_proxy_probe() -> ApiProxyTestPayload {
    ApiProxyTestPayload {
        code: "ok".to_string(),
        reachable: true,
        status_code: None,
        message: "直连模式不需要代理，公开后端未发起外部 HTTP 请求。".to_string(),
    }
}

fn invalid_api_proxy_probe(message: &str) -> ApiProxyTestPayload {
    ApiProxyTestPayload {
        code: "invalid_config".to_string(),
        reachable: false,
        status_code: None,
        message: message.to_string(),
    }
}

fn api_proxy_not_found_probe() -> ApiProxyTestPayload {
    ApiProxyTestPayload {
        code: "not_found".to_string(),
        reachable: false,
        status_code: None,
        message: "没有发现可用的公开环境代理候选。".to_string(),
    }
}

fn is_loopback_proxy_host(host: &str) -> bool {
    let host = host
        .trim()
        .trim_start_matches('[')
        .trim_end_matches(']')
        .to_ascii_lowercase();
    matches!(host.as_str(), "localhost" | "127.0.0.1" | "::1")
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::application::ports::{
        ApiProxyEnvironment, ApiProxyTcpProbe, ApiProxyUrlError, ApiProxyUrlErrorKind,
    };
    use std::cell::RefCell;

    struct FakeProxyPlatform {
        env_candidates: Vec<String>,
        normalize_results: Vec<(String, Result<ApiProxyEndpoint, ApiProxyUrlError>)>,
        reachable_urls: Vec<String>,
        probe_calls: RefCell<Vec<(String, u64)>>,
    }

    impl Default for FakeProxyPlatform {
        fn default() -> Self {
            Self {
                env_candidates: Vec::new(),
                normalize_results: Vec::new(),
                reachable_urls: Vec::new(),
                probe_calls: RefCell::new(Vec::new()),
            }
        }
    }

    impl ApiProxyPlatformPort for FakeProxyPlatform {
        fn normalize_proxy_url(&self, raw_url: &str) -> Result<ApiProxyEndpoint, ApiProxyUrlError> {
            self.normalize_results
                .iter()
                .find(|(raw, _)| raw == raw_url)
                .map(|(_, result)| result.clone())
                .unwrap_or_else(|| panic!("未预置代理规范化结果：{raw_url}"))
        }

        fn proxy_environment_candidates(&self) -> ApiProxyEnvironment {
            ApiProxyEnvironment {
                candidates: self.env_candidates.clone(),
            }
        }

        fn probe_tcp(&self, endpoint: &ApiProxyEndpoint, timeout_ms: u64) -> ApiProxyTcpProbe {
            self.probe_calls
                .borrow_mut()
                .push((endpoint.normalized_url.clone(), timeout_ms));
            ApiProxyTcpProbe {
                reachable: self
                    .reachable_urls
                    .iter()
                    .any(|url| url == &endpoint.normalized_url),
                detail: format!("fake {}", endpoint.normalized_url),
            }
        }
    }

    #[test]
    fn 直连模式返回公开快速结果且不调用平台端口() {
        let platform = FakeProxyPlatform::default();

        let payload = test_api_proxy_config(ApiProxyMode::Direct, None, &platform);

        assert!(payload.reachable);
        assert_eq!(payload.code, "ok");
        assert!(platform.probe_calls.borrow().is_empty());
    }

    #[test]
    fn 手动模式会通过端口规范化并使用200毫秒探针() {
        let platform = FakeProxyPlatform {
            normalize_results: vec![(
                "socks5://proxy.example:1080".to_string(),
                Ok(endpoint(
                    "socks5://proxy.example:1080",
                    "socks5",
                    "proxy.example",
                    1080,
                )),
            )],
            reachable_urls: vec!["socks5://proxy.example:1080".to_string()],
            ..FakeProxyPlatform::default()
        };

        let payload = test_api_proxy_config(
            ApiProxyMode::Manual,
            Some(" socks5://proxy.example:1080 ".to_string()),
            &platform,
        );

        assert!(payload.reachable);
        assert_eq!(payload.code, "ok");
        assert_eq!(
            *platform.probe_calls.borrow(),
            vec![("socks5://proxy.example:1080".to_string(), 200)]
        );
    }

    #[test]
    fn 手动模式拒绝不支持协议且不执行探针() {
        let platform = FakeProxyPlatform {
            normalize_results: vec![(
                "ftp://proxy.example:21".to_string(),
                Err(proxy_error(
                    ApiProxyUrlErrorKind::UnsupportedScheme,
                    "代理协议不受支持",
                )),
            )],
            ..FakeProxyPlatform::default()
        };

        let payload = test_api_proxy_config(
            ApiProxyMode::Manual,
            Some("ftp://proxy.example:21".to_string()),
            &platform,
        );

        assert!(!payload.reachable);
        assert_eq!(payload.code, "invalid_config");
        assert!(platform.probe_calls.borrow().is_empty());
    }

    #[test]
    fn 检测会跳过本地候选并命中第一个可达环境代理() {
        let platform = FakeProxyPlatform {
            env_candidates: vec![
                "http://127.0.0.1:7890".to_string(),
                "http://down.example:8080".to_string(),
                "HTTP://UP.example:8080".to_string(),
                "http://down.example:8080".to_string(),
            ],
            normalize_results: vec![
                (
                    "http://127.0.0.1:7890".to_string(),
                    Ok(endpoint("http://127.0.0.1:7890", "http", "127.0.0.1", 7890)),
                ),
                (
                    "http://down.example:8080".to_string(),
                    Ok(endpoint(
                        "http://down.example:8080",
                        "http",
                        "down.example",
                        8080,
                    )),
                ),
                (
                    "HTTP://UP.example:8080".to_string(),
                    Ok(endpoint(
                        "http://up.example:8080",
                        "http",
                        "up.example",
                        8080,
                    )),
                ),
            ],
            reachable_urls: vec!["http://up.example:8080".to_string()],
            ..FakeProxyPlatform::default()
        };

        let payload = detect_api_proxy_config(&platform);

        assert!(payload.found);
        assert_eq!(payload.mode, Some(ApiProxyMode::Manual));
        assert_eq!(payload.url.as_deref(), Some("http://up.example:8080"));
        assert_eq!(
            *platform.probe_calls.borrow(),
            vec![
                ("http://down.example:8080".to_string(), 200),
                ("http://up.example:8080".to_string(), 200),
            ]
        );
    }

    #[test]
    fn 检测没有可探测候选返回未发现语义() {
        let platform = FakeProxyPlatform {
            env_candidates: vec!["http://localhost:7890".to_string()],
            normalize_results: vec![(
                "http://localhost:7890".to_string(),
                Ok(endpoint("http://localhost:7890", "http", "localhost", 7890)),
            )],
            ..FakeProxyPlatform::default()
        };

        let payload = detect_api_proxy_config(&platform);

        assert!(!payload.found);
        assert_eq!(payload.probe.code, "not_found");
        assert!(platform.probe_calls.borrow().is_empty());
    }

    #[test]
    fn 检测候选全部不可达返回最后一次不可达探针() {
        let platform = FakeProxyPlatform {
            env_candidates: vec!["http://down.example:8080".to_string()],
            normalize_results: vec![(
                "http://down.example:8080".to_string(),
                Ok(endpoint(
                    "http://down.example:8080",
                    "http",
                    "down.example",
                    8080,
                )),
            )],
            ..FakeProxyPlatform::default()
        };

        let payload = detect_api_proxy_config(&platform);

        assert!(!payload.found);
        assert_eq!(payload.probe.code, "network_error");
        assert_eq!(
            *platform.probe_calls.borrow(),
            vec![("http://down.example:8080".to_string(), 200)]
        );
    }

    fn endpoint(url: &str, scheme: &str, host: &str, port: u16) -> ApiProxyEndpoint {
        ApiProxyEndpoint {
            normalized_url: url.to_string(),
            scheme: scheme.to_string(),
            host: host.to_string(),
            port,
        }
    }

    fn proxy_error(kind: ApiProxyUrlErrorKind, message: &str) -> ApiProxyUrlError {
        ApiProxyUrlError {
            kind,
            message: message.to_string(),
        }
    }
}
