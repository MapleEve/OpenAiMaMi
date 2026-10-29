// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408c72f0 | successor of pre-update 0x140c6f5e0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__m128i *__fastcall sub_1408C72F0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __m128i si128; // xmm6
  __m128i v14; // xmm7
  char v15; // al
  char v16; // r12
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // r8
  __int64 v27; // rcx
  __int128 *v28; // rdx
  char v29; // al
  bool v30; // zf
  const __m128i *v31; // r13
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __m128i v35; // xmm1
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int32 v42; // eax
  __int64 v43; // r13
  char v44; // di
  __int64 v45; // r12
  __int64 v46; // rax
  unsigned __int64 v47; // r15
  __int64 v48; // r12
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rsi
  int is_structural; // eax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // rcx
  __int128 *v59; // rdx
  __int64 v60; // r14
  __int64 v61; // rsi
  char v62; // al
  const __m128i *v63; // rcx
  __m128i v64; // xmm0
  __int64 v66; // rdx
  const __m128i *v67; // rdi
  __m128i v68; // xmm0
  unsigned __int64 v69; // r14
  _QWORD *v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rbx
  __int64 v73; // rsi
  __int64 v74; // r8
  int v75; // eax
  __int64 v76; // rdi
  __int64 v77; // rbx
  unsigned __int64 v78; // rsi
  __int64 v79; // r8
  int v80; // eax
  _QWORD *v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rsi
  unsigned __int64 v84; // rsi
  unsigned __int64 v85; // r13
  _QWORD *v86; // rsi
  __int64 v87; // rax
  unsigned __int64 v88; // rdi
  _QWORD *v89; // rsi
  _QWORD *v90; // rsi
  __int64 v91; // rsi
  unsigned __int64 v92; // r13
  __int64 v93; // rax
  __int64 v94; // r14
  unsigned __int64 v95; // rbx
  __m128i v96; // xmm6
  __m128i v97; // xmm7
  __m128i v98; // xmm8
  __m128i v99; // xmm9
  __m128i v100; // xmm10
  __m128i v101; // xmm11
  char v102; // al
  bool v103; // r12
  bool v104; // cl
  __int64 v105; // rsi
  __int64 v106; // rax
  unsigned __int64 v107; // rdi
  __int64 v108; // rsi
  unsigned __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r13
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // r15
  __int64 v114; // r8
  unsigned __int64 v115; // r9
  char v116; // al
  __int64 v117; // rdx
  unsigned __int64 v118; // rbx
  __m128i *v119; // r12
  unsigned __int64 v120; // rdx
  char *v121; // rcx
  unsigned __int64 v122; // rax
  char v123; // cl
  char v124; // r8
  int v125; // r8d
  unsigned int v126; // ecx
  __int64 v128; // rsi
  __int64 v129; // rdi
  __int64 v130; // rbx
  const __m128i *v131; // r14
  __m128i v133; // xmm0
  __int64 v134; // rax
  __int64 v135; // rdx
  unsigned __int64 v136; // rax
  __int64 v137; // rsi
  __int64 v139; // rsi
  const __m128i *v140; // [rsp+30h] [rbp-50h]
  const __m128i *v141; // [rsp+38h] [rbp-48h]
  int v142; // [rsp+40h] [rbp-40h]
  const __m128i *v143; // [rsp+48h] [rbp-38h]
  __m128i v144; // [rsp+50h] [rbp-30h] BYREF
  __m128i v145; // [rsp+60h] [rbp-20h]
  __int128 v146; // [rsp+70h] [rbp-10h]
  __m128i *v147; // [rsp+80h] [rbp+0h]
  __int64 i; // [rsp+88h] [rbp+8h]
  __m128i v149; // [rsp+90h] [rbp+10h] BYREF
  __int128 v150; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v151; // [rsp+B0h] [rbp+30h]
  const __m128i *v152; // [rsp+C8h] [rbp+48h]
  __int64 v153; // [rsp+D0h] [rbp+50h]
  unsigned __int64 v154; // [rsp+D8h] [rbp+58h]
  __int64 v155; // [rsp+E0h] [rbp+60h]
  __int64 v156; // [rsp+E8h] [rbp+68h]
  __int64 v157; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v158; // [rsp+F8h] [rbp+78h]
  __int64 v159; // [rsp+100h] [rbp+80h]
  __int64 v160; // [rsp+108h] [rbp+88h]
  __int64 v161; // [rsp+110h] [rbp+90h]
  char v162; // [rsp+118h] [rbp+98h]
  __int16 v163; // [rsp+120h] [rbp+A0h]
  __m128i v164; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v165; // [rsp+138h] [rbp+B8h]
  __int64 v166; // [rsp+140h] [rbp+C0h]
  __int64 v167; // [rsp+148h] [rbp+C8h]
  __int64 v168; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v169; // [rsp+158h] [rbp+D8h]
  __int64 v170; // [rsp+160h] [rbp+E0h]
  __int64 v171; // [rsp+168h] [rbp+E8h]
  char v172; // [rsp+176h] [rbp+F6h] BYREF
  char v173; // [rsp+177h] [rbp+F7h] BYREF
  __int64 v174; // [rsp+178h] [rbp+F8h]

  v174 = -2;
  v6 = sub_1416AE140(a1);
  v30 = *(_BYTE *)(v6 + 16) == 1;
  v147 = a1;
  if ( v30 )
  {
    v11 = *(_QWORD *)v6;
    v12 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v139 = v6;
    v11 = sub_1416C5230(v8, v7, v9, v10);
    v6 = v139;
    *(_QWORD *)v139 = v11;
    *(_QWORD *)(v139 + 8) = v12;
    *(_BYTE *)(v139 + 16) = 1;
  }
  *(_QWORD *)v6 = v11 + 1;
  v150 = xmmword_141A51860;
  v149 = _mm_loadu_si128((const __m128i *)&off_141A51850);
  *(_QWORD *)&v151 = v11;
  *((_QWORD *)&v151 + 1) = v12;
  v164.m128i_i8[0] = 2;
  v155 = 0;
  v156 = a3;
  v153 = a2;
  v157 = a2;
  v158 = a3;
  v159 = 0;
  v171 = a3;
  v160 = a3;
  v161 = 0xA0000000ALL;
  v162 = 1;
  v163 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A505A0);
  v14 = _mm_load_si128((const __m128i *)&xmmword_141A505B0);
  v15 = 0;
  v16 = 0;
  while ( (v15 & 1) == 0 )
  {
    v17 = v157;
    sub_1408FD7D0(&v144, &v157);
    if ( v144.m128i_i32[0] != 1 )
    {
      if ( HIBYTE(v163) )
        break;
      HIBYTE(v163) = 1;
      v19 = v156 - v155;
      if ( ((unsigned __int8)v163 | (v156 != v155)) != 1 )
        break;
      v20 = v157 + v155;
      if ( !v19 )
        goto LABEL_21;
LABEL_12:
      if ( *(_BYTE *)(v20 + v19 - 1) == 10 )
      {
        v21 = v19 - 1;
        if ( v19 == 1 )
        {
          v19 = -1;
          v22 = 0;
        }
        else
        {
          v22 = v20;
          if ( *(_BYTE *)(v20 + v19 - 2) != 13 )
            v22 = 0;
          v19 -= 2;
        }
        if ( v22 )
          v20 = v22;
        else
          v19 = v21;
      }
      goto LABEL_21;
    }
    v18 = v155;
    v155 = v145.m128i_i64[0];
    v19 = v145.m128i_i64[0] - v18;
    v20 = v18 + v17;
    if ( v145.m128i_i64[0] != v18 )
      goto LABEL_12;
LABEL_21:
    v23 = sub_1408FEA60(v20, v19);
    v25 = v24;
    if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v164, v20, v19) )
    {
      switch ( v25 )
      {
        case 30LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v23), v14),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v23 + 14)), si128))) != 0xFFFF )
            goto LABEL_29;
          v16 = 0;
          v15 = HIBYTE(v163);
          continue;
        case 36LL:
          if ( (unsigned int)sub_141923B40(v23, aAimamiRelayMan, 36) )
            goto LABEL_29;
          v16 = 0;
          v15 = HIBYTE(v163);
          continue;
        case 39LL:
          if ( (unsigned int)sub_141923B40(v23, &xmmword_141A54794, 39) )
            goto LABEL_29;
          v16 = 0;
          v15 = HIBYTE(v163);
          continue;
        case 55LL:
          v26 = 55;
          v27 = v23;
          v28 = &xmmword_141A542EF;
          goto LABEL_35;
        case 60LL:
          v26 = 60;
          v27 = v23;
          v28 = (__int128 *)aAimamiRelayMan_1;
          goto LABEL_35;
        case 64LL:
          v26 = 64;
          v27 = v23;
          v28 = &xmmword_141A544DE;
LABEL_35:
          v29 = v16 | ((unsigned int)sub_141923B40(v27, v28, v26) == 0);
          v16 = 1;
          if ( (v29 & 1) == 0 )
            goto LABEL_36;
          goto LABEL_4;
        default:
LABEL_29:
          if ( (v16 & 1) != 0 )
          {
            v16 = 1;
            v15 = HIBYTE(v163);
          }
          else if ( v25 )
          {
LABEL_36:
            if ( *(_BYTE *)v23 == 91 )
            {
              if ( *(_BYTE *)(v23 + v25 - 1) == 93 )
              {
                if ( v25 == 1 || *(char *)(v23 + 1) <= -65 )
                  sub_14196B4F0(v23, v25, 1, v25 - 1, (__int64)&off_141A496C8);
                v30 = v25 == 2;
                v31 = (const __m128i *)(v25 - 2);
                if ( (__int64)v31 < 0 )
                {
                  v40 = 0;
                  goto LABEL_56;
                }
                if ( v30 )
                {
                  v34 = 1;
                }
                else
                {
                  nullsub_1(v11, v12);
                  v32 = sub_140001650(v31, 1);
                  if ( !v32 )
                  {
                    v152 = v31;
                    v40 = 1;
LABEL_56:
                    sub_14196B2DB(v40, v152);
                  }
                  v33 = v23 + 1;
                  v34 = v32;
                  sub_1419234B0(v32, v33, v31);
                }
                v144.m128i_i64[0] = (__int64)v31;
                v152 = (const __m128i *)v34;
                v144.m128i_i64[1] = v34;
                v145.m128i_i64[0] = (__int64)v31;
                sub_140871180((__int64)&v149, &v144);
                v16 = 0;
                v15 = HIBYTE(v163);
              }
              else
              {
                v16 = 0;
                v15 = HIBYTE(v163);
              }
            }
            else
            {
              v16 = 0;
              v15 = HIBYTE(v163);
            }
          }
          else
          {
            v16 = 0;
            v15 = HIBYTE(v163);
          }
          break;
      }
    }
    else
    {
LABEL_4:
      v15 = HIBYTE(v163);
    }
  }
  v35 = _mm_load_si128((const __m128i *)&v150);
  v144 = _mm_load_si128(&v149);
  v145 = v35;
  v146 = v151;
  v36 = v171;
  if ( v171 < 0 )
  {
    v37 = 0;
    goto LABEL_51;
  }
  if ( v171 )
  {
    nullsub_1(v11, v12);
    v37 = 1;
    v38 = sub_140001650(v36, 1);
    v39 = v153;
    if ( !v38 )
LABEL_51:
      sub_14196B2DB(v37, v36);
  }
  else
  {
    v38 = 1;
    v39 = v153;
  }
  v168 = v36;
  v169 = v38;
  v170 = 0;
  v173 = 2;
  v155 = 0;
  v156 = v36;
  v157 = v39;
  v158 = v36;
  v159 = 0;
  v160 = v36;
  v161 = 0xA0000000ALL;
  v162 = 1;
  v163 = 0;
  v41 = v145.m128i_i64[1];
  v153 = v145.m128i_i64[1];
  v152 = (const __m128i *)v144.m128i_i64[0];
  v42 = v144.m128i_i32[0] + 16;
  v140 = (const __m128i *)(v144.m128i_i64[0] + 16);
  LOBYTE(v42) = 1;
  LODWORD(v171) = v42;
  v43 = 0;
  while ( 2 )
  {
    v44 = 0;
LABEL_60:
    if ( !HIBYTE(v163) )
    {
      v45 = v157;
      sub_1408FD7D0(&v149, &v157);
      if ( v149.m128i_i32[0] == 1 )
      {
        v46 = v155;
        v155 = v150;
        v47 = v150 - v46;
        v48 = v46 + v45;
        if ( (_QWORD)v150 == v46 )
          goto LABEL_76;
LABEL_67:
        if ( *(_BYTE *)(v48 + v47 - 1) == 10 )
        {
          v49 = v47 - 1;
          if ( v47 == 1 )
          {
            v47 = -1;
            v50 = 0;
          }
          else
          {
            v50 = v48;
            if ( *(_BYTE *)(v48 + v47 - 2) != 13 )
              v50 = 0;
            v47 -= 2LL;
          }
          if ( v50 )
            v48 = v50;
          else
            v47 = v49;
        }
      }
      else
      {
        if ( HIBYTE(v163) )
          break;
        HIBYTE(v163) = 1;
        v47 = v156 - v155;
        if ( ((unsigned __int8)v163 | (v156 != v155)) != 1 )
          break;
        v48 = v157 + v155;
        if ( v47 )
          goto LABEL_67;
      }
LABEL_76:
      v51 = sub_1408FEA60(v48, v47);
      v53 = v52;
      is_structural = toml_lexical_state_line_is_structural(&v173, v48, v47);
      if ( (_BYTE)is_structural )
      {
        is_structural = v53 - 30;
        switch ( v53 )
        {
          case 30LL:
            is_structural = _mm_movemask_epi8(
                              _mm_and_si128(
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v51), v14),
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v51 + 14)), si128)));
            if ( is_structural != 0xFFFF )
              goto LABEL_89;
            goto LABEL_170;
          case 36LL:
            v57 = 36;
            v58 = v51;
            v59 = (__int128 *)aAimamiRelayMan;
            goto LABEL_86;
          case 39LL:
            v57 = 39;
            v58 = v51;
            v59 = &xmmword_141A54794;
LABEL_86:
            is_structural = sub_141923B40(v58, v59, v57);
            if ( is_structural )
              goto LABEL_89;
LABEL_170:
            LODWORD(v171) = 0;
            continue;
          case 55LL:
            is_structural = sub_141923B40(v51, &xmmword_141A542EF, 55);
            if ( is_structural )
              goto LABEL_89;
            goto LABEL_134;
          case 60LL:
            is_structural = sub_141923B40(v51, aAimamiRelayMan_1, 60);
            if ( !is_structural )
              goto LABEL_134;
            goto LABEL_89;
          case 64LL:
            is_structural = sub_141923B40(v51, &xmmword_141A544DE, 64);
            if ( is_structural )
              goto LABEL_89;
LABEL_134:
            LOBYTE(is_structural) = 1;
            LODWORD(v171) = is_structural;
            v44 = 1;
            goto LABEL_60;
          default:
LABEL_89:
            if ( (v44 & 1) == 0 )
              goto LABEL_164;
            if ( !v53 || *(_BYTE *)v51 != 91 || *(_BYTE *)(v51 + v53 - 1) != 93 )
              goto LABEL_135;
            if ( v53 == 1 || *(char *)(v51 + 1) <= -65 )
              sub_14196B4F0(v51, v53, 1, v53 - 1, (__int64)&off_141A496C8);
            v60 = v51 + 1;
            v61 = v53 - 2;
            v62 = sub_1408C8F20(v60, v61, v55, v56);
            LOBYTE(v41) = 1;
            LODWORD(v171) = v41;
            v44 = 1;
            if ( v62 )
              goto LABEL_60;
            sub_1408C95C0(&v164, v60, v61);
            v166 = v164.m128i_i64[1];
            if ( !v153 )
              goto LABEL_126;
            v63 = v152;
            v64 = _mm_load_si128(v152);
            v154 = v165;
            _RAX = (unsigned int)~_mm_movemask_epi8(v64);
            v66 = v153;
            v67 = v140;
            break;
        }
        do
        {
          for ( i = v66; !(_DWORD)_RAX; _RAX = _mm_movemask_epi8(v68) ^ 0xFFFFu )
          {
            v68 = _mm_load_si128(v67);
            v63 -= 24;
            ++v67;
          }
          v142 = _RAX;
          __asm { tzcnt   eax, eax }
          v141 = v63;
          sub_1408C95C0(&v149, v63[-1].m128i_i64[-3 * _RAX], v63->m128i_i64[-3 * _RAX - 1]);
          v69 = v150;
          v41 = v166;
          if ( v154 >= (unsigned __int64)v150 )
          {
            v167 = v149.m128i_i64[1];
            if ( !(_QWORD)v150 )
            {
LABEL_145:
              v87 = v149.m128i_i64[0];
              v88 = v154;
              if ( v149.m128i_i64[0] )
                goto LABEL_146;
              goto LABEL_147;
            }
            v72 = 16;
            v73 = v150;
            v41 = v166;
            v12 = v167;
            while ( 1 )
            {
              v74 = *(_QWORD *)(v41 + v72);
              if ( v74 != *(_QWORD *)(v12 + v72) )
                break;
              v75 = sub_141923B40(*(_QWORD *)(v166 + v72 - 8), *(_QWORD *)(v167 + v72 - 8), v74);
              v12 = v167;
              v41 = v166;
              if ( v75 )
                break;
              v72 += 24;
              if ( !--v73 )
              {
                v86 = (_QWORD *)(v167 + 8);
                do
                {
                  v12 = *(v86 - 1);
                  if ( v12 )
                    sub_140001660(*v86, v12, 1);
                  v86 += 3;
                  --v69;
                }
                while ( v69 );
                goto LABEL_145;
              }
            }
          }
          if ( v69 >= v154 )
          {
            v143 = v67;
            v76 = v149.m128i_i64[1];
            v167 = v149.m128i_i64[1];
            if ( !v154 )
            {
LABEL_155:
              v88 = v154;
              if ( v69 )
              {
                v90 = (_QWORD *)(v167 + 8);
                do
                {
                  v12 = *(v90 - 1);
                  if ( v12 )
                    sub_140001660(*v90, v12, 1);
                  v90 += 3;
                  --v69;
                }
                while ( v69 );
              }
              v87 = v149.m128i_i64[0];
              if ( !v149.m128i_i64[0] )
                goto LABEL_147;
LABEL_146:
              sub_140001660(v167, 24 * v87, 8);
LABEL_147:
              if ( v88 )
              {
                v89 = (_QWORD *)(v166 + 8);
                do
                {
                  v12 = *(v89 - 1);
                  if ( v12 )
                    sub_140001660(*v89, v12, 1);
                  v89 += 3;
                  --v88;
                }
                while ( v88 );
              }
              if ( v164.m128i_i64[0] )
                sub_140001660(v166, 24 * v164.m128i_i64[0], 8);
              v44 = 1;
              goto LABEL_60;
            }
            v77 = 16;
            v78 = v154;
            while ( 1 )
            {
              v79 = *(_QWORD *)(v76 + v77);
              if ( v79 != *(_QWORD *)(v41 + v77) )
                break;
              v80 = sub_141923B40(*(_QWORD *)(v76 + v77 - 8), *(_QWORD *)(v166 + v77 - 8), v79);
              v41 = v166;
              if ( v80 )
                break;
              v77 += 24;
              if ( !--v78 )
                goto LABEL_155;
            }
            v81 = (_QWORD *)(v76 + 8);
            v67 = v143;
            do
            {
              v82 = *(v81 - 1);
              if ( v82 )
                sub_140001660(*v81, v82, 1);
              v81 += 3;
              --v69;
            }
            while ( v69 );
          }
          else
          {
            v167 = v149.m128i_i64[1];
            if ( v69 )
            {
              v70 = (_QWORD *)(v167 + 8);
              do
              {
                v71 = *(v70 - 1);
                if ( v71 )
                  sub_140001660(*v70, v71, 1);
                v70 += 3;
                --v69;
              }
              while ( v69 );
            }
          }
          v83 = i;
          if ( v149.m128i_i64[0] )
            sub_140001660(v167, 24 * v149.m128i_i64[0], 8);
          _RAX = v142 & (unsigned int)(v142 - 1);
          v66 = v83 - 1;
          v63 = v141;
        }
        while ( v83 != 1 );
LABEL_126:
        sub_1402346F0(&v164);
        if ( v164.m128i_i64[0] )
          sub_140001660(v166, 24 * v164.m128i_i64[0], 8);
        v84 = v168;
        if ( v47 > v168 - v43 )
        {
          sub_141939070((unsigned int)&v168, v43, v47, 1, 1);
          v84 = v168;
          v43 = v170;
LABEL_130:
          sub_1419234B0(v43 + v169, v48, v47);
        }
        else if ( v47 )
        {
          goto LABEL_130;
        }
        v85 = v47 + v43;
        v170 = v85;
        if ( v84 != v85 )
          goto LABEL_141;
LABEL_140:
        sub_141939070((unsigned int)&v168, v84, 1, 1, 1);
        v85 = v84;
LABEL_141:
        *(_BYTE *)(v169 + v85) = 10;
        v43 = v85 + 1;
        v170 = v43;
        v44 = 1;
        LODWORD(v171) = 0;
      }
      else
      {
        if ( (v44 & 1) == 0 )
        {
LABEL_164:
          v91 = v168;
          if ( v47 > v168 - v43 )
          {
            sub_141939070((unsigned int)&v168, v43, v47, 1, 1);
            v91 = v168;
            v43 = v170;
LABEL_166:
            sub_1419234B0(v43 + v169, v48, v47);
          }
          else if ( v47 )
          {
            goto LABEL_166;
          }
          v92 = v47 + v43;
          v170 = v92;
          if ( v91 == v92 )
            sub_141939070((unsigned int)&v168, v91, 1, 1, 1);
          *(_BYTE *)(v169 + v92) = 10;
          v43 = v92 + 1;
          v170 = v43;
          continue;
        }
LABEL_135:
        v44 = 1;
        v30 = (v171 & 1) == 0;
        LOBYTE(is_structural) = 1;
        LODWORD(v171) = is_structural;
        if ( v30 )
        {
          v84 = v168;
          if ( v47 > v168 - v43 )
          {
            sub_141939070((unsigned int)&v168, v43, v47, 1, 1);
            v84 = v168;
            v43 = v170;
LABEL_138:
            sub_1419234B0(v43 + v169, v48, v47);
          }
          else if ( v47 )
          {
            goto LABEL_138;
          }
          v85 = v47 + v43;
          v170 = v85;
          if ( v84 == v85 )
            goto LABEL_140;
          goto LABEL_141;
        }
      }
      goto LABEL_60;
    }
    break;
  }
  if ( v43 )
  {
    nullsub_1(v41, v12);
    v93 = sub_140001650(v43, 1);
    if ( !v93 )
      sub_14196B2DB(1, v43);
    v94 = v93;
  }
  else
  {
    v94 = 1;
  }
  v164.m128i_i64[0] = v43;
  v164.m128i_i64[1] = v94;
  v165 = 0;
  v172 = 2;
  v155 = 0;
  v156 = v43;
  v171 = v169;
  v157 = v169;
  v158 = v43;
  v159 = 0;
  v160 = v43;
  v161 = 0xA0000000ALL;
  v162 = 1;
  v163 = 0;
  v95 = 0;
  v96 = _mm_cvtsi32_si128(0xB194E7AF);
  v97 = _mm_load_si128((const __m128i *)&xmmword_141A505F0);
  v98 = _mm_cvtsi32_si128(0xBD83E89F);
  v99 = _mm_load_si128((const __m128i *)&xmmword_141A50610);
  v100 = _mm_load_si128((const __m128i *)&xmmword_141A505C0);
  v101 = _mm_load_si128((const __m128i *)&xmmword_141A505D0);
  v102 = 0;
  v103 = 0;
  while ( 2 )
  {
    if ( (v102 & 1) == 0 )
    {
      v105 = v157;
      sub_1408FD7D0(&v149, &v157);
      if ( v149.m128i_i32[0] == 1 )
      {
        v106 = v155;
        v155 = v150;
        v107 = v150 - v106;
        v108 = v106 + v105;
        if ( (_QWORD)v150 == v106 )
          goto LABEL_195;
LABEL_186:
        if ( *(_BYTE *)(v108 + v107 - 1) == 10 )
        {
          v109 = v107 - 1;
          if ( v107 == 1 )
          {
            v107 = -1;
            v110 = 0;
          }
          else
          {
            v110 = v108;
            if ( *(_BYTE *)(v108 + v107 - 2) != 13 )
              v110 = 0;
            v107 -= 2LL;
          }
          if ( v110 )
            v108 = v110;
          else
            v107 = v109;
        }
      }
      else
      {
        if ( HIBYTE(v163) )
          break;
        HIBYTE(v163) = 1;
        v107 = v156 - v155;
        if ( ((unsigned __int8)v163 | (v156 != v155)) != 1 )
          break;
        v108 = v157 + v155;
        if ( v107 )
          goto LABEL_186;
      }
LABEL_195:
      v111 = sub_1408FEA60(v108, v107);
      v113 = v112;
      if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v172, v108, v107) )
      {
        if ( v113 && *(_BYTE *)v111 == 91 && *(_BYTE *)(v111 + v113 - 1) == 93 )
        {
          v115 = v113 - 1;
          if ( v113 == 1 || *(char *)(v111 + 1) <= -65 )
            sub_14196B4F0(v111, v113, 1, v115, (__int64)&off_141A547F8);
          v116 = sub_1408C8F20(v111 + 1, v113 - 2, v114, v115);
          v104 = 1;
          if ( v116 )
            goto LABEL_178;
LABEL_206:
          if ( v113 < 6 )
            goto LABEL_207;
          if ( !(*(_DWORD *)v111 ^ 0x4C432023 | *(unsigned __int16 *)(v111 + 4) ^ 0x3A49)
            && (unsigned __int8)sub_1408FDB70(&qword_141A54810, 12, v111, v113) )
          {
            goto LABEL_213;
          }
          if ( v113 >= 0x28 )
          {
            if ( !(unsigned int)sub_141923B40(&unk_141A5481C, v111, 40) )
              goto LABEL_213;
          }
          else if ( v113 < 0x15 )
          {
            if ( v113 == 20 )
            {
              if ( _mm_movemask_epi8(
                     _mm_and_si128(
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v111), v97),
                       _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v111 + 16)), v96))) == 0xFFFF )
                goto LABEL_213;
              goto LABEL_231;
            }
            goto LABEL_207;
          }
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v111 + 5)), v100),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v111), v101))) == 0xFFFF
            || v113 >= 0x25 && !(unsigned int)sub_141923B40(&unk_141A54844, v111, 37)
            || _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v111), v97),
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v111 + 16)), v96))) == 0xFFFF )
          {
            goto LABEL_213;
          }
          if ( v113 >= 0x23 )
          {
            if ( !(unsigned int)sub_141923B40(&unk_141A54869, v111, 35) )
              goto LABEL_213;
          }
          else if ( v113 != 34 )
          {
            goto LABEL_231;
          }
          if ( !(unsigned int)sub_141923B40(&unk_141A5488C, v111, 34) )
            goto LABEL_213;
LABEL_231:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v111 + 16)), v98),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v111), v99))) == 0xFFFF )
          {
LABEL_213:
            v104 = 0;
            goto LABEL_178;
          }
LABEL_207:
          v117 = v164.m128i_i64[0];
          if ( v107 > v164.m128i_i64[0] - v95 )
          {
            sub_141939070((unsigned int)&v164, v95, v107, 1, 1);
            v94 = v164.m128i_i64[1];
            v95 = v165;
LABEL_209:
            sub_1419234B0(v95 + v94, v108, v107);
            v117 = v164.m128i_i64[0];
          }
          else if ( v107 )
          {
            goto LABEL_209;
          }
          v118 = v107 + v95;
          v165 = v118;
          if ( v117 == v118 )
            sub_141939070((unsigned int)&v164, v117, 1, 1, 1);
          v94 = v164.m128i_i64[1];
          *(_BYTE *)(v164.m128i_i64[1] + v118) = 10;
          v95 = v118 + 1;
          v165 = v95;
          goto LABEL_213;
        }
        if ( !v103 )
          goto LABEL_206;
        v104 = v113 != 0;
      }
      else
      {
        v104 = 1;
        if ( !v103 )
          goto LABEL_207;
      }
LABEL_178:
      v102 = HIBYTE(v163);
      v103 = v104;
      continue;
    }
    break;
  }
  if ( v95 < 2 )
  {
    v119 = v147;
    if ( !v95 )
      goto LABEL_253;
LABEL_236:
    if ( *(_BYTE *)v94 != 10 )
      goto LABEL_253;
    v95 = 0;
LABEL_252:
    v165 = v95;
    goto LABEL_253;
  }
  v119 = v147;
  if ( *(_WORD *)(v94 + v95 - 2) != 2570 )
    goto LABEL_252;
  v120 = v94 + v95;
  v121 = (char *)(v94 + v95 - 2);
  while ( 2 )
  {
    v122 = -1;
    if ( *(char *)(v120 - 1) < 0 )
    {
      v123 = *v121;
      if ( v123 > -65 )
      {
        v126 = v123 & 0x1F;
        if ( v126 >= 2 )
        {
LABEL_248:
          v122 = -2;
          if ( v126 >= 0x20 )
            v122 = (v126 < 0x400) | 0xFFFFFFFFFFFFFFFCuLL;
        }
      }
      else
      {
        v124 = *(_BYTE *)(v120 - 3);
        if ( v124 > -65 )
          v125 = v124 & 0xF;
        else
          v125 = ((*(_BYTE *)(v120 - 4) & 7) << 6) | v124 & 0x3F;
        v126 = (v125 << 6) | v123 & 0x3F;
        if ( v126 >= 2 )
          goto LABEL_248;
      }
    }
    v95 += v122;
    if ( v95 >= 2 )
    {
      v120 = v94 + v95;
      v121 = (char *)(v94 + v95 - 2);
      if ( *(_WORD *)v121 != 2570 )
        goto LABEL_252;
      continue;
    }
    break;
  }
  v165 = v95;
  if ( v95 )
    goto LABEL_236;
LABEL_253:
  HIDWORD(_RAX) = HIDWORD(v165);
  v119[1].m128i_i64[0] = v165;
  *v119 = _mm_loadu_si128(&v164);
  if ( v168 )
    sub_140001660(v171, v168, 1);
  v128 = v144.m128i_i64[1];
  if ( v144.m128i_i64[1] )
  {
    v129 = v145.m128i_i64[1];
    if ( v145.m128i_i64[1] )
    {
      v130 = v144.m128i_i64[0];
      v131 = (const __m128i *)(v144.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v144.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v133 = _mm_load_si128(v131);
            v130 -= 384;
            ++v131;
            _R15D = _mm_movemask_epi8(v133) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v134 = -3 * _RAX;
        v135 = *(_QWORD *)(v130 + 8 * v134 - 24);
        if ( v135 )
          sub_140001660(*(_QWORD *)(v130 + 8 * v134 - 16), v135, 1);
        --v129;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v129 );
    }
    v136 = (24 * v128 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v137 = v136 + v128 + 17;
    if ( v137 )
      sub_140001660(v144.m128i_i64[0] - v136, v137, 16);
  }
  return v119;
}
