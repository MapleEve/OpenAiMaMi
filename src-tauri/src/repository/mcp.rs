use crate::contracts::{McpServerSummary, McpTransport};
use crate::core::error::CoreError;
use crate::core::model::mcp::{McpServerConfig, McpServerTransport};
use crate::core::parser::mcp::{
    parse_mcp_servers_from_config, remove_mcp_server_config, upsert_mcp_server_config,
};
use crate::repository::{adapter::FileSystemAdapter, Repository};
use std::path::Path;

#[derive(Debug, Clone)]
pub struct McpServerRepositorySnapshot {
    pub items: Vec<McpServerSummary>,
    pub source_path: String,
}

#[derive(Debug, Clone)]
pub struct McpServerRepositoryMutation {
    pub server: McpServerSummary,
    pub total: i32,
    pub source_path: String,
}

#[derive(Debug, Clone)]
pub struct McpServerRepositoryRemove {
    pub removed_name: String,
    pub total: i32,
    pub source_path: String,
}

/// MCP repository 只托管 config.toml 的路径安全、文本读写和原子替换，不声明服务运行时能力。
pub fn load_server_snapshot(repo: &Repository) -> Result<McpServerRepositorySnapshot, CoreError> {
    let config_path = ensure_config_path_allowed(repo)?;
    let source_path = config_path.display().to_string();
    let items = load_servers_from_path(repo.fs(), config_path, &source_path)?;
    Ok(McpServerRepositorySnapshot { items, source_path })
}

/// 写入单个 MCP 服务配置块；纯解析、扫描和渲染由 core parser owning。
pub fn upsert_server(
    repo: &Repository,
    server: &McpServerSummary,
) -> Result<McpServerRepositoryMutation, CoreError> {
    let config_path = ensure_config_path_allowed(repo)?;
    let server = config_from_summary(server);
    let text = read_optional_config_text(repo.fs(), config_path)?;
    let next_text = upsert_mcp_server_config(&text, &server)?;
    save_config_text(repo.fs(), config_path, &next_text)?;

    let snapshot = load_server_snapshot(repo)?;
    let saved = snapshot
        .items
        .iter()
        .find(|item| item.name == server.name)
        .cloned()
        .ok_or_else(|| CoreError::Operation("MCP 服务写入后未能重新读取".to_string()))?;
    Ok(McpServerRepositoryMutation {
        server: saved,
        total: snapshot.items.len() as i32,
        source_path: snapshot.source_path,
    })
}

pub fn set_enabled(
    repo: &Repository,
    name: &str,
    enabled: bool,
) -> Result<McpServerRepositoryMutation, CoreError> {
    let mut server = load_server_snapshot(repo)?
        .items
        .into_iter()
        .find(|server| server.name == name)
        .ok_or_else(|| CoreError::NotFound(format!("MCP 服务不存在：{name}")))?;
    server.enabled = enabled;
    upsert_server(repo, &server)
}

pub fn remove_server(
    repo: &Repository,
    name: &str,
) -> Result<McpServerRepositoryRemove, CoreError> {
    let config_path = ensure_config_path_allowed(repo)?;
    let text = read_optional_config_text(repo.fs(), config_path)?;
    let next_text = remove_mcp_server_config(&text, name)?;
    save_config_text(repo.fs(), config_path, &next_text)?;

    let snapshot = load_server_snapshot(repo)?;
    Ok(McpServerRepositoryRemove {
        removed_name: name.to_string(),
        total: snapshot.items.len() as i32,
        source_path: snapshot.source_path,
    })
}

fn ensure_config_path_allowed(repo: &Repository) -> Result<&Path, CoreError> {
    let paths = repo.paths();
    let expected = paths.codex_home.join("config.toml");
    if paths.config_path != expected {
        return Err(CoreError::InvalidInput(
            "MCP config.toml 路径必须保持在仓库声明的 CODEX_HOME 根目录".to_string(),
        ));
    }

    Ok(&paths.config_path)
}

fn load_servers_from_path(
    fs: &dyn FileSystemAdapter,
    config_path: &Path,
    source_path: &str,
) -> Result<Vec<McpServerSummary>, CoreError> {
    let text = read_optional_config_text(fs, config_path)?;
    parse_mcp_servers_from_config(&text).map(|servers| {
        servers
            .into_iter()
            .map(|server| summary_from_config(server, source_path))
            .collect()
    })
}

fn read_optional_config_text(
    fs: &dyn FileSystemAdapter,
    config_path: &Path,
) -> Result<String, CoreError> {
    if !fs.exists(config_path) {
        return Ok(String::new());
    }
    fs.read_to_string(config_path)
}

fn save_config_text(
    fs: &dyn FileSystemAdapter,
    config_path: &Path,
    text: &str,
) -> Result<(), CoreError> {
    let tmp = config_path.with_extension("toml.tmp");
    fs.write_string(&tmp, text)?;
    fs.rename(&tmp, config_path)
}

fn config_from_summary(server: &McpServerSummary) -> McpServerConfig {
    McpServerConfig {
        name: server.name.clone(),
        transport: transport_from_contract(&server.transport),
        enabled: server.enabled,
        command: server.command.clone(),
        args: server.args.clone(),
        url: server.url.clone(),
        headers: server.headers.clone(),
        environment: server.environment.clone(),
    }
}

fn summary_from_config(server: McpServerConfig, source_path: &str) -> McpServerSummary {
    McpServerSummary {
        name: server.name,
        transport: transport_to_contract(&server.transport),
        enabled: server.enabled,
        source_path: source_path.to_string(),
        command: server.command,
        args: server.args,
        url: server.url,
        headers: server.headers,
        environment: server.environment,
    }
}

fn transport_from_contract(transport: &McpTransport) -> McpServerTransport {
    match transport {
        McpTransport::Stdio => McpServerTransport::Stdio,
        McpTransport::Http => McpServerTransport::Http,
        McpTransport::Sse => McpServerTransport::Sse,
        McpTransport::Unknown => McpServerTransport::Unknown,
    }
}

fn transport_to_contract(transport: &McpServerTransport) -> McpTransport {
    match transport {
        McpServerTransport::Stdio => McpTransport::Stdio,
        McpServerTransport::Http => McpTransport::Http,
        McpServerTransport::Sse => McpTransport::Sse,
        McpServerTransport::Unknown => McpTransport::Unknown,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::repository::{adapter::fake_fs::FakeFileSystem, paths::RepositoryPaths};
    use std::collections::HashMap;
    use std::path::PathBuf;

    #[test]
    fn upsert_server_preserves_unrelated_comments_and_blocks() {
        let repo = repo_with_config(
            r#"# 顶层注释
[profile.default]
model = "gpt"

# 保留其它服务注释
[mcp_servers.beta]
enabled = true
transport = "stdio"
command = "node"

[features]
image_generation = true
"#,
        );
        let server = sample_server("alpha");

        let saved = upsert_server(&repo, &server).expect("写入 MCP 服务");
        let text = read_config(&repo);

        assert_eq!(saved.total, 2);
        assert!(text.contains("# 顶层注释"));
        assert!(text.contains("# 保留其它服务注释"));
        assert!(text.contains("[features]"));
        assert!(text.contains("[mcp_servers.alpha]"));
        assert!(text.contains("[mcp_servers.beta]"));
    }

    #[test]
    fn upsert_server_replaces_only_target_block() {
        let repo = repo_with_config(
            r#"[mcp_servers.alpha]
enabled = true
transport = "stdio"
command = "old"

[mcp_servers.beta]
enabled = true
transport = "stdio"
# beta 内部注释必须保留
command = "node"
"#,
        );
        let mut server = sample_server("alpha");
        server.command = Some("new-command".to_string());

        upsert_server(&repo, &server).expect("替换 MCP 服务");
        let text = read_config(&repo);

        assert!(text.contains("command = \"new-command\""));
        assert!(!text.contains("command = \"old\""));
        assert!(text.contains("# beta 内部注释必须保留"));
    }

    #[test]
    fn remove_server_preserves_unrelated_comments() {
        let repo = repo_with_config(
            r#"# 顶层注释
[mcp_servers.alpha]
enabled = true
transport = "stdio"
command = "node"

# 其它配置注释
[features]
image_generation = true
"#,
        );

        let removed = remove_server(&repo, "alpha").expect("删除 MCP 服务");
        let text = read_config(&repo);

        assert_eq!(removed.total, 0);
        assert!(!text.contains("[mcp_servers.alpha]"));
        assert!(text.contains("# 顶层注释"));
        assert!(text.contains("# 其它配置注释"));
        assert!(text.contains("[features]"));
    }

    fn repo_with_config(config: &str) -> Repository {
        let codex_home = PathBuf::from("C:/codex-home");
        let paths = RepositoryPaths::from_codex_home(codex_home.clone());
        let file_system =
            FakeFileSystem::default().with_file(codex_home.join("config.toml"), config.to_string());
        Repository::with_paths_and_file_system(paths, file_system)
    }

    fn read_config(repo: &Repository) -> String {
        repo.fs()
            .read_to_string(&repo.paths().config_path)
            .expect("读取 config.toml")
    }

    fn sample_server(name: &str) -> McpServerSummary {
        McpServerSummary {
            name: name.to_string(),
            transport: McpTransport::Stdio,
            enabled: true,
            source_path: String::new(),
            command: Some("node".to_string()),
            args: vec!["server.js".to_string()],
            url: None,
            headers: HashMap::new(),
            environment: HashMap::new(),
        }
    }
}
