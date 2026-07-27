// __ZN13codexmate_lib4core10account_io33ensure_existing_snapshot_owned_by @ 0x1008e5560
// 1.2.3 NEW-delta | codexmate_lib::core::account_io::ensure_existing_snapshot_owned_by | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void *__fastcall codexmate_lib::core::account_io::ensure_existing_snapshot_owned_by::h0affb85540e63851(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        size_t __n)
{
  void *result; // rax
  __int64 v12; // r14
  _BYTE *v13; // rsi
  void *v14; // rax
  void *v15; // r15
  _QWORD *v16; // rdi
  _BYTE *v17; // rsi
  void *v18; // rax
  _BYTE v19[96]; // [rsp+8h] [rbp-288h] BYREF
  _BYTE v20[104]; // [rsp+68h] [rbp-228h] BYREF
  _QWORD v21[6]; // [rsp+D0h] [rbp-1C0h] BYREF
  _BYTE v22[104]; // [rsp+100h] [rbp-190h] BYREF
  _QWORD v23[9]; // [rsp+168h] [rbp-128h] BYREF
  _BYTE v24[104]; // [rsp+1B0h] [rbp-E0h] BYREF
  _QWORD v25[9]; // [rsp+218h] [rbp-78h] BYREF
  void *__s2; // [rsp+260h] [rbp-30h]

  __s2 = a6; /*0x1008e5574*/
  std::sys::fs::metadata::h32fa16d3052ea535(v22, a2, a3); /*0x1008e558e*/
  if ( *(_DWORD *)v22 == 1 ) /*0x1008e55a1*/
  {
    result = (void *)core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1008e55a8*/
                       1,
                       *(_QWORD *)&v22[8]);
    *a1 = 11; /*0x1008e55ad*/
    return result; /*0x1008e55b4*/
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1008e55bb*/
    0,
    *(_QWORD *)&v22[8]);
  result = (void *)codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048( /*0x1008e55d3*/
                     v22,
                     a2,
                     a3,
                     a4,
                     a5);
  if ( *(_DWORD *)v22 == 11 ) /*0x1008e55df*/
  {
    std::sys::fs::symlink_metadata::hd69903fe66faddbd(v22, a2, a3); /*0x1008e55ee*/
    result = *(void **)&v22[8]; /*0x1008e55f3*/
    if ( *(_DWORD *)v22 == 1 ) /*0x1008e5601*/
    {
      *(_QWORD *)v24 = 2; /*0x1008e5603*/
      *(_QWORD *)&v24[8] = *(_QWORD *)&v22[8]; /*0x1008e560e*/
LABEL_16:
      v13 = v24; /*0x1008e57a0*/
      goto LABEL_17; /*0x1008e57a0*/
    }
    if ( (*(_QWORD *)&v22[8] & 0xF00000000000LL) != 0x800000000000LL ) /*0x1008e5659*/
    {
      *(_QWORD *)v20 = a2; /*0x1008e5751*/
      *(_QWORD *)&v20[8] = a3; /*0x1008e5758*/
      *(_QWORD *)v22 = v20; /*0x1008e5766*/
      *(_QWORD *)&v22[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008e5774*/
      result = (void *)alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1008e5790*/
                         &v24[8],
                         &anon_155c4da9b5393270cfa7378e2b52c417_254,
                         v22);
      *(_QWORD *)v24 = 9; /*0x1008e5795*/
      goto LABEL_16; /*0x1008e5795*/
    }
  }
  else
  {
    qmemcpy(v24, v22, 0x60u); /*0x1008e562d*/
    if ( *(_QWORD *)v24 != 11 ) /*0x1008e5638*/
      goto LABEL_16; /*0x1008e5638*/
  }
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(v22, a2, a3); /*0x1008e5676*/
  v12 = *(_QWORD *)v22; /*0x1008e567b*/
  result = (void *)0x8000000000000001LL; /*0x1008e5682*/
  qmemcpy(v20, &v22[8], 0x60u); /*0x1008e5699*/
  if ( *(_QWORD *)v22 == 0x8000000000000001LL ) /*0x1008e569f*/
  {
    v13 = v20; /*0x1008e56a1*/
LABEL_17:
    qmemcpy(a1, v13, 0x60u); /*0x1008e57af*/
    return result; /*0x1008e57af*/
  }
  qmemcpy(v25, v23, sizeof(v25)); /*0x1008e56bd*/
  qmemcpy(&v24[8], v20, 0x60u); /*0x1008e56d3*/
  *(_QWORD *)v24 = *(_QWORD *)v22; /*0x1008e56d6*/
  if ( !(unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(v24) ) /*0x1008e56eb*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, &v20[96]); /*0x1008e57c7*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(70, 1); /*0x1008e57d6*/
    if ( !v14 ) /*0x1008e57de*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 70); /*0x1008e5a6b*/
    v15 = v14; /*0x1008e57e4*/
    result = memcpy(v14, "Existing account snapshot is not a switchable ChatGPT OAuth credential", 0x46u); /*0x1008e57f6*/
    *a1 = 9; /*0x1008e57fb*/
    a1[1] = 70; /*0x1008e5802*/
    a1[2] = v15; /*0x1008e580a*/
    a1[3] = 70; /*0x1008e580e*/
    if ( v12 == 0x8000000000000000LL ) /*0x1008e581c*/
      goto LABEL_28; /*0x1008e581c*/
    goto LABEL_26; /*0x1008e581c*/
  }
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(v22, v24, a2, a3); /*0x1008e5705*/
  result = *(void **)v22; /*0x1008e570a*/
  qmemcpy(v19, &v22[8], sizeof(v19)); /*0x1008e5724*/
  if ( *(_QWORD *)v22 == 2 ) /*0x1008e572b*/
  {
    qmemcpy(a1, v19, 0x60u); /*0x1008e5740*/
    if ( v12 == 0x8000000000000000LL ) /*0x1008e5746*/
      goto LABEL_28; /*0x1008e5746*/
LABEL_26:
    if ( v12 ) /*0x1008e5960*/
      result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v24[8], v12, 1); /*0x1008e5971*/
    goto LABEL_28; /*0x1008e5971*/
  }
  v21[5] = v23[5]; /*0x1008e5832*/
  v21[4] = v23[4]; /*0x1008e5840*/
  v21[3] = v23[3]; /*0x1008e584e*/
  v21[2] = v23[2]; /*0x1008e585c*/
  v21[1] = v23[1]; /*0x1008e5871*/
  v21[0] = v23[0]; /*0x1008e5878*/
  qmemcpy(&v20[8], v19, 0x60u); /*0x1008e5892*/
  v17 = v20; /*0x1008e5892*/
  v16 = v21; /*0x1008e5892*/
  *(_QWORD *)v20 = *(_QWORD *)v22; /*0x1008e5895*/
  if ( *(_QWORD *)&v20[32] == __n ) /*0x1008e58a3*/
  {
    v16 = *(_QWORD **)&v20[24]; /*0x1008e58a5*/
    v17 = __s2; /*0x1008e58ac*/
    if ( !memcmp(*(const void **)&v20[24], __s2, __n) ) /*0x1008e58b7*/
    {
      *a1 = 11; /*0x1008e5a3d*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v20); /*0x1008e5a4b*/
      return (void *)core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v24); /*0x1008e5a5c*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v17); /*0x1008e58bd*/
  v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(56, 1); /*0x1008e58cc*/
  if ( !v18 ) /*0x1008e58d4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 56); /*0x1008e5a7c*/
  qmemcpy(v18, "Existing account snapshot belongs to a different account", 56); /*0x1008e592e*/
  *a1 = 9; /*0x1008e5931*/
  a1[1] = 56; /*0x1008e5938*/
  a1[2] = v18; /*0x1008e5940*/
  a1[3] = 56; /*0x1008e5944*/
  result = (void *)core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v20); /*0x1008e5953*/
  if ( v12 != 0x8000000000000000LL ) /*0x1008e595b*/
    goto LABEL_26; /*0x1008e595b*/
LABEL_28:
  if ( *(_QWORD *)&v24[24] != 0x8000000000000000LL && *(_QWORD *)&v24[24] ) /*0x1008e5985*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v24[32], *(_QWORD *)&v24[24], 1); /*0x1008e5993*/
  if ( *(_QWORD *)&v24[48] != 0x8000000000000000LL && *(_QWORD *)&v24[48] ) /*0x1008e59a7*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v24[56], *(_QWORD *)&v24[48], 1); /*0x1008e59b5*/
  if ( *(_QWORD *)&v24[72] != 0x8000000000000000LL && *(_QWORD *)&v24[72] ) /*0x1008e59c9*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v24[80], *(_QWORD *)&v24[72], 1); /*0x1008e59d7*/
  if ( *(_QWORD *)&v24[96] != 0x8000000000000000LL && *(_QWORD *)&v24[96] ) /*0x1008e59e8*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25[0], *(_QWORD *)&v24[96], 1); /*0x1008e59f3*/
  if ( v25[2] != 0x8000000000000000LL && v25[2] ) /*0x1008e5a04*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25[3], v25[2], 1); /*0x1008e5a0f*/
  if ( v25[5] != 0x8000000000000000LL ) /*0x1008e5a1b*/
  {
    if ( v25[5] ) /*0x1008e5a24*/
      return (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25[6], v25[5], 1); /*0x1008e5a33*/
  }
  return result; /*0x1008e57b2*/
}