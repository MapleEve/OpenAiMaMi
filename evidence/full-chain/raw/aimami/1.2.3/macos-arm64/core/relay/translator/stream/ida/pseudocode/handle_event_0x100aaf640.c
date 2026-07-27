// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream12handle_event @ 0x100aaf640 | 基线 same-set
// [FULL IDA decompiler]

__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::handle_event::he7f3a9221bd43bab(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  size_t v8; // r13
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // r12
  const void *v17; // rbx
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rax
  __int64 **v26; // rcx
  __int64 **v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r9
  __int128 v31; // kr10_16
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned __int8 v36; // al
  __int64 v37; // r15
  __int64 v38; // rsi
  __int64 v39; // r12
  _DWORD *v40; // rax
  void *v41; // rax
  __int64 v42; // rbx
  _DWORD *v43; // rax
  __int64 v44; // rax
  _DWORD *v45; // r15
  __int64 v46; // r9
  __int128 v47; // kr20_16
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // r13
  _DWORD *v51; // rax
  _WORD *v52; // rax
  __int64 v53; // rax
  _DWORD *v54; // rax
  _DWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  size_t v58; // r15
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  _DWORD *v65; // rcx
  bool v66; // zf
  __int64 v67; // rcx
  __int64 v68; // r14
  void *v69; // r15
  _OWORD *v70; // r12
  __int64 v71; // rax
  __int64 v72; // r14
  _BYTE *v73; // r15
  __int64 v74; // rax
  size_t v75; // r15
  __int64 v76; // r12
  __m128i v77; // xmm1
  __int64 v78; // r15
  __int64 v79; // r12
  const void *v80; // r13
  __int64 v81; // r12
  _DWORD *v82; // rax
  void *v83; // rax
  _DWORD *v84; // rax
  _DWORD *v85; // rax
  __int64 v86; // r9
  __int128 v87; // kr30_16
  __int64 v88; // rsi
  __int64 v89; // rax
  size_t v90; // r12
  __int64 v91; // r15
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // r9
  const void *v97; // r12
  size_t v98; // r15
  __int64 v99; // rsi
  void *v100; // rdi
  __int64 v101; // r12
  _DWORD *v102; // rax
  void *v103; // rax
  __int64 v104; // rax
  _DWORD *v105; // rax
  __int64 v106; // rsi
  void *v107; // rax
  __int64 v108; // rax
  __int64 v109; // r9
  const void *v110; // r14
  size_t v111; // r15
  __int64 v112; // rsi
  __int64 v113; // rbx
  const void *v114; // r14
  size_t v115; // r14
  __int64 v116; // rax
  size_t v117; // rbx
  __int64 v118; // r15
  __int64 v119; // rax
  size_t v120; // rbx
  __int64 v121; // r15
  __int64 v122; // rdi
  __int64 v123; // r15
  _DWORD *v124; // rax
  void *v125; // rax
  _DWORD *v126; // rax
  _DWORD *v127; // rax
  _DWORD *v128; // rax
  _WORD *v129; // rax
  __int64 v130; // rax
  _DWORD *v131; // rax
  void *v132; // rax
  __int64 v133; // r13
  __int64 v134; // r9
  const void *v135; // r12
  size_t v136; // r15
  __int64 v137; // rsi
  __int64 v138; // rsi
  size_t v139; // rcx
  __m128i v140; // xmm1
  __int64 v141; // r15
  _DWORD *v142; // rax
  void *v143; // rax
  _DWORD *v144; // rax
  void *v145; // rax
  _DWORD *v146; // rax
  _DWORD *v147; // rax
  _DWORD *v148; // rax
  __int64 v149; // r9
  const void *v150; // r12
  size_t v151; // r15
  __int64 v152; // rsi
  __int64 v153; // r12
  _DWORD *v154; // rax
  void *v155; // rax
  _DWORD *v156; // rax
  void *v157; // rax
  __int64 v158; // rax
  __int64 v159; // r9
  const void *v160; // r15
  size_t v161; // r12
  __int64 v162; // rsi
  __m128i v163; // xmm1
  unsigned __int8 v164; // bl
  __int64 v165; // r14
  __int64 *v166; // rax
  __int64 v167; // rax
  __int64 v168; // r9
  const void *v169; // r12
  size_t v170; // r15
  __int64 v171; // rsi
  __int64 v172; // rax
  __int64 v173; // r9
  const void *v174; // r12
  size_t v175; // r15
  __int64 v176; // rsi
  void *v177; // rdi
  __int64 v178; // r12
  _DWORD *v179; // rax
  void *v180; // rax
  __int64 v181; // rax
  _DWORD *v182; // rax
  __int64 v183; // rsi
  void *v184; // rax
  __int64 v185; // rax
  __int64 v186; // r9
  const void *v187; // r14
  size_t v188; // r15
  __int64 v189; // rsi
  __m128i v190; // xmm0
  void *v191; // rsi
  _OWORD *v192; // rdi
  __int64 v193; // r12
  _DWORD *v194; // rax
  void *v195; // rax
  _DWORD *v196; // rax
  _DWORD *v197; // rax
  __int64 v198; // r15
  _DWORD *v199; // rax
  _WORD *v200; // rax
  _DWORD *v201; // rax
  __int64 v202; // rax
  _DWORD *v203; // rax
  __int64 v204; // rax
  __int64 v205; // r13
  _DWORD *v206; // rax
  _DWORD *v207; // rax
  __int64 v208; // r15
  __int64 v209; // r9
  const void *v210; // r12
  size_t v211; // r13
  __int64 v212; // rsi
  __int64 v213; // rsi
  __int64 v214; // r13
  _DWORD *v215; // rax
  void *v216; // rax
  _DWORD *v217; // rax
  void *v218; // rax
  _DWORD *v219; // rax
  __int64 v220; // rbx
  __int64 v221; // r15
  _DWORD *v222; // rax
  _DWORD *v223; // rax
  void *v224; // rax
  __int64 v225; // r9
  const void *v226; // r15
  size_t v227; // r12
  __int64 v228; // rsi
  __int64 v229; // rbx
  __int64 v230; // rax
  __int64 *v231; // rbx
  __int64 v232; // r14
  __int64 v233; // rax
  size_t v234; // rbx
  __int64 v235; // r15
  unsigned int *v236; // r13
  const char *v237; // r12
  size_t v238; // rdx
  size_t v239; // r15
  const void *v240; // r14
  const __m128i *v241; // r14
  _BYTE *v242; // r12
  _BYTE *v243; // rdi
  __int64 v244; // rsi
  __int64 v245; // r15
  _DWORD *v246; // rax
  _DWORD *v247; // r13
  _WORD *v248; // rax
  __int64 v249; // rax
  _DWORD *v250; // rax
  _DWORD *v251; // rax
  __int64 v252; // rax
  const void *v253; // rsi
  __int64 v254; // r15
  _DWORD *v255; // rax
  void *v256; // rax
  _DWORD *v257; // rax
  _DWORD *v258; // rax
  __int64 v259; // r9
  const void *v260; // r15
  size_t v261; // r12
  __int64 v262; // rsi
  unsigned int *v263; // rbx
  double v264; // xmm0_8
  _QWORD *v265; // rdx
  __int64 result; // rax
  __int64 v267; // rax
  const void *v268; // r13
  size_t v269; // r12
  __int64 v270; // rax
  __int64 v271; // r9
  __int64 v272; // r15
  __int64 v273; // rsi
  void *v274; // rdi
  __int64 v275; // r13
  _DWORD *v276; // rax
  void *v277; // rax
  __int64 v278; // rax
  _DWORD *v279; // rax
  __int64 v280; // rax
  __int64 v281; // r9
  const void *v282; // r14
  size_t v283; // r15
  __int64 v284; // rsi
  _BYTE *v285; // rdi
  __int64 v286; // rsi
  __int64 v287; // r12
  _DWORD *v288; // rax
  void *v289; // rax
  _DWORD *v290; // rax
  _DWORD *v291; // rax
  __int64 v292; // r13
  _DWORD *v293; // rax
  _WORD *v294; // rax
  __int64 v295; // rax
  __int64 v296; // rbx
  __int64 v297; // r9
  const void *v298; // r12
  size_t v299; // r13
  __int64 v300; // rsi
  __int64 v301; // rsi
  __int64 v302; // r13
  _DWORD *v303; // rax
  void *v304; // rax
  _DWORD *v305; // rax
  _DWORD *v306; // rax
  __int64 v307; // r15
  _DWORD *v308; // rax
  _WORD *v309; // rax
  __int64 v310; // rax
  __int64 v311; // r9
  const void *v312; // r15
  size_t v313; // r12
  __int64 v314; // rsi
  __int64 v315; // rsi
  double v316; // xmm0_8
  __int64 v317; // r12
  _DWORD *v318; // rax
  _WORD *v319; // rax
  __int64 v320; // rax
  _QWORD v321[2]; // [rsp+20h] [rbp-2B0h] BYREF
  _QWORD v322[2]; // [rsp+30h] [rbp-2A0h] BYREF
  _QWORD v323[2]; // [rsp+40h] [rbp-290h] BYREF
  __int64 *v324; // [rsp+50h] [rbp-280h]
  __int128 v325; // [rsp+58h] [rbp-278h]
  __int64 v326; // [rsp+68h] [rbp-268h]
  const void *v327; // [rsp+70h] [rbp-260h]
  size_t v328; // [rsp+78h] [rbp-258h]
  _QWORD *v329; // [rsp+80h] [rbp-250h]
  size_t v330; // [rsp+88h] [rbp-248h]
  size_t v331; // [rsp+90h] [rbp-240h]
  __int64 v332; // [rsp+98h] [rbp-238h]
  size_t v333; // [rsp+A0h] [rbp-230h]
  __int64 **v334; // [rsp+A8h] [rbp-228h] BYREF
  __int128 v335; // [rsp+B0h] [rbp-220h]
  __int64 v336; // [rsp+C0h] [rbp-210h]
  unsigned int *v337; // [rsp+C8h] [rbp-208h]
  __int64 v338; // [rsp+D0h] [rbp-200h]
  _DWORD *v339; // [rsp+D8h] [rbp-1F8h]
  __int64 *v340; // [rsp+E0h] [rbp-1F0h] BYREF
  __int128 v341; // [rsp+E8h] [rbp-1E8h]
  __int64 v342; // [rsp+F8h] [rbp-1D8h] BYREF
  const void *v343; // [rsp+100h] [rbp-1D0h]
  size_t v344; // [rsp+108h] [rbp-1C8h]
  __int64 v345; // [rsp+110h] [rbp-1C0h]
  __int128 v346; // [rsp+118h] [rbp-1B8h] BYREF
  __int64 v347; // [rsp+128h] [rbp-1A8h]
  _BYTE v348[24]; // [rsp+130h] [rbp-1A0h] BYREF
  __int64 v349; // [rsp+148h] [rbp-188h] BYREF
  __int64 v350; // [rsp+150h] [rbp-180h]
  __int64 v351; // [rsp+158h] [rbp-178h]
  __int64 v352; // [rsp+160h] [rbp-170h] BYREF
  __int128 v353; // [rsp+168h] [rbp-168h]
  __int64 v354; // [rsp+178h] [rbp-158h]
  _BYTE v355[104]; // [rsp+180h] [rbp-150h] BYREF
  _BYTE v356[24]; // [rsp+1E8h] [rbp-E8h] BYREF
  __int64 v357; // [rsp+200h] [rbp-D0h]
  __int64 v358; // [rsp+208h] [rbp-C8h]
  __int64 v359; // [rsp+210h] [rbp-C0h] BYREF
  __int128 v360; // [rsp+218h] [rbp-B8h]
  __int64 v361; // [rsp+228h] [rbp-A8h]
  const void *v362; // [rsp+230h] [rbp-A0h]
  size_t v363; // [rsp+238h] [rbp-98h]
  _OWORD v364[9]; // [rsp+240h] [rbp-90h] BYREF

  v358 = a2;
  v329 = a1;
  v349 = 0;
  v350 = 1;
  v351 = 0;
  v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
         "typefullargsopenwithkindsavetrueuuidemitshowhide",
         4,
         a3);
  if ( !v5 || *(_BYTE *)v5 != 3 )
    goto LABEL_544;
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)(v5 + 24);
  if ( v7 != 13 )
  {
    if ( v7 == 12 )
    {
      if ( *(_QWORD *)v6 ^ 0x5F6567617373656DLL | *(unsigned int *)(v6 + 8) ^ 0x706F7473LL )
        goto LABEL_544;
      v8 = 12;
LABEL_38:
      v28 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
              "usagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
              5,
              a3);
      if ( v28 )
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::capture_usage::h62f6005f4fe8946b(
          v358,
          v28);
      if ( v7 != 13 && !memcmp((const void *)v6, "message_stop", v8) && !*(_BYTE *)(v358 + 365) )
      {
        v29 = v358;
        *(_BYTE *)(v358 + 365) = 1;
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_thinking_block::h437259882a7eca68(
          v29,
          &v349);
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_text_block::h9e7dc35fe5891c9d(
          v358,
          &v349);
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_tool_blocks::h5dcb0d71adf5eb70(
          v358,
          &v349);
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_completed::h5f3d3616a675ff4b(
          v364,
          v358);
        v31 = *(_OWORD *)((char *)v364 + 8);
        v32 = v351;
        if ( *(_QWORD *)&v364[1] > (unsigned __int64)(v349 - v351) )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v349,
            v351,
            *(_QWORD *)&v364[1],
            1,
            1,
            v30);
          v32 = v351;
        }
        memcpy((void *)(v32 + v350), (const void *)v31, *((size_t *)&v31 + 1));
        v351 = *((_QWORD *)&v31 + 1) + v32;
        if ( *(_QWORD *)&v364[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, *(_QWORD *)&v364[0], 1);
      }
      goto LABEL_544;
    }
    if ( v7 == 18 )
    {
      v23 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_10167B950);
      v24 = _mm_or_si128(
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v6 + 16)), (__m128i)xmmword_1015FFBA0),
              v23);
      if ( _mm_testz_si128(v24, v24) )
      {
        v25 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &unk_10167CD26,
                5,
                a3);
        if ( v25 )
        {
          v26 = nullptr;
          v27 = nullptr;
          if ( !*(_QWORD *)(v25 + 8) )
            v27 = *(__int64 ***)(v25 + 16);
          if ( *(_BYTE *)v25 == 2 )
            v26 = v27;
        }
        else
        {
          v26 = nullptr;
        }
        v334 = v26;
        if ( !__OFSUB__(0, *(_QWORD *)(v358 + 72)) )
        {
          v36 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h939f40910e708064(v358 + 232, &v334);
          if ( ((*(_QWORD *)(v358 + 176) != 0x8000000000000000LL) | v36) != 1 )
            codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_thinking_block::h437259882a7eca68(
              v358,
              &v349);
        }
        v37 = v358 + 232;
        if ( *(_QWORD *)(v358 + 176) != 0x8000000000000000LL
          && !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h939f40910e708064(
                                 v358 + 232,
                                 &v334) )
        {
          codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_text_block::h9e7dc35fe5891c9d(
            v358,
            &v349);
        }
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::ha467399a3466d784(v355, v37, &v334);
        if ( *(_QWORD *)v355 != 0x8000000000000000LL )
        {
          qmemcpy(v364, v355, 0x68u);
          if ( BYTE4(v364[6]) )
          {
            v38 = *((_QWORD *)&v364[3] + 1);
            codexmate_lib::core::relay::translator::normalize_anthropic_tool_call_for_responses::h5854e4c15575a469(
              &v359,
              *((_DWORD **)&v364[3] + 1),
              *(__int64 *)&v364[4],
              *(__int64 **)&v364[5],
              *((signed __int64 *)&v364[5] + 1));
            v341 = v360;
            v340 = (__int64 *)v359;
            v344 = v363;
            v343 = v362;
            v342 = v361;
            *(_QWORD *)v348 = 0;
            *(_QWORD *)&v348[16] = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, v38);
            v39 = 4;
            v40 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v40 )
              goto LABEL_718;
            *v40 = 1701869940;
            *(_QWORD *)v356 = 4;
            *(_QWORD *)&v356[8] = v40;
            *(_QWORD *)&v356[16] = 4;
            serde_json::value::to_value::h29e3c39dc75a9151(&v359, &off_101974218);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744C8);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              v348,
              v356,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, v348);
            v39 = 12;
            v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
            if ( !v41 )
              goto LABEL_718;
            qmemcpy(v41, "output_index", 12);
            *(_QWORD *)v356 = 12;
            *(_QWORD *)&v356[8] = v41;
            *(_QWORD *)&v356[16] = 12;
            v42 = LODWORD(v364[6]);
            LOBYTE(v359) = 2;
            *(_QWORD *)&v360 = 0;
            *((_QWORD *)&v360 + 1) = LODWORD(v364[6]);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v352,
              v348,
              v356,
              &v359);
            if ( (_BYTE)v352 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v352);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v352, v348);
            v39 = 7;
            v43 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
            if ( !v43 )
              goto LABEL_718;
            *(_DWORD *)((char *)v43 + 3) = 1684627309;
            *v43 = 1835365481;
            *(_QWORD *)v356 = 7;
            *(_QWORD *)&v356[8] = v43;
            *(_QWORD *)&v356[16] = 7;
            serde_json::value::to_value::hf4a5c51664f5d8d6(&v359, v364);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744C8);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              v348,
              v356,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, v348);
            v39 = 9;
            v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
            if ( !v44 )
LABEL_718:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v39);
            *(_QWORD *)v44 = 0x746E656D75677261LL;
            *(_BYTE *)(v44 + 8) = 115;
            *(_QWORD *)&v346 = 9;
            *((_QWORD *)&v346 + 1) = v44;
            v347 = 9;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v356, &v342);
            serde_json::value::to_value::hf4a5c51664f5d8d6(&v359, v356);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744C8);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              v348,
              &v346,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            v45 = (_DWORD *)(v358 + 352);
            if ( *(_QWORD *)v356 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v356[8], *(_QWORD *)v356, 1);
            v360 = *(_OWORD *)v348;
            v361 = *(_QWORD *)&v348[16];
            LOBYTE(v359) = 5;
            v339 = v45;
            codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
              &v352,
              v45,
              "response.function_call_arguments.done",
              37,
              &v359);
            v47 = v353;
            v48 = v351;
            if ( *((_QWORD *)&v353 + 1) > (unsigned __int64)(v349 - v351) )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v349,
                v351,
                *((_QWORD *)&v353 + 1),
                1,
                1,
                v46);
              v48 = v351;
            }
            memcpy((void *)(v350 + v48), (const void *)v47, *((size_t *)&v47 + 1));
            v351 += *((_QWORD *)&v47 + 1);
            v49 = v352;
            if ( v352 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v352, 1);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            *(_QWORD *)&v346 = 0;
            v347 = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, v49);
            v50 = 4;
            v51 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v51 )
              goto LABEL_717;
            *v51 = 1701869940;
            *(_QWORD *)v356 = 4;
            *(_QWORD *)&v356[8] = v51;
            *(_QWORD *)&v356[16] = 4;
            serde_json::value::to_value::h29e3c39dc75a9151(&v359, &off_101974228);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744E0);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              &v346,
              v356,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, &v346);
            v50 = 2;
            v52 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
            if ( !v52 )
              goto LABEL_717;
            *v52 = 25705;
            *(_QWORD *)v356 = 2;
            *(_QWORD *)&v356[8] = v52;
            *(_QWORD *)&v356[16] = 2;
            serde_json::value::to_value::hf4a5c51664f5d8d6(&v359, v364);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744E0);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              &v346,
              v356,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, &v346);
            v50 = 6;
            v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
            if ( !v53 )
              goto LABEL_717;
            *(_WORD *)(v53 + 4) = 29557;
            *(_DWORD *)v53 = 1952543859;
            *(_QWORD *)v356 = 6;
            *(_QWORD *)&v356[8] = v53;
            *(_QWORD *)&v356[16] = 6;
            serde_json::value::to_value::h29e3c39dc75a9151(&v359, &off_101974170);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744E0);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              &v346,
              v356,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, &v346);
            v50 = 7;
            v54 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
            if ( !v54 )
              goto LABEL_717;
            *(_DWORD *)((char *)v54 + 3) = 1684627308;
            *v54 = 1819042147;
            *(_QWORD *)v356 = 7;
            *(_QWORD *)&v356[8] = v54;
            *(_QWORD *)&v356[16] = 7;
            serde_json::value::to_value::hf4a5c51664f5d8d6(&v359, (char *)&v364[1] + 8);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744E0);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              &v346,
              v356,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, &v346);
            v50 = 4;
            v55 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v55 )
              goto LABEL_717;
            *v55 = 1701667182;
            *(_QWORD *)v356 = 4;
            *(_QWORD *)&v356[8] = v55;
            *(_QWORD *)&v356[16] = 4;
            serde_json::value::to_value::hf4a5c51664f5d8d6(&v359, &v340);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744E0);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              &v346,
              v356,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, &v346);
            v50 = 9;
            v56 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
            if ( !v56 )
LABEL_717:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v50);
            *(_QWORD *)v56 = 0x746E656D75677261LL;
            *(_BYTE *)(v56 + 8) = 115;
            *(_QWORD *)v356 = 9;
            *(_QWORD *)&v356[8] = v56;
            *(_QWORD *)&v356[16] = 9;
            serde_json::value::to_value::hf4a5c51664f5d8d6(&v359, &v342);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744E0);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              &v346,
              v356,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            *(_OWORD *)&v356[8] = v346;
            v357 = v347;
            v356[0] = 5;
            v57 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &unk_1015FB9C8,
                    4,
                    v356);
            if ( v57 )
            {
              v58 = 0;
              if ( *(_BYTE *)v57 == 3 )
                v58 = *(_QWORD *)(v57 + 24);
              v59 = 1;
              if ( *(_BYTE *)v57 == 3 )
                v59 = *(_QWORD *)(v57 + 16);
            }
            else
            {
              v59 = 1;
              v58 = 0;
            }
            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v359, v58, 0, 1, 1);
            v345 = v360;
            if ( (_DWORD)v359 == 1 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v345, *((_QWORD *)&v360 + 1));
            v80 = *((const void **)&v360 + 1);
            memcpy(*((void **)&v360 + 1), (const void *)v59, v58);
            codexmate_lib::core::relay::translator::add_namespace_for_mapped_tool::h7403e268179b70d8(
              (__int64)v356,
              v80,
              v58,
              (__int64 *)(v358 + 280));
            *(_QWORD *)v348 = 0;
            *(_QWORD *)&v348[16] = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v356, v80);
            v81 = 4;
            v82 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v82 )
              goto LABEL_719;
            *v82 = 1701869940;
            *(_QWORD *)&v346 = 4;
            *((_QWORD *)&v346 + 1) = v82;
            v347 = 4;
            serde_json::value::to_value::h29e3c39dc75a9151(&v359, &off_1019741F0);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744F8);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              v348,
              &v346,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, v348);
            v81 = 12;
            v83 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
            if ( !v83 )
              goto LABEL_719;
            qmemcpy(v83, "output_index", 12);
            *(_QWORD *)&v346 = 12;
            *((_QWORD *)&v346 + 1) = v83;
            v347 = 12;
            LOBYTE(v359) = 2;
            *(_QWORD *)&v360 = 0;
            *((_QWORD *)&v360 + 1) = v42;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v352,
              v348,
              &v346,
              &v359);
            if ( (_BYTE)v352 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v352);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v352, v348);
            v81 = 7;
            v84 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
            if ( !v84 )
              goto LABEL_719;
            *(_DWORD *)((char *)v84 + 3) = 1684627309;
            *v84 = 1835365481;
            *(_QWORD *)&v346 = 7;
            *((_QWORD *)&v346 + 1) = v84;
            v347 = 7;
            serde_json::value::to_value::hf4a5c51664f5d8d6(&v359, v364);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744F8);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              v348,
              &v346,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, v348);
            v81 = 4;
            v85 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v85 )
LABEL_719:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v81);
            *v85 = 1835365481;
            *(_QWORD *)&v346 = 4;
            *((_QWORD *)&v346 + 1) = v85;
            v347 = 4;
            serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
              &v359,
              v356);
            if ( (_BYTE)v359 == 6 )
            {
              v352 = v360;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v352, &off_101974C58, &off_1019744F8);
            }
            v354 = v361;
            v353 = v360;
            v352 = v359;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v359,
              v348,
              &v346,
              &v352);
            if ( (_BYTE)v359 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            v360 = *(_OWORD *)v348;
            v361 = *(_QWORD *)&v348[16];
            LOBYTE(v359) = 5;
            codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
              &v352,
              v339,
              "response.output_item.doneresponse.function_call_arguments.done",
              25,
              &v359);
            v87 = v353;
            v88 = v351;
            if ( *((_QWORD *)&v353 + 1) > (unsigned __int64)(v349 - v351) )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v349,
                v351,
                *((_QWORD *)&v353 + 1),
                1,
                1,
                v86);
              v88 = v351;
            }
            memcpy((void *)(v350 + v88), (const void *)v87, *((size_t *)&v87 + 1));
            v351 += *((_QWORD *)&v87 + 1);
            if ( v352 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v352, 1);
            *(double *)v23.i64 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
            v361 = v357;
            v360 = *(_OWORD *)&v356[8];
            v359 = *(_QWORD *)v356;
            alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hec645efee4458724(v358 + 48, &v359, *(double *)v23.i64);
            if ( v345 )
              *(double *)v23.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v345, 1);
            if ( v342 )
              *(double *)v23.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v343, v342, 1);
            if ( v340 )
              *(double *)v23.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v341, v340, 1);
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..translator..stream..ToolItemState$GT$::h18f5d0c6640c775c(
            v364,
            *(double *)v23.i64);
        }
      }
      goto LABEL_544;
    }
    if ( v7 != 19 )
      goto LABEL_544;
    v9 = _mm_or_si128(
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_10167B950),
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v6 + 3)), (__m128i)xmmword_10167B960));
    if ( !_mm_testz_si128(v9, v9) )
    {
      v10 = _mm_or_si128(
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1016749E0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v6 + 3)), (__m128i)xmmword_1016749D0));
      if ( _mm_testz_si128(v10, v10) )
      {
        v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &unk_10167CD26,
                5,
                a3);
        if ( v11 )
        {
          v12 = 0;
          v13 = 0;
          if ( !*(_QWORD *)(v11 + 8) )
            v13 = *(_QWORD *)(v11 + 16);
          if ( *(_BYTE *)v11 == 2 )
            v12 = v13;
        }
        else
        {
          v12 = 0;
        }
        *(_QWORD *)&v346 = v12;
        v62 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "deltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
                5,
                a3);
        if ( v62 )
        {
          switch ( *(_BYTE *)v62 )
          {
            case 0:
              LOBYTE(v364[0]) = 0;
              break;
            case 1:
            case 2:
              v364[1] = *(_OWORD *)(v62 + 16);
              v63 = *(_QWORD *)v62;
              *((_QWORD *)&v364[0] + 1) = *(_QWORD *)(v62 + 8);
              *(_QWORD *)&v364[0] = v63;
              break;
            case 3:
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                (char *)v364 + 8,
                v62 + 8);
              LOBYTE(v364[0]) = 3;
              break;
            case 4:
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                (char *)v364 + 8,
                v62 + 8);
              LOBYTE(v364[0]) = 4;
              break;
            case 5:
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
                (char *)v364 + 8,
                v62 + 8);
              LOBYTE(v364[0]) = 5;
              break;
          }
          v361 = *((_QWORD *)&v364[1] + 1);
          v360 = *(_OWORD *)((char *)v364 + 8);
          v359 = *(_QWORD *)&v364[0];
          LOBYTE(v364[0]) = 0;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        }
        else
        {
          LOBYTE(v364[0]) = 0;
          v360 = *(_OWORD *)((char *)v364 + 8);
          v361 = *((_QWORD *)&v364[1] + 1);
          v359 = *(_QWORD *)&v364[0];
        }
        v92 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "typefullargsopenwithkindsavetrueuuidemitshowhide",
                4,
                &v359);
        if ( v92 && *(_BYTE *)v92 == 3 )
        {
          v93 = *(_QWORD *)(v92 + 24) - 10LL;
          v94 = *(_QWORD *)(v92 + 16);
          switch ( v93 )
          {
            case 0LL:
              if ( !(*(_QWORD *)v94 ^ 0x6C65645F74786574LL | *(unsigned __int16 *)(v94 + 8) ^ 0x6174LL) )
              {
                v95 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                        4,
                        &v359);
                if ( v95 )
                {
                  if ( *(_BYTE *)v95 == 3 )
                  {
                    v97 = *(const void **)(v95 + 16);
                    v98 = *(_QWORD *)(v95 + 24);
                    v322[0] = v97;
                    v322[1] = v98;
                    if ( v98 )
                    {
                      if ( !__OFSUB__(0, *(_QWORD *)(v358 + 176)) )
                      {
                        v99 = *(_QWORD *)(v358 + 216);
                        if ( v98 > *(_QWORD *)(v358 + 200) - v99 )
                        {
                          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                            v358 + 200,
                            v99,
                            v98,
                            1,
                            1,
                            v96);
                          v99 = *(_QWORD *)(v358 + 216);
                        }
                        v100 = (void *)(*(_QWORD *)(v358 + 208) + v99);
                        memcpy(v100, v97, v98);
                        *(_QWORD *)(v358 + 216) += v98;
                        *(_QWORD *)v356 = 0;
                        *(_QWORD *)&v356[16] = 0;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v100, v97);
                        v101 = 4;
                        v102 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                        if ( !v102 )
                          goto LABEL_746;
                        *v102 = 1701869940;
                        v352 = 4;
                        *(_QWORD *)&v353 = v102;
                        *((_QWORD *)&v353 + 1) = 4;
                        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_1019742B8);
                        if ( LOBYTE(v364[0]) == 6 )
                        {
                          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            &unk_10167E63D,
                            43,
                            v355,
                            &off_101974C58,
                            &off_101974528);
                        }
                        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
                        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
                        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          v364,
                          v356,
                          &v352,
                          v355);
                        if ( LOBYTE(v364[0]) != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
                        v101 = 12;
                        v103 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
                        if ( !v103 )
                          goto LABEL_746;
                        qmemcpy(v103, "output_index", 12);
                        v352 = 12;
                        *(_QWORD *)&v353 = v103;
                        *((_QWORD *)&v353 + 1) = 12;
                        v104 = *(unsigned int *)(v358 + 224);
                        LOBYTE(v364[0]) = 2;
                        *((_QWORD *)&v364[0] + 1) = 0;
                        *(_QWORD *)&v364[1] = v104;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          v355,
                          v356,
                          &v352,
                          v364);
                        if ( v355[0] != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v356);
                        v101 = 7;
                        v105 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                        if ( !v105 )
                          goto LABEL_746;
                        v106 = v358 + 176;
                        *(_DWORD *)((char *)v105 + 3) = 1684627309;
                        *v105 = 1835365481;
                        v352 = 7;
                        *(_QWORD *)&v353 = v105;
                        *((_QWORD *)&v353 + 1) = 7;
                        serde_json::value::to_value::hf4a5c51664f5d8d6(v364, v106);
                        if ( LOBYTE(v364[0]) == 6 )
                        {
                          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            &unk_10167E63D,
                            43,
                            v355,
                            &off_101974C58,
                            &off_101974528);
                        }
                        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
                        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
                        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          v364,
                          v356,
                          &v352,
                          v355);
                        if ( LOBYTE(v364[0]) != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
                        v101 = 13;
                        v107 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
                        if ( !v107 )
                          goto LABEL_746;
                        qmemcpy(v107, "content_index", 13);
                        v352 = 13;
                        *(_QWORD *)&v353 = v107;
                        *((_QWORD *)&v353 + 1) = 13;
                        LOBYTE(v364[0]) = 2;
                        *(_OWORD *)((char *)v364 + 8) = 0u;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          v355,
                          v356,
                          &v352,
                          v364);
                        if ( v355[0] != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v356);
                        v101 = 5;
                        v108 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                        if ( !v108 )
LABEL_746:
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v101);
                        *(_BYTE *)(v108 + 4) = 97;
                        *(_DWORD *)v108 = 1953260900;
                        v352 = 5;
                        *(_QWORD *)&v353 = v108;
                        *((_QWORD *)&v353 + 1) = 5;
                        serde_json::value::to_value::h29e3c39dc75a9151(v364, v322);
                        if ( LOBYTE(v364[0]) == 6 )
                        {
                          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            &unk_10167E63D,
                            43,
                            v355,
                            &off_101974C58,
                            &off_101974528);
                        }
                        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
                        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
                        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          v364,
                          v356,
                          &v352,
                          v355);
                        if ( LOBYTE(v364[0]) != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v356;
                        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v356[16];
                        LOBYTE(v364[0]) = 5;
                        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
                          v355,
                          v358 + 352,
                          "response.output_text.deltaresponse.reasoning_summary_text.done",
                          26,
                          v364);
                        v110 = *(const void **)&v355[8];
                        v111 = *(_QWORD *)&v355[16];
                        v112 = v351;
                        if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
                        {
                          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                            &v349,
                            v351,
                            *(_QWORD *)&v355[16],
                            1,
                            1,
                            v109);
                          v112 = v351;
                        }
                        memcpy((void *)(v350 + v112), v110, v111);
                        v351 += v111;
                        if ( *(_QWORD *)v355 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, *(_QWORD *)v355, 1);
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                      }
                    }
                  }
                }
              }
              break;
            case 4LL:
              if ( !(*(_QWORD *)v94 ^ 0x676E696B6E696874LL | *(_QWORD *)(v94 + 6) ^ 0x61746C65645F676ELL) )
              {
                v172 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         &unk_101674AA0,
                         8,
                         &v359);
                if ( v172 )
                {
                  if ( *(_BYTE *)v172 == 3 )
                  {
                    v174 = *(const void **)(v172 + 16);
                    v175 = *(_QWORD *)(v172 + 24);
                    v323[0] = v174;
                    v323[1] = v175;
                    if ( v175 )
                    {
                      if ( !__OFSUB__(0, *(_QWORD *)(v358 + 72)) )
                      {
                        v176 = *(_QWORD *)(v358 + 112);
                        if ( v175 > *(_QWORD *)(v358 + 96) - v176 )
                        {
                          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                            v358 + 96,
                            v176,
                            v175,
                            1,
                            1,
                            v173);
                          v176 = *(_QWORD *)(v358 + 112);
                        }
                        v177 = (void *)(*(_QWORD *)(v358 + 104) + v176);
                        memcpy(v177, v174, v175);
                        *(_QWORD *)(v358 + 112) += v175;
                        *(_QWORD *)v356 = 0;
                        *(_QWORD *)&v356[16] = 0;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v177, v174);
                        v178 = 4;
                        v179 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                        if ( !v179 )
                          goto LABEL_747;
                        *v179 = 1701869940;
                        v352 = 4;
                        *(_QWORD *)&v353 = v179;
                        *((_QWORD *)&v353 + 1) = 4;
                        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974330);
                        if ( LOBYTE(v364[0]) == 6 )
                        {
                          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            &unk_10167E63D,
                            43,
                            v355,
                            &off_101974C58,
                            &off_101974540);
                        }
                        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
                        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
                        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          v364,
                          v356,
                          &v352,
                          v355);
                        if ( LOBYTE(v364[0]) != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
                        v178 = 12;
                        v180 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
                        if ( !v180 )
                          goto LABEL_747;
                        qmemcpy(v180, "output_index", 12);
                        v352 = 12;
                        *(_QWORD *)&v353 = v180;
                        *((_QWORD *)&v353 + 1) = 12;
                        v181 = *(unsigned int *)(v358 + 168);
                        LOBYTE(v364[0]) = 2;
                        *((_QWORD *)&v364[0] + 1) = 0;
                        *(_QWORD *)&v364[1] = v181;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          v355,
                          v356,
                          &v352,
                          v364);
                        if ( v355[0] != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v356);
                        v178 = 7;
                        v182 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                        if ( !v182 )
                          goto LABEL_747;
                        v183 = v358 + 72;
                        *(_DWORD *)((char *)v182 + 3) = 1684627309;
                        *v182 = 1835365481;
                        v352 = 7;
                        *(_QWORD *)&v353 = v182;
                        *((_QWORD *)&v353 + 1) = 7;
                        serde_json::value::to_value::hf4a5c51664f5d8d6(v364, v183);
                        if ( LOBYTE(v364[0]) == 6 )
                        {
                          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            &unk_10167E63D,
                            43,
                            v355,
                            &off_101974C58,
                            &off_101974540);
                        }
                        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
                        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
                        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          v364,
                          v356,
                          &v352,
                          v355);
                        if ( LOBYTE(v364[0]) != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
                        v178 = 13;
                        v184 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
                        if ( !v184 )
                          goto LABEL_747;
                        qmemcpy(v184, "summary_index", 13);
                        v352 = 13;
                        *(_QWORD *)&v353 = v184;
                        *((_QWORD *)&v353 + 1) = 13;
                        LOBYTE(v364[0]) = 2;
                        *(_OWORD *)((char *)v364 + 8) = 0u;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          v355,
                          v356,
                          &v352,
                          v364);
                        if ( v355[0] != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v356);
                        v178 = 5;
                        v185 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                        if ( !v185 )
LABEL_747:
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v178);
                        *(_BYTE *)(v185 + 4) = 97;
                        *(_DWORD *)v185 = 1953260900;
                        v352 = 5;
                        *(_QWORD *)&v353 = v185;
                        *((_QWORD *)&v353 + 1) = 5;
                        serde_json::value::to_value::h29e3c39dc75a9151(v364, v323);
                        if ( LOBYTE(v364[0]) == 6 )
                        {
                          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            &unk_10167E63D,
                            43,
                            v355,
                            &off_101974C58,
                            &off_101974540);
                        }
                        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
                        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
                        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          v364,
                          v356,
                          &v352,
                          v355);
                        if ( LOBYTE(v364[0]) != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v356;
                        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v356[16];
                        LOBYTE(v364[0]) = 5;
                        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
                          v355,
                          v358 + 352,
                          &unk_10167CD01,
                          37,
                          v364);
                        v187 = *(const void **)&v355[8];
                        v188 = *(_QWORD *)&v355[16];
                        v189 = v351;
                        if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
                        {
                          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                            &v349,
                            v351,
                            *(_QWORD *)&v355[16],
                            1,
                            1,
                            v186);
                          v189 = v351;
                        }
                        memcpy((void *)(v350 + v189), v187, v188);
                        v351 += v188;
                        if ( *(_QWORD *)v355 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v187, *(_QWORD *)v355, 1);
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                      }
                    }
                  }
                }
              }
              break;
            case 5LL:
              if ( !(*(_QWORD *)v94 ^ 0x727574616E676973LL | *(_QWORD *)(v94 + 7) ^ 0x61746C65645F6572LL) )
              {
                v167 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         "signatureencrypted_contentresponse.reasoning_summary_part.addedcache_read_input_tokenscache_cre"
                         "ation_input_tokens",
                         9,
                         &v359);
                if ( v167 )
                {
                  if ( *(_BYTE *)v167 == 3 && *(_QWORD *)(v358 + 72) != 0x8000000000000000LL )
                  {
                    v169 = *(const void **)(v167 + 16);
                    v170 = *(_QWORD *)(v167 + 24);
                    v171 = *(_QWORD *)(v358 + 136);
                    if ( v170 > *(_QWORD *)(v358 + 120) - v171 )
                    {
                      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                        v358 + 120,
                        v171,
                        v170,
                        1,
                        1,
                        v168);
                      v171 = *(_QWORD *)(v358 + 136);
                    }
                    memcpy((void *)(*(_QWORD *)(v358 + 128) + v171), v169, v170);
                    *(_QWORD *)(v358 + 136) += v170;
                  }
                }
              }
              break;
            case 6LL:
              v190 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v94), (__m128i)xmmword_10167B970);
              if ( _mm_testz_si128(v190, v190) )
              {
                v267 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         "partial_jsoncontent_blockstop_sequencemax_tokenscontent_filterlengthresponse.in_progress",
                         12,
                         &v359);
                if ( v267 )
                {
                  if ( *(_BYTE *)v267 == 3 )
                  {
                    v268 = *(const void **)(v267 + 16);
                    v269 = *(_QWORD *)(v267 + 24);
                    v321[0] = v268;
                    v321[1] = v269;
                    if ( v269 )
                    {
                      v270 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_mut::h769f8277c05fc4f7(v358 + 232, &v346);
                      v272 = v270;
                      if ( v270 )
                      {
                        v273 = *(_QWORD *)(v270 + 88);
                        if ( v269 > *(_QWORD *)(v270 + 72) - v273 )
                        {
                          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                            v270 + 72,
                            v273,
                            v269,
                            1,
                            1,
                            v271);
                          v273 = *(_QWORD *)(v272 + 88);
                        }
                        v274 = (void *)(*(_QWORD *)(v272 + 80) + v273);
                        memcpy(v274, v268, v269);
                        *(_QWORD *)(v272 + 88) += v269;
                        if ( !*(_BYTE *)(v272 + 101) )
                        {
                          *(_QWORD *)v356 = 0;
                          *(_QWORD *)&v356[16] = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v274, v268);
                          v275 = 4;
                          v276 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                          if ( !v276 )
                            goto LABEL_748;
                          *v276 = 1701869940;
                          v352 = 4;
                          *(_QWORD *)&v353 = v276;
                          *((_QWORD *)&v353 + 1) = 4;
                          serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_1019743A0);
                          if ( LOBYTE(v364[0]) == 6 )
                          {
                            *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              &unk_10167E63D,
                              43,
                              v355,
                              &off_101974C58,
                              &off_101974510);
                          }
                          *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
                          *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
                          *(_QWORD *)v355 = *(_QWORD *)&v364[0];
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            v364,
                            v356,
                            &v352,
                            v355);
                          if ( LOBYTE(v364[0]) != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
                          v275 = 12;
                          v277 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
                          if ( !v277 )
                            goto LABEL_748;
                          qmemcpy(v277, "output_index", 12);
                          v352 = 12;
                          *(_QWORD *)&v353 = v277;
                          *((_QWORD *)&v353 + 1) = 12;
                          v278 = *(unsigned int *)(v272 + 96);
                          LOBYTE(v364[0]) = 2;
                          *((_QWORD *)&v364[0] + 1) = 0;
                          *(_QWORD *)&v364[1] = v278;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            v355,
                            v356,
                            &v352,
                            v364);
                          if ( v355[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v356);
                          v275 = 7;
                          v279 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                          if ( !v279 )
                            goto LABEL_748;
                          *(_DWORD *)((char *)v279 + 3) = 1684627309;
                          *v279 = 1835365481;
                          v352 = 7;
                          *(_QWORD *)&v353 = v279;
                          *((_QWORD *)&v353 + 1) = 7;
                          serde_json::value::to_value::hf4a5c51664f5d8d6(v364, v272);
                          if ( LOBYTE(v364[0]) == 6 )
                          {
                            *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              &unk_10167E63D,
                              43,
                              v355,
                              &off_101974C58,
                              &off_101974510);
                          }
                          *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
                          *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
                          *(_QWORD *)v355 = *(_QWORD *)&v364[0];
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            v364,
                            v356,
                            &v352,
                            v355);
                          if ( LOBYTE(v364[0]) != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
                          v275 = 5;
                          v280 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                          if ( !v280 )
LABEL_748:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v275);
                          *(_BYTE *)(v280 + 4) = 97;
                          *(_DWORD *)v280 = 1953260900;
                          v352 = 5;
                          *(_QWORD *)&v353 = v280;
                          *((_QWORD *)&v353 + 1) = 5;
                          serde_json::value::to_value::h29e3c39dc75a9151(v364, v321);
                          if ( LOBYTE(v364[0]) == 6 )
                          {
                            *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              &unk_10167E63D,
                              43,
                              v355,
                              &off_101974C58,
                              &off_101974510);
                          }
                          *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
                          *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
                          *(_QWORD *)v355 = *(_QWORD *)&v364[0];
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            v364,
                            v356,
                            &v352,
                            v355);
                          if ( LOBYTE(v364[0]) != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                          *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v356;
                          *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v356[16];
                          LOBYTE(v364[0]) = 5;
                          codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
                            v355,
                            v358 + 352,
                            &unk_10167CD38,
                            38,
                            v364);
                          v282 = *(const void **)&v355[8];
                          v283 = *(_QWORD *)&v355[16];
                          v284 = v351;
                          if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
                          {
                            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                              &v349,
                              v351,
                              *(_QWORD *)&v355[16],
                              1,
                              1,
                              v281);
                            v284 = v351;
                          }
                          memcpy((void *)(v350 + v284), v282, v283);
                          v351 += v283;
                          if ( *(_QWORD *)v355 )
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v282, *(_QWORD *)v355, 1);
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
                        }
                      }
                    }
                  }
                }
              }
              break;
            default:
              break;
          }
        }
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
      }
      goto LABEL_544;
    }
    v33 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_10167CD26, 5, a3);
    if ( v33 )
    {
      v34 = 0;
      v35 = 0;
      if ( !*(_QWORD *)(v33 + 8) )
        v35 = *(_QWORD *)(v33 + 16);
      if ( *(_BYTE *)v33 == 2 )
        v34 = v35;
      v336 = v34;
    }
    else
    {
      v336 = 0;
    }
    v60 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "content_blockstop_sequencemax_tokenscontent_filterlengthresponse.in_progress",
            13,
            a3);
    if ( v60 )
    {
      switch ( *(_BYTE *)v60 )
      {
        case 0:
          LOBYTE(v364[0]) = 0;
          break;
        case 1:
        case 2:
          v364[1] = *(_OWORD *)(v60 + 16);
          v61 = *(_QWORD *)v60;
          *((_QWORD *)&v364[0] + 1) = *(_QWORD *)(v60 + 8);
          *(_QWORD *)&v364[0] = v61;
          break;
        case 3:
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
            (char *)v364 + 8,
            v60 + 8);
          LOBYTE(v364[0]) = 3;
          break;
        case 4:
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
            (char *)v364 + 8,
            v60 + 8);
          LOBYTE(v364[0]) = 4;
          break;
        case 5:
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
            (char *)v364 + 8,
            v60 + 8);
          LOBYTE(v364[0]) = 5;
          break;
      }
      v354 = *((_QWORD *)&v364[1] + 1);
      v353 = *(_OWORD *)((char *)v364 + 8);
      v352 = *(_QWORD *)&v364[0];
      LOBYTE(v364[0]) = 0;
      *(double *)v9.i64 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
    }
    else
    {
      LOBYTE(v364[0]) = 0;
      v353 = *(_OWORD *)((char *)v364 + 8);
      v354 = *((_QWORD *)&v364[1] + 1);
      v352 = *(_QWORD *)&v364[0];
    }
    v64 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "typefullargsopenwithkindsavetrueuuidemitshowhide",
            4,
            &v352);
    if ( v64 )
    {
      v65 = nullptr;
      v66 = *(_BYTE *)v64 == 3;
      if ( *(_BYTE *)v64 == 3 )
        v65 = *(_DWORD **)(v64 + 24);
      v339 = v65;
      v67 = 1;
      if ( v66 )
        v67 = *(_QWORD *)(v64 + 16);
      v345 = v67;
    }
    else
    {
      v345 = 1;
      v339 = nullptr;
    }
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::ensure_created::h4369870c09ea9ab6(
      v358,
      &v349,
      *(double *)v9.i64);
    switch ( (unsigned __int64)v339 )
    {
      case 4uLL:
        if ( *(_DWORD *)v345 != 1954047348 )
          goto LABEL_543;
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_thinking_block::h437259882a7eca68(
          v358,
          &v349);
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_text_block::h9e7dc35fe5891c9d(
          v358,
          &v349);
        v68 = *(unsigned int *)(v358 + 360);
        *(_DWORD *)(v358 + 360) = v68 + 1;
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v364);
        *(_QWORD *)&v360 = *((_QWORD *)&v364[0] + 1);
        v359 = *(_QWORD *)&v364[0];
        *(_QWORD *)v355 = 0;
        *(_QWORD *)&v355[8] = 1;
        *(_QWORD *)&v355[16] = 0;
        *(_QWORD *)&v364[1] = 1610612768;
        *(_QWORD *)&v364[0] = v355;
        *((_QWORD *)&v364[0] + 1) = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
        if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(
                                &v359,
                                v364) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
            55,
            v356,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
        v69 = *(void **)v355;
        v70 = *(_OWORD **)&v355[8];
        if ( *(_QWORD *)&v355[16] <= 0xCu )
        {
          if ( *(_QWORD *)&v355[16] != 12 )
LABEL_140:
            core::str::slice_error_fail::h480e51fbd8b15eba(
              *(_QWORD *)&v355[8],
              *(_QWORD *)&v355[16],
              0,
              12,
              &off_101974610);
        }
        else if ( *(char *)(*(_QWORD *)&v355[8] + 12LL) < -64 )
        {
          goto LABEL_140;
        }
        *(_QWORD *)v356 = *(_QWORD *)&v355[8];
        *(_QWORD *)&v356[8] = 12;
        *(_QWORD *)v355 = v356;
        *(_QWORD *)&v355[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        v191 = &unk_1017C5D19;
        v192 = v364;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v364, &unk_1017C5D19, v355);
        if ( v69 )
        {
          v192 = v70;
          v191 = v69;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1);
        }
        v334 = *(__int64 ***)&v364[0];
        v335 = *(_OWORD *)((char *)v364 + 8);
        v340 = nullptr;
        *((_QWORD *)&v341 + 1) = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v192, v191);
        v193 = 4;
        v194 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v194 )
          goto LABEL_735;
        *v194 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v194;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974280);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974628);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, &v340, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, &v340);
        v193 = 12;
        v195 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
        if ( !v195 )
          goto LABEL_735;
        qmemcpy(v195, "output_index", 12);
        v359 = 12;
        *(_QWORD *)&v360 = v195;
        *((_QWORD *)&v360 + 1) = 12;
        LOBYTE(v364[0]) = 2;
        *((_QWORD *)&v364[0] + 1) = 0;
        *(_QWORD *)&v364[1] = v68;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, &v340, &v359, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, &v340);
        v193 = 7;
        v196 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v196 )
          goto LABEL_735;
        *(_DWORD *)((char *)v196 + 3) = 1684627309;
        *v196 = 1835365481;
        v359 = 7;
        *(_QWORD *)&v360 = v196;
        *((_QWORD *)&v360 + 1) = 7;
        *(_QWORD *)v356 = &v334;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, v356);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974628);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, &v340, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, &v340);
        v193 = 4;
        v197 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v197 )
LABEL_735:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v193);
        *v197 = 1835365481;
        v342 = 4;
        v339 = v197;
        v343 = v197;
        v344 = 4;
        *(_QWORD *)v348 = 0;
        *(_QWORD *)&v348[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v198 = 4;
        v199 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v199 )
          goto LABEL_733;
        *v199 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v199;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_1019741D0);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974628);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v198 = 2;
        v200 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
        if ( !v200 )
          goto LABEL_733;
        *v200 = 25705;
        v359 = 2;
        *(_QWORD *)&v360 = v200;
        *((_QWORD *)&v360 + 1) = 2;
        *(_QWORD *)v356 = &v334;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, v356);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974628);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v198 = 4;
        v201 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v201 )
          goto LABEL_733;
        *v201 = 1701605234;
        v359 = 4;
        *(_QWORD *)&v360 = v201;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_1019741E0);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974628);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v198 = 6;
        v202 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v202 )
          goto LABEL_733;
        *(_WORD *)(v202 + 4) = 29557;
        *(_DWORD *)v202 = 1952543859;
        v359 = 6;
        *(_QWORD *)&v360 = v202;
        *((_QWORD *)&v360 + 1) = 6;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974198);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974628);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v198 = 7;
        v203 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v203 )
LABEL_733:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v198);
        *(_DWORD *)((char *)v203 + 3) = 1953391988;
        *v203 = 1953394531;
        *(_QWORD *)&v346 = 7;
        *((_QWORD *)&v346 + 1) = v203;
        v347 = 7;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
        v204 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
        if ( !v204 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
        v205 = v204;
        *(_QWORD *)v356 = 0;
        *(_QWORD *)&v356[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
        v206 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v206 )
          goto LABEL_740;
        *v206 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v206;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_1019741C0);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974628);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v207 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v207 )
LABEL_740:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
        *v207 = 1954047348;
        v359 = 4;
        *(_QWORD *)&v360 = v207;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &xmmword_1016792E0);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974628);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        *(_OWORD *)((char *)v364 + 7) = *(_OWORD *)v356;
        *(_QWORD *)((char *)&v364[1] + 7) = *(_QWORD *)&v356[16];
        *(_BYTE *)v205 = 5;
        *(_QWORD *)(v205 + 24) = *(_QWORD *)((char *)&v364[1] + 7);
        *(_QWORD *)(v205 + 17) = *(_QWORD *)&v364[1];
        *(_OWORD *)(v205 + 1) = v364[0];
        *((_QWORD *)&v364[0] + 1) = 1;
        *(_QWORD *)&v364[1] = v205;
        *((_QWORD *)&v364[1] + 1) = 1;
        LOBYTE(v364[0]) = 4;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v346, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v348;
        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v348[16];
        LOBYTE(v364[0]) = 5;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, &v340, &v342, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        v208 = v358 + 352;
        *(_OWORD *)((char *)v364 + 8) = __PAIR128__(v341, (unsigned __int64)v340);
        *((_QWORD *)&v364[1] + 1) = *((_QWORD *)&v341 + 1);
        LOBYTE(v364[0]) = 5;
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
          v355,
          v358 + 352,
          "response.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done",
          26,
          v364);
        v210 = *(const void **)&v355[8];
        v211 = *(_QWORD *)&v355[16];
        v212 = v351;
        if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v349,
            v351,
            *(_QWORD *)&v355[16],
            1,
            1,
            v209);
          v212 = v351;
        }
        memcpy((void *)(v350 + v212), v210, v211);
        v351 += v211;
        v213 = *(_QWORD *)v355;
        if ( *(_QWORD *)v355 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v210, *(_QWORD *)v355, 1);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        *(_QWORD *)v348 = 0;
        *(_QWORD *)&v348[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v213);
        v214 = 4;
        v215 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v215 )
          goto LABEL_734;
        *v215 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v215;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974290);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974640);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v214 = 12;
        v216 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
        if ( !v216 )
          goto LABEL_734;
        qmemcpy(v216, "output_index", 12);
        v359 = 12;
        *(_QWORD *)&v360 = v216;
        *((_QWORD *)&v360 + 1) = 12;
        LOBYTE(v364[0]) = 2;
        *((_QWORD *)&v364[0] + 1) = 0;
        *(_QWORD *)&v364[1] = v68;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v359, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v348);
        v214 = 7;
        v217 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v217 )
          goto LABEL_734;
        *(_DWORD *)((char *)v217 + 3) = 1684627309;
        *v217 = 1835365481;
        v359 = 7;
        *(_QWORD *)&v360 = v217;
        *((_QWORD *)&v360 + 1) = 7;
        *(_QWORD *)v356 = &v334;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, v356);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974640);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v214 = 13;
        v218 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
        if ( !v218 )
          goto LABEL_734;
        qmemcpy(v218, "content_index", 13);
        v359 = 13;
        *(_QWORD *)&v360 = v218;
        *((_QWORD *)&v360 + 1) = 13;
        LOBYTE(v364[0]) = 2;
        *(_OWORD *)((char *)v364 + 8) = 0u;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v359, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v348);
        v214 = 4;
        v219 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v219 )
LABEL_734:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v214);
        v220 = v208;
        *v219 = 1953653104;
        *(_QWORD *)&v346 = 4;
        *((_QWORD *)&v346 + 1) = v219;
        v347 = 4;
        *(_QWORD *)v356 = 0;
        *(_QWORD *)&v356[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v221 = 4;
        v222 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v222 )
          goto LABEL_738;
        *v222 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v222;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_1019741C0);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974640);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v223 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v223 )
          goto LABEL_738;
        *v223 = 1954047348;
        v359 = 4;
        *(_QWORD *)&v360 = v223;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &xmmword_1016792E0);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974640);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v221 = 11;
        v224 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
        if ( !v224 )
LABEL_738:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v221);
        qmemcpy(v224, "annotations", 11);
        v359 = 11;
        *(_QWORD *)&v360 = v224;
        *((_QWORD *)&v360 + 1) = 11;
        *((_QWORD *)&v364[0] + 1) = 0;
        v364[1] = 8u;
        LOBYTE(v364[0]) = 4;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v356, &v359, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v356;
        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v356[16];
        LOBYTE(v364[0]) = 5;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v346, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v348;
        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v348[16];
        LOBYTE(v364[0]) = 5;
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
          v355,
          v220,
          "response.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done",
          27,
          v364);
        v226 = *(const void **)&v355[8];
        v227 = *(_QWORD *)&v355[16];
        v228 = v351;
        if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v349,
            v351,
            *(_QWORD *)&v355[16],
            1,
            1,
            v225);
          v228 = v351;
        }
        memcpy((void *)(v350 + v228), v226, v227);
        v351 += v227;
        if ( *(_QWORD *)v355 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, *(_QWORD *)v355, 1);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        *(_OWORD *)((char *)v364 + 8) = v335;
        *(_QWORD *)&v364[0] = v334;
        v229 = v358 + 176;
        if ( !__OFSUB__(0, *(_QWORD *)(v358 + 176)) )
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AutoSwitchSnoozeRecord$GT$::hd2d18ac97487a16f(v358 + 176);
        *(_QWORD *)(v229 + 16) = *(_QWORD *)&v364[1];
        *(_OWORD *)v229 = v364[0];
        v230 = v358;
        *(_QWORD *)(v358 + 200) = 0;
        *(_QWORD *)(v230 + 208) = 1;
        *(_QWORD *)(v230 + 216) = 0;
        *(_DWORD *)(v230 + 224) = v68;
        goto LABEL_543;
      case 8uLL:
        if ( *(_QWORD *)v345 == 0x676E696B6E696874LL )
          goto LABEL_158;
        if ( *(_QWORD *)v345 != 0x6573755F6C6F6F74LL )
          goto LABEL_543;
        v339 = (_DWORD *)*(unsigned int *)(v358 + 360);
        *(_DWORD *)(v358 + 360) = (_DWORD)v339 + 1;
        v74 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("id", 2, &v352);
        if ( v74 )
        {
          v75 = 0;
          if ( *(_BYTE *)v74 == 3 )
            v75 = *(_QWORD *)(v74 + 24);
          v76 = 1;
          if ( *(_BYTE *)v74 == 3 )
            v76 = *(_QWORD *)(v74 + 16);
        }
        else
        {
          v76 = 1;
          v75 = 0;
        }
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v364, v75, 0, 1, 1);
        v231 = *((__int64 **)&v364[0] + 1);
        if ( LODWORD(v364[0]) == 1 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((_QWORD *)&v364[0] + 1), *(_QWORD *)&v364[1]);
        v232 = *(_QWORD *)&v364[1];
        memcpy(*(void **)&v364[1], (const void *)v76, v75);
        v340 = v231;
        *(_QWORD *)&v341 = v232;
        *((_QWORD *)&v341 + 1) = v75;
        v233 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &unk_1015FB9C8,
                 4,
                 &v352);
        if ( v233 )
        {
          v234 = 0;
          if ( *(_BYTE *)v233 == 3 )
            v234 = *(_QWORD *)(v233 + 24);
          v235 = 1;
          if ( *(_BYTE *)v233 == 3 )
            v235 = *(_QWORD *)(v233 + 16);
        }
        else
        {
          v235 = 1;
          v234 = 0;
        }
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v364, v234, 0, 1, 1);
        v338 = *((_QWORD *)&v364[0] + 1);
        if ( LODWORD(v364[0]) == 1 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v338, *(_QWORD *)&v364[1]);
        v236 = *(unsigned int **)&v364[1];
        memcpy(*(void **)&v364[1], (const void *)v235, v234);
        v237 = codexmate_lib::core::relay::translator::claude_code_alias_target_name::heaae98c00ec3c8e5(v236, v234);
        v239 = v238;
        if ( !v237 )
          v239 = v234;
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v364, v239, 0, 1, 1);
        v345 = *((_QWORD *)&v364[0] + 1);
        v337 = v236;
        if ( LOBYTE(v364[0]) )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v345, *(_QWORD *)&v364[1]);
        if ( !v237 )
          v237 = (const char *)v236;
        v240 = *(const void **)&v364[1];
        memcpy(*(void **)&v364[1], v237, v239);
        v342 = v345;
        v343 = v240;
        v344 = v239;
        v241 = (const __m128i *)codexmate_lib::core::relay::translator::claude_code_alias_target_name::heaae98c00ec3c8e5(
                                  v236,
                                  v234);
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v364);
        *(_OWORD *)v356 = v364[0];
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hc2185adb0a9c9337(v364, v356);
        v242 = *((_BYTE **)&v364[0] + 1);
        v333 = v234;
        v345 = (__int64)v241;
        if ( *(_QWORD *)&v364[1] <= 0xCu )
        {
          if ( *(_QWORD *)&v364[1] != 12 )
LABEL_491:
            core::str::slice_error_fail::h480e51fbd8b15eba(
              *((_QWORD *)&v364[0] + 1),
              *(_QWORD *)&v364[1],
              0,
              12,
              &off_1019745C8);
        }
        else if ( *(char *)(*((_QWORD *)&v364[0] + 1) + 12LL) < -64 )
        {
          goto LABEL_491;
        }
        *(_QWORD *)&v346 = *((_QWORD *)&v364[0] + 1);
        *((_QWORD *)&v346 + 1) = 12;
        v359 = (__int64)&v346;
        *(_QWORD *)&v360 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        v243 = v355;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v355, &unk_1017C5D20, &v359);
        v244 = *(_QWORD *)&v364[0];
        if ( *(_QWORD *)&v364[0] )
        {
          v243 = v242;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v242, *(_QWORD *)&v364[0], 1);
        }
        *(_OWORD *)v348 = *(_OWORD *)v355;
        *(_QWORD *)&v348[16] = *(_QWORD *)&v355[16];
        *(_QWORD *)v356 = 0;
        *(_QWORD *)&v356[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v243, v244);
        v245 = 4;
        v246 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        v247 = v339;
        if ( !v246 )
          goto LABEL_736;
        *v246 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v246;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974228);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745E0);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v245 = 2;
        v248 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
        if ( !v248 )
          goto LABEL_736;
        *v248 = 25705;
        v359 = 2;
        *(_QWORD *)&v360 = v248;
        *((_QWORD *)&v360 + 1) = 2;
        *(_QWORD *)&v346 = v348;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, &v346);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745E0);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v245 = 6;
        v249 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v249 )
          goto LABEL_736;
        *(_WORD *)(v249 + 4) = 29557;
        *(_DWORD *)v249 = 1952543859;
        v359 = 6;
        *(_QWORD *)&v360 = v249;
        *((_QWORD *)&v360 + 1) = 6;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974198);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745E0);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v245 = 7;
        v250 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v250 )
          goto LABEL_736;
        *(_DWORD *)((char *)v250 + 3) = 1684627308;
        *v250 = 1819042147;
        v359 = 7;
        *(_QWORD *)&v360 = v250;
        *((_QWORD *)&v360 + 1) = 7;
        *(_QWORD *)&v346 = &v340;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, &v346);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745E0);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v245 = 4;
        v251 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v251 )
          goto LABEL_736;
        *v251 = 1701667182;
        v359 = 4;
        *(_QWORD *)&v360 = v251;
        *((_QWORD *)&v360 + 1) = 4;
        *(_QWORD *)&v346 = &v342;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, &v346);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745E0);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v245 = 9;
        v252 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
        if ( !v252 )
LABEL_736:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v245);
        *(_QWORD *)v252 = 0x746E656D75677261LL;
        *(_BYTE *)(v252 + 8) = 115;
        v359 = 9;
        *(_QWORD *)&v360 = v252;
        *((_QWORD *)&v360 + 1) = 9;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &xmmword_1016792E0);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745E0);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        v360 = *(_OWORD *)v356;
        v361 = *(_QWORD *)&v356[16];
        LOBYTE(v359) = 5;
        v253 = v343;
        codexmate_lib::core::relay::translator::add_namespace_for_mapped_tool::h7403e268179b70d8(
          (__int64)&v359,
          v343,
          v344,
          (__int64 *)(v358 + 280));
        *(_QWORD *)&v346 = 0;
        v347 = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v359, v253);
        v254 = 4;
        v255 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v255 )
          goto LABEL_739;
        *v255 = 1701869940;
        *(_QWORD *)v356 = 4;
        *(_QWORD *)&v356[8] = v255;
        *(_QWORD *)&v356[16] = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974280);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745F8);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, &v346, v356, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, &v346);
        v254 = 12;
        v256 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
        if ( !v256 )
          goto LABEL_739;
        qmemcpy(v256, "output_index", 12);
        *(_QWORD *)v356 = 12;
        *(_QWORD *)&v356[8] = v256;
        *(_QWORD *)&v356[16] = 12;
        LOBYTE(v364[0]) = 2;
        *((_QWORD *)&v364[0] + 1) = 0;
        *(_QWORD *)&v364[1] = v247;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, &v346, v356, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, &v346);
        v254 = 7;
        v257 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v257 )
          goto LABEL_739;
        *(_DWORD *)((char *)v257 + 3) = 1684627309;
        *v257 = 1835365481;
        *(_QWORD *)v356 = 7;
        *(_QWORD *)&v356[8] = v257;
        *(_QWORD *)&v356[16] = 7;
        v334 = (__int64 **)v348;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, &v334);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745F8);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, &v346, v356, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, &v346);
        v254 = 4;
        v258 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v258 )
LABEL_739:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v254);
        *v258 = 1835365481;
        *(_QWORD *)v356 = 4;
        *(_QWORD *)&v356[8] = v258;
        *(_QWORD *)&v356[16] = 4;
        serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
          v364,
          &v359);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745F8);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, &v346, v356, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        *(_OWORD *)((char *)v364 + 8) = v346;
        *((_QWORD *)&v364[1] + 1) = v347;
        LOBYTE(v364[0]) = 5;
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
          v355,
          v358 + 352,
          "response.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done",
          26,
          v364);
        v260 = *(const void **)&v355[8];
        v261 = *(_QWORD *)&v355[16];
        v262 = v351;
        if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v349,
            v351,
            *(_QWORD *)&v355[16],
            1,
            1,
            v259);
          v262 = v351;
          LODWORD(v247) = (_DWORD)v339;
        }
        memcpy((void *)(v350 + v262), v260, v261);
        v351 += v261;
        if ( *(_QWORD *)v355 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v260, *(_QWORD *)v355, 1);
        v263 = v337;
        v264 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)&v348[8];
        *(_QWORD *)&v364[0] = *(_QWORD *)v348;
        *((_QWORD *)&v364[1] + 1) = v340;
        v364[2] = v341;
        *(_QWORD *)&v364[3] = v338;
        *((_QWORD *)&v364[3] + 1) = v263;
        v364[4] = v333;
        LODWORD(v364[6]) = (_DWORD)v247;
        v364[5] = 1u;
        BYTE4(v364[6]) = 1;
        BYTE5(v364[6]) = v345 != 0;
        BYTE6(v364[6]) = 0;
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h10d072280703357c(v355, v358 + 232, v336, v364);
        if ( !__OFSUB__(0, *(_QWORD *)v355) )
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..translator..stream..ToolItemState$GT$::h18f5d0c6640c775c(
            v355,
            v264);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v359);
        goto LABEL_541;
      case 0xFuLL:
        if ( *(_QWORD *)v345 ^ 0x745F726576726573LL | *(_QWORD *)(v345 + 7) ^ 0x6573755F6C6F6F74LL )
          goto LABEL_543;
        v71 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &unk_1015FB9C8,
                4,
                &v352);
        if ( !v71
          || *(_BYTE *)v71 != 3
          || *(_QWORD *)(v71 + 24) != 10
          || **(_QWORD **)(v71 + 16) ^ 0x726165735F626577LL
           | *(unsigned __int16 *)(*(_QWORD *)(v71 + 16) + 8LL) ^ 0x6863LL )
        {
          goto LABEL_543;
        }
        v72 = *(unsigned int *)(v358 + 360);
        *(_DWORD *)(v358 + 360) = v72 + 1;
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v364);
        *(_OWORD *)v356 = v364[0];
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hc2185adb0a9c9337(v364, v356);
        v73 = *((_BYTE **)&v364[0] + 1);
        if ( *(_QWORD *)&v364[1] <= 0xCu )
        {
          if ( *(_QWORD *)&v364[1] != 12 )
LABEL_148:
            core::str::slice_error_fail::h480e51fbd8b15eba(
              *((_QWORD *)&v364[0] + 1),
              *(_QWORD *)&v364[1],
              0,
              12,
              &off_101974558);
        }
        else if ( *(char *)(*((_QWORD *)&v364[0] + 1) + 12LL) < -64 )
        {
          goto LABEL_148;
        }
        *(_QWORD *)&v346 = *((_QWORD *)&v364[0] + 1);
        *((_QWORD *)&v346 + 1) = 12;
        v359 = (__int64)&v346;
        *(_QWORD *)&v360 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        v285 = v355;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v355, &unk_1017C5DA2, &v359);
        v286 = *(_QWORD *)&v364[0];
        if ( *(_QWORD *)&v364[0] )
        {
          v285 = v73;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, *(_QWORD *)&v364[0], 1);
        }
        v342 = *(_QWORD *)v355;
        v343 = *(const void **)&v355[8];
        v344 = *(_QWORD *)&v355[16];
        *(_QWORD *)v348 = 0;
        *(_QWORD *)&v348[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v285, v286);
        v287 = 4;
        v288 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v288 )
          goto LABEL_741;
        *v288 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v288;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974280);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974570);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v287 = 12;
        v289 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
        if ( !v289 )
          goto LABEL_741;
        qmemcpy(v289, "output_index", 12);
        v359 = 12;
        *(_QWORD *)&v360 = v289;
        *((_QWORD *)&v360 + 1) = 12;
        LOBYTE(v364[0]) = 2;
        *((_QWORD *)&v364[0] + 1) = 0;
        *(_QWORD *)&v364[1] = v72;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v359, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v348);
        v287 = 7;
        v290 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v290 )
          goto LABEL_741;
        *(_DWORD *)((char *)v290 + 3) = 1684627309;
        *v290 = 1835365481;
        v359 = 7;
        *(_QWORD *)&v360 = v290;
        *((_QWORD *)&v360 + 1) = 7;
        *(_QWORD *)v356 = &v342;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, v356);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974570);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v287 = 4;
        v291 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v291 )
LABEL_741:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v287);
        *v291 = 1835365481;
        *(_QWORD *)&v346 = 4;
        *((_QWORD *)&v346 + 1) = v291;
        v347 = 4;
        *(_QWORD *)v356 = 0;
        *(_QWORD *)&v356[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v292 = 4;
        v293 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v293 )
          goto LABEL_743;
        *v293 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v293;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974588);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974570);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v292 = 2;
        v294 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
        if ( !v294 )
          goto LABEL_743;
        *v294 = 25705;
        v359 = 2;
        *(_QWORD *)&v360 = v294;
        *((_QWORD *)&v360 + 1) = 2;
        v340 = &v342;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, &v340);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974570);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v292 = 6;
        v295 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v295 )
LABEL_743:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v292);
        *(_WORD *)(v295 + 4) = 29557;
        *(_DWORD *)v295 = 1952543859;
        v359 = 6;
        *(_QWORD *)&v360 = v295;
        *((_QWORD *)&v360 + 1) = 6;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974198);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974570);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v356;
        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v356[16];
        LOBYTE(v364[0]) = 5;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v346, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v348;
        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v348[16];
        LOBYTE(v364[0]) = 5;
        v296 = v358 + 352;
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
          v355,
          v358 + 352,
          "response.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done",
          26,
          v364);
        v298 = *(const void **)&v355[8];
        v299 = *(_QWORD *)&v355[16];
        v300 = v351;
        if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v349,
            v351,
            *(_QWORD *)&v355[16],
            1,
            1,
            v297);
          v300 = v351;
        }
        memcpy((void *)(v350 + v300), v298, v299);
        v351 += v299;
        v301 = *(_QWORD *)v355;
        if ( *(_QWORD *)v355 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v298, *(_QWORD *)v355, 1);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        *(_QWORD *)v348 = 0;
        *(_QWORD *)&v348[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v301);
        v302 = 4;
        v303 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v303 )
          goto LABEL_742;
        *v303 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v303;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_1019741F0);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974598);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v302 = 12;
        v304 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
        if ( !v304 )
          goto LABEL_742;
        qmemcpy(v304, "output_index", 12);
        v359 = 12;
        *(_QWORD *)&v360 = v304;
        *((_QWORD *)&v360 + 1) = 12;
        LOBYTE(v364[0]) = 2;
        *((_QWORD *)&v364[0] + 1) = 0;
        *(_QWORD *)&v364[1] = v72;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v359, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v348);
        v302 = 7;
        v305 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v305 )
          goto LABEL_742;
        *(_DWORD *)((char *)v305 + 3) = 1684627309;
        *v305 = 1835365481;
        v359 = 7;
        *(_QWORD *)&v360 = v305;
        *((_QWORD *)&v360 + 1) = 7;
        *(_QWORD *)v356 = &v342;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, v356);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974598);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v302 = 4;
        v306 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v306 )
LABEL_742:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v302);
        *v306 = 1835365481;
        *(_QWORD *)&v346 = 4;
        *((_QWORD *)&v346 + 1) = v306;
        v347 = 4;
        *(_QWORD *)v356 = 0;
        *(_QWORD *)&v356[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v307 = 4;
        v308 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v308 )
          goto LABEL_744;
        *v308 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v308;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974588);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974598);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v307 = 2;
        v309 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
        if ( !v309 )
          goto LABEL_744;
        *v309 = 25705;
        v359 = 2;
        *(_QWORD *)&v360 = v309;
        *((_QWORD *)&v360 + 1) = 2;
        v340 = &v342;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, &v340);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974598);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v307 = 6;
        v310 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v310 )
LABEL_744:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v307);
        *(_WORD *)(v310 + 4) = 29557;
        *(_DWORD *)v310 = 1952543859;
        v359 = 6;
        *(_QWORD *)&v360 = v310;
        *((_QWORD *)&v360 + 1) = 6;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974170);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974598);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v356;
        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v356[16];
        LOBYTE(v364[0]) = 5;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v346, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v348;
        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v348[16];
        LOBYTE(v364[0]) = 5;
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
          v355,
          v296,
          "response.output_item.doneresponse.function_call_arguments.done",
          25,
          v364);
        v312 = *(const void **)&v355[8];
        v313 = *(_QWORD *)&v355[16];
        v314 = v351;
        if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v349,
            v351,
            *(_QWORD *)&v355[16],
            1,
            1,
            v311);
          v314 = v351;
        }
        memcpy((void *)(v350 + v314), v312, v313);
        v351 += v313;
        v315 = *(_QWORD *)v355;
        if ( *(_QWORD *)v355 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v312, *(_QWORD *)v355, 1);
        v316 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        *(_QWORD *)v356 = 0;
        *(_QWORD *)&v356[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v315);
        v317 = 4;
        v318 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v318 )
          goto LABEL_745;
        *v318 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v318;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974588);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745B0);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          v316 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v317 = 2;
        v319 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
        if ( !v319 )
          goto LABEL_745;
        *v319 = 25705;
        v359 = 2;
        *(_QWORD *)&v360 = v319;
        *((_QWORD *)&v360 + 1) = 2;
        *(_QWORD *)&v346 = &v342;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, &v346);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745B0);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          v316 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v317 = 6;
        v320 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v320 )
LABEL_745:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v317);
        *(_WORD *)(v320 + 4) = 29557;
        *(_DWORD *)v320 = 1952543859;
        v359 = 6;
        *(_QWORD *)&v360 = v320;
        *((_QWORD *)&v360 + 1) = 6;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974170);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019745B0);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          v316 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v356;
        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v356[16];
        LOBYTE(v364[0]) = 5;
        alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hec645efee4458724(v358 + 48, v364, v316);
LABEL_541:
        if ( v342 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v343, v342, 1);
        goto LABEL_543;
      case 0x11uLL:
        v77 = _mm_or_si128(
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v345 + 16)), (__m128i)xmmword_1015DCA40),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v345), (__m128i)xmmword_1016748D0));
        if ( !_mm_testz_si128(v77, v77) )
          goto LABEL_543;
LABEL_158:
        v336 = *(unsigned int *)(v358 + 360);
        *(_DWORD *)(v358 + 360) = v336 + 1;
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v364);
        *(_QWORD *)&v360 = *((_QWORD *)&v364[0] + 1);
        v359 = *(_QWORD *)&v364[0];
        *(_QWORD *)v355 = 0;
        *(_QWORD *)&v355[8] = 1;
        *(_QWORD *)&v355[16] = 0;
        *(_QWORD *)&v364[1] = 1610612768;
        *(_QWORD *)&v364[0] = v355;
        *((_QWORD *)&v364[0] + 1) = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
        if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(
                                &v359,
                                v364) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
            55,
            v356,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
        v78 = *(_QWORD *)v355;
        v79 = *(_QWORD *)&v355[8];
        if ( *(_QWORD *)&v355[16] <= 0xCu )
        {
          if ( *(_QWORD *)&v355[16] != 12 )
LABEL_161:
            core::str::slice_error_fail::h480e51fbd8b15eba(
              *(_QWORD *)&v355[8],
              *(_QWORD *)&v355[16],
              0,
              12,
              &off_101974658);
        }
        else if ( *(char *)(*(_QWORD *)&v355[8] + 12LL) < -64 )
        {
          goto LABEL_161;
        }
        *(_QWORD *)v356 = *(_QWORD *)&v355[8];
        *(_QWORD *)&v356[8] = 12;
        *(_QWORD *)v355 = v356;
        *(_QWORD *)&v355[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v364, &unk_1017C5D13, v355);
        if ( v78 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v78, 1);
        v340 = *(__int64 **)&v364[0];
        v341 = *(_OWORD *)((char *)v364 + 8);
        v89 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &unk_101674AA0,
                8,
                &v352);
        if ( v89 )
        {
          v90 = 0;
          if ( *(_BYTE *)v89 == 3 )
            v90 = *(_QWORD *)(v89 + 24);
          v91 = 1;
          if ( *(_BYTE *)v89 == 3 )
            v91 = *(_QWORD *)(v89 + 16);
        }
        else
        {
          v91 = 1;
          v90 = 0;
        }
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v364, v90, 0, 1, 1);
        v113 = *((_QWORD *)&v364[0] + 1);
        if ( LODWORD(v364[0]) == 1 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((_QWORD *)&v364[0] + 1), *(_QWORD *)&v364[1]);
        v114 = *(const void **)&v364[1];
        memcpy(*(void **)&v364[1], (const void *)v91, v90);
        v342 = v113;
        v343 = v114;
        v115 = v90;
        v344 = v90;
        v116 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 "signatureencrypted_contentresponse.reasoning_summary_part.addedcache_read_input_tokenscache_creation_input_tokens",
                 9,
                 &v352);
        if ( v116 )
        {
          v117 = 0;
          if ( *(_BYTE *)v116 == 3 )
            v117 = *(_QWORD *)(v116 + 24);
          v118 = 1;
          if ( *(_BYTE *)v116 == 3 )
            v118 = *(_QWORD *)(v116 + 16);
        }
        else
        {
          v118 = 1;
          v117 = 0;
        }
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v364, v117, 0, 1, 1);
        v338 = *((_QWORD *)&v364[0] + 1);
        if ( LODWORD(v364[0]) == 1 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v338, *(_QWORD *)&v364[1]);
        v333 = *(_QWORD *)&v364[1];
        v330 = v117;
        memcpy(*(void **)&v364[1], (const void *)v118, v117);
        v119 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                 4,
                 &v352);
        if ( v119 )
        {
          v120 = 0;
          if ( *(_BYTE *)v119 == 3 )
            v120 = *(_QWORD *)(v119 + 24);
          v121 = 1;
          if ( *(_BYTE *)v119 == 3 )
            v121 = *(_QWORD *)(v119 + 16);
        }
        else
        {
          v121 = 1;
          v120 = 0;
        }
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v364, v120, 0, 1, 1);
        v337 = *((unsigned int **)&v364[0] + 1);
        if ( LODWORD(v364[0]) == 1 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v337, *(_QWORD *)&v364[1]);
        v122 = *(_QWORD *)&v364[1];
        v332 = *(_QWORD *)&v364[1];
        v331 = v120;
        memcpy(*(void **)&v364[1], (const void *)v121, v120);
        *(_QWORD *)v348 = 0;
        *(_QWORD *)&v348[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v122, v121);
        v123 = 4;
        v124 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v124 )
          goto LABEL_728;
        *v124 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v124;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974280);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974670);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v123 = 12;
        v125 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
        if ( !v125 )
          goto LABEL_728;
        qmemcpy(v125, "output_index", 12);
        v359 = 12;
        *(_QWORD *)&v360 = v125;
        *((_QWORD *)&v360 + 1) = 12;
        LOBYTE(v364[0]) = 2;
        *((_QWORD *)&v364[0] + 1) = 0;
        *(_QWORD *)&v364[1] = v336;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v359, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v348);
        v123 = 7;
        v126 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v126 )
          goto LABEL_728;
        *(_DWORD *)((char *)v126 + 3) = 1684627309;
        *v126 = 1835365481;
        v359 = 7;
        *(_QWORD *)&v360 = v126;
        *((_QWORD *)&v360 + 1) = 7;
        *(_QWORD *)v356 = &v340;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, v356);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974670);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
        v123 = 4;
        v127 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v127 )
LABEL_728:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v123);
        *v127 = 1835365481;
        *(_QWORD *)&v346 = 4;
        *((_QWORD *)&v346 + 1) = v127;
        v347 = 4;
        *(_QWORD *)v356 = 0;
        *(_QWORD *)&v356[16] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v128 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v128 )
          goto LABEL_726;
        *v128 = 1701869940;
        v359 = 4;
        *(_QWORD *)&v360 = v128;
        *((_QWORD *)&v360 + 1) = 4;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_1019742C8);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974670);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v123 = 2;
        v129 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
        if ( !v129 )
          goto LABEL_726;
        *v129 = 25705;
        v359 = 2;
        *(_QWORD *)&v360 = v129;
        *((_QWORD *)&v360 + 1) = 2;
        v334 = &v340;
        serde_json::value::to_value::h0f7564ed1b35caf0(v364, &v334);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974670);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v123 = 6;
        v130 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v130 )
          goto LABEL_726;
        *(_WORD *)(v130 + 4) = 29557;
        *(_DWORD *)v130 = 1952543859;
        v359 = 6;
        *(_QWORD *)&v360 = v130;
        *((_QWORD *)&v360 + 1) = 6;
        serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974198);
        if ( LOBYTE(v364[0]) == 6 )
        {
          *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974670);
        }
        *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
        *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
        *(_QWORD *)v355 = *(_QWORD *)&v364[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
        if ( LOBYTE(v364[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
        v123 = 7;
        v131 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v131 )
          goto LABEL_726;
        *(_DWORD *)((char *)v131 + 3) = 2037539181;
        *v131 = 1835890035;
        v359 = 7;
        *(_QWORD *)&v360 = v131;
        *((_QWORD *)&v360 + 1) = 7;
        *((_QWORD *)&v364[0] + 1) = 0;
        v364[1] = 8u;
        LOBYTE(v364[0]) = 4;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v356, &v359, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v356);
        v123 = 17;
        v132 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
        if ( !v132 )
LABEL_726:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v123);
        qmemcpy(v132, "encrypted_content", 17);
        v359 = 17;
        *(_QWORD *)&v360 = v132;
        *((_QWORD *)&v360 + 1) = 17;
        LOBYTE(v364[0]) = 0;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v356, &v359, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v356;
        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v356[16];
        LOBYTE(v364[0]) = 5;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v346, v364);
        if ( v355[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
        v133 = v358 + 352;
        *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v348;
        *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v348[16];
        LOBYTE(v364[0]) = 5;
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
          v355,
          v358 + 352,
          "response.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done",
          26,
          v364);
        v135 = *(const void **)&v355[8];
        v136 = *(_QWORD *)&v355[16];
        v137 = v351;
        if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v349,
            v351,
            *(_QWORD *)&v355[16],
            1,
            1,
            v134);
          v137 = v351;
        }
        memcpy((void *)(v350 + v137), v135, v136);
        v351 += v136;
        v138 = *(_QWORD *)v355;
        if ( *(_QWORD *)v355 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, *(_QWORD *)v355, 1);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        if ( v339 != (_DWORD *)17
          || (v139 = v115,
              v140 = _mm_or_si128(
                       _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v345 + 16)), (__m128i)xmmword_1015DCA40),
                       _mm_xor_si128(_mm_loadu_si128((const __m128i *)v345), (__m128i)xmmword_1016748D0)),
              !_mm_testz_si128(v140, v140)) )
        {
          *(_QWORD *)v348 = 0;
          *(_QWORD *)&v348[16] = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v138);
          v141 = 4;
          v142 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v142 )
            goto LABEL_727;
          *v142 = 1701869940;
          v359 = 4;
          *(_QWORD *)&v360 = v142;
          *((_QWORD *)&v360 + 1) = 4;
          serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974688);
          if ( LOBYTE(v364[0]) == 6 )
          {
            *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974698);
          }
          *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
          *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
          *(_QWORD *)v355 = *(_QWORD *)&v364[0];
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
          if ( LOBYTE(v364[0]) != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
          v141 = 12;
          v143 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
          if ( !v143 )
            goto LABEL_727;
          qmemcpy(v143, "output_index", 12);
          v359 = 12;
          *(_QWORD *)&v360 = v143;
          *((_QWORD *)&v360 + 1) = 12;
          LOBYTE(v364[0]) = 2;
          *((_QWORD *)&v364[0] + 1) = 0;
          *(_QWORD *)&v364[1] = v336;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v359, v364);
          if ( v355[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v348);
          v141 = 7;
          v144 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
          if ( !v144 )
            goto LABEL_727;
          *(_DWORD *)((char *)v144 + 3) = 1684627309;
          *v144 = 1835365481;
          v359 = 7;
          *(_QWORD *)&v360 = v144;
          *((_QWORD *)&v360 + 1) = 7;
          *(_QWORD *)v356 = &v340;
          serde_json::value::to_value::h0f7564ed1b35caf0(v364, v356);
          if ( LOBYTE(v364[0]) == 6 )
          {
            *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974698);
          }
          *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
          *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
          *(_QWORD *)v355 = *(_QWORD *)&v364[0];
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v348, &v359, v355);
          if ( LOBYTE(v364[0]) != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v348);
          v141 = 13;
          v145 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
          if ( !v145 )
            goto LABEL_727;
          qmemcpy(v145, "summary_index", 13);
          v359 = 13;
          *(_QWORD *)&v360 = v145;
          *((_QWORD *)&v360 + 1) = 13;
          LOBYTE(v364[0]) = 2;
          *(_OWORD *)((char *)v364 + 8) = 0u;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v359, v364);
          if ( v355[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v348);
          v141 = 4;
          v146 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v146 )
LABEL_727:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v141);
          *v146 = 1953653104;
          *(_QWORD *)&v346 = 4;
          *((_QWORD *)&v346 + 1) = v146;
          v347 = 4;
          *(_QWORD *)v356 = 0;
          *(_QWORD *)&v356[16] = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v147 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v147 )
            goto LABEL_737;
          *v147 = 1701869940;
          v359 = 4;
          *(_QWORD *)&v360 = v147;
          *((_QWORD *)&v360 + 1) = 4;
          serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_1019742D8);
          if ( LOBYTE(v364[0]) == 6 )
          {
            *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974698);
          }
          *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
          *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
          *(_QWORD *)v355 = *(_QWORD *)&v364[0];
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
          if ( LOBYTE(v364[0]) != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
          v148 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v148 )
LABEL_737:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
          *v148 = 1954047348;
          v359 = 4;
          *(_QWORD *)&v360 = v148;
          *((_QWORD *)&v360 + 1) = 4;
          serde_json::value::to_value::h29e3c39dc75a9151(v364, &xmmword_1016792E0);
          if ( LOBYTE(v364[0]) == 6 )
          {
            *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_101974698);
          }
          *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
          *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
          *(_QWORD *)v355 = *(_QWORD *)&v364[0];
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
          if ( LOBYTE(v364[0]) != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
          *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v356;
          *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v356[16];
          LOBYTE(v364[0]) = 5;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v348, &v346, v364);
          if ( v355[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
          *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v348;
          *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v348[16];
          LOBYTE(v364[0]) = 5;
          codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
            v355,
            v133,
            "response.reasoning_summary_part.addedcache_read_input_tokenscache_creation_input_tokens",
            37,
            v364);
          v150 = *(const void **)&v355[8];
          v151 = *(_QWORD *)&v355[16];
          v152 = v351;
          if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v349,
              v351,
              *(_QWORD *)&v355[16],
              1,
              1,
              v149);
            v152 = v351;
          }
          memcpy((void *)(v350 + v152), v150, v151);
          v351 += v151;
          v138 = *(_QWORD *)v355;
          if ( *(_QWORD *)v355 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v150, *(_QWORD *)v355, 1);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
          v139 = v115;
        }
        if ( v139 )
        {
          *(_QWORD *)v356 = 0;
          *(_QWORD *)&v356[16] = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v138);
          v153 = 4;
          v154 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v154 )
            goto LABEL_732;
          *v154 = 1701869940;
          v359 = 4;
          *(_QWORD *)&v360 = v154;
          *((_QWORD *)&v360 + 1) = 4;
          serde_json::value::to_value::h29e3c39dc75a9151(v364, &off_101974330);
          if ( LOBYTE(v364[0]) == 6 )
          {
            *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019746B0);
          }
          *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
          *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
          *(_QWORD *)v355 = *(_QWORD *)&v364[0];
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
          if ( LOBYTE(v364[0]) != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
          v153 = 12;
          v155 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
          if ( !v155 )
            goto LABEL_732;
          qmemcpy(v155, "output_index", 12);
          v359 = 12;
          *(_QWORD *)&v360 = v155;
          *((_QWORD *)&v360 + 1) = 12;
          LOBYTE(v364[0]) = 2;
          *((_QWORD *)&v364[0] + 1) = 0;
          *(_QWORD *)&v364[1] = v336;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v356, &v359, v364);
          if ( v355[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v356);
          v153 = 7;
          v156 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
          if ( !v156 )
            goto LABEL_732;
          *(_DWORD *)((char *)v156 + 3) = 1684627309;
          *v156 = 1835365481;
          v359 = 7;
          *(_QWORD *)&v360 = v156;
          *((_QWORD *)&v360 + 1) = 7;
          *(_QWORD *)&v346 = &v340;
          serde_json::value::to_value::h0f7564ed1b35caf0(v364, &v346);
          if ( LOBYTE(v364[0]) == 6 )
          {
            *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019746B0);
          }
          *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
          *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
          *(_QWORD *)v355 = *(_QWORD *)&v364[0];
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
          if ( LOBYTE(v364[0]) != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v364, v356);
          v153 = 13;
          v157 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
          if ( !v157 )
            goto LABEL_732;
          qmemcpy(v157, "summary_index", 13);
          v359 = 13;
          *(_QWORD *)&v360 = v157;
          *((_QWORD *)&v360 + 1) = 13;
          LOBYTE(v364[0]) = 2;
          *(_OWORD *)((char *)v364 + 8) = 0u;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v355, v356, &v359, v364);
          if ( v355[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v355);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v355, v356);
          v153 = 5;
          v158 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
          if ( !v158 )
LABEL_732:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v153);
          *(_BYTE *)(v158 + 4) = 97;
          *(_DWORD *)v158 = 1953260900;
          v359 = 5;
          *(_QWORD *)&v360 = v158;
          *((_QWORD *)&v360 + 1) = 5;
          serde_json::value::to_value::hf4a5c51664f5d8d6(v364, &v342);
          if ( LOBYTE(v364[0]) == 6 )
          {
            *(_QWORD *)v355 = *((_QWORD *)&v364[0] + 1);
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v355, &off_101974C58, &off_1019746B0);
          }
          *(_QWORD *)&v355[24] = *((_QWORD *)&v364[1] + 1);
          *(_OWORD *)&v355[8] = *(_OWORD *)((char *)v364 + 8);
          *(_QWORD *)v355 = *(_QWORD *)&v364[0];
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v364, v356, &v359, v355);
          if ( LOBYTE(v364[0]) != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
          *(_OWORD *)((char *)v364 + 8) = *(_OWORD *)v356;
          *((_QWORD *)&v364[1] + 1) = *(_QWORD *)&v356[16];
          LOBYTE(v364[0]) = 5;
          codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
            v355,
            v133,
            &unk_10167CD01,
            37,
            v364);
          v160 = *(const void **)&v355[8];
          v161 = *(_QWORD *)&v355[16];
          v162 = v351;
          if ( *(_QWORD *)&v355[16] > (unsigned __int64)(v349 - v351) )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v349,
              v351,
              *(_QWORD *)&v355[16],
              1,
              1,
              v159);
            v162 = v351;
          }
          memcpy((void *)(v350 + v162), v160, v161);
          v351 += v161;
          if ( *(_QWORD *)v355 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160, *(_QWORD *)v355, 1);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v364);
        }
        if ( v339 == (_DWORD *)17 )
        {
          v163 = _mm_or_si128(
                   _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v345 + 16)), (__m128i)xmmword_1015DCA40),
                   _mm_xor_si128(_mm_loadu_si128((const __m128i *)v345), (__m128i)xmmword_1016748D0));
          v164 = _mm_testz_si128(v163, v163);
        }
        else
        {
          v164 = 0;
        }
        v325 = v341;
        v324 = v340;
        v326 = v342;
        v327 = v343;
        v328 = v344;
        v165 = v358;
        core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..translator..stream..ThinkingItemState$GT$$GT$::he67aff41b9be3ffd(v358 + 72);
        *(_QWORD *)(v165 + 112) = v328;
        *(_QWORD *)(v165 + 104) = v327;
        *(_QWORD *)(v165 + 96) = v326;
        *(_QWORD *)(v165 + 88) = *((_QWORD *)&v325 + 1);
        v166 = v324;
        *(_QWORD *)(v165 + 80) = v325;
        *(_QWORD *)(v165 + 72) = v166;
        *(_QWORD *)(v165 + 120) = v338;
        *(_QWORD *)(v165 + 128) = v333;
        *(_QWORD *)(v165 + 136) = v330;
        *(_QWORD *)(v165 + 144) = v337;
        *(_QWORD *)(v165 + 152) = v332;
        *(_QWORD *)(v165 + 160) = v331;
        *(_DWORD *)(v165 + 168) = v336;
        *(_BYTE *)(v165 + 172) = v164;
LABEL_543:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v352);
        goto LABEL_544;
      default:
        goto LABEL_543;
    }
  }
  if ( *(_QWORD *)v6 ^ 0x5F6567617373656DLL | *(_QWORD *)(v6 + 5) ^ 0x74726174735F6567LL )
  {
    if ( *(_QWORD *)v6 ^ 0x5F6567617373656DLL | *(_QWORD *)(v6 + 5) ^ 0x61746C65645F6567LL )
      goto LABEL_544;
    v8 = 13;
    goto LABEL_38;
  }
  v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "messageassistantresponse.output_item.doneresponse.function_call_arguments.done",
          7,
          a3);
  if ( v14 )
  {
    v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "modelusagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
            5,
            v14);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 24);
      if ( *(_BYTE *)v15 == 3 && v16 != 0 )
      {
        v17 = *(const void **)(v15 + 16);
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v364, *(_QWORD *)(v15 + 24), 0, 1, 1);
        v18 = *((_QWORD *)&v364[0] + 1);
        if ( LODWORD(v364[0]) == 1 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((_QWORD *)&v364[0] + 1), *(_QWORD *)&v364[1]);
        v19 = *(_QWORD *)&v364[1];
        memcpy(*(void **)&v364[1], v17, v16);
        v20 = v358;
        if ( *(_QWORD *)v358 )
          a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v358 + 8), *(_QWORD *)v358, 1);
        *(_QWORD *)v358 = v18;
        *(_QWORD *)(v20 + 8) = v19;
        *(_QWORD *)(v20 + 16) = v16;
      }
    }
  }
  v21 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "messageassistantresponse.output_item.doneresponse.function_call_arguments.done",
          7,
          a3);
  if ( v21 )
  {
    v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "usagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
            5,
            v21);
    if ( v22 )
      codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::capture_usage::h62f6005f4fe8946b(
        v358,
        v22);
  }
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::ensure_created::h4369870c09ea9ab6(
    v358,
    &v349,
    a4);
LABEL_544:
  v265 = v329;
  v329[2] = v351;
  result = v349;
  v265[1] = v350;
  *v265 = result;
  return result;
}
