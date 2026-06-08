use crate::application::ports::AppProcessPort;
use crate::core::error::CoreError;

#[cfg(target_os = "windows")]
pub fn background_command(program: &str) -> std::process::Command {
    use std::os::windows::process::CommandExt;
    const CREATE_NO_WINDOW: u32 = 0x08000000;

    let mut command = std::process::Command::new(program);
    command.creation_flags(CREATE_NO_WINDOW);
    command
}

#[cfg(not(target_os = "windows"))]
pub fn background_command(program: &str) -> std::process::Command {
    std::process::Command::new(program)
}

// 进程平台适配器只封装外部进程能力，不解释业务状态。
pub fn spawn_background_command(program: &str, args: &[&str]) -> Result<(), CoreError> {
    background_command(program).args(args).spawn()?;
    Ok(())
}

pub fn background_command_output(
    program: &str,
    args: &[&str],
) -> Result<std::process::Output, CoreError> {
    Ok(background_command(program).args(args).output()?)
}

pub(crate) struct ProcessPlatformAdapter;

impl AppProcessPort for ProcessPlatformAdapter {
    fn graceful_restart_for_update(&self) -> Result<(), CoreError> {
        graceful_restart_for_update()
    }

    fn restart_app(&self) -> Result<(), CoreError> {
        restart_app()
    }

    fn force_kill_app(&self) -> Result<(), CoreError> {
        force_kill_app()
    }
}

pub fn graceful_restart_for_update() -> Result<(), CoreError> {
    Err(CoreError::Unsupported(
        "当前公开后端未恢复更新重启动作".to_string(),
    ))
}

pub fn restart_app() -> Result<(), CoreError> {
    Err(CoreError::Unsupported(
        "当前公开后端未恢复重启外部程序能力".to_string(),
    ))
}

pub fn force_kill_app() -> Result<(), CoreError> {
    Err(CoreError::Unsupported(
        "当前公开后端未恢复强制结束外部程序能力".to_string(),
    ))
}
