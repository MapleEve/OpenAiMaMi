// win 1.2.7 | module src/core/relay/proxy_stream.rs | ea 0x140dc5580 | name sub_140DC5580
// win 1.2.7 | module src/core/relay/proxy_stream.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DC5580(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 *v3; // r14
  __int64 v4; // rax
  bool v5; // zf
  __int64 (__fastcall **v6)(); // rdi
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // r15
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  const __m128i *v15; // rdi
  unsigned __int64 v16; // rax
  const __m128i *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  bool v20; // cf
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 *v23; // r12
  unsigned __int64 v24; // r14
  void *v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // r8
  _OWORD *v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // rdi
  _BYTE *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 v43; // rax
  void *v44; // rdx
  __int64 v45; // rcx
  __int64 *v46; // rax
  const __m128i *v47; // rsi
  unsigned __int64 v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 *v51; // r14
  __int64 result; // rax
  __m128i *v53; // rcx
  __int128 v54; // xmm1
  __m128i v55[53]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v56[53]; // [rsp+390h] [rbp+310h] BYREF
  __m128i v57; // [rsp+6E0h] [rbp+660h] BYREF
  __int128 v58; // [rsp+6F0h] [rbp+670h]
  __int128 v59; // [rsp+A30h] [rbp+9B0h]
  __int128 v60; // [rsp+A40h] [rbp+9C0h]
  __int128 v61; // [rsp+A50h] [rbp+9D0h]
  __int128 v62; // [rsp+A60h] [rbp+9E0h]
  void *v63; // [rsp+A78h] [rbp+9F8h] BYREF
  unsigned __int64 v64; // [rsp+A80h] [rbp+A00h]
  __int64 v65; // [rsp+A88h] [rbp+A08h]
  __int128 v66; // [rsp+A90h] [rbp+A10h] BYREF
  __int64 v67; // [rsp+AA0h] [rbp+A20h]
  __int64 v68; // [rsp+AB0h] [rbp+A30h] BYREF
  __int64 v69; // [rsp+AB8h] [rbp+A38h]
  _BYTE *v70; // [rsp+AC0h] [rbp+A40h]
  _OWORD *v71; // [rsp+AC8h] [rbp+A48h]
  _DWORD *v72; // [rsp+AD0h] [rbp+A50h]
  _DWORD *v73; // [rsp+AD8h] [rbp+A58h]
  __int128 v74; // [rsp+AE0h] [rbp+A60h] BYREF
  _OWORD v75[2]; // [rsp+AF0h] [rbp+A70h]
  __int128 v76; // [rsp+B10h] [rbp+A90h] BYREF
  unsigned __int64 v77; // [rsp+B20h] [rbp+AA0h]
  char v78[8]; // [rsp+B28h] [rbp+AA8h] BYREF
  const __m128i *v79; // [rsp+B30h] [rbp+AB0h]
  __int64 *v80; // [rsp+B40h] [rbp+AC0h]
  char v81; // [rsp+B4Fh] [rbp+ACFh]
  __int64 v82; // [rsp+B50h] [rbp+AD0h]

  v82 = -2;
  v3 = a2;
  v69 = a1;
  v4 = *a2;
  v5 = *a2 == 1;
  v80 = a2;
  if ( v5 )
  {
    v6 = (__int64 (__fastcall **)())(a2 + 218);
    v7 = *((unsigned __int8 *)a2 + 1744);
    v72 = a2 + 1;
    switch ( v7 )
    {
      case 0LL:
        goto LABEL_8;
      case 1LL:
        sub_1419393E0(&off_141A47298);
      case 2LL:
        sub_141939400(&off_141A47298);
      case 3LL:
        v70 = a2 + 218;
        v8 = (_QWORD *)a2[217];
        goto LABEL_46;
    }
  }
  if ( v4 )
    goto LABEL_115;
  v9 = a2[1];
  *a2 = 2;
  if ( v9 >= 3 )
    sub_141939280("internal error: entered unreachable code", 40, &off_141A49BE0);
  if ( v9 == -2 )
LABEL_115:
    sub_141939280(aUnfoldMustNotB, 63, &off_141A4E710);
  *a2 = 1;
  *((_OWORD *)a2 + 54) = *(_OWORD *)(a2 + 219);
  v6 = (__int64 (__fastcall **)())(a2 + 218);
  *((_BYTE *)a2 + 1744) = 0;
  v72 = a2 + 1;
LABEL_8:
  *(_WORD *)((char *)a2 + 1745) = 0;
  v10 = a2[1];
  v70 = v6;
  if ( v10 == -1 )
  {
    v29 = -2;
    goto LABEL_101;
  }
  *(_WORD *)((char *)a2 + 1745) = 257;
  a2[110] = v10;
  sub_1418F44E0((__m128i *)(a2 + 111), (const __m128i *)a2 + 1, 0x350u);
  if ( v3[214] )
    goto LABEL_10;
  v8 = v3 + 211;
  v3[217] = (__int64)(v3 + 211);
LABEL_46:
  sub_140DCA020(&v74, *v8);
  if ( (_QWORD)v74 == 2 )
  {
    *v70 = 3;
    goto LABEL_103;
  }
  v61 = *(_OWORD *)((char *)v75 + 8);
  if ( (_DWORD)v74 != 1 )
  {
    v38 = v80 + 110;
    sub_140D73600(&v74, v80 + 110, v80[209], v80[210]);
    if ( (_QWORD)v74 == -1 )
    {
      v2 = *((_QWORD *)&v74 + 1);
LABEL_78:
      v29 = -1;
      v6 = nullptr;
      v42 = v80;
      if ( !*((_BYTE *)v80 + 1745) )
        goto LABEL_71;
      goto LABEL_94;
    }
    v67 = *(_QWORD *)&v75[0];
    v66 = v74;
    v39 = (char *)v38 + 782;
    if ( *v38 == 2 )
      v39 = (char *)v38 + 485;
    if ( *v39 )
    {
LABEL_93:
      v81 = 0;
      sub_141654790(&v74, &v66);
      v2 = *((_QWORD *)&v74 + 1);
      v6 = (__int64 (__fastcall **)())v74;
      v62 = v75[0];
      v29 = -1;
      v42 = v80;
      if ( !*((_BYTE *)v80 + 1745) )
        goto LABEL_71;
      goto LABEL_94;
    }
    if ( (unsigned int)*v38 == 2 )
    {
      v40 = v80[150];
      if ( v80[148] == -1 )
        v41 = 0;
      else
        v41 = v80[149];
      v81 = 1;
      sub_140163AC0(&v74, v41, v40);
      v81 = 1;
      sub_140E25810(&v76, v80 + 111, &v74);
    }
    else if ( *((_BYTE *)v80 + 1662) )
    {
      *(_QWORD *)&v76 = 0;
      *((_QWORD *)&v76 + 1) = 1;
      v77 = 0;
    }
    else
    {
      v81 = 1;
      sub_140E4D8E0(
        (unsigned int)&v76,
        (_DWORD)v38,
        (unsigned int)"stream_truncated",
        16,
        (__int64)"Upstream Anthropic stream ended before message_stop",
        51,
        0);
    }
    v47 = *((const __m128i **)&v76 + 1);
    v48 = v77;
    v49 = v67;
    if ( v77 > (__int64)v66 - v67 )
    {
      v79 = *((const __m128i **)&v76 + 1);
      sub_14190D590((unsigned int)&v66, v67, v77, 1, 1);
      v49 = v67;
      v47 = v79;
    }
    else if ( !v77 )
    {
      goto LABEL_91;
    }
    sub_1418F44E0((__m128i *)(v49 + *((_QWORD *)&v66 + 1)), v47, v48);
LABEL_91:
    v67 = v48 + v49;
    if ( (_QWORD)v76 )
      sub_140001660(v47, v76, 1);
    goto LABEL_93;
  }
  if ( !*((_QWORD *)&v74 + 1) )
  {
    v43 = 5LL * (v80[110] != 2) + 4;
    v44 = &unk_141A49D4A;
    if ( v80[110] == 2 )
      v44 = &unk_141A49D46;
    v63 = v44;
    v64 = v43;
    v68 = sub_14122E700(*(_QWORD *)&v75[0]);
    *(_QWORD *)&v74 = &v63;
    *((_QWORD *)&v74 + 1) = sub_140186EE0;
    *(_QWORD *)&v75[0] = &v68;
    *((_QWORD *)&v75[0] + 1) = sub_14122E940;
    sub_1416ABFD0(&v76, &unk_141A47323, &v74);
    sub_140D19140(v68);
    v74 = v76;
    *(_QWORD *)&v75[0] = v77;
    LOBYTE(v45) = 41;
    v37 = sub_141156620(v45, &v74);
    goto LABEL_76;
  }
  v73 = *((_DWORD **)&v74 + 1);
  v79 = *(const __m128i **)&v75[0];
  v30 = v80[212];
  v31 = v80[213];
  v71 = v80 + 214;
  (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v30 + 32))(v80 + 215, v31, v80[214], v80);
  v3 = v80;
  *((_BYTE *)v80 + 1746) = 1;
  v3[212] = (__int64)v73;
  v3[213] = (__int64)v79;
  *v71 = v61;
  v32 = v3[214];
  v33 = v3[108];
  v34 = v3[216];
  v35 = 0;
  v20 = v33 < v34;
  v36 = v33 - v34;
  if ( !v20 )
    v35 = v36;
  if ( v32 > v35 )
  {
    if ( *((_DWORD *)v3 + 220) != 2 && v80[189] )
      sub_1401F9370((_DWORD)v80 + 1512, (unsigned int)aStreamReadErro, 17, (unsigned int)&unk_141A49D3A, 12);
    LOBYTE(v34) = 41;
    v37 = sub_1416793A0(v34, aUpstreamTransl_0, 59);
LABEL_76:
    v2 = v37;
    goto LABEL_78;
  }
  v3[216] = v32 + v34;
LABEL_10:
  v73 = v3 + 110;
  v11 = v3 + 212;
  v79 = (const __m128i *)(v3 + 208);
  v12 = 0;
  v71 = (_OWORD *)((char *)v3 + 782);
  while ( 1 )
  {
    v13 = v3[214];
    if ( !v13 )
    {
LABEL_57:
      v62 = 0;
      v29 = v3[110];
      sub_1418F44E0(&v57, (const __m128i *)(v3 + 111), 0x350u);
      *(_WORD *)((char *)v3 + 1745) = 0;
      v2 = 1;
      v6 = off_141A422B8;
      goto LABEL_102;
    }
    ++v12;
    v14 = 0;
    while ( *(_BYTE *)(v3[213] + v14) != 10 )
    {
      if ( v13 == ++v14 )
        goto LABEL_17;
    }
    v13 = v14 + 1;
LABEL_17:
    sub_1416534E0(&v76, v11, v13);
    v15 = *((const __m128i **)&v76 + 1);
    v16 = v77;
    if ( v77 )
    {
      v2 = v77 - 1;
      v17 = nullptr;
      if ( *(_BYTE *)(*((_QWORD *)&v76 + 1) + v77 - 1) == 10 )
        v17 = *((const __m128i **)&v76 + 1);
    }
    else
    {
      v17 = nullptr;
    }
    if ( !v17 )
      v2 = v77;
    v18 = v80[109];
    v19 = v80[210];
    v20 = v18 < v19;
    v21 = v18 - v19;
    v22 = 0;
    if ( !v20 )
      v22 = v21;
    if ( v2 > v22 )
      break;
    if ( v17 )
      v15 = v17;
    if ( v2 > v79->m128i_i64[0] - v19 )
    {
      sub_14190D590((_DWORD)v79, v19, v2, 1, 1);
      v23 = v80;
      v19 = v80[210];
LABEL_31:
      sub_1418F44E0((__m128i *)(v19 + v23[209]), v15, v2);
      v16 = v77;
      goto LABEL_32;
    }
    v23 = v80;
    if ( v2 )
      goto LABEL_31;
LABEL_32:
    v24 = v2 + v19;
    v23[210] = v24;
    if ( v16 && *(_BYTE *)(*((_QWORD *)&v76 + 1) + v16 - 1) == 10 )
    {
      sub_140D73600(&v74, v73, v80[209], v24);
      v2 = *((_QWORD *)&v74 + 1);
      v25 = (void *)v74;
      if ( (_QWORD)v74 == -1 )
        goto LABEL_69;
      v26 = *(_QWORD *)&v75[0];
      v27 = v80;
      v80[210] = 0;
      v28 = (_OWORD *)((char *)v27 + 485);
      if ( *((_DWORD *)v27 + 220) != 2 )
        v28 = v71;
      if ( *((_BYTE *)v28 + 880) == 1 )
      {
        v63 = v25;
        v64 = v2;
        v65 = v26;
        sub_141654790(&v74, &v63);
        v2 = *((_QWORD *)&v74 + 1);
        v6 = (__int64 (__fastcall **)())v74;
        v62 = v75[0];
        v29 = -1;
        goto LABEL_70;
      }
      if ( v26 )
      {
        v63 = v25;
        v64 = v2;
        v65 = v26;
        sub_141654790(&v74, &v63);
        v2 = *((_QWORD *)&v74 + 1);
        v6 = (__int64 (__fastcall **)())v74;
        v62 = v75[0];
        v46 = v80;
        *(_WORD *)((char *)v80 + 1745) = 0;
        v29 = v46[110];
        sub_1418F44E0(&v57, (const __m128i *)(v46 + 111), 0x350u);
        goto LABEL_70;
      }
      if ( v25 )
        sub_140001660(v2, v25, 1);
    }
    (*(void (__fastcall **)(char *, _QWORD, unsigned __int64))(v76 + 32))(v78, *((_QWORD *)&v76 + 1), v77);
    v3 = v80;
    if ( v12 > 0x3F )
      goto LABEL_57;
  }
  if ( *v73 != 2 && v80[189] )
    sub_1401F9370((_DWORD)v80 + 1512, (unsigned int)aStreamReadErro, 17, (unsigned int)&unk_141A49D3A, 12);
  LOBYTE(v17) = 41;
  v2 = sub_1416793A0(v17, aUpstreamTransl, 56);
LABEL_69:
  v29 = -1;
  v6 = nullptr;
LABEL_70:
  (*(void (__fastcall **)(char *, _QWORD, unsigned __int64))(v76 + 32))(v78, *((_QWORD *)&v76 + 1), v77);
  v42 = v80;
  if ( *((_BYTE *)v80 + 1745) )
  {
LABEL_94:
    v79 = (const __m128i *)v42[211];
    sub_140CE7150();
    sub_140001660(v79, 24, 8);
    if ( *((_BYTE *)v80 + 1746) )
      goto LABEL_95;
    goto LABEL_96;
  }
LABEL_71:
  if ( *((_BYTE *)v42 + 1746) )
LABEL_95:
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v80[212] + 32))(v80 + 215, v80[213], v80[214]);
LABEL_96:
  if ( *((_BYTE *)v80 + 1745) )
  {
    v50 = v80[208];
    if ( !v50 || (v51 = v80, sub_140001660(v80[209], v50, 1), *((_BYTE *)v51 + 1745)) )
      sub_140D1C7D0(v80 + 110);
  }
  v3 = v80;
  *((_BYTE *)v80 + 1745) = 0;
LABEL_101:
  *(_WORD *)((char *)v3 + 1745) = 0;
LABEL_102:
  v60 = v62;
  sub_1418F44E0(v55, &v57, 0x350u);
  *v70 = 1;
  if ( v29 == -3 )
  {
LABEL_103:
    result = v69;
    *(_QWORD *)v69 = 2;
  }
  else
  {
    v59 = v60;
    sub_1418F44E0(v56, v55, 0x350u);
    if ( v29 == -2 )
    {
      if ( !*v3 && *v72 != -1 )
        sub_140CE6F20(v72);
      *v80 = 2;
      result = v69;
      *(_QWORD *)v69 = 0;
    }
    else
    {
      v79 = (const __m128i *)v29;
      v57.m128i_i64[0] = (__int64)v6;
      v57.m128i_i64[1] = v2;
      v58 = v59;
      if ( !*v3 && *v72 != -1 )
        sub_140CE6F20(v72);
      v53 = (__m128i *)v80;
      *v80 = 0;
      v53->m128i_i64[1] = (__int64)v79;
      sub_1418F44E0(v53 + 1, v56, 0x350u);
      v54 = v58;
      result = v69;
      *(__m128i *)(v69 + 8) = v57;
      *(_OWORD *)(result + 24) = v54;
      *(_QWORD *)result = 1;
    }
  }
  return result;
}
