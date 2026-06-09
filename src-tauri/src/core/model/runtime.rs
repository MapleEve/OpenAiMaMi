use crate::core::model::settings::UsageRefreshInterval;

// runtime 领域模型 owning 监听器信号、调度状态和启动边界，不持有线程或平台对象。
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RuntimeWatcherStartMode {
    ProductDecision,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RuntimeWatcherSignal {
    NoteUsageRefreshActivity,
    ScheduleFullRuntimeRefresh,
    StartAutoSwitchPendingWatcher,
    StartUsageRefreshWatcher,
    UpdateUsageRefreshSchedule,
}

impl RuntimeWatcherSignal {
    pub const fn operation_key(self) -> RuntimeWatcherOperationKey {
        match self {
            Self::NoteUsageRefreshActivity => RuntimeWatcherOperationKey::UsageRefreshActivity,
            Self::ScheduleFullRuntimeRefresh => RuntimeWatcherOperationKey::FullRuntimeRefresh,
            Self::StartAutoSwitchPendingWatcher => {
                RuntimeWatcherOperationKey::AutoSwitchPendingWatcher
            }
            Self::StartUsageRefreshWatcher => RuntimeWatcherOperationKey::UsageRefreshWatcher,
            Self::UpdateUsageRefreshSchedule => RuntimeWatcherOperationKey::UsageRefreshSchedule,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RuntimeWatcherOperationKey {
    UsageRefreshActivity,
    FullRuntimeRefresh,
    AutoSwitchPendingWatcher,
    UsageRefreshWatcher,
    UsageRefreshSchedule,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RuntimeWatcherStatusCode {
    PendingSkeleton,
    ScheduleUpdateSkeleton,
    StartOnlySkeleton,
    ActivityRecorded,
    FullRefreshScheduled,
    FullRefreshCoalesced,
    AutoSwitchWatcherStarted,
    AutoSwitchWatcherAlreadyStarted,
    UsageWatcherStarted,
    UsageWatcherAlreadyStarted,
    ScheduleUpdated,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RuntimeWatcherSchedule {
    pub interval: UsageRefreshInterval,
    pub interval_seconds: u64,
}

impl RuntimeWatcherSchedule {
    pub const fn new(interval: UsageRefreshInterval) -> Self {
        Self {
            interval,
            interval_seconds: usage_interval_seconds(interval),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RuntimeWatcherSnapshot {
    pub settings_path: String,
    pub auto_switch_enabled: bool,
    pub schedule_interval: RuntimeWatcherSchedule,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RuntimeWatcherState {
    pub pending: bool,
    pub running: bool,
    pub last_notified: Option<i64>,
    pub schedule_interval: RuntimeWatcherSchedule,
    pub last_activity_epoch_seconds: Option<i64>,
    pub last_full_refresh_requested_at: Option<i64>,
    pub usage_watcher_started: bool,
    pub auto_switch_pending_watcher_started: bool,
    pub notify_sequence: u64,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RuntimeWatcherPlatformCapability {
    pub condvar_available: bool,
    pub thread_watcher_available: bool,
    pub schedule_notify_available: bool,
    pub creates_thread: bool,
    pub emits_event: bool,
    pub touches_user_environment: bool,
    pub detail: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RuntimeWatcherDecision {
    pub signal: RuntimeWatcherSignal,
    pub start_mode: RuntimeWatcherStartMode,
    pub operation_key: RuntimeWatcherOperationKey,
    pub status_code: RuntimeWatcherStatusCode,
    pub state: RuntimeWatcherState,
    pub repository_path_known: bool,
    pub platform_capability: RuntimeWatcherPlatformCapability,
    pub note: String,
    pub warning: Option<String>,
}

const fn usage_interval_seconds(interval: UsageRefreshInterval) -> u64 {
    match interval {
        UsageRefreshInterval::ThirtySeconds => 30,
        UsageRefreshInterval::OneMinute => 60,
        UsageRefreshInterval::ThreeMinutes => 180,
        UsageRefreshInterval::FiveMinutes => 300,
    }
}
