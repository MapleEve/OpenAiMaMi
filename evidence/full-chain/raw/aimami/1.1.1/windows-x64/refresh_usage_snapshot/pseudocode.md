# refresh_usage_snapshot — Windows x64 pseudocode
# session: wf-aimami111-delta-20260618-goldleaf (gold-leaf update) | machine: <本地机器>
# prior session: wf-aimami111-delta-20260617-sweep | sha: d24e429a
# delta_class: integrity_recovered | baseline: 1.0.9
# decompile_status: PARTIAL — owner 0x140984C40 (123 BB) still fails HexRays;
#   core + http_executor + success_handler + quota_append fully decompiled this pass.

---

## Owner: refresh_usage_snapshot_cmd_handler_111
- VA: 0x140984C40
- size: 0xF9E (4062 bytes), 123 basic blocks
- Decompile: FAILED (HexRays unable — function too large/complex for single pass)
- Reconstructed via callees + basic_block CFG + string xrefs (unchanged from prior pass)

```
fn refresh_usage_snapshot_cmd_handler_111(
    ipc_ctx: *IpcContext,
    req: *RefreshUsageSnapshotReq,
    resolver: *InvokeResolver,
) -> () {
    // 1. Read config: usageRefreshInterval
    let interval = get_usage_refresh_interval_read_sys_111(config_ref);

    // 2. Guard: if usageRefreshEnabled == false, return early
    //    (branch at 0x140984DB1 -> 0x14098551D -> resolve empty)

    // 3. Check pending_auto_switch lock (sub_140797840)
    //    Acquires pending_auto_switch_state_lock, reads existing snapshot

    // 4. Dispatch to core refresh logic
    refresh_usage_snapshot_core_111(state, req, resolver);

    // 5. IPC resolve via sub_14080C3C0 (IPC_RESPONSE_DISPATCH, already named)
}
```

---

## Core: refresh_usage_snapshot_core_111
- VA: 0x1401BD570
- size: 0x1308 (4872 bytes)
- Decompile: OK (HexRays, this pass)
- DELTA vs 1.0.9: quota history append + file persist path is NEW

```c
// Iterates account list (state[49..50]*336), per account:
//   checks subscription active flag (sub_140678480),
//   calls fetch_wham_usage_http_111, branches on discriminant.
// state[55].lo = usageAttemptCount (++ per attempt)
// state[55].hi = usageSuccessCount (++ on discriminant==10 success)

__int64 __fastcall refresh_usage_snapshot_core_111(__m128i *a1, __int64 a2, __int64 a3)
{
  // a1 = AppState ptr
  // a2, a3 = IPC resolver args
  //
  // Account array: a1[49].m128i_i64[1] = ptr, a1[50].m128i_i64[0] = count
  // Each account: 336 bytes stride
  //
  // Per-account loop body (simplified):
  //   elapsed_since_ts_111(timestamp_buf, a1[7], 0xD53E8000, 27111902)
  //   sub_140678480(a1[92]) -> checks subscription active (returns 1 if active)
  //   build HTTP ctx: sub_140676A10(req_args_buf, ...)
  //   ++a1[55].lo   // usageAttemptCount
  //   fetch_wham_usage_http_111(result_buf, req_args_buf, http_ctx)
  //
  //   switch result_buf[0]:   // discriminant
  //
  //   case != 10 && != 3:     // network error or non-retryable
  //     if result_buf[0] == 6:
  //       sub_140C63BD0/sub_140C63C60(result_buf+8)  // classify error
  //     a1[57].m128i_i8[8] = error_class (1 or 2)
  //     update a1[55..56] error strings
  //     usage_fetch_error_drop_111(result_buf)
  //
  //   case 3:   // HTTP error with retry window
  //     ++a1[55].hi   // usageSuccessCount (note: incremented even on retry path)
  //     check account[329] == 1 (active flag)
  //     a1[57].m128i_i8[8] = 1
  //     account[48] = 2;  account[88] = 2
  //     account[330] = 1; account[32] = 1; account[40] = elapsed
  //     quota_history_append_dedup_111(&a1[46].m128i_u64[1], result_buf, elapsed)
  //
  //   case 10:  // SUCCESS
  //     ++a1[55].hi   // usageSuccessCount
  //     on_usage_fetch_success_write_store_111(a1, a2, a3, account_ref, result_buf)
  //     if account[329] == 1: a1[57].m128i_i8[8] = 1; clear a1[55..56] err string
  //
  // Post-loop:
  //   sub_1401BCE90(state)          // finalize state
  //   sub_1401ED840(buf, account)   // per-account state update (for flagged accounts)
  //   update a1[9].m128i_i64[1]     // overall status enum
  //   a1[57].m128i_i64[0] = last_elapsed_ts
  //   sub_140790230(state)           // broadcast "runtime-state-updated"
}
```

---

## HTTP Executor: fetch_wham_usage_http_111
- VA: 0x140673CC0
- size: 0x8B2 (2226 bytes)
- Decompile: OK (HexRays, this pass)
- DELTA vs 1.0.9: NEW function (wham/usage HTTP call absent in 1.0.9)

```c
// a1 = out ResultBuf  (discriminant at [0])
// a2 = ReqArgs {account_id_arc at +24, bearer_token at +0, ...}
// a3 = HttpCtx
//
// URL: byte_1412E8858 = "https://chatgpt.com/backend-api/wham/usage?account_id="
//      sub_1410A1DF0 builds URL string, sub_140673110 appends query param account_id
//
// Headers set via sub_1406508B0 / sub_140650290 / sub_1406505A0:
//   "Authorization"      -> "Bearer <token>"     (aAuthorization = 0x1412E88BA)
//   "ChatGPT-Account-Id" -> account_id           (aChatgptAccount_0 = 0x1412E88C7)
//   "Accept"             -> "application/json"   (aAccept = 0x1412E88D9)
//   "User-Agent"         -> <ua_string>           (unk_1412E88F9 = 0x1412E88F9)
//
// sub_140729BD0 = HTTP builder init
// sub_140C8D540 = HTTP client send (SIDE EFFECT: network I/O)
//
// On v60 == 3 (connection error):
//   *a1 = 6 (discriminant 6 = network error)
//   return
//
// On HTTP status (v67 - 300) <= 0xFF9B  i.e. 300..65535:
//   build error string from status code (sub_1410453F0, byte_1412E8905)
//   *a1 = 9; a1+8 = status_code_string
//   sub_140708080(response_buf)  // drop HTTP result
//   return
//
// Parse JSON body: sub_1408709B0(out_buf, response_str)
//   if parse error -> discriminant 6
//
// Content-type check: sub_140731DA0(&content_type_str)
//   sub_14103A480(unk_1412E8921=0xA, "application/json", &content_type_str)
//   -> v15 = content_type_check (8 = match)
//
// Parse quota array (sub_140310830):
//   from off_1412E8E30 / unk_1412E8E50
//   entry struct 40 bytes: [0..7]=discriminant [8..15]=ptr [16..19]=flags [20..23]=value [24..39]=arc_str
//   Filter: (flags & 1) != 0 && value < 361 -> select for quota_daily_tokens field (v91)
//            (flags & 1) != 0 && value >= 8640 -> select for quota_monthly_tokens (v93)
//
// On success: discriminant 10
//   a1+0  = 10 (discriminant)
//   a1+8  = v91 (daily quota discriminant)
//   a1+16 = v86 (account subscr active ptr)
//   a1+24 = v90 (flags)
//   a1+28 = v90 (value)
//   a1+32 = v74 (quota_daily arc_str pair)
//   a1+48 = v93 (monthly quota discriminant)
//   a1+56 = v87 (monthly ptr)
//   a1+64 = flags14 (v14)
//   a1+68 = v18 (monthly value)
//   a1+72 = v73 (quota_monthly arc_str pair)
//   a1+88 = v15 (content_type_check byte)

__int64 __fastcall fetch_wham_usage_http_111(__int64 a1, __int64 a2, __int64 a3)
{
  // [full HexRays pseudocode captured; key logic summarized above for readability]
  // Key refs confirmed:
  //   sub_140C8D540 = HTTP send (network side-effect)
  //   sub_1408709B0 = JSON deserialize
  //   sub_140310830 = build QuotaHistoryPoint from response quota array
  //   sub_1410A1DF0 = string builder (URL)
  //   _InterlockedDecrement64 = Arc refcount decrement
  //   sub_140C53850 = Arc drop destructor
}
```

---

## Success Handler: on_usage_fetch_success_write_store_111
- VA: 0x1401B8D90
- Decompile: OK (HexRays, this pass)
- DELTA vs 1.0.9: quota_history_persist_file_111 call + QUOTA_HISTORY_APPEND_FAILED error logging NEW

```c
// a1 = AppState, a2 = IPC resolver arg2, a3 = IPC resolver arg3
// a4 = AccountRef (account index at a4[37])
// a5 = WhamResponse ResultBuf (discriminant==10 on entry)
//
// Account base: v14 = a1[99] + 336 * a4[37]
// Bounds check: a4[37] < a1[100]  (panics via sub_14124C063 if oob)
//
// Read response fields from a5:
//   a5+0   = hasActiveSubscription discriminant (2 = None/inactive)
//   a5+8   = subscriptionExpiresAt ptr
//   a5+16  = subscriptionExpiresAt value
//   a5+24  = subscriptionExpiresAt arc_str
//   a5+32  = subscriptionWillRenew flags
//   a5+36  = subscriptionWillRenew value
//   a5+40  = lastUsageAt discriminant
//   a5+48  = lastUsageAt value (u64)
//   a5+56  = usageSource flags
//   a5+60  = usageSource value
//   a5+64  = usageSource arc_str.ptr
//   a5+72  = insufficient_quota u64
//   a5+76  = insufficient_quota flags
//   a5+80  = usageSource enum byte (sentinel 8 = no update)
//   a5+104 = quota_daily_tokens.flags
//   a5+108 = quota_daily_tokens.value  (checked: < 361 threshold)
//   a5+112 = total_token_usage (u64)
//   a5+120 = quota_monthly.flags
//   a5+124 = quota_monthly.value  (checked: < 8640 threshold)
//
// Write to account store (v14 = account base):
//   v14+48  = hasActiveSubscription
//   v14+56  = subscriptionExpiresAt value
//   v14+64  = subscriptionWillRenew flags
//   v14+68  = subscriptionWillRenew value
//   v14+72  = lastUsageAt value
//   v14+80  = usageSource flags
//   v14+84  = usageSource value
//   v14+88  = lastUsageAt discriminant
//   v14+96  = insufficient_quota
//   v14+104 = quota_daily_tokens.flags
//   v14+108 = quota_daily_tokens.value
//   v14+112 = total_token_usage
//   v14+120 = quota_monthly.flags
//   v14+124 = quota_monthly.value
//   v14+330 = refresh_success_flag (v25)
//   v14+32  = 1 (has_refresh_ts flag)
//   v14+40  = elapsed_ts (now_ms)
//   v14+333 = usageSource_enum byte (only written if != 8)
//
// [NEW vs 1.0.9] quota_history_persist_file_111 call (sub_140200EA0):
//   called when v21 == true (new subscription state differs from stored)
//   args: (out_buf, a2 resolver, a3, a4[1]=account_id_ptr, a4[2]=account_id_len,
//          a5+40=lastUsageAt_arc OR 0, bearer_token_arc, elapsed_ms)
//   on out_buf[0] != 10 (failure):
//     alloc 27 bytes, qmemcpy "QUOTA_HISTORY_APPEND_FAILED"
//     push error string to state.error_log (ring buf at state[101..103]):
//       if a1[103] == a1[101]: sub_1412208A0(a1+101)  // grow ring buf
//       a1[102][a1[103]*48 .. +48] = error_entry (48 bytes)
//       a1[103]++
//     usage_fetch_error_drop_111(out_buf)
//
// quota_history_append_dedup_111 called unconditionally after persist:
//   sub_1401FF820(a1+93, &quota_snapshot, now_ms)
//   a1+93 = QuotaHistoryStore (in-mem ring, offset 93 from AppState base)
//
// Post-append: notify dispatch
//   a1[85] = notify_listener_count
//   scan a1[84] listener array (360 bytes/entry) for matching account_id
//   if found and v14+333 != 8:
//     sub_1410A0350 = format usageSource display string
//     write to listener entry [+224..+248]
//   a1[89] = last_success_ts (now_ms)

__int64 __fastcall on_usage_fetch_success_write_store_111(
    _QWORD *a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  // [full HexRays pseudocode captured; key logic summarized above]
}
```

---

## Quota History Dedup Append: quota_history_append_dedup_111
- VA: 0x1401FF820
- Decompile: OK (HexRays, this pass)
- DELTA vs 1.0.9: NEW function

```c
// a1 = QuotaHistoryStore* {ptr@[0], cap@[1], count@[2], last_ts@[3]}
// a2 = QuotaHistoryPoint* (0xA8 = 168 bytes)
// a3 = timestamp_ms (u64)
//
// QuotaHistoryPoint layout (from decompile offsets):
//   +0   = discriminant (hasActiveSubscription enum)
//   +16  = subscriptionExpiresAt discriminant
//   +40  = lastUsageAt discriminant
//   +48  = account_id arc len
//   +56  = account_id arc ptr
//   +64  = account_id str len
//   +72  = insufficient_quota u64
//   +80  = usageSource_enum byte
//   +80  = (also) subscription fields comparison anchor
//   Entry size = 0xA8 = 168 bytes (confirmed by sub_141212FB0 copy size)
//
// Logic:
//   if store.count == 0: goto append
//
//   scan store entries (stride 168):
//     match criterion: entry[+64] == a2[9].u64[0]  (account_id str len)
//               AND sub_141213640(entry[+56], a2[8].i64[1], a2[9].u64[0]) == 0
//               (string eq on account_id content)
//     -> entry found at v8
//
//   if found:
//     check entry[+72] == a2[9].i64[1]  (insufficient_quota)
//     check entry[+80] == a2[10].i8[0]  (usageSource_enum byte)
//     check subscription fields:
//       sub_1401EE1D0(entry-80, a2)      // hasActiveSubscription eq
//       sub_1401EE1D0(entry-40, a2[2..]) // subscriptionWillRenew eq
//     check quota:
//       sub_1401F2940(entry, a2[5..])    // quota value eq
//     if ALL match: sub_1401D5DB0(a2); return false  // dedup: drop
//     else: goto overwrite (free old arc strings, copy new 0xA8 bytes in-place)
//
//   if not found: append path
//     if store.count == store.cap: sub_141220DE0(store)  // Vec grow
//     sub_141212FB0(store.ptr + 168*count, a2, 0xA8)     // memcpy entry
//     store.count++
//
//   LABEL_31 (both overwrite + append converge):
//     store.last_ts = a3
//     if count >= 2:
//       if count >= 0x15 (21): sub_1407B44C0(store.ptr, count, &scratch) // trim
//       else:                  sub_1401DA720(store.ptr, count, 1, &scratch) // compact

char __fastcall quota_history_append_dedup_111(_QWORD *a1, const __m128i *a2, __int64 a3)
{
  // [full HexRays pseudocode captured above]
  // Returns: 1 = appended/overwritten, 0 = dedup-dropped
}
```

---

## Quota History File Persist: quota_history_persist_file_111
- VA: 0x140200EA0
- Decompile: OK (HexRays, gold-leaf session wf-aimami111-delta-20260618-goldleaf)
- DELTA vs 1.0.9: NEW function (disk side-effect)

```c
// a1 = out PersistResult*  (discriminant: 10=ok / 2=err / 3=serialize_err)
// a2, a3 = IPC resolver args
// a4 = lastUsageAt arc ptr (optional)
// a5 = json_bytes_len (u64); if 0 -> a1[0]=10, early return
// a6 = bearer_token arc
// a7 = bearer_len
// a8 = elapsed_ms timestamp
//
// Execution:
//   Guard: if a5 == 0 { *a1 = 10; return; }
//   1. sub_14107A3E0(a2, a3) = build file path token from account_id -> v12
//   2. sub_141082B80(v31, v12) = mkdir -p parent (returns err ptr or 0)
//      on err: *a1=2; a1[1]=err_ptr; return
//   3. Construct v31[] struct from (json_buf, lastUsageAt_arc, bearer_arc, elapsed_ms)
//   4. sub_140001360(128, 1) = alloc 128-byte JSON output buffer
//   5. sub_140201390(v31, v32) = serialize QuotaHistoryPoint fields to JSON buf
//      on err: free partial alloc; *a1=3; a1[1]=err; return
//   6. sub_141087E20(&p_hObject) = CreateFile + WriteFile (SIDE EFFECT: disk write)
//      on err(==1): *a1=2; a1[1]=v28; goto cleanup; return
//   7. sub_1410A8340 = format/write to file handle (Rust Write trait impl)
//      panic guard: if stream did not accept -> sub_14124C240 (panic "a formatting trait...")
//      on fmt err: *a1=2; a1[1]=v30; CloseHandle(hObject); goto cleanup; return
//   8. free v38 if non-null; *a1=10; CloseHandle(hObject); return

_QWORD *__fastcall quota_history_persist_file_111(
    _QWORD *a1, __int64 a2, __int64 a3, const __m128i *a4,
    __int64 a5, unsigned __int64 a6, unsigned __int64 a7, __int64 a8)
{
  // [full HexRays body captured; key callees above; CloseHandle = 0x14124D788]
  // Key side-effect: sub_141087E20(&p_hObject) → CreateFile/WriteFile (Windows file API)
}
```

---

## New DTO Serializer: serialize_usage_attempt_stats_111
- VA: 0x14020DF30
- Decompile: OK (HexRays, gold-leaf session wf-aimami111-delta-20260618-goldleaf)
- DELTA vs 1.0.9: NEW struct and serializer

```c
// a1 = UsageAttemptStats*
//   a1+48 = usageAttemptCount (u32) -- sub_140261480 writes u32 JSON field
//   a1+52 = usageSuccessCount (u32) -- sub_140261480
//   a1+0  = lastUsageFailure  (Option<String>, 24 bytes) -- sub_1402576B0 writes Option<String> JSON field
//   a1+24 = lastUsageFailureAccount (Option<String>, 24 bytes) -- sub_1402576B0
//
// JSON output: {"usageAttemptCount":<u32>,"usageSuccessCount":<u32>,
//               "lastUsageFailure":<str|null>,"lastUsageFailureAccount":<str|null>}
// Terminates with '}' (sub_14033FA00 writes closing brace)
//
// String keys from rodata:
//   aUsageattemptco  = 0x1412C0483 "usageAttemptCount" (17 chars)
//   aUsagesuccessco  = 0x1412C0494 "usageSuccessCount" (17 chars)
//   aLastusagefailu  = 0x1412C04A5 "lastUsageFailure"  (16 chars)
//   aLastusagefailu_0= 0x1412C04B5 "lastUsageFailureAccount" (23 chars)

__int64 __fastcall serialize_usage_attempt_stats_111(
    __int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  // [full HexRays body captured; grows output buffer via sub_141221220 if needed]
}
```

---

## Post-Loop State Finalize: refresh_usage_snapshot_post_loop_finalize_111
- VA: 0x1401BCE90  (was sub_1401BCE90, renamed gold-leaf session)
- Decompile: OK (HexRays, gold-leaf session wf-aimami111-delta-20260618-goldleaf)
- Role: called after the per-account loop in refresh_usage_snapshot_core_111 completes

```c
// a1 = AppState*
//
// 1. system_time_precise_u32_111() + elapsed_since_ts_111() -> v65 = elapsed_ts
// 2. sub_1403103C0(&v48, a1[99], a1[99] + 336*a1[100])
//    -> constructs slice iterator over account array (a1[99]=ptr, a1[100]=count, stride 336)
//    -> v49 = iterator slice ptr, v50 = count, v61 = end ptr
// 3. While loop over account entries (stride 72 bytes in v48 result format):
//    For each entry v6:
//      v7 = v6[3] (hasActiveSubscription discriminant)
//      if v7 == 2: drop remaining entries (call sub_140001370 to free arcs), break
//      else:
//        build quota_snapshot QuotaHistoryPoint struct from v6 fields
//        call quota_history_append_dedup_111(a1+93, &quota_snapshot, v65)
//        -> appends/deduplicates into in-mem QuotaHistoryStore at AppState+93
//    Cross-ref lookup: scan a1[94] (second account store) by account_id_str_len + string_eq (sub_141213640)
//    If found: sub_1410A2210 extracts Option<T> from matched entry; reads lastUsageAt, usageSource, elapsed
//    quota_history_append_dedup_111 called again with enriched snapshot
// 4. Cleanup: free v57 entries (sub_140001370(v58, 72*v57, 8))
//
// Key callee: quota_history_append_dedup_111@0x1401FF820 (in-mem dedup append)
// Key callee: sub_1410A2210 (extract Option<T> from account store entry)
// Key callee: sub_141213640 (string eq, used for account_id lookup)

__int64 __fastcall refresh_usage_snapshot_post_loop_finalize_111(_QWORD *a1)
{
  // [full HexRays body captured]
}
```

---

## Per-Account State Update: refresh_usage_snapshot_account_state_update_111
- VA: 0x1401ED840  (was sub_1401ED840, renamed gold-leaf session)
- Decompile: OK (HexRays, gold-leaf session wf-aimami111-delta-20260618-goldleaf)
- Role: copies WhamResponse fields into the account struct at fixed offsets

```c
// a1 = dest account struct*  (output: written in-place)
// a2 = WhamResponse ResultBuf* (source, 336 bytes approx)
//
// sub_1410A2210 = extract Option<T>: if __OFSUB__(0, *qword)==0 -> call sub_1410A2210 else sentinel=0x8000000000000000
//
// Field copies (dest offset = source field):
//   a1+176  = a2+176 (subscriptionExpiresAt discriminant, via sub_1410A2210(a2+11))
//   a1+200  = a2+200 (subscriptionExpiresAt value, via sub_1410A2210(a2+200))
//   a1+224  = a2+224 (subscriptionWillRenew, via sub_1410A2210(a2+14))
//   a1+248  = v33 (lastUsageAt discriminant, extracted from a2[31])
//   a1+256..288 = subscription renewal fields
//   a1+296  = v35 (usageSource, extracted from a2[37])
//   a1+0    = a2[0]  (hasActiveSubscription __int128)
//   a1+16   = a2[1]  (subscriptionExpiresAt __int128)
//   a1+32   = a2[2]  (subscriptionWillRenew __int128)
//   a1+48   = a2[3]  (lastUsageAt __int128)
//   a1+64   = a2[4]  (usageSource __int128)
//   a1+80   = a2[10]*8 (lastUsageAt u64)
//   a1+88   = a2+88  (quota_daily __int128)
//   a1+104  = a2+104 (quota_monthly __int128)
//   a1+120  = a2[15]*8 (total_token_usage u64)
//   a1+128  = a2[16] (quota discriminant)
//   a1+136  = a2[17] (quota ptr)
//   a1+144  = v6     (quota value, Option extracted)
//   a1+152  = v19    (__int128 supplementary quota)
//   a1+168  = v36    (usageSource_enum byte if a2[16]!=2)
//   a1+320  = a2[40]*8
//   a1+328  = a2[41] (DWORD)
//   a1+332  = a2[332] byte
//   a1+333  = a2[333] byte (usageSource_enum)

__int64 __fastcall refresh_usage_snapshot_account_state_update_111(__int64 a1, __int128 *a2)
{
  // [full HexRays body captured; pure data-copy function, no side-effects]
}
```

---

## Subscription Active Check: check_subscription_active_jwt_111
- VA: 0x140678480  (was sub_140678480, renamed gold-leaf session)
- Decompile: OK (HexRays, gold-leaf session wf-aimami111-delta-20260618-goldleaf)
- Depth: 3 callee of refresh_usage_snapshot_core_111

```c
// a1 = account_id (u64), a2 = account_id (u64 hi)
// Returns: 1 = subscription active (not expired), 0 = inactive/parse-fail
//
// Algorithm:
// 1. Build JWT struct in v28 with account_id pair (v29=a2, v30=0, v31=a2, v32=0x2E0000002ELL "..separator..", v33=1)
// 2. sub_14066EA70(&v36, &v28[3]) = decode base64url JWT payload segment
//    on discriminant==1: v2=v38 (payload bytes)
//    else: check v34 for fallback; return 0 on failure
// 3. if v28[0] == 0: return 0 (empty)
// 4. if v28[0] == 1: single-byte JWT -> strip trailing '='
// 5. Multi-char: strip trailing '=' or UTF-8 base64url padding chars (== 0x3D)
//    Loop from end: handles 1-byte (>=0), 2-byte, 3-byte, 4-byte UTF-8 sequences
// 6. sub_1401E9AB0(&v36, &unk_1412E8E50, v4, v7) = parse JWT JSON payload
//    -> extracts fields from JWT payload string
// 7. sub_1402FFCA0(&v36, pad, 0x3D) = remove base64 padding from payload
// 8. sub_1401E9AB0(&v27, &unk_1412E8E50, v37, v38) = second JSON parse pass
// 9. sub_14103A480(aExp=0x1412E918E, 3, &v28) = lookup 'exp' claim
//    if not found or discriminant != 2: goto drop+return 0
// 10. Check v21: if ==1 -> check *v20+16 >= 0 (expiry timestamp sign check)
// 11. system_time_precise_u32_111() + elapsed_since_ts_111() -> check if elapsed==1 (not expired)
//     if elapsed==1: goto drop+return 0
// 12. sub_140042350(&v28) = drop JWT struct arcs
// 13. return 1 (active and not expired)
//
// Key callees:
//   sub_14066EA70 = base64url decode JWT segment
//   sub_1401E9AB0 = JSON payload parser (JWT claims)
//   sub_14103A480 = extract 'exp' claim (aExp = "exp")
//   sub_1402FFCA0 = strip base64 padding ('=')
//   sub_140702EE0 = drop JWT discriminant==6 result

__int64 __fastcall check_subscription_active_jwt_111(unsigned __int64 a1, unsigned __int64 a2)
{
  // [full HexRays body captured; returns 1 if JWT 'exp' claim not yet elapsed]
}
```

---

## Event Bus Broadcast: broadcast_runtime_state_updated_111
- VA: 0x140790230  (was sub_140790230, renamed gold-leaf session)
- Decompile: OK (HexRays, gold-leaf session wf-aimami111-delta-20260618-goldleaf)
- Role: post-loop broadcast "runtime-state-updated"; also handles tray refresh throttling

```c
// a1 = AppState ptr
// a2, a3, a4 = event args (a3 = event_name ptr, a4 = event_name len)
//
// 1. Lock: _InterlockedCompareExchange8(&byte_1418930F0, 1, 0)
//    if dword_1418933A0: sub_141227238() + InterlockedCAS; else direct CAS
//    on CAS fail: sub_14124A510(&byte_1418930F0) = wait for lock
// 2. off_141899DC0 = event bus listener registry; check 2 * *off_141899DC0 != 0
//    if non-zero: sub_14124B1D0(a1, a2, a3) = filter listeners; v8 = !result
// 3. byte_1418930F1 check: if set, sub_1407CE770(v25) = snapshot current state
//    else: sub_1407CE770(v26) + sub_1407CE770(&v27) + memcpy(v25, &v27, 680)
// 4. if dword_1418930F8 != 3: sub_1407B1CA0(&dword_1418930F8) = update state version
//    iterate qword_141893390..qword_141893398 (account list): sub_140046D60(entry) per entry
//    free old store if qword_141893388 != 0 (sub_140001370(ptr, 336*count, 8))
//    memcpy(&dword_1418930F8, v25, 680) = apply new snapshot
// 5. Event name switch (a3, a4):
//    case 0x686e6f69 (a4-4==0): "sion"? check *a3 == 1819047270 -> LABEL_26
//    case 0x67617375 + 'e' (a4-4==1): "usage" -> LABEL_26
//    case 0x6e6f6974_6174756d (a4-4==4): "mutation" -> LABEL_26
//    case "progress" / "progresse" (a4-4==7): double-compare -> LABEL_26
//    LABEL_26: throttle check + tray refresh:
//      system_time_precise_u32_111(); elapsed_since_ts_111(&v27, v26, 3577643008, 27111902)
//      if v27==0 (throttle not exceeded): v17=v28 (byte_1418930F0 ptr)
//      else:                              v17=nullptr
//      sub_14078B420(v17) = tray icon refresh (skips if v17==nullptr)
// 6. Unlock: byte_1418930F0 = 0; if was 2: WakeByAddressSingle(&byte_1418930F0)
// 7. sub_14079DA60(a1, v25) = persist state snapshot to disk
// 8. Alloc+copy event_name string: sub_140001360(a4, 1) + memcpy
// 9. sub_140074A00(v26, a1, "runtime-state-updated", 21, &v27)
//    = event bus emit "runtime-state-updated" to all listeners
// 10. check result == 0x8000000000000025 (error sentinel); if not: sub_1407B05F0(v26) (cleanup)
//
// Key string: "runtime-state-updated" at 0x1412F3946 (21 chars)
// Key side-effect: sub_140074A00 = event bus emit (notifies frontend)
// Key side-effect: sub_14078B420 = tray icon refresh (throttled)

__int64 __fastcall broadcast_runtime_state_updated_111(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  // [full HexRays body captured; complex state machine with throttle + tray + event bus]
}
```

---

## Delta Summary (vs 1.0.9)

### New app-level callees (not noise):
| VA | Name | Type |
|---|---|---|
| 0x140673CC0 | fetch_wham_usage_http_111 | NEW function |
| 0x1401B8D90 | on_usage_fetch_success_write_store_111 | EXPANDED (quota history path added) |
| 0x1401FF820 | quota_history_append_dedup_111 | NEW function |
| 0x140200EA0 | quota_history_persist_file_111 | NEW function |
| 0x14020DF30 | serialize_usage_attempt_stats_111 | NEW DTO serializer |

### New side-effects:
1. **Network I/O**: `sub_140C8D540` → GET `https://chatgpt.com/backend-api/wham/usage?account_id=<id>`
2. **Disk write**: `sub_141087E20` (CreateFile/WriteFile) via `quota_history_persist_file_111`
3. **Error logging**: "QUOTA_HISTORY_APPEND_FAILED" pushed to `state.error_log` ring buffer at `state[101..103]`

### New DTO keys:
- `usageAttemptCount` (u32)
- `usageSuccessCount` (u32)
- `lastUsageFailure` (Option\<String\>)
- `lastUsageFailureAccount` (Option\<String\>)

### Unchanged from 1.0.9 (filtered compilation noise):
- `get_usage_refresh_interval_read_sys_111`, `elapsed_since_ts_111`, `system_time_precise_u32_111`
- `pending_auto_switch_state_lock_acquire_111`, `load_mcp_servers_read_existing_snapshot_111`
- `sub_14080C3C0` (IPC_RESPONSE_DISPATCH), `sub_140790230` (broadcast runtime-state-updated)
- Arc clone/drop/deref, Rust alloc/dealloc, Tokio runtime callees
