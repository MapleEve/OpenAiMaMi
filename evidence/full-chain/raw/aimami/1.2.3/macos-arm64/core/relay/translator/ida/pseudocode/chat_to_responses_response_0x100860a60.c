// __ZN13codexmate_lib4core5relay10translator26chat_to_responses_response @ 0x100860a60 | 基线 same-set
// [FULL IDA decompiler]

__m256i *__fastcall codexmate_lib::core::relay::translator::chat_to_responses_response::hc2f4bad558319739(
        __m256i *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(); // rax
  signed __int64 v9; // rsi
  __int64 v10; // rax
  const char *v11; // r14
  size_t v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r14
  __m256i *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  size_t v31; // rsi
  __int64 v32; // rax
  signed __int64 v33; // rcx
  __int64 v34; // r15
  size_t v35; // rcx
  __int64 v36; // rax
  size_t v37; // rbx
  unsigned __int128 *v38; // rdi
  __int64 v39; // rsi
  size_t v40; // rcx
  __int64 v41; // rax
  size_t v42; // r15
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r14
  void *v47; // rax
  __m256i *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __m256i *v52; // rsi
  void *v53; // rax
  __m256i *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __m256i *v58; // rsi
  void *v59; // rax
  unsigned __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  unsigned __int32 v64; // eax
  unsigned int v65; // ecx
  int v66; // edx
  char *v67; // rcx
  size_t v68; // rbx
  __int64 v69; // r14
  _WORD *v70; // rax
  __int64 v71; // r14
  __int64 v72; // r12
  void *v73; // rbx
  __int64 v74; // rax
  __int64 v75; // r13
  __m256i *v76; // rdi
  __int64 v77; // r13
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __m256i *v81; // rsi
  __int64 v82; // rax
  _QWORD *v83; // rax
  __m256i *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __m256i *v88; // rsi
  void *v89; // rax
  int v90; // edx
  int v91; // ecx
  unsigned int v92; // ecx
  __m256i *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rdx
  __m256i *v97; // rsi
  __int64 v98; // rax
  void *v99; // rax
  __int64 v100; // rbx
  __m256i *v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __m256i *v105; // rsi
  __int64 v106; // r15
  __int64 v107; // rax
  __int64 v108; // rax
  size_t v109; // rbx
  __m256i *v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rdx
  __m256i *v114; // rsi
  __int64 v115; // rax
  __m256i *v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdx
  __m256i *v120; // rsi
  void *v121; // rax
  __int64 v122; // r14
  __int64 v123; // r13
  void *v124; // rbx
  __int64 v125; // rax
  __int64 v126; // r12
  __m256i *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rdx
  __m256i *v131; // rsi
  __int64 v132; // rax
  __m256i *v133; // rdi
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rdx
  __m256i *v137; // rsi
  __int64 v138; // rax
  void *v139; // rax
  __int64 v140; // rdx
  const void *v141; // rbx
  __int64 v142; // rax
  __int64 v143; // rdi
  __int64 v144; // rax
  __int64 v145; // rcx
  char *v146; // rdx
  size_t v147; // rbx
  __int64 v148; // r14
  _DWORD *v149; // rax
  _DWORD *v150; // rax
  __m256i *v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rdx
  __m256i *v155; // rsi
  __m256i *v156; // r14
  __int64 v157; // rdi
  __int64 j; // rbx
  _WORD *v160; // rax
  size_t v161; // r15
  __int64 v162; // r14
  __int64 v163; // rax
  __int64 v164; // rbx
  __int64 v165; // r14
  _DWORD *v166; // rax
  __int64 v167; // rax
  __m256i *v168; // rdi
  __int64 v169; // rax
  __int64 v170; // rcx
  __int64 v171; // rdx
  __m256i *v172; // rsi
  _WORD *v173; // rax
  __int128 v174; // kr20_16
  void *v175; // rsi
  __m256i *v176; // rdi
  size_t v177; // r14
  __int64 v178; // r15
  __int64 v179; // rax
  __int64 v180; // rbx
  __m256i *v181; // rdi
  __int64 v182; // rdx
  void *v183; // rsi
  __int64 v184; // rax
  __int64 v185; // rax
  __m256i *v186; // rdi
  __int64 v187; // rax
  __int64 v188; // rcx
  __int64 v189; // rdx
  __m256i *v190; // rsi
  _DWORD *v191; // rax
  __int64 v192; // rax
  void *v193; // rbx
  _DWORD *v194; // rax
  __int64 v195; // r15
  void *v196; // rax
  __m256i *v197; // rdi
  __int64 v198; // rax
  __int64 v199; // rcx
  __int64 v200; // rdx
  __m256i *v201; // rsi
  _DWORD *v202; // rax
  void *v203; // rax
  __int64 v204; // rbx
  char *v205; // rbx
  __int64 v206; // rdx
  __int64 v207; // rdx
  __int64 v208; // rbx
  __int64 v209; // rax
  void *v210; // r14
  unsigned __int64 v211; // r15
  void **v212; // rdi
  void *v213; // rsi
  size_t v214; // r13
  __int64 v215; // rbx
  __int64 v216; // r15
  _DWORD *v217; // rax
  _WORD *v218; // rax
  __m256i *v219; // rdi
  __int64 v220; // rsi
  _DWORD *v221; // rax
  __int64 v222; // rax
  _DWORD *v223; // rax
  __int64 v224; // rax
  __int64 v225; // r13
  __int64 v226; // r15
  _DWORD *v227; // rax
  _DWORD *v228; // rax
  void *v229; // rax
  __int64 v230; // r9
  __int64 v231; // rbx
  const void *v232; // rbx
  size_t v233; // r15
  size_t v234; // r14
  __int64 v235; // rax
  __int64 v236; // rbx
  __int64 v237; // r15
  __int64 v238; // rbx
  __int64 v239; // rax
  const void *v240; // r14
  __int64 v241; // rcx
  __int64 v242; // r13
  __int64 v243; // rax
  __int64 v244; // rcx
  __int64 v245; // rsi
  __int64 v246; // rax
  char *v247; // r14
  signed __int64 v248; // rcx
  __int64 v249; // rbx
  void *v250; // rbx
  char *v251; // rsi
  size_t v252; // r14
  __int64 v253; // rax
  __int64 v254; // r15
  char *v255; // r14
  __int64 v256; // rax
  size_t v257; // rdx
  __int64 v258; // rbx
  void *v259; // rsi
  __int64 v260; // r14
  _DWORD *v261; // rax
  void *v262; // rax
  __m256i *v263; // rdi
  __int64 v264; // rax
  __int64 v265; // rcx
  __int64 v266; // rdx
  __m256i *v267; // rsi
  _WORD *v268; // rax
  size_t v269; // r15
  __int64 v270; // r14
  __int64 v271; // rax
  __int64 v272; // rbx
  __m256i *v273; // rdi
  __m256i *v274; // rsi
  __m256i *v275; // rbx
  __int64 v276; // rax
  __int64 v277; // rcx
  __int64 v278; // rdx
  _DWORD *v279; // rax
  __int64 v280; // rbx
  __int64 v281; // rax
  size_t v282; // r14
  __m256i *v283; // rdi
  __m256i *v284; // rsi
  __int64 v285; // rax
  __int64 v286; // rcx
  __int64 v287; // rdx
  _DWORD *v288; // rax
  __int64 v289; // rbx
  __int64 v290; // rax
  size_t v291; // r14
  __m256i *v292; // rdi
  __m256i *v293; // rsi
  __int64 v294; // rax
  __int64 v295; // rcx
  __int64 v296; // rdx
  __int64 v297; // rax
  size_t v298; // r14
  __int64 v299; // r13
  __int64 v300; // rax
  __int64 v301; // rbx
  __m256i *v302; // rdi
  __int64 v303; // rax
  __int64 v304; // rcx
  __int64 v305; // rdx
  __m256i *v306; // rsi
  __int64 v307; // rax
  __int64 v308; // rax
  __int64 v309; // rdx
  size_t v310; // rbx
  unsigned __int64 v311; // rax
  __m128i si128; // xmm1
  __int64 i; // rdx
  unsigned __int64 v315; // rax
  __m128i v316; // xmm2
  size_t v318; // rdx
  size_t v319; // rbx
  size_t v320; // r13
  size_t v321; // r15
  int v322; // eax
  int v323; // eax
  bool v324; // zf
  size_t v325; // r14
  bool v326; // cf
  char *v327; // r14
  const void *v328; // r15
  void *v329; // rdi
  __int64 v330; // rbx
  void *v331; // rbx
  __m256i *v332; // r14
  __int64 v333; // rbx
  __m256i *v334; // rdi
  __int64 v335; // rdx
  void *v336; // rsi
  _DWORD *v337; // rax
  __int64 v338; // rax
  __m256i *v339; // rdi
  __int64 v340; // rax
  __int64 v341; // rcx
  __int64 v342; // rdx
  __m256i *v343; // rsi
  __int64 v344; // rax
  __int64 v345; // rax
  __m256i *v346; // rdi
  __int64 v347; // rax
  __int64 v348; // rcx
  __int64 v349; // rdx
  __m256i *v350; // rsi
  _DWORD *v351; // rax
  __int64 v352; // rax
  __int64 v353; // r13
  __int64 v354; // r15
  _DWORD *v355; // rax
  void *v356; // rax
  __m256i *v357; // rdi
  __int64 v358; // rax
  __int64 v359; // rcx
  __int64 v360; // rdx
  __m256i *v361; // rsi
  _DWORD *v362; // rax
  __int64 v363; // r15
  __int64 v364; // rax
  __int64 v365; // rbx
  __int64 v366; // rbx
  size_t v367; // r14
  __m256i *v368; // rdi
  __int64 v369; // rax
  __int64 v370; // rcx
  __int64 v371; // rdx
  __m256i *v372; // rsi
  void *v373; // rax
  __int64 v374; // rdx
  __int64 v375; // r9
  __int64 v376; // rdx
  __int64 v377; // rbx
  size_t v378; // r14
  size_t v379; // rbx
  void *v380; // r15
  size_t v381; // r13
  void *v382; // [rsp+48h] [rbp-2E8h] BYREF
  void **v383; // [rsp+50h] [rbp-2E0h]
  __int64 v384; // [rsp+60h] [rbp-2D0h]
  __int128 v385; // [rsp+68h] [rbp-2C8h]
  __int64 v386; // [rsp+78h] [rbp-2B8h] BYREF
  _QWORD *v387; // [rsp+80h] [rbp-2B0h]
  unsigned __int64 v388; // [rsp+88h] [rbp-2A8h]
  __m128i v389; // [rsp+90h] [rbp-2A0h] BYREF
  __int64 v390; // [rsp+A0h] [rbp-290h] BYREF
  void *__src; // [rsp+A8h] [rbp-288h]
  size_t v392; // [rsp+B0h] [rbp-280h]
  __m256i *v393; // [rsp+B8h] [rbp-278h]
  void *v394[2]; // [rsp+C0h] [rbp-270h] BYREF
  size_t v395; // [rsp+D0h] [rbp-260h]
  __int64 v396; // [rsp+D8h] [rbp-258h]
  unsigned __int128 v397; // [rsp+E0h] [rbp-250h] BYREF
  size_t v398; // [rsp+F0h] [rbp-240h]
  _WORD *v399; // [rsp+F8h] [rbp-238h]
  void *v400; // [rsp+100h] [rbp-230h]
  int v401; // [rsp+10Ch] [rbp-224h]
  void *__dst; // [rsp+110h] [rbp-220h]
  __int64 v403; // [rsp+118h] [rbp-218h]
  void *v404; // [rsp+120h] [rbp-210h]
  __int64 v405; // [rsp+128h] [rbp-208h]
  __int64 v406; // [rsp+130h] [rbp-200h] BYREF
  void *v407; // [rsp+138h] [rbp-1F8h]
  size_t v408; // [rsp+140h] [rbp-1F0h]
  size_t v409; // [rsp+148h] [rbp-1E8h]
  __int64 v410; // [rsp+150h] [rbp-1E0h]
  size_t __n; // [rsp+158h] [rbp-1D8h]
  __int64 v412; // [rsp+160h] [rbp-1D0h] BYREF
  __int128 v413; // [rsp+168h] [rbp-1C8h]
  __int64 v414; // [rsp+178h] [rbp-1B8h] BYREF
  __int128 v415; // [rsp+180h] [rbp-1B0h]
  _QWORD *v416; // [rsp+190h] [rbp-1A0h]
  __int64 v417; // [rsp+198h] [rbp-198h] BYREF
  __int64 v418; // [rsp+1A0h] [rbp-190h]
  __int64 v419; // [rsp+1A8h] [rbp-188h]
  void *v420; // [rsp+1B0h] [rbp-180h]
  __m256i v421; // [rsp+1B8h] [rbp-178h] BYREF
  size_t v422; // [rsp+1D8h] [rbp-158h]
  __int128 v423; // [rsp+1E0h] [rbp-150h] BYREF
  __int64 v424; // [rsp+1F0h] [rbp-140h]
  size_t v425; // [rsp+1F8h] [rbp-138h]
  void *__s1; // [rsp+200h] [rbp-130h]
  size_t v427; // [rsp+208h] [rbp-128h]
  __m256i v428; // [rsp+210h] [rbp-120h] BYREF
  __m256i v429; // [rsp+230h] [rbp-100h] BYREF
  size_t v430; // [rsp+250h] [rbp-E0h]
  __m256i v431; // [rsp+258h] [rbp-D8h] BYREF
  unsigned __int128 *v432; // [rsp+278h] [rbp-B8h]
  __int64 v433; // [rsp+280h] [rbp-B0h]
  __int64 v434; // [rsp+288h] [rbp-A8h]
  __int128 v435; // [rsp+290h] [rbp-A0h] BYREF
  __int128 v436; // [rsp+2A0h] [rbp-90h]
  __m256i v437; // [rsp+2B0h] [rbp-80h] BYREF
  unsigned __int128 *v438; // [rsp+2D0h] [rbp-60h]
  __int64 v439; // [rsp+2D8h] [rbp-58h]
  __int64 v440; // [rsp+2E0h] [rbp-50h]
  __m256i v441; // [rsp+2E8h] [rbp-48h] BYREF

  v393 = a1;
  v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("idassistant", 2, a2);
  if ( v5 && *(_BYTE *)v5 == 3 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    v7 = *(_QWORD *)(v5 + 24);
    v431.i64[0] = v6;
    v431.i64[1] = v7;
    v437.i64[0] = (__int64)&v431;
    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  }
  else
  {
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v431);
    v437.i64[0] = (__int64)&v431;
    v8 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
  }
  v437.i64[1] = (__int64)v8;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v390, &unk_1017C5D36, &v437);
  v9 = 5;
  v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("model", 5, a2);
  v11 = "unknownchoicesfinish_reasoncompletedsummary_text";
  v12 = 7;
  if ( !v10 || *(_BYTE *)v10 != 3 )
    goto LABEL_12;
  v9 = *(_QWORD *)(v10 + 24);
  if ( v9 < 0 )
  {
    v13 = 0;
    goto LABEL_9;
  }
  v11 = *(const char **)(v10 + 16);
  if ( v9 )
  {
    v12 = *(_QWORD *)(v10 + 24);
LABEL_12:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("model", v9);
    v13 = 1;
    __n = v12;
    __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1);
    if ( !__dst )
    {
      v9 = __n;
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v9);
    }
    v401 = 0;
    goto LABEL_14;
  }
  __dst = (void *)1;
  v401 = 1;
  __n = 0;
LABEL_14:
  memcpy(__dst, v11, __n);
  v417 = 0;
  v418 = 8;
  v419 = 0;
  v406 = 0;
  v407 = (void *)1;
  v408 = 0;
  v422 = 0x8000000000000000LL;
  v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "choicesfinish_reasoncompletedsummary_text",
          7,
          a2);
  if ( !v14 || *(_BYTE *)v14 != 4 || (v15 = *(_QWORD *)(v14 + 16), *(_QWORD *)(v14 + 24) == 0 || v15 == 0) )
  {
    v422 = 0x8000000000000000LL;
    goto LABEL_18;
  }
  v31 = 13;
  v422 = 0x8000000000000000LL;
  v32 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "finish_reasoncompletedsummary_text",
          13,
          v15);
  if ( v32 && *(_BYTE *)v32 == 3 )
  {
    v33 = *(_QWORD *)(v32 + 24);
    v422 = v33;
    if ( v33 < 0 )
    {
      v34 = 0;
LABEL_44:
      v35 = 0x8000000000000000LL;
      goto LABEL_45;
    }
    v141 = *(const void **)(v32 + 16);
    if ( v33 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("finish_reasoncompletedsummary_text", 13);
      v34 = 1;
      v142 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v422, 1);
      if ( !v142 )
      {
        v31 = v422;
        goto LABEL_44;
      }
      v143 = v142;
    }
    else
    {
      v143 = 1;
    }
    v403 = v143;
    memcpy((void *)v143, v141, v422);
  }
  else
  {
    v422 = 0x8000000000000000LL;
  }
  v36 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("message", 7, v15);
  v37 = v36;
  if ( !v36 )
    goto LABEL_18;
  v38 = &v397;
  v39 = v36;
  codexmate_lib::core::relay::dialects::output::extract_chat_reasoning_text::h1f87b696d3d533fc(
    (signed __int64 *)&v397,
    v36);
  v40 = v397;
  if ( (_QWORD)v397 != 0x8000000000000000LL )
    goto LABEL_195;
  v41 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "contentpattern.output_modehead_limit",
          7,
          v37);
  if ( v41 && *(_BYTE *)v41 == 3 )
  {
    codexmate_lib::core::relay::translator::split_leading_think_block::h4ed0c1254350f15e(
      (void **)&v437,
      *(_QWORD *)(v41 + 16),
      *(_QWORD *)(v41 + 24));
    v42 = v37;
    v43 = v437.i64[0];
    if ( v437.i64[0] == 0x8000000000000000LL )
    {
LABEL_52:
      v37 = v42;
      goto LABEL_252;
    }
    v39 = v437.i64[3];
    v38 = v438;
    if ( !v437.i64[2] )
    {
      v366 = v437.i64[1];
      if ( v437.i64[3] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v438, v437.i64[3], 1);
      if ( v43 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v366, v43, 1);
      goto LABEL_52;
    }
    v398 = v437.u64[2];
    v397 = v437.i128[0];
    if ( v437.i64[3] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v438, v437.i64[3], 1);
    v40 = v397;
    if ( (_QWORD)v397 != 0x8000000000000000LL )
    {
LABEL_195:
      v430 = v40;
      v425 = *((_QWORD *)&v397 + 1);
      if ( v398 )
      {
        v395 = v398;
        v412 = 0;
        *((_QWORD *)&v413 + 1) = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v39);
        v165 = 4;
        v166 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v166 )
          goto LABEL_518;
        *v166 = 1701869940;
        v428.i64[0] = 4;
        v428.i64[1] = (__int64)v166;
        v428.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v167 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
        if ( !v167 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
        *(_QWORD *)v167 = 0x6E696E6F73616572LL;
        *(_BYTE *)(v167 + 8) = 103;
        v441.i8[0] = 3;
        v441.i64[1] = 9;
        v441.i64[2] = v167;
        v441.i64[3] = 9;
        v168 = &v431;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v412, &v428);
        if ( v431.i64[0] == 0x8000000000000000LL )
        {
          v169 = v431.i64[1];
          v170 = 32 * v431.i64[3];
          v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
          v171 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
          *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
          *(_QWORD *)&v435 = v171;
          *(_OWORD *)(v431.i64[1] + v170 + 16) = v441.i128[1];
          v172 = (__m256i *)v441.i64[1];
          *(_OWORD *)(v169 + v170) = v441.i128[0];
          if ( (_BYTE)v435 != 6 )
          {
            v168 = (__m256i *)&v435;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
          }
        }
        else
        {
          v440 = v434;
          v439 = v433;
          v438 = v432;
          v437 = v431;
          v429 = v441;
          v168 = (__m256i *)&v435;
          v172 = &v437;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v435,
            &v437,
            &v429);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v168, v172);
        v165 = 2;
        v173 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
        if ( !v173 )
          goto LABEL_518;
        *v173 = 25705;
        v428.i64[0] = 2;
        v399 = v173;
        v428.i64[1] = (__int64)v173;
        v428.i64[2] = 2;
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v437);
        v435 = v437.i128[0];
        v431.i64[0] = 0;
        *(__int128 *)((char *)v431.i128 + 8) = 1u;
        v437.i64[2] = 1610612768;
        v437.i64[0] = (__int64)&v431;
        v437.i64[1] = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_964;
        if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(
                                &v435,
                                &v437) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_10420c9971c21f44d230d15b39fb3fec_965,
            55,
            &v429,
            &anon_10420c9971c21f44d230d15b39fb3fec_976,
            &anon_10420c9971c21f44d230d15b39fb3fec_967);
        v174 = v431.i128[0];
        if ( v431.i64[2] <= 0xCuLL )
        {
          if ( v431.i64[2] != 12 )
LABEL_206:
            core::str::slice_error_fail::h480e51fbd8b15eba(v431.i64[1], v431.i64[2], 0, 12, &off_10196CAC8);
        }
        else if ( *(char *)(v431.i64[1] + 12) <= -65 )
        {
          goto LABEL_206;
        }
        v429.i64[0] = v431.i64[1];
        v429.i64[1] = 12;
        v431.i64[0] = (__int64)&v429;
        v431.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        v175 = &unk_1017C5D13;
        v176 = &v437;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v437, &unk_1017C5D13, &v431);
        if ( (_QWORD)v174 )
        {
          v176 = *((__m256i **)&v174 + 1);
          v175 = (void *)v174;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v174 + 1), v174, 1);
        }
        __s1 = (void *)v437.i64[1];
        v420 = (void *)v437.i64[0];
        v177 = v437.u64[2];
        if ( v437.i64[2] < 0 )
        {
          v178 = 0;
          goto LABEL_212;
        }
        v427 = v37;
        if ( v437.i64[2] )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v176, v175);
          v178 = 1;
          v179 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v177, 1);
          if ( !v179 )
LABEL_212:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v178, v177);
          v180 = v179;
        }
        else
        {
          v180 = 1;
        }
        memcpy((void *)v180, __s1, v177);
        v441.i8[0] = 3;
        v441.i64[1] = v177;
        v441.i64[2] = v180;
        v441.i64[3] = v177;
        v181 = &v431;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v412, &v428);
        if ( v431.i64[0] == 0x8000000000000000LL )
        {
          v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
          v182 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
          *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
          *(_QWORD *)&v435 = v182;
          *(__m256i *)(v431.i64[1] + 32 * v431.i64[3]) = v441;
          if ( (_BYTE)v435 != 6 )
          {
            v181 = (__m256i *)&v435;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
          }
        }
        else
        {
          v440 = v434;
          v439 = v433;
          v438 = v432;
          v437 = v431;
          v429 = v441;
          v181 = (__m256i *)&v435;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v435,
            &v437,
            &v429);
        }
        v183 = v420;
        if ( v420 )
        {
          v181 = (__m256i *)__s1;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v420, 1);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v181, v183);
        v165 = 6;
        v184 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v184 )
          goto LABEL_518;
        *(_WORD *)(v184 + 4) = 29557;
        *(_DWORD *)v184 = 1952543859;
        v428.i64[0] = 6;
        v428.i64[1] = v184;
        v428.i64[2] = 6;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
        v185 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
        if ( !v185 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
        *(_QWORD *)v185 = 0x6574656C706D6F63LL;
        *(_BYTE *)(v185 + 8) = 100;
        v441.i8[0] = 3;
        v441.i64[1] = 9;
        v441.i64[2] = v185;
        v441.i64[3] = 9;
        v186 = &v431;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v412, &v428);
        if ( v431.i64[0] == 0x8000000000000000LL )
        {
          v187 = v431.i64[1];
          v188 = 32 * v431.i64[3];
          v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
          v189 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
          *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
          *(_QWORD *)&v435 = v189;
          *(_OWORD *)(v431.i64[1] + v188 + 16) = v441.i128[1];
          v190 = (__m256i *)v441.i64[1];
          *(_OWORD *)(v187 + v188) = v441.i128[0];
          if ( (_BYTE)v435 != 6 )
          {
            v186 = (__m256i *)&v435;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
          }
        }
        else
        {
          v440 = v434;
          v439 = v433;
          v438 = v432;
          v437 = v431;
          v429 = v441;
          v186 = (__m256i *)&v435;
          v190 = &v437;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v435,
            &v437,
            &v429);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v186, v190);
        v165 = 7;
        v191 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v191 )
LABEL_518:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v165);
        *(_DWORD *)((char *)v191 + 3) = 2037539181;
        *v191 = 1835890035;
        v414 = 7;
        v420 = v191;
        *(_QWORD *)&v415 = v191;
        *((_QWORD *)&v415 + 1) = 7;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
        v192 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
        if ( !v192 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
        v193 = (void *)v192;
        *(_QWORD *)&v423 = 0;
        v424 = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
        v194 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        v195 = v395;
        __s1 = v193;
        if ( !v194 )
          goto LABEL_525;
        *v194 = 1701869940;
        v421.i64[0] = 4;
        v421.i64[1] = (__int64)v194;
        v421.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v196 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
        if ( !v196 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
        qmemcpy(v196, "summary_text", 12);
        v441.i8[0] = 3;
        v441.i64[1] = 12;
        v441.i64[2] = (__int64)v196;
        v441.i64[3] = 12;
        v197 = &v431;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v421);
        if ( v431.i64[0] == 0x8000000000000000LL )
        {
          v198 = v431.i64[1];
          v199 = 32 * v431.i64[3];
          v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
          v200 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
          *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
          *(_QWORD *)&v435 = v200;
          *(_OWORD *)(v431.i64[1] + v199 + 16) = v441.i128[1];
          v201 = (__m256i *)v441.i64[1];
          *(_OWORD *)(v198 + v199) = v441.i128[0];
          if ( (_BYTE)v435 != 6 )
          {
            v197 = (__m256i *)&v435;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
          }
        }
        else
        {
          v440 = v434;
          v439 = v433;
          v438 = v432;
          v437 = v431;
          v429 = v441;
          v197 = (__m256i *)&v435;
          v201 = &v437;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v435,
            &v437,
            &v429);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v197, v201);
        v202 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v202 )
LABEL_525:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
        *v202 = 1954047348;
        v421.i64[0] = 4;
        v421.i64[1] = (__int64)v202;
        v421.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v203 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v195, 1);
        if ( !v203 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v195);
        v204 = (__int64)v203;
        memcpy(v203, (const void *)v425, v195);
        v441.i8[0] = 3;
        v441.i64[1] = v195;
        v441.i64[2] = v204;
        v441.i64[3] = v195;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v421);
        v205 = (char *)__s1;
        if ( v431.i64[0] == 0x8000000000000000LL )
        {
          v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
          v206 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
          *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
          *(_QWORD *)&v435 = v206;
          *(__m256i *)(v431.i64[1] + 32 * v431.i64[3]) = v441;
          if ( (_BYTE)v435 != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
        }
        else
        {
          v440 = v434;
          v439 = v433;
          v438 = v432;
          v437 = v431;
          v429 = v441;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v435,
            &v437,
            &v429);
        }
        *(__int128 *)((char *)v437.i128 + 7) = v423;
        *(__int64 *)((char *)&v437.i64[2] + 7) = v424;
        *v205 = 5;
        *((_QWORD *)v205 + 3) = *(__int64 *)((char *)&v437.i64[2] + 7);
        *(_QWORD *)(v205 + 17) = v437.i64[2];
        *(_OWORD *)(v205 + 1) = v437.i128[0];
        v428.i64[1] = 1;
        v428.i64[2] = (__int64)v205;
        v428.i64[3] = 1;
        v428.i8[0] = 4;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v412, &v414);
        if ( v431.i64[0] == 0x8000000000000000LL )
        {
          v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
          v207 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
          *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
          *(_QWORD *)&v435 = v207;
          *(__m256i *)(v431.i64[1] + 32 * v431.i64[3]) = v428;
          if ( (_BYTE)v435 != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
        }
        else
        {
          v440 = v434;
          v439 = v433;
          v438 = v432;
          v437 = v431;
          v429 = v428;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v435,
            &v437,
            &v429);
        }
        v437.i64[1] = v412;
        v437.i128[1] = v413;
        v437.i8[0] = 5;
        v208 = v419;
        if ( v419 == v417 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v417);
        *(__m256i *)(v418 + 32 * v208) = v437;
        v419 = v208 + 1;
        v37 = v427;
      }
      if ( v430 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v425, v430, 1);
    }
  }
LABEL_252:
  v209 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           "contentpattern.output_modehead_limit",
           7,
           v37);
  if ( v209 && *(_BYTE *)v209 == 3 )
  {
    v210 = *(void **)(v209 + 16);
    v211 = *(_QWORD *)(v209 + 24);
    v212 = &v382;
    codexmate_lib::core::relay::translator::split_leading_think_block::h4ed0c1254350f15e(&v382, (__int64)v210, v211);
    v213 = v382;
    v427 = v37;
    v416 = a3;
    if ( v382 == (void *)0x8000000000000000LL )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v437, v211, 0, 1, 1);
      v214 = v211;
      v34 = v437.i64[1];
      if ( v437.i32[0] == 1 )
      {
        v35 = v422;
        v31 = v437.u64[2];
        goto LABEL_45;
      }
      v215 = v437.i64[2];
      v212 = (void **)v437.i64[2];
      v213 = v210;
      memcpy((void *)v437.i64[2], v210, v214);
      v421.i64[0] = v34;
      v421.i64[1] = v215;
      v421.i64[2] = v214;
    }
    else
    {
      if ( v382 )
      {
        v212 = v383;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v383, v382, 1);
      }
      v214 = *((_QWORD *)&v385 + 1);
      *(__int128 *)((char *)v421.i128 + 8) = v385;
      v421.i64[0] = v384;
    }
    v37 = v427;
    if ( v214 )
    {
      v430 = v214;
      v428.i64[0] = 0;
      v428.i64[2] = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v212, v213);
      v216 = 4;
      v217 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v217 )
        goto LABEL_519;
      *v217 = 1701869940;
      *(_QWORD *)&v435 = 4;
      *((_QWORD *)&v435 + 1) = v217;
      *(_QWORD *)&v436 = 4;
      serde_json::value::to_value::h29e3c39dc75a9151(&v437, &off_10196CB00);
      if ( v437.i8[0] == 6 )
      {
        v431.i64[0] = v437.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v431,
          &off_10196D480,
          &off_10196CB10);
      }
      v431 = v437;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v437, &v428, &v435, &v431);
      if ( v437.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v437);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v437, &v428);
      v216 = 2;
      v218 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
      if ( !v218 )
        goto LABEL_519;
      *v218 = 25705;
      v429.i64[0] = 2;
      v429.i64[1] = (__int64)v218;
      v429.i64[2] = 2;
      uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v437);
      v435 = v437.i128[0];
      v431.i64[0] = (__int64)&v435;
      v431.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v437, &unk_1017C5D19, &v431);
      v435 = v437.i128[0];
      *(_QWORD *)&v436 = v437.i64[2];
      serde_json::value::to_value::hf4a5c51664f5d8d6(&v437, &v435);
      if ( v437.i8[0] == 6 )
      {
        v431.i64[0] = v437.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v431,
          &off_10196D480,
          &off_10196CB10);
      }
      v431 = v437;
      v219 = &v437;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v437, &v428, &v429, &v431);
      if ( v437.i8[0] != 6 )
      {
        v219 = &v437;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v437);
      }
      v220 = v435;
      if ( (_QWORD)v435 )
      {
        v219 = *((__m256i **)&v435 + 1);
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v435 + 1), v435, 1);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v219, v220);
      v216 = 4;
      v221 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v221 )
        goto LABEL_519;
      *v221 = 1701605234;
      *(_QWORD *)&v435 = 4;
      *((_QWORD *)&v435 + 1) = v221;
      *(_QWORD *)&v436 = 4;
      serde_json::value::to_value::h29e3c39dc75a9151(&v437, &off_10196C970);
      if ( v437.i8[0] == 6 )
      {
        v431.i64[0] = v437.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v431,
          &off_10196D480,
          &off_10196CB10);
      }
      v431 = v437;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v437, &v428, &v435, &v431);
      if ( v437.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v437);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v437, &v428);
      v216 = 6;
      v222 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v222 )
        goto LABEL_519;
      *(_WORD *)(v222 + 4) = 29557;
      *(_DWORD *)v222 = 1952543859;
      *(_QWORD *)&v435 = 6;
      *((_QWORD *)&v435 + 1) = v222;
      *(_QWORD *)&v436 = 6;
      serde_json::value::to_value::h29e3c39dc75a9151(&v437, &off_10196CAE0);
      if ( v437.i8[0] == 6 )
      {
        v431.i64[0] = v437.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v431,
          &off_10196D480,
          &off_10196CB10);
      }
      v431 = v437;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v437, &v428, &v435, &v431);
      if ( v437.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v437);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v437, &v428);
      v216 = 7;
      v223 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v223 )
LABEL_519:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v216);
      *(_DWORD *)((char *)v223 + 3) = 1953391988;
      *v223 = 1953394531;
      v441.i64[0] = 7;
      v425 = (size_t)v223;
      v441.i64[1] = (__int64)v223;
      v441.i64[2] = 7;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v224 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
      if ( !v224 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
      v225 = v224;
      v429.i64[0] = 0;
      v429.i64[2] = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
      v226 = 4;
      v227 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v227 )
        goto LABEL_522;
      *v227 = 1701869940;
      *(_QWORD *)&v435 = 4;
      *((_QWORD *)&v435 + 1) = v227;
      *(_QWORD *)&v436 = 4;
      serde_json::value::to_value::h29e3c39dc75a9151(&v437, &off_10196CB28);
      if ( v437.i8[0] == 6 )
      {
        v431.i64[0] = v437.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v431,
          &off_10196D480,
          &off_10196CB10);
      }
      v431 = v437;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v437, &v429, &v435, &v431);
      if ( v437.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v437);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v437, &v429);
      v228 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v228 )
        goto LABEL_522;
      *v228 = 1954047348;
      *(_QWORD *)&v435 = 4;
      *((_QWORD *)&v435 + 1) = v228;
      *(_QWORD *)&v436 = 4;
      serde_json::value::to_value::hf4a5c51664f5d8d6(&v437, &v421);
      if ( v437.i8[0] == 6 )
      {
        v431.i64[0] = v437.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v431,
          &off_10196D480,
          &off_10196CB10);
      }
      v431 = v437;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v437, &v429, &v435, &v431);
      if ( v437.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v437);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v437, &v429);
      v226 = 11;
      v229 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
      if ( !v229 )
LABEL_522:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v226);
      qmemcpy(v229, "annotations", 11);
      *(_QWORD *)&v435 = 11;
      *((_QWORD *)&v435 + 1) = v229;
      *(_QWORD *)&v436 = 11;
      v437.i64[1] = 0;
      v437.i128[1] = 8u;
      v437.i8[0] = 4;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v431, &v429, &v435, &v437);
      if ( v431.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v431);
      *(__int128 *)((char *)v437.i128 + 7) = v429.i128[0];
      *(__int64 *)((char *)&v437.i64[2] + 7) = v429.i64[2];
      *(_BYTE *)v225 = 5;
      *(_QWORD *)(v225 + 24) = *(__int64 *)((char *)&v437.i64[2] + 7);
      *(_QWORD *)(v225 + 17) = v437.i64[2];
      *(_OWORD *)(v225 + 1) = v437.i128[0];
      v437.i64[1] = 1;
      v437.i64[2] = v225;
      v437.i64[3] = 1;
      v437.i8[0] = 4;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v431, &v428, &v441, &v437);
      if ( v431.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v431);
      *(__int128 *)((char *)v437.i128 + 8) = v428.i128[0];
      v437.i64[3] = v428.i64[2];
      v437.i8[0] = 5;
      v231 = v419;
      if ( v419 == v417 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v417);
      *(__m256i *)(v418 + 32 * v231) = v437;
      v419 = v231 + 1;
      v232 = (const void *)v421.i64[1];
      v233 = v430;
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v406,
        0,
        v430,
        1,
        1,
        v230);
      v234 = v408;
      memcpy((char *)v407 + v408, v232, v233);
      v408 = v233 + v234;
      v37 = v427;
    }
    if ( v421.i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v421.i64[1], v421.i64[0], 1);
    a3 = v416;
  }
  v235 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           "tool_callsreasoning_content",
           10,
           v37);
  if ( v235 )
  {
    if ( *(_BYTE *)v235 == 4 )
    {
      v236 = *(_QWORD *)(v235 + 24);
      if ( v236 )
      {
        v237 = *(_QWORD *)(v235 + 16);
        v238 = v237 + 32 * v236;
        v399 = (_WORD *)a3[3];
        v387 = a3 + 4;
        v395 = *a3;
        v420 = (void *)a3[1];
        do
        {
          v239 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "idassistant",
                   2,
                   v237);
          v430 = 12;
          if ( v239 )
          {
            v240 = &unk_101674E13;
            if ( *(_BYTE *)v239 == 3 )
            {
              v241 = *(_QWORD *)(v239 + 24);
              if ( v241 < 0 )
              {
                v35 = v422;
                v34 = 0;
                v31 = v425;
                goto LABEL_45;
              }
              v242 = v237;
              v430 = *(_QWORD *)(v239 + 24);
              v240 = *(const void **)(v239 + 16);
              if ( !v241 )
              {
                v425 = 1;
                LODWORD(v404) = 1;
                v430 = 0;
                goto LABEL_312;
              }
            }
          }
          else
          {
            v240 = &unk_101674E13;
          }
          v242 = v237;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("idassistant", 2);
          v34 = 1;
          v425 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v430, 1);
          if ( !v425 )
          {
            v35 = v422;
            v31 = v430;
LABEL_45:
            v422 = v35;
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v34, v31);
          }
          LODWORD(v404) = 0;
LABEL_312:
          memcpy((void *)v425, v240, v430);
          v243 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   &unk_101674A90,
                   8,
                   v242);
          if ( v243 )
          {
            switch ( *(_BYTE *)v243 )
            {
              case 0:
                v437.i8[0] = 0;
                break;
              case 1:
              case 2:
                v437.i128[1] = *(_OWORD *)(v243 + 16);
                v244 = *(_QWORD *)v243;
                v437.i64[1] = *(_QWORD *)(v243 + 8);
                v437.i64[0] = v244;
                break;
              case 3:
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  &v437.u32[2],
                  v243 + 8);
                v437.i8[0] = 3;
                break;
              case 4:
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                  &v437.u32[2],
                  v243 + 8);
                v437.i8[0] = 4;
                break;
              case 5:
                if ( *(_QWORD *)(v243 + 24) )
                {
                  v245 = *(_QWORD *)(v243 + 8);
                  if ( !v245 )
                    core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
                  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                    &v437.u32[2],
                    v245,
                    *(_QWORD *)(v243 + 16));
                }
                else
                {
                  v437.i64[1] = 0;
                  v437.i64[3] = 0;
                }
                v437.i8[0] = 5;
                break;
            }
            v421 = v437;
            v437.i8[0] = 0;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v437);
          }
          else
          {
            v437.i8[0] = 0;
            v421 = v437;
          }
          v246 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "name",
                   4,
                   &v421);
          v427 = 4;
          if ( v246 )
          {
            v247 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
            if ( *(_BYTE *)v246 == 3 )
            {
              v248 = *(_QWORD *)(v246 + 24);
              if ( v248 < 0 )
              {
                v249 = 0;
                goto LABEL_464;
              }
              v396 = v238;
              v427 = v248;
              v247 = *(char **)(v246 + 16);
              if ( !v248 )
              {
                __s1 = (void *)1;
                v389.i32[0] = 1;
                v427 = 0;
                goto LABEL_333;
              }
              v238 = v396;
            }
          }
          else
          {
            v247 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
          }
          v396 = v238;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4);
          v249 = 1;
          __s1 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v427, 1);
          if ( !__s1 )
          {
            __s1 = (void *)v427;
LABEL_464:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v249, __s1);
          }
          v389.i32[0] = 0;
LABEL_333:
          v410 = v242;
          v250 = __s1;
          v251 = v247;
          v252 = v427;
          memcpy(__s1, v251, v427);
          *(_QWORD *)&v397 = v252;
          *((_QWORD *)&v397 + 1) = v250;
          v398 = v252;
          v253 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "arguments{}",
                   9,
                   &v421);
          v254 = 2;
          if ( v253 )
          {
            v255 = "{}";
            if ( *(_BYTE *)v253 == 3 )
            {
              v254 = *(_QWORD *)(v253 + 24);
              if ( v254 < 0 )
              {
                v258 = 0;
                goto LABEL_492;
              }
              v255 = *(char **)(v253 + 16);
              if ( !v254 )
              {
                v256 = 1;
                v257 = 0;
                goto LABEL_341;
              }
            }
          }
          else
          {
            v255 = "{}";
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("arguments{}", 9);
          v258 = 1;
          v256 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v254, 1);
          if ( !v256 )
          {
            v416 = (_QWORD *)v254;
LABEL_492:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v258, v416);
          }
          v257 = v254;
LABEL_341:
          v416 = (_QWORD *)v256;
          v409 = v257;
          memcpy((void *)v256, v255, v257);
          if ( v427 == 11
            && !(*(_QWORD *)__s1 ^ 0x61705F796C707061LL | *(_QWORD *)((char *)__s1 + 3) ^ 0x68637461705F796CLL) )
          {
            v259 = __s1;
            codexmate_lib::core::relay::translator::unwrap_custom_tool_arguments::hbc090364675fdd0e(
              &v412,
              __s1,
              11,
              v416,
              v409);
          }
          else
          {
            v259 = v416;
            codexmate_lib::core::relay::translator::canonicalize_tool_arguments_str::h6c8f7253e4a406b3(
              &v412,
              v416,
              v409);
          }
          v414 = 0;
          *((_QWORD *)&v415 + 1) = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v412, v259);
          v260 = 4;
          v261 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v261 )
            goto LABEL_527;
          *v261 = 1701869940;
          *(_QWORD *)&v423 = 4;
          *((_QWORD *)&v423 + 1) = v261;
          v424 = 4;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v262 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
          if ( !v262 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
          qmemcpy(v262, "function_call", 13);
          v441.i8[0] = 3;
          v441.i64[1] = 13;
          v441.i64[2] = (__int64)v262;
          v441.i64[3] = 13;
          v263 = &v431;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v414, &v423);
          if ( v431.i64[0] == 0x8000000000000000LL )
          {
            v264 = v431.i64[1];
            v265 = 32 * v431.i64[3];
            v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
            v266 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
            *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
            *(_QWORD *)&v435 = v266;
            *(_OWORD *)(v431.i64[1] + v265 + 16) = v441.i128[1];
            v267 = (__m256i *)v441.i64[1];
            *(_OWORD *)(v264 + v265) = v441.i128[0];
            if ( (_BYTE)v435 != 6 )
            {
              v263 = (__m256i *)&v435;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
            }
          }
          else
          {
            v440 = v434;
            v439 = v433;
            v438 = v432;
            v437 = v431;
            v429 = v441;
            v263 = (__m256i *)&v435;
            v267 = &v437;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v435,
              &v437,
              &v429);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v263, v267);
          v260 = 2;
          v268 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
          if ( !v268 )
            goto LABEL_527;
          *v268 = 25705;
          *(_QWORD *)&v423 = 2;
          *((_QWORD *)&v423 + 1) = v268;
          v424 = 2;
          uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v437);
          v435 = v437.i128[0];
          v431.i64[0] = (__int64)&v435;
          v431.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v437, &unk_1017C5D20, &v431);
          v410 += 32;
          v269 = v437.u64[2];
          v394[0] = (void *)v437.i64[1];
          v405 = v437.i64[0];
          if ( v437.i64[2] < 0 )
          {
            v270 = 0;
LABEL_470:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v270, v269);
          }
          if ( v437.i64[2] )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v437, &unk_1017C5D20);
            v270 = 1;
            v271 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v269, 1);
            if ( !v271 )
              goto LABEL_470;
            v272 = v271;
          }
          else
          {
            v272 = 1;
          }
          memcpy((void *)v272, v394[0], v269);
          v441.i8[0] = 3;
          v441.i64[1] = v269;
          v441.i64[2] = v272;
          v441.i64[3] = v269;
          v273 = &v431;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v414, &v423);
          v274 = &v437;
          v275 = (__m256i *)v405;
          if ( v431.i64[0] == 0x8000000000000000LL )
          {
            v276 = v431.i64[1];
            v277 = 32 * v431.i64[3];
            v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
            v278 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
            *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
            *(_QWORD *)&v435 = v278;
            *(_OWORD *)(v431.i64[1] + v277 + 16) = v441.i128[1];
            v274 = (__m256i *)v441.i64[1];
            *(_OWORD *)(v276 + v277) = v441.i128[0];
            if ( (_BYTE)v435 != 6 )
            {
              v273 = (__m256i *)&v435;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
            }
          }
          else
          {
            v440 = v434;
            v439 = v433;
            v438 = v432;
            v437 = v431;
            v429 = v441;
            v273 = (__m256i *)&v435;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v435,
              &v437,
              &v429);
          }
          if ( v275 )
          {
            v273 = (__m256i *)v394[0];
            v274 = v275;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v394[0], v275, 1);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v273, v274);
          v260 = 7;
          v279 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
          if ( !v279 )
            goto LABEL_527;
          *(_DWORD *)((char *)v279 + 3) = 1684627308;
          *v279 = 1819042147;
          *(_QWORD *)&v423 = 7;
          *((_QWORD *)&v423 + 1) = v279;
          v424 = 7;
          v280 = 1;
          if ( !(_BYTE)v404 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
            v281 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v430, 1);
            if ( !v281 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v430);
            v280 = v281;
          }
          v282 = v430;
          memcpy((void *)v280, (const void *)v425, v430);
          v441.i8[0] = 3;
          v441.i64[1] = v282;
          v441.i64[2] = v280;
          v441.i64[3] = v282;
          v283 = &v431;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v414, &v423);
          v284 = &v437;
          if ( v431.i64[0] == 0x8000000000000000LL )
          {
            v285 = v431.i64[1];
            v286 = 32 * v431.i64[3];
            v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
            v287 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
            *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
            *(_QWORD *)&v435 = v287;
            *(_OWORD *)(v431.i64[1] + v286 + 16) = v441.i128[1];
            v284 = (__m256i *)v441.i64[1];
            *(_OWORD *)(v285 + v286) = v441.i128[0];
            if ( (_BYTE)v435 != 6 )
            {
              v283 = (__m256i *)&v435;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
            }
          }
          else
          {
            v440 = v434;
            v439 = v433;
            v438 = v432;
            v437 = v431;
            v429 = v441;
            v283 = (__m256i *)&v435;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v435,
              &v437,
              &v429);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v283, v284);
          v260 = 4;
          v288 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v288 )
            goto LABEL_527;
          *v288 = 1701667182;
          *(_QWORD *)&v423 = 4;
          *((_QWORD *)&v423 + 1) = v288;
          v424 = 4;
          v289 = 1;
          if ( !v389.i8[0] )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
            v290 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v427, 1);
            if ( !v290 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v427);
            v289 = v290;
          }
          v291 = v427;
          memcpy((void *)v289, __s1, v427);
          v441.i8[0] = 3;
          v441.i64[1] = v291;
          v441.i64[2] = v289;
          v441.i64[3] = v291;
          v292 = &v431;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v414, &v423);
          v293 = &v437;
          if ( v431.i64[0] == 0x8000000000000000LL )
          {
            v294 = v431.i64[1];
            v295 = 32 * v431.i64[3];
            v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
            v296 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
            *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
            *(_QWORD *)&v435 = v296;
            *(_OWORD *)(v431.i64[1] + v295 + 16) = v441.i128[1];
            v293 = (__m256i *)v441.i64[1];
            *(_OWORD *)(v294 + v295) = v441.i128[0];
            if ( (_BYTE)v435 != 6 )
            {
              v292 = (__m256i *)&v435;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
            }
          }
          else
          {
            v440 = v434;
            v439 = v433;
            v438 = v432;
            v437 = v431;
            v429 = v441;
            v292 = (__m256i *)&v435;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v435,
              &v437,
              &v429);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v292, v293);
          v260 = 9;
          v297 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
          if ( !v297 )
            goto LABEL_527;
          *(_QWORD *)v297 = 0x746E656D75677261LL;
          *(_BYTE *)(v297 + 8) = 115;
          *(_QWORD *)&v423 = 9;
          *((_QWORD *)&v423 + 1) = v297;
          v424 = 9;
          v298 = *((_QWORD *)&v413 + 1);
          if ( v413 < 0 )
          {
            v299 = 0;
LABEL_494:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v299, v298);
          }
          v404 = (void *)v413;
          if ( *((_QWORD *)&v413 + 1) )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
            v299 = 1;
            v300 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v298, 1);
            if ( !v300 )
              goto LABEL_494;
            v301 = v300;
          }
          else
          {
            v301 = 1;
          }
          memcpy((void *)v301, v404, v298);
          v441.i8[0] = 3;
          v441.i64[1] = v298;
          v441.i64[2] = v301;
          v441.i64[3] = v298;
          v302 = &v431;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v414, &v423);
          if ( v431.i64[0] == 0x8000000000000000LL )
          {
            v303 = v431.i64[1];
            v304 = 32 * v431.i64[3];
            v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
            v305 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
            *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
            *(_QWORD *)&v435 = v305;
            *(_OWORD *)(v431.i64[1] + v304 + 16) = v441.i128[1];
            v306 = (__m256i *)v441.i64[1];
            *(_OWORD *)(v303 + v304) = v441.i128[0];
            if ( (_BYTE)v435 != 6 )
            {
              v302 = (__m256i *)&v435;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
            }
          }
          else
          {
            v440 = v434;
            v439 = v433;
            v438 = v432;
            v437 = v431;
            v429 = v441;
            v302 = (__m256i *)&v435;
            v306 = &v437;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v435,
              &v437,
              &v429);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v302, v306);
          v260 = 6;
          v307 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
          if ( !v307 )
LABEL_527:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v260);
          *(_WORD *)(v307 + 4) = 29557;
          *(_DWORD *)v307 = 1952543859;
          *(_QWORD *)&v423 = 6;
          *((_QWORD *)&v423 + 1) = v307;
          v424 = 6;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
          v308 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
          if ( !v308 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
          *(_QWORD *)v308 = 0x6574656C706D6F63LL;
          *(_BYTE *)(v308 + 8) = 100;
          v441.i8[0] = 3;
          v441.i64[1] = 9;
          v441.i64[2] = v308;
          v441.i64[3] = 9;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v414, &v423);
          if ( v431.i64[0] == 0x8000000000000000LL )
          {
            v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
            v309 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
            *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
            *(_QWORD *)&v435 = v309;
            *(__m256i *)(v431.i64[1] + 32 * v431.i64[3]) = v441;
            if ( (_BYTE)v435 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
          }
          else
          {
            v440 = v434;
            v439 = v433;
            v438 = v432;
            v437 = v431;
            v429 = v441;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v435,
              &v437,
              &v429);
          }
          v428.i128[1] = v415;
          v428.i64[1] = v414;
          v428.i8[0] = 5;
          v310 = v395;
          if ( v399 )
          {
            v311 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v387, &v397);
            v237 = v410;
            _RCX = v311 >> 57;
            si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v311 >> 57), (__m128i)0LL);
            for ( i = 0; ; i += 16 )
            {
              v315 = (unsigned __int64)v420 & v311;
              v316 = _mm_loadu_si128((const __m128i *)(v310 + v315));
              _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v316, si128));
              if ( _R14D )
                break;
LABEL_402:
              _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v316, (__m128i)-1LL));
              if ( (_DWORD)_RCX )
                goto LABEL_414;
              v311 = v315 + i + 16;
            }
            *(__m128i *)v394 = si128;
            v405 = i;
            v389 = v316;
            v388 = v315;
            while ( 1 )
            {
              __asm { tzcnt   ecx, r14d }
              _RCX = -(__int64)((unsigned __int64)v420 & (v315 + _RCX));
              v318 = v310;
              v319 = v427;
              if ( v427 == *(_QWORD *)(v318 + 48 * _RCX - 32) )
              {
                v320 = v318 + 48 * _RCX;
                v321 = v318;
                v322 = memcmp(__s1, *(const void **)(v320 - 40), v427);
                v318 = v321;
                if ( !v322 )
                  break;
              }
              v323 = _R14D - 1;
              LOWORD(v323) = _R14D & (_R14D - 1);
              v324 = (_WORD)v323 == 0;
              _R14D = v323;
              v315 = v388;
              v237 = v410;
              v310 = v318;
              si128 = _mm_load_si128((const __m128i *)v394);
              i = v405;
              v316 = _mm_load_si128(&v389);
              if ( v324 )
                goto LABEL_402;
            }
            v325 = *(_QWORD *)(v320 - 8);
            v326 = v325 < v319;
            v327 = (char *)(v325 - v319);
            if ( !v326 )
            {
              v328 = *(const void **)(v320 - 16);
              v329 = __s1;
              if ( !memcmp(__s1, &v327[(_QWORD)v328], v319) )
              {
                if ( (__int64)v327 < 0 )
                {
                  v330 = 0;
LABEL_498:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v330, v400);
                }
                if ( v327 )
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v329, &v327[(_QWORD)v328]);
                  v330 = 1;
                  v400 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v327, 1);
                  if ( !v400 )
                  {
                    v400 = v327;
                    goto LABEL_498;
                  }
                }
                else
                {
                  v400 = (void *)1;
                }
                v331 = v400;
                memcpy(v400, v328, (size_t)v327);
                v437.i64[1] = (__int64)v327;
                v437.i64[2] = (__int64)v331;
                v437.i64[3] = (__int64)v327;
                v437.i8[0] = 3;
                v332 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                    "namespace",
                                    9u);
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v332);
                *v332 = v437;
              }
            }
            v237 = v410;
          }
          else
          {
            v237 = v410;
          }
LABEL_414:
          v437 = v428;
          v333 = v419;
          if ( v419 == v417 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v417);
          *(__m256i *)(v418 + 32 * v333) = v437;
          v419 = v333 + 1;
          if ( v412 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v404, v412, 1);
          v238 = v396;
          if ( v409 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v416, v409, 1);
          if ( v427 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v427, 1);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v421);
          if ( v430 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v425, v430, 1);
        }
        while ( v237 != v238 );
      }
    }
  }
LABEL_18:
  if ( !v419 )
  {
    v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "base_respstatus_codestatus_msgMiniMax upstream errorusage",
            9,
            a2);
    v27 = v26;
    if ( v26 )
    {
      v28 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
              "status_codestatus_msgMiniMax upstream errorusage",
              11,
              v26);
      if ( v28 )
      {
        if ( *(_BYTE *)v28 == 2 )
        {
          v29 = *(_QWORD *)(v28 + 8);
          if ( v29 )
          {
            if ( (_DWORD)v29 == 2 )
              goto LABEL_19;
            v30 = *(_QWORD *)(v28 + 16);
          }
          else
          {
            v30 = *(_QWORD *)(v28 + 16);
            if ( v30 < 0 )
              goto LABEL_19;
          }
          v386 = v30;
          if ( v30 )
          {
            v144 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "status_msgMiniMax upstream errorusage",
                     10,
                     v27);
            v145 = 22;
            v146 = "MiniMax upstream errorusage";
            if ( v144 && *(_BYTE *)v144 == 3 )
            {
              v146 = *(char **)(v144 + 16);
              v145 = *(_QWORD *)(v144 + 24);
            }
            v397 = __PAIR128__(v145, (unsigned __int64)v146);
            v437.i64[0] = (__int64)&v386;
            v437.i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b;
            v437.i64[2] = (__int64)&v397;
            v437.i64[3] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v431, &unk_1017C5D26, &v437);
            v420 = (void *)v431.i64[1];
            v147 = v431.i64[0];
            v427 = v431.u64[2];
            v412 = 0;
            *((_QWORD *)&v413 + 1) = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v431, &unk_1017C5D26);
            v148 = 4;
            v149 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v149 )
              goto LABEL_517;
            *v149 = 1701869940;
            v428.i64[0] = 4;
            v428.i64[1] = (__int64)v149;
            v428.i64[2] = 4;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
            v150 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
            v430 = v147;
            if ( !v150 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
            *(_DWORD *)((char *)v150 + 3) = 1701273971;
            *v150 = 1936942445;
            v441.i8[0] = 3;
            v441.i64[1] = 7;
            v441.i64[2] = (__int64)v150;
            v441.i64[3] = 7;
            v151 = &v431;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v412, &v428);
            if ( v431.i64[0] == 0x8000000000000000LL )
            {
              v152 = v431.i64[1];
              v153 = 32 * v431.i64[3];
              v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
              v154 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
              *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
              *(_QWORD *)&v435 = v154;
              *(_OWORD *)(v431.i64[1] + v153 + 16) = v441.i128[1];
              v155 = (__m256i *)v441.i64[1];
              *(_OWORD *)(v152 + v153) = v441.i128[0];
              if ( (_BYTE)v435 != 6 )
              {
                v151 = (__m256i *)&v435;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
              }
            }
            else
            {
              v440 = v434;
              v439 = v433;
              v438 = v432;
              v437 = v431;
              v429 = v441;
              v151 = (__m256i *)&v435;
              v155 = &v437;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v435,
                &v437,
                &v429);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v151, v155);
            v148 = 2;
            v160 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
            if ( !v160 )
              goto LABEL_517;
            *v160 = 25705;
            v428.i64[0] = 2;
            v428.i64[1] = (__int64)v160;
            v428.i64[2] = 2;
            uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v437);
            v435 = v437.i128[0];
            v431.i64[0] = (__int64)&v435;
            v431.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v437, &unk_1017C5D19, &v431);
            v425 = v437.u64[1];
            __s1 = (void *)v437.i64[0];
            v161 = v437.u64[2];
            if ( v437.i64[2] < 0 )
            {
              v162 = 0;
              goto LABEL_185;
            }
            if ( v437.i64[2] )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v437, &unk_1017C5D19);
              v162 = 1;
              v163 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v161, 1);
              if ( !v163 )
LABEL_185:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v162, v161);
              v164 = v163;
            }
            else
            {
              v164 = 1;
            }
            memcpy((void *)v164, (const void *)v425, v161);
            v441.i8[0] = 3;
            v441.i64[1] = v161;
            v441.i64[2] = v164;
            v441.i64[3] = v161;
            v334 = &v431;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v412, &v428);
            if ( v431.i64[0] == 0x8000000000000000LL )
            {
              v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
              v335 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
              *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
              *(_QWORD *)&v435 = v335;
              *(__m256i *)(v431.i64[1] + 32 * v431.i64[3]) = v441;
              if ( (_BYTE)v435 != 6 )
              {
                v334 = (__m256i *)&v435;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
              }
            }
            else
            {
              v440 = v434;
              v439 = v433;
              v438 = v432;
              v437 = v431;
              v429 = v441;
              v334 = (__m256i *)&v435;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v435,
                &v437,
                &v429);
            }
            v336 = __s1;
            if ( __s1 )
            {
              v334 = (__m256i *)v425;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v425, __s1, 1);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v334, v336);
            v148 = 4;
            v337 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v337 )
              goto LABEL_517;
            *v337 = 1701605234;
            v428.i64[0] = 4;
            v428.i64[1] = (__int64)v337;
            v428.i64[2] = 4;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
            v338 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
            if ( !v338 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
            *(_QWORD *)v338 = 0x6E61747369737361LL;
            *(_BYTE *)(v338 + 8) = 116;
            v441.i8[0] = 3;
            v441.i64[1] = 9;
            v441.i64[2] = v338;
            v441.i64[3] = 9;
            v339 = &v431;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v412, &v428);
            if ( v431.i64[0] == 0x8000000000000000LL )
            {
              v340 = v431.i64[1];
              v341 = 32 * v431.i64[3];
              v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
              v342 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
              *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
              *(_QWORD *)&v435 = v342;
              *(_OWORD *)(v431.i64[1] + v341 + 16) = v441.i128[1];
              v343 = (__m256i *)v441.i64[1];
              *(_OWORD *)(v340 + v341) = v441.i128[0];
              if ( (_BYTE)v435 != 6 )
              {
                v339 = (__m256i *)&v435;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
              }
            }
            else
            {
              v440 = v434;
              v439 = v433;
              v438 = v432;
              v437 = v431;
              v429 = v441;
              v339 = (__m256i *)&v435;
              v343 = &v437;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v435,
                &v437,
                &v429);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v339, v343);
            v148 = 6;
            v344 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
            if ( !v344 )
              goto LABEL_517;
            *(_WORD *)(v344 + 4) = 29557;
            *(_DWORD *)v344 = 1952543859;
            v428.i64[0] = 6;
            v428.i64[1] = v344;
            v428.i64[2] = 6;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
            v345 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
            if ( !v345 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
            *(_QWORD *)v345 = 0x6574656C706D6F63LL;
            *(_BYTE *)(v345 + 8) = 100;
            v441.i8[0] = 3;
            v441.i64[1] = 9;
            v441.i64[2] = v345;
            v441.i64[3] = 9;
            v346 = &v431;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v412, &v428);
            if ( v431.i64[0] == 0x8000000000000000LL )
            {
              v347 = v431.i64[1];
              v348 = 32 * v431.i64[3];
              v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
              v349 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
              *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
              *(_QWORD *)&v435 = v349;
              *(_OWORD *)(v431.i64[1] + v348 + 16) = v441.i128[1];
              v350 = (__m256i *)v441.i64[1];
              *(_OWORD *)(v347 + v348) = v441.i128[0];
              if ( (_BYTE)v435 != 6 )
              {
                v346 = (__m256i *)&v435;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
              }
            }
            else
            {
              v440 = v434;
              v439 = v433;
              v438 = v432;
              v437 = v431;
              v429 = v441;
              v346 = (__m256i *)&v435;
              v350 = &v437;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v435,
                &v437,
                &v429);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v346, v350);
            v148 = 7;
            v351 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
            if ( !v351 )
LABEL_517:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v148);
            *(_DWORD *)((char *)v351 + 3) = 1953391988;
            *v351 = 1953394531;
            v414 = 7;
            v425 = (size_t)v351;
            *(_QWORD *)&v415 = v351;
            *((_QWORD *)&v415 + 1) = 7;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
            v352 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
            if ( !v352 )
              alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
            v353 = v352;
            *(_QWORD *)&v423 = 0;
            v424 = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
            v354 = 4;
            v355 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v355 )
              goto LABEL_523;
            *v355 = 1701869940;
            v421.i64[0] = 4;
            v421.i64[1] = (__int64)v355;
            v421.i64[2] = 4;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
            v356 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
            if ( !v356 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
            qmemcpy(v356, "output_text", 11);
            v441.i8[0] = 3;
            v441.i64[1] = 11;
            v441.i64[2] = (__int64)v356;
            v441.i64[3] = 11;
            v357 = &v431;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v421);
            if ( v431.i64[0] == 0x8000000000000000LL )
            {
              v358 = v431.i64[1];
              v359 = 32 * v431.i64[3];
              v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
              v360 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
              *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
              *(_QWORD *)&v435 = v360;
              *(_OWORD *)(v431.i64[1] + v359 + 16) = v441.i128[1];
              v361 = (__m256i *)v441.i64[1];
              *(_OWORD *)(v358 + v359) = v441.i128[0];
              if ( (_BYTE)v435 != 6 )
              {
                v357 = (__m256i *)&v435;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
              }
            }
            else
            {
              v440 = v434;
              v439 = v433;
              v438 = v432;
              v437 = v431;
              v429 = v441;
              v357 = (__m256i *)&v435;
              v361 = &v437;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v435,
                &v437,
                &v429);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v357, v361);
            v362 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v362 )
              goto LABEL_523;
            *v362 = 1954047348;
            v421.i64[0] = 4;
            v421.i64[1] = (__int64)v362;
            v421.i64[2] = 4;
            if ( (v427 & 0x8000000000000000LL) != 0LL )
            {
              v363 = 0;
              goto LABEL_459;
            }
            if ( v427 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v363 = 1;
              v364 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v427, 1);
              if ( !v364 )
LABEL_459:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v363, v427);
              v365 = v364;
            }
            else
            {
              v365 = 1;
            }
            v367 = v427;
            memcpy((void *)v365, v420, v427);
            v441.i8[0] = 3;
            v441.i64[1] = v367;
            v441.i64[2] = v365;
            v441.i64[3] = v367;
            v368 = &v431;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v421);
            if ( v431.i64[0] == 0x8000000000000000LL )
            {
              v369 = v431.i64[1];
              v370 = 32 * v431.i64[3];
              v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
              v371 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
              *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
              *(_QWORD *)&v435 = v371;
              *(_OWORD *)(v431.i64[1] + v370 + 16) = v441.i128[1];
              v372 = (__m256i *)v441.i64[1];
              *(_OWORD *)(v369 + v370) = v441.i128[0];
              if ( (_BYTE)v435 != 6 )
              {
                v368 = (__m256i *)&v435;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
              }
            }
            else
            {
              v440 = v434;
              v439 = v433;
              v438 = v432;
              v437 = v431;
              v429 = v441;
              v368 = (__m256i *)&v435;
              v372 = &v437;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v435,
                &v437,
                &v429);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v368, v372);
            v354 = 11;
            v373 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
            if ( !v373 )
LABEL_523:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v354);
            qmemcpy(v373, "annotations", 11);
            v421.i64[0] = 11;
            v421.i64[1] = (__int64)v373;
            v421.i64[2] = 11;
            v441.i64[1] = 0;
            v441.i128[1] = 8u;
            v441.i8[0] = 4;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v421);
            if ( v431.i64[0] == 0x8000000000000000LL )
            {
              v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
              v374 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
              *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
              *(_QWORD *)&v435 = v374;
              *(__m256i *)(v431.i64[1] + 32 * v431.i64[3]) = v441;
              if ( (_BYTE)v435 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
            }
            else
            {
              v440 = v434;
              v439 = v433;
              v438 = v432;
              v437 = v431;
              v429 = v441;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v435,
                &v437,
                &v429);
            }
            *(__int128 *)((char *)v437.i128 + 7) = v423;
            *(__int64 *)((char *)&v437.i64[2] + 7) = v424;
            *(_BYTE *)v353 = 5;
            *(_QWORD *)(v353 + 24) = *(__int64 *)((char *)&v437.i64[2] + 7);
            *(_QWORD *)(v353 + 17) = v437.i64[2];
            *(_OWORD *)(v353 + 1) = v437.i128[0];
            v428.i64[1] = 1;
            v428.i64[2] = v353;
            v428.i64[3] = 1;
            v428.i8[0] = 4;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v412, &v414);
            if ( v431.i64[0] == 0x8000000000000000LL )
            {
              v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
              v376 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
              *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
              *(_QWORD *)&v435 = v376;
              *(__m256i *)(v431.i64[1] + 32 * v431.i64[3]) = v428;
              if ( (_BYTE)v435 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
            }
            else
            {
              v440 = v434;
              v439 = v433;
              v438 = v432;
              v437 = v431;
              v429 = v428;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v435,
                &v437,
                &v429);
            }
            v437.i64[1] = v412;
            v437.i128[1] = v413;
            v437.i8[0] = 5;
            v377 = v419;
            if ( v419 == v417 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v417);
            *(__m256i *)(v418 + 32 * v377) = v437;
            v419 = v377 + 1;
            v378 = v408;
            if ( v427 > v406 - v408 )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v406,
                v408,
                v427,
                1,
                1,
                v375);
              v378 = v408;
            }
            v379 = v430;
            v380 = v420;
            v381 = v427;
            memcpy((char *)v407 + v378, v420, v427);
            v408 = v381 + v378;
            if ( v379 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v380, v379, 1);
          }
        }
      }
    }
  }
LABEL_19:
  v16 = (__m256i *)"usage";
  v17 = 5;
  v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("usage", 5, a2);
  v19 = v18;
  if ( v18 )
  {
    v20 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "prompt_tokenscompletion_tokensinput_tokensoutput_tokens",
            13,
            v18);
    if ( v20 && *(_BYTE *)v20 == 2 && (v21 = *(_QWORD *)(v20 + 8), v21 != 2) )
    {
      if ( (_DWORD)v21 == 1 )
      {
        v22 = *(_QWORD *)(v20 + 16);
      }
      else
      {
        v44 = *(_QWORD *)(v20 + 16);
        v22 = 0;
        if ( v44 > 0 )
          v22 = v44;
      }
    }
    else
    {
      v22 = 0;
    }
    v23 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "completion_tokensinput_tokensoutput_tokens",
            17,
            v19);
    if ( v23 )
    {
      if ( *(_BYTE *)v23 != 2 || (v24 = *(_QWORD *)(v23 + 8), v24 == 2) )
      {
        v25 = 0;
      }
      else if ( (_DWORD)v24 == 1 )
      {
        v25 = *(_QWORD *)(v23 + 16);
      }
      else
      {
        v45 = *(_QWORD *)(v23 + 16);
        v25 = 0;
        if ( v45 > 0 )
          v25 = v45;
      }
    }
    else
    {
      v25 = 0;
    }
    v421.i64[0] = 0;
    v421.i64[2] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("completion_tokensinput_tokensoutput_tokens", 17);
    v46 = 12;
    v47 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v47 )
      goto LABEL_511;
    qmemcpy(v47, "input_tokens", 12);
    v428.i64[0] = 12;
    v428.i64[1] = (__int64)v47;
    v428.i64[2] = 12;
    v441.i8[0] = 2;
    v441.i64[1] = v22 >> 63;
    v441.i64[2] = v22;
    v48 = &v431;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v421, &v428);
    if ( v431.i64[0] == 0x8000000000000000LL )
    {
      v49 = v431.i64[1];
      v50 = 32 * v431.i64[3];
      v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
      v51 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
      *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
      *(_QWORD *)&v435 = v51;
      *(_OWORD *)(v431.i64[1] + v50 + 16) = v441.i128[1];
      v52 = (__m256i *)v441.i64[1];
      *(_OWORD *)(v49 + v50) = v441.i128[0];
      if ( (_BYTE)v435 != 6 )
      {
        v48 = (__m256i *)&v435;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
      }
    }
    else
    {
      v440 = v434;
      v439 = v433;
      v438 = v432;
      v437 = v431;
      v429 = v441;
      v48 = (__m256i *)&v435;
      v52 = &v437;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v435,
        &v437,
        &v429);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, v52);
    v46 = 13;
    v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( !v53 )
      goto LABEL_511;
    qmemcpy(v53, "output_tokens", 13);
    v428.i64[0] = 13;
    v428.i64[1] = (__int64)v53;
    v428.i64[2] = 13;
    v441.i8[0] = 2;
    v441.i64[1] = v25 >> 63;
    v441.i64[2] = v25;
    v54 = &v431;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v421, &v428);
    if ( v431.i64[0] == 0x8000000000000000LL )
    {
      v55 = v431.i64[1];
      v56 = 32 * v431.i64[3];
      v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
      v57 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
      *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
      *(_QWORD *)&v435 = v57;
      *(_OWORD *)(v431.i64[1] + v56 + 16) = v441.i128[1];
      v58 = (__m256i *)v441.i64[1];
      *(_OWORD *)(v55 + v56) = v441.i128[0];
      if ( (_BYTE)v435 != 6 )
      {
        v54 = (__m256i *)&v435;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
      }
    }
    else
    {
      v440 = v434;
      v439 = v433;
      v438 = v432;
      v437 = v431;
      v429 = v441;
      v54 = (__m256i *)&v435;
      v58 = &v437;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v435,
        &v437,
        &v429);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v58);
    v46 = 12;
    v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v59 )
LABEL_511:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v46);
    qmemcpy(v59, "total_tokens", 12);
    v428.i64[0] = 12;
    v428.i64[1] = (__int64)v59;
    v428.i64[2] = 12;
    v60 = v22 + v25;
    v441.i8[0] = 2;
    v441.i64[1] = v60 >> 63;
    v441.i64[2] = v60;
    v16 = &v431;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v421, &v428);
    if ( v431.i64[0] == 0x8000000000000000LL )
    {
      v61 = v431.i64[1];
      v62 = 32 * v431.i64[3];
      v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
      v63 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
      *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
      *(_QWORD *)&v435 = v63;
      *(_OWORD *)(v431.i64[1] + v62 + 16) = v441.i128[1];
      v17 = v441.i64[1];
      *(_OWORD *)(v61 + v62) = v441.i128[0];
      if ( (_BYTE)v435 != 6 )
      {
        v16 = (__m256i *)&v435;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
      }
    }
    else
    {
      v440 = v434;
      v439 = v433;
      v438 = v432;
      v437 = v431;
      v429 = v441;
      v16 = (__m256i *)&v435;
      v17 = (__int64)&v437;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v435,
        &v437,
        &v429);
    }
    *(__int64 *)((char *)v437.i64 + 7) = v421.i64[0];
    *(__int128 *)((char *)v437.i128 + 15) = *(__int128 *)((char *)v421.i128 + 8);
    v421.i64[3] = v421.i64[2];
    *(__int128 *)((char *)v421.i128 + 1) = v437.i128[0];
    *(__int64 *)((char *)&v421.i64[2] + 1) = v437.i64[2];
  }
  else
  {
    v421.i64[1] = 0;
    v421.i64[3] = 0;
  }
  v421.i8[0] = 5;
  LOBYTE(v427) = v422 != 0x8000000000000000LL && v422 == 6;
  if ( (_BYTE)v427 == 1 )
  {
    v64 = _byteswap_ulong(*(_DWORD *)v403);
    v65 = 1818586727;
    if ( v64 != 1818586727
      || (v64 = (unsigned __int16)__ROL2__(*(_WORD *)(v403 + 4), 8), v65 = 29800,
                                                                     v66 = 0,
                                                                     (unsigned __int16)v64 != 29800) )
    {
      v66 = 2 * (v64 >= v65) - 1;
    }
    v67 = "completedsummary_text";
    if ( !v66 )
      v67 = "incompleteclaude-3-7claude-opus-4claude-sonnet-4";
    v430 = (size_t)v67;
    v68 = (v66 == 0) + 9LL;
  }
  else
  {
    v68 = 9;
    v430 = (size_t)"completedsummary_text";
  }
  *(_QWORD *)&v423 = 0;
  v424 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v17);
  v69 = 2;
  v70 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v70 )
    goto LABEL_510;
  *v70 = 25705;
  v428.i64[0] = 2;
  v428.i64[1] = (__int64)v70;
  v428.i64[2] = 2;
  v71 = v392;
  if ( (v392 & 0x8000000000000000LL) != 0LL )
  {
    v72 = 0;
    goto LABEL_85;
  }
  v425 = v68;
  v73 = __src;
  if ( v392 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
    v72 = 1;
    v74 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v71, 1);
    if ( !v74 )
LABEL_85:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v72, v71);
    v75 = v74;
  }
  else
  {
    v75 = 1;
  }
  memcpy((void *)v75, v73, v71);
  v441.i8[0] = 3;
  v441.i64[1] = v71;
  v441.i64[2] = v75;
  v441.i64[3] = v71;
  v76 = &v431;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v428);
  v77 = v425;
  if ( v431.i64[0] == 0x8000000000000000LL )
  {
    v78 = v431.i64[1];
    v79 = 32 * v431.i64[3];
    v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
    v80 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
    *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
    *(_QWORD *)&v435 = v80;
    *(_OWORD *)(v431.i64[1] + v79 + 16) = v441.i128[1];
    v81 = (__m256i *)v441.i64[1];
    *(_OWORD *)(v78 + v79) = v441.i128[0];
    if ( (_BYTE)v435 != 6 )
    {
      v76 = (__m256i *)&v435;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
    }
  }
  else
  {
    v440 = v434;
    v439 = v433;
    v438 = v432;
    v437 = v431;
    v429 = v441;
    v76 = (__m256i *)&v435;
    v81 = &v437;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v435,
      &v437,
      &v429);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v76, v81);
  v69 = 6;
  v82 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v82 )
    goto LABEL_510;
  *(_WORD *)(v82 + 4) = 29795;
  *(_DWORD *)v82 = 1701470831;
  v428.i64[0] = 6;
  v428.i64[1] = v82;
  v428.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v83 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v83 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
  *v83 = 0x65736E6F70736572LL;
  v441.i8[0] = 3;
  v441.i64[1] = 8;
  v441.i64[2] = (__int64)v83;
  v441.i64[3] = 8;
  v84 = &v431;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v428);
  if ( v431.i64[0] == 0x8000000000000000LL )
  {
    v85 = v431.i64[1];
    v86 = 32 * v431.i64[3];
    v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
    v87 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
    *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
    *(_QWORD *)&v435 = v87;
    *(_OWORD *)(v431.i64[1] + v86 + 16) = v441.i128[1];
    v88 = (__m256i *)v441.i64[1];
    *(_OWORD *)(v85 + v86) = v441.i128[0];
    if ( (_BYTE)v435 != 6 )
    {
      v84 = (__m256i *)&v435;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
    }
  }
  else
  {
    v440 = v434;
    v439 = v433;
    v438 = v432;
    v437 = v431;
    v429 = v441;
    v84 = (__m256i *)&v435;
    v88 = &v437;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v435,
      &v437,
      &v429);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v84, v88);
  v69 = 10;
  v89 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v89 )
    goto LABEL_510;
  qmemcpy(v89, "created_at", 10);
  v428.i64[0] = 10;
  v428.i64[1] = (__int64)v89;
  v428.i64[2] = 10;
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v414);
  v90 = ((int)v414 >> 13) - 1;
  v91 = 0;
  if ( (int)v414 >> 13 <= 0 )
  {
    v92 = (1 - ((int)v414 >> 13)) / 0x190u + 1;
    v90 += 400 * v92;
    v91 = -146097 * v92;
  }
  v441.i8[0] = 2;
  v441.i64[1] = ((unsigned __int64)HIDWORD(v414)
               + 86400LL
               * (int)(((v90 / 100) >> 2)
                     + ((1461 * v90) >> 2)
                     + v91
                     + (((unsigned int)v414 >> 4) & 0x1FF)
                     - v90 / 100
                     - 719163)) >> 63;
  v441.i64[2] = HIDWORD(v414)
              + 86400LL
              * (int)(((v90 / 100) >> 2)
                    + ((1461 * v90) >> 2)
                    + v91
                    + (((unsigned int)v414 >> 4) & 0x1FF)
                    - v90 / 100
                    - 719163);
  v93 = &v431;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v428);
  if ( v431.i64[0] == 0x8000000000000000LL )
  {
    v94 = v431.i64[1];
    v95 = 32 * v431.i64[3];
    v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
    v96 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
    *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
    *(_QWORD *)&v435 = v96;
    *(_OWORD *)(v431.i64[1] + v95 + 16) = v441.i128[1];
    v97 = (__m256i *)v441.i64[1];
    *(_OWORD *)(v94 + v95) = v441.i128[0];
    if ( (_BYTE)v435 != 6 )
    {
      v93 = (__m256i *)&v435;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
    }
  }
  else
  {
    v440 = v434;
    v439 = v433;
    v438 = v432;
    v437 = v431;
    v429 = v441;
    v93 = (__m256i *)&v435;
    v97 = &v437;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v435,
      &v437,
      &v429);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v93, v97);
  v69 = 6;
  v98 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v98 )
    goto LABEL_510;
  *(_WORD *)(v98 + 4) = 29557;
  *(_DWORD *)v98 = 1952543859;
  v428.i64[0] = 6;
  v428.i64[1] = v98;
  v428.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v99 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v77, 1);
  if ( !v99 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v77);
  v100 = (__int64)v99;
  memcpy(v99, (const void *)v430, v77);
  v441.i8[0] = 3;
  v441.i64[1] = v77;
  v441.i64[2] = v100;
  v441.i64[3] = v77;
  v101 = &v431;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v428);
  if ( v431.i64[0] == 0x8000000000000000LL )
  {
    v102 = v431.i64[1];
    v103 = 32 * v431.i64[3];
    v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
    v104 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
    *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
    *(_QWORD *)&v435 = v104;
    *(_OWORD *)(v431.i64[1] + v103 + 16) = v441.i128[1];
    v105 = (__m256i *)v441.i64[1];
    *(_OWORD *)(v102 + v103) = v441.i128[0];
    if ( (_BYTE)v435 != 6 )
    {
      v101 = (__m256i *)&v435;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
    }
  }
  else
  {
    v440 = v434;
    v439 = v433;
    v438 = v432;
    v437 = v431;
    v429 = v441;
    v101 = (__m256i *)&v435;
    v105 = &v437;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v435,
      &v437,
      &v429);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v101, v105);
  v69 = 5;
  v106 = 1;
  v107 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v107 )
    goto LABEL_510;
  *(_BYTE *)(v107 + 4) = 108;
  *(_DWORD *)v107 = 1701080941;
  v428.i64[0] = 5;
  v428.i64[1] = v107;
  v428.i64[2] = 5;
  if ( !(_BYTE)v401 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v108 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    if ( !v108 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v106 = v108;
  }
  v109 = __n;
  memcpy((void *)v106, __dst, __n);
  v441.i8[0] = 3;
  v441.i64[1] = v109;
  v441.i64[2] = v106;
  v441.i64[3] = v109;
  v110 = &v431;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v428);
  if ( v431.i64[0] == 0x8000000000000000LL )
  {
    v111 = v431.i64[1];
    v112 = 32 * v431.i64[3];
    v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
    v113 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
    *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
    *(_QWORD *)&v435 = v113;
    *(_OWORD *)(v431.i64[1] + v112 + 16) = v441.i128[1];
    v114 = (__m256i *)v441.i64[1];
    *(_OWORD *)(v111 + v112) = v441.i128[0];
    if ( (_BYTE)v435 != 6 )
    {
      v110 = (__m256i *)&v435;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
    }
  }
  else
  {
    v440 = v434;
    v439 = v433;
    v438 = v432;
    v437 = v431;
    v429 = v441;
    v110 = (__m256i *)&v435;
    v114 = &v437;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v435,
      &v437,
      &v429);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v110, v114);
  v69 = 6;
  v115 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v115 )
    goto LABEL_510;
  *(_WORD *)(v115 + 4) = 29813;
  *(_DWORD *)v115 = 1886680431;
  v428.i64[0] = 6;
  v428.i64[1] = v115;
  v428.i64[2] = 6;
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&v437, &v417);
  if ( v437.i8[0] == 6 )
  {
    v431.i64[0] = v437.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v431,
      &off_10196D480,
      &off_10196CB38);
  }
  v441 = v437;
  v116 = &v431;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v428);
  if ( v431.i64[0] == 0x8000000000000000LL )
  {
    v117 = v431.i64[1];
    v118 = 32 * v431.i64[3];
    v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
    v119 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
    *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
    *(_QWORD *)&v435 = v119;
    *(_OWORD *)(v431.i64[1] + v118 + 16) = v441.i128[1];
    v120 = (__m256i *)v441.i64[1];
    *(_OWORD *)(v117 + v118) = v441.i128[0];
    if ( (_BYTE)v435 != 6 )
    {
      v116 = (__m256i *)&v435;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
    }
  }
  else
  {
    v440 = v434;
    v439 = v433;
    v438 = v432;
    v437 = v431;
    v429 = v441;
    v116 = (__m256i *)&v435;
    v120 = &v437;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v435,
      &v437,
      &v429);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v116, v120);
  v69 = 11;
  v121 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v121 )
    goto LABEL_510;
  qmemcpy(v121, "output_text", 11);
  v428.i64[0] = 11;
  v428.i64[1] = (__int64)v121;
  v428.i64[2] = 11;
  v122 = v408;
  if ( (v408 & 0x8000000000000000LL) != 0LL )
  {
    v123 = 0;
    goto LABEL_130;
  }
  v124 = v407;
  if ( v408 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1);
    v123 = 1;
    v125 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v122, 1);
    if ( !v125 )
LABEL_130:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v123, v122);
    v126 = v125;
  }
  else
  {
    v126 = 1;
  }
  memcpy((void *)v126, v124, v122);
  v441.i8[0] = 3;
  v441.i64[1] = v122;
  v441.i64[2] = v126;
  v441.i64[3] = v122;
  v127 = &v431;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v428);
  if ( v431.i64[0] == 0x8000000000000000LL )
  {
    v128 = v431.i64[1];
    v129 = 32 * v431.i64[3];
    v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
    v130 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
    *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
    *(_QWORD *)&v435 = v130;
    *(_OWORD *)(v431.i64[1] + v129 + 16) = v441.i128[1];
    v131 = (__m256i *)v441.i64[1];
    *(_OWORD *)(v128 + v129) = v441.i128[0];
    if ( (_BYTE)v435 != 6 )
    {
      v127 = (__m256i *)&v435;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
    }
  }
  else
  {
    v440 = v434;
    v439 = v433;
    v438 = v432;
    v437 = v431;
    v429 = v441;
    v127 = (__m256i *)&v435;
    v131 = &v437;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v435,
      &v437,
      &v429);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v127, v131);
  v69 = 5;
  v132 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v132 )
LABEL_510:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v69);
  *(_BYTE *)(v132 + 4) = 101;
  *(_DWORD *)v132 = 1734439797;
  v428.i64[0] = 5;
  v428.i64[1] = v132;
  v428.i64[2] = 5;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v437,
    &v421);
  if ( v437.i8[0] == 6 )
  {
    v431.i64[0] = v437.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v431,
      &off_10196D480,
      &off_10196CB38);
  }
  v441 = v437;
  v133 = &v431;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v423, &v428);
  if ( v431.i64[0] == 0x8000000000000000LL )
  {
    v134 = v431.i64[1];
    v135 = 32 * v431.i64[3];
    v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
    v136 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
    *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
    *(_QWORD *)&v435 = v136;
    *(_OWORD *)(v431.i64[1] + v135 + 16) = v441.i128[1];
    v137 = (__m256i *)v441.i64[1];
    *(_OWORD *)(v134 + v135) = v441.i128[0];
    if ( (_BYTE)v435 != 6 )
    {
      v133 = (__m256i *)&v435;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
    }
  }
  else
  {
    v440 = v434;
    v439 = v433;
    v438 = v432;
    v437 = v431;
    v429 = v441;
    v133 = (__m256i *)&v435;
    v137 = &v437;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v435,
      &v437,
      &v429);
  }
  *(__int128 *)((char *)v428.i128 + 8) = v423;
  v428.i64[3] = v424;
  v428.i8[0] = 5;
  if ( (_BYTE)v427 && !(*(_DWORD *)v403 ^ 0x676E656C | *(unsigned __int16 *)(v403 + 4) ^ 0x6874) )
  {
    v414 = 0;
    *((_QWORD *)&v415 + 1) = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v133, v137);
    v138 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v138 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
    *(_WORD *)(v138 + 4) = 28271;
    *(_DWORD *)v138 = 1935762802;
    *(_QWORD *)&v423 = 6;
    *((_QWORD *)&v423 + 1) = v138;
    v424 = 6;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
    v139 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
    if ( !v139 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17);
    qmemcpy(v139, "max_output_tokens", 17);
    v441.i8[0] = 3;
    v441.i64[1] = 17;
    v441.i64[2] = (__int64)v139;
    v441.i64[3] = 17;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v431, &v414, &v423);
    if ( v431.i64[0] == 0x8000000000000000LL )
    {
      v436 = *(_OWORD *)(v431.i64[1] + 32 * v431.i64[3] + 16);
      v140 = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3]);
      *((_QWORD *)&v435 + 1) = *(_QWORD *)(v431.i64[1] + 32 * v431.i64[3] + 8);
      *(_QWORD *)&v435 = v140;
      *(__m256i *)(v431.i64[1] + 32 * v431.i64[3]) = v441;
      if ( (_BYTE)v435 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v435);
    }
    else
    {
      v440 = v434;
      v439 = v433;
      v438 = v432;
      v437 = v431;
      v429 = v441;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v435,
        &v437,
        &v429);
    }
    v437.i64[1] = v414;
    v437.i128[1] = v415;
    v437.i8[0] = 5;
    v156 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                        "incomplete_detailsprompt_tokenscompletion_tokensinput_tokensoutput_tokens",
                        0x12u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v156);
    *v156 = v437;
  }
  *v393 = v428;
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v421);
  if ( 2 * v422 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v403, v422, 1);
  if ( v406 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v407, v406, 1);
  v157 = v418;
  for ( j = v419 + 1; j != 1; --j )
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v157);
    v157 += 32;
  }
  if ( v417 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v418, 32 * v417, 8);
  if ( __n )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst, __n, 1);
  if ( v390 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v390, 1);
  return v393;
}
