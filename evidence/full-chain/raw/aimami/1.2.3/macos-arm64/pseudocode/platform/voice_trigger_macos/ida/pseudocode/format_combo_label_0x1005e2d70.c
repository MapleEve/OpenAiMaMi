// __ZN13codexmate_lib8platform19voice_trigger_macos18format_combo_label @ 0x1005e2d70 | 基线 same-set
size_t *__fastcall codexmate_lib::platform::voice_trigger_macos::format_combo_label::h14e281cad1e42bc5(
        size_t *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  size_t v19; // rax
  _QWORD v20[4]; // [rsp+0h] [rbp-70h] BYREF
  size_t v21; // [rsp+20h] [rbp-50h] BYREF
  size_t v22; // [rsp+28h] [rbp-48h]
  size_t v23; // [rsp+30h] [rbp-40h]
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h]
  __int64 v26; // [rsp+48h] [rbp-28h]

  v24 = 0; /*0x1005e2d88*/
  v25 = 1; /*0x1005e2d90*/
  v26 = 0; /*0x1005e2d98*/
  if ( (a2 & 0x800000) != 0 ) /*0x1005e2da7*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v24, 0, 2, 1, 1, a6); /*0x1005e2dfc*/
    v7 = v25; /*0x1005e2e01*/
    v9 = v26; /*0x1005e2e05*/
    *(_WORD *)(v25 + v26) = 28262; /*0x1005e2e09*/
    v8 = v9 + 2; /*0x1005e2e10*/
    v26 = v8; /*0x1005e2e14*/
    if ( (a2 & 0x40000) == 0 ) /*0x1005e2e1f*/
    {
LABEL_3:
      if ( (a2 & 0x80000) == 0 ) /*0x1005e2dc1*/
        goto LABEL_4; /*0x1005e2dc1*/
      goto LABEL_11; /*0x1005e2dc1*/
    }
  }
  else
  {
    v7 = 1; /*0x1005e2da9*/
    v8 = 0; /*0x1005e2dae*/
    if ( (a2 & 0x40000) == 0 ) /*0x1005e2db8*/
      goto LABEL_3; /*0x1005e2db8*/
  }
  v10 = v8; /*0x1005e2e28*/
  if ( (unsigned __int64)(v24 - v8) <= 2 ) /*0x1005e2e2f*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v24, v8, 3, 1, 1, a6); /*0x1005e2fa5*/
    v7 = v25; /*0x1005e2faa*/
    v10 = v26; /*0x1005e2fae*/
  }
  *(_WORD *)(v7 + v10) = -29470; /*0x1005e2e35*/
  *(_BYTE *)(v7 + v10 + 2) = -125; /*0x1005e2e3b*/
  v8 += 3; /*0x1005e2e40*/
  v26 = v8; /*0x1005e2e44*/
  if ( (a2 & 0x80000) == 0 ) /*0x1005e2e4f*/
  {
LABEL_4:
    if ( (a2 & 0x20000) == 0 ) /*0x1005e2dce*/
      goto LABEL_5; /*0x1005e2dce*/
    goto LABEL_14; /*0x1005e2dce*/
  }
LABEL_11:
  v11 = v8; /*0x1005e2e55*/
  if ( (unsigned __int64)(v24 - v8) <= 2 ) /*0x1005e2e63*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v24, v8, 3, 1, 1, a6); /*0x1005e2fce*/
    v11 = v26; /*0x1005e2fd3*/
  }
  v12 = v25; /*0x1005e2e69*/
  *(_WORD *)(v25 + v11) = -29470; /*0x1005e2e6d*/
  *(_BYTE *)(v12 + v11 + 2) = -91; /*0x1005e2e73*/
  v8 += 3; /*0x1005e2e78*/
  v26 = v8; /*0x1005e2e7c*/
  if ( (a2 & 0x20000) == 0 ) /*0x1005e2e87*/
  {
LABEL_5:
    if ( (a2 & 0x100000) == 0 ) /*0x1005e2ddb*/
      goto LABEL_20; /*0x1005e2ddb*/
    goto LABEL_17; /*0x1005e2ddb*/
  }
LABEL_14:
  v13 = v8; /*0x1005e2e8d*/
  if ( (unsigned __int64)(v24 - v8) <= 2 ) /*0x1005e2e9b*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v24, v8, 3, 1, 1, a6); /*0x1005e2ff3*/
    v13 = v26; /*0x1005e2ff8*/
  }
  v14 = v25; /*0x1005e2ea1*/
  *(_WORD *)(v25 + v13) = -30750; /*0x1005e2ea5*/
  *(_BYTE *)(v14 + v13 + 2) = -89; /*0x1005e2eab*/
  v8 += 3; /*0x1005e2eb0*/
  v26 = v8; /*0x1005e2eb4*/
  if ( (a2 & 0x100000) != 0 ) /*0x1005e2ebf*/
  {
LABEL_17:
    v15 = v8; /*0x1005e2ec1*/
    if ( (unsigned __int64)(v24 - v8) <= 2 ) /*0x1005e2ecf*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v24, v8, 3, 1, 1, a6); /*0x1005e3018*/
      v15 = v26; /*0x1005e301d*/
    }
    v16 = v25; /*0x1005e2ed5*/
    *(_WORD *)(v25 + v15) = -29470; /*0x1005e2ed9*/
    *(_BYTE *)(v16 + v15 + 2) = -104; /*0x1005e2edf*/
    v8 += 3; /*0x1005e2ee4*/
    v26 = v8; /*0x1005e2ee8*/
  }
LABEL_20:
  codexmate_lib::platform::voice_trigger_macos::trigger_label::hb826f923ee108692(&v21, a3); /*0x1005e2eec*/
  if ( !v8 ) /*0x1005e2efe*/
  {
    a1[2] = v23; /*0x1005e2f70*/
    v19 = v21; /*0x1005e2f74*/
    a1[1] = v22; /*0x1005e2f7c*/
    *a1 = v19; /*0x1005e2f80*/
    v17 = v24; /*0x1005e2f83*/
    if ( !v24 ) /*0x1005e2f8a*/
      return a1; /*0x1005e2f8a*/
    goto LABEL_24; /*0x1005e2f8a*/
  }
  v20[0] = &v24; /*0x1005e2f04*/
  v20[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005e2f0f*/
  v20[2] = &v21; /*0x1005e2f13*/
  v20[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005e2f17*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017B9A37, v20); /*0x1005e2f29*/
  if ( v21 ) /*0x1005e2f35*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v21, 1); /*0x1005e2f40*/
  v17 = v24; /*0x1005e2f45*/
  if ( v24 ) /*0x1005e2f4c*/
LABEL_24:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v17, 1); /*0x1005e2f4e*/
  return a1; /*0x1005e2f5f*/
}