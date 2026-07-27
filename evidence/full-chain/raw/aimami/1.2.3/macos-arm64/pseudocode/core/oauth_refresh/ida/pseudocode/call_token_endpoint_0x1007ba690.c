// __ZN13codexmate_lib4core13oauth_refresh19call_token_endpoint28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1007ba690
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_refresh::call_token_endpoint::_$u7b$$u7b$closure$u7d$$u7d$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::oauth_refresh::call_token_endpoint::_$u7b$$u7b$closure$u7d$$u7d$::h8825686168a86d7e(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  _QWORD v6[3]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+18h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-18h] BYREF

  v8 = a2; /*0x1007ba69e*/
  v7[0] = &v8; /*0x1007ba6a6*/
  v7[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1007ba6b1*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v6, &unk_1017C4E97, v7); /*0x1007ba6c4*/
  a1[2] = v6[2]; /*0x1007ba6cd*/
  v2 = v6[0]; /*0x1007ba6d1*/
  a1[1] = v6[1]; /*0x1007ba6d9*/
  *a1 = v2; /*0x1007ba6dd*/
  v3 = v8; /*0x1007ba6e0*/
  if ( *v8 == 1 ) /*0x1007ba6eb*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v8 + 1); /*0x1007ba70f*/
  }
  else if ( !*v8 ) /*0x1007ba6e4*/
  {
    v4 = v8[2]; /*0x1007ba6f2*/
    if ( v4 ) /*0x1007ba6f9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8[1], v4, 1); /*0x1007ba704*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 40, 8); /*0x1007ba726*/
}