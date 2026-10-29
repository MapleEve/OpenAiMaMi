// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e4fb90 | name sub_140E4FB90
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E4FB90(_QWORD *a1, char a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdi
  bool v5; // bl
  __int64 result; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  char *v10; // rcx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  _BYTE *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rbx
  void *v24; // rax
  __int128 v25; // xmm0
  _OWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  _OWORD *v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rax
  void *v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // rax
  const __m128i *v41; // r15
  unsigned __int64 v42; // rsi
  __int64 v43; // r13
  char v44[8]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v45; // [rsp+50h] [rbp-30h]
  __int64 v46; // [rsp+60h] [rbp-20h]
  _QWORD *v47; // [rsp+68h] [rbp-18h]
  _QWORD *v48; // [rsp+70h] [rbp-10h]
  __int64 v49; // [rsp+78h] [rbp-8h]
  __int128 v50; // [rsp+80h] [rbp+0h] BYREF
  __int64 v51; // [rsp+90h] [rbp+10h]
  _QWORD *v52; // [rsp+98h] [rbp+18h]
  __int128 v53; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v54; // [rsp+B0h] [rbp+30h]
  __int64 v55; // [rsp+C0h] [rbp+40h] BYREF
  _DWORD *v56; // [rsp+C8h] [rbp+48h]
  __int64 v57; // [rsp+D0h] [rbp+50h]
  _DWORD *v58; // [rsp+D8h] [rbp+58h]
  __int128 v59; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v60; // [rsp+F0h] [rbp+70h]
  __int64 v61; // [rsp+100h] [rbp+80h]
  char v62; // [rsp+10Ch] [rbp+8Ch]
  char v63; // [rsp+10Dh] [rbp+8Dh]
  char v64; // [rsp+10Eh] [rbp+8Eh]
  char v65; // [rsp+10Fh] [rbp+8Fh]
  __int64 v66; // [rsp+110h] [rbp+90h]

  v66 = -2;
  v48 = a3;
  v62 = a2;
  v3 = a1[93];
  v4 = v3;
  v5 = v3 != 0;
  if ( v3 )
    v4 = a1[95];
  v47 = a1 + 35;
  result = (__int64)(a1 + 79);
  v52 = a1 + 79;
  v7 = a1[94];
  v8 = (__int64)(a1 + 96);
  v49 = v8;
  v9 = 0;
  while ( v4 )
  {
    if ( !v5 )
      sub_141939020(&off_141A54588);
    if ( v9 )
    {
      if ( v7 < *(unsigned __int16 *)(v9 + 406) )
        goto LABEL_11;
      goto LABEL_22;
    }
    if ( !v7 )
    {
      v9 = v3;
      goto LABEL_21;
    }
    v9 = v3;
    if ( (v7 & 7) == 0 )
    {
      v13 = v7;
      if ( v7 < 8 )
        goto LABEL_21;
      do
      {
LABEL_20:
        v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 408) + 408LL)
                                                                       + 408LL)
                                                           + 408LL)
                                               + 408LL)
                                   + 408LL)
                       + 408LL);
        v9 = *(_QWORD *)(v8 + 408);
        v13 -= 8LL;
      }
      while ( v13 );
      goto LABEL_21;
    }
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(v9 + 408);
      ++v8;
    }
    while ( (v7 & 7) != v8 );
    v13 = v7 - v8;
    if ( v7 >= 8 )
      goto LABEL_20;
LABEL_21:
    v3 = 0;
    v7 = 0;
    if ( *(_WORD *)(v9 + 406) )
    {
LABEL_11:
      v11 = v7;
      v12 = v9;
      goto LABEL_24;
    }
    do
    {
LABEL_22:
      v12 = *(_QWORD *)(v9 + 352);
      if ( !v12 )
        sub_141939020(&off_141A52FC8);
      ++v3;
      v11 = *(unsigned __int16 *)(v9 + 404);
      v9 = *(_QWORD *)(v9 + 352);
    }
    while ( (unsigned __int16)v11 >= *(_WORD *)(v12 + 406) );
LABEL_24:
    if ( !v3 )
    {
      v7 = v11 + 1;
      v9 = v12;
      goto LABEL_32;
    }
    v14 = v12 + 8 * v11 + 416;
    if ( (v3 & 7) != 0 )
    {
      v15 = 0;
      do
      {
        v9 = *(_QWORD *)v14;
        v14 = *(_QWORD *)v14 + 408LL;
        ++v15;
      }
      while ( (v3 & 7) != v15 );
      v16 = v3 - v15;
      if ( v3 < 8 )
        goto LABEL_30;
      do
      {
LABEL_29:
        v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 408LL)
                                                                                   + 408LL)
                                                                       + 408LL)
                                                           + 408LL)
                                               + 408LL)
                                   + 408LL)
                       + 408LL);
        v14 = v9 + 408;
        v16 -= 8LL;
      }
      while ( v16 );
      goto LABEL_30;
    }
    v16 = v3;
    if ( v3 >= 8 )
      goto LABEL_29;
LABEL_30:
    v7 = 0;
LABEL_32:
    --v4;
    v17 = (_BYTE *)(v12 + 32 * v11);
    if ( v62 )
    {
      sub_1402B7DE0((__int64)v47, v12 + 32 * v11);
      v18 = (_QWORD *)sub_1416419F0(aStatus_9, 6, v12 + 32 * v11);
      if ( !v18 )
        v18 = off_1421E7108;
      if ( *(_BYTE *)v18 == 3 && v18[3] == 9 )
      {
        v19 = v18[2];
        v8 = *(_QWORD *)v19 ^ 0x6574656C706D6F63LL;
        if ( !(v8 | *(unsigned __int8 *)(v19 + 8) ^ 0x64LL) )
          goto LABEL_103;
      }
      result = sub_1416419F0(aType_11, 4, v12 + 32 * v11);
      if ( !result )
        result = (__int64)off_1421E7108;
      v5 = 1;
      v3 = 0;
      if ( *(_BYTE *)result == 3 )
      {
        v3 = 0;
        if ( *(_QWORD *)(result + 24) == 15 )
        {
          v20 = *(_QWORD **)(result + 16);
          v8 = *v20 ^ 0x726165735F626577LL;
          result = v8 | *(_QWORD *)((char *)v20 + 7) ^ 0x6C6C61635F686372LL;
          v3 = 0;
          if ( !result )
          {
            result = sub_1416419F0(aStatus_9, 6, v12 + 32 * v11);
            if ( !result )
              result = (__int64)off_1421E7108;
            v3 = 0;
            if ( *(_BYTE *)result == 3 )
            {
              v3 = 0;
              if ( *(_QWORD *)(result + 24) == 6 )
              {
                v21 = *(_QWORD *)(result + 16);
                v8 = *(_DWORD *)v21 ^ 0x6C696166u;
                result = (unsigned int)v8 | *(unsigned __int16 *)(v21 + 4) ^ 0x6465;
                v3 = 0;
                if ( !(_DWORD)result )
                {
LABEL_103:
                  if ( *v52 )
                  {
                    LODWORD(v61) = *(_DWORD *)(v12 + 4 * v11 + 360);
                    v22 = (_QWORD *)sub_1416419F0(aType_11, 4, v12 + 32 * v11);
                    if ( !v22 )
                      v22 = off_1421E7108;
                    if ( *(_BYTE *)v22 == 3 )
                    {
                      v23 = v22[2];
                      v58 = (_DWORD *)v22[3];
                    }
                    else
                    {
                      v23 = 1;
                      v58 = nullptr;
                    }
                    v27 = (_QWORD *)sub_1416419F0("phase", 5, v12 + 32 * v11);
                    if ( !v27 )
                      v27 = off_1421E7108;
                    if ( *(_BYTE *)v27 == 3 )
                    {
                      v28 = v27[2];
                      v27 = (_QWORD *)v27[3];
                    }
                    else
                    {
                      v28 = 0;
                    }
                    sub_1401F5F00(v52, (const __m128i *)"done", 4, v61, v23, (__int64)v58, v28, (__int64)v27);
                  }
                  *(_QWORD *)&v50 = 0;
                  v51 = 0;
                  nullsub_1(v8);
                  v29 = (_DWORD *)sub_140001650(4, 1);
                  v31 = v48;
                  if ( !v29 )
                    sub_141938D2B(1, 4);
                  *v29 = 1701869940;
                  v55 = 4;
                  v58 = v29;
                  v56 = v29;
                  v57 = 4;
                  nullsub_1(v30);
                  v61 = sub_140001650(25, 1);
                  if ( !v61 )
                    sub_141938D2B(1, 25);
                  v32 = (_OWORD *)v61;
                  *(_OWORD *)(v61 + 9) = *(__int128 *)((char *)&xmmword_141A53568 + 9);
                  *v32 = xmmword_141A53568;
                  LOBYTE(v59) = 3;
                  *((_QWORD *)&v59 + 1) = 25;
                  *(_QWORD *)&v60 = v32;
                  *((_QWORD *)&v60 + 1) = 25;
                  sub_140E72AA0(&v53, &v50, &v55, &v59);
                  if ( (_BYTE)v53 != 0xFF )
                    sub_140DF44E0(&v53);
                  nullsub_1(v33);
                  v34 = (void *)sub_140001650(12, 1);
                  if ( !v34 )
                    sub_141938D2B(1, 12);
                  qmemcpy(v34, "output_index", 12);
                  v55 = 12;
                  v56 = v34;
                  v57 = 12;
                  v35 = *(unsigned int *)(v12 + 4 * v11 + 360);
                  LOBYTE(v59) = 2;
                  *((_QWORD *)&v59 + 1) = 0;
                  *(_QWORD *)&v60 = v35;
                  sub_140E72AA0(&v53, &v50, &v55, &v59);
                  if ( (_BYTE)v53 != 0xFF )
                    sub_140DF44E0(&v53);
                  nullsub_1(v36);
                  v37 = (_DWORD *)sub_140001650(7, 1);
                  if ( !v37 )
                    sub_141938D2B(1, 7);
                  *(_DWORD *)((char *)v37 + 3) = 1684627309;
                  *v37 = 1835365481;
                  v55 = 7;
                  v61 = (__int64)v37;
                  v56 = v37;
                  v57 = 7;
                  v65 = 1;
                  v38 = (void *)sub_1416419F0(aId_8, 2, v12 + 32 * v11);
                  if ( !v38 )
                    v38 = off_1421E7108;
                  v65 = 1;
                  sub_140412420(&v59, v38);
                  if ( (_BYTE)v59 == 0xFF )
                  {
                    *(_QWORD *)&v53 = *((_QWORD *)&v59 + 1);
                    sub_141939040(
                      (unsigned int)aCalledResultUn_16,
                      43,
                      (unsigned int)&v53,
                      (unsigned int)&off_141A52FE8,
                      (__int64)&off_141A54250);
                  }
                  v54 = v60;
                  v53 = v59;
                  v65 = 0;
                  sub_140E72AA0(&v59, &v50, &v55, &v53);
                  if ( (_BYTE)v59 != 0xFF )
                    sub_140DF44E0(&v59);
                  nullsub_1(v39);
                  v40 = (_DWORD *)sub_140001650(4, 1);
                  if ( !v40 )
                    sub_141938D2B(1, 4);
                  *v40 = 1835365481;
                  v55 = 4;
                  v61 = (__int64)v40;
                  v56 = v40;
                  v57 = 4;
                  v64 = 1;
                  sub_140412420(&v59, v12 + 32 * v11);
                  if ( (_BYTE)v59 == 0xFF )
                  {
                    *(_QWORD *)&v53 = *((_QWORD *)&v59 + 1);
                    sub_141939040(
                      (unsigned int)aCalledResultUn_16,
                      43,
                      (unsigned int)&v53,
                      (unsigned int)&off_141A52FE8,
                      (__int64)&off_141A54250);
                  }
                  v54 = v60;
                  v53 = v59;
                  v64 = 0;
                  sub_140E72AA0(&v59, &v50, &v55, &v53);
                  if ( (_BYTE)v59 != 0xFF )
                    sub_140DF44E0(&v59);
                  v46 = v51;
                  v45 = v50;
                  v44[0] = 5;
                  sub_140E4D190((unsigned int)&v59, v49, (unsigned int)&xmmword_141A53568, 25, (__int64)v44);
                  v41 = *((const __m128i **)&v59 + 1);
                  v42 = v60;
                  v43 = v31[2];
                  if ( (unsigned __int64)v60 > *v31 - v43 )
                  {
                    v61 = *((_QWORD *)&v59 + 1);
                    sub_14190D590((_DWORD)v31, v43, v60, 1, 1);
                    v43 = v31[2];
                    v41 = (const __m128i *)v61;
LABEL_85:
                    sub_1418F44E0((__m128i *)(v43 + v31[1]), v41, v42);
                  }
                  else if ( (_QWORD)v60 )
                  {
                    goto LABEL_85;
                  }
                  v31[2] = v42 + v43;
                  if ( (_QWORD)v59 )
                    sub_140001660(v41, v59, 1);
                  v10 = v44;
                  goto LABEL_5;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      nullsub_1(v8);
      v24 = (void *)sub_140001650(10, 1);
      if ( !v24 )
        sub_141938D2B(1, 10);
      qmemcpy(v24, "incomplete", 10);
      LOBYTE(v59) = 3;
      *((_QWORD *)&v59 + 1) = 10;
      *(_QWORD *)&v60 = v24;
      *((_QWORD *)&v60 + 1) = 10;
      v63 = 1;
      v61 = sub_141641AF0(aStatus_9, 6, v12 + 32 * v11);
      sub_140DF44E0(v61);
      v25 = v59;
      v26 = (_OWORD *)v61;
      *(_OWORD *)(v61 + 16) = v60;
      *v26 = v25;
      if ( *v17 != 5 )
        sub_141939020(&off_141A54230);
      result = sub_140DED130(&v59, v17 + 8, aEncryptedConte_2, 17);
      if ( (_BYTE)v59 != 0xFF )
      {
        v10 = (char *)&v59;
LABEL_5:
        result = sub_140DF44E0(v10);
      }
      v5 = 1;
      v3 = 0;
    }
  }
  return result;
}
