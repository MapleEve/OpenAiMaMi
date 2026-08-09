# remove_mcp_server — AiMaMi 1.1.1 win64 伪代码

session: <审计会话> (补满 gold-leaf; prior: <审计会话>)
machine: <本地机器> (纯生产者)
delta_class: integrity_recovered
baseline: 1.0.9 已逆完
idb: <本地路径>
<工具调用>d: true
gold_leaf: true
dim1_ccf: PASS — removeMcpServer:t=>ne("remove_mcp_server",{name:t}) @ assets/index-DdcCOEJG.js:86
dim2_argkeys: ["name"] frontend / ["name","repo"] backend gate
dim3_depth: 6 (all branches terminated)
dim4_dto: McpServerSummary@+72..+128, total 0x88B response
dim5_gate: PASS — tauri_ipc_main_dispatcher_sys xref 0x14001026c

---

## 1. remove_mcp_server_ipc_handler_111

**VA: 0x140019040 | size: 0x4C1**

```c
// DELTA vs 1.0.9:
// 新增 (1) pending_auto_switch_state_lock_acquire_111 锁检查
// 新增 (2) query_installed_skills_with_repo_111 repo+name 双字段 gate
// 新增 (3) IPC 参数字段 repo: String（1.0.9 只有 name）
// SIDE-EFFECT: 修改 ~/.codex/config.toml [mcp_servers.<name>] 节，原子写盘

__int64 __fastcall remove_mcp_server_ipc_handler_111(__int64 ipc_ctx)
{
  // 1. 从 ipc_ctx 提取 IPC payload（sub_141212FB0 = memcpy-like）
  sub_141212FB0(v17, ipc_ctx, 0x208);
  sub_141212FB0(v19, ipc_ctx + 520, 0x190);

  // 2. 【DELTA-NEW】pending_auto_switch 锁：若当前正处于 auto-switch 待定状态则拒绝
  v4 = pending_auto_switch_state_lock_acquire_111(state_lock_ptr);
  if (!v4) {
    // 3. 【DELTA-NEW】query_installed_skills_with_repo_111(out, cmd_name="remove_mcp_server", repo_param)
    //    返回 discriminant=6 = None(not found) → 返回 Error
    query_installed_skills_with_repo_111(&v38, &cmd_name_ref, &repo_param_ref);
    if (v38.m256i_i8[0] != 6) {  // 6 = Some(found)
      // skill 不存在对应 repo → 组 Error 响应返回
      goto error_repo_not_found;
    }
    v4 = v38.m256i_i64[1];  // skill store handle
  }

  // 4. 解析 name 参数（sub_1402FED40 = IPC param deserializer）
  sub_1402FED40(&v30, &name_param_ref);
  if (v30.m256i_i8[0] == 6) {  // 6 = Ok(name parsed)
    // 5. 调用核心 executor
    remove_mcp_server_exec_111(&v23, v4, &name_str);

    // 6. 序列化响应 → sub_140839BF0(IPC response)
    if (!overflow_check(v23.m128i_i64[0])) {
      sub_140839BF0(&ipc_resp, &v30);
    } else {
      // 错误结果：组 Error 响应
      // Result::Err tag = 0x8000000000000000
      goto error_exec;
    }
  }

error_repo_not_found:
  // 组 Error 响应 via sub_14080C3C0
  sub_14080C3C0(ipc_resp_ctx, ...);

LABEL_18:
  // 清理 skill query 结果 vec（drop McpServerSummary entries，每项 96B）
  while (v43_count != 0) {
    sub_14033AB50(entry_ptr);  // drop McpServerSummary entry
    entry_ptr += 12;
  }
  if (v40_capacity) sub_140001370(v40_buf, 96 * v40_capacity, 8);
  return sub_140042650(v17);
}
```

---

## 2. remove_mcp_server_exec_111

**VA: 0x1401C4F40 | size: 0x755**

```c
// 核心写盘 executor
// DELTA: InterlockedCompareExchange8 spinlock（1.0.9 无此保护）
// 两阶段写盘：read+hashmap_remove → toml_parse+section_remove

__int64 __fastcall remove_mcp_server_exec_111(
    __int64 result_out,
    _BYTE *lock_byte,     // pending_auto_switch spinlock byte
    _QWORD *name_str)     // {ptr, len}
{
  // 1. spinlock try-acquire（InterlockedCompareExchange8，old=0 new=1）
  if (_InterlockedCompareExchange8(lock_byte, 1, 0)) {
    // 已被锁，走 poison-guard 路径
    sub_14124A510(lock_byte);  // lock poison handler（编译噪声：Mutex poison）
  }

  // 2. 全局 debug flag 检查（off_141899DC0）
  if (2 * *off_141899DC0) {
    // debug build 路径，sub_14124B1D0 = debug lock state check
  }

  // 3. spinlock 已持有 → 检查 lock_byte[1]（is_poisoned flag）
  if (lock_byte[1]) {  // poisoned → return Error
    // 构造 Err 响应 tag 0x8000000000000000
    *result_out = 0x8000000000000000ULL;
    goto LABEL_26;
  }

  // 4. 第一阶段：mcp_config_read_and_remove_entry_111
  //    读 config 文件 → hashmap probe → 移除 entry → 重新排列剩余 entry
  mcp_config_read_and_remove_entry_111(
      v48,          // out Result
      file_path_ptr, file_path_len,
      name_str->ptr, name_str->len);

  if (*(_DWORD*)v48 != 10) {  // 10 = Ok discriminant
    // 第一阶段失败 → 组 Err 包装
    sub_140243FC0(&v38_err, &v57_mutex);  // format error
    usage_fetch_error_drop_111(v48);
    goto LABEL_22;
  }

  // 5. 第二阶段：mcp_config_toml_parse_and_remove_111
  //    parse TOML → 移除 [mcp_servers.<name>] section → relay_atomic_write
  mcp_config_toml_parse_and_remove_111(v48, file_path_ptr2, file_path_len2);

  if (*(_DWORD*)v48 != 10) {  // 10 = Ok discriminant
    sub_140243FC0(&v38_err, &v57_mutex);
    usage_fetch_error_drop_111(v48);
    goto LABEL_22;
  }

  // 6. 两阶段成功 → build Ok 响应
  build_remove_mcp_server_ok_result_111(&v38, v48);
  sub_141212FB0(result_out, &v38, 0x88);  // copy result to output

  // 7. 清理 McpServerSummary entries（每项 224B = 0xE0）
  while (entry_count--) {
    sub_1401D5810(entry_ptr);
    entry_ptr += 224;
  }

LABEL_22:
  // Err 路径：copy error to result_out, tag = 0x8000000000000000
  *result_out = 0x8000000000000000ULL;

LABEL_26:
  // 释放 spinlock：*lock_byte = 0; WakeByAddressSingle(lock_byte) if waiters
  v36 = (char*)Address;
  v37 = *v36; *v36 = 0;
  if (v37 == 2) WakeByAddressSingle(v36);

  if (*name_str) sub_140001370(name_str[1], *name_str, 1);
  return result_out;
}
```

---

## 3. query_installed_skills_with_repo_111

**VA: 0x141214620 | size: 变量（新函数）**

```c
// 【DELTA-NEW: 1.1.1 新增，1.0.9 无此函数】
// 按 repo 字符串查询已安装 skill store
// 返回 discriminant: 3=Some(found), 6=None(not_found)

__int64 __fastcall query_installed_skills_with_repo_111(
    __int64 result_out,
    __int64 cmd_name_ref,   // "remove_mcp_server"
    __int64 repo_str_ref)   // IPC 新参数 repo
{
  // 1. 构造 filter closure（repo string ref + cmd name ref）
  v9.m256i_i64[0] = repo_str_ref;
  v9.m256i_i64[1] = sub_140082100;  // vtable/fn ptr
  v9.m256i_i64[2] = cmd_name_ref;
  v9.m256i_i64[3] = sub_140082100;

  // 2. 通过 unk_1412B0057 closure thunk 构造 filter
  sub_1410A1DF0(v6, &unk_1412B0057, &v9);

  // 3. 获取 skill store 引用
  v10[0] = sub_141222DD0(v6);  // unwrap/deref store

  // 4. skill_store_get_all_111 → skill_store_iter_111 遍历
  v9.m256i_i64[0] = v10;
  v9.m256i_i64[1] = skill_store_get_all_111;  // fn ptr
  sub_1410A1DF0(&v7, &unk_1412AE72B, &v9);

  // 5. 写结果 discriminant=3(Some) 到 result_out
  *(_BYTE*)result_out = 3;
  // ... copy 结果数据

  return sub_14106D970(v10);  // drop store ref
}
```

---

## 4. mcp_config_read_and_remove_entry_111

**VA: 0x14067C020 | size: 0x847**

```c
// 第一阶段：文件读 + hashmap 移除 entry
// 错误文案: "MCP server not found: " (0x1412E92F9)

void mcp_config_read_and_remove_entry_111(
    __int64 result_out,
    __int64 file_path_ptr, __int64 file_path_len,
    unsigned __int64 *name_ptr, unsigned __int64 name_len)
{
  // 1. 路径解析：snooze_file_open_111 → win32_path_canonicalize_111
  sub_14108C6F0(&v88);  // snooze_file_open_111
  if (v88.m128i_i32[0] == 2) {
    // 已存在 open handle，走 fast path
  } else {
    // 2. 读文件
    win32_file_read_bytes_111(&v88, file_path_ptr, file_path_len);
    if (!success) { *result_out = 2; return; }
  }

  // 3. 解析 TOML section 列表
  mcp_server_list_build_toml_sections_111(&v81, ...);

  // 4. SIMD hashmap probe（SSE4.2 pcmpeqb + pmovmskb）查找 name
  hash = sub_140625680(v87, name_ptr, name_len);  // FxHash
  h2 = hash >> 57;
  simd_tag = _mm_shuffle_epi32(_mm_shufflelo_epi16(
      _mm_unpacklo_epi8(_mm_cvtsi32_si128(h2), ...), 0), 68);

  // hashmap probe loop（Swiss Table 风格）
  while (true) {
    probe_chunk = _mm_loadu_si128(ctrl + (pos & mask));
    hits = _mm_movemask_epi8(_mm_cmpeq_epi8(probe_chunk, simd_tag));
    if (hits) break;
    if (_mm_movemask_epi8(_mm_cmpeq_epi8(probe_chunk, 0xFF))) goto not_found;
    pos += 16;
  }

  // 5. 精确匹配 + 移除 entry（memmove remaining entries）
  // 找到后：移除 entry，rebalance（sub_14070B280 = TOML entry drop）

not_found:
  // 错误路径：sub_1410A1DF0(error_formatter, "MCP server not found: "...)
  *result_out = 7;  // Err variant
  return;

  // 6. 成功：序列化 remaining entries → relay_atomic_write_leaf_with_newline_111
  relay_atomic_write_leaf_with_newline_111(result_out, ...);
}
```

---

## 5. mcp_config_toml_parse_and_remove_111

**VA: 0x1406790D0 | size: 307 basic blocks (≈ full TOML parser + section remover)**

Callees (33, see call-tree): snooze_file_open_111, win32_file_read_bytes_111, sub_141077010(TOML tokenizer),
sub_14066EA70/sub_14067FE50/sub_14070B280(TOML section ops), relay_atomic_write_leaf_sys(terminal write).

```c
// 第二阶段 TOML 解析+移除
// 307 basic blocks = full recursive-descent parser for config.toml
// 子key 解析: command / transport / env / headers / environment
// 成功后 relay_atomic_write_leaf_sys → atomic file write-back

_QWORD *__fastcall mcp_config_toml_parse_and_remove_111(
    _QWORD *result_out,   // Result<McpServerListPayload, E>
    __int64 file_path_ptr,
    __int64 file_path_len)
{
  // 1. 文件打开/读取（snooze_file_open_111 + win32_file_read_bytes_111）
  snooze_file_open_111(&v_fh);
  if (!win32_file_read_bytes_111(&v_buf, file_path_ptr, file_path_len)) {
    // 读失败 → Err
    *result_out = 0x8000000000000000ULL;
    return result_out;
  }

  // 2. TOML tokenization（sub_141077010 = TOML token parser，逐字节扫描）
  sub_141077010(&v_tokens, v_buf.ptr, v_buf.len);

  // 3. 顶层 section 识别：scan for [mcp_servers.<name>] header token
  //    sub_14066EA70 = find_section_header(tokens, "mcp_servers")
  while (has_more_tokens) {
    section_token = sub_14066EA70(&v_tokens, ...);
    if (byte_eq(section_token, target_name)) goto found_section;
    // sub_14067FE50 = skip_section_body
    sub_14067FE50(&v_tokens, ...);
  }
  // section not found → Err (但 phase1 已 hashmap probe，理论不到此)
  *result_out = 0x8000000000000000ULL;
  return result_out;

found_section:
  // 4. 解析目标 section 子key（sub_140624F90 = subkey dispatcher）
  //    command: String
  //    transport: String ("stdio" / "sse")
  //    env: HashMap<String,String>
  //    headers: HashMap<String,String>
  //    environment: Option<HashMap<String,String>>
  sub_140624F90(&v_entry, &v_tokens, ...);

  // 5. 移除 section（sub_14070B280 = TOML entry free/compact）
  sub_14070B280(&v_entry);   // drop parsed entry

  // 6. 序列化剩余 sections → sub_1407B3660(serializer)
  sub_1407B3660(&v_serialized, &v_remaining_sections);

  // 7. relay_atomic_write_leaf_sys（atomic rename write-back）
  sub_140678AC0(&write_ctx, v_serialized.ptr, v_serialized.len);
  // sub_140678AC0 wraps → relay_atomic_write_leaf_sys @ 0x140504310

  // 8. 成功
  *result_out = 10;  // Ok discriminant
  return result_out;
}
// 终止叶节点（全部为 LEAF）:
//   win32_file_read_bytes_111   VA:0x141093260 (ReadFile wrapper)
//   relay_atomic_write_leaf_sys VA:0x140504310 (CreateFile/WriteFile/rename)
//   sub_141077010               VA:0x141077010 (TOML token scanner, data-only)
//   sub_140001360/sub_140001370 (heap alloc/dealloc)
//   sub_14124BCCB               (panic/OOM handler)
```

---

## 6. relay_atomic_write_leaf_sys（终态写盘）

**VA: 0x140504310**

```c
// WIN32 原子文件写盘 terminal leaf
// GetCurrentProcessId() + uuid_v4_generate_raw_sys() → 临时文件名
// CreateFile(GENERIC_WRITE | CREATE_ALWAYS) → WriteFile loop → CloseHandle
// → rename(tmp → target)  ← 原子替换
// 失败：snooze_file_delete_111 清理临时文件
// 错误: "atomic write: missing parent"（target 父目录不存在）
```

---

## 7. build_remove_mcp_server_ok_result_111

**VA: 0x1402161B0 | size: 0x115 = 277B**

真实反编译（逆向分析 Hex-Rays）：

```c
// 构造 Result::Ok 响应，精确字节布局如下
// 27503 = 0x6B6F = "ok" (little-endian WORD)
// 1667462483 = 0x636375_73 = "succ"
// 1936942435 = 0x7365_7373 = "ess\0"（写 +3 处 → "success" 7B）

__int64 __fastcall build_remove_mcp_server_ok_result_111(
    __int64 a1,          // output result buffer
    __int128 *a2)        // McpServerSummary source (3x OWORD + 1x QWORD)
{
  nullsub_1(a1);
  v4 = (_WORD *)sub_140001360(2, 1);   // heap alloc 2 bytes align 1
  if (!v4) sub_14124BCCB(1, 2);        // OOM panic
  v6 = v4;
  *v4 = 27503;                          // "ok" = 0x6B6F

  nullsub_1(v5);
  v7 = (_DWORD *)sub_140001360(7, 1);  // heap alloc 7 bytes align 1
  if (!v7) sub_14124BCCB(1, 7);        // OOM panic
  *(_DWORD *)((char *)v7 + 3) = 1936942435;  // "ess\0" @ offset +3
  *v7 = 1667462483;                     // "succ" @ offset 0
  // → v7[0..7] = "success"

  // McpServerSummary fields: copied from a2 (3x OWORD = 48B + 1 QWORD = 8B)
  *(_QWORD *)(a1 + 120) = *((_QWORD *)a2 + 6);  // a2[48] → a1+120
  v8 = *a2;                              // a2[0..16]
  v9 = a2[1];                            // a2[16..32]
  *(_OWORD *)(a1 + 104) = a2[2];         // a2[32..48] → a1+104
  *(_OWORD *)(a1 + 88)  = v9;            // a2[16..32] → a1+88
  *(_OWORD *)(a1 + 72)  = v8;            // a2[0..16]  → a1+72

  // Flags
  *(_DWORD *)(a1 + 128) = 1;             // int32 flag = 1
  *(_BYTE  *)(a1 + 132) = 1;             // byte flag = 1

  // Header layout
  *(_QWORD *)a1        = 2;              // discriminant: Result::Ok(2)
  *(_QWORD *)(a1 + 8)  = v6;            // ptr → "ok"
  *(_QWORD *)(a1 + 16) = 2;             // len("ok")
  *(_QWORD *)(a1 + 24) = 7;             // cap (= len("success"))
  *(_QWORD *)(a1 + 32) = v7;            // ptr → "success"
  *(_QWORD *)(a1 + 40) = 7;             // len("success")
  *(_QWORD *)(a1 + 48) = 0;             // padding
  *(_QWORD *)(a1 + 56) = 8;             // reserved / capacity hint
  *(_QWORD *)(a1 + 64) = 0;             // padding

  return a1;
  // Total output struct size: 136B (0x88)
  // McpServerSummary single entry Vec size: 224B (0xE0)
}
```

dim4 DTO 完整字节图：见 interface.md § "成功响应 DTO"
