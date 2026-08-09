// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream17close_tool_blocks @ 0x100abe930 | 基线 same-set
// [FULL hexrays]

double __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_tool_blocks::h5dcb0d71adf5eb70(
        _QWORD *a1,
        __int64 a2)
{
  const __m128i *v3; // rcx
  __int64 v4; // rdx
  __m128i si128; // xmm0
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  _DWORD *v16; // rsi
  __int64 *v17; // rcx
  __int64 v18; // rdx
  signed __int64 v19; // r8
  __int64 v20; // r15
  _DWORD *v21; // rax
  void *v22; // rax
  void **v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  void ***v28; // rsi
  void *v29; // rax
  void **v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  void ***v35; // rsi
  _DWORD *v36; // rax
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // r15
  size_t v42; // rbx
  void **v43; // rdi
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  void ***v48; // rsi
  __int64 v49; // rax
  size_t v50; // r15
  __int64 v51; // r13
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // r14
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // r9
  void *v60; // rbx
  size_t v61; // r15
  __int64 v62; // r14
  void *v63; // r14
  __int64 v64; // rsi
  __int64 v65; // rbx
  _DWORD *v66; // rax
  void *v67; // rax
  void **v68; // rdi
  _QWORD *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdx
  void ***v73; // rsi
  _WORD *v74; // rax
  size_t v75; // r13
  __int64 v76; // rax
  __int64 v77; // r14
  void **v78; // rdi
  _QWORD *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdx
  void ***v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rax
  void **v86; // rdi
  _QWORD *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rdx
  void ***v91; // rsi
  _DWORD *v92; // rax
  __int64 v93; // r14
  __int64 v94; // rax
  __int64 v95; // rbx
  size_t v96; // r14
  void **v97; // rdi
  _QWORD *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rdx
  void ***v102; // rsi
  _DWORD *v103; // rax
  __int64 v104; // r14
  __int64 v105; // rax
  __int64 v106; // rbx
  size_t v107; // r14
  void **v108; // rdi
  _QWORD *v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rdx
  void ***v113; // rsi
  __int64 v114; // rax
  size_t v115; // rbx
  const void *v116; // rsi
  __int64 v117; // r15
  __int64 v118; // r12
  __int64 v119; // rax
  __int64 v120; // r14
  _QWORD *v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rsi
  signed __int64 v127; // rbx
  __int64 v128; // r14
  __int64 v129; // rax
  const void *v130; // r14
  __int64 v131; // r15
  _DWORD *v132; // rax
  void *v133; // rax
  void **v134; // rdi
  _QWORD *v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // rdx
  void ***v139; // rsi
  void *v140; // rax
  void **v141; // rdi
  _QWORD *v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rdx
  void ***v146; // rsi
  _DWORD *v147; // rax
  size_t v148; // r15
  __int64 v149; // rax
  __int64 v150; // r14
  void **v151; // rdi
  _QWORD *v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rdx
  void ***v156; // rsi
  _DWORD *v157; // rax
  _QWORD *v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // rdx
  __int64 v162; // r9
  void *v163; // r13
  size_t v164; // r15
  __int64 v165; // rdi
  char *v166; // r14
  __int64 v167; // r14
  _QWORD *v168; // rdi
  __int64 v169; // rax
  __int64 v170; // rcx
  __int64 v171; // rdi
  __int64 v172; // r14
  const __m128i *v174; // [rsp+0h] [rbp-2C0h] BYREF
  const __m128i *v175; // [rsp+8h] [rbp-2B8h]
  __int64 v176; // [rsp+10h] [rbp-2B0h]
  __int64 v177; // [rsp+18h] [rbp-2A8h]
  __int64 v178; // [rsp+20h] [rbp-2A0h]
  const __m128i *v179; // [rsp+28h] [rbp-298h]
  __int64 v180; // [rsp+30h] [rbp-290h]
  __int64 v181; // [rsp+38h] [rbp-288h]
  __int64 v182; // [rsp+40h] [rbp-280h]
  _QWORD *v183; // [rsp+48h] [rbp-278h]
  __int64 v184; // [rsp+50h] [rbp-270h] BYREF
  __int64 v185; // [rsp+58h] [rbp-268h]
  unsigned __int64 v186; // [rsp+60h] [rbp-260h]
  __int64 *v187; // [rsp+68h] [rbp-258h]
  _QWORD *v188; // [rsp+70h] [rbp-250h]
  __int64 v189; // [rsp+78h] [rbp-248h]
  __int64 v190; // [rsp+80h] [rbp-240h]
  __int64 v191; // [rsp+88h] [rbp-238h]
  __int64 v192; // [rsp+90h] [rbp-230h]
  size_t v193; // [rsp+98h] [rbp-228h]
  __int64 v194; // [rsp+A0h] [rbp-220h]
  __int64 v195; // [rsp+A8h] [rbp-218h]
  __int64 v196; // [rsp+B0h] [rbp-210h]
  __int64 v197; // [rsp+B8h] [rbp-208h]
  __int64 *v198; // [rsp+C0h] [rbp-200h]
  __int64 *v199; // [rsp+C8h] [rbp-1F8h]
  _DWORD *v200; // [rsp+D0h] [rbp-1F0h]
  __int64 v201; // [rsp+D8h] [rbp-1E8h] BYREF
  void *v202; // [rsp+E0h] [rbp-1E0h]
  size_t v203; // [rsp+E8h] [rbp-1D8h]
  _QWORD *v204; // [rsp+F0h] [rbp-1D0h]
  __int64 v205; // [rsp+F8h] [rbp-1C8h]
  void *v206; // [rsp+100h] [rbp-1C0h]
  void *v207; // [rsp+108h] [rbp-1B8h]
  __int64 v208; // [rsp+110h] [rbp-1B0h]
  size_t v209; // [rsp+118h] [rbp-1A8h]
  signed __int64 v210; // [rsp+120h] [rbp-1A0h]
  void *__src; // [rsp+128h] [rbp-198h]
  __int64 v212; // [rsp+130h] [rbp-190h]
  _DWORD *v213; // [rsp+138h] [rbp-188h] BYREF
  __int64 v214; // [rsp+140h] [rbp-180h]
  __int64 v215; // [rsp+148h] [rbp-178h]
  __int64 v216; // [rsp+150h] [rbp-170h] BYREF
  void *v217; // [rsp+158h] [rbp-168h]
  size_t v218; // [rsp+160h] [rbp-160h]
  __int64 v219; // [rsp+168h] [rbp-158h]
  size_t v220; // [rsp+170h] [rbp-150h]
  __int64 v221; // [rsp+178h] [rbp-148h]
  __int64 v222; // [rsp+180h] [rbp-140h] BYREF
  _DWORD *v223; // [rsp+188h] [rbp-138h]
  __int64 v224; // [rsp+190h] [rbp-130h]
  __int64 v225; // [rsp+198h] [rbp-128h]
  size_t __n; // [rsp+1A0h] [rbp-120h]
  void *v227; // [rsp+1A8h] [rbp-118h]
  __int64 v228; // [rsp+1B0h] [rbp-110h] BYREF
  size_t v229; // [rsp+1B8h] [rbp-108h]
  __int64 v230; // [rsp+1C0h] [rbp-100h]
  __int64 v231; // [rsp+1C8h] [rbp-F8h] BYREF
  __int64 v232; // [rsp+1D0h] [rbp-F0h]
  size_t v233; // [rsp+1D8h] [rbp-E8h]
  __int64 v234; // [rsp+1E0h] [rbp-E0h]
  void **v235; // [rsp+1E8h] [rbp-D8h] BYREF
  void *v236; // [rsp+1F0h] [rbp-D0h]
  size_t v237; // [rsp+1F8h] [rbp-C8h]
  __int64 v238; // [rsp+200h] [rbp-C0h]
  void *v239; // [rsp+208h] [rbp-B8h]
  size_t v240; // [rsp+210h] [rbp-B0h]
  __int64 v241; // [rsp+218h] [rbp-A8h]
  void **v242; // [rsp+220h] [rbp-A0h] BYREF
  _QWORD *v243; // [rsp+228h] [rbp-98h]
  size_t v244; // [rsp+230h] [rbp-90h]
  __int64 v245; // [rsp+238h] [rbp-88h]
  void *v246; // [rsp+240h] [rbp-80h]
  size_t v247; // [rsp+248h] [rbp-78h]
  __int64 v248; // [rsp+250h] [rbp-70h]
  __int64 v249; // [rsp+258h] [rbp-68h] BYREF
  __int64 v250; // [rsp+260h] [rbp-60h]
  __int64 v251; // [rsp+268h] [rbp-58h]
  __int64 v252; // [rsp+270h] [rbp-50h]
  __int64 v253; // [rsp+278h] [rbp-48h]
  __int64 v254; // [rsp+280h] [rbp-40h]
  size_t v255; // [rsp+288h] [rbp-38h]
  __int64 v256; // [rsp+290h] [rbp-30h]

  v3 = (const __m128i *)a1[29];
  v4 = a1[30];
  si128 = _mm_load_si128(v3);
  v182 = a1[32];
  v6 = v182;
  v181 = a1[31];
  v180 = v4;
  v179 = v3;
  a1[29] = anon_0df76e0cec988e6dc281ac0519b88803_36;
  a1[30] = 0;
  a1[31] = 0;
  v204 = a1;
  a1[32] = 0;
  v174 = v3;
  v175 = v3 + 1;
  v176 = (__int64)v3->i64 + v4 + 1;
  LOWORD(v177) = ~(unsigned __int16)_mm_movemask_epi8(si128);
  v178 = v6;
  v183 = a1 + 29;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hb27b157e09d168e7(
    &v184,
    &v174);
  v11 = v185;
  v12 = v186;
  v235 = (void **)&v242;
  v192 = v185;
  if ( v186 >= 2 )
  {
    v172 = v185;
    if ( v186 >= 0x15 )
      core::slice::sort::stable::driftsort_main::hb95ae99a2bf17fc4(v185, v186, &v235);
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::hd1b0bd37b3c67df5(v185, v186, 1, &v235);
    v13 = v184;
    v11 = v172;
    v14 = v172 + 104 * v12;
  }
  else
  {
    v13 = v184;
    v14 = v185 + 104 * v186;
    v15 = v185;
    if ( !v186 )
      goto LABEL_165;
  }
  v205 = v13;
  v198 = v204 + 44;
  v187 = v204 + 35;
  v188 = v204 + 6;
  v15 = v11 + 104;
  v194 = v14 - v11 - 104;
  do
  {
    v8 = *(_QWORD *)(v15 - 104);
    if ( v8 == 0x8000000000000000LL )
      goto LABEL_164;
    v208 = *(_QWORD *)(v15 - 104);
    __src = *(void **)(v15 - 96);
    __n = *(_QWORD *)(v15 - 88);
    v212 = *(_QWORD *)(v15 - 80);
    v206 = *(void **)(v15 - 72);
    v220 = *(_QWORD *)(v15 - 64);
    v196 = *(_QWORD *)(v15 - 56);
    v16 = *(_DWORD **)(v15 - 48);
    v221 = *(_QWORD *)(v15 - 32);
    v17 = *(__int64 **)(v15 - 24);
    v195 = v15;
    v193 = *(unsigned int *)(v15 - 8);
    v18 = *(_QWORD *)(v15 - 104 + 64);
    v189 = v15 - 104;
    v19 = *(_QWORD *)(v15 - 104 + 88);
    v200 = v16;
    v199 = v17;
    codexmate_lib::core::relay::translator::normalize_anthropic_tool_call_for_responses::h5854e4c15575a469(
      (__int64 *)&v235,
      v16,
      v18,
      v17,
      v19);
    v197 = (__int64)v235;
    v207 = v236;
    v209 = v237;
    v203 = v240;
    v202 = v239;
    v201 = v238;
    v213 = nullptr;
    v215 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v235, v16);
    v20 = 4;
    v21 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v21 )
      goto LABEL_169;
    *v21 = 1701869940;
    v216 = 4;
    v217 = v21;
    v218 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
    if ( !v22 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37);
    qmemcpy(v22, "response.function_call_arguments.done", 37);
    LOBYTE(v253) = 3;
    v254 = 37;
    v255 = (size_t)v22;
    v256 = 37;
    v23 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v213, &v216);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v24 = v243;
      v25 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v26 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v26;
      v243[v25 + 3] = v256;
      v24[v25 + 2] = v255;
      v27 = v253;
      v28 = (void ***)v254;
      v24[v25 + 1] = v254;
      v24[v25] = v27;
      if ( (_BYTE)v249 != 6 )
      {
        v23 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v23 = (void **)&v249;
      v28 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v28);
    v20 = 12;
    v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v29 )
      goto LABEL_169;
    qmemcpy(v29, "output_index", 12);
    v216 = 12;
    v217 = v29;
    v218 = 12;
    LOBYTE(v253) = 2;
    v254 = 0;
    v255 = v193;
    v30 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v213, &v216);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v31 = v243;
      v32 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v33 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v33;
      v243[v32 + 3] = v256;
      v31[v32 + 2] = v255;
      v34 = v253;
      v35 = (void ***)v254;
      v31[v32 + 1] = v254;
      v31[v32] = v34;
      if ( (_BYTE)v249 != 6 )
      {
        v30 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v30 = (void **)&v249;
      v35 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v35);
    v20 = 7;
    v36 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v36 )
      goto LABEL_169;
    *(_DWORD *)((char *)v36 + 3) = 1684627309;
    *v36 = 1835365481;
    v216 = 7;
    v217 = v36;
    v218 = 7;
    if ( (__n & 0x8000000000000000LL) != 0LL )
    {
      v39 = 0;
LABEL_150:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v39, __n);
    }
    if ( __n )
    {
      v37 = a2;
      v38 = v14;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v39 = 1;
      v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
      if ( !v40 )
        goto LABEL_150;
      v41 = v40;
      v14 = v38;
      a2 = v37;
    }
    else
    {
      v41 = 1;
    }
    v42 = __n;
    memcpy((void *)v41, __src, __n);
    LOBYTE(v253) = 3;
    v254 = v42;
    v255 = v41;
    v256 = v42;
    v43 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v213, &v216);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v44 = v243;
      v45 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v46 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v46;
      v243[v45 + 3] = v256;
      v44[v45 + 2] = v255;
      v47 = v253;
      v48 = (void ***)v254;
      v44[v45 + 1] = v254;
      v44[v45] = v47;
      if ( (_BYTE)v249 != 6 )
      {
        v43 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v43 = (void **)&v249;
      v48 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v48);
    v20 = 9;
    v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v49 )
LABEL_169:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v20);
    *(_QWORD *)v49 = 0x746E656D75677261LL;
    *(_BYTE *)(v49 + 8) = 115;
    v228 = 9;
    v229 = v49;
    v230 = 9;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v216, &v201);
    v227 = v217;
    v50 = v218;
    if ( (v218 & 0x8000000000000000LL) != 0LL )
    {
      v52 = 0;
LABEL_152:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v52, v50);
    }
    v190 = v14;
    if ( v218 )
    {
      v51 = a2;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v216, &v201);
      v52 = 1;
      v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v50, 1);
      if ( !v53 )
        goto LABEL_152;
      v54 = v53;
      a2 = v51;
    }
    else
    {
      v54 = 1;
    }
    memcpy((void *)v54, v227, v50);
    LOBYTE(v253) = 3;
    v254 = v50;
    v255 = v54;
    v256 = v50;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v213, &v228);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v55 = v243;
      v56 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v57 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v57;
      v243[v56 + 3] = v256;
      v55[v56 + 2] = v255;
      v58 = v253;
      v55[v56 + 1] = v254;
      v55[v56] = v58;
      if ( (_BYTE)v249 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    if ( v216 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v227, v216, 1);
    v225 = v215;
    v224 = v214;
    v223 = v213;
    LOBYTE(v222) = 5;
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
      &v235,
      v198,
      (__int64)"response.function_call_arguments.done",
      (__int64 (__fastcall *)())0x25,
      (char *)&v222);
    v60 = v236;
    v61 = v237;
    v62 = *(_QWORD *)(a2 + 16);
    if ( v237 > *(_QWORD *)a2 - v62 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        a2,
        *(_QWORD *)(a2 + 16),
        v237,
        1,
        1,
        v59);
      v62 = *(_QWORD *)(a2 + 16);
    }
    v191 = *(_QWORD *)(a2 + 8);
    memcpy((void *)(v191 + v62), v60, v61);
    v63 = (void *)(v61 + v62);
    *(_QWORD *)(a2 + 16) = v63;
    v64 = (__int64)v235;
    if ( v235 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v235, 1);
    v227 = v63;
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v222);
    v228 = 0;
    v230 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v222, v64);
    v65 = 4;
    v66 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v66 )
      goto LABEL_170;
    *v66 = 1701869940;
    v222 = 4;
    v223 = v66;
    v224 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v67 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( !v67 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
    qmemcpy(v67, "function_call", 13);
    LOBYTE(v253) = 3;
    v254 = 13;
    v255 = (size_t)v67;
    v256 = 13;
    v68 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v228, &v222);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v69 = v243;
      v70 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v71 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v71;
      v243[v70 + 3] = v256;
      v69[v70 + 2] = v255;
      v72 = v253;
      v73 = (void ***)v254;
      v69[v70 + 1] = v254;
      v69[v70] = v72;
      if ( (_BYTE)v249 != 6 )
      {
        v68 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v68 = (void **)&v249;
      v73 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v68, v73);
    v65 = 2;
    v74 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
    if ( !v74 )
      goto LABEL_170;
    *v74 = 25705;
    v222 = 2;
    v223 = v74;
    v224 = 2;
    v75 = __n;
    if ( __n )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
      v76 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v75, 1);
      if ( !v76 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v75);
      v77 = v76;
    }
    else
    {
      v77 = 1;
    }
    memcpy((void *)v77, __src, v75);
    LOBYTE(v253) = 3;
    v254 = v75;
    v255 = v77;
    v256 = v75;
    v78 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v228, &v222);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v79 = v243;
      v80 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v81 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v81;
      v243[v80 + 3] = v256;
      v79[v80 + 2] = v255;
      v82 = v253;
      v83 = (void ***)v254;
      v79[v80 + 1] = v254;
      v79[v80] = v82;
      if ( (_BYTE)v249 != 6 )
      {
        v78 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v78 = (void **)&v249;
      v83 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v78, v83);
    v65 = 6;
    v84 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v84 )
      goto LABEL_170;
    *(_WORD *)(v84 + 4) = 29557;
    *(_DWORD *)v84 = 1952543859;
    v222 = 6;
    v223 = (_DWORD *)v84;
    v224 = 6;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
    v85 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v85 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
    *(_QWORD *)v85 = 0x6574656C706D6F63LL;
    *(_BYTE *)(v85 + 8) = 100;
    LOBYTE(v253) = 3;
    v254 = 9;
    v255 = v85;
    v256 = 9;
    v86 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v228, &v222);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v87 = v243;
      v88 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v89 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v89;
      v243[v88 + 3] = v256;
      v87[v88 + 2] = v255;
      v90 = v253;
      v91 = (void ***)v254;
      v87[v88 + 1] = v254;
      v87[v88] = v90;
      if ( (_BYTE)v249 != 6 )
      {
        v86 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v86 = (void **)&v249;
      v91 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v86, v91);
    v65 = 7;
    v92 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v92 )
      goto LABEL_170;
    *(_DWORD *)((char *)v92 + 3) = 1684627308;
    *v92 = 1819042147;
    v222 = 7;
    v223 = v92;
    v224 = 7;
    if ( (v220 & 0x8000000000000000LL) != 0LL )
    {
      v93 = 0;
LABEL_154:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v93, v220);
    }
    if ( v220 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v93 = 1;
      v94 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v220, 1);
      if ( !v94 )
        goto LABEL_154;
      v95 = v94;
    }
    else
    {
      v95 = 1;
    }
    v96 = v220;
    memcpy((void *)v95, v206, v220);
    LOBYTE(v253) = 3;
    v254 = v96;
    v255 = v95;
    v256 = v96;
    v97 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v228, &v222);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v98 = v243;
      v99 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v100 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v100;
      v243[v99 + 3] = v256;
      v98[v99 + 2] = v255;
      v101 = v253;
      v102 = (void ***)v254;
      v98[v99 + 1] = v254;
      v98[v99] = v101;
      if ( (_BYTE)v249 != 6 )
      {
        v97 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v97 = (void **)&v249;
      v102 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v97, v102);
    v65 = 4;
    v103 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v103 )
      goto LABEL_170;
    *v103 = 1701667182;
    v222 = 4;
    v223 = v103;
    v224 = 4;
    if ( (v209 & 0x8000000000000000LL) != 0LL )
    {
      v104 = 0;
LABEL_156:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v104, v209);
    }
    if ( v209 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v104 = 1;
      v105 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v209, 1);
      if ( !v105 )
        goto LABEL_156;
      v106 = v105;
    }
    else
    {
      v106 = 1;
    }
    v107 = v209;
    memcpy((void *)v106, v207, v209);
    LOBYTE(v253) = 3;
    v254 = v107;
    v255 = v106;
    v256 = v107;
    v108 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v228, &v222);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v109 = v243;
      v110 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v111 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v111;
      v243[v110 + 3] = v256;
      v109[v110 + 2] = v255;
      v112 = v253;
      v113 = (void ***)v254;
      v109[v110 + 1] = v254;
      v109[v110] = v112;
      if ( (_BYTE)v249 != 6 )
      {
        v108 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v108 = (void **)&v249;
      v113 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v108, v113);
    v65 = 9;
    v114 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v114 )
LABEL_170:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v65);
    *(_QWORD *)v114 = 0x746E656D75677261LL;
    *(_BYTE *)(v114 + 8) = 115;
    v222 = 9;
    v223 = (_DWORD *)v114;
    v224 = 9;
    v115 = v203;
    if ( (v203 & 0x8000000000000000LL) != 0LL )
    {
      v118 = 0;
LABEL_158:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v118, v115);
    }
    v116 = v202;
    if ( v203 )
    {
      v220 = (size_t)v202;
      v117 = a2;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, v202);
      v118 = 1;
      v119 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v115, 1);
      if ( !v119 )
        goto LABEL_158;
      v120 = v119;
      a2 = v117;
      v116 = (const void *)v220;
    }
    else
    {
      v120 = 1;
    }
    memcpy((void *)v120, v116, v115);
    LOBYTE(v253) = 3;
    v254 = v115;
    v255 = v120;
    v256 = v115;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v228, &v222);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v121 = v243;
      v122 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v123 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v123;
      v243[v122 + 3] = v256;
      v121[v122 + 2] = v255;
      v124 = v253;
      v121[v122 + 1] = v254;
      v121[v122] = v124;
      if ( (_BYTE)v249 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    v219 = v230;
    v218 = v229;
    v217 = (void *)v228;
    LOBYTE(v216) = 5;
    v125 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             &unk_1015FB9C8,
             4,
             &v216);
    v126 = 1;
    if ( v125 && *(_BYTE *)v125 == 3 )
    {
      v127 = *(_QWORD *)(v125 + 24);
      if ( v127 < 0 )
      {
        v171 = 0;
        goto LABEL_160;
      }
      v128 = *(_QWORD *)(v125 + 16);
      if ( !v127 )
      {
        v127 = 0;
        v129 = 1;
        v126 = v128;
        goto LABEL_100;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_1015FB9C8, 1);
      v129 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v127, 1);
      if ( !v129 )
      {
        v210 = v127;
        v171 = 1;
LABEL_160:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v171, v210);
      }
      v126 = v128;
    }
    else
    {
      v127 = 0;
      v129 = 1;
    }
LABEL_100:
    v130 = (const void *)v129;
    memcpy((void *)v129, (const void *)v126, v127);
    v210 = (signed __int64)v130;
    codexmate_lib::core::relay::translator::add_namespace_for_mapped_tool::h7403e268179b70d8(
      (__int64)&v216,
      v130,
      v127,
      v187);
    v213 = nullptr;
    v215 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v216, v130);
    v131 = 4;
    v132 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v132 )
      goto LABEL_176;
    *v132 = 1701869940;
    v228 = 4;
    v229 = (size_t)v132;
    v230 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v133 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
    if ( !v133 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
    qmemcpy(v133, "response.output_item.done", 25);
    LOBYTE(v253) = 3;
    v254 = 25;
    v255 = (size_t)v133;
    v256 = 25;
    v134 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v213, &v228);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v135 = v243;
      v136 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v137 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v137;
      v243[v136 + 3] = v256;
      v135[v136 + 2] = v255;
      v138 = v253;
      v139 = (void ***)v254;
      v135[v136 + 1] = v254;
      v135[v136] = v138;
      if ( (_BYTE)v249 != 6 )
      {
        v134 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v134 = (void **)&v249;
      v139 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v134, v139);
    v131 = 12;
    v140 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v140 )
      goto LABEL_176;
    qmemcpy(v140, "output_index", 12);
    v228 = 12;
    v229 = (size_t)v140;
    v230 = 12;
    LOBYTE(v253) = 2;
    v254 = 0;
    v255 = v193;
    v141 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v213, &v228);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v142 = v243;
      v143 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v144 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v144;
      v243[v143 + 3] = v256;
      v142[v143 + 2] = v255;
      v145 = v253;
      v146 = (void ***)v254;
      v142[v143 + 1] = v254;
      v142[v143] = v145;
      if ( (_BYTE)v249 != 6 )
      {
        v141 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v141 = (void **)&v249;
      v146 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v141, v146);
    v131 = 7;
    v147 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v147 )
      goto LABEL_176;
    *(_DWORD *)((char *)v147 + 3) = 1684627309;
    *v147 = 1835365481;
    v228 = 7;
    v229 = (size_t)v147;
    v230 = 7;
    v148 = __n;
    if ( __n )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v149 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v148, 1);
      if ( !v149 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
      v150 = v149;
      v148 = __n;
    }
    else
    {
      v150 = 1;
    }
    memcpy((void *)v150, __src, v148);
    LOBYTE(v253) = 3;
    v254 = v148;
    v255 = v150;
    v256 = v148;
    v151 = (void **)&v242;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v213, &v228);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v152 = v243;
      v153 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v154 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v154;
      v243[v153 + 3] = v256;
      v152[v153 + 2] = v255;
      v155 = v253;
      v156 = (void ***)v254;
      v152[v153 + 1] = v254;
      v152[v153] = v155;
      if ( (_BYTE)v249 != 6 )
      {
        v151 = (void **)&v249;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
      }
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      v151 = (void **)&v249;
      v156 = &v235;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v151, v156);
    v131 = 4;
    v157 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v157 )
LABEL_176:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v131);
    *v157 = 1835365481;
    v228 = 4;
    v229 = (size_t)v157;
    v230 = 4;
    serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
      &v235,
      &v216);
    if ( (_BYTE)v235 == 6 )
    {
      v242 = (void **)v236;
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v242, &off_101974C58, &off_101974710);
    }
    v256 = v238;
    v255 = v237;
    v254 = (__int64)v236;
    v253 = (__int64)v235;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v242, &v213, &v228);
    if ( v242 == (void **)0x8000000000000000LL )
    {
      v158 = v243;
      v159 = 4 * v245;
      v252 = v243[4 * v245 + 3];
      v251 = v243[4 * v245 + 2];
      v160 = v243[4 * v245];
      v250 = v243[4 * v245 + 1];
      v249 = v160;
      v243[v159 + 3] = v256;
      v158[v159 + 2] = v255;
      v161 = v253;
      v158[v159 + 1] = v254;
      v158[v159] = v161;
      if ( (_BYTE)v249 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v249);
    }
    else
    {
      v241 = v248;
      v240 = v247;
      v239 = v246;
      v238 = v245;
      v237 = v244;
      v236 = v243;
      v235 = v242;
      v234 = v256;
      v233 = v255;
      v232 = v254;
      v231 = v253;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v249,
        &v235,
        &v231);
    }
    v225 = v215;
    v224 = v214;
    v223 = v213;
    LOBYTE(v222) = 5;
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
      &v235,
      v198,
      (__int64)"response.output_item.doneresponse.function_call_arguments.done",
      (__int64 (__fastcall *)())0x19,
      (char *)&v222);
    v163 = v236;
    v164 = v237;
    v165 = v191;
    if ( v237 > *(_QWORD *)a2 - (_QWORD)v227 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        a2,
        v227,
        v237,
        1,
        1,
        v162);
      v165 = *(_QWORD *)(a2 + 8);
      v227 = *(void **)(a2 + 16);
    }
    v166 = (char *)v227;
    memcpy((char *)v227 + v165, v163, v164);
    *(_QWORD *)(a2 + 16) = &v166[v164];
    if ( v235 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, v235, 1);
    *(double *)si128.i64 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v222);
    v238 = v219;
    v237 = v218;
    v236 = v217;
    v235 = (void **)v216;
    v167 = v204[8];
    if ( v167 == v204[6] )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v188);
    v168 = v204;
    v169 = v204[7];
    v170 = 32 * v167;
    *(_QWORD *)(v169 + v170 + 24) = v238;
    *(_QWORD *)(v169 + v170 + 16) = v237;
    v7 = (__int64)v235;
    *(_QWORD *)(v169 + v170 + 8) = v236;
    *(_QWORD *)(v169 + v170) = v7;
    v168[8] = v167 + 1;
    if ( v127 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v210, v127, 1);
    v14 = v190;
    if ( v201 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v202, v201, 1);
    if ( v197 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v207, v197, 1);
    if ( v208 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v208, 1);
    if ( v212 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v206, v212, 1);
    if ( v196 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v200, v196, 1);
    if ( v221 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v199, v221, 1);
    v15 = v195 + 104;
    v194 -= 104;
    v8 = v189 + 104;
  }
  while ( v189 + 104 != v14 );
  v15 = v14;
LABEL_164:
  v13 = v205;
LABEL_165:
  core::ptr::drop_in_place$LT$$u5b$codexmate_lib..core..relay..translator..stream..ToolItemState$u5d$$GT$::h4bc770e396bdab26(
    v15,
    0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)(v14 - v15) >> 3),
    v7,
    v8,
    v9,
    v10,
    v174,
    v175,
    v176,
    v177);
  if ( v13 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v192, 104 * v13, 8);
  return *(double *)si128.i64;
}
