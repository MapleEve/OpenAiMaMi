// __ZN13codexmate_lib4core5relay19legacy_virtual_auth21remove_file_if_exists @ 0x10065f1b0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::legacy_virtual_auth::remove_file_if_exists::hd02eb246a7fee7f1(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  double result; // xmm0_8
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rsi
  _QWORD v16[4]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v17[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF

  v18[0] = a4; /*0x10065f1c2*/
  v18[1] = 26; /*0x10065f1c6*/
  v4 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(a2, a3); /*0x10065f1d4*/
  if ( v4 ) /*0x10065f1dc*/
  {
    v5 = v4; /*0x10065f1e2*/
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v4) ) /*0x10065f1e8*/
    {
      v19 = v5; /*0x10065f1f5*/
      v16[0] = v18; /*0x10065f1fd*/
      v16[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10065f208*/
      v16[2] = &v19; /*0x10065f210*/
      v16[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10065f21b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v17, &unk_1017C1332, v16); /*0x10065f22e*/
      a1[3] = v17[2]; /*0x10065f237*/
      v6 = v17[0]; /*0x10065f23b*/
      a1[2] = v17[1]; /*0x10065f243*/
      a1[1] = v6; /*0x10065f247*/
      *a1 = 10; /*0x10065f24b*/
      if ( (v19 & 3) == 1 ) /*0x10065f25e*/
      {
        v7 = v19 - 1; /*0x10065f260*/
        v8 = *(_QWORD *)(v19 - 1); /*0x10065f264*/
        v9 = *(_QWORD *)(v19 + 7); /*0x10065f268*/
        if ( *(_QWORD *)v9 ) /*0x10065f26c*/
          (*(void (__fastcall **)(__int64))v9)(v8); /*0x10065f278*/
        v10 = *(_QWORD *)(v9 + 8); /*0x10065f27a*/
        if ( v10 ) /*0x10065f282*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x10065f28c*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24, 8); /*0x10065f29e*/
      }
    }
    else
    {
      *a1 = 11; /*0x10065f2ae*/
      if ( (v5 & 3) == 1 ) /*0x10065f2be*/
      {
        v12 = v5 - 1; /*0x10065f2d0*/
        v13 = *(_QWORD *)(v5 - 1); /*0x10065f2d3*/
        v14 = *(_QWORD *)(v5 + 7); /*0x10065f2d8*/
        if ( *(_QWORD *)v14 ) /*0x10065f2dd*/
          (*(void (__fastcall **)(__int64))v14)(v13); /*0x10065f2e9*/
        v15 = *(_QWORD *)(v14 + 8); /*0x10065f2eb*/
        if ( v15 ) /*0x10065f2f3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x10065f2fd*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 24, 8); /*0x10065f31b*/
      }
    }
  }
  else
  {
    *a1 = 11; /*0x10065f2a5*/
  }
  return result; /*0x10065f2c0*/
}