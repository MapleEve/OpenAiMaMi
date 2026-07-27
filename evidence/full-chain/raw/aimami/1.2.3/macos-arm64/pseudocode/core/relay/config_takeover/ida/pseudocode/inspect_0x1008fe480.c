// __ZN13codexmate_lib4core5relay15config_takeover7inspect @ 0x1008fe480 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::config_takeover::inspect::ha24bdf4827804be9(
        __int64 a1,
        __int64 a2,
        __m128i a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rcx
  double v8; // xmm0_8
  double v9; // xmm0_8
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v18; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+8h] [rbp-D8h]
  __int64 v20; // [rsp+10h] [rbp-D0h]
  __int64 v21; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-C0h]
  __int64 v23; // [rsp+28h] [rbp-B8h]
  __int64 v24; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-A8h]
  __int64 v26; // [rsp+40h] [rbp-A0h]
  __int64 v27; // [rsp+48h] [rbp-98h]
  __int64 v28; // [rsp+50h] [rbp-90h]
  __int64 v29; // [rsp+58h] [rbp-88h]
  __int64 v30; // [rsp+60h] [rbp-80h] BYREF
  __int64 v31; // [rsp+68h] [rbp-78h]
  __int64 v32; // [rsp+70h] [rbp-70h]
  __int64 v33; // [rsp+78h] [rbp-68h]
  __int64 v34; // [rsp+80h] [rbp-60h]
  __int64 v35; // [rsp+88h] [rbp-58h]
  __int64 v36; // [rsp+90h] [rbp-50h]
  __int64 v37; // [rsp+98h] [rbp-48h]
  __int64 v38; // [rsp+A0h] [rbp-40h]
  __int64 v39; // [rsp+A8h] [rbp-38h]
  __int64 v40; // [rsp+B0h] [rbp-30h]
  __int64 v41; // [rsp+B8h] [rbp-28h]

  *(double *)a3.i64 = codexmate_lib::core::relay::config_takeover::read_optional_text::hb639c55c55ba33b6( /*0x1008fe4a5*/
                        &v30,
                        *(_QWORD *)(a2 + 56),
                        *(_QWORD *)(a2 + 64));
  v4 = v30; /*0x1008fe4aa*/
  v5 = v31; /*0x1008fe4ae*/
  v6 = v32; /*0x1008fe4b2*/
  v7 = v33; /*0x1008fe4b6*/
  if ( v30 == 11 ) /*0x1008fe4be*/
  {
    v8 = codexmate_lib::core::relay::config_takeover::split_foreign_surface::h312bc0dc86a91007(&v30, a2, v32, v33, a3); /*0x1008fe4ce*/
    v29 = v38; /*0x1008fe4d7*/
    v28 = v37; /*0x1008fe4e2*/
    v27 = v36; /*0x1008fe4ed*/
    v26 = v35; /*0x1008fe4f8*/
    v25 = v34; /*0x1008fe503*/
    v24 = v33; /*0x1008fe512*/
    if ( v30 ) /*0x1008fe51c*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v30, 1); /*0x1008fe527*/
    v9 = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hb189780393f1e7c4( /*0x1008fe549*/
           &v21,
           v25,
           v25 + 24 * v26,
           v8);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc4c33f253406965f( /*0x1008fe56e*/
      &v18,
      v28,
      v28 + 48 * v29,
      v9);
    v10 = codexmate_lib::core::relay::config_takeover::backup_exists::h42f18c99a961aa37(a2); /*0x1008fe576*/
    v11 = v23; /*0x1008fe57b*/
    v32 = v23; /*0x1008fe582*/
    v12 = v21; /*0x1008fe586*/
    v13 = v22; /*0x1008fe58d*/
    v31 = v22; /*0x1008fe594*/
    v30 = v21; /*0x1008fe598*/
    v14 = v18; /*0x1008fe59c*/
    v15 = v19; /*0x1008fe5a3*/
    v33 = v18; /*0x1008fe5aa*/
    v34 = v19; /*0x1008fe5ae*/
    v35 = v20; /*0x1008fe5b9*/
    *(_QWORD *)(a1 + 48) = v20; /*0x1008fe5bd*/
    *(_QWORD *)(a1 + 40) = v15; /*0x1008fe5c1*/
    *(_QWORD *)(a1 + 32) = v14; /*0x1008fe5c5*/
    *(_QWORD *)(a1 + 24) = v11; /*0x1008fe5c9*/
    *(_QWORD *)(a1 + 16) = v13; /*0x1008fe5cd*/
    *(_QWORD *)(a1 + 8) = v12; /*0x1008fe5d1*/
    *(_BYTE *)(a1 + 56) = v10; /*0x1008fe5d5*/
    *(_QWORD *)a1 = 11; /*0x1008fe5d9*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::h06c77773d9c0f4c1(&v24); /*0x1008fe5e7*/
    if ( v5 ) /*0x1008fe5ef*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1008fe5fc*/
  }
  else
  {
    *(_QWORD *)(a1 + 88) = v41; /*0x1008fe607*/
    *(_QWORD *)(a1 + 80) = v40; /*0x1008fe60f*/
    *(_QWORD *)(a1 + 72) = v39; /*0x1008fe617*/
    *(_QWORD *)(a1 + 64) = v38; /*0x1008fe61f*/
    *(_QWORD *)(a1 + 56) = v37; /*0x1008fe627*/
    *(_QWORD *)(a1 + 48) = v36; /*0x1008fe62f*/
    v16 = v34; /*0x1008fe633*/
    *(_QWORD *)(a1 + 40) = v35; /*0x1008fe63b*/
    *(_QWORD *)(a1 + 32) = v16; /*0x1008fe63f*/
    *(_QWORD *)(a1 + 8) = v5; /*0x1008fe643*/
    *(_QWORD *)(a1 + 16) = v6; /*0x1008fe647*/
    *(_QWORD *)(a1 + 24) = v7; /*0x1008fe64b*/
    *(_QWORD *)a1 = v4; /*0x1008fe64f*/
  }
  return a1; /*0x1008fe655*/
}