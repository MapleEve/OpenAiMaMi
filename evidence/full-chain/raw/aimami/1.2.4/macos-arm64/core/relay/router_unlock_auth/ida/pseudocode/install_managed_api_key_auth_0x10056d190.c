// __ZN13codexmate_lib4core5relay18router_unlock_auth28install_managed_api_key_auth28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10056d190 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::install_managed_api_key_auth::_$u7b$$u7b$closure$u7d$$u7d$::h44321e19555a2c60(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  _QWORD v5[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v6[4]; // [rsp+20h] [rbp-20h] BYREF

  v6[0] = a2; /*0x10056d1a1*/
  v6[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10056d1ac*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v5, &unk_1017C8572, v6); /*0x10056d1bf*/
  a1[3] = v5[2]; /*0x10056d1c8*/
  result = v5[0]; /*0x10056d1cc*/
  a1[2] = v5[1]; /*0x10056d1d4*/
  a1[1] = result; /*0x10056d1d8*/
  *a1 = 10; /*0x10056d1dc*/
  v4 = *a2; /*0x10056d1e3*/
  if ( v4 ) /*0x10056d1e9*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], v4, 1); /*0x10056d1f4*/
  return result; /*0x10056d1f9*/
}