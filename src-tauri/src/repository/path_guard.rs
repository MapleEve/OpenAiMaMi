use crate::core::error::CoreError;
use std::path::{Component, Path, PathBuf};

/// Repository 路径安全门面，只做词法规范化和根目录 containment 校验，不触碰真实文件系统。
pub(crate) struct PathGuard;

pub(crate) trait PathGuardBoundary {}

impl PathGuardBoundary for PathGuard {}

impl PathGuard {
    pub(crate) fn reject_parent_components(path: &Path, label: &str) -> Result<(), CoreError> {
        if path
            .components()
            .any(|component| matches!(component, Component::ParentDir))
        {
            return Err(invalid_path(label, "不得包含上级目录片段"));
        }

        Ok(())
    }

    pub(crate) fn normalize_trusted(path: &Path, label: &str) -> Result<PathBuf, CoreError> {
        let mut normalized = PathBuf::new();

        for component in path.components() {
            match component {
                Component::CurDir => {}
                Component::ParentDir => return Err(invalid_path(label, "不得包含上级目录片段")),
                Component::Prefix(prefix) => normalized.push(prefix.as_os_str()),
                Component::RootDir => normalized.push(component.as_os_str()),
                Component::Normal(part) => normalized.push(part),
            }
        }

        Ok(normalized)
    }

    pub(crate) fn safe_relative(path: impl AsRef<Path>, label: &str) -> Result<PathBuf, CoreError> {
        let path = path.as_ref();
        let mut normalized = PathBuf::new();

        for component in path.components() {
            match component {
                Component::CurDir => {}
                Component::Normal(part) => normalized.push(part),
                Component::ParentDir => return Err(invalid_path(label, "不得包含上级目录片段")),
                Component::Prefix(_) | Component::RootDir => {
                    return Err(invalid_path(label, "不得使用绝对路径"))
                }
            }
        }

        if normalized.as_os_str().is_empty() {
            return Err(invalid_path(label, "不得为空"));
        }

        Ok(normalized)
    }

    pub(crate) fn safe_single_component(
        path: impl AsRef<Path>,
        label: &str,
    ) -> Result<PathBuf, CoreError> {
        let relative = Self::safe_relative(path, label)?;
        let mut components = relative.components();
        let first = components.next();

        if !matches!(first, Some(Component::Normal(_))) || components.next().is_some() {
            return Err(invalid_path(label, "只能是单个路径片段"));
        }

        Ok(relative)
    }

    pub(crate) fn safe_child(
        root: &Path,
        relative: impl AsRef<Path>,
        label: &str,
    ) -> Result<PathBuf, CoreError> {
        let root = Self::normalize_trusted(root, label)?;
        let relative = Self::safe_relative(relative, label)?;
        let candidate = Self::normalize_trusted(&root.join(relative), label)?;

        if !candidate.starts_with(&root) {
            return Err(invalid_path(label, "必须位于允许的根目录内"));
        }

        Ok(candidate)
    }

    pub(crate) fn ensure_descendant(
        root: &Path,
        path: &Path,
        label: &str,
    ) -> Result<PathBuf, CoreError> {
        let root = Self::normalize_trusted(root, label)?;
        let path = Self::normalize_trusted(path, label)?;

        if path == root || path.starts_with(&root) {
            return Ok(path);
        }

        Err(invalid_path(label, "必须位于允许的根目录内"))
    }

    pub(crate) fn relative_to_root(
        root: &Path,
        path: &Path,
        label: &str,
    ) -> Result<PathBuf, CoreError> {
        let root = Self::normalize_trusted(root, label)?;
        let path = Self::ensure_descendant(&root, path, label)?;
        let relative = path
            .strip_prefix(&root)
            .map(Path::to_path_buf)
            .map_err(|_| invalid_path(label, "必须位于允许的根目录内"))?;

        if relative.as_os_str().is_empty() {
            return Err(invalid_path(label, "不得指向根目录本身"));
        }

        Ok(relative)
    }
}

fn invalid_path(label: &str, reason: &str) -> CoreError {
    CoreError::InvalidInput(format!("{label}路径不安全：{reason}"))
}
