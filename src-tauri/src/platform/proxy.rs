use crate::application::ports::{
    ApiProxyEndpoint, ApiProxyEnvironment, ApiProxyPlatformPort, ApiProxyTcpProbe,
    ApiProxyUrlError, ApiProxyUrlErrorKind,
};
use std::collections::HashSet;
use std::net::{TcpStream, ToSocketAddrs};
use std::time::Duration;

pub(crate) struct ProxyPlatformAdapter;

// API 代理平台适配器只做公开网络证据采集：环境变量、URL 规范化和 TCP 探针，不读取账号私密值。
impl ApiProxyPlatformPort for ProxyPlatformAdapter {
    fn normalize_proxy_url(&self, raw_url: &str) -> Result<ApiProxyEndpoint, ApiProxyUrlError> {
        parse_proxy_endpoint(raw_url)
    }

    fn proxy_environment_candidates(&self) -> ApiProxyEnvironment {
        let mut seen = HashSet::new();
        let candidates = proxy_env_keys()
            .iter()
            .filter_map(|key| std::env::var(key).ok())
            .map(|value| value.trim().to_string())
            .filter(|value| !value.is_empty())
            .filter(|value| seen.insert(value.to_ascii_lowercase()))
            .collect();
        ApiProxyEnvironment { candidates }
    }

    fn probe_tcp(&self, endpoint: &ApiProxyEndpoint, timeout_ms: u64) -> ApiProxyTcpProbe {
        let timeout = Duration::from_millis(timeout_ms);
        let address = (endpoint.host.as_str(), endpoint.port)
            .to_socket_addrs()
            .ok()
            .and_then(|mut addresses| addresses.next());

        let Some(address) = address else {
            return ApiProxyTcpProbe {
                reachable: false,
                detail: format!(
                    "代理地址 {}:{} 无法解析为 TCP 目标",
                    endpoint.host, endpoint.port
                ),
            };
        };

        match TcpStream::connect_timeout(&address, timeout) {
            Ok(_) => ApiProxyTcpProbe {
                reachable: true,
                detail: format!(
                    "代理地址 {}:{} 在 {}ms 内 TCP 可连接",
                    endpoint.host, endpoint.port, timeout_ms
                ),
            },
            Err(error) => ApiProxyTcpProbe {
                reachable: false,
                detail: format!(
                    "代理地址 {}:{} 在 {}ms 内 TCP 不可达：{}",
                    endpoint.host, endpoint.port, timeout_ms, error
                ),
            },
        }
    }
}

fn parse_proxy_endpoint(raw_url: &str) -> Result<ApiProxyEndpoint, ApiProxyUrlError> {
    let raw_url = raw_url.trim();
    if raw_url.is_empty() {
        return Err(proxy_url_error(
            ApiProxyUrlErrorKind::Empty,
            "代理地址不能为空",
        ));
    }

    let (scheme, remainder) = raw_url.split_once("://").ok_or_else(|| {
        proxy_url_error(
            ApiProxyUrlErrorKind::MissingScheme,
            "代理地址缺少协议，必须使用 http、https、socks5 或 socks5h",
        )
    })?;
    let scheme = scheme.trim().to_ascii_lowercase();
    if scheme.is_empty() {
        return Err(proxy_url_error(
            ApiProxyUrlErrorKind::MissingScheme,
            "代理地址缺少协议，必须使用 http、https、socks5 或 socks5h",
        ));
    }
    if !matches!(scheme.as_str(), "http" | "https" | "socks5" | "socks5h") {
        return Err(proxy_url_error(
            ApiProxyUrlErrorKind::UnsupportedScheme,
            "代理协议不受支持，仅允许 http、https、socks5 或 socks5h",
        ));
    }

    let authority_end = remainder
        .find(|value| matches!(value, '/' | '?' | '#'))
        .unwrap_or(remainder.len());
    let authority = remainder[..authority_end].trim();
    let (host, port) = parse_authority(authority, &scheme)?;
    let normalized_host = if host.contains(':') {
        format!("[{}]", host)
    } else {
        host.to_ascii_lowercase()
    };

    Ok(ApiProxyEndpoint {
        normalized_url: format!("{}://{}:{}", scheme, normalized_host, port),
        scheme,
        host,
        port,
    })
}

fn parse_authority(authority: &str, scheme: &str) -> Result<(String, u16), ApiProxyUrlError> {
    let authority = authority
        .rsplit_once('@')
        .map(|(_, host_port)| host_port)
        .unwrap_or(authority)
        .trim();
    if authority.is_empty() {
        return Err(proxy_url_error(
            ApiProxyUrlErrorKind::MissingHost,
            "代理地址缺少主机名",
        ));
    }

    if let Some(rest) = authority.strip_prefix('[') {
        let Some(end) = rest.find(']') else {
            return Err(proxy_url_error(
                ApiProxyUrlErrorKind::InvalidFormat,
                "IPv6 代理地址必须使用 [host]:port 格式",
            ));
        };
        let host = rest[..end].trim();
        if host.is_empty() {
            return Err(proxy_url_error(
                ApiProxyUrlErrorKind::MissingHost,
                "代理地址缺少主机名",
            ));
        }
        let after_host = rest[end + 1..].trim();
        let port = if after_host.is_empty() {
            default_proxy_port(scheme)
        } else if let Some(port) = after_host.strip_prefix(':') {
            parse_port(port)?
        } else {
            return Err(proxy_url_error(
                ApiProxyUrlErrorKind::InvalidFormat,
                "IPv6 代理地址必须使用 [host]:port 格式",
            ));
        };
        return Ok((host.to_ascii_lowercase(), port));
    }

    if authority.contains('[') || authority.contains(']') || authority.matches(':').count() > 1 {
        return Err(proxy_url_error(
            ApiProxyUrlErrorKind::InvalidFormat,
            "IPv6 代理地址必须使用 [host]:port 格式",
        ));
    }

    let (host, port) = match authority.rsplit_once(':') {
        Some((host, port)) => (host.trim(), parse_port(port)?),
        None => (authority.trim(), default_proxy_port(scheme)),
    };
    if host.is_empty() {
        return Err(proxy_url_error(
            ApiProxyUrlErrorKind::MissingHost,
            "代理地址缺少主机名",
        ));
    }
    Ok((host.to_ascii_lowercase(), port))
}

fn parse_port(value: &str) -> Result<u16, ApiProxyUrlError> {
    let port = value.trim().parse::<u16>().map_err(|_| {
        proxy_url_error(
            ApiProxyUrlErrorKind::InvalidPort,
            "代理端口必须是 1 到 65535 的数字",
        )
    })?;
    if port == 0 {
        return Err(proxy_url_error(
            ApiProxyUrlErrorKind::InvalidPort,
            "代理端口必须是 1 到 65535 的数字",
        ));
    }
    Ok(port)
}

fn default_proxy_port(scheme: &str) -> u16 {
    match scheme {
        "http" => 80,
        "https" => 443,
        "socks5" | "socks5h" => 1080,
        _ => 80,
    }
}

fn proxy_url_error(kind: ApiProxyUrlErrorKind, message: &str) -> ApiProxyUrlError {
    ApiProxyUrlError {
        kind,
        message: message.to_string(),
    }
}

fn proxy_env_keys() -> [&'static str; 6] {
    [
        "HTTPS_PROXY",
        "HTTP_PROXY",
        "ALL_PROXY",
        "https_proxy",
        "http_proxy",
        "all_proxy",
    ]
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn 规范化代理地址会补默认端口并小写协议主机() {
        let endpoint = parse_proxy_endpoint(" HTTPS://Proxy.Example ").expect("规范化代理地址");

        assert_eq!(endpoint.scheme, "https");
        assert_eq!(endpoint.host, "proxy.example");
        assert_eq!(endpoint.port, 443);
        assert_eq!(endpoint.normalized_url, "https://proxy.example:443");
    }

    #[test]
    fn 规范化代理地址支持_ipv6_和_socks5h() {
        let endpoint =
            parse_proxy_endpoint("socks5h://[::1]:7890/path").expect("规范化 IPv6 代理地址");

        assert_eq!(endpoint.scheme, "socks5h");
        assert_eq!(endpoint.host, "::1");
        assert_eq!(endpoint.port, 7890);
        assert_eq!(endpoint.normalized_url, "socks5h://[::1]:7890");
    }

    #[test]
    fn 规范化代理地址拒绝不支持协议和坏端口() {
        let scheme_error = parse_proxy_endpoint("ftp://proxy.example:21").expect_err("协议错误");
        assert_eq!(scheme_error.kind, ApiProxyUrlErrorKind::UnsupportedScheme);

        let port_error = parse_proxy_endpoint("http://proxy.example:0").expect_err("端口错误");
        assert_eq!(port_error.kind, ApiProxyUrlErrorKind::InvalidPort);
    }
}
