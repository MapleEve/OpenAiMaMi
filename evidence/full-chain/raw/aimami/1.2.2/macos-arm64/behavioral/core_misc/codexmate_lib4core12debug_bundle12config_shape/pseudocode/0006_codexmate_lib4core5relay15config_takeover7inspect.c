// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12config_shape 0x1006f80d0 d=1
__int64 __fastcall codexmate_lib::core::relay::config_takeover::inspect::hca535f0e91dfc0bc(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v17; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+8h] [rbp-D8h]
  __int64 v19; // [rsp+10h] [rbp-D0h]
  __int64 v20; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-C0h]
  __int64 v22; // [rsp+28h] [rbp-B8h]
  __int64 v23; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-A8h]
  __int64 v25; // [rsp+40h] [rbp-A0h]
  __int64 v26; // [rsp+48h] [rbp-98h]
  __int64 v27; // [rsp+50h] [rbp-90h]
  __int64 v28; // [rsp+58h] [rbp-88h]
  __int64 v29; // [rsp+60h] [rbp-80h] BYREF
  __int64 v30; // [rsp+68h] [rbp-78h]
  __int64 v31; // [rsp+70h] [rbp-70h]
  __int64 v32; // [rsp+78h] [rbp-68h]
  __int64 v33; // [rsp+80h] [rbp-60h]
  __int64 v34; // [rsp+88h] [rbp-58h]
  __int64 v35; // [rsp+90h] [rbp-50h]
  __int64 v36; // [rsp+98h] [rbp-48h]
  __int64 v37; // [rsp+A0h] [rbp-40h]
  __int64 v38; // [rsp+A8h] [rbp-38h]
  __int64 v39; // [rsp+B0h] [rbp-30h]
  __int64 v40; // [rsp+B8h] [rbp-28h]

  codexmate_lib::core::relay::config_takeover::read_optional_text::hab36ac2f4006267d( /*0x1006f80f5*/
    &v29,
    *(_QWORD *)(a2 + 56),
    *(_QWORD *)(a2 + 64));
  v4 = v29; /*0x1006f80fa*/
  v5 = v30; /*0x1006f80fe*/
  v6 = v31; /*0x1006f8102*/
  v7 = v32; /*0x1006f8106*/
  if ( v29 == 10 ) /*0x1006f810e*/
  {
    codexmate_lib::core::relay::config_takeover::split_foreign_surface::h45384420b454bd04(&v29, a2, v31, v32); /*0x1006f811e*/
    v28 = v37; /*0x1006f8127*/
    v27 = v36; /*0x1006f8132*/
    v26 = v35; /*0x1006f813d*/
    v25 = v34; /*0x1006f8148*/
    v24 = v33; /*0x1006f8153*/
    v23 = v32; /*0x1006f8162*/
    if ( v29 ) /*0x1006f816c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006f8177*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h294eb9a999548610( /*0x1006f8199*/
      &v20,
      v24,
      v24 + 24 * v25);
    v8 = v27; /*0x1006f819e*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf41844d10462ae72( /*0x1006f81be*/
      &v17,
      v27,
      v27 + 48 * v28);
    v9 = codexmate_lib::core::relay::config_takeover::backup_exists::h9652f75c4c8477d4(a2, v8); /*0x1006f81c6*/
    v10 = v22; /*0x1006f81cb*/
    v31 = v22; /*0x1006f81d2*/
    v11 = v20; /*0x1006f81d6*/
    v12 = v21; /*0x1006f81dd*/
    v30 = v21; /*0x1006f81e4*/
    v29 = v20; /*0x1006f81e8*/
    v13 = v17; /*0x1006f81ec*/
    v14 = v18; /*0x1006f81f3*/
    v32 = v17; /*0x1006f81fa*/
    v33 = v18; /*0x1006f81fe*/
    v34 = v19; /*0x1006f8209*/
    *(_QWORD *)(a1 + 48) = v19; /*0x1006f820d*/
    *(_QWORD *)(a1 + 40) = v14; /*0x1006f8211*/
    *(_QWORD *)(a1 + 32) = v13; /*0x1006f8215*/
    *(_QWORD *)(a1 + 24) = v10; /*0x1006f8219*/
    *(_QWORD *)(a1 + 16) = v12; /*0x1006f821d*/
    *(_QWORD *)(a1 + 8) = v11; /*0x1006f8221*/
    *(_BYTE *)(a1 + 56) = v9; /*0x1006f8225*/
    *(_QWORD *)a1 = 10; /*0x1006f8229*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::h94691fd4c2c1fdaa(&v23); /*0x1006f8237*/
    if ( v5 ) /*0x1006f823f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006f824c*/
  }
  else
  {
    *(_QWORD *)(a1 + 88) = v40; /*0x1006f8257*/
    *(_QWORD *)(a1 + 80) = v39; /*0x1006f825f*/
    *(_QWORD *)(a1 + 72) = v38; /*0x1006f8267*/
    *(_QWORD *)(a1 + 64) = v37; /*0x1006f826f*/
    *(_QWORD *)(a1 + 56) = v36; /*0x1006f8277*/
    *(_QWORD *)(a1 + 48) = v35; /*0x1006f827f*/
    v15 = v33; /*0x1006f8283*/
    *(_QWORD *)(a1 + 40) = v34; /*0x1006f828b*/
    *(_QWORD *)(a1 + 32) = v15; /*0x1006f828f*/
    *(_QWORD *)(a1 + 8) = v5; /*0x1006f8293*/
    *(_QWORD *)(a1 + 16) = v6; /*0x1006f8297*/
    *(_QWORD *)(a1 + 24) = v7; /*0x1006f829b*/
    *(_QWORD *)a1 = v4; /*0x1006f829f*/
  }
  return a1; /*0x1006f82a5*/
}