// __ZN13codexmate_lib8commands8accounts16FileRestoreState7capture @ 0x100695410 | 基线 same-set
void __fastcall codexmate_lib::commands::accounts::FileRestoreState::capture::h8419f3a9c55eea81(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  _QWORD v19[4]; // [rsp+0h] [rbp-B0h] BYREF
  _QWORD v20[3]; // [rsp+20h] [rbp-90h] BYREF
  __int64 v21; // [rsp+38h] [rbp-78h] BYREF
  __int64 v22; // [rsp+40h] [rbp-70h]
  __int64 v23; // [rsp+48h] [rbp-68h]
  _QWORD v24[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v25; // [rsp+60h] [rbp-50h]
  __int64 v26; // [rsp+68h] [rbp-48h]
  __int64 v27; // [rsp+70h] [rbp-40h]
  __int64 v28; // [rsp+78h] [rbp-38h] BYREF
  __int64 v29; // [rsp+80h] [rbp-30h]

  v3 = a2[1]; /*0x10069542a*/
  v4 = a2[2]; /*0x10069542e*/
  std::fs::read::inner::h6a30c15c40add28b(&v21, v3, v4); /*0x10069543c*/
  v5 = v21; /*0x100695441*/
  if ( !__OFSUB__(-v21, 1) ) /*0x10069544b*/
  {
    v26 = v23; /*0x10069552b*/
    v25 = v22; /*0x10069552f*/
LABEL_13:
    a1[2] = a2[2]; /*0x100695586*/
    v13 = *a2; /*0x10069558e*/
    a1[1] = a2[1]; /*0x100695595*/
    *a1 = v13; /*0x100695599*/
    a1[3] = v5; /*0x10069559c*/
    v14 = v26; /*0x1006955a4*/
    a1[4] = v25; /*0x1006955a8*/
    a1[5] = v14; /*0x1006955ac*/
    return; /*0x1006955ac*/
  }
  v29 = v3; /*0x100695451*/
  v6 = v22; /*0x100695455*/
  if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v22) ) /*0x100695463*/
  {
    if ( (v6 & 3) == 1 ) /*0x10069553e*/
    {
      v27 = v6 - 1; /*0x100695544*/
      v10 = *(_QWORD *)(v6 - 1); /*0x100695548*/
      v11 = *(_QWORD *)(v6 + 7); /*0x10069554c*/
      if ( *(_QWORD *)v11 ) /*0x100695550*/
        (*(void (__fastcall **)(__int64))v11)(v10); /*0x10069555c*/
      v12 = *(_QWORD *)(v11 + 8); /*0x10069555e*/
      if ( v12 ) /*0x100695565*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x10069556e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 24, 8); /*0x100695581*/
    }
    goto LABEL_13; /*0x100695581*/
  }
  v28 = v6; /*0x100695469*/
  v7 = v29; /*0x10069546d*/
  v24[0] = v29; /*0x100695471*/
  v24[1] = v4; /*0x100695475*/
  v19[0] = v24; /*0x10069547d*/
  v19[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10069548b*/
  v19[2] = &v28; /*0x100695496*/
  v19[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1006954a4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v20, (char *)&loc_1017C3345 + 1, v19); /*0x1006954c0*/
  a1[3] = v20[2]; /*0x1006954d3*/
  v8 = v20[0]; /*0x1006954d7*/
  a1[2] = v20[1]; /*0x1006954e5*/
  a1[1] = v8; /*0x1006954e9*/
  *a1 = 0x8000000000000000LL; /*0x1006954ed*/
  if ( (v28 & 3) == 1 ) /*0x1006954fc*/
  {
    v15 = v28 - 1; /*0x1006955c2*/
    v16 = *(_QWORD *)(v28 - 1); /*0x1006955c6*/
    v17 = *(_QWORD *)(v28 + 7); /*0x1006955ca*/
    if ( *(_QWORD *)v17 ) /*0x1006955ce*/
      (*(void (__fastcall **)(__int64))v17)(v16); /*0x1006955d9*/
    v18 = *(_QWORD *)(v17 + 8); /*0x1006955db*/
    if ( v18 ) /*0x1006955e2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v18, *(_QWORD *)(v17 + 16)); /*0x1006955eb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 24, 8); /*0x1006955fd*/
    v7 = v29; /*0x100695602*/
    v9 = *a2; /*0x100695606*/
    if ( *a2 ) /*0x100695606*/
      goto LABEL_5; /*0x10069560c*/
  }
  else
  {
    v9 = *a2; /*0x100695502*/
    if ( *a2 ) /*0x100695502*/
LABEL_5:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, 1); /*0x10069550e*/
  }
}