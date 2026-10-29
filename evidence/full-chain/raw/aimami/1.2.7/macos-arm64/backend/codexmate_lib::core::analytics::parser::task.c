// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::task::hcc8590664895abbe; addr: 0x1009be030; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:20Z
double __fastcall codexmate_lib::core::analytics::parser::task::hcc8590664895abbe(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        size_t a6,
        size_t a7,
        _QWORD *a8)
{
  __int64 v10; // r13
  _QWORD *v11; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  size_t v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  unsigned __int64 v17; // rbx
  size_t v18; // rdx
  __int64 v19; // r12
  int v20; // eax
  char v21; // cl
  char v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // bl
  __int64 v26; // rsi
  char *v27; // rdi
  __int64 v28; // rdx
  bool v29; // r15
  _BYTE *v30; // rax
  size_t v31; // r14
  char *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // r14
  bool v36; // cc
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r13
  unsigned __int64 v42; // r15
  size_t v43; // rdx
  __int64 v44; // r12
  int v45; // eax
  unsigned __int8 v46; // cl
  size_t v47; // rax
  bool v48; // cf
  char v49; // r12
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdx
  void *v54; // rax
  void *v55; // rbx
  __int64 v56; // rdx
  void *v57; // rax
  __int64 v58; // rdx
  void *v59; // rax
  __int64 v60; // rdx
  void *v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  bool v65; // dl
  char v66; // cl
  bool v67; // cl
  __int64 v68; // rdx
  _QWORD *v69; // r14
  _QWORD *v70; // r12
  __int64 v71; // rbx
  size_t v72; // rdx
  size_t v73; // rax
  unsigned __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  size_t *v78; // rdi
  unsigned __int128 v79; // kr00_16
  __int64 v80; // r13
  unsigned __int64 v81; // r12
  size_t v82; // r15
  size_t v83; // rdx
  size_t v84; // r14
  size_t v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rsi
  unsigned __int64 v88; // rdx
  __int64 v89; // rcx
  unsigned __int64 v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rax
  size_t v100; // r14
  unsigned __int64 v101; // r12
  unsigned __int64 v102; // r15
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rdx
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // r15
  unsigned __int64 v110; // rcx
  size_t v111; // rbx
  unsigned __int64 v112; // rax
  __int64 v113; // r14
  __int64 v114; // r13
  unsigned __int64 v115; // r15
  size_t v116; // rdx
  __int64 v117; // r12
  int v118; // eax
  char v119; // cl
  __int64 v120; // r15
  char v121; // r14
  __int64 v122; // rbx
  __int64 v123; // r12
  __int64 v124; // rax
  _QWORD *v125; // r13
  __int64 v126; // rsi
  _QWORD *v127; // r9
  __int64 v128; // rdi
  double result; // xmm0_8
  __int64 v130; // rdi
  __int64 v131; // r15
  __int64 i; // r15
  __int64 v133; // rsi
  __int64 v134; // rcx
  unsigned __int64 v135; // rax
  _BYTE *v136; // rsi
  __int64 v137; // rcx
  __int64 v138; // r15
  __int64 v139; // rax
  __int64 v140; // r14
  __int64 v141; // rbx
  __int64 v142; // r13
  size_t v143; // rdx
  __int64 v144; // r12
  int v145; // eax
  unsigned __int64 v146; // rdx
  char v147; // cl
  _QWORD *v148; // rdi
  _QWORD *v149; // rcx
  unsigned __int64 *v150; // rax
  unsigned __int64 v151; // r12
  __int64 v152; // r15
  size_t v153; // r13
  __int64 v154; // rbx
  __int64 v155; // rax
  __int64 v156; // rdx
  _DWORD *v157; // rax
  __int64 v158; // rdx
  void *v159; // rax
  __int64 v160; // rdx
  __int64 v161; // r15
  _QWORD *v162; // rax
  __int64 v163; // rbx
  _QWORD *v164; // r14
  _QWORD *v165; // r14
  __int64 v166; // [rsp+8h] [rbp-518h]
  _BYTE v167[176]; // [rsp+38h] [rbp-4E8h] BYREF
  _QWORD __dst[23]; // [rsp+E8h] [rbp-438h] BYREF
  _QWORD v169[3]; // [rsp+1A0h] [rbp-380h] BYREF
  _QWORD v170[2]; // [rsp+1B8h] [rbp-368h] BYREF
  _QWORD v171[2]; // [rsp+1C8h] [rbp-358h] BYREF
  _QWORD v172[23]; // [rsp+1D8h] [rbp-348h] BYREF
  _QWORD v173[23]; // [rsp+290h] [rbp-290h] BYREF
  size_t v174; // [rsp+348h] [rbp-1D8h]
  unsigned __int128 v175; // [rsp+350h] [rbp-1D0h]
  _BYTE __src[184]; // [rsp+360h] [rbp-1C0h] BYREF
  size_t v177; // [rsp+418h] [rbp-108h]
  unsigned __int64 v178; // [rsp+420h] [rbp-100h]
  unsigned __int64 v179; // [rsp+428h] [rbp-F8h]
  size_t *v180; // [rsp+430h] [rbp-F0h]
  _QWORD *v181; // [rsp+438h] [rbp-E8h]
  _QWORD *v182; // [rsp+440h] [rbp-E0h] BYREF
  size_t v183; // [rsp+448h] [rbp-D8h]
  unsigned __int128 v184; // [rsp+450h] [rbp-D0h]
  _BYTE *v185; // [rsp+460h] [rbp-C0h] BYREF
  void *v186; // [rsp+468h] [rbp-B8h]
  size_t __n; // [rsp+470h] [rbp-B0h]
  unsigned __int64 v188; // [rsp+478h] [rbp-A8h]
  __int64 v189; // [rsp+480h] [rbp-A0h]
  __int64 v190; // [rsp+488h] [rbp-98h]
  __int128 v191; // [rsp+490h] [rbp-90h] BYREF
  size_t v192; // [rsp+4A0h] [rbp-80h]
  _QWORD *v193; // [rsp+4A8h] [rbp-78h]
  __int64 v194; // [rsp+4B0h] [rbp-70h]
  __int64 v195; // [rsp+4B8h] [rbp-68h]
  __int64 v196; // [rsp+4C0h] [rbp-60h]
  void *__s1; // [rsp+4C8h] [rbp-58h]
  unsigned __int64 v198; // [rsp+4D0h] [rbp-50h]
  _QWORD *v199; // [rsp+4D8h] [rbp-48h]
  size_t v200; // [rsp+4E0h] [rbp-40h]
  size_t v201; // [rsp+4E8h] [rbp-38h]
  unsigned __int64 v202; // [rsp+4F0h] [rbp-30h]

  v201 = a6; /*0x1009be044*/
  v189 = a5; /*0x1009be048*/
  v10 = a2; /*0x1009be055*/
  v11 = (_QWORD *)a1; /*0x1009be058*/
  v12 = (__int64)a8; /*0x1009be05b*/
  v200 = a7; /*0x1009be063*/
  v171[0] = a3; /*0x1009be067*/
  v171[1] = a4; /*0x1009be06e*/
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b( /*0x1009be088*/
    __src,
    a2,
    &anon_f3f46b48c4f9c057aa63801556530189_553,
    7);
  if ( __OFSUB__(0, *(_QWORD *)__src) ) /*0x1009be08f*/
  {
    *(_BYTE *)(a1 + 505) = 1; /*0x1009be098*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(a1 + 400, 3); /*0x1009be0c1*/
    return result; /*0x1009be0c1*/
  }
  v192 = *(_QWORD *)&__src[16]; /*0x1009be0cd*/
  v191 = *(_OWORD *)__src; /*0x1009be0e6*/
  *(_QWORD *)__src = a3; /*0x1009be0ed*/
  v196 = a4; /*0x1009be0f4*/
  *(_QWORD *)&__src[8] = a4; /*0x1009be0f8*/
  *(_QWORD *)&__src[16] = *((_QWORD *)&v191 + 1); /*0x1009be0ff*/
  *(_QWORD *)&__src[24] = v192; /*0x1009be106*/
  codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db((__int64)&v185, (__int64)__src, 2); /*0x1009be120*/
  v193 = a8; /*0x1009be12a*/
  v194 = a3; /*0x1009be12e*/
  v199 = (_QWORD *)a1; /*0x1009be132*/
  if ( v200 == 12 && !(*(_QWORD *)v201 ^ 0x6174735F6B736174LL | *(unsigned int *)(v201 + 8) ^ 0x64657472LL) ) /*0x1009be156*/
  {
    codexmate_lib::core::analytics::parser::set_turn::h15f14214b5a991e4(a1, *((_QWORD *)&v191 + 1), v192); /*0x1009be3aa*/
    v33 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009be3be*/
            "started_atcompleted_aterrorfailedabortedduration_ms",
            10,
            a2);
    if ( (codexmate_lib::core::analytics::parser::timestamp::h15aec9fae269bd3f(v33) & 1) == 0 ) /*0x1009be3cd*/
      v34 = v189; /*0x1009be3cd*/
    v35 = (__int64 *)(a1 + 448); /*0x1009be3d5*/
    v36 = *(_QWORD *)(a1 + 464) <= 0x7FFu; /*0x1009be3dd*/
    v190 = v34; /*0x1009be3e9*/
    v201 = a1 + 448; /*0x1009be3f0*/
    if ( v36 ) /*0x1009be3f4*/
    {
      __s1 = v186; /*0x1009be7e0*/
      v47 = __n; /*0x1009be7e4*/
      v200 = __n; /*0x1009be7eb*/
    }
    else
    {
      v37 = *(_QWORD *)(a1 + 448); /*0x1009be3fa*/
      __s1 = v186; /*0x1009be409*/
      v200 = __n; /*0x1009be414*/
      if ( !v37 ) /*0x1009be41b*/
        goto LABEL_192; /*0x1009be41b*/
      v38 = *(_QWORD *)(a1 + 456); /*0x1009be421*/
      v188 = v38; /*0x1009be429*/
      v195 = v37; /*0x1009be430*/
      while ( 1 ) /*0x1009be434*/
      {
        v39 = v37 + 8; /*0x1009be434*/
        v202 = v37; /*0x1009be438*/
        v198 = *(unsigned __int16 *)(v37 + 362); /*0x1009be443*/
        v40 = 3LL * (unsigned int)(8 * v198); /*0x1009be44e*/
        v41 = -1; /*0x1009be452*/
        do /*0x1009be4a8*/
        {
          if ( !v40 ) /*0x1009be463*/
          {
            v41 = v198; /*0x1009be4b7*/
            goto LABEL_49; /*0x1009be4b7*/
          }
          v42 = v39 + 24; /*0x1009be465*/
          v43 = *(_QWORD *)(v39 + 16); /*0x1009be46d*/
          v44 = v200 - v43; /*0x1009be478*/
          if ( v200 < v43 ) /*0x1009be47b*/
            v43 = v200; /*0x1009be47b*/
          v45 = memcmp(__s1, *(const void **)(v39 + 8), v43); /*0x1009be483*/
          if ( v45 ) /*0x1009be48c*/
            v44 = v45; /*0x1009be48c*/
          v46 = (v44 > 0) - (v44 < 0); /*0x1009be499*/
          ++v41; /*0x1009be49b*/
          v40 -= 24; /*0x1009be49e*/
          v39 = v42; /*0x1009be4a2*/
        }
        while ( v46 == 1 ); /*0x1009be4a8*/
        v47 = v46; /*0x1009be4aa*/
        if ( !v46 ) /*0x1009be4af*/
        {
          v11 = v199; /*0x1009bf2c0*/
          v35 = (__int64 *)v201; /*0x1009bf2c4*/
          goto LABEL_193; /*0x1009bf2c8*/
        }
LABEL_49:
        v35 = (__int64 *)v201; /*0x1009be4bb*/
        v48 = v38-- == 0; /*0x1009be4bf*/
        if ( v48 ) /*0x1009be4c3*/
          break; /*0x1009be4c3*/
        v37 = *(_QWORD *)(v202 + 8 * v41 + 368); /*0x1009be4cd*/
      }
      if ( v188 ) /*0x1009bf2e6*/
      {
        v11 = v199; /*0x1009bf2ef*/
        v133 = v195; /*0x1009bf2f3*/
        if ( (v188 & 7) != 0 ) /*0x1009bf2f7*/
        {
          v134 = 0; /*0x1009bf2f9*/
          do /*0x1009bf308*/
          {
            v133 = *(_QWORD *)(v133 + 368); /*0x1009bf2fb*/
            ++v134; /*0x1009bf302*/
          }
          while ( (v188 & 7) != v134 ); /*0x1009bf308*/
          v135 = v188 - v134; /*0x1009bf30d*/
        }
        else
        {
          v135 = v188; /*0x1009bf31c*/
        }
        if ( v188 >= 8 ) /*0x1009bf323*/
        {
          do /*0x1009bf361*/
          {
            v133 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v133 + 368) + 368LL) /*0x1009bf356*/
                                                                                         + 368LL)
                                                                             + 368LL)
                                                                 + 368LL)
                                                     + 368LL)
                                         + 368LL)
                             + 368LL);
            v135 -= 8LL; /*0x1009bf35d*/
          }
          while ( v135 ); /*0x1009bf361*/
        }
      }
      else
      {
        v11 = v199; /*0x1009bf312*/
        v133 = v195; /*0x1009bf316*/
      }
      if ( *(_WORD *)(v133 + 362) ) /*0x1009bf363*/
      {
        *(_QWORD *)&__src[16] = 0; /*0x1009bf36d*/
        *(_OWORD *)__src = (unsigned __int64)v133; /*0x1009bf383*/
        *(_QWORD *)&__src[24] = v201; /*0x1009bf38a*/
        alloc::collections::btree::map::entry::OccupiedEntry$LT$K$C$V$C$A$GT$::remove_kv::hae6eb66fe865420d(v173, __src); /*0x1009bf39f*/
        if ( v173[0] != 0x8000000000000000LL ) /*0x1009bf3b8*/
        {
          if ( v173[0] ) /*0x1009bf3bd*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173[1], v173[0], 1); /*0x1009bf3cb*/
        }
      }
LABEL_192:
      *((_BYTE *)v11 + 505) = 1; /*0x1009bf3d0*/
      v47 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v11 + 50, 10); /*0x1009bf3e6*/
    }
LABEL_193:
    v136 = v185; /*0x1009bf3eb*/
    v137 = *v35; /*0x1009bf3f2*/
    if ( !*v35 ) /*0x1009bf3f8*/
    {
      v149 = nullptr; /*0x1009bf4bf*/
      goto LABEL_211; /*0x1009bf4bf*/
    }
    v198 = (unsigned __int64)v185; /*0x1009bf3fe*/
    v138 = v11[57]; /*0x1009bf402*/
    while ( 1 ) /*0x1009bf40a*/
    {
      v139 = v137 + 8; /*0x1009bf40a*/
      v199 = (_QWORD *)v137; /*0x1009bf40e*/
      v202 = *(unsigned __int16 *)(v137 + 362); /*0x1009bf419*/
      v140 = 3LL * (unsigned int)(8 * v202); /*0x1009bf424*/
      v141 = -1; /*0x1009bf428*/
      do /*0x1009bf478*/
      {
        if ( !v140 ) /*0x1009bf433*/
        {
          v141 = v202; /*0x1009bf483*/
          goto LABEL_205; /*0x1009bf483*/
        }
        v142 = v139 + 24; /*0x1009bf435*/
        v143 = *(_QWORD *)(v139 + 16); /*0x1009bf43d*/
        v144 = v200 - v143; /*0x1009bf448*/
        if ( v200 < v143 ) /*0x1009bf44b*/
          v143 = v200; /*0x1009bf44b*/
        v145 = memcmp(__s1, *(const void **)(v139 + 8), v143); /*0x1009bf453*/
        if ( v145 ) /*0x1009bf45c*/
          v144 = v145; /*0x1009bf45c*/
        v147 = (v144 > 0) - (v144 < 0); /*0x1009bf469*/
        ++v141; /*0x1009bf46b*/
        v140 -= 24; /*0x1009bf46e*/
        v139 = v142; /*0x1009bf472*/
      }
      while ( v147 == 1 ); /*0x1009bf478*/
      if ( !v147 ) /*0x1009bf47f*/
        break; /*0x1009bf47f*/
LABEL_205:
      v48 = v138-- == 0; /*0x1009bf487*/
      if ( v48 ) /*0x1009bf48b*/
      {
        v47 = v141; /*0x1009bf7dc*/
        v149 = v199; /*0x1009bf7df*/
        v35 = (__int64 *)v201; /*0x1009bf7e3*/
        v136 = (_BYTE *)v198; /*0x1009bf7e7*/
LABEL_211:
        v148 = __s1; /*0x1009bf4c1*/
        v141 = (__int64)v35; /*0x1009bf4c5*/
        v146 = 0x8000000000000000LL; /*0x1009bf4c8*/
        if ( v136 == (_BYTE *)0x8000000000000000LL ) /*0x1009bf4d5*/
        {
LABEL_212:
          v150 = &v148[v141 + 34]; /*0x1009bf4d7*/
        }
        else
        {
          *(_QWORD *)__src = v136; /*0x1009bf4e1*/
          *(_QWORD *)&__src[8] = __s1; /*0x1009bf4ec*/
          *(_QWORD *)&__src[16] = v200; /*0x1009bf4f7*/
          *(_QWORD *)&__src[24] = v35; /*0x1009bf4fe*/
          *(_QWORD *)&__src[32] = v149; /*0x1009bf505*/
          *(_QWORD *)&__src[40] = 0; /*0x1009bf50c*/
          *(_QWORD *)&__src[48] = v47; /*0x1009bf517*/
          v148 = v173; /*0x1009bf51e*/
          v136 = __src; /*0x1009bf525*/
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::hec9bd017b22e7282( /*0x1009bf533*/
            v173,
            __src,
            v190);
          v150 = (unsigned __int64 *)(v173[0] + 8LL * v173[2] + 272); /*0x1009bf546*/
        }
        v151 = *v150; /*0x1009bf54e*/
        v152 = *((_QWORD *)&v191 + 1); /*0x1009bf551*/
        v153 = v192; /*0x1009bf558*/
        __dst[0] = 0; /*0x1009bf55c*/
        __dst[2] = 0; /*0x1009bf567*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v148, v136, v146); /*0x1009bf572*/
        v154 = 6; /*0x1009bf577*/
        v155 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1009bf586*/
        if ( !v155 ) /*0x1009bf58e*/
          goto LABEL_227; /*0x1009bf58e*/
        *(_WORD *)(v155 + 4) = 29557; /*0x1009bf597*/
        *(_DWORD *)v155 = 1952543859; /*0x1009bf59d*/
        v172[0] = 6; /*0x1009bf5a3*/
        v172[1] = v155; /*0x1009bf5ae*/
        v172[2] = 6; /*0x1009bf5b5*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v156); /*0x1009bf5c0*/
        v157 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1009bf5cf*/
        if ( !v157 ) /*0x1009bf5d7*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1009bf827*/
        *(_DWORD *)((char *)v157 + 3) = 1684370546; /*0x1009bf5dd*/
        *v157 = 1918989427; /*0x1009bf5e4*/
        __src[0] = 3; /*0x1009bf5ea*/
        *(_QWORD *)&__src[8] = 7; /*0x1009bf5f1*/
        *(_QWORD *)&__src[16] = v157; /*0x1009bf5fc*/
        *(_QWORD *)&__src[24] = 7; /*0x1009bf603*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v173, __dst, v172, __src); /*0x1009bf62a*/
        if ( LOBYTE(v173[0]) != 6 ) /*0x1009bf636*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v173, __dst, v158); /*0x1009bf63f*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v173, __dst, v158); /*0x1009bf644*/
        v154 = 10; /*0x1009bf649*/
        v159 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1009bf658*/
        if ( !v159 ) /*0x1009bf660*/
LABEL_227:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v154); /*0x1009bf816*/
        qmemcpy(v159, "started_at", 10); /*0x1009bf670*/
        v172[0] = 10; /*0x1009bf679*/
        v172[1] = v159; /*0x1009bf684*/
        v172[2] = 10; /*0x1009bf68b*/
        __src[0] = 2; /*0x1009bf69d*/
        *(_QWORD *)&__src[8] = v151 >> 63; /*0x1009bf6a4*/
        *(_QWORD *)&__src[16] = v151; /*0x1009bf6ab*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v173, __dst, v172, __src); /*0x1009bf6d1*/
        if ( LOBYTE(v173[0]) != 6 ) /*0x1009bf6dd*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v173, __dst, v160); /*0x1009bf6e6*/
        v172[1] = __dst[0]; /*0x1009bf6f9*/
        v172[2] = __dst[1]; /*0x1009bf700*/
        v172[3] = __dst[2]; /*0x1009bf70e*/
        LOBYTE(v172[0]) = 5; /*0x1009bf715*/
        v173[0] = v194; /*0x1009bf720*/
        v173[1] = v196; /*0x1009bf72b*/
        v173[2] = v152; /*0x1009bf732*/
        v173[3] = v153; /*0x1009bf739*/
        v166 = v152; /*0x1009bf74f*/
        v161 = v194; /*0x1009bf780*/
        codexmate_lib::core::analytics::parser::fact::ha64429e32170a0de( /*0x1009bf783*/
          __src,
          "turnlsof",
          4,
          v173,
          2,
          v194,
          v196,
          v166,
          v153,
          v151,
          v172,
          40);
        v162 = v193; /*0x1009bf788*/
        v163 = v193[2]; /*0x1009bf78c*/
        if ( v163 == *v193 ) /*0x1009bf793*/
        {
          v164 = v193; /*0x1009bf798*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd1924b4a937a2a03(v193); /*0x1009bf79b*/
          v162 = v164; /*0x1009bf7a0*/
        }
        v165 = v162; /*0x1009bf7bb*/
        memcpy((void *)(v162[1] + 144 * v163), __src, 0x90u); /*0x1009bf7be*/
        v127 = v165; /*0x1009bf7c3*/
        v165[2] = v163 + 1; /*0x1009bf7c9*/
        v121 = 0; /*0x1009bf7cd*/
        v124 = v196; /*0x1009bf7d0*/
        v128 = v161; /*0x1009bf7d4*/
        goto LABEL_164; /*0x1009bf7d7*/
      }
      v137 = v199[v141 + 46]; /*0x1009bf495*/
    }
    v136 = (_BYTE *)v198; /*0x1009bf4a2*/
    if ( v198 ) /*0x1009bf4a9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v198, 1); /*0x1009bf4b4*/
    v148 = v199; /*0x1009bf4b9*/
    goto LABEL_212; /*0x1009bf4bd*/
  }
  __s1 = v186; /*0x1009be163*/
  v13 = *(_QWORD *)(a1 + 448); /*0x1009be167*/
  v190 = a2; /*0x1009be172*/
  if ( v13 ) /*0x1009be179*/
  {
    v188 = a1 + 448; /*0x1009be187*/
    v14 = __n; /*0x1009be18e*/
    v202 = *(_QWORD *)(a1 + 456); /*0x1009be19d*/
LABEL_7:
    v15 = v13 + 8; /*0x1009be1a1*/
    v198 = v13; /*0x1009be1a5*/
    v195 = *(unsigned __int16 *)(v13 + 362); /*0x1009be1b0*/
    v12 = 3LL * (unsigned int)(8 * v195); /*0x1009be1bb*/
    v16 = -1; /*0x1009be1bf*/
    do /*0x1009be214*/
    {
      if ( !v12 ) /*0x1009be1d3*/
      {
        v16 = v195; /*0x1009be220*/
LABEL_17:
        if ( v202 ) /*0x1009be22c*/
        {
          --v202; /*0x1009be232*/
          v13 = *(_QWORD *)(v198 + 8 * v16 + 368); /*0x1009be23a*/
          goto LABEL_7; /*0x1009be242*/
        }
        v22 = 0; /*0x1009bf2cd*/
        v10 = v190; /*0x1009bf2d0*/
        goto LABEL_23; /*0x1009bf2d7*/
      }
      v17 = v15 + 24; /*0x1009be1d5*/
      v18 = *(_QWORD *)(v15 + 16); /*0x1009be1dd*/
      v19 = v14 - v18; /*0x1009be1e4*/
      if ( v14 < v18 ) /*0x1009be1e7*/
        v18 = v14; /*0x1009be1e7*/
      v20 = memcmp(__s1, *(const void **)(v15 + 8), v18); /*0x1009be1ef*/
      if ( v20 ) /*0x1009be1f8*/
        v19 = v20; /*0x1009be1f8*/
      v21 = (v19 > 0) - (v19 < 0); /*0x1009be205*/
      ++v16; /*0x1009be207*/
      v12 -= 24; /*0x1009be20a*/
      v15 = v17; /*0x1009be20e*/
    }
    while ( v21 == 1 ); /*0x1009be214*/
    if ( v21 ) /*0x1009be21b*/
      goto LABEL_17; /*0x1009be21b*/
    *(_QWORD *)__src = v198; /*0x1009be24b*/
    *(_QWORD *)&__src[8] = v202; /*0x1009be256*/
    *(_QWORD *)&__src[16] = v16; /*0x1009be25d*/
    *(_QWORD *)&__src[24] = v188; /*0x1009be26b*/
    alloc::collections::btree::map::entry::OccupiedEntry$LT$K$C$V$C$A$GT$::remove_kv::hae6eb66fe865420d(v173, __src); /*0x1009be280*/
    v10 = v190; /*0x1009be285*/
    if ( v173[0] == 0x8000000000000000LL ) /*0x1009be2a0*/
      goto LABEL_20; /*0x1009be2a0*/
    v12 = v173[3]; /*0x1009be2a7*/
    v22 = 1; /*0x1009be2ae*/
    if ( v173[0] ) /*0x1009be2b4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173[1], v173[0], 1); /*0x1009be2c2*/
  }
  else
  {
LABEL_20:
    v22 = 0; /*0x1009be2a2*/
  }
LABEL_23:
  v23 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009be2c7*/
          "started_atcompleted_aterrorfailedabortedduration_ms",
          10,
          v10);
  v25 = codexmate_lib::core::analytics::parser::timestamp::h15aec9fae269bd3f(v23); /*0x1009be2e3*/
  if ( (v25 & 1) != 0 ) /*0x1009be2e9*/
    v12 = v24; /*0x1009be2e9*/
  v26 = 12; /*0x1009be2f4*/
  v27 = (char *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009be301*/
                  "completed_aterrorfailedabortedduration_ms",
                  12,
                  v10);
  if ( (codexmate_lib::core::analytics::parser::timestamp::h15aec9fae269bd3f(v27) & 1) == 0 ) /*0x1009be30b*/
    v28 = v189; /*0x1009be30b*/
  v198 = v28; /*0x1009be313*/
  v29 = v12 <= v28; /*0x1009be31a*/
  v202 = v12; /*0x1009be323*/
  if ( v200 == 12 && !(*(_QWORD *)v201 ^ 0x6F62615F6E727574LL | *(unsigned int *)(v201 + 8) ^ 0x64657472LL) ) /*0x1009be347*/
  {
    v31 = 7; /*0x1009be4da*/
    v32 = "abortedduration_ms"; /*0x1009be4e0*/
  }
  else
  {
    v27 = "errorfailedabortedduration_ms"; /*0x1009be34d*/
    v26 = 5; /*0x1009be354*/
    v30 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009be35c*/
                     "errorfailedabortedduration_ms",
                     5,
                     v10);
    if ( v30 ) /*0x1009be364*/
    {
      v31 = 3LL * (*v30 == 0) + 6; /*0x1009be36e*/
      v32 = "failedabortedduration_ms"; /*0x1009be37a*/
      if ( !*v30 ) /*0x1009be368*/
        v32 = "completed"; /*0x1009be381*/
    }
    else
    {
      v31 = 9; /*0x1009be38a*/
      v32 = "completed"; /*0x1009be390*/
    }
  }
  v49 = v29 & (v25 | v22); /*0x1009be4ea*/
  v200 = *((_QWORD *)&v191 + 1); /*0x1009be4f4*/
  v201 = v192; /*0x1009be4fc*/
  v50 = v189; /*0x1009be500*/
  if ( v49 ) /*0x1009be507*/
    v50 = v202; /*0x1009be507*/
  v195 = v50; /*0x1009be50c*/
  __dst[0] = 0; /*0x1009be510*/
  __dst[2] = 0; /*0x1009be51b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v26, v28); /*0x1009be526*/
  v51 = 6; /*0x1009be52b*/
  v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1009be53a*/
  if ( !v52 ) /*0x1009be542*/
    goto LABEL_225; /*0x1009be542*/
  *(_WORD *)(v52 + 4) = 29557; /*0x1009be54b*/
  *(_DWORD *)v52 = 1952543859; /*0x1009be551*/
  v172[0] = 6; /*0x1009be557*/
  v172[1] = v52; /*0x1009be562*/
  v172[2] = 6; /*0x1009be569*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v53); /*0x1009be574*/
  v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v31, 1); /*0x1009be581*/
  if ( !v54 ) /*0x1009be589*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v31); /*0x1009bf807*/
  v55 = v54; /*0x1009be58f*/
  memcpy(v54, v32, v31); /*0x1009be59b*/
  __src[0] = 3; /*0x1009be5a0*/
  *(_QWORD *)&__src[8] = v31; /*0x1009be5a7*/
  *(_QWORD *)&__src[16] = v55; /*0x1009be5ae*/
  *(_QWORD *)&__src[24] = v31; /*0x1009be5b5*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v173, __dst, v172, __src); /*0x1009be5d8*/
  if ( LOBYTE(v173[0]) != 6 ) /*0x1009be5e4*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v173, __dst, v56); /*0x1009be5ed*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v173, __dst, v56); /*0x1009be5f2*/
  v51 = 10; /*0x1009be5f7*/
  v57 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1009be606*/
  if ( !v57 ) /*0x1009be60e*/
    goto LABEL_225; /*0x1009be60e*/
  qmemcpy(v57, "started_at", 10); /*0x1009be61e*/
  v172[0] = 10; /*0x1009be627*/
  v172[1] = v57; /*0x1009be632*/
  v172[2] = 10; /*0x1009be639*/
  __src[0] = 2 * v49; /*0x1009be652*/
  *(_QWORD *)&__src[8] = v202 >> 63; /*0x1009be659*/
  *(_QWORD *)&__src[16] = v202; /*0x1009be660*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v173, __dst, v172, __src); /*0x1009be683*/
  if ( LOBYTE(v173[0]) != 6 ) /*0x1009be68f*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v173, __dst, v58); /*0x1009be698*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v173, __dst, v58); /*0x1009be69d*/
  v51 = 12; /*0x1009be6a2*/
  v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1009be6b1*/
  if ( !v59 ) /*0x1009be6b9*/
    goto LABEL_225; /*0x1009be6b9*/
  qmemcpy(v59, "completed_at", 12); /*0x1009be6c9*/
  v172[0] = 12; /*0x1009be6d3*/
  v172[1] = v59; /*0x1009be6de*/
  v172[2] = 12; /*0x1009be6e5*/
  __src[0] = 2; /*0x1009be6fb*/
  *(_QWORD *)&__src[8] = v198 >> 63; /*0x1009be702*/
  *(_QWORD *)&__src[16] = v198; /*0x1009be709*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v173, __dst, v172, __src); /*0x1009be72c*/
  if ( LOBYTE(v173[0]) != 6 ) /*0x1009be738*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v173, __dst, v60); /*0x1009be741*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v173, __dst, v60); /*0x1009be746*/
  v51 = 11; /*0x1009be74b*/
  v61 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1009be75a*/
  if ( !v61 ) /*0x1009be762*/
LABEL_225:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v51); /*0x1009bf7f8*/
  qmemcpy(v61, "duration_ms", 11); /*0x1009be775*/
  v172[0] = 11; /*0x1009be787*/
  v172[1] = v61; /*0x1009be792*/
  v172[2] = 11; /*0x1009be799*/
  v62 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("duration_ms", 11, v190); /*0x1009be7b0*/
  if ( !v62 || *(_BYTE *)v62 != 2 ) /*0x1009be7bd*/
    goto LABEL_70; /*0x1009be7bd*/
  v64 = *(_QWORD *)(v62 + 8); /*0x1009be7bf*/
  if ( !v64 ) /*0x1009be7c6*/
  {
    v62 = *(_QWORD *)(v62 + 16); /*0x1009be7f4*/
    v65 = v62 >= 0; /*0x1009be7fb*/
    goto LABEL_73; /*0x1009be7fb*/
  }
  if ( (_DWORD)v64 != 1 ) /*0x1009be7cb*/
  {
LABEL_70:
    v66 = 0; /*0x1009be7d5*/
    goto LABEL_74; /*0x1009be7d7*/
  }
  v62 = *(_QWORD *)(v62 + 16); /*0x1009be7cd*/
  v65 = 1; /*0x1009be7d1*/
LABEL_73:
  v67 = v65 && v62 >= 0; /*0x1009be7fe*/
  v63 = (unsigned __int64)v62 >> 63; /*0x1009be809*/
  v66 = 2 * v67; /*0x1009be80d*/
LABEL_74:
  __src[0] = v66; /*0x1009be80f*/
  *(_QWORD *)&__src[8] = v63; /*0x1009be815*/
  *(_QWORD *)&__src[16] = v62; /*0x1009be81c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v173, __dst, v172, __src); /*0x1009be842*/
  if ( LOBYTE(v173[0]) != 6 ) /*0x1009be84e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v173, __dst, v68); /*0x1009be857*/
  v172[1] = __dst[0]; /*0x1009be86a*/
  v172[2] = __dst[1]; /*0x1009be871*/
  v172[3] = __dst[2]; /*0x1009be87f*/
  LOBYTE(v172[0]) = 5; /*0x1009be886*/
  v173[0] = v194; /*0x1009be891*/
  v173[1] = v196; /*0x1009be89c*/
  v173[2] = v200; /*0x1009be8a7*/
  v173[3] = v201; /*0x1009be8b2*/
  codexmate_lib::core::analytics::parser::fact::ha64429e32170a0de( /*0x1009be8fd*/
    __src,
    "turnlsof",
    4,
    v173,
    2,
    v194,
    v196,
    v200,
    v201,
    v195,
    v172,
    80);
  v69 = v193; /*0x1009be902*/
  v70 = v199; /*0x1009be906*/
  v71 = v193[2]; /*0x1009be90a*/
  if ( v71 == *v193 ) /*0x1009be911*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd1924b4a937a2a03(v193); /*0x1009be916*/
  memcpy((void *)(v69[1] + 144 * v71), __src, 0x90u); /*0x1009be933*/
  v69[2] = v71 + 1; /*0x1009be93b*/
  v72 = v70[28]; /*0x1009be93f*/
  if ( v72 == v192 && !memcmp((const void *)v70[27], *((const void **)&v191 + 1), v72) ) /*0x1009be963*/
  {
    v70[28] = 0; /*0x1009bf250*/
    *((_BYTE *)v70 + 508) = 0; /*0x1009bf25c*/
    v130 = v70[34]; /*0x1009bf265*/
    v131 = v70[35]; /*0x1009bf26d*/
    v70[35] = 0; /*0x1009bf275*/
    for ( i = v131 + 1; i != 1; --i ) /*0x1009bf281*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..analytics..parser..Fact$GT$::h1809a14a2e62f7d1(); /*0x1009bf2a4*/
      v130 += 144; /*0x1009bf2a9*/
    }
  }
  v170[0] = v171; /*0x1009be970*/
  v170[1] = &v191; /*0x1009be97e*/
  v73 = v70[53]; /*0x1009be985*/
  if ( !v73 ) /*0x1009be990*/
  {
    v77 = nullptr; /*0x1009bea32*/
    v73 = 0; /*0x1009bea34*/
    goto LABEL_89; /*0x1009bea34*/
  }
  v74 = v70[54]; /*0x1009be996*/
  if ( v74 ) /*0x1009be9a1*/
  {
    if ( (v74 & 7) != 0 ) /*0x1009be9aa*/
    {
      v75 = 0; /*0x1009be9b0*/
      do /*0x1009be9cd*/
      {
        v73 = *(_QWORD *)(v73 + 2040); /*0x1009be9c0*/
        ++v75; /*0x1009be9c7*/
      }
      while ( (v70[54] & 7LL) != v75 ); /*0x1009be9cd*/
      v76 = v74 - v75; /*0x1009be9d2*/
      if ( v74 < 8 ) /*0x1009be9d9*/
        goto LABEL_87; /*0x1009be9d9*/
      goto LABEL_86; /*0x1009be9d9*/
    }
    v76 = v70[54]; /*0x1009bf2ae*/
    if ( v74 >= 8 ) /*0x1009bf2b5*/
    {
      do /*0x1009bea1c*/
      {
LABEL_86:
        v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 2040) /*0x1009be9e0*/
                                                                                                + 2040LL)
                                                                                    + 2040LL)
                                                                        + 2040LL)
                                                            + 2040LL)
                                                + 2040LL)
                                    + 2040LL)
                        + 2040LL);
        v76 -= 8; /*0x1009bea18*/
      }
      while ( v76 ); /*0x1009bea1c*/
    }
  }
LABEL_87:
  v77 = v70 + 53; /*0x1009bea1e*/
  *(_OWORD *)__src = 0; /*0x1009bea29*/
LABEL_89:
  v78 = v170; /*0x1009bea36*/
  v180 = v170; /*0x1009bea45*/
  v181 = v70 + 55; /*0x1009bea4c*/
  v182 = v77; /*0x1009bea53*/
  v183 = v73; /*0x1009bea5a*/
  v184 = *(_OWORD *)__src; /*0x1009bea6f*/
  if ( !v73 ) /*0x1009bea80*/
    goto LABEL_138; /*0x1009bea80*/
  v79 = v184; /*0x1009bea8d*/
  while ( 2 ) /*0x1009bea94*/
  {
    v202 = (unsigned __int64)v78; /*0x1009bea94*/
    while ( 1 ) /*0x1009beaab*/
    {
      if ( *((_QWORD *)&v79 + 1) >= (unsigned __int64)*(unsigned __int16 *)(v73 + 2034) ) /*0x1009beab5*/
      {
        v81 = v79; /*0x1009bead0*/
        while ( 1 ) /*0x1009beae0*/
        {
          v82 = *(_QWORD *)(v73 + 1760); /*0x1009beae0*/
          if ( !v82 ) /*0x1009beaea*/
            goto LABEL_138; /*0x1009beaea*/
          ++v81; /*0x1009beaf0*/
          v80 = *(unsigned __int16 *)(v73 + 2032); /*0x1009beaf3*/
          v73 = *(_QWORD *)(v73 + 1760); /*0x1009beafb*/
          if ( (unsigned __int16)v80 < *(_WORD *)(v82 + 2034) ) /*0x1009beb06*/
            goto LABEL_98; /*0x1009beb06*/
        }
      }
      v80 = *((_QWORD *)&v79 + 1); /*0x1009beab7*/
      v81 = v79; /*0x1009beaba*/
      v82 = v73; /*0x1009beabd*/
LABEL_98:
      v200 = v79; /*0x1009beb08*/
      v73 = *v78; /*0x1009beb15*/
      v83 = *(_QWORD *)(v82 + 160 * v80 + 16); /*0x1009beb18*/
      if ( v83 == *(_QWORD *)(*v78 + 8) ) /*0x1009beb21*/
      {
        v84 = v82 + 160 * v80; /*0x1009beb23*/
        v201 = v78[1]; /*0x1009beb2a*/
        LODWORD(v73) = memcmp(*(const void **)(v84 + 8), *(const void **)v73, v83); /*0x1009beb35*/
        v78 = (size_t *)v202; /*0x1009beb3a*/
        if ( !(_DWORD)v73 ) /*0x1009beb40*/
        {
          v85 = *(_QWORD *)(v84 + 40); /*0x1009beb42*/
          v73 = v201; /*0x1009beb46*/
          if ( v85 == *(_QWORD *)(v201 + 16) ) /*0x1009beb4e*/
          {
            LODWORD(v73) = memcmp(*(const void **)(v84 + 32), *(const void **)(v201 + 8), v85); /*0x1009beb5c*/
            v78 = (size_t *)v202; /*0x1009beb61*/
            if ( !(_DWORD)v73 ) /*0x1009beb67*/
              break; /*0x1009beb67*/
          }
        }
      }
      if ( v81 ) /*0x1009beb73*/
      {
        v86 = v82 + 8 * v80 + 2048; /*0x1009beb79*/
        if ( (v81 & 7) != 0 ) /*0x1009beb88*/
        {
          v87 = 0; /*0x1009beb8a*/
          do /*0x1009beba0*/
          {
            v73 = *(_QWORD *)v86; /*0x1009beb90*/
            v86 = *(_QWORD *)v86 + 2040LL; /*0x1009beb93*/
            ++v87; /*0x1009beb9a*/
          }
          while ( (v81 & 7) != v87 ); /*0x1009beba0*/
          v88 = v81 - v87; /*0x1009beba5*/
          v79 = 0u; /*0x1009bebb6*/
          if ( v81 >= 8 ) /*0x1009bebb6*/
            goto LABEL_109; /*0x1009bebb6*/
        }
        else
        {
          v88 = v81; /*0x1009bebbe*/
          v79 = 0u; /*0x1009bebcf*/
          if ( v81 >= 8 ) /*0x1009bebcf*/
          {
            do /*0x1009bec1f*/
            {
LABEL_109:
              v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v86 + 2040LL) /*0x1009bebe0*/
                                                                                          + 2040LL)
                                                                              + 2040LL)
                                                                  + 2040LL)
                                                      + 2040LL)
                                          + 2040LL)
                              + 2040LL);
              v86 = v73 + 2040; /*0x1009bec14*/
              v88 -= 8LL; /*0x1009bec1b*/
            }
            while ( v88 ); /*0x1009bec1f*/
            v79 = 0u; /*0x1009bec25*/
          }
        }
      }
      else
      {
        v73 = v82; /*0x1009beaa8*/
        v79 = __PAIR128__(v80 + 1, 0); /*0x1009beaa8*/
      }
    }
    *(_QWORD *)&v184 = v200; /*0x1009bec2e*/
    *((_QWORD *)&v184 + 1) = *((_QWORD *)&v79 + 1); /*0x1009bec35*/
    v183 = 0; /*0x1009bec3c*/
    --*v181; /*0x1009bec4e*/
    if ( v81 ) /*0x1009bec54*/
    {
      v89 = *(_QWORD *)(v82 + 8 * v80 + 2040); /*0x1009bec5a*/
      v90 = v81 - 1; /*0x1009bec65*/
      if ( v81 != 1 ) /*0x1009bec68*/
      {
        if ( (v90 & 7) != 0 ) /*0x1009bec7c*/
        {
          v91 = 0; /*0x1009bec7e*/
          do /*0x1009bec95*/
          {
            v89 = *(_QWORD *)(v89 + 8LL * *(unsigned __int16 *)(v89 + 2034) + 2040); /*0x1009bec87*/
            ++v91; /*0x1009bec8f*/
          }
          while ( (v90 & 7) != v91 ); /*0x1009bec95*/
          v90 -= v91; /*0x1009bec97*/
        }
        if ( v81 - 2 >= 7 ) /*0x1009beca2*/
        {
          do /*0x1009bed24*/
          {
            v92 = *(_QWORD *)(v89 + 8LL * *(unsigned __int16 *)(v89 + 2034) + 2040); /*0x1009becaf*/
            v93 = *(_QWORD *)(v92 + 8LL * *(unsigned __int16 *)(v92 + 2034) + 2040); /*0x1009becbe*/
            v94 = *(_QWORD *)(v93 + 8LL * *(unsigned __int16 *)(v93 + 2034) + 2040); /*0x1009beccd*/
            v95 = *(_QWORD *)(v94 + 8LL * *(unsigned __int16 *)(v94 + 2034) + 2040); /*0x1009becdc*/
            v96 = *(_QWORD *)(v95 + 8LL * *(unsigned __int16 *)(v95 + 2034) + 2040); /*0x1009beceb*/
            v97 = *(_QWORD *)(v96 + 8LL * *(unsigned __int16 *)(v96 + 2034) + 2040); /*0x1009becfa*/
            v98 = *(_QWORD *)(v97 + 8LL * *(unsigned __int16 *)(v97 + 2034) + 2040); /*0x1009bed09*/
            v89 = *(_QWORD *)(v98 + 8LL * *(unsigned __int16 *)(v98 + 2034) + 2040); /*0x1009bed18*/
            v90 -= 8LL; /*0x1009bed20*/
          }
          while ( v90 ); /*0x1009bed24*/
        }
      }
      v99 = *(unsigned __int16 *)(v89 + 2034) - 1LL; /*0x1009bed71*/
      v169[0] = v89; /*0x1009bed74*/
      v169[1] = 0; /*0x1009bed7b*/
      v169[2] = v99; /*0x1009bed86*/
      alloc::collections::btree::remove::_$LT$impl$u20$alloc..collections..btree..node..Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..Leaf$GT$$C$alloc..collections..btree..node..marker..KV$GT$$GT$::remove_leaf_kv::heea78c400a4717b0( /*0x1009bed9e*/
        __src,
        v169,
        &v182);
      memcpy(__dst, __src, sizeof(__dst)); /*0x1009bedb6*/
      v100 = v177; /*0x1009bedbb*/
      v101 = v178; /*0x1009bedc2*/
      v102 = v179; /*0x1009bedc9*/
      if ( v179 >= *(unsigned __int16 *)(v177 + 2034) ) /*0x1009beddb*/
      {
        do /*0x1009bedf7*/
        {
          v102 = *(unsigned __int16 *)(v100 + 2032); /*0x1009beddd*/
          v100 = *(_QWORD *)(v100 + 1760); /*0x1009bede5*/
          ++v101; /*0x1009bedec*/
        }
        while ( (unsigned __int16)v102 >= *(_WORD *)(v100 + 2034) ); /*0x1009bedf7*/
      }
      v103 = 3 * v102; /*0x1009bedf9*/
      v172[2] = *(_QWORD *)(v100 + 24 * v102 + 1784); /*0x1009bee10*/
      v104 = *(_QWORD *)(v100 + 24 * v102 + 1768); /*0x1009bee17*/
      v172[1] = *(_QWORD *)(v100 + 24 * v102 + 1776); /*0x1009bee27*/
      v172[0] = v104; /*0x1009bee2e*/
      v105 = __dst[1]; /*0x1009bee3c*/
      *(_QWORD *)(v100 + 8 * v103 + 1768) = __dst[0]; /*0x1009bee43*/
      *(_QWORD *)(v100 + 8 * v103 + 1776) = v105; /*0x1009bee4b*/
      *(_QWORD *)(v100 + 8 * v103 + 1784) = __dst[2]; /*0x1009bee5a*/
      memcpy(&v172[3], (const void *)(v100 + 160 * v102), 0xA0u); /*0x1009bee71*/
      memcpy((void *)(v100 + 160 * v102), &__dst[3], 0xA0u); /*0x1009bee85*/
      if ( v101 ) /*0x1009bee8d*/
      {
        v106 = v100 + 8 * v102 + 2048; /*0x1009bee8f*/
        if ( (v101 & 7) != 0 ) /*0x1009bee9e*/
        {
          v107 = 0; /*0x1009beea0*/
          do /*0x1009beeb2*/
          {
            v100 = *(_QWORD *)v106; /*0x1009beea2*/
            v106 = *(_QWORD *)v106 + 2040LL; /*0x1009beea5*/
            ++v107; /*0x1009beeac*/
          }
          while ( (v101 & 7) != v107 ); /*0x1009beeb2*/
          v108 = v101 - v107; /*0x1009beeb7*/
        }
        else
        {
          v108 = v101; /*0x1009beec1*/
        }
        if ( v101 >= 8 ) /*0x1009beec8*/
        {
          do /*0x1009bef09*/
          {
            v100 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v106 + 2040LL) /*0x1009beef7*/
                                                                                         + 2040LL)
                                                                             + 2040LL)
                                                                 + 2040LL)
                                                     + 2040LL)
                                         + 2040LL)
                             + 2040LL);
            v106 = v100 + 2040; /*0x1009beefe*/
            v108 -= 8LL; /*0x1009bef05*/
          }
          while ( v108 ); /*0x1009bef09*/
        }
        v109 = 0; /*0x1009bef0b*/
      }
      else
      {
        v109 = v102 + 1; /*0x1009beebc*/
      }
      memcpy(v173, v172, sizeof(v173)); /*0x1009bef21*/
      v174 = v100; /*0x1009bef26*/
      *(_QWORD *)&v175 = 0; /*0x1009bef2d*/
      *((_QWORD *)&v175 + 1) = v109; /*0x1009bef38*/
    }
    else
    {
      *(_OWORD *)__src = v82; /*0x1009bed28*/
      *(_QWORD *)&__src[16] = v80; /*0x1009bed3a*/
      alloc::collections::btree::remove::_$LT$impl$u20$alloc..collections..btree..node..Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..Leaf$GT$$C$alloc..collections..btree..node..marker..KV$GT$$GT$::remove_leaf_kv::heea78c400a4717b0( /*0x1009bed59*/
        v173,
        __src,
        &v182);
    }
    memcpy(v167, &v173[1], sizeof(v167)); /*0x1009bef59*/
    v183 = v174; /*0x1009bef6c*/
    v184 = v175; /*0x1009bef70*/
    if ( v173[0] != 0x8000000000000000LL ) /*0x1009bef89*/
    {
      memcpy(&__src[8], v167, 0xB0u); /*0x1009bef9e*/
      *(_QWORD *)__src = v173[0]; /*0x1009befa3*/
      if ( v173[0] ) /*0x1009befad*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[8], v173[0], 1); /*0x1009befbe*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..analytics..parser..tools..PendingCall$GT$::hc68bf139b01b8fe2(&__src[24]); /*0x1009befca*/
      v78 = v180; /*0x1009befcf*/
      v73 = v183; /*0x1009befd6*/
      v183 = 0; /*0x1009befeb*/
      v79 = v184; /*0x1009beff9*/
      if ( v73 ) /*0x1009beff9*/
        continue; /*0x1009beff9*/
    }
    break;
  }
LABEL_138:
  v110 = v199[59]; /*0x1009befff*/
  if ( !v110 ) /*0x1009bf00d*/
    goto LABEL_161; /*0x1009bf00d*/
  v200 = *((_QWORD *)&v191 + 1); /*0x1009bf01a*/
  v111 = v192; /*0x1009bf01e*/
  v201 = v199[60]; /*0x1009bf02d*/
  v199 += 59; /*0x1009bf037*/
LABEL_140:
  v112 = v110 + 360; /*0x1009bf03b*/
  v202 = v110; /*0x1009bf042*/
  v198 = *(unsigned __int16 *)(v110 + 626); /*0x1009bf04d*/
  v113 = 3LL * (unsigned int)(8 * v198); /*0x1009bf058*/
  v114 = -1; /*0x1009bf05c*/
  do /*0x1009bf0b4*/
  {
    if ( !v113 ) /*0x1009bf073*/
    {
      v114 = v198; /*0x1009bf0c0*/
LABEL_150:
      if ( !v201 ) /*0x1009bf0d0*/
        goto LABEL_161; /*0x1009bf0d0*/
      --v201; /*0x1009bf0d6*/
      v110 = *(_QWORD *)(v202 + 8 * v114 + 632); /*0x1009bf0da*/
      goto LABEL_140; /*0x1009bf0e2*/
    }
    v115 = v112 + 24; /*0x1009bf075*/
    v116 = *(_QWORD *)(v112 + 16); /*0x1009bf07d*/
    v117 = v111 - v116; /*0x1009bf084*/
    if ( v111 < v116 ) /*0x1009bf087*/
      v116 = v111; /*0x1009bf087*/
    v118 = memcmp((const void *)v200, *(const void **)(v112 + 8), v116); /*0x1009bf08f*/
    if ( v118 ) /*0x1009bf098*/
      v117 = v118; /*0x1009bf098*/
    v119 = (v117 > 0) - (v117 < 0); /*0x1009bf0a5*/
    ++v114; /*0x1009bf0a7*/
    v113 -= 24; /*0x1009bf0aa*/
    v112 = v115; /*0x1009bf0ae*/
  }
  while ( v119 == 1 ); /*0x1009bf0b4*/
  if ( v119 ) /*0x1009bf0bb*/
    goto LABEL_150; /*0x1009bf0bb*/
  v173[0] = v202; /*0x1009bf0eb*/
  v173[1] = v201; /*0x1009bf0f6*/
  v173[2] = v114; /*0x1009bf0fd*/
  v173[3] = v199; /*0x1009bf108*/
  alloc::collections::btree::map::entry::OccupiedEntry$LT$K$C$V$C$A$GT$::remove_kv::h05c8a99f183e4d98(__src, v173); /*0x1009bf11d*/
  if ( __OFSUB__(-*(_QWORD *)__src, 1) ) /*0x1009bf12f*/
  {
LABEL_161:
    v121 = 1; /*0x1009bf1ba*/
    goto LABEL_162; /*0x1009bf1ba*/
  }
  if ( *(_QWORD *)__src ) /*0x1009bf135*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[8], *(_QWORD *)__src, 1); /*0x1009bf143*/
  v120 = *(_QWORD *)&__src[24]; /*0x1009bf148*/
  v121 = 1; /*0x1009bf15d*/
  if ( *(__int64 *)&__src[24] < (__int64)0x8000000000000002LL ) /*0x1009bf163*/
  {
LABEL_162:
    v124 = v196; /*0x1009bf1bd*/
  }
  else
  {
    v122 = *(_QWORD *)&__src[32]; /*0x1009bf165*/
    v123 = *(_QWORD *)&__src[40]; /*0x1009bf16c*/
    v124 = v196; /*0x1009bf176*/
    if ( *(_QWORD *)&__src[40] ) /*0x1009bf17a*/
    {
      v125 = (_QWORD *)(*(_QWORD *)&__src[32] + 8LL); /*0x1009bf180*/
      do /*0x1009bf197*/
      {
        v126 = *(v125 - 1); /*0x1009bf19d*/
        if ( v126 ) /*0x1009bf1a4*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v125, v126, 1); /*0x1009bf1af*/
          v124 = v196; /*0x1009bf1b4*/
        }
        v125 += 3; /*0x1009bf190*/
        --v123; /*0x1009bf194*/
      }
      while ( v123 ); /*0x1009bf197*/
    }
    if ( v120 ) /*0x1009bf234*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, 24 * v120, 8); /*0x1009bf246*/
      goto LABEL_162; /*0x1009bf24b*/
    }
  }
  v127 = v193; /*0x1009bf1c1*/
  v128 = v194; /*0x1009bf1c5*/
LABEL_164:
  result = codexmate_lib::core::analytics::parser::activity::h5533b66eb59dc9f2( /*0x1009bf1c9*/
             v128,
             v124,
             *((__int64 *)&v191 + 1),
             v192,
             v189,
             v127);
  if ( v121 && v185 ) /*0x1009bf1f2*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v185, 1); /*0x1009bf1fd*/
  if ( (_QWORD)v191 ) /*0x1009bf20c*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v191 + 1), v191, 1); /*0x1009bf21a*/
  return result; /*0x1009be0b0*/
}