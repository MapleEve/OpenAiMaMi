// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140dc84a0 | name sub_140DC84A0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DC84A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  _BYTE *v5; // r15
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r14
  const __m128i *v15; // rdi
  __int64 v16; // r8
  const __m128i *v17; // rdx
  __int64 v18; // rdi
  unsigned __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r8
  char v25; // r14
  __int64 v26; // r13
  const __m128i *v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rax
  __m128i *v31; // rcx
  const __m128i *v32; // rdx
  unsigned __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // r14
  const __m128i *v36; // rdx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __m128i v44; // xmm0
  const __m128i *v46; // r14
  __int128 v47; // [rsp+50h] [rbp-30h]
  unsigned __int64 v48; // [rsp+60h] [rbp-20h]
  __int64 v49; // [rsp+70h] [rbp-10h]
  __int64 v50; // [rsp+78h] [rbp-8h]
  __int128 v51; // [rsp+80h] [rbp+0h] BYREF
  __int64 v52; // [rsp+90h] [rbp+10h]
  __int64 v53; // [rsp+98h] [rbp+18h]
  __m128i v54; // [rsp+A0h] [rbp+20h] BYREF
  _OWORD v55[2]; // [rsp+B0h] [rbp+30h]
  __int64 v56; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v57; // [rsp+D8h] [rbp+58h]
  __int64 v58; // [rsp+E0h] [rbp+60h]
  __int64 v59; // [rsp+E8h] [rbp+68h]
  _QWORD *v60; // [rsp+F0h] [rbp+70h]
  __int64 v61; // [rsp+F8h] [rbp+78h]
  _BYTE *v62; // [rsp+100h] [rbp+80h]
  __m128i *v63; // [rsp+108h] [rbp+88h]
  __int64 v64; // [rsp+110h] [rbp+90h]
  char v65; // [rsp+11Fh] [rbp+9Fh]
  __int64 v66; // [rsp+120h] [rbp+A0h]

  v66 = -2;
  v7 = *(_QWORD *)a2;
  v8 = *(_QWORD *)a2 == 0;
  v64 = a2;
  if ( !v8 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      v11 = *(unsigned __int8 *)(a2 + 57);
      v60 = (_QWORD *)(a2 + 8);
      v62 = (_BYTE *)(a2 + 57);
      switch ( v11 )
      {
        case 0LL:
          goto LABEL_6;
        case 1LL:
          sub_1419393E0(&off_141A47248);
        case 2LL:
          sub_141939400(&off_141A47248);
        case 3LL:
          v12 = **(_QWORD **)(a2 + 48);
          goto LABEL_17;
      }
    }
    sub_141939280(aUnfoldMustNotB, 63, &off_141A4E710);
  }
  v9 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 2;
  if ( v9 < 0 )
    sub_141939280("internal error: entered unreachable code", 40, &off_141A49BE0);
  v62 = (_BYTE *)v9;
  v10 = a3;
  v63 = (__m128i *)(a2 + 16);
  v54 = *(__m128i *)(a2 + 16);
  v59 = *(_QWORD *)(a2 + 32);
  LOBYTE(v61) = *(_BYTE *)(a2 + 40);
  sub_140CE5110(a2);
  a2 = v64;
  *(_QWORD *)v64 = 1;
  v60 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v62;
  *v63 = v54;
  *(_QWORD *)(a2 + 32) = v59;
  *(_BYTE *)(a2 + 56) = v61;
  v62 = (_BYTE *)(a2 + 57);
  *(_BYTE *)(a2 + 57) = 0;
  a3 = v10;
LABEL_6:
  *(_WORD *)(a2 + 58) = 257;
  v12 = *(_QWORD *)(a2 + 32);
  if ( *(_BYTE *)(a2 + 56) == 1 )
  {
    v63 = *(__m128i **)v12;
    v59 = v12;
    v61 = *(_QWORD *)(v12 + 8);
    if ( *(_QWORD *)v61 )
      (*(void (__fastcall **)(__m128i *, __int64, __int64))v61)(v63, a2, a3);
    v13 = *(_QWORD *)(v61 + 8);
    if ( v13 )
      sub_140001660(v63, v13, *(_QWORD *)(v61 + 16));
    sub_140001660(v59, 16, 8);
    v14 = v64;
    if ( *v60 )
      sub_140001660(*(_QWORD *)(v64 + 16), *v60, 1);
    *v62 = 1;
    goto LABEL_14;
  }
  *(_QWORD *)(a2 + 40) = v12;
  *(_QWORD *)(a2 + 48) = a2 + 40;
LABEL_17:
  sub_14036AA40(&v54, v12, a3);
  if ( v54.m128i_i64[0] == 2 )
  {
    *v62 = 3;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  v48 = *((_QWORD *)&v55[0] + 1);
  v15 = *(const __m128i **)&v55[0];
  if ( v54.m128i_i32[0] != 1 )
  {
    v34 = -1;
    LODWORD(v61) = v54.m128i_i32[2];
    v14 = v64;
    if ( *(_BYTE *)(v64 + 59) )
      goto LABEL_57;
    goto LABEL_62;
  }
  v14 = v64;
  if ( !v54.m128i_i64[1] )
  {
    v47 = *(_OWORD *)((char *)v55 + 8);
    *(_BYTE *)(v64 + 59) = 0;
    v5 = *(_BYTE **)(v14 + 32);
    LODWORD(v61) = 1;
    v4 = 1;
    v34 = 0;
    v3 = 0;
    v53 = 0;
    if ( *(_BYTE *)(v14 + 59) )
      goto LABEL_57;
    goto LABEL_62;
  }
  v49 = v54.m128i_i64[1];
  v50 = *(_QWORD *)&v55[0];
  v51 = *(_OWORD *)((char *)v55 + 8);
  v16 = *(_QWORD *)(v64 + 24);
  if ( *((_QWORD *)&v55[0] + 1) > (unsigned __int64)(*(_QWORD *)(v64 + 8) - v16) )
  {
    sub_14190D590((_DWORD)v60, v16, DWORD2(v55[0]), 1, 1);
    v14 = v64;
    v16 = *(_QWORD *)(v64 + 24);
    goto LABEL_23;
  }
  if ( *((_QWORD *)&v55[0] + 1) )
  {
LABEL_23:
    v17 = v15;
    v18 = v16;
    sub_1418F44E0((__m128i *)(v16 + *(_QWORD *)(v14 + 16)), v17, v48);
    v16 = v18;
  }
  v19 = v48 + v16;
  *(_QWORD *)(v14 + 24) = v19;
  v56 = 0;
  v57 = 1;
  v58 = 0;
  v20 = 1;
  v21 = 0;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v14 + 16);
    v65 = 1;
    sub_1416B3AE0(&v54, v22, v19);
    if ( !v54.m128i_i8[0] )
    {
      v35 = v64;
      v36 = *(const __m128i **)(v64 + 16);
      v37 = *(_QWORD *)(v64 + 24);
      if ( v37 > v56 - v21 )
      {
        v46 = *(const __m128i **)(v64 + 16);
        v65 = 1;
        sub_14190D590((unsigned int)&v56, v21, v37, 1, 1);
        v20 = v57;
        v21 = v58;
        v36 = v46;
        v35 = v64;
      }
      else if ( !v37 )
      {
LABEL_49:
        v58 = v37 + v21;
        v38 = 0;
        goto LABEL_55;
      }
      sub_1418F44E0((__m128i *)(v21 + v20), v36, v37);
      goto LABEL_49;
    }
    v23 = v54.m128i_u64[1];
    v24 = *(_QWORD *)(v64 + 24);
    if ( v54.m128i_i64[1] > v24 )
    {
      v65 = 1;
      sub_1419392D0(0, v54.m128i_i64[1], v24, &off_141A47260);
    }
    v25 = v55[0];
    v26 = BYTE1(v55[0]);
    v27 = *(const __m128i **)(v64 + 16);
    if ( v54.m128i_i64[1] > (unsigned __int64)(v56 - v21) )
    {
      v63 = *(__m128i **)(v64 + 16);
      v65 = 1;
      sub_14190D590((unsigned int)&v56, v21, v54.m128i_i32[2], 1, 1);
      v20 = v57;
      v21 = v58;
      v27 = v63;
    }
    else if ( !v54.m128i_i64[1] )
    {
      goto LABEL_31;
    }
    sub_1418F44E0((__m128i *)(v20 + v21), v27, v23);
LABEL_31:
    v28 = v23 + v21;
    v58 = v28;
    if ( (v25 & 1) == 0 )
      break;
    if ( (unsigned __int64)(v56 - v28) <= 2 )
    {
      v65 = 1;
      sub_14190D590((unsigned int)&v56, v28, 3, 1, 1);
      v20 = v57;
      v28 = v58;
    }
    *(_BYTE *)(v20 + v28 + 2) = -67;
    *(_WORD *)(v20 + v28) = -16401;
    v21 = v28 + 3;
    v58 = v21;
    v29 = v26 + v23;
    v14 = v64;
    v30 = *(_QWORD *)(v64 + 24);
    v19 = v30 - v29;
    if ( v30 < v29 )
    {
      v65 = 1;
      sub_1419392D0(0, v29, v30, &off_141A59A70);
    }
    *(_QWORD *)(v64 + 24) = 0;
    if ( v29 )
    {
      if ( v30 != v29 )
      {
        v31 = *(__m128i **)(v14 + 16);
        v32 = (__m128i *)((char *)v31 + v29);
        v33 = v30 - v29;
        sub_1418F44E0(v31, v32, v19);
        v19 = v33;
        goto LABEL_40;
      }
      v19 = 0;
    }
    else if ( v30 )
    {
LABEL_40:
      *(_QWORD *)(v14 + 24) = v19;
    }
    else
    {
      v19 = 0;
    }
  }
  v35 = v64;
  v39 = *(_QWORD *)(v64 + 24);
  v38 = v39 - v23;
  if ( v39 < v23 )
  {
    v65 = 1;
    sub_1419392D0(0, v23, v39, &off_141A59A70);
  }
  *(_QWORD *)(v64 + 24) = 0;
  if ( v23 )
  {
    if ( v39 == v23 )
      goto LABEL_56;
    sub_1418F44E0(*(__m128i **)(v35 + 16), (const __m128i *)(*(_QWORD *)(v35 + 16) + v23), v38);
  }
  else if ( !v39 )
  {
    goto LABEL_56;
  }
LABEL_55:
  *(_QWORD *)(v35 + 24) = v38;
LABEL_56:
  v65 = 0;
  sub_141654680(&v54, &v56);
  v15 = (const __m128i *)v54.m128i_i64[1];
  v3 = v54.m128i_i64[0];
  v47 = v55[0];
  v40 = (_QWORD *)v64;
  v5 = *(_BYTE **)(v64 + 32);
  *(_WORD *)(v64 + 58) = 0;
  v34 = v40[1];
  v4 = v40[2];
  v53 = v40[3];
  (*(void (__fastcall **)(char *, __int64, _QWORD))(v49 + 32))((char *)&v51 + 8, v50, v51);
  LODWORD(v61) = 0;
  v14 = v64;
  if ( *(_BYTE *)(v64 + 59) )
  {
LABEL_57:
    v41 = *(_QWORD *)(v14 + 32);
    v63 = *(__m128i **)v41;
    v52 = v41;
    v59 = *(_QWORD *)(v41 + 8);
    if ( *(_QWORD *)v59 )
      (*(void (__fastcall **)(__m128i *))v59)(v63);
    v42 = *(_QWORD *)(v59 + 8);
    if ( v42 )
      sub_140001660(v63, v42, *(_QWORD *)(v59 + 16));
    sub_140001660(v52, 16, 8);
    v14 = v64;
  }
LABEL_62:
  if ( *(_BYTE *)(v14 + 58) && *v60 )
    sub_140001660(*(_QWORD *)(v14 + 16), *v60, 1);
  *v62 = 1;
  if ( v34 == -2 )
  {
    *(_QWORD *)a1 = 2;
    return a1;
  }
  if ( v34 != -1 )
  {
    v63 = (__m128i *)v4;
    v60 = (_QWORD *)v34;
    v62 = v5;
    v54.m128i_i64[0] = v3;
    v54.m128i_i64[1] = (__int64)v15;
    v55[0] = v47;
    sub_140CE5110(v14);
    v43 = v64;
    *(_QWORD *)v64 = 0;
    *(_QWORD *)(v43 + 8) = v60;
    *(_QWORD *)(v43 + 16) = v63;
    *(_QWORD *)(v43 + 24) = v53;
    *(_QWORD *)(v43 + 32) = v62;
    *(_BYTE *)(v43 + 40) = v61;
    v44 = v54;
    *(_OWORD *)(a1 + 24) = v55[0];
    *(__m128i *)(a1 + 8) = v44;
    *(_QWORD *)a1 = 1;
    return a1;
  }
LABEL_14:
  sub_140CE5110(v14);
  *(_QWORD *)v64 = 2;
  *(_QWORD *)a1 = 0;
  return a1;
}
