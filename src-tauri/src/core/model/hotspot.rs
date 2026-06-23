// 热点领域模型负责配置值、平台能力和骨架状态语义；不持有窗口或系统对象。
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub(crate) enum HotspotCommand {
    GetEnabled,
    SetEnabled,
    Ready,
    HasNotch,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub(crate) enum HotspotStatusCode {
    SettingsSnapshotReady,
    SettingsSaved,
    PlatformCapabilitySkeleton,
    PlatformBehaviorUnsupported,
    ReadOnlyScreenShapeProbe,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct HotspotSettingsSnapshot {
    pub enabled: bool,
    pub source_path: String,
    pub source_exists: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct HotspotPlatformCapability {
    pub ready: bool,
    pub has_notch: bool,
    pub source_path: String,
    pub status_code: HotspotStatusCode,
    pub pending: bool,
    pub unsupported: bool,
    pub detail: String,
}

impl HotspotPlatformCapability {
    pub(crate) fn unsupported_skeleton(source_path: impl Into<String>, detail: &str) -> Self {
        Self {
            ready: false,
            has_notch: false,
            source_path: source_path.into(),
            status_code: HotspotStatusCode::PlatformBehaviorUnsupported,
            pending: true,
            unsupported: true,
            detail: detail.to_string(),
        }
    }

    pub(crate) fn read_only_has_notch(
        source_path: impl Into<String>,
        has_notch: bool,
        detail: &str,
    ) -> Self {
        Self {
            ready: false,
            has_notch,
            source_path: source_path.into(),
            status_code: HotspotStatusCode::ReadOnlyScreenShapeProbe,
            pending: false,
            unsupported: false,
            detail: detail.to_string(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct HotspotDomainResult {
    pub command: HotspotCommand,
    pub enabled: bool,
    pub ready: bool,
    pub has_notch: bool,
    pub source_path: String,
    pub status_code: HotspotStatusCode,
    pub pending: bool,
    pub unsupported: bool,
    pub platform_capability: Option<HotspotPlatformCapability>,
    pub detail: String,
}
