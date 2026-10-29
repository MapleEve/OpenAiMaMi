// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason_for_snapshot::h1e92b44969b5c7fa; addr: 0x100265a00; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// C-level RelayManager::codex_config_stale_reason_for_snapshot call-set read only for router-catalog-config::RT-01; range 0x100265a00-0x10026695f; sha f019dbc8e267; session <审计会话>; not gate promotion
double __fastcall codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason_for_snapshot::h1e92b44969b5c7fa(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128i si128)
{
  unsigned __int8 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r15
  _QWORD *v16; // r14
  __int64 v17; // rsi
  char v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rdx
  _QWORD *v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  char v33; // bl
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned __int8 v36; // al
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rax
  _QWORD *v40; // r14
  unsigned __int64 v41; // r15
  _QWORD *v42; // rbx
  __int64 v43; // rsi
  _BYTE *v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rbx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // r13
  _BYTE *v55; // rdi
  __int64 v56; // rsi
  size_t v57; // rdx
  __int64 v58; // r15
  void *v59; // r14
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r15
  __int64 v63; // rbx
  void *v64; // r14
  const void *v65; // rax
  size_t v66; // rdx
  _QWORD *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rsi
  bool v70; // zf
  __int64 v71; // rbx
  __int64 v72; // r14
  const __m128i *v73; // r15
  const __m128i *v75; // r13
  int v76; // ebx
  __int64 v77; // rax
  __int64 v78; // rsi
  unsigned __int64 v79; // rax
  _QWORD *v80; // rbx
  __int64 v81; // rsi
  __int64 v82; // rsi
  __int64 v83; // rbx
  __int64 v84; // rdi
  __int64 v85; // rdx
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  _BYTE v89[72]; // [rsp+8h] [rbp-498h] BYREF
  __int64 v90; // [rsp+50h] [rbp-450h]
  void *v91; // [rsp+58h] [rbp-448h]
  size_t v92; // [rsp+60h] [rbp-440h]
  _QWORD v93[12]; // [rsp+88h] [rbp-418h] BYREF
  _QWORD v94[12]; // [rsp+E8h] [rbp-3B8h] BYREF
  _QWORD v95[3]; // [rsp+148h] [rbp-358h] BYREF
  _QWORD v96[3]; // [rsp+160h] [rbp-340h] BYREF
  _BYTE v97[248]; // [rsp+178h] [rbp-328h] BYREF
  __int64 v98; // [rsp+270h] [rbp-230h] BYREF
  __int64 v99; // [rsp+278h] [rbp-228h]
  __int64 v100; // [rsp+280h] [rbp-220h]
  __int64 v101; // [rsp+288h] [rbp-218h]
  _BYTE v102[248]; // [rsp+290h] [rbp-210h] BYREF
  _QWORD v103[12]; // [rsp+388h] [rbp-118h] BYREF
  unsigned __int64 v104; // [rsp+3E8h] [rbp-B8h] BYREF
  void *__s1; // [rsp+3F0h] [rbp-B0h]
  size_t __n; // [rsp+3F8h] [rbp-A8h]
  __int64 v107; // [rsp+400h] [rbp-A0h]
  const __m128i *v108; // [rsp+408h] [rbp-98h] BYREF
  _QWORD *v109; // [rsp+410h] [rbp-90h]
  __int64 v110; // [rsp+418h] [rbp-88h]
  __int64 v111; // [rsp+420h] [rbp-80h]
  __int64 v112; // [rsp+428h] [rbp-78h]
  __int64 v113; // [rsp+430h] [rbp-70h]
  __int64 v114; // [rsp+438h] [rbp-68h]
  __int64 v115; // [rsp+440h] [rbp-60h]
  __int64 v116; // [rsp+448h] [rbp-58h]
  __int64 v117; // [rsp+450h] [rbp-50h]
  __int64 v118; // [rsp+458h] [rbp-48h]
  __int64 v119; // [rsp+460h] [rbp-40h]
  char v120; // [rsp+46Fh] [rbp-31h] BYREF
  unsigned __int64 v121; // [rsp+470h] [rbp-30h]

  std::fs::read_to_string::inner::hcce2334f4117b5b3(v102); /*0x100265a3a*/
  if ( __OFSUB__(-*(_QWORD *)v102, 1) ) /*0x100265a49*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h9febf27e05e3c56c(v102); /*0x100265a55*/
    *a1 = 0x8000000000000000LL; /*0x100265a5a*/
    return *(double *)si128.i64; /*0x100265a5d*/
  }
  v121 = (unsigned __int64)a1; /*0x100265a62*/
  v115 = *(_QWORD *)v102; /*0x100265a66*/
  v7 = *(_BYTE *)(a4 + 364); /*0x100265a78*/
  v116 = *(_QWORD *)&v102[8]; /*0x100265a8e*/
  v114 = *(_QWORD *)&v102[16]; /*0x100265a92*/
  codexmate_lib::core::relay::invariants::RouterConfigSurface::parse::h382900189213d5d3(v89, a2 + 16); /*0x100265a96*/
  v117 = a3; /*0x100265a9b*/
  LOBYTE(v118) = v7; /*0x100265a9f*/
  v107 = a2 + 16; /*0x100265ab9*/
  codexmate_lib::core::relay::invariants::config_surface_violations_for_surface::hefb549d80f211d1a( /*0x100265ac3*/
    v102,
    a2 + 16,
    v7 ^ 1u,
    v89);
  v8 = *(_QWORD *)v102; /*0x100265ac8*/
  v9 = *(_QWORD *)&v102[8]; /*0x100265acf*/
  v10 = *(_QWORD *)&v102[16]; /*0x100265ad6*/
  v11 = 32LL * *(_QWORD *)&v102[16]; /*0x100265ae0*/
  v12 = *(_QWORD *)&v102[8]; /*0x100265ae4*/
  if ( *(_QWORD *)&v102[16] ) /*0x100265aea*/
  {
    v13 = **(_QWORD **)&v102[8]; /*0x100265aec*/
    if ( **(_QWORD **)&v102[8] != 0x8000000000000000LL ) /*0x100265afd*/
    {
      v25 = *(_QWORD *)(*(_QWORD *)&v102[8] + 8LL); /*0x100265c5d*/
      v26 = (_QWORD *)v121; /*0x100265c65*/
      *(_QWORD *)(v121 + 16) = *(_QWORD *)(*(_QWORD *)&v102[8] + 16LL); /*0x100265c69*/
      v26[1] = v25; /*0x100265c6d*/
      *v26 = v13; /*0x100265c71*/
      if ( v10 != 1 ) /*0x100265c78*/
      {
        v41 = (unsigned __int64)(v11 - 32) >> 5; /*0x100265ee9*/
        v42 = (_QWORD *)(v9 + 40); /*0x100265eed*/
        do /*0x100265f07*/
        {
          v43 = *(v42 - 1); /*0x100265f0d*/
          if ( v43 ) /*0x100265f14*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v43, 1); /*0x100265f1e*/
          v42 += 4; /*0x100265f00*/
          --v41; /*0x100265f04*/
        }
        while ( v41 ); /*0x100265f07*/
      }
      if ( !v8 ) /*0x100265c81*/
        goto LABEL_102; /*0x100265c81*/
      v27 = v9; /*0x100265c90*/
      v28 = 32 * v8; /*0x100265c93*/
LABEL_101:
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v28, 8); /*0x1002667ad*/
      goto LABEL_102; /*0x1002667ad*/
    }
    v12 = *(_QWORD *)&v102[8] + 32LL; /*0x100265b03*/
  }
  v14 = *(_QWORD *)&v102[8] + v11 - v12; /*0x100265b0a*/
  if ( v14 ) /*0x100265b0d*/
  {
    v15 = v14 >> 5; /*0x100265b0f*/
    v16 = (_QWORD *)(v12 + 8); /*0x100265b13*/
    do /*0x100265b27*/
    {
      v17 = *(v16 - 1); /*0x100265b29*/
      if ( v17 ) /*0x100265b30*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v16, v17, 1); /*0x100265b3a*/
      v16 += 4; /*0x100265b20*/
      --v15; /*0x100265b24*/
    }
    while ( v15 ); /*0x100265b27*/
  }
  if ( v8 ) /*0x100265b44*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 32 * v8, 8); /*0x100265b55*/
  if ( !(_BYTE)v118 ) /*0x100265b5e*/
  {
    *(_QWORD *)v121 = 0x8000000000000000LL; /*0x100265c55*/
    goto LABEL_102; /*0x100265c58*/
  }
  codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h7b6f0b04562ec9b3(&v98, a4); /*0x100265b6e*/
  v18 = *(_BYTE *)(a4 + 382); /*0x100265b73*/
  v19 = *(_QWORD *)(a4 + 8); /*0x100265b7b*/
  v20 = *(_QWORD *)(a4 + 16); /*0x100265b7f*/
  v21 = v99; /*0x100265b83*/
  v22 = v100; /*0x100265b8a*/
  v119 = v19; /*0x100265b94*/
  v101 = v20; /*0x100265b98*/
  if ( v18 ) /*0x100265b9f*/
  {
    v23 = *(_QWORD *)(a4 + 136); /*0x100265ba5*/
    v24 = *(_QWORD *)(a4 + 144); /*0x100265bac*/
    codexmate_lib::core::relay::models::active_codex_relay_model_slugs::h9a933a6b28cd2144(v102, v19, v20, v99); /*0x100265bc0*/
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h9e92be3795ad18c7( /*0x100265bd7*/
      v23,
      v23 + 72 * v24,
      v102);
    v113 = *(_QWORD *)&v102[40]; /*0x100265be3*/
    v112 = *(_QWORD *)&v102[32]; /*0x100265bee*/
    v111 = *(_QWORD *)&v102[24]; /*0x100265bf9*/
    v110 = *(_QWORD *)&v102[16]; /*0x100265c04*/
    v109 = *(_QWORD **)&v102[8]; /*0x100265c19*/
    v108 = *(const __m128i **)v102; /*0x100265c20*/
    v118 = v21; /*0x100265c38*/
    if ( v90 == 0x8000000000000000LL ) /*0x100265c3c*/
      goto LABEL_26; /*0x100265c3c*/
  }
  else
  {
    *(_QWORD *)v97 = v99; /*0x100265ca3*/
    *(_QWORD *)&v97[8] = v99 + 24 * v100; /*0x100265caa*/
    *(_QWORD *)&v97[16] = v19; /*0x100265cb1*/
    *(_QWORD *)&v97[24] = v20; /*0x100265cb8*/
    *(_QWORD *)&v97[32] = 0; /*0x100265cbf*/
    *(_QWORD *)&v97[72] = 0; /*0x100265cca*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100265cdc*/
    v30 = v29; /*0x100265cde*/
    if ( *(_BYTE *)(v29 + 16) == 1 ) /*0x100265ce5*/
    {
      v31 = *(_QWORD *)v29; /*0x100265ceb*/
      v32 = *(_QWORD *)(v30 + 8); /*0x100265cee*/
    }
    else
    {
      v31 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(*(double *)si128.i64); /*0x10026692a*/
      *(_QWORD *)v30 = v31; /*0x10026692f*/
      *(_QWORD *)(v30 + 8) = v32; /*0x100266932*/
      *(_BYTE *)(v30 + 16) = 1; /*0x100266936*/
    }
    *(_QWORD *)v30 = v31 + 1; /*0x100265cf6*/
    memset(&v103[1], 0, 24); /*0x100265d1c*/
    v103[0] = anon_8cf26f36e03587b9a54b9e7945b707cc_14; /*0x100265d2a*/
    v103[4] = v31; /*0x100265d31*/
    v103[5] = v32; /*0x100265d38*/
    qmemcpy(v102, v97, 0x70u); /*0x100265d55*/
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::ha626107b33dfca63( /*0x100265d62*/
      v103,
      v102);
    v108 = (const __m128i *)v103[0]; /*0x100265d75*/
    v109 = (_QWORD *)v103[1]; /*0x100265d7c*/
    v110 = v103[2]; /*0x100265d8a*/
    v111 = v103[3]; /*0x100265d98*/
    v112 = v103[4]; /*0x100265da3*/
    v113 = v103[5]; /*0x100265dae*/
    v118 = v21; /*0x100265dc3*/
    if ( v90 == 0x8000000000000000LL ) /*0x100265dc7*/
      goto LABEL_26; /*0x100265dc7*/
  }
  v103[0] = v91; /*0x100265ddb*/
  v103[1] = v92; /*0x100265de2*/
  if ( (unsigned __int8)codexmate_lib::core::relay::codex_writer::top_level_relay_model_requires_cleanup::h0ff617a739ff228d( /*0x100265df5*/
                          v91,
                          v92) )
  {
    *(_QWORD *)v97 = v103; /*0x100265e05*/
    *(_QWORD *)&v97[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100265e13*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v102, &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_346, v97); /*0x100265e2f*/
    v93[0] = *(_QWORD *)&v102[8]; /*0x100265e42*/
    v93[1] = *(_QWORD *)&v102[16]; /*0x100265e50*/
    if ( *(_QWORD *)v102 != 0x8000000000000000LL ) /*0x100265e64*/
    {
      v51 = (_QWORD *)v121; /*0x100266120*/
      *(_QWORD *)v121 = *(_QWORD *)v102; /*0x100266124*/
      v52 = v93[1]; /*0x10026612e*/
      v51[1] = v93[0]; /*0x100266135*/
      v51[2] = v52; /*0x100266139*/
      _RAX = (unsigned __int64)v109; /*0x10026613d*/
      if ( !v109 ) /*0x100266147*/
        goto LABEL_94; /*0x100266147*/
      goto LABEL_84; /*0x100266147*/
    }
  }
LABEL_26:
  v33 = v18 ^ 1; /*0x100265e6a*/
  v120 = v18 ^ 1; /*0x100265e70*/
  if ( v18 ) /*0x100265e76*/
    goto LABEL_27; /*0x100265e76*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x100265f34*/
    v97,
    v116,
    v114);
  qmemcpy(v103, &v97[8], sizeof(v103)); /*0x100265f53*/
  if ( *(_QWORD *)v97 == 2 ) /*0x100265f5a*/
  {
    qmemcpy(v93, v103, sizeof(v93)); /*0x100265f76*/
    v44 = v93; /*0x100265f85*/
  }
  else
  {
    memcpy(&v102[104], &v97[104], 0x90u); /*0x100266081*/
    qmemcpy(v93, v103, sizeof(v93)); /*0x10026609c*/
    *(_QWORD *)v102 = *(_QWORD *)v97; /*0x10026609f*/
    qmemcpy(&v102[8], v93, 0x60u); /*0x1002660b5*/
    _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::hdd6c0cc269136a64( /*0x1002660c6*/
      v97,
      v102);
    if ( *(_DWORD *)v97 == 2 ) /*0x1002660d2*/
    {
      v94[4] = *(_QWORD *)&v97[32]; /*0x1002660df*/
      v94[3] = *(_QWORD *)&v97[24]; /*0x1002660ed*/
      v94[2] = *(_QWORD *)&v97[16]; /*0x100266102*/
      v94[1] = *(_QWORD *)&v97[8]; /*0x100266109*/
      v94[0] = 2; /*0x100266110*/
      goto LABEL_52; /*0x10026611b*/
    }
    v44 = v97; /*0x100266237*/
  }
  qmemcpy(v94, v44, sizeof(v94)); /*0x100266243*/
LABEL_52:
  v54 = (_QWORD *)v121; /*0x100266246*/
  if ( LODWORD(v94[0]) == 2 ) /*0x100266251*/
  {
    *(_OWORD *)v97 = *(_OWORD *)((char *)&v94[1] + 1); /*0x100266265*/
    *(_QWORD *)&v97[16] = *(_QWORD *)((char *)&v94[3] + 1); /*0x100266281*/
    *(_QWORD *)&v97[23] = v94[4]; /*0x10026628f*/
    if ( LOBYTE(v94[1]) != 7 ) /*0x100266298*/
    {
      *(_QWORD *)&v102[24] = *(_QWORD *)&v97[23]; /*0x1002662a1*/
      *(_OWORD *)&v102[9] = *(_OWORD *)&v97[8]; /*0x1002662c4*/
      *(_QWORD *)&v102[1] = *(_QWORD *)v97; /*0x1002662cb*/
      v102[0] = v94[1]; /*0x1002662d2*/
      codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason_for_snapshot::_$u7b$$u7b$closure$u7d$$u7d$::hd3659133570fbfc0( /*0x1002662e6*/
        &v104,
        v102);
      v54 = (_QWORD *)v121; /*0x1002662eb*/
      goto LABEL_57; /*0x1002662ef*/
    }
  }
  else
  {
    core::ptr::drop_in_place$LT$toml..de..Error$GT$::h399e8931be6f2f49(v94); /*0x1002662f8*/
  }
  v104 = 0x8000000000000000LL; /*0x100266307*/
LABEL_57:
  v55 = v102; /*0x10026630e*/
  v56 = v119; /*0x100266315*/
  codexmate_lib::core::relay::native_catalog::revision::h7452ceaa93ef94cc((__int64)v102, v119, v101, v21, v22); /*0x100266326*/
  v119 = v104; /*0x10026633c*/
  if ( v104 == 0x8000000000000000LL /*0x100266369*/
    || (v57 = __n, __n != *(_QWORD *)&v102[16])
    || (v58 = *(_QWORD *)&v102[8],
        v59 = __s1,
        v55 = __s1,
        v56 = *(_QWORD *)&v102[8],
        memcmp(__s1, *(const void **)&v102[8], __n)) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v55, v56, v57); /*0x100266376*/
    v60 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(51, 1); /*0x100266385*/
    if ( !v60 ) /*0x10026638d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 51); /*0x100266949*/
    *(_QWORD *)(v60 + 40) = 0x80B8E48DB8E4AEBDLL; /*0x10026639d*/
    *(_QWORD *)(v60 + 32) = 0xE78D85E98D89E593LL; /*0x1002663ab*/
    *(_QWORD *)(v60 + 24) = 0xBDE58EB8E4AC9CE6LL; /*0x1002663b9*/
    *(_QWORD *)(v60 + 16) = 0x8889E78789E7A18DLL; /*0x1002663c7*/
    *(_QWORD *)(v60 + 8) = 0xE5849AE795BDE5AELL; /*0x1002663d5*/
    *(_QWORD *)v60 = 0x9BE79F94E79F8EE5LL; /*0x1002663e3*/
    *(_DWORD *)(v60 + 47) = -1266161536; /*0x1002663e6*/
    *v54 = 51; /*0x1002663ed*/
    v54[1] = v60; /*0x1002663f5*/
    v54[2] = 51; /*0x1002663f9*/
    if ( *(_QWORD *)v102 ) /*0x10026640b*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v102[8], *(_QWORD *)v102, 1); /*0x100266419*/
    v21 = v118; /*0x10026642f*/
    if ( v119 != 0x8000000000000000LL && v119 ) /*0x10026643c*/
    {
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v119, 1); /*0x10026644e*/
      _RAX = (unsigned __int64)v109; /*0x100266453*/
      if ( !v109 ) /*0x10026645d*/
        goto LABEL_94; /*0x10026645d*/
      goto LABEL_84; /*0x10026645d*/
    }
    goto LABEL_83; /*0x10026643c*/
  }
  if ( *(_QWORD *)v102 ) /*0x10026653b*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, *(_QWORD *)v102, 1); /*0x100266545*/
  if ( v119 ) /*0x100266551*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v119, 1); /*0x10026655b*/
  v21 = v118; /*0x100266560*/
LABEL_27:
  v34 = v116; /*0x100265e7c*/
  v35 = v114; /*0x100265e80*/
  v36 = codexmate_lib::core::relay::codex_writer::router_provider_requires_openai_auth::ha5c6640cb109f2e9(v116, v114); /*0x100265e84*/
  if ( v36 == 2 ) /*0x100265e8b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, v35, v37); /*0x100265e91*/
    v38 = 6; /*0x100265e96*/
    v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100265ea5*/
    v40 = (_QWORD *)v121; /*0x100265ead*/
    if ( v39 ) /*0x100265eb1*/
    {
      *(_WORD *)(v39 + 4) = -20060; /*0x100265eb7*/
      *(_DWORD *)v39 = -440746777; /*0x100265ebd*/
      *(_QWORD *)v97 = 6; /*0x100265ec3*/
      *(_QWORD *)&v97[8] = v39; /*0x100265ece*/
      *(_QWORD *)&v97[16] = 6; /*0x100265ed5*/
      goto LABEL_46; /*0x100265ee0*/
    }
LABEL_119:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v38); /*0x100266950*/
  }
  if ( v36 != v33 ) /*0x100265f8f*/
  {
    codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason_for_snapshot::_$u7b$$u7b$closure$u7d$$u7d$::hc0a98e9f991953d7( /*0x10026615c*/
      v102,
      v36);
    *(_QWORD *)&v97[16] = *(_QWORD *)&v102[16]; /*0x100266168*/
    *(_QWORD *)&v97[8] = *(_QWORD *)&v102[8]; /*0x10026617d*/
    *(_QWORD *)v97 = *(_QWORD *)v102; /*0x100266184*/
    v40 = (_QWORD *)v121; /*0x10026618b*/
LABEL_46:
    *(_QWORD *)v102 = &v120; /*0x10026618f*/
    *(_QWORD *)&v102[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1002661a1*/
    *(_QWORD *)&v102[16] = v97; /*0x1002661af*/
    *(_QWORD *)&v102[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002661bd*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v96, &unk_1018F3B21, v102); /*0x1002661d9*/
    if ( *(_QWORD *)v97 ) /*0x1002661e8*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v97[8], *(_QWORD *)v97, 1); /*0x1002661f6*/
    v40[2] = v96[2]; /*0x100266202*/
    v53 = v96[0]; /*0x100266206*/
    v40[1] = v96[1]; /*0x100266214*/
    *v40 = v53; /*0x100266218*/
    _RAX = (unsigned __int64)v109; /*0x10026621b*/
    if ( !v109 ) /*0x100266225*/
      goto LABEL_94; /*0x100266225*/
    goto LABEL_84; /*0x100266225*/
  }
  v45 = v117; /*0x100265f9c*/
  codexmate_lib::core::relay::manager::RelayManager::proxy_root_url::h8ef7903044d12d1d(v102, v117); /*0x100265fa0*/
  v47 = *(_QWORD *)v102; /*0x100265fa5*/
  if ( *(_QWORD *)v102 == 0x8000000000000000LL ) /*0x100265fb9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v102, v45, v46); /*0x100265fbf*/
    v38 = 54; /*0x100265fc4*/
    v48 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x100265fd3*/
    v49 = (_QWORD *)v121; /*0x100265fdb*/
    if ( !v48 ) /*0x100265fdf*/
      goto LABEL_119; /*0x100265fdf*/
    *(_QWORD *)((char *)v48 + 46) = 0x8CA1E890BFE8AA9CLL; /*0x100265fef*/
    v48[5] = 0xAA9CE68690E7A3BBLL; /*0x100265ffd*/
    v48[4] = 0xE4B09CE5AC9CE686LL; /*0x10026600b*/
    v48[3] = 0xBDE48CBCEFAF90E5LL; /*0x100266019*/
    v48[2] = 0x80BCE5BAB8E48180LL; /*0x100266027*/
    v48[1] = 0xE6B68AE7B194E7AFLL; /*0x100266035*/
    *v48 = 0xB7E8BD83E8BA99E6LL; /*0x100266043*/
    *v49 = 54; /*0x100266046*/
    v49[1] = v48; /*0x10026604d*/
    v49[2] = 54; /*0x100266051*/
    _RAX = (unsigned __int64)v109; /*0x100266059*/
    if ( !v109 ) /*0x100266063*/
      goto LABEL_94; /*0x100266063*/
    goto LABEL_84; /*0x100266063*/
  }
  v119 = *(_QWORD *)&v102[8]; /*0x100266476*/
  v93[0] = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h9c9af8e8c9d69b0e( /*0x100266484*/
             *(_QWORD *)&v102[8],
             *(_QWORD *)&v102[16],
             47);
  v93[1] = v61; /*0x10026648b*/
  *(_QWORD *)v97 = v93; /*0x100266499*/
  *(_QWORD *)&v97[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1002664a7*/
  v117 = v47; /*0x1002664c3*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v102, &unk_1018F3A65, v97); /*0x1002664c7*/
  v103[0] = *(_QWORD *)v102; /*0x1002664da*/
  v103[1] = *(_QWORD *)&v102[8]; /*0x1002664e1*/
  v103[2] = *(_QWORD *)&v102[16]; /*0x1002664ef*/
  codexmate_lib::core::relay::codex_writer::router_provider_base_url::he5f6fb0428e8d4e0(v97, v116, v114); /*0x100266505*/
  v62 = *(_QWORD *)v97; /*0x10026651b*/
  if ( *(_QWORD *)v97 == 0x8000000000000000LL ) /*0x100266521*/
  {
    v63 = 6; /*0x100266523*/
    v64 = &unk_1016EBECC; /*0x100266528*/
LABEL_76:
    v93[0] = v64; /*0x1002665a7*/
    v93[1] = v63; /*0x1002665ae*/
    *(_QWORD *)v102 = v103; /*0x1002665bc*/
    *(_QWORD *)&v102[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002665ca*/
    *(_QWORD *)&v102[16] = v93; /*0x1002665d8*/
    *(_QWORD *)&v102[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1002665df*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v95, &unk_1018F3ADE, v102); /*0x1002665fb*/
    v67 = (_QWORD *)v121; /*0x100266607*/
    *(_QWORD *)(v121 + 16) = v95[2]; /*0x10026660b*/
    v68 = v95[0]; /*0x10026660f*/
    v67[1] = v95[1]; /*0x10026661d*/
    *v67 = v68; /*0x100266621*/
    v69 = v62; /*0x10026662e*/
    v70 = v62 == 0x8000000000000000LL; /*0x100266631*/
    v21 = v118; /*0x100266634*/
    v71 = v117; /*0x100266638*/
    if ( !v70 && v69 ) /*0x100266641*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v97[8], v69, 1); /*0x10026664f*/
    if ( v103[0] ) /*0x10026665e*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103[1], v103[0], 1); /*0x10026666c*/
    if ( v71 ) /*0x100266674*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v71, 1); /*0x100266682*/
LABEL_83:
    _RAX = (unsigned __int64)v109; /*0x100266687*/
    if ( !v109 ) /*0x100266691*/
      goto LABEL_94; /*0x100266691*/
    goto LABEL_84; /*0x100266691*/
  }
  v64 = *(void **)&v97[8]; /*0x100266569*/
  v63 = *(_QWORD *)&v97[16]; /*0x100266570*/
  v65 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h9c9af8e8c9d69b0e( /*0x100266582*/
                        *(_QWORD *)&v97[8],
                        *(_QWORD *)&v97[16],
                        47);
  if ( v66 != v103[2] || memcmp(v65, (const void *)v103[1], v66) ) /*0x10026659a*/
    goto LABEL_76; /*0x1002665a1*/
  if ( v62 ) /*0x1002667ea*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v62, 1); /*0x1002667f7*/
  v82 = v103[0]; /*0x1002667fc*/
  v21 = v118; /*0x100266806*/
  v83 = v117; /*0x10026680a*/
  if ( v103[0] ) /*0x10026680e*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103[1], v103[0], 1); /*0x10026681c*/
  if ( v83 ) /*0x100266824*/
  {
    v82 = v83; /*0x10026682f*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v83, 1); /*0x100266832*/
  }
  v84 = v107; /*0x100266837*/
  if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::hf8010aa17e6a875f(v107) /*0x10026684e*/
    || (v84 = v107,
        (unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::haf5e03d0b0fad410(v107)) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v84, v82, v85); /*0x10026685b*/
    v38 = 45; /*0x100266860*/
    v86 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1); /*0x10026686f*/
    v87 = (_QWORD *)v121; /*0x100266877*/
    if ( !v86 ) /*0x10026687b*/
      goto LABEL_119; /*0x10026687b*/
    *(_QWORD *)((char *)v86 + 37) = 0x9995E78BAEE681AFLL; /*0x10026688b*/
    v86[4] = 0xE681AFE8A4AEE8A1LL; /*0x100266899*/
    v86[3] = 0xAEE7978FE58889E7LL; /*0x1002668a7*/
    v86[2] = 0xA797E6AB90E5858CLL; /*0x1002668b5*/
    v86[1] = 0xE58DBBE4B194E7AFLL; /*0x1002668c3*/
    *v86 = 0xB7E8BD83E8BA99E6LL; /*0x1002668d1*/
    *v87 = 45; /*0x1002668d4*/
    v87[1] = v86; /*0x1002668db*/
    v87[2] = 45; /*0x1002668df*/
    _RAX = (unsigned __int64)v109; /*0x1002668e7*/
    if ( !v109 ) /*0x1002668f1*/
    {
LABEL_94:
      if ( v22 ) /*0x100266760*/
      {
        v80 = (_QWORD *)(v21 + 8); /*0x100266762*/
        do /*0x100266777*/
        {
          v81 = *(v80 - 1); /*0x100266779*/
          if ( v81 ) /*0x100266780*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v80, v81, 1); /*0x10026678a*/
          v80 += 3; /*0x100266770*/
          --v22; /*0x100266774*/
        }
        while ( v22 ); /*0x100266777*/
      }
      if ( !v98 ) /*0x10026679b*/
        goto LABEL_102; /*0x10026679b*/
      v28 = 24 * v98; /*0x1002667a1*/
      v27 = v21; /*0x1002667aa*/
      goto LABEL_101; /*0x1002667aa*/
    }
LABEL_84:
    v121 = _RAX; /*0x100266697*/
    v72 = v111; /*0x10026669b*/
    if ( v111 ) /*0x1002666a2*/
    {
      v73 = v108; /*0x1002666a8*/
      si128 = _mm_load_si128(v108); /*0x1002666af*/
      _EBX = ~_mm_movemask_epi8(si128); /*0x1002666b8*/
      v75 = v108 + 1; /*0x1002666ba*/
      do /*0x1002666cd*/
      {
        if ( !(_WORD)_EBX ) /*0x1002666d2*/
        {
          do /*0x1002666fb*/
          {
            si128 = _mm_load_si128(v75); /*0x1002666e0*/
            v76 = _mm_movemask_epi8(si128); /*0x1002666e6*/
            v73 -= 24; /*0x1002666ea*/
            ++v75; /*0x1002666f1*/
          }
          while ( v76 == 0xFFFF ); /*0x1002666fb*/
          _EBX = ~v76; /*0x1002666fd*/
        }
        __asm { tzcnt eax, ebx } /*0x1002666ff*/
        v77 = -3LL * _RAX; /*0x100266706*/
        v78 = *((_QWORD *)&v73[-1] + v77 - 1); /*0x10026670a*/
        if ( v78 ) /*0x100266712*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[-1].i64[v77], v78, 1); /*0x100266721*/
        --v72; /*0x1002666c0*/
        _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x1002666c6*/
        _EBX &= _EBX - 1; /*0x1002666c8*/
      }
      while ( v72 ); /*0x1002666cd*/
    }
    v79 = (24 * v121 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100266738*/
    v21 = v118; /*0x100266743*/
    if ( v79 + v121 != -17 ) /*0x100266747*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v108 - v79, v79 + v121 + 17, 16); /*0x100266758*/
    goto LABEL_94; /*0x100266758*/
  }
  *(_QWORD *)v121 = 0x8000000000000000LL; /*0x10026690a*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87dcd97a83e749a4(&v108); /*0x100266914*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::hd518b13fa1d3b615(&v98); /*0x100266920*/
LABEL_102:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$::hf6b6511c4172e4bf(v89); /*0x1002667b2*/
  if ( v115 ) /*0x1002667c5*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v115, 1); /*0x1002667d0*/
  return *(double *)si128.i64; /*0x1002667d5*/
}
