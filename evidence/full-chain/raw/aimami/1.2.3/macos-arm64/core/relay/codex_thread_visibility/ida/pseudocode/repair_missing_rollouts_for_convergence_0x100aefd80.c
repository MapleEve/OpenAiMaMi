// __ZN13codexmate_lib4core5relay23codex_thread_visibility39repair_missing_rollouts_for_convergence @ 0x100aefd80 | 基线 same-set
// [FULL hexrays]

_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::repair_missing_rollouts_for_convergence::h29a5363c015dcf12(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 *v3; // r13
  __int64 *v4; // rax
  size_t v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // r12
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  void *v18; // rcx
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rsi
  void *v23; // rbx
  size_t v24; // r12
  void *v25; // r15
  size_t v26; // r14
  __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rax
  void *v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  char *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // r12
  size_t v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 v42; // rsi
  unsigned int v43; // r12d
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r12
  int v47; // ebx
  __int64 v48; // rsi
  _BYTE *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rbx
  __int64 v56; // rax
  _DWORD *v57; // rax
  _BYTE *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 *v62; // rdx
  _BYTE *v63; // rsi
  _QWORD *v64; // rax
  size_t v65; // rbx
  void *v66; // rsi
  __int64 v67; // r15
  __int64 v68; // rax
  __int64 v69; // r12
  _BYTE *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 *v74; // rdx
  _BYTE *v75; // rsi
  void *v76; // rax
  size_t v77; // rbx
  __int64 v78; // r15
  __int64 v79; // rax
  __int64 v80; // r14
  _BYTE *v81; // rdi
  _BYTE *v82; // r14
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 *v86; // rdx
  _BYTE *v87; // rsi
  void *v88; // rax
  size_t v89; // rbx
  __int64 v90; // r15
  __int64 v91; // rax
  __int64 v92; // r14
  _BYTE *v93; // rdi
  _BYTE *v94; // r14
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 *v98; // rdx
  _BYTE *v99; // rsi
  __int64 v100; // rax
  size_t v101; // rbx
  __int64 v102; // r15
  __int64 v103; // rax
  __int64 v104; // r14
  __int64 v105; // rsi
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 *v109; // rdx
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rdx
  size_t v114; // rsi
  __int64 v115; // r15
  __int64 v116; // rbx
  __int64 v117; // rax
  int v118; // edx
  size_t v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdx
  void *v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rbx
  __int64 v125; // rbx
  __int64 v126; // rdx
  __int64 v127; // r15
  __int64 v128; // rsi
  char v129; // r15
  __int64 v130; // rsi
  _BYTE *v131; // rdi
  __int64 v132; // rbx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // rsi
  __int64 v137; // rbx
  __int64 v138; // rax
  _DWORD *v139; // rax
  _BYTE *v140; // rdi
  _BYTE *v141; // rsi
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 *v145; // rdx
  _QWORD *v146; // rax
  size_t v147; // rbx
  const void *v148; // rsi
  __int64 v149; // rax
  __int64 v150; // rdi
  __int64 v151; // r15
  _BYTE *v152; // rdi
  _BYTE *v153; // rsi
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 *v157; // rdx
  void *v158; // rax
  char v159; // bl
  __int64 v160; // rcx
  unsigned __int64 v161; // r14
  char v162; // al
  _BYTE *v163; // rdi
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rdx
  __int64 *v167; // rdx
  _BYTE *v168; // rsi
  __int64 v169; // rax
  size_t v170; // rbx
  __int64 v171; // rax
  __int64 v172; // rdi
  __int64 v173; // r15
  size_t v174; // rdx
  __int64 v175; // rbx
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rdx
  __int64 *v180; // rdx
  __int64 v181; // rbx
  __int64 v182; // rax
  __int64 v183; // rcx
  __int64 v184; // rdx
  unsigned __int64 v185; // rbx
  _QWORD *v186; // r13
  __int64 v187; // rsi
  __int64 v188; // rbx
  __int64 v189; // r15
  __int64 *v190; // r14
  __int64 v191; // r12
  __int64 *v192; // rsi
  __int64 v193; // rax
  void *v194; // r15
  __int64 v195; // r12
  __int64 v196; // rbx
  __int64 v197; // rsi
  __int64 v198; // rsi
  __int64 v199; // rdx
  void *v200; // rdi
  int v201; // edx
  __int64 v202; // rax
  unsigned __int64 *v203; // r13
  unsigned __int64 *v204; // rdi
  __int64 v205; // rsi
  __int64 v206; // r12
  __int64 v207; // rax
  int v208; // edx
  size_t v209; // rax
  _BYTE *v210; // rdi
  __int64 v211; // rax
  __int64 v212; // rcx
  __int64 v213; // rdx
  __int64 v214; // rdx
  _BYTE *v215; // rsi
  _DWORD *v216; // rax
  _BYTE *v217; // rdi
  __int64 v218; // rax
  __int64 v219; // rcx
  __int64 v220; // rdx
  __int64 v221; // rdx
  _BYTE *v222; // rsi
  _DWORD *v223; // rax
  _BYTE *v224; // rdi
  __int64 v225; // rax
  __int64 v226; // rcx
  __int64 v227; // rdx
  __int64 v228; // rdx
  _BYTE *v229; // rsi
  _QWORD *v230; // rax
  _BYTE *v231; // rdi
  __int64 v232; // rax
  __int64 v233; // rcx
  __int64 v234; // rdx
  __int64 v235; // rdx
  _BYTE *v236; // rsi
  _QWORD *v237; // rax
  _BYTE *v238; // rdi
  __int64 v239; // rax
  __int64 v240; // rcx
  __int64 v241; // rdx
  __int64 v242; // rdx
  _BYTE *v243; // rsi
  __int64 v244; // rax
  _BYTE *v245; // rdi
  __int64 v246; // rax
  __int64 v247; // rcx
  __int64 v248; // rdx
  __int64 v249; // rdx
  _BYTE *v250; // rsi
  __int64 v251; // rax
  __int64 v252; // rax
  __int64 v253; // rcx
  __int64 v254; // rdx
  __int64 v255; // rdx
  void **v256; // rsi
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // r8
  __int64 v260; // r15
  _QWORD *v261; // r15
  __int64 v262; // rsi
  __int64 v263; // r13
  __int64 v264; // r12
  __int64 v265; // r13
  __int64 v266; // rbx
  __int64 v267; // rsi
  _QWORD *v268; // r8
  __int64 v269; // rsi
  unsigned __int64 v270; // rbx
  _QWORD *v271; // rsi
  _QWORD *v272; // rax
  __int64 v273; // rdi
  __int64 i; // rbx
  __int64 v275; // rax
  _QWORD *v276; // r14
  __int64 *v277; // rax
  __int64 v278; // rbx
  size_t v279; // rax
  __int64 v280; // rcx
  __int64 v281; // rdx
  __int64 v282; // rbx
  __int64 v283; // rbx
  size_t v284; // rax
  __int64 v285; // rcx
  void *v286; // rdx
  __int64 v287; // rax
  __int64 v288; // rdx
  __int64 v289; // rdi
  __int64 v290; // rsi
  __int64 v291; // rbx
  size_t v292; // rax
  __int64 v293; // rcx
  __int64 v294; // rdx
  __int64 v295; // rbx
  size_t v296; // rax
  __int64 v297; // rcx
  __int64 v298; // rdx
  __int64 v299; // rbx
  _QWORD *v300; // r14
  __int64 v301; // rsi
  _QWORD *v302; // rdx
  __int64 v303; // rax
  void *v304; // rax
  __int64 v305; // rax
  __int64 v306; // r14
  __int64 v307; // r15
  __int64 v308; // rbx
  __int64 v309; // rax
  __int64 v310; // rsi
  _QWORD *v311; // r14
  unsigned __int64 v312; // rbx
  __int64 v313; // rsi
  __int64 v314; // rdi
  __int64 j; // rbx
  __int64 v316; // rbx
  __int64 v317; // r14
  _QWORD *v318; // r15
  __int64 v319; // rsi
  unsigned __int64 v321; // rbx
  __int64 v322; // rcx
  _QWORD *v323; // rsi
  __int64 v324; // r14
  __int64 v325; // r15
  __int64 v326; // rbx
  __int64 v327; // rsi
  __int64 v328; // r14
  __int64 v329; // r15
  __int64 v330; // rbx
  __int64 v331; // rsi
  __int64 *v332; // rax
  _QWORD v333[3]; // [rsp+10h] [rbp-540h] BYREF
  const void *v334; // [rsp+28h] [rbp-528h]
  size_t v335; // [rsp+30h] [rbp-520h]
  __int64 v336; // [rsp+38h] [rbp-518h]
  __int64 v337; // [rsp+40h] [rbp-510h]
  __int64 v338; // [rsp+48h] [rbp-508h]
  void *v339; // [rsp+50h] [rbp-500h] BYREF
  void *v340; // [rsp+58h] [rbp-4F8h]
  size_t v341; // [rsp+60h] [rbp-4F0h]
  __int64 v342; // [rsp+68h] [rbp-4E8h] BYREF
  __int64 *v343; // [rsp+70h] [rbp-4E0h]
  __int64 v344; // [rsp+78h] [rbp-4D8h]
  __int64 v345; // [rsp+80h] [rbp-4D0h]
  __int64 v346; // [rsp+88h] [rbp-4C8h]
  unsigned __int64 v347; // [rsp+90h] [rbp-4C0h]
  __int64 v348; // [rsp+98h] [rbp-4B8h]
  __int64 v349; // [rsp+A0h] [rbp-4B0h]
  __int64 v350; // [rsp+A8h] [rbp-4A8h]
  __int64 v351; // [rsp+B0h] [rbp-4A0h]
  __int64 v352; // [rsp+B8h] [rbp-498h]
  void *v353; // [rsp+C0h] [rbp-490h] BYREF
  size_t v354; // [rsp+C8h] [rbp-488h]
  __int64 v355; // [rsp+D0h] [rbp-480h]
  _DWORD *v356; // [rsp+D8h] [rbp-478h]
  __int64 v357; // [rsp+E0h] [rbp-470h]
  __int64 v358; // [rsp+E8h] [rbp-468h]
  void *v359; // [rsp+F0h] [rbp-460h]
  size_t v360; // [rsp+F8h] [rbp-458h]
  int v361; // [rsp+100h] [rbp-450h] BYREF
  int v362; // [rsp+104h] [rbp-44Ch]
  unsigned __int64 v363; // [rsp+108h] [rbp-448h] BYREF
  void *v364; // [rsp+110h] [rbp-440h]
  size_t v365; // [rsp+118h] [rbp-438h]
  __int64 v366; // [rsp+120h] [rbp-430h]
  __int64 v367; // [rsp+128h] [rbp-428h]
  __int64 v368; // [rsp+130h] [rbp-420h]
  void *v369; // [rsp+138h] [rbp-418h]
  size_t v370; // [rsp+140h] [rbp-410h]
  void *v371; // [rsp+148h] [rbp-408h]
  _BYTE v372[88]; // [rsp+150h] [rbp-400h] BYREF
  size_t v373; // [rsp+1A8h] [rbp-3A8h]
  __int64 v374; // [rsp+1B0h] [rbp-3A0h]
  int v375; // [rsp+1BCh] [rbp-394h]
  _QWORD v376[13]; // [rsp+1C0h] [rbp-390h] BYREF
  char v377; // [rsp+228h] [rbp-328h]
  _BYTE v378[7]; // [rsp+229h] [rbp-327h]
  char *v379; // [rsp+230h] [rbp-320h] BYREF
  __int64 v380; // [rsp+238h] [rbp-318h]
  __int64 v381; // [rsp+240h] [rbp-310h]
  __int64 v382; // [rsp+248h] [rbp-308h]
  __int64 v383; // [rsp+250h] [rbp-300h]
  void *v384; // [rsp+258h] [rbp-2F8h]
  _QWORD *v385; // [rsp+260h] [rbp-2F0h]
  void *v386; // [rsp+268h] [rbp-2E8h] BYREF
  size_t v387; // [rsp+270h] [rbp-2E0h]
  size_t v388; // [rsp+278h] [rbp-2D8h] BYREF
  void *v389; // [rsp+280h] [rbp-2D0h]
  size_t v390; // [rsp+288h] [rbp-2C8h]
  __int64 v391; // [rsp+290h] [rbp-2C0h]
  __int64 v392; // [rsp+298h] [rbp-2B8h] BYREF
  __int64 v393; // [rsp+2A0h] [rbp-2B0h]
  __int64 v394; // [rsp+2A8h] [rbp-2A8h]
  _QWORD v395[12]; // [rsp+2B0h] [rbp-2A0h] BYREF
  void *v396; // [rsp+310h] [rbp-240h]
  __int64 v397; // [rsp+318h] [rbp-238h] BYREF
  size_t v398; // [rsp+320h] [rbp-230h]
  __int64 v399; // [rsp+328h] [rbp-228h]
  size_t v400; // [rsp+330h] [rbp-220h]
  __int64 v401; // [rsp+338h] [rbp-218h] BYREF
  void *v402; // [rsp+340h] [rbp-210h]
  size_t __n; // [rsp+348h] [rbp-208h]
  __int64 v404; // [rsp+350h] [rbp-200h]
  _DWORD *v405; // [rsp+358h] [rbp-1F8h]
  __int64 v406; // [rsp+360h] [rbp-1F0h]
  __int64 v407; // [rsp+368h] [rbp-1E8h] BYREF
  void *v408; // [rsp+370h] [rbp-1E0h]
  size_t v409; // [rsp+378h] [rbp-1D8h]
  void *v410; // [rsp+380h] [rbp-1D0h]
  __int64 v411; // [rsp+388h] [rbp-1C8h] BYREF
  _QWORD *v412; // [rsp+390h] [rbp-1C0h]
  __int64 v413; // [rsp+398h] [rbp-1B8h]
  _BYTE v414[144]; // [rsp+3A0h] [rbp-1B0h] BYREF
  _BYTE v415[152]; // [rsp+430h] [rbp-120h] BYREF
  void *v416; // [rsp+4C8h] [rbp-88h]
  __int64 v417; // [rsp+4D0h] [rbp-80h] BYREF
  size_t v418; // [rsp+4D8h] [rbp-78h]
  __int64 v419; // [rsp+4E0h] [rbp-70h]
  __int64 v420; // [rsp+4E8h] [rbp-68h]
  size_t v421; // [rsp+4F0h] [rbp-60h]
  void *v422; // [rsp+4F8h] [rbp-58h]
  __int64 *v423; // [rsp+500h] [rbp-50h] BYREF
  __int64 v424; // [rsp+508h] [rbp-48h]
  _DWORD *v425; // [rsp+510h] [rbp-40h]
  __int64 v426; // [rsp+518h] [rbp-38h]
  _QWORD *v427; // [rsp+520h] [rbp-30h]

  v385 = a1;
  memset(&v372[48], 0, 40);
  *(_QWORD *)&v372[24] = 0x8000000000000000LL;
  *(_QWORD *)v372 = 0;
  *(_QWORD *)&v372[8] = 8;
  *(_QWORD *)&v372[16] = 0;
  v392 = 0;
  v393 = 8;
  v394 = 0;
  v427 = a2;
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v415, a2);
  v2 = *(_QWORD *)&v415[8] + 24LL * *(_QWORD *)&v415[16];
  v342 = *(_QWORD *)&v415[8];
  v343 = *(__int64 **)&v415[8];
  v348 = *(_QWORD *)v415;
  v344 = *(_QWORD *)v415;
  v345 = v2;
  v3 = *(__int64 **)&v415[8];
  v349 = *(_QWORD *)&v415[8];
  if ( !*(_QWORD *)&v415[16] )
  {
LABEL_259:
    if ( (__int64 *)v2 != v3 )
    {
      v185 = (v2 - (__int64)v3) / 0x18uLL;
      v186 = v3 + 1;
      do
      {
        v187 = *(v186 - 1);
        if ( v187 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v186, v187, 1);
        v186 += 3;
        --v185;
      }
      while ( v185 );
    }
LABEL_264:
    if ( v348 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v349, 24 * v348, 8);
    if ( *(_OWORD *)&v372[64] == 0 )
    {
LABEL_358:
      v271 = v427;
      codexmate_lib::core::relay::codex_thread_visibility::inspect_missing_rollouts_for_convergence::he13f091f11a0c011(v415);
      if ( !(*(_QWORD *)&v415[56] | *(_QWORD *)&v415[16]) )
      {
        v272 = v385;
        qmemcpy(v385 + 1, v372, 0x58u);
        *v272 = 11;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogInspection$GT$::h5aea47d90a3b05a1(v415);
        v273 = v393;
        for ( i = v394 + 1; i != 1; --i )
        {
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v273);
          v273 += 32;
        }
        if ( v392 )
        {
          v289 = v393;
          v290 = 32 * v392;
          goto LABEL_449;
        }
        return v385;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v415, v271);
      v275 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
      if ( !v275 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
      v276 = (_QWORD *)v275;
      *(_QWORD *)v414 = &v415[56];
      *(_QWORD *)&v414[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v423, &unk_1017CB6CA, v414);
      v276[2] = v425;
      v277 = v423;
      v276[1] = v424;
      *v276 = v277;
      v397 = 1;
      v398 = (size_t)v276;
      v399 = 1;
      if ( *(_QWORD *)&v415[64] )
      {
        *(_QWORD *)v414 = &v415[64];
        *(_QWORD *)&v414[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v417, &unk_1017CB6D5, v414);
        v278 = v399;
        if ( v399 == v397 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v397);
        v279 = v398;
        v280 = 3 * v278;
        *(_QWORD *)(v398 + 8 * v280 + 16) = v419;
        v281 = v417;
        *(_QWORD *)(v279 + 8 * v280 + 8) = v418;
        *(_QWORD *)(v279 + 8 * v280) = v281;
        v282 = v278 + 1;
        v399 = v282;
        if ( *(_QWORD *)&v415[72] )
        {
LABEL_367:
          *(_QWORD *)v414 = &v415[72];
          *(_QWORD *)&v414[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v353, &unk_1017CB6E3, v414);
          v283 = v399;
          if ( v399 == v397 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v397);
          v284 = v398;
          v285 = 3 * v283;
          *(_QWORD *)(v398 + 8 * v285 + 16) = v355;
          v286 = v353;
          *(_QWORD *)(v284 + 8 * v285 + 8) = v354;
          *(_QWORD *)(v284 + 8 * v285) = v286;
          v282 = v283 + 1;
          v399 = v282;
          v287 = *(_QWORD *)&v415[16];
          if ( !*(_QWORD *)&v415[16] )
          {
LABEL_370:
            v288 = *(_QWORD *)&v415[40];
            if ( !*(_QWORD *)&v415[40] )
            {
LABEL_384:
              alloc::str::join_generic_copy::heca7a5e86402c6b6(
                v414,
                v398,
                v282,
                ", codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.",
                2);
              v376[2] = *(_QWORD *)&v414[16];
              v376[1] = *(_QWORD *)&v414[8];
              v376[0] = *(_QWORD *)v414;
              v299 = v399;
              if ( v399 )
              {
                v300 = (_QWORD *)(v398 + 8);
                do
                {
                  v301 = *(v300 - 1);
                  if ( v301 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v300, v301, 1);
                  v300 += 3;
                  --v299;
                }
                while ( v299 );
              }
              if ( v397 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v398, 24 * v397, 8);
              *(_QWORD *)v414 = v376;
              *(_QWORD *)&v414[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v333, &unk_1017CBC5A, v414);
              if ( v376[0] )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v376[1], v376[0], 1);
              v302 = v385;
              v385[3] = v333[2];
              v303 = v333[0];
              v302[2] = v333[1];
              v302[1] = v303;
              *v302 = 10;
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogInspection$GT$::h5aea47d90a3b05a1(v415);
              goto LABEL_434;
            }
LABEL_379:
            alloc::str::join_generic_copy::heca7a5e86402c6b6(v414, *(_QWORD *)&v415[32], v288, &unk_10167DB6B, 3);
            v376[2] = *(_QWORD *)&v414[16];
            v376[1] = *(_QWORD *)&v414[8];
            v376[0] = *(_QWORD *)v414;
            *(_QWORD *)v414 = v376;
            *(_QWORD *)&v414[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v395, &unk_1017CB10E, v414);
            if ( v376[0] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v376[1], v376[0], 1);
            v295 = v399;
            if ( v399 == v397 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v397);
            v296 = v398;
            v297 = 3 * v295;
            *(_QWORD *)(v398 + 8 * v297 + 16) = v395[2];
            v298 = v395[0];
            *(_QWORD *)(v296 + 8 * v297 + 8) = v395[1];
            *(_QWORD *)(v296 + 8 * v297) = v298;
            v282 = v295 + 1;
            v399 = v282;
            goto LABEL_384;
          }
LABEL_376:
          v376[0] = v287;
          *(_QWORD *)v414 = v376;
          *(_QWORD *)&v414[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v401, &unk_1017CB0FF, v414);
          v291 = v399;
          if ( v399 == v397 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v397);
          v292 = v398;
          v293 = 3 * v291;
          *(_QWORD *)(v398 + 8 * v293 + 16) = __n;
          v294 = v401;
          *(_QWORD *)(v292 + 8 * v293 + 8) = v402;
          *(_QWORD *)(v292 + 8 * v293) = v294;
          v282 = v291 + 1;
          v399 = v282;
          v288 = *(_QWORD *)&v415[40];
          if ( !*(_QWORD *)&v415[40] )
            goto LABEL_384;
          goto LABEL_379;
        }
      }
      else
      {
        v282 = 1;
        if ( *(_QWORD *)&v415[72] )
          goto LABEL_367;
      }
      v287 = *(_QWORD *)&v415[16];
      if ( !*(_QWORD *)&v415[16] )
        goto LABEL_370;
      goto LABEL_376;
    }
    v188 = v393;
    v189 = v394;
    std::path::Path::_join::hb1a495d4f06b13b8(&v342, v427[73], v427[74], "thread-rollout-repairs", 22);
    *(_WORD *)v415 = 511;
    v415[2] = 1;
    v190 = v343;
    v191 = v344;
    v192 = v343;
    v193 = std::fs::DirBuilder::_create::h099c6e2853c95452(v415, v343, v344);
    if ( v193 )
    {
      v376[0] = v193;
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        *(_QWORD *)v414 = v376;
        *(_QWORD *)&v414[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
        *(_QWORD *)&v415[48] = 2;
        *(_QWORD *)&v415[56] = &unk_10167D5D6;
        *(_QWORD *)&v415[64] = 51;
        *(_QWORD *)&v415[80] = &unk_1017CB994;
        *(_QWORD *)&v415[88] = v414;
        *(_QWORD *)v415 = 0;
        *(_QWORD *)&v415[8] = &unk_10167D5D6;
        *(_QWORD *)&v415[16] = 51;
        *(_QWORD *)&v415[24] = 0;
        *(_QWORD *)&v415[32] = "src/core/relay/codex_thread_visibility.rs";
        *(_QWORD *)&v415[40] = 41;
        *(_QWORD *)&v415[72] = 0x7B900000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v417, v415);
        v193 = v376[0];
      }
      if ( (v193 & 3) != 1 )
        goto LABEL_350;
      v194 = (void *)(v193 - 1);
      v195 = *(_QWORD *)(v193 - 1);
      v196 = *(_QWORD *)(v193 + 7);
      if ( *(_QWORD *)v196 )
        (*(void (__fastcall **)(__int64))v196)(v195);
      v197 = *(_QWORD *)(v196 + 8);
      if ( v197 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v195, v197, *(_QWORD *)(v196 + 16));
      v198 = 24;
      v199 = 8;
      v200 = v194;
    }
    else
    {
      *(_QWORD *)v414 = std::time::SystemTime::now::h1fe79e41f9d5677f(v415, v192);
      *(_DWORD *)&v414[8] = v201;
      std::time::SystemTime::duration_since::had059553cab94f96(v415, v414, 0, 0);
      if ( v415[0] )
        v202 = 0;
      else
        v202 = *(_QWORD *)&v415[8];
      v376[0] = v202;
      uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v415);
      *(_QWORD *)&v414[8] = *(_QWORD *)&v415[8];
      *(_QWORD *)v414 = *(_QWORD *)v415;
      *(_QWORD *)v415 = v376;
      *(_QWORD *)&v415[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      *(_QWORD *)&v415[16] = v414;
      *(_QWORD *)&v415[24] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v397, &unk_1017CB9D3, v415);
      v203 = (unsigned __int64 *)v398;
      v204 = &v363;
      std::path::Path::_join::hb1a495d4f06b13b8(&v363, v190, v191, v398, v399);
      v205 = v397;
      if ( v397 )
      {
        v204 = v203;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v203, v397, 1);
      }
      v423 = nullptr;
      v425 = nullptr;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v204, v205);
      v206 = 9;
      v207 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
      if ( !v207 )
        goto LABEL_475;
      *(_QWORD *)v207 = 0x4164657461657263LL;
      *(_BYTE *)(v207 + 8) = 116;
      v417 = 9;
      v418 = v207;
      v419 = 9;
      *(_QWORD *)v414 = std::time::SystemTime::now::h1fe79e41f9d5677f(9, 1);
      *(_DWORD *)&v414[8] = v208;
      std::time::SystemTime::duration_since::had059553cab94f96(v415, v414, 0, 0);
      v209 = v415[0] ? 0LL : *(_QWORD *)&v415[8];
      LOBYTE(v401) = 2;
      v402 = nullptr;
      __n = v209;
      v210 = v414;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v423, &v417);
      if ( *(_QWORD *)v414 == 0x8000000000000000LL )
      {
        v211 = *(_QWORD *)&v414[8];
        v212 = 32LL * *(_QWORD *)&v414[24];
        v376[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
        v376[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
        v213 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
        v376[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
        v376[0] = v213;
        *(_QWORD *)(*(_QWORD *)&v414[8] + v212 + 24) = v404;
        *(_QWORD *)(v211 + v212 + 16) = __n;
        v214 = v401;
        v215 = v402;
        *(_QWORD *)(v211 + v212 + 8) = v402;
        *(_QWORD *)(v211 + v212) = v214;
        if ( LOBYTE(v376[0]) != 6 )
        {
          v210 = v376;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v376);
        }
      }
      else
      {
        *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
        *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
        *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
        *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
        *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
        *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
        *(_QWORD *)v415 = *(_QWORD *)v414;
        v395[3] = v404;
        v395[2] = __n;
        v395[1] = v402;
        v395[0] = v401;
        v210 = v376;
        v215 = v415;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v376,
          v415,
          v395);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v210, v215);
      v206 = 7;
      v216 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v216 )
        goto LABEL_475;
      *(_DWORD *)((char *)v216 + 3) = 1684369006;
      *v216 = 1851876211;
      v417 = 7;
      v418 = (size_t)v216;
      v419 = 7;
      LOBYTE(v401) = 2;
      v402 = nullptr;
      __n = *(_QWORD *)&v372[48];
      v217 = v414;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v423, &v417);
      if ( *(_QWORD *)v414 == 0x8000000000000000LL )
      {
        v218 = *(_QWORD *)&v414[8];
        v219 = 32LL * *(_QWORD *)&v414[24];
        v376[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
        v376[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
        v220 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
        v376[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
        v376[0] = v220;
        *(_QWORD *)(*(_QWORD *)&v414[8] + v219 + 24) = v404;
        *(_QWORD *)(v218 + v219 + 16) = __n;
        v221 = v401;
        v222 = v402;
        *(_QWORD *)(v218 + v219 + 8) = v402;
        *(_QWORD *)(v218 + v219) = v221;
        if ( LOBYTE(v376[0]) != 6 )
        {
          v217 = v376;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v376);
        }
      }
      else
      {
        *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
        *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
        *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
        *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
        *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
        *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
        *(_QWORD *)v415 = *(_QWORD *)v414;
        v395[3] = v404;
        v395[2] = __n;
        v395[1] = v402;
        v395[0] = v401;
        v217 = v376;
        v222 = v415;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v376,
          v415,
          v395);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v217, v222);
      v223 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v223 )
        goto LABEL_475;
      *(_DWORD *)((char *)v223 + 3) = 1735289203;
      *v223 = 1936943469;
      v417 = 7;
      v418 = (size_t)v223;
      v419 = 7;
      LOBYTE(v401) = 2;
      v402 = nullptr;
      __n = *(_QWORD *)&v372[56];
      v224 = v414;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v423, &v417);
      if ( *(_QWORD *)v414 == 0x8000000000000000LL )
      {
        v225 = *(_QWORD *)&v414[8];
        v226 = 32LL * *(_QWORD *)&v414[24];
        v376[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
        v376[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
        v227 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
        v376[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
        v376[0] = v227;
        *(_QWORD *)(*(_QWORD *)&v414[8] + v226 + 24) = v404;
        *(_QWORD *)(v225 + v226 + 16) = __n;
        v228 = v401;
        v229 = v402;
        *(_QWORD *)(v225 + v226 + 8) = v402;
        *(_QWORD *)(v225 + v226) = v228;
        if ( LOBYTE(v376[0]) != 6 )
        {
          v224 = v376;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v376);
        }
      }
      else
      {
        *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
        *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
        *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
        *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
        *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
        *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
        *(_QWORD *)v415 = *(_QWORD *)v414;
        v395[3] = v404;
        v395[2] = __n;
        v395[1] = v402;
        v395[0] = v401;
        v224 = v376;
        v229 = v415;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v376,
          v415,
          v395);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v224, v229);
      v206 = 8;
      v230 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
      if ( !v230 )
        goto LABEL_475;
      *v230 = 0x6465726F74736572LL;
      v417 = 8;
      v418 = (size_t)v230;
      v419 = 8;
      LOBYTE(v401) = 2;
      v402 = nullptr;
      __n = *(_QWORD *)&v372[64];
      v231 = v414;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v423, &v417);
      if ( *(_QWORD *)v414 == 0x8000000000000000LL )
      {
        v232 = *(_QWORD *)&v414[8];
        v233 = 32LL * *(_QWORD *)&v414[24];
        v376[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
        v376[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
        v234 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
        v376[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
        v376[0] = v234;
        *(_QWORD *)(*(_QWORD *)&v414[8] + v233 + 24) = v404;
        *(_QWORD *)(v232 + v233 + 16) = __n;
        v235 = v401;
        v236 = v402;
        *(_QWORD *)(v232 + v233 + 8) = v402;
        *(_QWORD *)(v232 + v233) = v235;
        if ( LOBYTE(v376[0]) != 6 )
        {
          v231 = v376;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v376);
        }
      }
      else
      {
        *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
        *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
        *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
        *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
        *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
        *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
        *(_QWORD *)v415 = *(_QWORD *)v414;
        v395[3] = v404;
        v395[2] = __n;
        v395[1] = v402;
        v395[0] = v401;
        v231 = v376;
        v236 = v415;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v376,
          v415,
          v395);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v231, v236);
      v237 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
      if ( !v237 )
        goto LABEL_475;
      *v237 = 0x646574616C6F7369LL;
      v417 = 8;
      v418 = (size_t)v237;
      v419 = 8;
      LOBYTE(v401) = 2;
      v402 = nullptr;
      __n = *(_QWORD *)&v372[72];
      v238 = v414;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v423, &v417);
      if ( *(_QWORD *)v414 == 0x8000000000000000LL )
      {
        v239 = *(_QWORD *)&v414[8];
        v240 = 32LL * *(_QWORD *)&v414[24];
        v376[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
        v376[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
        v241 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
        v376[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
        v376[0] = v241;
        *(_QWORD *)(*(_QWORD *)&v414[8] + v240 + 24) = v404;
        *(_QWORD *)(v239 + v240 + 16) = __n;
        v242 = v401;
        v243 = v402;
        *(_QWORD *)(v239 + v240 + 8) = v402;
        *(_QWORD *)(v239 + v240) = v242;
        if ( LOBYTE(v376[0]) != 6 )
        {
          v238 = v376;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v376);
        }
      }
      else
      {
        *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
        *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
        *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
        *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
        *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
        *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
        *(_QWORD *)v415 = *(_QWORD *)v414;
        v395[3] = v404;
        v395[2] = __n;
        v395[1] = v402;
        v395[0] = v401;
        v238 = v376;
        v243 = v415;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v376,
          v415,
          v395);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v238, v243);
      v206 = 9;
      v244 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
      if ( !v244 )
        goto LABEL_475;
      *(_QWORD *)v244 = 0x70756B6361426264LL;
      *(_BYTE *)(v244 + 8) = 115;
      v417 = 9;
      v418 = v244;
      v419 = 9;
      LOBYTE(v401) = 2;
      v402 = nullptr;
      __n = *(_QWORD *)&v372[80];
      v245 = v414;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v423, &v417);
      if ( *(_QWORD *)v414 == 0x8000000000000000LL )
      {
        v246 = *(_QWORD *)&v414[8];
        v247 = 32LL * *(_QWORD *)&v414[24];
        v376[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
        v376[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
        v248 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
        v376[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
        v376[0] = v248;
        *(_QWORD *)(*(_QWORD *)&v414[8] + v247 + 24) = v404;
        *(_QWORD *)(v246 + v247 + 16) = __n;
        v249 = v401;
        v250 = v402;
        *(_QWORD *)(v246 + v247 + 8) = v402;
        *(_QWORD *)(v246 + v247) = v249;
        if ( LOBYTE(v376[0]) != 6 )
        {
          v245 = v376;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v376);
        }
      }
      else
      {
        *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
        *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
        *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
        *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
        *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
        *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
        *(_QWORD *)v415 = *(_QWORD *)v414;
        v395[3] = v404;
        v395[2] = __n;
        v395[1] = v402;
        v395[0] = v401;
        v245 = v376;
        v250 = v415;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v376,
          v415,
          v395);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v245, v250);
      v206 = 6;
      v251 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v251 )
LABEL_475:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v206);
      *(_WORD *)(v251 + 4) = 29556;
      *(_DWORD *)v251 = 1852143205;
      v417 = 6;
      v418 = v251;
      v419 = 6;
      serde_core::ser::Serializer::collect_seq::haec271236ec55c6b(v415, v188, v189);
      if ( v415[0] == 6 )
      {
        *(_QWORD *)v414 = *(_QWORD *)&v415[8];
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, v414, &off_101974C58, &off_101974970);
      }
      v404 = *(_QWORD *)&v415[24];
      __n = *(_QWORD *)&v415[16];
      v402 = *(void **)&v415[8];
      v401 = *(_QWORD *)v415;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v423, &v417);
      if ( *(_QWORD *)v414 == 0x8000000000000000LL )
      {
        v252 = *(_QWORD *)&v414[8];
        v253 = 32LL * *(_QWORD *)&v414[24];
        v376[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
        v376[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
        v254 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
        v376[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
        v376[0] = v254;
        *(_QWORD *)(*(_QWORD *)&v414[8] + v253 + 24) = v404;
        *(_QWORD *)(v252 + v253 + 16) = __n;
        v255 = v401;
        *(_QWORD *)(v252 + v253 + 8) = v402;
        *(_QWORD *)(v252 + v253) = v255;
        if ( LOBYTE(v376[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v376);
      }
      else
      {
        *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
        *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
        *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
        *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
        *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
        *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
        *(_QWORD *)v415 = *(_QWORD *)v414;
        v395[3] = v404;
        v395[2] = __n;
        v395[1] = v402;
        v395[0] = v401;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v376,
          v415,
          v395);
      }
      v354 = (size_t)v423;
      v355 = v424;
      v356 = v425;
      LOBYTE(v353) = 5;
      v256 = &v353;
      serde_json::ser::to_vec_pretty::h1bb921fbfe3276cc(v414, &v353);
      v260 = *(_QWORD *)v414;
      if ( *(_QWORD *)v414 == 0x8000000000000000LL )
      {
        v261 = *(_QWORD **)&v414[8];
        v395[0] = *(_QWORD *)&v414[8];
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          v376[0] = v395;
          v376[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
          *(_QWORD *)&v415[48] = 2;
          *(_QWORD *)&v415[56] = &unk_10167D5D6;
          *(_QWORD *)&v415[64] = 51;
          *(_QWORD *)&v415[80] = &unk_1017CBA2F;
          *(_QWORD *)&v415[88] = v376;
          *(_QWORD *)v415 = 0;
          *(_QWORD *)&v415[8] = &unk_10167D5D6;
          *(_QWORD *)&v415[16] = 51;
          *(_QWORD *)&v415[24] = 0;
          *(_QWORD *)&v415[32] = "src/core/relay/codex_thread_visibility.rs";
          *(_QWORD *)&v415[40] = 41;
          *(_QWORD *)&v415[72] = 0x7CD00000001LL;
          v256 = (void **)v415;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v417, v415);
          v261 = (_QWORD *)v395[0];
        }
        if ( *v261 == 1 )
        {
          core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v261 + 1, v256, v257, v258, v259);
        }
        else if ( !*v261 )
        {
          v262 = v261[2];
          if ( v262 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v261[1], v262, 1);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v261, 40, 8);
      }
      else
      {
        v263 = *(_QWORD *)&v414[8];
        v264 = std::fs::write::inner::had0c1bee0a2c1e21(v364, v365, *(void **)&v414[8], *(size_t *)&v414[16]);
        if ( v260 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v263, v260, 1);
        if ( !v264 )
        {
          v270 = v363;
          *(_QWORD *)v415 = v364;
          *(_QWORD *)&v415[8] = v365;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v353);
LABEL_351:
          if ( v342 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, v342, 1);
          if ( *(_QWORD *)&v372[24] != 0x8000000000000000LL && *(_QWORD *)&v372[24] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v372[32], *(_QWORD *)&v372[24], 1);
          *(_QWORD *)&v372[24] = v270;
          *(_QWORD *)&v372[32] = *(_QWORD *)v415;
          *(_QWORD *)&v372[40] = *(_QWORD *)&v415[8];
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
          {
            *(_QWORD *)v414 = &v372[48];
            *(_QWORD *)&v414[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            *(_QWORD *)&v414[16] = &v372[56];
            *(_QWORD *)&v414[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            *(_QWORD *)&v414[32] = &v372[64];
            *(_QWORD *)&v414[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            *(_QWORD *)&v414[48] = &v372[72];
            *(_QWORD *)&v414[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            *(_QWORD *)&v414[64] = &v372[80];
            *(_QWORD *)&v414[72] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            *(_QWORD *)&v415[48] = 3;
            *(_QWORD *)&v415[56] = &unk_10167D5D6;
            *(_QWORD *)&v415[64] = 51;
            *(_QWORD *)&v415[80] = &unk_1017CBC01;
            *(_QWORD *)&v415[88] = v414;
            *(_QWORD *)v415 = 0;
            *(_QWORD *)&v415[8] = &unk_10167D5D6;
            *(_QWORD *)&v415[16] = 51;
            *(_QWORD *)&v415[24] = 0;
            *(_QWORD *)&v415[32] = "src/core/relay/codex_thread_visibility.rs";
            *(_QWORD *)&v415[40] = 41;
            *(_QWORD *)&v415[72] = 0x38F00000001LL;
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v417, v415);
          }
          goto LABEL_358;
        }
        v376[0] = v264;
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          *(_QWORD *)v414 = v376;
          *(_QWORD *)&v414[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
          *(_QWORD *)&v415[48] = 2;
          *(_QWORD *)&v415[56] = &unk_10167D5D6;
          *(_QWORD *)&v415[64] = 51;
          *(_QWORD *)&v415[80] = &unk_1017CB9F5;
          *(_QWORD *)&v415[88] = v414;
          *(_QWORD *)v415 = 0;
          *(_QWORD *)&v415[8] = &unk_10167D5D6;
          *(_QWORD *)&v415[16] = 51;
          *(_QWORD *)&v415[24] = 0;
          *(_QWORD *)&v415[32] = "src/core/relay/codex_thread_visibility.rs";
          *(_QWORD *)&v415[40] = 41;
          *(_QWORD *)&v415[72] = 0x7D200000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v417, v415);
          v264 = v376[0];
        }
        if ( (v264 & 3) == 1 )
        {
          v265 = *(_QWORD *)(v264 - 1);
          v266 = *(_QWORD *)(v264 + 7);
          if ( *(_QWORD *)v266 )
            (*(void (__fastcall **)(_QWORD))v266)(*(_QWORD *)(v264 - 1));
          v267 = *(_QWORD *)(v266 + 8);
          if ( v267 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v265, v267, *(_QWORD *)(v266 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v264 - 1, 24, 8);
        }
      }
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v353);
      v198 = v363;
      if ( !v363 )
      {
LABEL_350:
        v270 = 0x8000000000000000LL;
        goto LABEL_351;
      }
      v200 = v364;
      v199 = 1;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v200, v198, v199);
    goto LABEL_350;
  }
  v368 = *(_QWORD *)&v415[8] + 24LL * *(_QWORD *)&v415[16];
  v336 = v427[73];
  v337 = v427[74];
  v334 = (const void *)v427[43];
  v335 = v427[44];
  v347 = 24LL * *(_QWORD *)&v415[16] - 24;
  v346 = *(_QWORD *)&v415[8] + 32LL;
  v4 = *(__int64 **)&v415[8];
  while ( 1 )
  {
    v3 = v4 + 3;
    v343 = v4 + 3;
    v367 = *v4;
    if ( v367 == 0x8000000000000000LL )
    {
      v2 = v368;
      goto LABEL_259;
    }
    v5 = v4[2];
    v384 = (void *)v4[1];
    std::sys::fs::metadata::h32fa16d3052ea535(v415, v384, v5);
    if ( !v415[0] )
      break;
    if ( (v415[8] & 3) == 1 )
    {
      v8 = *(_QWORD *)&v415[8] - 1LL;
      v9 = *(_QWORD *)(*(_QWORD *)&v415[8] - 1LL);
      v10 = *(_QWORD *)(*(_QWORD *)&v415[8] + 7LL);
      if ( *(_QWORD *)v10 )
        (*(void (__fastcall **)(_QWORD))v10)(*(_QWORD *)(*(_QWORD *)&v415[8] - 1LL));
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24, 8);
    }
LABEL_247:
    if ( v367 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v384, v367, 1);
    v347 -= 24LL;
    v346 += 24;
    v4 = v3;
    if ( v3 == (__int64 *)v368 )
      goto LABEL_264;
  }
  codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::h5beb13caec9dc4af(
    v415,
    (__int64)v384,
    v5,
    v6,
    v7);
  if ( v415[104] == 3 )
  {
    qmemcpy(v414, v415, 0x60u);
    qmemcpy(v385, v414, 0x60u);
    goto LABEL_425;
  }
  qmemcpy(v414, v415, 0x68u);
  *(_DWORD *)&v378[3] = *(_DWORD *)&v415[108];
  *(_DWORD *)v378 = *(_DWORD *)&v415[105];
  qmemcpy(v376, v414, sizeof(v376));
  v377 = v415[104];
  codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::h29551f1dfa54e579(
    v415,
    (__int64)v376);
  v12 = *(_QWORD *)v415;
  v13 = *(_QWORD *)&v415[8];
  v14 = *(__int64 **)&v415[16];
  v15 = *(_QWORD *)&v415[24];
  if ( *(_QWORD *)v415 != 11 )
  {
    v268 = v385;
    v385[11] = *(_QWORD *)&v415[88];
    v268[10] = *(_QWORD *)&v415[80];
    v268[9] = *(_QWORD *)&v415[72];
    v268[8] = *(_QWORD *)&v415[64];
    v268[7] = *(_QWORD *)&v415[56];
    v268[6] = *(_QWORD *)&v415[48];
    v269 = *(_QWORD *)&v415[32];
    v268[5] = *(_QWORD *)&v415[40];
    v268[4] = v269;
    v268[1] = v13;
    v268[2] = v14;
    v268[3] = v15;
    *v268 = v12;
    goto LABEL_424;
  }
  *(_QWORD *)&v372[48] += *(_QWORD *)&v415[24];
  if ( !*(_QWORD *)&v415[24] )
  {
    if ( *(_QWORD *)&v415[8] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v415[16], 72LL * *(_QWORD *)&v415[8], 8);
LABEL_246:
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v376);
    goto LABEL_247;
  }
  v363 = *(_QWORD *)&v415[16];
  v365 = *(_QWORD *)&v415[8];
  v350 = *(_QWORD *)&v415[16] + 72LL * *(_QWORD *)&v415[24];
  v366 = v350;
  v16 = 0;
  v375 = 0;
  v373 = v5;
LABEL_15:
  v362 = v16;
  while ( 1 )
  {
    v364 = v14 + 9;
    v17 = *v14;
    v18 = (void *)v14[1];
    v360 = v14[8];
    v359 = (void *)v14[7];
    v358 = v14[6];
    v357 = v14[5];
    v356 = (_DWORD *)v14[4];
    v355 = v14[3];
    v354 = v14[2];
    v353 = v18;
    if ( v17 == 0x8000000000000000LL )
      goto LABEL_251;
    v391 = (__int64)(v14 + 9);
    v401 = v17;
    v409 = v360;
    v408 = v359;
    v407 = v358;
    v406 = v357;
    v405 = v356;
    v404 = v355;
    __n = v354;
    v402 = v353;
    v19 = v358;
    if ( v358 == 0x8000000000000000LL )
    {
      ++*(_QWORD *)&v372[56];
      v416 = nullptr;
      if ( (v362 & 1) == 0 )
        goto LABEL_148;
LABEL_178:
      v397 = (__int64)v402;
      v398 = __n;
      v423 = &v397;
      v424 = (__int64)&unk_1019747F0;
      rusqlite::Connection::execute::h1e8b76b744a4c88a(v414, v376, &unk_10167DB20, 75, &v423, 1);
      if ( *(_QWORD *)v414 != 0x8000000000000016LL )
      {
        *(_QWORD *)&v415[56] = *(_QWORD *)&v414[56];
        *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
        *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
        *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
        *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
        *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
        *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
        *(_QWORD *)v415 = *(_QWORD *)v414;
        v395[0] = &v397;
        v395[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        v395[2] = v415;
        v395[3] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v417, &unk_1017CB07D, v395);
        v321 = v417;
        v411 = v418;
        v412 = (_QWORD *)v419;
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v415);
        v322 = v411;
        v323 = v385;
        v385[3] = v412;
        v323[2] = v322;
        *v323 = 10;
        *((_BYTE *)v323 + 8) = v321;
        *((_BYTE *)v323 + 15) = HIBYTE(v321);
        *(_WORD *)((char *)v323 + 13) = HIDWORD(v321) >> 8;
        *(_DWORD *)((char *)v323 + 9) = v321 >> 8;
        goto LABEL_416;
      }
      if ( *(_QWORD *)&v414[8] )
      {
        ++*(_QWORD *)&v372[72];
        *(_QWORD *)v414 = &v401;
        *(_QWORD *)&v414[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v415, &unk_1017CBC9D, v414);
        v379 = *(char **)v415;
        v380 = *(_QWORD *)&v415[8];
        v381 = *(_QWORD *)&v415[16];
        v131 = v415;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v415, &v379);
        v132 = *(_QWORD *)&v372[16];
        if ( *(_QWORD *)&v372[16] == *(_QWORD *)v372 )
        {
          v131 = v372;
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v372);
        }
        v133 = *(_QWORD *)&v372[8];
        v134 = 3 * v132;
        *(_QWORD *)(*(_QWORD *)&v372[8] + 8 * v134 + 16) = *(_QWORD *)&v415[16];
        v135 = *(_QWORD *)v415;
        v136 = *(_QWORD *)&v415[8];
        *(_QWORD *)(v133 + 8 * v134 + 8) = *(_QWORD *)&v415[8];
        *(_QWORD *)(v133 + 8 * v134) = v135;
        *(_QWORD *)&v372[16] = v132 + 1;
        v388 = 0;
        v390 = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v131, v136);
        v137 = 6;
        v138 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v138 )
          goto LABEL_477;
        *(_WORD *)(v138 + 4) = 28271;
        *(_DWORD *)v138 = 1769235297;
        v411 = 6;
        v412 = (_QWORD *)v138;
        v413 = 6;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
        v139 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
        if ( !v139 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
        *(_DWORD *)((char *)v139 + 3) = 1702125932;
        *v139 = 1819243369;
        LOBYTE(v423) = 3;
        v424 = 7;
        v425 = v139;
        v426 = 7;
        v140 = v414;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v388, &v411);
        v141 = v415;
        if ( *(_QWORD *)v414 == 0x8000000000000000LL )
        {
          v142 = *(_QWORD *)&v414[8];
          v143 = 32LL * *(_QWORD *)&v414[24];
          v395[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
          v395[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
          v144 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
          v395[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
          v395[0] = v144;
          *(_QWORD *)(*(_QWORD *)&v414[8] + v143 + 24) = v426;
          *(_QWORD *)(v142 + v143 + 16) = v425;
          v145 = v423;
          v141 = (_BYTE *)v424;
          *(_QWORD *)(v142 + v143 + 8) = v424;
          *(_QWORD *)(v142 + v143) = v145;
          if ( LOBYTE(v395[0]) != 6 )
          {
            v140 = v395;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v395);
          }
        }
        else
        {
          *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
          *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
          *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
          *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
          *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
          *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
          *(_QWORD *)v415 = *(_QWORD *)v414;
          v420 = v426;
          v419 = (__int64)v425;
          v418 = v424;
          v417 = (__int64)v423;
          v140 = v395;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            v395,
            v415,
            &v417);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v140, v141);
        v137 = 8;
        v146 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
        if ( !v146 )
          goto LABEL_477;
        *v146 = 0x6449646165726874LL;
        v411 = 8;
        v412 = v146;
        v413 = 8;
        v147 = __n;
        if ( (__n & 0x8000000000000000LL) != 0LL )
        {
          v150 = 0;
LABEL_395:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v150, v147);
        }
        v148 = v402;
        if ( __n )
        {
          v421 = (size_t)v402;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, v402);
          v149 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v147, 1);
          v150 = 1;
          if ( !v149 )
            goto LABEL_395;
          v148 = (const void *)v421;
        }
        else
        {
          v149 = 1;
        }
        v151 = v149;
        memcpy((void *)v149, v148, v147);
        LOBYTE(v423) = 3;
        v424 = v147;
        v425 = (_DWORD *)v151;
        v426 = v147;
        v152 = v414;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v388, &v411);
        v153 = v415;
        if ( *(_QWORD *)v414 == 0x8000000000000000LL )
        {
          v154 = *(_QWORD *)&v414[8];
          v155 = 32LL * *(_QWORD *)&v414[24];
          v395[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
          v395[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
          v156 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
          v395[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
          v395[0] = v156;
          *(_QWORD *)(*(_QWORD *)&v414[8] + v155 + 24) = v426;
          *(_QWORD *)(v154 + v155 + 16) = v425;
          v157 = v423;
          v153 = (_BYTE *)v424;
          *(_QWORD *)(v154 + v155 + 8) = v424;
          *(_QWORD *)(v154 + v155) = v157;
          if ( LOBYTE(v395[0]) != 6 )
          {
            v152 = v395;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v395);
          }
        }
        else
        {
          *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
          *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
          *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
          *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
          *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
          *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
          *(_QWORD *)v415 = *(_QWORD *)v414;
          v420 = v426;
          v419 = (__int64)v425;
          v418 = v424;
          v417 = (__int64)v423;
          v152 = v395;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            v395,
            v415,
            &v417);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v152, v153);
        v137 = 11;
        v158 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
        if ( !v158 )
          goto LABEL_477;
        qmemcpy(v158, "rolloutPath", 11);
        v411 = 11;
        v412 = v158;
        v413 = 11;
        v159 = 1;
        if ( v19 == 0x8000000000000000LL )
          goto LABEL_202;
        v160 = *((_QWORD *)v416 + 2);
        v395[0] = *((_QWORD *)v416 + 1);
        v395[1] = v160;
        *(_QWORD *)v414 = 0;
        *(_QWORD *)&v414[8] = 1;
        *(_QWORD *)&v414[16] = 0;
        *(_QWORD *)&v415[16] = 1610612768;
        *(_QWORD *)v415 = v414;
        *(_QWORD *)&v415[8] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
        if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(
                                v395,
                                v415) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
            55,
            &v417,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
        v161 = *(_QWORD *)v414;
        v371 = *(void **)&v414[8];
        if ( *(_QWORD *)v414 == 0x8000000000000000LL )
        {
LABEL_202:
          v162 = 0;
          v161 = 0x8000000000000000LL;
        }
        else
        {
          v174 = *(_QWORD *)&v414[16];
          if ( *(__int64 *)&v414[16] < 0 )
          {
            v175 = 0;
LABEL_454:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v175, v174);
          }
          v370 = *(_QWORD *)&v414[16];
          if ( *(_QWORD *)&v414[16] )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v395, v415);
            v175 = 1;
            v176 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v370, 1);
            v174 = v370;
            if ( !v176 )
              goto LABEL_454;
          }
          else
          {
            v176 = 1;
          }
          v338 = v176;
          memcpy((void *)v176, v371, v174);
          v162 = 3;
          v159 = 0;
        }
        LOBYTE(v423) = v162;
        v424 = v370;
        v425 = (_DWORD *)v338;
        v426 = v370;
        v163 = v414;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v388, &v411);
        if ( *(_QWORD *)v414 == 0x8000000000000000LL )
        {
          v164 = *(_QWORD *)&v414[8];
          v165 = 32LL * *(_QWORD *)&v414[24];
          v395[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
          v395[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
          v166 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
          v395[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
          v395[0] = v166;
          *(_QWORD *)(*(_QWORD *)&v414[8] + v165 + 24) = v426;
          *(_QWORD *)(v164 + v165 + 16) = v425;
          v167 = v423;
          v168 = (_BYTE *)v424;
          *(_QWORD *)(v164 + v165 + 8) = v424;
          *(_QWORD *)(v164 + v165) = v167;
          if ( LOBYTE(v395[0]) != 6 )
          {
            v163 = v395;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v395);
          }
        }
        else
        {
          *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
          *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
          *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
          *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
          *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
          *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
          *(_QWORD *)v415 = *(_QWORD *)v414;
          v420 = v426;
          v419 = (__int64)v425;
          v418 = v424;
          v417 = (__int64)v423;
          v163 = v395;
          v168 = v415;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            v395,
            v415,
            &v417);
          LOBYTE(v395[0]) = 6;
        }
        if ( !((v161 == 0) | (unsigned __int8)v159) )
        {
          v163 = v371;
          v168 = (_BYTE *)v161;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v371, v161, 1);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v163, v168);
        v137 = 6;
        v169 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
        if ( !v169 )
LABEL_477:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v137);
        *(_WORD *)(v169 + 4) = 26740;
        *(_DWORD *)v169 = 1632658020;
        v411 = 6;
        v412 = (_QWORD *)v169;
        v413 = 6;
        v339 = v384;
        v340 = (void *)v373;
        *(_QWORD *)v414 = 0;
        *(_QWORD *)&v414[8] = 1;
        *(_QWORD *)&v414[16] = 0;
        *(_QWORD *)&v415[16] = 1610612768;
        *(_QWORD *)v415 = v414;
        *(_QWORD *)&v415[8] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
        if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(
                                &v339,
                                v415) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
            55,
            &v417,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
        v421 = *(_QWORD *)v414;
        v416 = *(void **)&v414[8];
        v170 = *(_QWORD *)&v414[16];
        if ( *(__int64 *)&v414[16] < 0 )
        {
          v172 = 0;
LABEL_452:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v172, v170);
        }
        if ( *(_QWORD *)&v414[16] )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v339, v415);
          v171 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v170, 1);
          v172 = 1;
          if ( !v171 )
            goto LABEL_452;
          v173 = v171;
        }
        else
        {
          v173 = 1;
        }
        memcpy((void *)v173, v416, v170);
        LOBYTE(v423) = 3;
        v424 = v170;
        v425 = (_DWORD *)v173;
        v426 = v170;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v388, &v411);
        if ( *(_QWORD *)v414 == 0x8000000000000000LL )
        {
          v177 = *(_QWORD *)&v414[8];
          v178 = 32LL * *(_QWORD *)&v414[24];
          v395[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
          v395[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
          v179 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
          v395[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
          v395[0] = v179;
          *(_QWORD *)(*(_QWORD *)&v414[8] + v178 + 24) = v426;
          *(_QWORD *)(v177 + v178 + 16) = v425;
          v180 = v423;
          *(_QWORD *)(v177 + v178 + 8) = v424;
          *(_QWORD *)(v177 + v178) = v180;
          if ( LOBYTE(v395[0]) != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v395);
        }
        else
        {
          *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
          *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
          *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
          *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
          *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
          *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
          *(_QWORD *)v415 = *(_QWORD *)v414;
          v420 = v426;
          v419 = (__int64)v425;
          v418 = v424;
          v417 = (__int64)v423;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            v395,
            v415,
            &v417);
        }
        if ( v421 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v416, v421, 1);
        v400 = v390;
        v399 = (__int64)v389;
        v398 = v388;
        LOBYTE(v397) = 5;
        v181 = v394;
        if ( v394 == v392 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v392);
        v182 = v393;
        v183 = 32 * v181;
        *(_QWORD *)(v393 + v183 + 24) = v400;
        *(_QWORD *)(v182 + v183 + 16) = v399;
        v184 = v397;
        *(_QWORD *)(v182 + v183 + 8) = v398;
        *(_QWORD *)(v182 + v183) = v184;
        v394 = v181 + 1;
        if ( v379 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v380, v379, 1);
        LOBYTE(v182) = 1;
        v375 = v182;
      }
      if ( v401 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v402, v401, 1);
      v16 = 0;
      if ( v407 != 0x8000000000000000LL && v407 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v408, v407, 1);
      if ( v404 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v405, v404, 1);
      v14 += 9;
      LOBYTE(v16) = 1;
      if ( v14 == (__int64 *)v350 )
      {
LABEL_251:
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8621f74bc492ec42(&v363);
        if ( (v375 & 1) != 0 )
          codexmate_lib::core::relay::codex_thread_visibility::checkpoint_after_committed_write::h67b31aee3cf0b26a(
            (__int64)v376,
            (__int64)"missing-rollout repair",
            22);
        goto LABEL_246;
      }
      goto LABEL_15;
    }
    std::sys::fs::metadata::h32fa16d3052ea535(v415, v408, v409);
    if ( v415[0] )
      break;
LABEL_136:
    if ( v401 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v402, v401, 1);
    if ( v407 != 0x8000000000000000LL && v407 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v408, v407, 1);
    if ( v404 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v405, v404, 1);
    v14 = (__int64 *)v391;
    if ( v391 == v350 )
      goto LABEL_251;
  }
  if ( (v415[8] & 3) == 1 )
  {
    v416 = (void *)(*(_QWORD *)&v415[8] - 1LL);
    v20 = *(_QWORD *)(*(_QWORD *)&v415[8] - 1LL);
    v21 = *(_QWORD *)(*(_QWORD *)&v415[8] + 7LL);
    if ( *(_QWORD *)v21 )
      (*(void (__fastcall **)(__int64))v21)(v20);
    v22 = *(_QWORD *)(v21 + 8);
    if ( v22 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v416, 24, 8);
  }
  ++*(_QWORD *)&v372[56];
  codexmate_lib::core::relay::codex_thread_visibility::find_trusted_rollout_backup::ha066b49cdc5f109c(
    &v339,
    v334,
    v335,
    (__int64)v402,
    __n,
    (__int64)v408,
    v409);
  if ( v339 != (void *)0x8000000000000000LL )
  {
    v410 = v339;
    v416 = v340;
    v421 = v341;
    v23 = v402;
    v24 = __n;
    v25 = v408;
    v26 = v409;
    v386 = v402;
    v387 = __n;
    std::sys::fs::metadata::h32fa16d3052ea535(v415, v408, v409);
    if ( *(_DWORD *)v415 != 1 )
      goto LABEL_68;
    if ( (v415[8] & 3) == 1 )
    {
      v422 = (void *)(*(_QWORD *)&v415[8] - 1LL);
      v27 = *(_QWORD *)(*(_QWORD *)&v415[8] - 1LL);
      v28 = *(_QWORD *)(*(_QWORD *)&v415[8] + 7LL);
      if ( *(_QWORD *)v28 )
        (*(void (__fastcall **)(__int64))v28)(v27);
      v29 = *(_QWORD *)(v28 + 8);
      if ( v29 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v422, 24, 8);
      v23 = v386;
      v24 = v387;
    }
    if ( !(unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::rollout_file_belongs_to_thread::h40fc6d4d854da212(
                             (__int64)v416,
                             v421,
                             v23,
                             v24) )
    {
      *(_QWORD *)v414 = v416;
      *(_QWORD *)&v414[8] = v421;
      *(_QWORD *)v415 = &v386;
      *(_QWORD *)&v415[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      *(_QWORD *)&v415[16] = v414;
      *(_QWORD *)&v415[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v395[1], &unk_1017CB7A1, v415);
      v395[0] = 10;
      goto LABEL_414;
    }
    v30 = std::path::Path::parent::h4c3ac26770731fbb(v25, v26);
    v422 = v31;
    v32 = v30;
    if ( !v30 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v26);
      v304 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
      if ( !v304 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26);
      qmemcpy(v304, "rollout path has no parent", 26);
      v395[0] = 9;
      v395[1] = 26;
      v395[2] = v304;
      v395[3] = 26;
      goto LABEL_414;
    }
    *(_WORD *)v415 = 511;
    v415[2] = 1;
    v33 = std::fs::DirBuilder::_create::h099c6e2853c95452(v415, v30, v422);
    if ( !v33 )
    {
      v34 = std::path::Path::file_name::hf6c2daad91e50ebf(v25, v26);
      if ( v34 )
      {
        core::str::converts::from_utf8::hb32deb9559450f6e(v415, v34, v35);
        v36 = *(char **)&v415[8];
        if ( v415[0] )
          v36 = "rolloutrollout changed while router migration was streaming; retry required";
        v37 = *(_QWORD *)&v415[16];
        if ( v415[0] )
          v37 = 7;
      }
      else
      {
        v37 = 7;
        v36 = "rolloutrollout changed while router migration was streaming; retry required";
      }
      v379 = v36;
      v380 = v37;
      v361 = std::process::id::ha72f58ec62264e78();
      uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v415);
      *(_QWORD *)&v414[8] = *(_QWORD *)&v415[8];
      *(_QWORD *)v414 = *(_QWORD *)v415;
      *(_QWORD *)v415 = &v379;
      *(_QWORD *)&v415[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      *(_QWORD *)&v415[16] = &v361;
      *(_QWORD *)&v415[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
      *(_QWORD *)&v415[32] = v414;
      *(_QWORD *)&v415[40] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v411, &unk_1017CB7D1, v415);
      v38 = v412;
      std::path::Path::_join::hb1a495d4f06b13b8(&v388, v32, v422, v412, v413);
      v374 = v32;
      if ( v411 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v411, 1);
      v39 = v390;
      v396 = v389;
      if ( (std::sys::fs::copy::hcda968f022f0a0e3(v416, v421, v389, v390) & 1) != 0 )
      {
        *(_QWORD *)v414 = v40;
        v305 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v396, v39);
        if ( (v305 & 3) == 1 )
        {
          v324 = v305 - 1;
          v325 = *(_QWORD *)(v305 - 1);
          v326 = *(_QWORD *)(v305 + 7);
          if ( *(_QWORD *)v326 )
            (*(void (__fastcall **)(__int64))v326)(v325);
          v327 = *(_QWORD *)(v326 + 8);
          if ( v327 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v325, v327, *(_QWORD *)(v326 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v324, 24, 8);
        }
        *(_QWORD *)v415 = &v386;
        *(_QWORD *)&v415[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        *(_QWORD *)&v415[16] = v414;
        *(_QWORD *)&v415[24] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v397, &unk_1017CB7E3, v415);
        v395[3] = v399;
        v395[2] = v398;
        v395[1] = v397;
        v395[0] = 10;
        if ( (v414[0] & 3) != 1 )
          goto LABEL_412;
        v306 = *(_QWORD *)v414 - 1LL;
        v307 = *(_QWORD *)(*(_QWORD *)v414 - 1LL);
        v308 = *(_QWORD *)(*(_QWORD *)v414 + 7LL);
        if ( *(_QWORD *)v308 )
          (*(void (__fastcall **)(__int64))v308)(v307);
      }
      else
      {
        *(_DWORD *)v414 = 0;
        *(_WORD *)&v414[4] = 438;
        *(_WORD *)&v414[10] = 0;
        *(_DWORD *)&v414[6] = 1;
        std::fs::OpenOptions::_open::h1dad73452047b8aa(v415, v414, v396, v39);
        if ( v415[0] )
        {
          if ( (v415[8] & 3) == 1 )
          {
            v382 = *(_QWORD *)&v415[8] - 1LL;
            v383 = *(_QWORD *)(*(_QWORD *)&v415[8] - 1LL);
            v41 = *(_QWORD *)(*(_QWORD *)&v415[8] + 7LL);
            if ( *(_QWORD *)v41 )
              (*(void (__fastcall **)(__int64))v41)(v383);
            v42 = *(_QWORD *)(v41 + 8);
            if ( v42 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v383, v42, *(_QWORD *)(v41 + 16));
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v382, 24, 8);
          }
        }
        else
        {
          v43 = *(_DWORD *)&v415[4];
          LODWORD(v379) = *(_DWORD *)&v415[4];
          v44 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v379);
          if ( (v44 & 3) == 1 )
          {
            v351 = v44 - 1;
            v383 = *(_QWORD *)(v44 - 1);
            v382 = *(_QWORD *)(v44 + 7);
            if ( *(_QWORD *)v382 )
              (*(void (__fastcall **)(__int64))v382)(v383);
            v105 = *(_QWORD *)(v382 + 8);
            if ( v105 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v383, v105, *(_QWORD *)(v382 + 16));
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v351, 24, 8);
          }
          close_NOCANCEL(v43);
        }
        v45 = std::sys::fs::rename::h7934e6142c921014(v396, v39, v25, v26);
        if ( !v45 )
        {
          codexmate_lib::core::relay::codex_thread_visibility::sync_parent_dir::hde074ded825d1d2d(v374, (__int64)v422);
          std::sys::fs::metadata::h32fa16d3052ea535(v415, v416, v421);
          v46 = *(_QWORD *)&v415[8];
          if ( *(_DWORD *)v415 == 1 )
          {
            *(_QWORD *)v415 = *(_QWORD *)&v415[8];
LABEL_59:
            v47 = 1000000000;
            if ( (v46 & 3) == 1 )
            {
              v374 = v46 - 1;
              v422 = *(void **)(v46 - 1);
              v46 = *(_QWORD *)(v46 + 7);
              if ( *(_QWORD *)v46 )
                (*(void (__fastcall **)(void *))v46)(v422);
              v48 = *(_QWORD *)(v46 + 8);
              if ( v48 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v422, v48, *(_QWORD *)(v46 + 16));
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v374, 24, 8);
            }
          }
          else
          {
            memcpy(&v414[8], &v415[16], 0x88u);
            *(_QWORD *)v414 = *(_QWORD *)&v415[8];
            std::fs::Metadata::modified::h0e075817eaa8c909(v415, v414);
            v47 = *(_DWORD *)&v415[8];
            v46 = *(_QWORD *)v415;
            if ( *(_DWORD *)&v415[8] == 1000000000 )
              goto LABEL_59;
          }
          codexmate_lib::core::relay::codex_thread_visibility::restore_rollout_mtime_best_effort::h1815d59067547dd1(
            (__int64)v25,
            v26,
            v46,
            v47);
          if ( (unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::rollout_file_belongs_to_thread::h40fc6d4d854da212(
                                  (__int64)v25,
                                  v26,
                                  v386,
                                  v387) )
          {
            if ( v388 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v396, v388, 1);
LABEL_68:
            ++*(_QWORD *)&v372[64];
            v395[0] = v416;
            v395[1] = v421;
            *(_QWORD *)v415 = &v401;
            *(_QWORD *)&v415[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            *(_QWORD *)&v415[16] = v395;
            *(_QWORD *)&v415[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v414, &unk_1017CBC89, v415);
            v379 = *(char **)v414;
            v380 = *(_QWORD *)&v414[8];
            v381 = *(_QWORD *)&v414[16];
            v49 = v415;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v415, &v379);
            v50 = *(_QWORD *)&v372[16];
            if ( *(_QWORD *)&v372[16] == *(_QWORD *)v372 )
            {
              v49 = v372;
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v372);
            }
            v51 = *(_QWORD *)&v372[8];
            v52 = 3 * v50;
            *(_QWORD *)(*(_QWORD *)&v372[8] + 8 * v52 + 16) = *(_QWORD *)&v415[16];
            v53 = *(_QWORD *)v415;
            v54 = *(_QWORD *)&v415[8];
            *(_QWORD *)(v51 + 8 * v52 + 8) = *(_QWORD *)&v415[8];
            *(_QWORD *)(v51 + 8 * v52) = v53;
            *(_QWORD *)&v372[16] = v50 + 1;
            v388 = 0;
            v390 = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v54);
            v55 = 6;
            v56 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
            if ( !v56 )
              goto LABEL_474;
            *(_WORD *)(v56 + 4) = 28271;
            *(_DWORD *)v56 = 1769235297;
            v411 = 6;
            v412 = (_QWORD *)v56;
            v413 = 6;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
            v57 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
            if ( !v57 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
            *(_DWORD *)((char *)v57 + 3) = 1701998452;
            *v57 = 1953719666;
            LOBYTE(v423) = 3;
            v424 = 7;
            v425 = v57;
            v426 = 7;
            v58 = v414;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v388, &v411);
            if ( *(_QWORD *)v414 == 0x8000000000000000LL )
            {
              v59 = *(_QWORD *)&v414[8];
              v60 = 32LL * *(_QWORD *)&v414[24];
              v395[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
              v395[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
              v61 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
              v395[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
              v395[0] = v61;
              *(_QWORD *)(*(_QWORD *)&v414[8] + v60 + 24) = v426;
              *(_QWORD *)(v59 + v60 + 16) = v425;
              v62 = v423;
              v63 = (_BYTE *)v424;
              *(_QWORD *)(v59 + v60 + 8) = v424;
              *(_QWORD *)(v59 + v60) = v62;
              if ( LOBYTE(v395[0]) != 6 )
              {
                v58 = v395;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v395);
              }
            }
            else
            {
              *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
              *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
              *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
              *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
              *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
              *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
              *(_QWORD *)v415 = *(_QWORD *)v414;
              v420 = v426;
              v419 = (__int64)v425;
              v418 = v424;
              v417 = (__int64)v423;
              v58 = v395;
              v63 = v415;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                v395,
                v415,
                &v417);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v58, v63);
            v55 = 8;
            v64 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
            if ( !v64 )
              goto LABEL_474;
            *v64 = 0x6449646165726874LL;
            v411 = 8;
            v412 = v64;
            v413 = 8;
            v65 = __n;
            if ( (__n & 0x8000000000000000LL) != 0LL )
            {
              v67 = 0;
LABEL_255:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v67, v65);
            }
            v66 = v402;
            if ( __n )
            {
              v422 = v402;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, v402);
              v67 = 1;
              v68 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v65, 1);
              if ( !v68 )
                goto LABEL_255;
              v69 = v68;
              v66 = v422;
            }
            else
            {
              v69 = 1;
            }
            memcpy((void *)v69, v66, v65);
            LOBYTE(v423) = 3;
            v424 = v65;
            v425 = (_DWORD *)v69;
            v426 = v65;
            v70 = v414;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v388, &v411);
            if ( *(_QWORD *)v414 == 0x8000000000000000LL )
            {
              v71 = *(_QWORD *)&v414[8];
              v72 = 32LL * *(_QWORD *)&v414[24];
              v395[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
              v395[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
              v73 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
              v395[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
              v395[0] = v73;
              *(_QWORD *)(*(_QWORD *)&v414[8] + v72 + 24) = v426;
              *(_QWORD *)(v71 + v72 + 16) = v425;
              v74 = v423;
              v75 = (_BYTE *)v424;
              *(_QWORD *)(v71 + v72 + 8) = v424;
              *(_QWORD *)(v71 + v72) = v74;
              if ( LOBYTE(v395[0]) != 6 )
              {
                v70 = v395;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v395);
              }
            }
            else
            {
              *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
              *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
              *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
              *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
              *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
              *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
              *(_QWORD *)v415 = *(_QWORD *)v414;
              v420 = v426;
              v419 = (__int64)v425;
              v418 = v424;
              v417 = (__int64)v423;
              v70 = v395;
              v75 = v415;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                v395,
                v415,
                &v417);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v75);
            v55 = 11;
            v76 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
            if ( !v76 )
              goto LABEL_474;
            qmemcpy(v76, "rolloutPath", 11);
            v411 = 11;
            v412 = v76;
            v413 = 11;
            v386 = v408;
            v387 = v409;
            *(_QWORD *)v414 = 0;
            *(_QWORD *)&v414[8] = 1;
            *(_QWORD *)&v414[16] = 0;
            *(_QWORD *)&v415[16] = 1610612768;
            *(_QWORD *)v415 = v414;
            *(_QWORD *)&v415[8] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
            if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(
                                    &v386,
                                    v415) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
                55,
                &v417,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
            v422 = *(void **)&v414[8];
            v77 = *(_QWORD *)&v414[16];
            v396 = *(void **)v414;
            if ( *(__int64 *)&v414[16] < 0 )
            {
              v78 = 0;
LABEL_257:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v78, v77);
            }
            if ( *(_QWORD *)&v414[16] )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v386, v415);
              v78 = 1;
              v79 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v77, 1);
              if ( !v79 )
                goto LABEL_257;
              v80 = v79;
            }
            else
            {
              v80 = 1;
            }
            memcpy((void *)v80, v422, v77);
            LOBYTE(v423) = 3;
            v424 = v77;
            v425 = (_DWORD *)v80;
            v426 = v77;
            v81 = v414;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v388, &v411);
            v82 = v396;
            if ( *(_QWORD *)v414 == 0x8000000000000000LL )
            {
              v83 = *(_QWORD *)&v414[8];
              v84 = 32LL * *(_QWORD *)&v414[24];
              v395[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
              v395[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
              v85 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
              v395[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
              v395[0] = v85;
              *(_QWORD *)(*(_QWORD *)&v414[8] + v84 + 24) = v426;
              *(_QWORD *)(v83 + v84 + 16) = v425;
              v86 = v423;
              v87 = (_BYTE *)v424;
              *(_QWORD *)(v83 + v84 + 8) = v424;
              *(_QWORD *)(v83 + v84) = v86;
              if ( LOBYTE(v395[0]) != 6 )
              {
                v81 = v395;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v395);
              }
            }
            else
            {
              *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
              *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
              *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
              *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
              *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
              *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
              *(_QWORD *)v415 = *(_QWORD *)v414;
              v420 = v426;
              v419 = (__int64)v425;
              v418 = v424;
              v417 = (__int64)v423;
              v81 = v395;
              v87 = v415;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                v395,
                v415,
                &v417);
            }
            if ( v82 )
            {
              v81 = v422;
              v87 = v82;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v422, v82, 1);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v81, v87);
            v55 = 10;
            v88 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
            if ( !v88 )
              goto LABEL_474;
            qmemcpy(v88, "backupPath", 10);
            v411 = 10;
            v412 = v88;
            v413 = 10;
            v386 = v416;
            v387 = v421;
            *(_QWORD *)v414 = 0;
            *(_QWORD *)&v414[8] = 1;
            *(_QWORD *)&v414[16] = 0;
            *(_QWORD *)&v415[16] = 1610612768;
            *(_QWORD *)v415 = v414;
            *(_QWORD *)&v415[8] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
            if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(
                                    &v386,
                                    v415) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
                55,
                &v417,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
            v421 = *(_QWORD *)&v414[8];
            v89 = *(_QWORD *)&v414[16];
            v422 = *(void **)v414;
            if ( *(__int64 *)&v414[16] < 0 )
            {
              v90 = 0;
LABEL_279:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v90, v89);
            }
            if ( *(_QWORD *)&v414[16] )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v386, v415);
              v90 = 1;
              v91 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v89, 1);
              if ( !v91 )
                goto LABEL_279;
              v92 = v91;
            }
            else
            {
              v92 = 1;
            }
            memcpy((void *)v92, (const void *)v421, v89);
            LOBYTE(v423) = 3;
            v424 = v89;
            v425 = (_DWORD *)v92;
            v426 = v89;
            v93 = v414;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v388, &v411);
            v94 = v422;
            if ( *(_QWORD *)v414 == 0x8000000000000000LL )
            {
              v95 = *(_QWORD *)&v414[8];
              v96 = 32LL * *(_QWORD *)&v414[24];
              v395[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
              v395[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
              v97 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
              v395[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
              v395[0] = v97;
              *(_QWORD *)(*(_QWORD *)&v414[8] + v96 + 24) = v426;
              *(_QWORD *)(v95 + v96 + 16) = v425;
              v98 = v423;
              v99 = (_BYTE *)v424;
              *(_QWORD *)(v95 + v96 + 8) = v424;
              *(_QWORD *)(v95 + v96) = v98;
              if ( LOBYTE(v395[0]) != 6 )
              {
                v93 = v395;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v395);
              }
            }
            else
            {
              *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
              *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
              *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
              *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
              *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
              *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
              *(_QWORD *)v415 = *(_QWORD *)v414;
              v420 = v426;
              v419 = (__int64)v425;
              v418 = v424;
              v417 = (__int64)v423;
              v93 = v395;
              v99 = v415;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                v395,
                v415,
                &v417);
            }
            if ( v94 )
            {
              v93 = (_BYTE *)v421;
              v99 = v94;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v421, v94, 1);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v93, v99);
            v55 = 6;
            v100 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
            if ( !v100 )
LABEL_474:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v55);
            *(_WORD *)(v100 + 4) = 26740;
            *(_DWORD *)v100 = 1632658020;
            v411 = 6;
            v412 = (_QWORD *)v100;
            v413 = 6;
            v386 = v384;
            v387 = v373;
            *(_QWORD *)v414 = 0;
            *(_QWORD *)&v414[8] = 1;
            *(_QWORD *)&v414[16] = 0;
            *(_QWORD *)&v415[16] = 1610612768;
            *(_QWORD *)v415 = v414;
            *(_QWORD *)&v415[8] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
            if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(
                                    &v386,
                                    v415) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
                55,
                &v417,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
                &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
            v421 = *(_QWORD *)&v414[8];
            v101 = *(_QWORD *)&v414[16];
            v422 = *(void **)v414;
            if ( *(__int64 *)&v414[16] < 0 )
            {
              v102 = 0;
LABEL_342:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v102, v101);
            }
            if ( *(_QWORD *)&v414[16] )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v386, v415);
              v102 = 1;
              v103 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v101, 1);
              if ( !v103 )
                goto LABEL_342;
              v104 = v103;
            }
            else
            {
              v104 = 1;
            }
            memcpy((void *)v104, (const void *)v421, v101);
            LOBYTE(v423) = 3;
            v424 = v101;
            v425 = (_DWORD *)v104;
            v426 = v101;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v414, &v388, &v411);
            if ( *(_QWORD *)v414 == 0x8000000000000000LL )
            {
              v106 = *(_QWORD *)&v414[8];
              v107 = 32LL * *(_QWORD *)&v414[24];
              v395[3] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 24);
              v395[2] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 16);
              v108 = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24]);
              v395[1] = *(_QWORD *)(*(_QWORD *)&v414[8] + 32LL * *(_QWORD *)&v414[24] + 8);
              v395[0] = v108;
              *(_QWORD *)(*(_QWORD *)&v414[8] + v107 + 24) = v426;
              *(_QWORD *)(v106 + v107 + 16) = v425;
              v109 = v423;
              *(_QWORD *)(v106 + v107 + 8) = v424;
              *(_QWORD *)(v106 + v107) = v109;
              if ( LOBYTE(v395[0]) != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v395);
            }
            else
            {
              *(_QWORD *)&v415[48] = *(_QWORD *)&v414[48];
              *(_QWORD *)&v415[40] = *(_QWORD *)&v414[40];
              *(_QWORD *)&v415[32] = *(_QWORD *)&v414[32];
              *(_QWORD *)&v415[24] = *(_QWORD *)&v414[24];
              *(_QWORD *)&v415[16] = *(_QWORD *)&v414[16];
              *(_QWORD *)&v415[8] = *(_QWORD *)&v414[8];
              *(_QWORD *)v415 = *(_QWORD *)v414;
              v420 = v426;
              v419 = (__int64)v425;
              v418 = v424;
              v417 = (__int64)v423;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                v395,
                v415,
                &v417);
            }
            if ( v422 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v421, v422, 1);
            v400 = v390;
            v399 = (__int64)v389;
            v398 = v388;
            LOBYTE(v397) = 5;
            v110 = v394;
            if ( v394 == v392 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v392);
            v111 = v393;
            v112 = 32 * v110;
            *(_QWORD *)(v393 + v112 + 24) = v400;
            *(_QWORD *)(v111 + v112 + 16) = v399;
            v113 = v397;
            *(_QWORD *)(v111 + v112 + 8) = v398;
            *(_QWORD *)(v111 + v112) = v113;
            v394 = v110 + 1;
            if ( v379 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v380, v379, 1);
            if ( v410 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v416, v410, 1);
            goto LABEL_136;
          }
          *(_QWORD *)v414 = v25;
          *(_QWORD *)&v414[8] = v26;
          *(_QWORD *)v415 = &v386;
          *(_QWORD *)&v415[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
          *(_QWORD *)&v415[16] = v414;
          *(_QWORD *)&v415[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v417, &unk_1017CB832, v415);
          v395[3] = v419;
          v395[2] = v418;
          v395[1] = v417;
          v395[0] = 10;
LABEL_412:
          if ( v388 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v396, v388, 1);
LABEL_414:
          qmemcpy(v385, v395, 0x60u);
          if ( v410 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v416, v410, 1);
          goto LABEL_416;
        }
        *(_QWORD *)v414 = v45;
        v309 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v396, v39);
        if ( (v309 & 3) == 1 )
        {
          v328 = v309 - 1;
          v329 = *(_QWORD *)(v309 - 1);
          v330 = *(_QWORD *)(v309 + 7);
          if ( *(_QWORD *)v330 )
            (*(void (__fastcall **)(__int64))v330)(v329);
          v331 = *(_QWORD *)(v330 + 8);
          if ( v331 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v329, v331, *(_QWORD *)(v330 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v328, 24, 8);
        }
        *(_QWORD *)v415 = &v386;
        *(_QWORD *)&v415[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        *(_QWORD *)&v415[16] = v414;
        *(_QWORD *)&v415[24] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v423, &unk_1017CB809, v415);
        v395[3] = v425;
        v395[2] = v424;
        v395[1] = v423;
        v395[0] = 10;
        if ( (v414[0] & 3) != 1 )
          goto LABEL_412;
        v306 = *(_QWORD *)v414 - 1LL;
        v307 = *(_QWORD *)(*(_QWORD *)v414 - 1LL);
        v308 = *(_QWORD *)(*(_QWORD *)v414 + 7LL);
        if ( *(_QWORD *)v308 )
          (*(void (__fastcall **)(_QWORD))v308)(*(_QWORD *)(*(_QWORD *)v414 - 1LL));
      }
      v310 = *(_QWORD *)(v308 + 8);
      if ( v310 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v307, v310, *(_QWORD *)(v308 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v306, 24, 8);
      goto LABEL_412;
    }
    v395[0] = 2;
    v395[1] = v33;
    goto LABEL_414;
  }
  v416 = &v407;
  if ( (v362 & 1) != 0 )
    goto LABEL_178;
LABEL_148:
  std::path::Path::_join::hb1a495d4f06b13b8(
    &v417,
    v336,
    v337,
    "state-db-backupscodex-session.mdproxy_last_errorlast_codex_routeregistry-backupsquota-store.json",
    16);
  *(_WORD *)v415 = 511;
  v415[2] = 1;
  v114 = v418;
  v115 = v419;
  v421 = v418;
  v116 = std::fs::DirBuilder::_create::h099c6e2853c95452(v415, v418, v419);
  if ( v116 )
  {
    v117 = 2;
    goto LABEL_172;
  }
  *(_QWORD *)v414 = std::time::SystemTime::now::h1fe79e41f9d5677f(v415, v114);
  *(_DWORD *)&v414[8] = v118;
  std::time::SystemTime::duration_since::had059553cab94f96(v415, v414, 0, 0);
  if ( v415[0] )
    v119 = 0;
  else
    v119 = *(_QWORD *)&v415[8];
  v388 = v119;
  v120 = std::path::Path::file_name::hf6c2daad91e50ebf(v384, v373);
  if ( v120 )
  {
    core::str::converts::from_utf8::hb32deb9559450f6e(v415, v120, v121);
    v122 = *(void **)&v415[8];
    if ( v415[0] )
      v122 = &unk_10167DF4E;
    v123 = *(_QWORD *)&v415[16];
    if ( v415[0] )
      v123 = 12;
  }
  else
  {
    v123 = 12;
    v122 = &unk_10167DF4E;
  }
  v397 = (__int64)v122;
  v398 = v123;
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v415);
  v424 = *(_QWORD *)&v415[8];
  v423 = *(__int64 **)v415;
  *(_QWORD *)v415 = &v388;
  *(_QWORD *)&v415[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  *(_QWORD *)&v415[16] = &v423;
  *(_QWORD *)&v415[24] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
  *(_QWORD *)&v415[32] = &v397;
  *(_QWORD *)&v415[40] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v414, &unk_1017CBD23, v415);
  v124 = *(_QWORD *)&v414[8];
  std::path::Path::_join::hb1a495d4f06b13b8(v395, v421, v115, *(_QWORD *)&v414[8], *(_QWORD *)&v414[16]);
  if ( *(_QWORD *)v414 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, *(_QWORD *)v414, 1);
  v125 = v395[2];
  v410 = (void *)v395[1];
  if ( (std::sys::fs::copy::hcda968f022f0a0e3(v384, v373, (void *)v395[1], v395[2]) & 1) != 0 )
  {
    v411 = v126;
    v423 = &v411;
    v424 = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v415, &unk_1017CBD47, &v423);
    v116 = *(_QWORD *)v415;
    v369 = *(void **)&v415[8];
    v352 = *(_QWORD *)&v415[16];
    if ( (v411 & 3) == 1 )
    {
      v422 = (void *)(v411 - 1);
      v391 = *(_QWORD *)(v411 - 1);
      v127 = *(_QWORD *)(v411 + 7);
      if ( *(_QWORD *)v127 )
        (*(void (__fastcall **)(__int64))v127)(v391);
      v128 = *(_QWORD *)(v127 + 8);
      if ( v128 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v391, v128, *(_QWORD *)(v127 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v422, 24, 8);
    }
    if ( v395[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v410, v395[0], 1);
    v117 = 10;
LABEL_172:
    v391 = v117;
    v129 = 0;
    v130 = v417;
    if ( v417 )
LABEL_173:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v421, v130, 1);
  }
  else
  {
    v352 = v125;
    v116 = v395[0];
    v391 = 11;
    v129 = 1;
    v369 = v410;
    v130 = v417;
    if ( v417 )
      goto LABEL_173;
  }
  if ( v129 )
  {
    if ( v116 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v369, v116, 1);
    ++*(_QWORD *)&v372[80];
    goto LABEL_178;
  }
  v332 = v385;
  v385[2] = v369;
  v332[3] = v352;
  *v332 = v391;
  v332[1] = v116;
LABEL_416:
  if ( v401 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v402, v401, 1);
  if ( v407 != 0x8000000000000000LL && v407 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v408, v407, 1);
  if ( v404 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v405, v404, 1);
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8621f74bc492ec42(&v363);
LABEL_424:
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v376);
LABEL_425:
  if ( v367 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v384, v367, 1);
  v311 = (_QWORD *)v346;
  if ( (__int64 *)v368 != v3 )
  {
    v312 = v347 / 0x18;
    do
    {
      v313 = *(v311 - 1);
      if ( v313 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v311, v313, 1);
      v311 += 3;
      --v312;
    }
    while ( v312 );
  }
  if ( v348 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v349, 24 * v348, 8);
LABEL_434:
  v314 = v393;
  for ( j = v394 + 1; j != 1; --j )
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v314);
    v314 += 32;
  }
  if ( v392 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v393, 32 * v392, 8);
  if ( *(_QWORD *)&v372[24] != 0x8000000000000000LL && *(_QWORD *)&v372[24] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v372[32], *(_QWORD *)&v372[24], 1);
  v316 = *(_QWORD *)&v372[8];
  v317 = *(_QWORD *)&v372[16];
  if ( *(_QWORD *)&v372[16] )
  {
    v318 = (_QWORD *)(*(_QWORD *)&v372[8] + 8LL);
    do
    {
      v319 = *(v318 - 1);
      if ( v319 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v318, v319, 1);
      v318 += 3;
      --v317;
    }
    while ( v317 );
  }
  if ( *(_QWORD *)v372 )
  {
    v290 = 24LL * *(_QWORD *)v372;
    v289 = v316;
LABEL_449:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v289, v290, 8);
  }
  return v385;
}
