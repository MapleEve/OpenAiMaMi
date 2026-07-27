// __ZN13codexmate_lib4core5relay16codex_diagnostic27fix_legacy_migrated_threads @ 0x100503ef0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_legacy_migrated_threads::h15906ac7b0e2f32f(
        __int64 a1,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r14
  void *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // r14
  void *v9; // rax
  void *v10; // r15
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  size_t v15; // r12
  __int64 v16; // r15
  const void *v17; // r13
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // r14
  void *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int128 v26; // kr20_16
  __int64 v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // r14
  void *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  _QWORD *v40; // r15
  void *v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // r15
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  _QWORD *v51; // r14
  void *v52; // rax
  __int64 v53; // rax
  _QWORD v54[3]; // [rsp+8h] [rbp-1D8h] BYREF
  _QWORD v55[3]; // [rsp+20h] [rbp-1C0h] BYREF
  _QWORD v56[3]; // [rsp+38h] [rbp-1A8h] BYREF
  __int128 v57; // [rsp+50h] [rbp-190h] BYREF
  _OWORD v58[6]; // [rsp+60h] [rbp-180h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-120h] BYREF
  _QWORD v60[12]; // [rsp+F8h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+158h] [rbp-88h] BYREF
  __int64 v62; // [rsp+160h] [rbp-80h]
  __int64 v63; // [rsp+168h] [rbp-78h]
  __int128 v64; // [rsp+170h] [rbp-70h]
  __int64 v65; // [rsp+180h] [rbp-60h]
  __int128 v66; // [rsp+188h] [rbp-58h] BYREF
  __int64 v67; // [rsp+198h] [rbp-48h]
  __int64 (__fastcall *v68)(); // [rsp+1A0h] [rbp-40h]
  __int64 v69; // [rsp+1A8h] [rbp-38h]
  __int64 v70; // [rsp+1B0h] [rbp-30h]

  if ( (a3 & 1) != 0 ) /*0x100503f0a*/
  {
    *(_QWORD *)&v66 = 0; /*0x100503f10*/
    *((_QWORD *)&v66 + 1) = 8; /*0x100503f18*/
    v67 = 0; /*0x100503f20*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100503f28*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100503f37*/
    if ( !v4 ) /*0x100503f3f*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050487a*/
    v5 = (_QWORD *)v4; /*0x100503f45*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100503f48*/
    v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100503f57*/
    if ( !v6 ) /*0x100503f5f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x10050493a*/
    qmemcpy(v6, "legacy_migrated_threads", 23); /*0x100503f8b*/
    *v5 = 23; /*0x100503f8e*/
    v5[1] = v6; /*0x100503f95*/
    v5[2] = 23; /*0x100503f99*/
    v60[0] = 1; /*0x100503fa1*/
    v60[1] = v5; /*0x100503fac*/
    v60[2] = 1; /*0x100503fb3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x100503fbe*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100503fcd*/
    if ( !v7 ) /*0x100503fd5*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050488e*/
    v8 = (_QWORD *)v7; /*0x100503fdb*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100503fde*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(113, 1); /*0x100503fed*/
    if ( !v9 ) /*0x100503ff5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 113); /*0x10050494b*/
    v10 = v9; /*0x100503ffb*/
    memcpy(v9, &unk_1015FDDCD, 0x71u); /*0x10050400d*/
    *v8 = 113; /*0x100504012*/
    v8[1] = v10; /*0x100504019*/
    v8[2] = 113; /*0x10050401d*/
    v12 = *((_QWORD *)&v66 + 1); /*0x100504029*/
    result = v66; /*0x100504029*/
    v58[0] = v66; /*0x10050402d*/
    v13 = v67; /*0x10050403b*/
    *(_QWORD *)&v58[1] = v67; /*0x10050403f*/
    v14 = v60[0]; /*0x100504054*/
    v58[2] = *(_OWORD *)&v60[1]; /*0x100504062*/
    *((_QWORD *)&v58[1] + 1) = v60[0]; /*0x100504069*/
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v60[1]; /*0x100504074*/
    *(_QWORD *)(a1 + 32) = v14; /*0x100504078*/
    *(_QWORD *)(a1 + 24) = v13; /*0x10050407c*/
    *(_OWORD *)(a1 + 8) = __PAIR128__(v12, result); /*0x100504084*/
LABEL_22:
    *(_QWORD *)(a1 + 56) = 1; /*0x100504308*/
    *(_QWORD *)(a1 + 64) = v8; /*0x100504310*/
    *(_QWORD *)(a1 + 72) = 1; /*0x100504314*/
    *(_QWORD *)a1 = 11; /*0x10050431c*/
    return result; /*0x10050431c*/
  }
  if ( __OFSUB__(0, a2[90]) ) /*0x100504092*/
  {
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(v60, a2[1], a2[2]); /*0x1005040aa*/
    v15 = v60[2]; /*0x1005040b6*/
    v16 = v60[1]; /*0x1005040b6*/
  }
  else
  {
    v17 = (const void *)a2[91]; /*0x1005040bf*/
    v15 = a2[92]; /*0x1005040c6*/
    if ( v15 ) /*0x1005040d0*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1005040d2*/
      v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x1005040e4*/
      if ( !v16 ) /*0x1005040ea*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v15); /*0x1005040f4*/
    }
    else
    {
      v16 = 1; /*0x1005040f9*/
    }
    v60[0] = v15; /*0x1005040ff*/
    v60[1] = v16; /*0x100504106*/
    memcpy((void *)v16, v17, v15); /*0x100504116*/
    v60[2] = v15; /*0x10050411b*/
  }
  std::sys::fs::metadata::h32fa16d3052ea535(v58, v16, v15); /*0x10050412f*/
  v18 = *(_QWORD *)&v58[0]; /*0x100504134*/
  v19 = *(_QWORD *)&v58[0]; /*0x100504142*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x100504145*/
    *(_QWORD *)&v58[0],
    *((_QWORD *)&v58[0] + 1));
  if ( v18 ) /*0x10050414d*/
  {
    v20 = v60[0]; /*0x100504153*/
    if ( v60[0] ) /*0x10050415d*/
    {
      v19 = v16; /*0x100504164*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v60[0], 1); /*0x100504167*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v20); /*0x10050416c*/
    v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050417b*/
    if ( !v21 ) /*0x100504183*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005048a2*/
    v22 = (_QWORD *)v21; /*0x100504189*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050418c*/
    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x10050419b*/
    if ( !v23 ) /*0x1005041a3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x10050495c*/
    qmemcpy(v23, "legacy_migrated_threads", 23); /*0x1005041cf*/
    *v22 = 23; /*0x1005041d2*/
    v22[1] = v23; /*0x1005041d9*/
    v22[2] = 23; /*0x1005041dd*/
    *(_QWORD *)&v66 = 1; /*0x1005041e5*/
    *((_QWORD *)&v66 + 1) = v22; /*0x1005041ed*/
    v67 = 1; /*0x1005041f1*/
    v60[0] = 0; /*0x1005041f9*/
    *(_OWORD *)&v60[1] = 8u; /*0x100504204*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x10050421a*/
    v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100504229*/
    if ( !v24 ) /*0x100504231*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005048b1*/
    v8 = (_QWORD *)v24; /*0x100504237*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050423a*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x100504249*/
    if ( !v25 ) /*0x100504251*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x10050496d*/
    *(_QWORD *)(v25 + 24) = 0xA4E5AEBFE4809CE9LL; /*0x100504261*/
    *(_QWORD *)(v25 + 16) = 0xA097E68CBCEFA89CLL; /*0x10050426f*/
    *(_QWORD *)(v25 + 8) = 0xE598ADE58DB8E493LL; /*0x10050427d*/
    *(_QWORD *)v25 = 0xBAE5AE8DE6B095E6LL; /*0x10050428b*/
    *(_BYTE *)(v25 + 32) = -115; /*0x10050428e*/
    *v8 = 33; /*0x100504292*/
    v8[1] = v25; /*0x100504299*/
    v8[2] = 33; /*0x10050429d*/
    result = v67; /*0x1005042a5*/
    *(_QWORD *)&v58[1] = v67; /*0x1005042a9*/
    v26 = v66; /*0x1005042b4*/
    v58[0] = v66; /*0x1005042bf*/
    v27 = v60[0]; /*0x1005042c6*/
    *((_QWORD *)&v58[1] + 1) = v60[0]; /*0x1005042d4*/
    v58[2] = *(_OWORD *)&v60[1]; /*0x1005042e2*/
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v60[1]; /*0x1005042f4*/
    *(_QWORD *)(a1 + 32) = v27; /*0x1005042f8*/
    *(_QWORD *)(a1 + 24) = result; /*0x1005042fc*/
    *(_OWORD *)(a1 + 8) = v26; /*0x100504304*/
    goto LABEL_22; /*0x100504304*/
  }
  if ( v60[0] ) /*0x10050433f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v60[0], 1); /*0x100504349*/
  codexmate_lib::core::relay::codex_thread_visibility::cleanup_orphan_router_threads_strict::h0dc1554601aef88a(v60, a2); /*0x100504358*/
  if ( LODWORD(v60[0]) == 11 ) /*0x100504364*/
  {
    v57 = *(_OWORD *)&v60[1]; /*0x100504371*/
    codexmate_lib::core::relay::codex_diagnostic::check_legacy_migrated_threads::h1ff1735494c71606(v58, a2, 0); /*0x100504384*/
    if ( *((_QWORD *)&v58[2] + 1) == 2 && **(_WORD **)&v58[2] == 27503 ) /*0x10050439f*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v58, a2); /*0x10050474e*/
      v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050475d*/
      if ( !v50 ) /*0x100504765*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100504915*/
      v51 = (_QWORD *)v50; /*0x10050476b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050476e*/
      v52 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x10050477d*/
      if ( !v52 ) /*0x100504785*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x1005049a0*/
      qmemcpy(v52, "legacy_migrated_threads", 23); /*0x1005047b1*/
      *v51 = 23; /*0x1005047b4*/
      v51[1] = v52; /*0x1005047bb*/
      v51[2] = 23; /*0x1005047bf*/
      *(_QWORD *)&v64 = 1; /*0x1005047c7*/
      *((_QWORD *)&v64 + 1) = v51; /*0x1005047cf*/
      v65 = 1; /*0x1005047d3*/
      v61 = 0; /*0x1005047db*/
      v62 = 8; /*0x1005047e6*/
      v63 = 0; /*0x1005047ee*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x1005047f6*/
      v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100504805*/
      if ( !v53 ) /*0x10050480d*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100504929*/
      v32 = (_QWORD *)v53; /*0x100504813*/
      *(_QWORD *)&v66 = &v57; /*0x100504824*/
      *((_QWORD *)&v66 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050482f*/
      v67 = (__int64)&v57 + 8; /*0x100504833*/
      v68 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100504837*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v56, &unk_1017C02F1, &v66); /*0x10050484d*/
      v32[2] = v56[2]; /*0x100504859*/
      v33 = v56[0]; /*0x10050485d*/
      v34 = v56[1]; /*0x100504864*/
    }
    else
    {
      *(_QWORD *)&v64 = 0; /*0x1005043a5*/
      *((_QWORD *)&v64 + 1) = 8; /*0x1005043ad*/
      v65 = 0; /*0x1005043b5*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v58, a2); /*0x1005043bd*/
      v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005043cc*/
      if ( !v28 ) /*0x1005043d4*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005048ed*/
      v29 = (_QWORD *)v28; /*0x1005043da*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1005043dd*/
      v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x1005043ec*/
      if ( !v30 ) /*0x1005043f4*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x10050498f*/
      qmemcpy(v30, "legacy_migrated_threads", 23); /*0x100504420*/
      *v29 = 23; /*0x100504423*/
      v29[1] = v30; /*0x10050442a*/
      v29[2] = 23; /*0x10050442e*/
      v61 = 1; /*0x100504436*/
      v62 = (__int64)v29; /*0x100504441*/
      v63 = 1; /*0x100504445*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x10050444d*/
      v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050445c*/
      if ( !v31 ) /*0x100504464*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100504901*/
      v32 = (_QWORD *)v31; /*0x10050446a*/
      *(_QWORD *)&v66 = &v58[3]; /*0x100504474*/
      *((_QWORD *)&v66 + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10050447f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v55, &unk_1017C02C1, &v66); /*0x100504495*/
      v32[2] = v55[2]; /*0x1005044a1*/
      v33 = v55[0]; /*0x1005044a5*/
      v34 = v55[1]; /*0x1005044ac*/
    }
    v32[1] = v34; /*0x1005044b3*/
    *v32 = v33; /*0x1005044b7*/
    v35 = *((_QWORD *)&v64 + 1); /*0x1005044be*/
    result = v64; /*0x1005044be*/
    v66 = v64; /*0x1005044c2*/
    v36 = v65; /*0x1005044ca*/
    v67 = v65; /*0x1005044ce*/
    v37 = v61; /*0x1005044d2*/
    v38 = v62; /*0x1005044d9*/
    v68 = (__int64 (__fastcall *)())v61; /*0x1005044dd*/
    v69 = v62; /*0x1005044e1*/
    v70 = v63; /*0x1005044e9*/
    *(_QWORD *)(a1 + 48) = v63; /*0x1005044ed*/
    *(_QWORD *)(a1 + 40) = v38; /*0x1005044f1*/
    *(_QWORD *)(a1 + 32) = v37; /*0x1005044f5*/
    *(_QWORD *)(a1 + 24) = v36; /*0x1005044f9*/
    *(_OWORD *)(a1 + 8) = __PAIR128__(v35, result); /*0x100504501*/
    *(_QWORD *)(a1 + 56) = 1; /*0x100504505*/
    *(_QWORD *)(a1 + 64) = v32; /*0x10050450d*/
    *(_QWORD *)(a1 + 72) = 1; /*0x100504511*/
    *(_QWORD *)a1 = 11; /*0x100504519*/
    if ( *(_QWORD *)&v58[0] ) /*0x10050452a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v58[0] + 1), *(_QWORD *)&v58[0], 1); /*0x100504538*/
    if ( *((_QWORD *)&v58[1] + 1) ) /*0x100504547*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v58[2], *((_QWORD *)&v58[1] + 1), 1); /*0x100504555*/
    if ( *(_QWORD *)&v58[3] ) /*0x10050456e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v58[3] + 1), *(_QWORD *)&v58[3], 1); /*0x10050457c*/
    if ( *((_QWORD *)&v58[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&v58[4] + 1) ) /*0x100504594*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v58[5], *((_QWORD *)&v58[4] + 1), 1); /*0x1005045a6*/
  }
  else
  {
    qmemcpy(v58, v60, sizeof(v58)); /*0x1005045c6*/
    *(_QWORD *)&v64 = 0; /*0x1005045c9*/
    *((_QWORD *)&v64 + 1) = 8; /*0x1005045d1*/
    v65 = 0; /*0x1005045d9*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v59, &v61); /*0x1005045e1*/
    v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005045f0*/
    if ( !v39 ) /*0x1005045f8*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005048c5*/
    v40 = (_QWORD *)v39; /*0x1005045fe*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100504601*/
    v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100504610*/
    if ( !v41 ) /*0x100504618*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x10050497e*/
    qmemcpy(v41, "legacy_migrated_threads", 23); /*0x100504644*/
    *v40 = 23; /*0x100504647*/
    v40[1] = v41; /*0x10050464e*/
    v40[2] = 23; /*0x100504652*/
    v61 = 1; /*0x10050465a*/
    v62 = (__int64)v40; /*0x100504665*/
    v63 = 1; /*0x100504669*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x100504671*/
    v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100504680*/
    if ( !v42 ) /*0x100504688*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005048d9*/
    v43 = (_QWORD *)v42; /*0x10050468e*/
    *(_QWORD *)&v66 = v58; /*0x100504691*/
    *((_QWORD *)&v66 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10050469c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v54, &unk_1017C033D, &v66); /*0x1005046b2*/
    v43[2] = v54[2]; /*0x1005046be*/
    v44 = v54[0]; /*0x1005046c2*/
    v43[1] = v54[1]; /*0x1005046d0*/
    *v43 = v44; /*0x1005046d4*/
    v46 = *((_QWORD *)&v64 + 1); /*0x1005046db*/
    v45 = v64; /*0x1005046db*/
    v66 = v64; /*0x1005046df*/
    v47 = v65; /*0x1005046e7*/
    v67 = v65; /*0x1005046eb*/
    v48 = v61; /*0x1005046ef*/
    v49 = v62; /*0x1005046f6*/
    v68 = (__int64 (__fastcall *)())v61; /*0x1005046fa*/
    v69 = v62; /*0x1005046fe*/
    v70 = v63; /*0x100504706*/
    *(_QWORD *)(a1 + 48) = v63; /*0x10050470a*/
    *(_QWORD *)(a1 + 40) = v49; /*0x10050470e*/
    *(_QWORD *)(a1 + 32) = v48; /*0x100504712*/
    *(_QWORD *)(a1 + 24) = v47; /*0x100504716*/
    *(_OWORD *)(a1 + 8) = __PAIR128__(v46, v45); /*0x10050471e*/
    *(_QWORD *)(a1 + 56) = 1; /*0x100504722*/
    *(_QWORD *)(a1 + 64) = v43; /*0x10050472a*/
    *(_QWORD *)(a1 + 72) = 1; /*0x10050472e*/
    *(_QWORD *)a1 = 11; /*0x100504736*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v58); /*0x100504744*/
  }
  return result; /*0x100504323*/
}