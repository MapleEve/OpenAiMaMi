use crate::application::ports::AppShellPort;
use crate::core::error::CoreError;

// shell 平台适配器只封装路径打开能力。
pub(crate) struct ShellPlatformAdapter;

impl AppShellPort for ShellPlatformAdapter {
    fn open_path(&self, path: &str) -> Result<(), CoreError> {
        open_path(path)
    }
}

pub fn open_path(path: &str) -> Result<(), CoreError> {
    #[cfg(target_os = "macos")]
    {
        crate::platform::process::spawn_background_command("open", &[path])?;
    }
    #[cfg(target_os = "linux")]
    {
        crate::platform::process::spawn_background_command("xdg-open", &[path])?;
    }
    #[cfg(target_os = "windows")]
    {
        crate::platform::process::spawn_background_command("explorer", &[path])?;
    }
    Ok(())
}
