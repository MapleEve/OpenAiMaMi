// __ZN13codexmate_lib4core10repository48enrich_accounts_via_api_with_subscription_policy @ 0x100a83600
// 1.2.3 NEW-delta | codexmate_lib::core::repository::enrich_accounts_via_api_with_subscription_policy | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
unsigned __int64 *__fastcall codexmate_lib::core::repository::enrich_accounts_via_api_with_subscription_policy::h5e1e2136bd5f5cf1(
        unsigned __int64 *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5)
{
  unsigned int v5; // ebx
  int v6; // r13d
  int v7; // r14d
  unsigned int v8; // eax
  __int64 v9; // r12
  char v10; // r15
  unsigned __int64 v11; // rax
  _QWORD *v12; // rsi
  int v13; // r15d
  __int64 v14; // rcx
  _QWORD *v15; // r14
  signed __int64 v16; // rbx
  __int64 v17; // r12
  unsigned __int64 *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdi
  const void *v28; // r13
  __int64 v29; // rax
  __int64 v30; // r15
  const void *v31; // rsi
  signed __int64 v32; // rbx
  __int64 v33; // r12
  const void *v34; // r13
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v40; // r12
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rbx
  _BYTE *v47; // r14
  __int64 v48; // r13
  unsigned __int64 v49; // rax
  int v50; // eax
  _BYTE *v51; // rdx
  int v52; // ecx
  unsigned int v53; // esi
  unsigned int v54; // edi
  unsigned int v55; // r8d
  unsigned int v56; // r9d
  unsigned int v57; // r10d
  unsigned int v58; // r11d
  int v59; // ebx
  bool v60; // r14
  bool v61; // r13
  char v62; // bl
  unsigned int v63; // r14d
  unsigned int v64; // r14d
  __int64 v65; // rbx
  unsigned int v66; // r14d
  unsigned int v67; // r14d
  __int64 v68; // rax
  __int64 v69; // r9
  __int64 v70; // rcx
  unsigned __int64 v71; // rdx
  __int64 v72; // rsi
  char v73; // di
  __int64 v74; // r8
  __int64 v75; // rdx
  unsigned __int64 *v76; // rsi
  unsigned __int64 v77; // rbx
  __int64 v78; // r12
  unsigned __int64 v79; // r13
  __int64 v80; // rax
  __int64 v81; // r14
  __int64 v82; // rbx
  bool v83; // zf
  void *v84; // rdx
  size_t v85; // rcx
  _QWORD *v86; // rdi
  char v87; // al
  char v88; // cl
  __int64 v89; // r12
  _QWORD *v90; // rdx
  int v91; // edx
  __int64 v92; // rcx
  __int64 v93; // r13
  char v94; // al
  _QWORD *v95; // r14
  __int64 v96; // rsi
  _QWORD *v97; // rdx
  _QWORD *v98; // rax
  __int64 v99; // rsi
  _QWORD *v100; // rdx
  _QWORD *v101; // rax
  char v102; // bl
  unsigned __int64 v103; // r12
  char v104; // r14
  _QWORD *v105; // rdi
  char v106; // al
  _QWORD *v107; // rcx
  __int64 v108; // rax
  char v109; // bl
  unsigned __int64 v110; // rsi
  _QWORD *v111; // rdx
  __int64 v112; // rax
  unsigned __int64 v113; // rsi
  __int64 v114; // r14
  __int64 v115; // rbx
  __int64 v116; // r14
  __int64 v117; // rbx
  int v118; // edx
  int v119; // ecx
  unsigned int v120; // ecx
  int v121; // edx
  __int64 v122; // rax
  __int64 v123; // r12
  __int64 v124; // r13
  __int64 v125; // rdx
  __int64 v126; // rdi
  _QWORD *v127; // rsi
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rbx
  int v131; // edx
  __int64 v132; // rax
  unsigned __int64 *v133; // rdx
  unsigned __int64 v134; // rax
  _QWORD *v135; // rbx
  __int64 v136; // rsi
  __int64 v137; // r14
  __int64 v138; // rbx
  _QWORD __dst[45]; // [rsp+8h] [rbp-5C8h] BYREF
  _QWORD v141[3]; // [rsp+170h] [rbp-460h] BYREF
  int v142[3]; // [rsp+18Ch] [rbp-444h] BYREF
  __int64 v143; // [rsp+198h] [rbp-438h]
  __int64 v144; // [rsp+1A0h] [rbp-430h]
  __int64 v145; // [rsp+1A8h] [rbp-428h]
  unsigned __int64 v146; // [rsp+1B0h] [rbp-420h] BYREF
  _QWORD __src[45]; // [rsp+1B8h] [rbp-418h] BYREF
  _QWORD v148[14]; // [rsp+320h] [rbp-2B0h] BYREF
  char v149; // [rsp+390h] [rbp-240h]
  _QWORD *v150; // [rsp+398h] [rbp-238h]
  __int64 (__fastcall **v151)(); // [rsp+3A0h] [rbp-230h]
  __int64 v152; // [rsp+3A8h] [rbp-228h]
  __int64 v153; // [rsp+3B0h] [rbp-220h]
  char v154; // [rsp+3B8h] [rbp-218h]
  __int64 v155; // [rsp+3C0h] [rbp-210h] BYREF
  __int64 v156; // [rsp+3C8h] [rbp-208h]
  __int64 v157; // [rsp+3D0h] [rbp-200h]
  __int64 v158; // [rsp+3D8h] [rbp-1F8h] BYREF
  __int64 v159; // [rsp+3E0h] [rbp-1F0h]
  __int64 v160; // [rsp+3E8h] [rbp-1E8h]
  __int64 v161; // [rsp+3F0h] [rbp-1E0h]
  unsigned __int64 v162; // [rsp+3F8h] [rbp-1D8h]
  __int64 v163; // [rsp+400h] [rbp-1D0h]
  __int64 v164; // [rsp+408h] [rbp-1C8h]
  _QWORD *v165; // [rsp+410h] [rbp-1C0h]
  __int64 v166; // [rsp+418h] [rbp-1B8h]
  __int64 v167; // [rsp+420h] [rbp-1B0h]
  unsigned __int64 v168; // [rsp+428h] [rbp-1A8h] BYREF
  __int64 v169; // [rsp+430h] [rbp-1A0h]
  __int64 v170; // [rsp+438h] [rbp-198h]
  char v171; // [rsp+440h] [rbp-190h]
  signed __int64 v172; // [rsp+448h] [rbp-188h] BYREF
  __int64 v173; // [rsp+450h] [rbp-180h]
  signed __int64 v174; // [rsp+458h] [rbp-178h]
  signed __int64 v175; // [rsp+460h] [rbp-170h] BYREF
  __int64 v176; // [rsp+468h] [rbp-168h]
  signed __int64 v177; // [rsp+470h] [rbp-160h]
  _QWORD *v178; // [rsp+478h] [rbp-158h] BYREF
  __int64 v179; // [rsp+480h] [rbp-150h]
  __int64 v180; // [rsp+488h] [rbp-148h]
  _QWORD *v181; // [rsp+490h] [rbp-140h]
  _QWORD *v182; // [rsp+498h] [rbp-138h]
  __int64 v183; // [rsp+4A0h] [rbp-130h]
  __int64 v184; // [rsp+4A8h] [rbp-128h]
  unsigned __int64 v185; // [rsp+4B0h] [rbp-120h]
  unsigned __int64 v186; // [rsp+4B8h] [rbp-118h]
  unsigned __int64 v187; // [rsp+4C0h] [rbp-110h]
  unsigned __int64 v188; // [rsp+4C8h] [rbp-108h]
  unsigned __int64 v189; // [rsp+4D0h] [rbp-100h]
  unsigned __int64 v190; // [rsp+4D8h] [rbp-F8h]
  __int64 v191; // [rsp+4E0h] [rbp-F0h] BYREF
  __int64 v192; // [rsp+4E8h] [rbp-E8h]
  __int64 v193; // [rsp+4F0h] [rbp-E0h]
  __int64 v194; // [rsp+4F8h] [rbp-D8h]
  int v195; // [rsp+504h] [rbp-CCh] BYREF
  int v196; // [rsp+508h] [rbp-C8h]
  int v197; // [rsp+50Ch] [rbp-C4h]
  unsigned __int64 v198; // [rsp+510h] [rbp-C0h]
  unsigned __int64 v199; // [rsp+518h] [rbp-B8h]
  unsigned __int64 v200; // [rsp+520h] [rbp-B0h]
  unsigned __int64 *v201; // [rsp+528h] [rbp-A8h]
  __int64 v202; // [rsp+530h] [rbp-A0h] BYREF
  __int64 v203; // [rsp+538h] [rbp-98h]
  __int64 v204; // [rsp+540h] [rbp-90h]
  __int64 v205; // [rsp+548h] [rbp-88h]
  volatile signed __int64 *v206; // [rsp+550h] [rbp-80h] BYREF
  __int64 v207; // [rsp+558h] [rbp-78h]
  _QWORD *v208; // [rsp+560h] [rbp-70h] BYREF
  __int64 (__fastcall **v209)(); // [rsp+568h] [rbp-68h]
  __int64 v210; // [rsp+570h] [rbp-60h]
  _QWORD *v211; // [rsp+578h] [rbp-58h] BYREF
  __int64 v212; // [rsp+580h] [rbp-50h]
  __int64 v213; // [rsp+588h] [rbp-48h]
  unsigned __int64 v214; // [rsp+590h] [rbp-40h]
  char v215; // [rsp+599h] [rbp-37h] BYREF
  char v216; // [rsp+59Ah] [rbp-36h] BYREF
  char v217; // [rsp+59Bh] [rbp-35h]
  int v218; // [rsp+59Ch] [rbp-34h]
  _QWORD *v219; // [rsp+5A0h] [rbp-30h]

  v161 = a4; /*0x100a83614*/
  v162 = a3; /*0x100a8361b*/
  v219 = a2; /*0x100a83622*/
  v201 = a1; /*0x100a83626*/
  v216 = a5; /*0x100a8362d*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v146); /*0x100a83638*/
  v5 = v146; /*0x100a8363d*/
  v6 = ((int)v146 >> 13) - 1; /*0x100a83648*/
  v7 = 0; /*0x100a8364c*/
  if ( (int)v146 >> 13 <= 0 ) /*0x100a83651*/
  {
    v8 = (1 - ((int)v146 >> 13)) / 0x190u + 1; /*0x100a83665*/
    v6 += 400 * v8; /*0x100a8366d*/
    v7 = -146097 * v8; /*0x100a83670*/
  }
  v9 = HIDWORD(v146); /*0x100a83681*/
  v214 = LODWORD(__src[0]); /*0x100a8368e*/
  v215 = 1; /*0x100a83692*/
  v181 = v219 + 14; /*0x100a8369e*/
  v10 = *((_BYTE *)v219 + 136); /*0x100a836a5*/
  v11 = 0x8000000000000000LL; /*0x100a836b3*/
  if ( !__OFSUB__(0, v219[14]) ) /*0x100a836b6*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v146, v181); /*0x100a836c6*/
    v11 = v146; /*0x100a836cb*/
    __dst[0] = __src[0]; /*0x100a836d9*/
    __dst[1] = __src[1]; /*0x100a836e7*/
  }
  v171 = v10; /*0x100a836ee*/
  v168 = v11; /*0x100a836f5*/
  v169 = __dst[0]; /*0x100a8370a*/
  v170 = __dst[1]; /*0x100a83711*/
  v12 = v219; /*0x100a83718*/
  v13 = *((_DWORD *)v219 + 206); /*0x100a8371c*/
  codexmate_lib::core::repository::collect_account_api_contexts::h971697002a904cf0(&v202, v219, 0); /*0x100a8372c*/
  v14 = 1000 /*0x100a8378a*/
      * (v9 + 86400LL * (int)(((v6 / 100) >> 2) + ((1461 * v6) >> 2) + v7 + ((v5 >> 4) & 0x1FF) - v6 / 100 - 719163))
      + ((1125899907 * v214) >> 50);
  if ( v204 ) /*0x100a83795*/
  {
    v15 = v219; /*0x100a83797*/
    v16 = v219[71]; /*0x100a837a2*/
    if ( v16 < 0 ) /*0x100a837ac*/
    {
      v17 = 0; /*0x100a837b2*/
      goto LABEL_8; /*0x100a837b2*/
    }
    v214 = (unsigned __int64)(v219 + 101); /*0x100a838e9*/
    v218 = v13; /*0x100a838ed*/
    v163 = v14; /*0x100a838f1*/
    v28 = (const void *)v219[70]; /*0x100a838f8*/
    if ( v16 ) /*0x100a838ff*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v202, v12); /*0x100a83901*/
      v17 = 1; /*0x100a83906*/
      v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x100a83914*/
      if ( !v29 ) /*0x100a8391c*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, v16); /*0x100a837b5*/
      v30 = v29; /*0x100a83922*/
    }
    else
    {
      v30 = 1; /*0x100a83927*/
    }
    v31 = v28; /*0x100a83930*/
    memcpy((void *)v30, v28, v16); /*0x100a83936*/
    v175 = v16; /*0x100a8393b*/
    v176 = v30; /*0x100a83942*/
    v177 = v16; /*0x100a83949*/
    v32 = v15[68]; /*0x100a83950*/
    if ( v32 < 0 ) /*0x100a8395a*/
    {
      v33 = 0; /*0x100a8395c*/
      goto LABEL_22; /*0x100a8395c*/
    }
    v34 = (const void *)v15[67]; /*0x100a8396f*/
    if ( v32 ) /*0x100a83976*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v31); /*0x100a83978*/
      v33 = 1; /*0x100a8397d*/
      v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v32, 1); /*0x100a8398b*/
      if ( !v35 ) /*0x100a83993*/
LABEL_22:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v33, v32); /*0x100a8395f*/
      v36 = v35; /*0x100a83995*/
    }
    else
    {
      v36 = 1; /*0x100a8399a*/
    }
    memcpy((void *)v36, v34, v32); /*0x100a839a9*/
    v172 = v32; /*0x100a839ae*/
    v173 = v36; /*0x100a839b5*/
    v174 = v32; /*0x100a839bc*/
    v146 = 1; /*0x100a839c3*/
    __src[0] = 1; /*0x100a839ce*/
    __src[1] = 0; /*0x100a839d9*/
    LOBYTE(__src[2]) = 0; /*0x100a839e4*/
    memset(&__src[3], 0, 24); /*0x100a839eb*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v34); /*0x100a83a0c*/
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(56, 8); /*0x100a83a1b*/
    if ( !v37 ) /*0x100a83a23*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 56); /*0x100a84c34*/
    *(_QWORD *)(v37 + 48) = __src[5]; /*0x100a83a30*/
    *(_QWORD *)(v37 + 40) = __src[4]; /*0x100a83a3b*/
    *(_QWORD *)(v37 + 32) = __src[3]; /*0x100a83a46*/
    *(_QWORD *)(v37 + 24) = __src[2]; /*0x100a83a51*/
    *(_QWORD *)(v37 + 16) = __src[1]; /*0x100a83a5c*/
    v38 = v146; /*0x100a83a60*/
    *(_QWORD *)(v37 + 8) = __src[0]; /*0x100a83a6e*/
    *(_QWORD *)v37 = v38; /*0x100a83a72*/
    v206 = (volatile signed __int64 *)v37; /*0x100a83a75*/
    v146 = (unsigned __int64)&v202; /*0x100a83a80*/
    __src[0] = &v215; /*0x100a83a8b*/
    __src[1] = &v168; /*0x100a83a99*/
    __src[2] = &v175; /*0x100a83aa7*/
    __src[3] = &v172; /*0x100a83ab5*/
    __src[4] = &v206; /*0x100a83ac0*/
    __src[5] = &v216; /*0x100a83acb*/
    std::thread::scoped::scope::he659f598d8dfdabc(&v158, &v146, &off_101974110); /*0x100a83ae7*/
    v39 = v159; /*0x100a83aec*/
    v40 = v160; /*0x100a83af3*/
    v205 = 368 * v160; /*0x100a83b01*/
    v141[0] = v159; /*0x100a83b0b*/
    v207 = v159 + 368 * v160; /*0x100a83b12*/
    v141[1] = v207; /*0x100a83b16*/
    v141[2] = v214; /*0x100a83b21*/
    v41 = (unsigned __int64)v141; /*0x100a83b2f*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4eba8c5ddfd384d0( /*0x100a83b36*/
      &v155,
      v141);
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100a83b42*/
    v43 = v42; /*0x100a83b44*/
    if ( *(_BYTE *)(v42 + 16) == 1 ) /*0x100a83b4b*/
    {
      v44 = *(_QWORD *)v42; /*0x100a83b51*/
      v45 = *(_QWORD *)(v43 + 8); /*0x100a83b54*/
    }
    else
    {
      v44 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100a84c3b*/
      *(_QWORD *)v43 = v44; /*0x100a84c40*/
      *(_QWORD *)(v43 + 8) = v45; /*0x100a84c43*/
      *(_BYTE *)(v43 + 16) = 1; /*0x100a84c47*/
    }
    *(_QWORD *)v43 = v44 + 1; /*0x100a83b5c*/
    memset(__src, 0, 24); /*0x100a83b82*/
    v146 = (unsigned __int64)&xmmword_1015FBEC0; /*0x100a83b90*/
    __src[3] = v44; /*0x100a83b97*/
    __src[4] = v45; /*0x100a83b9e*/
    if ( !v40 ) /*0x100a83ba8*/
    {
      v190 = __src[4]; /*0x100a847e3*/
      v189 = __src[3]; /*0x100a847f1*/
      v188 = __src[2]; /*0x100a847ff*/
      v187 = __src[1]; /*0x100a8480d*/
      v186 = __src[0]; /*0x100a84822*/
      v185 = v146; /*0x100a84829*/
      v195 = v218; /*0x100a84833*/
      v196 = 0; /*0x100a84839*/
      v197 = v218; /*0x100a84843*/
      v198 = 0; /*0x100a84849*/
      v199 = 0; /*0x100a84854*/
      v200 = 0; /*0x100a8485f*/
      v191 = v39; /*0x100a84871*/
      v192 = v39; /*0x100a84878*/
      v193 = v158; /*0x100a8487f*/
      v194 = v207; /*0x100a8488a*/
      v214 = 0; /*0x100a84891*/
      goto LABEL_153; /*0x100a84899*/
    }
    v214 = v15[102]; /*0x100a83bb5*/
    v46 = v15[103]; /*0x100a83bb9*/
    v47 = (_BYTE *)(v39 + 360); /*0x100a83bc0*/
    v48 = v40; /*0x100a83bc7*/
    do /*0x100a83bda*/
    {
      if ( *v47 == 1 && (unsigned int)*((_QWORD *)v47 - 13) == 11 ) /*0x100a83bed*/
      {
        v49 = *((_QWORD *)v47 - 1); /*0x100a83bef*/
        if ( v49 < v46 ) /*0x100a83bf6*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100a83c12*/
            v148,
            v214 + 352 * v49 + 184);
          if ( v148[0] != 0x8000000000000000LL ) /*0x100a83c28*/
          {
            __dst[2] = v148[2]; /*0x100a83c31*/
            __dst[1] = v148[1]; /*0x100a83c46*/
            __dst[0] = v148[0]; /*0x100a83c4d*/
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v146, __dst); /*0x100a83c62*/
          }
        }
      }
      v47 += 368; /*0x100a83bd0*/
      --v48; /*0x100a83bd7*/
    }
    while ( v48 ); /*0x100a83bda*/
    v190 = __src[4]; /*0x100a83c73*/
    v189 = __src[3]; /*0x100a83c81*/
    v188 = __src[2]; /*0x100a83c8f*/
    v187 = __src[1]; /*0x100a83c9d*/
    v186 = __src[0]; /*0x100a83cb2*/
    v185 = v146; /*0x100a83cb9*/
    v50 = v218 - v40; /*0x100a83cc3*/
    v51 = (_BYTE *)(v39 + 360); /*0x100a83cc6*/
    v52 = 0; /*0x100a83ccd*/
    v53 = 0; /*0x100a83ccf*/
    v54 = 0; /*0x100a83cd1*/
    v55 = 0; /*0x100a83cd3*/
    v56 = 0; /*0x100a83cd6*/
    v57 = 0; /*0x100a83cd9*/
    v58 = 0; /*0x100a83cdc*/
    do /*0x100a83cfa*/
    {
      v59 = v50; /*0x100a83d00*/
      v60 = *((_DWORD *)v51 - 32) != 2; /*0x100a83d02*/
      v61 = *(v51 - 112) < 2u; /*0x100a83d0a*/
      if ( v61 && v60 ) /*0x100a83d0e*/
        v50 = v52; /*0x100a83d11*/
      ++v50; /*0x100a83d14*/
      if ( v61 && v60 ) /*0x100a83d16*/
      {
        v52 = v50; /*0x100a83d19*/
        v50 = v59; /*0x100a83d1c*/
      }
      if ( *((_QWORD *)v51 - 45) ) /*0x100a83d1f*/
      {
        v62 = *(v51 - 136); /*0x100a83d29*/
        v63 = v54; /*0x100a83d32*/
        if ( v62 ) /*0x100a83d35*/
          v63 = v55; /*0x100a83d35*/
        v64 = v63 + 1; /*0x100a83d39*/
        if ( v62 ) /*0x100a83d3e*/
          v55 = v64; /*0x100a83d42*/
        else
          v54 = v64; /*0x100a83d3e*/
        ++v53; /*0x100a83d46*/
      }
      if ( *v51 == 1 ) /*0x100a83d4b*/
      {
        v65 = *((_QWORD *)v51 - 13); /*0x100a83d4d*/
        v66 = v58; /*0x100a83d55*/
        if ( v65 == 11 ) /*0x100a83d58*/
          v66 = v57; /*0x100a83d58*/
        v67 = v66 + 1; /*0x100a83d5c*/
        if ( v65 != 11 ) /*0x100a83d63*/
          v58 = v67; /*0x100a83d63*/
        ++v56; /*0x100a83d67*/
        if ( (_DWORD)v65 == 11 ) /*0x100a83d6d*/
          v57 = v67; /*0x100a83d6d*/
      }
      v51 += 368; /*0x100a83cf0*/
      --v40; /*0x100a83cf7*/
    }
    while ( v40 ); /*0x100a83cfa*/
    v195 = v218; /*0x100a83d79*/
    v196 = v52; /*0x100a83d7f*/
    v197 = v50; /*0x100a83d85*/
    v198 = __PAIR64__(v54, v53); /*0x100a83d8b*/
    v199 = __PAIR64__(v56, v55); /*0x100a83d97*/
    v200 = __PAIR64__(v58, v57); /*0x100a83da5*/
    v68 = 0; /*0x100a83db3*/
    v15 = v219; /*0x100a83db5*/
    v69 = v205; /*0x100a83db9*/
    do /*0x100a83dd9*/
    {
      v70 = *(_QWORD *)(v39 + v68 + 232); /*0x100a83ddb*/
      if ( v70 != 2 ) /*0x100a83de7*/
      {
        v71 = *(_QWORD *)(v39 + v68 + 352); /*0x100a83de9*/
        if ( v71 < v15[103] ) /*0x100a83df8*/
        {
          v72 = v15[102]; /*0x100a83dfa*/
          v73 = *(_BYTE *)(v39 + v68 + 248); /*0x100a83e01*/
          v74 = *(_QWORD *)(v39 + v68 + 240); /*0x100a83e0a*/
          v75 = 352 * v71; /*0x100a83e12*/
          *(_QWORD *)(v72 + v75 + 160) = v70; /*0x100a83e19*/
          *(_QWORD *)(v72 + v75 + 168) = v74; /*0x100a83e21*/
          *(_BYTE *)(v72 + v75 + 176) = v73; /*0x100a83e29*/
        }
      }
      v68 += 368; /*0x100a83dd0*/
    }
    while ( v69 != v68 ); /*0x100a83dd9*/
    v191 = v39; /*0x100a83e3a*/
    v192 = v39; /*0x100a83e41*/
    v193 = v158; /*0x100a83e48*/
    v194 = v207; /*0x100a83e53*/
    v205 = (__int64)(v15 + 107); /*0x100a83e61*/
    v182 = v15 + 110; /*0x100a83e6f*/
    v165 = v15 + 96; /*0x100a83e7d*/
    v214 = 0; /*0x100a83e84*/
LABEL_66:
    while ( 2 ) /*0x100a83e9a*/
    {
      v76 = (unsigned __int64 *)v39; /*0x100a83e9a*/
      v39 += 368; /*0x100a83e9d*/
      v77 = *v76; /*0x100a83ea4*/
      v41 = (unsigned __int64)(v76 + 1); /*0x100a83ea7*/
      memcpy(__dst, (const void *)v41, sizeof(__dst)); /*0x100a83eba*/
      if ( v77 == 2 ) /*0x100a83ec3*/
      {
LABEL_152:
        v192 = v39; /*0x100a8489f*/
        goto LABEL_153; /*0x100a8489f*/
      }
      v146 = v77; /*0x100a83ec9*/
      v41 = (unsigned __int64)__dst; /*0x100a83edc*/
      memcpy(__src, __dst, sizeof(__src)); /*0x100a83edf*/
      v78 = v203; /*0x100a83ee4*/
      v79 = __src[43]; /*0x100a83ef2*/
      v80 = v203 - 288; /*0x100a83ef9*/
      v81 = 0; /*0x100a83f0c*/
      do /*0x100a83f31*/
      {
        if ( -288 * v204 == v81 ) /*0x100a83f13*/
        {
          if ( LODWORD(__src[31]) != 11 ) /*0x100a84067*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[31]); /*0x100a84070*/
          v15 = v219; /*0x100a8407c*/
          if ( LODWORD(__src[8]) != 2 ) /*0x100a84080*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&__src[8]); /*0x100a8408d*/
          if ( v39 == v207 ) /*0x100a83e94*/
          {
            v39 = v207; /*0x100a8489b*/
            goto LABEL_152; /*0x100a8489b*/
          }
          goto LABEL_66; /*0x100a83e94*/
        }
        v81 -= 288; /*0x100a83f19*/
        v82 = v80 + 288; /*0x100a83f20*/
        v83 = *(_QWORD *)(v80 + 568) == __src[43]; /*0x100a83f27*/
        v80 += 288; /*0x100a83f2e*/
      }
      while ( !v83 ); /*0x100a83f31*/
      v192 = v39; /*0x100a83f33*/
      v84 = *(void **)(v82 + 40); /*0x100a83f3a*/
      v85 = *(_QWORD *)(v82 + 48); /*0x100a83f3e*/
      LOBYTE(v80) = 1; /*0x100a83f42*/
      v218 = v80; /*0x100a83f44*/
      v86 = v219; /*0x100a83f47*/
      v41 = __src[43]; /*0x100a83f4b*/
      v87 = codexmate_lib::core::repository::apply_account_metadata::hdbdf600db9360b79( /*0x100a83f55*/
              (__int64)v219,
              __src[43],
              v84,
              v85,
              (__int64)&v146);
      v88 = __src[44]; /*0x100a83f5a*/
      if ( LOBYTE(__src[44]) ) /*0x100a83f63*/
        ++*((_DWORD *)v219 + 226); /*0x100a83f69*/
      v89 = v78 - v81 - 256; /*0x100a83f72*/
      v90 = (_QWORD *)v214; /*0x100a83f79*/
      LOBYTE(v90) = (v87 | v214) & 1; /*0x100a83f7f*/
      v214 = (unsigned __int64)v90; /*0x100a83f82*/
      if ( LODWORD(__src[31]) == 11 ) /*0x100a83f8d*/
      {
        if ( LODWORD(__src[32]) == 3 ) /*0x100a83f9a*/
        {
          v15 = v219; /*0x100a83fa2*/
          if ( v88 ) /*0x100a83fa6*/
          {
            ++*((_DWORD *)v219 + 227); /*0x100a83fac*/
            if ( v79 < v15[103] && *(_BYTE *)(v15[102] + 352 * v79 + 337) == 1 ) /*0x100a83fd2*/
            {
              *((_BYTE *)v15 + 1064) = 1; /*0x100a83fd4*/
              v41 = v15[114]; /*0x100a83fdc*/
              if ( v41 != 0x8000000000000000LL && v41 ) /*0x100a83ff5*/
              {
                v86 = (_QWORD *)v15[115]; /*0x100a83ff7*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v41, 1); /*0x100a84003*/
              }
              v15[114] = 0x8000000000000000LL; /*0x100a84012*/
            }
            v208 = (_QWORD *)std::time::SystemTime::now::h1fe79e41f9d5677f(v86, v41); /*0x100a8401e*/
            LODWORD(v209) = v91; /*0x100a84022*/
            std::time::SystemTime::duration_since::had059553cab94f96(v148, &v208, 0, 0); /*0x100a84034*/
            if ( LOBYTE(v148[0]) ) /*0x100a84040*/
              v93 = 0; /*0x100a84592*/
            else
              v93 = v148[1]; /*0x100a84046*/
            v113 = v219[103]; /*0x100a845a0*/
            if ( __src[43] >= v113 ) /*0x100a845aa*/
              core::panicking::panic_bounds_check::h56740b1198b22635(__src[43], v113, &off_101974128, v92); /*0x100a84c9b*/
            v114 = v219[102]; /*0x100a845b0*/
            v115 = 352LL * __src[43]; /*0x100a845b7*/
            *(_QWORD *)(v114 + v115 + 80) = 2; /*0x100a845be*/
            *(_QWORD *)(v114 + v115 + 120) = 2; /*0x100a845c7*/
            *(_BYTE *)(v114 + v115 + 338) = 1; /*0x100a845d0*/
            *(_QWORD *)(v114 + v115 + 64) = 1; /*0x100a845d9*/
            *(_QWORD *)(v114 + v115 + 72) = v93; /*0x100a845e2*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v208, v89); /*0x100a845ee*/
            v116 = v115 + v114; /*0x100a845f3*/
            v117 = *(_QWORD *)(v116 + 160); /*0x100a845f6*/
            if ( v117 != 2 ) /*0x100a84601*/
            {
              v217 = *(_BYTE *)(v116 + 176); /*0x100a8460b*/
              v166 = *(_QWORD *)(v116 + 168); /*0x100a84615*/
            }
            chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v211); /*0x100a84620*/
            v118 = ((int)v211 >> 13) - 1; /*0x100a8462d*/
            v119 = 0; /*0x100a84630*/
            if ( (int)v211 >> 13 <= 0 ) /*0x100a84634*/
            {
              v120 = (1 - ((int)v211 >> 13)) / 0x190u + 1; /*0x100a84648*/
              v118 += 400 * v120; /*0x100a84650*/
              v119 = -146097 * v120; /*0x100a84652*/
            }
            v152 = v210; /*0x100a846c2*/
            v151 = v209; /*0x100a846ce*/
            v150 = v208; /*0x100a846d2*/
            v153 = v93; /*0x100a846d6*/
            v154 = 1; /*0x100a846dd*/
            v148[2] = 2; /*0x100a846e4*/
            v148[7] = 2; /*0x100a846ef*/
            v148[12] = v117; /*0x100a846fa*/
            v148[13] = v166; /*0x100a84708*/
            v149 = v217; /*0x100a84713*/
            v148[0] = 1; /*0x100a84719*/
            v148[1] = 1000 /*0x100a84724*/
                    * (HIDWORD(v211)
                     + 86400LL
                     * (int)(((v118 / 100) >> 2)
                           + ((1461 * v118) >> 2)
                           + v119
                           + (((unsigned int)v211 >> 4) & 0x1FF)
                           - v118 / 100
                           - 719163))
                    + (unsigned int)v212 / 0xF4240uLL;
            v41 = (unsigned __int64)v148; /*0x100a84732*/
            codexmate_lib::core::quota_store::upsert_item::h053aeb5691e92848(v165, v148, v93); /*0x100a8473c*/
            goto LABEL_138; /*0x100a8473c*/
          }
          if ( v79 >= v219[103] ) /*0x100a8448d*/
            goto LABEL_139; /*0x100a8448d*/
          if ( *(_BYTE *)(v219[102] + 352 * v79 + 337) != 1 ) /*0x100a844aa*/
            goto LABEL_138; /*0x100a844aa*/
          codexmate_lib::core::api_client::test_api_connectivity::h010670e6f25f2492(v148, v181, 0); /*0x100a844c0*/
          v109 = v148[7]; /*0x100a844c5*/
          v110 = 0x8000000000000000LL; /*0x100a844cc*/
          if ( !LOBYTE(v148[7]) ) /*0x100a844d8*/
          {
            v167 = v148[5]; /*0x100a844e1*/
            v184 = v148[4]; /*0x100a844ef*/
            v110 = v148[3]; /*0x100a844f6*/
          }
          v111 = v219; /*0x100a844fd*/
          if ( v79 < v219[103] && *(_BYTE *)(v219[102] + 352 * v79 + 337) ) /*0x100a84515*/
          {
            *((_BYTE *)v219 + 1064) = 2 - LOBYTE(v148[7]); /*0x100a84528*/
            v112 = v111[114]; /*0x100a8452e*/
            v15 = v111; /*0x100a84542*/
            if ( v112 != 0x8000000000000000LL && v112 ) /*0x100a8454a*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111[115], v112, 1); /*0x100a8455e*/
              v15 = v219; /*0x100a84566*/
            }
            v15[114] = v110; /*0x100a8456a*/
            v15[115] = v184; /*0x100a84578*/
            v15[116] = v167; /*0x100a84586*/
          }
          else
          {
            v15 = v219; /*0x100a84783*/
            if ( 2 * v110 ) /*0x100a84778*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v184, v110, 1); /*0x100a84794*/
          }
          v41 = v148[0]; /*0x100a84799*/
          if ( v148[0] ) /*0x100a847a3*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148[1], v148[0], 1); /*0x100a847b1*/
          if ( v109 ) /*0x100a847b8*/
          {
            v41 = v148[3]; /*0x100a847ba*/
            if ( v148[3] ) /*0x100a847c4*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148[4], v148[3], 1); /*0x100a847d2*/
          }
        }
        else
        {
          qmemcpy(v148, &__dst[32], 0x50u); /*0x100a842d5*/
          v104 = __src[42]; /*0x100a842d8*/
          HIDWORD(v148[10]) = HIDWORD(__dst[42]); /*0x100a842f4*/
          *(_DWORD *)((char *)&v148[10] + 1) = *(_DWORD *)((char *)&__dst[42] + 1); /*0x100a842f7*/
          v105 = v219; /*0x100a842f9*/
          ++*((_DWORD *)v219 + 227); /*0x100a842fd*/
          LOBYTE(v148[10]) = v104; /*0x100a84303*/
          v41 = v162; /*0x100a8430a*/
          codexmate_lib::core::repository::apply_usage_result::h8817d9c50b687ed7(v105, v162, v161, v82, v148); /*0x100a8431b*/
          if ( v104 != 8 ) /*0x100a84324*/
          {
            v41 = v79; /*0x100a84332*/
            v106 = codexmate_lib::core::repository::reconcile_subscription_with_live_plan::h955957b03fa108a6( /*0x100a84335*/
                     v219,
                     v79,
                     *(const void **)(v82 + 40),
                     *(_QWORD *)(v82 + 48));
            v107 = (_QWORD *)v214; /*0x100a8433a*/
            LOBYTE(v107) = v106 | v214; /*0x100a8433e*/
            v214 = (unsigned __int64)v107; /*0x100a84340*/
          }
          v15 = v219; /*0x100a84344*/
          if ( v79 < v219[103] && *(_BYTE *)(v219[102] + 352 * v79 + 337) == 1 ) /*0x100a8436b*/
          {
            *((_BYTE *)v219 + 1064) = 1; /*0x100a84371*/
            v41 = v15[114]; /*0x100a84379*/
            if ( v41 != 0x8000000000000000LL && v41 ) /*0x100a84392*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15[115], v41, 1); /*0x100a843a0*/
            v15[114] = 0x8000000000000000LL; /*0x100a843af*/
          }
        }
LABEL_139:
        if ( LODWORD(__src[8]) != 2 ) /*0x100a8475b*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&__src[8]); /*0x100a84764*/
        if ( v39 != v207 ) /*0x100a8476d*/
          continue; /*0x100a8476d*/
LABEL_153:
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7a88c868fee9138f(&v191); /*0x100a848a6*/
        if ( (v214 & 1) != 0 ) /*0x100a848b6*/
        {
          __dst[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(&v191, v41); /*0x100a848bd*/
          LODWORD(__dst[1]) = v121; /*0x100a848c4*/
          std::time::SystemTime::duration_since::had059553cab94f96(&v146, __dst, 0, 0); /*0x100a848dc*/
          if ( (_BYTE)v146 ) /*0x100a848e8*/
            v122 = 0; /*0x100a848f3*/
          else
            v122 = __src[0]; /*0x100a848ea*/
          v15[94] = v122; /*0x100a848f5*/
        }
        v123 = v156; /*0x100a848fc*/
        v124 = v157; /*0x100a84903*/
        codexmate_lib::core::repository::sync_token_status_to_quota_store::h945cce6b53563565(v15, v156, v157); /*0x100a84913*/
        v126 = v15[102]; /*0x100a84918*/
        v127 = (_QWORD *)v15[103]; /*0x100a8491f*/
        v146 = (unsigned __int64)&v178; /*0x100a8492d*/
        if ( (unsigned __int64)v127 >= 2 ) /*0x100a84938*/
        {
          if ( (unsigned __int64)v127 >= 0x15 ) /*0x100a84c54*/
            core::slice::sort::stable::driftsort_main::h9a9ddf366e3b25eb(v126, v127, &v146); /*0x100a84ca9*/
          else
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::h3552bd85c9085a11(v126, v127, 1, &v146); /*0x100a84c62*/
        }
        v128 = v15[102] - 352LL; /*0x100a84945*/
        v129 = 352LL * v15[103]; /*0x100a8494c*/
        while ( v129 ) /*0x100a84963*/
        {
          v127 = (_QWORD *)(v128 + 352); /*0x100a84965*/
          v129 -= 352; /*0x100a8496c*/
          v83 = *(_BYTE *)(v128 + 689) == 1; /*0x100a84973*/
          v128 += 352; /*0x100a8497a*/
          if ( v83 ) /*0x100a8497d*/
          {
            _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a( /*0x100a84986*/
              &v146,
              v127,
              v125,
              v129);
            v130 = v146; /*0x100a8498b*/
            v127 = __src; /*0x100a84992*/
            memcpy(__dst, __src, 0x158u); /*0x100a849a5*/
            if ( *((_DWORD *)v15 + 38) == 2 ) /*0x100a849b2*/
              goto LABEL_166; /*0x100a849b2*/
            goto LABEL_165; /*0x100a849b2*/
          }
        }
        v130 = 2; /*0x100a849b6*/
        if ( *((_DWORD *)v15 + 38) == 2 ) /*0x100a849c3*/
          goto LABEL_166; /*0x100a849c3*/
LABEL_165:
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v15 + 19, v127); /*0x100a849c5*/
LABEL_166:
        v15[19] = v130; /*0x100a849d1*/
        memcpy(v15 + 20, __dst, 0x158u); /*0x100a849eb*/
        __dst[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v15 + 20, __dst); /*0x100a849f5*/
        LODWORD(__dst[1]) = v131; /*0x100a849fc*/
        std::time::SystemTime::duration_since::had059553cab94f96(&v146, __dst, 0, 0); /*0x100a84a14*/
        v132 = 0; /*0x100a84a19*/
        if ( !(_BYTE)v146 ) /*0x100a84a22*/
          v132 = __src[0]; /*0x100a84a24*/
        v15[132] = v132; /*0x100a84a2b*/
        v146 = 0x8000000000000000LL; /*0x100a84a3c*/
        codexmate_lib::core::repository::finish_refresh_report::h7931537c55f4f067((__int64)v15, 0, &v146, v163, &v195); /*0x100a84a5d*/
        v133 = v201; /*0x100a84a69*/
        v201[5] = v190; /*0x100a84a70*/
        v133[4] = v189; /*0x100a84a7b*/
        v133[3] = v188; /*0x100a84a86*/
        v133[2] = v187; /*0x100a84a91*/
        v134 = v185; /*0x100a84a95*/
        v133[1] = v186; /*0x100a84aa3*/
        *v133 = v134; /*0x100a84aa7*/
        if ( v124 ) /*0x100a84aad*/
        {
          v135 = (_QWORD *)(v123 + 8); /*0x100a84aaf*/
          do /*0x100a84ac7*/
          {
            v136 = *(v135 - 1); /*0x100a84ac9*/
            if ( v136 ) /*0x100a84ad0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v135, v136, 1); /*0x100a84ada*/
            v135 += 3; /*0x100a84ac0*/
            --v124; /*0x100a84ac4*/
          }
          while ( v124 ); /*0x100a84ac7*/
        }
        if ( v155 ) /*0x100a84aeb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v123, 24 * v155, 8); /*0x100a84afd*/
        if ( !_InterlockedDecrement64(v206) ) /*0x100a84b06*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf0dc0f69dfcc4654(&v206); /*0x100a84b10*/
        v18 = v201; /*0x100a84b1f*/
        if ( v172 ) /*0x100a84b26*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173, v172, 1); /*0x100a84b34*/
        if ( v175 ) /*0x100a84b43*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v176, v175, 1); /*0x100a84b51*/
        v137 = v204; /*0x100a84b56*/
        if ( v204 ) /*0x100a84b60*/
        {
          v138 = v203; /*0x100a84b62*/
          do /*0x100a84b82*/
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::hc966ec4ee6566445(v138); /*0x100a84b73*/
            v138 += 288; /*0x100a84b78*/
            --v137; /*0x100a84b7f*/
          }
          while ( v137 ); /*0x100a84b82*/
        }
        if ( v202 ) /*0x100a84b8e*/
        {
          v27 = v203; /*0x100a84b90*/
          v26 = 288 * v202; /*0x100a84b9b*/
          goto LABEL_186; /*0x100a84b9b*/
        }
        goto LABEL_187; /*0x100a84b8e*/
      }
      break;
    }
    qmemcpy(v148, &__dst[31], 0x60u); /*0x100a840b6*/
    v211 = nullptr; /*0x100a840b9*/
    v212 = 1; /*0x100a840c1*/
    v213 = 0; /*0x100a840c9*/
    v210 = 1610612768; /*0x100a840d1*/
    v208 = &v211; /*0x100a840dd*/
    v209 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a840e8*/
    v94 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100a840f3*/
            v148,
            &v208);
    v95 = v219; /*0x100a840f8*/
    if ( v94 ) /*0x100a840fe*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a84c0b*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        &v178,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v178 = v211; /*0x100a8410c*/
    v179 = v212; /*0x100a84113*/
    v180 = v213; /*0x100a8411e*/
    v96 = *(_QWORD *)v205; /*0x100a8412c*/
    if ( *(_QWORD *)v205 != 0x8000000000000000LL && v96 ) /*0x100a84141*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v219[108], v96, 1); /*0x100a8414f*/
    v97 = (_QWORD *)v205; /*0x100a8415b*/
    *(_QWORD *)(v205 + 16) = v180; /*0x100a84162*/
    v98 = v178; /*0x100a84166*/
    v97[1] = v179; /*0x100a84174*/
    *v97 = v98; /*0x100a84178*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v208, v89); /*0x100a84182*/
    v213 = v210; /*0x100a8418b*/
    v212 = (__int64)v209; /*0x100a84197*/
    v211 = v208; /*0x100a8419b*/
    v99 = *v182; /*0x100a841a6*/
    if ( *v182 != 0x8000000000000000LL && v99 ) /*0x100a841bb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[111], v99, 1); /*0x100a841c9*/
    v100 = v182; /*0x100a841d2*/
    v182[2] = v213; /*0x100a841d9*/
    v101 = v211; /*0x100a841dd*/
    v100[1] = v212; /*0x100a841e5*/
    *v100 = v101; /*0x100a841e9*/
    if ( LODWORD(v148[0]) == 6 ) /*0x100a841f3*/
    {
      if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v148[1]) /*0x100a84210*/
        || (v102 = 1, (unsigned __int8)reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v148[1])) )
      {
        v102 = 2; /*0x100a8421b*/
      }
      v103 = __src[43]; /*0x100a8421d*/
      if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v148[1]) /*0x100a8423b*/
        || (unsigned __int8)reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v148[1]) )
      {
        v211 = nullptr; /*0x100a84248*/
        v212 = 1; /*0x100a84250*/
        v213 = 0; /*0x100a84258*/
        v210 = 1610612768; /*0x100a84260*/
        v208 = &v211; /*0x100a8426c*/
        v209 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a84277*/
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100a84286*/
                                v148,
                                &v208) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a84c8d*/
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
            55,
            &v178,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
        v41 = (unsigned __int64)v211; /*0x100a84293*/
        v183 = v212; /*0x100a8429b*/
        v164 = v213; /*0x100a842a6*/
        if ( v103 >= v95[103] ) /*0x100a842b4*/
          goto LABEL_118; /*0x100a842b4*/
LABEL_113:
        if ( *(_BYTE *)(v95[102] + 352 * v103 + 337) ) /*0x100a843e5*/
        {
          *((_BYTE *)v95 + 1064) = v102; /*0x100a843ef*/
          v108 = v95[114]; /*0x100a843f6*/
          if ( v108 != 0x8000000000000000LL && v108 ) /*0x100a8440f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[115], v95[114], 1); /*0x100a84423*/
          v95[114] = v41; /*0x100a8442b*/
          v95[115] = v183; /*0x100a84439*/
          v95[116] = v164; /*0x100a84447*/
          goto LABEL_120; /*0x100a8444e*/
        }
LABEL_118:
        if ( 2 * v41 ) /*0x100a84450*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v183, v41, 1); /*0x100a84469*/
LABEL_120:
        v218 = 0; /*0x100a8446e*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v148); /*0x100a8447c*/
LABEL_138:
        v15 = v219; /*0x100a84750*/
        goto LABEL_139; /*0x100a84750*/
      }
    }
    else
    {
      v102 = 1; /*0x100a843bb*/
      v103 = __src[43]; /*0x100a843bd*/
    }
    v41 = 0x8000000000000000LL; /*0x100a843c4*/
    if ( v103 >= v95[103] ) /*0x100a843d5*/
      goto LABEL_118; /*0x100a843d5*/
    goto LABEL_113; /*0x100a843d5*/
  }
  v142[0] = v13; /*0x100a837c5*/
  v142[1] = 0; /*0x100a837cc*/
  v142[2] = v13; /*0x100a837d6*/
  v143 = 0; /*0x100a837dd*/
  v144 = 0; /*0x100a837e8*/
  v145 = 0; /*0x100a837f3*/
  v146 = 0x8000000000000000LL; /*0x100a83808*/
  codexmate_lib::core::repository::finish_refresh_report::h7931537c55f4f067((__int64)v219, 0, &v146, v14, v142); /*0x100a83823*/
  v18 = v201; /*0x100a83828*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100a83836*/
  v20 = v19; /*0x100a83838*/
  if ( *(_BYTE *)(v19 + 16) == 1 ) /*0x100a8383f*/
  {
    v21 = *(_QWORD *)v19; /*0x100a83845*/
    v22 = *(_QWORD *)(v20 + 8); /*0x100a83848*/
  }
  else
  {
    v21 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100a84c15*/
    *(_QWORD *)v20 = v21; /*0x100a84c1a*/
    *(_QWORD *)(v20 + 8) = v22; /*0x100a84c1d*/
    *(_BYTE *)(v20 + 16) = 1; /*0x100a84c21*/
  }
  *(_QWORD *)v20 = v21 + 1; /*0x100a83850*/
  v18[3] = 0; /*0x100a8385a*/
  v18[2] = 0; /*0x100a83866*/
  v18[1] = 0; /*0x100a83872*/
  *v18 = (unsigned __int64)&xmmword_1015FBEC0; /*0x100a8387e*/
  v18[4] = v21; /*0x100a83882*/
  v18[5] = v22; /*0x100a83887*/
  v23 = v203; /*0x100a8388c*/
  v24 = v204; /*0x100a83893*/
  if ( v204 ) /*0x100a8389d*/
  {
    v25 = v203; /*0x100a8389f*/
    do /*0x100a838c2*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::hc966ec4ee6566445(v25); /*0x100a838b3*/
      v25 += 288; /*0x100a838b8*/
      --v24; /*0x100a838bf*/
    }
    while ( v24 ); /*0x100a838c2*/
  }
  if ( v202 ) /*0x100a838ce*/
  {
    v26 = 288 * v202; /*0x100a838d8*/
    v27 = v23; /*0x100a838e1*/
LABEL_186:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v26, 8); /*0x100a84ba4*/
  }
LABEL_187:
  if ( v168 != 0x8000000000000000LL && v168 ) /*0x100a84bc2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v169, v168, 1); /*0x100a84bd0*/
  return v18; /*0x100a84bd8*/
}