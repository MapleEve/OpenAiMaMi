// __ZN13codexmate_lib4core5voice7runtime16shutdown_runtime @ 0x100671b00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::shutdown_runtime::hd8b62254798f4fd4(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // r12
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  char v13; // r13
  __int64 v14; // rdx
  _QWORD v15[3]; // [rsp+8h] [rbp-A8h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-90h] BYREF
  char v17; // [rsp+30h] [rbp-80h]
  _BYTE v18[7]; // [rsp+31h] [rbp-7Fh]
  __int64 v19; // [rsp+38h] [rbp-78h]
  __int64 v20; // [rsp+40h] [rbp-70h]
  __int64 v21; // [rsp+48h] [rbp-68h]
  __int64 v22; // [rsp+50h] [rbp-60h]
  __int64 v23; // [rsp+58h] [rbp-58h]
  __int64 v24; // [rsp+60h] [rbp-50h]
  __int64 v25; // [rsp+68h] [rbp-48h]
  __int64 v26; // [rsp+70h] [rbp-40h]
  int v27; // [rsp+7Ch] [rbp-34h]
  _BYTE v28[7]; // [rsp+80h] [rbp-30h]

  v3 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x100671b17*/
  v4 = v3; /*0x100671b1c*/
  v5 = *(_QWORD *)(v3 + 32); /*0x100671b1f*/
  if ( !v5 ) /*0x100671b26*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 32); /*0x100671d6d*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100671b36*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100671b45*/
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x100671d75*/
    v8 = (_BYTE *)(v4 + 40); /*0x100671d7d*/
    v7 = *(unsigned __int8 *)(v4 + 40); /*0x100671d81*/
    if ( (_BYTE)v7 ) /*0x100671d88*/
    {
      if ( !(_BYTE)v10 ) /*0x100671d8c*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v4 + 32)); /*0x100671b82*/
LABEL_5:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100671d97*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) )
      {
        *v8 = 1; /*0x100671da4*/
      }
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v4 + 32)); /*0x100671da9*/
    }
    LOBYTE(v10) = v10 ^ 1; /*0x100671dae*/
  }
  else
  {
    v8 = (_BYTE *)(v4 + 40); /*0x100671b54*/
    if ( *(_BYTE *)(v4 + 40) ) /*0x100671b58*/
      goto LABEL_5; /*0x100671b5f*/
    v10 = 0; /*0x100671b87*/
  }
  *(_BYTE *)(v4 + 900) = 1; /*0x100671b89*/
  *(_BYTE *)(v4 + 908) = 0; /*0x100671b91*/
  *(_QWORD *)(v4 + 880) = 0; /*0x100671b99*/
  *(_DWORD *)(v4 + 720) = 1000000000; /*0x100671ba4*/
  *(_QWORD *)(v4 + 320) = 0; /*0x100671baf*/
  *(_QWORD *)(v4 + 344) = 0; /*0x100671bba*/
  v11 = *(_QWORD *)(v4 + 664); /*0x100671bc5*/
  if ( v11 != 0x8000000000000000LL && v11 ) /*0x100671bd7*/
  {
    v5 = *(_QWORD *)(v4 + 672); /*0x100671bd9*/
    v27 = v10; /*0x100671be0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v11, 1); /*0x100671be8*/
    LOBYTE(v10) = v27; /*0x100671bed*/
  }
  *(_QWORD *)(v4 + 664) = 0x8000000000000000LL; /*0x100671bf0*/
  v12 = *(_QWORD *)(v4 + 728); /*0x100671bf7*/
  v20 = *(_QWORD *)(v4 + 736); /*0x100671c05*/
  v19 = v12; /*0x100671c09*/
  v13 = *(_BYTE *)(v4 + 744); /*0x100671c0d*/
  *(_DWORD *)&v28[3] = *(_DWORD *)(v4 + 748); /*0x100671c1c*/
  *(_DWORD *)v28 = *(_DWORD *)(v4 + 745); /*0x100671c26*/
  *(_BYTE *)(v4 + 744) = 2; /*0x100671c29*/
  v26 = *(_QWORD *)(v4 + 768); /*0x100671c38*/
  v14 = *(_QWORD *)(v4 + 752); /*0x100671c3c*/
  v25 = *(_QWORD *)(v4 + 760); /*0x100671c4a*/
  v24 = v14; /*0x100671c4e*/
  *(_BYTE *)(v4 + 768) = 2; /*0x100671c52*/
  if ( !(_BYTE)v10 /*0x100671dc6*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v5,
                           v11,
                           v14,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *v8 = 1; /*0x100671dd3*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v4 + 32)); /*0x100671c78*/
  v23 = v26; /*0x100671c81*/
  v22 = v25; /*0x100671c8d*/
  v21 = v24; /*0x100671c91*/
  if ( v13 != 2 ) /*0x100671c99*/
  {
    v16[1] = v20; /*0x100671ca3*/
    v16[0] = v19; /*0x100671caa*/
    v17 = v13; /*0x100671cb1*/
    *(_DWORD *)v18 = *(_DWORD *)v28; /*0x100671cbb*/
    *(_DWORD *)&v18[3] = *(_DWORD *)&v28[3]; /*0x100671cbe*/
    codexmate_lib::core::voice::runtime::terminate_voice_sidecar::h6420d3143bb30077( /*0x100671cd7*/
      v16,
      "stop\nfailed to spawn thread",
      5);
  }
  if ( (_BYTE)v23 != 2 ) /*0x100671ce4*/
  {
    v15[2] = v26; /*0x100671cea*/
    v15[1] = v25; /*0x100671cf9*/
    v15[0] = v24; /*0x100671d00*/
    codexmate_lib::core::voice::runtime::terminate_voice_sidecar::h6420d3143bb30077(v15, "quit\n", 5); /*0x100671d1a*/
  }
  if ( qword_1019FF088 ) /*0x100671d29*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hb43fbf08bf63748c(&codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce); /*0x100671dbc*/
  std::sync::mpmc::Sender$LT$T$GT$::send::h22e3779823916dcc( /*0x100671d3b*/
    &codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce,
    1);
  codexmate_lib::core::voice::runtime::overlay::hide_voice_overlay::he8e888d837f13236(a1); /*0x100671d43*/
  return codexmate_lib::core::voice::runtime::tray::update_tray_recording_state::he8064c52aac3ad4d(a1, 0); /*0x100671b71*/
}