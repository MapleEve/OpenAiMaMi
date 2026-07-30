// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream26close_anthropic_tool_block @ 0x100ad52a0 | 1.2.4 NEW-delta
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_anthropic_tool_block::hc0fda6b2012f2674(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        _QWORD *a4)
{
  __m256i *v5; // r15
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __m256i *v9; // rdx
  __m256i *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __m256i *v13; // rax
  char *v14; // rdi
  __m256i *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rax
  __int64 v31; // rdx
  signed __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int128 v37; // kr00_16
  __int64 v38; // r13
  _DWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  void *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  _WORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  signed __int64 v48; // r12
  __int64 v49; // r15
  __m256i *v50; // rsi
  __int8 v51; // bl
  __m256i *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r14
  _DWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  void *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  void *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  _DWORD *v66; // rax
  __int64 v67; // rdx
  signed __int64 v68; // r14
  __int64 v69; // r15
  void *v70; // r13
  __int64 v71; // rax
  __int64 v72; // rbx
  const void *v73; // r12
  __int64 v74; // rax
  __int64 v75; // rbx
  const void *v76; // r13
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  void *v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  _DWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  signed __int64 v91; // r13
  __int64 v92; // r14
  __int64 v93; // rax
  __int64 v94; // rbx
  __int64 v95; // r13
  _DWORD *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  void *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  _WORD *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r15
  void *v106; // r13
  __int64 v107; // rax
  __int64 v108; // rbx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  void *v114; // rax
  __int64 v115; // rbx
  __int64 v116; // rdx
  __int64 v117; // rcx
  _DWORD *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  signed __int64 v121; // r14
  __int64 v122; // r13
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r14
  __int64 v131; // rax
  __int64 v132; // rbx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rsi
  __int64 v143; // rax
  __int64 v144; // rcx
  __m256i *v145; // r13
  __m256i *v146; // rdi
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  void *v152; // rax
  __int64 v153; // r14
  _DWORD *v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  void *v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  void *v160; // rax
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r15
  _DWORD *v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  _DWORD *v171; // rax
  __int128 v172; // kr20_16
  __int64 v173; // r12
  _QWORD *v174; // rbx
  __int64 v175; // rbx
  __int64 v176; // rsi
  __int64 result; // rax
  __int64 v178; // rsi
  __int64 v179; // rsi
  __int64 v180; // rsi
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  const void *v186; // rbx
  __int64 v187; // r13
  void *v188; // rax
  __int64 v189; // r14
  __int128 v190; // kr30_16
  __int64 v191; // r13
  _QWORD *v192; // rbx
  __int64 v193; // r14
  _DWORD *v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rcx
  void *v197; // rax
  __int64 v198; // rdx
  __int64 v199; // rcx
  void *v200; // rax
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rcx
  _DWORD *v204; // rax
  __int64 v205; // rdx
  signed __int64 v206; // r14
  __int64 v207; // r15
  const void *v208; // r13
  __int64 v209; // rax
  __int64 v210; // rbx
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r12
  __int64 v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rcx
  const void *v217; // r13
  __int64 v218; // rbx
  __int64 v219; // rax
  __int128 v220; // kr40_16
  __int64 v221; // r13
  _QWORD *v222; // rbx
  __int64 v223; // r13
  _DWORD *v224; // rax
  __int64 v225; // rdx
  __int64 v226; // rcx
  void *v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  _WORD *v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r15
  void *v234; // r13
  __int64 v235; // rax
  __int64 v236; // rbx
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // rax
  __int64 v240; // rdx
  __int64 v241; // rcx
  void *v242; // rax
  __int64 v243; // rbx
  __int64 v244; // rdx
  __int64 v245; // rcx
  _DWORD *v246; // rax
  __int64 v247; // rdx
  __int64 v248; // rcx
  signed __int64 v249; // r13
  __int64 v250; // r14
  __int64 v251; // rax
  __int64 v252; // rbx
  __int64 v253; // rdx
  __int64 v254; // rcx
  _DWORD *v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rcx
  signed __int64 v258; // r13
  __int64 v259; // r14
  const void *v260; // rsi
  __int64 v261; // rax
  __int64 v262; // rbx
  __int64 v263; // rdx
  __int64 v264; // rcx
  _DWORD *v265; // rax
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r14
  __int64 v269; // rax
  __int64 v270; // rbx
  __int128 v271; // kr50_16
  __int64 v272; // r13
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // rax
  __int64 v276; // rdx
  __int64 v277; // rcx
  size_t v278; // r14
  __int64 v279; // r13
  __int64 v280; // rax
  __int64 v281; // rbx
  __int64 v282; // rdx
  __int64 v283; // rcx
  __int64 v284; // rax
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r14
  __int64 v288; // rax
  __int64 v289; // rbx
  size_t v290; // rbx
  __m256i *v291; // [rsp+8h] [rbp-168h]
  __int64 v292; // [rsp+10h] [rbp-160h]
  __int64 v293; // [rsp+20h] [rbp-150h]
  __m256i *v294; // [rsp+28h] [rbp-148h]
  __m256i *v295; // [rsp+30h] [rbp-140h]
  __int64 v296; // [rsp+40h] [rbp-130h]
  _QWORD *v297; // [rsp+48h] [rbp-128h]
  char *__src; // [rsp+50h] [rbp-120h]
  void *__srca; // [rsp+50h] [rbp-120h]
  __m256i *__srcb; // [rsp+50h] [rbp-120h]
  __int64 __n; // [rsp+60h] [rbp-110h]
  const void *__na; // [rsp+60h] [rbp-110h]
  void *v304; // [rsp+68h] [rbp-108h]
  char v305; // [rsp+70h] [rbp-100h]
  char v306; // [rsp+74h] [rbp-FCh]
  _BYTE v307[24]; // [rsp+78h] [rbp-F8h] BYREF
  _QWORD *v308; // [rsp+90h] [rbp-E0h]
  __int128 v309; // [rsp+98h] [rbp-D8h] BYREF
  __int64 v310; // [rsp+A8h] [rbp-C8h]
  __m256i v311; // [rsp+B0h] [rbp-C0h] BYREF
  __m256i *v312; // [rsp+D0h] [rbp-A0h]
  __int64 v313; // [rsp+D8h] [rbp-98h]
  __int64 v314; // [rsp+E0h] [rbp-90h]
  __int64 v315; // [rsp+E8h] [rbp-88h]
  __int64 v316; // [rsp+F0h] [rbp-80h]
  size_t v317; // [rsp+F8h] [rbp-78h]
  __int64 v318; // [rsp+100h] [rbp-70h]
  __m256i v319; // [rsp+108h] [rbp-68h] BYREF
  __m256i v320[2]; // [rsp+128h] [rbp-48h] BYREF

  v308 = a4;
  v5 = *(__m256i **)(a2 + 80);
  v318 = a2;
  v6 = *(_QWORD *)(a2 + 88);
  core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(v5, v6);
  if ( v7 )
  {
    v8 = v318;
    v293 = *(_QWORD *)(v318 + 72);
    v305 = 1;
    v306 = 0;
    v9 = v5;
  }
  else
  {
    v10 = *(__m256i **)(v318 + 104);
    v6 = *(_QWORD *)(v318 + 112);
    core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(v10, v6);
    if ( v12 )
    {
      v8 = v318;
      v293 = *(_QWORD *)(v318 + 96);
      v306 = 1;
      v305 = 0;
      v9 = v10;
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v6, 0, v11);
      v6 = 2;
      v13 = (__m256i *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
      if ( !v13 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
      v9 = v13;
      v13->i16[0] = 32123;
      v305 = 1;
      v293 = 2;
      v306 = 1;
      v8 = v318;
    }
  }
  v14 = "completed";
  if ( a3 )
    v14 = "incomplete";
  __src = v14;
  v297 = a1;
  v291 = v9;
  v294 = v5;
  __n = a3 + 9LL;
  if ( !*(_BYTE *)(v8 + 125) )
  {
    v34 = *(_QWORD *)(v318 + 56);
    codexmate_lib::core::relay::translator::normalize_anthropic_tool_call_for_responses::h21049c27cd21ec33(
      &v311,
      v34,
      *(_QWORD *)(v318 + 64),
      v9,
      v6);
    v37 = *(__int128 *)((char *)v311.i128 + 8);
    v292 = v311.i64[3];
    v295 = v312;
    v296 = v313;
    v317 = v311.i64[0];
    if ( a3 )
    {
LABEL_25:
      *(_QWORD *)&v309 = 0;
      v310 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v311, v34, v35, v36);
      v38 = 4;
      v39 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v39 )
        goto LABEL_302;
      *v39 = 1701869940;
      v319.i64[0] = 4;
      v319.i64[1] = (__int64)v39;
      v319.i64[2] = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v40, v41);
      v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
      if ( !v42 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
      qmemcpy(v42, "function_call", 13);
      v311.i8[0] = 3;
      v311.i64[1] = 13;
      v311.i64[2] = (__int64)v42;
      v311.i64[3] = 13;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v43, v44);
      v38 = 2;
      v45 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
      if ( !v45 )
        goto LABEL_302;
      *v45 = 25705;
      v319.i64[0] = 2;
      v319.i64[1] = (__int64)v45;
      v319.i64[2] = 2;
      v48 = *(_QWORD *)(v318 + 16);
      if ( v48 < 0 )
      {
        v49 = 0;
        goto LABEL_32;
      }
      v70 = *(void **)(v318 + 8);
      if ( v48 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1, v46, v47);
        v49 = 1;
        v71 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v48, 1);
        if ( !v71 )
LABEL_32:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v49, v48);
        v72 = v71;
      }
      else
      {
        v72 = 1;
      }
      v304 = v70;
      memcpy((void *)v72, v70, v48);
      v311.i8[0] = 3;
      v311.i64[1] = v48;
      v311.i64[2] = v72;
      v311.i64[3] = v48;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v79, v80);
      v38 = 6;
      v81 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v81 )
        goto LABEL_302;
      *(_WORD *)(v81 + 4) = 29557;
      *(_DWORD *)v81 = 1952543859;
      v319.i64[0] = 6;
      v319.i64[1] = v81;
      v319.i64[2] = 6;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v82, v83);
      v84 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
      if ( !v84 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
      v85 = (__int64)v84;
      memcpy(v84, v14, __n);
      v311.i8[0] = 3;
      v311.i64[1] = a3 + 9LL;
      v311.i64[2] = v85;
      v311.i64[3] = v311.i64[1];
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v86, v87);
      v38 = 7;
      v88 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v88 )
        goto LABEL_302;
      *(_DWORD *)((char *)v88 + 3) = 1684627308;
      *v88 = 1819042147;
      v319.i64[0] = 7;
      v319.i64[1] = (__int64)v88;
      v319.i64[2] = 7;
      v91 = *(_QWORD *)(v318 + 40);
      if ( v91 < 0 )
      {
        v92 = 0;
        goto LABEL_69;
      }
      __na = *(const void **)(v318 + 32);
      if ( v91 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v89, v90);
        v92 = 1;
        v93 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v91, 1);
        if ( !v93 )
LABEL_69:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v92, v91);
        v94 = v93;
      }
      else
      {
        v94 = 1;
      }
      memcpy((void *)v94, __na, v91);
      v311.i8[0] = 3;
      v311.i64[1] = v91;
      v311.i64[2] = v94;
      v311.i64[3] = v91;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v263, v264);
      v38 = 4;
      v265 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v265 )
        goto LABEL_302;
      *v265 = 1701667182;
      v319.i64[0] = 4;
      v319.i64[1] = (__int64)v265;
      v319.i64[2] = 4;
      if ( v37 < 0 )
      {
        v268 = 0;
        goto LABEL_253;
      }
      if ( *((_QWORD *)&v37 + 1) )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v266, v267);
        v268 = 1;
        v269 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(*((_QWORD *)&v37 + 1), 1);
        if ( !v269 )
LABEL_253:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v268, *((_QWORD *)&v37 + 1));
        v270 = v269;
      }
      else
      {
        v270 = 1;
      }
      memcpy((void *)v270, (const void *)v37, *((size_t *)&v37 + 1));
      v311.i8[0] = 3;
      v311.i64[1] = *((_QWORD *)&v37 + 1);
      v311.i64[2] = v270;
      v311.i64[3] = *((_QWORD *)&v37 + 1);
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v282, v283);
      v38 = 9;
      v284 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
      if ( !v284 )
LABEL_302:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v38);
      *(_QWORD *)v284 = 0x746E656D75677261LL;
      *(_BYTE *)(v284 + 8) = 115;
      v319.i64[0] = 9;
      v319.i64[1] = v284;
      v319.i64[2] = 9;
      if ( v296 < 0 )
      {
        v287 = 0;
        goto LABEL_281;
      }
      if ( v296 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1, v285, v286);
        v287 = 1;
        v288 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v296, 1);
        if ( !v288 )
LABEL_281:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v287, v296);
        v289 = v288;
      }
      else
      {
        v289 = 1;
      }
      memcpy((void *)v289, v295, v296);
      v311.i8[0] = 3;
      v311.i64[1] = v296;
      v311.i64[2] = v289;
      v311.i64[3] = v296;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      v290 = v317;
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      *(__int128 *)((char *)v311.i128 + 8) = v309;
      v311.i64[3] = v310;
      v311.i8[0] = 5;
      v146 = &v311;
      codexmate_lib::core::relay::translator::add_namespace_for_mapped_tool::h2d6abd8556a6b736(
        &v311,
        v37,
        *((_QWORD *)&v37 + 1),
        v297 + 12);
      v319 = v311;
      v148 = v311.i64[1];
      v142 = v292;
      v145 = v294;
      if ( v292 )
      {
        v146 = v295;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v295, v292, 1);
      }
      if ( v290 )
      {
        v146 = (__m256i *)v37;
        v142 = v290;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v290, 1);
      }
      goto LABEL_128;
    }
    *(_QWORD *)&v309 = 0;
    v310 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v311, v34, v35, v36);
    v55 = 4;
    v56 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v56 )
      goto LABEL_303;
    *v56 = 1701869940;
    v319.i64[0] = 4;
    v319.i64[1] = (__int64)v56;
    v319.i64[2] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v57, v58);
    v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
    if ( !v59 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37);
    qmemcpy(v59, "response.function_call_arguments.done", 37);
    v311.i8[0] = 3;
    v311.i64[1] = 37;
    v311.i64[2] = (__int64)v59;
    v311.i64[3] = 37;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
    if ( v320[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v60, v61);
    v55 = 12;
    v62 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v62 )
      goto LABEL_303;
    qmemcpy(v62, "output_index", 12);
    v319.i64[0] = 12;
    v319.i64[1] = (__int64)v62;
    v319.i64[2] = 12;
    v63 = *(unsigned int *)(v318 + 120);
    v311.i8[0] = 2;
    v311.i64[1] = 0;
    v311.i64[2] = v63;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
    if ( v320[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v64, v65);
    v55 = 7;
    v66 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v66 )
      goto LABEL_303;
    *(_DWORD *)((char *)v66 + 3) = 1684627309;
    *v66 = 1835365481;
    v319.i64[0] = 7;
    v319.i64[1] = (__int64)v66;
    v319.i64[2] = 7;
    v68 = *(_QWORD *)(v318 + 16);
    if ( v68 < 0 )
    {
      v69 = 0;
      goto LABEL_45;
    }
    v73 = *(const void **)(v318 + 8);
    if ( v68 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v67, v297 + 30);
      v69 = 1;
      v74 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v68, 1);
      if ( !v74 )
LABEL_45:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v69, v68);
      v75 = v74;
    }
    else
    {
      v75 = 1;
    }
    memcpy((void *)v75, v73, v68);
    v311.i8[0] = 3;
    v311.i64[1] = v68;
    v311.i64[2] = v75;
    v311.i64[3] = v68;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
    if ( v320[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v125, v126);
    v55 = 9;
    v127 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v127 )
LABEL_303:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v55);
    *(_QWORD *)v127 = 0x746E656D75677261LL;
    *(_BYTE *)(v127 + 8) = 115;
    v319.i64[0] = 9;
    v319.i64[1] = v127;
    v319.i64[2] = 9;
    if ( v296 < 0 )
    {
      v130 = 0;
      goto LABEL_109;
    }
    if ( v296 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1, v128, v129);
      v130 = 1;
      v131 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v296, 1);
      if ( !v131 )
LABEL_109:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v130, v296);
      v132 = v131;
    }
    else
    {
      v132 = 1;
    }
    memcpy((void *)v132, v295, v296);
    v311.i8[0] = 3;
    v311.i64[1] = v296;
    v311.i64[2] = v132;
    v311.i64[3] = v296;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
    if ( v320[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
    *(__int128 *)((char *)v311.i128 + 8) = v309;
    v311.i64[3] = v310;
    v311.i8[0] = 5;
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30(
      v320,
      v297 + 30,
      "response.function_call_arguments.doneargumentsfunction_call",
      37,
      &v311);
    v271 = *(__int128 *)((char *)v320[0].i128 + 8);
    v272 = v308[2];
    if ( v320[0].i64[2] > (unsigned __int64)(*v308 - v272) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
        v308,
        v308[2],
        v320[0].i64[2],
        1,
        1);
      v272 = v308[2];
    }
    memcpy((void *)(v272 + v308[1]), (const void *)v271, *((size_t *)&v271 + 1));
    v308[2] = *((_QWORD *)&v271 + 1) + v272;
    v34 = v320[0].i64[0];
    if ( v320[0].i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v271, v320[0].i64[0], 1);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v311);
    goto LABEL_25;
  }
  if ( *(_BYTE *)(v8 + 125) != 1 )
  {
    v311.i64[0] = (__int64)v9;
    *(__int128 *)((char *)v311.i128 + 8) = (unsigned __int64)v6;
    v311.i64[3] = 0;
    v312 = v9;
    v313 = v6;
    v50 = &v311;
    serde_json::de::from_trait::hbc9c8c8dee91749d(v320, &v311);
    v51 = v320[0].i8[0];
    if ( v320[0].i8[0] == 6 )
    {
      v52 = v320;
      core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h3f127bb4bf6ccfe3(v320);
    }
    else
    {
      v311 = v320[0];
      if ( v320[0].i8[0] == 5 )
      {
        if ( v311.i64[3] )
        {
          v50 = (__m256i *)v311.i64[1];
          if ( !v311.i64[1] )
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_0c22962ad8183617843af04262484590_936);
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::hca7349e8cab510fb(
            v320,
            v311.i64[1],
            v311.i64[2]);
        }
        else
        {
          v320[0].i64[0] = 0;
          v320[0].i64[2] = 0;
        }
        *(__int128 *)((char *)v319.i128 + 8) = *(__int128 *)((char *)v320[0].i128 + 8);
        v319.i64[0] = v320[0].i64[0];
      }
      v52 = &v311;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v311);
      if ( v51 == 5 )
      {
        v54 = v319.i64[1];
        *(_OWORD *)&v307[8] = *(__int128 *)((char *)v319.i128 + 8);
        *(_QWORD *)v307 = v319.i64[0];
        goto LABEL_78;
      }
    }
    *(_QWORD *)v307 = 0;
    *(_QWORD *)&v307[16] = 0;
LABEL_78:
    *(_QWORD *)&v309 = 0;
    v310 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v52, v50, v53, v54);
    v95 = 4;
    v96 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( v96 )
    {
      *v96 = 1701869940;
      v319.i64[0] = 4;
      v319.i64[1] = (__int64)v96;
      v319.i64[2] = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v97, v98);
      v99 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
      if ( !v99 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
      qmemcpy(v99, "tool_search_call", 16);
      v311.i8[0] = 3;
      v311.i64[1] = 16;
      v311.i64[2] = (__int64)v99;
      v311.i64[3] = 16;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v100, v101);
      v95 = 2;
      v102 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
      if ( v102 )
      {
        *v102 = 25705;
        v319.i64[0] = 2;
        v319.i64[1] = (__int64)v102;
        v319.i64[2] = 2;
        v48 = *(_QWORD *)(v318 + 16);
        if ( v48 < 0 )
        {
          v105 = 0;
          goto LABEL_85;
        }
        v106 = *(void **)(v318 + 8);
        if ( v48 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1, v103, v104);
          v105 = 1;
          v107 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v48, 1);
          if ( !v107 )
LABEL_85:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v105, v48);
          v108 = v107;
        }
        else
        {
          v108 = 1;
        }
        v304 = v106;
        memcpy((void *)v108, v106, v48);
        v311.i8[0] = 3;
        v311.i64[1] = v48;
        v311.i64[2] = v108;
        v311.i64[3] = v48;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
        if ( v320[0].i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v109, v110);
        v95 = 6;
        v111 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( v111 )
        {
          *(_WORD *)(v111 + 4) = 29557;
          *(_DWORD *)v111 = 1952543859;
          v319.i64[0] = 6;
          v319.i64[1] = v111;
          v319.i64[2] = 6;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v112, v113);
          v114 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
          if ( !v114 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
          v115 = (__int64)v114;
          memcpy(v114, __src, __n);
          v311.i8[0] = 3;
          v311.i64[1] = a3 + 9LL;
          v311.i64[2] = v115;
          v311.i64[3] = v311.i64[1];
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
            v320,
            &v309,
            &v319,
            &v311);
          if ( v320[0].i8[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v116, v117);
          v95 = 7;
          v118 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
          if ( v118 )
          {
            *(_DWORD *)((char *)v118 + 3) = 1684627308;
            *v118 = 1819042147;
            v319.i64[0] = 7;
            v319.i64[1] = (__int64)v118;
            v319.i64[2] = 7;
            v121 = *(_QWORD *)(v318 + 40);
            if ( v121 < 0 )
            {
              v122 = 0;
              goto LABEL_99;
            }
            __na = *(const void **)(v318 + 32);
            if ( v121 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v119, v120);
              v122 = 1;
              v123 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v121, 1);
              if ( !v123 )
LABEL_99:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v122, v121);
              v124 = v123;
            }
            else
            {
              v124 = 1;
            }
            memcpy((void *)v124, __na, v121);
            v311.i8[0] = 3;
            v311.i64[1] = v121;
            v311.i64[2] = v124;
            v311.i64[3] = v121;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
              v320,
              &v309,
              &v319,
              &v311);
            if ( v320[0].i8[0] != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v133, v134);
            v95 = 9;
            v135 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
            if ( v135 )
            {
              *(_QWORD *)v135 = 0x6F69747563657865LL;
              *(_BYTE *)(v135 + 8) = 110;
              v319.i64[0] = 9;
              v319.i64[1] = v135;
              v319.i64[2] = 9;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1, v136, v137);
              v138 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
              if ( !v138 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
              *(_WORD *)(v138 + 4) = 29806;
              *(_DWORD *)v138 = 1701407843;
              v311.i8[0] = 3;
              v311.i64[1] = 6;
              v311.i64[2] = v138;
              v311.i64[3] = 6;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                v320,
                &v309,
                &v319,
                &v311);
              if ( v320[0].i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v139, v140);
              v141 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
              if ( v141 )
              {
                *(_QWORD *)v141 = 0x746E656D75677261LL;
                *(_BYTE *)(v141 + 8) = 115;
                v319.i64[0] = 9;
                v319.i64[1] = v141;
                v319.i64[2] = 9;
                serde_json::value::to_value::h7241c0a94e6aef77(&v311, v307);
                if ( v311.i8[0] == 6 )
                {
                  v320[0].i64[0] = v311.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` value",
                    43,
                    v320,
                    &off_101986228,
                    &off_101985790);
                }
                v320[0] = v311;
                v142 = (__int64)&v309;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                  &v311,
                  &v309,
                  &v319,
                  v320);
                if ( v311.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v311);
                *(__int128 *)((char *)v319.i128 + 8) = v309;
                v319.i64[3] = v310;
                v319.i8[0] = 5;
                if ( *(_QWORD *)v307 )
                {
                  v143 = *(_QWORD *)&v307[16];
                  v311.i64[1] = 0;
                  v311.i128[1] = *(_OWORD *)v307;
                  v313 = 0;
                  v314 = *(_QWORD *)v307;
                  v315 = *(_QWORD *)&v307[8];
                  v144 = 1;
                }
                else
                {
                  v144 = 0;
                  v143 = 0;
                }
                v145 = v294;
                v311.i64[0] = v144;
                v312 = (__m256i *)v144;
                v316 = v143;
                v146 = &v311;
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1009c2e0afc43f9(&v311);
                goto LABEL_128;
              }
            }
          }
        }
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v95);
  }
  v15 = (__m256i *)v307;
  v16 = (__int64)v9;
  codexmate_lib::core::relay::translator::unwrap_custom_tool_input::h58df35e457d1015d((__int64 *)v307, v9, v6);
  if ( !a3 )
  {
    v317 = *(_QWORD *)&v307[16];
    if ( *(_QWORD *)&v307[16] )
    {
      *(_QWORD *)&v309 = 0;
      v310 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v307, v16, v17, v18);
      v19 = 4;
      v20 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v20 )
        goto LABEL_306;
      *v20 = 1701869940;
      v319.i64[0] = 4;
      v319.i64[1] = (__int64)v20;
      v319.i64[2] = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v21, v22);
      v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
      if ( !v23 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37);
      qmemcpy(v23, "response.custom_tool_call_input.delta", 37);
      v311.i8[0] = 3;
      v311.i64[1] = 37;
      v311.i64[2] = (__int64)v23;
      v311.i64[3] = 37;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v24, v25);
      v19 = 12;
      v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
      if ( !v26 )
        goto LABEL_306;
      qmemcpy(v26, "output_index", 12);
      v319.i64[0] = 12;
      v319.i64[1] = (__int64)v26;
      v319.i64[2] = 12;
      v27 = *(unsigned int *)(v318 + 120);
      v311.i8[0] = 2;
      v311.i64[1] = 0;
      v311.i64[2] = v27;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v28, v29);
      v19 = 7;
      v30 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v30 )
        goto LABEL_306;
      *(_DWORD *)((char *)v30 + 3) = 1684627309;
      *v30 = 1835365481;
      v319.i64[0] = 7;
      v319.i64[1] = (__int64)v30;
      v319.i64[2] = 7;
      v32 = *(_QWORD *)(v318 + 16);
      if ( v32 < 0 )
      {
        v33 = 0;
        goto LABEL_23;
      }
      v76 = *(const void **)(v318 + 8);
      if ( v32 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v31, v297 + 30);
        v33 = 1;
        v77 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v32, 1);
        if ( !v77 )
LABEL_23:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v33, v32);
        v78 = v77;
      }
      else
      {
        v78 = 1;
      }
      memcpy((void *)v78, v76, v32);
      v311.i8[0] = 3;
      v311.i64[1] = v32;
      v311.i64[2] = v78;
      v311.i64[3] = v32;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v181, v182);
      v19 = 5;
      v183 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v183 )
LABEL_306:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19);
      *(_BYTE *)(v183 + 4) = 97;
      *(_DWORD *)v183 = 1953260900;
      v319.i64[0] = 5;
      v319.i64[1] = v183;
      v319.i64[2] = 5;
      v186 = *(const void **)&v307[8];
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v184, v185);
      v187 = v317;
      v188 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v317, 1);
      if ( !v188 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v187);
      v189 = (__int64)v188;
      memcpy(v188, v186, v187);
      v311.i8[0] = 3;
      v311.i64[1] = v187;
      v311.i64[2] = v189;
      v311.i64[3] = v187;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
      if ( v320[0].i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
      *(__int128 *)((char *)v311.i128 + 8) = v309;
      v311.i64[3] = v310;
      v311.i8[0] = 5;
      codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30(
        v320,
        v297 + 30,
        "response.custom_tool_call_input.deltaresponse.custom_tool_call_input.doneinputresponse.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done",
        37,
        &v311);
      v190 = *(__int128 *)((char *)v320[0].i128 + 8);
      v191 = v308[2];
      if ( v320[0].i64[2] > (unsigned __int64)(*v308 - v191) )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
          v308,
          v308[2],
          v320[0].i64[2],
          1,
          1);
        v191 = v308[2];
      }
      v192 = v308;
      memcpy((void *)(v191 + v308[1]), (const void *)v190, *((size_t *)&v190 + 1));
      v192[2] = *((_QWORD *)&v190 + 1) + v191;
      v16 = v320[0].i64[0];
      if ( v320[0].i64[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, v320[0].i64[0], 1);
      v15 = &v311;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v311);
    }
    *(_QWORD *)&v309 = 0;
    v310 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v16, v17, v18);
    v193 = 4;
    v194 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v194 )
      goto LABEL_305;
    *v194 = 1701869940;
    v319.i64[0] = 4;
    v319.i64[1] = (__int64)v194;
    v319.i64[2] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v195, v196);
    v197 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
    if ( !v197 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36);
    qmemcpy(v197, "response.custom_tool_call_input.done", 36);
    v311.i8[0] = 3;
    v311.i64[1] = 36;
    v311.i64[2] = (__int64)v197;
    v311.i64[3] = 36;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
    if ( v320[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v198, v199);
    v193 = 12;
    v200 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v200 )
      goto LABEL_305;
    qmemcpy(v200, "output_index", 12);
    v319.i64[0] = 12;
    v319.i64[1] = (__int64)v200;
    v319.i64[2] = 12;
    v201 = *(unsigned int *)(v318 + 120);
    v311.i8[0] = 2;
    v311.i64[1] = 0;
    v311.i64[2] = v201;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
    if ( v320[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v202, v203);
    v193 = 7;
    v204 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v204 )
      goto LABEL_305;
    *(_DWORD *)((char *)v204 + 3) = 1684627309;
    *v204 = 1835365481;
    v319.i64[0] = 7;
    v319.i64[1] = (__int64)v204;
    v319.i64[2] = 7;
    v206 = *(_QWORD *)(v318 + 16);
    if ( v206 < 0 )
    {
      v207 = 0;
      goto LABEL_194;
    }
    v208 = *(const void **)(v318 + 8);
    if ( v206 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v205, v297 + 30);
      v207 = 1;
      v209 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v206, 1);
      if ( !v209 )
LABEL_194:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v207, v206);
      v210 = v209;
    }
    else
    {
      v210 = 1;
    }
    memcpy((void *)v210, v208, v206);
    v311.i8[0] = 3;
    v311.i64[1] = v206;
    v311.i64[2] = v210;
    v311.i64[3] = v206;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
    if ( v320[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v211, v212);
    v193 = 5;
    v213 = 1;
    v214 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
    if ( !v214 )
LABEL_305:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v193);
    *(_BYTE *)(v214 + 4) = 116;
    *(_DWORD *)v214 = 1970302569;
    v319.i64[0] = 5;
    v319.i64[1] = v214;
    v319.i64[2] = 5;
    v217 = *(const void **)&v307[8];
    v218 = v317;
    if ( v317 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v215, v216);
      v219 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v218, 1);
      if ( !v219 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v317);
      v213 = v219;
      v218 = v317;
    }
    memcpy((void *)v213, v217, v218);
    v311.i8[0] = 3;
    v311.i64[1] = v218;
    v311.i64[2] = v213;
    v311.i64[3] = v218;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
    if ( v320[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
    *(__int128 *)((char *)v311.i128 + 8) = v309;
    v311.i64[3] = v310;
    v311.i8[0] = 5;
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30(
      v320,
      v297 + 30,
      "response.custom_tool_call_input.doneinputresponse.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done",
      36,
      &v311);
    v220 = *(__int128 *)((char *)v320[0].i128 + 8);
    v221 = v308[2];
    if ( v320[0].i64[2] > (unsigned __int64)(*v308 - v221) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
        v308,
        v308[2],
        v320[0].i64[2],
        1,
        1);
      v221 = v308[2];
    }
    v222 = v308;
    memcpy((void *)(v221 + v308[1]), (const void *)v220, *((size_t *)&v220 + 1));
    v222[2] = *((_QWORD *)&v220 + 1) + v221;
    v16 = v320[0].i64[0];
    if ( v320[0].i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v220, v320[0].i64[0], 1);
    v15 = &v311;
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v311);
  }
  *(_QWORD *)&v309 = 0;
  v310 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v16, v17, v18);
  v223 = 4;
  v224 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v224 )
    goto LABEL_301;
  *v224 = 1701869940;
  v319.i64[0] = 4;
  v319.i64[1] = (__int64)v224;
  v319.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v225, v226);
  v227 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
  if ( !v227 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
  qmemcpy(v227, "custom_tool_call", 16);
  v311.i8[0] = 3;
  v311.i64[1] = 16;
  v311.i64[2] = (__int64)v227;
  v311.i64[3] = 16;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
  if ( v320[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v228, v229);
  v223 = 2;
  v230 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v230 )
    goto LABEL_301;
  *v230 = 25705;
  v319.i64[0] = 2;
  v319.i64[1] = (__int64)v230;
  v319.i64[2] = 2;
  v48 = *(_QWORD *)(v318 + 16);
  if ( v48 < 0 )
  {
    v233 = 0;
    goto LABEL_219;
  }
  v234 = *(void **)(v318 + 8);
  if ( v48 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1, v231, v232);
    v233 = 1;
    v235 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v48, 1);
    if ( !v235 )
LABEL_219:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v233, v48);
    v236 = v235;
  }
  else
  {
    v236 = 1;
  }
  v304 = v234;
  memcpy((void *)v236, v234, v48);
  v311.i8[0] = 3;
  v311.i64[1] = v48;
  v311.i64[2] = v236;
  v311.i64[3] = v48;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
  if ( v320[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v237, v238);
  v223 = 6;
  v239 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v239 )
    goto LABEL_301;
  *(_WORD *)(v239 + 4) = 29557;
  *(_DWORD *)v239 = 1952543859;
  v319.i64[0] = 6;
  v319.i64[1] = v239;
  v319.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v240, v241);
  v242 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
  if ( !v242 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
  v243 = (__int64)v242;
  memcpy(v242, __src, __n);
  v311.i8[0] = 3;
  v311.i64[1] = a3 + 9LL;
  v311.i64[2] = v243;
  v311.i64[3] = v311.i64[1];
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
  if ( v320[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v244, v245);
  v223 = 7;
  v246 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v246 )
    goto LABEL_301;
  *(_DWORD *)((char *)v246 + 3) = 1684627308;
  *v246 = 1819042147;
  v319.i64[0] = 7;
  v319.i64[1] = (__int64)v246;
  v319.i64[2] = 7;
  v249 = *(_QWORD *)(v318 + 40);
  if ( v249 < 0 )
  {
    v250 = 0;
    goto LABEL_233;
  }
  __na = *(const void **)(v318 + 32);
  if ( v249 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v247, v248);
    v250 = 1;
    v251 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v249, 1);
    if ( !v251 )
LABEL_233:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v250, v249);
    v252 = v251;
  }
  else
  {
    v252 = 1;
  }
  memcpy((void *)v252, __na, v249);
  v311.i8[0] = 3;
  v311.i64[1] = v249;
  v311.i64[2] = v252;
  v311.i64[3] = v249;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
  if ( v320[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v253, v254);
  v223 = 4;
  v255 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v255 )
    goto LABEL_301;
  *v255 = 1701667182;
  v319.i64[0] = 4;
  v319.i64[1] = (__int64)v255;
  v319.i64[2] = 4;
  v258 = *(_QWORD *)(v318 + 64);
  if ( v258 < 0 )
  {
    v259 = 0;
    goto LABEL_243;
  }
  v260 = *(const void **)(v318 + 56);
  if ( v258 )
  {
    __srca = *(void **)(v318 + 56);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, v260, v256, v257);
    v259 = 1;
    v261 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v258, 1);
    if ( !v261 )
LABEL_243:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v259, v258);
    v262 = v261;
    v260 = __srca;
  }
  else
  {
    v262 = 1;
  }
  memcpy((void *)v262, v260, v258);
  v311.i8[0] = 3;
  v311.i64[1] = v258;
  v311.i64[2] = v262;
  v311.i64[3] = v258;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
  if ( v320[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &v309, v273, v274);
  v223 = 5;
  v275 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v275 )
LABEL_301:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v223);
  *(_BYTE *)(v275 + 4) = 116;
  *(_DWORD *)v275 = 1970302569;
  v319.i64[0] = 5;
  v319.i64[1] = v275;
  v319.i64[2] = 5;
  v278 = *(_QWORD *)&v307[16];
  if ( *(__int64 *)&v307[16] < 0 )
  {
    v279 = 0;
    goto LABEL_271;
  }
  __srcb = *(__m256i **)&v307[8];
  if ( *(_QWORD *)&v307[16] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v276, v277);
    v279 = 1;
    v280 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v278, 1);
    if ( !v280 )
LABEL_271:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v279, v278);
    v281 = v280;
  }
  else
  {
    v281 = 1;
  }
  memcpy((void *)v281, __srcb, v278);
  v311.i8[0] = 3;
  v311.i64[1] = v278;
  v311.i64[2] = v281;
  v311.i64[3] = v278;
  v146 = v320;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, &v309, &v319, &v311);
  if ( v320[0].i8[0] != 6 )
  {
    v146 = v320;
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
  }
  v148 = *((_QWORD *)&v309 + 1);
  *(__int128 *)((char *)v319.i128 + 8) = v309;
  v319.i64[3] = v310;
  v319.i8[0] = 5;
  v142 = *(_QWORD *)v307;
  v145 = v294;
  if ( *(_QWORD *)v307 )
  {
    v146 = __srcb;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__srcb, *(_QWORD *)v307, 1);
  }
LABEL_128:
  if ( a3 )
  {
    *(_QWORD *)v307 = 0;
    *(_QWORD *)&v307[16] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v146, v142, v147, v148);
    v149 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v149 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
    *(_WORD *)(v149 + 4) = 28271;
    *(_DWORD *)v149 = 1935762802;
    *(_QWORD *)&v309 = 6;
    *((_QWORD *)&v309 + 1) = v149;
    v310 = 6;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v150, v151);
    v152 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
    if ( !v152 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17);
    qmemcpy(v152, "max_output_tokens", 17);
    v311.i8[0] = 3;
    v311.i64[1] = 17;
    v311.i64[2] = (__int64)v152;
    v311.i64[3] = 17;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, v307, &v309, &v311);
    if ( v320[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
    *(__int128 *)((char *)v311.i128 + 8) = *(_OWORD *)v307;
    v311.i64[3] = *(_QWORD *)&v307[16];
    v311.i8[0] = 5;
    v142 = 18;
    v146 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                        &unk_10168712A,
                        0x12u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v146);
    v146->i128[1] = v311.i128[1];
    v148 = v311.i64[1];
    v146->i128[0] = v311.i128[0];
  }
  *(_QWORD *)v307 = 0;
  *(_QWORD *)&v307[16] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v146, v142, v147, v148);
  v153 = 4;
  v154 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v154 )
    goto LABEL_304;
  *v154 = 1701869940;
  *(_QWORD *)&v309 = 4;
  *((_QWORD *)&v309 + 1) = v154;
  v310 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v155, v156);
  v157 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
  if ( !v157 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
  qmemcpy(v157, "response.output_item.done", 25);
  v311.i8[0] = 3;
  v311.i64[1] = 25;
  v311.i64[2] = (__int64)v157;
  v311.i64[3] = 25;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, v307, &v309, &v311);
  if ( v320[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, v307, v158, v159);
  v153 = 12;
  v160 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v160 )
    goto LABEL_304;
  qmemcpy(v160, "output_index", 12);
  *(_QWORD *)&v309 = 12;
  *((_QWORD *)&v309 + 1) = v160;
  v310 = 12;
  v161 = *(unsigned int *)(v318 + 120);
  v311.i8[0] = 2;
  v311.i64[1] = 0;
  v311.i64[2] = v161;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, v307, &v309, &v311);
  if ( v320[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, v307, v162, v163);
  v153 = 7;
  v164 = 1;
  v165 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v165 )
    goto LABEL_304;
  *(_DWORD *)((char *)v165 + 3) = 1684627309;
  *v165 = 1835365481;
  *(_QWORD *)&v309 = 7;
  *((_QWORD *)&v309 + 1) = v165;
  v310 = 7;
  if ( v48 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v166, v167);
    v168 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v48, 1);
    if ( !v168 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v48);
    v164 = v168;
  }
  memcpy((void *)v164, v304, v48);
  v311.i8[0] = 3;
  v311.i64[1] = v48;
  v311.i64[2] = v164;
  v311.i64[3] = v48;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v320, v307, &v309, &v311);
  if ( v320[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v320);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, v307, v169, v170);
  v153 = 4;
  v171 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v171 )
LABEL_304:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v153);
  *v171 = 1835365481;
  *(_QWORD *)&v309 = 4;
  *((_QWORD *)&v309 + 1) = v171;
  v310 = 4;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4(
    &v311,
    &v319);
  if ( v311.i8[0] == 6 )
  {
    v320[0].i64[0] = v311.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` value",
      43,
      v320,
      &off_101986228,
      &off_1019857A8);
  }
  v320[0] = v311;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v311, v307, &v309, v320);
  if ( v311.i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v311);
  *(__int128 *)((char *)v311.i128 + 8) = *(_OWORD *)v307;
  v311.i64[3] = *(_QWORD *)&v307[16];
  v311.i8[0] = 5;
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30(
    v320,
    v297 + 30,
    "response.output_item.doneresponse.function_call_arguments.doneargumentsfunction_call",
    25,
    &v311);
  v172 = *(__int128 *)((char *)v320[0].i128 + 8);
  v173 = v308[2];
  if ( v320[0].i64[2] > (unsigned __int64)(*v308 - v173) )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
      v308,
      v308[2],
      v320[0].i64[2],
      1,
      1);
    v173 = v308[2];
  }
  v174 = v308;
  memcpy((void *)(v173 + v308[1]), (const void *)v172, *((size_t *)&v172 + 1));
  v174[2] = *((_QWORD *)&v172 + 1) + v173;
  if ( v320[0].i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, v320[0].i64[0], 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v311);
  v311 = v319;
  v175 = v297[8];
  if ( v175 == v297[6] )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v297 + 6);
  *(__m256i *)(v297[7] + 32 * v175) = v311;
  v297[8] = v175 + 1;
  if ( v293 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v291, v293, 1);
  if ( *(_QWORD *)v318 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v304, *(_QWORD *)v318, 1);
  v176 = *(_QWORD *)(v318 + 24);
  if ( v176 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__na, v176, 1);
  result = v318;
  v178 = *(_QWORD *)(v318 + 48);
  if ( v178 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v318 + 56), v178, 1);
  if ( v306 )
  {
    result = v318;
    v179 = *(_QWORD *)(v318 + 72);
    if ( v179 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v179, 1);
  }
  if ( v305 )
  {
    result = v318;
    v180 = *(_QWORD *)(v318 + 96);
    if ( v180 )
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v318 + 104), v180, 1);
  }
  return result;
}
