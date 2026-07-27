// __ZN13codexmate_lib8commands8accounts16FileRestoreState7restore @ 0x1006956b0 | 基线 same-set
void __fastcall codexmate_lib::commands::accounts::FileRestoreState::restore::h8a418c7e0ccbc0f6(
        unsigned __int64 *a1,
        _QWORD *a2)
{
  void *v2; // r14
  size_t v3; // r15
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  void *v11; // r14
  size_t v12; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rsi
  _QWORD v23[3]; // [rsp+8h] [rbp-88h] BYREF
  unsigned __int64 v24; // [rsp+20h] [rbp-70h] BYREF
  size_t v25; // [rsp+28h] [rbp-68h]
  unsigned __int64 v26; // [rsp+30h] [rbp-60h]
  void **v27; // [rsp+38h] [rbp-58h] BYREF
  __int64 (__fastcall *v28)(_QWORD, _QWORD); // [rsp+40h] [rbp-50h]
  __int64 *v29; // [rsp+48h] [rbp-48h]
  __int64 (__fastcall *v30)(_QWORD, _QWORD); // [rsp+50h] [rbp-40h]
  _QWORD v31[2]; // [rsp+58h] [rbp-38h] BYREF
  __int64 v32; // [rsp+68h] [rbp-28h] BYREF

  if ( !__OFSUB__(0, a2[3]) ) /*0x1006956c8*/
  {
    v11 = (void *)a2[1]; /*0x1006957ba*/
    v12 = a2[2]; /*0x1006957be*/
    v13 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v11, v12, a2[4], a2[5], 1); /*0x1006957d6*/
    if ( v13 ) /*0x1006957de*/
    {
      v32 = v13; /*0x1006957e4*/
      v31[0] = v11; /*0x1006957e8*/
      v31[1] = v12; /*0x1006957ec*/
      v27 = (void **)v31; /*0x1006957f4*/
      v28 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1006957ff*/
      v29 = &v32; /*0x100695807*/
      v30 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100695812*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v24, &unk_1017C32C0, &v27); /*0x100695825*/
      if ( (v32 & 3) == 1 ) /*0x100695836*/
      {
        v14 = v32 - 1; /*0x100695838*/
        v15 = *(_QWORD *)(v32 - 1); /*0x10069583c*/
        v16 = *(_QWORD *)(v32 + 7); /*0x100695840*/
        if ( *(_QWORD *)v16 ) /*0x100695844*/
          (*(void (__fastcall **)(__int64))v16)(v15); /*0x100695850*/
        v17 = *(_QWORD *)(v16 + 8); /*0x100695852*/
        if ( v17 ) /*0x10069585a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16)); /*0x100695864*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 24, 8); /*0x100695876*/
      }
      a1[2] = v26; /*0x10069587f*/
      v18 = v24; /*0x100695883*/
      a1[1] = v25; /*0x10069588b*/
      goto LABEL_25; /*0x10069588f*/
    }
LABEL_24:
    v18 = 0x8000000000000000LL; /*0x1006958e3*/
LABEL_25:
    *a1 = v18; /*0x1006958ed*/
    return; /*0x1006958ed*/
  }
  v2 = (void *)a2[1]; /*0x1006956ce*/
  v3 = a2[2]; /*0x1006956d2*/
  v4 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v2, v3); /*0x1006956dc*/
  if ( !v4 ) /*0x1006956e4*/
    goto LABEL_24; /*0x1006956e4*/
  v5 = v4; /*0x1006956ea*/
  if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v4) ) /*0x1006956f7*/
  {
    if ( (v5 & 3) == 1 ) /*0x10069589a*/
    {
      v19 = v5 - 1; /*0x10069589f*/
      v20 = *(_QWORD *)(v5 - 1); /*0x1006958a2*/
      v21 = *(_QWORD *)(v5 + 7); /*0x1006958a7*/
      if ( *(_QWORD *)v21 ) /*0x1006958ac*/
        (*(void (__fastcall **)(__int64))v21)(v20); /*0x1006958b8*/
      v22 = *(_QWORD *)(v21 + 8); /*0x1006958ba*/
      if ( v22 ) /*0x1006958c2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x1006958cc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24, 8); /*0x1006958de*/
    }
    goto LABEL_24; /*0x1006958de*/
  }
  v31[0] = v5; /*0x1006956fd*/
  v24 = (unsigned __int64)v2; /*0x100695701*/
  v25 = v3; /*0x100695705*/
  v27 = (void **)&v24; /*0x10069570d*/
  v28 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100695718*/
  v29 = v31; /*0x100695720*/
  v30 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10069572b*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v23, (char *)&loc_1017C3371 + 1, &v27); /*0x100695741*/
  a1[2] = v23[2]; /*0x10069574a*/
  v6 = v23[0]; /*0x10069574e*/
  a1[1] = v23[1]; /*0x100695759*/
  *a1 = v6; /*0x10069575d*/
  if ( (v31[0] & 3) == 1 ) /*0x10069576c*/
  {
    v7 = v31[0] - 1LL; /*0x100695772*/
    v8 = *(_QWORD *)(v31[0] - 1LL); /*0x100695776*/
    v9 = *(_QWORD *)(v31[0] + 7LL); /*0x10069577a*/
    if ( *(_QWORD *)v9 ) /*0x10069577e*/
      (*(void (__fastcall **)(__int64))v9)(v8); /*0x10069578a*/
    v10 = *(_QWORD *)(v9 + 8); /*0x10069578c*/
    if ( v10 ) /*0x100695794*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x10069579e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24, 8); /*0x1006957b0*/
  }
}