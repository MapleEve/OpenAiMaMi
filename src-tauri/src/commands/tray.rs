use crate::application::usecase;
use crate::contracts::{
    CoreEnvelope, TrayIconWindowPayload, TrayLocalePayload, TrayMenuEventInput,
    TrayMenuEventPayload, TrayMenuSnapshotPayload, TrayRelayUsageQuotaModelPayload,
};
use crate::platform::tray::TrayPlatformAdapter;

pub(crate) struct TrayCommandBoundary;

pub(crate) trait TrayCommandBoundaryPort {}

#[tauri::command]
pub fn create_tray_icon_window() -> Result<CoreEnvelope<TrayIconWindowPayload>, String> {
    let platform = TrayPlatformAdapter;
    Ok(CoreEnvelope::ok(usecase::tray::create_tray_icon_window(
        &platform,
    )))
}

#[tauri::command]
pub fn create_or_refresh_tray_menu() -> Result<CoreEnvelope<TrayMenuSnapshotPayload>, String> {
    let platform = TrayPlatformAdapter;
    Ok(CoreEnvelope::ok(
        usecase::tray::create_or_refresh_tray_menu(&platform),
    ))
}

#[tauri::command]
pub fn handle_tray_menu_event(
    event_id: String,
) -> Result<CoreEnvelope<TrayMenuEventPayload>, String> {
    let platform = TrayPlatformAdapter;
    Ok(CoreEnvelope::ok(usecase::tray::handle_tray_menu_event(
        &platform,
        TrayMenuEventInput { event_id },
    )))
}

#[tauri::command]
pub fn set_tray_locale(language: String) -> Result<CoreEnvelope<TrayLocalePayload>, String> {
    let platform = TrayPlatformAdapter;
    Ok(CoreEnvelope::ok(usecase::tray::set_tray_locale(
        &platform, language,
    )))
}

#[tauri::command]
pub fn tray_relay_usage_quota_model(
) -> Result<CoreEnvelope<TrayRelayUsageQuotaModelPayload>, String> {
    let platform = TrayPlatformAdapter;
    Ok(CoreEnvelope::ok(
        usecase::tray::tray_relay_usage_quota_model(&platform),
    ))
}
