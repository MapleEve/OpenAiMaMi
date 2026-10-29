// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::translator::responses_to_chat_request::hf83dc3dc5f003a34; addr: 0x100450ba0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
// [release-semantic-writeback <审计会话> 0x100450ba0]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [protocol-content / content-confirmed implementation routing/rework; not all Chat branches proven byte-equivalent to pre] 模块级结论（本地址作为调用/转换链证据，不外推为单函数完整语义）：Chat后备确实进入responses_to_ch
// at_request与chat_to_responses_response；新is_chat_relay_private_item和normalize_tool_arguments_for_responses提供可读内容证据，不能把旧Anthropic helper消失统一判为功能删除。非原生字段剥离是请求内存净化，原生Responses则走另一净化链。超大
// Chat转换体单次传输超限后以1800字符独立重算分块、逐块checkpoint和重组hash恢复；未把截断stdout当正文。
// 副作用边界：{"db_mutations": 0, "db_saves": 0, "pre_instance_calls": 0, "shared_sot_writes": 0, "source_rule_config_writes": 0, "runtime_user_data_operations": 0, "observed_target_effe
// cts": ["HTTP request/response and live SSE streaming", "diagnostic debug_log::app_event", "compat setter configuration persist_with_commit (referenced shared dependency
// [TRUNCATED]
