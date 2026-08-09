// __ZN13codexmate_lib4core5relay16codex_diagnostic7fix_all @ 0x100515450 | 基线 same-set
// [FULL hexrays]

_QWORD *__fastcall codexmate_lib::core::relay::codex_diagnostic::fix_all::h6d81f868efc23743(
        _QWORD *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  void (**v8)(void); // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  const __m128i *v20; // r13
  __int64 v21; // rcx
  void *v22; // r12
  unsigned __int64 v23; // rax
  __m128i v24; // xmm2
  __int64 v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdi
  _QWORD *v35; // r9
  __int64 v36; // r14
  unsigned __int64 v37; // rax
  __int64 v38; // r14
  const __m128i *v40; // r13
  const __m128i *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // r14
  const __m128i *v45; // r12
  int v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rsi
  int v50; // ecx
  __int64 v51; // r9
  __int64 v52; // r13
  const void *v53; // rbx
  __int64 v54; // r14
  size_t v55; // r15
  __int64 v56; // r12
  __int64 v57; // r9
  __int64 v58; // r13
  const void *v59; // rbx
  __int64 v60; // r14
  size_t v61; // r15
  __int64 v62; // rbx
  __int64 v63; // r14
  _QWORD *v64; // r15
  __int64 v65; // rsi
  _QWORD *v67; // rcx
  const __m128i *v68; // rbx
  __int64 v69; // r13
  int v71; // r12d
  __int64 v72; // rax
  __int64 v73; // rsi
  void *v74; // rax
  void *v75; // r14
  size_t v76; // r15
  __int64 v77; // rax
  __int64 v78; // rcx
  char *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdx
  unsigned __int64 v84; // rax
  __m128i v85; // xmm0
  __int64 v86; // rcx
  __m128i si128; // xmm2
  __m128i v88; // xmm3
  __int64 v89; // rax
  __m128i v90; // xmm4
  __int64 v92; // rsi
  __m128i v93; // xmm6
  __int64 v94; // r9
  __int64 v95; // r13
  const void *v96; // rbx
  __int64 v97; // r14
  size_t v98; // r15
  __int64 v99; // r12
  __int64 v100; // r9
  __int64 v101; // r13
  const void *v102; // rbx
  __int64 v103; // r14
  size_t v104; // r15
  size_t v105; // r12
  __int64 v106; // r9
  __int64 v107; // r13
  const void *v108; // rbx
  __int64 v109; // r14
  size_t v110; // r15
  void *v111; // rax
  void *v112; // r14
  size_t v113; // r15
  __int64 v114; // rax
  __int64 v115; // rcx
  char *v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdx
  unsigned __int64 v121; // rax
  __m128i v122; // xmm0
  __int64 v123; // rcx
  __m128i v124; // xmm2
  __m128i v125; // xmm3
  __int64 v126; // rax
  __m128i v127; // xmm4
  __int64 v129; // rsi
  __m128i v130; // xmm6
  __int64 v131; // r9
  __int64 v132; // r13
  const void *v133; // rbx
  __int64 v134; // r14
  size_t v135; // r15
  __int64 v136; // r12
  __int64 v137; // r9
  __int64 v138; // r13
  const void *v139; // rbx
  __int64 v140; // r14
  size_t v141; // r15
  size_t v142; // r12
  __int64 v143; // r9
  __int64 v144; // r13
  const void *v145; // rbx
  __int64 v146; // r14
  size_t v147; // r15
  void *v148; // rax
  void *v149; // r14
  size_t v150; // r15
  __int64 v151; // rax
  __int64 v152; // rcx
  char *v153; // rbx
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdx
  unsigned __int64 v157; // rax
  __m128i v158; // xmm0
  __int64 v159; // rcx
  __m128i v160; // xmm2
  __m128i v161; // xmm3
  unsigned __int64 v163; // rax
  __m128i v164; // xmm4
  __int64 v166; // rdi
  __int64 v167; // rsi
  __m128i v168; // xmm6
  int v169; // esi
  bool v170; // zf
  __m128i *v171; // rsi
  int v172; // r14d
  void *v173; // rax
  void *v174; // r12
  __int64 v175; // r15
  __int64 v176; // rax
  __int64 v177; // rcx
  __int64 v178; // rdx
  __int64 v179; // r15
  __int64 v180; // rax
  __int64 v181; // rcx
  char *v182; // r15
  __int64 v183; // rcx
  __int64 v184; // rdx
  __int64 v185; // rsi
  void *v186; // rax
  void *v187; // r14
  size_t v188; // r15
  __int64 v189; // rax
  __int64 v190; // rcx
  char *v191; // rbx
  __int64 v192; // rax
  __int64 v193; // rcx
  __int64 v194; // rdx
  unsigned __int64 v195; // rax
  __m128i v196; // xmm0
  __int64 v197; // rcx
  __m128i v198; // xmm2
  __m128i v199; // xmm3
  unsigned __int64 v201; // rax
  __m128i v202; // xmm4
  __int64 v204; // rdi
  __int64 v205; // rsi
  __m128i v206; // xmm6
  int v207; // esi
  __m128i *v208; // rsi
  void *v209; // rax
  __int64 v210; // rbx
  __int64 v211; // rax
  __int64 v212; // rcx
  __int64 v213; // rdx
  __int64 v214; // rbx
  __int64 v215; // rax
  __int64 v216; // rcx
  char *v217; // rbx
  __int64 v218; // rcx
  __int64 v219; // rdx
  __int64 v220; // rsi
  void *v221; // rax
  void *v222; // r14
  size_t v223; // r15
  __int64 v224; // rax
  __int64 v225; // rcx
  char *v226; // rbx
  __int64 v227; // rax
  __int64 v228; // rcx
  __int64 v229; // rdx
  unsigned __int64 v230; // rax
  __m128i v231; // xmm0
  __int64 v232; // rcx
  __m128i v233; // xmm2
  __m128i v234; // xmm3
  unsigned __int64 v236; // rax
  __m128i v237; // xmm4
  __int64 v239; // rdi
  __int64 v240; // rsi
  __m128i v241; // xmm6
  int v242; // esi
  __m128i *v243; // rsi
  void *v244; // rax
  __int64 v245; // rbx
  __int64 v246; // rax
  __int64 v247; // rcx
  __int64 v248; // rdx
  __int64 v249; // rbx
  __int64 v250; // rax
  __int64 v251; // rcx
  char *v252; // rbx
  __int64 v253; // rcx
  __int64 v254; // rdx
  __int64 v255; // rsi
  void *v256; // rax
  void *v257; // r14
  size_t v258; // r15
  __int64 v259; // rax
  __int64 v260; // rcx
  char *v261; // rbx
  __int64 v262; // rax
  __int64 v263; // rcx
  __int64 v264; // rdx
  unsigned __int64 v265; // rax
  __m128i v266; // xmm0
  __int64 v267; // rcx
  unsigned __int64 v269; // rax
  __m128i v270; // xmm2
  __m128i v271; // xmm3
  __int64 v273; // rdi
  __int64 v274; // rsi
  int v275; // esi
  void *v276; // rsi
  int v277; // r13d
  void *v278; // rax
  void *v279; // r12
  __int64 v280; // r15
  __int64 v281; // rax
  __int64 v282; // rcx
  __int64 v283; // rdx
  __int64 v284; // r15
  __int64 v285; // rax
  __int64 v286; // rcx
  char *v287; // r15
  __int64 v288; // rcx
  __int64 v289; // rdx
  __int64 v290; // rsi
  void *v291; // rax
  void *v292; // r14
  size_t v293; // r15
  __int64 v294; // rax
  __int64 v295; // rcx
  char *v296; // rbx
  __int64 v297; // rax
  __int64 v298; // rcx
  __int64 v299; // rdx
  unsigned __int64 v301; // rax
  const __m128i *v302; // r12
  __int64 v303; // r13
  __m128i v304; // xmm0
  __int8 *v305; // r15
  __int64 v306; // rcx
  __m128i v307; // xmm2
  __m128i v308; // xmm3
  unsigned __int64 v309; // rax
  __m128i v310; // xmm4
  __int64 v312; // rsi
  const __m128i *v313; // rsi
  __m128i v314; // xmm6
  __int64 v315; // rbx
  void *v316; // rax
  void *v317; // r14
  __int64 *v318; // rdi
  __int64 v319; // rbx
  __int64 v320; // rax
  __int64 v321; // rcx
  __int64 v322; // rdx
  __int64 v323; // rsi
  __int64 v324; // rbx
  __int64 v325; // rax
  __int64 v326; // rcx
  _QWORD *v327; // rax
  _QWORD *v328; // r14
  char *v329; // rbx
  __int64 v330; // rax
  __int64 v331; // rcx
  unsigned __int64 v333; // rax
  __m128i v334; // xmm0
  __int64 v335; // rcx
  unsigned __int64 v336; // rax
  __m128i v337; // xmm2
  __int64 v339; // rsi
  __m128i v340; // xmm4
  unsigned __int64 v342; // rax
  __int64 v343; // rcx
  unsigned __int64 v344; // rax
  __m128i v345; // xmm4
  __int64 v347; // rsi
  __m128i v348; // xmm6
  unsigned __int64 v350; // rax
  __m128i v351; // xmm0
  __int64 i; // rcx
  unsigned __int64 v353; // rax
  __m128i v354; // xmm2
  __int64 v356; // rsi
  __m128i v357; // xmm3
  __int64 v358; // rsi
  __m128i v359; // xmm4
  void *v360; // rax
  void *v361; // r14
  __int64 v362; // rbx
  __int64 v363; // rax
  __int64 v364; // rcx
  __int64 v365; // rdx
  __int64 v366; // rbx
  __int64 v367; // rax
  __int64 v368; // rcx
  __int64 *v370; // rdi
  unsigned __int64 v371; // rax
  __int64 v372; // rcx
  unsigned __int64 v373; // rax
  __m128i v374; // xmm4
  __int64 v376; // rsi
  __int64 v377; // rsi
  __m128i v378; // xmm6
  void *v379; // rax
  void *v380; // r14
  __int64 v381; // rbx
  __int64 v382; // rax
  __int64 v383; // rcx
  __int64 v384; // rdx
  __int64 v385; // rbx
  __int64 v386; // rax
  __int64 v387; // rcx
  _QWORD *v388; // rax
  _QWORD *v389; // r14
  char *v390; // rbx
  __int64 v391; // rax
  __int64 v392; // rcx
  size_t v393; // rsi
  __int64 v394; // r15
  __int64 v395; // r14
  __int64 v396; // rax
  __int64 v397; // rcx
  __int64 v398; // rdx
  const void *v399; // rbx
  size_t v400; // r13
  __int64 v401; // r12
  __int64 v402; // rcx
  __int64 v403; // rax
  __int64 v404; // r12
  __int64 v405; // r14
  int v406; // eax
  __int64 v407; // rdx
  size_t v408; // rbx
  __int64 v409; // rax
  char *v410; // rbx
  char *v411; // rbx
  __int64 v412; // rax
  __int64 v413; // rcx
  __int64 v414; // rdx
  const __m128i *v415; // rbx
  size_t v416; // r14
  __int64 v417; // rax
  __int64 v418; // rcx
  __int64 v419; // rdx
  __int64 v420; // r15
  size_t v421; // r14
  const void *v422; // r12
  size_t v423; // r13
  __int64 v424; // rbx
  __int64 v425; // rbx
  size_t v426; // r14
  unsigned __int64 v427; // rcx
  __int64 v428; // rax
  __int64 v429; // rdx
  __int64 v430; // rax
  __int64 v431; // r15
  __int64 v432; // r14
  __m128i v433; // xmm2
  __int64 v435; // rax
  size_t v436; // rdx
  size_t v437; // rbx
  __int64 v438; // r12
  const void *v439; // r15
  int v440; // eax
  const void *v441; // rcx
  size_t v442; // r12
  const __m128i *v443; // rdx
  __int64 v444; // rsi
  __m128i v445; // xmm1
  __int64 j; // r8
  __int64 v447; // r14
  __int64 v448; // r9
  __int64 v449; // r13
  const void *v450; // rbx
  __int64 v451; // r14
  __int64 v452; // r12
  __int64 v453; // r9
  __int64 v454; // r13
  const void *v455; // rbx
  __int64 v456; // r14
  size_t v457; // r12
  __int64 v458; // r9
  __int64 v459; // r13
  const void *v460; // rbx
  __int64 v461; // r14
  char *v462; // r12
  signed __int64 v463; // r14
  const void *v464; // rbx
  __int64 v465; // rax
  size_t v466; // rbx
  __int64 v467; // rax
  __int64 v468; // rcx
  char *v469; // rbx
  __int64 v470; // rax
  __int64 v471; // rcx
  __int64 v472; // rdx
  const void *v473; // rbx
  unsigned __int64 v474; // rax
  __int8 *v475; // r13
  _QWORD *v476; // rax
  __int64 v477; // rbx
  _QWORD *v478; // r14
  __int64 v479; // rsi
  __int64 v481; // rbx
  const __m128i *v482; // r15
  const __m128i *v484; // r12
  int v485; // r13d
  __int64 v486; // rax
  __int64 v487; // rsi
  __int64 v488; // rdi
  __int64 v489; // [rsp+8h] [rbp-348h]
  __m128i v490; // [rsp+10h] [rbp-340h] BYREF
  __int64 v491; // [rsp+20h] [rbp-330h] BYREF
  __int64 v492; // [rsp+28h] [rbp-328h]
  __int64 v493; // [rsp+30h] [rbp-320h]
  _QWORD v494[3]; // [rsp+40h] [rbp-310h] BYREF
  _QWORD v495[3]; // [rsp+58h] [rbp-2F8h] BYREF
  _QWORD v496[3]; // [rsp+70h] [rbp-2E0h] BYREF
  _QWORD v497[3]; // [rsp+88h] [rbp-2C8h] BYREF
  _QWORD v498[3]; // [rsp+A0h] [rbp-2B0h] BYREF
  _QWORD v499[3]; // [rsp+B8h] [rbp-298h] BYREF
  _QWORD v500[3]; // [rsp+D0h] [rbp-280h] BYREF
  _QWORD v501[3]; // [rsp+E8h] [rbp-268h] BYREF
  _QWORD v502[3]; // [rsp+100h] [rbp-250h] BYREF
  _QWORD v503[3]; // [rsp+118h] [rbp-238h] BYREF
  __m128i v504; // [rsp+130h] [rbp-220h] BYREF
  char *v505; // [rsp+140h] [rbp-210h] BYREF
  size_t v506; // [rsp+148h] [rbp-208h] BYREF
  __int64 v507; // [rsp+150h] [rbp-200h]
  __int64 v508; // [rsp+158h] [rbp-1F8h]
  size_t v509; // [rsp+160h] [rbp-1F0h]
  _QWORD *v510; // [rsp+168h] [rbp-1E8h]
  __int64 v511; // [rsp+170h] [rbp-1E0h]
  signed __int64 v512; // [rsp+178h] [rbp-1D8h]
  __int64 v513[12]; // [rsp+180h] [rbp-1D0h] BYREF
  const __m128i *v514; // [rsp+1E0h] [rbp-170h] BYREF
  __int64 v515; // [rsp+1E8h] [rbp-168h]
  __int64 v516; // [rsp+1F0h] [rbp-160h]
  __int64 v517; // [rsp+1F8h] [rbp-158h]
  _QWORD v518[2]; // [rsp+200h] [rbp-150h] BYREF
  unsigned __int64 v519; // [rsp+210h] [rbp-140h]
  __m128i *v520; // [rsp+218h] [rbp-138h]
  _QWORD v521[12]; // [rsp+220h] [rbp-130h] BYREF
  __m128i v522; // [rsp+280h] [rbp-D0h] BYREF
  __int64 v523; // [rsp+298h] [rbp-B8h] BYREF
  __int64 v524; // [rsp+2A0h] [rbp-B0h]
  __int64 v525; // [rsp+2A8h] [rbp-A8h]
  const __m128i *v526; // [rsp+2B0h] [rbp-A0h]
  __int64 v527; // [rsp+2B8h] [rbp-98h] BYREF
  __int64 v528; // [rsp+2C0h] [rbp-90h]
  __int64 v529; // [rsp+2C8h] [rbp-88h]
  size_t __n; // [rsp+2D0h] [rbp-80h]
  __int64 v531; // [rsp+2D8h] [rbp-78h] BYREF
  __int64 v532; // [rsp+2E0h] [rbp-70h]
  size_t v533; // [rsp+2E8h] [rbp-68h]
  __int64 v534; // [rsp+2F0h] [rbp-60h] BYREF
  __int64 v535; // [rsp+2F8h] [rbp-58h]
  __int64 v536; // [rsp+300h] [rbp-50h]
  __int64 (__fastcall *v537)(_QWORD, _QWORD); // [rsp+308h] [rbp-48h]
  char *v538; // [rsp+310h] [rbp-40h] BYREF
  __int64 v539; // [rsp+318h] [rbp-38h]
  char *v540; // [rsp+320h] [rbp-30h]

  LODWORD(v511) = a6;
  v507 = a5;
  v508 = a4;
  v510 = a1;
  v520 = (__m128i *)a2;
  v519 = a3;
  codexmate_lib::core::relay::codex_diagnostic::run_diagnostics_with_mode::h30a2ac42c421fd0d(&v491, a2, a3, 0);
  v6 = v492;
  v7 = v493;
  v8 = &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v12 = v9;
  if ( *(_BYTE *)(v9 + 16) == 1 )
  {
    v13 = *(_QWORD *)v9;
    v14 = *(_QWORD *)(v12 + 8);
  }
  else
  {
    v13 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            a2,
            v10,
            v11);
    *(_QWORD *)v12 = v13;
    *(_QWORD *)(v12 + 8) = v14;
    *(_BYTE *)(v12 + 16) = 1;
  }
  *(_QWORD *)v12 = v13 + 1;
  memset(&v521[1], 0, 24);
  v521[0] = &xmmword_1015FBEC0;
  v521[4] = v13;
  for ( v521[5] = v14; v7; --v7 )
  {
    if ( *(_BYTE *)(v6 + 96) == 1
      && (*(_QWORD *)(v6 + 40) != 2 || **(_WORD **)(v6 + 32) != *(_WORD *)"okfirstTokenMstotalMserror") )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v513, v6);
      v8 = (void (**)(void))v521;
      a2 = (const __m128i *)v513;
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v521, v513);
    }
    v6 += 104;
  }
  v518[1] = v521[5];
  v518[0] = v521[4];
  v517 = v521[3];
  v516 = v521[2];
  v515 = v521[1];
  v514 = (const __m128i *)v521[0];
  if ( !v521[3] )
  {
    v534 = 0;
    v535 = 8;
    v536 = 0;
    v513[0] = 0;
    v513[1] = 8;
    v513[2] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, a2);
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v27 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v28 = (_QWORD *)v27;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
    if ( !v29 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
    *(_QWORD *)(v29 + 24) = 0xA4E5AEBFE4809CE9LL;
    *(_QWORD *)(v29 + 16) = 0xA097E68CBCEFB8B8LL;
    *(_QWORD *)(v29 + 8) = 0xE5A3ADE6AE9BE7B9LL;
    *(_QWORD *)v29 = 0xA1E9899CE68089E6LL;
    *(_BYTE *)(v29 + 32) = -115;
    *v28 = 33;
    v28[1] = v29;
    v28[2] = 33;
    v30 = v536;
    v521[2] = v536;
    v31 = v534;
    v32 = v535;
    v521[1] = v535;
    v521[0] = v534;
    v33 = v513[0];
    v34 = v513[1];
    v521[3] = v513[0];
    v521[4] = v513[1];
    v521[5] = v513[2];
    v35 = v510;
    v510[6] = v513[2];
    v35[5] = v34;
    v35[4] = v33;
    v35[3] = v30;
    v35[2] = v32;
    v35[1] = v31;
    v35[7] = 1;
    v35[8] = v28;
    v35[9] = 1;
    *v35 = 11;
    v36 = v515;
    if ( !v515 )
      goto LABEL_24;
    goto LABEL_22;
  }
  v522.i64[0] = v521[3];
  HIDWORD(_RAX) = HIDWORD(v514);
  v526 = v514;
  if ( !(_BYTE)v511 )
  {
    v40 = v526;
    _ECX = ~_mm_movemask_epi8(_mm_load_si128(v526));
    v42 = v526 + 1;
    v43 = 1;
    v44 = v522.i64[0];
    v45 = v526 + 1;
    do
    {
      if ( !v43 )
        goto LABEL_12;
      if ( !(_WORD)_ECX )
      {
        do
        {
          v50 = _mm_movemask_epi8(_mm_load_si128(v45));
          v40 -= 24;
          ++v45;
        }
        while ( v50 == 0xFFFF );
        _ECX = ~v50;
      }
      __asm { tzcnt   eax, ecx }
      v46 = _ECX & (_ECX - 1);
      v47 = -3 * _RAX;
      --v44;
      v48 = v40[-1].i64[v47];
      v49 = v40->i64[v47 - 1];
      LOBYTE(_RAX) = codexmate_lib::core::relay::codex_diagnostic::fix_requires_quiet_window::h450b49c01f430cd0(
                       v48,
                       v49);
      _ECX = v46;
      v43 = v44;
    }
    while ( (_RAX & 1) == 0 );
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, v49);
    _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1);
    if ( !_RAX )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 59);
    qmemcpy((void *)_RAX, "diagnostic fix-all requires a verified ChatGPT quiet window", 59);
    v67 = v510;
    *v510 = 10;
    v67[1] = 59;
    v67[2] = _RAX;
    v67[3] = 59;
    v36 = v515;
    v68 = v526;
    v69 = v522.i64[0];
    if ( !v515 )
      goto LABEL_24;
    _R12D = ~_mm_movemask_epi8(_mm_load_si128(v526));
    do
    {
      if ( !(_WORD)_R12D )
      {
        do
        {
          v71 = _mm_movemask_epi8(_mm_load_si128(v42));
          v68 -= 24;
          ++v42;
        }
        while ( v71 == 0xFFFF );
        _R12D = ~v71;
      }
      __asm { tzcnt   eax, r12d }
      v72 = -3 * _RAX;
      v73 = *((_QWORD *)&v68[-1] + v72 - 1);
      if ( v73 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68[-1].i64[v72], v73, 1);
      --v69;
      _RAX = _R12D & (unsigned int)(_R12D - 1);
      _R12D &= _R12D - 1;
    }
    while ( v69 );
LABEL_22:
    v37 = (24 * v36 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v38 = v37 + v36 + 17;
    if ( v38 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v514 - v37, v38, 16);
    goto LABEL_24;
  }
LABEL_12:
  v527 = 0;
  v528 = 8;
  v529 = 0;
  v531 = 0;
  v532 = 8;
  v533 = 0;
  v538 = nullptr;
  v539 = 8;
  v540 = nullptr;
  v523 = 0;
  v524 = 8;
  v525 = 0;
  _RSI = (unsigned __int64)&anon_92869709a5e99ce1936aa4e326b6c562_374;
  v17 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, &anon_92869709a5e99ce1936aa4e326b6c562_374, 14);
  v18 = v515;
  v19 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v17 >> 57), (__m128i)0LL);
  v20 = v526;
  __n = (size_t)&v526[-2].u64[1];
  v21 = 0;
  LODWORD(v22) = 1734702190;
  for ( v522.i64[0] = v515; ; v18 = v522.i64[0] )
  {
    v23 = v18 & v17;
    v24 = _mm_loadu_si128((const __m128i *)((char *)v526 + v23));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v24, v19));
    if ( _EDX )
      break;
LABEL_17:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v24, (__m128i)-1LL)) )
      goto LABEL_64;
    v17 = v23 + v21 + 16;
    v21 += 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   esi, edx }
    v26 = -3LL * (v522.i64[0] & (v23 + _RSI));
    if ( *(_QWORD *)(__n + 8 * v26 + 16) == 14
      && !(**(_QWORD **)(__n + 8 * v26 + 8) ^ 0x746E695F68747561LL
         | *(_QWORD *)(*(_QWORD *)(__n + 8 * v26 + 8) + 6LL) ^ 0x797469726765746ELL) )
    {
      break;
    }
    _RSI = (unsigned int)(_EDX - 1);
    LOWORD(_RSI) = _EDX & (_EDX - 1);
    _EDX = _RSI;
    if ( !(_WORD)_RSI )
      goto LABEL_17;
  }
  codexmate_lib::core::relay::codex_diagnostic::fix_auth_integrity::hd25994f874548912(v513, (__int64)v520);
  if ( LODWORD(v513[0]) == 11 )
  {
    qmemcpy(v521, &v513[1], 0x48u);
    v52 = v521[0];
    v53 = (const void *)v521[1];
    v54 = v521[2];
    v55 = 24LL * v521[2];
    v534 = v521[1];
    v536 = v521[0];
    v535 = v521[1];
    v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[1] + 24LL * v521[2]);
    v56 = v529;
    if ( v521[2] > (unsigned __int64)(v527 - v529) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v527,
        v529,
        v521[2],
        8,
        24,
        v51);
      v56 = v529;
    }
    memcpy((void *)(v528 + 24 * v56), v53, v55);
    v529 = v56 + v54;
    if ( v52 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, 24 * v52, 8);
    v58 = v521[6];
    v59 = (const void *)v521[7];
    v60 = v521[8];
    v61 = 24LL * v521[8];
    v534 = v521[7];
    v536 = v521[6];
    v535 = v521[7];
    v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[7] + 24LL * v521[8]);
    v22 = v540;
    if ( v521[8] > (unsigned __int64)(v538 - v540) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v538,
        v540,
        v521[8],
        8,
        24,
        v57);
      v22 = v540;
    }
    memcpy((void *)(v539 + 24LL * (_QWORD)v22), v59, v61);
    v540 = (char *)v22 + v60;
    if ( v58 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, 24 * v58, 8);
    v62 = v521[4];
    v63 = v521[5];
    v20 = v526;
    if ( v521[5] )
    {
      v64 = (_QWORD *)(v521[4] + 8LL);
      do
      {
        v65 = *(v64 - 1);
        if ( v65 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v64, v65, 1);
        v64 += 3;
        --v63;
      }
      while ( v63 );
    }
    if ( v521[3] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, 24LL * v521[3], 8);
  }
  else
  {
    qmemcpy(v521, v513, sizeof(v521));
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v522, &v514);
    v74 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
    if ( !v74 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14);
    v75 = v74;
    qmemcpy(v74, "auth_integrity", 14);
    v76 = v533;
    if ( v533 == v531 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v531);
    v77 = v532;
    v78 = 3 * v76;
    *(_QWORD *)(v532 + 8 * v78) = 14;
    *(_QWORD *)(v77 + 8 * v78 + 8) = v75;
    *(_QWORD *)(v77 + 8 * v78 + 16) = 14;
    v533 = v76 + 1;
    v534 = (__int64)v521;
    v535 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v503, &unk_1017C1033, &v534);
    v79 = v540;
    if ( v540 == v538 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v80 = v539;
    v81 = 3LL * (_QWORD)v79;
    *(_QWORD *)(v539 + 8 * v81 + 16) = v503[2];
    v82 = v503[0];
    *(_QWORD *)(v80 + 8 * v81 + 8) = v503[1];
    *(_QWORD *)(v80 + 8 * v81) = v82;
    v540 = v79 + 1;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v521);
  }
LABEL_64:
  _RSI = (unsigned __int64)&anon_92869709a5e99ce1936aa4e326b6c562_610;
  v84 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, &anon_92869709a5e99ce1936aa4e326b6c562_610, 26);
  v85 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v84 >> 57), (__m128i)0LL);
  v86 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBB90);
  v88 = _mm_load_si128((const __m128i *)&xmmword_1015FBBA0);
  while ( 1 )
  {
    v89 = v522.i64[0] & v84;
    v90 = _mm_loadu_si128((const __m128i *)((char *)v20 + v89));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v90, v85));
    if ( _EDX )
      break;
LABEL_69:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v90, (__m128i)-1LL)) )
      goto LABEL_91;
    v84 = v89 + v86 + 16;
    v86 += 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   esi, edx }
    v92 = -3LL * (v522.i64[0] & (v89 + _RSI));
    if ( *(_QWORD *)(__n + 8 * v92 + 16) == 26 )
    {
      v93 = _mm_or_si128(
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(__n + 8 * v92 + 8) + 10LL)), si128),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(__n + 8 * v92 + 8)), v88));
      if ( _mm_testz_si128(v93, v93) )
        break;
    }
    _RSI = (unsigned int)(_EDX - 1);
    LOWORD(_RSI) = _EDX & (_EDX - 1);
    _EDX = _RSI;
    if ( !(_WORD)_RSI )
      goto LABEL_69;
  }
  codexmate_lib::core::relay::codex_diagnostic::fix_router_unlock_auth_residue::h71fd42faed4546d1(
    (__int64)v513,
    (__int64)v520,
    *(_DWORD *)(v519 + 292));
  if ( LODWORD(v513[0]) == 11 )
  {
    qmemcpy(v521, &v513[1], 0x48u);
    v95 = v521[0];
    v96 = (const void *)v521[1];
    v97 = v521[2];
    v98 = 24LL * v521[2];
    v534 = v521[1];
    v536 = v521[0];
    v535 = v521[1];
    v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[1] + 24LL * v521[2]);
    v99 = v529;
    if ( v521[2] > (unsigned __int64)(v527 - v529) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v527,
        v529,
        v521[2],
        8,
        24,
        v94);
      v99 = v529;
    }
    memcpy((void *)(v528 + 24 * v99), v96, v98);
    v529 = v99 + v97;
    if ( v95 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, 24 * v95, 8);
    v101 = v521[3];
    v102 = (const void *)v521[4];
    v103 = v521[5];
    v104 = 24LL * v521[5];
    v534 = v521[4];
    v536 = v521[3];
    v535 = v521[4];
    v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[4] + 24LL * v521[5]);
    v105 = v533;
    if ( v521[5] > v531 - v533 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v531,
        v533,
        v521[5],
        8,
        24,
        v100);
      v105 = v533;
    }
    memcpy((void *)(v532 + 24 * v105), v102, v104);
    v533 = v105 + v103;
    if ( v101 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, 24 * v101, 8);
    v107 = v521[6];
    v108 = (const void *)v521[7];
    v109 = v521[8];
    v110 = 24LL * v521[8];
    v534 = v521[7];
    v536 = v521[6];
    v535 = v521[7];
    v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[7] + 24LL * v521[8]);
    v22 = v540;
    if ( v521[8] > (unsigned __int64)(v538 - v540) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v538,
        v540,
        v521[8],
        8,
        24,
        v106);
      v22 = v540;
    }
    memcpy((void *)(v539 + 24LL * (_QWORD)v22), v108, v110);
    v540 = (char *)v22 + v109;
    if ( v107 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, 24 * v107, 8);
    v20 = v526;
  }
  else
  {
    qmemcpy(v521, v513, sizeof(v521));
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v522, &v514);
    v111 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
    if ( !v111 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26);
    v112 = v111;
    qmemcpy(v111, "router_unlock_auth_residue", 26);
    v113 = v533;
    if ( v533 == v531 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v531);
    v114 = v532;
    v115 = 3 * v113;
    *(_QWORD *)(v532 + 8 * v115) = 26;
    *(_QWORD *)(v114 + 8 * v115 + 8) = v112;
    *(_QWORD *)(v114 + 8 * v115 + 16) = 26;
    v533 = v113 + 1;
    v534 = (__int64)v521;
    v535 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v502, &unk_1017C1046, &v534);
    v116 = v540;
    if ( v540 == v538 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v117 = v539;
    v118 = 3LL * (_QWORD)v116;
    *(_QWORD *)(v539 + 8 * v118 + 16) = v502[2];
    v119 = v502[0];
    *(_QWORD *)(v117 + 8 * v118 + 8) = v502[1];
    *(_QWORD *)(v117 + 8 * v118) = v119;
    v540 = v116 + 1;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v521);
  }
LABEL_91:
  _RSI = (unsigned __int64)&anon_92869709a5e99ce1936aa4e326b6c562_609;
  v121 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, &anon_92869709a5e99ce1936aa4e326b6c562_609, 22);
  v122 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v121 >> 57), (__m128i)0LL);
  v123 = 0;
  v124 = _mm_load_si128((const __m128i *)&xmmword_1015FBBD0);
  v125 = _mm_load_si128((const __m128i *)&xmmword_1015FBBE0);
  while ( 1 )
  {
    v126 = v522.i64[0] & v121;
    v127 = _mm_loadu_si128((const __m128i *)((char *)v20 + v126));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v127, v122));
    if ( _EDX )
      break;
LABEL_96:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v127, (__m128i)-1LL)) )
      goto LABEL_118;
    v121 = v126 + v123 + 16;
    v123 += 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   esi, edx }
    v129 = -3LL * (v522.i64[0] & (v126 + _RSI));
    if ( *(_QWORD *)(__n + 8 * v129 + 16) == 22 )
    {
      v130 = _mm_or_si128(
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(__n + 8 * v129 + 8) + 6LL)), v124),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(__n + 8 * v129 + 8)), v125));
      if ( _mm_testz_si128(v130, v130) )
        break;
    }
    _RSI = (unsigned int)(_EDX - 1);
    LOWORD(_RSI) = _EDX & (_EDX - 1);
    _EDX = _RSI;
    if ( !(_WORD)_RSI )
      goto LABEL_96;
  }
  codexmate_lib::core::relay::codex_diagnostic::fix_takeover_backup_orphan::h2d8b6a51f7905902(
    v513,
    (__int64)v520,
    *(_DWORD *)(v519 + 292));
  if ( LODWORD(v513[0]) == 11 )
  {
    qmemcpy(v521, &v513[1], 0x48u);
    v132 = v521[0];
    v133 = (const void *)v521[1];
    v134 = v521[2];
    v135 = 24LL * v521[2];
    v534 = v521[1];
    v536 = v521[0];
    v535 = v521[1];
    v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[1] + 24LL * v521[2]);
    v136 = v529;
    if ( v521[2] > (unsigned __int64)(v527 - v529) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v527,
        v529,
        v521[2],
        8,
        24,
        v131);
      v136 = v529;
    }
    memcpy((void *)(v528 + 24 * v136), v133, v135);
    v529 = v136 + v134;
    if ( v132 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, 24 * v132, 8);
    v138 = v521[3];
    v139 = (const void *)v521[4];
    v140 = v521[5];
    v141 = 24LL * v521[5];
    v534 = v521[4];
    v536 = v521[3];
    v535 = v521[4];
    v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[4] + 24LL * v521[5]);
    v142 = v533;
    if ( v521[5] > v531 - v533 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v531,
        v533,
        v521[5],
        8,
        24,
        v137);
      v142 = v533;
    }
    memcpy((void *)(v532 + 24 * v142), v139, v141);
    v533 = v142 + v140;
    if ( v138 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, 24 * v138, 8);
    v144 = v521[6];
    v145 = (const void *)v521[7];
    v146 = v521[8];
    v147 = 24LL * v521[8];
    v534 = v521[7];
    v536 = v521[6];
    v535 = v521[7];
    v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[7] + 24LL * v521[8]);
    v22 = v540;
    if ( v521[8] > (unsigned __int64)(v538 - v540) )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v538,
        v540,
        v521[8],
        8,
        24,
        v143);
      v22 = v540;
    }
    memcpy((void *)(v539 + 24LL * (_QWORD)v22), v145, v147);
    v540 = (char *)v22 + v146;
    if ( v144 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, 24 * v144, 8);
    v20 = v526;
  }
  else
  {
    qmemcpy(v521, v513, sizeof(v521));
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v522, &v514);
    v148 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1);
    if ( !v148 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22);
    v149 = v148;
    qmemcpy(v148, "takeover_backup_orphan", 22);
    v150 = v533;
    if ( v533 == v531 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v531);
    v151 = v532;
    v152 = 3 * v150;
    *(_QWORD *)(v532 + 8 * v152) = 22;
    *(_QWORD *)(v151 + 8 * v152 + 8) = v149;
    *(_QWORD *)(v151 + 8 * v152 + 16) = 22;
    v533 = v150 + 1;
    v534 = (__int64)v521;
    v535 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v501, &unk_1017C1065, &v534);
    v153 = v540;
    if ( v540 == v538 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v154 = v539;
    v155 = 3LL * (_QWORD)v153;
    *(_QWORD *)(v539 + 8 * v155 + 16) = v501[2];
    v156 = v501[0];
    *(_QWORD *)(v154 + 8 * v155 + 8) = v501[1];
    *(_QWORD *)(v154 + 8 * v155) = v156;
    v540 = v153 + 1;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v521);
  }
LABEL_118:
  v157 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, &anon_92869709a5e99ce1936aa4e326b6c562_457, 18);
  v158 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v157 >> 57), (__m128i)0LL);
  v159 = 0;
  v160 = _mm_load_si128((const __m128i *)&xmmword_1015FBC90);
  v161 = _mm_cvtsi32_si128(0x7861u);
  _RSI = v522.i64[0];
  while ( 1 )
  {
    v163 = _RSI & v157;
    v164 = _mm_loadu_si128((const __m128i *)((char *)v20 + v163));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v164, v158));
    if ( _EDX )
      break;
LABEL_123:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v164, (__m128i)-1LL)) )
    {
      LODWORD(v22) = 0;
      goto LABEL_141;
    }
    v157 = v163 + v159 + 16;
    v159 += 16;
  }
  while ( 1 )
  {
    v166 = _RSI;
    __asm { tzcnt   esi, edx }
    v167 = -3LL * (v166 & (v163 + _RSI));
    if ( *(_QWORD *)(__n + 8 * v167 + 16) == 18 )
    {
      v168 = _mm_or_si128(
               _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)(__n + 8 * v167 + 8) + 16LL)), v161),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(__n + 8 * v167 + 8)), v160));
      if ( _mm_testz_si128(v168, v168) )
        break;
    }
    v169 = _EDX - 1;
    LOWORD(v169) = _EDX & (_EDX - 1);
    v170 = (_WORD)v169 == 0;
    _EDX = v169;
    _RSI = v522.i64[0];
    if ( v170 )
      goto LABEL_123;
  }
  v171 = v520;
  codexmate_lib::core::relay::codex_diagnostic::fix_config_toml_syntax_text::hcfdbad13ceb8a6f8(v513, v520);
  LOBYTE(v22) = v513[0] == 11;
  if ( LODWORD(v513[0]) == 11 )
  {
    v172 = (int)v22;
    v526 = (const __m128i *)v513[1];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v513, v171);
    v173 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
    if ( !v173 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18);
    v174 = v173;
    qmemcpy(v173, "config_toml_syntax", 18);
    v534 = 18;
    v535 = (__int64)v173;
    v536 = 18;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v521, &v534);
    v175 = v529;
    if ( v529 == v527 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v527);
    v176 = v528;
    v177 = 3 * v175;
    *(_QWORD *)(v528 + 8 * v177 + 16) = v521[2];
    v178 = v521[0];
    *(_QWORD *)(v176 + 8 * v177 + 8) = v521[1];
    *(_QWORD *)(v176 + 8 * v177) = v178;
    v529 = v175 + 1;
    v179 = v525;
    if ( v525 == v523 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v523);
    v180 = v524;
    v181 = 3 * v179;
    *(_QWORD *)(v524 + 8 * v181) = 18;
    *(_QWORD *)(v180 + 8 * v181 + 8) = v174;
    *(_QWORD *)(v180 + 8 * v181 + 16) = 18;
    v525 = v179 + 1;
    v182 = v540;
    if ( v540 == v538 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v183 = v539;
    v184 = 3LL * (_QWORD)v182;
    *(_QWORD *)(v539 + 8 * v184 + 16) = v513[3];
    v185 = v513[1];
    *(_QWORD *)(v183 + 8 * v184 + 8) = v513[2];
    *(_QWORD *)(v183 + 8 * v184) = v185;
    v540 = v182 + 1;
    LODWORD(v22) = v172;
  }
  else
  {
    qmemcpy(v521, v513, sizeof(v521));
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v522, &v514);
    v186 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
    if ( !v186 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18);
    v187 = v186;
    qmemcpy(v186, "config_toml_syntax", 18);
    v188 = v533;
    if ( v533 == v531 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v531);
    v189 = v532;
    v190 = 3 * v188;
    *(_QWORD *)(v532 + 8 * v190) = 18;
    *(_QWORD *)(v189 + 8 * v190 + 8) = v187;
    *(_QWORD *)(v189 + 8 * v190 + 16) = 18;
    v533 = v188 + 1;
    v534 = (__int64)v521;
    v535 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v500, &unk_1017C1080, &v534);
    v191 = v540;
    if ( v540 == v538 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v192 = v539;
    v193 = 3LL * (_QWORD)v191;
    *(_QWORD *)(v539 + 8 * v193 + 16) = v500[2];
    v194 = v500[0];
    *(_QWORD *)(v192 + 8 * v193 + 8) = v500[1];
    *(_QWORD *)(v192 + 8 * v193) = v194;
    v540 = v191 + 1;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v521);
  }
LABEL_141:
  v195 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, &anon_92869709a5e99ce1936aa4e326b6c562_455, 18);
  v196 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v195 >> 57), (__m128i)0LL);
  v197 = 0;
  v198 = _mm_load_si128((const __m128i *)&xmmword_1015FBCB0);
  v199 = _mm_cvtsi32_si128(0x7974u);
  _RSI = v522.i64[0];
  while ( 1 )
  {
    v201 = _RSI & v195;
    v202 = _mm_loadu_si128((const __m128i *)((char *)v20 + v201));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v202, v196));
    if ( _EDX )
      break;
LABEL_146:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v202, (__m128i)-1LL)) )
      goto LABEL_163;
    v195 = v201 + v197 + 16;
    v197 += 16;
  }
  while ( 1 )
  {
    v204 = _RSI;
    __asm { tzcnt   esi, edx }
    v205 = -3LL * (v204 & (v201 + _RSI));
    if ( *(_QWORD *)(__n + 8 * v205 + 16) == 18 )
    {
      v206 = _mm_or_si128(
               _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)(__n + 8 * v205 + 8) + 16LL)), v199),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(__n + 8 * v205 + 8)), v198));
      if ( _mm_testz_si128(v206, v206) )
        break;
    }
    v207 = _EDX - 1;
    LOWORD(v207) = _EDX & (_EDX - 1);
    v170 = (_WORD)v207 == 0;
    _EDX = v207;
    _RSI = v522.i64[0];
    if ( v170 )
      goto LABEL_146;
  }
  v208 = v520;
  codexmate_lib::core::relay::codex_diagnostic::fix_config_third_party_text::h7c56543f2e575f68(
    v513,
    v520,
    *(_QWORD *)(v519 + 8),
    *(_QWORD *)(v519 + 16));
  if ( LODWORD(v513[0]) == 11 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v513, v208);
    v209 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
    if ( !v209 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18);
    v22 = v209;
    qmemcpy(v209, "config_third_party", 18);
    v534 = 18;
    v535 = (__int64)v209;
    v536 = 18;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v521, &v534);
    v210 = v529;
    if ( v529 == v527 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v527);
    v211 = v528;
    v212 = 3 * v210;
    *(_QWORD *)(v528 + 8 * v212 + 16) = v521[2];
    v213 = v521[0];
    *(_QWORD *)(v211 + 8 * v212 + 8) = v521[1];
    *(_QWORD *)(v211 + 8 * v212) = v213;
    v529 = v210 + 1;
    v214 = v525;
    if ( v525 == v523 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v523);
    v215 = v524;
    v216 = 3 * v214;
    *(_QWORD *)(v524 + 8 * v216) = 18;
    *(_QWORD *)(v215 + 8 * v216 + 8) = v22;
    *(_QWORD *)(v215 + 8 * v216 + 16) = 18;
    v525 = v214 + 1;
    v217 = v540;
    if ( v540 == v538 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v218 = v539;
    v219 = 3LL * (_QWORD)v217;
    *(_QWORD *)(v539 + 8 * v219 + 16) = v513[3];
    v220 = v513[1];
    *(_QWORD *)(v218 + 8 * v219 + 8) = v513[2];
    *(_QWORD *)(v218 + 8 * v219) = v220;
    v540 = v217 + 1;
    LOBYTE(v22) = 1;
  }
  else
  {
    qmemcpy(v521, v513, sizeof(v521));
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v522, &v514);
    v221 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
    if ( !v221 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18);
    v222 = v221;
    qmemcpy(v221, "config_third_party", 18);
    v223 = v533;
    if ( v533 == v531 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v531);
    v224 = v532;
    v225 = 3 * v223;
    *(_QWORD *)(v532 + 8 * v225) = 18;
    *(_QWORD *)(v224 + 8 * v225 + 8) = v222;
    *(_QWORD *)(v224 + 8 * v225 + 16) = 18;
    v533 = v223 + 1;
    v534 = (__int64)v521;
    v535 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v499, &unk_1017C1097, &v534);
    v226 = v540;
    if ( v540 == v538 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v227 = v539;
    v228 = 3LL * (_QWORD)v226;
    *(_QWORD *)(v539 + 8 * v228 + 16) = v499[2];
    v229 = v499[0];
    *(_QWORD *)(v227 + 8 * v228 + 8) = v499[1];
    *(_QWORD *)(v227 + 8 * v228) = v229;
    v540 = v226 + 1;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v521);
  }
LABEL_163:
  v230 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, &anon_92869709a5e99ce1936aa4e326b6c562_608, 23);
  v231 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v230 >> 57), (__m128i)0LL);
  v232 = 0;
  v233 = _mm_load_si128((const __m128i *)&xmmword_1015FBC10);
  v234 = _mm_load_si128((const __m128i *)&xmmword_1015FBC20);
  _RSI = v522.i64[0];
  while ( 1 )
  {
    v236 = _RSI & v230;
    v237 = _mm_loadu_si128((const __m128i *)((char *)v20 + v236));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v237, v231));
    if ( _EDX )
      break;
LABEL_168:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v237, (__m128i)-1LL)) )
      goto LABEL_185;
    v230 = v236 + v232 + 16;
    v232 += 16;
  }
  while ( 1 )
  {
    v239 = _RSI;
    __asm { tzcnt   esi, edx }
    v240 = -3LL * (v239 & (v236 + _RSI));
    if ( *(_QWORD *)(__n + 8 * v240 + 16) == 23 )
    {
      v241 = _mm_or_si128(
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(__n + 8 * v240 + 8) + 7LL)), v233),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(__n + 8 * v240 + 8)), v234));
      if ( _mm_testz_si128(v241, v241) )
        break;
    }
    v242 = _EDX - 1;
    LOWORD(v242) = _EDX & (_EDX - 1);
    v170 = (_WORD)v242 == 0;
    _EDX = v242;
    _RSI = v522.i64[0];
    if ( v170 )
      goto LABEL_168;
  }
  v243 = v520;
  codexmate_lib::core::relay::codex_diagnostic::fix_config_profile_conflict_text::h3fbaf0f7415d3b27(v513, v520);
  if ( LODWORD(v513[0]) == 11 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v513, v243);
    v244 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
    if ( !v244 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23);
    v22 = v244;
    qmemcpy(v244, "config_profile_conflict", 23);
    v534 = 23;
    v535 = (__int64)v244;
    v536 = 23;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v521, &v534);
    v245 = v529;
    if ( v529 == v527 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v527);
    v246 = v528;
    v247 = 3 * v245;
    *(_QWORD *)(v528 + 8 * v247 + 16) = v521[2];
    v248 = v521[0];
    *(_QWORD *)(v246 + 8 * v247 + 8) = v521[1];
    *(_QWORD *)(v246 + 8 * v247) = v248;
    v529 = v245 + 1;
    v249 = v525;
    if ( v525 == v523 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v523);
    v250 = v524;
    v251 = 3 * v249;
    *(_QWORD *)(v524 + 8 * v251) = 23;
    *(_QWORD *)(v250 + 8 * v251 + 8) = v22;
    *(_QWORD *)(v250 + 8 * v251 + 16) = 23;
    v525 = v249 + 1;
    v252 = v540;
    if ( v540 == v538 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v253 = v539;
    v254 = 3LL * (_QWORD)v252;
    *(_QWORD *)(v539 + 8 * v254 + 16) = v513[3];
    v255 = v513[1];
    *(_QWORD *)(v253 + 8 * v254 + 8) = v513[2];
    *(_QWORD *)(v253 + 8 * v254) = v255;
    v540 = v252 + 1;
    LOBYTE(v22) = 1;
  }
  else
  {
    qmemcpy(v521, v513, sizeof(v521));
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v522, &v514);
    v256 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
    if ( !v256 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23);
    v257 = v256;
    qmemcpy(v256, "config_profile_conflict", 23);
    v258 = v533;
    if ( v533 == v531 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v531);
    v259 = v532;
    v260 = 3 * v258;
    *(_QWORD *)(v532 + 8 * v260) = 23;
    *(_QWORD *)(v259 + 8 * v260 + 8) = v257;
    *(_QWORD *)(v259 + 8 * v260 + 16) = 23;
    v533 = v258 + 1;
    v534 = (__int64)v521;
    v535 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v498, &unk_1017C10AE, &v534);
    v261 = v540;
    if ( v540 == v538 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v262 = v539;
    v263 = 3LL * (_QWORD)v261;
    *(_QWORD *)(v539 + 8 * v263 + 16) = v498[2];
    v264 = v498[0];
    *(_QWORD *)(v262 + 8 * v263 + 8) = v498[1];
    *(_QWORD *)(v262 + 8 * v263) = v264;
    v540 = v261 + 1;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v521);
  }
LABEL_185:
  v265 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, &anon_92869709a5e99ce1936aa4e326b6c562_346, 12);
  v266 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v265 >> 57), (__m128i)0LL);
  v267 = 0;
  _RSI = v522.i64[0];
  while ( 1 )
  {
    v269 = _RSI & v265;
    v270 = _mm_loadu_si128((const __m128i *)((char *)v20 + v269));
    v271 = _mm_cmpeq_epi8(v270, v266);
    _EDX = _mm_movemask_epi8(v271);
    if ( _EDX )
      break;
LABEL_190:
    v270 = _mm_cmpeq_epi8(v270, (__m128i)-1LL);
    if ( _mm_movemask_epi8(v270) )
      goto LABEL_207;
    v265 = v269 + v267 + 16;
    v267 += 16;
  }
  while ( 1 )
  {
    v273 = _RSI;
    __asm { tzcnt   esi, edx }
    v274 = -3LL * (v273 & (v269 + _RSI));
    if ( *(_QWORD *)(__n + 8 * v274 + 16) == 12
      && !(**(_QWORD **)(__n + 8 * v274 + 8) ^ 0x735F6769666E6F63LL
         | *(unsigned int *)(*(_QWORD *)(__n + 8 * v274 + 8) + 8LL) ^ 0x656C6174LL) )
    {
      break;
    }
    v275 = _EDX - 1;
    LOWORD(v275) = _EDX & (_EDX - 1);
    v170 = (_WORD)v275 == 0;
    _EDX = v275;
    _RSI = v522.i64[0];
    if ( v170 )
      goto LABEL_190;
  }
  v276 = (void *)v520[3].i64[1];
  codexmate_lib::core::relay::codex_diagnostic::fix_config_stale_text::hccf66cc8098fc3c2(v513, v276, v520[4].u64[0]);
  if ( LODWORD(v513[0]) == 11 )
  {
    v277 = (int)v22;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v513, v276);
    v278 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v278 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
    v279 = v278;
    qmemcpy(v278, "config_stale", 12);
    v534 = 12;
    v535 = (__int64)v278;
    v536 = 12;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v521, &v534);
    v280 = v529;
    if ( v529 == v527 )
      *(double *)v266.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v527);
    v281 = v528;
    v282 = 3 * v280;
    *(_QWORD *)(v528 + 8 * v282 + 16) = v521[2];
    v283 = v521[0];
    *(_QWORD *)(v281 + 8 * v282 + 8) = v521[1];
    *(_QWORD *)(v281 + 8 * v282) = v283;
    v529 = v280 + 1;
    v284 = v525;
    if ( v525 == v523 )
      *(double *)v266.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v523);
    v285 = v524;
    v286 = 3 * v284;
    *(_QWORD *)(v524 + 8 * v286) = 12;
    *(_QWORD *)(v285 + 8 * v286 + 8) = v279;
    *(_QWORD *)(v285 + 8 * v286 + 16) = 12;
    v525 = v284 + 1;
    v287 = v540;
    if ( v540 == v538 )
      *(double *)v266.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v288 = v539;
    v289 = 3LL * (_QWORD)v287;
    *(_QWORD *)(v539 + 8 * v289 + 16) = v513[3];
    v290 = v513[1];
    *(_QWORD *)(v288 + 8 * v289 + 8) = v513[2];
    *(_QWORD *)(v288 + 8 * v289) = v290;
    v540 = v287 + 1;
    LODWORD(v22) = v277;
    LOBYTE(v22) = *(_BYTE *)(v519 + 292) | v277;
  }
  else
  {
    qmemcpy(v521, v513, sizeof(v521));
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v522, &v514);
    v291 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v291 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
    v292 = v291;
    qmemcpy(v291, "config_stale", 12);
    v293 = v533;
    if ( v533 == v531 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v531);
    v294 = v532;
    v295 = 3 * v293;
    *(_QWORD *)(v532 + 8 * v295) = 12;
    *(_QWORD *)(v294 + 8 * v295 + 8) = v292;
    *(_QWORD *)(v294 + 8 * v295 + 16) = 12;
    v533 = v293 + 1;
    v534 = (__int64)v521;
    v535 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v497, &unk_1017C10CA, &v534);
    v296 = v540;
    if ( v540 == v538 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
    v297 = v539;
    v298 = 3LL * (_QWORD)v296;
    *(_QWORD *)(v539 + 8 * v298 + 16) = v497[2];
    v299 = v497[0];
    *(_QWORD *)(v297 + 8 * v298 + 8) = v497[1];
    *(_QWORD *)(v297 + 8 * v298) = v299;
    v540 = v296 + 1;
    *(double *)v266.i64 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v521);
  }
LABEL_207:
  if ( !v517 )
    goto LABEL_269;
  LODWORD(__n) = (_DWORD)v22;
  _RSI = (unsigned __int64)"router_http_contract";
  v301 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, "router_http_contract", 20);
  v302 = v514;
  v303 = v515;
  v304 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v301 >> 57), (__m128i)0LL);
  v305 = &v514[-2].i8[8];
  v306 = 0;
  v307 = _mm_cvtsi32_si128(0x74636172u);
  v308 = _mm_load_si128((const __m128i *)&xmmword_1015FBCE0);
  while ( 1 )
  {
    v309 = v515 & v301;
    v310 = _mm_loadu_si128((const __m128i *)((char *)v514 + v309));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v310, v304));
    if ( _EDX )
      break;
LABEL_213:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v310, (__m128i)-1LL)) )
      goto LABEL_224;
    v301 = v309 + v306 + 16;
    v306 += 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   esi, edx }
    v312 = -3LL * (v515 & (v309 + _RSI));
    if ( *(_QWORD *)&v305[8 * v312 + 16] == 20 )
    {
      v313 = *(const __m128i **)&v305[8 * v312 + 8];
      v314 = _mm_or_si128(
               _mm_xor_si128(_mm_cvtsi32_si128(v313[1].u32[0]), v307),
               _mm_xor_si128(_mm_loadu_si128(v313), v308));
      if ( _mm_testz_si128(v314, v314) )
        break;
    }
    _RSI = (unsigned int)(_EDX - 1);
    LOWORD(_RSI) = _EDX & (_EDX - 1);
    _EDX = _RSI;
    if ( !(_WORD)_RSI )
      goto LABEL_213;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v518, v313);
  v315 = 20;
  v316 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1);
  if ( !v316 )
LABEL_372:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v315);
  v317 = v316;
  qmemcpy(v316, "router_http_contract", 20);
  v513[0] = 20;
  v513[1] = (__int64)v316;
  v513[2] = 20;
  v318 = v521;
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v521, v513);
  v319 = v529;
  if ( v529 == v527 )
  {
    v318 = &v527;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v527);
  }
  v320 = v528;
  v321 = 3 * v319;
  *(_QWORD *)(v528 + 8 * v321 + 16) = v521[2];
  v322 = v521[0];
  v323 = v521[1];
  *(_QWORD *)(v320 + 8 * v321 + 8) = v521[1];
  *(_QWORD *)(v320 + 8 * v321) = v322;
  v529 = v319 + 1;
  v324 = v525;
  if ( v525 == v523 )
  {
    v318 = &v523;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v523);
  }
  v325 = v524;
  v326 = 3 * v324;
  *(_QWORD *)(v524 + 8 * v326) = 20;
  *(_QWORD *)(v325 + 8 * v326 + 8) = v317;
  *(_QWORD *)(v325 + 8 * v326 + 16) = 20;
  v525 = v324 + 1;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v318, v323);
  v327 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1);
  if ( !v327 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45);
  v328 = v327;
  *(_QWORD *)((char *)v327 + 37) = 0xA6BAE791A5E5B194LL;
  v327[4] = 0xE5B194E7AFB7E820LL;
  qmemcpy(v327 + 2, "aimai1 HTTP-only", 16);
  v327[1] = 0x20A585E59986E5B0LL;
  *v327 = 0x96E68D87E986B0E5LL;
  v329 = v540;
  if ( v540 == v538 )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
  v330 = v539;
  v331 = 3LL * (_QWORD)v329;
  *(_QWORD *)(v539 + 8 * v331) = 45;
  *(_QWORD *)(v330 + 8 * v331 + 8) = v328;
  *(_QWORD *)(v330 + 8 * v331 + 16) = 45;
  v540 = v329 + 1;
  LOBYTE(v330) = 1;
  LODWORD(__n) = v330;
LABEL_224:
  _RSI = (unsigned __int64)&anon_92869709a5e99ce1936aa4e326b6c562_441;
  v333 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, &anon_92869709a5e99ce1936aa4e326b6c562_441, 17);
  v334 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v333 >> 57), (__m128i)0LL);
  v335 = 0;
  v522 = _mm_unpacklo_epi64((__m128i)0x5F676F6C61746163uLL, (__m128i)0x7469726765746E69uLL);
  while ( 1 )
  {
    v336 = v303 & v333;
    v337 = _mm_loadu_si128((const __m128i *)((char *)v302 + v336));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v337, v334));
    if ( _EDX )
    {
      do
      {
        __asm { tzcnt   esi, edx }
        v339 = -3LL * (v303 & (v336 + _RSI));
        if ( *(_QWORD *)&v305[8 * v339 + 16] == 17 )
        {
          v340 = _mm_or_si128(
                   _mm_xor_si128(
                     _mm_cvtsi32_si128(*(unsigned __int8 *)(*(_QWORD *)&v305[8 * v339 + 8] + 16LL)),
                     (__m128i)xmmword_1015FBD20),
                   _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)&v305[8 * v339 + 8]), v522));
          if ( _mm_testz_si128(v340, v340) )
            goto LABEL_238;
        }
        _RSI = (unsigned int)(_EDX - 1);
        LOWORD(_RSI) = _EDX & (_EDX - 1);
        _EDX = _RSI;
      }
      while ( (_WORD)_RSI );
    }
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v337, (__m128i)-1LL)) )
      break;
    v333 = v336 + v335 + 16;
    v335 += 16;
  }
  _RSI = (unsigned __int64)&anon_92869709a5e99ce1936aa4e326b6c562_605;
  v342 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, &anon_92869709a5e99ce1936aa4e326b6c562_605, 21);
  v266 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v342 >> 57), (__m128i)0LL);
  v343 = 0;
  v270 = _mm_load_si128((const __m128i *)&xmmword_1015FBBB0);
  v271 = _mm_load_si128((const __m128i *)&xmmword_1015FBBC0);
  while ( 1 )
  {
    v344 = v303 & v342;
    v345 = _mm_loadu_si128((const __m128i *)((char *)v302 + v344));
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v345, v266));
    if ( _EDX )
    {
      while ( 1 )
      {
        __asm { tzcnt   esi, edx }
        v347 = -3LL * (v303 & (v344 + _RSI));
        if ( *(_QWORD *)&v305[8 * v347 + 16] == 21 )
        {
          v348 = _mm_or_si128(
                   _mm_xor_si128(_mm_loadu_si128((const __m128i *)(*(_QWORD *)&v305[8 * v347 + 8] + 5LL)), v270),
                   _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)&v305[8 * v347 + 8]), v271));
          if ( _mm_testz_si128(v348, v348) )
            break;
        }
        _RSI = (unsigned int)(_EDX - 1);
        LOWORD(_RSI) = _EDX & (_EDX - 1);
        _EDX = _RSI;
        if ( !(_WORD)_RSI )
          goto LABEL_236;
      }
LABEL_238:
      _RSI = (unsigned __int64)&anon_92869709a5e99ce1936aa4e326b6c562_441;
      v350 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, &anon_92869709a5e99ce1936aa4e326b6c562_441, 17);
      v351 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v350 >> 57), (__m128i)0LL);
      for ( i = 0; ; i += 16 )
      {
        v353 = v303 & v350;
        v354 = _mm_loadu_si128((const __m128i *)((char *)v302 + v353));
        _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v354, v351));
        if ( _EDX )
          break;
LABEL_243:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v354, (__m128i)-1LL)) )
          goto LABEL_251;
        v350 = v353 + i + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   esi, edx }
        v356 = -3LL * (v303 & (v353 + _RSI));
        if ( *(_QWORD *)&v305[8 * v356 + 16] == 17 )
        {
          v357 = _mm_loadu_si128((const __m128i *)*(_QWORD *)&v305[8 * v356 + 8]);
          v358 = *(unsigned __int8 *)(*(_QWORD *)&v305[8 * v356 + 8] + 16LL);
          v359 = _mm_or_si128(
                   _mm_xor_si128(_mm_cvtsi32_si128(v358), (__m128i)xmmword_1015FBD20),
                   _mm_xor_si128(v357, v522));
          if ( _mm_testz_si128(v359, v359) )
            break;
        }
        _RSI = (unsigned int)(_EDX - 1);
        LOWORD(_RSI) = _EDX & (_EDX - 1);
        _EDX = _RSI;
        if ( !(_WORD)_RSI )
          goto LABEL_243;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v518, v358);
      v315 = 17;
      v360 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
      if ( v360 )
      {
        v361 = v360;
        qmemcpy(v360, "catalog_integrity", 17);
        v513[0] = 17;
        v513[1] = (__int64)v360;
        v513[2] = 17;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v521, v513);
        v362 = v529;
        if ( v529 == v527 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v527);
        v363 = v528;
        v364 = 3 * v362;
        *(_QWORD *)(v528 + 8 * v364 + 16) = v521[2];
        v365 = v521[0];
        *(_QWORD *)(v363 + 8 * v364 + 8) = v521[1];
        *(_QWORD *)(v363 + 8 * v364) = v365;
        v529 = v362 + 1;
        v366 = v525;
        if ( v525 == v523 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v523);
        v367 = v524;
        v368 = 3 * v366;
        *(_QWORD *)(v524 + 8 * v368) = 17;
        *(_QWORD *)(v367 + 8 * v368 + 8) = v361;
        *(_QWORD *)(v367 + 8 * v368 + 16) = 17;
        v525 = v366 + 1;
LABEL_251:
        _RSI = (unsigned __int64)&anon_92869709a5e99ce1936aa4e326b6c562_605;
        v370 = v518;
        v371 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(
                 v518,
                 &anon_92869709a5e99ce1936aa4e326b6c562_605,
                 21);
        v266 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v371 >> 57), (__m128i)0LL);
        v372 = 0;
        v270 = _mm_load_si128((const __m128i *)&xmmword_1015FBBB0);
        v271 = _mm_load_si128((const __m128i *)&xmmword_1015FBBC0);
        while ( 1 )
        {
          v373 = v303 & v371;
          v374 = _mm_loadu_si128((const __m128i *)((char *)v302 + v373));
          _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v374, v266));
          if ( _EDX )
            break;
LABEL_256:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v374, (__m128i)-1LL)) )
            goto LABEL_264;
          v371 = v373 + v372 + 16;
          v372 += 16;
        }
        while ( 1 )
        {
          __asm { tzcnt   esi, edx }
          v376 = -3LL * (v303 & (v373 + _RSI));
          if ( *(_QWORD *)&v305[8 * v376 + 16] == 21 )
          {
            v377 = *(_QWORD *)&v305[8 * v376 + 8];
            v378 = _mm_or_si128(
                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v377 + 5)), v270),
                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)v377), v271));
            if ( _mm_testz_si128(v378, v378) )
              break;
          }
          _RSI = (unsigned int)(_EDX - 1);
          LOWORD(_RSI) = _EDX & (_EDX - 1);
          _EDX = _RSI;
          if ( !(_WORD)_RSI )
            goto LABEL_256;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v518, v377);
        v315 = 21;
        v379 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1);
        if ( v379 )
        {
          v380 = v379;
          qmemcpy(v379, "catalog_path_validity", 21);
          v513[0] = 21;
          v513[1] = (__int64)v379;
          v513[2] = 21;
          v370 = v521;
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v521, v513);
          v381 = v529;
          if ( v529 == v527 )
          {
            v370 = &v527;
            *(double *)v266.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v527);
          }
          v382 = v528;
          v383 = 3 * v381;
          *(_QWORD *)(v528 + 8 * v383 + 16) = v521[2];
          v384 = v521[0];
          _RSI = v521[1];
          *(_QWORD *)(v382 + 8 * v383 + 8) = v521[1];
          *(_QWORD *)(v382 + 8 * v383) = v384;
          v529 = v381 + 1;
          v385 = v525;
          if ( v525 == v523 )
          {
            v370 = &v523;
            *(double *)v266.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v523);
          }
          v386 = v524;
          v387 = 3 * v385;
          *(_QWORD *)(v524 + 8 * v387) = 21;
          *(_QWORD *)(v386 + 8 * v387 + 8) = v380;
          *(_QWORD *)(v386 + 8 * v387 + 16) = 21;
          v525 = v385 + 1;
LABEL_264:
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v370, _RSI);
          v315 = 40;
          v388 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1);
          if ( v388 )
          {
            v389 = v388;
            v388[4] = 0x676F6C6174614320LL;
            v388[3] = 0x9088E69F94E7B096LL;
            v388[2] = 0xE68D87E9B7B5E880LL;
            v388[1] = 0xB8E4206769666E6FLL;
            *v388 = 0x63208F9AE986B0E5LL;
            v390 = v540;
            if ( v540 == v538 )
              *(double *)v266.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
            v391 = v539;
            v392 = 3LL * (_QWORD)v390;
            *(_QWORD *)(v539 + 8 * v392) = 40;
            *(_QWORD *)(v391 + 8 * v392 + 8) = v389;
            *(_QWORD *)(v391 + 8 * v392 + 16) = 40;
            v540 = v390 + 1;
            goto LABEL_270;
          }
        }
      }
      goto LABEL_372;
    }
LABEL_236:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v345, (__m128i)-1LL)) )
      break;
    v342 = v344 + v343 + 16;
    v343 += 16;
  }
  LOBYTE(v22) = __n;
LABEL_269:
  if ( (_BYTE)v22 )
  {
LABEL_270:
    (*(void (__fastcall **)(__int64 *, __int64, double, double, double, double))(v507 + 40))(
      v513,
      v508,
      *(double *)v266.i64,
      NAN,
      *(double *)v270.i64,
      *(double *)v271.i64);
    if ( LODWORD(v513[0]) == 11 )
    {
      codexmate_lib::core::relay::codex_diagnostic::run_diagnostics_with_mode::h30a2ac42c421fd0d(v521, v520, v519, 0);
      if ( v525 )
      {
        v393 = v524;
        if ( v521[2] )
        {
          v394 = v521[1];
          v395 = 104LL * v521[2];
          v504.i64[0] = v524 + 24 * v525;
          v526 = (const __m128i *)(104LL * v521[2]);
          do
          {
            __n = v393 + 24;
            v506 = v393;
            v399 = *(const void **)(v393 + 8);
            v509 = v393;
            v400 = *(_QWORD *)(v393 + 16);
            v401 = 0;
            while ( *(_QWORD *)(v394 + v401 + 16) != v400 || memcmp(*(const void **)(v394 + v401 + 8), v399, v400) )
            {
              v401 += 104;
              if ( v395 == v401 )
                goto LABEL_275;
            }
            if ( *(_QWORD *)(v394 + v401 + 40) != 2 || **(_WORD **)(v394 + v401 + 32) != 27503 )
            {
              if ( v533 )
              {
                v402 = v532;
                v403 = 24 * v533;
                v404 = 0;
                v522.i64[0] = 24 * v533;
                while ( 1 )
                {
                  if ( *(_QWORD *)(v402 + v404 + 16) == v400 )
                  {
                    v405 = v402;
                    v406 = memcmp(*(const void **)(v402 + v404 + 8), v399, v400);
                    v402 = v405;
                    v395 = (__int64)v526;
                    v170 = v406 == 0;
                    v403 = v522.i64[0];
                    if ( v170 )
                      break;
                  }
                  v404 += 24;
                  if ( v403 == v404 )
                    goto LABEL_288;
                }
              }
              else
              {
LABEL_288:
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v534, v509);
                v408 = v533;
                if ( v533 == v531 )
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v531);
                v409 = v532;
                v402 = 3 * v408;
                *(_QWORD *)(v532 + 8 * v402 + 16) = v536;
                v407 = v534;
                *(_QWORD *)(v409 + 8 * v402 + 8) = v535;
                *(_QWORD *)(v409 + 8 * v402) = v407;
                v533 = v408 + 1;
              }
              alloc::vec::Vec$LT$T$C$A$GT$::retain::h0532071e3e20c9d1(&v527, &v506, v407, v402);
              v534 = (__int64)&v506;
              v535 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v495, &unk_1017C10F4, &v534);
              v410 = v540;
              if ( v540 == v538 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
              v396 = v539;
              v397 = 3LL * (_QWORD)v410;
              *(_QWORD *)(v539 + 8 * v397 + 16) = v495[2];
              v398 = v495[0];
              *(_QWORD *)(v396 + 8 * v397 + 8) = v495[1];
              *(_QWORD *)(v396 + 8 * v397) = v398;
              v540 = v410 + 1;
            }
LABEL_275:
            v393 = __n;
          }
          while ( __n != v504.i64[0] );
        }
        else
        {
          v427 = 24 * v525 - 24;
          v428 = (unsigned int)~(v427 / 0x18);
          if ( (~(unsigned __int8)(v427 / 0x18) & 7) != 0 )
          {
            v429 = -(__int64)(((unsigned __int8)(v427 / 0x18) + 1) & 7);
            v430 = 0;
            do
            {
              v430 -= 24;
              ++v429;
            }
            while ( v429 );
            v393 = v524 - v430;
            v428 = v524 - v430 - 24;
          }
          if ( v427 >= 0xA8 )
          {
            do
              v393 += 192LL;
            while ( v393 != v524 + 24 * v525 );
            v428 = v393 - 24;
          }
          v506 = v428;
        }
      }
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he2770c63d3b041ed(v521);
      if ( v521[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v521[1], 104LL * v521[0], 8);
    }
    else
    {
      qmemcpy(v521, v513, sizeof(v521));
      v534 = (__int64)v521;
      v535 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v496, &unk_1017C10DB, &v534);
      v411 = v540;
      if ( v540 == v538 )
        *(double *)v266.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
      v412 = v539;
      v413 = 3LL * (_QWORD)v411;
      *(_QWORD *)(v539 + 8 * v413 + 16) = v496[2];
      v414 = v496[0];
      *(_QWORD *)(v412 + 8 * v413 + 8) = v496[1];
      *(_QWORD *)(v412 + 8 * v413) = v414;
      v540 = v411 + 1;
      if ( v525 )
      {
        v415 = (const __m128i *)v524;
        v526 = (const __m128i *)(v524 + 24 * v525);
        v416 = v533;
        do
        {
          while ( 1 )
          {
            v522.i64[0] = (__int64)v415;
            __n = v416;
            if ( v416 )
              break;
LABEL_305:
            v425 = v522.i64[0];
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v534, v522.i64[0]);
            v426 = v533;
            if ( v533 == v531 )
              *(double *)v266.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v531);
            v417 = v532;
            v418 = 3 * v426;
            *(_QWORD *)(v532 + 8 * v418 + 16) = v536;
            v419 = v534;
            *(_QWORD *)(v417 + 8 * v418 + 8) = v535;
            *(_QWORD *)(v417 + 8 * v418) = v419;
            v416 = v426 + 1;
            v533 = v416;
            v415 = (const __m128i *)(v425 + 24);
            if ( v415 == v526 )
              goto LABEL_307;
          }
          v420 = v532;
          v421 = 24 * __n;
          v422 = *(const void **)(v522.i64[0] + 8);
          v423 = *(_QWORD *)(v522.i64[0] + 16);
          v424 = 0;
          while ( *(_QWORD *)(v420 + v424 + 16) != v423 || memcmp(*(const void **)(v420 + v424 + 8), v422, v423) )
          {
            v424 += 24;
            if ( v421 == v424 )
              goto LABEL_305;
          }
          v416 = __n;
          v415 = (const __m128i *)(v522.i64[0] + 24);
        }
        while ( (const __m128i *)(v522.i64[0] + 24) != v526 );
      }
LABEL_307:
      alloc::vec::Vec$LT$T$C$A$GT$::retain::hc0a778a2e4238a07(&v527, &v523, *(double *)v266.i64);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v521);
    }
  }
  v522.i32[0] = (unsigned __int8)v511;
  v431 = 0;
  while ( 2 )
  {
    v505 = (char *)&off_101964370 + v431;
    if ( v517 )
    {
      v473 = *(_UNKNOWN **)((char *)&off_101964370 + v431);
      v442 = *(size_t *)((char *)&off_101964370 + v431 + 8);
      v474 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v518, v473, v442);
      v441 = v473;
      v447 = v474;
      v443 = v514;
      v444 = v515;
      v445 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v474 >> 57), (__m128i)0LL);
      v475 = &v514[-2].i8[8];
      for ( j = 0; ; j += 16 )
      {
        v432 = v444 & v447;
        v433 = _mm_loadu_si128((const __m128i *)((char *)v443 + v432));
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v433, v445));
        if ( (_DWORD)_RAX )
          break;
LABEL_324:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v433, (__m128i)-1LL)) )
          goto LABEL_349;
        v447 = v432 + j + 16;
      }
      v526 = v443;
      v509 = v444;
      v504 = v445;
      v511 = j;
      v490 = v433;
      while ( 1 )
      {
        __n = _RAX;
        __asm { tzcnt   eax, eax }
        v435 = -3LL * (v444 & (v432 + _RAX));
        if ( v442 == *(_QWORD *)&v475[8 * v435 + 16] )
        {
          v436 = v442;
          v437 = v442;
          v438 = v431;
          v439 = v441;
          v440 = memcmp(v441, *(const void **)&v475[8 * v435 + 8], v436);
          v441 = v439;
          v431 = v438;
          v442 = v437;
          if ( !v440 )
            break;
        }
        _RAX = (unsigned int)(__n - 1);
        LOWORD(_RAX) = __n & (__n - 1);
        v443 = v526;
        v444 = v509;
        v445 = _mm_load_si128(&v504);
        j = v511;
        v433 = _mm_load_si128(&v490);
        if ( !(_WORD)_RAX )
          goto LABEL_324;
      }
      LODWORD(v489) = v522.i32[0];
      codexmate_lib::core::relay::codex_diagnostic::fix_issue::h260abb9ade4e9823(
        (unsigned int)v513,
        (_DWORD)v520,
        v519,
        (_DWORD)v441,
        v437,
        v508,
        v507,
        v489,
        *(_OWORD *)&v490);
      if ( LODWORD(v513[0]) == 11 )
      {
        qmemcpy(v521, &v513[1], 0x48u);
        v449 = v521[0];
        v450 = (const void *)v521[1];
        v451 = v521[2];
        __n = 24LL * v521[2];
        v534 = v521[1];
        v536 = v521[0];
        v535 = v521[1];
        v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[1] + 24LL * v521[2]);
        v452 = v529;
        if ( v521[2] > (unsigned __int64)(v527 - v529) )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v527,
            v529,
            v521[2],
            8,
            24,
            v448);
          v452 = v529;
        }
        memcpy((void *)(v528 + 24 * v452), v450, __n);
        v529 = v452 + v451;
        if ( v449 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v450, 24 * v449, 8);
        v454 = v521[3];
        v455 = (const void *)v521[4];
        v456 = v521[5];
        __n = 24LL * v521[5];
        v534 = v521[4];
        v536 = v521[3];
        v535 = v521[4];
        v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[4] + 24LL * v521[5]);
        v457 = v533;
        if ( v521[5] > v531 - v533 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v531,
            v533,
            v521[5],
            8,
            24,
            v453);
          v457 = v533;
        }
        memcpy((void *)(v532 + 24 * v457), v455, __n);
        v533 = v457 + v456;
        if ( v454 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v455, 24 * v454, 8);
        v459 = v521[6];
        v460 = (const void *)v521[7];
        v461 = v521[8];
        __n = 24LL * v521[8];
        v534 = v521[7];
        v536 = v521[6];
        v535 = v521[7];
        v537 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v521[7] + 24LL * v521[8]);
        v462 = v540;
        if ( v521[8] > (unsigned __int64)(v538 - v540) )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v538,
            v540,
            v521[8],
            8,
            24,
            v458);
          v462 = v540;
        }
        memcpy((void *)(v539 + 24LL * (_QWORD)v462), v460, __n);
        v540 = &v462[v461];
        if ( v459 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v460, 24 * v459, 8);
        goto LABEL_349;
      }
      qmemcpy(v521, v513, sizeof(v521));
      v463 = *((_QWORD *)v505 + 1);
      if ( v463 < 0 )
      {
        v488 = 0;
LABEL_353:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v488, v512);
      }
      v464 = *(const void **)v505;
      if ( v463 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v522, &v514);
        v465 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v463, 1);
        if ( !v465 )
        {
          v512 = v463;
          v488 = 1;
          goto LABEL_353;
        }
      }
      else
      {
        v465 = 1;
      }
      v512 = v465;
      memcpy((void *)v465, v464, v463);
      v466 = v533;
      if ( v533 == v531 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v531);
      v467 = v532;
      v468 = 3 * v466;
      *(_QWORD *)(v532 + 8 * v468) = v463;
      *(_QWORD *)(v467 + 8 * v468 + 8) = v512;
      *(_QWORD *)(v467 + 8 * v468 + 16) = v463;
      v533 = v466 + 1;
      v534 = (__int64)&v505;
      v535 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d8232d073e884a9;
      v536 = (__int64)v521;
      v537 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v494, &unk_1017B9AD3, &v534);
      v469 = v540;
      if ( v540 == v538 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v538);
      v470 = v539;
      v471 = 3LL * (_QWORD)v469;
      *(_QWORD *)(v539 + 8 * v471 + 16) = v494[2];
      v472 = v494[0];
      *(_QWORD *)(v470 + 8 * v471 + 8) = v494[1];
      *(_QWORD *)(v470 + 8 * v471) = v472;
      v540 = v469 + 1;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v521);
    }
LABEL_349:
    v431 += 16;
    if ( v431 != 192 )
      continue;
    break;
  }
  v521[2] = v529;
  v521[1] = v528;
  v521[0] = v527;
  v521[3] = v531;
  v521[4] = v532;
  v521[5] = v533;
  v521[6] = v538;
  v521[7] = v539;
  v521[8] = v540;
  v476 = v510;
  qmemcpy(v510 + 1, v521, 0x48u);
  *v476 = 11;
  v477 = v525;
  if ( v525 )
  {
    v478 = (_QWORD *)(v524 + 8);
    do
    {
      v479 = *(v478 - 1);
      if ( v479 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v478, v479, 1);
      v478 += 3;
      --v477;
    }
    while ( v477 );
  }
  HIDWORD(_RAX) = HIDWORD(v523);
  if ( v523 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v524, 24 * v523, 8);
  v36 = v515;
  if ( v515 )
  {
    v481 = v517;
    if ( v517 )
    {
      v482 = v514;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v514));
      v484 = v514 + 1;
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v485 = _mm_movemask_epi8(_mm_load_si128(v484));
            v482 -= 24;
            ++v484;
          }
          while ( v485 == 0xFFFF );
          _R13D = ~v485;
        }
        __asm { tzcnt   eax, r13d }
        v486 = -3 * _RAX;
        v487 = *((_QWORD *)&v482[-1] + v486 - 1);
        if ( v487 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v482[-1].i64[v486], v487, 1);
        --v481;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v481 );
    }
    goto LABEL_22;
  }
LABEL_24:
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he2770c63d3b041ed(&v491);
  if ( v491 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v492, 104 * v491, 8);
  return v510;
}
