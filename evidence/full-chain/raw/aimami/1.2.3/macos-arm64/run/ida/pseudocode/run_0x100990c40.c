// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100990c40 | 基线 same-set
// [FULL hexrays]

char __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::h34ce79929e26d159(
        __m128i a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rax
  _QWORD *v6; // r14
  size_t v7; // r15
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __int64 v19; // rcx
  __m128i v20; // xmm0
  int v21; // r13d
  char v22; // r12
  __int64 v23; // rcx
  bool v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rbx
  _QWORD *v45; // rax
  __int64 v46; // r14
  const void *v47; // r15
  size_t v48; // rbx
  __int64 v49; // r13
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __m128i v54; // xmm0
  __m128i v55; // xmm0
  char v56; // cl
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  char v60; // r13
  __m128i v61; // xmm0
  __int64 v62; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  __m128i v66; // xmm0
  __m128i v67; // xmm0
  char v68; // r13
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r13
  __int64 v79; // r12
  __int64 v80; // r15
  __m128i v81; // xmm1
  __int64 v82; // rcx
  __int64 v83; // rax
  const char *v84; // rax
  __int64 v85; // rax
  __int64 *v86; // rbx
  __int64 v87; // r12
  __int64 v88; // rax
  __int64 v89; // rax
  int v90; // ecx
  __m128i v91; // xmm0
  __int64 v92; // r12
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // r12
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 i; // r15
  __m128i v102; // xmm0
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 *v111; // rbx
  __int64 v112; // r13
  __int64 v113; // r14
  const void *v114; // r15
  size_t v115; // rbx
  __int64 v116; // r13
  __int64 v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // r12
  __int64 v121; // rax
  __int64 v122; // rax
  size_t v123; // rbx
  __int64 v124; // r14
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 *v128; // rax
  __int64 v129; // r14
  const void *v130; // r15
  size_t v131; // rbx
  __int64 v132; // r13
  __m128i v133; // xmm1
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 *v136; // rbx
  __int64 v137; // r13
  __int64 v138; // r14
  const void *v139; // r15
  size_t v140; // rbx
  __int64 v141; // r13
  __int64 v142; // rdi
  __int64 jj; // r15
  __int64 v144; // rax
  __int64 v145; // rdi
  int v146; // ecx
  __int64 v147; // rcx
  __int64 v148; // rax
  const char *v149; // rax
  __int64 v150; // rax
  __int64 *v151; // rbx
  __int64 v152; // rcx
  __m128i v153; // xmm0
  __int64 v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // r13
  __int64 v162; // rcx
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rcx
  __int64 v170; // rax
  int v171; // ecx
  __m128i v172; // xmm0
  __m128i v173; // xmm0
  int v174; // ecx
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // rcx
  int v178; // ecx
  __int64 v179; // rcx
  __int64 v180; // rcx
  __m128i v181; // xmm0
  int v182; // ecx
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rcx
  __int64 v186; // rcx
  __int64 v187; // rax
  __int64 v188; // r12
  __int64 v189; // r12
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rbx
  __int64 v193; // rcx
  __int64 v194; // rax
  __int64 v195; // rcx
  __int64 v196; // rax
  __int64 v197; // rcx
  __int64 v198; // rcx
  __int64 v199; // rcx
  __int64 v200; // rcx
  __int64 v201; // rcx
  __int64 v202; // rcx
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rcx
  void *v210; // r14
  __int64 v211; // r12
  __int64 v212; // rdi
  __int64 v213; // rsi
  __int64 v214; // rcx
  __int64 v215; // rdi
  __int64 n; // r15
  __int64 v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rcx
  bool v220; // zf
  __int64 v221; // rcx
  __int64 v222; // rcx
  __int64 v223; // rax
  __int64 v224; // r12
  __int64 v225; // rcx
  __int64 v226; // rcx
  __int64 v227; // rcx
  __int64 v228; // rcx
  __int64 v229; // rax
  __int64 v230; // rcx
  __int64 v231; // rcx
  __int64 v232; // rax
  __int64 v233; // rcx
  __int64 v234; // rcx
  __int64 v235; // rcx
  __int64 v236; // rcx
  __int64 v237; // rcx
  __int64 v238; // rcx
  __int64 v239; // rdi
  __int64 ii; // r15
  __int64 v241; // rcx
  __int64 v242; // rcx
  __int64 v243; // rax
  __int64 v244; // r12
  __int64 v245; // rcx
  __int64 v246; // rax
  __int64 v247; // rax
  __int64 v248; // r12
  __int64 v249; // rcx
  __int64 v250; // rax
  __int64 v251; // rcx
  __int64 v252; // rcx
  __int64 v253; // rax
  __int64 v254; // rcx
  __m128i v255; // xmm0
  __int64 v256; // rcx
  __int64 v257; // rax
  int v258; // eax
  __int64 v259; // rcx
  __int64 v260; // rax
  __m128i v261; // xmm0
  __m128i v262; // xmm0
  __m128i v263; // xmm0
  __int64 v264; // rcx
  __int64 v265; // rax
  __int64 v266; // rcx
  __int64 v267; // rcx
  __int64 v268; // rax
  __m128i v269; // xmm0
  __m128i v270; // xmm0
  __m128i v271; // xmm0
  __int64 v272; // rcx
  __int64 v273; // rdi
  __int64 m; // r15
  __int64 v275; // rcx
  __int64 v276; // rcx
  __int64 v277; // rax
  __int64 v278; // rcx
  __int64 v279; // rcx
  __int64 v280; // rcx
  __int64 v281; // rax
  __int64 v282; // rcx
  __int64 v283; // rdi
  __int64 k; // r15
  __int64 v285; // rcx
  __int64 v286; // rcx
  __int64 v287; // rcx
  __int64 v288; // rcx
  __int64 v289; // rax
  __int64 v290; // rcx
  __int64 v291; // rcx
  __int64 v292; // rax
  __int64 v293; // rcx
  __int64 v294; // rcx
  __m128i v295; // xmm0
  __m128i v296; // xmm0
  __int64 v297; // rcx
  __int64 v298; // rax
  __int64 v299; // rcx
  __int64 v300; // rcx
  __int64 v301; // rcx
  __int64 v302; // rcx
  __int64 v303; // rcx
  __int64 v304; // rax
  __int64 v305; // rcx
  __int64 v306; // rcx
  __int64 v307; // rcx
  __int64 v308; // rcx
  __int64 v309; // rcx
  __int64 v310; // rcx
  __m128i v311; // xmm0
  __int64 v312; // rcx
  __int64 v313; // rax
  __int64 v314; // rcx
  __int64 v315; // rcx
  __int64 v316; // rax
  __int64 v317; // rcx
  __int64 v318; // rcx
  __int64 v319; // rcx
  __int64 v320; // rax
  __int64 v321; // rdi
  __int64 j; // r15
  __int64 v323; // rcx
  __int64 v324; // rax
  __int64 v325; // rcx
  __int64 v326; // rcx
  __int64 v327; // rcx
  int v328; // eax
  int v329; // ecx
  __m128i v330; // xmm0
  __int64 v331; // rcx
  __int64 v332; // rcx
  __int64 v333; // rcx
  __int64 v334; // rcx
  __int64 v335; // rcx
  __int64 v336; // rax
  __m128i v337; // xmm0
  __int64 v338; // rcx
  __int64 v339; // rcx
  __int64 v340; // rcx
  __int64 v341; // rax
  __int64 v342; // rcx
  _QWORD v343[561]; // [rsp+30h] [rbp-3EF0h] BYREF
  _BYTE __dst[4880]; // [rsp+11B8h] [rbp-2D68h] BYREF
  char v345; // [rsp+24C8h] [rbp-1A58h]
  char v346; // [rsp+2580h] [rbp-19A0h]
  char v347; // [rsp+2670h] [rbp-18B0h]
  char v348; // [rsp+2688h] [rbp-1898h]
  __int64 v349; // [rsp+26D0h] [rbp-1850h]
  char v350; // [rsp+26D8h] [rbp-1848h]
  __int64 v351; // [rsp+2790h] [rbp-1790h]
  char v352; // [rsp+2798h] [rbp-1788h]
  __int64 v353; // [rsp+29D0h] [rbp-1550h]
  char v354; // [rsp+29D8h] [rbp-1548h]
  char v355; // [rsp+2A00h] [rbp-1520h]
  __int64 v356; // [rsp+2EF8h] [rbp-1028h]
  __int64 v357; // [rsp+3660h] [rbp-8C0h]
  char v358; // [rsp+3668h] [rbp-8B8h]
  _QWORD v359[50]; // [rsp+3670h] [rbp-8B0h] BYREF
  __int64 v360; // [rsp+3800h] [rbp-720h] BYREF
  __int64 v361; // [rsp+3808h] [rbp-718h]
  __int64 v362; // [rsp+3810h] [rbp-710h]
  __int64 v363; // [rsp+3818h] [rbp-708h]
  _QWORD v364[46]; // [rsp+3820h] [rbp-700h] BYREF
  __int64 v365; // [rsp+3990h] [rbp-590h] BYREF
  __int64 v366; // [rsp+3998h] [rbp-588h]
  __int64 v367; // [rsp+39A0h] [rbp-580h]
  __int64 v368; // [rsp+39A8h] [rbp-578h]
  __int64 v369; // [rsp+39B0h] [rbp-570h] BYREF
  __int64 v370; // [rsp+39B8h] [rbp-568h]
  __int64 v371; // [rsp+39C0h] [rbp-560h]
  __int64 v372; // [rsp+39C8h] [rbp-558h] BYREF
  __int64 *v373; // [rsp+39D0h] [rbp-550h]
  __int64 v374; // [rsp+39D8h] [rbp-548h]
  __int64 v375; // [rsp+39E0h] [rbp-540h]
  __int64 v376; // [rsp+39E8h] [rbp-538h] BYREF
  __int64 v377; // [rsp+39F0h] [rbp-530h]
  __int64 v378; // [rsp+39F8h] [rbp-528h]
  __int64 v379; // [rsp+3A00h] [rbp-520h]
  _QWORD v380[46]; // [rsp+3A08h] [rbp-518h] BYREF
  __int64 v381; // [rsp+3B78h] [rbp-3A8h] BYREF
  __int64 *v382; // [rsp+3B80h] [rbp-3A0h]
  __int64 v383; // [rsp+3B88h] [rbp-398h]
  __int64 v384; // [rsp+3B90h] [rbp-390h]
  _QWORD v385[50]; // [rsp+3B98h] [rbp-388h] BYREF
  __int64 v386; // [rsp+3D28h] [rbp-1F8h] BYREF
  __int64 v387; // [rsp+3D30h] [rbp-1F0h]
  __int64 v388; // [rsp+3D38h] [rbp-1E8h]
  __int64 v389; // [rsp+3D40h] [rbp-1E0h]
  __int64 v390; // [rsp+3D48h] [rbp-1D8h]
  __int64 v391; // [rsp+3D50h] [rbp-1D0h]
  __int64 v392; // [rsp+3D58h] [rbp-1C8h] BYREF
  __int64 v393; // [rsp+3D60h] [rbp-1C0h]
  __int64 v394; // [rsp+3D68h] [rbp-1B8h]
  __int64 v395; // [rsp+3D70h] [rbp-1B0h]
  __int64 v396[10]; // [rsp+3D78h] [rbp-1A8h] BYREF
  __int64 v397; // [rsp+3DC8h] [rbp-158h] BYREF
  __int64 v398; // [rsp+3DD0h] [rbp-150h]
  __int64 v399; // [rsp+3DD8h] [rbp-148h]
  __int64 v400; // [rsp+3DE0h] [rbp-140h] BYREF
  __int64 v401; // [rsp+3DE8h] [rbp-138h]
  __int64 v402; // [rsp+3DF0h] [rbp-130h]
  __int64 v403; // [rsp+3DF8h] [rbp-128h]
  __int64 v404; // [rsp+3E00h] [rbp-120h] BYREF
  __int64 v405; // [rsp+3E08h] [rbp-118h]
  __int64 v406; // [rsp+3E10h] [rbp-110h]
  __int64 v407; // [rsp+3E18h] [rbp-108h] BYREF
  __int64 v408; // [rsp+3E20h] [rbp-100h]
  __int64 v409; // [rsp+3E28h] [rbp-F8h]
  __int64 v410; // [rsp+3E30h] [rbp-F0h] BYREF
  __int64 v411; // [rsp+3E38h] [rbp-E8h]
  __int64 v412; // [rsp+3E40h] [rbp-E0h]
  __int64 v413; // [rsp+3E48h] [rbp-D8h]
  __int64 v414; // [rsp+3E50h] [rbp-D0h]
  __int64 v415; // [rsp+3E58h] [rbp-C8h]
  int v416; // [rsp+3E60h] [rbp-C0h]
  int v417; // [rsp+3E64h] [rbp-BCh]
  __int64 v418; // [rsp+3E68h] [rbp-B8h] BYREF
  __int64 v419; // [rsp+3E70h] [rbp-B0h]
  __int64 v420; // [rsp+3E78h] [rbp-A8h]
  __int64 v421; // [rsp+3E80h] [rbp-A0h] BYREF
  __int64 v422; // [rsp+3E88h] [rbp-98h] BYREF
  __int64 v423; // [rsp+3E90h] [rbp-90h]
  __int64 v424; // [rsp+3E98h] [rbp-88h]
  int v425; // [rsp+3EA4h] [rbp-7Ch]
  __int64 v426; // [rsp+3EA8h] [rbp-78h] BYREF
  __int64 v427; // [rsp+3EB0h] [rbp-70h]
  __int64 v428; // [rsp+3EB8h] [rbp-68h]
  int v429; // [rsp+3EC4h] [rbp-5Ch]
  void *v430; // [rsp+3EC8h] [rbp-58h]
  __int64 v431; // [rsp+3ED0h] [rbp-50h]
  int v432; // [rsp+3ED8h] [rbp-48h]
  int v433; // [rsp+3EDCh] [rbp-44h]
  int v434; // [rsp+3EE0h] [rbp-40h]
  int v435; // [rsp+3EE4h] [rbp-3Ch]
  int v436; // [rsp+3EE8h] [rbp-38h]
  int v437; // [rsp+3EECh] [rbp-34h]
  __int64 v438; // [rsp+3EF0h] [rbp-30h]

  v356 = 0;
  *(_QWORD *)&__dst[3392] = 0;
  v343[473] = 0;
  v6 = (_QWORD *)a3[58];
  v7 = a3[59];
  if ( v7 == 13 )
  {
    if ( *v6 ^ 0x616E735F64616F6CLL | *(_QWORD *)((char *)v6 + 5) ^ 0x746F687370616E73LL )
    {
      if ( !(*v6 ^ 0x7365735F64616F6CLL | *(_QWORD *)((char *)v6 + 5) ^ 0x736E6F6973736573LL) )
      {
        memcpy(__dst, a3, 0x208u);
        memcpy(&__dst[520], a3 + 65, 0x190u);
        v37 = a3[116];
        *(_QWORD *)&__dst[920] = a3[115];
        *(_QWORD *)&__dst[928] = v37;
        *(_QWORD *)&__dst[936] = a3[117];
        v343[67] = a3[117];
        v38 = a3[115];
        v343[66] = a3[116];
        v343[65] = v38;
        memcpy(v343, a3, 0x208u);
        LOBYTE(v343[81]) = 0;
        tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::ha57474b98b6406f0(&__dst[520]);
        return 1;
      }
      if ( !memcmp(v6, "restart_codexgraceful_restart_for_update", 0xDu) )
      {
        memcpy(v343, a3, 0x208u);
        memcpy(&v343[65], a3 + 65, 0x190u);
        v51 = a3[116];
        v343[115] = a3[115];
        v343[116] = v51;
        v343[117] = a3[117];
        *(_QWORD *)&__dst[536] = a3[117];
        v52 = a3[115];
        *(_QWORD *)&__dst[528] = a3[116];
        *(_QWORD *)&__dst[520] = v52;
        memcpy(__dst, a3, 0x208u);
        __dst[1056] = 0;
        tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h2b94b652386894cf(&v343[65]);
        return 1;
      }
      if ( !memcmp(
              v6,
              "get_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_info",
              0xDu) )
      {
        memcpy(__dst, a3, 0x208u);
        memcpy(&__dst[520], a3 + 65, 0x190u);
        v58 = a3[116];
        *(_QWORD *)&__dst[920] = a3[115];
        *(_QWORD *)&__dst[928] = v58;
        *(_QWORD *)&__dst[936] = a3[117];
        codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h8a437898a57fcdce(__dst);
        return 1;
      }
      if ( !memcmp(
              v6,
              "hotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream",
              0xDu) )
      {
        memcpy(__dst, a3, 0x208u);
        memcpy(&__dst[520], a3 + 65, 0x190u);
        v23 = a3[116];
        *(_QWORD *)&__dst[920] = a3[115];
        *(_QWORD *)&__dst[928] = v23;
        *(_QWORD *)&__dst[936] = a3[117];
        codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1aedc0c129e5d404(__dst);
        return 1;
      }
LABEL_111:
      core::ptr::drop_in_place$LT$tauri..ipc..Invoke$GT$::hd3f7b5ecbf8b3a16(a3);
      return 0;
    }
    v29 = a3[113];
    v343[67] = a3[117];
    v30 = a3[115];
    v343[66] = a3[116];
    v343[65] = v30;
    memcpy(v343, a3, 0x208u);
    *(_QWORD *)&__dst[376] = a3[112];
    v31 = a3[110];
    *(_QWORD *)&__dst[368] = a3[111];
    *(_QWORD *)&__dst[360] = v31;
    memcpy(&__dst[392], v343, 0xA20u);
    __dst[2984] = 0;
    memcpy(__dst, a3 + 65, 0x168u);
    *(_QWORD *)&__dst[384] = v29;
    v351 = a3[114];
    v352 = 0;
    v32 = tauri::async_runtime::spawn::h08a9c911b58d615d(__dst);
    goto LABEL_331;
  }
  if ( v7 == 21 )
  {
    a1 = _mm_or_si128(
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678D80),
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 5)), (__m128i)xmmword_101678D70));
    if ( !_mm_testz_si128(a1, a1) )
    {
      v20 = _mm_or_si128(
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678DA0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 5)), (__m128i)xmmword_101678D90));
      if ( !_mm_testz_si128(v20, v20) )
      {
        if ( !memcmp(
                v6,
                "upsert_voice_templateremove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                0x15u) )
        {
          memcpy(__dst, a3, 0x208u);
          memcpy(&__dst[520], a3 + 65, 0x190u);
          v50 = a3[116];
          *(_QWORD *)&__dst[920] = a3[115];
          *(_QWORD *)&__dst[928] = v50;
          *(_QWORD *)&__dst[936] = a3[117];
          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfd8a80d283371b70(__dst);
          return 1;
        }
        if ( !memcmp(
                v6,
                "remove_voice_templateupsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                0x15u) )
        {
          memcpy(__dst, a3, 0x208u);
          memcpy(&__dst[520], a3 + 65, 0x190u);
          v57 = a3[116];
          *(_QWORD *)&__dst[920] = a3[115];
          *(_QWORD *)&__dst[928] = v57;
          *(_QWORD *)&__dst[936] = a3[117];
          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6f3e01f2e1fb24da(__dst);
          return 1;
        }
        if ( !memcmp(
                v6,
                "generate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                0x15u) )
        {
          memcpy(v343, a3, 0x208u);
          memcpy(&v343[65], a3 + 65, 0x190u);
          v71 = a3[116];
          v343[115] = a3[115];
          v343[116] = v71;
          v343[117] = a3[117];
          *(_QWORD *)&__dst[536] = a3[117];
          v72 = a3[115];
          *(_QWORD *)&__dst[528] = a3[116];
          *(_QWORD *)&__dst[520] = v72;
          memcpy(__dst, a3, 0x208u);
          __dst[2424] = 0;
          tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h570c00456109dab3(&v343[65]);
          return 1;
        }
        if ( !memcmp(
                v6,
                "load_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                0x15u) )
        {
          memcpy(__dst, a3, 0x208u);
          memcpy(&__dst[520], a3 + 65, 0x190u);
          v97 = a3[116];
          *(_QWORD *)&__dst[920] = a3[115];
          *(_QWORD *)&__dst[928] = v97;
          *(_QWORD *)&__dst[936] = a3[117];
          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbfdb5d215b349ce4(__dst);
          return 1;
        }
        if ( !memcmp(
                v6,
                "save_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                0x15u) )
        {
          memcpy(__dst, a3, 0x208u);
          memcpy(&__dst[520], a3 + 65, 0x190u);
          v117 = a3[116];
          *(_QWORD *)&__dst[920] = a3[115];
          *(_QWORD *)&__dst[928] = v117;
          *(_QWORD *)&__dst[936] = a3[117];
          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h260b93b1e8cc051e(__dst);
          return 1;
        }
        if ( !memcmp(
                v6,
                "test_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                0x15u) )
        {
          memcpy(__dst, a3, 0x208u);
          memcpy(&__dst[520], a3 + 65, 0x190u);
          v154 = a3[116];
          *(_QWORD *)&__dst[920] = a3[115];
          *(_QWORD *)&__dst[928] = v154;
          *(_QWORD *)&__dst[936] = a3[117];
          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h342c274de0eda953(__dst);
          return 1;
        }
        if ( !memcmp(
                v6,
                "load_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                0x15u) )
        {
          memcpy(__dst, a3, 0x208u);
          memcpy(&__dst[520], a3 + 65, 0x190u);
          v162 = a3[116];
          *(_QWORD *)&__dst[920] = a3[115];
          *(_QWORD *)&__dst[928] = v162;
          *(_QWORD *)&__dst[936] = a3[117];
          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h7095fd0f5f9ae728(__dst);
          return 1;
        }
        if ( !memcmp(
                v6,
                "save_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                0x15u) )
        {
          memcpy(__dst, a3, 0x208u);
          memcpy(&__dst[520], a3 + 65, 0x190u);
          v198 = a3[116];
          *(_QWORD *)&__dst[920] = a3[115];
          *(_QWORD *)&__dst[928] = v198;
          *(_QWORD *)&__dst[936] = a3[117];
          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h412fc4e665aa80d6(__dst);
          return 1;
        }
        if ( !memcmp(
                v6,
                "test_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                0x15u) )
        {
          memcpy(__dst, a3, 0x208u);
          memcpy(&__dst[520], a3 + 65, 0x190u);
          v225 = a3[116];
          *(_QWORD *)&__dst[920] = a3[115];
          *(_QWORD *)&__dst[928] = v225;
          *(_QWORD *)&__dst[936] = a3[117];
          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h41b3303b2565f2bb(__dst);
          return 1;
        }
        LODWORD(v5) = memcmp(
                        v6,
                        "set_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                        0x15u);
        if ( !(_DWORD)v5 )
        {
          memcpy(__dst, a3, 0x208u);
          memcpy(&__dst[520], a3 + 65, 0x190u);
          v234 = a3[116];
          *(_QWORD *)&__dst[920] = a3[115];
          *(_QWORD *)&__dst[928] = v234;
          *(_QWORD *)&__dst[936] = a3[117];
          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h004265166b40e3df(__dst);
          return 1;
        }
        LOBYTE(v5) = 1;
        LODWORD(v431) = v5;
        v429 = 0;
        v432 = 0;
        v434 = 0;
        v437 = 0;
        v21 = 0;
        v416 = 0;
        v435 = 0;
        v22 = 0;
        LODWORD(v430) = 0;
        v436 = 0;
        LODWORD(v438) = 0;
        goto LABEL_295;
      }
      v34 = a3[113];
      v343[67] = a3[117];
      v35 = a3[115];
      v343[66] = a3[116];
      v343[65] = v35;
      memcpy(v343, a3, 0x208u);
      *(_QWORD *)&__dst[376] = a3[112];
      v36 = a3[110];
      *(_QWORD *)&__dst[368] = a3[111];
      *(_QWORD *)&__dst[360] = v36;
      memcpy(&__dst[392], v343, 0xB40u);
      __dst[3272] = 0;
      memcpy(__dst, a3 + 65, 0x168u);
      *(_QWORD *)&__dst[384] = v34;
      v353 = a3[114];
      v354 = 0;
      v32 = tauri::async_runtime::spawn::he5adbc0c71e898b2(__dst);
      goto LABEL_331;
    }
    memcpy(__dst, a3, 0x208u);
    memcpy(&__dst[520], a3 + 65, 0x190u);
    v27 = a3[116];
    *(_QWORD *)&__dst[920] = a3[115];
    *(_QWORD *)&__dst[928] = v27;
    *(_QWORD *)&__dst[936] = a3[117];
    memcpy(v343, a3, 0x208u);
    memcpy(v359, a3 + 65, sizeof(v359));
    v423 = a3[117];
    v28 = a3[115];
    v422 = a3[116];
    v421 = v28;
    v385[6] = 0;
    v385[0] = "set_autostart_enabled";
    v385[1] = 21;
    v385[2] = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
    v385[3] = 3;
    v385[4] = v343;
    v385[5] = &v421;
    _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v380);
    if ( LODWORD(v380[0]) == 3 )
    {
      v396[4] = v380[4];
      v396[3] = v380[3];
      v396[2] = v380[2];
      v396[1] = v380[1];
      memcpy(v385, &__dst[520], 0x168u);
      v410 = *(_QWORD *)&__dst[880];
      v411 = *(_QWORD *)&__dst[888];
      v412 = *(_QWORD *)&__dst[896];
      v396[0] = 1;
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
        v385,
        v359[48],
        v396,
        &v410,
        LODWORD(v359[49]),
        HIDWORD(v359[49]));
LABEL_167:
      if ( v421 == 0x8000000000000000LL )
        goto LABEL_512;
      v100 = v422;
      for ( i = v423 + 1; i != 1; --i )
      {
        core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v100);
        v100 += 96;
      }
LABEL_508:
      v144 = v421;
      if ( v421 )
      {
        v145 = v422;
LABEL_510:
        v213 = 96 * v144;
LABEL_511:
        *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v213, 8);
      }
LABEL_512:
      core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(v343, *(double *)a1.i64);
      return 1;
    }
    memcpy(v364, v380, 0x98u);
    v385[6] = 0;
    v385[0] = "set_autostart_enabled";
    v385[1] = 21;
    v385[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
    v385[3] = 4;
    v385[4] = v343;
    v385[5] = &v421;
    v44 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(v343[64] + 16LL);
    if ( !v44 )
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
        &v386,
        v385,
        &v385[2]);
      if ( (_BYTE)v386 != 6 )
      {
        v396[4] = v389;
        v396[3] = v388;
        v396[2] = v387;
        v396[1] = v386;
        memcpy(v385, &__dst[520], 0x168u);
        v410 = *(_QWORD *)&__dst[880];
        v411 = *(_QWORD *)&__dst[888];
        v412 = *(_QWORD *)&__dst[896];
        v396[0] = 1;
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
          v385,
          v359[48],
          v396,
          &v410,
          LODWORD(v359[49]),
          HIDWORD(v359[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v364);
        goto LABEL_167;
      }
      v44 = (_QWORD *)v387;
    }
    v385[6] = 0;
    v385[0] = "set_autostart_enabled";
    v385[1] = 21;
    v385[2] = "enabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
    v385[3] = 7;
    v385[4] = v343;
    v385[5] = &v421;
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hd3dee5410a5f5aeb(&v410, v385);
    if ( (_BYTE)v410 == 6 )
    {
      codexmate_lib::commands::autostart::set_autostart_enabled::ha4eafe8f010fead2(
        (__int64)v396,
        (__int64)v364,
        v44,
        SBYTE1(v410));
      memcpy(v385, &__dst[520], sizeof(v385));
      if ( v396[0] == 0x8000000000000000LL )
      {
        _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::ha6ffbede19b53d18(v364, &v396[1]);
        v380[4] = v364[3];
        v380[3] = v364[2];
        v380[2] = v364[1];
        v380[1] = v364[0];
        v380[0] = 0x8000000000000000LL;
      }
      else
      {
        qmemcpy(v380, v396, 0x50u);
      }
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h984ed399bb0e19a6(v385);
    }
    else
    {
      v396[4] = v413;
      v396[3] = v412;
      v396[2] = v411;
      v396[1] = v410;
      memcpy(v385, &__dst[520], 0x168u);
      v400 = *(_QWORD *)&__dst[880];
      v401 = *(_QWORD *)&__dst[888];
      v402 = *(_QWORD *)&__dst[896];
      v396[0] = 1;
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
        v385,
        v359[48],
        v396,
        &v400,
        LODWORD(v359[49]),
        HIDWORD(v359[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v364);
    }
    goto LABEL_167;
  }
  if ( v7 != 19 )
  {
    if ( v7 != 22 )
    {
      v24 = 0;
      LODWORD(v5) = 0;
      switch ( v7 )
      {
        case 6uLL:
          if ( *(_DWORD *)v6 ^ 0x6F676F6C | *((unsigned __int16 *)v6 + 2) ^ 0x7475 )
            goto LABEL_111;
          memcpy(v343, a3, 0x208u);
          memcpy(&v343[65], a3 + 65, 0x190u);
          v25 = a3[116];
          v343[115] = a3[115];
          v343[116] = v25;
          v343[117] = a3[117];
          *(_QWORD *)&__dst[536] = a3[117];
          v26 = a3[115];
          *(_QWORD *)&__dst[528] = a3[116];
          *(_QWORD *)&__dst[520] = v26;
          memcpy(__dst, a3, 0x208u);
          __dst[4032] = 0;
          tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h23988f921f9703f3(&v343[65]);
          return 1;
        case 7uLL:
        case 8uLL:
        case 9uLL:
        case 0xAuLL:
        case 0xBuLL:
        case 0xCuLL:
        case 0x10uLL:
        case 0x11uLL:
        case 0x12uLL:
        case 0x14uLL:
        case 0x17uLL:
        case 0x18uLL:
        case 0x19uLL:
        case 0x1AuLL:
        case 0x1BuLL:
        case 0x1DuLL:
        case 0x1EuLL:
        case 0x1FuLL:
          goto LABEL_42;
        case 0xEuLL:
          if ( *v6 ^ 0x615F686374697773LL | *(_QWORD *)((char *)v6 + 6) ^ 0x746E756F6363615FLL )
            goto LABEL_111;
          memcpy(v343, a3, 0x208u);
          memcpy(&v343[65], a3 + 65, 0x190u);
          v105 = a3[116];
          v343[115] = a3[115];
          v343[116] = v105;
          v343[117] = a3[117];
          *(_QWORD *)&__dst[536] = a3[117];
          v106 = a3[115];
          *(_QWORD *)&__dst[528] = a3[116];
          *(_QWORD *)&__dst[520] = v106;
          memcpy(__dst, a3, 0x208u);
          __dst[2136] = 0;
          tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h1cf2bdafed3d8796(&v343[65]);
          return 1;
        case 0xFuLL:
          if ( *v6 ^ 0x615F65766F6D6572LL | *(_QWORD *)((char *)v6 + 7) ^ 0x73746E756F636361LL )
          {
            if ( *v6 ^ 0x735F6574656C6564LL | *(_QWORD *)((char *)v6 + 7) ^ 0x736E6F6973736573LL )
            {
              if ( !memcmp(
                      v6,
                      "set_auto_switchconfigure_auto_switchset_api_proxy_configtest_api_proxy_configdetect_api_proxy_configget_usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update",
                      v7) )
              {
                memcpy(v343, a3, 0x208u);
                memcpy(&v343[65], a3 + 65, 0x190u);
                v156 = a3[116];
                v343[115] = a3[115];
                v343[116] = v156;
                v343[117] = a3[117];
                *(_QWORD *)&__dst[536] = a3[117];
                v157 = a3[115];
                *(_QWORD *)&__dst[528] = a3[116];
                *(_QWORD *)&__dst[520] = v157;
                memcpy(__dst, a3, 0x208u);
                __dst[4152] = 0;
                tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h342a1645c6848452(&v343[65]);
              }
              else if ( !memcmp(v6, "run_daemon_oncerestart_codexgraceful_restart_for_update", v7) )
              {
                memcpy(v343, a3, 0x208u);
                memcpy(&v343[65], a3 + 65, 0x190u);
                v169 = a3[116];
                v343[115] = a3[115];
                v343[116] = v169;
                v343[117] = a3[117];
                *(_QWORD *)&__dst[536] = a3[117];
                v170 = a3[115];
                *(_QWORD *)&__dst[528] = a3[116];
                *(_QWORD *)&__dst[520] = v170;
                memcpy(__dst, a3, 0x208u);
                __dst[1056] = 0;
                tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h8b5237238488e95e(&v343[65]);
              }
              else
              {
                if ( memcmp(v6, "get_system_info", v7) )
                {
                  v60 = 0;
                  v434 = 0;
                  v437 = 0;
                  v436 = 0;
                  LODWORD(v430) = 0;
                  LODWORD(v431) = 0;
                  v22 = 0;
                  v435 = 0;
                  v417 = 0;
                  v433 = 0;
                  v425 = 0;
                  v432 = 0;
                  goto LABEL_89;
                }
                memcpy(__dst, a3, 0x208u);
                memcpy(&__dst[520], a3 + 65, 0x190u);
                v209 = a3[116];
                *(_QWORD *)&__dst[920] = a3[115];
                *(_QWORD *)&__dst[928] = v209;
                *(_QWORD *)&__dst[936] = a3[117];
                codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h35b6e57c3478e05e(__dst);
              }
            }
            else
            {
              memcpy(__dst, a3, 0x208u);
              memcpy(&__dst[520], a3 + 65, 0x190u);
              v125 = a3[116];
              *(_QWORD *)&__dst[920] = a3[115];
              *(_QWORD *)&__dst[928] = v125;
              *(_QWORD *)&__dst[936] = a3[117];
              codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h0203691050a146a7(__dst);
            }
          }
          else
          {
            memcpy(v343, a3, 0x208u);
            memcpy(&v343[65], a3 + 65, 0x190u);
            v103 = a3[116];
            v343[115] = a3[115];
            v343[116] = v103;
            v343[117] = a3[117];
            *(_QWORD *)&__dst[536] = a3[117];
            v104 = a3[115];
            *(_QWORD *)&__dst[528] = a3[116];
            *(_QWORD *)&__dst[520] = v104;
            memcpy(__dst, a3, 0x208u);
            __dst[4272] = 0;
            tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::hffcb1788aac7196d(&v343[65]);
          }
          return 1;
        case 0x1CuLL:
          a1 = _mm_or_si128(
                 _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678F80),
                 _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 12)), (__m128i)xmmword_101678F70));
          if ( !_mm_testz_si128(a1, a1) )
            goto LABEL_41;
          memcpy(v343, a3, 0x208u);
          memcpy(&v343[65], a3 + 65, 0x190u);
          v64 = a3[116];
          v343[115] = a3[115];
          v343[116] = v64;
          v343[117] = a3[117];
          *(_QWORD *)&__dst[536] = a3[117];
          v65 = a3[115];
          *(_QWORD *)&__dst[528] = a3[116];
          *(_QWORD *)&__dst[520] = v65;
          memcpy(__dst, a3, 0x208u);
          __dst[2232] = 0;
          tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h63af9e43699bfaf8(&v343[65]);
          return 1;
        case 0x20uLL:
          v66 = _mm_or_si128(
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678F40),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6 + 1), (__m128i)xmmword_101678F30));
          if ( _mm_testz_si128(v66, v66) )
          {
            memcpy(v343, a3, 0x208u);
            memcpy(&v343[65], a3 + 65, 0x190u);
            v107 = a3[116];
            v343[115] = a3[115];
            v343[116] = v107;
            v343[117] = a3[117];
            *(_QWORD *)&__dst[536] = a3[117];
            v108 = a3[115];
            *(_QWORD *)&__dst[528] = a3[116];
            *(_QWORD *)&__dst[520] = v108;
            memcpy(__dst, a3, 0x208u);
            __dst[2136] = 0;
            tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h6b70dffd65793773(&v343[65]);
          }
          else
          {
            v67 = _mm_or_si128(
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678F60),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6 + 1), (__m128i)xmmword_101678F50));
            if ( _mm_testz_si128(v67, v67) )
            {
              memcpy(__dst, a3, 0x208u);
              memcpy(&__dst[520], a3 + 65, 0x190u);
              v126 = a3[116];
              *(_QWORD *)&__dst[920] = a3[115];
              *(_QWORD *)&__dst[928] = v126;
              *(_QWORD *)&__dst[936] = a3[117];
              codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hff6f638092568577(__dst);
            }
            else
            {
              if ( memcmp(
                     v6,
                     "set_codex_router_no_account_modediagnose_codex_routerrun_codex_router_diagnosticsfix_codex_router_issueexport_relay_configimport_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread",
                     v7) )
              {
                v68 = 0;
                v22 = 0;
                v69 = 0;
                goto LABEL_118;
              }
              memcpy(v343, a3, 0x208u);
              memcpy(&v343[65], a3 + 65, 0x190u);
              v158 = a3[116];
              v343[115] = a3[115];
              v343[116] = v158;
              v343[117] = a3[117];
              *(_QWORD *)&__dst[536] = a3[117];
              v159 = a3[115];
              *(_QWORD *)&__dst[528] = a3[116];
              *(_QWORD *)&__dst[520] = v159;
              memcpy(__dst, a3, 0x208u);
              __dst[1560] = 0;
              tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h423f9008ae7d4f7c(&v343[65]);
            }
          }
          break;
        default:
          LODWORD(v5) = 0;
          if ( v7 == 23 )
            goto LABEL_135;
          goto LABEL_43;
      }
      return 1;
    }
    a1 = _mm_or_si128(
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678F20),
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 6)), (__m128i)xmmword_101678F10));
    if ( _mm_testz_si128(a1, a1) )
    {
      v41 = a3[113];
      v343[67] = a3[117];
      v42 = a3[115];
      v343[66] = a3[116];
      v343[65] = v42;
      memcpy(v343, a3, 0x208u);
      *(_QWORD *)&__dst[376] = a3[112];
      v43 = a3[110];
      *(_QWORD *)&__dst[368] = a3[111];
      *(_QWORD *)&__dst[360] = v43;
      memcpy(&__dst[392], v343, 0x9C0u);
      __dst[2888] = 0;
      memcpy(__dst, a3 + 65, 0x168u);
      *(_QWORD *)&__dst[384] = v41;
      v349 = a3[114];
      v350 = 0;
      v32 = tauri::async_runtime::spawn::h99e6d5be9446a508(__dst);
      goto LABEL_331;
    }
LABEL_41:
    LOBYTE(v5) = v7 == 22;
    v24 = v7 != 22;
LABEL_42:
    if ( v7 == 23 )
    {
LABEL_135:
      a1 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678FA0),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 7)), (__m128i)xmmword_101678F90));
      if ( _mm_testz_si128(a1, a1) )
      {
        v92 = a3[113];
        v343[67] = a3[117];
        v93 = a3[115];
        v343[66] = a3[116];
        v343[65] = v93;
        memcpy(v343, a3, 0x208u);
        *(_QWORD *)&__dst[376] = a3[112];
        v94 = a3[110];
        *(_QWORD *)&__dst[368] = a3[111];
        *(_QWORD *)&__dst[360] = v94;
        memcpy(&__dst[392], v343, 0x678u);
        __dst[2048] = 0;
        memcpy(__dst, a3 + 65, 0x168u);
        *(_QWORD *)&__dst[384] = v92;
        *(_QWORD *)&__dst[3720] = a3[114];
        __dst[3728] = 0;
        v32 = tauri::async_runtime::spawn::hc0a01c38013f26b4(__dst);
        goto LABEL_331;
      }
      LOBYTE(a5) = 1;
      LODWORD(v438) = a5;
      v433 = 0;
      v432 = 0;
      v434 = 0;
      v435 = 0;
      LODWORD(v431) = 0;
      LODWORD(v430) = 0;
      v436 = 0;
      if ( !(_BYTE)v5 )
        goto LABEL_235;
LABEL_137:
      LODWORD(v5) = memcmp(v6, "preview_account_import", v7);
      v56 = 1;
      if ( (_DWORD)v5 )
        goto LABEL_138;
LABEL_143:
      v87 = a3[113];
      v343[67] = a3[117];
      v88 = a3[115];
      v343[66] = a3[116];
      v343[65] = v88;
      memcpy(v343, a3, 0x208u);
      *(_QWORD *)&__dst[376] = a3[112];
      v89 = a3[110];
      *(_QWORD *)&__dst[368] = a3[111];
      *(_QWORD *)&__dst[360] = v89;
      memcpy(&__dst[392], v343, 0x630u);
      __dst[1976] = 0;
      memcpy(__dst, a3 + 65, 0x168u);
      *(_QWORD *)&__dst[384] = v87;
      *(_QWORD *)&__dst[3576] = a3[114];
      __dst[3584] = 0;
      v32 = tauri::async_runtime::spawn::hd44e37b5e5c0d0bf(__dst);
      goto LABEL_331;
    }
LABEL_43:
    if ( v7 == 25 )
    {
      v54 = _mm_or_si128(
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678FD0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 9)), (__m128i)xmmword_101678FB0));
      if ( _mm_testz_si128(v54, v54) )
      {
        memcpy(v343, a3, 0x208u);
        memcpy(&v343[65], a3 + 65, 0x190u);
        v75 = a3[116];
        v343[115] = a3[115];
        v343[116] = v75;
        v343[117] = a3[117];
        *(_QWORD *)&__dst[536] = a3[117];
        v76 = a3[115];
        *(_QWORD *)&__dst[528] = a3[116];
        *(_QWORD *)&__dst[520] = v76;
        memcpy(__dst, a3, 0x208u);
        v346 = 0;
        tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h2d81ff57464c5068(&v343[65]);
        return 1;
      }
      if ( (_BYTE)v5 )
      {
        v55 = _mm_or_si128(
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679010),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 9)), (__m128i)xmmword_101679000));
        if ( _mm_testz_si128(v55, v55) )
          goto LABEL_143;
        a1 = _mm_or_si128(
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678FF0),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 9)), (__m128i)xmmword_101678FE0));
        if ( !_mm_testz_si128(a1, a1) )
        {
          LOBYTE(v5) = 1;
          v435 = v5;
          LODWORD(v438) = 0;
          v433 = 0;
          v434 = 0;
          LODWORD(v430) = 0;
          goto LABEL_149;
        }
      }
      else
      {
        v102 = _mm_or_si128(
                 _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678FF0),
                 _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 9)), (__m128i)xmmword_101678FE0));
        if ( !_mm_testz_si128(v102, v102) )
        {
          LODWORD(v438) = 0;
          v436 = 0;
          LODWORD(v430) = 0;
          v22 = 0;
          v433 = 0;
          v437 = 0;
          v434 = 0;
          v432 = 0;
          v429 = 0;
          goto LABEL_279;
        }
      }
      v120 = a3[113];
      v343[67] = a3[117];
      v121 = a3[115];
      v343[66] = a3[116];
      v343[65] = v121;
      memcpy(v343, a3, 0x208u);
      *(_QWORD *)&__dst[376] = a3[112];
      v122 = a3[110];
      *(_QWORD *)&__dst[368] = a3[111];
      *(_QWORD *)&__dst[360] = v122;
      memcpy(&__dst[392], v343, 0x1188u);
      v345 = 0;
      memcpy(__dst, a3 + 65, 0x168u);
      *(_QWORD *)&__dst[384] = v120;
      v357 = a3[114];
      v358 = 0;
      v32 = tauri::async_runtime::spawn::h5bf599965eae0d9a(__dst);
      goto LABEL_331;
    }
    if ( v7 != 26 )
    {
      LODWORD(v438) = 0;
      v433 = 0;
      v56 = 0;
      if ( !(_BYTE)v5 )
      {
LABEL_138:
        if ( v7 != 16 )
        {
          if ( v7 == 17 )
          {
            LODWORD(v5) = *((unsigned __int8 *)v6 + 16);
            a1 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679020);
            v81 = _mm_or_si128(_mm_xor_si128(_mm_cvtsi32_si128(v5), (__m128i)xmmword_101601F70), a1);
            LOBYTE(v5) = 1;
            LODWORD(v430) = v5;
            if ( _mm_testz_si128(v81, v81) )
            {
              memcpy(__dst, a3, 0x208u);
              memcpy(&__dst[520], a3 + 65, 0x190u);
              v82 = a3[116];
              *(_QWORD *)&__dst[920] = a3[115];
              *(_QWORD *)&__dst[928] = v82;
              *(_QWORD *)&__dst[936] = a3[117];
              memcpy(v343, a3, 0x208u);
              memcpy(v359, a3 + 65, sizeof(v359));
              v371 = a3[117];
              v83 = a3[115];
              v370 = a3[116];
              v369 = v83;
              v385[6] = 0;
              v385[0] = "upsert_mcp_serverset_mcp_server_enabledremove_mcp_server";
              v385[1] = 17;
              v84 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
              v385[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
              v385[3] = 4;
              v385[4] = v343;
              v385[5] = &v369;
              LOBYTE(v84) = 1;
              LODWORD(v438) = (_DWORD)v84;
              v85 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(v343[64] + 16LL);
              v86 = (__int64 *)v85;
              if ( v85 )
              {
                v382 = (__int64 *)v85;
                LOBYTE(v381) = 6;
              }
              else
              {
                _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
                  &v381,
                  v385,
                  &v385[2]);
                if ( (_BYTE)v381 != 6 )
                {
                  v380[4] = v384;
                  v380[3] = v383;
                  v380[2] = v382;
                  v380[1] = v381;
                  memcpy(v385, &__dst[520], 0x168u);
                  v364[0] = *(_QWORD *)&__dst[880];
                  v364[1] = *(_QWORD *)&__dst[888];
                  v364[2] = *(_QWORD *)&__dst[896];
                  v380[0] = 1;
                  LODWORD(v438) = 0;
                  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                    v385,
                    v359[48],
                    v380,
                    v364,
                    LODWORD(v359[49]),
                    HIDWORD(v359[49]));
                  goto LABEL_603;
                }
                v86 = v382;
              }
              v385[6] = 0;
              v385[0] = "upsert_mcp_serverset_mcp_server_enabledremove_mcp_server";
              v385[1] = 17;
              v385[2] = "mutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
              v385[3] = 12;
              v385[4] = v343;
              v385[5] = &v369;
              v187 = tauri::state::StateManager::try_get::h18d7865deb554c60(v343[64] + 16LL);
              v188 = v187;
              if ( v187 )
              {
                v377 = v187;
                LOBYTE(v376) = 6;
              }
              else
              {
                _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
                  &v376,
                  v385,
                  &v385[2]);
                if ( (_BYTE)v376 != 6 )
                {
                  v380[4] = v379;
                  v380[3] = v378;
                  v380[2] = v377;
                  v380[1] = v376;
                  memcpy(v385, &__dst[520], 0x168u);
                  v364[0] = *(_QWORD *)&__dst[880];
                  v364[1] = *(_QWORD *)&__dst[888];
                  v364[2] = *(_QWORD *)&__dst[896];
                  v380[0] = 1;
                  LODWORD(v438) = 0;
                  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                    v385,
                    v359[48],
                    v380,
                    v364,
                    LODWORD(v359[49]),
                    HIDWORD(v359[49]));
                  goto LABEL_603;
                }
                v188 = v377;
              }
              v385[6] = 0;
              v385[0] = "upsert_mcp_serverset_mcp_server_enabledremove_mcp_server";
              v385[1] = 17;
              v385[2] = &unk_1015FB9C8;
              v385[3] = 4;
              v385[4] = v343;
              v385[5] = &v369;
              _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(
                &v360,
                v385);
              if ( (_BYTE)v360 == 6 )
              {
                v406 = v363;
                v405 = v362;
                v404 = v361;
                v385[6] = 0;
                v385[0] = "upsert_mcp_serverset_mcp_server_enabledremove_mcp_server";
                v385[1] = 17;
                v385[2] = "transportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                v385[3] = 9;
                v385[4] = v343;
                v385[5] = &v369;
                v203 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(
                         &v372,
                         v385);
                LOBYTE(v203) = (_BYTE)v372 == 6;
                LODWORD(v438) = v203;
                if ( (_BYTE)v372 == 6 )
                {
                  v420 = v375;
                  v419 = v374;
                  v418 = (__int64)v373;
                  v385[6] = 0;
                  v385[0] = "upsert_mcp_serverset_mcp_server_enabledremove_mcp_server";
                  v385[1] = 17;
                  v385[2] = "enabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                  v385[3] = 7;
                  v385[4] = v343;
                  v385[5] = &v369;
                  v204 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hd3dee5410a5f5aeb(
                           &v365,
                           v385);
                  LOBYTE(v204) = (_BYTE)v365 == 6;
                  LODWORD(v438) = v204;
                  if ( (_BYTE)v365 == 6 )
                  {
                    LOBYTE(v430) = BYTE1(v365);
                    v385[6] = 0;
                    v385[0] = "upsert_mcp_serverset_mcp_server_enabledremove_mcp_server";
                    v385[1] = 17;
                    v385[2] = "commandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                    v385[3] = 7;
                    v385[4] = v343;
                    v385[5] = &v369;
                    v205 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(
                             &v392,
                             v385);
                    LOBYTE(v205) = (_BYTE)v392 == 6;
                    LODWORD(v438) = v205;
                    if ( (_BYTE)v392 == 6 )
                    {
                      v428 = v395;
                      v427 = v394;
                      v426 = v393;
                      v385[6] = 0;
                      v385[0] = "upsert_mcp_serverset_mcp_server_enabledremove_mcp_server";
                      v385[1] = 17;
                      v385[2] = "argsopenwithkindsavetrueuuidemitshowhide";
                      v385[3] = 4;
                      v385[4] = v343;
                      v385[5] = &v369;
                      v206 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h2acca326e8d04504(
                               &v421,
                               v385);
                      LOBYTE(v206) = (_BYTE)v421 == 6;
                      LODWORD(v438) = v206;
                      if ( (_BYTE)v421 == 6 )
                      {
                        v399 = v424;
                        v398 = v423;
                        v397 = v422;
                        v385[6] = 0;
                        v385[0] = "upsert_mcp_serverset_mcp_server_enabledremove_mcp_server";
                        v385[1] = 17;
                        v385[2] = "urlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                        v385[3] = 3;
                        v385[4] = v343;
                        v385[5] = &v369;
                        v207 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(
                                 &v400,
                                 v385);
                        LOBYTE(v207) = (_BYTE)v400 == 6;
                        LODWORD(v438) = v207;
                        if ( (_BYTE)v400 == 6 )
                        {
                          v409 = v403;
                          v408 = v402;
                          v407 = v401;
                          v385[6] = 0;
                          v385[0] = "upsert_mcp_serverset_mcp_server_enabledremove_mcp_server";
                          v385[1] = 17;
                          v385[2] = "headersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                          v385[3] = 7;
                          v385[4] = v343;
                          v385[5] = &v369;
                          v208 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hbe19bb64fe4aa55c(
                                   &v410,
                                   v385);
                          LOBYTE(v208) = v410 != 0;
                          LODWORD(v438) = v208;
                          if ( v410 )
                          {
                            v391 = v415;
                            v390 = v414;
                            v389 = v413;
                            v388 = v412;
                            v387 = v411;
                            v386 = v410;
                            v385[6] = 0;
                            v385[0] = "upsert_mcp_serverset_mcp_server_enabledremove_mcp_server";
                            v385[1] = 17;
                            v385[2] = "environmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                            v385[3] = 11;
                            v385[4] = v343;
                            v385[5] = &v369;
                            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hbe19bb64fe4aa55c(
                              v380,
                              v385);
                            if ( v380[0] )
                            {
                              v396[5] = v380[5];
                              v396[4] = v380[4];
                              v396[3] = v380[3];
                              v396[2] = v380[2];
                              v396[1] = v380[1];
                              v396[0] = v380[0];
                              codexmate_lib::commands::mcp::upsert_mcp_server::h0b5d3ace6f195b4c(
                                v364,
                                v86,
                                v188,
                                &v404,
                                &v418,
                                (char)v430,
                                &v426,
                                &v397,
                                &v407,
                                &v386,
                                v396);
                              memcpy(v385, v359, sizeof(v385));
                              if ( v364[0] == 0x8000000000000000LL )
                              {
                                _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::ha6ffbede19b53d18(
                                  &v410,
                                  &v364[1]);
                                v380[4] = v413;
                                v380[3] = v412;
                                v380[2] = v411;
                                v380[1] = v410;
                                v380[0] = 0x8000000000000000LL;
                              }
                              else
                              {
                                memcpy(v380, v364, 0x150u);
                              }
                              tauri::ipc::InvokeResolver$LT$R$GT$::respond::h7144ff47707fe5b6(v385, v380);
                              goto LABEL_603;
                            }
                            v364[4] = v380[4];
                            v364[3] = v380[3];
                            v364[2] = v380[2];
                            v364[1] = v380[1];
                            memcpy(v385, v359, 0x168u);
                            v396[0] = v359[45];
                            v396[1] = v359[46];
                            v396[2] = v359[47];
                            v364[0] = 1;
                            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                              v385,
                              v359[48],
                              v364,
                              v396,
                              LODWORD(v359[49]),
                              HIDWORD(v359[49]));
                            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::hf0725fc79dd5de06(&v410);
                          }
                          else
                          {
                            v380[4] = v414;
                            v380[3] = v413;
                            v380[2] = v412;
                            v380[1] = v411;
                            memcpy(v385, v359, 0x168u);
                            v364[0] = v359[45];
                            v364[1] = v359[46];
                            v364[2] = v359[47];
                            v380[0] = 1;
                            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                              v385,
                              v359[48],
                              v380,
                              v364,
                              LODWORD(v359[49]),
                              HIDWORD(v359[49]));
                          }
                          if ( v407 != 0x8000000000000000LL && v407 )
                            *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v408, v407, 1);
                        }
                        else
                        {
                          v380[4] = v403;
                          v380[3] = v402;
                          v380[2] = v401;
                          v380[1] = v400;
                          memcpy(v385, v359, 0x168u);
                          v364[0] = v359[45];
                          v364[1] = v359[46];
                          v364[2] = v359[47];
                          v380[0] = 1;
                          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                            v385,
                            v359[48],
                            v380,
                            v364,
                            LODWORD(v359[49]),
                            HIDWORD(v359[49]));
                        }
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(
                          &v422,
                          *(double *)a1.i64);
                      }
                      else
                      {
                        v380[4] = v424;
                        v380[3] = v423;
                        v380[2] = v422;
                        v380[1] = v421;
                        memcpy(v385, v359, 0x168u);
                        v364[0] = v359[45];
                        v364[1] = v359[46];
                        v364[2] = v359[47];
                        v380[0] = 1;
                        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                          v385,
                          v359[48],
                          v380,
                          v364,
                          LODWORD(v359[49]),
                          HIDWORD(v359[49]));
                      }
                      if ( v426 != 0x8000000000000000LL && v426 )
                        *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v427, v426, 1);
                    }
                    else
                    {
                      v380[4] = v395;
                      v380[3] = v394;
                      v380[2] = v393;
                      v380[1] = v392;
                      memcpy(v385, v359, 0x168u);
                      v364[0] = v359[45];
                      v364[1] = v359[46];
                      v364[2] = v359[47];
                      v380[0] = 1;
                      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                        v385,
                        v359[48],
                        v380,
                        v364,
                        LODWORD(v359[49]),
                        HIDWORD(v359[49]));
                    }
                  }
                  else
                  {
                    v380[4] = v368;
                    v380[3] = v367;
                    v380[2] = v366;
                    v380[1] = v365;
                    memcpy(v385, &__dst[520], 0x168u);
                    v364[0] = *(_QWORD *)&__dst[880];
                    v364[1] = *(_QWORD *)&__dst[888];
                    v364[2] = *(_QWORD *)&__dst[896];
                    v380[0] = 1;
                    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                      v385,
                      v359[48],
                      v380,
                      v364,
                      LODWORD(v359[49]),
                      HIDWORD(v359[49]));
                  }
                  if ( v418 )
                    *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v419, v418, 1);
                }
                else
                {
                  v380[4] = v375;
                  v380[3] = v374;
                  v380[2] = v373;
                  v380[1] = v372;
                  memcpy(v385, &__dst[520], 0x168u);
                  v364[0] = *(_QWORD *)&__dst[880];
                  v364[1] = *(_QWORD *)&__dst[888];
                  v364[2] = *(_QWORD *)&__dst[896];
                  v380[0] = 1;
                  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                    v385,
                    v359[48],
                    v380,
                    v364,
                    LODWORD(v359[49]),
                    HIDWORD(v359[49]));
                }
                if ( v404 )
                  *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v405, v404, 1);
                goto LABEL_603;
              }
              v380[4] = v363;
              v380[3] = v362;
              v380[2] = v361;
              v380[1] = v360;
              memcpy(v385, &__dst[520], 0x168u);
              v364[0] = *(_QWORD *)&__dst[880];
              v364[1] = *(_QWORD *)&__dst[888];
              v364[2] = *(_QWORD *)&__dst[896];
              v380[0] = 1;
              LODWORD(v438) = 0;
              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                v385,
                v359[48],
                v380,
                v364,
                LODWORD(v359[49]),
                HIDWORD(v359[49]));
LABEL_603:
              if ( v369 == 0x8000000000000000LL )
                goto LABEL_512;
              v321 = v370;
              for ( j = v371 + 1; j != 1; --j )
              {
                core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v321);
                v321 += 96;
              }
              v144 = v369;
              if ( !v369 )
                goto LABEL_512;
              v145 = v370;
              goto LABEL_510;
            }
          }
          else
          {
            LODWORD(v430) = 0;
          }
          v435 = 0;
          v434 = 0;
          LODWORD(v431) = 0;
          if ( !v56 )
          {
LABEL_150:
            if ( !(_BYTE)v430 || (LODWORD(v5) = memcmp(v6, "remove_mcp_server", v7), (_DWORD)v5) )
            {
              if ( v7 == 12 )
              {
                if ( !(*v6 ^ 0x735F74726F706D69LL | *((unsigned int *)v6 + 2) ^ 0x6C6C696BLL) )
                {
                  memcpy(v343, a3, 0x208u);
                  memcpy(&v343[65], a3 + 65, 0x190u);
                  v193 = a3[116];
                  v343[115] = a3[115];
                  v343[116] = v193;
                  v343[117] = a3[117];
                  *(_QWORD *)&__dst[536] = a3[117];
                  v194 = a3[115];
                  *(_QWORD *)&__dst[528] = a3[116];
                  *(_QWORD *)&__dst[520] = v194;
                  memcpy(__dst, a3, 0x208u);
                  __dst[2952] = 0;
                  tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h4b35c670f5efbda8(&v343[65]);
                  return 1;
                }
                v5 = *v6 ^ 0x735F65766F6D6572LL;
                if ( !(v5 | *((unsigned int *)v6 + 2) ^ 0x6C6C696BLL) )
                {
                  memcpy(v343, a3, 0x208u);
                  memcpy(&v343[65], a3 + 65, 0x190u);
                  v217 = a3[116];
                  v343[115] = a3[115];
                  v343[116] = v217;
                  v343[117] = a3[117];
                  *(_QWORD *)&__dst[536] = a3[117];
                  v218 = a3[115];
                  *(_QWORD *)&__dst[528] = a3[116];
                  *(_QWORD *)&__dst[520] = v218;
                  memcpy(__dst, a3, 0x208u);
                  __dst[2952] = 0;
                  tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::hbee37701778ca917(&v343[65]);
                  return 1;
                }
                goto LABEL_208;
              }
              if ( v7 != 18 )
              {
                if ( v7 == 20 )
                {
                  v91 = _mm_or_si128(
                          _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679050),
                          _mm_xor_si128(_mm_cvtsi32_si128(*((_DWORD *)v6 + 4)), (__m128i)xmmword_101679040));
                  if ( _mm_testz_si128(v91, v91) )
                  {
                    memcpy(v343, a3, 0x208u);
                    memcpy(&v343[65], a3 + 65, 0x190u);
                    v195 = a3[116];
                    v343[115] = a3[115];
                    v343[116] = v195;
                    v343[117] = a3[117];
                    *(_QWORD *)&__dst[536] = a3[117];
                    v196 = a3[115];
                    *(_QWORD *)&__dst[528] = a3[116];
                    *(_QWORD *)&__dst[520] = v196;
                    memcpy(__dst, a3, 0x208u);
                    __dst[2952] = 0;
                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::he22c4266ee02632b(&v343[65]);
                    return 1;
                  }
                  a1 = _mm_or_si128(
                         _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679070),
                         _mm_xor_si128(_mm_cvtsi32_si128(*((_DWORD *)v6 + 4)), (__m128i)xmmword_101679060));
                  if ( _mm_testz_si128(a1, a1) )
                  {
                    memcpy(__dst, a3, 0x208u);
                    memcpy(&__dst[520], a3 + 65, 0x190u);
                    v219 = a3[116];
                    *(_QWORD *)&__dst[920] = a3[115];
                    *(_QWORD *)&__dst[928] = v219;
                    *(_QWORD *)&__dst[936] = a3[117];
                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h913c1e308aa6f6ae(__dst);
                    return 1;
                  }
                  v432 = 0;
                  LOBYTE(v5) = 1;
                  v436 = v5;
LABEL_209:
                  if ( !(_BYTE)v438 )
                  {
                    v437 = 0;
                    goto LABEL_237;
                  }
LABEL_235:
                  if ( memcmp(
                         v6,
                         "upsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                         v7) )
                  {
                    LODWORD(v5) = memcmp(
                                    v6,
                                    "remove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                    v7);
                    LOBYTE(v146) = 1;
                    v437 = v146;
                    if ( !(_DWORD)v5 )
                    {
                      memcpy(__dst, a3, 0x208u);
                      memcpy(&__dst[520], a3 + 65, 0x190u);
                      v152 = a3[116];
                      *(_QWORD *)&__dst[920] = a3[115];
                      *(_QWORD *)&__dst[928] = v152;
                      *(_QWORD *)&__dst[936] = a3[117];
                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h4cca4b11c0407c05(__dst);
                      return 1;
                    }
LABEL_237:
                    if ( v7 == 29 )
                    {
                      v153 = _mm_or_si128(
                               _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1016790B0),
                               _mm_xor_si128(
                                 _mm_loadu_si128((const __m128i *)((char *)v6 + 13)),
                                 (__m128i)xmmword_1016790A0));
                      LOBYTE(v5) = 1;
                      LODWORD(v438) = v5;
                      if ( _mm_testz_si128(v153, v153) )
                      {
                        memcpy(__dst, a3, 0x208u);
                        memcpy(&__dst[520], a3 + 65, 0x190u);
                        v202 = a3[116];
                        *(_QWORD *)&__dst[920] = a3[115];
                        *(_QWORD *)&__dst[928] = v202;
                        *(_QWORD *)&__dst[936] = a3[117];
                        codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h2d5ba1fb8d4d1ff0(__dst);
                        return 1;
                      }
                    }
                    else
                    {
                      if ( v7 == 33 )
                      {
                        if ( !memcmp(
                                v6,
                                "remove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                0x21u) )
                        {
                          memcpy(__dst, a3, 0x208u);
                          memcpy(&__dst[520], a3 + 65, 0x190u);
                          v201 = a3[116];
                          *(_QWORD *)&__dst[920] = a3[115];
                          *(_QWORD *)&__dst[928] = v201;
                          *(_QWORD *)&__dst[936] = a3[117];
                          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb65a6851ee14c5de(__dst);
                          return 1;
                        }
                        if ( !memcmp(
                                v6,
                                "upsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                0x21u) )
                        {
                          memcpy(__dst, a3, 0x208u);
                          memcpy(&__dst[520], a3 + 65, 0x190u);
                          v227 = a3[116];
                          *(_QWORD *)&__dst[920] = a3[115];
                          *(_QWORD *)&__dst[928] = v227;
                          *(_QWORD *)&__dst[936] = a3[117];
                          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9e19dca1f36e4d64(__dst);
                          return 1;
                        }
                        LODWORD(v5) = memcmp(
                                        v6,
                                        "resolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                        0x21u);
                        if ( !(_DWORD)v5 )
                        {
                          memcpy(__dst, a3, 0x208u);
                          memcpy(&__dst[520], a3 + 65, 0x190u);
                          v235 = a3[116];
                          *(_QWORD *)&__dst[920] = a3[115];
                          *(_QWORD *)&__dst[928] = v235;
                          *(_QWORD *)&__dst[936] = a3[117];
                          codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1041ff49fd466842(__dst);
                          return 1;
                        }
                      }
                      LODWORD(v438) = 0;
                    }
                    if ( !(_BYTE)v433 )
                    {
                      v433 = 0;
                      goto LABEL_275;
                    }
LABEL_274:
                    LODWORD(v5) = memcmp(
                                    v6,
                                    "remove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                    v7);
                    LOBYTE(v171) = 1;
                    v433 = v171;
                    if ( !(_DWORD)v5 )
                    {
                      memcpy(__dst, a3, 0x208u);
                      memcpy(&__dst[520], a3 + 65, 0x190u);
                      v177 = a3[116];
                      *(_QWORD *)&__dst[920] = a3[115];
                      *(_QWORD *)&__dst[928] = v177;
                      *(_QWORD *)&__dst[936] = a3[117];
                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbda9649a3b0a0ac3(__dst);
                      return 1;
                    }
LABEL_275:
                    LOBYTE(v5) = v7 == 27;
                    v429 = v5;
                    v22 = v431;
                    if ( v7 == 27 )
                    {
                      v172 = _mm_or_si128(
                               _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1016790D0),
                               _mm_xor_si128(
                                 _mm_loadu_si128((const __m128i *)((char *)v6 + 11)),
                                 (__m128i)xmmword_1016790C0));
                      if ( _mm_testz_si128(v172, v172) )
                      {
                        memcpy(__dst, a3, 0x208u);
                        memcpy(&__dst[520], a3 + 65, 0x190u);
                        v186 = a3[116];
                        *(_QWORD *)&__dst[920] = a3[115];
                        *(_QWORD *)&__dst[928] = v186;
                        *(_QWORD *)&__dst[936] = a3[117];
                        codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h03e927ab7940de7a(__dst);
                        return 1;
                      }
                      LODWORD(v5) = 1834968942;
                      v173 = _mm_or_si128(
                               _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1016790E0),
                               _mm_xor_si128(
                                 _mm_unpacklo_epi64((__m128i)0x69737365636F7270uLL, (__m128i)0x7365646F6D5F676EuLL),
                                 _mm_loadu_si128((const __m128i *)((char *)v6 + 11))));
                      if ( _mm_testz_si128(v173, v173) )
                      {
                        memcpy(__dst, a3, 0x208u);
                        memcpy(&__dst[520], a3 + 65, 0x190u);
                        v200 = a3[116];
                        *(_QWORD *)&__dst[920] = a3[115];
                        *(_QWORD *)&__dst[928] = v200;
                        *(_QWORD *)&__dst[936] = a3[117];
                        codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha351c879befc9b2f(__dst);
                        return 1;
                      }
                    }
                    if ( !(_BYTE)v435 )
                    {
                      v416 = 0;
LABEL_286:
                      if ( !v24 )
                      {
                        v435 = 0;
                        v21 = v433;
LABEL_292:
                        if ( v7 == 37 )
                        {
                          LODWORD(v5) = memcmp(
                                          v6,
                                          "set_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                          0x25u);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v222 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v222;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h728e6f7c1f7ad6c9(__dst);
                            return 1;
                          }
                        }
                        LODWORD(v431) = 0;
LABEL_295:
                        if ( (_BYTE)v21 )
                        {
                          LODWORD(v5) = memcmp(
                                          v6,
                                          "set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                          v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v221 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v221;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc253ad0169848f41(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v438 )
                        {
                          v181 = _mm_or_si128(
                                   _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679100),
                                   _mm_xor_si128(
                                     _mm_loadu_si128((const __m128i *)((char *)v6 + 13)),
                                     (__m128i)xmmword_1016790F0));
                          if ( _mm_testz_si128(v181, v181) )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v230 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v230;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbe99a1f07924f81e(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v435 )
                        {
                          LODWORD(v5) = memcmp(
                                          v6,
                                          "set_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                          v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v233 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v233;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h2a1079c6bbdecf6b(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v437 )
                        {
                          LODWORD(v5) = memcmp(
                                          v6,
                                          "set_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                          v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v236 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v236;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h35c7d25317e01334(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v431 )
                        {
                          LODWORD(v5) = memcmp(
                                          v6,
                                          "voice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                          v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v237 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v237;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6550f0ba37c7f593(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v432 )
                        {
                          LODWORD(v5) = memcmp(
                                          v6,
                                          "stop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                          v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v241 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v241;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h90091d5bb7c91a85(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v430 )
                        {
                          LODWORD(v5) = memcmp(
                                          v6,
                                          "inject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                          v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v245 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v245;
                            *(_QWORD *)&__dst[936] = a3[117];
                            v343[67] = a3[117];
                            v246 = a3[115];
                            v343[66] = a3[116];
                            v343[65] = v246;
                            memcpy(v343, a3, 0x208u);
                            LOBYTE(v343[93]) = 0;
                            tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h741a7d2007591bd9(&__dst[520]);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v437 )
                        {
                          LODWORD(v5) = memcmp(
                                          v6,
                                          "set_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                          v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v251 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v251;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6791d02d73f18a3c(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v21 )
                        {
                          LODWORD(v5) = memcmp(
                                          v6,
                                          "remove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                          v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v254 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v254;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h21dfb65813298459(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v437 )
                        {
                          LODWORD(v5) = memcmp(
                                          v6,
                                          "open_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                          v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v266 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v266;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf8003315da851737(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v416 )
                        {
                          if ( !memcmp(
                                  v6,
                                  "show_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                  v7) )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v275 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v275;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf4550b6d288201c2(__dst);
                            return 1;
                          }
                          LODWORD(v5) = memcmp(v6, "hide_voice_search_overlayvoice_search_overlay_ready", v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v286 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v286;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbf710ea9d428fc1c(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v21 )
                        {
                          LODWORD(v5) = memcmp(v6, "voice_search_overlay_ready", v7);
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v282 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v282;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc784e5f98656c86f(__dst);
                            return 1;
                          }
                        }
                        if ( (_BYTE)v437 )
                        {
                          LODWORD(v5) = memcmp(v6, "export_session_markdown", v7);
                          LOBYTE(v182) = 1;
                          v425 = v182;
                          if ( !(_DWORD)v5 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v183 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v183;
                            *(_QWORD *)&__dst[936] = a3[117];
                            v343[67] = a3[117];
                            v184 = a3[115];
                            v343[66] = a3[116];
                            v343[65] = v184;
                            memcpy(v343, a3, 0x208u);
                            LOBYTE(v343[99]) = 0;
                            tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h9a96f061be0e88b9(&__dst[520]);
                            return 1;
                          }
                        }
                        else
                        {
                          v425 = 0;
                        }
LABEL_437:
                        if ( v7 == 5 )
                        {
                          if ( !(*(_DWORD *)v6 ^ 0x61656C63 | *((unsigned __int8 *)v6 + 4) ^ 0x6E) )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v278 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v278;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb783d06ee3cfb2f5(__dst);
                            return 1;
                          }
                        }
                        else
                        {
                          if ( v7 == 24 )
                          {
                            v255 = _mm_or_si128(
                                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679120),
                                     _mm_xor_si128(_mm_loadl_epi64((const __m128i *)v6 + 1), (__m128i)xmmword_101679110));
                            LOBYTE(v5) = 1;
                            v437 = v5;
                            if ( _mm_testz_si128(v255, v255) )
                            {
                              memcpy(__dst, a3, 0x208u);
                              memcpy(&__dst[520], a3 + 65, 0x190u);
                              v256 = a3[116];
                              *(_QWORD *)&__dst[920] = a3[115];
                              *(_QWORD *)&__dst[928] = v256;
                              *(_QWORD *)&__dst[936] = a3[117];
                              v343[67] = a3[117];
                              v257 = a3[115];
                              v343[66] = a3[116];
                              v343[65] = v257;
                              memcpy(v343, a3, 0x208u);
                              LOBYTE(v343[96]) = 0;
                              tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::haf6373a5bb4e20dc(&__dst[520]);
                              return 1;
                            }
LABEL_478:
                            if ( (_BYTE)v431
                              && !memcmp(
                                    v6,
                                    "configure_auto_switchset_api_proxy_configtest_api_proxy_configdetect_api_proxy_configget_usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update",
                                    v7) )
                            {
                              memcpy(v343, a3, 0x208u);
                              memcpy(&v343[65], a3 + 65, 0x190u);
                              v280 = a3[116];
                              v343[115] = a3[115];
                              v343[116] = v280;
                              v343[117] = a3[117];
                              *(_QWORD *)&__dst[536] = a3[117];
                              v281 = a3[115];
                              *(_QWORD *)&__dst[528] = a3[116];
                              *(_QWORD *)&__dst[520] = v281;
                              memcpy(__dst, a3, 0x208u);
                              __dst[4200] = 0;
                              tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::hce3a48110e8188cc(&v343[65]);
                              return 1;
                            }
                            if ( (_BYTE)v436
                              && !memcmp(
                                    v6,
                                    "set_api_proxy_configtest_api_proxy_configdetect_api_proxy_configget_usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update",
                                    v7) )
                            {
                              memcpy(__dst, a3, 0x208u);
                              memcpy(&__dst[520], a3 + 65, 0x190u);
                              v287 = a3[116];
                              *(_QWORD *)&__dst[920] = a3[115];
                              *(_QWORD *)&__dst[928] = v287;
                              *(_QWORD *)&__dst[936] = a3[117];
                              codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h221b919ffd19240a(__dst);
                              return 1;
                            }
                            if ( (_BYTE)v431
                              && !memcmp(
                                    v6,
                                    "test_api_proxy_configdetect_api_proxy_configget_usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update",
                                    v7) )
                            {
                              memcpy(v343, a3, 0x208u);
                              memcpy(&v343[65], a3 + 65, 0x190u);
                              v288 = a3[116];
                              v343[115] = a3[115];
                              v343[116] = v288;
                              v343[117] = a3[117];
                              *(_QWORD *)&__dst[536] = a3[117];
                              v289 = a3[115];
                              *(_QWORD *)&__dst[528] = a3[116];
                              *(_QWORD *)&__dst[520] = v289;
                              memcpy(__dst, a3, 0x208u);
                              __dst[1128] = 0;
                              tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::hbd78248bc7e67b07(&v343[65]);
                              return 1;
                            }
                            if ( (_BYTE)v425
                              && !memcmp(
                                    v6,
                                    "detect_api_proxy_configget_usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update",
                                    v7) )
                            {
                              memcpy(v343, a3, 0x208u);
                              memcpy(&v343[65], a3 + 65, 0x190u);
                              v291 = a3[116];
                              v343[115] = a3[115];
                              v343[116] = v291;
                              v343[117] = a3[117];
                              *(_QWORD *)&__dst[536] = a3[117];
                              v292 = a3[115];
                              *(_QWORD *)&__dst[528] = a3[116];
                              *(_QWORD *)&__dst[520] = v292;
                              memcpy(__dst, a3, 0x208u);
                              __dst[1056] = 0;
                              tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h8085cee53b5d4698(&v343[65]);
                              return 1;
                            }
                            if ( (_BYTE)v21 )
                            {
                              if ( !memcmp(
                                      v6,
                                      "get_usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update",
                                      v7) )
                              {
                                memcpy(__dst, a3, 0x208u);
                                memcpy(&__dst[520], a3 + 65, 0x190u);
                                v294 = a3[116];
                                *(_QWORD *)&__dst[920] = a3[115];
                                *(_QWORD *)&__dst[928] = v294;
                                *(_QWORD *)&__dst[936] = a3[117];
                                codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3451fe53d03d24e1(__dst);
                                return 1;
                              }
                              if ( !memcmp(
                                      v6,
                                      "set_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update",
                                      v7) )
                              {
                                memcpy(__dst, a3, 0x208u);
                                memcpy(&__dst[520], a3 + 65, 0x190u);
                                v306 = a3[116];
                                *(_QWORD *)&__dst[920] = a3[115];
                                *(_QWORD *)&__dst[928] = v306;
                                *(_QWORD *)&__dst[936] = a3[117];
                                codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfe0a9f798f4393c2(__dst);
                                return 1;
                              }
                            }
                            if ( v7 == 8 && *v6 == 0x65736F6E67616964LL )
                            {
                              memcpy(v343, a3, 0x208u);
                              memcpy(&v343[65], a3 + 65, 0x190u);
                              v303 = a3[116];
                              v343[115] = a3[115];
                              v343[116] = v303;
                              v343[117] = a3[117];
                              *(_QWORD *)&__dst[536] = a3[117];
                              v304 = a3[115];
                              *(_QWORD *)&__dst[528] = a3[116];
                              *(_QWORD *)&__dst[520] = v304;
                              memcpy(__dst, a3, 0x208u);
                              __dst[1056] = 0;
                              tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::he8055fd83dc5c358(&v343[65]);
                              return 1;
                            }
                            v433 = v21;
                            if ( (_BYTE)v429 )
                            {
                              v269 = _mm_or_si128(
                                       _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679140),
                                       _mm_xor_si128(
                                         _mm_loadu_si128((const __m128i *)((char *)v6 + 11)),
                                         (__m128i)xmmword_101679130));
                              if ( _mm_testz_si128(v269, v269) )
                              {
                                memcpy(__dst, a3, 0x208u);
                                memcpy(&__dst[520], a3 + 65, 0x190u);
                                v307 = a3[116];
                                *(_QWORD *)&__dst[920] = a3[115];
                                *(_QWORD *)&__dst[928] = v307;
                                *(_QWORD *)&__dst[936] = a3[117];
                                codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1d4446d442326244(__dst);
                                return 1;
                              }
                              v270 = _mm_or_si128(
                                       _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679160),
                                       _mm_xor_si128(
                                         _mm_loadu_si128((const __m128i *)((char *)v6 + 11)),
                                         (__m128i)xmmword_101679150));
                              if ( _mm_testz_si128(v270, v270) )
                              {
                                memcpy(__dst, a3, 0x208u);
                                memcpy(&__dst[520], a3 + 65, 0x190u);
                                v317 = a3[116];
                                *(_QWORD *)&__dst[920] = a3[115];
                                *(_QWORD *)&__dst[928] = v317;
                                *(_QWORD *)&__dst[936] = a3[117];
                                codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h060248318f005985(__dst);
                                return 1;
                              }
                            }
                            if ( (_BYTE)v436
                              && !memcmp(
                                    v6,
                                    "load_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switch",
                                    v7) )
                            {
                              memcpy(__dst, a3, 0x208u);
                              memcpy(&__dst[520], a3 + 65, 0x190u);
                              v314 = a3[116];
                              *(_QWORD *)&__dst[920] = a3[115];
                              *(_QWORD *)&__dst[928] = v314;
                              *(_QWORD *)&__dst[936] = a3[117];
                              codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf8545171ba55ebc3(__dst);
                              return 1;
                            }
                            if ( (_BYTE)v437 )
                            {
                              v271 = _mm_or_si128(
                                       _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1016791B0),
                                       _mm_xor_si128(
                                         _mm_loadl_epi64((const __m128i *)v6 + 1),
                                         (__m128i)xmmword_1016791A0));
                              if ( _mm_testz_si128(v271, v271) )
                              {
                                memcpy(__dst, a3, 0x208u);
                                memcpy(&__dst[520], a3 + 65, 0x190u);
                                v272 = a3[116];
                                *(_QWORD *)&__dst[920] = a3[115];
                                *(_QWORD *)&__dst[928] = v272;
                                *(_QWORD *)&__dst[936] = a3[117];
                                codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc1ea7e752371d179(__dst);
                                return 1;
                              }
                            }
                            else
                            {
                              if ( !(_BYTE)v429 )
                              {
                                if ( v7 == 9 )
                                {
                                  v60 = 1;
                                  if ( !(*v6 ^ 0x7461705F6E65706FLL | *((unsigned __int8 *)v6 + 8) ^ 0x68LL) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v342 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v342;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1153927551ed0888(__dst);
                                    return 1;
                                  }
                                }
                                else
                                {
                                  if ( v7 != 45 )
                                  {
                                    v429 = 0;
                                    goto LABEL_619;
                                  }
                                  if ( !memcmp(
                                          v6,
                                          "confirm_pending_auto_switch_and_restart_codexopen_pathget_device_idget_or_crea"
                                          "te_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_"
                                          "grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_info",
                                          0x2Du) )
                                  {
                                    memcpy(v343, a3, 0x208u);
                                    memcpy(&v343[65], a3 + 65, 0x190u);
                                    v340 = a3[116];
                                    v343[115] = a3[115];
                                    v343[116] = v340;
                                    v343[117] = a3[117];
                                    *(_QWORD *)&__dst[536] = a3[117];
                                    v341 = a3[115];
                                    *(_QWORD *)&__dst[528] = a3[116];
                                    *(_QWORD *)&__dst[520] = v341;
                                    memcpy(__dst, a3, 0x208u);
                                    __dst[1536] = 0;
                                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::hc6adbe3dafc72ad0(&v343[65]);
                                    return 1;
                                  }
                                  v60 = 0;
                                }
                                if ( !(_BYTE)v416 )
                                {
                                  v437 = 0;
                                  v417 = 0;
                                  if ( (_BYTE)v438 )
                                  {
LABEL_636:
                                    v337 = _mm_or_si128(
                                             _mm_xor_si128(
                                               _mm_loadu_si128((const __m128i *)v6),
                                               (__m128i)xmmword_1016791D0),
                                             _mm_xor_si128(
                                               _mm_loadu_si128((const __m128i *)((char *)v6 + 13)),
                                               (__m128i)xmmword_1016791C0));
                                    if ( _mm_testz_si128(v337, v337) )
                                    {
                                      memcpy(__dst, a3, 0x208u);
                                      memcpy(&__dst[520], a3 + 65, 0x190u);
                                      v338 = a3[116];
                                      *(_QWORD *)&__dst[920] = a3[115];
                                      *(_QWORD *)&__dst[928] = v338;
                                      *(_QWORD *)&__dst[936] = a3[117];
                                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha9efd9790fb78180(__dst);
                                      return 1;
                                    }
                                    goto LABEL_89;
                                  }
                                  v417 = 0;
LABEL_89:
                                  if ( v7 == 30 )
                                  {
                                    v61 = _mm_or_si128(
                                            _mm_xor_si128(
                                              _mm_loadu_si128((const __m128i *)v6),
                                              (__m128i)xmmword_101679210),
                                            _mm_xor_si128(
                                              _mm_loadu_si128((const __m128i *)((char *)v6 + 14)),
                                              (__m128i)xmmword_101679200));
                                    if ( _mm_testz_si128(v61, v61) )
                                    {
                                      memcpy(__dst, a3, 0x208u);
                                      memcpy(&__dst[520], a3 + 65, 0x190u);
                                      v238 = a3[116];
                                      *(_QWORD *)&__dst[920] = a3[115];
                                      *(_QWORD *)&__dst[928] = v238;
                                      *(_QWORD *)&__dst[936] = a3[117];
                                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h16f42ba3555d5e9d(__dst);
                                      return 1;
                                    }
                                  }
                                  if ( v22 && !memcmp(v6, "write_client_debug_log", v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v242 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v242;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbe847f60890f2bb4(__dst);
                                    return 1;
                                  }
                                  if ( (_BYTE)v436
                                    && !memcmp(
                                          v6,
                                          "load_usage_analyticsload_quota_historyload_session_analyticsload_token_analytics",
                                          v7) )
                                  {
                                    memcpy(v343, a3, 0x208u);
                                    memcpy(&v343[65], a3 + 65, 0x190u);
                                    v249 = a3[116];
                                    v343[115] = a3[115];
                                    v343[116] = v249;
                                    v343[117] = a3[117];
                                    *(_QWORD *)&__dst[536] = a3[117];
                                    v250 = a3[115];
                                    *(_QWORD *)&__dst[528] = a3[116];
                                    *(_QWORD *)&__dst[520] = v250;
                                    memcpy(__dst, a3, 0x208u);
                                    __dst[2904] = 0;
                                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h3adc41bfc4a5ecbf(&v343[65]);
                                    return 1;
                                  }
                                  if ( (_BYTE)v432
                                    && !memcmp(v6, "load_quota_historyload_session_analyticsload_token_analytics", v7) )
                                  {
                                    memcpy(v343, a3, 0x208u);
                                    memcpy(&v343[65], a3 + 65, 0x190u);
                                    v252 = a3[116];
                                    v343[115] = a3[115];
                                    v343[116] = v252;
                                    v343[117] = a3[117];
                                    *(_QWORD *)&__dst[536] = a3[117];
                                    v253 = a3[115];
                                    *(_QWORD *)&__dst[528] = a3[116];
                                    *(_QWORD *)&__dst[520] = v253;
                                    memcpy(__dst, a3, 0x208u);
                                    __dst[3120] = 0;
                                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h3f3f5ab1a8933563(&v343[65]);
                                    return 1;
                                  }
                                  if ( v22 && !memcmp(v6, "load_session_analyticsload_token_analytics", v7) )
                                  {
                                    memcpy(v343, a3, 0x208u);
                                    memcpy(&v343[65], a3 + 65, 0x190u);
                                    v259 = a3[116];
                                    v343[115] = a3[115];
                                    v343[116] = v259;
                                    v343[117] = a3[117];
                                    *(_QWORD *)&__dst[536] = a3[117];
                                    v260 = a3[115];
                                    *(_QWORD *)&__dst[528] = a3[116];
                                    *(_QWORD *)&__dst[520] = v260;
                                    memcpy(__dst, a3, 0x208u);
                                    __dst[3048] = 0;
                                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h73bf4eccbf7366eb(&v343[65]);
                                    return 1;
                                  }
                                  if ( (_BYTE)v436 && !memcmp(v6, "load_token_analytics", v7) )
                                  {
                                    memcpy(v343, a3, 0x208u);
                                    memcpy(&v343[65], a3 + 65, 0x190u);
                                    v267 = a3[116];
                                    v343[115] = a3[115];
                                    v343[116] = v267;
                                    v343[117] = a3[117];
                                    *(_QWORD *)&__dst[536] = a3[117];
                                    v268 = a3[115];
                                    *(_QWORD *)&__dst[528] = a3[116];
                                    *(_QWORD *)&__dst[520] = v268;
                                    memcpy(__dst, a3, 0x208u);
                                    __dst[3048] = 0;
                                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h72c0dc8df4accd39(&v343[65]);
                                    return 1;
                                  }
                                  if ( (_BYTE)v431
                                    && !memcmp(
                                          v6,
                                          "load_change_analyticshas_notchget_hotspot_enabledset_hotspot_enabledfocus_main"
                                          "_windowhotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete"
                                          "_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provi"
                                          "der_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream",
                                          v7) )
                                  {
                                    memcpy(v343, a3, 0x208u);
                                    memcpy(&v343[65], a3 + 65, 0x190u);
                                    v276 = a3[116];
                                    v343[115] = a3[115];
                                    v343[116] = v276;
                                    v343[117] = a3[117];
                                    *(_QWORD *)&__dst[536] = a3[117];
                                    v277 = a3[115];
                                    *(_QWORD *)&__dst[528] = a3[116];
                                    *(_QWORD *)&__dst[520] = v277;
                                    memcpy(__dst, a3, 0x208u);
                                    __dst[3048] = 0;
                                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::ha2b46643fd528d90(&v343[65]);
                                    return 1;
                                  }
                                  if ( v60
                                    && !memcmp(
                                          v6,
                                          "has_notchget_hotspot_enabledset_hotspot_enabledfocus_main_windowhotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream",
                                          v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v279 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v279;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h82b74d0244e9aebe(__dst);
                                    return 1;
                                  }
                                  if ( (_BYTE)v430
                                    && !memcmp(
                                          v6,
                                          "focus_main_windowhotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream",
                                          v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v285 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v285;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h8fa0eafe71ced944(__dst);
                                    return 1;
                                  }
                                  if ( (_BYTE)v434 )
                                  {
                                    if ( !memcmp(
                                            v6,
                                            "load_relay_stateget_relay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister",
                                            v7) )
                                    {
                                      memcpy(__dst, a3, 0x208u);
                                      memcpy(&__dst[520], a3 + 65, 0x190u);
                                      v62 = a3[116];
                                      *(_QWORD *)&__dst[920] = a3[115];
                                      *(_QWORD *)&__dst[928] = v62;
                                      *(_QWORD *)&__dst[936] = a3[117];
                                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6cdaa9f58e8fedfa(__dst);
                                      return 1;
                                    }
                                  }
                                  else if ( v7 == 31 )
                                  {
                                    v261 = _mm_or_si128(
                                             _mm_xor_si128(
                                               _mm_loadu_si128((const __m128i *)v6),
                                               (__m128i)xmmword_101679230),
                                             _mm_xor_si128(
                                               _mm_loadu_si128((const __m128i *)((char *)v6 + 15)),
                                               (__m128i)xmmword_101679220));
                                    if ( _mm_testz_si128(v261, v261) )
                                    {
                                      memcpy(__dst, a3, 0x208u);
                                      memcpy(&__dst[520], a3 + 65, 0x190u);
                                      v299 = a3[116];
                                      *(_QWORD *)&__dst[920] = a3[115];
                                      *(_QWORD *)&__dst[928] = v299;
                                      *(_QWORD *)&__dst[936] = a3[117];
                                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h56be5d1b79aec59f(__dst);
                                      return 1;
                                    }
                                  }
                                  if ( (_BYTE)v431 )
                                  {
                                    if ( !memcmp(
                                            v6,
                                            "upsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream",
                                            v7) )
                                    {
                                      memcpy(__dst, a3, 0x208u);
                                      memcpy(&__dst[520], a3 + 65, 0x190u);
                                      v293 = a3[116];
                                      *(_QWORD *)&__dst[920] = a3[115];
                                      *(_QWORD *)&__dst[928] = v293;
                                      *(_QWORD *)&__dst[936] = a3[117];
                                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb24eff03e6c8864c(__dst);
                                      return 1;
                                    }
                                    if ( !memcmp(
                                            v6,
                                            "delete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream",
                                            v7) )
                                    {
                                      memcpy(__dst, a3, 0x208u);
                                      memcpy(&__dst[520], a3 + 65, 0x190u);
                                      v302 = a3[116];
                                      *(_QWORD *)&__dst[920] = a3[115];
                                      *(_QWORD *)&__dst[928] = v302;
                                      *(_QWORD *)&__dst[936] = a3[117];
                                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfb62142ab5e49293(__dst);
                                      return 1;
                                    }
                                  }
                                  if ( (_BYTE)v425
                                    && !memcmp(
                                          v6,
                                          "activate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream",
                                          v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v300 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v300;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbf44b48f4cd63aa6(__dst);
                                    return 1;
                                  }
                                  if ( (_BYTE)v417
                                    && !memcmp(
                                          v6,
                                          "deactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream",
                                          v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v305 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v305;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h882e8643016b8d62(__dst);
                                    return 1;
                                  }
                                  if ( (_BYTE)v433
                                    && !memcmp(
                                          v6,
                                          "set_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream",
                                          v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v308 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v308;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9b27172283fd0b48(__dst);
                                    return 1;
                                  }
                                  if ( (_BYTE)v425
                                    && !memcmp(
                                          v6,
                                          "reorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream",
                                          v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v310 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v310;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb8941c363a110829(__dst);
                                    return 1;
                                  }
                                  if ( (_BYTE)v433
                                    && !memcmp(v6, "test_relay_provider_streamtest_relay_draft_stream", v7) )
                                  {
                                    memcpy(v343, a3, 0x208u);
                                    memcpy(&v343[65], a3 + 65, 0x190u);
                                    v315 = a3[116];
                                    v343[115] = a3[115];
                                    v343[116] = v315;
                                    v343[117] = a3[117];
                                    *(_QWORD *)&__dst[536] = a3[117];
                                    v316 = a3[115];
                                    *(_QWORD *)&__dst[528] = a3[116];
                                    *(_QWORD *)&__dst[520] = v316;
                                    memcpy(__dst, a3, 0x208u);
                                    v348 = 0;
                                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h580da33864c396be(&v343[65]);
                                    return 1;
                                  }
                                  if ( (_BYTE)v425 && !memcmp(v6, "test_relay_draft_stream", v7) )
                                  {
                                    memcpy(v343, a3, 0x208u);
                                    memcpy(&v343[65], a3 + 65, 0x190u);
                                    v319 = a3[116];
                                    v343[115] = a3[115];
                                    v343[116] = v319;
                                    v343[117] = a3[117];
                                    *(_QWORD *)&__dst[536] = a3[117];
                                    v320 = a3[115];
                                    *(_QWORD *)&__dst[528] = a3[116];
                                    *(_QWORD *)&__dst[520] = v320;
                                    memcpy(__dst, a3, 0x208u);
                                    v355 = 0;
                                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h7ded896fba2f8b12(&v343[65]);
                                    return 1;
                                  }
                                  if ( (_BYTE)v437 )
                                  {
                                    v262 = _mm_or_si128(
                                             _mm_xor_si128(
                                               _mm_loadu_si128((const __m128i *)v6),
                                               (__m128i)xmmword_101679250),
                                             _mm_xor_si128(
                                               _mm_loadl_epi64((const __m128i *)v6 + 1),
                                               (__m128i)xmmword_101679240));
                                    if ( _mm_testz_si128(v262, v262) )
                                    {
                                      memcpy(v343, a3, 0x208u);
                                      memcpy(&v343[65], a3 + 65, 0x190u);
                                      v323 = a3[116];
                                      v343[115] = a3[115];
                                      v343[116] = v323;
                                      v343[117] = a3[117];
                                      *(_QWORD *)&__dst[536] = a3[117];
                                      v324 = a3[115];
                                      *(_QWORD *)&__dst[528] = a3[116];
                                      *(_QWORD *)&__dst[520] = v324;
                                      memcpy(__dst, a3, 0x208u);
                                      __dst[4752] = 0;
                                      tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h9c61fd1418055a6f(&v343[65]);
                                      return 1;
                                    }
                                  }
                                  if ( (_BYTE)v436 && !memcmp(v6, "reveal_relay_api_key", v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v325 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v325;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbc8f0e3f99630224(__dst);
                                    return 1;
                                  }
                                  if ( (_BYTE)v437 )
                                  {
                                    v263 = _mm_or_si128(
                                             _mm_xor_si128(
                                               _mm_loadu_si128((const __m128i *)v6),
                                               (__m128i)xmmword_101679270),
                                             _mm_xor_si128(
                                               _mm_loadl_epi64((const __m128i *)v6 + 1),
                                               (__m128i)xmmword_101679260));
                                    if ( _mm_testz_si128(v263, v263) )
                                    {
                                      memcpy(v343, a3, 0x208u);
                                      memcpy(&v343[65], a3 + 65, 0x190u);
                                      v264 = a3[116];
                                      v343[115] = a3[115];
                                      v343[116] = v264;
                                      v343[117] = a3[117];
                                      *(_QWORD *)&__dst[536] = a3[117];
                                      v265 = a3[115];
                                      *(_QWORD *)&__dst[528] = a3[116];
                                      *(_QWORD *)&__dst[520] = v265;
                                      memcpy(__dst, a3, 0x208u);
                                      v347 = 0;
                                      tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::ha10ee2639353385d(&v343[65]);
                                      return 1;
                                    }
                                  }
                                  else if ( (_BYTE)v434
                                         && !memcmp(
                                               v6,
                                               "get_relay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister",
                                               v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v339 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v339;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h56213c912c3fb06f(__dst);
                                    return 1;
                                  }
                                  if ( v22 && !memcmp(v6, "get_relay_proxy_status", v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v333 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v333;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h449f167cab6698c1(__dst);
                                    return 1;
                                  }
                                  if ( (_BYTE)v437 )
                                  {
                                    v311 = _mm_or_si128(
                                             _mm_xor_si128(
                                               _mm_loadu_si128((const __m128i *)v6),
                                               (__m128i)xmmword_101679290),
                                             _mm_xor_si128(
                                               _mm_loadl_epi64((const __m128i *)v6 + 1),
                                               (__m128i)xmmword_101679280));
                                    if ( _mm_testz_si128(v311, v311) )
                                    {
                                      memcpy(v343, a3, 0x208u);
                                      memcpy(&v343[65], a3 + 65, 0x190u);
                                      v335 = a3[116];
                                      v343[115] = a3[115];
                                      v343[116] = v335;
                                      v343[117] = a3[117];
                                      *(_QWORD *)&__dst[536] = a3[117];
                                      v336 = a3[115];
                                      *(_QWORD *)&__dst[528] = a3[116];
                                      *(_QWORD *)&__dst[520] = v336;
                                      memcpy(__dst, a3, 0x208u);
                                      __dst[1560] = 0;
                                      tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h387580324a9edc56(&v343[65]);
                                      return 1;
                                    }
                                  }
                                  if ( (_BYTE)v417 )
                                  {
                                    v220 = memcmp(
                                             v6,
                                             "quit_after_closing_routerquit_keeping_routerset_codex_router_no_account_mod"
                                             "ediagnose_codex_routerrun_codex_router_diagnosticsfix_codex_router_issueexp"
                                             "ort_relay_configimport_relay_configparse_aimami_deeplinkappkeyCodekeyKindst"
                                             "ylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUr"
                                             "lprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriess"
                                             "ecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppress"
                                             "edincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputordered"
                                             "IdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCo"
                                             "detoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptionc"
                                             "ontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread",
                                             v7) == 0;
                                    v68 = v435;
                                    v69 = v431;
                                    if ( v220 )
                                    {
                                      memcpy(v343, a3, 0x208u);
                                      memcpy(&v343[65], a3 + 65, 0x190u);
                                      v312 = a3[116];
                                      v343[115] = a3[115];
                                      v343[116] = v312;
                                      v343[117] = a3[117];
                                      *(_QWORD *)&__dst[536] = a3[117];
                                      v313 = a3[115];
                                      *(_QWORD *)&__dst[528] = a3[116];
                                      *(_QWORD *)&__dst[520] = v313;
                                      memcpy(__dst, a3, 0x208u);
                                      __dst[1560] = 0;
                                      tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::hc4c9f3e56f827960(&v343[65]);
                                      return 1;
                                    }
                                  }
                                  else
                                  {
                                    v68 = v435;
                                    v69 = v431;
                                  }
LABEL_118:
                                  LODWORD(v431) = v69;
                                  if ( (_BYTE)v69
                                    && !memcmp(
                                          v6,
                                          "diagnose_codex_routerrun_codex_router_diagnosticsfix_codex_router_issueexport_relay_configimport_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread",
                                          v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v214 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v214;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h771ae226bae7df41(__dst);
                                    return 1;
                                  }
                                  if ( v68
                                    && !memcmp(
                                          v6,
                                          "run_codex_router_diagnosticsfix_codex_router_issueexport_relay_configimport_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread",
                                          v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v228 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v228;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    v343[67] = a3[117];
                                    v229 = a3[115];
                                    v343[66] = a3[116];
                                    v343[65] = v229;
                                    memcpy(v343, a3, 0x208u);
                                    LOBYTE(v343[81]) = 0;
                                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::he6e6bdd7da84f4e0(&__dst[520]);
                                    return 1;
                                  }
                                  if ( v22
                                    && !memcmp(
                                          v6,
                                          "fix_codex_router_issueexport_relay_configimport_relay_configparse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread",
                                          v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v231 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v231;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    v343[67] = a3[117];
                                    v232 = a3[115];
                                    v343[66] = a3[116];
                                    v343[65] = v232;
                                    memcpy(v343, a3, 0x208u);
                                    LOBYTE(v343[90]) = 0;
                                    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h05f3d250bb403c85(&__dst[520]);
                                    return 1;
                                  }
                                  if ( (_BYTE)v431
                                    && !memcmp(
                                          v6,
                                          "parse_aimami_deeplinkappkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread",
                                          v7) )
                                  {
                                    memcpy(__dst, a3, 0x208u);
                                    memcpy(&__dst[520], a3 + 65, 0x190u);
                                    v70 = a3[116];
                                    *(_QWORD *)&__dst[920] = a3[115];
                                    *(_QWORD *)&__dst[928] = v70;
                                    *(_QWORD *)&__dst[936] = a3[117];
                                    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfaa5d6d032e21365(__dst);
                                    return 1;
                                  }
                                  goto LABEL_111;
                                }
                                v429 = 0;
                                v437 = 0;
                                goto LABEL_625;
                              }
                              v295 = _mm_or_si128(
                                       _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679180),
                                       _mm_xor_si128(
                                         _mm_loadu_si128((const __m128i *)((char *)v6 + 11)),
                                         (__m128i)xmmword_101679170));
                              if ( _mm_testz_si128(v295, v295) )
                              {
                                memcpy(__dst, a3, 0x208u);
                                memcpy(&__dst[520], a3 + 65, 0x190u);
                                v326 = a3[116];
                                *(_QWORD *)&__dst[920] = a3[115];
                                *(_QWORD *)&__dst[928] = v326;
                                *(_QWORD *)&__dst[936] = a3[117];
                                codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h75855c2cf20e7ba7(__dst);
                                return 1;
                              }
                              v296 = _mm_or_si128(
                                       _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679190),
                                       _mm_xor_si128(
                                         _mm_unpacklo_epi64(
                                           (__m128i)0x7475615F676E6964uLL,
                                           (__m128i)0x6863746977735F6FuLL),
                                         _mm_loadu_si128((const __m128i *)((char *)v6 + 11))));
                              v429 = 2004049665;
                              if ( _mm_testz_si128(v296, v296) )
                              {
                                memcpy(v343, a3, 0x208u);
                                memcpy(&v343[65], a3 + 65, 0x190u);
                                v297 = a3[116];
                                v343[115] = a3[115];
                                v343[116] = v297;
                                v343[117] = a3[117];
                                *(_QWORD *)&__dst[536] = a3[117];
                                v298 = a3[115];
                                *(_QWORD *)&__dst[528] = a3[116];
                                *(_QWORD *)&__dst[520] = v298;
                                memcpy(__dst, a3, 0x208u);
                                __dst[1536] = 0;
                                tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h83f2188a04e8cac5(&v343[65]);
                                return 1;
                              }
                            }
LABEL_619:
                            if ( v7 == 34 )
                            {
                              if ( !memcmp(
                                      v6,
                                      "get_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_info",
                                      0x22u) )
                              {
                                memcpy(__dst, a3, 0x208u);
                                memcpy(&__dst[520], a3 + 65, 0x190u);
                                v334 = a3[116];
                                *(_QWORD *)&__dst[920] = a3[115];
                                *(_QWORD *)&__dst[928] = v334;
                                *(_QWORD *)&__dst[936] = a3[117];
                                codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h98c07b0a1b33e388(__dst);
                                return 1;
                              }
                            }
                            else if ( v7 == 36
                                   && !memcmp(
                                         v6,
                                         "import_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_info",
                                         0x24u) )
                            {
                              memcpy(__dst, a3, 0x208u);
                              memcpy(&__dst[520], a3 + 65, 0x190u);
                              v327 = a3[116];
                              *(_QWORD *)&__dst[920] = a3[115];
                              *(_QWORD *)&__dst[928] = v327;
                              *(_QWORD *)&__dst[936] = a3[117];
                              codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h2eb5fbcba01eff0f(__dst);
                              return 1;
                            }
                            v60 = 0;
                            v417 = 0;
                            if ( !(_BYTE)v416 )
                            {
LABEL_626:
                              if ( (_BYTE)v429 )
                              {
                                v330 = _mm_or_si128(
                                         _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1016791F0),
                                         _mm_xor_si128(
                                           _mm_loadu_si128((const __m128i *)((char *)v6 + 11)),
                                           (__m128i)xmmword_1016791E0));
                                if ( _mm_testz_si128(v330, v330) )
                                {
                                  memcpy(__dst, a3, 0x208u);
                                  memcpy(&__dst[520], a3 + 65, 0x190u);
                                  v331 = a3[116];
                                  *(_QWORD *)&__dst[920] = a3[115];
                                  *(_QWORD *)&__dst[928] = v331;
                                  *(_QWORD *)&__dst[936] = a3[117];
                                  codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h4c04873e1f4d554b(__dst);
                                  return 1;
                                }
                                goto LABEL_89;
                              }
                              if ( (_BYTE)v438 )
                                goto LABEL_636;
                              goto LABEL_89;
                            }
LABEL_625:
                            v328 = memcmp(
                                     v6,
                                     "get_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_info",
                                     v7);
                            LOBYTE(v329) = 1;
                            v417 = v329;
                            if ( !v328 )
                            {
                              memcpy(__dst, a3, 0x208u);
                              memcpy(&__dst[520], a3 + 65, 0x190u);
                              v332 = a3[116];
                              *(_QWORD *)&__dst[920] = a3[115];
                              *(_QWORD *)&__dst[928] = v332;
                              *(_QWORD *)&__dst[936] = a3[117];
                              codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1c2302f2051c5500(__dst);
                              return 1;
                            }
                            goto LABEL_626;
                          }
                          if ( !(_BYTE)v434 )
                          {
                            v437 = 0;
                            v434 = 0;
                            goto LABEL_478;
                          }
                          if ( !memcmp(
                                  v6,
                                  "rebuild_registryforce_kill_codexget_image_compatset_image_compatload_relay_stateget_re"
                                  "lay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister",
                                  v7) )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v290 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v290;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h55ea7778f499d8db(__dst);
                            return 1;
                          }
                          if ( !memcmp(
                                  v6,
                                  "force_kill_codexget_image_compatset_image_compatload_relay_stateget_relay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister",
                                  v7) )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v301 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v301;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3d457f17f44e33e5(__dst);
                            return 1;
                          }
                          if ( !memcmp(
                                  v6,
                                  "get_image_compatset_image_compatload_relay_stateget_relay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister",
                                  v7) )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v309 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v309;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9e44340bea33c43c(__dst);
                            return 1;
                          }
                          v258 = memcmp(
                                   v6,
                                   "set_image_compatload_relay_stateget_relay_activeholdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister",
                                   v7);
                          if ( !v258 )
                          {
                            memcpy(__dst, a3, 0x208u);
                            memcpy(&__dst[520], a3 + 65, 0x190u);
                            v318 = a3[116];
                            *(_QWORD *)&__dst[920] = a3[115];
                            *(_QWORD *)&__dst[928] = v318;
                            *(_QWORD *)&__dst[936] = a3[117];
                            codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h17d833c58a6941c9(__dst);
                            return 1;
                          }
                          LOBYTE(v258) = 1;
                          v434 = v258;
                        }
                        v437 = 0;
                        goto LABEL_478;
                      }
                      v21 = v433;
LABEL_288:
                      LODWORD(v5) = memcmp(
                                      v6,
                                      "cancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                      v7);
                      LOBYTE(v178) = 1;
                      v435 = v178;
                      if ( !(_DWORD)v5 )
                      {
                        memcpy(__dst, a3, 0x208u);
                        memcpy(&__dst[520], a3 + 65, 0x190u);
                        v179 = a3[116];
                        *(_QWORD *)&__dst[920] = a3[115];
                        *(_QWORD *)&__dst[928] = v179;
                        *(_QWORD *)&__dst[936] = a3[117];
                        codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb14d9df424ffc168(__dst);
                        return 1;
                      }
                      goto LABEL_292;
                    }
LABEL_279:
                    if ( !memcmp(
                            v6,
                            "load_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                            v7) )
                    {
                      memcpy(__dst, a3, 0x208u);
                      memcpy(&__dst[520], a3 + 65, 0x190u);
                      v180 = a3[116];
                      *(_QWORD *)&__dst[920] = a3[115];
                      *(_QWORD *)&__dst[928] = v180;
                      *(_QWORD *)&__dst[936] = a3[117];
                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h42f48967cd307268(__dst);
                      return 1;
                    }
                    if ( !memcmp(
                            v6,
                            "request_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                            v7) )
                    {
                      memcpy(__dst, a3, 0x208u);
                      memcpy(&__dst[520], a3 + 65, 0x190u);
                      v185 = a3[116];
                      *(_QWORD *)&__dst[920] = a3[115];
                      *(_QWORD *)&__dst[928] = v185;
                      *(_QWORD *)&__dst[936] = a3[117];
                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::he797e3c607ef449b(__dst);
                      return 1;
                    }
                    if ( !memcmp(
                            v6,
                            "set_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                            v7) )
                    {
                      memcpy(__dst, a3, 0x208u);
                      memcpy(&__dst[520], a3 + 65, 0x190u);
                      v197 = a3[116];
                      *(_QWORD *)&__dst[920] = a3[115];
                      *(_QWORD *)&__dst[928] = v197;
                      *(_QWORD *)&__dst[936] = a3[117];
                      codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb93708d9625fa176(__dst);
                      return 1;
                    }
                    LODWORD(v5) = memcmp(
                                    v6,
                                    "capture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready",
                                    v7);
                    LOBYTE(v174) = 1;
                    v416 = v174;
                    if ( !(_DWORD)v5 )
                    {
                      memcpy(v343, a3, 0x208u);
                      memcpy(&v343[65], a3 + 65, 0x190u);
                      v175 = a3[116];
                      v343[115] = a3[115];
                      v343[116] = v175;
                      v343[117] = a3[117];
                      *(_QWORD *)&__dst[536] = a3[117];
                      v176 = a3[115];
                      *(_QWORD *)&__dst[528] = a3[116];
                      *(_QWORD *)&__dst[520] = v176;
                      memcpy(__dst, a3, 0x208u);
                      __dst[1056] = 0;
                      tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::ha5580d1a9ee43c76(&v343[65]);
                      return 1;
                    }
                    goto LABEL_286;
                  }
                  memcpy(__dst, a3, 0x208u);
                  memcpy(&__dst[520], a3 + 65, 0x190u);
                  v147 = a3[116];
                  *(_QWORD *)&__dst[920] = a3[115];
                  *(_QWORD *)&__dst[928] = v147;
                  *(_QWORD *)&__dst[936] = a3[117];
                  memcpy(v343, a3, 0x208u);
                  memcpy(v359, a3 + 65, sizeof(v359));
                  v420 = a3[117];
                  v148 = a3[115];
                  v419 = a3[116];
                  v418 = v148;
                  v385[6] = 0;
                  v385[0] = "upsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready";
                  v385[1] = 23;
                  v149 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
                  v385[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
                  v385[3] = 4;
                  v385[4] = v343;
                  v385[5] = &v418;
                  LOBYTE(v149) = 1;
                  LODWORD(v438) = (_DWORD)v149;
                  v150 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(v343[64] + 16LL);
                  v151 = (__int64 *)v150;
                  if ( v150 )
                  {
                    v373 = (__int64 *)v150;
                    LOBYTE(v372) = 6;
                  }
                  else
                  {
                    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
                      &v372,
                      v385,
                      &v385[2]);
                    if ( (_BYTE)v372 != 6 )
                    {
                      v380[4] = v375;
                      v380[3] = v374;
                      v380[2] = v373;
                      v380[1] = v372;
                      memcpy(v385, &__dst[520], 0x168u);
                      v364[0] = *(_QWORD *)&__dst[880];
                      v364[1] = *(_QWORD *)&__dst[888];
                      v364[2] = *(_QWORD *)&__dst[896];
                      v380[0] = 1;
                      LODWORD(v438) = 0;
                      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                        v385,
                        v359[48],
                        v380,
                        v364,
                        LODWORD(v359[49]),
                        HIDWORD(v359[49]));
                      goto LABEL_537;
                    }
                    v151 = v373;
                  }
                  v385[6] = 0;
                  v385[0] = "upsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready";
                  v385[1] = 23;
                  v385[2] = "idsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                  v385[3] = 2;
                  v385[4] = v343;
                  v385[5] = &v418;
                  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(
                    &v365,
                    v385);
                  if ( (_BYTE)v365 == 6 )
                  {
                    v428 = v368;
                    v427 = v367;
                    v426 = v366;
                    v385[6] = 0;
                    v385[0] = "upsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready";
                    v385[1] = 23;
                    v385[2] = "sourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                    v385[3] = 6;
                    v385[4] = v343;
                    v385[5] = &v418;
                    v164 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(
                             &v392,
                             v385);
                    LOBYTE(v164) = (_BYTE)v392 == 6;
                    LODWORD(v438) = v164;
                    if ( (_BYTE)v392 == 6 )
                    {
                      v399 = v395;
                      v398 = v394;
                      v397 = v393;
                      v385[6] = 0;
                      v385[0] = "upsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready";
                      v385[1] = 23;
                      v385[2] = "replacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                      v385[3] = 11;
                      v385[4] = v343;
                      v385[5] = &v418;
                      v165 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(
                               &v421,
                               v385);
                      LOBYTE(v165) = (_BYTE)v421 == 6;
                      LODWORD(v438) = v165;
                      if ( (_BYTE)v421 == 6 )
                      {
                        v409 = v424;
                        v408 = v423;
                        v407 = v422;
                        v385[6] = 0;
                        v385[0] = "upsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready";
                        v385[1] = 23;
                        v385[2] = "kindsavetrueuuidemitshowhide";
                        v385[3] = 4;
                        v385[4] = v343;
                        v385[5] = &v418;
                        v166 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h792b58114f316804(
                                 &v400,
                                 v385);
                        LOBYTE(v166) = (_BYTE)v400 == 6;
                        LODWORD(v438) = v166;
                        if ( (_BYTE)v400 == 6 )
                        {
                          LOBYTE(v430) = BYTE1(v400);
                          v385[6] = 0;
                          v385[0] = "upsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready";
                          v385[1] = 23;
                          v385[2] = "appBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                          v385[3] = 11;
                          v385[4] = v343;
                          v385[5] = &v418;
                          v167 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(
                                   &v386,
                                   v385);
                          LOBYTE(v167) = (_BYTE)v386 == 6;
                          LODWORD(v438) = v167;
                          if ( (_BYTE)v386 == 6 )
                          {
                            v383 = v389;
                            v382 = (__int64 *)v388;
                            v381 = v387;
                            v385[6] = 0;
                            v385[0] = "upsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready";
                            v385[1] = 23;
                            v385[2] = "appNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                            v385[3] = 7;
                            v385[4] = v343;
                            v385[5] = &v418;
                            v168 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(
                                     &v410,
                                     v385);
                            LOBYTE(v168) = (_BYTE)v410 == 6;
                            LODWORD(v438) = v168;
                            if ( (_BYTE)v410 == 6 )
                            {
                              v378 = v413;
                              v377 = v412;
                              v376 = v411;
                              v385[6] = 0;
                              v385[0] = "upsert_voice_vocabularyremove_voice_vocabularyreplace_voice_vocabulary_kindremove_voice_vocabulary_app_scopeupsert_voice_vocabulary_app_scoperesolve_voice_vocabulary_app_infogenerate_voice_promptload_voice_llm_configsave_voice_llm_configtest_voice_llm_configload_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready";
                              v385[1] = 23;
                              v385[2] = "notesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
                              v385[3] = 5;
                              v385[4] = v343;
                              v385[5] = &v418;
                              _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(
                                v396,
                                v385);
                              if ( LOBYTE(v396[0]) == 6 )
                              {
                                v362 = v396[3];
                                v361 = v396[2];
                                v360 = v396[1];
                                codexmate_lib::commands::voice::upsert_voice_vocabulary::h28eb1215eec4fa97(
                                  (char *)v364,
                                  v151,
                                  &v426,
                                  &v397,
                                  &v407,
                                  (char)v430,
                                  &v381,
                                  &v376,
                                  &v360);
                                memcpy(v385, v359, sizeof(v385));
                                if ( v364[0] == 0x8000000000000000LL )
                                {
                                  _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::ha6ffbede19b53d18(
                                    v396,
                                    &v364[1]);
                                  v380[4] = v396[3];
                                  v380[3] = v396[2];
                                  v380[2] = v396[1];
                                  v380[1] = v396[0];
                                  v380[0] = 0x8000000000000000LL;
                                }
                                else
                                {
                                  memcpy(v380, v364, sizeof(v380));
                                }
                                tauri::ipc::InvokeResolver$LT$R$GT$::respond::h39cb40ba8866705f(v385, v380);
                                goto LABEL_537;
                              }
                              v380[4] = v396[3];
                              v380[3] = v396[2];
                              v380[2] = v396[1];
                              v380[1] = v396[0];
                              memcpy(v385, v359, 0x168u);
                              v364[0] = v359[45];
                              v364[1] = v359[46];
                              v364[2] = v359[47];
                              v380[0] = 1;
                              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                                v385,
                                v359[48],
                                v380,
                                v364,
                                LODWORD(v359[49]),
                                HIDWORD(v359[49]));
                              if ( v376 != 0x8000000000000000LL && v376 )
                                *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v377, v376, 1);
                            }
                            else
                            {
                              v380[4] = v413;
                              v380[3] = v412;
                              v380[2] = v411;
                              v380[1] = v410;
                              memcpy(v385, v359, 0x168u);
                              v364[0] = v359[45];
                              v364[1] = v359[46];
                              v364[2] = v359[47];
                              v380[0] = 1;
                              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                                v385,
                                v359[48],
                                v380,
                                v364,
                                LODWORD(v359[49]),
                                HIDWORD(v359[49]));
                            }
                            if ( v381 != 0x8000000000000000LL && v381 )
                              *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v382, v381, 1);
                          }
                          else
                          {
                            v380[4] = v389;
                            v380[3] = v388;
                            v380[2] = v387;
                            v380[1] = v386;
                            memcpy(v385, &__dst[520], 0x168u);
                            v364[0] = *(_QWORD *)&__dst[880];
                            v364[1] = *(_QWORD *)&__dst[888];
                            v364[2] = *(_QWORD *)&__dst[896];
                            v380[0] = 1;
                            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                              v385,
                              v359[48],
                              v380,
                              v364,
                              LODWORD(v359[49]),
                              HIDWORD(v359[49]));
                          }
                        }
                        else
                        {
                          v380[4] = v403;
                          v380[3] = v402;
                          v380[2] = v401;
                          v380[1] = v400;
                          memcpy(v385, &__dst[520], 0x168u);
                          v364[0] = *(_QWORD *)&__dst[880];
                          v364[1] = *(_QWORD *)&__dst[888];
                          v364[2] = *(_QWORD *)&__dst[896];
                          v380[0] = 1;
                          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                            v385,
                            v359[48],
                            v380,
                            v364,
                            LODWORD(v359[49]),
                            HIDWORD(v359[49]));
                        }
                        if ( v407 )
                          *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v408, v407, 1);
                      }
                      else
                      {
                        v380[4] = v424;
                        v380[3] = v423;
                        v380[2] = v422;
                        v380[1] = v421;
                        memcpy(v385, &__dst[520], 0x168u);
                        v364[0] = *(_QWORD *)&__dst[880];
                        v364[1] = *(_QWORD *)&__dst[888];
                        v364[2] = *(_QWORD *)&__dst[896];
                        v380[0] = 1;
                        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                          v385,
                          v359[48],
                          v380,
                          v364,
                          LODWORD(v359[49]),
                          HIDWORD(v359[49]));
                      }
                      if ( v397 )
                        *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v398, v397, 1);
                    }
                    else
                    {
                      v380[4] = v395;
                      v380[3] = v394;
                      v380[2] = v393;
                      v380[1] = v392;
                      memcpy(v385, &__dst[520], 0x168u);
                      v364[0] = *(_QWORD *)&__dst[880];
                      v364[1] = *(_QWORD *)&__dst[888];
                      v364[2] = *(_QWORD *)&__dst[896];
                      v380[0] = 1;
                      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                        v385,
                        v359[48],
                        v380,
                        v364,
                        LODWORD(v359[49]),
                        HIDWORD(v359[49]));
                    }
                    if ( v426 != 0x8000000000000000LL && v426 )
                      *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v427, v426, 1);
                    goto LABEL_537;
                  }
                  v380[4] = v368;
                  v380[3] = v367;
                  v380[2] = v366;
                  v380[1] = v365;
                  memcpy(v385, &__dst[520], 0x168u);
                  v364[0] = *(_QWORD *)&__dst[880];
                  v364[1] = *(_QWORD *)&__dst[888];
                  v364[2] = *(_QWORD *)&__dst[896];
                  v380[0] = 1;
                  LODWORD(v438) = 0;
                  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                    v385,
                    v359[48],
                    v380,
                    v364,
                    LODWORD(v359[49]),
                    HIDWORD(v359[49]));
LABEL_537:
                  if ( v418 == 0x8000000000000000LL )
                    goto LABEL_512;
                  v283 = v419;
                  for ( k = v420 + 1; k != 1; --k )
                  {
                    core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v283);
                    v283 += 96;
                  }
                  v144 = v418;
                  if ( !v418 )
                    goto LABEL_512;
                  v145 = v419;
                  goto LABEL_510;
                }
LABEL_208:
                v432 = 0;
                v436 = 0;
                goto LABEL_209;
              }
              LODWORD(v5) = *((unsigned __int16 *)v6 + 8);
              a1 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679080);
              v133 = _mm_or_si128(_mm_xor_si128(_mm_cvtsi32_si128(v5), (__m128i)xmmword_101679090), a1);
              if ( !_mm_testz_si128(v133, v133) )
              {
                v436 = 0;
                LOBYTE(v5) = 1;
                v432 = v5;
                goto LABEL_209;
              }
              v189 = a3[113];
              v343[67] = a3[117];
              v190 = a3[115];
              v343[66] = a3[116];
              v343[65] = v190;
              memcpy(v343, a3, 0x208u);
              *(_QWORD *)&__dst[376] = a3[112];
              v191 = a3[110];
              *(_QWORD *)&__dst[368] = a3[111];
              *(_QWORD *)&__dst[360] = v191;
              memcpy(&__dst[392], v343, 0xB40u);
              __dst[3272] = 0;
              memcpy(__dst, a3 + 65, 0x168u);
              *(_QWORD *)&__dst[384] = v189;
              v353 = a3[114];
              v354 = 0;
              v32 = tauri::async_runtime::spawn::h307579a246c8260c(__dst);
LABEL_331:
              v192 = v32;
              if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v32) )
                tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v192);
              return 1;
            }
            memcpy(__dst, a3, 0x208u);
            memcpy(&__dst[520], a3 + 65, 0x190u);
            v134 = a3[116];
            *(_QWORD *)&__dst[920] = a3[115];
            *(_QWORD *)&__dst[928] = v134;
            *(_QWORD *)&__dst[936] = a3[117];
            memcpy(v343, a3, 0x208u);
            memcpy(v359, a3 + 65, sizeof(v359));
            v423 = a3[117];
            v135 = a3[115];
            v422 = a3[116];
            v421 = v135;
            v385[6] = 0;
            v385[0] = "remove_mcp_server";
            v385[1] = 17;
            v385[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
            v385[3] = 4;
            v385[4] = v343;
            v385[5] = &v421;
            v136 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(v343[64] + 16LL);
            if ( !v136 )
            {
              _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
                &v386,
                v385,
                &v385[2]);
              if ( (_BYTE)v386 != 6 )
              {
                v380[4] = v389;
                v380[3] = v388;
                v380[2] = v387;
                v380[1] = v386;
                memcpy(v385, &__dst[520], 0x168u);
                v364[0] = *(_QWORD *)&__dst[880];
                v364[1] = *(_QWORD *)&__dst[888];
                v364[2] = *(_QWORD *)&__dst[896];
                v380[0] = 1;
                tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                  v385,
                  v359[48],
                  v380,
                  v364,
                  LODWORD(v359[49]),
                  HIDWORD(v359[49]));
                goto LABEL_504;
              }
              v136 = (__int64 *)v387;
            }
            v385[6] = 0;
            v385[0] = "remove_mcp_server";
            v385[1] = 17;
            v385[2] = "mutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
            v385[3] = 12;
            v385[4] = v343;
            v385[5] = &v421;
            v137 = tauri::state::StateManager::try_get::h18d7865deb554c60(v343[64] + 16LL);
            if ( v137 )
              goto LABEL_217;
            _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
              &v410,
              v385,
              &v385[2]);
            if ( (_BYTE)v410 == 6 )
            {
              v137 = v411;
LABEL_217:
              v385[6] = 0;
              v385[0] = "remove_mcp_server";
              v385[1] = 17;
              v385[2] = &unk_1015FB9C8;
              v385[3] = 4;
              v385[4] = v343;
              v385[5] = &v421;
              _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(
                v396,
                v385);
              if ( LOBYTE(v396[0]) == 6 )
              {
                v402 = v396[3];
                v401 = v396[2];
                v400 = v396[1];
                codexmate_lib::commands::mcp::remove_mcp_server::h2ddf18b927ea0cad((__int64)v364, v136, v137, &v400);
                memcpy(v385, &__dst[520], sizeof(v385));
                if ( v364[0] == 0x8000000000000000LL )
                {
                  v138 = v364[1];
                  v139 = (const void *)v364[2];
                  v140 = v364[3];
                  if ( v364[3] < 0LL )
                  {
                    v141 = 0;
                    goto LABEL_221;
                  }
                  if ( v364[3] )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v385, &__dst[520]);
                    v141 = 1;
                    v243 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v140, 1);
                    if ( !v243 )
LABEL_221:
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v141, v140);
                    v244 = v243;
                  }
                  else
                  {
                    v244 = 1;
                  }
                  memcpy((void *)v244, v139, v140);
                  if ( v138 )
                    *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v138, 1);
                  LOBYTE(v380[1]) = 3;
                  v380[2] = v140;
                  v380[3] = v244;
                  v380[4] = v140;
                  v380[0] = 0x8000000000000000LL;
                }
                else
                {
                  memcpy(v380, v364, 0x88u);
                }
                tauri::ipc::InvokeResolver$LT$R$GT$::respond::h9867d26b815728bc(v385, v380);
              }
              else
              {
                v380[4] = v396[3];
                v380[3] = v396[2];
                v380[2] = v396[1];
                v380[1] = v396[0];
                memcpy(v385, &__dst[520], 0x168u);
                v364[0] = *(_QWORD *)&__dst[880];
                v364[1] = *(_QWORD *)&__dst[888];
                v364[2] = *(_QWORD *)&__dst[896];
                v380[0] = 1;
                tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                  v385,
                  v359[48],
                  v380,
                  v364,
                  LODWORD(v359[49]),
                  HIDWORD(v359[49]));
              }
              goto LABEL_504;
            }
            v380[4] = v413;
            v380[3] = v412;
            v380[2] = v411;
            v380[1] = v410;
            memcpy(v385, &__dst[520], 0x168u);
            v364[0] = *(_QWORD *)&__dst[880];
            v364[1] = *(_QWORD *)&__dst[888];
            v364[2] = *(_QWORD *)&__dst[896];
            v380[0] = 1;
            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
              v385,
              v359[48],
              v380,
              v364,
              LODWORD(v359[49]),
              HIDWORD(v359[49]));
LABEL_504:
            if ( v421 == 0x8000000000000000LL )
              goto LABEL_512;
            v273 = v422;
            for ( m = v423 + 1; m != 1; --m )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v273);
              v273 += 96;
            }
            goto LABEL_508;
          }
LABEL_149:
          LODWORD(v5) = memcmp(v6, "set_mcp_server_enabledremove_mcp_server", v7);
          LOBYTE(v90) = 1;
          LODWORD(v431) = v90;
          if ( (_DWORD)v5 )
            goto LABEL_150;
          memcpy(__dst, a3, 0x208u);
          memcpy(&__dst[520], a3 + 65, 0x190u);
          v109 = a3[116];
          *(_QWORD *)&__dst[920] = a3[115];
          *(_QWORD *)&__dst[928] = v109;
          *(_QWORD *)&__dst[936] = a3[117];
          memcpy(v343, a3, 0x208u);
          memcpy(v359, a3 + 65, sizeof(v359));
          v394 = a3[117];
          v110 = a3[115];
          v393 = a3[116];
          v392 = v110;
          v385[6] = 0;
          v385[0] = "set_mcp_server_enabledremove_mcp_server";
          v385[1] = 22;
          v385[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
          v385[3] = 4;
          v385[4] = v343;
          v385[5] = &v392;
          v111 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(v343[64] + 16LL);
          if ( !v111 )
          {
            _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
              &v400,
              v385,
              &v385[2]);
            if ( (_BYTE)v400 != 6 )
            {
              v380[4] = v403;
              v380[3] = v402;
              v380[2] = v401;
              v380[1] = v400;
              memcpy(v385, &__dst[520], 0x168u);
              v364[0] = *(_QWORD *)&__dst[880];
              v364[1] = *(_QWORD *)&__dst[888];
              v364[2] = *(_QWORD *)&__dst[896];
              v380[0] = 1;
              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                v385,
                v359[48],
                v380,
                v364,
                LODWORD(v359[49]),
                HIDWORD(v359[49]));
              goto LABEL_373;
            }
            v111 = (__int64 *)v401;
          }
          v385[6] = 0;
          v385[0] = "set_mcp_server_enabledremove_mcp_server";
          v385[1] = 22;
          v385[2] = "mutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
          v385[3] = 12;
          v385[4] = v343;
          v385[5] = &v392;
          v112 = tauri::state::StateManager::try_get::h18d7865deb554c60(v343[64] + 16LL);
          if ( !v112 )
          {
            _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
              &v386,
              v385,
              &v385[2]);
            if ( (_BYTE)v386 != 6 )
            {
              v380[4] = v389;
              v380[3] = v388;
              v380[2] = v387;
              v380[1] = v386;
              memcpy(v385, &__dst[520], 0x168u);
              v364[0] = *(_QWORD *)&__dst[880];
              v364[1] = *(_QWORD *)&__dst[888];
              v364[2] = *(_QWORD *)&__dst[896];
              v380[0] = 1;
              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                v385,
                v359[48],
                v380,
                v364,
                LODWORD(v359[49]),
                HIDWORD(v359[49]));
              goto LABEL_373;
            }
            v112 = v387;
          }
          v385[6] = 0;
          v385[0] = "set_mcp_server_enabledremove_mcp_server";
          v385[1] = 22;
          v385[2] = &unk_1015FB9C8;
          v385[3] = 4;
          v385[4] = v343;
          v385[5] = &v392;
          _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v410, v385);
          if ( (_BYTE)v410 == 6 )
          {
            v423 = v413;
            v422 = v412;
            v421 = v411;
            v385[6] = 0;
            v385[0] = "set_mcp_server_enabledremove_mcp_server";
            v385[1] = 22;
            v385[2] = "enabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
            v385[3] = 7;
            v385[4] = v343;
            v385[5] = &v392;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hd3dee5410a5f5aeb(v396, v385);
            if ( LOBYTE(v396[0]) == 6 )
            {
              codexmate_lib::commands::mcp::set_mcp_server_enabled::h3191723d6aef1a4a(
                v364,
                v111,
                v112,
                &v421,
                BYTE1(v396[0]));
              memcpy(v385, &__dst[520], sizeof(v385));
              if ( v364[0] == 0x8000000000000000LL )
              {
                v113 = v364[1];
                v114 = (const void *)v364[2];
                v115 = v364[3];
                if ( v364[3] < 0LL )
                {
                  v116 = 0;
                  goto LABEL_188;
                }
                if ( v364[3] )
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v385, &__dst[520]);
                  v116 = 1;
                  v247 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v115, 1);
                  if ( !v247 )
LABEL_188:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v116, v115);
                  v248 = v247;
                }
                else
                {
                  v248 = 1;
                }
                memcpy((void *)v248, v114, v115);
                if ( v113 )
                  *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v113, 1);
                LOBYTE(v380[1]) = 3;
                v380[2] = v115;
                v380[3] = v248;
                v380[4] = v115;
                v380[0] = 0x8000000000000000LL;
              }
              else
              {
                memcpy(v380, v364, 0x150u);
              }
              tauri::ipc::InvokeResolver$LT$R$GT$::respond::h7144ff47707fe5b6(v385, v380);
            }
            else
            {
              v380[4] = v396[3];
              v380[3] = v396[2];
              v380[2] = v396[1];
              v380[1] = v396[0];
              memcpy(v385, &__dst[520], 0x168u);
              v364[0] = *(_QWORD *)&__dst[880];
              v364[1] = *(_QWORD *)&__dst[888];
              v364[2] = *(_QWORD *)&__dst[896];
              v380[0] = 1;
              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
                v385,
                v359[48],
                v380,
                v364,
                LODWORD(v359[49]),
                HIDWORD(v359[49]));
              if ( v421 )
                *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v422, v421, 1);
            }
          }
          else
          {
            v380[4] = v413;
            v380[3] = v412;
            v380[2] = v411;
            v380[1] = v410;
            memcpy(v385, &__dst[520], 0x168u);
            v364[0] = *(_QWORD *)&__dst[880];
            v364[1] = *(_QWORD *)&__dst[888];
            v364[2] = *(_QWORD *)&__dst[896];
            v380[0] = 1;
            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
              v385,
              v359[48],
              v380,
              v364,
              LODWORD(v359[49]),
              HIDWORD(v359[49]));
          }
LABEL_373:
          if ( v392 == 0x8000000000000000LL )
            goto LABEL_512;
          v215 = v393;
          for ( n = v394 + 1; n != 1; --n )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v215);
            v215 += 96;
          }
          v144 = v392;
          if ( !v392 )
            goto LABEL_512;
          v145 = v393;
          goto LABEL_510;
        }
        a1 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101679030);
        if ( !_mm_testz_si128(a1, a1) )
        {
          if ( !v56 )
          {
            if ( !(_BYTE)v438 )
            {
              if ( !(_BYTE)v433 )
              {
                LOBYTE(v5) = 1;
                v434 = v5;
                v429 = 0;
                v432 = 0;
                v437 = 0;
                v416 = 0;
                v22 = 0;
                LODWORD(v430) = 0;
                v436 = 0;
                LODWORD(v438) = 0;
                LODWORD(v431) = 0;
                v435 = 0;
                v425 = 0;
                v220 = !v24;
                v21 = 0;
                if ( v220 )
                  goto LABEL_437;
                goto LABEL_288;
              }
              LOBYTE(v5) = 1;
              v434 = v5;
              LODWORD(v438) = 0;
              v436 = 0;
              LODWORD(v430) = 0;
              LODWORD(v431) = 0;
              v435 = 0;
              v437 = 0;
              v432 = 0;
              goto LABEL_274;
            }
            LOBYTE(v5) = 1;
            v434 = v5;
            v432 = 0;
            v435 = 0;
            LODWORD(v431) = 0;
            LODWORD(v430) = 0;
            v436 = 0;
            goto LABEL_235;
          }
          LOBYTE(v5) = 1;
          v434 = v5;
          v435 = 0;
          LODWORD(v430) = 0;
          goto LABEL_149;
        }
        memcpy(&__dst[520], a3 + 65, 0x190u);
        memcpy(v343, a3, 0x208u);
        memcpy(v359, a3 + 65, sizeof(v359));
        v412 = a3[117];
        v127 = a3[115];
        v411 = a3[116];
        v410 = v127;
        v385[6] = 0;
        v385[0] = &xmmword_101679030;
        v385[1] = 16;
        v385[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
        v385[3] = 4;
        v385[4] = v343;
        v385[5] = &v410;
        v128 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(v343[64] + 16LL);
        if ( !v128 )
        {
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            v396,
            v385,
            &v385[2]);
          if ( LOBYTE(v396[0]) != 6 )
          {
            v380[4] = v396[3];
            v380[3] = v396[2];
            v380[2] = v396[1];
            v380[1] = v396[0];
            memcpy(v385, &__dst[520], 0x168u);
            v364[0] = *(_QWORD *)&__dst[880];
            v364[1] = *(_QWORD *)&__dst[888];
            v364[2] = *(_QWORD *)&__dst[896];
            v380[0] = 1;
            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
              v385,
              v359[48],
              v380,
              v364,
              LODWORD(v359[49]),
              HIDWORD(v359[49]));
            goto LABEL_415;
          }
          v128 = (__int64 *)v396[1];
        }
        codexmate_lib::commands::mcp::load_mcp_servers::hee1e8e8e9b82bbaa((__int64)v364, v128);
        memcpy(v385, &__dst[520], sizeof(v385));
        if ( v364[0] == 0x8000000000000000LL )
        {
          v129 = v364[1];
          v130 = (const void *)v364[2];
          v131 = v364[3];
          if ( v364[3] < 0LL )
          {
            v132 = 0;
            goto LABEL_203;
          }
          if ( v364[3] )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v385, &__dst[520]);
            v132 = 1;
            v223 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v131, 1);
            if ( !v223 )
LABEL_203:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v132, v131);
            v224 = v223;
          }
          else
          {
            v224 = 1;
          }
          memcpy((void *)v224, v130, v131);
          if ( v129 )
            *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v129, 1);
          LOBYTE(v380[1]) = 3;
          v380[2] = v131;
          v380[3] = v224;
          v380[4] = v131;
          v380[0] = 0x8000000000000000LL;
        }
        else
        {
          memcpy(v380, v364, 0x90u);
        }
        tauri::ipc::InvokeResolver$LT$R$GT$::respond::h956d877759feaeed(v385, v380);
LABEL_415:
        if ( v410 == 0x8000000000000000LL )
          goto LABEL_512;
        v239 = v411;
        for ( ii = v412 + 1; ii != 1; --ii )
        {
          core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v239);
          v239 += 96;
        }
        v144 = v410;
        if ( !v410 )
          goto LABEL_512;
        v145 = v411;
        goto LABEL_510;
      }
      goto LABEL_137;
    }
    a1 = _mm_or_si128(
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678FC0),
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 10)), (__m128i)xmmword_101678FB0));
    if ( !_mm_testz_si128(a1, a1) )
    {
      LOBYTE(a5) = 1;
      v433 = a5;
      LODWORD(v438) = 0;
      v436 = 0;
      LODWORD(v430) = 0;
      LODWORD(v431) = 0;
      v435 = 0;
      v437 = 0;
      v434 = 0;
      v432 = 0;
      if ( !(_BYTE)v5 )
        goto LABEL_274;
      goto LABEL_137;
    }
    memcpy(__dst, a3, 0x208u);
    memcpy(&__dst[520], a3 + 65, 0x190u);
    v77 = a3[116];
    *(_QWORD *)&__dst[920] = a3[115];
    *(_QWORD *)&__dst[928] = v77;
    *(_QWORD *)&__dst[936] = a3[117];
    memcpy(v343, a3, 0x208u);
    memcpy(v359, a3 + 65, sizeof(v359));
    v438 = *(_QWORD *)&__dst[920];
    v78 = *(_QWORD *)&__dst[928];
    v79 = *(_QWORD *)&__dst[936];
    codexmate_lib::commands::account_oauth::cancel_chatgpt_oauth_login::h4e5c8a182544ac63(
      (__int64)v364,
      (__int64)(a3 + 65));
    memcpy(v385, &__dst[520], sizeof(v385));
    v80 = v364[0];
    if ( __OFSUB__(-v364[0], 1) )
    {
      BYTE1(v380[0]) = v364[1];
      LOBYTE(v380[0]) = 6;
LABEL_365:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hec5d67e463ed9f2c(v385);
      if ( v438 == 0x8000000000000000LL )
        goto LABEL_512;
      v211 = v79 + 1;
      v212 = v78;
      while ( v211 != 1 )
      {
        --v211;
        core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v212);
        v212 += 96;
      }
      if ( !v438 )
        goto LABEL_512;
      v213 = 96 * v438;
      v145 = v78;
      goto LABEL_511;
    }
    v430 = (void *)v364[1];
    v123 = v364[2];
    if ( v364[2] < 0LL )
    {
      v124 = 0;
      goto LABEL_194;
    }
    v431 = v78;
    if ( v364[2] )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v385, &__dst[520]);
      v124 = 1;
      v160 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v123, 1);
      if ( !v160 )
LABEL_194:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v124, v123);
      v161 = v160;
    }
    else
    {
      v161 = 1;
    }
    v210 = v430;
    memcpy((void *)v161, v430, v123);
    if ( v80 )
      *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v210, v80, 1);
    LOBYTE(v380[0]) = 3;
    v380[1] = v123;
    v380[2] = v161;
    v380[3] = v123;
    v78 = v431;
    goto LABEL_365;
  }
  a1 = _mm_or_si128(
         _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678DC0),
         _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 3)), (__m128i)xmmword_101678DB0));
  if ( _mm_testz_si128(a1, a1) )
  {
    memcpy(&__dst[520], a3 + 65, 0x190u);
    memcpy(v343, a3, 0x208u);
    memcpy(v359, a3 + 65, sizeof(v359));
    v402 = a3[117];
    v33 = a3[115];
    v401 = a3[116];
    v400 = v33;
    v385[6] = 0;
    v385[0] = "get_autostart_stateset_autostart_enabled";
    v385[1] = 19;
    v385[2] = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread";
    v385[3] = 3;
    v385[4] = v343;
    v385[5] = &v400;
    _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v380);
    if ( LODWORD(v380[0]) == 3 )
    {
      v396[4] = v380[4];
      v396[3] = v380[3];
      v396[2] = v380[2];
      v396[1] = v380[1];
      memcpy(v385, &__dst[520], 0x168u);
      v410 = *(_QWORD *)&__dst[880];
      v411 = *(_QWORD *)&__dst[888];
      v412 = *(_QWORD *)&__dst[896];
      v396[0] = 1;
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
        v385,
        v359[48],
        v396,
        &v410,
        LODWORD(v359[49]),
        HIDWORD(v359[49]));
      goto LABEL_227;
    }
    memcpy(v364, v380, 0x98u);
    v385[6] = 0;
    v385[0] = "get_autostart_stateset_autostart_enabled";
    v385[1] = 19;
    v385[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
    v385[3] = 4;
    v385[4] = v343;
    v385[5] = &v400;
    v45 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(v343[64] + 16LL);
    if ( !v45 )
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
        &v410,
        v385,
        &v385[2]);
      if ( (_BYTE)v410 != 6 )
      {
        v396[4] = v413;
        v396[3] = v412;
        v396[2] = v411;
        v396[1] = v410;
        memcpy(v385, &__dst[520], 0x168u);
        v386 = *(_QWORD *)&__dst[880];
        v387 = *(_QWORD *)&__dst[888];
        v388 = *(_QWORD *)&__dst[896];
        v396[0] = 1;
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
          v385,
          v359[48],
          v396,
          &v386,
          LODWORD(v359[49]),
          HIDWORD(v359[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v364);
        goto LABEL_227;
      }
      v45 = (_QWORD *)v411;
    }
    codexmate_lib::commands::autostart::get_autostart_state::h9f3a922ddddae6e7((char *)v396, (__int64)v364, v45);
    memcpy(v385, &__dst[520], sizeof(v385));
    if ( v396[0] == 0x8000000000000000LL )
    {
      v46 = v396[1];
      v47 = (const void *)v396[2];
      v48 = v396[3];
      if ( v396[3] < 0 )
      {
        v49 = 0;
        goto LABEL_69;
      }
      if ( v396[3] )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v385, &__dst[520]);
        v49 = 1;
        v95 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v48, 1);
        if ( !v95 )
LABEL_69:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v49, v48);
        v96 = v95;
      }
      else
      {
        v96 = 1;
      }
      memcpy((void *)v96, v47, v48);
      if ( v46 )
        *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1);
      LOBYTE(v380[1]) = 3;
      v380[2] = v48;
      v380[3] = v96;
      v380[4] = v48;
      v380[0] = 0x8000000000000000LL;
    }
    else
    {
      qmemcpy(v380, v396, 0x50u);
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h984ed399bb0e19a6(v385);
LABEL_227:
    if ( v400 == 0x8000000000000000LL )
      goto LABEL_512;
    v142 = v401;
    for ( jj = v402 + 1; jj != 1; --jj )
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v142);
      v142 += 96;
    }
    v144 = v400;
    if ( !v400 )
      goto LABEL_512;
    v145 = v401;
    goto LABEL_510;
  }
  v8 = _mm_or_si128(
         _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678DE0),
         _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 3)), (__m128i)xmmword_101678DD0));
  if ( _mm_testz_si128(v8, v8) )
  {
    memcpy(v343, a3, 0x208u);
    memcpy(&v343[65], a3 + 65, 0x190u);
    v39 = a3[116];
    v343[115] = a3[115];
    v343[116] = v39;
    v343[117] = a3[117];
    *(_QWORD *)&__dst[536] = a3[117];
    v40 = a3[115];
    *(_QWORD *)&__dst[528] = a3[116];
    *(_QWORD *)&__dst[520] = v40;
    memcpy(__dst, a3, 0x208u);
    __dst[2952] = 0;
    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h983222bf3700715c(&v343[65]);
    return 1;
  }
  v9 = _mm_or_si128(
         _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678E00),
         _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 3)), (__m128i)xmmword_101678DF0));
  if ( _mm_testz_si128(v9, v9) )
  {
    memcpy(__dst, a3, 0x208u);
    memcpy(&__dst[520], a3 + 65, 0x190u);
    v53 = a3[116];
    *(_QWORD *)&__dst[920] = a3[115];
    *(_QWORD *)&__dst[928] = v53;
    *(_QWORD *)&__dst[936] = a3[117];
    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6e74fd116518ad0e(__dst);
    return 1;
  }
  v10 = _mm_or_si128(
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678E20),
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 3)), (__m128i)xmmword_101678E10));
  if ( _mm_testz_si128(v10, v10) )
  {
    memcpy(__dst, a3, 0x208u);
    memcpy(&__dst[520], a3 + 65, 0x190u);
    v59 = a3[116];
    *(_QWORD *)&__dst[920] = a3[115];
    *(_QWORD *)&__dst[928] = v59;
    *(_QWORD *)&__dst[936] = a3[117];
    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1a04a971a69ab666(__dst);
    return 1;
  }
  v11 = _mm_or_si128(
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678E40),
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 3)), (__m128i)xmmword_101678E30));
  if ( _mm_testz_si128(v11, v11) )
  {
    memcpy(__dst, a3, 0x208u);
    memcpy(&__dst[520], a3 + 65, 0x190u);
    v73 = a3[116];
    *(_QWORD *)&__dst[920] = a3[115];
    *(_QWORD *)&__dst[928] = v73;
    *(_QWORD *)&__dst[936] = a3[117];
    v343[67] = a3[117];
    v74 = a3[115];
    v343[66] = a3[116];
    v343[65] = v74;
    memcpy(v343, a3, 0x208u);
    LOBYTE(v343[90]) = 0;
    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::hce1e0589736becb4(&__dst[520]);
    return 1;
  }
  v12 = _mm_or_si128(
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678E60),
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 3)), (__m128i)xmmword_101678E50));
  if ( _mm_testz_si128(v12, v12) )
  {
    memcpy(v343, a3, 0x208u);
    memcpy(&v343[65], a3 + 65, 0x190u);
    v98 = a3[116];
    v343[115] = a3[115];
    v343[116] = v98;
    v343[117] = a3[117];
    *(_QWORD *)&__dst[536] = a3[117];
    v99 = a3[115];
    *(_QWORD *)&__dst[528] = a3[116];
    *(_QWORD *)&__dst[520] = v99;
    memcpy(__dst, a3, 0x208u);
    __dst[4128] = 0;
    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::hb06f6a9b52ce3fff(&v343[65]);
    return 1;
  }
  v13 = _mm_or_si128(
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678E80),
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 3)), (__m128i)xmmword_101678E70));
  if ( _mm_testz_si128(v13, v13) )
  {
    memcpy(v343, a3, 0x208u);
    memcpy(&v343[65], a3 + 65, 0x190u);
    v118 = a3[116];
    v343[115] = a3[115];
    v343[116] = v118;
    v343[117] = a3[117];
    *(_QWORD *)&__dst[536] = a3[117];
    v119 = a3[115];
    *(_QWORD *)&__dst[528] = a3[116];
    *(_QWORD *)&__dst[520] = v119;
    memcpy(__dst, a3, 0x208u);
    __dst[3048] = 0;
    tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h53b637a08c765b30(&v343[65]);
    return 1;
  }
  v14 = _mm_or_si128(
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678EA0),
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 3)), (__m128i)xmmword_101678E90));
  if ( _mm_testz_si128(v14, v14) )
  {
    memcpy(__dst, a3, 0x208u);
    memcpy(&__dst[520], a3 + 65, 0x190u);
    v155 = a3[116];
    *(_QWORD *)&__dst[920] = a3[115];
    *(_QWORD *)&__dst[928] = v155;
    *(_QWORD *)&__dst[936] = a3[117];
    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha91e978b51144017(__dst);
    return 1;
  }
  v15 = _mm_or_si128(
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678EB0),
          _mm_xor_si128(
            _mm_unpacklo_epi64((__m128i)0x746F7073746F685FuLL, (__m128i)0x64656C62616E655FuLL),
            _mm_loadu_si128((const __m128i *)((char *)v6 + 3))));
  if ( _mm_testz_si128(v15, v15) )
  {
    memcpy(__dst, a3, 0x208u);
    memcpy(&__dst[520], a3 + 65, 0x190u);
    v163 = a3[116];
    *(_QWORD *)&__dst[920] = a3[115];
    *(_QWORD *)&__dst[928] = v163;
    *(_QWORD *)&__dst[936] = a3[117];
    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc5ae4d6813470a75(__dst);
    return 1;
  }
  v16 = _mm_or_si128(
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678ED0),
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 3)), (__m128i)xmmword_101678EC0));
  if ( _mm_testz_si128(v16, v16) )
  {
    memcpy(__dst, a3, 0x208u);
    memcpy(&__dst[520], a3 + 65, 0x190u);
    v199 = a3[116];
    *(_QWORD *)&__dst[920] = a3[115];
    *(_QWORD *)&__dst[928] = v199;
    *(_QWORD *)&__dst[936] = a3[117];
    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h86b16f1850137192(__dst);
    return 1;
  }
  v17 = _mm_or_si128(
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678EF0),
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v6 + 3)), (__m128i)xmmword_101678EE0));
  if ( _mm_testz_si128(v17, v17) )
  {
    memcpy(__dst, a3, 0x208u);
    memcpy(&__dst[520], a3 + 65, 0x190u);
    v226 = a3[116];
    *(_QWORD *)&__dst[920] = a3[115];
    *(_QWORD *)&__dst[928] = v226;
    *(_QWORD *)&__dst[936] = a3[117];
    codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h830feef853b53f99(__dst);
    return 1;
  }
  v18 = _mm_or_si128(
          _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101678F00),
          _mm_xor_si128(
            _mm_unpacklo_epi64((__m128i)0x616C65725F74726FuLL, (__m128i)0x6769666E6F635F79uLL),
            _mm_loadu_si128((const __m128i *)((char *)v6 + 3))));
  if ( !_mm_testz_si128(v18, v18) )
    goto LABEL_111;
  memcpy(__dst, a3, 0x208u);
  memcpy(&__dst[520], a3 + 65, 0x190u);
  v19 = a3[116];
  *(_QWORD *)&__dst[920] = a3[115];
  *(_QWORD *)&__dst[928] = v19;
  *(_QWORD *)&__dst[936] = a3[117];
  codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hafd9eb3726769900(__dst);
  return 1;
}
