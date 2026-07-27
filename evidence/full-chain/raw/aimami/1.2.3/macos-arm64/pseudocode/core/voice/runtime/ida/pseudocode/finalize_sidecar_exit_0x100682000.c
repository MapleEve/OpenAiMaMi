// __ZN13codexmate_lib4core5voice7runtime21finalize_sidecar_exit @ 0x100682000 | 基线 same-set
double __fastcall codexmate_lib::core::voice::runtime::finalize_sidecar_exit::hb0a4f62cfc3184be(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // r12
  bool v13; // r13
  const char *v14; // rdi
  char v15; // al
  __int64 v16; // rdx
  char v17; // r14
  char v18; // of
  volatile signed __int64 *v19; // r14
  __int64 v20; // rt0
  volatile signed __int64 *v21; // r12
  __int64 v22; // rt0
  double result; // xmm0_8
  _BYTE __src[136]; // [rsp+8h] [rbp-178h] BYREF
  _BYTE v25[24]; // [rsp+90h] [rbp-F0h] BYREF
  _QWORD __dst[19]; // [rsp+A8h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+140h] [rbp-40h] BYREF
  _QWORD *v28; // [rsp+148h] [rbp-38h]
  __int64 v29; // [rsp+150h] [rbp-30h]

  LODWORD(v29) = a3; /*0x100682017*/
  v27 = a4; /*0x100682020*/
  v6 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x100682024*/
  v7 = v6; /*0x100682029*/
  v8 = (_QWORD *)(v6 + 32); /*0x10068202c*/
  v9 = *(_QWORD *)(v6 + 32); /*0x100682030*/
  if ( !v9 ) /*0x100682037*/
    v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v6 + 32); /*0x1006820a7*/
  v28 = v8; /*0x100682039*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v9); /*0x10068203d*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10068204c*/
  {
    v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, a2, v10, v11) ^ 1; /*0x1006820b4*/
    if ( *(_BYTE *)(v7 + 40) ) /*0x1006820b8*/
    {
LABEL_5:
      if ( !v12 /*0x1006822ed*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v9,
                               a2,
                               v10,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v7 + 40) = 1; /*0x1006822fa*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v28); /*0x10068209a*/
      return result; /*0x10068209a*/
    }
  }
  else
  {
    v12 = 0; /*0x100682054*/
    if ( *(_BYTE *)(v7 + 40) ) /*0x100682057*/
      goto LABEL_5; /*0x10068205e*/
  }
  v13 = a4 != 0 && *(_QWORD *)(v7 + 880) == a4; /*0x1006820d2*/
  if ( v13 ) /*0x1006820d5*/
  {
    if ( *(_BYTE *)(v7 + 744) != 2 ) /*0x1006820df*/
    {
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v7 + 728)) ) /*0x1006820eb*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::heff7261dabead4fc(v7 + 728); /*0x1006820f1*/
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v7 + 736)) ) /*0x1006820fd*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(v7 + 736); /*0x10068210a*/
    }
    v14 = (const char *)(v7 + 48); /*0x100682112*/
    *(_BYTE *)(v7 + 744) = 2; /*0x100682116*/
    a2 = (unsigned int)a2; /*0x10068211e*/
    v15 = codexmate_lib::core::voice::runtime::finalize_capture_state::h0bbd40974d9b6c51( /*0x100682124*/
            v7 + 48,
            (unsigned int)a2,
            (unsigned int)v29);
    v29 = v16; /*0x100682129*/
    v17 = v15; /*0x10068212d*/
    if ( v12 ) /*0x100682133*/
      goto LABEL_19; /*0x100682133*/
    goto LABEL_18; /*0x100682133*/
  }
  __dst[0] = &v27; /*0x100682153*/
  __dst[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100682161*/
  __dst[2] = v7 + 880; /*0x100682168*/
  __dst[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10068216f*/
  __dst[4] = v7 + 908; /*0x100682176*/
  __dst[5] = _$LT$codexmate_lib..core..models..VoiceCaptureState$u20$as$u20$core..fmt..Debug$GT$::fmt::h656e52c01bbdde51; /*0x100682184*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, (char *)&loc_1017C2F2C + 2, __dst); /*0x1006821a0*/
  v14 = "voicesidecar_exit_stale"; /*0x1006821a5*/
  a2 = 5; /*0x1006821ba*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x1006821c4*/
    "voicesidecar_exit_stale",
    5,
    "sidecar_exit_stale",
    18,
    v25);
  v17 = 0; /*0x1006821c9*/
  if ( !v12 ) /*0x1006821cf*/
  {
LABEL_18:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100682304*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v14,
                             a2,
                             v16,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v7 + 40) = 1; /*0x100682311*/
    }
  }
LABEL_19:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v28); /*0x1006821ee*/
  if ( v13 ) /*0x1006821fd*/
  {
    codexmate_lib::core::voice::runtime::overlay::hide_voice_overlay::he8e888d837f13236(a1); /*0x100682206*/
    codexmate_lib::core::voice::runtime::tray::update_tray_recording_state::he8064c52aac3ad4d(a1, 0); /*0x100682210*/
    if ( qword_1019FF088 ) /*0x10068221f*/
      std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hb43fbf08bf63748c(&codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce); /*0x100682322*/
    std::sync::mpmc::Sender$LT$T$GT$::send::h22e3779823916dcc( /*0x100682231*/
      &codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce,
      1);
    if ( (v17 & 1) != 0 ) /*0x10068223a*/
    {
      _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x100682246*/
      v19 = *(volatile signed __int64 **)(a1 + 136); /*0x10068224b*/
      v20 = _InterlockedIncrement64(v19); /*0x100682252*/
      if ( (v20 < 0) ^ v18 | (v20 == 0) /*0x100682268*/
        || (v21 = *(volatile signed __int64 **)(a1 + 144),
            v22 = _InterlockedIncrement64(v21),
            (v22 < 0) ^ v18 | (v22 == 0)) )
      {
        BUG(); /*0x10068232c*/
      }
      memcpy(__dst, __src, 0x88u); /*0x100682284*/
      __dst[17] = v19; /*0x100682289*/
      __dst[18] = v21; /*0x10068228d*/
      codexmate_lib::core::voice::runtime::watchdog::spawn_processing_watchdog::hd1792ea121b670af(__dst, v29); /*0x100682298*/
    }
    codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)__dst, a1); /*0x1006822a7*/
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x1006822c8*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1006822d6*/
  }
  return result; /*0x100682089*/
}