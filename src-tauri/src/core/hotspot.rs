use crate::core::model::hotspot::{
    HotspotCommand, HotspotDomainResult, HotspotPlatformCapability, HotspotSettingsSnapshot,
    HotspotStatusCode,
};

// 热点核心负责开关读取、保存结果、就绪查询和只读屏幕形态探针语义。
// 只有 has_notch 消费公开证据支撑的平台探针；窗口、ready 和 set 副作用仍不恢复。
pub(crate) fn get_hotspot_enabled(snapshot: HotspotSettingsSnapshot) -> HotspotDomainResult {
    HotspotDomainResult {
        command: HotspotCommand::GetEnabled,
        enabled: snapshot.enabled,
        ready: false,
        has_notch: false,
        source_path: snapshot.source_path,
        status_code: HotspotStatusCode::SettingsSnapshotReady,
        pending: false,
        unsupported: false,
        platform_capability: None,
        detail: "热点开关已从配置仓储快照读取；未触发平台窗口或系统能力。".to_string(),
    }
}

pub(crate) fn set_hotspot_enabled(
    saved_enabled: bool,
    snapshot: HotspotSettingsSnapshot,
) -> HotspotDomainResult {
    HotspotDomainResult {
        command: HotspotCommand::SetEnabled,
        enabled: saved_enabled,
        ready: false,
        has_notch: false,
        source_path: snapshot.source_path,
        status_code: HotspotStatusCode::SettingsSaved,
        pending: false,
        unsupported: false,
        platform_capability: None,
        detail: "热点开关已按配置仓储保存后的值生成领域结果；未创建窗口或调用平台能力。"
            .to_string(),
    }
}

pub(crate) fn hotspot_ready(capability: HotspotPlatformCapability) -> HotspotDomainResult {
    HotspotDomainResult {
        command: HotspotCommand::Ready,
        enabled: false,
        ready: false,
        has_notch: capability.has_notch,
        source_path: capability.source_path.clone(),
        status_code: HotspotStatusCode::PlatformCapabilitySkeleton,
        pending: true,
        unsupported: capability.unsupported,
        platform_capability: Some(capability),
        detail: "热点就绪查询当前只返回平台能力骨架；未声明真实就绪，也未恢复窗口或系统状态探测。"
            .to_string(),
    }
}

pub(crate) fn has_notch(capability: HotspotPlatformCapability) -> HotspotDomainResult {
    HotspotDomainResult {
        command: HotspotCommand::HasNotch,
        enabled: false,
        ready: false,
        has_notch: capability.has_notch,
        source_path: capability.source_path.clone(),
        status_code: HotspotStatusCode::ReadOnlyScreenShapeProbe,
        pending: false,
        unsupported: false,
        platform_capability: Some(capability),
        detail: "屏幕形态探针只消费平台 has_notch 只读结果；不创建窗口、不设置原生属性、不声明热点就绪。"
            .to_string(),
    }
}
