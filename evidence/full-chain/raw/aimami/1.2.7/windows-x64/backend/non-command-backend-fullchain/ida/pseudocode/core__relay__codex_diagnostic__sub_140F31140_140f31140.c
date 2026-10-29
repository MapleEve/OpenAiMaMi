// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f31140 | name sub_140F31140
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140F31140(_OWORD *a1, _QWORD *a2, const __m128i *a3, char a4)
{
  __m128i v7; // xmm6
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r14
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  __m128i si128; // xmm6
  unsigned __int64 v29; // r8
  const __m128i *v30; // rsi
  __int64 v31; // r14
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __m128i v35; // xmm0
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r9
  unsigned __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rsi
  bool v54; // zf
  __int64 v55; // rax
  __int64 v56; // rdx
  __m128i v57; // xmm6
  __m128i v58; // xmm8
  __int64 v59; // r13
  __int64 v60; // r8
  unsigned __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // r13
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // r12
  __m128i v68; // xmm0
  unsigned __int64 v69; // r10
  __int64 v70; // r10
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  const __m128i *v80; // rdi
  __m128i v81; // xmm0
  unsigned __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rbx
  unsigned __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // r9
  unsigned __int64 v94; // rcx
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int64 v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rdx
  _QWORD v100[6]; // [rsp+30h] [rbp-50h] BYREF
  __int16 v101; // [rsp+60h] [rbp-20h]
  __int64 v102; // [rsp+68h] [rbp-18h]
  __m128i v103; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v104; // [rsp+80h] [rbp+0h]
  _OWORD *v105; // [rsp+88h] [rbp+8h]
  __m128i v106; // [rsp+90h] [rbp+10h] BYREF
  unsigned __int64 v107; // [rsp+A0h] [rbp+20h]
  __m128i v108; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v109; // [rsp+C0h] [rbp+40h] BYREF
  __m128i *v110; // [rsp+D0h] [rbp+50h]
  __int128 v111; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v112; // [rsp+F0h] [rbp+70h]
  __m128i v113; // [rsp+100h] [rbp+80h] BYREF
  __int64 v114; // [rsp+110h] [rbp+90h]
  __int64 v115; // [rsp+118h] [rbp+98h]
  __m256i v116; // [rsp+120h] [rbp+A0h] BYREF
  const __m128i *v117; // [rsp+140h] [rbp+C0h]
  __int64 v118; // [rsp+148h] [rbp+C8h]
  __int64 v119; // [rsp+150h] [rbp+D0h]
  __m128i v120; // [rsp+158h] [rbp+D8h]
  __m128i v121; // [rsp+168h] [rbp+E8h]
  __m128i *v122; // [rsp+178h] [rbp+F8h]
  char v123; // [rsp+18Fh] [rbp+10Fh] BYREF
  _BYTE v124[40]; // [rsp+190h] [rbp+110h] BYREF
  __int64 v125; // [rsp+1B8h] [rbp+138h]
  __m256i v126; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i *v127; // [rsp+1E0h] [rbp+160h]
  __m128i *v128; // [rsp+1E8h] [rbp+168h]
  char v129; // [rsp+1F5h] [rbp+175h]
  char v130; // [rsp+1F6h] [rbp+176h]
  char v131; // [rsp+1F7h] [rbp+177h]
  __int64 v132; // [rsp+1F8h] [rbp+178h]

  v132 = -2;
  v7 = _mm_loadu_si128(a3 + 2);
  sub_14036E020(&v111, a3);
  v113 = v7;
  nullsub_1(v8);
  v9 = sub_140001650(6, 1);
  if ( !v9 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v9 + 4) = 26977;
  *(_DWORD *)v9 = 1852141679;
  *(_QWORD *)v124 = 6;
  *(_QWORD *)&v124[8] = v9;
  *(_QWORD *)&v124[16] = 6;
  sub_1403AAB80(&v111, v124);
  nullsub_1(v10);
  v11 = sub_140001650(6, 1);
  if ( !v11 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v11 + 4) = 18753;
  *(_DWORD *)v11 = 1852141647;
  *(_QWORD *)v124 = 6;
  *(_QWORD *)&v124[8] = v11;
  *(_QWORD *)&v124[16] = 6;
  sub_1403AAB80(&v111, v124);
  if ( (a4 & 1) == 0 )
    goto LABEL_43;
  nullsub_1(v12);
  v13 = sub_140001650(6, 1);
  if ( !v13 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v13 + 4) = 12649;
  *(_DWORD *)v13 = 1634560353;
  *(_QWORD *)v124 = 6;
  *(_QWORD *)&v124[8] = v13;
  *(_QWORD *)&v124[16] = 6;
  sub_1403AAB80(&v111, v124);
  sub_140EF78A0(v124, a2[97], a2[98]);
  v14 = *(_QWORD *)&v124[24];
  v15 = v125;
  v16 = v126.m256i_i64[0];
  v108 = *(__m128i *)&v126.m256i_u64[1];
  v109 = _mm_loadu_si128((const __m128i *)&v126.m256i_u64[3]);
  v110 = v128;
  if ( *(_QWORD *)v124 != -1 )
  {
    v122 = v110;
    v17 = _mm_load_si128(&v108);
    v121 = _mm_load_si128(&v109);
    v120 = v17;
    v116 = *(__m256i *)v124;
    v117 = *(const __m128i **)&v124[32];
    v118 = v125;
    v119 = v126.m256i_i64[0];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v108.m128i_i64[0] = (__int64)&v116;
      v108.m128i_i64[1] = (__int64)sub_14104A7D0;
      v126.m256i_i64[0] = 2;
      v126.m256i_i64[1] = (__int64)aCodexmateLibCo_42;
      v126.m256i_i64[2] = 44;
      v127 = (__m128i *)&unk_141A5FA55;
      v128 = &v108;
      *(_QWORD *)v124 = 0;
      *(_QWORD *)&v124[8] = aCodexmateLibCo_42;
      *(_OWORD *)&v124[16] = 0x2Cu;
      *(_QWORD *)&v124[32] = aSrcCoreRelayCo_3;
      v125 = 34;
      v126.m256i_i64[3] = 0xBA000000001LL;
      sub_1414D53A0(&v123, v124);
    }
    sub_140E97700(&v116);
    goto LABEL_43;
  }
  if ( *(_QWORD *)&v124[8] == -1 )
  {
    v38 = sub_14167F170(*(_QWORD *)&v124[24]);
    v42 = v38;
    if ( *(_BYTE *)(v38 + 16) == 1 )
    {
      v43 = *(_QWORD *)v38;
    }
    else
    {
      v43 = sub_141696260(v34, v39, v40, v41);
      *(_QWORD *)v42 = v43;
      *(_QWORD *)(v42 + 8) = v99;
      *(_BYTE *)(v42 + 16) = 1;
    }
    v33 = v43 + 1;
    *(_QWORD *)v42 = v33;
    goto LABEL_36;
  }
  *(__m256i *)v124 = *(__m256i *)&v124[8];
  *(_QWORD *)&v124[32] = v125;
  v125 = v126.m256i_i64[0];
  v18 = _mm_load_si128(&v109);
  *(__m128i *)v126.m256i_i8 = _mm_load_si128(&v108);
  *(__m128i *)&v126.m256i_u64[2] = v18;
  v127 = v110;
  v19 = sub_14167F170(v14);
  v24 = v19;
  if ( *(_BYTE *)(v19 + 16) == 1 )
  {
    v25 = *(_QWORD *)v19;
    v26 = *(_QWORD *)(v24 + 8);
  }
  else
  {
    v25 = sub_141696260(v21, v20, v22, v23);
    *(_QWORD *)v24 = v25;
    *(_QWORD *)(v24 + 8) = v26;
    *(_BYTE *)(v24 + 16) = 1;
  }
  *(_QWORD *)v24 = v25 + 1;
  *(_OWORD *)&v116.m256i_u64[2] = *(&off_141A56DB0 + 1);
  *(__m128i *)v116.m256i_i8 = _mm_loadu_si128((const __m128i *)&off_141A56DB0);
  v117 = (const __m128i *)v25;
  v118 = v26;
  if ( !v16 )
  {
    v33 = sub_14062A720(v124);
LABEL_36:
    v30 = (const __m128i *)&unk_141A56DA0;
    v35 = (__m128i)-1LL;
    v32 = 0;
    goto LABEL_37;
  }
  v27 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419EC580);
  do
  {
    v29 = *(_QWORD *)(v15 + v27 + 16);
    if ( v29 >= 0x10
      && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v15 + v27 + 8)), si128)) == 0xFFFF )
    {
      sub_140EF8F80(&v103, *(_QWORD *)(v15 + v27 + 8) + 16LL, v29 - 16);
      if ( v104 )
      {
        if ( v104 == 12 )
        {
          if ( *(_QWORD *)v103.m128i_i64[1] ^ 0x725F696D616D6961LL | *(_DWORD *)(v103.m128i_i64[1] + 8) ^ 0x79616C65u )
            goto LABEL_15;
        }
        else if ( v104 <= 0xC
               || *(_QWORD *)v103.m128i_i64[1] ^ 0x725F696D616D6961LL
                | *(_QWORD *)(v103.m128i_i64[1] + 5) ^ 0x5F79616C65725F69LL )
        {
          if ( v104 == 6 )
          {
            if ( *(_DWORD *)v103.m128i_i64[1] ^ 0x616D6961 | *(_WORD *)(v103.m128i_i64[1] + 4) ^ 0x3169 )
              goto LABEL_15;
          }
          else if ( v104 != 19
                 || _mm_movemask_epi8(
                      _mm_and_si128(
                        _mm_cmpeq_epi8(
                          _mm_loadu_si128((const __m128i *)((char *)&xmmword_141A3E902 + 3)),
                          _mm_loadu_si128((const __m128i *)(v103.m128i_i64[1] + 3))),
                        _mm_cmpeq_epi8(
                          _mm_loadu_si128((const __m128i *)v103.m128i_i64[1]),
                          _mm_loadu_si128((const __m128i *)&xmmword_141A3E902)))) != 0xFFFF )
          {
LABEL_15:
            v107 = v104;
            v106 = _mm_loadu_si128(&v103);
            sub_1403AAB80(&v116, &v106);
            goto LABEL_16;
          }
        }
      }
      if ( v103.m128i_i64[0] )
        sub_140001660(v103.m128i_i64[1], v103.m128i_i64[0], 1);
    }
LABEL_16:
    v27 += 48;
  }
  while ( 48 * v16 != v27 );
  v31 = v116.m256i_i64[1];
  v30 = (const __m128i *)v116.m256i_i64[0];
  v32 = v116.m256i_u64[3];
  v33 = sub_14062A720(v124);
  v35 = _mm_load_si128(v30);
  if ( v31 )
  {
    v36 = (24 * v31 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v33 = v31 + v36 + 17;
    v34 = (__int64)v30->m128i_i64 - v36;
    v37 = 16;
    goto LABEL_38;
  }
LABEL_37:
  v31 = 0;
  v37 = 0;
LABEL_38:
  v44 = (unsigned int)~_mm_movemask_epi8(v35);
  v116.m256i_i64[3] = (__int64)v30;
  v117 = v30 + 1;
  v118 = (__int64)v30->m128i_i64 + v31 + 1;
  LOWORD(v119) = v44;
  v120.m128i_i64[0] = v32;
  v116.m256i_i64[0] = v37;
  v116.m256i_i64[1] = v33;
  v116.m256i_i64[2] = v34;
  v126.m256i_i16[0] = v44;
  *(__int32 *)((char *)v126.m256i_i32 + 2) = *(_DWORD *)((char *)&v119 + 2);
  v126.m256i_i16[3] = HIWORD(v119);
  v126.m256i_i64[1] = v32;
  *(_QWORD *)&v124[32] = v30 + 1;
  v125 = v118;
  *(_QWORD *)&v124[16] = v34;
  *(_QWORD *)&v124[24] = v30;
  *(__m128i *)v124 = _mm_loadu_si128((const __m128i *)&v116);
  v45 = v32 >> 1;
  if ( !*((_QWORD *)&v112 + 1) )
    v45 = 0;
  if ( v32 - v45 > (unsigned __int64)v112 )
  {
    v130 = 1;
    LOBYTE(v44) = 1;
    sub_141930360(&v111, v32 - v45, &v113, v44);
  }
  v130 = 0;
  sub_140EBAAA0((__int64)&v116, (__int64)&v111);
LABEL_43:
  sub_14169D1D0(&v106, a2[9], a2[10]);
  v115 = v106.m128i_i64[0];
  if ( v106.m128i_i64[0] == -1 )
  {
    v71 = sub_14167F170(v46);
    v76 = v71;
    if ( *(_BYTE *)(v71 + 16) == 1 )
    {
      v77 = *(_QWORD *)v71;
    }
    else
    {
      v77 = sub_141696260(v73, v72, v74, v75);
      *(_QWORD *)v76 = v77;
      *(_QWORD *)(v76 + 8) = v98;
      *(_BYTE *)(v76 + 16) = 1;
    }
    *(_QWORD *)v76 = v77 + 1;
    v78 = v106.m128i_i64[1];
    v79 = v106.m128i_i8[8] & 3;
    if ( (unsigned int)(v79 - 2) >= 2 && (v106.m128i_i8[8] & 3) != 0 )
    {
      *(_QWORD *)&v124[8] = v106.m128i_i64[1] - 1;
      v124[0] = 3;
      v78 = sub_1416BCB00(&v124[8]);
    }
    v80 = (const __m128i *)&unk_141A56DA0;
    v81 = (__m128i)-1LL;
    v82 = 0;
    goto LABEL_83;
  }
  v114 = v106.m128i_i64[1];
  v47 = v107;
  v48 = sub_14167F170(v46);
  v53 = v48;
  v54 = *(_BYTE *)(v48 + 16) == 1;
  v105 = a1;
  if ( v54 )
  {
    v55 = *(_QWORD *)v48;
    v56 = *(_QWORD *)(v53 + 8);
  }
  else
  {
    v55 = sub_141696260(v50, v49, v51, v52);
    *(_QWORD *)v53 = v55;
    *(_QWORD *)(v53 + 8) = v56;
    *(_BYTE *)(v53 + 16) = 1;
  }
  *(_QWORD *)v53 = v55 + 1;
  v57 = _mm_loadu_si128((const __m128i *)&off_141A56DB0 + 1);
  *(__m128i *)&v116.m256i_u64[2] = v57;
  *(_OWORD *)v116.m256i_i8 = off_141A56DB0;
  v117 = (const __m128i *)v55;
  v118 = v56;
  v103.m128i_i8[0] = 2;
  *(_QWORD *)v124 = 0;
  *(_QWORD *)&v124[8] = v47;
  *(_QWORD *)&v124[16] = v114;
  *(_QWORD *)&v124[24] = v47;
  *(_QWORD *)&v124[32] = 0;
  v125 = v47;
  v126.m256i_i64[0] = 0xA0000000ALL;
  v126.m256i_i8[8] = 1;
  v126.m256i_i16[8] = 0;
  v58 = _mm_load_si128((const __m128i *)&xmmword_1419EC580);
  while ( 2 )
  {
    v59 = *(_QWORD *)&v124[16];
    sub_140F9C6A0(&v108, &v124[16]);
    if ( v108.m128i_i32[0] == 1 )
    {
      v62 = *(_QWORD *)v124;
      *(_QWORD *)v124 = v109.m128i_i64[0];
      v63 = v109.m128i_i64[0] - v62;
      v64 = v62 + v59;
      if ( v109.m128i_i64[0] == v62 )
        goto LABEL_60;
LABEL_54:
      if ( *(_BYTE *)(v64 + v63 - 1) == 10 )
      {
        if ( v63 == 1 )
        {
          v63 = 0;
        }
        else if ( *(_BYTE *)(v64 + v63 - 2) == 13 )
        {
          v63 -= 2;
        }
        else
        {
          --v63;
        }
      }
    }
    else
    {
      if ( v126.m256i_i8[17] )
        break;
      v126.m256i_i8[17] = 1;
      v63 = *(_QWORD *)&v124[8] - *(_QWORD *)v124;
      if ( (v126.m256i_i8[16] | (*(_QWORD *)&v124[8] != *(_QWORD *)v124)) != 1 )
        break;
      v64 = *(_QWORD *)&v124[16] + *(_QWORD *)v124;
      if ( v63 )
        goto LABEL_54;
    }
LABEL_60:
    v65 = sub_140E91160(v64, v63);
    v67 = v66;
    if ( ((unsigned __int8)sub_1402B5F80(&v103, v64, v63) & (v66 != 0)) == 1
      && *(_BYTE *)v65 == 91
      && *(_BYTE *)(v65 + v67 - 1) == 93 )
    {
      v61 = v67 - 1;
      if ( v67 == 1 || *(char *)(v65 + 1) <= -65 )
        sub_141938F40(v65, v67, 1, v61, (__int64)&off_1419E98C8);
      if ( (unsigned __int64)(v67 - 2) >= 0x10
        && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v65 + 1)), v58)) == 0xFFFF )
      {
        sub_140F04AB0(&v108, v65 + 17, v67 - 18, v61);
        sub_1403AAB80(&v116, &v108);
      }
    }
    if ( !v126.m256i_i8[17] )
      continue;
    break;
  }
  v68 = _mm_load_si128((const __m128i *)v116.m256i_i64[0]);
  if ( v116.m256i_i64[1] )
  {
    v69 = (24 * v116.m256i_i64[1] + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v60 = v116.m256i_i64[1] + v69 + 17;
    v61 = v116.m256i_i64[0] - v69;
    v70 = 16;
  }
  else
  {
    v70 = 0;
  }
  a1 = v105;
  v100[0] = v70;
  v100[1] = v60;
  v100[2] = v61;
  v100[3] = v116.m256i_i64[0];
  v100[4] = v116.m256i_i64[0] + 16;
  v100[5] = v116.m256i_i64[0] + v116.m256i_i64[1] + 1;
  v101 = ~(unsigned __int16)_mm_movemask_epi8(v68);
  v102 = v116.m256i_i64[3];
  v131 = 1;
  v83 = sub_14167F170(v116.m256i_i64[0]);
  if ( *(_BYTE *)(v83 + 16) == 1 )
  {
    v88 = *(_QWORD *)v83;
    v89 = *(_QWORD *)(v83 + 8);
  }
  else
  {
    v131 = 1;
    v97 = v83;
    v88 = sub_141696260(v85, v84, v86, v87);
    v83 = v97;
    *(_QWORD *)v97 = v88;
    *(_QWORD *)(v97 + 8) = v89;
    *(_BYTE *)(v97 + 16) = 1;
  }
  *(_QWORD *)v83 = v88 + 1;
  *(__m128i *)&v124[16] = v57;
  *(_OWORD *)v124 = off_141A56DB0;
  *(_QWORD *)&v124[32] = v88;
  v125 = v89;
  v78 = sub_140EBACD0(v100, v124);
  v90 = *(_QWORD *)&v124[8];
  v80 = *(const __m128i **)v124;
  v82 = *(_QWORD *)&v124[24];
  if ( v115 )
    v78 = sub_140001660(v114, v115, 1);
  v81 = _mm_load_si128(v80);
  if ( v90 )
  {
    v91 = (24 * v90 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v78 = v90 + v91 + 17;
    v79 = (__int64)v80->m128i_i64 - v91;
    v92 = 16;
    goto LABEL_84;
  }
LABEL_83:
  v90 = 0;
  v92 = 0;
LABEL_84:
  v93 = (unsigned int)~_mm_movemask_epi8(v81);
  v116.m256i_i64[3] = (__int64)v80;
  v117 = v80 + 1;
  v118 = (__int64)v80->m128i_i64 + v90 + 1;
  LOWORD(v119) = v93;
  v120.m128i_i64[0] = v82;
  v116.m256i_i64[0] = v92;
  v116.m256i_i64[1] = v78;
  v116.m256i_i64[2] = v79;
  v126.m256i_i16[0] = v93;
  *(__int32 *)((char *)v126.m256i_i32 + 2) = *(_DWORD *)((char *)&v119 + 2);
  v126.m256i_i16[3] = HIWORD(v119);
  v126.m256i_i64[1] = v82;
  *(_QWORD *)&v124[32] = v80 + 1;
  v125 = v118;
  *(_QWORD *)&v124[16] = v79;
  *(_QWORD *)&v124[24] = v80;
  *(__m128i *)v124 = _mm_loadu_si128((const __m128i *)&v116);
  v94 = v82 >> 1;
  if ( !*((_QWORD *)&v112 + 1) )
    v94 = 0;
  if ( v82 - v94 > (unsigned __int64)v112 )
  {
    v129 = 1;
    LOBYTE(v93) = 1;
    sub_141930360(&v111, v82 - v94, &v113, v93);
  }
  v129 = 0;
  sub_140EBAAA0((__int64)&v116, (__int64)&v111);
  v95 = v111;
  v96 = v112;
  a1[2] = v113;
  a1[1] = v96;
  *a1 = v95;
}
