// __ZN13codexmate_lib4core5relay16codex_diagnostic28check_config_global_validity @ 0x1005060b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_config_global_validity::h5949efa6748ca09c(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(),
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rbx
  signed __int64 v8; // rsi
  __int64 *v9; // rax
  char *v10; // rbx
  __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __m128i v15; // xmm2
  bool v16; // zf
  size_t v17; // rdx
  const void *v18; // rdi
  __int64 v19; // rax
  void *v20; // rax
  void *v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __m128i v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int16 *v33; // rax
  size_t v34; // rdx
  unsigned __int16 *v35; // r13
  size_t v36; // rbx
  unsigned __int64 v37; // rax
  __int128 *v39; // rdx
  __m128i v40; // xmm1
  __int128 *v41; // rdi
  __int64 j; // r8
  unsigned __int64 v43; // rax
  __m128i v44; // xmm2
  const void **v46; // rax
  int v47; // eax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __m128i v52; // xmm1
  unsigned __int8 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r14
  __int64 v56; // rbx
  void **v57; // r15
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rcx
  _BYTE *v63; // rax
  size_t v64; // rdx
  const void *v65; // rbx
  size_t v66; // r13
  unsigned __int64 v67; // rax
  __int128 *v69; // rdx
  const char *v70; // rsi
  __m128i v71; // xmm1
  __int128 *v72; // rdi
  __int64 i; // r8
  unsigned __int64 v74; // rax
  __m128i v75; // xmm2
  int v77; // eax
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  void *v82; // rax
  void *v83; // r14
  __int64 v84; // rax
  __int64 v85; // r15
  void **v86; // r12
  __int64 (__fastcall *v87)(); // r13
  __int64 *v88; // rbx
  __int64 v89; // rdx
  void **v90; // rax
  __int64 v91; // rbx
  _QWORD *v92; // r14
  __int64 v93; // rsi
  __int128 *v94; // [rsp+8h] [rbp-2A8h] BYREF
  signed __int64 v95; // [rsp+10h] [rbp-2A0h]
  __int64 v96; // [rsp+20h] [rbp-290h]
  char v97[16]; // [rsp+28h] [rbp-288h] BYREF
  __int128 *v98; // [rsp+38h] [rbp-278h] BYREF
  const char *v99; // [rsp+40h] [rbp-270h]
  __int64 v100; // [rsp+50h] [rbp-260h]
  char v101[16]; // [rsp+58h] [rbp-258h] BYREF
  void **v102; // [rsp+68h] [rbp-248h] BYREF
  __int64 (__fastcall *v103)(); // [rsp+70h] [rbp-240h]
  __int64 *v104; // [rsp+78h] [rbp-238h]
  _QWORD v105[2]; // [rsp+100h] [rbp-1B0h] BYREF
  _QWORD v106[2]; // [rsp+110h] [rbp-1A0h] BYREF
  _QWORD v107[2]; // [rsp+120h] [rbp-190h] BYREF
  __int64 v108; // [rsp+130h] [rbp-180h] BYREF
  const char *v109; // [rsp+138h] [rbp-178h]
  __int64 v110; // [rsp+140h] [rbp-170h]
  _QWORD v111[3]; // [rsp+148h] [rbp-168h] BYREF
  _QWORD v112[3]; // [rsp+160h] [rbp-150h] BYREF
  _QWORD v113[3]; // [rsp+178h] [rbp-138h] BYREF
  __int64 v114; // [rsp+190h] [rbp-120h]
  __int64 v115; // [rsp+198h] [rbp-118h]
  __m128i v116; // [rsp+1A0h] [rbp-110h] BYREF
  __m128i v117; // [rsp+1B0h] [rbp-100h] BYREF
  const char *v118; // [rsp+1C0h] [rbp-F0h] BYREF
  __int64 v119; // [rsp+1C8h] [rbp-E8h]
  __int64 v120; // [rsp+1D0h] [rbp-E0h]
  void *__s1[2]; // [rsp+1D8h] [rbp-D8h] BYREF
  __int64 *v122; // [rsp+1E8h] [rbp-C8h] BYREF
  __int64 (__fastcall *v123)(); // [rsp+1F0h] [rbp-C0h]
  _QWORD v124[5]; // [rsp+1F8h] [rbp-B8h] BYREF
  char v125; // [rsp+220h] [rbp-90h]
  __int16 v126; // [rsp+228h] [rbp-88h]
  __int64 v127; // [rsp+230h] [rbp-80h]
  unsigned __int64 v128; // [rsp+238h] [rbp-78h]
  __int128 *v129; // [rsp+240h] [rbp-70h]
  const char *v130; // [rsp+248h] [rbp-68h]
  __int128 *v131; // [rsp+250h] [rbp-60h]
  __int64 v132; // [rsp+258h] [rbp-58h]
  __int64 v133; // [rsp+260h] [rbp-50h]
  int v134; // [rsp+26Ch] [rbp-44h]
  __int64 v135; // [rsp+270h] [rbp-40h] BYREF
  __int64 v136; // [rsp+278h] [rbp-38h]
  __int64 v137; // [rsp+280h] [rbp-30h]

  v114 = a5; /*0x1005060c4*/
  v115 = a4; /*0x1005060cb*/
  if ( !a2 ) /*0x1005060d5*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1005061a9*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_616,
             22,
             &unk_1015FDE5E,
             42);
  v127 = a1; /*0x1005060e1*/
  codexmate_lib::core::relay::codex_diagnostic::collect_defined_providers::h441d9e50c74bedaf(&v98, a2); /*0x1005060ec*/
  codexmate_lib::core::relay::codex_diagnostic::collect_defined_profiles::h5802163c4c3b6724(&v94, a2); /*0x1005060fe*/
  v135 = 0; /*0x100506103*/
  v136 = 8; /*0x10050610b*/
  v137 = 0; /*0x100506113*/
  v122 = nullptr; /*0x10050611b*/
  v123 = a3; /*0x100506126*/
  v124[0] = a2; /*0x10050612d*/
  v124[1] = a3; /*0x100506134*/
  v124[2] = 0; /*0x10050613b*/
  v124[3] = a3; /*0x100506146*/
  v124[4] = 0xA0000000ALL; /*0x100506157*/
  v125 = 1; /*0x10050615e*/
  v126 = 0; /*0x100506165*/
  v133 = 0; /*0x10050616e*/
  v134 = 0; /*0x100506176*/
  while ( 1 ) /*0x1005061cd*/
  {
    v7 = v124[0]; /*0x1005061cd*/
    v8 = (signed __int64)v124; /*0x1005061db*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1005061e2*/
      &v102,
      v124);
    if ( (_DWORD)v102 == 1 ) /*0x1005061ee*/
    {
      v9 = v122; /*0x1005061f7*/
      v122 = v104; /*0x1005061fe*/
      v8 = (char *)v104 - (char *)v9; /*0x100506205*/
      v10 = (char *)v9 + v7; /*0x100506208*/
      if ( v104 != v9 ) /*0x10050620e*/
        goto LABEL_12; /*0x10050620e*/
      goto LABEL_18; /*0x10050620e*/
    }
    if ( HIBYTE(v126) ) /*0x100506227*/
      break; /*0x100506227*/
    HIBYTE(v126) = 1; /*0x10050622d*/
    v8 = (char *)v123 - (char *)v122; /*0x100506242*/
    if ( ((unsigned __int8)v126 | ((char *)v123 != (char *)v122)) != 1 ) /*0x100506250*/
      break; /*0x100506250*/
    v10 = (char *)v122 + v124[0]; /*0x100506256*/
    if ( v8 ) /*0x100506260*/
    {
LABEL_12:
      if ( v10[v8 - 1] == 10 ) /*0x100506267*/
      {
        if ( v8 == 1 ) /*0x10050626f*/
        {
          v8 = 0; /*0x10050627e*/
        }
        else if ( v10[v8 - 2] == 13 ) /*0x100506276*/
        {
          v8 -= 2LL; /*0x100506278*/
        }
        else
        {
          --v8; /*0x100506282*/
        }
      }
    }
LABEL_18:
    v11 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v10, v8); /*0x100506298*/
    v13 = v12; /*0x10050629b*/
    v14 = 0; /*0x10050629e*/
    switch ( v12 ) /*0x1005062b8*/
    {
      case 0x1EuLL: /*0x1005062b8*/
        v15 = _mm_or_si128( /*0x1005062dd*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                  _mm_loadu_si128((const __m128i *)(v11 + 14))),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v11),
                  _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
        v16 = _mm_testz_si128(v15, v15); /*0x1005062e1*/
        goto LABEL_70; /*0x1005062e6*/
      case 0x24uLL: /*0x1005062b8*/
        v17 = 36; /*0x10050678e*/
        v18 = (const void *)v11; /*0x100506793*/
        v8 = (signed __int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_99; /*0x100506796*/
        goto LABEL_69; /*0x100506796*/
      case 0x27uLL: /*0x1005062b8*/
        v17 = 39; /*0x1005062eb*/
        v18 = (const void *)v11; /*0x1005062f0*/
        v8 = (signed __int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_100; /*0x1005062f3*/
LABEL_69:
        LODWORD(v14) = memcmp(v18, (const void *)v8, v17); /*0x10050679d*/
        v16 = (_DWORD)v14 == 0; /*0x1005067a2*/
LABEL_70:
        LOBYTE(v14) = v16; /*0x1005067a4*/
        if ( v16 | v133 & 1 ) /*0x1005067ad*/
          goto LABEL_71; /*0x1005067b0*/
        goto LABEL_24; /*0x1005067b0*/
      case 0x37uLL: /*0x1005062b8*/
        v8 = (signed __int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_101; /*0x1005067c2*/
        LODWORD(v14) = memcmp((const void *)v11, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u); /*0x1005067c9*/
        if ( !(_DWORD)v14 ) /*0x1005067d0*/
          goto LABEL_73; /*0x1005067d0*/
        goto LABEL_22; /*0x1005067d0*/
      case 0x3CuLL: /*0x1005062b8*/
        v8 = (signed __int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_102; /*0x1005067e9*/
        LODWORD(v14) = memcmp((const void *)v11, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu); /*0x1005067f0*/
        if ( !(_DWORD)v14 ) /*0x1005067f7*/
          goto LABEL_73; /*0x1005067f7*/
        goto LABEL_22; /*0x1005067f7*/
      case 0x40uLL: /*0x1005062b8*/
        v8 = (signed __int64)"# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)"; /*0x100506307*/
        LODWORD(v14) = memcmp( /*0x10050630e*/
                         (const void *)v11,
                         "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)",
                         0x40u);
        if ( !(_DWORD)v14 ) /*0x100506315*/
        {
LABEL_73:
          LOBYTE(v14) = 1; /*0x1005067d6*/
          goto LABEL_74; /*0x1005067d6*/
        }
LABEL_22:
        v14 = 0; /*0x10050631b*/
LABEL_23:
        if ( (v133 & 1) != 0 ) /*0x100506326*/
        {
LABEL_71:
          LOBYTE(v14) = v14 ^ 1; /*0x1005067b6*/
LABEL_74:
          v133 = v14; /*0x1005067d8*/
          goto LABEL_5; /*0x1005067dc*/
        }
LABEL_24:
        if ( v13 ) /*0x10050632f*/
        {
          if ( v134 & 1 | (*(_BYTE *)v11 == 91) ) /*0x10050633b*/
          {
            LOBYTE(v14) = 1; /*0x1005061ae*/
            v134 = v14; /*0x1005061b0*/
            v133 = 0; /*0x1005061b3*/
            goto LABEL_5; /*0x1005061b3*/
          }
          if ( v13 >= 0xE && !(*(_QWORD *)v11 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v11 + 6) ^ 0x72656469766F7270LL) ) /*0x10050636a*/
          {
            if ( v13 > 0xF ) /*0x100506373*/
            {
              if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(61, v11, v13) != 1 ) /*0x100506a63*/
                goto LABEL_34; /*0x100506a63*/
            }
            else
            {
              v19 = 0; /*0x100506379*/
              while ( *(_BYTE *)(v11 + v19) != 61 ) /*0x100506385*/
              {
                if ( v13 == ++v19 ) /*0x100506391*/
                  goto LABEL_34; /*0x100506391*/
              }
            }
            v63 = (_BYTE *)codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b(v11, v13); /*0x100506a6f*/
            v65 = v63; /*0x100506a74*/
            if ( v63 ) /*0x100506a7a*/
            {
              v66 = v64; /*0x100506a80*/
              v107[0] = v63; /*0x100506a83*/
              v107[1] = v64; /*0x100506a8a*/
              if ( v64 ) /*0x100506a94*/
              {
                if ( v64 != 6 /*0x100506b2b*/
                  || (*v63 | (unsigned __int8)(32 * ((unsigned __int8)(*v63 - 65) < 0x1Au))) != 111
                  || (v63[1] | (unsigned __int8)(32 * ((unsigned __int8)(v63[1] - 65) < 0x1Au))) != 112
                  || (v63[2] | (unsigned __int8)(32 * ((unsigned __int8)(v63[2] - 65) < 0x1Au))) != 101
                  || (v63[3] | (unsigned __int8)(32 * ((unsigned __int8)(v63[3] - 65) < 0x1Au))) != 110
                  || (v63[4] | (unsigned __int8)(32 * ((unsigned __int8)(v63[4] - 65) < 0x1Au))) != 97
                  || (v63[5] | (unsigned __int8)(32 * ((unsigned __int8)(v63[5] - 65) < 0x1Au))) != 105 )
                {
                  if ( v100 ) /*0x100506b39*/
                  {
                    v67 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v101, v63, v64); /*0x100506b4c*/
                    _RCX = v67 >> 57; /*0x100506b54*/
                    v69 = v98; /*0x100506b58*/
                    v70 = v99; /*0x100506b5f*/
                    v71 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v67 >> 57), (__m128i)0LL); /*0x100506b6e*/
                    v72 = v98 - 1; /*0x100506b73*/
                    for ( i = 0; ; i += 16 ) /*0x100506b77*/
                    {
                      v74 = (unsigned __int64)v70 & v67; /*0x100506b7a*/
                      v75 = _mm_loadu_si128((const __m128i *)((char *)v69 + v74)); /*0x100506b7d*/
                      _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v75, v71)); /*0x100506b8a*/
                      if ( _R12D ) /*0x100506b92*/
                        break; /*0x100506b92*/
LABEL_112:
                      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v75, (__m128i)-1LL)); /*0x100506c1f*/
                      if ( (_DWORD)_RCX ) /*0x100506c2d*/
                        goto LABEL_114; /*0x100506c2d*/
                      v67 = v74 + i + 16; /*0x100506c2f*/
                    }
                    v128 = v74; /*0x100506b98*/
                    v129 = v69; /*0x100506b9c*/
                    v130 = v70; /*0x100506ba0*/
                    v116 = v71; /*0x100506ba4*/
                    v131 = v72; /*0x100506bac*/
                    v132 = i; /*0x100506bb0*/
                    v117 = v75; /*0x100506bb4*/
                    while ( 1 ) /*0x100506bbc*/
                    {
                      __asm { tzcnt ecx, r12d } /*0x100506bbc*/
                      _RCX = 16 * ((unsigned __int64)v70 & (v74 + _RCX)); /*0x100506bc7*/
                      if ( v66 == *(_QWORD *)((char *)v72 - _RCX + 8) /*0x100506be0*/
                        && !memcmp(v65, *(const void **)((char *)v72 - _RCX), v66) )
                      {
                        break; /*0x100506be0*/
                      }
                      v77 = _R12D - 1; /*0x100506bed*/
                      LOWORD(v77) = _R12D & (_R12D - 1); /*0x100506bf2*/
                      v16 = (_WORD)v77 == 0; /*0x100506bf2*/
                      _R12D = v77; /*0x100506bf6*/
                      v74 = v128; /*0x100506bf9*/
                      v69 = v129; /*0x100506bfd*/
                      v70 = v130; /*0x100506c01*/
                      v71 = _mm_load_si128(&v116); /*0x100506c05*/
                      v72 = v131; /*0x100506c0d*/
                      i = v132; /*0x100506c11*/
                      v75 = _mm_load_si128(&v117); /*0x100506c15*/
                      if ( v16 ) /*0x100506c1d*/
                        goto LABEL_112; /*0x100506c1d*/
                    }
                  }
                  else
                  {
LABEL_114:
                    v102 = (void **)v107; /*0x100506c3d*/
                    v103 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100506c52*/
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v113, &unk_1017C043F, &v102); /*0x100506c6e*/
                    v78 = v137; /*0x100506c73*/
                    if ( v137 == v135 ) /*0x100506c7b*/
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v135); /*0x100506c81*/
                    v79 = v136; /*0x100506c86*/
                    v80 = 3 * v78; /*0x100506c8a*/
                    *(_QWORD *)(v136 + 8 * v80 + 16) = v113[2]; /*0x100506c95*/
                    v81 = v113[0]; /*0x100506c9a*/
                    *(_QWORD *)(v79 + 8 * v80 + 8) = v113[1]; /*0x100506ca8*/
                    *(_QWORD *)(v79 + 8 * v80) = v81; /*0x100506cad*/
                    v137 = v78 + 1; /*0x100506cb4*/
                  }
                }
              }
            }
          }
        }
        else if ( (v134 & 1) != 0 ) /*0x1005063a4*/
        {
          v134 = 0; /*0x100506cbd*/
          v133 = 0; /*0x100506cc4*/
          goto LABEL_5; /*0x100506ccc*/
        }
LABEL_34:
        if ( codexmate_lib::core::relay::codex_diagnostic::is_top_level_model_key::h36abcbf43fb4c921(v11, v13) ) /*0x1005063b0*/
        {
          v20 = (void *)codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b(v11, v13); /*0x1005063c3*/
          if ( v20 ) /*0x1005063cb*/
          {
            __s1[0] = v20; /*0x1005063d4*/
            __s1[1] = v21; /*0x1005063db*/
            if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100506414*/
                                    "cc-switchcc_switchcodex-switch[model_providers.cccircuit_breakerprovider_router",
                                    9u,
                                    v20)
              || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                    "cc_switchcodex-switch[model_providers.cccircuit_breakerprovider_router",
                                    9u,
                                    __s1[0]) )
            {
              v102 = __s1; /*0x100506424*/
              v103 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100506432*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v112, &unk_1017C0472, &v102); /*0x10050644e*/
              v22 = v137; /*0x100506453*/
              if ( v137 == v135 ) /*0x10050645b*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v135); /*0x100506461*/
              v23 = v136; /*0x100506466*/
              v24 = 3 * v22; /*0x10050646a*/
              *(_QWORD *)(v136 + 8 * v24 + 16) = v112[2]; /*0x100506475*/
              v25 = v112[0]; /*0x10050647a*/
              *(_QWORD *)(v23 + 8 * v24 + 8) = v112[1]; /*0x100506488*/
              *(_QWORD *)(v23 + 8 * v24) = v25; /*0x10050648d*/
              v137 = v22 + 1; /*0x100506494*/
            }
          }
        }
        if ( v13 >= 0x16 ) /*0x10050649c*/
        {
          v26 = _mm_or_si128( /*0x1005064bd*/
                  _mm_xor_si128(
                    _mm_loadu_si128((const __m128i *)(v11 + 6)),
                    *(__m128i *)"reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id"),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v11), (__m128i)xmmword_1015FBD50));
          if ( _mm_testz_si128(v26, v26) ) /*0x1005064c1*/
          {
            if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(61, v11, v13) == 1 ) /*0x1005064e0*/
            {
              v27 = codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b(v11, v13); /*0x1005064ec*/
              if ( v27 ) /*0x1005064f4*/
              {
                v106[0] = v27; /*0x1005064fa*/
                v106[1] = v28; /*0x100506501*/
                if ( !(unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_valid_codex_reasoning_effort::ha785e284deba20f7( /*0x10050650e*/
                                         v27,
                                         v28) )
                {
                  v102 = (void **)v106; /*0x100506522*/
                  v103 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100506530*/
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v111, &unk_1017C04A3, &v102); /*0x10050654c*/
                  v29 = v137; /*0x100506551*/
                  if ( v137 == v135 ) /*0x100506559*/
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v135); /*0x10050655f*/
                  v30 = v136; /*0x100506564*/
                  v31 = 3 * v29; /*0x100506568*/
                  *(_QWORD *)(v136 + 8 * v31 + 16) = v111[2]; /*0x100506573*/
                  v32 = v111[0]; /*0x100506578*/
                  *(_QWORD *)(v30 + 8 * v31 + 8) = v111[1]; /*0x100506586*/
                  *(_QWORD *)(v30 + 8 * v31) = v32; /*0x10050658b*/
                  v137 = v29 + 1; /*0x100506592*/
                }
              }
            }
          }
        }
        v8 = v13; /*0x1005065a3*/
        if ( codexmate_lib::core::relay::codex_diagnostic::is_profile_assignment::hb6d548fc73d167bb(v11, v13) ) /*0x1005065a6*/
        {
          v8 = v13; /*0x1005065b6*/
          v33 = (unsigned __int16 *)codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b( /*0x1005065b9*/
                                      v11,
                                      v13);
          v35 = v33; /*0x1005065be*/
          if ( v33 ) /*0x1005065c4*/
          {
            v36 = v34; /*0x1005065ca*/
            v105[0] = v33; /*0x1005065cd*/
            v105[1] = v34; /*0x1005065d4*/
            if ( v34 ) /*0x1005065de*/
            {
              if ( v34 != 6 /*0x10050667c*/
                || (*(_BYTE *)v33 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)v33 - 65) < 0x1Au))) != 111
                || (*((_BYTE *)v33 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v33 + 1) - 65) < 0x1Au))) != 112
                || (*((_BYTE *)v33 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v33 + 2) - 65) < 0x1Au))) != 101
                || (*((_BYTE *)v33 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v33 + 3) - 65) < 0x1Au))) != 110
                || (*((_BYTE *)v33 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v33 + 4) - 65) < 0x1Au))) != 97
                || (*((_BYTE *)v33 + 5) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)v33 + 5) - 65) < 0x1Au))) != 105 )
              {
                if ( v96 ) /*0x10050668a*/
                {
                  v37 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v97, v33, v34); /*0x10050669d*/
                  _RCX = v37 >> 57; /*0x1005066a5*/
                  v39 = v94; /*0x1005066a9*/
                  v8 = v95; /*0x1005066b0*/
                  v40 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v37 >> 57), (__m128i)0LL); /*0x1005066bf*/
                  v41 = v94 - 1; /*0x1005066c4*/
                  for ( j = 0; ; j += 16 ) /*0x1005066c8*/
                  {
                    v43 = v8 & v37; /*0x1005066cb*/
                    v44 = _mm_loadu_si128((const __m128i *)((char *)v39 + v43)); /*0x1005066ce*/
                    _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v44, v40)); /*0x1005066db*/
                    if ( _R12D ) /*0x1005066e3*/
                      break; /*0x1005066e3*/
LABEL_66:
                    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v44, (__m128i)-1LL)); /*0x100506770*/
                    if ( (_DWORD)_RCX ) /*0x10050677e*/
                      goto LABEL_77; /*0x10050677e*/
                    v37 = v43 + j + 16; /*0x100506780*/
                  }
                  v128 = v43; /*0x1005066e9*/
                  v129 = v39; /*0x1005066ed*/
                  v130 = (const char *)v8; /*0x1005066f1*/
                  v116 = v40; /*0x1005066f5*/
                  v131 = v41; /*0x1005066fd*/
                  v132 = j; /*0x100506701*/
                  v117 = v44; /*0x100506705*/
                  while ( 1 ) /*0x10050670d*/
                  {
                    __asm { tzcnt ecx, r12d } /*0x10050670d*/
                    _RCX = 16 * (v8 & (v43 + _RCX)); /*0x100506718*/
                    v46 = (const void **)((char *)v41 - _RCX); /*0x10050671f*/
                    if ( v36 == *(_QWORD *)((char *)v41 - _RCX + 8) ) /*0x100506726*/
                    {
                      v8 = (signed __int64)*v46; /*0x100506728*/
                      if ( !memcmp(v35, *v46, v36) ) /*0x100506731*/
                        break; /*0x100506731*/
                    }
                    v47 = _R12D - 1; /*0x10050673e*/
                    LOWORD(v47) = _R12D & (_R12D - 1); /*0x100506743*/
                    v16 = (_WORD)v47 == 0; /*0x100506743*/
                    _R12D = v47; /*0x100506747*/
                    v43 = v128; /*0x10050674a*/
                    v39 = v129; /*0x10050674e*/
                    v8 = (signed __int64)v130; /*0x100506752*/
                    v40 = _mm_load_si128(&v116); /*0x100506756*/
                    v41 = v131; /*0x10050675e*/
                    j = v132; /*0x100506762*/
                    v44 = _mm_load_si128(&v117); /*0x100506766*/
                    if ( v16 ) /*0x10050676e*/
                      goto LABEL_66; /*0x10050676e*/
                  }
                }
                else
                {
LABEL_77:
                  if ( v36 != 6 || *(_DWORD *)v35 ^ 0x616D6961 | v35[2] ^ 0x3169 ) /*0x10050681b*/
                  {
                    v102 = (void **)v105; /*0x10050682a*/
                    v103 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100506838*/
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v108, &unk_1017C04D2, &v102); /*0x100506854*/
                    v48 = v137; /*0x100506859*/
                    if ( v137 == v135 ) /*0x100506861*/
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v135); /*0x100506867*/
                    v49 = v136; /*0x10050686c*/
                    v50 = 3 * v48; /*0x100506870*/
                    *(_QWORD *)(v136 + 8 * v50 + 16) = v110; /*0x10050687b*/
                    v51 = v108; /*0x100506880*/
                    v8 = (signed __int64)v109; /*0x100506887*/
                    *(_QWORD *)(v49 + 8 * v50 + 8) = v109; /*0x10050688e*/
                    *(_QWORD *)(v49 + 8 * v50) = v51; /*0x100506893*/
                    v137 = v48 + 1; /*0x10050689a*/
                  }
                }
              }
            }
          }
        }
        if ( v13 >= 0x12 ) /*0x1005068a4*/
        {
          v52 = _mm_or_si128( /*0x1005068c8*/
                  _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v11 + 16)), (__m128i)xmmword_1015FBD70),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v11), (__m128i)xmmword_1015FBD60));
          if ( _mm_testz_si128(v52, v52) ) /*0x1005068cc*/
          {
            v8 = v11; /*0x1005068dc*/
            if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(61, v11, v13) == 1 ) /*0x1005068eb*/
            {
              v8 = v13; /*0x1005068f4*/
              v53 = (unsigned __int8 *)codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b( /*0x1005068f7*/
                                         v11,
                                         v13);
              if ( v53 ) /*0x1005068ff*/
              {
                codexmate_lib::core::relay::codex_diagnostic::unescape_toml_basic_string::h71fa7a97db3de3a3( /*0x10050690f*/
                  (__int64 *)&v118,
                  v53,
                  v54);
                v55 = v119; /*0x100506914*/
                v56 = v120; /*0x10050691b*/
                if ( v120 ) /*0x100506925*/
                {
                  std::sys::fs::metadata::h32fa16d3052ea535(&v102, v119, v120); /*0x100506938*/
                  v57 = v102; /*0x10050693d*/
                  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10050694e*/
                    v102,
                    v103);
                  if ( v57 ) /*0x100506956*/
                  {
                    if ( !(unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::path_is_under_dir::hbebf74f73253219f( /*0x100506970*/
                                             v55,
                                             v56,
                                             v115,
                                             v114) )
                    {
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v55, v56); /*0x10050697d*/
                      v58 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x10050698c*/
                      if ( !v58 ) /*0x100506994*/
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x100506f46*/
                      v59 = v58; /*0x10050699a*/
                      *(_QWORD *)(v58 + 40) = 0xBEE5AFB7E8A883E9LL; /*0x1005069a7*/
                      *(_QWORD *)(v58 + 32) = 0x96A4E5849AE7A89CLL; /*0x1005069b5*/
                      *(_QWORD *)(v58 + 24) = 0xE598ADE58DB8E491LL; /*0x1005069c3*/
                      *(_QWORD *)(v58 + 16) = 0x90E5878CE6206E6FLL; /*0x1005069d1*/
                      qmemcpy((void *)v58, "model_catalog_js", 16); /*0x1005069ed*/
                      *(_BYTE *)(v58 + 48) = -124; /*0x1005069f0*/
                      v60 = v137; /*0x1005069f5*/
                      if ( v137 == v135 ) /*0x1005069fd*/
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v135); /*0x100506a03*/
                      v61 = v136; /*0x100506a08*/
                      v62 = 3 * v60; /*0x100506a0c*/
                      *(_QWORD *)(v136 + 8 * v62) = 49; /*0x100506a10*/
                      *(_QWORD *)(v61 + 8 * v62 + 8) = v59; /*0x100506a18*/
                      *(_QWORD *)(v61 + 8 * v62 + 16) = 49; /*0x100506a1d*/
                      v137 = v60 + 1; /*0x100506a29*/
                    }
                  }
                }
                v8 = (signed __int64)v118; /*0x100506a2d*/
                if ( v118 ) /*0x100506a37*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v118, 1); /*0x100506a45*/
              }
            }
          }
        }
LABEL_5:
        if ( HIBYTE(v126) ) /*0x1005061c7*/
          goto LABEL_118; /*0x1005061c7*/
        break; /*0x1005061c7*/
      default:
        goto LABEL_23;
    }
  }
LABEL_118:
  if ( v137 ) /*0x100506cda*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v127, v8); /*0x100506ce0*/
    v82 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x100506cef*/
    if ( !v82 ) /*0x100506cf7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x100506f24*/
    v83 = v82; /*0x100506cfd*/
    qmemcpy(v82, "config_global_validity", 22); /*0x100506d26*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(22, 1); /*0x100506d29*/
    v84 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100506d38*/
    if ( !v84 ) /*0x100506d40*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100506f35*/
    v85 = v84; /*0x100506d46*/
    *(_BYTE *)(v84 + 4) = 114; /*0x100506d49*/
    *(_DWORD *)v84 = 1869771365; /*0x100506d4d*/
    v118 = (const char *)v137; /*0x100506d57*/
    v122 = (__int64 *)&v118; /*0x100506d65*/
    v123 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100506d73*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v102, &unk_1017C0418, &v122); /*0x100506d8f*/
    v86 = v102; /*0x100506d94*/
    v87 = v103; /*0x100506d9b*/
    v88 = v104; /*0x100506da2*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(&v102, v136, v137, &unk_1015FD2A7, 3); /*0x100506dc5*/
    v89 = v127; /*0x100506dd1*/
    *(_QWORD *)(v127 + 88) = v104; /*0x100506dd5*/
    v90 = v102; /*0x100506dd9*/
    *(_QWORD *)(v89 + 80) = v103; /*0x100506de7*/
    *(_QWORD *)(v89 + 72) = v90; /*0x100506deb*/
    *(_QWORD *)v89 = 22; /*0x100506def*/
    *(_QWORD *)(v89 + 8) = v83; /*0x100506df6*/
    *(_QWORD *)(v89 + 16) = 22; /*0x100506dfa*/
    *(_QWORD *)(v89 + 24) = 5; /*0x100506e02*/
    *(_QWORD *)(v89 + 32) = v85; /*0x100506e0a*/
    *(_QWORD *)(v89 + 40) = 5; /*0x100506e0e*/
    *(_QWORD *)(v89 + 48) = v86; /*0x100506e16*/
    *(_QWORD *)(v89 + 56) = v87; /*0x100506e1a*/
    *(_QWORD *)(v89 + 64) = v88; /*0x100506e1e*/
    *(_BYTE *)(v89 + 96) = 1; /*0x100506e22*/
  }
  else
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100506e41*/
      v127,
      &anon_92869709a5e99ce1936aa4e326b6c562_616,
      22,
      &unk_1015FDE3F,
      24);
  }
  v91 = v137; /*0x100506e46*/
  if ( v137 ) /*0x100506e4d*/
  {
    v92 = (_QWORD *)(v136 + 8); /*0x100506e53*/
    do /*0x100506e67*/
    {
      v93 = *(v92 - 1); /*0x100506e69*/
      if ( v93 ) /*0x100506e70*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v92, v93, 1); /*0x100506e7a*/
      v92 += 3; /*0x100506e60*/
      --v91; /*0x100506e64*/
    }
    while ( v91 ); /*0x100506e67*/
  }
  result = v135; /*0x100506e81*/
  if ( v135 ) /*0x100506e88*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136, 24 * v135, 8); /*0x100506e9b*/
  if ( v95 ) /*0x100506eaa*/
  {
    result = 16 * v95; /*0x100506eaf*/
    if ( 17 * v95 != -33 ) /*0x100506eba*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v94 - result - 16, 17 * v95 + 33, 16); /*0x100506ecf*/
  }
  if ( v99 ) /*0x100506ede*/
  {
    result = 16LL * (_QWORD)v99; /*0x100506ee3*/
    if ( 17LL * (_QWORD)v99 != -33 ) /*0x100506eee*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v98 - result - 16, 17LL * (_QWORD)v99 + 33, 16); /*0x100506f03*/
  }
  return result; /*0x100506198*/
}