// __ZN13codexmate_lib4core5relay10translator37translate_anthropic_message_to_openai @ 0x10087d9f0 | 基线 same-set
// [FULL IDA decompiler]

__int64 __fastcall codexmate_lib::core::relay::translator::translate_anthropic_message_to_openai::hf77050f34a40c814(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int8 *v5; // r15
  __m256i *v6; // rdi
  size_t v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  _DWORD *v12; // rax
  __int64 v13; // r15
  unsigned __int8 *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rbx
  __m256i *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  _BYTE *v22; // rsi
  _DWORD *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r12
  int v27; // r13d
  char *v28; // r15
  size_t v29; // r14
  size_t v30; // rcx
  signed __int64 v31; // rbx
  size_t v32; // rax
  __int64 v33; // r14
  _DWORD *v34; // rax
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // r14
  __m256i *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  _BYTE *v43; // rsi
  _DWORD *v44; // rax
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  _QWORD *v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  size_t v57; // rsi
  __int64 v58; // rdx
  size_t v59; // rdi
  __int64 v60; // rax
  _DWORD *v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  const void *v64; // r12
  size_t v65; // rbx
  __int64 v66; // r13
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  const void *v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rax
  char *v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // r12
  __int64 v77; // rsi
  _BYTE *v78; // rdi
  __int64 *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 *v82; // rdi
  __int64 v83; // rsi
  __int64 *v84; // r13
  _WORD *v85; // rax
  void *v86; // rbx
  __int64 v87; // rsi
  __int64 v88; // rbx
  _WORD *v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rax
  size_t v92; // r12
  __m256i *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rdx
  _BYTE *v98; // rsi
  _DWORD *v99; // rax
  _QWORD *v100; // rax
  __m256i *v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rdx
  _BYTE *v106; // rsi
  _QWORD *v107; // rax
  __int64 v108; // rbx
  _DWORD *v109; // rax
  __int64 v110; // rbx
  __int64 v111; // rax
  size_t v112; // r12
  __m256i *v113; // rdi
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rdx
  _BYTE *v118; // rsi
  __int64 v119; // rax
  __int64 v120; // r13
  __int64 v121; // rax
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rdx
  size_t v131; // rbx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdx
  char *v135; // r15
  size_t v136; // r13
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rax
  const void *v141; // r14
  size_t v142; // rbx
  __int64 v143; // r12
  size_t v144; // r14
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  const void *v148; // rbx
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rbx
  __int64 v152; // r12
  __int64 v153; // rbx
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // rdx
  _QWORD *v161; // rdi
  __int64 v162; // rbx
  __int64 v163; // rax
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // rbx
  _DWORD *v167; // rax
  __int64 v168; // rax
  __m256i *v169; // rdi
  __int64 v170; // rax
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rdx
  _BYTE *v174; // rsi
  __int64 v175; // rdx
  __int64 v176; // rax
  __int64 v177; // rcx
  void *v178; // rsi
  size_t v179; // rax
  size_t v180; // r14
  void *v181; // r15
  signed __int64 v182; // rbx
  __int64 v183; // r12
  _DWORD *v184; // rax
  _DWORD *v185; // rax
  __m256i *v186; // rdi
  __int64 v187; // rax
  __int64 v188; // rcx
  __int64 v189; // rdx
  __int64 v190; // rdx
  _BYTE *v191; // rsi
  void *v192; // rax
  void *v193; // r14
  __int64 v194; // r15
  __int64 v195; // rax
  __int64 v196; // r12
  __m256i *v197; // rdi
  __int64 v198; // rax
  __int64 v199; // rcx
  __int64 v200; // rdx
  __int64 v201; // rdx
  _BYTE *v202; // rsi
  _DWORD *v203; // rax
  __int64 v204; // rax
  __int64 v205; // rcx
  __int64 v206; // rdx
  __int64 v207; // rdx
  _QWORD *v208; // rdi
  __int64 v209; // rbx
  __int64 v210; // rax
  __int64 v211; // rcx
  __int64 v212; // rdx
  __int64 v213; // rbx
  _DWORD *v214; // rax
  _DWORD *v215; // rax
  __m256i *v216; // rdi
  __int64 v217; // rax
  __int64 v218; // rcx
  __int64 v219; // rdx
  __int64 v220; // rdx
  _BYTE *v221; // rsi
  _DWORD *v222; // rax
  char v223; // al
  __m256i *v224; // rdi
  __int64 v225; // rax
  __int64 v226; // rcx
  __int64 v227; // rdx
  __int64 v228; // rdx
  _BYTE *v229; // rsi
  void *v230; // rax
  __int64 v231; // rax
  __int64 v232; // rcx
  __int64 v233; // rdx
  __int64 v234; // rdx
  _QWORD *v235; // rdi
  __int64 v236; // rbx
  __int64 v237; // rax
  __int64 v238; // rcx
  __int64 v239; // rdx
  _QWORD *v240; // rdi
  __int64 v241; // rbx
  __int64 v242; // rax
  __int64 v243; // rcx
  __int64 v244; // rdx
  __int64 v245; // rbx
  _QWORD *v246; // r14
  __int64 v247; // rsi
  size_t v248; // rax
  _DWORD *v249; // rax
  __int64 v250; // rsi
  __int64 v251; // r14
  size_t v252; // rbx
  __int64 v253; // r15
  __int64 v254; // rax
  __int64 v255; // r13
  __int64 v256; // rax
  __int64 v257; // rcx
  __int64 v258; // rdx
  __int64 v259; // rdx
  _QWORD *v260; // rdi
  __int64 v261; // rbx
  __int64 v262; // rax
  __int64 v263; // rcx
  __int64 v264; // rdx
  size_t v265; // rbx
  _QWORD *v266; // r14
  __int64 v267; // rsi
  __int64 v269; // [rsp+8h] [rbp-278h] BYREF
  __int128 v270; // [rsp+10h] [rbp-270h]
  int v271; // [rsp+24h] [rbp-25Ch]
  _QWORD *v272; // [rsp+28h] [rbp-258h]
  __int64 v273; // [rsp+30h] [rbp-250h]
  __int64 v274; // [rsp+38h] [rbp-248h] BYREF
  _QWORD *v275; // [rsp+40h] [rbp-240h]
  __int64 v276; // [rsp+48h] [rbp-238h]
  __int64 v277; // [rsp+50h] [rbp-230h] BYREF
  __int64 v278; // [rsp+58h] [rbp-228h]
  void *v279; // [rsp+60h] [rbp-220h]
  size_t v280; // [rsp+68h] [rbp-218h]
  __int64 v281; // [rsp+70h] [rbp-210h] BYREF
  __int64 v282; // [rsp+78h] [rbp-208h]
  __int64 v283; // [rsp+80h] [rbp-200h]
  __int64 v284; // [rsp+88h] [rbp-1F8h]
  size_t v285; // [rsp+90h] [rbp-1F0h] BYREF
  __int64 v286; // [rsp+98h] [rbp-1E8h]
  __int64 v287; // [rsp+A0h] [rbp-1E0h]
  void *v288; // [rsp+A8h] [rbp-1D8h]
  size_t v289; // [rsp+B0h] [rbp-1D0h]
  __int64 v290; // [rsp+B8h] [rbp-1C8h] BYREF
  _DWORD *v291; // [rsp+C0h] [rbp-1C0h]
  __int64 v292; // [rsp+C8h] [rbp-1B8h]
  __int64 v293; // [rsp+D0h] [rbp-1B0h] BYREF
  __int64 v294; // [rsp+D8h] [rbp-1A8h]
  __int64 v295; // [rsp+E0h] [rbp-1A0h]
  __int64 v296; // [rsp+E8h] [rbp-198h] BYREF
  size_t v297; // [rsp+F0h] [rbp-190h]
  __int64 v298; // [rsp+F8h] [rbp-188h]
  void *v299; // [rsp+100h] [rbp-180h]
  void *__dst; // [rsp+108h] [rbp-178h]
  size_t v301; // [rsp+110h] [rbp-170h] BYREF
  __int64 v302; // [rsp+118h] [rbp-168h]
  size_t v303; // [rsp+120h] [rbp-160h]
  __int64 v304; // [rsp+128h] [rbp-158h] BYREF
  __int64 v305; // [rsp+130h] [rbp-150h]
  __int64 v306; // [rsp+138h] [rbp-148h]
  __int64 v307; // [rsp+140h] [rbp-140h]
  _QWORD *v308; // [rsp+148h] [rbp-138h]
  void *__src; // [rsp+150h] [rbp-130h]
  __int64 v310; // [rsp+158h] [rbp-128h] BYREF
  _DWORD *v311; // [rsp+160h] [rbp-120h]
  __int64 v312; // [rsp+168h] [rbp-118h]
  __int64 v313; // [rsp+170h] [rbp-110h]
  __int64 v314; // [rsp+178h] [rbp-108h] BYREF
  size_t v315; // [rsp+180h] [rbp-100h]
  __int64 v316; // [rsp+188h] [rbp-F8h]
  size_t v317; // [rsp+190h] [rbp-F0h]
  __m256i v318; // [rsp+198h] [rbp-E8h] BYREF
  __int64 v319; // [rsp+1B8h] [rbp-C8h]
  __int64 v320; // [rsp+1C0h] [rbp-C0h]
  __int64 v321; // [rsp+1C8h] [rbp-B8h]
  __m256i v322; // [rsp+1D0h] [rbp-B0h] BYREF
  _BYTE v323[56]; // [rsp+1F0h] [rbp-90h] BYREF
  size_t v324; // [rsp+228h] [rbp-58h]
  __int64 v325; // [rsp+230h] [rbp-50h]
  size_t v326; // [rsp+238h] [rbp-48h]
  _DWORD *v327; // [rsp+240h] [rbp-40h]
  size_t v328; // [rsp+248h] [rbp-38h]
  size_t v329; // [rsp+250h] [rbp-30h]

  v308 = a2;
  v3 = 4;
  v4 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
         "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
         4,
         a1);
  v5 = (unsigned __int8 *)"usercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
  if ( v4 && *(_BYTE *)v4 == 3 )
  {
    v5 = *(unsigned __int8 **)(v4 + 16);
    v3 = *(_QWORD *)(v4 + 24);
  }
  v6 = (__m256i *)"contentpattern.output_modehead_limit";
  v7 = 7;
  v8 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "contentpattern.output_modehead_limit",
                    7,
                    a1);
  if ( v8 )
  {
    switch ( *(_BYTE *)v8 )
    {
      case 0:
        v323[0] = 0;
        break;
      case 1:
      case 2:
        *(_QWORD *)&v323[24] = v8[3];
        *(_QWORD *)&v323[16] = v8[2];
        v9 = *v8;
        *(_QWORD *)&v323[8] = v8[1];
        *(_QWORD *)v323 = v9;
        break;
      case 3:
        v7 = (size_t)(v8 + 1);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v323[8], v8 + 1);
        v323[0] = 3;
        break;
      case 4:
        v7 = (size_t)(v8 + 1);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v323[8], v8 + 1);
        v323[0] = 4;
        break;
      case 5:
        if ( v8[3] )
        {
          v7 = v8[1];
          if ( !v7 )
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &v323[8],
            v7,
            v8[2]);
        }
        else
        {
          *(_QWORD *)&v323[8] = 0;
          *(_QWORD *)&v323[24] = 0;
        }
        v323[0] = 5;
        break;
    }
    v280 = *(_QWORD *)&v323[24];
    v279 = *(void **)&v323[16];
    v278 = *(_QWORD *)&v323[8];
    v277 = *(_QWORD *)v323;
    v323[0] = 0;
    v6 = (__m256i *)v323;
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v323);
    v10 = (unsigned __int8)v277;
    if ( (unsigned __int8)v277 != 3 )
      goto LABEL_36;
    v304 = 0;
    v306 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v323, v7);
    v11 = 4;
    v12 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v12 )
      goto LABEL_340;
    *v12 = 1701605234;
    v310 = 4;
    v311 = v12;
    v312 = 4;
    if ( v3 < 0 )
    {
      v13 = 0;
      goto LABEL_11;
    }
    if ( v3 )
    {
      v14 = v5;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v13 = 1;
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1);
      if ( !v15 )
LABEL_11:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v3);
      v16 = v15;
      v5 = v14;
    }
    else
    {
      v16 = 1;
    }
    memcpy((void *)v16, v5, v3);
    LOBYTE(v325) = 3;
    v326 = v3;
    v327 = (_DWORD *)v16;
    v328 = v3;
    v17 = &v318;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v304, &v310);
    if ( __OFSUB__(0, v318.i64[0]) )
    {
      v18 = v318.i64[1];
      v19 = 32 * v318.i64[3];
      v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
      v20 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
      v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
      v322.i64[0] = v20;
      *(_QWORD *)(v318.i64[1] + v19 + 24) = v328;
      *(_QWORD *)(v18 + v19 + 16) = v327;
      v21 = v325;
      v22 = (_BYTE *)v326;
      *(_QWORD *)(v18 + v19 + 8) = v326;
      *(_QWORD *)(v18 + v19) = v21;
      if ( v322.i8[0] != 6 )
      {
        v17 = &v322;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
      }
    }
    else
    {
      *(_QWORD *)&v323[48] = v321;
      *(_QWORD *)&v323[40] = v320;
      *(_QWORD *)&v323[32] = v319;
      *(__m256i *)v323 = v318;
      v317 = v328;
      v316 = (__int64)v327;
      v315 = v326;
      v314 = v325;
      v17 = &v322;
      v22 = v323;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v322,
        v323,
        &v314);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v22);
    v11 = 7;
    v23 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v23 )
LABEL_340:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v11);
    *(_DWORD *)((char *)v23 + 3) = 1953391988;
    *v23 = 1953394531;
    v310 = 7;
    v311 = v23;
    v312 = 7;
    if ( (v280 & 0x8000000000000000LL) != 0LL )
    {
      v24 = 0;
      goto LABEL_29;
    }
    if ( v280 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v24 = 1;
      v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v280, 1);
      if ( !v25 )
LABEL_29:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, v280);
      v26 = v25;
    }
    else
    {
      v26 = 1;
    }
    memcpy((void *)v26, v279, v280);
    LOBYTE(v325) = 3;
    v326 = v280;
    v327 = (_DWORD *)v26;
    v328 = v280;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v304, &v310);
    if ( v318.i64[0] == 0x8000000000000000LL )
    {
      v157 = v318.i64[1];
      v158 = 32 * v318.i64[3];
      v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
      v159 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
      v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
      v322.i64[0] = v159;
      *(_QWORD *)(v318.i64[1] + v158 + 24) = v328;
      *(_QWORD *)(v157 + v158 + 16) = v327;
      v160 = v325;
      *(_QWORD *)(v157 + v158 + 8) = v326;
      *(_QWORD *)(v157 + v158) = v160;
      if ( v322.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
    }
    else
    {
      *(_QWORD *)&v323[48] = v321;
      *(_QWORD *)&v323[40] = v320;
      *(_QWORD *)&v323[32] = v319;
      *(__m256i *)v323 = v318;
      v317 = v328;
      v316 = (__int64)v327;
      v315 = v326;
      v314 = v325;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v322,
        v323,
        &v314);
    }
    *(_QWORD *)&v323[8] = v304;
    *(_QWORD *)&v323[16] = v305;
    *(_QWORD *)&v323[24] = v306;
    v323[0] = 5;
    v161 = v308;
    v162 = v308[2];
    if ( v162 == *v308 )
    {
      ((void (*)(void))alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab)();
      v161 = v308;
    }
    v163 = v161[1];
    v164 = 32 * v162;
    *(_QWORD *)(v163 + v164 + 24) = *(_QWORD *)&v323[24];
    *(_QWORD *)(v163 + v164 + 16) = *(_QWORD *)&v323[16];
    v165 = *(_QWORD *)v323;
    *(_QWORD *)(v163 + v164 + 8) = *(_QWORD *)&v323[8];
    *(_QWORD *)(v163 + v164) = v165;
    v161[2] = v162 + 1;
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v277);
  }
  v323[0] = 0;
  v278 = *(_QWORD *)&v323[8];
  v279 = *(void **)&v323[16];
  v280 = *(_QWORD *)&v323[24];
  v277 = *(_QWORD *)v323;
  v10 = 0;
LABEL_36:
  if ( v10 != 4 )
    goto LABEL_43;
  if ( v3 != 4 )
  {
    if ( v3 == 9 )
    {
      v27 = 1769173857;
      if ( !(*(_QWORD *)v5 ^ 0x6E61747369737361LL | v5[8] ^ 0x74LL) )
      {
        v285 = 0;
        v286 = 8;
        v287 = 0;
        v301 = 0;
        v302 = 8;
        v303 = 0;
        if ( v280 )
        {
          v28 = (char *)v279;
          v29 = 32 * v280;
          while ( 1 )
          {
            v7 = 4;
            v6 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_75;
            v60 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &anon_10420c9971c21f44d230d15b39fb3fec_75,
                    4,
                    v28);
            if ( !v60 || *(_BYTE *)v60 != 3 )
              goto LABEL_78;
            v61 = *(_DWORD **)(v60 + 16);
            v62 = *(_QWORD *)(v60 + 24);
            if ( v62 == 8 )
              break;
            if ( v62 == 4 && *v61 == 1954047348 )
            {
              v7 = 4;
              v6 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_110;
              v63 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &anon_10420c9971c21f44d230d15b39fb3fec_110,
                      4,
                      v28);
              if ( v63 )
              {
                if ( *(_BYTE *)v63 == 3 )
                {
                  v64 = *(const void **)(v63 + 16);
                  v65 = *(_QWORD *)(v63 + 24);
                  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v323, v65, 0, 1, 1);
                  v66 = *(_QWORD *)&v323[8];
                  if ( *(_DWORD *)v323 == 1 )
                  {
                    __src = *(void **)&v323[16];
                    goto LABEL_302;
                  }
                  v6 = *(__m256i **)&v323[16];
                  v329 = *(_QWORD *)&v323[16];
                  v7 = (size_t)v64;
                  memcpy(*(void **)&v323[16], v64, v65);
                  v67 = v287;
                  if ( v287 == v285 )
                  {
                    v6 = (__m256i *)&v285;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
                  }
                  v68 = v286;
                  v69 = 3 * v67;
                  *(_QWORD *)(v286 + 8 * v69) = v66;
                  *(_QWORD *)(v68 + 8 * v69 + 8) = v329;
                  *(_QWORD *)(v68 + 8 * v69 + 16) = v65;
                  v3 = v67 + 1;
                  v287 = v3;
                  v27 = 1769173857;
                }
              }
            }
LABEL_78:
            v28 += 32;
            v29 -= 32LL;
            if ( !v29 )
              goto LABEL_224;
          }
          if ( *(_QWORD *)v61 != 0x6573755F6C6F6F74LL )
            goto LABEL_78;
          v70 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  "idassistant",
                  2,
                  v28);
          v329 = 12;
          if ( v70 )
          {
            v71 = &unk_101674E13;
            if ( *(_BYTE *)v70 == 3 )
            {
              v72 = *(_QWORD *)(v70 + 24);
              if ( v72 < 0 )
              {
                v66 = 0;
                goto LABEL_302;
              }
              v329 = *(_QWORD *)(v70 + 24);
              v71 = *(const void **)(v70 + 16);
              if ( !v72 )
              {
                __src = (void *)1;
                LOBYTE(v27) = 1;
                v329 = 0;
                goto LABEL_98;
              }
            }
          }
          else
          {
            v71 = &unk_101674E13;
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("idassistant", 2);
          v66 = 1;
          __src = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v329, 1);
          if ( !__src )
          {
            __src = (void *)v329;
LABEL_302:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v66, __src);
          }
          v27 = 0;
LABEL_98:
          memcpy(__src, v71, v329);
          v73 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("name", 4, v28);
          v324 = 4;
          if ( v73 )
          {
            v74 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
            if ( *(_BYTE *)v73 == 3 )
            {
              v75 = *(_QWORD *)(v73 + 24);
              if ( v75 < 0 )
              {
                v76 = 0;
                goto LABEL_314;
              }
              v324 = *(_QWORD *)(v73 + 24);
              v74 = *(char **)(v73 + 16);
              if ( !v75 )
              {
                __dst = (void *)1;
                LOBYTE(v3) = 1;
                v324 = 0;
                goto LABEL_106;
              }
            }
          }
          else
          {
            v74 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4);
          v76 = 1;
          __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v324, 1);
          if ( !__dst )
          {
            __dst = (void *)v324;
LABEL_314:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v76, __dst);
          }
          LODWORD(v3) = 0;
LABEL_106:
          memcpy(__dst, v74, v324);
          v77 = 5;
          v78 = &anon_10420c9971c21f44d230d15b39fb3fec_146;
          v79 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                             &anon_10420c9971c21f44d230d15b39fb3fec_146,
                             5,
                             v28);
          if ( v79 )
          {
            switch ( *(_BYTE *)v79 )
            {
              case 0:
                v323[0] = 0;
                break;
              case 1:
              case 2:
                *(_QWORD *)&v323[24] = v79[3];
                *(_QWORD *)&v323[16] = v79[2];
                v80 = *v79;
                *(_QWORD *)&v323[8] = v79[1];
                *(_QWORD *)v323 = v80;
                break;
              case 3:
                v77 = (__int64)(v79 + 1);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  &v323[8],
                  v79 + 1);
                v323[0] = 3;
                break;
              case 4:
                v77 = (__int64)(v79 + 1);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                  &v323[8],
                  v79 + 1);
                v323[0] = 4;
                break;
              case 5:
                v77 = (__int64)(v79 + 1);
                _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
                  &v323[8],
                  v79 + 1);
                v323[0] = 5;
                break;
            }
            v284 = *(_QWORD *)&v323[24];
            v283 = *(_QWORD *)&v323[16];
            v282 = *(_QWORD *)&v323[8];
            v281 = *(_QWORD *)v323;
            v323[0] = 0;
            v78 = v323;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v323);
          }
          else
          {
            v323[0] = 0;
            v282 = *(_QWORD *)&v323[8];
            v283 = *(_QWORD *)&v323[16];
            v284 = *(_QWORD *)&v323[24];
            v281 = *(_QWORD *)v323;
          }
          LODWORD(v272) = v27;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v78, v77);
          v81 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1);
          if ( !v81 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128);
          *(_QWORD *)v323 = 128;
          *(_QWORD *)&v323[8] = v81;
          *(_QWORD *)&v323[16] = 0;
          v318.i64[0] = (__int64)v323;
          v82 = &v281;
          v83 = (__int64)&v318;
          v84 = (__int64 *)serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::he6e8e9fc27a55fb4(
                             &v281,
                             &v318);
          v271 = v3;
          if ( v84 )
          {
            v83 = *(_QWORD *)v323;
            if ( *(_QWORD *)v323 )
            {
              v82 = *(__int64 **)&v323[8];
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v323[8], *(_QWORD *)v323, 1);
            }
          }
          else
          {
            v84 = *(__int64 **)&v323[8];
            if ( *(_QWORD *)v323 != 0x8000000000000000LL )
            {
              v273 = *(_QWORD *)v323;
              v288 = *(void **)&v323[8];
              v289 = *(_QWORD *)&v323[16];
LABEL_127:
              v27 = 1769173857;
              v293 = 0;
              v295 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v82, v83);
              v88 = 2;
              v89 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              if ( !v89 )
                goto LABEL_345;
              *v89 = 25705;
              v310 = 2;
              v311 = v89;
              v312 = 2;
              v90 = 1;
              if ( !(_BYTE)v272 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
                v91 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v329, 1);
                if ( !v91 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v329);
                v90 = v91;
              }
              v92 = v329;
              memcpy((void *)v90, __src, v329);
              LOBYTE(v325) = 3;
              v326 = v92;
              v327 = (_DWORD *)v90;
              v328 = v92;
              v93 = &v318;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v293, &v310);
              if ( v318.i64[0] == 0x8000000000000000LL )
              {
                v94 = v318.i64[1];
                v95 = 32 * v318.i64[3];
                v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
                v96 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
                v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
                v322.i64[0] = v96;
                *(_QWORD *)(v318.i64[1] + v95 + 24) = v328;
                *(_QWORD *)(v94 + v95 + 16) = v327;
                v97 = v325;
                v98 = (_BYTE *)v326;
                *(_QWORD *)(v94 + v95 + 8) = v326;
                *(_QWORD *)(v94 + v95) = v97;
                if ( v322.i8[0] != 6 )
                {
                  v93 = &v322;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
                }
              }
              else
              {
                *(_QWORD *)&v323[48] = v321;
                *(_QWORD *)&v323[40] = v320;
                *(_QWORD *)&v323[32] = v319;
                *(__m256i *)v323 = v318;
                v317 = v328;
                v316 = (__int64)v327;
                v315 = v326;
                v314 = v325;
                v93 = &v322;
                v98 = v323;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v322,
                  v323,
                  &v314);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v93, v98);
              v88 = 4;
              v99 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v99 )
                goto LABEL_345;
              *v99 = 1701869940;
              v310 = 4;
              v311 = v99;
              v312 = 4;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v100 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
              if ( !v100 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
              *v100 = 0x6E6F6974636E7566LL;
              LOBYTE(v325) = 3;
              v326 = 8;
              v327 = v100;
              v328 = 8;
              v101 = &v318;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v293, &v310);
              if ( v318.i64[0] == 0x8000000000000000LL )
              {
                v102 = v318.i64[1];
                v103 = 32 * v318.i64[3];
                v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
                v104 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
                v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
                v322.i64[0] = v104;
                *(_QWORD *)(v318.i64[1] + v103 + 24) = v328;
                *(_QWORD *)(v102 + v103 + 16) = v327;
                v105 = v325;
                v106 = (_BYTE *)v326;
                *(_QWORD *)(v102 + v103 + 8) = v326;
                *(_QWORD *)(v102 + v103) = v105;
                if ( v322.i8[0] != 6 )
                {
                  v101 = &v322;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
                }
              }
              else
              {
                *(_QWORD *)&v323[48] = v321;
                *(_QWORD *)&v323[40] = v320;
                *(_QWORD *)&v323[32] = v319;
                *(__m256i *)v323 = v318;
                v317 = v328;
                v316 = (__int64)v327;
                v315 = v326;
                v314 = v325;
                v101 = &v322;
                v106 = v323;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v322,
                  v323,
                  &v314);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v101, v106);
              v88 = 8;
              v107 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
              if ( !v107 )
LABEL_345:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v88);
              *v107 = 0x6E6F6974636E7566LL;
              v274 = 8;
              v272 = v107;
              v275 = v107;
              v276 = 8;
              v290 = 0;
              v292 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
              v108 = 4;
              v109 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v109 )
                goto LABEL_348;
              *v109 = 1701667182;
              v296 = 4;
              v297 = (size_t)v109;
              v298 = 4;
              v110 = 1;
              if ( !(_BYTE)v271 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v111 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v324, 1);
                if ( !v111 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v324);
                v110 = v111;
              }
              v112 = v324;
              memcpy((void *)v110, __dst, v324);
              LOBYTE(v325) = 3;
              v326 = v112;
              v327 = (_DWORD *)v110;
              v328 = v112;
              v113 = &v318;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v290, &v296);
              if ( v318.i64[0] == 0x8000000000000000LL )
              {
                v114 = v318.i64[1];
                v115 = 32 * v318.i64[3];
                v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
                v116 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
                v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
                v322.i64[0] = v116;
                *(_QWORD *)(v318.i64[1] + v115 + 24) = v328;
                *(_QWORD *)(v114 + v115 + 16) = v327;
                v117 = v325;
                v118 = (_BYTE *)v326;
                *(_QWORD *)(v114 + v115 + 8) = v326;
                *(_QWORD *)(v114 + v115) = v117;
                if ( v322.i8[0] != 6 )
                {
                  v113 = &v322;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
                }
              }
              else
              {
                *(_QWORD *)&v323[48] = v321;
                *(_QWORD *)&v323[40] = v320;
                *(_QWORD *)&v323[32] = v319;
                *(__m256i *)v323 = v318;
                v317 = v328;
                v316 = (__int64)v327;
                v315 = v326;
                v314 = v325;
                v113 = &v322;
                v118 = v323;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v322,
                  v323,
                  &v314);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v113, v118);
              v108 = 9;
              v119 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
              if ( !v119 )
LABEL_348:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v108);
              *(_QWORD *)v119 = 0x746E656D75677261LL;
              *(_BYTE *)(v119 + 8) = 115;
              v296 = 9;
              v297 = v119;
              v298 = 9;
              if ( (v289 & 0x8000000000000000LL) != 0LL )
              {
                v120 = 0;
LABEL_312:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v120, v289);
              }
              if ( v289 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
                v120 = 1;
                v121 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v289, 1);
                if ( !v121 )
                  goto LABEL_312;
                v122 = v121;
                v27 = 1769173857;
              }
              else
              {
                v122 = 1;
              }
              v3 = v289;
              memcpy((void *)v122, v288, v289);
              LOBYTE(v325) = 3;
              v326 = v3;
              v327 = (_DWORD *)v122;
              v328 = v3;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v290, &v296);
              if ( v318.i64[0] == 0x8000000000000000LL )
              {
                v123 = v318.i64[1];
                v124 = 32 * v318.i64[3];
                v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
                v125 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
                v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
                v322.i64[0] = v125;
                *(_QWORD *)(v318.i64[1] + v124 + 24) = v328;
                *(_QWORD *)(v123 + v124 + 16) = v327;
                v126 = v325;
                *(_QWORD *)(v123 + v124 + 8) = v326;
                *(_QWORD *)(v123 + v124) = v126;
                if ( v322.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
              }
              else
              {
                *(_QWORD *)&v323[48] = v321;
                *(_QWORD *)&v323[40] = v320;
                *(_QWORD *)&v323[32] = v319;
                *(__m256i *)v323 = v318;
                v317 = v328;
                v316 = (__int64)v327;
                v315 = v326;
                v314 = v325;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v322,
                  v323,
                  &v314);
              }
              v313 = v292;
              v312 = (__int64)v291;
              v311 = (_DWORD *)v290;
              LOBYTE(v310) = 5;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v293, &v274);
              if ( v318.i64[0] == 0x8000000000000000LL )
              {
                v127 = v318.i64[1];
                v128 = 32 * v318.i64[3];
                v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
                v129 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
                v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
                v322.i64[0] = v129;
                *(_QWORD *)(v318.i64[1] + v128 + 24) = v313;
                *(_QWORD *)(v127 + v128 + 16) = v312;
                v130 = v310;
                *(_QWORD *)(v127 + v128 + 8) = v311;
                *(_QWORD *)(v127 + v128) = v130;
                if ( v322.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
              }
              else
              {
                *(_QWORD *)&v323[48] = v321;
                *(_QWORD *)&v323[40] = v320;
                *(_QWORD *)&v323[32] = v319;
                *(__m256i *)v323 = v318;
                v317 = v313;
                v316 = v312;
                v315 = (size_t)v311;
                v314 = v310;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v322,
                  v323,
                  &v314);
              }
              v307 = v295;
              v306 = v294;
              v305 = v293;
              LOBYTE(v304) = 5;
              v131 = v303;
              if ( v303 == v301 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v301);
              v132 = v302;
              v133 = 32 * v131;
              *(_QWORD *)(v302 + v133 + 24) = v307;
              *(_QWORD *)(v132 + v133 + 16) = v306;
              v134 = v304;
              *(_QWORD *)(v132 + v133 + 8) = v305;
              *(_QWORD *)(v132 + v133) = v134;
              v303 = v131 + 1;
              if ( v273 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v288, v273, 1);
              v6 = (__m256i *)&v281;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v281);
              if ( v324 )
              {
                v6 = (__m256i *)__dst;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst, v324, 1);
              }
              v7 = v329;
              if ( v329 )
              {
                v6 = (__m256i *)__src;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v329, 1);
              }
              goto LABEL_78;
            }
          }
          *(_QWORD *)v323 = v84;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v82, v83);
          v85 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
          if ( !v85 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
          v86 = v85;
          *v85 = 32123;
          if ( *v84 == 1 )
          {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v84 + 1);
          }
          else if ( !*v84 )
          {
            v87 = v84[2];
            if ( v87 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84[1], v87, 1);
          }
          v288 = v86;
          v83 = 40;
          v82 = v84;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, 40, 8);
          v289 = 2;
          v273 = 2;
          goto LABEL_127;
        }
LABEL_224:
        v304 = 0;
        v306 = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v7);
        v166 = 4;
        v167 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( v167 )
        {
          *v167 = 1701605234;
          v310 = 4;
          v311 = v167;
          v312 = 4;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v168 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
          if ( !v168 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
          *(_QWORD *)v168 = 0x6E61747369737361LL;
          *(_BYTE *)(v168 + 8) = 116;
          v326 = 9;
          v327 = (_DWORD *)v168;
          v328 = 9;
          LOBYTE(v325) = 3;
          v169 = &v318;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v304, &v310);
          if ( __OFSUB__(0, v318.i64[0]) )
          {
            v170 = v318.i64[1];
            v171 = 32 * v318.i64[3];
            v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
            v172 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
            v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
            v322.i64[0] = v172;
            *(_QWORD *)(v318.i64[1] + v171 + 24) = v328;
            *(_QWORD *)(v170 + v171 + 16) = v327;
            v173 = v325;
            v174 = (_BYTE *)v326;
            *(_QWORD *)(v170 + v171 + 8) = v326;
            *(_QWORD *)(v170 + v171) = v173;
            if ( v322.i8[0] != 6 )
            {
              v169 = &v322;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
            }
          }
          else
          {
            *(_QWORD *)&v323[48] = v321;
            *(_QWORD *)&v323[40] = v320;
            *(_QWORD *)&v323[32] = v319;
            *(__m256i *)v323 = v318;
            v317 = v328;
            v316 = (__int64)v327;
            v315 = v326;
            v314 = v325;
            v169 = &v322;
            v174 = v323;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v322,
              v323,
              &v314);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v169, v174);
          v166 = 7;
          v222 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
          if ( v222 )
          {
            *(_DWORD *)((char *)v222 + 3) = 1953391988;
            *v222 = 1953394531;
            v310 = 7;
            v311 = v222;
            v312 = 7;
            if ( v287 )
            {
              alloc::str::join_generic_copy::heca7a5e86402c6b6(
                v323,
                v286,
                v287,
                "\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
                1);
              v328 = *(_QWORD *)&v323[16];
              v327 = *(_DWORD **)&v323[8];
              v326 = *(_QWORD *)v323;
              v223 = 3;
            }
            else
            {
              v223 = 0;
            }
            LOBYTE(v325) = v223;
            v224 = &v318;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v304, &v310);
            if ( v318.i64[0] == 0x8000000000000000LL )
            {
              v225 = v318.i64[1];
              v226 = 32 * v318.i64[3];
              v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
              v227 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
              v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
              v322.i64[0] = v227;
              *(_QWORD *)(v318.i64[1] + v226 + 24) = v328;
              *(_QWORD *)(v225 + v226 + 16) = v327;
              v228 = v325;
              v229 = (_BYTE *)v326;
              *(_QWORD *)(v225 + v226 + 8) = v326;
              *(_QWORD *)(v225 + v226) = v228;
              if ( v322.i8[0] != 6 )
              {
                v224 = &v322;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
              }
            }
            else
            {
              *(_QWORD *)&v323[48] = v321;
              *(_QWORD *)&v323[40] = v320;
              *(_QWORD *)&v323[32] = v319;
              *(__m256i *)v323 = v318;
              v317 = v328;
              v316 = (__int64)v327;
              v315 = v326;
              v314 = v325;
              v224 = &v322;
              v229 = v323;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v322,
                v323,
                &v314);
            }
            if ( !v303 )
            {
              *(_QWORD *)&v323[24] = v306;
              *(_QWORD *)&v323[16] = v305;
              *(_QWORD *)&v323[8] = v304;
              v323[0] = 5;
              v235 = v308;
              v236 = v308[2];
              if ( v236 == *v308 )
              {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v308);
                v235 = v308;
              }
              v237 = v235[1];
              v238 = 32 * v236;
              *(_QWORD *)(v237 + v238 + 24) = *(_QWORD *)&v323[24];
              *(_QWORD *)(v237 + v238 + 16) = *(_QWORD *)&v323[16];
              v239 = *(_QWORD *)v323;
              *(_QWORD *)(v237 + v238 + 8) = *(_QWORD *)&v323[8];
              *(_QWORD *)(v237 + v238) = v239;
              v235[2] = v236 + 1;
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf3b3f1b4c8214e60(&v301);
              if ( v301 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v302, 32 * v301, 8);
LABEL_292:
              v245 = v287;
              if ( v287 )
              {
                v246 = (_QWORD *)(v286 + 8);
                do
                {
                  v247 = *(v246 - 1);
                  if ( v247 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v246, v247, 1);
                  v246 += 3;
                  --v245;
                }
                while ( v245 );
              }
              v248 = v285;
              if ( v285 )
              {
                v59 = v286;
LABEL_331:
                v57 = 24 * v248;
                v58 = 8;
                goto LABEL_332;
              }
              return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v277);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v224, v229);
            v166 = 10;
            v230 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
            if ( v230 )
            {
              qmemcpy(v230, "tool_calls", 10);
              v310 = 10;
              v311 = v230;
              v312 = 10;
              v328 = v303;
              v327 = (_DWORD *)v302;
              v326 = v301;
              LOBYTE(v325) = 4;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v304, &v310);
              if ( v318.i64[0] == 0x8000000000000000LL )
              {
                v231 = v318.i64[1];
                v232 = 32 * v318.i64[3];
                v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
                v233 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
                v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
                v322.i64[0] = v233;
                *(_QWORD *)(v318.i64[1] + v232 + 24) = v328;
                *(_QWORD *)(v231 + v232 + 16) = v327;
                v234 = v325;
                *(_QWORD *)(v231 + v232 + 8) = v326;
                *(_QWORD *)(v231 + v232) = v234;
                if ( v322.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
              }
              else
              {
                *(_QWORD *)&v323[48] = v321;
                *(_QWORD *)&v323[40] = v320;
                *(_QWORD *)&v323[32] = v319;
                *(__m256i *)v323 = v318;
                v317 = v328;
                v316 = (__int64)v327;
                v315 = v326;
                v314 = v325;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v322,
                  v323,
                  &v314);
              }
              *(_QWORD *)&v323[24] = v306;
              *(_QWORD *)&v323[16] = v305;
              *(_QWORD *)&v323[8] = v304;
              v323[0] = 5;
              v240 = v308;
              v241 = v308[2];
              if ( v241 == *v308 )
              {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v308);
                v240 = v308;
              }
              v242 = v240[1];
              v243 = 32 * v241;
              *(_QWORD *)(v242 + v243 + 24) = *(_QWORD *)&v323[24];
              *(_QWORD *)(v242 + v243 + 16) = *(_QWORD *)&v323[16];
              v244 = *(_QWORD *)v323;
              *(_QWORD *)(v242 + v243 + 8) = *(_QWORD *)&v323[8];
              *(_QWORD *)(v242 + v243) = v244;
              v240[2] = v241 + 1;
              goto LABEL_292;
            }
          }
        }
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v166);
      }
    }
    goto LABEL_43;
  }
  if ( *(_DWORD *)v5 != 1919251317 )
  {
LABEL_43:
    __src = v5;
    codexmate_lib::core::relay::translator::flatten_anthropic_text::h4a769f7578ec855b(v323, &v277);
    v30 = *(_QWORD *)v323;
    v31 = 0;
    if ( __OFSUB__(-*(_QWORD *)v323, 1) )
      v30 = 0;
    v329 = v30;
    v32 = 1;
    if ( !__OFSUB__(-*(_QWORD *)v323, 1) )
      v32 = *(_QWORD *)&v323[8];
    v324 = v32;
    if ( !__OFSUB__(-*(_QWORD *)v323, 1) )
      v31 = *(_QWORD *)&v323[16];
    v304 = 0;
    v306 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v323, &v277);
    v33 = 4;
    v34 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v34 )
      goto LABEL_339;
    *v34 = 1701605234;
    v310 = 4;
    v311 = v34;
    v312 = 4;
    if ( v3 < 0 )
    {
      v35 = 0;
      goto LABEL_52;
    }
    if ( v3 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v35 = 1;
      v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1);
      if ( !v36 )
LABEL_52:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v35, v3);
      v37 = v36;
    }
    else
    {
      v37 = 1;
    }
    memcpy((void *)v37, __src, v3);
    LOBYTE(v325) = 3;
    v326 = v3;
    v327 = (_DWORD *)v37;
    v328 = v3;
    v38 = &v318;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v304, &v310);
    if ( v318.i64[0] == 0x8000000000000000LL )
    {
      v39 = v318.i64[1];
      v40 = 32 * v318.i64[3];
      v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
      v41 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
      v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
      v322.i64[0] = v41;
      *(_QWORD *)(v318.i64[1] + v40 + 24) = v328;
      *(_QWORD *)(v39 + v40 + 16) = v327;
      v42 = v325;
      v43 = (_BYTE *)v326;
      *(_QWORD *)(v39 + v40 + 8) = v326;
      *(_QWORD *)(v39 + v40) = v42;
      if ( v322.i8[0] != 6 )
      {
        v38 = &v322;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
      }
    }
    else
    {
      *(_QWORD *)&v323[48] = v321;
      *(_QWORD *)&v323[40] = v320;
      *(_QWORD *)&v323[32] = v319;
      *(__m256i *)v323 = v318;
      v317 = v328;
      v316 = (__int64)v327;
      v315 = v326;
      v314 = v325;
      v38 = &v322;
      v43 = v323;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v322,
        v323,
        &v314);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v43);
    v33 = 7;
    v44 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v44 )
LABEL_339:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v33);
    *(_DWORD *)((char *)v44 + 3) = 1953391988;
    *v44 = 1953394531;
    v310 = 7;
    v311 = v44;
    v312 = 7;
    if ( v31 < 0 )
    {
      v45 = 0;
      goto LABEL_64;
    }
    if ( v31 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v45 = 1;
      v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v31, 1);
      if ( !v46 )
LABEL_64:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v45, v31);
      v47 = v46;
    }
    else
    {
      v47 = 1;
    }
    memcpy((void *)v47, (const void *)v324, v31);
    LOBYTE(v325) = 3;
    v326 = v31;
    v327 = (_DWORD *)v47;
    v328 = v31;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v304, &v310);
    if ( v318.i64[0] == 0x8000000000000000LL )
    {
      v48 = v318.i64[1];
      v49 = 32 * v318.i64[3];
      v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
      v50 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
      v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
      v322.i64[0] = v50;
      *(_QWORD *)(v318.i64[1] + v49 + 24) = v328;
      *(_QWORD *)(v48 + v49 + 16) = v327;
      v51 = v325;
      *(_QWORD *)(v48 + v49 + 8) = v326;
      *(_QWORD *)(v48 + v49) = v51;
      if ( v322.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
    }
    else
    {
      *(_QWORD *)&v323[48] = v321;
      *(_QWORD *)&v323[40] = v320;
      *(_QWORD *)&v323[32] = v319;
      *(__m256i *)v323 = v318;
      v317 = v328;
      v316 = (__int64)v327;
      v315 = v326;
      v314 = v325;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v322,
        v323,
        &v314);
    }
    *(_QWORD *)&v323[8] = v304;
    *(_QWORD *)&v323[16] = v305;
    *(_QWORD *)&v323[24] = v306;
    v323[0] = 5;
    v52 = v308;
    v53 = v308[2];
    if ( v53 == *v308 )
    {
      ((void (*)(void))alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab)();
      v52 = v308;
    }
    v54 = v52[1];
    v55 = 32 * v53;
    *(_QWORD *)(v54 + v55 + 24) = *(_QWORD *)&v323[24];
    *(_QWORD *)(v54 + v55 + 16) = *(_QWORD *)&v323[16];
    v56 = *(_QWORD *)v323;
    *(_QWORD *)(v54 + v55 + 8) = *(_QWORD *)&v323[8];
    *(_QWORD *)(v54 + v55) = v56;
    v52[2] = v53 + 1;
    v57 = v329;
    if ( v329 )
    {
      v58 = 1;
      v59 = v324;
LABEL_332:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v57, v58);
      return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v277);
    }
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v277);
  }
  v301 = 0;
  v302 = 8;
  v303 = 0;
  v293 = 0;
  v294 = 8;
  v295 = 0;
  if ( v280 )
  {
    v135 = (char *)v279;
    v136 = 32 * v280;
    while ( 1 )
    {
      v6 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_75;
      v137 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               &anon_10420c9971c21f44d230d15b39fb3fec_75,
               4,
               v135);
      if ( v137 )
      {
        if ( *(_BYTE *)v137 == 3 )
        {
          v138 = *(_QWORD *)(v137 + 16);
          v139 = *(_QWORD *)(v137 + 24);
          if ( v139 != 11 )
          {
            if ( v139 == 4 && *(_DWORD *)v138 == 1954047348 )
            {
              v6 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_110;
              v140 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       &anon_10420c9971c21f44d230d15b39fb3fec_110,
                       4,
                       v135);
              if ( v140 )
              {
                if ( *(_BYTE *)v140 == 3 )
                {
                  v141 = *(const void **)(v140 + 16);
                  v142 = *(_QWORD *)(v140 + 24);
                  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v323, v142, 0, 1, 1);
                  v143 = *(_QWORD *)&v323[8];
                  if ( *(_DWORD *)v323 == 1 )
                  {
                    v324 = *(_QWORD *)&v323[16];
                    goto LABEL_300;
                  }
                  v6 = *(__m256i **)&v323[16];
                  v329 = *(_QWORD *)&v323[16];
                  memcpy(*(void **)&v323[16], v141, v142);
                  v144 = v303;
                  if ( v303 == v301 )
                  {
                    v6 = (__m256i *)&v301;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v301);
                  }
                  v145 = v302;
                  v146 = 3 * v144;
                  *(_QWORD *)(v302 + 8 * v146) = v143;
                  *(_QWORD *)(v145 + 8 * v146 + 8) = v329;
                  *(_QWORD *)(v145 + 8 * v146 + 16) = v142;
                  v303 = v144 + 1;
                }
              }
            }
            goto LABEL_176;
          }
          if ( !(*(_QWORD *)v138 ^ 0x7365725F6C6F6F74LL | *(_QWORD *)(v138 + 3) ^ 0x746C757365725F6CLL) )
            break;
        }
      }
LABEL_176:
      v135 += 32;
      v136 -= 32LL;
      if ( !v136 )
      {
        v175 = v293;
        v176 = v294;
        v177 = v295;
        goto LABEL_231;
      }
    }
    v147 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "tool_use_idYou have a web_search tool available. Use it proactively whenever up-to-date or external informa"
             "tion would improve your answer — including but not limited to: latest documentation, API references, librar"
             "y versions, error messages, best practices, real-time data (weather, news, prices, events), unfamiliar tool"
             "s or frameworks, and any question where your training data may be outdated. Do not tell the user you lack i"
             "nternet access; search first, then respond.redacted_thinking",
             11,
             v135);
    v329 = 12;
    if ( v147 )
    {
      v148 = &unk_101674E13;
      if ( *(_BYTE *)v147 == 3 )
      {
        v149 = *(_QWORD *)(v147 + 24);
        if ( v149 < 0 )
        {
          v143 = 0;
          goto LABEL_300;
        }
        v329 = *(_QWORD *)(v147 + 24);
        v148 = *(const void **)(v147 + 16);
        if ( !v149 )
        {
          v324 = 1;
          v329 = 0;
          goto LABEL_195;
        }
      }
    }
    else
    {
      v148 = &unk_101674E13;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
      "tool_use_idYou have a web_search tool available. Use it proactively whenever up-to-date or external information wo"
      "uld improve your answer — including but not limited to: latest documentation, API references, library versions, er"
      "ror messages, best practices, real-time data (weather, news, prices, events), unfamiliar tools or frameworks, and "
      "any question where your training data may be outdated. Do not tell the user you lack internet access; search first"
      ", then respond.redacted_thinking",
      11);
    v143 = 1;
    v324 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v329, 1);
    if ( !v324 )
    {
      v324 = v329;
LABEL_300:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v143, v324);
    }
LABEL_195:
    memcpy((void *)v324, v148, v329);
    v150 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "contentpattern.output_modehead_limit",
             7,
             v135);
    if ( v150 )
    {
      LOBYTE(v151) = *(_BYTE *)v150;
      switch ( *(_BYTE *)v150 )
      {
        case 0:
          break;
        case 1:
        case 2:
          *(_QWORD *)&v323[24] = *(_QWORD *)(v150 + 24);
          *(_QWORD *)&v323[16] = *(_QWORD *)(v150 + 16);
          v151 = *(_QWORD *)v150;
          *(_QWORD *)&v323[8] = *(_QWORD *)(v150 + 8);
          *(_QWORD *)v323 = v151;
          break;
        case 3:
          LOBYTE(v151) = 3;
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v323[8], v150 + 8);
          break;
        case 4:
          LOBYTE(v151) = 4;
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
            &v323[8],
            v150 + 8);
          break;
        case 5:
          LOBYTE(v151) = 5;
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
            &v323[8],
            v150 + 8);
          break;
      }
      *(__int64 *)((char *)&v322.i64[2] + 7) = *(_QWORD *)&v323[24];
      *(__int128 *)((char *)v322.i128 + 8) = *(_OWORD *)&v323[9];
      v322.i64[0] = *(_QWORD *)&v323[1];
      *(_QWORD *)&v323[8] = 0;
      *(_QWORD *)&v323[16] = 1;
      *(_QWORD *)&v323[24] = 0;
      v323[0] = 3;
      if ( (_BYTE)v151 != 6 )
      {
        v318.i8[0] = v151;
        v318.i64[3] = *(__int64 *)((char *)&v322.i64[2] + 7);
        *(__int128 *)((char *)v318.i128 + 9) = *(__int128 *)((char *)v322.i128 + 8);
        *(__int64 *)((char *)v318.i64 + 1) = v322.i64[0];
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v323);
        goto LABEL_205;
      }
    }
    else
    {
      *(_QWORD *)&v323[8] = 0;
      *(_QWORD *)&v323[16] = 1;
      *(_QWORD *)&v323[24] = 0;
      v323[0] = 3;
    }
    v318 = *(__m256i *)v323;
    LOBYTE(v151) = v323[0];
LABEL_205:
    if ( (_BYTE)v151 == 3 )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v269, &v318.u32[2]);
    }
    else if ( (unsigned __int8)v151 == 4 )
    {
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd6848453e6db7cc6(
        &v322,
        v318.i64[2],
        v318.i64[2] + 32 * v318.i64[3]);
      v152 = v322.i64[1];
      alloc::str::join_generic_copy::ha9d2732844b8793d(
        v323,
        v322.i64[1],
        v322.i64[2],
        "\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
        1);
      v270 = *(_OWORD *)&v323[8];
      v269 = *(_QWORD *)v323;
      if ( v322.i64[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v152, 16 * v322.i64[0], 8);
    }
    else
    {
      v322.i64[0] = 0;
      *(__int128 *)((char *)v322.i128 + 8) = 1u;
      *(_QWORD *)&v323[16] = 1610612768;
      *(_QWORD *)v323 = &v322;
      *(_QWORD *)&v323[8] = &anon_10420c9971c21f44d230d15b39fb3fec_964;
      if ( (unsigned __int8)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce(
                              &v318,
                              v323) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_10420c9971c21f44d230d15b39fb3fec_965,
          55,
          &v314,
          &anon_10420c9971c21f44d230d15b39fb3fec_976,
          &anon_10420c9971c21f44d230d15b39fb3fec_967);
      v269 = v322.i64[0];
      v270 = *(__int128 *)((char *)v322.i128 + 8);
    }
    *(_QWORD *)v323 = v329;
    *(_QWORD *)&v323[8] = v324;
    *(_QWORD *)&v323[16] = v329;
    *(__int128 *)((char *)v322.i128 + 15) = v270;
    *(__int64 *)((char *)v322.i64 + 7) = v269;
    v323[24] = 3;
    *(_QWORD *)&v323[48] = *((_QWORD *)&v270 + 1);
    *(_OWORD *)&v323[33] = *(__int128 *)((char *)v322.i128 + 8);
    *(_QWORD *)&v323[25] = v322.i64[0];
    v153 = v295;
    if ( v295 == v293 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf3c82292640feef8(&v293);
    v154 = v294;
    v155 = 56 * v153;
    *(_QWORD *)(v294 + v155 + 48) = *(_QWORD *)&v323[48];
    *(_QWORD *)(v154 + v155 + 40) = *(_QWORD *)&v323[40];
    *(_QWORD *)(v154 + v155 + 32) = *(_QWORD *)&v323[32];
    *(_QWORD *)(v154 + v155 + 24) = *(_QWORD *)&v323[24];
    *(_QWORD *)(v154 + v155 + 16) = *(_QWORD *)&v323[16];
    v156 = *(_QWORD *)v323;
    *(_QWORD *)(v154 + v155 + 8) = *(_QWORD *)&v323[8];
    *(_QWORD *)(v154 + v155) = v156;
    v295 = v153 + 1;
    v6 = &v318;
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v318);
    goto LABEL_176;
  }
  v176 = 8;
  v177 = 0;
  v175 = 0;
LABEL_231:
  v178 = (void *)(v176 + 56 * v177);
  v296 = v176;
  v297 = v176;
  v298 = v175;
  __src = v178;
  v299 = v178;
  if ( v177 )
  {
    v179 = v176 + 56;
    do
    {
      v180 = v179;
      v181 = *(void **)(v179 - 56);
      v329 = *(_QWORD *)(v179 - 48);
      v182 = *(_QWORD *)(v179 - 40);
      v284 = *(_QWORD *)(v179 - 8);
      v283 = *(_QWORD *)(v179 - 16);
      v282 = *(_QWORD *)(v179 - 24);
      v281 = *(_QWORD *)(v179 - 32);
      if ( v181 == (void *)0x8000000000000000LL )
        break;
      v307 = v284;
      v306 = v283;
      v305 = v282;
      v304 = v281;
      v274 = 0;
      v276 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v178);
      v183 = 4;
      v184 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v184 )
        goto LABEL_341;
      *v184 = 1701605234;
      v290 = 4;
      v291 = v184;
      v292 = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v185 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v185 )
      {
        v297 = v180;
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
      }
      *v185 = 1819242356;
      LOBYTE(v325) = 3;
      v326 = 4;
      v327 = v185;
      v328 = 4;
      v186 = &v318;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v274, &v290);
      if ( v318.i64[0] == 0x8000000000000000LL )
      {
        v187 = v318.i64[1];
        v188 = 32 * v318.i64[3];
        v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
        v189 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
        v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
        v322.i64[0] = v189;
        *(_QWORD *)(v318.i64[1] + v188 + 24) = v328;
        *(_QWORD *)(v187 + v188 + 16) = v327;
        v190 = v325;
        v191 = (_BYTE *)v326;
        *(_QWORD *)(v187 + v188 + 8) = v326;
        *(_QWORD *)(v187 + v188) = v190;
        if ( v322.i8[0] != 6 )
        {
          v186 = &v322;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
        }
      }
      else
      {
        *(_QWORD *)&v323[48] = v321;
        *(_QWORD *)&v323[40] = v320;
        *(_QWORD *)&v323[32] = v319;
        *(__m256i *)v323 = v318;
        v317 = v328;
        v316 = (__int64)v327;
        v315 = v326;
        v314 = v325;
        v186 = &v322;
        v191 = v323;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v322,
          v323,
          &v314);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v186, v191);
      v183 = 12;
      v192 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
      if ( !v192 )
        goto LABEL_341;
      qmemcpy(v192, "tool_call_id", 12);
      v290 = 12;
      v291 = v192;
      v292 = 12;
      v324 = v180;
      if ( v182 < 0 )
      {
        v194 = 0;
LABEL_269:
        v297 = v324;
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v194, v182);
      }
      __dst = (void *)(v180 - 56);
      if ( v182 )
      {
        v193 = v181;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1);
        v194 = 1;
        v195 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v182, 1);
        if ( !v195 )
          goto LABEL_269;
        v196 = v195;
        v181 = v193;
      }
      else
      {
        v196 = 1;
      }
      memcpy((void *)v196, (const void *)v329, v182);
      LOBYTE(v325) = 3;
      v326 = v182;
      v327 = (_DWORD *)v196;
      v328 = v182;
      v197 = &v318;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v274, &v290);
      v180 = v324;
      if ( v318.i64[0] == 0x8000000000000000LL )
      {
        v198 = v318.i64[1];
        v199 = 32 * v318.i64[3];
        v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
        v200 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
        v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
        v322.i64[0] = v200;
        *(_QWORD *)(v318.i64[1] + v199 + 24) = v328;
        *(_QWORD *)(v198 + v199 + 16) = v327;
        v201 = v325;
        v202 = (_BYTE *)v326;
        *(_QWORD *)(v198 + v199 + 8) = v326;
        *(_QWORD *)(v198 + v199) = v201;
        if ( v322.i8[0] != 6 )
        {
          v197 = &v322;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
        }
      }
      else
      {
        *(_QWORD *)&v323[48] = v321;
        *(_QWORD *)&v323[40] = v320;
        *(_QWORD *)&v323[32] = v319;
        *(__m256i *)v323 = v318;
        v317 = v328;
        v316 = (__int64)v327;
        v315 = v326;
        v314 = v325;
        v197 = &v322;
        v202 = v323;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v322,
          v323,
          &v314);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v197, v202);
      v183 = 7;
      v203 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v203 )
      {
LABEL_341:
        v297 = v180;
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v183);
      }
      *(_DWORD *)((char *)v203 + 3) = 1953391988;
      *v203 = 1953394531;
      v290 = 7;
      v291 = v203;
      v292 = 7;
      serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
        v323,
        &v304);
      if ( v323[0] == 6 )
      {
        v297 = v180;
        v318.i64[0] = *(_QWORD *)&v323[8];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v318,
          &off_10196D480,
          &off_10196CF08);
      }
      v328 = *(_QWORD *)&v323[24];
      v327 = *(_DWORD **)&v323[16];
      v326 = *(_QWORD *)&v323[8];
      v325 = *(_QWORD *)v323;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v274, &v290);
      if ( v318.i64[0] == 0x8000000000000000LL )
      {
        v204 = v318.i64[1];
        v205 = 32 * v318.i64[3];
        v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
        v206 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
        v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
        v322.i64[0] = v206;
        *(_QWORD *)(v318.i64[1] + v205 + 24) = v328;
        *(_QWORD *)(v204 + v205 + 16) = v327;
        v207 = v325;
        *(_QWORD *)(v204 + v205 + 8) = v326;
        *(_QWORD *)(v204 + v205) = v207;
        if ( v322.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
      }
      else
      {
        *(_QWORD *)&v323[48] = v321;
        *(_QWORD *)&v323[40] = v320;
        *(_QWORD *)&v323[32] = v319;
        *(__m256i *)v323 = v318;
        v317 = v328;
        v316 = (__int64)v327;
        v315 = v326;
        v314 = v325;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v322,
          v323,
          &v314);
      }
      v313 = v276;
      v312 = (__int64)v275;
      v311 = (_DWORD *)v274;
      LOBYTE(v310) = 5;
      v208 = v308;
      v209 = v308[2];
      if ( v209 == *v308 )
      {
        ((void (*)(void))alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab)();
        v208 = v308;
      }
      v210 = v208[1];
      v211 = 32 * v209;
      *(_QWORD *)(v210 + v211 + 24) = v313;
      *(_QWORD *)(v210 + v211 + 16) = v312;
      v212 = v310;
      v178 = v311;
      *(_QWORD *)(v210 + v211 + 8) = v311;
      *(_QWORD *)(v210 + v211) = v212;
      v208[2] = v209 + 1;
      v6 = (__m256i *)&v304;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v304);
      if ( v181 )
      {
        v6 = (__m256i *)v329;
        v178 = v181;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v329, v181, 1);
      }
      v179 = v180 + 56;
    }
    while ( (char *)__dst + 56 != __src );
    v297 = v180;
  }
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0785b023cb9acc4f(&v296);
  if ( v303 )
  {
    v304 = 0;
    v306 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v296, v178);
    v213 = 4;
    v214 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v214 )
      goto LABEL_346;
    *v214 = 1701605234;
    v310 = 4;
    v311 = v214;
    v312 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v215 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v215 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
    *v215 = 1919251317;
    LOBYTE(v325) = 3;
    v326 = 4;
    v327 = v215;
    v328 = 4;
    v216 = &v318;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v304, &v310);
    if ( __OFSUB__(0, v318.i64[0]) )
    {
      v217 = v318.i64[1];
      v218 = 32 * v318.i64[3];
      v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
      v219 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
      v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
      v322.i64[0] = v219;
      *(_QWORD *)(v318.i64[1] + v218 + 24) = v328;
      *(_QWORD *)(v217 + v218 + 16) = v327;
      v220 = v325;
      v221 = (_BYTE *)v326;
      *(_QWORD *)(v217 + v218 + 8) = v326;
      *(_QWORD *)(v217 + v218) = v220;
      if ( v322.i8[0] != 6 )
      {
        v216 = &v322;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
      }
    }
    else
    {
      *(_QWORD *)&v323[48] = v321;
      *(_QWORD *)&v323[40] = v320;
      *(_QWORD *)&v323[32] = v319;
      *(__m256i *)v323 = v318;
      v317 = v328;
      v316 = (__int64)v327;
      v315 = v326;
      v314 = v325;
      v216 = &v322;
      v221 = v323;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v322,
        v323,
        &v314);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v216, v221);
    v213 = 7;
    v249 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v249 )
LABEL_346:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v213);
    *(_DWORD *)((char *)v249 + 3) = 1953391988;
    *v249 = 1953394531;
    v310 = 7;
    v311 = v249;
    v312 = 7;
    v250 = v302;
    alloc::str::join_generic_copy::heca7a5e86402c6b6(
      v323,
      v302,
      v303,
      "\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
      1);
    v251 = *(_QWORD *)v323;
    v329 = *(_QWORD *)&v323[8];
    v252 = *(_QWORD *)&v323[16];
    if ( *(__int64 *)&v323[16] < 0 )
    {
      v253 = 0;
      goto LABEL_307;
    }
    if ( *(_QWORD *)&v323[16] )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v323, v250);
      v253 = 1;
      v254 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v252, 1);
      if ( !v254 )
LABEL_307:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v253, v252);
      v255 = v254;
    }
    else
    {
      v255 = 1;
    }
    memcpy((void *)v255, (const void *)v329, v252);
    LOBYTE(v325) = 3;
    v326 = v252;
    v327 = (_DWORD *)v255;
    v328 = v252;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v318, &v304, &v310);
    if ( v318.i64[0] == 0x8000000000000000LL )
    {
      v256 = v318.i64[1];
      v257 = 32 * v318.i64[3];
      v322.i128[1] = *(_OWORD *)(v318.i64[1] + 32 * v318.i64[3] + 16);
      v258 = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3]);
      v322.i64[1] = *(_QWORD *)(v318.i64[1] + 32 * v318.i64[3] + 8);
      v322.i64[0] = v258;
      *(_QWORD *)(v318.i64[1] + v257 + 24) = v328;
      *(_QWORD *)(v256 + v257 + 16) = v327;
      v259 = v325;
      *(_QWORD *)(v256 + v257 + 8) = v326;
      *(_QWORD *)(v256 + v257) = v259;
      if ( v322.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v322);
    }
    else
    {
      *(_QWORD *)&v323[48] = v321;
      *(_QWORD *)&v323[40] = v320;
      *(_QWORD *)&v323[32] = v319;
      *(__m256i *)v323 = v318;
      v317 = v328;
      v316 = (__int64)v327;
      v315 = v326;
      v314 = v325;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v322,
        v323,
        &v314);
    }
    if ( v251 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v329, v251, 1);
    *(_QWORD *)&v323[8] = v304;
    *(_QWORD *)&v323[16] = v305;
    *(_QWORD *)&v323[24] = v306;
    v323[0] = 5;
    v260 = v308;
    v261 = v308[2];
    if ( v261 == *v308 )
    {
      ((void (*)(void))alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab)();
      v260 = v308;
    }
    v262 = v260[1];
    v263 = 32 * v261;
    *(_QWORD *)(v262 + v263 + 24) = *(_QWORD *)&v323[24];
    *(_QWORD *)(v262 + v263 + 16) = *(_QWORD *)&v323[16];
    v264 = *(_QWORD *)v323;
    *(_QWORD *)(v262 + v263 + 8) = *(_QWORD *)&v323[8];
    *(_QWORD *)(v262 + v263) = v264;
    v260[2] = v261 + 1;
    v265 = v303;
    if ( v303 )
    {
      v266 = (_QWORD *)(v302 + 8);
      do
      {
        v267 = *(v266 - 1);
        if ( v267 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v266, v267, 1);
        v266 += 3;
        --v265;
      }
      while ( v265 );
    }
  }
  v248 = v301;
  if ( v301 )
  {
    v59 = v302;
    goto LABEL_331;
  }
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v277);
}
