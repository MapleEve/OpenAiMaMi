// __ZN13codexmate_lib4core5relay15config_takeover8takeover28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100901730 | 基线 same-set
double __fastcall codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::hf6cbb97cbf650730(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  _QWORD v5[3]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+18h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF

  v7 = a2; /*0x10090173e*/
  v6[0] = &v7; /*0x100901746*/
  v6[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100901751*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v5, &unk_1017C7614, v6); /*0x100901764*/
  a1[3] = v5[2]; /*0x10090176d*/
  v2 = v5[0]; /*0x100901771*/
  a1[2] = v5[1]; /*0x100901779*/
  a1[1] = v2; /*0x10090177d*/
  *a1 = 10; /*0x100901781*/
  v3 = v7; /*0x100901788*/
  core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v7); /*0x10090178f*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 40, 8); /*0x1009017a6*/
}