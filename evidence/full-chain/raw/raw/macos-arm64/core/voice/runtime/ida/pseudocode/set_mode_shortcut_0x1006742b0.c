// __ZN13codexmate_lib4core5voice7runtime17set_mode_shortcut @ 0x1006742b0 | 基线 same-set
char *__fastcall codexmate_lib::core::voice::runtime::set_mode_shortcut::h0b6716797ad0a2da(
        char *__dst,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        char a7,
        __int64 a8)
{
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // r14
  char v23; // r15
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rax
  void *v28; // rbx
  void (__fastcall __noreturn *v29)(); // rsi
  size_t v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rdi
  int v35; // eax
  __int64 v36; // rax
  __int64 *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rax
  _QWORD v42[9]; // [rsp+0h] [rbp-160h] BYREF
  __int64 v43; // [rsp+48h] [rbp-118h] BYREF
  __int64 v44; // [rsp+50h] [rbp-110h]
  __int64 v45; // [rsp+58h] [rbp-108h]
  __int64 v46; // [rsp+60h] [rbp-100h]
  __int64 *v47; // [rsp+68h] [rbp-F8h]
  _QWORD v48[9]; // [rsp+90h] [rbp-D0h] BYREF
  _QWORD v49[3]; // [rsp+D8h] [rbp-88h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-70h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-68h]
  __int64 v52; // [rsp+108h] [rbp-58h]
  _QWORD *v53; // [rsp+110h] [rbp-50h]
  _QWORD *v54; // [rsp+118h] [rbp-48h]
  __int64 *v55; // [rsp+120h] [rbp-40h]
  _QWORD *v56; // [rsp+128h] [rbp-38h]
  int v57; // [rsp+130h] [rbp-30h]
  char v58; // [rsp+137h] [rbp-29h]

  v54 = a6; /*0x1006742c4*/
  v53 = a5; /*0x1006742c8*/
  v55 = a3; /*0x1006742d9*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v50, a3); /*0x1006742e0*/
  if ( a4 | a8 /*0x1006742fe*/
    && !(unsigned __int8)codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d(a4, a8) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a4, a8); /*0x100674514*/
    if ( a8 ) /*0x10067451c*/
    {
      v26 = 129; /*0x10067451e*/
      v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(129, 1); /*0x10067452e*/
      if ( v27 ) /*0x100674536*/
      {
        v28 = (void *)v27; /*0x10067453c*/
        v29 = anon_4776471024d1e9bb78f2861cb2b51e1e_542; /*0x10067453f*/
        v30 = 129; /*0x100674546*/
LABEL_23:
        memcpy(v28, v29, v30); /*0x10067457a*/
        *((_QWORD *)__dst + 1) = v26; /*0x100674582*/
        *((_QWORD *)__dst + 2) = v28; /*0x100674587*/
        *((_QWORD *)__dst + 3) = v26; /*0x10067458c*/
        *(_QWORD *)__dst = 2; /*0x100674591*/
        if ( v50 ) /*0x1006745a0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x1006745ab*/
        if ( *v54 ) /*0x1006745b4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54[1], *v54, 1); /*0x1006745c5*/
        if ( *v53 ) /*0x1006745ce*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53[1], *v53, 1); /*0x1006745df*/
        goto LABEL_29; /*0x1006745df*/
      }
    }
    else
    {
      v26 = 285; /*0x10067454d*/
      v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(285, 1); /*0x10067455d*/
      if ( v31 ) /*0x100674565*/
      {
        v28 = (void *)v31; /*0x10067456b*/
        v29 = (void (__fastcall __noreturn *)())&anon_4776471024d1e9bb78f2861cb2b51e1e_541; /*0x10067456e*/
        v30 = 285; /*0x100674575*/
        goto LABEL_23; /*0x100674575*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v26); /*0x1006747ff*/
  }
  v42[2] = v53[2]; /*0x100674310*/
  v11 = *v53; /*0x100674317*/
  v42[1] = v53[1]; /*0x10067431e*/
  v42[0] = v11; /*0x100674325*/
  v12 = v54; /*0x10067432c*/
  v13 = v54[1]; /*0x100674333*/
  v42[3] = *v54; /*0x100674337*/
  v42[4] = v13; /*0x10067433e*/
  v42[5] = v54[2]; /*0x100674349*/
  v42[6] = a4; /*0x100674350*/
  LOBYTE(v42[8]) = a7; /*0x100674357*/
  v42[7] = a8; /*0x10067435d*/
  v14 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x10067436c*/
  v56 = (_QWORD *)(v14 + 32); /*0x100674373*/
  v15 = *(_QWORD *)(v14 + 32); /*0x100674377*/
  if ( !v15 ) /*0x10067437e*/
    v15 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v56); /*0x100674620*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v15); /*0x100674384*/
  v52 = 0x7FFFFFFFFFFFFFFFLL; /*0x1006743a4*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1006743a8*/
  {
    v57 = 0; /*0x1006743ae*/
    v18 = *(_BYTE *)(v14 + 40); /*0x1006743b5*/
    if ( v18 ) /*0x1006743bd*/
      goto LABEL_7; /*0x1006743bd*/
LABEL_34:
    v49[2] = v55[2]; /*0x100674640*/
    v36 = *v55; /*0x10067464c*/
    v49[1] = v55[1]; /*0x100674653*/
    v49[0] = v36; /*0x100674657*/
    qmemcpy(v48, v42, sizeof(v48)); /*0x100674674*/
    v37 = &v43; /*0x100674681*/
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h409006560a41c386(&v43, v14 + 776, v49, v48); /*0x100674692*/
    v40 = v43; /*0x100674697*/
    if ( v43 != 0x8000000000000000LL ) /*0x1006746a1*/
    {
      if ( v43 ) /*0x1006746a6*/
      {
        v37 = (__int64 *)v44; /*0x1006746a8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v43, 1); /*0x1006746b4*/
      }
      v40 = v46; /*0x1006746b9*/
      if ( v46 ) /*0x1006746c3*/
      {
        v37 = v47; /*0x1006746c5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1); /*0x1006746d1*/
      }
    }
    if ( !(_BYTE)v57 /*0x1006747e1*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v52) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v37, v40, v38, v39) )
    {
      *(_BYTE *)(v14 + 40) = 1; /*0x1006747ee*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v56); /*0x1006746f7*/
    codexmate_lib::core::voice::runtime::persist_per_mode_shortcuts::h77a88a4d47aef74a(v48, a2); /*0x100674706*/
    if ( v48[0] == 0x8000000000000000LL ) /*0x100674712*/
    {
      codexmate_lib::core::voice::runtime::restart_trigger_listener_internal::hbf9d14de69187c5e((__int64)v48, a2); /*0x10067471e*/
      if ( v48[0] == 0x8000000000000000LL ) /*0x10067472a*/
      {
        codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)v48, a2); /*0x100674736*/
        if ( v48[0] == 0x8000000000000000LL ) /*0x100674742*/
        {
          codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(__dst, a2); /*0x10067474a*/
          v32 = v50; /*0x10067474f*/
          if ( !v50 ) /*0x100674756*/
            return __dst; /*0x100674756*/
          v33 = v51; /*0x10067475c*/
          goto LABEL_31; /*0x100674760*/
        }
      }
    }
    *((_QWORD *)__dst + 3) = v48[2]; /*0x10067476c*/
    v41 = v48[0]; /*0x100674771*/
    *((_QWORD *)__dst + 2) = v48[1]; /*0x10067477f*/
    *((_QWORD *)__dst + 1) = v41; /*0x100674784*/
    *(_QWORD *)__dst = 2; /*0x100674789*/
    v25 = v50; /*0x100674791*/
    if ( !v50 ) /*0x100674798*/
      goto LABEL_16; /*0x100674798*/
    goto LABEL_15; /*0x100674798*/
  }
  v35 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v12, v16, v17); /*0x100674628*/
  LOBYTE(v35) = v35 ^ 1; /*0x10067462d*/
  v57 = v35; /*0x10067462f*/
  v18 = *(_BYTE *)(v14 + 40); /*0x100674632*/
  if ( !v18 ) /*0x10067463a*/
    goto LABEL_34; /*0x10067463a*/
LABEL_7:
  v43 = 0; /*0x1006743c3*/
  v44 = 1; /*0x1006743ce*/
  v45 = 0; /*0x1006743d9*/
  v48[2] = 1610612768; /*0x1006743e4*/
  v48[0] = &v43; /*0x1006743f6*/
  v48[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100674404*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v48) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006747c4*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      v49,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v58 = v18; /*0x10067442b*/
  v21 = v43; /*0x10067442f*/
  v22 = v44; /*0x100674436*/
  v23 = v45; /*0x10067443d*/
  LODWORD(v49[0]) = *(_DWORD *)((char *)&v45 + 1); /*0x10067444b*/
  *(_DWORD *)((char *)v49 + 3) = HIDWORD(v45); /*0x100674457*/
  if ( !(_BYTE)v57
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v52) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v19,
                           v20) )
  {
    *(_BYTE *)(v14 + 40) = 1; /*0x1006747d8*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v56); /*0x10067447e*/
  v24 = v49[0]; /*0x100674483*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v49 + 3); /*0x10067448f*/
  *(_DWORD *)(__dst + 25) = v24; /*0x100674494*/
  *((_QWORD *)__dst + 1) = v21; /*0x100674499*/
  *((_QWORD *)__dst + 2) = v22; /*0x10067449e*/
  __dst[24] = v23; /*0x1006744a3*/
  *(_QWORD *)__dst = 2; /*0x1006744a8*/
  if ( v42[0] ) /*0x1006744ba*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42[1], v42[0], 1); /*0x1006744c8*/
  v18 = v58; /*0x1006744d7*/
  if ( v42[3] ) /*0x1006744dc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42[4], v42[3], 1); /*0x1006744ea*/
  v25 = v50; /*0x1006744ef*/
  if ( v50 ) /*0x1006744f6*/
LABEL_15:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v25, 1); /*0x1006744f8*/
LABEL_16:
  if ( !v18 ) /*0x100674509*/
    return __dst; /*0x100674509*/
LABEL_29:
  v32 = *v55; /*0x1006745e4*/
  if ( *v55 ) /*0x1006745e8*/
  {
    v33 = v55[1]; /*0x1006745f4*/
LABEL_31:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v32, 1); /*0x1006745f8*/
  }
  return __dst; /*0x100674605*/
}