// __ZN13codexmate_lib4core6skills20restore_skill_backup @ 0x10034f400 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::skills::restore_skill_backup::hcae8b56e4b3d2616(
        _QWORD *a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        _BYTE *a7)
{
  _BYTE **v8; // r15
  __int64 v9; // r13
  char v10; // r12
  __int64 v11; // r12
  __int64 v12; // r14
  _BYTE **v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rbx
  _BYTE **v17; // r12
  char v18; // r15
  __int64 v19; // r15
  _QWORD *v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v25; // r8
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r13
  _QWORD *v32; // rdx
  __int64 v33; // rax
  _BYTE **v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rsi
  int *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rcx
  _QWORD *v42; // r9
  __int64 v43; // rcx
  int *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  _BYTE **v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // rbx
  int *v51; // rax
  signed __int64 v52; // rdx
  signed __int64 v53; // r8
  _BYTE ***v54; // rdi
  __int64 v55; // rsi
  void *v56; // rax
  _QWORD *v57; // rcx
  _QWORD *v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rsi
  unsigned __int64 v62; // rbx
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // r12
  __int64 v66; // rbx
  char *v67; // r14
  _BYTE **v68; // rax
  __int64 v69; // rbx
  __int64 v70; // r14
  void *v71; // r15
  _BYTE v72[96]; // [rsp+18h] [rbp-4D8h] BYREF
  _QWORD v73[12]; // [rsp+78h] [rbp-478h] BYREF
  _QWORD v74[19]; // [rsp+D8h] [rbp-418h] BYREF
  __int128 v75; // [rsp+170h] [rbp-380h]
  _QWORD v76[3]; // [rsp+188h] [rbp-368h] BYREF
  _QWORD v77[3]; // [rsp+1A0h] [rbp-350h] BYREF
  _QWORD v78[2]; // [rsp+1B8h] [rbp-338h] BYREF
  _OWORD v79[7]; // [rsp+1C8h] [rbp-328h] BYREF
  _QWORD v80[23]; // [rsp+238h] [rbp-2B8h] BYREF
  _QWORD v81[4]; // [rsp+2F0h] [rbp-200h] BYREF
  __int64 v82; // [rsp+310h] [rbp-1E0h] BYREF
  __int64 v83; // [rsp+318h] [rbp-1D8h]
  __int64 v84; // [rsp+320h] [rbp-1D0h]
  __int64 v85; // [rsp+328h] [rbp-1C8h] BYREF
  __int64 v86; // [rsp+330h] [rbp-1C0h]
  __int64 v87; // [rsp+338h] [rbp-1B8h]
  __int128 v88; // [rsp+340h] [rbp-1B0h]
  __int128 v89; // [rsp+350h] [rbp-1A0h]
  _BYTE *v90; // [rsp+360h] [rbp-190h] BYREF
  _BYTE *v91; // [rsp+368h] [rbp-188h]
  __int64 v92; // [rsp+370h] [rbp-180h]
  __int64 v93; // [rsp+378h] [rbp-178h]
  __int64 v94; // [rsp+380h] [rbp-170h]
  _BYTE **v95; // [rsp+388h] [rbp-168h] BYREF
  _BYTE v96[176]; // [rsp+390h] [rbp-160h] BYREF
  __int64 v97; // [rsp+440h] [rbp-B0h]
  __int64 v98; // [rsp+448h] [rbp-A8h]
  __int64 v99; // [rsp+450h] [rbp-A0h]
  __int64 v100; // [rsp+458h] [rbp-98h]
  __int64 v101; // [rsp+460h] [rbp-90h]
  _BYTE **v102; // [rsp+468h] [rbp-88h]
  __int64 v103; // [rsp+470h] [rbp-80h]
  __int64 v104; // [rsp+478h] [rbp-78h]
  size_t v105; // [rsp+480h] [rbp-70h]
  __int64 v106; // [rsp+488h] [rbp-68h]
  void *v107; // [rsp+490h] [rbp-60h]
  __int64 v108; // [rsp+498h] [rbp-58h]
  int *v109; // [rsp+4A0h] [rbp-50h]
  __int64 v110; // [rsp+4A8h] [rbp-48h]
  __int64 v111; // [rsp+4B0h] [rbp-40h]
  void *__dst; // [rsp+4B8h] [rbp-38h]
  unsigned __int8 v113; // [rsp+4C7h] [rbp-29h]

  v111 = a5; /*0x10034f414*/
  v108 = a3; /*0x10034f41b*/
  v109 = a2; /*0x10034f41f*/
  v90 = a6; /*0x10034f42a*/
  v91 = a7; /*0x10034f431*/
  codexmate_lib::core::skills::lock_skill_mutations::h04196551a2ddac87((__int64)&v95, (__int64)a2); /*0x10034f43f*/
  v8 = v95; /*0x10034f444*/
  v9 = *(_QWORD *)v96; /*0x10034f44b*/
  v10 = v96[8]; /*0x10034f452*/
  if ( v95 != (_BYTE **)11 ) /*0x10034f45e*/
  {
    memcpy((char *)a1 + 25, &v96[9], 0x4Fu); /*0x10034f5cd*/
    a1[1] = v8; /*0x10034f5d2*/
    a1[2] = v9; /*0x10034f5d6*/
    *((_BYTE *)a1 + 24) = v10; /*0x10034f5da*/
    *a1 = 2; /*0x10034f5de*/
    return a1; /*0x10034f5e8*/
  }
  __dst = a1; /*0x10034f464*/
  v113 = v96[8]; /*0x10034f468*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v85, a4, v111, "skill-backupsreplace", 13); /*0x10034f487*/
  v11 = v86; /*0x10034f48c*/
  v12 = v87; /*0x10034f493*/
  codexmate_lib::core::skills::resolve_backup_path::hf083208b26f1082c(&v95, v86, v87, v90, v91); /*0x10034f4b5*/
  v13 = v95; /*0x10034f4ba*/
  v14 = *(_QWORD *)v96; /*0x10034f4c1*/
  v15 = *(_QWORD *)&v96[8]; /*0x10034f4c8*/
  v16 = *(_QWORD *)&v96[16]; /*0x10034f4cf*/
  if ( v95 != (_BYTE **)11 ) /*0x10034f4da*/
  {
    v25 = __dst; /*0x10034f5f4*/
    *((_QWORD *)__dst + 12) = *(_QWORD *)&v96[80]; /*0x10034f5f8*/
    v25[11] = *(_QWORD *)&v96[72]; /*0x10034f603*/
    v25[10] = *(_QWORD *)&v96[64]; /*0x10034f60e*/
    v25[9] = *(_QWORD *)&v96[56]; /*0x10034f619*/
    v25[8] = *(_QWORD *)&v96[48]; /*0x10034f624*/
    v25[7] = *(_QWORD *)&v96[40]; /*0x10034f62f*/
    v26 = *(_QWORD *)&v96[24]; /*0x10034f633*/
    v20 = *(_QWORD **)&v96[32]; /*0x10034f63a*/
    v25[6] = *(_QWORD *)&v96[32]; /*0x10034f641*/
    v25[5] = v26; /*0x10034f645*/
    v25[2] = v14; /*0x10034f649*/
    v25[3] = v15; /*0x10034f64d*/
    v25[4] = v16; /*0x10034f651*/
    v25[1] = v13; /*0x10034f655*/
    *v25 = 2; /*0x10034f659*/
LABEL_45:
    v61 = v85; /*0x10034fcab*/
    if ( v85 ) /*0x10034fcb5*/
    {
      v14 = v11; /*0x10034fcbc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v85, 1); /*0x10034fcbf*/
    }
    if ( (v113 & 1) == 0 /*0x10034fe0d*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v14,
                             v61,
                             v20,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v9 + 8) = 1; /*0x10034fe1a*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v9); /*0x10034fcee*/
    return __dst; /*0x10034fd08*/
  }
  v100 = *(_QWORD *)v96; /*0x10034f4e0*/
  v111 = *(_QWORD *)&v96[8]; /*0x10034f4ee*/
  v106 = v9; /*0x10034f4f5*/
  v103 = v11; /*0x10034f4f9*/
  codexmate_lib::core::skills::is_regular_directory::hdbc469608c3f2638(&v95, *(__int64 *)&v96[8], *(__int64 *)&v96[16]); /*0x10034f4fd*/
  v17 = v95; /*0x10034f502*/
  v18 = v96[0]; /*0x10034f509*/
  if ( v95 != (_BYTE **)11 ) /*0x10034f515*/
  {
    v27 = __dst; /*0x10034f66c*/
    memcpy((char *)__dst + 17, &v96[1], 0x57u); /*0x10034f679*/
    v27[1] = v17; /*0x10034f67e*/
    *((_BYTE *)v27 + 16) = v18; /*0x10034f682*/
    *v27 = 2; /*0x10034f686*/
    v9 = v106; /*0x10034f68d*/
    v11 = v103; /*0x10034f691*/
    goto LABEL_42; /*0x10034f695*/
  }
  if ( (v96[0] & 1) == 0 ) /*0x10034f51f*/
  {
    v95 = &v90; /*0x10034f6a1*/
    *(_QWORD *)v96 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10034f6af*/
    v9 = v106; /*0x10034f6cb*/
    v11 = v103; /*0x10034f6cf*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v77, &unk_1017BC7D1, &v95); /*0x10034f6d3*/
    v20 = __dst; /*0x10034f6df*/
    *((_QWORD *)__dst + 4) = v77[2]; /*0x10034f6e3*/
    v28 = v77[0]; /*0x10034f6e7*/
    v20[3] = v77[1]; /*0x10034f6f5*/
    v20[2] = v28; /*0x10034f6f9*/
    v20[1] = 8; /*0x10034f6fd*/
    *v20 = 2; /*0x10034f705*/
    goto LABEL_42; /*0x10034f70c*/
  }
  v11 = v103; /*0x10034f540*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v95, v111, v16, "metadata.json", 13); /*0x10034f544*/
  v19 = *(_QWORD *)v96; /*0x10034f549*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v80, *(_QWORD *)v96, *(_QWORD *)&v96[8]); /*0x10034f561*/
  if ( v95 ) /*0x10034f570*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v95, 1); /*0x10034f57a*/
  v21 = v80[0]; /*0x10034f57f*/
  v22 = v80[1]; /*0x10034f586*/
  if ( __OFSUB__(-v80[0], 1) ) /*0x10034f590*/
  {
    v23 = __dst; /*0x10034f599*/
    *((_QWORD *)__dst + 1) = 2; /*0x10034f59d*/
    v23[2] = v22; /*0x10034f5a5*/
    *v23 = 2; /*0x10034f5a9*/
    v14 = v111; /*0x10034f5b0*/
    v9 = v106; /*0x10034f5b4*/
    goto LABEL_43; /*0x10034f5b8*/
  }
  v80[0] = v80[1]; /*0x10034f718*/
  v80[1] = v80[2]; /*0x10034f71f*/
  v80[2] = 0; /*0x10034f726*/
  v80[3] = 0; /*0x10034f731*/
  v97 = v22; /*0x10034f73c*/
  v80[4] = v22; /*0x10034f743*/
  v80[5] = v80[1]; /*0x10034f74a*/
  serde_json::de::from_trait::h82a598de75e5a628(&v95, v80, v20, v22); /*0x10034f75f*/
  v20 = *(_QWORD **)v96; /*0x10034f775*/
  if ( v95 == (_BYTE **)0x8000000000000000LL ) /*0x10034f77f*/
  {
    v29 = __dst; /*0x10034f781*/
    *((_QWORD *)__dst + 1) = 3; /*0x10034f785*/
    v29[2] = v20; /*0x10034f78d*/
    *v29 = 2; /*0x10034f791*/
LABEL_40:
    v14 = v111; /*0x10034fc70*/
    v9 = v106; /*0x10034fc77*/
    if ( !v21 ) /*0x10034fc7b*/
      goto LABEL_43; /*0x10034fc7b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v21, 1); /*0x10034fc8c*/
LABEL_42:
    v14 = v111; /*0x10034fc91*/
LABEL_43:
    if ( v100 ) /*0x10034fc9f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v100, 1); /*0x10034fca6*/
    goto LABEL_45; /*0x10034fca6*/
  }
  qmemcpy(v79, &v96[8], sizeof(v79)); /*0x10034f7b0*/
  v102 = v95; /*0x10034f7b3*/
  v78[0] = v95; /*0x10034f7ba*/
  v98 = *(_QWORD *)v96; /*0x10034f7c1*/
  v78[1] = *(_QWORD *)v96; /*0x10034f7c8*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v82, v111, v16, &anon_b0ee9adff4519c22b647af231a5a39fa_736, 5); /*0x10034f7ea*/
  v30 = v83; /*0x10034f7ef*/
  v31 = v84; /*0x10034f807*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v95, v83, v84); /*0x10034f80a*/
  if ( (_BYTE)v95 ) /*0x10034f816*/
  {
    v80[1] = *(_QWORD *)v96; /*0x10034f82a*/
    v80[0] = 1; /*0x10034f831*/
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v80[1]); /*0x10034f83c*/
    v95 = &v90; /*0x10034f848*/
    *(_QWORD *)v96 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10034f856*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v76, &unk_1017BC901, &v95); /*0x10034f872*/
    v32 = __dst; /*0x10034f87e*/
    *((_QWORD *)__dst + 4) = v76[2]; /*0x10034f882*/
    v33 = v76[0]; /*0x10034f886*/
    v32[3] = v76[1]; /*0x10034f894*/
    v32[2] = v33; /*0x10034f898*/
    v32[1] = 9; /*0x10034f89c*/
    *v32 = 2; /*0x10034f8a4*/
LABEL_37:
    if ( v82 ) /*0x10034fc55*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v82, 1); /*0x10034fc5f*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..skills..SkillBackupMetadata$GT$::h2827b73f829b851f(v78); /*0x10034fc6b*/
    goto LABEL_40; /*0x10034fc6b*/
  }
  v99 = *((_QWORD *)&v79[4] + 1); /*0x10034f8d4*/
  v92 = *(_QWORD *)&v79[4]; /*0x10034f8d4*/
  codexmate_lib::core::skills::resolve_skill_target::hd6c721e38e5333a8( /*0x10034f8db*/
    &v95,
    v109,
    v108,
    *(__int64 *)&v79[4],
    *((__int64 *)&v79[4] + 1));
  v34 = v95; /*0x10034f8e0*/
  v35 = *(_QWORD *)v96; /*0x10034f8e7*/
  v36 = *(_QWORD *)&v96[8]; /*0x10034f8ee*/
  v37 = *(_QWORD *)&v96[16]; /*0x10034f8f5*/
  if ( v95 != (_BYTE **)11 ) /*0x10034f900*/
  {
    v42 = __dst; /*0x10034f977*/
    *((_QWORD *)__dst + 12) = *(_QWORD *)&v96[80]; /*0x10034f97b*/
    v42[11] = *(_QWORD *)&v96[72]; /*0x10034f986*/
    v42[10] = *(_QWORD *)&v96[64]; /*0x10034f991*/
    v42[9] = *(_QWORD *)&v96[56]; /*0x10034f99c*/
    v42[8] = *(_QWORD *)&v96[48]; /*0x10034f9a7*/
    v42[7] = *(_QWORD *)&v96[40]; /*0x10034f9b2*/
    v43 = *(_QWORD *)&v96[24]; /*0x10034f9b6*/
    v42[6] = *(_QWORD *)&v96[32]; /*0x10034f9c4*/
    v42[5] = v43; /*0x10034f9c8*/
    v42[2] = v35; /*0x10034f9cc*/
    v42[3] = v36; /*0x10034f9d0*/
    v42[4] = v37; /*0x10034f9d4*/
    v42[1] = v34; /*0x10034f9d8*/
    *v42 = 2; /*0x10034f9dc*/
    goto LABEL_37; /*0x10034f9e3*/
  }
  v101 = *(_QWORD *)v96; /*0x10034f902*/
  v104 = v30; /*0x10034f909*/
  LOBYTE(v34) = 1; /*0x10034f90d*/
  LODWORD(v110) = (_DWORD)v34; /*0x10034f90f*/
  v107 = *(void **)&v96[8]; /*0x10034f912*/
  v105 = *(_QWORD *)&v96[16]; /*0x10034f916*/
  v38 = (int *)std::path::Path::parent::h4c3ac26770731fbb(*(_QWORD *)&v96[8], *(_QWORD *)&v96[16]); /*0x10034f91a*/
  if ( !v38 ) /*0x10034f922*/
  {
    v39 = v108; /*0x10034f922*/
    v38 = v109; /*0x10034f927*/
  }
  LOWORD(v95) = 511; /*0x10034f92c*/
  BYTE2(v95) = 1; /*0x10034f935*/
  v40 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v95, v38, v39); /*0x10034f946*/
  if ( v40 ) /*0x10034f94e*/
  {
    v41 = __dst; /*0x10034f954*/
    *((_QWORD *)__dst + 1) = 2; /*0x10034f958*/
    v41[2] = v40; /*0x10034f960*/
    *v41 = 2; /*0x10034f964*/
    goto LABEL_35; /*0x10034f96b*/
  }
  v44 = (int *)std::path::Path::parent::h4c3ac26770731fbb(v107, v105); /*0x10034f9f0*/
  v46 = v45; /*0x10034f9f5*/
  if ( !v44 ) /*0x10034f9fb*/
  {
    v44 = v109; /*0x10034f9fb*/
    v46 = v108; /*0x10034fa00*/
  }
  codexmate_lib::core::skills::stage_skill_directory::h888900f04e9e7485(&v95, v104, v31, v44, v46); /*0x10034fa16*/
  v47 = v95; /*0x10034fa1b*/
  v80[0] = *(_QWORD *)v96; /*0x10034fa29*/
  v80[1] = *(_QWORD *)&v96[8]; /*0x10034fa37*/
  v80[2] = *(_QWORD *)&v96[16]; /*0x10034fa45*/
  v80[3] = *(_QWORD *)&v96[24]; /*0x10034fa53*/
  if ( v95 != (_BYTE **)11 ) /*0x10034fa5e*/
  {
    v58 = __dst; /*0x10034fbac*/
    *((_QWORD *)__dst + 12) = *(_QWORD *)&v96[80]; /*0x10034fbb0*/
    v58[11] = *(_QWORD *)&v96[72]; /*0x10034fbbb*/
    v58[10] = *(_QWORD *)&v96[64]; /*0x10034fbc6*/
    v58[9] = *(_QWORD *)&v96[56]; /*0x10034fbd1*/
    v58[8] = *(_QWORD *)&v96[48]; /*0x10034fbdc*/
    v59 = *(_QWORD *)&v96[32]; /*0x10034fbe0*/
    v58[7] = *(_QWORD *)&v96[40]; /*0x10034fbee*/
    v58[6] = v59; /*0x10034fbf2*/
    v58[5] = v80[3]; /*0x10034fbfd*/
    v58[4] = v80[2]; /*0x10034fc08*/
    v60 = v80[0]; /*0x10034fc0c*/
    v58[3] = v80[1]; /*0x10034fc1a*/
    v58[2] = v60; /*0x10034fc1e*/
    v58[1] = v47; /*0x10034fc22*/
    *v58 = 2; /*0x10034fc26*/
LABEL_35:
    v30 = v104; /*0x10034fc2d*/
    if ( v101 ) /*0x10034fc3f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v101, 1); /*0x10034fc46*/
    goto LABEL_37; /*0x10034fc46*/
  }
  v81[0] = v80[0]; /*0x10034fa72*/
  v81[1] = v80[1]; /*0x10034fa79*/
  v48 = v80[2]; /*0x10034fa80*/
  v81[2] = v80[2]; /*0x10034fa87*/
  v81[3] = v80[3]; /*0x10034fa95*/
  *(_QWORD *)&v88 = v80[1]; /*0x10034fab0*/
  std::path::Path::_join::hb1a495d4f06b13b8(v80, v80[1], v80[2], &unk_1015E3AD8, 8); /*0x10034faba*/
  *(_QWORD *)&v89 = v80[2]; /*0x10034facd*/
  v49 = v48; /*0x10034fadb*/
  v50 = v80[1]; /*0x10034fade*/
  v51 = (int *)std::path::Path::parent::h4c3ac26770731fbb(v88, v49); /*0x10034fae1*/
  v53 = v52; /*0x10034fae6*/
  if ( !v51 ) /*0x10034faec*/
  {
    v51 = v109; /*0x10034faec*/
    v53 = v108; /*0x10034faf1*/
  }
  v54 = &v95; /*0x10034faf6*/
  codexmate_lib::core::skills::load_skill_summary::h78677cb906cb96ee(&v95, v50, v89, (__int64)v51, v53); /*0x10034fb0a*/
  if ( (_DWORD)v95 == 2 ) /*0x10034fb16*/
  {
    v55 = v80[0]; /*0x10034fb1c*/
    if ( v80[0] ) /*0x10034fb26*/
    {
      v54 = (_BYTE ***)v50; /*0x10034fb2d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v80[0], 1); /*0x10034fb30*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v55); /*0x10034fb35*/
    v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x10034fb44*/
    if ( !v56 ) /*0x10034fb4c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x1003501b2*/
    qmemcpy(v56, "Backup corrupted", 16); /*0x10034fb6a*/
    v57 = __dst; /*0x10034fb6d*/
    *((_QWORD *)__dst + 1) = 9; /*0x10034fb71*/
    v57[2] = 16; /*0x10034fb79*/
    v57[3] = v56; /*0x10034fb81*/
    v57[4] = 16; /*0x10034fb85*/
    *v57 = 2; /*0x10034fb8d*/
    goto LABEL_33; /*0x10034fb8d*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..InstalledSkillSummary$GT$::h0804303e95cd6d63(&v95); /*0x10034fd10*/
  if ( v80[0] ) /*0x10034fd1f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v80[0], 1); /*0x10034fd29*/
  v62 = 0x8000000000000000LL; /*0x10034fd2e*/
  v74[0] = 0x8000000000000000LL; /*0x10034fd38*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v95, v107, v105); /*0x10034fd4e*/
  if ( (_BYTE)v95 ) /*0x10034fd5a*/
  {
    v80[1] = *(_QWORD *)v96; /*0x10034fd6a*/
    v80[0] = 1; /*0x10034fd71*/
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v80[1]); /*0x10034fd7c*/
  }
  else
  {
    codexmate_lib::core::skills::backup_skill_directory::hadcafe7a62e8ba58( /*0x10034fdb9*/
      (unsigned int)&v95,
      (_DWORD)v107,
      v105,
      (_DWORD)v109,
      v108,
      v11,
      v12,
      (__int64)"restore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
      16);
    v62 = (unsigned __int64)v95; /*0x10034fdbe*/
    qmemcpy(v72, v96, sizeof(v72)); /*0x10034fdd8*/
    if ( v95 == (_BYTE **)0x8000000000000000LL ) /*0x10034fde8*/
    {
      v63 = __dst; /*0x10034fdea*/
      qmemcpy((char *)__dst + 8, v72, 0x60u); /*0x10034fdfe*/
      *v63 = 2; /*0x10034fe01*/
LABEL_33:
      core::ptr::drop_in_place$LT$codexmate_lib..core..skills..StagedDirectory$GT$::h6511e99f7a62b940(v81); /*0x10034fb94*/
      goto LABEL_35; /*0x10034fba0*/
    }
    v74[18] = *(_QWORD *)&v96[136]; /*0x10034fe2b*/
    v74[17] = *(_QWORD *)&v96[128]; /*0x10034fe39*/
    v74[16] = *(_QWORD *)&v96[120]; /*0x10034fe47*/
    v74[15] = *(_QWORD *)&v96[112]; /*0x10034fe55*/
    v74[14] = *(_QWORD *)&v96[104]; /*0x10034fe6a*/
    v74[13] = *(_QWORD *)&v96[96]; /*0x10034fe71*/
    v74[0] = v95; /*0x10034fe78*/
    qmemcpy(&v74[1], v72, 0x60u); /*0x10034fe92*/
  }
  codexmate_lib::core::skills::publish_staged_skill::hf7483d16f4f52114( /*0x10034feb3*/
    &v95,
    (__int64)v81,
    v107,
    v105,
    (__int64)v109,
    v108);
  qmemcpy(v73, v96, sizeof(v73)); /*0x10034fed2*/
  if ( v95 == (_BYTE **)2 ) /*0x10034fed9*/
  {
    v64 = __dst; /*0x10034fedb*/
    qmemcpy((char *)__dst + 8, v73, 0x60u); /*0x10034feef*/
    *v64 = 2; /*0x10034fef2*/
    if ( v62 != 0x8000000000000000LL ) /*0x10034ff06*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..SkillBackupSummary$GT$::hfb0fd7a1c63aceca(v74); /*0x10034ff13*/
    goto LABEL_33; /*0x10034ff18*/
  }
  qmemcpy(&v80[13], &v96[96], 0x50u); /*0x10034ff30*/
  qmemcpy(&v80[1], v73, 0x60u); /*0x10034ff46*/
  v80[0] = v95; /*0x10034ff49*/
  v93 = *((_QWORD *)&v79[0] + 1); /*0x10034ff57*/
  v88 = v79[0]; /*0x10034ff65*/
  v109 = *(int **)&v79[1]; /*0x10034ff73*/
  v89 = *(_OWORD *)((char *)&v79[1] + 8); /*0x10034ff85*/
  v65 = *((_QWORD *)&v79[2] + 1); /*0x10034ff8c*/
  v105 = *((_QWORD *)&v79[5] + 1); /*0x10034ffa5*/
  v108 = *(_QWORD *)&v79[5]; /*0x10034ffa5*/
  v110 = *(_QWORD *)&v79[6]; /*0x10034ffb0*/
  v94 = *((_QWORD *)&v79[3] + 1); /*0x10034ffbb*/
  v75 = v79[3]; /*0x10034ffc9*/
  v73[0] = v104; /*0x10034ffd4*/
  v73[1] = v31; /*0x10034ffdb*/
  _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0f1adfeb5dc2dd29(&v95, v73); /*0x10034fff0*/
  v66 = *((_QWORD *)&v79[6] + 1); /*0x10034fff5*/
  v67 = (char *)__dst; /*0x100350003*/
  *((_QWORD *)__dst + 37) = *(_QWORD *)&v96[8]; /*0x100350007*/
  v68 = v95; /*0x10035000e*/
  *((_QWORD *)v67 + 36) = *(_QWORD *)v96; /*0x10035001c*/
  *((_QWORD *)v67 + 35) = v68; /*0x100350023*/
  memcpy(v67, v80, 0xB8u); /*0x100350039*/
  memcpy(v67 + 336, v74, 0x98u); /*0x100350051*/
  *((_QWORD *)v67 + 23) = v102; /*0x10035005d*/
  *((_QWORD *)v67 + 24) = v98; /*0x10035006b*/
  *(_OWORD *)(v67 + 200) = v88; /*0x100350079*/
  *((_QWORD *)v67 + 27) = v109; /*0x100350085*/
  *((_OWORD *)v67 + 14) = v89; /*0x100350093*/
  *((_QWORD *)v67 + 30) = v65; /*0x10035009b*/
  *(_OWORD *)(v67 + 248) = v75; /*0x1003500a9*/
  *((_QWORD *)v67 + 33) = v92; /*0x1003500b8*/
  *((_QWORD *)v67 + 34) = v99; /*0x1003500c6*/
  *((_QWORD *)v67 + 38) = v108; /*0x1003500d1*/
  *((_QWORD *)v67 + 39) = v105; /*0x1003500dc*/
  *((_QWORD *)v67 + 40) = v110; /*0x1003500e7*/
  *((_QWORD *)v67 + 41) = v66; /*0x1003500ee*/
  LODWORD(v110) = 0; /*0x1003500f5*/
  v69 = v106; /*0x100350103*/
  v70 = v103; /*0x100350107*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..skills..StagedDirectory$GT$::h6511e99f7a62b940(v81); /*0x10035010b*/
  if ( v101 ) /*0x10035011a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v101, 1); /*0x100350125*/
  if ( v82 ) /*0x100350134*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v82, 1); /*0x10035013f*/
  if ( v21 ) /*0x100350147*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v21, 1); /*0x100350158*/
  v71 = __dst; /*0x100350167*/
  if ( v100 ) /*0x10035016b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v100, 1); /*0x100350176*/
  if ( v85 ) /*0x100350185*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v85, 1); /*0x10035018f*/
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$std..collections..hash..map..HashMap$LT$muda..menu_id..MenuId$C$tauri..menu..Menu$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$$GT$$GT$::h96804b47983bc03a( /*0x10035019b*/
    v69,
    v113);
  return v71; /*0x10034fcf7*/
}