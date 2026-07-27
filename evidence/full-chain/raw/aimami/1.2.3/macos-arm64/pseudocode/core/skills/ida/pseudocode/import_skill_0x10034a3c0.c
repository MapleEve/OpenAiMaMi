// __ZN13codexmate_lib4core6skills12import_skill @ 0x10034a3c0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::skills::import_skill::he6b2748560b59466(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void ***a4,
        void **a5,
        void *a6,
        void *a7)
{
  _QWORD *v8; // r15
  void **v9; // r12
  char v10; // bl
  void **v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r13
  unsigned __int8 v15; // r14
  __int64 v16; // rax
  void **v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rax
  void *v21; // r15
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rsi
  char *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  void *v28; // rsi
  __int64 v29; // rbx
  void ***v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // r13
  __int64 v34; // rsi
  void *v35; // rsi
  void *v36; // rdi
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v40; // rax
  void *v41; // rdx
  void *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // rbx
  __int64 v50; // rsi
  __int64 v51; // rbx
  void *v52; // r15
  void *v53; // r14
  void **v54; // rsi
  void *v55; // rbx
  int v56; // eax
  void **v57; // r14
  void **v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  void **v62; // rax
  __int64 v63; // r15
  __int64 v64; // rbx
  __int64 v65; // r14
  __int64 v66; // rdi
  void ***v67; // r15
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  void ***v71; // rdi
  __int64 v72; // rbx
  __int64 v73; // rsi
  void *v74; // rax
  char v75; // r14
  char v76; // r15
  void **v77; // rbx
  __int64 v78; // r13
  unsigned __int8 v79; // r14
  _BYTE v80[96]; // [rsp+18h] [rbp-468h] BYREF
  _QWORD v81[12]; // [rsp+78h] [rbp-408h] BYREF
  _OWORD v82[5]; // [rsp+D8h] [rbp-3A8h] BYREF
  void *__s2[19]; // [rsp+128h] [rbp-358h] BYREF
  void *__s1[12]; // [rsp+1C0h] [rbp-2C0h] BYREF
  __int64 v85; // [rsp+220h] [rbp-260h] BYREF
  void **v86; // [rsp+228h] [rbp-258h]
  __int64 v87; // [rsp+230h] [rbp-250h]
  __int64 v88; // [rsp+238h] [rbp-248h] BYREF
  void **v89; // [rsp+240h] [rbp-240h]
  __int64 v90; // [rsp+248h] [rbp-238h]
  __int64 v91; // [rsp+250h] [rbp-230h]
  void **v92; // [rsp+258h] [rbp-228h]
  __int64 v93; // [rsp+260h] [rbp-220h] BYREF
  void ***v94; // [rsp+268h] [rbp-218h]
  __int64 v95; // [rsp+270h] [rbp-210h]
  _OWORD v96[9]; // [rsp+278h] [rbp-208h] BYREF
  void **v97; // [rsp+310h] [rbp-170h]
  void **v98; // [rsp+318h] [rbp-168h] BYREF
  __int128 v99; // [rsp+320h] [rbp-160h]
  void **v100; // [rsp+330h] [rbp-150h] BYREF
  _OWORD v101[6]; // [rsp+338h] [rbp-148h] BYREF
  _QWORD v102[10]; // [rsp+398h] [rbp-E8h] BYREF
  void **v103; // [rsp+3E8h] [rbp-98h] BYREF
  __int128 v104; // [rsp+3F0h] [rbp-90h]
  __int64 v105; // [rsp+400h] [rbp-80h]
  void **v106; // [rsp+408h] [rbp-78h]
  __int64 v107; // [rsp+410h] [rbp-70h]
  void **v108; // [rsp+418h] [rbp-68h]
  __int64 v109; // [rsp+420h] [rbp-60h]
  __int64 v110; // [rsp+428h] [rbp-58h]
  __int64 v111; // [rsp+430h] [rbp-50h]
  void *v112; // [rsp+438h] [rbp-48h]
  void ***v113; // [rsp+440h] [rbp-40h]
  __int64 v114; // [rsp+448h] [rbp-38h]
  unsigned __int8 v115; // [rsp+457h] [rbp-29h]

  v112 = a6; /*0x10034a3d4*/
  v108 = a5; /*0x10034a3d8*/
  v113 = a4; /*0x10034a3dc*/
  v8 = (_QWORD *)a1; /*0x10034a3e6*/
  codexmate_lib::core::skills::lock_skill_mutations::h04196551a2ddac87(&v100); /*0x10034a3f0*/
  v9 = v100; /*0x10034a3f5*/
  v10 = BYTE8(v101[0]); /*0x10034a403*/
  if ( v100 != (void **)11 ) /*0x10034a40e*/
  {
    v18 = *(_QWORD *)&v101[0]; /*0x10034a480*/
    memcpy((void *)(a1 + 25), (char *)v101 + 9, 0x4Fu); /*0x10034a483*/
    *(_QWORD *)(a1 + 8) = v9; /*0x10034a488*/
    *(_QWORD *)(a1 + 16) = v18; /*0x10034a48c*/
    *(_BYTE *)(a1 + 24) = v10; /*0x10034a490*/
    *(_QWORD *)a1 = 2; /*0x10034a494*/
    return v8; /*0x10034a49b*/
  }
  LOWORD(v100) = 511; /*0x10034a413*/
  BYTE2(v100) = 1; /*0x10034a41c*/
  v12 = (void **)&v100; /*0x10034a423*/
  v110 = a2; /*0x10034a42a*/
  v109 = a3; /*0x10034a431*/
  v13 = a3; /*0x10034a435*/
  v14 = *(_QWORD *)&v101[0]; /*0x10034a438*/
  v15 = BYTE8(v101[0]); /*0x10034a43b*/
  v16 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v100, a2, v13); /*0x10034a43e*/
  if ( v16 ) /*0x10034a446*/
  {
    v8[1] = 2; /*0x10034a44b*/
    v8[2] = v16; /*0x10034a454*/
    *v8 = 2; /*0x10034a459*/
    if ( (v15 & 1) != 0 ) /*0x10034a465*/
    {
LABEL_44:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v14); /*0x10034a968*/
      return v8; /*0x10034a96c*/
    }
LABEL_43:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10034b2d2*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v12,
                             a2,
                             v17,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v14 + 8) = 1; /*0x10034b2df*/
    }
    goto LABEL_44; /*0x10034b2e4*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v88, v113, v108, "skill-backupsreplace", 13); /*0x10034a4bc*/
  LOWORD(v100) = 511; /*0x10034a4c1*/
  BYTE2(v100) = 1; /*0x10034a4ca*/
  v19 = v90; /*0x10034a4d8*/
  v12 = (void **)&v100; /*0x10034a4df*/
  v108 = v89; /*0x10034a4e6*/
  v20 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v100, v89, v90); /*0x10034a4ed*/
  if ( v20 ) /*0x10034a4f5*/
  {
    v8[1] = 2; /*0x10034a4f7*/
    v8[2] = v20; /*0x10034a500*/
LABEL_39:
    *(_QWORD *)a1 = 2; /*0x10034a91d*/
    goto LABEL_40; /*0x10034a91d*/
  }
  v21 = a7; /*0x10034a519*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v100, v112, a7); /*0x10034a51c*/
  if ( (_DWORD)v100 == 1 ) /*0x10034a528*/
  {
    if ( (v101[0] & 3) == 1 ) /*0x10034a53d*/
    {
      v114 = v14; /*0x10034a53f*/
      v113 = (void ***)(*(_QWORD *)&v101[0] - 1LL); /*0x10034a547*/
      v22 = *(_QWORD *)(*(_QWORD *)&v101[0] - 1LL); /*0x10034a54b*/
      v23 = *(_QWORD *)(*(_QWORD *)&v101[0] + 7LL); /*0x10034a54f*/
      if ( *(_QWORD *)v23 ) /*0x10034a553*/
        (*(void (__fastcall **)(__int64))v23)(v22); /*0x10034a55f*/
      v24 = *(_QWORD *)(v23 + 8); /*0x10034a561*/
      if ( v24 ) /*0x10034a568*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v24, *(_QWORD *)(v23 + 16)); /*0x10034a571*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, 24, 8); /*0x10034a584*/
      v14 = v114; /*0x10034a589*/
    }
    __s2[0] = v112; /*0x10034a591*/
    __s2[1] = a7; /*0x10034a598*/
    v100 = __s2; /*0x10034a5a6*/
    *(_QWORD *)&v101[0] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10034a5b4*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((char *)v96 + 8, &unk_1017BC8EE, &v100); /*0x10034a5d0*/
    v17 = *((void ***)&v96[0] + 1); /*0x10034a5d5*/
    v25 = *(char **)&v96[1]; /*0x10034a5dc*/
    v26 = 8; /*0x10034a5e3*/
    v27 = *((_QWORD *)&v96[1] + 1); /*0x10034a5e8*/
    goto LABEL_38; /*0x10034a5ef*/
  }
  v28 = v112; /*0x10034a5fb*/
  v25 = (char *)std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v100, v112, a7); /*0x10034a602*/
  v17 = *(void ***)&v101[0]; /*0x10034a607*/
  if ( (_BYTE)v100 ) /*0x10034a615*/
  {
    v26 = 2; /*0x10034a617*/
LABEL_38:
    *(_OWORD *)(a1 + 88) = v96[5]; /*0x10034a8a9*/
    *(_OWORD *)(a1 + 72) = v96[4]; /*0x10034a8d4*/
    *(_OWORD *)(a1 + 56) = v96[3]; /*0x10034a8ec*/
    v12 = *(void ***)&v96[2]; /*0x10034a8f1*/
    *(_OWORD *)(a1 + 40) = v96[2]; /*0x10034a904*/
    *(_QWORD *)(a1 + 16) = v17; /*0x10034a909*/
    *(_QWORD *)(a1 + 24) = v25; /*0x10034a90e*/
    *(_QWORD *)(a1 + 32) = v27; /*0x10034a913*/
    *(_QWORD *)(a1 + 8) = v26; /*0x10034a918*/
    goto LABEL_39; /*0x10034a918*/
  }
  if ( (WORD2(v101[0]) & 0xF000) == 0x4000 ) /*0x10034a631*/
  {
    std::path::Path::_join::hb1a495d4f06b13b8(__s2, v112, a7, &unk_1015E3AD8, 8); /*0x10034a6cb*/
    v30 = &v100; /*0x10034a6de*/
    v113 = (void ***)__s2[1]; /*0x10034a6e5*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v100, __s2[1], __s2[2]); /*0x10034a6e9*/
    if ( (_BYTE)v100 ) /*0x10034a6f5*/
    {
      if ( (v101[0] & 3) == 1 ) /*0x10034a70a*/
      {
        v115 = v15; /*0x10034a70c*/
        v114 = v14; /*0x10034a710*/
        v31 = *(_QWORD *)&v101[0] - 1LL; /*0x10034a714*/
        v32 = *(_QWORD *)(*(_QWORD *)&v101[0] - 1LL); /*0x10034a718*/
        v33 = *(_QWORD *)(*(_QWORD *)&v101[0] + 7LL); /*0x10034a71c*/
        if ( *(_QWORD *)v33 ) /*0x10034a720*/
          (*(void (__fastcall **)(__int64))v33)(v32); /*0x10034a72c*/
        v34 = *(_QWORD *)(v33 + 8); /*0x10034a72e*/
        if ( v34 ) /*0x10034a735*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v34, *(_QWORD *)(v33 + 16)); /*0x10034a73e*/
        v30 = (void ***)v31; /*0x10034a74d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24, 8); /*0x10034a750*/
        v14 = v114; /*0x10034a755*/
        v15 = v115; /*0x10034a759*/
      }
      v35 = __s2[0]; /*0x10034a75e*/
      if ( __s2[0] ) /*0x10034a768*/
      {
        v30 = v113; /*0x10034a76f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, __s2[0], 1); /*0x10034a773*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v35); /*0x10034a778*/
      v29 = 31; /*0x10034a77d*/
      v25 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(31, 1); /*0x10034a78c*/
      if ( v25 ) /*0x10034a794*/
      {
        qmemcpy(v25, "Directory must contain SKILL.md", 31); /*0x10034a7ce*/
        v27 = 31; /*0x10034a7d1*/
        goto LABEL_37; /*0x10034a7d6*/
      }
LABEL_132:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v29); /*0x10034b556*/
    }
    if ( __s2[0] ) /*0x10034a990*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, __s2[0], 1); /*0x10034a99b*/
  }
  else
  {
    if ( (WORD2(v101[0]) & 0xF000) == 0xA000 ) /*0x10034a639*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v100, v28); /*0x10034a63f*/
      v29 = 40; /*0x10034a644*/
      v25 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x10034a653*/
      if ( v25 ) /*0x10034a65b*/
      {
        qmemcpy(v25, "Skill source must not be a symbolic link", 40); /*0x10034a6a3*/
        v27 = 40; /*0x10034a6a6*/
LABEL_37:
        *(_QWORD *)&v96[0] = 9; /*0x10034a88f*/
        *((_QWORD *)&v96[0] + 1) = v27; /*0x10034a89a*/
        v26 = 9; /*0x10034a8a1*/
        v17 = (void **)v27; /*0x10034a8a6*/
        goto LABEL_38; /*0x10034a8a6*/
      }
      goto LABEL_132; /*0x10034a65b*/
    }
    v36 = v112; /*0x10034a7db*/
    v37 = (_QWORD *)std::path::Path::file_name::hf6c2daad91e50ebf(v112, a7); /*0x10034a7e2*/
    if ( v37 == nullptr || v38 != 8 || *v37 != 0x646D2E4C4C494B53LL ) /*0x10034a808*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, a7); /*0x10034a80e*/
      v29 = 52; /*0x10034a813*/
      v25 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1); /*0x10034a822*/
      if ( v25 ) /*0x10034a82a*/
      {
        qmemcpy(v25, "Must be a directory with SKILL.md or a SKILL.md file", 52); /*0x10034a880*/
        v27 = 52; /*0x10034a88a*/
        goto LABEL_37; /*0x10034a88a*/
      }
      goto LABEL_132; /*0x10034a82a*/
    }
    v40 = std::path::Path::parent::h4c3ac26770731fbb(v112, a7); /*0x10034a9a9*/
    if ( v40 ) /*0x10034a9b1*/
      v21 = v41; /*0x10034a9b1*/
    v42 = v112; /*0x10034a9b5*/
    if ( v40 ) /*0x10034a9b9*/
      v42 = (void *)v40; /*0x10034a9b9*/
    v112 = v42; /*0x10034a9bd*/
  }
  std::path::Path::to_path_buf::h73855ce4b54f7174((char *)v96 + 8, v112, v21); /*0x10034a9cf*/
  v107 = *((_QWORD *)&v96[0] + 1); /*0x10034a9db*/
  v105 = *((_QWORD *)&v96[1] + 1); /*0x10034a9f1*/
  v112 = *(void **)&v96[1]; /*0x10034a9f1*/
  v115 = v15; /*0x10034a9f5*/
  v43 = std::path::Path::file_name::hf6c2daad91e50ebf(*(_QWORD *)&v96[1], *((_QWORD *)&v96[1] + 1)); /*0x10034a9f9*/
  v45 = v44; /*0x10034a9fe*/
  if ( !v43 ) /*0x10034aa04*/
    v45 = 0; /*0x10034aa04*/
  v46 = 1; /*0x10034aa08*/
  if ( v43 ) /*0x10034aa0d*/
    v46 = v43; /*0x10034aa0d*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v93, v110, v109, v46, v45); /*0x10034aa20*/
  std::sys::fs::canonicalize::h06efd38dcb2724a4(&v100, v112, v105); /*0x10034aa34*/
  if ( __OFSUB__(0, v100) ) /*0x10034aa3b*/
  {
    codexmate_lib::core::skills::import_skill::_$u7b$$u7b$closure$u7d$$u7d$::h1719e62e9aecf7ae( /*0x10034aa5a*/
      &v98,
      v112,
      v105,
      *(_QWORD *)&v101[0]);
  }
  else
  {
    v99 = v101[0]; /*0x10034aa7d*/
    v98 = v100; /*0x10034aa84*/
  }
  v113 = v94; /*0x10034aaa0*/
  v111 = v95; /*0x10034aaa4*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v100, v94, v95); /*0x10034aaa8*/
  v91 = v19; /*0x10034aab4*/
  if ( (_BYTE)v100 ) /*0x10034aabb*/
  {
    if ( (v101[0] & 3) == 1 ) /*0x10034aacc*/
    {
      v47 = *(_QWORD *)&v101[0] - 1LL; /*0x10034aace*/
      v48 = *(_QWORD *)(*(_QWORD *)&v101[0] - 1LL); /*0x10034aad2*/
      v49 = *(_QWORD *)(*(_QWORD *)&v101[0] + 7LL); /*0x10034aad6*/
      if ( *(_QWORD *)v49 ) /*0x10034aada*/
        (*(void (__fastcall **)(__int64))v49)(v48); /*0x10034aae5*/
      v50 = *(_QWORD *)(v49 + 8); /*0x10034aae7*/
      if ( v50 ) /*0x10034aaee*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v50, *(_QWORD *)(v49 + 16)); /*0x10034aaf7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 24, 8); /*0x10034ab09*/
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4ccd5ea377d1fd44(&v100, &v93); /*0x10034ab1c*/
    goto LABEL_70; /*0x10034ab21*/
  }
  std::sys::fs::canonicalize::h06efd38dcb2724a4(&v100, v113, v111); /*0x10034ab32*/
  if ( v100 != (void **)0x8000000000000000LL ) /*0x10034ab48*/
  {
LABEL_70:
    v104 = v101[0]; /*0x10034ab67*/
    v103 = v100; /*0x10034ab8a*/
    goto LABEL_71; /*0x10034ab8a*/
  }
  codexmate_lib::core::skills::import_skill::_$u7b$$u7b$closure$u7d$$u7d$::h1719e62e9aecf7ae( /*0x10034ab60*/
    &v103,
    v113,
    v111,
    *(_QWORD *)&v101[0]);
LABEL_71:
  v51 = *((_QWORD *)&v104 + 1); /*0x10034ab91*/
  v106 = (void **)v104; /*0x10034abaa*/
  v97 = (void **)v99; /*0x10034abb8*/
  std::path::Path::components::he8b0f71a48373be5(__s1, v99, *((_QWORD *)&v99 + 1)); /*0x10034abbf*/
  std::path::Path::components::he8b0f71a48373be5(__s2, v106, v51); /*0x10034abd2*/
  v52 = __s1[0]; /*0x10034abd7*/
  v53 = __s1[1]; /*0x10034abde*/
  v54 = (void **)__s2[0]; /*0x10034abe5*/
  v55 = __s2[1]; /*0x10034abec*/
  if ( __s1[1] == __s2[1] && LOBYTE(__s1[7]) == LOBYTE(__s2[7]) && BYTE1(__s1[7]) == 2 && BYTE1(__s2[7]) == 2 ) /*0x10034ac17*/
  {
    v92 = (void **)__s2[0]; /*0x10034ac1f*/
    v56 = memcmp(__s1[0], __s2[0], (size_t)__s1[1]); /*0x10034ac26*/
    v54 = v92; /*0x10034ac2b*/
    if ( !v56 ) /*0x10034ac34*/
      goto LABEL_81; /*0x10034ac34*/
  }
  if ( LOBYTE(__s1[2]) != 6 ) /*0x10034ac43*/
  {
    *(void **)((char *)&v82[1] + 15) = __s1[6]; /*0x10034ac4c*/
    v82[1] = *(_OWORD *)((char *)&__s1[4] + 1); /*0x10034ac68*/
    v82[0] = *(_OWORD *)((char *)&__s1[2] + 1); /*0x10034ac84*/
  }
  *(_QWORD *)&v96[0] = v52; /*0x10034ac99*/
  *((_QWORD *)&v96[0] + 1) = v53; /*0x10034aca0*/
  LOBYTE(v96[1]) = __s1[2]; /*0x10034aca7*/
  *(_OWORD *)((char *)&v96[1] + 1) = v82[0]; /*0x10034acbb*/
  *(_OWORD *)((char *)&v96[2] + 1) = v82[1]; /*0x10034acd0*/
  *(_QWORD *)&v96[3] = *(_QWORD *)((char *)&v82[1] + 15); /*0x10034acec*/
  WORD4(v96[3]) = __s1[7]; /*0x10034acf3*/
  BYTE10(v96[3]) = BYTE2(__s1[7]); /*0x10034acfa*/
  if ( LOBYTE(__s2[2]) != 6 ) /*0x10034ad09*/
  {
    *(void **)((char *)&v81[3] + 7) = __s2[6]; /*0x10034ad12*/
    v81[3] = *(void **)((char *)&__s2[5] + 1); /*0x10034ad20*/
    v81[2] = *(void **)((char *)&__s2[4] + 1); /*0x10034ad2e*/
    v81[1] = *(void **)((char *)&__s2[3] + 1); /*0x10034ad43*/
    v81[0] = *(void **)((char *)&__s2[2] + 1); /*0x10034ad4a*/
  }
  v100 = v54; /*0x10034ad5f*/
  *(_QWORD *)&v101[0] = v55; /*0x10034ad66*/
  BYTE8(v101[0]) = __s2[2]; /*0x10034ad6d*/
  *(_QWORD *)((char *)v101 + 9) = v81[0]; /*0x10034ad81*/
  *(_QWORD *)((char *)&v101[1] + 1) = v81[1]; /*0x10034ad88*/
  *(_QWORD *)((char *)&v101[1] + 9) = v81[2]; /*0x10034ad96*/
  *(_QWORD *)((char *)&v101[2] + 1) = v81[3]; /*0x10034ada4*/
  *((_QWORD *)&v101[2] + 1) = *(_QWORD *)((char *)&v81[3] + 7); /*0x10034adb2*/
  LOWORD(v101[3]) = __s2[7]; /*0x10034adb9*/
  BYTE2(v101[3]) = BYTE2(__s2[7]); /*0x10034adc0*/
  v15 = v115; /*0x10034add4*/
  if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(v96, &v100) ) /*0x10034add9*/
  {
LABEL_81:
    std::path::Path::_join::hb1a495d4f06b13b8(&v85, v113, v111, &unk_1015E3AD8, 8); /*0x10034ae02*/
    v57 = v86; /*0x10034ae07*/
    codexmate_lib::core::skills::load_skill_summary::h78677cb906cb96ee(&v100, v86, v87, v110, v109); /*0x10034ae27*/
    v58 = v100; /*0x10034ae2c*/
    if ( v100 == (void **)2 ) /*0x10034ae37*/
    {
      codexmate_lib::core::skills::import_skill::_$u7b$$u7b$closure$u7d$$u7d$::hdb9cb19a800d8238(v96); /*0x10034ae44*/
      qmemcpy(__s2, v96, 0x60u); /*0x10034ae5f*/
      v17 = __s1; /*0x10034ae62*/
      qmemcpy(__s1, __s2, sizeof(__s1)); /*0x10034ae74*/
      qmemcpy((void *)(a1 + 8), __s1, 0x60u); /*0x10034ae84*/
      v12 = (void **)(a1 + 104); /*0x10034ae84*/
      *(_QWORD *)a1 = 2; /*0x10034ae87*/
      if ( v85 ) /*0x10034ae99*/
      {
        v12 = v57; /*0x10034aea0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v85, 1); /*0x10034aea3*/
      }
      v15 = v115; /*0x10034aea8*/
    }
    else
    {
      qmemcpy(__s2, v101, 0x60u); /*0x10034b088*/
      qmemcpy(v82, v102, sizeof(v82)); /*0x10034b09e*/
      v17 = __s1; /*0x10034b0a1*/
      qmemcpy(__s1, __s2, sizeof(__s1)); /*0x10034b0b3*/
      qmemcpy(v81, __s1, sizeof(v81)); /*0x10034b0c5*/
      if ( v85 ) /*0x10034b0d2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v85, 1); /*0x10034b0dc*/
      *(_QWORD *)a1 = v58; /*0x10034b0e1*/
      qmemcpy((void *)(a1 + 8), v81, 0x60u); /*0x10034b0f6*/
      qmemcpy((void *)(a1 + 104), v82, 0x50u); /*0x10034b10a*/
      v12 = (void **)(a1 + 184); /*0x10034b10a*/
      *(_QWORD *)(a1 + 184) = 0x8000000000000000LL; /*0x10034b117*/
      *(_BYTE *)(a1 + 336) = 0; /*0x10034b11f*/
      v15 = v115; /*0x10034b128*/
    }
    goto LABEL_113; /*0x10034aead*/
  }
  v59 = std::path::Path::parent::h4c3ac26770731fbb(v113, v111); /*0x10034aeba*/
  v61 = v60; /*0x10034aebf*/
  if ( !v59 ) /*0x10034aec5*/
  {
    v59 = v110; /*0x10034aec5*/
    v61 = v109; /*0x10034aeca*/
  }
  v12 = (void **)&v100; /*0x10034aecf*/
  codexmate_lib::core::skills::stage_skill_directory::h888900f04e9e7485(&v100, v112, v105, v59, v61); /*0x10034aee1*/
  v62 = v100; /*0x10034aee6*/
  v96[0] = v101[0]; /*0x10034aef4*/
  v96[1] = v101[1]; /*0x10034af17*/
  if ( v100 != (void **)11 ) /*0x10034af29*/
  {
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v101[5]; /*0x10034b139*/
    *(_OWORD *)(a1 + 80) = v101[4]; /*0x10034b151*/
    *(_OWORD *)(a1 + 64) = v101[3]; /*0x10034b169*/
    *(_OWORD *)(a1 + 48) = v101[2]; /*0x10034b181*/
    *(_OWORD *)(a1 + 32) = v96[1]; /*0x10034b199*/
    v17 = *((void ***)&v96[0] + 1); /*0x10034b1a5*/
    *(_OWORD *)(a1 + 16) = v96[0]; /*0x10034b1b1*/
    *(_QWORD *)(a1 + 8) = v62; /*0x10034b1b6*/
    *(_QWORD *)a1 = 2; /*0x10034b1bb*/
LABEL_113:
    if ( v103 ) /*0x10034b3f7*/
    {
      v12 = v106; /*0x10034b3fe*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v103, 1); /*0x10034b402*/
    }
    if ( v98 ) /*0x10034b411*/
    {
      v12 = v97; /*0x10034b418*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v98, 1); /*0x10034b41f*/
    }
    if ( v93 ) /*0x10034b42e*/
    {
      v12 = (void **)v113; /*0x10034b435*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, v93, 1); /*0x10034b439*/
    }
    if ( v107 ) /*0x10034b445*/
    {
      v12 = (void **)v112; /*0x10034b450*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v107, 1); /*0x10034b454*/
    }
LABEL_40:
    a2 = v88; /*0x10034a925*/
    if ( v88 ) /*0x10034a92f*/
    {
      v12 = v108; /*0x10034a936*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v88, 1); /*0x10034a93a*/
    }
    v8 = (_QWORD *)a1; /*0x10034a93f*/
    if ( (v15 & 1) != 0 ) /*0x10034a946*/
      goto LABEL_44; /*0x10034a946*/
    goto LABEL_43; /*0x10034a946*/
  }
  v63 = *((_QWORD *)&v96[0] + 1); /*0x10034af36*/
  *(_OWORD *)__s1 = v96[0]; /*0x10034af3d*/
  v64 = *(_QWORD *)&v96[1]; /*0x10034af4b*/
  *(_OWORD *)&__s1[2] = v96[1]; /*0x10034af52*/
  std::path::Path::_join::hb1a495d4f06b13b8(v96, *((_QWORD *)&v96[0] + 1), *(_QWORD *)&v96[1], &unk_1015E3AD8, 8); /*0x10034af81*/
  v65 = *(_QWORD *)&v96[1]; /*0x10034af8d*/
  v66 = v63; /*0x10034af94*/
  v67 = *((void ****)&v96[0] + 1); /*0x10034af97*/
  v68 = std::path::Path::parent::h4c3ac26770731fbb(v66, v64); /*0x10034af9d*/
  v70 = v69; /*0x10034afa2*/
  if ( !v68 ) /*0x10034afa8*/
  {
    v68 = v110; /*0x10034afa8*/
    v70 = v109; /*0x10034afad*/
  }
  v71 = &v100; /*0x10034afb2*/
  codexmate_lib::core::skills::load_skill_summary::h78677cb906cb96ee(&v100, v67, v65, v68, v70); /*0x10034afc2*/
  v72 = v91; /*0x10034afce*/
  if ( (_DWORD)v100 == 2 ) /*0x10034afd5*/
  {
    v73 = *(_QWORD *)&v96[0]; /*0x10034afdb*/
    v15 = v115; /*0x10034afe5*/
    if ( *(_QWORD *)&v96[0] ) /*0x10034afea*/
    {
      v71 = v67; /*0x10034aff1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, *(_QWORD *)&v96[0], 1); /*0x10034aff4*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v71, v73); /*0x10034aff9*/
    v74 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x10034b008*/
    if ( !v74 ) /*0x10034b010*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x10034b56f*/
    qmemcpy(v74, "Invalid skill after import", 26); /*0x10034b03c*/
    *(_QWORD *)(a1 + 8) = 9; /*0x10034b045*/
    *(_QWORD *)(a1 + 16) = 26; /*0x10034b04e*/
    *(_QWORD *)(a1 + 24) = v74; /*0x10034b057*/
    *(_QWORD *)(a1 + 32) = 26; /*0x10034b05c*/
    *(_QWORD *)a1 = 2; /*0x10034b065*/
    goto LABEL_112; /*0x10034b06d*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..InstalledSkillSummary$GT$::h0804303e95cd6d63(&v100); /*0x10034b1cf*/
  if ( *(_QWORD *)&v96[0] ) /*0x10034b1de*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, *(_QWORD *)&v96[0], 1); /*0x10034b1e8*/
  __s2[0] = (void *)0x8000000000000000LL; /*0x10034b1f7*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v100, v113, v111); /*0x10034b20d*/
  v75 = (char)v100; /*0x10034b212*/
  if ( (_BYTE)v100 ) /*0x10034b21d*/
  {
    *((_QWORD *)&v96[0] + 1) = *(_QWORD *)&v101[0]; /*0x10034b22d*/
    *(_QWORD *)&v96[0] = 1; /*0x10034b234*/
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3((char *)v96 + 8); /*0x10034b23f*/
    v76 = 0; /*0x10034b244*/
  }
  else
  {
    codexmate_lib::core::skills::backup_skill_directory::hadcafe7a62e8ba58( /*0x10034b280*/
      (unsigned int)&v100,
      (_DWORD)v113,
      v111,
      v110,
      v109,
      (_DWORD)v108,
      v72,
      (__int64)"replace",
      7);
    qmemcpy(v80, v101, sizeof(v80)); /*0x10034b29f*/
    if ( v100 == (void **)0x8000000000000000LL ) /*0x10034b2af*/
    {
      qmemcpy((void *)(a1 + 8), v80, 0x60u); /*0x10034b2c2*/
      *(_QWORD *)a1 = 2; /*0x10034b2c5*/
LABEL_111:
      v15 = v115; /*0x10034b3dc*/
LABEL_112:
      v12 = __s1; /*0x10034b3e1*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..skills..StagedDirectory$GT$::h6511e99f7a62b940(__s1); /*0x10034b3e8*/
      goto LABEL_113; /*0x10034b3e8*/
    }
    __s2[18] = (void *)v102[5]; /*0x10034b2f0*/
    __s2[17] = (void *)v102[4]; /*0x10034b2fe*/
    __s2[16] = (void *)v102[3]; /*0x10034b30c*/
    __s2[15] = (void *)v102[2]; /*0x10034b31a*/
    __s2[14] = (void *)v102[1]; /*0x10034b32f*/
    __s2[13] = (void *)v102[0]; /*0x10034b336*/
    __s2[0] = v100; /*0x10034b33d*/
    qmemcpy(&__s2[1], v80, 0x60u); /*0x10034b357*/
    v76 = 1; /*0x10034b35a*/
  }
  v114 = v14; /*0x10034b365*/
  codexmate_lib::core::skills::publish_staged_skill::hf7483d16f4f52114(&v100, __s1, v113, v111, v110, v109); /*0x10034b37f*/
  v77 = v100; /*0x10034b384*/
  qmemcpy(v96, v101, 0x60u); /*0x10034b39e*/
  if ( v100 == (void **)2 ) /*0x10034b3a5*/
  {
    qmemcpy((void *)(a1 + 8), v96, 0x60u); /*0x10034b3bc*/
    *(_QWORD *)a1 = 2; /*0x10034b3bf*/
    v14 = v114; /*0x10034b3ca*/
    if ( !v75 ) /*0x10034b3ce*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..SkillBackupSummary$GT$::hfb0fd7a1c63aceca(__s2); /*0x10034b3d7*/
    goto LABEL_111; /*0x10034b3d7*/
  }
  qmemcpy((void *)(a1 + 104), v102, 0x50u); /*0x10034b46f*/
  qmemcpy((void *)(a1 + 8), v96, 0x60u); /*0x10034b483*/
  memcpy((void *)(a1 + 184), __s2, 0x98u); /*0x10034b49a*/
  *(_QWORD *)a1 = v77; /*0x10034b49f*/
  *(_BYTE *)(a1 + 336) = v76; /*0x10034b4a3*/
  v78 = v114; /*0x10034b4b2*/
  v79 = v115; /*0x10034b4b6*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..skills..StagedDirectory$GT$::h6511e99f7a62b940(__s1); /*0x10034b4bb*/
  if ( v103 ) /*0x10034b4ca*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v103, 1); /*0x10034b4d5*/
  if ( v98 ) /*0x10034b4e4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v98, 1); /*0x10034b4f2*/
  if ( v93 ) /*0x10034b501*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, v93, 1); /*0x10034b50c*/
  if ( v107 ) /*0x10034b518*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v107, 1); /*0x10034b523*/
  if ( v88 ) /*0x10034b532*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v88, 1); /*0x10034b53d*/
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$std..collections..hash..map..HashMap$LT$muda..menu_id..MenuId$C$tauri..menu..Menu$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$$GT$$GT$::h96804b47983bc03a( /*0x10034b549*/
    v78,
    v79);
  return (_QWORD *)a1; /*0x10034a974*/
}