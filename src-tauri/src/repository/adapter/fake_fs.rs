use super::{FileSystemAdapter, FileSystemEntry};
use crate::core::error::CoreError;
use std::collections::{HashMap, HashSet};
use std::path::{Path, PathBuf};
use std::sync::{Arc, RwLock};

#[derive(Debug, Clone, Default)]
/// 供 repository 测试替换真实文件系统，只在内存中模拟窄读写契约。
pub struct FakeFileSystem {
    files: Arc<RwLock<HashMap<PathBuf, String>>>,
    dirs: Arc<RwLock<HashSet<PathBuf>>>,
}

impl FakeFileSystem {
    pub fn with_file(self, path: PathBuf, content: String) -> Self {
        if let Ok(mut dirs) = self.dirs.write() {
            insert_parent_dirs(&mut dirs, &path);
        }
        if let Ok(mut files) = self.files.write() {
            files.insert(path, content);
        }
        self
    }
}

impl FileSystemAdapter for FakeFileSystem {
    fn exists(&self, path: &Path) -> bool {
        let Ok(dirs) = self.dirs.read() else {
            return false;
        };
        let Ok(files) = self.files.read() else {
            return false;
        };

        files.contains_key(path)
            || dirs.contains(path)
            || files.keys().any(|item| item.starts_with(path))
            || dirs.iter().any(|item| item.starts_with(path))
    }

    fn read_to_string(&self, path: &Path) -> Result<String, CoreError> {
        self.files
            .read()
            .map_err(lock_error)?
            .get(path)
            .cloned()
            .ok_or_else(|| CoreError::NotFound(path.display().to_string()))
    }

    fn write_string(&self, path: &Path, content: &str) -> Result<(), CoreError> {
        self.create_dir_all(path.parent().unwrap_or_else(|| Path::new("")))?;
        self.files
            .write()
            .map_err(lock_error)?
            .insert(path.to_path_buf(), content.to_string());
        Ok(())
    }

    fn create_dir_all(&self, path: &Path) -> Result<(), CoreError> {
        let mut dirs = self.dirs.write().map_err(lock_error)?;
        insert_dir_and_parents(&mut dirs, path);
        Ok(())
    }

    fn remove_file(&self, path: &Path) -> Result<(), CoreError> {
        self.files.write().map_err(lock_error)?.remove(path);
        Ok(())
    }

    fn remove_dir_all(&self, path: &Path) -> Result<(), CoreError> {
        self.dirs
            .write()
            .map_err(lock_error)?
            .retain(|item| !item.starts_with(path));
        self.files
            .write()
            .map_err(lock_error)?
            .retain(|item, _| !item.starts_with(path));
        Ok(())
    }

    fn copy_file(&self, from: &Path, to: &Path) -> Result<u64, CoreError> {
        let content = self.read_to_string(from)?;
        let bytes = content.len() as u64;
        self.write_string(to, &content)?;
        Ok(bytes)
    }

    fn rename(&self, from: &Path, to: &Path) -> Result<(), CoreError> {
        let file_content = self.files.write().map_err(lock_error)?.remove(from);
        if let Some(content) = file_content {
            self.write_string(to, &content)?;
            return Ok(());
        }

        let mut dirs = self.dirs.write().map_err(lock_error)?;
        let moved_dirs = dirs
            .iter()
            .filter(|path| path.starts_with(from))
            .map(|path| replace_prefix(path, from, to))
            .collect::<Vec<_>>();
        let had_dirs = !moved_dirs.is_empty();
        dirs.retain(|path| !path.starts_with(from));
        dirs.extend(moved_dirs);
        insert_parent_dirs(&mut dirs, to);
        drop(dirs);

        let mut files = self.files.write().map_err(lock_error)?;
        let moved_files = files
            .iter()
            .filter(|(path, _)| path.starts_with(from))
            .map(|(path, content)| (replace_prefix(path, from, to), content.clone()))
            .collect::<Vec<_>>();
        if !had_dirs && moved_files.is_empty() {
            return Err(CoreError::NotFound(from.display().to_string()));
        }
        files.retain(|path, _| !path.starts_with(from));
        files.extend(moved_files);
        Ok(())
    }

    fn read_dir(&self, path: &Path) -> Result<Vec<FileSystemEntry>, CoreError> {
        let dirs = self.dirs.read().map_err(lock_error)?;
        let files = self.files.read().map_err(lock_error)?;
        let mut entries = HashMap::<PathBuf, bool>::new();

        for item in dirs.iter().filter(|item| item.starts_with(path)) {
            if let Some((entry_path, _)) = direct_child(path, item) {
                entries
                    .entry(entry_path)
                    .and_modify(|entry_is_dir| *entry_is_dir = true)
                    .or_insert(true);
            }
        }

        for item in files.keys().filter(|item| item.starts_with(path)) {
            if let Some((entry_path, is_dir)) = direct_child(path, item) {
                entries
                    .entry(entry_path)
                    .and_modify(|entry_is_dir| *entry_is_dir |= is_dir)
                    .or_insert(is_dir);
            }
        }

        Ok(entries
            .into_iter()
            .map(|(path, is_dir)| FileSystemEntry { path, is_dir })
            .collect())
    }

    fn modified_unix_seconds(&self, path: &Path) -> Option<i64> {
        self.exists(path).then_some(0)
    }

    fn created_unix_seconds(&self, path: &Path) -> Option<i64> {
        self.exists(path).then_some(0)
    }

    fn file_size_bytes(&self, path: &Path) -> Result<u64, CoreError> {
        self.files
            .read()
            .map_err(lock_error)?
            .get(path)
            .map(|content| content.len() as u64)
            .ok_or_else(|| CoreError::NotFound(path.display().to_string()))
    }
}

fn lock_error<T>(_: std::sync::PoisonError<T>) -> CoreError {
    CoreError::Operation("测试文件系统锁已失效".to_string())
}

fn insert_dir_and_parents(dirs: &mut HashSet<PathBuf>, path: &Path) {
    if path.as_os_str().is_empty() {
        return;
    }
    let mut current = PathBuf::new();
    for component in path.components() {
        current.push(component.as_os_str());
        dirs.insert(current.clone());
    }
}

fn insert_parent_dirs(dirs: &mut HashSet<PathBuf>, path: &Path) {
    if let Some(parent) = path.parent() {
        insert_dir_and_parents(dirs, parent);
    }
}

fn direct_child(base: &Path, item: &Path) -> Option<(PathBuf, bool)> {
    let relative = item.strip_prefix(base).ok()?;
    let mut components = relative.components();
    let first = components.next()?;
    let child = base.join(first.as_os_str());
    let is_dir = components.next().is_some();
    Some((child, is_dir))
}

fn replace_prefix(path: &Path, from: &Path, to: &Path) -> PathBuf {
    path.strip_prefix(from)
        .map(|suffix| to.join(suffix))
        .unwrap_or_else(|_| path.to_path_buf())
}
