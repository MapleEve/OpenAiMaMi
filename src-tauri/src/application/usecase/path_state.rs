use crate::contracts::AppPathState;
use crate::repository::path_state::{load_app_path_state, RepositoryPathState};
use crate::repository::Repository;

// 路径状态用例辅助层只做仓储事实到公开 DTO 的转换。

pub fn make_app_path_state(repo: &Repository) -> AppPathState {
    app_path_state_from_repository(load_app_path_state(repo))
}

pub fn app_path_state_from_repository(state: RepositoryPathState) -> AppPathState {
    AppPathState {
        codex_home: state.codex_home,
        accounts_path: state.accounts_path,
        auth_path: state.auth_path,
        registry_path: state.registry_path,
        sessions_path: state.sessions_path,
        launch_agent_path: state.launch_agent_path,
        auto_switch_log_path: state.auto_switch_log_path,
        auth_exists: state.auth_exists,
        registry_exists: state.registry_exists,
        sessions_exists: state.sessions_exists,
    }
}
