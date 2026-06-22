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

pub(crate) fn quota_model_from_public_fact(
    active_provider_label: Option<String>,
    quota_used_percent: Option<f64>,
    model_label: Option<String>,
) -> TrayQuotaModel {
    TrayQuotaModel {
        active_provider_label: non_empty_string(active_provider_label),
        quota_percent: quota_used_percent.map(normalize_quota_percent),
        model_label: non_empty_string(model_label),
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

fn normalize_quota_percent(value: f64) -> i32 {
    if value.is_finite() {
        value.round().clamp(0.0, 100.0) as i32
    } else {
        0
    }
}

fn non_empty_string(value: Option<String>) -> Option<String> {
    value.and_then(|item| {
        let trimmed = item.trim();
        if trimmed.is_empty() {
            None
        } else {
            Some(trimmed.to_string())
        }
    })
}
