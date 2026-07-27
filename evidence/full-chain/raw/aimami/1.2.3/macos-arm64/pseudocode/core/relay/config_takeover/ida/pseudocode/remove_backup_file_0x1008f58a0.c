// __ZN13codexmate_lib4core5relay15config_takeover18remove_backup_file @ 0x1008f58a0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::config_takeover::remove_backup_file::h49b2e159fcfe07d9(
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

  v19[0] = a4; /*0x1008f58b2*/
  v19[1] = a5; /*0x1008f58b6*/
  v5 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(a2, a3); /*0x1008f58c0*/
  if ( v5 ) /*0x1008f58c8*/
  {
    v6 = v5; /*0x1008f58ce*/
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v5) ) /*0x1008f58d4*/
    {
      v20 = v6; /*0x1008f58e1*/
      v17[0] = v19; /*0x1008f58e9*/
      v17[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008f58f4*/
      v17[2] = &v20; /*0x1008f58fc*/
      v17[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008f5907*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v18, &unk_1017C736A, v17); /*0x1008f591a*/
      a1[3] = v18[2]; /*0x1008f5923*/
      v7 = v18[0]; /*0x1008f5927*/
      a1[2] = v18[1]; /*0x1008f592f*/
      a1[1] = v7; /*0x1008f5933*/
      *a1 = 10; /*0x1008f5937*/
      if ( (v20 & 3) == 1 ) /*0x1008f594a*/
      {
        v8 = v20 - 1; /*0x1008f594c*/
        v9 = *(_QWORD *)(v20 - 1); /*0x1008f5950*/
        v10 = *(_QWORD *)(v20 + 7); /*0x1008f5954*/
        if ( *(_QWORD *)v10 ) /*0x1008f5958*/
          (*(void (__fastcall **)(__int64))v10)(v9); /*0x1008f5964*/
        v11 = *(_QWORD *)(v10 + 8); /*0x1008f5966*/
        if ( v11 ) /*0x1008f596e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16)); /*0x1008f5978*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24, 8); /*0x1008f598a*/
      }
    }
    else
    {
      *a1 = 11; /*0x1008f599a*/
      if ( (v6 & 3) == 1 ) /*0x1008f59aa*/
      {
        v13 = v6 - 1; /*0x1008f59bc*/
        v14 = *(_QWORD *)(v6 - 1); /*0x1008f59bf*/
        v15 = *(_QWORD *)(v6 + 7); /*0x1008f59c4*/
        if ( *(_QWORD *)v15 ) /*0x1008f59c9*/
          (*(void (__fastcall **)(__int64))v15)(v14); /*0x1008f59d5*/
        v16 = *(_QWORD *)(v15 + 8); /*0x1008f59d7*/
        if ( v16 ) /*0x1008f59df*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x1008f59e9*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x1008f5a07*/
      }
    }
  }
  else
  {
    *a1 = 11; /*0x1008f5991*/
  }
  return result; /*0x1008f59ac*/
}