// __ZN13codexmate_lib4core12debug_bundle21thread_catalog_health @ 0x1004d6c00 | 基线 same-set
// [FULL IDA decompiler]

__int64 __fastcall codexmate_lib::core::debug_bundle::thread_catalog_health::ha2cff36600023db8(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // r15
  __int8 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 *v26; // r15
  __int64 *v27; // rax
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // r12
  __int64 v40; // r14
  int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __m256i *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned __int16 *v51; // rcx
  unsigned __int16 *v52; // rax
  __int64 v53; // r14
  __int64 v54; // r13
  unsigned __int16 *v55; // r12
  size_t v56; // rdx
  size_t v57; // rbx
  __int64 v58; // rbx
  int v59; // eax
  char v60; // cl
  unsigned __int16 *j; // rcx
  unsigned __int16 *v62; // rax
  __int64 v63; // r14
  __int64 v64; // r13
  unsigned __int16 *v65; // r12
  size_t v66; // rdx
  size_t v67; // rbx
  __int64 v68; // rbx
  int v69; // eax
  char v70; // cl
  __int64 v71; // rax
  char *v72; // rcx
  size_t v73; // rdx
  unsigned __int16 *v74; // rsi
  unsigned __int16 *v75; // rax
  __int64 v76; // r14
  __int64 v77; // r13
  unsigned __int16 *v78; // r12
  size_t v79; // rdx
  size_t v80; // rbx
  __int64 v81; // rbx
  int v82; // eax
  char v83; // cl
  __int64 v84; // rax
  char *v85; // rcx
  unsigned __int16 *k; // rcx
  unsigned __int16 *v87; // rax
  __int64 v88; // r14
  __int64 v89; // r13
  unsigned __int16 *v90; // r12
  size_t v91; // rdx
  size_t v92; // rbx
  __int64 v93; // rbx
  int v94; // eax
  char v95; // cl
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rbx
  __int64 v99; // rbx
  __int64 v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rbx
  __int64 v105; // rbx
  __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  __int64 v115; // rbx
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rsi
  __int64 v122; // rcx
  void *v123; // r13
  __int64 v124; // rdx
  __int64 v125; // r14
  __m128i si128; // xmm0
  __int64 v127; // r12
  void *v128; // rsi
  __int64 v129; // rbx
  __int64 v130; // r14
  __int64 v131; // rdi
  char v132; // al
  size_t v133; // rbx
  size_t v134; // rdi
  __int64 v135; // rsi
  void *v136; // rax
  __int64 v137; // rdx
  size_t v138; // r14
  void *v139; // rax
  void *v140; // rbx
  _DWORD *v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rbx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rsi
  unsigned __int64 v147; // rbx
  _QWORD *v148; // r15
  __int64 v149; // rsi
  __int64 v150; // rsi
  __int64 v151; // rdi
  __int64 m; // r14
  __int64 v153; // r15
  _DWORD *v154; // rax
  size_t v155; // rbx
  __int64 v156; // rax
  __m256i *v157; // rdi
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rdx
  __m256i *v161; // rsi
  __int64 v162; // rax
  __m256i *v163; // rdi
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rdx
  __m256i *v167; // rsi
  _DWORD *v168; // rax
  __m256i *v169; // rdi
  __int64 v170; // rax
  __int64 v171; // rcx
  __int64 v172; // rdx
  __m256i *v173; // rsi
  __int64 v174; // rax
  __int8 v175; // al
  __int64 v176; // r14
  const void *v177; // r13
  __int64 v178; // rax
  _BYTE *v179; // rax
  _BYTE *v180; // r12
  __int64 v181; // r14
  __int64 v182; // rsi
  __m256i *v183; // rdi
  __int64 v184; // rax
  __int64 v185; // rcx
  __int64 v186; // rdx
  __m256i *v187; // rsi
  void *v188; // rax
  __int8 v189; // al
  __int64 v190; // r14
  const void *v191; // r13
  __int64 v192; // rax
  __int64 result; // rax
  __m256i *v194; // rdi
  __int64 v195; // rax
  __int64 v196; // rcx
  __int64 v197; // rdx
  __m256i *v198; // rsi
  void *v199; // rax
  __m256i *v200; // rdi
  __int64 v201; // rax
  __int64 v202; // rcx
  __int64 v203; // rdx
  __m256i *v204; // rsi
  void *v205; // rax
  __m256i *v206; // rdi
  __int64 v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rdx
  __m256i *v210; // rsi
  void *v211; // rax
  __m256i *v212; // rdi
  __int64 v213; // rax
  __int64 v214; // rcx
  __int64 v215; // rdx
  __m256i *v216; // rsi
  void *v217; // rax
  __m256i *v218; // rdi
  __int64 v219; // rax
  __int64 v220; // rcx
  __int64 v221; // rdx
  __m256i *v222; // rsi
  void *v223; // rax
  __int8 v224; // al
  __int64 v225; // r14
  const void *v226; // r13
  __int64 v227; // rax
  __int64 v228; // rbx
  __int64 v229; // r13
  __int64 v230; // rax
  signed __int64 v231; // r15
  __int64 v232; // r12
  __int64 v233; // rax
  size_t v234; // r15
  size_t v235; // r14
  size_t v236; // r15
  __int64 v237; // rax
  __int64 v238; // r15
  size_t v239; // r12
  size_t v240; // r15
  __int64 v241; // rax
  __int64 v242; // r15
  __int64 v243; // r14
  __int64 v244; // rax
  __int64 v245; // rcx
  size_t v246; // rdx
  size_t v247; // rsi
  char *v248; // r15
  char *v249; // rdi
  __int64 v250; // rdx
  size_t v251; // r15
  __int64 v252; // rax
  __int64 v253; // r15
  __int64 *v254; // rdi
  void *v255; // rsi
  __int64 v256; // r14
  __int64 v257; // rax
  __int64 v258; // rcx
  size_t v259; // rdx
  size_t v260; // r15
  __int64 v261; // rax
  __int64 v262; // r15
  size_t v263; // rdx
  size_t v264; // r15
  __int64 v265; // rax
  __int64 v266; // r15
  __int64 v267; // rcx
  char *v268; // rax
  __int64 v269; // r14
  __int64 v270; // r12
  size_t v271; // rdx
  __int64 v272; // r15
  int v273; // eax
  char v274; // cl
  size_t v275; // rdx
  size_t v276; // r15
  __int64 v277; // rdx
  __m256i *v278; // rdi
  __int64 v279; // rax
  __int64 v280; // rcx
  __int64 v281; // rdx
  __m256i *v282; // rsi
  void *v283; // rax
  __int64 v284; // r15
  __int64 v285; // rax
  __int64 v286; // r12
  __int64 v287; // rbx
  __m256i *v288; // rdi
  __int64 v289; // rax
  __int64 v290; // rcx
  __int64 v291; // rdx
  __m256i *v292; // rsi
  _DWORD *v293; // rax
  __m256i *v294; // rdi
  __int64 v295; // rax
  __int64 v296; // rcx
  __int64 v297; // rdx
  __m256i *v298; // rsi
  __int64 v299; // rax
  __m256i *v300; // rdi
  __int64 v301; // rax
  __int64 v302; // rcx
  __int64 v303; // rdx
  __m256i *v304; // rsi
  _DWORD *v305; // rax
  __m256i *v306; // rdi
  __int64 v307; // rax
  __int64 v308; // rcx
  __int64 v309; // rdx
  __m256i *v310; // rsi
  void *v311; // rax
  __m256i *v312; // rdi
  __int64 v313; // rax
  __int64 v314; // rcx
  __int64 v315; // rdx
  __m256i *v316; // rsi
  void *v317; // rax
  __m256i *v318; // rdi
  __int64 v319; // rax
  __int64 v320; // rcx
  __int64 v321; // rdx
  __int64 v322; // rsi
  __int64 v323; // rbx
  __m256i **v324; // r15
  _QWORD *v325; // rax
  __int64 v326; // rdx
  __int64 v327; // rbx
  _QWORD *v328; // r14
  __int64 v329; // rsi
  __m256i *v330; // rdi
  __int64 v331; // rax
  __int64 v332; // rcx
  __int64 v333; // rdx
  __m256i *v334; // rsi
  void *v335; // rax
  __m256i *v336; // rdi
  __int64 v337; // rax
  __int64 v338; // rcx
  __int64 v339; // rdx
  __m256i *v340; // rsi
  void *v341; // rax
  __int64 v342; // rbx
  void *v343; // rax
  __m256i *v344; // rdi
  __int64 v345; // rax
  __int64 v346; // rcx
  __int64 v347; // rdx
  __m256i *v348; // rsi
  void *v349; // rax
  __m256i *v350; // rdi
  __int64 v351; // rax
  __int64 v352; // rcx
  __int64 v353; // rdx
  __m256i *v354; // rsi
  void *v355; // rax
  __m256i *v356; // rdi
  __int64 v357; // rax
  __int64 v358; // rcx
  __int64 v359; // rdx
  __m256i *v360; // rsi
  void *v361; // rax
  __m256i *v362; // rdi
  __int64 v363; // rax
  __int64 v364; // rcx
  __int64 v365; // rdx
  __m256i *v366; // rsi
  void *v367; // rax
  __m256i *v368; // rdi
  __int64 v369; // rax
  __int64 v370; // rcx
  __int64 v371; // rdx
  __m256i *v372; // rsi
  void *v373; // rax
  __int64 v374; // rdx
  __m256i *v375; // rdi
  __int64 v376; // rax
  __int64 v377; // rcx
  __int64 v378; // rdx
  __m256i *v379; // rsi
  void *v380; // rax
  __int64 v381; // rdx
  __int64 v382; // rdx
  __int64 v383; // rax
  __int64 v384; // rdi
  __int64 v385; // rax
  __int64 v386; // rcx
  __int64 i; // rax
  __int64 v388; // rsi
  __int64 v389; // [rsp+0h] [rbp-5B0h]
  __int64 v390; // [rsp+8h] [rbp-5A8h]
  __int64 v391; // [rsp+10h] [rbp-5A0h]
  _QWORD v392[3]; // [rsp+18h] [rbp-598h] BYREF
  _QWORD v393[3]; // [rsp+30h] [rbp-580h] BYREF
  _QWORD v394[2]; // [rsp+48h] [rbp-568h] BYREF
  _QWORD v395[2]; // [rsp+58h] [rbp-558h] BYREF
  _QWORD v396[2]; // [rsp+68h] [rbp-548h] BYREF
  _QWORD v397[3]; // [rsp+78h] [rbp-538h] BYREF
  __int128 v398; // [rsp+90h] [rbp-520h]
  __int64 v399; // [rsp+A0h] [rbp-510h]
  __int128 v400; // [rsp+A8h] [rbp-508h] BYREF
  __int64 v401; // [rsp+B8h] [rbp-4F8h]
  __int64 v402; // [rsp+C0h] [rbp-4F0h] BYREF
  __int64 v403; // [rsp+C8h] [rbp-4E8h]
  __int64 v404; // [rsp+D0h] [rbp-4E0h]
  __int64 v405; // [rsp+D8h] [rbp-4D8h] BYREF
  __int64 v406; // [rsp+E0h] [rbp-4D0h]
  __int64 v407; // [rsp+E8h] [rbp-4C8h]
  __int64 v408; // [rsp+F8h] [rbp-4B8h]
  __int64 v409; // [rsp+100h] [rbp-4B0h]
  __int64 v410; // [rsp+108h] [rbp-4A8h]
  __int64 v411; // [rsp+110h] [rbp-4A0h]
  __int64 v412; // [rsp+118h] [rbp-498h]
  __int64 v413; // [rsp+120h] [rbp-490h]
  __int64 v414; // [rsp+128h] [rbp-488h]
  __int64 v415; // [rsp+130h] [rbp-480h] BYREF
  void *v416; // [rsp+138h] [rbp-478h]
  __int64 v417; // [rsp+140h] [rbp-470h]
  __int64 v418; // [rsp+148h] [rbp-468h]
  __int64 v419; // [rsp+150h] [rbp-460h]
  _QWORD __dst[24]; // [rsp+158h] [rbp-458h] BYREF
  _OWORD v421[7]; // [rsp+218h] [rbp-398h] BYREF
  __m256i *v422; // [rsp+288h] [rbp-328h] BYREF
  __int64 v423; // [rsp+290h] [rbp-320h] BYREF
  __int64 v424; // [rsp+298h] [rbp-318h] BYREF
  __m256i *v425; // [rsp+2A0h] [rbp-310h]
  __int64 v426; // [rsp+2A8h] [rbp-308h]
  __int64 v427; // [rsp+2B0h] [rbp-300h]
  void *__src; // [rsp+2B8h] [rbp-2F8h]
  __m256i v429[6]; // [rsp+2C0h] [rbp-2F0h] BYREF
  __int64 v430; // [rsp+380h] [rbp-230h] BYREF
  __int128 v431; // [rsp+388h] [rbp-228h]
  __int64 v432; // [rsp+398h] [rbp-218h]
  void *epi64; // [rsp+3A0h] [rbp-210h]
  void *v434; // [rsp+3A8h] [rbp-208h]
  _DWORD *v435; // [rsp+3B0h] [rbp-200h]
  __int64 v436; // [rsp+3B8h] [rbp-1F8h] BYREF
  __int128 v437; // [rsp+3C0h] [rbp-1F0h]
  size_t v438; // [rsp+3D0h] [rbp-1E0h]
  void *v439; // [rsp+3D8h] [rbp-1D8h]
  __m256i v440; // [rsp+3E0h] [rbp-1D0h] BYREF
  __int64 v441; // [rsp+400h] [rbp-1B0h]
  __int64 v442; // [rsp+408h] [rbp-1A8h]
  size_t v443[2]; // [rsp+410h] [rbp-1A0h] BYREF
  void *__s1; // [rsp+420h] [rbp-190h]
  __int64 v445; // [rsp+428h] [rbp-188h]
  __int64 v446; // [rsp+430h] [rbp-180h]
  __int64 v447; // [rsp+438h] [rbp-178h]
  __m256i v448[3]; // [rsp+440h] [rbp-170h] BYREF
  __m256i v449; // [rsp+4A0h] [rbp-110h] BYREF
  __int128 v450; // [rsp+4C0h] [rbp-F0h]
  __int64 v451; // [rsp+4D0h] [rbp-E0h]
  __int64 v452; // [rsp+4D8h] [rbp-D8h]
  __int64 v453; // [rsp+4E0h] [rbp-D0h]
  size_t v454; // [rsp+4E8h] [rbp-C8h]
  __int64 v455; // [rsp+4F0h] [rbp-C0h] BYREF
  __int64 (__fastcall *v456)(); // [rsp+4F8h] [rbp-B8h]
  __int64 v457; // [rsp+500h] [rbp-B0h]
  __m256i v458; // [rsp+508h] [rbp-A8h] BYREF
  __m256i v459; // [rsp+528h] [rbp-88h] BYREF
  __m256i v460; // [rsp+548h] [rbp-68h]
  __m256i v461; // [rsp+568h] [rbp-48h]

  v418 = a3;
  v414 = a1;
  if ( *(_BYTE *)(a2 + 1329) == 1 && *(_QWORD *)(a2 + 1256) != 0x8000000000000000LL )
  {
    v19 = *(_QWORD **)(a2 + 1264);
    v20 = *(_QWORD *)(a2 + 1272);
    if ( v20 == 8 )
    {
      if ( *v19 != anon_b0ee9adff4519c22b647af231a5a39fa_251 )
        goto LABEL_3;
    }
    else if ( v20 == 11 )
    {
      if ( anon_b0ee9adff4519c22b647af231a5a39fa_250 ^ *v19
         | *(__int64 *)((char *)&anon_b0ee9adff4519c22b647af231a5a39fa_250 + 3) ^ *(_QWORD *)((char *)v19 + 3) )
      {
        goto LABEL_3;
      }
    }
    else if ( v20 != 14
           || anon_b0ee9adff4519c22b647af231a5a39fa_249 ^ *v19
            | *(__int64 *)((char *)&anon_b0ee9adff4519c22b647af231a5a39fa_249 + 6) ^ *(_QWORD *)((char *)v19 + 6) )
    {
      goto LABEL_3;
    }
    return codexmate_lib::core::debug_bundle::skipped_transition_scan::h7b2228ab191b8cab(
             v414,
             a2 + 1256,
             "thread catalog health scan",
             0x1Au);
  }
LABEL_3:
  v4 = *(_QWORD *)(a2 + 584);
  v435 = (_DWORD *)a2;
  std::path::Path::_join::hb1a495d4f06b13b8(
    &v402,
    v4,
    *(_QWORD *)(a2 + 592),
    "codex_router_catalog.jsonmodels_cache.json",
    25);
  v5 = v403;
  v6 = v404;
  std::sys::fs::metadata::h32fa16d3052ea535(v429, v403, v404);
  v7 = v429[0].i8[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    v429[0].i64[0],
    v429[0].i64[1]);
  std::sys::fs::metadata::h32fa16d3052ea535(v429, v5, v6);
  if ( !v429[0].i8[0] )
  {
    v8 = v429[3].i64[1];
    v9 = 1;
    goto LABEL_6;
  }
  v8 = v429[0].i64[1];
  if ( (v429[0].i8[8] & 3) == 1 )
  {
    v439 = (void *)(v429[0].i64[1] - 1);
    v454 = *(_QWORD *)(v429[0].i64[1] - 1);
    v181 = *(_QWORD *)(v429[0].i64[1] + 7);
    if ( *(_QWORD *)v181 )
      (*(void (__fastcall **)(size_t))v181)(v454);
    v182 = *(_QWORD *)(v181 + 8);
    if ( v182 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v454, v182, *(_QWORD *)(v181 + 16));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v439, 24, 8);
    v9 = 0;
    if ( !v7 )
      goto LABEL_6;
LABEL_15:
    LOWORD(__dst[23]) = 0;
    __dst[0] = 0;
    __dst[1] = v8;
    __dst[8] = 0x8000000000000000LL;
    __dst[11] = 0x8000000000000000LL;
    __dst[2] = 0;
    __dst[3] = 8;
    __dst[4] = 0;
    __dst[5] = 0;
    __dst[6] = 8;
    __dst[7] = 0;
    __dst[17] = 0;
    __dst[22] = 0;
    __dst[19] = 0;
    __dst[20] = 0;
    __dst[14] = 0x8000000000000000LL;
    goto LABEL_27;
  }
  v9 = 0;
  if ( v7 )
    goto LABEL_15;
LABEL_6:
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v448, v5, v6);
  v10 = v448[0].i64[0];
  if ( v448[0].i64[0] == 0x8000000000000000LL )
  {
    v11 = v448[0].i64[1];
    v405 = v448[0].i64[1];
    *(_QWORD *)&v421[0] = 0;
    *(_OWORD *)((char *)v421 + 8) = 1u;
    v429[0].i64[2] = 1610612768;
    v429[0].i64[0] = (__int64)v421;
    v429[0].i64[1] = (__int64)&anon_92869709a5e99ce1936aa4e326b6c562_1257;
    if ( (unsigned __int8)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0(
                            &v405,
                            v429) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        __dst,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    __dst[8] = *(_QWORD *)&v421[0];
    *(_OWORD *)&__dst[9] = *(_OWORD *)((char *)v421 + 8);
    LOWORD(__dst[23]) = 1;
    __dst[0] = v9;
    __dst[1] = v8;
    __dst[11] = 0x8000000000000000LL;
    __dst[2] = 0;
    __dst[3] = 8;
    __dst[4] = 0;
    __dst[5] = 0;
    __dst[6] = 8;
    __dst[7] = 0;
    __dst[17] = 0;
    __dst[22] = 0;
    __dst[20] = 0;
    __dst[19] = 0;
    __dst[14] = 0x8000000000000000LL;
    if ( (v11 & 3) == 1 )
    {
      v12 = v11 - 1;
      v13 = *(_QWORD *)(v11 - 1);
      v14 = *(_QWORD *)(v11 + 7);
      if ( *(_QWORD *)v14 )
        (*(void (__fastcall **)(__int64))v14)(v13);
      v15 = *(_QWORD *)(v14 + 8);
      if ( v15 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16));
      v16 = 24;
      v17 = 8;
      v18 = v12;
LABEL_26:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v16, v17);
    }
    goto LABEL_27;
  }
  v429[0].i64[0] = v448[0].i64[1];
  *(__int128 *)((char *)v429[0].i128 + 8) = v448[0].u64[2];
  v429[0].i64[3] = 0;
  v441 = v448[0].i64[1];
  v429[1].i128[0] = *(__int128 *)((char *)v448[0].i128 + 8);
  serde_json::de::from_trait::h51e180b4bb6af5e0(v421, v429);
  if ( LOBYTE(v421[0]) == 6 )
  {
    v459.i64[0] = *((_QWORD *)&v421[0] + 1);
    v405 = 0;
    v406 = 1;
    v407 = 0;
    v429[0].i64[2] = 1610612768;
    v429[0].i64[0] = (__int64)&v405;
    v429[0].i64[1] = (__int64)&anon_92869709a5e99ce1936aa4e326b6c562_1257;
    if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d(
                            &v459,
                            v429,
                            v21,
                            v22,
                            v23,
                            v24) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        __dst,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    __dst[11] = v405;
    __dst[12] = v406;
    __dst[13] = v407;
    LOWORD(__dst[23]) = 1;
    __dst[0] = v9;
    __dst[1] = v8;
    __dst[8] = 0x8000000000000000LL;
    __dst[2] = 0;
    __dst[3] = 8;
    __dst[4] = 0;
    __dst[5] = 0;
    __dst[6] = 8;
    __dst[7] = 0;
    __dst[17] = 0;
    __dst[22] = 0;
    __dst[20] = 0;
    __dst[19] = 0;
    __dst[14] = 0x8000000000000000LL;
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v459);
    goto LABEL_24;
  }
  v448[0].i64[3] = *((_QWORD *)&v421[1] + 1);
  *(__int128 *)((char *)v448[0].i128 + 8) = *(_OWORD *)((char *)v421 + 8);
  v448[0].i64[0] = *(_QWORD *)&v421[0];
  v429[5].i16[12] = 257;
  v429[0].i64[0] = v9;
  *(__int128 *)((char *)v429[0].i128 + 8) = (unsigned __int64)v8;
  v429[2].i64[0] = 0x8000000000000000LL;
  v429[2].i64[3] = 0x8000000000000000LL;
  *(__int128 *)((char *)&v429[0].i128[1] + 8) = 8u;
  v429[1].i64[1] = 0;
  v429[1].i128[1] = 8u;
  v429[4].i64[1] = 0;
  v429[5].i64[2] = 0;
  v429[4].i64[3] = 0;
  v429[5].i64[0] = 0;
  v429[3].i64[2] = 0x8000000000000000LL;
  v459.i64[0] = 0;
  v459.i64[2] = 0;
  v179 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "models::",
                    6,
                    v448);
  v445 = v10;
  if ( v179 )
  {
    v180 = nullptr;
    if ( *v179 == 4 )
      v180 = v179 + 8;
  }
  else
  {
    v180 = nullptr;
  }
  v228 = 0;
  while ( v228 && v228 != v8 )
  {
LABEL_316:
    v230 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             &unk_1015E3B3C,
             4,
             v228);
    v228 += 32;
    if ( v230 && *(_BYTE *)v230 == 3 )
    {
      v231 = *(_QWORD *)(v230 + 24);
      if ( v231 < 0 )
      {
        v232 = 0;
        goto LABEL_378;
      }
      v439 = *(void **)(v230 + 16);
      v453 = (__int64)v180;
      v454 = v231;
      if ( v231 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_1015E3B3C, 4);
        v232 = 1;
        v233 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v231, 1);
        if ( !v233 )
          goto LABEL_517;
        v180 = (_BYTE *)v453;
      }
      else
      {
        v233 = 1;
      }
      v234 = v454;
      v235 = v233;
      memcpy((void *)v233, v439, v454);
      __dst[0] = v234;
      v438 = v235;
      __dst[1] = v235;
      __dst[2] = v234;
      if ( !(unsigned __int8)alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h5131593e901fe385(
                               &v459,
                               __dst) )
      {
        v236 = v454;
        if ( v454 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v459, __dst);
          v232 = 1;
          v237 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v236, 1);
          if ( !v237 )
            goto LABEL_517;
          v238 = v237;
        }
        else
        {
          v238 = 1;
        }
        v239 = v454;
        memcpy((void *)v238, v439, v454);
        __dst[0] = v239;
        __dst[1] = v238;
        __dst[2] = v239;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h5131593e901fe385(&v429[4].u32[2], __dst);
        v240 = v454;
        if ( v454 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v429[4].u32[2], __dst);
          v232 = 1;
          v241 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v240, 1);
          if ( !v241 )
            goto LABEL_517;
          v242 = v241;
        }
        else
        {
          v242 = 1;
        }
        memcpy((void *)v242, v439, v454);
        v243 = v429[1].i64[0];
        if ( v429[1].i64[0] == v429[0].i64[2] )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v429[0].u128[1]);
        v244 = v429[0].i64[3];
        v245 = 3 * v243;
        v246 = v454;
        *(_QWORD *)(v429[0].i64[3] + 8 * v245) = v454;
        *(_QWORD *)(v244 + 8 * v245 + 8) = v242;
        *(_QWORD *)(v244 + 8 * v245 + 16) = v246;
        v429[1].i64[0] = v243 + 1;
        core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(__dst, v439, v246, "::", 2);
        v180 = (_BYTE *)v453;
        _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5(
          v421,
          __dst);
        if ( LODWORD(v421[0]) == 1
          && *((_QWORD *)&v421[0] + 1) >= 0xDu
          && !(*(_QWORD *)v439 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)v439 + 5) ^ 0x5F79616C65725F69LL) )
        {
          v247 = v454 - *(_QWORD *)&v421[1];
          v248 = (char *)v439 + *(_QWORD *)&v421[1];
          v249 = (char *)v439 + *(_QWORD *)&v421[1];
          v443[0] = v454 - *(_QWORD *)&v421[1];
          core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
            (char *)v439 + *(_QWORD *)&v421[1],
            v454 - *(_QWORD *)&v421[1]);
          if ( v250 )
          {
            v434 = v248;
            v251 = v454;
            if ( v454 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v249, v247);
              v232 = 1;
              v252 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v251, 1);
              if ( !v252 )
                goto LABEL_517;
              v253 = v252;
            }
            else
            {
              v253 = 1;
            }
            v254 = (__int64 *)v253;
            v255 = v439;
            memcpy((void *)v253, v439, v454);
            v256 = v429[1].i64[3];
            if ( v429[1].i64[3] == v429[1].i64[1] )
            {
              v254 = &v429[1].i64[1];
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v429[1].u32[2]);
            }
            v257 = v429[1].i64[2];
            v258 = 3 * v256;
            v259 = v454;
            *(_QWORD *)(v429[1].i64[2] + 8 * v258) = v454;
            *(_QWORD *)(v257 + 8 * v258 + 8) = v253;
            *(_QWORD *)(v257 + 8 * v258 + 16) = v259;
            v429[1].i64[3] = v256 + 1;
            v180 = (_BYTE *)v453;
            if ( v429[3].i64[2] == 0x8000000000000000LL )
            {
              v260 = v259;
              if ( v259 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v254, v255);
                v232 = 1;
                v261 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v260, 1);
                if ( !v261 )
                {
LABEL_517:
                  v438 = v454;
                  goto LABEL_378;
                }
                v262 = v261;
                v180 = (_BYTE *)v453;
              }
              else
              {
                v262 = 1;
              }
              v254 = (__int64 *)v262;
              memcpy((void *)v262, v439, v454);
              v255 = (void *)v429[3].i64[2];
              if ( v429[3].i64[2] != 0x8000000000000000LL && v429[3].i64[2] )
              {
                v254 = (__int64 *)v429[3].i64[3];
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v429[3].i64[3], v429[3].i64[2], 1);
              }
              v429[3].i64[2] = v454;
              v429[3].i64[3] = v262;
              v429[4].i64[0] = v454;
            }
            v263 = v443[0];
            if ( v443[0] )
            {
              v264 = v443[0];
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v254, v255);
              v232 = 1;
              v265 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v264, 1);
              if ( v265 )
              {
                v266 = v265;
                v180 = (_BYTE *)v453;
                v263 = v443[0];
                goto LABEL_357;
              }
              v438 = v443[0];
LABEL_378:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v232, v438);
            }
            v266 = 1;
LABEL_357:
            memcpy((void *)v266, v434, v263);
            v267 = v429[5].i64[0];
            if ( v429[5].i64[0] )
            {
              __s1 = (void *)v266;
              v447 = v429[5].i64[1];
              while ( 2 )
              {
                v268 = (char *)(v267 + 8);
                v446 = v267;
                v427 = *(unsigned __int16 *)(v267 + 538);
                v269 = 3LL * (unsigned int)(8 * v427);
                v270 = -1;
                do
                {
                  if ( !v269 )
                  {
                    v270 = v427;
                    goto LABEL_369;
                  }
                  v434 = v268 + 24;
                  v271 = *((_QWORD *)v268 + 2);
                  v272 = v443[0] - v271;
                  if ( v443[0] < v271 )
                    v271 = v443[0];
                  v273 = memcmp(__s1, *((const void **)v268 + 1), v271);
                  if ( v273 )
                    v272 = v273;
                  v274 = (v272 > 0) - (v272 < 0);
                  ++v270;
                  v269 -= 24;
                  v268 = (char *)v434;
                }
                while ( v274 == 1 );
                if ( !v274 )
                {
                  __dst[1] = v446;
                  __dst[2] = v447;
                  __dst[3] = v270;
                  __dst[4] = &v429[5];
                  __dst[0] = 0x8000000000000000LL;
                  v180 = (_BYTE *)v453;
                  v275 = v454;
                  if ( v443[0] )
                  {
                    v276 = v454;
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v443[0], 1);
                    v275 = v276;
                  }
                  goto LABEL_375;
                }
LABEL_369:
                if ( v447 )
                {
                  --v447;
                  v267 = *(_QWORD *)(v446 + 8 * v270 + 544);
                  continue;
                }
                break;
              }
              __dst[0] = v443[0];
              __dst[1] = __s1;
              __dst[2] = v443[0];
              __dst[3] = &v429[5];
              __dst[4] = v446;
              __dst[5] = 0;
              __dst[6] = v270;
              v180 = (_BYTE *)v453;
            }
            else
            {
              __dst[0] = v443[0];
              __dst[1] = v266;
              __dst[2] = v443[0];
              __dst[3] = &v429[5];
              __dst[4] = 0;
            }
            v275 = v454;
LABEL_375:
            alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_insert_with::h8d6566c5fa7a0c0f(
              __dst,
              v439,
              v275);
          }
        }
      }
    }
  }
  if ( v180 )
  {
    v229 = *((_QWORD *)v180 + 2);
    if ( v229 )
    {
      v228 = *((_QWORD *)v180 + 1);
      v8 = v228 + 32 * v229;
      v180 = nullptr;
      goto LABEL_316;
    }
  }
  memcpy(__dst, v429, sizeof(__dst));
  if ( v459.i64[0] )
  {
    v385 = v459.i64[2];
    *((_QWORD *)&v421[0] + 1) = 0;
    v421[1] = v459.i128[0];
    *((_QWORD *)&v421[2] + 1) = 0;
    v421[3] = v459.i128[0];
    v386 = 1;
  }
  else
  {
    v386 = 0;
    v385 = 0;
  }
  *(_QWORD *)&v421[0] = v386;
  *(_QWORD *)&v421[2] = v386;
  *(_QWORD *)&v421[4] = v385;
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v405, v421);
  for ( i = v405; v405; i = v405 )
  {
    v388 = *(_QWORD *)(i + 24 * v407 + 8);
    if ( v388 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(i + 24 * v407 + 16), v388, 1);
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v405, v421);
  }
  v10 = v445;
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v448);
LABEL_24:
  if ( v10 )
  {
    v17 = 1;
    v18 = v441;
    v16 = v10;
    goto LABEL_26;
  }
LABEL_27:
  codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_model_catalog::hef17cfa3d974fdef(
    &v405,
    v435);
  v448[0].i64[0] = 0;
  v448[0].i64[1] = 8;
  v448[0].i128[1] = 0u;
  memset(&v448[1].u128[1], 0, 48);
  v448[1].i128[0] = 8u;
  *(_QWORD *)&v400 = 0;
  v401 = 0;
  v25 = (__int64)v429;
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v429);
  v461.i64[0] = v429[0].i64[1];
  v461.i64[1] = v429[0].i64[1];
  v398 = v429[0].i128[0];
  v461.i64[2] = v429[0].i64[0];
  v439 = (void *)(v429[0].i64[1] + 24 * v429[0].i64[2]);
  v461.i64[3] = (__int64)v439;
  v26 = (__int64 *)v429[0].i64[1];
  if ( v429[0].i64[2] )
  {
    v399 = __dst[14];
    v438 = *(_QWORD *)(v418 + 8);
    v434 = *(void **)(v418 + 16);
    v27 = (__int64 *)v429[0].i64[1];
    while ( 1 )
    {
      v26 = v27 + 3;
      v461.i64[1] = (__int64)(v27 + 3);
      v28 = *v27;
      if ( *v27 == 0x8000000000000000LL )
        goto LABEL_204;
      v29 = v27[2];
      v435 = (_DWORD *)v27[1];
      std::sys::fs::metadata::h32fa16d3052ea535(v429, v435, v29);
      v30 = v429[0].i64[0];
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
        v429[0].i64[0],
        v429[0].i64[1]);
      if ( v30 )
        goto LABEL_59;
      rusqlite::Connection::open_with_flags::h44d322d71fbb5f40(v429, v435, v29, 32769, v31, v32, v389, v390, v391);
      if ( v429[3].i8[8] == 3 )
      {
        *((_QWORD *)&v421[3] + 1) = v429[1].i64[3];
        *(_OWORD *)((char *)&v421[2] + 8) = *(__int128 *)((char *)v429[1].i128 + 8);
        *(_OWORD *)((char *)&v421[1] + 8) = *(__int128 *)((char *)&v429[0].i128[1] + 8);
        *(_OWORD *)((char *)v421 + 8) = *(__int128 *)((char *)v429[0].i128 + 8);
        *(_QWORD *)&v421[0] = v429[0].i64[0];
        alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v459, v435, v29);
        v33 = v459.i64[1];
        codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b(
          &v449,
          v459.i64[1],
          v459.i64[2],
          v438,
          v434);
        if ( 2 * v459.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v459.i64[0], 1);
        v459.i64[0] = (__int64)&v449;
        v459.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v459.i64[2] = (__int64)v421;
        v459.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v397, &unk_1017BF7DC, &v459);
        if ( v449.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v449.i64[1], v449.i64[0], 1);
        v34 = v448[1].i64[1];
        if ( v448[1].i64[1] == v448[0].i64[3] )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((char *)&v448[0].u128[1] + 8);
        v35 = v448[1].i64[0];
        v36 = 3 * v34;
        *(_QWORD *)(v448[1].i64[0] + 8 * v36 + 16) = v397[2];
        v37 = v397[0];
        *(_QWORD *)(v35 + 8 * v36 + 8) = v397[1];
        *(_QWORD *)(v35 + 8 * v36) = v37;
        v448[1].i64[1] = v34 + 1;
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v421);
        goto LABEL_59;
      }
      v453 = v29;
      qmemcpy(v421, v429, sizeof(v421));
      rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v429, v421, 0, 500000000);
      v454 = 0x8000000000000016LL;
      if ( v429[0].i64[0] != 0x8000000000000016LL )
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v429);
      v422 = (__m256i *)"threadsCOALESCE(model, '')''COALESCE(source, '')WHERE COALESCE(archived, 0) = 0\"subagent\"";
      v423 = 7;
      v455 = (__int64)&v422;
      v456 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v440, &unk_1017BF627, &v455);
      v38 = v440.i64[1];
      rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v429, v421, v440.i64[1], v440.i64[2]);
      v39 = v429[0].i64[1];
      v40 = v429[1].i64[0];
      v449 = *(__m256i *)((char *)&v429[1] + 8);
      if ( v429[0].i32[0] == 1 )
      {
        v445 = v429[0].i64[3];
        v441 = v429[0].i64[2];
        v458 = v449;
        if ( v440.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v440.i64[0], 1);
        if ( v39 != v454 )
          goto LABEL_51;
      }
      else
      {
        v459 = *(__m256i *)((char *)v429 + 8);
        v460 = v449;
        if ( v440.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v440.i64[0], 1);
        v41 = sqlite3_bind_parameter_count((sqlite3_stmt *)v460.i64[3]);
        if ( v41 )
        {
          v445 = v41;
          core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v459);
          v39 = 0x8000000000000013LL;
          v441 = 0;
LABEL_51:
          v429[0].i64[0] = v39;
          v429[0].i64[1] = v441;
          v429[0].i64[2] = v445;
          v429[0].i64[3] = v40;
          v429[1] = v458;
          alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v459, v435, v453);
          v42 = v459.i64[1];
          codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b(
            &v449,
            v459.i64[1],
            v459.i64[2],
            v438,
            v434);
          v25 = (__int64)v429;
          if ( 2 * v459.i64[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v459.i64[0], 1);
          v459.i64[0] = (__int64)&v449;
          v459.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          v459.i64[2] = (__int64)v429;
          v459.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v424, &unk_1017BF7C0, &v459);
          if ( v449.i64[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v449.i64[1], v449.i64[0], 1);
          v43 = v448[1].i64[1];
          if ( v448[1].i64[1] == v448[0].i64[3] )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((char *)&v448[0].u128[1] + 8);
          v44 = v448[1].i64[0];
          v45 = 3 * v43;
          *(_QWORD *)(v448[1].i64[0] + 8 * v45 + 16) = v426;
          v46 = v424;
          v47 = v425;
          *(_QWORD *)(v44 + 8 * v45 + 8) = v425;
          *(_QWORD *)(v44 + 8 * v45) = v46;
          v448[1].i64[1] = v43 + 1;
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v429);
          goto LABEL_58;
        }
        _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h7da69eeec1005cb2(
          v429,
          &v459,
          0);
        v441 = v429[0].i64[0];
        v40 = v429[0].i64[2];
        v445 = v429[0].i64[1];
        core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v459);
      }
      v427 = v40;
      v446 = v28;
      v389 = v441;
      v390 = v445;
      v391 = v40;
      v25 = (__int64)v429;
      v50 = v453;
      if ( !v441 )
      {
LABEL_122:
        v28 = v446;
        alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v429, v435, v50);
        v105 = v429[0].i64[1];
        codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b(
          &v459,
          v429[0].i64[1],
          v429[0].i64[2],
          v438,
          v434);
        if ( 2 * v429[0].i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, v429[0].i64[0], 1);
        v429[0].i64[0] = (__int64)&v459;
        v429[0].i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v415, &unk_1017BF79D, v429);
        if ( v459.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v459.i64[1], v459.i64[0], 1);
        v106 = v448[1].i64[1];
        if ( v448[1].i64[1] == v448[0].i64[3] )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((char *)&v448[0].u128[1] + 8);
        v107 = v448[1].i64[0];
        v108 = 3 * v106;
        *(_QWORD *)(v448[1].i64[0] + 8 * v108 + 16) = v417;
        v109 = v415;
        *(_QWORD *)(v107 + 8 * v108 + 8) = v416;
        *(_QWORD *)(v107 + 8 * v108) = v109;
        v448[1].i64[1] = v106 + 1;
        v104 = v427;
        goto LABEL_139;
      }
      v443[0] = v445;
      v51 = (unsigned __int16 *)v441;
LABEL_64:
      v52 = v51 + 4;
      __s1 = v51;
      v447 = v51[137];
      v53 = 3LL * (unsigned int)(8 * v447);
      v54 = -1;
      do
      {
        if ( !v53 )
        {
          v54 = v447;
LABEL_74:
          v50 = v453;
          if ( !v443[0] )
            goto LABEL_122;
          --v443[0];
          v51 = *((unsigned __int16 **)__s1 + v54 + 35);
          goto LABEL_64;
        }
        v55 = v52 + 12;
        v56 = *((_QWORD *)v52 + 2);
        v57 = v56 - 14;
        if ( v56 >= 0xE )
          v56 = 14;
        v58 = -(__int64)v57;
        v59 = memcmp("model_provider", *((const void **)v52 + 1), v56);
        if ( v59 )
          v58 = v59;
        v60 = (v58 > 0) - (v58 < 0);
        ++v54;
        v53 -= 24;
        v52 = v55;
        v25 = (__int64)v429;
      }
      while ( v60 == 1 );
      if ( v60 )
        goto LABEL_74;
      v443[0] = v445;
      for ( j = (unsigned __int16 *)v441; ; j = *((unsigned __int16 **)__s1 + v64 + 35) )
      {
        v62 = j + 4;
        __s1 = j;
        v447 = j[137];
        v63 = 3LL * (unsigned int)(8 * v447);
        v64 = -1;
        do
        {
          if ( !v63 )
          {
            v64 = v447;
            goto LABEL_86;
          }
          v65 = v62 + 12;
          v66 = *((_QWORD *)v62 + 2);
          v67 = v66 - 5;
          if ( v66 >= 5 )
            v66 = 5;
          v68 = -(__int64)v67;
          v69 = memcmp("model", *((const void **)v62 + 1), v66);
          if ( v69 )
            v68 = v69;
          v70 = (v68 > 0) - (v68 < 0);
          ++v64;
          v63 -= 24;
          v62 = v65;
        }
        while ( v70 == 1 );
        if ( !v70 )
        {
          v71 = 19;
          v72 = "COALESCE(model, '')''COALESCE(source, '')WHERE COALESCE(archived, 0) = 0\"subagent\"";
          v73 = v445;
          v74 = (unsigned __int16 *)v441;
          goto LABEL_88;
        }
LABEL_86:
        v73 = v445;
        v74 = (unsigned __int16 *)v441;
        if ( !v443[0] )
          break;
        --v443[0];
      }
      v71 = 2;
      v72 = "''COALESCE(source, '')WHERE COALESCE(archived, 0) = 0\"subagent\"";
LABEL_88:
      v396[0] = v72;
      v396[1] = v71;
      v443[0] = v73;
      while ( 1 )
      {
        v75 = v74 + 4;
        __s1 = v74;
        v447 = v74[137];
        v76 = 3LL * (unsigned int)(8 * v447);
        v77 = -1;
        do
        {
          if ( !v76 )
          {
            v77 = v447;
            goto LABEL_99;
          }
          v78 = v75 + 12;
          v79 = *((_QWORD *)v75 + 2);
          v80 = v79 - 6;
          if ( v79 >= 6 )
            v79 = 6;
          v81 = -(__int64)v80;
          v82 = memcmp("source", *((const void **)v75 + 1), v79);
          if ( v82 )
            v81 = v82;
          v83 = (v81 > 0) - (v81 < 0);
          ++v77;
          v76 -= 24;
          v75 = v78;
        }
        while ( v83 == 1 );
        if ( !v83 )
        {
          v84 = 20;
          v85 = "COALESCE(source, '')WHERE COALESCE(archived, 0) = 0\"subagent\"";
          v25 = (__int64)v429;
          goto LABEL_101;
        }
LABEL_99:
        v25 = (__int64)v429;
        if ( !v443[0] )
          break;
        --v443[0];
        v74 = *((unsigned __int16 **)__s1 + v77 + 35);
      }
      v84 = 2;
      v85 = "''COALESCE(source, '')WHERE COALESCE(archived, 0) = 0\"subagent\"";
LABEL_101:
      v395[0] = v85;
      v395[1] = v84;
      v443[0] = v445;
      for ( k = (unsigned __int16 *)v441; ; k = *((unsigned __int16 **)__s1 + v89 + 35) )
      {
        v87 = k + 4;
        __s1 = k;
        v447 = k[137];
        v88 = 3LL * (unsigned int)(8 * v447);
        v89 = -1;
        do
        {
          if ( !v88 )
          {
            v89 = v447;
            goto LABEL_112;
          }
          v90 = v87 + 12;
          v91 = *((_QWORD *)v87 + 2);
          v92 = v91 - 8;
          if ( v91 >= 8 )
            v91 = 8;
          v93 = -(__int64)v92;
          v94 = memcmp("archivedAuthFile~/.codexsessionsccswitchorphaned", *((const void **)v87 + 1), v91);
          if ( v94 )
            v93 = v94;
          v95 = (v93 > 0) - (v93 < 0);
          ++v89;
          v88 -= 24;
          v87 = v90;
          v25 = (__int64)v429;
        }
        while ( v95 == 1 );
        if ( !v95 )
        {
          v96 = 31;
          v97 = (__int64)"WHERE COALESCE(archived, 0) = 0\"subagent\"";
          v98 = v453;
          goto LABEL_114;
        }
LABEL_112:
        v98 = v453;
        if ( !v443[0] )
          break;
        --v443[0];
      }
      v97 = 1;
      v96 = 0;
LABEL_114:
      v394[0] = v97;
      v394[1] = v96;
      v429[0].i64[0] = (__int64)v396;
      v429[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      v429[0].i64[2] = (__int64)v395;
      v429[0].i64[3] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      v429[1].i64[0] = (__int64)v394;
      v429[1].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      v28 = v446;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v459, &unk_1017BF72B, v429);
      v419 = v459.i64[1];
      v442 = v459.i64[0];
      rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v429, v421, v459.i64[1], v459.i64[2]);
      if ( v429[0].i32[0] == 1 )
      {
        v460 = *(__m256i *)((char *)&v429[1] + 8);
        v459 = *(__m256i *)((char *)v429 + 8);
        alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v458, v435, v98);
        v99 = v458.i64[1];
        codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b(
          &v440,
          v458.i64[1],
          v458.i64[2],
          v438,
          v434);
        if ( 2 * v458.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v458.i64[0], 1);
        v458.i64[0] = (__int64)&v440;
        v458.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v458.i64[2] = (__int64)&v459;
        v458.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v430, &unk_1017BF77A, &v458);
        if ( v440.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v440.i64[1], v440.i64[0], 1);
        v100 = v448[1].i64[1];
        if ( v448[1].i64[1] == v448[0].i64[3] )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((char *)&v448[0].u128[1] + 8);
        v101 = v448[1].i64[0];
        v102 = 3 * v100;
        *(_QWORD *)(v448[1].i64[0] + 8 * v102 + 16) = *((_QWORD *)&v431 + 1);
        v103 = v430;
        *(_QWORD *)(v101 + 8 * v102 + 8) = v431;
        *(_QWORD *)(v101 + 8 * v102) = v103;
        v448[1].i64[1] = v100 + 1;
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v459);
        v104 = v427;
        goto LABEL_137;
      }
      v452 = v429[2].i64[0];
      v451 = v429[1].i64[3];
      v450 = *(__int128 *)((char *)v429[1].i128 + 8);
      v449 = *(__m256i *)((char *)v429 + 8);
      v110 = sqlite3_bind_parameter_count((sqlite3_stmt *)v429[2].i64[0]);
      v114 = v110;
      if ( v110 )
      {
        v429[0].i128[0] = 0x8000000000000013LL;
        v429[0].i64[2] = v110;
        alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v459, v435, v98);
        v115 = v459.i64[1];
        codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b(
          &v458,
          v459.i64[1],
          v459.i64[2],
          v438,
          v434);
        if ( 2 * v459.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, v459.i64[0], 1);
        v459.i64[0] = (__int64)&v458;
        v459.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v459.i64[2] = (__int64)v429;
        v459.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v436, &unk_1017BF759, &v459);
        if ( v458.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v458.i64[1], v458.i64[0], 1);
        v116 = v448[1].i64[1];
        if ( v448[1].i64[1] == v448[0].i64[3] )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((char *)&v448[0].u128[1] + 8);
        v117 = v448[1].i64[0];
        v118 = 3 * v116;
        *(_QWORD *)(v448[1].i64[0] + 8 * v118 + 16) = *((_QWORD *)&v437 + 1);
        v119 = v436;
        *(_QWORD *)(v117 + 8 * v118 + 8) = v437;
        *(_QWORD *)(v117 + 8 * v118) = v119;
        v448[1].i64[1] = v116 + 1;
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v429);
        core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v449);
        v104 = v427;
LABEL_137:
        if ( v442 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v419, v442, 1);
LABEL_139:
        if ( v441 )
        {
          v429[0].i64[1] = 0;
          v429[0].i64[2] = v441;
          v429[0].i64[3] = v445;
          v429[1].i64[1] = 0;
          v429[1].i64[2] = v441;
          v429[1].i64[3] = v445;
          v120 = 1;
        }
        else
        {
          v120 = 0;
          v104 = 0;
        }
        v429[0].i64[0] = v120;
        v429[1].i64[0] = v120;
        v429[2].i64[0] = v104;
        v47 = v429;
        alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v459, v429);
        while ( v459.i64[0] )
        {
          v121 = *(_QWORD *)(v459.i64[0] + 24 * v459.i64[2] + 8);
          if ( v121 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v459.i64[0] + 24 * v459.i64[2] + 16), v121, 1);
          v47 = v429;
          alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v459, v429);
        }
LABEL_58:
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v421, v47, v48, v49);
        goto LABEL_59;
      }
      v422 = &v449;
      v423 = v110;
LABEL_151:
      _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa(
        v429,
        &v422,
        v111,
        v114,
        v112,
        v113,
        v389,
        v390,
        v391);
      v129 = v429[0].i64[0];
      if ( v429[0].i64[0] != v454 )
      {
        v122 = v429[0].i64[2];
        v123 = (void *)v429[0].i64[1];
        v125 = v429[1].i64[0];
        v124 = v429[0].i64[3];
        si128 = _mm_loadu_si128((const __m128i *)&v429[1].u32[2]);
        v127 = v429[1].i64[3];
        v128 = (void *)0x8000000000000000LL;
        goto LABEL_149;
      }
      if ( !v423 )
        goto LABEL_193;
      rusqlite::row::Row::get::h97011a0484b66d6b(v429, &v423, 0, &off_1019641C0);
      v129 = v429[0].i64[0];
      v453 = v429[0].i64[2];
      v123 = (void *)v429[0].i64[1];
      v443[0] = v429[0].u64[3];
      if ( v429[0].i64[0] != v454 )
      {
        v125 = v429[1].i64[0];
        si128 = _mm_loadu_si128((const __m128i *)&v429[1].u32[2]);
        v127 = v429[1].i64[3];
        v128 = (void *)0x8000000000000000LL;
        v122 = v453;
        v124 = v443[0];
        goto LABEL_149;
      }
      rusqlite::row::Row::get::h97011a0484b66d6b(v429, &v423, 1, &off_1019641D8);
      v129 = v429[0].i64[0];
      __s1 = (void *)v429[0].i64[2];
      v130 = v429[0].i64[1];
      v447 = v429[0].i64[3];
      if ( v429[0].i64[0] != v454 )
        break;
      rusqlite::row::Row::get::h97011a0484b66d6b(v429, &v423, 2, &off_1019641F0);
      v122 = v130;
      v129 = v429[0].i64[0];
      v131 = v429[0].i64[3];
      if ( v429[0].i64[0] != v454 )
      {
        v447 = v429[0].i64[2];
        v432 = v429[0].i64[1];
        v125 = v429[1].i64[0];
        si128 = _mm_loadu_si128((const __m128i *)&v429[1].u32[2]);
        v127 = v429[1].i64[3];
        *(__m128i *)v443 = si128;
        epi64 = (void *)v429[0].i64[3];
        if ( v122 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v122, 1);
          v131 = (__int64)epi64;
          si128 = _mm_load_si128((const __m128i *)v443);
        }
        if ( v123 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v453, v123, 1);
          si128 = _mm_load_si128((const __m128i *)v443);
          v128 = (void *)0x8000000000000000LL;
          v123 = (void *)v432;
          v122 = v447;
          v124 = (__int64)epi64;
        }
        else
        {
          v128 = (void *)0x8000000000000000LL;
          v123 = (void *)v432;
          v122 = v447;
          v124 = v131;
        }
        goto LABEL_149;
      }
      if ( v123 != (void *)0x8000000000000001LL )
      {
        si128 = _mm_loadu_si128((const __m128i *)&v429[0].u32[2]);
        v128 = v123;
        v129 = v453;
        v123 = (void *)v443[0];
        v124 = (__int64)__s1;
        v125 = v447;
        v127 = v429[0].i64[3];
        goto LABEL_149;
      }
LABEL_193:
      v28 = v446;
      core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v422);
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v449);
      v143 = v427;
      if ( v442 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v419, v442, 1);
      v429[0].i64[2] = v441;
      v429[0].i64[3] = v445;
      v429[1].i64[2] = v441;
      v429[1].i64[3] = v445;
      v429[0].i128[0] = 1u;
      v429[1].i128[0] = 1u;
      v429[2].i64[0] = v143;
      alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v459, v429);
      while ( v459.i64[0] )
      {
        v146 = *(_QWORD *)(v459.i64[0] + 24 * v459.i64[2] + 8);
        if ( v146 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v459.i64[0] + 24 * v459.i64[2] + 16), v146, 1);
        alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v459, v429);
      }
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v421, v429, v144, v145);
LABEL_59:
      if ( v28 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v435, v28, 1);
      v27 = v26;
      if ( v26 == v439 )
        goto LABEL_209;
    }
    epi64 = (void *)v429[0].i64[1];
    v125 = v429[1].i64[0];
    si128 = _mm_loadu_si128((const __m128i *)&v429[1].u32[2]);
    v127 = v429[1].i64[3];
    if ( v123 )
    {
      *(__m128i *)v443 = si128;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v453, v123, 1);
      si128 = _mm_load_si128((const __m128i *)v443);
    }
    v128 = (void *)0x8000000000000000LL;
    v123 = epi64;
    v122 = (__int64)__s1;
    v124 = v447;
LABEL_149:
    v429[0].i64[0] = (__int64)v128;
    v429[0].i64[1] = v129;
    v429[0].i64[2] = (__int64)v123;
    v429[0].i64[3] = v122;
    v429[1].i64[0] = v124;
    v429[1].i64[1] = v125;
    v429[1].u128[1] = (unsigned __int128)si128;
    v429[2].i64[0] = v127;
    if ( v128 == (void *)0x8000000000000000LL )
    {
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v429[0].u32[2]);
      v25 = (__int64)v429;
      goto LABEL_151;
    }
    v443[0] = v124;
    v453 = v122;
    __s1 = v128;
    v455 = (__int64)v128;
    v456 = (__int64 (__fastcall *)())v129;
    v457 = (__int64)v123;
    v447 = si128.i64[0];
    epi64 = (void *)_mm_extract_epi64(si128, 1);
    v132 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
             "\"subagent\"",
             0xAu,
             epi64);
    v133 = (size_t)__src;
    if ( v132 )
    {
      v25 = (__int64)v429;
LABEL_179:
      if ( v447 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(epi64, v447, 1);
      if ( v453 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v443[0], v453, 1);
      if ( __s1 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v456, __s1, 1);
      goto LABEL_151;
    }
    v134 = v443[0];
    v135 = v125;
    v136 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v443[0], v125);
    v138 = v137;
    if ( v137 < 0 )
    {
      v384 = 0;
      goto LABEL_496;
    }
    v432 = v137;
    if ( v137 )
    {
      __src = v136;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v134, v135);
      v139 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v138, 1);
      v25 = (__int64)v429;
      if ( !v139 )
      {
        v133 = v138;
        v384 = 1;
LABEL_496:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v384, v133);
      }
      v140 = v139;
      memcpy(v139, __src, v138);
      v440.i64[0] = v138;
      __src = v140;
      v440.i64[1] = (__int64)v140;
      v440.i64[2] = v138;
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v458, &v440);
    }
    else
    {
      v440.i64[0] = 0;
      *(__int128 *)((char *)v440.i128 + 8) = 1u;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(1, v136);
      v141 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      v25 = (__int64)v429;
      if ( !v141 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
      *(_DWORD *)((char *)v141 + 3) = 1048147056;
      *v141 = 1886217532;
      v458.i64[0] = 7;
      v458.i64[1] = (__int64)v141;
      v458.i64[2] = 7;
      __src = (void *)1;
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v429, &v455);
    v460.i128[0] = *(__int128 *)((char *)v458.i128 + 8);
    v459.i64[3] = v458.i64[0];
    v459.i128[0] = v429[0].i128[0];
    v459.i64[2] = v429[0].i64[2];
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::hdb333030dc8a6a44(v429, &v400, &v459);
    v142 = (_QWORD *)alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::h809d6a643c9803e7(v429);
    ++*v142;
    if ( v457 == 6 )
    {
      v111 = 1634560353;
      v114 = *(_DWORD *)v456 ^ 0x616D6961u;
      if ( !((unsigned int)v114 | *((unsigned __int16 *)v456 + 2) ^ 0x3169) )
      {
        ++v448[1].i64[2];
        if ( v432 )
        {
          if ( alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h96394139ab5640ec(&__dst[17], &v440) )
            goto LABEL_177;
          ++v448[1].i64[3];
          if ( alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he6183a0b89215d92(&__dst[20], &v440) )
          {
            ++v448[2].i64[1];
            goto LABEL_177;
          }
        }
        else
        {
          *(__m128i *)((char *)&v448[1].u128[1] + 8) = _mm_sub_epi64(
                                                         _mm_loadu_si128((const __m128i *)((char *)&v448[1].u128[1] + 8)),
                                                         (__m128i)-1LL);
        }
        if ( v399 == 0x8000000000000000LL )
          ++v448[2].i64[3];
        else
          ++v448[2].i64[2];
      }
    }
LABEL_177:
    if ( v432 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v432, 1);
    goto LABEL_179;
  }
LABEL_204:
  if ( v439 != v26 )
  {
    v147 = ((_BYTE *)v439 - (_BYTE *)v26) / 0x18uLL;
    v148 = v26 + 1;
    do
    {
      v149 = *(v148 - 1);
      if ( v149 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v148, v149, 1);
      v148 += 3;
      --v147;
    }
    while ( v147 );
  }
LABEL_209:
  if ( (_QWORD)v398 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v398 + 1), 24 * v398, 8);
  v150 = v400;
  if ( (_QWORD)v400 )
    v150 = v401;
  v421[0] = (_QWORD)v400 != 0;
  v421[1] = v400;
  v421[2] = v421[0];
  v421[3] = v400;
  *(_QWORD *)&v421[4] = v150;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h6743891e599eceb9(
    v429,
    v421);
  v151 = v448[0].i64[1];
  for ( m = v448[0].i64[2] + 1; m != 1; --m )
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v151);
    v151 += 32;
  }
  if ( v448[0].i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v448[0].i64[1], 32 * v448[0].i64[0], 8);
  *(__int128 *)((char *)v448[0].i128 + 8) = *(__int128 *)((char *)v429[0].i128 + 8);
  v448[0].i64[0] = v429[0].i64[0];
  qmemcpy(v429, v448, 0x60u);
  v424 = 0;
  v426 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v429[3], &v449);
  v153 = 7;
  v154 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v154 )
    goto LABEL_515;
  *(_DWORD *)((char *)v154 + 3) = 1735355489;
  *v154 = 1635017059;
  v430 = 7;
  v435 = v154;
  *(_QWORD *)&v431 = v154;
  *((_QWORD *)&v431 + 1) = 7;
  v436 = 0;
  *((_QWORD *)&v437 + 1) = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
  v155 = 6;
  v156 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v156 )
    goto LABEL_513;
  *(_WORD *)(v156 + 4) = 29556;
  *(_DWORD *)v156 = 1936291941;
  v455 = 6;
  v456 = (__int64 (__fastcall *)())v156;
  v457 = 6;
  v461.i8[0] = 1;
  v461.i8[1] = __dst[23];
  v157 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v158 = v459.i64[1];
    v159 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v160 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v160;
    *(_OWORD *)(v459.i64[1] + v159 + 16) = v461.i128[1];
    v161 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v158 + v159) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v157 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v157 = &v449;
    v161 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v157, v161);
  v155 = 5;
  v162 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v162 )
    goto LABEL_513;
  *(_BYTE *)(v162 + 4) = 115;
  *(_DWORD *)v162 = 1702132066;
  v455 = 5;
  v456 = (__int64 (__fastcall *)())v162;
  v457 = 5;
  v461.i8[0] = 2 * LOBYTE(__dst[0]);
  v461.i64[1] = 0;
  v461.i64[2] = __dst[1];
  v163 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v164 = v459.i64[1];
    v165 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v166 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v166;
    *(_OWORD *)(v459.i64[1] + v165 + 16) = v461.i128[1];
    v167 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v164 + v165) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v163 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v163 = &v449;
    v167 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v163, v167);
  v155 = 7;
  v168 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v168 )
    goto LABEL_513;
  *(_DWORD *)((char *)v168 + 3) = 1800365427;
  *v168 = 1936875888;
  v455 = 7;
  v456 = (__int64 (__fastcall *)())v168;
  v457 = 7;
  v461.i8[0] = 1;
  v461.i8[1] = BYTE1(__dst[23]);
  v169 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v170 = v459.i64[1];
    v171 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v172 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v172;
    *(_OWORD *)(v459.i64[1] + v171 + 16) = v461.i128[1];
    v173 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v170 + v171) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v169 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v169 = &v449;
    v173 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v169, v173);
  v155 = 9;
  v174 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v174 )
    goto LABEL_513;
  *(_QWORD *)v174 = 0x6F72724564616572LL;
  *(_BYTE *)(v174 + 8) = 114;
  v455 = 9;
  v456 = (__int64 (__fastcall *)())v174;
  v457 = 9;
  if ( __dst[8] == 0x8000000000000000LL )
  {
    v175 = 0;
    goto LABEL_255;
  }
  v155 = __dst[10];
  if ( __dst[10] < 0LL )
  {
    v176 = 0;
    goto LABEL_239;
  }
  v177 = (const void *)__dst[9];
  if ( __dst[10] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
    v176 = 1;
    v178 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v155, 1);
    if ( !v178 )
LABEL_239:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v176, v155);
    v25 = v178;
  }
  else
  {
    v25 = 1;
  }
  memcpy((void *)v25, v177, v155);
  v175 = 3;
LABEL_255:
  v461.i8[0] = v175;
  v461.i64[1] = v155;
  v461.i64[2] = v25;
  v461.i64[3] = v155;
  v183 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v184 = v459.i64[1];
    v185 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v186 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v186;
    *(_OWORD *)(v459.i64[1] + v185 + 16) = v461.i128[1];
    v187 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v184 + v185) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v183 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v183 = &v449;
    v187 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v183, v187);
  v155 = 10;
  v188 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v188 )
    goto LABEL_513;
  qmemcpy(v188, "parseError", 10);
  v455 = 10;
  v456 = (__int64 (__fastcall *)())v188;
  v457 = 10;
  if ( __dst[11] == 0x8000000000000000LL )
  {
    v189 = 0;
    goto LABEL_274;
  }
  v155 = __dst[13];
  if ( __dst[13] < 0LL )
  {
    v190 = 0;
    goto LABEL_264;
  }
  v191 = (const void *)__dst[12];
  if ( __dst[13] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(10, 1);
    v190 = 1;
    v192 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v155, 1);
    if ( !v192 )
LABEL_264:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v190, v155);
    v25 = v192;
  }
  else
  {
    v25 = 1;
  }
  memcpy((void *)v25, v191, v155);
  v189 = 3;
LABEL_274:
  v461.i8[0] = v189;
  v461.i64[1] = v155;
  v461.i64[2] = v25;
  v461.i64[3] = v155;
  v194 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v195 = v459.i64[1];
    v196 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v197 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v197;
    *(_OWORD *)(v459.i64[1] + v196 + 16) = v461.i128[1];
    v198 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v195 + v196) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v194 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v194 = &v449;
    v198 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v194, v198);
  v155 = 10;
  v199 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v199 )
    goto LABEL_513;
  qmemcpy(v199, "modelCount", 10);
  v455 = 10;
  v456 = (__int64 (__fastcall *)())v199;
  v457 = 10;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = __dst[4];
  v200 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v201 = v459.i64[1];
    v202 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v203 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v203;
    *(_OWORD *)(v459.i64[1] + v202 + 16) = v461.i128[1];
    v204 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v201 + v202) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v200 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v200 = &v449;
    v204 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v200, v204);
  v155 = 15;
  v205 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
  if ( !v205 )
    goto LABEL_513;
  qmemcpy(v205, "relayModelCount", 15);
  v455 = 15;
  v456 = (__int64 (__fastcall *)())v205;
  v457 = 15;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = __dst[7];
  v206 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v207 = v459.i64[1];
    v208 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v209 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v209;
    *(_OWORD *)(v459.i64[1] + v208 + 16) = v461.i128[1];
    v210 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v207 + v208) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v206 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v206 = &v449;
    v210 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v206, v210);
  v155 = 10;
  v211 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v211 )
    goto LABEL_513;
  qmemcpy(v211, "modelSlugs", 10);
  v455 = 10;
  v456 = (__int64 (__fastcall *)())v211;
  v457 = 10;
  serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(v448, &__dst[2]);
  if ( v448[0].i8[0] == 6 )
  {
    v459.i64[0] = v448[0].i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v459,
      &off_101964900,
      &off_101964050);
  }
  v461 = v448[0];
  v212 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v213 = v459.i64[1];
    v214 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v215 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v215;
    *(_OWORD *)(v459.i64[1] + v214 + 16) = v461.i128[1];
    v216 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v213 + v214) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v212 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v212 = &v449;
    v216 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v212, v216);
  v155 = 15;
  v217 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
  if ( !v217 )
    goto LABEL_513;
  qmemcpy(v217, "relayModelSlugs", 15);
  v455 = 15;
  v456 = (__int64 (__fastcall *)())v217;
  v457 = 15;
  serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(v448, &__dst[5]);
  if ( v448[0].i8[0] == 6 )
  {
    v459.i64[0] = v448[0].i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v459,
      &off_101964900,
      &off_101964050);
  }
  v461 = v448[0];
  v218 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v219 = v459.i64[1];
    v220 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v221 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v221;
    *(_OWORD *)(v459.i64[1] + v220 + 16) = v461.i128[1];
    v222 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v219 + v220) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v218 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v218 = &v449;
    v222 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v218, v222);
  v155 = 17;
  v223 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
  if ( !v223 )
LABEL_513:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v155);
  qmemcpy(v223, "defaultRelayModel", 17);
  v455 = 17;
  v456 = (__int64 (__fastcall *)())v223;
  v457 = 17;
  if ( __dst[14] == 0x8000000000000000LL )
  {
    v224 = 0;
    goto LABEL_381;
  }
  v155 = __dst[16];
  if ( __dst[16] < 0LL )
  {
    v225 = 0;
    goto LABEL_305;
  }
  v226 = (const void *)__dst[15];
  if ( __dst[16] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1);
    v225 = 1;
    v227 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v155, 1);
    if ( !v227 )
LABEL_305:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v225, v155);
    v25 = v227;
  }
  else
  {
    v25 = 1;
  }
  memcpy((void *)v25, v226, v155);
  v224 = 3;
LABEL_381:
  v461.i8[0] = v224;
  v461.i64[1] = v155;
  v461.i64[2] = v25;
  v461.i64[3] = v155;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v277 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v277;
    *(__m256i *)(v459.i64[1] + 32 * v459.i64[3]) = v461;
    if ( v449.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  v440.i64[1] = v436;
  v440.i128[1] = v437;
  v440.i8[0] = 5;
  v278 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v424, &v430);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v279 = v459.i64[1];
    v280 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v281 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v281;
    *(_OWORD *)(v459.i64[1] + v280 + 16) = v440.i128[1];
    v282 = (__m256i *)v440.i64[1];
    *(_OWORD *)(v279 + v280) = v440.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v278 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v440;
    v278 = &v449;
    v282 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v278, v282);
  v153 = 28;
  v283 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
  if ( !v283 )
    goto LABEL_515;
  qmemcpy(v283, "routerModelCatalogInspection", 28);
  v415 = 28;
  v416 = v283;
  v417 = 28;
  v430 = 0;
  *((_QWORD *)&v431 + 1) = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(28, 1);
  v284 = 5;
  v285 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v285 )
    goto LABEL_514;
  *(_BYTE *)(v285 + 4) = 110;
  *(_DWORD *)v285 = 1634036835;
  v455 = 5;
  v456 = (__int64 (__fastcall *)())v285;
  v457 = 5;
  v286 = v407;
  v287 = v412;
  v461.i8[0] = 1;
  v461.i8[1] = (v407 | v412) == 0;
  v288 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v430, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v289 = v459.i64[1];
    v290 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v291 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v291;
    *(_OWORD *)(v459.i64[1] + v290 + 16) = v461.i128[1];
    v292 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v289 + v290) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v288 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v288 = &v449;
    v292 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v288, v292);
  v284 = 7;
  v293 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v293 )
    goto LABEL_514;
  *(_DWORD *)((char *)v293 + 3) = 1684369006;
  *v293 = 1851876211;
  v455 = 7;
  v456 = (__int64 (__fastcall *)())v293;
  v457 = 7;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = v410;
  v294 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v430, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v295 = v459.i64[1];
    v296 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v297 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v297;
    *(_OWORD *)(v459.i64[1] + v296 + 16) = v461.i128[1];
    v298 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v295 + v296) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v294 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v294 = &v449;
    v298 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v294, v298);
  v284 = 5;
  v299 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v299 )
    goto LABEL_514;
  *(_BYTE *)(v299 + 4) = 100;
  *(_DWORD *)v299 = 1768710518;
  v455 = 5;
  v456 = (__int64 (__fastcall *)())v299;
  v457 = 5;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = v411;
  v300 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v430, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v301 = v459.i64[1];
    v302 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v303 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v303;
    *(_OWORD *)(v459.i64[1] + v302 + 16) = v461.i128[1];
    v304 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v301 + v302) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v300 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v300 = &v449;
    v304 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v300, v304);
  v284 = 7;
  v305 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v305 )
    goto LABEL_514;
  *(_DWORD *)((char *)v305 + 3) = 1684630625;
  *v305 = 1635151465;
  v455 = 7;
  v456 = (__int64 (__fastcall *)())v305;
  v457 = 7;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = v287;
  v306 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v430, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v307 = v459.i64[1];
    v308 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v309 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v309;
    *(_OWORD *)(v459.i64[1] + v308 + 16) = v461.i128[1];
    v310 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v307 + v308) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v306 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v306 = &v449;
    v310 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v306, v310);
  v284 = 12;
  v311 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v311 )
    goto LABEL_514;
  qmemcpy(v311, "missingModel", 12);
  v455 = 12;
  v456 = (__int64 (__fastcall *)())v311;
  v457 = 12;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = v413;
  v312 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v430, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v313 = v459.i64[1];
    v314 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v315 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v315;
    *(_OWORD *)(v459.i64[1] + v314 + 16) = v461.i128[1];
    v316 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v313 + v314) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v312 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v312 = &v449;
    v316 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v312, v316);
  v284 = 10;
  v317 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v317 )
    goto LABEL_514;
  qmemcpy(v317, "readErrors", 10);
  v436 = 10;
  *(_QWORD *)&v437 = v317;
  *((_QWORD *)&v437 + 1) = 10;
  v393[0] = v406;
  v393[1] = v406 + 24 * v286;
  v393[2] = v418;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf46917c0b7a9a673(
    &v455,
    v393);
  serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(v448, &v455);
  if ( v448[0].i8[0] == 6 )
  {
    v459.i64[0] = v448[0].i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v459,
      &off_101964900,
      &off_101964050);
  }
  v461 = v448[0];
  v318 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v430, &v436);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v319 = v459.i64[1];
    v320 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v321 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v321;
    *(_OWORD *)(v459.i64[1] + v320 + 16) = v461.i128[1];
    v322 = v461.i64[1];
    *(_OWORD *)(v319 + v320) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v318 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v318 = &v449;
    v322 = (__int64)v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  v323 = v457;
  if ( v457 )
  {
    v324 = (__m256i **)((char *)v456 + 8);
    do
    {
      v322 = (__int64)*(v324 - 1);
      if ( v322 )
      {
        v318 = *v324;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v324, v322, 1);
      }
      v324 += 3;
      --v323;
    }
    while ( v323 );
  }
  if ( v455 )
  {
    v318 = (__m256i *)v456;
    v322 = 24 * v455;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v456, 24 * v455, 8);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v318, v322);
  v284 = 8;
  v325 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v325 )
LABEL_514:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v284);
  *v325 = 0x73656C706D617865LL;
  v436 = 8;
  *(_QWORD *)&v437 = v325;
  *((_QWORD *)&v437 + 1) = 8;
  v392[0] = v408;
  v392[1] = v408 + 24 * v409;
  v392[2] = v418;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf46917c0b7a9a673(
    &v455,
    v392);
  serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(v448, &v455);
  if ( v448[0].i8[0] == 6 )
  {
    v459.i64[0] = v448[0].i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v459,
      &off_101964900,
      &off_101964050);
  }
  v461 = v448[0];
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v430, &v436);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v326 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v326;
    *(__m256i *)(v459.i64[1] + 32 * v459.i64[3]) = v461;
    if ( v449.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  v327 = v457;
  if ( v457 )
  {
    v328 = (_QWORD *)((char *)v456 + 8);
    do
    {
      v329 = *(v328 - 1);
      if ( v329 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v328, v329, 1);
      v328 += 3;
      --v327;
    }
    while ( v327 );
  }
  if ( v455 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v456, 24 * v455, 8);
  v440.i64[1] = v430;
  v440.i128[1] = v431;
  v440.i8[0] = 5;
  v330 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v424, &v415);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v331 = v459.i64[1];
    v332 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v333 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v333;
    *(_OWORD *)(v459.i64[1] + v332 + 16) = v440.i128[1];
    v334 = (__m256i *)v440.i64[1];
    *(_OWORD *)(v331 + v332) = v440.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v330 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v440;
    v330 = &v449;
    v334 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v330, v334);
  v153 = 41;
  v335 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(41, 1);
  if ( !v335 )
    goto LABEL_515;
  qmemcpy(v335, "activeMainThreadProviderModelDistribution", 41);
  v440.i64[0] = 41;
  v440.i64[1] = (__int64)v335;
  v440.i64[2] = 41;
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(v448, v429);
  if ( v448[0].i8[0] == 6 )
  {
    v459.i64[0] = v448[0].i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v459,
      &off_101964900,
      &off_101964050);
  }
  v461 = v448[0];
  v336 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v424, &v440);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v337 = v459.i64[1];
    v338 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v339 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v339;
    *(_OWORD *)(v459.i64[1] + v338 + 16) = v461.i128[1];
    v340 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v337 + v338) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v336 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v336 = &v449;
    v340 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v336, v340);
  v153 = 20;
  v341 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1);
  if ( !v341 )
    goto LABEL_515;
  qmemcpy(v341, "routerModelRemapPlan", 20);
  v430 = 20;
  *(_QWORD *)&v431 = v341;
  *((_QWORD *)&v431 + 1) = 20;
  v436 = 0;
  *((_QWORD *)&v437 + 1) = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1);
  v342 = 13;
  v343 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v343 )
    goto LABEL_516;
  qmemcpy(v343, "routerThreads", 13);
  v455 = 13;
  v456 = (__int64 (__fastcall *)())v343;
  v457 = 13;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = v429[1].i64[2];
  v344 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v345 = v459.i64[1];
    v346 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v347 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v347;
    *(_OWORD *)(v459.i64[1] + v346 + 16) = v461.i128[1];
    v348 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v345 + v346) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v344 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v344 = &v449;
    v348 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v344, v348);
  v342 = 19;
  v349 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
  if ( !v349 )
    goto LABEL_516;
  qmemcpy(v349, "invalidModelThreads", 19);
  v455 = 19;
  v456 = (__int64 (__fastcall *)())v349;
  v457 = 19;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = v429[1].i64[3];
  v350 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v351 = v459.i64[1];
    v352 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v353 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v353;
    *(_OWORD *)(v459.i64[1] + v352 + 16) = v461.i128[1];
    v354 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v351 + v352) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v350 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v350 = &v449;
    v354 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v350, v354);
  v355 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
  if ( !v355 )
    goto LABEL_516;
  qmemcpy(v355, "missingModelThreads", 19);
  v455 = 19;
  v456 = (__int64 (__fastcall *)())v355;
  v457 = 19;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = v429[2].i64[0];
  v356 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v357 = v459.i64[1];
    v358 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v359 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v359;
    *(_OWORD *)(v459.i64[1] + v358 + 16) = v461.i128[1];
    v360 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v357 + v358) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v356 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v356 = &v449;
    v360 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v356, v360);
  v342 = 23;
  v361 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
  if ( !v361 )
    goto LABEL_516;
  qmemcpy(v361, "autoMappableByBareModel", 23);
  v455 = 23;
  v456 = (__int64 (__fastcall *)())v361;
  v457 = 23;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = v429[2].i64[1];
  v362 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v363 = v459.i64[1];
    v364 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v365 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v365;
    *(_OWORD *)(v459.i64[1] + v364 + 16) = v461.i128[1];
    v366 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v363 + v364) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v362 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v362 = &v449;
    v366 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v362, v366);
  v342 = 12;
  v367 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v367 )
    goto LABEL_516;
  qmemcpy(v367, "fallbackOnly", 12);
  v455 = 12;
  v456 = (__int64 (__fastcall *)())v367;
  v457 = 12;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = v429[2].i64[2];
  v368 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v369 = v459.i64[1];
    v370 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v371 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v371;
    *(_OWORD *)(v459.i64[1] + v370 + 16) = v461.i128[1];
    v372 = (__m256i *)v461.i64[1];
    *(_OWORD *)(v369 + v370) = v461.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v368 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    v368 = &v449;
    v372 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v368, v372);
  v342 = 10;
  v373 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v373 )
LABEL_516:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v342);
  qmemcpy(v373, "unresolved", 10);
  v455 = 10;
  v456 = (__int64 (__fastcall *)())v373;
  v457 = 10;
  v461.i8[0] = 2;
  v461.i64[1] = 0;
  v461.i64[2] = v429[2].i64[3];
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v436, &v455);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v374 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v374;
    *(__m256i *)(v459.i64[1] + 32 * v459.i64[3]) = v461;
    if ( v449.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  v440.i64[1] = v436;
  v440.i128[1] = v437;
  v440.i8[0] = 5;
  v375 = &v459;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v424, &v430);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v376 = v459.i64[1];
    v377 = 32 * v459.i64[3];
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v378 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v378;
    *(_OWORD *)(v459.i64[1] + v377 + 16) = v440.i128[1];
    v379 = (__m256i *)v440.i64[1];
    *(_OWORD *)(v376 + v377) = v440.i128[0];
    if ( v449.i8[0] != 6 )
    {
      v375 = &v449;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
    }
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v440;
    v375 = &v449;
    v379 = v448;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v375, v379);
  v153 = 10;
  v380 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v380 )
LABEL_515:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v153);
  qmemcpy(v380, "readErrors", 10);
  v440.i64[0] = 10;
  v440.i64[1] = (__int64)v380;
  v440.i64[2] = 10;
  serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(v448, (char *)&v429[0].u128[1] + 8);
  if ( v448[0].i8[0] == 6 )
  {
    v459.i64[0] = v448[0].i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v459,
      &off_101964900,
      &off_101964050);
  }
  v461 = v448[0];
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v459, &v424, &v440);
  if ( v459.i64[0] == 0x8000000000000000LL )
  {
    v449.i128[1] = *(_OWORD *)(v459.i64[1] + 32 * v459.i64[3] + 16);
    v381 = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3]);
    v449.i64[1] = *(_QWORD *)(v459.i64[1] + 32 * v459.i64[3] + 8);
    v449.i64[0] = v381;
    *(__m256i *)(v459.i64[1] + 32 * v459.i64[3]) = v461;
    if ( v449.i8[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v449);
  }
  else
  {
    v448[1].i64[2] = v460.i64[2];
    v448[1].i128[0] = v460.i128[0];
    v448[0] = v459;
    v458 = v461;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v449,
      v448,
      &v458);
  }
  v382 = v414;
  *(_QWORD *)(v414 + 24) = v426;
  v383 = v424;
  *(_QWORD *)(v382 + 16) = v425;
  *(_QWORD *)(v382 + 8) = v383;
  *(_BYTE *)v382 = 5;
  core::ptr::drop_in_place$LT$codexmate_lib..core..debug_bundle..ThreadCatalogHealth$GT$::h8e5be603518a07fc(v429);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogInspection$GT$::h5aea47d90a3b05a1(&v405);
  result = core::ptr::drop_in_place$LT$codexmate_lib..core..debug_bundle..CatalogSlugIndex$GT$::h4a1fa9349ba8e668(__dst);
  if ( v402 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v403, v402, 1);
  return result;
}
