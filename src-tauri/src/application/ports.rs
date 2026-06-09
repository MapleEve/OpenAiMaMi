// ports 文件保留应用层对外部能力的窄接口位置。
// 仓储和平台能力需要先形成可替换契约，再由用例通过这里协作。

use crate::core::error::CoreError;
use crate::core::model::hotspot::HotspotPlatformCapability;

pub(crate) trait RepositoryPort {}

pub(crate) trait PlatformPort {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct RelayPlatformCapability {
    pub code: String,
    pub available: bool,
    pub detail: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct RelayProxyEnvironment {
    pub candidates: Vec<String>,
}

// relay 平台端口只暴露结构化能力和环境代理候选；真实 HTTP、进程和流式转发由 platform owner 承载。
pub(crate) trait RelayPlatformPort {
    fn capabilities(&self) -> Vec<RelayPlatformCapability>;
    fn proxy_environment(&self) -> RelayProxyEnvironment;
}

#[derive(Debug, Clone)]
pub(crate) struct DiagnosticPlatformInfo {
    pub os: String,
    pub os_version: String,
    pub arch: String,
    pub hostname: String,
}

#[derive(Debug, Clone)]
pub(crate) struct DiagnosticCapabilityProbe {
    pub code: String,
    pub available: bool,
    pub status_code: String,
    pub message: String,
}

// 诊断平台端口只暴露结构化平台信息和能力探针结果，不实现注册表、钥匙串、sqlite 或 TOML 修复逻辑。
pub(crate) trait DiagnosticPlatformPort {
    fn platform_info(&self) -> DiagnosticPlatformInfo;
    fn capability_probes(&self) -> Vec<DiagnosticCapabilityProbe>;
}

// 进程能力端口只表达应用层允许触发的外部进程动作。
pub(crate) trait AppProcessPort {
    fn graceful_restart_for_update(&self) -> Result<(), CoreError>;
    fn restart_app(&self) -> Result<(), CoreError>;
    fn force_kill_app(&self) -> Result<(), CoreError>;
}

// shell 能力端口只暴露路径打开，不泄露具体平台命令。
pub(crate) trait AppShellPort {
    fn open_path(&self, path: &str) -> Result<(), CoreError>;
}

#[derive(Debug, Clone)]
pub(crate) struct AppSystemInfo {
    pub os: String,
    pub os_version: String,
    pub arch: String,
    pub hostname: String,
}

// 系统能力端口只返回纯数据和结构化能力状态。
pub(crate) trait AppSystemPort {
    fn system_info(&self) -> AppSystemInfo;
    fn current_executable_path(&self) -> Option<String>;
    fn reset_config(&self) -> Result<(), CoreError>;
}

// 窗口能力端口只封装应用层需要的窗口动作。
pub(crate) trait AppWindowPort {
    fn focus_main_window(&self) -> Result<(), CoreError>;
}

// hotspot 能力端口只公开可替换的平台查询骨架，不声明 Windows/macOS 热点能力已恢复。
pub(crate) trait HotspotPlatformPort {
    fn hotspot_capability(&self) -> HotspotPlatformCapability;

    fn has_notch(&self) -> bool {
        self.hotspot_capability().has_notch
    }

    fn is_hotspot_ready(&self) -> bool {
        self.hotspot_capability().ready
    }
}
