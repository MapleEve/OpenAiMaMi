// win 1.2.7 latest-exe | module src/core/oauth_refresh.rs | ea 0x140ebd950 | successor of pre-update 0x1402c30a0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
int __fastcall sub_140EBD950(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v12; // r12
  __int64 v14; // rdi
  void *v15; // r13
  __m128i si128; // xmm1
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r15
  unsigned __int128 v28; // kr00_16
  __int64 v29; // rdi
  char v30; // r13
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  char v33; // r13
  __int64 (__fastcall *v34)(unsigned __int64); // rax
  __m128i *v35; // r14
  _QWORD *v36; // rsi
  __int64 v37; // rdi
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  void *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // r12
  __int64 v43; // r15
  __m128i v44; // xmm1
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  char v53; // al
  __int64 v54; // rdx
  __int64 v55; // r12
  __m128i v56; // kr40_16
  __m128i *v57; // rax
  __int64 v58; // r13
  __int64 v59; // rdi
  __int64 v60; // r14
  __int64 v61; // rax
  _BYTE *v62; // r13
  const char *v63; // r14
  __int64 v64; // rdi
  unsigned __int8 v65; // al
  unsigned __int64 v66; // rdx
  __int64 v67; // rcx
  __m128i *v68; // rax
  __m128i v69; // xmm1
  void *v70; // rdx
  __m128i *v71; // rax
  __int64 v72; // rdx
  __int128 v73; // xmm6
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __m128i *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rdi
  unsigned __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // rax
  void *v85; // r14
  __int64 v86; // r13
  __int64 v87; // rdx
  __m128i v88; // xmm0
  __int64 v89; // r13
  __int64 v90; // r14
  __int64 v91; // rdi
  __m128i v92; // xmm0
  __m128i v93; // xmm1
  void *v94; // rsi
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // r14
  __int64 v98; // r13
  __int64 v99; // r14
  __int64 v100; // r13
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r13
  __int64 v106; // r14
  __int64 v107; // rdi
  __int64 v108; // r8
  __int64 v109; // r13
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  void *v112; // r14
  __m128i *v113; // rax
  __int64 v114; // rsi
  __int64 v115; // rdx
  __int64 v116; // rcx
  void *v117; // rsi
  void *v118; // rsi
  __int64 v119; // rcx
  __int64 v120; // rdi
  __int64 v121; // r14
  __int64 v122; // r13
  __int64 v123; // r14
  __int64 v124; // r13
  __int64 v125; // rdx
  __m128i *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdi
  unsigned __int64 v130; // r8
  __int64 v131; // r8
  __int64 v132; // rax
  char v133; // di
  __int64 v134; // rdx
  __m128i v135; // xmm1
  __int64 v136; // r14
  char v137; // di
  __int64 v138; // rbx
  __int64 v139; // rdx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 *v142; // rdi
  __int64 v143; // rcx
  __int64 v144; // rdi
  __int64 v145; // rdx
  __int64 v146; // r8
  _QWORD *v147; // r13
  __int64 v148; // rdx
  __int64 *v149; // rsi
  __int64 v150; // r15
  unsigned __int64 v151; // rcx
  unsigned __int64 v152; // rax
  __int64 v153; // rdx
  unsigned __int64 v154; // rax
  __int64 v155; // rcx
  unsigned __int64 v156; // r8
  __int64 v157; // r8
  unsigned __int64 v158; // rcx
  unsigned __int64 v159; // rax
  __int64 v160; // rdx
  unsigned __int64 v161; // rax
  __int64 v162; // rcx
  unsigned __int64 v163; // r8
  __int64 v164; // r8
  unsigned __int64 v165; // rcx
  unsigned __int64 v166; // rax
  __int64 v167; // rdx
  unsigned __int64 v168; // rax
  __int64 v169; // rcx
  unsigned __int64 v170; // r8
  __int64 v171; // r8
  unsigned __int64 v172; // rcx
  unsigned __int64 v173; // rax
  __int64 v174; // rdx
  unsigned __int64 v175; // rax
  __int64 v176; // rcx
  unsigned __int64 v177; // r8
  __int64 v178; // r8
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 *v181; // r14
  __int64 *v182; // rsi
  __int64 v183; // r15
  unsigned __int64 v184; // rcx
  unsigned __int64 v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rcx
  unsigned __int64 v189; // r8
  __int64 v190; // r8
  unsigned __int64 v191; // rcx
  unsigned __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rax
  __int64 v195; // rcx
  unsigned __int64 v196; // r8
  __int64 v197; // r8
  unsigned __int64 v198; // rcx
  unsigned __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rax
  __int64 v202; // rcx
  unsigned __int64 v203; // r8
  __int64 v204; // r8
  __m128i v205; // xmm0
  __int64 v206; // rax
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rdx
  __int64 v212; // r8
  __int64 v213; // rcx
  __int64 v214; // rax
  __int64 v215; // rax
  __m128i v216; // kr10_16
  __m128i v217; // xmm1
  __m128i v218; // xmm0
  __m128i *v219; // rax
  __int64 v220; // r15
  __int64 v221; // rsi
  __m128i v222; // xmm0
  __m128i v223; // xmm1
  __int64 v224; // r14
  __m128i v225; // xmm1
  __int64 v226; // r15
  __m128i v227; // xmm0
  __m128i v228; // xmm1
  __int64 v229; // r14
  __int64 v230; // rsi
  __m128i v231; // xmm0
  __int64 v232; // rax
  __m128i v233; // xmm0
  __m128i v234; // xmm0
  __m128i v235; // xmm1
  __m128i v236; // xmm1
  __m128i v237; // xmm0
  __m128i v238; // xmm1
  __m128i v239; // xmm0
  __m128i v240; // xmm1
  __int64 v241; // rcx
  unsigned __int64 v242; // r8
  __int64 v243; // r8
  __m128i v244; // kr20_16
  __int64 v245; // rax
  __m128i v246; // xmm0
  __m128i v247; // xmm1
  __m128i v248; // xmm0
  __m128i v249; // xmm1
  __int64 v250; // rcx
  unsigned __int64 v251; // r8
  __int64 v252; // r8
  __int64 v253; // rdx
  __int64 v254; // rdx
  __int64 v255; // rax
  __int64 v256; // rax
  __int64 v257; // rax
  _BYTE v258[176]; // [rsp+38h] [rbp-48h] BYREF
  __m128i v259; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v260; // [rsp+F8h] [rbp+78h]
  __m128i v261; // [rsp+100h] [rbp+80h] BYREF
  __int64 v262; // [rsp+110h] [rbp+90h]
  __m128i v263; // [rsp+118h] [rbp+98h] BYREF
  __int64 v264; // [rsp+128h] [rbp+A8h]
  __m128i v265; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v266; // [rsp+140h] [rbp+C0h]
  __m128i v267; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v268; // [rsp+158h] [rbp+D8h]
  __m128i v269; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v270; // [rsp+170h] [rbp+F0h]
  __m128i v271; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v272; // [rsp+188h] [rbp+108h]
  __m128i v273; // [rsp+190h] [rbp+110h] BYREF
  __int64 v274; // [rsp+1A0h] [rbp+120h]
  __m128i v275; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v276; // [rsp+1B8h] [rbp+138h]
  __m128i v277; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v278; // [rsp+1D0h] [rbp+150h]
  __m128i v279; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v280; // [rsp+1E8h] [rbp+168h]
  __m128i v281; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v282; // [rsp+200h] [rbp+180h] BYREF
  __int64 v283; // [rsp+210h] [rbp+190h]
  HANDLE hObject[2]; // [rsp+218h] [rbp+198h] BYREF
  __m128i v285; // [rsp+228h] [rbp+1A8h]
  __m128i v286; // [rsp+238h] [rbp+1B8h]
  __m128i v287; // [rsp+248h] [rbp+1C8h]
  __int64 v288; // [rsp+258h] [rbp+1D8h]
  __m128i v289; // [rsp+260h] [rbp+1E0h] BYREF
  const char *v290; // [rsp+270h] [rbp+1F0h]
  __int64 v291; // [rsp+278h] [rbp+1F8h]
  const char *v292; // [rsp+280h] [rbp+200h]
  __int64 v293; // [rsp+288h] [rbp+208h]
  __int64 v294; // [rsp+290h] [rbp+210h]
  void *v295; // [rsp+298h] [rbp+218h]
  const char *v296; // [rsp+2A0h] [rbp+220h]
  __int64 v297; // [rsp+2A8h] [rbp+228h]
  const char *v298; // [rsp+2B0h] [rbp+230h]
  __int64 v299; // [rsp+2B8h] [rbp+238h]
  __int64 v300; // [rsp+2C0h] [rbp+240h]
  __int64 v301; // [rsp+2C8h] [rbp+248h]
  __m128i *v302; // [rsp+2D0h] [rbp+250h] BYREF
  __m128i v303; // [rsp+2D8h] [rbp+258h]
  __int64 v304; // [rsp+2E8h] [rbp+268h]
  char v305[72]; // [rsp+2F0h] [rbp+270h] BYREF
  unsigned __int16 v306; // [rsp+338h] [rbp+2B8h]
  __int64 v307; // [rsp+380h] [rbp+300h]
  __int128 v308; // [rsp+390h] [rbp+310h] BYREF
  __int64 v309; // [rsp+3A0h] [rbp+320h]
  __m128i v310; // [rsp+3B0h] [rbp+330h] BYREF
  __m128i v311; // [rsp+3C0h] [rbp+340h] BYREF
  __m128i v312; // [rsp+3D0h] [rbp+350h]
  __int64 v313; // [rsp+3E0h] [rbp+360h]
  __int64 v314; // [rsp+3F8h] [rbp+378h] BYREF
  _BYTE v315[24]; // [rsp+400h] [rbp+380h] BYREF
  __int64 v316; // [rsp+418h] [rbp+398h]
  __int64 v317; // [rsp+420h] [rbp+3A0h]
  __int64 v318; // [rsp+428h] [rbp+3A8h]
  __int64 v319; // [rsp+430h] [rbp+3B0h]
  __int64 v320; // [rsp+438h] [rbp+3B8h]
  __int64 v321; // [rsp+440h] [rbp+3C0h]
  __int64 v322; // [rsp+448h] [rbp+3C8h]
  __int64 v323; // [rsp+450h] [rbp+3D0h]
  __int64 v324; // [rsp+458h] [rbp+3D8h] BYREF
  __int64 v325; // [rsp+460h] [rbp+3E0h]
  unsigned __int64 v326; // [rsp+468h] [rbp+3E8h]
  __int64 v327; // [rsp+470h] [rbp+3F0h]
  __int64 v328; // [rsp+478h] [rbp+3F8h]
  __m256i *v329; // [rsp+480h] [rbp+400h] BYREF
  char v330; // [rsp+488h] [rbp+408h]
  __m128i v331; // [rsp+490h] [rbp+410h] BYREF
  __m128i v332; // [rsp+4A0h] [rbp+420h] BYREF
  __int128 v333; // [rsp+4B0h] [rbp+430h]
  __int64 v334; // [rsp+4C0h] [rbp+440h]
  HANDLE v335[2]; // [rsp+4C8h] [rbp+448h] BYREF
  HANDLE v336; // [rsp+4D8h] [rbp+458h] BYREF
  _BYTE v337[80]; // [rsp+4E0h] [rbp+460h] BYREF
  __m128i v338; // [rsp+530h] [rbp+4B0h] BYREF
  __m128i v339; // [rsp+540h] [rbp+4C0h]
  __int64 v340; // [rsp+550h] [rbp+4D0h]
  __int64 v341; // [rsp+558h] [rbp+4D8h]
  __int64 v342; // [rsp+560h] [rbp+4E0h]
  __m128i v343; // [rsp+570h] [rbp+4F0h]
  __int64 v344; // [rsp+580h] [rbp+500h]
  __m256i v345; // [rsp+630h] [rbp+5B0h] BYREF
  __m256i v346; // [rsp+650h] [rbp+5D0h] BYREF
  __int128 v347; // [rsp+670h] [rbp+5F0h]
  __int128 v348; // [rsp+680h] [rbp+600h]
  __int64 v349; // [rsp+6E0h] [rbp+660h]
  __int64 v350; // [rsp+6E8h] [rbp+668h]
  __m256i v351; // [rsp+6F0h] [rbp+670h] BYREF
  _BYTE v352[24]; // [rsp+710h] [rbp+690h]
  char v353; // [rsp+728h] [rbp+6A8h]
  __int64 v354; // [rsp+738h] [rbp+6B8h]
  __int64 v355; // [rsp+740h] [rbp+6C0h]
  __int64 v356; // [rsp+748h] [rbp+6C8h]
  __int128 v357; // [rsp+750h] [rbp+6D0h]
  __m128i v358; // [rsp+760h] [rbp+6E0h] BYREF
  __m128i v359; // [rsp+770h] [rbp+6F0h] BYREF
  _BYTE v360[72]; // [rsp+780h] [rbp+700h] BYREF
  __int64 v361; // [rsp+7C8h] [rbp+748h]
  __int64 v362; // [rsp+7D0h] [rbp+750h]
  __int64 v363; // [rsp+7D8h] [rbp+758h]
  __int64 v364; // [rsp+7E0h] [rbp+760h]
  __int64 v365; // [rsp+7E8h] [rbp+768h]
  __int64 v366; // [rsp+7F0h] [rbp+770h]
  __int64 v367; // [rsp+7F8h] [rbp+778h]
  __int64 v368; // [rsp+810h] [rbp+790h]
  __int64 v369; // [rsp+818h] [rbp+798h]
  __int64 v370; // [rsp+8B0h] [rbp+830h]
  __int64 v371; // [rsp+8B8h] [rbp+838h]
  __int64 v372; // [rsp+8C0h] [rbp+840h]
  __int64 v373; // [rsp+8C8h] [rbp+848h]
  void *v374; // [rsp+8D0h] [rbp+850h]
  __int64 v375; // [rsp+8D8h] [rbp+858h]
  __int64 v376; // [rsp+8E0h] [rbp+860h]
  __int64 v377; // [rsp+8E8h] [rbp+868h]
  __int64 v378; // [rsp+8F0h] [rbp+870h]
  __int64 v379; // [rsp+8F8h] [rbp+878h]
  unsigned __int64 v380; // [rsp+900h] [rbp+880h]
  __int64 v381; // [rsp+908h] [rbp+888h]
  __int64 v382; // [rsp+910h] [rbp+890h]
  char v383; // [rsp+91Dh] [rbp+89Dh]
  char v384; // [rsp+91Eh] [rbp+89Eh]
  char v385; // [rsp+91Fh] [rbp+89Fh]
  __int64 v386; // [rsp+920h] [rbp+8A0h]
  unsigned __int64 v387; // [rsp+928h] [rbp+8A8h]
  char v388; // [rsp+932h] [rbp+8B2h]
  char v389; // [rsp+933h] [rbp+8B3h]
  char v390; // [rsp+934h] [rbp+8B4h]
  char v391; // [rsp+935h] [rbp+8B5h]
  char v392; // [rsp+936h] [rbp+8B6h]
  char v393; // [rsp+937h] [rbp+8B7h] BYREF
  __int64 v394; // [rsp+938h] [rbp+8B8h]
  __int64 v395; // [rsp+940h] [rbp+8C0h]
  char v396; // [rsp+94Ch] [rbp+8CCh]
  char v397; // [rsp+94Dh] [rbp+8CDh]
  char v398; // [rsp+94Eh] [rbp+8CEh]
  char v399; // [rsp+94Fh] [rbp+8CFh]
  __int64 v400; // [rsp+950h] [rbp+8D0h]
  __int64 v401; // [rsp+958h] [rbp+8D8h]
  char v402; // [rsp+966h] [rbp+8E6h]
  char v403; // [rsp+967h] [rbp+8E7h]
  __int64 v404; // [rsp+968h] [rbp+8E8h]
  char v405; // [rsp+972h] [rbp+8F2h]
  char v406; // [rsp+973h] [rbp+8F3h]
  char v407; // [rsp+974h] [rbp+8F4h]
  char v408; // [rsp+975h] [rbp+8F5h]
  char v409; // [rsp+976h] [rbp+8F6h]
  char v410; // [rsp+977h] [rbp+8F7h]
  __int64 v411; // [rsp+978h] [rbp+8F8h]

  v411 = -2;
  v12 = a2;
  sub_140CA6050(&v345, a2, a3);
  v394 = v345.m256i_i64[1];
  sub_140C97180((unsigned int)&v358, v345.m256i_i32[2], v345.m256i_i32[4], (unsigned int)aAccountCredent, 18);
  v14 = v358.m128i_i64[0];
  if ( v358.m128i_i64[0] != -1 )
  {
    *(_OWORD *)&v337[64] = *(_OWORD *)&v360[48];
    *(_OWORD *)&v337[48] = *(_OWORD *)&v360[32];
    *(_OWORD *)&v337[32] = *(_OWORD *)&v360[16];
    *(__m128i *)&v337[16] = _mm_loadu_si128((const __m128i *)v360);
    *(__m128i *)v337 = _mm_loadu_si128(&v359);
  }
  v15 = (void *)v358.m128i_i64[1];
  if ( v345.m256i_i64[0] )
    sub_140001660(v394, v345.m256i_i64[0], 1);
  if ( (_DWORD)v14 != -1 )
  {
    v358.m128i_i64[0] = v14;
    v358.m128i_i64[1] = (__int64)v15;
    si128 = _mm_load_si128((const __m128i *)&v337[16]);
    v359 = *(__m128i *)v337;
    *(__m128i *)v360 = si128;
    *(_OWORD *)&v360[16] = *(_OWORD *)&v337[32];
    *(_OWORD *)&v360[32] = *(_OWORD *)&v337[48];
    *(__m128i *)&v360[48] = _mm_load_si128((const __m128i *)&v337[64]);
    v302 = nullptr;
    v303 = (__m128i)1uLL;
    v345.m256i_i64[2] = 1610612768;
    v345.m256i_i64[0] = (__int64)&v302;
    v345.m256i_i64[1] = (__int64)&off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(&v358, &v345) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v393,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    a1[1].m128i_i64[0] = v303.m128i_i64[1];
    *a1 = _mm_loadu_si128((const __m128i *)&v302);
    return sub_140D8A3A0(&v358);
  }
  v336 = v15;
  sub_140718ED0(&v358, v12, a3);
  if ( v358.m128i_i64[0] == -2 )
  {
    v338 = *(__m128i *)&v360[56];
    *(_OWORD *)&v337[64] = *(_OWORD *)&v360[40];
    v18 = _mm_loadu_si128((const __m128i *)&v358.m128i_u64[1]);
    v19 = _mm_loadu_si128((const __m128i *)&v359.m128i_u64[1]);
    *(_OWORD *)&v337[48] = *(_OWORD *)&v360[24];
    *(_OWORD *)&v337[32] = *(_OWORD *)&v360[8];
    *(__m128i *)&v337[16] = v19;
    *(__m128i *)v337 = v18;
    v345.m256i_i64[0] = (__int64)v337;
    v345.m256i_i64[1] = (__int64)sub_140D76130;
    sub_1416DAFA0(&v279, &unk_141AA1652, &v345);
    a1[1].m128i_i64[0] = v280;
    *a1 = _mm_loadu_si128(&v279);
    sub_140D8A3A0(v337);
LABEL_162:
    v79 = sub_14143F370(&v336);
    if ( v79 && (unsigned int)(v79 & 3) - 2 >= 2 && (v79 & 3) != 0 )
    {
      v358.m128i_i64[1] = v79 - 1;
      v358.m128i_i8[0] = 3;
      sub_1416EBAD0(&v358.m128i_u64[1]);
    }
    return CloseHandle(v336);
  }
  sub_1419234B0(v258, &v358, 176);
  v20 = *a4;
  if ( *a4 != -1 && v20 )
    sub_140001660(a4[1], v20, 1);
  v21 = a4[3];
  if ( v21 != -1 && v21 )
    sub_140001660(a4[4], v21, 1);
  v394 = a3;
  sub_140037770(a4 + 6);
  v22 = a4[18];
  if ( v22 != -1 && v22 )
    sub_140001660(a4[19], v22, 1);
  sub_1419234B0(a4, v258, 176);
  v335[0] = nullptr;
  v25 = -1;
  if ( !a8 )
  {
    v30 = 0;
    LODWORD(v382) = 0;
    v27 = v394;
    goto LABEL_93;
  }
  v386 = -1;
  v410 = 1;
  sub_1416CC450(&v345, a8, a9);
  v27 = v394;
  v28 = *(_OWORD *)v345.m256i_i8;
  if ( v345.m256i_i64[0] == -1 )
  {
    v31 = v345.m256i_i8[8] & 3;
    switch ( v345.m256i_i8[8] & 3 )
    {
      case 0:
        LOBYTE(v32) = *(_BYTE *)(v345.m256i_i64[1] + 16);
        break;
      case 1:
        LOBYTE(v32) = *(_BYTE *)(v345.m256i_i64[1] + 31);
        break;
      case 2:
        v387 = v345.m256i_u64[1];
        v400 = v345.m256i_i64[0];
        v392 = 1;
        v34 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v26, v345.m256i_i64[1]) + 8);
        v392 = 1;
        LOBYTE(v32) = v34(HIDWORD(v387));
        v28 = __PAIR128__(v387, v400);
        break;
      case 3:
        v32 = HIDWORD(v345.m256i_i64[1]);
        break;
    }
    if ( !(_BYTE)v32 )
    {
      v400 = v28;
      v392 = 0;
      v387 = *((_QWORD *)&v28 + 1);
      sub_14028F450(*((_QWORD *)&v28 + 1));
      v30 = 0;
      LODWORD(v382) = 0;
      v25 = -1;
      goto LABEL_93;
    }
    if ( (unsigned int)(v31 - 2) >= 2 && v31 )
    {
      v358.m128i_i64[1] = *((_QWORD *)&v28 + 1) - 1LL;
      v358.m128i_i8[0] = 3;
      v386 = -1;
      v410 = 1;
      sub_1416EBAD0(&v358.m128i_u64[1]);
    }
  }
  else
  {
    v387 = v345.m256i_u64[1];
    v400 = v345.m256i_i64[0];
    v358 = *(__m128i *)&v345.m256i_u64[1];
    v359 = 0;
    sub_140D8EBC0(v337, &v358);
    v29 = *(_QWORD *)v337;
    if ( *(_QWORD *)v337 == -2 )
    {
      sub_140429AA0(*(_QWORD *)&v337[8]);
      if ( v400 )
        sub_140001660(v387, v400, 1);
    }
    else
    {
      sub_1419234B0(&v358.m128i_u64[1], &v337[8], 168);
      v358.m128i_i64[0] = v29;
      v33 = sub_14071CA60(&v358, a4, a8, a9);
      if ( v29 != -1 && v29 )
        sub_140001660(v358.m128i_i64[1], v29, 1);
      if ( v359.m128i_i64[1] != -1 && v359.m128i_i64[1] )
        sub_140001660(*(_QWORD *)v360, v359.m128i_i64[1], 1);
      v25 = -1;
      if ( *(_QWORD *)&v360[16] != -1 && *(_QWORD *)&v360[16] )
        sub_140001660(*(_QWORD *)&v360[24], *(_QWORD *)&v360[16], 1);
      if ( *(_QWORD *)&v360[40] != -1 && *(_QWORD *)&v360[40] )
        sub_140001660(*(_QWORD *)&v360[48], *(_QWORD *)&v360[40], 1);
      if ( *(_QWORD *)&v360[64] != -1 && *(_QWORD *)&v360[64] )
        sub_140001660(v361, *(_QWORD *)&v360[64], 1);
      if ( v363 != -1 && v363 )
        sub_140001660(v364, v363, 1);
      if ( v366 != -1 && v366 )
        sub_140001660(v367, v366, 1);
      v23 = v400;
      if ( v400 )
        sub_140001660(v387, v400, 1);
      if ( !v33 )
      {
        v30 = 0;
        LODWORD(v382) = 0;
        goto LABEL_93;
      }
    }
  }
  v386 = -1;
  v410 = 1;
  sub_1416B18A0((unsigned int)&v345, a6, a7, (unsigned int)aLiveAuthLockli, 15);
  v35 = a1;
  v400 = v345.m256i_i64[1];
  sub_140C97180((unsigned int)&v358, v345.m256i_i32[2], v345.m256i_i32[4], (unsigned int)&aLiveAuthLockli[15], 9);
  v36 = a4;
  v37 = v358.m128i_i64[0];
  if ( v358.m128i_i64[0] != -1 )
  {
    *(_OWORD *)&v337[64] = *(_OWORD *)&v360[48];
    v38 = _mm_loadu_si128(&v359);
    v39 = _mm_loadu_si128((const __m128i *)v360);
    *(_OWORD *)&v337[48] = *(_OWORD *)&v360[32];
    *(_OWORD *)&v337[32] = *(_OWORD *)&v360[16];
    *(__m128i *)&v337[16] = v39;
    *(__m128i *)v337 = v38;
  }
  v40 = (void *)v358.m128i_i64[1];
  if ( v345.m256i_i64[0] )
  {
    v41 = v12;
    v42 = v27;
    v43 = v358.m128i_i64[1];
    sub_140001660(v400, v345.m256i_i64[0], 1);
    v40 = (void *)v43;
    v27 = v42;
    v12 = v41;
  }
  if ( (_DWORD)v37 != -1 )
  {
    v358.m128i_i64[0] = v37;
    v358.m128i_i64[1] = (__int64)v40;
    v44 = _mm_load_si128((const __m128i *)&v337[16]);
    v359 = *(__m128i *)v337;
    *(__m128i *)v360 = v44;
    *(_OWORD *)&v360[16] = *(_OWORD *)&v337[32];
    *(_OWORD *)&v360[32] = *(_OWORD *)&v337[48];
    *(__m128i *)&v360[48] = _mm_load_si128((const __m128i *)&v337[64]);
    v302 = nullptr;
    v303 = (__m128i)1uLL;
    v345.m256i_i64[2] = 1610612768;
    v345.m256i_i64[0] = (__int64)&v302;
    v345.m256i_i64[1] = (__int64)&off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(&v358, &v345) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v393,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    v35[1].m128i_i64[0] = v303.m128i_i64[1];
    *v35 = _mm_loadu_si128((const __m128i *)&v302);
    v386 = -1;
    v410 = 1;
    sub_140D8A3A0(&v358);
LABEL_77:
    v25 = -1;
LABEL_154:
    if ( v335[0] )
    {
      v400 = v25;
      v78 = sub_14143F370(&v335[1]);
      if ( v78 && (unsigned int)(v78 & 3) - 2 >= 2 && (v78 & 3) != 0 )
      {
        v358.m128i_i64[1] = v78 - 1;
        v358.m128i_i8[0] = 3;
        sub_1416EBAD0(&v358.m128i_u64[1]);
      }
      CloseHandle(v335[1]);
      v25 = v400;
    }
    if ( v25 > 0 )
      sub_140001660(v387, v25, 1);
    goto LABEL_162;
  }
  v374 = v40;
  hObject[0] = v40;
  sub_1416CC450(&v345, a8, a9);
  a4 = v36;
  a1 = v35;
  if ( v345.m256i_i64[0] == -1 )
  {
    *(_QWORD *)v337 = v345.m256i_i64[1];
    v358.m128i_i64[0] = (__int64)v337;
    v358.m128i_i64[1] = (__int64)sub_1416EA080;
    sub_1416DAFA0(&v273, &unk_141AA1347, &v358);
    v35[1].m128i_i64[0] = v274;
    *v35 = _mm_loadu_si128(&v273);
    v327 = -1;
    v390 = 1;
    sub_14028F450(*(_QWORD *)v337);
    goto LABEL_72;
  }
  v387 = v345.m256i_u64[1];
  v400 = v345.m256i_i64[0];
  v358 = *(__m128i *)&v345.m256i_u64[1];
  v355 = v345.m256i_i64[2];
  v359 = 0;
  v328 = -1;
  v391 = 1;
  sub_140D8EBC0(v337, &v358);
  if ( *(_QWORD *)v337 == -2 )
  {
    v302 = *(__m128i **)&v337[8];
    v358.m128i_i64[0] = (__int64)&v302;
    v358.m128i_i64[1] = (__int64)sub_14166FAD0;
    sub_1416DAFA0(&v275, &unk_141AA1314, &v358);
    v35[1].m128i_i64[0] = v276;
    *v35 = _mm_loadu_si128(&v275);
    v349 = -1;
    v403 = 1;
    v402 = 1;
    sub_140429AA0(v302);
    v45 = v400;
    if ( !v400 )
      goto LABEL_72;
    goto LABEL_69;
  }
  v349 = -1;
  v403 = 1;
  v402 = 1;
  LODWORD(v382) = sub_14071CA60(v337, a4, a8, a9);
  if ( (_BYTE)v382 )
  {
    sub_1419234B0(&v358, v337, 176);
    v334 = -1;
    v399 = 1;
    v398 = 1;
    v47 = sub_140EBCBC0(a4, v337);
    v30 = v47;
    LOBYTE(v47) = 1;
    if ( !v30 )
    {
      v334 = -1;
      v399 = 1;
      v398 = 1;
      v48 = sub_140EBD490(v12, v27, v387, v355);
      if ( v48 )
      {
        v289.m128i_i64[0] = v48;
        v302 = &v289;
        v303.m128i_i64[0] = (__int64)sub_1416EA080;
        sub_1416DAFA0(&v277, &unk_141AA12DA, &v302);
        v35[1].m128i_i64[0] = v278;
        *v35 = _mm_loadu_si128(&v277);
        v334 = -1;
        v399 = 1;
        v398 = 1;
        sub_14028F450(v289.m128i_i64[0]);
        sub_1400378C0(&v358);
        v45 = v400;
        if ( v400 )
LABEL_69:
          sub_140001660(v387, v45, 1);
LABEL_72:
        v46 = sub_14143F370(hObject);
        if ( v46 && (unsigned int)(v46 & 3) - 2 >= 2 && (v46 & 3) != 0 )
        {
          v358.m128i_i64[1] = v46 - 1;
          v358.m128i_i8[0] = 3;
          sub_1416EBAD0(&v358.m128i_u64[1]);
        }
        CloseHandle(hObject[0]);
        goto LABEL_77;
      }
      sub_1400378C0(a4);
      sub_1419234B0(a4, v337, 176);
      v47 = 0;
    }
    LODWORD(v354) = v47;
    sub_140CB38B0(v335);
    v335[0] = HANDLE_FLAG_INHERIT;
    v335[1] = v374;
    if ( (_BYTE)v354 )
      sub_1400378C0(v337);
    v25 = v400;
  }
  else
  {
    if ( *(_QWORD *)off_14223FF10 < 3u )
      goto LABEL_85;
    v358.m128i_i64[0] = (__int64)aCodexmateLibCo_51;
    v358.m128i_i64[1] = 34;
    v359.m128i_i64[0] = (__int64)aCodexmateLibCo_51;
    v359.m128i_i64[1] = 34;
    *(_QWORD *)v360 = &off_141AA12A0;
    v349 = -1;
    v403 = 1;
    v402 = 1;
    sub_140AF72B0(&unk_141AA123F, 137, 3, &v358);
    if ( *(_QWORD *)v337 != -2 )
LABEL_85:
      sub_1400378C0(v337);
    if ( v400 )
      sub_140001660(v387, v400, 1);
    v386 = -1;
    v410 = 1;
    sub_1401AF000(hObject);
    v25 = -1;
    v30 = 0;
  }
LABEL_93:
  if ( a10 )
  {
    if ( (_BYTE)v382 )
    {
      v380 = v387;
      v49 = v25;
      v386 = v25;
      v410 = 1;
      if ( (unsigned int)sub_140D6E640(aChatgpt, 7) == 1 )
        goto LABEL_118;
      v380 = v387;
      v386 = v25;
      v410 = 1;
      if ( (unsigned int)sub_140D6E640(aCodex_2, 5) == 1 )
        goto LABEL_118;
      v380 = v387;
      v386 = v25;
      v410 = 1;
      sub_14098E080(&v358);
      if ( v358.m128i_i32[0] != -1 )
      {
        v380 = v387;
        v386 = v25;
        v410 = 1;
        sub_140D8A3A0(&v358);
        goto LABEL_118;
      }
    }
    goto LABEL_120;
  }
  if ( a4[9] != -1 )
  {
    v23 = a4[11];
    if ( v23 )
    {
      v52 = a4[10];
      v380 = v387;
      v400 = v25;
      v386 = v25;
      v410 = 1;
      v53 = sub_140EBD860(v52);
      LOBYTE(v24) = v53 & (v23 >= 301);
      v25 = v400;
      if ( (_BYTE)v24 == 1 )
      {
        if ( v30 )
        {
          if ( !a8 )
          {
            nullsub_1(v24, v23);
            v71 = (__m128i *)sub_140001650(46, 1);
            v25 = v400;
            if ( !v71 )
            {
              v380 = v387;
              v386 = v400;
              v410 = 1;
              sub_14196B2DB(1, 46);
            }
            qmemcpy(&v71[1], "efresh lost the live auth path", 30);
            *v71 = _mm_loadu_si128((const __m128i *)&xmmword_141AA13E4);
            a1->m128i_i64[0] = 46;
            a1->m128i_i64[1] = (__int64)v71;
            a1[1].m128i_i64[0] = 46;
            goto LABEL_154;
          }
          v54 = v355;
          if ( v400 == -1 )
            v54 = 0;
          v355 = v54;
          v55 = 1;
          if ( v400 != -1 )
            v55 = v387;
          v380 = v387;
          v386 = v400;
          v410 = 1;
          if ( !(unsigned __int8)sub_140EC4BC0() )
          {
            v380 = v387;
            v386 = v400;
            v410 = 1;
            sub_1416CC450(&v358, a8, a9);
            v56 = v358;
            if ( v358.m128i_i64[0] == -1 )
            {
              v380 = v387;
              v386 = v400;
              v410 = 1;
              sub_140418430(-1, v358.m128i_i64[1]);
            }
            else if ( v359.m128i_i64[0] == v355 && !(unsigned int)sub_141923B40(v358.m128i_i64[1], v55, v355) )
            {
              if ( v56.m128i_i64[0] )
                sub_140001660(v56.m128i_i64[1], v56.m128i_i64[0], 1);
              v380 = v387;
              v386 = v400;
              v410 = 1;
              sub_140D90740(&v358, (__int64)a4);
              v394 = v358.m128i_i64[0];
              if ( v358.m128i_i64[0] == -1 )
              {
                v345.m256i_i64[0] = v358.m128i_i64[1];
                *(_QWORD *)v337 = &v345;
                *(_QWORD *)&v337[8] = sub_14166FAD0;
                sub_1416DAFA0(&v271, &unk_141AA13B5, v337);
                a1[1].m128i_i64[0] = v272;
                *a1 = _mm_loadu_si128(&v271);
                v380 = v387;
                v386 = v400;
                v410 = 1;
                sub_140429AA0(v345.m256i_i64[0]);
                goto LABEL_153;
              }
              v382 = v358.m128i_i64[1];
              if ( (sub_1407C8880(a8, a9, v358.m128i_i64[1], v359.m128i_i64[0]) & 1) != 0 )
              {
                *(_QWORD *)v337 = v127;
                v358.m128i_i64[0] = (__int64)v337;
                v358.m128i_i64[1] = (__int64)sub_1416EA080;
                sub_1416DAFA0(&v269, &unk_141AA1379, &v358);
                a1[1].m128i_i64[0] = v270;
                *a1 = _mm_loadu_si128(&v269);
                sub_14028F450(*(_QWORD *)v337);
                if ( v394 )
                  sub_140001660(v382, v394, 1);
                goto LABEL_153;
              }
              sub_1407B9160(v127);
              if ( v394 )
                sub_140001660(v382, v394, 1);
            }
            else if ( v56.m128i_i64[0] )
            {
              sub_140001660(v56.m128i_i64[1], v56.m128i_i64[0], 1);
            }
          }
        }
        a1->m128i_i64[0] = 0x8000000000000000uLL;
LABEL_153:
        v25 = v400;
        goto LABEL_154;
      }
    }
  }
  if ( (_BYTE)v382 )
  {
    v380 = v387;
    v49 = v25;
    v386 = v25;
    v410 = 1;
    if ( (unsigned __int8)sub_140EC4BC0() )
    {
      v380 = v387;
      v386 = v25;
      v410 = 1;
      if ( (unsigned __int8)sub_140EC4CF0(a4) )
      {
        a1->m128i_i64[0] = 0x8000000000000000uLL;
        goto LABEL_154;
      }
LABEL_118:
      nullsub_1(v51, v50);
      v57 = (__m128i *)sub_140001650(64, 1);
      v25 = v49;
      if ( !v57 )
      {
        v380 = v387;
        v386 = v49;
        v410 = 1;
        sub_14196B2DB(1, 64);
      }
      qmemcpy(&v57[1], "oken refresh deferred while Codex owns auth.json", 48);
      *v57 = _mm_loadu_si128((const __m128i *)&xmmword_141AA1612);
      a1->m128i_i64[0] = 64;
      a1->m128i_i64[1] = (__int64)v57;
      a1[1].m128i_i64[0] = 64;
      goto LABEL_154;
    }
  }
LABEL_120:
  if ( a4[12] == -1 || (v58 = a4[14]) == 0 )
  {
    a1->m128i_i64[0] = 0x8000000000000002uLL;
    goto LABEL_154;
  }
  v400 = v25;
  if ( v58 < 0 )
  {
    v59 = 0;
    goto LABEL_124;
  }
  v60 = a4[13];
  nullsub_1(v24, v23);
  v59 = 1;
  v61 = sub_140001650(v58, 1);
  if ( !v61 )
  {
LABEL_124:
    v380 = v387;
    v386 = v400;
    v410 = 1;
    sub_14196B2DB(v59, v58);
  }
  v354 = v61;
  v374 = (void *)v58;
  sub_1419234B0(v61, v60, v58);
  v408 = 1;
  sub_140710E50(v337, a5);
  if ( *(_QWORD *)v337 != -1 )
  {
    if ( *(_DWORD *)v337 == 6 )
    {
      v302 = *(__m128i **)&v337[8];
      v345.m256i_i64[0] = (__int64)&v302;
      v345.m256i_i64[1] = (__int64)sub_141246C00;
      sub_1416DAFA0(&v358, &unk_141A9F494, &v345);
      v289 = _mm_loadu_si128(&v358);
      v290 = (const char *)v359.m128i_i64[0];
      v408 = 1;
      sub_14028DCE0(v302);
    }
    else
    {
      v358 = *(__m128i *)v337;
      v69 = _mm_loadu_si128((const __m128i *)&v337[32]);
      v359 = *(__m128i *)&v337[16];
      *(__m128i *)v360 = v69;
      *(_OWORD *)&v360[16] = *(_OWORD *)&v337[48];
      *(_OWORD *)&v360[32] = *(_OWORD *)&v337[64];
      *(__m128i *)&v360[48] = _mm_loadu_si128(&v338);
      v302 = nullptr;
      v303 = (__m128i)1uLL;
      v345.m256i_i64[2] = 1610612768;
      v345.m256i_i64[0] = (__int64)&v302;
      v345.m256i_i64[1] = (__int64)&off_141AA1A90;
      if ( (unsigned __int8)sub_140D76130(&v358, &v345) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v393,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v290 = (const char *)v303.m128i_i64[1];
      v289 = _mm_loadu_si128((const __m128i *)&v302);
      v408 = 1;
      sub_140D8A3A0(&v358);
    }
    *(__m128i *)v315 = _mm_load_si128(&v289);
    *(_QWORD *)&v315[16] = v290;
    v25 = v400;
    v70 = v374;
    goto LABEL_137;
  }
  v62 = &v337[8];
  v308 = *(_OWORD *)&v337[8];
  v309 = *(_QWORD *)&v337[24];
  v289.m128i_i64[0] = (__int64)aGrantType_0;
  v289.m128i_i64[1] = 10;
  v63 = aRefreshToken_2;
  v290 = aRefreshToken_2;
  v291 = 13;
  v292 = aRefreshToken_2;
  v293 = 13;
  v294 = v354;
  v295 = v374;
  v296 = aClientId_0;
  v297 = 9;
  v298 = aAppEmoameez73f_0;
  v299 = 28;
  *(_QWORD *)&v337[16] = 0x202020202020202LL;
  *(__m128i *)v337 = _mm_load_si128((const __m128i *)&xmmword_141A04610);
  sub_140B6A570((unsigned int)&v358, (unsigned int)&v308, (unsigned int)v337, (unsigned int)&unk_141AA1190, 35);
  sub_1406600F0((unsigned int)v337, (unsigned int)&v358, (unsigned int)aUserAgent_3, 10, (__int64)&unk_141AA11BD, 12, 0);
  sub_1406600F0((unsigned int)&v358, (unsigned int)v337, (unsigned int)aAccept_1, 6, (__int64)&unk_141AA11CF, 16, 0);
  sub_141271440(v337, &v358, 15, 0);
  sub_140660B60(&v358, v337, &v289);
  sub_141271350(&v345, &v358);
  v64 = v345.m256i_i64[0];
  if ( v345.m256i_i64[0] == -1 )
  {
    v331.m128i_i64[0] = v345.m256i_i64[1];
    *(_QWORD *)v337 = &v331;
    *(_QWORD *)&v337[8] = sub_141246C00;
    sub_1416DAFA0(&v358, &unk_141A9F4DC, v337);
    *(__m128i *)v337 = _mm_loadu_si128(&v358);
    *(_QWORD *)&v337[16] = v359.m128i_i64[0];
    sub_14028DCE0(v331.m128i_i64[0]);
    *(__m128i *)v315 = _mm_load_si128((const __m128i *)v337);
    *(_QWORD *)&v315[16] = *(_QWORD *)&v337[16];
    v314 = -1;
    goto LABEL_180;
  }
  v351.m256i_i64[2] = v345.m256i_i64[3];
  *(_OWORD *)v351.m256i_i8 = *(_OWORD *)&v345.m256i_u64[1];
  sub_1419234B0(v305, &v346, 144);
  v311.m128i_i64[0] = v351.m256i_i64[2];
  v303 = _mm_load_si128((const __m128i *)&v351);
  v304 = v351.m256i_i64[2];
  v302 = (__m128i *)v64;
  v395 = v306;
  v385 = 1;
  v65 = sub_141255DB0(&v302);
  if ( ((v66 >= 0x40001) & v65) != 0 )
  {
    LOBYTE(v67) = v66 >= 0x40001;
    nullsub_1(v67, v66);
    v68 = (__m128i *)sub_140001650(47, 1);
    if ( !v68 )
    {
      v385 = 1;
      sub_14196B2DB(1, 47);
    }
    qmemcpy(&v68[1], "esponse exceeded the size limit", 31);
    *v68 = _mm_loadu_si128((const __m128i *)&xmmword_141AA11F7);
    *(_QWORD *)v315 = 47;
    *(_QWORD *)&v315[8] = v68;
    *(_QWORD *)&v315[16] = 47;
    v314 = -1;
    sub_140D89A00(&v302);
    goto LABEL_180;
  }
  v324 = 0;
  v325 = 1;
  v326 = 0;
  sub_1419234B0(&v358, &v302, 176);
  v368 = 262145;
  v369 = 262145;
  if ( sub_140C46A70(&v358, &v324, 0) == 1 )
  {
    v351.m256i_i64[0] = v72;
    v345.m256i_i64[0] = (__int64)&v351;
    v345.m256i_i64[1] = (__int64)sub_1416EA080;
    sub_1416DAFA0(v337, &unk_141A9F4A4, &v345);
    v73 = *(_OWORD *)v337;
    v74 = *(_QWORD *)&v337[16];
    if ( (v351.m256i_i8[0] & 3u) - 2 >= 2 && (v351.m256i_i8[0] & 3) != 0 )
    {
      v345.m256i_i64[1] = v351.m256i_i64[0] - 1;
      v345.m256i_i8[0] = 3;
      sub_1416EBAD0(&v345.m256i_u64[1]);
    }
    *(_OWORD *)v315 = v73;
    *(_QWORD *)&v315[16] = v74;
    v314 = -1;
    sub_140D89A00(&v358);
    goto LABEL_178;
  }
  sub_140D89A00(&v358);
  if ( v326 >= 0x40001 )
  {
    nullsub_1(v76, v75);
    v77 = (__m128i *)sub_140001650(47, 1);
    if ( !v77 )
      sub_14196B2DB(1, 47);
    qmemcpy(&v77[1], "esponse exceeded the size limit", 31);
    *v77 = _mm_loadu_si128((const __m128i *)&xmmword_141AA11F7);
    *(_QWORD *)v315 = 47;
    *(_QWORD *)&v315[8] = v77;
    *(_QWORD *)&v315[16] = 47;
    goto LABEL_150;
  }
  if ( (unsigned __int16)(v395 - 200) < 0x64u )
  {
    v345.m256i_i64[3] = v325;
    v346.m256i_i64[0] = v326;
    v345.m256i_i64[0] = 0;
    *(_OWORD *)&v346.m256i_u64[1] = 0;
    *(_OWORD *)&v345.m256i_u64[1] = 1u;
    v346.m256i_i8[24] = 0x80;
    if ( !v326 )
    {
LABEL_173:
      v358.m128i_i64[0] = 5;
      v84 = sub_141942360((__int64)&v345, (__int64)&v358);
      goto LABEL_174;
    }
    v80 = 1;
    v81 = 0x100002600LL;
    while ( 1 )
    {
      v82 = *(unsigned __int8 *)(v325 + v80 - 1);
      if ( v82 > 0x20 || !_bittest64(&v81, v82) )
        break;
      v346.m256i_i64[1] = v80;
      v83 = v80 - v326 + 1;
      ++v80;
      if ( v83 == 1 )
        goto LABEL_173;
    }
    v375 = (__int64)a1;
    if ( (_DWORD)v82 != 91 )
    {
      if ( (_DWORD)v82 != 123 )
      {
        v85 = (void *)sub_141942750(&v345, (__int64)&v393, (__int64)&unk_141A9EA68);
LABEL_591:
        v84 = sub_1419405B0((__int64)v85, (__int64)&v345);
        v27 = v394;
        a1 = (__m128i *)v375;
LABEL_174:
        v85 = (void *)v84;
        v86 = -1;
        v87 = v345.m256i_i64[0];
        if ( !v345.m256i_i64[0] )
        {
LABEL_176:
          if ( v86 != -1 )
          {
            v88 = _mm_load_si128(&v310);
            v286 = _mm_load_si128(&v311);
            v287 = v312;
            v288 = v313;
            hObject[0] = (HANDLE)v86;
            hObject[1] = v85;
            v285 = v88;
            sub_140EC4A60(&v314, hObject);
LABEL_178:
            if ( v324 )
              sub_140001660(v325, v324, 1);
LABEL_180:
            if ( _InterlockedDecrement64((volatile signed __int64 *)v308) )
              goto LABEL_182;
            goto LABEL_181;
          }
          sub_140E9AC30(&v358, v85);
          *(__m128i *)&v315[8] = _mm_loadu_si128((const __m128i *)&v358.m128i_u64[1]);
          *(_QWORD *)v315 = v358.m128i_i64[0];
LABEL_150:
          v314 = -1;
          goto LABEL_178;
        }
LABEL_175:
        sub_140001660(v345.m256i_i64[1], v87, 1);
        goto LABEL_176;
      }
      v346.m256i_i8[24] = 127;
      v346.m256i_i64[1] = v80;
      v331.m128i_i64[0] = (__int64)&v345;
      v331.m128i_i8[8] = 1;
      v401 = -2;
      v395 = -1;
      v404 = -2;
      while ( 1 )
      {
        v378 = v395;
        v377 = v401;
        v376 = v404;
        sub_140DD9DE0(v358.m128i_i8, &v331);
        if ( v358.m128i_i8[0] == 1 )
        {
          v150 = v358.m128i_i64[1];
          goto LABEL_515;
        }
        if ( v358.m128i_i8[1] != 1 )
          break;
        v147 = (_QWORD *)v331.m128i_i64[0];
        v148 = v331.m128i_i64[0] + 24;
        ++*(_QWORD *)(v331.m128i_i64[0] + 40);
        v147[2] = 0;
        v378 = v395;
        v377 = v401;
        v376 = v404;
        v149 = (__int64 *)v148;
        sub_141671FF0(&v358, v148, v147);
        v150 = v358.m128i_i64[1];
        if ( v358.m128i_i64[0] == 2 )
          goto LABEL_515;
        if ( v359.m128i_i64[0] == 8 )
        {
          if ( *(_QWORD *)v358.m128i_i64[1] != 0x6E656B6F745F6469LL )
            goto LABEL_357;
          if ( v404 != -2 )
          {
            *(_QWORD *)v337 = aIdToken_2;
            *(_QWORD *)&v337[8] = 8;
            v358.m128i_i64[0] = (__int64)v337;
            v358.m128i_i64[1] = (__int64)sub_140191200;
            v378 = v395;
            v377 = v401;
            v376 = v404;
            v215 = sub_141940980(&unk_141A842F4, &v358);
            goto LABEL_429;
          }
          v172 = v147[4];
          v173 = v147[5];
          if ( v173 >= v172 )
          {
LABEL_578:
            v358.m128i_i64[0] = 3;
            v378 = v395;
            v377 = v401;
            v376 = -2;
            v256 = sub_141942360((__int64)v147, (__int64)&v358);
LABEL_579:
            v381 = v256;
LABEL_580:
            v150 = v381;
            if ( (unsigned __int64)(v401 - 1) > 0xFFFFFFFFFFFFFFFCuLL )
              goto LABEL_519;
LABEL_518:
            sub_140001660(v357, v401, 1);
LABEL_519:
            v232 = v395 - 1;
            if ( (unsigned __int64)(v395 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v379, v395, 1);
            v379 = v150;
            v395 = -1;
            goto LABEL_522;
          }
          v174 = *v149;
          v175 = v173 + 1;
          v176 = -(__int64)v172;
          while ( 1 )
          {
            v177 = *(unsigned __int8 *)(v174 + v175 - 1);
            if ( v177 > 0x3A )
              goto LABEL_608;
            if ( !_bittest64(&v81, v177) )
              break;
            v147[5] = v175;
            v178 = v176 + v175++ + 1;
            if ( v178 == 1 )
              goto LABEL_578;
          }
          if ( v177 != 58 )
          {
LABEL_608:
            v358.m128i_i64[0] = 6;
            v378 = v395;
            v377 = v401;
            v376 = -2;
            v256 = sub_141942360((__int64)v147, (__int64)&v358);
            goto LABEL_579;
          }
          v147[5] = v175;
          v378 = v395;
          v377 = v401;
          v376 = -2;
          sub_140DDDAA0(v337, v147);
          v381 = *(_QWORD *)&v337[8];
          v404 = *(_QWORD *)v337;
          if ( *(_QWORD *)v337 == -2 )
            goto LABEL_580;
          v371 = *(_QWORD *)&v337[16];
        }
        else
        {
          if ( v359.m128i_i64[0] == 13 )
          {
            if ( *(_QWORD *)v358.m128i_i64[1] ^ 0x5F68736572666572LL
               | *(_QWORD *)(v358.m128i_i64[1] + 5) ^ 0x6E656B6F745F6873LL )
            {
LABEL_357:
              v165 = v147[4];
              v166 = v147[5];
              if ( v166 >= v165 )
              {
LABEL_428:
                v358.m128i_i64[0] = 3;
                v378 = v395;
                v377 = v401;
                v376 = v404;
                v215 = sub_141942360((__int64)v147, (__int64)&v358);
                goto LABEL_429;
              }
              v167 = *v149;
              v168 = v166 + 1;
              v169 = -(__int64)v165;
              while ( 1 )
              {
                v170 = *(unsigned __int8 *)(v167 + v168 - 1);
                if ( v170 > 0x3A )
                  goto LABEL_587;
                if ( !_bittest64(&v81, v170) )
                  break;
                v147[5] = v168;
                v171 = v169 + v168++ + 1;
                if ( v171 == 1 )
                  goto LABEL_428;
              }
              if ( v170 != 58 )
              {
LABEL_587:
                v358.m128i_i64[0] = 6;
                v378 = v395;
                v377 = v401;
                v376 = v404;
                v215 = sub_141942360((__int64)v147, (__int64)&v358);
                goto LABEL_429;
              }
              v147[5] = v168;
              v378 = v395;
              v377 = v401;
              v376 = v404;
              v150 = sub_140E912F0(v147);
              if ( !v150 )
                continue;
            }
            else if ( v401 == -2 )
            {
              v158 = v147[4];
              v159 = v147[5];
              if ( v159 >= v158 )
              {
LABEL_583:
                v358.m128i_i64[0] = 3;
                v378 = v395;
                v377 = -2;
                v376 = v404;
                v257 = sub_141942360((__int64)v147, (__int64)&v358);
LABEL_584:
                v150 = v257;
                v401 = -2;
              }
              else
              {
                v160 = *v149;
                v161 = v159 + 1;
                v162 = -(__int64)v158;
                while ( 1 )
                {
                  v163 = *(unsigned __int8 *)(v160 + v161 - 1);
                  if ( v163 > 0x3A )
                    goto LABEL_607;
                  if ( !_bittest64(&v81, v163) )
                    break;
                  v147[5] = v161;
                  v164 = v162 + v161++ + 1;
                  if ( v164 == 1 )
                    goto LABEL_583;
                }
                if ( v163 != 58 )
                {
LABEL_607:
                  v358.m128i_i64[0] = 6;
                  v378 = v395;
                  v377 = -2;
                  v376 = v404;
                  v257 = sub_141942360((__int64)v147, (__int64)&v358);
                  goto LABEL_584;
                }
                v147[5] = v161;
                v378 = v395;
                v377 = -2;
                v376 = v404;
                sub_140DDDAA0(v337, v147);
                v150 = *(_QWORD *)&v337[8];
                v401 = *(_QWORD *)v337;
                if ( *(_QWORD *)v337 != -2 )
                {
                  v357 = *(_OWORD *)&v337[8];
                  continue;
                }
                v401 = -2;
              }
            }
            else
            {
              *(_QWORD *)v337 = aRefreshToken_2;
              *(_QWORD *)&v337[8] = 13;
              v358.m128i_i64[0] = (__int64)v337;
              v358.m128i_i64[1] = (__int64)sub_140191200;
              v378 = v395;
              v377 = v401;
              v376 = v404;
              v215 = sub_141940980(&unk_141A842F4, &v358);
LABEL_429:
              v150 = v215;
            }
LABEL_515:
            if ( (unsigned __int64)(v404 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
              sub_140001660(v381, v404, 1);
            if ( (unsigned __int64)(v401 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
              goto LABEL_518;
            goto LABEL_519;
          }
          if ( v359.m128i_i64[0] != 12
            || *(_QWORD *)v358.m128i_i64[1] ^ 0x745F737365636361LL
             | *(unsigned int *)(v358.m128i_i64[1] + 8) ^ 0x6E656B6FLL )
          {
            goto LABEL_357;
          }
          if ( v395 != -1 )
          {
            *(_QWORD *)v337 = aAccessToken_2;
            *(_QWORD *)&v337[8] = 12;
            v358.m128i_i64[0] = (__int64)v337;
            v358.m128i_i64[1] = (__int64)sub_140191200;
            v378 = v395;
            v377 = v401;
            v376 = v404;
            v215 = sub_141940980(&unk_141A842F4, &v358);
            goto LABEL_429;
          }
          v151 = v147[4];
          v152 = v147[5];
          if ( v152 >= v151 )
          {
LABEL_582:
            v358.m128i_i64[0] = 3;
            v378 = -1;
            v377 = v401;
            v376 = v404;
            v245 = sub_141942360((__int64)v147, (__int64)&v358);
            goto LABEL_513;
          }
          v153 = *v149;
          v154 = v152 + 1;
          v155 = -(__int64)v151;
          while ( 1 )
          {
            v156 = *(unsigned __int8 *)(v153 + v154 - 1);
            if ( v156 > 0x3A )
              goto LABEL_606;
            if ( !_bittest64(&v81, v156) )
              break;
            v147[5] = v154;
            v157 = v155 + v154++ + 1;
            if ( v157 == 1 )
              goto LABEL_582;
          }
          if ( v156 != 58 )
          {
LABEL_606:
            v358.m128i_i64[0] = 6;
            v378 = -1;
            v377 = v401;
            v376 = v404;
            v245 = sub_141942360((__int64)v147, (__int64)&v358);
            goto LABEL_513;
          }
          v147[5] = v154;
          v378 = -1;
          v377 = v401;
          v376 = v404;
          sub_140E5F130((__int64 *)v337, v147, 58);
          v150 = *(_QWORD *)&v337[8];
          v395 = *(_QWORD *)v337;
          if ( *(_QWORD *)v337 == -1 )
            goto LABEL_514;
          v350 = *(_QWORD *)&v337[16];
          v379 = *(_QWORD *)&v337[8];
        }
      }
      if ( v395 == -1 )
      {
        *(_QWORD *)v337 = aAccessToken_2;
        *(_QWORD *)&v337[8] = 12;
        v358.m128i_i64[0] = (__int64)v337;
        v358.m128i_i64[1] = (__int64)sub_140191200;
        v378 = -1;
        v377 = v401;
        v376 = v404;
        v245 = sub_141940980(&unk_141A84278, &v358);
LABEL_513:
        v150 = v245;
LABEL_514:
        v395 = -1;
        goto LABEL_515;
      }
      v145 = v401;
      v232 = -1;
      if ( v401 == -2 )
        v145 = -1;
      if ( v404 != -2 )
        v232 = v404;
LABEL_522:
      ++v346.m256i_i8[24];
      *(_QWORD *)v337 = v395;
      *(_QWORD *)&v337[8] = v379;
      *(_QWORD *)&v337[16] = v350;
      *(_QWORD *)&v337[24] = v145;
      *(_OWORD *)&v337[32] = v357;
      *(_QWORD *)&v337[48] = v232;
      *(_QWORD *)&v337[56] = v381;
      *(_QWORD *)&v337[64] = v371;
      v221 = sub_140EBC1B0(&v345, v145, v146);
      *(_QWORD *)&v360[32] = *(_QWORD *)&v337[64];
      v246 = _mm_loadu_si128((const __m128i *)v337);
      v247 = _mm_loadu_si128((const __m128i *)&v337[16]);
      *(_OWORD *)&v360[16] = *(_OWORD *)&v337[48];
      *(_OWORD *)v360 = *(_OWORD *)&v337[32];
      v359 = v247;
      v358 = v246;
      *(_QWORD *)&v360[40] = v221;
      v86 = v246.m128i_i64[0];
      if ( v246.m128i_i64[0] != -1 )
        goto LABEL_523;
      v85 = (void *)v358.m128i_i64[1];
      v86 = -1;
      if ( !v221 )
        goto LABEL_528;
      goto LABEL_527;
    }
    v346.m256i_i8[24] = 127;
    v346.m256i_i64[1] = v80;
    *(_QWORD *)v337 = &v345;
    v337[8] = 1;
    sub_140DD9CC0((unsigned __int64)&v358, v337);
    if ( v358.m128i_i8[0] == 1 )
    {
      v209 = v358.m128i_i64[1];
      v404 = v358.m128i_i64[1];
      goto LABEL_452;
    }
    if ( v358.m128i_i8[1] != 1 )
    {
      v209 = sub_141940C20(0, &off_141A9C808, &unk_141A9B408);
      v404 = v209;
      goto LABEL_452;
    }
    sub_140E5F130(v358.m128i_i64, *(_QWORD **)v337, v208);
    v209 = v358.m128i_i64[1];
    v216 = v358;
    v404 = (unsigned __int128)v216 >> 64;
    v207 = (__int64)v216;
    v395 = v358.m128i_i64[0];
    if ( v358.m128i_i64[0] == -1 )
    {
LABEL_452:
      v395 = -1;
LABEL_453:
      ++v346.m256i_i8[24];
      *(_QWORD *)v337 = v395;
      *(_QWORD *)&v337[8] = v404;
      *(_QWORD *)&v337[16] = v27;
      *(_QWORD *)&v337[24] = v379;
      *(_QWORD *)&v337[32] = v401;
      *(_QWORD *)&v337[40] = v62;
      *(_QWORD *)&v337[48] = v207;
      *(_QWORD *)&v337[56] = v63;
      *(_QWORD *)&v337[64] = v209;
      v221 = sub_140EBC260(&v345, v401, v208);
      *(_QWORD *)&v360[32] = *(_QWORD *)&v337[64];
      v222 = _mm_loadu_si128((const __m128i *)v337);
      v223 = _mm_loadu_si128((const __m128i *)&v337[16]);
      *(_OWORD *)&v360[16] = *(_OWORD *)&v337[48];
      *(_OWORD *)v360 = *(_OWORD *)&v337[32];
      v359 = v223;
      v358 = v222;
      *(_QWORD *)&v360[40] = v221;
      v86 = v222.m128i_i64[0];
      if ( v222.m128i_i64[0] != -1 )
      {
LABEL_523:
        if ( v221 )
        {
          sub_140779350(&v358);
          v86 = -1;
          v85 = (void *)v221;
        }
        else
        {
          v85 = (void *)v358.m128i_i64[1];
          *(__m128i *)v351.m256i_i8 = v359;
          *(_OWORD *)&v351.m256i_u64[2] = *(_OWORD *)v360;
          *(__m128i *)v352 = _mm_load_si128((const __m128i *)&v360[16]);
          *(_QWORD *)&v352[16] = *(_QWORD *)&v360[32];
        }
LABEL_528:
        if ( v86 != -1 )
        {
          v313 = *(_QWORD *)&v352[16];
          v248 = _mm_load_si128((const __m128i *)&v351);
          v249 = _mm_load_si128((const __m128i *)&v351.m256i_u64[2]);
          v312 = *(__m128i *)v352;
          v311 = v249;
          v310 = v248;
          v358.m128i_i64[0] = v86;
          v358.m128i_i64[1] = (__int64)v85;
          v359 = v248;
          *(__m128i *)v360 = v249;
          *(_OWORD *)&v360[16] = *(_OWORD *)v352;
          *(_QWORD *)&v360[32] = *(_QWORD *)&v352[16];
          if ( v346.m256i_i64[1] < (unsigned __int64)v346.m256i_i64[0] )
          {
            v250 = (__PAIR128__(v346.m256i_u64[1], v345.m256i_u64[3]) + __PAIR128__(1, 0)) >> 64;
            while ( 1 )
            {
              v251 = *(unsigned __int8 *)(v345.m256i_i64[3] + v250 - 1);
              if ( v251 > 0x20 || !_bittest64(&v81, v251) )
                break;
              v346.m256i_i64[1] = v250;
              v252 = v250 - v346.m256i_i64[0] + 1;
              ++v250;
              if ( v252 == 1 )
                goto LABEL_536;
            }
            *(_QWORD *)v337 = 22;
            v85 = (void *)sub_141942360((__int64)&v345, (__int64)v337);
            sub_140779350(&v358);
            v86 = -1;
          }
LABEL_536:
          v27 = v394;
          a1 = (__m128i *)v375;
          v87 = v345.m256i_i64[0];
          if ( !v345.m256i_i64[0] )
            goto LABEL_176;
          goto LABEL_175;
        }
        goto LABEL_591;
      }
      v85 = (void *)v358.m128i_i64[1];
      v86 = -1;
      if ( !v221 )
        goto LABEL_528;
LABEL_527:
      sub_140429AA0(v221);
      goto LABEL_528;
    }
    v27 = v359.m128i_i64[0];
    sub_140DD9CC0((unsigned __int64)&v358, v337);
    if ( v358.m128i_i8[0] == 1 )
    {
      v209 = v358.m128i_i64[1];
      v401 = v358.m128i_i64[1];
LABEL_549:
      if ( v395 )
        sub_140001660(v404, v395, 1);
      v404 = v401;
      v395 = -1;
      goto LABEL_453;
    }
    if ( v358.m128i_i8[1] == 1 )
    {
      sub_140DDDAA0(&v358, *(_QWORD **)v337);
      v209 = v358.m128i_i64[1];
      v244 = v358;
      v401 = (unsigned __int128)v244 >> 64;
      v207 = (__int64)v244;
      v379 = v358.m128i_i64[0];
      if ( v358.m128i_i64[0] == -2 )
        goto LABEL_549;
      v62 = (_BYTE *)v359.m128i_i64[0];
    }
    else
    {
      v379 = -1;
    }
    LOBYTE(v209) = sub_140DD9CC0((unsigned __int64)&v358, v337);
    if ( v358.m128i_i8[0] == 1 )
    {
      v63 = (const char *)v358.m128i_i64[1];
LABEL_546:
      if ( v379 > 0 )
        sub_140001660(v401, v379, 1);
      v401 = (__int64)v63;
      goto LABEL_549;
    }
    if ( v358.m128i_i8[1] == 1 )
    {
      v209 = sub_140DDDAA0(&v358, *(_QWORD **)v337);
      v63 = (const char *)v358.m128i_i64[1];
      v254 = v358.m128i_i64[0];
      if ( v358.m128i_i64[0] == -2 )
        goto LABEL_546;
      v209 = v359.m128i_i64[0];
    }
    else
    {
      v254 = -2;
    }
    v207 = -1;
    if ( v254 != -2 )
      v207 = v254;
    goto LABEL_453;
  }
  v351.m256i_i64[3] = v325;
  *(_QWORD *)v352 = v326;
  v351.m256i_i64[0] = 0;
  *(_OWORD *)&v352[8] = 0;
  *(_OWORD *)&v351.m256i_u64[1] = 1u;
  v353 = 0x80;
  if ( !v326 )
  {
LABEL_279:
    v358.m128i_i64[0] = 5;
    v132 = sub_141942360((__int64)&v351, (__int64)&v358);
    goto LABEL_280;
  }
  v128 = 1;
  v129 = 0x100002600LL;
  while ( 1 )
  {
    v130 = *(unsigned __int8 *)(v325 + v128 - 1);
    if ( v130 > 0x20 || !_bittest64(&v129, v130) )
      break;
    *(_QWORD *)&v352[8] = v128;
    v131 = v128 - v326 + 1;
    ++v128;
    if ( v131 == 1 )
      goto LABEL_279;
  }
  v375 = (__int64)a1;
  if ( (_DWORD)v130 != 91 )
  {
    if ( (_DWORD)v130 == 123 )
    {
      v353 = 127;
      *(_QWORD *)&v352[8] = v128;
      v329 = &v351;
      v330 = 1;
      *(_QWORD *)v337 = -4;
      v401 = -4;
      v404 = -2;
      while ( 1 )
      {
        v373 = v404;
        v372 = v401;
        sub_140DD9DE0(v358.m128i_i8, &v329);
        if ( v358.m128i_i8[0] == 1 )
          break;
        if ( v358.m128i_i8[1] != 1 )
        {
          v206 = -3;
          if ( v401 != -4 )
          {
            v283 = *(_QWORD *)&v337[40];
            v231 = _mm_loadu_si128((const __m128i *)&v337[8]);
            v282 = _mm_loadu_si128((const __m128i *)&v337[24]);
            v281 = v231;
            v206 = v401;
          }
          v224 = -1;
          if ( v404 != -2 )
            v224 = v404;
          v183 = v381;
          goto LABEL_463;
        }
        v181 = (__int64 *)v329;
        ++v329[1].m256i_i64[1];
        v181[2] = 0;
        v373 = v404;
        v372 = v401;
        v182 = v181 + 3;
        sub_141671FF0(&v358, v181 + 3, v181);
        v183 = v358.m128i_i64[1];
        if ( v358.m128i_i64[0] == 2 )
          goto LABEL_459;
        if ( v359.m128i_i64[0] != 10 )
        {
          if ( v359.m128i_i64[0] != 5
            || *(_DWORD *)v358.m128i_i64[1] ^ 0x6F727265 | *(unsigned __int8 *)(v358.m128i_i64[1] + 4) ^ 0x72 )
          {
LABEL_399:
            v191 = v181[4];
            v192 = v181[5];
            if ( v192 >= v191 )
            {
LABEL_426:
              v358.m128i_i64[0] = 3;
              v373 = v404;
              v372 = v401;
              v214 = sub_141942360((__int64)v181, (__int64)&v358);
              goto LABEL_427;
            }
            v193 = *v182;
            v194 = v192 + 1;
            v195 = -(__int64)v191;
            while ( 1 )
            {
              v196 = *(unsigned __int8 *)(v193 + v194 - 1);
              if ( v196 > 0x3A )
                goto LABEL_586;
              if ( !_bittest64(&v129, v196) )
                break;
              v181[5] = v194;
              v197 = v195 + v194++ + 1;
              if ( v197 == 1 )
                goto LABEL_426;
            }
            if ( v196 != 58 )
            {
LABEL_586:
              v358.m128i_i64[0] = 6;
              v373 = v404;
              v372 = v401;
              v214 = sub_141942360((__int64)v181, (__int64)&v358);
              goto LABEL_427;
            }
            v181[5] = v194;
            v373 = v404;
            v372 = v401;
            v183 = sub_140E912F0(v181);
            if ( !v183 )
              continue;
          }
          else if ( v401 == -4 )
          {
            v184 = v181[4];
            v185 = v181[5];
            if ( v185 >= v184 )
            {
LABEL_572:
              v331.m128i_i64[0] = 3;
              v373 = v404;
              v372 = -4;
              v255 = sub_141942360((__int64)v181, (__int64)&v331);
LABEL_573:
              v183 = v255;
              v401 = -4;
            }
            else
            {
              v186 = *v182;
              v187 = v185 + 1;
              v188 = -(__int64)v184;
              while ( 1 )
              {
                v189 = *(unsigned __int8 *)(v186 + v187 - 1);
                if ( v189 > 0x3A )
                  goto LABEL_602;
                if ( !_bittest64(&v129, v189) )
                  break;
                v181[5] = v187;
                v190 = v188 + v187++ + 1;
                if ( v190 == 1 )
                  goto LABEL_572;
              }
              if ( v189 != 58 )
              {
LABEL_602:
                v331.m128i_i64[0] = 6;
                v373 = v404;
                v372 = -4;
                v255 = sub_141942360((__int64)v181, (__int64)&v331);
                goto LABEL_573;
              }
              v181[5] = v187;
              v373 = v404;
              v372 = -4;
              sub_140DDE230((__int64)&v358, v181);
              v183 = v358.m128i_i64[1];
              v401 = v358.m128i_i64[0];
              if ( v358.m128i_i64[0] != -4 )
              {
                v205 = _mm_loadu_si128(&v359);
                *(__m128i *)&v337[32] = _mm_loadu_si128((const __m128i *)v360);
                *(__m128i *)&v337[16] = v205;
                *(_QWORD *)v337 = v401;
                *(_QWORD *)&v337[8] = v358.m128i_i64[1];
                continue;
              }
              v401 = -4;
            }
          }
          else
          {
            v331.m128i_i64[0] = (__int64)aError_52;
            v331.m128i_i64[1] = 5;
            v358.m128i_i64[0] = (__int64)&v331;
            v358.m128i_i64[1] = (__int64)sub_140191200;
            v373 = v404;
            v372 = v401;
            v214 = sub_141940980(&unk_141A842F4, &v358);
LABEL_427:
            v183 = v214;
          }
          goto LABEL_459;
        }
        if ( *(_QWORD *)v358.m128i_i64[1] ^ 0x6F635F726F727265LL
           | *(unsigned __int16 *)(v358.m128i_i64[1] + 8) ^ 0x6564LL )
        {
          goto LABEL_399;
        }
        if ( v404 != -2 )
        {
          v331.m128i_i64[0] = (__int64)aErrorCode_0;
          v331.m128i_i64[1] = 10;
          v358.m128i_i64[0] = (__int64)&v331;
          v358.m128i_i64[1] = (__int64)sub_140191200;
          v373 = v404;
          v372 = v401;
          v214 = sub_141940980(&unk_141A842F4, &v358);
          goto LABEL_427;
        }
        v198 = v181[4];
        v199 = v181[5];
        if ( v199 >= v198 )
        {
LABEL_574:
          v358.m128i_i64[0] = 3;
          v373 = -2;
          v372 = v401;
          v206 = sub_141942360((__int64)v181, (__int64)&v358);
LABEL_575:
          v381 = v206;
LABEL_576:
          v183 = v381;
          v224 = -2;
          if ( v401 == -4 )
          {
LABEL_463:
            ++v353;
            *(_QWORD *)v337 = v224;
            *(_QWORD *)&v337[8] = v183;
            *(_QWORD *)&v337[16] = v379;
            *(_QWORD *)&v337[24] = v206;
            v225 = _mm_load_si128(&v282);
            *(__m128i *)&v337[32] = _mm_load_si128(&v281);
            *(__m128i *)&v337[48] = v225;
            *(_QWORD *)&v337[64] = v283;
            v226 = sub_140EBC1B0(&v351, v179, v180);
            *(_QWORD *)&v360[32] = *(_QWORD *)&v337[64];
            v227 = _mm_loadu_si128((const __m128i *)v337);
            v228 = _mm_loadu_si128((const __m128i *)&v337[16]);
            *(_OWORD *)&v360[16] = *(_OWORD *)&v337[48];
            *(_OWORD *)v360 = *(_OWORD *)&v337[32];
            v359 = v228;
            v358 = v227;
            *(_QWORD *)&v360[40] = v226;
            v229 = v227.m128i_i64[0];
            if ( v227.m128i_i64[0] == -2 )
            {
              v230 = v358.m128i_i64[1];
              v229 = -2;
              if ( v226 )
                goto LABEL_465;
              goto LABEL_497;
            }
LABEL_491:
            if ( v226 )
            {
              sub_140D85F60(&v359.m128i_i64[1]);
              if ( v229 != -1 && v229 )
                sub_140001660(v358.m128i_i64[1], v229, 1);
              v229 = -2;
              v230 = v226;
            }
            else
            {
              v230 = v358.m128i_i64[1];
              v310 = v359;
              v311 = *(__m128i *)v360;
              v312 = _mm_load_si128((const __m128i *)&v360[16]);
              v313 = *(_QWORD *)&v360[32];
            }
            goto LABEL_497;
          }
LABEL_462:
          sub_140D85F60(v337);
          goto LABEL_463;
        }
        v200 = *v182;
        v201 = v199 + 1;
        v202 = -(__int64)v198;
        while ( 1 )
        {
          v203 = *(unsigned __int8 *)(v200 + v201 - 1);
          if ( v203 > 0x3A )
            goto LABEL_601;
          if ( !_bittest64(&v129, v203) )
            break;
          v181[5] = v201;
          v204 = v202 + v201++ + 1;
          if ( v204 == 1 )
            goto LABEL_574;
        }
        if ( v203 != 58 )
        {
LABEL_601:
          v358.m128i_i64[0] = 6;
          v373 = -2;
          v372 = v401;
          v206 = sub_141942360((__int64)v181, (__int64)&v358);
          goto LABEL_575;
        }
        v181[5] = v201;
        v373 = -2;
        v372 = v401;
        sub_140DDDAA0(&v331, v181);
        v206 = v331.m128i_i64[1];
        v381 = v331.m128i_i64[1];
        v404 = v331.m128i_i64[0];
        if ( v331.m128i_i64[0] == -2 )
          goto LABEL_576;
        v379 = v332.m128i_i64[0];
      }
      v183 = v358.m128i_i64[1];
LABEL_459:
      v206 = v404 - 1;
      if ( (unsigned __int64)(v404 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
        sub_140001660(v381, v404, 1);
      v224 = -2;
      if ( v401 == -4 )
        goto LABEL_463;
      goto LABEL_462;
    }
    v230 = sub_141942750(&v351, (__int64)&v393, (__int64)&unk_141A9EA88);
    goto LABEL_593;
  }
  v353 = 127;
  *(_QWORD *)&v352[8] = v128;
  v329 = &v351;
  v330 = 1;
  LOBYTE(v210) = sub_140DD9CC0((unsigned __int64)&v358, &v329);
  if ( v358.m128i_i8[0] == 1 )
  {
    v63 = (const char *)v358.m128i_i64[1];
    v213 = -2;
    goto LABEL_488;
  }
  v210 = -3;
  if ( v358.m128i_i8[1] == 1 )
  {
    sub_140DDE230((__int64)&v358, v329);
    v63 = (const char *)v358.m128i_i64[1];
    v210 = v358.m128i_i64[0];
    if ( v358.m128i_i64[0] == -4 )
    {
      v213 = -2;
      goto LABEL_488;
    }
    v233 = _mm_loadu_si128(&v359);
    *(__m128i *)&v337[32] = _mm_loadu_si128((const __m128i *)v360);
    *(__m128i *)&v337[16] = v233;
    *(_QWORD *)&v337[8] = v358.m128i_i64[1];
  }
  *(_QWORD *)v337 = v210;
  LOBYTE(v210) = sub_140DD9CC0((unsigned __int64)&v358, &v329);
  if ( v358.m128i_i8[0] == 1 )
  {
    v63 = (const char *)v358.m128i_i64[1];
LABEL_480:
    sub_140D85F60(v337);
    v213 = -2;
    goto LABEL_488;
  }
  if ( v358.m128i_i8[1] == 1 )
  {
    sub_140DDDAA0(&v358, v329);
    v63 = (const char *)v358.m128i_i64[1];
    v211 = v358.m128i_i64[0];
    if ( v358.m128i_i64[0] == -2 )
      goto LABEL_480;
    v210 = v359.m128i_i64[0];
  }
  else
  {
    v211 = -2;
  }
  v213 = -1;
  if ( v211 != -2 )
    v213 = v211;
  v234 = _mm_loadu_si128((const __m128i *)v337);
  v235 = _mm_loadu_si128((const __m128i *)&v337[16]);
  v333 = *(_OWORD *)&v337[32];
  v332 = v235;
  v331 = v234;
LABEL_488:
  ++v353;
  *(_QWORD *)v337 = v213;
  *(_QWORD *)&v337[8] = v63;
  *(_QWORD *)&v337[16] = v210;
  v236 = _mm_load_si128(&v332);
  *(__m128i *)&v337[24] = _mm_load_si128(&v331);
  *(__m128i *)&v337[40] = v236;
  *(_OWORD *)&v337[56] = v333;
  v226 = sub_140EBC260(&v351, v211, v212);
  *(_QWORD *)&v360[32] = *(_QWORD *)&v337[64];
  v237 = _mm_loadu_si128((const __m128i *)v337);
  v238 = _mm_loadu_si128((const __m128i *)&v337[16]);
  *(_OWORD *)&v360[16] = *(_OWORD *)&v337[48];
  *(_OWORD *)v360 = *(_OWORD *)&v337[32];
  v359 = v238;
  v358 = v237;
  *(_QWORD *)&v360[40] = v226;
  v229 = v237.m128i_i64[0];
  if ( v237.m128i_i64[0] != -2 )
    goto LABEL_491;
  v230 = v358.m128i_i64[1];
  v229 = -2;
  if ( v226 )
LABEL_465:
    sub_140429AA0(v226);
LABEL_497:
  if ( v229 == -2 )
  {
LABEL_593:
    v132 = sub_1419405B0(v230, (__int64)&v351);
    v27 = v394;
    a1 = (__m128i *)v375;
LABEL_280:
    v345.m256i_i64[1] = v132;
    v345.m256i_i64[0] = -2;
    v133 = 1;
    v134 = v351.m256i_i64[0];
    if ( !v351.m256i_i64[0] )
      goto LABEL_282;
    goto LABEL_281;
  }
  *(_QWORD *)&v347 = v313;
  v239 = _mm_load_si128(&v310);
  v240 = _mm_load_si128(&v311);
  *(__m128i *)&v346.m256i_u64[2] = v312;
  *(__m128i *)v346.m256i_i8 = v240;
  *(__m128i *)&v345.m256i_u64[2] = v239;
  v345.m256i_i64[0] = v229;
  v345.m256i_i64[1] = v230;
  v359 = v239;
  *(__m128i *)v360 = v240;
  *(__m128i *)&v360[16] = v312;
  *(_QWORD *)&v360[32] = v313;
  v358.m128i_i64[0] = v229;
  v358.m128i_i64[1] = v230;
  if ( *(_QWORD *)&v352[8] >= *(_QWORD *)v352 )
  {
LABEL_503:
    v133 = 0;
  }
  else
  {
    v241 = (__PAIR128__(*(unsigned __int64 *)&v352[8], v351.m256i_u64[3]) + __PAIR128__(1, 0)) >> 64;
    while ( 1 )
    {
      v242 = *(unsigned __int8 *)(v351.m256i_i64[3] + v241 - 1);
      if ( v242 > 0x20 || !_bittest64(&v129, v242) )
        break;
      *(_QWORD *)&v352[8] = v241;
      v243 = v241 - *(_QWORD *)v352 + 1;
      ++v241;
      if ( v243 == 1 )
        goto LABEL_503;
    }
    *(_QWORD *)v337 = 22;
    v345.m256i_i64[1] = sub_141942360((__int64)&v351, (__int64)v337);
    v345.m256i_i64[0] = -2;
    sub_140D85F60(&v359.m128i_i64[1]);
    v133 = 1;
    if ( v358.m128i_i64[0] != -1 && v358.m128i_i64[0] )
      sub_140001660(v358.m128i_i64[1], v358.m128i_i64[0], 1);
  }
  v27 = v394;
  a1 = (__m128i *)v375;
  v134 = v351.m256i_i64[0];
  if ( v351.m256i_i64[0] )
LABEL_281:
    sub_140001660(v351.m256i_i64[1], v134, 1);
LABEL_282:
  if ( v133 )
  {
    v358.m128i_i64[0] = -2;
    sub_140D87C30(&v345);
LABEL_285:
    v351.m256i_i64[0] = -1;
    v136 = -2;
    v137 = 1;
    goto LABEL_286;
  }
  v135 = _mm_loadu_si128((const __m128i *)&v345.m256i_u64[2]);
  v358 = _mm_loadu_si128((const __m128i *)&v345);
  *(_QWORD *)&v360[32] = v347;
  *(__m256i *)v360 = v346;
  v359 = v135;
  v136 = v358.m128i_i64[0];
  if ( v358.m128i_i64[0] == -2 )
    goto LABEL_285;
  sub_140EC4900(&v351, &v358);
  v404 = v351.m256i_i64[0];
  if ( v351.m256i_i64[0] != -1 )
  {
    switch ( v351.m256i_i64[2] )
    {
      case 0xDLL:
        if ( *(_QWORD *)v351.m256i_i64[1] ^ 0x5F64696C61766E69LL
           | *(_QWORD *)(v351.m256i_i64[1] + 5) ^ 0x746E6172675F6469LL
          && *(_QWORD *)v351.m256i_i64[1] ^ 0x5F64696C61766E69LL
           | *(_QWORD *)(v351.m256i_i64[1] + 5) ^ 0x6E656B6F745F6469LL )
        {
          goto LABEL_441;
        }
        goto LABEL_313;
      case 0x14LL:
        v217 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v351.m256i_i64[1] + 16)), (__m128i)xmmword_141A9AF30);
        v218 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v351.m256i_i64[1]), (__m128i)xmmword_141A9AF40);
        goto LABEL_440;
      case 0x15LL:
        v217 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v351.m256i_i64[1] + 5)), (__m128i)xmmword_141A9AEF0);
        v218 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v351.m256i_i64[1]), (__m128i)xmmword_141A9AF00);
        goto LABEL_440;
      case 0x19LL:
        v217 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v351.m256i_i64[1] + 9)), (__m128i)xmmword_141A9AF10);
        v218 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v351.m256i_i64[1]), (__m128i)xmmword_141A9AF20);
LABEL_440:
        if ( _mm_movemask_epi8(_mm_and_si128(v218, v217)) != 0xFFFF )
          goto LABEL_441;
LABEL_313:
        *(_QWORD *)v315 = 0x8000000000000003uLL;
        v314 = -1;
        if ( v404 )
          sub_140001660(v351.m256i_i64[1], v404, 1);
        v27 = v394;
        sub_140D85F60(&v359.m128i_i64[1]);
        if ( v136 == -1 )
          goto LABEL_296;
        goto LABEL_294;
      default:
LABEL_441:
        v331 = *(__m128i *)&v351.m256i_u64[1];
        v310.m128i_i64[0] = (__int64)&v331;
        v310.m128i_i64[1] = (__int64)sub_140191200;
        v307 = v404;
        sub_1416DAFA0(v337, &unk_141A9F4D5, &v310);
        *(__m128i *)v345.m256i_i8 = _mm_loadu_si128((const __m128i *)v337);
        v345.m256i_i64[2] = *(_QWORD *)&v337[16];
        v137 = 0;
        v27 = v394;
        goto LABEL_287;
    }
  }
  v137 = 0;
  v27 = v394;
LABEL_286:
  v345.m256i_i64[0] = 0;
  *(_OWORD *)&v345.m256i_u64[1] = 1u;
  v404 = -1;
LABEL_287:
  v310.m128i_i16[0] = v395;
  *(_QWORD *)v337 = &v310;
  *(_QWORD *)&v337[8] = sub_1416EA1B0;
  *(_QWORD *)&v337[16] = &v345;
  *(_QWORD *)&v337[24] = sub_1400015F0;
  sub_1416DAFA0(&v259, &unk_141AA11DF, v337);
  *(__m128i *)v315 = _mm_loadu_si128(&v259);
  *(_QWORD *)&v315[16] = v260;
  v314 = -1;
  if ( v345.m256i_i64[0] )
    sub_140001660(v345.m256i_i64[1], v345.m256i_i64[0], 1);
  if ( v404 != -1 && v404 )
    sub_140001660(v351.m256i_i64[1], v404, 1);
  if ( !v137 )
  {
    sub_140D85F60(&v359.m128i_i64[1]);
    if ( v136 != -1 )
    {
LABEL_294:
      if ( v136 )
        sub_140001660(v358.m128i_i64[1], v136, 1);
    }
  }
LABEL_296:
  if ( v324 )
    sub_140001660(v325, v324, 1);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v308) )
  {
LABEL_181:
    v408 = 1;
    sub_141258290(&v308);
  }
LABEL_182:
  v25 = v400;
  v70 = v374;
  if ( v314 == -1 )
  {
LABEL_137:
    a1[1].m128i_i64[0] = *(_QWORD *)&v315[16];
    *a1 = _mm_loadu_si128((const __m128i *)v315);
LABEL_138:
    sub_140001660(v354, v70, 1);
    goto LABEL_154;
  }
  v404 = v314;
  v89 = *(_QWORD *)&v315[8];
  v395 = *(_QWORD *)v315;
  v401 = *(_QWORD *)&v315[16];
  v379 = v316;
  v90 = v317;
  v394 = v318;
  v375 = v319;
  v91 = v320;
  v389 = 1;
  v388 = 1;
  sub_140719C90(&v358, a4, v12, v27);
  if ( v358.m128i_i32[0] == 2 )
  {
    v338 = *(__m128i *)&v360[56];
    *(_OWORD *)&v337[64] = *(_OWORD *)&v360[40];
    v92 = _mm_loadu_si128((const __m128i *)&v358.m128i_u64[1]);
    v93 = _mm_loadu_si128((const __m128i *)&v359.m128i_u64[1]);
    *(_OWORD *)&v337[48] = *(_OWORD *)&v360[24];
    *(_OWORD *)&v337[32] = *(_OWORD *)&v360[8];
    *(__m128i *)&v337[16] = v93;
    *(__m128i *)v337 = v92;
    sub_140EDA570(&v345, v337);
    a1[1].m128i_i64[0] = v345.m256i_i64[2];
    *a1 = _mm_loadu_si128((const __m128i *)&v345);
    v389 = 1;
    v388 = 1;
    sub_140D8A3A0(&v358.m128i_u64[1]);
    v25 = v400;
    v70 = v374;
    if ( v404 )
    {
      v94 = v374;
      sub_140001660(v395, v404, 1);
      v70 = v94;
    }
LABEL_247:
    if ( (unsigned __int64)(v401 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v117 = v70;
      sub_140001660(v379, v401, 1);
      v70 = v117;
    }
    if ( (unsigned __int64)(v394 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v118 = v70;
      sub_140001660(v375, v394, 1);
      v70 = v118;
    }
    goto LABEL_138;
  }
  *(_QWORD *)&v357 = v89;
  v370 = v90;
  v371 = v91;
  v381 = *(_QWORD *)&v360[8];
  v95 = *(_QWORD *)&v360[40];
  v96 = *(_QWORD *)&v360[32];
  v97 = *(_QWORD *)&v360[56];
  v322 = *(_QWORD *)&v360[64];
  v98 = v362;
  v321 = v363;
  *((_QWORD *)&v357 + 1) = v365;
  v356 = v366;
  v300 = *(_QWORD *)&v360[24];
  v350 = *(_QWORD *)&v360[16];
  if ( v359.m128i_i64[0] )
  {
    v323 = *(_QWORD *)&v360[56];
    v99 = v362;
    v100 = *(_QWORD *)&v360[40];
    sub_140001660(v359.m128i_i64[1], v359.m128i_i64[0], 1);
    v95 = v100;
    v98 = v99;
    v97 = v323;
  }
  if ( v96 )
    sub_140001660(v95, v96, 1);
  if ( (unsigned __int64)(v97 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (unsigned __int64)(v98 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_192:
      v101 = *((_QWORD *)&v357 + 1);
      if ( (unsigned __int64)(*((_QWORD *)&v357 + 1) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_194;
      goto LABEL_193;
    }
  }
  else
  {
    sub_140001660(v322, v97, 1);
    if ( (unsigned __int64)(v98 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_192;
  }
  sub_140001660(v321, v98, 1);
  v101 = *((_QWORD *)&v357 + 1);
  if ( (unsigned __int64)(*((_QWORD *)&v357 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_193:
    sub_140001660(v356, v101, 1);
LABEL_194:
  v384 = 1;
  v383 = 1;
  sub_140D82680(v337, a4);
  v102 = sub_1408FEA60(v395, v357);
  v105 = v103;
  if ( !v103 )
  {
    nullsub_1(v104, 0);
    v113 = (__m128i *)sub_140001650(45, 1);
    v112 = v374;
    if ( !v113 )
    {
      v407 = 1;
      v406 = 1;
      v405 = 1;
      sub_14196B2DB(1, 45);
    }
    qmemcpy(&v113[1], "eturned an empty access_token", 29);
    *v113 = _mm_loadu_si128((const __m128i *)&xmmword_141AA1412);
    a1->m128i_i64[0] = 45;
    a1->m128i_i64[1] = (__int64)v113;
    a1[1].m128i_i64[0] = 45;
    v25 = v400;
    goto LABEL_219;
  }
  v106 = v102;
  sub_1401E7560((unsigned int)&v358, v103, 0, 1, 1);
  v107 = v358.m128i_i64[1];
  if ( v358.m128i_i8[0] )
  {
    v407 = 1;
    v406 = 1;
    v405 = 1;
    sub_14196B2DB(v358.m128i_i64[1], v359.m128i_i64[0]);
  }
  v108 = v105;
  v109 = v359.m128i_i64[0];
  *(_QWORD *)&v357 = v108;
  sub_1419234B0(v359.m128i_i64[0], v106, v108);
  if ( *(_QWORD *)&v337[72] != -1 && *(_QWORD *)&v337[72] )
    sub_140001660(v338.m128i_i64[0], *(_QWORD *)&v337[72], 1);
  *(_QWORD *)&v337[72] = v107;
  v338.m128i_i64[0] = v109;
  v105 = v357;
  v338.m128i_i64[1] = v357;
  v358.m128i_i64[0] = v401;
  v358.m128i_i64[1] = v379;
  v359.m128i_i64[0] = v370;
  sub_140D85AF0((__int64)&v345, v358.m128i_i64);
  if ( v345.m256i_i64[0] != -1 )
  {
    if ( v339.m128i_i64[0] != -1 && v339.m128i_i64[0] )
      sub_140001660(v339.m128i_i64[1], v339.m128i_i64[0], 1);
    v340 = v345.m256i_i64[2];
    v339 = _mm_loadu_si128((const __m128i *)&v345);
  }
  v358.m128i_i64[0] = v394;
  v358.m128i_i64[1] = v375;
  v359.m128i_i64[0] = v371;
  sub_140D85AF0((__int64)&v345, v358.m128i_i64);
  if ( v345.m256i_i64[0] != -1 )
  {
    if ( *(_QWORD *)&v337[48] != -1 && *(_QWORD *)&v337[48] )
      sub_140001660(*(_QWORD *)&v337[56], *(_QWORD *)&v337[48], 1);
    *(_QWORD *)&v337[64] = v345.m256i_i64[2];
    *(__m128i *)&v337[48] = _mm_loadu_si128((const __m128i *)&v345);
  }
  v407 = 1;
  v406 = 0;
  v405 = 1;
  sub_140EBD210(&v358);
  v345.m256i_i64[2] = v359.m128i_i64[0];
  *(__m128i *)v345.m256i_i8 = v358;
  if ( v343.m128i_i64[0] != -1 && v343.m128i_i64[0] )
    sub_140001660(v343.m128i_i64[1], v343.m128i_i64[0], 1);
  v344 = v345.m256i_i64[2];
  v343 = _mm_load_si128((const __m128i *)&v345);
  v407 = 1;
  v406 = 0;
  v405 = 1;
  sub_140719C90(&v358, v337, v12, v27);
  if ( v358.m128i_i32[0] == 2 )
  {
    v348 = *(_OWORD *)&v360[56];
    v347 = *(_OWORD *)&v360[40];
    v110 = _mm_loadu_si128((const __m128i *)&v358.m128i_u64[1]);
    v111 = _mm_loadu_si128((const __m128i *)&v359.m128i_u64[1]);
    v346 = *(__m256i *)&v360[8];
    *(__m128i *)&v345.m256i_u64[2] = v111;
    *(__m128i *)v345.m256i_i8 = v110;
    sub_140EDA570(&v302, &v345);
    a1[1].m128i_i64[0] = v303.m128i_i64[1];
    *a1 = _mm_loadu_si128((const __m128i *)&v302);
    v407 = 1;
    v406 = 0;
    v405 = 1;
    sub_140D8A3A0(&v358.m128i_u64[1]);
    v25 = v400;
    v112 = v374;
LABEL_219:
    v114 = v381;
    goto LABEL_220;
  }
  v371 = *(_QWORD *)&v360[8];
  v119 = *(_QWORD *)&v360[40];
  v120 = *(_QWORD *)&v360[32];
  v121 = *(_QWORD *)&v360[56];
  v323 = *(_QWORD *)&v360[64];
  v122 = v362;
  v322 = v363;
  v356 = v365;
  v321 = v366;
  v370 = *(_QWORD *)&v360[24];
  *((_QWORD *)&v357 + 1) = *(_QWORD *)&v360[16];
  if ( v359.m128i_i64[0] )
  {
    v301 = *(_QWORD *)&v360[56];
    v123 = v362;
    v124 = *(_QWORD *)&v360[40];
    sub_140001660(v359.m128i_i64[1], v359.m128i_i64[0], 1);
    v119 = v124;
    v122 = v123;
    v121 = v301;
  }
  if ( v120 )
    sub_140001660(v119, v120, 1);
  if ( (unsigned __int64)(v121 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    sub_140001660(v323, v121, 1);
    v25 = v400;
    if ( (unsigned __int64)(v122 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_257;
LABEL_265:
    sub_140001660(v322, v122, 1);
    v125 = v356;
    if ( (unsigned __int64)(v356 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_259;
    goto LABEL_258;
  }
  v25 = v400;
  if ( (unsigned __int64)(v122 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_265;
LABEL_257:
  v125 = v356;
  if ( (unsigned __int64)(v356 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_258:
    sub_140001660(v321, v125, 1);
LABEL_259:
  v112 = v374;
  v105 = v357;
  if ( v370 != v300 || (unsigned int)sub_141923B40(*((_QWORD *)&v357 + 1), v350, v300) )
  {
    nullsub_1(v119, v125);
    v126 = (__m128i *)sub_140001650(59, 1);
    if ( !v126 )
    {
      v397 = 1;
      v396 = 1;
      sub_14196B2DB(1, 59);
    }
    qmemcpy(&v126[1], "eturned credentials for a different account", 43);
    *v126 = _mm_loadu_si128((const __m128i *)&xmmword_141AA15D7);
    a1->m128i_i64[0] = 59;
    a1->m128i_i64[1] = (__int64)v126;
    a1[1].m128i_i64[0] = 59;
    v114 = v381;
    if ( v371 )
      sub_140001660(*((_QWORD *)&v357 + 1), v371, 1);
LABEL_220:
    if ( *(_QWORD *)v337 != -1 && *(_QWORD *)v337 )
      sub_140001660(*(_QWORD *)&v337[8], *(_QWORD *)v337, 1);
    if ( *(_QWORD *)&v337[24] != -1 && *(_QWORD *)&v337[24] )
      sub_140001660(*(_QWORD *)&v337[32], *(_QWORD *)&v337[24], 1);
    if ( *(_QWORD *)&v337[48] != -1 && *(_QWORD *)&v337[48] )
      sub_140001660(*(_QWORD *)&v337[56], *(_QWORD *)&v337[48], 1);
    if ( *(_QWORD *)&v337[72] != -1 && *(_QWORD *)&v337[72] )
      sub_140001660(v338.m128i_i64[0], *(_QWORD *)&v337[72], 1);
    if ( v339.m128i_i64[0] != -1 && v339.m128i_i64[0] )
      sub_140001660(v339.m128i_i64[1], v339.m128i_i64[0], 1);
    if ( v341 != -1 && v341 )
      sub_140001660(v342, v341, 1);
    v115 = v343.m128i_i64[0];
    if ( v343.m128i_i64[0] != -1 && v343.m128i_i64[0] )
    {
      v116 = v343.m128i_i64[1];
LABEL_241:
      sub_140001660(v116, v115, 1);
      goto LABEL_242;
    }
    goto LABEL_242;
  }
  sub_1400378C0(a4);
  sub_1419234B0(a4, v337, 176);
  v397 = 1;
  v396 = 0;
  sub_140D90740(&v358, (__int64)a4);
  v370 = v358.m128i_i64[0];
  if ( v358.m128i_i64[0] == -1 )
  {
    v302 = (__m128i *)v358.m128i_i64[1];
    v345.m256i_i64[0] = (__int64)&v302;
    v345.m256i_i64[1] = (__int64)sub_14166FAD0;
    sub_1416DAFA0(&v267, &unk_141AA15B0, &v345);
    a1[1].m128i_i64[0] = v268;
    *a1 = _mm_loadu_si128(&v267);
    v397 = 1;
    v396 = 0;
    sub_140429AA0(v302);
    goto LABEL_318;
  }
  v138 = v359.m128i_i64[0];
  v409 = 1;
  v356 = v358.m128i_i64[1];
  if ( (sub_1407C8880(v12, v27, v358.m128i_i64[1], v359.m128i_i64[0]) & 1) != 0 )
  {
    v345.m256i_i64[0] = v139;
    v358.m128i_i64[0] = (__int64)&v345;
    v358.m128i_i64[1] = (__int64)sub_1416EA080;
    sub_1416DAFA0(&v265, &unk_141AA143F, &v358);
    a1[1].m128i_i64[0] = v266;
    *a1 = _mm_loadu_si128(&v265);
    v409 = 1;
    sub_14028F450(v345.m256i_i64[0]);
    goto LABEL_303;
  }
  v409 = 1;
  sub_1407B9160(v139);
  v142 = (__int64 *)a1;
  if ( (_BYTE)v382 )
  {
    if ( !a8 )
    {
      nullsub_1(v141, v140);
      v219 = (__m128i *)sub_140001650(46, 1);
      if ( !v219 )
      {
        v409 = 1;
        sub_14196B2DB(1, 46);
      }
      qmemcpy(&v219[1], "efresh lost the live auth path", 30);
      *v219 = _mm_loadu_si128((const __m128i *)&xmmword_141AA13E4);
      a1->m128i_i64[0] = 46;
      a1->m128i_i64[1] = (__int64)v219;
      a1[1].m128i_i64[0] = 46;
      goto LABEL_303;
    }
    v143 = v355;
    if ( v400 == -1 )
      v143 = 0;
    v355 = v143;
    v144 = 1;
    if ( v400 != -1 )
      v144 = v387;
    v409 = 1;
    if ( (unsigned __int8)sub_140EC4BC0() )
    {
      if ( *(_QWORD *)off_14223FF10 >= 3u )
      {
        v358.m128i_i64[0] = (__int64)aCodexmateLibCo_51;
        v358.m128i_i64[1] = 34;
        v359.m128i_i64[0] = (__int64)aCodexmateLibCo_51;
        v359.m128i_i64[1] = 34;
        *(_QWORD *)v360 = &off_141AA1598;
        v409 = 1;
        sub_140AF72B0("[AiMaMi][oauth-refresh] skipped auth.json sync because Codex became active", 149, 3, &v358);
      }
      a1->m128i_i64[0] = 0x8000000000000001uLL;
      goto LABEL_303;
    }
    v409 = 1;
    sub_1416CC450(&v345, a8, a9);
    v382 = v345.m256i_i64[0];
    if ( v345.m256i_i64[0] == -1 )
    {
      v302 = (__m128i *)v345.m256i_i64[1];
      v358.m128i_i64[0] = (__int64)&v302;
      v358.m128i_i64[1] = (__int64)sub_1416EA080;
      sub_1416DAFA0(&v263, &unk_141AA150C, &v358);
      a1[1].m128i_i64[0] = v264;
      *a1 = _mm_loadu_si128(&v263);
      sub_14028F450(v302);
      goto LABEL_303;
    }
    if ( v345.m256i_i64[2] != v355
      || (v220 = v345.m256i_i64[1], (unsigned int)sub_141923B40(v345.m256i_i64[1], v144, v355)) )
    {
      if ( *(_QWORD *)off_14223FF10 >= 3u )
      {
        v358.m128i_i64[0] = (__int64)aCodexmateLibCo_51;
        v358.m128i_i64[1] = 34;
        v359.m128i_i64[0] = (__int64)aCodexmateLibCo_51;
        v359.m128i_i64[1] = 34;
        *(_QWORD *)v360 = &off_141AA14B8;
        sub_140AF72B0(&unk_141AA1470, 145, 3, &v358);
      }
      a1->m128i_i64[0] = 0x8000000000000001uLL;
      if ( v382 )
        sub_140001660(v345.m256i_i64[1], v382, 1);
      goto LABEL_303;
    }
    if ( v382 )
      sub_140001660(v220, v382, 1);
    v409 = 1;
    if ( (sub_1407C8880(a8, a9, v356, v138) & 1) != 0 )
    {
      v345.m256i_i64[0] = v253;
      v358.m128i_i64[0] = (__int64)&v345;
      v358.m128i_i64[1] = (__int64)sub_1416EA080;
      sub_1416DAFA0(&v261, &unk_141AA14D0, &v358);
      a1[1].m128i_i64[0] = v262;
      *a1 = _mm_loadu_si128(&v261);
      v409 = 1;
      sub_14028F450(v345.m256i_i64[0]);
LABEL_303:
      if ( v370 )
        sub_140001660(v356, v370, 1);
LABEL_318:
      v25 = v400;
      v112 = v374;
      v114 = v381;
      v105 = v357;
      if ( v371 )
      {
        v116 = *((_QWORD *)&v357 + 1);
        v115 = v371;
        goto LABEL_241;
      }
LABEL_242:
      if ( v114 )
        sub_140001660(v350, v114, 1);
      if ( v404 )
        sub_140001660(v395, v404, 1);
      v70 = v112;
      if ( v105 )
        goto LABEL_138;
      goto LABEL_247;
    }
    v409 = 1;
    sub_1407B9160(v253);
    v142 = (__int64 *)a1;
  }
  v358 = _mm_loadu_si128((const __m128i *)v335);
  v409 = 0;
  sub_140CB38B0(&v358);
  *v142 = 0x8000000000000001uLL;
  if ( v370 )
    sub_140001660(v356, v370, 1);
  if ( v371 )
    sub_140001660(*((_QWORD *)&v357 + 1), v371, 1);
  if ( v381 )
    sub_140001660(v350, v381, 1);
  if ( v404 )
    sub_140001660(v395, v404, 1);
  sub_140001660(v354, v374, 1);
  if ( v400 > 0 )
    sub_140001660(v387, v400, 1);
  return sub_1401AF000(&v336);
}
