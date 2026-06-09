use crate::core::model::relay::{
    RelayCoreCluster, RelayCoreClusterBoundary, RelayCoreRepositoryView, RelayCoreSnapshot,
    RelayDiagnosticDomain, RelayDraftDomain, RelayOperationKey, RelayOperationKind,
    RelayOwnerLayer, RelayProviderDomain, RelayProxyDomain, RelayStateDomain, RelayTestDomain,
    RELAY_DEFAULT_IDE, RELAY_SCHEMA_VERSION,
};
use std::collections::HashMap;

/// relay core 只承载领域状态、簇状态机和错误语义，不读写真实文件、不发起网络请求。
pub fn build_core_snapshot(
    repo_view: &RelayCoreRepositoryView,
    platform_capabilities: Vec<String>,
) -> RelayCoreSnapshot {
    RelayCoreSnapshot {
        state: empty_state(repo_view),
        clusters: relay_cluster_boundaries(),
        platform_capabilities,
    }
}

pub fn relay_operation_key(
    kind: RelayOperationKind,
    command: &str,
    subject: Option<String>,
) -> RelayOperationKey {
    RelayOperationKey::new(kind, command, subject)
}

pub fn provider_from_draft(
    command: &str,
    draft: &RelayDraftDomain,
    provider_id_override: Option<&str>,
    network_override: Option<&str>,
) -> RelayProviderDomain {
    let provider_id = provider_id_override
        .map(ToString::to_string)
        .or_else(|| draft.provider_id.clone())
        .or_else(|| draft.id.clone())
        .unwrap_or_else(|| "pending-relay-provider".to_string());
    let base_url = draft
        .base_url
        .clone()
        .or_else(|| draft.url.clone())
        .or_else(|| draft.endpoint.clone())
        .unwrap_or_default();
    let model = draft
        .model
        .clone()
        .or_else(|| draft.default_model.clone())
        .unwrap_or_default();
    let network = network_override
        .map(ToString::to_string)
        .or_else(|| draft.network.clone())
        .unwrap_or_else(|| "system".to_string());

    let _operation = relay_operation_key(
        RelayOperationKind::ProviderMutation,
        command,
        Some(provider_id.clone()),
    );

    RelayProviderDomain {
        id: provider_id.clone(),
        ide: draft
            .ide
            .clone()
            .unwrap_or_else(|| RELAY_DEFAULT_IDE.to_string()),
        name: draft.name.clone().unwrap_or(provider_id),
        base_url,
        api_key_stored: draft.api_key_stored.unwrap_or(false),
        model,
        wire_api: draft.wire_api.clone().unwrap_or_default(),
        network,
    }
}

pub fn pending_test_result(command: &str) -> RelayTestDomain {
    let _operation = relay_operation_key(RelayOperationKind::NetworkProbe, command, None);
    RelayTestDomain {
        ok: false,
        latency_ms: 0,
        status_code: None,
        message: None,
        error_message: Some(
            "relay 测试未执行：当前只返回后端骨架，网络探测等待证据补齐。".to_string(),
        ),
        models: Vec::new(),
    }
}

pub fn pending_model_fetch(command: &str) -> (Vec<String>, String) {
    let _operation = relay_operation_key(RelayOperationKind::ModelFetch, command, None);
    (
        Vec::new(),
        "relay 模型拉取未执行：当前只保留请求归一化、认证头和平台 HTTP 边界。".to_string(),
    )
}

pub fn pending_diagnostic(
    command: &str,
    source_path: String,
    catalog_source_path: Option<String>,
    checked_at: Option<String>,
    boundary: String,
) -> RelayDiagnosticDomain {
    let _operation = relay_operation_key(RelayOperationKind::DiagnosticRead, command, None);
    RelayDiagnosticDomain {
        source_path,
        catalog_source_path,
        checked_at,
        boundary,
        pending: true,
        summary: format!(
            "relay 诊断命令 {command} 未执行：当前只返回 repository/core/platform 骨架。"
        ),
    }
}

pub fn pending_fix_message(command: &str, item_id: &str) -> String {
    let _operation = relay_operation_key(
        RelayOperationKind::DiagnosticFix,
        command,
        Some(item_id.to_string()),
    );
    format!("修复未执行：诊断项 {item_id} 当前只有调度骨架，真实修复逻辑等待证据补齐。")
}

pub fn skeleton_note(command: &str) -> String {
    format!("relay 命令 {command} 已接入后端六边形骨架；真实代理业务只在证据补齐后实现。")
}

pub fn router_toggle_note(command: &str) -> String {
    let _operation = relay_operation_key(RelayOperationKind::ProxyConfig, command, None);
    "路由开关只完成 repository/core/platform 调度骨架，未写入真实代理配置。".to_string()
}

pub fn stream_boundary_note(command: &str) -> String {
    let _operation = relay_operation_key(RelayOperationKind::StreamTranslate, command, None);
    "SSE/流式转换只建立状态机边界，未启动真实转发流。".to_string()
}

fn empty_state(repo_view: &RelayCoreRepositoryView) -> RelayStateDomain {
    let mut active_by_ide = HashMap::new();
    active_by_ide.insert(RELAY_DEFAULT_IDE.to_string(), Vec::new());

    RelayStateDomain {
        schema_version: RELAY_SCHEMA_VERSION,
        providers: Vec::new(),
        active_by_ide,
        proxy: RelayProxyDomain {
            running: false,
            port: 0,
            base_url: String::new(),
            codex_base_url: String::new(),
            last_error: None,
        },
        codex_router_enabled: false,
        block_official_passthrough: false,
        source_path: repo_view.relay_config_path.clone(),
    }
}

fn relay_cluster_boundaries() -> Vec<RelayCoreClusterBoundary> {
    vec![
        cluster(
            RelayCoreCluster::CodexWriter,
            RelayOwnerLayer::Repository,
            "TOML 写入、导出、迁移和清理只建立 repository 入口，当前不写真实配置。",
        ),
        cluster(
            RelayCoreCluster::Diagnostic,
            RelayOwnerLayer::Core,
            "诊断项、修复调度和错误语义只建立 core 状态机，当前不执行真实修复。",
        ),
        cluster(
            RelayCoreCluster::HealthAudit,
            RelayOwnerLayer::Platform,
            "连通性测试和审计追加只建立平台和仓储边界，当前不发起真实 HTTP。",
        ),
        cluster(
            RelayCoreCluster::Bootstrap,
            RelayOwnerLayer::Core,
            "启动装配只保留边界位置，当前不启动 watcher 或后台循环。",
        ),
        cluster(
            RelayCoreCluster::FetchModels,
            RelayOwnerLayer::Platform,
            "模型拉取只保留请求构建、认证头和平台 HTTP 端口，当前不联网。",
        ),
        cluster(
            RelayCoreCluster::Translator,
            RelayOwnerLayer::Core,
            "请求与响应格式转换只保留状态机边界，当前不转换真实流量。",
        ),
        cluster(
            RelayCoreCluster::ProxyConfig,
            RelayOwnerLayer::Repository,
            "代理配置只保留设置和环境探针边界，当前不写未恢复配置。",
        ),
        cluster(
            RelayCoreCluster::ImageCompat,
            RelayOwnerLayer::Repository,
            "图片兼容开关只保留 config.toml 功能位边界，当前不修改文件。",
        ),
        cluster(
            RelayCoreCluster::Sse,
            RelayOwnerLayer::Core,
            "SSE 桥接只保留缓冲、终止标记和转换状态机边界，当前不启动转发。",
        ),
    ]
}

fn cluster(
    cluster: RelayCoreCluster,
    owner: RelayOwnerLayer,
    detail: &str,
) -> RelayCoreClusterBoundary {
    RelayCoreClusterBoundary {
        status_code: format!("relay.{}.pending", cluster.code()),
        cluster,
        owner,
        pending: true,
        detail: detail.to_string(),
    }
}
