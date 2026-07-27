// __ZN13codexmate_lib4core5relay16codex_diagnostic23fix_state_db_relocation @ 0x1004eeba0 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::codex_diagnostic::fix_state_db_relocation::hecf1d03613f77738(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdi
  size_t v8; // rbx
  const void *v9; // r14
  __int64 v10; // r14
  __int64 v11; // r13
  _QWORD *v12; // rsi
  void *v13; // r14
  size_t v14; // r13
  size_t v15; // rsi
  void *v16; // rbx
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rsi
  void *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rbx
  void *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  void *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int128 v33; // kr00_16
  __int64 v34; // r12
  char *v35; // rbx
  __int64 v36; // r15
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rbx
  _QWORD *v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rax
  _QWORD *v43; // rbx
  void *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rbx
  _QWORD *v47; // rax
  void *result; // rax
  void *v49; // rcx
  __int64 v50; // rdx
  __int128 v51; // kr10_16
  __int64 v52; // rax
  _QWORD *v53; // rbx
  void *v54; // rax
  __int64 v55; // rax
  void *v56; // rax
  void *v57; // r14
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rdi
  __int64 v61; // r8
  __int64 v62; // rsi
  __int64 v63; // rax
  _QWORD *v64; // rbx
  void *v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rbx
  _QWORD *v68; // rax
  __int64 v69; // rax
  void *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rdi
  int v74; // edx
  _QWORD *p_p_s1; // rdi
  void *v76; // rax
  void *v77; // rsi
  __int64 v78; // rax
  const void *v79; // rbx
  __int64 v80; // rcx
  size_t *v81; // r14
  __int64 v82; // rax
  void *v83; // r12
  const void *v84; // rsi
  size_t v85; // rbx
  size_t v86; // rsi
  size_t v87; // rbx
  __int64 v88; // r9
  __int64 v89; // r12
  size_t v90; // r12
  __int64 v91; // rbx
  __int64 v92; // r12
  __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rdx
  void *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r14
  __int64 v99; // rdx
  __int64 v100; // r12
  __int64 v101; // r14
  __int64 v102; // rsi
  __int64 v103; // rax
  _QWORD *v104; // r12
  __int64 v105; // r14
  __int64 v106; // rsi
  __int64 v107; // rsi
  __int64 v108; // r14
  __int64 v109; // rsi
  __int64 v110; // rax
  _QWORD *v111; // rbx
  void *v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // r12
  __int64 v115; // rax
  void *v116; // rax
  size_t v117; // rcx
  __int64 v118; // rdx
  void *v119; // rsi
  __int64 v120; // rdi
  _QWORD *v121; // rbx
  __int64 v122; // rsi
  __int64 v123; // rax
  _QWORD *v124; // rbx
  void *v125; // rax
  __int64 v126; // rax
  _QWORD *v127; // rbx
  __int64 v128; // rax
  void *v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rsi
  __int64 v133; // rdi
  _QWORD *v134; // rbx
  __int64 v135; // rsi
  __int64 v136; // rdi
  _QWORD v137[3]; // [rsp+8h] [rbp-328h] BYREF
  _QWORD v138[3]; // [rsp+20h] [rbp-310h] BYREF
  _QWORD v139[3]; // [rsp+38h] [rbp-2F8h] BYREF
  __int64 v140; // [rsp+50h] [rbp-2E0h] BYREF
  __int64 v141; // [rsp+58h] [rbp-2D8h] BYREF
  __int64 v142; // [rsp+60h] [rbp-2D0h] BYREF
  __int64 v143; // [rsp+68h] [rbp-2C8h]
  __int64 v144; // [rsp+70h] [rbp-2C0h]
  __int64 v145; // [rsp+78h] [rbp-2B8h]
  __int64 v146; // [rsp+80h] [rbp-2B0h]
  __int64 v147; // [rsp+88h] [rbp-2A8h]
  __int64 v148; // [rsp+90h] [rbp-2A0h] BYREF
  __int64 v149; // [rsp+98h] [rbp-298h]
  __int64 v150; // [rsp+A0h] [rbp-290h]
  void *v151; // [rsp+A8h] [rbp-288h] BYREF
  __int64 v152; // [rsp+B0h] [rbp-280h]
  __int64 v153; // [rsp+B8h] [rbp-278h]
  size_t v154; // [rsp+C0h] [rbp-270h] BYREF
  __int64 v155; // [rsp+C8h] [rbp-268h]
  size_t v156; // [rsp+D0h] [rbp-260h]
  __int64 v157; // [rsp+D8h] [rbp-258h]
  const void *v158; // [rsp+E0h] [rbp-250h]
  size_t v159; // [rsp+E8h] [rbp-248h]
  __int64 v160; // [rsp+F0h] [rbp-240h]
  __int64 v161; // [rsp+F8h] [rbp-238h]
  _QWORD *v162; // [rsp+100h] [rbp-230h]
  __int128 v163; // [rsp+108h] [rbp-228h] BYREF
  __int64 v164; // [rsp+118h] [rbp-218h]
  void *v165; // [rsp+120h] [rbp-210h] BYREF
  __int64 v166; // [rsp+128h] [rbp-208h]
  __int64 v167; // [rsp+130h] [rbp-200h]
  _BYTE v168[15]; // [rsp+138h] [rbp-1F8h]
  void *v169; // [rsp+148h] [rbp-1E8h] BYREF
  __int64 v170; // [rsp+150h] [rbp-1E0h]
  __int64 v171; // [rsp+158h] [rbp-1D8h]
  _BYTE v172[15]; // [rsp+160h] [rbp-1D0h]
  __int64 v173; // [rsp+170h] [rbp-1C0h]
  __int64 v174; // [rsp+178h] [rbp-1B8h]
  __int64 v175; // [rsp+180h] [rbp-1B0h]
  void *__s1; // [rsp+188h] [rbp-1A8h] BYREF
  size_t __n; // [rsp+190h] [rbp-1A0h]
  _BYTE v178[25]; // [rsp+198h] [rbp-198h]
  _BYTE v179[15]; // [rsp+1B1h] [rbp-17Fh]
  __int16 v180; // [rsp+1C0h] [rbp-170h]
  char v181; // [rsp+1C2h] [rbp-16Eh]
  void **p_s1; // [rsp+1C8h] [rbp-168h] BYREF
  void *v183; // [rsp+1D0h] [rbp-160h]
  _BYTE v184[40]; // [rsp+1D8h] [rbp-158h]
  __int16 v185; // [rsp+200h] [rbp-130h]
  char v186; // [rsp+202h] [rbp-12Eh]
  void *__s2; // [rsp+260h] [rbp-D0h] BYREF
  __int64 v188; // [rsp+268h] [rbp-C8h]
  _BYTE v189[25]; // [rsp+270h] [rbp-C0h]
  _BYTE v190[15]; // [rsp+289h] [rbp-A7h]
  __int16 v191; // [rsp+298h] [rbp-98h]
  char v192; // [rsp+29Ah] [rbp-96h]
  _BYTE v193[56]; // [rsp+2A0h] [rbp-90h] BYREF
  __int64 v194; // [rsp+2D8h] [rbp-58h]
  __int64 v195; // [rsp+2E0h] [rbp-50h]
  size_t v196; // [rsp+2E8h] [rbp-48h]
  void *__src; // [rsp+2F0h] [rbp-40h]
  size_t v198; // [rsp+2F8h] [rbp-38h]
  __int64 v199; // [rsp+300h] [rbp-30h]

  v4 = a2[1]; /*0x1004eebba*/
  v5 = a2[2]; /*0x1004eebbe*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v148, v4, v5, &unk_1015FD3B6, 6); /*0x1004eebdc*/
  v195 = v4; /*0x1004eebe8*/
  v6 = v4; /*0x1004eebec*/
  v173 = v5; /*0x1004eebef*/
  codexmate_lib::platform::paths::CodexPaths::configured_sqlite_home::hd0cd1e7be263d666(&v163, v4, v5); /*0x1004eebf9*/
  if ( __OFSUB__(0, a2[90]) ) /*0x1004eec00*/
  {
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(&v154, v195, v173); /*0x1004eec1c*/
    v7 = v155; /*0x1004eec21*/
    v8 = v156; /*0x1004eec28*/
  }
  else
  {
    v9 = (const void *)a2[91]; /*0x1004eec31*/
    v8 = a2[92]; /*0x1004eec39*/
    if ( v8 ) /*0x1004eec44*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v163, v6); /*0x1004eec46*/
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1004eec58*/
      if ( !v7 ) /*0x1004eec5e*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8); /*0x1004eec68*/
    }
    else
    {
      v7 = 1; /*0x1004eec72*/
    }
    v154 = v8; /*0x1004eec77*/
    v155 = v7; /*0x1004eec7e*/
    memcpy((void *)v7, v9, v8); /*0x1004eec8e*/
    v156 = v8; /*0x1004eec96*/
  }
  v10 = v149; /*0x1004eec9d*/
  v11 = v150; /*0x1004eeca4*/
  v174 = v7; /*0x1004eecab*/
  v12 = (_QWORD *)v8; /*0x1004eecb2*/
  if ( !(unsigned __int8)std::path::Path::_starts_with::hb7d30f62bcd7f24f(v7, v8, v149, v150) ) /*0x1004eeccc*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v8); /*0x1004ef1e5*/
    v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ef1f4*/
    if ( !v42 ) /*0x1004ef1fc*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004eff88*/
    v43 = (_QWORD *)v42; /*0x1004ef202*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ef205*/
    v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1004ef214*/
    if ( !v44 ) /*0x1004ef21c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1004f02b3*/
    qmemcpy(v44, "state_db_relocation", 19); /*0x1004ef23a*/
    *v43 = 19; /*0x1004ef244*/
    v43[1] = v44; /*0x1004ef24b*/
    v43[2] = 19; /*0x1004ef24f*/
    __s2 = (void *)1; /*0x1004ef257*/
    v188 = (__int64)v43; /*0x1004ef262*/
    *(_QWORD *)v189 = 1; /*0x1004ef269*/
    *(_QWORD *)v193 = 0; /*0x1004ef274*/
    *(_QWORD *)&v193[8] = 8; /*0x1004ef27f*/
    *(_QWORD *)&v193[16] = 0; /*0x1004ef28a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1); /*0x1004ef292*/
    v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ef2a1*/
    if ( !v45 ) /*0x1004ef2a9*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004eff9c*/
    v46 = (_QWORD *)v45; /*0x1004ef2af*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ef2b2*/
    v47 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1); /*0x1004ef2c1*/
    if ( !v47 ) /*0x1004ef2c9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45); /*0x1004f02c7*/
    *(_QWORD *)((char *)v47 + 37) = 0x8690E785B8E6809CLL; /*0x1004ef2d9*/
    v47[4] = 0xE6809CE9A097E68CLL; /*0x1004ef2e7*/
    v47[3] = 0xBCEF95BDE5AE9BE7LL; /*0x1004ef2f5*/
    v47[2] = 0x90ADE5202F657469LL; /*0x1004ef303*/
    v47[1] = 0x6C717320A89CE58DLL; /*0x1004ef311*/
    *v47 = 0xB8E493BAE5BBB4E6LL; /*0x1004ef31f*/
    *v46 = 45; /*0x1004ef322*/
    v46[1] = v47; /*0x1004ef329*/
    v46[2] = 45; /*0x1004ef32d*/
    result = *(void **)v189; /*0x1004ef335*/
    *(_QWORD *)v184 = *(_QWORD *)v189; /*0x1004ef33c*/
    v49 = __s2; /*0x1004ef343*/
    v50 = v188; /*0x1004ef34a*/
    v183 = (void *)v188; /*0x1004ef351*/
    p_s1 = (void **)__s2; /*0x1004ef358*/
    v51 = *(_OWORD *)v193; /*0x1004ef366*/
    *(_OWORD *)&v184[8] = *(_OWORD *)v193; /*0x1004ef36d*/
    *(_QWORD *)&v184[24] = *(_QWORD *)&v193[16]; /*0x1004ef37f*/
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v193[16]; /*0x1004ef386*/
    *(_OWORD *)(a1 + 32) = v51; /*0x1004ef38e*/
    *(_QWORD *)(a1 + 24) = result; /*0x1004ef392*/
    *(_QWORD *)(a1 + 16) = v50; /*0x1004ef396*/
    *(_QWORD *)(a1 + 8) = v49; /*0x1004ef39a*/
    goto LABEL_47; /*0x1004ef39e*/
  }
  v157 = v163; /*0x1004eecd9*/
  if ( (_QWORD)v163 == 0x8000000000000000LL ) /*0x1004eece3*/
    goto LABEL_42; /*0x1004eece3*/
  std::path::Path::components::he8b0f71a48373be5(&__s1, *((_QWORD *)&v163 + 1), v164); /*0x1004eecfe*/
  std::path::Path::components::he8b0f71a48373be5(&__s2, v10, v11); /*0x1004eed10*/
  v13 = __s1; /*0x1004eed15*/
  v14 = __n; /*0x1004eed1c*/
  v15 = (size_t)__s2; /*0x1004eed23*/
  v16 = (void *)v188; /*0x1004eed2a*/
  if ( __n != v188 /*0x1004eed6c*/
    || (_BYTE)v180 != (_BYTE)v191
    || HIBYTE(v180) != 2
    || HIBYTE(v191) != 2
    || (v196 = (size_t)__s2, v17 = memcmp(__s1, __s2, __n), v15 = v196, v17) )
  {
    if ( v178[0] != 6 ) /*0x1004eed7b*/
    {
      *(_QWORD *)&v172[7] = *(_QWORD *)&v179[7]; /*0x1004eed84*/
      *(_QWORD *)v172 = *(_QWORD *)v179; /*0x1004eed92*/
      v171 = *(_QWORD *)&v178[17]; /*0x1004eeda0*/
      v170 = *(_QWORD *)&v178[9]; /*0x1004eedb5*/
      v169 = *(void **)&v178[1]; /*0x1004eedbc*/
    }
    *(_QWORD *)v193 = v13; /*0x1004eedd1*/
    *(_QWORD *)&v193[8] = v14; /*0x1004eedd8*/
    v193[16] = v178[0]; /*0x1004eeddf*/
    *(_QWORD *)&v193[17] = v169; /*0x1004eedf0*/
    *(_QWORD *)&v193[25] = v170; /*0x1004eedf4*/
    *(_QWORD *)&v193[33] = v171; /*0x1004eedff*/
    *(_QWORD *)&v193[41] = *(_QWORD *)v172; /*0x1004eee0a*/
    *(_QWORD *)&v193[48] = *(_QWORD *)&v172[7]; /*0x1004eee15*/
    LOWORD(v194) = v180; /*0x1004eee19*/
    BYTE2(v194) = v181; /*0x1004eee1d*/
    if ( v189[0] != 6 ) /*0x1004eee29*/
    {
      *(_QWORD *)&v168[7] = *(_QWORD *)&v190[7]; /*0x1004eee32*/
      *(_QWORD *)v168 = *(_QWORD *)v190; /*0x1004eee40*/
      v167 = *(_QWORD *)&v189[17]; /*0x1004eee4e*/
      v166 = *(_QWORD *)&v189[9]; /*0x1004eee63*/
      v165 = *(void **)&v189[1]; /*0x1004eee6a*/
    }
    p_s1 = (void **)v15; /*0x1004eee7f*/
    v183 = v16; /*0x1004eee86*/
    v184[0] = v189[0]; /*0x1004eee8d*/
    *(_QWORD *)&v184[1] = v165; /*0x1004eeea1*/
    *(_QWORD *)&v184[9] = v166; /*0x1004eeea8*/
    *(_QWORD *)&v184[17] = v167; /*0x1004eeeb6*/
    *(_QWORD *)&v184[25] = *(_QWORD *)v168; /*0x1004eeec4*/
    *(_QWORD *)&v184[32] = *(_QWORD *)&v168[7]; /*0x1004eeed2*/
    v185 = v191; /*0x1004eeed9*/
    v186 = v192; /*0x1004eeee0*/
    v7 = (__int64)v193; /*0x1004eeee6*/
    v12 = &p_s1; /*0x1004eeeed*/
    if ( !(unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(v193, &p_s1) ) /*0x1004eeef4*/
    {
LABEL_42:
      __s2 = nullptr; /*0x1004ef3a3*/
      v188 = 8; /*0x1004ef3ae*/
      *(_QWORD *)v189 = 0; /*0x1004ef3b9*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v12); /*0x1004ef3c4*/
      v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ef3d3*/
      if ( !v52 ) /*0x1004ef3db*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004effb0*/
      v53 = (_QWORD *)v52; /*0x1004ef3e1*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ef3e4*/
      v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1004ef3f3*/
      if ( !v54 ) /*0x1004ef3fb*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1004f02db*/
      qmemcpy(v54, "state_db_relocation", 19); /*0x1004ef419*/
      *v53 = 19; /*0x1004ef423*/
      v53[1] = v54; /*0x1004ef42a*/
      v53[2] = 19; /*0x1004ef42e*/
      *(_QWORD *)v193 = 1; /*0x1004ef436*/
      *(_QWORD *)&v193[8] = v53; /*0x1004ef441*/
      *(_QWORD *)&v193[16] = 1; /*0x1004ef448*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1); /*0x1004ef450*/
      v55 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ef45f*/
      if ( !v55 ) /*0x1004ef467*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004effc4*/
      v46 = (_QWORD *)v55; /*0x1004ef46d*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ef470*/
      v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(108, 1); /*0x1004ef47f*/
      if ( !v56 ) /*0x1004ef487*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 108); /*0x1004f02ef*/
      v57 = v56; /*0x1004ef48d*/
      memcpy(v56, &unk_1015FD3D3, 0x6Cu); /*0x1004ef49f*/
      *v46 = 108; /*0x1004ef4a4*/
      v46[1] = v57; /*0x1004ef4ab*/
      v46[2] = 108; /*0x1004ef4af*/
      result = __s2; /*0x1004ef4b7*/
      v58 = v188; /*0x1004ef4be*/
      p_s1 = (void **)__s2; /*0x1004ef4c5*/
      v183 = (void *)v188; /*0x1004ef4cc*/
      v59 = *(_QWORD *)v189; /*0x1004ef4d3*/
      *(_QWORD *)v184 = *(_QWORD *)v189; /*0x1004ef4da*/
      v60 = *(_QWORD *)v193; /*0x1004ef4ec*/
      v61 = *(_QWORD *)&v193[8]; /*0x1004ef4f3*/
      *(_OWORD *)&v184[16] = *(_OWORD *)&v193[8]; /*0x1004ef4fa*/
      *(_QWORD *)&v184[8] = *(_QWORD *)v193; /*0x1004ef501*/
      *(_QWORD *)(a1 + 48) = *(_QWORD *)&v193[16]; /*0x1004ef508*/
      *(_QWORD *)(a1 + 40) = v61; /*0x1004ef50c*/
      *(_QWORD *)(a1 + 32) = v60; /*0x1004ef510*/
      *(_QWORD *)(a1 + 24) = v59; /*0x1004ef514*/
      *(_QWORD *)(a1 + 16) = v58; /*0x1004ef518*/
      *(_QWORD *)(a1 + 8) = result; /*0x1004ef51c*/
LABEL_47:
      *(_QWORD *)(a1 + 56) = 1; /*0x1004ef520*/
      *(_QWORD *)(a1 + 64) = v46; /*0x1004ef528*/
      *(_QWORD *)(a1 + 72) = 1; /*0x1004ef52c*/
      *(_QWORD *)a1 = 11; /*0x1004ef534*/
      goto LABEL_48; /*0x1004ef534*/
    }
  }
  v18 = v195; /*0x1004eef08*/
  codexmate_lib::core::relay::codex_diagnostic::list_root_state_dbs::h55608faea2116e07(&v151, v195, v173); /*0x1004eef13*/
  v19 = v153; /*0x1004eef18*/
  if ( !v153 ) /*0x1004eef22*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v151, v18); /*0x1004ef5b3*/
    v63 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ef5c2*/
    if ( !v63 ) /*0x1004ef5ca*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004f028b*/
    v64 = (_QWORD *)v63; /*0x1004ef5d0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ef5d3*/
    v65 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1004ef5e2*/
    if ( !v65 ) /*0x1004ef5ea*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1004f0317*/
    qmemcpy(v65, "state_db_relocation", 19); /*0x1004ef608*/
    *v64 = 19; /*0x1004ef612*/
    v64[1] = v65; /*0x1004ef619*/
    v64[2] = 19; /*0x1004ef61d*/
    __s2 = (void *)1; /*0x1004ef625*/
    v188 = (__int64)v64; /*0x1004ef630*/
    *(_QWORD *)v189 = 1; /*0x1004ef637*/
    *(_QWORD *)v193 = 0; /*0x1004ef642*/
    *(_QWORD *)&v193[8] = 8; /*0x1004ef64d*/
    *(_QWORD *)&v193[16] = 0; /*0x1004ef658*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1); /*0x1004ef660*/
    v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ef66f*/
    if ( !v66 ) /*0x1004ef677*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004f029f*/
    v67 = (_QWORD *)v66; /*0x1004ef67d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ef680*/
    v68 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x1004ef68f*/
    if ( !v68 ) /*0x1004ef697*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x1004f032b*/
    *(_QWORD *)((char *)v68 + 7) = 0x9995E78BAEE693BALL; /*0x1004ef6a7*/
    *v68 = 0xBAE5A797E6A097E6LL; /*0x1004ef6b5*/
    *v67 = 15; /*0x1004ef6b8*/
    v67[1] = v68; /*0x1004ef6bf*/
    v67[2] = 15; /*0x1004ef6c3*/
    v69 = *(_QWORD *)v189; /*0x1004ef6cb*/
    *(_QWORD *)v184 = *(_QWORD *)v189; /*0x1004ef6d2*/
    v70 = __s2; /*0x1004ef6d9*/
    v71 = v188; /*0x1004ef6e0*/
    v183 = (void *)v188; /*0x1004ef6e7*/
    p_s1 = (void **)__s2; /*0x1004ef6ee*/
    v72 = *(_QWORD *)v193; /*0x1004ef6f5*/
    v73 = *(_QWORD *)&v193[8]; /*0x1004ef6fc*/
    *(_QWORD *)&v184[8] = *(_QWORD *)v193; /*0x1004ef703*/
    *(_QWORD *)&v184[16] = *(_QWORD *)&v193[8]; /*0x1004ef70a*/
    *(_QWORD *)&v184[24] = *(_QWORD *)&v193[16]; /*0x1004ef715*/
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v193[16]; /*0x1004ef71c*/
    *(_QWORD *)(a1 + 40) = v73; /*0x1004ef720*/
    *(_QWORD *)(a1 + 32) = v72; /*0x1004ef724*/
    *(_QWORD *)(a1 + 24) = v69; /*0x1004ef728*/
    *(_QWORD *)(a1 + 16) = v71; /*0x1004ef72c*/
    *(_QWORD *)(a1 + 8) = v70; /*0x1004ef730*/
    *(_QWORD *)(a1 + 56) = 1; /*0x1004ef734*/
    *(_QWORD *)(a1 + 64) = v67; /*0x1004ef73c*/
    *(_QWORD *)(a1 + 72) = 1; /*0x1004ef740*/
    *(_QWORD *)a1 = 11; /*0x1004ef748*/
    v39 = v152; /*0x1004ef74f*/
    goto LABEL_61; /*0x1004ef74f*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004eef4c*/
    &v142,
    a2[73],
    a2[74],
    "state-db-backupscodex-session.mdproxy_last_errorlast_codex_routeregistry-backupsquota-store.json",
    16);
  LOWORD(p_s1) = 511; /*0x1004eef51*/
  BYTE2(p_s1) = 1; /*0x1004eef5a*/
  v20 = v143; /*0x1004eef61*/
  v21 = v144; /*0x1004eef68*/
  v22 = v143; /*0x1004eef76*/
  v23 = (void *)std::fs::DirBuilder::_create::h099c6e2853c95452(&p_s1, v143, v144); /*0x1004eef7c*/
  if ( v23 ) /*0x1004eef84*/
  {
    __s1 = v23; /*0x1004eef8a*/
    __s2 = nullptr; /*0x1004eef91*/
    v188 = 8; /*0x1004eef9c*/
    *(_QWORD *)v189 = 0; /*0x1004eefa7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&p_s1, v22); /*0x1004eefb2*/
    v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004eefc1*/
    if ( !v24 ) /*0x1004eefc9*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004effd8*/
    v25 = (_QWORD *)v24; /*0x1004eefcf*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004eefd2*/
    v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1004eefe1*/
    if ( !v26 ) /*0x1004eefe9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1004f0303*/
    qmemcpy(v26, "state_db_relocation", 19); /*0x1004ef007*/
    *v25 = 19; /*0x1004ef011*/
    v25[1] = v26; /*0x1004ef018*/
    v25[2] = 19; /*0x1004ef01c*/
    *(_QWORD *)v193 = 1; /*0x1004ef024*/
    *(_QWORD *)&v193[8] = v25; /*0x1004ef02f*/
    *(_QWORD *)&v193[16] = 1; /*0x1004ef036*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1); /*0x1004ef03e*/
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ef04d*/
    if ( !v27 ) /*0x1004ef055*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004effec*/
    v28 = (_QWORD *)v27; /*0x1004ef05b*/
    p_s1 = &__s1; /*0x1004ef065*/
    v183 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004ef073*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v139, &unk_1017BFD36, &p_s1); /*0x1004ef08f*/
    v28[2] = v139[2]; /*0x1004ef09b*/
    v29 = v139[0]; /*0x1004ef09f*/
    v28[1] = v139[1]; /*0x1004ef0ad*/
    *v28 = v29; /*0x1004ef0b1*/
    v30 = __s2; /*0x1004ef0b4*/
    v31 = v188; /*0x1004ef0bb*/
    p_s1 = (void **)__s2; /*0x1004ef0c2*/
    v183 = (void *)v188; /*0x1004ef0c9*/
    v32 = *(_QWORD *)v189; /*0x1004ef0d0*/
    *(_QWORD *)v184 = *(_QWORD *)v189; /*0x1004ef0d7*/
    v33 = *(_OWORD *)v193; /*0x1004ef0e5*/
    *(_OWORD *)&v184[8] = *(_OWORD *)v193; /*0x1004ef0ec*/
    *(_QWORD *)&v184[24] = *(_QWORD *)&v193[16]; /*0x1004ef0fe*/
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v193[16]; /*0x1004ef105*/
    *(_OWORD *)(a1 + 32) = v33; /*0x1004ef10d*/
    *(_QWORD *)(a1 + 24) = v32; /*0x1004ef111*/
    *(_QWORD *)(a1 + 16) = v31; /*0x1004ef115*/
    *(_QWORD *)(a1 + 8) = v30; /*0x1004ef119*/
    *(_QWORD *)(a1 + 56) = 1; /*0x1004ef11d*/
    *(_QWORD *)(a1 + 64) = v28; /*0x1004ef125*/
    *(_QWORD *)(a1 + 72) = 1; /*0x1004ef129*/
    *(_QWORD *)a1 = 11; /*0x1004ef131*/
    if ( ((unsigned __int8)__s1 & 3) == 1 ) /*0x1004ef147*/
    {
      v34 = v20; /*0x1004ef149*/
      v35 = (char *)__s1 - 1; /*0x1004ef14c*/
      v36 = *(_QWORD *)((char *)__s1 - 1); /*0x1004ef150*/
      v37 = *(_QWORD *)((char *)__s1 + 7); /*0x1004ef154*/
      if ( *(_QWORD *)v37 ) /*0x1004ef158*/
        (*(void (__fastcall **)(__int64))v37)(v36); /*0x1004ef163*/
      v38 = *(_QWORD *)(v37 + 8); /*0x1004ef165*/
      if ( v38 ) /*0x1004ef16c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v38, *(_QWORD *)(v37 + 16)); /*0x1004ef175*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 24, 8); /*0x1004ef187*/
      v20 = v34; /*0x1004ef18c*/
    }
    if ( v142 ) /*0x1004ef199*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v142, 1); /*0x1004ef1a3*/
    v39 = v152; /*0x1004ef1a8*/
    v40 = (_QWORD *)(v152 + 8); /*0x1004ef1af*/
    do /*0x1004ef1c7*/
    {
      v41 = *(v40 - 1); /*0x1004ef1cd*/
      if ( v41 ) /*0x1004ef1d4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v40, v41, 1); /*0x1004ef1de*/
      v40 += 3; /*0x1004ef1c0*/
      --v19; /*0x1004ef1c4*/
    }
    while ( v19 ); /*0x1004ef1c7*/
LABEL_61:
    result = v151; /*0x1004ef756*/
    if ( v151 ) /*0x1004ef760*/
      result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, 24LL * (_QWORD)v151, 8); /*0x1004ef776*/
LABEL_48:
    if ( v154 ) /*0x1004ef54f*/
      result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v174, v154, 1); /*0x1004ef55d*/
    v62 = v163; /*0x1004ef562*/
    if ( (_QWORD)v163 == 0x8000000000000000LL ) /*0x1004ef56c*/
      goto LABEL_53; /*0x1004ef56c*/
LABEL_51:
    if ( v62 ) /*0x1004ef571*/
      result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v163 + 1), v62, 1); /*0x1004ef57f*/
    goto LABEL_53; /*0x1004ef57f*/
  }
  *(_QWORD *)v193 = std::time::SystemTime::now::h1fe79e41f9d5677f(&p_s1, v22); /*0x1004ef785*/
  *(_DWORD *)&v193[8] = v74; /*0x1004ef78c*/
  p_p_s1 = &p_s1; /*0x1004ef792*/
  std::time::SystemTime::duration_since::had059553cab94f96(&p_s1, v193, 0, 0); /*0x1004ef7a4*/
  v147 = v21; /*0x1004ef7a9*/
  v160 = 0; /*0x1004ef7b0*/
  v76 = nullptr; /*0x1004ef7c2*/
  if ( !(_BYTE)p_s1 ) /*0x1004ef7c7*/
    v76 = v183; /*0x1004ef7c9*/
  v169 = v76; /*0x1004ef7d7*/
  v146 = v152 + 24 * v19; /*0x1004ef7e7*/
  v77 = &unk_1015E3B64; /*0x1004ef7f5*/
  v161 = v152; /*0x1004ef7fc*/
  v78 = v152; /*0x1004ef803*/
  v199 = v20; /*0x1004ef806*/
  do /*0x1004efc94*/
  {
    *(_QWORD *)&v193[16] = 1; /*0x1004ef80a*/
    *(_QWORD *)&v193[24] = 0; /*0x1004ef812*/
    *(_QWORD *)&v193[32] = &unk_1015E3B60; /*0x1004ef81a*/
    *(_QWORD *)&v193[40] = 4; /*0x1004ef81e*/
    *(_QWORD *)&v193[48] = &unk_1015E3B64; /*0x1004ef826*/
    v194 = 4; /*0x1004ef82a*/
    v79 = *(const void **)(v78 + 8); /*0x1004ef832*/
    v196 = *(_QWORD *)(v78 + 16); /*0x1004ef83a*/
    v145 = v78 + 24; /*0x1004ef842*/
    v80 = 0; /*0x1004ef849*/
    v158 = v79; /*0x1004ef84b*/
    do /*0x1004efc6c*/
    {
      v81 = (size_t *)&v193[16 * v80 + 24]; /*0x1004ef85d*/
      v175 = v80 + 1; /*0x1004ef863*/
      while ( 1 ) /*0x1004ef86d*/
      {
        v198 = *v81; /*0x1004ef86d*/
        if ( v198 ) /*0x1004ef874*/
        {
          if ( (v196 & 0x8000000000000000LL) != 0LL ) /*0x1004ef87b*/
          {
            v136 = 0; /*0x1004eff42*/
LABEL_127:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v136, v159); /*0x1004eff44*/
          }
          __src = (void *)*(v81 - 1); /*0x1004ef885*/
          if ( v196 ) /*0x1004ef889*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(p_p_s1, v77); /*0x1004ef88b*/
            v82 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v196, 1); /*0x1004ef899*/
            if ( !v82 ) /*0x1004ef8a1*/
            {
              v159 = v196; /*0x1004f0358*/
              v136 = 1; /*0x1004f035f*/
              goto LABEL_127; /*0x1004f0364*/
            }
          }
          else
          {
            v82 = 1; /*0x1004ef8c0*/
          }
          v83 = (void *)v82; /*0x1004ef8c5*/
          v84 = v79; /*0x1004ef8cb*/
          v85 = v196; /*0x1004ef8ce*/
          memcpy((void *)v82, v84, v196); /*0x1004ef8d5*/
          p_s1 = (void **)v85; /*0x1004ef8da*/
          v159 = (size_t)v83; /*0x1004ef8e1*/
          v183 = v83; /*0x1004ef8e8*/
          *(_QWORD *)v184 = v85; /*0x1004ef8ef*/
          v86 = v85; /*0x1004ef908*/
          v87 = v198; /*0x1004ef90b*/
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004ef912*/
            &p_s1,
            v86,
            v198,
            1,
            1,
            v88);
          v89 = *(_QWORD *)v184; /*0x1004ef917*/
          memcpy((char *)v183 + *(_QWORD *)v184, __src, v87); /*0x1004ef92f*/
          *(_QWORD *)v178 = v87 + v89; /*0x1004ef937*/
          __s1 = p_s1; /*0x1004ef94c*/
          __n = (size_t)v183; /*0x1004ef953*/
          v79 = v158; /*0x1004ef95a*/
        }
        else
        {
          std::path::Path::to_path_buf::h73855ce4b54f7174(&__s1, v79, v196); /*0x1004ef8b6*/
        }
        v90 = *(_QWORD *)v178; /*0x1004ef968*/
        p_p_s1 = &p_s1; /*0x1004ef96f*/
        __src = (void *)__n; /*0x1004ef976*/
        std::sys::fs::metadata::h32fa16d3052ea535(&p_s1, __n, *(_QWORD *)v178); /*0x1004ef97d*/
        if ( !(_BYTE)p_s1 ) /*0x1004ef989*/
          break; /*0x1004ef989*/
        if ( ((unsigned __int8)v183 & 3) == 1 ) /*0x1004ef99e*/
        {
          v198 = (size_t)v183 - 1; /*0x1004ef9e2*/
          v91 = *(_QWORD *)((char *)v183 - 1); /*0x1004ef9e6*/
          v92 = *(_QWORD *)((char *)v183 + 7); /*0x1004ef9ea*/
          if ( *(_QWORD *)v92 ) /*0x1004ef9ee*/
            (*(void (__fastcall **)(__int64))v92)(v91); /*0x1004ef9fa*/
          v93 = *(_QWORD *)(v92 + 8); /*0x1004ef9fc*/
          if ( v93 ) /*0x1004efa04*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v93, *(_QWORD *)(v92 + 16)); /*0x1004efa0e*/
          p_p_s1 = (_QWORD *)v198; /*0x1004efa1d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v198, 24, 8); /*0x1004efa21*/
          v79 = v158; /*0x1004efa26*/
          v77 = __s1; /*0x1004efa2d*/
          if ( !__s1 ) /*0x1004efa37*/
            goto LABEL_80; /*0x1004efa37*/
LABEL_79:
          p_p_s1 = __src; /*0x1004ef9ac*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v77, 1); /*0x1004ef9b5*/
          goto LABEL_80; /*0x1004ef9b5*/
        }
        v77 = __s1; /*0x1004ef9a0*/
        if ( __s1 ) /*0x1004ef9aa*/
          goto LABEL_79; /*0x1004ef9aa*/
LABEL_80:
        v81 += 2; /*0x1004ef9ba*/
        if ( ++v175 == 4 ) /*0x1004ef9d3*/
          goto LABEL_118; /*0x1004ef9d3*/
      }
      v94 = std::path::Path::file_name::hf6c2daad91e50ebf(__src, v90); /*0x1004efa49*/
      if ( v94 ) /*0x1004efa51*/
      {
        core::str::converts::from_utf8::hb32deb9559450f6e(&p_s1, v94, v95); /*0x1004efa5d*/
        v96 = v183; /*0x1004efa69*/
        if ( (_BYTE)p_s1 ) /*0x1004efa77*/
          v96 = &unk_1015FE370; /*0x1004efa77*/
        v97 = *(_QWORD *)v184; /*0x1004efa7b*/
        if ( (_BYTE)p_s1 ) /*0x1004efa87*/
          v97 = 12; /*0x1004efa87*/
      }
      else
      {
        v97 = 12; /*0x1004efa8d*/
        v96 = &unk_1015FE370; /*0x1004efa92*/
      }
      v165 = v96; /*0x1004efa99*/
      v166 = v97; /*0x1004efaa0*/
      p_s1 = &v169; /*0x1004efaae*/
      v183 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004efabc*/
      *(_QWORD *)v184 = &v165; /*0x1004efaca*/
      *(_QWORD *)&v184[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1004efad8*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s2, &unk_1017C0A32, &p_s1); /*0x1004efaf4*/
      v98 = v188; /*0x1004efaf9*/
      std::path::Path::_join::hb1a495d4f06b13b8(&p_s1, v199, v147, v188, *(_QWORD *)v189); /*0x1004efb1c*/
      if ( __s2 ) /*0x1004efb2b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, __s2, 1); /*0x1004efb35*/
      p_p_s1 = __src; /*0x1004efb48*/
      v162 = v183; /*0x1004efb4f*/
      if ( std::sys::fs::copy::hcda968f022f0a0e3(__src, v90, v183, *(size_t *)v184) ) /*0x1004efb5a*/
      {
        if ( (v99 & 3) == 1 ) /*0x1004efb6c*/
        {
          v198 = v99 - 1; /*0x1004efb76*/
          v100 = *(_QWORD *)(v99 - 1); /*0x1004efb7a*/
          v101 = *(_QWORD *)(v99 + 7); /*0x1004efb7e*/
          if ( *(_QWORD *)v101 ) /*0x1004efb82*/
            (*(void (__fastcall **)(_QWORD))v101)(*(_QWORD *)(v99 - 1)); /*0x1004efb8d*/
          v102 = *(_QWORD *)(v101 + 8); /*0x1004efb8f*/
          if ( v102 ) /*0x1004efb96*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v102, *(_QWORD *)(v101 + 16)); /*0x1004efb9f*/
          p_p_s1 = (_QWORD *)v198; /*0x1004efbae*/
          goto LABEL_104; /*0x1004efbae*/
        }
      }
      else
      {
        p_p_s1 = __src; /*0x1004efbbd*/
        v103 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, v90); /*0x1004efbc4*/
        if ( v103 ) /*0x1004efbcc*/
        {
          if ( (v103 & 3) == 1 ) /*0x1004efbd6*/
          {
            v104 = (_QWORD *)(v103 - 1); /*0x1004efbdb*/
            v198 = *(_QWORD *)(v103 - 1); /*0x1004efbe2*/
            v105 = *(_QWORD *)(v103 + 7); /*0x1004efbe6*/
            if ( *(_QWORD *)v105 ) /*0x1004efbea*/
              (*(void (__fastcall **)(size_t))v105)(v198); /*0x1004efbf6*/
            v106 = *(_QWORD *)(v105 + 8); /*0x1004efbf8*/
            if ( v106 ) /*0x1004efbff*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v198, v106, *(_QWORD *)(v105 + 16)); /*0x1004efc09*/
            p_p_s1 = v104; /*0x1004efc18*/
LABEL_104:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(p_p_s1, 24, 8); /*0x1004efbb2*/
          }
        }
        else
        {
          v160 += v198 == 0; /*0x1004efc22*/
        }
      }
      if ( p_s1 ) /*0x1004efc34*/
      {
        p_p_s1 = v162; /*0x1004efc3b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, p_s1, 1); /*0x1004efc42*/
      }
      v77 = __s1; /*0x1004efc47*/
      if ( __s1 ) /*0x1004efc51*/
      {
        p_p_s1 = __src; /*0x1004efc58*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, __s1, 1); /*0x1004efc5c*/
      }
      v80 = v175; /*0x1004efc61*/
    }
    while ( v175 != 3 ); /*0x1004efc6c*/
LABEL_118:
    v78 = v145; /*0x1004efc78*/
    v77 = &unk_1015E3B64; /*0x1004efc8d*/
  }
  while ( v145 != v146 ); /*0x1004efc94*/
  v141 = v160; /*0x1004efca1*/
  v107 = v195; /*0x1004efcaf*/
  codexmate_lib::core::relay::codex_diagnostic::list_root_state_dbs::h55608faea2116e07(&v169, v195, v173); /*0x1004efcba*/
  v108 = v171; /*0x1004efcbf*/
  if ( v171 ) /*0x1004efcc9*/
  {
    v109 = v170; /*0x1004efccf*/
    v195 = v170; /*0x1004efce5*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc38dac04cbb2e7be( /*0x1004efce9*/
      &v165,
      v170,
      v170 + 24 * v171);
    __s1 = nullptr; /*0x1004efcee*/
    __n = 8; /*0x1004efcf9*/
    *(_QWORD *)v178 = 0; /*0x1004efd04*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v165, v109); /*0x1004efd0f*/
    v110 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004efd1e*/
    if ( !v110 ) /*0x1004efd26*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004f033c*/
    v111 = (_QWORD *)v110; /*0x1004efd2c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004efd2f*/
    v112 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1004efd3e*/
    if ( !v112 ) /*0x1004efd46*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1004f0395*/
    qmemcpy(v112, "state_db_relocation", 19); /*0x1004efd64*/
    *v111 = 19; /*0x1004efd6e*/
    v111[1] = v112; /*0x1004efd75*/
    v111[2] = 19; /*0x1004efd79*/
    __s2 = (void *)1; /*0x1004efd81*/
    v188 = (__int64)v111; /*0x1004efd8c*/
    *(_QWORD *)v189 = 1; /*0x1004efd93*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1); /*0x1004efd9e*/
    v113 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004efdad*/
    if ( !v113 ) /*0x1004efdb5*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004f034d*/
    v114 = (_QWORD *)v113; /*0x1004efdbb*/
    v140 = v108; /*0x1004efdbe*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(&p_s1, v166, v167, ", ", 2); /*0x1004efde7*/
    *(_QWORD *)&v193[16] = *(_QWORD *)v184; /*0x1004efdf3*/
    *(_QWORD *)&v193[8] = v183; /*0x1004efe05*/
    *(_QWORD *)v193 = p_s1; /*0x1004efe0c*/
    p_s1 = (void **)&v140; /*0x1004efe1a*/
    v183 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004efe28*/
    *(_QWORD *)v184 = v193; /*0x1004efe36*/
    *(_QWORD *)&v184[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004efe44*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v137, &unk_1017BFDAB, &p_s1); /*0x1004efe60*/
    if ( *(_QWORD *)v193 ) /*0x1004efe6f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v193[8], *(_QWORD *)v193, 1); /*0x1004efe7d*/
    v114[2] = v137[2]; /*0x1004efe89*/
    v115 = v137[0]; /*0x1004efe8e*/
    v114[1] = v137[1]; /*0x1004efe9c*/
    *v114 = v115; /*0x1004efea1*/
    v116 = __s1; /*0x1004efea5*/
    v117 = __n; /*0x1004efeac*/
    p_s1 = (void **)__s1; /*0x1004efeb3*/
    v183 = (void *)__n; /*0x1004efeba*/
    v118 = *(_QWORD *)v178; /*0x1004efec1*/
    *(_QWORD *)v184 = *(_QWORD *)v178; /*0x1004efec8*/
    v119 = __s2; /*0x1004efecf*/
    v120 = v188; /*0x1004efed6*/
    *(_QWORD *)&v184[8] = __s2; /*0x1004efedd*/
    *(_QWORD *)&v184[16] = v188; /*0x1004efee4*/
    *(_QWORD *)&v184[24] = *(_QWORD *)v189; /*0x1004efef2*/
    *(_QWORD *)(a1 + 48) = *(_QWORD *)v189; /*0x1004efef9*/
    *(_QWORD *)(a1 + 40) = v120; /*0x1004efefd*/
    *(_QWORD *)(a1 + 32) = v119; /*0x1004eff01*/
    *(_QWORD *)(a1 + 24) = v118; /*0x1004eff05*/
    *(_QWORD *)(a1 + 16) = v117; /*0x1004eff09*/
    *(_QWORD *)(a1 + 8) = v116; /*0x1004eff0d*/
    *(_QWORD *)(a1 + 56) = 1; /*0x1004eff11*/
    *(_QWORD *)(a1 + 64) = v114; /*0x1004eff19*/
    *(_QWORD *)(a1 + 72) = 1; /*0x1004eff1d*/
    *(_QWORD *)a1 = 11; /*0x1004eff25*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(&v165); /*0x1004eff33*/
    v121 = (_QWORD *)(v195 + 8); /*0x1004eff3c*/
    do /*0x1004eff60*/
    {
      v122 = *(v121 - 1); /*0x1004eff66*/
      if ( v122 ) /*0x1004eff6d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v121, v122, 1); /*0x1004eff77*/
      v121 += 3; /*0x1004eff59*/
      --v108; /*0x1004eff5d*/
    }
    while ( v108 ); /*0x1004eff60*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v169, v107); /*0x1004efff6*/
    v123 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004f0005*/
    if ( !v123 ) /*0x1004f000d*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004f0373*/
    v124 = (_QWORD *)v123; /*0x1004f0013*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004f0016*/
    v125 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1004f0025*/
    if ( !v125 ) /*0x1004f002d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1004f03a6*/
    qmemcpy(v125, "state_db_relocation", 19); /*0x1004f004b*/
    *v124 = 19; /*0x1004f0055*/
    v124[1] = v125; /*0x1004f005c*/
    v124[2] = 19; /*0x1004f0060*/
    __s2 = (void *)1; /*0x1004f0068*/
    v188 = (__int64)v124; /*0x1004f0073*/
    *(_QWORD *)v189 = 1; /*0x1004f007a*/
    *(_QWORD *)v193 = 0; /*0x1004f0085*/
    *(_QWORD *)&v193[8] = 8; /*0x1004f0090*/
    *(_QWORD *)&v193[16] = 0; /*0x1004f009b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1); /*0x1004f00a3*/
    v126 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004f00b2*/
    if ( !v126 ) /*0x1004f00ba*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004f0384*/
    v127 = (_QWORD *)v126; /*0x1004f00c0*/
    p_s1 = (void **)&v141; /*0x1004f00ca*/
    v183 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004f00d8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v138, &unk_1017BFD54, &p_s1); /*0x1004f00f4*/
    v127[2] = v138[2]; /*0x1004f0100*/
    v128 = v138[0]; /*0x1004f0104*/
    v127[1] = v138[1]; /*0x1004f0112*/
    *v127 = v128; /*0x1004f0116*/
    v129 = __s2; /*0x1004f0119*/
    v130 = v188; /*0x1004f0120*/
    p_s1 = (void **)__s2; /*0x1004f0127*/
    v183 = (void *)v188; /*0x1004f012e*/
    v131 = *(_QWORD *)v189; /*0x1004f0135*/
    *(_QWORD *)v184 = *(_QWORD *)v189; /*0x1004f013c*/
    v132 = *(_QWORD *)v193; /*0x1004f0143*/
    v133 = *(_QWORD *)&v193[8]; /*0x1004f014a*/
    *(_QWORD *)&v184[8] = *(_QWORD *)v193; /*0x1004f0151*/
    *(_QWORD *)&v184[16] = *(_QWORD *)&v193[8]; /*0x1004f0158*/
    *(_QWORD *)&v184[24] = *(_QWORD *)&v193[16]; /*0x1004f0163*/
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v193[16]; /*0x1004f016a*/
    *(_QWORD *)(a1 + 40) = v133; /*0x1004f016e*/
    *(_QWORD *)(a1 + 32) = v132; /*0x1004f0172*/
    *(_QWORD *)(a1 + 24) = v131; /*0x1004f0176*/
    *(_QWORD *)(a1 + 16) = v130; /*0x1004f017a*/
    *(_QWORD *)(a1 + 8) = v129; /*0x1004f017e*/
    *(_QWORD *)(a1 + 56) = 1; /*0x1004f0182*/
    *(_QWORD *)(a1 + 64) = v127; /*0x1004f018a*/
    *(_QWORD *)(a1 + 72) = 1; /*0x1004f018e*/
    *(_QWORD *)a1 = 11; /*0x1004f0196*/
    v195 = v170; /*0x1004f01a4*/
  }
  if ( v169 ) /*0x1004f01b2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v195, 24LL * (_QWORD)v169, 8); /*0x1004f01c5*/
  if ( v142 ) /*0x1004f01d4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v199, v142, 1); /*0x1004f01df*/
  v134 = (_QWORD *)(v161 + 8); /*0x1004f01eb*/
  do /*0x1004f01f8*/
  {
    v135 = *(v134 - 1); /*0x1004f01fa*/
    if ( v135 ) /*0x1004f0201*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v134, v135, 1); /*0x1004f020b*/
    v134 += 3; /*0x1004f01f1*/
    --v19; /*0x1004f01f5*/
  }
  while ( v19 ); /*0x1004f01f8*/
  if ( v151 ) /*0x1004f021c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v161, 24LL * (_QWORD)v151, 8); /*0x1004f0232*/
  if ( v154 ) /*0x1004f0241*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v174, v154, 1); /*0x1004f024f*/
    v157 = v163; /*0x1004f025b*/
  }
  result = (void *)0x8000000000000000LL; /*0x1004f0262*/
  v62 = v157; /*0x1004f026c*/
  if ( v157 != 0x8000000000000000LL ) /*0x1004f0276*/
    goto LABEL_51; /*0x1004f0276*/
LABEL_53:
  if ( v148 ) /*0x1004ef58e*/
    return (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, v148, 1); /*0x1004ef59c*/
  return result; /*0x1004ef5a1*/
}