use crate::contracts::{McpServerSummary, McpTransport};
use crate::core::error::CoreError;
use crate::repository::{adapter::FileSystemAdapter, Repository};
use std::collections::HashMap;
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

#[derive(Debug, Clone, Copy)]
struct TextRange {
    start: usize,
    end: usize,
}

#[derive(Debug, Clone)]
struct TableHeader {
    range: TextRange,
    path: Vec<String>,
}

/// MCP repository 只托管 config.toml 中公开的 MCP 服务表块，不启动服务也不探测网络。
pub fn load_server_snapshot(repo: &Repository) -> Result<McpServerRepositorySnapshot, CoreError> {
    let config_path = ensure_config_path_allowed(repo)?;
    let items = load_servers_from_path(repo.fs(), config_path)?;
    Ok(McpServerRepositorySnapshot {
        items,
        source_path: config_path.display().to_string(),
    })
}

/// 写入单个 MCP 服务托管块，并尽量保留其它 config.toml 注释和表块原位。
pub fn upsert_server(
    repo: &Repository,
    server: &McpServerSummary,
) -> Result<McpServerRepositoryMutation, CoreError> {
    let config_path = ensure_config_path_allowed(repo)?;
    let source_path = config_path.display().to_string();
    let server = McpServerSummary {
        source_path: source_path.clone(),
        ..server.clone()
    };
    let text = read_optional_config_text(repo.fs(), config_path)?;
    let root = upsert_config_value(&text, &server)?;
    let block = render_server_block(&server)?;
    let next_text = upsert_server_block_preserving_comments(&text, &server.name, &block);
    let next_text = ensure_rendered_text_is_valid(next_text, &root)?;
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
    let root = remove_config_value(&text, name)?;
    let next_text = remove_server_block_preserving_comments(&text, name);
    let next_text = ensure_rendered_text_is_valid(next_text, &root)?;
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
) -> Result<Vec<McpServerSummary>, CoreError> {
    if !fs.exists(config_path) {
        return Ok(Vec::new());
    }

    let text = fs.read_to_string(config_path)?;
    load_servers_from_text(&text, &config_path.display().to_string())
}

fn load_servers_from_text(
    text: &str,
    source_path: &str,
) -> Result<Vec<McpServerSummary>, CoreError> {
    if text.trim().is_empty() {
        return Ok(Vec::new());
    }

    let value: toml::Value = text.parse()?;
    let Some(servers_table) = value.get("mcp_servers").and_then(toml::Value::as_table) else {
        return Ok(Vec::new());
    };

    let mut servers = Vec::new();
    for (name, value) in servers_table {
        let Some(table) = value.as_table() else {
            continue;
        };
        let transport = table
            .get("transport")
            .and_then(toml::Value::as_str)
            .map(McpTransport::from_input)
            .unwrap_or(McpTransport::Stdio);
        let enabled = table
            .get("enabled")
            .and_then(toml::Value::as_bool)
            .unwrap_or(true);
        let command = table
            .get("command")
            .and_then(toml::Value::as_str)
            .map(ToString::to_string);
        let args = table
            .get("args")
            .and_then(toml::Value::as_array)
            .map(|items| {
                items
                    .iter()
                    .filter_map(toml::Value::as_str)
                    .map(ToString::to_string)
                    .collect()
            })
            .unwrap_or_default();
        let url = table
            .get("url")
            .and_then(toml::Value::as_str)
            .map(ToString::to_string);
        let headers = read_string_table(table.get("headers"));
        let environment = read_string_table(table.get("env"));

        servers.push(McpServerSummary {
            name: name.clone(),
            transport,
            enabled,
            source_path: source_path.to_string(),
            command,
            args,
            url,
            headers,
            environment,
        });
    }

    servers.sort_by(|left, right| left.name.to_lowercase().cmp(&right.name.to_lowercase()));
    Ok(servers)
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

fn upsert_config_value(text: &str, server: &McpServerSummary) -> Result<toml::Value, CoreError> {
    let mut root = load_config_value(text)?;
    ensure_table(&mut root);

    let root_table = root
        .as_table_mut()
        .ok_or_else(|| CoreError::InvalidInput("config.toml 根节点不是表".to_string()))?;
    let servers = root_table
        .entry("mcp_servers".to_string())
        .or_insert_with(|| toml::Value::Table(toml::map::Map::new()));
    let servers_table = servers
        .as_table_mut()
        .ok_or_else(|| CoreError::InvalidInput("mcp_servers 不是表".to_string()))?;

    servers_table.insert(server.name.clone(), render_server_table(server));
    Ok(root)
}

fn remove_config_value(text: &str, name: &str) -> Result<toml::Value, CoreError> {
    let mut root = load_config_value(text)?;
    let Some(root_table) = root.as_table_mut() else {
        return Err(CoreError::NotFound(format!("MCP 服务不存在：{name}")));
    };
    let Some(servers) = root_table.get_mut("mcp_servers") else {
        return Err(CoreError::NotFound(format!("MCP 服务不存在：{name}")));
    };
    let Some(servers_table) = servers.as_table_mut() else {
        return Err(CoreError::NotFound(format!("MCP 服务不存在：{name}")));
    };

    if servers_table.remove(name).is_none() {
        return Err(CoreError::NotFound(format!("MCP 服务不存在：{name}")));
    }

    Ok(root)
}

fn load_config_value(text: &str) -> Result<toml::Value, CoreError> {
    if text.trim().is_empty() {
        return Ok(toml::Value::Table(toml::map::Map::new()));
    }
    Ok(text.parse()?)
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

fn ensure_rendered_text_is_valid(
    rendered: String,
    fallback_value: &toml::Value,
) -> Result<String, CoreError> {
    if rendered.trim().is_empty() {
        return Ok(rendered);
    }

    match rendered.parse::<toml::Value>() {
        Ok(_) => Ok(rendered),
        Err(_) => toml::to_string_pretty(fallback_value).map_err(CoreError::from),
    }
}

fn upsert_server_block_preserving_comments(text: &str, name: &str, block: &str) -> String {
    if let Some(range) = find_server_table_range(text, name) {
        return replace_range_with_block(text, range, block);
    }

    append_block(text, block)
}

fn remove_server_block_preserving_comments(text: &str, name: &str) -> String {
    if let Some(range) = find_server_table_range(text, name) {
        return remove_range(text, range);
    }

    text.to_string()
}

fn find_server_table_range(text: &str, name: &str) -> Option<TextRange> {
    let headers = table_headers(text);
    let mut start = None;
    let mut end = text.len();

    for (index, header) in headers.iter().enumerate() {
        if !is_mcp_server_path(&header.path, name) {
            continue;
        }

        start = Some(header.range.start);
        for next in headers.iter().skip(index + 1) {
            if !is_mcp_server_path(&next.path, name) {
                end = next.range.start;
                break;
            }
        }
        break;
    }

    start.map(|start| TextRange { start, end })
}

fn table_headers(text: &str) -> Vec<TableHeader> {
    let mut headers = Vec::new();
    for range in line_ranges(text) {
        let line = &text[range.start..range.end];
        if let Some(path) = parse_table_header_path(line) {
            headers.push(TableHeader { range, path });
        }
    }
    headers
}

fn line_ranges(text: &str) -> Vec<TextRange> {
    if text.is_empty() {
        return Vec::new();
    }

    let mut ranges = Vec::new();
    let mut start = 0;
    for (index, byte) in text.bytes().enumerate() {
        if byte == b'\n' {
            ranges.push(TextRange {
                start,
                end: index + 1,
            });
            start = index + 1;
        }
    }

    if start < text.len() {
        ranges.push(TextRange {
            start,
            end: text.len(),
        });
    }

    ranges
}

fn parse_table_header_path(line: &str) -> Option<Vec<String>> {
    let trimmed = line.trim_start();
    if !trimmed.starts_with('[') || trimmed.starts_with("[[") {
        return None;
    }

    let end = find_header_end(trimmed)?;
    let inner = trimmed.get(1..end)?.trim();
    if inner.is_empty() {
        return None;
    }

    parse_dotted_key(inner)
}

fn find_header_end(value: &str) -> Option<usize> {
    let mut quote = None;
    let mut escaped = false;

    for (index, character) in value.char_indices().skip(1) {
        if let Some(current_quote) = quote {
            if current_quote == '"' && escaped {
                escaped = false;
                continue;
            }
            if current_quote == '"' && character == '\\' {
                escaped = true;
                continue;
            }
            if character == current_quote {
                quote = None;
            }
            continue;
        }

        match character {
            '"' | '\'' => quote = Some(character),
            ']' => return Some(index),
            _ => {}
        }
    }

    None
}

fn parse_dotted_key(value: &str) -> Option<Vec<String>> {
    let mut segments = Vec::new();
    let mut start = 0;
    let mut quote = None;
    let mut escaped = false;

    for (index, character) in value.char_indices() {
        if let Some(current_quote) = quote {
            if current_quote == '"' && escaped {
                escaped = false;
                continue;
            }
            if current_quote == '"' && character == '\\' {
                escaped = true;
                continue;
            }
            if character == current_quote {
                quote = None;
            }
            continue;
        }

        match character {
            '"' | '\'' => quote = Some(character),
            '.' => {
                segments.push(parse_key_segment(&value[start..index])?);
                start = index + character.len_utf8();
            }
            _ => {}
        }
    }

    segments.push(parse_key_segment(&value[start..])?);
    Some(segments)
}

fn parse_key_segment(value: &str) -> Option<String> {
    let segment = value.trim();
    if segment.is_empty() {
        return None;
    }

    if segment.starts_with('"') || segment.starts_with('\'') {
        let probe = format!("key = {segment}");
        let parsed = probe.parse::<toml::Value>().ok()?;
        return parsed
            .get("key")
            .and_then(toml::Value::as_str)
            .map(ToString::to_string);
    }

    Some(segment.to_string())
}

fn is_mcp_server_path(path: &[String], name: &str) -> bool {
    path.len() >= 2 && path[0] == "mcp_servers" && path[1] == name
}

fn replace_range_with_block(text: &str, range: TextRange, block: &str) -> String {
    let mut output = String::new();
    output.push_str(&trim_trailing_blank_lines(&text[..range.start]));
    output.push_str(&ensure_double_newline_before_block(&output));
    output.push_str(block.trim_end());
    output.push('\n');
    output.push_str(&ensure_single_newline_before_tail(&text[range.end..]));
    output
}

fn remove_range(text: &str, range: TextRange) -> String {
    let mut output = String::new();
    output.push_str(&trim_trailing_blank_lines(&text[..range.start]));
    let tail = text[range.end..].trim_start_matches(['\r', '\n']);
    if !output.trim().is_empty() && !tail.trim().is_empty() {
        output.push_str("\n\n");
    }
    output.push_str(tail);
    output
}

fn append_block(text: &str, block: &str) -> String {
    let mut output = trim_trailing_blank_lines(text);
    output.push_str(&ensure_double_newline_before_block(&output));
    output.push_str(block.trim_end());
    output.push('\n');
    output
}

fn ensure_double_newline_before_block(prefix: &str) -> &'static str {
    if prefix.trim().is_empty() {
        ""
    } else {
        "\n\n"
    }
}

fn ensure_single_newline_before_tail(tail: &str) -> String {
    if tail.trim().is_empty() {
        String::new()
    } else {
        let trimmed = tail.trim_start_matches(['\r', '\n']);
        format!("\n{trimmed}")
    }
}

fn trim_trailing_blank_lines(value: &str) -> String {
    value.trim_end_matches(['\r', '\n']).to_string()
}

fn ensure_table(value: &mut toml::Value) {
    if value.as_table().is_none() {
        *value = toml::Value::Table(toml::map::Map::new());
    }
}

fn render_server_block(server: &McpServerSummary) -> Result<String, CoreError> {
    let mut root = toml::map::Map::new();
    let mut servers = toml::map::Map::new();
    servers.insert(server.name.clone(), render_server_table(server));
    root.insert("mcp_servers".to_string(), toml::Value::Table(servers));
    toml::to_string_pretty(&toml::Value::Table(root)).map_err(CoreError::from)
}

fn render_server_table(server: &McpServerSummary) -> toml::Value {
    let mut table = toml::map::Map::new();
    table.insert("enabled".to_string(), toml::Value::Boolean(server.enabled));
    table.insert(
        "transport".to_string(),
        toml::Value::String(server.transport.as_toml_value().to_string()),
    );

    if let Some(command) = non_empty(server.command.as_deref()) {
        table.insert(
            "command".to_string(),
            toml::Value::String(command.to_string()),
        );
    }
    if !server.args.is_empty() {
        table.insert(
            "args".to_string(),
            toml::Value::Array(
                server
                    .args
                    .iter()
                    .map(|item| toml::Value::String(item.clone()))
                    .collect(),
            ),
        );
    }
    if let Some(url) = non_empty(server.url.as_deref()) {
        table.insert("url".to_string(), toml::Value::String(url.to_string()));
    }
    if !server.headers.is_empty() {
        table.insert("headers".to_string(), render_string_table(&server.headers));
    }
    if !server.environment.is_empty() {
        table.insert("env".to_string(), render_string_table(&server.environment));
    }

    toml::Value::Table(table)
}

fn render_string_table(values: &HashMap<String, String>) -> toml::Value {
    let mut table = toml::map::Map::new();
    for (key, value) in values {
        table.insert(key.clone(), toml::Value::String(value.clone()));
    }
    toml::Value::Table(table)
}

fn read_string_table(value: Option<&toml::Value>) -> HashMap<String, String> {
    value
        .and_then(toml::Value::as_table)
        .map(|table| {
            table
                .iter()
                .filter_map(|(key, value)| {
                    value.as_str().map(|value| (key.clone(), value.to_string()))
                })
                .collect()
        })
        .unwrap_or_default()
}

fn non_empty(value: Option<&str>) -> Option<&str> {
    value.map(str::trim).filter(|value| !value.is_empty())
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::repository::{adapter::fake_fs::FakeFileSystem, paths::RepositoryPaths};
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
