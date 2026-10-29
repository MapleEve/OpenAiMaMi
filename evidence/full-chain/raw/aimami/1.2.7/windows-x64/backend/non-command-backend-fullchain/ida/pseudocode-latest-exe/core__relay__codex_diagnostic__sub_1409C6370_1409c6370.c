// win 1.2.7 latest-exe | module src/core/relay/codex_diagnostic.rs | ea 0x1409c6370 | successor of pre-update 0x140f31140 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_1409C6370(_OWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int128 v7; // xmm6
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __m128i v19; // xmm0
  __m128i si128; // xmm0
  unsigned __int64 v21; // r10
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  bool v32; // zf
  __int128 v33; // rax
  __m128i v34; // xmm8
  __int64 v35; // r13
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r13
  __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r12
  __m128i v44; // xmm0
  unsigned __int64 v45; // r10
  __int64 v46; // r10
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int8 *v55; // rcx
  const __m128i *v56; // rdi
  __m128i v57; // xmm0
  const char *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rbx
  unsigned __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // r9
  unsigned __int64 v70; // rcx
  __int64 result; // rax
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int64 v74; // rsi
  __int64 v75; // rdx
  __m128i v76; // [rsp+30h] [rbp-50h] BYREF
  __int128 v77; // [rsp+40h] [rbp-40h]
  __int128 v78; // [rsp+50h] [rbp-30h]
  __int128 v79; // [rsp+60h] [rbp-20h]
  __int128 v80; // [rsp+70h] [rbp-10h]
  __int128 v81; // [rsp+80h] [rbp+0h]
  _QWORD v82[6]; // [rsp+90h] [rbp+10h] BYREF
  __int16 v83; // [rsp+C0h] [rbp+40h]
  __int64 v84; // [rsp+C8h] [rbp+48h]
  __m128i *v85; // [rsp+D0h] [rbp+50h] BYREF
  __int64 (__fastcall *v86)(_QWORD, _QWORD); // [rsp+D8h] [rbp+58h]
  __int64 v87; // [rsp+E0h] [rbp+60h]
  _OWORD *v88; // [rsp+E8h] [rbp+68h]
  __int128 v89; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v90; // [rsp+100h] [rbp+80h]
  __int128 v91; // [rsp+110h] [rbp+90h] BYREF
  __int64 (__fastcall *v92)(_QWORD, _QWORD); // [rsp+120h] [rbp+A0h]
  __m128i *v93; // [rsp+128h] [rbp+A8h]
  __m128i v94; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v95; // [rsp+140h] [rbp+C0h]
  __int128 v96; // [rsp+150h] [rbp+D0h]
  __int128 v97; // [rsp+160h] [rbp+E0h]
  __int128 v98; // [rsp+170h] [rbp+F0h]
  __int128 v99; // [rsp+180h] [rbp+100h]
  __m128i v100; // [rsp+190h] [rbp+110h] BYREF
  __int128 v101; // [rsp+1A0h] [rbp+120h] BYREF
  const char *m128i_i8; // [rsp+1B0h] [rbp+130h]
  __int64 v103; // [rsp+1B8h] [rbp+138h]
  __int64 v104; // [rsp+1C0h] [rbp+140h]
  const char *v105; // [rsp+1C8h] [rbp+148h]
  __int64 v106; // [rsp+1D0h] [rbp+150h]
  __int64 v107; // [rsp+1D8h] [rbp+158h]
  void *v108; // [rsp+1E0h] [rbp+160h]
  __m128i **v109; // [rsp+1E8h] [rbp+168h]
  char v110; // [rsp+1F3h] [rbp+173h] BYREF
  char v111; // [rsp+1F4h] [rbp+174h] BYREF
  char v112; // [rsp+1F5h] [rbp+175h]
  char v113; // [rsp+1F6h] [rbp+176h]
  char v114; // [rsp+1F7h] [rbp+177h]
  __int64 v115; // [rsp+1F8h] [rbp+178h]

  v115 = -2;
  v7 = *(_OWORD *)(a3 + 32);
  sub_14018C870(&v89);
  v91 = v7;
  nullsub_1(v9, v8);
  v10 = sub_140001650(6, 1);
  if ( !v10 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v10 + 4) = 26977;
  *(_DWORD *)v10 = 1852141679;
  v100.m128i_i64[0] = 6;
  v100.m128i_i64[1] = v10;
  *(_QWORD *)&v101 = 6;
  sub_140871180((__int64)&v89, &v100);
  nullsub_1(v12, v11);
  v13 = sub_140001650(6, 1);
  if ( !v13 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v13 + 4) = 18753;
  *(_DWORD *)v13 = 1852141647;
  v100.m128i_i64[0] = 6;
  v100.m128i_i64[1] = v13;
  *(_QWORD *)&v101 = 6;
  sub_140871180((__int64)&v89, &v100);
  if ( (a4 & 1) != 0 )
  {
    nullsub_1(v15, v14);
    v16 = sub_140001650(6, 1);
    if ( !v16 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v16 + 4) = 12649;
    *(_DWORD *)v16 = 1634560353;
    v100.m128i_i64[0] = 6;
    v100.m128i_i64[1] = v16;
    *(_QWORD *)&v101 = 6;
    sub_140871180((__int64)&v89, &v100);
    sub_1408D4E70(&v76, a2);
    if ( v76.m128i_i32[0] == -1 )
    {
      si128 = _mm_load_si128((const __m128i *)v76.m128i_i64[1]);
      if ( (_QWORD)v77 )
      {
        v21 = (24 * v77 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v17 = v77 + v21 + 17;
        v18 = v76.m128i_i64[1] - v21;
        v22 = 16;
      }
      else
      {
        v22 = 0;
      }
      *((_QWORD *)&v95 + 1) = v76.m128i_i64[1];
      *(_QWORD *)&v96 = v76.m128i_i64[1] + 16;
      *((_QWORD *)&v96 + 1) = v76.m128i_i64[1] + v77 + 1;
      LOWORD(v97) = ~(unsigned __int16)_mm_movemask_epi8(si128);
      *((_QWORD *)&v97 + 1) = v78;
      v94.m128i_i64[0] = v22;
      v94.m128i_i64[1] = v17;
      *(_QWORD *)&v95 = v18;
      v104 = v97;
      v105 = (const char *)v78;
      m128i_i8 = (const char *)(v76.m128i_i64[1] + 16);
      v103 = *((_QWORD *)&v96 + 1);
      *(_QWORD *)&v101 = v18;
      *((_QWORD *)&v101 + 1) = v76.m128i_i64[1];
      v100 = _mm_loadu_si128(&v94);
      v23 = (unsigned __int64)v78 >> 1;
      if ( !*((_QWORD *)&v90 + 1) )
        v23 = 0;
      if ( (unsigned __int64)&v105[-v23] > (unsigned __int64)v90 )
      {
        v113 = 1;
        LOBYTE(v18) = 1;
        sub_141962910(&v89, &v105[-v23], &v91, v18);
      }
      v113 = 0;
      sub_14092D950(&v94, &v89);
    }
    else
    {
      v99 = v81;
      v98 = v80;
      v19 = _mm_loadu_si128(&v76);
      v97 = v79;
      v96 = v78;
      v95 = v77;
      v94 = v19;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v85 = &v94;
        v86 = sub_140D76130;
        v104 = 2;
        v105 = aCodexmateLibCo_36;
        v106 = 44;
        v108 = &unk_141A61EB6;
        v109 = &v85;
        v100.m128i_i64[0] = 0;
        v100.m128i_i64[1] = (__int64)aCodexmateLibCo_36;
        v101 = 0x2Cu;
        m128i_i8 = aSrcCoreRelayCo_2;
        v103 = 34;
        v107 = 0xBC100000001LL;
        sub_141503E20(&v110, &v100);
      }
      sub_140906570(&v94);
    }
  }
  sub_1416CC1A0(&v85, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  v93 = v85;
  if ( v85 == (__m128i *)-1LL )
  {
    v47 = sub_1416AE140(v24);
    v52 = v47;
    if ( *(_BYTE *)(v47 + 16) == 1 )
    {
      v53 = *(_QWORD *)v47;
    }
    else
    {
      v53 = sub_1416C5230(v49, v48, v50, v51);
      *(_QWORD *)v52 = v53;
      *(_QWORD *)(v52 + 8) = v75;
      *(_BYTE *)(v52 + 16) = 1;
    }
    *(_QWORD *)v52 = v53 + 1;
    v54 = (__int64)v86;
    v55 = (__int8 *)((unsigned __int8)v86 & 3);
    if ( (unsigned int)((_DWORD)v55 - 2) >= 2 && ((unsigned __int8)v86 & 3) != 0 )
    {
      v100.m128i_i64[1] = (__int64)v86 - 1;
      v100.m128i_i8[0] = 3;
      v54 = sub_1416EBAD0(&v100.m128i_u64[1]);
    }
    v56 = (const __m128i *)&unk_141A57970;
    v57 = (__m128i)-1LL;
    v58 = nullptr;
    goto LABEL_57;
  }
  v92 = v86;
  v25 = v87;
  v26 = sub_1416AE140(v24);
  v31 = v26;
  v32 = *(_BYTE *)(v26 + 16) == 1;
  v88 = a1;
  if ( v32 )
  {
    v33 = *(_OWORD *)v26;
  }
  else
  {
    *(_QWORD *)&v33 = sub_1416C5230(v28, v27, v29, v30);
    *(_OWORD *)v31 = v33;
    *(_BYTE *)(v31 + 16) = 1;
  }
  *(_QWORD *)v31 = v33 + 1;
  v95 = xmmword_141A57990;
  v94 = *(__m128i *)&off_141A57980;
  v96 = v33;
  v111 = 2;
  v100.m128i_i64[0] = 0;
  v100.m128i_i64[1] = v25;
  *(_QWORD *)&v101 = v92;
  *((_QWORD *)&v101 + 1) = v25;
  m128i_i8 = nullptr;
  v103 = v25;
  v104 = 0xA0000000ALL;
  LOBYTE(v105) = 1;
  LOWORD(v106) = 0;
  v34 = _mm_load_si128((const __m128i *)&xmmword_141A04550);
  do
  {
    v35 = v101;
    sub_140A09020(&v76, &v101);
    if ( v76.m128i_i32[0] == 1 )
    {
      v38 = v100.m128i_i64[0];
      v100.m128i_i64[0] = v77;
      v39 = v77 - v38;
      v40 = v38 + v35;
      if ( (_QWORD)v77 == v38 )
        goto LABEL_34;
LABEL_28:
      if ( *(_BYTE *)(v40 + v39 - 1) == 10 )
      {
        if ( v39 == 1 )
        {
          v39 = 0;
        }
        else if ( *(_BYTE *)(v40 + v39 - 2) == 13 )
        {
          v39 -= 2;
        }
        else
        {
          --v39;
        }
      }
      goto LABEL_34;
    }
    if ( BYTE1(v106) )
      break;
    BYTE1(v106) = 1;
    v39 = v100.m128i_i64[1] - v100.m128i_i64[0];
    if ( ((unsigned __int8)v106 | (v100.m128i_i64[1] != v100.m128i_i64[0])) != 1 )
      break;
    v40 = v101 + v100.m128i_i64[0];
    if ( v39 )
      goto LABEL_28;
LABEL_34:
    v41 = sub_1408FEA60(v40, v39);
    v43 = v42;
    if ( ((unsigned __int8)toml_lexical_state_line_is_structural(&v111, v40, v39) & (v42 != 0)) == 1
      && *(_BYTE *)v41 == 91
      && *(_BYTE *)(v41 + v43 - 1) == 93 )
    {
      if ( v43 == 1 || *(char *)(v41 + 1) <= -65 )
        sub_14196B4F0(v41, v43, 1, v43 - 1, (__int64)&off_141A496C8);
      if ( v43 >= 0x12 && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v41 + 1)), v34)) == 0xFFFF )
      {
        sub_1409951E0(&v76, v41 + 17, v43 - 18);
        sub_140871180((__int64)&v94, &v76);
      }
    }
  }
  while ( !BYTE1(v106) );
  v44 = _mm_load_si128((const __m128i *)v94.m128i_i64[0]);
  if ( v94.m128i_i64[1] )
  {
    v45 = (24 * v94.m128i_i64[1] + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v36 = v94.m128i_i64[1] + v45 + 17;
    v37 = v94.m128i_i64[0] - v45;
    v46 = 16;
  }
  else
  {
    v46 = 0;
  }
  a1 = v88;
  v82[0] = v46;
  v82[1] = v36;
  v82[2] = v37;
  v82[3] = v94.m128i_i64[0];
  v82[4] = v94.m128i_i64[0] + 16;
  v82[5] = v94.m128i_i64[0] + v94.m128i_i64[1] + 1;
  v83 = ~(unsigned __int16)_mm_movemask_epi8(v44);
  v84 = *((_QWORD *)&v95 + 1);
  v114 = 1;
  v59 = sub_1416AE140(v94.m128i_i64[0]);
  if ( *(_BYTE *)(v59 + 16) == 1 )
  {
    v64 = *(_QWORD *)v59;
    v65 = *(_QWORD *)(v59 + 8);
  }
  else
  {
    v114 = 1;
    v74 = v59;
    v64 = sub_1416C5230(v61, v60, v62, v63);
    v59 = v74;
    *(_QWORD *)v74 = v64;
    *(_QWORD *)(v74 + 8) = v65;
    *(_BYTE *)(v74 + 16) = 1;
  }
  *(_QWORD *)v59 = v64 + 1;
  v101 = xmmword_141A57990;
  v100 = *(__m128i *)&off_141A57980;
  m128i_i8 = (const char *)v64;
  v103 = v65;
  v54 = sub_14092DB80(v82, &v100);
  v66 = v100.m128i_i64[1];
  v56 = (const __m128i *)v100.m128i_i64[0];
  v58 = *((const char **)&v101 + 1);
  if ( v93 )
    sub_140001660(v92, v93, 1);
  v57 = _mm_load_si128(v56);
  if ( v66 )
  {
    v67 = (24 * v66 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v54 = v66 + v67 + 17;
    v55 = &v56->m128i_i8[-v67];
    v68 = 16;
    goto LABEL_58;
  }
LABEL_57:
  v66 = 0;
  v68 = 0;
LABEL_58:
  v69 = (unsigned int)~_mm_movemask_epi8(v57);
  *((_QWORD *)&v95 + 1) = v56;
  *(_QWORD *)&v96 = v56 + 1;
  *((_QWORD *)&v96 + 1) = (char *)v56->m128i_i64 + v66 + 1;
  LOWORD(v97) = v69;
  *((_QWORD *)&v97 + 1) = v58;
  v94.m128i_i64[0] = v68;
  v94.m128i_i64[1] = v54;
  *(_QWORD *)&v95 = v55;
  LOWORD(v104) = v69;
  *(_DWORD *)((char *)&v104 + 2) = *(_DWORD *)((char *)&v97 + 2);
  HIWORD(v104) = WORD3(v97);
  v105 = v58;
  m128i_i8 = v56[1].m128i_i8;
  v103 = *((_QWORD *)&v96 + 1);
  *(_QWORD *)&v101 = v55;
  *((_QWORD *)&v101 + 1) = v56;
  v100 = _mm_loadu_si128(&v94);
  v70 = (unsigned __int64)v58 >> 1;
  if ( !*((_QWORD *)&v90 + 1) )
    v70 = 0;
  if ( (unsigned __int64)&v58[-v70] > (unsigned __int64)v90 )
  {
    v112 = 1;
    LOBYTE(v69) = 1;
    sub_141962910(&v89, &v58[-v70], &v91, v69);
  }
  v112 = 0;
  result = sub_14092D950(&v94, &v89);
  v72 = v89;
  v73 = v90;
  a1[2] = v91;
  a1[1] = v73;
  *a1 = v72;
  return result;
}
