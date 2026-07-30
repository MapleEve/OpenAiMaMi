// __ZN13codexmate_lib4core5relay17anthropic_history18normalize_messages @ 0x1004ac900 | 1.2.4 NEW-delta
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::anthropic_history::normalize_messages::h4fbd978b9e9745d2(
        unsigned __int64 *a1,
        __int64 a2)
{
  __m128i *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // rax
  signed __int64 v18; // r13
  unsigned __int8 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  void *v23; // rax
  const void *v24; // rsi
  size_t v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // rax
  unsigned __int8 *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  void *v42; // rax
  const void *v43; // rsi
  size_t v44; // rbx
  __int64 i64; // rsi
  size_t v46; // rbx
  const void *v47; // rsi
  __int64 v48; // rbx
  __m128i *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __m128i si128; // xmm2
  __m128i v53; // xmm1
  _DWORD *v54; // rax
  unsigned __int64 v55; // rcx
  __int128 v56; // kr20_16
  __m128i v57; // xmm1
  __int64 v58; // rdi
  size_t v59; // rdx
  __int64 j; // r9
  unsigned __int64 v61; // rcx
  __m128i v62; // xmm2
  __int64 v64; // rax
  const void *v65; // rsi
  size_t v66; // rbx
  int v67; // eax
  const __m128i *v68; // rax
  __int64 v69; // rcx
  unsigned __int64 v70; // rdx
  char v73; // dl
  unsigned __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rdi
  __m128i *v78; // rbx
  __int64 v79; // rdi
  __m256i *v81; // rdi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // r14
  __int64 v87; // r15
  const __m128i *v89; // r12
  int v90; // r13d
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rbx
  __int64 v95; // r13
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  bool v100; // bl
  _BYTE *v101; // rax
  _QWORD *v102; // r12
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rsi
  __m128i v107; // kr40_16
  size_t v108; // r15
  __int64 v109; // rcx
  __int64 v110; // r14
  size_t v111; // rbx
  unsigned __int64 *v112; // rax
  unsigned __int64 v113; // r13
  __int64 v114; // r14
  __int64 v115; // rax
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // rcx
  __int64 v118; // rax
  __int8 v119; // cl
  _QWORD *v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rax
  __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rcx
  _BYTE *v131; // rax
  __int64 v132; // rcx
  _BYTE *v133; // rax
  __int64 v134; // r15
  __int64 v135; // rbx
  unsigned __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // r13
  _QWORD *v139; // rax
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rax
  __int64 v143; // r12
  __int64 v144; // r14
  unsigned __int64 v145; // r15
  __int64 v146; // rax
  unsigned __int64 v147; // r12
  __int64 v148; // r15
  __int64 v149; // r12
  __int64 v150; // rax
  int *v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // r14
  __int64 v155; // r15
  __int64 v156; // r14
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  _QWORD *v160; // rcx
  bool v161; // zf
  __int64 v162; // rax
  __int64 v163; // rcx
  __m128i *v164; // rsi
  __m128i v165; // rax
  _QWORD *v166; // r14
  __int64 v167; // r15
  __int64 v168; // rdx
  __m128i *v169; // rsi
  __m128i v170; // rax
  char v171; // r15
  size_t v172; // rax
  __int64 v173; // rcx
  __int64 v174; // r14
  __int64 v175; // rax
  __int64 v176; // rdx
  char v177; // r14
  unsigned __int64 v178; // rax
  __int64 v179; // r14
  __int64 v180; // r15
  __int64 v181; // rax
  _BYTE *v182; // rax
  __int64 v183; // rax
  __int64 v184; // r14
  __int64 v185; // rax
  __int64 v186; // rcx
  _QWORD *v187; // r14
  __int64 v188; // rsi
  _QWORD *v189; // r15
  _BYTE *v190; // rax
  __int64 v191; // rcx
  _QWORD *v192; // r14
  __int64 v193; // r15
  __int64 v194; // rbx
  __int64 v195; // rax
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rax
  __int64 v199; // rcx
  __int64 v200; // rax
  __int64 v201; // r14
  __int64 v202; // rax
  __int64 v203; // rbx
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // r13
  __int64 v207; // rax
  __int64 v208; // r9
  size_t v209; // r15
  const void *v210; // r12
  __int64 v211; // r14
  __int64 v212; // r13
  __m128i *v213; // rbx
  __int64 v214; // rdx
  __int64 v215; // rcx
  unsigned __int64 v216; // r14
  __int64 v217; // r15
  unsigned __int64 v218; // rdi
  __m128i *v219; // rdx
  __int64 result; // rax
  __int64 v221; // rdi
  __int64 v222; // rax
  __int64 v223; // rax
  __int64 v224; // rcx
  __m128i v225; // [rsp+0h] [rbp-340h] BYREF
  __m128i v226; // [rsp+10h] [rbp-330h] BYREF
  __m128i v227; // [rsp+20h] [rbp-320h]
  size_t v228; // [rsp+30h] [rbp-310h]
  __int64 v229; // [rsp+38h] [rbp-308h]
  __int64 v230; // [rsp+40h] [rbp-300h]
  __int64 v231; // [rsp+48h] [rbp-2F8h]
  unsigned __int64 v232; // [rsp+50h] [rbp-2F0h]
  __int128 v233; // [rsp+58h] [rbp-2E8h]
  __int64 v234; // [rsp+68h] [rbp-2D8h]
  __m256i v235; // [rsp+70h] [rbp-2D0h]
  __int64 i; // [rsp+90h] [rbp-2B0h] BYREF
  __int64 v237; // [rsp+98h] [rbp-2A8h]
  unsigned __int64 v238; // [rsp+A0h] [rbp-2A0h]
  __int64 v239; // [rsp+A8h] [rbp-298h]
  __m128i v240; // [rsp+B0h] [rbp-290h] BYREF
  size_t v241[2]; // [rsp+C0h] [rbp-280h]
  __m128i v242; // [rsp+D0h] [rbp-270h]
  __int64 v243; // [rsp+E0h] [rbp-260h]
  void *v244; // [rsp+E8h] [rbp-258h]
  __m128i v245; // [rsp+F8h] [rbp-248h] BYREF
  char *v246; // [rsp+108h] [rbp-238h]
  __m256i v247; // [rsp+110h] [rbp-230h] BYREF
  __int64 v248; // [rsp+130h] [rbp-210h]
  __int64 v249; // [rsp+138h] [rbp-208h]
  _OWORD v250[7]; // [rsp+140h] [rbp-200h] BYREF
  __int64 v251; // [rsp+1B0h] [rbp-190h] BYREF
  __m128i v252; // [rsp+1B8h] [rbp-188h]
  __int64 v253; // [rsp+1C8h] [rbp-178h]
  __m256i v254; // [rsp+1D0h] [rbp-170h] BYREF
  _QWORD v255[2]; // [rsp+1F0h] [rbp-150h] BYREF
  unsigned __int64 *v256; // [rsp+200h] [rbp-140h]
  __m128i *v257; // [rsp+208h] [rbp-138h]
  __m128i v258; // [rsp+210h] [rbp-130h] BYREF
  __m128i v259; // [rsp+220h] [rbp-120h]
  void *v260; // [rsp+230h] [rbp-110h]
  void *__s1; // [rsp+238h] [rbp-108h]
  __int64 v262; // [rsp+240h] [rbp-100h]
  __int64 v263; // [rsp+248h] [rbp-F8h]
  unsigned __int64 v264; // [rsp+250h] [rbp-F0h]
  __int64 v265; // [rsp+258h] [rbp-E8h]
  size_t v266; // [rsp+260h] [rbp-E0h]
  __int128 v267; // [rsp+268h] [rbp-D8h] BYREF
  __int64 v268; // [rsp+278h] [rbp-C8h]
  __m128i v269; // [rsp+280h] [rbp-C0h] BYREF
  __int64 v270; // [rsp+290h] [rbp-B0h]
  size_t v271; // [rsp+298h] [rbp-A8h]
  __m128i v272[7]; // [rsp+2A0h] [rbp-A0h] BYREF
  size_t __n; // [rsp+310h] [rbp-30h]

  v265 = a1[1];
  v256 = a1;
  v262 = a1[2];
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v5 = v2;
  if ( v2[1].i8[0] == 1 )
  {
    v6 = v2->i64[0];
    v7 = v5->i64[1];
  }
  else
  {
    v6 = ((__int64 (*)(void))std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45)();
    v5->i64[0] = v6;
    v5->i64[1] = v7;
    v5[1].i8[0] = 1;
  }
  v5->i64[0] = v6 + 1;
  memset(&v254.u32[2], 0, 24);
  v254.i64[0] = (__int64)&xmmword_101666400;
  v255[0] = v6;
  v255[1] = v7;
  v8 = v265;
  v263 = 32 * v262;
  v264 = v265 + 32 * v262;
  v257 = v5;
  if ( !v262 )
  {
LABEL_36:
    v27 = v5->i64[0];
    v28 = v5->i64[1];
    goto LABEL_37;
  }
  do
  {
    a2 = 7;
    v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
           &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
           7,
           v8);
    if ( v9 )
    {
      if ( *(_BYTE *)v9 == 4 )
      {
        v10 = *(_QWORD *)(v9 + 24);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v9 + 16);
          v12 = v11 + 32 * v10;
          do
          {
            a2 = 4;
            v13 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("type", 4, v11);
            if ( v13 && *(_BYTE *)v13 == 3 )
            {
              v14 = *(_QWORD **)(v13 + 16);
              v15 = *(_QWORD *)(v13 + 24);
              if ( v15 == 11 )
              {
                if ( *v14 ^ 0x7365725F6C6F6F74LL | *(_QWORD *)((char *)v14 + 3) ^ 0x746C757365725F6CLL )
                  goto LABEL_11;
                a2 = 11;
                v16 = &unk_10166D0E3;
LABEL_19:
                v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        v16,
                        a2,
                        v11);
                if ( v17 )
                {
                  if ( *(_BYTE *)v17 == 3 )
                  {
                    v18 = *(_QWORD *)(v17 + 24);
                    if ( v18 )
                    {
                      v19 = *(unsigned __int8 **)(v17 + 16);
                      v20 = 0;
                      while ( 1 )
                      {
                        v21 = v19[v20];
                        v22 = (unsigned int)(v21 - 48);
                        if ( (unsigned __int8)(v21 - 48) >= 0xAu )
                        {
                          v22 = v19[v20];
                          LOBYTE(v22) = (v21 & 0xDF) - 65;
                          if ( (unsigned __int8)v22 >= 0x1Au && (_DWORD)v21 != 95 && (_DWORD)v21 != 45 )
                            break;
                        }
                        if ( v18 == ++v20 )
                        {
                          if ( v18 < 0 )
                          {
                            v26 = 0;
                          }
                          else
                          {
                            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, a2, v22, v21);
                            v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v18, 1);
                            if ( v23 )
                            {
                              v24 = v19;
                              v25 = (size_t)v23;
                              memcpy(v23, v24, v18);
                              v272[0].i64[0] = v18;
                              v266 = v25;
                              v272[0].i64[1] = v25;
                              v272[1].i64[0] = v18;
                              a2 = (__int64)v272;
                              hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7686243132a986d1(&v254, v272);
                              v5 = v257;
                              goto LABEL_11;
                            }
                            v266 = v18;
                            v26 = 1;
                          }
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v266);
                        }
                      }
                      v5 = v257;
                    }
                  }
                }
                goto LABEL_11;
              }
              if ( v15 == 8 && *v14 == 0x6573755F6C6F6F74LL )
              {
                a2 = 2;
                v16 = &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_156;
                goto LABEL_19;
              }
            }
LABEL_11:
            v11 += 32;
          }
          while ( v11 != v12 );
        }
      }
    }
    v8 += 32;
  }
  while ( v8 != v264 );
  if ( v5[1].i8[0] == 1 )
    goto LABEL_36;
  v27 = ((__int64 (*)(void))std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45)();
  v5->i64[0] = v27;
  v5->i64[1] = v28;
  v5[1].i8[0] = 1;
LABEL_37:
  v5->i64[0] = v27 + 1;
  memset(&v247.u32[2], 0, 24);
  v29 = (__int64)&xmmword_101666400;
  v247.i64[0] = (__int64)&xmmword_101666400;
  v248 = v27;
  v249 = v28;
  if ( v262 )
  {
    v30 = v265;
    while ( 1 )
    {
      a2 = 7;
      v31 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
              &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
              7,
              v30,
              v29,
              v3,
              v4,
              v225.i64[0],
              v225.i64[1],
              v226.i64[0],
              v226.i64[1]);
      if ( v31 )
      {
        if ( *(_BYTE *)v31 == 4 )
        {
          v32 = *(_QWORD *)(v31 + 24);
          if ( v32 )
            break;
        }
      }
LABEL_39:
      v30 += 32;
      if ( v30 == v264 )
        goto LABEL_112;
    }
    v33 = *(_QWORD *)(v31 + 16);
    v34 = v33 + 32 * v32;
    while ( 2 )
    {
      a2 = 4;
      v35 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("type", 4, v33);
      if ( v35 && *(_BYTE *)v35 == 3 )
      {
        v29 = *(_QWORD *)(v35 + 16);
        v36 = *(_QWORD *)(v35 + 24);
        if ( v36 == 11 )
        {
          v29 = *(_QWORD *)v29 ^ 0x7365725F6C6F6F74LL | *(_QWORD *)(v29 + 3) ^ 0x746C757365725F6CLL;
          if ( !v29 )
          {
            a2 = 11;
            v37 = &unk_10166D0E3;
LABEL_53:
            v260 = v37;
            v266 = a2;
            v38 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(v37, a2, v33);
            if ( v38 )
            {
              if ( *(_BYTE *)v38 == 3 )
              {
                a2 = *(_QWORD *)(v38 + 24);
                if ( a2 )
                {
                  v39 = *(unsigned __int8 **)(v38 + 16);
                  v40 = 0;
                  while ( 1 )
                  {
                    v29 = v39[v40];
                    if ( (unsigned __int8)(v29 - 48) >= 0xAu )
                    {
                      v41 = v39[v40];
                      LOBYTE(v41) = (v29 & 0xDF) - 65;
                      if ( (unsigned __int8)v41 >= 0x1Au && (_DWORD)v29 != 95 && (_DWORD)v29 != 45 )
                        break;
                    }
                    if ( a2 == ++v40 )
                      goto LABEL_45;
                  }
                  if ( a2 < 0 )
                  {
                    v221 = 0;
                    goto LABEL_327;
                  }
                  __n = a2;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, a2, v41, v29);
                  v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
                  if ( !v42 )
                  {
                    v271 = __n;
                    v221 = 1;
LABEL_327:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v221, v271);
                  }
                  v43 = v39;
                  v271 = (size_t)v42;
                  v44 = __n;
                  memcpy(v42, v43, __n);
                  v269.i64[0] = v44;
                  v269.i64[1] = v271;
                  v270 = v44;
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v250, &v269);
                  hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h7f475775c87b6f86(
                    v272,
                    &v247,
                    v250);
                  i64 = v272[0].i64[1];
                  if ( v272[0].i64[0] != 0x8000000000000000LL )
                  {
                    v239 = v272[0].i64[1];
                    v253 = v272[0].i64[0];
                    v237 = v272[1].i64[1];
                    v229 = v272[1].i64[0];
                    v238 = v272[2].u64[0];
                    *((_QWORD *)&v250[1] + 1) = 0x5BE0CD191F83D9ABLL;
                    *(_QWORD *)&v250[1] = 0x9B05688C510E527FLL;
                    *((_QWORD *)&v250[0] + 1) = 0xA54FF53A3C6EF372LL;
                    *(_QWORD *)&v250[0] = 0xBB67AE856A09E667LL;
                    memset(&v250[2], 0, 73);
                    v46 = __n;
                    if ( __n >= 0x40 )
                    {
                      *(_QWORD *)&v250[2] = __n >> 6;
                      sha2::sha256::compress256::hc74ebc2fd6208bb9(v250, v271, __n >> 6);
                      v47 = (const void *)(v271 + (__n & 0x7FFFFFFFFFFFFFC0LL));
                      v46 = __n & 0x3F;
                    }
                    else
                    {
                      v47 = (const void *)v271;
                    }
                    memcpy((char *)&v250[2] + 8, v47, v46);
                    BYTE8(v250[6]) = v46;
                    qmemcpy(v272, v250, sizeof(v272));
                    v48 = v272[6].u8[8];
                    __s1 = (void *)_byteswap_uint64((v272[2].i64[0] << 9) | (8 * (unsigned int)v272[6].u8[8]));
                    v272[2].i8[v272[6].u8[8] + 8] = 0x80;
                    if ( (_DWORD)v48 == 63
                      || (__bzero((char *)&v272[2].u64[1] + v48 + 1, v48 ^ 0x3F), ((unsigned int)v48 ^ 0x38) <= 7) )
                    {
                      sha2::sha256::compress256::hc74ebc2fd6208bb9(v272, &v272[2].u64[1], 1);
                      v242 = 0;
                      *(_OWORD *)v241 = 0;
                      v240 = 0;
                      v243 = 0;
                      v244 = __s1;
                      v49 = &v240;
                      sha2::sha256::compress256::hc74ebc2fd6208bb9(v272, &v240, 1);
                    }
                    else
                    {
                      v272[6].i64[0] = (__int64)__s1;
                      v49 = (__m128i *)&v272[2].u64[1];
                      sha2::sha256::compress256::hc74ebc2fd6208bb9(v272, &v272[2].u64[1], 1);
                    }
                    si128 = _mm_load_si128((const __m128i *)&xmmword_10166CB10);
                    v53 = _mm_shuffle_epi8(_mm_load_si128(&v272[1]), si128);
                    v258 = _mm_shuffle_epi8(_mm_load_si128(v272), si128);
                    v259 = v53;
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v272, v49, v50, v51);
                    v54 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
                    if ( !v54 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39);
                    *(_QWORD *)&v267 = 39;
                    *((_QWORD *)&v267 + 1) = v54;
                    *(_DWORD *)((char *)v54 + 3) = 1600744801;
                    *v54 = 1634560353;
                    v268 = 7;
                    *(_QWORD *)&v250[0] = &v258;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)v258.i64 + 1;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)v258.i64 + 2;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)v258.i64 + 3;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)v258.i64 + 4;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)v258.i64 + 5;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)v258.i64 + 6;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)v258.i64 + 7;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = &v258.i64[1];
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)&v258.i64[1] + 1;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)&v258.i64[1] + 2;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)&v258.i64[1] + 3;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)&v258.i64[1] + 4;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272) )
                      goto LABEL_329;
                    *(_QWORD *)&v250[0] = (char *)&v258.i64[1] + 5;
                    v272[0].i64[0] = (__int64)v250;
                    v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574;
                    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                            &v267,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                            &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                            v272)
                      || (*(_QWORD *)&v250[0] = (char *)&v258.i64[1] + 6,
                          v272[0].i64[0] = (__int64)v250,
                          v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574,
                          (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                             &v267,
                                             &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                             &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                             v272))
                      || (*(_QWORD *)&v250[0] = (char *)&v258.i64[1] + 7,
                          v272[0].i64[0] = (__int64)v250,
                          v272[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h138f299636edb574,
                          (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(
                                             &v267,
                                             &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_146,
                                             &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_76,
                                             v272)) )
                    {
LABEL_329:
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        &unk_10166D0AD,
                        29,
                        &v240,
                        &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_670,
                        &off_101971D28);
                    }
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v240, &v267);
                    for ( i = 2; v254.i64[3]; v240 = (__m128i)v250[0] )
                    {
                      v55 = core::hash::BuildHasher::hash_one::hf03a628f6f42ad73(v255, &v240);
                      v56 = v254.i128[0];
                      v57 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v55 >> 57), (__m128i)0LL);
                      v58 = v254.i64[0] - 24;
                      __s1 = (void *)v240.i64[1];
                      v59 = v241[0];
                      for ( j = 0; ; j += 16 )
                      {
                        v61 = *((_QWORD *)&v56 + 1) & v55;
                        v62 = _mm_loadu_si128((const __m128i *)(v56 + v61));
                        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v62, v57));
                        if ( (_DWORD)_RAX )
                          break;
LABEL_96:
                        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v62, (__m128i)-1LL)) )
                          goto LABEL_101;
                        v55 = v61 + j + 16;
                      }
                      v232 = v61;
                      v233 = v56;
                      v225 = v57;
                      v234 = j;
                      v226 = v62;
                      while ( 1 )
                      {
                        v231 = _RAX;
                        __asm { tzcnt   eax, eax }
                        v64 = -3LL * (*((_QWORD *)&v56 + 1) & (v61 + _RAX));
                        if ( v59 == *(_QWORD *)(v58 + 8 * v64 + 16) )
                        {
                          v65 = *(const void **)(v58 + 8 * v64 + 8);
                          v230 = v58;
                          v66 = v59;
                          v67 = memcmp(__s1, v65, v59);
                          v59 = v66;
                          v58 = v230;
                          if ( !v67 )
                            break;
                        }
                        _RAX = (unsigned int)(v231 - 1);
                        LOWORD(_RAX) = v231 & (v231 - 1);
                        v61 = v232;
                        v57 = _mm_load_si128(&v225);
                        j = v234;
                        v62 = _mm_load_si128(&v226);
                        v56 = v233;
                        if ( !(_WORD)_RAX )
                          goto LABEL_96;
                      }
                      v272[0].i64[0] = (__int64)&v267;
                      v272[0].i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                      v272[1].i64[0] = (__int64)&i;
                      v272[1].i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(v250, &unk_1017C7407, v272);
                      if ( v240.i64[0] )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v240.i64[0], 1);
                      v241[0] = *(_QWORD *)&v250[1];
                      ++i;
                    }
LABEL_101:
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v272, &v240);
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7686243132a986d1(&v254, v272);
                    v227 = v240;
                    v228 = v241[0];
                    if ( (_QWORD)v267 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v267 + 1), v267, 1);
                    v68 = *(const __m128i **)v237;
                    v69 = *(_QWORD *)(v237 + 8);
                    v70 = v238 & v69;
                    _RSI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v237
                                                                                           + (v238 & v69))));
                    if ( !(_DWORD)_RSI )
                    {
                      v79 = 16;
                      do
                      {
                        v70 = v69 & (v79 + v70);
                        _RSI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v68 + v70)));
                        v79 += 16;
                      }
                      while ( !(_DWORD)_RSI );
                    }
                    __asm { tzcnt   esi, esi }
                    _RSI = v69 & (v70 + _RSI);
                    v73 = v68->i8[_RSI];
                    if ( v73 >= 0 )
                    {
                      _EDX = _mm_movemask_epi8(_mm_load_si128(v68));
                      __asm { tzcnt   esi, edx }
                      v73 = v68->i8[_RSI];
                    }
                    v74 = v238 >> 57;
                    v68->i8[_RSI] = v238 >> 57;
                    v68[1].i8[v69 & (_RSI - 16)] = v74;
                    v75 = v237;
                    *(_QWORD *)(v237 + 16) -= v73 & 1;
                    v76 = 0xFFFFFFFFFFFFFFDLL * _RSI;
                    v68[v76 - 3].i64[0] = v253;
                    *((_QWORD *)&v68[v76 - 2] - 1) = v239;
                    v68[v76 - 2].i64[0] = v229;
                    v77 = v227.i64[1];
                    *((_QWORD *)&v68[v76 - 1] - 1) = v227.i64[0];
                    v68[v76 - 1].i64[0] = v77;
                    v68[v76 - 1].i64[1] = v228;
                    ++*(_QWORD *)(v75 + 24);
                    i64 = (__int64)v68[-3 * _RSI].i64;
                  }
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                    &v251,
                    i64 - 24);
                  v272[1] = v252;
                  v272[0].i64[1] = v251;
                  v272[0].i8[0] = 3;
                  v78 = (__m128i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                     v260,
                                     v266);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v78);
                  v78[1] = v272[1];
                  *v78 = v272[0];
                  a2 = __n;
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v271, __n, 1);
                }
              }
            }
          }
        }
        else if ( v36 == 8 && *(_QWORD *)v29 == 0x6573755F6C6F6F74LL )
        {
          a2 = 2;
          v37 = &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_156;
          goto LABEL_53;
        }
      }
LABEL_45:
      v33 += 32;
      if ( v33 == v34 )
        goto LABEL_39;
      continue;
    }
  }
LABEL_112:
  v81 = &v247;
  HIDWORD(_RAX) = (unsigned __int64)_$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h949a58f7d0472c64(&v247) >> 32;
  v85 = v254.i64[1];
  if ( v254.i64[1] )
  {
    v86 = v254.i64[3];
    if ( v254.i64[3] )
    {
      v87 = v254.i64[0];
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v254.i64[0]));
      v89 = (const __m128i *)(v254.i64[0] + 16);
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v90 = _mm_movemask_epi8(_mm_load_si128(v89));
            v87 -= 384;
            ++v89;
          }
          while ( v90 == 0xFFFF );
          _R13D = ~v90;
        }
        __asm { tzcnt   eax, r13d }
        v91 = -3 * _RAX;
        a2 = *(_QWORD *)(v87 + 8 * v91 - 24);
        if ( a2 )
        {
          v81 = *(__m256i **)(v87 + 8 * v91 - 16);
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, a2, 1);
        }
        --v86;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v86 );
    }
    v92 = (24 * v85 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v93 = v92 + v85 + 17;
    if ( v93 )
    {
      v81 = (__m256i *)(v254.i64[0] - v92);
      a2 = v93;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v254.i64[0] - v92, v93, 16);
    }
  }
  v94 = v262;
  if ( v262 )
  {
    v95 = v265;
    do
    {
      v96 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
              "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
              4,
              v95);
      v100 = v96 && *(_BYTE *)v96 == 3 && *(_QWORD *)(v96 + 24) == 4 && **(_DWORD **)(v96 + 16) == 1919251317;
      a2 = 7;
      v81 = (__m256i *)&anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151;
      v101 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                        &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                        7,
                        v95,
                        v97,
                        v98,
                        v99,
                        v225.i64[0],
                        v225.i64[1],
                        v226.i64[0],
                        v226.i64[1]);
      if ( v101 )
      {
        v102 = v101;
        if ( *v101 == 4 )
        {
          v81 = (__m256i *)(v101 + 8);
          v266 = (size_t)(v101 + 8);
          alloc::vec::Vec$LT$T$C$A$GT$::retain::hf73eed8c6cfbde8a();
          if ( v100 )
          {
            v103 = v102[1];
            v104 = v102[2];
            v105 = v102[3];
            v102[1] = 0;
            v102[2] = 8;
            v102[3] = 0;
            *(_QWORD *)&v250[0] = v104;
            *(_QWORD *)&v250[1] = v103;
            *((_QWORD *)&v250[0] + 1) = v104;
            *((_QWORD *)&v250[1] + 1) = v104 + 32 * v105;
            core::iter::traits::iterator::Iterator::partition::hd126ad9602a821ac(v272, v250);
            v245 = v272[0];
            v106 = v272[1].i64[0];
            v246 = (char *)v272[1].i64[0];
            v107 = v272[2];
            v108 = 32 * v272[2].i64[1];
            v272[0].i64[0] = v272[2].i64[0];
            v272[1].i64[0] = v272[1].i64[1];
            v272[0].i64[1] = v272[2].i64[0];
            v272[1].i64[1] = v272[2].i64[0] + 32 * v272[2].i64[1];
            if ( v272[2].i64[1] > (unsigned __int64)(v245.i64[0] - (_QWORD)v246) )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(
                &v245,
                v106,
                v272[2].i64[1],
                8,
                32);
              v106 = (__int64)v246;
            }
            v260 = (void *)v106;
            memcpy((void *)(v245.i64[1] + 32 * v106), (const void *)v107.i64[0], v108);
            v246 = (char *)v260 + v107.i64[1];
            v272[1].i64[1] = v107.i64[0];
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he78e36ca37a8346e(v272);
            v81 = (__m256i *)v102[2];
            v110 = v102[3] + 1LL;
            while ( v110 != 1 )
            {
              v110 = v107.i64[1] - 1;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v81++, v107.i64[0], v83, v109);
            }
            v111 = v266;
            a2 = *(_QWORD *)v266;
            if ( *(_QWORD *)v266 )
            {
              v81 = (__m256i *)v102[2];
              a2 *= 32;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, a2, 8);
            }
            *(_QWORD *)(v111 + 16) = v246;
            v84 = v245.i64[1];
            *(__m128i *)v111 = v245;
          }
        }
      }
      v95 += 32;
      v94 = v262;
    }
    while ( v95 != v264 );
  }
  v112 = v256;
  v113 = *v256;
  *v256 = 0;
  v112[1] = 8;
  v112[2] = 0;
  v259.i64[0] = 0;
  v259.i64[1] = v94;
  v258.i64[0] = v113;
  v258.i64[1] = v265;
  if ( !v94 )
  {
    v269.i64[0] = 0;
    v269.i64[1] = 8;
    v270 = 0;
    goto LABEL_318;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v81, a2, v83, v84);
  v114 = v263;
  v115 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v263, 8);
  if ( !v115 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v114);
  v269.i64[0] = v94;
  v269.i64[1] = v115;
  v270 = 0;
  v264 = 0;
  v83 = v265;
  while ( 2 )
  {
    v116 = v264;
    v117 = 0;
    if ( v264 + 1 >= v113 )
      v117 = v113;
    a2 = v264 - v117 + 1;
    v264 = a2;
    v259.i64[0] = v116 - v117 + 1;
    v262 = v94 - 1;
    v259.i64[1] = v94 - 1;
    v118 = 32 * v116;
    v119 = *(_BYTE *)(v83 + v118);
    if ( v119 != 6 )
    {
      v120 = (_QWORD *)(v83 + v118);
      v254.i8[0] = v119;
      v254.i64[3] = v120[3];
      *(__int64 *)((char *)&v254.i64[2] + 1) = *(_QWORD *)((char *)v120 + 17);
      v121 = *(_QWORD *)((char *)v120 + 1);
      *(__int64 *)((char *)&v254.i64[1] + 1) = *(_QWORD *)((char *)v120 + 9);
      *(__int64 *)((char *)v254.i64 + 1) = v121;
      v122 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
               4,
               &v254);
      if ( !v122
        || *(_BYTE *)v122 != 3
        || *(_QWORD *)(v122 + 24) != 9
        || **(_QWORD **)(v122 + 16) ^ 0x6E61747369737361LL | *(unsigned __int8 *)(*(_QWORD *)(v122 + 16) + 8LL) ^ 0x74LL )
      {
        v251 = 0;
        v252 = (__m128i)8uLL;
        goto LABEL_155;
      }
      *(_QWORD *)&v250[0] = &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_156;
      *((_QWORD *)&v250[0] + 1) = 2;
      v131 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                        7,
                        &v254);
      if ( v131 )
      {
        v132 = (__int64)(v131 + 8);
        if ( *v131 != 4 )
          v132 = 0;
      }
      else
      {
        v132 = 0;
      }
      v272[0].i64[0] = 1;
      v272[0].i64[1] = v132;
      v272[1].i64[0] = 0;
      v272[2].i64[0] = 0;
      v272[3].i64[0] = (__int64)"tool_usemessagesid_tokenbackupIDfileSizelastTimekeyLabelcallbackis_finalattempts";
      v272[3].i64[1] = 8;
      v272[4].i64[0] = (__int64)v250;
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h5821c08730b98e93(
        &v251,
        v272);
      v134 = v94;
      v135 = v252.i64[1];
      if ( !v252.i64[1] )
      {
LABEL_155:
        v123 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
                 4,
                 &v254);
        if ( v123 )
        {
          if ( *(_BYTE *)v123 == 3 && *(_QWORD *)(v123 + 24) == 4 && **(_DWORD **)(v123 + 16) == 1919251317 )
          {
            v133 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                              &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                              7,
                              &v254,
                              v124,
                              v125,
                              v126,
                              v225.i64[0],
                              v225.i64[1],
                              v226.i64[0],
                              v226.i64[1]);
            if ( v133 )
            {
              if ( *v133 == 4 )
                alloc::vec::Vec$LT$T$C$A$GT$::retain::h408ae991dc3fd992(v133 + 8);
            }
          }
        }
        a2 = 7;
        v127 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                 7,
                 &v254);
        if ( v127 && *(_BYTE *)v127 == 4 && *(_QWORD *)(v127 + 24) )
        {
          v272[1] = (__m128i)v254.u128[1];
          v272[0] = *(__m128i *)v254.i8;
          v128 = v270;
          if ( v270 == v269.i64[0] )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v269);
          v129 = v269.i64[1];
          v130 = 32 * v128;
          *(__m128i *)(v269.i64[1] + v130 + 16) = v272[1];
          a2 = v272[0].i64[1];
          *(__m128i *)(v129 + v130) = v272[0];
          v270 = v128 + 1;
          if ( v251 )
          {
            a2 = 24 * v251;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v252.i64[0], 24 * v251, 8);
          }
          goto LABEL_146;
        }
        if ( v251 )
        {
          a2 = 24 * v251;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v252.i64[0], 24 * v251, 8);
        }
LABEL_145:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v254);
        goto LABEL_146;
      }
      __n = v113;
      if ( !v262 )
        goto LABEL_184;
      v136 = 0;
      if ( v264 >= v113 )
        v136 = v113;
      v137 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
               4,
               v265 + 32 * (v264 - v136));
      if ( !v137 || *(_BYTE *)v137 != 3 || *(_QWORD *)(v137 + 24) != 4 || **(_DWORD **)(v137 + 16) != 1919251317 )
      {
LABEL_184:
        v247.i8[0] = 6;
        goto LABEL_185;
      }
      v178 = 0;
      if ( v264 + 1 >= v113 )
        v178 = v113;
      v179 = v264 - v178 + 1;
      v259.i64[0] = v179;
      v180 = v134 - 2;
      v259.i64[1] = v180;
      v181 = *(_QWORD *)(v265 + 32 * v264 + 8);
      v247.i64[0] = *(_QWORD *)(v265 + 32 * v264);
      v247.i64[1] = v181;
      v247.i128[1] = *(_OWORD *)(v265 + 32 * v264 + 16);
      v271 = v247.i64[0];
      if ( v247.i8[0] == 6 )
      {
        v262 = v180;
        v264 = v179;
LABEL_185:
        *(_QWORD *)&v267 = 0;
        *((_QWORD *)&v267 + 1) = 8;
        v268 = 0;
        v263 = 8;
        v271 = 6;
        v138 = 0;
      }
      else
      {
        v240.i64[0] = (__int64)&unk_10166D0E3;
        v240.i64[1] = 11;
        v190 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                          &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                          7,
                          &v247);
        if ( v190 )
        {
          v191 = (__int64)(v190 + 8);
          if ( *v190 != 4 )
            v191 = 0;
        }
        else
        {
          v191 = 0;
        }
        v272[0].i64[0] = 1;
        v272[0].i64[1] = v191;
        v272[1].i64[0] = 0;
        v272[2].i64[0] = 0;
        v272[3].i64[0] = (__int64)&unk_10166D0D8;
        v272[3].i64[1] = 11;
        v272[4].i64[0] = (__int64)&v240;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h5821c08730b98e93(
          v250,
          v272);
        v263 = *((_QWORD *)&v250[0] + 1);
        v267 = v250[0];
        v138 = *(_QWORD *)&v250[1];
        v268 = *(_QWORD *)&v250[1];
        v262 = v180;
        v264 = v179;
      }
      v260 = (void *)v252.i64[0];
      v139 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                         7,
                         &v254);
      if ( v139 && *(_BYTE *)v139 == 4 )
      {
        __s1 = v139;
        v142 = v139[3];
        if ( v142 )
        {
          v143 = *((_QWORD *)__s1 + 2);
          v266 = -32 * v142;
          v144 = 0;
          v145 = 0;
          while ( 1 )
          {
            v146 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "type",
                     4,
                     v143);
            if ( v146 )
            {
              if ( *(_BYTE *)v146 == 3
                && *(_QWORD *)(v146 + 24) == 8
                && **(_QWORD **)(v146 + 16) == 0x6573755F6C6F6F74LL )
              {
                break;
              }
            }
            v143 += 32;
            ++v145;
            v144 -= 32;
            if ( v266 == v144 )
              goto LABEL_203;
          }
          v147 = *((_QWORD *)__s1 + 3);
          if ( v145 > v147 )
            core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(
              v145,
              *((_QWORD *)__s1 + 3),
              *((_QWORD *)__s1 + 3),
              &off_101971D70);
          v148 = *((_QWORD *)__s1 + 2) - v144;
          v149 = -32LL * v147;
          while ( v144 != v149 )
          {
            v150 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "type",
                     4,
                     v148);
            if ( v150 )
            {
              if ( *(_BYTE *)v150 == 3 && *(_QWORD *)(v150 + 24) == 8 )
              {
                v148 += 32;
                v149 += 32;
                if ( **(_QWORD **)(v150 + 16) == 0x6573755F6C6F6F74LL )
                  continue;
              }
            }
            goto LABEL_260;
          }
        }
LABEL_203:
        v151 = (int *)&anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151;
        v152 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                 7,
                 &v254);
        if ( v152 )
        {
          if ( *(_BYTE *)v152 == 4 )
          {
            v154 = *(_QWORD *)(v152 + 24);
            if ( v154 )
            {
              v155 = *(_QWORD *)(v152 + 16);
              v156 = 32 * v154;
              do
              {
                v151 = &anon_7245a3145add9b93f83b0a9aa358a664_79;
                v157 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         &anon_7245a3145add9b93f83b0a9aa358a664_79,
                         4,
                         v155);
                if ( v157 )
                {
                  if ( *(_BYTE *)v157 == 3
                    && *(_QWORD *)(v157 + 24) == 8
                    && **(_QWORD **)(v157 + 16) == anon_7245a3145add9b93f83b0a9aa358a664_881 )
                  {
                    v158 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                             "namereasoning_contentreasoningcontentsummaryreasoning_detailspartsplutilraw-",
                             4,
                             v155);
                    if ( !v158 )
                      goto LABEL_260;
                    if ( *(_BYTE *)v158 != 3 )
                      goto LABEL_260;
                    v151 = *(int **)(v158 + 16);
                    core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(v151, *(_QWORD *)(v158 + 24));
                    if ( !v153 )
                      goto LABEL_260;
                  }
                }
                v155 += 32;
                v156 -= 32;
              }
              while ( v156 );
            }
          }
        }
        v159 = 24 * v135;
        v160 = v260;
        while ( v159 )
        {
          v159 -= 24;
          v161 = v160[2] == 0;
          v160 += 3;
          if ( v161 )
            goto LABEL_260;
        }
        v162 = 24 * v138;
        v163 = v263;
        while ( v162 )
        {
          v162 -= 24;
          v161 = *(_QWORD *)(v163 + 16) == 0;
          v163 += 24;
          if ( v161 )
            goto LABEL_260;
        }
        v164 = v257;
        if ( v257[1].i8[0] == 1 )
        {
          v165 = *v257;
        }
        else
        {
          v165.i64[0] = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v151, v257, v153, v163);
          v164 = v257;
          *v257 = v165;
          v164[1].i8[0] = 1;
        }
        v164->i64[0] = v165.i64[0] + 1;
        v272[1] = 0u;
        v272[0].i64[1] = 0;
        v272[0].i64[0] = (__int64)&xmmword_101666400;
        v272[2] = v165;
        hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(v272, v135, &v272[2], 1);
        v166 = (char *)v260 + 16;
        v167 = v135;
        do
        {
          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h85b41af0a3639d0c(v272, *(v166 - 1), *v166);
          v166 += 3;
          --v167;
        }
        while ( v167 );
        v242 = v272[2];
        *(__m128i *)v241 = v272[1];
        v240 = v272[0];
        v169 = v257;
        if ( v257[1].i8[0] == 1 )
        {
          v170 = *v257;
        }
        else
        {
          v170.i64[0] = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v272, v257, v168, v272[0].i64[1]);
          v169 = v257;
          *v257 = v170;
          v169[1].i8[0] = 1;
        }
        v169->i64[0] = v170.i64[0] + 1;
        v272[1] = 0u;
        v272[0].i64[1] = 0;
        v272[0].i64[0] = (__int64)&xmmword_101666400;
        v272[2] = v170;
        if ( v138 )
        {
          hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(v272, v138, &v272[2], 1);
          v192 = (_QWORD *)(v263 + 16);
          v193 = v138;
          do
          {
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h85b41af0a3639d0c(v272, *(v192 - 1), *v192);
            v192 += 3;
            --v193;
          }
          while ( v193 );
        }
        v250[2] = v272[2];
        v250[1] = v272[1];
        v250[0] = v272[0];
        if ( v241[1] == v135 && v272[1].i64[1] == v138 )
        {
          v171 = _$LT$std..collections..hash..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf18a1c4c5eaab1f4(
                   &v240,
                   v250);
          if ( *((_QWORD *)&v250[0] + 1) && 17LL * *((_QWORD *)&v250[0] + 1) != -33 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
              *(_QWORD *)&v250[0] - 16LL * *((_QWORD *)&v250[0] + 1) - 16,
              17LL * *((_QWORD *)&v250[0] + 1) + 33,
              16);
          if ( v240.i64[1] && 17 * v240.i64[1] != -33 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v240.i64[0] - 16 * v240.i64[1] - 16, 17 * v240.i64[1] + 33, 16);
          v172 = v247.u8[0];
          if ( v171 )
          {
            if ( v247.i8[0] != 6 )
            {
              v235 = v247;
              v272[1] = (__m128i)v254.u128[1];
              v272[0] = *(__m128i *)v254.i8;
              v173 = v269.i64[0];
              v174 = v270;
              v113 = __n;
              if ( v270 == v269.i64[0] )
              {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v269);
                v173 = v269.i64[0];
              }
              v175 = v269.i64[1];
              v176 = 32 * v174;
              *(__m128i *)(v269.i64[1] + v176 + 16) = v272[1];
              *(__m128i *)(v175 + v176) = v272[0];
              v270 = v174 + 1;
              if ( v174 + 1 == v173 )
              {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v269);
                v175 = v269.i64[1];
              }
              *(__m256i *)(v175 + 32 * (v174 + 1)) = v235;
              v270 = v174 + 2;
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h76a5fc128caa840b(&v267);
              if ( (_QWORD)v267 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v263, 24 * v267, 8);
              v177 = 0;
LABEL_280:
              v189 = (char *)v260 + 8;
              do
              {
                a2 = *(v189 - 1);
                if ( a2 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v189, a2, 1);
                v189 += 3;
                --v135;
              }
              while ( v135 );
              if ( v251 )
              {
                a2 = 24 * v251;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v260, 24 * v251, 8);
              }
              if ( !v177 )
              {
LABEL_146:
                v94 = v262;
                v83 = v265;
                if ( !v262 )
                  break;
                continue;
              }
              goto LABEL_145;
            }
LABEL_271:
            if ( v138 )
            {
              v187 = (_QWORD *)(v263 + 8);
              do
              {
                v188 = *(v187 - 1);
                if ( v188 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v187, v188, 1);
                v187 += 3;
                --v138;
              }
              while ( v138 );
            }
            if ( (_QWORD)v267 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v263, 24 * v267, 8);
            v177 = 1;
            v113 = __n;
            if ( v247.i8[0] != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v247);
            goto LABEL_280;
          }
        }
        else
        {
          if ( *((_QWORD *)&v250[0] + 1) && 17LL * *((_QWORD *)&v250[0] + 1) != -33 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
              *(_QWORD *)&v250[0] - 16LL * *((_QWORD *)&v250[0] + 1) - 16,
              17LL * *((_QWORD *)&v250[0] + 1) + 33,
              16);
          if ( v240.i64[1] && 17 * v240.i64[1] != -33 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v240.i64[0] - 16 * v240.i64[1] - 16, 17 * v240.i64[1] + 33, 16);
          v172 = v247.u8[0];
        }
        v271 = v172;
      }
LABEL_260:
      v247.i8[0] = 6;
      if ( (_BYTE)v271 != 6 )
      {
        LOBYTE(v250[0]) = v271;
        *((_QWORD *)&v250[1] + 1) = v247.i64[3];
        *(_QWORD *)((char *)&v250[1] + 1) = *(__int64 *)((char *)&v247.i64[2] + 1);
        *(_OWORD *)((char *)v250 + 1) = *(__int128 *)((char *)v247.i128 + 1);
        v182 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                          &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                          7,
                          v250,
                          *(__int64 *)((char *)&v247.i64[1] + 1),
                          v140,
                          v141,
                          v225.i64[0],
                          v225.i64[1],
                          v226.i64[0],
                          v226.i64[1]);
        if ( v182 && *v182 == 4 )
          alloc::vec::Vec$LT$T$C$A$GT$::retain::h408ae991dc3fd992(v182 + 8);
        v183 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                 7,
                 v250);
        if ( v183 && *(_BYTE *)v183 == 4 && *(_QWORD *)(v183 + 24) )
        {
          v272[1] = (__m128i)v250[1];
          v272[0] = (__m128i)v250[0];
          v184 = v270;
          if ( v270 == v269.i64[0] )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v269);
          v185 = v269.i64[1];
          v186 = 32 * v184;
          *(__m128i *)(v269.i64[1] + v186 + 16) = v272[1];
          *(__m128i *)(v185 + v186) = v272[0];
          v270 = v184 + 1;
        }
        else
        {
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v250);
        }
      }
      goto LABEL_271;
    }
    break;
  }
  if ( v270 )
  {
    v194 = v269.i64[1] + 32 * v270 - 32;
    a2 = 4;
    v195 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
             4,
             v194);
    if ( v195 )
    {
      if ( *(_BYTE *)v195 == 3 && *(_QWORD *)(v195 + 24) == 9 )
      {
        v198 = *(_QWORD *)(v195 + 16);
        v199 = *(_QWORD *)v198 ^ 0x6E61747369737361LL;
        if ( !(v199 | *(unsigned __int8 *)(v198 + 8) ^ 0x74LL) )
        {
          a2 = 7;
          v200 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                   &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                   7,
                   v194,
                   v199,
                   v196,
                   v197,
                   v225.i64[0],
                   v225.i64[1],
                   v226.i64[0],
                   v226.i64[1]);
          v201 = v200;
          if ( v200 )
          {
            if ( *(_BYTE *)v200 == 4 )
            {
              v202 = *(_QWORD *)(v200 + 24);
              if ( v202 )
              {
                v203 = *(_QWORD *)(v201 + 16) + 32 * v202 - 32;
                a2 = 4;
                v204 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                         "type",
                         4,
                         v203);
                if ( v204 )
                {
                  if ( *(_BYTE *)v204 == 3 && *(_QWORD *)(v204 + 24) == 4 && **(_DWORD **)(v204 + 16) == 1954047348 )
                  {
                    a2 = 4;
                    v205 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                             "text",
                             4,
                             v203);
                    if ( v205 )
                    {
                      if ( *(_BYTE *)v205 == 3 )
                      {
                        __n = v113;
                        v206 = *(_QWORD *)(v205 + 24);
                        a2 = v206;
                        v207 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc564756bdfb3aee4(
                                 *(_QWORD *)(v205 + 16),
                                 v206);
                        if ( v83 )
                        {
                          v209 = v83;
                          v161 = v83 == v206;
                          v113 = __n;
                          if ( !v161 )
                          {
                            v210 = (const void *)v207;
                            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h4a305b5c5d6c5cb5(
                              v272,
                              v83,
                              0,
                              1,
                              1,
                              v208,
                              v225.i64[0],
                              v225.i64[1],
                              v226.i64[0],
                              v226.i64[1]);
                            v211 = v272[0].i64[1];
                            if ( v272[0].i32[0] == 1 )
                              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v272[0].i64[1], v272[1].i64[0]);
                            v212 = v272[1].i64[0];
                            memcpy((void *)v272[1].i64[0], v210, v209);
                            v272[0].i64[1] = v211;
                            v272[1].i64[0] = v212;
                            v272[1].i64[1] = v209;
                            v272[0].i8[0] = 3;
                            a2 = 4;
                            v213 = (__m128i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                                                "text",
                                                4u);
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v213);
                            v213[1] = v272[1];
                            *v213 = v272[0];
                            v113 = __n;
                          }
                        }
                        else
                        {
                          v222 = *(_QWORD *)(v201 + 24);
                          v113 = __n;
                          if ( v222 )
                          {
                            v223 = v222 - 1;
                            *(_QWORD *)(v201 + 24) = v223;
                            v224 = *(_QWORD *)(v201 + 16);
                            v223 *= 32;
                            v272[1] = *(__m128i *)(v224 + v223 + 16);
                            v83 = *(_QWORD *)(v224 + v223);
                            v272[0].i64[1] = *(_QWORD *)(v224 + v223 + 8);
                            v272[0].i64[0] = v83;
                            if ( (_BYTE)v83 != 6 )
                              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v272);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_318:
  alloc::vec::Vec$LT$T$C$A$GT$::retain::h93943b5c441ceb02(&v269, a2, v83);
  v272[1].i64[0] = v270;
  v215 = v269.i64[1];
  v272[0] = v269;
  v216 = v256[1];
  v217 = v256[2] + 1;
  v218 = v216;
  while ( v217 != 1 )
  {
    --v217;
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v218, a2, v214, v215);
    v218 += 32LL;
  }
  if ( *v256 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v216, 32 * *v256, 8);
  v219 = (__m128i *)v256;
  v256[2] = v272[1].u64[0];
  *v219 = v272[0];
  result = _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc9d3454a4509cff1(&v258);
  if ( v113 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v265, 32 * v113, 8);
  return result;
}
