// __ZN13codexmate_lib4core5relay10translator6stream23AnthropicToOpenAiStream12handle_event @ 0x100aa2770 | 基线 same-set
// [FULL IDA decompiler]

__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::handle_event::h97d224acc2bdbdf3(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  size_t v19; // rdx
  __int64 v20; // r9
  __int128 v21; // kr10_16
  __int64 v22; // rdi
  __int64 v23; // r12
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  size_t v32; // r12
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  void *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // r12
  __int64 v47; // rcx
  double v48; // xmm0_8
  __int64 v49; // rax
  size_t v50; // r12
  __int64 v51; // r13
  __int64 v52; // r15
  __int64 v53; // rax
  size_t v54; // r12
  void *v55; // r13
  __int64 v56; // r15
  __int64 v57; // rdi
  void *v58; // rsi
  __int64 v59; // r12
  _WORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _DWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // r15
  __int64 v67; // rax
  __int64 v68; // rax
  void *v69; // rax
  __int64 v70; // r13
  __int64 v71; // rax
  _WORD *v72; // rax
  _DWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // r15
  _DWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r12
  void *v80; // rax
  __int64 v81; // r9
  void *v82; // r12
  size_t v83; // r13
  __int64 v84; // r15
  void *v85; // r15
  __int64 v86; // r14
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 v89; // r13
  unsigned __int64 v90; // rax
  __int64 v92; // rdi
  __int64 v93; // rcx
  __m128i v94; // xmm0
  __int64 v95; // rdx
  __int64 v96; // rsi
  unsigned __int64 v97; // rax
  __m128i v98; // xmm2
  unsigned __int64 v100; // r8
  __m128i v101; // xmm0
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // r12
  _WORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  _DWORD *v109; // rax
  __int64 v110; // r14
  __int64 v111; // rax
  __int64 v112; // rax
  void *v113; // rax
  __int64 v114; // rax
  __int64 v115; // r14
  __int64 v116; // r15
  __int64 v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  void *v121; // rax
  char *v122; // rdx
  __int64 v123; // r9
  __int64 v124; // r14
  void *v125; // r15
  size_t v126; // r12
  __int64 v127; // r13
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // r12
  _WORD *v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  _DWORD *v135; // rax
  __int64 v136; // rax
  __int64 v137; // r15
  __int64 v138; // r13
  __int64 v139; // rax
  __int64 v140; // rax
  _DWORD *v141; // rax
  void *v142; // rax
  __int64 v143; // r9
  __int64 v144; // r14
  void *v145; // r15
  size_t v146; // r12
  __int64 v147; // r13
  __int64 result; // rax
  _QWORD v149[3]; // [rsp+80h] [rbp-250h] BYREF
  _QWORD v150[3]; // [rsp+98h] [rbp-238h] BYREF
  _QWORD v151[2]; // [rsp+B0h] [rbp-220h] BYREF
  _QWORD v152[2]; // [rsp+C0h] [rbp-210h] BYREF
  _QWORD v153[6]; // [rsp+D0h] [rbp-200h] BYREF
  __int64 v154; // [rsp+100h] [rbp-1D0h] BYREF
  __int64 v155; // [rsp+108h] [rbp-1C8h]
  __int64 v156; // [rsp+110h] [rbp-1C0h]
  __int64 v157; // [rsp+118h] [rbp-1B8h] BYREF
  _DWORD *v158; // [rsp+120h] [rbp-1B0h]
  __int64 v159; // [rsp+128h] [rbp-1A8h]
  __int64 v160; // [rsp+130h] [rbp-1A0h]
  __int64 v161; // [rsp+138h] [rbp-198h]
  __int64 v162; // [rsp+140h] [rbp-190h]
  __int64 v163; // [rsp+148h] [rbp-188h] BYREF
  _QWORD *v164; // [rsp+150h] [rbp-180h]
  __int64 v165; // [rsp+158h] [rbp-178h]
  __int64 v166; // [rsp+160h] [rbp-170h] BYREF
  _DWORD *v167; // [rsp+168h] [rbp-168h]
  __int64 v168; // [rsp+170h] [rbp-160h]
  __int64 v169; // [rsp+178h] [rbp-158h] BYREF
  __int128 v170; // [rsp+180h] [rbp-150h]
  __int64 v171; // [rsp+190h] [rbp-140h]
  __int128 v172; // [rsp+198h] [rbp-138h] BYREF
  __int128 v173; // [rsp+1A8h] [rbp-128h]
  __int128 v174; // [rsp+1B8h] [rbp-118h] BYREF
  __int64 v175; // [rsp+1C8h] [rbp-108h]
  _BYTE *v176; // [rsp+1D0h] [rbp-100h]
  __int128 v177; // [rsp+1D8h] [rbp-F8h] BYREF
  __int64 v178; // [rsp+1E8h] [rbp-E8h]
  __int128 v179; // [rsp+1F0h] [rbp-E0h] BYREF
  __int64 v180; // [rsp+200h] [rbp-D0h]
  void *v181; // [rsp+208h] [rbp-C8h]
  __int128 v182; // [rsp+210h] [rbp-C0h] BYREF
  __int64 v183; // [rsp+220h] [rbp-B0h]
  __int64 v184; // [rsp+228h] [rbp-A8h] BYREF
  __int64 v185; // [rsp+230h] [rbp-A0h]
  __int64 v186; // [rsp+238h] [rbp-98h]
  void *v187; // [rsp+240h] [rbp-90h]
  __int64 i; // [rsp+248h] [rbp-88h]
  __int64 v189; // [rsp+250h] [rbp-80h] BYREF
  __int64 (__fastcall *v190)(_QWORD, _QWORD); // [rsp+258h] [rbp-78h]
  __int64 v191; // [rsp+260h] [rbp-70h]
  __int64 v192; // [rsp+268h] [rbp-68h] BYREF
  void *v193; // [rsp+270h] [rbp-60h]
  __int128 v194; // [rsp+278h] [rbp-58h]
  __m512i v195; // [rsp+288h] [rbp-48h] BYREF

  v184 = 0;
  v185 = 1;
  v186 = 0;
  v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
         "typefullargsopenwithkindsavetrueuuidemitshowhide",
         4,
         a3);
  if ( v6 && *(_BYTE *)v6 == 3 )
  {
    v8 = *(_QWORD *)(v6 + 24) - 12LL;
    v9 = *(_QWORD *)(v6 + 16);
    switch ( v8 )
    {
      case 0LL:
        if ( !(*(_QWORD *)v9 ^ 0x5F6567617373656DLL | *(unsigned int *)(v9 + 8) ^ 0x706F7473LL) && !*(_BYTE *)(a2 + 101) )
        {
          *(_BYTE *)(a2 + 101) = 1;
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v184,
            0,
            14,
            1,
            1,
            v7);
          v10 = v185;
          v11 = v186;
          *(_QWORD *)(v185 + v186 + 6) = 0xA0A5D454E4F445BLL;
          *(_QWORD *)(v10 + v11) = 0x445B203A61746164LL;
          v186 = v11 + 14;
        }
        break;
      case 1LL:
        if ( *(_QWORD *)v9 ^ 0x5F6567617373656DLL | *(_QWORD *)(v9 + 5) ^ 0x74726174735F6567LL )
        {
          if ( !(*(_QWORD *)v9 ^ 0x5F6567617373656DLL | *(_QWORD *)(v9 + 5) ^ 0x61746C65645F6567LL) )
          {
            v16 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "deltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
                    5,
                    a3);
            if ( v16 )
            {
              v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "stop_reason",
                      11,
                      v16);
              if ( v17 )
              {
                if ( *(_BYTE *)v17 == 3 && *(_QWORD *)(v17 + 24) )
                {
                  v18 = (void *)codexmate_lib::core::relay::translator::stream::map_anthropic_stop_to_openai::h82fcdef1cbb1ee95(*(_QWORD *)(v17 + 16));
                  codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::final_chunk::ha5572247707e26bb(
                    &v195,
                    a2,
                    v18,
                    v19);
                  v21 = *(__int128 *)((char *)v195.i128 + 8);
                  if ( v195.i64[2] )
                  {
                    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                      &v184,
                      0,
                      v195.i64[2],
                      1,
                      1,
                      v20);
                    v22 = v185;
                    v23 = v186;
                  }
                  else
                  {
                    v22 = 1;
                    v23 = 0;
                  }
                  memcpy((void *)(v23 + v22), (const void *)v21, *((size_t *)&v21 + 1));
                  v186 = *((_QWORD *)&v21 + 1) + v23;
                  if ( v195.i64[0] )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v195.i64[0], 1);
                }
              }
            }
          }
        }
        else
        {
          v30 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  "messageassistantresponse.output_item.doneresponse.function_call_arguments.done",
                  7,
                  a3);
          if ( v30 )
          {
            v31 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "modelusagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
                    5,
                    v30);
            if ( v31 )
            {
              if ( *(_BYTE *)v31 == 3 )
              {
                v32 = *(_QWORD *)(v31 + 24);
                if ( v32 )
                {
                  v181 = *(void **)(v31 + 16);
                  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v195, v32, 0, 1, 1);
                  i = v195.i64[1];
                  if ( v195.i32[0] == 1 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(i, v195.i64[2]);
                  v33 = v195.i64[2];
                  memcpy((void *)v195.i64[2], v181, v32);
                  v34 = *(_QWORD *)a2;
                  if ( *(_QWORD *)a2 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 8), v34, 1);
                  *(_QWORD *)a2 = i;
                  *(_QWORD *)(a2 + 8) = v33;
                  *(_QWORD *)(a2 + 16) = v32;
                }
              }
            }
          }
          v35 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  "messageassistantresponse.output_item.doneresponse.function_call_arguments.done",
                  7,
                  a3);
          if ( v35 )
          {
            v36 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("id", 2, v35);
            if ( v36 )
            {
              if ( *(_BYTE *)v36 == 3 )
              {
                v37 = *(_QWORD *)(v36 + 16);
                v38 = *(void **)(v36 + 24);
                v192 = v37;
                v193 = v38;
                v195.i64[0] = (__int64)&v192;
                v195.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v150, &unk_1017C9F13, &v195);
                v39 = *(_QWORD *)(a2 + 24);
                if ( v39 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 32), v39, 1);
                *(_QWORD *)(a2 + 40) = v150[2];
                v40 = v150[0];
                *(_QWORD *)(a2 + 32) = v150[1];
                *(_QWORD *)(a2 + 24) = v40;
              }
            }
          }
          codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::ensure_role::hf90773975f12cc1d(
            a2,
            &v184);
        }
        break;
      case 6LL:
        v12 = _mm_or_si128(
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v9 + 16)), (__m128i)xmmword_1015FFBA0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v9), (__m128i)xmmword_10167B950));
        if ( _mm_testz_si128(v12, v12) )
        {
          v13 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  &unk_10167CD26,
                  5,
                  a3);
          if ( v13 && *(_BYTE *)v13 == 2 && !*(_QWORD *)(v13 + 8) )
            v14 = *(_QWORD *)(v13 + 16);
          else
            v14 = 0;
          v192 = v14;
          v15 = core::hash::BuildHasher::hash_one::haed72534fb8ce28b(a2 + 80, &v192);
          hashbrown::raw::RawTable$LT$T$C$A$GT$::remove_entry::h2f3a3a9744e25fa4(&v195, a2 + 48, v15, &v192);
        }
        break;
      case 7LL:
        v24 = _mm_or_si128(
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v9), (__m128i)xmmword_10167B950),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v9 + 3)), (__m128i)xmmword_10167B960));
        if ( _mm_testz_si128(v24, v24) )
        {
          v41 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  &unk_10167CD26,
                  5,
                  a3);
          if ( v41 && *(_BYTE *)v41 == 2 && !*(_QWORD *)(v41 + 8) )
            i = *(_QWORD *)(v41 + 16);
          else
            i = 0;
          v42 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  "content_blockstop_sequencemax_tokenscontent_filterlengthresponse.in_progress",
                  13,
                  a3);
          if ( v42 )
          {
            switch ( *(_BYTE *)v42 )
            {
              case 0:
                v195.i8[0] = 0;
                break;
              case 1:
              case 2:
                v195.i128[1] = *(_OWORD *)(v42 + 16);
                v43 = *(_QWORD *)v42;
                v195.i64[1] = *(_QWORD *)(v42 + 8);
                v195.i64[0] = v43;
                break;
              case 3:
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  &v195.u32[2],
                  v42 + 8);
                v195.i8[0] = 3;
                break;
              case 4:
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                  &v195.u32[2],
                  v42 + 8);
                v195.i8[0] = 4;
                break;
              case 5:
                _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
                  &v195.u32[2],
                  v42 + 8);
                v195.i8[0] = 5;
                break;
            }
            v173 = v195.i128[1];
            v172 = v195.i128[0];
            v195.i8[0] = 0;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
          }
          else
          {
            v195.i8[0] = 0;
            v173 = v195.i128[1];
            v172 = v195.i128[0];
          }
          v44 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  "typefullargsopenwithkindsavetrueuuidemitshowhide",
                  4,
                  &v172);
          v45 = 1;
          if ( v44 && *(_BYTE *)v44 == 3 )
          {
            v45 = *(_QWORD *)(v44 + 16);
            v46 = *(_QWORD *)(v44 + 24);
          }
          else
          {
            v46 = 0;
          }
          v48 = codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::ensure_role::hf90773975f12cc1d(
                  a2,
                  &v184);
          if ( v46 == 8 )
          {
            if ( *(_QWORD *)v45 == 0x6573755F6C6F6F74LL )
            {
              v181 = (void *)*(unsigned int *)(a2 + 96);
              *(_DWORD *)(a2 + 96) = (_DWORD)v181 + 1;
              v49 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "id",
                      2,
                      &v172);
              if ( v49 && *(_BYTE *)v49 == 3 )
              {
                v187 = *(void **)(v49 + 16);
                v50 = *(_QWORD *)(v49 + 24);
              }
              else
              {
                v187 = (void *)1;
                v50 = 0;
              }
              alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v195, v50, 0, 1, 1);
              v51 = v195.i64[1];
              if ( v195.i32[0] == 1 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v195.i64[1], v195.i64[2]);
              v52 = v195.i64[2];
              memcpy((void *)v195.i64[2], v187, v50);
              v171 = v51;
              v149[0] = v51;
              v161 = v52;
              v149[1] = v52;
              v149[2] = v50;
              v53 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &unk_1015FB9C8,
                      4,
                      &v172);
              if ( v53 && *(_BYTE *)v53 == 3 )
              {
                v187 = *(void **)(v53 + 16);
                v54 = *(_QWORD *)(v53 + 24);
              }
              else
              {
                v187 = (void *)1;
                v54 = 0;
              }
              alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v195, v54, 0, 1, 1);
              v55 = (void *)v195.i64[1];
              if ( v195.i32[0] == 1 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v195.i64[1], v195.i64[2]);
              v56 = v195.i64[2];
              v57 = v195.i64[2];
              v58 = v187;
              memcpy((void *)v195.i64[2], v187, v54);
              v153[0] = v55;
              v162 = v56;
              v153[1] = v56;
              v153[2] = v54;
              *(_QWORD *)&v174 = 0;
              v175 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v57, v58);
              v59 = 2;
              v60 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              v187 = v55;
              if ( !v60 )
                goto LABEL_275;
              *v60 = 25705;
              v189 = 2;
              v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v60;
              v191 = 2;
              serde_json::value::to_value::hf4a5c51664f5d8d6(&v195, a2 + 24);
              if ( v195.i8[0] == 6 )
              {
                v192 = v195.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  &unk_10167E63D,
                  43,
                  &v192,
                  &off_101974C58,
                  &off_1019743F0);
              }
              v194 = v195.i128[1];
              v193 = (void *)v195.i64[1];
              v192 = v195.i64[0];
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v195,
                &v174,
                &v189,
                &v192);
              if ( v195.i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v174);
              v59 = 6;
              v61 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
              if ( !v61 )
                goto LABEL_275;
              *(_WORD *)(v61 + 4) = 29795;
              *(_DWORD *)v61 = 1701470831;
              v189 = 6;
              v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v61;
              v191 = 6;
              serde_json::value::to_value::h29e3c39dc75a9151(&v195, &off_1019743B0);
              if ( v195.i8[0] == 6 )
              {
                v192 = v195.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  &unk_10167E63D,
                  43,
                  &v192,
                  &off_101974C58,
                  &off_1019743F0);
              }
              v194 = v195.i128[1];
              v193 = (void *)v195.i64[1];
              v192 = v195.i64[0];
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v195,
                &v174,
                &v189,
                &v192);
              if ( v195.i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v174);
              v59 = 5;
              v62 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
              if ( !v62 )
                goto LABEL_275;
              *(_BYTE *)(v62 + 4) = 108;
              *(_DWORD *)v62 = 1701080941;
              v189 = 5;
              v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v62;
              v191 = 5;
              serde_json::value::to_value::hf4a5c51664f5d8d6(&v195, a2);
              if ( v195.i8[0] == 6 )
              {
                v192 = v195.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  &unk_10167E63D,
                  43,
                  &v192,
                  &off_101974C58,
                  &off_1019743F0);
              }
              v194 = v195.i128[1];
              v193 = (void *)v195.i64[1];
              v192 = v195.i64[0];
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v195,
                &v174,
                &v189,
                &v192);
              if ( v195.i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v174);
              v59 = 7;
              v63 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
              if ( !v63 )
LABEL_275:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v59);
              *(_DWORD *)((char *)v63 + 3) = 1936024425;
              *v63 = 1768908899;
              v157 = 7;
              v153[3] = v63;
              v158 = v63;
              v159 = 7;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
              v64 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
              if ( !v64 )
                alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
              v65 = v64;
              v169 = 0;
              *((_QWORD *)&v170 + 1) = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
              v66 = 5;
              v67 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
              v160 = v65;
              if ( !v67 )
                goto LABEL_277;
              *(_BYTE *)(v67 + 4) = 120;
              *(_DWORD *)v67 = 1701080681;
              v189 = 5;
              v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v67;
              v191 = 5;
              v195.i8[0] = 2;
              *(__int128 *)((char *)v195.i128 + 8) = 0u;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v192,
                &v169,
                &v189,
                &v195);
              if ( (_BYTE)v192 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v192, &v169);
              v68 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
              if ( !v68 )
                goto LABEL_277;
              *(_BYTE *)(v68 + 4) = 97;
              *(_DWORD *)v68 = 1953260900;
              v154 = 5;
              v153[5] = v68;
              v155 = v68;
              v156 = 5;
              *(_QWORD *)&v179 = 0;
              v180 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
              v69 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
              if ( !v69 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10);
              qmemcpy(v69, "tool_calls", 10);
              v166 = 10;
              v153[4] = v69;
              v167 = v69;
              v168 = 10;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(10, 1);
              v176 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
              if ( !v176 )
                alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
              *(_QWORD *)&v182 = 0;
              v183 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
              v70 = 5;
              v71 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
              if ( !v71 )
                goto LABEL_276;
              *(_BYTE *)(v71 + 4) = 120;
              *(_DWORD *)v71 = 1701080681;
              v189 = 5;
              v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v71;
              v191 = 5;
              v195.i8[0] = 2;
              v195.i64[1] = 0;
              v195.i64[2] = (__int64)v181;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v192,
                &v182,
                &v189,
                &v195);
              if ( (_BYTE)v192 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v192, &v182);
              v70 = 2;
              v72 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              if ( !v72 )
                goto LABEL_276;
              *v72 = 25705;
              v189 = 2;
              v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v72;
              v191 = 2;
              serde_json::value::to_value::hf4a5c51664f5d8d6(&v195, v149);
              if ( v195.i8[0] == 6 )
              {
                v192 = v195.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  &unk_10167E63D,
                  43,
                  &v192,
                  &off_101974C58,
                  &off_1019743F0);
              }
              v194 = v195.i128[1];
              v193 = (void *)v195.i64[1];
              v192 = v195.i64[0];
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v195,
                &v182,
                &v189,
                &v192);
              if ( v195.i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v182);
              v70 = 4;
              v73 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v73 )
                goto LABEL_276;
              *v73 = 1701869940;
              v189 = 4;
              v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v73;
              v191 = 4;
              serde_json::value::to_value::h29e3c39dc75a9151(&v195, &off_101974408);
              if ( v195.i8[0] == 6 )
              {
                v192 = v195.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  &unk_10167E63D,
                  43,
                  &v192,
                  &off_101974C58,
                  &off_1019743F0);
              }
              v194 = v195.i128[1];
              v193 = (void *)v195.i64[1];
              v192 = v195.i64[0];
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v195,
                &v182,
                &v189,
                &v192);
              if ( v195.i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v182);
              v70 = 8;
              v74 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
              if ( !v74 )
LABEL_276:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v70);
              *v74 = 0x6E6F6974636E7566LL;
              v163 = 8;
              v164 = v74;
              v165 = 8;
              *(_QWORD *)&v177 = 0;
              v178 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
              v75 = 4;
              v76 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v76 )
                goto LABEL_278;
              *v76 = 1701667182;
              v189 = 4;
              v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v76;
              v191 = 4;
              serde_json::value::to_value::hf4a5c51664f5d8d6(&v195, v153);
              if ( v195.i8[0] == 6 )
              {
                v192 = v195.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  &unk_10167E63D,
                  43,
                  &v192,
                  &off_101974C58,
                  &off_1019743F0);
              }
              v194 = v195.i128[1];
              v193 = (void *)v195.i64[1];
              v192 = v195.i64[0];
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v195,
                &v177,
                &v189,
                &v192);
              if ( v195.i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v177);
              v75 = 9;
              v77 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
              if ( !v77 )
LABEL_278:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v75);
              *(_QWORD *)v77 = 0x746E656D75677261LL;
              *(_BYTE *)(v77 + 8) = 115;
              v189 = 9;
              v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v77;
              v191 = 9;
              serde_json::value::to_value::h29e3c39dc75a9151(&v195, &xmmword_1016792E0);
              if ( v195.i8[0] == 6 )
              {
                v192 = v195.i64[1];
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  &unk_10167E63D,
                  43,
                  &v192,
                  &off_101974C58,
                  &off_1019743F0);
              }
              v194 = v195.i128[1];
              v193 = (void *)v195.i64[1];
              v192 = v195.i64[0];
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v195,
                &v177,
                &v189,
                &v192);
              if ( v195.i8[0] != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
              *(__int128 *)((char *)v195.i128 + 8) = v177;
              v195.i64[3] = v178;
              v195.i8[0] = 5;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v192,
                &v182,
                &v163,
                &v195);
              if ( (_BYTE)v192 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
              *(__int128 *)((char *)v195.i128 + 7) = v182;
              *(__int64 *)((char *)&v195.i64[2] + 7) = v183;
              v78 = (__int64)v176;
              *v176 = 5;
              *(_QWORD *)(v78 + 24) = *(__int64 *)((char *)&v195.i64[2] + 7);
              *(_QWORD *)(v78 + 17) = v195.i64[2];
              *(_OWORD *)(v78 + 1) = v195.i128[0];
              v195.i64[1] = 1;
              v195.i64[2] = v78;
              v195.i64[3] = 1;
              v195.i8[0] = 4;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v192,
                &v179,
                &v166,
                &v195);
              if ( (_BYTE)v192 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
              *(__int128 *)((char *)v195.i128 + 8) = v179;
              v195.i64[3] = v180;
              v195.i8[0] = 5;
              v79 = v160;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v192,
                &v169,
                &v154,
                &v195);
              if ( (_BYTE)v192 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v192, &v169);
              v66 = 13;
              v80 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
              if ( !v80 )
LABEL_277:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v66);
              qmemcpy(v80, "finish_reason", 13);
              v189 = 13;
              v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v80;
              v191 = 13;
              v195.i8[0] = 0;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v192,
                &v169,
                &v189,
                &v195);
              if ( (_BYTE)v192 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
              *(__int64 *)((char *)v195.i64 + 7) = v169;
              *(__int128 *)((char *)v195.i128 + 15) = v170;
              *(_BYTE *)v79 = 5;
              *(_QWORD *)(v79 + 24) = *(__int64 *)((char *)&v195.i64[2] + 7);
              *(_QWORD *)(v79 + 17) = v195.i64[2];
              *(_OWORD *)(v79 + 1) = v195.i128[0];
              v195.i64[1] = 1;
              v195.i64[2] = v79;
              v195.i64[3] = 1;
              v195.i8[0] = 4;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                &v192,
                &v174,
                &v157,
                &v195);
              if ( (_BYTE)v192 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
              *(__int128 *)((char *)v195.i128 + 8) = v174;
              v195.i64[3] = v175;
              v195.i8[0] = 5;
              v189 = (__int64)&v195;
              v190 = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v192, &unk_1017C9F07, &v189);
              v176 = (_BYTE *)v192;
              v82 = v193;
              v83 = v194;
              v84 = v186;
              if ( (unsigned __int64)v194 > v184 - v186 )
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                  &v184,
                  v186,
                  v194,
                  1,
                  1,
                  v81);
                v84 = v186;
              }
              memcpy((void *)(v84 + v185), v82, v83);
              v186 = v83 + v84;
              if ( v176 )
                v48 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v176, 1);
              v85 = v187;
              hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6c468ca96a4e4019(a2 + 48, i, 1, v181, v48);
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
              v86 = v171;
              if ( v85 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v85, 1);
              if ( v86 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v161, v86, 1);
            }
          }
          else if ( v46 == 4 && *(_DWORD *)v45 == 1954047348 )
          {
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6c468ca96a4e4019(a2 + 48, i, 0, v47, v48);
          }
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v172);
        }
        else
        {
          v25 = _mm_or_si128(
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v9), (__m128i)xmmword_1016749E0),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v9 + 3)), (__m128i)xmmword_1016749D0));
          if ( _mm_testz_si128(v25, v25) )
          {
            v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &unk_10167CD26,
                    5,
                    a3);
            if ( v26 && *(_BYTE *)v26 == 2 && !*(_QWORD *)(v26 + 8) )
              v27 = *(_QWORD *)(v26 + 16);
            else
              v27 = 0;
            v153[0] = v27;
            v28 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "deltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
                    5,
                    a3);
            if ( v28 )
            {
              switch ( *(_BYTE *)v28 )
              {
                case 0:
                  v195.i8[0] = 0;
                  break;
                case 1:
                case 2:
                  v195.i128[1] = *(_OWORD *)(v28 + 16);
                  v29 = *(_QWORD *)v28;
                  v195.i64[1] = *(_QWORD *)(v28 + 8);
                  v195.i64[0] = v29;
                  break;
                case 3:
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                    &v195.u32[2],
                    v28 + 8);
                  v195.i8[0] = 3;
                  break;
                case 4:
                  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                    &v195.u32[2],
                    v28 + 8);
                  v195.i8[0] = 4;
                  break;
                case 5:
                  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
                    &v195.u32[2],
                    v28 + 8);
                  v195.i8[0] = 5;
                  break;
              }
              v173 = v195.i128[1];
              v172 = v195.i128[0];
              v195.i8[0] = 0;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
            }
            else
            {
              v195.i8[0] = 0;
              v173 = v195.i128[1];
              v172 = v195.i128[0];
            }
            v87 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "typefullargsopenwithkindsavetrueuuidemitshowhide",
                    4,
                    &v172);
            v88 = 1;
            if ( v87 && *(_BYTE *)v87 == 3 )
            {
              v88 = *(_QWORD *)(v87 + 16);
              v89 = *(_QWORD *)(v87 + 24);
            }
            else
            {
              v89 = 0;
            }
            codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::ensure_role::hf90773975f12cc1d(
              a2,
              &v184);
            if ( *(_QWORD *)(a2 + 72) )
            {
              v90 = core::hash::BuildHasher::hash_one::haed72534fb8ce28b(a2 + 80, v153);
              v92 = *(_QWORD *)(a2 + 48);
              v93 = *(_QWORD *)(a2 + 56);
              v94 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v90 >> 57), (__m128i)0LL);
              v95 = v92 - 16;
              v96 = 0;
              for ( i = *(_QWORD *)(a2 + 48); ; v92 = i )
              {
                v97 = v93 & v90;
                v98 = _mm_loadu_si128((const __m128i *)(v92 + v97));
                _EDI = _mm_movemask_epi8(_mm_cmpeq_epi8(v98, v94));
                if ( _EDI )
                  break;
LABEL_157:
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v98, (__m128i)-1LL)) )
                  goto LABEL_249;
                v90 = v97 + v96 + 16;
                v96 += 16;
              }
              while ( 1 )
              {
                __asm { tzcnt   r8d, edi }
                v100 = v93 & (v97 + _R8);
                if ( v27 == *(_QWORD *)(v95 - 16 * v100) )
                  break;
                _R8 = (unsigned int)(_EDI - 1);
                LOWORD(_R8) = _EDI & (_EDI - 1);
                _EDI = _R8;
                if ( !(_WORD)_R8 )
                  goto LABEL_157;
              }
              i += -16LL * v100;
              if ( v89 == 10 )
              {
                if ( !(*(_QWORD *)v88 ^ 0x6C65645F74786574LL | *(unsigned __int16 *)(v88 + 8) ^ 0x6174LL)
                  && !*(_BYTE *)(i - 8) )
                {
                  v128 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                           "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                           4,
                           &v172);
                  if ( v128 )
                  {
                    if ( *(_BYTE *)v128 == 3 )
                    {
                      v129 = *(_QWORD *)(v128 + 16);
                      v130 = *(_QWORD *)(v128 + 24);
                      v152[0] = v129;
                      v152[1] = v130;
                      if ( v130 )
                      {
                        *(_QWORD *)&v179 = 0;
                        v180 = 0;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                          "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                          4);
                        v131 = 2;
                        v132 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                        if ( !v132 )
                          goto LABEL_281;
                        *v132 = 25705;
                        v189 = 2;
                        v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v132;
                        v191 = 2;
                        serde_json::value::to_value::hf4a5c51664f5d8d6(&v195, a2 + 24);
                        if ( v195.i8[0] == 6 )
                        {
                          v192 = v195.i64[1];
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            &unk_10167E63D,
                            43,
                            &v192,
                            &off_101974C58,
                            &off_1019743D8);
                        }
                        v194 = v195.i128[1];
                        v193 = (void *)v195.i64[1];
                        v192 = v195.i64[0];
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          &v195,
                          &v179,
                          &v189,
                          &v192);
                        if ( v195.i8[0] != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v179);
                        v131 = 6;
                        v133 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                        if ( !v133 )
                          goto LABEL_281;
                        *(_WORD *)(v133 + 4) = 29795;
                        *(_DWORD *)v133 = 1701470831;
                        v189 = 6;
                        v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v133;
                        v191 = 6;
                        serde_json::value::to_value::h29e3c39dc75a9151(&v195, &off_1019743B0);
                        if ( v195.i8[0] == 6 )
                        {
                          v192 = v195.i64[1];
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            &unk_10167E63D,
                            43,
                            &v192,
                            &off_101974C58,
                            &off_1019743D8);
                        }
                        v194 = v195.i128[1];
                        v193 = (void *)v195.i64[1];
                        v192 = v195.i64[0];
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          &v195,
                          &v179,
                          &v189,
                          &v192);
                        if ( v195.i8[0] != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v179);
                        v131 = 5;
                        v134 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                        if ( !v134 )
                          goto LABEL_281;
                        *(_BYTE *)(v134 + 4) = 108;
                        *(_DWORD *)v134 = 1701080941;
                        v189 = 5;
                        v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v134;
                        v191 = 5;
                        serde_json::value::to_value::hf4a5c51664f5d8d6(&v195, a2);
                        if ( v195.i8[0] == 6 )
                        {
                          v192 = v195.i64[1];
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            &unk_10167E63D,
                            43,
                            &v192,
                            &off_101974C58,
                            &off_1019743D8);
                        }
                        v194 = v195.i128[1];
                        v193 = (void *)v195.i64[1];
                        v192 = v195.i64[0];
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          &v195,
                          &v179,
                          &v189,
                          &v192);
                        if ( v195.i8[0] != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v179);
                        v131 = 7;
                        v135 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                        if ( !v135 )
LABEL_281:
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v131);
                        *(_DWORD *)((char *)v135 + 3) = 1936024425;
                        *v135 = 1768908899;
                        v166 = 7;
                        v167 = v135;
                        v168 = 7;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
                        v136 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                        if ( !v136 )
                          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                        v137 = v136;
                        *(_QWORD *)&v182 = 0;
                        v183 = 0;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
                        v138 = 5;
                        v139 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                        if ( !v139 )
                          goto LABEL_282;
                        *(_BYTE *)(v139 + 4) = 120;
                        *(_DWORD *)v139 = 1701080681;
                        v189 = 5;
                        v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v139;
                        v191 = 5;
                        v195.i8[0] = 2;
                        *(__int128 *)((char *)v195.i128 + 8) = 0u;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          &v192,
                          &v182,
                          &v189,
                          &v195);
                        if ( (_BYTE)v192 != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v192, &v182);
                        v140 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                        if ( !v140 )
                          goto LABEL_282;
                        *(_BYTE *)(v140 + 4) = 97;
                        *(_DWORD *)v140 = 1953260900;
                        v163 = 5;
                        v164 = (_QWORD *)v140;
                        v165 = 5;
                        *(_QWORD *)&v177 = 0;
                        v178 = 0;
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
                        v141 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                        if ( !v141 )
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
                        *(_DWORD *)((char *)v141 + 3) = 1953391988;
                        *v141 = 1953394531;
                        v189 = 7;
                        v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v141;
                        v191 = 7;
                        serde_json::value::to_value::h29e3c39dc75a9151(&v195, v152);
                        if ( v195.i8[0] == 6 )
                        {
                          v192 = v195.i64[1];
                          core::result::unwrap_failed::h855bccc0ecc45c4f(
                            &unk_10167E63D,
                            43,
                            &v192,
                            &off_101974C58,
                            &off_1019743D8);
                        }
                        v194 = v195.i128[1];
                        v193 = (void *)v195.i64[1];
                        v192 = v195.i64[0];
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          &v195,
                          &v177,
                          &v189,
                          &v192);
                        if ( v195.i8[0] != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
                        *(__int128 *)((char *)v195.i128 + 8) = v177;
                        v195.i64[3] = v178;
                        v195.i8[0] = 5;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          &v192,
                          &v182,
                          &v163,
                          &v195);
                        if ( (_BYTE)v192 != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v192, &v182);
                        v138 = 13;
                        v142 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
                        if ( !v142 )
LABEL_282:
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v138);
                        qmemcpy(v142, "finish_reason", 13);
                        v189 = 13;
                        v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v142;
                        v191 = 13;
                        v195.i8[0] = 0;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          &v192,
                          &v182,
                          &v189,
                          &v195);
                        if ( (_BYTE)v192 != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                        *(__int128 *)((char *)v195.i128 + 7) = v182;
                        *(__int64 *)((char *)&v195.i64[2] + 7) = v183;
                        *(_BYTE *)v137 = 5;
                        *(_QWORD *)(v137 + 24) = *(__int64 *)((char *)&v195.i64[2] + 7);
                        *(_QWORD *)(v137 + 17) = v195.i64[2];
                        *(_OWORD *)(v137 + 1) = v195.i128[0];
                        v195.i64[1] = 1;
                        v195.i64[2] = v137;
                        v195.i64[3] = 1;
                        v195.i8[0] = 4;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                          &v192,
                          &v179,
                          &v166,
                          &v195);
                        if ( (_BYTE)v192 != 6 )
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                        *(__int128 *)((char *)v195.i128 + 8) = v179;
                        v195.i64[3] = v180;
                        v195.i8[0] = 5;
                        v189 = (__int64)&v195;
                        v190 = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce;
                        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v192, &unk_1017C9F07, &v189);
                        v144 = v192;
                        v145 = v193;
                        v146 = v194;
                        v147 = v186;
                        if ( (unsigned __int64)v194 > v184 - v186 )
                        {
                          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                            &v184,
                            v186,
                            v194,
                            1,
                            1,
                            v143);
                          v147 = v186;
                        }
                        memcpy((void *)(v147 + v185), v145, v146);
                        v186 = v146 + v147;
                        if ( v144 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v144, 1);
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
                      }
                    }
                  }
                }
              }
              else if ( v89 == 16 )
              {
                v101 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v88), (__m128i)xmmword_10167B970);
                if ( _mm_testz_si128(v101, v101) )
                {
                  if ( *(_DWORD *)(i - 8) == 1 )
                  {
                    v102 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                             "partial_jsoncontent_blockstop_sequencemax_tokenscontent_filterlengthresponse.in_progress",
                             12,
                             &v172);
                    if ( v102 )
                    {
                      if ( *(_BYTE *)v102 == 3 )
                      {
                        v103 = *(_QWORD *)(v102 + 16);
                        v104 = *(_QWORD *)(v102 + 24);
                        v151[0] = v103;
                        v151[1] = v104;
                        if ( v104 )
                        {
                          *(_QWORD *)&v174 = 0;
                          v175 = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                            "partial_jsoncontent_blockstop_sequencemax_tokenscontent_filterlengthresponse.in_progress",
                            12);
                          v105 = 2;
                          v106 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                          if ( !v106 )
                            goto LABEL_280;
                          *v106 = 25705;
                          v189 = 2;
                          v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v106;
                          v191 = 2;
                          serde_json::value::to_value::hf4a5c51664f5d8d6(&v195, a2 + 24);
                          if ( v195.i8[0] == 6 )
                          {
                            v192 = v195.i64[1];
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              &unk_10167E63D,
                              43,
                              &v192,
                              &off_101974C58,
                              &off_1019743C0);
                          }
                          v194 = v195.i128[1];
                          v193 = (void *)v195.i64[1];
                          v192 = v195.i64[0];
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v195,
                            &v174,
                            &v189,
                            &v192);
                          if ( v195.i8[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v174);
                          v105 = 6;
                          v107 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
                          if ( !v107 )
                            goto LABEL_280;
                          *(_WORD *)(v107 + 4) = 29795;
                          *(_DWORD *)v107 = 1701470831;
                          v189 = 6;
                          v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v107;
                          v191 = 6;
                          serde_json::value::to_value::h29e3c39dc75a9151(&v195, &off_1019743B0);
                          if ( v195.i8[0] == 6 )
                          {
                            v192 = v195.i64[1];
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              &unk_10167E63D,
                              43,
                              &v192,
                              &off_101974C58,
                              &off_1019743C0);
                          }
                          v194 = v195.i128[1];
                          v193 = (void *)v195.i64[1];
                          v192 = v195.i64[0];
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v195,
                            &v174,
                            &v189,
                            &v192);
                          if ( v195.i8[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v174);
                          v105 = 5;
                          v108 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                          if ( !v108 )
                            goto LABEL_280;
                          *(_BYTE *)(v108 + 4) = 108;
                          *(_DWORD *)v108 = 1701080941;
                          v189 = 5;
                          v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v108;
                          v191 = 5;
                          serde_json::value::to_value::hf4a5c51664f5d8d6(&v195, a2);
                          if ( v195.i8[0] == 6 )
                          {
                            v192 = v195.i64[1];
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              &unk_10167E63D,
                              43,
                              &v192,
                              &off_101974C58,
                              &off_1019743C0);
                          }
                          v194 = v195.i128[1];
                          v193 = (void *)v195.i64[1];
                          v192 = v195.i64[0];
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v195,
                            &v174,
                            &v189,
                            &v192);
                          if ( v195.i8[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, &v174);
                          v105 = 7;
                          v109 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
                          if ( !v109 )
LABEL_280:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v105);
                          *(_DWORD *)((char *)v109 + 3) = 1936024425;
                          *v109 = 1768908899;
                          v157 = 7;
                          v158 = v109;
                          v159 = 7;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
                          v181 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                          if ( !v181 )
                            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                          v169 = 0;
                          *((_QWORD *)&v170 + 1) = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
                          v110 = 5;
                          v111 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                          if ( !v111 )
                            goto LABEL_283;
                          *(_BYTE *)(v111 + 4) = 120;
                          *(_DWORD *)v111 = 1701080681;
                          v189 = 5;
                          v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v111;
                          v191 = 5;
                          v195.i8[0] = 2;
                          *(__int128 *)((char *)v195.i128 + 8) = 0u;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v192,
                            &v169,
                            &v189,
                            &v195);
                          if ( (_BYTE)v192 != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v192, &v169);
                          v112 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                          if ( !v112 )
                            goto LABEL_283;
                          *(_BYTE *)(v112 + 4) = 97;
                          *(_DWORD *)v112 = 1953260900;
                          v154 = 5;
                          v171 = v112;
                          v155 = v112;
                          v156 = 5;
                          *(_QWORD *)&v179 = 0;
                          v180 = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
                          v113 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
                          if ( !v113 )
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10);
                          qmemcpy(v113, "tool_calls", 10);
                          v166 = 10;
                          v187 = v113;
                          v167 = v113;
                          v168 = 10;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(10, 1);
                          v114 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
                          if ( !v114 )
                            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
                          v115 = v114;
                          *(_QWORD *)&v182 = 0;
                          v183 = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
                          v116 = 5;
                          v117 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                          if ( !v117 )
                            goto LABEL_284;
                          *(_BYTE *)(v117 + 4) = 120;
                          *(_DWORD *)v117 = 1701080681;
                          v189 = 5;
                          v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v117;
                          v191 = 5;
                          v118 = *(unsigned int *)(i - 4);
                          v195.i8[0] = 2;
                          v195.i64[1] = 0;
                          v195.i64[2] = v118;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v192,
                            &v182,
                            &v189,
                            &v195);
                          if ( (_BYTE)v192 != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v192, &v182);
                          v116 = 8;
                          v119 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                          if ( !v119 )
LABEL_284:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v116);
                          *v119 = 0x6E6F6974636E7566LL;
                          v163 = 8;
                          v164 = v119;
                          v165 = 8;
                          *(_QWORD *)&v177 = 0;
                          v178 = 0;
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
                          v120 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
                          if ( !v120 )
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
                          *(_QWORD *)v120 = 0x746E656D75677261LL;
                          *(_BYTE *)(v120 + 8) = 115;
                          v189 = 9;
                          v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v120;
                          v191 = 9;
                          serde_json::value::to_value::h29e3c39dc75a9151(&v195, v151);
                          if ( v195.i8[0] == 6 )
                          {
                            v192 = v195.i64[1];
                            core::result::unwrap_failed::h855bccc0ecc45c4f(
                              &unk_10167E63D,
                              43,
                              &v192,
                              &off_101974C58,
                              &off_1019743C0);
                          }
                          v194 = v195.i128[1];
                          v193 = (void *)v195.i64[1];
                          v192 = v195.i64[0];
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v195,
                            &v177,
                            &v189,
                            &v192);
                          if ( v195.i8[0] != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
                          *(__int128 *)((char *)v195.i128 + 8) = v177;
                          v195.i64[3] = v178;
                          v195.i8[0] = 5;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v192,
                            &v182,
                            &v163,
                            &v195);
                          if ( (_BYTE)v192 != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                          *(__int128 *)((char *)v195.i128 + 7) = v182;
                          *(__int64 *)((char *)&v195.i64[2] + 7) = v183;
                          *(_BYTE *)v115 = 5;
                          *(_QWORD *)(v115 + 24) = *(__int64 *)((char *)&v195.i64[2] + 7);
                          *(_QWORD *)(v115 + 17) = v195.i64[2];
                          *(_OWORD *)(v115 + 1) = v195.i128[0];
                          v195.i64[1] = 1;
                          v195.i64[2] = v115;
                          v195.i64[3] = 1;
                          v195.i8[0] = 4;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v192,
                            &v179,
                            &v166,
                            &v195);
                          if ( (_BYTE)v192 != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                          *(__int128 *)((char *)v195.i128 + 8) = v179;
                          v195.i64[3] = v180;
                          v195.i8[0] = 5;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v192,
                            &v169,
                            &v154,
                            &v195);
                          if ( (_BYTE)v192 != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v192, &v169);
                          v110 = 13;
                          v121 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
                          if ( !v121 )
LABEL_283:
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v110);
                          qmemcpy(v121, "finish_reason", 13);
                          v189 = 13;
                          v190 = (__int64 (__fastcall *)(_QWORD, _QWORD))v121;
                          v191 = 13;
                          v195.i8[0] = 0;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v192,
                            &v169,
                            &v189,
                            &v195);
                          if ( (_BYTE)v192 != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                          *(__int64 *)((char *)v195.i64 + 7) = v169;
                          *(__int128 *)((char *)v195.i128 + 15) = v170;
                          v122 = (char *)v181;
                          *(_BYTE *)v181 = 5;
                          *((_QWORD *)v122 + 3) = *(__int64 *)((char *)&v195.i64[2] + 7);
                          *(_QWORD *)(v122 + 17) = v195.i64[2];
                          *(_OWORD *)(v122 + 1) = v195.i128[0];
                          v195.i64[1] = 1;
                          v195.i64[2] = (__int64)v122;
                          v195.i64[3] = 1;
                          v195.i8[0] = 4;
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(
                            &v192,
                            &v174,
                            &v157,
                            &v195);
                          if ( (_BYTE)v192 != 6 )
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v192);
                          *(__int128 *)((char *)v195.i128 + 8) = v174;
                          v195.i64[3] = v175;
                          v195.i8[0] = 5;
                          v189 = (__int64)&v195;
                          v190 = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce;
                          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v192, &unk_1017C9F07, &v189);
                          v124 = v192;
                          v125 = v193;
                          v126 = v194;
                          v127 = v186;
                          if ( (unsigned __int64)v194 > v184 - v186 )
                          {
                            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                              &v184,
                              v186,
                              v194,
                              1,
                              1,
                              v123);
                            v127 = v186;
                          }
                          memcpy((void *)(v127 + v185), v125, v126);
                          v186 = v126 + v127;
                          if ( v124 )
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v125, v124, 1);
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v195);
                        }
                      }
                    }
                  }
                }
              }
            }
LABEL_249:
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v172);
          }
        }
        break;
      default:
        break;
    }
  }
  a1[2] = v186;
  result = v184;
  a1[1] = v185;
  *a1 = result;
  return result;
}
