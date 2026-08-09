// __ZN13codexmate_lib4core10repository27enrich_single_account_usage @ 0x100a7c680 | 基线 same-set
// [FULL hexrays]

_QWORD *__fastcall codexmate_lib::core::repository::enrich_single_account_usage::ha95d96dc350686fe(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        signed __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  _BYTE *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  _QWORD *v19; // r15
  char v20; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  signed __int64 v24; // r14
  __int64 v25; // r15
  const void *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  const void *v29; // rsi
  signed __int64 v30; // rax
  __int64 v31; // r15
  const void *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdi
  size_t v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // r13
  __int64 v39; // r14
  unsigned __int64 v40; // rbx
  __int64 v41; // r15
  size_t v42; // r13
  __int64 v43; // r15
  __int64 v44; // r15
  __int64 v45; // rbx
  __int64 v46; // rax
  _QWORD *v47; // r14
  __int64 v48; // r15
  void *v49; // rax
  _QWORD *v50; // rcx
  size_t v51; // rbx
  size_t v52; // rsi
  void *v53; // rdi
  size_t v54; // rsi
  __int64 v56; // rax
  __int64 v57; // rdi
  signed __int64 v58; // rdx
  __int64 v59; // r13
  const void *v60; // rsi
  signed __int64 v61; // r15
  __int64 v62; // rax
  __int64 v63; // r15
  signed __int64 v64; // r13
  size_t v65; // rbx
  size_t v66; // r14
  __int64 v67; // r15
  _QWORD *v68; // rdx
  __int64 v69; // rax
  void *v70; // r13
  __int64 v71; // r15
  bool v72; // r13
  __int64 v73; // r15
  _BYTE *v74; // rdi
  _QWORD *v75; // rsi
  void *v76; // rax
  int v77; // edx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // r15
  _QWORD *v81; // rdi
  char v82; // cl
  __int64 v83; // rsi
  __int64 v84; // rax
  _QWORD *v85; // rdi
  char v86; // r14
  _QWORD *v87; // rdi
  _QWORD *v88; // r15
  __int64 v89; // r13
  __int64 v90; // rbx
  _BYTE *v91; // rsi
  __int64 v92; // rdx
  _QWORD *v93; // r14
  __int64 v94; // rax
  __int64 v95; // rcx
  bool v96; // zf
  __int64 v97; // rbx
  __int64 v98; // rax
  _QWORD *v99; // r14
  __int64 v100; // rbx
  __int64 v101; // r15
  __int64 v102; // r14
  void *v103; // rax
  _QWORD *v104; // rcx
  _QWORD *v105; // r14
  __int64 v106; // rsi
  __int64 v107; // rax
  _QWORD *v108; // r14
  __int64 v109; // rsi
  __int64 v110; // rax
  char v111; // al
  _QWORD *v112; // r14
  char v113; // r15
  unsigned __int64 v114; // rax
  char v115; // r15
  unsigned __int64 v116; // rax
  char v117; // r14
  _QWORD *v118; // rdi
  _QWORD *v119; // rdi
  __int64 v120; // rax
  void *v121; // rax
  __int64 v122; // rdx
  _QWORD *v123; // r14
  _BYTE *v124; // rsi
  __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rbx
  __int64 v129; // rbx
  __int64 v130; // r15
  _QWORD *v131; // rdx
  __int64 v132; // rax
  char v133; // bl
  _QWORD *v134; // rbx
  __int64 v135; // rsi
  __int64 v136; // rax
  _QWORD *v137; // rbx
  __int64 v138; // rsi
  __int64 v139; // rax
  _BYTE *v140; // rsi
  __int64 v141; // rdx
  _QWORD *v142; // r14
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rbx
  __int64 v146; // rax
  _QWORD *v147; // r14
  __int64 v148; // r15
  void *v149; // rax
  _QWORD *v150; // rcx
  unsigned __int64 v151; // rax
  _BYTE *v152; // rsi
  __int64 v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rbx
  _QWORD *v157; // r14
  __int64 v158; // rax
  _QWORD *v159; // r14
  __int64 v160; // r15
  _BYTE v161[176]; // [rsp+30h] [rbp-880h] BYREF
  _DWORD v162[24]; // [rsp+E0h] [rbp-7D0h] BYREF
  _QWORD v163[22]; // [rsp+140h] [rbp-770h] BYREF
  _QWORD v164[9]; // [rsp+1F0h] [rbp-6C0h] BYREF
  __int64 v165; // [rsp+238h] [rbp-678h] BYREF
  _BYTE v166[144]; // [rsp+240h] [rbp-670h] BYREF
  char v167; // [rsp+2D0h] [rbp-5E0h]
  __int64 v168; // [rsp+2D8h] [rbp-5D8h] BYREF
  int v169[2]; // [rsp+2E0h] [rbp-5D0h]
  int v170[2]; // [rsp+2E8h] [rbp-5C8h]
  __int64 v171; // [rsp+2F0h] [rbp-5C0h]
  _QWORD v172[9]; // [rsp+2F8h] [rbp-5B8h] BYREF
  _BYTE v173[176]; // [rsp+340h] [rbp-570h] BYREF
  unsigned __int64 v174; // [rsp+3F0h] [rbp-4C0h]
  _QWORD v175[3]; // [rsp+3F8h] [rbp-4B8h] BYREF
  _QWORD v176[6]; // [rsp+410h] [rbp-4A0h] BYREF
  _QWORD v177[12]; // [rsp+440h] [rbp-470h] BYREF
  _QWORD __dst[43]; // [rsp+4A0h] [rbp-410h] BYREF
  _QWORD v179[3]; // [rsp+5F8h] [rbp-2B8h] BYREF
  _QWORD *v180; // [rsp+610h] [rbp-2A0h]
  __int64 v181; // [rsp+618h] [rbp-298h]
  signed __int64 v182; // [rsp+620h] [rbp-290h] BYREF
  __int64 v183; // [rsp+628h] [rbp-288h]
  __int64 v184; // [rsp+638h] [rbp-278h]
  __int64 v185; // [rsp+640h] [rbp-270h]
  __int64 v186; // [rsp+648h] [rbp-268h]
  __int64 v187; // [rsp+650h] [rbp-260h]
  _BYTE v188[352]; // [rsp+658h] [rbp-258h] BYREF
  unsigned __int64 v189; // [rsp+7B8h] [rbp-F8h] BYREF
  __int64 v190; // [rsp+7C0h] [rbp-F0h]
  __int64 v191; // [rsp+7C8h] [rbp-E8h]
  char v192; // [rsp+7D0h] [rbp-E0h]
  __int64 v193; // [rsp+7D8h] [rbp-D8h]
  void *v194; // [rsp+7E0h] [rbp-D0h]
  __int64 v195; // [rsp+7E8h] [rbp-C8h]
  __int64 v196; // [rsp+7F4h] [rbp-BCh] BYREF
  int v197; // [rsp+7FCh] [rbp-B4h]
  __int64 v198; // [rsp+800h] [rbp-B0h]
  __int64 v199; // [rsp+808h] [rbp-A8h]
  __int64 v200; // [rsp+810h] [rbp-A0h]
  __int64 v201; // [rsp+818h] [rbp-98h]
  size_t v202; // [rsp+820h] [rbp-90h]
  void *v203; // [rsp+828h] [rbp-88h]
  _QWORD *v204; // [rsp+830h] [rbp-80h]
  signed __int64 v205; // [rsp+838h] [rbp-78h]
  size_t __n; // [rsp+840h] [rbp-70h]
  __int64 v207; // [rsp+848h] [rbp-68h]
  int v208[2]; // [rsp+850h] [rbp-60h]
  void *__s2; // [rsp+858h] [rbp-58h]
  void *__src; // [rsp+860h] [rbp-50h]
  __int64 v211; // [rsp+868h] [rbp-48h]
  size_t v212; // [rsp+870h] [rbp-40h]
  size_t v213; // [rsp+878h] [rbp-38h]
  _QWORD *v214; // [rsp+880h] [rbp-30h]

  __s2 = a3;
  v204 = a1;
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v188);
  v12 = (*(int *)v188 >> 13) - 1;
  v13 = 0;
  v193 = a6;
  v180 = a5;
  if ( *(int *)v188 >> 13 <= 0 )
  {
    v14 = (1 - (*(int *)v188 >> 13)) / 0x190u + 1;
    v12 += 400 * v14;
    v13 = -146097 * v14;
  }
  v15 = (unsigned int)((1461 * v12) >> 2);
  v16 = (_BYTE *)*(unsigned int *)&v188[8];
  v17 = 1000
      * (*(unsigned int *)&v188[4]
       + 86400LL * (int)(((v12 / 100) >> 2) + v15 + v13 + ((*(_DWORD *)v188 >> 4) & 0x1FF) - v12 / 100 - 719163));
  v18 = *(unsigned int *)&v188[8] / 0xF4240uLL;
  v196 = 1;
  v197 = 1;
  v198 = 0;
  v199 = 0;
  v200 = 0;
  v19 = (_QWORD *)a2;
  v20 = *(_BYTE *)(a2 + 136);
  v21 = 0x8000000000000000LL;
  if ( !__OFSUB__(0, v19[14]) )
  {
    v15 = (unsigned __int64)(v19 + 14);
    v16 = v188;
    v22 = v17;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v188, v19 + 14);
    v17 = v22;
    v21 = *(_QWORD *)v188;
    __dst[0] = *(_QWORD *)&v188[8];
    __dst[1] = *(_QWORD *)&v188[16];
  }
  v23 = v18 + v17;
  v192 = v20;
  v189 = v21;
  v190 = __dst[0];
  v191 = __dst[1];
  v24 = v19[71];
  if ( v24 < 0 )
  {
    v25 = 0;
    goto LABEL_7;
  }
  v201 = v23;
  v214 = v19;
  v26 = (const void *)v19[70];
  if ( v24 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v15);
    v25 = 1;
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1);
    if ( !v27 )
LABEL_7:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25, v24);
    v28 = v27;
  }
  else
  {
    v28 = 1;
  }
  v194 = (void *)v28;
  v29 = v26;
  memcpy((void *)v28, v26, v24);
  v30 = v214[68];
  __n = v30;
  if ( v30 < 0 )
  {
    v31 = 0;
    goto LABEL_14;
  }
  v32 = (const void *)v214[67];
  v212 = v24;
  if ( v30 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v29);
    v31 = 1;
    v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    if ( !v33 )
LABEL_14:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, __n);
    v34 = v33;
  }
  else
  {
    v34 = 1;
  }
  v195 = v34;
  v35 = (size_t)v32;
  memcpy((void *)v34, v32, __n);
  v36 = v214[103];
  if ( !v36 )
    goto LABEL_35;
  v37 = 352 * v36;
  v38 = v214[102] + 208LL;
  v39 = 0;
  v40 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v38 - 8) == a4 )
    {
      v34 = *(_QWORD *)(v38 - 16);
      v35 = (size_t)__s2;
      if ( !memcmp((const void *)v34, __s2, a4) )
        break;
    }
    ++v40;
    v38 += 352;
    v39 += 352;
    if ( v37 == v39 )
      goto LABEL_35;
  }
  v41 = v214[86];
  v213 = v214[87];
  v34 = (__int64)__dst;
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v38);
  if ( !v213 )
  {
LABEL_32:
    v35 = __dst[0];
    if ( !__dst[0] )
      goto LABEL_35;
    v34 = __dst[1];
    goto LABEL_34;
  }
  v42 = 424 * v213;
  v43 = v41 + 216;
  while ( 1 )
  {
    if ( *(_QWORD *)(v43 - 8) == a4 )
    {
      v34 = *(_QWORD *)(v43 - 16);
      if ( !memcmp((const void *)v34, __s2, a4) )
        break;
    }
    v43 += 424;
    v42 -= 424LL;
    if ( !v42 )
      goto LABEL_32;
  }
  v211 = __dst[0];
  v207 = __dst[1];
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v188, v43);
  v202 = *(_QWORD *)v188;
  __src = *(void **)&v188[8];
  v213 = *(_QWORD *)&v188[16];
  if ( *(__int64 *)&v188[16] < 0 )
  {
    v44 = 0;
    goto LABEL_31;
  }
  v184 = *(_QWORD *)(v43 - 184);
  v185 = *(_QWORD *)(v43 - 176);
  v186 = *(_QWORD *)(v43 - 168);
  v187 = *(_QWORD *)(v43 - 160);
  v181 = __dst[2];
  if ( *(_QWORD *)&v188[16] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v188, v43);
    v44 = 1;
    v56 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v213, 1);
    if ( !v56 )
LABEL_31:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v44, v213);
    v57 = v56;
  }
  else
  {
    v57 = 1;
  }
  *(_QWORD *)v208 = v57;
  memcpy((void *)v57, __src, v213);
  v58 = v214[68];
  if ( v58 < 0 )
  {
    v59 = 0;
    goto LABEL_57;
  }
  v60 = (const void *)v214[67];
  if ( v58 )
  {
    v205 = v214[67];
    v61 = v58;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v57, v60);
    v59 = 1;
    v62 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v61, 1);
    v58 = v61;
    if ( !v62 )
LABEL_57:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v59, v58);
    v63 = v62;
    v60 = (const void *)v205;
  }
  else
  {
    v63 = 1;
  }
  v64 = v58;
  memcpy((void *)v63, v60, v58);
  std::path::Path::_join::hb1a495d4f06b13b8(&v168, v63, v64, &unk_10167C8BD, 9);
  if ( v64 )
    *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v64, 1);
  v205 = *(_QWORD *)v169;
  codexmate_lib::core::repository::load_refreshable_account_auth::h454e81b51b38cf4c(
    v188,
    *(void **)v208,
    v213,
    *(__int64 *)v169,
    *(__int64 *)v170,
    __s2,
    a4);
  if ( *(_QWORD *)v188 == 0x8000000000000001LL )
  {
    if ( v168 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v205, v168, 1);
    v35 = v213;
    v34 = *(_QWORD *)v208;
    v65 = v211;
    v66 = v202;
    if ( v213 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v208, v213, 1);
    if ( v66 )
    {
      v34 = (__int64)__src;
      v35 = v66;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v66, 1);
    }
    if ( v65 )
    {
      v34 = v207;
      v35 = v65;
LABEL_34:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v35, 1);
    }
LABEL_35:
    if ( a4 < 0 )
    {
      v45 = 0;
      goto LABEL_37;
    }
    if ( a4 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, v35);
      v45 = 1;
      v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1);
      v47 = v214;
      if ( !v46 )
        goto LABEL_37;
      v48 = v46;
    }
    else
    {
      v48 = 1;
      v47 = v214;
    }
    memcpy((void *)v48, __s2, a4);
    *(_QWORD *)v188 = a4;
    *(_QWORD *)&v188[8] = v48;
    *(_QWORD *)&v188[16] = a4;
    codexmate_lib::core::repository::finish_refresh_report::h7931537c55f4f067(
      (__int64)v47,
      2u,
      v188,
      v201,
      (int *)&v196);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v47, 2);
    a4 = 40;
    v45 = 1;
    v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1);
    if ( v49 )
    {
      qmemcpy(v49, "Account not found or snapshot unreadable", 40);
      v50 = v204;
      *v204 = 40;
      v50[1] = v49;
      v50[2] = 40;
      v51 = v212;
      v52 = __n;
      if ( !__n )
      {
LABEL_45:
        if ( !v51 )
          goto LABEL_48;
        v53 = v194;
        v54 = v51;
        goto LABEL_47;
      }
LABEL_44:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v195, v52, 1);
      goto LABEL_45;
    }
LABEL_37:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v45, a4);
  }
  memcpy(__dst, v188, 0xB0u);
  if ( a4 < 0 )
  {
    v67 = 0;
    goto LABEL_75;
  }
  if ( a4 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v188);
    v67 = 1;
    v203 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1);
    if ( !v203 )
LABEL_75:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v67, a4);
  }
  else
  {
    v203 = (void *)1;
  }
  memcpy(v203, __s2, a4);
  memcpy(v161, __dst, sizeof(v161));
  if ( v168 )
    *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v205, v168, 1);
  v205 = 0x8000000000000001LL;
  if ( v202 )
    *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v202, 1);
  v168 = v184;
  *(_QWORD *)v169 = v185;
  *(_QWORD *)v170 = v186;
  v171 = v187;
  v172[0] = a4;
  v172[1] = v203;
  v172[2] = a4;
  v172[3] = v211;
  v172[4] = v207;
  v172[5] = v181;
  v172[6] = v213;
  v172[7] = *(_QWORD *)v208;
  v172[8] = v213;
  memcpy(v173, v161, sizeof(v173));
  v174 = v40;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v173, v161);
  __src = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
  if ( !__src )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v188, v172);
  v68 = __src;
  *((_QWORD *)__src + 2) = *(_QWORD *)&v188[16];
  v69 = *(_QWORD *)v188;
  v68[1] = *(_QWORD *)&v188[8];
  *v68 = v69;
  v179[0] = 1;
  v179[1] = v68;
  v179[2] = 1;
  v197 = 0;
  if ( v40 >= v214[103] )
    LODWORD(v207) = 0;
  else
    LODWORD(v207) = *(unsigned __int8 *)(v214[102] + v39 + 337);
  _$LT$codexmate_lib..core..auth..AuthFile$u20$as$u20$core..clone..Clone$GT$::clone::h7f753630bb677f25(v163, v173);
  v70 = v194;
  v71 = v195;
  codexmate_lib::core::oauth_refresh::refresh_token_with_policy::h554e0eb1f76208d0(
    &v182,
    *(void **)v208,
    v213,
    v163,
    (__int64)&v189,
    v195,
    __n,
    v194,
    v212,
    0);
  codexmate_lib::core::repository::fetch_usage_with_one_auth_retry::h7ce298249954331d(
    v188,
    *(void **)v208,
    v213,
    v163,
    &v182,
    (__int64)&v189,
    v71,
    __n,
    v70,
    v212,
    1u);
  qmemcpy(v177, v188, sizeof(v177));
  v211 = v182;
  if ( v182 >= (__int64)0x8000000000000002LL )
    v197 = 1;
  else
    HIDWORD(v196) = 1;
  LOBYTE(v202) = v188[96];
  codexmate_lib::core::repository::log_token_refresh_outcome::h6593a802355651d2(
    (__int64)"single_account_usage",
    20,
    (__int64)&v182);
  codexmate_lib::core::auth::make_api_request_context::hf723ba8d82108568(v176, v163, *(double *)a7.i64);
  v72 = v211 > v205 || v176[0] == 0x8000000000000000LL;
  if ( v72 )
  {
    codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190((__int64 *)v188, v163, *(__int64 *)v208, v213, a7);
    v73 = *(_QWORD *)v188;
    if ( *(_QWORD *)v188 == 2 )
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v188[8]);
    else
      memcpy(__dst, &v188[8], 0x90u);
    v164[6] = 2;
    v164[0] = 0;
    v164[2] = 0;
    v164[4] = 0;
    v165 = v73;
    v74 = v166;
    v75 = __dst;
    v76 = memcpy(v166, __dst, sizeof(v166));
    v167 = 0;
  }
  else
  {
    *(_QWORD *)&v188[32] = *(_QWORD *)v208;
    *(_QWORD *)&v188[40] = v213;
    *(_QWORD *)&v188[48] = v176;
    *(_QWORD *)&v188[56] = &v189;
    *(_QWORD *)v188 = v184;
    *(_QWORD *)&v188[8] = v185;
    *(_QWORD *)&v188[16] = v186;
    *(_QWORD *)&v188[24] = v187;
    v188[64] = 1;
    v74 = v164;
    v75 = v163;
    v76 = codexmate_lib::core::repository::refresh_subscription_metadata::hcbe8bf490ef7aa58(
            v164,
            (__int64)v163,
            (__int64)v188);
    if ( v164[0] )
    {
      LODWORD(v198) = 1;
      if ( v167 )
        LODWORD(v199) = 1;
      else
        HIDWORD(v198) = 1;
    }
  }
  LOBYTE(v76) = 1;
  LODWORD(v213) = (_DWORD)v76;
  __dst[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v74, v75);
  LODWORD(__dst[1]) = v77;
  std::time::SystemTime::duration_since::had059553cab94f96(v188, __dst, 0, 0);
  v79 = 0;
  v80 = 0;
  if ( !v188[0] )
    v80 = *(_QWORD *)&v188[8];
  if ( v163[9] != 0x8000000000000000LL )
  {
    if ( (codexmate_lib::core::oauth_refresh::token_remaining_seconds::h718707a516734df6(v163[10], v163[11]) & 1) != 0 )
    {
      v78 += v80;
      v79 = 1;
    }
    else
    {
      v79 = 0;
    }
  }
  v81 = v214;
  if ( v40 < v214[103] )
  {
    v82 = 4;
    if ( v211 < 0 )
      v82 = v211;
    v83 = v214[102];
    *(_QWORD *)(v83 + v39 + 160) = v79;
    *(_QWORD *)(v83 + v39 + 168) = v78;
    *(_BYTE *)(v83 + v39 + 176) = v82;
  }
  if ( (codexmate_lib::core::repository::apply_account_metadata::hdbdf600db9360b79(
          (__int64)v81,
          v40,
          v203,
          a4,
          (__int64)v164)
      & 1) != 0 )
  {
    v84 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)v81, v40);
    v214[94] = v84;
  }
  if ( !(_BYTE)v202 )
  {
    if ( !v72 )
    {
      v91 = __src;
      codexmate_lib::core::repository::sync_token_status_to_quota_store::h945cce6b53563565(v214, __src, 1);
      v93 = v214;
      v94 = v214[102] - 352LL;
      v95 = 352LL * v214[103];
      while ( v95 )
      {
        v91 = (_BYTE *)(v94 + 352);
        v95 -= 352;
        v96 = *(_BYTE *)(v94 + 689) == 1;
        v94 += 352;
        if ( v96 )
        {
          _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a(
            v188,
            v91,
            v92,
            v95);
          v97 = *(_QWORD *)v188;
          v91 = &v188[8];
          memcpy(__dst, &v188[8], sizeof(__dst));
          v93 = v214;
          goto LABEL_131;
        }
      }
      v97 = 2;
LABEL_131:
      if ( *((_DWORD *)v93 + 38) != 2 )
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v93 + 19, v91);
      v93[19] = v97;
      memcpy(v93 + 20, __dst, 0x158u);
      v98 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)(v93 + 20), (__int64)__dst);
      v99 = v214;
      v214[132] = v98;
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v188, a4, 0, 1, 1);
      v100 = *(_QWORD *)&v188[8];
      if ( *(_DWORD *)v188 != 1 )
      {
        v101 = *(_QWORD *)&v188[16];
        memcpy(*(void **)&v188[16], __s2, a4);
        *(_QWORD *)v188 = v100;
        *(_QWORD *)&v188[8] = v101;
        *(_QWORD *)&v188[16] = a4;
        codexmate_lib::core::repository::finish_refresh_report::h7931537c55f4f067(
          (__int64)v99,
          2u,
          v188,
          v201,
          (int *)&v196);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v99, 2);
        v102 = 57;
        v100 = 1;
        v103 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(57, 1);
        if ( v103 )
        {
          qmemcpy(v103, "Account credentials cannot produce an API request context", 57);
          v104 = v204;
          *v204 = 57;
          v104[1] = v103;
          v104[2] = 57;
LABEL_184:
          v133 = 1;
          goto LABEL_185;
        }
LABEL_217:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v100, v102);
      }
LABEL_216:
      v102 = *(_QWORD *)&v188[16];
      goto LABEL_217;
    }
    v85 = v214;
    if ( (_BYTE)v207 )
    {
      codexmate_lib::core::api_client::test_api_connectivity::h010670e6f25f2492(
        (__int64)v188,
        (__int64)&v189,
        0,
        *(double *)a7.i64,
        a8);
      v86 = v188[56];
      if ( v188[56] )
      {
        __dst[0] = 0x8000000000000000LL;
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v188, &v189);
        v121 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1);
        if ( !v121 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29);
        qmemcpy(v121, "API connectivity probe failed", 29);
        __dst[0] = 29;
        __dst[1] = v121;
        __dst[2] = 29;
      }
      v122 = (unsigned __int8)(2 - v86);
      v123 = v214;
      codexmate_lib::core::repository::set_active_usage_api_status::h7ec1941553512039(v214, v40, v122, __dst);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..ApiProxyTestPayload$GT$::h2c94307f80dc1d34(v188);
      v85 = v123;
    }
LABEL_174:
    v140 = __src;
    codexmate_lib::core::repository::sync_token_status_to_quota_store::h945cce6b53563565(v85, __src, 1);
    v142 = v214;
    v143 = v214[102] - 352LL;
    v144 = 352LL * v214[103];
    while ( v144 )
    {
      v140 = (_BYTE *)(v143 + 352);
      v144 -= 352;
      v96 = *(_BYTE *)(v143 + 689) == 1;
      v143 += 352;
      if ( v96 )
      {
        _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a(
          v188,
          v140,
          v141,
          v144);
        v145 = *(_QWORD *)v188;
        v140 = &v188[8];
        memcpy(__dst, &v188[8], sizeof(__dst));
        v142 = v214;
        goto LABEL_179;
      }
    }
    v145 = 2;
LABEL_179:
    if ( *((_DWORD *)v142 + 38) != 2 )
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v142 + 19, v140);
    v142[19] = v145;
    memcpy(v142 + 20, __dst, 0x158u);
    v146 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)(v142 + 20), (__int64)__dst);
    v147 = v214;
    v214[132] = v146;
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v188, a4, 0, 1, 1);
    v100 = *(_QWORD *)&v188[8];
    if ( *(_DWORD *)v188 != 1 )
    {
      v148 = *(_QWORD *)&v188[16];
      memcpy(*(void **)&v188[16], __s2, a4);
      *(_QWORD *)v188 = v100;
      *(_QWORD *)&v188[8] = v148;
      *(_QWORD *)&v188[16] = a4;
      codexmate_lib::core::repository::finish_refresh_report::h7931537c55f4f067(
        (__int64)v147,
        2u,
        v188,
        v201,
        (int *)&v196);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v147, 2);
      v102 = 40;
      v100 = 1;
      v149 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1);
      if ( v149 )
      {
        qmemcpy(v149, "Token refresh failed, cannot fetch quota", 40);
        v150 = v204;
        *v204 = 40;
        v150[1] = v149;
        v150[2] = 40;
        goto LABEL_184;
      }
      goto LABEL_217;
    }
    goto LABEL_216;
  }
  ++*((_DWORD *)v214 + 226);
  HIDWORD(v199) = 1;
  if ( v72 )
  {
    if ( (_BYTE)v207 )
    {
      if ( v177[0] == 11 )
      {
        HIDWORD(v200) = 1;
        v85 = v214;
        goto LABEL_174;
      }
      v115 = codexmate_lib::core::models::CoreError::is_network_error::h264cac2060111438(v177);
      if ( codexmate_lib::core::models::CoreError::is_network_error::h264cac2060111438(v177) )
      {
        codexmate_lib::core::repository::enrich_single_account_usage::_$u7b$$u7b$closure$u7d$$u7d$::h4c3a423a29564fb1(
          v188,
          (__int64)v177);
        __dst[2] = *(_QWORD *)&v188[16];
        v116 = *(_QWORD *)v188;
        __dst[1] = *(_QWORD *)&v188[8];
      }
      else
      {
        v116 = 0x8000000000000000LL;
      }
      __dst[0] = v116;
      codexmate_lib::core::repository::set_active_usage_api_status::h7ec1941553512039(
        v214,
        v40,
        (unsigned __int8)(v115 + 1),
        __dst);
      HIDWORD(v200) = 1;
    }
    else
    {
      HIDWORD(v200) = 1;
      v85 = v214;
      if ( v177[0] == 11 )
        goto LABEL_174;
    }
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::he3b02506b1ba193d(v188, v177);
    __dst[2] = *(_QWORD *)&v188[16];
    __dst[1] = *(_QWORD *)&v188[8];
    __dst[0] = *(_QWORD *)v188;
    v134 = v214 + 107;
    v135 = v214[107];
    if ( v135 != 0x8000000000000000LL && v135 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214[108], v135, 1);
    v134[2] = __dst[2];
    v136 = __dst[0];
    v134[1] = __dst[1];
    *v134 = v136;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v188, v172);
    __dst[2] = *(_QWORD *)&v188[16];
    __dst[1] = *(_QWORD *)&v188[8];
    __dst[0] = *(_QWORD *)v188;
    v85 = v214;
    v137 = v214 + 110;
    v138 = v214[110];
    if ( v138 != 0x8000000000000000LL && v138 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214[111], v138, 1);
    v137[2] = __dst[2];
    v139 = __dst[0];
    v137[1] = __dst[1];
    *v137 = v139;
    goto LABEL_174;
  }
  if ( v177[0] != 11 )
  {
    qmemcpy(v162, v177, sizeof(v162));
    HIDWORD(v200) = 1;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::he3b02506b1ba193d(v188, v162);
    __dst[2] = *(_QWORD *)&v188[16];
    __dst[1] = *(_QWORD *)&v188[8];
    __dst[0] = *(_QWORD *)v188;
    v105 = v214 + 107;
    v106 = v214[107];
    if ( v106 != 0x8000000000000000LL && v106 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214[108], v106, 1);
    v105[2] = __dst[2];
    v107 = __dst[0];
    v105[1] = __dst[1];
    *v105 = v107;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v188, v172);
    __dst[2] = *(_QWORD *)&v188[16];
    __dst[1] = *(_QWORD *)&v188[8];
    __dst[0] = *(_QWORD *)v188;
    v108 = v214 + 110;
    v109 = v214[110];
    if ( v109 != 0x8000000000000000LL && v109 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214[111], v109, 1);
    v108[2] = __dst[2];
    v110 = __dst[0];
    v108[1] = __dst[1];
    *v108 = v110;
    v111 = codexmate_lib::core::models::CoreError::is_network_error::h264cac2060111438(v162);
    v112 = v214;
    v113 = v111;
    if ( codexmate_lib::core::models::CoreError::is_network_error::h264cac2060111438(v162) )
    {
      _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::he3b02506b1ba193d(v188, v162);
      __dst[2] = *(_QWORD *)&v188[16];
      v114 = *(_QWORD *)v188;
      __dst[1] = *(_QWORD *)&v188[8];
    }
    else
    {
      v114 = 0x8000000000000000LL;
    }
    __dst[0] = v114;
    codexmate_lib::core::repository::set_active_usage_api_status::h7ec1941553512039(
      v112,
      v40,
      (unsigned __int8)(v113 + 1),
      __dst);
    v124 = __src;
    codexmate_lib::core::repository::sync_token_status_to_quota_store::h945cce6b53563565(v112, __src, 1);
    v126 = v112[102] - 352LL;
    v127 = 352LL * v112[103];
    while ( v127 )
    {
      v124 = (_BYTE *)(v126 + 352);
      v127 -= 352;
      v96 = *(_BYTE *)(v126 + 689) == 1;
      v126 += 352;
      if ( v96 )
      {
        _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a(
          v188,
          v124,
          v125,
          v127);
        v128 = *(_QWORD *)v188;
        v124 = &v188[8];
        memcpy(__dst, &v188[8], sizeof(__dst));
        goto LABEL_161;
      }
    }
    v128 = 2;
LABEL_161:
    if ( *((_DWORD *)v112 + 38) != 2 )
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v112 + 19, v124);
    v112[19] = v128;
    memcpy(v112 + 20, __dst, 0x158u);
    v112[132] = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)(v112 + 20), (__int64)__dst);
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v188, a4, 0, 1, 1);
    v129 = *(_QWORD *)&v188[8];
    if ( *(_DWORD *)v188 == 1 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*(_QWORD *)&v188[8], *(_QWORD *)&v188[16]);
    v130 = *(_QWORD *)&v188[16];
    memcpy(*(void **)&v188[16], __s2, a4);
    *(_QWORD *)v188 = v129;
    *(_QWORD *)&v188[8] = v130;
    *(_QWORD *)&v188[16] = a4;
    codexmate_lib::core::repository::finish_refresh_report::h7931537c55f4f067(
      (__int64)v112,
      2u,
      v188,
      v201,
      (int *)&v196);
    *(_QWORD *)v188 = v162;
    *(_QWORD *)&v188[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v175, &unk_1017C9C74, v188);
    v131 = v204;
    v204[2] = v175[2];
    v132 = v175[0];
    v131[1] = v175[1];
    *v131 = v132;
    LODWORD(v213) = 0;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v162);
    v133 = 0;
LABEL_185:
    if ( (_DWORD)v165 == 2 )
    {
      if ( v176[0] == 0x8000000000000000LL )
        goto LABEL_187;
    }
    else
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v165);
      if ( v176[0] == 0x8000000000000000LL )
      {
LABEL_187:
        if ( ((LODWORD(v177[0]) != 11) & (unsigned __int8)v133) == 0 )
          goto LABEL_192;
        goto LABEL_191;
      }
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreWarning$GT$::h62f2d75346d7894b(v176);
    if ( ((LODWORD(v177[0]) != 11) & (unsigned __int8)v133) == 0 )
    {
LABEL_192:
      if ( v211 >= (__int64)0x8000000000000004LL && v211 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v183, v211, 1);
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v163);
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(v179);
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, 24, 8);
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::hc966ec4ee6566445(&v168);
      v51 = v212;
      v52 = __n;
      if ( !__n )
        goto LABEL_45;
      goto LABEL_44;
    }
LABEL_191:
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v177);
    goto LABEL_192;
  }
  if ( LODWORD(v177[1]) == 3 )
  {
    LODWORD(v200) = 1;
    v87 = v214;
    ++*((_DWORD *)v214 + 227);
    *(_QWORD *)v188 = 0x8000000000000000LL;
    codexmate_lib::core::repository::set_active_usage_api_status::h7ec1941553512039(v87, v40, 1, v188);
    v193 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)v87, v40);
    v88 = v214;
    if ( v40 < v214[103] )
    {
      v89 = v214[102];
      *(_QWORD *)(v89 + v39 + 80) = 2;
      *(_QWORD *)(v89 + v39 + 120) = 2;
      *(_BYTE *)(v89 + v39 + 338) = 1;
      *(_QWORD *)(v89 + v39 + 64) = 1;
      *(_QWORD *)(v89 + v39 + 72) = v193;
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v172);
      v90 = *(_QWORD *)(v89 + v39 + 160);
      if ( v90 != 2 )
      {
        LOBYTE(v88) = *(_BYTE *)(v89 + v39 + 176);
        v39 = *(_QWORD *)(v89 + v39 + 168);
      }
      v151 = codexmate_lib::core::repository::subscription_clock_millis::h8afb5e6841c83cc0();
      *(_QWORD *)&v188[136] = __dst[2];
      *(_QWORD *)&v188[128] = __dst[1];
      *(_QWORD *)&v188[120] = __dst[0];
      *(_QWORD *)&v188[144] = v193;
      v188[152] = 1;
      *(_QWORD *)&v188[16] = 2;
      *(_QWORD *)&v188[56] = 2;
      *(_QWORD *)&v188[96] = v90;
      *(_QWORD *)&v188[104] = v39;
      v188[112] = (_BYTE)v88;
      *(_QWORD *)v188 = 1;
      *(_QWORD *)&v188[8] = v151;
      codexmate_lib::core::quota_store::upsert_item::h053aeb5691e92848(v214 + 96, v188, v193);
      v88 = v214;
    }
  }
  else
  {
    qmemcpy(v188, &v177[1], 0x50u);
    v117 = v177[11];
    *(_DWORD *)&v188[84] = HIDWORD(v177[11]);
    *(_DWORD *)&v188[81] = *(_DWORD *)((char *)&v177[11] + 1);
    LODWORD(v200) = 1;
    v118 = v214;
    ++*((_DWORD *)v214 + 227);
    v188[80] = v117;
    codexmate_lib::core::repository::apply_usage_result::h8817d9c50b687ed7(
      v118,
      v180,
      v193,
      &v168,
      (__int64)v188,
      *(double *)a7.i64,
      a8);
    if ( v117 != 8 )
    {
      v119 = v214;
      if ( (unsigned __int8)codexmate_lib::core::repository::reconcile_subscription_with_live_plan::h955957b03fa108a6(
                              v214,
                              v40,
                              v203,
                              a4) )
      {
        v120 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)v119, v40);
        v214[94] = v120;
      }
    }
    *(_QWORD *)v188 = 0x8000000000000000LL;
    v88 = v214;
    codexmate_lib::core::repository::set_active_usage_api_status::h7ec1941553512039(v214, v40, 1, v188);
  }
  v152 = __src;
  codexmate_lib::core::repository::sync_token_status_to_quota_store::h945cce6b53563565(v88, __src, 1);
  v154 = v214[102] - 352LL;
  v155 = 352LL * v214[103];
  while ( v155 )
  {
    v152 = (_BYTE *)(v154 + 352);
    v155 -= 352;
    v96 = *(_BYTE *)(v154 + 689) == 1;
    v154 += 352;
    if ( v96 )
    {
      _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a(
        v188,
        v152,
        v153,
        v155);
      v156 = *(_QWORD *)v188;
      v152 = &v188[8];
      memcpy(__dst, &v188[8], sizeof(__dst));
      goto LABEL_204;
    }
  }
  v156 = 2;
LABEL_204:
  v157 = v214;
  if ( *((_DWORD *)v214 + 38) != 2 )
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v214 + 19, v152);
  v157[19] = v156;
  memcpy(v157 + 20, __dst, 0x158u);
  v158 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)(v157 + 20), (__int64)__dst);
  v159 = v214;
  v214[132] = v158;
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v188, a4, 0, 1, 1);
  v100 = *(_QWORD *)&v188[8];
  if ( *(_DWORD *)v188 == 1 )
    goto LABEL_216;
  v160 = *(_QWORD *)&v188[16];
  memcpy(*(void **)&v188[16], __s2, a4);
  *(_QWORD *)v188 = v100;
  *(_QWORD *)&v188[8] = v160;
  *(_QWORD *)&v188[16] = a4;
  codexmate_lib::core::repository::finish_refresh_report::h7931537c55f4f067((__int64)v159, 2u, v188, v201, (int *)&v196);
  *v204 = 0x8000000000000000LL;
  if ( (_DWORD)v165 != 2 )
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v165);
  if ( v176[0] != 0x8000000000000000LL )
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreWarning$GT$::h62f2d75346d7894b(v176);
  core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenRefreshOutcome$GT$::h2a61db83e9800a58(v211, v183);
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v163);
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(v179);
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::hc966ec4ee6566445(&v168);
  if ( __n )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v195, __n, 1);
  v54 = v212;
  if ( v212 )
  {
    v53 = v194;
LABEL_47:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v54, 1);
  }
LABEL_48:
  if ( 2 * v189 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, v189, 1);
  return v204;
}
