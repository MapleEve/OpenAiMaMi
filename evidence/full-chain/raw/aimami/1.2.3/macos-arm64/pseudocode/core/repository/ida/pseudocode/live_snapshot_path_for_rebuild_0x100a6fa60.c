// __ZN13codexmate_lib4core10repository10Repository30live_snapshot_path_for_rebuild @ 0x100a6fa60
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::core::repository::Repository::live_snapshot_path_for_rebuild::hac91e29d047a59db(
        _QWORD *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // r12
  __int64 v5; // r15
  _QWORD *result; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _BYTE v17[96]; // [rsp+8h] [rbp-288h] BYREF
  __int64 v18; // [rsp+68h] [rbp-228h] BYREF
  unsigned __int8 *v19[18]; // [rsp+70h] [rbp-220h] BYREF
  __int64 __src[22]; // [rsp+100h] [rbp-190h] BYREF
  _QWORD __dst[22]; // [rsp+1B0h] [rbp-E0h] BYREF
  _QWORD *v22; // [rsp+260h] [rbp-30h]

  v22 = a1; /*0x100a6fa7a*/
  v4 = a2[4]; /*0x100a6fa88*/
  v5 = a2[5]; /*0x100a6fa8c*/
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, v4, v5); /*0x100a6fa9d*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x100a6faad*/
  {
    result = (_QWORD *)std::sys::fs::metadata::h32fa16d3052ea535(__dst, v4, v5); /*0x100a6fac0*/
    if ( LOBYTE(__dst[0]) ) /*0x100a6facc*/
    {
      if ( (__dst[1] & 3) == 1 ) /*0x100a6faeb*/
      {
        v7 = __dst[1] - 1LL; /*0x100a6faed*/
        v8 = *(_QWORD *)(__dst[1] - 1LL); /*0x100a6faf1*/
        v9 = *(_QWORD *)(__dst[1] + 7LL); /*0x100a6faf5*/
        if ( *(_QWORD *)v9 ) /*0x100a6faf9*/
          (*(void (__fastcall **)(__int64))v9)(v8); /*0x100a6fb05*/
        v10 = *(_QWORD *)(v9 + 8); /*0x100a6fb07*/
        if ( v10 ) /*0x100a6fb0f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x100a6fb19*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24, 8); /*0x100a6fb2b*/
      }
      v11 = v22; /*0x100a6fb37*/
      v22[1] = 0x8000000000000000LL; /*0x100a6fb3b*/
      *v11 = 11; /*0x100a6fb3f*/
      return (_QWORD *)core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x100a6fb46*/
    }
    else if ( a3 ) /*0x100a6fbf0*/
    {
      qmemcpy(v22, &__src[1], 0x60u); /*0x100a6fc02*/
    }
    else
    {
      v14 = v22; /*0x100a6fc38*/
      v22[1] = 0x8000000000000000LL; /*0x100a6fc3c*/
      *v14 = 11; /*0x100a6fc40*/
      return (_QWORD *)core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x100a6fc4e*/
    }
    return result; /*0x100a6fb4b*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x100a6fb66*/
  if ( (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(__dst) ) /*0x100a6fb6e*/
  {
    codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(__src, __dst, v4, v5); /*0x100a6fb99*/
    result = (_QWORD *)__src[0]; /*0x100a6fb9e*/
    qmemcpy(v17, &__src[1], sizeof(v17)); /*0x100a6fbb8*/
    if ( __src[0] == 2 ) /*0x100a6fbbf*/
    {
      qmemcpy(v22, v17, 0x60u); /*0x100a6fbd5*/
      v13 = __dst[0]; /*0x100a6fbd8*/
      if ( __dst[0] == 0x8000000000000000LL ) /*0x100a6fbe2*/
        goto LABEL_22; /*0x100a6fbe2*/
    }
    else
    {
      v19[17] = (unsigned __int8 *)__src[18]; /*0x100a6fc5f*/
      v19[16] = (unsigned __int8 *)__src[17]; /*0x100a6fc6d*/
      v19[15] = (unsigned __int8 *)__src[16]; /*0x100a6fc7b*/
      v19[14] = (unsigned __int8 *)__src[15]; /*0x100a6fc89*/
      v19[13] = (unsigned __int8 *)__src[14]; /*0x100a6fc9e*/
      v19[12] = (unsigned __int8 *)__src[13]; /*0x100a6fca5*/
      qmemcpy(v19, v17, 0x60u); /*0x100a6fcbf*/
      v18 = __src[0]; /*0x100a6fcc2*/
      codexmate_lib::core::auth::account_snapshot_path::hba769e00197999ad( /*0x100a6fcec*/
        __src,
        a2[31],
        a2[32],
        v19[2],
        (size_t)v19[3],
        v12);
      v15 = v22; /*0x100a6fcf8*/
      v22[3] = __src[2]; /*0x100a6fcfc*/
      v16 = __src[0]; /*0x100a6fd00*/
      v15[2] = __src[1]; /*0x100a6fd0e*/
      v15[1] = v16; /*0x100a6fd12*/
      *v15 = 11; /*0x100a6fd16*/
      result = (_QWORD *)core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v18); /*0x100a6fd24*/
      v13 = __dst[0]; /*0x100a6fd29*/
      if ( __dst[0] == 0x8000000000000000LL ) /*0x100a6fd33*/
        goto LABEL_22; /*0x100a6fd33*/
    }
LABEL_20:
    if ( v13 ) /*0x100a6fd38*/
      result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], v13, 1); /*0x100a6fd46*/
    goto LABEL_22; /*0x100a6fd46*/
  }
  result = v22; /*0x100a6fc0a*/
  v22[1] = 0x8000000000000000LL; /*0x100a6fc0e*/
  *result = 11; /*0x100a6fc12*/
  v13 = __dst[0]; /*0x100a6fc19*/
  if ( __dst[0] != 0x8000000000000000LL ) /*0x100a6fc23*/
    goto LABEL_20; /*0x100a6fc23*/
LABEL_22:
  if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x100a6fd5a*/
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x100a6fd68*/
  if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x100a6fd7c*/
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x100a6fd8a*/
  if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x100a6fd9e*/
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x100a6fdac*/
  if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x100a6fdbd*/
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x100a6fdc8*/
  if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x100a6fdd9*/
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x100a6fde4*/
  if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x100a6fdf5*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x100a6fe00*/
  return result; /*0x100a6fe05*/
}