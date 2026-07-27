// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream12handle_chunk @ 0x100a892d0 | 基线 same-set
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_chunk::hd08010e8614ea2dc(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v4; // rbx
  const char *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  signed __int64 v9; // r12
  const void *v10; // r13
  __int64 v11; // r14
  void *v12; // rax
  void *v13; // rbx
  _QWORD *v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  signed __int64 *v30; // rax
  signed __int64 v31; // rcx
  signed __int64 v32; // rsi
  signed __int64 v33; // r15
  __int64 (__fastcall **v34)(); // r12
  __int64 v35; // rax
  __int64 v36; // r9
  size_t v37; // r15
  const void *v38; // r12
  int v39; // eax
  _QWORD *v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // r15
  char v44; // al
  _BYTE *v45; // rax
  _BYTE *v46; // r15
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // r13
  signed __int64 *v51; // rax
  signed __int64 v52; // rcx
  signed __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rbx
  bool v58; // zf
  unsigned __int64 v59; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __m128i v63; // xmm0
  __int64 i; // rdi
  unsigned __int64 v65; // rax
  __m128i v66; // xmm1
  _QWORD *v68; // rcx
  int v69; // ebx
  void *v70; // r15
  void *v71; // r13
  unsigned __int64 v72; // r15
  __int64 v74; // r14
  __int64 v75; // r13
  __m128i v76; // xmm1
  __int64 v77; // r12
  __int64 j; // rcx
  unsigned __int64 v79; // r15
  __m128i v80; // xmm2
  __int64 v82; // rax
  int v83; // eax
  __int32 v84; // ecx
  size_t v85; // r14
  unsigned __int64 v86; // rax
  __int64 v88; // r13
  __int64 v89; // rcx
  __m128i v90; // xmm0
  __int64 k; // rsi
  unsigned __int64 v92; // rax
  __m128i v93; // xmm1
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r13
  __int64 v98; // r15
  __int64 v99; // r12
  size_t v100; // r13
  __int64 v101; // r15
  _QWORD *v102; // rax
  size_t v103; // r12
  _QWORD *v104; // rax
  size_t v105; // rdx
  _QWORD *v106; // r12
  size_t v107; // rax
  __int64 v108; // rbx
  void *v109; // r15
  _QWORD *v110; // r13
  __int64 *v111; // rbx
  __int64 v112; // rax
  char v113; // al
  __int64 v114; // rsi
  size_t v115; // rdx
  void *v116; // rdi
  void *v117; // rsi
  __int64 v118; // r12
  _DWORD *v119; // rax
  void *v120; // rax
  char **v121; // rdi
  char *v122; // rax
  __int64 v123; // rcx
  char *v124; // rdx
  signed __int64 v125; // rdx
  signed __int64 *v126; // rsi
  __int64 v127; // r15
  _DWORD *v128; // rax
  void *v129; // rax
  char **v130; // rdi
  char *v131; // rax
  __int64 v132; // rcx
  char *v133; // rdx
  signed __int64 v134; // rdx
  signed __int64 *v135; // rsi
  __int64 v136; // r15
  _DWORD *v137; // rax
  void *v138; // rax
  char **v139; // rdi
  char *v140; // rax
  __int64 v141; // rcx
  char *v142; // rdx
  signed __int64 v143; // rdx
  signed __int64 *v144; // rsi
  _WORD *v145; // rax
  signed __int64 v146; // r15
  const void *v147; // rsi
  __int64 v148; // r14
  __int64 v149; // rax
  __int64 v150; // rbx
  _WORD *v151; // rax
  signed __int64 v152; // r15
  const void *v153; // rsi
  __int64 v154; // r14
  __int64 v155; // rax
  __int64 v156; // rbx
  void *v157; // rax
  __int64 v158; // rax
  char **v159; // rdi
  char *v160; // rax
  __int64 v161; // rcx
  char *v162; // rdx
  signed __int64 v163; // rdx
  signed __int64 *v164; // rsi
  _DWORD *v165; // rax
  signed __int64 v166; // r12
  const void *v167; // rsi
  __int64 v168; // r14
  __int64 v169; // rax
  __int64 v170; // rbx
  char **v171; // rdi
  char *v172; // rax
  __int64 v173; // rcx
  char *v174; // rdx
  signed __int64 v175; // rdx
  signed __int64 *v176; // rsi
  __int64 v177; // rax
  void *v178; // rax
  char **v179; // rdi
  char *v180; // rax
  __int64 v181; // rcx
  char *v182; // rdx
  signed __int64 v183; // rdx
  signed __int64 *v184; // rsi
  _DWORD *v185; // rax
  signed __int64 v186; // r15
  const void *v187; // rsi
  __int64 v188; // r14
  __int64 v189; // rax
  __int64 v190; // rbx
  char **v191; // rdi
  char *v192; // rax
  __int64 v193; // rcx
  char *v194; // rdx
  signed __int64 v195; // rdx
  signed __int64 *v196; // rsi
  __int64 v197; // rax
  void *v198; // rax
  char **v199; // rdi
  char *v200; // rax
  __int64 v201; // rcx
  char *v202; // rdx
  signed __int64 v203; // rdx
  signed __int64 *v204; // rsi
  _DWORD *v205; // rax
  signed __int64 v206; // r15
  const void *v207; // rsi
  __int64 v208; // r14
  __int64 v209; // rax
  __int64 v210; // rbx
  char **v211; // rdi
  char *v212; // rax
  __int64 v213; // rcx
  char *v214; // rdx
  signed __int64 v215; // rdx
  signed __int64 *v216; // rsi
  __int64 v217; // rax
  size_t v218; // rdx
  __int64 v219; // rbx
  void *v220; // rax
  __int64 v221; // r14
  size_t v222; // rbx
  char *v223; // rax
  __int64 v224; // rcx
  char *v225; // rdx
  signed __int64 v226; // rdx
  __int64 v227; // r9
  void *v228; // r15
  size_t v229; // r12
  size_t v230; // r13
  char **v231; // rdi
  char *v232; // rax
  __int64 v233; // rcx
  char *v234; // rdx
  signed __int64 v235; // rdx
  signed __int64 *v236; // rsi
  _DWORD *v237; // rax
  signed __int64 v238; // r15
  const void *v239; // rsi
  __int64 v240; // r14
  __int64 v241; // rax
  __int64 v242; // rbx
  char **v243; // rdi
  char *v244; // rax
  __int64 v245; // rcx
  char *v246; // rdx
  signed __int64 v247; // rdx
  signed __int64 *v248; // rsi
  _DWORD *v249; // rax
  signed __int64 v250; // r15
  const void *v251; // rsi
  __int64 v252; // r14
  __int64 v253; // rax
  __int64 v254; // rbx
  char **v255; // rdi
  char *v256; // rax
  __int64 v257; // rcx
  char *v258; // rdx
  signed __int64 v259; // rdx
  signed __int64 *v260; // rsi
  __int64 v261; // rax
  __int64 v262; // rdi
  char *v263; // rax
  __int64 v264; // rcx
  char *v265; // rdx
  signed __int64 v266; // rdx
  __int64 v267; // rsi
  char **v268; // rdi
  _QWORD *v269; // rbx
  char *v270; // rax
  __int64 v271; // rcx
  char *v272; // rdx
  signed __int64 v273; // rdx
  signed __int64 *v274; // rsi
  __int64 v275; // rax
  char *v276; // rax
  __int64 v277; // rcx
  char *v278; // rdx
  signed __int64 v279; // rdx
  size_t v280; // r15
  size_t v281; // rcx
  __m128i si128; // xmm1
  size_t v283; // r15
  __m128i v284; // xmm2
  size_t v286; // rdx
  __int64 v287; // r12
  const void *v288; // rbx
  size_t v289; // r14
  int v290; // eax
  size_t v291; // r15
  bool v292; // cf
  char *v293; // r15
  const void *v294; // r14
  __int64 v295; // rbx
  void *v296; // rbx
  signed __int64 v297; // rax
  __int64 v298; // r12
  _DWORD *v299; // rax
  void *v300; // rax
  char **v301; // rdi
  char *v302; // rax
  __int64 v303; // rcx
  char *v304; // rdx
  signed __int64 v305; // rdx
  signed __int64 *v306; // rsi
  void *v307; // rax
  __int64 v308; // rax
  char **v309; // rdi
  char *v310; // rax
  __int64 v311; // rcx
  char *v312; // rdx
  signed __int64 v313; // rdx
  signed __int64 *v314; // rsi
  _DWORD *v315; // rax
  char *v316; // rax
  __int64 v317; // rcx
  char *v318; // rdx
  signed __int64 v319; // rdx
  __int64 v320; // r9
  void *v321; // r15
  size_t v322; // r12
  size_t v323; // rbx
  __int64 v324; // rax
  signed __int64 v325; // r15
  const void *v326; // r12
  __int64 v327; // rbx
  void *v328; // rax
  void *v329; // r13
  _QWORD *v330; // r12
  __int64 v331; // rsi
  __int64 result; // rax
  __int64 v333; // r15
  __int64 v334; // r12
  _QWORD *v335; // r13
  __int64 v336; // rbx
  size_t v337; // rsi
  __m128i v338; // [rsp+0h] [rbp-330h] BYREF
  _QWORD v339[3]; // [rsp+10h] [rbp-320h] BYREF
  _QWORD v340[3]; // [rsp+28h] [rbp-308h] BYREF
  __int64 v341; // [rsp+40h] [rbp-2F0h]
  _QWORD *v342; // [rsp+48h] [rbp-2E8h]
  _QWORD *v343; // [rsp+50h] [rbp-2E0h]
  __int64 v344; // [rsp+58h] [rbp-2D8h]
  _QWORD *v345; // [rsp+60h] [rbp-2D0h]
  _QWORD *v346; // [rsp+68h] [rbp-2C8h]
  __m128i v347; // [rsp+70h] [rbp-2C0h] BYREF
  signed __int64 v348; // [rsp+88h] [rbp-2A8h] BYREF
  __int64 (__fastcall **v349)(); // [rsp+90h] [rbp-2A0h]
  size_t v350; // [rsp+98h] [rbp-298h]
  __int64 (__fastcall *v351)(); // [rsp+A0h] [rbp-290h]
  __int64 v352; // [rsp+A8h] [rbp-288h] BYREF
  _QWORD *v353; // [rsp+B0h] [rbp-280h]
  _QWORD *v354; // [rsp+B8h] [rbp-278h]
  __m128i v355; // [rsp+C0h] [rbp-270h] BYREF
  signed __int64 v356; // [rsp+D0h] [rbp-260h] BYREF
  __int64 (__fastcall **v357)(); // [rsp+D8h] [rbp-258h]
  size_t v358; // [rsp+E0h] [rbp-250h]
  __int64 (__fastcall *v359)(); // [rsp+E8h] [rbp-248h]
  void *__s1[2]; // [rsp+F0h] [rbp-240h] BYREF
  void *v361; // [rsp+100h] [rbp-230h]
  void *__dst; // [rsp+108h] [rbp-228h]
  __int64 v363; // [rsp+110h] [rbp-220h] BYREF
  _DWORD *v364; // [rsp+118h] [rbp-218h]
  __int64 v365; // [rsp+120h] [rbp-210h]
  __int64 v366; // [rsp+128h] [rbp-208h]
  void *__src; // [rsp+130h] [rbp-200h]
  _DWORD *v368; // [rsp+138h] [rbp-1F8h] BYREF
  __int64 v369; // [rsp+140h] [rbp-1F0h]
  __int64 v370; // [rsp+148h] [rbp-1E8h]
  __int64 v371; // [rsp+150h] [rbp-1E0h]
  __int64 v372; // [rsp+158h] [rbp-1D8h]
  size_t v373; // [rsp+160h] [rbp-1D0h]
  size_t v374; // [rsp+168h] [rbp-1C8h]
  __int64 v375; // [rsp+170h] [rbp-1C0h] BYREF
  _DWORD *v376; // [rsp+178h] [rbp-1B8h]
  __int64 v377; // [rsp+180h] [rbp-1B0h]
  __int64 v378; // [rsp+188h] [rbp-1A8h]
  __int64 v379; // [rsp+190h] [rbp-1A0h] BYREF
  __int64 v380; // [rsp+198h] [rbp-198h]
  size_t v381; // [rsp+1A0h] [rbp-190h]
  _QWORD *v382; // [rsp+1A8h] [rbp-188h]
  _QWORD *v383; // [rsp+1B0h] [rbp-180h]
  __int64 v384; // [rsp+1B8h] [rbp-178h] BYREF
  _DWORD *v385; // [rsp+1C0h] [rbp-170h]
  __int64 v386; // [rsp+1C8h] [rbp-168h]
  void *v387; // [rsp+1D0h] [rbp-160h] BYREF
  void *v388; // [rsp+1D8h] [rbp-158h]
  size_t v389; // [rsp+1E0h] [rbp-150h]
  __int64 (__fastcall *v390)(); // [rsp+1E8h] [rbp-148h]
  __int64 v391; // [rsp+1F0h] [rbp-140h]
  __int64 v392; // [rsp+1F8h] [rbp-138h]
  __int64 v393; // [rsp+200h] [rbp-130h]
  __int64 v394; // [rsp+208h] [rbp-128h]
  __int64 v395; // [rsp+218h] [rbp-118h]
  __int64 v396; // [rsp+220h] [rbp-110h]
  signed __int64 v397; // [rsp+238h] [rbp-F8h] BYREF
  __int64 (__fastcall **v398)(); // [rsp+240h] [rbp-F0h] BYREF
  size_t v399; // [rsp+248h] [rbp-E8h]
  __int64 (__fastcall *v400)(); // [rsp+250h] [rbp-E0h]
  __int64 v401; // [rsp+258h] [rbp-D8h]
  __int64 v402; // [rsp+260h] [rbp-D0h]
  __int64 v403; // [rsp+268h] [rbp-C8h]
  __int64 v404; // [rsp+270h] [rbp-C0h]
  __int64 v405; // [rsp+278h] [rbp-B8h]
  __int64 v406; // [rsp+280h] [rbp-B0h]
  __int64 v407; // [rsp+288h] [rbp-A8h]
  __int64 v408; // [rsp+290h] [rbp-A0h]
  int v409; // [rsp+298h] [rbp-98h]
  __int16 v410; // [rsp+29Ch] [rbp-94h]
  char v411; // [rsp+29Eh] [rbp-92h]
  __int64 *v412; // [rsp+2A0h] [rbp-90h] BYREF
  __int64 v413; // [rsp+2A8h] [rbp-88h]
  __int64 v414; // [rsp+2B0h] [rbp-80h]
  __int64 v415; // [rsp+2B8h] [rbp-78h]
  size_t __n; // [rsp+2C0h] [rbp-70h]
  char *v417; // [rsp+2C8h] [rbp-68h] BYREF
  __int64 v418; // [rsp+2D0h] [rbp-60h]
  __int64 v419; // [rsp+2D8h] [rbp-58h]
  __int64 v420; // [rsp+2E0h] [rbp-50h]
  signed __int64 v421; // [rsp+2E8h] [rbp-48h]
  __int64 v422; // [rsp+2F0h] [rbp-40h]
  __int64 v423; // [rsp+2F8h] [rbp-38h]
  __int64 v424; // [rsp+300h] [rbp-30h]

  v4 = a2;
  v379 = 0;
  v380 = 1;
  v381 = 0;
  codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::ensure_created::h50fd5f7945935c66(a2, &v379);
  v6 = "modelusagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid";
  v7 = 5;
  v8 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
         "modelusagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
         5,
         a3);
  if ( v8 )
  {
    if ( *(_BYTE *)v8 == 3 )
    {
      v9 = *(_QWORD *)(v8 + 24);
      if ( v9 )
      {
        v10 = *(const void **)(v8 + 16);
        if ( v4[4] != v9
          || (v6 = (const char *)v4[3], v7 = *(_QWORD *)(v8 + 16), memcmp(v6, (const void *)v7, *(_QWORD *)(v8 + 24))) )
        {
          if ( v9 < 0 )
          {
            v11 = 0;
            goto LABEL_8;
          }
          v382 = v4;
          v383 = a1;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v7);
          v11 = 1;
          v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1);
          if ( !v12 )
LABEL_8:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v9);
          v13 = v12;
          memcpy(v12, v10, v9);
          v14 = v382;
          v15 = v382[2];
          a1 = v383;
          if ( v15 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v382[3], v15, 1);
          v14[2] = v9;
          v14[3] = v13;
          v14[4] = v9;
          v4 = v14;
        }
      }
    }
  }
  v16 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "usagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
          5,
          a3);
  v17 = v16;
  if ( !v16 )
    goto LABEL_47;
  v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "prompt_tokenscompletion_tokensid",
          13,
          v16);
  if ( v18 && *(_BYTE *)v18 == 2 )
  {
    v19 = *(_QWORD *)(v18 + 8);
    if ( v19 )
    {
      if ( (_DWORD)v19 == 1 )
      {
LABEL_24:
        v20 = *(_QWORD *)(v18 + 16);
        goto LABEL_26;
      }
    }
    else
    {
      v20 = *(_QWORD *)(v18 + 16);
      if ( v20 >= 0 )
      {
LABEL_26:
        v4[51] = v20;
        *((_BYTE *)v4 + 430) = 1;
        goto LABEL_27;
      }
    }
  }
  v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "input_tokensoutput_tokensreasoning_output_tokenstotal_tokens",
          12,
          v17);
  if ( v18 && *(_BYTE *)v18 == 2 )
  {
    v21 = *(_QWORD *)(v18 + 8);
    if ( v21 )
    {
      if ( (_DWORD)v21 == 1 )
        goto LABEL_24;
    }
    else
    {
      v20 = *(_QWORD *)(v18 + 16);
      if ( v20 >= 0 )
        goto LABEL_26;
    }
  }
LABEL_27:
  v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "completion_tokensid",
          17,
          v17);
  if ( v22 && *(_BYTE *)v22 == 2 )
  {
    v23 = *(_QWORD *)(v22 + 8);
    if ( v23 )
    {
      if ( (_DWORD)v23 == 1 )
      {
LABEL_37:
        v24 = *(_QWORD *)(v22 + 16);
        goto LABEL_39;
      }
    }
    else
    {
      v24 = *(_QWORD *)(v22 + 16);
      if ( v24 >= 0 )
      {
LABEL_39:
        v4[52] = v24;
        *((_BYTE *)v4 + 430) = 1;
        goto LABEL_40;
      }
    }
  }
  v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "output_tokensreasoning_output_tokenstotal_tokens",
          13,
          v17);
  if ( v22 && *(_BYTE *)v22 == 2 )
  {
    v25 = *(_QWORD *)(v22 + 8);
    if ( v25 )
    {
      if ( (_DWORD)v25 == 1 )
        goto LABEL_37;
    }
    else
    {
      v24 = *(_QWORD *)(v22 + 16);
      if ( v24 >= 0 )
        goto LABEL_39;
    }
  }
LABEL_40:
  v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("total_tokens", 12, v17);
  if ( v26 )
  {
    if ( *(_BYTE *)v26 == 2 )
    {
      v27 = *(_QWORD *)(v26 + 8);
      if ( v27 != 2 )
      {
        if ( (_DWORD)v27 == 1 )
        {
          v28 = *(_QWORD *)(v26 + 16);
LABEL_46:
          *v4 = 1;
          v4[1] = v28;
          *((_BYTE *)v4 + 430) = 1;
          goto LABEL_47;
        }
        v28 = *(_QWORD *)(v26 + 16);
        if ( v28 >= 0 )
          goto LABEL_46;
      }
    }
  }
LABEL_47:
  v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "choicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
          7,
          a3);
  if ( !v29 || *(_BYTE *)v29 != 4 || !*(_QWORD *)(v29 + 24) )
    goto LABEL_375;
  v341 = *(_QWORD *)(v29 + 16);
  v30 = (signed __int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                            "deltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
                            5,
                            v341);
  if ( v30 )
  {
    switch ( *(_BYTE *)v30 )
    {
      case 0:
        LOBYTE(v397) = 0;
        break;
      case 1:
      case 2:
        v400 = (__int64 (__fastcall *)())v30[3];
        v399 = v30[2];
        v31 = *v30;
        v398 = (__int64 (__fastcall **)())v30[1];
        v397 = v31;
        break;
      case 3:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v398, v30 + 1);
        LOBYTE(v397) = 3;
        break;
      case 4:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v398, v30 + 1);
        LOBYTE(v397) = 4;
        break;
      case 5:
        if ( v30[3] )
        {
          v32 = v30[1];
          if ( !v32 )
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &v398,
            v32,
            v30[2]);
        }
        else
        {
          v398 = nullptr;
          v400 = nullptr;
        }
        LOBYTE(v397) = 5;
        break;
    }
    v359 = v400;
    v358 = v399;
    v357 = v398;
    v356 = v397;
    LOBYTE(v397) = 0;
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v397);
  }
  else
  {
    LOBYTE(v397) = 0;
    v357 = v398;
    v358 = v399;
    v359 = v400;
    v356 = v397;
  }
  codexmate_lib::core::relay::dialects::output::extract_chat_reasoning_text::h1f87b696d3d533fc(&v397, (__int64)&v356);
  v33 = v397;
  if ( !__OFSUB__(-v397, 1) )
  {
    v34 = v398;
    if ( v399 )
      codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_reasoning_delta::h2d795741751d5865(
        v4,
        v398,
        v399,
        &v379);
    if ( v33 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1);
  }
  v35 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "content*** Begin Patch",
          7,
          &v356);
  if ( v35 )
  {
    if ( *(_BYTE *)v35 == 3 )
    {
      v37 = *(_QWORD *)(v35 + 24);
      if ( v37 )
      {
        v38 = *(const void **)(v35 + 16);
        v39 = *((unsigned __int8 *)v4 + 112);
        if ( v39 == 2 )
        {
          codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_reasoning_block::ha9f203dfc14ebf29(
            v4,
            &v379);
          codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_text_delta::h49a6433a1b443499(
            v4,
            v38,
            v37,
            &v379);
        }
        else
        {
          v40 = v4 + 11;
          if ( v39 == 1 )
          {
            v41 = v4[13];
            if ( v37 > v4[11] - v41 )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                v40,
                v41,
                v37,
                1,
                1,
                v36);
              v41 = v4[13];
            }
            memcpy((void *)(v4[12] + v41), v38, v37);
            v4[13] += v37;
          }
          else
          {
            v42 = v4[13];
            if ( v37 > v4[11] - v42 )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                v40,
                v42,
                v37,
                1,
                1,
                v36);
              v42 = v4[13];
            }
            memcpy((void *)(v4[12] + v42), v38, v37);
            v43 = v4[13] + v37;
            v4[13] = v43;
            v44 = codexmate_lib::core::relay::translator::leading_think_prefix_decision::h773dd17d3dd57b5c(v4[12], v43);
            if ( !v44 )
              goto LABEL_83;
            if ( v44 != 1 )
            {
              *((_BYTE *)v4 + 112) = 2;
              v333 = v4[11];
              v334 = v4[12];
              v335 = v4;
              v336 = v4[13];
              v335[11] = 0;
              v335[12] = 1;
              v335[13] = 0;
              codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_reasoning_block::ha9f203dfc14ebf29(
                v335,
                &v379);
              codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_text_delta::h49a6433a1b443499(
                v335,
                v334,
                v336,
                &v379);
              v4 = v335;
              if ( v333 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v334, v333, 1);
              goto LABEL_83;
            }
            *((_BYTE *)v4 + 112) = 1;
          }
          codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::drain_complete_inline_think::h20088e5ce42b1e2b(
            v4,
            &v379);
        }
      }
    }
  }
LABEL_83:
  v45 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "tool_callsfinish_reasonprompt_tokenscompletion_tokensid",
                   10,
                   &v356);
  v46 = v45;
  if ( v45 )
  {
    if ( *v45 == 4 )
    {
      codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::flush_inline_think_at_boundary::ha5d2a72723807855(
        v4,
        &v379);
      v47 = *((_QWORD *)v46 + 3);
      if ( v47 )
      {
        v48 = *((_QWORD *)v46 + 2);
        v344 = v48 + 32 * v47;
        v342 = v4 + 32;
        v345 = v4 + 42;
        v353 = v4 + 36;
        v343 = v4 + 48;
        v383 = a1;
        v382 = v4;
        do
        {
          v49 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  &unk_10167CD26,
                  5,
                  v48);
          if ( v49 && *(_BYTE *)v49 == 2 && !*(_QWORD *)(v49 + 8) )
            v50 = *(_QWORD *)(v49 + 16);
          else
            v50 = 0;
          v352 = v50;
          v51 = (signed __int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                    &unk_101674A90,
                                    8,
                                    v48);
          if ( v51 )
          {
            switch ( *(_BYTE *)v51 )
            {
              case 0:
                LOBYTE(v397) = 0;
                break;
              case 1:
              case 2:
                v400 = (__int64 (__fastcall *)())v51[3];
                v399 = v51[2];
                v52 = *v51;
                v398 = (__int64 (__fastcall **)())v51[1];
                v397 = v52;
                break;
              case 3:
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v398, v51 + 1);
                LOBYTE(v397) = 3;
                break;
              case 4:
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                  &v398,
                  v51 + 1);
                LOBYTE(v397) = 4;
                break;
              case 5:
                if ( v51[3] )
                {
                  v53 = v51[1];
                  if ( !v53 )
                    core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
                  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                    &v398,
                    v53,
                    v51[2]);
                }
                else
                {
                  v398 = nullptr;
                  v400 = nullptr;
                }
                LOBYTE(v397) = 5;
                break;
            }
            v351 = v400;
            v350 = v399;
            v349 = v398;
            v348 = v397;
            LOBYTE(v397) = 0;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v397);
          }
          else
          {
            LOBYTE(v397) = 0;
            v349 = v398;
            v350 = v399;
            v351 = v400;
            v348 = v397;
          }
          v54 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("id", 2, v48);
          if ( v54 && *(_BYTE *)v54 == 3 )
          {
            __src = *(void **)(v54 + 16);
            v373 = *(_QWORD *)(v54 + 24);
          }
          else
          {
            __src = (void *)1;
            v373 = 0;
          }
          v55 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  &unk_1015FB9C8,
                  4,
                  &v348);
          __s1[0] = (void *)1;
          if ( v55 && *(_BYTE *)v55 == 3 )
          {
            __s1[0] = *(void **)(v55 + 16);
            __n = *(_QWORD *)(v55 + 24);
          }
          else
          {
            __n = 0;
          }
          v56 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  "argumentsinputpatchcontent*** Begin Patch",
                  9,
                  &v348);
          if ( v56 )
          {
            v57 = v382;
            if ( *(_BYTE *)v56 == 3 )
            {
              v361 = *(void **)(v56 + 16);
              v374 = *(_QWORD *)(v56 + 24);
            }
            else
            {
              v361 = (void *)1;
              v374 = 0;
            }
          }
          else
          {
            v361 = (void *)1;
            v374 = 0;
            v57 = v382;
          }
          v58 = v57[35] == 0;
          v372 = v48;
          v371 = v50;
          if ( v58 )
          {
LABEL_125:
            v68 = v57;
            v69 = *((_DWORD *)v57 + 106);
            *((_DWORD *)v68 + 106) = v69 + 1;
            uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v397);
            v418 = (__int64)v398;
            v417 = (char *)v397;
            v387 = nullptr;
            v388 = (void *)1;
            v389 = 0;
            v399 = 1610612768;
            v397 = (signed __int64)&v387;
            v398 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
            if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(
                                    &v417,
                                    &v397) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
                55,
                &v412,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
            v70 = v387;
            v71 = v388;
            if ( v389 <= 0x10 )
            {
              if ( v389 != 16 )
LABEL_400:
                core::str::slice_error_fail::h480e51fbd8b15eba(v388, v389, 0, 16, &off_101974340);
            }
            else if ( *((char *)v388 + 16) < -64 )
            {
              goto LABEL_400;
            }
            v387 = v388;
            v388 = (void *)16;
            v397 = (signed __int64)&v387;
            v398 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v340, &unk_1017C5D20, &v397);
            if ( v70 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, v70, 1);
            v409 = v69;
            v397 = v340[0];
            v398 = (__int64 (__fastcall **)())v340[1];
            v399 = v340[2];
            v400 = nullptr;
            v401 = 1;
            v403 = 0;
            v402 = 0;
            v404 = 1;
            v406 = 0;
            v405 = 0;
            v407 = 1;
            v408 = 0;
            v410 = 0;
            v411 = 0;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h10d072280703357c(&v387, v342, v371, &v397);
            v57 = v382;
            if ( v387 != (void *)0x8000000000000000LL )
            {
              if ( v387 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v388, v387, 1);
              if ( v390 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v391, v390, 1);
              if ( v393 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v394, v393, 1);
              if ( v395 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v396, v395, 1);
            }
          }
          else
          {
            v59 = core::hash::BuildHasher::hash_one::haed72534fb8ce28b(v353, &v352);
            v61 = v57[32];
            v62 = v57[33];
            v63 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v59 >> 57), (__m128i)0LL);
            for ( i = 0; ; i += 16 )
            {
              v65 = v62 & v59;
              v66 = _mm_loadu_si128((const __m128i *)(v61 + v65));
              _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v66, v63));
              if ( _R8D )
                break;
LABEL_123:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v66, (__m128i)-1LL)) )
                goto LABEL_125;
              v59 = v65 + i + 16;
            }
            while ( 1 )
            {
              __asm { tzcnt   r9d, r8d }
              if ( v50 == *(_QWORD *)(v61 - 112 - 112 * (v62 & (v65 + _R9))) )
                break;
              _R9 = (unsigned int)(_R8D - 1);
              LOWORD(_R9) = _R8D & (_R8D - 1);
              _R8D = _R9;
              if ( !(_WORD)_R9 )
                goto LABEL_123;
            }
          }
          if ( __n && v57[47] )
          {
            v72 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v343, __s1[0], __n);
            _RAX = v72 >> 57;
            v74 = v57[44];
            v75 = v57[45];
            v76 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v72 >> 57), (__m128i)0LL);
            v77 = v74 - 24;
            for ( j = 0; ; j += 16 )
            {
              v79 = v75 & v72;
              v80 = _mm_loadu_si128((const __m128i *)(v74 + v79));
              _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v80, v76));
              if ( _EBX )
                break;
LABEL_149:
              _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v80, (__m128i)-1LL));
              if ( (_DWORD)_RAX )
                goto LABEL_151;
              v72 = v79 + j + 16;
            }
            v355 = v76;
            v347.i64[0] = j;
            v338 = v80;
            while ( 1 )
            {
              __asm { tzcnt   eax, ebx }
              v82 = -3LL * (v75 & (v79 + _RAX));
              if ( __n == *(_QWORD *)(v77 + 8 * v82 + 16) )
              {
                v83 = memcmp(__s1[0], *(const void **)(v77 + 8 * v82 + 8), __n);
                LOBYTE(v84) = 1;
                if ( !v83 )
                  break;
              }
              _RAX = (unsigned int)(_EBX - 1);
              LOWORD(_RAX) = _EBX & (_EBX - 1);
              _EBX = _RAX;
              v76 = _mm_load_si128(&v355);
              j = v347.i64[0];
              v80 = _mm_load_si128(&v338);
              if ( !(_WORD)_RAX )
                goto LABEL_149;
            }
          }
          else
          {
LABEL_151:
            v84 = 0;
          }
          v355.i32[0] = v84;
          v4 = v382;
          v85 = v373;
          if ( !v382[35] )
LABEL_368:
            core::option::expect_failed::ha75f8bdcbd673567(&unk_10167CD2B, 13, &off_101974358);
          v86 = core::hash::BuildHasher::hash_one::haed72534fb8ce28b(v353, &v352);
          v88 = v4[32];
          v89 = v4[33];
          v90 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v86 >> 57), (__m128i)0LL);
          for ( k = 0; ; k += 16 )
          {
            v92 = v89 & v86;
            v93 = _mm_loadu_si128((const __m128i *)(v88 + v92));
            _RDI = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v93, v90));
            if ( (_DWORD)_RDI )
              break;
LABEL_157:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v93, (__m128i)-1LL)) )
              goto LABEL_368;
            v86 = v92 + k + 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   r8d, edi }
            v95 = -112LL * (v89 & (v92 + _R8));
            v96 = v371;
            if ( v371 == *(_QWORD *)(v88 - 112 + v95) )
              break;
            _R8 = (unsigned int)(_RDI - 1);
            LOWORD(_R8) = _RDI & (_RDI - 1);
            _RDI = (unsigned int)_R8;
            if ( !(_WORD)_R8 )
              goto LABEL_157;
          }
          v97 = v95 + v88;
          v58 = v85 == 0;
          a1 = v383;
          v98 = v372;
          if ( !v58 && !*(_QWORD *)(v97 - 64) )
          {
            v99 = v97;
            v100 = v373;
            if ( (v373 & 0x8000000000000000LL) != 0LL )
            {
              v101 = 0;
              v337 = (size_t)v354;
              goto LABEL_380;
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(_RDI, k);
            v101 = 1;
            v102 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v100, 1);
            if ( !v102 )
            {
              v337 = v100;
              goto LABEL_380;
            }
            v354 = v102;
            _RDI = (unsigned __int64)v102;
            memcpy(v102, __src, v100);
            k = *(_QWORD *)(v99 - 80);
            if ( k )
            {
              _RDI = *(_QWORD *)(v99 - 72);
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(_RDI, k, 1);
            }
            *(_QWORD *)(v99 - 80) = v100;
            *(_QWORD *)(v99 - 72) = v354;
            *(_QWORD *)(v99 - 64) = v100;
            v98 = v372;
            v97 = v99;
          }
          if ( __n && !*(_QWORD *)(v97 - 40) )
          {
            v103 = __n;
            if ( (__n & 0x8000000000000000LL) != 0LL )
            {
              v101 = 0;
              v337 = (size_t)v346;
              goto LABEL_380;
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(_RDI, k);
            v101 = 1;
            v104 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v103, 1);
            v105 = v103;
            if ( !v104 )
            {
              v337 = v103;
LABEL_380:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v101, v337);
            }
            v106 = v104;
            _RDI = (unsigned __int64)v104;
            memcpy(v104, __s1[0], v105);
            k = *(_QWORD *)(v97 - 56);
            if ( k )
            {
              _RDI = *(_QWORD *)(v97 - 48);
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(_RDI, k, 1);
            }
            v107 = __n;
            *(_QWORD *)(v97 - 56) = __n;
            v346 = v106;
            *(_QWORD *)(v97 - 48) = v106;
            *(_QWORD *)(v97 - 40) = v107;
            LOBYTE(v107) = v355.i8[0];
            *(_BYTE *)(v97 - 2) = v355.i8[0];
            *(_BYTE *)(v97 - 3) = v107;
            v98 = v372;
          }
          if ( !*(_QWORD *)(v97 - 64) )
          {
            uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v397);
            v418 = (__int64)v398;
            v417 = (char *)v397;
            v387 = nullptr;
            v388 = (void *)1;
            v389 = 0;
            v399 = 1610612768;
            v397 = (signed __int64)&v387;
            v398 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
            if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(
                                    &v417,
                                    &v397) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
                55,
                &v412,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
            v108 = v97;
            v109 = v387;
            v110 = v388;
            if ( v389 <= 0x10 )
            {
              if ( v389 != 16 )
LABEL_403:
                core::str::slice_error_fail::h480e51fbd8b15eba(v388, v389, 0, 16, &off_101974370);
            }
            else if ( *((char *)v388 + 16) < -64 )
            {
              goto LABEL_403;
            }
            v387 = v388;
            v388 = (void *)16;
            v397 = (signed __int64)&v387;
            v398 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            _RDI = (unsigned __int64)v339;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v339, &unk_1017C9EFF, &v397);
            if ( v109 )
            {
              _RDI = (unsigned __int64)v110;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v109, 1);
            }
            v97 = v108;
            v111 = (__int64 *)(v108 - 80);
            k = *v111;
            if ( *v111 )
            {
              _RDI = *(_QWORD *)(v97 - 72);
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(_RDI, k, 1);
            }
            v111[2] = v339[2];
            v112 = v339[0];
            v111[1] = v339[1];
            *v111 = v112;
            v4 = v382;
            v98 = v372;
          }
          v113 = 1;
          if ( *(_BYTE *)(v97 - 4) )
          {
            if ( v374 )
              goto LABEL_186;
          }
          else if ( *(_QWORD *)(v97 - 40) )
          {
            *(_BYTE *)(v97 - 4) = 1;
            if ( *(_BYTE *)(v97 - 2) )
            {
              v384 = 0;
              v386 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(_RDI, k);
              v127 = 4;
              v128 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v128 )
                goto LABEL_407;
              *v128 = 1701869940;
              v375 = 4;
              v376 = v128;
              v377 = 4;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v129 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
              if ( !v129 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
              qmemcpy(v129, "custom_tool_call", 16);
              LOBYTE(v421) = 3;
              v422 = 16;
              v423 = (__int64)v129;
              v424 = 16;
              v130 = (char **)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v384, &v375);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v131 = (char *)v388;
                v132 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v133 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v133;
                *(_QWORD *)((char *)v388 + v132 + 24) = v424;
                *(_QWORD *)&v131[v132 + 16] = v423;
                v134 = v421;
                v135 = (signed __int64 *)v422;
                *(_QWORD *)&v131[v132 + 8] = v422;
                *(_QWORD *)&v131[v132] = v134;
                if ( (_BYTE)v417 != 6 )
                {
                  v130 = &v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v130 = &v417;
                v135 = &v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v130, v135);
              v127 = 2;
              v145 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              if ( !v145 )
                goto LABEL_407;
              *v145 = 25705;
              v375 = 2;
              v376 = v145;
              v377 = 2;
              v146 = *(_QWORD *)(v97 - 88);
              if ( v146 < 0 )
              {
                v148 = 0;
LABEL_384:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v148, v146);
              }
              v147 = *(const void **)(v97 - 96);
              if ( v146 )
              {
                __n = *(_QWORD *)(v97 - 96);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, v147);
                v148 = 1;
                v149 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v146, 1);
                if ( !v149 )
                  goto LABEL_384;
                v150 = v149;
                a1 = v383;
                v147 = (const void *)__n;
              }
              else
              {
                v150 = 1;
              }
              memcpy((void *)v150, v147, v146);
              LOBYTE(v421) = 3;
              v422 = v146;
              v423 = v150;
              v424 = v146;
              v171 = (char **)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v384, &v375);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v172 = (char *)v388;
                v173 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v174 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v174;
                *(_QWORD *)((char *)v388 + v173 + 24) = v424;
                *(_QWORD *)&v172[v173 + 16] = v423;
                v175 = v421;
                v176 = (signed __int64 *)v422;
                *(_QWORD *)&v172[v173 + 8] = v422;
                *(_QWORD *)&v172[v173] = v175;
                if ( (_BYTE)v417 != 6 )
                {
                  v171 = &v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v171 = &v417;
                v176 = &v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v171, v176);
              v127 = 6;
              v177 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
              if ( !v177 )
                goto LABEL_407;
              *(_WORD *)(v177 + 4) = 29557;
              *(_DWORD *)v177 = 1952543859;
              v375 = 6;
              v376 = (_DWORD *)v177;
              v377 = 6;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
              v178 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
              if ( !v178 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
              qmemcpy(v178, "in_progress", 11);
              LOBYTE(v421) = 3;
              v422 = 11;
              v423 = (__int64)v178;
              v424 = 11;
              v179 = (char **)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v384, &v375);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v180 = (char *)v388;
                v181 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v182 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v182;
                *(_QWORD *)((char *)v388 + v181 + 24) = v424;
                *(_QWORD *)&v180[v181 + 16] = v423;
                v183 = v421;
                v184 = (signed __int64 *)v422;
                *(_QWORD *)&v180[v181 + 8] = v422;
                *(_QWORD *)&v180[v181] = v183;
                if ( (_BYTE)v417 != 6 )
                {
                  v179 = &v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v179 = &v417;
                v184 = &v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v179, v184);
              v127 = 7;
              v185 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
              if ( !v185 )
                goto LABEL_407;
              *(_DWORD *)((char *)v185 + 3) = 1684627308;
              *v185 = 1819042147;
              v375 = 7;
              v376 = v185;
              v377 = 7;
              v186 = *(_QWORD *)(v97 - 64);
              if ( v186 < 0 )
              {
                v188 = 0;
LABEL_390:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v188, v186);
              }
              v187 = *(const void **)(v97 - 72);
              if ( v186 )
              {
                __n = *(_QWORD *)(v97 - 72);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, v187);
                v188 = 1;
                v189 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v186, 1);
                if ( !v189 )
                  goto LABEL_390;
                v190 = v189;
                a1 = v383;
                v187 = (const void *)__n;
              }
              else
              {
                v190 = 1;
              }
              memcpy((void *)v190, v187, v186);
              LOBYTE(v421) = 3;
              v422 = v186;
              v423 = v190;
              v424 = v186;
              v231 = (char **)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v384, &v375);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v232 = (char *)v388;
                v233 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v234 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v234;
                *(_QWORD *)((char *)v388 + v233 + 24) = v424;
                *(_QWORD *)&v232[v233 + 16] = v423;
                v235 = v421;
                v236 = (signed __int64 *)v422;
                *(_QWORD *)&v232[v233 + 8] = v422;
                *(_QWORD *)&v232[v233] = v235;
                if ( (_BYTE)v417 != 6 )
                {
                  v231 = &v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v231 = &v417;
                v236 = &v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v231, v236);
              v127 = 4;
              v237 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v237 )
                goto LABEL_407;
              *v237 = 1701667182;
              v375 = 4;
              v376 = v237;
              v377 = 4;
              v238 = *(_QWORD *)(v97 - 40);
              if ( v238 < 0 )
              {
                v240 = 0;
LABEL_396:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v240, v238);
              }
              v239 = *(const void **)(v97 - 48);
              if ( v238 )
              {
                __n = *(_QWORD *)(v97 - 48);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, v239);
                v240 = 1;
                v241 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v238, 1);
                if ( !v241 )
                  goto LABEL_396;
                v242 = v241;
                a1 = v383;
                v239 = (const void *)__n;
              }
              else
              {
                v242 = 1;
              }
              memcpy((void *)v242, v239, v238);
              LOBYTE(v421) = 3;
              v422 = v238;
              v423 = v242;
              v424 = v238;
              v255 = (char **)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v384, &v375);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v256 = (char *)v388;
                v257 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v258 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v258;
                *(_QWORD *)((char *)v388 + v257 + 24) = v424;
                *(_QWORD *)&v256[v257 + 16] = v423;
                v259 = v421;
                v260 = (signed __int64 *)v422;
                *(_QWORD *)&v256[v257 + 8] = v422;
                *(_QWORD *)&v256[v257] = v259;
                if ( (_BYTE)v417 != 6 )
                {
                  v255 = &v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v255 = &v417;
                v260 = &v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v255, v260);
              v127 = 5;
              v261 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
              if ( !v261 )
LABEL_407:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v127);
              *(_BYTE *)(v261 + 4) = 116;
              *(_DWORD *)v261 = 1970302569;
              v375 = 5;
              v376 = (_DWORD *)v261;
              v377 = 5;
              LOBYTE(v421) = 3;
              v422 = 0;
              v423 = 1;
              v424 = 0;
              v262 = (__int64)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v384, &v375);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v263 = (char *)v388;
                v264 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v265 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v265;
                *(_QWORD *)((char *)v388 + v264 + 24) = v424;
                *(_QWORD *)&v263[v264 + 16] = v423;
                v266 = v421;
                v267 = v422;
                *(_QWORD *)&v263[v264 + 8] = v422;
                *(_QWORD *)&v263[v264] = v266;
                if ( (_BYTE)v417 != 6 )
                {
                  v262 = (__int64)&v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v262 = (__int64)&v417;
                v267 = (__int64)&v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              v366 = v386;
              v365 = (__int64)v385;
              v364 = (_DWORD *)v384;
              LOBYTE(v363) = 5;
            }
            else
            {
              v368 = nullptr;
              v370 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(_RDI, k);
              v136 = 4;
              v137 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v137 )
                goto LABEL_406;
              *v137 = 1701869940;
              v384 = 4;
              v385 = v137;
              v386 = 4;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v138 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
              if ( !v138 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
              qmemcpy(v138, "function_call", 13);
              LOBYTE(v421) = 3;
              v422 = 13;
              v423 = (__int64)v138;
              v424 = 13;
              v139 = (char **)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v368, &v384);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v140 = (char *)v388;
                v141 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v142 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v142;
                *(_QWORD *)((char *)v388 + v141 + 24) = v424;
                *(_QWORD *)&v140[v141 + 16] = v423;
                v143 = v421;
                v144 = (signed __int64 *)v422;
                *(_QWORD *)&v140[v141 + 8] = v422;
                *(_QWORD *)&v140[v141] = v143;
                if ( (_BYTE)v417 != 6 )
                {
                  v139 = &v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v139 = &v417;
                v144 = &v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v139, v144);
              v136 = 2;
              v151 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              if ( !v151 )
                goto LABEL_406;
              *v151 = 25705;
              v384 = 2;
              v385 = v151;
              v386 = 2;
              v152 = *(_QWORD *)(v97 - 88);
              if ( v152 < 0 )
              {
                v154 = 0;
LABEL_382:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v154, v152);
              }
              v371 = v97 - 56;
              v153 = *(const void **)(v97 - 96);
              if ( v152 )
              {
                __n = *(_QWORD *)(v97 - 96);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, v153);
                v154 = 1;
                v155 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v152, 1);
                if ( !v155 )
                  goto LABEL_382;
                v156 = v155;
                a1 = v383;
                v153 = (const void *)__n;
              }
              else
              {
                v156 = 1;
              }
              memcpy((void *)v156, v153, v152);
              LOBYTE(v421) = 3;
              v422 = v152;
              v423 = v156;
              v424 = v152;
              v191 = (char **)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v368, &v384);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v192 = (char *)v388;
                v193 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v194 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v194;
                *(_QWORD *)((char *)v388 + v193 + 24) = v424;
                *(_QWORD *)&v192[v193 + 16] = v423;
                v195 = v421;
                v196 = (signed __int64 *)v422;
                *(_QWORD *)&v192[v193 + 8] = v422;
                *(_QWORD *)&v192[v193] = v195;
                if ( (_BYTE)v417 != 6 )
                {
                  v191 = &v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v191 = &v417;
                v196 = &v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v191, v196);
              v136 = 6;
              v197 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
              if ( !v197 )
                goto LABEL_406;
              *(_WORD *)(v197 + 4) = 29557;
              *(_DWORD *)v197 = 1952543859;
              v384 = 6;
              v385 = (_DWORD *)v197;
              v386 = 6;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
              v198 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
              if ( !v198 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
              qmemcpy(v198, "in_progress", 11);
              LOBYTE(v421) = 3;
              v422 = 11;
              v423 = (__int64)v198;
              v424 = 11;
              v199 = (char **)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v368, &v384);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v200 = (char *)v388;
                v201 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v202 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v202;
                *(_QWORD *)((char *)v388 + v201 + 24) = v424;
                *(_QWORD *)&v200[v201 + 16] = v423;
                v203 = v421;
                v204 = (signed __int64 *)v422;
                *(_QWORD *)&v200[v201 + 8] = v422;
                *(_QWORD *)&v200[v201] = v203;
                if ( (_BYTE)v417 != 6 )
                {
                  v199 = &v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v199 = &v417;
                v204 = &v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v199, v204);
              v136 = 7;
              v205 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
              if ( !v205 )
                goto LABEL_406;
              *(_DWORD *)((char *)v205 + 3) = 1684627308;
              *v205 = 1819042147;
              v384 = 7;
              v385 = v205;
              v386 = 7;
              v206 = *(_QWORD *)(v97 - 64);
              if ( v206 < 0 )
              {
                v208 = 0;
LABEL_388:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v208, v206);
              }
              v207 = *(const void **)(v97 - 72);
              if ( v206 )
              {
                __n = *(_QWORD *)(v97 - 72);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, v207);
                v208 = 1;
                v209 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v206, 1);
                if ( !v209 )
                  goto LABEL_388;
                v210 = v209;
                a1 = v383;
                v207 = (const void *)__n;
              }
              else
              {
                v210 = 1;
              }
              memcpy((void *)v210, v207, v206);
              LOBYTE(v421) = 3;
              v422 = v206;
              v423 = v210;
              v424 = v206;
              v243 = (char **)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v368, &v384);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v244 = (char *)v388;
                v245 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v246 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v246;
                *(_QWORD *)((char *)v388 + v245 + 24) = v424;
                *(_QWORD *)&v244[v245 + 16] = v423;
                v247 = v421;
                v248 = (signed __int64 *)v422;
                *(_QWORD *)&v244[v245 + 8] = v422;
                *(_QWORD *)&v244[v245] = v247;
                if ( (_BYTE)v417 != 6 )
                {
                  v243 = &v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v243 = &v417;
                v248 = &v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v243, v248);
              v136 = 4;
              v249 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v249 )
                goto LABEL_406;
              *v249 = 1701667182;
              v384 = 4;
              v385 = v249;
              v386 = 4;
              v250 = *(_QWORD *)(v97 - 40);
              if ( v250 < 0 )
              {
                v252 = 0;
LABEL_394:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v252, v250);
              }
              v251 = *(const void **)(v97 - 48);
              if ( v250 )
              {
                __n = *(_QWORD *)(v97 - 48);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, v251);
                v252 = 1;
                v253 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v250, 1);
                if ( !v253 )
                  goto LABEL_394;
                v254 = v253;
                a1 = v383;
                v251 = (const void *)__n;
              }
              else
              {
                v254 = 1;
              }
              memcpy((void *)v254, v251, v250);
              LOBYTE(v421) = 3;
              v422 = v250;
              v423 = v254;
              v424 = v250;
              v268 = (char **)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v368, &v384);
              v269 = v382;
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v270 = (char *)v388;
                v271 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v272 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v272;
                *(_QWORD *)((char *)v388 + v271 + 24) = v424;
                *(_QWORD *)&v270[v271 + 16] = v423;
                v273 = v421;
                v274 = (signed __int64 *)v422;
                *(_QWORD *)&v270[v271 + 8] = v422;
                *(_QWORD *)&v270[v271] = v273;
                if ( (_BYTE)v417 != 6 )
                {
                  v268 = &v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v268 = &v417;
                v274 = &v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v268, v274);
              v136 = 9;
              v275 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
              if ( !v275 )
LABEL_406:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v136);
              *(_QWORD *)v275 = 0x746E656D75677261LL;
              *(_BYTE *)(v275 + 8) = 115;
              v384 = 9;
              v385 = (_DWORD *)v275;
              v386 = 9;
              LOBYTE(v421) = 3;
              v422 = 0;
              v423 = 1;
              v424 = 0;
              v262 = (__int64)&v387;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v368, &v384);
              if ( v387 == (void *)0x8000000000000000LL )
              {
                v276 = (char *)v388;
                v277 = 32LL * (_QWORD)v390;
                v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                v278 = *((char **)v388 + 4 * (_QWORD)v390);
                v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                v417 = v278;
                *(_QWORD *)((char *)v388 + v277 + 24) = v424;
                *(_QWORD *)&v276[v277 + 16] = v423;
                v279 = v421;
                v267 = v422;
                *(_QWORD *)&v276[v277 + 8] = v422;
                *(_QWORD *)&v276[v277] = v279;
                if ( (_BYTE)v417 != 6 )
                {
                  v262 = (__int64)&v417;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                }
              }
              else
              {
                v403 = v393;
                v402 = v392;
                v401 = v391;
                v400 = v390;
                v399 = v389;
                v398 = (__int64 (__fastcall **)())v388;
                v397 = (signed __int64)v387;
                v415 = v424;
                v414 = v423;
                v413 = v422;
                v412 = (__int64 *)v421;
                v262 = (__int64)&v417;
                v267 = (__int64)&v397;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v417,
                  &v397,
                  &v412);
              }
              v378 = v370;
              v377 = v369;
              v376 = v368;
              LOBYTE(v375) = 5;
              if ( v269[41] )
              {
                v280 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v345, v371);
                v281 = v269[38];
                v262 = v269[39];
                si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v280 >> 57), (__m128i)0LL);
                v267 = v281 - 48;
                v373 = 0;
                __n = v281;
                *(__m128i *)__s1 = si128;
                while ( 1 )
                {
                  v283 = v262 & v280;
                  v284 = _mm_loadu_si128((const __m128i *)(v281 + v283));
                  _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v284, si128));
                  if ( (_DWORD)_RAX )
                    break;
LABEL_327:
                  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v284, (__m128i)-1LL)) )
                    goto LABEL_337;
                  v280 = v283 + v373 + 16;
                  v373 += 16LL;
                  v281 = __n;
                  si128 = _mm_load_si128((const __m128i *)__s1);
                }
                v286 = *(_QWORD *)(v97 - 40);
                v355.i64[0] = v262;
                v347 = v284;
                while ( 1 )
                {
                  __src = (void *)_RAX;
                  __asm { tzcnt   eax, eax }
                  v287 = -48LL * (v262 & (v283 + _RAX));
                  if ( v286 == *(_QWORD *)(v267 - 48 * (v262 & (v283 + _RAX)) + 16) )
                  {
                    v371 = v267;
                    v288 = *(const void **)(v97 - 48);
                    v262 = (__int64)v288;
                    v289 = v286;
                    v290 = memcmp(v288, *(const void **)(v267 + v287 + 8), v286);
                    v286 = v289;
                    v267 = v371;
                    if ( !v290 )
                      break;
                  }
                  _RAX = (unsigned int)((_DWORD)__src - 1);
                  LOWORD(_RAX) = (unsigned __int16)__src & ((_WORD)__src - 1);
                  v262 = v355.i64[0];
                  v284 = _mm_load_si128(&v347);
                  if ( !(_WORD)_RAX )
                    goto LABEL_327;
                }
                v291 = *(_QWORD *)(__n + v287 - 8);
                v292 = v291 < v289;
                v293 = (char *)(v291 - v289);
                if ( !v292 )
                {
                  v294 = *(const void **)(__n + v287 - 16);
                  v267 = (__int64)&v293[(_QWORD)v294];
                  v262 = (__int64)v288;
                  if ( !memcmp(v288, &v293[(_QWORD)v294], v286) )
                  {
                    if ( (__int64)v293 < 0 )
                    {
                      v295 = 0;
LABEL_398:
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v295, __dst);
                    }
                    if ( v293 )
                    {
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v288, v267);
                      v295 = 1;
                      __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v293, 1);
                      if ( !__dst )
                      {
                        __dst = v293;
                        goto LABEL_398;
                      }
                    }
                    else
                    {
                      __dst = (void *)1;
                    }
                    v296 = __dst;
                    memcpy(__dst, v294, (size_t)v293);
                    v398 = (__int64 (__fastcall **)())v293;
                    v399 = (size_t)v296;
                    v400 = (__int64 (__fastcall *)())v293;
                    LOBYTE(v397) = 3;
                    v267 = 9;
                    v262 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                             "namespaceresponse.custom_tool_call_input.deltaresponse.custom_tool_call_input.doneresponse."
                             "output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done",
                             9u);
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v262);
                    *(_QWORD *)(v262 + 24) = v400;
                    *(_QWORD *)(v262 + 16) = v399;
                    v297 = v397;
                    *(_QWORD *)(v262 + 8) = v398;
                    *(_QWORD *)v262 = v297;
                  }
                }
LABEL_337:
                a1 = v383;
              }
              v366 = v378;
              v365 = v377;
              v364 = v376;
              v363 = v375;
            }
            v368 = nullptr;
            v370 = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v262, v267);
            v298 = 4;
            v299 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v299 )
              goto LABEL_414;
            *v299 = 1701869940;
            v384 = 4;
            v385 = v299;
            v386 = 4;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
            v300 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
            if ( !v300 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26);
            qmemcpy(v300, "response.output_item.added", 26);
            LOBYTE(v421) = 3;
            v422 = 26;
            v423 = (__int64)v300;
            v424 = 26;
            v301 = (char **)&v387;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v368, &v384);
            if ( v387 == (void *)0x8000000000000000LL )
            {
              v302 = (char *)v388;
              v303 = 32LL * (_QWORD)v390;
              v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
              v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
              v304 = *((char **)v388 + 4 * (_QWORD)v390);
              v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
              v417 = v304;
              *(_QWORD *)((char *)v388 + v303 + 24) = v424;
              *(_QWORD *)&v302[v303 + 16] = v423;
              v305 = v421;
              v306 = (signed __int64 *)v422;
              *(_QWORD *)&v302[v303 + 8] = v422;
              *(_QWORD *)&v302[v303] = v305;
              if ( (_BYTE)v417 != 6 )
              {
                v301 = &v417;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
              }
            }
            else
            {
              v403 = v393;
              v402 = v392;
              v401 = v391;
              v400 = v390;
              v399 = v389;
              v398 = (__int64 (__fastcall **)())v388;
              v397 = (signed __int64)v387;
              v415 = v424;
              v414 = v423;
              v413 = v422;
              v412 = (__int64 *)v421;
              v301 = &v417;
              v306 = &v397;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v417,
                &v397,
                &v412);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v301, v306);
            v298 = 12;
            v307 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
            if ( !v307 )
              goto LABEL_414;
            qmemcpy(v307, "output_index", 12);
            v384 = 12;
            v385 = v307;
            v386 = 12;
            v308 = *(unsigned int *)(v97 - 8);
            LOBYTE(v421) = 2;
            v422 = 0;
            v423 = v308;
            v309 = (char **)&v387;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v368, &v384);
            if ( v387 == (void *)0x8000000000000000LL )
            {
              v310 = (char *)v388;
              v311 = 32LL * (_QWORD)v390;
              v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
              v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
              v312 = *((char **)v388 + 4 * (_QWORD)v390);
              v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
              v417 = v312;
              *(_QWORD *)((char *)v388 + v311 + 24) = v424;
              *(_QWORD *)&v310[v311 + 16] = v423;
              v313 = v421;
              v314 = (signed __int64 *)v422;
              *(_QWORD *)&v310[v311 + 8] = v422;
              *(_QWORD *)&v310[v311] = v313;
              if ( (_BYTE)v417 != 6 )
              {
                v309 = &v417;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
              }
            }
            else
            {
              v403 = v393;
              v402 = v392;
              v401 = v391;
              v400 = v390;
              v399 = v389;
              v398 = (__int64 (__fastcall **)())v388;
              v397 = (signed __int64)v387;
              v415 = v424;
              v414 = v423;
              v413 = v422;
              v412 = (__int64 *)v421;
              v309 = &v417;
              v314 = &v397;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v417,
                &v397,
                &v412);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v309, v314);
            v298 = 4;
            v315 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v315 )
LABEL_414:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v298);
            *v315 = 1835365481;
            v384 = 4;
            v385 = v315;
            v386 = 4;
            serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
              &v397,
              &v363);
            if ( (_BYTE)v397 == 6 )
            {
              v387 = v398;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v387, &off_101974C58, &off_101974388);
            }
            v424 = (__int64)v400;
            v423 = v399;
            v422 = (__int64)v398;
            v421 = v397;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v387, &v368, &v384);
            if ( v387 == (void *)0x8000000000000000LL )
            {
              v316 = (char *)v388;
              v317 = 32LL * (_QWORD)v390;
              v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
              v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
              v318 = *((char **)v388 + 4 * (_QWORD)v390);
              v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
              v417 = v318;
              *(_QWORD *)((char *)v388 + v317 + 24) = v424;
              *(_QWORD *)&v316[v317 + 16] = v423;
              v319 = v421;
              *(_QWORD *)&v316[v317 + 8] = v422;
              *(_QWORD *)&v316[v317] = v319;
              if ( (_BYTE)v417 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
            }
            else
            {
              v403 = v393;
              v402 = v392;
              v401 = v391;
              v400 = v390;
              v399 = v389;
              v398 = (__int64 (__fastcall **)())v388;
              v397 = (signed __int64)v387;
              v415 = v424;
              v414 = v423;
              v413 = v422;
              v412 = (__int64 *)v421;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v417,
                &v397,
                &v412);
            }
            v378 = v370;
            v377 = v369;
            v376 = v368;
            LOBYTE(v375) = 5;
            v417 = "response.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done";
            v418 = 26;
            v412 = &v375;
            v397 = (signed __int64)&v417;
            v398 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            v399 = (size_t)&v412;
            v400 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v387, &unk_1017C9F28, &v397);
            v321 = v388;
            v322 = v389;
            v323 = v381;
            if ( v389 > v379 - v381 )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v379,
                v381,
                v389,
                1,
                1,
                v320);
              v323 = v381;
            }
            memcpy((void *)(v323 + v380), v321, v322);
            v381 = v322 + v323;
            if ( v387 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v321, v387, 1);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v375);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v363);
            v98 = v372;
            v113 = *(_BYTE *)(v97 - 4);
            v4 = v382;
            if ( v374 )
            {
LABEL_186:
              if ( v113 )
              {
                v114 = *(_QWORD *)(v97 - 16);
                v115 = v374;
                if ( v374 > *(_QWORD *)(v97 - 32) - v114 )
                {
                  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                    v97 - 32,
                    v114,
                    v374,
                    1,
                    1,
                    v96);
                  v114 = *(_QWORD *)(v97 - 16);
                  v4 = v382;
                  v115 = v374;
                }
                v116 = (void *)(*(_QWORD *)(v97 - 24) + v114);
                v117 = v361;
                memcpy(v116, v361, v115);
                *(_QWORD *)(v97 - 16) += v374;
                if ( !*(_BYTE *)(v97 - 3) )
                {
                  v384 = 0;
                  v386 = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v116, v117);
                  v118 = 4;
                  v119 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v119 )
                    goto LABEL_408;
                  *v119 = 1701869940;
                  v363 = 4;
                  v364 = v119;
                  v365 = 4;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                  v120 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1);
                  if ( !v120 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 38);
                  qmemcpy(v120, "response.function_call_arguments.delta", 38);
                  LOBYTE(v421) = 3;
                  v422 = 38;
                  v423 = (__int64)v120;
                  v424 = 38;
                  v121 = (char **)&v387;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v387,
                    &v384,
                    &v363);
                  if ( v387 == (void *)0x8000000000000000LL )
                  {
                    v122 = (char *)v388;
                    v123 = 32LL * (_QWORD)v390;
                    v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                    v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                    v124 = *((char **)v388 + 4 * (_QWORD)v390);
                    v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                    v417 = v124;
                    *(_QWORD *)((char *)v388 + v123 + 24) = v424;
                    *(_QWORD *)&v122[v123 + 16] = v423;
                    v125 = v421;
                    v126 = (signed __int64 *)v422;
                    *(_QWORD *)&v122[v123 + 8] = v422;
                    *(_QWORD *)&v122[v123] = v125;
                    if ( (_BYTE)v417 != 6 )
                    {
                      v121 = &v417;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                    }
                  }
                  else
                  {
                    v403 = v393;
                    v402 = v392;
                    v401 = v391;
                    v400 = v390;
                    v399 = v389;
                    v398 = (__int64 (__fastcall **)())v388;
                    v397 = (signed __int64)v387;
                    v415 = v424;
                    v414 = v423;
                    v413 = v422;
                    v412 = (__int64 *)v421;
                    v121 = &v417;
                    v126 = &v397;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v417,
                      &v397,
                      &v412);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v121, v126);
                  v118 = 12;
                  v157 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
                  if ( !v157 )
                    goto LABEL_408;
                  qmemcpy(v157, "output_index", 12);
                  v363 = 12;
                  v364 = v157;
                  v365 = 12;
                  v158 = *(unsigned int *)(v97 - 8);
                  LOBYTE(v421) = 2;
                  v422 = 0;
                  v423 = v158;
                  v159 = (char **)&v387;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v387,
                    &v384,
                    &v363);
                  if ( v387 == (void *)0x8000000000000000LL )
                  {
                    v160 = (char *)v388;
                    v161 = 32LL * (_QWORD)v390;
                    v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                    v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                    v162 = *((char **)v388 + 4 * (_QWORD)v390);
                    v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                    v417 = v162;
                    *(_QWORD *)((char *)v388 + v161 + 24) = v424;
                    *(_QWORD *)&v160[v161 + 16] = v423;
                    v163 = v421;
                    v164 = (signed __int64 *)v422;
                    *(_QWORD *)&v160[v161 + 8] = v422;
                    *(_QWORD *)&v160[v161] = v163;
                    if ( (_BYTE)v417 != 6 )
                    {
                      v159 = &v417;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                    }
                  }
                  else
                  {
                    v403 = v393;
                    v402 = v392;
                    v401 = v391;
                    v400 = v390;
                    v399 = v389;
                    v398 = (__int64 (__fastcall **)())v388;
                    v397 = (signed __int64)v387;
                    v415 = v424;
                    v414 = v423;
                    v413 = v422;
                    v412 = (__int64 *)v421;
                    v159 = &v417;
                    v164 = &v397;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v417,
                      &v397,
                      &v412);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v159, v164);
                  v118 = 7;
                  v165 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                  if ( !v165 )
                    goto LABEL_408;
                  *(_DWORD *)((char *)v165 + 3) = 1684627309;
                  *v165 = 1835365481;
                  v363 = 7;
                  v364 = v165;
                  v365 = 7;
                  v166 = *(_QWORD *)(v97 - 88);
                  if ( v166 < 0 )
                  {
                    v168 = 0;
LABEL_386:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v168, v166);
                  }
                  v167 = *(const void **)(v97 - 96);
                  if ( v166 )
                  {
                    __n = *(_QWORD *)(v97 - 96);
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, v167);
                    v168 = 1;
                    v169 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v166, 1);
                    if ( !v169 )
                      goto LABEL_386;
                    v170 = v169;
                    v167 = (const void *)__n;
                  }
                  else
                  {
                    v170 = 1;
                  }
                  memcpy((void *)v170, v167, v166);
                  LOBYTE(v421) = 3;
                  v422 = v166;
                  v423 = v170;
                  v424 = v166;
                  v211 = (char **)&v387;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v387,
                    &v384,
                    &v363);
                  if ( v387 == (void *)0x8000000000000000LL )
                  {
                    v212 = (char *)v388;
                    v213 = 32LL * (_QWORD)v390;
                    v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                    v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                    v214 = *((char **)v388 + 4 * (_QWORD)v390);
                    v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                    v417 = v214;
                    *(_QWORD *)((char *)v388 + v213 + 24) = v424;
                    *(_QWORD *)&v212[v213 + 16] = v423;
                    v215 = v421;
                    v216 = (signed __int64 *)v422;
                    *(_QWORD *)&v212[v213 + 8] = v422;
                    *(_QWORD *)&v212[v213] = v215;
                    if ( (_BYTE)v417 != 6 )
                    {
                      v211 = &v417;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                    }
                  }
                  else
                  {
                    v403 = v393;
                    v402 = v392;
                    v401 = v391;
                    v400 = v390;
                    v399 = v389;
                    v398 = (__int64 (__fastcall **)())v388;
                    v397 = (signed __int64)v387;
                    v415 = v424;
                    v414 = v423;
                    v413 = v422;
                    v412 = (__int64 *)v421;
                    v211 = &v417;
                    v216 = &v397;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v417,
                      &v397,
                      &v412);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v211, v216);
                  v118 = 5;
                  v217 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                  if ( !v217 )
LABEL_408:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v118);
                  *(_BYTE *)(v217 + 4) = 97;
                  *(_DWORD *)v217 = 1953260900;
                  v363 = 5;
                  v364 = (_DWORD *)v217;
                  v365 = 5;
                  v218 = v374;
                  if ( (v374 & 0x8000000000000000LL) != 0LL )
                  {
                    v219 = 0;
LABEL_392:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v219, v218);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
                  v219 = 1;
                  v220 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v374, 1);
                  v218 = v374;
                  if ( !v220 )
                    goto LABEL_392;
                  v221 = (__int64)v220;
                  v222 = v374;
                  memcpy(v220, v361, v374);
                  LOBYTE(v421) = 3;
                  v422 = v222;
                  v423 = v221;
                  v424 = v222;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v387,
                    &v384,
                    &v363);
                  a1 = v383;
                  if ( v387 == (void *)0x8000000000000000LL )
                  {
                    v223 = (char *)v388;
                    v224 = 32LL * (_QWORD)v390;
                    v420 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 3);
                    v419 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 2);
                    v225 = *((char **)v388 + 4 * (_QWORD)v390);
                    v418 = *((_QWORD *)v388 + 4 * (_QWORD)v390 + 1);
                    v417 = v225;
                    *(_QWORD *)((char *)v388 + v224 + 24) = v424;
                    *(_QWORD *)&v223[v224 + 16] = v423;
                    v226 = v421;
                    *(_QWORD *)&v223[v224 + 8] = v422;
                    *(_QWORD *)&v223[v224] = v226;
                    if ( (_BYTE)v417 != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v417);
                  }
                  else
                  {
                    v403 = v393;
                    v402 = v392;
                    v401 = v391;
                    v400 = v390;
                    v399 = v389;
                    v398 = (__int64 (__fastcall **)())v388;
                    v397 = (signed __int64)v387;
                    v415 = v424;
                    v414 = v423;
                    v413 = v422;
                    v412 = (__int64 *)v421;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v417,
                      &v397,
                      &v412);
                  }
                  v378 = v386;
                  v377 = (__int64)v385;
                  v376 = (_DWORD *)v384;
                  LOBYTE(v375) = 5;
                  v417 = (char *)&unk_10167CD38;
                  v418 = 38;
                  v412 = &v375;
                  v397 = (signed __int64)&v417;
                  v398 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                  v399 = (size_t)&v412;
                  v400 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v387, &unk_1017C9F28, &v397);
                  v228 = v388;
                  v229 = v389;
                  v230 = v381;
                  if ( v389 > v379 - v381 )
                  {
                    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                      &v379,
                      v381,
                      v389,
                      1,
                      1,
                      v227);
                    v230 = v381;
                    a1 = v383;
                  }
                  memcpy((void *)(v230 + v380), v228, v229);
                  v381 = v229 + v230;
                  if ( v387 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v387, 1);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v375);
                  v98 = v372;
                  v4 = v382;
                }
              }
            }
          }
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v348);
          v48 = v98 + 32;
        }
        while ( v48 != v344 );
      }
    }
  }
  v324 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           "finish_reasonprompt_tokenscompletion_tokensid",
           13,
           v341);
  if ( v324 )
  {
    if ( *(_BYTE *)v324 == 3 )
    {
      v325 = *(_QWORD *)(v324 + 24);
      if ( v325 )
      {
        v326 = *(const void **)(v324 + 16);
        codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::flush_inline_think_at_boundary::ha5d2a72723807855(
          v4,
          &v379);
        codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_reasoning_block::ha9f203dfc14ebf29(
          v4,
          &v379);
        codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_text_block::h24b24176cdd772a0(
          v4,
          &v379);
        codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_tool_blocks::h7cf5a4d679327df2(
          v4,
          &v379);
        if ( v325 < 0 )
        {
          v327 = 0;
          goto LABEL_367;
        }
        v382 = v4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, &v379);
        v327 = 1;
        v328 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v325, 1);
        if ( !v328 )
LABEL_367:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v327, v325);
        v329 = v328;
        memcpy(v328, v326, v325);
        v330 = v382;
        v331 = v382[29];
        if ( v331 != 0x8000000000000000LL && v331 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v382[30], v331, 1);
        v330[29] = v325;
        v330[30] = v329;
        v330[31] = v325;
      }
    }
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v356);
LABEL_375:
  a1[2] = v381;
  result = v379;
  a1[1] = v380;
  *a1 = result;
  return result;
}
