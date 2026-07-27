// __ZN13codexmate_lib4core5relay12health_check25interpret_openai_response @ 0x10089f670 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::health_check::interpret_openai_response::hfafdeb1cdd4fff9d(
        _QWORD *a1,
        __int16 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int16 *v6; // rsi
  __int64 (__fastcall *v7)(); // rdi
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-A0h] BYREF
  _QWORD v11[3]; // [rsp+18h] [rbp-88h] BYREF
  __int16 **v12; // [rsp+30h] [rbp-70h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+38h] [rbp-68h]
  __int16 ***v14; // [rsp+40h] [rbp-60h]
  __int16 *v15; // [rsp+48h] [rbp-58h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+50h] [rbp-50h]
  __int16 ***v17; // [rsp+58h] [rbp-48h]
  __int64 (__fastcall *v18)(); // [rsp+60h] [rbp-40h]
  __int16 **v19; // [rsp+68h] [rbp-38h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+70h] [rbp-30h]
  __int16 ***v21; // [rsp+78h] [rbp-28h]
  __int16 v22; // [rsp+86h] [rbp-1Ah] BYREF

  if ( (unsigned __int16)(a2 - 200) >= 0x64u ) /*0x10089f69b*/
  {
    codexmate_lib::core::relay::health_check::detect_body_error::hda5d5a078b6f58c3(&v12, a3, a4); /*0x10089f6c4*/
    if ( v12 == (__int16 **)0x8000000000000000LL ) /*0x10089f6cd*/
    {
      LOWORD(v19) = a2; /*0x10089f6d3*/
      v15 = (__int16 *)&v19; /*0x10089f6dc*/
      v16 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x10089f6e7*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_10420c9971c21f44d230d15b39fb3fec_652, &v15); /*0x10089f6f9*/
      return a1; /*0x10089f6fe*/
    }
    v21 = v14; /*0x10089f787*/
    v20 = v13; /*0x10089f793*/
    v19 = v12; /*0x10089f797*/
    v22 = a2; /*0x10089f79b*/
    v15 = &v22; /*0x10089f7a4*/
    v16 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x10089f7af*/
    v17 = &v19; /*0x10089f7b7*/
    v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10089f7c2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v11, &anon_10420c9971c21f44d230d15b39fb3fec_651, &v15); /*0x10089f7d8*/
    a1[2] = v11[2]; /*0x10089f7e1*/
    v8 = v11[0]; /*0x10089f7e5*/
    a1[1] = v11[1]; /*0x10089f7f0*/
    *a1 = v8; /*0x10089f7f4*/
    v6 = (__int16 *)v19; /*0x10089f7f7*/
    if ( !v19 ) /*0x10089f7fe*/
      return a1; /*0x10089f7fe*/
    v7 = v20; /*0x10089f800*/
LABEL_10:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x10089f804*/
    return a1; /*0x10089f809*/
  }
  codexmate_lib::core::relay::health_check::detect_body_error::hda5d5a078b6f58c3(&v19, a3, a4); /*0x10089f6a7*/
  if ( v19 != (__int16 **)0x8000000000000000LL ) /*0x10089f6b0*/
  {
    v17 = v21; /*0x10089f70b*/
    v16 = v20; /*0x10089f717*/
    v15 = (__int16 *)v19; /*0x10089f71b*/
    v12 = &v15; /*0x10089f723*/
    v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10089f72e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v10, &anon_10420c9971c21f44d230d15b39fb3fec_653, &v12); /*0x10089f744*/
    a1[2] = v10[2]; /*0x10089f750*/
    v5 = v10[0]; /*0x10089f754*/
    a1[1] = v10[1]; /*0x10089f762*/
    *a1 = v5; /*0x10089f766*/
    v6 = v15; /*0x10089f769*/
    if ( !v15 ) /*0x10089f770*/
      return a1; /*0x10089f770*/
    v7 = v16; /*0x10089f776*/
    goto LABEL_10; /*0x10089f77a*/
  }
  *a1 = 0x8000000000000000LL; /*0x10089f6b2*/
  return a1; /*0x10089f811*/
}