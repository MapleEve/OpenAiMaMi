use crate::application::usecase;
use crate::repository::Repository;

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct RuntimeBootstrapSummary {
    pub usage_refresh_watcher_started: bool,
    pub auto_switch_pending_watcher_started: bool,
}

// 桌面生命周期只做启动编排；watcher 语义仍归 application/core owner。
pub(crate) fn bootstrap_runtime_watchers(repo: &Repository) -> RuntimeBootstrapSummary {
    RuntimeBootstrapSummary {
        usage_refresh_watcher_started: usecase::system::start_usage_refresh_watcher(repo).is_ok(),
        auto_switch_pending_watcher_started: usecase::system::start_auto_switch_pending_watcher(
            repo,
        )
        .is_ok(),
    }
}

pub(crate) fn run() {}
