// __ZN13codexmate_lib8commands9tray_menu26create_bootstrap_tray_menu @ 0x100357130 | 基线 same-set
volatile signed __int64 **__fastcall codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::hd1ec4bbdd0bd5734(
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
  __int64 v18; // r15
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
  __int64 v72; // [rsp+F8h] [rbp-138h]
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

  v100 = 0x8000000000000000LL; /*0x100357158*/
  v103 = a2; /*0x10035715c*/
  v97 = nullptr; /*0x100357160*/
  v98 = 8; /*0x100357168*/
  v99 = nullptr; /*0x100357170*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::ha9cdd0a5b09fc138( /*0x1003571ab*/
    &v57,
    a2,
    &unk_1015E65EB,
    21,
    &unk_1015E6600,
    12,
    0,
    0);
  v3 = __OFSUB__(v57, 0x8000000000000025LL); /*0x1003571b0*/
  if ( v57 != (volatile signed __int64 **)0x8000000000000025LL ) /*0x1003571b7*/
  {
    v82 = v62; /*0x1003575a9*/
    v81 = v61; /*0x1003575b7*/
    v80 = v60; /*0x1003575c5*/
    v79 = v59; /*0x1003575d3*/
    v78 = (volatile signed __int64 *)v58; /*0x1003575e8*/
    v77 = (volatile signed __int64 *)v57; /*0x1003575ef*/
    v64 = nullptr; /*0x1003575f6*/
    v65 = 1; /*0x100357601*/
    v66 = nullptr; /*0x10035760c*/
    v85 = 1610612768; /*0x100357617*/
    v83 = (volatile signed __int64 *)&v64; /*0x100357629*/
    v84 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100357637*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v77, &v83) ) /*0x10035764c*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100357d27*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        v104,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v23 = v64; /*0x100357659*/
    v24 = v65; /*0x100357660*/
    v25 = v66; /*0x100357667*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v77); /*0x100357675*/
    *a1 = v23; /*0x10035767a*/
    a1[1] = (volatile signed __int64 *)v24; /*0x10035767d*/
    a1[2] = v25; /*0x100357681*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(&v97); /*0x100357689*/
    return a1; /*0x10035768e*/
  }
  v4 = v58; /*0x1003571bd*/
  v63[0] = (volatile signed __int64 *)v58; /*0x1003571c4*/
  v5 = _InterlockedIncrement64((volatile signed __int64 *)v58); /*0x1003571cb*/
  if ( (v5 < 0) ^ v3 | (v5 == 0) ) /*0x1003571cf*/
LABEL_49:
    BUG(); /*0x100357d9b*/
  v78 = nullptr; /*0x1003571d5*/
  v79 = v4; /*0x1003571e0*/
  v77 = (volatile signed __int64 *)0x8000000000000025LL; /*0x1003571e7*/
  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v97); /*0x1003571f2*/
  v6 = (_QWORD *)v98; /*0x1003571f7*/
  *(_QWORD *)(v98 + 40) = v82; /*0x100357202*/
  v6[4] = v81; /*0x10035720d*/
  v6[3] = v80; /*0x100357218*/
  v6[2] = v79; /*0x100357223*/
  v7 = v77; /*0x100357227*/
  v6[1] = v78; /*0x100357235*/
  *v6 = v7; /*0x100357239*/
  v90 = v97; /*0x100357244*/
  v91 = (volatile signed __int64 *)v98; /*0x10035724b*/
  v93 = v100; /*0x100357256*/
  v94 = v101; /*0x100357261*/
  v95 = v102; /*0x100357269*/
  v96 = v103; /*0x100357271*/
  v92 = 1; /*0x100357275*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::ha9cdd0a5b09fc138( /*0x1003572b3*/
    &v77,
    a2,
    "tray_bootstrap_titletray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
    20,
    &unk_1015E660C,
    6,
    1,
    0);
  v8 = __OFSUB__(v77, 0x8000000000000025LL); /*0x1003572b8*/
  if ( v77 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x1003572bf*/
  {
    v102 = v82; /*0x10035769a*/
    v101 = v81; /*0x1003576a5*/
    v100 = v80; /*0x1003576b0*/
    v99 = (volatile signed __int64 *)v79; /*0x1003576bb*/
    v98 = (__int64)v78; /*0x1003576cd*/
    v97 = v77; /*0x1003576d1*/
    v83 = nullptr; /*0x1003576d5*/
    v84 = 1; /*0x1003576e0*/
    v85 = 0; /*0x1003576eb*/
    v59 = 1610612768; /*0x1003576f6*/
    v57 = &v83; /*0x100357708*/
    v58 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100357716*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v97, &v57) ) /*0x100357728*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100357d4c*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        v104,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v26 = v83; /*0x100357735*/
    v27 = v84; /*0x10035773c*/
    v28 = v85; /*0x100357743*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v97); /*0x10035774e*/
    *a1 = v26; /*0x100357753*/
    a1[1] = (volatile signed __int64 *)v27; /*0x100357756*/
    a1[2] = (volatile signed __int64 *)v28; /*0x10035775a*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(&v90); /*0x100357765*/
    goto LABEL_23; /*0x100357765*/
  }
  v9 = v78; /*0x1003572c5*/
  v64 = v78; /*0x1003572cc*/
  v10 = _InterlockedIncrement64(v78); /*0x1003572d3*/
  if ( (v10 < 0) ^ v8 | (v10 == 0) ) /*0x1003572d7*/
    goto LABEL_49; /*0x1003572d7*/
  v98 = 0; /*0x1003572e0*/
  v99 = v9; /*0x1003572e8*/
  v97 = (volatile signed __int64 *)0x8000000000000025LL; /*0x1003572f6*/
  v11 = v92; /*0x1003572fa*/
  if ( (volatile signed __int64 *)v92 == v90 ) /*0x100357308*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v90); /*0x100357311*/
  v12 = v91; /*0x100357316*/
  v13 = 6 * v11; /*0x100357321*/
  v91[v13 + 5] = v102; /*0x100357329*/
  v12[v13 + 4] = v101; /*0x100357332*/
  v12[v13 + 3] = v100; /*0x10035733b*/
  v12[v13 + 2] = (volatile signed __int64)v99; /*0x100357344*/
  v14 = v97; /*0x100357349*/
  v12[v13 + 1] = v98; /*0x100357351*/
  v12[v13] = (volatile signed __int64)v14; /*0x100357356*/
  v72 = v11 + 1; /*0x10035735d*/
  v70 = v90; /*0x100357372*/
  v71 = v91; /*0x100357379*/
  v73 = v93; /*0x100357387*/
  v74 = v94; /*0x100357392*/
  v75 = v95; /*0x10035739d*/
  v76 = v96; /*0x1003573a8*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::ha9cdd0a5b09fc138( /*0x1003573e2*/
    &v90,
    a2,
    "tray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
    23,
    &unk_1015E6612,
    27,
    1,
    0);
  v15 = __OFSUB__(v90, 0x8000000000000025LL); /*0x1003573f1*/
  if ( v90 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x1003573f8*/
  {
    v102 = v95; /*0x10035779c*/
    v101 = v94; /*0x1003577a4*/
    v100 = v93; /*0x1003577af*/
    v99 = (volatile signed __int64 *)v92; /*0x1003577ba*/
    v98 = (__int64)v91; /*0x1003577cc*/
    v97 = v90; /*0x1003577d0*/
    v57 = nullptr; /*0x1003577d4*/
    v58 = 1; /*0x1003577df*/
    v59 = 0; /*0x1003577ea*/
    v79 = 1610612768; /*0x1003577f5*/
    v77 = (volatile signed __int64 *)&v57; /*0x100357800*/
    v78 = (volatile signed __int64 *)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10035780e*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v97, &v77) ) /*0x100357820*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100357d71*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        v104,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v31 = v57; /*0x10035782d*/
    v32 = v58; /*0x100357834*/
    v33 = v59; /*0x10035783b*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v97); /*0x100357846*/
    *a1 = (volatile signed __int64 *)v31; /*0x10035784b*/
    a1[1] = (volatile signed __int64 *)v32; /*0x10035784e*/
    a1[2] = (volatile signed __int64 *)v33; /*0x100357852*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(&v70); /*0x10035785d*/
    if ( !_InterlockedDecrement64(v64) ) /*0x100357869*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v64); /*0x10035787a*/
LABEL_23:
    if ( _InterlockedDecrement64(v63[0]) ) /*0x100357771*/
      return a1; /*0x100357775*/
    v29 = v63; /*0x100357777*/
LABEL_25:
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(v29); /*0x10035777e*/
    return a1; /*0x10035777e*/
  }
  v16 = v91; /*0x1003573fe*/
  v83 = v91; /*0x100357405*/
  v17 = _InterlockedIncrement64(v91); /*0x10035740c*/
  if ( (v17 < 0) ^ v15 | (v17 == 0) ) /*0x100357410*/
    goto LABEL_49; /*0x100357410*/
  v98 = 0; /*0x100357419*/
  v99 = v16; /*0x100357421*/
  v97 = (volatile signed __int64 *)0x8000000000000025LL; /*0x10035742f*/
  v18 = v72; /*0x100357433*/
  if ( (volatile signed __int64 *)v72 == v70 ) /*0x100357441*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v70); /*0x10035744a*/
  v19 = v71; /*0x10035744f*/
  v20 = 6 * v18; /*0x10035745a*/
  v71[v20 + 5] = v102; /*0x100357462*/
  v19[v20 + 4] = v101; /*0x10035746b*/
  v19[v20 + 3] = v100; /*0x100357474*/
  v19[v20 + 2] = (volatile signed __int64)v99; /*0x10035747d*/
  v21 = v97; /*0x100357482*/
  v19[v20 + 1] = v98; /*0x10035748a*/
  v19[v20] = (volatile signed __int64)v21; /*0x10035748f*/
  v52 = (volatile signed __int64 *)(v18 + 1); /*0x100357496*/
  v50 = v70; /*0x1003574ab*/
  v51 = v71; /*0x1003574b2*/
  v53 = v73; /*0x1003574c0*/
  v54 = v74; /*0x1003574ce*/
  v55 = v75; /*0x1003574dc*/
  v56 = v76; /*0x1003574ea*/
  if ( !_InterlockedDecrement64(v83) ) /*0x1003574f8*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v83); /*0x100357505*/
  if ( !_InterlockedDecrement64(v64) ) /*0x100357511*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v64); /*0x10035751e*/
  if ( !_InterlockedDecrement64(v63[0]) ) /*0x10035752a*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(v63); /*0x100357537*/
  codexmate_lib::commands::tray_menu::append_codex_router_section::h0c903a536860bc98(&v97, a2, &v50); /*0x10035754a*/
  v90 = (volatile signed __int64 *)v98; /*0x100357557*/
  v91 = v99; /*0x100357562*/
  v92 = v100; /*0x10035756d*/
  if ( v97 == (volatile signed __int64 *)0x8000000000000000LL ) /*0x100357577*/
  {
    a1[2] = (volatile signed __int64 *)v92; /*0x100357584*/
    v22 = v90; /*0x100357588*/
    a1[1] = v91; /*0x100357596*/
    *a1 = v22; /*0x10035759a*/
    return a1; /*0x10035759d*/
  }
  v56 = v103; /*0x100357888*/
  v55 = v102; /*0x100357897*/
  v54 = v101; /*0x10035789e*/
  v51 = v90; /*0x1003578b3*/
  v52 = v91; /*0x1003578ba*/
  v53 = v92; /*0x1003578c8*/
  v50 = v97; /*0x1003578cf*/
  v100 = v92; /*0x100357902*/
  v99 = v91; /*0x100357914*/
  v98 = (__int64)v90; /*0x100357918*/
  tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h5badb10701b3083d(&v90, &v97); /*0x100357927*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::ha9cdd0a5b09fc138( /*0x10035795f*/
    &v83,
    a2,
    "tray_open_maintray_active_titletray_active_subtitletray_bootstrap_titletray_bootstrap_subtitletray_codex_router_statustray_quittray_account:",
    14,
    &unk_1015E662D,
    13,
    1,
    0);
  v34 = __OFSUB__(v83, 0x8000000000000025LL); /*0x100357964*/
  if ( v83 != (volatile signed __int64 *)0x8000000000000025LL ) /*0x10035796b*/
  {
    v102 = v88; /*0x100357b0f*/
    v101 = v87; /*0x100357b1a*/
    v100 = v86; /*0x100357b25*/
    v99 = (volatile signed __int64 *)v85; /*0x100357b30*/
    v98 = v84; /*0x100357b42*/
    v97 = v83; /*0x100357b46*/
    v47 = nullptr; /*0x100357b4a*/
    v48 = 1; /*0x100357b55*/
    v49 = nullptr; /*0x100357b60*/
    v63[2] = (volatile signed __int64 *)1610612768; /*0x100357b6b*/
    v63[0] = (volatile signed __int64 *)&v47; /*0x100357b7d*/
    v63[1] = (volatile signed __int64 *)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100357b8b*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v97, v63) ) /*0x100357b9d*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100357d96*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        v104,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v41 = v47; /*0x100357baa*/
    v42 = v48; /*0x100357bb1*/
    v43 = v49; /*0x100357bb8*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v97); /*0x100357bc3*/
    *a1 = v41; /*0x100357bc8*/
    a1[1] = (volatile signed __int64 *)v42; /*0x100357bcb*/
    a1[2] = v43; /*0x100357bcf*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(&v90); /*0x100357bda*/
    return a1; /*0x100357bdf*/
  }
  v35 = v84; /*0x100357971*/
  v89 = (volatile signed __int64 *)v84; /*0x100357978*/
  v36 = _InterlockedIncrement64((volatile signed __int64 *)v84); /*0x10035797f*/
  if ( (v36 < 0) ^ v34 | (v36 == 0) ) /*0x100357983*/
    goto LABEL_49; /*0x100357983*/
  v98 = 0; /*0x100357989*/
  v99 = (volatile signed __int64 *)v35; /*0x100357991*/
  v97 = (volatile signed __int64 *)0x8000000000000025LL; /*0x100357995*/
  v37 = v92; /*0x100357999*/
  if ( (volatile signed __int64 *)v92 == v90 ) /*0x1003579a7*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v90); /*0x1003579b0*/
  v38 = v91; /*0x1003579b5*/
  v39 = 6 * v37; /*0x1003579c0*/
  v91[v39 + 5] = v102; /*0x1003579c8*/
  v38[v39 + 4] = v101; /*0x1003579d1*/
  v38[v39 + 3] = v100; /*0x1003579da*/
  v38[v39 + 2] = (volatile signed __int64)v99; /*0x1003579e3*/
  v40 = v97; /*0x1003579e8*/
  v38[v39 + 1] = v98; /*0x1003579f0*/
  v38[v39] = (volatile signed __int64)v40; /*0x1003579f5*/
  v72 = v37 + 1; /*0x1003579fc*/
  v70 = v90; /*0x100357a11*/
  v71 = v91; /*0x100357a18*/
  v73 = v93; /*0x100357a26*/
  v74 = v94; /*0x100357a31*/
  v75 = v95; /*0x100357a3c*/
  v76 = v96; /*0x100357a47*/
  tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h5badb10701b3083d(&v77, &v70); /*0x100357a5c*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::ha9cdd0a5b09fc138( /*0x100357a94*/
    &v90,
    a2,
    "tray_quittray_account:",
    9,
    &unk_1015E663A,
    6,
    1,
    0);
  if ( v90 == (volatile signed __int64 *)0x8000000000000025LL ) /*0x100357aa0*/
  {
    v83 = v91; /*0x100357aad*/
    tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::item::heb06ab93762a5a00(&v57, &v77, &v83, &off_101961768); /*0x100357ad0*/
    tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::build::h8ececc282ef97285(&v64, &v57); /*0x100357ae3*/
    if ( v64 == (volatile signed __int64 *)0x8000000000000025LL ) /*0x100357aef*/
    {
      a1[1] = (volatile signed __int64 *)v65; /*0x100357afc*/
      *a1 = (volatile signed __int64 *)0x8000000000000000LL; /*0x100357b00*/
    }
    else
    {
      v102 = v69; /*0x100357c68*/
      v101 = v68; /*0x100357c73*/
      v100 = v67; /*0x100357c7e*/
      v99 = v66; /*0x100357c89*/
      v98 = v65; /*0x100357c9b*/
      v97 = v64; /*0x100357c9f*/
      codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h4f4fd2a3bcb62520( /*0x100357cae*/
        &v90,
        &v97);
      a1[2] = (volatile signed __int64 *)v92; /*0x100357cba*/
      v46 = v90; /*0x100357cbe*/
      a1[1] = v91; /*0x100357ccc*/
      *a1 = v46; /*0x100357cd0*/
    }
    if ( !_InterlockedDecrement64(v83) ) /*0x100357cda*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v83); /*0x100357ce7*/
  }
  else
  {
    v102 = v95; /*0x100357be8*/
    v101 = v94; /*0x100357bf0*/
    v100 = v93; /*0x100357bfb*/
    v99 = (volatile signed __int64 *)v92; /*0x100357c06*/
    v98 = (__int64)v91; /*0x100357c18*/
    v97 = v90; /*0x100357c1c*/
    codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h4f4fd2a3bcb62520( /*0x100357c2b*/
      &v70,
      &v97);
    v44 = v71; /*0x100357c37*/
    v45 = (volatile signed __int64 *)v72; /*0x100357c3e*/
    *a1 = v70; /*0x100357c45*/
    a1[1] = v44; /*0x100357c48*/
    a1[2] = v45; /*0x100357c4c*/
    core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(&v77); /*0x100357c57*/
  }
  if ( !_InterlockedDecrement64(v89) ) /*0x100357cf3*/
  {
    v29 = &v89; /*0x100357cfd*/
    goto LABEL_25; /*0x100357d04*/
  }
  return a1; /*0x100357786*/
}