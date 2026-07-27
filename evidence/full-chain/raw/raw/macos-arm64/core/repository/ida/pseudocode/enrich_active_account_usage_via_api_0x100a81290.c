// __ZN13codexmate_lib4core10repository35enrich_active_account_usage_via_api @ 0x100a81290 | 基线 same-set
double __fastcall codexmate_lib::core::repository::enrich_active_account_usage_via_api::h09dcf9844bb45405(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        double result,
        double a5)
{
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r10
  unsigned __int8 *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r13
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  _QWORD *v20; // r14
  char v21; // r15
  __int64 v22; // r13
  signed __int64 v23; // rax
  __int64 v24; // r12
  const void *v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdi
  const void *v28; // rsi
  signed __int64 v29; // r13
  __int64 v30; // r12
  const void *v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rbx
  unsigned __int64 *v35; // r12
  __int64 *v36; // r14
  unsigned __int64 *v37; // rsi
  unsigned __int64 v38; // r15
  __int64 *v39; // r12
  size_t v40; // rbx
  void *v41; // r13
  __int64 v42; // r14
  __int64 v43; // r15
  char v44; // r15
  int v45; // edx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r12
  signed __int64 v49; // rcx
  __int64 v50; // rdi
  unsigned __int64 v51; // rsi
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // rsi
  _QWORD *v56; // rdx
  _QWORD *v57; // rax
  __int64 v58; // rsi
  _QWORD *v59; // rdx
  _QWORD *v60; // rax
  unsigned __int64 v61; // r15
  char v62; // r12
  unsigned __int64 v63; // rsi
  _QWORD *v64; // rbx
  void *v65; // rax
  __int64 v66; // rsi
  void *v67; // r15
  _QWORD *v68; // rcx
  char v69; // r15
  unsigned __int64 v70; // rsi
  _QWORD *v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rax
  int v75; // eax
  _QWORD *v76; // rdi
  int v77; // edx
  __int64 v78; // r15
  __int64 v79; // rsi
  _QWORD *v80; // rdx
  _QWORD *v81; // rax
  __int64 v82; // rsi
  _QWORD *v83; // rdx
  _QWORD *v84; // rax
  char v85; // bl
  unsigned __int64 v86; // r12
  __int64 *v87; // r15
  unsigned __int64 v88; // r8
  _QWORD *v89; // rbx
  unsigned __int64 *v90; // r12
  __int64 v91; // rsi
  _QWORD *v92; // r14
  __int64 v93; // rsi
  unsigned __int64 v94; // rbx
  __int64 v95; // r12
  __int64 v96; // rbx
  __int64 v97; // r12
  __int64 v98; // rbx
  int v99; // edx
  int v100; // ecx
  unsigned int v101; // ecx
  __int64 v102; // rbx
  __int64 v103; // r14
  _QWORD *v104; // r15
  __int64 v105; // rsi
  unsigned __int64 v106; // r12
  __int64 v107; // rdi
  __int64 v108; // rsi
  unsigned __int64 *v109; // r12
  unsigned __int64 v110; // r15
  __int64 v111; // r15
  __int64 v112; // r13
  _QWORD *v113; // rsi
  __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rcx
  bool v117; // zf
  __int64 v118; // rbx
  _QWORD *v119; // r14
  int v120; // edx
  __int64 v121; // rax
  _QWORD *v122; // rdi
  _QWORD *v123; // rbx
  __int64 v124; // rsi
  _QWORD __dst[43]; // [rsp+30h] [rbp-680h] BYREF
  unsigned __int64 v126; // [rsp+188h] [rbp-528h] BYREF
  _QWORD __src[47]; // [rsp+190h] [rbp-520h] BYREF
  _QWORD v128[12]; // [rsp+308h] [rbp-3A8h] BYREF
  __int64 v129; // [rsp+368h] [rbp-348h] BYREF
  __int64 v130; // [rsp+370h] [rbp-340h]
  __int64 v131; // [rsp+380h] [rbp-330h]
  __int64 v132; // [rsp+388h] [rbp-328h]
  __int64 v133; // [rsp+398h] [rbp-318h]
  __int64 v134; // [rsp+3A0h] [rbp-310h]
  __int64 v135; // [rsp+3B0h] [rbp-300h]
  __int64 v136; // [rsp+3B8h] [rbp-2F8h]
  __int64 v137; // [rsp+3C0h] [rbp-2F0h]
  __int64 v138; // [rsp+3C8h] [rbp-2E8h]
  __int64 v139; // [rsp+3D0h] [rbp-2E0h]
  __int64 v140; // [rsp+3E0h] [rbp-2D0h]
  __int64 v141; // [rsp+3E8h] [rbp-2C8h]
  __int64 v142; // [rsp+3F8h] [rbp-2B8h]
  __int64 v143; // [rsp+400h] [rbp-2B0h]
  __int64 v144; // [rsp+418h] [rbp-298h] BYREF
  unsigned __int64 *v145; // [rsp+420h] [rbp-290h]
  __int64 v146; // [rsp+428h] [rbp-288h]
  void *v147; // [rsp+430h] [rbp-280h]
  size_t v148; // [rsp+438h] [rbp-278h]
  __int64 v149; // [rsp+440h] [rbp-270h]
  _QWORD *v150; // [rsp+448h] [rbp-268h]
  __int64 v151; // [rsp+450h] [rbp-260h]
  __int64 v152; // [rsp+458h] [rbp-258h]
  __int64 v153; // [rsp+460h] [rbp-250h]
  _QWORD *v154; // [rsp+468h] [rbp-248h]
  __int64 v155; // [rsp+470h] [rbp-240h]
  unsigned __int64 v156; // [rsp+478h] [rbp-238h] BYREF
  __int64 v157; // [rsp+480h] [rbp-230h]
  __int64 v158; // [rsp+488h] [rbp-228h]
  char v159; // [rsp+490h] [rbp-220h]
  _QWORD v160[12]; // [rsp+498h] [rbp-218h] BYREF
  __int64 v161; // [rsp+4F8h] [rbp-1B8h]
  __int64 v162; // [rsp+500h] [rbp-1B0h]
  char v163; // [rsp+508h] [rbp-1A8h]
  _QWORD *v164; // [rsp+510h] [rbp-1A0h]
  __int64 v165; // [rsp+518h] [rbp-198h]
  __int64 v166; // [rsp+520h] [rbp-190h]
  __int64 v167; // [rsp+528h] [rbp-188h]
  char v168; // [rsp+530h] [rbp-180h]
  __int64 v169; // [rsp+538h] [rbp-178h]
  __int64 v170; // [rsp+540h] [rbp-170h]
  __int64 v171; // [rsp+548h] [rbp-168h]
  __int64 v172; // [rsp+550h] [rbp-160h]
  __int64 v173; // [rsp+558h] [rbp-158h]
  _QWORD *v174; // [rsp+560h] [rbp-150h] BYREF
  __int64 v175; // [rsp+568h] [rbp-148h]
  __int64 v176; // [rsp+570h] [rbp-140h]
  __int64 v177; // [rsp+578h] [rbp-138h] BYREF
  __int64 v178; // [rsp+580h] [rbp-130h]
  __int64 v179; // [rsp+590h] [rbp-120h] BYREF
  _QWORD *v180; // [rsp+598h] [rbp-118h]
  __int64 v181; // [rsp+5A0h] [rbp-110h]
  int v182; // [rsp+5ACh] [rbp-104h] BYREF
  int v183; // [rsp+5B0h] [rbp-100h]
  int v184; // [rsp+5B4h] [rbp-FCh]
  __int64 v185; // [rsp+5B8h] [rbp-F8h]
  __int64 v186; // [rsp+5C0h] [rbp-F0h]
  __int64 v187; // [rsp+5C8h] [rbp-E8h]
  unsigned __int64 *v188; // [rsp+5D0h] [rbp-E0h]
  unsigned __int64 *v189; // [rsp+5D8h] [rbp-D8h]
  void *v190; // [rsp+5E0h] [rbp-D0h]
  unsigned __int64 *v191; // [rsp+5E8h] [rbp-C8h]
  __int64 v192; // [rsp+5F0h] [rbp-C0h]
  _QWORD *v193; // [rsp+5F8h] [rbp-B8h]
  int v194; // [rsp+600h] [rbp-B0h]
  int v195; // [rsp+604h] [rbp-ACh]
  __int64 v196; // [rsp+608h] [rbp-A8h]
  _QWORD *v197; // [rsp+610h] [rbp-A0h]
  __int64 v198; // [rsp+618h] [rbp-98h]
  unsigned __int64 *v199; // [rsp+620h] [rbp-90h]
  int v200; // [rsp+628h] [rbp-88h]
  int v201; // [rsp+62Ch] [rbp-84h]
  size_t __n; // [rsp+630h] [rbp-80h]
  _QWORD *v203; // [rsp+638h] [rbp-78h] BYREF
  __int64 v204; // [rsp+640h] [rbp-70h]
  __int64 v205; // [rsp+648h] [rbp-68h]
  __int64 v206; // [rsp+650h] [rbp-60h]
  char v207; // [rsp+65Fh] [rbp-51h]
  _QWORD *v208; // [rsp+660h] [rbp-50h] BYREF
  __int64 v209; // [rsp+668h] [rbp-48h]
  __int64 v210; // [rsp+670h] [rbp-40h]
  unsigned __int64 v211; // [rsp+678h] [rbp-38h]
  _QWORD *v212; // [rsp+680h] [rbp-30h]

  v149 = a3; /*0x100a812a4*/
  v150 = a2; /*0x100a812ab*/
  v212 = a1; /*0x100a812b2*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v126); /*0x100a812bd*/
  v5 = ((int)v126 >> 13) - 1; /*0x100a812cd*/
  v6 = 0; /*0x100a812d0*/
  if ( (int)v126 >> 13 <= 0 ) /*0x100a812d4*/
  {
    v7 = (1 - ((int)v126 >> 13)) / 0x190u + 1; /*0x100a812e8*/
    v5 += 400 * v7; /*0x100a812f0*/
    v6 = -146097 * v7; /*0x100a812f2*/
  }
  v8 = LODWORD(__src[0]); /*0x100a81328*/
  v9 = HIDWORD(v126) /*0x100a81345*/
     + 86400LL
     * (int)(((v5 / 100) >> 2) + ((1461 * v5) >> 2) + v6 + (((unsigned int)v126 >> 4) & 0x1FF) - v5 / 100 - 719163);
  v10 = v212[103]; /*0x100a81353*/
  if ( v10 ) /*0x100a8135d*/
  {
    v11 = v212[102]; /*0x100a8135f*/
    v12 = v212[103] & 3LL; /*0x100a81368*/
    if ( v10 >= 4 ) /*0x100a8136f*/
    {
      v10 &= 0xFFFFFFFFFFFFFFFCLL; /*0x100a81380*/
      v14 = (unsigned __int8 *)(v11 + 1393); /*0x100a81384*/
      v8 = 0; /*0x100a8138b*/
      v13 = 0; /*0x100a8138d*/
      do /*0x100a813c6*/
      {
        v13 += *(v14 - 1056) + *(v14 - 704) + (unsigned __int64)*(v14 - 352) + *v14; /*0x100a813b5*/
        v8 += 4LL; /*0x100a813b8*/
        v14 += 1408; /*0x100a813bc*/
      }
      while ( v10 != v8 ); /*0x100a813c6*/
    }
    else
    {
      v8 = 0; /*0x100a81371*/
      v13 = 0; /*0x100a81373*/
    }
    if ( v12 ) /*0x100a813cb*/
    {
      v15 = 352 * v8 + v11 + 337; /*0x100a813d4*/
      v16 = 352 * v12; /*0x100a813dc*/
      v10 = 0; /*0x100a813e3*/
      do /*0x100a81401*/
      {
        v8 = *(unsigned __int8 *)(v15 + v10); /*0x100a813f0*/
        v13 += v8; /*0x100a813f4*/
        v10 += 352LL; /*0x100a813f7*/
      }
      while ( v16 != v10 ); /*0x100a81401*/
    }
  }
  else
  {
    v13 = 0; /*0x100a81378*/
  }
  v198 = v13; /*0x100a81403*/
  v17 = 1000 * v9; /*0x100a8140a*/
  v18 = LODWORD(__src[0]) / 0xF4240uLL; /*0x100a81411*/
  v19 = 0x8000000000000000LL; /*0x100a81415*/
  v20 = v212; /*0x100a8141f*/
  v21 = *((_BYTE *)v212 + 136); /*0x100a81423*/
  if ( !__OFSUB__(0, v212[14]) ) /*0x100a81431*/
  {
    v10 = (unsigned __int64)(v212 + 14); /*0x100a81433*/
    v8 = (unsigned __int64)&v126; /*0x100a81437*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v126, v212 + 14); /*0x100a8143e*/
    v19 = v126; /*0x100a81443*/
    __dst[0] = __src[0]; /*0x100a81451*/
    __dst[1] = __src[1]; /*0x100a8145f*/
  }
  v22 = v18 + v17; /*0x100a81466*/
  v159 = v21; /*0x100a81469*/
  v211 = v19; /*0x100a81470*/
  v156 = v19; /*0x100a81474*/
  v157 = __dst[0]; /*0x100a81489*/
  v158 = __dst[1]; /*0x100a81490*/
  v23 = v20[71]; /*0x100a81497*/
  __n = v23; /*0x100a8149e*/
  if ( v23 < 0 ) /*0x100a814a5*/
  {
    v24 = 0; /*0x100a814a7*/
    goto LABEL_16; /*0x100a814a7*/
  }
  v25 = (const void *)v20[70]; /*0x100a814bb*/
  v169 = v22; /*0x100a814c2*/
  if ( v23 ) /*0x100a814c9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v10); /*0x100a814cb*/
    v24 = 1; /*0x100a814d0*/
    v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100a814df*/
    if ( !v26 ) /*0x100a814e7*/
LABEL_16:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, __n); /*0x100a814aa*/
    v27 = v26; /*0x100a814e9*/
  }
  else
  {
    v27 = 1; /*0x100a814ee*/
  }
  v190 = (void *)v27; /*0x100a814f3*/
  v28 = v25; /*0x100a814fa*/
  memcpy((void *)v27, v25, __n); /*0x100a81501*/
  v29 = v212[68]; /*0x100a8150a*/
  if ( v29 < 0 ) /*0x100a81514*/
  {
    v30 = 0; /*0x100a81516*/
    goto LABEL_23; /*0x100a81516*/
  }
  v31 = (const void *)v212[67]; /*0x100a81529*/
  if ( v29 ) /*0x100a81530*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v28); /*0x100a81532*/
    v30 = 1; /*0x100a81537*/
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v29, 1); /*0x100a81545*/
    if ( !v32 ) /*0x100a8154d*/
LABEL_23:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, v29); /*0x100a81519*/
    v33 = v32; /*0x100a8154f*/
  }
  else
  {
    v33 = 1; /*0x100a81554*/
  }
  v192 = v33; /*0x100a81559*/
  memcpy((void *)v33, v31, v29); /*0x100a81566*/
  codexmate_lib::core::repository::collect_account_api_contexts::h971697002a904cf0(&v144, v212, 1); /*0x100a8157b*/
  v34 = v146; /*0x100a81587*/
  v189 = v145; /*0x100a815a0*/
  v191 = &v145[36 * v146]; /*0x100a815a7*/
  v206 = v29; /*0x100a815ae*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hcd33dec7b598c10d(&v179); /*0x100a815b2*/
  v182 = v198; /*0x100a815be*/
  v183 = 0; /*0x100a815c6*/
  v184 = v198 - v34; /*0x100a815d0*/
  v185 = 0; /*0x100a815d6*/
  v186 = 0; /*0x100a815e1*/
  v187 = 0; /*0x100a815ec*/
  if ( v34 ) /*0x100a815fa*/
  {
    v198 = (unsigned int)(v198 - v34); /*0x100a81600*/
    v35 = v189; /*0x100a8160e*/
    __src[43] = v189; /*0x100a81615*/
    v153 = v144; /*0x100a8161c*/
    __src[45] = v144; /*0x100a81623*/
    __src[46] = v191; /*0x100a81631*/
    v197 = v212 + 107; /*0x100a81643*/
    v193 = v212 + 110; /*0x100a81651*/
    v154 = v212 + 96; /*0x100a8165f*/
    v196 = 0; /*0x100a81666*/
    v36 = &v129; /*0x100a81678*/
    v200 = 0; /*0x100a8167f*/
    v201 = 0; /*0x100a81689*/
    v194 = 0; /*0x100a81693*/
    v195 = 0; /*0x100a8169d*/
    while ( 1 ) /*0x100a816e2*/
    {
      v188 = v35 + 36; /*0x100a816e2*/
      __src[44] = v35 + 36; /*0x100a816e9*/
      v38 = *v35; /*0x100a816f0*/
      memcpy(__dst, v35 + 1, 0x118u); /*0x100a81701*/
      if ( v38 == 2 ) /*0x100a8170a*/
      {
        v109 = v35 + 36; /*0x100a829a8*/
        v37 = v191; /*0x100a829af*/
        goto LABEL_214; /*0x100a829b6*/
      }
      v199 = v35; /*0x100a81710*/
      v126 = v38; /*0x100a81717*/
      memcpy(__src, __dst, 0x118u); /*0x100a8172d*/
      _$LT$codexmate_lib..core..auth..AuthFile$u20$as$u20$core..clone..Clone$GT$::clone::h7f753630bb677f25( /*0x100a8173c*/
        v36,
        &__src[12]);
      v39 = v36; /*0x100a81741*/
      v40 = __n; /*0x100a81752*/
      v41 = v190; /*0x100a8175b*/
      v42 = v206; /*0x100a81767*/
      v147 = (void *)__src[10]; /*0x100a8177e*/
      v148 = __src[11]; /*0x100a81785*/
      v43 = v192; /*0x100a81796*/
      codexmate_lib::core::oauth_refresh::refresh_token_with_policy::h554e0eb1f76208d0( /*0x100a817a0*/
        &v177,
        (void *)__src[10],
        __src[11],
        v39,
        (__int64)&v156,
        v192,
        v206,
        v190,
        __n,
        0);
      codexmate_lib::core::repository::fetch_usage_with_one_auth_retry::h7ce298249954331d( /*0x100a817e9*/
        v160,
        v147,
        v148,
        v39,
        &v177,
        (__int64)&v156,
        v43,
        v42,
        v41,
        v40,
        1u);
      v36 = v39; /*0x100a817ee*/
      qmemcpy(v128, v160, sizeof(v128)); /*0x100a81804*/
      v44 = v161; /*0x100a81807*/
      codexmate_lib::core::repository::log_token_refresh_outcome::h6593a802355651d2( /*0x100a81822*/
        (__int64)"active_usage",
        12,
        (__int64)&v177);
      v208 = (_QWORD *)std::time::SystemTime::now::h1fe79e41f9d5677f("active_usage", 12); /*0x100a8182c*/
      LODWORD(v209) = v45; /*0x100a81830*/
      std::time::SystemTime::duration_since::had059553cab94f96(v160, &v208, 0, 0); /*0x100a81842*/
      v47 = 0; /*0x100a8184e*/
      v48 = 0; /*0x100a81853*/
      if ( !LOBYTE(v160[0]) ) /*0x100a81859*/
        v48 = v160[1]; /*0x100a8185b*/
      if ( v135 != 0x8000000000000000LL ) /*0x100a81873*/
      {
        if ( (codexmate_lib::core::oauth_refresh::token_remaining_seconds::h718707a516734df6(v136, v137) & 1) != 0 ) /*0x100a8188a*/
        {
          v46 += v48; /*0x100a8188c*/
          v47 = 1; /*0x100a8188f*/
        }
        else
        {
          v47 = 0; /*0x100a818a0*/
        }
      }
      v49 = v177; /*0x100a818a2*/
      v50 = 4; /*0x100a818ac*/
      if ( v177 < 0 ) /*0x100a818b1*/
        v50 = (unsigned int)v177; /*0x100a818b1*/
      v51 = 0x8000000000000002LL; /*0x100a818be*/
      if ( v177 < (__int64)0x8000000000000002LL ) /*0x100a818c5*/
        break; /*0x100a818c5*/
      v198 = (unsigned int)(v198 + 1); /*0x100a8190a*/
      v52 = __src[34]; /*0x100a81911*/
      if ( __src[34] < v212[103] ) /*0x100a81923*/
        goto LABEL_44; /*0x100a81923*/
LABEL_45:
      if ( v44 ) /*0x100a81952*/
      {
        ++v200; /*0x100a81958*/
        ++*((_DWORD *)v212 + 226); /*0x100a81962*/
        if ( v49 >= (__int64)0x8000000000000002LL ) /*0x100a8196b*/
        {
          v196 = (unsigned int)(v196 + 1); /*0x100a8197a*/
          if ( LODWORD(v128[0]) == 11 ) /*0x100a81988*/
            goto LABEL_97; /*0x100a81988*/
          v208 = nullptr; /*0x100a8198e*/
          v209 = 1; /*0x100a81996*/
          v210 = 0; /*0x100a8199e*/
          v160[2] = 1610612768; /*0x100a819a6*/
          v160[0] = &v208; /*0x100a819b5*/
          v160[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a819c3*/
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100a819d8*/
                                  v128,
                                  v160) )
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a82c81*/
              &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
              55,
              &v174,
              &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
              &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
          v203 = v208; /*0x100a819ed*/
          v204 = v209; /*0x100a819f1*/
          v205 = v210; /*0x100a819f9*/
          v55 = *v197; /*0x100a81a04*/
          if ( *v197 != 0x8000000000000000LL && v55 ) /*0x100a81a19*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212[108], v55, 1); /*0x100a81a2b*/
          v56 = v197; /*0x100a81a34*/
          v197[2] = v205; /*0x100a81a3b*/
          v57 = v203; /*0x100a81a3f*/
          v56[1] = v204; /*0x100a81a47*/
          *v56 = v57; /*0x100a81a4b*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v160, &__src[3]); /*0x100a81a5c*/
          v210 = v160[2]; /*0x100a81a68*/
          v209 = v160[1]; /*0x100a81a7a*/
          v208 = (_QWORD *)v160[0]; /*0x100a81a7e*/
          v58 = *v193; /*0x100a81a89*/
          if ( *v193 != 0x8000000000000000LL && v58 ) /*0x100a81a9e*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212[111], v58, 1); /*0x100a81ab0*/
          v59 = v193; /*0x100a81ab9*/
          v193[2] = v210; /*0x100a81ac0*/
          v60 = v208; /*0x100a81ac4*/
          v59[1] = v209; /*0x100a81acc*/
          *v59 = v60; /*0x100a81ad0*/
          v61 = __src[34]; /*0x100a81ad3*/
          v62 = 1; /*0x100a81ada*/
          if ( LODWORD(v128[0]) != 6 ) /*0x100a81ae4*/
            goto LABEL_87; /*0x100a81ae4*/
          if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v128[1]) /*0x100a81b01*/
            || (unsigned __int8)reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v128[1]) )
          {
            v62 = 2; /*0x100a81b0a*/
          }
          if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v128[1]) /*0x100a81b24*/
            || (unsigned __int8)reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v128[1]) )
          {
            v208 = nullptr; /*0x100a81b31*/
            v209 = 1; /*0x100a81b39*/
            v210 = 0; /*0x100a81b41*/
            v160[2] = 1610612768; /*0x100a81b49*/
            v160[0] = &v208; /*0x100a81b58*/
            v160[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a81b66*/
            if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100a81b7b*/
                                    v128,
                                    v160) )
              core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a82cac*/
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
                55,
                &v174,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
            v63 = (unsigned __int64)v208; /*0x100a81b88*/
            v171 = v209; /*0x100a81b90*/
            v152 = v210; /*0x100a81b9b*/
            v64 = v212; /*0x100a81ba2*/
            if ( v61 >= v212[103] ) /*0x100a81bad*/
            {
LABEL_94:
              if ( !(2 * v63) ) /*0x100a81eb9*/
                goto LABEL_95; /*0x100a81ec4*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v63, 1); /*0x100a82089*/
              if ( v128[0] != 11 ) /*0x100a82096*/
                goto LABEL_96; /*0x100a82096*/
              goto LABEL_97; /*0x100a82096*/
            }
          }
          else
          {
LABEL_87:
            v63 = 0x8000000000000000LL; /*0x100a81e1b*/
            v64 = v212; /*0x100a81e25*/
            if ( v61 >= v212[103] ) /*0x100a81e30*/
              goto LABEL_94; /*0x100a81e30*/
          }
          if ( *(_BYTE *)(v64[102] + 352 * v61 + 337) ) /*0x100a81e44*/
          {
            *((_BYTE *)v64 + 1064) = v62; /*0x100a81e4e*/
            v74 = v64[114]; /*0x100a81e55*/
            if ( v74 != 0x8000000000000000LL && v74 ) /*0x100a81e6e*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64[115], v64[114], 1); /*0x100a81e82*/
            v64[114] = v63; /*0x100a81e8a*/
            v64[115] = v171; /*0x100a81e98*/
            v64[116] = v152; /*0x100a81ea6*/
            if ( v128[0] == 11 ) /*0x100a81eb5*/
              goto LABEL_97; /*0x100a81eb5*/
            goto LABEL_96; /*0x100a81eb5*/
          }
          goto LABEL_94; /*0x100a81e4c*/
        }
        v184 = v198; /*0x100a820a8*/
        v183 = v201; /*0x100a820b4*/
        HIDWORD(v186) = v200; /*0x100a820c0*/
        HIDWORD(v187) = v196; /*0x100a820cd*/
        LOBYTE(v188) = v128[0] == 11; /*0x100a820de*/
        if ( LODWORD(v128[0]) != 11 ) /*0x100a820e8*/
        {
          qmemcpy(v160, v128, sizeof(v160)); /*0x100a821dc*/
          v196 = (unsigned int)(v196 + 1); /*0x100a821e1*/
          HIDWORD(v187) = v196; /*0x100a821e8*/
          v203 = nullptr; /*0x100a821ee*/
          v204 = 1; /*0x100a821f6*/
          v205 = 0; /*0x100a821fe*/
          v210 = 1610612768; /*0x100a82206*/
          v208 = &v203; /*0x100a82212*/
          v209 = (__int64)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a8221d*/
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100a82228*/
                                  v160,
                                  &v208) )
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a82cd4*/
              &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
              55,
              &v174,
              &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
              &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
          v174 = v203; /*0x100a8223d*/
          v175 = v204; /*0x100a82244*/
          v176 = v205; /*0x100a8224f*/
          v79 = *v197; /*0x100a8225d*/
          if ( *v197 != 0x8000000000000000LL && v79 ) /*0x100a82272*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212[108], v79, 1); /*0x100a82284*/
          v80 = v197; /*0x100a82290*/
          v197[2] = v176; /*0x100a82297*/
          v81 = v174; /*0x100a8229b*/
          v80[1] = v175; /*0x100a822a9*/
          *v80 = v81; /*0x100a822ad*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v208, &__src[3]); /*0x100a822bb*/
          v205 = v210; /*0x100a822c4*/
          v204 = v209; /*0x100a822d0*/
          v203 = v208; /*0x100a822d4*/
          v82 = *v193; /*0x100a822df*/
          if ( *v193 != 0x8000000000000000LL && v82 ) /*0x100a822f4*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212[111], v82, 1); /*0x100a82306*/
          v83 = v193; /*0x100a8230f*/
          v193[2] = v205; /*0x100a82316*/
          v84 = v203; /*0x100a8231a*/
          v83[1] = v204; /*0x100a82322*/
          *v83 = v84; /*0x100a82326*/
          if ( LODWORD(v160[0]) == 6 ) /*0x100a82330*/
          {
            if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v160[1]) /*0x100a8234d*/
              || (v85 = 1, (unsigned __int8)reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v160[1])) )
            {
              v85 = 2; /*0x100a82358*/
            }
            v86 = __src[34]; /*0x100a8235a*/
            if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v160[1]) /*0x100a82378*/
              || (unsigned __int8)reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v160[1]) )
            {
              v203 = nullptr; /*0x100a82385*/
              v204 = 1; /*0x100a8238d*/
              v205 = 0; /*0x100a82395*/
              v210 = 1610612768; /*0x100a8239d*/
              v208 = &v203; /*0x100a823a9*/
              v209 = (__int64)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a823b4*/
              if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100a823c3*/
                                      v160,
                                      &v208) )
                core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a82cfc*/
                  &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
                  55,
                  &v174,
                  &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
                  &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
              v87 = v36; /*0x100a823d0*/
              v88 = (unsigned __int64)v203; /*0x100a823d3*/
              v172 = v204; /*0x100a823db*/
              v155 = v205; /*0x100a823e6*/
LABEL_158:
              v92 = v212; /*0x100a824ad*/
              if ( v86 < v212[103] && *(_BYTE *)(v212[102] + 352 * v86 + 337) ) /*0x100a824c8*/
              {
                *((_BYTE *)v212 + 1064) = v85; /*0x100a824d2*/
                v93 = v92[114]; /*0x100a824d9*/
                if ( v93 != 0x8000000000000000LL && v93 ) /*0x100a824f2*/
                {
                  v94 = v88; /*0x100a82500*/
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92[115], v93, 1); /*0x100a82503*/
                  v88 = v94; /*0x100a82508*/
                }
                v92[114] = v88; /*0x100a8250b*/
                v92[115] = v172; /*0x100a82519*/
                v92[116] = v155; /*0x100a82527*/
              }
              else if ( 2 * v88 ) /*0x100a82530*/
              {
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, v88, 1); /*0x100a8254c*/
              }
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v160); /*0x100a82558*/
              v36 = v87; /*0x100a8255d*/
              if ( v177 >= (__int64)0x8000000000000004LL ) /*0x100a82578*/
              {
                v90 = v199; /*0x100a82581*/
                if ( v177 ) /*0x100a82588*/
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v178, v177, 1); /*0x100a8259a*/
                goto LABEL_177; /*0x100a8259f*/
              }
              goto LABEL_176; /*0x100a82578*/
            }
            v87 = v36; /*0x100a828c2*/
          }
          else
          {
            v87 = v36; /*0x100a82497*/
            v85 = 1; /*0x100a8249a*/
            v86 = __src[34]; /*0x100a8249c*/
          }
          v88 = 0x8000000000000000LL; /*0x100a824a3*/
          goto LABEL_158; /*0x100a824a3*/
        }
        v75 = v128[1]; /*0x100a820ee*/
        LODWORD(v187) = ++v195; /*0x100a82102*/
        v76 = v212; /*0x100a82108*/
        ++*((_DWORD *)v212 + 227); /*0x100a8210c*/
        if ( v75 == 3 ) /*0x100a82115*/
        {
          if ( __src[34] < v76[103] && *(_BYTE *)(v76[102] + 352LL * __src[34] + 337) == 1 ) /*0x100a82141*/
          {
            *((_BYTE *)v76 + 1064) = 1; /*0x100a82143*/
            v51 = v76[114]; /*0x100a8214a*/
            if ( v51 != 0x8000000000000000LL && v51 ) /*0x100a82163*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[115], v51, 1); /*0x100a82174*/
            v76[114] = 0x8000000000000000LL; /*0x100a82186*/
          }
          v208 = (_QWORD *)std::time::SystemTime::now::h1fe79e41f9d5677f(v76, v51); /*0x100a82192*/
          LODWORD(v209) = v77; /*0x100a82196*/
          std::time::SystemTime::duration_since::had059553cab94f96(v160, &v208, 0, 0); /*0x100a821a8*/
          if ( LOBYTE(v160[0]) ) /*0x100a821b4*/
            v78 = 0; /*0x100a825a4*/
          else
            v78 = v160[1]; /*0x100a821ba*/
          if ( __src[34] < v212[103] ) /*0x100a825b9*/
          {
            v95 = v212[102]; /*0x100a825bf*/
            v96 = 352LL * __src[34]; /*0x100a825c6*/
            *(_QWORD *)(v95 + v96 + 80) = 2; /*0x100a825cd*/
            *(_QWORD *)(v95 + v96 + 120) = 2; /*0x100a825d6*/
            *(_BYTE *)(v95 + v96 + 338) = 1; /*0x100a825df*/
            *(_QWORD *)(v95 + v96 + 64) = 1; /*0x100a825e8*/
            *(_QWORD *)(v95 + v96 + 72) = v78; /*0x100a825f1*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v208, &__src[3]); /*0x100a82601*/
            v97 = v96 + v95; /*0x100a82606*/
            v98 = *(_QWORD *)(v97 + 160); /*0x100a82609*/
            if ( v98 != 2 ) /*0x100a82615*/
            {
              v207 = *(_BYTE *)(v97 + 176); /*0x100a82620*/
              v173 = *(_QWORD *)(v97 + 168); /*0x100a8262b*/
            }
            chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v203); /*0x100a82636*/
            v99 = ((int)v203 >> 13) - 1; /*0x100a82643*/
            v100 = 0; /*0x100a82646*/
            if ( (int)v203 >> 13 <= 0 ) /*0x100a8264f*/
            {
              v101 = (1 - ((int)v203 >> 13)) / 0x190u + 1; /*0x100a82663*/
              v99 += 400 * v101; /*0x100a8266b*/
              v100 = -146097 * v101; /*0x100a8266d*/
            }
            v166 = v210; /*0x100a826e4*/
            v165 = v209; /*0x100a826f0*/
            v164 = v208; /*0x100a826f4*/
            v167 = v78; /*0x100a826f7*/
            v168 = 1; /*0x100a826fe*/
            v160[2] = 2; /*0x100a82705*/
            v160[7] = 2; /*0x100a82710*/
            v161 = v98; /*0x100a8271b*/
            v162 = v173; /*0x100a82722*/
            v163 = v207; /*0x100a82729*/
            v160[0] = 1; /*0x100a82730*/
            v160[1] = 1000 /*0x100a8273b*/
                    * (HIDWORD(v203)
                     + 86400LL
                     * (int)(((v99 / 100) >> 2)
                           + ((1461 * v99) >> 2)
                           + v100
                           + (((unsigned int)v203 >> 4) & 0x1FF)
                           - v99 / 100
                           - 719163))
                    + (unsigned int)v204 / 0xF4240uLL;
            codexmate_lib::core::quota_store::upsert_item::h053aeb5691e92848(v154, v160, v78); /*0x100a82753*/
          }
        }
        else
        {
          codexmate_lib::core::repository::apply_usage_result::h8817d9c50b687ed7( /*0x100a8240e*/
            v76,
            v150,
            v149,
            &v126,
            (__int64)&v128[1],
            result,
            a5);
          v89 = v212; /*0x100a8241a*/
          if ( __src[34] < v212[103] ) /*0x100a82425*/
          {
            v90 = v199; /*0x100a82441*/
            if ( *(_BYTE *)(v212[102] + 352LL * __src[34] + 337) == 1 ) /*0x100a82448*/
            {
              *((_BYTE *)v212 + 1064) = 1; /*0x100a8244e*/
              v91 = v89[114]; /*0x100a82455*/
              if ( v91 != 0x8000000000000000LL && v91 ) /*0x100a8246e*/
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89[115], v91, 1); /*0x100a8247c*/
              v89[114] = 0x8000000000000000LL; /*0x100a8248b*/
            }
            goto LABEL_177; /*0x100a82492*/
          }
        }
LABEL_176:
        v90 = v199; /*0x100a82758*/
LABEL_177:
        if ( v129 != 0x8000000000000000LL && v129 ) /*0x100a82778*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v129, 1); /*0x100a82786*/
        if ( v131 != 0x8000000000000000LL && v131 ) /*0x100a827a4*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1); /*0x100a827b2*/
        if ( v133 != 0x8000000000000000LL && v133 ) /*0x100a827d0*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v133, 1); /*0x100a827de*/
        if ( v135 != 0x8000000000000000LL && v135 ) /*0x100a827fc*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136, v135, 1); /*0x100a8280a*/
        if ( v138 != 0x8000000000000000LL && v138 ) /*0x100a82828*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v138, 1); /*0x100a82836*/
        if ( v140 != 0x8000000000000000LL && v140 ) /*0x100a82854*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, v140, 1); /*0x100a82862*/
        if ( v142 != 0x8000000000000000LL && v142 ) /*0x100a82880*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, v142, 1); /*0x100a8288e*/
        v35 = v90 + 36; /*0x100a82893*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::hc966ec4ee6566445(&v126); /*0x100a828a1*/
        v37 = v191; /*0x100a828a6*/
        if ( v35 == v191 ) /*0x100a828b7*/
        {
LABEL_213:
          v109 = v37; /*0x100a829b8*/
LABEL_214:
          v184 = v198; /*0x100a829bb*/
          v183 = v201; /*0x100a829e1*/
          HIDWORD(v186) = v200; /*0x100a829ed*/
          HIDWORD(v187) = v196; /*0x100a829fa*/
          if ( v37 != v109 ) /*0x100a82a03*/
          {
            v110 = ((char *)v37 - (char *)v109) / 0x120uLL; /*0x100a82a08*/
            do /*0x100a82a22*/
            {
              core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::hc966ec4ee6566445(v109); /*0x100a82a13*/
              v109 += 36; /*0x100a82a18*/
              --v110; /*0x100a82a1f*/
            }
            while ( v110 ); /*0x100a82a22*/
          }
          v106 = v211; /*0x100a82a2e*/
          if ( v153 ) /*0x100a82a32*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189, 288 * v153, 8); /*0x100a82a48*/
          v111 = (__int64)v180; /*0x100a82a4d*/
          v112 = v181; /*0x100a82a54*/
          v113 = v180; /*0x100a82a5f*/
          result = codexmate_lib::core::repository::sync_token_status_to_quota_store::h945cce6b53563565( /*0x100a82a65*/
                     v212,
                     (__int64)v180,
                     v181,
                     result,
                     a5);
          v115 = v212[102] - 352LL; /*0x100a82a75*/
          v116 = 352LL * v212[103]; /*0x100a82a7c*/
          while ( v116 ) /*0x100a82a93*/
          {
            v113 = (_QWORD *)(v115 + 352); /*0x100a82a95*/
            v116 -= 352; /*0x100a82a9c*/
            v117 = *(_BYTE *)(v115 + 689) == 1; /*0x100a82aa3*/
            v115 += 352; /*0x100a82aaa*/
            if ( v117 ) /*0x100a82aad*/
            {
              _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a( /*0x100a82ab6*/
                &v126,
                v113,
                v114,
                v116);
              v118 = v126; /*0x100a82abb*/
              v113 = __src; /*0x100a82ac2*/
              memcpy(__dst, __src, sizeof(__dst)); /*0x100a82ad5*/
              v119 = v212; /*0x100a82ada*/
              if ( *((_DWORD *)v212 + 38) == 2 ) /*0x100a82ae6*/
                goto LABEL_226; /*0x100a82ae6*/
              goto LABEL_225; /*0x100a82ae6*/
            }
          }
          v118 = 2; /*0x100a82aea*/
          v119 = v212; /*0x100a82aef*/
          if ( *((_DWORD *)v212 + 38) == 2 ) /*0x100a82afb*/
            goto LABEL_226; /*0x100a82afb*/
LABEL_225:
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f( /*0x100a82afd*/
            v119 + 19,
            v113);
LABEL_226:
          v119[19] = v118; /*0x100a82b09*/
          memcpy(v119 + 20, __dst, 0x158u); /*0x100a82b23*/
          __dst[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v119 + 20, __dst); /*0x100a82b2d*/
          LODWORD(__dst[1]) = v120; /*0x100a82b34*/
          std::time::SystemTime::duration_since::had059553cab94f96(&v126, __dst, 0, 0); /*0x100a82b4c*/
          if ( (_BYTE)v126 ) /*0x100a82b58*/
            v121 = 0; /*0x100a82b63*/
          else
            v121 = __src[0]; /*0x100a82b5a*/
          v122 = v212; /*0x100a82b65*/
          v212[132] = v121; /*0x100a82b69*/
          v126 = 0x8000000000000000LL; /*0x100a82b7a*/
          codexmate_lib::core::repository::finish_refresh_report::h7931537c55f4f067( /*0x100a82b9b*/
            (__int64)v122,
            1u,
            &v126,
            v169,
            &v182);
          if ( v112 ) /*0x100a82ba3*/
          {
            v123 = (_QWORD *)(v111 + 8); /*0x100a82ba5*/
            do /*0x100a82bb7*/
            {
              v124 = *(v123 - 1); /*0x100a82bb9*/
              if ( v124 ) /*0x100a82bc0*/
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v123, v124, 1); /*0x100a82bca*/
              v123 += 3; /*0x100a82bb0*/
              --v112; /*0x100a82bb4*/
            }
            while ( v112 ); /*0x100a82bb7*/
          }
          if ( v179 ) /*0x100a82bdb*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, 24 * v179, 8); /*0x100a82bed*/
          v108 = v206; /*0x100a82bf2*/
          if ( v206 ) /*0x100a82bf9*/
          {
            v107 = v192; /*0x100a82c00*/
LABEL_238:
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v108, 1); /*0x100a82c07*/
          }
          goto LABEL_239; /*0x100a82c07*/
        }
      }
      else
      {
        if ( v49 < (__int64)0x8000000000000002LL ) /*0x100a81bc3*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v50, 0x8000000000000002LL); /*0x100a81bc9*/
          v65 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1); /*0x100a81bd8*/
          if ( !v65 ) /*0x100a81be0*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 53); /*0x100a82d0d*/
          qmemcpy(v65, "refreshed account snapshot has no API request context", 53); /*0x100a81c44*/
          v66 = *v197; /*0x100a81c4e*/
          if ( *v197 != 0x8000000000000000LL && v66 ) /*0x100a81c63*/
          {
            v67 = v65; /*0x100a81c75*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212[108], v66, 1); /*0x100a81c78*/
            v65 = v67; /*0x100a81c7d*/
          }
          v68 = v212; /*0x100a81c80*/
          v212[107] = 53; /*0x100a81c84*/
          v68[108] = v65; /*0x100a81c8f*/
          v68[109] = 53; /*0x100a81c96*/
          if ( v128[0] == 11 ) /*0x100a81ca9*/
            goto LABEL_97; /*0x100a81ca9*/
LABEL_96:
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v128); /*0x100a81eda*/
          goto LABEL_97; /*0x100a81ee1*/
        }
        codexmate_lib::core::api_client::test_api_connectivity::h010670e6f25f2492( /*0x100a81cd0*/
          (__int64)v160,
          (__int64)&v156,
          0,
          result,
          a5);
        v69 = v160[7]; /*0x100a81cd5*/
        v70 = 0x8000000000000000LL; /*0x100a81cdd*/
        if ( !LOBYTE(v160[7]) ) /*0x100a81cea*/
        {
          v151 = v160[5]; /*0x100a81cf3*/
          v170 = v160[4]; /*0x100a81d01*/
          v70 = v160[3]; /*0x100a81d08*/
        }
        v71 = v212; /*0x100a81d16*/
        if ( __src[34] < v212[103] && *(_BYTE *)(v212[102] + 352LL * __src[34] + 337) ) /*0x100a81d35*/
        {
          *((_BYTE *)v212 + 1064) = 2 - LOBYTE(v160[7]); /*0x100a81d44*/
          v72 = v71[114]; /*0x100a81d4a*/
          if ( v72 != 0x8000000000000000LL && v72 ) /*0x100a81d63*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71[115], v71[114], 1); /*0x100a81d77*/
          v71[114] = v70; /*0x100a81d7f*/
          v71[115] = v170; /*0x100a81d8d*/
          v71[116] = v151; /*0x100a81d9b*/
          v73 = v160[0]; /*0x100a81da2*/
          if ( !v160[0] ) /*0x100a81dac*/
            goto LABEL_83; /*0x100a81dac*/
LABEL_82:
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160[1], v73, 1); /*0x100a81dcd*/
          goto LABEL_83; /*0x100a81dd9*/
        }
        if ( !(2 * v70) ) /*0x100a81db0*/
        {
          v73 = v160[0]; /*0x100a81dc1*/
          if ( !v160[0] ) /*0x100a81dcb*/
            goto LABEL_83; /*0x100a81dcb*/
          goto LABEL_82; /*0x100a81dcb*/
        }
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v170, v70, 1); /*0x100a82063*/
        v73 = v160[0]; /*0x100a82068*/
        if ( v160[0] ) /*0x100a82072*/
          goto LABEL_82; /*0x100a82072*/
LABEL_83:
        if ( !v69 || !v160[3] ) /*0x100a81df1*/
        {
LABEL_95:
          if ( v128[0] == 11 ) /*0x100a81ed8*/
            goto LABEL_97; /*0x100a81ed8*/
          goto LABEL_96; /*0x100a81ed8*/
        }
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160[4], v160[3], 1); /*0x100a81e03*/
        if ( v128[0] != 11 ) /*0x100a81e10*/
          goto LABEL_96; /*0x100a81e10*/
LABEL_97:
        if ( v177 >= (__int64)0x8000000000000004LL && v177 ) /*0x100a81f03*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v178, v177, 1); /*0x100a81f11*/
        if ( v129 != 0x8000000000000000LL && v129 ) /*0x100a81f2f*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v129, 1); /*0x100a81f3d*/
        if ( v131 != 0x8000000000000000LL && v131 ) /*0x100a81f5b*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1); /*0x100a81f69*/
        if ( v133 != 0x8000000000000000LL && v133 ) /*0x100a81f87*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v133, 1); /*0x100a81f95*/
        if ( v135 != 0x8000000000000000LL && v135 ) /*0x100a81fb3*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136, v135, 1); /*0x100a81fc1*/
        if ( v138 != 0x8000000000000000LL && v138 ) /*0x100a81fdf*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v138, 1); /*0x100a81fed*/
        if ( v140 != 0x8000000000000000LL && v140 ) /*0x100a8200b*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, v140, 1); /*0x100a82019*/
        if ( v142 != 0x8000000000000000LL && v142 ) /*0x100a8203b*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, v142, 1); /*0x100a8204d*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::hc966ec4ee6566445(&v126); /*0x100a816b7*/
        v37 = v191; /*0x100a816bc*/
        v35 = v188; /*0x100a816c3*/
        if ( v188 == v191 ) /*0x100a816d4*/
          goto LABEL_213; /*0x100a816d4*/
      }
    }
    v201 = ++v194; /*0x100a818d8*/
    v52 = __src[34]; /*0x100a818df*/
    if ( __src[34] >= v212[103] ) /*0x100a818f1*/
      goto LABEL_45; /*0x100a818f1*/
LABEL_44:
    v53 = v212[102]; /*0x100a81925*/
    v54 = 352 * v52; /*0x100a81930*/
    *(_QWORD *)(v53 + v54 + 160) = v47; /*0x100a81937*/
    *(_QWORD *)(v53 + v54 + 168) = v46; /*0x100a8193f*/
    *(_BYTE *)(v53 + v54 + 176) = v50; /*0x100a81947*/
    goto LABEL_45; /*0x100a81947*/
  }
  v126 = 0x8000000000000000LL; /*0x100a828d4*/
  codexmate_lib::core::repository::finish_refresh_report::h7931537c55f4f067((__int64)v212, 1u, &v126, v169, &v182); /*0x100a828f9*/
  v102 = (__int64)v180; /*0x100a828fe*/
  v103 = v181; /*0x100a82905*/
  if ( v181 ) /*0x100a8290f*/
  {
    v104 = v180 + 1; /*0x100a82911*/
    do /*0x100a82927*/
    {
      v105 = *(v104 - 1); /*0x100a82929*/
      if ( v105 ) /*0x100a82930*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v104, v105, 1); /*0x100a8293a*/
      v104 += 3; /*0x100a82920*/
      --v103; /*0x100a82924*/
    }
    while ( v103 ); /*0x100a82927*/
  }
  if ( v179 ) /*0x100a8294b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, 24 * v179, 8); /*0x100a8295d*/
  v106 = v211; /*0x100a8296c*/
  if ( v144 ) /*0x100a82970*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189, 288 * v144, 8); /*0x100a82986*/
  if ( v29 ) /*0x100a8298e*/
  {
    v107 = v192; /*0x100a82999*/
    v108 = v29; /*0x100a829a0*/
    goto LABEL_238; /*0x100a829a3*/
  }
LABEL_239:
  if ( __n ) /*0x100a82c13*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, __n, 1); /*0x100a82c21*/
  if ( v106 != 0x8000000000000000LL ) /*0x100a82c33*/
  {
    if ( v106 ) /*0x100a82c38*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v106, 1); /*0x100a82c49*/
  }
  return result; /*0x100a82c4e*/
}