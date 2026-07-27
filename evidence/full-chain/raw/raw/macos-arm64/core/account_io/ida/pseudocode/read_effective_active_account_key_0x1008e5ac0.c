// __ZN13codexmate_lib4core10account_io33read_effective_active_account_key @ 0x1008e5ac0 | 基线 same-set
double __fastcall codexmate_lib::core::account_io::read_effective_active_account_key::h56ef408fb1c13e98(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v7; // rax
  double result; // xmm0_8
  __int64 v9; // rsi
  int v10; // r15d
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 *v21; // rcx
  __int64 v22; // rax
  _QWORD __src[22]; // [rsp+8h] [rbp-1A8h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-F8h]
  __int64 v25; // [rsp+C0h] [rbp-F0h]
  __int64 v26; // [rsp+C8h] [rbp-E8h]
  _QWORD __dst[22]; // [rsp+D0h] [rbp-E0h] BYREF
  __int64 *v28; // [rsp+180h] [rbp-30h]

  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, a2, a3); /*0x1008e5af1*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x1008e5b01*/
  {
    a1[2] = a4[2]; /*0x1008e5b07*/
    v7 = *a4; /*0x1008e5b0b*/
    a1[1] = a4[1]; /*0x1008e5b13*/
    *a1 = v7; /*0x1008e5b17*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x1008e5b21*/
    return result; /*0x1008e5b26*/
  }
  v28 = a4; /*0x1008e5b2b*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1008e5b45*/
  if ( (unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(__dst) ) /*0x1008e5b50*/
  {
    *a1 = 0x8000000000000000LL; /*0x1008e5b5d*/
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x1008e5b6f*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1008e5b7d*/
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x1008e5b91*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x1008e5b9f*/
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x1008e5bb3*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x1008e5bc1*/
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x1008e5bd5*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x1008e5be3*/
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x1008e5bf4*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x1008e5bff*/
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x1008e5c10*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x1008e5c1b*/
    if ( __dst[18] != 0x8000000000000000LL ) /*0x1008e5c27*/
    {
      if ( __dst[18] ) /*0x1008e5c2c*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x1008e5c37*/
    }
    v9 = *v28; /*0x1008e5c40*/
    if ( *v28 == 0x8000000000000000LL ) /*0x1008e5c46*/
      return result; /*0x1008e5c46*/
    goto LABEL_83; /*0x1008e5c46*/
  }
  if ( (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(__dst) ) /*0x1008e5c58*/
  {
    codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(__src, __dst, a2, a3); /*0x1008e5c79*/
    v10 = __src[0]; /*0x1008e5c7e*/
    if ( __src[0] == 2 ) /*0x1008e5c89*/
    {
      v21 = v28; /*0x1008e5e79*/
      a1[2] = v28[2]; /*0x1008e5e81*/
      v22 = *v21; /*0x1008e5e85*/
      a1[1] = v21[1]; /*0x1008e5e8c*/
      *a1 = v22; /*0x1008e5e90*/
    }
    else
    {
      v11 = __src[5]; /*0x1008e5c8f*/
      v12 = __src[6]; /*0x1008e5c96*/
      v13 = __src[8]; /*0x1008e5c9d*/
      v14 = __src[9]; /*0x1008e5ca4*/
      v15 = __src[11]; /*0x1008e5cab*/
      v26 = __src[12]; /*0x1008e5cb9*/
      v24 = __src[14]; /*0x1008e5cc7*/
      v25 = __src[15]; /*0x1008e5cd5*/
      a1[2] = __src[4]; /*0x1008e5ce3*/
      v16 = __src[2]; /*0x1008e5ce7*/
      a1[1] = __src[3]; /*0x1008e5cf5*/
      *a1 = v16; /*0x1008e5cf9*/
      if ( v11 ) /*0x1008e5cff*/
      {
        v17 = v14; /*0x1008e5d06*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x1008e5d09*/
        v14 = v17; /*0x1008e5d0e*/
      }
      if ( 2 * v13 ) /*0x1008e5d11*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x1008e5d29*/
      if ( 2 * v15 ) /*0x1008e5d2e*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v15, 1); /*0x1008e5d4a*/
      if ( 2 * v24 ) /*0x1008e5d56*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x1008e5d76*/
    }
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x1008e5ea2*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1008e5eb0*/
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x1008e5ec4*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x1008e5ed2*/
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x1008e5ee6*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x1008e5ef4*/
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x1008e5f08*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x1008e5f16*/
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x1008e5f27*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x1008e5f32*/
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x1008e5f43*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x1008e5f4e*/
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x1008e5f5f*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x1008e5f6a*/
    if ( v10 == 2 ) /*0x1008e5f73*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x1008e5f7c*/
    v9 = *v28; /*0x1008e5f8c*/
    if ( *v28 != 0x8000000000000000LL && v10 != 2 ) /*0x1008e5f85*/
    {
LABEL_83:
      if ( !v9 ) /*0x1008e5f9c*/
        return result; /*0x1008e5f9c*/
      v20 = v28[1]; /*0x1008e5fa2*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v9, 1); /*0x1008e5fa2*/
    }
  }
  else
  {
    v18 = v28; /*0x1008e5d80*/
    a1[2] = v28[2]; /*0x1008e5d88*/
    v19 = *v18; /*0x1008e5d8c*/
    a1[1] = v18[1]; /*0x1008e5d93*/
    *a1 = v19; /*0x1008e5d97*/
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x1008e5da9*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1008e5db7*/
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x1008e5dcb*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x1008e5dd9*/
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x1008e5ded*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x1008e5dfb*/
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x1008e5e0f*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x1008e5e1d*/
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x1008e5e2e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x1008e5e39*/
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x1008e5e4a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x1008e5e55*/
    v9 = __dst[18]; /*0x1008e5e5a*/
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x1008e5e6a*/
    {
      v20 = __dst[19]; /*0x1008e5e70*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v9, 1); /*0x1008e5fa6*/
    }
  }
  return result; /*0x1008e5fb0*/
}