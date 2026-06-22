use crate::application::ports::TrayPlatformPort;
use crate::contracts::{
    BackendEffect, BackendSkeletonBoundaryStatus, BackendSkeletonStatus, TrayIconWindowPayload,
    TrayLocalePayload, TrayMenuEventInput, TrayMenuEventPayload, TrayMenuItemPayload,
    TrayMenuSnapshotPayload, TrayRelayUsageQuotaModelPayload,
};
use crate::core::model::tray::TrayMenuEventKind;
use crate::core::model::tray::TrayMenuRefreshReason;
use crate::core::tray as tray_core;
use crate::repository::{tray as tray_repository, Repository};

pub(crate) struct TrayUseCaseBoundary;

pub(crate) trait TrayUseCaseBoundaryPort {}

pub fn create_tray_icon_window(platform: &impl TrayPlatformPort) -> TrayIconWindowPayload {
    TrayIconWindowPayload {
        backend_status: tray_status(platform, "create_tray_icon_window"),
        tray_id: "main".to_string(),
        created: false,
    }
}

pub fn create_or_refresh_tray_menu(
    repo: &Repository,
    platform: &impl TrayPlatformPort,
) -> TrayMenuSnapshotPayload {
    let quota_model = tray_relay_usage_quota_model(repo, platform);
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
    repo: &Repository,
    platform: &impl TrayPlatformPort,
) -> TrayRelayUsageQuotaModelPayload {
    let (quota, backend_status) = match tray_repository::load_tray_quota_fact(repo) {
        Ok(fact) => {
            let quota = tray_core::quota_model_from_public_fact(
                fact.active_provider_label,
                fact.quota_point
                    .and_then(|point| point.primary_used_percent.or(point.secondary_used_percent)),
                fact.model_label,
            );
            (
                quota,
                tray_repository_status(platform, "tray_relay_usage_quota_model"),
            )
        }
        Err(_) => (
            tray_core::empty_tray_quota_model(),
            tray_status(platform, "tray_relay_usage_quota_model"),
        ),
    };
    TrayRelayUsageQuotaModelPayload {
        backend_status,
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

fn tray_repository_status(
    platform: &impl TrayPlatformPort,
    command: &str,
) -> BackendSkeletonStatus {
    let capability = platform.tray_capability();
    BackendSkeletonStatus {
        module: "tray".to_string(),
        command: command.to_string(),
        restored: true,
        note: format!(
            "托盘 quota model 已恢复公开文件事实读取；仍不创建真实托盘或读取运行时 relay 状态。{}",
            capability.detail
        ),
        boundary: BackendSkeletonBoundaryStatus {
            repository_checked: true,
            repository_path_known: true,
            platform_checked: true,
            core_checked: true,
            effect: BackendEffect::RepositoryRead,
        },
        runtime_event: None,
    }
}
