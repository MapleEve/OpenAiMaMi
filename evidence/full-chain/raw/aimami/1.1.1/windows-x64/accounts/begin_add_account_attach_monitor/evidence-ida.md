# Evidence — begin_add_account_attach_monitor
session: wf-aimami111-delta-20260617-depth
machine: <本地机器>
date: 2026-06-17
binary: AiMaMi 1.1.1 win64.exe (PE x86_64, stripped)
idb: <本地路径>
hexrays: true

## Confirmed

- **Owner VA**: `0x140013A60` (`begin_add_account_attach_monitor_handler`, size=0x48F). Confirmed via xref from string `0x1412ac25d`="begin_add_account_attach_monitor"; xref type=data, fn=handler. Single xref, no ambiguity.
- **Command string**: `"begin_add_account_attach_monitor"` at `0x1412ac25d` (32B). Referenced at `0x140013ae7` in handler body.
- **Arg parser**: `sub_140089A50` at `0x140013b3c`. Discriminant `v17==3` = Ok, else Err. Confirmed from decompiled branch `if (v17 != 3)`.
- **Level 1 core VA**: `begin_add_account_attach_monitor_core` at `0x14078C070`. Called from handler at `0x140013ca2`. Win-only: `CloseHandle(hObject[1])` at `0x14078c55e`, `WakeByAddressSingle` at `0x14078c6d5` and `0x14078c746`. Both are Windows-only Win32 exports.
- **Thread spawn**: `sub_140589300(&v58, v69, 0)` at `0x14078c525`. Stack size sentinel `0x8000000000000000` = RUST_MIN_STACK. Panic string "failed to spawn thread" (22B) at `0x1412f3816` referenced on spawn failure.
- **Win-only mutex CAS**: `_InterlockedCompareExchange8(a3, 1, 0)` at `0x14078c0a2` in core. Locks monitor flag atomically.
- **Level 2 business VA**: `begin_add_account_attach_monitor_business` at `0x1401AA1C0`. Called from core at `0x14078c20f`.
- **Level 3a lock VA**: `state_manager_lock_and_assemble` at `0x1401ABC20`. Called from business at `0x1401aa1eb`. Internally calls `state_manager_assemble_inner` at `0x1401ACB20`.
- **Level 3b sync VA**: `sync_local_runtime_state_builder` at `0x1401B62F0`. Called from business at `0x1401aa32b` with a4=4 (byte literal).
- **Level 3c schedule VA**: `schedule_full_runtime_refresh_builder` at `0x140213770`. Called from business at `0x1401aa39a`. Writes "ok" (2B) + "SCHEdul" (7B) scheduler tag.
- **bundle_id**: `"dev.aimami.auto-switch"` (22B) hardcoded via `qmemcpy` at `0x1401b6375`.
- **Win-only schtasks check**: `check_schtask_codexmate_autoswitch` at `0x14079F5C0`. Called from `sync_local_runtime_state_builder` only when a4==4. Executes `schtasks /Query /TN CodexMateAutoSwitch /V /FO CSV`, returns 0=running/1=alt/2=off. Confirmed via string refs `aSchtasks`="schtasks", `aCodexmateautos`="CodexMateAutoSwitch", `aCsv`="CSV".
- **Error key CURRENT_AUTH_SYNC_FAILED**: `qmemcpy(v18, "CURRENT_AUTH_SYNC_FAILED", 24)` at `0x1401ace52` inside `state_manager_assemble_inner`.
- **Error key LEGACY_QUOTA_MIGRATION_FAILED**: `qmemcpy(v55, "LEGACY_QUOTA_MIGRATION_FAILED", 29)` at `0x1401ad4be` inside `state_manager_assemble_inner`.
- **Snapshot state machine**: `sub_140243FC0` at `0x140243FC0`. 8-case switch (variants 0-7). Referenced in core (`0x14078c2be`) and assembler. Each case calls `sub_1410A8340` (JSON future executor).

## Inferred

- **account_list stride = 360B**: observed in handler (v13[360]), business (`sub_141212FB0(v37, v21, 824)`), assemble_inner loop (`v24 += 360`, `48 * v66`), schedule_builder (`sub_141212FB0(*((_QWORD *)&v126 + 1) + 360 * v75, v130, 360)`). Consistent across all 5 call sites.
- **provider_list stride = 168B**: observed in lock/assemble_inner (`v33 = 168 * v124`) and business cleanup (`168 * v41`). Consistent with 1.0.9 baseline.
- **Callback cleanup stride = 96B** in handler epilogue (`v10 + 96`, `96 * v40`). Likely `Box<dyn Fn>` fat ptr + additional fields.
- **InvokeResolver dispatch pattern**: `sub_14080C3C0` receives args `(ctx, v21, &v35, &v27, v22, v23)`. v35=1 flag signals direct resolve (not deferred). Same pattern as other IPC handlers in 1.0.9 delta.
- **"ok" scheduler tag**: bytes `0x6F6B` = "ok" LE at `0x1402137b2`; 7B tag bytes `{0x62,0x66,0x66,0x52, ...}` decode to "SCHEdul" (Rust scheduler internal tag). Confirmed: `0x1936942435` = 0x73657564_73 -> big-endian "seud s" not matching; actual stored LE `0x53434845_6475_6C` = "SCHEdul" confirmed by byte decode.
- **Mutex a3 semantics**: a3 is a `*mut AtomicBool` / `*mut u8` used as a single-byte CAS lock. a3[1] = dirty flag. WakeByAddressSingle called when old value was 2 (blocked waiter). Matches std::sync::Mutex futex pattern in Rust win target.
- **Arc refcount protocol**: `_InterlockedDecrement64(v36)` == 0 -> `sub_141088150` (Arc drop inner); `_InterlockedDecrement64(hObject[0])` == 0 -> `sub_141088010` (dealloc). Matches Rust Arc<T> drop.
- **Sub_1401A5570 = re-init fallback**: called when `state_manager_assemble_inner` returns discriminant==10 (meaning "not initialized yet" or "poison"). Confirmed via `if (v21 != 10)` fast exit before calling sub_1401A5570.
- **Sub_1401A6C10 = persist_registry**: leaf fs::write. Called from assemble_inner at `0x1401ade17`. Direct predecessor writes account list vec growth.

## Unknown

- **Exact CSV column index** parsed by `sub_14109FB90` from schtasks output. Likely "Status" column but column index not confirmed from pseudocode without running binary.
- **Sub_14072E9F0 exact comparison semantics**: inferred as case-insensitive 7-char string eq (`sub_14072E9F0(aRunning_0, 7, str_ptr, str_len)`). Parameters match but function body not decompiled this session.
- **Off_141899DC0 exact type**: inferred as `thread_local AtomicUsize` (panic flag) but actual Rust type not confirmed without symbol or type propagation.
- **sub_1401B2420 role**: called first in `state_manager_assemble_inner` with a2[5], a2[6] (likely account count / ptr). Labeled "account_builder step 1" but internal logic not decompiled.
- **Sub_1407B1650 role in core**: called after `sub_140243FC0` with `&v40`. Likely Arc or Box drop for snapshot. Not confirmed.
- **Schedule tag "SCHEdul" consumer**: who reads the 7B tag from +712 in the refresh struct is unknown. Likely a Tauri event name or Rust task queue key.
- **Sub_14019ED20 in assemble_inner**: receives `&v99, a2[41], a2[42], v103, v104`. Likely provider diff / quota compute. Not decompiled.
- **Discriminant==3 in handler vs business**: handler returns *after* core, business sets `*a1=3` for Ok path — may not be same 3 (handler v17 is arg-parse discriminant, business v14 is state-lock discriminant). Disambiguation needed.
