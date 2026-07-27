// __ZN13codexmate_lib4core10repository29load_refreshable_account_auth @ 0x100a7f2a0
// 1.2.3 NEW-delta | codexmate_lib::core::repository::load_refreshable_account_auth | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void *__fastcall codexmate_lib::core::repository::load_refreshable_account_auth::h454e81b51b38cf4c(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        size_t __n)
{
  void *result; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rsi
  void *v17; // rsi
  __int64 v18; // rbx
  void *v19; // [rsp+8h] [rbp-268h] BYREF
  _QWORD v20[18]; // [rsp+10h] [rbp-260h] BYREF
  _BYTE v21[176]; // [rsp+A0h] [rbp-1D0h] BYREF
  _QWORD v22[22]; // [rsp+150h] [rbp-120h] BYREF
  __int64 v23; // [rsp+200h] [rbp-70h]
  __int64 v24; // [rsp+208h] [rbp-68h]
  __int64 v25; // [rsp+210h] [rbp-60h]
  __int64 v26; // [rsp+218h] [rbp-58h]
  __int64 v27; // [rsp+220h] [rbp-50h]
  __int64 v28; // [rsp+228h] [rbp-48h]
  __int64 v29; // [rsp+230h] [rbp-40h]
  void *__s2; // [rsp+238h] [rbp-38h]
  void *v31; // [rsp+240h] [rbp-30h]

  codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(v21, a2, a3, a4, a5); /*0x100a7f2d1*/
  if ( *(_DWORD *)v21 == 11 ) /*0x100a7f2dd*/
  {
    std::sys::fs::symlink_metadata::hd69903fe66faddbd(v21, a2, a3); /*0x100a7f2ec*/
    if ( *(_DWORD *)v21 == 1 ) /*0x100a7f2ff*/
    {
      v22[0] = 2; /*0x100a7f301*/
      v22[1] = *(_QWORD *)&v21[8]; /*0x100a7f30c*/
LABEL_34:
      result = (void *)core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v22); /*0x100a7f54a*/
      *a1 = 0x8000000000000001LL; /*0x100a7f559*/
      return result; /*0x100a7f559*/
    }
    if ( (*(_QWORD *)&v21[8] & 0xF00000000000LL) != 0x800000000000LL ) /*0x100a7f357*/
    {
      v19 = a2; /*0x100a7f4fb*/
      v20[0] = a3; /*0x100a7f502*/
      *(_QWORD *)v21 = &v19; /*0x100a7f510*/
      *(_QWORD *)&v21[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a7f51e*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v22[1], &anon_155c4da9b5393270cfa7378e2b52c417_254, v21); /*0x100a7f53a*/
      v22[0] = 9; /*0x100a7f53f*/
      goto LABEL_34; /*0x100a7f53f*/
    }
  }
  else
  {
    qmemcpy(v22, v21, 0x60u); /*0x100a7f32b*/
    if ( v22[0] != 11 ) /*0x100a7f336*/
      goto LABEL_34; /*0x100a7f336*/
  }
  __s2 = a6; /*0x100a7f35d*/
  v31 = a1; /*0x100a7f361*/
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(v21, a2, a3); /*0x100a7f372*/
  if ( *(_QWORD *)v21 == 0x8000000000000001LL ) /*0x100a7f38c*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v21[8]); /*0x100a7f391*/
    result = v31; /*0x100a7f396*/
    *(_QWORD *)v31 = 0x8000000000000001LL; /*0x100a7f39a*/
    return result; /*0x100a7f39d*/
  }
  memcpy(&v22[1], &v21[8], 0xA8u); /*0x100a7f3ae*/
  v23 = *(_QWORD *)v21; /*0x100a7f3b3*/
  v22[0] = *(_QWORD *)v21; /*0x100a7f3b7*/
  if ( (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(v22) ) /*0x100a7f3c5*/
  {
    codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(v21, v22, a2, a3); /*0x100a7f3e2*/
    if ( *(_QWORD *)v21 == 2 ) /*0x100a7f3f9*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v21[8]); /*0x100a7f402*/
      goto LABEL_12; /*0x100a7f402*/
    }
    memcpy(v20, &v21[8], sizeof(v20)); /*0x100a7f57e*/
    v19 = *(void **)v21; /*0x100a7f583*/
    if ( v20[3] == __n && !memcmp((const void *)v20[2], __s2, __n) ) /*0x100a7f5a8*/
    {
      memcpy(v31, v22, 0xB0u); /*0x100a7f793*/
      return (void *)core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v19); /*0x100a7f793*/
    }
    v10 = v22[1]; /*0x100a7f5ae*/
    v11 = v22[3]; /*0x100a7f5b5*/
    v12 = v22[4]; /*0x100a7f5bc*/
    v13 = v22[6]; /*0x100a7f5c3*/
    v29 = v22[7]; /*0x100a7f5d1*/
    v14 = v22[9]; /*0x100a7f5d5*/
    v28 = v22[10]; /*0x100a7f5e3*/
    v24 = v22[12]; /*0x100a7f5ee*/
    v27 = v22[13]; /*0x100a7f5f9*/
    __s2 = (void *)v22[15]; /*0x100a7f604*/
    v26 = v22[16]; /*0x100a7f60f*/
    v15 = v22[18]; /*0x100a7f613*/
    v25 = v22[19]; /*0x100a7f621*/
    *(_QWORD *)v31 = 0x8000000000000001LL; /*0x100a7f629*/
    if ( 2 * v23 ) /*0x100a7f630*/
    {
      v18 = v12; /*0x100a7f6b1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v23, 1); /*0x100a7f6b4*/
      v12 = v18; /*0x100a7f6b9*/
      if ( !(2 * v11) ) /*0x100a7f6c7*/
      {
LABEL_40:
        if ( !(2 * v13) ) /*0x100a7f64a*/
          goto LABEL_41; /*0x100a7f655*/
        goto LABEL_48; /*0x100a7f655*/
      }
    }
    else if ( !(2 * v11) ) /*0x100a7f63d*/
    {
      goto LABEL_40; /*0x100a7f648*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x100a7f6d4*/
    if ( !(2 * v13) ) /*0x100a7f6e4*/
    {
LABEL_41:
      if ( !(2 * v14) ) /*0x100a7f65b*/
        goto LABEL_42; /*0x100a7f666*/
      goto LABEL_49; /*0x100a7f666*/
    }
LABEL_48:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v13, 1); /*0x100a7f6ea*/
    if ( !(2 * v14) ) /*0x100a7f706*/
    {
LABEL_42:
      v16 = v24; /*0x100a7f66c*/
      if ( !(2 * v24) ) /*0x100a7f670*/
        goto LABEL_43; /*0x100a7f67b*/
      goto LABEL_50; /*0x100a7f67b*/
    }
LABEL_49:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v14, 1); /*0x100a7f70c*/
    v16 = v24; /*0x100a7f71d*/
    if ( !(2 * v24) ) /*0x100a7f72c*/
    {
LABEL_43:
      v17 = __s2; /*0x100a7f681*/
      if ( !(2LL * (_QWORD)__s2) ) /*0x100a7f685*/
        goto LABEL_44; /*0x100a7f690*/
      goto LABEL_51; /*0x100a7f690*/
    }
LABEL_50:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v16, 1); /*0x100a7f732*/
    v17 = __s2; /*0x100a7f740*/
    if ( !(2LL * (_QWORD)__s2) ) /*0x100a7f74f*/
    {
LABEL_44:
      if ( 2 * v15 ) /*0x100a7f696*/
        goto LABEL_52; /*0x100a7f6a1*/
      return (void *)core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v19); /*0x100a7f6a1*/
    }
LABEL_51:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v17, 1); /*0x100a7f755*/
    if ( 2 * v15 ) /*0x100a7f763*/
LABEL_52:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v15, 1); /*0x100a7f770*/
    return (void *)core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v19); /*0x100a7f79f*/
  }
LABEL_12:
  result = v31; /*0x100a7f407*/
  *(_QWORD *)v31 = 0x8000000000000001LL; /*0x100a7f40b*/
  if ( v23 != 0x8000000000000000LL && v23 ) /*0x100a7f41a*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[1], v23, 1); /*0x100a7f428*/
  if ( v22[3] != 0x8000000000000000LL && v22[3] ) /*0x100a7f43c*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[4], v22[3], 1); /*0x100a7f44a*/
  if ( v22[6] != 0x8000000000000000LL && v22[6] ) /*0x100a7f45e*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[7], v22[6], 1); /*0x100a7f46c*/
  if ( v22[9] != 0x8000000000000000LL && v22[9] ) /*0x100a7f480*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[10], v22[9], 1); /*0x100a7f48e*/
  if ( v22[12] != 0x8000000000000000LL && v22[12] ) /*0x100a7f4a2*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[13], v22[12], 1); /*0x100a7f4b0*/
  if ( v22[15] != 0x8000000000000000LL && v22[15] ) /*0x100a7f4c4*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[16], v22[15], 1); /*0x100a7f4d2*/
  if ( v22[18] != 0x8000000000000000LL ) /*0x100a7f4e1*/
  {
    if ( v22[18] ) /*0x100a7f4e6*/
      return (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[19], v22[18], 1); /*0x100a7f4f4*/
  }
  return result; /*0x100a7f55c*/
}