// __ZN13codexmate_lib4core5relay13codex_catalog24read_catalog_model_slugs @ 0x1008aab80
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_catalog::read_catalog_model_slugs | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::read_catalog_model_slugs::h46c2cb13952476e9(
        _QWORD *a1,
        __int128 *a2,
        _QWORD *a3)
{
  __int128 *v4; // r14
  __int128 **v5; // r12
  _QWORD *v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  _QWORD *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int128 *v19; // rax
  __int64 (__fastcall *v20)(_QWORD, _QWORD); // rax
  __int128 *v21; // rax
  _QWORD v23[3]; // [rsp+8h] [rbp-148h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-130h] BYREF
  __int128 *v25; // [rsp+30h] [rbp-120h] BYREF
  __int128 *v26; // [rsp+38h] [rbp-118h]
  _QWORD *v27; // [rsp+40h] [rbp-110h]
  _QWORD v28[4]; // [rsp+50h] [rbp-100h] BYREF
  __int64 v29; // [rsp+70h] [rbp-E0h]
  __int128 *v30; // [rsp+78h] [rbp-D8h] BYREF
  _QWORD *v31; // [rsp+80h] [rbp-D0h] BYREF
  _QWORD v32[10]; // [rsp+88h] [rbp-C8h] BYREF
  __int128 *v33; // [rsp+D8h] [rbp-78h] BYREF
  _QWORD *v34; // [rsp+E0h] [rbp-70h]
  __int64 v35; // [rsp+E8h] [rbp-68h]
  __int64 v36; // [rsp+F0h] [rbp-60h]
  __int128 **v37; // [rsp+F8h] [rbp-58h] BYREF
  _QWORD *v38; // [rsp+100h] [rbp-50h]
  __int64 v39; // [rsp+108h] [rbp-48h]
  __int64 v40; // [rsp+110h] [rbp-40h]
  _QWORD *v41; // [rsp+118h] [rbp-38h] BYREF
  __int128 *v42; // [rsp+120h] [rbp-30h]

  std::fs::read::inner::h6a30c15c40add28b(&v25, a2, a3); /*0x1008aaba7*/
  v4 = v25; /*0x1008aabac*/
  if ( __OFSUB__(-(__int64)v25, 1) ) /*0x1008aabbd*/
  {
    v28[0] = v26; /*0x1008aabc6*/
    v33 = a2; /*0x1008aabcd*/
    v34 = a3; /*0x1008aabd1*/
    v30 = (__int128 *)&v33; /*0x1008aabd9*/
    v31 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008aabe7*/
    v32[0] = v28; /*0x1008aabf5*/
    v32[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008aac03*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v37, &unk_1017C6010, &v30); /*0x1008aac1c*/
    v5 = v37; /*0x1008aac21*/
    v6 = v38; /*0x1008aac25*/
    v7 = v39; /*0x1008aac29*/
    if ( (v28[0] & 3) == 1 ) /*0x1008aac3c*/
    {
      v29 = v28[0] - 1LL; /*0x1008aac42*/
      v42 = *(__int128 **)(v28[0] - 1LL); /*0x1008aac4d*/
      v8 = *(_QWORD *)(v28[0] + 7LL); /*0x1008aac51*/
      if ( *(_QWORD *)v8 ) /*0x1008aac55*/
        (*(void (__fastcall **)(__int128 *))v8)(v42); /*0x1008aac61*/
      v9 = *(_QWORD *)(v8 + 8); /*0x1008aac67*/
      if ( v9 ) /*0x1008aac6e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v9, *(_QWORD *)(v8 + 16)); /*0x1008aac74*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, 24, 8); /*0x1008aac8a*/
    }
    a1[1] = v5; /*0x1008aac8f*/
    a1[2] = v6; /*0x1008aac93*/
    a1[3] = v7; /*0x1008aac97*/
    *a1 = 10; /*0x1008aac9b*/
  }
  else
  {
    v42 = v26; /*0x1008aacae*/
    v30 = v26; /*0x1008aacb2*/
    v31 = v27; /*0x1008aacb9*/
    v32[0] = 0; /*0x1008aacc0*/
    v32[1] = 0; /*0x1008aaccb*/
    serde_json::de::from_trait::ha73f8db442141d1f(&v37, &v30); /*0x1008aace1*/
    if ( (_BYTE)v37 == 6 ) /*0x1008aacea*/
    {
      v41 = v38; /*0x1008aacf4*/
      v24[0] = a2; /*0x1008aacf8*/
      v24[1] = a3; /*0x1008aacff*/
      v30 = (__int128 *)v24; /*0x1008aad0d*/
      v31 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008aad1b*/
      v32[0] = &v41; /*0x1008aad26*/
      v32[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1008aad34*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v23, &unk_1017C5FE7, &v30); /*0x1008aad50*/
      v32[0] = v23[2]; /*0x1008aad5c*/
      v31 = (_QWORD *)v23[1]; /*0x1008aad71*/
      v30 = (__int128 *)v23[0]; /*0x1008aad78*/
      v10 = v41; /*0x1008aad7f*/
      if ( *v41 == 1 ) /*0x1008aad8a*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v41 + 1); /*0x1008aaf69*/
      }
      else if ( !*v41 ) /*0x1008aad83*/
      {
        v11 = v41[2]; /*0x1008aad99*/
        if ( v11 ) /*0x1008aada0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[1], v11, 1); /*0x1008aadaf*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 40, 8); /*0x1008aaf7b*/
      v25 = v30; /*0x1008aaf8e*/
      v33 = v30; /*0x1008aafa3*/
      v34 = v31; /*0x1008aafa7*/
      v35 = v32[0]; /*0x1008aafab*/
      v36 = v32[1]; /*0x1008aafaf*/
      a1[4] = v32[1]; /*0x1008aafb7*/
      a1[3] = v35; /*0x1008aafbf*/
      v21 = v33; /*0x1008aafc3*/
      a1[2] = v34; /*0x1008aafcb*/
      a1[1] = v21; /*0x1008aafcf*/
      *a1 = 10; /*0x1008aafd3*/
    }
    else
    {
      v33 = (__int128 *)v37; /*0x1008aadc9*/
      v34 = v38; /*0x1008aadcd*/
      v28[3] = v40; /*0x1008aadd1*/
      v28[2] = v39; /*0x1008aadd8*/
      v28[1] = v38; /*0x1008aaddf*/
      v28[0] = v37; /*0x1008aade6*/
      v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008aae00*/
              &unk_10167582D,
              6,
              v28);
      if ( v12 && *(_BYTE *)v12 == 4 ) /*0x1008aae11*/
      {
        v13 = *(_QWORD *)(v12 + 16); /*0x1008aae17*/
        v14 = *(_QWORD *)(v12 + 24); /*0x1008aae1b*/
        std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008aae26*/
        v16 = v15; /*0x1008aae28*/
        if ( *(_BYTE *)(v15 + 16) == 1 ) /*0x1008aae2f*/
        {
          v17 = *(_QWORD *)v15; /*0x1008aae35*/
          v18 = *(_QWORD *)(v16 + 8); /*0x1008aae39*/
        }
        else
        {
          v17 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1008ab005*/
          *(_QWORD *)v16 = v17; /*0x1008ab00a*/
          *(_QWORD *)(v16 + 8) = v18; /*0x1008ab00e*/
          *(_BYTE *)(v16 + 16) = 1; /*0x1008ab012*/
        }
        *(_QWORD *)v16 = v17 + 1; /*0x1008aae41*/
        v32[1] = 0; /*0x1008aae53*/
        v32[0] = 0; /*0x1008aae61*/
        v31 = nullptr; /*0x1008aae6f*/
        v30 = &xmmword_1015FBEC0; /*0x1008aae7d*/
        v32[2] = v17; /*0x1008aae84*/
        v32[3] = v18; /*0x1008aae8b*/
        _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h913890a9c0b9ef87( /*0x1008aae9f*/
          v13,
          v13 + 32 * v14,
          &v30);
        a1[6] = v32[3]; /*0x1008aaeab*/
        a1[5] = v32[2]; /*0x1008aaeb6*/
        a1[4] = v32[1]; /*0x1008aaec1*/
        a1[3] = v32[0]; /*0x1008aaecc*/
        v19 = v30; /*0x1008aaed0*/
        a1[2] = v31; /*0x1008aaede*/
        a1[1] = v19; /*0x1008aaee2*/
        *a1 = 11; /*0x1008aaee6*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v28); /*0x1008aaef4*/
      }
      else
      {
        v25 = a2; /*0x1008aaefe*/
        v26 = (__int128 *)a3; /*0x1008aaf05*/
        v37 = &v25; /*0x1008aaf0c*/
        v38 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008aaf17*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v31, &unk_1017C5FBA, &v37); /*0x1008aaf2d*/
        v20 = (__int64 (__fastcall *)(_QWORD, _QWORD))v31; /*0x1008aaf32*/
        qmemcpy(a1 + 2, v32, 0x50u); /*0x1008aaf49*/
        *a1 = 10; /*0x1008aaf4c*/
        a1[1] = v20; /*0x1008aaf53*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v28); /*0x1008aaf5e*/
      }
    }
    if ( v4 ) /*0x1008aafdd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v4, 1); /*0x1008aafeb*/
  }
  return a1; /*0x1008aaff3*/
}