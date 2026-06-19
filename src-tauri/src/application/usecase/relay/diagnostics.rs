use super::payload::{
    diagnostic_has_issues, diagnostic_payload_from_skeleton, repository_status, repository_warning,
};
use crate::contracts::{CoreWarning, RelayDiagnosticPayload, RelayRouterIssueFixPayload};
use crate::core::{error::CoreError, relay as relay_core};
use crate::repository::{relay as relay_repository, Repository};

pub fn run_codex_router_diagnostics(repo: &Repository) -> (RelayDiagnosticPayload, CoreWarning) {
    let command = "run_codex_router_diagnostics";
    router_diagnostic_payload(repo, command)
}

pub fn diagnose_codex_router(repo: &Repository) -> (RelayDiagnosticPayload, CoreWarning) {
    let command = "diagnose_codex_router";
    router_diagnostic_payload(repo, command)
}

fn router_diagnostic_payload(
    repo: &Repository,
    command: &str,
) -> (RelayDiagnosticPayload, CoreWarning) {
    let skeleton = relay_repository::load_router_diagnostic_skeleton(repo, command);
    let has_issues = diagnostic_has_issues(&skeleton);
    let diagnostic = relay_core::router_diagnostic(
        command,
        skeleton.source_path.clone(),
        skeleton.catalog_source_path.clone(),
        skeleton.checked_at.clone(),
        skeleton.diagnostic_boundary.clone(),
        has_issues,
    );
    (
        diagnostic_payload_from_skeleton(command, diagnostic, skeleton),
        repository_warning(command),
    )
}

pub fn fix_codex_router_issue(
    repo: &Repository,
    item_id: String,
) -> Result<(RelayRouterIssueFixPayload, CoreWarning), CoreError> {
    let command = "fix_codex_router_issue";
    let fix = fix_router_issue(repo, &item_id)?;
    let (diagnostics, _) = router_diagnostic_payload(repo, command);
    Ok((
        RelayRouterIssueFixPayload {
            backend_status: repository_status(command),
            item_id: item_id.clone(),
            issue_id: item_id,
            fixed: fix.fixed,
            requires_restart: fix.requires_restart,
            message: fix.message,
            details: fix.details,
            diagnostics,
        },
        repository_warning(command),
    ))
}

struct RouterIssueFixResult {
    fixed: bool,
    requires_restart: bool,
    message: String,
    details: Vec<String>,
}

fn fix_router_issue(repo: &Repository, item_id: &str) -> Result<RouterIssueFixResult, CoreError> {
    match item_id {
        "missing_router_block"
        | "missing_catalog_file"
        | "config_stale"
        | "catalog_path_validity"
        | "config_toml_router"
        | "config_toml_catalog" => {
            let details = relay_repository::inject_router_config(repo)?;
            Ok(router_issue_fixed(
                "已重新写入 Codex Router 受管配置。",
                details,
                true,
            ))
        }
        "stale_router_entries" => {
            let details = relay_repository::remove_router_config(repo)?;
            Ok(router_issue_fixed(
                "已移除过期 Codex Router 配置。",
                details,
                true,
            ))
        }
        "all" => {
            let skeleton = relay_repository::load_router_diagnostic_skeleton(repo, "fix_all");
            let auto_fixable = skeleton.config_toml_syntax_valid
                && !skeleton.config_profile_conflict
                && skeleton.router_enabled
                && (!skeleton.managed_block_exists || skeleton.config_stale_reason.is_some());
            let details = if auto_fixable {
                relay_repository::inject_router_config(repo)?
            } else {
                vec!["没有需要自动修复的 Codex Router 诊断项。".to_string()]
            };
            Ok(router_issue_fixed(
                "已处理所有可自动修复的诊断项。",
                details,
                true,
            ))
        }
        "user_top_level_profile" | "config_profile_conflict" => Ok(RouterIssueFixResult {
            fixed: false,
            requires_restart: false,
            message: "该诊断项需要手动处理，不能自动改写用户 profile。".to_string(),
            details: vec!["请手动确认 config.toml 顶层 profile 与路由配置的关系。".to_string()],
        }),
        "config_toml_syntax" | "config_omit_syntax" => Ok(RouterIssueFixResult {
            fixed: false,
            requires_restart: false,
            message:
                "config.toml syntax requires manual repair; no automatic rewrite was performed."
                    .to_string(),
            details: vec![
                "Fix config.toml TOML syntax manually, then rerun router diagnostics.".to_string(),
            ],
        }),
        "auth_integrity" | "config_third_party" | "db_orphan_providers" => {
            Ok(RouterIssueFixResult {
                fixed: false,
                requires_restart: false,
                message: "该诊断项已确认，但当前公开实现不自动修改相关外部状态。".to_string(),
                details: vec!["保留只读诊断结果，避免在证据不足时改写用户环境。".to_string()],
            })
        }
        _ => Err(CoreError::InvalidInput(format!(
            "unknown router issue id: {item_id}"
        ))),
    }
}

fn router_issue_fixed(
    message: &str,
    details: Vec<String>,
    requires_restart: bool,
) -> RouterIssueFixResult {
    RouterIssueFixResult {
        fixed: true,
        requires_restart,
        message: message.to_string(),
        details,
    }
}
