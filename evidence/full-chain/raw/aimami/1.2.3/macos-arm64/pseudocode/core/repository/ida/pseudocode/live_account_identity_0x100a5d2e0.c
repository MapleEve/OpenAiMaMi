// __ZN13codexmate_lib4core10repository10Repository21live_account_identity @ 0x100a5d2e0 | 基线 same-set
double __fastcall codexmate_lib::core::repository::Repository::live_account_identity::h503e6c01c902a0b6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128i a4)
{
  char v6; // cl
  bool v7; // al
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 __src[22]; // [rsp+8h] [rbp-1B8h] BYREF
  _QWORD __dst[22]; // [rsp+B8h] [rbp-108h] BYREF
  unsigned __int64 v19; // [rsp+168h] [rbp-58h]
  unsigned __int64 v20; // [rsp+170h] [rbp-50h]
  unsigned __int64 v21; // [rsp+178h] [rbp-48h]
  unsigned __int64 v22; // [rsp+180h] [rbp-40h]
  unsigned __int64 v23; // [rsp+188h] [rbp-38h]
  unsigned __int64 v24; // [rsp+190h] [rbp-30h]

  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, a2, a3); /*0x100a5d30e*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x100a5d31e*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x100a5d327*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100a5d32c*/
    *(_BYTE *)(a1 + 24) = 0; /*0x100a5d32f*/
    return *(double *)a4.i64; /*0x100a5d333*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x100a5d34e*/
  if ( (unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45((__int64)__dst, a4) ) /*0x100a5d356*/
    goto LABEL_4; /*0x100a5d356*/
  v7 = codexmate_lib::core::auth::is_api_key_auth::h123048d1ccd9695c(__dst); /*0x100a5d36a*/
  v6 = 1; /*0x100a5d36f*/
  if ( v7 ) /*0x100a5d373*/
  {
LABEL_6:
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100a5d379*/
    *(_BYTE *)(a1 + 24) = v6; /*0x100a5d37c*/
    v8 = __dst[0]; /*0x100a5d37f*/
    if ( __dst[0] != 0x8000000000000000LL ) /*0x100a5d389*/
      goto LABEL_7; /*0x100a5d389*/
    goto LABEL_9; /*0x100a5d389*/
  }
  if ( !codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(__dst) ) /*0x100a5d480*/
  {
LABEL_4:
    v6 = 0; /*0x100a5d35f*/
    goto LABEL_6; /*0x100a5d361*/
  }
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190((__int64 *)__src, __dst, a2, a3, a4); /*0x100a5d4a1*/
  if ( LODWORD(__src[0]) == 2 ) /*0x100a5d4ad*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x100a5d4b6*/
    v9 = 0x8000000000000000LL; /*0x100a5d4bb*/
    goto LABEL_36; /*0x100a5d4be*/
  }
  v9 = __src[2]; /*0x100a5d4c3*/
  v19 = __src[3]; /*0x100a5d4d1*/
  v20 = __src[4]; /*0x100a5d4dc*/
  v10 = __src[8]; /*0x100a5d4e7*/
  v11 = __src[9]; /*0x100a5d4ee*/
  v12 = __src[11]; /*0x100a5d4f5*/
  v23 = __src[12]; /*0x100a5d503*/
  v21 = __src[14]; /*0x100a5d50e*/
  v22 = __src[15]; /*0x100a5d519*/
  if ( __src[5] ) /*0x100a5d520*/
  {
    v24 = __src[11]; /*0x100a5d522*/
    v13 = __src[9]; /*0x100a5d526*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[6], __src[5], 1); /*0x100a5d535*/
    v11 = v13; /*0x100a5d53a*/
    v12 = v24; /*0x100a5d53d*/
  }
  if ( !(2 * v10) ) /*0x100a5d541*/
  {
    if ( !(2 * v12) ) /*0x100a5d54e*/
      goto LABEL_35; /*0x100a5d559*/
LABEL_39:
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v12, 1); /*0x100a5d5b2*/
    v14 = v21; /*0x100a5d5c3*/
    if ( !(2 * v21) ) /*0x100a5d5d2*/
      goto LABEL_36; /*0x100a5d5d2*/
    goto LABEL_40; /*0x100a5d5d2*/
  }
  *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x100a5d5a0*/
  if ( 2 * v12 ) /*0x100a5d5a5*/
    goto LABEL_39; /*0x100a5d5b0*/
LABEL_35:
  v14 = v21; /*0x100a5d55b*/
  if ( !(2 * v21) ) /*0x100a5d55f*/
    goto LABEL_36; /*0x100a5d56a*/
LABEL_40:
  *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v14, 1); /*0x100a5d5d4*/
LABEL_36:
  *(_QWORD *)a1 = v9; /*0x100a5d56c*/
  v15 = v20; /*0x100a5d573*/
  *(_QWORD *)(a1 + 8) = v19; /*0x100a5d577*/
  *(_QWORD *)(a1 + 16) = v15; /*0x100a5d57b*/
  *(_BYTE *)(a1 + 24) = 0; /*0x100a5d57f*/
  v8 = __dst[0]; /*0x100a5d583*/
  if ( __dst[0] != 0x8000000000000000LL ) /*0x100a5d58d*/
  {
LABEL_7:
    if ( v8 ) /*0x100a5d38e*/
      *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], v8, 1); /*0x100a5d39c*/
  }
LABEL_9:
  if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x100a5d3b0*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x100a5d3be*/
  if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x100a5d3d2*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x100a5d3e0*/
  if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x100a5d3f4*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x100a5d402*/
  if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x100a5d416*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x100a5d424*/
  if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x100a5d438*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x100a5d446*/
  if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x100a5d457*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x100a5d462*/
  return *(double *)a4.i64; /*0x100a5d467*/
}