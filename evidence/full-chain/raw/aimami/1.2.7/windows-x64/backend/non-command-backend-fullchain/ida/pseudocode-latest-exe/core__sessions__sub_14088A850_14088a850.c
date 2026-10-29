// win 1.2.7 latest-exe | module src/core/sessions.rs | ea 0x14088a850 | successor of pre-update 0x1402dcb00 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
double __fastcall sub_14088A850(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  bool v5; // zf
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  const __m128i *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int128 v16; // xmm1
  _QWORD *v17; // rcx
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  const __m128i *v22; // rsi
  const __m128i *v23; // r13
  unsigned int v24; // edi
  unsigned __int64 v25; // rax
  __m128i v27; // xmm8
  __int64 v29; // r15
  __int64 v30; // rbx
  int v31; // eax
  __int64 i; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  const __m128i *v41; // r15
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r15
  __int64 *v48; // r15
  __int64 v49; // rdx
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r15
  const __m128i *v55; // r15
  __int64 v56; // rdx
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rbx
  __m128i si128; // xmm0
  const __m128i *v62; // r14
  __m128i v63; // xmm0
  __m128i v64; // xmm7
  const __m128i *v65; // rsi
  __int16 v66; // cx
  const __m128i *v67; // r12
  unsigned __int64 v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v73; // rcx
  __int64 v75; // r8
  __int64 v76; // rcx
  __m128i v77; // xmm0
  __int8 *v78; // rdi
  __int64 v79; // r14
  unsigned __int64 v80; // rax
  __int64 v81; // r15
  __int64 v82; // rcx
  __int64 v83; // rdx
  __m128i v84; // xmm0
  __m128i v85; // xmm7
  __int64 j; // r9
  __int64 v87; // r15
  __m128i v88; // xmm8
  __int64 v90; // rax
  __int8 *v91; // r13
  __int64 v92; // rdi
  int v93; // eax
  __int64 v94; // r14
  __int64 v95; // r15
  __int64 v96; // rcx
  __int64 v97; // r15
  int v98; // r14d
  __int64 v99; // rax
  char v100; // al
  __int64 v101; // rdx
  __int64 v102; // rcx
  unsigned __int64 v103; // rdi
  __int64 v104; // rdi
  __int64 v105; // rcx
  unsigned __int64 v106; // rsi
  __int64 v107; // rbx
  _OWORD v109[3]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v110[48]; // [rsp+88h] [rbp+8h] BYREF
  _BYTE v111[16]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v112; // [rsp+C8h] [rbp+48h]
  __int64 v113; // [rsp+D0h] [rbp+50h]
  __m128i v114; // [rsp+F0h] [rbp+70h] BYREF
  const __m128i *v115; // [rsp+100h] [rbp+80h] BYREF
  __m128i v116; // [rsp+108h] [rbp+88h] BYREF
  __int128 v117; // [rsp+118h] [rbp+98h]
  __int128 v118; // [rsp+128h] [rbp+A8h]
  __int64 v119; // [rsp+138h] [rbp+B8h]
  __int128 v120; // [rsp+140h] [rbp+C0h]
  __int128 v121; // [rsp+150h] [rbp+D0h]
  const __m128i *v122[3]; // [rsp+318h] [rbp+298h] BYREF
  unsigned __int64 v123; // [rsp+330h] [rbp+2B0h]
  __m128i v124; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v125; // [rsp+360h] [rbp+2E0h]
  __int128 v126; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v127; // [rsp+380h] [rbp+300h]
  __int64 v128; // [rsp+388h] [rbp+308h]
  __int64 v129; // [rsp+390h] [rbp+310h]
  __int64 v130; // [rsp+398h] [rbp+318h]
  __int64 v131; // [rsp+3A0h] [rbp+320h]
  __int64 v132; // [rsp+3A8h] [rbp+328h]
  __int64 v133; // [rsp+3B0h] [rbp+330h]
  __int64 v134; // [rsp+3B8h] [rbp+338h]
  __m128i v135; // [rsp+3C0h] [rbp+340h] BYREF
  __int128 v136; // [rsp+3D0h] [rbp+350h]
  __int128 v137; // [rsp+3E0h] [rbp+360h]
  __int64 v138; // [rsp+3F0h] [rbp+370h]
  __int64 v139; // [rsp+3F8h] [rbp+378h]
  __int64 v140; // [rsp+400h] [rbp+380h]
  __int64 v141; // [rsp+408h] [rbp+388h]
  __int64 v142; // [rsp+410h] [rbp+390h]
  __int64 v143; // [rsp+418h] [rbp+398h]
  __int64 v144; // [rsp+420h] [rbp+3A0h]
  __int64 v145; // [rsp+428h] [rbp+3A8h]
  __int64 v146; // [rsp+430h] [rbp+3B0h]
  __int64 v147; // [rsp+438h] [rbp+3B8h]
  __int64 v148; // [rsp+440h] [rbp+3C0h]
  __int64 v149; // [rsp+448h] [rbp+3C8h]
  __m128i v150; // [rsp+450h] [rbp+3D0h]
  int v151; // [rsp+460h] [rbp+3E0h]
  __int64 v152; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v153; // [rsp+478h] [rbp+3F8h]
  __int64 v154; // [rsp+480h] [rbp+400h]
  __int64 v155; // [rsp+488h] [rbp+408h]
  __int64 v156; // [rsp+490h] [rbp+410h] BYREF
  __int64 v157; // [rsp+498h] [rbp+418h]
  __int64 v158; // [rsp+4A0h] [rbp+420h]
  char v159; // [rsp+4A8h] [rbp+428h]
  __int64 v160; // [rsp+4B0h] [rbp+430h]
  __m128i v161; // [rsp+4B8h] [rbp+438h] BYREF
  unsigned __int64 v162; // [rsp+4C8h] [rbp+448h]
  __int64 v163; // [rsp+4D0h] [rbp+450h]
  __int64 v164; // [rsp+4D8h] [rbp+458h]
  __int64 v165; // [rsp+4E0h] [rbp+460h]
  _QWORD *v166; // [rsp+4E8h] [rbp+468h]
  __int64 v167; // [rsp+4F0h] [rbp+470h]
  char v168; // [rsp+4FFh] [rbp+47Fh] BYREF
  __int64 v169; // [rsp+500h] [rbp+480h]
  __int64 v170; // [rsp+508h] [rbp+488h]
  __int64 v171; // [rsp+510h] [rbp+490h]
  __int64 v172; // [rsp+518h] [rbp+498h]
  char v173; // [rsp+526h] [rbp+4A6h]
  char v174; // [rsp+527h] [rbp+4A7h]
  __int64 v175; // [rsp+528h] [rbp+4A8h]

  v175 = -2;
  v166 = a3;
  v152 = a4;
  v5 = *(_QWORD *)(a2 + 960) == -1;
  v155 = a1;
  if ( v5 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v11 = *(_QWORD *)(a2 + 16);
    v174 = 1;
    sub_140A2DA60((__int64)&v156, v10, v11);
    v9 = v157;
    v6 = v158;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 976);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 968);
      nullsub_1(a1, a2);
      v8 = sub_140001650(v6, 1);
      if ( !v8 )
      {
        v174 = 1;
        sub_14196B2DB(1, v6);
      }
      v9 = v8;
      v156 = v6;
      v157 = v8;
      sub_1419234B0(v8, v7, v6);
      v158 = v6;
    }
    else
    {
      v156 = 0;
      v157 = 1;
      v158 = 0;
      v9 = 1;
    }
    v159 = *(_BYTE *)(a2 + 984);
  }
  v173 = 1;
  sub_140876E90((__int64)&v115, v9, v6);
  v12 = v115;
  v135 = v116;
  v136 = v117;
  v137 = v118;
  v138 = v119;
  if ( v115 != (const __m128i *)-1LL )
  {
    v13 = v120;
    v14 = v155;
    *(_OWORD *)(v155 + 80) = v121;
    *(_OWORD *)(v14 + 64) = v13;
    *(_QWORD *)(v14 + 56) = v138;
    v15 = _mm_load_si128(&v135);
    v16 = v136;
    *(_OWORD *)(v14 + 40) = v137;
    *(_OWORD *)(v14 + 24) = v16;
    *(__m128i *)(v14 + 8) = v15;
    *(_QWORD *)v14 = v12;
    if ( v156 )
      *(double *)v15.m128i_i64 = sub_140001660(v9, v156, 1);
    v17 = (_QWORD *)v166[1];
    v171 = v166[2];
    v172 = 0;
    v170 = (__int64)v17;
    while ( v171 != v172 )
    {
      ++v172;
      v18 = v17 + 44;
      *(double *)v15.m128i_i64 = sub_1401AEAD0(v17);
      v17 = v18;
    }
    if ( *v166 )
    {
      v19 = 352LL * *v166;
      v20 = 8;
      v21 = v170;
      goto LABEL_157;
    }
    return *(double *)v15.m128i_i64;
  }
  v163 = a2;
  v124 = _mm_load_si128(&v135);
  v125 = v136;
  v126 = v137;
  v127 = v138;
  sub_14088CBC0(v122, v166);
  v22 = v122[0];
  v172 = v123;
  v23 = v122[0] + 1;
  v24 = ~_mm_movemask_epi8(_mm_load_si128(v122[0]));
  v169 = *((_QWORD *)&v125 + 1);
  v170 = v124.m128i_i64[1];
  v171 = v124.m128i_i64[0];
LABEL_87:
  while ( v172 )
  {
    if ( !(_WORD)v24 )
    {
      do
      {
        si128 = _mm_load_si128(v23);
        v22 -= 416;
        ++v23;
        v24 = _mm_movemask_epi8(si128) ^ 0xFFFF;
      }
      while ( !v24 );
    }
    _RAX = v24;
    v24 &= v24 - 1;
    --v172;
    if ( v169 )
    {
      __asm { tzcnt   eax, eax }
      v62 = &v22[-26 * _RAX];
      v33 = sub_1406CECD0(&v126, &v62[-26]);
      v63 = _mm_cvtsi32_si128(v33 >> 57);
      v64 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v63, v63), 0), 68);
      for ( i = 0; ; i += 16 )
      {
        v25 = v170 & v33;
        HIDWORD(_RCX) = HIDWORD(v171);
        v27 = _mm_loadu_si128((const __m128i *)(v171 + v25));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v27, v64));
        if ( _R12D )
          break;
LABEL_22:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v27, (__m128i)-1LL)) )
          goto LABEL_87;
        v33 = i + v25 + 16;
      }
      v29 = v62[-25].m128i_i64[0];
      v167 = v25;
      v165 = i;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r12d }
        _RCX = -(__int64)(v170 & (v25 + _RCX));
        if ( v29 == *(_QWORD *)(v171 + 416 * _RCX - 400) )
        {
          v30 = v171 + 416 * _RCX;
          if ( !(unsigned int)sub_141923B40(v62[-26].m128i_i64[1], *(_QWORD *)(v30 - 408), v29) )
            break;
        }
        v31 = _R12D - 1;
        LOWORD(v31) = _R12D & (_R12D - 1);
        v5 = (_WORD)v31 == 0;
        _R12D = v31;
        v25 = v167;
        i = v165;
        if ( v5 )
          goto LABEL_22;
      }
      sub_1408FEA60(v62[-23].m128i_i64[0], v62[-23].m128i_i64[1]);
      if ( !v34 )
        sub_1416DB3A0(&v62[-24].m128i_u64[1], v30 - 376);
      if ( v62[-21].m128i_i64[1] == -1 )
      {
        if ( *(_QWORD *)(v30 - 328) == -1 )
        {
          v35 = -1;
        }
        else
        {
          sub_1416DB410(&v115, v30 - 328);
          v35 = (__int64)v115;
          v135 = _mm_loadu_si128(&v116);
        }
        v62[-21].m128i_i64[1] = v35;
        v62[-20] = _mm_load_si128(&v135);
        if ( v62[-19].m128i_i64[0] != -1 )
        {
LABEL_28:
          if ( v62[-13].m128i_i64[0] != -1 )
            goto LABEL_29;
          goto LABEL_41;
        }
      }
      else if ( v62[-19].m128i_i64[0] != -1 )
      {
        goto LABEL_28;
      }
      if ( *(_QWORD *)(v30 - 304) == -1 )
      {
        v36 = -1;
      }
      else
      {
        sub_1416DB410(&v115, v30 - 304);
        v36 = (__int64)v115;
        v135 = _mm_loadu_si128(&v116);
      }
      v62[-19].m128i_i64[0] = v36;
      *(const __m128i *)((char *)&v62[-19] + 8) = _mm_load_si128(&v135);
      if ( v62[-13].m128i_i64[0] != -1 )
      {
LABEL_29:
        if ( v62[-12].m128i_i64[1] != -1 )
          goto LABEL_30;
        goto LABEL_45;
      }
LABEL_41:
      if ( *(_QWORD *)(v30 - 208) == -1 )
      {
        v37 = -1;
      }
      else
      {
        sub_1416DB410(&v115, v30 - 208);
        v37 = (__int64)v115;
        v135 = _mm_loadu_si128(&v116);
      }
      v62[-13].m128i_i64[0] = v37;
      *(const __m128i *)((char *)&v62[-13] + 8) = _mm_load_si128(&v135);
      if ( v62[-12].m128i_i64[1] != -1 )
      {
LABEL_30:
        if ( v62[-4].m128i_i64[0] != -1 )
          goto LABEL_31;
        goto LABEL_49;
      }
LABEL_45:
      if ( *(_QWORD *)(v30 - 184) == -1 )
      {
        v38 = -1;
      }
      else
      {
        sub_1416DB410(&v115, v30 - 184);
        v38 = (__int64)v115;
        v135 = _mm_loadu_si128(&v116);
      }
      v62[-12].m128i_i64[1] = v38;
      v62[-11] = _mm_load_si128(&v135);
      if ( v62[-4].m128i_i64[0] != -1 )
      {
LABEL_31:
        if ( v62[-3].m128i_i64[1] != -1 )
          goto LABEL_57;
LABEL_53:
        if ( *(_QWORD *)(v30 - 40) == -1 )
        {
          v40 = -1;
        }
        else
        {
          sub_1416DB410(&v115, v30 - 40);
          v40 = (__int64)v115;
          v135 = _mm_loadu_si128(&v116);
        }
        v62[-3].m128i_i64[1] = v40;
        v62[-2] = _mm_load_si128(&v135);
        goto LABEL_57;
      }
LABEL_49:
      if ( *(_QWORD *)(v30 - 64) == -1 )
      {
        v39 = -1;
      }
      else
      {
        sub_1416DB410(&v115, v30 - 64);
        v39 = (__int64)v115;
        v135 = _mm_loadu_si128(&v116);
      }
      v62[-4].m128i_i64[0] = v39;
      *(const __m128i *)((char *)&v62[-4] + 8) = _mm_load_si128(&v135);
      if ( v62[-3].m128i_i64[1] == -1 )
        goto LABEL_53;
LABEL_57:
      *(const __m128i *)((char *)&v62[-25] + 8) = _mm_loadu_si128((const __m128i *)(v30 - 392));
      v41 = v62 - 10;
      v42 = v30 - 160;
      v43 = v62[-10].m128i_i64[0];
      v44 = *(_QWORD *)(v30 - 160);
      if ( v43 == -1 || v44 == -1 )
      {
        if ( v44 == -1 )
        {
          v45 = -1;
          if ( v43 == -1 )
          {
LABEL_66:
            v62[-10].m128i_i64[0] = v45;
            *(const __m128i *)((char *)&v62[-10] + 8) = _mm_load_si128(&v135);
            goto LABEL_67;
          }
        }
        else
        {
          sub_1416DB410(&v115, v42);
          v45 = (__int64)v115;
          v135 = _mm_loadu_si128(&v116);
          if ( v43 == -1 )
            goto LABEL_66;
        }
        v46 = v41->m128i_i64[0];
        if ( v41->m128i_i64[0] )
        {
          v47 = v45;
          sub_140001660(v62[-10].m128i_i64[1], v46, 1);
          v45 = v47;
        }
        goto LABEL_66;
      }
      sub_1416DB3A0(&v62[-10], v42);
LABEL_67:
      v48 = &v62[-9].m128i_i64[1];
      v49 = v30 - 136;
      v50 = v62[-9].m128i_i64[1];
      v51 = *(_QWORD *)(v30 - 136);
      if ( v50 != -1 && v51 != -1 )
      {
        sub_1416DB3A0(&v62[-9].m128i_u64[1], v49);
        goto LABEL_77;
      }
      if ( v51 == -1 )
      {
        v52 = -1;
        if ( v50 != -1 )
        {
LABEL_74:
          v53 = *v48;
          if ( *v48 )
          {
            v54 = v52;
            sub_140001660(v62[-8].m128i_i64[0], v53, 1);
            v52 = v54;
          }
        }
      }
      else
      {
        sub_1416DB410(&v115, v49);
        v52 = (__int64)v115;
        v135 = _mm_loadu_si128(&v116);
        if ( v50 != -1 )
          goto LABEL_74;
      }
      v62[-9].m128i_i64[1] = v52;
      v62[-8] = _mm_load_si128(&v135);
LABEL_77:
      v55 = v62 - 7;
      v56 = v30 - 112;
      v57 = v62[-7].m128i_i64[0];
      v58 = *(_QWORD *)(v30 - 112);
      if ( v57 == -1 || v58 == -1 )
      {
        if ( v58 == -1 )
        {
          v59 = -1;
          if ( v57 == -1 )
            goto LABEL_86;
        }
        else
        {
          sub_1416DB410(&v115, v56);
          v59 = (__int64)v115;
          v135 = _mm_loadu_si128(&v116);
          if ( v57 == -1 )
            goto LABEL_86;
        }
        if ( v55->m128i_i64[0] )
          sub_140001660(v62[-7].m128i_i64[1], v55->m128i_i64[0], 1);
LABEL_86:
        v62[-7].m128i_i64[0] = v59;
        *(const __m128i *)((char *)&v62[-7] + 8) = _mm_load_si128(&v135);
      }
      else
      {
        sub_1416DB3A0(&v62[-7], v56);
      }
    }
  }
  v133 = v157;
  sub_140888BB0(v110, v157, v158);
  sub_1414CB550((__int64)&v135);
  if ( v135.m128i_i64[0] == -1 )
  {
    v164 = -1;
  }
  else
  {
    v171 = v135.m128i_i64[1];
    v172 = v135.m128i_i64[0];
    sub_1416B18A0((unsigned int)&v115, v135.m128i_i32[2], v136, (unsigned int)&unk_141A52028, 5);
    if ( v172 )
      sub_140001660(v171, v172, 1);
    v164 = (__int64)v115;
    v134 = v116.m128i_i64[1];
    v160 = v116.m128i_i64[0];
  }
  v65 = v122[0];
  v66 = _mm_movemask_epi8(_mm_load_si128(v122[0]));
  v67 = v122[0] + 1;
  v68 = v123;
  v115 = v122[0];
  v116.m128i_i64[0] = (__int64)v122[0][1].m128i_i64;
  v116.m128i_i64[1] = (__int64)v122[0]->m128i_i64 + (unsigned __int64)v122[1] + 1;
  LOWORD(v117) = ~v66;
  *((_QWORD *)&v117 + 1) = v123;
  *(_QWORD *)&v118 = &v152;
  sub_1401BD260(v109, v163, (__int64)&v115);
  if ( v68 > 0x3D226357E16ECELL )
  {
    v71 = 0;
    goto LABEL_99;
  }
  if ( 536 * v68 )
  {
    nullsub_1(v70, v69);
    v71 = 8;
    _RAX = sub_140001650(536 * v68, 8);
    if ( !_RAX )
LABEL_99:
      sub_14196B2DB(v71, 536 * v68);
    v73 = v68;
  }
  else
  {
    _RAX = 8;
    v73 = 0;
  }
  v161.m128i_i64[0] = v73;
  v161.m128i_i64[1] = _RAX;
  v162 = 0;
  _EBX = ~_mm_movemask_epi8(_mm_load_si128(v65));
LABEL_105:
  v75 = v152;
  v76 = v152 + 32;
  v171 = v152;
LABEL_106:
  while ( v68 )
  {
    if ( !(_WORD)_EBX )
    {
      do
      {
        v77 = _mm_load_si128(v67);
        v65 -= 416;
        ++v67;
        _EBX = _mm_movemask_epi8(v77) ^ 0xFFFF;
      }
      while ( !_EBX );
    }
    __asm { tzcnt   eax, ebx }
    _RAX *= -416;
    v78 = &v65->m128i_i8[_RAX];
    --v68;
    _EBX &= _EBX - 1;
    if ( !v75 )
    {
      v94 = (__int64)(v78 - 392);
LABEL_121:
      sub_14088A470(v111, v94);
      v95 = -1;
      v5 = *((_QWORD *)v78 - 23) == -1;
      v172 = -1;
      if ( !v5 )
      {
        sub_1416DB410(&v115, v78 - 184);
        v172 = (__int64)v115;
        v128 = v116.m128i_i64[1];
        v163 = v116.m128i_i64[0];
      }
      if ( *((_QWORD *)v78 - 41) != -1 )
      {
        sub_1416DB410(&v115, v78 - 328);
        v95 = (__int64)v115;
        v165 = v116.m128i_i64[1];
        v167 = v116.m128i_i64[0];
      }
      v170 = v95;
      v171 = -1;
      v96 = -1;
      if ( *((_QWORD *)v78 - 29) != -1 )
      {
        sub_1416DB410(&v115, v78 - 232);
        v96 = (__int64)v115;
        v129 = v116.m128i_i64[1];
        v153 = v116.m128i_i64[0];
      }
      v169 = v96;
      v97 = v94;
      v98 = *((_DWORD *)v78 - 2);
      if ( *((_QWORD *)v78 - 35) != -1 )
      {
        sub_1416DB410(&v115, v78 - 280);
        v171 = (__int64)v115;
        v130 = v116.m128i_i64[1];
        v154 = v116.m128i_i64[0];
      }
      if ( *((_QWORD *)v78 - 32) == -1 )
      {
        v99 = -1;
      }
      else
      {
        sub_1416DB410(&v115, v78 - 256);
        v99 = (__int64)v115;
        v114 = _mm_loadu_si128(&v116);
      }
      *(_QWORD *)&v136 = -1;
      *((_QWORD *)&v137 + 1) = v172;
      v138 = v163;
      v139 = v128;
      v135.m128i_i64[0] = 0;
      v140 = v170;
      v141 = v167;
      v142 = v165;
      v143 = v169;
      v144 = v153;
      v145 = v129;
      v151 = v98;
      v146 = v171;
      v147 = v154;
      v148 = v130;
      v149 = v99;
      v150 = _mm_load_si128(&v114);
      if ( *((_QWORD *)v78 - 29) == -1 )
      {
        if ( *((_QWORD *)v78 - 42) == 6 )
        {
          v100 = 0;
          if ( v164 != -1
            && !(**((_DWORD **)v78 - 43) ^ 0x6F637376 | *(unsigned __int16 *)(*((_QWORD *)v78 - 43) + 4LL) ^ 0x6564) )
          {
            if ( *((_QWORD *)v78 - 41) == -1 )
            {
              v101 = v165;
              if ( v170 == -1 )
                v101 = 0;
              v102 = v167;
              if ( v170 == -1 )
                v102 = 1;
            }
            else
            {
              v101 = v165;
              v102 = v167;
              if ( v170 == -1 )
              {
                v102 = *((_QWORD *)v78 - 40);
                v101 = *((_QWORD *)v78 - 39);
              }
            }
            v100 = sub_1416B0D10(v102, v101, v160, v134);
          }
        }
        else
        {
          v100 = 0;
        }
      }
      else
      {
        v100 = 0;
      }
      sub_14087CF00(
        (unsigned int)&v115,
        *((_QWORD *)v78 - 51),
        *((_QWORD *)v78 - 50),
        (unsigned int)v111,
        v97,
        0,
        (__int64)&v135,
        v100,
        (__int64)v110,
        (__int64)v109);
      v103 = v162;
      if ( v162 == v161.m128i_i64[0] )
        sub_141939CF0(v161.m128i_i64);
      sub_1419234B0(v161.m128i_i64[1] + 536 * v103, &v115, 536);
      v162 = v103 + 1;
      HIDWORD(_RAX) = (unsigned __int64)sub_140038640(&v135) >> 32;
      if ( v112 != -1 && v112 )
        sub_140001660(v113, v112, 1);
      goto LABEL_105;
    }
    if ( *(_QWORD *)(v75 + 24) )
    {
      v172 = v68;
      v79 = *(__int64 *)((char *)v65[-25].m128i_i64 + _RAX);
      v170 = *(_QWORD *)((char *)&v65[-25] + _RAX - 8);
      v80 = sub_1406D0E00(v76, v170, v79);
      v75 = v171;
      v81 = v80;
      v82 = *(_QWORD *)v171;
      v83 = *(_QWORD *)(v171 + 8);
      v84 = _mm_cvtsi32_si128(v80 >> 57);
      v85 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v84, v84), 0), 68);
      for ( j = 0; ; j += 16 )
      {
        v87 = v83 & v81;
        v88 = _mm_loadu_si128((const __m128i *)(v82 + v87));
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v88, v85));
        if ( (_DWORD)_RAX )
          break;
LABEL_117:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v88, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
        {
          v68 = v172;
          v76 = v75 + 32;
          goto LABEL_106;
        }
        v81 = j + v87 + 16;
      }
      v131 = v83;
      v132 = j;
      while ( 1 )
      {
        v169 = _RAX;
        __asm { tzcnt   eax, eax }
        v90 = -3 * (v83 & (v87 + _RAX));
        if ( v79 == *(_QWORD *)(v82 + 8 * v90 - 8) )
        {
          v91 = v78;
          v92 = v82;
          v93 = sub_141923B40(v170, *(_QWORD *)(v82 + 8 * v90 - 16), v79);
          v82 = v92;
          v78 = v91;
          if ( !v93 )
            break;
        }
        _RAX = (unsigned int)(v169 - 1);
        LOWORD(_RAX) = v169 & (v169 - 1);
        v75 = v171;
        v83 = v131;
        j = v132;
        if ( !(_WORD)_RAX )
          goto LABEL_117;
      }
      v94 = (__int64)(v91 - 392);
      v68 = v172;
      goto LABEL_121;
    }
  }
  v104 = v161.m128i_i64[1];
  v115 = (const __m128i *)&v168;
  if ( v162 >= 2 )
  {
    if ( v162 >= 0x15 )
    {
      sub_1401B7660(v161.m128i_i64[1], v162, (__int64)&v115);
    }
    else
    {
      v106 = 536 * v162;
      v107 = 536;
      do
      {
        sub_140CBC9F0(v104, v104 + v107);
        v107 += 536;
      }
      while ( v106 != v107 );
    }
  }
  v105 = v155;
  *(_QWORD *)(v155 + 24) = v162;
  v15 = _mm_loadu_si128(&v161);
  *(__m128i *)(v105 + 8) = v15;
  *(_QWORD *)v105 = -1;
  sub_14018F030(v109);
  if ( (unsigned __int64)(v164 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    *(double *)v15.m128i_i64 = sub_140001660(v160, v164, 1);
  sub_14018EF10(v110);
  sub_14018FA70(v122);
  v173 = 0;
  sub_14018FA70(&v124);
  v19 = v156;
  if ( v156 )
  {
    v20 = 1;
    v21 = v133;
LABEL_157:
    *(double *)v15.m128i_i64 = sub_140001660(v21, v19, v20);
  }
  return *(double *)v15.m128i_i64;
}
