// __ZN13codexmate_lib4core10account_io25load_matching_export_auth @ 0x1008e2c30
// 1.2.3 NEW-delta | codexmate_lib::core::account_io::load_matching_export_auth | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
unsigned __int64 __fastcall codexmate_lib::core::account_io::load_matching_export_auth::hc991a0a8a924739c(
        unsigned __int64 *__dst,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdi
  void *v14; // rsi
  void *v15; // rax
  unsigned __int64 v16; // [rsp+0h] [rbp-2F0h] BYREF
  _BYTE v17[168]; // [rsp+8h] [rbp-2E8h] BYREF
  unsigned __int64 v18; // [rsp+B0h] [rbp-240h] BYREF
  unsigned __int64 v19; // [rsp+B8h] [rbp-238h]
  unsigned __int64 v20; // [rsp+C0h] [rbp-230h]
  void *__s1; // [rsp+C8h] [rbp-228h]
  _QWORD v22[15]; // [rsp+D0h] [rbp-220h] BYREF
  _QWORD v23[12]; // [rsp+148h] [rbp-1A8h] BYREF
  _QWORD v24[24]; // [rsp+1A8h] [rbp-148h] BYREF
  unsigned __int64 v25; // [rsp+268h] [rbp-88h]
  _QWORD v26[2]; // [rsp+270h] [rbp-80h] BYREF
  size_t __n; // [rsp+280h] [rbp-70h]
  void *__s2; // [rsp+288h] [rbp-68h]
  unsigned __int64 v29; // [rsp+290h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+298h] [rbp-58h]
  unsigned __int64 v31; // [rsp+2A0h] [rbp-50h]
  _QWORD *v32; // [rsp+2A8h] [rbp-48h] BYREF
  __int64 (__fastcall *v33)(_QWORD, _QWORD); // [rsp+2B0h] [rbp-40h]
  __int64 v34; // [rsp+2B8h] [rbp-38h]
  unsigned __int64 v35; // [rsp+2C0h] [rbp-30h]

  __n = a5; /*0x1008e2c44*/
  __s2 = a4; /*0x1008e2c48*/
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(&v16, a2, a3); /*0x1008e2c66*/
  v7 = v16; /*0x1008e2c6b*/
  v35 = 0x8000000000000001LL; /*0x1008e2c7d*/
  if ( v16 == 0x8000000000000001LL ) /*0x1008e2c84*/
  {
    qmemcpy(v24, v17, 0x60u); /*0x1008e2c9c*/
    v32 = v24; /*0x1008e2c9f*/
    v33 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1008e2caa*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v18, &unk_1017C6E53, &v32); /*0x1008e2cc0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v24); /*0x1008e2ccc*/
    v8 = v18; /*0x1008e2cd1*/
    v9 = v19; /*0x1008e2cd8*/
    v23[0] = v18; /*0x1008e2cdf*/
    v23[2] = v20; /*0x1008e2ced*/
    v23[1] = v19; /*0x1008e2cf4*/
    v31 = v20; /*0x1008e2cfb*/
    v30 = v19; /*0x1008e2cff*/
    v29 = v18; /*0x1008e2d03*/
    __dst[3] = v20; /*0x1008e2d07*/
    __dst[2] = v9; /*0x1008e2d0b*/
    __dst[1] = v8; /*0x1008e2d0f*/
    result = v35; /*0x1008e2d13*/
    *__dst = v35; /*0x1008e2d17*/
    return result; /*0x1008e2d1a*/
  }
  v23[2] = *(_QWORD *)&v17[16]; /*0x1008e2d23*/
  v23[1] = *(_QWORD *)&v17[8]; /*0x1008e2d32*/
  v23[0] = *(_QWORD *)v17; /*0x1008e2d39*/
  memcpy(&v24[4], &v17[24], 0x90u); /*0x1008e2d53*/
  v29 = *(_QWORD *)v17; /*0x1008e2d66*/
  v24[1] = *(_QWORD *)v17; /*0x1008e2d71*/
  v24[2] = *(_QWORD *)&v17[8]; /*0x1008e2d78*/
  v24[3] = *(_QWORD *)&v17[16]; /*0x1008e2d7f*/
  v24[0] = v16; /*0x1008e2d86*/
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(&v16, v24, a2, a3); /*0x1008e2da1*/
  if ( v16 == 2 ) /*0x1008e2db1*/
  {
    qmemcpy(v23, v17, sizeof(v23)); /*0x1008e2dc9*/
    v26[0] = v23; /*0x1008e2dcc*/
    v26[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1008e2dd7*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v29, &unk_1017C6E71, v26); /*0x1008e2dea*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v23); /*0x1008e2df6*/
    v11 = v29; /*0x1008e2dff*/
    v12 = v30; /*0x1008e2e03*/
    v24[22] = v29; /*0x1008e2e07*/
    v24[23] = v30; /*0x1008e2e0e*/
    v25 = v31; /*0x1008e2e15*/
    __dst[3] = v31; /*0x1008e2e1c*/
    __dst[2] = v12; /*0x1008e2e20*/
    __dst[1] = v11; /*0x1008e2e24*/
    result = v35; /*0x1008e2e28*/
    *__dst = v35; /*0x1008e2e2c*/
    if ( v7 == 0x8000000000000000LL ) /*0x1008e2e3c*/
      goto LABEL_12; /*0x1008e2e3c*/
LABEL_10:
    if ( v7 ) /*0x1008e2f80*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[1], v7, 1); /*0x1008e2f91*/
    goto LABEL_12; /*0x1008e2f91*/
  }
  v34 = *(_QWORD *)&v17[16]; /*0x1008e2e4b*/
  v33 = *(__int64 (__fastcall **)(_QWORD, _QWORD))&v17[8]; /*0x1008e2e57*/
  v32 = *(_QWORD **)v17; /*0x1008e2e5b*/
  qmemcpy(v22, &v17[24], sizeof(v22)); /*0x1008e2e72*/
  v13 = v23; /*0x1008e2e72*/
  v25 = *(_QWORD *)&v17[16]; /*0x1008e2e79*/
  v14 = *(void **)&v17[8]; /*0x1008e2e84*/
  v19 = *(_QWORD *)v17; /*0x1008e2e88*/
  v20 = *(_QWORD *)&v17[8]; /*0x1008e2e8f*/
  __s1 = *(void **)&v17[16]; /*0x1008e2e96*/
  v18 = v16; /*0x1008e2e9d*/
  if ( v22[0] == __n ) /*0x1008e2eaf*/
  {
    v13 = __s1; /*0x1008e2eb1*/
    v14 = __s2; /*0x1008e2eb8*/
    if ( !memcmp(__s1, __s2, __n) ) /*0x1008e2ec3*/
    {
      memcpy(__dst, v24, 0xB0u); /*0x1008e3073*/
      return core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v18); /*0x1008e307f*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v14); /*0x1008e2ec9*/
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1); /*0x1008e2ed8*/
  if ( !v15 ) /*0x1008e2ee0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 53); /*0x1008e30a0*/
  qmemcpy(v15, "Credential identity does not match the registry entry", 53); /*0x1008e2f44*/
  __dst[1] = 53; /*0x1008e2f47*/
  __dst[2] = (unsigned __int64)v15; /*0x1008e2f4f*/
  __dst[3] = 53; /*0x1008e2f53*/
  *__dst = v35; /*0x1008e2f5f*/
  result = core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v18); /*0x1008e2f69*/
  if ( v7 != 0x8000000000000000LL ) /*0x1008e2f7b*/
    goto LABEL_10; /*0x1008e2f7b*/
LABEL_12:
  if ( v24[3] != 0x8000000000000000LL && v24[3] ) /*0x1008e2fa5*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[4], v24[3], 1); /*0x1008e2fb3*/
  if ( v24[6] != 0x8000000000000000LL && v24[6] ) /*0x1008e2fc7*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[7], v24[6], 1); /*0x1008e2fd5*/
  if ( v24[9] != 0x8000000000000000LL && v24[9] ) /*0x1008e2fe9*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[10], v24[9], 1); /*0x1008e2ff7*/
  if ( v24[12] != 0x8000000000000000LL && v24[12] ) /*0x1008e300b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[13], v24[12], 1); /*0x1008e3019*/
  if ( v24[15] != 0x8000000000000000LL && v24[15] ) /*0x1008e302d*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[16], v24[15], 1); /*0x1008e303b*/
  if ( v24[18] != 0x8000000000000000LL ) /*0x1008e304a*/
  {
    if ( v24[18] ) /*0x1008e304f*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[19], v24[18], 1); /*0x1008e305d*/
  }
  return result; /*0x1008e3084*/
}