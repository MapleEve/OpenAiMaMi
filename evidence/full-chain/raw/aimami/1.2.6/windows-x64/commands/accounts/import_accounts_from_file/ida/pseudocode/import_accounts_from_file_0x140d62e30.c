// Pseudocode reconstructed from IDA disassembly (Hex-Rays decompile returned null_cfunc)
// Source: IDA Pro disasm + strings + callees + basic_blocks analysis
// Function: import_accounts_from_file @ 0x140d62e30
// Size: 5954 bytes (0x1742), 162 basic blocks, cyclomatic complexity 51
// Module: commands/accounts (src\commands\accounts.rs + account_io.rs)
// Binary: AiMaMi 1.2.6 win64.exe @ 0x140000000
// Callees: 33 | Callers: sub_140EC11B0, sub_140EC1A70 (tauri generate_handler! dispatcher)

// Tauri 命令 handler: 从 filePath 导入账号文件
// 参数 (从 invoke body 反序列化):
//   - filePath: String               — 账号文件路径
//   - expectedContentSha256: Option<String> — 文件内容 SHA256 校验值
//   - overwriteExisting: bool         — 是否覆盖已有账号
//   - selectedKeys: Option<Vec<String>> — 仅导入指定 key 的账号
// 返回: Result<ImportResult, String>
// 副作用: WRITE 账号数据库(mutation) | FILE READ 读取账号文件 | TRIGGER 运行时刷新

// === 反编译重建 (IDA disasm 0x140d62e30 - 0x140d64572) ===

void import_accounts_from_file(AppState *state, InvokeMessage *msg) {
    // 入口: push rbp/r15/r14/r13/r12/rsi/rdi/rbx; sub rsp, 0A28h
    // r12 = rdx (InvokeMessage/args), r15 = rcx (AppState)

    // 1. 状态初始化 — switch(4 cases) on state->field[0x24B0]
    //    case 0 (loc_140D62E81): 设 [r15+24B1h]=0x0101, [r15+24B3h]=1
    //      memcpy(dst=&state[0x1318], src=&state[0x188], size=0x1190) via sub_14172B820
    //    case 3 (loc_140D62EC7): 复用现有 state, 跳过初始化
    //    case 1/2 (loc_140D64481/73): 早退路径

    // 2. 命令分发 — switch(5 cases) on state->field[0x24A0]
    //    tauri generate_handler! 宏展开的命令分发表
    //    case 0 (loc_140D62EE6): import_accounts_from_file 命令路径
    //    case 3 (loc_140D630D3): preview_account_import 路径
    //    case 4 (loc_140D630F0): 二级 switch(4 cases)

    // 3. 命令名查找 + 上下文绑定
    //    构造 InvokeBody: { cmd="import_accounts_from_file"(0x19 bytes), ctx="app"(3 bytes) }
    //    → sub_1401A9630(&invoke_body, &out_match)  // tauri 命令匹配器
    //    if (out_match.result == -1) goto loc_140D63C35  // error: 命令未注册

    // 4. 参数提取 — "filePath" (8 bytes)
    //    构造 ArgQuery: { key="filePath", len=8 }
    //    → sub_140955980(&args, &arg_query, &out_val)  // 参数反序列化器
    //    if (out_val.tag == 0xFF) goto loc_140D63396  // error: 参数缺失/类型错误
    //    filePath = out_val.value

    // 5. 后续参数提取 (嵌套 switch)
    //    switch(6 cases)@0x140D63100 → switch(5 cases)@0x140D6314F → switch(4 cases)@0x140D6332A
    //    提取: expectedContentSha256, overwriteExisting, selectedKeys
    //    每个 arg 走 sub_140955980 提取模式

    // 6. 核心导入操作
    //    → sub_140203A20(&parsed_args, &import_result)
    //      读取 filePath 指向的账号文件
    //      若 expectedContentSha256 非空: SHA256 校验
    //      若 overwriteExisting=false: 跳过已存在账号
    //      若 selectedKeys 非空: 仅导入指定 key 的账号
    //      写入账号数据库 (mutation)

    // 7. 结果处理
    //    成功路径 (loc_140D63902→loc_140D63952→loc_140D63E09):
    //      序列化 import_result (sub_140CAB2C0/sub_140CAB140)
    //      emit "Accounts were imported" 事件 (sub_1409562A0)
    //      触发运行时刷新 (sub_140DB62C0)
    //      若刷新失败: 错误 "RUNTIME_REFRESH_FAILED_AFTER_IMPORT"
    //    错误路径 (loc_140D63396→loc_140D6340B):
    //      序列化错误信息, 返回 Err

    // 8. 响应序列化 + 返回
    //    → sub_140505F80/sub_140509B00 (Tauri response 序列化)
}

// === 关键 callee 语义 (xref + string 绑定推断) ===
// sub_1401A9630  — tauri 命令匹配器 (cmd_name + "app" ctx → match_result)
// sub_140955980  — 参数反序列化器 (args + "filePath" key → deserialized value)
// sub_140203A20  — 核心操作分发器 (parsed_args → import_result)
// sub_14172B820  — memcpy (state template copy, 0x1190 bytes)
// sub_140CAB2C0  — Tauri Response 序列化 (成功响应)
// sub_140CAB140  — Tauri Response 序列化 (错误响应)
// sub_140505F80  — InvokeResponse 构造
// sub_140509B00  — InvokeResponse 发送
// sub_14049D260  — SHA256 校验
// sub_140856D70  — 账号文件解析
// sub_140AFFC30  — 账号数据库写入 (mutation)
// sub_140DB62C0  — 运行时刷新触发
// sub_1409562A0  — 事件 emit ("Accounts were imported")
// sub_140C9C190  — 错误字符串构造
// sub_1401A9D00  — 内存分配 (结果对象)
// sub_14176E860  — Tauri State 访问器
// sub_14139A2E0  — 错误处理/panic catch
// sub_14172E34C  — Drop/析构
// nullsub_1      — 空桩 (未实现可选路径)

// === 破坏性副作用标注 ===
// WRITE: 账号数据库写入 (sub_140AFFC30, mutation)
// FILE_READ: 读取账号文件 filePath (sub_140856D70)
// TRIGGER: 运行时刷新 (sub_140DB62C0, 失败报 RUNTIME_REFRESH_FAILED_AFTER_IMPORT)
// VALIDATE: SHA256 校验 (sub_14049D260, 若 expectedContentSha256 非空)
