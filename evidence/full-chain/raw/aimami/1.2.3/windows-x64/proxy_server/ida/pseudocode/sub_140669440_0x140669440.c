// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140669440
// name: sub_140669440
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
_OWORD *__fastcall sub_140669440(_OWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 i; // rax
  unsigned __int8 v7; // cl
  __int128 v8; // kr00_16
  __int64 j; // rax
  unsigned __int8 v10; // cl
  void (__fastcall *v11)(char *, _QWORD, _QWORD); // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 k; // rax
  unsigned __int8 v23; // cl
  void (__fastcall *v24)(char *, _QWORD, _QWORD); // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  _OWORD v29[2]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v30[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v31; // [rsp+78h] [rbp-8h]
  char v32[8]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v33; // [rsp+88h] [rbp+8h]
  __int64 v34; // [rsp+98h] [rbp+18h]
  __int128 v35; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v36; // [rsp+B0h] [rbp+30h]
  __m256i v37; // [rsp+C0h] [rbp+40h]
  __int128 v38; // [rsp+E0h] [rbp+60h]
  __int128 v39; // [rsp+F0h] [rbp+70h]
  __int128 v40; // [rsp+100h] [rbp+80h] BYREF
  __int128 v41; // [rsp+110h] [rbp+90h]
  __int128 v42; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v43; // [rsp+130h] [rbp+B0h]
  __int64 v44; // [rsp+140h] [rbp+C0h]
  __int128 v45; // [rsp+150h] [rbp+D0h]
  __int128 v46; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v47; // [rsp+178h] [rbp+F8h] BYREF
  __int128 v48; // [rsp+188h] [rbp+108h]
  unsigned __int64 v49; // [rsp+198h] [rbp+118h]
  __int64 v50; // [rsp+1A0h] [rbp+120h]
  __int128 v51; // [rsp+1A8h] [rbp+128h]
  __int64 v52; // [rsp+1B8h] [rbp+138h]
  __int128 v53; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v54; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v55; // [rsp+1E0h] [rbp+160h]
  __int128 v56; // [rsp+1F0h] [rbp+170h]
  _BYTE v57[40]; // [rsp+200h] [rbp+180h] BYREF
  __int64 v58; // [rsp+228h] [rbp+1A8h]
  __int64 v59; // [rsp+230h] [rbp+1B0h]
  __int128 v60; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v61; // [rsp+250h] [rbp+1D0h] BYREF
  unsigned __int64 v62; // [rsp+260h] [rbp+1E0h]
  char v63; // [rsp+26Dh] [rbp+1EDh]
  char v64; // [rsp+26Eh] [rbp+1EEh]
  char v65; // [rsp+26Fh] [rbp+1EFh] BYREF
  __int64 v66; // [rsp+270h] [rbp+1F0h]

  v66 = -2;
  WORD4(v39) = 0;
  *((_QWORD *)&v38 + 1) = 2;
  *(_QWORD *)&v39 = 0;
  *((_QWORD *)&v36 + 1) = 0;
  v37.m256i_i64[0] = 8;
  *(_OWORD *)&v37.m256i_u64[1] = 0;
  v37.m256i_i64[3] = 8;
  *(_QWORD *)&v38 = 0;
  *(_QWORD *)&v35 = 0;
  v54 = xmmword_141766788;
  v53 = xmmword_141766778;
  *(_QWORD *)v57 = off_14177A978;
  *(_QWORD *)&v57[8] = aApplicationJso;
  *(_OWORD *)&v57[16] = 0x10u;
  v57[32] = 0;
  sub_1405A0840(&v47, &v35, &v53, v57);
  if ( (_BYTE)v49 == 0xFF )
    sub_1416C3060(
      (unsigned int)aSizeOverflowsM_0,
      23,
      (unsigned int)&v65,
      (unsigned int)&unk_1417693B8,
      (__int64)&off_1417646D0);
  v62 = v49;
  v61 = v48;
  v60 = v47;
  if ( (_BYTE)v49 != 2 )
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v60 + 32))((char *)&v61 + 8, *((_QWORD *)&v60 + 1), v61);
  if ( *(_BYTE *)(a2 + 230) == 2 )
  {
    v4 = *(_QWORD *)(a2 + 80);
    v5 = *(_QWORD *)(a2 + 88);
    if ( v5 )
    {
      for ( i = 0; v5 != i; ++i )
      {
        v7 = *(_BYTE *)(v4 + i);
        if ( v7 > 0x1Fu )
        {
          if ( v7 == 127 )
            goto LABEL_22;
        }
        else if ( v7 != 9 )
        {
          goto LABEL_22;
        }
      }
    }
    sub_1414464F0(&v42, v4, v5);
    LOBYTE(v44) = 0;
    v55 = v44;
    v54 = v43;
    v53 = v42;
    v64 = 1;
    sub_141441FB0(v30, aXApiKey_0, 9);
    *(_QWORD *)&v57[32] = v44;
    *(_OWORD *)&v57[16] = v43;
    *(_OWORD *)v57 = v42;
    v64 = 0;
    sub_1405A0840(&v47, &v35, v30, v57);
    if ( (_BYTE)v49 == 0xFF )
    {
      v64 = 0;
      sub_1416C3060(
        (unsigned int)aSizeOverflowsM_0,
        23,
        (unsigned int)&v65,
        (unsigned int)&unk_1417693B8,
        (__int64)&off_1417646D0);
    }
    v62 = v49;
    v61 = v48;
    v60 = v47;
    if ( (_BYTE)v49 != 2 )
    {
      v11 = *(void (__fastcall **)(char *, _QWORD, _QWORD))(v60 + 32);
      v64 = 0;
      v11((char *)&v61 + 8, *((_QWORD *)&v60 + 1), v61);
    }
LABEL_22:
    sub_141441FB0(&v53, aAnthropicVersi, 17);
    *(_QWORD *)v57 = off_14177A978;
    *(_QWORD *)&v57[8] = a20230601;
    *(_OWORD *)&v57[16] = 0xAu;
    v57[32] = 0;
    sub_1405A0840(&v47, &v35, &v53, v57);
    if ( (_BYTE)v49 == 0xFF )
      sub_1416C3060(
        (unsigned int)aSizeOverflowsM_0,
        23,
        (unsigned int)&v65,
        (unsigned int)&unk_1417693B8,
        (__int64)&off_1417646D0);
    v62 = v49;
    v61 = v48;
    v60 = v47;
    if ( (_BYTE)v49 != 2 )
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v60 + 32))((char *)&v61 + 8, *((_QWORD *)&v60 + 1), v61);
  }
  else
  {
    *(_QWORD *)v57 = a2 + 72;
    *(_QWORD *)&v57[8] = sub_1400015F0;
    sub_14149C0F0(&v47, &unk_14177C290, v57);
    v8 = v47;
    if ( (_QWORD)v48 )
    {
      for ( j = 0; (_QWORD)v48 != j; ++j )
      {
        v10 = *(_BYTE *)(*((_QWORD *)&v47 + 1) + j);
        if ( v10 > 0x1Fu )
        {
          if ( v10 == 127 )
            goto LABEL_29;
        }
        else if ( v10 != 9 )
        {
          goto LABEL_29;
        }
      }
    }
    v56 = v47;
    sub_1414464F0(&v53, *((_QWORD *)&v47 + 1), v48);
    LOBYTE(v55) = 0;
    v62 = v55;
    v61 = v54;
    v60 = v53;
    *(_OWORD *)&v57[16] = xmmword_141767D00;
    *(_OWORD *)v57 = xmmword_141767CF0;
    sub_1405A0840(&v47, &v35, v57, &v60);
    if ( (_BYTE)v49 == 0xFF )
      sub_1416C3060(
        (unsigned int)aSizeOverflowsM_0,
        23,
        (unsigned int)&v65,
        (unsigned int)&unk_1417693B8,
        (__int64)&off_1417646D0);
    *(_QWORD *)&v57[32] = v49;
    *(_OWORD *)&v57[16] = v48;
    *(_OWORD *)v57 = v47;
    if ( (_BYTE)v49 != 2 )
      (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v57 + 32LL))(
        &v57[24],
        *(_QWORD *)&v57[8],
        *(_QWORD *)&v57[16]);
    v8 = v56;
LABEL_29:
    if ( (_QWORD)v8 )
      sub_140001660(*((_QWORD *)&v8 + 1), v8, 1);
  }
  v12 = *(_QWORD *)(a2 + 152);
  v13 = *(_QWORD *)(a2 + 160);
  sub_14033BC10(v12, v13);
  if ( v14 )
  {
    *(_QWORD *)&v47 = v12;
    *((_QWORD *)&v47 + 1) = v13;
    v48 = 0;
    v49 = v12;
    v50 = v13;
    sub_1408A5B40(v32, &v47);
    if ( v32[0] )
    {
      sub_1405ADBE0(v32);
    }
    else
    {
      v16 = 0;
      v17 = v33;
      LOBYTE(v15) = (_QWORD)v33 != 0;
      if ( (_QWORD)v33 )
        v17 = v34;
      LOBYTE(v16) = (_QWORD)v33 != 0;
      v47 = v16;
      v48 = v33;
      v49 = v16;
      v50 = 0;
      v51 = v33;
      v52 = v17;
      while ( 1 )
      {
        sub_140308C30(v57, &v47, v17, v15);
        if ( !*(_QWORD *)v57 || *(_QWORD *)(*(_QWORD *)v57 + 24LL * *(_QWORD *)&v57[16] + 360) == -1 )
          break;
        *(_QWORD *)&v56 = *(_QWORD *)(*(_QWORD *)v57 + 24LL * *(_QWORD *)&v57[16] + 360);
        v18 = *(_QWORD *)(*(_QWORD *)v57 + 24LL * *(_QWORD *)&v57[16] + 368);
        v19 = *(_QWORD *)(*(_QWORD *)v57 + 24LL * *(_QWORD *)&v57[16] + 376);
        v20 = *(_OWORD *)(*(_QWORD *)v57 + 32LL * *(_QWORD *)&v57[16]);
        v41 = *(_OWORD *)(*(_QWORD *)v57 + 32LL * *(_QWORD *)&v57[16] + 16);
        v40 = v20;
        *((_QWORD *)&v56 + 1) = v18;
        sub_141441C10(&v60, v18, v19);
        v21 = v41;
        if ( (_BYTE)v40 != 3 )
          v21 = 0;
        *(_OWORD *)v57 = v60;
        *(_OWORD *)&v57[16] = v61;
        *(_QWORD *)&v57[32] = v62;
        v58 = v21;
        v59 = *((_QWORD *)&v41 + 1);
        if ( v60 & 1 | ((_BYTE)v40 != 3) )
        {
          if ( (v60 & 1) == 0 && *(_QWORD *)&v57[8] )
            (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)&v57[8] + 32LL))(
              &v57[32],
              *(_QWORD *)&v57[16],
              *(_QWORD *)&v57[24]);
          goto LABEL_56;
        }
        v46 = *(_OWORD *)&v57[24];
        v45 = *(_OWORD *)&v57[8];
        if ( *((_QWORD *)&v41 + 1) )
        {
          for ( k = 0; *((_QWORD *)&v41 + 1) != k; ++k )
          {
            v23 = *(_BYTE *)(v41 + k);
            if ( v23 > 0x1Fu )
            {
              if ( v23 == 127 )
                goto LABEL_51;
            }
            else if ( v23 != 9 )
            {
LABEL_51:
              if ( (_QWORD)v45 )
                (*(void (__fastcall **)(char *, _QWORD, _QWORD))(v45 + 32))(
                  (char *)&v46 + 8,
                  *((_QWORD *)&v45 + 1),
                  v46);
              goto LABEL_56;
            }
          }
        }
        v63 = 1;
        sub_1414464F0(v30, v41, *((_QWORD *)&v41 + 1));
        LOBYTE(v31) = 0;
        v44 = v31;
        v43 = v30[1];
        v42 = v30[0];
        v29[1] = v46;
        v29[0] = v45;
        v63 = 0;
        sub_1405A0840(&v60, &v35, v29, &v42);
        if ( (_BYTE)v62 == 0xFF )
        {
          v63 = 0;
          sub_1416C3060(
            (unsigned int)aSizeOverflowsM_0,
            23,
            (unsigned int)&v65,
            (unsigned int)&unk_1417693B8,
            (__int64)&off_1417646D0);
        }
        v55 = v62;
        v54 = v61;
        v53 = v60;
        if ( (_BYTE)v62 != 2 )
        {
          v24 = *(void (__fastcall **)(char *, _QWORD, _QWORD))(v53 + 32);
          v63 = 0;
          v24((char *)&v54 + 8, *((_QWORD *)&v53 + 1), v54);
        }
LABEL_56:
        sub_1400104F0(&v40);
        if ( (_QWORD)v56 )
          sub_140001660(*((_QWORD *)&v56 + 1), v56, 1);
      }
      sub_14033B570(&v47);
    }
  }
  a1[5] = v39;
  a1[4] = v38;
  v25 = v35;
  v26 = v36;
  v27 = *(_OWORD *)v37.m256i_i8;
  a1[3] = *(_OWORD *)&v37.m256i_u64[2];
  a1[2] = v27;
  a1[1] = v26;
  *a1 = v25;
  return a1;
}