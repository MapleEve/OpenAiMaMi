use crate::core::model::runtime::{
    RuntimeWatcherDecision, RuntimeWatcherPlatformCapability, RuntimeWatcherSchedule,
    RuntimeWatcherSignal, RuntimeWatcherSnapshot, RuntimeWatcherStartMode, RuntimeWatcherState,
    RuntimeWatcherStatusCode,
};

// runtime core owning 监听器状态机语义；当前只生成骨架结果，不启动后台线程。
pub fn note_usage_refresh_activity(
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
    now_epoch_seconds: i64,
) -> RuntimeWatcherDecision {
    watcher_decision(
        RuntimeWatcherSignal::NoteUsageRefreshActivity,
        RuntimeWatcherStatusCode::PendingSkeleton,
        snapshot,
        capability,
        Some(now_epoch_seconds),
        "使用量刷新活动已进入监听器信号骨架；当前仅记录本次状态机结果，未通知真实条件变量。",
    )
}

pub fn schedule_full_runtime_refresh(
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
) -> RuntimeWatcherDecision {
    watcher_decision(
        RuntimeWatcherSignal::ScheduleFullRuntimeRefresh,
        RuntimeWatcherStatusCode::PendingSkeleton,
        snapshot,
        capability,
        None,
        "全量运行时刷新已进入调度骨架；当前不发起网络刷新、不写运行时快照、不广播事件。",
    )
}

pub fn start_auto_switch_pending_watcher(
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
) -> RuntimeWatcherDecision {
    watcher_decision(
        RuntimeWatcherSignal::StartAutoSwitchPendingWatcher,
        RuntimeWatcherStatusCode::StartOnlySkeleton,
        snapshot,
        capability,
        None,
        "自动切换待确认监听器已进入启动骨架；当前不创建线程、不读取闭源队列、不触发账号切换。",
    )
}

pub fn start_usage_refresh_watcher(
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
) -> RuntimeWatcherDecision {
    watcher_decision(
        RuntimeWatcherSignal::StartUsageRefreshWatcher,
        RuntimeWatcherStatusCode::StartOnlySkeleton,
        snapshot,
        capability,
        None,
        "使用量刷新监听器已进入启动骨架；当前不创建后台线程、不轮询接口、不写用户环境。",
    )
}

pub fn update_usage_refresh_schedule(
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
    now_epoch_seconds: i64,
) -> RuntimeWatcherDecision {
    let seconds = snapshot.schedule_interval.interval_seconds;
    watcher_decision(
        RuntimeWatcherSignal::UpdateUsageRefreshSchedule,
        RuntimeWatcherStatusCode::ScheduleUpdateSkeleton,
        snapshot,
        capability,
        Some(now_epoch_seconds),
        &format!(
            "使用量刷新间隔已按保存后的配置快照换算为 {seconds} 秒；当前仅生成调度更新结果，不通知真实条件变量。"
        ),
    )
}

pub fn pending_auto_switch_note() -> String {
    "自动切换待确认状态改由 runtime 监听器骨架统一说明；当前不恢复闭源队列读取或账号切换动作。"
        .to_string()
}

fn watcher_decision(
    signal: RuntimeWatcherSignal,
    status_code: RuntimeWatcherStatusCode,
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
    last_notified: Option<i64>,
    note: &str,
) -> RuntimeWatcherDecision {
    RuntimeWatcherDecision {
        signal,
        start_mode: RuntimeWatcherStartMode::ProductDecision,
        operation_key: signal.operation_key(),
        status_code,
        state: RuntimeWatcherState {
            pending: true,
            running: false,
            last_notified,
            schedule_interval: RuntimeWatcherSchedule::new(snapshot.schedule_interval.interval),
        },
        repository_path_known: !snapshot.settings_path.trim().is_empty(),
        warning: schedule_warning(&capability),
        platform_capability: capability,
        note: note.to_string(),
    }
}

fn schedule_warning(capability: &RuntimeWatcherPlatformCapability) -> Option<String> {
    if capability.schedule_notify_available {
        None
    } else {
        Some("平台层未开放真实后台监听能力；本次结果只能作为后端边界骨架。".to_string())
    }
}
