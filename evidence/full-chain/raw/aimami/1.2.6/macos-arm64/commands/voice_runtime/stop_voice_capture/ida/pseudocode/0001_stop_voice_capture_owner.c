// codexmate_lib::commands::voice_runtime::stop_voice_capture
// owner_ea: 0x100494e40, size: 0xf1
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// notes: Tauri wrapper: runtime::stop_capture -> CoreEnvelope::ok

// 1.2.4→1.2.6 delta 新增命令: Tauri 命令包装器,委托 core::voice::runtime::stop_capture。A-level owner for commands::voice_runtime::stop_voice_capture
_QWORD *__fastcall codexmate_lib::commands::voice_runtime::stop_voice_capture::h2950ae77819882cf(
        _QWORD *__dst,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[4]; // [rsp+0h] [rbp-610h] BYREF
  _BYTE __dsta[680]; // [rsp+20h] [rbp-5F0h] BYREF
  _QWORD v6[99]; // [rsp+2C8h] [rbp-348h] BYREF
  __int64 v7; // [rsp+5E0h] [rbp-30h]
  __int64 v8; // [rsp+5E8h] [rbp-28h]
  __int64 v9; // [rsp+5F0h] [rbp-20h]

  codexmate_lib::core::voice::runtime::stop_capture::hb0ee2e756a391e53(v6, a2);
  v7 = v6[1];
  v8 = v6[2];
  v9 = v6[3];
  if ( v6[0] == 2 )
  {
    __dst[3] = v9;
    v2 = v7;
    __dst[2] = v8;
    __dst[1] = v2;
    *__dst = 2;
  }
  else
  {
    memcpy(__dsta, &v6[4], sizeof(__dsta));
    v4[0] = v6[0];
    v4[1] = v7;
    v4[2] = v8;
    v4[3] = v9;
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::heedfd73c47760d1c(v6, v4);
    memcpy(__dst, v6, 0x318u);
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h08fa19b434408518(a2);
  return __dst;
}

