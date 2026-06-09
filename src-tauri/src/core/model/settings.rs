use crate::core::error::CoreError;

// settings 领域模型 owning 可持久化配置值的解析和规范化。
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum UsageRefreshInterval {
    ThirtySeconds,
    OneMinute,
    ThreeMinutes,
    FiveMinutes,
}

impl UsageRefreshInterval {
    pub fn parse(value: impl AsRef<str>) -> Result<Self, CoreError> {
        match value.as_ref() {
            "30s" => Ok(Self::ThirtySeconds),
            "1m" => Ok(Self::OneMinute),
            "3m" => Ok(Self::ThreeMinutes),
            "5m" => Ok(Self::FiveMinutes),
            _ => Err(CoreError::InvalidInput("不支持的刷新间隔".to_string())),
        }
    }

    pub const fn as_str(self) -> &'static str {
        match self {
            Self::ThirtySeconds => "30s",
            Self::OneMinute => "1m",
            Self::ThreeMinutes => "3m",
            Self::FiveMinutes => "5m",
        }
    }
}

impl Default for UsageRefreshInterval {
    fn default() -> Self {
        Self::OneMinute
    }
}

impl std::fmt::Display for UsageRefreshInterval {
    fn fmt(&self, formatter: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        formatter.write_str(self.as_str())
    }
}

impl std::str::FromStr for UsageRefreshInterval {
    type Err = CoreError;

    fn from_str(value: &str) -> Result<Self, Self::Err> {
        Self::parse(value)
    }
}
