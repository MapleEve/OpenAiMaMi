// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140c6f5e0 | name sub_140C6F5E0
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_140C6F5E0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __m128i si128; // xmm6
  __m128i v13; // xmm7
  char v14; // al
  char v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rcx
  __int128 *v24; // rdx
  char v25; // al
  bool v26; // zf
  signed __int64 v27; // r12
  __m128i *v28; // rax
  __int64 v29; // rsi
  __m128i v30; // xmm1
  __int64 v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  const __m128i *v36; // rcx
  __int32 v37; // eax
  __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // r12
  const __m128i *v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // r8
  __int64 v49; // rcx
  __int128 *v50; // rdx
  __int64 v51; // r9
  __int64 v52; // r15
  __int64 v53; // rbx
  char v54; // al
  unsigned __int64 v56; // r15
  __int64 v58; // rdi
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // r13
  bool v61; // cf
  __int64 v62; // rdi
  __m128i v63; // xmm0
  __int64 v64; // rdx
  unsigned __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // r15
  int v68; // eax
  _QWORD *v69; // r14
  __int64 v70; // rdx
  _QWORD *v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rdx
  unsigned __int64 v74; // r13
  __int64 v75; // rax
  __int64 v76; // rbx
  unsigned __int64 v77; // rsi
  __m128i v78; // xmm6
  __m128i v79; // xmm7
  __m128i v80; // xmm8
  __m128i v81; // xmm9
  __m128i v82; // xmm10
  __m128i v83; // xmm11
  char v84; // al
  bool v85; // di
  bool v86; // cl
  __int64 v87; // r13
  __int64 v88; // rax
  unsigned __int64 v89; // r12
  const __m128i *v90; // r13
  __int64 v91; // r14
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // r15
  __int64 v94; // r8
  unsigned __int64 v95; // r9
  char v96; // al
  __int64 v97; // rdx
  unsigned __int64 v98; // rsi
  unsigned __int64 v99; // rax
  char v100; // cl
  char v101; // dl
  int v102; // edx
  unsigned int v103; // ecx
  __m128i *v105; // rcx
  __int64 v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rbx
  const __m128i *v109; // r14
  __m128i v111; // xmm0
  __int64 v112; // rax
  __int64 v113; // rdx
  unsigned __int64 v114; // rax
  __int64 v115; // rsi
  __int64 v117; // rsi
  const __m128i *v118; // [rsp+30h] [rbp-50h]
  __int64 v119; // [rsp+38h] [rbp-48h]
  const __m128i *v120; // [rsp+40h] [rbp-40h]
  const __m128i *v121; // [rsp+48h] [rbp-38h]
  __int64 v122; // [rsp+50h] [rbp-30h]
  __int64 v123; // [rsp+58h] [rbp-28h]
  __m128i v124; // [rsp+60h] [rbp-20h] BYREF
  __m128i v125; // [rsp+70h] [rbp-10h]
  __int128 v126; // [rsp+80h] [rbp+0h]
  __m128i *v127; // [rsp+90h] [rbp+10h]
  const __m128i *v128; // [rsp+98h] [rbp+18h]
  __m128i v129; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v130; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v131; // [rsp+C0h] [rbp+40h]
  int v132; // [rsp+D4h] [rbp+54h]
  __int64 v133; // [rsp+D8h] [rbp+58h]
  __int64 v134; // [rsp+E0h] [rbp+60h]
  __int64 v135; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v136; // [rsp+F0h] [rbp+70h]
  __int64 v137; // [rsp+F8h] [rbp+78h]
  __int64 v138; // [rsp+100h] [rbp+80h]
  __int64 v139; // [rsp+108h] [rbp+88h]
  char v140; // [rsp+110h] [rbp+90h]
  __int16 v141; // [rsp+118h] [rbp+98h]
  unsigned __int64 v142; // [rsp+120h] [rbp+A0h]
  __int64 v143; // [rsp+128h] [rbp+A8h]
  __m128i v144; // [rsp+130h] [rbp+B0h] BYREF
  _BOOL8 v145; // [rsp+140h] [rbp+C0h]
  __int64 v146; // [rsp+148h] [rbp+C8h]
  __int64 v147; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v148; // [rsp+158h] [rbp+D8h]
  __int64 v149; // [rsp+160h] [rbp+E0h]
  __int64 v150; // [rsp+168h] [rbp+E8h]
  char v151; // [rsp+172h] [rbp+F2h] BYREF
  char v152; // [rsp+173h] [rbp+F3h] BYREF
  int v153; // [rsp+174h] [rbp+F4h]
  __int64 v154; // [rsp+178h] [rbp+F8h]

  v154 = -2;
  v127 = a1;
  v5 = sub_14167F170(a1);
  if ( *(_BYTE *)(v5 + 16) == 1 )
  {
    v10 = *(_QWORD *)v5;
    v11 = *(_QWORD *)(v5 + 8);
  }
  else
  {
    v117 = v5;
    v10 = sub_141696260(v7, v6, v8, v9);
    v5 = v117;
    *(_QWORD *)v117 = v10;
    *(_QWORD *)(v117 + 8) = v11;
    *(_BYTE *)(v117 + 16) = 1;
  }
  *(_QWORD *)v5 = v10 + 1;
  v130 = xmmword_141A39750;
  v129 = _mm_loadu_si128((const __m128i *)&off_141A39740);
  *(_QWORD *)&v131 = v10;
  *((_QWORD *)&v131 + 1) = v11;
  v144.m128i_i8[0] = 2;
  v133 = 0;
  v134 = a3;
  v150 = a2;
  v135 = a2;
  v136 = a3;
  v137 = 0;
  v143 = a3;
  v138 = a3;
  v139 = 0xA0000000ALL;
  v140 = 1;
  v141 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A38650);
  v13 = _mm_load_si128((const __m128i *)&xmmword_141A38660);
  v14 = 0;
  v15 = 0;
  while ( (v14 & 1) == 0 )
  {
    v16 = v135;
    sub_140C9D040(&v124, &v135);
    if ( v124.m128i_i32[0] != 1 )
    {
      if ( HIBYTE(v141) )
        break;
      HIBYTE(v141) = 1;
      v18 = v134 - v133;
      if ( ((unsigned __int8)v141 | (v134 != v133)) != 1 )
        break;
      v19 = v135 + v133;
      if ( !v18 )
        goto LABEL_18;
LABEL_12:
      if ( *(_BYTE *)(v19 + v18 - 1) == 10 )
      {
        if ( v18 == 1 )
        {
          v18 = 0;
        }
        else if ( *(_BYTE *)(v19 + v18 - 2) == 13 )
        {
          v18 -= 2;
        }
        else
        {
          --v18;
        }
      }
      goto LABEL_18;
    }
    v17 = v133;
    v133 = v125.m128i_i64[0];
    v18 = v125.m128i_i64[0] - v17;
    v19 = v17 + v16;
    if ( v125.m128i_i64[0] != v17 )
      goto LABEL_12;
LABEL_18:
    v20 = sub_140E91160(v19, v18);
    v22 = v21;
    if ( (unsigned __int8)sub_1402B5F80(&v144, v19, v18) )
    {
      switch ( v22 )
      {
        case 30LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v20), v13),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v20 + 14)), si128))) != 0xFFFF )
            goto LABEL_26;
          v15 = 0;
          v14 = HIBYTE(v141);
          continue;
        case 36LL:
          if ( (unsigned int)sub_1418F4B70(
                               v20,
                               "# <<< aimami-relay managed end (top)# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)") )
            goto LABEL_26;
          v15 = 0;
          v14 = HIBYTE(v141);
          continue;
        case 39LL:
          if ( (unsigned int)sub_1418F4B70(v20, &xmmword_141A3E5F4) )
            goto LABEL_26;
          v15 = 0;
          v14 = HIBYTE(v141);
          continue;
        case 55LL:
          v23 = v20;
          v24 = &xmmword_141A3E139;
          goto LABEL_32;
        case 60LL:
          v23 = v20;
          v24 = (__int128 *)"# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)";
          goto LABEL_32;
        case 64LL:
          v23 = v20;
          v24 = &xmmword_141A3E31B;
LABEL_32:
          v25 = v15 | ((unsigned int)sub_1418F4B70(v23, v24) == 0);
          v15 = 1;
          if ( (v25 & 1) == 0 )
            goto LABEL_33;
          goto LABEL_4;
        default:
LABEL_26:
          if ( (v15 & 1) != 0 )
          {
            v15 = 1;
            v14 = HIBYTE(v141);
          }
          else if ( v22 )
          {
LABEL_33:
            if ( *(_BYTE *)v20 == 91 )
            {
              if ( *(_BYTE *)(v20 + v22 - 1) == 93 )
              {
                if ( v22 == 1 || *(char *)(v20 + 1) <= -65 )
                  sub_141938F40(v20, v22, 1, v22 - 1, (__int64)&off_1419E98C8);
                v26 = v22 == 2;
                v27 = v22 - 2;
                if ( v27 < 0 )
                {
                  v35 = 0;
                  goto LABEL_53;
                }
                if ( v26 )
                {
                  v29 = 1;
                }
                else
                {
                  nullsub_1(v10);
                  v28 = (__m128i *)sub_140001650(v27, 1);
                  if ( !v28 )
                  {
                    v146 = v27;
                    v35 = 1;
LABEL_53:
                    sub_141938D2B(v35, v146);
                  }
                  v29 = (__int64)v28;
                  sub_1418F44E0(v28, (const __m128i *)(v20 + 1), v27);
                }
                v124.m128i_i64[0] = v27;
                v146 = v29;
                v124.m128i_i64[1] = v29;
                v125.m128i_i64[0] = v27;
                sub_1403AAB80(&v129, &v124);
                v15 = 0;
                v14 = HIBYTE(v141);
              }
              else
              {
                v15 = 0;
                v14 = HIBYTE(v141);
              }
            }
            else
            {
              v15 = 0;
              v14 = HIBYTE(v141);
            }
          }
          else
          {
            v15 = 0;
            v14 = HIBYTE(v141);
          }
          break;
      }
    }
    else
    {
LABEL_4:
      v14 = HIBYTE(v141);
    }
  }
  v30 = _mm_load_si128((const __m128i *)&v130);
  v124 = _mm_load_si128(&v129);
  v125 = v30;
  v126 = v131;
  v31 = v143;
  if ( v143 < 0 )
  {
    v32 = 0;
    goto LABEL_48;
  }
  if ( v143 )
  {
    nullsub_1(v10);
    v32 = 1;
    v33 = sub_140001650(v31, 1);
    v34 = v150;
    if ( !v33 )
LABEL_48:
      sub_141938D2B(v32, v31);
  }
  else
  {
    v33 = 1;
    v34 = v150;
  }
  v147 = v31;
  v150 = v33;
  v148 = v33;
  v149 = 0;
  v152 = 2;
  v133 = 0;
  v134 = v31;
  v135 = v34;
  v136 = v31;
  v137 = 0;
  v138 = v31;
  v139 = 0xA0000000ALL;
  v140 = 1;
  v141 = 0;
  v36 = (const __m128i *)v125.m128i_i64[1];
  v119 = v125.m128i_i64[1];
  v118 = (const __m128i *)v124.m128i_i64[0];
  v37 = v124.m128i_i32[0] + 16;
  v120 = (const __m128i *)(v124.m128i_i64[0] + 16);
  LOBYTE(v37) = 1;
  v153 = v37;
  v38 = 0;
  while ( 2 )
  {
    LODWORD(v39) = 0;
LABEL_57:
    if ( !HIBYTE(v141) )
    {
      v40 = v135;
      sub_140C9D040(&v129, &v135);
      if ( v129.m128i_i32[0] == 1 )
      {
        v41 = v133;
        v133 = v130;
        v42 = v130 - v41;
        v43 = (const __m128i *)(v41 + v40);
        if ( (_QWORD)v130 == v41 )
          goto LABEL_70;
LABEL_64:
        if ( v43->m128i_i8[v42 - 1] == 10 )
        {
          if ( v42 == 1 )
          {
            v42 = 0;
          }
          else if ( v43->m128i_i8[v42 - 2] == 13 )
          {
            v42 -= 2LL;
          }
          else
          {
            --v42;
          }
        }
      }
      else
      {
        if ( HIBYTE(v141) )
          break;
        HIBYTE(v141) = 1;
        v42 = v134 - v133;
        if ( ((unsigned __int8)v141 | (v134 != v133)) != 1 )
          break;
        v43 = (const __m128i *)(v135 + v133);
        if ( v42 )
          goto LABEL_64;
      }
LABEL_70:
      v44 = sub_140E91160(v43, v42);
      v46 = v45;
      v47 = sub_1402B5F80(&v152, v43, v42);
      if ( !(_BYTE)v47 )
      {
        if ( (v39 & 1) == 0 )
        {
LABEL_143:
          v73 = v147;
          if ( v42 > v147 - v38 )
          {
            sub_14190D590((unsigned int)&v147, v38, v42, 1, 1);
            v150 = v148;
            v38 = v149;
LABEL_145:
            sub_1418F44E0((__m128i *)(v38 + v150), v43, v42);
            v73 = v147;
          }
          else if ( v42 )
          {
            goto LABEL_145;
          }
          v74 = v42 + v38;
          v149 = v74;
          if ( v73 == v74 )
            sub_14190D590((unsigned int)&v147, v73, 1, 1, 1);
          v150 = v148;
          *(_BYTE *)(v148 + v74) = 10;
          v38 = v74 + 1;
          v149 = v38;
          continue;
        }
LABEL_93:
        LOBYTE(v39) = 1;
        v26 = (v153 & 1) == 0;
        LOBYTE(v47) = 1;
        v153 = v47;
        if ( v26 )
        {
          v59 = v147;
          if ( v42 > v147 - v38 )
          {
            sub_14190D590((unsigned int)&v147, v38, v42, 1, 1);
            v150 = v148;
            v38 = v149;
LABEL_96:
            sub_1418F44E0((__m128i *)(v38 + v150), v43, v42);
            v59 = v147;
          }
          else if ( v42 )
          {
            goto LABEL_96;
          }
          v60 = v42 + v38;
          v149 = v60;
          if ( v59 == v60 )
            goto LABEL_98;
          goto LABEL_99;
        }
        goto LABEL_57;
      }
      v47 = v46 - 30;
      switch ( v46 )
      {
        case 30LL:
          v47 = _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v44), v13),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v44 + 14)), si128)));
          if ( v47 != 0xFFFF )
            goto LABEL_83;
          goto LABEL_149;
        case 36LL:
          v49 = v44;
          v50 = (__int128 *)"# <<< aimami-relay managed end (top)# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)";
          goto LABEL_80;
        case 39LL:
          v49 = v44;
          v50 = &xmmword_141A3E5F4;
LABEL_80:
          v47 = sub_1418F4B70(v49, v50);
          if ( v47 )
            goto LABEL_83;
LABEL_149:
          v153 = 0;
          continue;
        case 55LL:
          v47 = sub_1418F4B70(v44, &xmmword_141A3E139);
          if ( v47 )
            goto LABEL_83;
          goto LABEL_92;
        case 60LL:
          v47 = sub_1418F4B70(v44, "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)");
          if ( !v47 )
            goto LABEL_92;
          goto LABEL_83;
        case 64LL:
          v47 = sub_1418F4B70(v44, &xmmword_141A3E31B);
          if ( v47 )
            goto LABEL_83;
LABEL_92:
          LOBYTE(v47) = 1;
          v153 = v47;
          LOBYTE(v39) = 1;
          goto LABEL_57;
        default:
LABEL_83:
          if ( (v39 & 1) == 0 )
            goto LABEL_143;
          if ( !v46 || *(_BYTE *)v44 != 91 || *(_BYTE *)(v44 + v46 - 1) != 93 )
            goto LABEL_93;
          v51 = v46 - 1;
          if ( v46 == 1 || *(char *)(v44 + 1) <= -65 )
            sub_141938F40(v44, v46, 1, v51, (__int64)&off_1419E98C8);
          v52 = v44 + 1;
          v53 = v46 - 2;
          v54 = sub_140C713C0(v52, v53, v48, v51);
          LOBYTE(v36) = 1;
          v153 = (int)v36;
          LOBYTE(v39) = 1;
          if ( v54 )
            goto LABEL_57;
          sub_140C71A70(&v144, v52, v53);
          _EBX = ~_mm_movemask_epi8(_mm_load_si128(v118));
          v146 = v144.m128i_i64[1];
          v56 = v145;
          v36 = v118;
          _RAX = v120;
          v58 = v119;
          v142 = v145;
          break;
      }
      while ( 2 )
      {
        v123 = v58;
        v61 = v58 == 0;
        v62 = v58 - 1;
        if ( v61 )
        {
LABEL_128:
          if ( v56 )
          {
            v71 = (_QWORD *)(v146 + 8);
            do
            {
              v72 = *(v71 - 1);
              if ( v72 )
                sub_140001660(*v71, v72, 1);
              v71 += 3;
              --v56;
            }
            while ( v56 );
          }
          if ( v144.m128i_i64[0] )
            sub_140001660(v146, 24 * v144.m128i_i64[0], 8);
          LOBYTE(v39) = 1;
          if ( !v123 )
          {
            v59 = v147;
            if ( v42 > v147 - v38 )
            {
              sub_14190D590((unsigned int)&v147, v38, v42, 1, 1);
              v150 = v148;
              v38 = v149;
LABEL_138:
              sub_1418F44E0((__m128i *)(v38 + v150), v43, v42);
              v59 = v147;
            }
            else if ( v42 )
            {
              goto LABEL_138;
            }
            v60 = v42 + v38;
            v149 = v60;
            if ( v59 == v60 )
            {
LABEL_98:
              sub_14190D590((unsigned int)&v147, v59, 1, 1, 1);
              v60 = v59;
            }
LABEL_99:
            v150 = v148;
            *(_BYTE *)(v148 + v60) = 10;
            v38 = v60 + 1;
            v149 = v38;
            LOBYTE(v39) = 1;
            v153 = 0;
          }
          goto LABEL_57;
        }
        if ( !(_WORD)_EBX )
        {
          do
          {
            v63 = _mm_load_si128(_RAX);
            v36 -= 24;
            ++_RAX;
            _EBX = _mm_movemask_epi8(v63) ^ 0xFFFF;
          }
          while ( !_EBX );
        }
        v128 = _RAX;
        __asm { tzcnt   eax, ebx }
        v121 = v36;
        sub_140C71A70(&v129, v36[-1].m128i_i64[-3 * (_QWORD)_RAX], v36->m128i_i64[-3 * (_QWORD)_RAX - 1]);
        v122 = v62;
        v64 = v129.m128i_i64[1];
        v65 = v130;
        v66 = v146;
        v143 = v129.m128i_i64[1];
        if ( v56 >= (unsigned __int64)v130 )
        {
          if ( (_QWORD)v130 )
          {
            v39 = 16;
            v67 = v130;
            while ( *(_QWORD *)(v66 + v39) == *(_QWORD *)(v64 + v39) )
            {
              v68 = sub_1418F4B70(*(_QWORD *)(v66 + v39 - 8), *(_QWORD *)(v143 + v39 - 8));
              v64 = v143;
              v26 = v68 == 0;
              v66 = v146;
              if ( !v26 )
                break;
              v39 += 24;
              if ( !--v67 )
              {
                LOBYTE(v39) = 1;
                v56 = v142;
                goto LABEL_121;
              }
            }
            goto LABEL_105;
          }
          LOBYTE(v39) = 1;
          v56 = v142;
        }
        else
        {
LABEL_105:
          v56 = v142;
          LOBYTE(v39) = v65 >= v142;
          if ( v142 != 0 && v65 >= v142 )
          {
            v39 = 16;
            while ( 1 )
            {
              if ( *(_QWORD *)(v64 + v39) != *(_QWORD *)(v146 + v39) )
              {
                LODWORD(v39) = 0;
                v56 = v142;
                goto LABEL_120;
              }
              if ( (unsigned int)sub_1418F4B70(*(_QWORD *)(v64 + v39 - 8), *(_QWORD *)(v146 + v39 - 8)) )
                break;
              v39 += 24;
              --v56;
              v64 = v143;
              if ( !v56 )
              {
                LOBYTE(v39) = 1;
                v56 = v142;
                goto LABEL_120;
              }
            }
            LODWORD(v39) = 0;
            v56 = v142;
            v64 = v143;
          }
LABEL_120:
          if ( v65 )
          {
LABEL_121:
            v132 = v39;
            v69 = (_QWORD *)(v64 + 8);
            do
            {
              v70 = *(v69 - 1);
              if ( v70 )
                sub_140001660(*v69, v70, 1);
              v69 += 3;
              --v65;
            }
            while ( v65 );
            v64 = v143;
            LODWORD(v39) = v132;
          }
        }
        if ( v129.m128i_i64[0] )
          sub_140001660(v64, 24 * v129.m128i_i64[0], 8);
        _EBX &= _EBX - 1;
        v36 = v121;
        _RAX = v128;
        v58 = v122;
        if ( (_BYTE)v39 )
          goto LABEL_128;
        continue;
      }
    }
    break;
  }
  if ( v38 )
  {
    nullsub_1(v36);
    v75 = sub_140001650(v38, 1);
    if ( !v75 )
      sub_141938D2B(1, v38);
    v76 = v75;
  }
  else
  {
    v76 = 1;
  }
  v144.m128i_i64[0] = v38;
  v144.m128i_i64[1] = v76;
  v145 = 0;
  v151 = 2;
  v133 = 0;
  v134 = v38;
  v135 = v150;
  v136 = v38;
  v137 = 0;
  v138 = v38;
  v139 = 0xA0000000ALL;
  v140 = 1;
  v141 = 0;
  v77 = 0;
  v78 = _mm_cvtsi32_si128(0xB194E7AF);
  v79 = _mm_load_si128((const __m128i *)&xmmword_141A386A0);
  v80 = _mm_cvtsi32_si128(0xBD83E89F);
  v81 = _mm_load_si128((const __m128i *)&xmmword_141A386C0);
  v82 = _mm_load_si128((const __m128i *)&xmmword_141A38670);
  v83 = _mm_load_si128((const __m128i *)&xmmword_141A38680);
  v84 = 0;
  v85 = 0;
  while ( (v84 & 1) == 0 )
  {
    v87 = v135;
    sub_140C9D040(&v129, &v135);
    if ( v129.m128i_i32[0] == 1 )
    {
      v88 = v133;
      v133 = v130;
      v89 = v130 - v88;
      v90 = (const __m128i *)(v88 + v87);
      if ( (_QWORD)v130 == v88 )
        goto LABEL_171;
      goto LABEL_165;
    }
    if ( !HIBYTE(v141) )
    {
      HIBYTE(v141) = 1;
      v89 = v134 - v133;
      if ( ((unsigned __int8)v141 | (v134 != v133)) == 1 )
      {
        v90 = (const __m128i *)(v135 + v133);
        if ( !v89 )
          goto LABEL_171;
LABEL_165:
        if ( v90->m128i_i8[v89 - 1] == 10 )
        {
          if ( v89 == 1 )
          {
            v89 = 0;
          }
          else if ( v90->m128i_i8[v89 - 2] == 13 )
          {
            v89 -= 2LL;
          }
          else
          {
            --v89;
          }
        }
LABEL_171:
        v91 = sub_140E91160(v90, v89);
        v93 = v92;
        if ( (unsigned __int8)sub_1402B5F80(&v151, v90, v89) )
        {
          if ( v93 && *(_BYTE *)v91 == 91 && *(_BYTE *)(v91 + v93 - 1) == 93 )
          {
            v95 = v93 - 1;
            if ( v93 == 1 || *(char *)(v91 + 1) <= -65 )
              sub_141938F40(v91, v93, 1, v95, (__int64)&off_141A3E658);
            v96 = sub_140C713C0(v91 + 1, v93 - 2, v94, v95);
            v86 = 1;
            if ( v96 )
              goto LABEL_157;
LABEL_182:
            if ( v93 < 6 )
              goto LABEL_183;
            if ( !(*(_DWORD *)v91 ^ 0x4C432023 | *(unsigned __int16 *)(v91 + 4) ^ 0x3A49)
              && (unsigned __int8)sub_140C9E140(&qword_141A3E670, 12, v91, v93) )
            {
              goto LABEL_189;
            }
            if ( v93 >= 0x28 )
            {
              if ( !(unsigned int)sub_1418F4B70(&unk_141A3E67C, v91) )
                goto LABEL_189;
            }
            else if ( v93 < 0x15 )
            {
              if ( v93 == 20 )
              {
                if ( _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v91), v79),
                         _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v91 + 16)), v78))) == 0xFFFF )
                  goto LABEL_189;
                goto LABEL_207;
              }
              goto LABEL_183;
            }
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v91 + 5)), v82),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v91), v83))) == 0xFFFF
              || v93 >= 0x25 && !(unsigned int)sub_1418F4B70(&unk_141A3E6A4, v91)
              || _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v91), v79),
                     _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v91 + 16)), v78))) == 0xFFFF )
            {
              goto LABEL_189;
            }
            if ( v93 >= 0x23 )
            {
              if ( !(unsigned int)sub_1418F4B70(&unk_141A3E6C9, v91) )
                goto LABEL_189;
            }
            else if ( v93 != 34 )
            {
              goto LABEL_207;
            }
            if ( !(unsigned int)sub_1418F4B70(&unk_141A3E6EC, v91) )
              goto LABEL_189;
LABEL_207:
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v91 + 16)), v80),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v91), v81))) == 0xFFFF )
            {
LABEL_189:
              v86 = 0;
              goto LABEL_157;
            }
LABEL_183:
            v97 = v144.m128i_i64[0];
            if ( v89 > v144.m128i_i64[0] - v77 )
            {
              sub_14190D590((unsigned int)&v144, v77, v89, 1, 1);
              v76 = v144.m128i_i64[1];
              v77 = v145;
LABEL_185:
              sub_1418F44E0((__m128i *)(v77 + v76), v90, v89);
              v97 = v144.m128i_i64[0];
            }
            else if ( v89 )
            {
              goto LABEL_185;
            }
            v98 = v89 + v77;
            v145 = v98;
            if ( v97 == v98 )
              sub_14190D590((unsigned int)&v144, v97, 1, 1, 1);
            v76 = v144.m128i_i64[1];
            *(_BYTE *)(v144.m128i_i64[1] + v98) = 10;
            v77 = v98 + 1;
            v145 = v77;
            goto LABEL_189;
          }
          if ( !v85 )
            goto LABEL_182;
          v86 = v93 != 0;
        }
        else
        {
          v86 = 1;
          if ( !v85 )
            goto LABEL_183;
        }
LABEL_157:
        v84 = HIBYTE(v141);
        v85 = v86;
        continue;
      }
    }
    break;
  }
  while ( 2 )
  {
    if ( v77 >= 2 && *(_WORD *)(v76 + v77 - 2) == 2570 )
    {
      v99 = -1;
      if ( *(char *)(v76 + v77 - 1) < 0 )
      {
        v100 = *(_BYTE *)(v76 + v77 - 2);
        if ( v100 > -65 )
        {
          v103 = v100 & 0x1F;
          if ( v103 >= 2 )
          {
LABEL_221:
            v99 = -2;
            if ( v103 >= 0x20 )
              v99 = (v103 < 0x400) | 0xFFFFFFFFFFFFFFFCuLL;
          }
        }
        else
        {
          v101 = *(_BYTE *)(v76 + v77 - 3);
          if ( v101 > -65 )
            v102 = v101 & 0xF;
          else
            v102 = ((*(_BYTE *)(v76 + v77 - 4) & 7) << 6) | v101 & 0x3F;
          v103 = (v102 << 6) | v100 & 0x3F;
          if ( v103 >= 2 )
            goto LABEL_221;
        }
      }
      v77 += v99;
      continue;
    }
    break;
  }
  v145 = v77;
  if ( v77 == 1 )
    v145 = *(_BYTE *)v76 != 10;
  HIDWORD(_RAX) = HIDWORD(v145);
  v105 = v127;
  v127[1].m128i_i64[0] = v145;
  *v105 = _mm_loadu_si128(&v144);
  if ( v147 )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v150, v147, 1) >> 32;
  v106 = v124.m128i_i64[1];
  if ( v124.m128i_i64[1] )
  {
    v107 = v125.m128i_i64[1];
    if ( v125.m128i_i64[1] )
    {
      v108 = v124.m128i_i64[0];
      v109 = (const __m128i *)(v124.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v124.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v111 = _mm_load_si128(v109);
            v108 -= 384;
            ++v109;
            _R15D = _mm_movemask_epi8(v111) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v112 = -3 * _RAX;
        v113 = *(_QWORD *)(v108 + 8 * v112 - 24);
        if ( v113 )
          sub_140001660(*(_QWORD *)(v108 + 8 * v112 - 16), v113, 1);
        --v107;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v107 );
    }
    v114 = (24 * v106 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v115 = v114 + v106 + 17;
    if ( v115 )
      sub_140001660(v124.m128i_i64[0] - v114, v115, 16);
  }
  return v127;
}
