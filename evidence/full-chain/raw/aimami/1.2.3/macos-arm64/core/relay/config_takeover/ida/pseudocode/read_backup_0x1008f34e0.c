// __ZN13codexmate_lib4core5relay15config_takeover11read_backup @ 0x1008f34e0 | 基线 same-set
// [FULL hexrays]

double __fastcall codexmate_lib::core::relay::config_takeover::read_backup::hd8bcee2af149bcd9(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rsi
  double result; // xmm0_8
  __int64 v16; // rcx
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  _QWORD *v23; // rsi
  _QWORD *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rsi
  void *v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // rdi
  unsigned __int64 v30; // rsi
  __int64 v31; // rcx
  unsigned __int64 *v32; // r12
  __int64 *v33; // r13
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rsi
  __int64 v47; // rsi
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rsi
  __int64 v54; // rsi
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  unsigned __int64 v60; // rsi
  __int64 v61; // rsi
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // rax
  char v69; // al
  __int64 v70; // rax
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // rsi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned __int64 v84; // r13
  __int64 v85; // rsi
  __int64 v86; // r13
  unsigned int v87; // r12d
  __int64 v88; // r12
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // r12
  __int64 v91; // r15
  unsigned __int64 v92; // r12
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rsi
  __int64 v95; // rsi
  __int64 v96; // rax
  void *v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // rax
  void *v106; // rcx
  _BYTE v107[72]; // [rsp+0h] [rbp-300h] BYREF
  _QWORD v108[9]; // [rsp+48h] [rbp-2B8h] BYREF
  __int64 v109; // [rsp+90h] [rbp-270h]
  __int64 v110; // [rsp+98h] [rbp-268h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-260h]
  __int64 v112; // [rsp+A8h] [rbp-258h]
  unsigned __int64 *v113; // [rsp+B0h] [rbp-250h] BYREF
  __int64 v114; // [rsp+B8h] [rbp-248h]
  __int64 v115; // [rsp+C0h] [rbp-240h]
  unsigned __int64 v116; // [rsp+C8h] [rbp-238h] BYREF
  unsigned __int64 *v117; // [rsp+D0h] [rbp-230h]
  unsigned __int64 v118; // [rsp+D8h] [rbp-228h]
  int v119; // [rsp+E4h] [rbp-21Ch]
  _QWORD *v120; // [rsp+E8h] [rbp-218h] BYREF
  __int64 v121; // [rsp+F0h] [rbp-210h]
  __int64 v122; // [rsp+F8h] [rbp-208h]
  __int64 v123; // [rsp+100h] [rbp-200h]
  unsigned __int64 v124; // [rsp+108h] [rbp-1F8h]
  unsigned __int64 v125; // [rsp+110h] [rbp-1F0h]
  __int64 v126; // [rsp+118h] [rbp-1E8h]
  __int64 v127; // [rsp+120h] [rbp-1E0h]
  __int64 v128; // [rsp+128h] [rbp-1D8h]
  char v129; // [rsp+130h] [rbp-1D0h]
  __int64 v130; // [rsp+138h] [rbp-1C8h]
  unsigned __int64 *v131; // [rsp+140h] [rbp-1C0h]
  _QWORD *v132; // [rsp+148h] [rbp-1B8h] BYREF
  char v133; // [rsp+150h] [rbp-1B0h]
  void *v134; // [rsp+158h] [rbp-1A8h]
  _QWORD v135[11]; // [rsp+160h] [rbp-1A0h] BYREF
  __int64 v136; // [rsp+1B8h] [rbp-148h]
  __int64 v137; // [rsp+1F8h] [rbp-108h]
  _QWORD v138[11]; // [rsp+200h] [rbp-100h] BYREF
  char v139; // [rsp+25Fh] [rbp-A1h] BYREF
  __int64 v140; // [rsp+260h] [rbp-A0h]
  unsigned __int64 v141; // [rsp+268h] [rbp-98h]
  unsigned __int64 *v142; // [rsp+270h] [rbp-90h]
  unsigned __int64 *v143; // [rsp+278h] [rbp-88h]
  unsigned __int64 v144; // [rsp+280h] [rbp-80h] BYREF
  __int64 v145; // [rsp+288h] [rbp-78h]
  unsigned __int64 *v146; // [rsp+290h] [rbp-70h]
  unsigned __int64 v147; // [rsp+298h] [rbp-68h] BYREF
  unsigned __int64 *v148; // [rsp+2A0h] [rbp-60h]
  unsigned __int64 v149; // [rsp+2A8h] [rbp-58h]
  __int64 v150; // [rsp+2B0h] [rbp-50h]
  unsigned __int64 v151; // [rsp+2B8h] [rbp-48h]
  __int64 v152; // [rsp+2C0h] [rbp-40h]
  unsigned __int64 v153; // [rsp+2C8h] [rbp-38h]
  __int64 v154; // [rsp+2D0h] [rbp-30h]

  v3 = a1;
  std::path::Path::_join::hb1a495d4f06b13b8(
    &v110,
    a2,
    a3,
    "router-takeover-backup.json# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)",
    27);
  v4 = v111;
  v5 = v112;
  std::sys::fs::metadata::h32fa16d3052ea535(v135, v111, v112);
  v6 = v135[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    v135[0],
    v135[1]);
  if ( v6 )
  {
    a1[1] = 0x8000000000000000LL;
    *a1 = 11;
    goto LABEL_25;
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v138, v4, v5);
  v8 = v138[1];
  if ( !__OFSUB__(-v138[0], 1) )
  {
    v137 = v138[0];
    v123 = v138[1];
    v124 = v138[2];
    v125 = 0;
    v126 = 0;
    v127 = v138[1];
    v128 = v138[2];
    v120 = nullptr;
    v121 = 1;
    v122 = 0;
    v129 = 0x80;
    if ( !v138[2] )
    {
LABEL_16:
      v135[0] = 5;
      v20 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(&v120, v135);
      goto LABEL_17;
    }
    v16 = 1;
    v17 = 0x100002600LL;
    while ( 1 )
    {
      v18 = *(unsigned __int8 *)(v138[1] + v16 - 1);
      if ( v18 > 0x20 || !_bittest64(&v17, v18) )
        break;
      v125 = v16;
      v19 = v16 - v138[2] + 1;
      ++v16;
      if ( v19 == 1 )
        goto LABEL_16;
    }
    if ( (_DWORD)v18 != 91 )
    {
      if ( (_DWORD)v18 != 123 )
      {
        v21 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::he849ce64b4cb8cbf(&v120, &v139, &unk_10196F198);
        goto LABEL_184;
      }
      v129 = 127;
      v125 = v16;
      v113 = (unsigned __int64 *)&v120;
      LOBYTE(v114) = 1;
      v144 = 0x8000000000000000LL;
      v130 = 0;
      v27 = &unk_101677684;
      v134 = &unk_101677684;
      v28 = 0x8000000000000000LL;
      v154 = 0x8000000000000000LL;
      v151 = 0x8000000000000000LL;
      LODWORD(v140) = 0;
      while ( 1 )
      {
        v153 = v28;
        while ( 2 )
        {
          v152 = v6;
          while ( 1 )
          {
LABEL_33:
            v29 = v135;
            v30 = (unsigned __int64)&v113;
            _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::hb6b53accb71a41fc(
              v135,
              &v113,
              v28,
              v27,
              v7);
            if ( LOBYTE(v135[0]) == 1 )
            {
              v147 = v154;
              v148 = v142;
              v149 = v141;
              v144 = v153;
              v145 = v150;
              LODWORD(v70) = (_DWORD)v143;
              v146 = v143;
              v6 = v135[1];
LABEL_112:
              LOBYTE(v28) = 1;
              goto LABEL_113;
            }
            if ( BYTE1(v135[0]) != 1 )
            {
              v147 = v154;
              v148 = v142;
              v149 = v141;
              v144 = v153;
              v145 = v150;
              v29 = v143;
              v146 = v143;
              if ( (v140 & 1) != 0 )
              {
                if ( (v130 & 1) != 0 )
                {
                  if ( v153 == 0x8000000000000000LL )
                  {
                    v138[0] = &unk_101677696;
                    v138[1] = 13;
                    v135[0] = v138;
                    v135[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                    v29 = (unsigned __int64 *)&anon_a8580c566d8025b0f516de1c9be9088f_8;
                    v30 = (unsigned __int64)v135;
                    v70 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_8);
                    goto LABEL_111;
                  }
                  LOBYTE(v140) = v154 == 0x8000000000000000LL;
                  if ( v154 == 0x8000000000000000LL )
                  {
                    v138[0] = &unk_1016776A3;
                    v138[1] = 13;
                    v135[0] = v138;
                    v135[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                    v30 = (unsigned __int64)v135;
                    v6 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_8);
                  }
                  else
                  {
                    if ( v151 != 0x8000000000000000LL )
                    {
                      v118 = v149;
                      v117 = v148;
                      v116 = v147;
                      v89 = v153;
                      v28 = (unsigned __int64)v131;
                      v86 = v150;
                      v30 = v152;
                      v7 = v109;
                      goto LABEL_123;
                    }
                    v138[0] = &unk_1016776B0;
                    v138[1] = 14;
                    v135[0] = v138;
                    v135[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                    v30 = (unsigned __int64)v135;
                    v6 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..config_takeover..TakeoverSection$GT$$GT$::h05debf5d1a9563be(
                      &v147,
                      v135);
                  }
                  v29 = &v144;
                  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(
                    &v144,
                    v135);
                  LODWORD(v152) = 0;
                  v28 = (unsigned __int8)v140;
LABEL_114:
                  v86 = v6;
                  if ( 2 * v151 )
                  {
                    v87 = v28;
                    v29 = v131;
                    v30 = v151;
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v131, v151, 1);
                    v28 = v87;
                    v154 = v147;
                  }
                  goto LABEL_116;
                }
                v96 = 11;
                v97 = &unk_10167768B;
              }
              else
              {
                v96 = 7;
                v97 = &unk_101677684;
              }
              v138[0] = v97;
              v138[1] = v96;
              v135[0] = v138;
              v135[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
              v29 = (unsigned __int64 *)&anon_a8580c566d8025b0f516de1c9be9088f_8;
              v30 = (unsigned __int64)v135;
              v70 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_8);
              goto LABEL_111;
            }
            v32 = v113;
            v33 = (__int64 *)(v113 + 3);
            ++v113[5];
            v32[2] = 0;
            v29 = v135;
            _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18(
              v135,
              v33,
              v32,
              v31,
              v7);
            v30 = v135[1];
            if ( LODWORD(v135[0]) == 2 )
            {
              v147 = v154;
              v148 = v142;
              v149 = v141;
              v144 = v153;
              v145 = v150;
              LODWORD(v70) = (_DWORD)v143;
              v146 = v143;
              LOBYTE(v28) = 1;
              v6 = v135[1];
              goto LABEL_113;
            }
            v29 = v138;
            _$LT$codexmate_lib..core..relay..config_takeover.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h4eb4bfd6778be883(
              v138,
              v135[1],
              v135[2]);
            if ( LOBYTE(v138[0]) == 1 )
            {
LABEL_151:
              v147 = v154;
              v148 = v142;
              v149 = v141;
              v144 = v153;
              v145 = v150;
              LODWORD(v70) = (_DWORD)v143;
              v146 = v143;
              v6 = v138[1];
              goto LABEL_112;
            }
            if ( BYTE1(v138[0]) != 5 )
              break;
            v34 = v32[4];
            v35 = v32[5];
            if ( v35 >= v34 )
            {
LABEL_110:
              v147 = v154;
              v148 = v142;
              v149 = v141;
              v144 = v153;
              v145 = v150;
              v146 = v143;
              v135[0] = 3;
              v30 = (unsigned __int64)v135;
              v29 = v32;
              v70 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v32, v135);
              goto LABEL_111;
            }
            v36 = *v33;
            v37 = v35 + 1;
            v38 = -(__int64)v34;
            while ( 1 )
            {
              v30 = *(unsigned __int8 *)(v36 + v37 - 1);
              if ( v30 > 0x3A )
                goto LABEL_178;
              if ( !_bittest64(&v17, v30) )
                break;
              v32[5] = v37;
              v39 = v38 + v37++ + 1;
              if ( v39 == 1 )
                goto LABEL_110;
            }
            if ( v30 != 58 )
            {
LABEL_178:
              v147 = v154;
              v148 = v142;
              v149 = v141;
              v144 = v153;
              v145 = v150;
              v146 = v143;
              v135[0] = 6;
              v30 = (unsigned __int64)v135;
              v29 = v32;
              v70 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v32, v135);
              goto LABEL_111;
            }
            v32[5] = v37;
            v29 = v32;
            v40 = serde_json::de::Deserializer$LT$R$GT$::ignore_value::ha00ea1169242c27a(v32, 58, v36, v38);
            if ( v40 )
            {
              v6 = v40;
              goto LABEL_152;
            }
          }
          switch ( BYTE1(v138[0]) )
          {
            case 0:
              if ( (_DWORD)v140 )
              {
                v105 = 7;
                goto LABEL_203;
              }
              v41 = v32[4];
              v42 = v32[5];
              if ( v42 >= v41 )
                goto LABEL_110;
              v43 = *v33;
              v44 = v42 + 1;
              v45 = -(__int64)v41;
              while ( 1 )
              {
                v46 = *(unsigned __int8 *)(v43 + v44 - 1);
                if ( v46 > 0x3A )
                  goto LABEL_178;
                if ( !_bittest64(&v17, v46) )
                  break;
                v32[5] = v44;
                v47 = v45 + v44++ + 1;
                if ( v47 == 1 )
                  goto LABEL_110;
              }
              if ( v46 != 58 )
                goto LABEL_178;
              v32[5] = v44;
              v29 = v138;
              v30 = (unsigned __int64)v32;
              _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_u32::he2a1e49ea0615326(
                v138,
                v32);
              if ( LODWORD(v138[0]) == 1 )
                goto LABEL_151;
              v119 = HIDWORD(v138[0]);
              LODWORD(v140) = 1;
              goto LABEL_33;
            case 1:
              if ( v130 )
              {
                v105 = 11;
                v106 = &unk_10167768B;
LABEL_202:
                v134 = v106;
LABEL_203:
                v147 = v154;
                v148 = v142;
                v149 = v141;
                v144 = v153;
                v145 = v150;
                v146 = v143;
                v138[0] = v134;
                v138[1] = v105;
                v135[0] = v138;
                v135[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                v29 = (unsigned __int64 *)&anon_a8580c566d8025b0f516de1c9be9088f_12;
                v30 = (unsigned __int64)v135;
                v70 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_12);
LABEL_111:
                v6 = v70;
                goto LABEL_112;
              }
              v62 = v32[4];
              v63 = v32[5];
              if ( v63 >= v62 )
              {
LABEL_78:
                v135[0] = 3;
                v29 = v32;
                v30 = (unsigned __int64)v135;
                v68 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v32, v135);
              }
              else
              {
                v64 = *v33;
                v65 = v63 + 1;
                v66 = -(__int64)v62;
                while ( 1 )
                {
                  v30 = *(unsigned __int8 *)(v64 + v65 - 1);
                  if ( v30 > 0x3A )
                    break;
                  if ( !_bittest64(&v17, v30) )
                  {
                    if ( v30 == 58 )
                    {
                      v32[5] = v65;
                      v29 = v32;
                      v69 = serde_core::de::impls::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$i64$GT$::deserialize::h0c64a54103d8ab8d(v32);
                      v6 = v28;
                      goto LABEL_88;
                    }
                    break;
                  }
                  v32[5] = v65;
                  v67 = v66 + v65++ + 1;
                  if ( v67 == 1 )
                    goto LABEL_78;
                }
                v135[0] = 6;
                v29 = v32;
                v30 = (unsigned __int64)v135;
                v68 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v32, v135);
              }
              v6 = v68;
              v69 = 1;
LABEL_88:
              if ( (v69 & 1) != 0 )
              {
LABEL_152:
                v147 = v154;
                v148 = v142;
                v149 = v141;
                v144 = v153;
                v145 = v150;
                LODWORD(v70) = (_DWORD)v143;
                v146 = v143;
                goto LABEL_112;
              }
              v130 = 1;
              continue;
            case 2:
              if ( v153 != 0x8000000000000000LL )
              {
                v105 = 13;
                v106 = &unk_101677696;
                goto LABEL_202;
              }
              v71 = v32[4];
              v72 = v32[5];
              if ( v72 >= v71 )
              {
LABEL_161:
                v147 = v154;
                v148 = v142;
                v149 = v141;
                v144 = 0x8000000000000000LL;
                v145 = v150;
                v146 = v143;
                v135[0] = 3;
                v30 = (unsigned __int64)v135;
                v153 = 0x8000000000000000LL;
                v29 = v32;
                v99 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v32, v135);
                goto LABEL_162;
              }
              v73 = *v33;
              v74 = v72 + 1;
              v75 = -(__int64)v71;
              while ( 1 )
              {
                v76 = *(unsigned __int8 *)(v73 + v74 - 1);
                if ( v76 > 0x3A )
                  goto LABEL_206;
                if ( !_bittest64(&v17, v76) )
                  break;
                v32[5] = v74;
                v77 = v75 + v74++ + 1;
                if ( v77 == 1 )
                  goto LABEL_161;
              }
              if ( v76 != 58 )
              {
LABEL_206:
                v147 = v154;
                v148 = v142;
                v149 = v141;
                v144 = 0x8000000000000000LL;
                v145 = v150;
                v146 = v143;
                v135[0] = 6;
                v30 = (unsigned __int64)v135;
                v153 = 0x8000000000000000LL;
                v29 = v32;
                v99 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v32, v135);
LABEL_162:
                v6 = v99;
                LOBYTE(v28) = 1;
                LODWORD(v70) = 0;
                v153 = 0x8000000000000000LL;
LABEL_113:
                LOBYTE(v70) = 1;
                LODWORD(v152) = v70;
                goto LABEL_114;
              }
              v32[5] = v74;
              v29 = v138;
              v30 = (unsigned __int64)v32;
              _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_seq::h9c0402e2d54ecd6b(
                v138,
                v32);
              v28 = v138[0];
              LODWORD(v70) = v138[1];
              v6 = v152;
              if ( v138[0] == 0x8000000000000000LL )
              {
                v147 = v154;
                v148 = v142;
                v149 = v141;
                v144 = 0x8000000000000000LL;
                v145 = v150;
                v28 = (unsigned __int64)v143;
                v146 = v143;
                LOBYTE(v28) = 1;
                v153 = 0x8000000000000000LL;
                v6 = v138[1];
                goto LABEL_113;
              }
              v27 = (void *)v138[2];
              v143 = (unsigned __int64 *)v138[2];
              v150 = v138[1];
              break;
            case 3:
              if ( v154 != 0x8000000000000000LL )
              {
                v105 = 13;
                v106 = &unk_1016776A3;
                goto LABEL_202;
              }
              v55 = v32[4];
              v56 = v32[5];
              if ( v56 >= v55 )
              {
LABEL_163:
                v147 = 0x8000000000000000LL;
                v148 = v142;
                v149 = v141;
                v144 = v153;
                v145 = v150;
                v146 = v143;
                v135[0] = 3;
                v30 = (unsigned __int64)v135;
                v154 = 0x8000000000000000LL;
                v29 = v32;
                v100 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v32, v135);
                goto LABEL_164;
              }
              v57 = *v33;
              v58 = v56 + 1;
              v59 = -(__int64)v55;
              while ( 1 )
              {
                v60 = *(unsigned __int8 *)(v57 + v58 - 1);
                if ( v60 > 0x3A )
                  goto LABEL_205;
                if ( !_bittest64(&v17, v60) )
                  break;
                v32[5] = v58;
                v61 = v59 + v58++ + 1;
                if ( v61 == 1 )
                  goto LABEL_163;
              }
              if ( v60 != 58 )
              {
LABEL_205:
                v147 = 0x8000000000000000LL;
                v148 = v142;
                v149 = v141;
                v144 = v153;
                v145 = v150;
                v146 = v143;
                v135[0] = 6;
                v30 = (unsigned __int64)v135;
                v154 = 0x8000000000000000LL;
                v29 = v32;
                v100 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v32, v135);
LABEL_164:
                v6 = v100;
                LOBYTE(v28) = 1;
                LODWORD(v70) = 0;
                v154 = 0x8000000000000000LL;
                goto LABEL_113;
              }
              v32[5] = v58;
              v29 = v138;
              _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_seq::hdec505ecb634028a(
                v138,
                v32);
              LODWORD(v70) = v138[1];
              v154 = v138[0];
              v28 = v153;
              v6 = v152;
              if ( v138[0] == 0x8000000000000000LL )
              {
                v147 = 0x8000000000000000LL;
                v148 = v142;
                v30 = v141;
                v149 = v141;
                v144 = v153;
                v145 = v150;
                v28 = (unsigned __int64)v143;
                v146 = v143;
                LOBYTE(v28) = 1;
                v154 = 0x8000000000000000LL;
                v6 = v138[1];
                goto LABEL_113;
              }
              v27 = (void *)v138[2];
              v141 = v138[2];
              v142 = (unsigned __int64 *)v138[1];
              continue;
            case 4:
              if ( v151 != 0x8000000000000000LL )
              {
                v105 = 14;
                v106 = &unk_1016776B0;
                goto LABEL_202;
              }
              v48 = v32[4];
              v49 = v32[5];
              if ( v49 >= v48 )
              {
LABEL_159:
                v147 = v154;
                v148 = v142;
                v149 = v141;
                v144 = v153;
                v145 = v150;
                v146 = v143;
                v135[0] = 3;
                v30 = (unsigned __int64)v135;
                v29 = v32;
                v98 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v32, v135);
                goto LABEL_160;
              }
              v50 = *v33;
              v51 = v49 + 1;
              v52 = -(__int64)v48;
              while ( 1 )
              {
                v53 = *(unsigned __int8 *)(v50 + v51 - 1);
                if ( v53 > 0x3A )
                  goto LABEL_204;
                if ( !_bittest64(&v17, v53) )
                  break;
                v32[5] = v51;
                v54 = v52 + v51++ + 1;
                if ( v54 == 1 )
                  goto LABEL_159;
              }
              if ( v53 != 58 )
              {
LABEL_204:
                v147 = v154;
                v148 = v142;
                v149 = v141;
                v144 = v153;
                v145 = v150;
                v146 = v143;
                v135[0] = 6;
                v30 = (unsigned __int64)v135;
                v29 = v32;
                v98 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v32, v135);
LABEL_160:
                v86 = v98;
                LOBYTE(v98) = 1;
                LODWORD(v152) = v98;
                LOBYTE(v28) = 1;
LABEL_116:
                v88 = v154;
                if ( ((v154 != 0x8000000000000000LL) & (unsigned __int8)v28) != 0 )
                {
                  v29 = &v147;
                  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc32f8034ee4b27cc(&v147);
                  if ( v88 )
                  {
                    v29 = v148;
                    v30 = 48 * v88;
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148, 48 * v88, 8);
                  }
                }
                v89 = 0x8000000000000000LL;
                v90 = v153;
                if ( ((v153 != 0x8000000000000000LL) & (unsigned __int8)v152) != 0 )
                {
                  v29 = &v144;
                  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v144);
                  if ( v90 )
                  {
                    v30 = 24 * v90;
                    v29 = (unsigned __int64 *)v150;
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v150, 24 * v90, 8);
                  }
                  v89 = 0x8000000000000000LL;
                }
LABEL_123:
                ++v129;
                v138[0] = v89;
                v138[1] = v86;
                v138[2] = v29;
                v138[3] = v116;
                v138[4] = v117;
                v138[5] = v118;
                v138[6] = v151;
                v138[7] = v28;
                v138[8] = v7;
                v138[9] = v30;
                LODWORD(v138[10]) = v119;
                v21 = serde_json::de::Deserializer$LT$R$GT$::end_map::h3ebe27c2713f8283(&v120);
                qmemcpy(v135, v138, sizeof(v135));
                v136 = v21;
                v22 = v135[0];
                if ( v135[0] == 0x8000000000000000LL )
                {
                  v151 = (unsigned __int64)v3;
                  v91 = v135[1];
                  if ( v21 )
                  {
LABEL_131:
                    core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v21);
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 40, 8);
                  }
LABEL_132:
                  v22 = 0x8000000000000000LL;
                  v21 = v91;
                  v3 = (_QWORD *)v151;
LABEL_136:
                  if ( v22 != 0x8000000000000000LL )
                  {
                    qmemcpy(v107, v108, sizeof(v107));
                    v135[0] = v22;
                    v135[1] = v21;
                    qmemcpy(&v135[2], v107, 0x48u);
                    if ( v125 >= v124 )
                    {
LABEL_142:
                      v23 = v120;
                      if ( v120 )
                        goto LABEL_19;
                    }
                    else
                    {
                      v93 = v125 + 1;
                      while ( 1 )
                      {
                        v94 = *(unsigned __int8 *)(v123 + v93 - 1);
                        if ( v94 > 0x20 || !_bittest64(&v17, v94) )
                          break;
                        v125 = v93;
                        v95 = v93 - v124 + 1;
                        ++v93;
                        if ( v95 == 1 )
                          goto LABEL_142;
                      }
                      v138[0] = 22;
                      v21 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(&v120, v138);
                      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hc16d7bf4b9db4817(v135);
LABEL_18:
                      v22 = 0x8000000000000000LL;
                      v23 = v120;
                      if ( v120 )
LABEL_19:
                        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121, v23, 1);
                    }
                    if ( v22 == 0x8000000000000000LL )
                    {
                      v120 = (_QWORD *)v21;
                      v138[0] = &v120;
                      v138[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(v135, &unk_1017C72F7, v138);
                      v138[0] = v135[0];
                      v138[1] = v135[1];
                      v138[2] = v135[2];
                      v24 = v120;
                      core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v120);
                      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, 40, 8);
                      *v3 = 9;
                      v25 = v138[1];
                      v3[1] = v138[0];
                      v3[2] = v25;
                      v3[3] = v138[2];
                      v26 = v137;
                      if ( !v137 )
                        goto LABEL_25;
                    }
                    else
                    {
                      qmemcpy(v3 + 3, v107, 0x48u);
                      v3[1] = v22;
                      v3[2] = v21;
                      *v3 = 11;
                      v26 = v137;
                      if ( !v137 )
                        goto LABEL_25;
                    }
                    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v26, 1);
                    goto LABEL_25;
                  }
LABEL_184:
                  v20 = serde_json::error::Error::fix_position::h284fb95b94477b8f(v21, &v120);
LABEL_17:
                  v21 = v20;
                  goto LABEL_18;
                }
LABEL_133:
                if ( v21 )
                {
                  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hc16d7bf4b9db4817(v135);
                  v22 = 0x8000000000000000LL;
                }
                else
                {
                  v21 = v135[1];
                  qmemcpy(v108, &v135[2], sizeof(v108));
                }
                goto LABEL_136;
              }
              v32[5] = v51;
              v29 = v138;
              v30 = (unsigned __int64)v32;
              _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::h096ced4895299d2f(
                v138,
                v32);
              v131 = (unsigned __int64 *)v138[1];
              v28 = v153;
              v6 = v152;
              if ( v138[0] == 0x8000000000000000LL )
              {
                v147 = v154;
                v148 = v142;
                v149 = v141;
                v144 = v153;
                v145 = v150;
                v102 = (int)v143;
                v146 = v143;
                LOBYTE(v102) = 1;
                LODWORD(v152) = v102;
                LOBYTE(v28) = 1;
                v86 = (__int64)v131;
                goto LABEL_116;
              }
              v27 = (void *)v138[2];
              v109 = v138[2];
              v151 = v138[0];
              continue;
          }
          break;
        }
      }
    }
    v129 = 127;
    v125 = v16;
    v132 = &v120;
    v133 = 1;
    v78 = (__int64)v135;
    v79 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982(
            v135,
            &v132,
            v18,
            v16,
            v7);
    if ( LOBYTE(v135[0]) == 1 )
      goto LABEL_102;
    if ( BYTE1(v135[0]) == 1 )
    {
      v78 = (__int64)v135;
      v79 = _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_u32::he2a1e49ea0615326(
              v135,
              v132);
      if ( LODWORD(v135[0]) == 1
        || (LODWORD(v151) = HIDWORD(v135[0]),
            v78 = (__int64)v135,
            v79 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982(
                    v135,
                    &v132,
                    v80,
                    v81,
                    v82),
            LOBYTE(v135[0]) == 1) )
      {
LABEL_102:
        v84 = v135[1];
LABEL_128:
        v92 = 0x8000000000000000LL;
        goto LABEL_129;
      }
      v78 = 1;
      if ( BYTE1(v135[0]) == 1 )
      {
        v78 = (__int64)v132;
        v79 = serde_core::de::impls::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$i64$GT$::deserialize::h0c64a54103d8ab8d(v132);
        v84 = v80;
        if ( (v79 & 1) != 0 )
          goto LABEL_128;
        v78 = (__int64)v135;
        v79 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982(
                v135,
                &v132,
                v80,
                v81,
                v82);
        if ( LOBYTE(v135[0]) == 1 )
        {
          v85 = v135[1];
          goto LABEL_189;
        }
        if ( BYTE1(v135[0]) != 1 )
        {
          v78 = 2;
          v79 = serde_core::de::Error::invalid_length::ha846d443e92fc6f9(2, &off_10196E260, &unk_10196DFD8);
          v85 = v79;
          goto LABEL_189;
        }
        v78 = (__int64)v135;
        _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_seq::h9c0402e2d54ecd6b(
          v135,
          v132);
        v92 = v135[0];
        v85 = v135[1];
        v79 = 0x8000000000000000LL;
        if ( v135[0] == 0x8000000000000000LL )
        {
LABEL_189:
          v84 = v85;
          goto LABEL_128;
        }
        v116 = v135[0];
        v153 = v135[1];
        v117 = (unsigned __int64 *)v135[1];
        v152 = v135[2];
        v118 = v135[2];
        _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982(
          v135,
          &v132,
          v80,
          v81,
          v82);
        if ( LOBYTE(v135[0]) == 1 )
        {
          v101 = v135[1];
        }
        else
        {
          if ( BYTE1(v135[0]) != 1 )
          {
            v154 = serde_core::de::Error::invalid_length::ha846d443e92fc6f9(3, &off_10196E260, &unk_10196DFD8);
            goto LABEL_186;
          }
          _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_seq::hdec505ecb634028a(
            v135,
            v132);
          v154 = v135[1];
          v150 = v135[0];
          if ( v135[0] == 0x8000000000000000LL )
          {
LABEL_186:
            v78 = (__int64)&v116;
            v79 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v116);
            if ( v92 )
            {
              v78 = v153;
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v153, 24 * v92, 8);
            }
            v85 = v154;
            goto LABEL_189;
          }
          v138[0] = v150;
          v138[1] = v154;
          v138[2] = v135[2];
          _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982(
            v135,
            &v132,
            v103,
            v154,
            v104);
          if ( LOBYTE(v135[0]) == 1 )
          {
            v140 = v135[1];
          }
          else if ( BYTE1(v135[0]) == 1 )
          {
            _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::h096ced4895299d2f(
              v135,
              v132);
            v80 = v135[0];
            v140 = v135[1];
            if ( v135[0] != 0x8000000000000000LL )
            {
              v79 = v135[2];
              v113 = (unsigned __int64 *)v138[0];
              v114 = v138[1];
              v115 = v138[2];
              v81 = v84;
              v84 = v153;
              LODWORD(v82) = v151;
              v78 = v152;
              v83 = v140;
LABEL_129:
              ++v129;
              v138[0] = v92;
              v138[1] = v84;
              v138[2] = v78;
              v138[3] = v113;
              v138[4] = v114;
              v138[5] = v115;
              v138[6] = v80;
              v138[7] = v83;
              v138[8] = v79;
              v138[9] = v81;
              LODWORD(v138[10]) = v82;
              v21 = serde_json::de::Deserializer$LT$R$GT$::end_seq::h1305a2fb247a2b5c(&v120);
              qmemcpy(v135, v138, sizeof(v135));
              v136 = v21;
              v22 = v135[0];
              if ( v135[0] == 0x8000000000000000LL )
              {
                v151 = (unsigned __int64)v3;
                v91 = v135[1];
                if ( v21 )
                  goto LABEL_131;
                goto LABEL_132;
              }
              goto LABEL_133;
            }
          }
          else
          {
            v140 = serde_core::de::Error::invalid_length::ha846d443e92fc6f9(4, &off_10196E260, &unk_10196DFD8);
          }
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc32f8034ee4b27cc(v138);
          if ( v150 )
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154, 48 * v150, 8);
          v101 = v140;
        }
        v154 = v101;
        goto LABEL_186;
      }
    }
    else
    {
      v78 = 0;
    }
    v79 = serde_core::de::Error::invalid_length::ha846d443e92fc6f9(v78, &off_10196E260, &unk_10196DFD8);
    v84 = v79;
    goto LABEL_128;
  }
  v108[0] = v138[1];
  v120 = v108;
  v121 = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v135, &unk_1017C72DE, &v120);
  v9 = v135[0];
  v10 = v135[1];
  v11 = v135[2];
  if ( (v108[0] & 3) == 1 )
  {
    v151 = (unsigned __int64)a1;
    v137 = v108[0] - 1LL;
    v12 = *(_QWORD *)(v108[0] - 1LL);
    v13 = *(_QWORD *)(v108[0] + 7LL);
    if ( *(_QWORD *)v13 )
      (*(void (__fastcall **)(__int64))v13)(v12);
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16));
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, 24, 8);
    v3 = (_QWORD *)v151;
  }
  v3[1] = v9;
  v3[2] = v10;
  v3[3] = v11;
  *v3 = 10;
LABEL_25:
  if ( v110 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v110, 1);
  return result;
}
