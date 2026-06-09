pub(crate) mod lifecycle;
pub(crate) mod state;

// 这里集中暴露桌面适配入口；真实业务语义仍由 application/core owner 承载。
pub(crate) use lifecycle::{bootstrap_runtime_watchers, run};
