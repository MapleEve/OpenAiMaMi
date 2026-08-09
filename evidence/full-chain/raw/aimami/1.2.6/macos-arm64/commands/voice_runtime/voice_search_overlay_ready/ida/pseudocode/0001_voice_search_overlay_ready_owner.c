// codexmate_lib::commands::voice_runtime::voice_search_overlay_ready
// owner_ea: 0x100495fe0, size: 0xbd
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// notes: StateManager::try_get -> snapshot -> CoreEnvelope::ok, panics if state not found

// 1.2.4→1.2.6 delta 新增命令: 通过 StateManager::try_get 获取 VoiceSearchResultState::snapshot,经 CoreEnvelope::ok 返回。含 panic 路径(状态不存在时)。A-level owner for commands::voice_runtime::voice_search_overlay_ready
void *__fastcall codexmate_lib::commands::voice_runtime::voice_search_overlay_ready::hbca4dc61a0dc0004(
        void *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[16]; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v5[8]; // [rsp+80h] [rbp-40h] BYREF

  v2 = tauri::state::StateManager::try_get::h877d09c8752cb7e6(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL);
  if ( !v2 )
  {
    v5[0] = &anon_c267236184b514dd3bb615f659186bd4_1438;
    v5[1] = 68;
    v4[0] = v5;
    v4[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
    core::panicking::panic_fmt::h3a793735daf6e4ec(
      &anon_c267236184b514dd3bb615f659186bd4_1461,
      v4,
      &anon_c267236184b514dd3bb615f659186bd4_1462);
  }
  codexmate_lib::core::voice::runtime::overlay::VoiceSearchResultState::snapshot::hd007ebfb5d731e19(v5, v2);
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h4f08235cf45d3b81(v4, v5);
  qmemcpy(a1, v4, 0x80u);
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h08fa19b434408518(a2);
  return a1;
}

