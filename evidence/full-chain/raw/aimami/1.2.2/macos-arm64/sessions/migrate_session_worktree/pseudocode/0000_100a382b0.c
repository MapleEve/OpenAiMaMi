// mac 1.2.2 NEW migrate_session_worktree 0x100a382b0 d=0
_QWORD *__fastcall codexmate_lib::core::sessions::migrate_session_worktree::ha1450250e3ecf2ce(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3,
        __int64 a4,
        double a5,
        double a6,
        __m128d a7)
{
  _QWORD *v7; // r14
  size_t v8; // rdx
  size_t v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int8 *v22; // r9
  size_t v23; // r10
  __int64 v24; // r11
  __int64 v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rsi
  _QWORD *v29; // rax
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // rax
  _QWORD *v35; // rcx
  _QWORD *v36; // rdx
  __int64 v37; // rax
  size_t v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdi
  _QWORD *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r12
  char v51; // bl
  char v52; // r15
  _QWORD *v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rsi
  _QWORD *v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // r14
  char v60; // r15
  _QWORD *v61; // r12
  _QWORD *v62; // r14
  _QWORD *v63; // rdx
  _QWORD *v64; // rdx
  size_t v65; // rcx
  unsigned __int64 v66; // rsi
  _QWORD v67[8]; // [rsp+18h] [rbp-548h] BYREF
  size_t v68[3]; // [rsp+58h] [rbp-508h] BYREF
  size_t v69[3]; // [rsp+70h] [rbp-4F0h] BYREF
  _QWORD v70[8]; // [rsp+88h] [rbp-4D8h] BYREF
  _QWORD v71[14]; // [rsp+C8h] [rbp-498h] BYREF
  _QWORD v72[14]; // [rsp+138h] [rbp-428h] BYREF
  __int128 v73; // [rsp+1A8h] [rbp-3B8h]
  __int64 v74; // [rsp+1B8h] [rbp-3A8h]
  __int64 v75; // [rsp+1C0h] [rbp-3A0h]
  __int64 v76; // [rsp+1C8h] [rbp-398h]
  __int64 v77; // [rsp+1D0h] [rbp-390h]
  __int64 v78; // [rsp+1D8h] [rbp-388h]
  __int64 v79; // [rsp+1E0h] [rbp-380h]
  unsigned __int8 *v80; // [rsp+1E8h] [rbp-378h]
  size_t __n; // [rsp+1F0h] [rbp-370h]
  __int64 v82; // [rsp+1F8h] [rbp-368h]
  __int64 v83; // [rsp+200h] [rbp-360h]
  char v84[8]; // [rsp+208h] [rbp-358h] BYREF
  __int64 v85; // [rsp+210h] [rbp-350h]
  __int64 v86; // [rsp+218h] [rbp-348h]
  __int64 v87; // [rsp+228h] [rbp-338h]
  __int64 v88; // [rsp+230h] [rbp-330h]
  __int64 v89; // [rsp+240h] [rbp-320h]
  __int64 v90; // [rsp+248h] [rbp-318h]
  __int64 v91; // [rsp+258h] [rbp-308h]
  __int64 v92; // [rsp+260h] [rbp-300h]
  __int64 v93; // [rsp+270h] [rbp-2F0h]
  __int64 v94; // [rsp+278h] [rbp-2E8h]
  __int64 v95; // [rsp+288h] [rbp-2D8h]
  __int64 v96; // [rsp+290h] [rbp-2D0h]
  __int64 v97; // [rsp+298h] [rbp-2C8h]
  __int64 v98; // [rsp+2A0h] [rbp-2C0h]
  __int64 v99; // [rsp+2A8h] [rbp-2B8h]
  size_t v100; // [rsp+2B0h] [rbp-2B0h]
  __int64 v101; // [rsp+2B8h] [rbp-2A8h]
  __int64 v102; // [rsp+2C0h] [rbp-2A0h]
  __int64 v103; // [rsp+2C8h] [rbp-298h]
  char v104; // [rsp+2D1h] [rbp-28Fh]
  __int64 v105; // [rsp+2E8h] [rbp-278h] BYREF
  _QWORD *v106; // [rsp+2F0h] [rbp-270h]
  size_t v107; // [rsp+2F8h] [rbp-268h]
  __int64 v108; // [rsp+300h] [rbp-260h] BYREF
  __int64 v109; // [rsp+308h] [rbp-258h]
  __int64 v110; // [rsp+310h] [rbp-250h]
  __int64 v111; // [rsp+318h] [rbp-248h]
  _QWORD __dst[41]; // [rsp+320h] [rbp-240h] BYREF
  size_t v113; // [rsp+468h] [rbp-F8h]
  size_t v114; // [rsp+470h] [rbp-F0h]
  size_t v115; // [rsp+478h] [rbp-E8h]
  __int128 v116; // [rsp+480h] [rbp-E0h]
  void *v117; // [rsp+490h] [rbp-D0h] BYREF
  int v118[2]; // [rsp+498h] [rbp-C8h]
  int v119[2]; // [rsp+4A0h] [rbp-C0h]
  __int64 v120; // [rsp+4A8h] [rbp-B8h]
  size_t v121; // [rsp+4B0h] [rbp-B0h]
  int v122[2]; // [rsp+4B8h] [rbp-A8h]
  __int64 v123; // [rsp+4C0h] [rbp-A0h]
  void *__s2; // [rsp+4C8h] [rbp-98h]
  int v125[2]; // [rsp+4D0h] [rbp-90h]
  int v126[2]; // [rsp+4D8h] [rbp-88h]
  __int64 v127; // [rsp+4E0h] [rbp-80h]
  size_t v128; // [rsp+4E8h] [rbp-78h]
  unsigned __int64 v129; // [rsp+4F0h] [rbp-70h]
  __int64 v130; // [rsp+4F8h] [rbp-68h]
  __int64 v131; // [rsp+500h] [rbp-60h]
  _QWORD *v132; // [rsp+508h] [rbp-58h]
  void *__src; // [rsp+510h] [rbp-50h]
  unsigned __int64 v134; // [rsp+518h] [rbp-48h]
  _QWORD *v135; // [rsp+520h] [rbp-40h]
  __int64 v136; // [rsp+528h] [rbp-38h]
  char v137; // [rsp+537h] [rbp-29h]

  v7 = a1; /*0x100a382c7*/
  __s2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(a3, a4); /*0x100a382d5*/
  if ( !v8 ) /*0x100a382df*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a3857c*/
    v27 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x16u, 1u); /*0x100a3858b*/
    if ( !v27 ) /*0x100a38593*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x100a394e2*/
    *(_QWORD *)((char *)v27 + 14) = 0xBAA9E7BAB8E4BD83LL; /*0x100a385a3*/
    v27[1] = 0xBD83E88DB8E42044LL; /*0x100a385b1*/
    *v27 = 0x49208BA8E7BFBAE7LL; /*0x100a385bf*/
    a1[1] = 8; /*0x100a385c2*/
    a1[2] = 22; /*0x100a385ca*/
    a1[3] = v27; /*0x100a385d2*/
    a1[4] = 22; /*0x100a385d6*/
    goto LABEL_16; /*0x100a385de*/
  }
  v9 = v8; /*0x100a382e5*/
  codexmate_lib::core::sessions::load_sessions::h8b0ddb30f01931c2(__dst, a2, a5, a6, a7); /*0x100a382f2*/
  v10 = __dst[0]; /*0x100a382f7*/
  v11 = __dst[1]; /*0x100a382fe*/
  v12 = __dst[2]; /*0x100a38305*/
  v13 = __dst[3]; /*0x100a3830c*/
  if ( __dst[0] != 10 ) /*0x100a38317*/
  {
    a1[12] = __dst[11]; /*0x100a385e7*/
    a1[11] = __dst[10]; /*0x100a385f2*/
    a1[10] = __dst[9]; /*0x100a385fd*/
    a1[9] = __dst[8]; /*0x100a38608*/
    a1[8] = __dst[7]; /*0x100a38613*/
    a1[7] = __dst[6]; /*0x100a3861e*/
    v28 = __dst[4]; /*0x100a38622*/
    a1[6] = __dst[5]; /*0x100a38630*/
    a1[5] = v28; /*0x100a38634*/
    a1[1] = v10; /*0x100a38638*/
    a1[2] = v11; /*0x100a3863c*/
    a1[3] = v12; /*0x100a38640*/
    a1[4] = v13; /*0x100a38644*/
LABEL_16:
    *a1 = 0x8000000000000000LL; /*0x100a38648*/
    return v7; /*0x100a38655*/
  }
  v135 = a1; /*0x100a3831d*/
  v14 = 328LL * __dst[3]; /*0x100a38321*/
  v71[0] = __dst[2]; /*0x100a3832c*/
  v71[2] = __dst[1]; /*0x100a38333*/
  v71[1] = __dst[2]; /*0x100a3833a*/
  v131 = __dst[2] + 328LL * __dst[3]; /*0x100a38341*/
  v71[3] = v131; /*0x100a38345*/
  if ( !__dst[3] ) /*0x100a3834f*/
  {
LABEL_18:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a38665*/
    v29 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x15u, 1u); /*0x100a38674*/
    if ( !v29 ) /*0x100a3867c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x100a39503*/
    *(_QWORD *)((char *)v29 + 13) = 0x8BA8E7BFBAE794BALL; /*0x100a3868c*/
    v29[1] = 0xE794BAE5B9AFE5B0LL; /*0x100a3869a*/
    *v29 = 0x88E5BE89E6AA9CE6LL; /*0x100a386a8*/
    v7 = v135; /*0x100a386ab*/
    v135[1] = 9; /*0x100a386af*/
    v7[2] = 21; /*0x100a386b7*/
    v7[3] = v29; /*0x100a386bf*/
    v7[4] = 21; /*0x100a386c3*/
    *v7 = 0x8000000000000000LL; /*0x100a386d5*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3c46f7e436e2a930(v71); /*0x100a386df*/
    return v7; /*0x100a386df*/
  }
  v132 = a2; /*0x100a38355*/
  v15 = __dst[2] + 328LL; /*0x100a38359*/
  while ( 1 ) /*0x100a3839b*/
  {
    memcpy(__dst, (const void *)(v15 - 328), sizeof(__dst)); /*0x100a3839b*/
    if ( __dst[4] == v9 && !memcmp((const void *)__dst[3], __s2, v9) ) /*0x100a383ba*/
      break; /*0x100a383ba*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h7e88e8834c05a698(__dst); /*0x100a38373*/
LABEL_6:
    v15 += 328; /*0x100a38378*/
    v14 -= 328; /*0x100a3837f*/
    if ( !v14 ) /*0x100a38386*/
    {
      v71[1] = v131; /*0x100a3865e*/
      goto LABEL_18; /*0x100a3865e*/
    }
  }
  v16 = __dst[0]; /*0x100a383c3*/
  if ( __dst[0] == 2 ) /*0x100a383ce*/
    goto LABEL_6; /*0x100a383ce*/
  v71[1] = v15; /*0x100a383da*/
  v17 = *(_QWORD *)(v15 - 304); /*0x100a383e1*/
  v131 = *(_QWORD *)(v15 - 296); /*0x100a383ef*/
  v116 = *(_OWORD *)(v15 - 320); /*0x100a38408*/
  v18 = *(_QWORD *)(v15 - 288); /*0x100a3840f*/
  v19 = *(_QWORD *)(v15 - 280); /*0x100a38416*/
  v20 = *(_QWORD *)(v15 - 272); /*0x100a3841d*/
  v21 = *(_QWORD *)(v15 - 264); /*0x100a38424*/
  v22 = *(unsigned __int8 **)(v15 - 256); /*0x100a3842b*/
  v23 = *(_QWORD *)(v15 - 248); /*0x100a38432*/
  v24 = *(_QWORD *)(v15 - 240); /*0x100a38439*/
  v83 = *(_QWORD *)(v15 - 232); /*0x100a38447*/
  v82 = v24; /*0x100a3844e*/
  __n = v23; /*0x100a38455*/
  v80 = v22; /*0x100a3845c*/
  v79 = v21; /*0x100a38463*/
  v78 = v20; /*0x100a3846a*/
  v77 = v19; /*0x100a38471*/
  v76 = v18; /*0x100a38478*/
  memmove(v84, (const void *)(v15 - 224), 0xE0u); /*0x100a38484*/
  v72[13] = v16; /*0x100a38489*/
  v73 = v116; /*0x100a38497*/
  v74 = v17; /*0x100a3849e*/
  v75 = v131; /*0x100a384a9*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3c46f7e436e2a930(v71); /*0x100a384ba*/
  if ( v95 == 0x8000000000000000LL ) /*0x100a384c9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a384cf*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x3Bu, 1u); /*0x100a384de*/
    if ( !v25 ) /*0x100a384e6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 59); /*0x100a39517*/
    *(_QWORD *)(v25 + 48) = 0x81BFE8809CE9A097LL; /*0x100a384f6*/
    *(_QWORD *)(v25 + 40) = 0xE68CBCEF8BA8E7BFLL; /*0x100a38504*/
    *(_QWORD *)(v25 + 32) = 0xBAE720656572746BLL; /*0x100a38512*/
    *(_QWORD *)(v25 + 24) = 0x726F7720B697E6B4LL; /*0x100a38520*/
    *(_QWORD *)(v25 + 16) = 0xB8E4207865646F43LL; /*0x100a3852e*/
    *(_QWORD *)(v25 + 8) = 0x20AF98E68DB8E48BLL; /*0x100a3853c*/
    *(_QWORD *)v25 = 0xA8E7BFBAE7A5AFE8LL; /*0x100a3854a*/
    *(_DWORD *)(v25 + 55) = -1146624127; /*0x100a3854d*/
    v26 = v135; /*0x100a38554*/
    v135[1] = 9; /*0x100a38558*/
    v26[2] = 59; /*0x100a38560*/
    v26[3] = v25; /*0x100a38568*/
    v26[4] = 59; /*0x100a3856c*/
    *v26 = 0x8000000000000000LL; /*0x100a38574*/
    goto LABEL_109; /*0x100a38577*/
  }
  *(_QWORD *)&v116 = v95; /*0x100a386f9*/
  *(_QWORD *)v126 = v96; /*0x100a38707*/
  v131 = v98; /*0x100a38715*/
  *(_QWORD *)v125 = v99; /*0x100a38720*/
  v31 = v101; /*0x100a38727*/
  v120 = v102; /*0x100a38735*/
  v137 = v104; /*0x100a38743*/
  if ( (v104 & 1) == 0 ) /*0x100a38748*/
  {
    if ( v101 == 0x8000000000000000LL ) /*0x100a387e3*/
    {
      codexmate_lib::core::sessions::migrate_session_worktree::_$u7b$$u7b$closure$u7d$$u7d$::h4e1410d4ee360672(__dst); /*0x100a387ec*/
    }
    else
    {
      __dst[0] = v101; /*0x100a387fa*/
      __dst[1] = v102; /*0x100a38808*/
      __dst[2] = v103; /*0x100a3880f*/
    }
    v36 = v135; /*0x100a3881d*/
    v135[4] = __dst[2]; /*0x100a38821*/
    v37 = __dst[0]; /*0x100a38825*/
    v36[3] = __dst[1]; /*0x100a38833*/
    v36[2] = v37; /*0x100a38837*/
    v36[1] = 9; /*0x100a3883b*/
    *v36 = 0x8000000000000000LL; /*0x100a38843*/
    goto LABEL_102; /*0x100a38846*/
  }
  v32 = v97; /*0x100a3874e*/
  v121 = v100; /*0x100a3875c*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v108, v132[43], v132[44], "session-migration-backups", 25); /*0x100a38789*/
  LOWORD(__dst[0]) = 511; /*0x100a3878e*/
  BYTE2(__dst[0]) = 1; /*0x100a38797*/
  v127 = v109; /*0x100a387b3*/
  v33 = v110; /*0x100a387b7*/
  v34 = std::fs::DirBuilder::_create::h099c6e2853c95452(__dst, v109); /*0x100a387ba*/
  if ( !v34 ) /*0x100a387c2*/
  {
    codexmate_lib::platform::paths::CodexPaths::current_codex_state_db_path::h5644bd6d3a2baa1b(&v105, v132); /*0x100a38856*/
    *(_QWORD *)v122 = v32; /*0x100a3885b*/
    v132 = v106; /*0x100a38877*/
    v128 = v107; /*0x100a3887b*/
    std::sys::fs::metadata::h32fa16d3052ea535(__dst, v106, v107); /*0x100a3887f*/
    v38 = __dst[0]; /*0x100a38884*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x100a38895*/
      __dst[0],
      __dst[1]);
    if ( v38 ) /*0x100a3889d*/
    {
      v129 = 0x8000000000000000LL; /*0x100a3889f*/
    }
    else
    {
      codexmate_lib::core::sessions::backup_codex_db::h0658f865f6f24e9d( /*0x100a388c6*/
        (unsigned int)__dst,
        (_DWORD)v132,
        v128,
        v127,
        v33,
        (_DWORD)__s2,
        v9);
      v39 = __dst[0]; /*0x100a388cb*/
      v40 = __dst[1]; /*0x100a388d2*/
      v41 = __dst[2]; /*0x100a388d9*/
      v42 = __dst[3]; /*0x100a388e0*/
      if ( __dst[0] != 10 ) /*0x100a388eb*/
      {
        v53 = v135; /*0x100a38b7b*/
        v135[12] = __dst[11]; /*0x100a38b7f*/
        v53[11] = __dst[10]; /*0x100a38b8a*/
        v53[10] = __dst[9]; /*0x100a38b95*/
        v53[9] = __dst[8]; /*0x100a38ba0*/
        v53[8] = __dst[7]; /*0x100a38bab*/
        v53[7] = __dst[6]; /*0x100a38bb6*/
        v54 = __dst[4]; /*0x100a38bba*/
        v53[6] = __dst[5]; /*0x100a38bc8*/
        v53[5] = v54; /*0x100a38bcc*/
        v53[2] = v40; /*0x100a38bd0*/
        v53[3] = v41; /*0x100a38bd4*/
        v53[4] = v42; /*0x100a38bd8*/
        v53[1] = v39; /*0x100a38bdc*/
        *v53 = 0x8000000000000000LL; /*0x100a38be0*/
        v55 = v105; /*0x100a38be3*/
        if ( !v105 ) /*0x100a38bed*/
          goto LABEL_100; /*0x100a38bed*/
        goto LABEL_99; /*0x100a38bed*/
      }
      v111 = __dst[3]; /*0x100a388f1*/
      v123 = __dst[2]; /*0x100a388f8*/
      v129 = __dst[1]; /*0x100a388ff*/
    }
    if ( v79 == 0x8000000000000000LL /*0x100a3892d*/
      || (v38 = __n, __src = v80, core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(v80, __n), !v43) )
    {
      __dst[0] = 0x8000000000000000LL; /*0x100a38999*/
    }
    else
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h7da47a1739ade32e(__dst, v38, 0, 1, 1); /*0x100a38946*/
      v134 = __dst[1]; /*0x100a38952*/
      if ( LOBYTE(__dst[0]) ) /*0x100a3895d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v134, __dst[2]); /*0x100a394f2*/
      v130 = __dst[2]; /*0x100a3896a*/
      memcpy((void *)__dst[2], __src, v38); /*0x100a38975*/
      __dst[0] = v134; /*0x100a3897e*/
      __dst[1] = v130; /*0x100a38989*/
      __dst[2] = v38; /*0x100a38990*/
    }
    core::option::Option$LT$T$GT$::filter::hb8326524efbfb4eb(&v117, __dst); /*0x100a389ae*/
    __src = v117; /*0x100a389ba*/
    if ( v117 == (void *)0x8000000000000000LL ) /*0x100a389c1*/
    {
      v44 = 0x8000000000000000LL; /*0x100a389c3*/
    }
    else
    {
      codexmate_lib::core::sessions::backup_regular_file::h3e9031fbb6533907( /*0x100a389ef*/
        __dst,
        *(_QWORD *)v118,
        *(_QWORD *)v119,
        v127,
        v33,
        __s2,
        v9);
      v45 = __dst[0]; /*0x100a389f4*/
      v44 = __dst[1]; /*0x100a389fb*/
      v46 = __dst[2]; /*0x100a38a02*/
      v38 = __dst[3]; /*0x100a38a09*/
      if ( __dst[0] != 10 ) /*0x100a38a14*/
      {
        v56 = v135; /*0x100a38bff*/
        v135[12] = __dst[11]; /*0x100a38c03*/
        v56[11] = __dst[10]; /*0x100a38c0e*/
        v56[10] = __dst[9]; /*0x100a38c19*/
        v56[9] = __dst[8]; /*0x100a38c24*/
        v56[8] = __dst[7]; /*0x100a38c2f*/
        v56[7] = __dst[6]; /*0x100a38c3a*/
        v57 = __dst[4]; /*0x100a38c3e*/
        v56[6] = __dst[5]; /*0x100a38c4c*/
        v56[5] = v57; /*0x100a38c50*/
        v56[2] = v44; /*0x100a38c54*/
        v56[3] = v46; /*0x100a38c58*/
        v56[4] = v38; /*0x100a38c5c*/
        v56[1] = v45; /*0x100a38c60*/
        *v56 = 0x8000000000000000LL; /*0x100a38c64*/
        goto LABEL_96; /*0x100a38c67*/
      }
      v130 = __dst[2]; /*0x100a38a1a*/
    }
    codexmate_lib::core::sessions::open_codex_db::h9a3f1ae251dcfdc1(__dst, v132, v128, 0); /*0x100a38a2f*/
    if ( LOBYTE(__dst[13]) == 3 ) /*0x100a38a40*/
    {
      qmemcpy(v72, __dst, 0x60u); /*0x100a38a58*/
      v47 = v135; /*0x100a38a5b*/
      qmemcpy(v135 + 1, v72, 0x60u); /*0x100a38a6b*/
      *v47 = 0x8000000000000000LL; /*0x100a38a6e*/
      goto LABEL_94; /*0x100a38a71*/
    }
    v128 = v38; /*0x100a38a76*/
    qmemcpy(v72, __dst, 0x68u); /*0x100a38a90*/
    v71[13] = __dst[13]; /*0x100a38a9f*/
    qmemcpy(v71, v72, 0x68u); /*0x100a38abd*/
    v48 = (__int64)*(&off_1018A0F20 + LOBYTE(__dst[13])); /*0x100a38ace*/
    v49 = qword_1015B48C0[LOBYTE(__dst[13])]; /*0x100a38ad9*/
    v134 = v44; /*0x100a38ae7*/
    rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__dst, v71, v48, v49); /*0x100a38aeb*/
    if ( __dst[0] == 0x8000000000000016LL ) /*0x100a38afe*/
    {
      codexmate_lib::core::sessions::update_session_cwd_in_connection::he26146f5a847e235( /*0x100a38b41*/
        (unsigned int)__dst,
        (unsigned int)v71,
        (_DWORD)__s2,
        v9,
        v126[0],
        v122[0],
        *(__int64 *)v125,
        v121);
      v50 = __dst[0]; /*0x100a38b46*/
      v51 = __dst[1]; /*0x100a38b4d*/
      if ( __dst[0] == 10 ) /*0x100a38b58*/
      {
        v136 = v31; /*0x100a38b62*/
        if ( __src == (void *)0x8000000000000000LL ) /*0x100a38b66*/
        {
          v52 = 0; /*0x100a38b6c*/
LABEL_54:
          rusqlite::transaction::Transaction::commit::h0e4e45420f48cafe(v67, v71); /*0x100a38dd5*/
          if ( v67[0] == 0x8000000000000016LL ) /*0x100a38def*/
          {
            v63 = v135; /*0x100a38e03*/
            v135[2] = v75; /*0x100a38e07*/
            v63[1] = v74; /*0x100a38e0f*/
            *v63 = *((_QWORD *)&v73 + 1); /*0x100a38e16*/
            v63[3] = v116; /*0x100a38e20*/
            v63[4] = *(_QWORD *)v126; /*0x100a38e2b*/
            v63[5] = *(_QWORD *)v122; /*0x100a38e36*/
            v63[6] = v131; /*0x100a38e3e*/
            v63[7] = *(_QWORD *)v125; /*0x100a38e49*/
            v63[8] = v121; /*0x100a38e54*/
            v63[9] = v129; /*0x100a38e5c*/
            v63[10] = v123; /*0x100a38e67*/
            v63[11] = v111; /*0x100a38e72*/
            v63[12] = v134; /*0x100a38e7a*/
            v63[13] = v130; /*0x100a38e82*/
            v63[14] = v128; /*0x100a38e8a*/
            *((_BYTE *)v63 + 120) = v51; /*0x100a38e8e*/
            *((_BYTE *)v63 + 121) = v52 & 1; /*0x100a38e95*/
            core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251(v71); /*0x100a38ea0*/
            if ( 2LL * (_QWORD)__src ) /*0x100a38ea9*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v118, __src, 1); /*0x100a38ec6*/
            if ( v105 ) /*0x100a38ed5*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v105, 1); /*0x100a38ee0*/
            if ( v108 ) /*0x100a38eef*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127, v108, 1); /*0x100a38efa*/
            if ( 2 * v136 ) /*0x100a38f03*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, v136, 1); /*0x100a38f20*/
            if ( v76 ) /*0x100a38f2f*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v76, 1); /*0x100a38f3d*/
            if ( v79 != 0x8000000000000000LL && v79 ) /*0x100a38f51*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x100a38f5f*/
            if ( v82 != 0x8000000000000000LL && v82 ) /*0x100a38f73*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v82, 1); /*0x100a38f81*/
            if ( v85 != 0x8000000000000000LL && v85 ) /*0x100a38f95*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v85, 1); /*0x100a38fa3*/
            if ( v87 != 0x8000000000000000LL && v87 ) /*0x100a38fb7*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x100a38fc5*/
            if ( v89 != 0x8000000000000000LL && v89 ) /*0x100a38fd9*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v89, 1); /*0x100a38fe7*/
            if ( v91 != 0x8000000000000000LL && v91 ) /*0x100a38ffb*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1); /*0x100a39009*/
            if ( v93 != 0x8000000000000000LL && v93 ) /*0x100a3901d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1); /*0x100a3902b*/
            return v135; /*0x100a39034*/
          }
          v70[7] = v67[7]; /*0x100a39040*/
          v70[6] = v67[6]; /*0x100a3904e*/
          v70[5] = v67[5]; /*0x100a3905c*/
          v70[4] = v67[4]; /*0x100a3906a*/
          v70[3] = v67[3]; /*0x100a39078*/
          v70[2] = v67[2]; /*0x100a39086*/
          v70[1] = v67[1]; /*0x100a3909b*/
          v70[0] = v67[0]; /*0x100a390a2*/
          if ( v134 == 0x8000000000000000LL || (v52 & 1) == 0 ) /*0x100a390b3*/
            goto LABEL_91; /*0x100a390b3*/
          if ( __src == (void *)0x8000000000000000LL ) /*0x100a390bc*/
            core::option::unwrap_failed::h44626cade04bbf1e(&off_1018A0A10); /*0x100a39528*/
          codexmate_lib::core::sessions::restore_regular_file_from_backup::h48abc55c371880bf( /*0x100a390e2*/
            v72,
            v130,
            v128,
            *(_QWORD *)v118,
            *(_QWORD *)v119);
          if ( v72[0] == 10 ) /*0x100a390f2*/
          {
LABEL_91:
            __dst[0] = v70; /*0x100a39102*/
            __dst[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100a39110*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v68, byte_1016FEBE2, (unsigned __int64)__dst); /*0x100a3912c*/
            v113 = v68[0]; /*0x100a3913f*/
            v114 = v68[1]; /*0x100a39146*/
            v115 = v68[2]; /*0x100a39154*/
          }
          else
          {
            qmemcpy(&__dst[1], &v72[1], 0x58u); /*0x100a3943e*/
            __dst[0] = v72[0]; /*0x100a39441*/
            v72[0] = v70; /*0x100a3944f*/
            v72[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100a3945d*/
            v72[2] = __dst; /*0x100a3946b*/
            v72[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1; /*0x100a39479*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v69, byte_1016FEC07, (unsigned __int64)v72); /*0x100a39495*/
            v113 = v69[0]; /*0x100a394a8*/
            v114 = v69[1]; /*0x100a394af*/
            v115 = v69[2]; /*0x100a394bd*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(__dst); /*0x100a394ce*/
          }
          v64 = v135; /*0x100a3915b*/
          v135[1] = 9; /*0x100a3915f*/
          v65 = v114; /*0x100a3916e*/
          v64[2] = v113; /*0x100a39175*/
          v64[3] = v65; /*0x100a39179*/
          v64[4] = v115; /*0x100a39184*/
          *v64 = 0x8000000000000000LL; /*0x100a39188*/
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(v70); /*0x100a39192*/
          v31 = v136; /*0x100a39197*/
          v44 = v134; /*0x100a3919b*/
          goto LABEL_93; /*0x100a3919b*/
        }
        codexmate_lib::core::sessions::patch_rollout_cwd::h93e9f21990842b0e( /*0x100a38db7*/
          (int)__dst,
          v118[0],
          v119[0],
          v126[0],
          v122[0],
          v125[0],
          v121);
        v50 = __dst[0]; /*0x100a38dbc*/
        v52 = __dst[1]; /*0x100a38dc3*/
        if ( __dst[0] == 10 ) /*0x100a38dcf*/
          goto LABEL_54; /*0x100a38dcf*/
        v62 = v135; /*0x100a3940d*/
        memcpy((char *)v135 + 17, (char *)&__dst[1] + 1, 0x57u); /*0x100a3941a*/
        v51 = v52; /*0x100a3941f*/
        v31 = v136; /*0x100a39422*/
      }
      else
      {
        v62 = v135; /*0x100a38d50*/
        memcpy((char *)v135 + 17, (char *)&__dst[1] + 1, 0x57u); /*0x100a38d5d*/
      }
      v62[1] = v50; /*0x100a38d62*/
      *((_BYTE *)v62 + 16) = v51; /*0x100a38d66*/
      *v62 = 0x8000000000000000LL; /*0x100a38d6a*/
      v44 = v134; /*0x100a38d74*/
      core::ptr::drop_in_place$LT$rusqlite..transaction..Transaction$GT$::h2269f5253caaefc0(v71); /*0x100a38d78*/
    }
    else
    {
      v72[7] = __dst[7]; /*0x100a38c81*/
      *(_OWORD *)((char *)&v72[5] + 1) = *(_OWORD *)((char *)&__dst[5] + 1); /*0x100a38c9d*/
      *(_OWORD *)((char *)&v72[3] + 1) = *(_OWORD *)((char *)&__dst[3] + 1); /*0x100a38cb9*/
      *(_QWORD *)((char *)&v72[2] + 1) = *(_QWORD *)((char *)&__dst[2] + 1); /*0x100a38cc7*/
      v72[0] = __dst[0]; /*0x100a38cce*/
      v72[1] = __dst[1]; /*0x100a38cd5*/
      LOBYTE(v72[2]) = __dst[2]; /*0x100a38cdc*/
      codexmate_lib::core::sessions::migrate_session_worktree::_$u7b$$u7b$closure$u7d$$u7d$::hfbccce3996045791( /*0x100a38cf0*/
        __dst,
        v72);
      v58 = __dst[0]; /*0x100a38cf5*/
      v59 = __dst[1]; /*0x100a38cfc*/
      v136 = v31; /*0x100a38d03*/
      v60 = __dst[2]; /*0x100a38d07*/
      v61 = v135; /*0x100a38d16*/
      memcpy((char *)v135 + 25, (char *)&__dst[2] + 1, 0x4Fu); /*0x100a38d24*/
      v61[1] = v58; /*0x100a38d29*/
      v44 = v134; /*0x100a38d2e*/
      v61[2] = v59; /*0x100a38d32*/
      *((_BYTE *)v61 + 24) = v60; /*0x100a38d37*/
      v31 = v136; /*0x100a38d3c*/
      *v61 = 0x8000000000000000LL; /*0x100a38d40*/
    }
LABEL_93:
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251(v71); /*0x100a3919f*/
LABEL_94:
    if ( 2 * v44 ) /*0x100a391ab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v44, 1); /*0x100a391c4*/
LABEL_96:
    if ( 2LL * (_QWORD)__src ) /*0x100a391cd*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v118, __src, 1); /*0x100a393c6*/
      v66 = v129; /*0x100a393cb*/
      if ( !(2 * v129) ) /*0x100a393da*/
      {
LABEL_98:
        v55 = v105; /*0x100a391f3*/
        if ( !v105 ) /*0x100a391fd*/
          goto LABEL_100; /*0x100a391fd*/
LABEL_99:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v55, 1); /*0x100a391ff*/
        goto LABEL_100; /*0x100a39208*/
      }
    }
    else
    {
      v66 = v129; /*0x100a391de*/
      if ( !(2 * v129) ) /*0x100a391e2*/
        goto LABEL_98; /*0x100a391ed*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v123, v66, 1); /*0x100a393ec*/
    v55 = v105; /*0x100a393f1*/
    if ( !v105 ) /*0x100a393fb*/
      goto LABEL_100; /*0x100a393fb*/
    goto LABEL_99; /*0x100a393fb*/
  }
  v35 = v135; /*0x100a387c8*/
  v135[1] = 2; /*0x100a387cc*/
  v35[2] = v34; /*0x100a387d4*/
  *v35 = 0x8000000000000000LL; /*0x100a387d8*/
LABEL_100:
  if ( v108 ) /*0x100a39217*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127, v108, 1); /*0x100a39222*/
LABEL_102:
  if ( (_QWORD)v116 ) /*0x100a39231*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v126, v116, 1); /*0x100a3923f*/
  if ( v131 ) /*0x100a3924b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v125, v131, 1); /*0x100a39259*/
  if ( (v137 & 1) != 0 && (v31 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100a3926b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, v31, 1); /*0x100a3927c*/
LABEL_109:
  if ( *((_QWORD *)&v73 + 1) ) /*0x100a3928b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, *((_QWORD *)&v73 + 1), 1); /*0x100a39299*/
  if ( v76 ) /*0x100a392a8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v76, 1); /*0x100a392b6*/
  if ( v79 != 0x8000000000000000LL && v79 ) /*0x100a392ca*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x100a392d8*/
  if ( v82 != 0x8000000000000000LL && v82 ) /*0x100a392ec*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v82, 1); /*0x100a392fa*/
  if ( v85 != 0x8000000000000000LL && v85 ) /*0x100a3930e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v85, 1); /*0x100a3931c*/
  if ( v87 != 0x8000000000000000LL && v87 ) /*0x100a39330*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x100a3933e*/
  if ( v89 != 0x8000000000000000LL && v89 ) /*0x100a39352*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v89, 1); /*0x100a39360*/
  if ( v91 != 0x8000000000000000LL && v91 ) /*0x100a39374*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1); /*0x100a39382*/
  v7 = v135; /*0x100a39391*/
  if ( v93 != 0x8000000000000000LL && v93 ) /*0x100a3939e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1); /*0x100a393b0*/
  return v7; /*0x100a386e7*/
}