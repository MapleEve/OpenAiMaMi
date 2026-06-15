#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RelayRouterConfigAnalysis {
    pub config_toml_has_router: bool,
    pub config_toml_has_catalog: bool,
    pub managed_block_exists: bool,
    pub codex_provider_count: i32,
    pub user_top_level_profile: Option<String>,
    pub config_stale_reason: Option<String>,
}

/// router config block 的解析归 core，repository 只提供文件内容和存在性事实。
pub fn analyze_router_config(
    config: Option<&str>,
    config_exists: bool,
    catalog_exists: bool,
) -> RelayRouterConfigAnalysis {
    let config_toml_has_router = config.map(config_has_router).unwrap_or(false);
    let config_toml_has_catalog = config.map(config_has_catalog).unwrap_or(false);

    RelayRouterConfigAnalysis {
        config_toml_has_router,
        config_toml_has_catalog,
        managed_block_exists: config.map(config_has_managed_block).unwrap_or(false),
        codex_provider_count: config.map(count_model_providers).unwrap_or(0),
        user_top_level_profile: config.and_then(top_level_profile),
        config_stale_reason: config_stale_reason(
            config_exists,
            catalog_exists,
            config_toml_has_router,
            config_toml_has_catalog,
        ),
    }
}

/// router config block 的渲染归 core，调用方负责把返回内容写入可替换文件系统。
pub fn render_managed_router_config(content: &str, catalog_path: &str) -> String {
    append_managed_router_block(&strip_managed_router_config(content), catalog_path)
}

pub fn strip_managed_router_config(content: &str) -> String {
    let line_ending = detect_line_ending(content);
    let mut output = Vec::new();
    let mut skipping_managed_block = false;

    for raw_line in content.lines() {
        let line = raw_line.trim();
        if starts_managed_relay_block(line) {
            skipping_managed_block = true;
            continue;
        }
        if skipping_managed_block {
            if ends_managed_relay_block(line) {
                skipping_managed_block = false;
            }
            continue;
        }
        if is_router_top_level_key(line) {
            continue;
        }
        output.push(raw_line.trim_end_matches('\r').to_string());
    }

    let mut next = output.join(line_ending);
    if !next.is_empty() {
        next.push_str(line_ending);
    }
    next
}

fn config_has_router(config: &str) -> bool {
    config.lines().any(|line| {
        let line = line.trim();
        line.contains("model_provider") || line.contains("model_provider_router")
    })
}

fn config_has_catalog(config: &str) -> bool {
    config
        .lines()
        .any(|line| line.trim().starts_with("model_catalog_json"))
}

fn config_has_managed_block(config: &str) -> bool {
    config.contains("# >>> aimami-relay managed start")
        || config.contains("# >>> aimami-relay codex-router top start")
}

fn append_managed_router_block(content: &str, catalog_path: &str) -> String {
    let line_ending = detect_line_ending(content);
    let mut next = content.trim_end_matches(['\r', '\n']).to_string();
    if !next.is_empty() {
        next.push_str(line_ending);
        next.push_str(line_ending);
    }
    next.push_str("# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)");
    next.push_str(line_ending);
    next.push_str("model_provider = \"aimami\"");
    next.push_str(line_ending);
    next.push_str(&format!(
        "model_catalog_json = {}",
        toml_string_literal(catalog_path)
    ));
    next.push_str(line_ending);
    next.push_str("# <<< aimami-relay codex-router top end");
    next.push_str(line_ending);
    next
}

fn starts_managed_relay_block(line: &str) -> bool {
    line.contains("# >>> aimami-relay") && line.contains("start")
}

fn ends_managed_relay_block(line: &str) -> bool {
    line.contains("# <<< aimami-relay") && line.contains("end")
}

fn is_router_top_level_key(line: &str) -> bool {
    ["model_provider", "model_catalog_json"].iter().any(|key| {
        line.strip_prefix(key)
            .map(|rest| rest.trim_start().starts_with('='))
            .unwrap_or(false)
    })
}

fn detect_line_ending(content: &str) -> &'static str {
    if content.contains("\r\n") {
        "\r\n"
    } else {
        "\n"
    }
}

fn toml_string_literal(value: &str) -> String {
    format!("\"{}\"", value.replace('\\', "\\\\").replace('"', "\\\""))
}

fn count_model_providers(config: &str) -> i32 {
    config
        .lines()
        .filter(|line| {
            let line = line.trim();
            line.starts_with("[model_providers.") || line.starts_with("[model_providers\"")
        })
        .count() as i32
}

fn top_level_profile(config: &str) -> Option<String> {
    config.lines().find_map(|line| {
        let line = line.trim();
        let value = line.strip_prefix("profile")?.trim_start();
        let value = value.strip_prefix('=')?.trim();
        Some(value.trim_matches('"').to_string()).filter(|item| !item.is_empty())
    })
}

fn config_stale_reason(
    config_exists: bool,
    catalog_exists: bool,
    has_router: bool,
    has_catalog: bool,
) -> Option<String> {
    if !config_exists {
        return Some("config_toml_missing".to_string());
    }
    if !has_router {
        return Some("router_missing".to_string());
    }
    if !has_catalog {
        return Some("catalog_key_missing".to_string());
    }
    if !catalog_exists {
        return Some("catalog_file_missing".to_string());
    }
    None
}
