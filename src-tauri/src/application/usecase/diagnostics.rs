use crate::application::ports::DiagnosticPlatformPort;
use crate::application::usecase::path_state::app_path_state_from_repository;
use crate::contracts::{
    AppPathState, BackendEffect, BackendSkeletonBoundaryStatus, BackendSkeletonStatus,
    DiagnoseApiState, DiagnoseCatalogIntegrityPayload, DiagnoseDiagnosticFieldPayload,
    DiagnoseDiagnosticProbePayload, DiagnoseDiagnosticSnapshotPayload, DiagnosePayload,
    DiagnosePlatform, DiagnoseRegistryState, DiagnoseSessionState,
};
use crate::core::error::CoreError;
use crate::core::model::diagnostics::{DiagnosticProbe, DiagnosticSnapshot};
use crate::repository::diagnostics::load_system_diagnostic_snapshot;
use crate::repository::path_state::{load_app_path_state, RepositoryPathState};
use crate::repository::relay as relay_repository;
use crate::repository::Repository;

// diagnostics usecase 只负责公开只读诊断快照合同，不恢复诊断修复闭环。
pub fn diagnose(
    repo: &Repository,
    platform: &impl DiagnosticPlatformPort,
) -> Result<DiagnosePayload, CoreError> {
    let diagnostic_snapshot = load_system_diagnostic_snapshot(repo)?;
    let paths = make_path_state_from_diagnostic_snapshot(repo, &diagnostic_snapshot);
    Ok(DiagnosePayload {
        backend_status: diagnose_backend_status(),
        paths,
        core_version: env!("CARGO_PKG_VERSION").to_string(),
        platform: make_diagnose_platform(platform),
        registry_state: DiagnoseRegistryState {
            account_count: diagnostic_probe_count(
                &diagnostic_snapshot,
                "diagnostics.path.registry",
            )
            .unwrap_or_default(),
        },
        session_state: DiagnoseSessionState {
            latest_rollout_found: diagnostic_probe_exists(
                &diagnostic_snapshot,
                "diagnostics.path.sessions",
            )
            .unwrap_or(false),
        },
        api_state: DiagnoseApiState {
            usage_attempt_count: 0,
            usage_success_count: 0,
            name_attempt_count: 0,
            name_success_count: 0,
            last_usage_failure: None,
            last_usage_failure_account: None,
            last_name_failure: None,
            last_name_failure_account: None,
        },
        diagnostic_snapshot: make_diagnostic_snapshot_payload(&diagnostic_snapshot),
        catalog_integrity: make_catalog_integrity_payload(repo),
        pending_diagnostics: make_pending_diagnostic_fields(),
    })
}

fn diagnose_backend_status() -> BackendSkeletonStatus {
    BackendSkeletonStatus {
        module: "diagnostics".to_string(),
        command: "diagnose".to_string(),
        restored: true,
        note: "系统诊断已恢复 diagnostics repository 只读快照：路径存在性、registry 数量、sessions 数量、平台 os/arch 和 catalog_integrity 只读探针；registry/keychain/sqlite 深诊断引擎和修复逻辑仍为 pending。"
            .to_string(),
        boundary: BackendSkeletonBoundaryStatus {
            repository_checked: true,
            repository_path_known: true,
            platform_checked: true,
            core_checked: true,
            effect: BackendEffect::RepositoryRead,
        },
        runtime_event: None,
    }
}

fn make_catalog_integrity_payload(repo: &Repository) -> DiagnoseCatalogIntegrityPayload {
    let skeleton = relay_repository::load_router_diagnostic_skeleton(repo, "catalog_integrity");
    let has_issues = !skeleton.config_toml_syntax_valid
        || skeleton.config_profile_conflict
        || (skeleton.router_enabled
            && (!skeleton.catalog_exists
                || !skeleton.config_toml_has_router
                || !skeleton.config_toml_has_catalog
                || !skeleton.managed_block_exists
                || skeleton.config_stale_reason.is_some()));
    let status = if has_issues {
        "needs_attention"
    } else {
        "restored"
    };
    let detail = if has_issues {
        "catalog_integrity 只读探针发现路由模型目录或 config.toml 受管区块需要人工核对；当前 diagnose 不执行修复。"
    } else {
        "catalog_integrity 只读探针已读取路由模型目录、config.toml 受管区块和 relay 本地配置状态。"
    };

    DiagnoseCatalogIntegrityPayload {
        source_path: skeleton.source_path,
        catalog_source_path: skeleton.catalog_source_path,
        diagnostic_boundary: "diagnostics.catalog_integrity.repository_read".to_string(),
        pending: false,
        status: status.to_string(),
        detail: detail.to_string(),
        codex_provider_count: skeleton.codex_provider_count,
        catalog_exists: skeleton.catalog_exists,
        config_toml_has_router: skeleton.config_toml_has_router,
        config_toml_has_catalog: skeleton.config_toml_has_catalog,
        config_toml_syntax_valid: skeleton.config_toml_syntax_valid,
        config_toml_syntax_reason: skeleton.config_toml_syntax_reason,
        config_profile_conflict: skeleton.config_profile_conflict,
        config_profile_conflict_reason: skeleton.config_profile_conflict_reason,
        managed_block_exists: skeleton.managed_block_exists,
        router_enabled: skeleton.router_enabled,
        user_top_level_profile: skeleton.user_top_level_profile,
        config_stale_reason: skeleton.config_stale_reason,
        has_issues,
    }
}

fn make_diagnose_platform(platform: &impl DiagnosticPlatformPort) -> DiagnosePlatform {
    let info = platform.platform_info();
    // 公开 diagnose DTO 只投影 os/arch，不外泄 hostname、os_version 或平台能力探针细节。
    DiagnosePlatform {
        os: info.os,
        arch: info.arch,
        info_source: "platform.system".to_string(),
    }
}

fn make_path_state_from_diagnostic_snapshot(
    repo: &Repository,
    snapshot: &DiagnosticSnapshot,
) -> AppPathState {
    let mut state = load_app_path_state(repo);
    if let Some(exists) = diagnostic_probe_exists(snapshot, "diagnostics.path.auth") {
        state.auth_exists = exists;
    }
    if let Some(exists) = diagnostic_probe_exists(snapshot, "diagnostics.path.registry") {
        state.registry_exists = exists;
    }
    if let Some(exists) = diagnostic_probe_exists(snapshot, "diagnostics.path.sessions") {
        state.sessions_exists = exists;
    }
    make_path_state(state)
}

fn make_path_state(state: RepositoryPathState) -> AppPathState {
    app_path_state_from_repository(state)
}

fn make_diagnostic_snapshot_payload(
    snapshot: &DiagnosticSnapshot,
) -> DiagnoseDiagnosticSnapshotPayload {
    DiagnoseDiagnosticSnapshotPayload {
        root_path: snapshot.root_path.clone(),
        source_path: snapshot.source_path.clone(),
        status_code: snapshot.status_code.clone(),
        message: diagnostic_snapshot_message(&snapshot.status_code),
        probes: snapshot
            .probes
            .iter()
            .map(make_diagnostic_probe_payload)
            .collect(),
    }
}

fn make_diagnostic_probe_payload(probe: &DiagnosticProbe) -> DiagnoseDiagnosticProbePayload {
    DiagnoseDiagnosticProbePayload {
        path: probe.path.clone(),
        exists: probe.exists,
        count: probe.count,
        status_code: probe.status_code.clone(),
        message: diagnostic_probe_message(&probe.status_code),
    }
}

fn diagnostic_snapshot_message(status_code: &str) -> String {
    match status_code {
        "diagnostics.snapshot.ready" => {
            "系统诊断只读快照已从 diagnostics repository 生成。".to_string()
        }
        _ => "系统诊断只读快照已生成；未知状态码保留在 statusCode 中。".to_string(),
    }
}

fn diagnostic_probe_message(status_code: &str) -> String {
    match status_code {
        "diagnostics.path.codex_home" => "Codex 根目录路径探针。",
        "diagnostics.path.accounts" => "账号目录路径探针。",
        "diagnostics.path.auth" => "认证文件路径探针。",
        "diagnostics.path.registry" => "账号注册表路径探针。",
        "diagnostics.path.sessions" => "会话目录路径探针。",
        "diagnostics.path.config" => "配置文件路径探针。",
        _ => "diagnostics repository 只读路径探针。",
    }
    .to_string()
}

fn diagnostic_probe_exists(snapshot: &DiagnosticSnapshot, status_code: &str) -> Option<bool> {
    diagnostic_probe(snapshot, status_code).map(|probe| probe.exists)
}

fn diagnostic_probe_count(snapshot: &DiagnosticSnapshot, status_code: &str) -> Option<i32> {
    diagnostic_probe(snapshot, status_code).and_then(|probe| probe.count)
}

fn diagnostic_probe<'a>(
    snapshot: &'a DiagnosticSnapshot,
    status_code: &str,
) -> Option<&'a DiagnosticProbe> {
    snapshot
        .probes
        .iter()
        .find(|probe| probe.status_code == status_code)
}

fn make_pending_diagnostic_fields() -> Vec<DiagnoseDiagnosticFieldPayload> {
    // 未支持的深层诊断项只能表达为待处理；diagnose 不执行平台动作，也不把空操作扩展成修复副作用。
    vec![
        pending_diagnostic_field(
            "auth_integrity",
            "认证文件与平台密钥或注册表的一致性诊断引擎未在当前公开后端恢复。",
        ),
        pending_diagnostic_field(
            "api_key_integrity",
            "API key 与平台凭据存储一致性诊断引擎未在当前公开后端恢复。",
        ),
        pending_diagnostic_field(
            "db_orphan_providers",
            "SQLite 中转 Provider 孤儿记录诊断引擎未在当前公开后端恢复。",
        ),
        pending_diagnostic_field(
            "rollout_orphan_providers",
            "rollout 线程孤儿 Provider 诊断引擎未在当前公开后端恢复。",
        ),
        pending_diagnostic_field("repair_logic", "诊断修复逻辑未在当前公开后端恢复。"),
    ]
}

fn pending_diagnostic_field(field: &str, detail: &str) -> DiagnoseDiagnosticFieldPayload {
    DiagnoseDiagnosticFieldPayload {
        field: field.to_string(),
        status: "pending".to_string(),
        detail: Some(detail.to_string()),
    }
}
