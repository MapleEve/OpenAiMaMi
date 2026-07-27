// __ZN13codexmate_lib8commands8accounts16FileRestoreState6verify @ 0x100695100 | 基线 same-set
void __fastcall codexmate_lib::commands::accounts::FileRestoreState::verify::h0f46586125ea4e38(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r15
  char *v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  void *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r14
  _QWORD *v15; // rbx
  char *v16; // r14
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // [rsp+8h] [rbp-128h] BYREF
  char *v25; // [rsp+10h] [rbp-120h]
  void **v26; // [rsp+18h] [rbp-118h]
  __int64 (__fastcall *v27)(_QWORD, _QWORD); // [rsp+20h] [rbp-110h]
  _QWORD v28[3]; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-78h] BYREF
  void *__s1; // [rsp+C0h] [rbp-70h]
  size_t __n; // [rsp+C8h] [rbp-68h]
  _QWORD v32[2]; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-48h]
  __int64 v35; // [rsp+F0h] [rbp-40h]
  char *v36; // [rsp+F8h] [rbp-38h] BYREF
  _QWORD *v37; // [rsp+100h] [rbp-30h]

  v2 = a1; /*0x100695117*/
  if ( __OFSUB__(0, *(_QWORD *)(a2 + 24)) ) /*0x100695126*/
  {
    v3 = *(_QWORD *)(a2 + 8); /*0x10069512c*/
    v4 = *(_QWORD *)(a2 + 16); /*0x100695130*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v24, v3, v4); /*0x100695141*/
    if ( (_DWORD)v24 != 1 ) /*0x10069514d*/
    {
      v33 = v3; /*0x1006952a0*/
      v34 = v4; /*0x1006952a4*/
      v24 = &v33; /*0x1006952ac*/
      v25 = (char *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1006952ba*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, (char *)&loc_1017C32D8 + 1, &v24); /*0x1006952d2*/
      return; /*0x1006952d7*/
    }
    if ( ((unsigned __int8)v25 & 3) != 1 ) /*0x100695162*/
      goto LABEL_25; /*0x100695162*/
    v5 = v25 - 1; /*0x100695168*/
    v6 = *(_QWORD *)(v25 - 1); /*0x10069516c*/
    v7 = *(_QWORD *)(v25 + 7); /*0x100695170*/
    if ( *(_QWORD *)v7 ) /*0x100695174*/
      (*(void (__fastcall **)(__int64))v7)(v6); /*0x100695180*/
    v8 = *(_QWORD *)(v7 + 8); /*0x100695182*/
    if ( v8 ) /*0x10069518a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x100695194*/
    v9 = 24; /*0x100695199*/
    v10 = 8; /*0x10069519e*/
    v11 = v5; /*0x1006951a3*/
    goto LABEL_24; /*0x1006951a6*/
  }
  v37 = a1; /*0x1006951ab*/
  v12 = *(_QWORD *)(a2 + 8); /*0x1006951b2*/
  v13 = *(_QWORD *)(a2 + 16); /*0x1006951b6*/
  std::fs::read::inner::h6a30c15c40add28b(&v29, v12, v13); /*0x1006951c4*/
  v14 = v29; /*0x1006951c9*/
  v11 = __s1; /*0x1006951cd*/
  if ( v29 == 0x8000000000000000LL ) /*0x1006951d4*/
  {
    v36 = (char *)__s1; /*0x1006951da*/
    v32[0] = v12; /*0x1006951de*/
    v32[1] = v13; /*0x1006951e2*/
    v24 = v32; /*0x1006951ea*/
    v25 = (char *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1006951f8*/
    v26 = (void **)&v36; /*0x100695203*/
    v27 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100695211*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v33, &unk_1017C332E, &v24); /*0x10069522a*/
    v15 = v37; /*0x10069523b*/
    if ( ((unsigned __int8)v36 & 3) == 1 ) /*0x10069523f*/
    {
      v16 = v36 - 1; /*0x100695241*/
      v17 = *(_QWORD *)(v36 - 1); /*0x100695245*/
      v18 = *(_QWORD *)(v36 + 7); /*0x100695249*/
      if ( *(_QWORD *)v18 ) /*0x10069524d*/
        (*(void (__fastcall **)(__int64))v18)(v17); /*0x100695259*/
      v19 = *(_QWORD *)(v18 + 8); /*0x10069525b*/
      if ( v19 ) /*0x100695263*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, *(_QWORD *)(v18 + 16)); /*0x10069526d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 24, 8); /*0x10069527f*/
    }
    v20 = v34; /*0x100695288*/
    v21 = v35; /*0x10069528c*/
    *v15 = v33; /*0x100695290*/
    v15[1] = v20; /*0x100695293*/
    v15[2] = v21; /*0x100695297*/
  }
  else
  {
    if ( __n == *(_QWORD *)(a2 + 40) && !memcmp(__s1, *(const void **)(a2 + 32), __n) ) /*0x1006952f7*/
    {
      v2 = v37; /*0x10069537c*/
      if ( !v14 ) /*0x100695380*/
      {
LABEL_25:
        *v2 = 0x8000000000000000LL; /*0x10069538f*/
        return; /*0x10069538f*/
      }
      v10 = 1; /*0x100695382*/
      v9 = v14; /*0x100695387*/
LABEL_24:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v9, v10); /*0x10069538a*/
      goto LABEL_25; /*0x10069538a*/
    }
    v33 = v12; /*0x1006952fc*/
    v34 = v13; /*0x100695300*/
    v24 = &v33; /*0x100695308*/
    v25 = (char *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100695316*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v28, &unk_1017C32FE, &v24); /*0x100695332*/
    v22 = v37; /*0x100695337*/
    v37[2] = v28[2]; /*0x10069533f*/
    v23 = v28[0]; /*0x100695343*/
    v22[1] = v28[1]; /*0x100695351*/
    *v22 = v23; /*0x100695355*/
    if ( v14 ) /*0x10069535b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v14, 1); /*0x100695368*/
  }
}