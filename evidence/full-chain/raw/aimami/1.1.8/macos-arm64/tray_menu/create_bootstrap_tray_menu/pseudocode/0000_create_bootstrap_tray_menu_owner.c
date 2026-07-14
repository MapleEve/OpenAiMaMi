// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x1004d1d60 depth=0
// create_bootstrap_tray_menu_owner
volatile signed __int64 **__fastcall codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::h2c50152c9250541b(
        volatile signed __int64 **a1,
        __int64 a2)
{
  bool v3; // of
  __int64 v4; // rax
  __int64 v5; // rt0
  _QWORD *v6; // rax
  volatile signed __int64 *v7; // rcx
  bool v8; // of
  volatile signed __int64 *v9; // rax
  __int64 v10; // rt0
  __int64 v11; // r12
  volatile signed __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  volatile signed __int64 *v14; // rdx
  bool v15; // of
  volatile signed __int64 *v16; // rax
  __int64 v17; // rt0
  volatile signed __int64 *v18; // r15
  volatile signed __int64 *v19; // rax
  __int64 v20; // rcx
  volatile signed __int64 *v21; // rdx
  volatile signed __int64 *v22; // rax
  volatile signed __int64 *v23; // r14
  __int64 v24; // r15
  volatile signed __int64 *v25; // r12
  volatile signed __int64 *v26; // r14
  __int64 v27; // r15
  __int64 v28; // r12
  volatile signed __int64 **v29; // rdi
  volatile signed __int64 **v31; // r14
  __int64 v32; // r15
  __int64 v33; // r12
  bool v34; // of
  __int64 v35; // rax
  __int64 v36; // rt0
  __int64 v37; // r15
  volatile signed __int64 *v38; // rax
  unsigned __int64 v39; // rcx
  volatile signed __int64 *v40; // rdx
  volatile signed __int64 *v41; // r14
  __int64 v42; // r15
  volatile signed __int64 *v43; // r12
  volatile signed __int64 *v44; // rcx
  volatile signed __int64 *v45; // rdx
  volatile signed __int64 *v46; // rax
  volatile signed __int64 *v47; // [rsp+18h] [rbp-218h] BYREF
  __int64 v48; // [rsp+20h] [rbp-210h]
  volatile signed __int64 *v49; // [rsp+28h] [rbp-208h]
  volatile signed __int64 *v50; // [rsp+30h] [rbp-200h] BYREF
  volatile signed __int64 *v51; // [rsp+38h] [rbp-1F8h]
  volatile signed __int64 *v52; // [rsp+40h] [rbp-1F0h]
  __int64 v53; // [rsp+48h] [rbp-1E8h]
  volatile signed __int64 v54; // [rsp+50h] [rbp-1E0h]
  volatile signed __int64 v55; // [rsp+58h] [rbp-1D8h]
  __int64 v56; // [rsp+60h] [rbp-1D0h]
  volatile signed __int64 **v57; // [rsp+68h] [rbp-1C8h] BYREF
  __int64 v58; // [rsp+70h] [rbp-1C0h]
  __int64 v59; // [rsp+78h] [rbp-1B8h]
  unsigned __int64 v60; // [rsp+80h] [rbp-1B0h]
  volatile signed __int64 v61; // [rsp+88h] [rbp-1A8h]
  volatile signed __int64 v62; // [rsp+90h] [rbp-1A0h]
  volatile signed __int64 *v63[3]; // [rsp+A0h] [rbp-190h] BYREF
  volatile signed __int64 *v64; // [rsp+B8h] [rbp-178h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-170h]
  volatile signed __int64 *v66; // [rsp+C8h] [rbp-168h]
  unsigned __int64 v67; // [rsp+D0h] [rbp-160h]
  volatile signed __int64 v68; // [rsp+D8h] [rbp-158h]
  volatile signed __int64 v69; // [rsp+E0h] [rbp-150h]
  volatile signed __int64 *v70; // [rsp+E8h] [rbp-148h] BYREF
  volatile signed __int64 *v71; // [rsp+F0h] [rbp-140h]
  volatile signed __int64 *v72; // [rsp+F8h] [rbp-138h]
  unsigned __int64 v73; // [rsp+100h] [rbp-130h]
  volatile signed __int64 v74; // [rsp+108h] [rbp-128h]
  volatile signed __int64 v75; // [rsp+110h] [rbp-120h]
  __int64 v76; // [rsp+118h] [rbp-118h]
  volatile signed __int64 *v77; // [rsp+120h] [rbp-110h] BYREF
  volatile signed __int64 *v78; // [rsp+128h] [rbp-108h]
  __int64 v79; // [rsp+130h] [rbp-100h]
  unsigned __int64 v80; // [rsp+138h] [rbp-F8h]
  volatile signed __int64 v81; // [rsp+140h] [rbp-F0h]
  volatile signed __int64 v82; // [rsp+148h] [rbp-E8h]
  volatile signed __int64 *v83; // [rsp+158h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+160h] [rbp-D0h]
  __int64 v85; // [rsp+168h] [rbp-C8h]
  unsigned __int64 v86; // [rsp+170h] [rbp-C0h]
  volatile signed __int64 v87; // [rsp+178h] [rbp-B8h]
  volatile signed __int64 v88; // [rsp+180h] [rbp-B0h]
  volatile signed __int64 *v89; // [rsp+188h] [rbp-A8h] BYREF
  volatile signed __int64 *v90; // [rsp+190h] [rbp-A0h] BYREF
  volatile signed __int64 *v91; // [rsp+198h] [rbp-98h]
  __int64 v92; // [rsp+1A0h] [rbp-90h]
  unsigned __int64 v93; // [rsp+1A8h] [rbp-88h]
  volatile signed __int64 v94; // [rsp+1B0h] [rbp-80h]
  volatile signed __int64 v95; // [rsp+1B8h] [rbp-78h]
  __int64 v96; // [rsp+1C0h] [rbp-70h]
  volatile signed __int64 *v97; // [rsp+1C8h] [rbp-68h] BYREF
  __int64 v98; // [rsp+1D0h] [rbp-60h]
  volatile signed __int64 *v99; // [rsp+1D8h] [rbp-58h]
  unsigned __int64 v100; // [rsp+1E0h] [rbp-50h]
  volatile signed __int64 v101; // [rsp+1E8h] [rbp-48h]
  volatile signed __int64 v102; // [rsp+1F0h] [rbp-40h]
  __int64 v103; // [rsp+1F8h] [rbp-38h]
  _BYTE v104[41]; // [rsp+207h] [rbp-29h] BYREF

  v100 = 0x8000000000000000LL; /*0x1004d1d88*/
  v103 = a2; /*0x1004d1d8c*/
  v97 = nullptr; /*0x1004d1d90*/
  v98 = 8; /*0x1004d1d98*/
  v99 = nullptr; /*0x1004d1da0*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204( /*0x1004d1ddb*/
    &v57,
    a2,
    &unk_1012C7645,
    21,
    &unk_1012C765A,
    12,
    0,
    0);
  v3 = __OFSUB__(v57, 0x8000000000000025LL); /*0x1004d1de0*/
  if ( v57 != (volatile signed __int64 **)0x8000000000000025LL ) /*0x1004d1de7*/
  {
    v82 = v62; /*0x1004d21d9*/
    v81 = v61; /*0x1004d21e7*/
    v80 = v60; /*0x1004d21f5*/
    v79 = v59; /*0x1004d2203*/
    v78 = (volatile signed __int64 *)v58; /*0x1004d2218*/
    v77 = (volatile signed __int64 *)v57; /*0x1004d221f*/
    v64 = nullptr; /*0x1004d2226*/
    v65 = 1; /*0x1004d2231*/
    v66 = nullptr; /*0x1004d223c*/
    v85 = 1610612768; /*0x1004d2247*/
    v83 = (volatile signed __int64 *)&v64; /*0x1004d2259*/
    v84 = (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d2267*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v77, &v83) ) /*0x1004d227c*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d2957*/
        (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwra"
                 "p()` on an `Err` value",
        55,
        (__int64)v104,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v23 = v64; /*0x1004d2289*/
    v24 = v65; /*0x1004d2290*/
    v25 = v66; /*0x1004d2297*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v77); /*0x1004d22a5*/
    *a1 = v23; /*0x1004d22aa*/
    a1[1] = (volatile signed __int64 *)v24; /*0x1004d22ad*/
    a1[2] = v25; /*0x1004d22b1*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396(&v97); /*0x1004d22b9*/
    return a1; /*0x1004d22be*/
  }
  v4 = v58; /*0x1004d1ded*/
  v63[0] = (volatile signed __int64 *)v58; /*0x1004d1df4*/
  v5 = _InterlockedIncrement64((volatile signed __int64 *)v58); /*0x1004d1dfb*/
  if ( (v5 < 0) ^ v3 | (v5 == 0) ) /*0x1004d1dff*/
LABEL_49:
    BUG(); /*0x1004d29cb*/
  v78 = nullptr; /*0x1004d1e05*/
  v79 = v4; /*0x1004d1e10*/
  v77 = (volatile signed __int64 *)0x8000000000000025LL; /*0x1004d1e17*/
  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d((__int64 *)&v97); /*0x1004d1e22*/
  v6 = (_QWORD *)v98; /*0x1004d1e27*/
  *(_QWORD *)(v98 + 40) = v82; /*0x1004d1e32*/
  v6[4] = v81; /*0x1004d1e3d*/
  v6[3] = v80; /*0x1004d1e48*/
  v6[2] = v79; /*0x1004d1e53*/
  v7 = v77; /*0x1004d1e57*/
  v6[1] = v78; /*0x1004d1e65*/
  *v6 = v7; /*0x1004d1e69*/
  v90 = v97; /*0x1004d1e74*/
  v91 = (volatile signed __int64 *)v98; /*0x1004d1e7b*/
  v93 = v100; /*0x1004d1e86*/
  v94 = v101; /*0x1004d1e91*/
  v95 = v102; /*0x1004d1e99*/
  v96 = v103; /*0x1004d1ea1*/
  v92 = 1; /*0x1004d1ea5*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204( /*0x1004d1ee3*/
    &v77,
    a2,
    "tray_bootstrap_titletray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
    20,
    &unk_1012C7666,
    6,
    1,
    0);
  v8 = __OFSUB__(v77, 0x8000000000000025LL); /*0x1004d1ee8*/
  if ( v77 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d1eef*/
  {
    v102 = v82; /*0x1004d22ca*/
    v101 = v81; /*0x1004d22d5*/
    v100 = v80; /*0x1004d22e0*/
    v99 = (volatile signed __int64 *)v79; /*0x1004d22eb*/
    v98 = (__int64)v78; /*0x1004d22fd*/
    v97 = v77; /*0x1004d2301*/
    v83 = nullptr; /*0x1004d2305*/
    v84 = 1; /*0x1004d2310*/
    v85 = 0; /*0x1004d231b*/
    v59 = 1610612768; /*0x1004d2326*/
    v57 = &v83; /*0x1004d2338*/
    v58 = (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d2346*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v97, &v57) ) /*0x1004d2358*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d297c*/
        (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwra"
                 "p()` on an `Err` value",
        55,
        (__int64)v104,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v26 = v83; /*0x1004d2365*/
    v27 = v84; /*0x1004d236c*/
    v28 = v85; /*0x1004d2373*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v97); /*0x1004d237e*/
    *a1 = v26; /*0x1004d2383*/
    a1[1] = (volatile signed __int64 *)v27; /*0x1004d2386*/
    a1[2] = (volatile signed __int64 *)v28; /*0x1004d238a*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396(&v90); /*0x1004d2395*/
    goto LABEL_23; /*0x1004d2395*/
  }
  v9 = v78; /*0x1004d1ef5*/
  v64 = v78; /*0x1004d1efc*/
  v10 = _InterlockedIncrement64(v78); /*0x1004d1f03*/
  if ( (v10 < 0) ^ v8 | (v10 == 0) ) /*0x1004d1f07*/
    goto LABEL_49; /*0x1004d1f07*/
  v98 = 0; /*0x1004d1f10*/
  v99 = v9; /*0x1004d1f18*/
  v97 = (volatile signed __int64 *)0x8000000000000025LL; /*0x1004d1f26*/
  v11 = v92; /*0x1004d1f2a*/
  if ( (volatile signed __int64 *)v92 == v90 ) /*0x1004d1f38*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d((__int64 *)&v90); /*0x1004d1f41*/
  v12 = v91; /*0x1004d1f46*/
  v13 = 6 * v11; /*0x1004d1f51*/
  v91[v13 + 5] = v102; /*0x1004d1f59*/
  v12[v13 + 4] = v101; /*0x1004d1f62*/
  v12[v13 + 3] = v100; /*0x1004d1f6b*/
  v12[v13 + 2] = (volatile signed __int64)v99; /*0x1004d1f74*/
  v14 = v97; /*0x1004d1f79*/
  v12[v13 + 1] = v98; /*0x1004d1f81*/
  v12[v13] = (volatile signed __int64)v14; /*0x1004d1f86*/
  v72 = (volatile signed __int64 *)(v11 + 1); /*0x1004d1f8d*/
  v70 = v90; /*0x1004d1fa2*/
  v71 = v91; /*0x1004d1fa9*/
  v73 = v93; /*0x1004d1fb7*/
  v74 = v94; /*0x1004d1fc2*/
  v75 = v95; /*0x1004d1fcd*/
  v76 = v96; /*0x1004d1fd8*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204( /*0x1004d2012*/
    &v90,
    a2,
    "tray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
    23,
    &unk_1012C766C,
    27,
    1,
    0);
  v15 = __OFSUB__(v90, 0x8000000000000025LL); /*0x1004d2021*/
  if ( v90 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d2028*/
  {
    v102 = v95; /*0x1004d23cc*/
    v101 = v94; /*0x1004d23d4*/
    v100 = v93; /*0x1004d23df*/
    v99 = (volatile signed __int64 *)v92; /*0x1004d23ea*/
    v98 = (__int64)v91; /*0x1004d23fc*/
    v97 = v90; /*0x1004d2400*/
    v57 = nullptr; /*0x1004d2404*/
    v58 = 1; /*0x1004d240f*/
    v59 = 0; /*0x1004d241a*/
    v79 = 1610612768; /*0x1004d2425*/
    v77 = (volatile signed __int64 *)&v57; /*0x1004d2430*/
    v78 = (volatile signed __int64 *)&anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d243e*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v97, &v77) ) /*0x1004d2450*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d29a1*/
        (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwra"
                 "p()` on an `Err` value",
        55,
        (__int64)v104,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v31 = v57; /*0x1004d245d*/
    v32 = v58; /*0x1004d2464*/
    v33 = v59; /*0x1004d246b*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v97); /*0x1004d2476*/
    *a1 = (volatile signed __int64 *)v31; /*0x1004d247b*/
    a1[1] = (volatile signed __int64 *)v32; /*0x1004d247e*/
    a1[2] = (volatile signed __int64 *)v33; /*0x1004d2482*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396(&v70); /*0x1004d248d*/
    if ( !_InterlockedDecrement64(v64) ) /*0x1004d2499*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a(&v64); /*0x1004d24aa*/
LABEL_23:
    if ( _InterlockedDecrement64(v63[0]) ) /*0x1004d23a1*/
      return a1; /*0x1004d23a5*/
    v29 = v63; /*0x1004d23a7*/
LABEL_25:
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a(v29); /*0x1004d23ae*/
    return a1; /*0x1004d23ae*/
  }
  v16 = v91; /*0x1004d202e*/
  v83 = v91; /*0x1004d2035*/
  v17 = _InterlockedIncrement64(v91); /*0x1004d203c*/
  if ( (v17 < 0) ^ v15 | (v17 == 0) ) /*0x1004d2040*/
    goto LABEL_49; /*0x1004d2040*/
  v98 = 0; /*0x1004d2049*/
  v99 = v16; /*0x1004d2051*/
  v97 = (volatile signed __int64 *)0x8000000000000025LL; /*0x1004d205f*/
  v18 = v72; /*0x1004d2063*/
  if ( v72 == v70 ) /*0x1004d2071*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d((__int64 *)&v70); /*0x1004d207a*/
  v19 = v71; /*0x1004d207f*/
  v20 = 6LL * (_QWORD)v18; /*0x1004d208a*/
  v71[v20 + 5] = v102; /*0x1004d2092*/
  v19[v20 + 4] = v101; /*0x1004d209b*/
  v19[v20 + 3] = v100; /*0x1004d20a4*/
  v19[v20 + 2] = (volatile signed __int64)v99; /*0x1004d20ad*/
  v21 = v97; /*0x1004d20b2*/
  v19[v20 + 1] = v98; /*0x1004d20ba*/
  v19[v20] = (volatile signed __int64)v21; /*0x1004d20bf*/
  v52 = (volatile signed __int64 *)((char *)v18 + 1); /*0x1004d20c6*/
  v50 = v70; /*0x1004d20db*/
  v51 = v71; /*0x1004d20e2*/
  v53 = v73; /*0x1004d20f0*/
  v54 = v74; /*0x1004d20fe*/
  v55 = v75; /*0x1004d210c*/
  v56 = v76; /*0x1004d211a*/
  if ( !_InterlockedDecrement64(v83) ) /*0x1004d2128*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a(&v83); /*0x1004d2135*/
  if ( !_InterlockedDecrement64(v64) ) /*0x1004d2141*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a(&v64); /*0x1004d214e*/
  if ( !_InterlockedDecrement64(v63[0]) ) /*0x1004d215a*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a(v63); /*0x1004d2167*/
  codexmate_lib::commands::tray_menu::append_codex_router_section::hb12456df8a4e114b(&v97, a2, &v50); /*0x1004d217a*/
  v90 = (volatile signed __int64 *)v98; /*0x1004d2187*/
  v91 = v99; /*0x1004d2192*/
  v92 = v100; /*0x1004d219d*/
  if ( v97 == (volatile signed __int64 *)0x8000000000000000LL ) /*0x1004d21a7*/
  {
    a1[2] = (volatile signed __int64 *)v92; /*0x1004d21b4*/
    v22 = v90; /*0x1004d21b8*/
    a1[1] = v91; /*0x1004d21c6*/
    *a1 = v22; /*0x1004d21ca*/
    return a1; /*0x1004d21cd*/
  }
  v56 = v103; /*0x1004d24b8*/
  v55 = v102; /*0x1004d24c7*/
  v54 = v101; /*0x1004d24ce*/
  v51 = v90; /*0x1004d24e3*/
  v52 = v91; /*0x1004d24ea*/
  v53 = v92; /*0x1004d24f8*/
  v50 = v97; /*0x1004d24ff*/
  v100 = v92; /*0x1004d2532*/
  v99 = v91; /*0x1004d2544*/
  v98 = (__int64)v90; /*0x1004d2548*/
  tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h03127775174186d9(&v90, &v97); /*0x1004d2557*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204( /*0x1004d258f*/
    &v83,
    a2,
    "tray_open_maintray_active_titletray_active_subtitletray_bootstrap_titletray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
    14,
    &unk_1012C7687,
    13,
    1,
    0);
  v34 = __OFSUB__(v83, 0x8000000000000025LL); /*0x1004d2594*/
  if ( v83 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d259b*/
  {
    v102 = v88; /*0x1004d273f*/
    v101 = v87; /*0x1004d274a*/
    v100 = v86; /*0x1004d2755*/
    v99 = (volatile signed __int64 *)v85; /*0x1004d2760*/
    v98 = v84; /*0x1004d2772*/
    v97 = v83; /*0x1004d2776*/
    v47 = nullptr; /*0x1004d277a*/
    v48 = 1; /*0x1004d2785*/
    v49 = nullptr; /*0x1004d2790*/
    v63[2] = (volatile signed __int64 *)1610612768; /*0x1004d279b*/
    v63[0] = (volatile signed __int64 *)&v47; /*0x1004d27ad*/
    v63[1] = (volatile signed __int64 *)&anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d27bb*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v97, v63) ) /*0x1004d27cd*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d29c6*/
        (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwra"
                 "p()` on an `Err` value",
        55,
        (__int64)v104,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v41 = v47; /*0x1004d27da*/
    v42 = v48; /*0x1004d27e1*/
    v43 = v49; /*0x1004d27e8*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v97); /*0x1004d27f3*/
    *a1 = v41; /*0x1004d27f8*/
    a1[1] = (volatile signed __int64 *)v42; /*0x1004d27fb*/
    a1[2] = v43; /*0x1004d27ff*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396(&v90); /*0x1004d280a*/
    return a1; /*0x1004d280f*/
  }
  v35 = v84; /*0x1004d25a1*/
  v89 = (volatile signed __int64 *)v84; /*0x1004d25a8*/
  v36 = _InterlockedIncrement64((volatile signed __int64 *)v84); /*0x1004d25af*/
  if ( (v36 < 0) ^ v34 | (v36 == 0) ) /*0x1004d25b3*/
    goto LABEL_49; /*0x1004d25b3*/
  v98 = 0; /*0x1004d25b9*/
  v99 = (volatile signed __int64 *)v35; /*0x1004d25c1*/
  v97 = (volatile signed __int64 *)0x8000000000000025LL; /*0x1004d25c5*/
  v37 = v92; /*0x1004d25c9*/
  if ( (volatile signed __int64 *)v92 == v90 ) /*0x1004d25d7*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d((__int64 *)&v90); /*0x1004d25e0*/
  v38 = v91; /*0x1004d25e5*/
  v39 = 6 * v37; /*0x1004d25f0*/
  v91[v39 + 5] = v102; /*0x1004d25f8*/
  v38[v39 + 4] = v101; /*0x1004d2601*/
  v38[v39 + 3] = v100; /*0x1004d260a*/
  v38[v39 + 2] = (volatile signed __int64)v99; /*0x1004d2613*/
  v40 = v97; /*0x1004d2618*/
  v38[v39 + 1] = v98; /*0x1004d2620*/
  v38[v39] = (volatile signed __int64)v40; /*0x1004d2625*/
  v72 = (volatile signed __int64 *)(v37 + 1); /*0x1004d262c*/
  v70 = v90; /*0x1004d2641*/
  v71 = v91; /*0x1004d2648*/
  v73 = v93; /*0x1004d2656*/
  v74 = v94; /*0x1004d2661*/
  v75 = v95; /*0x1004d266c*/
  v76 = v96; /*0x1004d2677*/
  tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h03127775174186d9(&v77, &v70); /*0x1004d268c*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204( /*0x1004d26c4*/
    &v90,
    a2,
    "tray_quittray_account:",
    9,
    &unk_1012C7694,
    6,
    1,
    0);
  if ( v90 == (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d26d0*/
  {
    v83 = v91; /*0x1004d26dd*/
    tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::item::hd7acccfd486d9811(&v57, &v77, &v83, &off_101531460); /*0x1004d2700*/
    tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::build::h2a8e6475e31a37a1(&v64, &v57); /*0x1004d2713*/
    if ( v64 == (volatile signed __int64 *)0x8000000000000025LL ) /*0x1004d271f*/
    {
      a1[1] = (volatile signed __int64 *)v65; /*0x1004d272c*/
      *a1 = (volatile signed __int64 *)0x8000000000000000LL; /*0x1004d2730*/
    }
    else
    {
      v102 = v69; /*0x1004d2898*/
      v101 = v68; /*0x1004d28a3*/
      v100 = v67; /*0x1004d28ae*/
      v99 = v66; /*0x1004d28b9*/
      v98 = v65; /*0x1004d28cb*/
      v97 = v64; /*0x1004d28cf*/
      codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h6d6876660b2cfe09( /*0x1004d28de*/
        &v90,
        &v97);
      a1[2] = (volatile signed __int64 *)v92; /*0x1004d28ea*/
      v46 = v90; /*0x1004d28ee*/
      a1[1] = v91; /*0x1004d28fc*/
      *a1 = v46; /*0x1004d2900*/
    }
    if ( !_InterlockedDecrement64(v83) ) /*0x1004d290a*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a(&v83); /*0x1004d2917*/
  }
  else
  {
    v102 = v95; /*0x1004d2818*/
    v101 = v94; /*0x1004d2820*/
    v100 = v93; /*0x1004d282b*/
    v99 = (volatile signed __int64 *)v92; /*0x1004d2836*/
    v98 = (__int64)v91; /*0x1004d2848*/
    v97 = v90; /*0x1004d284c*/
    codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h6d6876660b2cfe09( /*0x1004d285b*/
      &v70,
      &v97);
    v44 = v71; /*0x1004d2867*/
    v45 = v72; /*0x1004d286e*/
    *a1 = v70; /*0x1004d2875*/
    a1[1] = v44; /*0x1004d2878*/
    a1[2] = v45; /*0x1004d287c*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396(&v77); /*0x1004d2887*/
  }
  if ( !_InterlockedDecrement64(v89) ) /*0x1004d2923*/
  {
    v29 = &v89; /*0x1004d292d*/
    goto LABEL_25; /*0x1004d2934*/
  }
  return a1; /*0x1004d23b6*/
}