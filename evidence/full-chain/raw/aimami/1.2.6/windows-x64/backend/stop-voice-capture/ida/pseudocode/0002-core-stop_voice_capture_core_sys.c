// EA: 0x140c384a0 (renamed this session: stop_voice_capture_core_sys)
// SHARED core, 3 total callers: this command's owner (0x14015b140), plus sub_140C42E40 and sub_140C44B20
// which belong to the ALREADY-COMPLETED sidecar-scheduler task (task #152, "voice-runtime-sidecar
// standby capture management" cluster) - those two callers were NOT touched/renamed this session, out of
// strict 3-target scope; documented here only as a shared-caller caveat.
//
// Role: Interlocked mutex-flag state machine that halts the background voice-capture worker thread.
// 1765 bytes, 77 basic blocks, cc=41.
__int64 __fastcall stop_voice_capture_core_sys(__int64 a1, __int64 a2)
{
  // v4 = sub_14005F140(a2)  -- resolve per-session capture-state struct pointer
  // _InterlockedCompareExchange8(v4+32, 1, 0) -- acquire mutex-style flag, poison-recovery via sub_14176CDB0
  // if state byte (v4+867) not in [1,2]: fast-path teardown, WakeByAddressSingle notify, done (no thread join)
  // else: _InterlockedIncrement64(&qword_141FBA3C0) -- generation counter bump
  //       *(v4+867) = 3 -- transition capture state to "stopping"
  //       if (thread handle v4+672 valid) sub_140001660(handle, ...) -- close/signal prior handle, reset to -1
  //       emit_voice_runtime_status(&v43, a2) -- broadcast updated runtime status to frontend (event emission)
  //       -- if emit indicates a live worker (v43 != -1): populate response tuple, return early (no thread join)
  //       -- else: build fresh oneshot channel (sub_14023DD80), spawn/await via _InterlockedDecrement64 pair
  //                on the channel's Arc-style refcounts, sub_141529710/sub_1415295D0 (Arc<T> drop helpers)
  //                CloseHandle(hObject) -- release the worker thread HANDLE
  //                load_voice_runtime_status(a1, a2) -- final: re-query fresh state for the response (see
  //                    voice-runtime-status leaf's core function, same EA 0x140c37a50)
  // terminal side effects: thread-handle CloseHandle, WakeByAddressSingle (futex-style wake), emit_voice_runtime_status
  // event broadcast (⚠ observable side effect: frontend receives a runtime-status event as part of stopping capture)
  return a1;
}
