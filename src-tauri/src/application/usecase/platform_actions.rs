use crate::application::ports::{
    AppProcessPort, AppShellPort, AppSystemPort, AppWindowPort, ForceKillOutcome,
    ProcessActionOutcome,
};
use crate::application::service::restored_status;
use crate::contracts::{
    BackendEffect, BackendSkeletonStatus, SystemActionPayload, SystemInfoPayload,
    UpdateInstallabilityPayload,
};
use crate::core::error::CoreError;

// 平台动作 usecase 只编排公开平台端口，不恢复更新安装或外部进程闭环。
pub fn check_update_installability(system: &impl AppSystemPort) -> UpdateInstallabilityPayload {
    let installability = system.update_installability();
    let code = if installability.translocated {
        "app_translocation"
    } else if installability.read_only_location {
        "read_only_location"
    } else {
        "ok"
    };
    let can_install = code == "ok";

    UpdateInstallabilityPayload {
        backend_status: restored_status(
            "platform_actions",
            "check_update_installability",
            BackendEffect::Platform,
        ),
        can_install,
        code: code.to_string(),
        executable_path: installability.executable_path,
        bundle_path: installability.bundle_path,
        translocated: installability.translocated,
        quarantined: installability.quarantined,
    }
}

pub fn graceful_restart_for_update(
    process: &impl AppProcessPort,
) -> Result<SystemActionPayload, CoreError> {
    Ok(process_action_payload(
        "graceful_restart_for_update",
        process.graceful_restart_for_update()?,
    ))
}

pub fn restart_app(process: &impl AppProcessPort) -> Result<SystemActionPayload, CoreError> {
    Ok(process_action_payload(
        "restart_codex",
        process.restart_app()?,
    ))
}

pub fn force_kill_app(process: &impl AppProcessPort) -> Result<SystemActionPayload, CoreError> {
    let outcome = process.force_kill_app()?;
    Ok(force_kill_payload(outcome))
}

pub fn open_path(
    shell: &impl AppShellPort,
    path: String,
) -> Result<SystemActionPayload, CoreError> {
    shell.open_path(&path)?;
    Ok(system_action_payload(restored_status(
        "platform_actions",
        "open_path",
        BackendEffect::Platform,
    )))
}

pub fn system_info(system: &impl AppSystemPort) -> SystemInfoPayload {
    let info = system.system_info();
    SystemInfoPayload {
        backend_status: restored_status(
            "platform_actions",
            "get_system_info",
            BackendEffect::Platform,
        ),
        os: info.os,
        os_version: info.os_version,
        arch: info.arch,
        hostname: info.hostname,
    }
}

pub fn focus_main_window(window: &impl AppWindowPort) -> Result<SystemActionPayload, CoreError> {
    window.focus_main_window()?;
    Ok(system_action_payload(restored_status(
        "platform_actions",
        "focus_main_window",
        BackendEffect::Platform,
    )))
}

fn force_kill_payload(outcome: ForceKillOutcome) -> SystemActionPayload {
    let processes = outcome
        .processes
        .iter()
        .map(|process| format!("{} ({})", process.name, process.pid))
        .collect::<Vec<_>>();
    SystemActionPayload {
        backend_status: restored_status(
            "platform_actions",
            "force_kill_codex",
            BackendEffect::Platform,
        ),
        config_cleared: None,
        killed_count: Some(outcome.killed_count),
        terminated_process_count: Some(outcome.killed_count),
        processes: Some(processes),
    }
}

fn process_action_payload(command: &str, outcome: ProcessActionOutcome) -> SystemActionPayload {
    let mut backend_status = restored_status("platform_actions", command, BackendEffect::Platform);
    backend_status.note = format!(
        "平台端口已非阻塞启动替换进程：action={:?}, spawned={}, current_process_exit_scheduled={}, args_count={}, detail={}",
        outcome.action,
        outcome.spawned,
        outcome.current_process_exit_scheduled,
        outcome.args.len(),
        outcome.detail
    );
    system_action_payload(backend_status)
}

fn system_action_payload(backend_status: BackendSkeletonStatus) -> SystemActionPayload {
    SystemActionPayload {
        backend_status,
        config_cleared: None,
        killed_count: None,
        terminated_process_count: None,
        processes: None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::application::ports::ProcessActionKind;

    struct FakeProcess {
        restart_fails: bool,
        update_restart_fails: bool,
    }

    impl AppProcessPort for FakeProcess {
        fn graceful_restart_for_update(&self) -> Result<ProcessActionOutcome, CoreError> {
            if self.update_restart_fails {
                return Err(CoreError::Operation("spawn failed".to_string()));
            }
            Ok(outcome(ProcessActionKind::GracefulRestartForUpdate))
        }

        fn restart_app(&self) -> Result<ProcessActionOutcome, CoreError> {
            if self.restart_fails {
                return Err(CoreError::Operation("spawn failed".to_string()));
            }
            Ok(outcome(ProcessActionKind::RestartApp))
        }

        fn force_kill_app(&self) -> Result<ForceKillOutcome, CoreError> {
            Ok(ForceKillOutcome {
                killed_count: 0,
                processes: Vec::new(),
            })
        }
    }

    #[test]
    fn restart_app_returns_restored_platform_payload() {
        let process = FakeProcess {
            restart_fails: false,
            update_restart_fails: false,
        };

        let payload = restart_app(&process).expect("restart payload");

        assert!(payload.backend_status.restored);
        assert_eq!(payload.backend_status.module, "platform_actions");
        assert_eq!(payload.backend_status.command, "restart_codex");
        assert_eq!(
            payload.backend_status.boundary.effect,
            BackendEffect::Platform
        );
        assert!(payload
            .backend_status
            .note
            .contains("平台端口已非阻塞启动替换进程"));
        assert!(!payload.backend_status.note.contains("codex"));
        assert_eq!(payload.killed_count, None);
    }

    #[test]
    fn graceful_restart_propagates_port_error() {
        let process = FakeProcess {
            restart_fails: false,
            update_restart_fails: true,
        };

        assert_eq!(
            graceful_restart_for_update(&process)
                .expect_err("port error")
                .code(),
            "runtime.operation_failed"
        );
    }

    fn outcome(action: ProcessActionKind) -> ProcessActionOutcome {
        ProcessActionOutcome {
            action,
            program: "codex".to_string(),
            args: vec!["--profile".to_string(), "default".to_string()],
            spawned: true,
            current_process_exit_scheduled: false,
            detail: "当前进程退出由外层生命周期处理".to_string(),
        }
    }
}
