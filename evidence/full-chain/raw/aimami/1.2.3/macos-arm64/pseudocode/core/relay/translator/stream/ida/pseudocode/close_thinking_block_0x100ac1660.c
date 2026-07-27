// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream20close_thinking_block @ 0x100ac1660 | 基线 same-set
// [FULL decompile]

double __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_thinking_block::h437259882a7eca68(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rax
  signed __int64 v8; // rbx
  _DWORD *v9; // rax
  void *v10; // rax
  __m256i *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __m256i *v15; // rsi
  __int64 v16; // r14
  _DWORD *v17; // rax
  void *v18; // rax
  __m256i *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __m256i *v23; // rsi
  _DWORD *v24; // rax
  __int64 v25; // r13
  void *v26; // rax
  __m256i *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __m256i *v31; // rsi
  _DWORD *v32; // rax
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // r14
  _DWORD *v42; // rax
  __int64 v43; // rax
  __m256i *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __m256i *v48; // rsi
  _WORD *v49; // rax
  __int64 v50; // r15
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // r14
  __m256i *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __m256i *v58; // rsi
  void *v59; // rax
  __m256i *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __m256i *v64; // rsi
  _DWORD *v65; // rax
  __int64 v66; // r15
  void *v67; // rsi
  __int64 v68; // rax
  __int64 v69; // r13
  __m256i *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __m256i *v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __m256i *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __m256i *v81; // rsi
  _DWORD *v82; // rax
  __int128 v83; // rax
  _DWORD *v84; // rax
  void *v85; // rax
  __m256i *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  __m256i *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rsi
  __m256i *v95; // rdi
  bool v96; // r13
  __int64 v97; // r14
  _DWORD *v98; // rax
  void *v99; // rax
  __m256i *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rdx
  __m256i *v104; // rsi
  void *v105; // rax
  __m256i *v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __m256i *v110; // rsi
  __int64 v111; // rbx
  _DWORD *v112; // rax
  __int64 v113; // rax
  __m256i *v114; // rdi
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rdx
  __m256i *v118; // rsi
  _DWORD *v119; // rax
  __int64 v120; // rdx
  __int64 v121; // r9
  __int128 v122; // krD0_16
  _QWORD *v123; // rdx
  __int64 v124; // r15
  _QWORD *v125; // r13
  __int64 v126; // rbx
  double result; // xmm0_8
  __int64 v128; // rdx
  __int64 v129; // r9
  size_t v130; // r14
  _QWORD *v131; // rdx
  __int64 v132; // r13
  unsigned __int64 v133; // rax
  _QWORD *v134; // r15
  void *v135; // rbx
  __int64 v136; // rsi
  __int64 v137; // r15
  _DWORD *v138; // rax
  void *v139; // rax
  __m256i *v140; // rdi
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rdx
  __m256i *v144; // rsi
  void *v145; // rax
  __m256i *v146; // rdi
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rdx
  __m256i *v150; // rsi
  __int64 v151; // rbx
  _DWORD *v152; // rax
  __int64 v153; // r14
  __int64 v154; // rax
  __m256i *v155; // rdi
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rdx
  __m256i *v159; // rsi
  void *v160; // rax
  __m256i *v161; // rdi
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rdx
  __m256i *v165; // rsi
  _DWORD *v166; // rax
  _DWORD *v167; // rax
  void *v168; // rax
  __m256i *v169; // rdi
  __int64 v170; // rax
  __int64 v171; // rcx
  __int64 v172; // rdx
  __m256i *v173; // rsi
  _DWORD *v174; // rax
  __int64 v175; // r13
  void *v176; // rsi
  __int64 v177; // rax
  __int64 v178; // rbx
  __int64 v179; // rdx
  __int64 v180; // rdx
  __int64 v181; // r9
  __int128 v182; // kr130_16
  size_t v183; // rsi
  __int64 v184; // rcx
  __int64 v185; // rsi
  __int64 v186; // r14
  _DWORD *v187; // rax
  _QWORD *v188; // rax
  __m256i *v189; // rdi
  __int64 v190; // rax
  __int64 v191; // rcx
  __int64 v192; // rdx
  __m256i *v193; // rsi
  _QWORD *v194; // rax
  size_t v195; // r14
  __int64 v196; // rbx
  __int64 v197; // rax
  __int64 v198; // r13
  _DWORD *v199; // rax
  __int64 v200; // r14
  __int64 v201; // r15
  __int64 v202; // rax
  __int64 v203; // r13
  __m256i *v204; // rdi
  __int64 v205; // rdx
  __int64 v206; // rsi
  __int64 v207; // rax
  __int64 v208; // r15
  __int64 v209; // rax
  __int64 v210; // r14
  __int64 v211; // rdx
  __int64 v212; // rcx
  size_t v213; // rbx
  __int64 v214; // rdx
  _QWORD v215[3]; // [rsp+20h] [rbp-260h] BYREF
  size_t v216; // [rsp+38h] [rbp-248h]
  __int64 v217; // [rsp+40h] [rbp-240h]
  void *v218; // [rsp+48h] [rbp-238h]
  __int128 v219; // [rsp+50h] [rbp-230h] BYREF
  __int64 v220; // [rsp+60h] [rbp-220h]
  __int64 v221; // [rsp+68h] [rbp-218h]
  __int64 v222; // [rsp+70h] [rbp-210h]
  __int64 v223; // [rsp+78h] [rbp-208h]
  __int128 v224; // [rsp+80h] [rbp-200h] BYREF
  __int64 v225; // [rsp+90h] [rbp-1F0h]
  __int64 v226; // [rsp+98h] [rbp-1E8h]
  void *__src; // [rsp+A0h] [rbp-1E0h]
  void *v228; // [rsp+A8h] [rbp-1D8h]
  __int64 v229; // [rsp+B0h] [rbp-1D0h] BYREF
  void *v230; // [rsp+B8h] [rbp-1C8h]
  size_t v231; // [rsp+C0h] [rbp-1C0h]
  __int128 v232; // [rsp+C8h] [rbp-1B8h] BYREF
  __int64 v233; // [rsp+D8h] [rbp-1A8h]
  void *v234; // [rsp+E0h] [rbp-1A0h]
  void *v235; // [rsp+E8h] [rbp-198h]
  _BYTE v236[24]; // [rsp+F0h] [rbp-190h] BYREF
  size_t v237; // [rsp+108h] [rbp-178h]
  _QWORD *v238; // [rsp+110h] [rbp-170h]
  __int128 v239; // [rsp+118h] [rbp-168h] BYREF
  __int64 v240; // [rsp+128h] [rbp-158h]
  void *v241; // [rsp+130h] [rbp-150h]
  size_t v242; // [rsp+138h] [rbp-148h]
  size_t __n; // [rsp+140h] [rbp-140h]
  void *v244; // [rsp+148h] [rbp-138h]
  __int128 v245; // [rsp+150h] [rbp-130h] BYREF
  size_t v246; // [rsp+160h] [rbp-120h]
  __m256i v247; // [rsp+168h] [rbp-118h] BYREF
  __m256i v248; // [rsp+188h] [rbp-F8h] BYREF
  __m256i v249; // [rsp+1A8h] [rbp-D8h] BYREF
  __int64 v250; // [rsp+1C8h] [rbp-B8h]
  __int64 v251; // [rsp+1D0h] [rbp-B0h]
  __int64 v252; // [rsp+1D8h] [rbp-A8h]
  __m256i v253; // [rsp+1E0h] [rbp-A0h] BYREF
  __int64 v254; // [rsp+200h] [rbp-80h]
  __int64 v255; // [rsp+208h] [rbp-78h]
  __int64 v256; // [rsp+210h] [rbp-70h]
  __int64 v257; // [rsp+218h] [rbp-68h] BYREF
  __int64 v258; // [rsp+220h] [rbp-60h]
  __int64 v259; // [rsp+228h] [rbp-58h]
  __int64 v260; // [rsp+230h] [rbp-50h]
  __m256i v261[2]; // [rsp+238h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v4 = *(unsigned int *)(a1 + 168);
  v5 = *(unsigned __int8 *)(a1 + 172);
  *(_QWORD *)(a1 + 72) = 0x8000000000000000LL;
  if ( __OFSUB__(-v3, 1) )
    return result;
  v226 = v4;
  v238 = a2;
  v221 = v3;
  v234 = *(void **)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 88);
  v231 = *(_QWORD *)(a1 + 112);
  v7 = *(_QWORD *)(a1 + 96);
  v230 = *(void **)(a1 + 104);
  v229 = v7;
  v222 = *(_QWORD *)(a1 + 120);
  v228 = *(void **)(a1 + 128);
  v223 = *(_QWORD *)(a1 + 144);
  __src = *(void **)(a1 + 152);
  LOBYTE(v244) = v5;
  __n = v6;
  if ( (v5 & 1) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)&v245 = 0;
    v246 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, a2);
    v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v9 )
      goto LABEL_251;
    *v9 = 1701869940;
    v247.i64[0] = 4;
    v247.i64[1] = (__int64)v9;
    v247.i64[2] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
    if ( !v10 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17);
    qmemcpy(v10, "redacted_thinking", 17);
    v261[0].i8[0] = 3;
    v261[0].i64[1] = 17;
    v261[0].i64[2] = (__int64)v10;
    v261[0].i64[3] = 17;
    v11 = &v253;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v245, &v247);
    if ( v253.i64[0] == 0x8000000000000000LL )
    {
      v12 = v253.i64[1];
      v13 = 32 * v253.i64[3];
      v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
      v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
      v14 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
      v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
      v257 = v14;
      *(_OWORD *)(v253.i64[1] + v13 + 16) = v261[0].i128[1];
      v15 = (__m256i *)v261[0].i64[1];
      *(_OWORD *)(v12 + v13) = v261[0].i128[0];
      if ( (_BYTE)v257 != 6 )
      {
        v11 = (__m256i *)&v257;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
      }
    }
    else
    {
      v252 = v256;
      v251 = v255;
      v250 = v254;
      v249 = v253;
      v248 = v261[0];
      v11 = (__m256i *)&v257;
      v15 = &v249;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v257,
        &v249,
        &v248);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v15);
    v24 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v24 )
LABEL_251:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
    *v24 = 1635017060;
    v247.i64[0] = 4;
    v247.i64[1] = (__int64)v24;
    v247.i64[2] = 4;
    if ( v8 < 0 )
    {
      v25 = 0;
      goto LABEL_18;
    }
    if ( v8 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v25 = 1;
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1);
      if ( !v34 )
LABEL_18:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25, v8);
      v35 = v34;
    }
    else
    {
      v35 = 1;
    }
    memcpy((void *)v35, __src, v8);
    v261[0].i8[0] = 3;
    v261[0].i64[1] = v8;
    v261[0].i64[2] = v35;
    v261[0].i64[3] = v8;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v245, &v247);
    v39 = __n;
    if ( v253.i64[0] == 0x8000000000000000LL )
    {
      v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
      v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
      v40 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
      v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
      v257 = v40;
      *(__m256i *)(v253.i64[1] + 32 * v253.i64[3]) = v261[0];
      if ( (_BYTE)v257 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
    else
    {
      v252 = v256;
      v251 = v255;
      v250 = v254;
      v249 = v253;
      v248 = v261[0];
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v257,
        &v249,
        &v248);
    }
    *(_OWORD *)&v236[8] = v245;
    v237 = v246;
    goto LABEL_41;
  }
  v242 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)v236 = 0;
  *(_QWORD *)&v236[16] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, a2);
  v16 = 4;
  v17 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v17 )
    goto LABEL_250;
  *v17 = 1701869940;
  v247.i64[0] = 4;
  v247.i64[1] = (__int64)v17;
  v247.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
  if ( !v18 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36);
  qmemcpy(v18, "response.reasoning_summary_text.done", 36);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = 36;
  v261[0].i64[2] = (__int64)v18;
  v261[0].i64[3] = 36;
  v19 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, v236, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v20 = v253.i64[1];
    v21 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v22 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v22;
    *(_OWORD *)(v253.i64[1] + v21 + 16) = v261[0].i128[1];
    v23 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v20 + v21) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v19 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v19 = (__m256i *)&v257;
    v23 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v23);
  v16 = 12;
  v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v26 )
    goto LABEL_250;
  qmemcpy(v26, "output_index", 12);
  v247.i64[0] = 12;
  v247.i64[1] = (__int64)v26;
  v247.i64[2] = 12;
  v261[0].i8[0] = 2;
  v261[0].i64[1] = 0;
  v261[0].i64[2] = v226;
  v27 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, v236, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v28 = v253.i64[1];
    v29 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v30 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v30;
    *(_OWORD *)(v253.i64[1] + v29 + 16) = v261[0].i128[1];
    v31 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v28 + v29) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v27 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v27 = (__m256i *)&v257;
    v31 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v31);
  v16 = 7;
  v32 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v32 )
    goto LABEL_250;
  *(_DWORD *)((char *)v32 + 3) = 1684627309;
  *v32 = 1835365481;
  v247.i64[0] = 7;
  v247.i64[1] = (__int64)v32;
  v247.i64[2] = 7;
  if ( v6 < 0 )
  {
    v33 = 0;
    goto LABEL_28;
  }
  v241 = (void *)(a1 + 352);
  if ( v6 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v36 = v6;
    v33 = 1;
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v36, 1);
    if ( !v37 )
LABEL_28:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v33, __n);
    v38 = v37;
    v6 = __n;
  }
  else
  {
    v38 = 1;
  }
  memcpy((void *)v38, v234, v6);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = v6;
  v261[0].i64[2] = v38;
  v261[0].i64[3] = v6;
  v54 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, v236, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v55 = v253.i64[1];
    v56 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v57 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v57;
    *(_OWORD *)(v253.i64[1] + v56 + 16) = v261[0].i128[1];
    v58 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v55 + v56) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v54 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v54 = (__m256i *)&v257;
    v58 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v58);
  v16 = 13;
  v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v59 )
    goto LABEL_250;
  qmemcpy(v59, "summary_index", 13);
  v247.i64[0] = 13;
  v247.i64[1] = (__int64)v59;
  v247.i64[2] = 13;
  v261[0].i8[0] = 2;
  *(__int128 *)((char *)v261[0].i128 + 8) = 0u;
  v60 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, v236, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v61 = v253.i64[1];
    v62 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v63 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v63;
    *(_OWORD *)(v253.i64[1] + v62 + 16) = v261[0].i128[1];
    v64 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v61 + v62) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v60 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v60 = (__m256i *)&v257;
    v64 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, v64);
  v16 = 4;
  v65 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v65 )
LABEL_250:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v16);
  *v65 = 1954047348;
  v247.i64[0] = 4;
  v247.i64[1] = (__int64)v65;
  v247.i64[2] = 4;
  if ( (v231 & 0x8000000000000000LL) != 0LL )
  {
    v66 = 0;
    goto LABEL_67;
  }
  v67 = v230;
  if ( v231 )
  {
    v235 = v230;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, v230);
    v66 = 1;
    v68 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v231, 1);
    if ( !v68 )
LABEL_67:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v66, v231);
    v69 = v68;
    v67 = v235;
  }
  else
  {
    v69 = 1;
  }
  memcpy((void *)v69, v67, v231);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = v231;
  v261[0].i64[2] = v69;
  v261[0].i64[3] = v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, v236, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v128 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v128;
    *(__m256i *)(v253.i64[1] + 32 * v253.i64[3]) = v261[0];
    if ( (_BYTE)v257 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  *(__int128 *)((char *)v249.i128 + 8) = *(_OWORD *)v236;
  v249.i64[3] = *(_QWORD *)&v236[16];
  v249.i8[0] = 5;
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
    &v253,
    (__int64 *)v241,
    (__int64)"response.reasoning_summary_text.done",
    (__int64 (__fastcall *)())0x24,
    v249.i8);
  v130 = v253.u64[2];
  v131 = v238;
  v132 = v238[2];
  v133 = *v238 - v132;
  v235 = (void *)v253.i64[1];
  if ( v253.i64[2] > v133 )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
      v238,
      v132,
      v253.i64[2],
      1,
      1,
      v129);
    v131 = v238;
    v132 = v238[2];
  }
  v217 = v131[1];
  v134 = v131;
  v135 = v235;
  memcpy((void *)(v217 + v132), v235, v130);
  v216 = v130 + v132;
  v134[2] = v130 + v132;
  v136 = v253.i64[0];
  if ( v253.i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v253.i64[0], 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
  *(_QWORD *)&v232 = 0;
  v233 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v249, v136);
  v137 = 4;
  v138 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v138 )
    goto LABEL_253;
  *v138 = 1701869940;
  v247.i64[0] = 4;
  v247.i64[1] = (__int64)v138;
  v247.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v139 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
  if ( !v139 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36);
  qmemcpy(v139, "response.reasoning_summary_part.done", 36);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = 36;
  v261[0].i64[2] = (__int64)v139;
  v261[0].i64[3] = 36;
  v140 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v232, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v141 = v253.i64[1];
    v142 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v143 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v143;
    *(_OWORD *)(v253.i64[1] + v142 + 16) = v261[0].i128[1];
    v144 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v141 + v142) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v140 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v140 = (__m256i *)&v257;
    v144 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v140, v144);
  v137 = 12;
  v145 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v145 )
    goto LABEL_253;
  qmemcpy(v145, "output_index", 12);
  v247.i64[0] = 12;
  v247.i64[1] = (__int64)v145;
  v247.i64[2] = 12;
  v261[0].i8[0] = 2;
  v261[0].i64[1] = 0;
  v261[0].i64[2] = v226;
  v146 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v232, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v147 = v253.i64[1];
    v148 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v149 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v149;
    *(_OWORD *)(v253.i64[1] + v148 + 16) = v261[0].i128[1];
    v150 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v147 + v148) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v146 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v146 = (__m256i *)&v257;
    v150 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v146, v150);
  v137 = 7;
  v151 = 1;
  v152 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v152 )
    goto LABEL_253;
  *(_DWORD *)((char *)v152 + 3) = 1684627309;
  *v152 = 1835365481;
  v247.i64[0] = 7;
  v247.i64[1] = (__int64)v152;
  v247.i64[2] = 7;
  v153 = __n;
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v154 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v153, 1);
    if ( !v154 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v151 = v154;
    v153 = __n;
  }
  memcpy((void *)v151, v234, v153);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = v153;
  v261[0].i64[2] = v151;
  v261[0].i64[3] = v153;
  v155 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v232, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v156 = v253.i64[1];
    v157 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v158 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v158;
    *(_OWORD *)(v253.i64[1] + v157 + 16) = v261[0].i128[1];
    v159 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v156 + v157) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v155 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v155 = (__m256i *)&v257;
    v159 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v155, v159);
  v137 = 13;
  v160 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v160 )
    goto LABEL_253;
  qmemcpy(v160, "summary_index", 13);
  v247.i64[0] = 13;
  v247.i64[1] = (__int64)v160;
  v247.i64[2] = 13;
  v261[0].i8[0] = 2;
  *(__int128 *)((char *)v261[0].i128 + 8) = 0u;
  v161 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v232, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v162 = v253.i64[1];
    v163 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v164 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v164;
    *(_OWORD *)(v253.i64[1] + v163 + 16) = v261[0].i128[1];
    v165 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v162 + v163) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v161 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v161 = (__m256i *)&v257;
    v165 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v161, v165);
  v137 = 4;
  v166 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v166 )
LABEL_253:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v137);
  *v166 = 1953653104;
  *(_QWORD *)&v239 = 4;
  v235 = v166;
  *((_QWORD *)&v239 + 1) = v166;
  v240 = 4;
  *(_QWORD *)&v245 = 0;
  v246 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v167 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v167 )
    goto LABEL_258;
  *v167 = 1701869940;
  *(_QWORD *)v236 = 4;
  *(_QWORD *)&v236[8] = v167;
  *(_QWORD *)&v236[16] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v168 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v168 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
  qmemcpy(v168, "summary_text", 12);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = 12;
  v261[0].i64[2] = (__int64)v168;
  v261[0].i64[3] = 12;
  v169 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v245, v236);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v170 = v253.i64[1];
    v171 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v172 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v172;
    *(_OWORD *)(v253.i64[1] + v171 + 16) = v261[0].i128[1];
    v173 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v170 + v171) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v169 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v169 = (__m256i *)&v257;
    v173 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v169, v173);
  v174 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v174 )
LABEL_258:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
  *v174 = 1954047348;
  *(_QWORD *)v236 = 4;
  *(_QWORD *)&v236[8] = v174;
  *(_QWORD *)&v236[16] = 4;
  if ( (v231 & 0x8000000000000000LL) != 0LL )
  {
    v175 = 0;
    goto LABEL_181;
  }
  v176 = v230;
  if ( v231 )
  {
    v218 = v230;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, v230);
    v175 = 1;
    v177 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v231, 1);
    if ( !v177 )
LABEL_181:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v175, v231);
    v178 = v177;
    v176 = v218;
  }
  else
  {
    v178 = 1;
  }
  memcpy((void *)v178, v176, v231);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = v231;
  v261[0].i64[2] = v178;
  v261[0].i64[3] = v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v245, v236);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v179 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v179;
    *(__m256i *)(v253.i64[1] + 32 * v253.i64[3]) = v261[0];
    if ( (_BYTE)v257 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  *(__int128 *)((char *)v247.i128 + 8) = v245;
  v247.i64[3] = v246;
  v247.i8[0] = 5;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v232, &v239);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v180 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v180;
    *(__m256i *)(v253.i64[1] + 32 * v253.i64[3]) = v247;
    if ( (_BYTE)v257 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v247;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  *(__int128 *)((char *)v249.i128 + 8) = v232;
  v249.i64[3] = v233;
  v249.i8[0] = 5;
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
    &v253,
    (__int64 *)v241,
    (__int64)&unk_10167CEC3,
    (__int64 (__fastcall *)())0x24,
    v249.i8);
  v182 = *(__int128 *)((char *)v253.i128 + 8);
  v183 = v216;
  v184 = v217;
  if ( v253.i64[2] > *v238 - v216 )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
      v238,
      v216,
      v253.i64[2],
      1,
      1,
      v181);
    v184 = v238[1];
    v183 = v238[2];
  }
  memcpy((void *)(v183 + v184), (const void *)v182, *((size_t *)&v182 + 1));
  v238[2] = *((_QWORD *)&v182 + 1) + v183;
  v185 = v253.i64[0];
  if ( v253.i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v182, v253.i64[0], 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
  *(_QWORD *)&v239 = 0;
  v240 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v249, v185);
  v186 = 4;
  v187 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v187 )
    goto LABEL_259;
  *v187 = 1701869940;
  v247.i64[0] = 4;
  v247.i64[1] = (__int64)v187;
  v247.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v188 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v188 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
  *v188 = 0x676E696B6E696874LL;
  v261[0].i8[0] = 3;
  v261[0].i64[1] = 8;
  v261[0].i64[2] = (__int64)v188;
  v261[0].i64[3] = 8;
  v189 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v239, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v190 = v253.i64[1];
    v191 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v192 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v192;
    *(_OWORD *)(v253.i64[1] + v191 + 16) = v261[0].i128[1];
    v193 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v190 + v191) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v189 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v189 = (__m256i *)&v257;
    v193 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v189, v193);
  v186 = 8;
  v194 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v194 )
    goto LABEL_259;
  *v194 = 0x676E696B6E696874LL;
  *(_QWORD *)&v245 = 8;
  *((_QWORD *)&v245 + 1) = v194;
  v246 = 8;
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v247, &v229);
  v195 = v247.u64[2];
  v241 = (void *)v247.i64[1];
  if ( v247.i64[2] < 0 )
  {
    v196 = 0;
    goto LABEL_207;
  }
  if ( v247.i64[2] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v247, &v229);
    v196 = 1;
    v197 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v195, 1);
    if ( !v197 )
LABEL_207:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v196, v195);
    v198 = v197;
  }
  else
  {
    v198 = 1;
  }
  memcpy((void *)v198, v241, v195);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = v195;
  v261[0].i64[2] = v198;
  v261[0].i64[3] = v195;
  v204 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v239, &v245);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v205 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v205;
    *(__m256i *)(v253.i64[1] + 32 * v253.i64[3]) = v261[0];
    if ( (_BYTE)v257 != 6 )
    {
      v204 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v204 = (__m256i *)&v257;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  v206 = v247.i64[0];
  if ( v247.i64[0] )
  {
    v204 = (__m256i *)v241;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v241, v247.i64[0], 1);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v204, v206);
  v186 = 9;
  v207 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v207 )
LABEL_259:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v186);
  *(_QWORD *)v207 = 0x727574616E676973LL;
  *(_BYTE *)(v207 + 8) = 101;
  v247.i64[0] = 9;
  v247.i64[1] = v207;
  v247.i64[2] = 9;
  if ( (v242 & 0x8000000000000000LL) != 0LL )
  {
    v208 = 0;
    goto LABEL_229;
  }
  if ( v242 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
    v208 = 1;
    v209 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v242, 1);
    if ( !v209 )
LABEL_229:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v208, v242);
    v210 = v209;
  }
  else
  {
    v210 = 1;
  }
  v213 = v242;
  memcpy((void *)v210, v228, v242);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = v213;
  v261[0].i64[2] = v210;
  v261[0].i64[3] = v213;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v239, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v214 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v214;
    *(__m256i *)(v253.i64[1] + 32 * v253.i64[3]) = v261[0];
    if ( (_BYTE)v257 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  *(_OWORD *)&v236[8] = v239;
  v237 = v240;
  v39 = __n;
LABEL_41:
  v236[0] = 5;
  codexmate_lib::core::relay::translator::encode_anthropic_thinking_payload::hddedc0a8a68a3be3(&v219, (__int64)v236);
  *(_QWORD *)&v224 = 0;
  v225 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v219, v236);
  v41 = 4;
  v42 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v42 )
    goto LABEL_252;
  *v42 = 1701869940;
  v247.i64[0] = 4;
  v247.i64[1] = (__int64)v42;
  v247.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v43 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v43 = 0x6E696E6F73616572LL;
  *(_BYTE *)(v43 + 8) = 103;
  v261[0].i8[0] = 3;
  v261[0].i64[1] = 9;
  v261[0].i64[2] = v43;
  v261[0].i64[3] = 9;
  v44 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v224, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v45 = v253.i64[1];
    v46 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v47 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v47;
    *(_OWORD *)(v253.i64[1] + v46 + 16) = v261[0].i128[1];
    v48 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v45 + v46) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v44 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v44 = (__m256i *)&v257;
    v48 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v44, v48);
  v41 = 2;
  v49 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v49 )
    goto LABEL_252;
  *v49 = 25705;
  v247.i64[0] = 2;
  v247.i64[1] = (__int64)v49;
  v247.i64[2] = 2;
  if ( v39 < 0 )
  {
    v50 = 0;
    goto LABEL_50;
  }
  if ( v39 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
    v51 = v39;
    v50 = 1;
    v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v51, 1);
    if ( !v52 )
LABEL_50:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v50, __n);
    v53 = v52;
    v39 = __n;
  }
  else
  {
    v53 = 1;
  }
  memcpy((void *)v53, v234, v39);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = v39;
  v261[0].i64[2] = v53;
  v261[0].i64[3] = v39;
  v70 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v224, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v71 = v253.i64[1];
    v72 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v73 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v73;
    *(_OWORD *)(v253.i64[1] + v72 + 16) = v261[0].i128[1];
    v74 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v71 + v72) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v70 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v70 = (__m256i *)&v257;
    v74 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v74);
  v41 = 6;
  v75 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v75 )
    goto LABEL_252;
  *(_WORD *)(v75 + 4) = 29557;
  *(_DWORD *)v75 = 1952543859;
  v247.i64[0] = 6;
  v247.i64[1] = v75;
  v247.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v76 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v76 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v76 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v76 + 8) = 100;
  v261[0].i8[0] = 3;
  v261[0].i64[1] = 9;
  v261[0].i64[2] = v76;
  v261[0].i64[3] = 9;
  v77 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v224, &v247);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v78 = v253.i64[1];
    v79 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v80 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v80;
    *(_OWORD *)(v253.i64[1] + v79 + 16) = v261[0].i128[1];
    v81 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v78 + v79) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v77 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v77 = (__m256i *)&v257;
    v81 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v77, v81);
  v41 = 7;
  v82 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v82 )
LABEL_252:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v41);
  *(_DWORD *)((char *)v82 + 3) = 2037539181;
  *v82 = 1835890035;
  v215[0] = 7;
  v215[1] = v82;
  v215[2] = 7;
  *((_QWORD *)&v83 + 1) = 8;
  v242 = (size_t)v82;
  if ( ((unsigned __int8)v244 & 1) != 0 || !v231 )
  {
    *(_QWORD *)&v83 = 0;
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v241 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
    if ( !v241 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
    *(_QWORD *)&v232 = 0;
    v233 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
    v84 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v84 )
      goto LABEL_264;
    *v84 = 1701869940;
    *(_QWORD *)&v245 = 4;
    *((_QWORD *)&v245 + 1) = v84;
    v246 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v85 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v85 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
    qmemcpy(v85, "summary_text", 12);
    v261[0].i8[0] = 3;
    v261[0].i64[1] = 12;
    v261[0].i64[2] = (__int64)v85;
    v261[0].i64[3] = 12;
    v86 = &v253;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v232, &v245);
    if ( v253.i64[0] == 0x8000000000000000LL )
    {
      v87 = v253.i64[1];
      v88 = 32 * v253.i64[3];
      v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
      v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
      v89 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
      v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
      v257 = v89;
      *(_OWORD *)(v253.i64[1] + v88 + 16) = v261[0].i128[1];
      v90 = (__m256i *)v261[0].i64[1];
      *(_OWORD *)(v87 + v88) = v261[0].i128[0];
      if ( (_BYTE)v257 != 6 )
      {
        v86 = (__m256i *)&v257;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
      }
    }
    else
    {
      v252 = v256;
      v251 = v255;
      v250 = v254;
      v249 = v253;
      v248 = v261[0];
      v86 = (__m256i *)&v257;
      v90 = &v249;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v257,
        &v249,
        &v248);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v86, v90);
    v199 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v199 )
LABEL_264:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
    *v199 = 1954047348;
    *(_QWORD *)&v239 = 4;
    *((_QWORD *)&v239 + 1) = v199;
    v240 = 4;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v245, &v229);
    v244 = *((void **)&v245 + 1);
    v200 = v246;
    if ( (v246 & 0x8000000000000000LL) != 0LL )
    {
      v201 = 0;
      goto LABEL_215;
    }
    if ( v246 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v245, &v229);
      v201 = 1;
      v202 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v200, 1);
      if ( !v202 )
LABEL_215:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v201, v200);
      v203 = v202;
      v39 = __n;
    }
    else
    {
      v203 = 1;
    }
    memcpy((void *)v203, v244, v200);
    v261[0].i8[0] = 3;
    v261[0].i64[1] = v200;
    v261[0].i64[2] = v203;
    v261[0].i64[3] = v200;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v232, &v239);
    if ( v253.i64[0] == 0x8000000000000000LL )
    {
      v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
      v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
      v211 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
      v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
      v257 = v211;
      *(__m256i *)(v253.i64[1] + 32 * v253.i64[3]) = v261[0];
      if ( (_BYTE)v257 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
    else
    {
      v252 = v256;
      v251 = v255;
      v250 = v254;
      v249 = v253;
      v248 = v261[0];
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v257,
        &v249,
        &v248);
    }
    if ( (_QWORD)v245 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v244, v245, 1);
    *(__int128 *)((char *)v249.i128 + 7) = v232;
    *(__int64 *)((char *)&v249.i64[2] + 7) = v233;
    *((_QWORD *)&v83 + 1) = v241;
    *(_BYTE *)v241 = 5;
    v212 = v249.i64[1];
    *(_QWORD *)(*((_QWORD *)&v83 + 1) + 1LL) = v249.i64[0];
    *(_OWORD *)(*((_QWORD *)&v83 + 1) + 9LL) = __PAIR128__(v249.u64[2], v212);
    *(_QWORD *)(*((_QWORD *)&v83 + 1) + 24LL) = *(__int64 *)((char *)&v249.i64[2] + 7);
    *(_QWORD *)&v83 = 1;
  }
  *(__int128 *)((char *)v261[0].i128 + 8) = v83;
  v261[0].i64[3] = v83;
  v261[0].i8[0] = 4;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v249,
    v261);
  if ( v249.i8[0] == 6 )
  {
    v253.i64[0] = v249.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v253, &off_101974C58, &off_101974740);
  }
  v247 = v249;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v224, v215);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v91 = v253.i64[1];
    v92 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v93 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v93;
    *(_OWORD *)(v253.i64[1] + v92 + 16) = v247.i128[1];
    v94 = v247.i64[1];
    *(_OWORD *)(v91 + v92) = v247.i128[0];
    if ( (_BYTE)v257 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v247;
    v94 = (__int64)&v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  v95 = v261;
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v261);
  *(__int128 *)((char *)v247.i128 + 8) = v224;
  v247.i64[3] = v225;
  v247.i8[0] = 5;
  v244 = (void *)v219;
  v96 = (_QWORD)v219 == 0x8000000000000000LL;
  if ( (_QWORD)v219 != 0x8000000000000000LL )
  {
    v249.i64[3] = v220;
    *(__int128 *)((char *)v249.i128 + 8) = v219;
    v249.i8[0] = 3;
    v94 = 17;
    v95 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                       "encrypted_contentresponse.reasoning_summary_part.addedcache_read_input_tokenscache_creation_input_tokens",
                       0x11u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v95);
    *v95 = v249;
  }
  *(_QWORD *)&v239 = 0;
  v240 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v95, v94);
  v97 = 4;
  v98 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v98 )
    goto LABEL_256;
  *v98 = 1701869940;
  *(_QWORD *)&v245 = 4;
  *((_QWORD *)&v245 + 1) = v98;
  v246 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v99 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
  if ( !v99 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
  qmemcpy(v99, "response.output_item.done", 25);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = 25;
  v261[0].i64[2] = (__int64)v99;
  v261[0].i64[3] = 25;
  v100 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v239, &v245);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v101 = v253.i64[1];
    v102 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v103 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v103;
    *(_OWORD *)(v253.i64[1] + v102 + 16) = v261[0].i128[1];
    v104 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v101 + v102) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v100 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v100 = (__m256i *)&v257;
    v104 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v100, v104);
  v97 = 12;
  v105 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v105 )
    goto LABEL_256;
  qmemcpy(v105, "output_index", 12);
  *(_QWORD *)&v245 = 12;
  *((_QWORD *)&v245 + 1) = v105;
  v246 = 12;
  v261[0].i8[0] = 2;
  v261[0].i64[1] = 0;
  v261[0].i64[2] = v226;
  v106 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v239, &v245);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v107 = v253.i64[1];
    v108 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v109 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v109;
    *(_OWORD *)(v253.i64[1] + v108 + 16) = v261[0].i128[1];
    v110 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v107 + v108) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v106 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v106 = (__m256i *)&v257;
    v110 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v106, v110);
  v97 = 7;
  v111 = 1;
  v112 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v112 )
    goto LABEL_256;
  *(_DWORD *)((char *)v112 + 3) = 1684627309;
  *v112 = 1835365481;
  *(_QWORD *)&v245 = 7;
  *((_QWORD *)&v245 + 1) = v112;
  v246 = 7;
  if ( v39 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v113 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v39, 1);
    if ( !v113 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v111 = v113;
    v39 = __n;
  }
  memcpy((void *)v111, v234, v39);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = v39;
  v261[0].i64[2] = v111;
  v261[0].i64[3] = v39;
  v114 = &v253;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v239, &v245);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v115 = v253.i64[1];
    v116 = 32 * v253.i64[3];
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v117 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v117;
    *(_OWORD *)(v253.i64[1] + v116 + 16) = v261[0].i128[1];
    v118 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v115 + v116) = v261[0].i128[0];
    if ( (_BYTE)v257 != 6 )
    {
      v114 = (__m256i *)&v257;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
    }
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    v114 = (__m256i *)&v257;
    v118 = &v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v114, v118);
  v97 = 4;
  v119 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v119 )
LABEL_256:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v97);
  *v119 = 1835365481;
  *(_QWORD *)&v245 = 4;
  *((_QWORD *)&v245 + 1) = v119;
  v246 = 4;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v249,
    &v247);
  if ( v249.i8[0] == 6 )
  {
    v253.i64[0] = v249.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v253, &off_101974C58, &off_101974758);
  }
  v261[0] = v249;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v253, &v239, &v245);
  if ( v253.i64[0] == 0x8000000000000000LL )
  {
    v260 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 24);
    v259 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 16);
    v120 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3]);
    v258 = *(_QWORD *)(v253.i64[1] + 32 * v253.i64[3] + 8);
    v257 = v120;
    *(__m256i *)(v253.i64[1] + 32 * v253.i64[3]) = v261[0];
    if ( (_BYTE)v257 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
  }
  else
  {
    v252 = v256;
    v251 = v255;
    v250 = v254;
    v249 = v253;
    v248 = v261[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v257,
      &v249,
      &v248);
  }
  *(__int128 *)((char *)v249.i128 + 8) = v239;
  v249.i64[3] = v240;
  v249.i8[0] = 5;
  LOBYTE(v242) = v96;
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
    &v253,
    (__int64 *)(a1 + 352),
    (__int64)"response.output_item.doneresponse.function_call_arguments.done",
    (__int64 (__fastcall *)())0x19,
    v249.i8);
  v122 = *(__int128 *)((char *)v253.i128 + 8);
  v123 = v238;
  v124 = v238[2];
  if ( v253.i64[2] > (unsigned __int64)(*v238 - v124) )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
      v238,
      v238[2],
      v253.i64[2],
      1,
      1,
      v121);
    v123 = v238;
    v124 = v238[2];
  }
  v125 = v123;
  memcpy((void *)(v124 + v123[1]), (const void *)v122, *((size_t *)&v122 + 1));
  v125[2] = *((_QWORD *)&v122 + 1) + v124;
  if ( v253.i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, v253.i64[0], 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
  v249 = v247;
  v126 = *(_QWORD *)(a1 + 64);
  if ( v126 == *(_QWORD *)(a1 + 48) )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(a1 + 48);
  *(__m256i *)(*(_QWORD *)(a1 + 56) + 32 * v126) = v249;
  *(_QWORD *)(a1 + 64) = v126 + 1;
  result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v236);
  if ( v223 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v223, 1);
  if ( v222 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v222, 1);
  if ( v229 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v230, v229, 1);
  if ( v221 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v234, v221, 1);
  return result;
}
