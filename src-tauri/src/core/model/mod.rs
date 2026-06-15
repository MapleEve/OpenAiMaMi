pub mod accounts;
pub mod analytics;
pub mod custom_instructions;
pub mod diagnostics;
pub mod hotspot;
pub mod mcp;
pub mod relay;
pub mod runtime;
pub mod settings;

// model 模块只保留领域模型和值对象的边界。
// 当前没有证据支撑的业务字段不写入模型。

pub(crate) struct DomainModelBoundary;

pub(crate) trait DomainModelPort {}
