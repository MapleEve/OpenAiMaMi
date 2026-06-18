// 托盘领域模型只描述菜单事件分类和空骨架结果，不持有 Tauri、窗口或系统托盘对象。
#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) enum TrayMenuEventKind {
    FocusMain,
    SwitchAccount,
    Navigate,
    Quit,
    Unknown,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct TrayMenuEventDecision {
    pub kind: TrayMenuEventKind,
    pub event_id: String,
    pub account_key: Option<String>,
    pub route: Option<String>,
    pub should_focus_main: bool,
    pub should_quit: bool,
    pub source_archive_extra: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) enum TrayMenuRefreshReason {
    Startup,
    RuntimeState,
    LocaleChanged,
    Manual,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct TrayQuotaModel {
    pub active_provider_label: Option<String>,
    pub quota_percent: Option<i32>,
    pub model_label: Option<String>,
}
