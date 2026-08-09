// __ZN13codexmate_lib4core5relay10translator6stream23OpenAiToAnthropicStream12handle_chunk @ 0x100aa7d40 | 基线 same-set
// [FULL hexrays]

double __fastcall codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::handle_chunk::h9110063a00f5b0aa(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double result)
{
  _DWORD *v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r9
  void *v8; // r13
  size_t v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 **v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  signed __int64 v21; // r15
  _DWORD *v22; // rbx
  unsigned int v23; // r12d
  __int64 v24; // r12
  size_t v25; // rcx
  __int64 v26; // r14
  _DWORD *v27; // rax
  _BYTE *v28; // rax
  void *v29; // rax
  _DWORD *v30; // rax
  _DWORD *v31; // rax
  __int64 v32; // r9
  void *v33; // r13
  size_t v34; // r14
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // r13
  _DWORD *v38; // rax
  void *v39; // rax
  __int64 *v40; // rdi
  char *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 **v45; // rsi
  __int64 v46; // rax
  __int64 *v47; // rdi
  char *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 **v52; // rsi
  __int64 v53; // rax
  _DWORD *v54; // rax
  void *v55; // rax
  __int64 *v56; // rdi
  char *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 **v61; // rsi
  _DWORD *v62; // rax
  __int64 v63; // r14
  void *v64; // rax
  __int64 v65; // r12
  char *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rdx
  char *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // r9
  void *v75; // r15
  size_t v76; // r14
  __int64 v77; // r12
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 *v83; // r14
  __int64 v84; // rax
  __int64 *v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // rax
  int v88; // ecx
  __int64 v89; // rsi
  void *v90; // r12
  __int64 v91; // r14
  __int64 v92; // rbx
  __int64 v93; // rax
  __int64 v94; // r15
  __int64 v95; // rax
  int v96; // ecx
  __int64 v97; // rsi
  void *v98; // r15
  __int64 *v99; // r12
  __int64 v100; // r14
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rdi
  size_t v104; // rdx
  __int64 v105; // rax
  _DWORD *v106; // rbx
  int v107; // r13d
  unsigned __int64 v109; // r15
  unsigned __int64 v110; // r12
  const __m128i *v111; // rax
  __int64 v112; // rcx
  __m128i v113; // xmm0
  __int64 *v114; // rsi
  __int64 v115; // rdi
  __int64 *v116; // rdi
  __m128i v117; // xmm1
  __int64 v119; // r9
  __int8 *v120; // r15
  unsigned __int64 v121; // r15
  size_t v124; // rax
  __int64 **v125; // r14
  __int64 *v126; // rax
  bool v127; // zf
  char v128; // al
  __int64 *v129; // r15
  __int64 *v130; // r12
  __int64 *v131; // rax
  int v132; // eax
  __int64 v133; // r12
  __int64 v134; // r15
  _DWORD *v135; // rax
  void *v136; // rax
  __int64 *v137; // rdi
  char *v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rdx
  __int64 **v142; // rsi
  __int64 v143; // rax
  char *v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rdx
  __int64 v148; // r9
  void *v149; // r15
  size_t v150; // r14
  __int64 v151; // r12
  __int64 v152; // r15
  _DWORD *v153; // rax
  void *v154; // rax
  __int64 *v155; // rdi
  char *v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rdx
  __int64 **v160; // rsi
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 *v163; // rdi
  char *v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rdx
  __int64 v167; // rdx
  __int64 **v168; // rsi
  void *v169; // rax
  __int64 v170; // r14
  _DWORD *v171; // rax
  _QWORD *v172; // rax
  __int64 *v173; // rdi
  char *v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rdx
  __int64 v177; // rdx
  __int64 **v178; // rsi
  _WORD *v179; // rax
  signed __int64 v180; // r12
  const void *v181; // rsi
  const void *v182; // rbx
  __int64 v183; // r14
  __int64 v184; // rax
  __int64 v185; // r13
  __int64 *v186; // rdi
  char *v187; // rax
  __int64 v188; // rcx
  __int64 v189; // rdx
  __int64 v190; // rdx
  __int64 **v191; // rsi
  _DWORD *v192; // rax
  __int64 v193; // r13
  size_t v194; // rbx
  void *v195; // rax
  __int64 v196; // r14
  __int64 *v197; // rdi
  char *v198; // rax
  __int64 v199; // rcx
  __int64 v200; // rdx
  __int64 v201; // rdx
  __int64 **v202; // rsi
  __int64 v203; // rax
  char *v204; // rax
  __int64 v205; // rcx
  __int64 v206; // rdx
  __int64 v207; // rdx
  char *v208; // rax
  __int64 v209; // rcx
  __int64 v210; // rdx
  __int64 v211; // rdx
  __int64 v212; // r9
  void *v213; // r15
  size_t v214; // r14
  __int64 v215; // r12
  __int64 v216; // r12
  _DWORD *v217; // rax
  void *v218; // rax
  __int64 *v219; // rdi
  char *v220; // rax
  __int64 v221; // rcx
  __int64 v222; // rdx
  __int64 v223; // rdx
  __int64 **v224; // rsi
  __int64 v225; // rax
  __int64 v226; // rax
  __int64 *v227; // rdi
  char *v228; // rax
  __int64 v229; // rcx
  __int64 v230; // rdx
  __int64 v231; // rdx
  __int64 **v232; // rsi
  __int64 v233; // rax
  __int64 v234; // r13
  _DWORD *v235; // rax
  void *v236; // rax
  __int64 *v237; // rdi
  char *v238; // rax
  __int64 v239; // rcx
  __int64 v240; // rdx
  __int64 v241; // rdx
  __int64 **v242; // rsi
  void *v243; // rax
  __int64 v244; // r13
  __int64 v245; // rax
  __int64 v246; // r14
  size_t v247; // r12
  char *v248; // rax
  __int64 v249; // rcx
  __int64 v250; // rdx
  __int64 v251; // rdx
  char *v252; // rax
  __int64 v253; // rcx
  __int64 v254; // rdx
  __int64 v255; // rdx
  __int64 v256; // r9
  void *v257; // r15
  size_t v258; // r14
  __int64 v259; // r12
  __int64 v260; // rsi
  __int64 v261; // rax
  __int64 v262; // rcx
  __int64 v263; // r9
  void *v264; // r14
  size_t v265; // r15
  __int64 v266; // r12
  _QWORD *v267; // rdx
  __int64 v268; // rax
  __int64 v269; // rdi
  __int64 v270; // rdi
  _QWORD v271[3]; // [rsp+0h] [rbp-2A0h] BYREF
  _QWORD v272[3]; // [rsp+18h] [rbp-288h] BYREF
  __int64 v273; // [rsp+30h] [rbp-270h]
  _DWORD *v274; // [rsp+38h] [rbp-268h]
  __int64 v275; // [rsp+40h] [rbp-260h] BYREF
  __int64 v276; // [rsp+48h] [rbp-258h]
  __int64 v277; // [rsp+50h] [rbp-250h]
  __int64 *v278; // [rsp+58h] [rbp-248h] BYREF
  void *v279; // [rsp+60h] [rbp-240h]
  size_t v280; // [rsp+68h] [rbp-238h]
  __int64 (__fastcall *v281)(); // [rsp+70h] [rbp-230h]
  _QWORD *v282; // [rsp+78h] [rbp-228h]
  _DWORD *v283; // [rsp+80h] [rbp-220h]
  __int64 v284; // [rsp+88h] [rbp-218h]
  size_t v285; // [rsp+90h] [rbp-210h]
  __int64 *v286; // [rsp+98h] [rbp-208h] BYREF
  void *v287; // [rsp+A0h] [rbp-200h]
  size_t v288; // [rsp+A8h] [rbp-1F8h]
  __int64 (__fastcall *v289)(); // [rsp+B0h] [rbp-1F0h]
  __int64 v290; // [rsp+B8h] [rbp-1E8h]
  void *v291; // [rsp+C0h] [rbp-1E0h]
  void *v292; // [rsp+C8h] [rbp-1D8h]
  _DWORD *v293; // [rsp+D0h] [rbp-1D0h] BYREF
  __int64 v294; // [rsp+D8h] [rbp-1C8h]
  __int64 v295; // [rsp+E0h] [rbp-1C0h]
  void *v296; // [rsp+E8h] [rbp-1B8h]
  __int64 v297; // [rsp+F0h] [rbp-1B0h] BYREF
  _DWORD *v298; // [rsp+F8h] [rbp-1A8h]
  __int64 v299; // [rsp+100h] [rbp-1A0h]
  __int64 v300; // [rsp+108h] [rbp-198h]
  void *v301; // [rsp+110h] [rbp-190h]
  size_t v302; // [rsp+118h] [rbp-188h]
  void *v303; // [rsp+120h] [rbp-180h] BYREF
  size_t v304; // [rsp+128h] [rbp-178h]
  __int64 (__fastcall *v305)(); // [rsp+130h] [rbp-170h]
  __int8 *v306; // [rsp+138h] [rbp-168h]
  __int64 v307; // [rsp+140h] [rbp-160h] BYREF
  _DWORD *v308; // [rsp+148h] [rbp-158h]
  __int64 v309; // [rsp+150h] [rbp-150h]
  __int64 v310; // [rsp+158h] [rbp-148h]
  __int64 v311; // [rsp+160h] [rbp-140h] BYREF
  __int64 v312; // [rsp+168h] [rbp-138h]
  __int64 v313; // [rsp+170h] [rbp-130h]
  __int64 v314; // [rsp+178h] [rbp-128h] BYREF
  size_t v315; // [rsp+180h] [rbp-120h]
  __int64 v316; // [rsp+188h] [rbp-118h]
  size_t v317; // [rsp+190h] [rbp-110h]
  size_t v318; // [rsp+198h] [rbp-108h]
  char v319; // [rsp+1A7h] [rbp-F9h]
  __int64 *v320; // [rsp+1A8h] [rbp-F8h] BYREF
  size_t v321; // [rsp+1B0h] [rbp-F0h]
  __int64 (__fastcall *v322)(); // [rsp+1B8h] [rbp-E8h]
  __int64 v323; // [rsp+1C0h] [rbp-E0h]
  __int64 *v324; // [rsp+1C8h] [rbp-D8h] BYREF
  void *v325; // [rsp+1D0h] [rbp-D0h]
  size_t v326; // [rsp+1D8h] [rbp-C8h]
  __int64 (__fastcall *v327)(); // [rsp+1E0h] [rbp-C0h]
  __int64 v328; // [rsp+1E8h] [rbp-B8h]
  __int64 v329; // [rsp+1F0h] [rbp-B0h]
  __int64 v330; // [rsp+1F8h] [rbp-A8h]
  __int64 v331; // [rsp+200h] [rbp-A0h] BYREF
  void *v332; // [rsp+208h] [rbp-98h]
  size_t v333; // [rsp+210h] [rbp-90h]
  __int64 v334; // [rsp+218h] [rbp-88h]
  __int64 *v335; // [rsp+220h] [rbp-80h] BYREF
  void *__src; // [rsp+228h] [rbp-78h] BYREF
  size_t __n; // [rsp+230h] [rbp-70h]
  __int64 (__fastcall *v338)(); // [rsp+238h] [rbp-68h]
  __int64 v339; // [rsp+240h] [rbp-60h]
  __int64 v340; // [rsp+248h] [rbp-58h]
  __int64 v341; // [rsp+250h] [rbp-50h]
  __int64 v342; // [rsp+258h] [rbp-48h] BYREF
  __int64 v343; // [rsp+260h] [rbp-40h]
  __int64 v344; // [rsp+268h] [rbp-38h]
  __int64 v345; // [rsp+270h] [rbp-30h]

  v4 = (_DWORD *)a2;
  v282 = a1;
  v311 = 0;
  v312 = 1;
  v313 = 0;
  if ( *(_BYTE *)(a2 + 108) )
  {
    v310 = 1;
    v5 = 0;
  }
  else
  {
    v6 = a3;
    *(_BYTE *)(a2 + 108) = 1;
    codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::emit_message_start::h172b875acf9978ec(
      &v335,
      a2);
    v8 = __src;
    v9 = __n;
    if ( __n )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v311, 0, __n, 1, 1, v7);
      v10 = v312;
      v11 = v313;
    }
    else
    {
      v10 = 1;
      v11 = 0;
    }
    v310 = v10;
    memcpy((void *)(v10 + v11), v8, v9);
    v5 = v9 + v11;
    v313 = v5;
    if ( v335 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v335, 1);
    a3 = v6;
    v4 = (_DWORD *)a2;
  }
  v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "choicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
          7,
          a3);
  if ( v12 && *(_BYTE *)v12 == 4 && *(_QWORD *)(v12 + 24) )
  {
    v273 = *(_QWORD *)(v12 + 16);
    v13 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "deltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
            5,
            v273);
    if ( v13 )
    {
      switch ( *(_BYTE *)v13 )
      {
        case 0:
          LOBYTE(v335) = 0;
          break;
        case 1:
        case 2:
          v338 = *(__int64 (__fastcall **)())(v13 + 24);
          __n = *(_QWORD *)(v13 + 16);
          v14 = *(__int64 **)v13;
          __src = *(void **)(v13 + 8);
          v335 = v14;
          break;
        case 3:
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__src, v13 + 8);
          LOBYTE(v335) = 3;
          break;
        case 4:
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&__src, v13 + 8);
          LOBYTE(v335) = 4;
          break;
        case 5:
          if ( *(_QWORD *)(v13 + 24) )
          {
            v17 = *(_QWORD *)(v13 + 8);
            if ( !v17 )
              core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
              &__src,
              v17,
              *(_QWORD *)(v13 + 16));
          }
          else
          {
            __src = nullptr;
            v338 = nullptr;
          }
          LOBYTE(v335) = 5;
          break;
      }
      v281 = v338;
      v280 = __n;
      v279 = __src;
      v278 = v335;
      LOBYTE(v335) = 0;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v335);
    }
    else
    {
      LOBYTE(v335) = 0;
      v279 = __src;
      v280 = __n;
      v281 = v338;
      v278 = v335;
    }
    v18 = (__int64 **)"content*** Begin Patch";
    v19 = 7;
    v20 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "content*** Begin Patch",
            7,
            &v278);
    if ( v20 )
    {
      if ( *(_BYTE *)v20 == 3 )
      {
        v21 = *(_QWORD *)(v20 + 24);
        if ( v21 )
        {
          v301 = *(void **)(v20 + 16);
          if ( v4[12] == 1 )
          {
            v310 = v5;
            v22 = v4;
            v23 = v4[13];
          }
          else
          {
            v24 = v5;
            v25 = (unsigned int)v4[26];
            v4[26] = v25 + 1;
            v4[12] = 1;
            v22 = v4;
            v318 = v25;
            v4[13] = v25;
            v314 = 0;
            v316 = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("content*** Begin Patch", 7);
            v26 = 4;
            v27 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v27 )
              goto LABEL_305;
            *v27 = 1701869940;
            v331 = 4;
            v332 = v27;
            v333 = 4;
            serde_json::value::to_value::h29e3c39dc75a9151(&v335, &off_101974430);
            if ( (_BYTE)v335 == 6 )
            {
              v324 = (__int64 *)__src;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v324, &off_101974C58, &off_101974440);
            }
            v327 = v338;
            v326 = __n;
            v325 = __src;
            v324 = v335;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v335,
              &v314,
              &v331,
              &v324);
            if ( (_BYTE)v335 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v335);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v335, &v314);
            v26 = 5;
            v28 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
            if ( !v28 )
              goto LABEL_305;
            v28[4] = 120;
            *(_DWORD *)v28 = 1701080681;
            v331 = 5;
            v332 = v28;
            v333 = 5;
            LOBYTE(v335) = 2;
            __src = nullptr;
            __n = v318;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v324,
              &v314,
              &v331,
              &v335);
            if ( (_BYTE)v324 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v324);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v324, &v314);
            v26 = 13;
            v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
            if ( !v29 )
LABEL_305:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v26);
            qmemcpy(v29, "content_block", 13);
            v342 = 13;
            v343 = (__int64)v29;
            v344 = 13;
            v320 = nullptr;
            v322 = nullptr;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1);
            v30 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v30 )
              goto LABEL_306;
            *v30 = 1701869940;
            v331 = 4;
            v332 = v30;
            v333 = 4;
            serde_json::value::to_value::h29e3c39dc75a9151(&v335, &off_101974458);
            if ( (_BYTE)v335 == 6 )
            {
              v324 = (__int64 *)__src;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v324, &off_101974C58, &off_101974440);
            }
            v327 = v338;
            v326 = __n;
            v325 = __src;
            v324 = v335;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v335,
              &v320,
              &v331,
              &v324);
            if ( (_BYTE)v335 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v335);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v335, &v320);
            v31 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v31 )
LABEL_306:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
            *v31 = 1954047348;
            v331 = 4;
            v332 = v31;
            v333 = 4;
            serde_json::value::to_value::h29e3c39dc75a9151(&v335, &xmmword_1016792E0);
            if ( (_BYTE)v335 == 6 )
            {
              v324 = (__int64 *)__src;
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v324, &off_101974C58, &off_101974440);
            }
            v327 = v338;
            v326 = __n;
            v325 = __src;
            v324 = v335;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v335,
              &v320,
              &v331,
              &v324);
            if ( (_BYTE)v335 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v335);
            __src = v320;
            __n = v321;
            v338 = v322;
            LOBYTE(v335) = 5;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
              &v324,
              &v314,
              &v342,
              &v335);
            if ( (_BYTE)v324 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v324);
            __src = (void *)v314;
            __n = v315;
            v338 = (__int64 (__fastcall *)())v316;
            LOBYTE(v335) = 5;
            codexmate_lib::core::relay::translator::stream::sse_event::hcc82cd85f00ee8ac(&v324, &v335);
            v33 = v325;
            v34 = v326;
            v35 = v310;
            if ( v326 > v311 - v24 )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v311,
                v24,
                v326,
                1,
                1,
                v32);
              v35 = v312;
              v24 = v313;
            }
            memcpy((void *)(v24 + v35), v33, v34);
            v36 = v34 + v24;
            v313 = v36;
            v19 = (__int64)v324;
            if ( v324 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v324, 1);
            v18 = &v335;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v335);
            v310 = v36;
            v23 = v318;
          }
          v303 = nullptr;
          v305 = nullptr;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v19);
          v37 = 4;
          v38 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v38 )
            goto LABEL_303;
          *v38 = 1701869940;
          v314 = 4;
          v315 = (size_t)v38;
          v316 = 4;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v39 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
          if ( !v39 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
          qmemcpy(v39, "content_block_delta", 19);
          LOBYTE(v342) = 3;
          v343 = 19;
          v344 = (__int64)v39;
          v345 = 19;
          v40 = (__int64 *)&v324;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v303, &v314);
          if ( __OFSUB__(0, v324) )
          {
            v41 = (char *)v325;
            v42 = 32LL * (_QWORD)v327;
            v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
            v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
            v43 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
            v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
            v331 = v43;
            *(_QWORD *)((char *)v325 + v42 + 24) = v345;
            *(_QWORD *)&v41[v42 + 16] = v344;
            v44 = v342;
            v45 = (__int64 **)v343;
            *(_QWORD *)&v41[v42 + 8] = v343;
            *(_QWORD *)&v41[v42] = v44;
            if ( (_BYTE)v331 != 6 )
            {
              v40 = &v331;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
            }
          }
          else
          {
            v341 = v330;
            v340 = v329;
            v339 = v328;
            v338 = v327;
            __n = v326;
            __src = v325;
            v335 = v324;
            v323 = v345;
            v322 = (__int64 (__fastcall *)())v344;
            v321 = v343;
            v320 = (__int64 *)v342;
            v40 = &v331;
            v45 = &v335;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v331,
              &v335,
              &v320);
          }
          v318 = (size_t)v22;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, v45);
          v37 = 5;
          v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
          if ( !v46 )
            goto LABEL_303;
          *(_BYTE *)(v46 + 4) = 120;
          *(_DWORD *)v46 = 1701080681;
          v314 = 5;
          v315 = v46;
          v316 = 5;
          LOBYTE(v342) = 2;
          v343 = 0;
          v344 = v23;
          v47 = (__int64 *)&v324;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v303, &v314);
          if ( v324 == (__int64 *)0x8000000000000000LL )
          {
            v48 = (char *)v325;
            v49 = 32LL * (_QWORD)v327;
            v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
            v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
            v50 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
            v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
            v331 = v50;
            *(_QWORD *)((char *)v325 + v49 + 24) = v345;
            *(_QWORD *)&v48[v49 + 16] = v344;
            v51 = v342;
            v52 = (__int64 **)v343;
            *(_QWORD *)&v48[v49 + 8] = v343;
            *(_QWORD *)&v48[v49] = v51;
            if ( (_BYTE)v331 != 6 )
            {
              v47 = &v331;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
            }
          }
          else
          {
            v341 = v330;
            v340 = v329;
            v339 = v328;
            v338 = v327;
            __n = v326;
            __src = v325;
            v335 = v324;
            v323 = v345;
            v322 = (__int64 (__fastcall *)())v344;
            v321 = v343;
            v320 = (__int64 *)v342;
            v47 = &v331;
            v52 = &v335;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v331,
              &v335,
              &v320);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v47, v52);
          v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
          if ( !v53 )
LABEL_303:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v37);
          *(_BYTE *)(v53 + 4) = 97;
          *(_DWORD *)v53 = 1953260900;
          v307 = 5;
          v290 = v53;
          v308 = (_DWORD *)v53;
          v309 = 5;
          v286 = nullptr;
          v288 = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
          v54 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v54 )
            goto LABEL_304;
          *v54 = 1701869940;
          v297 = 4;
          v298 = v54;
          v299 = 4;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v55 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
          if ( !v55 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10);
          qmemcpy(v55, "text_delta", 10);
          LOBYTE(v342) = 3;
          v343 = 10;
          v344 = (__int64)v55;
          v345 = 10;
          v56 = (__int64 *)&v324;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v286, &v297);
          if ( v324 == (__int64 *)0x8000000000000000LL )
          {
            v57 = (char *)v325;
            v58 = 32LL * (_QWORD)v327;
            v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
            v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
            v59 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
            v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
            v331 = v59;
            *(_QWORD *)((char *)v325 + v58 + 24) = v345;
            *(_QWORD *)&v57[v58 + 16] = v344;
            v60 = v342;
            v61 = (__int64 **)v343;
            *(_QWORD *)&v57[v58 + 8] = v343;
            *(_QWORD *)&v57[v58] = v60;
            if ( (_BYTE)v331 != 6 )
            {
              v56 = &v331;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
            }
          }
          else
          {
            v341 = v330;
            v340 = v329;
            v339 = v328;
            v338 = v327;
            __n = v326;
            __src = v325;
            v335 = v324;
            v323 = v345;
            v322 = (__int64 (__fastcall *)())v344;
            v321 = v343;
            v320 = (__int64 *)v342;
            v56 = &v331;
            v61 = &v335;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v331,
              &v335,
              &v320);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56, v61);
          v62 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v62 )
LABEL_304:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
          *v62 = 1954047348;
          v297 = 4;
          v298 = v62;
          v299 = 4;
          if ( v21 < 0 )
          {
            v63 = 0;
            goto LABEL_74;
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v63 = 1;
          v64 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v21, 1);
          if ( !v64 )
LABEL_74:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v63, v21);
          v65 = (__int64)v64;
          memcpy(v64, v301, v21);
          LOBYTE(v342) = 3;
          v343 = v21;
          v344 = v65;
          v345 = v21;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v286, &v297);
          v4 = (_DWORD *)v318;
          if ( v324 == (__int64 *)0x8000000000000000LL )
          {
            v66 = (char *)v325;
            v67 = 32LL * (_QWORD)v327;
            v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
            v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
            v68 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
            v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
            v331 = v68;
            *(_QWORD *)((char *)v325 + v67 + 24) = v345;
            *(_QWORD *)&v66[v67 + 16] = v344;
            v69 = v342;
            *(_QWORD *)&v66[v67 + 8] = v343;
            *(_QWORD *)&v66[v67] = v69;
            if ( (_BYTE)v331 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
          }
          else
          {
            v341 = v330;
            v340 = v329;
            v339 = v328;
            v338 = v327;
            __n = v326;
            __src = v325;
            v335 = v324;
            v323 = v345;
            v322 = (__int64 (__fastcall *)())v344;
            v321 = v343;
            v320 = (__int64 *)v342;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v331,
              &v335,
              &v320);
          }
          v315 = (size_t)v286;
          v316 = (__int64)v287;
          v317 = v288;
          LOBYTE(v314) = 5;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v303, &v307);
          if ( v324 == (__int64 *)0x8000000000000000LL )
          {
            v70 = (char *)v325;
            v71 = 32LL * (_QWORD)v327;
            v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
            v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
            v72 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
            v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
            v331 = v72;
            *(_QWORD *)((char *)v325 + v71 + 24) = v317;
            *(_QWORD *)&v70[v71 + 16] = v316;
            v73 = v314;
            *(_QWORD *)&v70[v71 + 8] = v315;
            *(_QWORD *)&v70[v71] = v73;
            if ( (_BYTE)v331 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
          }
          else
          {
            v341 = v330;
            v340 = v329;
            v339 = v328;
            v338 = v327;
            __n = v326;
            __src = v325;
            v335 = v324;
            v323 = v317;
            v322 = (__int64 (__fastcall *)())v316;
            v321 = v315;
            v320 = (__int64 *)v314;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v331,
              &v335,
              &v320);
          }
          v325 = v303;
          v326 = v304;
          v327 = v305;
          LOBYTE(v324) = 5;
          v320 = (__int64 *)"content_block_deltacontent_block_stopmessage_deltamessage_stop";
          v321 = 19;
          v342 = (__int64)&v324;
          v335 = (__int64 *)&v320;
          __src = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
          __n = (size_t)&v342;
          v338 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v331, &unk_1017C9F28, &v335);
          v75 = v332;
          v76 = v333;
          if ( v333 > v311 - v310 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v311,
              v310,
              v333,
              1,
              1,
              v74);
            v310 = v313;
            v4 = (_DWORD *)v318;
          }
          v77 = v310;
          memcpy((void *)(v310 + v312), v75, v76);
          v313 = v76 + v77;
          if ( v331 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v331, 1);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v324);
        }
      }
    }
    v78 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "tool_callsfinish_reasonprompt_tokenscompletion_tokensid",
            10,
            &v278);
    if ( v78 )
    {
      if ( *(_BYTE *)v78 == 4 )
      {
        v79 = *(_QWORD *)(v78 + 24);
        if ( v79 )
        {
          v80 = *(_QWORD *)(v78 + 16);
          v81 = v80 + 32 * v79;
          v274 = v4 + 14;
          v283 = v4 + 22;
          while ( 1 )
          {
            v310 = v80;
            v82 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &unk_10167CD26,
                    5,
                    v80);
            if ( v82 && *(_BYTE *)v82 == 2 && !*(_QWORD *)(v82 + 8) )
              v83 = *(__int64 **)(v82 + 16);
            else
              v83 = nullptr;
            v84 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &unk_101674A90,
                    8,
                    v310);
            if ( v84 )
            {
              switch ( *(_BYTE *)v84 )
              {
                case 0:
                  LOBYTE(v335) = 0;
                  break;
                case 1:
                case 2:
                  v338 = *(__int64 (__fastcall **)())(v84 + 24);
                  __n = *(_QWORD *)(v84 + 16);
                  v85 = *(__int64 **)v84;
                  __src = *(void **)(v84 + 8);
                  v335 = v85;
                  break;
                case 3:
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                    &__src,
                    v84 + 8);
                  LOBYTE(v335) = 3;
                  break;
                case 4:
                  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                    &__src,
                    v84 + 8);
                  LOBYTE(v335) = 4;
                  break;
                case 5:
                  if ( *(_QWORD *)(v84 + 24) )
                  {
                    v86 = *(_QWORD *)(v84 + 8);
                    if ( !v86 )
                      core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
                    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                      &__src,
                      v86,
                      *(_QWORD *)(v84 + 16));
                  }
                  else
                  {
                    __src = nullptr;
                    v338 = nullptr;
                  }
                  LOBYTE(v335) = 5;
                  break;
              }
              v289 = v338;
              v288 = __n;
              v287 = __src;
              v286 = v335;
              LOBYTE(v335) = 0;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v335);
            }
            else
            {
              LOBYTE(v335) = 0;
              v287 = __src;
              v288 = __n;
              v289 = v338;
              v286 = v335;
            }
            v87 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("id", 2, v310);
            if ( !v87 )
              break;
            v89 = 1;
            if ( *(_BYTE *)v87 != 3 )
            {
              LOBYTE(v87) = 1;
              LODWORD(v306) = v87;
              goto LABEL_119;
            }
            v90 = *(void **)(v87 + 24);
            if ( (__int64)v90 < 0 )
            {
              v269 = 0;
              goto LABEL_288;
            }
            LOBYTE(v88) = 1;
            LODWORD(v306) = v88;
            v318 = (size_t)v83;
            v91 = v81;
            v92 = *(_QWORD *)(v87 + 16);
            if ( v90 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("id", 1);
              v93 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v90, 1);
              if ( !v93 )
              {
                v301 = v90;
                v269 = 1;
LABEL_288:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v269, v301);
              }
              v94 = v93;
              LODWORD(v306) = 0;
            }
            else
            {
              v90 = nullptr;
              v94 = 1;
            }
            v89 = v92;
            v81 = v91;
            v83 = (__int64 *)v318;
LABEL_120:
            memcpy((void *)v94, (const void *)v89, (size_t)v90);
            v272[0] = v90;
            v301 = (void *)v94;
            v272[1] = v94;
            v290 = (__int64)v90;
            v272[2] = v90;
            v95 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &unk_1015FB9C8,
                    4,
                    &v286);
            LOBYTE(v96) = 1;
            LODWORD(v291) = v96;
            v97 = 1;
            if ( v95 && *(_BYTE *)v95 == 3 )
            {
              v98 = *(void **)(v95 + 24);
              if ( (__int64)v98 < 0 )
              {
                v270 = 0;
                goto LABEL_290;
              }
              v99 = v83;
              v100 = v81;
              v101 = *(_QWORD *)(v95 + 16);
              if ( v98 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_1015FB9C8, 1);
                v102 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v98, 1);
                if ( !v102 )
                {
                  v296 = v98;
                  v270 = 1;
LABEL_290:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v270, v296);
                }
                v103 = v102;
                LODWORD(v291) = 0;
                v97 = v101;
                v104 = (size_t)v98;
              }
              else
              {
                v104 = 0;
                v103 = 1;
                v97 = *(_QWORD *)(v95 + 16);
              }
              v81 = v100;
              v83 = v99;
            }
            else
            {
              v104 = 0;
              v103 = 1;
            }
            v296 = (void *)v103;
            v285 = v104;
            memcpy((void *)v103, (const void *)v97, v104);
            v105 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "argumentsinputpatchcontent*** Begin Patch",
                     9,
                     &v286);
            v319 = 1;
            v284 = v81;
            if ( v105 && *(_BYTE *)v105 == 3 )
            {
              v292 = *(void **)(v105 + 16);
              v302 = *(_QWORD *)(v105 + 24);
              v319 = v302 == 0;
            }
            else
            {
              v292 = (void *)1;
              v302 = 0;
            }
            v310 += 32;
            v106 = v4;
            v107 = v4[26];
            v335 = v83;
            v109 = core::hash::BuildHasher::hash_one::haed72534fb8ce28b(v283, &v335);
            v110 = v109 >> 57;
            v111 = *((const __m128i **)v106 + 7);
            v318 = (size_t)v106;
            v112 = *((_QWORD *)v106 + 8);
            v113 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v109 >> 57), (__m128i)0LL);
            v114 = nullptr;
            v115 = v109;
            while ( 1 )
            {
              v116 = (__int64 *)(v112 & v115);
              v117 = _mm_loadu_si128((const __m128i *)((char *)v116 + (_QWORD)v111));
              _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v117, v113));
              if ( _R8D )
                break;
LABEL_135:
              v81 = v284;
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v117, (__m128i)-1LL)) )
              {
                if ( !*(_QWORD *)(v318 + 72) )
                {
                  hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h35fa60918aa0e5f4(v274, 1, v283, 1);
                  v111 = *(const __m128i **)(v318 + 56);
                  v112 = *(_QWORD *)(v318 + 64);
                }
                v121 = v112 & v109;
                _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v111 + v121)));
                if ( !(_DWORD)_RDX )
                {
                  v260 = 16;
                  do
                  {
                    v121 = v112 & (v260 + v121);
                    _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v111 + v121)));
                    v260 += 16;
                  }
                  while ( !(_DWORD)_RDX );
                }
                __asm { tzcnt   edx, edx }
                _RDX = v112 & (v121 + _RDX);
                v114 = (__int64 *)v111->u8[_RDX];
                if ( (char)v114 >= 0 )
                {
                  _RDX = (unsigned int)_mm_movemask_epi8(_mm_load_si128(v111));
                  __asm { tzcnt   edx, edx }
                  v114 = (__int64 *)v111->u8[_RDX];
                }
                v116 = (__int64 *)(v112 & (_RDX - 16));
                v111->i8[_RDX] = v110;
                *((_BYTE *)v116 + (_QWORD)v111 + 16) = v110;
                v120 = &v111->i8[-40 * _RDX];
                LOBYTE(v114) = (unsigned __int8)v114 & 1;
                *((_QWORD *)v120 - 5) = v83;
                *((_QWORD *)v120 - 4) = 0;
                *((_QWORD *)v120 - 3) = 1;
                *((_QWORD *)v120 - 2) = 0;
                *((_DWORD *)v120 - 2) = v107;
                *(v120 - 4) = 0;
                v124 = v318;
                *(__m128i *)(v318 + 72) = _mm_sub_epi64(
                                            _mm_loadu_si128((const __m128i *)(v318 + 72)),
                                            _mm_insert_epi64(
                                              _mm_load_si128((const __m128i *)&xmmword_1015FB9F0),
                                              (unsigned __int8)v114,
                                              0));
                v107 = *(_DWORD *)(v124 + 104);
                goto LABEL_144;
              }
              v115 = (__int64)v114 + (_QWORD)v116 + 16;
              v114 += 2;
            }
            while ( 1 )
            {
              __asm { tzcnt   r9d, r8d }
              v119 = -5LL * (v112 & ((unsigned __int64)v116 + _R9));
              v81 = v284;
              if ( (__int64 *)v111[-3].i64[v119 + 1] == v83 )
                break;
              _R9 = (unsigned int)(_R8D - 1);
              LOWORD(_R9) = _R8D & (_R8D - 1);
              _R8D = _R9;
              if ( !(_WORD)_R9 )
                goto LABEL_135;
            }
            v120 = &v111->i8[8 * v119];
LABEL_144:
            if ( *((_DWORD *)v120 - 2) == v107 )
              *(_DWORD *)(v318 + 104) = v107 + 1;
            v4 = (_DWORD *)v318;
            if ( !*(v120 - 4) )
            {
              v125 = (__int64 **)(v120 - 32);
              if ( !(_BYTE)v306 )
              {
                v116 = (__int64 *)&v335;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v335, v272);
                v114 = *v125;
                if ( *v125 )
                {
                  v116 = *((__int64 **)v120 - 3);
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v114, 1);
                }
                v125[2] = (__int64 *)__n;
                v126 = v335;
                v125[1] = (__int64 *)__src;
                *v125 = v126;
                v4 = (_DWORD *)v318;
              }
              v127 = *((_QWORD *)v120 - 2) == 0;
              v306 = v120;
              if ( v127 )
              {
                uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v335);
                v332 = __src;
                v331 = (__int64)v335;
                v324 = nullptr;
                v325 = (void *)1;
                v326 = 0;
                __n = 1610612768;
                v335 = (__int64 *)&v324;
                __src = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
                v128 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(&v331, &v335);
                v4 = (_DWORD *)v318;
                if ( v128 )
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
                    55,
                    &v320,
                    &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
                    &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
                v129 = v324;
                v130 = (__int64 *)v325;
                if ( v326 <= 0xC )
                {
                  if ( v326 != 12 )
LABEL_301:
                    core::str::slice_error_fail::h480e51fbd8b15eba(v325, v326, 0, 12, &off_101974468);
                }
                else if ( *((char *)v325 + 12) < -64 )
                {
                  goto LABEL_301;
                }
                v324 = (__int64 *)v325;
                v325 = (void *)12;
                v335 = (__int64 *)&v324;
                __src = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                v116 = v271;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v271, &unk_1017C9F1F, &v335);
                if ( v129 )
                {
                  v116 = v130;
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v129, 1);
                }
                v114 = *v125;
                v120 = v306;
                if ( *v125 )
                {
                  v116 = *((__int64 **)v306 - 3);
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v114, 1);
                }
                v125[2] = (__int64 *)v271[2];
                v131 = (__int64 *)v271[0];
                v125[1] = (__int64 *)v271[1];
                *v125 = v131;
              }
              if ( !(_BYTE)v291 )
              {
                *(v120 - 4) = 1;
                v132 = v4[12];
                v133 = (unsigned int)v4[13];
                v4[12] = 0;
                if ( v132 == 1 )
                {
                  v307 = 0;
                  v309 = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v116, v114);
                  v134 = 4;
                  v135 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v135 )
                    goto LABEL_317;
                  *v135 = 1701869940;
                  v297 = 4;
                  v298 = v135;
                  v299 = 4;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                  v136 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
                  if ( !v136 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18);
                  qmemcpy(v136, "content_block_stop", 18);
                  LOBYTE(v342) = 3;
                  v343 = 18;
                  v344 = (__int64)v136;
                  v345 = 18;
                  v137 = (__int64 *)&v324;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v324,
                    &v307,
                    &v297);
                  if ( v324 == (__int64 *)0x8000000000000000LL )
                  {
                    v138 = (char *)v325;
                    v139 = 32LL * (_QWORD)v327;
                    v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                    v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                    v140 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                    v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                    v331 = v140;
                    *(_QWORD *)((char *)v325 + v139 + 24) = v345;
                    *(_QWORD *)&v138[v139 + 16] = v344;
                    v141 = v342;
                    v142 = (__int64 **)v343;
                    *(_QWORD *)&v138[v139 + 8] = v343;
                    *(_QWORD *)&v138[v139] = v141;
                    if ( (_BYTE)v331 != 6 )
                    {
                      v137 = &v331;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                    }
                  }
                  else
                  {
                    v341 = v330;
                    v340 = v329;
                    v339 = v328;
                    v338 = v327;
                    __n = v326;
                    __src = v325;
                    v335 = v324;
                    v323 = v345;
                    v322 = (__int64 (__fastcall *)())v344;
                    v321 = v343;
                    v320 = (__int64 *)v342;
                    v137 = &v331;
                    v142 = &v335;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v331,
                      &v335,
                      &v320);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v137, v142);
                  v134 = 5;
                  v143 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                  if ( !v143 )
LABEL_317:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v134);
                  *(_BYTE *)(v143 + 4) = 120;
                  *(_DWORD *)v143 = 1701080681;
                  v297 = 5;
                  v298 = (_DWORD *)v143;
                  v299 = 5;
                  LOBYTE(v342) = 2;
                  v343 = 0;
                  v344 = v133;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v324,
                    &v307,
                    &v297);
                  if ( v324 == (__int64 *)0x8000000000000000LL )
                  {
                    v144 = (char *)v325;
                    v145 = 32LL * (_QWORD)v327;
                    v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                    v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                    v146 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                    v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                    v331 = v146;
                    *(_QWORD *)((char *)v325 + v145 + 24) = v345;
                    *(_QWORD *)&v144[v145 + 16] = v344;
                    v147 = v342;
                    *(_QWORD *)&v144[v145 + 8] = v343;
                    *(_QWORD *)&v144[v145] = v147;
                    if ( (_BYTE)v331 != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                  }
                  else
                  {
                    v341 = v330;
                    v340 = v329;
                    v339 = v328;
                    v338 = v327;
                    __n = v326;
                    __src = v325;
                    v335 = v324;
                    v323 = v345;
                    v322 = (__int64 (__fastcall *)())v344;
                    v321 = v343;
                    v320 = (__int64 *)v342;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v331,
                      &v335,
                      &v320);
                  }
                  v317 = v309;
                  v316 = (__int64)v308;
                  v315 = v307;
                  LOBYTE(v314) = 5;
                  v331 = (__int64)"content_block_stopmessage_deltamessage_stop";
                  v332 = (void *)18;
                  v320 = &v314;
                  v335 = &v331;
                  __src = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                  __n = (size_t)&v320;
                  v338 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v324, &unk_1017C9F28, &v335);
                  v149 = v325;
                  v150 = v326;
                  v151 = v313;
                  if ( v326 > v311 - v313 )
                  {
                    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                      &v311,
                      v313,
                      v326,
                      1,
                      1,
                      v148);
                    v151 = v313;
                  }
                  memcpy((void *)(v151 + v312), v149, v150);
                  v313 = v150 + v151;
                  v114 = v324;
                  if ( v324 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, v324, 1);
                  v116 = &v314;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v314);
                }
                v293 = nullptr;
                v295 = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v116, v114);
                v152 = 4;
                v153 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v153 )
                  goto LABEL_312;
                *v153 = 1701869940;
                v314 = 4;
                v315 = (size_t)v153;
                v316 = 4;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v154 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
                if ( !v154 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
                qmemcpy(v154, "content_block_start", 19);
                LOBYTE(v342) = 3;
                v343 = 19;
                v344 = (__int64)v154;
                v345 = 19;
                v155 = (__int64 *)&v324;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v293, &v314);
                if ( v324 == (__int64 *)0x8000000000000000LL )
                {
                  v156 = (char *)v325;
                  v157 = 32LL * (_QWORD)v327;
                  v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                  v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                  v158 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                  v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                  v331 = v158;
                  *(_QWORD *)((char *)v325 + v157 + 24) = v345;
                  *(_QWORD *)&v156[v157 + 16] = v344;
                  v159 = v342;
                  v160 = (__int64 **)v343;
                  *(_QWORD *)&v156[v157 + 8] = v343;
                  *(_QWORD *)&v156[v157] = v159;
                  if ( (_BYTE)v331 != 6 )
                  {
                    v155 = &v331;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                  }
                }
                else
                {
                  v341 = v330;
                  v340 = v329;
                  v339 = v328;
                  v338 = v327;
                  __n = v326;
                  __src = v325;
                  v335 = v324;
                  v323 = v345;
                  v322 = (__int64 (__fastcall *)())v344;
                  v321 = v343;
                  v320 = (__int64 *)v342;
                  v155 = &v331;
                  v160 = &v335;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v331,
                    &v335,
                    &v320);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v155, v160);
                v152 = 5;
                v161 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                if ( !v161 )
                  goto LABEL_312;
                *(_BYTE *)(v161 + 4) = 120;
                *(_DWORD *)v161 = 1701080681;
                v314 = 5;
                v315 = v161;
                v316 = 5;
                v162 = *((unsigned int *)v306 - 2);
                LOBYTE(v342) = 2;
                v343 = 0;
                v344 = v162;
                v163 = (__int64 *)&v324;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v293, &v314);
                if ( v324 == (__int64 *)0x8000000000000000LL )
                {
                  v164 = (char *)v325;
                  v165 = 32LL * (_QWORD)v327;
                  v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                  v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                  v166 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                  v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                  v331 = v166;
                  *(_QWORD *)((char *)v325 + v165 + 24) = v345;
                  *(_QWORD *)&v164[v165 + 16] = v344;
                  v167 = v342;
                  v168 = (__int64 **)v343;
                  *(_QWORD *)&v164[v165 + 8] = v343;
                  *(_QWORD *)&v164[v165] = v167;
                  if ( (_BYTE)v331 != 6 )
                  {
                    v163 = &v331;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                  }
                }
                else
                {
                  v341 = v330;
                  v340 = v329;
                  v339 = v328;
                  v338 = v327;
                  __n = v326;
                  __src = v325;
                  v335 = v324;
                  v323 = v345;
                  v322 = (__int64 (__fastcall *)())v344;
                  v321 = v343;
                  v320 = (__int64 *)v342;
                  v163 = &v331;
                  v168 = &v335;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v331,
                    &v335,
                    &v320);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v163, v168);
                v152 = 13;
                v169 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
                if ( !v169 )
LABEL_312:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v152);
                qmemcpy(v169, "content_block", 13);
                v275 = 13;
                v291 = v169;
                v276 = (__int64)v169;
                v277 = 13;
                v303 = nullptr;
                v305 = nullptr;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1);
                v170 = 4;
                v171 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v171 )
                  goto LABEL_311;
                *v171 = 1701869940;
                v307 = 4;
                v308 = v171;
                v309 = 4;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v172 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                if ( !v172 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
                *v172 = 0x6573755F6C6F6F74LL;
                LOBYTE(v342) = 3;
                v343 = 8;
                v344 = (__int64)v172;
                v345 = 8;
                v173 = (__int64 *)&v324;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v303, &v307);
                if ( v324 == (__int64 *)0x8000000000000000LL )
                {
                  v174 = (char *)v325;
                  v175 = 32LL * (_QWORD)v327;
                  v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                  v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                  v176 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                  v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                  v331 = v176;
                  *(_QWORD *)((char *)v325 + v175 + 24) = v345;
                  *(_QWORD *)&v174[v175 + 16] = v344;
                  v177 = v342;
                  v178 = (__int64 **)v343;
                  *(_QWORD *)&v174[v175 + 8] = v343;
                  *(_QWORD *)&v174[v175] = v177;
                  if ( (_BYTE)v331 != 6 )
                  {
                    v173 = &v331;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                  }
                }
                else
                {
                  v341 = v330;
                  v340 = v329;
                  v339 = v328;
                  v338 = v327;
                  __n = v326;
                  __src = v325;
                  v335 = v324;
                  v323 = v345;
                  v322 = (__int64 (__fastcall *)())v344;
                  v321 = v343;
                  v320 = (__int64 *)v342;
                  v173 = &v331;
                  v178 = &v335;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v331,
                    &v335,
                    &v320);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v173, v178);
                v170 = 2;
                v179 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                if ( !v179 )
                  goto LABEL_311;
                *v179 = 25705;
                v307 = 2;
                v308 = v179;
                v309 = 2;
                v180 = *((_QWORD *)v306 - 2);
                if ( v180 < 0 )
                {
                  v183 = 0;
LABEL_294:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v183, v180);
                }
                v181 = *((const void **)v306 - 3);
                if ( v180 )
                {
                  v182 = *((const void **)v306 - 3);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, v181);
                  v183 = 1;
                  v184 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v180, 1);
                  if ( !v184 )
                    goto LABEL_294;
                  v185 = v184;
                  v181 = v182;
                  v81 = v284;
                }
                else
                {
                  v185 = 1;
                }
                memcpy((void *)v185, v181, v180);
                LOBYTE(v342) = 3;
                v343 = v180;
                v344 = v185;
                v345 = v180;
                v186 = (__int64 *)&v324;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v303, &v307);
                if ( v324 == (__int64 *)0x8000000000000000LL )
                {
                  v187 = (char *)v325;
                  v188 = 32LL * (_QWORD)v327;
                  v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                  v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                  v189 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                  v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                  v331 = v189;
                  *(_QWORD *)((char *)v325 + v188 + 24) = v345;
                  *(_QWORD *)&v187[v188 + 16] = v344;
                  v190 = v342;
                  v191 = (__int64 **)v343;
                  *(_QWORD *)&v187[v188 + 8] = v343;
                  *(_QWORD *)&v187[v188] = v190;
                  if ( (_BYTE)v331 != 6 )
                  {
                    v186 = &v331;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                  }
                }
                else
                {
                  v341 = v330;
                  v340 = v329;
                  v339 = v328;
                  v338 = v327;
                  __n = v326;
                  __src = v325;
                  v335 = v324;
                  v323 = v345;
                  v322 = (__int64 (__fastcall *)())v344;
                  v321 = v343;
                  v320 = (__int64 *)v342;
                  v186 = &v331;
                  v191 = &v335;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v331,
                    &v335,
                    &v320);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v186, v191);
                v170 = 4;
                v192 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                if ( !v192 )
                  goto LABEL_311;
                v193 = v81;
                *v192 = 1701667182;
                v307 = 4;
                v308 = v192;
                v309 = 4;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v194 = v285;
                v195 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v285, 1);
                if ( !v195 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v194);
                v196 = (__int64)v195;
                memcpy(v195, v296, v194);
                LOBYTE(v342) = 3;
                v343 = v194;
                v344 = v196;
                v345 = v194;
                v197 = (__int64 *)&v324;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v303, &v307);
                v81 = v193;
                if ( v324 == (__int64 *)0x8000000000000000LL )
                {
                  v198 = (char *)v325;
                  v199 = 32LL * (_QWORD)v327;
                  v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                  v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                  v200 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                  v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                  v331 = v200;
                  *(_QWORD *)((char *)v325 + v199 + 24) = v345;
                  *(_QWORD *)&v198[v199 + 16] = v344;
                  v201 = v342;
                  v202 = (__int64 **)v343;
                  *(_QWORD *)&v198[v199 + 8] = v343;
                  *(_QWORD *)&v198[v199] = v201;
                  if ( (_BYTE)v331 != 6 )
                  {
                    v197 = &v331;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                  }
                }
                else
                {
                  v341 = v330;
                  v340 = v329;
                  v339 = v328;
                  v338 = v327;
                  __n = v326;
                  __src = v325;
                  v335 = v324;
                  v323 = v345;
                  v322 = (__int64 (__fastcall *)())v344;
                  v321 = v343;
                  v320 = (__int64 *)v342;
                  v197 = &v331;
                  v202 = &v335;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v331,
                    &v335,
                    &v320);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v197, v202);
                v170 = 5;
                v203 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                if ( !v203 )
LABEL_311:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v170);
                *(_BYTE *)(v203 + 4) = 116;
                *(_DWORD *)v203 = 1970302569;
                v307 = 5;
                v308 = (_DWORD *)v203;
                v309 = 5;
                v343 = 0;
                v345 = 0;
                LOBYTE(v342) = 5;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v303, &v307);
                if ( v324 == (__int64 *)0x8000000000000000LL )
                {
                  v204 = (char *)v325;
                  v205 = 32LL * (_QWORD)v327;
                  v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                  v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                  v206 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                  v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                  v331 = v206;
                  *(_QWORD *)((char *)v325 + v205 + 24) = v345;
                  *(_QWORD *)&v204[v205 + 16] = v344;
                  v207 = v342;
                  *(_QWORD *)&v204[v205 + 8] = v343;
                  *(_QWORD *)&v204[v205] = v207;
                  if ( (_BYTE)v331 != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                }
                else
                {
                  v341 = v330;
                  v340 = v329;
                  v339 = v328;
                  v338 = v327;
                  __n = v326;
                  __src = v325;
                  v335 = v324;
                  v323 = v345;
                  v322 = (__int64 (__fastcall *)())v344;
                  v321 = v343;
                  v320 = (__int64 *)v342;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v331,
                    &v335,
                    &v320);
                }
                v317 = (size_t)v305;
                v316 = v304;
                v315 = (size_t)v303;
                LOBYTE(v314) = 5;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v293, &v275);
                if ( v324 == (__int64 *)0x8000000000000000LL )
                {
                  v208 = (char *)v325;
                  v209 = 32LL * (_QWORD)v327;
                  v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                  v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                  v210 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                  v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                  v331 = v210;
                  *(_QWORD *)((char *)v325 + v209 + 24) = v317;
                  *(_QWORD *)&v208[v209 + 16] = v316;
                  v211 = v314;
                  *(_QWORD *)&v208[v209 + 8] = v315;
                  *(_QWORD *)&v208[v209] = v211;
                  if ( (_BYTE)v331 != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                }
                else
                {
                  v341 = v330;
                  v340 = v329;
                  v339 = v328;
                  v338 = v327;
                  __n = v326;
                  __src = v325;
                  v335 = v324;
                  v323 = v317;
                  v322 = (__int64 (__fastcall *)())v316;
                  v321 = v315;
                  v320 = (__int64 *)v314;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v331,
                    &v335,
                    &v320);
                }
                v300 = v295;
                v299 = v294;
                v298 = v293;
                LOBYTE(v297) = 5;
                v331 = (__int64)"content_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop";
                v332 = (void *)19;
                v320 = &v297;
                v335 = &v331;
                __src = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                __n = (size_t)&v320;
                v338 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(&v324, &unk_1017C9F28, &v335);
                v213 = v325;
                v214 = v326;
                v215 = v313;
                if ( v326 > v311 - v313 )
                {
                  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                    &v311,
                    v313,
                    v326,
                    1,
                    1,
                    v212);
                  v215 = v313;
                  v81 = v193;
                }
                memcpy((void *)(v215 + v312), v213, v214);
                v313 = v214 + v215;
                v114 = v324;
                if ( v324 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v213, v324, 1);
                v116 = &v297;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v297);
                v120 = v306;
                v4 = (_DWORD *)v318;
              }
            }
            v319 |= *(v120 - 4) ^ 1;
            if ( !v319 )
            {
              v293 = nullptr;
              v295 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v116, v114);
              v216 = 4;
              v217 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v217 )
                goto LABEL_309;
              *v217 = 1701869940;
              v314 = 4;
              v315 = (size_t)v217;
              v316 = 4;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v218 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
              if ( !v218 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
              qmemcpy(v218, "content_block_delta", 19);
              LOBYTE(v342) = 3;
              v343 = 19;
              v344 = (__int64)v218;
              v345 = 19;
              v219 = (__int64 *)&v324;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v293, &v314);
              if ( __OFSUB__(0, v324) )
              {
                v220 = (char *)v325;
                v221 = 32LL * (_QWORD)v327;
                v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                v222 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                v331 = v222;
                *(_QWORD *)((char *)v325 + v221 + 24) = v345;
                *(_QWORD *)&v220[v221 + 16] = v344;
                v223 = v342;
                v224 = (__int64 **)v343;
                *(_QWORD *)&v220[v221 + 8] = v343;
                *(_QWORD *)&v220[v221] = v223;
                if ( (_BYTE)v331 != 6 )
                {
                  v219 = &v331;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                }
              }
              else
              {
                v341 = v330;
                v340 = v329;
                v339 = v328;
                v338 = v327;
                __n = v326;
                __src = v325;
                v335 = v324;
                v323 = v345;
                v322 = (__int64 (__fastcall *)())v344;
                v321 = v343;
                v320 = (__int64 *)v342;
                v219 = &v331;
                v224 = &v335;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v331,
                  &v335,
                  &v320);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v219, v224);
              v216 = 5;
              v225 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
              if ( !v225 )
                goto LABEL_309;
              *(_BYTE *)(v225 + 4) = 120;
              *(_DWORD *)v225 = 1701080681;
              v314 = 5;
              v315 = v225;
              v316 = 5;
              v226 = *((unsigned int *)v120 - 2);
              LOBYTE(v342) = 2;
              v343 = 0;
              v344 = v226;
              v227 = (__int64 *)&v324;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v293, &v314);
              if ( v324 == (__int64 *)0x8000000000000000LL )
              {
                v228 = (char *)v325;
                v229 = 32LL * (_QWORD)v327;
                v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                v230 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                v331 = v230;
                *(_QWORD *)((char *)v325 + v229 + 24) = v345;
                *(_QWORD *)&v228[v229 + 16] = v344;
                v231 = v342;
                v232 = (__int64 **)v343;
                *(_QWORD *)&v228[v229 + 8] = v343;
                *(_QWORD *)&v228[v229] = v231;
                if ( (_BYTE)v331 != 6 )
                {
                  v227 = &v331;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                }
              }
              else
              {
                v341 = v330;
                v340 = v329;
                v339 = v328;
                v338 = v327;
                __n = v326;
                __src = v325;
                v335 = v324;
                v323 = v345;
                v322 = (__int64 (__fastcall *)())v344;
                v321 = v343;
                v320 = (__int64 *)v342;
                v227 = &v331;
                v232 = &v335;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v331,
                  &v335,
                  &v320);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v227, v232);
              v233 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
              if ( !v233 )
LABEL_309:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v216);
              *(_BYTE *)(v233 + 4) = 97;
              *(_DWORD *)v233 = 1953260900;
              v275 = 5;
              v276 = v233;
              v277 = 5;
              v303 = nullptr;
              v305 = nullptr;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
              v234 = 4;
              v235 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v235 )
                goto LABEL_310;
              *v235 = 1701869940;
              v307 = 4;
              v308 = v235;
              v309 = 4;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v236 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
              if ( !v236 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
              qmemcpy(v236, "input_json_delta", 16);
              LOBYTE(v342) = 3;
              v343 = 16;
              v344 = (__int64)v236;
              v345 = 16;
              v237 = (__int64 *)&v324;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v303, &v307);
              if ( v324 == (__int64 *)0x8000000000000000LL )
              {
                v238 = (char *)v325;
                v239 = 32LL * (_QWORD)v327;
                v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                v240 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                v331 = v240;
                *(_QWORD *)((char *)v325 + v239 + 24) = v345;
                *(_QWORD *)&v238[v239 + 16] = v344;
                v241 = v342;
                v242 = (__int64 **)v343;
                *(_QWORD *)&v238[v239 + 8] = v343;
                *(_QWORD *)&v238[v239] = v241;
                if ( (_BYTE)v331 != 6 )
                {
                  v237 = &v331;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
                }
              }
              else
              {
                v341 = v330;
                v340 = v329;
                v339 = v328;
                v338 = v327;
                __n = v326;
                __src = v325;
                v335 = v324;
                v323 = v345;
                v322 = (__int64 (__fastcall *)())v344;
                v321 = v343;
                v320 = (__int64 *)v342;
                v237 = &v331;
                v242 = &v335;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v331,
                  &v335,
                  &v320);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v237, v242);
              v234 = 12;
              v243 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
              if ( !v243 )
LABEL_310:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v234);
              qmemcpy(v243, "partial_json", 12);
              v307 = 12;
              v308 = v243;
              v309 = 12;
              if ( (v302 & 0x8000000000000000LL) != 0LL )
              {
                v244 = 0;
LABEL_292:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v244, v302);
              }
              if ( v302 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1);
                v244 = 1;
                v245 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v302, 1);
                if ( !v245 )
                  goto LABEL_292;
                v246 = v245;
              }
              else
              {
                v246 = 1;
              }
              v247 = v302;
              memcpy((void *)v246, v292, v302);
              LOBYTE(v342) = 3;
              v343 = v247;
              v344 = v246;
              v345 = v247;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v303, &v307);
              if ( v324 == (__int64 *)0x8000000000000000LL )
              {
                v248 = (char *)v325;
                v249 = 32LL * (_QWORD)v327;
                v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                v250 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                v331 = v250;
                *(_QWORD *)((char *)v325 + v249 + 24) = v345;
                *(_QWORD *)&v248[v249 + 16] = v344;
                v251 = v342;
                *(_QWORD *)&v248[v249 + 8] = v343;
                *(_QWORD *)&v248[v249] = v251;
                if ( (_BYTE)v331 != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
              }
              else
              {
                v341 = v330;
                v340 = v329;
                v339 = v328;
                v338 = v327;
                __n = v326;
                __src = v325;
                v335 = v324;
                v323 = v345;
                v322 = (__int64 (__fastcall *)())v344;
                v321 = v343;
                v320 = (__int64 *)v342;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v331,
                  &v335,
                  &v320);
              }
              v317 = (size_t)v305;
              v316 = v304;
              v315 = (size_t)v303;
              LOBYTE(v314) = 5;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v324, &v293, &v275);
              if ( v324 == (__int64 *)0x8000000000000000LL )
              {
                v252 = (char *)v325;
                v253 = 32LL * (_QWORD)v327;
                v334 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 3);
                v333 = *((_QWORD *)v325 + 4 * (_QWORD)v327 + 2);
                v254 = *((_QWORD *)v325 + 4 * (_QWORD)v327);
                v332 = *((void **)v325 + 4 * (_QWORD)v327 + 1);
                v331 = v254;
                *(_QWORD *)((char *)v325 + v253 + 24) = v317;
                *(_QWORD *)&v252[v253 + 16] = v316;
                v255 = v314;
                *(_QWORD *)&v252[v253 + 8] = v315;
                *(_QWORD *)&v252[v253] = v255;
                if ( (_BYTE)v331 != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v331);
              }
              else
              {
                v341 = v330;
                v340 = v329;
                v339 = v328;
                v338 = v327;
                __n = v326;
                __src = v325;
                v335 = v324;
                v323 = v317;
                v322 = (__int64 (__fastcall *)())v316;
                v321 = v315;
                v320 = (__int64 *)v314;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v331,
                  &v335,
                  &v320);
              }
              v300 = v295;
              v299 = v294;
              v298 = v293;
              LOBYTE(v297) = 5;
              v331 = (__int64)"content_block_deltacontent_block_stopmessage_deltamessage_stop";
              v332 = (void *)19;
              v320 = &v297;
              v335 = &v331;
              __src = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
              __n = (size_t)&v320;
              v338 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v324, &unk_1017C9F28, &v335);
              v257 = v325;
              v258 = v326;
              v259 = v313;
              if ( v326 > v311 - v313 )
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                  &v311,
                  v313,
                  v326,
                  1,
                  1,
                  v256);
                v259 = v313;
              }
              memcpy((void *)(v259 + v312), v257, v258);
              v313 = v258 + v259;
              if ( v324 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v257, v324, 1);
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v297);
              v4 = (_DWORD *)v318;
            }
            if ( v285 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v296, v285, 1);
            if ( v290 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v301, v290, 1);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v286);
            v80 = v310;
            if ( v310 == v81 )
              goto LABEL_279;
          }
          LODWORD(v306) = 1;
          v89 = 1;
LABEL_119:
          v90 = nullptr;
          v94 = 1;
          goto LABEL_120;
        }
      }
    }
LABEL_279:
    v261 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "finish_reasonprompt_tokenscompletion_tokensid",
             13,
             v273);
    if ( v261 )
    {
      if ( *(_BYTE *)v261 == 3 )
      {
        v262 = *(_QWORD *)(v261 + 24);
        if ( v262 )
        {
          codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::emit_finish::h75b5ad39ebee2be7(
            &v335,
            (__int64)v4,
            *(_QWORD *)(v261 + 16),
            v262);
          v264 = __src;
          v265 = __n;
          v266 = v313;
          if ( __n > v311 - v313 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v311,
              v313,
              __n,
              1,
              1,
              v263);
            v266 = v313;
          }
          memcpy((void *)(v266 + v312), v264, v265);
          v313 = v265 + v266;
          if ( v335 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v264, v335, 1);
        }
      }
    }
    v267 = v282;
    v282[2] = v313;
    v268 = v311;
    v267[1] = v312;
    *v267 = v268;
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v278);
  }
  else
  {
    v15 = v282;
    v282[2] = v313;
    v16 = v311;
    v15[1] = v312;
    *v15 = v16;
  }
  return result;
}
