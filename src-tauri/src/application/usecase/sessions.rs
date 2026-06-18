use crate::application::service::{current_timestamp, pending_status, restored_status};
use crate::contracts::analytics::{AnalyticsRange, SessionAnalyticsPayload};
use crate::contracts::sessions::{
    AccountSessionImportPayload, SessionRecordPayload, SessionsDeletePayload, SessionsListPayload,
};
use crate::contracts::BackendEffect;
use crate::repository::sessions as sessions_repository;
use crate::repository::Repository;

pub(crate) struct SessionsUseCaseBoundary;

pub(crate) trait SessionsUseCaseBoundaryPort {}

/// 读取会话文件清单的用户动作边界，只编排仓储元数据并转换 IPC DTO。
pub fn load_sessions(repo: &Repository) -> SessionsListPayload {
    let mut items = sessions_repository::load_session_file_metadata(repo)
        .into_iter()
        .map(|metadata| SessionRecordPayload {
            id: metadata.id.clone(),
            thread_name: metadata.id,
            project_path: None,
            project_name: None,
            parent_session_id: None,
            updated_at: metadata.updated_at,
            created_at: metadata.created_at,
            file_size: metadata.file_size,
            is_conversation_thread: false,
            project_path_missing: false,
            agent_nickname: None,
            agent_role: None,
        })
        .collect::<Vec<_>>();

    items.sort_by(|left, right| {
        right
            .updated_at
            .cmp(&left.updated_at)
            .then_with(|| left.id.cmp(&right.id))
    });

    SessionsListPayload {
        backend_status: restored_status("sessions", "load_sessions", BackendEffect::NoOp),
        total: items.len() as i32,
        items,
        source_path: sessions_source_path(repo),
        last_scan_at: current_timestamp(),
    }
}

/// 删除会话的用户动作边界，只按 repository 已扫描到的 session id 删除对应文件。
pub fn delete_sessions(repo: &Repository, ids: Vec<String>) -> SessionsDeletePayload {
    let delete_result = sessions_repository::delete_session_files(repo, &ids);
    let (backend_status, deleted_ids, skipped_ids) = match delete_result {
        Ok(result) => (
            restored_status("sessions", "delete_sessions", BackendEffect::NoOp),
            result.deleted_ids,
            result.skipped_ids,
        ),
        Err(error) => (
            pending_status(
                "sessions",
                "delete_sessions",
                &format!("会话文件删除失败，当前未恢复 sqlite/global-state 事务：{error}"),
            ),
            Vec::new(),
            ids.clone(),
        ),
    };

    SessionsDeletePayload {
        backend_status,
        requested_ids: ids.clone(),
        deleted_count: deleted_ids.len() as i32,
        deleted_ids,
        skipped_ids,
        source_path: sessions_source_path(repo),
    }
}

/// 导入会话账号的用户动作边界，当前不解析 session JSON，也不写账号仓储。
pub fn import_chatgpt_session_account(
    _repo: &Repository,
    _session_json: String,
    _overwrite_existing: bool,
) -> AccountSessionImportPayload {
    AccountSessionImportPayload {
        backend_status: pending_status(
            "sessions",
            "import_chatgpt_session_account",
            "会话账号导入只完成公开 IPC 骨架；账号写入和快照生成等待证据补齐。",
        ),
        imported: false,
        account_key: None,
        email: None,
        plan: None,
        snapshot_path: None,
        registry_account_count: 0,
        active_account_key: None,
        refresh_token_placeholder: false,
    }
}

/// 会话分析的 sessions 模块入口，统计来源与解析规则等待证据补齐。
pub fn load_session_analytics(
    _repo: &Repository,
    range: Option<String>,
) -> SessionAnalyticsPayload {
    let normalized_range = AnalyticsRange::from_input(range);
    SessionAnalyticsPayload {
        backend_status: pending_status(
            "sessions",
            "load_session_analytics",
            "会话分析只完成公开 IPC 骨架；当前不推断闭源统计规则。",
        ),
        range: normalized_range,
        total_sessions: 0,
        avg_turns: 0.0,
        active_days: 0,
        series: Vec::new(),
    }
}

fn sessions_source_path(repo: &Repository) -> String {
    repo.paths().sessions_dir.display().to_string()
}
