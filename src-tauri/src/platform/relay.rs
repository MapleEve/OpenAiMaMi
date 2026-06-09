use crate::application::ports::{
    RelayPlatformCapability, RelayPlatformPort, RelayProxyEnvironment,
};
use crate::core::{
    error::CoreError,
    model::relay::{RelayFetchModelsRequest, RelayHealthCheckRequest},
};

pub(crate) struct RelayPlatformAdapter;

// relay 平台适配器只封装 OS、环境代理和网络能力占位，不解释业务状态。
impl RelayPlatformPort for RelayPlatformAdapter {
    fn capabilities(&self) -> Vec<RelayPlatformCapability> {
        vec![
            capability(
                "relay.platform.http_client",
                false,
                "HTTP 客户端端口已预留；当前 usecase 不发起真实联网请求。",
            ),
            capability(
                "relay.platform.http_mock_terminal",
                true,
                "Relay model fetch mock HTTP terminal 已接入；只返回可测试响应，不发起真实外部联网。",
            ),
            capability(
                "relay.platform.sse_bridge",
                false,
                "SSE 桥接端口已预留；当前不启动真实流式转发。",
            ),
            capability(
                "relay.platform.process",
                false,
                "进程启动端口已预留；当前不启动代理后台进程。",
            ),
            capability(
                "relay.platform.proxy_env",
                !self.proxy_environment().candidates.is_empty(),
                "环境代理候选只从进程环境读取，不做 TCP 探测。",
            ),
        ]
    }

    fn proxy_environment(&self) -> RelayProxyEnvironment {
        RelayProxyEnvironment {
            candidates: proxy_env_keys()
                .iter()
                .filter_map(|key| std::env::var(key).ok())
                .map(|value| value.trim().to_string())
                .filter(|value| !value.is_empty())
                .collect(),
        }
    }

    fn fetch_models_mock_terminal(
        &self,
        request: &RelayFetchModelsRequest,
    ) -> Result<String, CoreError> {
        if request.url.trim().is_empty() {
            return Err(CoreError::InvalidInput(
                "relay model fetch mock terminal 缺少 URL".to_string(),
            ));
        }
        Ok(r#"{"data":[{"id":"model-a"},{"id":"model-b"}]}"#.to_string())
    }

    fn test_relay_mock_terminal(
        &self,
        request: &RelayHealthCheckRequest,
    ) -> Result<String, CoreError> {
        if request.url.trim().is_empty() {
            return Err(CoreError::InvalidInput(
                "relay test mock terminal 缺少 URL".to_string(),
            ));
        }
        if request.body.trim().is_empty() {
            return Err(CoreError::InvalidInput(
                "relay test mock terminal 缺少 body".to_string(),
            ));
        }
        if !request
            .headers
            .iter()
            .any(|(key, _)| key.eq_ignore_ascii_case("content-type"))
        {
            return Err(CoreError::InvalidInput(
                "relay test mock terminal 缺少 Content-Type".to_string(),
            ));
        }
        Ok(r#"{"ok":true,"latencyMs":24,"statusCode":200,"message":"Relay mock terminal probe succeeded","errorMessage":null,"models":["model-a","model-b"]}"#.to_string())
    }
}

fn capability(code: &str, available: bool, detail: &str) -> RelayPlatformCapability {
    RelayPlatformCapability {
        code: code.to_string(),
        available,
        detail: detail.to_string(),
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
