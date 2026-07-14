// mac 1.1.8 BACKEND-ONLY create_tray_menu_from_snapshot node 0x1004d3710 depth=0
// create_tray_menu_from_snapshot_owner
_QWORD *__fastcall codexmate_lib::commands::tray_menu::create_tray_menu_from_snapshot::h27dd499b1484bd80(
        volatile signed __int64 **a1,
        __int64 a2,
        __int64 *a3,
        double a4,
        double a5)
{
  _QWORD *v6; // r13
  bool v7; // of
  __int64 v8; // rax
  __int64 v9; // rt0
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  _QWORD *v13; // rax
  volatile signed __int64 *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r15
  bool v17; // of
  __int64 v18; // rax
  __int64 v19; // rt0
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  volatile signed __int64 *v25; // rbx
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v29; // rax
  volatile signed __int64 *v30; // rdx
  __int64 v31; // rax
  bool v32; // of
  __int64 v33; // rax
  __int64 v34; // rt0
  __int64 (__fastcall *v35)(); // r12
  volatile signed __int64 *v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // r13
  bool v40; // of
  volatile signed __int64 *v41; // rax
  __int64 v42; // rt0
  volatile signed __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rcx
  volatile signed __int64 *v46; // rdx
  __int64 v47; // r12
  __int64 v48; // r15
  bool v49; // of
  volatile signed __int64 *v50; // rax
  __int64 v51; // rt0
  volatile signed __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  volatile signed __int64 *v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 (__fastcall **v59)(); // rcx
  __int64 v60; // rdx
  volatile signed __int64 *v61; // rax
  volatile signed __int64 *v62; // rcx
  volatile signed __int64 *v63; // rdx
  volatile signed __int64 *v64; // rcx
  __int64 (__fastcall *v65)(); // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // [rsp+8h] [rbp-228h]
  __int64 v69; // [rsp+10h] [rbp-220h]
  __int64 v70; // [rsp+10h] [rbp-220h]
  __int64 v71; // [rsp+10h] [rbp-220h]
  volatile signed __int64 *v72; // [rsp+28h] [rbp-208h] BYREF
  __int64 (__fastcall **v73)(); // [rsp+30h] [rbp-200h]
  __int64 v74; // [rsp+38h] [rbp-1F8h]
  __int64 (__fastcall *v75)(); // [rsp+40h] [rbp-1F0h]
  volatile signed __int64 v76; // [rsp+48h] [rbp-1E8h]
  volatile signed __int64 v77; // [rsp+50h] [rbp-1E0h]
  __int64 v78; // [rsp+58h] [rbp-1D8h]
  volatile signed __int64 *v79[3]; // [rsp+60h] [rbp-1D0h] BYREF
  volatile signed __int64 *v80; // [rsp+78h] [rbp-1B8h] BYREF
  __int64 v81; // [rsp+80h] [rbp-1B0h]
  __int64 *v82; // [rsp+88h] [rbp-1A8h]
  __int64 (__fastcall *v83)(); // [rsp+90h] [rbp-1A0h]
  volatile signed __int64 v84; // [rsp+98h] [rbp-198h]
  volatile signed __int64 v85; // [rsp+A0h] [rbp-190h]
  volatile signed __int64 **v86; // [rsp+A8h] [rbp-188h]
  __int64 *v87; // [rsp+B0h] [rbp-180h] BYREF
  __int64 v88; // [rsp+B8h] [rbp-178h]
  __int64 v89; // [rsp+C0h] [rbp-170h]
  __int64 (__fastcall *v90)(); // [rsp+C8h] [rbp-168h]
  volatile signed __int64 v91; // [rsp+D0h] [rbp-160h]
  volatile signed __int64 v92; // [rsp+D8h] [rbp-158h]
  volatile signed __int64 *v93; // [rsp+E8h] [rbp-148h] BYREF
  __int64 v94; // [rsp+F0h] [rbp-140h]
  __int64 v95; // [rsp+F8h] [rbp-138h]
  __int64 (__fastcall *v96)(); // [rsp+100h] [rbp-130h]
  volatile signed __int64 v97; // [rsp+108h] [rbp-128h]
  volatile signed __int64 v98; // [rsp+110h] [rbp-120h]
  volatile signed __int64 *v99; // [rsp+118h] [rbp-118h] BYREF
  volatile signed __int64 *v100; // [rsp+120h] [rbp-110h]
  __int64 (__fastcall *v101)(); // [rsp+128h] [rbp-108h]
  __int64 (__fastcall *v102)(); // [rsp+130h] [rbp-100h]
  volatile signed __int64 v103; // [rsp+138h] [rbp-F8h]
  volatile signed __int64 v104; // [rsp+140h] [rbp-F0h]
  __int64 v105; // [rsp+148h] [rbp-E8h]
  __int64 v106; // [rsp+150h] [rbp-E0h] BYREF
  __int64 v107; // [rsp+158h] [rbp-D8h] BYREF
  __int64 v108; // [rsp+160h] [rbp-D0h]
  __int64 v109; // [rsp+168h] [rbp-C8h]
  __int64 (__fastcall *v110)(); // [rsp+170h] [rbp-C0h]
  volatile signed __int64 v111; // [rsp+178h] [rbp-B8h]
  volatile signed __int64 v112; // [rsp+180h] [rbp-B0h]
  __int64 v113; // [rsp+188h] [rbp-A8h]
  volatile signed __int64 *v114; // [rsp+190h] [rbp-A0h] BYREF
  __int64 v115; // [rsp+198h] [rbp-98h]
  __int64 v116; // [rsp+1A0h] [rbp-90h]
  __int64 (__fastcall *v117)(); // [rsp+1A8h] [rbp-88h]
  volatile signed __int64 v118; // [rsp+1B0h] [rbp-80h]
  volatile signed __int64 v119; // [rsp+1B8h] [rbp-78h]
  __int64 v120; // [rsp+1C0h] [rbp-70h]
  volatile signed __int64 *v121; // [rsp+1C8h] [rbp-68h] BYREF
  __int64 v122; // [rsp+1D0h] [rbp-60h] BYREF
  __int64 v123; // [rsp+1D8h] [rbp-58h]
  volatile signed __int64 v124; // [rsp+1E0h] [rbp-50h]
  __int64 (__fastcall *v125)(); // [rsp+1E8h] [rbp-48h]
  volatile signed __int64 v126; // [rsp+1F0h] [rbp-40h]
  volatile signed __int64 v127; // [rsp+1F8h] [rbp-38h]
  __int64 v128; // [rsp+200h] [rbp-30h]

  v6 = a1; /*0x1004d372a*/
  v125 = (__int64 (__fastcall *)())0x8000000000000000LL; /*0x1004d373c*/
  v128 = a2; /*0x1004d3740*/
  v122 = 0; /*0x1004d3744*/
  v123 = 8; /*0x1004d374c*/
  v124 = 0; /*0x1004d3754*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204( /*0x1004d378c*/
    (unsigned __int64 *)&v107,
    a2,
    &unk_1012C76B7,
    18,
    &unk_1012C765A,
    12,
    0,
    0,
    v69);
  v7 = __OFSUB__(v107, 0x8000000000000025LL); /*0x1004d3791*/
  if ( v107 != 0x8000000000000025LL ) /*0x1004d3798*/
  {
    v92 = v112; /*0x1004d38e2*/
    v91 = v111; /*0x1004d38f0*/
    v90 = v110; /*0x1004d38fe*/
    v89 = v109; /*0x1004d390c*/
    v88 = v108; /*0x1004d3921*/
    v87 = (__int64 *)v107; /*0x1004d3928*/
    v80 = nullptr; /*0x1004d392f*/
    v81 = 1; /*0x1004d393a*/
    v82 = nullptr; /*0x1004d3945*/
    v95 = 1610612768; /*0x1004d3950*/
    v93 = (volatile signed __int64 *)&v80; /*0x1004d3962*/
    v94 = (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d3970*/
    if ( _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1004d3985*/
           (__int64 *)&v87,
           (__int64 *)&v93) )
    {
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d49f1*/
        (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwra"
                 "p()` on an `Err` value",
        55,
        (__int64)&v106,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
    }
    v14 = v80; /*0x1004d3992*/
    v15 = v81; /*0x1004d3999*/
    v16 = (__int64)v82; /*0x1004d39a0*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v87); /*0x1004d39ae*/
    goto LABEL_8; /*0x1004d39ae*/
  }
  v8 = v108; /*0x1004d379e*/
  v121 = (volatile signed __int64 *)v108; /*0x1004d37a5*/
  v9 = _InterlockedIncrement64((volatile signed __int64 *)v108); /*0x1004d37a9*/
  if ( (v9 < 0) ^ v7 | (v9 == 0) ) /*0x1004d37ad*/
    goto LABEL_79; /*0x1004d37ad*/
  v88 = 0; /*0x1004d37ba*/
  v89 = v8; /*0x1004d37c5*/
  v87 = (__int64 *)0x8000000000000025LL; /*0x1004d37d6*/
  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(&v122); /*0x1004d37e1*/
  v10 = (_QWORD *)v123; /*0x1004d37e6*/
  *(_QWORD *)(v123 + 40) = v92; /*0x1004d37f1*/
  v10[4] = v91; /*0x1004d37fc*/
  v10[3] = v90; /*0x1004d3807*/
  v10[2] = v89; /*0x1004d3812*/
  v11 = (__int64)v87; /*0x1004d3816*/
  v10[1] = v88; /*0x1004d3824*/
  *v10 = v11; /*0x1004d3828*/
  v114 = (volatile signed __int64 *)v122; /*0x1004d3833*/
  v115 = v123; /*0x1004d383a*/
  v117 = v125; /*0x1004d3845*/
  v118 = v126; /*0x1004d3850*/
  v119 = v127; /*0x1004d3858*/
  v120 = v128; /*0x1004d3860*/
  v116 = 1; /*0x1004d3864*/
  v12 = *a3; /*0x1004d386f*/
  if ( *a3 == 2 ) /*0x1004d3876*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d387c*/
    v13 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 1u); /*0x1004d388b*/
    if ( !v13 ) /*0x1004d3893*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1004d4a7d*/
    v13[2] = 0xB78FE5A6B4E8A88ALL; /*0x1004d38a3*/
    v13[1] = 0xE5BBB4E6B088E58BLL; /*0x1004d38b1*/
    *v13 = 0xB5E680A3E6AA9CE6LL; /*0x1004d38bf*/
    v122 = 24; /*0x1004d38c2*/
    v123 = (__int64)v13; /*0x1004d38ca*/
    v124 = 24; /*0x1004d38ce*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1004d39d8*/
      (size_t *)&v122,
      (__int64)(a3 + 25));
  }
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::he2bc2e6436b64f1a( /*0x1004d3a05*/
    &v87,
    a2,
    "tray_active_titletray_active_subtitletray_bootstrap_titletray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
    17,
    &v122,
    1,
    0);
  v17 = __OFSUB__(v87, 0x8000000000000025LL); /*0x1004d3a0a*/
  if ( v87 != (__int64 *)0x8000000000000025LL ) /*0x1004d3a11*/
  {
    v127 = v92; /*0x1004d3b74*/
    v126 = v91; /*0x1004d3b7f*/
    v125 = v90; /*0x1004d3b8a*/
    v124 = v89; /*0x1004d3b95*/
    v123 = v88; /*0x1004d3ba7*/
    v122 = (__int64)v87; /*0x1004d3bab*/
    v93 = nullptr; /*0x1004d3baf*/
    v94 = 1; /*0x1004d3bba*/
    v95 = 0; /*0x1004d3bc5*/
    v109 = 1610612768; /*0x1004d3bd0*/
    v107 = (__int64)&v93; /*0x1004d3be2*/
    v108 = (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d3bf0*/
    if ( _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v122, &v107) ) /*0x1004d3c02*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d4a1c*/
        (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwra"
                 "p()` on an `Err` value",
        55,
        (__int64)&v106,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v25 = v93; /*0x1004d3c0f*/
    v26 = v94; /*0x1004d3c16*/
    v27 = v95; /*0x1004d3c1d*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v122); /*0x1004d3c28*/
    *a1 = v25; /*0x1004d3c2d*/
    a1[1] = (volatile signed __int64 *)v26; /*0x1004d3c31*/
    a1[2] = (volatile signed __int64 *)v27; /*0x1004d3c35*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396((__int64 *)&v114); /*0x1004d3c40*/
    goto LABEL_20; /*0x1004d3c40*/
  }
  v86 = a1; /*0x1004d3a17*/
  v18 = v88; /*0x1004d3a1e*/
  v79[0] = (volatile signed __int64 *)v88; /*0x1004d3a25*/
  v19 = _InterlockedIncrement64((volatile signed __int64 *)v88); /*0x1004d3a2c*/
  if ( (v19 < 0) ^ v17 | (v19 == 0) ) /*0x1004d3a30*/
    goto LABEL_79; /*0x1004d3a30*/
  v123 = 0; /*0x1004d3a36*/
  v124 = v18; /*0x1004d3a3e*/
  v122 = 0x8000000000000025LL; /*0x1004d3a42*/
  v20 = v116; /*0x1004d3a46*/
  if ( (volatile signed __int64 *)v116 == v114 ) /*0x1004d3a54*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d((__int64 *)&v114); /*0x1004d3a5d*/
  v21 = 48 * v20; /*0x1004d3a67*/
  v22 = v115; /*0x1004d3a6b*/
  *(_QWORD *)(v115 + v21 + 40) = v127; /*0x1004d3a76*/
  *(_QWORD *)(v22 + v21 + 32) = v126; /*0x1004d3a7f*/
  *(_QWORD *)(v22 + v21 + 24) = v125; /*0x1004d3a88*/
  *(_QWORD *)(v22 + v21 + 16) = v124; /*0x1004d3a91*/
  v23 = v122; /*0x1004d3a96*/
  *(_QWORD *)(v22 + v21 + 8) = v123; /*0x1004d3a9e*/
  *(_QWORD *)(v22 + v21) = v23; /*0x1004d3aa6*/
  v101 = (__int64 (__fastcall *)())(v20 + 1); /*0x1004d3aaa*/
  v99 = v114; /*0x1004d3abf*/
  v100 = (volatile signed __int64 *)v115; /*0x1004d3ac6*/
  v102 = v117; /*0x1004d3ad4*/
  v103 = v118; /*0x1004d3adf*/
  v104 = v119; /*0x1004d3aea*/
  v105 = v120; /*0x1004d3af5*/
  if ( (_DWORD)v12 == 2 ) /*0x1004d3b00*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d3b06*/
    v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x1004d3b15*/
    if ( !v24 ) /*0x1004d3b1d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x1004d4a8e*/
    *(_QWORD *)(v24 + 8) = 0x646F432095BDE5BBLL; /*0x1004d3b2d*/
    *(_QWORD *)v24 = 0x99E78885E5B7AFE8LL; /*0x1004d3b3b*/
    *(_WORD *)(v24 + 16) = 30821; /*0x1004d3b3e*/
    v107 = 18; /*0x1004d3b44*/
    v108 = v24; /*0x1004d3b4f*/
    v109 = 18; /*0x1004d3b56*/
    v6 = v86; /*0x1004d3b61*/
  }
  else
  {
    v29 = *((unsigned __int8 *)a3 + 333); /*0x1004d3c6d*/
    v30 = (volatile signed __int64 *)((char *)dword_1012C8408 + dword_1012C8408[v29]); /*0x1004d3c80*/
    v31 = qword_1012C8430[v29]; /*0x1004d3c8a*/
    v93 = v30; /*0x1004d3c8e*/
    v94 = v31; /*0x1004d3c95*/
    codexmate_lib::commands::tray_menu::quota_text::h9f3644ceca6dbeac(&v87, a3); /*0x1004d3ca9*/
    v6 = v86; /*0x1004d3cae*/
    v122 = (__int64)&v93; /*0x1004d3cbc*/
    v123 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004d3cc7*/
    v124 = (volatile signed __int64)&v87; /*0x1004d3ccb*/
    v125 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004d3cd6*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v107, byte_10122A270, (unsigned __int64)&v122); /*0x1004d3cec*/
    if ( v87 ) /*0x1004d3cfb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d3d09*/
  }
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::he2bc2e6436b64f1a( /*0x1004d3d3c*/
    &v114,
    a2,
    "tray_active_subtitletray_bootstrap_titletray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
    20,
    &v107,
    1,
    0);
  v32 = __OFSUB__(v114, 0x8000000000000025LL); /*0x1004d3d41*/
  if ( v114 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d3d48*/
  {
    v127 = v119; /*0x1004d42e8*/
    v126 = v118; /*0x1004d42f0*/
    v125 = v117; /*0x1004d42fb*/
    v124 = v116; /*0x1004d4306*/
    v123 = v115; /*0x1004d4318*/
    v122 = (__int64)v114; /*0x1004d431c*/
    v107 = 0; /*0x1004d4320*/
    v108 = 1; /*0x1004d432b*/
    v109 = 0; /*0x1004d4336*/
    v89 = 1610612768; /*0x1004d4341*/
    v87 = &v107; /*0x1004d434c*/
    v88 = (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d435a*/
    if ( _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v122, (__int64 *)&v87) ) /*0x1004d436c*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d4a44*/
        (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwra"
                 "p()` on an `Err` value",
        55,
        (__int64)&v106,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v56 = v107; /*0x1004d4379*/
    v57 = v108; /*0x1004d4380*/
    v58 = v109; /*0x1004d4387*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v122); /*0x1004d4392*/
    *v6 = v56; /*0x1004d4397*/
    v6[1] = v57; /*0x1004d439b*/
    v6[2] = v58; /*0x1004d439f*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396((__int64 *)&v99); /*0x1004d43aa*/
    if ( !_InterlockedDecrement64(v79[0]) ) /*0x1004d43b6*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)v79); /*0x1004d43c7*/
LABEL_20:
    if ( !_InterlockedDecrement64(v121) ) /*0x1004d3c49*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)&v121); /*0x1004d3c53*/
    return v6; /*0x1004d3c53*/
  }
  v33 = v115; /*0x1004d3d4e*/
  v80 = (volatile signed __int64 *)v115; /*0x1004d3d55*/
  v34 = _InterlockedIncrement64((volatile signed __int64 *)v115); /*0x1004d3d5c*/
  if ( (v34 < 0) ^ v32 | (v34 == 0) ) /*0x1004d3d60*/
    goto LABEL_79; /*0x1004d3d60*/
  v123 = 0; /*0x1004d3d66*/
  v124 = v33; /*0x1004d3d6e*/
  v122 = 0x8000000000000025LL; /*0x1004d3d72*/
  v35 = v101; /*0x1004d3d76*/
  if ( (char *)v101 == (char *)v99 ) /*0x1004d3d84*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d((__int64 *)&v99); /*0x1004d3d8d*/
  v36 = v100; /*0x1004d3d92*/
  v37 = 6LL * (_QWORD)v35; /*0x1004d3d9d*/
  v100[v37 + 5] = v127; /*0x1004d3da5*/
  v36[v37 + 4] = v126; /*0x1004d3dae*/
  v36[v37 + 3] = (volatile signed __int64)v125; /*0x1004d3db7*/
  v36[v37 + 2] = v124; /*0x1004d3dc0*/
  v38 = v122; /*0x1004d3dc5*/
  v36[v37 + 1] = v123; /*0x1004d3dcd*/
  v36[v37] = v38; /*0x1004d3dd2*/
  v74 = (__int64)v35 + 1; /*0x1004d3dd9*/
  v72 = v99; /*0x1004d3dee*/
  v73 = (__int64 (__fastcall **)())v100; /*0x1004d3df5*/
  v75 = v102; /*0x1004d3e03*/
  v76 = v103; /*0x1004d3e11*/
  v77 = v104; /*0x1004d3e1f*/
  v78 = v105; /*0x1004d3e2d*/
  tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h03127775174186d9(&v107, (__int64 *)&v72); /*0x1004d3e42*/
  if ( !_InterlockedDecrement64(v80) ) /*0x1004d3e4e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)&v80); /*0x1004d3e62*/
  if ( !_InterlockedDecrement64(v79[0]) ) /*0x1004d3e6e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)v79); /*0x1004d3e7b*/
  if ( !_InterlockedDecrement64(v121) ) /*0x1004d3e84*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)&v121); /*0x1004d3e8e*/
  v39 = a3[84]; /*0x1004d3e93*/
  if ( v39 < 2 ) /*0x1004d3e9e*/
    goto LABEL_59; /*0x1004d3e9e*/
  v128 = v113; /*0x1004d3eab*/
  v127 = v112; /*0x1004d3eb6*/
  v126 = v111; /*0x1004d3ec1*/
  v125 = v110; /*0x1004d3ecc*/
  v124 = v109; /*0x1004d3ed7*/
  v123 = v108; /*0x1004d3ee9*/
  v122 = v107; /*0x1004d3eed*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204( /*0x1004d3f24*/
    (unsigned __int64 *)&v99,
    a2,
    &unk_1012C76C9,
    20,
    &unk_1012C76DD,
    12,
    0,
    0,
    v70);
  v40 = __OFSUB__(v99, 0x8000000000000025LL); /*0x1004d3f33*/
  if ( v99 == (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d3f3a*/
  {
    v41 = v100; /*0x1004d3f40*/
    v93 = v100; /*0x1004d3f47*/
    v42 = _InterlockedIncrement64(v100); /*0x1004d3f4e*/
    if ( !((v42 < 0) ^ v40 | (v42 == 0)) ) /*0x1004d3f52*/
    {
      v115 = 0; /*0x1004d3f58*/
      v116 = (__int64)v41; /*0x1004d3f63*/
      v114 = (volatile signed __int64 *)0x8000000000000025LL; /*0x1004d3f6a*/
      v43 = v124; /*0x1004d3f71*/
      if ( v124 == v122 ) /*0x1004d3f79*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(&v122); /*0x1004d3f7f*/
      v44 = v123; /*0x1004d3f84*/
      v45 = 48 * v43; /*0x1004d3f8c*/
      *(_QWORD *)(v123 + v45 + 40) = v119; /*0x1004d3f94*/
      *(_QWORD *)(v44 + v45 + 32) = v118; /*0x1004d3f9d*/
      *(_QWORD *)(v44 + v45 + 24) = v117; /*0x1004d3fa9*/
      *(_QWORD *)(v44 + v45 + 16) = v116; /*0x1004d3fb5*/
      v46 = v114; /*0x1004d3fba*/
      *(_QWORD *)(v44 + v45 + 8) = v115; /*0x1004d3fc8*/
      *(_QWORD *)(v44 + v45) = v46; /*0x1004d3fcd*/
      v109 = v43 + 1; /*0x1004d3fd4*/
      v107 = v122; /*0x1004d3fe3*/
      v108 = v123; /*0x1004d3fea*/
      v110 = v125; /*0x1004d3ff5*/
      v111 = v126; /*0x1004d4000*/
      v112 = v127; /*0x1004d400b*/
      v113 = v128; /*0x1004d4016*/
      if ( !_InterlockedDecrement64(v93) ) /*0x1004d4024*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)&v93); /*0x1004d4031*/
      v47 = a3[83] + 176; /*0x1004d403c*/
      v48 = 336 * v39; /*0x1004d4043*/
      do /*0x1004d4075*/
      {
        v128 = v113; /*0x1004d4082*/
        v127 = v112; /*0x1004d408d*/
        v126 = v111; /*0x1004d4098*/
        v125 = v110; /*0x1004d40a3*/
        v124 = v109; /*0x1004d40ae*/
        v123 = v108; /*0x1004d40c0*/
        v122 = v107; /*0x1004d40c4*/
        v114 = (volatile signed __int64 *)&off_101531490; /*0x1004d40cf*/
        v115 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004d40dd*/
        v116 = v47; /*0x1004d40e4*/
        v117 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004d40eb*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1004d4103*/
          (size_t *)&v72,
          (unsigned __int8 *)"\xC0\xC0",
          (unsigned __int64)&v114);
        v93 = v72; /*0x1004d411e*/
        v94 = (__int64)v73; /*0x1004d4125*/
        v95 = v74; /*0x1004d4133*/
        codexmate_lib::commands::tray_menu::quota_text::h9f3644ceca6dbeac(&v72, v47 - 176); /*0x1004d413d*/
        v114 = (volatile signed __int64 *)(v47 + 24); /*0x1004d4147*/
        v115 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004d414e*/
        v116 = (__int64)&v72; /*0x1004d4155*/
        v117 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004d415c*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v87, byte_10122A5E7, (unsigned __int64)&v114); /*0x1004d4178*/
        if ( v72 ) /*0x1004d4191*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d419f*/
        tauri::menu::check::_$LT$impl$u20$tauri..menu..CheckMenuItem$LT$R$GT$$GT$::with_id::h06ffff7828d177fb( /*0x1004d41d3*/
          (unsigned int)&v99,
          a2,
          (unsigned int)&v93,
          (unsigned int)&v87,
          1,
          *(unsigned __int8 *)(v47 + 153),
          0,
          v68);
        v49 = __OFSUB__(v99, 0x8000000000000025LL); /*0x1004d41d8*/
        if ( v99 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d41df*/
        {
          v119 = v104; /*0x1004d44b6*/
          v118 = v103; /*0x1004d44c1*/
          v117 = v102; /*0x1004d44cc*/
          v116 = (__int64)v101; /*0x1004d44da*/
          v115 = (__int64)v100; /*0x1004d44ef*/
          v114 = v99; /*0x1004d44f6*/
          codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h6d6876660b2cfe09( /*0x1004d450b*/
            &v72,
            (__int64 *)&v114);
          v59 = v73; /*0x1004d4517*/
          v60 = v74; /*0x1004d451e*/
          v6 = v86; /*0x1004d4525*/
          *v86 = v72; /*0x1004d452c*/
          v6[1] = v59; /*0x1004d4530*/
          v6[2] = v60; /*0x1004d4534*/
          goto LABEL_9; /*0x1004d4538*/
        }
        v50 = v100; /*0x1004d41e5*/
        v80 = v100; /*0x1004d41ec*/
        v51 = _InterlockedIncrement64(v100); /*0x1004d41f3*/
        if ( (v51 < 0) ^ v49 | (v51 == 0) ) /*0x1004d41f7*/
          goto LABEL_79; /*0x1004d41f7*/
        v115 = 3; /*0x1004d41fd*/
        v116 = (__int64)v50; /*0x1004d4208*/
        v114 = (volatile signed __int64 *)0x8000000000000025LL; /*0x1004d420f*/
        v52 = v124; /*0x1004d4216*/
        if ( v124 == v122 ) /*0x1004d421e*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(&v122); /*0x1004d4224*/
        v53 = v123; /*0x1004d4229*/
        v54 = 48 * v52; /*0x1004d4231*/
        *(_QWORD *)(v123 + v54 + 40) = v119; /*0x1004d4239*/
        *(_QWORD *)(v53 + v54 + 32) = v118; /*0x1004d4242*/
        *(_QWORD *)(v53 + v54 + 24) = v117; /*0x1004d424e*/
        *(_QWORD *)(v53 + v54 + 16) = v116; /*0x1004d425a*/
        v55 = v114; /*0x1004d425f*/
        *(_QWORD *)(v53 + v54 + 8) = v115; /*0x1004d426d*/
        *(_QWORD *)(v53 + v54) = v55; /*0x1004d4272*/
        v109 = v52 + 1; /*0x1004d4279*/
        v107 = v122; /*0x1004d4288*/
        v108 = v123; /*0x1004d428f*/
        v110 = v125; /*0x1004d429a*/
        v111 = v126; /*0x1004d42a5*/
        v112 = v127; /*0x1004d42b0*/
        v113 = v128; /*0x1004d42bb*/
        if ( !_InterlockedDecrement64(v80) ) /*0x1004d42c9*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h76e9d808f5bb84a7(&v80); /*0x1004d42da*/
        v47 += 336; /*0x1004d4060*/
        v48 -= 336; /*0x1004d4067*/
      }
      while ( v48 ); /*0x1004d4075*/
      v128 = v113; /*0x1004d4544*/
      v127 = v112; /*0x1004d454f*/
      v126 = v111; /*0x1004d455a*/
      v125 = v110; /*0x1004d4565*/
      v124 = v109; /*0x1004d4570*/
      v123 = v108; /*0x1004d4582*/
      v122 = v107; /*0x1004d4586*/
      tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h03127775174186d9(&v107, &v122); /*0x1004d4595*/
LABEL_59:
      v122 = v107; /*0x1004d45a1*/
      v123 = v108; /*0x1004d45b3*/
      v124 = v109; /*0x1004d45be*/
      v125 = v110; /*0x1004d45c9*/
      v126 = v111; /*0x1004d45d4*/
      v127 = v112; /*0x1004d45df*/
      v128 = v113; /*0x1004d45ea*/
      codexmate_lib::commands::tray_menu::append_codex_router_section::hb12456df8a4e114b( /*0x1004d45fc*/
        (__int64 *)&v114,
        a2,
        &v122,
        a4,
        a5);
      v99 = (volatile signed __int64 *)v115; /*0x1004d460f*/
      v100 = (volatile signed __int64 *)v116; /*0x1004d461d*/
      v101 = v117; /*0x1004d462b*/
      if ( v114 == (volatile signed __int64 *)0x8000000000000000LL ) /*0x1004d4635*/
      {
        v6 = v86; /*0x1004d463e*/
        v86[2] = (volatile signed __int64 *)v101; /*0x1004d4645*/
        v61 = v99; /*0x1004d4649*/
        v6[1] = v100; /*0x1004d4657*/
        *v6 = v61; /*0x1004d465b*/
        return v6; /*0x1004d465f*/
      }
      v128 = v120; /*0x1004d4668*/
      v127 = v119; /*0x1004d4674*/
      v126 = v118; /*0x1004d4678*/
      v123 = (__int64)v99; /*0x1004d468a*/
      v124 = (volatile signed __int64)v100; /*0x1004d468e*/
      v125 = v101; /*0x1004d4699*/
      v122 = (__int64)v114; /*0x1004d469d*/
      tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h03127775174186d9((__int64 *)&v114, &v122); /*0x1004d46ac*/
      tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204( /*0x1004d46e4*/
        (unsigned __int64 *)&v93,
        a2,
        "tray_open_maintray_active_titletray_active_subtitletray_bootstrap_titletray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
        14,
        &unk_1012C7687,
        13,
        1,
        0,
        v70);
      v6 = v86; /*0x1004d46e9*/
      if ( v93 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d4701*/
      {
        v127 = v98; /*0x1004d4840*/
        v126 = v97; /*0x1004d484b*/
        v125 = v96; /*0x1004d4856*/
        v124 = v95; /*0x1004d4861*/
        v123 = v94; /*0x1004d4873*/
        v122 = (__int64)v93; /*0x1004d4877*/
        codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h6d6876660b2cfe09( /*0x1004d4886*/
          v79,
          &v122);
        v62 = v79[1]; /*0x1004d4892*/
        v63 = v79[2]; /*0x1004d4899*/
        *v6 = v79[0]; /*0x1004d48a0*/
        v6[1] = v62; /*0x1004d48a4*/
        v6[2] = v63; /*0x1004d48a8*/
        core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396((__int64 *)&v114); /*0x1004d48b3*/
        return v6; /*0x1004d48b8*/
      }
      v121 = (volatile signed __int64 *)v94; /*0x1004d470e*/
      tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::item::hd7acccfd486d9811( /*0x1004d472b*/
        (__int64 *)&v99,
        (__int64 *)&v114,
        (__int64)&v121,
        (__int64)&off_101531460);
      tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h03127775174186d9( /*0x1004d473e*/
        (__int64 *)&v72,
        (__int64 *)&v99);
      tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204( /*0x1004d4776*/
        (unsigned __int64 *)&v114,
        a2,
        "tray_quittray_account:",
        9,
        &unk_1012C7694,
        6,
        1,
        0,
        v71);
      if ( v114 == (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d478c*/
      {
        v93 = (volatile signed __int64 *)v115; /*0x1004d4799*/
        tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::item::hd7acccfd486d9811( /*0x1004d47bc*/
          (__int64 *)&v87,
          (__int64 *)&v72,
          (__int64)&v93,
          (__int64)&off_101531460);
        tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::build::h2a8e6475e31a37a1(&v80, (__int64 *)&v87); /*0x1004d47cf*/
        if ( v80 == (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d47e5*/
        {
          v106 = v81; /*0x1004d47f2*/
          if ( !_InterlockedDecrement64(v93) ) /*0x1004d4800*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)&v93); /*0x1004d480d*/
          if ( !_InterlockedDecrement64(v121) ) /*0x1004d4816*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)&v121); /*0x1004d4820*/
          v6[1] = v106; /*0x1004d482c*/
          *v6 = 0x8000000000000000LL; /*0x1004d4830*/
          return v6; /*0x1004d4834*/
        }
        v127 = v85; /*0x1004d4942*/
        v126 = v84; /*0x1004d494d*/
        v125 = v83; /*0x1004d4958*/
        v124 = (volatile signed __int64)v82; /*0x1004d4963*/
        v123 = v81; /*0x1004d4975*/
        v122 = (__int64)v80; /*0x1004d4979*/
        codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h6d6876660b2cfe09( /*0x1004d4988*/
          &v114,
          &v122);
        v66 = v115; /*0x1004d4994*/
        v67 = v116; /*0x1004d499b*/
        *v6 = v114; /*0x1004d49a2*/
        v6[1] = v66; /*0x1004d49a6*/
        v6[2] = v67; /*0x1004d49aa*/
        if ( !_InterlockedDecrement64(v93) ) /*0x1004d49b5*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)&v93); /*0x1004d49c6*/
      }
      else
      {
        v127 = v119; /*0x1004d48c1*/
        v126 = v118; /*0x1004d48c9*/
        v125 = v117; /*0x1004d48d4*/
        v124 = v116; /*0x1004d48df*/
        v123 = v115; /*0x1004d48f1*/
        v122 = (__int64)v114; /*0x1004d48f5*/
        codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h6d6876660b2cfe09( /*0x1004d4904*/
          &v99,
          &v122);
        v64 = v100; /*0x1004d4910*/
        v65 = v101; /*0x1004d4917*/
        *v6 = v99; /*0x1004d491e*/
        v6[1] = v64; /*0x1004d4922*/
        v6[2] = v65; /*0x1004d4926*/
        core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396((__int64 *)&v72); /*0x1004d4931*/
      }
      goto LABEL_20; /*0x1004d49cb*/
    }
LABEL_79:
    BUG(); /*0x1004d4a93*/
  }
  v119 = v104; /*0x1004d43d8*/
  v118 = v103; /*0x1004d43e3*/
  v117 = v102; /*0x1004d43ee*/
  v116 = (__int64)v101; /*0x1004d43fc*/
  v115 = (__int64)v100; /*0x1004d4411*/
  v114 = v99; /*0x1004d4418*/
  v87 = nullptr; /*0x1004d441f*/
  v88 = 1; /*0x1004d442a*/
  v89 = 0; /*0x1004d4435*/
  v74 = 1610612768; /*0x1004d4440*/
  v72 = (volatile signed __int64 *)&v87; /*0x1004d4452*/
  v73 = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d4460*/
  if ( _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1004d4475*/
         (__int64 *)&v114,
         (__int64 *)&v72) )
  {
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d4a6c*/
      (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap("
               ")` on an `Err` value",
      55,
      (__int64)&v106,
      (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
      (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
  }
  v14 = v87; /*0x1004d4482*/
  v15 = v88; /*0x1004d4489*/
  v16 = v89; /*0x1004d4490*/
  core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v114); /*0x1004d449e*/
  v6 = v86; /*0x1004d44a3*/
LABEL_8:
  *v6 = v14; /*0x1004d39b3*/
  v6[1] = v15; /*0x1004d39b7*/
  v6[2] = v16; /*0x1004d39bb*/
LABEL_9:
  core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396(&v122); /*0x1004d39bf*/
  return v6; /*0x1004d3c5b*/
}