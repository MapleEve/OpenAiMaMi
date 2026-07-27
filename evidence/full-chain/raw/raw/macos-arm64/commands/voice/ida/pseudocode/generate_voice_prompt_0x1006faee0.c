// __ZN13codexmate_lib8commands5voice21generate_voice_prompt28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006faee0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::voice::generate_voice_prompt::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6a7a9cffa33beec6(
        void *a1,
        __int64 a2)
{
  int v2; // r12d
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rsi
  char v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rsi
  bool v28; // zf
  __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 (__fastcall **v34)(); // r15
  void *v35; // rax
  char v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rsi
  _BYTE v42[88]; // [rsp+8h] [rbp-918h] BYREF
  _QWORD v43[80]; // [rsp+60h] [rbp-8C0h] BYREF
  __int64 v44[90]; // [rsp+2E0h] [rbp-640h] BYREF
  _OWORD v45[40]; // [rsp+5B0h] [rbp-370h] BYREF
  __int64 v46; // [rsp+838h] [rbp-E8h]
  __int64 v47; // [rsp+840h] [rbp-E0h]
  __int64 v48; // [rsp+848h] [rbp-D8h]
  __int64 v49; // [rsp+850h] [rbp-D0h]
  __int64 v50; // [rsp+858h] [rbp-C8h]
  __int64 v51; // [rsp+860h] [rbp-C0h]
  __int64 v52; // [rsp+868h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+870h] [rbp-B0h]
  __int64 v54; // [rsp+878h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+880h] [rbp-A0h]
  __int64 v56; // [rsp+888h] [rbp-98h]
  __int64 v57; // [rsp+890h] [rbp-90h] BYREF
  __int64 (__fastcall **v58)(); // [rsp+898h] [rbp-88h]
  __int64 v59; // [rsp+8A0h] [rbp-80h]
  __int64 v60; // [rsp+8A8h] [rbp-78h] BYREF
  __int64 v61; // [rsp+8B0h] [rbp-70h]
  __int64 v62; // [rsp+8B8h] [rbp-68h]
  __int64 *v63; // [rsp+8C0h] [rbp-60h]
  __int64 *v64; // [rsp+8C8h] [rbp-58h]
  __int64 v65; // [rsp+8D0h] [rbp-50h]
  __int64 v66; // [rsp+8D8h] [rbp-48h]
  void *v67; // [rsp+8E0h] [rbp-40h]
  __int64 v68; // [rsp+8E8h] [rbp-38h]
  __int64 v69; // [rsp+8F0h] [rbp-30h]

  v67 = a1; /*0x1006faef7*/
  v63 = (__int64 *)(a2 + 960); /*0x1006faf0c*/
  v64 = (__int64 *)(a2 + 984); /*0x1006faf17*/
  LOBYTE(v2) = 1; /*0x1006faf24*/
  v4 = 0x8000000000000000LL; /*0x1006faf27*/
  if ( !__OFSUB__(0, *(_QWORD *)(a2 + 960)) && *(_QWORD *)(a2 + 984) != 0x8000000000000000LL ) /*0x1006faf37*/
  {
    v4 = *(_QWORD *)(a2 + 1008); /*0x1006faf3d*/
    if ( v4 == 0x8000000000000000LL ) /*0x1006faf47*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1006faf49*/
      v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1006faf58*/
      if ( !v5 ) /*0x1006faf60*/
      {
        LODWORD(v69) = 0; /*0x1006fb835*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1006fb849*/
      }
      v68 = 6; /*0x1006faf6b*/
      *(_WORD *)(v5 + 4) = 26977; /*0x1006faf6f*/
      v69 = v5; /*0x1006faf75*/
      *(_DWORD *)v5 = 1852141679; /*0x1006faf79*/
      v4 = 6; /*0x1006faf7f*/
    }
    else
    {
      v69 = *(_QWORD *)(a2 + 1016); /*0x1006faf8e*/
      v68 = *(_QWORD *)(a2 + 1024); /*0x1006faf99*/
    }
    v6 = *(_QWORD *)(a2 + 1032); /*0x1006faf9d*/
    v7 = *(_QWORD *)(a2 + 1048); /*0x1006fafa9*/
    v8 = 1; /*0x1006fafb0*/
    if ( v6 == 0x8000000000000000LL ) /*0x1006fafb6*/
    {
      v7 = 0; /*0x1006fafbe*/
      v6 = 0; /*0x1006fafc2*/
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 1040); /*0x1006fafb6*/
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v43, v63); /*0x1006fafd1*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v45, v64); /*0x1006fafe1*/
    v44[0] = v4; /*0x1006fafe6*/
    v44[1] = v69; /*0x1006faff1*/
    v44[2] = v68; /*0x1006faffc*/
    v44[3] = v6; /*0x1006fb003*/
    v44[4] = v8; /*0x1006fb00a*/
    v44[5] = v7; /*0x1006fb011*/
    v44[6] = v43[0]; /*0x1006fb026*/
    v44[7] = v43[1]; /*0x1006fb02d*/
    v44[8] = v43[2]; /*0x1006fb03b*/
    *(_OWORD *)&v44[9] = v45[0]; /*0x1006fb050*/
    v44[11] = *(_QWORD *)&v45[1]; /*0x1006fb065*/
    if ( (unsigned __int8)codexmate_lib::core::voice::llm::LlmConfig::is_configured::h23c56cc13cc1dc96(v44) ) /*0x1006fb073*/
    {
      qmemcpy(v42, &v44[1], sizeof(v42)); /*0x1006fb099*/
    }
    else
    {
      v65 = v44[6]; /*0x1006fb0a8*/
      v53 = v44[7]; /*0x1006fb0b3*/
      v66 = v44[10]; /*0x1006fb0cc*/
      v68 = v44[9]; /*0x1006fb0cc*/
      if ( v4 ) /*0x1006fb0d3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v4, 1); /*0x1006fb0e1*/
      if ( v6 ) /*0x1006fb0e9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v6, 1); /*0x1006fb0f6*/
      if ( v65 ) /*0x1006fb102*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v65, 1); /*0x1006fb110*/
      v4 = 0x8000000000000000LL; /*0x1006fb115*/
      if ( v68 ) /*0x1006fb11f*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v68, 1); /*0x1006fb12a*/
        v4 = 0x8000000000000000LL; /*0x1006fb12f*/
      }
    }
    v2 = 0; /*0x1006fb132*/
  }
  v68 = a2 + 16; /*0x1006fb139*/
  v52 = a2 + 16; /*0x1006fb13d*/
  *(_QWORD *)&v45[2] = *(_QWORD *)(a2 + 928); /*0x1006fb152*/
  v9 = *(_QWORD *)(a2 + 912); /*0x1006fb159*/
  *((_QWORD *)&v45[1] + 1) = *(_QWORD *)(a2 + 920); /*0x1006fb167*/
  *(_QWORD *)&v45[1] = v9; /*0x1006fb16e*/
  *((_QWORD *)&v45[3] + 1) = *(_QWORD *)(a2 + 952); /*0x1006fb17c*/
  v10 = *(_QWORD *)(a2 + 936); /*0x1006fb183*/
  *(_QWORD *)&v45[3] = *(_QWORD *)(a2 + 944); /*0x1006fb191*/
  *((_QWORD *)&v45[2] + 1) = v10; /*0x1006fb198*/
  *(_QWORD *)&v45[5] = *(_QWORD *)(a2 + 1072); /*0x1006fb1a6*/
  v11 = *(_QWORD *)(a2 + 1056); /*0x1006fb1ad*/
  *((_QWORD *)&v45[4] + 1) = *(_QWORD *)(a2 + 1064); /*0x1006fb1bb*/
  *(_QWORD *)&v45[4] = v11; /*0x1006fb1c2*/
  v12 = *(_QWORD *)(a2 + 1088); /*0x1006fb1d0*/
  *((_QWORD *)&v45[5] + 1) = *(_QWORD *)(a2 + 1080); /*0x1006fb1d7*/
  *(_QWORD *)&v45[6] = v12; /*0x1006fb1de*/
  *((_QWORD *)&v45[6] + 1) = *(_QWORD *)(a2 + 1096); /*0x1006fb1ec*/
  v13 = *(_QWORD *)(a2 + 1104); /*0x1006fb1f3*/
  *((_QWORD *)&v45[7] + 1) = *(_QWORD *)(a2 + 1112); /*0x1006fb201*/
  *(_QWORD *)&v45[8] = *(_QWORD *)(a2 + 1120); /*0x1006fb20f*/
  *(_QWORD *)&v45[7] = v13; /*0x1006fb216*/
  v14 = *(_QWORD *)(a2 + 1136); /*0x1006fb224*/
  *((_QWORD *)&v45[8] + 1) = *(_QWORD *)(a2 + 1128); /*0x1006fb22b*/
  *(_QWORD *)&v45[9] = v14; /*0x1006fb232*/
  *((_QWORD *)&v45[9] + 1) = *(_QWORD *)(a2 + 1144); /*0x1006fb240*/
  v15 = *(_QWORD *)(a2 + 1160); /*0x1006fb24e*/
  *(_QWORD *)&v45[10] = *(_QWORD *)(a2 + 1152); /*0x1006fb255*/
  *((_QWORD *)&v45[10] + 1) = v15; /*0x1006fb25c*/
  *(_QWORD *)&v45[11] = *(_QWORD *)(a2 + 1168); /*0x1006fb26a*/
  v16 = *(_QWORD *)(a2 + 1184); /*0x1006fb278*/
  *((_QWORD *)&v45[11] + 1) = *(_QWORD *)(a2 + 1176); /*0x1006fb27f*/
  *((_QWORD *)&v45[12] + 1) = *(_QWORD *)(a2 + 1192); /*0x1006fb28d*/
  *(_QWORD *)&v45[12] = v16; /*0x1006fb294*/
  LOBYTE(v13) = *(_BYTE *)(a2 + 1320); /*0x1006fb29b*/
  *(_QWORD *)&v45[20] = *(_QWORD *)(a2 + 1216); /*0x1006fb2a9*/
  v17 = *(_QWORD *)(a2 + 1200); /*0x1006fb2b0*/
  *((_QWORD *)&v45[19] + 1) = *(_QWORD *)(a2 + 1208); /*0x1006fb2be*/
  *(_QWORD *)&v45[19] = v17; /*0x1006fb2c5*/
  v18 = *(_QWORD *)(a2 + 1232); /*0x1006fb2d3*/
  *((_QWORD *)&v45[20] + 1) = *(_QWORD *)(a2 + 1224); /*0x1006fb2da*/
  *(_QWORD *)&v45[21] = v18; /*0x1006fb2e1*/
  *((_QWORD *)&v45[21] + 1) = *(_QWORD *)(a2 + 1240); /*0x1006fb2ef*/
  v19 = *(_QWORD *)(a2 + 1256); /*0x1006fb2fd*/
  *(_QWORD *)&v45[22] = *(_QWORD *)(a2 + 1248); /*0x1006fb304*/
  *((_QWORD *)&v45[22] + 1) = v19; /*0x1006fb30b*/
  *(_QWORD *)&v45[23] = *(_QWORD *)(a2 + 1264); /*0x1006fb319*/
  v20 = *(_QWORD *)(a2 + 1280); /*0x1006fb327*/
  *((_QWORD *)&v45[23] + 1) = *(_QWORD *)(a2 + 1272); /*0x1006fb32e*/
  *(_QWORD *)&v45[24] = v20; /*0x1006fb335*/
  *((_QWORD *)&v45[24] + 1) = *(_QWORD *)(a2 + 1288); /*0x1006fb343*/
  v21 = *(_QWORD *)(a2 + 1304); /*0x1006fb351*/
  *(_QWORD *)&v45[25] = *(_QWORD *)(a2 + 1296); /*0x1006fb358*/
  *((_QWORD *)&v45[25] + 1) = v21; /*0x1006fb35f*/
  *(_QWORD *)&v45[26] = *(_QWORD *)(a2 + 1312); /*0x1006fb36d*/
  BYTE8(v45[26]) = v13; /*0x1006fb374*/
  *(_QWORD *)&v45[13] = v4; /*0x1006fb37a*/
  qmemcpy((char *)&v45[13] + 8, v42, 0x58u); /*0x1006fb394*/
  v45[0] = *(_OWORD *)a2; /*0x1006fb39a*/
  LODWORD(v69) = v2; /*0x1006fb3c0*/
  codexmate_lib::core::voice::workspace::generate_prompt::hcca4b46aeb1f0fb5(v44, a2 + 168, v45, &v52, &unk_1019692B0); /*0x1006fb3ca*/
  if ( v44[0] == 2 ) /*0x1006fb3e1*/
  {
    qmemcpy(v45, &v44[1], 0x60u); /*0x1006fb3f9*/
    v60 = 0; /*0x1006fb3fc*/
    v61 = 1; /*0x1006fb404*/
    v62 = 0; /*0x1006fb40c*/
    v59 = 1610612768; /*0x1006fb414*/
    v57 = (__int64)&v60; /*0x1006fb420*/
    v58 = &off_101969DD0; /*0x1006fb42e*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006fb443*/
                            v45,
                            &v57) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v54, &unk_101969E38, &off_101969E00); /*0x1006fb81a*/
    v54 = v60; /*0x1006fb458*/
    v55 = v61; /*0x1006fb45f*/
    v56 = v62; /*0x1006fb46a*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v44[1]); /*0x1006fb477*/
    v22 = v54; /*0x1006fb483*/
    v23 = v55; /*0x1006fb48a*/
    v46 = v54; /*0x1006fb491*/
    v47 = v55; /*0x1006fb498*/
    v48 = v56; /*0x1006fb49f*/
    v24 = v67; /*0x1006fb4a6*/
    *((_QWORD *)v67 + 3) = v56; /*0x1006fb4aa*/
    v24[2] = v23; /*0x1006fb4ae*/
    v24[1] = v22; /*0x1006fb4b2*/
    *v24 = 2; /*0x1006fb4b6*/
LABEL_43:
    v36 = v69; /*0x1006fb742*/
    v29 = a2 + 168; /*0x1006fb746*/
    v37 = *v63; /*0x1006fb74d*/
    if ( *v63 != 0x8000000000000000LL && v37 ) /*0x1006fb758*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 968), v37, 1); /*0x1006fb766*/
    v38 = *v64; /*0x1006fb76f*/
    if ( *v64 != 0x8000000000000000LL && v38 ) /*0x1006fb77a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 992), v38, 1); /*0x1006fb788*/
    if ( v36 ) /*0x1006fb790*/
    {
      v39 = *(_QWORD *)(a2 + 1008); /*0x1006fb792*/
      if ( v39 != 0x8000000000000000LL && v39 ) /*0x1006fb7a1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 1016), v39, 1); /*0x1006fb7af*/
      v40 = *(_QWORD *)(a2 + 1032); /*0x1006fb7b4*/
      if ( v40 != 0x8000000000000000LL && v40 ) /*0x1006fb7c3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 1040), v40, 1); /*0x1006fb7d1*/
    }
    goto LABEL_56; /*0x1006fb7d1*/
  }
  v51 = v44[3]; /*0x1006fb4c6*/
  v50 = v44[2]; /*0x1006fb4d4*/
  v49 = v44[1]; /*0x1006fb4db*/
  memcpy(&v43[4], &v44[4], 0x260u); /*0x1006fb4f5*/
  v48 = v44[3]; /*0x1006fb501*/
  v43[1] = v44[1]; /*0x1006fb516*/
  v43[2] = v44[2]; /*0x1006fb51d*/
  v43[3] = v44[3]; /*0x1006fb524*/
  v43[0] = v44[0]; /*0x1006fb52b*/
  if ( v43[77] != 0x8000000000000000LL ) /*0x1006fb539*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v44, &v43[77]); /*0x1006fb62e*/
    v65 = v44[0]; /*0x1006fb63a*/
    v66 = v44[1]; /*0x1006fb645*/
    v32 = v44[2]; /*0x1006fb649*/
    memcpy(v45, v43, sizeof(v45)); /*0x1006fb663*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v43); /*0x1006fb668*/
    v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8); /*0x1006fb677*/
    if ( !v33 ) /*0x1006fb67f*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x1006fb82b*/
    v34 = (__int64 (__fastcall **)())v33; /*0x1006fb685*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(48, 8); /*0x1006fb688*/
    v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x1006fb697*/
    if ( !v35 ) /*0x1006fb69f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x1006fb85a*/
    qmemcpy(v35, "voice_processing_fallback", 25); /*0x1006fb6cb*/
    v34[3] = (__int64 (__fastcall *)())v65; /*0x1006fb6d6*/
    v34[4] = (__int64 (__fastcall *)())v66; /*0x1006fb6de*/
    v34[5] = (__int64 (__fastcall *)())v32; /*0x1006fb6e2*/
    *v34 = (__int64 (__fastcall *)())25; /*0x1006fb6e6*/
    v34[1] = (__int64 (__fastcall *)())v35; /*0x1006fb6ed*/
    v34[2] = (__int64 (__fastcall *)())25; /*0x1006fb6f1*/
    v57 = 1; /*0x1006fb6f9*/
    v58 = v34; /*0x1006fb704*/
    v59 = 1; /*0x1006fb70b*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h1844899531e42e93(v44, v45, &v57); /*0x1006fb728*/
    memcpy(v67, v44, 0x2D0u); /*0x1006fb73d*/
    goto LABEL_43; /*0x1006fb73d*/
  }
  memcpy(v45, v43, sizeof(v45)); /*0x1006fb555*/
  v25 = v69; /*0x1006fb564*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h1eeed7616f7686d3(v44, v45); /*0x1006fb568*/
  memcpy(v67, v44, 0x2D0u); /*0x1006fb57d*/
  v26 = *v63; /*0x1006fb586*/
  if ( *v63 != 0x8000000000000000LL && v26 ) /*0x1006fb591*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 968), v26, 1); /*0x1006fb59f*/
  v27 = *v64; /*0x1006fb5a8*/
  if ( *v64 != 0x8000000000000000LL && v27 ) /*0x1006fb5b3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 992), v27, 1); /*0x1006fb5c1*/
  v28 = v25 == 0; /*0x1006fb5c6*/
  v29 = a2 + 168; /*0x1006fb5c9*/
  if ( !v28 ) /*0x1006fb5cc*/
  {
    v30 = *(_QWORD *)(a2 + 1008); /*0x1006fb5ce*/
    if ( v30 != 0x8000000000000000LL && v30 ) /*0x1006fb5dd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 1016), v30, 1); /*0x1006fb5eb*/
    v31 = *(_QWORD *)(a2 + 1032); /*0x1006fb5f0*/
    if ( v31 != 0x8000000000000000LL && v31 ) /*0x1006fb5ff*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 1040), v31, 1); /*0x1006fb60d*/
  }
LABEL_56:
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v68); /*0x1006fb7d6*/
  return core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v29); /*0x1006fb7e7*/
}