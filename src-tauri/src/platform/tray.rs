use crate::application::ports::{TrayPlatformCapability, TrayPlatformPort};

// 托盘文件只保留桌面集成边界；当前不注册菜单、图标、通知或退出动作。
pub(crate) struct TrayBoundary;
pub(crate) trait TrayBoundaryPort {}

pub(crate) struct TrayPlatformAdapter;

impl TrayPlatformPort for TrayPlatformAdapter {
    fn tray_capability(&self) -> TrayPlatformCapability {
        TrayPlatformCapability {
            icon_window_available: true,
            menu_refresh_available: true,
            menu_event_available: true,
            locale_refresh_available: true,
            emits_navigation_event: false,
            creates_native_icon: false,
            detail: "当前公开骨架只暴露托盘能力边界；不创建真实托盘图标、不设置菜单、不发送 tray:navigate 事件、不退出应用。".to_string(),
        }
    }
}
