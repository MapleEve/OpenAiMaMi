// __ZN13codexmate_lib4core5relay16codex_diagnostic32fix_thread_poisoned_instructions @ 0x10050fa10
// [FULL — hexrays 全解 55702B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_diagnostic::fix_thread_poisoned_instructions | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_thread_poisoned_instructions::h2e3af49a31edf81c(
        __int64 a1,
        __int64 a2)
{
  _OWORD *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rbx
  _QWORD *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 result; // rax
  _DWORD *v9; // rax
  void *v10; // rax
  void *v11; // r15
  char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rbx
  void *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rax
  __int128 v22; // kr10_16
  void *v23; // rsi
  void *v24; // rdi
  __int64 v25; // r9
  __int64 v26; // rsi
  void *v27; // rcx
  __int64 v28; // rbx
  _DWORD *v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // r13
  char *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 v38; // r14
  __int128 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rbx
  bool v42; // zf
  __int64 v43; // rax
  __int64 v44; // rdx
  char *v45; // r14
  char *i; // r13
  const void *v47; // r15
  size_t v48; // rbx
  __int64 v49; // r12
  __int64 v50; // rbx
  __int64 v51; // rbx
  __int64 v52; // r12
  __int64 v53; // r15
  __int64 v54; // r15
  void *v55; // r12
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // r15
  __int64 v61; // r12
  __int64 v62; // rsi
  void *v63; // r12
  __int64 v64; // rdx
  __int64 v65; // rbx
  char *v66; // r15
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rsi
  __int64 v71; // rax
  char *v72; // rbx
  __int64 v73; // r14
  __int64 v74; // r15
  __int64 v75; // r14
  __int64 v76; // rbx
  char v77; // al
  volatile signed __int64 **v78; // rbx
  void **v79; // r13
  void **v80; // r14
  __m128i si128; // xmm0
  signed __int64 epi64; // rax
  volatile signed __int64 **v83; // r12
  void **v84; // rbx
  void **v85; // r14
  __int64 v86; // r15
  __int64 v87; // r13
  __int64 v88; // rsi
  unsigned __int128 v89; // kr30_16
  __int64 v90; // rax
  __int64 v91; // rdx
  void **v92; // rbx
  void **v93; // r14
  size_t v94; // r13
  char *v95; // rax
  __int64 v96; // rcx
  _QWORD *v97; // r12
  char *v98; // rax
  __int64 v99; // r14
  void *v100; // r13
  size_t v101; // rbx
  __int128 v102; // kr40_16
  __int64 v103; // rax
  __int64 v104; // rax
  char *v105; // rcx
  __int64 v106; // rax
  volatile signed __int64 *v107; // rcx
  volatile signed __int64 *v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rsi
  unsigned __int64 v111; // r8
  __int64 v112; // rdx
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // r9
  unsigned __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rdi
  unsigned __int64 v118; // rsi
  __int64 v119; // rcx
  unsigned __int8 *v120; // r9
  void *v121; // rdi
  size_t v122; // rsi
  __int64 v123; // rax
  unsigned int v124; // eax
  __int64 v125; // rdi
  __int64 v126; // rsi
  __int64 v127; // rdx
  unsigned __int8 *v128; // rdx
  void *v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rbx
  __int64 v132; // rsi
  unsigned __int128 v133; // rax
  unsigned __int64 v134; // rbx
  _QWORD *v135; // r12
  __int64 v136; // rsi
  __int64 *v137; // rdi
  __int64 v138; // rsi
  void *v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rax
  _QWORD *v142; // rbx
  void *v143; // rax
  __int64 v144; // rax
  _QWORD *v145; // r14
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int128 v150; // kr60_16
  __int64 v151; // r9
  __int64 v152; // rbx
  _QWORD *v153; // r14
  __int64 v154; // rsi
  __int64 v156; // rbx
  __int64 v157; // r14
  const __m128i *v158; // r15
  const __m128i *v160; // r12
  int v161; // r13d
  __int64 v162; // rax
  __int64 v163; // rsi
  unsigned __int64 v164; // rax
  __int64 v165; // rbx
  __int64 v166; // rax
  _QWORD *v167; // rbx
  void *v168; // rax
  __int64 v169; // rax
  _QWORD *v170; // r14
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rcx
  __int64 v174; // rdx
  __int128 v175; // kr80_16
  __int64 v176; // r9
  __int64 v177; // rbx
  _QWORD *v178; // r14
  __int64 v179; // rsi
  __int64 v181; // rbx
  __int64 v182; // r14
  const __m128i *v183; // r15
  const __m128i *v185; // r12
  int v186; // r13d
  __int64 v187; // rax
  __int64 v188; // rsi
  unsigned __int64 v189; // rax
  __int64 v190; // rbx
  __int64 v191; // rdi
  size_t v192; // [rsp+0h] [rbp-12D0h]
  _OWORD __dst[65]; // [rsp+10h] [rbp-12C0h] BYREF
  _OWORD v194[66]; // [rsp+420h] [rbp-EB0h] BYREF
  __int64 v195; // [rsp+848h] [rbp-A88h]
  volatile signed __int64 *v196; // [rsp+C70h] [rbp-660h] BYREF
  char v197; // [rsp+C78h] [rbp-658h]
  void *v198[134]; // [rsp+C80h] [rbp-650h] BYREF
  _QWORD v199[3]; // [rsp+10B0h] [rbp-220h] BYREF
  _QWORD v200[3]; // [rsp+10C8h] [rbp-208h] BYREF
  _QWORD v201[2]; // [rsp+10E0h] [rbp-1F0h] BYREF
  __int64 v202; // [rsp+10F0h] [rbp-1E0h]
  __int64 v203; // [rsp+10F8h] [rbp-1D8h] BYREF
  __int64 v204; // [rsp+1100h] [rbp-1D0h]
  __int64 v205; // [rsp+1108h] [rbp-1C8h]
  __int64 v206; // [rsp+1110h] [rbp-1C0h] BYREF
  __int64 v207; // [rsp+1118h] [rbp-1B8h] BYREF
  __int64 v208; // [rsp+1120h] [rbp-1B0h]
  __int64 v209; // [rsp+1128h] [rbp-1A8h]
  unsigned __int64 v210; // [rsp+1130h] [rbp-1A0h]
  unsigned __int64 v211; // [rsp+1138h] [rbp-198h]
  __int64 v212; // [rsp+1140h] [rbp-190h] BYREF
  __int64 v213; // [rsp+1148h] [rbp-188h] BYREF
  __int64 v214; // [rsp+1150h] [rbp-180h] BYREF
  char *v215; // [rsp+1158h] [rbp-178h]
  void *v216; // [rsp+1160h] [rbp-170h]
  const __m128i *v217; // [rsp+1168h] [rbp-168h] BYREF
  unsigned __int128 v218; // [rsp+1170h] [rbp-160h]
  __int64 v219; // [rsp+1180h] [rbp-150h]
  __int64 v220; // [rsp+1188h] [rbp-148h]
  __int64 v221; // [rsp+1190h] [rbp-140h]
  __m256i v222; // [rsp+1198h] [rbp-138h] BYREF
  __int64 v223; // [rsp+11B8h] [rbp-118h]
  void *v224; // [rsp+11C0h] [rbp-110h]
  __int64 v225; // [rsp+11C8h] [rbp-108h]
  __int64 v226; // [rsp+11D0h] [rbp-100h]
  __int64 v227; // [rsp+11D8h] [rbp-F8h] BYREF
  char *v228; // [rsp+11E0h] [rbp-F0h]
  size_t __n; // [rsp+11E8h] [rbp-E8h]
  size_t v230; // [rsp+11F0h] [rbp-E0h]
  __int64 v231; // [rsp+11F8h] [rbp-D8h]
  __int64 v232; // [rsp+1200h] [rbp-D0h] BYREF
  __int64 v233; // [rsp+1208h] [rbp-C8h]
  __int64 v234; // [rsp+1210h] [rbp-C0h]
  __int64 v235; // [rsp+1218h] [rbp-B8h]
  __int64 v236; // [rsp+1220h] [rbp-B0h]
  void *__buf; // [rsp+1228h] [rbp-A8h]
  char *v238; // [rsp+1230h] [rbp-A0h]
  unsigned __int8 *v239; // [rsp+1238h] [rbp-98h]
  volatile signed __int64 *v240; // [rsp+1240h] [rbp-90h]
  volatile signed __int64 *v241; // [rsp+1248h] [rbp-88h] BYREF
  unsigned __int128 v242; // [rsp+1250h] [rbp-80h] BYREF
  size_t v243; // [rsp+1260h] [rbp-70h]
  size_t __nbyte; // [rsp+1268h] [rbp-68h]
  __int64 v245; // [rsp+1270h] [rbp-60h] BYREF
  unsigned __int128 v246; // [rsp+1278h] [rbp-58h]
  __int64 v247; // [rsp+1288h] [rbp-48h]
  void *__src[2]; // [rsp+1290h] [rbp-40h] BYREF

  *((_QWORD *)&__dst[41] + 1) = 0;
  v223 = a1;
  v2 = v194;
  v225 = a2;
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v194);
  v3 = *(_QWORD *)&v194[1];
  if ( !*(_QWORD *)&v194[1] )
  {
    if ( *(_QWORD *)&v194[0] )
    {
      v2 = *((_OWORD **)&v194[0] + 1);
      a2 = 24LL * *(_QWORD *)&v194[0];
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v194[0] + 1), 24LL * *(_QWORD *)&v194[0], 8);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v2, a2);
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v16 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v17 = (_QWORD *)v16;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
    if ( !v18 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28);
    qmemcpy(v18, "thread_poisoned_instructions", 28);
    *v17 = 28;
    v17[1] = v18;
    v17[2] = 28;
    *(_QWORD *)&__dst[0] = 1;
    *((_QWORD *)&__dst[0] + 1) = v17;
    *(_QWORD *)&__dst[1] = 1;
    v198[0] = nullptr;
    v198[1] = (void *)8;
    v198[2] = nullptr;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(28, 1);
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v19 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v20 = (_QWORD *)v19;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
    if ( !v21 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
    *(_QWORD *)(v21 + 24) = 0xA4E5AEBFE4809CE9LL;
    *(_QWORD *)(v21 + 16) = 0xA097E68CBCEFA89CLL;
    *(_QWORD *)(v21 + 8) = 0xE598ADE58DB8E493LL;
    *(_QWORD *)v21 = 0xBAE5AE8DE6B095E6LL;
    *(_BYTE *)(v21 + 32) = -115;
    *v20 = 33;
    v20[1] = v21;
    v20[2] = 33;
    result = *(_QWORD *)&__dst[1];
    *(_QWORD *)&v194[1] = *(_QWORD *)&__dst[1];
    v22 = __dst[0];
    v194[0] = __dst[0];
    v23 = v198[0];
    v24 = v198[1];
    *((void **)&v194[1] + 1) = v198[0];
    v194[2] = *(_OWORD *)&v198[1];
    v25 = v223;
    *(void **)(v223 + 48) = v198[2];
    *(_QWORD *)(v25 + 40) = v24;
    *(_QWORD *)(v25 + 32) = v23;
    *(_QWORD *)(v25 + 24) = result;
    *(_OWORD *)(v25 + 8) = v22;
    *(_QWORD *)(v25 + 56) = 1;
    *(_QWORD *)(v25 + 64) = v20;
    *(_QWORD *)(v25 + 72) = 1;
    *(_QWORD *)v25 = 11;
    return result;
  }
  v4 = *((_QWORD *)&v194[0] + 1);
  v5 = (_QWORD *)(*((_QWORD *)&v194[0] + 1) + 8LL);
  do
  {
    v6 = *(v5 - 1);
    if ( v6 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v6, 1);
    v5 += 3;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)&v194[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24LL * *(_QWORD *)&v194[0], 8);
  v7 = v225;
  codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::h7b024af7a6c1ec26(v194, v225);
  v198[0] = *((void **)&v194[0] + 1);
  result = *(_QWORD *)&v194[0];
  *(_OWORD *)&v198[1] = v194[1];
  if ( *(_QWORD *)&v194[0] != 11 )
  {
    v26 = v223;
    *(_OWORD *)(v223 + 80) = v194[5];
    *(_OWORD *)(v26 + 64) = v194[4];
    *(_OWORD *)(v26 + 48) = v194[3];
    *(_OWORD *)(v26 + 32) = v194[2];
    *(void **)(v26 + 24) = v198[2];
    v27 = v198[0];
    *(void **)(v26 + 16) = v198[1];
    *(_QWORD *)(v26 + 8) = v27;
    *(_QWORD *)v26 = result;
    return result;
  }
  v214 = (__int64)v198[0];
  v215 = (char *)v198[1];
  v216 = v198[2];
  codexmate_lib::core::relay::codex_thread_visibility::find_reference_instructions::h37bba5dc08e7bf70(&v227, v7);
  v231 = v227;
  if ( !__OFSUB__(-v227, 1) )
  {
    __src[0] = v228;
    v28 = __n;
    v241 = nullptr;
    *((_QWORD *)&v242 + 1) = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v227, v7);
    v29 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v29 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
    *v29 = 1954047348;
    v222.i64[0] = 4;
    v222.i64[1] = (__int64)v29;
    v222.i64[2] = 4;
    if ( v28 < 0 )
    {
      v30 = 0;
      goto LABEL_26;
    }
    if ( v28 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v30 = 1;
      v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1);
      if ( !v31 )
LABEL_26:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, v28);
      v32 = v31;
    }
    else
    {
      v32 = 1;
    }
    memcpy((void *)v32, __src[0], v28);
    LOBYTE(v245) = 3;
    *(_QWORD *)&v246 = v28;
    *((_QWORD *)&v246 + 1) = v32;
    v247 = v28;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v198, &v241, &v222);
    if ( v198[0] == (void *)0x8000000000000000LL )
    {
      v33 = (char *)v198[1];
      v34 = 32 * (__int64)v198[3];
      __dst[1] = *((_OWORD *)v198[1] + 2 * (__int64)v198[3] + 1);
      v35 = *((_QWORD *)v198[1] + 4 * (__int64)v198[3]);
      *((_QWORD *)&__dst[0] + 1) = *((_QWORD *)v198[1] + 4 * (__int64)v198[3] + 1);
      *(_QWORD *)&__dst[0] = v35;
      *(_QWORD *)((char *)v198[1] + v34 + 24) = v247;
      *(_QWORD *)&v33[v34 + 16] = *((_QWORD *)&v246 + 1);
      v36 = v245;
      *(_QWORD *)&v33[v34 + 8] = v246;
      *(_QWORD *)&v33[v34] = v36;
      if ( LOBYTE(__dst[0]) != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(__dst);
    }
    else
    {
      *(void **)&v194[3] = v198[6];
      v194[2] = *(_OWORD *)&v198[4];
      v194[1] = *(_OWORD *)&v198[2];
      v194[0] = *(_OWORD *)v198;
      v219 = v247;
      v218 = v246;
      v217 = (const __m128i *)v245;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        __dst,
        v194,
        &v217);
    }
    *(_OWORD *)((char *)v194 + 15) = v242;
    *(_QWORD *)((char *)v194 + 7) = v241;
    *(void **)((char *)&v198[2] + 7) = *((void **)&v242 + 1);
    *(_OWORD *)v198 = v194[0];
    v198[2] = (void *)(v242 >> 8);
    if ( v231 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0], v231, 1);
    goto LABEL_39;
  }
  v241 = nullptr;
  *((_QWORD *)&v242 + 1) = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v227, v7);
  v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v9 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
  *v9 = 1954047348;
  v222.i64[0] = 4;
  v222.i64[1] = (__int64)v9;
  v222.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(91, 1);
  if ( !v10 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 91);
  v11 = v10;
  memcpy(
    v10,
    "Follow the user's instructions carefully. Respond helpfully and use tools when appropriate.proxy_running",
    0x5Bu);
  LOBYTE(v245) = 3;
  *(_QWORD *)&v246 = 91;
  *((_QWORD *)&v246 + 1) = v11;
  v247 = 91;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v198, &v241, &v222);
  if ( v198[0] == (void *)0x8000000000000000LL )
  {
    v12 = (char *)v198[1];
    v13 = 32 * (__int64)v198[3];
    __dst[1] = *((_OWORD *)v198[1] + 2 * (__int64)v198[3] + 1);
    v14 = *((_QWORD *)v198[1] + 4 * (__int64)v198[3]);
    *((_QWORD *)&__dst[0] + 1) = *((_QWORD *)v198[1] + 4 * (__int64)v198[3] + 1);
    *(_QWORD *)&__dst[0] = v14;
    *(_QWORD *)((char *)v198[1] + v13 + 24) = v247;
    *(_QWORD *)&v12[v13 + 16] = *((_QWORD *)&v246 + 1);
    v15 = v245;
    *(_QWORD *)&v12[v13 + 8] = v246;
    *(_QWORD *)&v12[v13] = v15;
    if ( LOBYTE(__dst[0]) != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(__dst);
  }
  else
  {
    *(void **)&v194[3] = v198[6];
    v194[2] = *(_OWORD *)&v198[4];
    v194[1] = *(_OWORD *)&v198[2];
    v194[0] = *(_OWORD *)v198;
    v219 = v247;
    v218 = v246;
    v217 = (const __m128i *)v245;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      __dst,
      v194,
      &v217);
  }
  *(_QWORD *)((char *)v194 + 7) = v241;
  *(_OWORD *)((char *)v194 + 15) = v242;
  *(void **)((char *)&v198[2] + 7) = *((void **)&v242 + 1);
  *(_OWORD *)v198 = v194[0];
  v198[2] = (void *)(v242 >> 8);
LABEL_39:
  v222.i8[0] = 5;
  *(__int128 *)((char *)v222.i128 + 1) = *(_OWORD *)v198;
  *(void **)((char *)&v222.i64[2] + 1) = v198[2];
  v222.i64[3] = *(__int64 *)((char *)&v198[2] + 7);
  v37 = *(_QWORD *)(v7 + 584);
  v38 = *(_QWORD *)(v7 + 592);
  *((_QWORD *)&v39 + 1) = v37;
  std::path::Path::_join::hb1a495d4f06b13b8(&v207, v37, v38, &unk_1015FE504, 26);
  *(_QWORD *)&v39 = &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v41 = v40;
  v42 = *(_BYTE *)(v40 + 16) == 1;
  v235 = v37;
  v226 = v38;
  if ( v42 )
  {
    v43 = *(_QWORD *)v40;
    v44 = *(_QWORD *)(v41 + 8);
  }
  else
  {
    v43 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    *(_QWORD *)v41 = v43;
    *(_QWORD *)(v41 + 8) = v44;
    *(_BYTE *)(v41 + 16) = 1;
  }
  *(_QWORD *)v41 = v43 + 1;
  v219 = 0;
  v218 = 0u;
  v217 = (const __m128i *)&xmmword_1015FBEC0;
  v220 = v43;
  v221 = v44;
  v213 = 0;
  v232 = 0;
  v233 = 8;
  v234 = 0;
  if ( v216 )
  {
    v45 = v215;
    __src[0] = (void *)(96LL * (_QWORD)v216);
    v240 = (volatile signed __int64 *)(v215 + 24);
    for ( i = nullptr; __src[0] != i; i += 96 )
    {
      if ( *(_QWORD *)&i[(_QWORD)v45 + 72] == 0x8000000000000000LL )
        continue;
      v47 = *(const void **)&i[(_QWORD)v45 + 80];
      v48 = *(_QWORD *)&i[(_QWORD)v45 + 88];
      if ( v48 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39, *((_QWORD *)&v39 + 1));
        v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v48, 1);
        if ( !v49 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v48);
      }
      else
      {
        v49 = 1;
      }
      memcpy((void *)v49, v47, v48);
      *(_QWORD *)&v194[0] = v48;
      *((_QWORD *)&v194[0] + 1) = v49;
      *(_QWORD *)&v194[1] = v48;
      *(_QWORD *)&v39 = &v217;
      *((_QWORD *)&v39 + 1) = v194;
      if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hbd679cce41409ece(&v217, v194) )
        continue;
      std::sys::fs::metadata::h32fa16d3052ea535(v194, *(_QWORD *)&i[(_QWORD)v45 + 80], *(_QWORD *)&i[(_QWORD)v45 + 88]);
      v50 = *(_QWORD *)&v194[0];
      v39 = v194[0];
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
        *(_QWORD *)&v194[0],
        *((_QWORD *)&v194[0] + 1));
      if ( v50 )
        continue;
      *((_QWORD *)&v39 + 1) = *(_QWORD *)&i[(_QWORD)v45 + 80];
      *(_QWORD *)&v39 = v194;
      codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hbef333d2a75f746a(
        v194,
        *((_QWORD *)&v39 + 1),
        *(_QWORD *)&i[(_QWORD)v45 + 88]);
      if ( LODWORD(v194[0]) == 11 )
      {
        if ( *((_QWORD *)&v194[0] + 1) != 0x8000000000000000LL )
        {
          v236 = *((_QWORD *)&v194[0] + 1);
          __SET_PAIR__(__nbyte, v39, v194[1]);
          __buf = *(void **)&v194[1];
          if ( (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::session_meta_is_guardian_poisoned::hc9c3a1189ee99bec() )
          {
            LOWORD(v194[0]) = 511;
            BYTE2(v194[0]) = 1;
            v51 = v208;
            v52 = v209;
            v53 = std::fs::DirBuilder::_create::h099c6e2853c95452(v194, v208, v209);
            if ( v53 )
              goto LABEL_61;
            v238 = (char *)v240 + (_QWORD)i;
            v198[0] = (char *)v240 + (_QWORD)i;
            v198[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v194, &unk_1017C0BDF, v198);
            v54 = *((_QWORD *)&v194[0] + 1);
            std::path::Path::_join::hb1a495d4f06b13b8(v198, v51, v52, *((_QWORD *)&v194[0] + 1), *(_QWORD *)&v194[1]);
            if ( *(_QWORD *)&v194[0] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, *(_QWORD *)&v194[0], 1);
            v55 = v198[1];
            v53 = std::fs::write::inner::had0c1bee0a2c1e21(v198[1], (size_t)v198[2], __buf, __nbyte);
            if ( v198[0] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v198[0], 1);
            if ( v53 )
            {
LABEL_61:
              *(_QWORD *)&__dst[0] = v53;
              if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
              {
                v198[0] = (char *)v240 + (_QWORD)i;
                v198[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                v198[2] = __dst;
                v198[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                *(_QWORD *)&v194[3] = 2;
                *((_QWORD *)&v194[3] + 1) = &anon_92869709a5e99ce1936aa4e326b6c562_437;
                *(_QWORD *)&v194[4] = 44;
                *(_QWORD *)&v194[5] = &unk_1017C0A37;
                *((_QWORD *)&v194[5] + 1) = v198;
                *(_QWORD *)&v194[0] = 0;
                *((_QWORD *)&v194[0] + 1) = &anon_92869709a5e99ce1936aa4e326b6c562_437;
                v194[1] = 0x2Cu;
                *(_QWORD *)&v194[2] = "src/core/relay/codex_diagnostic.rs";
                *((_QWORD *)&v194[2] + 1) = 34;
                *((_QWORD *)&v194[4] + 1) = 0x107800000001LL;
                _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v245, v194);
              }
              *(_QWORD *)&v39 = v194;
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                v194,
                &i[(_QWORD)v240]);
              v56 = v234;
              if ( v234 == v232 )
              {
                *(_QWORD *)&v39 = &v232;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v232);
              }
              v57 = v233;
              v58 = 3 * v56;
              *(_QWORD *)(v233 + 8 * v58 + 16) = *(_QWORD *)&v194[1];
              *(_OWORD *)(v57 + 8 * v58) = v194[0];
              v234 = v56 + 1;
              if ( (__dst[0] & 3) == 1 )
              {
                v59 = *(_QWORD *)&__dst[0] - 1LL;
                v60 = *(_QWORD *)(*(_QWORD *)&__dst[0] - 1LL);
                v61 = *(_QWORD *)(*(_QWORD *)&__dst[0] + 7LL);
                if ( *(_QWORD *)v61 )
                  (*(void (__fastcall **)(__int64))v61)(v60);
                v62 = *(_QWORD *)(v61 + 8);
                if ( v62 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v62, *(_QWORD *)(v61 + 16));
                *(_QWORD *)&v39 = v59;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, 24, 8);
              }
            }
            else
            {
              codexmate_lib::core::relay::codex_diagnostic::rewrite_session_meta_base_instructions::h10cd62aebe74e8ff(
                v198,
                __buf,
                __nbyte,
                &v222);
              if ( LODWORD(v198[0]) == 11 )
              {
                v63 = v198[1];
                *((_QWORD *)&v39 + 1) = *(_QWORD *)&i[(_QWORD)v45 + 80];
                v64 = *(_QWORD *)&i[(_QWORD)v45 + 88];
                v192 = __nbyte;
                *(_QWORD *)&v39 = v198;
                __nbyte = (size_t)v198[2];
                v65 = v236;
                codexmate_lib::core::relay::codex_thread_visibility::replace_first_session_meta_line::h49193b4a14eef084(
                  v198,
                  *((_QWORD *)&v39 + 1),
                  v64,
                  v198[2],
                  v198[3],
                  __buf,
                  v192);
                if ( LODWORD(v198[0]) == 11 )
                {
                  ++v213;
                }
                else
                {
                  qmemcpy(v194, v198, 0x60u);
                  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                  {
                    v245 = (__int64)v238;
                    *(_QWORD *)&v246 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                    *((_QWORD *)&v246 + 1) = v194;
                    v247 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                    *(_QWORD *)&__dst[0] = &anon_92869709a5e99ce1936aa4e326b6c562_437;
                    *((_QWORD *)&__dst[0] + 1) = 44;
                    *(_QWORD *)&__dst[1] = &anon_92869709a5e99ce1936aa4e326b6c562_437;
                    *((_QWORD *)&__dst[1] + 1) = 44;
                    *(_QWORD *)&__dst[2] = &off_101964328;
                    log::__private_api::log::h719f4907c7336ae9(&unk_1017C0A78, &v245, 2, __dst);
                  }
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v238);
                  *((_QWORD *)&v39 + 1) = __dst;
                  alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v232, __dst);
                  *(_QWORD *)&v39 = v194;
                  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v194);
                }
                if ( v63 )
                {
                  *(_QWORD *)&v39 = __nbyte;
                  *((_QWORD *)&v39 + 1) = v63;
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__nbyte, v63, 1);
                }
                if ( !v65 )
                  continue;
                *(_QWORD *)&v39 = __buf;
                *((_QWORD *)&v39 + 1) = v65;
                goto LABEL_81;
              }
              qmemcpy(v194, v198, 0x60u);
              v66 = v238;
              if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
              {
                v245 = (__int64)v238;
                *(_QWORD *)&v246 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                *((_QWORD *)&v246 + 1) = v194;
                v247 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                *(_QWORD *)&__dst[0] = &anon_92869709a5e99ce1936aa4e326b6c562_437;
                *((_QWORD *)&__dst[0] + 1) = 44;
                *(_QWORD *)&__dst[1] = &anon_92869709a5e99ce1936aa4e326b6c562_437;
                *((_QWORD *)&__dst[1] + 1) = 44;
                *(_QWORD *)&__dst[2] = &off_101964340;
                log::__private_api::log::h719f4907c7336ae9(&unk_1017C0AAA, &v245, 2, __dst);
              }
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v66);
              v67 = v234;
              if ( v234 == v232 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v232);
              v68 = v233;
              v69 = 3 * v67;
              *(_QWORD *)(v233 + 8 * v69 + 16) = *(_QWORD *)&__dst[1];
              *(_OWORD *)(v68 + 8 * v69) = __dst[0];
              v234 = v67 + 1;
              *(_QWORD *)&v39 = v194;
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v194);
            }
          }
          *((_QWORD *)&v39 + 1) = v236;
          if ( v236 )
          {
            *(_QWORD *)&v39 = __buf;
LABEL_81:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, *((_QWORD *)&v39 + 1), 1);
          }
        }
      }
      else
      {
        *(_QWORD *)&v39 = v194;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v194);
      }
    }
  }
  v70 = v235;
  std::path::Path::_join::hb1a495d4f06b13b8(&v203, v235, v226, &unk_1015FCB64, 24);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v203, v70);
  v71 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
  if ( !v71 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
  v72 = (char *)v71;
  v73 = v204;
  v74 = v205;
  std::path::Path::_join::hb1a495d4f06b13b8(v194, v204, v205, &unk_1015FCEA6, 12);
  *((_QWORD *)v72 + 2) = *(_QWORD *)&v194[1];
  *(_OWORD *)v72 = v194[0];
  v227 = 1;
  v228 = v72;
  __n = 1;
  std::path::Path::_join::hb1a495d4f06b13b8(v194, v73, v74, "history", 7);
  v75 = v225;
  v76 = *((_QWORD *)&v194[0] + 1);
  std::sys::fs::read_dir::h768dda1fe4336014(v198, *((_QWORD *)&v194[0] + 1), *(_QWORD *)&v194[1]);
  v77 = (char)v198[1];
  v241 = (volatile signed __int64 *)v198[0];
  LOBYTE(v242) = v198[1];
  if ( *(_QWORD *)&v194[0] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, *(_QWORD *)&v194[0], 1);
    v77 = v242;
  }
  if ( v77 == 2 )
  {
LABEL_121:
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h313f17e113e3a02b(&v241);
    goto LABEL_122;
  }
  *(_QWORD *)&v194[0] = 0;
  v195 = 0;
  v78 = &v196;
  v196 = v241;
  v197 = v77;
  v79 = &v198[3];
  v80 = v198;
  do
  {
    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(v80);
    if ( v198[0] )
    {
      *(_OWORD *)__src = *(_OWORD *)&v198[1];
      memcpy(__dst, v79, sizeof(__dst));
      goto LABEL_102;
    }
    if ( v197 != 2 && !_InterlockedDecrement64(v196) )
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v78);
    v197 = 2;
    *(_OWORD *)__src = *(_OWORD *)&v198[1];
    memcpy(__dst, v79, sizeof(__dst));
    if ( ((__int64)v198[0] & 1) == 0 )
      break;
LABEL_102:
    si128 = _mm_load_si128((const __m128i *)__src);
    if ( si128.i64[0] )
    {
      *(__m128i *)__src = si128;
      memcpy(&v198[2], __dst, 0x410u);
      *(__m128i *)v198 = _mm_load_si128((const __m128i *)__src);
      std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v245, v80);
      v89 = v246;
      v90 = std::path::Path::extension::hbb56a39ecf8d3771(v246, *((_QWORD *)&v246 + 1));
      if ( v90
        && (core::str::converts::from_utf8::hb32deb9559450f6e(__dst, v90, v91), LODWORD(__dst[0]) != 1)
        && *(_QWORD *)&__dst[1] == 4
        && **((_DWORD **)&__dst[0] + 1) == 1852797802 )
      {
        v235 = v89;
        v92 = v80;
        v93 = v79;
        __src[0] = (void *)v245;
        v94 = __n;
        if ( __n == v227 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v227);
        v95 = v228;
        v96 = 3 * v94;
        *(void **)&v228[8 * v96] = __src[0];
        *(_QWORD *)&v95[8 * v96 + 8] = v235;
        *(_QWORD *)&v95[8 * v96 + 16] = *((_QWORD *)&v89 + 1);
        __n = v94 + 1;
        v79 = v93;
        v80 = v92;
        v78 = (volatile signed __int64 **)v89;
        if ( _InterlockedDecrement64((volatile signed __int64 *)v198[0]) )
          continue;
      }
      else
      {
        if ( v245 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, v245, 1);
        if ( _InterlockedDecrement64((volatile signed __int64 *)v198[0]) )
          continue;
      }
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v80);
    }
    else
    {
      epi64 = _mm_extract_epi64(si128, 1);
      if ( (epi64 & 3) == 1 )
      {
        v83 = v78;
        v84 = v80;
        v85 = v79;
        __src[0] = (void *)(epi64 - 1);
        v86 = *(_QWORD *)(epi64 - 1);
        v87 = *(_QWORD *)(epi64 + 7);
        if ( *(_QWORD *)v87 )
          (*(void (__fastcall **)(__int64))v87)(v86);
        v88 = *(_QWORD *)(v87 + 8);
        if ( v88 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v88, *(_QWORD *)(v87 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0], 24, 8);
        v79 = v85;
        v80 = v84;
        v78 = v83;
      }
    }
  }
  while ( v197 != 2 );
  core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(v194);
  v75 = v225;
  if ( (_BYTE)v242 == 2 )
    goto LABEL_121;
LABEL_122:
  v97 = v228;
  v245 = (__int64)v228;
  *(_QWORD *)&v246 = v228;
  v236 = v227;
  *((_QWORD *)&v246 + 1) = v227;
  __src[0] = &v228[24 * __n];
  v247 = (__int64)__src[0];
  __buf = v228;
  if ( !__n )
  {
    v226 = 0;
    goto LABEL_218;
  }
  v226 = 0;
LABEL_124:
  v97 += 3;
  while ( 2 )
  {
    v99 = *(v97 - 3);
    if ( v99 == 0x8000000000000000LL )
      goto LABEL_217;
    v100 = (void *)*(v97 - 2);
    v101 = *(v97 - 1);
    std::fs::read_to_string::inner::hcce2334f4117b5b3(v194, v100, v101);
    v102 = v194[0];
    if ( *(_QWORD *)&v194[0] == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4(
        0x8000000000000000LL,
        *((_QWORD *)&v194[0] + 1));
      goto LABEL_132;
    }
    v103 = *(_QWORD *)&v194[1];
    v194[0] = *(_OWORD *)((char *)v194 + 8);
    v194[1] = 0u;
    v235 = *((_QWORD *)&v102 + 1);
    *(_QWORD *)&v194[2] = *((_QWORD *)&v102 + 1);
    *((_QWORD *)&v194[2] + 1) = v103;
    serde_json::de::from_trait::h51e180b4bb6af5e0(v198, v194);
    if ( LOBYTE(v198[0]) != 6 )
    {
      *(_QWORD *)&v246 = v97;
      __dst[1] = *(_OWORD *)&v198[2];
      __dst[0] = *(_OWORD *)v198;
      v104 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
               &unk_1015FCDFD,
               7,
               __dst);
      if ( !v104 || *(_BYTE *)v104 != 4 )
        goto LABEL_209;
      v105 = *(char **)(v104 + 16);
      v106 = 32LL * *(_QWORD *)(v104 + 24);
      v238 = v105;
      v240 = (volatile signed __int64 *)&v105[v106];
      __nbyte = 0;
LABEL_137:
      v107 = (volatile signed __int64 *)v238;
      while ( 1 )
      {
        v108 = v107;
        do
        {
          if ( v108 == v240 )
          {
            if ( __nbyte )
            {
              serde_json::ser::to_vec_pretty::h1bb921fbfe3276cc(&v241, __dst);
              v240 = v241;
              if ( v241 == (volatile signed __int64 *)0x8000000000000000LL )
                goto LABEL_208;
              v238 = (char *)v242;
              v130 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v100, v101);
              if ( v130 )
              {
                v212 = v130;
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                {
                  v201[0] = v100;
                  v201[1] = v101;
                  v198[0] = v201;
                  v198[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
                  v198[2] = &v212;
                  v198[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                  *(_QWORD *)&v194[0] = &anon_92869709a5e99ce1936aa4e326b6c562_437;
                  *((_QWORD *)&v194[0] + 1) = 44;
                  *(_QWORD *)&v194[1] = &anon_92869709a5e99ce1936aa4e326b6c562_437;
                  *((_QWORD *)&v194[1] + 1) = 44;
                  *(_QWORD *)&v194[2] = &off_101964358;
                  log::__private_api::log::h719f4907c7336ae9(&unk_1017C0E46, v198, 2, v194);
                  v130 = v212;
                }
                if ( (v130 & 3) == 1 )
                {
                  v243 = v130 - 1;
                  __nbyte = *(_QWORD *)(v130 - 1);
                  v131 = *(_QWORD *)(v130 + 7);
                  if ( *(_QWORD *)v131 )
                    (*(void (__fastcall **)(size_t))v131)(__nbyte);
                  v132 = *(_QWORD *)(v131 + 8);
                  if ( v132 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__nbyte, v132, *(_QWORD *)(v131 + 16));
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v243, 24, 8);
                }
              }
              else
              {
                v226 += __nbyte;
              }
              if ( v240 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v238, v240, 1);
              if ( v241 == (volatile signed __int64 *)0x8000000000000000LL )
LABEL_208:
                core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v242);
            }
LABEL_209:
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(__dst);
            if ( (_QWORD)v102 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v102, 1);
            if ( v99 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v99, 1);
            v75 = v225;
            if ( v97 == __src[0] )
              goto LABEL_223;
            goto LABEL_124;
          }
          v107 = v108 + 4;
          v42 = *(_BYTE *)v108 == 5;
          v108 += 4;
        }
        while ( !v42 );
        v109 = *((_QWORD *)v107 - 3);
        if ( v109 && *((_QWORD *)v107 - 1) )
        {
          v202 = *((_QWORD *)v107 - 1);
          v238 = (char *)v107;
          v110 = *((_QWORD *)v107 - 2);
          v111 = 0;
          while ( 2 )
          {
            if ( !v111 )
            {
              if ( v110 )
              {
                v111 = v109;
                if ( (v110 & 7) != 0 )
                {
                  v112 = 0;
                  do
                  {
                    v111 = *(_QWORD *)(v111 + 632);
                    ++v112;
                  }
                  while ( (v110 & 7) != v112 );
                  v113 = v110 - v112;
                }
                else
                {
                  v113 = v110;
                }
                if ( v110 >= 8 )
                {
                  do
                  {
                    v111 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v111 + 632) + 632LL)
                                                                                                 + 632LL)
                                                                                     + 632LL)
                                                                         + 632LL)
                                                             + 632LL)
                                                 + 632LL)
                                     + 632LL);
                    v113 -= 8LL;
                  }
                  while ( v113 );
                }
              }
              else
              {
                v111 = v109;
              }
              v110 = 0;
              v109 = 0;
            }
            if ( v110 >= *(unsigned __int16 *)(v111 + 626) )
            {
              do
              {
                v114 = *(_QWORD *)(v111 + 352);
                if ( !v114 )
                  core::option::unwrap_failed::h44626cade04bbf1e(&off_101964920);
                ++v109;
                v115 = *(unsigned __int16 *)(v111 + 624);
                v111 = *(_QWORD *)(v111 + 352);
              }
              while ( (unsigned __int16)v115 >= *(_WORD *)(v114 + 626) );
            }
            else
            {
              v114 = v111;
              v115 = v110;
            }
            if ( v109 )
            {
              v116 = v114 + 8 * v115 + 640;
              if ( (v109 & 7) != 0 )
              {
                v117 = 0;
                do
                {
                  v111 = *(_QWORD *)v116;
                  v116 = *(_QWORD *)v116 + 632LL;
                  ++v117;
                }
                while ( (v109 & 7) != v117 );
                v118 = v109 - v117;
              }
              else
              {
                v118 = v109;
              }
              if ( v109 >= 8 )
              {
                do
                {
                  v111 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v116 + 632LL)
                                                                                               + 632LL)
                                                                                   + 632LL)
                                                                       + 632LL)
                                                           + 632LL)
                                               + 632LL)
                                   + 632LL);
                  v116 = v111 + 632;
                  v118 -= 8LL;
                }
                while ( v118 );
              }
              v110 = 0;
            }
            else
            {
              v110 = v115 + 1;
              v111 = v114;
            }
            v119 = 32 * v115;
            if ( *(_BYTE *)(v114 + v119) != 3 )
              goto LABEL_145;
            v211 = v110;
            v210 = v111;
            v120 = (unsigned __int8 *)(v119 + v114);
            v121 = *((void **)v120 + 2);
            v239 = v120;
            v122 = *((_QWORD *)v120 + 3);
            v224 = v121;
            v243 = v122;
            if ( (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::session_meta_is_guardian_poisoned::hc9c3a1189ee99bec() )
            {
              if ( (v243 & 0x8000000000000000LL) != 0LL )
              {
                v191 = 0;
LABEL_313:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v191, v230);
              }
              if ( v243 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v121, v122);
                v123 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v243, 1);
                if ( !v123 )
                {
                  v230 = v243;
                  v191 = 1;
                  goto LABEL_313;
                }
              }
              else
              {
                v123 = 1;
              }
              v230 = v123;
              memcpy((void *)v123, v224, v243);
              codexmate_lib::core::relay::codex_diagnostic::rewrite_session_meta_base_instructions::h10cd62aebe74e8ff(
                v194,
                v230,
                v243,
                &v222);
              if ( LODWORD(v194[0]) == 11 )
              {
                *(_OWORD *)((char *)&v198[1] + 7) = v194[1];
                *(void **)((char *)v198 + 7) = *((void **)&v194[0] + 1);
                v124 = *v239;
                if ( v124 >= 3 )
                {
                  if ( v124 == 3 )
                  {
                    v126 = *((_QWORD *)v239 + 1);
                    if ( v126 )
                    {
                      v125 = *((_QWORD *)v239 + 2);
                      v127 = 1;
LABEL_186:
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v125, v126, v127);
                    }
                  }
                  else if ( v124 == 4 )
                  {
                    v224 = v239 + 8;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf3b3f1b4c8214e60(v239 + 8);
                    if ( *(_QWORD *)v224 )
                    {
                      v125 = *((_QWORD *)v239 + 2);
                      v126 = 32LL * *(_QWORD *)v224;
                      v127 = 8;
                      goto LABEL_186;
                    }
                  }
                  else
                  {
                    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h42178f288fb20d82(v239 + 8);
                  }
                }
                v128 = v239;
                *v239 = 3;
                v129 = v198[1];
                *(void **)(v128 + 1) = v198[0];
                *(_QWORD *)(v128 + 9) = v129;
                *(void **)(v128 + 17) = v198[2];
                *((void **)v128 + 3) = *(void **)((char *)&v198[2] + 7);
                ++__nbyte;
              }
              if ( v243 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v230, v243, 1);
              if ( LODWORD(v194[0]) != 11 )
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v194);
            }
            v111 = v210;
            v110 = v211;
LABEL_145:
            v109 = 0;
            if ( !--v202 )
              goto LABEL_137;
            continue;
          }
        }
      }
    }
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v198[1]);
    if ( (_QWORD)v102 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v102, 1);
LABEL_132:
    if ( v99 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v99, 1);
    v98 = (char *)(v97 - 3);
    v97 += 3;
    if ( v98 + 24 != __src[0] )
      continue;
    break;
  }
  v97 = __src[0];
LABEL_217:
  *(_QWORD *)&v246 = v97;
  v75 = v225;
LABEL_218:
  v133 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)((char *)__src[0] - (char *)v97);
  if ( __src[0] != v97 )
  {
    v134 = (unsigned __int64)((char *)__src[0] - (char *)v97) / 0x18;
    v135 = v97 + 1;
    do
    {
      v136 = *(v135 - 1);
      if ( v136 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v135, v136, 1);
      v135 += 3;
      --v134;
    }
    while ( v134 );
  }
LABEL_223:
  if ( v236 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__buf, 24 * v236, 8);
  if ( v203 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v204, v203, 1);
  v206 = v226;
  v137 = (__int64 *)v194;
  v138 = v75;
  codexmate_lib::core::relay::codex_diagnostic::check_thread_poisoned_instructions::hdfb6c4ad26943df3(
    v194,
    v75,
    *((_QWORD *)&v133 + 1));
  v139 = &unk_1015FE566;
  if ( v231 == 0x8000000000000000LL )
    v139 = &unk_1015FE51E;
  v140 = 42;
  if ( v231 == 0x8000000000000000LL )
    v140 = 72;
  v227 = (__int64)v139;
  v228 = (char *)v140;
  if ( v234 )
  {
    v203 = v234;
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v198, v233, v234, &unk_1015FC148, 3);
    *(void **)&__dst[1] = v198[2];
    __dst[0] = *(_OWORD *)v198;
    v198[0] = &v203;
    v198[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    v198[2] = __dst;
    v198[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    v137 = &v245;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v245, &unk_1017C0ADE, v198);
    v138 = *(_QWORD *)&__dst[0];
    if ( *(_QWORD *)&__dst[0] )
    {
      v137 = *((__int64 **)&__dst[0] + 1);
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[0] + 1), *(_QWORD *)&__dst[0], 1);
    }
    v241 = (volatile signed __int64 *)v245;
    v242 = v246;
    if ( *((_QWORD *)&v194[2] + 1) != 2 )
    {
LABEL_238:
      v245 = 0;
      v246 = 8u;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v137, v138);
      v141 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
      if ( !v141 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
      v142 = (_QWORD *)v141;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
      v143 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
      if ( !v143 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28);
      qmemcpy(v143, "thread_poisoned_instructions", 28);
      *v142 = 28;
      v142[1] = v143;
      v142[2] = 28;
      *(_QWORD *)&__dst[0] = 1;
      *((_QWORD *)&__dst[0] + 1) = v142;
      *(_QWORD *)&__dst[1] = 1;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(28, 1);
      v144 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
      if ( !v144 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
      v145 = (_QWORD *)v144;
      v198[0] = &v213;
      v198[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v198[2] = &v206;
      v198[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v198[4] = &v194[3];
      v198[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      v198[6] = &v241;
      v198[7] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v200, &unk_1017C0B9D, v198);
      v145[2] = v200[2];
      v146 = v200[0];
      v145[1] = v200[1];
      *v145 = v146;
      v147 = v245;
      v148 = v246;
      v198[0] = (void *)v245;
      v149 = *((_QWORD *)&v246 + 1);
      *(_OWORD *)&v198[1] = v246;
      v150 = __dst[0];
      *(_OWORD *)&v198[3] = __dst[0];
      v198[5] = *(void **)&__dst[1];
      v151 = v223;
      *(_QWORD *)(v223 + 48) = *(_QWORD *)&__dst[1];
      *(_OWORD *)(v151 + 32) = v150;
      *(_QWORD *)(v151 + 24) = v149;
      *(_QWORD *)(v151 + 16) = v148;
      *(_QWORD *)(v151 + 8) = v147;
      *(_QWORD *)(v151 + 56) = 1;
      *(_QWORD *)(v151 + 64) = v145;
      *(_QWORD *)(v151 + 72) = 1;
      *(_QWORD *)v151 = 11;
      if ( v241 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v242, v241, 1);
      if ( *(_QWORD *)&v194[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v194[0] + 1), *(_QWORD *)&v194[0], 1);
      if ( *((_QWORD *)&v194[1] + 1) )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v194[2], *((_QWORD *)&v194[1] + 1), 1);
      if ( *(_QWORD *)&v194[3] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v194[3] + 1), *(_QWORD *)&v194[3], 1);
      if ( *((_QWORD *)&v194[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&v194[4] + 1) )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v194[5], *((_QWORD *)&v194[4] + 1), 1);
      v152 = v234;
      if ( v234 )
      {
        v153 = (_QWORD *)(v233 + 8);
        do
        {
          v154 = *(v153 - 1);
          if ( v154 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v153, v154, 1);
          v153 += 3;
          --v152;
        }
        while ( v152 );
      }
      HIDWORD(_RAX) = HIDWORD(v232);
      if ( v232 )
        HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v233, 24 * v232, 8) >> 32;
      v156 = v218;
      if ( (_QWORD)v218 )
      {
        v157 = v219;
        if ( v219 )
        {
          v158 = v217;
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v217));
          v160 = v217 + 1;
          do
          {
            if ( !(_WORD)_R13D )
            {
              do
              {
                v161 = _mm_movemask_epi8(_mm_load_si128(v160));
                v158 -= 24;
                ++v160;
              }
              while ( v161 == 0xFFFF );
              _R13D = ~v161;
            }
            __asm { tzcnt   eax, r13d }
            v162 = -3 * _RAX;
            v163 = *((_QWORD *)&v158[-1] + v162 - 1);
            if ( v163 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v158[-1].i64[v162], v163, 1);
            --v157;
            _RAX = _R13D & (unsigned int)(_R13D - 1);
            _R13D &= _R13D - 1;
          }
          while ( v157 );
        }
        v164 = (24 * v156 + 39) & 0xFFFFFFFFFFFFFFF0LL;
        v165 = v164 + v156 + 17;
        if ( v165 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v217 - v164, v165, 16);
      }
      if ( v207 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v208, v207, 1);
      goto LABEL_272;
    }
  }
  else
  {
    v241 = nullptr;
    v242 = 1u;
    if ( *((_QWORD *)&v194[2] + 1) != 2 )
      goto LABEL_238;
  }
  if ( **(_WORD **)&v194[2] != 27503 )
    goto LABEL_238;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v137, v138);
  v166 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
  if ( !v166 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
  v167 = (_QWORD *)v166;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
  v168 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
  if ( !v168 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28);
  qmemcpy(v168, "thread_poisoned_instructions", 28);
  *v167 = 28;
  v167[1] = v168;
  v167[2] = 28;
  v245 = 1;
  *(_QWORD *)&v246 = v167;
  *((_QWORD *)&v246 + 1) = 1;
  *(_QWORD *)&__dst[0] = 0;
  *((_QWORD *)&__dst[0] + 1) = 8;
  *(_QWORD *)&__dst[1] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(28, 1);
  v169 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
  if ( !v169 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
  v170 = (_QWORD *)v169;
  v198[0] = &v213;
  v198[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  v198[2] = &v227;
  v198[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  v198[4] = &v206;
  v198[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  v198[6] = &v241;
  v198[7] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v199, &unk_1017C0AFF, v198);
  v170[2] = v199[2];
  v171 = v199[0];
  v170[1] = v199[1];
  *v170 = v171;
  v172 = v245;
  v173 = v246;
  v198[0] = (void *)v245;
  v174 = *((_QWORD *)&v246 + 1);
  *(_OWORD *)&v198[1] = v246;
  v175 = __dst[0];
  *(_OWORD *)&v198[3] = __dst[0];
  v198[5] = *(void **)&__dst[1];
  v176 = v223;
  *(_QWORD *)(v223 + 48) = *(_QWORD *)&__dst[1];
  *(_OWORD *)(v176 + 32) = v175;
  *(_QWORD *)(v176 + 24) = v174;
  *(_QWORD *)(v176 + 16) = v173;
  *(_QWORD *)(v176 + 8) = v172;
  *(_QWORD *)(v176 + 56) = 1;
  *(_QWORD *)(v176 + 64) = v170;
  *(_QWORD *)(v176 + 72) = 1;
  *(_QWORD *)v176 = 11;
  if ( v241 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v242, v241, 1);
  if ( *(_QWORD *)&v194[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v194[0] + 1), *(_QWORD *)&v194[0], 1);
  if ( *((_QWORD *)&v194[1] + 1) )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v194[2], *((_QWORD *)&v194[1] + 1), 1);
  if ( *(_QWORD *)&v194[3] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v194[3] + 1), *(_QWORD *)&v194[3], 1);
  if ( *((_QWORD *)&v194[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&v194[4] + 1) )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v194[5], *((_QWORD *)&v194[4] + 1), 1);
  v177 = v234;
  if ( v234 )
  {
    v178 = (_QWORD *)(v233 + 8);
    do
    {
      v179 = *(v178 - 1);
      if ( v179 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v178, v179, 1);
      v178 += 3;
      --v177;
    }
    while ( v177 );
  }
  HIDWORD(_RAX) = HIDWORD(v232);
  if ( v232 )
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v233, 24 * v232, 8) >> 32;
  v181 = v218;
  if ( (_QWORD)v218 )
  {
    v182 = v219;
    if ( v219 )
    {
      v183 = v217;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v217));
      v185 = v217 + 1;
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v186 = _mm_movemask_epi8(_mm_load_si128(v185));
            v183 -= 24;
            ++v185;
          }
          while ( v186 == 0xFFFF );
          _R13D = ~v186;
        }
        __asm { tzcnt   eax, r13d }
        v187 = -3 * _RAX;
        v188 = *((_QWORD *)&v183[-1] + v187 - 1);
        if ( v188 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v183[-1].i64[v187], v188, 1);
        --v182;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v182 );
    }
    v189 = (24 * v181 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v190 = v189 + v181 + 17;
    if ( v190 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v217 - v189, v190, 16);
  }
  if ( v207 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v208, v207, 1);
LABEL_272:
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v222);
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72f82cad8096f66a(&v214);
  result = v214;
  if ( v214 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v215, 96 * v214, 8);
  return result;
}
