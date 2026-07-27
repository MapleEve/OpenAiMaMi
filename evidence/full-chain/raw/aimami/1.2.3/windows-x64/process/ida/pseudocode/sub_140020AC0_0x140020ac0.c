// module: codexmate_lib/platform/process
// addr: 0x140020ac0
// name: sub_140020AC0
// win 1.2.1 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140020AC0(__int64 a1)
{
  __m256i *v1; // rbx
  _QWORD *v2; // r12
  __int64 v3; // rdi
  unsigned __int8 v4; // r13
  int v5; // ecx
  char v6; // al
  _QWORD *v7; // r14
  __m256i *v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  __m256i v20; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+70h] [rbp-10h]
  __int128 v24; // [rsp+80h] [rbp+0h]
  _QWORD v25[8]; // [rsp+90h] [rbp+10h] BYREF
  __m256i v26; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v27; // [rsp+F0h] [rbp+70h]
  __int128 v28; // [rsp+100h] [rbp+80h]
  __int128 v29; // [rsp+110h] [rbp+90h]
  __int128 v30; // [rsp+120h] [rbp+A0h]
  __m256i v31; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v32; // [rsp+150h] [rbp+D0h]
  __int128 v33; // [rsp+160h] [rbp+E0h]
  __int128 v34; // [rsp+170h] [rbp+F0h]
  __int128 v35; // [rsp+180h] [rbp+100h]
  __int128 v36; // [rsp+190h] [rbp+110h]
  __int64 v37; // [rsp+1A0h] [rbp+120h]
  __int128 v38; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v39; // [rsp+1C0h] [rbp+140h]
  __int64 v40; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v41; // [rsp+1D8h] [rbp+158h]
  __int64 v42; // [rsp+1E0h] [rbp+160h]
  _BYTE v43[3]; // [rsp+1E8h] [rbp+168h]
  __int128 v44; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v45; // [rsp+200h] [rbp+180h]
  __int64 v46; // [rsp+208h] [rbp+188h]
  const char *v47; // [rsp+210h] [rbp+190h]
  __int64 v48; // [rsp+218h] [rbp+198h]
  __int64 v49; // [rsp+220h] [rbp+1A0h]
  const char *v50; // [rsp+228h] [rbp+1A8h]
  __int64 v51; // [rsp+230h] [rbp+1B0h]
  __int64 v52; // [rsp+238h] [rbp+1B8h]
  void *v53; // [rsp+240h] [rbp+1C0h]
  __m256i *v54; // [rsp+248h] [rbp+1C8h]
  signed __int32 v55; // [rsp+254h] [rbp+1D4h]
  __int64 v56; // [rsp+258h] [rbp+1D8h]
  __int64 v57; // [rsp+260h] [rbp+1E0h]
  bool v58; // [rsp+26Dh] [rbp+1EDh] BYREF
  char v59; // [rsp+26Eh] [rbp+1EEh] BYREF
  char v60; // [rsp+26Fh] [rbp+1EFh] BYREF
  __int64 v61; // [rsp+270h] [rbp+1F0h]

  v61 = -2;
  v56 = a1;
  v40 = 0;
  v41 = 4;
  v42 = 0;
  *(_WORD *)v43 = 1;
  v43[2] = 0;
  v1 = &v20;
  v2 = off_141EC8D80;
  while ( !*(_BYTE *)(*(_QWORD *)v56 + 16LL) )
  {
    sub_1403FB4E0((__int64)v1);
    if ( v20.m256i_i32[0] != -1 )
    {
      v35 = v24;
      v34 = v23;
      v33 = v22;
      v32 = v21;
      v31 = v20;
      *(_BYTE *)(*(_QWORD *)(v56 + 16) + 16LL) = 1;
      if ( *v2 >= 2u )
      {
        v26.m256i_i64[0] = (__int64)&v31;
        v26.m256i_i64[1] = (__int64)sub_140B036A0;
        *(_QWORD *)&v44 = 0;
        *((_QWORD *)&v44 + 1) = aCodexmateLibPl_0;
        v45 = 32;
        v46 = 0;
        v47 = aSrcPlatformPro;
        v48 = 23;
        v49 = 2;
        v50 = aCodexmateLibPl_0;
        v51 = 32;
        v52 = 0x68900000001LL;
        v53 = &unk_1416CE025;
        v54 = &v26;
        sub_1412C36A0(&v59, &v44);
      }
      sub_140016190((unsigned __int64 *)&v31);
      goto LABEL_3;
    }
    v36 = *(_OWORD *)&v20.m256i_u64[1];
    v3 = v20.m256i_i64[3];
    v37 = v20.m256i_i64[3];
    v57 = v20.m256i_i64[2];
    v4 = sub_1403B1770(&v40, v20.m256i_i64[2], v20.m256i_i64[3]);
    if ( v4 <= 4u && (v5 = 22, _bittest(&v5, v4)) )
    {
      if ( v4 == 4 )
      {
        v55 = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v56 + 8) + 16LL));
        v57 = *((_QWORD *)&v36 + 1);
        v3 = v37;
      }
      v6 = v43[2] + 1;
      if ( v43[2] == 0xFF )
        v6 = -1;
      v60 = v6;
      sub_140328F40(&v31, v57, v57 + 32 * v3);
      v7 = v2;
      v8 = v1;
      v10 = v31.m256i_i64[2];
      v9 = v31.m256i_i64[1];
      sub_140440300((unsigned int)&v44, v31.m256i_i32[2], v31.m256i_i32[4], (unsigned int)&unk_1416CDF20, 3);
      v39 = v45;
      v38 = v44;
      if ( v10 )
      {
        v11 = (_QWORD *)(v9 + 8);
        do
        {
          v12 = *(v11 - 1);
          if ( v12 )
            sub_140001660(*v11, v12, 1);
          v11 += 3;
          --v10;
        }
        while ( v10 );
      }
      if ( v31.m256i_i64[0] )
        sub_140001660(v9, 24 * v31.m256i_i64[0], 8);
      v2 = v7;
      v1 = v8;
      if ( *v7 > 1u )
      {
        if ( v4 == 4 )
        {
          v26.m256i_i32[0] = v55;
          v31.m256i_i64[0] = (__int64)&v26;
          v31.m256i_i64[1] = (__int64)sub_1414AB780;
          sub_14149C0F0(&v44, &unk_1416CDBF6, &v31);
          *(_OWORD *)v26.m256i_i8 = v44;
          v26.m256i_i64[2] = v45;
        }
        else
        {
          v26.m256i_i64[0] = 0;
          *(_OWORD *)&v26.m256i_u64[1] = 1u;
        }
        v31.m256i_i64[0] = (__int64)&v26;
        v31.m256i_i64[1] = (__int64)sub_1400015F0;
        v31.m256i_i64[2] = (__int64)&v60;
        v31.m256i_i64[3] = (__int64)sub_1414A9660;
        *(_QWORD *)&v32 = &unk_1416CDF23;
        *((_QWORD *)&v32 + 1) = sub_1414A9660;
        *(_QWORD *)&v33 = &v38;
        *((_QWORD *)&v33 + 1) = sub_1400015F0;
        *(_QWORD *)&v44 = 0;
        *((_QWORD *)&v44 + 1) = aCodexmateLibPl_0;
        v45 = 32;
        v46 = 0;
        v47 = aSrcPlatformPro;
        v48 = 23;
        v49 = 2;
        v50 = aCodexmateLibPl_0;
        v51 = 32;
        v52 = 0x67300000001LL;
        v53 = &unk_1416CDF24;
        v54 = &v31;
        sub_1412C36A0(&v59, &v44);
        if ( v26.m256i_i64[0] )
          sub_140001660(v26.m256i_i64[1], v26.m256i_i64[0], 1);
      }
      sub_1404017D0(&v26, v57, v3, *(unsigned __int8 *)(v56 + 24));
      if ( v26.m256i_i32[0] == -1 )
      {
        *(_WORD *)&v43[1] = 1;
        v16 = v38;
        if ( !(_QWORD)v38 )
          goto LABEL_41;
      }
      else
      {
        v35 = v30;
        v34 = v29;
        v33 = v28;
        v32 = v27;
        v31 = v26;
        v15 = v43[2] + 1;
        if ( v43[2] == 0xFF )
          v15 = -1;
        v43[2] = v15;
        v58 = (unsigned __int8)v15 >= 3u;
        *(_BYTE *)(*(_QWORD *)(v56 + 16) + 16LL) = 1;
        if ( *v7 >= 2u )
        {
          v25[0] = &v60;
          v25[1] = sub_1414A9660;
          v25[2] = &unk_1416CDF23;
          v25[3] = sub_1414A9660;
          v25[4] = &v58;
          v25[5] = sub_1414AC660;
          v25[6] = &v31;
          v25[7] = sub_140B036A0;
          *(_QWORD *)&v44 = 0;
          *((_QWORD *)&v44 + 1) = aCodexmateLibPl_0;
          v45 = 32;
          v46 = 0;
          v47 = aSrcPlatformPro;
          v48 = 23;
          v49 = 2;
          v50 = aCodexmateLibPl_0;
          v51 = 32;
          v52 = 0x68000000001LL;
          v53 = &unk_1416CDFC8;
          v54 = (__m256i *)v25;
          sub_1412C36A0(&v59, &v44);
        }
        sub_140016190((unsigned __int64 *)&v31);
        v16 = v38;
        if ( !(_QWORD)v38 )
          goto LABEL_41;
      }
      sub_140001660(*((_QWORD *)&v38 + 1), v16, 1);
LABEL_41:
      if ( v3 )
      {
        v17 = (_QWORD *)(v57 + 16);
        do
        {
          v18 = *(v17 - 1);
          if ( v18 )
            sub_140001660(*v17, v18, 1);
          v17 += 4;
          --v3;
        }
        while ( v3 );
      }
      if ( (_QWORD)v36 )
        sub_140001660(v57, 32 * v36, 8);
LABEL_3:
      sub_141487490(0, 80000000);
    }
    else
    {
      sub_141487490(0, 80000000);
      if ( v3 )
      {
        v13 = (_QWORD *)(v57 + 16);
        do
        {
          v14 = *(v13 - 1);
          if ( v14 )
            sub_140001660(*v13, v14, 1);
          v13 += 4;
          --v3;
        }
        while ( v3 );
      }
      if ( (_QWORD)v36 )
        sub_140001660(v57, 32 * v36, 8);
    }
  }
  if ( v40 )
    sub_140001660(v41, 4 * v40, 4);
  return sub_14000EBE0(v56);
}