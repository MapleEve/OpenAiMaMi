use crate::application::ports::TrayPlatformPort;
use crate::contracts::{
    BackendEffect, BackendSkeletonBoundaryStatus, BackendSkeletonStatus, TrayIconWindowPayload,
    TrayLocalePayload, TrayMenuEventInput, TrayMenuEventPayload, TrayMenuItemPayload,
    TrayMenuSnapshotPayload, TrayRelayUsageQuotaModelPayload,
};
use crate::core::model::tray::TrayMenuEventKind;
use crate::core::model::tray::TrayMenuRefreshReason;
use crate::core::tray as tray_core;

pub(crate) struct TrayUseCaseBoundary;

pub(crate) trait TrayUseCaseBoundaryPort {}

pub fn create_tray_icon_window(platform: &impl TrayPlatformPort) -> TrayIconWindowPayload {
    TrayIconWindowPayload {
        backend_status: tray_status(platform, "create_tray_icon_window"),
        tray_id: "main".to_string(),
        created: false,
    }
}

pub fn create_or_refresh_tray_menu(platform: &impl TrayPlatformPort) -> TrayMenuSnapshotPayload {
    let quota_model = tray_relay_usage_quota_model(platform);
    let items = tray_core::empty_menu_item_keys(TrayMenuRefreshReason::Manual)
        .into_iter()
        .map(|(id, label_key)| TrayMenuItemPayload {
            id: id.to_string(),
            label_key: label_key.to_string(),
            enabled: true,
        })
        .collect::<Vec<_>>();

    TrayMenuSnapshotPayload {
        backend_status: tray_status(platform, "create_or_refresh_tray_menu"),
        item_count: items.len(),
        items,
        quota_model,
    }
}

pub fn handle_tray_menu_event(
    platform: &impl TrayPlatformPort,
    input: TrayMenuEventInput,
) -> TrayMenuEventPayload {
    let decision = tray_core::classify_tray_menu_event(&input.event_id);
    let action = match decision.kind {
        TrayMenuEventKind::FocusMain => "focus_main",
        TrayMenuEventKind::SwitchAccount => "switch_account",
        TrayMenuEventKind::Navigate => "navigate",
        TrayMenuEventKind::Quit => "quit",
        TrayMenuEventKind::Unknown => "unknown",
    }
    .to_string();

    TrayMenuEventPayload {
        backend_status: tray_status(platform, "handle_tray_menu_event"),
        event_id: decision.event_id,
        action,
        route: decision.route,
        account_key: decision.account_key,
        should_focus_main: decision.should_focus_main,
        should_quit: decision.should_quit,
        source_archive_extra: decision.source_archive_extra,
    }
}

pub fn set_tray_locale(platform: &impl TrayPlatformPort, language: String) -> TrayLocalePayload {
    TrayLocalePayload {
        backend_status: tray_status(platform, "set_tray_locale"),
        language,
        refreshed: false,
    }
}

pub fn tray_relay_usage_quota_model(
    platform: &impl TrayPlatformPort,
) -> TrayRelayUsageQuotaModelPayload {
    let quota = tray_core::empty_tray_quota_model();
    TrayRelayUsageQuotaModelPayload {
        backend_status: tray_status(platform, "tray_relay_usage_quota_model"),
        active_provider_label: quota.active_provider_label,
        quota_percent: quota.quota_percent,
        model_label: quota.model_label,
    }
}

fn tray_status(platform: &impl TrayPlatformPort, command: &str) -> BackendSkeletonStatus {
    let capability = platform.tray_capability();
    BackendSkeletonStatus {
        module: "tray".to_string(),
        command: command.to_string(),
        restored: false,
        note: format!("托盘命令已进入六边形骨架和平台端口；{}", capability.detail),
        boundary: BackendSkeletonBoundaryStatus {
            repository_checked: false,
            repository_path_known: false,
            platform_checked: true,
            core_checked: true,
            effect: BackendEffect::Pending,
        },
        runtime_event: None,
    }
}
