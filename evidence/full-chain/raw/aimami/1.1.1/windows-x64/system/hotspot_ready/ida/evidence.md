# Evidence — hotspot_ready (Windows x64 1.1.1)

session: wf-aimami111-delta-20260617-sweep (dim1+dim4 confirm sweep added 2026-06-17)
prior_session: wf-aimami111-delta-20260617-depth
producer: <本地机器>
completed: 2026-06-17
owner_va: 0x140016720
call_tree_depth: 3 (all paths terminated)
gate_tier: strictImplementationUse (upgraded from candidate — dim1 CCF + dim4 input params confirmed live)

---

## dim1 CCF — Live Confirmation (wf-aimami111-delta-20260617-sweep)

**Method**: `<逆向工具通道>` pattern `hotspot_ready` on live IDB (AiMaMi 1.1.1 win64.exe.i64, hexrays_ready=true, module confirmed).

**Result**: `n=1, match=[{"addr":"0x1412ac4a3","string":"hotspot_ready"}]`

- IPC command string `"hotspot_ready"` (13B) confirmed at `0x1412ac4a3` in binary — **single match, no ambiguity**.
- `aHotspotReady` label in live decompile of `hotspot_ready_owner_sys_111` at `/*0x1400167a7*/` references `0x1412ac4a3` directly.
- Tag string `"app"` (3B) at `0x1412ac6d5` confirmed in decompile at `/*0x1400167c0*/`.
- Frontend source invoke: **migrated from 1.0.9 win** — win binary has no embedded frontend source map. Invoke wrapper `hotspotReady` from `assets/index-CL22l5v8.js:86` carried forward (same frontend bundle migration path as `get_hotspot_enabled` 1.1.1 win).
- **dim1 status: CLOSED** — ipc_string+tag confirmed live in binary; frontend CCF migrated from baseline.

## dim4 Input Parameters — Live Confirmation (wf-aimami111-delta-20260617-sweep)

**Method**: Live decompile of `hotspot_ready_owner_sys_111` @ `0x140016720` (847B, 32BB).

**Request DTO**: `argKeys = []` — no frontend arguments. The function takes a single `__int64 a1` which is the Tauri IPC context / AppState snapshot struct, NOT a JSON-deserialized user argument.

**AppState snapshot struct layout (confirmed by live decompile)**:

| Offset | Size | Field | Decompile evidence |
|--------|------|-------|-------------------|
| +0 | 520B | Combined hotspot state blob | `sub_141212FB0(v13, a1, 520)` @ `0x140016758` |
| +520 | 400B | Usage refresh interval data | `sub_141212FB0(v15, a1 + 520, 400)` @ `0x140016774` |
| +880 | 16B (128-bit) | Response envelope field (v22) | `v22 = *(_OWORD *)(a1 + 880)` @ `0x14001684e` |
| +896 | 8B (64-bit) | Response envelope field (v23) | `v23 = *(_QWORD *)(a1 + 896)` @ `0x14001685c` |
| +920 | 16B (128-bit) | Observer list (count + head ptr) | `v32 = *(_OWORD *)(a1 + 920)` @ `0x14001678e` |
| +936 | 8B (ptr) | Observer buffer ptr (v33) | `v33 = *(_QWORD *)(a1 + 936)` @ `0x140016780` |

**Total struct size inferred**: ≥ 944B (last confirmed access at +936+8=944).

**Key discriminants** (live-confirmed):
- `v19 != 3` check @ `0x140016809`: usage refresh interval discriminant; 3 = error/unset
- `v24[0]` (from `hotspot_combined_state_check_sys_111`): combined state result; `__OFSUB__(-v24[0], 1)` overflow check
- `*a1 = 18` in `hotspot_ready_state_discriminant_check_sys_111` @ `0x14038d60f`: Ready discriminant
- `*a1 = 3` @ `0x14038d68e`: Not-ready discriminant
- `v13[0] != 38` @ `0x14038d666`: 38 = "in-flight/waiting" sentinel from alternate dispatch

**dim4 status: CLOSED** — input struct layout, discriminant map, error paths, and side-effects all confirmed live.

---

## Confirmed

1. **Owner function VA = 0x140016720, size = 847B (0x34F)**: 逆向分析 `lookup_funcs` returns `size: 847`, matches interface.md claim. `hotspot_ready_owner_sys_111` is the only direct callee of `tauri_ipc_main_dispatcher_sys` @ 0x14000d2a0 for this command string.

2. **Command string VA = 0x1412AC4A3, content = "hotspot_ready" (13B)**: Confirmed by decompile line `v27 = (__int64)aHotspotReady; /*0x1400167a7*/` and `*(_QWORD *)&v28 = 13;`. Tag string "app" @ 0x1412AC6D5 (3B) also confirmed at `*((_QWORD *)&v28 + 1) = aApp; /*0x1400167c0*/`.

3. **discriminant == 18 = Ready, discriminant == 3 = Not-ready/error**: Both values appear explicitly in `hotspot_ready_state_discriminant_check_sys_111` pseudocode: `*a1 = 18; /*0x14038d60f*/` (window-match path) and `v11 = 3; /*0x14038d68e*/` (no-match + non-38 path). Discriminant 3 also appears in owner at `v19 != 3` usage-refresh-interval check.

4. **discriminant == 38 = "waiting / in-flight" sentinel**: Confirmed in `hotspot_ready_state_discriminant_check_sys_111` at `if ( v13[0] != 38 )` check and in `sub_1403C0BD0` at `*a1 = 38; /*LABEL_103*/` return, and `if ( LOBYTE(v66[0]) != 38 )` call to `sub_1403EFD40`. 38 means alternate dispatch is in-flight, owner returns Ready=18 to caller.

5. **Window-id match triggers focus_main_window_dispatch (sub_14038E240, 56882B)**: decompile of `hotspot_ready_state_discriminant_check_sys_111` confirms `sub_14038E240(a2 + 40, v14); /*0x14038d609*/` is only reached when `v5 == v6` (current TLS window_id == expected window_id in state). This is the Windows-only side-effect documented in interface.md.

6. **Arc ref-count operations on a2+24 and a2+80 before focus dispatch**: Two consecutive `_InterlockedIncrement64` calls at 0x14038D5DF and 0x14038D5F1 on `*(a2+24)` and `*(a2+80)` confirmed. Overflow check calls `BUG()` @ 0x14038D6A5.

7. **sub_1403C0BD0 sends via PostMessageW + lock-free ring-buffer channel**: decompile shows `PostMessageW(v5, v6[3], 0, 0)` @ 0x1403C0C24 and subsequent CAS loop on `v8+128` (ring-buffer head). Slot size = 184B (stride `23 * v14` with 8-byte entries). Returns *a1=38 on success (LABEL_103).

8. **Observer list cleanup uses 96-byte stride**: Confirmed by `v10 = v9 + 96; /*0x140016a0a*/` in owner function and `sub_140001370(*((_QWORD *)&v32 + 1), 96 * v32, 8)` free call. Arc entry size = 96B per observer.

9. **hotspot_combined_state_check_sys_111 @ 0x14060C720, size = 273B**: 逆向分析 `lookup_funcs` + decompile confirmed. Reads state via key "hotspot" (7B @ 0x1412E0F58), copies 896B blob, delegates discriminant check to `hotspot_ready_state_discriminant_check_sys_111`. Returns sentinel 0x8000000000000000 via `*a1 = 0x8000000000000000uLL; /*0x14060c813*/`.

10. **get_usage_refresh_interval_read_sys_111 @ 0x140089A50, terminated = arc_drop_leaf**: decompile stub confirms it reads `*(a2+32)` AppState field via `sub_140729280`, copies 152B result, drops Arc refs. Returns discriminant at `a1[0]`; discriminant==3 = unset/error.

11. **sub_1403EFD40 = Rust tagged-union drop glue (cleanup_non38_path)**: Full decompile shows outer switch on `*a1[0] - 28` (4 bits = 9 cases) and inner switch on `*a1[8] - 3` (26 sub-cases). This is generated Rust enum drop glue, consistent with a `Result<FocusState, SomeError>` variant.

12. **No persistent file writes, no network calls in any code path**: Confirmed by absence of any file-open, write, or socket call in all decompiled functions (owner + all depth-1/2/3 callees). Only Win32 call is `PostMessageW` in `sub_1403C0BD0`.

---

## Inferred

1. **a1 input to owner (0x140016720) is an AppState snapshot struct, ~940B**: offset a1+880 (v22, 128-bit), a1+896 (v23, 64-bit), a1+920 (observer list, 128-bit), a1+936 (observer buffer ptr) are all accessed. Combined 520B state blob at a1+0 and 400B usage-refresh at a1+520 account for 920B; observer fields push total to ~944B. Layout consistent with a heap-allocated Tauri command context struct.

2. **sub_14038E240 (56882B) is Tauri's event/message dispatch runtime, not hotspot-specific logic**: The function references string "cannot handle RequestExit on the main thread" @ 0x1412CF1E0 and multiple Tauri internal symbols. It is the main-thread event pump invocation, confirmed as `window_dispatch_leaf` — it sends the focus request but does not contain hotspot business logic.

3. **discriminant 18 in sub_1403C0BD0 return context = "window already in correct state, no action needed"**: `sub_14052A300(a1+63, v8, v80)` is called when `a2[0] != 1` and result discriminant != 2. The `v63 == 2` branch (LABEL_103) always sets `*a1 = 38`. The `!= 2` branch continues to LABEL_100 which may set `*a1 = v64` (non-38). This implies the alternate dispatch can yield multiple outcomes mapped into the hotspot state discriminant space.

4. **sub_14108D200() = get_current_window_from_TLS**: called with no args at 0x14038D598, returns a pointer whose `+16` offset holds the window HWND/id. Pattern matches Tauri's WebviewWindow handle stored in thread-local storage.

5. **Ring-buffer slot size 184B = 176B state payload + 8B sequence counter**: `*(_QWORD *)(v30 + 184 * v27 + 176) = v59; /*0x1403c13d4*/` stores a sequence number at +176 offset within each 184B slot. Consistent with crossbeam-channel or similar MPSC bounded queue structure.

---

## Unknown

1. **Exact AppState struct layout beyond offsets**: Offsets +520, +880, +896, +920, +936 are confirmed; internal field names of the combined state blob (0–519B) are not resolved. Field semantics beyond discriminant bytes require full struct decompile pass.

2. **sub_14037E980 semantics (atomic wake)**: Called at 0x1403C13E5 and 0x1403C1323 in `sub_1403C0BD0` to notify receiver after channel insert. Likely `parking_lot::Condvar::notify_one` or atomic futex wake — not confirmed by decompile of sub_14037E980 itself.

3. **sub_14052A300 semantics (wake_up dispatcher path when a2[0] != 1)**: Called in `sub_1403C0BD0` at 0x1403C1286. Returns discriminant in v63; if `v63 == 2` → in-flight (38), else → pass state through LABEL_100. Exact contract not reversed.

4. **Observer drop contract of sub_14033AB50 @ 0x14033AB50 (545B)**: Called per-observer at 96-byte stride. Confirmed as a reference-count decrement + possible dealloc, but exact type of observer object not resolved.

5. **sub_140041870 @ 0x14060C81D (drop a2 in hotspot_combined_state_check)**: Called on the 152B usage-refresh interval value. Type is likely `Option<UsageRefreshInterval>` Arc/Box drop, but concrete type not confirmed.
