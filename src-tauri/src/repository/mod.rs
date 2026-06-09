pub mod accounts;
pub mod adapter;
pub mod analytics;
pub mod config;
pub mod custom_instructions;
pub mod diagnostics;
pub mod hotspot;
pub mod mcp;
pub mod path_guard;
pub mod paths;
pub mod quota;
pub mod registry;
pub mod relay;
pub mod runtime;
pub mod runtime_extensions;
pub mod sessions;
pub mod settings;
pub mod skills;
pub mod voice;

use adapter::{
    fake_fs::FakeFileSystem, real_fs::RealFileSystem, temp_fs::TempFileSystem, FileSystemAdapter,
};
use paths::RepositoryPaths;
use std::sync::Arc;

#[derive(Debug, Clone)]
pub struct Repository {
    paths: RepositoryPaths,
    fs: Arc<dyn FileSystemAdapter>,
}

impl Repository {
    pub fn new() -> Self {
        Self::with_file_system(RealFileSystem)
    }

    pub fn with_file_system(file_system: impl FileSystemAdapter + 'static) -> Self {
        Self::with_paths_and_file_system(RepositoryPaths::new(), file_system)
    }

    pub fn with_paths_and_file_system(
        paths: RepositoryPaths,
        file_system: impl FileSystemAdapter + 'static,
    ) -> Self {
        Self {
            paths,
            fs: Arc::new(file_system),
        }
    }

    pub fn with_fake_file_system(file_system: FakeFileSystem) -> Self {
        Self::with_file_system(file_system)
    }

    pub fn with_temp_file_system(label: &str) -> Self {
        let file_system = TempFileSystem::new(label);
        let paths = RepositoryPaths::from_codex_home(file_system.codex_home());
        Self::with_paths_and_file_system(paths, file_system)
    }

    pub fn paths(&self) -> &RepositoryPaths {
        &self.paths
    }

    pub fn fs(&self) -> &dyn FileSystemAdapter {
        self.fs.as_ref()
    }
}

impl Default for Repository {
    fn default() -> Self {
        Self::new()
    }
}
