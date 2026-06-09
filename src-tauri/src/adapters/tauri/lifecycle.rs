use crate::application::usecase;
use crate::contracts::BackendSkeletonStatus;
use crate::repository::Repository;
use tauri::{AppHandle, Emitter};

const RUNTIME_BRIDGE_EVENT: &str = "aimami-runtime-event";

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct RuntimeBootstrapSummary {
    pub usage_refresh_watcher_started: bool,
    pub auto_switch_pending_watcher_started: bool,
    pub usage_refresh_watcher_status: Option<BackendSkeletonStatus>,
    pub auto_switch_pending_watcher_status: Option<BackendSkeletonStatus>,
}

// 桌面生命周期只做启动编排；watcher 语义仍归 application/core owner。
pub(crate) fn bootstrap_runtime_watchers(repo: &Repository) -> RuntimeBootstrapSummary {
    let usage_refresh_watcher_status = usecase::system::start_usage_refresh_watcher(repo).ok();
    let auto_switch_pending_watcher_status =
        usecase::system::start_auto_switch_pending_watcher(repo).ok();
    RuntimeBootstrapSummary {
        usage_refresh_watcher_started: usage_refresh_watcher_status.is_some(),
        auto_switch_pending_watcher_started: auto_switch_pending_watcher_status.is_some(),
        usage_refresh_watcher_status,
        auto_switch_pending_watcher_status,
    }
}

pub(crate) fn emit_runtime_bridge_event(app: &AppHandle, status: &BackendSkeletonStatus) {
    if let Some(event) = &status.runtime_event {
        let _ = app.emit(RUNTIME_BRIDGE_EVENT, event);
    }
}

pub(crate) fn run() {}
