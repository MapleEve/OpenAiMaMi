// module: codexmate_lib/core/relay/health_check
// addr: 0x140665920
// name: build_openai_headers
// win 1.2.3 | = mac codexmate_lib::core::relay::health_check::build_openai_headers | 跨平台字符串签名匹配(名↔函数一致)
_OWORD *__fastcall build_openai_headers(_OWORD *a1, __int64 a2, char a3)
{
  __int128 v6; // kr00_16
  __int64 i; // rax
  unsigned __int8 v8; // cl
  char v9; // bl
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+40h] [rbp-40h]
  __m256i v16; // [rsp+50h] [rbp-30h]
  __int128 v17; // [rsp+70h] [rbp-10h]
  __int128 v18; // [rsp+80h] [rbp+0h]
  __int128 v19; // [rsp+90h] [rbp+10h]
  __int128 v20; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v21; // [rsp+B0h] [rbp+30h]
  __int64 v22; // [rsp+C0h] [rbp+40h]
  __int128 v23; // [rsp+C8h] [rbp+48h] BYREF
  __int128 v24; // [rsp+D8h] [rbp+58h]
  __int64 v25; // [rsp+E8h] [rbp+68h]
  __int128 v26; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v27; // [rsp+100h] [rbp+80h] BYREF
  __int64 v28; // [rsp+110h] [rbp+90h]
  __int128 v29; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v30; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v31; // [rsp+140h] [rbp+C0h]
  char v32; // [rsp+157h] [rbp+D7h] BYREF
  __int64 v33; // [rsp+158h] [rbp+D8h]

  v33 = -2;
  WORD4(v18) = 0;
  *((_QWORD *)&v17 + 1) = 2;
  *(_QWORD *)&v18 = 0;
  *((_QWORD *)&v15 + 1) = 0;
  v16.m256i_i64[0] = 8;
  *(_OWORD *)&v16.m256i_u64[1] = 0;
  v16.m256i_i64[3] = 8;
  *(_QWORD *)&v17 = 0;
  *(_QWORD *)&v14 = 0;
  v21 = xmmword_141766788;
  v20 = xmmword_141766778;
  *(_QWORD *)&v29 = off_14177A978;
  *((_QWORD *)&v29 + 1) = aApplicationJso;
  v30 = 0x10u;
  LOBYTE(v31) = 0;
  sub_1405A0840(&v23, &v14, &v20, &v29);
  if ( (_BYTE)v25 == 0xFF )
    sub_1416C3060(
      (unsigned int)aSizeOverflowsM_0,
      23,
      (unsigned int)&v32,
      (unsigned int)&unk_1417693B8,
      (__int64)&off_1417646D0);
  v28 = v25;
  v27 = v24;
  v26 = v23;
  if ( (_BYTE)v25 != 2 )
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v26 + 32))((char *)&v27 + 8, *((_QWORD *)&v26 + 1), v27);
  *(_QWORD *)&v29 = a2 + 72;
  *((_QWORD *)&v29 + 1) = sub_1400015F0;
  sub_14149C0F0(&v23, &unk_14177C290, &v29);
  v6 = v23;
  if ( (_QWORD)v24 )
  {
    for ( i = 0; (_QWORD)v24 != i; ++i )
    {
      v8 = *(_BYTE *)(*((_QWORD *)&v23 + 1) + i);
      if ( v8 > 0x1Fu )
      {
        if ( v8 == 127 )
          goto LABEL_15;
      }
      else if ( v8 != 9 )
      {
        goto LABEL_15;
      }
    }
  }
  v19 = v23;
  sub_1414464F0(&v20, *((_QWORD *)&v23 + 1), v24);
  LOBYTE(v22) = 0;
  v28 = v22;
  v27 = v21;
  v26 = v20;
  v30 = xmmword_141767D00;
  v29 = xmmword_141767CF0;
  sub_1405A0840(&v23, &v14, &v29, &v26);
  if ( (_BYTE)v25 == 0xFF )
    sub_1416C3060(
      (unsigned int)aSizeOverflowsM_0,
      23,
      (unsigned int)&v32,
      (unsigned int)&unk_1417693B8,
      (__int64)&off_1417646D0);
  v31 = v25;
  v30 = v24;
  v29 = v23;
  if ( (_BYTE)v25 != 2 )
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v29 + 32))((char *)&v30 + 8, *((_QWORD *)&v29 + 1), v30);
  v6 = v19;
LABEL_15:
  if ( (_QWORD)v6 )
    sub_140001660(*((_QWORD *)&v6 + 1), v6, 1);
  if ( a3 )
  {
    v21 = 0;
    v20 = 0;
    *(_QWORD *)&v29 = off_14177A978;
    *((_QWORD *)&v29 + 1) = aTextEventStrea;
    v30 = 0x11u;
    LOBYTE(v31) = 0;
    sub_1405A0840(&v23, &v14, &v20, &v29);
    if ( (_BYTE)v25 == 0xFF )
      sub_1416C3060(
        (unsigned int)aSizeOverflowsM_0,
        23,
        (unsigned int)&v32,
        (unsigned int)&unk_1417693B8,
        (__int64)&off_1417646D0);
    v28 = v25;
    v27 = v24;
    v26 = v23;
    if ( (_BYTE)v25 != 2 )
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v26 + 32))((char *)&v27 + 8, *((_QWORD *)&v26 + 1), v27);
    v21 = xmmword_14177C2B0;
    v20 = xmmword_14177C2A0;
    *(_QWORD *)&v29 = off_14177A978;
    *((_QWORD *)&v29 + 1) = aIdentity;
    v30 = 8u;
    LOBYTE(v31) = 0;
    sub_1405A0840(&v23, &v14, &v20, &v29);
    if ( (_BYTE)v25 == 0xFF )
      sub_1416C3060(
        (unsigned int)aSizeOverflowsM_0,
        23,
        (unsigned int)&v32,
        (unsigned int)&unk_1417693B8,
        (__int64)&off_1417646D0);
    v28 = v25;
    v27 = v24;
    v26 = v23;
    if ( (_BYTE)v25 != 2 )
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v26 + 32))((char *)&v27 + 8, *((_QWORD *)&v26 + 1), v27);
  }
  v9 = *(_BYTE *)(a2 + 230);
  if ( v9 == 1 )
  {
    sub_141441FB0(&v20, aOriginator, 10);
    *(_QWORD *)&v29 = off_14177A978;
    *((_QWORD *)&v29 + 1) = aCodexCliRs;
    v30 = 0xCu;
    LOBYTE(v31) = 0;
    sub_1405A0840(&v23, &v14, &v20, &v29);
    if ( (_BYTE)v25 == 0xFF )
      sub_1416C3060(
        (unsigned int)aSizeOverflowsM_0,
        23,
        (unsigned int)&v32,
        (unsigned int)&unk_1417693B8,
        (__int64)&off_1417646D0);
    v28 = v25;
    v27 = v24;
    v26 = v23;
    if ( (_BYTE)v25 != 2 )
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v26 + 32))((char *)&v27 + 8, *((_QWORD *)&v26 + 1), v27);
    v21 = xmmword_1417646A8;
    v20 = xmmword_141764698;
    *(_QWORD *)&v29 = off_14177A978;
    *((_QWORD *)&v29 + 1) = aCodexCliRs0800;
    v30 = 0x1Au;
    LOBYTE(v31) = 0;
    sub_1405A0840(&v23, &v14, &v20, &v29);
    if ( (_BYTE)v25 == 0xFF )
      sub_1416C3060(
        (unsigned int)aSizeOverflowsM_0,
        23,
        (unsigned int)&v32,
        (unsigned int)&unk_1417693B8,
        (__int64)&off_1417646D0);
    v28 = v25;
    v27 = v24;
    v26 = v23;
    if ( (_BYTE)v25 != 2 )
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v26 + 32))((char *)&v27 + 8, *((_QWORD *)&v26 + 1), v27);
  }
  apply_extra_headers((__int64)&v14, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), v9 == 1);
  a1[5] = v18;
  a1[4] = v17;
  v10 = v14;
  v11 = v15;
  v12 = *(_OWORD *)v16.m256i_i8;
  a1[3] = *(_OWORD *)&v16.m256i_u64[2];
  a1[2] = v12;
  a1[1] = v11;
  *a1 = v10;
  return a1;
}