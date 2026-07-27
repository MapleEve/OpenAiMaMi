// __ZN13codexmate_lib4core6skills21load_installed_skills @ 0x100350500 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::skills::load_installed_skills::h6f4b3adab8a1bead(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-C0h]
  unsigned __int64 v12; // [rsp+18h] [rbp-B8h]
  char *v13; // [rsp+A0h] [rbp-30h] BYREF
  char v14; // [rsp+AFh] [rbp-21h] BYREF

  std::sys::fs::metadata::h32fa16d3052ea535(&v10, a2, a3); /*0x100350522*/
  if ( (_DWORD)v10 == 1 ) /*0x10035052e*/
  {
    if ( (v11 & 3) == 1 ) /*0x10035053f*/
    {
      v4 = v11 - 1; /*0x100350541*/
      v5 = *(_QWORD *)(v11 - 1); /*0x100350545*/
      v6 = *(_QWORD *)(v11 + 7); /*0x100350549*/
      if ( *(_QWORD *)v6 ) /*0x10035054d*/
        (*(void (__fastcall **)(__int64))v6)(v5); /*0x100350559*/
      v7 = *(_QWORD *)(v6 + 8); /*0x10035055b*/
      if ( v7 ) /*0x100350563*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x10035056d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x10035057f*/
    }
    a1[1] = 0; /*0x100350584*/
    a1[2] = 8; /*0x10035058c*/
    a1[3] = 0; /*0x100350594*/
  }
  else
  {
    v10 = 0; /*0x10035059e*/
    v11 = 8; /*0x1003505a9*/
    v12 = 0; /*0x1003505b4*/
    codexmate_lib::core::skills::scan_skills_recursive::h6c89c36742227cdf(a2, a3, a2, a3, &v10); /*0x1003505d2*/
    v13 = &v14; /*0x1003505e9*/
    if ( v12 >= 2 ) /*0x1003505f1*/
    {
      if ( v12 >= 0x15 ) /*0x100350632*/
        core::slice::sort::stable::driftsort_main::h325af6bcc027a090(v11, v12, &v13); /*0x100350648*/
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::hf8a85b276e144f87(v11, v12, 1, &v13); /*0x10035063d*/
    }
    a1[3] = v12; /*0x1003505fa*/
    v8 = v10; /*0x1003505fe*/
    a1[2] = v11; /*0x10035060c*/
    a1[1] = v8; /*0x100350610*/
  }
  *a1 = 11; /*0x100350614*/
  return a1; /*0x10035061e*/
}