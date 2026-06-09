use crate::core::error::CoreError;
use crate::repository::Repository;

pub(crate) struct ConfigRepository;

pub(crate) trait ConfigRepositoryBoundary {}

impl ConfigRepositoryBoundary for ConfigRepository {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ResetCodexConfigResult {
    pub config_cleared: bool,
}

// image compatibility 只读写 config.toml 的 [features].image_generation 字段。
pub fn get_image_compat(repo: &Repository) -> Result<bool, CoreError> {
    let path = &repo.paths().config_path;
    if !repo.fs().exists(path) {
        return Ok(true);
    }

    let content = repo.fs().read_to_string(path)?;
    Ok(read_image_compat_from_toml(&content))
}

pub fn set_image_compat(repo: &Repository, enabled: bool) -> Result<bool, CoreError> {
    let path = &repo.paths().config_path;
    let current = if repo.fs().exists(path) {
        repo.fs().read_to_string(path)?
    } else {
        String::new()
    };
    if current.is_empty() && enabled {
        return Ok(true);
    }

    let next = write_image_compat_to_toml(&current, enabled);
    repo.fs().write_string(path, &next)?;
    Ok(read_image_compat_from_toml(&next))
}

pub fn reset_codex_config(repo: &Repository) -> Result<ResetCodexConfigResult, CoreError> {
    let mut config_cleared = false;
    let config_path = &repo.paths().config_path;

    if repo.fs().exists(config_path) {
        let current = repo.fs().read_to_string(config_path)?;
        let next = strip_codex_config(&current);
        if next != current {
            repo.fs().write_string(config_path, &next)?;
            config_cleared = true;
        }
    }

    let catalog_path = repo.paths().codex_home.join("codex_router_catalog.json");
    if repo.fs().exists(&catalog_path) {
        repo.fs().remove_file(&catalog_path)?;
        config_cleared = true;
    }

    Ok(ResetCodexConfigResult { config_cleared })
}

fn read_image_compat_from_toml(content: &str) -> bool {
    let mut in_features = false;

    for raw_line in content.lines() {
        let line = raw_line.trim();
        if line.starts_with('[') {
            in_features = line == "[features]";
            continue;
        }

        if !in_features || !line.starts_with("image_generation") {
            continue;
        }

        let Some((_, value)) = line.split_once('=') else {
            continue;
        };
        return strip_toml_comment(value).trim() != "false";
    }

    true
}

fn write_image_compat_to_toml(content: &str, enabled: bool) -> String {
    let line_ending = detect_line_ending(content);
    let target_line = "image_generation = false";

    if content.trim().is_empty() {
        return if enabled {
            String::new()
        } else {
            format!("[features]{line_ending}{target_line}{line_ending}")
        };
    }

    let mut output = Vec::new();
    let mut in_features = false;
    let mut features_seen = false;
    let mut field_written = false;

    for raw_line in content.lines() {
        let line = raw_line.trim();
        if line.starts_with('[') {
            if in_features && !enabled && !field_written {
                output.push(target_line.to_string());
                field_written = true;
            }
            in_features = line == "[features]";
            features_seen |= in_features;
        }

        if in_features && line.starts_with("image_generation") {
            if !enabled && !field_written {
                output.push(target_line.to_string());
            }
            field_written = true;
        } else {
            output.push(raw_line.trim_end_matches('\r').to_string());
        }
    }

    if features_seen {
        if in_features && !enabled && !field_written {
            output.push(target_line.to_string());
        }
    } else if !enabled {
        output.push(String::new());
        output.push("[features]".to_string());
        output.push(target_line.to_string());
    }

    let mut next = output.join(line_ending);
    if !next.is_empty() {
        next.push_str(line_ending);
    }
    next
}

fn strip_codex_config(content: &str) -> String {
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
        if is_codex_reset_key(line) {
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

fn starts_managed_relay_block(line: &str) -> bool {
    line.contains("# >>> aimami-relay") && line.contains("start")
}

fn ends_managed_relay_block(line: &str) -> bool {
    line.contains("# <<< aimami-relay") && line.contains("end")
}

fn is_codex_reset_key(line: &str) -> bool {
    [
        "profile",
        "model_provider",
        "model_catalog_json",
        "open_ai_base_url",
    ]
    .iter()
    .any(|key| {
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

fn strip_toml_comment(value: &str) -> &str {
    value.split_once('#').map(|(left, _)| left).unwrap_or(value)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::repository::adapter::fake_fs::FakeFileSystem;
    use crate::repository::paths::RepositoryPaths;
    use std::path::PathBuf;

    #[test]
    fn image_compat_false_field_disables_and_true_removes_field() {
        let codex_home = PathBuf::from("codex");
        let repo = Repository::with_paths_and_file_system(
            RepositoryPaths::from_codex_home(codex_home.clone()),
            FakeFileSystem::default().with_file(
                codex_home.join("config.toml"),
                "[features]\nimage_generation = false\n".to_string(),
            ),
        );

        assert!(!get_image_compat(&repo).expect("读取 image compatibility"));
        assert!(set_image_compat(&repo, true).expect("开启 image compatibility"));

        let content = repo
            .fs()
            .read_to_string(&repo.paths().config_path)
            .expect("读取 config.toml");
        assert!(!content.contains("image_generation"));
    }

    #[test]
    fn image_compat_false_inserts_feature_field() {
        let codex_home = PathBuf::from("codex");
        let repo = Repository::with_paths_and_file_system(
            RepositoryPaths::from_codex_home(codex_home.clone()),
            FakeFileSystem::default().with_file(codex_home.join("config.toml"), String::new()),
        );

        assert!(!set_image_compat(&repo, false).expect("关闭 image compatibility"));

        let content = repo
            .fs()
            .read_to_string(&repo.paths().config_path)
            .expect("读取 config.toml");
        assert!(content.contains("[features]"));
        assert!(content.contains("image_generation = false"));
    }

    #[test]
    fn reset_codex_config_strips_managed_blocks_and_catalog() {
        let codex_home = PathBuf::from("codex");
        let repo = Repository::with_paths_and_file_system(
            RepositoryPaths::from_codex_home(codex_home.clone()),
            FakeFileSystem::default()
                .with_file(
                    codex_home.join("config.toml"),
                    [
                        "profile = \"aimami\"",
                        "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)",
                        "model_provider = \"aimami\"",
                        "# <<< aimami-relay codex-router top end",
                        "model = \"gpt-5\"",
                        "open_ai_base_url = \"http://127.0.0.1\"",
                    ]
                    .join("\n"),
                )
                .with_file(
                    codex_home.join("codex_router_catalog.json"),
                    "{\"aimami\":true}".to_string(),
                ),
        );

        let result = reset_codex_config(&repo).expect("重置外部配置");
        assert!(result.config_cleared);

        let content = repo
            .fs()
            .read_to_string(&repo.paths().config_path)
            .expect("读取 config.toml");
        assert_eq!(content, "model = \"gpt-5\"\n");
        assert!(!repo
            .fs()
            .exists(&codex_home.join("codex_router_catalog.json")));
    }
}
