use crate::application::ports::HotspotPlatformPort;
use crate::core::error::CoreError;
use crate::core::model::hotspot::HotspotPlatformCapability;
use tauri::AppHandle;

// 热点平台适配器只恢复 macOS has_notch 只读屏幕形态探针；窗口、ready 和 set 副作用仍不恢复。
#[derive(Debug, Clone, Copy, Default)]
pub(crate) struct HotspotPlatformAdapter<'a> {
    app: Option<&'a AppHandle>,
}

impl<'a> HotspotPlatformAdapter<'a> {
    pub(crate) fn new(app: &'a AppHandle) -> Self {
        Self { app: Some(app) }
    }
}

impl HotspotPlatformPort for HotspotPlatformAdapter<'_> {
    fn hotspot_capability(&self) -> HotspotPlatformCapability {
        HotspotPlatformCapability::unsupported_skeleton(
            file!(),
            "平台热点 ready/window 能力当前只返回结构化骨架；不创建窗口、不读取运行时 discriminant、不发送 post-write notify。",
        )
    }

    fn has_notch_capability(&self) -> Result<HotspotPlatformCapability, CoreError> {
        let has_notch = probe_has_notch(self.app)?;
        Ok(HotspotPlatformCapability::read_only_has_notch(
            file!(),
            has_notch,
            has_notch_probe_detail(),
        ))
    }
}

#[cfg(target_os = "macos")]
fn probe_has_notch(app: Option<&AppHandle>) -> Result<bool, CoreError> {
    if objc2::MainThreadMarker::new().is_some() {
        return Ok(has_notch_on_main_thread());
    }

    let app = app.ok_or_else(|| {
        CoreError::Operation(
            "macOS has_notch 探针缺少 AppHandle，无法切换到 AppKit 主线程。".to_string(),
        )
    })?;
    let (sender, receiver) = std::sync::mpsc::channel();
    app.run_on_main_thread(move || {
        let _ = sender.send(has_notch_on_main_thread());
    })
    .map_err(|error| CoreError::Operation(format!("macOS has_notch 主线程调度失败：{error}")))?;
    receiver.recv().map_err(|error| {
        CoreError::Operation(format!("macOS has_notch 主线程结果接收失败：{error}"))
    })
}

#[cfg(not(target_os = "macos"))]
fn probe_has_notch(app: Option<&AppHandle>) -> Result<bool, CoreError> {
    let _ = app;
    Ok(false)
}

#[cfg(target_os = "macos")]
fn has_notch_on_main_thread() -> bool {
    use objc2::MainThreadMarker;
    use objc2_app_kit::NSScreen;

    let Some(main_thread) = MainThreadMarker::new() else {
        return false;
    };

    let screens = NSScreen::screens(main_thread);
    for index in 0..screens.count() {
        let screen = screens.objectAtIndex(index);
        if rect_has_visible_area(screen.auxiliaryTopLeftArea())
            || rect_has_visible_area(screen.auxiliaryTopRightArea())
        {
            return true;
        }
    }

    false
}

#[cfg(target_os = "macos")]
fn rect_has_visible_area(rect: objc2_foundation::NSRect) -> bool {
    rect.size.width > 0.0 && rect.size.height > 0.0
}

#[cfg(target_os = "macos")]
fn has_notch_probe_detail() -> &'static str {
    "macOS has_notch 只读探针通过 AppKit 主线程读取 NSScreen auxiliaryTopLeftArea/auxiliaryTopRightArea；不创建热点窗口。"
}

#[cfg(not(target_os = "macos"))]
fn has_notch_probe_detail() -> &'static str {
    "非 macOS has_notch 按公开边界固定返回 false；不声明 Windows 热点窗口、ready 或 runtime discriminant 行为。"
}
