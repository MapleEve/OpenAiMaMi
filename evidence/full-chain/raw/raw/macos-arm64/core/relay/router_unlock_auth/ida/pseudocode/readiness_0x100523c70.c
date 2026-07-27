// __ZN13codexmate_lib4core5relay18router_unlock_auth9readiness @ 0x100523c70 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::readiness::h0f20581d20d4ef84(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rdi
  int v6; // r14d
  void *v7; // rax
  void *v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  char v11; // r15
  __int64 v12; // r13
  char v13; // al
  bool v14; // zf
  __int64 __src[22]; // [rsp+8h] [rbp-1A8h] BYREF
  _QWORD __dst[22]; // [rsp+B8h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+168h] [rbp-48h]
  __int64 v19; // [rsp+170h] [rbp-40h]
  __int64 v20; // [rsp+178h] [rbp-38h]
  int v21; // [rsp+180h] [rbp-30h]
  char v22; // [rsp+187h] [rbp-29h]

  v4 = a2[4]; /*0x100523c94*/
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, v4, a2[5]); /*0x100523ca3*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x100523cb3*/
  {
    v5 = &__src[1]; /*0x100523cb5*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x100523cbc*/
    v21 = 0; /*0x100523cc1*/
  }
  else
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x100523ce3*/
    v5 = __dst; /*0x100523ce8*/
    v6 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h1af7e13263bef1f7(__dst); /*0x100523cf0*/
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x100523d02*/
    {
      v5 = (__int64 *)__dst[1]; /*0x100523d04*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x100523d10*/
    }
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x100523d24*/
    {
      v5 = (__int64 *)__dst[4]; /*0x100523d26*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x100523d32*/
    }
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x100523d46*/
    {
      v5 = (__int64 *)__dst[7]; /*0x100523d48*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x100523d54*/
    }
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x100523d68*/
    {
      v5 = (__int64 *)__dst[10]; /*0x100523d6a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x100523d76*/
    }
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x100523d8a*/
    {
      v5 = (__int64 *)__dst[13]; /*0x100523d8c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x100523d98*/
    }
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x100523da9*/
    {
      v5 = (__int64 *)__dst[16]; /*0x100523dab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x100523db4*/
    }
    v4 = __dst[18]; /*0x100523db9*/
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x100523dc5*/
    {
      v5 = (__int64 *)__dst[19]; /*0x100523dc7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x100523dd0*/
    }
    v21 = v6; /*0x100523dd5*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, v4); /*0x100523dd9*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x100523de8*/
  if ( !v7 ) /*0x100523df0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x100523f13*/
  v8 = v7; /*0x100523df6*/
  qmemcpy(v7, "niuniu@woyao.pro", 16); /*0x100523e12*/
  v22 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8((__int64)a2); /*0x100523e1e*/
  v9 = a2[73]; /*0x100523e21*/
  v10 = a2[74]; /*0x100523e28*/
  codexmate_lib::core::relay::router_unlock_auth::read_marker::h8487a1125204f37a(__src, v9, v10); /*0x100523e3c*/
  if ( __src[0] == 0x8000000000000000LL ) /*0x100523e48*/
  {
    v11 = 0; /*0x100523e4a*/
    goto LABEL_35; /*0x100523e4d*/
  }
  v12 = __src[0]; /*0x100523e4f*/
  v20 = __src[1]; /*0x100523e5d*/
  v18 = __src[3]; /*0x100523e68*/
  v19 = __src[4]; /*0x100523e73*/
  if ( (__src[7] & 1) == 0 ) /*0x100523e7e*/
  {
    v11 = 0; /*0x100523e95*/
    if ( !__src[0] ) /*0x100523e9b*/
      goto LABEL_33; /*0x100523e9b*/
    goto LABEL_32; /*0x100523e9b*/
  }
  v11 = codexmate_lib::core::relay::router_unlock_auth::backup_contains_usable_real_oauth::h2d0adfdb410430d2(v9, v10); /*0x100523e8b*/
  if ( v12 ) /*0x100523e91*/
LABEL_32:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v12, 1); /*0x100523e9d*/
LABEL_33:
  if ( v18 ) /*0x100523eb5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x100523ec0*/
LABEL_35:
  v13 = v21 ^ 1; /*0x100523ec5*/
  v14 = v22 == 1; /*0x100523ed0*/
  *(_BYTE *)(a1 + 24) = v21; /*0x100523ed3*/
  *(_BYTE *)(a1 + 25) = v13; /*0x100523ed6*/
  *(_QWORD *)a1 = 16; /*0x100523ed9*/
  *(_QWORD *)(a1 + 8) = v8; /*0x100523ee0*/
  *(_QWORD *)(a1 + 16) = 16; /*0x100523ee4*/
  *(_BYTE *)(a1 + 26) = v14; /*0x100523eec*/
  *(_BYTE *)(a1 + 27) = v11; /*0x100523ef0*/
  return a1; /*0x100523ef7*/
}