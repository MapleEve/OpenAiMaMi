use crate::application::ports::HotspotPlatformPort;
use crate::core::error::CoreError;
use crate::core::hotspot as hotspot_core;
use crate::repository::hotspot as hotspot_repository;
use crate::repository::Repository;

// 热点用例层负责一次用户动作的事务编排，只协作仓储、平台端口和核心领域语义。
pub(crate) fn has_notch(hotspot: &impl HotspotPlatformPort) -> bool {
    let capability = hotspot.hotspot_capability();
    hotspot_core::has_notch(capability).has_notch
}

pub(crate) fn get_hotspot_enabled(repo: &Repository) -> Result<bool, CoreError> {
    let snapshot = hotspot_repository::load_hotspot_settings_snapshot(repo)?;
    Ok(hotspot_core::get_hotspot_enabled(snapshot).enabled)
}

pub(crate) fn set_hotspot_enabled(repo: &Repository, enabled: bool) -> Result<bool, CoreError> {
    let snapshot = hotspot_repository::save_hotspot_enabled(repo, enabled)?;
    Ok(hotspot_core::set_hotspot_enabled(snapshot.enabled, snapshot).enabled)
}

pub(crate) fn hotspot_ready(hotspot: &impl HotspotPlatformPort) -> bool {
    let capability = hotspot.hotspot_capability();
    hotspot_core::hotspot_ready(capability).ready
}
