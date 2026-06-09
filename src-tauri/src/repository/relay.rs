use crate::contracts::RelayPassthroughAuditEntryPayload;
use crate::repository::Repository;

pub(crate) struct RelayRepository;

pub(crate) trait RelayRepositoryBoundary {}

impl RelayRepositoryBoundary for RelayRepository {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayDiagnosticSkeleton {
    pub source_path: String,
    pub catalog_source_path: Option<String>,
    pub checked_at: Option<String>,
    pub diagnostic_boundary: String,
    pub pending: bool,
}

/// relay 仓储只暴露可替换的文件来源边界，不在这里实现代理状态机。
pub fn passthrough_audit_source_path(repo: &Repository) -> String {
    repo.paths()
        .app_data_dir
        .join("relay-passthrough-audit.jsonl")
        .display()
        .to_string()
}

/// 当前公开范围没有审计日志原始恢复证据，仓储层返回空集合并保留来源路径边界。
pub fn load_passthrough_audit_log(
    repo: &Repository,
    _limit: u32,
) -> Vec<RelayPassthroughAuditEntryPayload> {
    let _source_path = passthrough_audit_source_path(repo);
    Vec::new()
}

/// 当前公开范围只记录调用意图边界，不写入未恢复的 relay 配置状态。
pub fn record_passthrough_policy_intent(repo: &Repository, blocked: bool) -> bool {
    let _source_path = passthrough_audit_source_path(repo);
    blocked
}

/// router 诊断仓储边界只提供可替换路径和空诊断源，不探测真实用户环境。
pub fn load_router_diagnostic_skeleton(
    repo: &Repository,
    command: &str,
) -> RelayDiagnosticSkeleton {
    let paths = repo.paths();
    RelayDiagnosticSkeleton {
        source_path: paths.config_path.display().to_string(),
        catalog_source_path: Some(
            paths
                .codex_home
                .join("codex_router_catalog.json")
                .display()
                .to_string(),
        ),
        checked_at: None,
        diagnostic_boundary: format!("relay.repository.{command}.pending"),
        pending: true,
    }
}
