// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14066c680
// name: codex_local_compact_compat_response
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::proxy_server::codex_local_compact_compat_response | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall codex_local_compact_compat_response(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r14
  __m128i v13; // xmm6
  __m128i si128; // xmm7
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  const char *v21; // rdx
  _QWORD *v22; // rax
  __int128 v23; // kr00_16
  _QWORD *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 (__fastcall *v27)(_QWORD, _QWORD); // rdx
  __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  _BYTE *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rdi
  _QWORD *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // r15
  __m128i *v53; // rax
  __m128i *v54; // rsi
  __int64 v55; // rcx
  __int64 *v56; // rdi
  __int64 v57; // r9
  __int64 v58; // r8
  void *v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rax
  bool v62; // zf
  __int64 v63; // rdx
  __int64 v64; // rcx
  _WORD *v65; // rax
  int v66; // r13d
  int v67; // r14d
  int v68; // eax
  int v69; // ecx
  unsigned int v70; // eax
  int v71; // edi
  __int64 v72; // rbx
  int v73; // edi
  __int64 v74; // rsi
  __int64 v75; // r12
  __int64 v76; // rax
  __int64 v77; // r15
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  _QWORD *v81; // rax
  __int64 v82; // rcx
  void *v83; // rax
  int v84; // ecx
  unsigned int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r15
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rsi
  _DWORD *v103; // rax
  __int64 v104; // rcx
  void *v105; // rax
  __int64 v106; // rcx
  __m128i *v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rsi
  __int64 v110; // r15
  _DWORD *v111; // rbx
  __int64 v112; // rax
  __int64 v113; // r14
  __int64 v114; // rsi
  __int64 v115; // rcx
  __m128i v116; // xmm0
  __int64 v117; // rcx
  _QWORD *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  __m128i *v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  void *v129; // rax
  __int64 v130; // rcx
  void *v131; // rax
  __int64 v132; // rcx
  void *v133; // rax
  _BYTE *v134; // rax
  __int64 v135; // rsi
  __int16 v136; // cx
  __m128i v137; // xmm1
  __int64 v138; // rax
  void (__fastcall **v139)(__int64); // rdx
  __int64 v140; // r8
  __int128 v141; // xmm0
  __m128i v142; // xmm1
  __m128i v143; // xmm2
  __int64 v144; // rdx
  _QWORD v146[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v147; // [rsp+58h] [rbp-28h]
  __int64 v148; // [rsp+60h] [rbp-20h]
  __int64 v149; // [rsp+68h] [rbp-18h]
  int v150; // [rsp+74h] [rbp-Ch] BYREF
  unsigned int v151; // [rsp+78h] [rbp-8h]
  unsigned int v152; // [rsp+7Ch] [rbp-4h]
  __int64 v153; // [rsp+80h] [rbp+0h]
  __m128i v154; // [rsp+88h] [rbp+8h] BYREF
  __int64 v155; // [rsp+98h] [rbp+18h]
  _BYTE *v156; // [rsp+A0h] [rbp+20h] BYREF
  __int64 (__fastcall *v157)(_QWORD, _QWORD); // [rsp+A8h] [rbp+28h]
  __m256i v158; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v159; // [rsp+D0h] [rbp+50h]
  __int128 v160; // [rsp+E0h] [rbp+60h]
  __int128 v161; // [rsp+F0h] [rbp+70h]
  __int128 v162; // [rsp+100h] [rbp+80h]
  __int64 v163; // [rsp+118h] [rbp+98h]
  __m256i v164; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v165; // [rsp+140h] [rbp+C0h]
  __int128 v166; // [rsp+150h] [rbp+D0h]
  __int128 v167; // [rsp+160h] [rbp+E0h]
  __int128 v168; // [rsp+170h] [rbp+F0h]
  __int64 v169; // [rsp+198h] [rbp+118h] BYREF
  _DWORD *v170; // [rsp+1A0h] [rbp+120h]
  __int64 v171; // [rsp+1A8h] [rbp+128h]
  __int64 v172; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v173; // [rsp+1B8h] [rbp+138h]
  __m128i v174[5]; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v175; // [rsp+218h] [rbp+198h]
  __int64 v176; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v177; // [rsp+228h] [rbp+1A8h]
  __int64 v178; // [rsp+238h] [rbp+1B8h]
  _BYTE v179[40]; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v180; // [rsp+268h] [rbp+1E8h]
  __int128 v181; // [rsp+278h] [rbp+1F8h]
  __int128 v182; // [rsp+288h] [rbp+208h]
  __int128 v183; // [rsp+298h] [rbp+218h]
  __int16 v184; // [rsp+2A8h] [rbp+228h]
  __int32 v185; // [rsp+2AAh] [rbp+22Ah]
  __int16 v186; // [rsp+2AEh] [rbp+22Eh]
  __int128 v187; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v188; // [rsp+2C8h] [rbp+248h]
  __int64 v189; // [rsp+2D0h] [rbp+250h]
  __int64 v190; // [rsp+2D8h] [rbp+258h]
  char v191; // [rsp+2E1h] [rbp+261h]
  char v192; // [rsp+2E2h] [rbp+262h]
  char v193; // [rsp+2E3h] [rbp+263h]
  char v194; // [rsp+2E4h] [rbp+264h]
  char v195; // [rsp+2E5h] [rbp+265h]
  char v196; // [rsp+2E6h] [rbp+266h]
  char v197; // [rsp+2E7h] [rbp+267h]
  __int64 v198; // [rsp+2E8h] [rbp+268h]
  char v199; // [rsp+2F7h] [rbp+277h]
  __int64 v200; // [rsp+2F8h] [rbp+278h]
  char v201; // [rsp+306h] [rbp+286h]
  char v202; // [rsp+307h] [rbp+287h]
  __int64 v203; // [rsp+308h] [rbp+288h]

  v203 = -2;
  v163 = a4;
  v147 = a3;
  sub_140FFA6E0(&v150);
  v154.m128i_i64[0] = 0;
  v155 = 0;
  nullsub_1(v6);
  v7 = (_DWORD *)sub_140001650(7, 1);
  if ( !v7 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v7 + 3) = 1852795251;
  *v7 = 1936876918;
  v172 = 7;
  *(_QWORD *)&v173 = v7;
  *((_QWORD *)&v173 + 1) = 7;
  v179[0] = 2;
  *(_QWORD *)&v179[8] = 0;
  *(_QWORD *)&v179[16] = 1;
  sub_140307860(&v164, &v154, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v8);
  v9 = (_DWORD *)sub_140001650(7, 1);
  if ( !v9 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v9 + 3) = 2037539181;
  *v9 = 1835890035;
  v169 = 7;
  v170 = v9;
  v171 = 7;
  *(_QWORD *)&v187 = 0;
  *((_QWORD *)&v187 + 1) = 8;
  v188 = 0;
  v190 = 7;
  v148 = a2;
  v10 = sub_141433D50(aInput_1, 5, a2);
  if ( v10 && *(_BYTE *)v10 == 4 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    v12 = v11 + 32LL * *(_QWORD *)(v10 + 24);
    v13 = _mm_cvtsi32_si128(0x74757074u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1417640C0);
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( v11 == v12 )
            goto LABEL_49;
          v15 = v11;
          v190 = 7;
          v16 = sub_141433D50(aType_5, 4, v11);
          v11 += 32;
        }
        while ( !v16 || *(_BYTE *)v16 != 3 );
        v17 = *(_QWORD *)(v16 + 16);
        v18 = *(_QWORD *)(v16 + 24);
        if ( v18 == 20 )
          break;
        if ( v18 == 13 )
        {
          if ( !(*(_QWORD *)v17 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v17 + 5) ^ 0x6C6C61635F6E6F69LL) )
          {
            v190 = 7;
            v30 = sub_141433D50(aName_4, 4, v15);
            v31 = 4;
            if ( v30 )
            {
              v32 = &unk_14177C4B6;
              if ( *(_BYTE *)v30 == 3 )
              {
                v32 = *(_BYTE **)(v30 + 16);
                v31 = *(_QWORD *)(v30 + 24);
              }
            }
            else
            {
              v32 = &unk_14177C4B6;
            }
            v156 = v32;
            v157 = (__int64 (__fastcall *)(_QWORD, _QWORD))v31;
            v190 = 7;
            v33 = sub_141433D50(aArguments_0, 9, v15);
            v34 = 1;
            if ( v33 && *(_BYTE *)v33 == 3 )
            {
              v34 = *(_QWORD *)(v33 + 16);
              v35 = *(_QWORD *)(v33 + 24);
            }
            else
            {
              v35 = 0;
            }
            v190 = 7;
            sub_140667570(&v172, v34, v35, 0x7D0u);
            *(_QWORD *)v179 = &v156;
            *(_QWORD *)&v179[8] = sub_14041F680;
            *(_QWORD *)&v179[16] = &v172;
            *(_QWORD *)&v179[24] = sub_1400015F0;
            sub_14149C0F0(&v158, &unk_14177C4C3, v179);
            if ( v172 )
              sub_140001660(v173, v172, 1);
            v200 = v158.m256i_i64[1];
            v28 = v158.m256i_i64[0];
            v198 = v158.m256i_i64[2];
LABEL_45:
            if ( v28 != -1 )
            {
              v189 = v28;
              v39 = v188;
              if ( v188 == (_QWORD)v187 )
                sub_141689AB0(&v187);
              v40 = *((_QWORD *)&v187 + 1);
              v41 = 3 * v39;
              *(_QWORD *)(*((_QWORD *)&v187 + 1) + 8 * v41) = v189;
              *(_QWORD *)(v40 + 8 * v41 + 8) = v200;
              *(_QWORD *)(v40 + 8 * v41 + 16) = v198;
              v188 = v39 + 1;
            }
          }
        }
        else if ( v18 == 7 && !(*(_DWORD *)v17 ^ 0x7373656D | *(_DWORD *)(v17 + 3) ^ 0x65676173) )
        {
          v190 = 7;
          v19 = sub_141433D50(aRole_1, 4, v15);
          v20 = 4;
          if ( v19 )
          {
            v21 = aUser_1;
            if ( *(_BYTE *)v19 == 3 )
            {
              v21 = *(const char **)(v19 + 16);
              v20 = *(_QWORD *)(v19 + 24);
            }
          }
          else
          {
            v21 = aUser_1;
          }
          v146[0] = v21;
          v146[1] = v20;
          v190 = 7;
          v24 = (_QWORD *)sub_141433D50(aContent_3, 7, v15);
          if ( v24 )
          {
            v190 = 7;
            chat_to_responses_response((__int64)&v172, v24);
            v25 = *((_QWORD *)&v173 + 1);
            v189 = v173;
            sub_14033BC10(v173, *((_QWORD *)&v173 + 1));
            if ( v26 )
            {
              v156 = (_BYTE *)sub_14033BC10(v189, v25);
              v157 = v27;
              *(_QWORD *)v179 = v146;
              *(_QWORD *)&v179[8] = sub_14041F680;
              *(_QWORD *)&v179[16] = &v156;
              *(_QWORD *)&v179[24] = sub_14041F680;
              sub_14149C0F0(&v176, &unk_1417673B0, v179);
              v28 = v176;
              v198 = *((_QWORD *)&v177 + 1);
              v29 = v177;
              goto LABEL_43;
            }
LABEL_42:
            v28 = -1;
            v29 = v200;
LABEL_43:
            v200 = v29;
            if ( v172 )
              sub_140001660(v189, v172, 1);
            goto LABEL_45;
          }
        }
      }
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v17 + 16)), v13),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v17), si128))) == 0xFFFF )
      {
        v190 = 7;
        v22 = (_QWORD *)sub_141433D50(aOutput_0, 6, v15);
        if ( v22 )
        {
          v190 = 7;
          chat_to_responses_response((__int64)&v172, v22);
          v23 = v173;
        }
        else
        {
          v172 = 0;
          *(_QWORD *)&v173 = 1;
          v23 = 1u;
        }
        v189 = v23;
        sub_14033BC10(v23, *((_QWORD *)&v23 + 1));
        if ( v36 )
        {
          v37 = sub_14033BC10(v189, *((_QWORD *)&v23 + 1));
          sub_140667570((__int64 *)v179, v37, v38, 0x7D0u);
          v156 = v179;
          v157 = sub_1400015F0;
          sub_14149C0F0(&v164, &unk_14177C4A2, &v156);
          if ( *(_QWORD *)v179 )
            sub_140001660(*(_QWORD *)&v179[8], *(_QWORD *)v179, 1);
          v29 = v164.m256i_i64[1];
          v28 = v164.m256i_i64[0];
          v198 = v164.m256i_i64[2];
          goto LABEL_43;
        }
        goto LABEL_42;
      }
    }
  }
LABEL_49:
  v190 = 7;
  sub_140440300((unsigned int)v179, DWORD2(v187), v188, (unsigned int)&unk_141767EA8, 1);
  v153 = *(_QWORD *)&v179[8];
  v198 = *(_QWORD *)v179;
  sub_140667570((__int64 *)v179, *(__int64 *)&v179[8], *(__int64 *)&v179[16], 0x2EE0u);
  v42 = *(_QWORD *)&v179[16];
  v200 = *(_QWORD *)&v179[8];
  sub_14033BC10(*(_QWORD *)&v179[8], *(_QWORD *)&v179[16]);
  if ( v44 )
  {
    v45 = *(_QWORD *)v179;
    v149 = a1;
    v46 = v198;
    if ( !v198 )
      goto LABEL_52;
    goto LABEL_51;
  }
  nullsub_1(v43);
  v45 = 58;
  v53 = (__m128i *)sub_140001650(58, 1);
  if ( !v53 )
    sub_1416C2D4B(1, 58);
  v54 = v53;
  qmemcpy(&v53[1], "text was available in the compact request.", 42);
  *v53 = _mm_loadu_si128(&xmmword_14177C594);
  if ( *(_QWORD *)v179 )
    sub_140001660(v200, *(_QWORD *)v179, 1);
  v200 = (__int64)v54;
  v42 = 58;
  v149 = a1;
  v46 = v198;
  if ( v198 )
LABEL_51:
    sub_140001660(v153, v46, 1);
LABEL_52:
  v47 = v188;
  if ( v188 )
  {
    v48 = (_QWORD *)(*((_QWORD *)&v187 + 1) + 8LL);
    do
    {
      v49 = *(v48 - 1);
      if ( v49 )
        sub_140001660(*v48, v49, 1);
      v48 += 3;
      --v47;
    }
    while ( v47 );
  }
  if ( (_QWORD)v187 )
    sub_140001660(*((_QWORD *)&v187 + 1), 24 * v187, 8);
  v189 = v45;
  if ( v42 < 0 )
  {
    v50 = 0;
    goto LABEL_61;
  }
  if ( v42 )
  {
    nullsub_1(v43);
    v50 = 1;
    v51 = sub_140001650(v42, 1);
    if ( !v51 )
    {
LABEL_61:
      v197 = 1;
      sub_1416C2D4B(v50, v42);
    }
    v52 = v51;
    sub_141684120(v51, v200, v42);
  }
  else
  {
    v52 = 1;
  }
  v179[0] = 3;
  *(_QWORD *)&v179[8] = v42;
  *(_QWORD *)&v179[16] = v52;
  *(_QWORD *)&v179[24] = v42;
  v197 = 0;
  sub_140307860(&v164, &v154, &v169, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  if ( v189 )
    sub_140001660(v200, v189, 1);
  *(__m128i *)&v164.m256i_u64[1] = _mm_loadu_si128(&v154);
  v164.m256i_i64[3] = v155;
  v164.m256i_i8[0] = 5;
  sub_1405E9C00(v179, (__int64)&v164);
  v56 = *(__int64 **)&v179[8];
  if ( *(_QWORD *)v179 == -1 )
  {
    v172 = *(_QWORD *)&v179[8];
    nullsub_1(v55);
    v59 = (void *)sub_140001650(13, 1);
    if ( !v59 )
      sub_1416C2D4B(1, 13);
    v60 = (__int64)v59;
    qmemcpy(v59, "{\"version\":1}", 13);
    v61 = *v56;
    v62 = *v56 == 1;
    v198 = (__int64)v56;
    if ( v62 )
    {
      sub_140018650(v56 + 1);
    }
    else if ( !v61 )
    {
      v63 = *(_QWORD *)(v198 + 16);
      if ( v63 )
        sub_140001660(*(_QWORD *)(v198 + 8), v63, 1);
    }
    sub_140001660(v198, 40, 8);
    v200 = 13;
    v57 = 13;
    v58 = v60;
  }
  else
  {
    v200 = *(_QWORD *)v179;
    v57 = *(_QWORD *)&v179[16];
    v58 = *(_QWORD *)&v179[8];
  }
  v198 = v58;
  sub_140443D50(&v172, &unk_14177C5FC, v58, v57);
  if ( v200 )
    sub_140001660(v198, v200, 1);
  *(_QWORD *)v179 = &off_14177C748;
  *(_QWORD *)&v179[8] = sub_14041F680;
  *(_QWORD *)&v179[16] = &v172;
  *(_QWORD *)&v179[24] = sub_1400015F0;
  sub_14149C0F0(&v169, &unk_14177C758, v179);
  if ( v172 )
    sub_140001660(v173, v172, 1);
  sub_1400104F0(&v164);
  *(_QWORD *)&v187 = 0;
  v188 = 0;
  nullsub_1(v64);
  v65 = (_WORD *)sub_140001650(2, 1);
  if ( !v65 )
    sub_1416C2D4B(1, 2);
  *v65 = 25705;
  v172 = 2;
  v200 = (__int64)v65;
  *(_QWORD *)&v173 = v65;
  *((_QWORD *)&v173 + 1) = 2;
  v66 = v150 >> 13;
  v67 = (v150 >> 13) - 1;
  v68 = 0;
  v69 = v67;
  if ( v150 >> 13 <= 0 )
  {
    v70 = (1 - v66) / 0x190u + 1;
    v69 = v67 + 400 * v70;
    v68 = -146097 * v70;
  }
  v71 = ((unsigned int)v150 >> 4) & 0x1FF;
  v72 = v151;
  v158.m256i_i64[0] = 1000
                    * (v151 + 86400LL * (((v69 / 100) >> 2) + ((1461 * v69) >> 2) + v71 + v68 - 719163 - v69 / 100))
                    + v152 / 0xF4240uLL;
  v164.m256i_i64[0] = (__int64)&v158;
  v164.m256i_i64[1] = (__int64)sub_1414AC5F0;
  sub_14149C0F0(v179, &unk_14177C77D, &v164);
  v73 = v71 - 719163;
  v198 = *(_QWORD *)&v179[8];
  v74 = *(_QWORD *)&v179[16];
  v200 = *(_QWORD *)v179;
  if ( *(__int64 *)&v179[16] < 0 )
  {
    v75 = 0;
    goto LABEL_93;
  }
  if ( *(_QWORD *)&v179[16] )
  {
    nullsub_1(*(_QWORD *)&v179[8]);
    v75 = 1;
    v76 = sub_140001650(v74, 1);
    if ( !v76 )
    {
LABEL_93:
      v196 = 1;
      sub_1416C2D4B(v75, v74);
    }
    v77 = v76;
    sub_141684120(v76, v198, v74);
  }
  else
  {
    v77 = 1;
  }
  v179[0] = 3;
  *(_QWORD *)&v179[8] = v74;
  *(_QWORD *)&v179[16] = v77;
  *(_QWORD *)&v179[24] = v74;
  v196 = 0;
  sub_140307860(&v164, &v187, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  if ( v200 )
    sub_140001660(v198, v200, 1);
  nullsub_1(v78);
  v79 = sub_140001650(6, 1);
  if ( !v79 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v79 + 4) = 29795;
  *(_DWORD *)v79 = 1701470831;
  v172 = 6;
  *(_QWORD *)&v173 = v79;
  *((_QWORD *)&v173 + 1) = 6;
  nullsub_1(v80);
  v81 = (_QWORD *)sub_140001650(8, 1);
  v200 = (__int64)v81;
  if ( !v81 )
    sub_1416C2D4B(1, 8);
  *v81 = 0x65736E6F70736572LL;
  v179[0] = 3;
  *(_QWORD *)&v179[8] = 8;
  *(_QWORD *)&v179[16] = v81;
  *(_QWORD *)&v179[24] = 8;
  sub_140307860(&v164, &v187, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v82);
  v83 = (void *)sub_140001650(10, 1);
  if ( !v83 )
    sub_1416C2D4B(1, 10);
  v84 = 0;
  qmemcpy(v83, "created_at", 10);
  v172 = 10;
  *(_QWORD *)&v173 = v83;
  *((_QWORD *)&v173 + 1) = 10;
  if ( v66 <= 0 )
  {
    v85 = (1 - v66) / 0x190u + 1;
    v67 += 400 * v85;
    v84 = -146097 * v85;
  }
  v179[0] = 2;
  *(_QWORD *)&v179[8] = (unsigned __int64)(v72
                                         + 86400LL * (((v67 / 100) >> 2) + ((1461 * v67) >> 2) + v73 + v84 - v67 / 100)) >> 63;
  *(_QWORD *)&v179[16] = v72 + 86400LL * (((v67 / 100) >> 2) + ((1461 * v67) >> 2) + v73 + v84 - v67 / 100);
  sub_140307860(&v164, &v187, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v86);
  v87 = sub_140001650(6, 1);
  if ( !v87 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v87 + 4) = 29557;
  *(_DWORD *)v87 = 1952543859;
  v172 = 6;
  *(_QWORD *)&v173 = v87;
  *((_QWORD *)&v173 + 1) = 6;
  nullsub_1(v88);
  v89 = sub_140001650(9, 1);
  v200 = v89;
  if ( !v89 )
    sub_1416C2D4B(1, 9);
  *(_QWORD *)v89 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v89 + 8) = 100;
  v179[0] = 3;
  *(_QWORD *)&v179[8] = 9;
  *(_QWORD *)&v179[16] = v89;
  *(_QWORD *)&v179[24] = 9;
  sub_140307860(&v164, &v187, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v90);
  v91 = sub_140001650(5, 1);
  if ( !v91 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v91 + 4) = 108;
  *(_DWORD *)v91 = 1701080941;
  v172 = 5;
  *(_QWORD *)&v173 = v91;
  *((_QWORD *)&v173 + 1) = 5;
  v93 = v163;
  if ( v163 < 0 )
  {
    v94 = 0;
    goto LABEL_118;
  }
  if ( v163 )
  {
    nullsub_1(v92);
    v94 = 1;
    v95 = sub_140001650(v163, 1);
    v93 = v163;
    if ( !v95 )
    {
LABEL_118:
      v195 = 1;
      sub_1416C2D4B(v94, v93);
    }
    v96 = v95;
    sub_141684120(v95, v147, v163);
    v93 = v163;
  }
  else
  {
    v96 = 1;
  }
  v179[0] = 3;
  *(_QWORD *)&v179[8] = v93;
  *(_QWORD *)&v179[16] = v96;
  *(_QWORD *)&v179[24] = v93;
  v195 = 0;
  sub_140307860(&v164, &v187, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v97);
  v98 = sub_140001650(6, 1);
  if ( !v98 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v98 + 4) = 29813;
  *(_DWORD *)v98 = 1886680431;
  v176 = 6;
  *(_QWORD *)&v177 = v98;
  *((_QWORD *)&v177 + 1) = 6;
  nullsub_1(v99);
  v100 = sub_140001650(32, 8);
  if ( !v100 )
  {
    v199 = 1;
    sub_1416C2D31(8, 32);
  }
  v102 = v100;
  v158.m256i_i64[0] = 0;
  v158.m256i_i64[2] = 0;
  nullsub_1(v101);
  v103 = (_DWORD *)sub_140001650(4, 1);
  v200 = v102;
  if ( !v103 )
    sub_1416C2D4B(1, 4);
  *v103 = 1701869940;
  v172 = 4;
  *(_QWORD *)&v173 = v103;
  *((_QWORD *)&v173 + 1) = 4;
  nullsub_1(v104);
  v105 = (void *)sub_140001650(10, 1);
  v198 = (__int64)v105;
  if ( !v105 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v105, "compaction", 10);
  v179[0] = 3;
  *(_QWORD *)&v179[8] = 10;
  *(_QWORD *)&v179[16] = v105;
  *(_QWORD *)&v179[24] = 10;
  sub_140307860(&v164, &v158, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v106);
  v107 = (__m128i *)sub_140001650(17, 1);
  if ( !v107 )
    sub_1416C2D4B(1, 17);
  *v107 = _mm_loadu_si128((const __m128i *)aEncryptedConte);
  v107[1].m128i_i8[0] = 116;
  v172 = 17;
  *(_QWORD *)&v173 = v107;
  *((_QWORD *)&v173 + 1) = 17;
  v109 = v171;
  if ( v171 < 0 )
  {
    v110 = 0;
    goto LABEL_134;
  }
  v111 = v170;
  if ( v171 )
  {
    nullsub_1(v108);
    v110 = 1;
    v112 = sub_140001650(v109, 1);
    if ( !v112 )
    {
LABEL_134:
      v194 = 1;
      sub_1416C2D4B(v110, v109);
    }
    v113 = v112;
    sub_141684120(v112, v111, v109);
  }
  else
  {
    v113 = 1;
  }
  v179[0] = 3;
  *(_QWORD *)&v179[8] = v109;
  *(_QWORD *)&v179[16] = v113;
  *(_QWORD *)&v179[24] = v109;
  v194 = 0;
  sub_140307860(&v164, &v158, &v172, v179);
  v114 = v148;
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  *(_OWORD *)&v179[7] = *(_OWORD *)v158.m256i_i8;
  *(_QWORD *)&v179[23] = v158.m256i_i64[2];
  v115 = v200;
  *(_BYTE *)v200 = 5;
  v116 = _mm_loadu_si128((const __m128i *)v179);
  *(_OWORD *)(v115 + 16) = *(_OWORD *)&v179[15];
  *(__m128i *)(v115 + 1) = v116;
  *(_QWORD *)&v179[8] = 1;
  *(_QWORD *)&v179[16] = v115;
  *(_QWORD *)&v179[24] = 1;
  v179[0] = 4;
  v199 = 0;
  sub_140307860(&v164, &v187, &v176, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v117);
  v118 = (_QWORD *)sub_140001650(8, 1);
  if ( !v118 )
    sub_1416C2D4B(1, 8);
  *v118 = 0x617461646174656DLL;
  v176 = 8;
  *(_QWORD *)&v177 = v118;
  *((_QWORD *)&v177 + 1) = 8;
  v158.m256i_i64[0] = 0;
  v158.m256i_i64[2] = 0;
  nullsub_1(0x617461646174656DLL);
  v119 = sub_140001650(19, 1);
  if ( !v119 )
    sub_1416C2D4B(1, 19);
  *(__m128i *)v119 = _mm_loadu_si128(&xmmword_14177C794);
  *(_DWORD *)(v119 + 15) = 1701080941;
  v172 = 19;
  *(_QWORD *)&v173 = v119;
  *((_QWORD *)&v173 + 1) = 19;
  nullsub_1(v120);
  v121 = sub_140001650(27, 1);
  v200 = v121;
  if ( !v121 )
    sub_1416C2D4B(1, 27);
  *(_OWORD *)(v121 + 11) = *(__int128 *)((char *)&xmmword_14177C7A7 + 11);
  *(__m128i *)v121 = _mm_loadu_si128((const __m128i *)&xmmword_14177C7A7);
  v179[0] = 3;
  *(_QWORD *)&v179[8] = 27;
  *(_QWORD *)&v179[16] = v121;
  *(_QWORD *)&v179[24] = 27;
  sub_140307860(&v164, &v158, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v122);
  v123 = sub_140001650(6, 1);
  if ( !v123 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v123 + 4) = 28271;
  *(_DWORD *)v123 = 1935762802;
  v172 = 6;
  *(_QWORD *)&v173 = v123;
  *((_QWORD *)&v173 + 1) = 6;
  nullsub_1(v124);
  v125 = (__m128i *)sub_140001650(61, 1);
  v200 = (__int64)v125;
  if ( !v125 )
    sub_1416C2D4B(1, 61);
  qmemcpy(&v125[1], " model is not available through AiMaMi router", 45);
  *v125 = _mm_loadu_si128((const __m128i *)&xmmword_14177C7C2);
  v179[0] = 3;
  *(_QWORD *)&v179[8] = 61;
  *(_QWORD *)&v179[16] = v125;
  *(_QWORD *)&v179[24] = 61;
  sub_140307860(&v164, &v158, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  *(__m128i *)&v179[8] = _mm_loadu_si128((const __m128i *)&v158);
  *(_QWORD *)&v179[24] = v158.m256i_i64[2];
  v179[0] = 5;
  v193 = 0;
  sub_140307860(&v164, &v187, &v176, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v126);
  v127 = sub_140001650(5, 1);
  if ( !v127 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v127 + 4) = 101;
  *(_DWORD *)v127 = 1734439797;
  v176 = 5;
  *(_QWORD *)&v177 = v127;
  *((_QWORD *)&v177 + 1) = 5;
  v158.m256i_i64[0] = 0;
  v158.m256i_i64[2] = 0;
  nullsub_1(v128);
  v129 = (void *)sub_140001650(12, 1);
  if ( !v129 )
    sub_1416C2D4B(1, 12);
  qmemcpy(v129, "input_tokens", 12);
  v172 = 12;
  *(_QWORD *)&v173 = v129;
  *((_QWORD *)&v173 + 1) = 12;
  v179[0] = 2;
  *(_OWORD *)&v179[8] = 0;
  sub_140307860(&v164, &v158, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v130);
  v131 = (void *)sub_140001650(13, 1);
  if ( !v131 )
    sub_1416C2D4B(1, 13);
  qmemcpy(v131, "output_tokens", 13);
  v172 = 13;
  *(_QWORD *)&v173 = v131;
  *((_QWORD *)&v173 + 1) = 13;
  v179[0] = 2;
  *(_OWORD *)&v179[8] = 0;
  sub_140307860(&v164, &v158, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  nullsub_1(v132);
  v133 = (void *)sub_140001650(12, 1);
  if ( !v133 )
    sub_1416C2D4B(1, 12);
  qmemcpy(v133, "total_tokens", 12);
  v172 = 12;
  *(_QWORD *)&v173 = v133;
  *((_QWORD *)&v173 + 1) = 12;
  v179[0] = 2;
  *(_OWORD *)&v179[8] = 0;
  sub_140307860(&v164, &v158, &v172, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  *(__m128i *)&v179[8] = _mm_loadu_si128((const __m128i *)&v158);
  *(_QWORD *)&v179[24] = v158.m256i_i64[2];
  v179[0] = 5;
  v192 = 0;
  sub_140307860(&v164, &v187, &v176, v179);
  if ( v164.m256i_i8[0] != -1 )
    sub_1400104F0(&v164);
  v177 = v187;
  v178 = v188;
  LOBYTE(v176) = 5;
  if ( v169 )
    sub_140001660(v111, v169, 1);
  v201 = 1;
  v134 = (_BYTE *)sub_141433D50("stream", 6, v114);
  v135 = v149;
  if ( v134 && *v134 == 1 && !v134[1] )
  {
    v201 = 0;
    sub_140677670(v149, &v176);
    *(_WORD *)(v135 + 104) = 200;
  }
  else
  {
    v201 = 1;
    responses_to_sse_payload((__int64)&v187, (unsigned __int8 *)&v176);
    v202 = 1;
    sub_141442B90(v179);
    v158 = *(__m256i *)&v179[8];
    v159 = v180;
    v160 = v181;
    v161 = v182;
    v162 = v183;
    v136 = v184;
    v154.m128i_i32[0] = v185;
    v154.m128i_i16[2] = v186;
    v164 = *(__m256i *)&v179[8];
    v165 = v180;
    v166 = v181;
    v167 = v182;
    v168 = v183;
    LODWORD(v169) = v185;
    WORD2(v169) = v186;
    if ( *(_QWORD *)v179 != -1 )
    {
      v168 = v162;
      v167 = v161;
      v166 = v160;
      v165 = v159;
      v164 = v158;
      LODWORD(v169) = v154.m128i_i32[0];
      WORD2(v169) = v154.m128i_i16[2];
      v136 = 200;
    }
    v137 = _mm_load_si128((const __m128i *)&v164.m256i_u64[2]);
    *(_OWORD *)&v179[8] = *(_OWORD *)v164.m256i_i8;
    *(__m128i *)&v179[24] = v137;
    v180 = v165;
    v181 = v166;
    v182 = v167;
    v183 = v168;
    v184 = v136;
    v185 = v169;
    v186 = WORD2(v169);
    v159 = xmmword_141766788;
    *(_OWORD *)&v158.m256i_u64[2] = xmmword_141766778;
    v158.m256i_i64[0] = (__int64)aTextEventStrea;
    v158.m256i_i64[1] = 17;
    v202 = 1;
    sub_1406C5190(&v164, v179, &v158);
    v159 = xmmword_1417683A8;
    *(_OWORD *)&v158.m256i_u64[2] = xmmword_141768398;
    v158.m256i_i64[0] = (__int64)aNoCache;
    v158.m256i_i64[1] = 8;
    v202 = 1;
    sub_1406C5190(v179, &v164, &v158);
    v164.m256i_i64[0] = (__int64)aXAccelBufferin;
    v164.m256i_i64[1] = 17;
    v164.m256i_i64[2] = (__int64)aNo;
    v164.m256i_i64[3] = 2;
    v202 = 1;
    sub_1406C5590(&v172, v179, &v164);
    *(_QWORD *)&v179[16] = v188;
    *(_OWORD *)v179 = v187;
    v191 = 1;
    v138 = sub_140FB0F00(v179);
    v140 = v172;
    if ( v172 == -1 )
    {
      v200 = v138;
      v198 = (__int64)v139;
      if ( *v139 )
        (*v139)(v200);
      v144 = *(_QWORD *)(v198 + 8);
      if ( v144 )
        sub_140001660(v200, v144, *(_QWORD *)(v198 + 16));
      v202 = 0;
      LOWORD(v144) = 500;
      sub_14066B160(v135, v144, (unsigned int)aBuildCompactSs, 29, (__int64)aProxyUpstream, 14);
    }
    else
    {
      *(_QWORD *)(v135 + 104) = v175;
      *(__m128i *)(v135 + 88) = v174[4];
      *(__m128i *)(v135 + 72) = v174[3];
      v141 = v173;
      v142 = _mm_loadu_si128(v174);
      v143 = v174[1];
      *(__m128i *)(v135 + 56) = v174[2];
      *(__m128i *)(v135 + 40) = v143;
      *(__m128i *)(v135 + 24) = v142;
      *(_OWORD *)(v135 + 8) = v141;
      *(_QWORD *)v135 = v140;
      *(_QWORD *)(v135 + 112) = v138;
      *(_QWORD *)(v135 + 120) = v139;
    }
    sub_1400104F0(&v176);
  }
  return v135;
}