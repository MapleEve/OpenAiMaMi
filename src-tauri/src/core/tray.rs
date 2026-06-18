use crate::core::model::tray::{
    TrayMenuEventDecision, TrayMenuEventKind, TrayMenuRefreshReason, TrayQuotaModel,
};

pub(crate) fn classify_tray_menu_event(event_id: &str) -> TrayMenuEventDecision {
    let account_key = event_id
        .strip_prefix("tray_account:")
        .filter(|value| !value.is_empty())
        .map(ToString::to_string);
    let kind = match event_id {
        "tray_quit" => TrayMenuEventKind::Quit,
        "tray_open_main" | "tray_active_title" | "tray_active_subtitle" => {
            TrayMenuEventKind::FocusMain
        }
        "tray_router_open" => TrayMenuEventKind::Navigate,
        _ if account_key.is_some() => TrayMenuEventKind::SwitchAccount,
        _ => TrayMenuEventKind::Unknown,
    };

    TrayMenuEventDecision {
        event_id: event_id.to_string(),
        account_key,
        route: matches!(kind, TrayMenuEventKind::Navigate).then(|| "relayModel".to_string()),
        should_focus_main: matches!(
            kind,
            TrayMenuEventKind::FocusMain | TrayMenuEventKind::Navigate
        ),
        should_quit: matches!(kind, TrayMenuEventKind::Quit),
        source_archive_extra: event_id == "tray_router_open",
        kind,
    }
}

pub(crate) fn empty_tray_quota_model() -> TrayQuotaModel {
    TrayQuotaModel {
        active_provider_label: None,
        quota_percent: None,
        model_label: None,
    }
}

pub(crate) fn empty_menu_item_keys(
    _reason: TrayMenuRefreshReason,
) -> Vec<(&'static str, &'static str)> {
    vec![
        ("tray_open_main", "tray.openMain"),
        ("tray_quit", "tray.quit"),
    ]
}
