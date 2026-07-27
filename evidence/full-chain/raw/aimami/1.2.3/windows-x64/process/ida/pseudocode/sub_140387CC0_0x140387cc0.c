// module: codexmate_lib/platform/process
// addr: 0x140387cc0
// name: sub_140387CC0
// win 1.2.1 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140387CC0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  void (__fastcall **v6)(__int64); // rdx
  void (__fastcall *v7)(__int64); // rdx
  __int64 v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi
  _QWORD *v18; // r14
  __int64 v19; // rdx
  __int32 v20; // eax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  int v24; // r8d
  char v25; // dl
  bool v26; // cf
  int v27; // r8d
  int v28; // eax
  __m256i v30; // [rsp+30h] [rbp-50h] BYREF
  __int128 v31; // [rsp+50h] [rbp-30h]
  __int128 v32; // [rsp+60h] [rbp-20h]
  __int128 v33; // [rsp+70h] [rbp-10h]
  __int128 v34; // [rsp+80h] [rbp+0h]
  __int128 v35; // [rsp+90h] [rbp+10h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+20h]
  __int64 v37; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+30h]
  __int64 v39; // [rsp+B8h] [rbp+38h]
  __m256i v40; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v41; // [rsp+E0h] [rbp+60h]
  __int128 v42; // [rsp+F0h] [rbp+70h]
  __int128 v43; // [rsp+100h] [rbp+80h]
  __int128 v44; // [rsp+110h] [rbp+90h]
  __int128 v45; // [rsp+120h] [rbp+A0h]
  __int64 v46; // [rsp+130h] [rbp+B0h]
  _BYTE v47[24]; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v48; // [rsp+150h] [rbp+D0h]
  __int128 v49; // [rsp+158h] [rbp+D8h]
  __int128 v50; // [rsp+168h] [rbp+E8h]
  __int128 v51; // [rsp+178h] [rbp+F8h]
  __int128 v52; // [rsp+188h] [rbp+108h]
  __int64 v53; // [rsp+198h] [rbp+118h]
  void (__fastcall **v54)(__int64); // [rsp+1A0h] [rbp+120h]
  __int64 *v55; // [rsp+1A8h] [rbp+128h]
  char v56; // [rsp+1B7h] [rbp+137h] BYREF
  __int64 v57; // [rsp+1B8h] [rbp+138h]

  v57 = -2;
  *(_BYTE *)(a2[3] + 16) = 1;
  v4 = *a2;
  *a2 = 0;
  v55 = a2;
  if ( v4 )
  {
    *(_QWORD *)v47 = v4;
    *(_OWORD *)&v47[8] = *(_OWORD *)(a2 + 1);
    v5 = sub_1405704F0(v47);
    if ( v5 )
    {
      v53 = v5;
      v54 = v6;
      if ( *v6 )
        (*v6)(v53);
      v7 = v54[1];
      if ( v7 )
        sub_140001660(v53, v7, v54[2]);
      *(_BYTE *)(v55[5] + 16) = 1;
    }
    a2 = v55;
  }
  LOBYTE(v2) = *((_BYTE *)a2 + 50);
  sub_1403FB4E0(v47);
  *(_OWORD *)v30.m256i_i8 = *(_OWORD *)&v47[8];
  v30.m256i_i64[2] = v48;
  if ( *(_QWORD *)v47 != -1 )
  {
    v44 = v52;
    v43 = v51;
    v42 = v50;
    v41 = v49;
    *(_OWORD *)&v40.m256i_u64[1] = *(_OWORD *)v30.m256i_i8;
    v40.m256i_i64[3] = v30.m256i_i64[2];
    v40.m256i_i64[0] = *(_QWORD *)v47;
    v9 = v55;
    goto LABEL_32;
  }
  v45 = *(_OWORD *)v30.m256i_i8;
  v46 = v30.m256i_i64[2];
  if ( v30.m256i_i64[2] )
  {
    LOBYTE(v8) = 1;
    enforce_codex_quiet_window_with(&v40, 4, v8, v2);
    v10 = *((_QWORD *)&v45 + 1);
    v11 = 0;
    do
    {
      v12 = *(_QWORD *)(v10 + v11 + 8);
      if ( v12 )
        sub_140001660(*(_QWORD *)(v10 + v11 + 16), v12, 1);
      v11 += 32;
    }
    while ( 32 * v30.m256i_i64[2] != v11 );
    v13 = v45;
    if ( !(_QWORD)v45 )
      goto LABEL_31;
LABEL_30:
    sub_140001660(v10, 32 * v13, 8);
    goto LABEL_31;
  }
  sub_1403FE220(v47);
  v14 = *(_QWORD *)v47;
  v15 = *(_QWORD *)&v47[8] + 32LL * *(_QWORD *)&v47[16];
  *(_QWORD *)v47 = *(_QWORD *)&v47[8];
  *(_QWORD *)&v47[16] = v14;
  v48 = v15;
  sub_1402CA150(&v37, v47);
  v16 = v39;
  if ( v39 )
  {
    v17 = v38;
    sub_140440300((unsigned int)v47, v38, v39, (unsigned int)&aCodeSwitchRoll[35], 3);
    v30.m256i_i64[2] = *(_QWORD *)&v47[16];
    *(_OWORD *)v30.m256i_i8 = *(_OWORD *)v47;
    *(_QWORD *)v47 = &v30;
    *(_QWORD *)&v47[8] = sub_1400015F0;
    sub_14149C0F0(&v35, &unk_141749F02, v47);
    if ( v30.m256i_i64[0] )
      sub_140001660(v30.m256i_i64[1], v30.m256i_i64[0], 1);
    *(_OWORD *)&v40.m256i_u64[1] = v35;
    v40.m256i_i64[3] = v36;
    v40.m256i_i64[0] = 10;
    v18 = (_QWORD *)(v17 + 8);
    do
    {
      v19 = *(v18 - 1);
      if ( v19 )
        sub_140001660(*v18, v19, 1);
      v18 += 3;
      --v16;
    }
    while ( v16 );
  }
  else
  {
    v40.m256i_i32[2] = 0;
    v40.m256i_i64[0] = -1;
    v17 = v38;
  }
  if ( v37 )
    sub_140001660(v17, 24 * v37, 8);
  v13 = v45;
  if ( (_QWORD)v45 )
  {
    v10 = *((_QWORD *)&v45 + 1);
    goto LABEL_30;
  }
LABEL_31:
  v9 = v55;
  if ( v40.m256i_i64[0] == -1 )
  {
    v20 = v40.m256i_i32[2];
    goto LABEL_38;
  }
LABEL_32:
  if ( !*((_BYTE *)v9 + 49) )
  {
    *(_OWORD *)(a1 + 80) = v44;
    *(_OWORD *)(a1 + 64) = v43;
    v21 = *(_OWORD *)v40.m256i_i8;
    v22 = *(_OWORD *)&v40.m256i_u64[2];
    v23 = v41;
    *(_OWORD *)(a1 + 48) = v42;
    *(_OWORD *)(a1 + 32) = v23;
    *(_OWORD *)(a1 + 16) = v22;
    *(_OWORD *)a1 = v21;
    goto LABEL_41;
  }
  v34 = v44;
  v33 = v43;
  v32 = v42;
  v31 = v41;
  v30 = v40;
  *(_BYTE *)(v9[5] + 16) = 1;
  if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
    *(_QWORD *)&v35 = &v30;
    *((_QWORD *)&v35 + 1) = sub_140B036A0;
    *(_QWORD *)v47 = 0;
    *(_QWORD *)&v47[8] = aCodexmateLibPl_2;
    *(_QWORD *)&v47[16] = 32;
    v48 = 0;
    *(_QWORD *)&v49 = aSrcPlatformPro_2;
    *((_QWORD *)&v49 + 1) = 23;
    *(_QWORD *)&v50 = 2;
    *((_QWORD *)&v50 + 1) = aCodexmateLibPl_2;
    *(_QWORD *)&v51 = 32;
    *((_QWORD *)&v51 + 1) = 0x6B200000001LL;
    *(_QWORD *)&v52 = &unk_14174E4B9;
    *((_QWORD *)&v52 + 1) = &v35;
    sub_1412C36A0(&v56, v47);
  }
  sub_14034ED40(&v30);
  v20 = 0;
  v9 = v55;
LABEL_38:
  v24 = *(_DWORD *)(v9[4] + 16);
  v25 = *(_BYTE *)(v9[5] + 16);
  v26 = __CFADD__(v20, v24);
  v27 = v20 + v24;
  v28 = -1;
  if ( !v26 )
    v28 = v27;
  *(_DWORD *)(a1 + 8) = v28;
  *(_BYTE *)(a1 + 12) = v25 != 0;
  *(_QWORD *)a1 = -1;
LABEL_41:
  sub_14034F360();
  return a1;
}