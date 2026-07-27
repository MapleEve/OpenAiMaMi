// __ZN13codexmate_lib4core5relay15config_takeover18read_optional_text @ 0x1008f56a0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::config_takeover::read_optional_text::hb639c55c55ba33b6(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  double result; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rsi
  _QWORD v14[4]; // [rsp+8h] [rbp-88h] BYREF
  _QWORD v15[3]; // [rsp+28h] [rbp-68h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-50h] BYREF
  __int64 v17; // [rsp+50h] [rbp-40h] BYREF
  __int64 v18; // [rsp+58h] [rbp-38h]
  __int64 v19; // [rsp+60h] [rbp-30h]
  __int64 v20; // [rsp+68h] [rbp-28h] BYREF

  v16[0] = &unk_1016776FF; /*0x1008f56b9*/
  v16[1] = 17; /*0x1008f56bd*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v17, a2, a3); /*0x1008f56c9*/
  if ( __OFSUB__(0, v17) ) /*0x1008f56d0*/
  {
    v3 = v18; /*0x1008f56da*/
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v18) ) /*0x1008f56e1*/
    {
      v20 = v3; /*0x1008f56ee*/
      v14[0] = v16; /*0x1008f56f6*/
      v14[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008f5704*/
      v14[2] = &v20; /*0x1008f570c*/
      v14[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008f5717*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v15, &unk_1017C7357, v14); /*0x1008f572d*/
      a1[3] = v15[2]; /*0x1008f5736*/
      v4 = v15[0]; /*0x1008f573a*/
      a1[2] = v15[1]; /*0x1008f5742*/
      a1[1] = v4; /*0x1008f5746*/
      *a1 = 10; /*0x1008f574a*/
      if ( (v20 & 3) == 1 ) /*0x1008f575d*/
      {
        v5 = v20 - 1; /*0x1008f5763*/
        v6 = *(_QWORD *)(v20 - 1); /*0x1008f5767*/
        v7 = *(_QWORD *)(v20 + 7); /*0x1008f576b*/
        if ( *(_QWORD *)v7 ) /*0x1008f576f*/
          (*(void (__fastcall **)(__int64))v7)(v6); /*0x1008f577b*/
        v8 = *(_QWORD *)(v7 + 8); /*0x1008f577d*/
        if ( v8 ) /*0x1008f5785*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x1008f578f*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x1008f57a1*/
      }
    }
    else
    {
      a1[1] = 0; /*0x1008f57c9*/
      a1[2] = 1; /*0x1008f57d1*/
      a1[3] = 0; /*0x1008f57d9*/
      *a1 = 11; /*0x1008f57e1*/
      if ( (v3 & 3) == 1 ) /*0x1008f57f1*/
      {
        v11 = *(_QWORD *)(v3 - 1); /*0x1008f5804*/
        v12 = *(_QWORD *)(v3 + 7); /*0x1008f5808*/
        if ( *(_QWORD *)v12 ) /*0x1008f580c*/
          (*(void (__fastcall **)(_QWORD))v12)(*(_QWORD *)(v3 - 1)); /*0x1008f5818*/
        v13 = *(_QWORD *)(v12 + 8); /*0x1008f581a*/
        if ( v13 ) /*0x1008f5822*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x1008f582c*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3 - 1, 24, 8); /*0x1008f584a*/
      }
    }
  }
  else
  {
    a1[3] = v19; /*0x1008f57ac*/
    v10 = v17; /*0x1008f57b0*/
    a1[2] = v18; /*0x1008f57b8*/
    a1[1] = v10; /*0x1008f57bc*/
    *a1 = 11; /*0x1008f57c0*/
  }
  return result; /*0x1008f57f3*/
}