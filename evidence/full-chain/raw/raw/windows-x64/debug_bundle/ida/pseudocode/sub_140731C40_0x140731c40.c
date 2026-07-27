// module: codexmate_lib/core/debug_bundle
// addr: 0x140731c40
// name: sub_140731C40
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140731C40(__int64 a1, _QWORD *a2, __int64 a3)
{
  void *v6; // rax
  __int64 v7; // rcx
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rcx
  _OWORD *v25; // rax
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rcx
  void *v29; // rax
  void *v30; // rax
  __int64 result; // rax
  _QWORD v32[3]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h]
  __int128 v34; // [rsp+48h] [rbp-38h] BYREF
  __int64 v35; // [rsp+58h] [rbp-28h]
  __m256i v36; // [rsp+60h] [rbp-20h] BYREF
  __m256i v37; // [rsp+80h] [rbp+0h] BYREF
  __int128 v38; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+38h]
  __m256i v40; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v41; // [rsp+E8h] [rbp+68h]
  char v42; // [rsp+F6h] [rbp+76h]
  char v43; // [rsp+F7h] [rbp+77h]
  char v44; // [rsp+F8h] [rbp+78h]
  char v45; // [rsp+F9h] [rbp+79h]
  char v46; // [rsp+FAh] [rbp+7Ah]
  char v47; // [rsp+FBh] [rbp+7Bh]
  char v48; // [rsp+FCh] [rbp+7Ch]
  char v49; // [rsp+FDh] [rbp+7Dh]
  char v50; // [rsp+FEh] [rbp+7Eh]
  char v51; // [rsp+FFh] [rbp+7Fh]
  __int64 v52; // [rsp+100h] [rbp+80h]

  v52 = -2;
  *(_QWORD *)&v34 = 0;
  v35 = 0;
  nullsub_1(a1);
  v6 = (void *)sub_140001650(13, 1);
  if ( !v6 )
    sub_1416C2D4B(1, 13);
  qmemcpy(v6, "schemaVersion", 13);
  v37.m256i_i64[0] = 13;
  v37.m256i_i64[1] = (__int64)v6;
  v37.m256i_i64[2] = 13;
  v36.m256i_i8[0] = 2;
  v36.m256i_i64[1] = 0;
  v36.m256i_i64[2] = 1;
  sub_140307860(&v40, &v34, &v37, &v36);
  if ( v40.m256i_i8[0] != -1 )
    sub_1400104F0(&v40);
  nullsub_1(v7);
  v8 = (void *)sub_140001650(10, 1);
  if ( !v8 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v8, "targetMode", 10);
  v37.m256i_i64[0] = 10;
  v41 = (__int64)v8;
  v37.m256i_i64[1] = (__int64)v8;
  v37.m256i_i64[2] = 10;
  v40.m256i_i64[0] = (__int64)(a2 + 197);
  v40.m256i_i64[1] = (__int64)sub_1407B2DA0;
  sub_14149C0F0(&v36, &unk_141787117, &v40);
  v10 = v36.m256i_i64[2];
  v33 = v36.m256i_i64[1];
  v41 = v36.m256i_i64[0];
  if ( v36.m256i_i64[2] < 0 )
  {
    v11 = 0;
    goto LABEL_7;
  }
  if ( v36.m256i_i64[2] )
  {
    nullsub_1(v9);
    v11 = 1;
    v12 = sub_140001650(v10, 1);
    if ( !v12 )
    {
LABEL_7:
      v43 = 1;
      sub_1416C2D4B(v11, v10);
    }
    v13 = v12;
    sub_141684120(v12, v33, v10);
  }
  else
  {
    v13 = 1;
  }
  v36.m256i_i8[0] = 3;
  v36.m256i_i64[1] = v10;
  v36.m256i_i64[2] = v13;
  v36.m256i_i64[3] = v10;
  v43 = 0;
  sub_140307860(&v40, &v34, &v37, &v36);
  if ( v40.m256i_i8[0] != -1 )
    sub_1400104F0(&v40);
  if ( v41 )
    sub_140001660(v33, v41, 1);
  nullsub_1(v14);
  v15 = (void *)sub_140001650(11, 1);
  if ( !v15 )
    sub_1416C2D4B(1, 11);
  qmemcpy(v15, "configShape", 11);
  *(_QWORD *)&v38 = 11;
  v41 = (__int64)v15;
  *((_QWORD *)&v38 + 1) = v15;
  v39 = 11;
  sub_14071ABC0((__int64)&v36, (__int64)a2, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16));
  v51 = 1;
  sub_140B842D0(&v40, &v36);
  if ( v40.m256i_i8[0] == -1 )
  {
    v37.m256i_i64[0] = v40.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v37,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A1A8);
  }
  v37 = v40;
  v51 = 0;
  sub_140307860(&v40, &v34, &v38, &v37);
  if ( v40.m256i_i8[0] != -1 )
    sub_1400104F0(&v40);
  sub_1400104F0(&v36);
  nullsub_1(v16);
  v17 = sub_140001650(9, 1);
  if ( !v17 )
    sub_1416C2D4B(1, 9);
  *(_QWORD *)v17 = 0x7061685368747561LL;
  *(_BYTE *)(v17 + 8) = 101;
  *(_QWORD *)&v38 = 9;
  v41 = v17;
  *((_QWORD *)&v38 + 1) = v17;
  v39 = 9;
  sub_140719900(&v36, a2);
  v50 = 1;
  sub_140B842D0(&v40, &v36);
  if ( v40.m256i_i8[0] == -1 )
  {
    v37.m256i_i64[0] = v40.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v37,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A1A8);
  }
  v37 = v40;
  v50 = 0;
  sub_140307860(&v40, &v34, &v38, &v37);
  if ( v40.m256i_i8[0] != -1 )
    sub_1400104F0(&v40);
  sub_1400104F0(&v36);
  nullsub_1(v18);
  v19 = (void *)sub_140001650(12, 1);
  if ( !v19 )
    sub_1416C2D4B(1, 12);
  qmemcpy(v19, "catalogShape", 12);
  *(_QWORD *)&v38 = 12;
  v41 = (__int64)v19;
  *((_QWORD *)&v38 + 1) = v19;
  v39 = 12;
  catalog_shape((__int64)&v36, a2);
  v49 = 1;
  sub_140B842D0(&v40, &v36);
  if ( v40.m256i_i8[0] == -1 )
  {
    v37.m256i_i64[0] = v40.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v37,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A1A8);
  }
  v37 = v40;
  v49 = 0;
  sub_140307860(&v40, &v34, &v38, &v37);
  if ( v40.m256i_i8[0] != -1 )
    sub_1400104F0(&v40);
  sub_1400104F0(&v36);
  nullsub_1(v20);
  v21 = (void *)sub_140001650(11, 1);
  if ( !v21 )
    sub_1416C2D4B(1, 11);
  qmemcpy(v21, "threadShape", 11);
  *(_QWORD *)&v38 = 11;
  v41 = (__int64)v21;
  *((_QWORD *)&v38 + 1) = v21;
  v39 = 11;
  sub_14071D450((__int64)&v36, (__int64)a2, a3);
  v48 = 1;
  sub_140B842D0(&v40, &v36);
  if ( v40.m256i_i8[0] == -1 )
  {
    v37.m256i_i64[0] = v40.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v37,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A1A8);
  }
  v37 = v40;
  v48 = 0;
  sub_140307860(&v40, &v34, &v38, &v37);
  if ( v40.m256i_i8[0] != -1 )
    sub_1400104F0(&v40);
  sub_1400104F0(&v36);
  nullsub_1(v22);
  v23 = (void *)sub_140001650(19, 1);
  if ( !v23 )
    sub_1416C2D4B(1, 19);
  qmemcpy(v23, "threadCatalogHealth", 19);
  *(_QWORD *)&v38 = 19;
  v41 = (__int64)v23;
  *((_QWORD *)&v38 + 1) = v23;
  v39 = 19;
  thread_catalog_health((__int64)&v36, (__int64)a2, a3);
  v47 = 1;
  sub_140B842D0(&v40, &v36);
  if ( v40.m256i_i8[0] == -1 )
  {
    v37.m256i_i64[0] = v40.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v37,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A1A8);
  }
  v37 = v40;
  v47 = 0;
  sub_140307860(&v40, &v34, &v38, &v37);
  if ( v40.m256i_i8[0] != -1 )
    sub_1400104F0(&v40);
  sub_1400104F0(&v36);
  nullsub_1(v24);
  v25 = (_OWORD *)sub_140001650(16, 1);
  if ( !v25 )
    sub_1416C2D4B(1, 16);
  *v25 = xmmword_14178A1D3;
  *(_QWORD *)&v38 = 16;
  v41 = (__int64)v25;
  *((_QWORD *)&v38 + 1) = v25;
  v39 = 16;
  sub_1407210F0(&v36, a2);
  v46 = 1;
  sub_140B842D0(&v40, &v36);
  if ( v40.m256i_i8[0] == -1 )
  {
    v37.m256i_i64[0] = v40.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v37,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A1A8);
  }
  v37 = v40;
  v46 = 0;
  sub_140307860(&v40, &v34, &v38, &v37);
  if ( v40.m256i_i8[0] != -1 )
    sub_1400104F0(&v40);
  sub_1400104F0(&v36);
  nullsub_1(v26);
  v27 = (void *)sub_140001650(12, 1);
  if ( !v27 )
    sub_1416C2D4B(1, 12);
  qmemcpy(v27, "processShape", 12);
  *(_QWORD *)&v38 = 12;
  v41 = (__int64)v27;
  *((_QWORD *)&v38 + 1) = v27;
  v39 = 12;
  sub_14071FDD0((__int64)&v36, (__int64)a2);
  v45 = 1;
  sub_140B842D0(&v40, &v36);
  if ( v40.m256i_i8[0] == -1 )
  {
    v37.m256i_i64[0] = v40.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v37,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A1A8);
  }
  v37 = v40;
  v45 = 0;
  sub_140307860(&v40, &v34, &v38, &v37);
  if ( v40.m256i_i8[0] != -1 )
    sub_1400104F0(&v40);
  sub_1400104F0(&v36);
  nullsub_1(v28);
  v29 = (void *)sub_140001650(10, 1);
  if ( !v29 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v29, "invariants", 10);
  v32[0] = 10;
  v32[1] = v29;
  v32[2] = 10;
  *(_QWORD *)&v38 = 0;
  v39 = 0;
  nullsub_1(0x6E61697261766E69LL);
  v30 = (void *)sub_140001650(10, 1);
  if ( !v30 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v30, "violations", 10);
  v37.m256i_i64[0] = 10;
  v37.m256i_i64[1] = (__int64)v30;
  v37.m256i_i64[2] = 10;
  v44 = 1;
  sub_1404683F0((__int64)&v36, (__int64)(a2 + 168));
  if ( v36.m256i_i8[0] == -1 )
  {
    v40.m256i_i64[0] = v36.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v40,
      (unsigned int)&off_141789020,
      (__int64)&off_14178A1A8);
  }
  v40 = v36;
  v44 = 0;
  sub_140307860(&v36, &v38, &v37, &v40);
  if ( v36.m256i_i8[0] != -1 )
    sub_1400104F0(&v36);
  *(_OWORD *)&v36.m256i_u64[1] = v38;
  v36.m256i_i64[3] = v39;
  v36.m256i_i8[0] = 5;
  v42 = 0;
  sub_140307860(&v40, &v34, v32, &v36);
  if ( v40.m256i_i8[0] != -1 )
    sub_1400104F0(&v40);
  result = v35;
  *(_QWORD *)(a1 + 24) = v35;
  *(_OWORD *)(a1 + 8) = v34;
  *(_BYTE *)a1 = 5;
  return result;
}