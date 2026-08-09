// codexmate_lib::commands::voice_runtime::start_voice_capture
// owner_ea: 0x100494f50, size: 0xf1
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// notes: Tauri wrapper: runtime::start_capture -> CoreEnvelope::ok

// 1.2.4→1.2.6 delta 新增命令: Tauri 命令包装器,委托 core::voice::runtime::start_capture。A-level owner for commands::voice_runtime::start_voice_capture
void *__fastcall codexmate_lib::commands::voice_runtime::start_voice_capture::h4fcc52b4c0fb35e6(
        void *result_out,
        void *app_handle)
{
  __int64 v2; // rax
  _QWORD v4[4]; // [rsp+0h] [rbp-610h] BYREF
  _BYTE __dst[680]; // [rsp+20h] [rbp-5F0h] BYREF
  _QWORD result_outa[99]; // [rsp+2C8h] [rbp-348h] BYREF
  __int64 v7; // [rsp+5E0h] [rbp-30h]
  __int64 v8; // [rsp+5E8h] [rbp-28h]
  __int64 v9; // [rsp+5F0h] [rbp-20h]

  codexmate_lib::core::voice::runtime::start_capture::hc76ca1c34e2e5b58(result_outa, (__int64)app_handle);
  v7 = result_outa[1];
  v8 = result_outa[2];
  v9 = result_outa[3];
  if ( result_outa[0] == 2 )
  {
    *((_QWORD *)result_out + 3) = v9;
    v2 = v7;
    *((_QWORD *)result_out + 2) = v8;
    *((_QWORD *)result_out + 1) = v2;
    *(_QWORD *)result_out = 2;
  }
  else
  {
    memcpy(__dst, &result_outa[4], sizeof(__dst));
    v4[0] = result_outa[0];
    v4[1] = v7;
    v4[2] = v8;
    v4[3] = v9;
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::heedfd73c47760d1c(result_outa, v4);
    memcpy(result_out, result_outa, 0x318u);
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h08fa19b434408518(app_handle);
  return result_out;
}

