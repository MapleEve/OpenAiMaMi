// module: codexmate_lib/core/relay/translator
// addr: 0x140a279f0
// name: normalize_anthropic_tool_call_for_respon
// win 1.2.3 | = mac codexmate_lib::core::relay::translator::normalize_anthropic_tool_call_for_responses | 跨平台字符串签名匹配(名↔函数一致)
void *__fastcall normalize_anthropic_tool_call_for_respon(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(_QWORD, _QWORD))
{
  __int64 v5; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  bool v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int128 v38; // kr10_16
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  const char *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rcx
  void *result; // rax
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // r12
  __int64 v57; // r14
  __int64 v58; // rax
  bool v59; // cf
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // r14
  __int64 v64; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v65[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v66; // [rsp+48h] [rbp-38h]
  __m128i v67; // [rsp+50h] [rbp-30h] BYREF
  __m128i v68; // [rsp+60h] [rbp-20h]
  char v69; // [rsp+77h] [rbp-9h] BYREF
  __int64 v70; // [rsp+78h] [rbp-8h]
  __m128i v71; // [rsp+80h] [rbp+0h] BYREF
  __int64 v72; // [rsp+90h] [rbp+10h]
  __m128i v73; // [rsp+98h] [rbp+18h] BYREF
  __m128i v74; // [rsp+A8h] [rbp+28h] BYREF
  __m256i v75; // [rsp+B8h] [rbp+38h] BYREF
  __m128i *v76; // [rsp+D8h] [rbp+58h]
  __int64 (__fastcall *v77)(_QWORD, _QWORD); // [rsp+E0h] [rbp+60h]
  __int64 *v78; // [rsp+E8h] [rbp+68h]
  __int64 (__fastcall *v79)(); // [rsp+F0h] [rbp+70h]
  __int64 v80; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v81; // [rsp+100h] [rbp+80h]
  __int64 v82; // [rsp+108h] [rbp+88h]
  __int64 v83; // [rsp+110h] [rbp+90h]
  __int64 v84; // [rsp+118h] [rbp+98h]
  __int64 v85; // [rsp+120h] [rbp+A0h]
  char v86; // [rsp+12Fh] [rbp+AFh]
  __int64 v87; // [rsp+130h] [rbp+B0h]

  v87 = -2;
  v75.m256i_i64[0] = a4;
  v75.m256i_i64[1] = (__int64)a5;
  *(_OWORD *)&v75.m256i_u64[2] = 0;
  v76 = (__m128i *)a4;
  v77 = a5;
  sub_1408A6200(&v73, &v75);
  v75.m256i_i8[0] = 0;
  if ( v73.m128i_i8[0] != -1 )
  {
    v68 = _mm_loadu_si128(&v74);
    v67 = _mm_loadu_si128(&v73);
    sub_1400104F0(&v75);
    v70 = a3;
    if ( a3 == 4 )
      goto LABEL_3;
LABEL_17:
    sub_1400104F0(&v67);
    if ( a3 < 0 )
    {
      v20 = 0;
      goto LABEL_19;
    }
    if ( !a3 )
    {
      v84 = 1;
LABEL_106:
      sub_140A0E760((__int64)&v75, a2, a3, a4, (__int64)a5);
      v52 = v70;
      *(_QWORD *)a1 = v70;
      *(_QWORD *)(a1 + 8) = v84;
      *(_QWORD *)(a1 + 16) = v52;
      *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)&v75);
      result = (void *)v75.m256i_i64[2];
      *(_QWORD *)(a1 + 40) = v75.m256i_i64[2];
      return result;
    }
LABEL_104:
    nullsub_1(v19);
    v20 = 1;
    v51 = sub_140001650(a3, 1);
    if ( v51 )
    {
      v84 = v51;
      sub_141684120(v51, a2, a3);
      goto LABEL_106;
    }
LABEL_19:
    sub_1416C2D4B(v20, a3);
  }
  v68 = _mm_loadu_si128((const __m128i *)&v75.m256i_u64[2]);
  v67 = *(__m128i *)v75.m256i_i8;
  sub_140348CF0(&v73);
  v70 = a3;
  if ( a3 != 4 )
    goto LABEL_17;
LABEL_3:
  if ( *(_DWORD *)a2 == 1752392002 )
  {
    v21 = sub_141433D50("commandargsurlenabledenvheaders", 7, &v67);
    if ( v21 )
    {
      if ( *(_BYTE *)v21 == 3 )
      {
        v22 = *(_QWORD *)(v21 + 16);
        v12 = *(_QWORD *)(v21 + 24);
        sub_14033BC10(v22, v12);
        if ( v23 )
        {
          if ( v12 >= 0 )
          {
            if ( !v12 )
            {
              v85 = 1;
              v12 = 0;
              v5 = 0;
              goto LABEL_99;
            }
            nullsub_1(v11);
            v24 = 1;
            v40 = sub_140001650(v12, 1);
            if ( v40 )
            {
              v85 = v40;
              sub_141684120(v40, v22, v12);
              v5 = v12;
              goto LABEL_99;
            }
          }
          else
          {
            v24 = 0;
          }
          sub_1416C2D4B(v24, v12);
        }
      }
    }
    goto LABEL_103;
  }
  if ( *(_DWORD *)a2 != 1684104530 )
  {
    if ( *(_DWORD *)a2 != 1651469383 )
    {
      if ( *(_DWORD *)a2 == 1885696583 )
      {
        v10 = sub_141433D50(aPattern_0, 7, &v67);
        v12 = -1;
        if ( v10 && *(_BYTE *)v10 == 3 )
        {
          v13 = *(_QWORD *)(v10 + 16);
          v84 = *(_QWORD *)(v10 + 24);
          v10 = sub_14033BC10(v13, v84);
          if ( v14 )
          {
            v15 = sub_141433D50(aPath_7, 4, &v67);
            v85 = (__int64)&unk_1417A3554;
            v83 = 1;
            if ( v15 && *(_BYTE *)v15 == 3 )
            {
              v85 = *(_QWORD *)(v15 + 16);
              v83 = *(_QWORD *)(v15 + 24);
            }
            v16 = sub_141433D50(aOutputMode, 11, &v67);
            v17 = 1;
            if ( v16 && *(_BYTE *)v16 == 3 )
            {
              v17 = *(_QWORD *)(v16 + 16);
              v18 = *(_QWORD *)(v16 + 24) == 18;
            }
            else
            {
              v18 = 0;
            }
            v43 = sub_141433D50(aHeadLimit, 10, &v67);
            v44 = 200;
            if ( v43 && *(_BYTE *)v43 == 2 && !*(_QWORD *)(v43 + 8) )
            {
              v45 = *(_QWORD *)(v43 + 16);
              v46 = 1000;
              if ( v45 < 0x3E8 )
                v46 = v45;
              v44 = 1;
              if ( v45 )
                v44 = v46;
            }
            v64 = v44;
            if ( v18 )
            {
              v47 = aN_2;
              if ( _mm_movemask_epi8(
                     _mm_and_si128(
                       _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v17 + 16)), (__m128i)xmmword_1417A2DE0),
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v17), (__m128i)xmmword_1417A2DD0))) == 0xFFFF )
                v47 = (const char *)&unk_1417A77B7;
            }
            else
            {
              v47 = aN_2;
            }
            v65[0] = v47;
            v65[1] = 2;
            sub_14097E7E0((unsigned int)&v75, v13, v84, 39, (__int64)asc_1417A7708, 5);
            v73.m128i_i64[0] = (__int64)&v75;
            v73.m128i_i64[1] = (__int64)sub_1400015F0;
            sub_14149C0F0(&v80, &unk_1417A5168, &v73);
            if ( v75.m256i_i64[0] )
              sub_140001660(v75.m256i_i64[1], v75.m256i_i64[0], 1);
            sub_14097E7E0((unsigned int)&v75, v85, v83, 39, (__int64)asc_1417A7708, 5);
            v71.m128i_i64[0] = (__int64)&v75;
            v71.m128i_i64[1] = (__int64)sub_1400015F0;
            sub_14149C0F0(&v73, &unk_1417A5168, &v71);
            if ( v75.m256i_i64[0] )
              sub_140001660(v75.m256i_i64[1], v75.m256i_i64[0], 1);
            v75.m256i_i64[0] = (__int64)v65;
            v75.m256i_i64[1] = (__int64)sub_14041F680;
            v75.m256i_i64[2] = (__int64)&v80;
            v75.m256i_i64[3] = (__int64)sub_1400015F0;
            v76 = &v73;
            v77 = sub_1400015F0;
            v78 = &v64;
            v79 = sub_1414AC520;
            sub_14149C0F0(&v71, &unk_1417A77B9, &v75);
            if ( v73.m128i_i64[0] )
              sub_140001660(v73.m128i_i64[1], v73.m128i_i64[0], 1);
            if ( v80 )
              sub_140001660(v81, v80, 1);
            v10 = v71.m128i_i64[1];
            v12 = v71.m128i_i64[0];
            v5 = v72;
          }
          else
          {
            v12 = -1;
          }
        }
LABEL_97:
        v85 = v10;
        goto LABEL_98;
      }
LABEL_103:
      sub_1400104F0(&v67);
      a3 = v70;
      goto LABEL_104;
    }
    v32 = sub_141433D50(aPattern_0, 7, &v67);
    if ( !v32 )
      goto LABEL_103;
    if ( *(_BYTE *)v32 != 3 )
      goto LABEL_103;
    v33 = *(_QWORD *)(v32 + 16);
    v34 = *(_QWORD *)(v32 + 24);
    sub_14033BC10(v33, v34);
    if ( !v35 )
      goto LABEL_103;
    v80 = 0;
    v81 = 1;
    v82 = 0;
    v36 = sub_141433D50(aPath_7, 4, &v67);
    v84 = v33;
    if ( v36 && *(_BYTE *)v36 == 3 && (v37 = *(_QWORD *)(v36 + 24)) != 0 )
    {
      sub_14097E7E0((unsigned int)&v75, *(_QWORD *)(v36 + 16), v37, 39, (__int64)asc_1417A7708, 5);
      v71.m128i_i64[0] = (__int64)&v75;
      v71.m128i_i64[1] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v73, &unk_1417A5168, &v71);
      if ( v75.m256i_i64[0] )
        sub_140001660(v75.m256i_i64[1], v75.m256i_i64[0], 1);
      v71.m128i_i64[0] = (__int64)&v73;
      v71.m128i_i64[1] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v75, &unk_1417A7777, &v71);
      if ( v73.m128i_i64[0] )
        sub_140001660(v73.m128i_i64[1], v73.m128i_i64[0], 1);
      v38 = *(_OWORD *)v75.m256i_i8;
      if ( !v75.m256i_i64[2] )
      {
        v85 = 1;
        v39 = 0;
        v82 = 0;
        if ( !v75.m256i_i64[0] )
          goto LABEL_63;
        goto LABEL_53;
      }
      v83 = v75.m256i_i64[1];
      v66 = v75.m256i_i64[0];
      v62 = v75.m256i_i64[2];
      sub_141688D30((unsigned int)&v80, 0, v75.m256i_i32[4], 1, 1);
      v63 = v82;
      v85 = v81;
      sub_141684120(v81 + v82, v83, v62);
      v39 = v62 + v63;
      v82 = v39;
      v38 = __PAIR128__(v83, v66);
      if ( v66 )
LABEL_53:
        sub_140001660(*((_QWORD *)&v38 + 1), v38, 1);
    }
    else
    {
      v85 = 1;
      v39 = 0;
    }
LABEL_63:
    sub_14097E7E0((unsigned int)&v75, v84, v34, 39, (__int64)asc_1417A7708, 5);
    v71.m128i_i64[0] = (__int64)&v75;
    v71.m128i_i64[1] = (__int64)sub_1400015F0;
    sub_14149C0F0(&v73, &unk_1417A5168, &v71);
    if ( v75.m256i_i64[0] )
      sub_140001660(v75.m256i_i64[1], v75.m256i_i64[0], 1);
    v71.m128i_i64[0] = (__int64)&v73;
    v71.m128i_i64[1] = (__int64)sub_1400015F0;
    sub_14149C0F0(&v75, &unk_1417A7782, &v71);
    if ( v73.m128i_i64[0] )
      sub_140001660(v73.m128i_i64[1], v73.m128i_i64[0], 1);
    v84 = v75.m256i_i64[1];
    v41 = v75.m256i_i64[0];
    v42 = v75.m256i_i64[2];
    if ( v75.m256i_i64[2] > (unsigned __int64)(v80 - v39) )
    {
      v83 = v75.m256i_i64[0];
      sub_141688D30((unsigned int)&v80, v39, v75.m256i_i32[4], 1, 1);
      v85 = v81;
      v39 = v82;
      v41 = v83;
    }
    else if ( !v75.m256i_i64[2] )
    {
LABEL_70:
      if ( v41 )
        sub_140001660(v84, v41, 1);
      v5 = v42 + v39;
      v12 = v80;
      v10 = v81;
      goto LABEL_97;
    }
    sub_141684120(v39 + v85, v84, v42);
    goto LABEL_70;
  }
  v25 = sub_141433D50(aFilePath, 9, &v67);
  if ( !v25 )
  {
    v25 = sub_141433D50(aPath_7, 4, &v67);
    if ( !v25 )
    {
      v12 = -1;
      goto LABEL_98;
    }
  }
  v12 = -1;
  if ( *(_BYTE *)v25 == 3 )
  {
    v5 = *(_QWORD *)(v25 + 16);
    v26 = *(_QWORD *)(v25 + 24);
    sub_14033BC10(v5, v26);
    if ( v27 )
    {
      sub_14097E7E0((unsigned int)&v75, v5, v26, 39, (__int64)asc_1417A7708, 5);
      v73.m128i_i64[0] = (__int64)&v75;
      v73.m128i_i64[1] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v80, &unk_1417A5168, &v73);
      if ( v75.m256i_i64[0] )
        sub_140001660(v75.m256i_i64[1], v75.m256i_i64[0], 1);
      v28 = sub_141433D50(aOffset_0, 6, &v67);
      v29 = 1;
      if ( v28 && *(_BYTE *)v28 == 2 && !*(_QWORD *)(v28 + 8) )
        v29 = (*(_QWORD *)(v28 + 16) == 0) + *(_QWORD *)(v28 + 16);
      v65[0] = v29;
      v30 = sub_141433D50(aLimit_0, 5, &v67);
      if ( v30 && *(_BYTE *)v30 == 2 && !*(_QWORD *)(v30 + 8) && (v58 = *(_QWORD *)(v30 + 16)) != 0 )
      {
        v59 = __CFADD__(v58, v29);
        v60 = v58 + v29;
        v61 = -1;
        if ( !v59 )
          v61 = v60;
        v71.m128i_i64[0] = v61 - 1;
        v75.m256i_i64[0] = (__int64)v65;
        v75.m256i_i64[1] = (__int64)sub_1414AC520;
        v75.m256i_i64[2] = (__int64)&v71;
        v75.m256i_i64[3] = (__int64)sub_1414AC520;
        v76 = (__m128i *)&v80;
        v77 = sub_1400015F0;
        sub_14149C0F0(&v73, &unk_1417A77E2, &v75);
        v85 = v73.m128i_i64[1];
        v12 = v73.m128i_i64[0];
        v5 = v74.m128i_i64[0];
        v31 = v80;
        if ( !v80 )
          goto LABEL_98;
      }
      else
      {
        v73.m128i_i64[0] = (__int64)&v80;
        v73.m128i_i64[1] = (__int64)sub_1400015F0;
        sub_14149C0F0(&v75, &unk_1417A77F8, &v73);
        v85 = v75.m256i_i64[1];
        v12 = v75.m256i_i64[0];
        v5 = v75.m256i_i64[2];
        v31 = v80;
        if ( !v80 )
          goto LABEL_98;
      }
      sub_140001660(v81, v31, 1);
    }
  }
LABEL_98:
  if ( v12 == -1 )
    goto LABEL_103;
LABEL_99:
  v71.m128i_i64[0] = 0;
  v72 = 0;
  nullsub_1(v11);
  v48 = sub_140001650(3, 1);
  v84 = v12;
  if ( !v48 )
    sub_1416C2D4B(1, 3);
  *(_BYTE *)(v48 + 2) = 100;
  *(_WORD *)v48 = 28003;
  v80 = 3;
  v81 = v48;
  v82 = 3;
  if ( v5 < 0 )
  {
    v50 = 0;
    goto LABEL_102;
  }
  if ( v5 )
  {
    nullsub_1(v49);
    v50 = 1;
    v54 = sub_140001650(v5, 1);
    if ( !v54 )
    {
LABEL_102:
      v86 = 1;
      sub_1416C2D4B(v50, v5);
    }
    v55 = v54;
    sub_141684120(v54, v85, v5);
  }
  else
  {
    v55 = 1;
  }
  v75.m256i_i8[0] = 3;
  v75.m256i_i64[1] = v5;
  v75.m256i_i64[2] = v55;
  v75.m256i_i64[3] = v5;
  v86 = 0;
  sub_140307860(&v73, &v71, &v80, &v75);
  a3 = v70;
  if ( v73.m128i_i8[0] != -1 )
    sub_1400104F0(&v73);
  *(__m128i *)&v75.m256i_u64[1] = _mm_loadu_si128(&v71);
  v75.m256i_i64[3] = v72;
  v75.m256i_i8[0] = 5;
  v80 = 0;
  v81 = 1;
  v82 = 0;
  v74.m128i_i64[0] = 1610612768;
  v73.m128i_i64[0] = (__int64)&v80;
  v73.m128i_i64[1] = (__int64)&off_1417A9B00;
  if ( (unsigned __int8)sub_14142EA10(&v75, &v73) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_3,
      55,
      (unsigned int)&v69,
      (unsigned int)&unk_1417A5580,
      (__int64)&off_1417A9BB8);
  v56 = v80;
  v83 = v81;
  v57 = v82;
  if ( v84 )
    sub_140001660(v85, v84, 1);
  sub_1400104F0(&v67);
  sub_1400104F0(&v75);
  if ( v56 == -1 )
    goto LABEL_104;
  nullsub_1(v19);
  result = (void *)sub_140001650(12, 1);
  if ( !result )
  {
    v70 = v56;
    sub_1416C2D4B(1, 12);
  }
  qmemcpy(result, "exec_command", 12);
  *(_QWORD *)(a1 + 24) = v56;
  *(_QWORD *)(a1 + 32) = v83;
  *(_QWORD *)(a1 + 40) = v57;
  *(_QWORD *)a1 = 12;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = 12;
  return result;
}