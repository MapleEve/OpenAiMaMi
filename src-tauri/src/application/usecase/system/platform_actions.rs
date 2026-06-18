use crate::application::ports::{
    AppProcessPort, AppShellPort, AppSystemPort, AppWindowPort, ForceKillOutcome,
};
use crate::application::service::{restored_status, unsupported_status};
use crate::contracts::{
    BackendEffect, BackendSkeletonStatus, SystemActionPayload, SystemInfoPayload,
    UpdateInstallabilityPayload,
};
use crate::core::error::CoreError;

// platform-actions usecase 只编排公开平台 port 动作，不恢复更新安装或外部进程闭环。
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
            "system",
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

pub fn graceful_restart_for_update(process: &impl AppProcessPort) -> SystemActionPayload {
    let _ = process.graceful_restart_for_update();
    system_action_payload(unsupported_status(
        "system",
        "graceful_restart_for_update",
        "更新重启动作未在当前公开后端范围内恢复。",
    ))
}

pub fn restart_app(process: &impl AppProcessPort) -> SystemActionPayload {
    let _ = process.restart_app();
    system_action_payload(unsupported_status(
        "system",
        "restart_codex",
        "重启外部程序能力未在当前公开后端范围内恢复。",
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
        "system",
        "open_path",
        BackendEffect::Platform,
    )))
}

pub fn system_info(system: &impl AppSystemPort) -> SystemInfoPayload {
    let info = system.system_info();
    SystemInfoPayload {
        backend_status: restored_status("system", "get_system_info", BackendEffect::Platform),
        os: info.os,
        os_version: info.os_version,
        arch: info.arch,
        hostname: info.hostname,
    }
}

pub fn focus_main_window(window: &impl AppWindowPort) -> Result<SystemActionPayload, CoreError> {
    window.focus_main_window()?;
    Ok(system_action_payload(restored_status(
        "system",
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
        backend_status: restored_status("system", "force_kill_codex", BackendEffect::Platform),
        config_cleared: None,
        killed_count: Some(outcome.killed_count),
        terminated_process_count: Some(outcome.killed_count),
        processes: Some(processes),
    }
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
