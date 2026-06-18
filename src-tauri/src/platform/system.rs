use crate::application::ports::{
    AppSystemInfo, AppSystemPort, AppUpdateInstallability, DiagnosticCapabilityProbe,
    DiagnosticPlatformInfo, DiagnosticPlatformPort,
};
use crate::core::error::CoreError;
use std::path::{Path, PathBuf};

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

    fn update_installability(&self) -> AppUpdateInstallability {
        update_installability()
    }

    fn reset_config(&self) -> Result<(), CoreError> {
        reset_config()
    }
}

impl DiagnosticPlatformPort for SystemPlatformAdapter {
    fn platform_info(&self) -> DiagnosticPlatformInfo {
        let info = system_info();
        DiagnosticPlatformInfo {
            os: info.os,
            os_version: info.os_version,
            arch: info.arch,
            hostname: info.hostname,
        }
    }

    fn capability_probes(&self) -> Vec<DiagnosticCapabilityProbe> {
        Vec::new()
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

pub fn update_installability() -> AppUpdateInstallability {
    let executable_path = std::env::current_exe().ok();
    let bundle_path = executable_path
        .as_deref()
        .and_then(app_bundle_path_from_executable);
    let install_root = bundle_path.as_deref().or(executable_path.as_deref());

    AppUpdateInstallability {
        executable_path: executable_path
            .as_ref()
            .map(|path| path.display().to_string()),
        bundle_path: bundle_path.as_ref().map(|path| path.display().to_string()),
        translocated: executable_path
            .as_deref()
            .is_some_and(is_app_translocation_path),
        quarantined: install_root.is_some_and(has_quarantine_attribute),
        read_only_location: install_root.is_some_and(is_read_only_location),
    }
}

pub fn reset_config() -> Result<(), CoreError> {
    Err(CoreError::Unsupported(
        "当前公开后端未恢复重置外部配置能力".to_string(),
    ))
}

fn app_bundle_path_from_executable(path: &Path) -> Option<PathBuf> {
    path.ancestors()
        .find(|ancestor| {
            ancestor
                .extension()
                .and_then(|extension| extension.to_str())
                .is_some_and(|extension| extension.eq_ignore_ascii_case("app"))
        })
        .map(Path::to_path_buf)
}

fn is_app_translocation_path(path: &Path) -> bool {
    let value = path.to_string_lossy().to_ascii_lowercase();
    value.contains("/apptranslocation/") || value.contains("\\apptranslocation\\")
}

fn is_read_only_location(path: &Path) -> bool {
    let value = path
        .to_string_lossy()
        .replace('\\', "/")
        .to_ascii_lowercase();
    value.starts_with("/system/")
        || value.starts_with("/library/")
        || value.starts_with("/applications/")
        || value.contains("/program files/")
        || value.contains("/program files (x86)/")
        || value.contains("/windows/")
}

#[cfg(target_os = "macos")]
fn has_quarantine_attribute(path: &Path) -> bool {
    let Some(path_arg) = path.to_str() else {
        return false;
    };
    crate::platform::process::background_command_output(
        "xattr",
        &["-p", "com.apple.quarantine", path_arg],
    )
    .map(|output| output.status.success())
    .unwrap_or(false)
}

#[cfg(not(target_os = "macos"))]
fn has_quarantine_attribute(_path: &Path) -> bool {
    false
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

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn app_bundle_path_is_extracted_from_macos_executable_path() {
        let path = Path::new("/Applications/OpenAiMami.app/Contents/MacOS/OpenAiMami");
        let bundle = app_bundle_path_from_executable(path).expect("bundle path");
        assert_eq!(bundle, PathBuf::from("/Applications/OpenAiMami.app"));
    }

    #[test]
    fn non_bundle_executable_has_no_bundle_path() {
        let path = Path::new("/usr/local/bin/open-aimami");
        assert!(app_bundle_path_from_executable(path).is_none());
    }

    #[test]
    fn app_translocation_path_is_detected_case_insensitively() {
        let path = Path::new(
            "/private/var/folders/x/AppTranslocation/123/d/OpenAiMami.app/Contents/MacOS/OpenAiMami",
        );
        assert!(is_app_translocation_path(path));
    }

    #[test]
    fn read_only_location_uses_protected_path_heuristics_without_fs_access() {
        assert!(is_read_only_location(Path::new(
            "/Applications/OpenAiMami.app"
        )));
        assert!(is_read_only_location(Path::new(
            "C:/Program Files/OpenAiMami/OpenAiMami.exe"
        )));
        assert!(!is_read_only_location(Path::new(
            "/Users/example/Applications/OpenAiMami.app"
        )));
    }
}
