// ports 文件保留应用层对外部能力的窄接口位置。
// 仓储和平台能力需要先形成可替换契约，再由用例通过这里协作。

use crate::core::error::CoreError;

pub(crate) trait RepositoryPort {}

pub(crate) trait PlatformPort {}

// 进程能力端口只表达应用层允许触发的外部进程动作。
pub(crate) trait AppProcessPort {
    fn graceful_restart_for_update(&self) -> Result<(), CoreError>;
    fn restart_app(&self) -> Result<(), CoreError>;
    fn force_kill_app(&self) -> Result<(), CoreError>;
}

// shell 能力端口只暴露路径打开，不泄漏具体平台命令。
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

// 窗口能力端口。
pub(crate) trait AppWindowPort {
    fn focus_main_window(&self) -> Result<(), CoreError>;
}
