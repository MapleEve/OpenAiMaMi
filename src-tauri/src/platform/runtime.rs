use crate::application::ports::RuntimePlatformPort;
use crate::core::model::runtime::RuntimeWatcherPlatformCapability;

pub(crate) struct RuntimePlatformAdapter;

impl RuntimePlatformPort for RuntimePlatformAdapter {
    fn runtime_watcher_capability(&self) -> RuntimeWatcherPlatformCapability {
        runtime_watcher_capability()
    }
}

pub fn runtime_watcher_capability() -> RuntimeWatcherPlatformCapability {
    RuntimeWatcherPlatformCapability {
        condvar_available: true,
        thread_watcher_available: true,
        schedule_notify_available: true,
        creates_thread: false,
        emits_event: false,
        touches_user_environment: false,
        detail: "平台层开放进程内 watcher state、once guard 和 notify 序列；当前不创建真实后台线程、不发送窗口事件、不操作用户环境。"
            .to_string(),
    }
}
