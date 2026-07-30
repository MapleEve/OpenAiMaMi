// __ZN13codexmate_lib4core5relay18router_unlock_auth15managed_api_key @ 0x10056a610 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::managed_api_key::h206b580a266c76f4(
        size_t *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 result; // rax
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  size_t v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r12
  char v14; // [rsp+0h] [rbp-A0h] BYREF
  _QWORD v15[2]; // [rsp+1h] [rbp-9Fh] BYREF
  _BYTE v16[15]; // [rsp+11h] [rbp-8Fh]
  __int64 v17; // [rsp+20h] [rbp-80h] BYREF
  __int64 v18; // [rsp+28h] [rbp-78h]
  __int64 v19; // [rsp+30h] [rbp-70h]
  __int64 v20; // [rsp+38h] [rbp-68h]
  __int64 v21; // [rsp+40h] [rbp-60h]
  __int64 v22; // [rsp+48h] [rbp-58h]
  char v23; // [rsp+50h] [rbp-50h] BYREF
  __int64 v24; // [rsp+51h] [rbp-4Fh]
  __int64 v25; // [rsp+59h] [rbp-47h]
  _BYTE v26[15]; // [rsp+61h] [rbp-3Fh]
  void *__src; // [rsp+70h] [rbp-30h]

  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v17, a2, a3); /*0x10056a632*/
  v4 = v17; /*0x10056a637*/
  v5 = v18; /*0x10056a63b*/
  if ( __OFSUB__(-v17, 1) ) /*0x10056a642*/
  {
    result = core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hd4319f53cd0e9556( /*0x10056a64d*/
               0x8000000000000000LL,
               v18);
    *a1 = 0x8000000000000000LL; /*0x10056a652*/
    return result; /*0x10056a652*/
  }
  v17 = v18; /*0x10056a668*/
  v18 = v19; /*0x10056a66c*/
  v19 = 0; /*0x10056a670*/
  v20 = 0; /*0x10056a678*/
  v21 = v5; /*0x10056a680*/
  v22 = v18; /*0x10056a684*/
  serde_json::de::from_trait::hbc9c8c8dee91749d(&v14, &v17); /*0x10056a693*/
  if ( v14 == 6 ) /*0x10056a6a1*/
  {
    result = core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc173bfdeee8b49ee((char *)v15 + 7); /*0x10056a6aa*/
    *a1 = 0x8000000000000000LL; /*0x10056a6af*/
    if ( v4 ) /*0x10056a6b5*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x10056a6d0*/
    return result; /*0x10056a6d0*/
  }
  *(_QWORD *)&v26[7] = *(_QWORD *)&v16[7]; /*0x10056a6dc*/
  *(_QWORD *)v26 = *(_QWORD *)v16; /*0x10056a6e7*/
  v25 = v15[1]; /*0x10056a6f9*/
  v24 = v15[0]; /*0x10056a6fd*/
  v23 = v14; /*0x10056a701*/
  v7 = (void *)codexmate_lib::core::relay::router_unlock_auth::managed_api_key_from_value::h54c8fb9f0e591448(&v23); /*0x10056a708*/
  if ( v7 ) /*0x10056a710*/
  {
    v10 = v8; /*0x10056a712*/
    if ( v8 < 0 ) /*0x10056a718*/
    {
      v11 = 0; /*0x10056a71a*/
      goto LABEL_10; /*0x10056a71a*/
    }
    if ( v8 ) /*0x10056a72b*/
    {
      __src = v7; /*0x10056a72d*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v23, &v17, v8, v9); /*0x10056a731*/
      v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x10056a73e*/
      v11 = 1; /*0x10056a743*/
      if ( !v12 ) /*0x10056a74b*/
LABEL_10:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10); /*0x10056a71c*/
      v13 = v12; /*0x10056a74d*/
      v7 = __src; /*0x10056a750*/
    }
    else
    {
      v13 = 1; /*0x10056a756*/
    }
    memcpy((void *)v13, v7, v10); /*0x10056a765*/
    *a1 = v10; /*0x10056a76a*/
    a1[1] = v13; /*0x10056a76d*/
    a1[2] = v10; /*0x10056a771*/
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x10056a726*/
  }
  result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v23); /*0x10056a779*/
  if ( v4 ) /*0x10056a781*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x10056a792*/
  return result; /*0x10056a655*/
}