// __ZN13codexmate_lib4core5relay19codex_project_state15stability_issue @ 0x100ac86a0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_project_state::stability_issue::haa4350ab63214d44(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 (__fastcall *v4)(); // rcx
  __int64 v5; // r14
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD **v10; // [rsp+18h] [rbp-38h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+20h] [rbp-30h]
  _QWORD *v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+30h] [rbp-20h]
  __int64 v14; // [rsp+38h] [rbp-18h]

  if ( __OFSUB__(0, *(_QWORD *)(a2 + 72)) ) /*0x100ac86b0*/
  {
    v2 = *(_QWORD *)(a2 + 40); /*0x100ac86b6*/
    if ( v2 ) /*0x100ac86bd*/
    {
      alloc::str::join_generic_copy::heca7a5e86402c6b6(&v12, *(_QWORD *)(a2 + 32), v2, " | ", 3); /*0x100ac86db*/
      v10 = &v12; /*0x100ac86e0*/
      v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ac86eb*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v9, &unk_1017CA09D, &v10); /*0x100ac86fe*/
      if ( v12 ) /*0x100ac870a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x100ac8715*/
      a1[2] = v9[2]; /*0x100ac871e*/
      v3 = v9[0]; /*0x100ac8722*/
      a1[1] = v9[1]; /*0x100ac872a*/
      goto LABEL_11; /*0x100ac872e*/
    }
    v3 = 0x8000000000000000LL; /*0x100ac876e*/
    if ( !*(_BYTE *)(a2 + 218) ) /*0x100ac877f*/
    {
LABEL_11:
      *a1 = v3; /*0x100ac87eb*/
      return a1; /*0x100ac87eb*/
    }
    if ( *(_QWORD *)(a2 + 120) == 0x8000000000000000LL ) /*0x100ac8785*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100ac8787*/
      v5 = 35; /*0x100ac878c*/
      v6 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x100ac879c*/
      if ( !v6 ) /*0x100ac87a4*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35); /*0x100ac882a*/
      qmemcpy(v6, "Codex project index requires repair", 35); /*0x100ac87da*/
      v7 = 35; /*0x100ac87e4*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v12, a2 + 120); /*0x100ac8802*/
      v5 = (__int64)v12; /*0x100ac8807*/
      v6 = v13; /*0x100ac880b*/
      v7 = v14; /*0x100ac880f*/
    }
    *a1 = v5; /*0x100ac8813*/
    a1[1] = v6; /*0x100ac8816*/
    a1[2] = v7; /*0x100ac881a*/
  }
  else
  {
    v4 = *(__int64 (__fastcall **)())(a2 + 88); /*0x100ac8737*/
    v10 = *(_QWORD ***)(a2 + 80); /*0x100ac873b*/
    v11 = v4; /*0x100ac873f*/
    v12 = &v10; /*0x100ac8747*/
    v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ac8752*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017CA0C6, &v12); /*0x100ac8764*/
  }
  return a1; /*0x100ac87f1*/
}