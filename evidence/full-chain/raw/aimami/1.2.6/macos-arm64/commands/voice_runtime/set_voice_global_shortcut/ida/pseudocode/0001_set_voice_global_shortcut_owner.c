// codexmate_lib::commands::voice_runtime::set_voice_global_shortcut
// owner_ea: 0x1004959d0, size: 0xf1
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// notes: Tauri wrapper: runtime::set_global_shortcut -> CoreEnvelope::ok

// 1.2.4→1.2.6 delta 新增命令: Tauri 命令包装器,委托 core::voice::runtime::set_global_shortcut。A-level owner for commands::voice_runtime::set_voice_global_shortcut
_QWORD *__fastcall codexmate_lib::commands::voice_runtime::set_voice_global_shortcut::h961010af024759c8(
        _QWORD *__dst,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  _QWORD v5[4]; // [rsp+0h] [rbp-610h] BYREF
  _BYTE __dsta[680]; // [rsp+20h] [rbp-5F0h] BYREF
  _QWORD v7[99]; // [rsp+2C8h] [rbp-348h] BYREF
  __int64 v8; // [rsp+5E0h] [rbp-30h]
  __int64 v9; // [rsp+5E8h] [rbp-28h]
  __int64 v10; // [rsp+5F0h] [rbp-20h]

  codexmate_lib::core::voice::runtime::set_global_shortcut::hc42536649e7dc419(v7, a2, a3);
  v8 = v7[1];
  v9 = v7[2];
  v10 = v7[3];
  if ( v7[0] == 2 )
  {
    __dst[3] = v10;
    v3 = v8;
    __dst[2] = v9;
    __dst[1] = v3;
    *__dst = 2;
  }
  else
  {
    memcpy(__dsta, &v7[4], sizeof(__dsta));
    v5[0] = v7[0];
    v5[1] = v8;
    v5[2] = v9;
    v5[3] = v10;
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::heedfd73c47760d1c(v7, v5);
    memcpy(__dst, v7, 0x318u);
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h08fa19b434408518(a2);
  return __dst;
}

