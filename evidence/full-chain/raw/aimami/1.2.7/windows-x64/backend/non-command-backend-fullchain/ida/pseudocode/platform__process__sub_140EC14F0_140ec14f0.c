// win 1.2.7 | module src/platform/process.rs | ea 0x140ec14f0 | name sub_140EC14F0
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EC14F0(__int64 a1, __int64 *a2)
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
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi
  _QWORD *v18; // r14
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int32 v21; // eax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  int v25; // r8d
  char v26; // dl
  bool v27; // cf
  int v28; // r8d
  int v29; // eax
  __m256i v31; // [rsp+30h] [rbp-50h] BYREF
  __int128 v32; // [rsp+50h] [rbp-30h]
  __int128 v33; // [rsp+60h] [rbp-20h]
  __int128 v34; // [rsp+70h] [rbp-10h]
  __int128 v35; // [rsp+80h] [rbp+0h]
  __int128 v36; // [rsp+90h] [rbp+10h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+20h]
  unsigned __int64 v38; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+30h]
  __int64 v40; // [rsp+B8h] [rbp+38h]
  __m256i v41; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v42; // [rsp+E0h] [rbp+60h]
  __int128 v43; // [rsp+F0h] [rbp+70h]
  __int128 v44; // [rsp+100h] [rbp+80h]
  __int128 v45; // [rsp+110h] [rbp+90h]
  __int128 v46; // [rsp+120h] [rbp+A0h]
  __int64 v47; // [rsp+130h] [rbp+B0h]
  _BYTE v48[24]; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v49; // [rsp+150h] [rbp+D0h]
  __int128 v50; // [rsp+158h] [rbp+D8h]
  __int128 v51; // [rsp+168h] [rbp+E8h]
  __int128 v52; // [rsp+178h] [rbp+F8h]
  __int128 v53; // [rsp+188h] [rbp+108h]
  __int64 v54; // [rsp+198h] [rbp+118h]
  void (__fastcall **v55)(__int64); // [rsp+1A0h] [rbp+120h]
  char v56; // [rsp+1AFh] [rbp+12Fh] BYREF
  __int64 *v57; // [rsp+1B0h] [rbp+130h]
  __int64 v58; // [rsp+1B8h] [rbp+138h]

  v58 = -2;
  *(_BYTE *)(a2[3] + 16) = 1;
  v4 = *a2;
  *a2 = 0;
  v57 = a2;
  if ( v4 )
  {
    *(_QWORD *)v48 = v4;
    *(_OWORD *)&v48[8] = *(_OWORD *)(a2 + 1);
    v5 = sub_14016C3C0(v48);
    if ( v5 )
    {
      v54 = v5;
      v55 = v6;
      if ( *v6 )
        (*v6)(v54);
      v7 = v55[1];
      if ( v7 )
        sub_140001660(v54, v7, v55[2]);
      *(_BYTE *)(v57[5] + 16) = 1;
    }
    a2 = v57;
  }
  LOBYTE(v2) = *((_BYTE *)a2 + 50);
  sub_140EE9280(v48);
  *(_OWORD *)v31.m256i_i8 = *(_OWORD *)&v48[8];
  v31.m256i_i64[2] = v49;
  if ( *(_QWORD *)v48 != -1 )
  {
    v45 = v53;
    v44 = v52;
    v43 = v51;
    v42 = v50;
    *(_OWORD *)&v41.m256i_u64[1] = *(_OWORD *)v31.m256i_i8;
    v41.m256i_i64[3] = v31.m256i_i64[2];
    v41.m256i_i64[0] = *(_QWORD *)v48;
    v9 = v57;
    goto LABEL_31;
  }
  v46 = *(_OWORD *)v31.m256i_i8;
  v47 = v31.m256i_i64[2];
  if ( v31.m256i_i64[2] )
  {
    LOBYTE(v8) = 1;
    sub_140E9FA40((__int64)&v41, 4u, v8, v2, 0);
    v10 = *((_QWORD *)&v46 + 1);
    v11 = 0;
    do
    {
      v12 = *(_QWORD *)(v10 + v11 + 8);
      if ( v12 )
        sub_140001660(*(_QWORD *)(v10 + v11 + 16), v12, 1);
      v11 += 32;
    }
    while ( 32 * v31.m256i_i64[2] != v11 );
    if ( (_QWORD)v46 )
      sub_140001660(v10, 32 * v46, 8);
    v13 = v41.m256i_i64[0];
    goto LABEL_30;
  }
  sub_140EEDA50(v48);
  v14 = *(_QWORD *)v48;
  v15 = *(_QWORD *)&v48[8] + 32LL * *(_QWORD *)&v48[16];
  *(_QWORD *)v48 = *(_QWORD *)&v48[8];
  *(_QWORD *)&v48[16] = v14;
  v49 = v15;
  sub_14038F600(&v38, v48);
  v16 = v40;
  if ( v40 )
  {
    v17 = v39;
    sub_140D1EE10((unsigned int)v48, v39, v40, (unsigned int)&unk_141A55FEA, 3);
    v31.m256i_i64[2] = *(_QWORD *)&v48[16];
    *(_OWORD *)v31.m256i_i8 = *(_OWORD *)v48;
    *(_QWORD *)v48 = &v31;
    *(_QWORD *)&v48[8] = sub_1400015F0;
    sub_1416ABFD0(&v36, &unk_141A55FED, v48);
    if ( v31.m256i_i64[0] )
      sub_140001660(v31.m256i_i64[1], v31.m256i_i64[0], 1);
    *(_OWORD *)&v41.m256i_u64[1] = v36;
    v41.m256i_i64[3] = v37;
    v41.m256i_i64[0] = 10;
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
    v13 = 10;
    v20 = v38;
    if ( !v38 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v41.m256i_i32[2] = 0;
  v41.m256i_i64[0] = -1;
  v13 = -1;
  v17 = v39;
  v20 = v38;
  if ( v38 )
LABEL_27:
    sub_140001660(v17, 24 * v20, 8);
LABEL_28:
  if ( (_QWORD)v46 )
    sub_140001660(*((_QWORD *)&v46 + 1), 32 * v46, 8);
LABEL_30:
  v9 = v57;
  if ( v13 == -1 )
  {
    v21 = v41.m256i_i32[2];
    goto LABEL_37;
  }
LABEL_31:
  if ( !*((_BYTE *)v9 + 49) )
  {
    *(_OWORD *)(a1 + 80) = v45;
    *(_OWORD *)(a1 + 64) = v44;
    v22 = *(_OWORD *)v41.m256i_i8;
    v23 = *(_OWORD *)&v41.m256i_u64[2];
    v24 = v42;
    *(_OWORD *)(a1 + 48) = v43;
    *(_OWORD *)(a1 + 32) = v24;
    *(_OWORD *)(a1 + 16) = v23;
    *(_OWORD *)a1 = v22;
    goto LABEL_40;
  }
  v35 = v45;
  v34 = v44;
  v33 = v43;
  v32 = v42;
  v31 = v41;
  *(_BYTE *)(v9[5] + 16) = 1;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)&v36 = &v31;
    *((_QWORD *)&v36 + 1) = sub_14104A7D0;
    *(_QWORD *)&v51 = 2;
    *((_QWORD *)&v51 + 1) = aCodexmateLibPl_2;
    *(_QWORD *)&v52 = 32;
    *(_QWORD *)&v53 = &unk_141A5965C;
    *((_QWORD *)&v53 + 1) = &v36;
    *(_QWORD *)v48 = 0;
    *(_QWORD *)&v48[8] = aCodexmateLibPl_2;
    *(_QWORD *)&v48[16] = 32;
    v49 = 0;
    *(_QWORD *)&v50 = aSrcPlatformPro_1;
    *((_QWORD *)&v50 + 1) = 23;
    *((_QWORD *)&v52 + 1) = 0x6F400000001LL;
    sub_1414D53A0(&v56, v48);
  }
  sub_140E97700(&v31);
  v21 = 0;
  v9 = v57;
LABEL_37:
  v25 = *(_DWORD *)(v9[4] + 16);
  v26 = *(_BYTE *)(v9[5] + 16);
  v27 = __CFADD__(v21, v25);
  v28 = v21 + v25;
  v29 = -1;
  if ( !v27 )
    v29 = v28;
  *(_DWORD *)(a1 + 8) = v29;
  *(_BYTE *)(a1 + 12) = v26 != 0;
  *(_QWORD *)a1 = -1;
LABEL_40:
  sub_140E97A60();
  return a1;
}
