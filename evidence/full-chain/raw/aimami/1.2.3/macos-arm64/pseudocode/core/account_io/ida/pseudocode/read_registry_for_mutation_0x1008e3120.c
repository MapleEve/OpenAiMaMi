// __ZN13codexmate_lib4core10account_io26read_registry_for_mutation @ 0x1008e3120
// 1.2.3 NEW-delta | codexmate_lib::core::account_io::read_registry_for_mutation | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::account_io::read_registry_for_mutation::h61c2c695512ac956(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-E8h] BYREF
  __int64 v9; // [rsp+10h] [rbp-E0h]
  _QWORD v10[9]; // [rsp+18h] [rbp-D8h] BYREF
  _QWORD v11[10]; // [rsp+A0h] [rbp-50h] BYREF

  std::sys::fs::metadata::h32fa16d3052ea535(&v8, a2, a3); /*0x1008e314c*/
  if ( (_DWORD)v8 == 1 ) /*0x1008e315f*/
  {
    result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1008e3166*/
               1,
               v9);
    a1[1] = 0x8000000000000000LL; /*0x1008e316b*/
    *a1 = 11; /*0x1008e316f*/
    return result; /*0x1008e3176*/
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1008e317d*/
    0,
    v9);
  result = std::fs::read_to_string::inner::hcce2334f4117b5b3(&v8, a2, a3); /*0x1008e318f*/
  v5 = v8; /*0x1008e3194*/
  v6 = v9; /*0x1008e319b*/
  if ( v8 == 0x8000000000000000LL ) /*0x1008e31a5*/
  {
    *a1 = 2; /*0x1008e31a7*/
    a1[1] = v6; /*0x1008e31ae*/
    return result; /*0x1008e31b2*/
  }
  v11[0] = v9; /*0x1008e31be*/
  v11[1] = v10[0]; /*0x1008e31c2*/
  v11[2] = 0; /*0x1008e31c6*/
  v11[3] = 0; /*0x1008e31ce*/
  v11[4] = v9; /*0x1008e31d6*/
  v11[5] = v10[0]; /*0x1008e31da*/
  serde_json::de::from_trait::hc9ad9bbbdeab4357(&v8, v11); /*0x1008e31e9*/
  v7 = v8; /*0x1008e31ee*/
  result = v9; /*0x1008e31f5*/
  if ( v8 != 0x8000000000000000LL ) /*0x1008e31ff*/
  {
    qmemcpy(a1 + 3, v10, 0x48u); /*0x1008e3223*/
    a1[1] = v7; /*0x1008e3226*/
    a1[2] = result; /*0x1008e322a*/
    *a1 = 11; /*0x1008e322e*/
    if ( !v5 ) /*0x1008e3238*/
      return result; /*0x1008e3238*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1008e3238*/
  }
  *a1 = 3; /*0x1008e3201*/
  a1[1] = result; /*0x1008e3208*/
  if ( v5 ) /*0x1008e320f*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1008e323a*/
  return result; /*0x1008e324a*/
}