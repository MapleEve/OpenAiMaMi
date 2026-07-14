// owner: codexmate_lib::core::relay::codex_diagnostic::resync_codex_config::h884743a36a0a095f
// VA: 0x1003def90 | AiMaMi 1.1.8 macos universal.app x86_64 slice (arch-noise-filtered)
// session: <审计会话>

double __fastcall codexmate_lib::core::relay::codex_diagnostic::resync_codex_config::h884743a36a0a095f(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  bool v5; // r12
  unsigned __int64 v6; // r15
  char v7; // al
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  double result; // xmm0_8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  bool v14; // r12
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  _QWORD *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rbx
  char *v21; // r12
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rsi
  _QWORD v25[3]; // [rsp+18h] [rbp-138h] BYREF
  __int64 v26; // [rsp+30h] [rbp-120h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+38h] [rbp-118h]
  __int64 v28; // [rsp+40h] [rbp-110h]
  unsigned __int64 v29; // [rsp+48h] [rbp-108h]
  __int64 v30; // [rsp+50h] [rbp-100h]
  __int64 v31; // [rsp+58h] [rbp-F8h]
  __int64 v32; // [rsp+60h] [rbp-F0h]
  unsigned __int64 v33; // [rsp+68h] [rbp-E8h]
  bool v34; // [rsp+70h] [rbp-E0h]
  _QWORD v35[3]; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-A0h]
  __int64 v38; // [rsp+B8h] [rbp-98h]
  __int64 v39; // [rsp+C0h] [rbp-90h]
  __int64 (__fastcall *v40)(); // [rsp+C8h] [rbp-88h]
  __int64 v41; // [rsp+D0h] [rbp-80h]
  __int64 v42; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-70h]
  unsigned __int64 v44; // [rsp+E8h] [rbp-68h]
  __int64 v45; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+F8h] [rbp-58h]
  __int64 (__fastcall *v47)(); // [rsp+100h] [rbp-50h]
  __int64 v48; // [rsp+108h] [rbp-48h]
  unsigned __int64 v49; // [rsp+110h] [rbp-40h]
  __int64 v50; // [rsp+118h] [rbp-38h]
  __int64 v51; // [rsp+120h] [rbp-30h]

  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hb0cd45ccd5800c5b( /*0x1003defc0*/
    &v45,
    *(_QWORD *)(a3 + 8),
    *(_QWORD *)(a3 + 8) + 232LL * *(_QWORD *)(a3 + 16));
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd2fe128b4c6cf4cc(&v42, a3 + 24); /*0x1003defcd*/
  if ( *(_BYTE *)(a3 + 340) == 1 && v47 ) /*0x1003defe5*/
  {
    v5 = v44 != 0; /*0x1003deff0*/
    v6 = 0x8000000000000000LL; /*0x1003deff4*/
    if ( *(_BYTE *)(a3 + 122) != 1 ) /*0x1003df003*/
      goto LABEL_4; /*0x1003df003*/
  }
  else
  {
    v5 = 0; /*0x1003df13d*/
    v6 = 0x8000000000000000LL; /*0x1003df140*/
    if ( *(_BYTE *)(a3 + 122) != 1 ) /*0x1003df14f*/
    {
LABEL_4:
      v49 = 0x8000000000000000LL; /*0x1003df009*/
      if ( v5 ) /*0x1003df010*/
        goto LABEL_5; /*0x1003df010*/
      goto LABEL_13; /*0x1003df010*/
    }
  }
  v26 = a3 + 120; /*0x1003df159*/
  v27 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1003df167*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, &unk_101226DFC, &v26); /*0x1003df183*/
  v6 = v25[0]; /*0x1003df188*/
  v48 = v25[1]; /*0x1003df196*/
  v51 = v25[2]; /*0x1003df1a1*/
  v49 = v25[0]; /*0x1003df1a8*/
  if ( v5 ) /*0x1003df1ac*/
  {
LABEL_5:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v35, a3 + 128); /*0x1003df016*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v26, a3 + 152); /*0x1003df03a*/
    v38 = v35[2]; /*0x1003df046*/
    v37 = v35[1]; /*0x1003df05b*/
    v36 = v35[0]; /*0x1003df062*/
    v39 = v26; /*0x1003df077*/
    v40 = v27; /*0x1003df07e*/
    v41 = v28; /*0x1003df08c*/
    v7 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d(a2); /*0x1003df093*/
    codexmate_lib::core::relay::codex_catalog::write_catalog::hd6fdf4aec3d5e977( /*0x1003df0c9*/
      (unsigned int)&v26,
      a2,
      v46,
      (_DWORD)v47,
      v43,
      v44,
      (__int64)&v36,
      v7 != 1);
    if ( (_DWORD)v26 == 10 ) /*0x1003df0d5*/
    {
      v8 = (unsigned __int64)v27; /*0x1003df0db*/
      v50 = v28; /*0x1003df0e9*/
      v6 = v29; /*0x1003df0ed*/
      v9 = v36; /*0x1003df0f4*/
      if ( !v36 ) /*0x1003df0fe*/
        goto LABEL_8; /*0x1003df0fe*/
    }
    else
    {
      result = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v26); /*0x1003df370*/
      v8 = 0x8000000000000000LL; /*0x1003df375*/
      v9 = v36; /*0x1003df37f*/
      if ( !v36 ) /*0x1003df389*/
      {
LABEL_8:
        if ( v39 ) /*0x1003df11b*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v39, 1); /*0x1003df129*/
        goto LABEL_15; /*0x1003df129*/
      }
    }
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v9, 1); /*0x1003df10c*/
    goto LABEL_8; /*0x1003df10c*/
  }
LABEL_13:
  v11 = codexmate_lib::core::relay::codex_catalog::remove_catalog::hcf6d074d01d400b7(a2); /*0x1003df1b2*/
  if ( (v11 & 3) == 1 ) /*0x1003df1c2*/
  {
    v50 = v11 - 1; /*0x1003df39a*/
    v23 = *(_QWORD *)(v11 - 1); /*0x1003df39e*/
    v6 = *(_QWORD *)(v11 + 7); /*0x1003df3a2*/
    if ( *(_QWORD *)v6 ) /*0x1003df3a6*/
      (*(void (__fastcall **)(__int64))v6)(v23); /*0x1003df3b1*/
    v24 = *(_QWORD *)(v6 + 8); /*0x1003df3b3*/
    if ( v24 ) /*0x1003df3ba*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v24, *(_QWORD *)(v6 + 16)); /*0x1003df3c3*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 24, 8); /*0x1003df3d6*/
  }
  v8 = 0x8000000000000000LL; /*0x1003df1d2*/
LABEL_15:
  v12 = 0; /*0x1003df1d5*/
  v13 = v50; /*0x1003df1dd*/
  if ( v8 == 0x8000000000000000LL ) /*0x1003df1e1*/
    v13 = 0; /*0x1003df1e1*/
  v14 = v8 != 0x8000000000000000LL && v5; /*0x1003df1e5*/
  v26 = v46; /*0x1003df1f0*/
  v27 = v47; /*0x1003df1fb*/
  v28 = v43; /*0x1003df206*/
  v29 = v44; /*0x1003df211*/
  if ( v49 != 0x8000000000000000LL ) /*0x1003df218*/
    v12 = v48; /*0x1003df218*/
  v30 = v12; /*0x1003df21d*/
  v31 = v51; /*0x1003df228*/
  v34 = v14; /*0x1003df22f*/
  v32 = v13; /*0x1003df236*/
  v33 = v6; /*0x1003df23d*/
  codexmate_lib::core::relay::codex_writer::apply_codex_state::h57ffc59d60ac1cd7(a1, a2, &v26); /*0x1003df251*/
  if ( 2 * v8 ) /*0x1003df256*/
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v8, 1); /*0x1003df28f*/
    v15 = v49; /*0x1003df294*/
    if ( !(2 * v49) ) /*0x1003df2a3*/
    {
LABEL_21:
      v16 = v43; /*0x1003df274*/
      v17 = v44; /*0x1003df278*/
      if ( !v44 ) /*0x1003df27f*/
        goto LABEL_29; /*0x1003df27f*/
      goto LABEL_25; /*0x1003df27f*/
    }
  }
  else
  {
    v15 = v49; /*0x1003df263*/
    if ( !(2 * v49) ) /*0x1003df267*/
      goto LABEL_21; /*0x1003df272*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v15, 1); /*0x1003df2ae*/
  v16 = v43; /*0x1003df2b3*/
  v17 = v44; /*0x1003df2b7*/
  if ( !v44 ) /*0x1003df2be*/
    goto LABEL_29; /*0x1003df2be*/
LABEL_25:
  v18 = (_QWORD *)(v16 + 8); /*0x1003df2c0*/
  do /*0x1003df2d7*/
  {
    v19 = *(v18 - 1); /*0x1003df2d9*/
    if ( v19 ) /*0x1003df2e0*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v18, v19, 1); /*0x1003df2ea*/
    v18 += 3; /*0x1003df2d0*/
    --v17; /*0x1003df2d4*/
  }
  while ( v17 ); /*0x1003df2d7*/
LABEL_29:
  if ( v42 ) /*0x1003df2f8*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 24 * v42, 8); /*0x1003df30a*/
  v20 = v46; /*0x1003df30f*/
  v21 = (char *)v47 + 1; /*0x1003df317*/
  v22 = v46; /*0x1003df31a*/
  while ( v21 != (char *)1 ) /*0x1003df324*/
  {
    --v21; /*0x1003df32d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(); /*0x1003df330*/
    v22 += 232; /*0x1003df335*/
  }
  if ( v45 ) /*0x1003df341*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 232 * v45, 8); /*0x1003df352*/
  return result; /*0x1003df357*/
}