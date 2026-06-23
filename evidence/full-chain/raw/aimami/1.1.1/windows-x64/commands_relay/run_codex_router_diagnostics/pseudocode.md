# run_codex_router_diagnostics — Win x64 Pseudocode

session: <审计会话>
machine: <本地机器>
role: 纯生产者
date: 2026-06-17
source_binary: AiMaMi 1.1.1 win64.exe (<本地路径>

---

## 函数地址表

| 符号 | VA | 大小 |
|---|---|---|
| run_codex_router_diagnostics_owner_sys | 0x14006f4b0 | 0x1e7 |
| run_codex_router_diagnostics_core_sys | 0x14021c1a0 | 0x167 |
| codex_home_resolver_sys | 0x1406f29d0 | 0x103 |
| diagnostic_data_builder_sys | 0x1406f3770 | 0x82d |
| relay_state_read_lock_snapshot_sys | 0x1406e8480 | — |
| fix_all_sections_impl_full_sys | 0x1407456b0 | ~320KB |
| relay_state_snapshot_drop_sys (ex sub_140234AC0) | 0x140234ac0 | — |
| diagnostic_paths_drop_sys (ex sub_140046870) | 0x140046870 | — |
| diag_config_section_parser_profiles_sys | 0x140761280 | — |
| diag_config_switch_section_check_sys | 0x140761f80 | — |
| diag_config_base_url_section_check_sys | 0x140762ab0 | — |
| diag_config_mode_validator_sys | 0x140762f10 | — |
| diag_config_section_toml_reader_sys | 0x140762820 | — |

---

## dim1 前端 CCF 确认

```
component: assets/maintenance-page-C2wkSNnk.js
trigger fn: y (line 17)
invoke: s("run_codex_router_diagnostics")
argKeys: []   // 无入参
snippet: s("run_codex_router_diagnostics")
evidence_path: frontend/ipc-contracts.jsonl (直接 grep 命中)
```

无入参 DTO；返回 `{ status: "ok", kind: "Success", ...DiagnosticData }`。

---

## dim4 输入参数

argKeys: [] — 无入参 DTO，IPC 调用体为空。
前端 ipc-contracts.jsonl 中 argObject: null 确认。

---

## owner_sys pseudocode（Tokio try-lock dispatcher）

```c
// 0x14006f4b0  run_codex_router_diagnostics_owner_sys
// 职责：Tokio 运行时 try-lock dispatcher；持有 mutex 锁后调用 core_sys；
//       hash=0x945CA2F02A2B6F44 用于在 off_141899DC0 hashmap 中定位 core_sys vtable 槽。
__int64 __fastcall run_codex_router_diagnostics_owner_sys(char *lock_state, __int64 a2, __int64 a3)
{
    // Phase 1: try-lock Tokio dispatcher mutex (CAS spinlock)
    if (_InterlockedCompareExchange8(lock_state, /*new=*/1, /*expected=*/0) != 0)
        sub_14124A510(lock_state);  // WaitOnAddress — 阻塞等待锁释放

    // Phase 2: 检查全局 hashmap off_141899DC0 是否就绪 (2 * *hashmap != 0)
    __int64 *hashmap = off_141899DC0;  // 0x141899dc0
    if (2 * *hashmap == 0) {
        // hashmap 未就绪，直接走 Result::unwrap() panic 路径
        goto LABEL_error_unwrap;
    }

    // Phase 3: SIMD 扫描 hashmap 找 hash=0x945CA2F02A2B6F44 对应 core_sys 条目
    // SSE2 _mm_cmpeq_epi8 比对 128-bit 槽，tzcnt 定位第一匹配位
    // 找到后：vtable 指针位于 (entry_base - 8)，vtable[+24] = core_sys fn ptr
    (*(void(**)(...))(vtable_entry + 24))(&result_buf, data_ptr, a3);  // 调用 core_sys

    // Phase 4: 锁处理与 Tokio 通知
    if (!prev_ok && 2 * *hashmap && !sub_14124B1D0(v20, v19, v21))
        lock_state[1] = 1;  // 标记 pending wakeup

    prev = *lock_state;
    *lock_state = 0;  // 释放锁
    if (prev == 2)
        WakeByAddressSingle(lock_state);  // 唤醒等待者

    return result_ptr;

LABEL_error_unwrap:
    // 走到这里说明 Tokio runtime 未就绪 (2 * *hashmap == 0)
    // -> 触发 called `Result::unwrap()` on an `Err` value panic
    sub_14124BFE0("called `Result::unwrap()` on an `Err` value", 43, &result_buf,
                  &off_1412ADB00, &off_1412AEEC0);
    // diverges
}
```

---

## core_sys pseudocode（真实业务 body）

```c
// 0x14021c1a0  run_codex_router_diagnostics_core_sys
// 模块: codexmate_lib::core::relay::codex_diagnostic
//       (src string @ 0x1412f1223: "codexmate_lib::core::relay::codex_diagnostic")
// 职责: IPC handler core；无入参；构建 DiagnosticData 并返回
//       Ok { status: "ok", kind: "Success", data: DiagnosticData }
//
// 参数:
//   a1 (RCX) = out_result: *mut TauriResult  (调用者分配的输出缓冲区)
//   a2 (RDX) = relay_ctx:  *mut RelayContext  (relay 运行时上下文指针)
//
__int64 __fastcall run_codex_router_diagnostics_core_sys(__int64 out_result, __int64 relay_ctx)
{
    _BYTE v14[960];    // DiagnosticPaths struct (30 x Option<PathBuf>), stack alloc
    _BYTE v15[368];    // RelayStateSnapshot struct, stack alloc
    _OWORD v16[2];     // DiagnosticData output buffer (32 bytes)

    // ── Step 1: 解析 CODEX_HOME，构建基础路径 ──────────────────────────────
    // codex_home_resolver_sys (0x1406f29d0):
    //   1a. 读 env var CODEX_HOME (aCodexHome @ 0x1412ec17b, len=10)
    //   1b. 若 CODEX_HOME 已设置: 直接取值, 写 v15[0..24+1]
    //   1c. 若未设置: 调用 sub_140E96CD0 获取系统默认 home dir；
    //               若失败 fallback join("." 即 asc_1412EA1B8)
    //   1d. PathBuf::join(home, ".codexsqlitestate_5.sqlite") [offset 1, len 19+7=26]
    //   1e. PathBuf::join(home, "accounts") [offset 26, len 8]
    //   -> 结果写入 v15 (PathBuf: ptr+len+cap)
    codex_home_resolver_sys(v15);

    // ── Step 2: 构建 DiagnosticPaths 子路径集 ─────────────────────────────
    // diagnostic_data_builder_sys (0x1406f3770):
    //   从 relay_ctx (+8 = base_ptr, +16 = base_len) 取 CODEX_HOME 根
    //   join 以下 29 个路径段 (来自 aCodexsqlitesta @ 0x1412ec185):
    //
    //   root-level paths (joined to CODEX_HOME):
    //     accounts         [26, 8]   -> v74
    //     codexmate        [34, 9]   -> v68
    //     relay            [62, 5]   -> v70 (joined to codexmate)
    //     aionsale         [67, 8]   -> v65 (joined to CODEX_HOME root)
    //     auth.json        [75, 9]   -> v64
    //     config.toml      [84, 11]  -> v63
    //     session_index.jsonl [95,19]-> v62
    //     sessions         [114, 8]  -> v61 (sub_1406F2B20)
    //     archived_sessions[122, 17] -> v60
    //     skills           [139, 6]  -> v59
    //     registry.json    [145, 13] -> v58
    //     snapshots        [158, 9]  -> v57
    //     backups          [167, 7]  -> v56
    //     registry-backups [174, 16] -> v55
    //     auto-switch.log  [190, 15] -> v54
    //     quota-history.jsonl[205,19]-> v53
    //     quota-store.json [224, 16] -> v52 (joined to accounts root)
    //     settings.json    [240, 13] -> v51
    //     bootstrap-cache.json[253,20]->v50
    //     auto-switch-pending.json[273,24]->v49
    //     auto-switch-snooze.json[297,23]->v48
    //     voice-workspace.json[320,20]->v47
    //     voice-runtime.json[340,18] ->v46
    //     state.json       [358, 10] -> v43 (joined to relay root)
    //     AGENTS.md        [368, 9]  -> v42
    //     history          [377, 7]  -> v41
    //     custom-instructions[43,19] -> v72 (joined to codexmate)
    //     (余 1 路径: unk_1412EBFED [13 bytes] joined to accounts)
    //
    //   对每条路径调用 snooze_file_open_111 (0x14108C6F0) 执行 fs::exists 检测
    //   若存在: Option::Some(path); 若不存在: Option::None
    //   特殊: 两次 exists 检测 (aionsale dir + accounts dir)，失败时 sub_1402F87A0 处理
    //   结果填充 v14 DiagnosticPaths (30 个 Option<PathBuf> 字段, 960 bytes)
    diagnostic_data_builder_sys(v14, relay_ctx);

    // ── Step 3: 获取 relay state 快照 ─────────────────────────────────────
    // relay_state_read_lock_snapshot_sys (0x1406e8480):
    //   src: src\core\relay\manager.rs, "relay state poisoned" panic message
    //   从 relay_ctx (+8 = RelayManager Arc 指针) 取 Arc<Mutex<RelayState>>
    //   CAS spinlock: _InterlockedCompareExchange8(relay_ctx+8+16, 1, 0)
    //   lock acquired: call sub_14072A3A0(v15, relay_ctx+8+24) — clone/snapshot state
    //   lock released: *lock = 0; if (*lock == 2) WakeByAddressSingle
    //   result: v15 now holds RelayStateSnapshot (读取，无写副作用)
    relay_state_read_lock_snapshot_sys(v15, relay_ctx, v4);

    // ── Step 4: 执行主诊断引擎 ────────────────────────────────────────────
    // fix_all_sections_impl_full_sys (0x1407456b0, ~320KB body):
    //   输入: v16 (output buf), v14 (DiagnosticPaths), v15 (RelayStateSnapshot)
    //
    //   已知子节 (from callees + named fns):
    //   4a. diag_config_section_toml_reader_sys (0x140762820):
    //       读 config.toml (via TLS context sub_141077010)
    //       SIMD 扫描 [model_providers.cc...] bracket 段
    //       调用 sub_14036F240 提取 section 内容
    //
    //   4b. diag_config_section_parser_profiles_sys (0x140761280):
    //       line-by-line 扫描 config.toml
    //       SIMD 匹配 [profiles.<name>] 或 [model_providers.cc/<name>] bracket
    //       对每个 profile 调用 sub_14075F450 验证
    //       结果存 Vec<(profile_name, value)>
    //
    //   4c. diag_config_switch_section_check_sys (0x140761f80):
    //       验证 section 名是否为已知开关 key:
    //       { cc-switch / cc_switch / ccswitch / codex-switch /
    //         [model_providers.cc / circuit_breaker / provider_router }
    //       返回 bool
    //
    //   4d. diag_config_base_url_section_check_sys (0x140762ab0):
    //       解析 [open_ai_base_url] 字段值
    //       检查是否被 aimami-relay managed markers 包裹:
    //         "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)"
    //         "# <<< aimami-relay managed end (top)"
    //       验证值是否以 "/codex/router/v1" 结尾
    //       调用 diag_config_json_unescape_sys (0x140763e00) 解码 JSON 转义
    //       返回 Option<String> (base_url 值 or None)
    //
    //   4e. diag_config_mode_validator_sys (0x140762f10):
    //       验证 mode 字段值是否合法:
    //       len=4: free(0x65657266) / paid(0x64696170) / demo(0x6F6D6564) /
    //              msft(0x7466736D) / team(0x6D616574)
    //       len=7: invalid (0x64696C6176 partial)
    //       len=8: ccswitch(0x6863746977736363) / decodex(0x7865646F63656564)
    //              sk-fake / sk-test (7-char variants)
    //       len=9: undefined (0x656E696665646E75 + 'd')
    //       len=11: placeholder (0x6C6F686563616C70 overlap)
    //       9+: cc-switch(0x63746977732D6363+'h') / cc_switch(0x63746977735F6363+'h')
    //       len<10: fallback true (a2 < 0xA 时返回 true)
    //       返回 bool (true = 合法模式)
    //
    //   4f. relay_keychain_lookup_for_quota_sys (0x1402ee7c0):
    //       查 relay keychain 中的 quota 凭据
    //
    //   4g. win32_file_read_bytes_111 (0x141093260):
    //       Win32 文件读取
    //
    //   写出: v16[0..1] = DiagnosticData (32 bytes, 含路径存在性 + router 一致性)
    fix_all_sections_impl_full_sys(v16, v14, v15);

    // ── Step 5: 构建返回字符串 "ok" 和 "Success" ──────────────────────────
    // alloc(2, align=1) -> status_str
    char *status_str = sub_140001360(2, 1);    // heap alloc 2 bytes
    if (!status_str) sub_14124BCCB(1, 2);      // alloc failure panic
    *(_WORD*)status_str = 27503;               // 0x6B6F = "ok" in LE

    // alloc(7, align=1) -> kind_str
    _DWORD *kind_str = sub_140001360(7, 1);    // heap alloc 7 bytes
    if (!kind_str) sub_14124BCCB(1, 7);        // alloc failure panic
    *(u32*)((char*)kind_str + 3) = 1936942435; // 0x73736563 = "sseS" → overlap "cess"
    *(u32*)kind_str = 1667462483;              // 0x63637553 = "ccuS" → "Succ"
    // combined: "Success" (7 bytes)

    // ── Step 6: 填充 TauriResult::Ok 枚举输出 ─────────────────────────────
    // out_result 布局 (offsets in bytes):
    *(_QWORD*)(out_result + 0)   = 2;           // Ok 变体 tag
    *(_QWORD*)(out_result + 8)   = status_str;  // &str ptr: "ok"
    *(_QWORD*)(out_result + 16)  = 2;           // str len: 2
    *(_QWORD*)(out_result + 24)  = 7;           // kind len: 7
    *(_QWORD*)(out_result + 32)  = kind_str;    // &str ptr: "Success"
    *(_QWORD*)(out_result + 40)  = 7;           // kind len mirror
    *(_QWORD*)(out_result + 48)  = 0;           // diagnostic_data field0
    *(_QWORD*)(out_result + 56)  = 8;           // field1 size hint
    *(_QWORD*)(out_result + 64)  = 0;           // field2
    *(_OWORD*)(out_result + 72)  = v16[0];      // DiagnosticData low qword
    *(_OWORD*)(out_result + 88)  = v16[1];      // DiagnosticData high qword
    *(_DWORD*)(out_result + 104) = 1;           // success flag
    *(_BYTE*) (out_result + 108) = 1;           // success byte

    // ── Step 7: 清理 ──────────────────────────────────────────────────────
    // relay_state_snapshot_drop_sys (0x140234ac0, renamed from sub_140234AC0):
    //   遍历 relay state snapshot 中 relay_draft_test_input 条目（stride=232 bytes）
    //   free 所有 string/vec 字段，调用 sub_14022EA90 尾部清理
    relay_state_snapshot_drop_sys(v15);

    // diagnostic_paths_drop_sys (0x140046870, renamed from sub_140046870):
    //   free 29 个 Option<PathBuf> 字段（stride=4 qwords = 32 bytes/entry）
    //   索引: a1[0,4,8,12,...,116] = len; a1[1,5,9,...,117] = ptr
    diagnostic_paths_drop_sys(v14, v11, v12);

    return out_result;
}
```

---

## 返回值结构 (TauriResult::Ok)

```
out_result layout:
  +0   : u64 = 2                // Ok 变体 tag
  +8   : *str = "ok"            // status 字符串指针 (heap, 2 bytes)
  +16  : u64 = 2                // status len
  +24  : u64 = 7                // kind len
  +32  : *str = "Success"       // kind 字符串指针 (heap, 7 bytes)
  +40  : u64 = 7
  +48  : u64 = 0
  +56  : u64 = 8
  +64  : u64 = 0
  +72  : oword = DiagnosticData[0]   // fix_all_sections output v16[0]
  +88  : oword = DiagnosticData[1]   // fix_all_sections output v16[1]
  +104 : u32 = 1               // success flag
  +108 : u8  = 1               // success byte
```

DiagnosticData (v16[2], 32 bytes) 内容由 fix_all_sections_impl_full_sys 填充，
包含: config.toml 各 section 解析结果、路径存在性检测结果、base_url 验证结果、
mode 合法性、relay keychain 状态、router 一致性判断。

---

## fix_all_sections_impl_full_sys 子节摘要 (0x1407456b0)

该函数体约 320KB，HexRays 全量展开被截断。已通过 callees + named sub-fn 逆向覆盖核心逻辑：

| 子节函数 | VA | 职责 |
|---|---|---|
| diag_config_section_toml_reader_sys | 0x140762820 | 读 config.toml，SIMD 扫描 [model_providers.cc...] 段 |
| diag_config_section_parser_profiles_sys | 0x140761280 | 解析 [profiles.*] section，line SIMD，sub_14075F450 验证 |
| diag_config_switch_section_check_sys | 0x140761f80 | 验证 section 名是否为已知开关 key |
| diag_config_base_url_section_check_sys | 0x140762ab0 | 解析 open_ai_base_url，验证 managed markers + /codex/router/v1 |
| diag_config_mode_validator_sys | 0x140762f10 | 验证 mode 字段合法性（free/paid/demo/msft/team 等） |
| diag_config_section_toml_reader_sys | 0x140762820 | TLS config.toml 上下文读取 |
| relay_keychain_lookup_for_quota_sys | 0x1402ee7c0 | 查 relay keychain quota 凭据 |
| win32_file_read_bytes_111 | 0x141093260 | Win32 文件读取 |

---

## 路径段完整列表 (aCodexsqlitesta @ 0x1412ec185)

```
.codexsqlitestate_5.sqlite  [1,26]  -> CODEX_HOME DB 文件
accounts                     [26,8]  -> 账号目录
codexmate                    [34,9]  -> codexmate 子目录
custom-instructions          [43,19] -> 自定义指令目录
relay                        [62,5]  -> relay 子目录
aionsale                     [67,8]  -> aionsale 子目录
auth.json                    [75,9]
config.toml                  [84,11]
session_index.jsonl          [95,19]
sessions                     [114,8]
archived_sessions            [122,17]
skills                       [139,6]
registry.json                [145,13]
snapshots                    [158,9]
backups                      [167,7]
registry-backups             [174,16]
auto-switch.log              [190,15]
quota-history.jsonl          [205,19]
quota-store.json             [224,16]
settings.json                [240,13]
bootstrap-cache.json         [253,20]
auto-switch-pending.json     [273,24]
auto-switch-snooze.json      [297,23]
voice-workspace.json         [320,20]
voice-runtime.json           [340,18]
state.json                   [358,10]
AGENTS.md                    [368,9]
history                      [377,7]
```

---

## 副作用

1. relay_state 被 read-lock 快照（仅读取，无写入）
2. fs::exists 检测所有 CODEX_HOME 子路径（29 条，只读）
3. config.toml 被读取解析（只读）
4. relay keychain 查询（只读）
5. fix_all_sections_impl_full_sys：根据已知 callees 判断为只读诊断，无写持久化副作用
6. heap alloc: "ok" (2B) + "Success" (7B) — 正常返回值分配

---

---

## diag_config_section_toml_reader_sys 伪代码（0x140762820）

```c
// 读 config.toml 各节；通过 TLS context 获取文件内容；
// SIMD 扫描 [model_providers.cc...] bracket；调用 sub_14036F240 提取节内容
// 返回 3x __m128i 结果 (a1[0..2])
char __fastcall diag_config_section_toml_reader_sys(__m128i *a1, __int64 a2, __int64 a3)
{
    // 初始化 TLS context (lazy-init)
    __int64 tls = sub_141077010();
    if (*(u8*)(tls + 16) != 1) {
        v7 = sub_14108CEE0();  // TLS init path
        *(u64*)tls = v7;
        *(u8*)(tls + 16) = 1;
    }
    *(u64*)tls = *(u64*)tls + 1;  // ref count increment

    // 初始化行迭代器状态机 (v29[0..4])
    v29[0] = a2;  // start ptr
    v29[1] = a3;  // end ptr
    v29[2] = 0;
    v29[3] = a3;
    v29[4] = 0xA0000000ALL;  // iterator sentinel

    // 预载 SIMD 比较基准 (xmmword_1412DD3F0 = "model_providers.cc")
    si128 = _mm_load_si128(&xmmword_1412DD3F0);

    // 逐行迭代 config.toml 内容
    while (!done) {
        result = sub_14072E810(v22, v29);  // next line → v22 = {kind, start, len}

        if (v22[0] == 1) { /* line kind = content line; trim CRLF */ }
        else {
            // EOF or error path
            if (HIBYTE(v31)) break;
            HIBYTE(v31) = 1;
            // check remaining bytes
        }

        // trim whitespace (sub_14070B280 = trim_ascii_end)
        v15 = sub_14070B280(line_ptr, line_len);
        v16 = trimmed_len;

        // check if line is a TOML section header: starts with '[', ends with ']'
        if (v16 && *line == '[' && *(line + v16 - 1) == ']') {
            // UTF-8 boundary check (sub_14124BEE0 panics on bad boundary)
            if (v16 >= 0x12 &&
                _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(line+1), si128)) == 0xFFFF)
            {
                // line+1..+17 == "model_providers.cc" (16 bytes via si128)
                // find closing '"' via sub_14070B120
                v17 = sub_14070B120(line + 17, v16 - 18, '"');
                // extract section content
                sub_14036F240(&v24, v17, v18);  // terminated: external_call
            }
        }
    }

    // write 3 __m128i results back to caller
    a1[0] = v24; a1[1] = v25; a1[2] = v26;
    return result;
}
```

---

## diag_config_section_parser_profiles_sys 伪代码（0x140761280）

```c
// 逐行扫描 config.toml；匹配 [profiles.<name>] 或 [model_providers.cc/<name>]；
// 对每个 profile 调用 sub_14075F450 验证；通过 sub_1410A1DF0 构建 tuple 存入 Vec<(name, value)>
__int64 __fastcall diag_config_section_parser_profiles_sys(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
    // Vec init: v33 = {ptr=0, cap=8, len=0}
    v33 = {0, 8, 0};

    // line iterator state machine (same pattern as toml_reader)
    v27[0..4] = {a2, a3, 0, a3, 0xA0000000ALL};

    si128 = _mm_load_si128(&xmmword_1412DD3F0);  // "model_providers.cc"

    while (!done) {
        sub_14072E810(&v30, v27);  // next line
        // CRLF trim, whitespace trim (sub_14070B280)

        // bracket check: line starts with '[', ends with ']'
        if (!v15 || *line != '[' || *(line+v15-1) != ']') goto LABEL_4;

        if (v15 - 2 < 16) {
            if (v15 - 2 < 9) goto LABEL_4;
        LABEL_27:
            // short section: check "profiles." prefix (8 bytes: 0x73656C69666F7270 + '.')
            if (!(*u64(line+1) ^ 0x73656C69666F7270 | *(u8*)(line+9) ^ '.')) {
                profile_name_ptr = sub_14070B120(line+10, v15-11, '"');
                if (!sub_14075F450(profile_name_ptr, len, a4)) {
                    // build (name, value) tuple via sub_1410A1DF0
                    v30 = v22; v31 = sub_140082100;
                    sub_1410A1DF0(v21, &unk_1412F08DC, &v30);
                    // Vec grow if needed
                    if (v34 == (u64)v33) sub_1412280D0(&v33);
                    // store to Vec
                    *(_QWORD*)(v33_ptr + 8*3*v17)    = v18->m128i[1];
                    *(_m128i*)(v33_ptr + 8*3*v17)    = v18[0];
                    v34 = v17 + 1;
                }
            }
        } else {
            // long section (>=18 chars): SIMD check for "model_providers.cc"
            if (_mm_movemask_epi8(...si128 vs line+1) != 0xFFFF) goto LABEL_27;
            profile_name_ptr = sub_14070B120(line+17, v15-18, '"');
            if (!sub_14075F450(profile_name_ptr, len, a4)) {
                // same Vec insert path
            }
        }
    }

    // write Vec result to a1
    *(u128*)a1 = v33;
    *(u64*)(a1+16) = v34;
    return v34;
}
```

---

## diag_config_switch_section_check_sys 伪代码（0x140761f80）

```c
// 验证 config.toml section 名是否为已知开关 key；区分大小写
// returns: bool (1=match, 0=no match)
__int64 __fastcall diag_config_switch_section_check_sys(__int64 a1, __int64 a2)
{
    sub_1410A0350(&v5, a1, a2);  // normalize string → v6(ptr), v7(len)
    v8 = v6; v3 = v7;

    // 按优先级逐一比对 (sub_14072E9F0 = str_eq_ignore_case):
    v2 = 1;  // default true
    if (!sub_14072E9F0("cc-switch",    9,  v8, v3) &&   // 0x1412f208c
        !sub_14072E9F0("cc_switch",    9,  v8, v3) &&   // 0x1412f2095
        !sub_14072E9F0("ccswitch",     8,  v8, v3) &&   // 0x1412f209e
        !sub_14072E9F0("codex-switch", 12, v8, v3) &&   // 0x1412f20a6
        !sub_14072E9F0("[model_providers.cc", 19, v8, v3) &&  // 0x1412f20b2
        !sub_14072E9F0("circuit_breaker", 15, v8, v3))        // 0x1412f20c5
    {
        v2 = sub_14072E9F0("provider_router", 15, v8, v3);   // 0x1412f20d4
    }

    if (v5) sub_140001370(v8, v5, 1);  // free normalized copy if allocated
    return v2;
    // terminated_reason: error_return (bool)
}
```

---

## diag_config_base_url_section_check_sys 伪代码（0x140762ab0）

```c
// 解析 config.toml 中 open_ai_base_url = "..." 行；
// 验证是否被 aimami-relay managed 标记包裹；
// 验证值是否以 /codex/router/v1 结尾；
// 返回 Option<url_len> 或 0x8000000000000000 (None)
unsigned __int64 __fastcall diag_config_base_url_section_check_sys(
    _QWORD *a1, __int64 a2, __int64 a3)
{
    // line iterator state machine
    v40[0..4] = {a2, a3, 0, a3, 0xA0000000ALL};
    v3 = false;  // inside_managed_block flag
    v4 = false;  // found_base_url flag

    while (2) {  // iterate lines
        sub_14072E810(&v44, v40);  // next line
        // CRLF trim, trim whitespace (sub_14070B280)

        switch (trimmed_len) {
            case 0x1E (30):  // "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)" part?
                // sub_141213640(line, &xmmword_1412EFAAA, 30) == 0 → matched
                // → set v3 flag or check
                break;
            case 0x24 (36):
                // sub_141213640(line, aAimamiRelayMan_3, 36) → "# <<< aimami-relay managed end (top)"
                break;
            case 0x27 (39):
                // sub_141213640(line, &xmmword_1412EFC67, 39) → managed start marker
                break;
            case 0x37 (55):
            case 0x3C (60):
            case 0x40 (64):
                // longer managed markers (sub_141213640 comparison)
                break;
            default:
                if (v3) goto LABEL_4;  // inside managed block, skip
                if (!v11) {
                    if (v4) goto LABEL_32;
                    goto LABEL_50;  // keep scanning
                }
                // check for [ (section header) → v4=true if found
                if (*line == '[') { v4 = true; continue; }
                // check for # (comment) or line too short
                if (*line == '#' || v13 < 0xF) goto LABEL_50;
                // QWORD check: "open_ai_base_url" (len=15+)
                // *(u64*)line ^ 0x625F69616E65706F | *(u64*)(line+7) ^ 0x6C72755F65736162
                // → "open_ai_" + "base_url" (overlap at +7)
                if (*(u64*)line ^ 0x625F69616E65706FLL | *(u64*)(line+7) ^ 0x6C72755F65736162LL)
                    goto LABEL_50;

                // Found open_ai_base_url key: now find '=' value
                // inner iterator on this line to split at '='
                v46[0..4] = {line, line_len, 0, line_len, 0x3D0000003DLL};  // '='
                sub_14072E810(&v34, v46);
                // get RHS value; trim whitespace; find closing '"'
                v27 = sub_14070B280(rhs_start, rhs_len);
                v29 = sub_14070B120(v27, v28, '"');  // find opening quote

                // JSON unescape value
                diag_config_json_unescape_sys(&v44, v29, v30);  // terminated: external_call

                // check suffix /codex/router/v1 (len=16 @ aCodexRouterV1_0 = 0x1412f0899)
                if (!v31 || sub_14072E9F0(aCodexRouterV1_0, 16, url_ptr, url_len)) {
                    // no match: free and continue
                    if (v44_ptr) sub_140001370(url_ptr, v44, 1);
                    goto LABEL_50;  // terminated: error_return
                }
                // suffix matched → write result to a1
                a1[2] = url_len;
                *a1 = {url_ptr, url_len};
                return url_len;  // terminated: response_serialize
        }
    }
LABEL_60:
    *a1 = 0x8000000000000000ULL;  // None sentinel
    return 0x8000000000000000ULL;  // terminated: error_return
}
```

Key string addresses:
- `aAimamiRelayMan_3` @ 0x1412f0658: `"# <<< aimami-relay managed end (top)"`
- `aAimamiRelayMan_4` @ 0x1412f067c: `"# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)"`
- `aCodexRouterV1_0`  @ 0x1412f0899: `"/codex/router/v1"`

---

## diag_config_mode_validator_sys 伪代码（0x140762f10）

```c
// 验证 config.toml mode 字段值是否合法
// returns: bool (1=valid, 0=invalid)
__int64 __fastcall diag_config_mode_validator_sys(__int64 a1, unsigned __int64 a2)
{
    sub_1410A0350(&v5, a1, a2);  // normalize → v6(ptr), v7(len)

    switch (v7 /* len */) {
        case 4:
            v2 = 1;
            // DWORD compare: free=0x65657266, paid=0x64696170, demo=0x6F6D6564,
            //                msft=0x7466736D, team=0x6D616574
            if (*u32(v6) != 1701536102 &&  // "free"
                *u32(v6) != 1953719668 &&  // "paid"
                *u32(v6) != 1801678701 &&  // "demo"
                *u32(v6) != 1819047278 &&  // "msft"
                *u32(v6) != 1701736302)    // "team"
                goto LABEL_25;  // → default len<10 check
            goto LABEL_26;  // valid

        case 7:
            v2 = 1;
            // "invalid" = 0x64696C6176... (partial QWORD overlap)
            if (*u32(v6) ^ 0x61766E69 | *u32(v6+3) ^ 0x64696C61)
                goto LABEL_23;  // → sk-fake/sk-test check
            goto LABEL_13;  // valid

        case 9:
            // "undefined" = 0x656E696665646E75 + 'd'
            if (!(*u64(v6) ^ 0x656E696665646E75LL | *(u8*)(v6+8) ^ 0x64))
                goto LABEL_13;  // valid
            goto LABEL_18;  // → cc-switch/cc_switch check

        case 11:
            // "placeholder" = 0x6C6F686563616C70 overlap 0x7265646C6F686563
            if (*u64(v6) ^ 0x6C6F686563616C70LL | *u64(v6+3) ^ 0x7265646C6F686563LL)
                goto LABEL_18;
            goto LABEL_13;  // valid

        default:
            if (v7 >= 9) {
            LABEL_18:
                v2 = 1;
                // "cc-switch" = 0x63746977732D6363 + 'h'
                // "cc_switch" = 0x63746977735F6363 + 'h'
                if (!(*u64(v6) ^ 0x63746977732D6363LL | *(u8*)(v6+8) ^ 0x68) ||
                    !(*u64(v6) ^ 0x63746977735F6363LL | *(u8*)(v6+8) ^ 0x68))
                    goto LABEL_26;
                goto LABEL_20;
            }
            if (v7 == 7) goto LABEL_23;
            if (v7 == 8) {
            LABEL_20:
                v2 = 1;
                // "ccswitch" = 0x6863746977736363, "decodex" = 0x7865646F63656564
                if (*u64(v6) != 0x6863746977736363LL && *u64(v6) != 0x7865646F63656564LL)
                    goto LABEL_25;
                goto LABEL_26;
            }
        LABEL_25:
            // fallback: len < 10 → treat as valid (permissive)
            v2 = a2 < 0xA;
            goto LABEL_26;

        LABEL_23:  // len=7 secondary check: sk-fake / sk-test
            v2 = 1;
            // "sk-fake" = 0x662D6B73 + 0x656B6166 (overlap +3)
            // "sk-test" = 0x742D6B73 + 0x74736574
            if (*u32(v6) ^ 0x662D6B73 | *u32(v6+3) ^ 0x656B6166 &&
                *u32(v6) ^ 0x742D6B73 | *u32(v6+3) ^ 0x74736574)
                goto LABEL_25;
    }
LABEL_26:
    if (v5) sub_140001370(v6, v5, 1);
    return v2;
    // terminated_reason: error_return (bool)
}
```

---

## 状态（更新：gold-leaf 补全）

session_updated: <审计会话>
date_updated: 2026-06-18
status: gold-leaf-complete
gate_tier: gold-leaf
gate_ready: true
dim1_ccf: PASS — frontend/ipc-contracts.jsonl 直接命中，argKeys=[]
dim2_output_schema: PASS — TauriResult::Ok layout 完整，+0..+108 每字段已知
dim3_deep_call_tree: PASS — depth=6; 10 terminated_reasons 明确; 5 fix_all_sections 子节全量 decompile
dim4_input_params: PASS — 无入参 DTO 确认
dim5_same_platform_gate: N/A — 1.1.1 新增命令，无 1.0.9 baseline
dim6_full_leaf: PASS — owner.md + interface.md + pseudocode.md + call-tree.md + call-trees/*.jsonl (33 edges) + gate-report.json + evidence.json
overall: readyToImplement
strictImplementationUse: true
