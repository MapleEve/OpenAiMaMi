use crate::repository::Repository;

// 路径状态仓储只读取路径展示值和存在性事实，不组装 IPC DTO。

pub struct RepositoryPathState {
    pub codex_home: String,
    pub accounts_path: String,
    pub auth_path: String,
    pub registry_path: String,
    pub sessions_path: String,
    pub launch_agent_path: String,
    pub auto_switch_log_path: String,
    pub auth_exists: bool,
    pub registry_exists: bool,
    pub sessions_exists: bool,
}

pub fn load_app_path_state(repo: &Repository) -> RepositoryPathState {
    let paths = repo.paths();
    RepositoryPathState {
        codex_home: paths.codex_home.display().to_string(),
        accounts_path: paths.accounts_dir.display().to_string(),
        auth_path: paths.auth_path.display().to_string(),
        registry_path: paths.registry_path.display().to_string(),
        sessions_path: paths.sessions_dir.display().to_string(),
        launch_agent_path: paths.launch_agent_path.display().to_string(),
        auto_switch_log_path: paths.auto_switch_log_path.display().to_string(),
        auth_exists: repo.fs().exists(&paths.auth_path),
        registry_exists: repo.fs().exists(&paths.registry_path),
        sessions_exists: repo.fs().exists(&paths.sessions_dir),
    }
}
