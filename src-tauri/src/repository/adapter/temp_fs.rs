use super::real_fs::RealFileSystem;
use super::{FileSystemAdapter, FileSystemEntry};
use crate::core::error::CoreError;
use std::ffi::OsStr;
use std::path::Component;
use std::path::{Path, PathBuf};

#[derive(Debug, Clone)]
/// 供 repository 测试落盘到临时根目录，隔离真实用户路径并复用真实 FS 行为。
pub struct TempFileSystem {
    pub root: PathBuf,
    inner: RealFileSystem,
}

impl TempFileSystem {
    pub fn new(label: &str) -> Self {
        let root = std::env::temp_dir().join(format!("open-aimami-{label}-{}", std::process::id()));
        Self {
            root,
            inner: RealFileSystem,
        }
    }

    pub fn codex_home(&self) -> PathBuf {
        self.root.join("codex-home")
    }

    fn storage_path(&self, path: &Path) -> PathBuf {
        let mut storage = self.root.join("fs");
        for component in path.components() {
            match component {
                Component::Prefix(prefix) => {
                    storage.push(
                        prefix
                            .as_os_str()
                            .to_string_lossy()
                            .replace(':', "_")
                            .replace('\\', "_")
                            .replace('/', "_"),
                    );
                }
                Component::RootDir | Component::CurDir => {}
                Component::ParentDir => storage.push("__parent"),
                Component::Normal(part) => storage.push(part),
            }
        }
        storage
    }

    fn logical_child(&self, base: &Path, storage_entry: FileSystemEntry) -> FileSystemEntry {
        let file_name = storage_entry
            .path
            .file_name()
            .unwrap_or_else(|| OsStr::new(""));
        FileSystemEntry {
            path: base.join(file_name),
            is_dir: storage_entry.is_dir,
        }
    }
}

impl FileSystemAdapter for TempFileSystem {
    fn exists(&self, path: &Path) -> bool {
        self.inner.exists(&self.storage_path(path))
    }

    fn read_to_string(&self, path: &Path) -> Result<String, CoreError> {
        self.inner.read_to_string(&self.storage_path(path))
    }

    fn write_string(&self, path: &Path, content: &str) -> Result<(), CoreError> {
        self.inner.write_string(&self.storage_path(path), content)
    }

    fn create_dir_all(&self, path: &Path) -> Result<(), CoreError> {
        self.inner.create_dir_all(&self.storage_path(path))
    }

    fn remove_file(&self, path: &Path) -> Result<(), CoreError> {
        self.inner.remove_file(&self.storage_path(path))
    }

    fn remove_dir_all(&self, path: &Path) -> Result<(), CoreError> {
        self.inner.remove_dir_all(&self.storage_path(path))
    }

    fn copy_file(&self, from: &Path, to: &Path) -> Result<u64, CoreError> {
        self.inner
            .copy_file(&self.storage_path(from), &self.storage_path(to))
    }

    fn rename(&self, from: &Path, to: &Path) -> Result<(), CoreError> {
        self.inner
            .rename(&self.storage_path(from), &self.storage_path(to))
    }

    fn read_dir(&self, path: &Path) -> Result<Vec<FileSystemEntry>, CoreError> {
        self.inner
            .read_dir(&self.storage_path(path))
            .map(|entries| {
                entries
                    .into_iter()
                    .map(|entry| self.logical_child(path, entry))
                    .collect()
            })
    }

    fn modified_unix_seconds(&self, path: &Path) -> Option<i64> {
        self.inner.modified_unix_seconds(&self.storage_path(path))
    }

    fn created_unix_seconds(&self, path: &Path) -> Option<i64> {
        self.inner.created_unix_seconds(&self.storage_path(path))
    }

    fn file_size_bytes(&self, path: &Path) -> Result<u64, CoreError> {
        self.inner.file_size_bytes(&self.storage_path(path))
    }
}
