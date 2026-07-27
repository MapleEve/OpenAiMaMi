// __ZN13codexmate_lib4core5relay18router_unlock_auth21remove_file_if_exists @ 0x10051b720 | 基线 same-set
double __fastcall codexmate_lib::core::relay::router_unlock_auth::remove_file_if_exists::h84fb2392db379ae7(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rsi
  double result; // xmm0_8
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  _QWORD v17[4]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v18[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h] BYREF

  v19[0] = a4; /*0x10051b732*/
  v19[1] = a5; /*0x10051b736*/
  v5 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(a2, a3); /*0x10051b740*/
  if ( v5 ) /*0x10051b748*/
  {
    v6 = v5; /*0x10051b74e*/
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v5) ) /*0x10051b754*/
    {
      v20 = v6; /*0x10051b761*/
      v17[0] = v19; /*0x10051b769*/
      v17[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10051b774*/
      v17[2] = &v20; /*0x10051b77c*/
      v17[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10051b787*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v18, &unk_1017C1332, v17); /*0x10051b79a*/
      a1[3] = v18[2]; /*0x10051b7a3*/
      v7 = v18[0]; /*0x10051b7a7*/
      a1[2] = v18[1]; /*0x10051b7af*/
      a1[1] = v7; /*0x10051b7b3*/
      *a1 = 10; /*0x10051b7b7*/
      if ( (v20 & 3) == 1 ) /*0x10051b7ca*/
      {
        v8 = v20 - 1; /*0x10051b7cc*/
        v9 = *(_QWORD *)(v20 - 1); /*0x10051b7d0*/
        v10 = *(_QWORD *)(v20 + 7); /*0x10051b7d4*/
        if ( *(_QWORD *)v10 ) /*0x10051b7d8*/
          (*(void (__fastcall **)(__int64))v10)(v9); /*0x10051b7e4*/
        v11 = *(_QWORD *)(v10 + 8); /*0x10051b7e6*/
        if ( v11 ) /*0x10051b7ee*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16)); /*0x10051b7f8*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24, 8); /*0x10051b80a*/
      }
    }
    else
    {
      *a1 = 11; /*0x10051b81a*/
      if ( (v6 & 3) == 1 ) /*0x10051b82a*/
      {
        v13 = v6 - 1; /*0x10051b83c*/
        v14 = *(_QWORD *)(v6 - 1); /*0x10051b83f*/
        v15 = *(_QWORD *)(v6 + 7); /*0x10051b844*/
        if ( *(_QWORD *)v15 ) /*0x10051b849*/
          (*(void (__fastcall **)(__int64))v15)(v14); /*0x10051b855*/
        v16 = *(_QWORD *)(v15 + 8); /*0x10051b857*/
        if ( v16 ) /*0x10051b85f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x10051b869*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x10051b887*/
      }
    }
  }
  else
  {
    *a1 = 11; /*0x10051b811*/
  }
  return result; /*0x10051b82c*/
}