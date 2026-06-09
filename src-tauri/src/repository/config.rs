use crate::core::error::CoreError;
use crate::repository::Repository;

pub(crate) struct ConfigRepository;

pub(crate) trait ConfigRepositoryBoundary {}

impl ConfigRepositoryBoundary for ConfigRepository {}

// image compatibility 只读写 config.toml 的 [features].image_generation 字段。
pub fn get_image_compat(repo: &Repository) -> Result<bool, CoreError> {
    let path = &repo.paths().config_path;
    if !repo.fs().exists(path) {
        return Ok(false);
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
    let next = write_image_compat_to_toml(&current, enabled);
    repo.fs().write_string(path, &next)?;
    Ok(read_image_compat_from_toml(&next))
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
        return strip_toml_comment(value).trim() == "false";
    }

    false
}

fn write_image_compat_to_toml(content: &str, enabled: bool) -> String {
    let target_line = format!(
        "image_generation = {}",
        if enabled { "false" } else { "true" },
    );

    if content.trim().is_empty() {
        return format!("[features]\n{target_line}\n");
    }

    let mut output = Vec::new();
    let mut in_features = false;
    let mut features_seen = false;
    let mut field_written = false;

    for raw_line in content.lines() {
        let line = raw_line.trim();
        if line.starts_with('[') {
            if in_features && !field_written {
                output.push(target_line.clone());
                field_written = true;
            }
            in_features = line == "[features]";
            features_seen |= in_features;
        }

        if in_features && line.starts_with("image_generation") {
            output.push(target_line.clone());
            field_written = true;
        } else {
            output.push(raw_line.to_string());
        }
    }

    if features_seen {
        if in_features && !field_written {
            output.push(target_line);
        }
    } else {
        output.push(String::new());
        output.push("[features]".to_string());
        output.push(target_line);
    }

    let mut next = output.join("\n");
    next.push('\n');
    next
}

fn strip_toml_comment(value: &str) -> &str {
    value.split_once('#').map(|(left, _)| left).unwrap_or(value)
}
