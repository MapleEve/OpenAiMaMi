// __ZN13codexmate_lib4core5voice7runtime26send_play_sound_to_standby @ 0x100688750 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::send_play_sound_to_standby::h968845f4d87a6a7d(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const char *a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _BYTE *v14; // r15
  char *v16; // rcx
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // r15
  volatile signed __int64 *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rdx
  char v23; // al
  int v24; // eax
  char *v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // rsi
  _QWORD v33[6]; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v34[3]; // [rsp+30h] [rbp-90h] BYREF
  _QWORD v35[2]; // [rsp+48h] [rbp-78h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-68h] BYREF
  _QWORD v37[2]; // [rsp+68h] [rbp-58h] BYREF
  __int64 v38; // [rsp+78h] [rbp-48h]
  volatile signed __int64 *v39; // [rsp+80h] [rbp-40h] BYREF
  volatile signed __int64 *v40; // [rsp+88h] [rbp-38h]
  int v41; // [rsp+94h] [rbp-2Ch]

  v37[0] = a2; /*0x100688764*/
  v37[1] = a3; /*0x100688768*/
  LOBYTE(v6) = 1; /*0x10068876c*/
  if ( (_BYTE)a4 == 2 ) /*0x100688771*/
    return v6; /*0x100688771*/
  v41 = a4; /*0x100688776*/
  v9 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x10068877c*/
  v10 = v9; /*0x100688781*/
  v11 = *(_QWORD *)(v9 + 32); /*0x100688784*/
  if ( !v11 ) /*0x10068878b*/
    v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v9 + 32); /*0x100688981*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v11); /*0x100688791*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1006887a0*/
  {
    v14 = (_BYTE *)(v10 + 40); /*0x1006887af*/
    if ( *(_BYTE *)(v10 + 40) || (*(_BYTE *)(v10 + 768) & 1) == 0 ) /*0x1006887c4*/
      goto LABEL_7; /*0x1006887c4*/
    if ( _InterlockedIncrement64(*(volatile signed __int64 **)(v10 + 760)) > 0 ) /*0x10068880d*/
    {
      v40 = *(volatile signed __int64 **)(v10 + 760); /*0x10068881a*/
LABEL_13:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100688b51*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v11,
                               a2,
                               v12,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *v14 = 1; /*0x100688b5e*/
      }
      goto LABEL_14; /*0x100688b62*/
    }
LABEL_62:
    BUG(); /*0x100688bac*/
  }
  v23 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, a2, v12, v13); /*0x100688989*/
  v14 = (_BYTE *)(v10 + 40); /*0x100688991*/
  if ( *(_BYTE *)(v10 + 40) || (*(_BYTE *)(v10 + 768) & 1) == 0 ) /*0x1006889a6*/
  {
    if ( !v23 ) /*0x1006889aa*/
    {
LABEL_8:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v10 + 32)); /*0x1006887e3*/
      return 0; /*0x1006887ec*/
    }
LABEL_7:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006889b5*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v11,
                             a2,
                             v12,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *v14 = 1; /*0x1006889c2*/
    }
    goto LABEL_8; /*0x1006889c6*/
  }
  if ( _InterlockedIncrement64(*(volatile signed __int64 **)(v10 + 760)) <= 0 ) /*0x1006889d6*/
    goto LABEL_62; /*0x1006889d6*/
  v40 = *(volatile signed __int64 **)(v10 + 760); /*0x1006889e3*/
  if ( v23 ) /*0x1006889e9*/
    goto LABEL_13; /*0x1006889e9*/
LABEL_14:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v10 + 32)); /*0x10068883b*/
  if ( !a6 ) /*0x10068884e*/
    a5 = "-voice-audio-levelstarted"; /*0x10068884e*/
  v39 = v40; /*0x10068885e*/
  v36[0] = a5; /*0x100688862*/
  v36[1] = (a6 == 0) + a6; /*0x100688866*/
  v16 = "water2swifttranscribe"; /*0x100688875*/
  if ( !(_BYTE)v41 ) /*0x10068887c*/
    v16 = "water1/AiMaMi.app/Contents/Resources/resources/voice/voice_sidecarkeepalive"; /*0x10068887c*/
  v35[0] = v16; /*0x100688880*/
  v35[1] = 6; /*0x100688884*/
  v33[0] = v37; /*0x100688890*/
  v33[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10068889e*/
  v33[2] = v35; /*0x1006888a9*/
  v33[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006888b0*/
  v33[4] = v36; /*0x1006888bb*/
  v33[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006888c2*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v34, &loc_1017C3128, v33); /*0x1006888de*/
  v17 = v34[0]; /*0x1006888e3*/
  v18 = v34[1]; /*0x1006888ea*/
  v19 = v34[2]; /*0x1006888f1*/
  v20 = v39; /*0x1006888f5*/
  v40 = v39 + 2; /*0x1006888fd*/
  v21 = *((_QWORD *)v39 + 2); /*0x100688901*/
  if ( !v21 ) /*0x100688908*/
    v21 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v40); /*0x1006889fd*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v21); /*0x10068890e*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10068892a*/
  {
    v24 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x100688a05*/
            v21,
            &loc_1017C3128,
            v22,
            0x7FFFFFFFFFFFFFFFLL);
    LOBYTE(v24) = v24 ^ 1; /*0x100688a10*/
    v41 = v24; /*0x100688a12*/
    if ( *((_BYTE *)v20 + 24) ) /*0x100688a15*/
      goto LABEL_22; /*0x100688a1c*/
  }
  else
  {
    v41 = 0; /*0x100688930*/
    if ( *((_BYTE *)v20 + 24) ) /*0x100688937*/
    {
LABEL_22:
      if ( !(_BYTE)v41 /*0x100688b67*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v21,
                               &loc_1017C3128,
                               v22,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v20 + 24) = 1; /*0x100688b74*/
      }
LABEL_44:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v40); /*0x100688ab4*/
      if ( v17 ) /*0x100688ac3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100688ad0*/
      if ( !_InterlockedDecrement64(v39) ) /*0x100688ad9*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(&v39); /*0x100688ae7*/
      return 0; /*0x100688aec*/
    }
  }
  v25 = (char *)v20 + 28; /*0x100688a22*/
  v26 = v18; /*0x100688a26*/
  v27 = std::io::Write::write_all::h3ce78d18b5b98128((char *)v20 + 28, v18, v19); /*0x100688a2c*/
  if ( v27 ) /*0x100688a34*/
  {
    if ( (v27 & 3) == 1 ) /*0x100688a42*/
    {
      v38 = v18; /*0x100688a44*/
      v29 = v27 - 1; /*0x100688a4b*/
      v30 = *(_QWORD *)(v27 - 1); /*0x100688a4e*/
      v31 = *(_QWORD *)(v27 + 7); /*0x100688a52*/
      if ( *(_QWORD *)v31 ) /*0x100688a56*/
        (*(void (__fastcall **)(__int64))v31)(v30); /*0x100688a62*/
      v32 = *(_QWORD *)(v31 + 8); /*0x100688a64*/
      if ( v32 ) /*0x100688a6c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16)); /*0x100688a76*/
      v26 = 24; /*0x100688a7b*/
      v25 = (char *)v29; /*0x100688a85*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, 24, 8); /*0x100688a88*/
      v18 = v38; /*0x100688a8d*/
    }
    if ( !(_BYTE)v41 /*0x100688b7e*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v25,
                             v26,
                             v28,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v20 + 24) = 1; /*0x100688b8b*/
    }
    goto LABEL_44; /*0x100688b90*/
  }
  if ( !(_BYTE)v41 /*0x100688b95*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v25,
                           v18,
                           v28,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v20 + 24) = 1; /*0x100688ba2*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v40); /*0x100688b1b*/
  if ( v17 ) /*0x100688b23*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100688b30*/
  if ( !_InterlockedDecrement64(v39) ) /*0x100688b39*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(&v39); /*0x100688b47*/
  return v6; /*0x1006887f0*/
}