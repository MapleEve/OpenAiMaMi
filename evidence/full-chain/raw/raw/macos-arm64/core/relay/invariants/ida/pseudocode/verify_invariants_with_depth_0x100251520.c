// __ZN13codexmate_lib4core5relay10invariants28verify_invariants_with_depth @ 0x100251520
// [FULL — IDA decompiler 全解 40867B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::core::relay::invariants::verify_invariants_with_depth | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::core::relay::invariants::verify_invariants_with_depth::h960ecc8c9694ee1f(
        _QWORD *a1,
        const __m128i *a2,
        char a3,
        int a4)
{
  const __m128i *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int8 *v17; // rbx
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r14
  void *v24; // rax
  void *v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // r12
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rcx
  void *v37; // rax
  void *v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // r14
  __int64 v44; // r12
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rcx
  void *v48; // rax
  void *v49; // rbx
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rcx
  void *v53; // rax
  void *v54; // rbx
  __int64 v55; // r14
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r14
  unsigned __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // rbx
  bool v62; // cc
  __int64 v63; // rbx
  __int64 v64; // r14
  __int64 v65; // r12
  __int64 v66; // r15
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r14
  const __m128i *v70; // rbx
  __int64 (__fastcall *v71)(); // r15
  __int64 v72; // r13
  __int64 v73; // r12
  __int64 v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // r14
  size_t v77; // rbx
  __int64 v79; // rbx
  __int64 v80; // r14
  __int64 v81; // r12
  __int64 v82; // r15
  __int64 v83; // rcx
  __int64 v84; // r14
  __int64 v85; // rbx
  const __m128i *v86; // r12
  const __m128i *v88; // r13
  int v89; // r15d
  __int64 v90; // rax
  __int64 v91; // rsi
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // r14
  bool v94; // zf
  unsigned __int64 v95; // r14
  _QWORD *v96; // rdi
  char v97; // bl
  __int64 v98; // r14
  void *v99; // rax
  void *v100; // rbx
  __int64 v101; // r14
  __int64 v102; // rax
  __int64 v103; // rcx
  void *v104; // rax
  void *v105; // rbx
  __int64 v106; // r14
  __int64 v107; // rax
  __int64 v108; // rcx
  const __m128i *v109; // r14
  __int64 v110; // r15
  __int64 v111; // r12
  __int64 v112; // rbx
  __int64 v113; // r15
  __int64 v114; // r13
  __int64 v115; // r12
  __int64 v116; // rax
  __int64 v117; // rcx
  int v119; // r12d
  __int64 v120; // r15
  __int64 v121; // rbx
  __int64 v122; // r13
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r14
  __int64 v126; // rbx
  __int64 v127; // r15
  const __m128i *v129; // r12
  int v130; // r13d
  __int64 v131; // rax
  __int64 v132; // rsi
  unsigned __int64 v133; // rax
  __int64 v134; // r14
  __int64 v135; // r14
  const __m128i *v136; // r15
  const __m128i *v137; // rbx
  __int64 v138; // r14
  __int64 v139; // r12
  __int64 v140; // r15
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rdx
  const __m128i *v145; // rbx
  __int64 v146; // r14
  __int64 v147; // r12
  __int64 v148; // r15
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rbx
  __int64 v152; // r14
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // r15
  __int64 v156; // r12
  __int64 v157; // r13
  const __m128i *v158; // rdi
  void *v159; // rax
  void *v160; // rbx
  __int64 v161; // r14
  __int64 v162; // rax
  __int64 v163; // rcx
  void *v164; // rax
  void *v165; // rbx
  __int64 v166; // r14
  __int64 v167; // rax
  __int64 v168; // rcx
  void *v169; // rax
  void *v170; // rbx
  __int64 v171; // r14
  __int64 v172; // rax
  __int64 v173; // rcx
  void *v174; // rax
  void *v175; // rbx
  __int64 v176; // r14
  __int64 v177; // rax
  __int64 v178; // rcx
  const __m128i *v179; // rbx
  __int64 v180; // r14
  __int64 v181; // r12
  __int64 v182; // r15
  __int64 v183; // rax
  __int64 v184; // rcx
  _DWORD *v185; // rax
  const __m128i *v186; // rbx
  __int64 v187; // r14
  __int64 v188; // r12
  __int64 v189; // r15
  __int64 v190; // rax
  __int64 v191; // rcx
  _QWORD *v192; // rdx
  __int64 v193; // rax
  _QWORD v195[3]; // [rsp+8h] [rbp-2E8h] BYREF
  _QWORD v196[3]; // [rsp+20h] [rbp-2D0h] BYREF
  _QWORD v197[2]; // [rsp+38h] [rbp-2B8h] BYREF
  _QWORD v198[2]; // [rsp+48h] [rbp-2A8h] BYREF
  _QWORD __src[22]; // [rsp+58h] [rbp-298h] BYREF
  char v200; // [rsp+108h] [rbp-1E8h] BYREF
  char v201; // [rsp+110h] [rbp-1E0h] BYREF
  char v202; // [rsp+118h] [rbp-1D8h]
  unsigned __int8 v203; // [rsp+11Fh] [rbp-1D1h] BYREF
  char v204; // [rsp+120h] [rbp-1D0h] BYREF
  unsigned __int8 v205; // [rsp+121h] [rbp-1CFh] BYREF
  __int64 v206; // [rsp+138h] [rbp-1B8h] BYREF
  __int64 v207; // [rsp+140h] [rbp-1B0h]
  __int64 v208; // [rsp+148h] [rbp-1A8h]
  _QWORD *v209; // [rsp+150h] [rbp-1A0h]
  __int64 v210; // [rsp+158h] [rbp-198h]
  const __m128i *v211; // [rsp+160h] [rbp-190h] BYREF
  __int64 (__fastcall *v212)(); // [rsp+168h] [rbp-188h]
  __int64 v213; // [rsp+170h] [rbp-180h]
  __int64 (__fastcall *v214)(); // [rsp+178h] [rbp-178h]
  _QWORD __dst[22]; // [rsp+180h] [rbp-170h] BYREF
  int v216; // [rsp+234h] [rbp-BCh]
  const __m128i *v217; // [rsp+238h] [rbp-B8h] BYREF
  __int64 (__fastcall *v218)(); // [rsp+240h] [rbp-B0h]
  __int64 v219; // [rsp+248h] [rbp-A8h]
  const __m128i *v220; // [rsp+250h] [rbp-A0h]
  const __m128i *v221; // [rsp+258h] [rbp-98h] BYREF
  __int64 v222; // [rsp+260h] [rbp-90h]
  __int64 v223; // [rsp+268h] [rbp-88h]
  __int64 v224; // [rsp+270h] [rbp-80h]
  __int64 v225; // [rsp+278h] [rbp-78h]
  __int64 v226; // [rsp+280h] [rbp-70h]
  const __m128i *v227; // [rsp+288h] [rbp-68h]
  __int64 v228; // [rsp+290h] [rbp-60h] BYREF
  __int64 v229; // [rsp+298h] [rbp-58h]
  __int64 v230; // [rsp+2A0h] [rbp-50h]
  __int64 v231; // [rsp+2A8h] [rbp-48h]
  __int64 v232; // [rsp+2B0h] [rbp-40h] BYREF
  __int64 v233; // [rsp+2B8h] [rbp-38h]
  __int64 v234; // [rsp+2C0h] [rbp-30h]

  v6 = a2;
  v209 = a1;
  v232 = 0;
  v233 = 8;
  v234 = 0;
  v7 = a2[3].i64[1];
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__src, v7, v6[4].i64[0]);
  v8 = __src[0];
  v9 = __src[1];
  v227 = v6;
  v216 = a4;
  if ( __OFSUB__(-__src[0], 1) )
  {
    switch ( __src[1] & 3 )
    {
      case 0:
        if ( *(_BYTE *)(__src[1] + 16LL) )
          goto LABEL_11;
        goto LABEL_9;
      case 1:
        if ( *(_BYTE *)(__src[1] + 15LL) )
          goto LABEL_11;
        v17 = (__int8 *)(__src[1] - 1LL);
        v18 = *(_QWORD *)(__src[1] - 1LL);
        v19 = *(_QWORD *)(__src[1] + 7LL);
        if ( *(_QWORD *)v19 )
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD))v19)(*(_QWORD *)(__src[1] - 1LL), v7, __src[1]);
        goto LABEL_18;
      case 2:
        if ( HIDWORD(__src[1]) != 2 )
          goto LABEL_11;
        goto LABEL_9;
      case 3:
        if ( HIDWORD(__src[1]) )
        {
LABEL_11:
          v221 = (const __m128i *)__src[1];
          __dst[0] = &v221;
          __dst[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v196, &unk_1017B96B6, __dst);
          v11 = v196[0];
          v12 = v196[1];
          v13 = v196[2];
          v14 = v234;
          if ( v234 == v232 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
          v15 = v233;
          v16 = 32 * v14;
          *(_QWORD *)(v233 + v16) = v11;
          *(_QWORD *)(v15 + v16 + 8) = v12;
          *(_QWORD *)(v15 + v16 + 16) = v13;
          *(_BYTE *)(v15 + v16 + 24) = 0;
          v234 = v14 + 1;
          if ( ((unsigned __int8)v221 & 3) == 1 )
          {
            v17 = &v221[-1].i8[15];
            v18 = *(__int64 *)((char *)&v221[-1].i64[1] + 7);
            v19 = *(__int64 *)((char *)v221->i64 + 7);
            if ( *(_QWORD *)v19 )
              (*(void (__fastcall **)(__int64))v19)(v18);
LABEL_18:
            v20 = *(_QWORD *)(v19 + 8);
            if ( v20 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v20, *(_QWORD *)(v19 + 16));
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 24, 8);
          }
          v9 = 1;
          v10 = 0;
          v8 = 0;
          v6 = v227;
        }
        else
        {
LABEL_9:
          v9 = 1;
          v10 = 0;
          v8 = 0;
        }
        break;
    }
  }
  else
  {
    v10 = __src[2];
  }
  v231 = v8;
  v210 = v9;
  if ( a3 )
  {
    v21 = (__int64)__src;
    v22 = (__int64)v6;
    codexmate_lib::core::relay::invariants::RouterConfigSurface::parse::hdc7c7739ede0b191(
      (__int64)__src,
      (__int64)v6,
      (void *)v9,
      v10);
    if ( __src[3] != 0x8000000000000000LL
      && __src[5] == 6
      && !(*(_DWORD *)__src[4] ^ 0x616D6961 | *(unsigned __int16 *)(__src[4] + 4LL) ^ 0x3169) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v6);
      v23 = 59;
      v21 = 59;
      v22 = 1;
      v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1);
      if ( !v24 )
        goto LABEL_210;
      v25 = v24;
      qmemcpy(v24, "NativeOff must not keep top-level model_provider = \"aimai1\"", 59);
      v26 = v234;
      if ( v234 == v232 )
      {
        v21 = (__int64)&v232;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
      }
      v27 = v233;
      v28 = 32 * v26;
      *(_QWORD *)(v233 + v28) = 59;
      *(_QWORD *)(v27 + v28 + 8) = v25;
      *(_QWORD *)(v27 + v28 + 16) = 59;
      *(_BYTE *)(v27 + v28 + 24) = 0;
      v234 = v26 + 1;
    }
    if ( v203 || v204 )
    {
      __dst[0] = &v203;
      __dst[1] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
      __dst[2] = &v204;
      __dst[3] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
      v22 = (__int64)&unk_1017B958F;
      v21 = (__int64)&v228;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v228, &unk_1017B958F, __dst);
      v42 = v228;
      v43 = v229;
      v44 = v230;
      v45 = v234;
      if ( v234 == v232 )
      {
        v21 = (__int64)&v232;
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
      }
      v46 = v233;
      v47 = 32 * v45;
      *(_QWORD *)(v233 + v47) = v42;
      *(_QWORD *)(v46 + v47 + 8) = v43;
      *(_QWORD *)(v46 + v47 + 16) = v44;
      *(_BYTE *)(v46 + v47 + 24) = 0;
      v234 = v45 + 1;
      v6 = v227;
      if ( !v202 )
        goto LABEL_53;
    }
    else if ( !v202 )
    {
      goto LABEL_53;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v22);
    v23 = 59;
    v22 = 1;
    v48 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1);
    if ( !v48 )
      goto LABEL_210;
    v49 = v48;
    qmemcpy(v48, "NativeOff must not keep AiMaMi top-level model_catalog_json", 59);
    v50 = v234;
    if ( v234 == v232 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
    v51 = v233;
    v52 = 32 * v50;
    *(_QWORD *)(v233 + v52) = 59;
    *(_QWORD *)(v51 + v52 + 8) = v49;
    *(_QWORD *)(v51 + v52 + 16) = 59;
    *(_BYTE *)(v51 + v52 + 24) = 0;
    v234 = v50 + 1;
LABEL_53:
    if ( !(unsigned __int8)codexmate_lib::core::relay::config_takeover::backup_exists::h42f18c99a961aa37(v6) )
      goto LABEL_58;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v22);
    v23 = 39;
    v22 = 1;
    v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
    if ( v53 )
    {
      v54 = v53;
      qmemcpy(v53, "NativeOff must not keep takeover backup", 39);
      v55 = v234;
      if ( v234 == v232 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
      v56 = v233;
      v57 = 32 * v55;
      *(_QWORD *)(v233 + v57) = 39;
      *(_QWORD *)(v56 + v57 + 8) = v54;
      *(_QWORD *)(v56 + v57 + 16) = 39;
      *(_BYTE *)(v56 + v57 + 24) = 0;
      v234 = v55 + 1;
LABEL_58:
      if ( __src[9] == 0x8000000000000000LL )
        goto LABEL_151;
      v58 = __src[10];
      v59 = __src[11];
      v211 = (const __m128i *)__src[10];
      v212 = (__int64 (__fastcall *)())__src[11];
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
      v61 = v60;
      if ( *(_BYTE *)(v60 + 16) == 1 )
      {
        ++*(_QWORD *)v60;
        v62 = v59 <= 0xC;
        if ( v59 == 12 )
          goto LABEL_61;
      }
      else
      {
        v143 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
        *(_QWORD *)v61 = v143;
        *(_QWORD *)(v61 + 8) = v144;
        *(_BYTE *)(v61 + 16) = 1;
        *(_QWORD *)v61 = v143 + 1;
        v62 = v59 <= 0xC;
        if ( v59 == 12 )
        {
LABEL_61:
          if ( anon_3ce6d1417794db0febde534c64082f90_184 ^ *(_QWORD *)v58 | *(_DWORD *)(v58 + 8) ^ 0x79616C65u )
            goto LABEL_151;
LABEL_148:
          __dst[0] = &v211;
          __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
          v22 = (__int64)&unk_1017B95E8;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v221, &unk_1017B95E8, __dst);
          v145 = v221;
          v146 = v222;
          v147 = v223;
          v148 = v234;
          if ( v234 == v232 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
          v149 = v233;
          v150 = 32 * v148;
          *(_QWORD *)(v233 + v150) = v145;
          *(_QWORD *)(v149 + v150 + 8) = v146;
          *(_QWORD *)(v149 + v150 + 16) = v147;
          *(_BYTE *)(v149 + v150 + 24) = 0;
          v234 = v148 + 1;
LABEL_151:
          if ( __src[2] )
          {
            v151 = __src[1];
            v152 = 24LL * __src[2];
            do
            {
              v206 = v151;
              v217 = (const __m128i *)&v206;
              v218 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b;
              v22 = (__int64)&unk_1017B9628;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B9628, &v217);
              v220 = (const __m128i *)__dst[0];
              v155 = __dst[1];
              v156 = __dst[2];
              v157 = v234;
              if ( v234 == v232 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
              v151 += 24;
              v153 = v233;
              v154 = 32 * v157;
              *(_QWORD *)(v233 + v154) = v220;
              *(_QWORD *)(v153 + v154 + 8) = v155;
              *(_QWORD *)(v153 + v154 + 16) = v156;
              *(_BYTE *)(v153 + v154 + 24) = 0;
              v234 = v157 + 1;
              v152 -= 24;
            }
            while ( v152 );
          }
          v8 = v231;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$::h451ff63d780f3dd1(__src);
          v136 = v227;
          v158 = v227;
          if ( (unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::h09278a33efdd7fab(v227) )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v158, v22);
            v98 = 52;
            v22 = 1;
            v159 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1);
            if ( !v159 )
              goto LABEL_209;
            v160 = v159;
            qmemcpy(v159, "NativeOff must not keep a legacy virtual auth marker", 52);
            v161 = v234;
            if ( v234 == v232 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
            v162 = v233;
            v163 = 32 * v161;
            *(_QWORD *)(v233 + v163) = 52;
            *(_QWORD *)(v162 + v163 + 8) = v160;
            *(_QWORD *)(v162 + v163 + 16) = 52;
            *(_BYTE *)(v162 + v163 + 24) = 1;
            v234 = v161 + 1;
          }
          if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(v136) == 1 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v136, v22);
            v98 = 50;
            v22 = 1;
            v164 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(50, 1);
            if ( !v164 )
              goto LABEL_209;
            v165 = v164;
            qmemcpy(v164, "NativeOff must not keep virtual unlock auth active", 50);
            v166 = v234;
            if ( v234 == v232 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
            v167 = v233;
            v168 = 32 * v166;
            *(_QWORD *)(v233 + v168) = 50;
            *(_QWORD *)(v167 + v168 + 8) = v165;
            *(_QWORD *)(v167 + v168 + 16) = 50;
            *(_BYTE *)(v167 + v168 + 24) = 1;
            v234 = v166 + 1;
          }
          if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::marker_exists::h2162276b7b4c6489(v136) )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v136, v22);
            v98 = 50;
            v22 = 1;
            v169 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(50, 1);
            if ( !v169 )
              goto LABEL_209;
            v170 = v169;
            qmemcpy(v169, "NativeOff must not keep virtual unlock auth marker", 50);
            v171 = v234;
            if ( v234 == v232 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
            v172 = v233;
            v173 = 32 * v171;
            *(_QWORD *)(v233 + v173) = 50;
            *(_QWORD *)(v172 + v173 + 8) = v170;
            *(_QWORD *)(v172 + v173 + 16) = 50;
            *(_BYTE *)(v172 + v173 + 24) = 1;
            v234 = v171 + 1;
          }
          if ( !(unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163(v136)
            || (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::marker_exists::h2162276b7b4c6489(v136)
            || (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(v136) == 1 )
          {
LABEL_178:
            if ( !(_BYTE)v216 )
              codexmate_lib::core::relay::invariants::verify_thread_provider::h55e1a5cd88494940(v136, "openai; ", &v232);
            codexmate_lib::core::relay::codex_thread_visibility::inspect_relay_model_residue::ha09e0b2221be1f05(
              __src,
              v136);
            if ( __src[6] || __src[2] )
            {
              if ( __src[5] )
              {
                alloc::str::join_generic_copy::heca7a5e86402c6b6(__dst, __src[4], __src[5], &unk_1015DD30D, 3);
                v223 = __dst[2];
                v222 = __dst[1];
                v221 = (const __m128i *)__dst[0];
                v228 = (__int64)&v221;
                v229 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B93D7, &v228);
                if ( v221 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222, v221, 1);
                v228 = __dst[0];
                v229 = __dst[1];
                v230 = __dst[2];
              }
              else
              {
                v228 = 0;
                v229 = 1;
                v230 = 0;
              }
              v217 = (const __m128i *)__src[2];
              __dst[0] = &__src[6];
              __dst[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
              __dst[2] = &v217;
              __dst[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
              __dst[4] = &v228;
              __dst[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v221, &unk_1017B97D8, __dst);
              v179 = v221;
              v180 = v222;
              v181 = v223;
              v182 = v234;
              if ( v234 == v232 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
              v183 = v233;
              v184 = 32 * v182;
              *(_QWORD *)(v233 + v184) = v179;
              *(_QWORD *)(v183 + v184 + 8) = v180;
              *(_QWORD *)(v183 + v184 + 16) = v181;
              *(_BYTE *)(v183 + v184 + 24) = 3;
              v234 = v182 + 1;
              if ( v228 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v228, 1);
              v136 = v227;
            }
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_reconciler..RouterOnResult$GT$::h6e06eaf0a1fab1d9(__src);
            goto LABEL_193;
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v136, v22);
          v98 = 62;
          v174 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(62, 1);
          if ( v174 )
          {
            v175 = v174;
            qmemcpy(v174, "NativeOff must not keep an orphaned virtual unlock auth backup", 62);
            v176 = v234;
            if ( v234 == v232 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
            v177 = v233;
            v178 = 32 * v176;
            *(_QWORD *)(v233 + v178) = 62;
            *(_QWORD *)(v177 + v178 + 8) = v175;
            *(_QWORD *)(v177 + v178 + 16) = 62;
            *(_BYTE *)(v177 + v178 + 24) = 1;
            v234 = v176 + 1;
            goto LABEL_178;
          }
LABEL_209:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v98);
        }
      }
      if ( v62
        || *(_QWORD *)v58 ^ anon_3ce6d1417794db0febde534c64082f90_194
         | *(_QWORD *)(v58 + 5) ^ *(__int64 *)((char *)&anon_3ce6d1417794db0febde534c64082f90_194 + 5) )
      {
        goto LABEL_151;
      }
      goto LABEL_148;
    }
LABEL_210:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23);
  }
  v29 = __src;
  v30 = (__int64)v6;
  codexmate_lib::core::relay::invariants::RouterConfigSurface::parse::hdc7c7739ede0b191(
    (__int64)__src,
    (__int64)v6,
    (void *)v9,
    v10);
  if ( __src[3] == 0x8000000000000000LL
    || __src[5] != 6
    || *(_DWORD *)__src[4] ^ 0x616D6961 | *(unsigned __int16 *)(__src[4] + 4LL) ^ 0x3169 )
  {
    __dst[0] = &off_10195D4A0;
    __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    __dst[2] = &__src[3];
    __dst[3] = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hc3b1fe1208aa09e9;
    v30 = (__int64)&unk_1017B947A;
    v29 = v195;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v195, &unk_1017B947A, __dst);
    v31 = v195[0];
    v32 = v195[1];
    v33 = v195[2];
    v34 = v234;
    if ( v234 == v232 )
    {
      v29 = &v232;
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
    }
    v35 = v233;
    v36 = 32 * v34;
    *(_QWORD *)(v233 + v36) = v31;
    *(_QWORD *)(v35 + v36 + 8) = v32;
    *(_QWORD *)(v35 + v36 + 16) = v33;
    *(_BYTE *)(v35 + v36 + 24) = 0;
    v234 = v34 + 1;
    v6 = v227;
  }
  if ( (v205 & v203) != 0 )
  {
    if ( __src[15] == 0x8000000000000000LL )
    {
LABEL_42:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v30);
      v30 = 1;
      v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1);
      if ( !v37 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 46);
      v38 = v37;
      qmemcpy(v37, "RouterOn requires top-level model_catalog_json", 46);
      v39 = v234;
      if ( v234 == v232 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
      v40 = v233;
      v41 = 32 * v39;
      *(_QWORD *)(v233 + v41) = 46;
      *(_QWORD *)(v40 + v41 + 8) = v38;
      *(_QWORD *)(v40 + v41 + 16) = 46;
      *(_BYTE *)(v40 + v41 + 24) = 0;
      v234 = v39 + 1;
      goto LABEL_72;
    }
  }
  else
  {
    __dst[0] = &v203;
    __dst[1] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    __dst[2] = &v205;
    __dst[3] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    v30 = (__int64)&unk_1017B94BB;
    v29 = &v206;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v206, &unk_1017B94BB, __dst);
    v63 = v206;
    v64 = v207;
    v65 = v208;
    v66 = v234;
    if ( v234 == v232 )
    {
      v29 = &v232;
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
    }
    v67 = v233;
    v68 = 32 * v66;
    *(_QWORD *)(v233 + v68) = v63;
    *(_QWORD *)(v67 + v68 + 8) = v64;
    *(_QWORD *)(v67 + v68 + 16) = v65;
    *(_BYTE *)(v67 + v68 + 24) = 0;
    v234 = v66 + 1;
    v6 = v227;
    if ( __src[15] == 0x8000000000000000LL )
      goto LABEL_42;
  }
  if ( !v202 )
  {
    std::path::Path::_join::hb1a495d4f06b13b8(&v221, v6[36].i64[1], v6[37].i64[0], &unk_1015DD202, 25);
    v69 = v222;
    v228 = v222;
    v229 = v223;
    __dst[0] = &v228;
    __dst[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
    __dst[2] = &__src[15];
    __dst[3] = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hc3b1fe1208aa09e9;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v211, &unk_1017B950D, __dst);
    v70 = v211;
    v71 = v212;
    v72 = v213;
    v73 = v234;
    if ( v234 == v232 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
    v74 = v233;
    v75 = 32 * v73;
    *(_QWORD *)(v233 + v75) = v70;
    *(_QWORD *)(v74 + v75 + 8) = v71;
    *(_QWORD *)(v74 + v75 + 16) = v72;
    *(_BYTE *)(v74 + v75 + 24) = 0;
    v234 = v73 + 1;
    v30 = (__int64)v221;
    if ( v221 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v221, 1);
    v8 = v231;
    v6 = v227;
  }
LABEL_72:
  if ( __src[9] != 0x8000000000000000LL )
  {
    v76 = (_QWORD *)__src[10];
    v77 = __src[11];
    v198[0] = __src[10];
    v198[1] = __src[11];
    std::path::Path::_join::hb1a495d4f06b13b8(&v217, v6[36].i64[1], v6[37].i64[0], &unk_1015DD202, 25);
    v214 = v218;
    codexmate_lib::core::relay::codex_catalog::read_catalog_model_slugs::h46c2cb13952476e9(__dst, v218, v219);
    v220 = (const __m128i *)__dst[0];
    if ( __dst[0] == 11 )
    {
      v226 = __dst[6];
      v225 = __dst[5];
      v224 = __dst[4];
      v223 = __dst[3];
      v222 = __dst[2];
      v221 = (const __m128i *)__dst[1];
      _RAX = codexmate_lib::core::relay::codex_writer::top_level_relay_model_requires_cleanup::hf8fb25c63ce8a656(
               v76,
               v77,
               1,
               (__int64 *)&v221);
      if ( (_BYTE)_RAX )
      {
        v197[0] = v198;
        v197[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v228, &unk_1017B954B, v197);
        v79 = v228;
        v80 = v229;
        v81 = v230;
        v82 = v234;
        if ( v234 == v232 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
        _RAX = v233;
        v83 = 32 * v82;
        *(_QWORD *)(v233 + v83) = v79;
        *(_QWORD *)(_RAX + v83 + 8) = v80;
        *(_QWORD *)(_RAX + v83 + 16) = v81;
        *(_BYTE *)(_RAX + v83 + 24) = 0;
        v234 = v82 + 1;
        v6 = v227;
      }
      v84 = v222;
      if ( v222 )
      {
        v85 = v224;
        if ( v224 )
        {
          v86 = v221;
          _R15D = ~_mm_movemask_epi8(_mm_load_si128(v221));
          v88 = v221 + 1;
          do
          {
            if ( !(_WORD)_R15D )
            {
              do
              {
                v89 = _mm_movemask_epi8(_mm_load_si128(v88));
                v86 -= 24;
                ++v88;
              }
              while ( v89 == 0xFFFF );
              _R15D = ~v89;
            }
            __asm { tzcnt   eax, r15d }
            v90 = -3 * _RAX;
            v91 = *((_QWORD *)&v86[-1] + v90 - 1);
            if ( v91 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86[-1].i64[v90], v91, 1);
            --v85;
            _RAX = _R15D & (unsigned int)(_R15D - 1);
            _R15D &= _R15D - 1;
          }
          while ( v85 );
        }
        v92 = (24 * v84 + 39) & 0xFFFFFFFFFFFFFFF0LL;
        v93 = v92 + v84;
        v94 = v93 == -17;
        v95 = v93 + 17;
        v8 = v231;
        v6 = v227;
        if ( !v94 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v221 - v92, v95, 16);
      }
    }
    v30 = (__int64)v217;
    if ( v217 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214, v217, 1);
    if ( (_DWORD)v220 != 11 )
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$::h451ff63d780f3dd1(__src);
  if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(v6) != 1 )
  {
    v30 = v6[2].i64[0];
    codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, v30, v6[2].i64[1]);
    if ( __src[0] == 0x8000000000000001LL )
    {
      v96 = &__src[1];
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]);
    }
    else
    {
      v30 = (__int64)__src;
      memcpy(__dst, __src, sizeof(__dst));
      v97 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h1af7e13263bef1f7(__dst);
      v96 = __dst;
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(__dst);
      if ( v97 )
        goto LABEL_101;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v96, v30);
    v98 = 71;
    v99 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(71, 1);
    if ( !v99 )
      goto LABEL_209;
    v100 = v99;
    v30 = (__int64)"RouterOn requires either virtual unlock auth or usable real OAuth login";
    memcpy(v99, "RouterOn requires either virtual unlock auth or usable real OAuth login", 0x47u);
    v101 = v234;
    if ( v234 == v232 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
    v102 = v233;
    v103 = 32 * v101;
    *(_QWORD *)(v233 + v103) = 71;
    *(_QWORD *)(v102 + v103 + 8) = v100;
    *(_QWORD *)(v102 + v103 + 16) = 71;
    *(_BYTE *)(v102 + v103 + 24) = 1;
    v234 = v101 + 1;
  }
LABEL_101:
  if ( (unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::h09278a33efdd7fab(v6) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v30);
    v98 = 51;
    v104 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(51, 1);
    if ( !v104 )
      goto LABEL_209;
    v105 = v104;
    qmemcpy(v104, "RouterOn must not keep a legacy virtual auth marker", 51);
    v106 = v234;
    if ( v234 == v232 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
    v107 = v233;
    v108 = 32 * v106;
    *(_QWORD *)(v233 + v108) = 51;
    *(_QWORD *)(v107 + v108 + 8) = v105;
    *(_QWORD *)(v107 + v108 + 16) = 51;
    *(_BYTE *)(v107 + v108 + 24) = 1;
    v234 = v106 + 1;
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v228, v6[36].i64[1], v6[37].i64[0], &unk_1015DD202, 25);
  v109 = (const __m128i *)v229;
  v110 = v230;
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v229, v230);
  v111 = __src[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    __src[0],
    __src[1]);
  if ( v111 )
  {
    v221 = v109;
    v222 = v110;
    __dst[0] = &v221;
    __dst[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017B9664, __dst);
    v112 = __src[0];
    v113 = __src[1];
    v114 = __src[2];
    v115 = v234;
    if ( v234 == v232 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
    v116 = v233;
    v117 = 32 * v115;
    *(_QWORD *)(v233 + v117) = v112;
    *(_QWORD *)(v116 + v117 + 8) = v113;
    *(_QWORD *)(v116 + v117 + 16) = v114;
    *(_BYTE *)(v116 + v117 + 24) = 2;
    v234 = v115 + 1;
    if ( v228 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v228, 1);
    v8 = v231;
  }
  else
  {
    HIDWORD(_RAX) = (unsigned __int64)codexmate_lib::core::relay::codex_catalog::read_catalog_model_slugs::h46c2cb13952476e9(
                                        __dst,
                                        v109,
                                        v110) >> 32;
    v119 = __dst[0];
    if ( __dst[0] != 11 )
    {
      qmemcpy(__src, __dst, 0x60u);
      v217 = (const __m128i *)__src;
      v218 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v221, &unk_1017B9687, &v217);
      v220 = v221;
      v120 = v222;
      v121 = v223;
      v122 = v234;
      if ( v234 == v232 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
      v123 = v233;
      v124 = 32 * v122;
      *(_QWORD *)(v233 + v124) = v220;
      *(_QWORD *)(v123 + v124 + 8) = v120;
      *(_QWORD *)(v123 + v124 + 16) = v121;
      *(_BYTE *)(v123 + v124 + 24) = 2;
      v234 = v122 + 1;
      HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src) >> 32;
      v8 = v231;
    }
    if ( v228 )
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v228, 1) >> 32;
    if ( v119 == 11 )
    {
      v125 = __dst[2];
      if ( __dst[2] )
      {
        v126 = __dst[4];
        if ( __dst[4] )
        {
          v127 = __dst[1];
          _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)__dst[1]));
          v129 = (const __m128i *)(__dst[1] + 16LL);
          do
          {
            if ( !(_WORD)_R13D )
            {
              do
              {
                v130 = _mm_movemask_epi8(_mm_load_si128(v129));
                v127 -= 384;
                ++v129;
              }
              while ( v130 == 0xFFFF );
              _R13D = ~v130;
            }
            __asm { tzcnt   eax, r13d }
            v131 = -3 * _RAX;
            v132 = *(_QWORD *)(v127 + 8 * v131 - 24);
            if ( v132 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v127 + 8 * v131 - 16), v132, 1);
            --v126;
            _RAX = _R13D & (unsigned int)(_R13D - 1);
            _R13D &= _R13D - 1;
          }
          while ( v126 );
        }
        v133 = (24 * v125 + 39) & 0xFFFFFFFFFFFFFFF0LL;
        v134 = v133 + v125;
        v94 = v134 == -17;
        v135 = v134 + 17;
        v8 = v231;
        if ( !v94 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1] - v133, v135, 16);
      }
    }
  }
  v136 = v227;
  if ( !(_BYTE)v216 )
    codexmate_lib::core::relay::invariants::verify_thread_provider::h55e1a5cd88494940(
      v227,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_97,
      &v232);
  codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_model_catalog::hef17cfa3d974fdef(
    __src,
    v136);
  if ( __src[8] || __src[2] )
  {
    if ( __src[5] )
    {
      alloc::str::join_generic_copy::heca7a5e86402c6b6(__dst, __src[4], __src[5], &unk_1015DD30D, 3);
      v223 = __dst[2];
      v222 = __dst[1];
      v221 = (const __m128i *)__dst[0];
      v228 = (__int64)&v221;
      v229 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B93D7, &v228);
      if ( v221 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222, v221, 1);
      v228 = __dst[0];
      v229 = __dst[1];
      v230 = __dst[2];
    }
    else
    {
      v228 = 0;
      v229 = 1;
      v230 = 0;
    }
    v217 = (const __m128i *)__src[2];
    __dst[0] = &__src[8];
    __dst[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    __dst[2] = &__src[9];
    __dst[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    __dst[4] = &v217;
    __dst[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    __dst[6] = &v228;
    __dst[7] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v221, &unk_1017B9773, __dst);
    v137 = v221;
    v138 = v222;
    v139 = v223;
    v140 = v234;
    if ( v234 == v232 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
    v141 = v233;
    v142 = 32 * v140;
    *(_QWORD *)(v233 + v142) = v137;
    *(_QWORD *)(v141 + v142 + 8) = v138;
    *(_QWORD *)(v141 + v142 + 16) = v139;
    *(_BYTE *)(v141 + v142 + 24) = 3;
    v234 = v140 + 1;
    if ( v228 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v228, 1);
    v136 = v227;
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogInspection$GT$::h5aea47d90a3b05a1(__src);
LABEL_193:
  codexmate_lib::core::relay::codex_project_state::inspect::hec557ca3f520652c(__src, v136);
  codexmate_lib::core::relay::codex_project_state::stability_issue::haa4350ab63214d44(&v211, __src);
  if ( v211 != (const __m128i *)0x8000000000000000LL )
  {
    v219 = v213;
    v218 = v212;
    v217 = v211;
    if ( __src[12] == 0x8000000000000000LL )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v211, __src);
      v185 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v185 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
      *v185 = 1701736302;
      v228 = 4;
      v229 = (__int64)v185;
      v230 = 4;
    }
    else
    {
      v206 = __src[13];
      v207 = __src[14];
      v221 = nullptr;
      v222 = 1;
      v223 = 0;
      __dst[2] = 1610612768;
      __dst[0] = &v221;
      __dst[1] = &off_10195E1D8;
      if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(
                              &v206,
                              __dst) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DEF8B, 55, &v228, &unk_10195E760, &off_10195E208);
      v228 = (__int64)v221;
      v229 = v222;
      v230 = v223;
    }
    __dst[0] = &v217;
    __dst[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    __dst[2] = &__src[18];
    __dst[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    __dst[4] = &__src[20];
    __dst[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    __dst[6] = &v200;
    __dst[7] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    __dst[8] = &v201;
    __dst[9] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    __dst[10] = &v228;
    __dst[11] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v221, &unk_1017B936E, __dst);
    if ( v228 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v228, 1);
    v186 = v221;
    v187 = v222;
    v188 = v223;
    v189 = v234;
    if ( v234 == v232 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v232);
    v190 = v233;
    v191 = 32 * v189;
    *(_QWORD *)(v233 + v191) = v186;
    *(_QWORD *)(v190 + v191 + 8) = v187;
    *(_QWORD *)(v190 + v191 + 16) = v188;
    *(_BYTE *)(v190 + v191 + 24) = 4;
    v234 = v189 + 1;
    if ( v217 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, v217, 1);
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee(__src);
  v192 = v209;
  v209[2] = v234;
  v193 = v232;
  v192[1] = v233;
  *v192 = v193;
  if ( v8 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v210, v8, 1);
  return v209;
}
