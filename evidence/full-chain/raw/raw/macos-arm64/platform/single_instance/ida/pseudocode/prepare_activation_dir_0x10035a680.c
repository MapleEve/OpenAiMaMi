// __ZN13codexmate_lib8platform15single_instance22prepare_activation_dir @ 0x10035a680 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::platform::single_instance::prepare_activation_dir::h902d2372d45b757d(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v13[3]; // [rsp+10h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF

  v3 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x10035a698*/
  if ( v3 /*0x10035a6bf*/
    && (LOWORD(v13[0]) = 511, BYTE2(v13[0]) = 1,
                              (v5 = std::fs::DirBuilder::_create::h099c6e2853c95452(v13, v3, v4)) != 0) )
  {
    v14 = v5; /*0x10035a6c5*/
    v12[0] = &v14; /*0x10035a6cd*/
    v12[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035a6d8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v13, &unk_1017BCAC9, v12); /*0x10035a6eb*/
    if ( (v14 & 3) == 1 ) /*0x10035a6fc*/
    {
      v6 = v14 - 1; /*0x10035a6fe*/
      v7 = *(_QWORD *)(v14 - 1); /*0x10035a702*/
      v8 = *(_QWORD *)(v14 + 7); /*0x10035a706*/
      if ( *(_QWORD *)v8 ) /*0x10035a70a*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x10035a716*/
      v9 = *(_QWORD *)(v8 + 8); /*0x10035a718*/
      if ( v9 ) /*0x10035a720*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x10035a72a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x10035a73c*/
    }
    a1[2] = v13[2]; /*0x10035a745*/
    v10 = v13[0]; /*0x10035a749*/
    a1[1] = v13[1]; /*0x10035a751*/
  }
  else
  {
    v10 = 0x8000000000000000LL; /*0x10035a757*/
  }
  *a1 = v10; /*0x10035a761*/
  return a1; /*0x10035a767*/
}