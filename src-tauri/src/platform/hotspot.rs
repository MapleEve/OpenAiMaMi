use crate::application::ports::HotspotPlatformPort;

// hotspot 平台适配器当前只公开六边形架构骨架，不声明 Windows/macOS 热点能力已恢复。
#[derive(Debug, Clone, Copy, Default)]
pub(crate) struct HotspotPlatformAdapter;

impl HotspotPlatformPort for HotspotPlatformAdapter {
    fn has_notch(&self) -> bool {
        false
    }

    fn is_hotspot_ready(&self) -> bool {
        false
    }
}

pub fn has_notch() -> bool {
    HotspotPlatformAdapter.has_notch()
}

pub fn hotspot_ready() -> bool {
    HotspotPlatformAdapter.is_hotspot_ready()
}
