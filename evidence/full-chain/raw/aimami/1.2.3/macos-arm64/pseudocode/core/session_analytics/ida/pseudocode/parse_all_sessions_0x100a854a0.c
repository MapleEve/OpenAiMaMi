// __ZN13codexmate_lib4core17session_analytics18parse_all_sessions @ 0x100a854a0 | 基线 same-set
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

  v133 = a1; /*0x100a854b7*/
  v128 = codexmate_lib::core::session_analytics::range_to_cutoff::hbe9b944a87b55264(a3, a4); /*0x100a854c9*/
  *(_QWORD *)&v142 = 0; /*0x100a854d0*/
  *((_QWORD *)&v142 + 1) = 8; /*0x100a854db*/
  v143 = 0; /*0x100a854e6*/
  v5 = a2[16]; /*0x100a854f1*/
  v6 = a2[17]; /*0x100a854f8*/
  std::sys::fs::metadata::h32fa16d3052ea535(v131, a2[16], a2[17]); /*0x100a8550c*/
  if ( LOBYTE(v131[0]) ) /*0x100a85518*/
  {
    if ( (BYTE8(v131[0]) & 3) == 1 ) /*0x100a85529*/
    {
      v7 = *((_QWORD *)&v131[0] + 1) - 1LL; /*0x100a8552b*/
      v8 = *(_QWORD *)(*((_QWORD *)&v131[0] + 1) - 1LL); /*0x100a8552f*/
      v9 = *(_QWORD *)(*((_QWORD *)&v131[0] + 1) + 7LL); /*0x100a85533*/
      if ( *(_QWORD *)v9 ) /*0x100a85537*/
        (*(void (__fastcall **)(__int64))v9)(v8); /*0x100a85543*/
      v10 = *(_QWORD *)(v9 + 8); /*0x100a85545*/
      if ( v10 ) /*0x100a8554d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x100a85557*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24, 8); /*0x100a85569*/
    }
  }
  else
  {
    codexmate_lib::core::session_analytics::visit_dir::hb67ededd4101d90b(v5, v6, &v142); /*0x100a8557d*/
  }
  v11 = a2[19]; /*0x100a85582*/
  v12 = a2[20]; /*0x100a85589*/
  std::sys::fs::metadata::h32fa16d3052ea535(v131, v11, v12); /*0x100a8559d*/
  if ( LODWORD(v131[0]) == 1 ) /*0x100a855a9*/
  {
    if ( (BYTE8(v131[0]) & 3) == 1 ) /*0x100a855ba*/
    {
      v13 = *((_QWORD *)&v131[0] + 1) - 1LL; /*0x100a855bc*/
      v14 = *(_QWORD *)(*((_QWORD *)&v131[0] + 1) - 1LL); /*0x100a855c0*/
      v15 = *(_QWORD *)(*((_QWORD *)&v131[0] + 1) + 7LL); /*0x100a855c4*/
      if ( *(_QWORD *)v15 ) /*0x100a855c8*/
        (*(void (__fastcall **)(__int64))v15)(v14); /*0x100a855d4*/
      v16 = *(_QWORD *)(v15 + 8); /*0x100a855d6*/
      if ( v16 ) /*0x100a855de*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x100a855e8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x100a855fa*/
    }
  }
  else
  {
    codexmate_lib::core::session_analytics::visit_dir::hb67ededd4101d90b(v11, v12, &v142); /*0x100a8560e*/
  }
  v130 = v143; /*0x100a8561a*/
  v17 = *((_QWORD **)&v142 + 1); /*0x100a85628*/
  v129 = v142; /*0x100a85636*/
  v147 = 0; /*0x100a8563d*/
  v148 = 8; /*0x100a85648*/
  v149 = 0; /*0x100a85653*/
  if ( !v143 ) /*0x100a85661*/
  {
    v114 = *((_QWORD *)&v142 + 1); /*0x100a868c1*/
    v117 = v133; /*0x100a868cb*/
    v133[3] = v149; /*0x100a868d2*/
    v118 = v147; /*0x100a868d6*/
    v117[2] = v148; /*0x100a868e4*/
    v117[1] = v118; /*0x100a868e8*/
    *v117 = 11; /*0x100a868ec*/
    goto LABEL_227; /*0x100a868ec*/
  }
  v127 = *((_QWORD *)&v142 + 1) + 32 * v143; /*0x100a8566e*/
  v125 = 0x8000000000000001LL; /*0x100a85689*/
  v18 = 0x100002600LL; /*0x100a85690*/
  do /*0x100a856e8*/
  {
    v19 = v17[1]; /*0x100a856ee*/
    v20 = v17[2]; /*0x100a856f2*/
    v126 = v17; /*0x100a856f6*/
    v155 = v17[3]; /*0x100a85701*/
    LODWORD(v142) = 0; /*0x100a85705*/
    WORD2(v142) = 438; /*0x100a8570f*/
    WORD5(v142) = 0; /*0x100a8571f*/
    *(_DWORD *)((char *)&v142 + 6) = 1; /*0x100a85725*/
    std::fs::OpenOptions::_open::h1dad73452047b8aa(v131, &v142, v19, v20); /*0x100a8573c*/
    if ( LODWORD(v131[0]) == 1 ) /*0x100a85748*/
    {
      v121[1] = 2; /*0x100a856a7*/
      v121[2] = *((_QWORD *)&v131[0] + 1); /*0x100a856b2*/
      v121[0] = 0x8000000000000000LL; /*0x100a856c3*/
LABEL_20:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v121[1]); /*0x100a856ca*/
      goto LABEL_21; /*0x100a856d1*/
    }
    v21 = DWORD1(v131[0]); /*0x100a8574e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v131, &v142); /*0x100a85755*/
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1); /*0x100a85764*/
    if ( !v22 ) /*0x100a8576c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000); /*0x100a8693d*/
    v145 = 0; /*0x100a85779*/
    v144 = 0; /*0x100a85781*/
    v143 = 0; /*0x100a85789*/
    v138 = 0; /*0x100a85791*/
    v139 = 8u; /*0x100a8579c*/
    *(_QWORD *)&v150 = 0; /*0x100a857b2*/
    *((_QWORD *)&v150 + 1) = 8; /*0x100a857bd*/
    v151 = 0; /*0x100a857c8*/
    v136 = 0; /*0x100a857d3*/
    v137 = 8u; /*0x100a857de*/
    *(_QWORD *)&v142 = v22; /*0x100a857f4*/
    *((_QWORD *)&v142 + 1) = 0x2000; /*0x100a857fb*/
    v146 = v21; /*0x100a85806*/
    v152 = 0; /*0x100a8580d*/
LABEL_25:
    v162 = v21; /*0x100a85817*/
    while ( 1 ) /*0x100a8583d*/
    {
      _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3e6b44ac088bb82( /*0x100a8583d*/
        &v122,
        &v142);
      v23 = v122; /*0x100a85842*/
      if ( v122 == v125 ) /*0x100a85850*/
        break; /*0x100a85850*/
      v24 = v123; /*0x100a85856*/
      if ( v122 == 0x8000000000000000LL ) /*0x100a8586a*/
      {
        if ( (v123 & 3) == 1 ) /*0x100a85829*/
        {
          v36 = v123 - 1; /*0x100a859e5*/
          v37 = *(_QWORD *)(v123 - 1); /*0x100a859ea*/
          v38 = *(_QWORD *)(v123 + 7); /*0x100a859ef*/
          if ( *(_QWORD *)v38 ) /*0x100a859f4*/
            (*(void (__fastcall **)(__int64))v38)(v37); /*0x100a85a00*/
          v39 = *(_QWORD *)(v38 + 8); /*0x100a85a02*/
          if ( v39 ) /*0x100a85a0a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v39, *(_QWORD *)(v38 + 16)); /*0x100a85a14*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24, 8); /*0x100a85a26*/
        }
      }
      else
      {
        v25 = v124; /*0x100a8586c*/
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v123, v124); /*0x100a85879*/
        if ( v26 ) /*0x100a85881*/
        {
          *(_QWORD *)&v131[3] = 0; /*0x100a8588e*/
          *((_QWORD *)&v131[1] + 1) = v24; /*0x100a8589e*/
          v131[2] = v25; /*0x100a858a5*/
          *((_QWORD *)&v131[3] + 1) = v24; /*0x100a858ac*/
          *(_QWORD *)&v131[4] = v25; /*0x100a858b3*/
          *(_QWORD *)&v131[0] = 0; /*0x100a858ba*/
          *((_QWORD *)&v131[0] + 1) = 1; /*0x100a858c5*/
          *(_QWORD *)&v131[1] = 0; /*0x100a858d0*/
          BYTE8(v131[4]) = 0x80; /*0x100a858db*/
          serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$serde_json..value..Value$GT$::deserialize::h60091f386f4dbfee( /*0x100a858ec*/
            &v134,
            v131);
          v30 = 1; /*0x100a858f1*/
          if ( (_BYTE)v134 != 6 ) /*0x100a858fb*/
          {
            v141 = v135; /*0x100a85916*/
            v140 = v134; /*0x100a85932*/
            v28 = *((_QWORD *)&v131[2] + 1); /*0x100a85940*/
            if ( *((_QWORD *)&v131[2] + 1) >= *(_QWORD *)&v131[2] ) /*0x100a8594a*/
            {
LABEL_36:
              v30 = 0; /*0x100a8598e*/
            }
            else
            {
              v27 = *((_QWORD *)&v131[1] + 1); /*0x100a8594c*/
              v28 = *((_QWORD *)&v131[2] + 1) + 1LL; /*0x100a85956*/
              while ( 1 ) /*0x100a85960*/
              {
                v31 = *(unsigned __int8 *)(*((_QWORD *)&v131[1] + 1) + v28 - 1); /*0x100a85960*/
                if ( v31 > 0x20 || !_bittest64(&v18, v31) ) /*0x100a8596f*/
                  break; /*0x100a8596f*/
                *((_QWORD *)&v131[2] + 1) = v28; /*0x100a85979*/
                v32 = v28 - *(_QWORD *)&v131[2] + 1; /*0x100a85980*/
                ++v28; /*0x100a85985*/
                if ( v32 == 1 ) /*0x100a8598c*/
                  goto LABEL_36; /*0x100a8598c*/
              }
              v120[0] = 22; /*0x100a85a69*/
              *((_QWORD *)&v134 + 1) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v131, v120); /*0x100a85a83*/
              LOBYTE(v134) = 6; /*0x100a85a8a*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a85a98*/
            }
          }
          v33 = *(_QWORD *)&v131[0]; /*0x100a85991*/
          if ( *(_QWORD *)&v131[0] ) /*0x100a8599b*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v131[0] + 1), *(_QWORD *)&v131[0], 1); /*0x100a859a9*/
          if ( !v30 ) /*0x100a859b1*/
          {
            v132[1] = v135; /*0x100a85ac5*/
            v132[0] = v134; /*0x100a85ae1*/
            v40 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a85afb*/
                    "typefullargsopenwithkindsavetrueuuidemitshowhide",
                    4,
                    v132);
            if ( v40 && *(_BYTE *)v40 == 3 ) /*0x100a85b08*/
            {
              v163 = *(void **)(v40 + 16); /*0x100a85b0e*/
              v41 = *(_QWORD *)(v40 + 24); /*0x100a85b12*/
            }
            else
            {
              v163 = (void *)1; /*0x100a85b1d*/
              v41 = 0; /*0x100a85b21*/
            }
            v42 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a85b37*/
                    "timestamp/payload/timestamp",
                    9,
                    v132);
            if ( v42 && *(_BYTE *)v42 == 3 /*0x100a85b72*/
              || (v42 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v132, "/payload/timestamp", 18),
                  v43 = v155,
                  v42)
              && (v43 = v155, *(_BYTE *)v42 == 3) )
            {
              chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5( /*0x100a85b83*/
                v131,
                *(_QWORD *)(v42 + 16),
                *(_QWORD *)(v42 + 24));
              if ( LODWORD(v131[0]) ) /*0x100a85b90*/
              {
                v44 = (SLODWORD(v131[0]) >> 13) - 1; /*0x100a85b9b*/
                v45 = 0; /*0x100a85b9e*/
                if ( SLODWORD(v131[0]) >> 13 <= 0 ) /*0x100a85ba2*/
                {
                  v46 = (1 - (SLODWORD(v131[0]) >> 13)) / 0x190u + 1; /*0x100a85bb6*/
                  v44 += 400 * v46; /*0x100a85bbe*/
                  v45 = -146097 * v46; /*0x100a85bc0*/
                }
                v43 = DWORD1(v131[0]) /*0x100a85c11*/
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
                v43 = v155; /*0x100a85c16*/
              }
            }
            v47 = v155; /*0x100a85c20*/
            if ( v43 > v155 ) /*0x100a85c27*/
              v47 = v43; /*0x100a85c27*/
            v155 = v47; /*0x100a85c2f*/
            if ( v41 == 9 ) /*0x100a85c33*/
            {
              v153 = v43; /*0x100a85d54*/
              if ( *(_QWORD *)v163 ^ 0x736D5F746E657665LL | *((unsigned __int8 *)v163 + 8) ^ 0x67LL ) /*0x100a85d74*/
                goto LABEL_84; /*0x100a85d74*/
              v52 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v132, "/payload/type", 13); /*0x100a85dba*/
              if ( !v52 ) /*0x100a85dc2*/
                goto LABEL_84; /*0x100a85dc2*/
              v21 = v162; /*0x100a85dc7*/
              if ( *(_BYTE *)v52 != 3 /*0x100a85df9*/
                || *(_QWORD *)(v52 + 24) != 11
                || **(_QWORD **)(v52 + 16) ^ 0x6F635F6E656B6F74LL
                 | *(_QWORD *)(*(_QWORD *)(v52 + 16) + 3LL) ^ 0x746E756F635F6E65LL )
              {
                goto LABEL_85; /*0x100a85dfc*/
              }
              v53 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x100a85e15*/
                      v132,
                      "/payload/infototal_token_usageinput_tokensoutput_tokensreasoning_output_tokenstotal_tokens",
                      13);
              if ( !v53 ) /*0x100a85e1d*/
                goto LABEL_84; /*0x100a85e1d*/
              v54 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a85e32*/
                      "total_token_usageinput_tokensoutput_tokensreasoning_output_tokenstotal_tokens",
                      17,
                      v53);
              v55 = v54; /*0x100a85e37*/
              if ( !v54 ) /*0x100a85e3d*/
                goto LABEL_84; /*0x100a85e3d*/
              v56 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a85e52*/
                      "input_tokensoutput_tokensreasoning_output_tokenstotal_tokens",
                      12,
                      v54);
              if ( !v56 || *(_BYTE *)v56 != 2 ) /*0x100a85e63*/
                goto LABEL_117; /*0x100a85e63*/
              v57 = *(_QWORD *)(v56 + 8); /*0x100a85e69*/
              if ( v57 ) /*0x100a85e70*/
              {
                if ( (_DWORD)v57 == 1 ) /*0x100a85e79*/
                {
                  v163 = *(void **)(v56 + 16); /*0x100a85e83*/
                  goto LABEL_118; /*0x100a85e87*/
                }
LABEL_117:
                v163 = nullptr; /*0x100a8617b*/
                goto LABEL_118; /*0x100a8617b*/
              }
              v83 = *(void **)(v56 + 16); /*0x100a862be*/
              if ( (__int64)v83 <= 0 ) /*0x100a862ca*/
                v83 = nullptr; /*0x100a862ca*/
              v163 = v83; /*0x100a862ce*/
LABEL_118:
              v74 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a86183*/
                      "output_tokensreasoning_output_tokenstotal_tokens",
                      13,
                      v55);
              if ( v74 && *(_BYTE *)v74 == 2 && (v75 = *(_QWORD *)(v74 + 8), v75 != 2) ) /*0x100a861a9*/
              {
                if ( (_DWORD)v75 == 1 ) /*0x100a861ae*/
                {
                  v157 = *(_QWORD **)(v74 + 16); /*0x100a861b8*/
                }
                else
                {
                  v84 = *(_QWORD *)(v74 + 16); /*0x100a862d7*/
                  if ( v84 <= 0 ) /*0x100a862e3*/
                    v84 = 0; /*0x100a862e3*/
                  v157 = (_QWORD *)v84; /*0x100a862e7*/
                }
              }
              else
              {
                v157 = nullptr; /*0x100a861be*/
              }
              v76 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a861d5*/
                      "reasoning_output_tokenstotal_tokens",
                      23,
                      v55);
              if ( v76 && *(_BYTE *)v76 == 2 && (v77 = *(_QWORD *)(v76 + 8), v77 != 2) ) /*0x100a861ec*/
              {
                if ( (_DWORD)v77 == 1 ) /*0x100a861f1*/
                {
                  v159 = *(_QWORD *)(v76 + 16); /*0x100a861fb*/
                }
                else
                {
                  v85 = *(_QWORD *)(v76 + 16); /*0x100a862f0*/
                  if ( v85 <= 0 ) /*0x100a862fc*/
                    v85 = 0; /*0x100a862fc*/
                  v159 = v85; /*0x100a86300*/
                }
              }
              else
              {
                v159 = 0; /*0x100a86201*/
              }
              v78 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a86218*/
                      "total_tokens",
                      12,
                      v55);
              if ( v78 && *(_BYTE *)v78 == 2 && (v79 = *(_QWORD *)(v78 + 8), v79 != 2) ) /*0x100a8622f*/
              {
                if ( (_DWORD)v79 == 1 ) /*0x100a86234*/
                {
                  __src = *(void **)(v78 + 16); /*0x100a8623e*/
                  v80 = *((_QWORD *)&v139 + 1); /*0x100a86242*/
                  if ( *((_QWORD *)&v139 + 1) == v138 ) /*0x100a86250*/
                    goto LABEL_137; /*0x100a86250*/
                }
                else
                {
                  v86 = *(void **)(v78 + 16); /*0x100a86309*/
                  if ( (__int64)v86 <= 0 ) /*0x100a86315*/
                    v86 = nullptr; /*0x100a86315*/
                  __src = v86; /*0x100a86319*/
                  v80 = *((_QWORD *)&v139 + 1); /*0x100a8631d*/
                  if ( *((_QWORD *)&v139 + 1) == v138 ) /*0x100a8632b*/
LABEL_137:
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb1af0d312e7d08cb(&v138); /*0x100a8626c*/
                }
              }
              else
              {
                __src = nullptr; /*0x100a86254*/
                v80 = *((_QWORD *)&v139 + 1); /*0x100a8625c*/
                if ( *((_QWORD *)&v139 + 1) == v138 ) /*0x100a8626a*/
                  goto LABEL_137; /*0x100a8626a*/
              }
              v81 = v139; /*0x100a86278*/
              v82 = 5 * v80; /*0x100a8627f*/
              *(_QWORD *)(v139 + 8 * v82) = v153; /*0x100a86287*/
              *(_QWORD *)(v81 + 8 * v82 + 8) = v163; /*0x100a8628f*/
              *(_QWORD *)(v81 + 8 * v82 + 16) = v157; /*0x100a86298*/
              *(_QWORD *)(v81 + 8 * v82 + 24) = v159; /*0x100a862a1*/
              *(_QWORD *)(v81 + 8 * v82 + 32) = __src; /*0x100a862aa*/
              *((_QWORD *)&v139 + 1) = v80 + 1; /*0x100a862b2*/
              goto LABEL_84; /*0x100a862b9*/
            }
            if ( v41 != 13 ) /*0x100a85c3d*/
            {
              if ( v41 == 12 ) /*0x100a85c43*/
                v152 += (*(_QWORD *)v163 ^ 0x6E6F635F6E727574LL | *((unsigned int *)v163 + 2) ^ 0x74786574LL) == 0; /*0x100a85c6f*/
              goto LABEL_84; /*0x100a85c75*/
            }
            v153 = v43; /*0x100a85c7a*/
            v21 = v162; /*0x100a85ca6*/
            if ( *(_QWORD *)v163 ^ 0x65736E6F70736572LL | *(_QWORD *)((char *)v163 + 5) ^ 0x6D6574695F65736ELL ) /*0x100a85ca3*/
              goto LABEL_85; /*0x100a85caa*/
            v48 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a85cc8*/
                            "payload",
                            7,
                            v132);
            if ( !v48 ) /*0x100a85cd5*/
              v48 = &unk_10167CA58; /*0x100a85cd5*/
            v49 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a85ce8*/
                    "typefullargsopenwithkindsavetrueuuidemitshowhide",
                    4,
                    v48);
            if ( !v49 ) /*0x100a85cf0*/
              goto LABEL_84; /*0x100a85cf0*/
            v163 = v48; /*0x100a85cf6*/
            v21 = v162; /*0x100a85cfd*/
            if ( *(_BYTE *)v49 != 3 ) /*0x100a85d01*/
              goto LABEL_85; /*0x100a85d01*/
            v50 = *(_QWORD *)(v49 + 16); /*0x100a85d03*/
            v51 = *(_QWORD *)(v49 + 24); /*0x100a85d07*/
            if ( v51 == 16 ) /*0x100a85d0f*/
            {
              v63 = _mm_xor_si128( /*0x100a85f5c*/
                      _mm_loadu_si128((const __m128i *)v50),
                      *(__m128i *)"custom_tool_calltool_search_output");
              if ( _mm_testz_si128(v63, v63) ) /*0x100a85f64*/
                goto LABEL_104; /*0x100a85f69*/
              goto LABEL_85; /*0x100a85f69*/
            }
            if ( v51 == 15 ) /*0x100a85d19*/
            {
              if ( *(_QWORD *)v50 ^ 0x726165735F626577LL | *(_QWORD *)(v50 + 7) ^ 0x6C6C61635F686372LL ) /*0x100a85ead*/
                goto LABEL_85; /*0x100a85eb0*/
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100a85eb6*/
                "typefullargsopenwithkindsavetrueuuidemitshowhide",
                4);
              v163 = (void *)10; /*0x100a85ec0*/
              v58 = 1; /*0x100a85ec4*/
              v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100a85ed4*/
              if ( v59 ) /*0x100a85edc*/
              {
                qmemcpy(v59, "web_search", 10); /*0x100a85eef*/
                v163 = v59; /*0x100a85ef2*/
                v60 = v151; /*0x100a85efc*/
                if ( v151 == (_QWORD)v150 ) /*0x100a85f0a*/
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v150); /*0x100a85f13*/
                v61 = *((_QWORD *)&v150 + 1); /*0x100a85f18*/
                v62 = 32 * v60; /*0x100a85f22*/
                *(_QWORD *)(*((_QWORD *)&v150 + 1) + v62) = 10; /*0x100a85f26*/
                *(_QWORD *)(v61 + v62 + 8) = v163; /*0x100a85f32*/
                *(_QWORD *)(v61 + v62 + 16) = 10; /*0x100a85f37*/
                *(_QWORD *)(v61 + v62 + 24) = v153; /*0x100a85f44*/
                v151 = v60 + 1; /*0x100a85f4c*/
LABEL_84:
                v21 = v162; /*0x100a85d79*/
                goto LABEL_85; /*0x100a85d79*/
              }
LABEL_234:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v58, v163); /*0x100a86953*/
            }
            if ( v51 != 13 || *(_QWORD *)v50 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v50 + 5) ^ 0x6C6C61635F6E6F69LL ) /*0x100a85d4a*/
              goto LABEL_85; /*0x100a85d4d*/
LABEL_104:
            v64 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a85f6f*/
                    &unk_1015FB9C8,
                    4,
                    v163);
            v65 = 7; /*0x100a85f84*/
            if ( v64 ) /*0x100a85f8d*/
            {
              v66 = "unknownaccount-removal-quarantine"; /*0x100a85f92*/
              if ( *(_BYTE *)v64 == 3 ) /*0x100a85f99*/
              {
                v66 = *(char **)(v64 + 16); /*0x100a85f9b*/
                v65 = *(_QWORD *)(v64 + 24); /*0x100a85f9f*/
              }
            }
            else
            {
              v66 = "unknownaccount-removal-quarantine"; /*0x100a85fa5*/
            }
            __src = v66; /*0x100a85fac*/
            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v131, v65, 0, 1, 1); /*0x100a85fc3*/
            v159 = *((_QWORD *)&v131[0] + 1); /*0x100a85fcf*/
            if ( LODWORD(v131[0]) == 1 ) /*0x100a85fda*/
            {
              v163 = *(void **)&v131[1]; /*0x100a8694b*/
              v58 = v159; /*0x100a8694f*/
              goto LABEL_234; /*0x100a8694f*/
            }
            v157 = *(_QWORD **)&v131[1]; /*0x100a85fe7*/
            memcpy(*(void **)&v131[1], __src, v65); /*0x100a85ff2*/
            *(_QWORD *)&v134 = v159; /*0x100a85ffb*/
            *((_QWORD *)&v134 + 1) = v157; /*0x100a86006*/
            __src = (void *)v65; /*0x100a8600d*/
            *(_QWORD *)&v135 = v65; /*0x100a86011*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v131, &v134); /*0x100a86026*/
            v160 = *((_QWORD *)&v131[0] + 1); /*0x100a8603d*/
            v158 = *(_QWORD *)&v131[0]; /*0x100a8603d*/
            v154 = *(_QWORD *)&v131[1]; /*0x100a86048*/
            v67 = v151; /*0x100a8604c*/
            if ( v151 == (_QWORD)v150 ) /*0x100a8605a*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v150); /*0x100a86063*/
            v68 = *((_QWORD *)&v150 + 1); /*0x100a86068*/
            v69 = 32 * v67; /*0x100a86072*/
            *(_QWORD *)(*((_QWORD *)&v150 + 1) + v69) = v158; /*0x100a8607a*/
            *(_QWORD *)(v68 + v69 + 8) = v160; /*0x100a86082*/
            *(_QWORD *)(v68 + v69 + 16) = v154; /*0x100a8608b*/
            *(_QWORD *)(v68 + v69 + 24) = v153; /*0x100a86094*/
            v151 = v67 + 1; /*0x100a8609c*/
            if ( __src != (void *)11 ) /*0x100a860a8*/
              goto LABEL_210; /*0x100a860a8*/
            v21 = v162; /*0x100a860d6*/
            if ( !(*v157 ^ 0x61705F796C707061LL | *(_QWORD *)((char *)v157 + 3) ^ 0x68637461705F796CLL) ) /*0x100a860d3*/
            {
              v70 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a860f0*/
                      "argumentsinputpatchcontent*** Begin Patch",
                      9,
                      v163);
              if ( !v70 || *(_BYTE *)v70 != 3 ) /*0x100a86101*/
                goto LABEL_210; /*0x100a86101*/
              v72 = *(void **)(v70 + 24); /*0x100a8610b*/
              *(_QWORD *)&v131[0] = *(_QWORD *)(v70 + 16); /*0x100a8610f*/
              v71 = *(void **)&v131[0]; /*0x100a86107*/
              *((_QWORD *)&v131[0] + 1) = v72; /*0x100a86116*/
              v131[1] = 0u; /*0x100a8612c*/
              *(_QWORD *)&v131[2] = *(_QWORD *)&v131[0]; /*0x100a86133*/
              v163 = v72; /*0x100a8613a*/
              *((_QWORD *)&v131[2] + 1) = v72; /*0x100a8613e*/
              serde_json::de::from_trait::h51e180b4bb6af5e0(&v140, v131); /*0x100a8614f*/
              if ( (_BYTE)v140 == 6 ) /*0x100a8615b*/
              {
                LOBYTE(v131[0]) = 6; /*0x100a86161*/
                core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(&v140); /*0x100a8616f*/
                v73 = 6; /*0x100a86174*/
                goto LABEL_161; /*0x100a86176*/
              }
              v131[1] = v141; /*0x100a8634b*/
              v131[0] = v140; /*0x100a86367*/
              v160 = v140; /*0x100a86370*/
              v87 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a86388*/
                      "inputpatchcontent*** Begin Patch",
                      5,
                      v131);
              if ( v87 && *(_BYTE *)v87 == 3 /*0x100a863d1*/
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
                v89 = *(void **)(v87 + 16); /*0x100a863d3*/
                v88 = *(_QWORD *)(v87 + 24); /*0x100a863d7*/
              }
              else
              {
                v89 = nullptr; /*0x100a863dd*/
              }
              v73 = v160; /*0x100a863df*/
              if ( v89 ) /*0x100a863e6*/
              {
LABEL_162:
                v163 = v89; /*0x100a86426*/
                alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v140, v88, 0, 1, 1); /*0x100a86441*/
                v158 = *((_QWORD *)&v140 + 1); /*0x100a8644d*/
                if ( (_BYTE)v140 ) /*0x100a86458*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v158, v141); /*0x100a8696c*/
                v162 = v141; /*0x100a86465*/
                memcpy((void *)v141, v163, v88); /*0x100a86470*/
                v91 = v131[0]; /*0x100a86475*/
                v156 = (char *)v88; /*0x100a8647c*/
              }
              else
              {
LABEL_161:
                LOBYTE(__src) = v73; /*0x100a863e8*/
                v90 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a863fe*/
                        "*** Begin Patch",
                        0xFu,
                        v71);
                v91 = (char)__src; /*0x100a86403*/
                v160 = (unsigned __int8)__src; /*0x100a86409*/
                v89 = v71; /*0x100a8640d*/
                v88 = (size_t)v163; /*0x100a86410*/
                v158 = 0x8000000000000000LL; /*0x100a8641e*/
                if ( v90 ) /*0x100a86424*/
                  goto LABEL_162; /*0x100a86424*/
              }
              if ( v91 != 6 ) /*0x100a86483*/
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v131); /*0x100a86488*/
              if ( v158 == 0x8000000000000000LL ) /*0x100a8649b*/
                goto LABEL_210; /*0x100a8649b*/
              v160 = 0; /*0x100a864a1*/
              LODWORD(v154) = 0; /*0x100a864a9*/
              v92 = nullptr; /*0x100a864b0*/
              v93 = nullptr; /*0x100a864b2*/
              while ( 2 ) /*0x100a864c9*/
              {
                __src = v92; /*0x100a864c9*/
                if ( v156 >= v93 ) /*0x100a864d1*/
                {
                  v94 = v156; /*0x100a864df*/
                  v95 = v93; /*0x100a864e3*/
                  while ( 1 ) /*0x100a864fb*/
                  {
                    v96 = v94 - v95; /*0x100a864fb*/
                    v163 = v95; /*0x100a86502*/
                    v97 = &v95[v162]; /*0x100a86506*/
                    if ( v96 >= 0x10 ) /*0x100a8650d*/
                    {
                      v99 = core::slice::memchr::memchr_aligned::hda948616f04379f9(10, v97, v96); /*0x100a86540*/
                    }
                    else
                    {
                      v98 = 0; /*0x100a8650f*/
                      if ( v96 ) /*0x100a86514*/
                      {
                        while ( v97[v98] != 10 ) /*0x100a86524*/
                        {
                          if ( v96 == ++v98 ) /*0x100a8652c*/
                          {
                            v98 = v96; /*0x100a8652e*/
                            goto LABEL_179; /*0x100a8652e*/
                          }
                        }
                        v99 = 1; /*0x100a8654a*/
                      }
                      else
                      {
LABEL_179:
                        v99 = 0; /*0x100a86531*/
                      }
                    }
                    if ( (v99 & 1) == 0 ) /*0x100a86551*/
                      break; /*0x100a86551*/
                    v92 = (char *)v163 + v98 + 1; /*0x100a86557*/
                    if ( (char *)v163 + v98 < v156 && v97[v98] == 10 ) /*0x100a86569*/
                    {
                      v100 = 0; /*0x100a8656f*/
                      v93 = (char *)v163 + v98 + 1; /*0x100a86571*/
                      v101 = v93; /*0x100a86574*/
                      v102 = (char *)__src; /*0x100a86577*/
                      goto LABEL_188; /*0x100a8657b*/
                    }
                    v95 = (char *)v163 + v98 + 1; /*0x100a864e8*/
                    v94 = v156; /*0x100a864eb*/
                    if ( v92 > v156 ) /*0x100a864f2*/
                      goto LABEL_187; /*0x100a864f2*/
                  }
                  v94 = v156; /*0x100a8657d*/
                  v92 = v156; /*0x100a86581*/
                }
                else
                {
                  v92 = v93; /*0x100a864d3*/
                  v94 = v156; /*0x100a864d6*/
                }
LABEL_187:
                v100 = 1; /*0x100a86584*/
                v93 = v92; /*0x100a86586*/
                v102 = (char *)__src; /*0x100a86589*/
                v92 = (char *)__src; /*0x100a8658d*/
                v101 = v94; /*0x100a86590*/
                if ( v94 == __src ) /*0x100a86596*/
                {
LABEL_203:
                  if ( (int)v160 > 0 || (int)v154 > 0 ) /*0x100a86645*/
                  {
                    v105 = *((_QWORD *)&v137 + 1); /*0x100a86647*/
                    if ( *((_QWORD *)&v137 + 1) == v136 ) /*0x100a86655*/
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he93ed8c161a227be(&v136); /*0x100a8665e*/
                    v106 = v137; /*0x100a86663*/
                    v107 = 16 * v105; /*0x100a8666d*/
                    *(_QWORD *)(v137 + v107) = v153; /*0x100a86675*/
                    *(_DWORD *)(v106 + v107 + 8) = v160; /*0x100a8667d*/
                    *(_DWORD *)(v106 + v107 + 12) = v154; /*0x100a86684*/
                    *((_QWORD *)&v137 + 1) = v105 + 1; /*0x100a8668b*/
                  }
                  if ( v158 ) /*0x100a86699*/
                  {
                    v21 = v162; /*0x100a866a0*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v158, 1); /*0x100a866a7*/
                    break; /*0x100a866ac*/
                  }
LABEL_210:
                  v21 = v162; /*0x100a866ae*/
                  break; /*0x100a866ae*/
                }
LABEL_188:
                v103 = &v102[v162]; /*0x100a8659c*/
                v104 = v101 - v102; /*0x100a865a7*/
                if ( v101 != v102 && v101[v162 - 1] == 10 ) /*0x100a865b2*/
                {
                  if ( v104 == 1 ) /*0x100a865bd*/
                  {
                    v104 = 0; /*0x100a865cd*/
                  }
                  else if ( v101[v162 - 2] == 13 ) /*0x100a865c5*/
                  {
                    v104 -= 2LL; /*0x100a865c7*/
                  }
                  else
                  {
                    --v104; /*0x100a865d1*/
                  }
                }
                if ( v104 < 3 ) /*0x100a865d8*/
                {
                  if ( v104 ) /*0x100a86611*/
                    goto LABEL_200; /*0x100a86611*/
                }
                else if ( *(_WORD *)v103 ^ 0x2B2B | (unsigned __int8)v103[2] ^ 0x2B /*0x100a86603*/
                       && *(_WORD *)v103 ^ 0x2D2D | (unsigned __int8)v103[2] ^ 0x2D )
                {
LABEL_200:
                  if ( *v103 == 43 ) /*0x100a8661a*/
                    v160 = (unsigned int)(v160 + 1); /*0x100a864bd*/
                  else
                    LODWORD(v154) = (*v103 == 45) + (_DWORD)v154; /*0x100a86629*/
                }
                if ( v100 ) /*0x100a864c3*/
                  goto LABEL_203; /*0x100a864c3*/
                continue; /*0x100a864c3*/
              }
            }
            if ( v159 ) /*0x100a866b9*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v159, 1); /*0x100a866c8*/
LABEL_85:
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v132); /*0x100a85d7d*/
            if ( v23 ) /*0x100a85d8c*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x100a85d9d*/
            goto LABEL_25; /*0x100a85da2*/
          }
          v34 = *((_QWORD *)&v134 + 1); /*0x100a859b7*/
          if ( **((_QWORD **)&v134 + 1) == 1 ) /*0x100a859c5*/
          {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3( /*0x100a85a34*/
              *((_QWORD *)&v134 + 1) + 8LL,
              v33,
              v27,
              v28,
              v29);
          }
          else if ( !**((_QWORD **)&v134 + 1) ) /*0x100a859be*/
          {
            v35 = *(_QWORD *)(*((_QWORD *)&v134 + 1) + 16LL); /*0x100a859cc*/
            if ( v35 ) /*0x100a859d3*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(*((_QWORD *)&v134 + 1) + 8LL), v35, 1); /*0x100a859de*/
          }
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 40, 8); /*0x100a85a46*/
        }
        if ( v23 ) /*0x100a85a4e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x100a85a5f*/
      }
    }
    if ( *((_QWORD *)&v142 + 1) ) /*0x100a866ea*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, *((_QWORD *)&v142 + 1), 1); /*0x100a866f8*/
    close_NOCANCEL(v146); /*0x100a86703*/
    v108 = v155; /*0x100a8670f*/
    v109 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076((unsigned __int64 *)&v142, v155); /*0x100a86716*/
    v131[2] = v139; /*0x100a8673b*/
    *((_QWORD *)&v131[1] + 1) = v138; /*0x100a8673f*/
    *(_QWORD *)&v131[4] = v151; /*0x100a8674a*/
    v131[3] = v150; /*0x100a86760*/
    v131[5] = v137; /*0x100a8677d*/
    *((_QWORD *)&v131[4] + 1) = v136; /*0x100a86781*/
    v131[0] = v142; /*0x100a86793*/
    *(_QWORD *)&v131[1] = v143; /*0x100a867a8*/
    qmemcpy(v121, v131, 0x60u); /*0x100a867be*/
    v121[12] = v108; /*0x100a867c1*/
    LODWORD(v121[13]) = v152; /*0x100a867ce*/
    if ( v121[0] == 0x8000000000000000LL ) /*0x100a867e5*/
      goto LABEL_20; /*0x100a867e5*/
    if ( v121[12] >= v128 ) /*0x100a867f9*/
    {
      v110 = v149; /*0x100a8680c*/
      if ( v149 == v147 ) /*0x100a8681a*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::ha12118a19a989fe2(&v147, v109); /*0x100a86823*/
      qmemcpy((void *)(v148 + 112 * v110), v121, 0x70u); /*0x100a8683f*/
      v149 = v110 + 1; /*0x100a86845*/
    }
    else
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..session_analytics..SessionData$GT$::h7c18df4ecb005bc6(v121, v109); /*0x100a86802*/
    }
LABEL_21:
    v17 = v126 + 4; /*0x100a856d6*/
  }
  while ( v126 + 4 != (_QWORD *)v127 ); /*0x100a856e8*/
  v111 = v130; /*0x100a86851*/
  v112 = v133; /*0x100a8685f*/
  v133[3] = v149; /*0x100a86866*/
  v113 = v147; /*0x100a8686a*/
  v112[2] = v148; /*0x100a86878*/
  v112[1] = v113; /*0x100a8687c*/
  *v112 = 11; /*0x100a86880*/
  if ( v111 ) /*0x100a86891*/
  {
    v114 = *((_QWORD *)&v129 + 1); /*0x100a86897*/
    v115 = (_QWORD *)(*((_QWORD *)&v129 + 1) + 8LL); /*0x100a8689a*/
    do /*0x100a868a7*/
    {
      v116 = *(v115 - 1); /*0x100a868a9*/
      if ( v116 ) /*0x100a868b0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v115, v116, 1); /*0x100a868ba*/
      v115 += 4; /*0x100a868a0*/
      --v111; /*0x100a868a4*/
    }
    while ( v111 ); /*0x100a868a7*/
LABEL_227:
    v119 = v129; /*0x100a868f3*/
    if ( (_QWORD)v129 ) /*0x100a868fd*/
LABEL_228:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, 32 * v119, 8); /*0x100a868ff*/
  }
  else
  {
    v114 = *((_QWORD *)&v129 + 1); /*0x100a86922*/
    v119 = v129; /*0x100a86925*/
    if ( (_QWORD)v129 ) /*0x100a8692f*/
      goto LABEL_228; /*0x100a8692f*/
  }
}