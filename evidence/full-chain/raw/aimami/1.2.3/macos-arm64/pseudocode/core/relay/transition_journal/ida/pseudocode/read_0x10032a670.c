// __ZN13codexmate_lib4core5relay18transition_journal4read @ 0x10032a670 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::transition_journal::read::h98e7602a0e4c21b7(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r14
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  _QWORD v12[9]; // [rsp+0h] [rbp-90h] BYREF
  __int64 v13; // [rsp+48h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-40h]
  __int64 v15; // [rsp+58h] [rbp-38h]
  __int64 v16; // [rsp+60h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(v12, *(_QWORD *)(a2 + 584), *(_QWORD *)(a2 + 592), &unk_1015E43EF, 30); /*0x10032a6a9*/
  v2 = v12[1]; /*0x10032a6ae*/
  std::fs::read::inner::h6a30c15c40add28b(&v13, v12[1], v12[2]); /*0x10032a6c0*/
  if ( v12[0] ) /*0x10032a6cf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v12[0], 1); /*0x10032a6d9*/
  v3 = v13; /*0x10032a6e8*/
  if ( __OFSUB__(-v13, 1) ) /*0x10032a6ef*/
  {
    if ( (v14 & 3) == 1 ) /*0x10032a700*/
    {
      v4 = v14 - 1; /*0x10032a702*/
      v5 = *(_QWORD *)(v14 - 1); /*0x10032a706*/
      v6 = *(_QWORD *)(v14 + 7); /*0x10032a70a*/
      if ( *(_QWORD *)v6 ) /*0x10032a70e*/
        (*(void (__fastcall **)(__int64))v6)(v5); /*0x10032a71a*/
      v7 = *(_QWORD *)(v6 + 8); /*0x10032a71c*/
      if ( v7 ) /*0x10032a723*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x10032a72c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x10032a73e*/
    }
    *a1 = 0x8000000000000000LL; /*0x10032a743*/
    return a1; /*0x10032a746*/
  }
  v8 = v14; /*0x10032a74b*/
  v13 = v14; /*0x10032a753*/
  v14 = v15; /*0x10032a757*/
  v15 = 0; /*0x10032a75b*/
  v16 = 0; /*0x10032a763*/
  serde_json::de::from_trait::h9458d2af8c3e219d(v12, &v13); /*0x10032a776*/
  if ( v12[0] != 0x8000000000000000LL ) /*0x10032a782*/
  {
    qmemcpy(a1, v12, 0x48u); /*0x10032a7c7*/
    if ( !v3 ) /*0x10032a7cd*/
      return a1; /*0x10032a7cd*/
LABEL_17:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v3, 1); /*0x10032a7cf*/
    return a1; /*0x10032a7da*/
  }
  *a1 = 0x8000000000000000LL; /*0x10032a784*/
  v9 = v12[1]; /*0x10032a787*/
  if ( *(_QWORD *)v12[1] == 1 ) /*0x10032a796*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v12[1] + 8LL); /*0x10032a7f6*/
  }
  else if ( !*(_QWORD *)v12[1] ) /*0x10032a78e*/
  {
    v10 = *(_QWORD *)(v12[1] + 16LL); /*0x10032a79d*/
    if ( v10 ) /*0x10032a7a5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v12[1] + 8LL), v10, 1); /*0x10032a7b1*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 40, 8); /*0x10032a808*/
  if ( v3 ) /*0x10032a810*/
    goto LABEL_17; /*0x10032a810*/
  return a1; /*0x10032a7e2*/
}