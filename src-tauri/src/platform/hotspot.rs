use crate::application::ports::HotspotPlatformPort;
use crate::core::model::hotspot::HotspotPlatformCapability;

// 热点平台适配器当前只公开六边形架构骨架，不声明 Windows/macOS 热点能力已恢复。
#[derive(Debug, Clone, Copy, Default)]
pub(crate) struct HotspotPlatformAdapter;

impl HotspotPlatformPort for HotspotPlatformAdapter {
    fn hotspot_capability(&self) -> HotspotPlatformCapability {
        HotspotPlatformCapability::unsupported_skeleton(
            file!(),
            "平台热点能力当前只返回结构化骨架；未调用系统窗口、屏幕形态或原生属性。",
        )
    }
}

pub fn has_notch() -> bool {
    HotspotPlatformAdapter.hotspot_capability().has_notch
}

pub fn hotspot_ready() -> bool {
    HotspotPlatformAdapter.hotspot_capability().ready
}
