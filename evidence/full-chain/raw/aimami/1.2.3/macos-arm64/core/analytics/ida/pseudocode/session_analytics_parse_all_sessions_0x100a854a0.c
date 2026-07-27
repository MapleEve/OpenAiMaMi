// 1.2.3 baseline same-set | __ZN13codexmate_lib4core17session_analytics18parse_all_sessions17h61d984ccd4ee9321E @ 0x100a854a0 | full-body via IDA Python(IDA decompiler.decompile direct write)
// 1.2.3 baseline same-set | codexmate_lib::core::session_analytics::parse_all_sessions | 完整基线逆(decompile+归目录)
void __fastcall codexmate_lib::core::session_analytics::parse_all_sessions::h61d984ccd4ee9321(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  _QWORD *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r12
  unsigned __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  char v30; // r14
  unsigned __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // esi
  int v45; // edx
  unsigned int v46; // ecx
  __int64 v47; // rax
  void *v48; // r14
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r14
  void *v59; // rax
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // rcx
  __m128i v63; // xmm0
  __int64 v64; // rax
  size_t v65; // r14
  char *v66; // rcx
  __int64 v67; // r14
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  void *v71; // r14
  void *v72; // rcx
  char v73; // al
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r14
  __int64 v81; // rax
  __int64 v82; // rcx
  void *v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  void *v86; // rcx
  __int64 v87; // rax
  size_t v88; // rsi
  void *v89; // rdi
  char v90; // al
  char v91; // dl
  char *v92; // rax
  char *v93; // r10
  char *v94; // rdx
  char *v95; // rsi
  unsigned __int64 v96; // rax
  char *v97; // rsi
  unsigned __int64 v98; // rdx
  char v99; // al
  char v100; // cl
  char *v101; // rdi
  char *v102; // r9
  char *v103; // rdx
  unsigned __int64 v104; // rsi
  __int64 v105; // r14
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // r14
  double v109; // xmm0_8
  __int64 v110; // r14
  __int64 v111; // rbx
  _QWORD *v112; // rdx
  __int64 v113; // rax
  __int64 v114; // r15
  _QWORD *v115; // r14
  __int64 v116; // rsi
  _QWORD *v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120[3]; // [rsp+0h] [rbp-2F0h] BYREF
  _QWORD v121[14]; // [rsp+18h] [rbp-2D8h] BYREF
  __int64 v122; // [rsp+88h] [rbp-268h] BYREF
  __int64 v123; // [rsp+90h] [rbp-260h]
  unsigned __int64 v124; // [rsp+98h] [rbp-258h]
  unsigned __int64 v125; // [rsp+A0h] [rbp-250h]
  _QWORD *v126; // [rsp+A8h] [rbp-248h]
  __int64 v127; // [rsp+B0h] [rbp-240h]
  __int64 v128; // [rsp+B8h] [rbp-238h]
  __int128 v129; // [rsp+C0h] [rbp-230h]
  __int64 v130; // [rsp+D0h] [rbp-220h]
  _OWORD v131[9]; // [rsp+D8h] [rbp-218h] BYREF
  _OWORD v132[2]; // [rsp+170h] [rbp-180h] BYREF
  _QWORD *v133; // [rsp+190h] [rbp-160h]
  __int128 v134; // [rsp+198h] [rbp-158h] BYREF
  __int128 v135; // [rsp+1A8h] [rbp-148h]
  __int64 v136; // [rsp+1B8h] [rbp-138h] BYREF
  __int128 v137; // [rsp+1C0h] [rbp-130h]
  __int64 v138; // [rsp+1D0h] [rbp-120h] BYREF
  __int128 v139; // [rsp+1D8h] [rbp-118h]
  __int128 v140; // [rsp+1E8h] [rbp-108h] BYREF
  __int128 v141; // [rsp+1F8h] [rbp-F8h]
  __int128 v142; // [rsp+208h] [rbp-E8h] BYREF
  __int64 v143; // [rsp+218h] [rbp-D8h]
  __int64 v144; // [rsp+220h] [rbp-D0h]
  __int64 v145; // [rsp+228h] [rbp-C8h]
  unsigned int v146; // [rsp+230h] [rbp-C0h]
  __int64 v147; // [rsp+238h] [rbp-B8h] BYREF
  __int64 v148; // [rsp+240h] [rbp-B0h]
  __int64 v149; // [rsp+248h] [rbp-A8h]
  __int128 v150; // [rsp+250h] [rbp-A0h] BYREF
  __int64 v151; // [rsp+260h] [rbp-90h]
  int v152; // [rsp+26Ch] [rbp-84h]
  __int64 v153; // [rsp+270h] [rbp-80h]
  __int64 v154; // [rsp+278h] [rbp-78h]
  __int64 v155; // [rsp+280h] [rbp-70h]
  char *v156; // [rsp+288h] [rbp-68h]
  _QWORD *v157; // [rsp+290h] [rbp-60h]
  unsigned __int64 v158; // [rsp+298h] [rbp-58h]
  __int64 v159; // [rsp+2A0h] [rbp-50h]
  __int64 v160; // [rsp+2A8h] [rbp-48h]
  void *__src; // [rsp+2B0h] [rbp-40h]
  __int64 v162; // [rsp+2B8h] [rbp-38h]
  void *v163; // [rsp+2C0h] [rbp-30h]

  v133 = a1;
  v128 = codexmate_lib::core::session_analytics::range_to_cutoff::hbe9b944a87b55264(a3, a4);
  *(_QWORD *)&v142 = 0;
  *((_QWORD *)&v142 + 1) = 8;
  v143 = 0;
  v5 = a2[16];
  v6 = a2[17];
  std::sys::fs::metadata::h32fa16d3052ea535(v131, a2[16], a2[17]);
  if ( LOBYTE(v131[0]) )
  {
    if ( (BYTE8(v131[0]) & 3) == 1 )
    {
      v7 = *((_QWORD *)&v131[0] + 1) - 1LL;
      v8 = *(_QWORD *)(*((_QWORD *)&v131[0] + 1) - 1LL);
      v9 = *(_QWORD *)(*((_QWORD *)&v131[0] + 1) + 7LL);
      if ( *(_QWORD *)v9 )
        (*(void (__fastcall **)(__int64))v9)(v8);
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24, 8);
    }
  }
  else
  {
    codexmate_lib::core::session_analytics::visit_dir::hb67ededd4101d90b(v5, v6, &v142);
  }
  v11 = a2[19];
  v12 = a2[20];
  std::sys::fs::metadata::h32fa16d3052ea535(v131, v11, v12);
  if ( LODWORD(v131[0]) == 1 )
  {
    if ( (BYTE8(v131[0]) & 3) == 1 )
    {
      v13 = *((_QWORD *)&v131[0] + 1) - 1LL;
      v14 = *(_QWORD *)(*((_QWORD *)&v131[0] + 1) - 1LL);
      v15 = *(_QWORD *)(*((_QWORD *)&v131[0] + 1) + 7LL);
      if ( *(_QWORD *)v15 )
        (*(void (__fastcall **)(__int64))v15)(v14);
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8);
    }
  }
  else
  {
    codexmate_lib::core::session_analytics::visit_dir::hb67ededd4101d90b(v11, v12, &v142);
  }
  v130 = v143;
  v17 = *((_QWORD **)&v142 + 1);
  v129 = v142;
  v147 = 0;
  v148 = 8;
  v149 = 0;
  if ( !v143 )
  {
    v114 = *((_QWORD *)&v142 + 1);
    v117 = v133;
    v133[3] = v149;
    v118 = v147;
    v117[2] = v148;
    v117[1] = v118;
    *v117 = 11;
    goto LABEL_227;
  }
  v127 = *((_QWORD *)&v142 + 1) + 32 * v143;
  v125 = 0x8000000000000001LL;
  v18 = 0x100002600LL;
  do
  {
    v19 = v17[1];
    v20 = v17[2];
    v126 = v17;
    v155 = v17[3];
    LODWORD(v142) = 0;
    WORD2(v142) = 438;
    WORD5(v142) = 0;
    *(_DWORD *)((char *)&v142 + 6) = 1;
    std::fs::OpenOptions::_open::h1dad73452047b8aa(v131, &v142, v19, v20);
    if ( LODWORD(v131[0]) == 1 )
    {
      v121[1] = 2;
      v121[2] = *((_QWORD *)&v131[0] + 1);
      v121[0] = 0x8000000000000000LL;
LABEL_20:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v121[1]);
      goto LABEL_21;
    }
    v21 = DWORD1(v131[0]);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v131, &v142);
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1);
    if ( !v22 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000);
    v145 = 0;
    v144 = 0;
    v143 = 0;
    v138 = 0;
    v139 = 8u;
    *(_QWORD *)&v150 = 0;
    *((_QWORD *)&v150 + 1) = 8;
    v151 = 0;
    v136 = 0;
    v137 = 8u;
    *(_QWORD *)&v142 = v22;
    *((_QWORD *)&v142 + 1) = 0x2000;
    v146 = v21;
    v152 = 0;
LABEL_25:
    v162 = v21;
    while ( 1 )
    {
      _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3e6b44ac088bb82(
        &v122,
        &v142);
      v23 = v122;
      if ( v122 == v125 )
        break;
      v24 = v123;
      if ( v122 == 0x8000000000000000LL )
      {
        if ( (v123 & 3) == 1 )
        {
          v36 = v123 - 1;
          v37 = *(_QWORD *)(v123 - 1);
          v38 = *(_QWORD *)(v123 + 7);
          if ( *(_QWORD *)v38 )
            (*(void (__fastcall **)(__int64))v38)(v37);
          v39 = *(_QWORD *)(v38 + 8);
          if ( v39 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v39, *(_QWORD *)(v38 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24, 8);
        }
      }
      else
      {
        v25 = v124;
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v123, v124);
        if ( v26 )
        {
          *(_QWORD *)&v131[3] = 0;
          *((_QWORD *)&v131[1] + 1) = v24;
          v131[2] = v25;
          *((_QWORD *)&v131[3] + 1) = v24;
          *(_QWORD *)&v131[4] = v25;
          *(_QWORD *)&v131[0] = 0;
          *((_QWORD *)&v131[0] + 1) = 1;
          *(_QWORD *)&v131[1] = 0;
          BYTE8(v131[4]) = 0x80;
          serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$serde_json..value..Value$GT$::deserialize::h60091f386f4dbfee(
            &v134,
            v131);
          v30 = 1;
          if ( (_BYTE)v134 != 6 )
          {
            v141 = v135;
            v140 = v134;
            v28 = *((_QWORD *)&v131[2] + 1);
            if ( *((_QWORD *)&v131[2] + 1) >= *(_QWORD *)&v131[2] )
            {
LABEL_36:
              v30 = 0;
            }
            else
            {
              v27 = *((_QWORD *)&v131[1] + 1);
              v28 = *((_QWORD *)&v131[2] + 1) + 1LL;
              while ( 1 )
              {
                v31 = *(unsigned __int8 *)(*((_QWORD *)&v131[1] + 1) + v28 - 1);
                if ( v31 > 0x20 || !_bittest64(&v18, v31) )
                  break;
                *((_QWORD *)&v131[2] + 1) = v28;
                v32 = v28 - *(_QWORD *)&v131[2] + 1;
                ++v28;
                if ( v32 == 1 )
                  goto LABEL_36;
              }
              v120[0] = 22;
              *((_QWORD *)&v134 + 1) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v131, v120);
              LOBYTE(v134) = 6;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140);
            }
          }
          v33 = *(_QWORD *)&v131[0];
          if ( *(_QWORD *)&v131[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v131[0] + 1), *(_QWORD *)&v131[0], 1);
          if ( !v30 )
          {
            v132[1] = v135;
            v132[0] = v134;
            v40 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "typefullargsopenwithkindsavetrueuuidemitshowhide",
                    4,
                    v132);
            if ( v40 && *(_BYTE *)v40 == 3 )
            {
              v163 = *(void **)(v40 + 16);
              v41 = *(_QWORD *)(v40 + 24);
            }
            else
            {
              v163 = (void *)1;
              v41 = 0;
            }
            v42 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "timestamp/payload/timestamp",
                    9,
                    v132);
            if ( v42 && *(_BYTE *)v42 == 3
              || (v42 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v132, "/payload/timestamp", 18),
                  v43 = v155,
                  v42)
              && (v43 = v155, *(_BYTE *)v42 == 3) )
            {
              chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5(
                v131,
                *(_QWORD *)(v42 + 16),
                *(_QWORD *)(v42 + 24));
              if ( LODWORD(v131[0]) )
              {
                v44 = (SLODWORD(v131[0]) >> 13) - 1;
                v45 = 0;
                if ( SLODWORD(v131[0]) >> 13 <= 0 )
                {
                  v46 = (1 - (SLODWORD(v131[0]) >> 13)) / 0x190u + 1;
                  v44 += 400 * v46;
                  v45 = -146097 * v46;
                }
                v43 = DWORD1(v131[0])
                    + 86400LL
                    * (((v44 / 100) >> 2)
                     + ((1461 * v44) >> 2)
                     + v45
                     + ((LODWORD(v131[0]) >> 4) & 0x1FF)
                     - v44 / 100
                     - 719163);
              }
              else
              {
                v43 = v155;
              }
            }
            v47 = v155;
            if ( v43 > v155 )
              v47 = v43;
            v155 = v47;
            if ( v41 == 9 )
            {
              v153 = v43;
              if ( *(_QWORD *)v163 ^ 0x736D5F746E657665LL | *((unsigned __int8 *)v163 + 8) ^ 0x67LL )
                goto LABEL_84;
              v52 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v132, "/payload/type", 13);
              if ( !v52 )
                goto LABEL_84;
              v21 = v162;
              if ( *(_BYTE *)v52 != 3
                || *(_QWORD *)(v52 + 24) != 11
                || **(_QWORD **)(v52 + 16) ^ 0x6F635F6E656B6F74LL
                 | *(_QWORD *)(*(_QWORD *)(v52 + 16) + 3LL) ^ 0x746E756F635F6E65LL )
              {
                goto LABEL_85;
              }
              v53 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(
                      v132,
                      "/payload/infototal_token_usageinput_tokensoutput_tokensreasoning_output_tokenstotal_tokens",
                      13);
              if ( !v53 )
                goto LABEL_84;
              v54 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "total_token_usageinput_tokensoutput_tokensreasoning_output_tokenstotal_tokens",
                      17,
                      v53);
              v55 = v54;
              if ( !v54 )
                goto LABEL_84;
              v56 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "input_tokensoutput_tokensreasoning_output_tokenstotal_tokens",
                      12,
                      v54);
              if ( !v56 || *(_BYTE *)v56 != 2 )
                goto LABEL_117;
              v57 = *(_QWORD *)(v56 + 8);
              if ( v57 )
              {
                if ( (_DWORD)v57 == 1 )
                {
                  v163 = *(void **)(v56 + 16);
                  goto LABEL_118;
                }
LABEL_117:
                v163 = nullptr;
                goto LABEL_118;
              }
              v83 = *(void **)(v56 + 16);
              if ( (__int64)v83 <= 0 )
                v83 = nullptr;
              v163 = v83;
LABEL_118:
              v74 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "output_tokensreasoning_output_tokenstotal_tokens",
                      13,
                      v55);
              if ( v74 && *(_BYTE *)v74 == 2 && (v75 = *(_QWORD *)(v74 + 8), v75 != 2) )
              {
                if ( (_DWORD)v75 == 1 )
                {
                  v157 = *(_QWORD **)(v74 + 16);
                }
                else
                {
                  v84 = *(_QWORD *)(v74 + 16);
                  if ( v84 <= 0 )
                    v84 = 0;
                  v157 = (_QWORD *)v84;
                }
              }
              else
              {
                v157 = nullptr;
              }
              v76 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "reasoning_output_tokenstotal_tokens",
                      23,
                      v55);
              if ( v76 && *(_BYTE *)v76 == 2 && (v77 = *(_QWORD *)(v76 + 8), v77 != 2) )
              {
                if ( (_DWORD)v77 == 1 )
                {
                  v159 = *(_QWORD *)(v76 + 16);
                }
                else
                {
                  v85 = *(_QWORD *)(v76 + 16);
                  if ( v85 <= 0 )
                    v85 = 0;
                  v159 = v85;
                }
              }
              else
              {
                v159 = 0;
              }
              v78 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "total_tokens",
                      12,
                      v55);
              if ( v78 && *(_BYTE *)v78 == 2 && (v79 = *(_QWORD *)(v78 + 8), v79 != 2) )
              {
                if ( (_DWORD)v79 == 1 )
                {
                  __src = *(void **)(v78 + 16);
                  v80 = *((_QWORD *)&v139 + 1);
                  if ( *((_QWORD *)&v139 + 1) == v138 )
                    goto LABEL_137;
                }
                else
                {
                  v86 = *(void **)(v78 + 16);
                  if ( (__int64)v86 <= 0 )
                    v86 = nullptr;
                  __src = v86;
                  v80 = *((_QWORD *)&v139 + 1);
                  if ( *((_QWORD *)&v139 + 1) == v138 )
LABEL_137:
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb1af0d312e7d08cb(&v138);
                }
              }
              else
              {
                __src = nullptr;
                v80 = *((_QWORD *)&v139 + 1);
                if ( *((_QWORD *)&v139 + 1) == v138 )
                  goto LABEL_137;
              }
              v81 = v139;
              v82 = 5 * v80;
              *(_QWORD *)(v139 + 8 * v82) = v153;
              *(_QWORD *)(v81 + 8 * v82 + 8) = v163;
              *(_QWORD *)(v81 + 8 * v82 + 16) = v157;
              *(_QWORD *)(v81 + 8 * v82 + 24) = v159;
              *(_QWORD *)(v81 + 8 * v82 + 32) = __src;
              *((_QWORD *)&v139 + 1) = v80 + 1;
              goto LABEL_84;
            }
            if ( v41 != 13 )
            {
              if ( v41 == 12 )
                v152 += (*(_QWORD *)v163 ^ 0x6E6F635F6E727574LL | *((unsigned int *)v163 + 2) ^ 0x74786574LL) == 0;
              goto LABEL_84;
            }
            v153 = v43;
            v21 = v162;
            if ( *(_QWORD *)v163 ^ 0x65736E6F70736572LL | *(_QWORD *)((char *)v163 + 5) ^ 0x6D6574695F65736ELL )
              goto LABEL_85;
            v48 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                            "payload",
                            7,
                            v132);
            if ( !v48 )
              v48 = &unk_10167CA58;
            v49 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "typefullargsopenwithkindsavetrueuuidemitshowhide",
                    4,
                    v48);
            if ( !v49 )
              goto LABEL_84;
            v163 = v48;
            v21 = v162;
            if ( *(_BYTE *)v49 != 3 )
              goto LABEL_85;
            v50 = *(_QWORD *)(v49 + 16);
            v51 = *(_QWORD *)(v49 + 24);
            if ( v51 == 16 )
            {
              v63 = _mm_xor_si128(
                      _mm_loadu_si128((const __m128i *)v50),
                      *(__m128i *)"custom_tool_calltool_search_output");
              if ( _mm_testz_si128(v63, v63) )
                goto LABEL_104;
              goto LABEL_85;
            }
            if ( v51 == 15 )
            {
              if ( *(_QWORD *)v50 ^ 0x726165735F626577LL | *(_QWORD *)(v50 + 7) ^ 0x6C6C61635F686372LL )
                goto LABEL_85;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                "typefullargsopenwithkindsavetrueuuidemitshowhide",
                4);
              v163 = (void *)10;
              v58 = 1;
              v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
              if ( v59 )
              {
                qmemcpy(v59, "web_search", 10);
                v163 = v59;
                v60 = v151;
                if ( v151 == (_QWORD)v150 )
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v150);
                v61 = *((_QWORD *)&v150 + 1);
                v62 = 32 * v60;
                *(_QWORD *)(*((_QWORD *)&v150 + 1) + v62) = 10;
                *(_QWORD *)(v61 + v62 + 8) = v163;
                *(_QWORD *)(v61 + v62 + 16) = 10;
                *(_QWORD *)(v61 + v62 + 24) = v153;
                v151 = v60 + 1;
LABEL_84:
                v21 = v162;
                goto LABEL_85;
              }
LABEL_234:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v58, v163);
            }
            if ( v51 != 13 || *(_QWORD *)v50 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v50 + 5) ^ 0x6C6C61635F6E6F69LL )
              goto LABEL_85;
LABEL_104:
            v64 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &unk_1015FB9C8,
                    4,
                    v163);
            v65 = 7;
            if ( v64 )
            {
              v66 = "unknownaccount-removal-quarantine";
              if ( *(_BYTE *)v64 == 3 )
              {
                v66 = *(char **)(v64 + 16);
                v65 = *(_QWORD *)(v64 + 24);
              }
            }
            else
            {
              v66 = "unknownaccount-removal-quarantine";
            }
            __src = v66;
            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v131, v65, 0, 1, 1);
            v159 = *((_QWORD *)&v131[0] + 1);
            if ( LODWORD(v131[0]) == 1 )
            {
              v163 = *(void **)&v131[1];
              v58 = v159;
              goto LABEL_234;
            }
            v157 = *(_QWORD **)&v131[1];
            memcpy(*(void **)&v131[1], __src, v65);
            *(_QWORD *)&v134 = v159;
            *((_QWORD *)&v134 + 1) = v157;
            __src = (void *)v65;
            *(_QWORD *)&v135 = v65;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v131, &v134);
            v160 = *((_QWORD *)&v131[0] + 1);
            v158 = *(_QWORD *)&v131[0];
            v154 = *(_QWORD *)&v131[1];
            v67 = v151;
            if ( v151 == (_QWORD)v150 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v150);
            v68 = *((_QWORD *)&v150 + 1);
            v69 = 32 * v67;
            *(_QWORD *)(*((_QWORD *)&v150 + 1) + v69) = v158;
            *(_QWORD *)(v68 + v69 + 8) = v160;
            *(_QWORD *)(v68 + v69 + 16) = v154;
            *(_QWORD *)(v68 + v69 + 24) = v153;
            v151 = v67 + 1;
            if ( __src != (void *)11 )
              goto LABEL_210;
            v21 = v162;
            if ( !(*v157 ^ 0x61705F796C707061LL | *(_QWORD *)((char *)v157 + 3) ^ 0x68637461705F796CLL) )
            {
              v70 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "argumentsinputpatchcontent*** Begin Patch",
                      9,
                      v163);
              if ( !v70 || *(_BYTE *)v70 != 3 )
                goto LABEL_210;
              v72 = *(void **)(v70 + 24);
              *(_QWORD *)&v131[0] = *(_QWORD *)(v70 + 16);
              v71 = *(void **)&v131[0];
              *((_QWORD *)&v131[0] + 1) = v72;
              v131[1] = 0u;
              *(_QWORD *)&v131[2] = *(_QWORD *)&v131[0];
              v163 = v72;
              *((_QWORD *)&v131[2] + 1) = v72;
              serde_json::de::from_trait::h51e180b4bb6af5e0(&v140, v131);
              if ( (_BYTE)v140 == 6 )
              {
                LOBYTE(v131[0]) = 6;
                core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(&v140);
                v73 = 6;
                goto LABEL_161;
              }
              v131[1] = v141;
              v131[0] = v140;
              v160 = v140;
              v87 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "inputpatchcontent*** Begin Patch",
                      5,
                      v131);
              if ( v87 && *(_BYTE *)v87 == 3
                || (v87 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                            "patchcontent*** Begin Patch",
                            5,
                            v131)) != 0
                && *(_BYTE *)v87 == 3
                || (v88 = 7,
                    (v87 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                             "content*** Begin Patch",
                             7,
                             v131)) != 0)
                && *(_BYTE *)v87 == 3 )
              {
                v89 = *(void **)(v87 + 16);
                v88 = *(_QWORD *)(v87 + 24);
              }
              else
              {
                v89 = nullptr;
              }
              v73 = v160;
              if ( v89 )
              {
LABEL_162:
                v163 = v89;
                alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v140, v88, 0, 1, 1);
                v158 = *((_QWORD *)&v140 + 1);
                if ( (_BYTE)v140 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v158, v141);
                v162 = v141;
                memcpy((void *)v141, v163, v88);
                v91 = v131[0];
                v156 = (char *)v88;
              }
              else
              {
LABEL_161:
                LOBYTE(__src) = v73;
                v90 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                        "*** Begin Patch",
                        0xFu,
                        v71);
                v91 = (char)__src;
                v160 = (unsigned __int8)__src;
                v89 = v71;
                v88 = (size_t)v163;
                v158 = 0x8000000000000000LL;
                if ( v90 )
                  goto LABEL_162;
              }
              if ( v91 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v131);
              if ( v158 == 0x8000000000000000LL )
                goto LABEL_210;
              v160 = 0;
              LODWORD(v154) = 0;
              v92 = nullptr;
              v93 = nullptr;
              while ( 2 )
              {
                __src = v92;
                if ( v156 >= v93 )
                {
                  v94 = v156;
                  v95 = v93;
                  while ( 1 )
                  {
                    v96 = v94 - v95;
                    v163 = v95;
                    v97 = &v95[v162];
                    if ( v96 >= 0x10 )
                    {
                      v99 = core::slice::memchr::memchr_aligned::hda948616f04379f9(10, v97, v96);
                    }
                    else
                    {
                      v98 = 0;
                      if ( v96 )
                      {
                        while ( v97[v98] != 10 )
                        {
                          if ( v96 == ++v98 )
                          {
                            v98 = v96;
                            goto LABEL_179;
                          }
                        }
                        v99 = 1;
                      }
                      else
                      {
LABEL_179:
                        v99 = 0;
                      }
                    }
                    if ( (v99 & 1) == 0 )
                      break;
                    v92 = (char *)v163 + v98 + 1;
                    if ( (char *)v163 + v98 < v156 && v97[v98] == 10 )
                    {
                      v100 = 0;
                      v93 = (char *)v163 + v98 + 1;
                      v101 = v93;
                      v102 = (char *)__src;
                      goto LABEL_188;
                    }
                    v95 = (char *)v163 + v98 + 1;
                    v94 = v156;
                    if ( v92 > v156 )
                      goto LABEL_187;
                  }
                  v94 = v156;
                  v92 = v156;
                }
                else
                {
                  v92 = v93;
                  v94 = v156;
                }
LABEL_187:
                v100 = 1;
                v93 = v92;
                v102 = (char *)__src;
                v92 = (char *)__src;
                v101 = v94;
                if ( v94 == __src )
                {
LABEL_203:
                  if ( (int)v160 > 0 || (int)v154 > 0 )
                  {
                    v105 = *((_QWORD *)&v137 + 1);
                    if ( *((_QWORD *)&v137 + 1) == v136 )
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he93ed8c161a227be(&v136);
                    v106 = v137;
                    v107 = 16 * v105;
                    *(_QWORD *)(v137 + v107) = v153;
                    *(_DWORD *)(v106 + v107 + 8) = v160;
                    *(_DWORD *)(v106 + v107 + 12) = v154;
                    *((_QWORD *)&v137 + 1) = v105 + 1;
                  }
                  if ( v158 )
                  {
                    v21 = v162;
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v158, 1);
                    break;
                  }
LABEL_210:
                  v21 = v162;
                  break;
                }
LABEL_188:
                v103 = &v102[v162];
                v104 = v101 - v102;
                if ( v101 != v102 && v101[v162 - 1] == 10 )
                {
                  if ( v104 == 1 )
                  {
                    v104 = 0;
                  }
                  else if ( v101[v162 - 2] == 13 )
                  {
                    v104 -= 2LL;
                  }
                  else
                  {
                    --v104;
                  }
                }
                if ( v104 < 3 )
                {
                  if ( v104 )
                    goto LABEL_200;
                }
                else if ( *(_WORD *)v103 ^ 0x2B2B | (unsigned __int8)v103[2] ^ 0x2B
                       && *(_WORD *)v103 ^ 0x2D2D | (unsigned __int8)v103[2] ^ 0x2D )
                {
LABEL_200:
                  if ( *v103 == 43 )
                    v160 = (unsigned int)(v160 + 1);
                  else
                    LODWORD(v154) = (*v103 == 45) + (_DWORD)v154;
                }
                if ( v100 )
                  goto LABEL_203;
                continue;
              }
            }
            if ( v159 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v159, 1);
LABEL_85:
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v132);
            if ( v23 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1);
            goto LABEL_25;
          }
          v34 = *((_QWORD *)&v134 + 1);
          if ( **((_QWORD **)&v134 + 1) == 1 )
          {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(
              *((_QWORD *)&v134 + 1) + 8LL,
              v33,
              v27,
              v28,
              v29);
          }
          else if ( !**((_QWORD **)&v134 + 1) )
          {
            v35 = *(_QWORD *)(*((_QWORD *)&v134 + 1) + 16LL);
            if ( v35 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(*((_QWORD *)&v134 + 1) + 8LL), v35, 1);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 40, 8);
        }
        if ( v23 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1);
      }
    }
    if ( *((_QWORD *)&v142 + 1) )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, *((_QWORD *)&v142 + 1), 1);
    close_NOCANCEL(v146);
    v108 = v155;
    v109 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076((unsigned __int64 *)&v142, v155);
    v131[2] = v139;
    *((_QWORD *)&v131[1] + 1) = v138;
    *(_QWORD *)&v131[4] = v151;
    v131[3] = v150;
    v131[5] = v137;
    *((_QWORD *)&v131[4] + 1) = v136;
    v131[0] = v142;
    *(_QWORD *)&v131[1] = v143;
    qmemcpy(v121, v131, 0x60u);
    v121[12] = v108;
    LODWORD(v121[13]) = v152;
    if ( v121[0] == 0x8000000000000000LL )
      goto LABEL_20;
    if ( v121[12] >= v128 )
    {
      v110 = v149;
      if ( v149 == v147 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::ha12118a19a989fe2(&v147, v109);
      qmemcpy((void *)(v148 + 112 * v110), v121, 0x70u);
      v149 = v110 + 1;
    }
    else
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..session_analytics..SessionData$GT$::h7c18df4ecb005bc6(v121, v109);
    }
LABEL_21:
    v17 = v126 + 4;
  }
  while ( v126 + 4 != (_QWORD *)v127 );
  v111 = v130;
  v112 = v133;
  v133[3] = v149;
  v113 = v147;
  v112[2] = v148;
  v112[1] = v113;
  *v112 = 11;
  if ( v111 )
  {
    v114 = *((_QWORD *)&v129 + 1);
    v115 = (_QWORD *)(*((_QWORD *)&v129 + 1) + 8LL);
    do
    {
      v116 = *(v115 - 1);
      if ( v116 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v115, v116, 1);
      v115 += 4;
      --v111;
    }
    while ( v111 );
LABEL_227:
    v119 = v129;
    if ( (_QWORD)v129 )
LABEL_228:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, 32 * v119, 8);
  }
  else
  {
    v114 = *((_QWORD *)&v129 + 1);
    v119 = v129;
    if ( (_QWORD)v129 )
      goto LABEL_228;
  }
}
