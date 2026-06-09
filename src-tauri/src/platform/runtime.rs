use crate::core::model::runtime::RuntimeWatcherPlatformCapability;

// runtime 平台适配器只声明条件变量、线程和监听器能力占位，不创建真实后台资源。
pub(crate) struct RuntimePlatformAdapter;

impl RuntimePlatformAdapter {
    pub fn runtime_watcher_capability(&self) -> RuntimeWatcherPlatformCapability {
        runtime_watcher_capability()
    }
}

pub fn runtime_watcher_capability() -> RuntimeWatcherPlatformCapability {
    RuntimeWatcherPlatformCapability {
        condvar_available: true,
        thread_watcher_available: true,
        schedule_notify_available: false,
        creates_thread: false,
        emits_event: false,
        touches_user_environment: false,
        detail: "平台层仅保留条件变量、线程和监听器的结构化能力占位；当前不会创建线程、发送事件或操作真实用户环境。"
            .to_string(),
    }
}
