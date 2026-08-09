// codexmate_lib::commands::voice_runtime::set_voice_processing_mode_id
// owner_ea: 0x1004960c0, size: 0xf1
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// notes: Tauri wrapper: runtime::set_processing_mode_id -> CoreEnvelope::ok

// 1.2.4→1.2.6 delta 新增命令: Tauri 命令包装器,委托 core::voice::runtime::set_processing_mode_id。A-level owner for commands::voice_runtime::set_voice_processing_mode_id
_QWORD *__fastcall codexmate_lib::commands::voice_runtime::set_voice_processing_mode_id::h21502c65b704c739(
        _QWORD *__dst,
        __int64 a2,
        __int64 *a3,
        unsigned __int8 a4)
{
  __int64 v4; // rax
  _QWORD v6[4]; // [rsp+0h] [rbp-610h] BYREF
  _BYTE __dsta[680]; // [rsp+20h] [rbp-5F0h] BYREF
  _QWORD v8[99]; // [rsp+2C8h] [rbp-348h] BYREF
  __int64 v9; // [rsp+5E0h] [rbp-30h]
  __int64 v10; // [rsp+5E8h] [rbp-28h]
  __int64 v11; // [rsp+5F0h] [rbp-20h]

  codexmate_lib::core::voice::runtime::set_processing_mode_id::heac3ad80e9497e02(v8, a2, a3, a4);
  v9 = v8[1];
  v10 = v8[2];
  v11 = v8[3];
  if ( v8[0] == 2 )
  {
    __dst[3] = v11;
    v4 = v9;
    __dst[2] = v10;
    __dst[1] = v4;
    *__dst = 2;
  }
  else
  {
    memcpy(__dsta, &v8[4], sizeof(__dsta));
    v6[0] = v8[0];
    v6[1] = v9;
    v6[2] = v10;
    v6[3] = v11;
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::heedfd73c47760d1c(v8, v6);
    memcpy(__dst, v8, 0x318u);
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h08fa19b434408518(a2);
  return __dst;
}

