// __ZN13codexmate_lib4core5relay10translator46anthropic_to_responses_response_with_tool_maps @ 0x100829870 | 1.2.4 NEW-delta
// [FULL decompile]

__m256i *__fastcall codexmate_lib::core::relay::translator::anthropic_to_responses_response_with_tool_maps::h7195e0f2863af4aa(
        __m256i *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(); // rax
  __int64 v10; // rax
  signed __int64 v11; // rdx
  const void *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  char *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  signed __int64 v28; // rbx
  const void *v29; // r14
  __int64 v30; // r15
  void *v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r15
  _DWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _WORD *v40; // rax
  __m256i *v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  signed __int64 v50; // r14
  void *v51; // rbx
  __m128i v52; // xmm1
  __int64 v53; // rax
  const __m128i *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  bool v59; // bl
  void *v60; // r14
  const void *v61; // rsi
  size_t v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r15
  const char *v67; // rbx
  __m128i v68; // xmm1
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  size_t v73; // rdi
  __int64 v74; // r15
  void *v75; // r14
  const char *v76; // rsi
  size_t v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  _DWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  _DWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r15
  _DWORD *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r15
  _WORD *v100; // rax
  __m256i *v101; // rdi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rsi
  _DWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  _DWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r15
  __int64 v115; // rax
  __int64 v116; // r15
  _WORD *v117; // rax
  __m256i *v118; // rdi
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rsi
  _DWORD *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  _DWORD *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  void *v131; // rax
  __int8 v132; // bl
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  _DWORD *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  _DWORD *v139; // rax
  __int64 v140; // rcx
  __m256i *v141; // rbx
  __int64 v142; // rbx
  size_t v143; // r15
  __int64 v144; // rdx
  _WORD *v145; // rax
  unsigned __int64 v146; // rax
  __m128i v147; // xmm1
  char *i; // rdx
  size_t v149; // rax
  __m128i si128; // xmm2
  size_t v153; // rbx
  const void *v154; // rsi
  void *v155; // rdi
  __int64 v156; // rdx
  int v157; // eax
  bool v158; // zf
  void *v159; // rsi
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rbx
  _DWORD *v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  void *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  _WORD *v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r14
  __int64 v173; // rax
  __int64 v174; // rbx
  __int64 v175; // rbx
  _DWORD *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  void *v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  _WORD *v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r14
  __int64 v186; // rax
  __int64 v187; // rbx
  __int64 v188; // r15
  _DWORD *v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rcx
  _DWORD *v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // rax
  unsigned __int64 v202; // rbx
  size_t v203; // r15
  __int64 v204; // rdx
  __int64 v205; // rcx
  _DWORD *v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r15
  __int64 v210; // rax
  size_t v211; // rbx
  __int64 v212; // rdx
  __int64 v213; // rcx
  _DWORD *v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r14
  __int64 v218; // rax
  __int64 v219; // rbx
  size_t v220; // r15
  __int64 v221; // rdx
  __int64 v222; // rcx
  _DWORD *v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r15
  __int64 v227; // rax
  size_t v228; // rbx
  __int64 v229; // rdx
  __int64 v230; // rcx
  _DWORD *v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r15
  __int64 v235; // rax
  size_t v236; // rbx
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // rax
  _BYTE *v240; // rax
  __int64 *v241; // rax
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rax
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // rax
  unsigned __int64 v248; // rbx
  char *v249; // rax
  __int64 v250; // rcx
  __int64 v251; // r12
  size_t v252; // r15
  __int64 v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // r14
  __int64 v259; // rax
  __int64 v260; // rbx
  size_t v261; // r15
  __int64 v262; // rdx
  __int64 v263; // rcx
  __int64 v264; // rax
  __int64 v265; // rdx
  __int64 v266; // rcx
  __int64 v267; // rax
  unsigned __int64 v268; // rbx
  __int64 v269; // r12
  size_t v270; // rbx
  char *v271; // rdi
  void *v272; // rsi
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // r13
  _DWORD *v276; // rax
  __int64 v277; // rdx
  __int64 v278; // rcx
  _DWORD *v279; // rax
  __int64 v280; // rdx
  __int64 v281; // rcx
  _WORD *v282; // rax
  __int64 v283; // rdx
  __int64 v284; // rcx
  __int64 v285; // r15
  size_t v286; // r14
  __int64 v287; // r12
  __int64 v288; // rax
  __int64 v289; // r13
  size_t v290; // rsi
  __m256i *v291; // rdi
  __int128 *v292; // rsi
  __int64 v293; // rdx
  __int64 v294; // rcx
  _DWORD *v295; // rax
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // rax
  __int64 v299; // rdx
  __int64 v300; // rcx
  __int64 v301; // rax
  __int64 v302; // rdx
  __int64 v303; // rcx
  __int64 v304; // rax
  __int64 v305; // rdx
  __int64 v306; // rcx
  _DWORD *v307; // rax
  __int64 v308; // rdx
  __int64 v309; // rcx
  __int64 v310; // rax
  __int64 v311; // rdx
  __int64 v312; // rcx
  __int64 v313; // r13
  __int64 v314; // r14
  _DWORD *v315; // rax
  __int64 v316; // rdx
  __int64 v317; // rcx
  void *v318; // rax
  __int64 v319; // rdx
  __int64 v320; // rcx
  _DWORD *v321; // rax
  __int64 v322; // rdx
  __int64 v323; // rcx
  __int64 v324; // r15
  __int64 v325; // rax
  __int64 v326; // r14
  __int64 v327; // rdx
  __int64 v328; // rcx
  void *v329; // rax
  __int64 v330; // rbx
  void *v331; // rbx
  unsigned __int64 v332; // r14
  size_t v333; // r15
  __int64 v334; // r13
  __int64 v335; // rbx
  _QWORD *v336; // r14
  __int64 v337; // rsi
  __int64 v338; // rax
  __int64 v339; // r14
  __int64 v340; // rax
  __int64 v341; // rcx
  __int64 v342; // r12
  __int64 v343; // rax
  __int64 v344; // rcx
  __int64 v345; // r15
  __int64 v346; // rax
  __int64 v347; // rcx
  __int64 v348; // r13
  __int64 v349; // rax
  __int64 v350; // rdx
  __int64 v351; // rcx
  unsigned __int64 v352; // r14
  __int64 v353; // rbx
  void *v354; // rax
  unsigned __int64 v355; // r15
  __int64 v356; // rdx
  __int64 v357; // rcx
  void *v358; // rax
  __int64 v359; // rdx
  __int64 v360; // rcx
  void *v361; // rax
  unsigned __int64 v362; // r14
  __int64 v363; // rax
  __int64 v364; // rdx
  __int64 v365; // rcx
  __int64 v366; // r15
  const char *v367; // r13
  __m128i v368; // xmm0
  const char *v369; // rax
  __int64 v370; // rbx
  _WORD *v371; // rax
  __int64 v372; // rdx
  __int64 v373; // rcx
  __int64 v374; // rbx
  __int64 v375; // r13
  const char *v376; // r15
  __int64 v377; // rax
  __int64 v378; // r12
  __int64 v379; // rdx
  __int64 v380; // rcx
  __int64 v381; // rax
  __int64 v382; // rdx
  __int64 v383; // rcx
  _QWORD *v384; // rax
  __int64 v385; // rdx
  __int64 v386; // rcx
  void *v387; // rax
  int v388; // edx
  int v389; // ecx
  unsigned int v390; // ecx
  __int64 v391; // rdx
  __int64 v392; // rcx
  __int64 v393; // rax
  __int64 v394; // rdx
  __int64 v395; // rcx
  void *v396; // rax
  __int64 v397; // rbx
  __int64 v398; // rdx
  __int64 v399; // rcx
  __int64 v400; // r14
  __int64 v401; // rax
  __int64 v402; // rdx
  __int64 v403; // rcx
  __int64 v404; // rax
  size_t v405; // rbx
  __int64 v406; // rdx
  __int64 v407; // rcx
  __int64 v408; // rax
  __int64 v409; // rdx
  __int64 v410; // rcx
  void *v411; // rax
  __int64 v412; // rdx
  __int64 v413; // rcx
  __int64 v414; // rbx
  __int64 v415; // r12
  void *v416; // r15
  __int64 v417; // rax
  __int64 v418; // r14
  __int64 v419; // rdx
  __int64 v420; // rcx
  __int64 v421; // rax
  __int64 v422; // rdx
  __int64 v423; // r12
  __int64 v424; // rax
  __int64 v425; // rdx
  __int64 v426; // rcx
  void *v427; // rax
  __int64 v428; // r14
  __m256i *v429; // rbx
  __int64 v430; // rdx
  __int64 v431; // rcx
  __int64 v432; // rsi
  __int64 v433; // rdi
  __int64 j; // r14
  __int64 v436; // rax
  __int64 v437; // rax
  __int64 v438; // rax
  __int64 v439; // rax
  _QWORD v440[2]; // [rsp+20h] [rbp-310h] BYREF
  __m256i v441; // [rsp+30h] [rbp-300h]
  __int64 v442; // [rsp+50h] [rbp-2E0h]
  _QWORD *v443; // [rsp+58h] [rbp-2D8h]
  __int64 v444; // [rsp+60h] [rbp-2D0h]
  _QWORD v445[2]; // [rsp+68h] [rbp-2C8h] BYREF
  size_t v446; // [rsp+78h] [rbp-2B8h]
  __m128i v447; // [rsp+80h] [rbp-2B0h] BYREF
  __int128 v448; // [rsp+98h] [rbp-298h] BYREF
  __int64 v449; // [rsp+A8h] [rbp-288h]
  __int64 v450; // [rsp+B0h] [rbp-280h] BYREF
  __int64 v451; // [rsp+B8h] [rbp-278h]
  __m256i *v452; // [rsp+C0h] [rbp-270h]
  __int64 v453; // [rsp+C8h] [rbp-268h]
  void *v454[2]; // [rsp+D0h] [rbp-260h] BYREF
  size_t v455; // [rsp+E0h] [rbp-250h]
  __int64 v456; // [rsp+E8h] [rbp-248h] BYREF
  void *v457; // [rsp+F0h] [rbp-240h]
  size_t v458; // [rsp+F8h] [rbp-238h]
  __int64 v459; // [rsp+100h] [rbp-230h] BYREF
  __int64 v460; // [rsp+108h] [rbp-228h]
  __int64 v461; // [rsp+110h] [rbp-220h]
  __int64 v462; // [rsp+118h] [rbp-218h]
  __int64 v463; // [rsp+120h] [rbp-210h]
  void *__src; // [rsp+128h] [rbp-208h]
  size_t v465; // [rsp+130h] [rbp-200h]
  __int64 v466; // [rsp+138h] [rbp-1F8h] BYREF
  __int128 v467; // [rsp+140h] [rbp-1F0h]
  size_t v468; // [rsp+150h] [rbp-1E0h] BYREF
  __int128 v469; // [rsp+158h] [rbp-1D8h]
  int v470; // [rsp+16Ch] [rbp-1C4h]
  void *__dst; // [rsp+170h] [rbp-1C0h]
  __int64 v472; // [rsp+178h] [rbp-1B8h]
  size_t v473; // [rsp+180h] [rbp-1B0h]
  void *v474; // [rsp+188h] [rbp-1A8h]
  __int64 v475; // [rsp+190h] [rbp-1A0h] BYREF
  void *v476; // [rsp+198h] [rbp-198h]
  unsigned __int64 v477; // [rsp+1A0h] [rbp-190h]
  int v478; // [rsp+1ACh] [rbp-184h]
  size_t v479; // [rsp+1B0h] [rbp-180h]
  void *v480; // [rsp+1B8h] [rbp-178h]
  size_t v481; // [rsp+1C0h] [rbp-170h]
  size_t v482; // [rsp+1C8h] [rbp-168h]
  void *v483[2]; // [rsp+1D0h] [rbp-160h]
  void *v484; // [rsp+1E0h] [rbp-150h]
  __int64 v485; // [rsp+1E8h] [rbp-148h] BYREF
  __int64 v486; // [rsp+1F0h] [rbp-140h]
  __int64 v487; // [rsp+1F8h] [rbp-138h]
  size_t __n; // [rsp+200h] [rbp-130h]
  void *__s1; // [rsp+208h] [rbp-128h]
  size_t v490; // [rsp+210h] [rbp-120h]
  __int64 v491; // [rsp+218h] [rbp-118h] BYREF
  __int128 v492; // [rsp+220h] [rbp-110h]
  __int64 v493; // [rsp+230h] [rbp-100h]
  size_t v494; // [rsp+238h] [rbp-F8h]
  __m256i v495; // [rsp+240h] [rbp-F0h] BYREF
  __int128 v496; // [rsp+260h] [rbp-D0h] BYREF
  __int64 v497; // [rsp+270h] [rbp-C0h]
  _OWORD v498[2]; // [rsp+278h] [rbp-B8h] BYREF
  __m256i v499; // [rsp+298h] [rbp-98h] BYREF
  __m256i v500; // [rsp+2B8h] [rbp-78h] BYREF
  __m256i v501; // [rsp+2D8h] [rbp-58h] BYREF
  void *v502; // [rsp+2F8h] [rbp-38h]
  size_t v503; // [rsp+300h] [rbp-30h]

  v452 = a1;
  v493 = a2;
  v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("idassistant", 2, a2);
  if ( v6 && *(_BYTE *)v6 == 3 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v8 = *(_QWORD *)(v6 + 24);
    v500.i64[0] = v7;
    v500.i64[1] = v8;
    v501.i64[0] = (__int64)&v500;
    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446;
  }
  else
  {
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v500);
    v501.i64[0] = (__int64)&v500;
    v9 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
  }
  v501.i64[1] = (__int64)v9;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v445, &unk_1017CE3A5, &v501);
  v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_10167B74C, 5, v493);
  v12 = &unk_10167B83B;
  __n = 7;
  if ( !v10 || *(_BYTE *)v10 != 3 )
    goto LABEL_11;
  v11 = *(_QWORD *)(v10 + 24);
  __n = v11;
  if ( v11 < 0 )
  {
    v13 = 0;
    goto LABEL_9;
  }
  v12 = *(const void **)(v10 + 16);
  if ( !v11 )
  {
    __dst = (void *)1;
    v470 = 1;
    __n = 0;
  }
  else
  {
LABEL_11:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_10167B74C, 5, v11, 7);
    v13 = 1;
    __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    if ( !__dst )
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, __n);
    v470 = 0;
  }
  memcpy(__dst, v12, __n);
  v485 = 0;
  v486 = 8;
  v487 = 0;
  v456 = 0;
  v457 = (void *)1;
  v458 = 0;
  v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "contentpattern.output_modehead_limit",
          7,
          v493);
  if ( v14 && *(_BYTE *)v14 == 4 )
  {
    v459 = 0;
    v460 = 8;
    v461 = 0;
    v475 = 0;
    v476 = (void *)8;
    v477 = 0;
    v15 = *(_QWORD *)(v14 + 24);
    if ( v15 )
    {
      v444 = a3;
      v16 = *(char **)(v14 + 16);
      v484 = &v16[32 * v15];
      v473 = a4[3];
      v443 = a4 + 4;
      v17 = *a4;
      v479 = a4[1];
      v442 = v17;
      v18 = v17 - 24;
      *(__m128i *)v483 = _mm_unpacklo_epi64((__m128i)0x6465746361646572uLL, (__m128i)0x6E696B6E6968745FuLL);
      do
      {
        v21 = v18;
        v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &anon_22327b6004f579c0722d6ebc68f79196_45,
                4,
                v16);
        if ( v22 )
        {
          if ( *(_BYTE *)v22 == 3 )
          {
            v23 = *(_QWORD *)(v22 + 24) - 4LL;
            v24 = *(_QWORD *)(v22 + 16);
            switch ( v23 )
            {
              case 0LL:
                if ( *(_DWORD *)v24 != 1954047348 )
                  break;
                v25 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        &anon_22327b6004f579c0722d6ebc68f79196_146,
                        4,
                        v16);
                if ( !v25 )
                  goto LABEL_18;
                LOBYTE(v27) = *(_BYTE *)v25 != 3;
                v28 = *(_QWORD *)(v25 + 24);
                if ( (unsigned __int8)v27 | (v28 == 0) )
                  goto LABEL_18;
                if ( v28 < 0 )
                {
                  v30 = 0;
                  v290 = v455;
                  goto LABEL_336;
                }
                v29 = *(const void **)(v25 + 16);
                LOBYTE(v26) = v27 | (v28 == 0);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                  &anon_22327b6004f579c0722d6ebc68f79196_146,
                  4,
                  v26,
                  v27);
                v30 = 1;
                v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1);
                if ( !v31 )
                {
                  v290 = v28;
LABEL_336:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, v290);
                }
                v455 = (size_t)v31;
                memcpy(v31, v29, v28);
                v32 = v461;
                if ( v461 == v459 )
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v459);
                v19 = v460;
                v20 = 3 * v32;
                *(_QWORD *)(v460 + 8 * v20) = v28;
                *(_QWORD *)(v19 + 8 * v20 + 8) = v455;
                *(_QWORD *)(v19 + 8 * v20 + 16) = v28;
                v461 = v32 + 1;
                goto LABEL_18;
              case 4LL:
                if ( *(_QWORD *)v24 == 0x676E696B6E696874LL )
                  goto LABEL_60;
                if ( *(_QWORD *)v24 != 0x6573755F6C6F6F74LL )
                  break;
                v47 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "idassistant",
                        2,
                        v16);
                v50 = 12;
                if ( v47 )
                {
                  v51 = &unk_10167B6E6;
                  if ( *(_BYTE *)v47 == 3 )
                  {
                    v50 = *(_QWORD *)(v47 + 24);
                    if ( v50 < 0 )
                    {
                      v30 = 0;
                      v290 = (size_t)v480;
                      goto LABEL_336;
                    }
                    v51 = *(void **)(v47 + 16);
                    if ( !v50 )
                    {
                      v480 = (void *)1;
                      v478 = 1;
                      v494 = 0;
                      goto LABEL_71;
                    }
                  }
                }
                else
                {
                  v51 = &unk_10167B6E6;
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("idassistant", 2, v48, v49);
                v30 = 1;
                v494 = v50;
                v480 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v50, 1);
                if ( !v480 )
                {
                  v290 = v494;
                  goto LABEL_336;
                }
                v478 = 0;
LABEL_71:
                v60 = v480;
                v61 = v51;
                v62 = v494;
                memcpy(v480, v61, v494);
                v468 = v62;
                *(_QWORD *)&v469 = v60;
                *((_QWORD *)&v469 + 1) = v62;
                v63 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "nameetagfromlinkvaryIpv4Ipv6",
                        4,
                        v16);
                v66 = 4;
                if ( v63 )
                {
                  v67 = "toolseedPOSTalse";
                  if ( *(_BYTE *)v63 == 3 )
                  {
                    v66 = *(_QWORD *)(v63 + 24);
                    if ( v66 < 0 )
                    {
                      v74 = 0;
                      goto LABEL_364;
                    }
                    v67 = *(const char **)(v63 + 16);
                    if ( !v66 )
                    {
                      __s1 = (void *)1;
                      LODWORD(v472) = 1;
                      v490 = 0;
                      goto LABEL_83;
                    }
                  }
                }
                else
                {
                  v67 = "toolseedPOSTalse";
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                  "nameetagfromlinkvaryIpv4Ipv6",
                  4,
                  v64,
                  v65);
                v73 = v66;
                v74 = 1;
                v490 = v73;
                __s1 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v73, 1);
                if ( !__s1 )
                {
                  __s1 = (void *)v490;
LABEL_364:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v74, __s1);
                }
                LODWORD(v472) = 0;
LABEL_83:
                v75 = __s1;
                v76 = v67;
                v77 = v490;
                memcpy(__s1, v76, v490);
                v466 = v77;
                *(_QWORD *)&v467 = v75;
                *((_QWORD *)&v467 + 1) = v77;
                v78 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "inputYou have a web_search tool available.\n\nobjectpropertiesdescriptionparametersstrict",
                        5,
                        v16);
                if ( v78 )
                {
                  switch ( *(_BYTE *)v78 )
                  {
                    case 0:
                      v501.i8[0] = 0;
                      break;
                    case 1:
                    case 2:
                      v501.i128[1] = *(_OWORD *)(v78 + 16);
                      v79 = *(_QWORD *)v78;
                      v501.i64[1] = *(_QWORD *)(v78 + 8);
                      v501.i64[0] = v79;
                      break;
                    case 3:
                      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                        &v501.u32[2],
                        v78 + 8);
                      v501.i8[0] = 3;
                      break;
                    case 4:
                      _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h052fd23693ef7657(
                        &v501.u32[2],
                        *(_QWORD *)(v78 + 16),
                        *(_QWORD *)(v78 + 24));
                      v501.i8[0] = 4;
                      break;
                    case 5:
                      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf0fbdc42dc05e4e8(
                        &v501.u32[2],
                        v78 + 8);
                      v501.i8[0] = 5;
                      break;
                    case 6:
                      JUMPOUT(0x100C31513LL);
                  }
                  v495 = v501;
                  v501.i8[0] = 0;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                }
                else
                {
                  v501.i8[0] = 0;
                  v495 = v501;
                }
                v143 = v490;
                serde_json::ser::to_vec::hce27b880431b0e88(&v501, &v495);
                v462 = v501.i64[0];
                if ( __OFSUB__(-v501.i64[0], 1) )
                {
                  v501.i64[0] = v501.i64[1];
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v495, v144, v501.i64[1]);
                  v145 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                  if ( !v145 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
                  v463 = (__int64)v145;
                  *v145 = 32123;
                  core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc173bfdeee8b49ee(&v501);
                  v482 = 2;
                  v462 = 2;
                }
                else
                {
                  v482 = v501.u64[2];
                  v463 = v501.i64[1];
                }
                uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v501);
                v499.i128[0] = v501.i128[0];
                v500.i64[0] = (__int64)&v499;
                v500.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(&v501, &unk_1017CE38F, &v500);
                v453 = v501.i64[0];
                v481 = v501.u64[2];
                __src = (void *)v501.i64[1];
                if ( v143 == 11
                  && !(*(_QWORD *)__s1 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)((char *)__s1 + 3) ^ 0x6863726165735F6CLL) )
                {
                  v491 = 0;
                  *((_QWORD *)&v492 + 1) = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                    &v501,
                    &unk_1017CE38F,
                    0x6863726165735F6CLL,
                    0);
                  v188 = 4;
                  v189 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v189 )
                    goto LABEL_568;
                  *v189 = 1701869940;
                  *(_QWORD *)&v498[0] = 4;
                  *((_QWORD *)&v498[0] + 1) = v189;
                  *(_QWORD *)&v498[1] = 4;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197AB78);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AB88);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v491,
                    v498,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v491, v190, v191);
                  v188 = 7;
                  v192 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                  if ( !v192 )
                    goto LABEL_568;
                  *(_DWORD *)((char *)v192 + 3) = 1684627308;
                  *v192 = 1819042147;
                  *(_QWORD *)&v498[0] = 7;
                  *((_QWORD *)&v498[0] + 1) = v192;
                  *(_QWORD *)&v498[1] = 7;
                  serde_json::value::to_value::ha9c3f96699c4d616(&v501, &v468);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AB88);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v491,
                    v498,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v491, v193, v194);
                  v188 = 6;
                  v195 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                  if ( !v195 )
                    goto LABEL_568;
                  *(_WORD *)(v195 + 4) = 29557;
                  *(_DWORD *)v195 = 1952543859;
                  *(_QWORD *)&v498[0] = 6;
                  *((_QWORD *)&v498[0] + 1) = v195;
                  *(_QWORD *)&v498[1] = 6;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197A450);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AB88);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v491,
                    v498,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v491, v196, v197);
                  v188 = 9;
                  v198 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                  if ( !v198 )
                    goto LABEL_568;
                  *(_QWORD *)v198 = 0x6F69747563657865LL;
                  *(_BYTE *)(v198 + 8) = 110;
                  *(_QWORD *)&v498[0] = 9;
                  *((_QWORD *)&v498[0] + 1) = v198;
                  *(_QWORD *)&v498[1] = 9;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197ABA0);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AB88);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v491,
                    v498,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v491, v199, v200);
                  v201 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                  if ( !v201 )
LABEL_568:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v188);
                  *(_QWORD *)v201 = 0x746E656D75677261LL;
                  *(_BYTE *)(v201 + 8) = 115;
                  *(_QWORD *)&v496 = 9;
                  *((_QWORD *)&v496 + 1) = v201;
                  v497 = 9;
                  if ( v495.i8[0] == 5 )
                  {
                    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf0fbdc42dc05e4e8(
                      &v501,
                      &v495.u32[2]);
                    *(_OWORD *)((char *)v498 + 8) = *(__int128 *)((char *)v501.i128 + 8);
                    *(_QWORD *)&v498[0] = v501.i64[0];
                  }
                  else
                  {
                    *(_QWORD *)&v498[0] = 0;
                    *(_QWORD *)&v498[1] = 0;
                  }
                  serde_json::value::to_value::h7241c0a94e6aef77(&v501, v498);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AB88);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v491,
                    &v496,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8e96b41e31cf265e(v498);
                  v499.i128[1] = v492;
                  v499.i64[1] = v491;
                  v499.i8[0] = 5;
                  v202 = v477;
                  if ( v477 == v475 )
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v475);
                  *((__m256i *)v476 + v202) = v499;
                  v477 = v202 + 1;
LABEL_286:
                  v18 = v21;
                  goto LABEL_287;
                }
                if ( v473 )
                {
                  v146 = core::hash::BuildHasher::hash_one::hf03a628f6f42ad73(v443, &v466);
                  v147 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v146 >> 57), (__m128i)0LL);
                  for ( i = nullptr; ; i += 16 )
                  {
                    v149 = v479 & v146;
                    HIDWORD(_RCX) = HIDWORD(v442);
                    si128 = _mm_loadu_si128((const __m128i *)(v442 + v149));
                    _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(si128, v147));
                    if ( _R14D )
                      break;
LABEL_193:
                    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(si128, (__m128i)-1LL)) )
                      goto LABEL_195;
                    v146 = (unsigned __int64)&i[v149 + 16];
                  }
                  v447 = v147;
                  v474 = i;
                  *(__m128i *)v454 = si128;
                  while ( 1 )
                  {
                    __asm { tzcnt   ecx, r14d }
                    v153 = v149;
                    _RCX = -(__int64)(v479 & (v149 + _RCX));
                    if ( v143 == *(_QWORD *)(v21 + 24 * _RCX + 16) )
                    {
                      v154 = *(const void **)(v21 + 24 * _RCX + 8);
                      v155 = __s1;
                      if ( !memcmp(__s1, v154, v143) )
                        break;
                    }
                    v157 = _R14D - 1;
                    LOWORD(v157) = _R14D & (_R14D - 1);
                    v158 = (_WORD)v157 == 0;
                    _R14D = v157;
                    v149 = v153;
                    v147 = _mm_load_si128(&v447);
                    i = (char *)v474;
                    si128 = _mm_load_si128((const __m128i *)v454);
                    if ( v158 )
                      goto LABEL_193;
                  }
                  v491 = 0;
                  *((_QWORD *)&v492 + 1) = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v155, v154, v156, _RCX);
                  v175 = 4;
                  v176 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v176 )
                    goto LABEL_564;
                  *v176 = 1701869940;
                  v499.i64[0] = 4;
                  v499.i64[1] = (__int64)v176;
                  v499.i64[2] = 4;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v177, v178);
                  v179 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
                  if ( !v179 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
                  qmemcpy(v179, "custom_tool_call", 16);
                  v501.i8[0] = 3;
                  v501.i64[1] = 16;
                  v501.i64[2] = (__int64)v179;
                  v501.i64[3] = 16;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v500,
                    &v491,
                    &v499,
                    &v501);
                  if ( v500.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v491, v180, v181);
                  v175 = 2;
                  v182 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                  if ( !v182 )
                    goto LABEL_564;
                  *v182 = 25705;
                  v499.i64[0] = 2;
                  v499.i64[1] = (__int64)v182;
                  v499.i64[2] = 2;
                  if ( (v481 & 0x8000000000000000LL) != 0LL )
                  {
                    v185 = 0;
LABEL_515:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v185, v481);
                  }
                  if ( v481 )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1, v183, v184);
                    v185 = 1;
                    v186 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v481, 1);
                    if ( !v186 )
                      goto LABEL_515;
                    v187 = v186;
                  }
                  else
                  {
                    v187 = 1;
                  }
                  v220 = v481;
                  memcpy((void *)v187, __src, v481);
                  v501.i8[0] = 3;
                  v501.i64[1] = v220;
                  v501.i64[2] = v187;
                  v501.i64[3] = v220;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v500,
                    &v491,
                    &v499,
                    &v501);
                  if ( v500.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v491, v221, v222);
                  v175 = 7;
                  v223 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                  if ( !v223 )
                    goto LABEL_564;
                  *(_DWORD *)((char *)v223 + 3) = 1684627308;
                  *v223 = 1819042147;
                  v499.i64[0] = 7;
                  v499.i64[1] = (__int64)v223;
                  v499.i64[2] = 7;
                  v226 = 1;
                  if ( !(_BYTE)v478 )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v224, v225);
                    v227 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v494, 1);
                    if ( !v227 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v494);
                    v226 = v227;
                  }
                  v228 = v494;
                  memcpy((void *)v226, v480, v494);
                  v501.i8[0] = 3;
                  v501.i64[1] = v228;
                  v501.i64[2] = v226;
                  v501.i64[3] = v228;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v500,
                    &v491,
                    &v499,
                    &v501);
                  if ( v500.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v491, v229, v230);
                  v175 = 4;
                  v231 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v231 )
                    goto LABEL_564;
                  *v231 = 1701667182;
                  v499.i64[0] = 4;
                  v499.i64[1] = (__int64)v231;
                  v499.i64[2] = 4;
                  v234 = 1;
                  if ( !(_BYTE)v472 )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v232, v233);
                    v235 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v490, 1);
                    if ( !v235 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v490);
                    v234 = v235;
                  }
                  v236 = v490;
                  memcpy((void *)v234, __s1, v490);
                  v501.i8[0] = 3;
                  v501.i64[1] = v236;
                  v501.i64[2] = v234;
                  v501.i64[3] = v236;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v500,
                    &v491,
                    &v499,
                    &v501);
                  if ( v500.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v491, v237, v238);
                  v175 = 5;
                  v239 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                  if ( !v239 )
LABEL_564:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v175);
                  *(_BYTE *)(v239 + 4) = 116;
                  *(_DWORD *)v239 = 1970302569;
                  *(_QWORD *)&v496 = 5;
                  *((_QWORD *)&v496 + 1) = v239;
                  v497 = 5;
                  v240 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                    "inputYou have a web_search tool available.\n"
                                    "\n"
                                    "objectpropertiesdescriptionparametersstrict",
                                    5,
                                    &v495);
                  if ( v240
                    || (v240 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                          "patchsysteminstructions",
                                          5,
                                          &v495)) != nullptr )
                  {
                    if ( *v240 == 3 )
                    {
                      v241 = (__int64 *)(v240 + 8);
                      goto LABEL_273;
                    }
                    v499.i64[0] = 0;
                    *(__int128 *)((char *)v499.i128 + 8) = 1u;
                    v500.i64[2] = 1610612768;
                    v500.i64[0] = (__int64)&v499;
                    v500.i64[1] = (__int64)&off_10197B520;
                    if ( (unsigned __int8)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce(
                                            v240,
                                            &v500) )
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        &unk_10167D036,
                        55,
                        &v448,
                        &unk_10197B968,
                        &off_10197B550);
LABEL_275:
                    v501.i64[3] = v499.i64[2];
                    *(__int128 *)((char *)v501.i128 + 8) = v499.i128[0];
                  }
                  else
                  {
                    v241 = &v495.i64[1];
                    if ( v495.i8[0] != 3 )
                    {
                      v499.i64[0] = 0;
                      *(__int128 *)((char *)v499.i128 + 8) = 1u;
                      v500.i64[2] = 1610612768;
                      v500.i64[0] = (__int64)&v499;
                      v500.i64[1] = (__int64)&off_10197B520;
                      if ( (unsigned __int8)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce(
                                              &v495,
                                              &v500) )
                        core::result::unwrap_failed::h855bccc0ecc45c4f(
                          &unk_10167D036,
                          55,
                          &v448,
                          &unk_10197B968,
                          &off_10197B550);
                      goto LABEL_275;
                    }
LABEL_273:
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                      &v501.u32[2],
                      v241);
                  }
                  v501.i8[0] = 3;
                  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4(
                    &v500,
                    &v501);
                  if ( v500.i8[0] == 6 )
                  {
                    v499.i64[0] = v500.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v499,
                      &off_10197B9E8,
                      &off_10197AB60);
                  }
                  v499 = v500;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v500,
                    &v491,
                    &v496,
                    &v499);
                  if ( v500.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v491, v242, v243);
                  v175 = 6;
                  v244 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                  if ( !v244 )
                    goto LABEL_564;
                  *(_WORD *)(v244 + 4) = 29557;
                  *(_DWORD *)v244 = 1952543859;
                  v499.i64[0] = 6;
                  v499.i64[1] = v244;
                  v499.i64[2] = 6;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v245, v246);
                  v247 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                  if ( !v247 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
                  *(_QWORD *)v247 = 0x6574656C706D6F63LL;
                  *(_BYTE *)(v247 + 8) = 100;
                  v501.i8[0] = 3;
                  v501.i64[1] = 9;
                  v501.i64[2] = v247;
                  v501.i64[3] = 9;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v500,
                    &v491,
                    &v499,
                    &v501);
                  if ( v500.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                  v498[1] = v492;
                  *((_QWORD *)&v498[0] + 1) = v491;
                  LOBYTE(v498[0]) = 5;
                  v248 = v477;
                  if ( v477 == v475 )
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v475);
                  v249 = (char *)v476;
                  v250 = 32 * v248;
                  *(_OWORD *)((char *)v476 + v250 + 16) = v498[1];
                  *(_OWORD *)&v249[v250] = v498[0];
                  v477 = v248 + 1;
                  goto LABEL_286;
                }
LABEL_195:
                v159 = __s1;
                codexmate_lib::core::relay::translator::normalize_anthropic_tool_call_for_responses::h21049c27cd21ec33(
                  &v501,
                  __s1,
                  v143,
                  v463,
                  v482);
                v472 = v501.i64[0];
                v482 = v501.u64[2];
                v474 = (void *)v501.i64[1];
                v447.i64[0] = v501.i64[3];
                v454[0] = v502;
                v465 = v503;
                *(_QWORD *)&v496 = 0;
                v497 = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, v159, v160, v161);
                v162 = 4;
                v163 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v163 )
                  goto LABEL_559;
                *v163 = 1701869940;
                *(_QWORD *)&v498[0] = 4;
                *((_QWORD *)&v498[0] + 1) = v163;
                *(_QWORD *)&v498[1] = 4;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v164, v165);
                v166 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
                if ( !v166 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
                qmemcpy(v166, "function_call", 13);
                v501.i8[0] = 3;
                v501.i64[1] = 13;
                v501.i64[2] = (__int64)v166;
                v501.i64[3] = 13;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                  &v500,
                  &v496,
                  v498,
                  &v501);
                if ( v500.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v496, v167, v168);
                v162 = 2;
                v169 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                if ( !v169 )
                  goto LABEL_559;
                *v169 = 25705;
                *(_QWORD *)&v498[0] = 2;
                *((_QWORD *)&v498[0] + 1) = v169;
                *(_QWORD *)&v498[1] = 2;
                if ( (v481 & 0x8000000000000000LL) != 0LL )
                {
                  v172 = 0;
LABEL_513:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v172, v481);
                }
                if ( v481 )
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1, v170, v171);
                  v172 = 1;
                  v173 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v481, 1);
                  if ( !v173 )
                    goto LABEL_513;
                  v174 = v173;
                }
                else
                {
                  v174 = 1;
                }
                v203 = v481;
                memcpy((void *)v174, __src, v481);
                v501.i8[0] = 3;
                v501.i64[1] = v203;
                v501.i64[2] = v174;
                v501.i64[3] = v203;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                  &v500,
                  &v496,
                  v498,
                  &v501);
                if ( v500.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v496, v204, v205);
                v162 = 7;
                v206 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                if ( !v206 )
                  goto LABEL_559;
                *(_DWORD *)((char *)v206 + 3) = 1684627308;
                *v206 = 1819042147;
                *(_QWORD *)&v498[0] = 7;
                *((_QWORD *)&v498[0] + 1) = v206;
                *(_QWORD *)&v498[1] = 7;
                v209 = 1;
                if ( !(_BYTE)v478 )
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v207, v208);
                  v210 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v494, 1);
                  if ( !v210 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v494);
                  v209 = v210;
                }
                v211 = v494;
                memcpy((void *)v209, v480, v494);
                v501.i8[0] = 3;
                v501.i64[1] = v211;
                v501.i64[2] = v209;
                v501.i64[3] = v211;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                  &v500,
                  &v496,
                  v498,
                  &v501);
                if ( v500.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v496, v212, v213);
                v162 = 4;
                v214 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v214 )
                  goto LABEL_559;
                *v214 = 1701667182;
                *(_QWORD *)&v498[0] = 4;
                *((_QWORD *)&v498[0] + 1) = v214;
                *(_QWORD *)&v498[1] = 4;
                if ( (v482 & 0x8000000000000000LL) != 0LL )
                {
                  v217 = 0;
LABEL_517:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v217, v482);
                }
                if ( v482 )
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v215, v216);
                  v217 = 1;
                  v218 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v482, 1);
                  if ( !v218 )
                    goto LABEL_517;
                  v219 = v218;
                }
                else
                {
                  v219 = 1;
                }
                v252 = v482;
                memcpy((void *)v219, v474, v482);
                v501.i8[0] = 3;
                v501.i64[1] = v252;
                v501.i64[2] = v219;
                v501.i64[3] = v252;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                  &v500,
                  &v496,
                  v498,
                  &v501);
                if ( v500.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v496, v253, v254);
                v162 = 9;
                v255 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                if ( !v255 )
                  goto LABEL_559;
                *(_QWORD *)v255 = 0x746E656D75677261LL;
                *(_BYTE *)(v255 + 8) = 115;
                *(_QWORD *)&v498[0] = 9;
                *((_QWORD *)&v498[0] + 1) = v255;
                *(_QWORD *)&v498[1] = 9;
                if ( (v465 & 0x8000000000000000LL) != 0LL )
                {
                  v258 = 0;
LABEL_519:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v258, v465);
                }
                if ( v465 )
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1, v256, v257);
                  v258 = 1;
                  v259 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v465, 1);
                  if ( !v259 )
                    goto LABEL_519;
                  v260 = v259;
                }
                else
                {
                  v260 = 1;
                }
                v261 = v465;
                memcpy((void *)v260, v454[0], v465);
                v501.i8[0] = 3;
                v501.i64[1] = v261;
                v501.i64[2] = v260;
                v501.i64[3] = v261;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                  &v500,
                  &v496,
                  v498,
                  &v501);
                if ( v500.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v496, v262, v263);
                v162 = 6;
                v264 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                if ( !v264 )
LABEL_559:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v162);
                *(_WORD *)(v264 + 4) = 29557;
                *(_DWORD *)v264 = 1952543859;
                *(_QWORD *)&v498[0] = 6;
                *((_QWORD *)&v498[0] + 1) = v264;
                *(_QWORD *)&v498[1] = 6;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v265, v266);
                v267 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                if ( !v267 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
                *(_QWORD *)v267 = 0x6574656C706D6F63LL;
                *(_BYTE *)(v267 + 8) = 100;
                v501.i8[0] = 3;
                v501.i64[1] = 9;
                v501.i64[2] = v267;
                v501.i64[3] = 9;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                  &v500,
                  &v496,
                  v498,
                  &v501);
                if ( v500.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                v499.i64[3] = v497;
                *(__int128 *)((char *)v499.i128 + 8) = v496;
                v499.i8[0] = 5;
                codexmate_lib::core::relay::translator::add_namespace_for_mapped_tool::h2d6abd8556a6b736(
                  &v499,
                  v474,
                  v482,
                  v444);
                v501 = v499;
                v268 = v477;
                if ( v477 == v475 )
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v475);
                *((__m256i *)v476 + v268) = v501;
                v477 = v268 + 1;
                if ( v447.i64[0] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v454[0], v447.i64[0], 1);
                v18 = v21;
                if ( v472 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v474, v472, 1);
LABEL_287:
                v251 = v463;
                if ( v453 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v453, 1);
                if ( v462 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v251, v462, 1);
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v495);
                if ( v490 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v490, 1);
                if ( v494 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v480, v494, 1);
                break;
              case 11LL:
                if ( *(_QWORD *)v24 ^ 0x745F726576726573LL | *(_QWORD *)(v24 + 7) ^ 0x6573755F6C6F6F74LL )
                  break;
                v33 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "nameetagfromlinkvaryIpv4Ipv6",
                        4,
                        v16);
                if ( !v33 )
                  goto LABEL_18;
                if ( *(_BYTE *)v33 != 3 )
                  break;
                if ( *(_QWORD *)(v33 + 24) != 10 )
                  break;
                v34 = *(_QWORD *)(v33 + 16);
                v35 = *(_QWORD *)v34 ^ 0x726165735F626577LL;
                if ( v35 | *(unsigned __int16 *)(v34 + 8) ^ 0x6863LL )
                  break;
                *(_QWORD *)&v496 = 0;
                v497 = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                  "nameetagfromlinkvaryIpv4Ipv6",
                  4,
                  0x726165735F626577LL,
                  v35);
                v36 = 4;
                v37 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v37 )
                  goto LABEL_565;
                *v37 = 1701869940;
                *(_QWORD *)&v498[0] = 4;
                *((_QWORD *)&v498[0] + 1) = v37;
                *(_QWORD *)&v498[1] = 4;
                serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197AB38);
                if ( v501.i8[0] == 6 )
                {
                  v500.i64[0] = v501.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    &unk_10167D112,
                    43,
                    &v500,
                    &off_10197B9E8,
                    &off_10197AB48);
                }
                v500 = v501;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                  &v501,
                  &v496,
                  v498,
                  &v500);
                if ( v501.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v496, v38, v39);
                v36 = 2;
                v40 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                if ( !v40 )
                  goto LABEL_565;
                *v40 = 25705;
                v495.i64[0] = 2;
                v495.i64[1] = (__int64)v40;
                v495.i64[2] = 2;
                uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v501);
                v498[0] = v501.i128[0];
                v500.i64[0] = (__int64)v498;
                v500.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(&v501, &unk_1017CE451, &v500);
                *(_QWORD *)&v498[0] = v501.i64[0];
                *(_OWORD *)((char *)v498 + 8) = *(__int128 *)((char *)v501.i128 + 8);
                serde_json::value::to_value::ha9c3f96699c4d616(&v501, v498);
                if ( v501.i8[0] == 6 )
                {
                  v500.i64[0] = v501.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    &unk_10167D112,
                    43,
                    &v500,
                    &off_10197B9E8,
                    &off_10197AB48);
                }
                v500 = v501;
                v41 = &v501;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                  &v501,
                  &v496,
                  &v495,
                  &v500);
                if ( v501.i8[0] != 6 )
                {
                  v41 = &v501;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                }
                v44 = *(_QWORD *)&v498[0];
                if ( *(_QWORD *)&v498[0] )
                {
                  v41 = *((__m256i **)&v498[0] + 1);
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v498[0] + 1), *(_QWORD *)&v498[0], 1);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v44, v42, v43);
                v36 = 6;
                v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                if ( !v45 )
LABEL_565:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v36);
                *(_WORD *)(v45 + 4) = 29557;
                *(_DWORD *)v45 = 1952543859;
                *(_QWORD *)&v498[0] = 6;
                *((_QWORD *)&v498[0] + 1) = v45;
                *(_QWORD *)&v498[1] = 6;
                serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197A450);
                if ( v501.i8[0] == 6 )
                {
                  v500.i64[0] = v501.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    &unk_10167D112,
                    43,
                    &v500,
                    &off_10197B9E8,
                    &off_10197AB48);
                }
                v500 = v501;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                  &v501,
                  &v496,
                  v498,
                  &v500);
                if ( v501.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                v499.i64[3] = v497;
                *(__int128 *)((char *)v499.i128 + 8) = v496;
                v499.i8[0] = 5;
                v46 = v487;
                if ( v487 == v485 )
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v485);
                *(__m256i *)(v486 + 32 * v46) = v499;
                v487 = v46 + 1;
                goto LABEL_18;
              case 13LL:
                v52 = _mm_or_si128(
                        _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v24 + 16)), (__m128i)xmmword_101665E80),
                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)v24), *(__m128i *)v483));
                if ( !_mm_testz_si128(v52, v52) )
                  break;
LABEL_60:
                v53 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        &anon_22327b6004f579c0722d6ebc68f79196_45,
                        4,
                        v16);
                if ( !v53 || *(_BYTE *)v53 != 3 )
                  goto LABEL_18;
                v54 = *(const __m128i **)(v53 + 16);
                v55 = *(_QWORD *)(v53 + 24);
                if ( v55 == 17 )
                {
                  v68 = _mm_or_si128(
                          _mm_xor_si128(_mm_cvtsi32_si128(v54[1].u8[0]), (__m128i)xmmword_101665E80),
                          _mm_xor_si128(_mm_loadu_si128(v54), *(__m128i *)v483));
                  if ( !_mm_testz_si128(v68, v68) )
                    goto LABEL_18;
                  v69 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                          "dataunittypefullopenwithargskindsavetrueuuidemithideshow",
                          4,
                          v16);
                  v71 = 1;
                  if ( v69 && *(_BYTE *)v69 == 3 )
                  {
                    v71 = *(_QWORD *)(v69 + 16);
                    v72 = *(_QWORD *)(v69 + 24);
                  }
                  else
                  {
                    v72 = 0;
                  }
                  v468 = v71;
                  *(_QWORD *)&v469 = v72;
                  v495.i64[0] = 0;
                  v495.i64[2] = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                    "dataunittypefullopenwithargskindsavetrueuuidemithideshow",
                    4,
                    v70,
                    v71);
                  v84 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v84 )
                    goto LABEL_571;
                  *v84 = 1701869940;
                  *(_QWORD *)&v498[0] = 4;
                  *((_QWORD *)&v498[0] + 1) = v84;
                  *(_QWORD *)&v498[1] = 4;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197ABC8);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC18);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v495,
                    v498,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v495, v85, v86);
                  v87 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v87 )
LABEL_571:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                  *v87 = 1635017060;
                  *(_QWORD *)&v498[0] = 4;
                  *((_QWORD *)&v498[0] + 1) = v87;
                  *(_QWORD *)&v498[1] = 4;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &v468);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC18);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v495,
                    v498,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  v499.i128[1] = *(__int128 *)((char *)v495.i128 + 8);
                  v499.i64[1] = v495.i64[0];
                  v499.i8[0] = 5;
                  codexmate_lib::core::relay::translator::encode_anthropic_thinking_payload::hb419f76efb63f5cd(
                    &v501,
                    &v499);
                  if ( __OFSUB__(0, v501.i64[0]) )
                  {
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v499);
                    goto LABEL_18;
                  }
                  v467 = *(__int128 *)((char *)v501.i128 + 8);
                  v466 = v501.i64[0];
                  v491 = 0;
                  *((_QWORD *)&v492 + 1) = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v499, v88, v501.i64[1]);
                  v116 = 2;
                  v117 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                  if ( !v117 )
                    goto LABEL_570;
                  *v117 = 25705;
                  *(_QWORD *)&v496 = 2;
                  *((_QWORD *)&v496 + 1) = v117;
                  v497 = 2;
                  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v501);
                  v495.i128[0] = v501.i128[0];
                  v500.i64[0] = (__int64)&v495;
                  v500.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v501, &unk_1017CE382, &v500);
                  v495.i64[0] = v501.i64[0];
                  *(__int128 *)((char *)v495.i128 + 8) = *(__int128 *)((char *)v501.i128 + 8);
                  serde_json::value::to_value::ha9c3f96699c4d616(&v501, &v495);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC30);
                  }
                  v500 = v501;
                  v118 = &v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v491,
                    &v496,
                    &v500);
                  if ( v501.i8[0] != 6 )
                  {
                    v118 = &v501;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  }
                  v121 = v495.i64[0];
                  if ( v495.i64[0] )
                  {
                    v118 = (__m256i *)v495.i64[1];
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v495.i64[1], v495.i64[0], 1);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v118, v121, v119, v120);
                  v116 = 4;
                  v122 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v122 )
                    goto LABEL_570;
                  *v122 = 1701869940;
                  v495.i64[0] = 4;
                  v495.i64[1] = (__int64)v122;
                  v495.i64[2] = 4;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197A428);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC30);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v491,
                    &v495,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v491, v123, v124);
                  v116 = 6;
                  v125 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                  if ( !v125 )
                    goto LABEL_570;
                  *(_WORD *)(v125 + 4) = 29557;
                  *(_DWORD *)v125 = 1952543859;
                  v495.i64[0] = 6;
                  v495.i64[1] = v125;
                  v495.i64[2] = 6;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197A450);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC30);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v491,
                    &v495,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v491, v126, v127);
                  v116 = 7;
                  v128 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                  if ( !v128 )
                    goto LABEL_570;
                  *(_DWORD *)((char *)v128 + 3) = 2037539181;
                  *v128 = 1835890035;
                  v495.i64[0] = 7;
                  v495.i64[1] = (__int64)v128;
                  v495.i64[2] = 7;
                  v501.i64[1] = 0;
                  v501.i128[1] = 8u;
                  v501.i8[0] = 4;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v500,
                    &v491,
                    &v495,
                    &v501);
                  if ( v500.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v491, v129, v130);
                  v116 = 17;
                  v131 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
                  if ( !v131 )
LABEL_570:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v116);
                  qmemcpy(v131, "encrypted_content", 17);
                  v495.i64[0] = 17;
                  v495.i64[1] = (__int64)v131;
                  v495.i64[2] = 17;
                  serde_json::value::to_value::ha9c3f96699c4d616(&v501, &v466);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC30);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v491,
                    &v495,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  *(_OWORD *)((char *)v498 + 15) = v492;
                  *(_QWORD *)((char *)v498 + 7) = v491;
                  v501.i64[0] = *(_QWORD *)&v498[0];
                  *(__int128 *)((char *)v501.i128 + 8) = *(_OWORD *)((char *)v498 + 8);
                  *(__int64 *)((char *)&v501.i64[2] + 7) = *((_QWORD *)&v492 + 1);
                  if ( v466 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v467, v466, 1);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v499);
                  v132 = 5;
LABEL_172:
                  v441.i8[0] = v132;
                  v441.i64[3] = *(__int64 *)((char *)&v501.i64[2] + 7);
                  *(__int128 *)((char *)v441.i128 + 9) = *(__int128 *)((char *)v501.i128 + 8);
                  *(__int64 *)((char *)v441.i64 + 1) = v501.i64[0];
                  v142 = v487;
                  if ( v487 == v485 )
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v485);
                  *(__m256i *)(v486 + 32 * v142) = v441;
                  v487 = v142 + 1;
                  goto LABEL_18;
                }
                if ( v55 == 8 && v54->i64[0] == 0x676E696B6E696874LL )
                {
                  v56 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                          &unk_101666470,
                          8,
                          v16);
                  if ( v56 && *(_BYTE *)v56 == 3 )
                  {
                    v57 = *(_QWORD *)(v56 + 16);
                    v58 = *(_QWORD *)(v56 + 24);
                    v450 = v57;
                    v451 = v58;
                    v59 = v58 == 0;
                  }
                  else
                  {
                    v450 = 1;
                    v451 = 0;
                    v59 = 1;
                  }
                  v80 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                          "signature/v1/messages/v1/chat/completions/v1/responses[AiMaMi][codex-router] upstream client rebuilt after network failure (re-read system proxy)codexmate_lib::core::relay::proxy_server",
                          9,
                          v16);
                  v82 = 1;
                  LOBYTE(v494) = v59;
                  if ( v80 && *(_BYTE *)v80 == 3 )
                  {
                    v82 = *(_QWORD *)(v80 + 16);
                    v83 = *(_QWORD *)(v80 + 24);
                  }
                  else
                  {
                    v83 = 0;
                  }
                  v440[0] = v82;
                  v440[1] = v83;
                  *(_QWORD *)&v498[0] = 0;
                  *(_QWORD *)&v498[1] = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                    "signature/v1/messages/v1/chat/completions/v1/responses[AiMaMi][codex-router] upstream client rebuilt after network failure (re-read system proxy)codexmate_lib::core::relay::proxy_server",
                    9,
                    v81,
                    v82);
                  v89 = 4;
                  v90 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v90 )
                    goto LABEL_569;
                  *v90 = 1701869940;
                  v499.i64[0] = 4;
                  v499.i64[1] = (__int64)v90;
                  v499.i64[2] = 4;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197ABF0);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC48);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    v498,
                    &v499,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, v498, v91, v92);
                  v89 = 8;
                  v93 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                  if ( !v93 )
                    goto LABEL_569;
                  *v93 = 0x676E696B6E696874LL;
                  v499.i64[0] = 8;
                  v499.i64[1] = (__int64)v93;
                  v499.i64[2] = 8;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &v450);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC48);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    v498,
                    &v499,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, v498, v94, v95);
                  v89 = 9;
                  v96 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                  if ( !v96 )
LABEL_569:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v89);
                  *(_QWORD *)v96 = 0x727574616E676973LL;
                  *(_BYTE *)(v96 + 8) = 101;
                  v499.i64[0] = 9;
                  v499.i64[1] = v96;
                  v499.i64[2] = 9;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, v440);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC48);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    v498,
                    &v499,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  v495.i64[3] = *(_QWORD *)&v498[1];
                  *(__int128 *)((char *)v495.i128 + 8) = v498[0];
                  v495.i8[0] = 5;
                  codexmate_lib::core::relay::translator::encode_anthropic_thinking_payload::hb419f76efb63f5cd(
                    &v448,
                    &v495);
                  v468 = 0;
                  *((_QWORD *)&v469 + 1) = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v448, &v495, v97, v98);
                  v99 = 2;
                  v100 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                  if ( !v100 )
                    goto LABEL_566;
                  *v100 = 25705;
                  *(_QWORD *)&v496 = 2;
                  v490 = (size_t)v100;
                  *((_QWORD *)&v496 + 1) = v100;
                  v497 = 2;
                  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v501);
                  v499.i128[0] = v501.i128[0];
                  v500.i64[0] = (__int64)&v499;
                  v500.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v501, &unk_1017CE382, &v500);
                  v499.i64[0] = v501.i64[0];
                  *(__int128 *)((char *)v499.i128 + 8) = *(__int128 *)((char *)v501.i128 + 8);
                  serde_json::value::to_value::ha9c3f96699c4d616(&v501, &v499);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC60);
                  }
                  v500 = v501;
                  v101 = &v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v468,
                    &v496,
                    &v500);
                  if ( v501.i8[0] != 6 )
                  {
                    v101 = &v501;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  }
                  v104 = v499.i64[0];
                  if ( v499.i64[0] )
                  {
                    v101 = (__m256i *)v499.i64[1];
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v499.i64[1], v499.i64[0], 1);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v101, v104, v102, v103);
                  v99 = 4;
                  v105 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v105 )
                    goto LABEL_566;
                  *v105 = 1701869940;
                  v499.i64[0] = 4;
                  v499.i64[1] = (__int64)v105;
                  v499.i64[2] = 4;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197A428);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC60);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v468,
                    &v499,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v468, v106, v107);
                  v99 = 6;
                  v108 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                  if ( !v108 )
                    goto LABEL_566;
                  *(_WORD *)(v108 + 4) = 29557;
                  *(_DWORD *)v108 = 1952543859;
                  v499.i64[0] = 6;
                  v499.i64[1] = v108;
                  v499.i64[2] = 6;
                  serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197A450);
                  if ( v501.i8[0] == 6 )
                  {
                    v500.i64[0] = v501.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v500,
                      &off_10197B9E8,
                      &off_10197AC60);
                  }
                  v500 = v501;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v501,
                    &v468,
                    &v499,
                    &v500);
                  if ( v501.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v468, v109, v110);
                  v99 = 7;
                  v111 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                  if ( !v111 )
LABEL_566:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v99);
                  *(_DWORD *)((char *)v111 + 3) = 2037539181;
                  *v111 = 1835890035;
                  v466 = 7;
                  *(_QWORD *)&v467 = v111;
                  *((_QWORD *)&v467 + 1) = 7;
                  if ( (_BYTE)v494 )
                  {
                    v114 = 8;
                    v115 = 0;
                  }
                  else
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v112, v113);
                    v133 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                    if ( !v133 )
                      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                    v114 = v133;
                    v491 = 0;
                    *((_QWORD *)&v492 + 1) = 0;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8, v134, v135);
                    v136 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                    if ( !v136 )
                      goto LABEL_576;
                    *v136 = 1701869940;
                    *(_QWORD *)&v496 = 4;
                    *((_QWORD *)&v496 + 1) = v136;
                    v497 = 4;
                    serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &off_10197A460);
                    if ( v501.i8[0] == 6 )
                    {
                      v500.i64[0] = v501.i64[1];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        &unk_10167D112,
                        43,
                        &v500,
                        &off_10197B9E8,
                        &off_10197AC78);
                    }
                    v500 = v501;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                      &v501,
                      &v491,
                      &v496,
                      &v500);
                    if ( v501.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v491, v137, v138);
                    v139 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                    if ( !v139 )
LABEL_576:
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                    *v139 = 1954047348;
                    *(_QWORD *)&v496 = 4;
                    *((_QWORD *)&v496 + 1) = v139;
                    v497 = 4;
                    serde_json::value::to_value::hb3d255fe20bc7a30(&v501, &v450);
                    if ( v501.i8[0] == 6 )
                    {
                      v500.i64[0] = v501.i64[1];
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        &unk_10167D112,
                        43,
                        &v500,
                        &off_10197B9E8,
                        &off_10197AC78);
                    }
                    v500 = v501;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                      &v501,
                      &v491,
                      &v496,
                      &v500);
                    if ( v501.i8[0] != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                    v501.i64[0] = v491;
                    *(__int128 *)((char *)v501.i128 + 8) = v492;
                    *(__int128 *)((char *)v499.i128 + 15) = v492;
                    *(__int64 *)((char *)v499.i64 + 7) = v491;
                    *(_BYTE *)v114 = 5;
                    v140 = v499.i64[1];
                    *(_QWORD *)(v114 + 1) = v499.i64[0];
                    *(_OWORD *)(v114 + 9) = __PAIR128__(v499.u64[2], v140);
                    *(_QWORD *)(v114 + 24) = *(__int64 *)((char *)&v499.i64[2] + 7);
                    v115 = 1;
                  }
                  v501.i64[1] = v115;
                  v501.i64[2] = v114;
                  v501.i64[3] = v115;
                  v501.i8[0] = 4;
                  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4(
                    &v500,
                    &v501);
                  if ( v500.i8[0] == 6 )
                  {
                    v499.i64[0] = v500.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_10167D112,
                      43,
                      &v499,
                      &off_10197B9E8,
                      &off_10197AC60);
                  }
                  v499 = v500;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(
                    &v500,
                    &v468,
                    &v466,
                    &v499);
                  if ( v500.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
                  v498[1] = v469;
                  *((_QWORD *)&v498[0] + 1) = v468;
                  LOBYTE(v498[0]) = 5;
                  v132 = 5;
                  if ( !__OFSUB__(0, (_QWORD)v448) )
                  {
                    v501.i64[3] = v449;
                    *(__int128 *)((char *)v501.i128 + 8) = v448;
                    v501.i8[0] = 3;
                    v141 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                        "encrypted_contentsignature/v1/messages/v1/chat/completions/v1/responses[AiMaMi][codex-router] upstream client rebuilt after network failure (re-read system proxy)codexmate_lib::core::relay::proxy_server",
                                        0x11u);
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v141);
                    *v141 = v501;
                    v132 = v498[0];
                  }
                  *(__int64 *)((char *)&v501.i64[2] + 7) = *((_QWORD *)&v498[1] + 1);
                  *(__int128 *)((char *)v501.i128 + 8) = *(_OWORD *)((char *)v498 + 9);
                  v501.i64[0] = *(_QWORD *)((char *)v498 + 1);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v495);
                  if ( v132 != 6 )
                    goto LABEL_172;
                }
                goto LABEL_18;
              default:
                break;
            }
          }
        }
        else
        {
LABEL_18:
          v18 = v21;
        }
        v16 += 32;
      }
      while ( v16 != v484 );
      if ( v461 )
      {
        alloc::str::join_generic_copy::h1b385c7941ba5aef(
          &v501,
          v460,
          v461,
          "\n"
          "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)",
          1);
        v479 = v501.i64[0];
        v269 = v501.i64[2];
        v484 = (void *)v501.i64[1];
        v270 = v458;
        if ( v501.i64[2] > v456 - v458 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
            &v456,
            v458,
            v501.i64[2],
            1,
            1);
          v270 = v458;
        }
        v271 = (char *)v457 + v270;
        v272 = v484;
        memcpy((char *)v457 + v270, v484, v269);
        v458 = v269 + v270;
        *(_QWORD *)&v496 = 0;
        v497 = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v271, v272, v273, v274);
        v275 = 4;
        v276 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v276 )
          goto LABEL_553;
        *v276 = 1701869940;
        v499.i64[0] = 4;
        v499.i64[1] = (__int64)v276;
        v499.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v277, v278);
        v279 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v279 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
        *(_DWORD *)((char *)v279 + 3) = 1701273971;
        *v279 = 1936942445;
        v501.i8[0] = 3;
        v501.i64[1] = 7;
        v501.i64[2] = (__int64)v279;
        v501.i64[3] = 7;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v496, &v499, &v501);
        if ( v500.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v496, v280, v281);
        v275 = 2;
        v282 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
        if ( !v282 )
          goto LABEL_553;
        *v282 = 25705;
        v499.i64[0] = 2;
        v499.i64[1] = (__int64)v282;
        v499.i64[2] = 2;
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v501);
        v498[0] = v501.i128[0];
        v500.i64[0] = (__int64)v498;
        v500.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v501, &unk_1017CE388, &v500);
        v285 = v501.i64[0];
        v286 = v501.u64[2];
        v483[0] = (void *)v501.i64[1];
        if ( v501.i64[2] < 0 )
        {
          v287 = 0;
          goto LABEL_330;
        }
        if ( v501.i64[2] )
        {
          v473 = v269;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &unk_1017CE388, v283, v284);
          v287 = 1;
          v288 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v286, 1);
          if ( !v288 )
LABEL_330:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v287, v286);
          v289 = v288;
          v269 = v473;
        }
        else
        {
          v289 = 1;
        }
        memcpy((void *)v289, v483[0], v286);
        v501.i8[0] = 3;
        v501.i64[1] = v286;
        v501.i64[2] = v289;
        v501.i64[3] = v286;
        v291 = &v500;
        v292 = &v496;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v496, &v499, &v501);
        if ( v500.i8[0] != 6 )
        {
          v291 = &v500;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
        }
        if ( v285 )
        {
          v291 = (__m256i *)v483[0];
          v292 = (__int128 *)v285;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v483[0], v285, 1);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v291, v292, v293, v294);
        v275 = 4;
        v295 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v295 )
          goto LABEL_553;
        *v295 = 1701605234;
        v499.i64[0] = 4;
        v499.i64[1] = (__int64)v295;
        v499.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v296, v297);
        v298 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
        if ( !v298 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
        *(_QWORD *)v298 = 0x6E61747369737361LL;
        *(_BYTE *)(v298 + 8) = 116;
        v501.i8[0] = 3;
        v501.i64[1] = 9;
        v501.i64[2] = v298;
        v501.i64[3] = 9;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v496, &v499, &v501);
        if ( v500.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v496, v299, v300);
        v275 = 6;
        v301 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v301 )
          goto LABEL_553;
        *(_WORD *)(v301 + 4) = 29557;
        *(_DWORD *)v301 = 1952543859;
        v499.i64[0] = 6;
        v499.i64[1] = v301;
        v499.i64[2] = 6;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v302, v303);
        v304 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
        if ( !v304 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
        *(_QWORD *)v304 = 0x6574656C706D6F63LL;
        *(_BYTE *)(v304 + 8) = 100;
        v501.i8[0] = 3;
        v501.i64[1] = 9;
        v501.i64[2] = v304;
        v501.i64[3] = 9;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v496, &v499, &v501);
        if ( v500.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v496, v305, v306);
        v275 = 7;
        v307 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v307 )
LABEL_553:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v275);
        *(_DWORD *)((char *)v307 + 3) = 1953391988;
        *v307 = 1953394531;
        v495.i64[0] = 7;
        v483[0] = v307;
        v495.i64[1] = (__int64)v307;
        v495.i64[2] = 7;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v308, v309);
        v310 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
        if ( !v310 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
        v313 = v310;
        *(_QWORD *)&v498[0] = 0;
        *(_QWORD *)&v498[1] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8, v311, v312);
        v314 = 4;
        v315 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v315 )
          goto LABEL_557;
        *v315 = 1701869940;
        v499.i64[0] = 4;
        v499.i64[1] = (__int64)v315;
        v499.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v316, v317);
        v318 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
        if ( !v318 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
        qmemcpy(v318, "output_text", 11);
        v501.i8[0] = 3;
        v501.i64[1] = 11;
        v501.i64[2] = (__int64)v318;
        v501.i64[3] = 11;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, v498, &v499, &v501);
        if ( v500.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, v498, v319, v320);
        v321 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v321 )
          goto LABEL_557;
        *v321 = 1954047348;
        v499.i64[0] = 4;
        v499.i64[1] = (__int64)v321;
        v499.i64[2] = 4;
        if ( v269 < 0 )
        {
          v324 = 0;
          goto LABEL_359;
        }
        if ( v269 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v322, v323);
          v324 = 1;
          v325 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v269, 1);
          if ( !v325 )
LABEL_359:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v324, v269);
          v326 = v325;
        }
        else
        {
          v326 = 1;
        }
        memcpy((void *)v326, v484, v269);
        v501.i8[0] = 3;
        v501.i64[1] = v269;
        v501.i64[2] = v326;
        v501.i64[3] = v269;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, v498, &v499, &v501);
        if ( v500.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, v498, v327, v328);
        v314 = 11;
        v329 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
        if ( !v329 )
LABEL_557:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v314);
        qmemcpy(v329, "annotations", 11);
        v499.i64[0] = 11;
        v499.i64[1] = (__int64)v329;
        v499.i64[2] = 11;
        v501.i64[1] = 0;
        v501.i128[1] = 8u;
        v501.i8[0] = 4;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, v498, &v499, &v501);
        if ( v500.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
        *(__int128 *)((char *)v501.i128 + 7) = v498[0];
        *(__int64 *)((char *)&v501.i64[2] + 7) = *(_QWORD *)&v498[1];
        *(_BYTE *)v313 = 5;
        *(_QWORD *)(v313 + 24) = *(__int64 *)((char *)&v501.i64[2] + 7);
        *(_QWORD *)(v313 + 17) = v501.i64[2];
        *(_OWORD *)(v313 + 1) = v501.i128[0];
        v501.i64[1] = 1;
        v501.i64[2] = v313;
        v501.i64[3] = 1;
        v501.i8[0] = 4;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v496, &v495, &v501);
        if ( v500.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
        *(__int128 *)((char *)v501.i128 + 8) = v496;
        v501.i64[3] = v497;
        v501.i8[0] = 5;
        v330 = v487;
        if ( v487 == v485 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v485);
        *(__m256i *)(v486 + 32 * v330) = v501;
        v487 = v330 + 1;
        if ( v479 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v484, v479, 1);
      }
    }
    v331 = v476;
    v332 = v477;
    v333 = 32 * v477;
    v501.i64[0] = (__int64)v476;
    v501.i64[2] = v475;
    v501.i64[1] = (__int64)v476;
    v501.i64[3] = (__int64)v476 + 32 * v477;
    v334 = v487;
    if ( v477 > v485 - v487 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(&v485, v487, v477, 8, 32);
      v334 = v487;
    }
    memcpy((void *)(v486 + 32 * v334), v331, v333);
    v487 = v334 + v332;
    v501.i64[3] = (__int64)v331;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he78e36ca37a8346e(&v501);
    v335 = v461;
    if ( v461 )
    {
      v336 = (_QWORD *)(v460 + 8);
      do
      {
        v337 = *(v336 - 1);
        if ( v337 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v336, v337, 1);
        v336 += 3;
        --v335;
      }
      while ( v335 );
    }
    if ( v459 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v460, 24 * v459, 8);
  }
  v338 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("usage", 5, v493);
  v339 = v338;
  if ( v338 )
  {
    v340 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "input_tokensoutput_tokens",
             12,
             v338);
    if ( v340 && *(_BYTE *)v340 == 2 && (v341 = *(_QWORD *)(v340 + 8), v341 != 2) )
    {
      if ( (_DWORD)v341 == 1 )
      {
        v342 = *(_QWORD *)(v340 + 16);
      }
      else
      {
        v436 = *(_QWORD *)(v340 + 16);
        v342 = 0;
        if ( v436 > 0 )
          v342 = v436;
      }
    }
    else
    {
      v342 = 0;
    }
    v343 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "cache_read_input_tokenscache_creation_input_tokensencrypted_contentsignature/v1/messages/v1/chat/completions/v1/responses[AiMaMi][codex-router] upstream client rebuilt after network failure (re-read system proxy)codexmate_lib::core::relay::proxy_server",
             23,
             v339);
    if ( v343 && *(_BYTE *)v343 == 2 && (v344 = *(_QWORD *)(v343 + 8), v344 != 2) )
    {
      if ( (_DWORD)v344 == 1 )
      {
        v345 = *(_QWORD *)(v343 + 16);
      }
      else
      {
        v437 = *(_QWORD *)(v343 + 16);
        v345 = 0;
        if ( v437 > 0 )
          v345 = v437;
      }
    }
    else
    {
      v345 = 0;
    }
    v346 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "cache_creation_input_tokensencrypted_contentsignature/v1/messages/v1/chat/completions/v1/responses[AiMaMi][codex-router] upstream client rebuilt after network failure (re-read system proxy)codexmate_lib::core::relay::proxy_server",
             27,
             v339);
    if ( v346 && *(_BYTE *)v346 == 2 && (v347 = *(_QWORD *)(v346 + 8), v347 != 2) )
    {
      if ( (_DWORD)v347 == 1 )
      {
        v348 = *(_QWORD *)(v346 + 16);
      }
      else
      {
        v438 = *(_QWORD *)(v346 + 16);
        v348 = 0;
        if ( v438 > 0 )
          v348 = v438;
      }
    }
    else
    {
      v348 = 0;
    }
    v349 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "output_tokens",
             13,
             v339);
    if ( v349 && *(_BYTE *)v349 == 2 && (v351 = *(_QWORD *)(v349 + 8), v351 != 2) )
    {
      if ( (_DWORD)v351 == 1 )
      {
        v352 = *(_QWORD *)(v349 + 16);
      }
      else
      {
        v439 = *(_QWORD *)(v349 + 16);
        v352 = 0;
        if ( v439 > 0 )
          v352 = v439;
      }
    }
    else
    {
      v352 = 0;
    }
    *(_QWORD *)&v498[0] = 0;
    *(_QWORD *)&v498[1] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("output_tokens", 13, v350, v351);
    v353 = 12;
    v354 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v354 )
      goto LABEL_549;
    v355 = v348 + v342 + v345;
    qmemcpy(v354, "input_tokens", 12);
    v499.i64[0] = 12;
    v499.i64[1] = (__int64)v354;
    v499.i64[2] = 12;
    v501.i8[0] = 2;
    v501.i64[1] = v355 >> 63;
    v501.i64[2] = v355;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, v498, &v499, &v501);
    if ( v500.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, v498, v356, v357);
    v353 = 13;
    v358 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( !v358 )
      goto LABEL_549;
    qmemcpy(v358, "output_tokens", 13);
    v499.i64[0] = 13;
    v499.i64[1] = (__int64)v358;
    v499.i64[2] = 13;
    v501.i8[0] = 2;
    v501.i64[1] = v352 >> 63;
    v501.i64[2] = v352;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, v498, &v499, &v501);
    if ( v500.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, v498, v359, v360);
    v353 = 12;
    v361 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v361 )
LABEL_549:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v353);
    qmemcpy(v361, "total_tokens", 12);
    v499.i64[0] = 12;
    v499.i64[1] = (__int64)v361;
    v499.i64[2] = 12;
    v362 = v355 + v352;
    v501.i8[0] = 2;
    v501.i64[1] = v362 >> 63;
    v501.i64[2] = v362;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, v498, &v499, &v501);
    if ( v500.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
    *(__int64 *)((char *)v501.i64 + 7) = *(_QWORD *)&v498[0];
    *(__int128 *)((char *)v501.i128 + 15) = *(_OWORD *)((char *)v498 + 8);
    *((_QWORD *)&v498[1] + 1) = *(_QWORD *)&v498[1];
    *(_QWORD *)((char *)v498 + 1) = v501.i64[0];
    *(_OWORD *)((char *)v498 + 9) = *(__int128 *)((char *)v501.i128 + 8);
  }
  else
  {
    *((_QWORD *)&v498[0] + 1) = 0;
    *((_QWORD *)&v498[1] + 1) = 0;
  }
  LOBYTE(v498[0]) = 5;
  v363 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("stop_reason", 11, v493);
  v366 = 9;
  v367 = "completedsummary_text";
  if ( !v363 || *(_BYTE *)v363 != 3 )
    goto LABEL_432;
  v365 = *(_QWORD *)(v363 + 16);
  v363 = *(_QWORD *)(v363 + 24);
  if ( v363 == 7 )
  {
    LODWORD(v363) = *(_DWORD *)v365 ^ 0x75666572;
    v364 = (unsigned int)v363 | *(_DWORD *)(v365 + 3) ^ 0x6C617375;
    if ( !((unsigned int)v363 | *(_DWORD *)(v365 + 3) ^ 0x6C617375) )
    {
      v473 = 14;
      v369 = "content_filter";
      goto LABEL_511;
    }
    goto LABEL_432;
  }
  if ( v363 != 29 )
  {
    if ( v363 == 10 )
    {
      v363 = *(_QWORD *)v365 ^ 0x656B6F745F78616DLL;
      v365 = v363 | *(unsigned __int16 *)(v365 + 8) ^ 0x736ELL;
      if ( !v365 )
        goto LABEL_430;
    }
LABEL_432:
    LOBYTE(v363) = 1;
    LODWORD(v493) = v363;
    v483[0] = nullptr;
    goto LABEL_433;
  }
  v368 = _mm_or_si128(
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)v365), (__m128i)xmmword_10167ADC0),
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v365 + 13)), (__m128i)xmmword_10167ADB0));
  if ( !_mm_testz_si128(v368, v368) )
    goto LABEL_432;
LABEL_430:
  v473 = 17;
  v369 = (const char *)&anon_22327b6004f579c0722d6ebc68f79196_298;
LABEL_511:
  v483[0] = (void *)v369;
  v366 = 10;
  v367 = "incomplete";
  LODWORD(v493) = 0;
LABEL_433:
  v495.i64[0] = 0;
  v495.i64[2] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("stop_reason", 11, v364, v365);
  v370 = 2;
  v371 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v371 )
    goto LABEL_535;
  *v371 = 25705;
  v499.i64[0] = 2;
  v499.i64[1] = (__int64)v371;
  v499.i64[2] = 2;
  v374 = v446;
  if ( (v446 & 0x8000000000000000LL) != 0LL )
  {
    v375 = 0;
    goto LABEL_436;
  }
  v484 = (void *)v445[1];
  if ( v446 )
  {
    v479 = v366;
    v376 = v367;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1, v372, v373);
    v375 = 1;
    v377 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v374, 1);
    if ( !v377 )
LABEL_436:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v375, v374);
    v378 = v377;
    v367 = v376;
    v366 = v479;
  }
  else
  {
    v378 = 1;
  }
  memcpy((void *)v378, v484, v374);
  v501.i8[0] = 3;
  v501.i64[1] = v374;
  v501.i64[2] = v378;
  v501.i64[3] = v374;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v495, &v499, &v501);
  if ( v500.i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v495, v379, v380);
  v370 = 6;
  v381 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v381 )
    goto LABEL_535;
  *(_WORD *)(v381 + 4) = 29795;
  *(_DWORD *)v381 = 1701470831;
  v499.i64[0] = 6;
  v499.i64[1] = v381;
  v499.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v382, v383);
  v384 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v384 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
  *v384 = 0x65736E6F70736572LL;
  v501.i8[0] = 3;
  v501.i64[1] = 8;
  v501.i64[2] = (__int64)v384;
  v501.i64[3] = 8;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v495, &v499, &v501);
  if ( v500.i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v495, v385, v386);
  v370 = 10;
  v387 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v387 )
    goto LABEL_535;
  qmemcpy(v387, "created_at", 10);
  v499.i64[0] = 10;
  v499.i64[1] = (__int64)v387;
  v499.i64[2] = 10;
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v496);
  v388 = ((int)v496 >> 13) - 1;
  v389 = 0;
  if ( (int)v496 >> 13 <= 0 )
  {
    v390 = (1 - ((int)v496 >> 13)) / 0x190u + 1;
    v388 += 400 * v390;
    v389 = -146097 * v390;
  }
  v501.i8[0] = 2;
  v501.i64[1] = ((unsigned __int64)DWORD1(v496)
               + 86400LL
               * (int)(((v388 / 100) >> 2)
                     + ((1461 * v388) >> 2)
                     + v389
                     + (((unsigned int)v496 >> 4) & 0x1FF)
                     - v388 / 100
                     - 719163)) >> 63;
  v501.i64[2] = DWORD1(v496)
              + 86400LL
              * (int)(((v388 / 100) >> 2)
                    + ((1461 * v388) >> 2)
                    + v389
                    + (((unsigned int)v496 >> 4) & 0x1FF)
                    - v388 / 100
                    - 719163);
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v495, &v499, &v501);
  if ( v500.i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v495, v391, v392);
  v370 = 6;
  v393 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v393 )
    goto LABEL_535;
  *(_WORD *)(v393 + 4) = 29557;
  *(_DWORD *)v393 = 1952543859;
  v499.i64[0] = 6;
  v499.i64[1] = v393;
  v499.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v394, v395);
  v396 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v366, 1);
  if ( !v396 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v366);
  v397 = (__int64)v396;
  memcpy(v396, v367, v366);
  v501.i8[0] = 3;
  v501.i64[1] = v366;
  v501.i64[2] = v397;
  v501.i64[3] = v366;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v495, &v499, &v501);
  if ( v500.i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v495, v398, v399);
  v370 = 5;
  v400 = 1;
  v401 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v401 )
    goto LABEL_535;
  *(_BYTE *)(v401 + 4) = 108;
  *(_DWORD *)v401 = 1701080941;
  v499.i64[0] = 5;
  v499.i64[1] = v401;
  v499.i64[2] = 5;
  if ( !(_BYTE)v470 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v402, v403);
    v404 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    if ( !v404 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v400 = v404;
  }
  v405 = __n;
  memcpy((void *)v400, __dst, __n);
  v501.i8[0] = 3;
  v501.i64[1] = v405;
  v501.i64[2] = v400;
  v501.i64[3] = v405;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v495, &v499, &v501);
  if ( v500.i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v495, v406, v407);
  v370 = 6;
  v408 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v408 )
    goto LABEL_535;
  *(_WORD *)(v408 + 4) = 29813;
  *(_DWORD *)v408 = 1886680431;
  v499.i64[0] = 6;
  v499.i64[1] = v408;
  v499.i64[2] = 6;
  serde_core::ser::Serializer::collect_seq::h85a6285ed47faa03(&v501, &v485);
  if ( v501.i8[0] == 6 )
  {
    v500.i64[0] = v501.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167D112, 43, &v500, &off_10197B9E8, &off_10197ABB0);
  }
  v500 = v501;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v501, &v495, &v499, &v500);
  if ( v501.i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v495, v409, v410);
  v370 = 11;
  v411 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v411 )
    goto LABEL_535;
  qmemcpy(v411, "output_text", 11);
  v499.i64[0] = 11;
  v499.i64[1] = (__int64)v411;
  v499.i64[2] = 11;
  v414 = v458;
  if ( (v458 & 0x8000000000000000LL) != 0LL )
  {
    v415 = 0;
    goto LABEL_469;
  }
  v416 = v457;
  if ( v458 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1, v412, v413);
    v415 = 1;
    v417 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v414, 1);
    if ( !v417 )
LABEL_469:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v415, v414);
    v418 = v417;
  }
  else
  {
    v418 = 1;
  }
  memcpy((void *)v418, v416, v414);
  v501.i8[0] = 3;
  v501.i64[1] = v414;
  v501.i64[2] = v418;
  v501.i64[3] = v414;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v495, &v499, &v501);
  if ( v500.i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v500, &v495, v419, v420);
  v370 = 5;
  v421 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v421 )
LABEL_535:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v370);
  *(_BYTE *)(v421 + 4) = 101;
  *(_DWORD *)v421 = 1734439797;
  v499.i64[0] = 5;
  v499.i64[1] = v421;
  v499.i64[2] = 5;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4(
    &v501,
    v498);
  if ( v501.i8[0] == 6 )
  {
    v500.i64[0] = v501.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167D112, 43, &v500, &off_10197B9E8, &off_10197ABB0);
  }
  v500 = v501;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v501, &v495, &v499, &v500);
  if ( v501.i8[0] != 6 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v501);
  *(__int128 *)((char *)v499.i128 + 8) = v495.i128[0];
  v499.i64[3] = v495.i64[2];
  v499.i8[0] = 5;
  v423 = v473;
  if ( !(_BYTE)v493 )
  {
    *(_QWORD *)&v496 = 0;
    v497 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v501, &v495, v422, v495.i64[1]);
    v424 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v424 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
    *(_WORD *)(v424 + 4) = 28271;
    *(_DWORD *)v424 = 1935762802;
    v495.i64[0] = 6;
    v495.i64[1] = v424;
    v495.i64[2] = 6;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v425, v426);
    v427 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v423, 1);
    if ( !v427 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v423);
    v428 = (__int64)v427;
    memcpy(v427, v483[0], v423);
    v501.i8[0] = 3;
    v501.i64[1] = v423;
    v501.i64[2] = v428;
    v501.i64[3] = v423;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v500, &v496, &v495, &v501);
    if ( v500.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v500);
    *(__int128 *)((char *)v501.i128 + 8) = v496;
    v501.i64[3] = v497;
    v501.i8[0] = 5;
    v429 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                        "incomplete_detailsprompt_tokenscompletion_tokensinput_tokensoutput_tokens",
                        0x12u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v429);
    *v429 = v501;
  }
  *v452 = v499;
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v498);
  v432 = v456;
  if ( v456 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v416, v456, 1);
  v433 = v486;
  for ( j = v487 + 1; j != 1; --j )
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v433, v432, v430, v431);
    v433 += 32;
  }
  if ( v485 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v486, 32 * v485, 8);
  if ( __n )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst, __n, 1);
  if ( v445[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v484, v445[0], 1);
  return v452;
}
