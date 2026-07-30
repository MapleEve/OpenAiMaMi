// __ZN13codexmate_lib4core5relay18router_unlock_auth28install_managed_api_key_auth28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10056d230 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::install_managed_api_key_auth::_$u7b$$u7b$closure$u7d$$u7d$::hca2393a73d1bd0f1(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  _QWORD v8[3]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+18h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF

  v10 = a2; /*0x10056d242*/
  v9[0] = &v10; /*0x10056d24a*/
  v9[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10056d255*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &unk_1017C85C8, v9); /*0x10056d268*/
  a1[3] = v8[2]; /*0x10056d271*/
  v2 = v8[0]; /*0x10056d275*/
  a1[2] = v8[1]; /*0x10056d27d*/
  a1[1] = v2; /*0x10056d281*/
  *a1 = 10; /*0x10056d285*/
  result = v10; /*0x10056d28c*/
  if ( (v10 & 3) == 1 ) /*0x10056d298*/
  {
    v4 = v10 - 1; /*0x10056d29a*/
    v5 = *(_QWORD *)(v10 - 1); /*0x10056d29e*/
    v6 = *(_QWORD *)(v10 + 7); /*0x10056d2a2*/
    if ( *(_QWORD *)v6 ) /*0x10056d2a6*/
      (*(void (__fastcall **)(__int64))v6)(v5); /*0x10056d2b2*/
    v7 = *(_QWORD *)(v6 + 8); /*0x10056d2b4*/
    if ( v7 ) /*0x10056d2bc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x10056d2c6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x10056d2d8*/
  }
  return result; /*0x10056d2dd*/
}