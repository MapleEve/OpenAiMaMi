use std::collections::HashMap;

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) enum McpServerTransport {
    Stdio,
    Http,
    Sse,
    Unknown,
}

impl McpServerTransport {
    pub(crate) fn from_input(value: &str) -> Self {
        match value {
            "stdio" => Self::Stdio,
            "http" => Self::Http,
            "sse" => Self::Sse,
            _ => Self::Unknown,
        }
    }

    pub(crate) fn from_config_value(value: Option<&str>) -> Self {
        value.map(Self::from_input).unwrap_or(Self::Stdio)
    }

    pub(crate) fn as_config_value(&self) -> &'static str {
        match self {
            Self::Stdio => "stdio",
            Self::Http => "http",
            Self::Sse => "sse",
            Self::Unknown => "stdio",
        }
    }
}

// MCP 配置模型只表达 config.toml 中 mcp_servers 表块的公开字段，不声明运行时能力。
#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct McpServerConfig {
    pub(crate) name: String,
    pub(crate) transport: McpServerTransport,
    pub(crate) enabled: bool,
    pub(crate) command: Option<String>,
    pub(crate) args: Vec<String>,
    pub(crate) url: Option<String>,
    pub(crate) headers: HashMap<String, String>,
    pub(crate) environment: HashMap<String, String>,
}
