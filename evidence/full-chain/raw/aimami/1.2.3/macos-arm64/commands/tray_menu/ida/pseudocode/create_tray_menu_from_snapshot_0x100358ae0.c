// __ZN13codexmate_lib8commands9tray_menu30create_tray_menu_from_snapshot @ 0x100358ae0 | 基线 same-set
volatile signed __int64 **__fastcall codexmate_lib::commands::tray_menu::create_tray_menu_from_snapshot::h8112836b79b9e4a6(
        volatile signed __int64 **a1,
        __int64 a2,
        __int64 a3)
{
  bool v6; // of
  __int64 v7; // rax
  __int64 v8; // rt0
  _QWORD *v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // r12
  _QWORD *v12; // rax
  volatile signed __int64 *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 **v16; // rdi
  bool v17; // of
  __int64 v18; // rax
  __int64 v19; // rt0
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  volatile signed __int64 *v26; // rbx
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v30; // rax
  volatile signed __int64 *v31; // rdx
  __int64 v32; // rax
  bool v33; // of
  __int64 v34; // rax
  __int64 v35; // rt0
  __int64 (__fastcall *v36)(); // r12
  volatile signed __int64 *v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // r13
  bool v41; // of
  volatile signed __int64 *v42; // rax
  __int64 v43; // rt0
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rcx
  volatile signed __int64 *v47; // rdx
  __int64 v48; // r12
  __int64 v49; // r15
  bool v50; // of
  volatile signed __int64 *v51; // rax
  __int64 v52; // rt0
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  volatile signed __int64 *v56; // rdx
  __int64 v57; // rbx
  __int64 v58; // r14
  __int64 v59; // r15
  __int64 (__fastcall **v60)(); // rcx
  __int64 v61; // rdx
  volatile signed __int64 *v62; // rax
  volatile signed __int64 *v63; // rcx
  volatile signed __int64 *v64; // rdx
  volatile signed __int64 *v65; // rcx
  __int64 (__fastcall *v66)(); // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // [rsp+8h] [rbp-228h]
  volatile signed __int64 *v70; // [rsp+28h] [rbp-208h] BYREF
  __int64 (__fastcall **v71)(); // [rsp+30h] [rbp-200h]
  __int64 v72; // [rsp+38h] [rbp-1F8h]
  __int64 (__fastcall *v73)(); // [rsp+40h] [rbp-1F0h]
  volatile signed __int64 v74; // [rsp+48h] [rbp-1E8h]
  volatile signed __int64 v75; // [rsp+50h] [rbp-1E0h]
  __int64 v76; // [rsp+58h] [rbp-1D8h]
  volatile signed __int64 *v77[3]; // [rsp+60h] [rbp-1D0h] BYREF
  volatile signed __int64 *v78; // [rsp+78h] [rbp-1B8h] BYREF
  __int64 v79; // [rsp+80h] [rbp-1B0h]
  __int64 v80; // [rsp+88h] [rbp-1A8h]
  __int64 (__fastcall *v81)(); // [rsp+90h] [rbp-1A0h]
  volatile signed __int64 v82; // [rsp+98h] [rbp-198h]
  volatile signed __int64 v83; // [rsp+A0h] [rbp-190h]
  volatile signed __int64 **v84; // [rsp+A8h] [rbp-188h]
  __int64 *v85; // [rsp+B0h] [rbp-180h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-178h]
  __int64 v87; // [rsp+C0h] [rbp-170h]
  __int64 (__fastcall *v88)(); // [rsp+C8h] [rbp-168h]
  volatile signed __int64 v89; // [rsp+D0h] [rbp-160h]
  volatile signed __int64 v90; // [rsp+D8h] [rbp-158h]
  volatile signed __int64 *v91; // [rsp+E8h] [rbp-148h] BYREF
  __int64 v92; // [rsp+F0h] [rbp-140h]
  __int64 v93; // [rsp+F8h] [rbp-138h]
  __int64 (__fastcall *v94)(); // [rsp+100h] [rbp-130h]
  volatile signed __int64 v95; // [rsp+108h] [rbp-128h]
  volatile signed __int64 v96; // [rsp+110h] [rbp-120h]
  volatile signed __int64 *v97; // [rsp+118h] [rbp-118h] BYREF
  volatile signed __int64 *v98; // [rsp+120h] [rbp-110h]
  __int64 (__fastcall *v99)(); // [rsp+128h] [rbp-108h]
  __int64 (__fastcall *v100)(); // [rsp+130h] [rbp-100h]
  volatile signed __int64 v101; // [rsp+138h] [rbp-F8h]
  volatile signed __int64 v102; // [rsp+140h] [rbp-F0h]
  __int64 v103; // [rsp+148h] [rbp-E8h]
  __int64 v104; // [rsp+150h] [rbp-E0h] BYREF
  __int64 v105; // [rsp+158h] [rbp-D8h] BYREF
  __int64 v106; // [rsp+160h] [rbp-D0h]
  __int64 v107; // [rsp+168h] [rbp-C8h]
  __int64 (__fastcall *v108)(); // [rsp+170h] [rbp-C0h]
  volatile signed __int64 v109; // [rsp+178h] [rbp-B8h]
  volatile signed __int64 v110; // [rsp+180h] [rbp-B0h]
  __int64 v111; // [rsp+188h] [rbp-A8h]
  volatile signed __int64 *v112; // [rsp+190h] [rbp-A0h] BYREF
  __int64 v113; // [rsp+198h] [rbp-98h]
  __int64 v114; // [rsp+1A0h] [rbp-90h]
  __int64 (__fastcall *v115)(); // [rsp+1A8h] [rbp-88h]
  volatile signed __int64 v116; // [rsp+1B0h] [rbp-80h]
  volatile signed __int64 v117; // [rsp+1B8h] [rbp-78h]
  __int64 v118; // [rsp+1C0h] [rbp-70h]
  volatile signed __int64 *v119; // [rsp+1C8h] [rbp-68h] BYREF
  __int64 v120; // [rsp+1D0h] [rbp-60h] BYREF
  __int64 v121; // [rsp+1D8h] [rbp-58h]
  __int64 v122; // [rsp+1E0h] [rbp-50h]
  __int64 (__fastcall *v123)(); // [rsp+1E8h] [rbp-48h]
  volatile signed __int64 v124; // [rsp+1F0h] [rbp-40h]
  volatile signed __int64 v125; // [rsp+1F8h] [rbp-38h]
  __int64 v126; // [rsp+200h] [rbp-30h]

  v123 = (__int64 (__fastcall *)())0x8000000000000000LL; /*0x100358b0c*/
  v126 = a2; /*0x100358b10*/
  v120 = 0; /*0x100358b14*/
  v121 = 8; /*0x100358b1c*/
  v122 = 0; /*0x100358b24*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::ha9cdd0a5b09fc138( /*0x100358b5c*/
    &v105,
    a2,
    &unk_1015E665D,
    18,
    &unk_1015E6600,
    12,
    0,
    0);
  v6 = __OFSUB__(v105, 0x8000000000000025LL); /*0x100358b61*/
  if ( v105 != 0x8000000000000025LL ) /*0x100358b68*/
  {
    v90 = v110; /*0x100358cb2*/
    v89 = v109; /*0x100358cc0*/
    v88 = v108; /*0x100358cce*/
    v87 = v107; /*0x100358cdc*/
    v86 = v106; /*0x100358cf1*/
    v85 = (__int64 *)v105; /*0x100358cf8*/
    v78 = nullptr; /*0x100358cff*/
    v79 = 1; /*0x100358d0a*/
    v80 = 0; /*0x100358d15*/
    v93 = 1610612768; /*0x100358d20*/
    v91 = (volatile signed __int64 *)&v78; /*0x100358d32*/
    v92 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100358d40*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v85, &v91) ) /*0x100358d55*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100359dc1*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        &v104,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v13 = v78; /*0x100358d62*/
    v14 = v79; /*0x100358d69*/
    v15 = v80; /*0x100358d70*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v85); /*0x100358d7e*/
    goto LABEL_8; /*0x100358d7e*/
  }
  v7 = v106; /*0x100358b6e*/
  v119 = (volatile signed __int64 *)v106; /*0x100358b75*/
  v8 = _InterlockedIncrement64((volatile signed __int64 *)v106); /*0x100358b79*/
  if ( (v8 < 0) ^ v6 | (v8 == 0) ) /*0x100358b7d*/
    goto LABEL_79; /*0x100358b7d*/
  v86 = 0; /*0x100358b8a*/
  v87 = v7; /*0x100358b95*/
  v85 = (__int64 *)0x8000000000000025LL; /*0x100358ba6*/
  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v120); /*0x100358bb1*/
  v9 = (_QWORD *)v121; /*0x100358bb6*/
  *(_QWORD *)(v121 + 40) = v90; /*0x100358bc1*/
  v9[4] = v89; /*0x100358bcc*/
  v9[3] = v88; /*0x100358bd7*/
  v9[2] = v87; /*0x100358be2*/
  v10 = v85; /*0x100358be6*/
  v9[1] = v86; /*0x100358bf4*/
  *v9 = v10; /*0x100358bf8*/
  v112 = (volatile signed __int64 *)v120; /*0x100358c03*/
  v113 = v121; /*0x100358c0a*/
  v115 = v123; /*0x100358c15*/
  v116 = v124; /*0x100358c20*/
  v117 = v125; /*0x100358c28*/
  v118 = v126; /*0x100358c30*/
  v114 = 1; /*0x100358c34*/
  v11 = *(_QWORD *)a3; /*0x100358c3f*/
  if ( *(_QWORD *)a3 == 2 ) /*0x100358c46*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v120, a2); /*0x100358c4c*/
    v12 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100358c5b*/
    if ( !v12 ) /*0x100358c63*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x100359e4d*/
    v12[2] = 0xB78FE5A6B4E8A88ALL; /*0x100358c73*/
    v12[1] = 0xE5BBB4E6B088E58BLL; /*0x100358c81*/
    *v12 = 0xB5E680A3E6AA9CE6LL; /*0x100358c8f*/
    v120 = 24; /*0x100358c92*/
    v121 = (__int64)v12; /*0x100358c9a*/
    v122 = 24; /*0x100358c9e*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v120, a3 + 208); /*0x100358da8*/
  }
  v16 = &v85; /*0x100358dbc*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::hd32af50c747a7995( /*0x100358dd5*/
    &v85,
    a2,
    "tray_active_titletray_active_subtitletray_bootstrap_titletray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
    17,
    &v120,
    1,
    0);
  v17 = __OFSUB__(v85, 0x8000000000000025LL); /*0x100358dda*/
  if ( v85 != (__int64 *)0x8000000000000025LL ) /*0x100358de1*/
  {
    v125 = v90; /*0x100358f44*/
    v124 = v89; /*0x100358f4f*/
    v123 = v88; /*0x100358f5a*/
    v122 = v87; /*0x100358f65*/
    v121 = v86; /*0x100358f77*/
    v120 = (__int64)v85; /*0x100358f7b*/
    v91 = nullptr; /*0x100358f7f*/
    v92 = 1; /*0x100358f8a*/
    v93 = 0; /*0x100358f95*/
    v107 = 1610612768; /*0x100358fa0*/
    v105 = (__int64)&v91; /*0x100358fb2*/
    v106 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100358fc0*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x100358fd2*/
                            &v120,
                            &v105) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100359dec*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        &v104,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v26 = v91; /*0x100358fdf*/
    v27 = v92; /*0x100358fe6*/
    v28 = v93; /*0x100358fed*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v120); /*0x100358ff8*/
    *a1 = v26; /*0x100358ffd*/
    a1[1] = (volatile signed __int64 *)v27; /*0x100359001*/
    a1[2] = (volatile signed __int64 *)v28; /*0x100359005*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(&v112); /*0x100359010*/
    goto LABEL_20; /*0x100359010*/
  }
  v84 = a1; /*0x100358de7*/
  v18 = v86; /*0x100358dee*/
  v77[0] = (volatile signed __int64 *)v86; /*0x100358df5*/
  v19 = _InterlockedIncrement64((volatile signed __int64 *)v86); /*0x100358dfc*/
  if ( (v19 < 0) ^ v17 | (v19 == 0) ) /*0x100358e00*/
    goto LABEL_79; /*0x100358e00*/
  v121 = 0; /*0x100358e06*/
  v122 = v18; /*0x100358e0e*/
  v120 = 0x8000000000000025LL; /*0x100358e12*/
  v20 = v114; /*0x100358e16*/
  if ( (volatile signed __int64 *)v114 == v112 ) /*0x100358e24*/
  {
    v16 = (__int64 **)&v112; /*0x100358e26*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v112); /*0x100358e2d*/
  }
  v21 = 48 * v20; /*0x100358e37*/
  v22 = v113; /*0x100358e3b*/
  *(_QWORD *)(v113 + v21 + 40) = v125; /*0x100358e46*/
  *(_QWORD *)(v22 + v21 + 32) = v124; /*0x100358e4f*/
  *(_QWORD *)(v22 + v21 + 24) = v123; /*0x100358e58*/
  *(_QWORD *)(v22 + v21 + 16) = v122; /*0x100358e61*/
  v23 = v120; /*0x100358e66*/
  v24 = v121; /*0x100358e6a*/
  *(_QWORD *)(v22 + v21 + 8) = v121; /*0x100358e6e*/
  *(_QWORD *)(v22 + v21) = v23; /*0x100358e76*/
  v99 = (__int64 (__fastcall *)())(v20 + 1); /*0x100358e7a*/
  v97 = v112; /*0x100358e8f*/
  v98 = (volatile signed __int64 *)v113; /*0x100358e96*/
  v100 = v115; /*0x100358ea4*/
  v101 = v116; /*0x100358eaf*/
  v102 = v117; /*0x100358eba*/
  v103 = v118; /*0x100358ec5*/
  if ( (_DWORD)v11 == 2 ) /*0x100358ed0*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v24); /*0x100358ed6*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x100358ee5*/
    if ( !v25 ) /*0x100358eed*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x100359e5e*/
    *(_QWORD *)(v25 + 8) = 0x646F432095BDE5BBLL; /*0x100358efd*/
    *(_QWORD *)v25 = 0x99E78885E5B7AFE8LL; /*0x100358f0b*/
    *(_WORD *)(v25 + 16) = 30821; /*0x100358f0e*/
    v105 = 18; /*0x100358f14*/
    v106 = v25; /*0x100358f1f*/
    v107 = 18; /*0x100358f26*/
    a1 = v84; /*0x100358f31*/
  }
  else
  {
    v30 = *(unsigned __int8 *)(a3 + 344); /*0x10035903d*/
    v31 = (volatile signed __int64 *)((char *)dword_1015F97C8 + dword_1015F97C8[v30]); /*0x100359050*/
    v32 = qword_1015F97F0[v30]; /*0x10035905a*/
    v91 = v31; /*0x10035905e*/
    v92 = v32; /*0x100359065*/
    codexmate_lib::commands::tray_menu::quota_text::h2938110b3487cda7(&v85, a3); /*0x100359079*/
    a1 = v84; /*0x10035907e*/
    v120 = (__int64)&v91; /*0x10035908c*/
    v121 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100359097*/
    v122 = (__int64)&v85; /*0x10035909b*/
    v123 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1003590a6*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v105, &unk_1017BC785, &v120); /*0x1003590bc*/
    if ( v85 ) /*0x1003590cb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v85, 1); /*0x1003590d9*/
  }
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::hd32af50c747a7995( /*0x10035910c*/
    &v112,
    a2,
    "tray_active_subtitletray_bootstrap_titletray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
    20,
    &v105,
    1,
    0);
  v33 = __OFSUB__(v112, 0x8000000000000025LL); /*0x100359111*/
  if ( v112 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x100359118*/
  {
    v125 = v117; /*0x1003596b8*/
    v124 = v116; /*0x1003596c0*/
    v123 = v115; /*0x1003596cb*/
    v122 = v114; /*0x1003596d6*/
    v121 = v113; /*0x1003596e8*/
    v120 = (__int64)v112; /*0x1003596ec*/
    v105 = 0; /*0x1003596f0*/
    v106 = 1; /*0x1003596fb*/
    v107 = 0; /*0x100359706*/
    v87 = 1610612768; /*0x100359711*/
    v85 = &v105; /*0x10035971c*/
    v86 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10035972a*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x10035973c*/
                            &v120,
                            &v85) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100359e14*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        &v104,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v57 = v105; /*0x100359749*/
    v58 = v106; /*0x100359750*/
    v59 = v107; /*0x100359757*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v120); /*0x100359762*/
    *a1 = (volatile signed __int64 *)v57; /*0x100359767*/
    a1[1] = (volatile signed __int64 *)v58; /*0x10035976b*/
    a1[2] = (volatile signed __int64 *)v59; /*0x10035976f*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(&v97); /*0x10035977a*/
    if ( !_InterlockedDecrement64(v77[0]) ) /*0x100359786*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(v77); /*0x100359797*/
LABEL_20:
    if ( !_InterlockedDecrement64(v119) ) /*0x100359019*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v119); /*0x100359023*/
    return a1; /*0x100359023*/
  }
  v34 = v113; /*0x10035911e*/
  v78 = (volatile signed __int64 *)v113; /*0x100359125*/
  v35 = _InterlockedIncrement64((volatile signed __int64 *)v113); /*0x10035912c*/
  if ( (v35 < 0) ^ v33 | (v35 == 0) ) /*0x100359130*/
    goto LABEL_79; /*0x100359130*/
  v121 = 0; /*0x100359136*/
  v122 = v34; /*0x10035913e*/
  v120 = 0x8000000000000025LL; /*0x100359142*/
  v36 = v99; /*0x100359146*/
  if ( (char *)v99 == (char *)v97 ) /*0x100359154*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v97); /*0x10035915d*/
  v37 = v98; /*0x100359162*/
  v38 = 6LL * (_QWORD)v36; /*0x10035916d*/
  v98[v38 + 5] = v125; /*0x100359175*/
  v37[v38 + 4] = v124; /*0x10035917e*/
  v37[v38 + 3] = (volatile signed __int64)v123; /*0x100359187*/
  v37[v38 + 2] = v122; /*0x100359190*/
  v39 = v120; /*0x100359195*/
  v37[v38 + 1] = v121; /*0x10035919d*/
  v37[v38] = v39; /*0x1003591a2*/
  v72 = (__int64)v36 + 1; /*0x1003591a9*/
  v70 = v97; /*0x1003591be*/
  v71 = (__int64 (__fastcall **)())v98; /*0x1003591c5*/
  v73 = v100; /*0x1003591d3*/
  v74 = v101; /*0x1003591e1*/
  v75 = v102; /*0x1003591ef*/
  v76 = v103; /*0x1003591fd*/
  tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h5badb10701b3083d(&v105, &v70); /*0x100359212*/
  if ( !_InterlockedDecrement64(v78) ) /*0x10035921e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v78); /*0x100359232*/
  if ( !_InterlockedDecrement64(v77[0]) ) /*0x10035923e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(v77); /*0x10035924b*/
  if ( !_InterlockedDecrement64(v119) ) /*0x100359254*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v119); /*0x10035925e*/
  v40 = *(_QWORD *)(a3 + 688); /*0x100359263*/
  if ( v40 < 2 ) /*0x10035926e*/
    goto LABEL_59; /*0x10035926e*/
  v126 = v111; /*0x10035927b*/
  v125 = v110; /*0x100359286*/
  v124 = v109; /*0x100359291*/
  v123 = v108; /*0x10035929c*/
  v122 = v107; /*0x1003592a7*/
  v121 = v106; /*0x1003592b9*/
  v120 = v105; /*0x1003592bd*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::ha9cdd0a5b09fc138( /*0x1003592f4*/
    &v97,
    a2,
    &unk_1015E666F,
    20,
    &unk_1015E6683,
    12,
    0,
    0);
  v41 = __OFSUB__(v97, 0x8000000000000025LL); /*0x100359303*/
  if ( v97 == (volatile signed __int64 *)0x8000000000000025LL ) /*0x10035930a*/
  {
    v42 = v98; /*0x100359310*/
    v91 = v98; /*0x100359317*/
    v43 = _InterlockedIncrement64(v98); /*0x10035931e*/
    if ( !((v43 < 0) ^ v41 | (v43 == 0)) ) /*0x100359322*/
    {
      v113 = 0; /*0x100359328*/
      v114 = (__int64)v42; /*0x100359333*/
      v112 = (volatile signed __int64 *)0x8000000000000025LL; /*0x10035933a*/
      v44 = v122; /*0x100359341*/
      if ( v122 == v120 ) /*0x100359349*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v120); /*0x10035934f*/
      v45 = v121; /*0x100359354*/
      v46 = 48 * v44; /*0x10035935c*/
      *(_QWORD *)(v121 + v46 + 40) = v117; /*0x100359364*/
      *(_QWORD *)(v45 + v46 + 32) = v116; /*0x10035936d*/
      *(_QWORD *)(v45 + v46 + 24) = v115; /*0x100359379*/
      *(_QWORD *)(v45 + v46 + 16) = v114; /*0x100359385*/
      v47 = v112; /*0x10035938a*/
      *(_QWORD *)(v45 + v46 + 8) = v113; /*0x100359398*/
      *(_QWORD *)(v45 + v46) = v47; /*0x10035939d*/
      v107 = v44 + 1; /*0x1003593a4*/
      v105 = v120; /*0x1003593b3*/
      v106 = v121; /*0x1003593ba*/
      v108 = v123; /*0x1003593c5*/
      v109 = v124; /*0x1003593d0*/
      v110 = v125; /*0x1003593db*/
      v111 = v126; /*0x1003593e6*/
      if ( !_InterlockedDecrement64(v91) ) /*0x1003593f4*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v91); /*0x100359401*/
      v48 = *(_QWORD *)(a3 + 680) + 184LL; /*0x10035940c*/
      v49 = 352 * v40; /*0x100359413*/
      do /*0x100359445*/
      {
        v126 = v111; /*0x100359452*/
        v125 = v110; /*0x10035945d*/
        v124 = v109; /*0x100359468*/
        v123 = v108; /*0x100359473*/
        v122 = v107; /*0x10035947e*/
        v121 = v106; /*0x100359490*/
        v120 = v105; /*0x100359494*/
        v112 = (volatile signed __int64 *)&off_101961798; /*0x10035949f*/
        v113 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1003594ad*/
        v114 = v48; /*0x1003594b4*/
        v115 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1003594bb*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v70, "\xC0\xC0", &v112); /*0x1003594d3*/
        v91 = v70; /*0x1003594ee*/
        v92 = (__int64)v71; /*0x1003594f5*/
        v93 = v72; /*0x100359503*/
        codexmate_lib::commands::tray_menu::quota_text::h2938110b3487cda7(&v70, v48 - 184); /*0x10035950d*/
        v112 = (volatile signed __int64 *)(v48 + 24); /*0x100359517*/
        v113 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035951e*/
        v114 = (__int64)&v70; /*0x100359525*/
        v115 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035952c*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v85, &unk_1017BCA3B, &v112); /*0x100359548*/
        if ( v70 ) /*0x100359561*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, v70, 1); /*0x10035956f*/
        tauri::menu::check::_$LT$impl$u20$tauri..menu..CheckMenuItem$LT$R$GT$$GT$::with_id::hded8cd068b39cbcf( /*0x1003595a3*/
          (unsigned int)&v97,
          a2,
          (unsigned int)&v91,
          (unsigned int)&v85,
          1,
          *(unsigned __int8 *)(v48 + 153),
          0,
          v69);
        v50 = __OFSUB__(v97, 0x8000000000000025LL); /*0x1003595a8*/
        if ( v97 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x1003595af*/
        {
          v117 = v102; /*0x100359886*/
          v116 = v101; /*0x100359891*/
          v115 = v100; /*0x10035989c*/
          v114 = (__int64)v99; /*0x1003598aa*/
          v113 = (__int64)v98; /*0x1003598bf*/
          v112 = v97; /*0x1003598c6*/
          codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h4f4fd2a3bcb62520( /*0x1003598db*/
            &v70,
            (__int64)&v112);
          v60 = v71; /*0x1003598e7*/
          v61 = v72; /*0x1003598ee*/
          a1 = v84; /*0x1003598f5*/
          *v84 = v70; /*0x1003598fc*/
          a1[1] = (volatile signed __int64 *)v60; /*0x100359900*/
          a1[2] = (volatile signed __int64 *)v61; /*0x100359904*/
          goto LABEL_9; /*0x100359908*/
        }
        v51 = v98; /*0x1003595b5*/
        v78 = v98; /*0x1003595bc*/
        v52 = _InterlockedIncrement64(v98); /*0x1003595c3*/
        if ( (v52 < 0) ^ v50 | (v52 == 0) ) /*0x1003595c7*/
          goto LABEL_79; /*0x1003595c7*/
        v113 = 3; /*0x1003595cd*/
        v114 = (__int64)v51; /*0x1003595d8*/
        v112 = (volatile signed __int64 *)0x8000000000000025LL; /*0x1003595df*/
        v53 = v122; /*0x1003595e6*/
        if ( v122 == v120 ) /*0x1003595ee*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v120); /*0x1003595f4*/
        v54 = v121; /*0x1003595f9*/
        v55 = 48 * v53; /*0x100359601*/
        *(_QWORD *)(v121 + v55 + 40) = v117; /*0x100359609*/
        *(_QWORD *)(v54 + v55 + 32) = v116; /*0x100359612*/
        *(_QWORD *)(v54 + v55 + 24) = v115; /*0x10035961e*/
        *(_QWORD *)(v54 + v55 + 16) = v114; /*0x10035962a*/
        v56 = v112; /*0x10035962f*/
        *(_QWORD *)(v54 + v55 + 8) = v113; /*0x10035963d*/
        *(_QWORD *)(v54 + v55) = v56; /*0x100359642*/
        v107 = v53 + 1; /*0x100359649*/
        v105 = v120; /*0x100359658*/
        v106 = v121; /*0x10035965f*/
        v108 = v123; /*0x10035966a*/
        v109 = v124; /*0x100359675*/
        v110 = v125; /*0x100359680*/
        v111 = v126; /*0x10035968b*/
        if ( !_InterlockedDecrement64(v78) ) /*0x100359699*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h1321715e630b601c(&v78); /*0x1003596aa*/
        v48 += 352; /*0x100359430*/
        v49 -= 352; /*0x100359437*/
      }
      while ( v49 ); /*0x100359445*/
      v126 = v111; /*0x100359914*/
      v125 = v110; /*0x10035991f*/
      v124 = v109; /*0x10035992a*/
      v123 = v108; /*0x100359935*/
      v122 = v107; /*0x100359940*/
      v121 = v106; /*0x100359952*/
      v120 = v105; /*0x100359956*/
      tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h5badb10701b3083d(&v105, &v120); /*0x100359965*/
LABEL_59:
      v120 = v105; /*0x100359971*/
      v121 = v106; /*0x100359983*/
      v122 = v107; /*0x10035998e*/
      v123 = v108; /*0x100359999*/
      v124 = v109; /*0x1003599a4*/
      v125 = v110; /*0x1003599af*/
      v126 = v111; /*0x1003599ba*/
      codexmate_lib::commands::tray_menu::append_codex_router_section::h0c903a536860bc98((__int64 *)&v112, a2, &v120); /*0x1003599cc*/
      v97 = (volatile signed __int64 *)v113; /*0x1003599df*/
      v98 = (volatile signed __int64 *)v114; /*0x1003599ed*/
      v99 = v115; /*0x1003599fb*/
      if ( v112 == (volatile signed __int64 *)0x8000000000000000LL ) /*0x100359a05*/
      {
        a1 = v84; /*0x100359a0e*/
        v84[2] = (volatile signed __int64 *)v99; /*0x100359a15*/
        v62 = v97; /*0x100359a19*/
        a1[1] = v98; /*0x100359a27*/
        *a1 = v62; /*0x100359a2b*/
        return a1; /*0x100359a2f*/
      }
      v126 = v118; /*0x100359a38*/
      v125 = v117; /*0x100359a44*/
      v124 = v116; /*0x100359a48*/
      v121 = (__int64)v97; /*0x100359a5a*/
      v122 = (__int64)v98; /*0x100359a5e*/
      v123 = v99; /*0x100359a69*/
      v120 = (__int64)v112; /*0x100359a6d*/
      tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h5badb10701b3083d(&v112, &v120); /*0x100359a7c*/
      tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::ha9cdd0a5b09fc138( /*0x100359ab4*/
        &v91,
        a2,
        "tray_open_maintray_active_titletray_active_subtitletray_bootstrap_titletray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
        14,
        &unk_1015E662D,
        13,
        1,
        0);
      a1 = v84; /*0x100359ab9*/
      if ( v91 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x100359ad1*/
      {
        v125 = v96; /*0x100359c10*/
        v124 = v95; /*0x100359c1b*/
        v123 = v94; /*0x100359c26*/
        v122 = v93; /*0x100359c31*/
        v121 = v92; /*0x100359c43*/
        v120 = (__int64)v91; /*0x100359c47*/
        codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h4f4fd2a3bcb62520( /*0x100359c56*/
          v77,
          (__int64)&v120);
        v63 = v77[1]; /*0x100359c62*/
        v64 = v77[2]; /*0x100359c69*/
        *a1 = v77[0]; /*0x100359c70*/
        a1[1] = v63; /*0x100359c74*/
        a1[2] = v64; /*0x100359c78*/
        core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(&v112); /*0x100359c83*/
        return a1; /*0x100359c88*/
      }
      v119 = (volatile signed __int64 *)v92; /*0x100359ade*/
      tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::item::heb06ab93762a5a00(&v97, &v112, &v119, &off_101961768); /*0x100359afb*/
      tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h5badb10701b3083d(&v70, &v97); /*0x100359b0e*/
      tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::ha9cdd0a5b09fc138( /*0x100359b46*/
        &v112,
        a2,
        "tray_quittray_account:",
        9,
        &unk_1015E663A,
        6,
        1,
        0);
      if ( v112 == (volatile signed __int64 *)0x8000000000000025LL ) /*0x100359b5c*/
      {
        v91 = (volatile signed __int64 *)v113; /*0x100359b69*/
        tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::item::heb06ab93762a5a00(&v85, &v70, &v91, &off_101961768); /*0x100359b8c*/
        tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::build::h8ececc282ef97285(&v78, &v85); /*0x100359b9f*/
        if ( v78 == (volatile signed __int64 *)0x8000000000000025LL ) /*0x100359bb5*/
        {
          v104 = v79; /*0x100359bc2*/
          if ( !_InterlockedDecrement64(v91) ) /*0x100359bd0*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v91); /*0x100359bdd*/
          if ( !_InterlockedDecrement64(v119) ) /*0x100359be6*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v119); /*0x100359bf0*/
          a1[1] = (volatile signed __int64 *)v104; /*0x100359bfc*/
          *a1 = (volatile signed __int64 *)0x8000000000000000LL; /*0x100359c00*/
          return a1; /*0x100359c04*/
        }
        v125 = v83; /*0x100359d12*/
        v124 = v82; /*0x100359d1d*/
        v123 = v81; /*0x100359d28*/
        v122 = v80; /*0x100359d33*/
        v121 = v79; /*0x100359d45*/
        v120 = (__int64)v78; /*0x100359d49*/
        codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h4f4fd2a3bcb62520( /*0x100359d58*/
          &v112,
          (__int64)&v120);
        v67 = v113; /*0x100359d64*/
        v68 = v114; /*0x100359d6b*/
        *a1 = v112; /*0x100359d72*/
        a1[1] = (volatile signed __int64 *)v67; /*0x100359d76*/
        a1[2] = (volatile signed __int64 *)v68; /*0x100359d7a*/
        if ( !_InterlockedDecrement64(v91) ) /*0x100359d85*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v91); /*0x100359d96*/
      }
      else
      {
        v125 = v117; /*0x100359c91*/
        v124 = v116; /*0x100359c99*/
        v123 = v115; /*0x100359ca4*/
        v122 = v114; /*0x100359caf*/
        v121 = v113; /*0x100359cc1*/
        v120 = (__int64)v112; /*0x100359cc5*/
        codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h4f4fd2a3bcb62520( /*0x100359cd4*/
          &v97,
          (__int64)&v120);
        v65 = v98; /*0x100359ce0*/
        v66 = v99; /*0x100359ce7*/
        *a1 = v97; /*0x100359cee*/
        a1[1] = v65; /*0x100359cf2*/
        a1[2] = (volatile signed __int64 *)v66; /*0x100359cf6*/
        core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(&v70); /*0x100359d01*/
      }
      goto LABEL_20; /*0x100359d9b*/
    }
LABEL_79:
    BUG(); /*0x100359e63*/
  }
  v117 = v102; /*0x1003597a8*/
  v116 = v101; /*0x1003597b3*/
  v115 = v100; /*0x1003597be*/
  v114 = (__int64)v99; /*0x1003597cc*/
  v113 = (__int64)v98; /*0x1003597e1*/
  v112 = v97; /*0x1003597e8*/
  v85 = nullptr; /*0x1003597ef*/
  v86 = 1; /*0x1003597fa*/
  v87 = 0; /*0x100359805*/
  v72 = 1610612768; /*0x100359810*/
  v70 = (volatile signed __int64 *)&v85; /*0x100359822*/
  v71 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100359830*/
  if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v112, &v70) ) /*0x100359845*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100359e3c*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      &v104,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v13 = v85; /*0x100359852*/
  v14 = v86; /*0x100359859*/
  v15 = v87; /*0x100359860*/
  core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v112); /*0x10035986e*/
  a1 = v84; /*0x100359873*/
LABEL_8:
  *a1 = v13; /*0x100358d83*/
  a1[1] = (volatile signed __int64 *)v14; /*0x100358d87*/
  a1[2] = (volatile signed __int64 *)v15; /*0x100358d8b*/
LABEL_9:
  core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(&v120); /*0x100358d8f*/
  return a1; /*0x10035902b*/
}