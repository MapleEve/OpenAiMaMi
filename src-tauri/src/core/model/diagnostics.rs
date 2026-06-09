// diagnostics 模型只承载只读诊断值对象，不写未由证据支撑的闭源诊断业务。

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DiagnosticProbe {
    pub path: String,
    pub exists: bool,
    pub count: Option<i32>,
    pub status_code: String,
    pub message: String,
}

impl DiagnosticProbe {
    pub fn new(
        path: String,
        exists: bool,
        count: Option<i32>,
        status_code: impl Into<String>,
        message: impl Into<String>,
    ) -> Self {
        Self {
            path,
            exists,
            count,
            status_code: status_code.into(),
            message: message.into(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DiagnosticSnapshot {
    pub root_path: String,
    pub source_path: String,
    pub probes: Vec<DiagnosticProbe>,
    pub status_code: String,
    pub message: String,
}

impl DiagnosticSnapshot {
    pub fn new(
        root_path: String,
        source_path: String,
        probes: Vec<DiagnosticProbe>,
        status_code: impl Into<String>,
        message: impl Into<String>,
    ) -> Self {
        Self {
            root_path,
            source_path,
            probes,
            status_code: status_code.into(),
            message: message.into(),
        }
    }
}
