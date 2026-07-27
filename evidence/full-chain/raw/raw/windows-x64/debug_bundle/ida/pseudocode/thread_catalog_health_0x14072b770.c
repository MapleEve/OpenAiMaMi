// module: codexmate_lib/core/debug_bundle
// addr: 0x14072b770
// name: thread_catalog_health
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::debug_bundle::thread_catalog_health | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall thread_catalog_health(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int32 v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // r15
  __m128i v14; // xmm0
  _BYTE *v15; // rax
  _BYTE *v16; // rdx
  __int64 *v17; // rbx
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 result; // rax
  _QWORD *v23; // r14
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // rcx
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // r14
  _QWORD *v50; // r15
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // rcx
  __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // r15
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // r12
  unsigned __int64 v68; // r8
  __int64 v69; // rdi
  __int64 v70; // r15
  int v71; // eax
  char v72; // dl
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 i; // rax
  __int64 v77; // rdx
  __int128 v78; // rdi
  __int64 v79; // r15
  _QWORD *v80; // rax
  _QWORD *v81; // r12
  _QWORD *v82; // rdx
  __int64 v83; // r8
  __m128i v84; // xmm0
  __int64 v85; // rsi
  __m128i v86; // xmm0
  __m128i v87; // xmm0
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rcx
  __m128i v91; // xmm0
  int v92; // eax
  __m128i v93; // xmm0
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // r13
  __int64 j; // rcx
  __int64 v99; // rax
  __int64 v100; // rbx
  __int64 v101; // r15
  __int64 v102; // r14
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // rsi
  __int64 v105; // rsi
  int v106; // eax
  __int64 v107; // rdx
  char v108; // cl
  bool v109; // cf
  __int64 v110; // r13
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rbx
  __int64 v114; // r15
  __int64 v115; // r14
  unsigned __int64 v116; // r8
  unsigned __int64 v117; // rsi
  __int64 v118; // rsi
  int v119; // eax
  char v120; // cl
  __int64 v121; // rax
  const char *v122; // rcx
  __int64 v123; // r13
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rbx
  __int64 v127; // r15
  __int64 v128; // r14
  unsigned __int64 v129; // r8
  unsigned __int64 v130; // rsi
  __int64 v131; // rsi
  int v132; // eax
  char v133; // cl
  __int64 v134; // rax
  const char *v135; // rcx
  __int64 v136; // r13
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rbx
  __int64 v140; // r15
  __int64 v141; // r14
  unsigned __int64 v142; // r8
  unsigned __int64 v143; // rsi
  __int64 v144; // rsi
  int v145; // eax
  char v146; // cl
  __int64 v147; // rcx
  __int64 v148; // rax
  __m128i v149; // xmm0
  __int64 v150; // rsi
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rsi
  __int64 v154; // rsi
  __int64 v155; // rax
  __int64 v156; // rcx
  __m128i v157; // xmm0
  int v158; // eax
  __int64 v159; // rsi
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // r9
  __int64 v166; // rsi
  __int64 v167; // r12
  __int64 v168; // rdx
  __int64 v169; // r10
  __int64 v170; // r8
  __int64 v171; // r14
  __int64 v172; // r13
  __int64 v173; // rdi
  __int64 v174; // r14
  __int64 v175; // r15
  __int64 v176; // rdx
  __int64 v177; // rsi
  __int64 v178; // r13
  __int64 v179; // r15
  __int64 v180; // rsi
  __int64 v181; // rbx
  __int64 v182; // rsi
  __int64 v183; // rbx
  __int64 v184; // r15
  __int64 v185; // rsi
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rcx
  __m128i v189; // rdi
  __int64 v190; // r14
  __int64 v191; // rax
  _DWORD *v192; // rax
  _QWORD *v193; // rax
  __int64 v194; // r13
  __int64 v195; // rcx
  __int64 v196; // rdx
  __int64 v197; // r12
  __int64 v198; // rdi
  __int64 v199; // rsi
  __int64 v200; // rax
  __int64 v201; // rbx
  __int64 v202; // r15
  __int64 v203; // r14
  __int64 v204; // r12
  unsigned __int64 v205; // r8
  __int64 v206; // r13
  int v207; // eax
  bool v208; // sf
  char v209; // cl
  __int64 v210; // rsi
  __int64 v211; // rdi
  __int64 v212; // rsi
  __int64 v213; // rdx
  __int64 v214; // rdx
  __int64 v215; // r8
  __int64 v216; // rcx
  _DWORD *v217; // rax
  __int64 v218; // rcx
  __int64 v219; // rax
  __int64 v220; // rcx
  __int64 v221; // rax
  __int64 v222; // rcx
  _DWORD *v223; // rax
  __int64 v224; // rcx
  __int64 v225; // rax
  __int64 v226; // rcx
  __int64 v227; // r14
  __int8 v228; // r12
  __int64 v229; // rbx
  __int64 v230; // rax
  __int64 v231; // rcx
  void *v232; // rax
  __int64 v233; // r14
  __int8 v234; // r12
  __int64 v235; // rbx
  __int64 v236; // rax
  __int64 v237; // rcx
  void *v238; // rax
  __int64 v239; // rcx
  void *v240; // rax
  __int64 v241; // rcx
  void *v242; // rax
  __m128i v243; // xmm0
  __int64 v244; // rcx
  void *v245; // rax
  __m128i v246; // xmm0
  __int64 v247; // rcx
  __m128i *v248; // rax
  __int64 v249; // rcx
  __int64 v250; // r14
  __int8 v251; // r12
  __int64 v252; // rbx
  __int64 v253; // rax
  __int64 v254; // rcx
  __int64 v255; // rax
  __int64 v256; // rcx
  __int64 v257; // rax
  __int64 v258; // rbx
  __int64 v259; // rsi
  __int64 v260; // rcx
  _DWORD *v261; // rax
  __int64 v262; // rcx
  __int64 v263; // rax
  __int64 v264; // rcx
  _DWORD *v265; // rax
  __int64 v266; // rcx
  void *v267; // rax
  __int64 v268; // rcx
  void *v269; // rax
  __int64 v270; // rsi
  __m128i v271; // xmm0
  __int64 v272; // rcx
  __int64 v273; // rdi
  _QWORD *v274; // r14
  __int64 v275; // rdx
  _QWORD *v276; // rax
  __int64 v277; // rdi
  __int64 v278; // r14
  __m128i v279; // xmm0
  __int64 v280; // r12
  _QWORD *v281; // r13
  __int64 v282; // rdx
  __int64 v283; // rcx
  __m128i *v284; // rax
  __m128i v285; // xmm0
  __int64 v286; // rcx
  __m128i *v287; // rax
  __int64 v288; // rcx
  void *v289; // rax
  __int64 v290; // rcx
  __int64 v291; // rax
  __int64 v292; // rcx
  __int64 v293; // rax
  __int64 v294; // rcx
  __int64 v295; // rax
  __int64 v296; // rcx
  void *v297; // rax
  __int64 v298; // rcx
  void *v299; // rax
  __int64 v300; // rcx
  void *v301; // rax
  __m128i v302; // xmm0
  __int64 v303; // rcx
  __int64 v304; // rcx
  __int64 v305; // r15
  __int64 v306; // r15
  _QWORD *v307; // r12
  __int64 v308; // rdx
  _QWORD *v309; // r15
  __int64 v310; // rdx
  _QWORD *v311; // rsi
  __int64 v312; // rdx
  __int64 v313; // rcx
  __int64 v314; // [rsp+20h] [rbp-60h]
  __int64 v315; // [rsp+20h] [rbp-60h]
  __int64 v316; // [rsp+28h] [rbp-58h]
  _QWORD v317[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v318[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v319[2]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v320; // [rsp+70h] [rbp-10h] BYREF
  __int64 v321; // [rsp+80h] [rbp+0h]
  __m128i v322; // [rsp+88h] [rbp+8h] BYREF
  __int64 v323; // [rsp+98h] [rbp+18h]
  __m128i v324; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v325; // [rsp+B0h] [rbp+30h]
  __m128i v326; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v327; // [rsp+C8h] [rbp+48h]
  __m128i v328; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v329; // [rsp+E0h] [rbp+60h]
  __int64 v330; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v331; // [rsp+F0h] [rbp+70h]
  __int64 v332; // [rsp+F8h] [rbp+78h]
  __int64 v333; // [rsp+108h] [rbp+88h]
  __m128i v334; // [rsp+110h] [rbp+90h]
  __int64 v335; // [rsp+120h] [rbp+A0h]
  __int64 v336; // [rsp+128h] [rbp+A8h]
  __int128 v337; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v338; // [rsp+140h] [rbp+C0h]
  __m128i v339; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v340; // [rsp+158h] [rbp+D8h]
  __int64 v341; // [rsp+160h] [rbp+E0h]
  __int64 v342; // [rsp+168h] [rbp+E8h]
  __int64 v343; // [rsp+170h] [rbp+F0h]
  __int64 v344; // [rsp+178h] [rbp+F8h]
  __int64 v345; // [rsp+180h] [rbp+100h]
  __int64 v346; // [rsp+188h] [rbp+108h]
  __int64 v347; // [rsp+190h] [rbp+110h]
  __int64 v348; // [rsp+198h] [rbp+118h] BYREF
  _QWORD *v349; // [rsp+1A0h] [rbp+120h]
  __int64 v350; // [rsp+1A8h] [rbp+128h]
  __int64 v351; // [rsp+1B0h] [rbp+130h]
  __m128i **v352; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 (__fastcall *v353)(); // [rsp+1C0h] [rbp+140h]
  __int64 v354; // [rsp+1C8h] [rbp+148h]
  __int64 v355; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v356; // [rsp+1D8h] [rbp+158h]
  __int64 v357; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v358; // [rsp+1E8h] [rbp+168h]
  __int128 v359; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v360; // [rsp+200h] [rbp+180h]
  __int64 v361; // [rsp+208h] [rbp+188h]
  __m128i v362; // [rsp+210h] [rbp+190h]
  __int64 v363; // [rsp+220h] [rbp+1A0h]
  __m128i v364; // [rsp+228h] [rbp+1A8h]
  __int64 v365; // [rsp+238h] [rbp+1B8h]
  __int64 v366; // [rsp+240h] [rbp+1C0h]
  __int64 v367; // [rsp+248h] [rbp+1C8h]
  __int64 v368; // [rsp+250h] [rbp+1D0h]
  __int64 v369; // [rsp+258h] [rbp+1D8h]
  __int64 v370; // [rsp+260h] [rbp+1E0h]
  __int128 v371; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v372; // [rsp+280h] [rbp+200h]
  __int16 v373; // [rsp+288h] [rbp+208h]
  __int64 v374; // [rsp+290h] [rbp+210h]
  __int64 v375; // [rsp+298h] [rbp+218h]
  __m128i *v376; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v377; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 v378; // [rsp+2B0h] [rbp+230h]
  unsigned __int64 v379; // [rsp+2B8h] [rbp+238h]
  __m128i v380; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v381; // [rsp+2D0h] [rbp+250h]
  __int128 v382; // [rsp+2E0h] [rbp+260h]
  __int128 v383; // [rsp+2F0h] [rbp+270h]
  __int64 v384; // [rsp+308h] [rbp+288h]
  __m128i v385; // [rsp+310h] [rbp+290h] BYREF
  __m512i v386; // [rsp+320h] [rbp+2A0h] BYREF
  __int128 v387; // [rsp+360h] [rbp+2E0h]
  __int128 v388; // [rsp+370h] [rbp+2F0h]
  __int64 v389; // [rsp+380h] [rbp+300h]
  __int64 v390; // [rsp+388h] [rbp+308h]
  __int64 v391; // [rsp+390h] [rbp+310h]
  __int64 v392; // [rsp+398h] [rbp+318h] BYREF
  __int128 v393; // [rsp+3A8h] [rbp+328h] BYREF
  __int64 v394; // [rsp+3B8h] [rbp+338h]
  __int64 v395; // [rsp+3C0h] [rbp+340h]
  __int16 v396; // [rsp+3C8h] [rbp+348h]
  __m128i v397; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v398; // [rsp+3E0h] [rbp+360h]
  __int64 v399; // [rsp+3E8h] [rbp+368h]
  __int64 v400; // [rsp+3F0h] [rbp+370h]
  __int64 v401; // [rsp+3F8h] [rbp+378h]
  __int64 v402; // [rsp+400h] [rbp+380h]
  __int64 v403; // [rsp+408h] [rbp+388h]
  __m256i v404; // [rsp+410h] [rbp+390h] BYREF
  __int128 v405; // [rsp+430h] [rbp+3B0h]
  __int128 v406; // [rsp+440h] [rbp+3C0h]
  __int128 v407; // [rsp+450h] [rbp+3D0h]
  __int128 v408; // [rsp+460h] [rbp+3E0h]
  __int128 v409; // [rsp+470h] [rbp+3F0h]
  __m128i v410; // [rsp+480h] [rbp+400h] BYREF
  __int128 v411; // [rsp+490h] [rbp+410h] BYREF
  __m128i v412; // [rsp+4A0h] [rbp+420h] BYREF
  __m256i v413; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v414; // [rsp+4D0h] [rbp+450h]
  __int64 v415; // [rsp+4E8h] [rbp+468h]
  _QWORD *v416; // [rsp+4F0h] [rbp+470h]
  __int64 v417; // [rsp+4F8h] [rbp+478h]
  __int64 v418; // [rsp+500h] [rbp+480h]
  unsigned __int64 v419; // [rsp+508h] [rbp+488h]
  __m128i v420; // [rsp+510h] [rbp+490h] BYREF
  __int128 v421; // [rsp+520h] [rbp+4A0h]
  __int64 v422; // [rsp+538h] [rbp+4B8h]
  char v423; // [rsp+547h] [rbp+4C7h] BYREF
  __int64 v424; // [rsp+548h] [rbp+4C8h]
  __int64 v425; // [rsp+550h] [rbp+4D0h]
  char v426; // [rsp+55Ah] [rbp+4DAh]
  char v427; // [rsp+55Bh] [rbp+4DBh]
  char v428; // [rsp+55Ch] [rbp+4DCh]
  char v429; // [rsp+55Dh] [rbp+4DDh]
  char v430; // [rsp+55Eh] [rbp+4DEh]
  char v431; // [rsp+55Fh] [rbp+4DFh]
  _BYTE v432[48]; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v433; // [rsp+590h] [rbp+510h]
  char v434; // [rsp+5AFh] [rbp+52Fh]
  char v435; // [rsp+5B0h] [rbp+530h]
  char v436; // [rsp+5B1h] [rbp+531h]
  char v437; // [rsp+5B2h] [rbp+532h]
  char v438; // [rsp+5B3h] [rbp+533h]
  char v439; // [rsp+5B4h] [rbp+534h]
  char v440; // [rsp+5B5h] [rbp+535h]
  char v441; // [rsp+5B6h] [rbp+536h]
  char v442; // [rsp+5B7h] [rbp+537h]
  __int64 v443; // [rsp+5B8h] [rbp+538h]
  __int64 v444; // [rsp+5C0h] [rbp+540h]
  __int64 v445; // [rsp+5C8h] [rbp+548h]

  v445 = -2;
  v374 = a3;
  if ( *(_BYTE *)(a2 + 1577) == 1 && *(_QWORD *)(a2 + 1504) != -1 )
  {
    v4 = *(unsigned __int64 **)(a2 + 1512);
    v5 = *(_QWORD *)(a2 + 1520);
    if ( v5 != 8 )
    {
      if ( v5 == 11 )
      {
        v6 = _byteswap_uint64(*v4);
        v7 = 0x7265636F6E63696CLL;
        if ( v6 == 0x7265636F6E63696CLL )
        {
          v6 = _byteswap_uint64(*(unsigned __int64 *)((char *)v4 + 3));
          v7 = 0x6F6E63696C696E67LL;
LABEL_10:
          v8 = 0;
          if ( v6 == v7 )
            goto LABEL_12;
        }
      }
      else
      {
        if ( v5 != 14 )
          goto LABEL_13;
        v6 = _byteswap_uint64(*v4);
        v7 = 0x73746F7070696E67LL;
        if ( v6 == 0x73746F7070696E67LL )
        {
          v6 = _byteswap_uint64(*(unsigned __int64 *)((char *)v4 + 6));
          v7 = 0x6E675F636F646578LL;
          goto LABEL_10;
        }
      }
      v8 = 2 * (v6 >= v7) - 1;
LABEL_12:
      if ( v8 )
        goto LABEL_13;
      return sub_140735F70(a1, a2 + 1504, aThreadCatalogH, 26);
    }
    v21 = _byteswap_uint64(*v4);
    if ( v21 > 0x7265747279696E67LL == v21 < 0x7265747279696E67LL )
      return sub_140735F70(a1, a2 + 1504, aThreadCatalogH, 26);
  }
LABEL_13:
  v335 = a1;
  sub_141473FA0(
    (unsigned int)&v330,
    *(_QWORD *)(a2 + 776),
    *(_QWORD *)(a2 + 784),
    (unsigned int)"codex_router_catalog.jsonmodels_cache.json",
    25);
  v9 = v331;
  v10 = v332;
  sub_141486710(&v385, v331, v332);
  v11 = v385.m128i_i32[0];
  if ( v385.m128i_i64[0] == 2 )
    sub_1401DD260(v385.m128i_i64[1]);
  sub_141486710(&v385, v9, v10);
  if ( v385.m128i_i32[0] == 2 )
  {
    v12 = v385.m128i_i64[1];
    sub_1401DD260(v385.m128i_i64[1]);
    v13 = 0;
    if ( v11 != 2 )
      goto LABEL_17;
LABEL_24:
    v373 = 0;
    v355 = v13;
    v356 = v12;
    v362.m128i_i64[0] = -1;
    v364.m128i_i64[0] = -1;
    v357 = 0;
    v358 = 8;
    v359 = 0;
    v360 = 8;
    v361 = 0;
    v369 = 0;
    v372 = 0;
    v371 = 0;
    v366 = -1;
    goto LABEL_113;
  }
  v12 = v386.m512i_i64[5];
  v13 = 1;
  if ( v11 == 2 )
    goto LABEL_24;
LABEL_17:
  sub_14148D130(&v410, v9, v10);
  if ( v410.m128i_i64[0] == -1 )
  {
    v443 = v410.m128i_i64[1];
    v339.m128i_i64[0] = v410.m128i_i64[1];
    v404.m256i_i64[0] = 0;
    *(_OWORD *)&v404.m256i_u64[1] = 1u;
    v386.m512i_i64[0] = 1610612768;
    v385.m128i_i64[0] = (__int64)&v404;
    v385.m128i_i64[1] = (__int64)&off_141790AA0;
    if ( (unsigned __int8)sub_141490720(&v339, &v385) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v423,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v363 = v404.m256i_i64[2];
    v362 = _mm_loadu_si128((const __m128i *)&v404);
    v373 = 1;
    v355 = v13;
    v356 = v12;
    v364.m128i_i64[0] = -1;
    v357 = 0;
    v358 = 8;
    v359 = 0;
    v360 = 8;
    v361 = 0;
    v369 = 0;
    v372 = 0;
    v371 = 0;
    v366 = -1;
    sub_1401DD260(v443);
  }
  else
  {
    v415 = v410.m128i_i64[0];
    v385 = (__m128i)__PAIR128__(v411, v410.m128i_u64[1]);
    *(_OWORD *)v386.m512i_i8 = 0;
    v424 = v410.m128i_i64[1];
    *(_OWORD *)&v386.m512i_u64[2] = __PAIR128__(v411, v410.m128i_u64[1]);
    sub_1408A6200(&v404, &v385);
    if ( v404.m256i_i8[0] != -1 )
    {
      v14 = _mm_loadu_si128((const __m128i *)&v404);
      v411 = *(_OWORD *)&v404.m256i_u64[2];
      v410 = v14;
      v396 = 257;
      v385.m128i_i64[0] = v13;
      v385.m128i_i64[1] = v12;
      v386.m512i_i64[6] = -1;
      *((_QWORD *)&v387 + 1) = -1;
      v386.m512i_i64[0] = 0;
      v386.m512i_i64[1] = 8;
      *(_OWORD *)&v386.m512i_u64[2] = 0;
      *(_OWORD *)&v386.m512i_u64[4] = 8u;
      v392 = 0;
      v395 = 0;
      v393 = 0;
      v389 = -1;
      *(_QWORD *)v432 = 0;
      *(_QWORD *)&v432[16] = 0;
      v15 = (_BYTE *)sub_141433D50(aModels_1, 6, &v410);
      if ( v15 )
      {
        v16 = nullptr;
        if ( *v15 == 4 )
          v16 = v15 + 8;
        v443 = (__int64)v16;
      }
      else
      {
        v443 = 0;
      }
      v23 = v432;
      v24 = 0;
      while ( 1 )
      {
        do
        {
          do
          {
            if ( !v24 || v24 == v9 )
            {
              if ( !v443 || (v25 = *(_QWORD *)(v443 + 16)) == 0 )
              {
                sub_141684120(&v355, &v385, 192);
                if ( *(_QWORD *)v432 )
                {
                  v74 = *(_QWORD *)&v432[16];
                  v404.m256i_i64[1] = 0;
                  *(_OWORD *)&v404.m256i_u64[2] = *(_OWORD *)v432;
                  *((_QWORD *)&v405 + 1) = 0;
                  v406 = *(_OWORD *)v432;
                  v75 = 1;
                }
                else
                {
                  v75 = 0;
                  v74 = 0;
                }
                v404.m256i_i64[0] = v75;
                *(_QWORD *)&v405 = v75;
                *(_QWORD *)&v407 = v74;
                v435 = 0;
                sub_140308850(&v339, &v404);
                for ( i = v339.m128i_i64[0]; v339.m128i_i64[0]; i = v339.m128i_i64[0] )
                {
                  v77 = *(_QWORD *)(i + 24 * v340 + 8);
                  if ( v77 )
                    sub_140001660(*(_QWORD *)(i + 24 * v340 + 16), v77, 1);
                  v435 = 0;
                  sub_140308850(&v339, &v404);
                }
                sub_1400104F0(&v410);
                goto LABEL_111;
              }
              v24 = *(_QWORD *)(v443 + 8);
              v9 = v24 + 32 * v25;
              v443 = 0;
            }
            v26 = sub_141433D50(&unk_14178A34F, 4, v24);
            v24 += 32;
          }
          while ( !v26 || *(_BYTE *)v26 != 3 );
          v28 = *(_QWORD *)(v26 + 24);
          if ( v28 < 0 )
          {
            v73 = 0;
            goto LABEL_100;
          }
          v416 = *(_QWORD **)(v26 + 16);
          v444 = v28;
          if ( v28 )
          {
            nullsub_1(v27);
            v29 = sub_140001650(v28, 1);
            if ( !v29 )
            {
              v417 = v28;
              v73 = 1;
LABEL_100:
              sub_1416C2D4B(v73, v417);
            }
            v30 = v28;
            v31 = v29;
            sub_141684120(v29, v416, v30);
            v32 = v31;
            v28 = v444;
          }
          else
          {
            v32 = 1;
          }
          v355 = v28;
          v417 = v32;
          v356 = v32;
          v357 = v28;
        }
        while ( sub_140307390(v23, &v355) );
        v34 = v23;
        if ( v28 )
        {
          nullsub_1(v33);
          v35 = sub_140001650(v28, 1);
          v36 = v28;
          if ( !v35 )
            sub_1416C2D4B(1, v28);
          v37 = v35;
          sub_141684120(v35, v416, v36);
        }
        else
        {
          v36 = 0;
          v37 = 1;
        }
        v355 = v36;
        v356 = v37;
        v357 = v36;
        sub_140307390(&v392, &v355);
        v39 = v36;
        v23 = v34;
        if ( v39 )
        {
          nullsub_1(v38);
          v40 = sub_140001650(v39, 1);
          if ( !v40 )
            sub_1416C2D4B(1, v39);
          v418 = v40;
          sub_141684120(v40, v416, v39);
          v41 = v386.m512i_i64[2];
          if ( v386.m512i_i64[2] != v386.m512i_i64[0] )
            goto LABEL_59;
        }
        else
        {
          v418 = 1;
          v41 = v386.m512i_i64[2];
          if ( v386.m512i_i64[2] != v386.m512i_i64[0] )
            goto LABEL_59;
        }
        sub_141689AB0(&v386);
LABEL_59:
        v42 = v386.m512i_i64[1];
        v43 = 3 * v41;
        v44 = v444;
        *(_QWORD *)(v386.m512i_i64[1] + 8 * v43) = v444;
        *(_QWORD *)(v42 + 8 * v43 + 8) = v418;
        *(_QWORD *)(v42 + 8 * v43 + 16) = v44;
        v386.m512i_i64[2] = v41 + 1;
        sub_1414A2990((unsigned int)&v355, (_DWORD)v416, v44, (unsigned int)asc_14178A353, 2);
        sub_1407BEE50(&v404, &v355);
        if ( v404.m256i_i32[0] == 1
          && v404.m256i_i64[1] >= 0xDuLL
          && !(*v416 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)v416 + 5) ^ 0x5F79616C65725F69LL) )
        {
          v422 = v404.m256i_i64[2];
          v418 = (__int64)v416 + v404.m256i_i64[2];
          v400 = v44 - v404.m256i_i64[2];
          sub_14033BC10((char *)v416 + v404.m256i_i64[2], v44 - v404.m256i_i64[2]);
          if ( v47 )
          {
            v48 = v23;
            if ( v44 )
            {
              v49 = v44;
              v50 = v48;
              nullsub_1(v45);
              v51 = sub_140001650(v49, 1);
              if ( !v51 )
                sub_1416C2D4B(1, v49);
              v419 = v51;
              sub_141684120(v51, v416, v49);
            }
            else
            {
              v50 = v23;
              v419 = 1;
            }
            v52 = v386.m512i_i64[5];
            if ( v386.m512i_i64[5] == v386.m512i_i64[3] )
              sub_141689AB0(&v386.m512i_u64[3]);
            v53 = v386.m512i_i64[4];
            v54 = 3 * v52;
            v55 = v444;
            *(_QWORD *)(v386.m512i_i64[4] + 8 * v54) = v444;
            *(_QWORD *)(v53 + 8 * v54 + 8) = v419;
            *(_QWORD *)(v53 + 8 * v54 + 16) = v55;
            v386.m512i_i64[5] = v52 + 1;
            v23 = v50;
            v56 = v55;
            if ( v389 == -1 )
            {
              if ( v55 )
              {
                nullsub_1(v54);
                v57 = sub_140001650(v56, 1);
                if ( !v57 )
                  sub_1416C2D4B(1, v56);
                v58 = v57;
                sub_141684120(v57, v416, v56);
                if ( v389 != -1 && v389 )
                  sub_140001660(v390, v389, 1);
              }
              else
              {
                v58 = 1;
              }
              v389 = v56;
              v390 = v58;
              v391 = v56;
            }
            v59 = 1;
            if ( v56 != v422 )
            {
              nullsub_1(1);
              v60 = v400;
              v61 = sub_140001650(v400, 1);
              if ( !v61 )
                sub_1416C2D4B(1, v60);
              v62 = v60;
              v63 = v61;
              sub_141684120(v61, v418, v62);
              v59 = v63;
              v56 = v444;
            }
            v64 = *((_QWORD *)&v393 + 1);
            if ( *((_QWORD *)&v393 + 1) )
            {
              v425 = v394;
              v46 = v400;
              while ( 2 )
              {
                v65 = v64 + 8;
                v419 = v64;
                v378 = *(unsigned __int16 *)(v64 + 538);
                v66 = 3LL * (unsigned int)(8 * v378);
                v67 = -1;
                do
                {
                  if ( !v66 )
                  {
                    v67 = v378;
                    goto LABEL_92;
                  }
                  v418 = v65 + 24;
                  v68 = *(_QWORD *)(v65 + 16);
                  v69 = v46 - v68;
                  if ( v46 < v68 )
                    v68 = v46;
                  v70 = v59;
                  v71 = sub_1416847B0(v59, *(_QWORD *)(v65 + 8), v68);
                  v59 = v70;
                  v46 = v400;
                  if ( v71 )
                    v69 = v71;
                  v72 = (v69 > 0) - (v69 < 0);
                  ++v67;
                  v66 -= 24;
                  v65 = v418;
                }
                while ( v72 == 1 );
                if ( !v72 )
                {
                  v356 = v419;
                  v357 = v425;
                  v358 = v67;
                  *(_QWORD *)&v359 = (char *)&v393 + 8;
                  v355 = -1;
                  v56 = v444;
                  v23 = v432;
                  if ( v444 != v422 )
                    sub_140001660(v59, v400, 1);
                  goto LABEL_97;
                }
LABEL_92:
                v23 = v432;
                if ( v425 )
                {
                  --v425;
                  v64 = *(_QWORD *)(v419 + 8 * v67 + 544);
                  continue;
                }
                break;
              }
              v355 = v46;
              v356 = v59;
              v357 = v46;
              v358 = (__int64)&v393 + 8;
              v359 = v419;
              v360 = v67;
              v56 = v444;
            }
            else
            {
              v355 = v400;
              v356 = v59;
              v357 = v400;
              v358 = (__int64)&v393 + 8;
              *(_QWORD *)&v359 = 0;
            }
LABEL_97:
            sub_140342B70(&v355, v416, v56, v46);
          }
        }
      }
    }
    v17 = (__int64 *)v404.m256i_i64[1];
    *(_QWORD *)v432 = v404.m256i_i64[1];
    v339.m128i_i64[0] = 0;
    v339.m128i_i64[1] = 1;
    v340 = 0;
    v386.m512i_i64[0] = 1610612768;
    v385.m128i_i64[0] = (__int64)&v339;
    v385.m128i_i64[1] = (__int64)&off_141790AA0;
    if ( (unsigned __int8)sub_14142D3F0(v432, &v385) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v423,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v365 = v340;
    v364 = _mm_loadu_si128(&v339);
    v373 = 1;
    v355 = v13;
    v356 = v12;
    v362.m128i_i64[0] = -1;
    v357 = 0;
    v358 = 8;
    v359 = 0;
    v360 = 8;
    v361 = 0;
    v369 = 0;
    v372 = 0;
    v371 = 0;
    v366 = -1;
    v18 = *v17;
    v19 = *v17 == 1;
    v443 = (__int64)v17;
    if ( v19 )
    {
      sub_1401DD260(v17[1]);
    }
    else if ( !v18 )
    {
      v20 = *(_QWORD *)(v443 + 16);
      if ( v20 )
        sub_140001660(*(_QWORD *)(v443 + 8), v20, 1);
    }
    sub_140001660(v443, 40, 8);
LABEL_111:
    if ( v415 )
      sub_140001660(v424, v415, 1);
  }
LABEL_113:
  sub_1404C0AB0(&v339, a2);
  v410.m128i_i64[0] = 0;
  v410.m128i_i64[1] = 8;
  v411 = 0;
  memset(&v413, 0, sizeof(v413));
  v414 = 0;
  v412 = (__m128i)8uLL;
  *(_QWORD *)&v337 = 0;
  v338 = 0;
  v442 = 1;
  sub_140712830(&v385);
  *((_QWORD *)&v78 + 1) = v385.m128i_i64[1];
  v79 = v385.m128i_i64[1] + 32 * v386.m512i_i64[0];
  v348 = v385.m128i_i64[1];
  v334 = v385;
  v350 = v385.m128i_i64[0];
  v351 = v79;
  v336 = v366;
  v400 = *(_QWORD *)(v374 + 8);
  v419 = *(_QWORD *)(v374 + 16);
  v333 = v79 - 32;
  v378 = v79;
LABEL_114:
  *(_QWORD *)&v78 = v333 - *((_QWORD *)&v78 + 1);
  v80 = *((_QWORD **)&v78 + 1);
  v81 = (_QWORD *)(*((_QWORD *)&v78 + 1) + 40LL);
  while ( v80 != (_QWORD *)v79 )
  {
    v415 = (__int64)(v80 + 4);
    v349 = v80 + 4;
    if ( *v80 == -1 )
    {
      if ( v79 != v415 )
      {
        *(_QWORD *)&v78 = (unsigned __int64)v78 >> 5;
        do
        {
          v214 = *(v81 - 1);
          if ( v214 )
            sub_140001660(*v81, v214, 1);
          v81 += 4;
          *(_QWORD *)&v78 = v78 - 1;
        }
        while ( (_QWORD)v78 );
      }
      break;
    }
    v416 = (_QWORD *)*v80;
    v83 = v80[2];
    v424 = v80[1];
    v444 = v83;
    sub_141486710(&v385, v424, v83);
    if ( v385.m128i_i32[0] == 2 )
    {
      sub_1401DD260(v385.m128i_i64[1]);
      goto LABEL_116;
    }
    sub_1406C1800((__int64)&v385, v424, v444, 32769);
    if ( BYTE8(v388) == 0xFF )
    {
      v87 = _mm_loadu_si128(&v385);
      v433 = *(_OWORD *)&v386.m512i_u64[4];
      *(_OWORD *)&v432[32] = *(_OWORD *)&v386.m512i_u64[2];
      *(_OWORD *)&v432[16] = *(_OWORD *)v386.m512i_i8;
      *(__m128i *)v432 = v87;
      sub_14149B760(&v380, v424, v444);
      v443 = v380.m128i_i64[1];
      sub_140403D70((__int64)&v420, v380.m128i_i64[1], v381, v400, v419);
      if ( v380.m128i_i64[0] > 0 )
        sub_140001660(v443, v380.m128i_i64[0], 1);
      v380.m128i_i64[0] = (__int64)&v420;
      v380.m128i_i64[1] = (__int64)sub_1400015F0;
      *(_QWORD *)&v381 = v432;
      *((_QWORD *)&v381 + 1) = sub_140FB8910;
      sub_14149C0F0(&v328, &unk_14178A4E4, &v380);
      if ( v420.m128i_i64[0] )
        sub_140001660(v420.m128i_i64[1], v420.m128i_i64[0], 1);
      v88 = v412.m128i_i64[1];
      if ( v412.m128i_i64[1] == *((_QWORD *)&v411 + 1) )
        sub_141689AB0((char *)&v411 + 8);
      v89 = v412.m128i_i64[0];
      v90 = 3 * v88;
      *(_QWORD *)(v412.m128i_i64[0] + 8 * v90 + 16) = v329;
      *(__m128i *)(v89 + 8 * v90) = _mm_loadu_si128(&v328);
      v412.m128i_i64[1] = v88 + 1;
      sub_1406CBAD0(v432);
      goto LABEL_116;
    }
    v409 = v388;
    v408 = v387;
    v407 = *(_OWORD *)&v386.m512i_u64[6];
    v84 = _mm_loadu_si128(&v385);
    v406 = *(_OWORD *)&v386.m512i_u64[4];
    v405 = *(_OWORD *)&v386.m512i_u64[2];
    *(_OWORD *)&v404.m256i_u64[2] = *(_OWORD *)v386.m512i_i8;
    *(__m128i *)v404.m256i_i8 = v84;
    sub_140FB95D0(&v385, &v404, 0, 500000000);
    if ( v385.m128i_i64[0] != -1 )
      sub_1406CBAD0(&v385);
    v376 = (__m128i *)aThreads_1;
    v377 = 7;
    v352 = &v376;
    v353 = sub_14041F680;
    sub_14149C0F0(&v397, &unk_141789F7D, &v352);
    v425 = v397.m128i_i64[1];
    sub_140716FD0(&v385, &v404, v397.m128i_i64[1], v398, v314, v316);
    v85 = v385.m128i_i64[1];
    v380 = *(__m128i *)&v386.m512i_u64[3];
    v381 = *(_OWORD *)&v386.m512i_u64[5];
    if ( v385.m128i_i32[0] == 1 )
    {
      v417 = v386.m512i_i64[0];
      v418 = v386.m512i_i64[2];
      v443 = v386.m512i_i64[1];
      v86 = _mm_load_si128(&v380);
      v421 = v381;
      v420 = v86;
      if ( v397.m128i_i64[0] )
        sub_140001660(v425, v397.m128i_i64[0], 1);
      if ( v85 != -1 )
        goto LABEL_139;
    }
    else
    {
      *(_QWORD *)v432 = v385.m128i_i64[1];
      *(_OWORD *)&v432[8] = *(_OWORD *)v386.m512i_i8;
      *(_QWORD *)&v432[24] = v386.m512i_i64[2];
      v91 = _mm_load_si128(&v380);
      v433 = v381;
      *(__m128i *)&v432[32] = v91;
      if ( v397.m128i_i64[0] )
        sub_140001660(v425, v397.m128i_i64[0], 1);
      v92 = sub_1414B6B70(*((_QWORD *)&v433 + 1));
      if ( v92 )
      {
        v443 = v92;
        sub_1406CBC60(v432);
        v85 = 0x8000000000000013uLL;
        v417 = 0;
LABEL_139:
        v385.m128i_i64[0] = v85;
        v385.m128i_i64[1] = v417;
        v386.m512i_i64[0] = v443;
        v386.m512i_i64[1] = v418;
        v93 = _mm_load_si128(&v420);
        *(_OWORD *)&v386.m512i_u64[4] = v421;
        *(__m128i *)&v386.m512i_u64[2] = v93;
        sub_14149B760(v432, v424, v444);
        v443 = *(_QWORD *)&v432[8];
        sub_140403D70((__int64)&v380, *(__int64 *)&v432[8], *(__int64 *)&v432[16], v400, v419);
        if ( *(__int64 *)v432 > 0 )
          sub_140001660(v443, *(_QWORD *)v432, 1);
        *(_QWORD *)v432 = &v380;
        *(_QWORD *)&v432[8] = sub_1400015F0;
        *(_QWORD *)&v432[16] = &v385;
        *(_QWORD *)&v432[24] = sub_140FB8910;
        sub_14149C0F0(&v326, &unk_14178A4C8, v432);
        if ( v380.m128i_i64[0] )
          sub_140001660(v380.m128i_i64[1], v380.m128i_i64[0], 1);
        v94 = v412.m128i_i64[1];
        if ( v412.m128i_i64[1] == *((_QWORD *)&v411 + 1) )
          sub_141689AB0((char *)&v411 + 8);
        v95 = v412.m128i_i64[0];
        v96 = 3 * v94;
        *(_QWORD *)(v412.m128i_i64[0] + 8 * v96 + 16) = v327;
        *(__m128i *)(v95 + 8 * v96) = _mm_loadu_si128(&v326);
        v412.m128i_i64[1] = v94 + 1;
        sub_1406CBAD0(&v385);
        goto LABEL_146;
      }
      sub_14099A6D0(&v385, v432, 0);
      v443 = v385.m128i_i64[1];
      v417 = v385.m128i_i64[0];
      v418 = v386.m512i_i64[0];
      sub_1406CBC60(v432);
    }
    v316 = v417;
    v97 = v443;
    if ( !v417 )
      goto LABEL_212;
    for ( j = v417; ; j = *(_QWORD *)(v425 + 8 * v101 + 280) )
    {
      v99 = j + 8;
      v425 = j;
      v422 = *(unsigned __int16 *)(j + 274);
      v100 = 3LL * (unsigned int)(8 * v422);
      v101 = -1;
      do
      {
        if ( !v100 )
        {
          v101 = v422;
          v109 = v97-- == 0;
          if ( !v109 )
            goto LABEL_161;
LABEL_212:
          sub_14149B760(&v385, v424, v444);
          v79 = v378;
          v444 = v385.m128i_i64[1];
          sub_140403D70((__int64)v432, v385.m128i_i64[1], v386.m512i_i64[0], v400, v419);
          if ( v385.m128i_i64[0] > 0 )
            sub_140001660(v444, v385.m128i_i64[0], 1);
          v385.m128i_i64[0] = (__int64)v432;
          v385.m128i_i64[1] = (__int64)sub_1400015F0;
          sub_14149C0F0(&v324, &unk_14178A4A5, &v385);
          if ( *(_QWORD *)v432 )
            sub_140001660(*(_QWORD *)&v432[8], *(_QWORD *)v432, 1);
          v154 = v412.m128i_i64[1];
          if ( v412.m128i_i64[1] == *((_QWORD *)&v411 + 1) )
            sub_141689AB0((char *)&v411 + 8);
          v155 = v412.m128i_i64[0];
          v156 = 3 * v154;
          *(_QWORD *)(v412.m128i_i64[0] + 8 * v156 + 16) = v325;
          *(__m128i *)(v155 + 8 * v156) = _mm_loadu_si128(&v324);
          v412.m128i_i64[1] = v154 + 1;
          v153 = v443;
          goto LABEL_229;
        }
        v102 = v99 + 24;
        v103 = *(_QWORD *)(v99 + 16);
        v104 = v103 - 14;
        if ( v103 >= 0xE )
          v103 = 14;
        v105 = -(__int64)v104;
        v106 = sub_1416847B0(aModelProvider_0, *(_QWORD *)(v99 + 8), v103);
        if ( v106 )
          v105 = v106;
        v107 = v443;
        v108 = (v105 > 0) - (v105 < 0);
        ++v101;
        v100 -= 24;
        v99 = v102;
      }
      while ( v108 == 1 );
      if ( !v108 )
        break;
      v109 = v97-- == 0;
      if ( v109 )
        goto LABEL_212;
LABEL_161:
      ;
    }
    v110 = v443;
    v111 = v417;
    while ( 2 )
    {
      v112 = v111 + 8;
      v425 = v111;
      v422 = *(unsigned __int16 *)(v111 + 274);
      v113 = 3LL * (unsigned int)(8 * v422);
      v114 = -1;
LABEL_164:
      if ( !v113 )
      {
        v114 = v422;
        v109 = v110-- == 0;
        if ( v109 )
          goto LABEL_237;
LABEL_174:
        v111 = *(_QWORD *)(v425 + 8 * v114 + 280);
        continue;
      }
      break;
    }
    v115 = v112 + 24;
    v116 = *(_QWORD *)(v112 + 16);
    v117 = v116 - 5;
    if ( v116 >= 5 )
      v116 = 5;
    v118 = -(__int64)v117;
    v119 = sub_1416847B0(
             "modelROLLBACKrecency_at_msupdated_at_msupdated_atarchivedstate_.sqlitesqlite_home",
             *(_QWORD *)(v112 + 8),
             v116);
    if ( v119 )
      v118 = v119;
    v107 = v443;
    v120 = (v118 > 0) - (v118 < 0);
    ++v114;
    v113 -= 24;
    v112 = v115;
    if ( v120 == 1 )
      goto LABEL_164;
    if ( !v120 )
    {
      v121 = 19;
      v122 = (const char *)&unk_14178A3E1;
      goto LABEL_176;
    }
    v109 = v110-- == 0;
    if ( !v109 )
      goto LABEL_174;
LABEL_237:
    v121 = 2;
    v122 = asc_14178A3F4;
LABEL_176:
    v319[0] = v122;
    v319[1] = v121;
    v123 = v107;
    v124 = v417;
    while ( 2 )
    {
      v125 = v124 + 8;
      v425 = v124;
      v422 = *(unsigned __int16 *)(v124 + 274);
      v126 = 3LL * (unsigned int)(8 * v422);
      v127 = -1;
      do
      {
        if ( !v126 )
        {
          v127 = v422;
          v109 = v123-- == 0;
          if ( v109 )
            goto LABEL_238;
          goto LABEL_188;
        }
        v128 = v125 + 24;
        v129 = *(_QWORD *)(v125 + 16);
        v130 = v129 - 6;
        if ( v129 >= 6 )
          v129 = 6;
        v131 = -(__int64)v130;
        v132 = sub_1416847B0(aSource_1, *(_QWORD *)(v125 + 8), v129);
        if ( v132 )
          v131 = v132;
        v107 = v443;
        v133 = (v131 > 0) - (v131 < 0);
        ++v127;
        v126 -= 24;
        v125 = v128;
      }
      while ( v133 == 1 );
      if ( v133 )
      {
        v109 = v123-- == 0;
        if ( v109 )
        {
LABEL_238:
          v134 = 2;
          v135 = asc_14178A3F4;
          goto LABEL_190;
        }
LABEL_188:
        v124 = *(_QWORD *)(v425 + 8 * v127 + 280);
        continue;
      }
      break;
    }
    v134 = 20;
    v135 = (const char *)&unk_14178A3F6;
LABEL_190:
    v318[0] = v135;
    v318[1] = v134;
    v136 = v107;
    v137 = v417;
    while ( 2 )
    {
      v138 = v137 + 8;
      v425 = v137;
      v422 = *(unsigned __int16 *)(v137 + 274);
      v139 = 3LL * (unsigned int)(8 * v422);
      v140 = -1;
LABEL_192:
      if ( !v139 )
      {
        v140 = v422;
        v109 = v136-- == 0;
        if ( v109 )
          goto LABEL_239;
LABEL_202:
        v137 = *(_QWORD *)(v425 + 8 * v140 + 280);
        continue;
      }
      break;
    }
    v141 = v138 + 24;
    v142 = *(_QWORD *)(v138 + 16);
    v143 = v142 - 8;
    if ( v142 >= 8 )
      v142 = 8;
    v144 = -(__int64)v143;
    v145 = sub_1416847B0("archivedstate_.sqlitesqlite_home", *(_QWORD *)(v138 + 8), v142);
    if ( v145 )
      v144 = v145;
    v146 = (v144 > 0) - (v144 < 0);
    ++v140;
    v139 -= 24;
    v138 = v141;
    if ( v146 == 1 )
      goto LABEL_192;
    if ( !v146 )
    {
      v147 = 31;
      v148 = (__int64)&unk_14178A40A;
      goto LABEL_204;
    }
    v109 = v136-- == 0;
    if ( !v109 )
      goto LABEL_202;
LABEL_239:
    v148 = 1;
    v147 = 0;
LABEL_204:
    v317[0] = v148;
    v317[1] = v147;
    v385.m128i_i64[0] = (__int64)v319;
    v385.m128i_i64[1] = (__int64)sub_14041F680;
    v386.m512i_i64[0] = (__int64)v318;
    v386.m512i_i64[1] = (__int64)sub_14041F680;
    v386.m512i_i64[2] = (__int64)v317;
    v386.m512i_i64[3] = (__int64)sub_14041F680;
    sub_14149C0F0(v432, &unk_14178A429, &v385);
    v79 = v378;
    v422 = *(_QWORD *)&v432[8];
    v425 = *(_QWORD *)v432;
    sub_140716FD0(&v385, &v404, *(_QWORD *)&v432[8], *(_QWORD *)&v432[16], v315, v316);
    if ( v385.m128i_i32[0] == 1 )
    {
      v149 = _mm_loadu_si128((const __m128i *)&v385.m128i_u64[1]);
      v433 = *(_OWORD *)&v386.m512i_u64[5];
      *(_OWORD *)&v432[32] = *(_OWORD *)&v386.m512i_u64[3];
      *(_OWORD *)&v432[16] = *(_OWORD *)&v386.m512i_u64[1];
      *(__m128i *)v432 = v149;
      sub_14149B760(&v420, v424, v444);
      v444 = v420.m128i_i64[1];
      sub_140403D70((__int64)&v397, v420.m128i_i64[1], v421, v400, v419);
      if ( v420.m128i_i64[0] > 0 )
        sub_140001660(v444, v420.m128i_i64[0], 1);
      v420.m128i_i64[0] = (__int64)&v397;
      v420.m128i_i64[1] = (__int64)sub_1400015F0;
      *(_QWORD *)&v421 = v432;
      *((_QWORD *)&v421 + 1) = sub_140FB8910;
      sub_14149C0F0(&v322, &unk_14178A482, &v420);
      if ( v397.m128i_i64[0] )
        sub_140001660(v397.m128i_i64[1], v397.m128i_i64[0], 1);
      v150 = v412.m128i_i64[1];
      if ( v412.m128i_i64[1] == *((_QWORD *)&v411 + 1) )
        sub_141689AB0((char *)&v411 + 8);
      v151 = v412.m128i_i64[0];
      v152 = 3 * v150;
      *(_QWORD *)(v412.m128i_i64[0] + 8 * v152 + 16) = v323;
      *(__m128i *)(v151 + 8 * v152) = _mm_loadu_si128(&v322);
      v412.m128i_i64[1] = v150 + 1;
      sub_1406CBAD0(v432);
      v153 = v443;
      goto LABEL_227;
    }
    v157 = _mm_loadu_si128((const __m128i *)&v385.m128i_u64[1]);
    v383 = *(_OWORD *)&v386.m512i_u64[5];
    v382 = *(_OWORD *)&v386.m512i_u64[3];
    v381 = *(_OWORD *)&v386.m512i_u64[1];
    v380 = v157;
    v158 = sub_1414B6B70(v386.m512i_i64[6]);
    if ( !v158 )
    {
      v376 = &v380;
      v377 = v158;
      while ( 1 )
      {
        while ( 1 )
        {
          sub_1407BAD50(&v385, &v376);
          v173 = v385.m128i_i64[0];
          if ( v385.m128i_i64[0] == -1 )
          {
            if ( !v377 )
              goto LABEL_307;
            sub_14042B0E0(&v385, &v377, 0);
            v444 = v385.m128i_i64[1];
            v173 = v385.m128i_i64[0];
            v166 = v386.m512i_i64[1];
            v167 = v386.m512i_i64[0];
            if ( v385.m128i_i64[0] == -1 )
            {
              v174 = v386.m512i_i64[1];
              v403 = v386.m512i_i64[0];
              sub_14042B0E0(&v385, &v377, 1);
              v175 = v385.m128i_i64[1];
              v173 = v385.m128i_i64[0];
              v166 = v386.m512i_i64[1];
              v167 = v386.m512i_i64[0];
              if ( v385.m128i_i64[0] == -1 )
              {
                v399 = v386.m512i_i64[0];
                v401 = v385.m128i_i64[1];
                sub_14042B0E0(&v385, &v377, 2);
                v178 = v385.m128i_i64[1];
                v173 = v385.m128i_i64[0];
                v179 = v386.m512i_i64[1];
                v167 = v386.m512i_i64[0];
                if ( v385.m128i_i64[0] == -1 )
                {
                  if ( v444 == -2 )
                  {
LABEL_307:
                    sub_1406CB9C0(&v376);
                    v79 = v378;
                    sub_1406CBC60(&v380);
                    v212 = v443;
                    if ( v425 )
                      sub_140001660(v422, v425, 1);
                    v386.m512i_i64[0] = v417;
                    v386.m512i_i64[1] = v212;
                    v386.m512i_i64[4] = v417;
                    v386.m512i_i64[5] = v212;
                    v385 = (__m128i)1uLL;
                    *(_OWORD *)&v386.m512i_u64[2] = 1u;
                    v386.m512i_i64[6] = v418;
                    sub_140308850(v432, &v385);
                    while ( *(_QWORD *)v432 )
                    {
                      v213 = *(_QWORD *)(*(_QWORD *)v432 + 24LL * *(_QWORD *)&v432[16] + 8);
                      if ( v213 )
                        sub_140001660(*(_QWORD *)(*(_QWORD *)v432 + 24LL * *(_QWORD *)&v432[16] + 16), v213, 1);
                      sub_140308850(v432, &v385);
                    }
                    sub_1406CB500(&v404);
                    v82 = v416;
                    *((_QWORD *)&v78 + 1) = v415;
                    if ( v416 )
LABEL_315:
                      sub_140001660(v424, v82, 1);
                    goto LABEL_114;
                  }
                  v173 = v403;
                  v165 = v174;
                  v169 = v166;
                  v166 = v399;
                  v168 = v385.m128i_i64[1];
                  v172 = v444;
                  v170 = v386.m512i_i64[0];
                  v167 = v401;
                  v171 = v386.m512i_i64[1];
                }
                else
                {
                  v402 = v386.m512i_i64[3];
                  v169 = v386.m512i_i64[2];
                  v171 = v386.m512i_i64[5];
                  v170 = v386.m512i_i64[4];
                  if ( v401 )
                  {
                    v180 = v386.m512i_i64[4];
                    v181 = v386.m512i_i64[2];
                    sub_140001660(v399, v401, 1);
                    v169 = v181;
                    v170 = v180;
                  }
                  if ( v444 )
                  {
                    v182 = v170;
                    v183 = v169;
                    sub_140001660(v403, v444, 1);
                    v169 = v183;
                    v170 = v182;
                  }
                  v165 = v178;
                  v166 = v179;
                  v172 = -1;
                  v168 = v402;
                }
              }
              else
              {
                v402 = v386.m512i_i64[3];
                v169 = v386.m512i_i64[2];
                v171 = v386.m512i_i64[5];
                v170 = v386.m512i_i64[4];
                v172 = -1;
                v176 = v444;
                if ( v444 )
                {
                  v401 = v386.m512i_i64[4];
                  v177 = v386.m512i_i64[2];
                  v444 = v386.m512i_i64[1];
                  sub_140001660(v403, v176, 1);
                  v169 = v177;
                  v170 = v401;
                  v165 = v175;
                  v166 = v444;
                }
                else
                {
                  v165 = v385.m128i_i64[1];
                }
                v168 = v402;
              }
            }
            else
            {
              v168 = v386.m512i_i64[3];
              v169 = v386.m512i_i64[2];
              v171 = v386.m512i_i64[5];
              v170 = v386.m512i_i64[4];
              v172 = -1;
              v165 = v444;
            }
          }
          else
          {
            v165 = v385.m128i_i64[1];
            v166 = v386.m512i_i64[1];
            v167 = v386.m512i_i64[0];
            v168 = v386.m512i_i64[3];
            v169 = v386.m512i_i64[2];
            v171 = v386.m512i_i64[5];
            v170 = v386.m512i_i64[4];
            v172 = -1;
          }
          v385.m128i_i64[0] = v172;
          v385.m128i_i64[1] = v173;
          v386.m512i_i64[0] = v165;
          v386.m512i_i64[1] = v167;
          v386.m512i_i64[2] = v166;
          v386.m512i_i64[3] = v169;
          v386.m512i_i64[4] = v168;
          v386.m512i_i64[5] = v170;
          v386.m512i_i64[6] = v171;
          if ( v172 != -1 )
            break;
          sub_1406CBAD0(&v385.m128i_u64[1]);
        }
        v184 = v169;
        v402 = v168;
        v399 = v166;
        v403 = v167;
        v444 = v172;
        v352 = (__m128i **)v172;
        v353 = (__int64 (__fastcall *)())v173;
        v354 = v165;
        v401 = v170;
        if ( (unsigned __int8)sub_1407BE9C0(aSubagent_0, 10, v170, v171) )
        {
          v185 = v403;
          goto LABEL_273;
        }
        v186 = sub_14033BC10(v399, v184);
        if ( v187 < 0 )
        {
          v313 = 0;
          goto LABEL_491;
        }
        v189.m128i_i64[0] = v187;
        v379 = v187;
        if ( v187 )
        {
          v190 = v186;
          nullsub_1(v188);
          v191 = sub_140001650(v189.m128i_i64[0], 1);
          if ( !v191 )
          {
            v384 = v189.m128i_i64[0];
            v313 = 1;
LABEL_491:
            sub_1416C2D4B(v313, v384);
          }
          v189.m128i_i64[1] = v191;
          sub_141684120(v191, v190, v189.m128i_i64[0]);
          v397 = v189;
          v384 = v189.m128i_i64[1];
          v375 = (unsigned __int128)v189 >> 64;
          v398 = (__int64)v189;
          sub_14149C500(&v420, &v397);
        }
        else
        {
          v397.m128i_i64[0] = 0;
          v397.m128i_i64[1] = 1;
          v398 = 0;
          nullsub_1(v188);
          v192 = (_DWORD *)sub_140001650(7, 1);
          if ( !v192 )
          {
            v375 = 1;
            sub_1416C2D4B(1, 7);
          }
          *(_DWORD *)((char *)v192 + 3) = 1048147056;
          *v192 = 1886217532;
          v420.m128i_i64[0] = 7;
          v420.m128i_i64[1] = (__int64)v192;
          *(_QWORD *)&v421 = 7;
          v384 = 1;
        }
        v434 = 1;
        sub_14149C500(&v385, &v352);
        *(_QWORD *)&v432[40] = v421;
        *(__m128i *)&v432[24] = v420;
        *(__m128i *)v432 = _mm_loadu_si128(&v385);
        *(_QWORD *)&v432[16] = v386.m512i_i64[0];
        v434 = 0;
        sub_140307E80(&v385, &v337, v432);
        v434 = 0;
        v193 = (_QWORD *)sub_1403889F0(&v385);
        ++*v193;
        if ( v354 != 6 || *(_DWORD *)v353 ^ 0x616D6961 | *((unsigned __int16 *)v353 + 2) ^ 0x3169 )
        {
LABEL_271:
          v185 = v403;
          if ( v379 )
            sub_140001660(v384, v379, 1);
LABEL_273:
          v194 = v444;
          if ( v402 )
            sub_140001660(v401, v402, 1);
          if ( v185 )
          {
            v195 = v399;
            v196 = v185;
LABEL_277:
            sub_140001660(v195, v196, 1);
            goto LABEL_278;
          }
          goto LABEL_278;
        }
        ++v413.m256i_i64[0];
        v197 = v403;
        if ( v379 )
        {
          v198 = v369;
          v194 = v444;
          if ( v369 )
          {
            v199 = v370;
            while ( 1 )
            {
              v200 = v198 + 8;
              v201 = *(unsigned __int16 *)(v198 + 274);
              v202 = 3LL * (unsigned int)(8 * v201);
              v203 = -1;
              do
              {
                if ( !v202 )
                {
                  v203 = v201;
                  v197 = v403;
                  goto LABEL_293;
                }
                v204 = v200 + 24;
                v205 = *(_QWORD *)(v200 + 16);
                v206 = v379 - v205;
                if ( v379 < v205 )
                  v205 = v379;
                v207 = sub_1416847B0(v384, *(_QWORD *)(v200 + 8), v205);
                if ( v207 )
                  v206 = v207;
                v19 = v206 == 0;
                v208 = v206 < 0;
                v194 = v444;
                v209 = (!v208 && !v19) - v208;
                ++v203;
                v202 -= 24;
                v200 = v204;
              }
              while ( v209 == 1 );
              if ( !v209 )
                goto LABEL_271;
              v197 = v403;
              v194 = v444;
LABEL_293:
              v109 = v199-- == 0;
              if ( v109 )
                break;
              v198 = *(_QWORD *)(v198 + 8 * v203 + 280);
            }
          }
          ++v413.m256i_i64[1];
          if ( sub_1402B3020((char *)&v371 + 8, &v397) )
          {
            ++v413.m256i_i64[3];
            v210 = v399;
            v211 = v402;
            goto LABEL_301;
          }
        }
        else
        {
          *(__m128i *)&v413.m256i_u64[1] = _mm_sub_epi64(
                                             _mm_loadu_si128((const __m128i *)&v413.m256i_u64[1]),
                                             (__m128i)-1LL);
          v194 = v444;
        }
        v210 = v399;
        v211 = v402;
        if ( v336 == -1 )
          ++*((_QWORD *)&v414 + 1);
        else
          *(_QWORD *)&v414 = v414 + 1;
LABEL_301:
        if ( v379 )
          sub_140001660(v384, v379, 1);
        if ( v211 )
          sub_140001660(v401, v211, 1);
        if ( v197 )
        {
          v195 = v210;
          v196 = v197;
          goto LABEL_277;
        }
LABEL_278:
        if ( v194 )
          sub_140001660(v353, v194, 1);
      }
    }
    v385 = (__m128i)0x8000000000000013uLL;
    v386.m512i_i64[0] = v158;
    sub_14149B760(v432, v424, v444);
    v444 = *(_QWORD *)&v432[8];
    sub_140403D70((__int64)&v420, *(__int64 *)&v432[8], *(__int64 *)&v432[16], v400, v419);
    if ( *(__int64 *)v432 > 0 )
      sub_140001660(v444, *(_QWORD *)v432, 1);
    *(_QWORD *)v432 = &v420;
    *(_QWORD *)&v432[8] = sub_1400015F0;
    *(_QWORD *)&v432[16] = &v385;
    *(_QWORD *)&v432[24] = sub_140FB8910;
    sub_14149C0F0(&v320, &unk_14178A461, v432);
    if ( v420.m128i_i64[0] )
      sub_140001660(v420.m128i_i64[1], v420.m128i_i64[0], 1);
    v159 = v412.m128i_i64[1];
    if ( v412.m128i_i64[1] == *((_QWORD *)&v411 + 1) )
      sub_141689AB0((char *)&v411 + 8);
    v160 = v412.m128i_i64[0];
    v161 = 3 * v159;
    *(_QWORD *)(v412.m128i_i64[0] + 8 * v161 + 16) = v321;
    *(__m128i *)(v160 + 8 * v161) = _mm_loadu_si128(&v320);
    v412.m128i_i64[1] = v159 + 1;
    sub_1406CBAD0(&v385);
    sub_1406CBC60(&v380);
    v153 = v443;
LABEL_227:
    if ( v425 )
      sub_140001660(v422, v425, 1);
LABEL_229:
    if ( v417 )
    {
      v385.m128i_i64[1] = 0;
      v386.m512i_i64[0] = v417;
      v386.m512i_i64[1] = v153;
      v386.m512i_i64[3] = 0;
      v386.m512i_i64[4] = v417;
      v386.m512i_i64[5] = v153;
      v162 = 1;
      v163 = v418;
    }
    else
    {
      v162 = 0;
      v163 = 0;
    }
    v385.m128i_i64[0] = v162;
    v386.m512i_i64[2] = v162;
    v386.m512i_i64[6] = v163;
    sub_140308850(v432, &v385);
    while ( *(_QWORD *)v432 )
    {
      v164 = *(_QWORD *)(*(_QWORD *)v432 + 24LL * *(_QWORD *)&v432[16] + 8);
      if ( v164 )
        sub_140001660(*(_QWORD *)(*(_QWORD *)v432 + 24LL * *(_QWORD *)&v432[16] + 16), v164, 1);
      sub_140308850(v432, &v385);
    }
LABEL_146:
    sub_1406CB500(&v404);
LABEL_116:
    *(_QWORD *)&v78 = v78 - 32;
    v81 += 4;
    *((_QWORD *)&v78 + 1) = v415;
    v80 = (_QWORD *)v415;
    v82 = v416;
    if ( v416 )
      goto LABEL_315;
  }
  if ( v334.m128i_i64[0] )
    sub_140001660(v334.m128i_i64[1], 32 * v334.m128i_i64[0], 8);
  v215 = v337;
  if ( (_QWORD)v337 )
    v215 = v338;
  v385 = (__m128i)((_QWORD)v337 != 0);
  *(_OWORD *)v386.m512i_i8 = v337;
  *(__m128i *)&v386.m512i_u64[2] = v385;
  *(_OWORD *)&v386.m512i_u64[4] = v337;
  v386.m512i_i64[6] = v215;
  v442 = 0;
  sub_140329770(&v404, &v385);
  v216 = v410.m128i_i64[1];
  v415 = v411;
  v443 = 0;
  v424 = v410.m128i_i64[1];
  while ( v415 != v443 )
  {
    ++v443;
    *((_QWORD *)&v78 + 1) = v216 + 32;
    sub_1402C3260();
    v216 = *((_QWORD *)&v78 + 1);
  }
  if ( v410.m128i_i64[0] )
    sub_140001660(v410.m128i_i64[1], 32 * v410.m128i_i64[0], 8);
  *(_QWORD *)&v411 = v404.m256i_i64[2];
  v385 = *(__m128i *)v404.m256i_i8;
  *(__m128i *)&v386.m512i_u64[2] = _mm_load_si128(&v412);
  *(__m256i *)&v386.m512i_u64[4] = v413;
  v387 = v414;
  *(_OWORD *)v386.m512i_i8 = __PAIR128__(*((unsigned __int64 *)&v411 + 1), v404.m256i_u64[2]);
  v397.m128i_i64[0] = 0;
  v398 = 0;
  nullsub_1(v216);
  v217 = (_DWORD *)sub_140001650(7, 1);
  if ( !v217 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v217 + 3) = 1735355489;
  *v217 = 1635017059;
  v420.m128i_i64[0] = 7;
  v420.m128i_i64[1] = (__int64)v217;
  *(_QWORD *)&v421 = 7;
  v380.m128i_i64[0] = 0;
  *(_QWORD *)&v381 = 0;
  nullsub_1(v218);
  v219 = sub_140001650(6, 1);
  if ( !v219 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v219 + 4) = 29556;
  *(_DWORD *)v219 = 1936291941;
  *(_QWORD *)v432 = 6;
  *(_QWORD *)&v432[8] = v219;
  *(_QWORD *)&v432[16] = 6;
  v404.m256i_i8[0] = 1;
  v404.m256i_i8[1] = v373;
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v220);
  v221 = sub_140001650(5, 1);
  if ( !v221 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v221 + 4) = 115;
  *(_DWORD *)v221 = 1702132066;
  *(_QWORD *)v432 = 5;
  *(_QWORD *)&v432[8] = v221;
  *(_QWORD *)&v432[16] = 5;
  v404.m256i_i8[0] = 2 * v355;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v356;
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v222);
  v223 = (_DWORD *)sub_140001650(7, 1);
  if ( !v223 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v223 + 3) = 1800365427;
  *v223 = 1936875888;
  *(_QWORD *)v432 = 7;
  *(_QWORD *)&v432[8] = v223;
  *(_QWORD *)&v432[16] = 7;
  v404.m256i_i8[0] = 1;
  v404.m256i_i8[1] = HIBYTE(v373);
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v224);
  v225 = sub_140001650(9, 1);
  if ( !v225 )
    sub_1416C2D4B(1, 9);
  *(_QWORD *)v225 = 0x6F72724564616572LL;
  *(_BYTE *)(v225 + 8) = 114;
  *(_QWORD *)v432 = 9;
  *(_QWORD *)&v432[8] = v225;
  *(_QWORD *)&v432[16] = 9;
  if ( v362.m128i_i64[0] == -1 )
  {
    v228 = 0;
  }
  else
  {
    *((_QWORD *)&v78 + 1) = v363;
    if ( v363 < 0 )
    {
      v227 = 0;
      goto LABEL_344;
    }
    v228 = 3;
    if ( v363 )
    {
      v229 = v362.m128i_i64[1];
      nullsub_1(v226);
      v227 = 1;
      v230 = sub_140001650(*((_QWORD *)&v78 + 1), 1);
      if ( !v230 )
      {
LABEL_344:
        v431 = 1;
        sub_1416C2D4B(v227, *((_QWORD *)&v78 + 1));
      }
      *(_QWORD *)&v78 = v230;
      sub_141684120(v230, v229, *((_QWORD *)&v78 + 1));
    }
    else
    {
      v78 = 1u;
    }
  }
  v404.m256i_i8[0] = v228;
  v404.m256i_i64[1] = *((_QWORD *)&v78 + 1);
  *(_OWORD *)&v404.m256i_u64[2] = v78;
  v431 = 0;
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v231);
  v232 = (void *)sub_140001650(10, 1);
  if ( !v232 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v232, "parseError", 10);
  *(_QWORD *)v432 = 10;
  *(_QWORD *)&v432[8] = v232;
  *(_QWORD *)&v432[16] = 10;
  if ( v364.m128i_i64[0] == -1 )
  {
    v234 = 0;
  }
  else
  {
    *((_QWORD *)&v78 + 1) = v365;
    if ( v365 < 0 )
    {
      v233 = 0;
      goto LABEL_356;
    }
    v234 = 3;
    if ( v365 )
    {
      v235 = v364.m128i_i64[1];
      nullsub_1(0x7272456573726170LL);
      v233 = 1;
      v236 = sub_140001650(*((_QWORD *)&v78 + 1), 1);
      if ( !v236 )
      {
LABEL_356:
        v430 = 1;
        sub_1416C2D4B(v233, *((_QWORD *)&v78 + 1));
      }
      *(_QWORD *)&v78 = v236;
      sub_141684120(v236, v235, *((_QWORD *)&v78 + 1));
    }
    else
    {
      v78 = 1u;
    }
  }
  v404.m256i_i8[0] = v234;
  v404.m256i_i64[1] = *((_QWORD *)&v78 + 1);
  *(_OWORD *)&v404.m256i_u64[2] = v78;
  v430 = 0;
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v237);
  v238 = (void *)sub_140001650(10, 1);
  if ( !v238 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v238, "modelCount", 10);
  *(_QWORD *)v432 = 10;
  *(_QWORD *)&v432[8] = v238;
  *(_QWORD *)&v432[16] = 10;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v359;
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v239);
  v240 = (void *)sub_140001650(15, 1);
  if ( !v240 )
    sub_1416C2D4B(1, 15);
  *((_QWORD *)&v78 + 1) = 0x646F4D79616C6572LL;
  qmemcpy(v240, "relayModelCount", 15);
  *(_QWORD *)v432 = 15;
  *(_QWORD *)&v432[8] = v240;
  *(_QWORD *)&v432[16] = 15;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v361;
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v241);
  v242 = (void *)sub_140001650(10, 1);
  if ( !v242 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v242, "modelSlugs", 10);
  *(_QWORD *)v432 = 10;
  *(_QWORD *)&v432[8] = v242;
  *(_QWORD *)&v432[16] = 10;
  v441 = 1;
  sub_140467F40(&v404, &v357);
  if ( v404.m256i_i8[0] == -1 )
  {
    v410.m128i_i64[0] = v404.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v410,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A008);
  }
  v243 = _mm_loadu_si128((const __m128i *)&v404);
  v411 = *(_OWORD *)&v404.m256i_u64[2];
  v410 = v243;
  v441 = 0;
  sub_140307860(&v404, &v380, v432, &v410);
  if ( v404.m256i_i8[0] != -1 )
    sub_1400104F0(&v404);
  nullsub_1(v244);
  v245 = (void *)sub_140001650(15, 1);
  if ( !v245 )
    sub_1416C2D4B(1, 15);
  qmemcpy(v245, "relayModelSlugs", 15);
  *(_QWORD *)v432 = 15;
  *(_QWORD *)&v432[8] = v245;
  *(_QWORD *)&v432[16] = 15;
  v440 = 1;
  sub_140467F40(&v404, (char *)&v359 + 8);
  if ( v404.m256i_i8[0] == -1 )
  {
    v410.m128i_i64[0] = v404.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v410,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A008);
  }
  v246 = _mm_loadu_si128((const __m128i *)&v404);
  v411 = *(_OWORD *)&v404.m256i_u64[2];
  v410 = v246;
  v440 = 0;
  sub_140307860(&v404, &v380, v432, &v410);
  if ( v404.m256i_i8[0] != -1 )
    sub_1400104F0(&v404);
  nullsub_1(v247);
  v248 = (__m128i *)sub_140001650(17, 1);
  if ( !v248 )
    sub_1416C2D4B(1, 17);
  *v248 = _mm_loadu_si128(&xmmword_14178A020);
  v248[1].m128i_i8[0] = 108;
  *(_QWORD *)v432 = 17;
  *(_QWORD *)&v432[8] = v248;
  *(_QWORD *)&v432[16] = 17;
  if ( v366 == -1 )
  {
    v251 = 0;
  }
  else
  {
    *((_QWORD *)&v78 + 1) = v368;
    if ( v368 < 0 )
    {
      v250 = 0;
      goto LABEL_382;
    }
    v251 = 3;
    if ( v368 )
    {
      v252 = v367;
      nullsub_1(v249);
      v250 = 1;
      v253 = sub_140001650(*((_QWORD *)&v78 + 1), 1);
      if ( !v253 )
      {
LABEL_382:
        v429 = 1;
        sub_1416C2D4B(v250, *((_QWORD *)&v78 + 1));
      }
      *(_QWORD *)&v78 = v253;
      sub_141684120(v253, v252, *((_QWORD *)&v78 + 1));
    }
    else
    {
      v78 = 1u;
    }
  }
  v404.m256i_i8[0] = v251;
  v404.m256i_i64[1] = *((_QWORD *)&v78 + 1);
  *(_OWORD *)&v404.m256i_u64[2] = v78;
  v429 = 0;
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  *(__m128i *)&v404.m256i_u64[1] = _mm_loadu_si128(&v380);
  v404.m256i_i64[3] = v381;
  v404.m256i_i8[0] = 5;
  v428 = 0;
  sub_140307860(&v410, &v397, &v420, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v254);
  v255 = sub_140001650(28, 1);
  if ( !v255 )
    sub_1416C2D4B(1, 28);
  *(_OWORD *)(v255 + 12) = *(__int128 *)((char *)&xmmword_14178A031 + 12);
  *(__m128i *)v255 = _mm_loadu_si128((const __m128i *)&xmmword_14178A031);
  v348 = 28;
  v349 = (_QWORD *)v255;
  v350 = 28;
  v420.m128i_i64[0] = 0;
  *(_QWORD *)&v421 = 0;
  nullsub_1(v256);
  v257 = sub_140001650(5, 1);
  if ( !v257 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v257 + 4) = 110;
  *(_DWORD *)v257 = 1634036835;
  *(_QWORD *)v432 = 5;
  *(_QWORD *)&v432[8] = v257;
  *(_QWORD *)&v432[16] = 5;
  v258 = v340;
  v259 = v346;
  v404.m256i_i8[0] = 1;
  v404.m256i_i8[1] = (v340 | v346) == 0;
  sub_140307860(&v410, &v420, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v260);
  v261 = (_DWORD *)sub_140001650(7, 1);
  if ( !v261 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v261 + 3) = 1684369006;
  *v261 = 1851876211;
  *(_QWORD *)v432 = 7;
  *(_QWORD *)&v432[8] = v261;
  *(_QWORD *)&v432[16] = 7;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v344;
  sub_140307860(&v410, &v420, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v262);
  v263 = sub_140001650(5, 1);
  if ( !v263 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v263 + 4) = 100;
  *(_DWORD *)v263 = 1768710518;
  *(_QWORD *)v432 = 5;
  *(_QWORD *)&v432[8] = v263;
  *(_QWORD *)&v432[16] = 5;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v345;
  sub_140307860(&v410, &v420, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v264);
  v265 = (_DWORD *)sub_140001650(7, 1);
  if ( !v265 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v265 + 3) = 1684630625;
  *v265 = 1635151465;
  *(_QWORD *)v432 = 7;
  *(_QWORD *)&v432[8] = v265;
  *(_QWORD *)&v432[16] = 7;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v259;
  sub_140307860(&v410, &v420, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v266);
  v267 = (void *)sub_140001650(12, 1);
  if ( !v267 )
    sub_1416C2D4B(1, 12);
  qmemcpy(v267, "missingModel", 12);
  *(_QWORD *)v432 = 12;
  *(_QWORD *)&v432[8] = v267;
  *(_QWORD *)&v432[16] = 12;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v347;
  sub_140307860(&v410, &v420, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v268);
  v269 = (void *)sub_140001650(10, 1);
  if ( !v269 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v269, "readErrors", 10);
  v380.m128i_i64[0] = 10;
  v443 = (__int64)v269;
  v380.m128i_i64[1] = (__int64)v269;
  *(_QWORD *)&v381 = 10;
  v270 = v339.m128i_i64[1];
  v404.m256i_i64[0] = v339.m128i_i64[1];
  v404.m256i_i64[1] = v339.m128i_i64[1] + 24 * v258;
  v404.m256i_i64[2] = v374;
  sub_140328340((unsigned __int64 *)v432, v404.m256i_i64);
  v439 = 1;
  sub_140467F40(&v404, v432);
  if ( v404.m256i_i8[0] == -1 )
  {
    v410.m128i_i64[0] = v404.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v410,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A008);
  }
  v271 = _mm_loadu_si128((const __m128i *)&v404);
  v411 = *(_OWORD *)&v404.m256i_u64[2];
  v410 = v271;
  v439 = 0;
  sub_140307860(&v404, &v420, &v380, &v410);
  if ( v404.m256i_i8[0] != -1 )
    sub_1400104F0(&v404);
  v273 = *(_QWORD *)&v432[16];
  if ( *(_QWORD *)&v432[16] )
  {
    v274 = (_QWORD *)(*(_QWORD *)&v432[8] + 8LL);
    do
    {
      v275 = *(v274 - 1);
      if ( v275 )
        sub_140001660(*v274, v275, 1);
      v274 += 3;
      --v273;
    }
    while ( v273 );
  }
  if ( *(_QWORD *)v432 )
    sub_140001660(*(_QWORD *)&v432[8], 24LL * *(_QWORD *)v432, 8);
  nullsub_1(v272);
  v276 = (_QWORD *)sub_140001650(8, 1);
  if ( !v276 )
    sub_1416C2D4B(1, 8);
  *v276 = 0x73656C706D617865LL;
  v380.m128i_i64[0] = 8;
  v443 = (__int64)v276;
  v380.m128i_i64[1] = (__int64)v276;
  *(_QWORD *)&v381 = 8;
  v277 = v342;
  v278 = v343;
  v404.m256i_i64[0] = v342;
  v404.m256i_i64[1] = v342 + 24 * v343;
  v404.m256i_i64[2] = v374;
  sub_140328340((unsigned __int64 *)v432, v404.m256i_i64);
  v438 = 1;
  sub_140467F40(&v404, v432);
  if ( v404.m256i_i8[0] == -1 )
  {
    v410.m128i_i64[0] = v404.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v410,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A008);
  }
  v279 = _mm_loadu_si128((const __m128i *)&v404);
  v411 = *(_OWORD *)&v404.m256i_u64[2];
  v410 = v279;
  v438 = 0;
  sub_140307860(&v404, &v420, &v380, &v410);
  if ( v404.m256i_i8[0] != -1 )
    sub_1400104F0(&v404);
  v280 = *(_QWORD *)&v432[16];
  if ( *(_QWORD *)&v432[16] )
  {
    v281 = (_QWORD *)(*(_QWORD *)&v432[8] + 8LL);
    do
    {
      v282 = *(v281 - 1);
      if ( v282 )
        sub_140001660(*v281, v282, 1);
      v281 += 3;
      --v280;
    }
    while ( v280 );
  }
  if ( *(_QWORD *)v432 )
    sub_140001660(*(_QWORD *)&v432[8], 24LL * *(_QWORD *)v432, 8);
  *(__m128i *)&v404.m256i_u64[1] = _mm_loadu_si128(&v420);
  v404.m256i_i64[3] = v421;
  v404.m256i_i8[0] = 5;
  v427 = 0;
  sub_140307860(&v410, &v397, &v348, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v283);
  v284 = (__m128i *)sub_140001650(41, 1);
  if ( !v284 )
    sub_1416C2D4B(1, 41);
  qmemcpy(&v284[1], "ProviderModelDistribution", 25);
  *v284 = _mm_loadu_si128((const __m128i *)&xmmword_14178A04D);
  *(_QWORD *)v432 = 41;
  *(_QWORD *)&v432[8] = v284;
  *(_QWORD *)&v432[16] = 41;
  v437 = 1;
  sub_140467C90(&v404, &v385);
  if ( v404.m256i_i8[0] == -1 )
  {
    v410.m128i_i64[0] = v404.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v410,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A008);
  }
  v285 = _mm_loadu_si128((const __m128i *)&v404);
  v411 = *(_OWORD *)&v404.m256i_u64[2];
  v410 = v285;
  v437 = 0;
  sub_140307860(&v404, &v397, v432, &v410);
  if ( v404.m256i_i8[0] != -1 )
    sub_1400104F0(&v404);
  nullsub_1(v286);
  v287 = (__m128i *)sub_140001650(20, 1);
  if ( !v287 )
    sub_1416C2D4B(1, 20);
  *v287 = _mm_loadu_si128(&xmmword_14178A076);
  v287[1].m128i_i32[0] = 1851878480;
  v420.m128i_i64[0] = 20;
  v420.m128i_i64[1] = (__int64)v287;
  *(_QWORD *)&v421 = 20;
  v380.m128i_i64[0] = 0;
  *(_QWORD *)&v381 = 0;
  nullsub_1(v288);
  v289 = (void *)sub_140001650(13, 1);
  if ( !v289 )
    sub_1416C2D4B(1, 13);
  qmemcpy(v289, "routerThreads", 13);
  *(_QWORD *)v432 = 13;
  *(_QWORD *)&v432[8] = v289;
  *(_QWORD *)&v432[16] = 13;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v386.m512i_i64[4];
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v290);
  v291 = sub_140001650(19, 1);
  if ( !v291 )
    sub_1416C2D4B(1, 19);
  *(__m128i *)v291 = _mm_loadu_si128(&xmmword_14178A08A);
  *(_DWORD *)(v291 + 15) = 1935958373;
  *(_QWORD *)v432 = 19;
  *(_QWORD *)&v432[8] = v291;
  *(_QWORD *)&v432[16] = 19;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v386.m512i_i64[5];
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v292);
  v293 = sub_140001650(19, 1);
  if ( !v293 )
    sub_1416C2D4B(1, 19);
  *(__m128i *)v293 = _mm_loadu_si128(&xmmword_14178A09D);
  *(_DWORD *)(v293 + 15) = 1935958373;
  *(_QWORD *)v432 = 19;
  *(_QWORD *)&v432[8] = v293;
  *(_QWORD *)&v432[16] = 19;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v386.m512i_i64[6];
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v294);
  v295 = sub_140001650(23, 1);
  if ( !v295 )
    sub_1416C2D4B(1, 23);
  *(__m128i *)v295 = _mm_loadu_si128((const __m128i *)&xmmword_14178A0B0);
  *(_QWORD *)(v295 + 15) = 0x6C65646F4D657261LL;
  *(_QWORD *)v432 = 23;
  *(_QWORD *)&v432[8] = v295;
  *(_QWORD *)&v432[16] = 23;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v386.m512i_i64[7];
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v296);
  v297 = (void *)sub_140001650(12, 1);
  if ( !v297 )
    sub_1416C2D4B(1, 12);
  qmemcpy(v297, "fallbackOnly", 12);
  *(_QWORD *)v432 = 12;
  *(_QWORD *)&v432[8] = v297;
  *(_QWORD *)&v432[16] = 12;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = v387;
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v298);
  v299 = (void *)sub_140001650(10, 1);
  if ( !v299 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v299, "unresolved", 10);
  *(_QWORD *)v432 = 10;
  *(_QWORD *)&v432[8] = v299;
  *(_QWORD *)&v432[16] = 10;
  v404.m256i_i8[0] = 2;
  v404.m256i_i64[1] = 0;
  v404.m256i_i64[2] = *((_QWORD *)&v387 + 1);
  sub_140307860(&v410, &v380, v432, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  *(__m128i *)&v404.m256i_u64[1] = _mm_loadu_si128(&v380);
  v404.m256i_i64[3] = v381;
  v404.m256i_i8[0] = 5;
  v426 = 0;
  sub_140307860(&v410, &v397, &v420, &v404);
  if ( v410.m128i_i8[0] != -1 )
    sub_1400104F0(&v410);
  nullsub_1(v300);
  v301 = (void *)sub_140001650(10, 1);
  if ( !v301 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v301, "readErrors", 10);
  *(_QWORD *)v432 = 10;
  *(_QWORD *)&v432[8] = v301;
  *(_QWORD *)&v432[16] = 10;
  v436 = 1;
  sub_140467F40(&v404, &v386.m512i_u64[1]);
  if ( v404.m256i_i8[0] == -1 )
  {
    v410.m128i_i64[0] = v404.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v410,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A008);
  }
  v302 = _mm_loadu_si128((const __m128i *)&v404);
  v411 = *(_OWORD *)&v404.m256i_u64[2];
  v410 = v302;
  v436 = 0;
  sub_140307860(&v404, &v397, v432, &v410);
  if ( v404.m256i_i8[0] != -1 )
    sub_1400104F0(&v404);
  v303 = v335;
  *(_QWORD *)(v335 + 24) = v398;
  *(__m128i *)(v303 + 8) = _mm_loadu_si128(&v397);
  *(_BYTE *)v303 = 5;
  v304 = v385.m128i_i64[1];
  v415 = v386.m512i_i64[0];
  v443 = 0;
  v424 = v385.m128i_i64[1];
  while ( v415 != v443 )
  {
    ++v443;
    v305 = v304 + 32;
    sub_1402C3260();
    v304 = v305;
  }
  if ( v385.m128i_i64[0] )
    sub_140001660(v385.m128i_i64[1], 32 * v385.m128i_i64[0], 8);
  v306 = v386.m512i_i64[3];
  if ( v386.m512i_i64[3] )
  {
    v307 = (_QWORD *)(v386.m512i_i64[2] + 8);
    do
    {
      v308 = *(v307 - 1);
      if ( v308 )
        sub_140001660(*v307, v308, 1);
      v307 += 3;
      --v306;
    }
    while ( v306 );
  }
  if ( v386.m512i_i64[1] )
    sub_140001660(v386.m512i_i64[2], 24 * v386.m512i_i64[1], 8);
  if ( v258 )
  {
    v309 = (_QWORD *)(v270 + 8);
    do
    {
      v310 = *(v309 - 1);
      if ( v310 )
        sub_140001660(*v309, v310, 1);
      v309 += 3;
      --v258;
    }
    while ( v258 );
  }
  if ( v339.m128i_i64[0] )
    sub_140001660(v270, 24 * v339.m128i_i64[0], 8);
  if ( v278 )
  {
    v311 = (_QWORD *)(v277 + 8);
    do
    {
      v312 = *(v311 - 1);
      if ( v312 )
        sub_140001660(*v311, v312, 1);
      v311 += 3;
      --v278;
    }
    while ( v278 );
  }
  if ( v341 )
    sub_140001660(v277, 24 * v341, 8);
  result = sub_1406CD410(&v355);
  if ( v330 )
    return sub_140001660(v331, v330, 1);
  return result;
}