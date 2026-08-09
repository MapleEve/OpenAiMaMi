// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream17close_tool_blocks @ 0x100a92600 | 基线 same-set
// [FULL hexrays]

double __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_tool_blocks::h7cf5a4d679327df2(
        _QWORD *a1,
        _QWORD *a2)
{
  const __m128i *v3; // rcx
  __int64 v4; // rdx
  __m128i si128; // xmm0
  __int64 v6; // r9
  _QWORD *v7; // rdx
  __int64 (__fastcall *v8)(); // r8
  _QWORD *v9; // r9
  char ****v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  char ****v13; // rax
  char ****v14; // rcx
  char ****v15; // rsi
  char ***v16; // rax
  char **v17; // rsi
  __int64 *v18; // rdi
  __int64 v19; // r15
  __int64 (__fastcall *v20)(); // rax
  void *v21; // rax
  char **v22; // rdi
  char *v23; // rax
  __int64 v24; // rcx
  char *v25; // rdx
  __int64 *v26; // rdx
  char ***v27; // rsi
  void *v28; // rsi
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(); // rax
  void *v31; // rax
  char **v32; // rdi
  char *v33; // rax
  __int64 v34; // rcx
  char *v35; // rdx
  __int64 *v36; // rdx
  char ***v37; // rsi
  void *v38; // rax
  char **v39; // rdi
  char *v40; // rax
  __int64 v41; // rcx
  char *v42; // rdx
  __int64 *v43; // rdx
  char ***v44; // rsi
  _DWORD *v45; // rax
  void *v46; // rbx
  const void *v47; // rsi
  _QWORD *v48; // r14
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // r12
  void *v52; // rax
  char **v53; // rdi
  char *v54; // rax
  __int64 v55; // rcx
  char *v56; // rdx
  __int64 *v57; // rdx
  char ***v58; // rsi
  _DWORD *v59; // rax
  void *v60; // r15
  void *v61; // rsi
  _QWORD *v62; // r14
  __int64 v63; // r13
  __int64 v64; // rax
  __int64 v65; // r12
  char **v66; // rdi
  char *v67; // rax
  __int64 v68; // rcx
  char *v69; // rdx
  __int64 *v70; // rdx
  char ***v71; // rsi
  __int64 v72; // rax
  size_t v73; // r12
  __int64 v74; // r14
  __int64 v75; // rax
  __int64 v76; // rbx
  char **v77; // rdi
  char *v78; // rax
  __int64 v79; // rcx
  char *v80; // rdx
  __int64 *v81; // rdx
  char ***v82; // rsi
  __int64 v83; // rax
  void *v84; // r14
  size_t v85; // r12
  void *v86; // rax
  __int64 v87; // r15
  char *v88; // rax
  __int64 v89; // rcx
  char *v90; // rdx
  __int64 *v91; // rdx
  __int64 v92; // r9
  void *v93; // r15
  size_t v94; // rbx
  __int64 v95; // r14
  __int64 v96; // r15
  __int64 (__fastcall *v97)(); // rax
  void *v98; // rax
  char **v99; // rdi
  char *v100; // rax
  __int64 v101; // rcx
  char *v102; // rdx
  __int64 *v103; // rdx
  char ***v104; // rsi
  void *v105; // rax
  char **v106; // rdi
  char *v107; // rax
  __int64 v108; // rcx
  char *v109; // rdx
  __int64 *v110; // rdx
  char ***v111; // rsi
  _DWORD *v112; // rax
  void *v113; // r15
  void *v114; // rsi
  _QWORD *v115; // r14
  __int64 v116; // r13
  __int64 v117; // rax
  __int64 v118; // r12
  char **v119; // rdi
  char *v120; // rax
  __int64 v121; // rcx
  char *v122; // rdx
  __int64 *v123; // rdx
  char ***v124; // rsi
  __int64 v125; // rax
  size_t v126; // r15
  __int64 v127; // rax
  __int64 v128; // r14
  char *v129; // rax
  __int64 v130; // rcx
  char *v131; // rdx
  __int64 *v132; // rdx
  __int64 v133; // r9
  void *v134; // r15
  size_t v135; // rbx
  __int64 v136; // r14
  size_t v137; // r14
  char **v138; // rsi
  __int64 v139; // r15
  _DWORD *v140; // rax
  void *v141; // rax
  char **v142; // rdi
  char *v143; // rax
  __int64 v144; // rcx
  char *v145; // rdx
  __int64 *v146; // rdx
  char ***v147; // rsi
  _WORD *v148; // rax
  void *v149; // r15
  const void *v150; // rsi
  _QWORD *v151; // r14
  __int64 v152; // r13
  __int64 v153; // rax
  __int64 v154; // r12
  char *v155; // rax
  __int64 v156; // rcx
  char *v157; // rdx
  __int64 *v158; // rdx
  __int64 v159; // r9
  void *v160; // r15
  size_t v161; // rbx
  __int64 v162; // rsi
  char **v163; // rsi
  __int64 v164; // r15
  _DWORD *v165; // rax
  void *v166; // rax
  char **v167; // rdi
  char *v168; // rax
  __int64 v169; // rcx
  char *v170; // rdx
  __int64 *v171; // rdx
  char ***v172; // rsi
  _WORD *v173; // rax
  void *v174; // r15
  const void *v175; // rsi
  _QWORD *v176; // r14
  __int64 v177; // r13
  __int64 v178; // rax
  __int64 v179; // r12
  char **v180; // rdi
  char *v181; // rax
  __int64 v182; // rcx
  char *v183; // rdx
  __int64 *v184; // rdx
  char ***v185; // rsi
  __int64 v186; // rax
  __int64 v187; // rax
  char **v188; // rdi
  char *v189; // rax
  __int64 v190; // rcx
  char *v191; // rdx
  __int64 *v192; // rdx
  char ***v193; // rsi
  _DWORD *v194; // rax
  void *v195; // r15
  const void *v196; // rsi
  _QWORD *v197; // r14
  __int64 v198; // r13
  __int64 v199; // rax
  __int64 v200; // r12
  char **v201; // rdi
  char *v202; // rax
  __int64 v203; // rcx
  char *v204; // rdx
  __int64 *v205; // rdx
  char ***v206; // rsi
  __int64 v207; // rax
  __int64 v208; // rax
  char **v209; // rdi
  char *v210; // rax
  __int64 v211; // rcx
  char *v212; // rdx
  __int64 *v213; // rdx
  char ***v214; // rsi
  _DWORD *v215; // rax
  void *v216; // r15
  const void *v217; // rsi
  _QWORD *v218; // r14
  __int64 v219; // r13
  __int64 v220; // rax
  __int64 v221; // r12
  char **v222; // rdi
  char *v223; // rax
  __int64 v224; // rcx
  char *v225; // rdx
  __int64 *v226; // rdx
  char ***v227; // rsi
  _DWORD *v228; // rax
  void *v229; // r15
  const void *v230; // rsi
  _QWORD *v231; // r14
  __int64 v232; // r13
  __int64 v233; // rax
  __int64 v234; // r12
  char **v235; // rdi
  char *v236; // rax
  __int64 v237; // rcx
  char *v238; // rdx
  __int64 *v239; // rdx
  char ***v240; // rsi
  _DWORD *v241; // rax
  void *v242; // r15
  const void *v243; // rsi
  _QWORD *v244; // r14
  __int64 v245; // r13
  __int64 v246; // rax
  __int64 v247; // r12
  char **v248; // rdi
  char *v249; // rax
  __int64 v250; // rcx
  char *v251; // rdx
  __int64 *v252; // rdx
  char ***v253; // rsi
  __int64 v254; // rax
  size_t v255; // r15
  __int64 v256; // rax
  __int64 v257; // r14
  char **v258; // rdi
  size_t v259; // r14
  char *v260; // rax
  __int64 v261; // rcx
  char *v262; // rdx
  __int64 *v263; // rdx
  char ***v264; // rsi
  __int64 v265; // r12
  _DWORD *v266; // rax
  void *v267; // rax
  char **v268; // rdi
  char *v269; // rax
  __int64 v270; // rcx
  char *v271; // rdx
  __int64 *v272; // rdx
  char ***v273; // rsi
  void *v274; // rax
  char **v275; // rdi
  char *v276; // rax
  __int64 v277; // rcx
  char *v278; // rdx
  __int64 *v279; // rdx
  char ***v280; // rsi
  _DWORD *v281; // rax
  char *v282; // rax
  __int64 v283; // rcx
  char *v284; // rdx
  __int64 *v285; // rdx
  __int64 v286; // r9
  void *v287; // r15
  size_t v288; // rbx
  __int64 v289; // rdi
  __int64 v290; // rbx
  __int64 v291; // rax
  __int64 v292; // rcx
  __int64 (__fastcall *v293)(); // rsi
  __int64 v294; // rdi
  __int64 v295; // rsi
  size_t v296; // rdi
  char **v297; // rdi
  size_t v298; // r12
  char *v299; // rax
  __int64 v300; // rcx
  char *v301; // rdx
  __int64 *v302; // rdx
  char ***v303; // rsi
  __int64 v304; // rax
  __int64 v305; // rax
  __int64 v306; // r14
  char **v307; // rdi
  char *v308; // rax
  __int64 v309; // rcx
  char *v310; // rdx
  __int64 *v311; // rdx
  __int64 v312; // rsi
  unsigned __int64 v313; // rax
  size_t v315; // r9
  __int64 v316; // r8
  __m128i v317; // xmm1
  size_t v318; // r12
  void *v319; // r14
  __int64 i; // r10
  unsigned __int64 v321; // rax
  __m128i v322; // xmm2
  __int64 v324; // r15
  int v325; // eax
  bool v326; // zf
  unsigned __int64 v327; // rbx
  bool v328; // cf
  signed __int64 v329; // rbx
  char *v330; // r15
  int v331; // eax
  __int64 v332; // rax
  __int64 v333; // r14
  char **v334; // rbx
  char **v335; // rax
  __int64 v336; // r12
  _DWORD *v337; // rax
  void *v338; // rax
  char **v339; // rdi
  char *v340; // rax
  __int64 v341; // rcx
  char *v342; // rdx
  __int64 *v343; // rdx
  char ***v344; // rsi
  void *v345; // rax
  char **v346; // rdi
  char *v347; // rax
  __int64 v348; // rcx
  char *v349; // rdx
  __int64 *v350; // rdx
  char ***v351; // rsi
  _DWORD *v352; // rax
  char *v353; // rax
  __int64 v354; // rcx
  char *v355; // rdx
  __int64 *v356; // rdx
  __int64 v357; // r9
  void *v358; // r15
  size_t v359; // rbx
  char *v360; // rsi
  __int64 v361; // rdi
  __int64 v362; // rbx
  _QWORD *v363; // rdi
  __int64 v364; // rax
  __int64 v365; // rcx
  char ****v366; // r14
  __int64 v367; // rdi
  __m128i v369; // [rsp+0h] [rbp-300h] BYREF
  __m128i v370; // [rsp+10h] [rbp-2F0h] BYREF
  _QWORD v371[3]; // [rsp+28h] [rbp-2D8h] BYREF
  __int16 v372; // [rsp+40h] [rbp-2C0h]
  __int64 v373; // [rsp+48h] [rbp-2B8h]
  const __m128i *v374; // [rsp+50h] [rbp-2B0h]
  __int64 v375; // [rsp+58h] [rbp-2A8h]
  __int64 v376; // [rsp+60h] [rbp-2A0h]
  __int64 v377; // [rsp+68h] [rbp-298h]
  _QWORD *v378; // [rsp+70h] [rbp-290h]
  __int64 v379; // [rsp+78h] [rbp-288h] BYREF
  char ****v380; // [rsp+80h] [rbp-280h]
  unsigned __int64 v381; // [rsp+88h] [rbp-278h]
  _QWORD *v382; // [rsp+90h] [rbp-270h]
  unsigned __int64 v383; // [rsp+98h] [rbp-268h]
  __int64 v384; // [rsp+A0h] [rbp-260h]
  __int64 v385; // [rsp+A8h] [rbp-258h]
  _QWORD *v386; // [rsp+B0h] [rbp-250h]
  signed __int64 v387; // [rsp+B8h] [rbp-248h]
  char ****v388; // [rsp+C0h] [rbp-240h]
  __int64 v389; // [rsp+C8h] [rbp-238h]
  __int64 v390; // [rsp+D0h] [rbp-230h]
  char ***v391; // [rsp+D8h] [rbp-228h] BYREF
  void *__src[12]; // [rsp+E0h] [rbp-220h] BYREF
  __int64 v393; // [rsp+140h] [rbp-1C0h] BYREF
  void *v394; // [rsp+148h] [rbp-1B8h]
  size_t v395; // [rsp+150h] [rbp-1B0h]
  char ****v396; // [rsp+158h] [rbp-1A8h]
  char ****v397; // [rsp+160h] [rbp-1A0h]
  _DWORD *v398; // [rsp+168h] [rbp-198h] BYREF
  __int64 v399; // [rsp+170h] [rbp-190h]
  __int64 v400; // [rsp+178h] [rbp-188h]
  char ***v401; // [rsp+180h] [rbp-180h]
  size_t v402; // [rsp+188h] [rbp-178h]
  _QWORD *v403; // [rsp+190h] [rbp-170h]
  size_t v404; // [rsp+198h] [rbp-168h]
  void *v405; // [rsp+1A0h] [rbp-160h]
  void *v406; // [rsp+1A8h] [rbp-158h]
  __int64 v407; // [rsp+1B0h] [rbp-150h] BYREF
  __int64 (__fastcall *v408)(); // [rsp+1B8h] [rbp-148h]
  __int64 v409; // [rsp+1C0h] [rbp-140h]
  __int64 (__fastcall *v410)(); // [rsp+1C8h] [rbp-138h]
  __int64 v411; // [rsp+1D0h] [rbp-130h] BYREF
  _DWORD *v412; // [rsp+1D8h] [rbp-128h]
  __int64 v413; // [rsp+1E0h] [rbp-120h]
  __int64 v414; // [rsp+1E8h] [rbp-118h]
  __int64 v415; // [rsp+1F0h] [rbp-110h] BYREF
  _DWORD *v416; // [rsp+1F8h] [rbp-108h]
  __int64 v417; // [rsp+200h] [rbp-100h]
  __int64 *v418; // [rsp+208h] [rbp-F8h] BYREF
  __int64 v419; // [rsp+210h] [rbp-F0h]
  __int64 v420; // [rsp+218h] [rbp-E8h]
  __int64 v421; // [rsp+220h] [rbp-E0h]
  char **v422; // [rsp+228h] [rbp-D8h] BYREF
  __int64 (__fastcall *v423)(); // [rsp+230h] [rbp-D0h]
  char *v424; // [rsp+238h] [rbp-C8h]
  __int64 (__fastcall *v425)(); // [rsp+240h] [rbp-C0h]
  __int64 v426; // [rsp+248h] [rbp-B8h]
  __int64 v427; // [rsp+250h] [rbp-B0h]
  __int64 v428; // [rsp+258h] [rbp-A8h]
  char **v429; // [rsp+260h] [rbp-A0h] BYREF
  void *v430; // [rsp+268h] [rbp-98h]
  size_t v431; // [rsp+270h] [rbp-90h]
  __int64 (__fastcall *v432)(); // [rsp+278h] [rbp-88h]
  __int64 v433; // [rsp+280h] [rbp-80h]
  __int64 v434; // [rsp+288h] [rbp-78h]
  __int64 v435; // [rsp+290h] [rbp-70h]
  char *v436; // [rsp+298h] [rbp-68h] BYREF
  __int64 v437; // [rsp+2A0h] [rbp-60h]
  __int64 v438; // [rsp+2A8h] [rbp-58h]
  __int64 v439; // [rsp+2B0h] [rbp-50h]
  __int64 *v440; // [rsp+2B8h] [rbp-48h]
  __int64 v441; // [rsp+2C0h] [rbp-40h]
  __int64 v442; // [rsp+2C8h] [rbp-38h]
  __int64 v443; // [rsp+2D0h] [rbp-30h]

  v3 = (const __m128i *)a1[32];
  v4 = a1[33];
  si128 = _mm_load_si128(v3);
  v377 = a1[35];
  v6 = v377;
  v376 = a1[34];
  v375 = v4;
  v374 = v3;
  a1[32] = anon_0df76e0cec988e6dc281ac0519b88803_36;
  a1[33] = 0;
  a1[34] = 0;
  v403 = a1;
  a1[35] = 0;
  v371[0] = v3;
  v371[1] = v3 + 1;
  v371[2] = (char *)v3->i64 + v4 + 1;
  v372 = ~(unsigned __int16)_mm_movemask_epi8(si128);
  v373 = v6;
  v378 = a1 + 32;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hb27b157e09d168e7(
    &v379,
    v371);
  v10 = v380;
  v11 = v381;
  v391 = &v422;
  if ( v381 >= 2 )
  {
    v366 = v380;
    if ( v381 >= 0x15 )
      core::slice::sort::stable::driftsort_main::hf600815653cbb0c7(v380, v381, &v391);
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::hd1b0bd37b3c67df5(v380, v381, 1, &v391);
    v12 = v379;
    v13 = &v366[13 * v11];
    v10 = v366;
  }
  else
  {
    v12 = v379;
    v13 = &v380[13 * v381];
    v14 = v380;
    if ( !v381 )
      goto LABEL_310;
  }
  v396 = v13;
  v389 = v12;
  v7 = v403 + 42;
  v382 = v403 + 42;
  v386 = v403 + 8;
  v397 = v10;
  v15 = v10;
  while ( 1 )
  {
    v388 = v15 + 13;
    v16 = *v15;
    if ( *v15 == (char ***)0x8000000000000000LL )
      break;
    v401 = *v15;
    v391 = v16;
    qmemcpy(__src, v15 + 1, sizeof(__src));
    if ( BYTE6(__src[11]) )
    {
      v17 = (char **)__src[9];
      v18 = &v393;
      codexmate_lib::core::relay::translator::unwrap_custom_tool_input::hb49644dd7117d44c(
        &v393,
        __src[9],
        (__int64)__src[10]);
      v404 = v395;
      if ( v395 )
      {
        v415 = 0;
        v417 = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v393, v17);
        v19 = 4;
        v20 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v20 )
          goto LABEL_328;
        *(_DWORD *)v20 = 1701869940;
        v407 = 4;
        v408 = v20;
        v409 = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
        if ( !v21 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37);
        qmemcpy(v21, "response.custom_tool_call_input.delta", 37);
        LOBYTE(v440) = 3;
        v441 = 37;
        v442 = (__int64)v21;
        v443 = 37;
        v22 = (char **)&v429;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
        if ( v429 == (char **)0x8000000000000000LL )
        {
          v23 = (char *)v430;
          v24 = 32LL * (_QWORD)v432;
          v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
          v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
          v25 = *((char **)v430 + 4 * (_QWORD)v432);
          v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
          v436 = v25;
          *(_QWORD *)((char *)v430 + v24 + 24) = v443;
          *(_QWORD *)&v23[v24 + 16] = v442;
          v26 = v440;
          v27 = (char ***)v441;
          *(_QWORD *)&v23[v24 + 8] = v441;
          *(_QWORD *)&v23[v24] = v26;
          if ( (_BYTE)v436 != 6 )
          {
            v22 = &v436;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
          }
        }
        else
        {
          v428 = v435;
          v427 = v434;
          v426 = v433;
          v425 = v432;
          v424 = (char *)v431;
          v423 = (__int64 (__fastcall *)())v430;
          v422 = v429;
          v421 = v443;
          v420 = v442;
          v419 = v441;
          v418 = v440;
          v22 = &v436;
          v27 = &v422;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v436,
            &v422,
            &v418);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v27);
        v19 = 12;
        v52 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
        if ( !v52 )
          goto LABEL_328;
        qmemcpy(v52, "output_index", 12);
        v407 = 12;
        v408 = (__int64 (__fastcall *)())v52;
        v409 = 12;
        LOBYTE(v440) = 2;
        v441 = 0;
        v442 = LODWORD(__src[11]);
        v53 = (char **)&v429;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
        if ( v429 == (char **)0x8000000000000000LL )
        {
          v54 = (char *)v430;
          v55 = 32LL * (_QWORD)v432;
          v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
          v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
          v56 = *((char **)v430 + 4 * (_QWORD)v432);
          v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
          v436 = v56;
          *(_QWORD *)((char *)v430 + v55 + 24) = v443;
          *(_QWORD *)&v54[v55 + 16] = v442;
          v57 = v440;
          v58 = (char ***)v441;
          *(_QWORD *)&v54[v55 + 8] = v441;
          *(_QWORD *)&v54[v55] = v57;
          if ( (_BYTE)v436 != 6 )
          {
            v53 = &v436;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
          }
        }
        else
        {
          v428 = v435;
          v427 = v434;
          v426 = v433;
          v425 = v432;
          v424 = (char *)v431;
          v423 = (__int64 (__fastcall *)())v430;
          v422 = v429;
          v421 = v443;
          v420 = v442;
          v419 = v441;
          v418 = v440;
          v53 = &v436;
          v58 = &v422;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v436,
            &v422,
            &v418);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v58);
        v19 = 7;
        v59 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v59 )
          goto LABEL_328;
        *(_DWORD *)((char *)v59 + 3) = 1684627309;
        *v59 = 1835365481;
        v407 = 7;
        v408 = (__int64 (__fastcall *)())v59;
        v409 = 7;
        v60 = __src[1];
        if ( (__int64)__src[1] < 0 )
        {
          v63 = 0;
LABEL_300:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v63, v60);
        }
        v61 = __src[0];
        if ( __src[1] )
        {
          v405 = __src[0];
          v62 = a2;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, __src[0]);
          v63 = 1;
          v64 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v60, 1);
          if ( !v64 )
            goto LABEL_300;
          v65 = v64;
          a2 = v62;
          v61 = v405;
        }
        else
        {
          v65 = 1;
        }
        memcpy((void *)v65, v61, (size_t)v60);
        LOBYTE(v440) = 3;
        v441 = (__int64)v60;
        v442 = v65;
        v443 = (__int64)v60;
        v77 = (char **)&v429;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
        if ( v429 == (char **)0x8000000000000000LL )
        {
          v78 = (char *)v430;
          v79 = 32LL * (_QWORD)v432;
          v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
          v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
          v80 = *((char **)v430 + 4 * (_QWORD)v432);
          v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
          v436 = v80;
          *(_QWORD *)((char *)v430 + v79 + 24) = v443;
          *(_QWORD *)&v78[v79 + 16] = v442;
          v81 = v440;
          v82 = (char ***)v441;
          *(_QWORD *)&v78[v79 + 8] = v441;
          *(_QWORD *)&v78[v79] = v81;
          if ( (_BYTE)v436 != 6 )
          {
            v77 = &v436;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
          }
        }
        else
        {
          v428 = v435;
          v427 = v434;
          v426 = v433;
          v425 = v432;
          v424 = (char *)v431;
          v423 = (__int64 (__fastcall *)())v430;
          v422 = v429;
          v421 = v443;
          v420 = v442;
          v419 = v441;
          v418 = v440;
          v77 = &v436;
          v82 = &v422;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v436,
            &v422,
            &v418);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v77, v82);
        v19 = 5;
        v83 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
        if ( !v83 )
LABEL_328:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19);
        *(_BYTE *)(v83 + 4) = 97;
        *(_DWORD *)v83 = 1953260900;
        v407 = 5;
        v408 = (__int64 (__fastcall *)())v83;
        v409 = 5;
        v84 = v394;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
        v85 = v404;
        v86 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v404, 1);
        if ( !v86 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v85);
        v87 = (__int64)v86;
        memcpy(v86, v84, v85);
        LOBYTE(v440) = 3;
        v441 = v85;
        v442 = v87;
        v443 = v85;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
        if ( v429 == (char **)0x8000000000000000LL )
        {
          v88 = (char *)v430;
          v89 = 32LL * (_QWORD)v432;
          v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
          v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
          v90 = *((char **)v430 + 4 * (_QWORD)v432);
          v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
          v436 = v90;
          *(_QWORD *)((char *)v430 + v89 + 24) = v443;
          *(_QWORD *)&v88[v89 + 16] = v442;
          v91 = v440;
          *(_QWORD *)&v88[v89 + 8] = v441;
          *(_QWORD *)&v88[v89] = v91;
          if ( (_BYTE)v436 != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
        else
        {
          v428 = v435;
          v427 = v434;
          v426 = v433;
          v425 = v432;
          v424 = (char *)v431;
          v423 = (__int64 (__fastcall *)())v430;
          v422 = v429;
          v421 = v443;
          v420 = v442;
          v419 = v441;
          v418 = v440;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v436,
            &v422,
            &v418);
        }
        v414 = v417;
        v413 = (__int64)v416;
        v412 = (_DWORD *)v415;
        LOBYTE(v411) = 5;
        v436 = "response.custom_tool_call_input.deltaresponse.custom_tool_call_input.doneresponse.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done";
        v437 = 37;
        v418 = &v411;
        v422 = &v436;
        v423 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        v424 = (char *)&v418;
        v425 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v429, &unk_1017C9F28, &v422);
        v93 = v430;
        v94 = v431;
        v95 = a2[2];
        if ( v431 > *a2 - v95 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            a2,
            a2[2],
            v431,
            1,
            1,
            v92);
          v95 = a2[2];
        }
        memcpy((void *)(v95 + a2[1]), v93, v94);
        a2[2] = v94 + v95;
        v17 = v429;
        if ( v429 )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v429, 1);
        v18 = &v411;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v411);
      }
      v415 = 0;
      v417 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v17);
      v96 = 4;
      v97 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v97 )
        goto LABEL_327;
      *(_DWORD *)v97 = 1701869940;
      v407 = 4;
      v408 = v97;
      v409 = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v98 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
      if ( !v98 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36);
      qmemcpy(v98, "response.custom_tool_call_input.done", 36);
      LOBYTE(v440) = 3;
      v441 = 36;
      v442 = (__int64)v98;
      v443 = 36;
      v99 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v100 = (char *)v430;
        v101 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v102 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v102;
        *(_QWORD *)((char *)v430 + v101 + 24) = v443;
        *(_QWORD *)&v100[v101 + 16] = v442;
        v103 = v440;
        v104 = (char ***)v441;
        *(_QWORD *)&v100[v101 + 8] = v441;
        *(_QWORD *)&v100[v101] = v103;
        if ( (_BYTE)v436 != 6 )
        {
          v99 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v99 = &v436;
        v104 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v99, v104);
      v96 = 12;
      v105 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
      if ( !v105 )
        goto LABEL_327;
      qmemcpy(v105, "output_index", 12);
      v407 = 12;
      v408 = (__int64 (__fastcall *)())v105;
      v409 = 12;
      LOBYTE(v440) = 2;
      v441 = 0;
      v442 = LODWORD(__src[11]);
      v106 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v107 = (char *)v430;
        v108 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v109 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v109;
        *(_QWORD *)((char *)v430 + v108 + 24) = v443;
        *(_QWORD *)&v107[v108 + 16] = v442;
        v110 = v440;
        v111 = (char ***)v441;
        *(_QWORD *)&v107[v108 + 8] = v441;
        *(_QWORD *)&v107[v108] = v110;
        if ( (_BYTE)v436 != 6 )
        {
          v106 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v106 = &v436;
        v111 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v106, v111);
      v96 = 7;
      v112 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v112 )
        goto LABEL_327;
      *(_DWORD *)((char *)v112 + 3) = 1684627309;
      *v112 = 1835365481;
      v407 = 7;
      v408 = (__int64 (__fastcall *)())v112;
      v409 = 7;
      v113 = __src[1];
      if ( (__int64)__src[1] < 0 )
      {
        v116 = 0;
LABEL_298:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v116, v113);
      }
      v114 = __src[0];
      if ( __src[1] )
      {
        v405 = __src[0];
        v115 = a2;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, __src[0]);
        v116 = 1;
        v117 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v113, 1);
        if ( !v117 )
          goto LABEL_298;
        v118 = v117;
        a2 = v115;
        v114 = v405;
      }
      else
      {
        v118 = 1;
      }
      memcpy((void *)v118, v114, (size_t)v113);
      LOBYTE(v440) = 3;
      v441 = (__int64)v113;
      v442 = v118;
      v443 = (__int64)v113;
      v119 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v120 = (char *)v430;
        v121 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v122 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v122;
        *(_QWORD *)((char *)v430 + v121 + 24) = v443;
        *(_QWORD *)&v120[v121 + 16] = v442;
        v123 = v440;
        v124 = (char ***)v441;
        *(_QWORD *)&v120[v121 + 8] = v441;
        *(_QWORD *)&v120[v121] = v123;
        if ( (_BYTE)v436 != 6 )
        {
          v119 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v119 = &v436;
        v124 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v119, v124);
      v96 = 5;
      v125 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v125 )
LABEL_327:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v96);
      *(_BYTE *)(v125 + 4) = 116;
      *(_DWORD *)v125 = 1970302569;
      v407 = 5;
      v408 = (__int64 (__fastcall *)())v125;
      v409 = 5;
      v405 = v394;
      v126 = v404;
      if ( v404 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
        v127 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v126, 1);
        if ( !v127 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v126);
        v128 = v127;
      }
      else
      {
        v128 = 1;
      }
      memcpy((void *)v128, v405, v126);
      LOBYTE(v440) = 3;
      v441 = v126;
      v442 = v128;
      v443 = v126;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v129 = (char *)v430;
        v130 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v131 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v131;
        *(_QWORD *)((char *)v430 + v130 + 24) = v443;
        *(_QWORD *)&v129[v130 + 16] = v442;
        v132 = v440;
        *(_QWORD *)&v129[v130 + 8] = v441;
        *(_QWORD *)&v129[v130] = v132;
        if ( (_BYTE)v436 != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      v414 = v417;
      v413 = (__int64)v416;
      v412 = (_DWORD *)v415;
      LOBYTE(v411) = 5;
      v436 = "response.custom_tool_call_input.doneresponse.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done";
      v437 = 36;
      v418 = &v411;
      v422 = &v436;
      v423 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      v424 = (char *)&v418;
      v425 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v429, &unk_1017C9F28, &v422);
      v134 = v430;
      v135 = v431;
      v136 = a2[2];
      if ( v431 > *a2 - v136 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          a2,
          a2[2],
          v431,
          1,
          1,
          v133);
        v136 = a2[2];
      }
      v390 = a2[1];
      memcpy((void *)(v390 + v136), v134, v135);
      v137 = v135 + v136;
      a2[2] = v137;
      v138 = v429;
      if ( v429 )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v429, 1);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v411);
      v415 = 0;
      v417 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v411, v138);
      v139 = 4;
      v140 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v140 )
        goto LABEL_329;
      *v140 = 1701869940;
      v411 = 4;
      v412 = v140;
      v413 = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v141 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
      if ( !v141 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
      qmemcpy(v141, "custom_tool_call", 16);
      LOBYTE(v440) = 3;
      v441 = 16;
      v442 = (__int64)v141;
      v443 = 16;
      v142 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v143 = (char *)v430;
        v144 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v145 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v145;
        *(_QWORD *)((char *)v430 + v144 + 24) = v443;
        *(_QWORD *)&v143[v144 + 16] = v442;
        v146 = v440;
        v147 = (char ***)v441;
        *(_QWORD *)&v143[v144 + 8] = v441;
        *(_QWORD *)&v143[v144] = v146;
        if ( (_BYTE)v436 != 6 )
        {
          v142 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v142 = &v436;
        v147 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v142, v147);
      v139 = 2;
      v148 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
      if ( !v148 )
        goto LABEL_329;
      *v148 = 25705;
      v411 = 2;
      v412 = v148;
      v413 = 2;
      v149 = __src[1];
      if ( (__int64)__src[1] < 0 )
      {
        v152 = 0;
LABEL_304:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v152, v149);
      }
      v150 = __src[0];
      v402 = v137;
      if ( __src[1] )
      {
        v406 = __src[0];
        v151 = a2;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, __src[0]);
        v152 = 1;
        v153 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v149, 1);
        if ( !v153 )
          goto LABEL_304;
        v154 = v153;
        a2 = v151;
        v150 = v406;
      }
      else
      {
        v154 = 1;
      }
      memcpy((void *)v154, v150, (size_t)v149);
      LOBYTE(v440) = 3;
      v441 = (__int64)v149;
      v442 = v154;
      v443 = (__int64)v149;
      v180 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v181 = (char *)v430;
        v182 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v183 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v183;
        *(_QWORD *)((char *)v430 + v182 + 24) = v443;
        *(_QWORD *)&v181[v182 + 16] = v442;
        v184 = v440;
        v185 = (char ***)v441;
        *(_QWORD *)&v181[v182 + 8] = v441;
        *(_QWORD *)&v181[v182] = v184;
        if ( (_BYTE)v436 != 6 )
        {
          v180 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v180 = &v436;
        v185 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v180, v185);
      v139 = 6;
      v186 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v186 )
        goto LABEL_329;
      *(_WORD *)(v186 + 4) = 29557;
      *(_DWORD *)v186 = 1952543859;
      v411 = 6;
      v412 = (_DWORD *)v186;
      v413 = 6;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
      v187 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
      if ( !v187 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
      *(_QWORD *)v187 = 0x6574656C706D6F63LL;
      *(_BYTE *)(v187 + 8) = 100;
      LOBYTE(v440) = 3;
      v441 = 9;
      v442 = v187;
      v443 = 9;
      v188 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v189 = (char *)v430;
        v190 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v191 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v191;
        *(_QWORD *)((char *)v430 + v190 + 24) = v443;
        *(_QWORD *)&v189[v190 + 16] = v442;
        v192 = v440;
        v193 = (char ***)v441;
        *(_QWORD *)&v189[v190 + 8] = v441;
        *(_QWORD *)&v189[v190] = v192;
        if ( (_BYTE)v436 != 6 )
        {
          v188 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v188 = &v436;
        v193 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v188, v193);
      v139 = 7;
      v194 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v194 )
        goto LABEL_329;
      *(_DWORD *)((char *)v194 + 3) = 1684627308;
      *v194 = 1819042147;
      v411 = 7;
      v412 = v194;
      v413 = 7;
      v195 = __src[4];
      if ( (__int64)__src[4] < 0 )
      {
        v198 = 0;
LABEL_308:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v198, v195);
      }
      v196 = __src[3];
      if ( __src[4] )
      {
        v406 = __src[3];
        v197 = a2;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, __src[3]);
        v198 = 1;
        v199 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v195, 1);
        if ( !v199 )
          goto LABEL_308;
        v200 = v199;
        a2 = v197;
        v196 = v406;
      }
      else
      {
        v200 = 1;
      }
      memcpy((void *)v200, v196, (size_t)v195);
      LOBYTE(v440) = 3;
      v441 = (__int64)v195;
      v442 = v200;
      v443 = (__int64)v195;
      v222 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v223 = (char *)v430;
        v224 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v225 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v225;
        *(_QWORD *)((char *)v430 + v224 + 24) = v443;
        *(_QWORD *)&v223[v224 + 16] = v442;
        v226 = v440;
        v227 = (char ***)v441;
        *(_QWORD *)&v223[v224 + 8] = v441;
        *(_QWORD *)&v223[v224] = v226;
        if ( (_BYTE)v436 != 6 )
        {
          v222 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v222 = &v436;
        v227 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v222, v227);
      v139 = 4;
      v228 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v228 )
        goto LABEL_329;
      *v228 = 1701667182;
      v411 = 4;
      v412 = v228;
      v413 = 4;
      v229 = __src[7];
      if ( (__int64)__src[7] < 0 )
      {
        v232 = 0;
LABEL_316:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v232, v229);
      }
      v230 = __src[6];
      if ( __src[7] )
      {
        v406 = __src[6];
        v231 = a2;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, __src[6]);
        v232 = 1;
        v233 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v229, 1);
        if ( !v233 )
          goto LABEL_316;
        v234 = v233;
        a2 = v231;
        v230 = v406;
      }
      else
      {
        v234 = 1;
      }
      memcpy((void *)v234, v230, (size_t)v229);
      LOBYTE(v440) = 3;
      v441 = (__int64)v229;
      v442 = v234;
      v443 = (__int64)v229;
      v248 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v249 = (char *)v430;
        v250 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v251 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v251;
        *(_QWORD *)((char *)v430 + v250 + 24) = v443;
        *(_QWORD *)&v249[v250 + 16] = v442;
        v252 = v440;
        v253 = (char ***)v441;
        *(_QWORD *)&v249[v250 + 8] = v441;
        *(_QWORD *)&v249[v250] = v252;
        if ( (_BYTE)v436 != 6 )
        {
          v248 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v248 = &v436;
        v253 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v248, v253);
      v139 = 5;
      v254 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v254 )
LABEL_329:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v139);
      *(_BYTE *)(v254 + 4) = 116;
      *(_DWORD *)v254 = 1970302569;
      v411 = 5;
      v412 = (_DWORD *)v254;
      v413 = 5;
      v255 = v404;
      if ( v404 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
        v256 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v255, 1);
        if ( !v256 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v255);
        v257 = v256;
      }
      else
      {
        v257 = 1;
      }
      memcpy((void *)v257, v405, v255);
      LOBYTE(v440) = 3;
      v441 = v255;
      v442 = v257;
      v443 = v255;
      v258 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
      v259 = v402;
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v260 = (char *)v430;
        v261 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v262 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v262;
        *(_QWORD *)((char *)v430 + v261 + 24) = v443;
        *(_QWORD *)&v260[v261 + 16] = v442;
        v263 = v440;
        v264 = (char ***)v441;
        *(_QWORD *)&v260[v261 + 8] = v441;
        *(_QWORD *)&v260[v261] = v263;
        if ( (_BYTE)v436 != 6 )
        {
          v258 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v258 = &v436;
        v264 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      v410 = (__int64 (__fastcall *)())v417;
      v409 = (__int64)v416;
      v408 = (__int64 (__fastcall *)())v415;
      LOBYTE(v407) = 5;
      v398 = nullptr;
      v400 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v258, v264);
      v265 = 4;
      v266 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v266 )
        goto LABEL_340;
      *v266 = 1701869940;
      v415 = 4;
      v416 = v266;
      v417 = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v267 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
      if ( !v267 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
      qmemcpy(v267, "response.output_item.done", 25);
      LOBYTE(v440) = 3;
      v441 = 25;
      v442 = (__int64)v267;
      v443 = 25;
      v268 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v398, &v415);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v269 = (char *)v430;
        v270 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v271 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v271;
        *(_QWORD *)((char *)v430 + v270 + 24) = v443;
        *(_QWORD *)&v269[v270 + 16] = v442;
        v272 = v440;
        v273 = (char ***)v441;
        *(_QWORD *)&v269[v270 + 8] = v441;
        *(_QWORD *)&v269[v270] = v272;
        if ( (_BYTE)v436 != 6 )
        {
          v268 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v268 = &v436;
        v273 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v268, v273);
      v265 = 12;
      v274 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
      if ( !v274 )
        goto LABEL_340;
      qmemcpy(v274, "output_index", 12);
      v415 = 12;
      v416 = v274;
      v417 = 12;
      LOBYTE(v440) = 2;
      v441 = 0;
      v442 = LODWORD(__src[11]);
      v275 = (char **)&v429;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v398, &v415);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v276 = (char *)v430;
        v277 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v278 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v278;
        *(_QWORD *)((char *)v430 + v277 + 24) = v443;
        *(_QWORD *)&v276[v277 + 16] = v442;
        v279 = v440;
        v280 = (char ***)v441;
        *(_QWORD *)&v276[v277 + 8] = v441;
        *(_QWORD *)&v276[v277] = v279;
        if ( (_BYTE)v436 != 6 )
        {
          v275 = &v436;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
        }
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        v275 = &v436;
        v280 = &v422;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v275, v280);
      v265 = 4;
      v281 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v281 )
LABEL_340:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v265);
      *v281 = 1835365481;
      v415 = 4;
      v416 = v281;
      v417 = 4;
      serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
        &v422,
        &v407);
      if ( (_BYTE)v422 == 6 )
      {
        v429 = (char **)v423;
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v429, &off_101974C58, &off_101974250);
      }
      v443 = (__int64)v425;
      v442 = (__int64)v424;
      v441 = (__int64)v423;
      v440 = (__int64 *)v422;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v398, &v415);
      if ( v429 == (char **)0x8000000000000000LL )
      {
        v282 = (char *)v430;
        v283 = 32LL * (_QWORD)v432;
        v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
        v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
        v284 = *((char **)v430 + 4 * (_QWORD)v432);
        v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
        v436 = v284;
        *(_QWORD *)((char *)v430 + v283 + 24) = v443;
        *(_QWORD *)&v282[v283 + 16] = v442;
        v285 = v440;
        *(_QWORD *)&v282[v283 + 8] = v441;
        *(_QWORD *)&v282[v283] = v285;
        if ( (_BYTE)v436 != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
      else
      {
        v428 = v435;
        v427 = v434;
        v426 = v433;
        v425 = v432;
        v424 = (char *)v431;
        v423 = (__int64 (__fastcall *)())v430;
        v422 = v429;
        v421 = v443;
        v420 = v442;
        v419 = v441;
        v418 = v440;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v436,
          &v422,
          &v418);
      }
      v414 = v400;
      v413 = v399;
      v412 = v398;
      LOBYTE(v411) = 5;
      v436 = "response.output_item.doneresponse.function_call_arguments.done";
      v437 = 25;
      v418 = &v411;
      v422 = &v436;
      v423 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      v424 = (char *)&v418;
      v425 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v429, &unk_1017C9F28, &v422);
      v287 = v430;
      v288 = v431;
      if ( v431 > *a2 - v259 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          a2,
          v259,
          v431,
          1,
          1,
          v286);
        v289 = a2[1];
        v259 = a2[2];
      }
      else
      {
        v289 = v390;
      }
      memcpy((void *)(v259 + v289), v287, v288);
      a2[2] = v288 + v259;
      if ( v429 )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v287, v429, 1);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v411);
      v290 = v403[10];
      if ( v290 == v403[8] )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v386);
      v9 = v403;
      v291 = v403[9];
      v292 = 32 * v290;
      v7 = (_QWORD *)v407;
      v293 = v408;
      v294 = v409;
      v8 = v410;
      *(_QWORD *)(v291 + v292 + 24) = v410;
      *(_QWORD *)(v291 + v292 + 16) = v294;
      *(_QWORD *)(v291 + v292 + 8) = v293;
      *(_QWORD *)(v291 + v292) = v7;
      v9[10] = v290 + 1;
      v295 = v393;
      if ( !v393 )
        goto LABEL_283;
      v296 = (size_t)v405;
      goto LABEL_282;
    }
    if ( __src[7] == (void *)11
      && (v28 = __src[6],
          !(anon_10420c9971c21f44d230d15b39fb3fec_397 ^ *(_QWORD *)__src[6]
          | *(__int64 *)((char *)&anon_10420c9971c21f44d230d15b39fb3fec_397 + 3) ^ *(_QWORD *)((char *)__src[6] + 3))) )
    {
      codexmate_lib::core::relay::translator::unwrap_custom_tool_arguments::hbc090364675fdd0e(
        &v393,
        (__int64)__src[6],
        11,
        __src[9],
        (signed __int64)__src[10]);
    }
    else
    {
      v28 = __src[9];
      codexmate_lib::core::relay::translator::canonicalize_tool_arguments_str::h6c8f7253e4a406b3(
        &v393,
        __src[9],
        (signed __int64)__src[10]);
    }
    v415 = 0;
    v417 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v393, v28);
    v29 = 4;
    v30 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v30 )
      goto LABEL_326;
    *(_DWORD *)v30 = 1701869940;
    v407 = 4;
    v408 = v30;
    v409 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
    if ( !v31 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37);
    qmemcpy(v31, "response.function_call_arguments.done", 37);
    LOBYTE(v440) = 3;
    v441 = 37;
    v442 = (__int64)v31;
    v443 = 37;
    v32 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v33 = (char *)v430;
      v34 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v35 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v35;
      *(_QWORD *)((char *)v430 + v34 + 24) = v443;
      *(_QWORD *)&v33[v34 + 16] = v442;
      v36 = v440;
      v37 = (char ***)v441;
      *(_QWORD *)&v33[v34 + 8] = v441;
      *(_QWORD *)&v33[v34] = v36;
      if ( (_BYTE)v436 != 6 )
      {
        v32 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v32 = &v436;
      v37 = &v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v37);
    v29 = 12;
    v38 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v38 )
      goto LABEL_326;
    qmemcpy(v38, "output_index", 12);
    v407 = 12;
    v408 = (__int64 (__fastcall *)())v38;
    v409 = 12;
    LOBYTE(v440) = 2;
    v441 = 0;
    v442 = LODWORD(__src[11]);
    v39 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v40 = (char *)v430;
      v41 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v42 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v42;
      *(_QWORD *)((char *)v430 + v41 + 24) = v443;
      *(_QWORD *)&v40[v41 + 16] = v442;
      v43 = v440;
      v44 = (char ***)v441;
      *(_QWORD *)&v40[v41 + 8] = v441;
      *(_QWORD *)&v40[v41] = v43;
      if ( (_BYTE)v436 != 6 )
      {
        v39 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v39 = &v436;
      v44 = &v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39, v44);
    v29 = 7;
    v45 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v45 )
      goto LABEL_326;
    *(_DWORD *)((char *)v45 + 3) = 1684627309;
    *v45 = 1835365481;
    v407 = 7;
    v408 = (__int64 (__fastcall *)())v45;
    v409 = 7;
    v46 = __src[1];
    if ( (__int64)__src[1] < 0 )
    {
      v49 = 0;
LABEL_296:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v49, v46);
    }
    v47 = __src[0];
    if ( __src[1] )
    {
      v404 = (size_t)__src[0];
      v48 = a2;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, __src[0]);
      v49 = 1;
      v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v46, 1);
      if ( !v50 )
        goto LABEL_296;
      v51 = v50;
      a2 = v48;
      v47 = (const void *)v404;
    }
    else
    {
      v51 = 1;
    }
    memcpy((void *)v51, v47, (size_t)v46);
    LOBYTE(v440) = 3;
    v441 = (__int64)v46;
    v442 = v51;
    v443 = (__int64)v46;
    v66 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v67 = (char *)v430;
      v68 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v69 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v69;
      *(_QWORD *)((char *)v430 + v68 + 24) = v443;
      *(_QWORD *)&v67[v68 + 16] = v442;
      v70 = v440;
      v71 = (char ***)v441;
      *(_QWORD *)&v67[v68 + 8] = v441;
      *(_QWORD *)&v67[v68] = v70;
      if ( (_BYTE)v436 != 6 )
      {
        v66 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v66 = &v436;
      v71 = &v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, v71);
    v29 = 9;
    v72 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v72 )
LABEL_326:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v29);
    *(_QWORD *)v72 = 0x746E656D75677261LL;
    *(_BYTE *)(v72 + 8) = 115;
    v407 = 9;
    v408 = (__int64 (__fastcall *)())v72;
    v409 = 9;
    v73 = v395;
    if ( (v395 & 0x8000000000000000LL) != 0LL )
    {
      v74 = 0;
LABEL_302:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v74, v73);
    }
    v404 = (size_t)v394;
    if ( v395 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
      v74 = 1;
      v75 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v73, 1);
      if ( !v75 )
        goto LABEL_302;
      v76 = v75;
    }
    else
    {
      v76 = 1;
    }
    memcpy((void *)v76, (const void *)v404, v73);
    LOBYTE(v440) = 3;
    v441 = v73;
    v442 = v76;
    v443 = v73;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v407);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v155 = (char *)v430;
      v156 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v157 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v157;
      *(_QWORD *)((char *)v430 + v156 + 24) = v443;
      *(_QWORD *)&v155[v156 + 16] = v442;
      v158 = v440;
      *(_QWORD *)&v155[v156 + 8] = v441;
      *(_QWORD *)&v155[v156] = v158;
      if ( (_BYTE)v436 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    v414 = v417;
    v413 = (__int64)v416;
    v412 = (_DWORD *)v415;
    LOBYTE(v411) = 5;
    v436 = "response.function_call_arguments.done";
    v437 = 37;
    v418 = &v411;
    v422 = &v436;
    v423 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    v424 = (char *)&v418;
    v425 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v429, &unk_1017C9F28, &v422);
    v160 = v430;
    v161 = v431;
    v162 = a2[2];
    if ( v431 > *a2 - v162 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        a2,
        v162,
        v431,
        1,
        1,
        v159);
      v162 = a2[2];
    }
    v390 = a2[1];
    memcpy((void *)(v390 + v162), v160, v161);
    v405 = (void *)(v161 + v162);
    a2[2] = v161 + v162;
    v163 = v429;
    if ( v429 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160, v429, 1);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v411);
    v415 = 0;
    v417 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v411, v163);
    v164 = 4;
    v165 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v165 )
      goto LABEL_331;
    *v165 = 1701869940;
    v411 = 4;
    v412 = v165;
    v413 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v166 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( !v166 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
    qmemcpy(v166, "function_call", 13);
    LOBYTE(v440) = 3;
    v441 = 13;
    v442 = (__int64)v166;
    v443 = 13;
    v167 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v168 = (char *)v430;
      v169 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v170 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v170;
      *(_QWORD *)((char *)v430 + v169 + 24) = v443;
      *(_QWORD *)&v168[v169 + 16] = v442;
      v171 = v440;
      v172 = (char ***)v441;
      *(_QWORD *)&v168[v169 + 8] = v441;
      *(_QWORD *)&v168[v169] = v171;
      if ( (_BYTE)v436 != 6 )
      {
        v167 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v167 = &v436;
      v172 = &v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v167, v172);
    v164 = 2;
    v173 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
    if ( !v173 )
      goto LABEL_331;
    *v173 = 25705;
    v411 = 2;
    v412 = v173;
    v413 = 2;
    v174 = __src[1];
    if ( (__int64)__src[1] < 0 )
    {
      v177 = 0;
LABEL_306:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v177, v174);
    }
    v402 = v73;
    v175 = __src[0];
    if ( __src[1] )
    {
      v406 = __src[0];
      v176 = a2;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, __src[0]);
      v177 = 1;
      v178 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v174, 1);
      if ( !v178 )
        goto LABEL_306;
      v179 = v178;
      a2 = v176;
      v175 = v406;
    }
    else
    {
      v179 = 1;
    }
    memcpy((void *)v179, v175, (size_t)v174);
    LOBYTE(v440) = 3;
    v441 = (__int64)v174;
    v442 = v179;
    v443 = (__int64)v174;
    v201 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v202 = (char *)v430;
      v203 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v204 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v204;
      *(_QWORD *)((char *)v430 + v203 + 24) = v443;
      *(_QWORD *)&v202[v203 + 16] = v442;
      v205 = v440;
      v206 = (char ***)v441;
      *(_QWORD *)&v202[v203 + 8] = v441;
      *(_QWORD *)&v202[v203] = v205;
      if ( (_BYTE)v436 != 6 )
      {
        v201 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v201 = &v436;
      v206 = &v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v201, v206);
    v164 = 6;
    v207 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v207 )
      goto LABEL_331;
    *(_WORD *)(v207 + 4) = 29557;
    *(_DWORD *)v207 = 1952543859;
    v411 = 6;
    v412 = (_DWORD *)v207;
    v413 = 6;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
    v208 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v208 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
    *(_QWORD *)v208 = 0x6574656C706D6F63LL;
    *(_BYTE *)(v208 + 8) = 100;
    LOBYTE(v440) = 3;
    v441 = 9;
    v442 = v208;
    v443 = 9;
    v209 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v210 = (char *)v430;
      v211 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v212 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v212;
      *(_QWORD *)((char *)v430 + v211 + 24) = v443;
      *(_QWORD *)&v210[v211 + 16] = v442;
      v213 = v440;
      v214 = (char ***)v441;
      *(_QWORD *)&v210[v211 + 8] = v441;
      *(_QWORD *)&v210[v211] = v213;
      if ( (_BYTE)v436 != 6 )
      {
        v209 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v209 = &v436;
      v214 = &v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v209, v214);
    v164 = 7;
    v215 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v215 )
      goto LABEL_331;
    *(_DWORD *)((char *)v215 + 3) = 1684627308;
    *v215 = 1819042147;
    v411 = 7;
    v412 = v215;
    v413 = 7;
    v216 = __src[4];
    if ( (__int64)__src[4] < 0 )
    {
      v219 = 0;
LABEL_314:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v219, v216);
    }
    v217 = __src[3];
    if ( __src[4] )
    {
      v406 = __src[3];
      v218 = a2;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, __src[3]);
      v219 = 1;
      v220 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v216, 1);
      if ( !v220 )
        goto LABEL_314;
      v221 = v220;
      a2 = v218;
      v217 = v406;
    }
    else
    {
      v221 = 1;
    }
    memcpy((void *)v221, v217, (size_t)v216);
    LOBYTE(v440) = 3;
    v441 = (__int64)v216;
    v442 = v221;
    v443 = (__int64)v216;
    v235 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v236 = (char *)v430;
      v237 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v238 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v238;
      *(_QWORD *)((char *)v430 + v237 + 24) = v443;
      *(_QWORD *)&v236[v237 + 16] = v442;
      v239 = v440;
      v240 = (char ***)v441;
      *(_QWORD *)&v236[v237 + 8] = v441;
      *(_QWORD *)&v236[v237] = v239;
      if ( (_BYTE)v436 != 6 )
      {
        v235 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v235 = &v436;
      v240 = &v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v235, v240);
    v164 = 4;
    v241 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v241 )
      goto LABEL_331;
    *v241 = 1701667182;
    v411 = 4;
    v412 = v241;
    v413 = 4;
    v242 = __src[7];
    if ( (__int64)__src[7] < 0 )
    {
      v245 = 0;
LABEL_318:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v245, v242);
    }
    v243 = __src[6];
    if ( __src[7] )
    {
      v406 = __src[6];
      v244 = a2;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, __src[6]);
      v245 = 1;
      v246 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v242, 1);
      if ( !v246 )
        goto LABEL_318;
      v247 = v246;
      a2 = v244;
      v243 = v406;
    }
    else
    {
      v247 = 1;
    }
    memcpy((void *)v247, v243, (size_t)v242);
    LOBYTE(v440) = 3;
    v441 = (__int64)v242;
    v442 = v247;
    v443 = (__int64)v242;
    v297 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
    v298 = v402;
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v299 = (char *)v430;
      v300 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v301 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v301;
      *(_QWORD *)((char *)v430 + v300 + 24) = v443;
      *(_QWORD *)&v299[v300 + 16] = v442;
      v302 = v440;
      v303 = (char ***)v441;
      *(_QWORD *)&v299[v300 + 8] = v441;
      *(_QWORD *)&v299[v300] = v302;
      if ( (_BYTE)v436 != 6 )
      {
        v297 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v297 = &v436;
      v303 = &v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v297, v303);
    v164 = 9;
    v304 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v304 )
LABEL_331:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v164);
    *(_QWORD *)v304 = 0x746E656D75677261LL;
    *(_BYTE *)(v304 + 8) = 115;
    v411 = 9;
    v412 = (_DWORD *)v304;
    v413 = 9;
    if ( v298 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
      v305 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v298, 1);
      if ( !v305 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v298);
      v306 = v305;
    }
    else
    {
      v306 = 1;
    }
    memcpy((void *)v306, (const void *)v404, v298);
    LOBYTE(v440) = 3;
    v441 = v298;
    v442 = v306;
    v443 = v298;
    v307 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v415, &v411);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v308 = (char *)v430;
      v309 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v310 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v310;
      *(_QWORD *)((char *)v430 + v309 + 24) = v443;
      *(_QWORD *)&v308[v309 + 16] = v442;
      v311 = v440;
      v312 = v441;
      *(_QWORD *)&v308[v309 + 8] = v441;
      *(_QWORD *)&v308[v309] = v311;
      if ( (_BYTE)v436 != 6 )
      {
        v307 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v307 = &v436;
      v312 = (__int64)&v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    v410 = (__int64 (__fastcall *)())v417;
    v409 = (__int64)v416;
    v408 = (__int64 (__fastcall *)())v415;
    LOBYTE(v407) = 5;
    if ( v403[41] )
    {
      v312 = (__int64)&__src[5];
      v313 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v382, &__src[5]);
      v406 = a2;
      _RCX = v313 >> 57;
      v315 = v403[38];
      v316 = v403[39];
      v317 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v313 >> 57), (__m128i)0LL);
      v318 = v315 - 48;
      v307 = (char **)__src[6];
      v319 = __src[7];
      for ( i = 0; ; i += 16 )
      {
        v321 = v316 & v313;
        v322 = _mm_loadu_si128((const __m128i *)(v315 + v321));
        si128 = _mm_cmpeq_epi8(v322, v317);
        _R13D = _mm_movemask_epi8(si128);
        if ( _R13D )
          break;
LABEL_246:
        si128.i64[0] = -1;
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v322, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
          goto LABEL_249;
        v313 = v321 + i + 16;
      }
      v383 = v321;
      v384 = v316;
      v369 = v317;
      v402 = v315;
      v385 = i;
      v370 = v322;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r13d }
        _RCX = -(__int64)(v316 & (v321 + _RCX));
        v324 = 48 * _RCX;
        if ( v319 == *(void **)(v318 + 48 * _RCX + 16) )
        {
          v312 = *(_QWORD *)(v318 + v324 + 8);
          if ( !memcmp(v307, (const void *)v312, (size_t)v319) )
            break;
        }
        v325 = _R13D - 1;
        LOWORD(v325) = _R13D & (_R13D - 1);
        v326 = (_WORD)v325 == 0;
        _R13D = v325;
        v321 = v383;
        v316 = v384;
        v317 = _mm_load_si128(&v369);
        v315 = v402;
        i = v385;
        v322 = _mm_load_si128(&v370);
        if ( v326 )
          goto LABEL_246;
      }
      v327 = *(_QWORD *)(v402 + v324 - 8);
      v328 = v327 < (unsigned __int64)v319;
      v329 = v327 - (_QWORD)v319;
      if ( v328 )
      {
LABEL_249:
        a2 = v406;
      }
      else
      {
        v330 = *(char **)(v402 + v324 - 16);
        v312 = (__int64)&v330[v329];
        v331 = memcmp(v307, &v330[v329], (size_t)v319);
        a2 = v406;
        if ( !v331 )
        {
          if ( v329 < 0 )
          {
            v367 = 0;
            goto LABEL_323;
          }
          if ( v329 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v307, v312);
            v332 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v329, 1);
            if ( !v332 )
            {
              v387 = v329;
              v367 = 1;
LABEL_323:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v367, v387);
            }
            v333 = v332;
          }
          else
          {
            v333 = 1;
          }
          memcpy((void *)v333, v330, v329);
          v423 = (__int64 (__fastcall *)())v329;
          v424 = (char *)v333;
          v425 = (__int64 (__fastcall *)())v329;
          LOBYTE(v422) = 3;
          v312 = 9;
          v334 = (char **)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                            "namespaceresponse.custom_tool_call_input.deltaresponse.custom_tool_call_input.doneresponse.o"
                            "utput_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done",
                            9u);
          v387 = v333;
          v307 = v334;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v334);
          v334[3] = (char *)v425;
          v334[2] = v424;
          v335 = v422;
          v334[1] = (char *)v423;
          *v334 = (char *)v335;
        }
      }
    }
    v398 = nullptr;
    v400 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v307, v312);
    v336 = 4;
    v337 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v337 )
      goto LABEL_342;
    *v337 = 1701869940;
    v415 = 4;
    v416 = v337;
    v417 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v338 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
    if ( !v338 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
    qmemcpy(v338, "response.output_item.done", 25);
    LOBYTE(v440) = 3;
    v441 = 25;
    v442 = (__int64)v338;
    v443 = 25;
    v339 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v398, &v415);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v340 = (char *)v430;
      v341 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v342 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v342;
      *(_QWORD *)((char *)v430 + v341 + 24) = v443;
      *(_QWORD *)&v340[v341 + 16] = v442;
      v343 = v440;
      v344 = (char ***)v441;
      *(_QWORD *)&v340[v341 + 8] = v441;
      *(_QWORD *)&v340[v341] = v343;
      if ( (_BYTE)v436 != 6 )
      {
        v339 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v339 = &v436;
      v344 = &v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v339, v344);
    v336 = 12;
    v345 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v345 )
      goto LABEL_342;
    qmemcpy(v345, "output_index", 12);
    v415 = 12;
    v416 = v345;
    v417 = 12;
    LOBYTE(v440) = 2;
    v441 = 0;
    v442 = LODWORD(__src[11]);
    v346 = (char **)&v429;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v398, &v415);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v347 = (char *)v430;
      v348 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v349 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v349;
      *(_QWORD *)((char *)v430 + v348 + 24) = v443;
      *(_QWORD *)&v347[v348 + 16] = v442;
      v350 = v440;
      v351 = (char ***)v441;
      *(_QWORD *)&v347[v348 + 8] = v441;
      *(_QWORD *)&v347[v348] = v350;
      if ( (_BYTE)v436 != 6 )
      {
        v346 = &v436;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
      }
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      v346 = &v436;
      v351 = &v422;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v346, v351);
    v336 = 4;
    v352 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v352 )
LABEL_342:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v336);
    *v352 = 1835365481;
    v415 = 4;
    v416 = v352;
    v417 = 4;
    serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
      &v422,
      &v407);
    if ( (_BYTE)v422 == 6 )
    {
      v429 = (char **)v423;
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v429, &off_101974C58, &off_101974238);
    }
    v443 = (__int64)v425;
    v442 = (__int64)v424;
    v441 = (__int64)v423;
    v440 = (__int64 *)v422;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v429, &v398, &v415);
    if ( v429 == (char **)0x8000000000000000LL )
    {
      v353 = (char *)v430;
      v354 = 32LL * (_QWORD)v432;
      v439 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 3);
      v438 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 2);
      v355 = *((char **)v430 + 4 * (_QWORD)v432);
      v437 = *((_QWORD *)v430 + 4 * (_QWORD)v432 + 1);
      v436 = v355;
      *(_QWORD *)((char *)v430 + v354 + 24) = v443;
      *(_QWORD *)&v353[v354 + 16] = v442;
      v356 = v440;
      *(_QWORD *)&v353[v354 + 8] = v441;
      *(_QWORD *)&v353[v354] = v356;
      if ( (_BYTE)v436 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v436);
    }
    else
    {
      v428 = v435;
      v427 = v434;
      v426 = v433;
      v425 = v432;
      v424 = (char *)v431;
      v423 = (__int64 (__fastcall *)())v430;
      v422 = v429;
      v421 = v443;
      v420 = v442;
      v419 = v441;
      v418 = v440;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v436,
        &v422,
        &v418);
    }
    v414 = v400;
    v413 = v399;
    v412 = v398;
    LOBYTE(v411) = 5;
    v436 = "response.output_item.doneresponse.function_call_arguments.done";
    v437 = 25;
    v418 = &v411;
    v422 = &v436;
    v423 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    v424 = (char *)&v418;
    v425 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v429, &unk_1017C9F28, &v422);
    v358 = v430;
    v359 = v431;
    v360 = (char *)v405;
    if ( v431 > *a2 - (_QWORD)v405 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        a2,
        v405,
        v431,
        1,
        1,
        v357);
      v361 = a2[1];
      v360 = (char *)a2[2];
    }
    else
    {
      v361 = v390;
    }
    memcpy(&v360[v361], v358, v359);
    a2[2] = &v360[v359];
    if ( v429 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v358, v429, 1);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v411);
    v425 = v410;
    v424 = (char *)v409;
    v423 = v408;
    v422 = (char **)v407;
    v362 = v403[10];
    if ( v362 == v403[8] )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v386);
    v363 = v403;
    v364 = v403[9];
    v365 = 32 * v362;
    *(_QWORD *)(v364 + v365 + 24) = v425;
    *(_QWORD *)(v364 + v365 + 16) = v424;
    v7 = v422;
    *(_QWORD *)(v364 + v365 + 8) = v423;
    *(_QWORD *)(v364 + v365) = v7;
    v363[10] = v362 + 1;
    v295 = v393;
    if ( v393 )
    {
      v296 = v404;
LABEL_282:
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v296, v295, 1);
    }
LABEL_283:
    if ( v401 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0], v401, 1);
    if ( __src[2] )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[3], __src[2], 1);
    if ( __src[5] )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[6], __src[5], 1);
    if ( __src[8] )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[9], __src[8], 1);
    v15 = v388;
    if ( v388 == v396 )
    {
      v13 = v396;
      v14 = v396;
      v10 = v397;
      v12 = v389;
      goto LABEL_310;
    }
  }
  v10 = v397;
  v12 = v389;
  v13 = v396;
  v14 = v388;
LABEL_310:
  core::ptr::drop_in_place$LT$$u5b$codexmate_lib..core..relay..translator..stream..ToolItemState$u5d$$GT$::h4bc770e396bdab26(
    v14,
    0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)((char *)v13 - (char *)v14) >> 3),
    v7,
    v14,
    v8,
    v9,
    v369.i64[0],
    v369.i64[1],
    v370.i64[0],
    v370.i64[1]);
  if ( v12 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 104 * v12, 8);
  return *(double *)si128.i64;
}
