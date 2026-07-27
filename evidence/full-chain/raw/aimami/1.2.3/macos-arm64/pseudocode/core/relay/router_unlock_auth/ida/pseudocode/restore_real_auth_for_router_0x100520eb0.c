// __ZN13codexmate_lib4core5relay18router_unlock_auth28restore_real_auth_for_router @ 0x100520eb0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::router_unlock_auth::restore_real_auth_for_router::h897fc5d811d350e2(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r14
  char v8; // r15
  __int64 v9; // r13
  char v10; // r14
  char v11; // r14
  char v12; // r15
  void *v13; // rax
  void *v14; // r14
  __int64 v15; // rax
  _BYTE v16[87]; // [rsp+9h] [rbp-217h] BYREF
  _QWORD v17[3]; // [rsp+60h] [rbp-1C0h] BYREF
  _QWORD v18[2]; // [rsp+78h] [rbp-1A8h] BYREF
  _QWORD __src[22]; // [rsp+88h] [rbp-198h] BYREF
  _QWORD __dst[22]; // [rsp+138h] [rbp-E8h] BYREF
  unsigned __int64 v21; // [rsp+1E8h] [rbp-38h]
  char v22; // [rsp+1F7h] [rbp-29h]

  v2 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x100520ecd*/
  if ( v2 ) /*0x100520ed5*/
  {
    *a1 = 2; /*0x100520ed7*/
    a1[1] = v2; /*0x100520ede*/
    return a1; /*0x100520ede*/
  }
  if ( (unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::h09278a33efdd7fab(a2) ) /*0x100520efa*/
  {
    if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163((__int64)a2) /*0x100520f49*/
      && (codexmate_lib::core::relay::router_unlock_auth::cleanup::hb4afc95ddd21e582(__src, a2),
          v4 = __src[0],
          __src[0] != 11)
      || (codexmate_lib::core::relay::legacy_virtual_auth::cleanup::h4e431c2ba7f134fc(__src, a2),
          v4 = __src[0],
          __src[0] != 11) )
    {
      v10 = __src[1]; /*0x100521173*/
      memcpy(v16, (char *)&__src[1] + 1, sizeof(v16)); /*0x10052118e*/
      *a1 = v4; /*0x100521193*/
      *((_BYTE *)a1 + 8) = v10; /*0x100521196*/
      memcpy((char *)a1 + 9, v16, 0x57u); /*0x1005211aa*/
      return a1; /*0x1005211af*/
    }
  }
  v5 = a2[4]; /*0x100520f59*/
  v6 = a2[5]; /*0x100520f5d*/
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, v5, v6); /*0x100520f6e*/
  v21 = 0x8000000000000001LL; /*0x100520f77*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x100520f82*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x100520f8b*/
  }
  else
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x100520fab*/
    v22 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h1af7e13263bef1f7(__dst); /*0x100520fb8*/
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x100520fd4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x100520fe2*/
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x100520ff6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x100521004*/
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x100521018*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x100521026*/
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x10052103a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x100521048*/
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x10052105c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x100521067*/
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x100521078*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x100521083*/
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x100521094*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x10052109f*/
    if ( v22 ) /*0x1005210a8*/
    {
      if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163((__int64)a2) ) /*0x1005210ad*/
      {
        codexmate_lib::core::relay::router_unlock_auth::cleanup::hb4afc95ddd21e582(__src, a2); /*0x1005210c4*/
        v7 = __src[0]; /*0x1005210c9*/
        if ( __src[0] != 11 ) /*0x1005210d4*/
        {
          v8 = __src[1]; /*0x1005210da*/
          memcpy((char *)a1 + 9, (char *)&__src[1] + 1, 0x57u); /*0x1005210f2*/
          *a1 = v7; /*0x1005210f7*/
          *((_BYTE *)a1 + 8) = v8; /*0x1005210fa*/
          return a1; /*0x1005210fe*/
        }
      }
      goto LABEL_64; /*0x1005210d4*/
    }
  }
  codexmate_lib::core::relay::router_unlock_auth::verify_real_auth_restore_ready::hd6c33ff9eb693774(__src, a2); /*0x10052110d*/
  if ( LODWORD(__src[0]) != 11 ) /*0x100521119*/
  {
    qmemcpy(a1, __src, 0x60u); /*0x1005211c3*/
    return a1; /*0x1005211c3*/
  }
  codexmate_lib::core::relay::router_unlock_auth::cleanup::hb4afc95ddd21e582(__src, a2); /*0x100521129*/
  v9 = __src[0]; /*0x10052112e*/
  if ( __src[0] != 11 ) /*0x100521139*/
  {
    v11 = __src[1]; /*0x1005211cb*/
    memcpy((char *)a1 + 9, (char *)&__src[1] + 1, 0x57u); /*0x1005211e3*/
    *a1 = v9; /*0x1005211e8*/
    *((_BYTE *)a1 + 8) = v11; /*0x1005211eb*/
    return a1; /*0x1005211ef*/
  }
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, v5, v6); /*0x10052114c*/
  if ( __src[0] != v21 ) /*0x10052115c*/
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x10052120a*/
    v12 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h1af7e13263bef1f7(__dst); /*0x100521217*/
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x100521233*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x100521241*/
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x100521255*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x100521263*/
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x100521277*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x100521285*/
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x100521299*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x1005212a7*/
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x1005212bb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x1005212c6*/
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x1005212d7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x1005212e2*/
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x1005212f3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x1005212fe*/
    if ( !v12 ) /*0x100521306*/
      goto LABEL_65; /*0x100521306*/
LABEL_64:
    *((_BYTE *)a1 + 8) = 0; /*0x100521308*/
    *a1 = 11; /*0x10052130c*/
    return a1; /*0x100521313*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x100521169*/
LABEL_65:
  v18[0] = &unk_1015FE80F; /*0x100521318*/
  v18[1] = 123; /*0x100521326*/
  codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth::h1fbbeee5d38cb27b(__src, a2, 1); /*0x100521340*/
  if ( __src[0] == 11 ) /*0x100521350*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, a2); /*0x100521352*/
    v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(123, 1); /*0x100521361*/
    if ( !v13 ) /*0x100521369*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 123); /*0x100521469*/
    v14 = v13; /*0x10052136f*/
    memcpy(v13, &unk_1015FE80F, 0x7Bu); /*0x100521381*/
    *a1 = 10; /*0x100521386*/
    a1[1] = 123; /*0x10052138d*/
    a1[2] = v14; /*0x100521395*/
    a1[3] = 123; /*0x100521399*/
  }
  else
  {
    memcpy((char *)&__dst[1] + 1, (char *)&__src[1] + 1, 0x57u); /*0x1005213c1*/
    __dst[0] = __src[0]; /*0x1005213c6*/
    LOBYTE(__dst[1]) = __src[1]; /*0x1005213cd*/
    __src[0] = v18; /*0x1005213db*/
    __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1005213e9*/
    __src[2] = __dst; /*0x1005213f7*/
    __src[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100521405*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v17, &unk_1017C1378, __src); /*0x100521421*/
    a1[3] = v17[2]; /*0x10052142d*/
    v15 = v17[0]; /*0x100521431*/
    a1[2] = v17[1]; /*0x10052143f*/
    a1[1] = v15; /*0x100521443*/
    *a1 = 10; /*0x100521447*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst); /*0x100521455*/
  }
  return a1; /*0x100520ee5*/
}