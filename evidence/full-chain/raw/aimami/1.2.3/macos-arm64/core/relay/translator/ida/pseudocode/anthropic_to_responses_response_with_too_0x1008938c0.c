// __ZN13codexmate_lib4core5relay10translator45anthropic_to_responses_response_with_tool_map @ 0x1008938c0 | 基线 same-set
// [FULL hexrays]

__int64 __fastcall codexmate_lib::core::relay::translator::anthropic_to_responses_response_with_tool_map::h58553209f6c91da6(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(); // rax
  __int64 v10; // rax
  const char *v11; // rbx
  signed __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  signed __int64 v23; // rbx
  const void *v24; // r15
  __int64 v25; // r13
  void *v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  const void *v31; // rbx
  __int64 v32; // rcx
  __int64 *v33; // r15
  __m128i v34; // xmm1
  __int64 v35; // rax
  const __m128i *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  bool v41; // r15
  __int64 v42; // rax
  __int64 v43; // r13
  _DWORD *v44; // rax
  _WORD *v45; // rax
  __m256i *v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int128 v52; // kr10_16
  __int64 v53; // rax
  __int64 *v54; // r13
  __int64 v55; // r15
  char *v56; // rbx
  __m128i v57; // xmm1
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  size_t v61; // rdi
  __int64 v62; // r15
  size_t v63; // r15
  __int64 v64; // rsi
  __m256i *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  _DWORD *v71; // rax
  _DWORD *v72; // rax
  __int64 v73; // r13
  _DWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // r13
  _WORD *v78; // rax
  __m256i *v79; // rdi
  __int64 v80; // rsi
  _DWORD *v81; // rax
  __int64 *v82; // r15
  __int64 v83; // rax
  _DWORD *v84; // rax
  __int128 v85; // rax
  __int64 v86; // r13
  _WORD *v87; // rax
  __m256i *v88; // rdi
  __int64 v89; // rsi
  _DWORD *v90; // rax
  __int64 v91; // rax
  _DWORD *v92; // rax
  void *v93; // rax
  __int8 v94; // bl
  _DWORD *v95; // rax
  _DWORD *v96; // rax
  __int64 v97; // rcx
  __m256i *v98; // rbx
  __int64 v99; // rax
  __m256i *v100; // rdi
  __m256i *v101; // rsi
  _QWORD *v102; // rbx
  __int64 *v103; // rax
  __int64 v104; // rsi
  signed __int64 v105; // r8
  size_t v106; // rsi
  __int64 v107; // r13
  _DWORD *v108; // rax
  void *v109; // rax
  __m256i *v110; // rdi
  __m256i *v111; // rsi
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdx
  _WORD *v115; // rax
  size_t v116; // r13
  __int64 v117; // rax
  __int64 v118; // rdi
  __int64 v119; // r15
  __m256i *v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // rsi
  _DWORD *v123; // rax
  __int64 v124; // r13
  __int64 v125; // rax
  size_t v126; // rbx
  __m256i *v127; // rdi
  __m256i *v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rdx
  _DWORD *v132; // rax
  __int64 v133; // r13
  __int64 v134; // rax
  __int64 v135; // r15
  size_t v136; // rbx
  __m256i *v137; // rdi
  __m256i *v138; // rsi
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rax
  __int64 v143; // r13
  __int64 v144; // rax
  __int64 v145; // r15
  size_t v146; // rbx
  __m256i *v147; // rdi
  __m256i *v148; // rsi
  size_t v149; // r15
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rdx
  unsigned __int64 v156; // rbx
  __int64 v157; // r9
  __int64 v158; // r15
  size_t v159; // rbx
  size_t v160; // rdi
  void *v161; // rsi
  __int64 v162; // r13
  _DWORD *v163; // rax
  _DWORD *v164; // rax
  __m256i *v165; // rdi
  __int64 v166; // rax
  __int64 v167; // rcx
  __int64 v168; // rdx
  __m256i *v169; // rsi
  _WORD *v170; // rax
  __int64 v171; // r12
  size_t v172; // r14
  __int64 v173; // r15
  __int64 v174; // rax
  __int64 v175; // r13
  size_t v176; // rsi
  __m256i *v177; // rdi
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // rdx
  __m256i *v181; // rsi
  _DWORD *v182; // rax
  __int64 v183; // rax
  __m256i *v184; // rdi
  __int64 v185; // rax
  __int64 v186; // rcx
  __int64 v187; // rdx
  __m256i *v188; // rsi
  __int64 v189; // rax
  __int64 v190; // rax
  __m256i *v191; // rdi
  __int64 v192; // rax
  __int64 v193; // rcx
  __int64 v194; // rdx
  __m256i *v195; // rsi
  _DWORD *v196; // rax
  __int64 v197; // rax
  __int64 v198; // r13
  __int64 v199; // r14
  _DWORD *v200; // rax
  void *v201; // rax
  __m256i *v202; // rdi
  __int64 v203; // rax
  __int64 v204; // rcx
  __int64 v205; // rdx
  __m256i *v206; // rsi
  _DWORD *v207; // rax
  __int64 v208; // r12
  __int64 v209; // rax
  __int64 v210; // r14
  __m256i *v211; // rdi
  __int64 v212; // rax
  __int64 v213; // rcx
  __int64 v214; // rdx
  __m256i *v215; // rsi
  void *v216; // rax
  __int64 v217; // rdx
  __int64 v218; // rdx
  __int64 v219; // rbx
  void *v220; // rbx
  unsigned __int64 v221; // r14
  size_t v222; // r15
  __int64 v223; // r13
  __int64 v224; // rbx
  _QWORD *v225; // r14
  __int64 v226; // rsi
  __m256i *v227; // rdi
  __int64 v228; // rsi
  __int64 v229; // rax
  __int64 v230; // r14
  __int64 v231; // rax
  __int64 v232; // rcx
  __int64 v233; // r12
  __int64 v234; // rax
  __int64 v235; // rcx
  __int64 v236; // r15
  __int64 v237; // rax
  __int64 v238; // rcx
  __int64 v239; // r13
  __int64 v240; // rax
  __int64 v241; // rcx
  unsigned __int64 v242; // r14
  __int64 v243; // rbx
  void *v244; // rax
  unsigned __int64 v245; // r15
  __m256i *v246; // rdi
  __int64 v247; // rax
  __int64 v248; // rcx
  __int64 v249; // rdx
  __m256i *v250; // rsi
  void *v251; // rax
  __m256i *v252; // rdi
  __int64 v253; // rax
  __int64 v254; // rcx
  __int64 v255; // rdx
  __m256i *v256; // rsi
  void *v257; // rax
  unsigned __int64 v258; // r14
  __int64 v259; // rax
  __int64 v260; // rcx
  __int64 v261; // rdx
  __int64 v262; // rbx
  _WORD *v263; // rax
  __int64 v264; // rbx
  __int64 v265; // r13
  const void *v266; // r14
  __int64 v267; // rax
  __int64 v268; // r12
  __m256i *v269; // rdi
  __int64 v270; // rax
  __int64 v271; // rcx
  __int64 v272; // rdx
  __m256i *v273; // rsi
  __int64 v274; // rax
  _QWORD *v275; // rax
  __m256i *v276; // rdi
  __int64 v277; // rax
  __int64 v278; // rcx
  __int64 v279; // rdx
  __m256i *v280; // rsi
  void *v281; // rax
  int v282; // edx
  int v283; // ecx
  unsigned int v284; // ecx
  __m256i *v285; // rdi
  __int64 v286; // rax
  __int64 v287; // rcx
  __int64 v288; // rdx
  __m256i *v289; // rsi
  __int64 v290; // rax
  __int64 v291; // rax
  __m256i *v292; // rdi
  __int64 v293; // rax
  __int64 v294; // rcx
  __int64 v295; // rdx
  __m256i *v296; // rsi
  __int64 v297; // r15
  __int64 v298; // rax
  __int64 v299; // rax
  size_t v300; // rbx
  __m256i *v301; // rdi
  __int64 v302; // rax
  __int64 v303; // rcx
  __int64 v304; // rdx
  __m256i *v305; // rsi
  __int64 v306; // rax
  __m256i *v307; // rdi
  __int64 v308; // rax
  __int64 v309; // rcx
  __int64 v310; // rdx
  __m256i *v311; // rsi
  void *v312; // rax
  __int64 v313; // rbx
  __int64 v314; // r14
  void *v315; // r15
  const void *v316; // r15
  __int64 v317; // rax
  __int64 v318; // r13
  __m256i *v319; // rdi
  __int64 v320; // rax
  __int64 v321; // rcx
  __int64 v322; // rdx
  __m256i *v323; // rsi
  __int64 v324; // rax
  __int64 v325; // rdx
  const void *v326; // r12
  __int64 v327; // rdx
  __int64 v328; // r14
  __int64 v329; // rdi
  __int64 i; // r15
  __int64 v332; // rax
  __int64 v333; // rax
  __int64 v334; // rax
  __int64 v335; // rax
  _QWORD v336[2]; // [rsp+20h] [rbp-300h] BYREF
  __m256i v337; // [rsp+30h] [rbp-2F0h]
  _QWORD v338[2]; // [rsp+50h] [rbp-2D0h] BYREF
  size_t v339; // [rsp+60h] [rbp-2C0h]
  __int64 v340; // [rsp+68h] [rbp-2B8h] BYREF
  __int64 v341; // [rsp+70h] [rbp-2B0h]
  __int64 v342; // [rsp+78h] [rbp-2A8h]
  __int64 v343; // [rsp+80h] [rbp-2A0h]
  __int64 v344; // [rsp+88h] [rbp-298h]
  __int64 v345; // [rsp+90h] [rbp-290h]
  __int64 v346; // [rsp+98h] [rbp-288h] BYREF
  void *v347; // [rsp+A0h] [rbp-280h]
  unsigned __int64 v348; // [rsp+A8h] [rbp-278h]
  __int64 v349; // [rsp+B0h] [rbp-270h]
  void *__src; // [rsp+B8h] [rbp-268h]
  void *v351; // [rsp+C0h] [rbp-260h]
  size_t v352; // [rsp+C8h] [rbp-258h]
  void *v353[2]; // [rsp+D0h] [rbp-250h]
  __int64 v354; // [rsp+E8h] [rbp-238h] BYREF
  __int64 v355; // [rsp+F0h] [rbp-230h]
  size_t v356; // [rsp+F8h] [rbp-228h]
  __int64 v357; // [rsp+100h] [rbp-220h] BYREF
  __int64 v358; // [rsp+108h] [rbp-218h]
  __int64 v359; // [rsp+110h] [rbp-210h]
  void *v360; // [rsp+118h] [rbp-208h]
  __int64 *v361; // [rsp+120h] [rbp-200h]
  void *v362; // [rsp+128h] [rbp-1F8h]
  size_t v363; // [rsp+130h] [rbp-1F0h]
  int v364; // [rsp+13Ch] [rbp-1E4h]
  __int128 v365; // [rsp+140h] [rbp-1E0h] BYREF
  __int64 v366; // [rsp+150h] [rbp-1D0h]
  void *__dst; // [rsp+158h] [rbp-1C8h]
  size_t v368; // [rsp+160h] [rbp-1C0h]
  void *v369; // [rsp+168h] [rbp-1B8h]
  size_t v370; // [rsp+170h] [rbp-1B0h]
  __int64 *v371; // [rsp+178h] [rbp-1A8h]
  __int128 v372; // [rsp+180h] [rbp-1A0h] BYREF
  __int64 v373; // [rsp+190h] [rbp-190h]
  __int64 v374; // [rsp+198h] [rbp-188h] BYREF
  __int64 v375; // [rsp+1A0h] [rbp-180h]
  __int64 v376; // [rsp+1A8h] [rbp-178h]
  size_t __n; // [rsp+1B0h] [rbp-170h]
  _BYTE v378[24]; // [rsp+1B8h] [rbp-168h] BYREF
  __m256i v379; // [rsp+1D0h] [rbp-150h] BYREF
  __m256i v380; // [rsp+1F0h] [rbp-130h] BYREF
  __int64 v381; // [rsp+210h] [rbp-110h]
  size_t v382; // [rsp+218h] [rbp-108h]
  __m256i v383; // [rsp+220h] [rbp-100h] BYREF
  size_t v384; // [rsp+240h] [rbp-E0h]
  __m256i v385; // [rsp+248h] [rbp-D8h] BYREF
  __m256i v386; // [rsp+268h] [rbp-B8h] BYREF
  void *v387; // [rsp+288h] [rbp-98h]
  size_t v388; // [rsp+290h] [rbp-90h]
  __int64 v389; // [rsp+298h] [rbp-88h]
  __m256i v390; // [rsp+2A0h] [rbp-80h] BYREF
  void *v391; // [rsp+2C0h] [rbp-60h]
  size_t v392; // [rsp+2C8h] [rbp-58h]
  __int64 v393; // [rsp+2D0h] [rbp-50h]
  __m256i v394[2]; // [rsp+2D8h] [rbp-48h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("idassistant", 2, a2);
  if ( v6 && *(_BYTE *)v6 == 3 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v8 = *(_QWORD *)(v6 + 24);
    v386.i64[0] = v7;
    v386.i64[1] = v8;
    v390.i64[0] = (__int64)&v386;
    v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  }
  else
  {
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v386);
    v390.i64[0] = (__int64)&v386;
    v9 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
  }
  v390.i64[1] = (__int64)v9;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v338, &unk_1017C5D36, &v390);
  v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("model", 5, a2);
  v11 = "unknownchoicesfinish_reasoncompletedsummary_text";
  __n = 7;
  if ( v10 && *(_BYTE *)v10 == 3 )
  {
    v12 = *(_QWORD *)(v10 + 24);
    __n = v12;
    if ( v12 < 0 )
    {
      v13 = 0;
      goto LABEL_9;
    }
    v349 = a1;
    v11 = *(const char **)(v10 + 16);
    if ( !v12 )
    {
      __dst = (void *)1;
      LODWORD(v360) = 1;
      __n = 0;
      goto LABEL_14;
    }
    v5 = v349;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("model", 5);
  v13 = 1;
  __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
  if ( !__dst )
LABEL_9:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, __n);
  v349 = v5;
  LODWORD(v360) = 0;
LABEL_14:
  memcpy(__dst, v11, __n);
  v374 = 0;
  v375 = 8;
  v376 = 0;
  v354 = 0;
  v355 = 1;
  v356 = 0;
  v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "contentpattern.output_modehead_limit",
          7,
          a2);
  if ( v14 && *(_BYTE *)v14 == 4 )
  {
    v342 = a2;
    v357 = 0;
    v358 = 8;
    v359 = 0;
    v346 = 0;
    v347 = (void *)8;
    v348 = 0;
    v16 = *(_QWORD *)(v14 + 24);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v14 + 16);
      v18 = 32 * v16;
      *(__m128i *)v353 = _mm_unpacklo_epi64((__m128i)0x6465746361646572uLL, (__m128i)0x6E696B6E6968745FuLL);
      do
      {
        v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &anon_10420c9971c21f44d230d15b39fb3fec_75,
                4,
                v17);
        if ( v19 && *(_BYTE *)v19 == 3 )
        {
          v20 = *(_QWORD *)(v19 + 24) - 4LL;
          v21 = *(_QWORD *)(v19 + 16);
          switch ( v20 )
          {
            case 0LL:
              if ( *(_DWORD *)v21 != 1954047348 )
                break;
              v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &anon_10420c9971c21f44d230d15b39fb3fec_110,
                      4,
                      v17);
              if ( !v22 )
                break;
              v23 = *(_QWORD *)(v22 + 24);
              if ( *(_BYTE *)v22 != 3 || v23 == 0 )
                break;
              if ( v23 < 0 )
              {
                v25 = 0;
                v176 = v352;
                goto LABEL_276;
              }
              v371 = a3;
              v24 = *(const void **)(v22 + 16);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                &anon_10420c9971c21f44d230d15b39fb3fec_110,
                4);
              v25 = 1;
              v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1);
              if ( !v26 )
              {
                v176 = v23;
LABEL_276:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25, v176);
              }
              v352 = (size_t)v26;
              memcpy(v26, v24, v23);
              v27 = v359;
              if ( v359 == v357 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v357);
              v28 = v358;
              v29 = 3 * v27;
              *(_QWORD *)(v358 + 8 * v29) = v23;
              *(_QWORD *)(v28 + 8 * v29 + 8) = v352;
              *(_QWORD *)(v28 + 8 * v29 + 16) = v23;
              v359 = v27 + 1;
              a3 = v371;
              break;
            case 4LL:
              if ( *(_QWORD *)v21 == 0x676E696B6E696874LL )
                goto LABEL_39;
              if ( *(_QWORD *)v21 != 0x6573755F6C6F6F74LL )
                break;
              v30 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "idassistant",
                      2,
                      v17);
              v384 = 12;
              if ( v30 )
              {
                v31 = &unk_101674E13;
                if ( *(_BYTE *)v30 == 3 )
                {
                  v32 = *(_QWORD *)(v30 + 24);
                  if ( v32 < 0 )
                  {
                    v25 = 0;
                    v176 = (size_t)v369;
                    goto LABEL_276;
                  }
                  v384 = *(_QWORD *)(v30 + 24);
                  v33 = a3;
                  v31 = *(const void **)(v30 + 16);
                  if ( !v32 )
                  {
                    v369 = (void *)1;
                    v364 = 1;
                    v384 = 0;
                    goto LABEL_71;
                  }
                }
              }
              else
              {
                v31 = &unk_101674E13;
              }
              v33 = a3;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("idassistant", 2);
              v25 = 1;
              v369 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v384, 1);
              if ( !v369 )
              {
                v176 = v384;
                goto LABEL_276;
              }
              v364 = 0;
LABEL_71:
              memcpy(v369, v31, v384);
              v53 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "name",
                      4,
                      v17);
              v54 = v33;
              v55 = 4;
              if ( v53 )
              {
                v56 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
                if ( *(_BYTE *)v53 == 3 )
                {
                  v55 = *(_QWORD *)(v53 + 24);
                  if ( v55 < 0 )
                  {
                    v62 = 0;
                    goto LABEL_314;
                  }
                  v56 = *(char **)(v53 + 16);
                  if ( !v55 )
                  {
                    v370 = 1;
                    v382 = 0;
                    goto LABEL_82;
                  }
                }
              }
              else
              {
                v56 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4);
              v61 = v55;
              v62 = 1;
              v382 = v61;
              v370 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v61, 1);
              if ( !v370 )
              {
                v370 = v382;
LABEL_314:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v62, v370);
              }
LABEL_82:
              v63 = v382;
              memcpy((void *)v370, v56, v382);
              v64 = 5;
              v65 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_146;
              v66 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &anon_10420c9971c21f44d230d15b39fb3fec_146,
                      5,
                      v17);
              if ( v66 )
              {
                switch ( *(_BYTE *)v66 )
                {
                  case 0:
                    v390.i8[0] = 0;
                    break;
                  case 1:
                  case 2:
                    v390.i128[1] = *(_OWORD *)(v66 + 16);
                    v67 = *(_QWORD *)v66;
                    v390.i64[1] = *(_QWORD *)(v66 + 8);
                    v390.i64[0] = v67;
                    break;
                  case 3:
                    v64 = v66 + 8;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                      &v390.u32[2],
                      v66 + 8);
                    v390.i8[0] = 3;
                    break;
                  case 4:
                    v64 = v66 + 8;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                      &v390.u32[2],
                      v66 + 8);
                    v390.i8[0] = 4;
                    break;
                  case 5:
                    v64 = v66 + 8;
                    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
                      &v390.u32[2],
                      v66 + 8);
                    v390.i8[0] = 5;
                    break;
                }
                v379 = v390;
                v390.i8[0] = 0;
                v65 = &v390;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
              }
              else
              {
                v390.i8[0] = 0;
                v379 = v390;
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v65, v64);
              v99 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1);
              if ( !v99 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128);
              v390.i64[0] = 128;
              *(__int128 *)((char *)v390.i128 + 8) = (unsigned __int64)v99;
              v386.i64[0] = (__int64)&v390;
              v100 = &v379;
              v101 = &v386;
              v102 = (_QWORD *)serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::he6e8e9fc27a55fb4(
                                 &v379,
                                 &v386);
              if ( v102 )
              {
                v101 = (__m256i *)v390.i64[0];
                if ( v390.i64[0] )
                {
                  v100 = (__m256i *)v390.i64[1];
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v390.i64[1], v390.i64[0], 1);
                }
              }
              else
              {
                v102 = (_QWORD *)v390.i64[1];
                v381 = v390.i64[0];
                if ( v390.i64[0] != 0x8000000000000000LL )
                {
                  v105 = v390.i64[2];
                  v361 = (__int64 *)v390.i64[1];
                  goto LABEL_192;
                }
              }
              v390.i64[0] = (__int64)v102;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v100, v101);
              v103 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              if ( !v103 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
              v361 = v103;
              *(_WORD *)v103 = 32123;
              if ( *v102 == 1 )
              {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v102 + 1);
              }
              else if ( !*v102 )
              {
                v104 = v102[2];
                if ( v104 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102[1], v104, 1);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, 40, 8);
              v381 = 2;
              v105 = 2;
LABEL_192:
              v371 = v54;
              v106 = v370;
              codexmate_lib::core::relay::translator::normalize_anthropic_tool_call_for_responses::h5854e4c15575a469(
                v390.i64,
                (_DWORD *)v370,
                v63,
                v361,
                v105);
              v344 = v390.i64[0];
              v368 = v390.u64[2];
              v362 = (void *)v390.i64[1];
              v345 = v390.i64[3];
              v351 = v391;
              v363 = v392;
              *(_QWORD *)&v372 = 0;
              v373 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, v106);
              v107 = 4;
              v108 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v108 )
                goto LABEL_504;
              *v108 = 1701869940;
              *(_QWORD *)v378 = 4;
              *(_QWORD *)&v378[8] = v108;
              *(_QWORD *)&v378[16] = 4;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v109 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
              if ( !v109 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
              qmemcpy(v109, "function_call", 13);
              v394[0].i8[0] = 3;
              v394[0].i64[1] = 13;
              v394[0].i64[2] = (__int64)v109;
              v394[0].i64[3] = 13;
              v110 = &v386;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v372, v378);
              v111 = &v390;
              if ( v386.i64[0] == 0x8000000000000000LL )
              {
                v112 = v386.i64[1];
                v113 = 32 * v386.i64[3];
                v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
                v114 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
                v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
                v385.i64[0] = v114;
                *(_OWORD *)(v386.i64[1] + v113 + 16) = v394[0].i128[1];
                v111 = (__m256i *)v394[0].i64[1];
                *(_OWORD *)(v112 + v113) = v394[0].i128[0];
                if ( v385.i8[0] != 6 )
                {
                  v110 = &v385;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
                }
              }
              else
              {
                v393 = v389;
                v392 = v388;
                v391 = v387;
                v390 = v386;
                v383 = v394[0];
                v110 = &v385;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v385,
                  &v390,
                  &v383);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v110, v111);
              v107 = 2;
              v115 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              if ( !v115 )
                goto LABEL_504;
              *v115 = 25705;
              *(_QWORD *)v378 = 2;
              *(_QWORD *)&v378[8] = v115;
              *(_QWORD *)&v378[16] = 2;
              uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v390);
              v385.i128[0] = v390.i128[0];
              v386.i64[0] = (__int64)&v385;
              v386.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v390, &unk_1017C5D20, &v386);
              v343 = v390.i64[0];
              v116 = v390.u64[2];
              __src = (void *)v390.i64[1];
              if ( v390.i64[2] < 0 )
              {
                v118 = 0;
LABEL_312:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v118, v116);
              }
              if ( v390.i64[2] )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &unk_1017C5D20);
                v117 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v116, 1);
                v118 = 1;
                if ( !v117 )
                  goto LABEL_312;
                v119 = v117;
              }
              else
              {
                v119 = 1;
              }
              memcpy((void *)v119, __src, v116);
              v394[0].i8[0] = 3;
              v394[0].i64[1] = v116;
              v394[0].i64[2] = v119;
              v394[0].i64[3] = v116;
              v120 = &v386;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v372, v378);
              if ( v386.i64[0] == 0x8000000000000000LL )
              {
                v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
                v121 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
                v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
                v385.i64[0] = v121;
                *(__m256i *)(v386.i64[1] + 32 * v386.i64[3]) = v394[0];
                if ( v385.i8[0] != 6 )
                {
                  v120 = &v385;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
                }
              }
              else
              {
                v393 = v389;
                v392 = v388;
                v391 = v387;
                v390 = v386;
                v383 = v394[0];
                v120 = &v385;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v385,
                  &v390,
                  &v383);
              }
              v122 = v343;
              if ( v343 )
              {
                v120 = (__m256i *)__src;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v343, 1);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v120, v122);
              v107 = 7;
              v123 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
              if ( !v123 )
                goto LABEL_504;
              *(_DWORD *)((char *)v123 + 3) = 1684627308;
              *v123 = 1819042147;
              *(_QWORD *)v378 = 7;
              *(_QWORD *)&v378[8] = v123;
              *(_QWORD *)&v378[16] = 7;
              v124 = 1;
              if ( !(_BYTE)v364 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
                v125 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v384, 1);
                if ( !v125 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v384);
                v124 = v125;
              }
              v126 = v384;
              memcpy((void *)v124, v369, v384);
              v394[0].i8[0] = 3;
              v394[0].i64[1] = v126;
              v394[0].i64[2] = v124;
              v394[0].i64[3] = v126;
              v127 = &v386;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v372, v378);
              v128 = &v390;
              if ( v386.i64[0] == 0x8000000000000000LL )
              {
                v129 = v386.i64[1];
                v130 = 32 * v386.i64[3];
                v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
                v131 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
                v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
                v385.i64[0] = v131;
                *(_OWORD *)(v386.i64[1] + v130 + 16) = v394[0].i128[1];
                v128 = (__m256i *)v394[0].i64[1];
                *(_OWORD *)(v129 + v130) = v394[0].i128[0];
                if ( v385.i8[0] != 6 )
                {
                  v127 = &v385;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
                }
              }
              else
              {
                v393 = v389;
                v392 = v388;
                v391 = v387;
                v390 = v386;
                v383 = v394[0];
                v127 = &v385;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v385,
                  &v390,
                  &v383);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v127, v128);
              v107 = 4;
              v132 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v132 )
                goto LABEL_504;
              *v132 = 1701667182;
              *(_QWORD *)v378 = 4;
              *(_QWORD *)&v378[8] = v132;
              *(_QWORD *)&v378[16] = 4;
              if ( (v368 & 0x8000000000000000LL) != 0LL )
              {
                v133 = 0;
LABEL_472:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v133, v368);
              }
              if ( v368 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v133 = 1;
                v134 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v368, 1);
                if ( !v134 )
                  goto LABEL_472;
                v135 = v134;
              }
              else
              {
                v135 = 1;
              }
              v136 = v368;
              memcpy((void *)v135, v362, v368);
              v394[0].i8[0] = 3;
              v394[0].i64[1] = v136;
              v394[0].i64[2] = v135;
              v394[0].i64[3] = v136;
              v137 = &v386;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v372, v378);
              v138 = &v390;
              if ( v386.i64[0] == 0x8000000000000000LL )
              {
                v139 = v386.i64[1];
                v140 = 32 * v386.i64[3];
                v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
                v141 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
                v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
                v385.i64[0] = v141;
                *(_OWORD *)(v386.i64[1] + v140 + 16) = v394[0].i128[1];
                v138 = (__m256i *)v394[0].i64[1];
                *(_OWORD *)(v139 + v140) = v394[0].i128[0];
                if ( v385.i8[0] != 6 )
                {
                  v137 = &v385;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
                }
              }
              else
              {
                v393 = v389;
                v392 = v388;
                v391 = v387;
                v390 = v386;
                v383 = v394[0];
                v137 = &v385;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v385,
                  &v390,
                  &v383);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v137, v138);
              v107 = 9;
              v142 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
              if ( !v142 )
                goto LABEL_504;
              *(_QWORD *)v142 = 0x746E656D75677261LL;
              *(_BYTE *)(v142 + 8) = 115;
              *(_QWORD *)v378 = 9;
              *(_QWORD *)&v378[8] = v142;
              *(_QWORD *)&v378[16] = 9;
              if ( (v363 & 0x8000000000000000LL) != 0LL )
              {
                v143 = 0;
LABEL_474:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v143, v363);
              }
              if ( v363 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
                v143 = 1;
                v144 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v363, 1);
                if ( !v144 )
                  goto LABEL_474;
                v145 = v144;
              }
              else
              {
                v145 = 1;
              }
              v146 = v363;
              memcpy((void *)v145, v351, v363);
              v394[0].i8[0] = 3;
              v394[0].i64[1] = v146;
              v394[0].i64[2] = v145;
              v394[0].i64[3] = v146;
              v147 = &v386;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v372, v378);
              v148 = &v390;
              v149 = v382;
              if ( v386.i64[0] == 0x8000000000000000LL )
              {
                v150 = v386.i64[1];
                v151 = 32 * v386.i64[3];
                v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
                v152 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
                v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
                v385.i64[0] = v152;
                *(_OWORD *)(v386.i64[1] + v151 + 16) = v394[0].i128[1];
                v148 = (__m256i *)v394[0].i64[1];
                *(_OWORD *)(v150 + v151) = v394[0].i128[0];
                if ( v385.i8[0] != 6 )
                {
                  v147 = &v385;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
                }
              }
              else
              {
                v393 = v389;
                v392 = v388;
                v391 = v387;
                v390 = v386;
                v383 = v394[0];
                v147 = &v385;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v385,
                  &v390,
                  &v383);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v147, v148);
              v107 = 6;
              v153 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
              if ( !v153 )
LABEL_504:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v107);
              *(_WORD *)(v153 + 4) = 29557;
              *(_DWORD *)v153 = 1952543859;
              *(_QWORD *)v378 = 6;
              *(_QWORD *)&v378[8] = v153;
              *(_QWORD *)&v378[16] = 6;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
              v154 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
              if ( !v154 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
              *(_QWORD *)v154 = 0x6574656C706D6F63LL;
              *(_BYTE *)(v154 + 8) = 100;
              v394[0].i8[0] = 3;
              v394[0].i64[1] = 9;
              v394[0].i64[2] = v154;
              v394[0].i64[3] = 9;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v372, v378);
              a3 = v371;
              if ( v386.i64[0] == 0x8000000000000000LL )
              {
                v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
                v155 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
                v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
                v385.i64[0] = v155;
                *(__m256i *)(v386.i64[1] + 32 * v386.i64[3]) = v394[0];
                if ( v385.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
              }
              else
              {
                v393 = v389;
                v392 = v388;
                v391 = v387;
                v390 = v386;
                v383 = v394[0];
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v385,
                  &v390,
                  &v383);
              }
              v380.i64[3] = v373;
              *(__int128 *)((char *)v380.i128 + 8) = v372;
              v380.i8[0] = 5;
              codexmate_lib::core::relay::translator::add_namespace_for_mapped_tool::h7403e268179b70d8(
                (__int64)&v380,
                v362,
                v368,
                a3);
              v390 = v380;
              v156 = v348;
              if ( v348 == v346 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v346);
              *((__m256i *)v347 + v156) = v390;
              v348 = v156 + 1;
              if ( v345 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v351, v345, 1);
              if ( v344 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v362, v344, 1);
              if ( v381 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v361, v381, 1);
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v379);
              if ( v149 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v370, v149, 1);
              if ( v384 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v369, v384, 1);
              break;
            case 11LL:
              if ( *(_QWORD *)v21 ^ 0x745F726576726573LL | *(_QWORD *)(v21 + 7) ^ 0x6573755F6C6F6F74LL )
                break;
              v42 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "name",
                      4,
                      v17);
              if ( !v42
                || *(_BYTE *)v42 != 3
                || *(_QWORD *)(v42 + 24) != 10
                || **(_QWORD **)(v42 + 16) ^ 0x726165735F626577LL
                 | *(unsigned __int16 *)(*(_QWORD *)(v42 + 16) + 8LL) ^ 0x6863LL )
              {
                break;
              }
              v371 = a3;
              v380.i64[0] = 0;
              v380.i64[2] = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4);
              v43 = 4;
              v44 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v44 )
                goto LABEL_510;
              *v44 = 1701869940;
              v383.i64[0] = 4;
              v383.i64[1] = (__int64)v44;
              v383.i64[2] = 4;
              serde_json::value::to_value::h29e3c39dc75a9151(&v390, &off_10196D028);
              if ( v390.i8[0] == 6 )
              {
                v386.i64[0] = v390.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                  43,
                  &v386,
                  &off_10196D480,
                  &off_10196D038);
              }
              v386 = v390;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v390,
                &v380,
                &v383,
                &v386);
              if ( v390.i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &v380);
              v43 = 2;
              v45 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              if ( !v45 )
                goto LABEL_510;
              *v45 = 25705;
              v394[0].i64[0] = 2;
              v394[0].i64[1] = (__int64)v45;
              v394[0].i64[2] = 2;
              uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v390);
              v383.i128[0] = v390.i128[0];
              v386.i64[0] = (__int64)&v383;
              v386.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v390, &unk_1017C5DA2, &v386);
              v383.i64[0] = v390.i64[0];
              *(__int128 *)((char *)v383.i128 + 8) = *(__int128 *)((char *)v390.i128 + 8);
              serde_json::value::to_value::hf4a5c51664f5d8d6(&v390, &v383);
              if ( v390.i8[0] == 6 )
              {
                v386.i64[0] = v390.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                  43,
                  &v386,
                  &off_10196D480,
                  &off_10196D038);
              }
              v386 = v390;
              v46 = &v390;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v390,
                &v380,
                v394,
                &v386);
              if ( v390.i8[0] != 6 )
              {
                v46 = &v390;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
              }
              v47 = v383.i64[0];
              if ( v383.i64[0] )
              {
                v46 = (__m256i *)v383.i64[1];
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v383.i64[1], v383.i64[0], 1);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v46, v47);
              v43 = 6;
              v48 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
              if ( !v48 )
LABEL_510:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v43);
              *(_WORD *)(v48 + 4) = 29557;
              *(_DWORD *)v48 = 1952543859;
              v383.i64[0] = 6;
              v383.i64[1] = v48;
              v383.i64[2] = 6;
              serde_json::value::to_value::h29e3c39dc75a9151(&v390, &off_10196CAE0);
              a3 = v371;
              if ( v390.i8[0] == 6 )
              {
                v386.i64[0] = v390.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                  43,
                  &v386,
                  &off_10196D480,
                  &off_10196D038);
              }
              v386 = v390;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v390,
                &v380,
                &v383,
                &v386);
              if ( v390.i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
              v385.i128[1] = *(__int128 *)((char *)v380.i128 + 8);
              v385.i64[1] = v380.i64[0];
              v385.i8[0] = 5;
              v49 = v376;
              if ( v376 == v374 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v374);
              v50 = v375;
              v51 = 32 * v49;
              *(_OWORD *)(v375 + 32 * v49 + 16) = v385.i128[1];
              v52 = v385.i128[0];
              goto LABEL_174;
            case 13LL:
              v34 = _mm_or_si128(
                      _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v21 + 16)), (__m128i)xmmword_1015DCA40),
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)v21), *(__m128i *)v353));
              if ( !_mm_testz_si128(v34, v34) )
                break;
LABEL_39:
              v35 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &anon_10420c9971c21f44d230d15b39fb3fec_75,
                      4,
                      v17);
              if ( !v35 || *(_BYTE *)v35 != 3 )
                break;
              v36 = *(const __m128i **)(v35 + 16);
              v37 = *(_QWORD *)(v35 + 24);
              if ( v37 == 17 )
              {
                v57 = _mm_or_si128(
                        _mm_xor_si128(_mm_cvtsi32_si128(v36[1].u8[0]), (__m128i)xmmword_1015DCA40),
                        _mm_xor_si128(_mm_loadu_si128(v36), *(__m128i *)v353));
                if ( !_mm_testz_si128(v57, v57) )
                  break;
                v58 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                        4,
                        v17);
                v59 = 1;
                if ( v58 && *(_BYTE *)v58 == 3 )
                {
                  v59 = *(_QWORD *)(v58 + 16);
                  v60 = *(_QWORD *)(v58 + 24);
                }
                else
                {
                  v60 = 0;
                }
                *(_QWORD *)&v372 = v59;
                *((_QWORD *)&v372 + 1) = v60;
                v394[0].i64[0] = 0;
                v394[0].i64[2] = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                  "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                  4);
                v71 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v71 )
                  goto LABEL_518;
                *v71 = 1701869940;
                v383.i64[0] = 4;
                v383.i64[1] = (__int64)v71;
                v383.i64[2] = 4;
                serde_json::value::to_value::h29e3c39dc75a9151(&v390, &off_10196D068);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D0B8);
                }
                v386 = v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  v394,
                  &v383,
                  &v386);
                if ( v390.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, v394);
                v72 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v72 )
LABEL_518:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                *v72 = 1635017060;
                v383.i64[0] = 4;
                v383.i64[1] = (__int64)v72;
                v383.i64[2] = 4;
                serde_json::value::to_value::h29e3c39dc75a9151(&v390, &v372);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D0B8);
                }
                v386 = v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  v394,
                  &v383,
                  &v386);
                if ( v390.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                v385.i128[1] = *(__int128 *)((char *)v394[0].i128 + 8);
                v385.i64[1] = v394[0].i64[0];
                v385.i8[0] = 5;
                codexmate_lib::core::relay::translator::encode_anthropic_thinking_payload::hddedc0a8a68a3be3(
                  &v390,
                  (__int64)&v385);
                if ( __OFSUB__(0, v390.i64[0]) )
                {
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
                  break;
                }
                v371 = a3;
                *(_OWORD *)&v378[8] = *(__int128 *)((char *)v390.i128 + 8);
                *(_QWORD *)v378 = v390.i64[0];
                v379.i64[0] = 0;
                v379.i64[2] = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &v385);
                v86 = 2;
                v87 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                if ( !v87 )
                  goto LABEL_517;
                *v87 = 25705;
                v380.i64[0] = 2;
                v380.i64[1] = (__int64)v87;
                v380.i64[2] = 2;
                uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v390);
                v394[0].i128[0] = v390.i128[0];
                v386.i64[0] = (__int64)v394;
                v386.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(&v390, &unk_1017C5D13, &v386);
                v394[0].i64[0] = v390.i64[0];
                *(__int128 *)((char *)v394[0].i128 + 8) = *(__int128 *)((char *)v390.i128 + 8);
                serde_json::value::to_value::hf4a5c51664f5d8d6(&v390, v394);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D0D0);
                }
                v386 = v390;
                v88 = &v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  &v379,
                  &v380,
                  &v386);
                if ( v390.i8[0] != 6 )
                {
                  v88 = &v390;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                }
                v89 = v394[0].i64[0];
                if ( v394[0].i64[0] )
                {
                  v88 = (__m256i *)v394[0].i64[1];
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v394[0].i64[1], v394[0].i64[0], 1);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v88, v89);
                v86 = 4;
                v90 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v90 )
                  goto LABEL_517;
                *v90 = 1701869940;
                v394[0].i64[0] = 4;
                v394[0].i64[1] = (__int64)v90;
                v394[0].i64[2] = 4;
                serde_json::value::to_value::h29e3c39dc75a9151(&v390, &off_10196CAB8);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D0D0);
                }
                v386 = v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  &v379,
                  v394,
                  &v386);
                if ( v390.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &v379);
                v86 = 6;
                v91 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                if ( !v91 )
                  goto LABEL_517;
                *(_WORD *)(v91 + 4) = 29557;
                *(_DWORD *)v91 = 1952543859;
                v394[0].i64[0] = 6;
                v394[0].i64[1] = v91;
                v394[0].i64[2] = 6;
                serde_json::value::to_value::h29e3c39dc75a9151(&v390, &off_10196CAE0);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D0D0);
                }
                v386 = v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  &v379,
                  v394,
                  &v386);
                if ( v390.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &v379);
                v86 = 7;
                v92 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                if ( !v92 )
                  goto LABEL_517;
                *(_DWORD *)((char *)v92 + 3) = 2037539181;
                *v92 = 1835890035;
                v394[0].i64[0] = 7;
                v394[0].i64[1] = (__int64)v92;
                v394[0].i64[2] = 7;
                v390.i64[1] = 0;
                v390.i128[1] = 8u;
                v390.i8[0] = 4;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v386,
                  &v379,
                  v394,
                  &v390);
                if ( v386.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v386);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v386, &v379);
                v86 = 17;
                v93 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
                if ( !v93 )
LABEL_517:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v86);
                qmemcpy(v93, "encrypted_content", 17);
                v394[0].i64[0] = 17;
                v394[0].i64[1] = (__int64)v93;
                v394[0].i64[2] = 17;
                serde_json::value::to_value::hf4a5c51664f5d8d6(&v390, v378);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D0D0);
                }
                v386 = v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  &v379,
                  v394,
                  &v386);
                if ( v390.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                *(__int128 *)((char *)v383.i128 + 15) = *(__int128 *)((char *)v379.i128 + 8);
                *(__int64 *)((char *)v383.i64 + 7) = v379.i64[0];
                v390.i64[0] = v383.i64[0];
                *(__int128 *)((char *)v390.i128 + 8) = *(__int128 *)((char *)v383.i128 + 8);
                *(__int64 *)((char *)&v390.i64[2] + 7) = v379.i64[2];
                if ( *(_QWORD *)v378 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v378[8], *(_QWORD *)v378, 1);
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
                a3 = v371;
                v94 = 5;
              }
              else
              {
                if ( v37 != 8 || v36->i64[0] != 0x676E696B6E696874LL )
                  break;
                v38 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        &unk_101674AA0,
                        8,
                        v17);
                if ( v38 && *(_BYTE *)v38 == 3 )
                {
                  v39 = *(_QWORD *)(v38 + 16);
                  v40 = *(_QWORD *)(v38 + 24);
                  v340 = v39;
                  v341 = v40;
                  v41 = v40 == 0;
                }
                else
                {
                  v340 = 1;
                  v341 = 0;
                  v41 = 1;
                }
                v68 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "signaturegeminiclaude",
                        9,
                        v17);
                v69 = 1;
                v371 = a3;
                if ( v68 && *(_BYTE *)v68 == 3 )
                {
                  v69 = *(_QWORD *)(v68 + 16);
                  v70 = *(_QWORD *)(v68 + 24);
                }
                else
                {
                  v70 = 0;
                }
                v336[0] = v69;
                v336[1] = v70;
                v383.i64[0] = 0;
                v383.i64[2] = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("signaturegeminiclaude", 9);
                v73 = 4;
                v74 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v74 )
                  goto LABEL_516;
                *v74 = 1701869940;
                v385.i64[0] = 4;
                v385.i64[1] = (__int64)v74;
                v385.i64[2] = 4;
                serde_json::value::to_value::h29e3c39dc75a9151(&v390, &off_10196D090);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D0E8);
                }
                v386 = v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  &v383,
                  &v385,
                  &v386);
                if ( v390.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &v383);
                v73 = 8;
                v75 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                if ( !v75 )
                  goto LABEL_516;
                *v75 = 0x676E696B6E696874LL;
                v385.i64[0] = 8;
                v385.i64[1] = (__int64)v75;
                v385.i64[2] = 8;
                serde_json::value::to_value::h29e3c39dc75a9151(&v390, &v340);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D0E8);
                }
                v386 = v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  &v383,
                  &v385,
                  &v386);
                if ( v390.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &v383);
                v73 = 9;
                v76 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                if ( !v76 )
LABEL_516:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v73);
                *(_QWORD *)v76 = 0x727574616E676973LL;
                *(_BYTE *)(v76 + 8) = 101;
                v385.i64[0] = 9;
                v385.i64[1] = v76;
                v385.i64[2] = 9;
                serde_json::value::to_value::h29e3c39dc75a9151(&v390, v336);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D0E8);
                }
                v386 = v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  &v383,
                  &v385,
                  &v386);
                if ( v390.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                LOBYTE(v384) = v41;
                v394[0].i64[3] = v383.i64[2];
                *(__int128 *)((char *)v394[0].i128 + 8) = v383.i128[0];
                v394[0].i8[0] = 5;
                codexmate_lib::core::relay::translator::encode_anthropic_thinking_payload::hddedc0a8a68a3be3(
                  &v365,
                  (__int64)v394);
                *(_QWORD *)&v372 = 0;
                v373 = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v365, v394);
                v77 = 2;
                v78 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                if ( !v78 )
                  goto LABEL_511;
                *v78 = 25705;
                v380.i64[0] = 2;
                v380.i64[1] = (__int64)v78;
                v380.i64[2] = 2;
                uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v390);
                v385.i128[0] = v390.i128[0];
                v386.i64[0] = (__int64)&v385;
                v386.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(&v390, &unk_1017C5D13, &v386);
                v385.i64[0] = v390.i64[0];
                *(__int128 *)((char *)v385.i128 + 8) = *(__int128 *)((char *)v390.i128 + 8);
                serde_json::value::to_value::hf4a5c51664f5d8d6(&v390, &v385);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D100);
                }
                v386 = v390;
                v79 = &v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  &v372,
                  &v380,
                  &v386);
                if ( v390.i8[0] != 6 )
                {
                  v79 = &v390;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                }
                v80 = v385.i64[0];
                if ( v385.i64[0] )
                {
                  v79 = (__m256i *)v385.i64[1];
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v385.i64[1], v385.i64[0], 1);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v79, v80);
                v77 = 4;
                v81 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v81 )
                  goto LABEL_511;
                *v81 = 1701869940;
                v385.i64[0] = 4;
                v385.i64[1] = (__int64)v81;
                v385.i64[2] = 4;
                serde_json::value::to_value::h29e3c39dc75a9151(&v390, &off_10196CAB8);
                v82 = v371;
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D100);
                }
                v386 = v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  &v372,
                  &v385,
                  &v386);
                if ( v390.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &v372);
                v77 = 6;
                v83 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                if ( !v83 )
                  goto LABEL_511;
                *(_WORD *)(v83 + 4) = 29557;
                *(_DWORD *)v83 = 1952543859;
                v385.i64[0] = 6;
                v385.i64[1] = v83;
                v385.i64[2] = 6;
                serde_json::value::to_value::h29e3c39dc75a9151(&v390, &off_10196CAE0);
                if ( v390.i8[0] == 6 )
                {
                  v386.i64[0] = v390.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v386,
                    &off_10196D480,
                    &off_10196D100);
                }
                v386 = v390;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v390,
                  &v372,
                  &v385,
                  &v386);
                if ( v390.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &v372);
                v77 = 7;
                v84 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                if ( !v84 )
LABEL_511:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v77);
                *(_DWORD *)((char *)v84 + 3) = 2037539181;
                *v84 = 1835890035;
                *(_QWORD *)v378 = 7;
                *(_QWORD *)&v378[8] = v84;
                *(_QWORD *)&v378[16] = 7;
                v382 = (size_t)v84;
                if ( (_BYTE)v384 )
                {
                  *((_QWORD *)&v85 + 1) = 8;
                  *(_QWORD *)&v85 = 0;
                  a3 = v82;
                }
                else
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
                  v384 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                  if ( !v384 )
                    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                  a3 = v82;
                  v379.i64[0] = 0;
                  v379.i64[2] = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
                  v95 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v95 )
                    goto LABEL_520;
                  *v95 = 1701869940;
                  v380.i64[0] = 4;
                  v380.i64[1] = (__int64)v95;
                  v380.i64[2] = 4;
                  serde_json::value::to_value::h29e3c39dc75a9151(&v390, &off_10196CAF0);
                  if ( v390.i8[0] == 6 )
                  {
                    v386.i64[0] = v390.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                      43,
                      &v386,
                      &off_10196D480,
                      &off_10196D118);
                  }
                  v386 = v390;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                    &v390,
                    &v379,
                    &v380,
                    &v386);
                  if ( v390.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &v379);
                  v96 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v96 )
LABEL_520:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
                  *v96 = 1954047348;
                  v380.i64[0] = 4;
                  v380.i64[1] = (__int64)v96;
                  v380.i64[2] = 4;
                  serde_json::value::to_value::h29e3c39dc75a9151(&v390, &v340);
                  if ( v390.i8[0] == 6 )
                  {
                    v386.i64[0] = v390.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                      43,
                      &v386,
                      &off_10196D480,
                      &off_10196D118);
                  }
                  v386 = v390;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                    &v390,
                    &v379,
                    &v380,
                    &v386);
                  if ( v390.i8[0] != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                  v390.i64[0] = v379.i64[0];
                  *(__int128 *)((char *)v390.i128 + 8) = *(__int128 *)((char *)v379.i128 + 8);
                  *(__int128 *)((char *)v385.i128 + 15) = *(__int128 *)((char *)v379.i128 + 8);
                  *(__int64 *)((char *)v385.i64 + 7) = v379.i64[0];
                  *((_QWORD *)&v85 + 1) = v384;
                  *(_BYTE *)v384 = 5;
                  v97 = v385.i64[1];
                  *(_QWORD *)(*((_QWORD *)&v85 + 1) + 1LL) = v385.i64[0];
                  *(_OWORD *)(*((_QWORD *)&v85 + 1) + 9LL) = __PAIR128__(v385.u64[2], v97);
                  *(_QWORD *)(*((_QWORD *)&v85 + 1) + 24LL) = *(__int64 *)((char *)&v385.i64[2] + 7);
                  *(_QWORD *)&v85 = 1;
                }
                *(__int128 *)((char *)v390.i128 + 8) = v85;
                v390.i64[3] = v85;
                v390.i8[0] = 4;
                serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                  &v386,
                  &v390);
                if ( v386.i8[0] == 6 )
                {
                  v385.i64[0] = v386.i64[1];
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v385,
                    &off_10196D480,
                    &off_10196D100);
                }
                v385 = v386;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                  &v386,
                  &v372,
                  v378,
                  &v385);
                if ( v386.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v386);
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v390);
                v383.i64[3] = v373;
                *(__int128 *)((char *)v383.i128 + 8) = v372;
                v383.i8[0] = 5;
                v94 = 5;
                if ( !__OFSUB__(0, (_QWORD)v365) )
                {
                  v390.i64[3] = v366;
                  *(__int128 *)((char *)v390.i128 + 8) = v365;
                  v390.i8[0] = 3;
                  v98 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                     "encrypted_contentsignaturegeminiclaude",
                                     0x11u);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v98);
                  *v98 = v390;
                  v94 = v383.i8[0];
                }
                *(__int64 *)((char *)&v390.i64[2] + 7) = v383.i64[3];
                *(__int128 *)((char *)v390.i128 + 8) = *(__int128 *)((char *)v383.i128 + 9);
                v390.i64[0] = *(__int64 *)((char *)v383.i64 + 1);
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v394);
                if ( v94 == 6 )
                  break;
              }
              v337.i8[0] = v94;
              v337.i64[3] = *(__int64 *)((char *)&v390.i64[2] + 7);
              *(__int128 *)((char *)v337.i128 + 9) = *(__int128 *)((char *)v390.i128 + 8);
              *(__int64 *)((char *)v337.i64 + 1) = v390.i64[0];
              v49 = v376;
              if ( v376 == v374 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v374);
              v50 = v375;
              v51 = 32 * v49;
              *(_OWORD *)(v375 + 32 * v49 + 16) = v337.i128[1];
              v52 = v337.i128[0];
LABEL_174:
              *(_OWORD *)(v50 + v51) = v52;
              v376 = v49 + 1;
              break;
            default:
              break;
          }
        }
        v17 += 32;
        v18 -= 32;
      }
      while ( v18 );
      if ( v359 )
      {
        alloc::str::join_generic_copy::heca7a5e86402c6b6(
          &v390,
          v358,
          v359,
          "\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
          1);
        v369 = (void *)v390.i64[0];
        v158 = v390.i64[2];
        v353[0] = (void *)v390.i64[1];
        v159 = v356;
        if ( v390.i64[2] > v354 - v356 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v354,
            v356,
            v390.i64[2],
            1,
            1,
            v157);
          v159 = v356;
        }
        v160 = v159 + v355;
        v161 = v353[0];
        memcpy((void *)(v159 + v355), v353[0], v158);
        v356 = v158 + v159;
        *(_QWORD *)&v365 = 0;
        v366 = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v160, v161);
        v162 = 4;
        v163 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v163 )
          goto LABEL_501;
        *v163 = 1701869940;
        v380.i64[0] = 4;
        v380.i64[1] = (__int64)v163;
        v380.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v164 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v164 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
        *(_DWORD *)((char *)v164 + 3) = 1701273971;
        *v164 = 1936942445;
        v394[0].i8[0] = 3;
        v394[0].i64[1] = 7;
        v394[0].i64[2] = (__int64)v164;
        v394[0].i64[3] = 7;
        v165 = &v386;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v365, &v380);
        if ( __OFSUB__(0, v386.i64[0]) )
        {
          v166 = v386.i64[1];
          v167 = 32 * v386.i64[3];
          v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
          v168 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
          v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
          v385.i64[0] = v168;
          *(_OWORD *)(v386.i64[1] + v167 + 16) = v394[0].i128[1];
          v169 = (__m256i *)v394[0].i64[1];
          *(_OWORD *)(v166 + v167) = v394[0].i128[0];
          if ( v385.i8[0] != 6 )
          {
            v165 = &v385;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
          }
        }
        else
        {
          v393 = v389;
          v392 = v388;
          v391 = v387;
          v390 = v386;
          v383 = v394[0];
          v165 = &v385;
          v169 = &v390;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v385,
            &v390,
            &v383);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v165, v169);
        v162 = 2;
        v170 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
        if ( !v170 )
          goto LABEL_501;
        *v170 = 25705;
        v380.i64[0] = 2;
        v380.i64[1] = (__int64)v170;
        v380.i64[2] = 2;
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v390);
        v385.i128[0] = v390.i128[0];
        v386.i64[0] = (__int64)&v385;
        v386.i64[1] = (__int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v390, &unk_1017C5D19, &v386);
        v171 = v390.i64[0];
        v172 = v390.u64[2];
        v384 = v390.u64[1];
        if ( v390.i64[2] < 0 )
        {
          v173 = 0;
          goto LABEL_270;
        }
        if ( v390.i64[2] )
        {
          v370 = v158;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v390, &unk_1017C5D19);
          v173 = 1;
          v174 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v172, 1);
          if ( !v174 )
LABEL_270:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v173, v172);
          v175 = v174;
          v158 = v370;
        }
        else
        {
          v175 = 1;
        }
        memcpy((void *)v175, (const void *)v384, v172);
        v394[0].i8[0] = 3;
        v394[0].i64[1] = v172;
        v394[0].i64[2] = v175;
        v394[0].i64[3] = v172;
        v177 = &v386;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v365, &v380);
        if ( v386.i64[0] == 0x8000000000000000LL )
        {
          v178 = v386.i64[1];
          v179 = 32 * v386.i64[3];
          v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
          v180 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
          v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
          v385.i64[0] = v180;
          *(_OWORD *)(v386.i64[1] + v179 + 16) = v394[0].i128[1];
          v181 = (__m256i *)v394[0].i64[1];
          *(_OWORD *)(v178 + v179) = v394[0].i128[0];
          if ( v385.i8[0] != 6 )
          {
            v177 = &v385;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
          }
        }
        else
        {
          v393 = v389;
          v392 = v388;
          v391 = v387;
          v390 = v386;
          v383 = v394[0];
          v177 = &v385;
          v181 = &v390;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v385,
            &v390,
            &v383);
        }
        if ( v171 )
        {
          v177 = (__m256i *)v384;
          v181 = (__m256i *)v171;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v384, v171, 1);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v177, v181);
        v162 = 4;
        v182 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v182 )
          goto LABEL_501;
        *v182 = 1701605234;
        v380.i64[0] = 4;
        v380.i64[1] = (__int64)v182;
        v380.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v183 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
        if ( !v183 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
        *(_QWORD *)v183 = 0x6E61747369737361LL;
        *(_BYTE *)(v183 + 8) = 116;
        v394[0].i8[0] = 3;
        v394[0].i64[1] = 9;
        v394[0].i64[2] = v183;
        v394[0].i64[3] = 9;
        v184 = &v386;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v365, &v380);
        if ( v386.i64[0] == 0x8000000000000000LL )
        {
          v185 = v386.i64[1];
          v186 = 32 * v386.i64[3];
          v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
          v187 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
          v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
          v385.i64[0] = v187;
          *(_OWORD *)(v386.i64[1] + v186 + 16) = v394[0].i128[1];
          v188 = (__m256i *)v394[0].i64[1];
          *(_OWORD *)(v185 + v186) = v394[0].i128[0];
          if ( v385.i8[0] != 6 )
          {
            v184 = &v385;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
          }
        }
        else
        {
          v393 = v389;
          v392 = v388;
          v391 = v387;
          v390 = v386;
          v383 = v394[0];
          v184 = &v385;
          v188 = &v390;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v385,
            &v390,
            &v383);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v184, v188);
        v162 = 6;
        v189 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v189 )
          goto LABEL_501;
        *(_WORD *)(v189 + 4) = 29557;
        *(_DWORD *)v189 = 1952543859;
        v380.i64[0] = 6;
        v380.i64[1] = v189;
        v380.i64[2] = 6;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
        v190 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
        if ( !v190 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
        *(_QWORD *)v190 = 0x6574656C706D6F63LL;
        *(_BYTE *)(v190 + 8) = 100;
        v394[0].i8[0] = 3;
        v394[0].i64[1] = 9;
        v394[0].i64[2] = v190;
        v394[0].i64[3] = 9;
        v191 = &v386;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v365, &v380);
        if ( v386.i64[0] == 0x8000000000000000LL )
        {
          v192 = v386.i64[1];
          v193 = 32 * v386.i64[3];
          v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
          v194 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
          v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
          v385.i64[0] = v194;
          *(_OWORD *)(v386.i64[1] + v193 + 16) = v394[0].i128[1];
          v195 = (__m256i *)v394[0].i64[1];
          *(_OWORD *)(v192 + v193) = v394[0].i128[0];
          if ( v385.i8[0] != 6 )
          {
            v191 = &v385;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
          }
        }
        else
        {
          v393 = v389;
          v392 = v388;
          v391 = v387;
          v390 = v386;
          v383 = v394[0];
          v191 = &v385;
          v195 = &v390;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v385,
            &v390,
            &v383);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v191, v195);
        v162 = 7;
        v196 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v196 )
LABEL_501:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v162);
        *(_DWORD *)((char *)v196 + 3) = 1953391988;
        *v196 = 1953394531;
        *(_QWORD *)&v372 = 7;
        v384 = (size_t)v196;
        *((_QWORD *)&v372 + 1) = v196;
        v373 = 7;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
        v197 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
        if ( !v197 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
        v198 = v197;
        *(_QWORD *)v378 = 0;
        *(_QWORD *)&v378[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
        v199 = 4;
        v200 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v200 )
          goto LABEL_503;
        *v200 = 1701869940;
        v379.i64[0] = 4;
        v379.i64[1] = (__int64)v200;
        v379.i64[2] = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v201 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
        if ( !v201 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
        qmemcpy(v201, "output_text", 11);
        v394[0].i8[0] = 3;
        v394[0].i64[1] = 11;
        v394[0].i64[2] = (__int64)v201;
        v394[0].i64[3] = 11;
        v202 = &v386;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
        if ( v386.i64[0] == 0x8000000000000000LL )
        {
          v203 = v386.i64[1];
          v204 = 32 * v386.i64[3];
          v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
          v205 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
          v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
          v385.i64[0] = v205;
          *(_OWORD *)(v386.i64[1] + v204 + 16) = v394[0].i128[1];
          v206 = (__m256i *)v394[0].i64[1];
          *(_OWORD *)(v203 + v204) = v394[0].i128[0];
          if ( v385.i8[0] != 6 )
          {
            v202 = &v385;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
          }
        }
        else
        {
          v393 = v389;
          v392 = v388;
          v391 = v387;
          v390 = v386;
          v383 = v394[0];
          v202 = &v385;
          v206 = &v390;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v385,
            &v390,
            &v383);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v202, v206);
        v207 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v207 )
          goto LABEL_503;
        *v207 = 1954047348;
        v379.i64[0] = 4;
        v379.i64[1] = (__int64)v207;
        v379.i64[2] = 4;
        if ( v158 < 0 )
        {
          v208 = 0;
          goto LABEL_307;
        }
        if ( v158 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v208 = 1;
          v209 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v158, 1);
          if ( !v209 )
LABEL_307:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v208, v158);
          v210 = v209;
        }
        else
        {
          v210 = 1;
        }
        memcpy((void *)v210, v353[0], v158);
        v394[0].i8[0] = 3;
        v394[0].i64[1] = v158;
        v394[0].i64[2] = v210;
        v394[0].i64[3] = v158;
        v211 = &v386;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
        if ( v386.i64[0] == 0x8000000000000000LL )
        {
          v212 = v386.i64[1];
          v213 = 32 * v386.i64[3];
          v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
          v214 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
          v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
          v385.i64[0] = v214;
          *(_OWORD *)(v386.i64[1] + v213 + 16) = v394[0].i128[1];
          v215 = (__m256i *)v394[0].i64[1];
          *(_OWORD *)(v212 + v213) = v394[0].i128[0];
          if ( v385.i8[0] != 6 )
          {
            v211 = &v385;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
          }
        }
        else
        {
          v393 = v389;
          v392 = v388;
          v391 = v387;
          v390 = v386;
          v383 = v394[0];
          v211 = &v385;
          v215 = &v390;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v385,
            &v390,
            &v383);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v211, v215);
        v199 = 11;
        v216 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
        if ( !v216 )
LABEL_503:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v199);
        qmemcpy(v216, "annotations", 11);
        v379.i64[0] = 11;
        v379.i64[1] = (__int64)v216;
        v379.i64[2] = 11;
        v394[0].i64[1] = 0;
        v394[0].i128[1] = 8u;
        v394[0].i8[0] = 4;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
        if ( v386.i64[0] == 0x8000000000000000LL )
        {
          v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
          v217 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
          v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
          v385.i64[0] = v217;
          *(__m256i *)(v386.i64[1] + 32 * v386.i64[3]) = v394[0];
          if ( v385.i8[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
        }
        else
        {
          v393 = v389;
          v392 = v388;
          v391 = v387;
          v390 = v386;
          v383 = v394[0];
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v385,
            &v390,
            &v383);
        }
        *(__int128 *)((char *)v390.i128 + 7) = *(_OWORD *)v378;
        *(__int64 *)((char *)&v390.i64[2] + 7) = *(_QWORD *)&v378[16];
        *(_BYTE *)v198 = 5;
        *(_QWORD *)(v198 + 24) = *(__int64 *)((char *)&v390.i64[2] + 7);
        *(_QWORD *)(v198 + 17) = v390.i64[2];
        *(_OWORD *)(v198 + 1) = v390.i128[0];
        v380.i64[1] = 1;
        v380.i64[2] = v198;
        v380.i64[3] = 1;
        v380.i8[0] = 4;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v365, &v372);
        if ( v386.i64[0] == 0x8000000000000000LL )
        {
          v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
          v218 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
          v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
          v385.i64[0] = v218;
          *(__m256i *)(v386.i64[1] + 32 * v386.i64[3]) = v380;
          if ( v385.i8[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
        }
        else
        {
          v393 = v389;
          v392 = v388;
          v391 = v387;
          v390 = v386;
          v383 = v380;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v385,
            &v390,
            &v383);
        }
        *(__int128 *)((char *)v390.i128 + 8) = v365;
        v390.i64[3] = v366;
        v390.i8[0] = 5;
        v219 = v376;
        if ( v376 == v374 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v374);
        *(__m256i *)(v375 + 32 * v219) = v390;
        v376 = v219 + 1;
        if ( v369 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v353[0], v369, 1);
      }
    }
    v220 = v347;
    v221 = v348;
    v222 = 32 * v348;
    v390.i64[0] = (__int64)v347;
    v390.i64[2] = v346;
    v390.i64[1] = (__int64)v347;
    v390.i64[3] = (__int64)v347 + 32 * v348;
    v223 = v376;
    if ( v348 > v374 - v376 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v374,
        v376,
        v348,
        8,
        32,
        v15);
      v223 = v376;
    }
    v4 = v342;
    memcpy((void *)(v375 + 32 * v223), v220, v222);
    v376 = v223 + v221;
    v390.i64[3] = (__int64)v220;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h48a11a5296989bff(&v390);
    v224 = v359;
    if ( v359 )
    {
      v225 = (_QWORD *)(v358 + 8);
      do
      {
        v226 = *(v225 - 1);
        if ( v226 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v225, v226, 1);
        v225 += 3;
        --v224;
      }
      while ( v224 );
    }
    if ( v357 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v358, 24 * v357, 8);
  }
  v227 = (__m256i *)"usage";
  v228 = 5;
  v229 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("usage", 5, v4);
  v230 = v229;
  if ( v229 )
  {
    v231 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "input_tokensoutput_tokens",
             12,
             v229);
    if ( v231 && *(_BYTE *)v231 == 2 && (v232 = *(_QWORD *)(v231 + 8), v232 != 2) )
    {
      if ( (_DWORD)v232 == 1 )
      {
        v233 = *(_QWORD *)(v231 + 16);
      }
      else
      {
        v332 = *(_QWORD *)(v231 + 16);
        v233 = 0;
        if ( v332 > 0 )
          v233 = v332;
      }
    }
    else
    {
      v233 = 0;
    }
    v234 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "cache_read_input_tokenscache_creation_input_tokensencrypted_contentsignaturegeminiclaude",
             23,
             v230);
    if ( v234 && *(_BYTE *)v234 == 2 && (v235 = *(_QWORD *)(v234 + 8), v235 != 2) )
    {
      if ( (_DWORD)v235 == 1 )
      {
        v236 = *(_QWORD *)(v234 + 16);
      }
      else
      {
        v333 = *(_QWORD *)(v234 + 16);
        v236 = 0;
        if ( v333 > 0 )
          v236 = v333;
      }
    }
    else
    {
      v236 = 0;
    }
    v237 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "cache_creation_input_tokensencrypted_contentsignaturegeminiclaude",
             27,
             v230);
    if ( v237 && *(_BYTE *)v237 == 2 && (v238 = *(_QWORD *)(v237 + 8), v238 != 2) )
    {
      if ( (_DWORD)v238 == 1 )
      {
        v239 = *(_QWORD *)(v237 + 16);
      }
      else
      {
        v334 = *(_QWORD *)(v237 + 16);
        v239 = 0;
        if ( v334 > 0 )
          v239 = v334;
      }
    }
    else
    {
      v239 = 0;
    }
    v240 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "output_tokens",
             13,
             v230);
    if ( v240 && *(_BYTE *)v240 == 2 && (v241 = *(_QWORD *)(v240 + 8), v241 != 2) )
    {
      if ( (_DWORD)v241 == 1 )
      {
        v242 = *(_QWORD *)(v240 + 16);
      }
      else
      {
        v335 = *(_QWORD *)(v240 + 16);
        v242 = 0;
        if ( v335 > 0 )
          v242 = v335;
      }
    }
    else
    {
      v242 = 0;
    }
    v379.i64[0] = 0;
    v379.i64[2] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("output_tokens", 13);
    v243 = 12;
    v244 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v244 )
      goto LABEL_498;
    v245 = v239 + v233 + v236;
    qmemcpy(v244, "input_tokens", 12);
    v380.i64[0] = 12;
    v380.i64[1] = (__int64)v244;
    v380.i64[2] = 12;
    v394[0].i8[0] = 2;
    v394[0].i64[1] = v245 >> 63;
    v394[0].i64[2] = v245;
    v246 = &v386;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v379, &v380);
    if ( v386.i64[0] == 0x8000000000000000LL )
    {
      v247 = v386.i64[1];
      v248 = 32 * v386.i64[3];
      v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
      v249 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
      v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
      v385.i64[0] = v249;
      *(_OWORD *)(v386.i64[1] + v248 + 16) = v394[0].i128[1];
      v250 = (__m256i *)v394[0].i64[1];
      *(_OWORD *)(v247 + v248) = v394[0].i128[0];
      if ( v385.i8[0] != 6 )
      {
        v246 = &v385;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
      }
    }
    else
    {
      v393 = v389;
      v392 = v388;
      v391 = v387;
      v390 = v386;
      v383 = v394[0];
      v246 = &v385;
      v250 = &v390;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v385,
        &v390,
        &v383);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v246, v250);
    v243 = 13;
    v251 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( !v251 )
      goto LABEL_498;
    qmemcpy(v251, "output_tokens", 13);
    v380.i64[0] = 13;
    v380.i64[1] = (__int64)v251;
    v380.i64[2] = 13;
    v394[0].i8[0] = 2;
    v394[0].i64[1] = v242 >> 63;
    v394[0].i64[2] = v242;
    v252 = &v386;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v379, &v380);
    if ( v386.i64[0] == 0x8000000000000000LL )
    {
      v253 = v386.i64[1];
      v254 = 32 * v386.i64[3];
      v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
      v255 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
      v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
      v385.i64[0] = v255;
      *(_OWORD *)(v386.i64[1] + v254 + 16) = v394[0].i128[1];
      v256 = (__m256i *)v394[0].i64[1];
      *(_OWORD *)(v253 + v254) = v394[0].i128[0];
      if ( v385.i8[0] != 6 )
      {
        v252 = &v385;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
      }
    }
    else
    {
      v393 = v389;
      v392 = v388;
      v391 = v387;
      v390 = v386;
      v383 = v394[0];
      v252 = &v385;
      v256 = &v390;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v385,
        &v390,
        &v383);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v252, v256);
    v243 = 12;
    v257 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v257 )
LABEL_498:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v243);
    qmemcpy(v257, "total_tokens", 12);
    v380.i64[0] = 12;
    v380.i64[1] = (__int64)v257;
    v380.i64[2] = 12;
    v258 = v245 + v242;
    v394[0].i8[0] = 2;
    v394[0].i64[1] = v258 >> 63;
    v394[0].i64[2] = v258;
    v227 = &v386;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, &v379, &v380);
    if ( v386.i64[0] == 0x8000000000000000LL )
    {
      v259 = v386.i64[1];
      v260 = 32 * v386.i64[3];
      v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
      v261 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
      v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
      v385.i64[0] = v261;
      *(_OWORD *)(v386.i64[1] + v260 + 16) = v394[0].i128[1];
      v228 = v394[0].i64[1];
      *(_OWORD *)(v259 + v260) = v394[0].i128[0];
      if ( v385.i8[0] != 6 )
      {
        v227 = &v385;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
      }
    }
    else
    {
      v393 = v389;
      v392 = v388;
      v391 = v387;
      v390 = v386;
      v383 = v394[0];
      v227 = &v385;
      v228 = (__int64)&v390;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v385,
        &v390,
        &v383);
    }
    *(__int64 *)((char *)v390.i64 + 7) = v379.i64[0];
    *(__int128 *)((char *)v390.i128 + 15) = *(__int128 *)((char *)v379.i128 + 8);
    v380.i64[3] = v379.i64[2];
    *(__int128 *)((char *)v380.i128 + 1) = v390.i128[0];
    *(__int64 *)((char *)&v380.i64[2] + 1) = *(unsigned __int128 *)((char *)v379.i128 + 8) >> 8;
  }
  else
  {
    v380.i64[1] = 0;
    v380.i64[3] = 0;
  }
  v380.i8[0] = 5;
  *(_QWORD *)v378 = 0;
  *(_QWORD *)&v378[16] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v227, v228);
  v262 = 2;
  v263 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v263 )
    goto LABEL_490;
  *v263 = 25705;
  v379.i64[0] = 2;
  v379.i64[1] = (__int64)v263;
  v379.i64[2] = 2;
  v264 = v339;
  if ( (v339 & 0x8000000000000000LL) != 0LL )
  {
    v265 = 0;
    goto LABEL_387;
  }
  v266 = (const void *)v338[1];
  if ( v339 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
    v265 = 1;
    v267 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v264, 1);
    if ( !v267 )
LABEL_387:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v265, v264);
    v268 = v267;
  }
  else
  {
    v268 = 1;
  }
  memcpy((void *)v268, v266, v264);
  v394[0].i8[0] = 3;
  v394[0].i64[1] = v264;
  v394[0].i64[2] = v268;
  v394[0].i64[3] = v264;
  v269 = &v386;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
  if ( v386.i64[0] == 0x8000000000000000LL )
  {
    v270 = v386.i64[1];
    v271 = 32 * v386.i64[3];
    v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
    v272 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
    v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
    v385.i64[0] = v272;
    *(_OWORD *)(v386.i64[1] + v271 + 16) = v394[0].i128[1];
    v273 = (__m256i *)v394[0].i64[1];
    *(_OWORD *)(v270 + v271) = v394[0].i128[0];
    if ( v385.i8[0] != 6 )
    {
      v269 = &v385;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
    }
  }
  else
  {
    v393 = v389;
    v392 = v388;
    v391 = v387;
    v390 = v386;
    v383 = v394[0];
    v269 = &v385;
    v273 = &v390;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v385,
      &v390,
      &v383);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v269, v273);
  v262 = 6;
  v274 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v274 )
    goto LABEL_490;
  *(_WORD *)(v274 + 4) = 29795;
  *(_DWORD *)v274 = 1701470831;
  v379.i64[0] = 6;
  v379.i64[1] = v274;
  v379.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v275 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v275 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
  *v275 = 0x65736E6F70736572LL;
  v394[0].i8[0] = 3;
  v394[0].i64[1] = 8;
  v394[0].i64[2] = (__int64)v275;
  v394[0].i64[3] = 8;
  v276 = &v386;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
  if ( v386.i64[0] == 0x8000000000000000LL )
  {
    v277 = v386.i64[1];
    v278 = 32 * v386.i64[3];
    v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
    v279 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
    v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
    v385.i64[0] = v279;
    *(_OWORD *)(v386.i64[1] + v278 + 16) = v394[0].i128[1];
    v280 = (__m256i *)v394[0].i64[1];
    *(_OWORD *)(v277 + v278) = v394[0].i128[0];
    if ( v385.i8[0] != 6 )
    {
      v276 = &v385;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
    }
  }
  else
  {
    v393 = v389;
    v392 = v388;
    v391 = v387;
    v390 = v386;
    v383 = v394[0];
    v276 = &v385;
    v280 = &v390;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v385,
      &v390,
      &v383);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v276, v280);
  v262 = 10;
  v281 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v281 )
    goto LABEL_490;
  qmemcpy(v281, "created_at", 10);
  v379.i64[0] = 10;
  v379.i64[1] = (__int64)v281;
  v379.i64[2] = 10;
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v372);
  v282 = ((int)v372 >> 13) - 1;
  v283 = 0;
  if ( (int)v372 >> 13 <= 0 )
  {
    v284 = (1 - ((int)v372 >> 13)) / 0x190u + 1;
    v282 += 400 * v284;
    v283 = -146097 * v284;
  }
  v394[0].i8[0] = 2;
  v394[0].i64[1] = ((unsigned __int64)DWORD1(v372)
                  + 86400LL
                  * (int)(((v282 / 100) >> 2)
                        + ((1461 * v282) >> 2)
                        + v283
                        + (((unsigned int)v372 >> 4) & 0x1FF)
                        - v282 / 100
                        - 719163)) >> 63;
  v394[0].i64[2] = DWORD1(v372)
                 + 86400LL
                 * (int)(((v282 / 100) >> 2)
                       + ((1461 * v282) >> 2)
                       + v283
                       + (((unsigned int)v372 >> 4) & 0x1FF)
                       - v282 / 100
                       - 719163);
  v285 = &v386;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
  if ( v386.i64[0] == 0x8000000000000000LL )
  {
    v286 = v386.i64[1];
    v287 = 32 * v386.i64[3];
    v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
    v288 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
    v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
    v385.i64[0] = v288;
    *(_OWORD *)(v386.i64[1] + v287 + 16) = v394[0].i128[1];
    v289 = (__m256i *)v394[0].i64[1];
    *(_OWORD *)(v286 + v287) = v394[0].i128[0];
    if ( v385.i8[0] != 6 )
    {
      v285 = &v385;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
    }
  }
  else
  {
    v393 = v389;
    v392 = v388;
    v391 = v387;
    v390 = v386;
    v383 = v394[0];
    v285 = &v385;
    v289 = &v390;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v385,
      &v390,
      &v383);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v285, v289);
  v262 = 6;
  v290 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v290 )
    goto LABEL_490;
  *(_WORD *)(v290 + 4) = 29557;
  *(_DWORD *)v290 = 1952543859;
  v379.i64[0] = 6;
  v379.i64[1] = v290;
  v379.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v291 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v291 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v291 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v291 + 8) = 100;
  v394[0].i8[0] = 3;
  v394[0].i64[1] = 9;
  v394[0].i64[2] = v291;
  v394[0].i64[3] = 9;
  v292 = &v386;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
  if ( v386.i64[0] == 0x8000000000000000LL )
  {
    v293 = v386.i64[1];
    v294 = 32 * v386.i64[3];
    v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
    v295 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
    v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
    v385.i64[0] = v295;
    *(_OWORD *)(v386.i64[1] + v294 + 16) = v394[0].i128[1];
    v296 = (__m256i *)v394[0].i64[1];
    *(_OWORD *)(v293 + v294) = v394[0].i128[0];
    if ( v385.i8[0] != 6 )
    {
      v292 = &v385;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
    }
  }
  else
  {
    v393 = v389;
    v392 = v388;
    v391 = v387;
    v390 = v386;
    v383 = v394[0];
    v292 = &v385;
    v296 = &v390;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v385,
      &v390,
      &v383);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v292, v296);
  v262 = 5;
  v297 = 1;
  v298 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v298 )
    goto LABEL_490;
  *(_BYTE *)(v298 + 4) = 108;
  *(_DWORD *)v298 = 1701080941;
  v379.i64[0] = 5;
  v379.i64[1] = v298;
  v379.i64[2] = 5;
  if ( !(_BYTE)v360 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v299 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    if ( !v299 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v297 = v299;
  }
  v300 = __n;
  memcpy((void *)v297, __dst, __n);
  v394[0].i8[0] = 3;
  v394[0].i64[1] = v300;
  v394[0].i64[2] = v297;
  v394[0].i64[3] = v300;
  v301 = &v386;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
  if ( v386.i64[0] == 0x8000000000000000LL )
  {
    v302 = v386.i64[1];
    v303 = 32 * v386.i64[3];
    v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
    v304 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
    v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
    v385.i64[0] = v304;
    *(_OWORD *)(v386.i64[1] + v303 + 16) = v394[0].i128[1];
    v305 = (__m256i *)v394[0].i64[1];
    *(_OWORD *)(v302 + v303) = v394[0].i128[0];
    if ( v385.i8[0] != 6 )
    {
      v301 = &v385;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
    }
  }
  else
  {
    v393 = v389;
    v392 = v388;
    v391 = v387;
    v390 = v386;
    v383 = v394[0];
    v301 = &v385;
    v305 = &v390;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v385,
      &v390,
      &v383);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v301, v305);
  v262 = 6;
  v306 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v306 )
    goto LABEL_490;
  *(_WORD *)(v306 + 4) = 29813;
  *(_DWORD *)v306 = 1886680431;
  v379.i64[0] = 6;
  v379.i64[1] = v306;
  v379.i64[2] = 6;
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&v390, &v374);
  if ( v390.i8[0] == 6 )
  {
    v386.i64[0] = v390.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v386,
      &off_10196D480,
      &off_10196D050);
  }
  v394[0] = v390;
  v307 = &v386;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
  if ( v386.i64[0] == 0x8000000000000000LL )
  {
    v308 = v386.i64[1];
    v309 = 32 * v386.i64[3];
    v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
    v310 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
    v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
    v385.i64[0] = v310;
    *(_OWORD *)(v386.i64[1] + v309 + 16) = v394[0].i128[1];
    v311 = (__m256i *)v394[0].i64[1];
    *(_OWORD *)(v308 + v309) = v394[0].i128[0];
    if ( v385.i8[0] != 6 )
    {
      v307 = &v385;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
    }
  }
  else
  {
    v393 = v389;
    v392 = v388;
    v391 = v387;
    v390 = v386;
    v383 = v394[0];
    v307 = &v385;
    v311 = &v390;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v385,
      &v390,
      &v383);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v307, v311);
  v262 = 11;
  v312 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v312 )
    goto LABEL_490;
  qmemcpy(v312, "output_text", 11);
  v379.i64[0] = 11;
  v379.i64[1] = (__int64)v312;
  v379.i64[2] = 11;
  v313 = v356;
  if ( (v356 & 0x8000000000000000LL) != 0LL )
  {
    v314 = 0;
    goto LABEL_432;
  }
  v315 = (void *)v355;
  if ( v356 )
  {
    v360 = (void *)v355;
    v316 = v266;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1);
    v314 = 1;
    v317 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v313, 1);
    if ( !v317 )
LABEL_432:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v314, v313);
    v318 = v317;
    v266 = v316;
    v315 = v360;
  }
  else
  {
    v318 = 1;
  }
  memcpy((void *)v318, v315, v313);
  v394[0].i8[0] = 3;
  v394[0].i64[1] = v313;
  v394[0].i64[2] = v318;
  v394[0].i64[3] = v313;
  v319 = &v386;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
  if ( v386.i64[0] == 0x8000000000000000LL )
  {
    v320 = v386.i64[1];
    v321 = 32 * v386.i64[3];
    v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
    v322 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
    v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
    v385.i64[0] = v322;
    *(_OWORD *)(v386.i64[1] + v321 + 16) = v394[0].i128[1];
    v323 = (__m256i *)v394[0].i64[1];
    *(_OWORD *)(v320 + v321) = v394[0].i128[0];
    if ( v385.i8[0] != 6 )
    {
      v319 = &v385;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
    }
  }
  else
  {
    v393 = v389;
    v392 = v388;
    v391 = v387;
    v390 = v386;
    v383 = v394[0];
    v319 = &v385;
    v323 = &v390;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v385,
      &v390,
      &v383);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v319, v323);
  v262 = 5;
  v324 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v324 )
LABEL_490:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v262);
  *(_BYTE *)(v324 + 4) = 101;
  *(_DWORD *)v324 = 1734439797;
  v379.i64[0] = 5;
  v379.i64[1] = v324;
  v379.i64[2] = 5;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v390,
    &v380);
  if ( v390.i8[0] == 6 )
  {
    v386.i64[0] = v390.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v386,
      &off_10196D480,
      &off_10196D050);
  }
  v394[0] = v390;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v386, v378, &v379);
  if ( v386.i64[0] == 0x8000000000000000LL )
  {
    v385.i128[1] = *(_OWORD *)(v386.i64[1] + 32 * v386.i64[3] + 16);
    v325 = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3]);
    v385.i64[1] = *(_QWORD *)(v386.i64[1] + 32 * v386.i64[3] + 8);
    v385.i64[0] = v325;
    *(__m256i *)(v386.i64[1] + 32 * v386.i64[3]) = v394[0];
    if ( v385.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v385);
  }
  else
  {
    v393 = v389;
    v392 = v388;
    v391 = v387;
    v390 = v386;
    v383 = v394[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v385,
      &v390,
      &v383);
  }
  v326 = v266;
  v327 = v349;
  *(_QWORD *)(v349 + 24) = *(_QWORD *)&v378[16];
  *(_OWORD *)(v327 + 8) = *(_OWORD *)v378;
  v328 = v327;
  *(_BYTE *)v327 = 5;
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v380);
  if ( v354 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v315, v354, 1);
  v329 = v375;
  for ( i = v376 + 1; i != 1; --i )
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v329);
    v329 += 32;
  }
  if ( v374 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v375, 32 * v374, 8);
  if ( __n )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst, __n, 1);
  if ( v338[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v326, v338[0], 1);
  return v328;
}
