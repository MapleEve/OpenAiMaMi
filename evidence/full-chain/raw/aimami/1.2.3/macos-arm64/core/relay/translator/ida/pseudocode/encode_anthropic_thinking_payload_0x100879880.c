// __ZN13codexmate_lib4core5relay10translator33encode_anthropic_thinking_payload @ 0x100879880 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::encode_anthropic_thinking_payload::hddedc0a8a68a3be3(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(); // r14
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v9[3]; // [rsp+18h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+38h] [rbp-38h]
  _QWORD *v12; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall *v13)(); // [rsp+48h] [rbp-28h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100879895*/
  v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1008798a4*/
  if ( !v2 ) /*0x1008798ac*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100879a0c*/
  v10 = 128; /*0x1008798b2*/
  v11 = (__int64 (__fastcall *)())v2; /*0x1008798ba*/
  v12 = nullptr; /*0x1008798be*/
  v9[0] = &v10; /*0x1008798ca*/
  v3 = (__int64 (__fastcall *)())serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::he6e8e9fc27a55fb4( /*0x1008798da*/
                                   a2,
                                   v9);
  if ( v3 ) /*0x1008798ea*/
  {
    if ( v10 ) /*0x1008798f3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x1008798fe*/
    goto LABEL_6; /*0x100879903*/
  }
  v4 = v10; /*0x100879905*/
  v3 = v11; /*0x100879909*/
  if ( v10 == 0x8000000000000000LL ) /*0x100879910*/
  {
LABEL_6:
    if ( *(_QWORD *)v3 == 1 ) /*0x100879919*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3((char *)v3 + 8); /*0x10087993d*/
    }
    else if ( !*(_QWORD *)v3 ) /*0x100879912*/
    {
      v5 = *((_QWORD *)v3 + 2); /*0x100879920*/
      if ( v5 ) /*0x100879927*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v3 + 1), v5, 1); /*0x100879932*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 40, 8); /*0x10087994f*/
    *a1 = 0x8000000000000000LL; /*0x100879954*/
    return a1; /*0x100879954*/
  }
  base64::engine::Engine::encode::inner::h51f3163bd6933c68(v9, &anon_10420c9971c21f44d230d15b39fb3fec_509, v11, v12); /*0x10087997c*/
  if ( v4 ) /*0x100879984*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v4, 1); /*0x100879991*/
  v10 = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_510; /*0x10087999d*/
  v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008799a8*/
  v12 = v9; /*0x1008799ac*/
  v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008799b7*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &anon_10420c9971c21f44d230d15b39fb3fec_280, &v10); /*0x1008799ca*/
  if ( v9[0] ) /*0x1008799d6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9[1], v9[0], 1); /*0x1008799e1*/
  a1[2] = v8[2]; /*0x1008799ea*/
  v7 = v8[0]; /*0x1008799ee*/
  a1[1] = v8[1]; /*0x1008799f6*/
  *a1 = v7; /*0x1008799fa*/
  return a1; /*0x10087995a*/
}