use crate::application::ports::{AppSystemInfo, AppSystemPort};
use crate::core::error::CoreError;

#[derive(Debug, Clone)]
pub struct SystemInfo {
    pub os: String,
    pub os_version: String,
    pub arch: String,
    pub hostname: String,
}

// 系统平台适配器只封装系统信息和能力探测数据。
pub(crate) struct SystemPlatformAdapter;

impl AppSystemPort for SystemPlatformAdapter {
    fn system_info(&self) -> AppSystemInfo {
        let info = system_info();
        AppSystemInfo {
            os: info.os,
            os_version: info.os_version,
            arch: info.arch,
            hostname: info.hostname,
        }
    }

    fn current_executable_path(&self) -> Option<String> {
        current_executable_path()
    }

    fn reset_config(&self) -> Result<(), CoreError> {
        reset_config()
    }
}

pub fn system_info() -> SystemInfo {
    SystemInfo {
        os: std::env::consts::OS.to_string(),
        os_version: os_version(),
        arch: std::env::consts::ARCH.to_string(),
        hostname: hostname::get()
            .map(|value| value.to_string_lossy().to_string())
            .unwrap_or_else(|_| "unknown".to_string()),
    }
}

pub fn current_executable_path() -> Option<String> {
    std::env::current_exe()
        .ok()
        .map(|path| path.display().to_string())
}

pub fn reset_config() -> Result<(), CoreError> {
    Err(CoreError::Unsupported(
        "当前公开后端未恢复重置外部配置能力".to_string(),
    ))
}

fn os_version() -> String {
    #[cfg(target_os = "windows")]
    {
        windows_version().unwrap_or_else(|| "unknown".to_string())
    }
    #[cfg(target_os = "macos")]
    {
        crate::platform::process::background_command_output("sw_vers", &["-productVersion"])
            .ok()
            .and_then(|output| String::from_utf8(output.stdout).ok())
            .map(|value| value.trim().to_string())
            .unwrap_or_else(|| "unknown".to_string())
    }
    #[cfg(not(any(target_os = "windows", target_os = "macos")))]
    {
        "unknown".to_string()
    }
}

#[cfg(target_os = "windows")]
fn windows_version() -> Option<String> {
    let output = crate::platform::process::background_command_output("cmd", &["/C", "ver"]).ok()?;
    String::from_utf8(output.stdout)
        .ok()
        .map(|value| value.trim().to_string())
        .filter(|value| !value.is_empty())
}
