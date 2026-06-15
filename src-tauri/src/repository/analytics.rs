use crate::core::model::analytics::PublicSessionFileFact;
use crate::repository::{sessions, Repository};

pub(crate) struct AnalyticsRepository;

pub(crate) trait AnalyticsRepositoryBoundary {}

impl AnalyticsRepositoryBoundary for AnalyticsRepository {}

/// 分析仓储只读取可替换 FS 下的公开 session 文件元数据，不解析会话内容。
pub fn load_public_session_facts(repo: &Repository) -> Vec<PublicSessionFileFact> {
    sessions::load_session_file_metadata(repo)
        .into_iter()
        .map(|metadata| {
            PublicSessionFileFact::new(
                metadata.id,
                metadata.updated_at,
                metadata.created_at,
                metadata.file_size,
            )
        })
        .collect()
}
