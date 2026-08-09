// __ZN13codexmate_lib4core4auth14load_auth_file @ 0x1008ea560 | 基线 same-set
// [FULL hexrays]

unsigned __int64 *__fastcall codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  signed __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // r11
  __int64 *v24; // r12
  __int64 *v25; // rbx
  __int64 v26; // r13
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rsi
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rsi
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rsi
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rsi
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rdi
  _QWORD *v78; // rsi
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // r8
  unsigned __int64 v82; // r9
  char v83; // r10
  _QWORD *v84; // r12
  __int64 v85; // rax
  __int64 v86; // rbx
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rbx
  __int64 v89; // rax
  unsigned __int64 v90; // rsi
  unsigned __int64 v91; // rdi
  unsigned __int64 v92; // rcx
  __int64 v93; // rdi
  unsigned __int64 v94; // rsi
  __int64 v95; // rsi
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int64 v100; // rbx
  __int64 v101; // rcx
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rcx
  __int64 v104; // rax
  void *v105; // rcx
  _BYTE v106[80]; // [rsp+8h] [rbp-4A8h] BYREF
  _BYTE v107[80]; // [rsp+58h] [rbp-458h] BYREF
  _BYTE v108[80]; // [rsp+A8h] [rbp-408h] BYREF
  __int64 v109; // [rsp+F8h] [rbp-3B8h]
  __int64 v110; // [rsp+100h] [rbp-3B0h]
  __int64 v111; // [rsp+108h] [rbp-3A8h]
  __int64 v112; // [rsp+110h] [rbp-3A0h]
  __int64 v113; // [rsp+118h] [rbp-398h]
  __int64 v114; // [rsp+120h] [rbp-390h]
  __int64 v115; // [rsp+128h] [rbp-388h]
  __int64 v116; // [rsp+130h] [rbp-380h]
  unsigned __int64 v117; // [rsp+138h] [rbp-378h]
  unsigned __int64 v118; // [rsp+140h] [rbp-370h]
  unsigned __int64 v119; // [rsp+148h] [rbp-368h]
  unsigned __int64 v120; // [rsp+150h] [rbp-360h]
  unsigned __int64 v121; // [rsp+158h] [rbp-358h]
  unsigned __int64 v122; // [rsp+160h] [rbp-350h]
  unsigned __int64 v123; // [rsp+168h] [rbp-348h]
  unsigned __int64 v124; // [rsp+170h] [rbp-340h]
  __int64 v125; // [rsp+178h] [rbp-338h]
  unsigned __int64 v126; // [rsp+180h] [rbp-330h]
  _QWORD v127[12]; // [rsp+188h] [rbp-328h] BYREF
  unsigned __int64 v128; // [rsp+1E8h] [rbp-2C8h]
  unsigned __int64 v129; // [rsp+1F0h] [rbp-2C0h]
  unsigned __int64 v130; // [rsp+1F8h] [rbp-2B8h]
  unsigned __int64 v131; // [rsp+200h] [rbp-2B0h]
  unsigned __int64 v132; // [rsp+208h] [rbp-2A8h]
  unsigned __int64 v133; // [rsp+210h] [rbp-2A0h]
  unsigned __int64 v134; // [rsp+218h] [rbp-298h]
  unsigned __int64 v135; // [rsp+220h] [rbp-290h]
  unsigned __int64 v136; // [rsp+228h] [rbp-288h]
  unsigned __int64 v137; // [rsp+230h] [rbp-280h]
  unsigned __int64 v138; // [rsp+238h] [rbp-278h]
  unsigned __int64 v139; // [rsp+240h] [rbp-270h]
  unsigned __int64 v140; // [rsp+248h] [rbp-268h]
  unsigned __int64 v141; // [rsp+250h] [rbp-260h]
  __int64 v142; // [rsp+258h] [rbp-258h] BYREF
  __int64 v143; // [rsp+260h] [rbp-250h]
  __int64 v144; // [rsp+268h] [rbp-248h]
  __int64 v145; // [rsp+270h] [rbp-240h]
  unsigned __int64 v146; // [rsp+278h] [rbp-238h]
  unsigned __int64 v147; // [rsp+280h] [rbp-230h]
  __int64 v148; // [rsp+288h] [rbp-228h]
  __int64 v149; // [rsp+290h] [rbp-220h]
  __int64 v150; // [rsp+298h] [rbp-218h]
  char v151; // [rsp+2A0h] [rbp-210h]
  unsigned __int64 v152; // [rsp+2A8h] [rbp-208h]
  _QWORD __src[22]; // [rsp+2B0h] [rbp-200h] BYREF
  __int64 v154; // [rsp+360h] [rbp-150h]
  _QWORD __dst[22]; // [rsp+368h] [rbp-148h] BYREF
  __int64 v156; // [rsp+418h] [rbp-98h]
  void *v157; // [rsp+420h] [rbp-90h]
  char v158; // [rsp+42Fh] [rbp-81h] BYREF
  __int64 *v159; // [rsp+430h] [rbp-80h] BYREF
  char v160; // [rsp+438h] [rbp-78h]
  signed __int64 v161; // [rsp+440h] [rbp-70h]
  signed __int64 v162; // [rsp+448h] [rbp-68h]
  unsigned __int64 v163; // [rsp+450h] [rbp-60h]
  unsigned __int64 v164; // [rsp+458h] [rbp-58h]
  signed __int64 v165; // [rsp+460h] [rbp-50h]
  __int64 v166; // [rsp+468h] [rbp-48h]
  __int64 v167; // [rsp+470h] [rbp-40h]
  unsigned __int64 v168; // [rsp+478h] [rbp-38h]
  unsigned __int64 v169; // [rsp+480h] [rbp-30h]

  v5 = 0x8000000000000001LL;
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__dst, a2, a3);
  v7 = __dst[1];
  if ( __dst[0] != 0x8000000000000000LL )
  {
    v154 = __dst[0];
    v145 = __dst[1];
    v146 = __dst[2];
    v147 = 0;
    v148 = 0;
    v149 = __dst[1];
    v150 = __dst[2];
    v142 = 0;
    v143 = 1;
    v144 = 0;
    v151 = 0x80;
    if ( !__dst[2] )
    {
LABEL_8:
      __dst[0] = 5;
      v12 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(&v142, __dst);
LABEL_9:
      v13 = v12;
      goto LABEL_10;
    }
    v8 = 1;
    v9 = 0x100002600LL;
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)(__dst[1] + v8 - 1);
      if ( v10 > 0x20 || !_bittest64(&v9, v10) )
        break;
      v147 = v8;
      v11 = v8 - __dst[2] + 1;
      ++v8;
      if ( v11 == 1 )
        goto LABEL_8;
    }
    if ( (_DWORD)v10 != 91 )
    {
      v124 = 0x8000000000000000LL;
      if ( (_DWORD)v10 == 123 )
      {
        v151 = 127;
        v147 = v8;
        v159 = &v142;
        v160 = 1;
        LOBYTE(v164) = 2;
        v157 = &anon_155c4da9b5393270cfa7378e2b52c417_229;
        v19 = 0x8000000000000001LL;
        v165 = 0x8000000000000001LL;
        v162 = 0x8000000000000001LL;
        v169 = 0x8000000000000001LL;
        while ( 1 )
        {
          v20 = v166;
          v168 = v19;
LABEL_26:
          v161 = (signed __int64)v3;
LABEL_27:
          v166 = v20;
          while ( 1 )
          {
LABEL_28:
            _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::hb6b53accb71a41fc(
              __dst,
              &v159,
              v10,
              v8,
              v6);
            if ( LOBYTE(__dst[0]) == 1 )
            {
              v35 = v169;
              __src[0] = v169;
              __src[1] = v167;
              v26 = __dst[1];
              goto LABEL_118;
            }
            if ( BYTE1(__dst[0]) != 1 )
            {
              v22 = v169;
              __src[0] = v169;
              __src[1] = v167;
              v36 = v168;
              v88 = v124;
              if ( v168 == 0x8000000000000001LL )
                v36 = v124;
              v21 = v165;
              if ( v165 == 0x8000000000000001LL )
                v21 = v124;
              if ( v169 == 0x8000000000000001LL )
              {
                v22 = v124;
                v165 = v124;
                v6 = v124;
                v168 = v124;
              }
              else
              {
                v110 = __src[2];
                v109 = __src[1];
                v165 = __src[3];
                v111 = __src[4];
                v112 = __src[5];
                v6 = __src[6];
                v113 = __src[7];
                v114 = __src[8];
                v168 = __src[9];
                v115 = __src[10];
                v116 = __src[11];
              }
              v19 = v161;
              LOBYTE(v164) = v164 & 1;
              if ( v162 != 0x8000000000000001LL )
                v88 = v162;
              v169 = v163;
              v91 = v152;
              v23 = v166;
              v89 = v125;
              v8 = v126;
              v90 = v168;
              v10 = v165;
              goto LABEL_131;
            }
            v24 = v159;
            v25 = v159 + 3;
            ++v159[5];
            v24[2] = 0;
            _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18(
              __dst,
              v25,
              v24,
              v8,
              v6);
            v26 = __dst[1];
            if ( LODWORD(__dst[0]) == 2 )
            {
              v35 = v169;
LABEL_116:
              __src[0] = v35;
              __src[1] = v167;
              goto LABEL_118;
            }
            _$LT$codexmate_lib..core..auth.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..auth..AuthFile$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h55229805c7e63a80(
              v127,
              __dst[1],
              __dst[2]);
            if ( LOBYTE(v127[0]) == 1 )
              goto LABEL_117;
            if ( BYTE1(v127[0]) != 5 )
              break;
            v27 = v24[4];
            v28 = v24[5];
            if ( v28 >= v27 )
              goto LABEL_100;
            v29 = *v25;
            v30 = v28 + 1;
            v31 = -(__int64)v27;
            while ( 1 )
            {
              v32 = *(unsigned __int8 *)(v29 + v30 - 1);
              if ( v32 > 0x3A )
                goto LABEL_188;
              v33 = 0x100002600LL;
              if ( !_bittest64(&v33, v32) )
                break;
              v24[5] = v30;
              v34 = v31 + v30++ + 1;
              if ( v34 == 1 )
                goto LABEL_100;
            }
            if ( v32 != 58 )
            {
LABEL_188:
              v35 = v169;
              __src[0] = v169;
              __src[1] = v167;
              __dst[0] = 6;
              v85 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v24, __dst);
              goto LABEL_101;
            }
            v24[5] = v30;
            v26 = serde_json::de::Deserializer$LT$R$GT$::ignore_value::ha00ea1169242c27a(v24, 58, v29, v31);
            v35 = v169;
            if ( v26 )
              goto LABEL_116;
          }
          v36 = 0x8000000000000001LL;
          switch ( BYTE1(v127[0]) )
          {
            case 0:
              if ( v168 == 0x8000000000000001LL )
              {
                v69 = v24[4];
                v70 = v24[5];
                if ( v70 >= v69 )
                {
LABEL_159:
                  v35 = v169;
                  __src[0] = v169;
                  __src[1] = v167;
                  __dst[0] = 3;
                  v168 = 0x8000000000000001LL;
                  v98 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v24, __dst);
                }
                else
                {
                  v71 = *v25;
                  v72 = v70 + 1;
                  v73 = -(__int64)v69;
                  while ( 1 )
                  {
                    v74 = *(unsigned __int8 *)(v71 + v72 - 1);
                    v3 = (_QWORD *)v161;
                    if ( v74 > 0x3A )
                      goto LABEL_208;
                    v75 = 0x100002600LL;
                    if ( !_bittest64(&v75, v74) )
                      break;
                    v24[5] = v72;
                    v76 = v73 + v72++ + 1;
                    if ( v76 == 1 )
                      goto LABEL_159;
                  }
                  if ( v74 == 58 )
                  {
                    v24[5] = v72;
                    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::ha2e27202d5147555(
                      v127,
                      v24);
                    v19 = v127[0];
                    v26 = v127[1];
                    if ( v127[0] != 0x8000000000000001LL )
                    {
                      v126 = v127[2];
                      v152 = v127[1];
                      continue;
                    }
                    v35 = v169;
                    __src[0] = v169;
                    __src[1] = v167;
                    v19 = 0x8000000000000001LL;
LABEL_119:
                    v89 = 0x8000000000000002LL;
                    if ( v162 >= (__int64)0x8000000000000002LL && v162 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, v162, 1);
                    v163 = v26;
                    v36 = 0x8000000000000001LL;
                    if ( v35 != 0x8000000000000001LL )
LABEL_123:
                      v89 = core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthTokens$GT$::h201262d26def3154(__src);
LABEL_124:
                    v88 = 0x8000000000000002LL;
                    v90 = v165;
                    if ( v165 >= (__int64)0x8000000000000002LL && v165 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v161, v165, 1);
                    if ( v19 >= (__int64)0x8000000000000002LL && v19 )
                    {
                      v90 = v19;
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v152, v19, 1);
                    }
                    v91 = v163;
LABEL_131:
                    __src[0] = v36;
                    __src[1] = v91;
                    __src[2] = v8;
                    __src[3] = v21;
                    __src[4] = v19;
                    __src[5] = v89;
                    __src[6] = v22;
                    __src[7] = v109;
                    __src[8] = v110;
                    __src[9] = v10;
                    __src[10] = v111;
                    __src[11] = v112;
                    __src[12] = v6;
                    __src[13] = v113;
                    __src[14] = v114;
                    __src[15] = v90;
                    __src[17] = v116;
                    __src[16] = v115;
                    __src[18] = v88;
                    __src[19] = v169;
                    __src[20] = v23;
                    LOBYTE(__src[21]) = v164;
                    ++v151;
                    v86 = serde_json::de::Deserializer$LT$R$GT$::end_map::h3ebe27c2713f8283(&v142);
                    memcpy(__dst, __src, sizeof(__dst));
                    v156 = v86;
                    v5 = __dst[0];
                    if ( __dst[0] == 0x8000000000000001LL )
                    {
                      v13 = __dst[1];
                      if ( v86 )
                        goto LABEL_133;
LABEL_136:
                      v5 = 0x8000000000000001LL;
                      goto LABEL_138;
                    }
LABEL_134:
                    if ( v86 )
                    {
                      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(__dst);
                      v5 = 0x8000000000000001LL;
                      v13 = v86;
                    }
                    else
                    {
                      v13 = __dst[1];
                      qmemcpy(v108, &__dst[2], sizeof(v108));
                      v164 = __dst[12];
                      v87 = __dst[13];
                      v166 = __dst[14];
                      v128 = __dst[15];
                      v129 = __dst[16];
                      v130 = __dst[17];
                      v131 = __dst[18];
                      v132 = __dst[19];
                      v133 = __dst[20];
                      v134 = __dst[21];
                    }
                    goto LABEL_138;
                  }
LABEL_208:
                  v35 = v169;
                  __src[0] = v169;
                  __src[1] = v167;
                  __dst[0] = 6;
                  v168 = 0x8000000000000001LL;
                  v98 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v24, __dst);
                }
                v26 = v98;
                v19 = 0x8000000000000001LL;
                goto LABEL_119;
              }
              v104 = 9;
              goto LABEL_204;
            case 1:
              if ( v165 != 0x8000000000000001LL )
              {
                v104 = 14;
                v105 = &anon_155c4da9b5393270cfa7378e2b52c417_230;
LABEL_203:
                v157 = v105;
LABEL_204:
                v35 = v169;
                __src[0] = v169;
                __src[1] = v167;
                v127[0] = v157;
                v127[1] = v104;
                __dst[0] = v127;
                __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
                v85 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_12);
                goto LABEL_101;
              }
              v53 = v24[4];
              v54 = v24[5];
              if ( v54 >= v53 )
              {
LABEL_157:
                v35 = v169;
                __src[0] = v169;
                __src[1] = v167;
                __dst[0] = 3;
                v165 = 0x8000000000000001LL;
                v97 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v24, __dst);
                goto LABEL_158;
              }
              v55 = *v25;
              v56 = v54 + 1;
              v57 = -(__int64)v53;
              while ( 1 )
              {
                v58 = *(unsigned __int8 *)(v55 + v56 - 1);
                if ( v58 > 0x3A )
                  goto LABEL_209;
                v59 = 0x100002600LL;
                if ( !_bittest64(&v59, v58) )
                  break;
                v24[5] = v56;
                v60 = v57 + v56++ + 1;
                if ( v60 == 1 )
                  goto LABEL_157;
              }
              if ( v58 != 58 )
              {
LABEL_209:
                v35 = v169;
                __src[0] = v169;
                __src[1] = v167;
                __dst[0] = 6;
                v165 = 0x8000000000000001LL;
                v97 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v24, __dst);
LABEL_158:
                v26 = v97;
                v165 = 0x8000000000000001LL;
LABEL_118:
                v19 = v168;
                goto LABEL_119;
              }
              v24[5] = v56;
              _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::ha2e27202d5147555(
                v127,
                v24);
              v8 = v127[0];
              v26 = v127[1];
              v165 = v127[0];
              v19 = v168;
              if ( v127[0] == 0x8000000000000001LL )
              {
                v35 = v169;
                __src[0] = v169;
                __src[1] = v167;
                v165 = 0x8000000000000001LL;
                goto LABEL_119;
              }
              v125 = v127[2];
              v3 = (_QWORD *)v127[1];
              v20 = v166;
              goto LABEL_26;
            case 2:
              if ( (_BYTE)v164 != 2 )
              {
                v104 = 25;
                v105 = &anon_155c4da9b5393270cfa7378e2b52c417_231;
                goto LABEL_203;
              }
              v37 = v24[4];
              v38 = v24[5];
              if ( v38 >= v37 )
              {
LABEL_100:
                v35 = v169;
                __src[0] = v169;
                __src[1] = v167;
                __dst[0] = 3;
                v85 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v24, __dst);
LABEL_101:
                v26 = v85;
                goto LABEL_118;
              }
              v39 = *v25;
              v40 = v38 + 1;
              v41 = -(__int64)v37;
              while ( 1 )
              {
                v42 = *(unsigned __int8 *)(v39 + v40 - 1);
                if ( v42 > 0x3A )
                  goto LABEL_188;
                v43 = 0x100002600LL;
                if ( !_bittest64(&v43, v42) )
                  break;
                v24[5] = v40;
                v44 = v41 + v40++ + 1;
                if ( v44 == 1 )
                  goto LABEL_100;
              }
              if ( v42 != 58 )
                goto LABEL_188;
              v24[5] = v40;
              _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_bool::hbe3bda5c9f6bc083(
                v127,
                v24);
              if ( LOBYTE(v127[0]) == 1 )
              {
LABEL_117:
                v35 = v169;
                __src[0] = v169;
                __src[1] = v167;
                v26 = v127[1];
                goto LABEL_118;
              }
              LOBYTE(v164) = BYTE1(v127[0]);
              goto LABEL_28;
            case 3:
              if ( v169 != 0x8000000000000001LL )
              {
                v104 = 6;
                v105 = &anon_155c4da9b5393270cfa7378e2b52c417_232;
                goto LABEL_203;
              }
              v61 = v24[4];
              v62 = v24[5];
              if ( v62 >= v61 )
              {
LABEL_161:
                __src[0] = v169;
                __src[1] = v167;
                v127[0] = 3;
                v99 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v24, v127);
LABEL_162:
                v26 = v99;
                v35 = 0x8000000000000001LL;
                goto LABEL_118;
              }
              v63 = *v25;
              v64 = v62 + 1;
              v65 = -(__int64)v61;
              while ( 1 )
              {
                v66 = *(unsigned __int8 *)(v63 + v64 - 1);
                v3 = (_QWORD *)v161;
                if ( v66 > 0x3A )
                  goto LABEL_205;
                v67 = 0x100002600LL;
                if ( !_bittest64(&v67, v66) )
                  break;
                v24[5] = v64;
                v68 = v65 + v64++ + 1;
                if ( v68 == 1 )
                  goto LABEL_161;
              }
              if ( v66 != 58 )
              {
LABEL_205:
                __src[0] = v169;
                __src[1] = v167;
                v127[0] = 6;
                v99 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v24, v127);
                goto LABEL_162;
              }
              v24[5] = v64;
              _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hbd866c70e71a5ddf(
                __dst,
                v24);
              v26 = __dst[1];
              v8 = 0x8000000000000001LL;
              v19 = v168;
              if ( __dst[0] == 0x8000000000000001LL )
              {
                __src[0] = v169;
                __src[1] = v167;
                v35 = 0x8000000000000001LL;
                goto LABEL_119;
              }
              qmemcpy(&__src[2], &__dst[2], 0x50u);
              v8 = 0;
              v167 = __dst[1];
              v169 = __dst[0];
              break;
            case 4:
              if ( v162 != 0x8000000000000001LL )
              {
                v104 = 12;
                v105 = &anon_155c4da9b5393270cfa7378e2b52c417_233;
                goto LABEL_203;
              }
              v45 = v24[4];
              v46 = v24[5];
              if ( v46 >= v45 )
              {
LABEL_163:
                v100 = v169;
                __src[0] = v169;
                __src[1] = v167;
                __dst[0] = 3;
                v162 = 0x8000000000000001LL;
                v89 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v24, __dst);
                goto LABEL_164;
              }
              v47 = *v25;
              v48 = v46 + 1;
              v49 = -(__int64)v45;
              while ( 1 )
              {
                v50 = *(unsigned __int8 *)(v47 + v48 - 1);
                if ( v50 > 0x3A )
                  goto LABEL_206;
                v51 = 0x100002600LL;
                if ( !_bittest64(&v51, v50) )
                  break;
                v24[5] = v48;
                v52 = v49 + v48++ + 1;
                if ( v52 == 1 )
                  goto LABEL_163;
              }
              if ( v50 != 58 )
              {
LABEL_206:
                v100 = v169;
                __src[0] = v169;
                __src[1] = v167;
                __dst[0] = 6;
                v162 = 0x8000000000000001LL;
                v89 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v24, __dst);
LABEL_164:
                v163 = v89;
                v36 = 0x8000000000000001LL;
                v19 = v168;
                if ( v100 != 0x8000000000000001LL )
                  goto LABEL_123;
                goto LABEL_124;
              }
              v24[5] = v48;
              codexmate_lib::core::auth::deserialize_optional_timestamp::he4b1cefbe1c705b8(__dst, v24);
              v8 = __dst[0];
              v163 = __dst[1];
              v162 = __dst[0];
              if ( __dst[0] == 0x8000000000000001LL )
              {
                __src[0] = v169;
                v89 = v167;
                __src[1] = v167;
                v19 = v168;
                if ( v169 != 0x8000000000000001LL )
                  goto LABEL_123;
                goto LABEL_124;
              }
              v20 = __dst[2];
              goto LABEL_27;
          }
        }
      }
      v13 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::he849ce64b4cb8cbf(&v142, &v158, &unk_10196F398);
LABEL_197:
      v12 = serde_json::error::Error::fix_position::h284fb95b94477b8f(v13, &v142);
      v5 = 0x8000000000000001LL;
      goto LABEL_9;
    }
    v151 = 127;
    v147 = v8;
    v159 = &v142;
    v160 = 1;
    v77 = (__int64)__dst;
    v78 = &v159;
    v79 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982(
            __dst,
            &v159,
            v10,
            v8,
            v6);
    if ( LOBYTE(__dst[0]) == 1 )
    {
      v84 = (_QWORD *)__dst[1];
      goto LABEL_103;
    }
    if ( BYTE1(__dst[0]) != 1 )
    {
      v78 = &off_10196DFC8;
      v77 = 0;
      v79 = serde_core::de::Error::invalid_length::ha846d443e92fc6f9(0, &off_10196DFC8, &unk_10196DFD8);
      v84 = (_QWORD *)v79;
      goto LABEL_103;
    }
    v78 = v159;
    v77 = (__int64)__dst;
    v79 = _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::ha2e27202d5147555(
            __dst,
            v159);
    v5 = __dst[0];
    v84 = (_QWORD *)__dst[1];
    if ( __dst[0] == 0x8000000000000001LL )
    {
      v5 = 0x8000000000000001LL;
      goto LABEL_103;
    }
    v169 = __dst[2];
    v77 = (__int64)__dst;
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982(
      __dst,
      &v159,
      v80,
      0x8000000000000001LL,
      v81);
    if ( LOBYTE(__dst[0]) == 1 )
    {
      v78 = (_QWORD *)__dst[1];
      goto LABEL_173;
    }
    if ( BYTE1(__dst[0]) != 1 )
    {
      v77 = 1;
      v78 = (_QWORD *)serde_core::de::Error::invalid_length::ha846d443e92fc6f9(1, &off_10196DFC8, &unk_10196DFD8);
      goto LABEL_173;
    }
    v77 = (__int64)__dst;
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::ha2e27202d5147555(
      __dst,
      v159);
    v78 = (_QWORD *)__dst[1];
    if ( __dst[0] == 0x8000000000000001LL )
    {
LABEL_173:
      v79 = 2 * v5;
      if ( 2 * v5 )
      {
        v3 = v78;
        v77 = (__int64)v84;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v5, 1);
      }
      v84 = v78;
      v5 = 0x8000000000000001LL;
      goto LABEL_103;
    }
    v166 = __dst[0];
    v164 = __dst[1];
    v168 = __dst[2];
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982(
      __dst,
      &v159,
      v80,
      __dst[0],
      v81);
    if ( LOBYTE(__dst[0]) == 1 )
      goto LABEL_169;
    if ( BYTE1(__dst[0]) == 1 )
    {
      _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_bool::hbe3bda5c9f6bc083(
        __dst,
        v159);
      if ( LOBYTE(__dst[0]) == 1 )
      {
LABEL_169:
        v3 = (_QWORD *)__dst[1];
LABEL_170:
        v77 = v164;
        if ( 2 * v166 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v164, v166, 1);
        v78 = v3;
        goto LABEL_173;
      }
      v3 = (_QWORD *)BYTE1(__dst[0]);
    }
    else
    {
      v3 = nullptr;
    }
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982(
      __dst,
      &v159,
      v80,
      v96,
      v81);
    if ( LOBYTE(__dst[0]) == 1 )
      goto LABEL_169;
    LODWORD(v161) = (_DWORD)v3;
    if ( BYTE1(__dst[0]) == 1 )
    {
      _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hbd866c70e71a5ddf(
        __dst,
        v159);
      v102 = __dst[0];
      v3 = (_QWORD *)__dst[1];
      if ( __dst[0] == 0x8000000000000001LL )
        goto LABEL_170;
      qmemcpy(&__src[2], &__dst[2], 0x50u);
      v101 = 0;
      __src[1] = __dst[1];
    }
    else
    {
      v102 = 0x8000000000000000LL;
      __src[3] = 0x8000000000000000LL;
      __src[6] = 0x8000000000000000LL;
      __src[9] = 0x8000000000000000LL;
    }
    __src[0] = v102;
    v79 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982(
            __dst,
            &v159,
            v80,
            v101,
            v81);
    if ( LOBYTE(__dst[0]) == 1 )
    {
      v3 = (_QWORD *)__dst[1];
LABEL_187:
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthTokens$GT$::h201262d26def3154(__src);
      goto LABEL_170;
    }
    if ( BYTE1(__dst[0]) == 1 )
    {
      codexmate_lib::core::auth::deserialize_optional_timestamp::he4b1cefbe1c705b8(__dst, v159);
      v103 = __dst[0];
      v3 = (_QWORD *)__dst[1];
      if ( __dst[0] == 0x8000000000000001LL )
        goto LABEL_187;
      v79 = __dst[2];
    }
    else
    {
      v103 = 0x8000000000000001LL;
    }
    v80 = 0x8000000000000000LL;
    if ( v103 != 0x8000000000000001LL )
      v80 = v103;
    qmemcpy(v127, __src, sizeof(v127));
    v78 = (_QWORD *)v164;
    v77 = v166;
    v81 = v169;
    v82 = v168;
    v83 = v161;
LABEL_103:
    ++v151;
    __src[0] = v5;
    __src[1] = v84;
    __src[2] = v81;
    __src[3] = v77;
    __src[4] = v78;
    __src[5] = v82;
    qmemcpy(&__src[6], v127, 0x60u);
    __src[18] = v80;
    __src[19] = v3;
    __src[20] = v79;
    LOBYTE(__src[21]) = v83;
    v86 = serde_json::de::Deserializer$LT$R$GT$::end_seq::h1305a2fb247a2b5c(&v142);
    memcpy(__dst, __src, sizeof(__dst));
    v156 = v86;
    v5 = __dst[0];
    if ( __dst[0] != 0x8000000000000001LL )
      goto LABEL_134;
    v13 = __dst[1];
    if ( !v86 )
      goto LABEL_136;
LABEL_133:
    core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v86);
    v5 = 0x8000000000000001LL;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, 40, 8);
LABEL_138:
    v169 = v87;
    if ( v5 != 0x8000000000000001LL )
    {
      qmemcpy(v106, v108, sizeof(v106));
      v141 = v134;
      v140 = v133;
      v139 = v132;
      v138 = v131;
      v137 = v130;
      v136 = v129;
      v135 = v128;
      __dst[0] = v5;
      __dst[1] = v13;
      qmemcpy(&__dst[2], v106, 0x50u);
      __dst[12] = v164;
      __dst[13] = v169;
      __dst[14] = v166;
      __dst[15] = v128;
      __dst[16] = v129;
      __dst[17] = v130;
      __dst[18] = v131;
      __dst[19] = v132;
      __dst[20] = v133;
      __dst[21] = v134;
      if ( v147 < v146 )
      {
        v92 = v147 + 1;
        v93 = 0x100002600LL;
        while ( 1 )
        {
          v94 = *(unsigned __int8 *)(v145 + v92 - 1);
          if ( v94 > 0x20 || !_bittest64(&v93, v94) )
            break;
          v147 = v92;
          v95 = v92 - v146 + 1;
          ++v92;
          if ( v95 == 1 )
            goto LABEL_10;
        }
        __src[0] = 22;
        v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(&v142, __src);
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(__dst);
        v5 = 0x8000000000000001LL;
      }
LABEL_10:
      if ( v142 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, v142, 1);
      if ( v5 == 0x8000000000000001LL )
      {
        a1[1] = 3;
        a1[2] = v13;
        *a1 = 0x8000000000000001LL;
        v14 = v154;
        if ( !v154 )
          return a1;
        goto LABEL_20;
      }
      qmemcpy(v107, v106, sizeof(v107));
      v123 = v141;
      v122 = v140;
      v121 = v139;
      v120 = v138;
      v119 = v137;
      v118 = v136;
      v117 = v135;
      v15 = 0x8000000000000000LL;
      if ( v164 == 0x8000000000000000LL )
        goto LABEL_16;
      v16 = v166;
      if ( v166 )
      {
        v15 = v164;
      }
      else if ( v164 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v169, v164, 1);
LABEL_16:
        v16 = v166;
      }
      *a1 = v5;
      a1[1] = v13;
      qmemcpy(a1 + 2, v107, 0x50u);
      a1[12] = v15;
      a1[13] = v169;
      a1[14] = v16;
      v17 = v118;
      a1[15] = v117;
      a1[16] = v17;
      a1[17] = v119;
      a1[18] = v120;
      a1[19] = v121;
      a1[20] = v122;
      a1[21] = v123;
      v14 = v154;
      if ( !v154 )
        return a1;
LABEL_20:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v14, 1);
      return a1;
    }
    goto LABEL_197;
  }
  a1[1] = 2;
  a1[2] = v7;
  *a1 = 0x8000000000000001LL;
  return a1;
}
