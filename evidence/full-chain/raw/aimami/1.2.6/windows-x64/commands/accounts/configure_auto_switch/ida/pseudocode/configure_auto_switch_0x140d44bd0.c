// Pseudocode reconstructed from IDA disassembly (Hex-Rays decompile returned null_cfunc)
// Source: IDA Pro disasm + strings + callees + basic_blocks analysis
// Function: configure_auto_switch @ 0x140d44bd0
// Size: 4272 bytes (0x10b0), 134 basic blocks, cyclomatic complexity 44
// Module: commands/accounts (src\lib.rs)
// Binary: AiMaMi 1.2.6 win64.exe @ 0x140000000
// Callees: 29 | Callers: sub_140EAE830, sub_140EAF0F0 (tauri generate_handler! dispatcher)

// Tauri 命令 handler: 配置 auto-switch (自动切换) 阈值与开关
// 参数 (从 invoke body 反序列化):
//   - enabled: bool               — 是否启用自动切换
//   - threshold5hPercent: u32     — 5小时阈值百分比
//   - thresholdWeeklyPercent: u32 — 周阈值百分比
// 返回: Result<(), String>
// 副作用: WRITE 配置文件(mutation) | TRIGGER 运行时刷新

// === 反编译重建 (IDA disasm 0x140d44bd0 - 0x140d45c80) ===

void configure_auto_switch(AppState *state, InvokeMessage *msg) {
    // 入口: push rbp/r15/r14/r13/r12/rsi/rdi/rbx; sub rsp, 428h
    // r12 = rdx (InvokeMessage/args), r14 = rcx (AppState)

    // 1. 状态初始化 — switch(4 cases) on state->field[0x2270]
    //    case 0 (loc_140D44C28): 设 [r14+2271h]=0x0101, [r14+2273h]=1
    //      memcpy(dst=&state[0x11F8], src=&state[0x188], size=0x1070) via sub_14172B820
    //    case 3 (loc_140D44C6E): 复用现有 state, 跳过初始化
    //    case 1/2 (loc_140D45BE0/EE): 早退路径

    // 2. 命令分发 — switch(8 cases) on state->field[0x2260]
    //    tauri generate_handler! 宏展开的命令分发表
    //    case 0 (loc_140D44C8D): configure_auto_switch 命令路径
    //    case 3 (loc_140D44EBB): set_auto_switch 路径
    //    case 4 (loc_140D44EDF): 二级 switch(5 cases)
    //    case 7 (loc_140D44F1A): 三级 switch(5 cases)

    // 3. 命令名查找 + 上下文绑定
    //    构造 InvokeBody: { cmd="configure_auto_switch"(0x15 bytes), ctx="app"(3 bytes) }
    //    → sub_1401A9630(&invoke_body, &out_match)  // tauri 命令匹配器
    //    if (out_match.result == -1) goto loc_140D45041  // error: 命令未注册

    // 4. 参数提取 — "threshold5hPercent" (0x12 bytes)
    //    构造 ArgQuery: { key="threshold5hPercent", len=0x12 }
    //    → sub_1409545C0(&args, &arg_query, &out_val)  // 参数反序列化器
    //    if (out_val.tag == 0xFF) goto loc_140D4505F  // error: 参数缺失/类型错误
    //    threshold5hPercent = out_val.value

    // 5. 后续参数提取 (嵌套 switch)
    //    switch(5 cases)@0x140D44F57 → 提取 enabled, thresholdWeeklyPercent
    //    每个 arg 走 sub_1409545C0 提取模式

    // 6. 核心配置操作
    //    → sub_140203A20(&parsed_args, &config_result)
    //      校验阈值范围 (0-100)
    //      写入配置: enabled + threshold5hPercent + thresholdWeeklyPercent
    //      提交配置变更 (mutation)

    // 7. 结果处理
    //    成功路径 (loc_140D45560→loc_140D4557E→loc_140D45A89):
    //      emit "Auto-switch configuration committed" 事件
    //      触发运行时刷新 (sub_140D9FA30)
    //      若刷新失败: 错误 "RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATE"
    //    错误路径 (loc_140D45041/0x140D4505F):
    //      序列化错误信息, 返回 Err

    // 8. 响应序列化 + 返回
    //    → sub_140505F80 (Tauri response 序列化)
}

// === 关键 callee 语义 (xref + string 绑定推断) ===
// sub_1401A9630  — tauri 命令匹配器 (cmd_name + "app" ctx → match_result)
// sub_1409545C0  — 参数反序列化器 (args + "threshold5hPercent" key → value)
// sub_140203A20  — 核心操作分发器 (parsed_args → config_result)
// sub_14172B820  — memcpy (state template copy, 0x1070 bytes)
// sub_140502620  — Tauri Response 序列化 (成功响应)
// sub_14085ACD0  — 配置写入器 (mutation)
// sub_140C98E70  — 阈值校验 (range 0-100)
// sub_14050C140  — InvokeResponse 构造
// sub_140D9FA30  — 运行时刷新触发
// sub_140505F80  — InvokeResponse 发送
// sub_1409543D0  — 事件 emit ("Auto-switch configuration committed")
// sub_140CA62F0  — 错误字符串构造
// sub_14176E860  — Tauri State 访问器
// sub_14139A2E0  — 错误处理/panic catch
// sub_14172E34C  — Drop/析构
// nullsub_1      — 空桩 (未实现可选路径)

// === 破坏性副作用标注 ===
// WRITE: 配置文件写入 (sub_14085ACD0, mutation)
// TRIGGER: 运行时刷新 (sub_140D9FA30, 失败报 RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATE)
// VALIDATE: 阈值范围校验 (sub_140C98E70, 0-100)
