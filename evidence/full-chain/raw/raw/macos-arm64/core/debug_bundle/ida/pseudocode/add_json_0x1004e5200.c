// __ZN13codexmate_lib4core12debug_bundle8add_json @ 0x1004e5200 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::add_json::h74f383daab3cce47(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 *a6,
        __int64 a7)
{
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 result; // rax
  __int64 v12; // r13
  _BYTE v13[32]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v14[3]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]

  v15 = a3; /*0x1004e5217*/
  v16 = a2; /*0x1004e521b*/
  codexmate_lib::core::debug_bundle::redact_json_value_with_key::hf230bf36b2ce29ff((__int64)v13, 0, a3, a6, a7); /*0x1004e5232*/
  serde_json::ser::to_vec_pretty::h1bb921fbfe3276cc(v14, v13); /*0x1004e523e*/
  v9 = v14[0]; /*0x1004e5243*/
  v10 = v14[1]; /*0x1004e5247*/
  if ( __OFSUB__(-v14[0], 1) ) /*0x1004e524e*/
  {
    *a1 = 3; /*0x1004e5253*/
    a1[1] = v10; /*0x1004e525a*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v13); /*0x1004e5262*/
  }
  else
  {
    v17 = a5; /*0x1004e5269*/
    v12 = v14[2]; /*0x1004e526d*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v13); /*0x1004e5275*/
    result = codexmate_lib::core::debug_bundle::add_text::h320a2c1667629664((_DWORD)a1, v16, v15, a4, v17, v10, v12); /*0x1004e5293*/
    if ( v9 ) /*0x1004e529b*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x1004e52b6*/
  }
  return result; /*0x1004e52a8*/
}