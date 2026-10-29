// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x1402256c0 | name sub_1402256C0
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402256C0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  const char *v4; // rcx
  _BYTE *v5; // rax
  char v6; // cl
  unsigned __int64 v7; // rdx
  __m128i si128; // xmm6
  __m128i v9; // xmm7
  __m128i v10; // xmm8
  __m128i v11; // xmm9
  __m128i v12; // xmm10
  __m128i v13; // xmm11
  __m128i v14; // xmm12
  __m128i v15; // xmm13
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r12
  _BYTE *v19; // rax
  int v20; // ecx
  bool v21; // zf
  int v22; // eax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE *v26; // rax
  _BYTE *v27; // r14
  __int64 v28; // r13
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  bool v33; // zf
  int v34; // eax
  unsigned __int64 v35; // r12
  const __m128i *v36; // rsi
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // r13
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r14
  __int64 v47; // rbx
  __int64 v48; // rax
  unsigned __int64 v49; // r14
  const __m128i *v50; // r15
  _DWORD *v51; // rcx
  __int64 v52; // rax
  _QWORD *v53; // rax
  unsigned __int64 v54; // rcx
  const char *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  _BYTE *v59; // rax
  __int8 v60; // al
  __int8 v61; // cl
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  void *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  void *v77; // rax
  __int64 v78; // rcx
  void *v79; // rax
  __int64 v80; // rcx
  _QWORD *v81; // rax
  __m128i *v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  const char *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rdx
  unsigned __int64 v91; // rsi
  bool v92; // zf
  const __m128i *v93; // r14
  __int64 v94; // r15
  __m128i *v95; // rax
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rcx
  void *v99; // rax
  __int128 v100; // rdi
  __m128i *v101; // rax
  __int64 v102; // rcx
  void *v103; // rax
  const char *v104; // rcx
  __int64 v105; // rdx
  _QWORD *v106; // rax
  __int64 v107; // rcx
  __int8 v108; // al
  __int64 v109; // rcx
  void *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rcx
  __int8 v113; // al
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rcx
  _QWORD *v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // r12
  __int64 v128; // rax
  __int64 v129; // rbx
  __int64 v130; // r14
  _BYTE *v131; // rax
  _BYTE *v132; // r15
  __int64 i; // r9
  __int64 v134; // rdi
  _BYTE *v135; // rax
  const __m128i *v136; // rax
  __int64 v137; // r14
  __int64 v138; // r12
  _BYTE *v139; // rax
  _BYTE *v140; // rsi
  __int64 j; // r9
  __int64 v142; // r13
  __m128i v143; // xmm0
  __m128i v144; // xmm0
  __m128i *v145; // rax
  __int64 result; // rax
  __int64 v147; // rcx
  int v148; // edx
  __int16 v149; // r8
  char v150; // r9
  const __m128i *v151; // [rsp+20h] [rbp-60h]
  __m128i v153; // [rsp+30h] [rbp-50h] BYREF
  __int64 v154; // [rsp+40h] [rbp-40h]
  _BYTE *v155; // [rsp+48h] [rbp-38h]
  __int64 v156; // [rsp+50h] [rbp-30h]
  int v157; // [rsp+5Ch] [rbp-24h]
  __int64 v158; // [rsp+60h] [rbp-20h]
  unsigned __int64 v159; // [rsp+68h] [rbp-18h]
  int v160; // [rsp+70h] [rbp-10h]
  int v161; // [rsp+74h] [rbp-Ch]
  __int64 v162; // [rsp+78h] [rbp-8h]
  __m128i v163; // [rsp+80h] [rbp+0h] BYREF
  __int64 v164; // [rsp+90h] [rbp+10h]
  __m128i *v165; // [rsp+98h] [rbp+18h]
  __m256i v166; // [rsp+A0h] [rbp+20h] BYREF
  const char *v167; // [rsp+C0h] [rbp+40h]
  __int64 v168; // [rsp+C8h] [rbp+48h]
  _BYTE v169[24]; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v170; // [rsp+E8h] [rbp+68h]
  _BYTE v171[24]; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v172; // [rsp+108h] [rbp+88h]
  char v173; // [rsp+111h] [rbp+91h]
  char v174; // [rsp+112h] [rbp+92h]
  char v175; // [rsp+113h] [rbp+93h]
  char v176; // [rsp+114h] [rbp+94h]
  char v177; // [rsp+115h] [rbp+95h]
  unsigned __int8 v178; // [rsp+116h] [rbp+96h]
  char v179; // [rsp+117h] [rbp+97h]
  __int64 v180; // [rsp+118h] [rbp+98h]

  v180 = -2;
  v178 = a3;
  v4 = aInput;
  if ( a3 )
    v4 = aMessages;
  v162 = a2;
  v5 = (_BYTE *)sub_1416419F0(v4, 3LL * a3 + 5, a2);
  if ( !v5 )
    v5 = off_1421E7108;
  v6 = *v5;
  v155 = v5;
  v7 = (unsigned __int64)(v5 + 8);
  v177 = v6;
  if ( v6 != 4 )
    v7 = 0;
  v156 = v7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_14193C250);
  v9 = _mm_cvtsi32_si128(0x7475u);
  v10 = _mm_load_si128((const __m128i *)&xmmword_1419D3750);
  v11 = _mm_load_si128((const __m128i *)&xmmword_14193C200);
  v12 = _mm_cvtsi32_si128(0x74757074u);
  v13 = _mm_load_si128((const __m128i *)&xmmword_1419D3770);
  v14 = _mm_load_si128((const __m128i *)&xmmword_1419D3590);
  v15 = _mm_cvtsi32_si128(0x67u);
  v161 = 0;
  v160 = 0;
  v157 = 0;
  v159 = 0;
  v16 = 0;
  LODWORD(v165) = 0;
LABEL_10:
  if ( v156 )
  {
    v17 = *(_QWORD *)(v156 + 16);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v156 + 8);
      v158 = v18 + 32 * v17;
      v156 = 0;
      while ( 1 )
      {
        v19 = (_BYTE *)sub_1416419F0("encrypted_content", 17, v18);
        if ( v19 )
        {
          v20 = v16 + 1;
          v21 = *v19 == 0;
          v22 = v160;
          if ( !v21 )
            v22 = v16 + 1;
          v160 = v22;
          if ( v21 )
            v20 = v16;
          v16 = v20;
        }
        v23 = (_QWORD *)sub_1416419F0(aType_3, 4, v18);
        if ( !v23 )
          v23 = off_1421E7108;
        if ( *(_BYTE *)v23 != 3 )
          goto LABEL_29;
        v24 = v23[2];
        v25 = v23[3];
        if ( v25 == 18 )
          break;
        if ( v25 != 23 )
        {
          if ( v25 != 20
            || _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v24 + 16)), v12),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v24), v13))) != 0xFFFF )
          {
            goto LABEL_29;
          }
LABEL_28:
          v159 = (unsigned int)(v159 + 1);
          v161 = v159;
          goto LABEL_29;
        }
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v24 + 7)), v10),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v24), v11))) == 0xFFFF )
          goto LABEL_28;
LABEL_29:
        v26 = (_BYTE *)sub_1416419F0("contenttext", 7, v18);
        if ( !v26 )
          v26 = off_1421E7108;
        v18 += 32;
        v27 = v26 + 8;
        if ( *v26 != 4 )
          v27 = nullptr;
        v28 = 0;
        while ( v28 && v28 != v3 )
        {
LABEL_40:
          v29 = (_QWORD *)sub_1416419F0(aType_3, 4, v28);
          if ( !v29 )
            v29 = off_1421E7108;
          v28 += 32;
          if ( *(_BYTE *)v29 == 3 )
          {
            v30 = v29[3];
            v31 = v29[2];
            switch ( v30 )
            {
              case 5LL:
                if ( !(*(_DWORD *)v31 ^ 0x67616D69 | *(unsigned __int8 *)(v31 + 4) ^ 0x65) )
                  goto LABEL_34;
                break;
              case 8LL:
                if ( *(_QWORD *)v31 == 0x676E696B6E696874LL )
                  goto LABEL_55;
                break;
              case 11LL:
                if ( *(_QWORD *)v31 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v31 + 3) ^ 0x6567616D695F7475LL )
                {
                  v32 = v159;
                  v33 = (*(_QWORD *)v31 ^ 0x7365725F6C6F6F74LL | *(_QWORD *)(v31 + 3) ^ 0x746C757365725F6CLL) == 0;
                  v34 = v161;
                  if ( v33 )
                    v34 = v159 + 1;
                  v161 = v34;
                  if ( v33 )
                    v32 = (unsigned int)(v159 + 1);
                  v159 = v32;
                }
                else
                {
LABEL_34:
                  LODWORD(v165) = (_DWORD)v165 + 1;
                  v157 = (int)v165;
                }
                break;
              case 17LL:
                if ( _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v31 + 16)), v15),
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v31), v14))) == 0xFFFF )
LABEL_55:
                  v160 = ++v16;
                break;
              default:
                continue;
            }
          }
        }
        if ( v27 )
        {
          v28 = *((_QWORD *)v27 + 1);
          v3 = v28 + 32LL * *((_QWORD *)v27 + 2);
          if ( *((_QWORD *)v27 + 2) )
          {
            v27 = nullptr;
            goto LABEL_40;
          }
        }
        if ( !v18 || v18 == v158 )
          goto LABEL_10;
      }
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v24 + 16)), v9),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v24), si128))) != 0xFFFF )
        goto LABEL_29;
      goto LABEL_28;
    }
  }
  v35 = 7;
  v36 = (const __m128i *)aMissing;
  if ( v177 == 4 )
  {
    v37 = *((_QWORD *)v155 + 3);
    if ( v37 )
    {
      v35 = 4;
      v38 = (_QWORD *)sub_1416419F0(aRole_0, 4, *((_QWORD *)v155 + 2) + 32 * v37 - 32);
      if ( !v38 )
        v38 = off_1421E7108;
      v36 = (const __m128i *)&unk_1419DD089;
      if ( *(_BYTE *)v38 == 3 )
      {
        v39 = v38[2];
        v40 = v38[3];
        switch ( v40 )
        {
          case 4LL:
            v36 = (const __m128i *)&unk_1419DD089;
            if ( *(_DWORD *)v39 == 1919251317 )
              v36 = (const __m128i *)&unk_1419D7C95;
            break;
          case 6LL:
            if ( *(_DWORD *)v39 ^ 0x74737973 | *(unsigned __int16 *)(v39 + 4) ^ 0x6D65 )
              break;
            goto LABEL_70;
          case 9LL:
            if ( *(_QWORD *)v39 ^ 0x6E61747369737361LL | *(unsigned __int8 *)(v39 + 8) ^ 0x74LL )
            {
              if ( *(_QWORD *)v39 ^ 0x65706F6C65766564LL | *(unsigned __int8 *)(v39 + 8) ^ 0x72LL )
                break;
LABEL_70:
              v35 = 11;
              v36 = (const __m128i *)&unk_1419DD07E;
              break;
            }
            v35 = 9;
            v36 = (const __m128i *)aAssistant_0;
            break;
          default:
            break;
        }
      }
    }
  }
  v41 = (_QWORD *)sub_1416419F0(aTools_0, 5, v162);
  if ( !v41 )
    v41 = off_1421E7108;
  LOBYTE(v158) = *(_BYTE *)v41;
  v165 = (__m128i *)v36;
  if ( (_BYTE)v158 != 4 || (v42 = v41[3]) == 0 )
  {
    v44 = 0;
LABEL_86:
    v47 = 0;
    goto LABEL_87;
  }
  v43 = v41[2];
  v44 = 0;
  do
  {
    v44 = sub_1403668A0(&v166, v44, v43);
    v43 += 32;
    --v42;
  }
  while ( v42 );
  v45 = v41[3];
  if ( !v45 )
    goto LABEL_86;
  v46 = v41[2];
  v47 = 0;
  do
  {
    v47 = sub_140366990(&v166, v47, v46);
    v46 += 32;
    --v45;
  }
  while ( v45 );
LABEL_87:
  v48 = sub_141642800(v162, aThinkingType_0, 14);
  v49 = 7;
  v50 = (const __m128i *)aMissing;
  if ( !v48 || *(_BYTE *)v48 != 3 )
    goto LABEL_96;
  v51 = *(_DWORD **)(v48 + 16);
  v52 = *(_QWORD *)(v48 + 24);
  if ( v52 == 7 )
  {
    if ( !(*v51 ^ 0x62616E65 | *(_DWORD *)((char *)v51 + 3) ^ 0x64656C62) )
    {
      v50 = (const __m128i *)aEnabled_1;
      goto LABEL_96;
    }
LABEL_95:
    v49 = 5;
    v50 = (const __m128i *)aOther_1;
    goto LABEL_96;
  }
  if ( v52 != 8 )
    goto LABEL_95;
  v49 = 8;
  if ( *(_QWORD *)v51 != 0x6576697470616461LL )
  {
    if ( *(_QWORD *)v51 == 0x64656C6261736964LL )
    {
      v50 = (const __m128i *)&unk_1419DD0A3;
      goto LABEL_96;
    }
    goto LABEL_95;
  }
  v50 = (const __m128i *)&unk_1419DD09B;
LABEL_96:
  v53 = (_QWORD *)sub_1416419F0(aToolChoice_0, 11, v162);
  if ( !v53 )
    v53 = off_1421E7108;
  if ( *(_BYTE *)v53 == 3
    || (v53 = (_QWORD *)sub_141642800(v162, aToolChoiceType, 17), v54 = 7, v55 = aMissing, v53) && *(_BYTE *)v53 == 3 )
  {
    v56 = v53[3];
    v57 = v53[2];
    switch ( v56 )
    {
      case 3LL:
        if ( *(_WORD *)v57 ^ 0x6E61 | *(unsigned __int8 *)(v57 + 2) ^ 0x79 )
          goto LABEL_105;
        goto LABEL_115;
      case 4LL:
        v54 = 4;
        if ( *(_DWORD *)v57 == 1869903201 )
        {
          v55 = (const char *)&unk_1419DD0B6;
          break;
        }
        if ( *(_DWORD *)v57 == 1701736302 )
        {
          v55 = aNone;
          break;
        }
        if ( *(_DWORD *)v57 != 1819242356 )
          goto LABEL_105;
        goto LABEL_114;
      case 6LL:
        if ( *(_DWORD *)v57 ^ 0x74737563 | *(unsigned __int16 *)(v57 + 4) ^ 0x6D6F )
          goto LABEL_105;
        goto LABEL_114;
      case 8LL:
        if ( *(_QWORD *)v57 == 0x6465726975716572LL )
        {
LABEL_115:
          v54 = 8;
          v55 = (const char *)&unk_1419DD0BA;
        }
        else if ( *(_QWORD *)v57 == 0x6E6F6974636E7566LL )
        {
LABEL_114:
          v54 = 5;
          v55 = (const char *)&unk_1419DD0C2;
        }
        else
        {
LABEL_105:
          v54 = 5;
          v55 = aOther_1;
        }
        break;
      case 11LL:
        if ( !(*(_QWORD *)v57 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)(v57 + 3) ^ 0x6863726165735F6CLL) )
          goto LABEL_114;
        goto LABEL_105;
      default:
        goto LABEL_105;
    }
  }
  v151 = (const __m128i *)v55;
  v156 = v54;
  v163.m128i_i64[0] = 0;
  v164 = 0;
  nullsub_1(v54);
  v58 = sub_140001650(6, 1);
  if ( !v58 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v58 + 4) = 28001;
  *(_DWORD *)v58 = 1701999731;
  *(_QWORD *)v171 = 6;
  *(_QWORD *)&v171[8] = v58;
  *(_QWORD *)&v171[16] = 6;
  v176 = 1;
  v59 = (_BYTE *)sub_1416419F0(
                   "stream/output_config/effortmax_output_tokens/thinking/budget_tokenscache_markersencrypted_content",
                   6,
                   v162);
  if ( !v59 )
    v59 = off_1421E7108;
  if ( *v59 == 1 )
  {
    v60 = v59[1];
    v61 = 1;
  }
  else
  {
    v60 = 2;
    v61 = 0;
  }
  v166.m256i_i8[0] = v61;
  v166.m256i_i8[1] = v60;
  v176 = 0;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v62);
  v63 = (_QWORD *)sub_140001650(8, 1);
  if ( !v63 )
    sub_141938D2B(1, 8);
  *v63 = 0x736567617373656DLL;
  *(_QWORD *)v171 = 8;
  *(_QWORD *)&v171[8] = v63;
  *(_QWORD *)&v171[16] = 8;
  if ( v177 == 4 )
    v64 = *((_QWORD *)v155 + 3);
  else
    v64 = 0;
  v166.m256i_i8[0] = 2;
  v166.m256i_i64[1] = 0;
  v166.m256i_i64[2] = v64;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v65);
  v66 = sub_140001650(9, 1);
  if ( !v66 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v66 = 0x6C6F725F7473616CLL;
  *(_BYTE *)(v66 + 8) = 101;
  *(_QWORD *)v171 = 9;
  *(_QWORD *)&v171[8] = v66;
  *(_QWORD *)&v171[16] = 9;
  nullsub_1(0x6C6F725F7473616CLL);
  v159 = sub_140001650(v35, 1);
  if ( !v159 )
    sub_141938D2B(1, v35);
  sub_1418F44E0((__m128i *)v159, v165, v35);
  v166.m256i_i8[0] = 3;
  v166.m256i_i64[1] = v35;
  v166.m256i_i64[2] = v159;
  v166.m256i_i64[3] = v35;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v67);
  v68 = sub_140001650(6, 1);
  if ( !v68 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v68 + 4) = 29541;
  *(_DWORD *)v68 = 1734438249;
  *(_QWORD *)v171 = 6;
  *(_QWORD *)&v171[8] = v68;
  *(_QWORD *)&v171[16] = 6;
  v166.m256i_i8[0] = 2;
  v166.m256i_i64[1] = (unsigned __int64)v157 >> 63;
  v166.m256i_i64[2] = v157;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v69);
  v70 = sub_140001650(6, 1);
  if ( !v70 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v70 + 4) = 25701;
  *(_DWORD *)v70 = 1852270963;
  *(_QWORD *)v171 = 6;
  *(_QWORD *)&v171[8] = v70;
  *(_QWORD *)&v171[16] = 6;
  v166.m256i_i8[0] = 2;
  v166.m256i_i64[1] = (unsigned __int64)v160 >> 63;
  v166.m256i_i64[2] = v160;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v71);
  v72 = (void *)sub_140001650(12, 1);
  if ( !v72 )
    sub_141938D2B(1, 12);
  qmemcpy(v72, "tool_results", 12);
  *(_QWORD *)v171 = 12;
  *(_QWORD *)&v171[8] = v72;
  *(_QWORD *)&v171[16] = 12;
  v166.m256i_i8[0] = 2;
  v166.m256i_i64[1] = (unsigned __int64)v161 >> 63;
  v166.m256i_i64[2] = v161;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v73);
  v74 = sub_140001650(5, 1);
  if ( !v74 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v74 + 4) = 115;
  *(_DWORD *)v74 = 1819242356;
  *(_QWORD *)v171 = 5;
  *(_QWORD *)&v171[8] = v74;
  *(_QWORD *)&v171[16] = 5;
  if ( (_BYTE)v158 == 4 )
    v75 = v41[3];
  else
    v75 = 0;
  v166.m256i_i8[0] = 2;
  v166.m256i_i64[1] = 0;
  v166.m256i_i64[2] = v75;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v76);
  v77 = (void *)sub_140001650(13, 1);
  if ( !v77 )
    sub_141938D2B(1, 13);
  qmemcpy(v77, "hosted_search", 13);
  *(_QWORD *)v171 = 13;
  *(_QWORD *)&v171[8] = v77;
  *(_QWORD *)&v171[16] = 13;
  v166.m256i_i8[0] = 2;
  v166.m256i_i64[1] = 0;
  v166.m256i_i64[2] = v44;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v78);
  v79 = (void *)sub_140001650(11, 1);
  if ( !v79 )
    sub_141938D2B(1, 11);
  qmemcpy(v79, "tool_search", 11);
  *(_QWORD *)v171 = 11;
  *(_QWORD *)&v171[8] = v79;
  *(_QWORD *)&v171[16] = 11;
  v166.m256i_i8[0] = 2;
  v166.m256i_i64[1] = 0;
  v166.m256i_i64[2] = v47;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v80);
  v81 = (_QWORD *)sub_140001650(8, 1);
  if ( !v81 )
    sub_141938D2B(1, 8);
  *v81 = 0x676E696B6E696874LL;
  *(_QWORD *)v171 = 8;
  *(_QWORD *)&v171[8] = v81;
  *(_QWORD *)&v171[16] = 8;
  nullsub_1(0x676E696B6E696874LL);
  v82 = (__m128i *)sub_140001650(v49, 1);
  v165 = v82;
  if ( !v82 )
    sub_141938D2B(1, v49);
  v83 = (__int64)v82;
  sub_1418F44E0(v82, v50, v49);
  v166.m256i_i8[0] = 3;
  v166.m256i_i64[1] = v49;
  v166.m256i_i64[2] = v83;
  v166.m256i_i64[3] = v49;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v84);
  v85 = sub_140001650(6, 1);
  if ( !v85 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v85 + 4) = 29810;
  *(_DWORD *)v85 = 1868981861;
  *(_QWORD *)v171 = 6;
  *(_QWORD *)&v171[8] = v85;
  *(_QWORD *)&v171[16] = 6;
  v179 = 1;
  v86 = sub_141642800(
          v162,
          "/output_config/effortmax_output_tokens/thinking/budget_tokenscache_markersencrypted_content",
          21);
  if ( v86 && *(_BYTE *)v86 == 3 )
  {
    v88 = sub_140223DC0(*(_QWORD *)(v86 + 16), *(_QWORD *)(v86 + 24));
    v91 = v90;
    v92 = v90 == 0;
    if ( v90 >= 0 )
      goto LABEL_167;
LABEL_171:
    v94 = 0;
    goto LABEL_172;
  }
  v88 = sub_140223DC0(0, v87);
  v91 = v97;
  v92 = v97 == 0;
  if ( v97 < 0 )
    goto LABEL_171;
LABEL_167:
  if ( v92 )
  {
    v96 = 1;
    goto LABEL_174;
  }
  v93 = (const __m128i *)v88;
  nullsub_1(v89);
  v94 = 1;
  v95 = (__m128i *)sub_140001650(v91, 1);
  if ( !v95 )
  {
LABEL_172:
    v179 = 1;
    sub_141938D2B(v94, v91);
  }
  v96 = (__int64)v95;
  sub_1418F44E0(v95, v93, v91);
LABEL_174:
  v166.m256i_i8[0] = 3;
  v166.m256i_i64[1] = v91;
  v166.m256i_i64[2] = v96;
  v166.m256i_i64[3] = v91;
  v179 = 0;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v98);
  v99 = (void *)sub_140001650(11, 1);
  if ( !v99 )
    sub_141938D2B(1, 11);
  qmemcpy(v99, "tool_choice", 11);
  *(_QWORD *)v171 = 11;
  *(_QWORD *)&v171[8] = v99;
  *(_QWORD *)&v171[16] = 11;
  nullsub_1(0x6F68635F6C6F6F74LL);
  *((_QWORD *)&v100 + 1) = v156;
  v101 = (__m128i *)sub_140001650(v156, 1);
  v165 = v101;
  if ( !v101 )
    sub_141938D2B(1, v156);
  *(_QWORD *)&v100 = v101;
  sub_1418F44E0(v101, v151, v156);
  v166.m256i_i8[0] = 3;
  v166.m256i_i64[1] = v156;
  *(_OWORD *)&v166.m256i_u64[2] = v100;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v102);
  v103 = (void *)sub_140001650(10, 1);
  if ( !v103 )
    sub_141938D2B(1, 10);
  qmemcpy(v103, "max_output", 10);
  *(_QWORD *)v171 = 10;
  *(_QWORD *)&v171[8] = v103;
  *(_QWORD *)&v171[16] = 10;
  v104 = "max_output_tokens/thinking/budget_tokenscache_markersencrypted_content";
  if ( v178 )
    v104 = aMaxTokensanthr;
  v105 = 17;
  if ( v178 )
    v105 = 10;
  v175 = 1;
  v106 = (_QWORD *)sub_1416419F0(v104, v105, v162);
  if ( !v106 )
    v106 = off_1421E7108;
  if ( *(_BYTE *)v106 == 2 && !v106[1] )
  {
    v107 = v106[2];
    v108 = 2;
  }
  else
  {
    v108 = 0;
  }
  v166.m256i_i8[0] = v108;
  v166.m256i_i64[1] = 0;
  v166.m256i_i64[2] = v107;
  v175 = 0;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v109);
  v110 = (void *)sub_140001650(15, 1);
  if ( !v110 )
    sub_141938D2B(1, 15);
  qmemcpy(v110, "thinking_budget", 15);
  *(_QWORD *)v171 = 15;
  *(_QWORD *)&v171[8] = v110;
  *(_QWORD *)&v171[16] = 15;
  v174 = 1;
  v111 = sub_141642800(v162, "/thinking/budget_tokenscache_markersencrypted_content", 23);
  if ( v111 && *(_BYTE *)v111 == 2 && !*(_QWORD *)(v111 + 8) )
  {
    v112 = *(_QWORD *)(v111 + 16);
    v113 = 2;
  }
  else
  {
    v113 = 0;
  }
  v166.m256i_i8[0] = v113;
  v166.m256i_i64[1] = 0;
  v166.m256i_i64[2] = v112;
  v174 = 0;
  sub_140E72AA0(v169, &v163, v171, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  *(__m128i *)&v171[8] = _mm_loadu_si128(&v163);
  v172 = v164;
  v171[0] = 5;
  if ( !v178 )
    goto LABEL_255;
  v153.m128i_i64[0] = 0;
  v154 = 0;
  nullsub_1(v114);
  v115 = sub_140001650(3, 1);
  if ( !v115 )
    sub_141938D2B(1, 3);
  *(_BYTE *)(v115 + 2) = 112;
  *(_WORD *)v115 = 28532;
  v163.m128i_i64[0] = 3;
  v163.m128i_i64[1] = v115;
  v164 = 3;
  v166.m256i_i8[0] = 2;
  *(_OWORD *)&v166.m256i_u64[1] = 0;
  sub_140E72AA0(v169, &v153, &v163, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v116);
  v117 = sub_140001650(6, 1);
  if ( !v117 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v117 + 4) = 28005;
  *(_DWORD *)v117 = 1953724787;
  v163.m128i_i64[0] = 6;
  v163.m128i_i64[1] = v117;
  v164 = 6;
  v166.m256i_i8[0] = 2;
  *(_OWORD *)&v166.m256i_u64[1] = 0;
  sub_140E72AA0(v169, &v153, &v163, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v118);
  v119 = sub_140001650(5, 1);
  if ( !v119 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v119 + 4) = 115;
  *(_DWORD *)v119 = 1819242356;
  v163.m128i_i64[0] = 5;
  v163.m128i_i64[1] = v119;
  v164 = 5;
  v166.m256i_i8[0] = 2;
  *(_OWORD *)&v166.m256i_u64[1] = 0;
  sub_140E72AA0(v169, &v153, &v163, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v120);
  v121 = (_QWORD *)sub_140001650(8, 1);
  if ( !v121 )
    sub_141938D2B(1, 8);
  *v121 = 0x736567617373656DLL;
  v163.m128i_i64[0] = 8;
  v163.m128i_i64[1] = (__int64)v121;
  v164 = 8;
  v166.m256i_i8[0] = 2;
  *(_OWORD *)&v166.m256i_u64[1] = 0;
  sub_140E72AA0(v169, &v153, &v163, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v122);
  v123 = sub_140001650(9, 1);
  if ( !v123 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v123 = 0x6172656D65687065LL;
  *(_BYTE *)(v123 + 8) = 108;
  v163.m128i_i64[0] = 9;
  v163.m128i_i64[1] = v123;
  v164 = 9;
  v166.m256i_i8[0] = 2;
  *(_OWORD *)&v166.m256i_u64[1] = 0;
  sub_140E72AA0(v169, &v153, &v163, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  nullsub_1(v124);
  v125 = sub_140001650(5, 1);
  if ( !v125 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v125 + 4) = 114;
  *(_DWORD *)v125 = 1701344367;
  v163.m128i_i64[0] = 5;
  v163.m128i_i64[1] = v125;
  v164 = 5;
  v166.m256i_i8[0] = 2;
  *(_OWORD *)&v166.m256i_u64[1] = 0;
  sub_140E72AA0(v169, &v153, &v163, &v166);
  if ( v169[0] != 0xFF )
    sub_14002F9D0(v169);
  *(__m128i *)&v169[8] = _mm_loadu_si128(&v153);
  v170 = v154;
  v169[0] = 5;
  sub_1401B1C10((__int64)v169, (__int64)&unk_1419DD068, 3, v162);
  v166.m256i_i64[1] = 2;
  v166.m256i_i64[2] = (__int64)aSystem;
  v166.m256i_i64[3] = 6;
  v167 = aTools_0;
  v168 = 5;
  v126 = 0;
  do
  {
LABEL_220:
    v127 = v126 + 1;
    v166.m256i_i64[0] = v126 + 1;
    v128 = 2 * v126;
    v129 = v166.m256i_i64[v128 + 2];
    v130 = v166.m256i_i64[v128 + 3];
    v131 = (_BYTE *)sub_1416419F0(v129, v130, v162);
    if ( !v131 )
      v131 = off_1421E7108;
    v132 = v131 + 8;
    if ( *v131 != 4 )
      v132 = nullptr;
    for ( i = 0; i && (_QWORD *)i != v41; i = v134 )
    {
LABEL_225:
      v134 = i + 32;
      sub_1401B1C10((__int64)v169, v129, v130, i);
    }
    if ( !v132 )
    {
      v126 = v127;
      if ( v127 == 2 )
        break;
      goto LABEL_220;
    }
    i = *((_QWORD *)v132 + 1);
    v41 = (_QWORD *)(i + 32LL * *((_QWORD *)v132 + 2));
    if ( *((_QWORD *)v132 + 2) )
    {
      v132 = nullptr;
      goto LABEL_225;
    }
    v126 = v127;
  }
  while ( v127 != 2 );
  v135 = (_BYTE *)sub_1416419F0(aMessages, 8, v162);
  if ( !v135 )
    v135 = off_1421E7108;
  v21 = *v135 == 4;
  v136 = (const __m128i *)(v135 + 8);
  if ( !v21 )
    v136 = nullptr;
  v165 = (__m128i *)v136;
  v137 = 0;
LABEL_237:
  if ( v137 && v137 != v127 )
    goto LABEL_242;
  if ( v165 )
  {
    v138 = v165[1].m128i_i64[0];
    if ( v138 )
    {
      v137 = v165->m128i_i64[1];
      v127 = v137 + 32 * v138;
      v165 = nullptr;
LABEL_242:
      v139 = (_BYTE *)sub_1416419F0("contenttext", 7, v137);
      if ( !v139 )
        v139 = off_1421E7108;
      v137 += 32;
      v140 = v139 + 8;
      if ( *v139 != 4 )
        v140 = nullptr;
      for ( j = 0; ; j = v142 )
      {
        if ( !j || (_BYTE *)j == v132 )
        {
          if ( !v140 )
            goto LABEL_237;
          j = *((_QWORD *)v140 + 1);
          v132 = (_BYTE *)(j + 32LL * *((_QWORD *)v140 + 2));
          if ( !*((_QWORD *)v140 + 2) )
            goto LABEL_237;
          v140 = nullptr;
        }
        v142 = j + 32;
        sub_1401B1C10((__int64)v169, (__int64)aMessages, 8, j);
      }
    }
  }
  v143 = _mm_loadu_si128((const __m128i *)v169);
  *(__m128i *)&v166.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v169[16]);
  *(__m128i *)v166.m256i_i8 = v143;
  v173 = 1;
  v165 = (__m128i *)sub_141641AF0("cache_markersencrypted_content", 13, v171);
  sub_14002F9D0(v165);
  v144 = _mm_load_si128((const __m128i *)&v166);
  v145 = v165;
  v165[1] = _mm_load_si128((const __m128i *)&v166.m256i_u64[2]);
  *v145 = v144;
LABEL_255:
  result = v171[0];
  v147 = *(_QWORD *)&v171[1];
  v148 = *(_DWORD *)&v171[9];
  v149 = *(_WORD *)&v171[13];
  v150 = v171[15];
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v171[16];
  *(_QWORD *)(a1 + 24) = v172;
  *(_BYTE *)a1 = result;
  *(_QWORD *)(a1 + 1) = v147;
  *(_DWORD *)(a1 + 9) = v148;
  *(_WORD *)(a1 + 13) = v149;
  *(_BYTE *)(a1 + 15) = v150;
  return result;
}
