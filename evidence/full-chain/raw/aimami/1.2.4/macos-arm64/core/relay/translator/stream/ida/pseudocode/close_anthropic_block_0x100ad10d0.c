// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream21close_anthropic_block @ 0x100ad10d0 | 1.2.4 NEW-delta
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_anthropic_block::heb965d1ad629e36b(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v4; // r12
  _QWORD *v5; // r15
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  signed __int64 v24; // rbx
  _DWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _DWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 result; // rax
  __int64 v36; // r14
  _DWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _DWORD *v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // r13
  size_t v49; // rcx
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 *v53; // r13
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  void *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  _DWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r15
  __int64 *v68; // r13
  _QWORD *v69; // r12
  __int64 v70; // rax
  __int64 v71; // r14
  _QWORD *v72; // r13
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r14
  _DWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  _WORD *v83; // rax
  __int64 v84; // rdx
  size_t v85; // rcx
  __int64 v86; // r15
  __int64 v87; // rax
  __int64 v88; // r14
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  void *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  _DWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r13
  __int64 v99; // rax
  __int64 v100; // r12
  __int128 v101; // kr10_16
  __int64 v102; // rsi
  __int64 v103; // rsi
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r14
  _DWORD *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  void *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  void *v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rbx
  _DWORD *v117; // rax
  __int64 v118; // rdx
  size_t v119; // rcx
  size_t v120; // rbx
  __int64 v121; // rax
  __int64 v122; // r14
  __int64 v123; // rdx
  __int64 v124; // rcx
  void *v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  _DWORD *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r12
  _DWORD *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  void *v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r14
  _DWORD *v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r13
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  void *v146; // rax
  _QWORD *v147; // r12
  __int128 v148; // kr20_16
  __int64 v149; // r13
  __int64 v150; // rsi
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // rbx
  _DWORD *v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  _DWORD *v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r14
  _WORD *v161; // rax
  __int64 v162; // rdx
  size_t v163; // rcx
  size_t v164; // r14
  __int64 v165; // rax
  __int64 v166; // rbx
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  _DWORD *v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  _DWORD *v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rbx
  __int64 v188; // r15
  _DWORD *v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rcx
  void *v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r14
  _DWORD *v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r15
  __int64 v200; // rax
  __int64 v201; // rdx
  __int64 v202; // rcx
  void *v203; // rax
  __int64 v204; // rdx
  _QWORD *v205; // r15
  _QWORD *v206; // r12
  __int64 v207; // r14
  _DWORD *v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rcx
  void *v211; // rax
  __int64 v212; // rdx
  __int64 v213; // rcx
  void *v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // rbx
  _DWORD *v218; // rax
  __int64 v219; // rdx
  size_t v220; // rcx
  size_t v221; // rbx
  __int64 v222; // rax
  __int64 v223; // r14
  __int64 v224; // rdx
  __int64 v225; // rcx
  _DWORD *v226; // rax
  __int128 v227; // kr30_16
  __int64 v228; // r13
  __int64 v229; // rbx
  __int64 v230; // rcx
  __int64 v231; // rdx
  __int128 v232; // kr40_16
  __int64 v233; // rsi
  void *v234; // rdi
  __int64 v235; // rbx
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // rax
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // rax
  __int64 v242; // rdx
  __int64 v243; // rcx
  _DWORD *v244; // rax
  __int64 v245; // rcx
  __int128 v246; // rax
  __int64 v247; // rdx
  __int64 v248; // rcx
  _DWORD *v249; // rax
  __int64 v250; // rdx
  __int64 v251; // rcx
  void *v252; // rax
  __int64 v253; // rdx
  __int64 v254; // rcx
  _DWORD *v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rcx
  size_t v258; // rbx
  __int64 v259; // r13
  __int64 v260; // rsi
  __m256i *v261; // rdi
  __int64 v262; // rdx
  __int64 v263; // rcx
  bool v264; // r14
  __int64 v265; // r14
  _DWORD *v266; // rax
  __int64 v267; // rdx
  __int64 v268; // rcx
  void *v269; // rax
  __int64 v270; // rdx
  __int64 v271; // rcx
  void *v272; // rax
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // rbx
  _DWORD *v276; // rax
  __int64 v277; // rdx
  size_t v278; // rcx
  size_t v279; // rbx
  __int64 v280; // rax
  __int64 v281; // r14
  __int64 v282; // rdx
  __int64 v283; // rcx
  _DWORD *v284; // rax
  __int128 v285; // kr70_16
  __int64 v286; // rax
  __int64 *v287; // r13
  __int64 v288; // r12
  _QWORD *v289; // r14
  __int64 v290; // rbx
  __int64 *v291; // r15
  __int128 v292; // kr80_16
  __int64 v293; // r12
  __int64 v294; // r12
  __int64 v295; // rsi
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // r14
  _DWORD *v299; // rax
  __int64 v300; // rdx
  __int64 v301; // rcx
  void *v302; // rax
  __int64 v303; // rdx
  __int64 v304; // rcx
  void *v305; // rax
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // rbx
  _DWORD *v309; // rax
  __int64 v310; // rdx
  size_t v311; // rcx
  size_t v312; // rbx
  __int64 v313; // rax
  __int64 v314; // r14
  __int64 v315; // rdx
  __int64 v316; // rcx
  void *v317; // rax
  __int64 v318; // rdx
  __int64 v319; // rcx
  _DWORD *v320; // rax
  __int64 v321; // rdx
  __int64 v322; // rcx
  _DWORD *v323; // rax
  __int64 v324; // rdx
  __int64 v325; // rcx
  void *v326; // rax
  __int64 v327; // rdx
  __int64 v328; // rcx
  _DWORD *v329; // rax
  __int64 v330; // rdx
  __int64 v331; // rcx
  __int64 v332; // r13
  __int64 v333; // rax
  __int64 v334; // rbx
  __int64 *v335; // r15
  __int128 v336; // kr90_16
  __int64 v337; // rdi
  __int64 v338; // rsi
  __int64 v339; // rdx
  __int64 v340; // rcx
  __int64 v341; // r15
  _DWORD *v342; // rax
  __int64 v343; // rdx
  __int64 v344; // rcx
  _QWORD *v345; // rax
  __int64 v346; // rdx
  __int64 v347; // rcx
  _QWORD *v348; // rax
  __int64 v349; // rdx
  __int64 v350; // rcx
  __int128 v351; // krA0_16
  __int64 v352; // r13
  __int64 v353; // rax
  __int64 v354; // r12
  __int64 v355; // rax
  __int64 v356; // r12
  __m256i *v357; // rdi
  __int64 v358; // rdx
  __int64 v359; // rcx
  __int64 v360; // rsi
  __int64 v361; // rax
  __int64 v362; // rdx
  __int64 v363; // rcx
  __int64 v364; // r15
  __int64 v365; // rax
  __int64 v366; // r14
  __int64 v367; // rcx
  size_t v368; // rbx
  __int64 v369; // [rsp+30h] [rbp-1D0h]
  __int128 v370; // [rsp+48h] [rbp-1B8h] BYREF
  __int64 v371; // [rsp+58h] [rbp-1A8h]
  __int128 v372; // [rsp+60h] [rbp-1A0h] BYREF
  __int64 v373; // [rsp+70h] [rbp-190h]
  __int64 v374; // [rsp+78h] [rbp-188h] BYREF
  void *v375; // [rsp+80h] [rbp-180h]
  size_t v376; // [rsp+88h] [rbp-178h]
  _QWORD *v377; // [rsp+90h] [rbp-170h]
  void *v378; // [rsp+98h] [rbp-168h]
  _QWORD *v379; // [rsp+A0h] [rbp-160h]
  void *v380; // [rsp+A8h] [rbp-158h]
  void *v381; // [rsp+B0h] [rbp-150h]
  size_t v382; // [rsp+B8h] [rbp-148h]
  __int128 v383; // [rsp+C0h] [rbp-140h] BYREF
  __int64 v384; // [rsp+D0h] [rbp-130h]
  void *v385; // [rsp+D8h] [rbp-128h]
  _QWORD *v386; // [rsp+E0h] [rbp-120h]
  size_t v387; // [rsp+E8h] [rbp-118h]
  void *__src; // [rsp+F0h] [rbp-110h]
  __int64 v389; // [rsp+F8h] [rbp-108h]
  __int64 *v390; // [rsp+100h] [rbp-100h]
  __int128 v391; // [rsp+108h] [rbp-F8h] BYREF
  __int64 v392; // [rsp+118h] [rbp-E8h]
  size_t __n; // [rsp+120h] [rbp-E0h]
  __int128 v394; // [rsp+128h] [rbp-D8h] BYREF
  __int64 v395; // [rsp+138h] [rbp-C8h]
  _BYTE v396[24]; // [rsp+140h] [rbp-C0h] BYREF
  __int64 v397; // [rsp+158h] [rbp-A8h]
  __m256i v398; // [rsp+160h] [rbp-A0h] BYREF
  void *v399; // [rsp+180h] [rbp-80h]
  signed __int64 v400; // [rsp+188h] [rbp-78h]
  __int64 v401; // [rsp+190h] [rbp-70h]
  __m256i v402; // [rsp+198h] [rbp-68h] BYREF
  __m256i v403[2]; // [rsp+1B8h] [rbp-48h] BYREF

  v4 = a4;
  v5 = a1;
  v6 = 2;
  if ( *(__int64 *)a2 < 0 )
    v6 = *(_QWORD *)a2 ^ 0x8000000000000000LL;
  if ( v6 )
  {
    if ( v6 != 1 )
      return codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_anthropic_tool_block::hc0fda6b2012f2674(
               a1,
               a2,
               (unsigned __int8)a3,
               a4);
    v401 = *(_QWORD *)(a2 + 56);
    v400 = *(_QWORD *)(a2 + 48);
    v399 = *(void **)(a2 + 40);
    v398.i128[1] = *(_OWORD *)(a2 + 24);
    v7 = *(_QWORD *)(a2 + 8);
    v398.i64[1] = *(_QWORD *)(a2 + 16);
    v398.i64[0] = v7;
    *(_QWORD *)&v394 = 0;
    v395 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0x8000000000000000LL, a2, a3, v398.i64[1]);
    v8 = 4;
    v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v9 )
      goto LABEL_336;
    *v9 = 1701869940;
    *(_QWORD *)v396 = 4;
    *(_QWORD *)&v396[8] = v9;
    *(_QWORD *)&v396[16] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v10, v11);
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
    if ( !v12 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
    qmemcpy(v12, "response.output_text.done", 25);
    v403[0].i8[0] = 3;
    v403[0].i64[1] = 25;
    v403[0].i64[2] = (__int64)v12;
    v403[0].i64[3] = 25;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v394, v13, v14);
    v8 = 12;
    v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v15 )
      goto LABEL_336;
    qmemcpy(v15, "output_index", 12);
    *(_QWORD *)v396 = 12;
    *(_QWORD *)&v396[8] = v15;
    *(_QWORD *)&v396[16] = 12;
    v403[0].i8[0] = 2;
    v403[0].i64[1] = 0;
    v378 = (void *)(unsigned int)v401;
    v403[0].i64[2] = (unsigned int)v401;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v394, v16, v17);
    v8 = 7;
    v18 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v18 )
      goto LABEL_336;
    *(_DWORD *)((char *)v18 + 3) = 1684627309;
    *v18 = 1835365481;
    *(_QWORD *)v396 = 7;
    *(_QWORD *)&v396[8] = v18;
    *(_QWORD *)&v396[16] = 7;
    v20 = v398.i64[2];
    if ( v398.i64[2] < 0 )
    {
      v21 = 0;
      goto LABEL_15;
    }
    v379 = a1 + 30;
    __n = v398.u64[2];
    __src = (void *)v398.i64[1];
    if ( v398.i64[2] )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v19, v398.i64[2]);
      v21 = 1;
      v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
      v20 = __n;
      if ( !v51 )
LABEL_15:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, v20);
      v52 = v51;
      v5 = a1;
    }
    else
    {
      v52 = 1;
    }
    v58 = v20;
    memcpy((void *)v52, __src, v20);
    v403[0].i8[0] = 3;
    v403[0].i64[1] = v58;
    v403[0].i64[2] = v52;
    v403[0].i64[3] = v58;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v394, v59, v60);
    v8 = 13;
    v61 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( !v61 )
      goto LABEL_336;
    qmemcpy(v61, "content_index", 13);
    *(_QWORD *)v396 = 13;
    *(_QWORD *)&v396[8] = v61;
    *(_QWORD *)&v396[16] = 13;
    v403[0].i8[0] = 2;
    *(__int128 *)((char *)v403[0].i128 + 8) = 0u;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v394, v62, v63);
    v8 = 4;
    v64 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v64 )
LABEL_336:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8);
    *v64 = 1954047348;
    *(_QWORD *)v396 = 4;
    *(_QWORD *)&v396[8] = v64;
    *(_QWORD *)&v396[16] = 4;
    v387 = v400;
    if ( v400 < 0 )
    {
      v67 = 0;
      goto LABEL_55;
    }
    v380 = v399;
    if ( v400 )
    {
      v68 = v4;
      v69 = v5;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v65, v66);
      v67 = 1;
      v70 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v387, 1);
      if ( !v70 )
LABEL_55:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v67, v387);
      v71 = v70;
      v5 = v69;
      v4 = v68;
    }
    else
    {
      v71 = 1;
    }
    memcpy((void *)v71, v380, v387);
    v403[0].i8[0] = 3;
    v403[0].i64[1] = v387;
    v403[0].i64[2] = v71;
    v403[0].i64[3] = v387;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    *(__int128 *)((char *)v403[0].i128 + 8) = v394;
    v403[0].i64[3] = v395;
    v403[0].i8[0] = 5;
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30(
      &v402,
      v379,
      &unk_101686CF6,
      25,
      v403);
    v101 = *(__int128 *)((char *)v402.i128 + 8);
    v102 = v4[2];
    if ( v402.i64[2] > (unsigned __int64)(*v4 - v102) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
        v4,
        v102,
        v402.i64[2],
        1,
        1);
      v102 = v4[2];
    }
    v385 = (void *)v4[1];
    memcpy((char *)v385 + v102, (const void *)v101, *((size_t *)&v101 + 1));
    v389 = *((_QWORD *)&v101 + 1) + v102;
    v4[2] = *((_QWORD *)&v101 + 1) + v102;
    v103 = v402.i64[0];
    if ( v402.i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, v402.i64[0], 1);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
    *(_QWORD *)&v383 = 0;
    v384 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, v103, v104, v105);
    v106 = 4;
    v107 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v107 )
      goto LABEL_338;
    *v107 = 1701869940;
    *(_QWORD *)v396 = 4;
    *(_QWORD *)&v396[8] = v107;
    *(_QWORD *)&v396[16] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v108, v109);
    v110 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
    if ( !v110 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26);
    qmemcpy(v110, "response.content_part.done", 26);
    v403[0].i8[0] = 3;
    v403[0].i64[1] = 26;
    v403[0].i64[2] = (__int64)v110;
    v403[0].i64[3] = 26;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v383, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v383, v111, v112);
    v106 = 12;
    v113 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v113 )
      goto LABEL_338;
    qmemcpy(v113, "output_index", 12);
    *(_QWORD *)v396 = 12;
    *(_QWORD *)&v396[8] = v113;
    *(_QWORD *)&v396[16] = 12;
    v403[0].i8[0] = 2;
    v403[0].i64[1] = 0;
    v403[0].i64[2] = (__int64)v378;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v383, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v383, v114, v115);
    v106 = 7;
    v116 = 1;
    v117 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v117 )
      goto LABEL_338;
    *(_DWORD *)((char *)v117 + 3) = 1684627309;
    *v117 = 1835365481;
    *(_QWORD *)v396 = 7;
    *(_QWORD *)&v396[8] = v117;
    *(_QWORD *)&v396[16] = 7;
    v119 = __n;
    if ( __n )
    {
      v120 = __n;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v118, __n);
      v121 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v120, 1);
      if ( !v121 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
      v116 = v121;
      v119 = __n;
    }
    v122 = v119;
    memcpy((void *)v116, __src, v119);
    v403[0].i8[0] = 3;
    *(__int128 *)((char *)v403[0].i128 + 8) = __PAIR128__(v116, v122);
    v403[0].i64[3] = v122;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v383, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v383, v123, v124);
    v106 = 13;
    v125 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( !v125 )
      goto LABEL_338;
    qmemcpy(v125, "content_index", 13);
    *(_QWORD *)v396 = 13;
    *(_QWORD *)&v396[8] = v125;
    *(_QWORD *)&v396[16] = 13;
    v403[0].i8[0] = 2;
    *(__int128 *)((char *)v403[0].i128 + 8) = 0u;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v383, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v383, v126, v127);
    v106 = 4;
    v128 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v128 )
LABEL_338:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v106);
    v390 = v4;
    *v128 = 1953653104;
    *(_QWORD *)&v391 = 4;
    *((_QWORD *)&v391 + 1) = v128;
    v392 = 4;
    *(_QWORD *)&v394 = 0;
    v395 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v129, v130);
    v131 = 4;
    v132 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v132 )
      goto LABEL_344;
    *v132 = 1701869940;
    *(_QWORD *)v396 = 4;
    *(_QWORD *)&v396[8] = v132;
    *(_QWORD *)&v396[16] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v133, v134);
    v135 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
    if ( !v135 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
    qmemcpy(v135, "output_text", 11);
    v403[0].i8[0] = 3;
    v403[0].i64[1] = 11;
    v403[0].i64[2] = (__int64)v135;
    v403[0].i64[3] = 11;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v394, v136, v137);
    v138 = 1;
    v139 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v139 )
      goto LABEL_344;
    *v139 = 1954047348;
    *(_QWORD *)v396 = 4;
    *(_QWORD *)&v396[8] = v139;
    *(_QWORD *)&v396[16] = 4;
    v142 = v387;
    if ( v387 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v140, v141);
      v143 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v142, 1);
      if ( !v143 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v387);
      v138 = v143;
      v142 = v387;
    }
    memcpy((void *)v138, v380, v142);
    v403[0].i8[0] = 3;
    v403[0].i64[1] = v142;
    v403[0].i64[2] = v138;
    v403[0].i64[3] = v142;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v394, v144, v145);
    v131 = 11;
    v146 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
    if ( !v146 )
LABEL_344:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v131);
    qmemcpy(v146, "annotations", 11);
    *(_QWORD *)v396 = 11;
    *(_QWORD *)&v396[8] = v146;
    *(_QWORD *)&v396[16] = 11;
    v403[0].i64[1] = 0;
    v403[0].i128[1] = 8u;
    v403[0].i8[0] = 4;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    *(__int128 *)((char *)v403[0].i128 + 8) = v394;
    v403[0].i64[3] = v395;
    v403[0].i8[0] = 5;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v383, &v391, v403);
    v147 = v390;
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    *(__int128 *)((char *)v403[0].i128 + 8) = v383;
    v403[0].i64[3] = v384;
    v403[0].i8[0] = 5;
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30(
      &v402,
      v379,
      "response.content_part.doneoutput_text",
      26,
      v403);
    v148 = *(__int128 *)((char *)v402.i128 + 8);
    if ( v402.i64[2] > (unsigned __int64)(*v147 - v389) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
        v147,
        v389,
        v402.i64[2],
        1,
        1);
      v147 = v390;
      v385 = (void *)v390[1];
      v389 = v390[2];
    }
    v149 = v389;
    memcpy((char *)v385 + v389, (const void *)v148, *((size_t *)&v148 + 1));
    v389 = *((_QWORD *)&v148 + 1) + v149;
    v147[2] = *((_QWORD *)&v148 + 1) + v149;
    v150 = v402.i64[0];
    if ( v402.i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148, v402.i64[0], 1);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
    *(_QWORD *)&v383 = 0;
    v384 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, v150, v151, v152);
    v153 = 4;
    v154 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v154 )
      goto LABEL_339;
    *v154 = 1701869940;
    *(_QWORD *)v396 = 4;
    *(_QWORD *)&v396[8] = v154;
    *(_QWORD *)&v396[16] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v155, v156);
    v157 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v157 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
    *(_DWORD *)((char *)v157 + 3) = 1701273971;
    *v157 = 1936942445;
    v403[0].i8[0] = 3;
    v403[0].i64[1] = 7;
    v403[0].i64[2] = (__int64)v157;
    v403[0].i64[3] = 7;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v383, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v383, v158, v159);
    v153 = 2;
    v160 = 1;
    v161 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
    if ( !v161 )
      goto LABEL_339;
    *v161 = 25705;
    *(_QWORD *)v396 = 2;
    *(_QWORD *)&v396[8] = v161;
    *(_QWORD *)&v396[16] = 2;
    v163 = __n;
    if ( __n )
    {
      v164 = __n;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1, v162, __n);
      v165 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v164, 1);
      if ( !v165 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
      v160 = v165;
      v163 = __n;
    }
    v166 = v163;
    memcpy((void *)v160, __src, v163);
    v403[0].i8[0] = 3;
    v403[0].i64[1] = v166;
    v403[0].i64[2] = v160;
    v403[0].i64[3] = v166;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v383, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v383, v167, v168);
    v153 = 6;
    v169 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v169 )
      goto LABEL_339;
    *(_WORD *)(v169 + 4) = 29557;
    *(_DWORD *)v169 = 1952543859;
    *(_QWORD *)v396 = 6;
    *(_QWORD *)&v396[8] = v169;
    *(_QWORD *)&v396[16] = 6;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v170, v171);
    v172 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v172 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
    *(_QWORD *)v172 = 0x6574656C706D6F63LL;
    *(_BYTE *)(v172 + 8) = 100;
    v403[0].i8[0] = 3;
    v403[0].i64[1] = 9;
    v403[0].i64[2] = v172;
    v403[0].i64[3] = 9;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v383, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v383, v173, v174);
    v153 = 4;
    v175 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v175 )
      goto LABEL_339;
    *v175 = 1701605234;
    *(_QWORD *)v396 = 4;
    *(_QWORD *)&v396[8] = v175;
    *(_QWORD *)&v396[16] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v176, v177);
    v178 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v178 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
    *(_QWORD *)v178 = 0x6E61747369737361LL;
    *(_BYTE *)(v178 + 8) = 116;
    v403[0].i8[0] = 3;
    v403[0].i64[1] = 9;
    v403[0].i64[2] = v178;
    v403[0].i64[3] = 9;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v383, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v383, v179, v180);
    v153 = 7;
    v181 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v181 )
LABEL_339:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v153);
    v386 = v5;
    *(_DWORD *)((char *)v181 + 3) = 1953391988;
    *v181 = 1953394531;
    *(_QWORD *)&v391 = 7;
    v381 = v181;
    *((_QWORD *)&v391 + 1) = v181;
    v392 = 7;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v182, v183);
    v184 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
    if ( !v184 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
    v187 = v184;
    *(_QWORD *)&v394 = 0;
    v395 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8, v185, v186);
    v188 = 4;
    v189 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v189 )
      goto LABEL_345;
    *v189 = 1701869940;
    *(_QWORD *)v396 = 4;
    *(_QWORD *)&v396[8] = v189;
    *(_QWORD *)&v396[16] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v190, v191);
    v192 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
    if ( !v192 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
    qmemcpy(v192, "output_text", 11);
    v403[0].i8[0] = 3;
    v403[0].i64[1] = 11;
    v403[0].i64[2] = (__int64)v192;
    v403[0].i64[3] = 11;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v394, v193, v194);
    v195 = 1;
    v196 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v196 )
      goto LABEL_345;
    *v196 = 1954047348;
    *(_QWORD *)v396 = 4;
    *(_QWORD *)&v396[8] = v196;
    *(_QWORD *)&v396[16] = 4;
    v199 = v387;
    if ( v387 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v197, v198);
      v200 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v199, 1);
      if ( !v200 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v199);
      v195 = v200;
    }
    memcpy((void *)v195, v380, v199);
    v403[0].i8[0] = 3;
    v403[0].i64[1] = v199;
    v403[0].i64[2] = v195;
    v403[0].i64[3] = v199;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v394, v201, v202);
    v188 = 11;
    v203 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
    if ( !v203 )
LABEL_345:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v188);
    qmemcpy(v203, "annotations", 11);
    *(_QWORD *)v396 = 11;
    *(_QWORD *)&v396[8] = v203;
    *(_QWORD *)&v396[16] = 11;
    v403[0].i64[1] = 0;
    v403[0].i128[1] = 8u;
    v403[0].i8[0] = 4;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v394, v396, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    *(__int128 *)((char *)v403[0].i128 + 7) = v394;
    *(__int64 *)((char *)&v403[0].i64[2] + 7) = v395;
    *(_BYTE *)v187 = 5;
    *(_QWORD *)(v187 + 24) = *(__int64 *)((char *)&v403[0].i64[2] + 7);
    *(_QWORD *)(v187 + 17) = v403[0].i64[2];
    *(_OWORD *)(v187 + 1) = v403[0].i128[0];
    v403[0].i64[1] = 1;
    v403[0].i64[2] = v187;
    v403[0].i64[3] = 1;
    v403[0].i8[0] = 4;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v383, &v391, v403);
    v205 = v386;
    v206 = v390;
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    *(_OWORD *)&v396[8] = v383;
    v397 = v384;
    v396[0] = 5;
    *(_QWORD *)&v391 = 0;
    v392 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v383, v204, *((_QWORD *)&v383 + 1));
    v207 = 4;
    v208 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v208 )
      goto LABEL_342;
    *v208 = 1701869940;
    *(_QWORD *)&v394 = 4;
    *((_QWORD *)&v394 + 1) = v208;
    v395 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v209, v210);
    v211 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
    if ( !v211 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
    qmemcpy(v211, "response.output_item.done", 25);
    v403[0].i8[0] = 3;
    v403[0].i64[1] = 25;
    v403[0].i64[2] = (__int64)v211;
    v403[0].i64[3] = 25;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v391, &v394, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v391, v212, v213);
    v207 = 12;
    v214 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v214 )
      goto LABEL_342;
    qmemcpy(v214, "output_index", 12);
    *(_QWORD *)&v394 = 12;
    *((_QWORD *)&v394 + 1) = v214;
    v395 = 12;
    v403[0].i8[0] = 2;
    v403[0].i64[1] = 0;
    v403[0].i64[2] = (__int64)v378;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v391, &v394, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v391, v215, v216);
    v207 = 7;
    v217 = 1;
    v218 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v218 )
      goto LABEL_342;
    *(_DWORD *)((char *)v218 + 3) = 1684627309;
    *v218 = 1835365481;
    *(_QWORD *)&v394 = 7;
    *((_QWORD *)&v394 + 1) = v218;
    v395 = 7;
    v220 = __n;
    if ( __n )
    {
      v221 = __n;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v219, __n);
      v222 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v221, 1);
      if ( !v222 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
      v217 = v222;
      v220 = __n;
    }
    v223 = v220;
    memcpy((void *)v217, __src, v220);
    v403[0].i8[0] = 3;
    *(__int128 *)((char *)v403[0].i128 + 8) = __PAIR128__(v217, v223);
    v403[0].i64[3] = v223;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v402, &v391, &v394, v403);
    if ( v402.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v402);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v391, v224, v225);
    v207 = 4;
    v226 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v226 )
LABEL_342:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v207);
    *v226 = 1835365481;
    *(_QWORD *)&v394 = 4;
    *((_QWORD *)&v394 + 1) = v226;
    v395 = 4;
    serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4(
      v403,
      v396);
    if ( v403[0].i8[0] == 6 )
    {
      v402.i64[0] = v403[0].i64[1];
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        "called `Result::unwrap()` on an `Err` value",
        43,
        &v402,
        &off_101986228,
        &off_101985778);
    }
    v402 = v403[0];
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v394, &v402);
    if ( v403[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
    *(__int128 *)((char *)v403[0].i128 + 8) = v391;
    v403[0].i64[3] = v392;
    v403[0].i8[0] = 5;
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30(
      &v402,
      v379,
      "response.output_item.doneresponse.function_call_arguments.doneargumentsfunction_call",
      25,
      v403);
    v227 = *(__int128 *)((char *)v402.i128 + 8);
    if ( v402.i64[2] > (unsigned __int64)(*v206 - v389) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
        v206,
        v389,
        v402.i64[2],
        1,
        1);
      v206 = v390;
      v385 = (void *)v390[1];
      v389 = v390[2];
      v205 = v386;
    }
    v228 = v389;
    memcpy((char *)v385 + v389, (const void *)v227, *((size_t *)&v227 + 1));
    v206[2] = *((_QWORD *)&v227 + 1) + v228;
    if ( v402.i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v227, v402.i64[0], 1);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
    v229 = v205[8];
    if ( v229 == v205[6] )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v205 + 6);
    result = v205[7];
    v230 = 32 * v229;
    v231 = *(_QWORD *)v396;
    v232 = *(_OWORD *)&v396[8];
    *(_QWORD *)(result + v230 + 24) = v397;
    *(_OWORD *)(result + v230 + 8) = v232;
    *(_QWORD *)(result + v230) = v231;
    v205[8] = v229 + 1;
    if ( v398.i64[0] )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v398.i64[0], 1);
    v233 = v398.i64[3];
    if ( v398.i64[3] )
    {
      v234 = v399;
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v234, v233, 1);
    }
    return result;
  }
  v387 = *(unsigned int *)(a2 + 104);
  v389 = *(_QWORD *)(a2 + 8);
  __src = *(void **)(a2 + 16);
  __n = *(_QWORD *)(a2 + 24);
  v376 = *(_QWORD *)(a2 + 48);
  v22 = *(_QWORD *)(a2 + 32);
  v375 = *(void **)(a2 + 40);
  v374 = v22;
  v379 = *(_QWORD **)(a2 + 56);
  v385 = *(void **)(a2 + 64);
  v23 = *(unsigned __int8 *)(a2 + 108);
  v380 = *(void **)(a2 + 80);
  v378 = *(void **)(a2 + 88);
  LOBYTE(v381) = v23;
  if ( (_BYTE)v23 )
  {
    v24 = *(_QWORD *)(a2 + 96);
    *(_QWORD *)&v394 = 0;
    v395 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0x8000000000000000LL, a2, a3, v23);
    v25 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v25 )
      goto LABEL_341;
    *v25 = 1701869940;
    v402.i64[0] = 4;
    v402.i64[1] = (__int64)v25;
    v402.i64[2] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v26, v27);
    v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
    if ( !v28 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17);
    qmemcpy(v28, "redacted_thinking", 17);
    v398.i8[0] = 3;
    v398.i64[1] = 17;
    v398.i64[2] = (__int64)v28;
    v398.i64[3] = 17;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v394, &v402, &v398);
    if ( v403[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v394, v29, v30);
    v31 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v31 )
LABEL_341:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
    *v31 = 1635017060;
    v402.i64[0] = 4;
    v402.i64[1] = (__int64)v31;
    v402.i64[2] = 4;
    if ( v24 < 0 )
    {
      v34 = 0;
      goto LABEL_24;
    }
    v386 = a1;
    if ( v24 )
    {
      v53 = v4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v32, v33);
      v34 = 1;
      v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1);
      if ( !v54 )
LABEL_24:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v34, v24);
      v55 = v54;
      v4 = v53;
    }
    else
    {
      v55 = 1;
    }
    memcpy((void *)v55, v378, v24);
    v398.i8[0] = 3;
    v398.i64[1] = v24;
    v398.i64[2] = v55;
    v398.i64[3] = v24;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v394, &v402, &v398);
    v72 = v386;
    if ( v403[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
    *(_OWORD *)&v396[8] = v394;
    v73 = v395;
    goto LABEL_63;
  }
  v382 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)v396 = 0;
  *(_QWORD *)&v396[16] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0x8000000000000000LL, a2, a3, v23);
  v36 = 4;
  v37 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v37 )
    goto LABEL_337;
  *v37 = 1701869940;
  v402.i64[0] = 4;
  v402.i64[1] = (__int64)v37;
  v402.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v38, v39);
  v40 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
  if ( !v40 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36);
  qmemcpy(v40, "response.reasoning_summary_text.done", 36);
  v398.i8[0] = 3;
  v398.i64[1] = 36;
  v398.i64[2] = (__int64)v40;
  v398.i64[3] = 36;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, v396, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, v396, v41, v42);
  v36 = 12;
  v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v43 )
    goto LABEL_337;
  qmemcpy(v43, "output_index", 12);
  v402.i64[0] = 12;
  v402.i64[1] = (__int64)v43;
  v402.i64[2] = 12;
  v398.i8[0] = 2;
  v398.i64[1] = 0;
  v398.i64[2] = v387;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, v396, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, v396, v44, v45);
  v36 = 7;
  v46 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v46 )
    goto LABEL_337;
  v48 = a1 + 30;
  *(_DWORD *)((char *)v46 + 3) = 1684627309;
  *v46 = 1835365481;
  v402.i64[0] = 7;
  v402.i64[1] = (__int64)v46;
  v402.i64[2] = 7;
  v49 = __n;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v50 = 0;
    goto LABEL_36;
  }
  v377 = a1 + 30;
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v47, __n);
    v50 = 1;
    v56 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    v49 = __n;
    if ( !v56 )
LABEL_36:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v50, v49);
    v57 = v56;
    v5 = a1;
    v48 = v377;
  }
  else
  {
    v57 = 1;
  }
  v89 = v49;
  memcpy((void *)v57, __src, v49);
  v398.i8[0] = 3;
  v398.i64[1] = v89;
  v398.i64[2] = v57;
  v398.i64[3] = v89;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, v396, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, v396, v90, v91);
  v36 = 13;
  v92 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v92 )
    goto LABEL_337;
  qmemcpy(v92, "summary_index", 13);
  v402.i64[0] = 13;
  v402.i64[1] = (__int64)v92;
  v402.i64[2] = 13;
  v398.i8[0] = 2;
  *(__int128 *)((char *)v398.i128 + 8) = 0u;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, v396, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, v396, v93, v94);
  v36 = 4;
  v95 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v95 )
LABEL_337:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v36);
  *v95 = 1954047348;
  v402.i64[0] = 4;
  v402.i64[1] = (__int64)v95;
  v402.i64[2] = 4;
  if ( (v376 & 0x8000000000000000LL) != 0LL )
  {
    v98 = 0;
    goto LABEL_83;
  }
  v390 = v4;
  v386 = v5;
  if ( v376 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v96, v97);
    v98 = 1;
    v99 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v376, 1);
    if ( !v99 )
LABEL_83:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v98, v376);
    v100 = v99;
    v48 = v377;
  }
  else
  {
    v100 = 1;
  }
  memcpy((void *)v100, v375, v376);
  v398.i8[0] = 3;
  v398.i64[1] = v376;
  v398.i64[2] = v100;
  v398.i64[3] = v376;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, v396, &v402, &v398);
  v291 = v390;
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  *(__int128 *)((char *)v398.i128 + 8) = *(_OWORD *)v396;
  v398.i64[3] = *(_QWORD *)&v396[16];
  v398.i8[0] = 5;
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30(
    v403,
    v48,
    "response.reasoning_summary_text.done",
    36,
    &v398);
  v292 = *(__int128 *)((char *)v403[0].i128 + 8);
  v293 = v390[2];
  if ( v403[0].i64[2] > (unsigned __int64)(*v390 - v293) )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
      v390,
      v390[2],
      v403[0].i64[2],
      1,
      1);
    v291 = v390;
    v293 = v390[2];
    v48 = v377;
  }
  v369 = v291[1];
  memcpy((void *)(v369 + v293), (const void *)v292, *((size_t *)&v292 + 1));
  v294 = *((_QWORD *)&v292 + 1) + v293;
  v291[2] = v294;
  v295 = v403[0].i64[0];
  if ( v403[0].i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v292, v403[0].i64[0], 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v398);
  *(_QWORD *)&v391 = 0;
  v392 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v398, v295, v296, v297);
  v298 = 4;
  v299 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v299 )
    goto LABEL_346;
  *v299 = 1701869940;
  v402.i64[0] = 4;
  v402.i64[1] = (__int64)v299;
  v402.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v300, v301);
  v302 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
  if ( !v302 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36);
  qmemcpy(v302, "response.reasoning_summary_part.done", 36);
  v398.i8[0] = 3;
  v398.i64[1] = 36;
  v398.i64[2] = (__int64)v302;
  v398.i64[3] = 36;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v391, v303, v304);
  v298 = 12;
  v305 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v305 )
    goto LABEL_346;
  qmemcpy(v305, "output_index", 12);
  v402.i64[0] = 12;
  v402.i64[1] = (__int64)v305;
  v402.i64[2] = 12;
  v398.i8[0] = 2;
  v398.i64[1] = 0;
  v398.i64[2] = v387;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v391, v306, v307);
  v298 = 7;
  v308 = 1;
  v309 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v309 )
    goto LABEL_346;
  *(_DWORD *)((char *)v309 + 3) = 1684627309;
  *v309 = 1835365481;
  v402.i64[0] = 7;
  v402.i64[1] = (__int64)v309;
  v402.i64[2] = 7;
  v311 = __n;
  if ( __n )
  {
    v312 = __n;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v310, __n);
    v313 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v312, 1);
    if ( !v313 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v308 = v313;
    v311 = __n;
  }
  v314 = v311;
  memcpy((void *)v308, __src, v311);
  v398.i8[0] = 3;
  *(__int128 *)((char *)v398.i128 + 8) = __PAIR128__(v308, v314);
  v398.i64[3] = v314;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v391, v315, v316);
  v298 = 13;
  v317 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v317 )
    goto LABEL_346;
  qmemcpy(v317, "summary_index", 13);
  v402.i64[0] = 13;
  v402.i64[1] = (__int64)v317;
  v402.i64[2] = 13;
  v398.i8[0] = 2;
  *(__int128 *)((char *)v398.i128 + 8) = 0u;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v391, v318, v319);
  v298 = 4;
  v320 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v320 )
LABEL_346:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v298);
  *v320 = 1953653104;
  *(_QWORD *)&v394 = 4;
  *((_QWORD *)&v394 + 1) = v320;
  v395 = 4;
  *(_QWORD *)v396 = 0;
  *(_QWORD *)&v396[16] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v321, v322);
  v323 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v323 )
    goto LABEL_353;
  *v323 = 1701869940;
  v402.i64[0] = 4;
  v402.i64[1] = (__int64)v323;
  v402.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v324, v325);
  v326 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v326 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
  qmemcpy(v326, "summary_text", 12);
  v398.i8[0] = 3;
  v398.i64[1] = 12;
  v398.i64[2] = (__int64)v326;
  v398.i64[3] = 12;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, v396, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, v396, v327, v328);
  v329 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v329 )
LABEL_353:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
  *v329 = 1954047348;
  v402.i64[0] = 4;
  v402.i64[1] = (__int64)v329;
  v402.i64[2] = 4;
  if ( (v376 & 0x8000000000000000LL) != 0LL )
  {
    v332 = 0;
    goto LABEL_281;
  }
  if ( v376 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v330, v331);
    v332 = 1;
    v333 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v376, 1);
    if ( !v333 )
LABEL_281:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v332, v376);
    v334 = v333;
    v48 = v377;
  }
  else
  {
    v334 = 1;
  }
  memcpy((void *)v334, v375, v376);
  v398.i8[0] = 3;
  v398.i64[1] = v376;
  v398.i64[2] = v334;
  v398.i64[3] = v376;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, v396, &v402, &v398);
  v335 = v390;
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  *(__int128 *)((char *)v398.i128 + 8) = *(_OWORD *)v396;
  v398.i64[3] = *(_QWORD *)&v396[16];
  v398.i8[0] = 5;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v394, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  *(__int128 *)((char *)v398.i128 + 8) = v391;
  v398.i64[3] = v392;
  v398.i8[0] = 5;
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30(
    v403,
    v48,
    &unk_10168714B,
    36,
    &v398);
  v336 = *(__int128 *)((char *)v403[0].i128 + 8);
  if ( v403[0].i64[2] > (unsigned __int64)(*v390 - v294) )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
      v390,
      v294,
      v403[0].i64[2],
      1,
      1);
    v335 = v390;
    v337 = v390[1];
    v294 = v390[2];
  }
  else
  {
    v337 = v369;
  }
  memcpy((void *)(v294 + v337), (const void *)v336, *((size_t *)&v336 + 1));
  v335[2] = *((_QWORD *)&v336 + 1) + v294;
  v338 = v403[0].i64[0];
  if ( v403[0].i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v336, v403[0].i64[0], 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v398);
  *(_QWORD *)&v391 = 0;
  v392 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v398, v338, v339, v340);
  v341 = 4;
  v342 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v342 )
    goto LABEL_364;
  *v342 = 1701869940;
  v402.i64[0] = 4;
  v402.i64[1] = (__int64)v342;
  v402.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v343, v344);
  v345 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v345 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
  *v345 = 0x676E696B6E696874LL;
  v398.i8[0] = 3;
  v398.i64[1] = 8;
  v398.i64[2] = (__int64)v345;
  v398.i64[3] = 8;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v391, v346, v347);
  v341 = 8;
  v348 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v348 )
    goto LABEL_364;
  *v348 = 0x676E696B6E696874LL;
  *(_QWORD *)&v394 = 8;
  *((_QWORD *)&v394 + 1) = v348;
  v395 = 8;
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v402, &v374);
  v351 = *(__int128 *)((char *)v402.i128 + 8);
  if ( v402.i64[2] < 0 )
  {
    v352 = 0;
    goto LABEL_301;
  }
  if ( v402.i64[2] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v374, v349, v350);
    v352 = 1;
    v353 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(*((_QWORD *)&v351 + 1), 1);
    if ( !v353 )
LABEL_301:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v352, *((_QWORD *)&v351 + 1));
    v354 = v353;
  }
  else
  {
    v354 = 1;
  }
  memcpy((void *)v354, (const void *)v351, *((size_t *)&v351 + 1));
  v398.i8[0] = 3;
  v398.i64[1] = *((_QWORD *)&v351 + 1);
  v398.i64[2] = v354;
  v398.i64[3] = *((_QWORD *)&v351 + 1);
  v357 = v403;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v394, &v398);
  v4 = v390;
  if ( v403[0].i8[0] != 6 )
  {
    v357 = v403;
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  }
  v360 = v402.i64[0];
  if ( v402.i64[0] )
  {
    v357 = (__m256i *)v351;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v351, v402.i64[0], 1);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v357, v360, v358, v359);
  v341 = 9;
  v361 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v361 )
LABEL_364:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v341);
  *(_QWORD *)v361 = 0x727574616E676973LL;
  *(_BYTE *)(v361 + 8) = 101;
  v402.i64[0] = 9;
  v402.i64[1] = v361;
  v402.i64[2] = 9;
  if ( (v382 & 0x8000000000000000LL) != 0LL )
  {
    v364 = 0;
    goto LABEL_316;
  }
  if ( v382 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1, v362, v363);
    v364 = 1;
    v365 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v382, 1);
    if ( !v365 )
LABEL_316:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v364, v382);
    v366 = v365;
  }
  else
  {
    v366 = 1;
  }
  v368 = v382;
  memcpy((void *)v366, v385, v382);
  v398.i8[0] = 3;
  v398.i64[1] = v368;
  v398.i64[2] = v366;
  v398.i64[3] = v368;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v402, &v398);
  v72 = v386;
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  *(_OWORD *)&v396[8] = v391;
  v73 = v392;
LABEL_63:
  v397 = v73;
  v386 = v72;
  v396[0] = 5;
  codexmate_lib::core::relay::translator::encode_anthropic_thinking_payload::hb419f76efb63f5cd(&v370, v396);
  *(_QWORD *)&v372 = 0;
  v373 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v370, v396, v74, v75);
  v76 = 4;
  v77 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v77 )
    goto LABEL_343;
  *v77 = 1701869940;
  v402.i64[0] = 4;
  v402.i64[1] = (__int64)v77;
  v402.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v78, v79);
  v80 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v80 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v80 = 0x6E696E6F73616572LL;
  *(_BYTE *)(v80 + 8) = 103;
  v398.i8[0] = 3;
  v398.i64[1] = 9;
  v398.i64[2] = v80;
  v398.i64[3] = 9;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v372, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v372, v81, v82);
  v76 = 2;
  v83 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v83 )
    goto LABEL_343;
  *v83 = 25705;
  v402.i64[0] = 2;
  v402.i64[1] = (__int64)v83;
  v402.i64[2] = 2;
  v85 = __n;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v86 = 0;
    goto LABEL_70;
  }
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1, v84, __n);
    v86 = 1;
    v87 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    v85 = __n;
    if ( !v87 )
LABEL_70:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v86, v85);
    v88 = v87;
  }
  else
  {
    v88 = 1;
  }
  v235 = v85;
  memcpy((void *)v88, __src, v85);
  v398.i8[0] = 3;
  v398.i64[1] = v235;
  v398.i64[2] = v88;
  v398.i64[3] = v235;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v372, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v372, v236, v237);
  v76 = 6;
  v238 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v238 )
    goto LABEL_343;
  *(_WORD *)(v238 + 4) = 29557;
  *(_DWORD *)v238 = 1952543859;
  v402.i64[0] = 6;
  v402.i64[1] = v238;
  v402.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v239, v240);
  v241 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v241 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v241 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v241 + 8) = 100;
  v398.i8[0] = 3;
  v398.i64[1] = 9;
  v398.i64[2] = v241;
  v398.i64[3] = 9;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v372, &v402, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v372, v242, v243);
  v76 = 7;
  v244 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v244 )
LABEL_343:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v76);
  *(_DWORD *)((char *)v244 + 3) = 2037539181;
  *v244 = 1835890035;
  *(_QWORD *)&v383 = 7;
  *((_QWORD *)&v383 + 1) = v244;
  v384 = 7;
  *((_QWORD *)&v246 + 1) = 8;
  if ( (_BYTE)v381 || !v376 )
  {
    *(_QWORD *)&v246 = 0;
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, 8, v245);
    v382 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
    if ( !v382 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
    *(_QWORD *)&v391 = 0;
    v392 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8, v247, v248);
    v249 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v249 )
      goto LABEL_369;
    *v249 = 1701869940;
    v402.i64[0] = 4;
    v402.i64[1] = (__int64)v249;
    v402.i64[2] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v250, v251);
    v252 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v252 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
    qmemcpy(v252, "summary_text", 12);
    v398.i8[0] = 3;
    v398.i64[1] = 12;
    v398.i64[2] = (__int64)v252;
    v398.i64[3] = 12;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v402, &v398);
    if ( v403[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v391, v253, v254);
    v255 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v255 )
LABEL_369:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
    *v255 = 1954047348;
    *(_QWORD *)&v394 = 4;
    *((_QWORD *)&v394 + 1) = v255;
    v395 = 4;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v402, &v374);
    v258 = v402.u64[2];
    v381 = (void *)v402.i64[1];
    if ( v402.i64[2] < 0 )
    {
      v259 = 0;
      goto LABEL_210;
    }
    v390 = v4;
    if ( v402.i64[2] )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v402, &v374, v256, v257);
      v259 = 1;
      v355 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v258, 1);
      if ( !v355 )
LABEL_210:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v259, v258);
      v356 = v355;
    }
    else
    {
      v356 = 1;
    }
    memcpy((void *)v356, v381, v258);
    v398.i8[0] = 3;
    v398.i64[1] = v258;
    v398.i64[2] = v356;
    v398.i64[3] = v258;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v394, &v398);
    v4 = v390;
    if ( v403[0].i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
    if ( v402.i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v381, v402.i64[0], 1);
    *(__int128 *)((char *)v398.i128 + 7) = v391;
    *(__int64 *)((char *)&v398.i64[2] + 7) = v392;
    *((_QWORD *)&v246 + 1) = v382;
    *(_BYTE *)v382 = 5;
    v367 = v398.i64[1];
    *(_QWORD *)(*((_QWORD *)&v246 + 1) + 1LL) = v398.i64[0];
    *(_OWORD *)(*((_QWORD *)&v246 + 1) + 9LL) = __PAIR128__(v398.u64[2], v367);
    *(_QWORD *)(*((_QWORD *)&v246 + 1) + 24LL) = *(__int64 *)((char *)&v398.i64[2] + 7);
    *(_QWORD *)&v246 = 1;
  }
  *(__int128 *)((char *)v398.i128 + 8) = v246;
  v398.i64[3] = v246;
  v398.i8[0] = 4;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4(
    v403,
    &v398);
  if ( v403[0].i8[0] == 6 )
  {
    v402.i64[0] = v403[0].i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` value",
      43,
      &v402,
      &off_101986228,
      &off_101985748);
  }
  v402 = v403[0];
  v260 = (__int64)&v372;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v372, &v383, &v402);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  v261 = &v398;
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v398);
  v263 = *((_QWORD *)&v372 + 1);
  *(__int128 *)((char *)v402.i128 + 8) = v372;
  v402.i64[3] = v373;
  v402.i8[0] = 5;
  v264 = (_QWORD)v370 == 0x8000000000000000LL;
  if ( (_QWORD)v370 != 0x8000000000000000LL )
  {
    v398.i64[3] = v371;
    *(__int128 *)((char *)v398.i128 + 8) = v370;
    v398.i8[0] = 3;
    v260 = 17;
    v261 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                        "encrypted_contentresponse.reasoning_summary_part.addedcache_read_input_tokenscache_creation_input_tokens",
                        0x11u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v261);
    v261->i128[1] = v398.i128[1];
    v263 = v398.i64[1];
    v261->i128[0] = v398.i128[0];
  }
  LOBYTE(v390) = v264;
  *(_QWORD *)&v391 = 0;
  v392 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v261, v260, v262, v263);
  v265 = 4;
  v266 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v266 )
    goto LABEL_349;
  *v266 = 1701869940;
  *(_QWORD *)&v394 = 4;
  *((_QWORD *)&v394 + 1) = v266;
  v395 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v267, v268);
  v269 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
  if ( !v269 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
  qmemcpy(v269, "response.output_item.done", 25);
  v398.i8[0] = 3;
  v398.i64[1] = 25;
  v398.i64[2] = (__int64)v269;
  v398.i64[3] = 25;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v394, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v391, v270, v271);
  v265 = 12;
  v272 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v272 )
    goto LABEL_349;
  qmemcpy(v272, "output_index", 12);
  *(_QWORD *)&v394 = 12;
  *((_QWORD *)&v394 + 1) = v272;
  v395 = 12;
  v398.i8[0] = 2;
  v398.i64[1] = 0;
  v398.i64[2] = v387;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v394, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v391, v273, v274);
  v265 = 7;
  v275 = 1;
  v276 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v276 )
    goto LABEL_349;
  *(_DWORD *)((char *)v276 + 3) = 1684627309;
  *v276 = 1835365481;
  *(_QWORD *)&v394 = 7;
  *((_QWORD *)&v394 + 1) = v276;
  v395 = 7;
  v278 = __n;
  if ( __n )
  {
    v279 = __n;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v277, __n);
    v280 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v279, 1);
    if ( !v280 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v275 = v280;
    v278 = __n;
  }
  v281 = v278;
  memcpy((void *)v275, __src, v278);
  v398.i8[0] = 3;
  *(__int128 *)((char *)v398.i128 + 8) = __PAIR128__(v275, v281);
  v398.i64[3] = v281;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v403, &v391, &v394, &v398);
  if ( v403[0].i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v403);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v403, &v391, v282, v283);
  v265 = 4;
  v284 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v284 )
LABEL_349:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v265);
  *v284 = 1835365481;
  *(_QWORD *)&v394 = 4;
  *((_QWORD *)&v394 + 1) = v284;
  v395 = 4;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4(
    &v398,
    &v402);
  if ( v398.i8[0] == 6 )
  {
    v403[0].i64[0] = v398.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` value",
      43,
      v403,
      &off_101986228,
      &off_101985760);
  }
  v403[0] = v398;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v398, &v391, &v394, v403);
  if ( v398.i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v398);
  *(__int128 *)((char *)v398.i128 + 8) = v391;
  v398.i64[3] = v392;
  v398.i8[0] = 5;
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30(
    v403,
    v386 + 30,
    "response.output_item.doneresponse.function_call_arguments.doneargumentsfunction_call",
    25,
    &v398);
  v285 = *(__int128 *)((char *)v403[0].i128 + 8);
  v286 = *v4;
  v287 = v4;
  v288 = v4[2];
  if ( v403[0].i64[2] > (unsigned __int64)(v286 - v288) )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
      v287,
      v288,
      v403[0].i64[2],
      1,
      1);
    v288 = v287[2];
  }
  memcpy((void *)(v288 + v287[1]), (const void *)v285, *((size_t *)&v285 + 1));
  v287[2] = *((_QWORD *)&v285 + 1) + v288;
  if ( v403[0].i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v285, v403[0].i64[0], 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v398);
  v398 = v402;
  v289 = v386;
  v290 = v386[8];
  if ( v290 == v386[6] )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v386 + 6);
  *(__m256i *)(v289[7] + 32 * v290) = v398;
  v289[8] = v290 + 1;
  result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v396);
  if ( v380 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v378, v380, 1);
  if ( v379 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v385, v379, 1);
  if ( v374 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v375, v374, 1);
  v233 = v389;
  if ( v389 )
  {
    v234 = __src;
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v234, v233, 1);
  }
  return result;
}
