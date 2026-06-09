use crate::core::model::runtime::{
    RuntimeWatcherDecision, RuntimeWatcherPlatformCapability, RuntimeWatcherSchedule,
    RuntimeWatcherSignal, RuntimeWatcherSnapshot, RuntimeWatcherStartMode, RuntimeWatcherState,
    RuntimeWatcherStatusCode,
};
use crate::core::model::settings::UsageRefreshInterval;
use std::sync::{Mutex, OnceLock};

const FULL_REFRESH_DEBOUNCE_SECONDS: i64 = 8;

#[derive(Debug, Clone)]
struct RuntimeWatcherMemoryState {
    interval: UsageRefreshInterval,
    last_activity_epoch_seconds: Option<i64>,
    last_full_refresh_requested_at: Option<i64>,
    usage_watcher_started: bool,
    auto_switch_pending_watcher_started: bool,
    notify_sequence: u64,
}

impl Default for RuntimeWatcherMemoryState {
    fn default() -> Self {
        Self {
            interval: UsageRefreshInterval::default(),
            last_activity_epoch_seconds: None,
            last_full_refresh_requested_at: None,
            usage_watcher_started: false,
            auto_switch_pending_watcher_started: false,
            notify_sequence: 0,
        }
    }
}

static WATCHER_STATE: OnceLock<Mutex<RuntimeWatcherMemoryState>> = OnceLock::new();

// runtime core owning watcher 状态机语义；这里只恢复进程内 once guard、调度时间和 notify 序列，不创建后台线程。
pub fn note_usage_refresh_activity(
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
    now_epoch_seconds: i64,
) -> RuntimeWatcherDecision {
    with_watcher_state(&snapshot, |state| {
        state.last_activity_epoch_seconds = Some(now_epoch_seconds);
        state.notify_sequence = state.notify_sequence.saturating_add(1);
        watcher_decision(
            RuntimeWatcherSignal::NoteUsageRefreshActivity,
            RuntimeWatcherStatusCode::ActivityRecorded,
            snapshot,
            capability,
            Some(now_epoch_seconds),
            state,
            "使用量刷新活动已写入进程内 watcher state，并递增 notify 序列；当前不创建后台线程、不触发真实条件变量。",
        )
    })
}

pub fn schedule_full_runtime_refresh(
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
    now_epoch_seconds: i64,
) -> RuntimeWatcherDecision {
    with_watcher_state(&snapshot, |state| {
        let coalesced = state
            .last_full_refresh_requested_at
            .map(|last| now_epoch_seconds.saturating_sub(last) < FULL_REFRESH_DEBOUNCE_SECONDS)
            .unwrap_or(false);
        if !coalesced {
            state.last_full_refresh_requested_at = Some(now_epoch_seconds);
            state.notify_sequence = state.notify_sequence.saturating_add(1);
        }
        watcher_decision(
            RuntimeWatcherSignal::ScheduleFullRuntimeRefresh,
            if coalesced {
                RuntimeWatcherStatusCode::FullRefreshCoalesced
            } else {
                RuntimeWatcherStatusCode::FullRefreshScheduled
            },
            snapshot,
            capability,
            Some(now_epoch_seconds),
            state,
            if coalesced {
                "全量运行时刷新请求命中 8 秒 debounce，已合并到进程内 watcher state；当前不发起网络刷新、不广播事件。"
            } else {
                "全量运行时刷新请求已写入进程内 watcher state，并递增 notify 序列；当前不发起网络刷新、不广播事件。"
            },
        )
    })
}

pub fn start_auto_switch_pending_watcher(
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
) -> RuntimeWatcherDecision {
    with_watcher_state(&snapshot, |state| {
        let already_started = state.auto_switch_pending_watcher_started;
        state.auto_switch_pending_watcher_started = true;
        watcher_decision(
            RuntimeWatcherSignal::StartAutoSwitchPendingWatcher,
            if already_started {
                RuntimeWatcherStatusCode::AutoSwitchWatcherAlreadyStarted
            } else {
                RuntimeWatcherStatusCode::AutoSwitchWatcherStarted
            },
            snapshot,
            capability,
            None,
            state,
            if already_started {
                "自动切换 pending watcher 已由进程内 once guard 判定为已启动；当前不创建真实线程、不读取闭源队列。"
            } else {
                "自动切换 pending watcher 已写入进程内 started guard；当前不创建真实线程、不读取闭源队列。"
            },
        )
    })
}

pub fn start_usage_refresh_watcher(
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
) -> RuntimeWatcherDecision {
    with_watcher_state(&snapshot, |state| {
        let already_started = state.usage_watcher_started;
        state.usage_watcher_started = true;
        watcher_decision(
            RuntimeWatcherSignal::StartUsageRefreshWatcher,
            if already_started {
                RuntimeWatcherStatusCode::UsageWatcherAlreadyStarted
            } else {
                RuntimeWatcherStatusCode::UsageWatcherStarted
            },
            snapshot,
            capability,
            None,
            state,
            if already_started {
                "使用量刷新 watcher 已由进程内 once guard 判定为已启动；当前不创建真实线程、不轮询接口。"
            } else {
                "使用量刷新 watcher 已写入进程内 started guard；当前不创建真实线程、不轮询接口。"
            },
        )
    })
}

pub fn update_usage_refresh_schedule(
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
    now_epoch_seconds: i64,
) -> RuntimeWatcherDecision {
    let seconds = snapshot.schedule_interval.interval_seconds;
    with_watcher_state(&snapshot, |state| {
        state.interval = snapshot.schedule_interval.interval;
        state.notify_sequence = state.notify_sequence.saturating_add(1);
        watcher_decision(
            RuntimeWatcherSignal::UpdateUsageRefreshSchedule,
            RuntimeWatcherStatusCode::ScheduleUpdated,
            snapshot,
            capability,
            Some(now_epoch_seconds),
            state,
            &format!(
                "使用量刷新间隔已按 settings 快照换算为 {seconds} 秒并写入进程内 watcher state；当前不通知真实条件变量。"
            ),
        )
    })
}

pub fn pending_auto_switch_note() -> String {
    "自动切换 pending 状态改由 runtime watcher 边界统一说明；当前不恢复闭源队列读取或账号切换动作。"
        .to_string()
}

fn with_watcher_state(
    snapshot: &RuntimeWatcherSnapshot,
    update: impl FnOnce(&mut RuntimeWatcherMemoryState) -> RuntimeWatcherDecision,
) -> RuntimeWatcherDecision {
    let mutex = WATCHER_STATE.get_or_init(|| Mutex::new(RuntimeWatcherMemoryState::default()));
    let mut state = mutex
        .lock()
        .unwrap_or_else(|poisoned| poisoned.into_inner());
    state.interval = snapshot.schedule_interval.interval;
    update(&mut state)
}

fn watcher_decision(
    signal: RuntimeWatcherSignal,
    status_code: RuntimeWatcherStatusCode,
    snapshot: RuntimeWatcherSnapshot,
    capability: RuntimeWatcherPlatformCapability,
    last_notified: Option<i64>,
    memory: &RuntimeWatcherMemoryState,
    note: &str,
) -> RuntimeWatcherDecision {
    RuntimeWatcherDecision {
        signal,
        start_mode: RuntimeWatcherStartMode::ProductDecision,
        operation_key: signal.operation_key(),
        status_code,
        state: RuntimeWatcherState {
            pending: false,
            running: match signal {
                RuntimeWatcherSignal::StartAutoSwitchPendingWatcher => {
                    memory.auto_switch_pending_watcher_started
                }
                RuntimeWatcherSignal::StartUsageRefreshWatcher
                | RuntimeWatcherSignal::NoteUsageRefreshActivity
                | RuntimeWatcherSignal::UpdateUsageRefreshSchedule => memory.usage_watcher_started,
                RuntimeWatcherSignal::ScheduleFullRuntimeRefresh => false,
            },
            last_notified,
            schedule_interval: RuntimeWatcherSchedule::new(memory.interval),
            last_activity_epoch_seconds: memory.last_activity_epoch_seconds,
            last_full_refresh_requested_at: memory.last_full_refresh_requested_at,
            usage_watcher_started: memory.usage_watcher_started,
            auto_switch_pending_watcher_started: memory.auto_switch_pending_watcher_started,
            notify_sequence: memory.notify_sequence,
        },
        repository_path_known: !snapshot.settings_path.trim().is_empty(),
        warning: schedule_warning(&capability),
        platform_capability: capability,
        note: note.to_string(),
    }
}

fn schedule_warning(capability: &RuntimeWatcherPlatformCapability) -> Option<String> {
    if capability.creates_thread {
        None
    } else {
        Some("平台层未创建真实后台监听线程；本次结果只恢复进程内 watcher state、once guard 和调度语义。".to_string())
    }
}

#[cfg(test)]
fn reset_watcher_state_for_test() {
    if let Some(mutex) = WATCHER_STATE.get() {
        let mut state = mutex
            .lock()
            .unwrap_or_else(|poisoned| poisoned.into_inner());
        *state = RuntimeWatcherMemoryState::default();
    }
}

#[cfg(test)]
static WATCHER_TEST_LOCK: OnceLock<Mutex<()>> = OnceLock::new();

#[cfg(test)]
fn watcher_test_guard() -> std::sync::MutexGuard<'static, ()> {
    WATCHER_TEST_LOCK
        .get_or_init(|| Mutex::new(()))
        .lock()
        .unwrap_or_else(|poisoned| poisoned.into_inner())
}

#[cfg(test)]
mod tests {
    use super::*;

    fn snapshot(interval: UsageRefreshInterval) -> RuntimeWatcherSnapshot {
        RuntimeWatcherSnapshot {
            settings_path: "settings.json".to_string(),
            auto_switch_enabled: false,
            schedule_interval: RuntimeWatcherSchedule::new(interval),
        }
    }

    fn capability() -> RuntimeWatcherPlatformCapability {
        RuntimeWatcherPlatformCapability {
            condvar_available: true,
            thread_watcher_available: true,
            schedule_notify_available: true,
            creates_thread: false,
            emits_event: false,
            touches_user_environment: false,
            detail: "test".to_string(),
        }
    }

    #[test]
    fn usage_activity_records_timestamp_and_notify_sequence() {
        let _guard = watcher_test_guard();
        reset_watcher_state_for_test();

        let decision = note_usage_refresh_activity(
            snapshot(UsageRefreshInterval::OneMinute),
            capability(),
            100,
        );

        assert_eq!(
            decision.status_code,
            RuntimeWatcherStatusCode::ActivityRecorded
        );
        assert_eq!(decision.state.last_activity_epoch_seconds, Some(100));
        assert!(decision.state.notify_sequence > 0);
        assert!(!decision.state.pending);
    }

    #[test]
    fn full_refresh_uses_eight_second_debounce() {
        let _guard = watcher_test_guard();
        reset_watcher_state_for_test();

        let first = schedule_full_runtime_refresh(
            snapshot(UsageRefreshInterval::OneMinute),
            capability(),
            200,
        );
        let second = schedule_full_runtime_refresh(
            snapshot(UsageRefreshInterval::OneMinute),
            capability(),
            205,
        );

        assert_eq!(
            first.status_code,
            RuntimeWatcherStatusCode::FullRefreshScheduled
        );
        assert_eq!(
            second.status_code,
            RuntimeWatcherStatusCode::FullRefreshCoalesced
        );
    }

    #[test]
    fn start_usage_watcher_is_guarded() {
        let _guard = watcher_test_guard();
        reset_watcher_state_for_test();

        let first =
            start_usage_refresh_watcher(snapshot(UsageRefreshInterval::OneMinute), capability());
        let second =
            start_usage_refresh_watcher(snapshot(UsageRefreshInterval::OneMinute), capability());

        assert_eq!(
            first.status_code,
            RuntimeWatcherStatusCode::UsageWatcherStarted
        );
        assert_eq!(
            second.status_code,
            RuntimeWatcherStatusCode::UsageWatcherAlreadyStarted
        );
        assert!(second.state.usage_watcher_started);
    }
}
