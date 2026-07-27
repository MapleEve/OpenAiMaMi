// __ZN13codexmate_lib4core11oauth_login15open_in_browser @ 0x1008e6100 | 基线 same-set
__int64 __fastcall codexmate_lib::core::oauth_login::open_in_browser::h73ba9874fbeb5d27(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __m128 v4; // xmm0
  int v5; // r12d
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  _BYTE v13[200]; // [rsp+8h] [rbp-148h] BYREF
  __m128 v14; // [rsp+D0h] [rbp-80h]
  __int64 *v15; // [rsp+E0h] [rbp-70h] BYREF
  int v16; // [rsp+E8h] [rbp-68h]
  double v17; // [rsp+ECh] [rbp-64h]
  int v18; // [rsp+F4h] [rbp-5Ch]
  int v19; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+100h] [rbp-50h]
  unsigned int v21; // [rsp+108h] [rbp-48h]
  unsigned int v22; // [rsp+10Ch] [rbp-44h]
  __int64 *v23; // [rsp+110h] [rbp-40h] BYREF
  __int64 (__fastcall *v24)(_QWORD, _QWORD); // [rsp+118h] [rbp-38h]
  __int64 v25; // [rsp+120h] [rbp-30h] BYREF

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(v13, "/usr/bin/open", 13); /*0x1008e6133*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v13, a2, a3); /*0x1008e6141*/
  std::process::Command::spawn::hcb9dc323794e167a(&v19, v13); /*0x1008e6151*/
  if ( v19 == 2 ) /*0x1008e615a*/
  {
    v25 = v20; /*0x1008e6164*/
    v23 = &v25; /*0x1008e616c*/
    v24 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008e6177*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v15, &unk_1017C6FDD, &v23); /*0x1008e618a*/
    v23 = v15; /*0x1008e6193*/
    LODWORD(v24) = v16; /*0x1008e619a*/
    v4 = (__m128)*(unsigned __int64 *)&v17; /*0x1008e619d*/
    v5 = v18; /*0x1008e61a2*/
    if ( (v25 & 3) == 1 ) /*0x1008e61b2*/
    {
      v14 = (__m128)*(unsigned __int64 *)&v17; /*0x1008e61b4*/
      v6 = v25 - 1; /*0x1008e61b8*/
      v7 = *(_QWORD *)(v25 - 1); /*0x1008e61bc*/
      v8 = *(_QWORD *)(v25 + 7); /*0x1008e61c0*/
      if ( *(_QWORD *)v8 ) /*0x1008e61c4*/
        (*(void (__fastcall **)(__int64, double))v8)(v7, v17); /*0x1008e61d0*/
      v9 = *(_QWORD *)(v8 + 8); /*0x1008e61d2*/
      if ( v9 ) /*0x1008e61d9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x1008e61e2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x1008e61f4*/
      v4 = v14; /*0x1008e61f9*/
    }
    *(_DWORD *)(a1 + 16) = (_DWORD)v24; /*0x1008e6200*/
    *(_QWORD *)(a1 + 8) = v23; /*0x1008e6207*/
    *(_QWORD *)a1 = 10; /*0x1008e620b*/
    _mm_storel_ps((double *)(a1 + 20), v4); /*0x1008e6212*/
    *(_DWORD *)(a1 + 28) = v5; /*0x1008e6216*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v13); /*0x1008e6221*/
  }
  else
  {
    v10 = v21; /*0x1008e622b*/
    v11 = v22; /*0x1008e622f*/
    if ( HIDWORD(v20) != -1 ) /*0x1008e6236*/
      close_NOCANCEL(HIDWORD(v20)); /*0x1008e6238*/
    if ( v10 != -1 ) /*0x1008e6241*/
      close_NOCANCEL(v10); /*0x1008e6246*/
    if ( v11 != -1 ) /*0x1008e624f*/
      close_NOCANCEL(v11); /*0x1008e6254*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v13); /*0x1008e6260*/
    *(_QWORD *)a1 = 11; /*0x1008e6265*/
  }
  return a1; /*0x1008e626f*/
}