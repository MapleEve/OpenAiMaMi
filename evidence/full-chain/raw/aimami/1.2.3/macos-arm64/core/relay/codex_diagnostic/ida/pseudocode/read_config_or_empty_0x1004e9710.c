// __ZN13codexmate_lib4core5relay16codex_diagnostic20read_config_or_empty @ 0x1004e9710 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::read_config_or_empty::h4de2a23e2dcec008(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  _QWORD v13[3]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h]
  __int64 v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF

  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v15, a2, a3); /*0x1004e9726*/
  if ( __OFSUB__(0, v15) ) /*0x1004e972d*/
  {
    v3 = v16; /*0x1004e9737*/
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v16) ) /*0x1004e973e*/
    {
      v18 = v3; /*0x1004e974b*/
      v14[0] = &v18; /*0x1004e9753*/
      v14[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004e975e*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v13, &unk_1017BF94E, v14); /*0x1004e9771*/
      a1[3] = v13[2]; /*0x1004e977a*/
      v4 = v13[0]; /*0x1004e977e*/
      a1[2] = v13[1]; /*0x1004e9786*/
      a1[1] = v4; /*0x1004e978a*/
      *a1 = 10; /*0x1004e978e*/
      result = v18; /*0x1004e9795*/
      if ( (v18 & 3) == 1 ) /*0x1004e97a1*/
      {
        v6 = v18 - 1; /*0x1004e97a7*/
        v7 = *(_QWORD *)(v18 - 1); /*0x1004e97ab*/
        v8 = *(_QWORD *)(v18 + 7); /*0x1004e97af*/
        if ( *(_QWORD *)v8 ) /*0x1004e97b3*/
          (*(void (__fastcall **)(__int64))v8)(v7); /*0x1004e97bf*/
        v9 = *(_QWORD *)(v8 + 8); /*0x1004e97c1*/
        if ( v9 ) /*0x1004e97c9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x1004e97d3*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x1004e97e5*/
      }
    }
    else
    {
      a1[1] = 0; /*0x1004e980d*/
      a1[2] = 1; /*0x1004e9815*/
      a1[3] = 0; /*0x1004e981d*/
      *a1 = 11; /*0x1004e9825*/
      result = v3 & 3; /*0x1004e982f*/
      if ( (_DWORD)result == 1 ) /*0x1004e9835*/
      {
        v10 = *(_QWORD *)(v3 - 1); /*0x1004e9848*/
        v11 = *(_QWORD *)(v3 + 7); /*0x1004e984c*/
        if ( *(_QWORD *)v11 ) /*0x1004e9850*/
          (*(void (__fastcall **)(_QWORD))v11)(*(_QWORD *)(v3 - 1)); /*0x1004e985c*/
        v12 = *(_QWORD *)(v11 + 8); /*0x1004e985e*/
        if ( v12 ) /*0x1004e9866*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x1004e9870*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3 - 1, 24, 8); /*0x1004e988e*/
      }
    }
  }
  else
  {
    a1[3] = v17; /*0x1004e97f0*/
    result = v15; /*0x1004e97f4*/
    a1[2] = v16; /*0x1004e97fc*/
    a1[1] = result; /*0x1004e9800*/
    *a1 = 11; /*0x1004e9804*/
  }
  return result; /*0x1004e9837*/
}