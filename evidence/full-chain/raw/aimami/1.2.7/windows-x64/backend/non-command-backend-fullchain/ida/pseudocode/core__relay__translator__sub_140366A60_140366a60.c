// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140366a60 | name sub_140366A60
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140366A60(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  const __m128i *v8; // r14
  signed __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int64 v12; // r12
  __m128i *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  const __m128i *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int8 v19; // r15
  _DWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  _DWORD *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // r12
  __m128i *v34; // rax
  __int64 v35; // r15
  void *v36; // rax
  _BYTE *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD v47[3]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v48; // [rsp+68h] [rbp-18h] BYREF
  __int64 v49; // [rsp+78h] [rbp-8h]
  __int128 v50; // [rsp+80h] [rbp+0h] BYREF
  __int64 v51; // [rsp+90h] [rbp+10h]
  __int128 v52; // [rsp+98h] [rbp+18h] BYREF
  __int64 v53; // [rsp+A8h] [rbp+28h]
  __m256i v54; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v55; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v56; // [rsp+E0h] [rbp+60h]
  __int64 v57; // [rsp+E8h] [rbp+68h]
  _OWORD v58[2]; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v59; // [rsp+110h] [rbp+90h] BYREF
  __int128 v60; // [rsp+120h] [rbp+A0h]
  __m256i v61; // [rsp+130h] [rbp+B0h] BYREF
  char v62; // [rsp+150h] [rbp+D0h]
  char v63; // [rsp+151h] [rbp+D1h]
  char v64; // [rsp+152h] [rbp+D2h]
  char v65; // [rsp+153h] [rbp+D3h]
  char v66; // [rsp+154h] [rbp+D4h]
  char v67; // [rsp+155h] [rbp+D5h]
  char v68; // [rsp+156h] [rbp+D6h]
  char v69; // [rsp+157h] [rbp+D7h]
  __int64 v70; // [rsp+158h] [rbp+D8h]

  v70 = -2;
  v5 = **a2;
  v6 = sub_1416419F0(aName_2, 4, a3);
  if ( !v6 || *(_BYTE *)v6 != 3 )
  {
    *(_BYTE *)a1 = -1;
    return a1;
  }
  v8 = *(const __m128i **)(v6 + 16);
  v9 = *(_QWORD *)(v6 + 24);
  v47[0] = v8;
  v47[1] = v9;
  v10 = *(_QWORD *)(v5 + 16);
  if ( v10 && (v9 < v10 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v5 + 8), v8)) )
  {
    v61.m256i_i64[0] = v5;
    v61.m256i_i64[1] = (__int64)sub_1400015F0;
    v61.m256i_i64[2] = (__int64)v47;
    v61.m256i_i64[3] = (__int64)sub_140186EE0;
    sub_1416ABFD0(&v50, &unk_1419E6162, &v61);
    goto LABEL_17;
  }
  if ( v9 < 0 )
  {
    v12 = 0;
    goto LABEL_11;
  }
  if ( v9 )
  {
    nullsub_1(v7);
    v12 = 1;
    v13 = (__m128i *)sub_140001650(v9, 1);
    if ( !v13 )
LABEL_11:
      sub_141938D2B(v12, v9);
    v14 = (__int64)v13;
    sub_1418F44E0(v13, v8, v9);
  }
  else
  {
    v14 = 1;
  }
  *(_QWORD *)&v50 = v9;
  *((_QWORD *)&v50 + 1) = v14;
  v51 = v9;
LABEL_17:
  v67 = 1;
  v15 = sub_1416419F0(aDescription_0, 11, a3);
  if ( v15 && *(_BYTE *)v15 == 3 )
  {
    v16 = *(const __m128i **)(v15 + 16);
    v9 = *(_QWORD *)(v15 + 24);
  }
  else
  {
    v16 = nullptr;
  }
  v67 = 1;
  v17 = sub_1416419F0(aParameters_0, 10, a3);
  if ( v17 )
  {
    v19 = *(_BYTE *)v17;
    switch ( *(_BYTE *)v17 )
    {
      case 0:
        break;
      case 1:
        v61.m256i_i8[1] = *(_BYTE *)(v17 + 1);
        break;
      case 2:
        *(_OWORD *)&v61.m256i_u64[1] = *(_OWORD *)(v17 + 8);
        break;
      case 3:
        v67 = 1;
        sub_1416AC440(&v61.m256i_u64[1], v17 + 8);
        break;
      case 4:
        v25 = *(_QWORD *)(v17 + 16);
        v26 = *(_QWORD *)(v17 + 24);
        v67 = 1;
        sub_1403918C0(&v61.m256i_u64[1], v25, v26);
        break;
      case 5:
        if ( *(_QWORD *)(v17 + 24) )
        {
          v27 = *(_QWORD *)(v17 + 8);
          if ( !v27 )
          {
            v67 = 1;
            sub_141939020(&off_141A54900);
          }
          v28 = *(_QWORD *)(v17 + 16);
          v67 = 1;
          sub_140E11B90(&v61.m256i_u64[1], v27, v28);
        }
        else
        {
          v61.m256i_i64[1] = 0;
          v61.m256i_i64[3] = 0;
        }
        break;
    }
    v61.m256i_i8[0] = v19;
    *(_OWORD *)&v54.m256i_u64[2] = *(_OWORD *)&v61.m256i_u64[2];
    v54.m256i_i16[0] = __PAIR16__(v61.m256i_u8[1], v19);
    *(__int32 *)((char *)v54.m256i_i32 + 2) = *(__int32 *)((char *)v61.m256i_i32 + 2);
    v54.m256i_i16[3] = v61.m256i_i16[3];
    v54.m256i_i64[1] = v61.m256i_i64[1];
  }
  else
  {
    *(_QWORD *)&v55 = 0;
    v56 = 0;
    nullsub_1(v18);
    v20 = (_DWORD *)sub_140001650(4, 1);
    if ( !v20 )
      sub_141938D2B(1, 4);
    *v20 = 1701869940;
    *(_QWORD *)&v59 = 4;
    *((_QWORD *)&v59 + 1) = v20;
    *(_QWORD *)&v60 = 4;
    nullsub_1(v21);
    v22 = sub_140001650(6, 1);
    v57 = v22;
    if ( !v22 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v22 + 4) = 29795;
    *(_DWORD *)v22 = 1701470831;
    v61.m256i_i8[0] = 3;
    v61.m256i_i64[1] = 6;
    v61.m256i_i64[2] = v22;
    v61.m256i_i64[3] = 6;
    sub_140E72AA0(v58, &v55, &v59, &v61);
    if ( LOBYTE(v58[0]) != 0xFF )
      sub_14002F9D0(v58);
    nullsub_1(v23);
    v24 = (void *)sub_140001650(10, 1);
    if ( !v24 )
      sub_141938D2B(1, 10);
    qmemcpy(v24, "properties", 10);
    *(_QWORD *)&v59 = 10;
    *((_QWORD *)&v59 + 1) = v24;
    *(_QWORD *)&v60 = 10;
    v61.m256i_i64[1] = 0;
    v61.m256i_i64[3] = 0;
    v61.m256i_i8[0] = 5;
    sub_140E72AA0(v58, &v55, &v59, &v61);
    if ( LOBYTE(v58[0]) != 0xFF )
      sub_14002F9D0(v58);
    *(_OWORD *)&v54.m256i_u64[1] = v55;
    v54.m256i_i64[3] = v56;
    v54.m256i_i8[0] = 5;
  }
  v64 = 1;
  v63 = 1;
  sub_1402E1D90(&v54);
  *(_QWORD *)&v52 = 0;
  v53 = 0;
  nullsub_1(v29);
  v30 = (_DWORD *)sub_140001650(4, 1);
  LOBYTE(v57) = v30 == nullptr;
  if ( !v30 )
  {
    v69 = 1;
    v68 = 1;
    sub_141938D2B(1, 4);
  }
  *v30 = 1701667182;
  *(_QWORD *)&v59 = 4;
  *((_QWORD *)&v59 + 1) = v30;
  *(_QWORD *)&v60 = 4;
  v61.m256i_i64[3] = v51;
  *(_OWORD *)&v61.m256i_u64[1] = v50;
  v61.m256i_i8[0] = 3;
  v69 = 1;
  v68 = 1;
  sub_140E72AA0(v58, &v52, &v59, &v61);
  if ( LOBYTE(v58[0]) != 0xFF )
  {
    v69 = 1;
    v68 = 1;
    sub_14002F9D0(v58);
  }
  if ( v16 )
  {
    nullsub_1(v31);
    v32 = (void *)sub_140001650(11, 1);
    if ( !v32 )
    {
      v69 = 1;
      v68 = 1;
      sub_141938D2B(1, 11);
    }
    qmemcpy(v32, "description", 11);
    *(_QWORD *)&v59 = 11;
    *((_QWORD *)&v59 + 1) = v32;
    *(_QWORD *)&v60 = 11;
    if ( v9 < 0 )
    {
      v33 = 0;
      goto LABEL_47;
    }
    if ( v9 )
    {
      nullsub_1(0x7470697263736564LL);
      v33 = 1;
      v34 = (__m128i *)sub_140001650(v9, 1);
      if ( !v34 )
      {
LABEL_47:
        v62 = 1;
        sub_141938D2B(v33, v9);
      }
      v35 = (__int64)v34;
      sub_1418F44E0(v34, v16, v9);
    }
    else
    {
      v35 = 1;
    }
    v61.m256i_i64[1] = v9;
    v61.m256i_i64[2] = v35;
    v61.m256i_i64[3] = v9;
    v61.m256i_i8[0] = 3;
    v62 = 0;
    sub_140E72AA0(v58, &v52, &v59, &v61);
    if ( LOBYTE(v58[0]) != 0xFF )
    {
      v69 = 1;
      v68 = 1;
      sub_14002F9D0(v58);
    }
  }
  nullsub_1(v31);
  v36 = (void *)sub_140001650(10, 1);
  if ( !v36 )
  {
    v69 = 1;
    v68 = 1;
    sub_141938D2B(1, 10);
  }
  qmemcpy(v36, "parameters", 10);
  *(_QWORD *)&v59 = 10;
  *((_QWORD *)&v59 + 1) = v36;
  *(_QWORD *)&v60 = 10;
  v61 = v54;
  v69 = 1;
  v68 = 0;
  sub_140E72AA0(v58, &v52, &v59, &v61);
  if ( LOBYTE(v58[0]) != 0xFF )
  {
    v69 = 1;
    v68 = 0;
    sub_14002F9D0(v58);
  }
  v69 = 1;
  v68 = 0;
  v37 = (_BYTE *)sub_1416419F0(aStrict_0, 6, a3);
  if ( v37 && *v37 == 1 && v37[1] == 1 )
  {
    nullsub_1(v38);
    v39 = sub_140001650(6, 1);
    if ( !v39 )
    {
      v69 = 1;
      v68 = 0;
      sub_141938D2B(1, 6);
    }
    *(_WORD *)(v39 + 4) = 29795;
    *(_DWORD *)v39 = 1769108595;
    *(_QWORD *)&v59 = 6;
    *((_QWORD *)&v59 + 1) = v39;
    *(_QWORD *)&v60 = 6;
    v61.m256i_i16[0] = 257;
    v69 = 1;
    v68 = 0;
    sub_140E72AA0(v58, &v52, &v59, &v61);
    if ( LOBYTE(v58[0]) != 0xFF )
    {
      v69 = 1;
      v68 = 0;
      sub_14002F9D0(v58);
    }
  }
  *(_QWORD *)&v48 = 0;
  v49 = 0;
  nullsub_1(v38);
  v40 = (_DWORD *)sub_140001650(4, 1);
  if ( !v40 )
  {
    v66 = 1;
    sub_141938D2B(1, 4);
  }
  *v40 = 1701869940;
  *(_QWORD *)&v59 = 4;
  *((_QWORD *)&v59 + 1) = v40;
  *(_QWORD *)&v60 = 4;
  nullsub_1(v41);
  v42 = (_QWORD *)sub_140001650(8, 1);
  v47[2] = v42;
  if ( !v42 )
    sub_141938D2B(1, 8);
  *v42 = 0x6E6F6974636E7566LL;
  v61.m256i_i8[0] = 3;
  v61.m256i_i64[1] = 8;
  v61.m256i_i64[2] = (__int64)v42;
  v61.m256i_i64[3] = 8;
  sub_140E72AA0(v58, &v48, &v59, &v61);
  if ( LOBYTE(v58[0]) != 0xFF )
  {
    v66 = 1;
    sub_14002F9D0(v58);
  }
  nullsub_1(v43);
  v44 = (_QWORD *)sub_140001650(8, 1);
  if ( !v44 )
  {
    v66 = 1;
    sub_141938D2B(1, 8);
  }
  *v44 = 0x6E6F6974636E7566LL;
  *(_QWORD *)&v55 = 8;
  *((_QWORD *)&v55 + 1) = v44;
  v56 = 8;
  v61.m256i_i64[3] = v53;
  *(_OWORD *)&v61.m256i_u64[1] = v52;
  v61.m256i_i8[0] = 5;
  v65 = 1;
  sub_140412420(v58, &v61);
  if ( LOBYTE(v58[0]) == 0xFF )
  {
    *(_QWORD *)&v59 = *((_QWORD *)&v58[0] + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_2,
      43,
      (unsigned int)&v59,
      (unsigned int)&off_1419E6A30,
      (__int64)&off_1419E6188);
  }
  v60 = v58[1];
  v59 = v58[0];
  v65 = 0;
  sub_140E72AA0(v58, &v48, &v55, &v59);
  if ( LOBYTE(v58[0]) != 0xFF )
    sub_14002F9D0(v58);
  v66 = 0;
  sub_14002F9D0(&v61);
  *(_OWORD *)((char *)&v61.m256i_u32[1] + 3) = v48;
  *(__int64 *)((char *)&v61.m256i_i64[2] + 7) = v49;
  *(_BYTE *)a1 = 5;
  v45 = *(__int64 *)((char *)&v61.m256i_i64[1] + 7);
  v46 = *(__int64 *)((char *)&v61.m256i_i64[2] + 7);
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v61.m256i_i8;
  *(_QWORD *)(a1 + 16) = v45;
  *(_QWORD *)(a1 + 24) = v46;
  return a1;
}
