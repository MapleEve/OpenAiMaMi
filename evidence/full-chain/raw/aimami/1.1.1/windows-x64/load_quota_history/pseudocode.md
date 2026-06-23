# load_quota_history — Windows x64 Pseudocode (Gold-Leaf)
# session: <审计会话>
# machine: <本地机器>
# sha: d24e429a
# gate_tier: full_gold_leaf
# delta_class: body_changed
# baseline: 1.0.9 (VA 0x1402738b0; no time filter; no trim; smaller DTO)
# role: producer (pure production, no orchestration)

---

## Owner Function — load_quota_history_handler_111
VA: 0x140020E40 | Size: 0x511 bytes | IDB name: load_quota_history_handler_111

### 逆向分析 Decompile (verbatim, session <审计会话>)

```c
// [<审计会话> | load_quota_history]
// IPC command handler. Registered in tauri_ipc_main_dispatcher_sys.
// Extracts (repo, accountKey) from payload; acquires pending_auto_switch lock;
// calls query_installed_skills_with_repo_111 then quota_history_file_read_and_filter_111.
// On success: quota_history_ok_response_build_111 → quota_history_response_dispatch_111.
// On error: IPC error path via sub_14080C3C0.
// Persistence file: quota-history.jsonl (appdata)
// Delta vs 1.0.9: body_changed — 7-day window filter + trim + larger DTO
__int64 __fastcall load_quota_history_handler_111(__int64 a1)
{
  // Stack locals omitted for brevity; full 逆向分析 vars: v2..v52

  v52 = -2; /*0x140020e59*/
  sub_141212FB0(v16, a1, 520); /*0x140020e7a*/      // copy cfg blob (520 bytes)
  sub_141212FB0(v18, a1 + 520, 400); /*0x140020e96*/  // copy state blob (400 bytes)
  v47 = *(_QWORD *)(a1 + 936); /*0x140020ea2*/      // accountKey.len
  v46 = *(_OWORD *)(a1 + 920); /*0x140020eb0*/      // accountKey.ptr/cap

  v22 = (__int64)aLoadQuotaHisto; /*0x140020ec9*/   // span tag: "load_quota_history"
  v23.m256i_i64[0] = 18; /*0x140020ed0*/            // field count
  v23.m256i_i64[1] = (__int64)aRepo; /*0x140020ee2*/  // "repo" @ 0x1412ac6d1
  v23.m256i_i64[2] = 4; /*0x140020ee9*/
  v23.m256i_i64[3] = (__int64)v16; /*0x140020ef4*/  // cfg blob
  v24 = &v46; /*0x140020f02*/                       // accountKey slice ref

  v4 = pending_auto_switch_state_lock_acquire_111((char *)(v17 + 16), ...); /*0x140020f21*/
  if ( !v4 ) /*0x140020f27*/
  {
    query_installed_skills_with_repo_111((__int64)&v38, (__int64)&v22, (__int64)&v23.m256i_i64[1]); /*0x140020f45*/
    if ( v38.m256i_i8[0] != 6 ) /*0x140020f52*/  // 6 = Err variant
    {
      // skills query error path: IPC error response
      v22 = 1;
      sub_14080C3C0((__int64)v15, v19, (__int64)&v22, &v34, v20, v21); /*0x1400211f0*/
      goto LABEL_18;
    }
    v4 = v38.m256i_i64[1]; /*0x140020f58*/  // skill store result
  }

  // Lookup accountKey in skill store (BTreeMap walk)
  v23.m256i_i64[1] = (__int64)aAccountkey; /*0x140020f83*/ // "accountKey" @ 0x1412ac77f
  v23.m256i_i64[2] = 10;
  sub_1402FBB30(&v39, &v22); /*0x140020fb8*/
  if ( v39.m256i_i8[0] == 6 ) /*0x140020fc5*/  // 6 = accountKey found
  {
    v37 = v39.m256i_i64[3];
    v36 = *(_OWORD *)&v39.m256i_u64[1];  // account record slice
    sub_1401C8C10(&v26, v4, &v36); /*0x140020fff*/  // lock-aware: calls quota_history_file_read_and_filter_111

    sub_141212FB0(&v22, a1 + 520, 400); /*0x140021015*/

    if ( !__OFSUB__(0, v26.m256i_i64[0]) ) /*0x140021023*/  // success check (no overflow)
    {
      // success path
      quota_history_response_dispatch_111(&v22, &v39); /*0x14002128a*/
      goto LABEL_18;
    }
    // Copy/convert result variant for dispatch
    // ... handles Ok/ZST cases with alloc/memcpy ...
    v39.m256i_i8[8] = 3;  // result tag=3 (data bytes)
    v39.m256i_i64[0] = 0x8000000000000000uLL;  // Ok sentinel
    quota_history_response_dispatch_111(&v22, &v39); /*0x14002128a*/
    goto LABEL_18;
  }
  // accountKey not found error path:
  v22 = 1;
  sub_14080C3C0((__int64)v14, v19, (__int64)&v22, &v32, v20, v21); /*0x1400210f0*/

LABEL_18:
  // Cleanup: free accountKey vec entries (stride 96 bytes)
  if ( !__OFSUB__(0, (_QWORD)v46) ) /*0x140021299*/
  {
    while ( v48 != v49 ) /*0x1400212de*/
    {
      ++v49;
      sub_14033AB50(); /*0x1400212ee*/  // drop QuotaHistoryPoint (has_notch_arc_listener_drop_loop)
      v11 += 96;
    }
    if ( (_QWORD)v46 )
      sub_140001370(*((_QWORD *)&v46 + 1), 96 * v46, 8); /*0x14002131a*/  // dealloc
  }
  return sub_140042650(v16); /*0x14002132c*/  // drop cfg_copy
}
```

---

## Depth-2: quota_history_file_read_and_filter_111
VA: 0x1402002F0 | IDB name: quota_history_file_read_and_filter_111

### Key behavior (confirmed by 逆向分析 decompile)

- Opens `quota-history.jsonl` via `snooze_file_open_111` → `win32_path_canonicalize_111` → `win32_file_open_rw_111`
- On open error (code 2): returns empty ok result
- Gets current timestamp: `system_time_precise_u32_111()`; calls `elapsed_since_ts_111` for validation
- Allocates 0x2000 (8192 byte) read buffer
- Computes `cutoff = -86400 * a4 + ts_now` (in 1.1.1 caller passes `a4=7` → 7-day window)
- Read loop via `sub_1407CE670` (buffered NDJSON line reader):
  - Sentinel: `v23 = 0x8000000000000001` (EOF marker)
  - Tokenize line: `sub_14070B280`
  - Serde decode → QuotaHistoryPoint: `sub_140003460`
  - Filter: skip if `entry.timestamp < cutoff` OR (`a5` provided AND key != `a6`) → `sub_141213640` byte-cmp
  - Accumulate passing entries; grow vec if at capacity via `sub_141220D70`
  - Entry stride in accumulation vec: 64 bytes per entry
- On EOF sentinel:
  - Free read buffer
  - `CloseHandle(file_handle)`
  - If accumulated `v80 >= 2` entries: sort via `sub_1407B2D90` or `sub_1401D9AC0` (size threshold)
  - Read full file for parse: `win32_file_read_bytes_111`
  - If `v59 >= 0x7D0` (2000): trim via `sub_1403047A0` + compact `sub_14033F0C0` + rewrite `win32_file_write_bytes_111`
  - Free temp buffers
  - Return accumulated Vec

### 逆向分析 Pseudocode (abridged, key sections)

```c
__int64 __fastcall quota_history_file_read_and_filter_111(
    __int64 a1, __int64 a2, __int64 a3,
    __int64 a4/*days=7*/, __int64 a5/*accountKey_ptr*/, __int64 a6/*accountKey_len*/)
{
  // Initialize result vec:
  *(_QWORD *)&v79 = 0; *((_QWORD *)&v79 + 1) = 8; v80 = 0; /*0x14020032x*/

  // Open file:
  sub_14108C6F0(&v70, a2, a3); /*0x14020034e*/  // snooze_file_open_111
  if ( (_DWORD)v70 == 2 ) { /* emit ok empty; return */ }

  // Timestamp:
  LODWORD(v61) = system_time_precise_u32_111(); /*0x1402003fa*/
  elapsed_since_ts_111(&v70, &v61, 3577643008LL, 27111902); /*0x140200414*/
  if ( (_BYTE)v70 ) v12 = 0; else v12 = *((_QWORD *)&v70 + 1);

  // Alloc read buffer (0x2000):
  v18 = sub_140001360(0x2000, 1); /*0x1402004af*/
  v19 = -86400 * a4 + v12; /*0x1402004c7*/  // cutoff (7 days back)

  // Read loop:
  while (1) {
    sub_1407CE670(v21, v22); /*0x140200516*/  // read next NDJSON line
    if ( (_QWORD)v75 == v23 ) { // EOF
      // ... trim/rewrite if needed, return vec
    }
    // Decode line:
    sub_14070B280(*((_QWORD *)&v75 + 1), v76); /*0x140200554*/
    sub_140003460(&v70, &v61); /*0x140200586*/  // serde decode
    if ( (_QWORD)v70 == 2 ) goto LABEL_25; // skip malformed

    // Filter:
    if ( a5 ) {
      if ( (_QWORD)v72 != a6 ) goto LABEL_23;  // key len mismatch
      if ( *((__int64 *)&v72 + 1) < v19 ) goto LABEL_23;  // too old
      v33 = sub_141213640(v83, a5, a6); /*0x1402005f7*/  // byte-cmp
      if ( v33 ) goto LABEL_23;  // key content mismatch
    } else if ( *((__int64 *)&v72 + 1) < v19 ) goto LABEL_23;  // no key filter, time only

    // Accumulate:
    if ( v80 == (_QWORD)v79 ) sub_141220D70(&v79); // grow vec
    // store entry at v79.ptr[v80 * 64], increment v80
  }

  // EOF handling:
  CloseHandle(hObject); /*0x140200759*/
  win32_file_read_bytes_111(&v70, v46, v45); /*0x14020079e*/
  sub_140311C90(&v57, &v70); /*0x1402008c5*/  // sort
  if ( v59 >= 0x7D0 ) { // 2000 entries
    sub_1403047A0(...); sub_14033F0C0(...); // slice + compact
    win32_file_write_bytes_111(v46, v45, v55, v54 + 1); /*0x1402009b8*/  // rewrite
  }
}
```

---

## Depth-2: quota_history_point_deep_copy_111
VA: 0x1401EB870 | IDB name: quota_history_point_deep_copy_111

Deep-copies a `QuotaHistoryPoint` struct. 逆向分析 confirms 24 string fields (len/ptr/cap triples at offsets 0,32,64,...,928) plus bool flags interspersed, plus trailing bool at +952.

Total struct size: **953 bytes** (last write: `*(_BYTE *)(a1 + 952) = *(unsigned __int8 *)(a2 + 952)` at `0x1401eccd8/df`)

Copy logic per field:
- `len < 0` → dst ptr = 0 (null)
- `len == 0` → dst ptr = 1 (ZST sentinel)
- `len > 0` → alloc(len, 1) + memcpy(dst, src, len); cap = len

Bool flags at offsets: +24, +56, +88, +120, +152, +184, +216, +248, +280, +312, +344, +376, +408, +440, +472, +504, +536, +568, +600, +632, +664, +696, +728, +760, +792, +824, +856, +888, +920, +952

---

## Depth-2: quota_history_ok_response_build_111
VA: 0x140216A40

Builds Ok IPC response. Allocates two string literals:
- `buf1` (2 bytes) = `0x6B6F` = "ok"
- `buf2` (7 bytes) = "success" (LE encoding: `0x63657363637553`)

Sets `out.tag = 2` (Ok), fills accountKey ref from account_slice, `count=1, flag=1`.

---

## Depth-2: quota_history_response_dispatch_111
VA: 0x140838EB0

```c
volatile signed __int64* quota_history_response_dispatch_111(resolver_ctx, history_vec)
{
  sub_141212FB0(v15, resolver_ctx, 0x168u); // copy resolver (360 bytes)
  v4 = resolver_ctx[24].m128i_i64[0];       // resolver field

  if ( __OFSUB__(0, *(_QWORD *)history_vec) ) // vec.len < 0 → empty sentinel
  {
    v21 = 1; // empty path
  }
  else
  {
    // Serialize:
    relay_response_serialize_json_111(v19, v16_copy);
    if ( *(_QWORD *)v19 == 0x8000000000000025uLL ) // Ok tag
    {
      v22 = *(__m256i *)&v19[8]; // JSON buffer
      v10 = 0;
    }
    else // serialize error
    {
      // format error display string
      sub_140807390(v18);
      v22.m256i_i8[0] = 3; // tag=3 data bytes
      // ... copy error string into v22 ...
      v10 = 1;
    }
    v21 = v10;
  }
  return sub_14080C3C0(v15, v4, &v21, &resolver_ctx[22].m128i_u64[1], v12, v13);
}
```

---

## Depth-2: relay_response_serialize_json_111
VA: 0x1402275B0

```c
_QWORD* relay_response_serialize_json_111(_QWORD *a1, __int64 a2)
{
  v4 = sub_140001360(128, 1); // alloc 128 byte JSON buffer
  *v4 = '{';  // open JSON object
  v7 = sub_140261480(..., aSchemaversion_0, 13, a2 + 96);  // write schemaVersion field
  // ... on error: free buf, set ERR tag, goto LABEL_8 ...
  v7 = sub_1402580F0(..., aSuccess, 7, a2 + 100);  // write success bool
  v7 = sub_14025C400(..., aCode_3, 4, a2);         // write code i32
  v7 = sub_14025C400(..., aMessage_1, 7, a2 + 24); // write message str
  v7 = relay_response_field_warnings_write_sys(..., a2 + 48); // write warnings array
  v7 = sub_1402499C0(..., a2 + 72);                // write data vec
  // close JSON: sub_14033FA00(*v19, "}", 1)
  // on success: a1[0] = 0x8000000000000025; a1[1]=0; a1[2]=len; a1[3]=buf_ptr; a1[4]=1
  sub_1402313B0(a2); // drop relay_response
  return a1;
}
```

Field string VAs:
- `schemaVersion` @ `0x1412be8fd`
- `success` @ `0x1412c06d3`
- `code` @ `0x1412c0526`
- `message` @ `0x1412c052a`
