// __ZN13codexmate_lib8platform7process30codex_transition_quiet_timeout @ 0x1003660c0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::codex_transition_quiet_timeout::h1258379bc848e983(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r14
  _QWORD **v7; // r12
  _QWORD *v8; // r15
  __int64 v9; // rsi
  __int64 *v10; // r14
  __int64 result; // rax
  _BYTE v12[24]; // [rsp+0h] [rbp-E0h] BYREF
  _BYTE v13[24]; // [rsp+18h] [rbp-C8h] BYREF
  _BYTE v14[24]; // [rsp+30h] [rbp-B0h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-98h] BYREF
  __int64 v16; // [rsp+58h] [rbp-88h]
  __int64 v17; // [rsp+60h] [rbp-80h]
  _QWORD **v18; // [rsp+68h] [rbp-78h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+70h] [rbp-70h]
  _QWORD **v20; // [rsp+78h] [rbp-68h]
  _QWORD **v21; // [rsp+80h] [rbp-60h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+88h] [rbp-58h]
  _QWORD **v23; // [rsp+90h] [rbp-50h]
  __int64 (__fastcall *v24)(); // [rsp+98h] [rbp-48h]
  _QWORD *v25; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-38h]
  _QWORD **v27; // [rsp+B0h] [rbp-30h]

  v17 = a5; /*0x1003660d4*/
  v16 = a3; /*0x1003660de*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc22e68783ab88be2( /*0x1003660f0*/
    &v25,
    a2,
    a2 + 32 * a3);
  v6 = v26; /*0x1003660f5*/
  v7 = v27; /*0x1003660f9*/
  alloc::str::join_generic_copy::heca7a5e86402c6b6(&v21, v26, v27, " | ps-ocodexmate_lib::platform::process", 3); /*0x100366114*/
  v20 = v23; /*0x10036611d*/
  v19 = v22; /*0x100366129*/
  v18 = v21; /*0x10036612d*/
  if ( v7 ) /*0x100366134*/
  {
    v8 = (_QWORD *)(v6 + 8); /*0x100366136*/
    do /*0x100366147*/
    {
      v9 = *(v8 - 1); /*0x100366149*/
      if ( v9 ) /*0x100366150*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v8, v9, 1); /*0x10036615a*/
      v8 += 3; /*0x100366140*/
      v7 = (_QWORD **)((char *)v7 - 1); /*0x100366144*/
    }
    while ( v7 ); /*0x100366147*/
  }
  if ( v25 ) /*0x100366168*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24LL * (_QWORD)v25, 8); /*0x10036617a*/
  if ( a4 ) /*0x100366182*/
  {
    v15[0] = a4; /*0x100366188*/
    v15[1] = v17; /*0x100366193*/
    v25 = v15; /*0x1003661a1*/
    v26 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1003661ac*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v21, &unk_1017BD268, &v25); /*0x1003661bf*/
    v25 = v21; /*0x1003661cc*/
    v26 = (__int64)v22; /*0x1003661d0*/
    v27 = v23; /*0x1003661d8*/
    if ( v16 ) /*0x1003661e4*/
      goto LABEL_10; /*0x1003661e4*/
LABEL_13:
    v21 = &v25; /*0x100366253*/
    v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100366262*/
    v10 = (__int64 *)v14; /*0x10036626d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v14, &unk_1017BD1A5, &v21); /*0x10036627b*/
    goto LABEL_15; /*0x100366280*/
  }
  v25 = nullptr; /*0x100366231*/
  v26 = 1; /*0x100366239*/
  v27 = nullptr; /*0x100366241*/
  if ( !v16 ) /*0x100366251*/
    goto LABEL_13; /*0x100366251*/
LABEL_10:
  if ( (unsigned __int8)codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151() ) /*0x1003661e6*/
  {
    v21 = &v18; /*0x1003661f7*/
    v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100366202*/
    v23 = &v25; /*0x10036620a*/
    v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10036620e*/
    v10 = (__int64 *)v13; /*0x100366219*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v13, &unk_1015F80D4, &v21); /*0x100366227*/
  }
  else
  {
    v21 = &v18; /*0x100366286*/
    v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100366291*/
    v23 = &v25; /*0x100366299*/
    v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10036629d*/
    v10 = (__int64 *)v12; /*0x1003662a8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v12, &unk_1017BD1F9, &v21); /*0x1003662b6*/
  }
LABEL_15:
  a1[3] = v10[2]; /*0x1003662bb*/
  result = *v10; /*0x1003662c3*/
  a1[2] = v10[1]; /*0x1003662ca*/
  a1[1] = result; /*0x1003662ce*/
  *a1 = 10; /*0x1003662d2*/
  if ( v25 ) /*0x1003662e0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x1003662eb*/
  if ( v18 ) /*0x1003662f7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x100366302*/
  return result; /*0x100366307*/
}