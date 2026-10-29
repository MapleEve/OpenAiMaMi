// win 1.2.7 | module src/core/relay/proxy_stream.rs | ea 0x140dc42e0 | name sub_140DC42E0
// win 1.2.7 | module src/core/relay/proxy_stream.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DC42E0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rax
  bool v6; // zf
  __int64 (__fastcall **v7)(); // rdi
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rax
  const __m128i *v17; // rdi
  unsigned __int64 v18; // rax
  const __m128i *v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r14
  bool v22; // cf
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 *v25; // r12
  unsigned __int64 v26; // r14
  void *v27; // rdx
  __int64 v28; // rax
  __int64 *v29; // r8
  _OWORD *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rdi
  _BYTE *v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 *v44; // rax
  __int64 v45; // rax
  void *v46; // rdx
  __int64 v47; // rcx
  __int64 *v48; // rax
  const __m128i *v49; // rsi
  unsigned __int64 v50; // rdi
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 *v55; // r14
  __int64 result; // rax
  __m128i *v57; // rcx
  __int128 v58; // xmm1
  __m128i v59[53]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v60[53]; // [rsp+390h] [rbp+310h] BYREF
  __m128i v61; // [rsp+6E0h] [rbp+660h] BYREF
  __int128 v62; // [rsp+6F0h] [rbp+670h]
  __int128 v63; // [rsp+A30h] [rbp+9B0h]
  __int128 v64; // [rsp+A40h] [rbp+9C0h]
  __int128 v65; // [rsp+A50h] [rbp+9D0h]
  __int128 v66; // [rsp+A60h] [rbp+9E0h]
  void *v67; // [rsp+A78h] [rbp+9F8h] BYREF
  unsigned __int64 v68; // [rsp+A80h] [rbp+A00h]
  __int64 v69; // [rsp+A88h] [rbp+A08h]
  __int128 v70; // [rsp+A90h] [rbp+A10h] BYREF
  __int64 v71; // [rsp+AA0h] [rbp+A20h]
  __int64 v72; // [rsp+AB0h] [rbp+A30h] BYREF
  __int64 v73; // [rsp+AB8h] [rbp+A38h]
  _BYTE *v74; // [rsp+AC0h] [rbp+A40h]
  _DWORD *v75; // [rsp+AC8h] [rbp+A48h]
  __int128 v76; // [rsp+AD0h] [rbp+A50h] BYREF
  _OWORD v77[2]; // [rsp+AE0h] [rbp+A60h]
  __int128 v78; // [rsp+B00h] [rbp+A80h] BYREF
  unsigned __int64 v79; // [rsp+B10h] [rbp+A90h]
  char v80[8]; // [rsp+B18h] [rbp+A98h] BYREF
  _OWORD *v81; // [rsp+B20h] [rbp+AA0h]
  __int64 *v82; // [rsp+B28h] [rbp+AA8h]
  __m128i *v83; // [rsp+B30h] [rbp+AB0h]
  __int64 *v84; // [rsp+B40h] [rbp+AC0h]
  char v85; // [rsp+B4Fh] [rbp+ACFh]
  __int64 v86; // [rsp+B50h] [rbp+AD0h]

  v86 = -2;
  v4 = a2;
  v73 = a1;
  v5 = *a2;
  v6 = *a2 == 1;
  v84 = a2;
  if ( v6 )
  {
    v7 = (__int64 (__fastcall **)())(a2 + 218);
    v8 = *((unsigned __int8 *)a2 + 1744);
    v75 = a2 + 1;
    switch ( v8 )
    {
      case 0LL:
        goto LABEL_8;
      case 1LL:
        sub_1419393E0(&off_141A47298);
      case 2LL:
        sub_141939400(&off_141A47298);
      case 3LL:
        v74 = a2 + 218;
        v9 = (_QWORD *)a2[217];
        goto LABEL_46;
    }
  }
  if ( v5 )
    goto LABEL_119;
  v10 = a2[1];
  *a2 = 2;
  if ( v10 >= 3 )
    sub_141939280("internal error: entered unreachable code", 40, &off_141A49BE0);
  if ( v10 == -2 )
LABEL_119:
    sub_141939280(aUnfoldMustNotB, 63, &off_141A4E710);
  *a2 = 1;
  *((_OWORD *)a2 + 54) = *(_OWORD *)(a2 + 219);
  v7 = (__int64 (__fastcall **)())(a2 + 218);
  *((_BYTE *)a2 + 1744) = 0;
  v75 = a2 + 1;
LABEL_8:
  *(_WORD *)((char *)a2 + 1745) = 0;
  v11 = a2[1];
  v74 = v7;
  if ( v11 == -1 )
  {
    v31 = -2;
    goto LABEL_105;
  }
  v12 = a3;
  *(_WORD *)((char *)a2 + 1745) = 257;
  a2[110] = v11;
  sub_1418F44E0((__m128i *)(a2 + 111), (const __m128i *)a2 + 1, 0x350u);
  if ( v4[214] )
    goto LABEL_10;
  v9 = v4 + 211;
  v4[217] = (__int64)(v4 + 211);
  a3 = v12;
LABEL_46:
  sub_14036AA40(&v76, *v9, a3);
  if ( (_QWORD)v76 == 2 )
  {
    *v74 = 3;
    goto LABEL_107;
  }
  v65 = *(_OWORD *)((char *)v77 + 8);
  if ( (_DWORD)v76 != 1 )
  {
    v40 = v84 + 110;
    sub_140D73600(&v76, v84 + 110, v84[209], v84[210]);
    if ( (_QWORD)v76 == -1 )
    {
      v3 = *((_QWORD *)&v76 + 1);
LABEL_78:
      v31 = -1;
      v7 = nullptr;
      v44 = v84;
      if ( !*((_BYTE *)v84 + 1745) )
        goto LABEL_71;
      goto LABEL_94;
    }
    v71 = *(_QWORD *)&v77[0];
    v70 = v76;
    v41 = (char *)v40 + 782;
    if ( *v40 == 2 )
      v41 = (char *)v40 + 485;
    if ( *v41 )
    {
LABEL_93:
      v85 = 0;
      sub_141654790(&v76, &v70);
      v3 = *((_QWORD *)&v76 + 1);
      v7 = (__int64 (__fastcall **)())v76;
      v66 = v77[0];
      v31 = -1;
      v44 = v84;
      if ( !*((_BYTE *)v84 + 1745) )
        goto LABEL_71;
      goto LABEL_94;
    }
    if ( (unsigned int)*v40 == 2 )
    {
      v42 = v84[150];
      if ( v84[148] == -1 )
        v43 = 0;
      else
        v43 = v84[149];
      v85 = 1;
      sub_140163AC0(&v76, v43, v42);
      v85 = 1;
      sub_140E25810(&v78, v84 + 111, &v76);
    }
    else if ( *((_BYTE *)v84 + 1662) )
    {
      *(_QWORD *)&v78 = 0;
      *((_QWORD *)&v78 + 1) = 1;
      v79 = 0;
    }
    else
    {
      v85 = 1;
      sub_140E4D8E0(
        (unsigned int)&v78,
        (_DWORD)v40,
        (unsigned int)"stream_truncated",
        16,
        (__int64)"Upstream Anthropic stream ended before message_stop",
        51,
        0);
    }
    v49 = *((const __m128i **)&v78 + 1);
    v50 = v79;
    v51 = v71;
    if ( v79 > (__int64)v70 - v71 )
    {
      v83 = *((__m128i **)&v78 + 1);
      sub_14190D590((unsigned int)&v70, v71, v79, 1, 1);
      v51 = v71;
      v49 = v83;
    }
    else if ( !v79 )
    {
      goto LABEL_91;
    }
    sub_1418F44E0((__m128i *)(v51 + *((_QWORD *)&v70 + 1)), v49, v50);
LABEL_91:
    v71 = v50 + v51;
    if ( (_QWORD)v78 )
      sub_140001660(v49, v78, 1);
    goto LABEL_93;
  }
  if ( !*((_QWORD *)&v76 + 1) )
  {
    v45 = 5LL * (v84[110] != 2) + 4;
    v46 = &unk_141A49D4A;
    if ( v84[110] == 2 )
      v46 = &unk_141A49D46;
    v67 = v46;
    v68 = v45;
    v72 = sub_14122E700(*(_QWORD *)&v77[0]);
    *(_QWORD *)&v76 = &v67;
    *((_QWORD *)&v76 + 1) = sub_140186EE0;
    *(_QWORD *)&v77[0] = &v72;
    *((_QWORD *)&v77[0] + 1) = sub_14122E940;
    sub_1416ABFD0(&v78, &unk_141A47323, &v76);
    sub_140D19140(v72);
    v76 = v78;
    *(_QWORD *)&v77[0] = v79;
    LOBYTE(v47) = 41;
    v39 = sub_141156620(v47, &v76);
    goto LABEL_76;
  }
  v82 = *((__int64 **)&v76 + 1);
  v83 = *(__m128i **)&v77[0];
  v32 = v84[212];
  v33 = v84[213];
  v81 = v84 + 214;
  (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v32 + 32))(v84 + 215, v33, v84[214], v84);
  v4 = v84;
  *((_BYTE *)v84 + 1746) = 1;
  v4[212] = (__int64)v82;
  v4[213] = (__int64)v83;
  *v81 = v65;
  v34 = v4[214];
  v35 = v4[108];
  v36 = v4[216];
  v37 = 0;
  v22 = v35 < v36;
  v38 = v35 - v36;
  if ( !v22 )
    v37 = v38;
  if ( v34 > v37 )
  {
    if ( *((_DWORD *)v4 + 220) != 2 && v84[189] )
      sub_1401F9370((_DWORD)v84 + 1512, (unsigned int)aStreamReadErro, 17, (unsigned int)&unk_141A49D3A, 12);
    LOBYTE(v36) = 41;
    v39 = sub_1416793A0(v36, aUpstreamTransl_0, 59);
LABEL_76:
    v3 = v39;
    goto LABEL_78;
  }
  v4[216] = v34 + v36;
LABEL_10:
  v82 = v4 + 110;
  v13 = v4 + 212;
  v83 = (__m128i *)(v4 + 208);
  v14 = 0;
  v81 = (_OWORD *)((char *)v4 + 782);
  while ( 1 )
  {
    v15 = v4[214];
    if ( !v15 )
    {
LABEL_57:
      v66 = 0;
      v31 = v4[110];
      sub_1418F44E0(&v61, (const __m128i *)(v4 + 111), 0x350u);
      *(_WORD *)((char *)v4 + 1745) = 0;
      v3 = 1;
      v7 = off_141A422B8;
      goto LABEL_106;
    }
    ++v14;
    v16 = 0;
    while ( *(_BYTE *)(v4[213] + v16) != 10 )
    {
      if ( v15 == ++v16 )
        goto LABEL_17;
    }
    v15 = v16 + 1;
LABEL_17:
    sub_1416534E0(&v78, v13, v15);
    v17 = *((const __m128i **)&v78 + 1);
    v18 = v79;
    if ( v79 )
    {
      v3 = v79 - 1;
      v19 = nullptr;
      if ( *(_BYTE *)(*((_QWORD *)&v78 + 1) + v79 - 1) == 10 )
        v19 = *((const __m128i **)&v78 + 1);
    }
    else
    {
      v19 = nullptr;
    }
    if ( !v19 )
      v3 = v79;
    v20 = v84[109];
    v21 = v84[210];
    v22 = v20 < v21;
    v23 = v20 - v21;
    v24 = 0;
    if ( !v22 )
      v24 = v23;
    if ( v3 > v24 )
      break;
    if ( v19 )
      v17 = v19;
    if ( v3 > v83->m128i_i64[0] - v21 )
    {
      sub_14190D590((_DWORD)v83, v21, v3, 1, 1);
      v25 = v84;
      v21 = v84[210];
LABEL_31:
      sub_1418F44E0((__m128i *)(v21 + v25[209]), v17, v3);
      v18 = v79;
      goto LABEL_32;
    }
    v25 = v84;
    if ( v3 )
      goto LABEL_31;
LABEL_32:
    v26 = v3 + v21;
    v25[210] = v26;
    if ( v18 && *(_BYTE *)(*((_QWORD *)&v78 + 1) + v18 - 1) == 10 )
    {
      sub_140D73600(&v76, v82, v84[209], v26);
      v3 = *((_QWORD *)&v76 + 1);
      v27 = (void *)v76;
      if ( (_QWORD)v76 == -1 )
        goto LABEL_69;
      v28 = *(_QWORD *)&v77[0];
      v29 = v84;
      v84[210] = 0;
      v30 = (_OWORD *)((char *)v29 + 485);
      if ( *((_DWORD *)v29 + 220) != 2 )
        v30 = v81;
      if ( *((_BYTE *)v30 + 880) == 1 )
      {
        v67 = v27;
        v68 = v3;
        v69 = v28;
        sub_141654790(&v76, &v67);
        v3 = *((_QWORD *)&v76 + 1);
        v7 = (__int64 (__fastcall **)())v76;
        v66 = v77[0];
        v31 = -1;
        goto LABEL_70;
      }
      if ( v28 )
      {
        v67 = v27;
        v68 = v3;
        v69 = v28;
        sub_141654790(&v76, &v67);
        v3 = *((_QWORD *)&v76 + 1);
        v7 = (__int64 (__fastcall **)())v76;
        v66 = v77[0];
        v48 = v84;
        *(_WORD *)((char *)v84 + 1745) = 0;
        v31 = v48[110];
        sub_1418F44E0(&v61, (const __m128i *)(v48 + 111), 0x350u);
        goto LABEL_70;
      }
      if ( v27 )
        sub_140001660(v3, v27, 1);
    }
    (*(void (__fastcall **)(char *, _QWORD, unsigned __int64))(v78 + 32))(v80, *((_QWORD *)&v78 + 1), v79);
    v4 = v84;
    if ( v14 > 0x3F )
      goto LABEL_57;
  }
  if ( *(_DWORD *)v82 != 2 && v84[189] )
    sub_1401F9370((_DWORD)v84 + 1512, (unsigned int)aStreamReadErro, 17, (unsigned int)&unk_141A49D3A, 12);
  LOBYTE(v19) = 41;
  v3 = sub_1416793A0(v19, aUpstreamTransl, 56);
LABEL_69:
  v31 = -1;
  v7 = nullptr;
LABEL_70:
  (*(void (__fastcall **)(char *, _QWORD, unsigned __int64))(v78 + 32))(v80, *((_QWORD *)&v78 + 1), v79);
  v44 = v84;
  if ( !*((_BYTE *)v84 + 1745) )
  {
LABEL_71:
    if ( *((_BYTE *)v44 + 1746) )
      goto LABEL_99;
    goto LABEL_100;
  }
LABEL_94:
  v52 = v44[211];
  v83 = *(__m128i **)v52;
  v81 = (_OWORD *)v52;
  v82 = *(__int64 **)(v52 + 8);
  if ( *v82 )
    ((void (__fastcall *)(__m128i *))*v82)(v83);
  v53 = v82[1];
  if ( v53 )
    sub_140001660(v83, v53, v82[2]);
  sub_140001660(v81, 16, 8);
  if ( *((_BYTE *)v84 + 1746) )
LABEL_99:
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v84[212] + 32))(v84 + 215, v84[213], v84[214]);
LABEL_100:
  if ( *((_BYTE *)v84 + 1745) )
  {
    v54 = v84[208];
    if ( !v54 || (v55 = v84, sub_140001660(v84[209], v54, 1), *((_BYTE *)v55 + 1745)) )
      sub_140D1C7D0(v84 + 110);
  }
  v4 = v84;
  *((_BYTE *)v84 + 1745) = 0;
LABEL_105:
  *(_WORD *)((char *)v4 + 1745) = 0;
LABEL_106:
  v64 = v66;
  sub_1418F44E0(v59, &v61, 0x350u);
  *v74 = 1;
  if ( v31 == -3 )
  {
LABEL_107:
    result = v73;
    *(_QWORD *)v73 = 2;
  }
  else
  {
    v63 = v64;
    sub_1418F44E0(v60, v59, 0x350u);
    if ( v31 == -2 )
    {
      if ( !*v4 && *v75 != -1 )
        sub_140CE6D90(v75);
      *v84 = 2;
      result = v73;
      *(_QWORD *)v73 = 0;
    }
    else
    {
      v83 = (__m128i *)v31;
      v61.m128i_i64[0] = (__int64)v7;
      v61.m128i_i64[1] = v3;
      v62 = v63;
      if ( !*v4 && *v75 != -1 )
        sub_140CE6D90(v75);
      v57 = (__m128i *)v84;
      *v84 = 0;
      v57->m128i_i64[1] = (__int64)v83;
      sub_1418F44E0(v57 + 1, v60, 0x350u);
      v58 = v62;
      result = v73;
      *(__m128i *)(v73 + 8) = v61;
      *(_OWORD *)(result + 24) = v58;
      *(_QWORD *)result = 1;
    }
  }
  return result;
}
