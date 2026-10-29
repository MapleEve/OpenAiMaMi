// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140c27670 | name sub_140C27670
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C27670(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rcx
  char *v13; // r14
  __int64 v14; // r12
  _QWORD *v15; // r13
  __int64 v16; // rdx
  _QWORD *v17; // r14
  __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // rcx
  char *v21; // rax
  _BYTE v22[112]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v23[112]; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v24[3]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v25; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v26; // [rsp+138h] [rbp+B8h]
  __int128 v27; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v28; // [rsp+150h] [rbp+D0h]
  __int128 v29; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v30; // [rsp+170h] [rbp+F0h]
  __int128 v31; // [rsp+180h] [rbp+100h] BYREF
  __int128 v32; // [rsp+190h] [rbp+110h]
  __int64 v33; // [rsp+1A8h] [rbp+128h] BYREF
  char *v34; // [rsp+1B0h] [rbp+130h]
  __int64 v35; // [rsp+1B8h] [rbp+138h]
  _QWORD *v36; // [rsp+1C0h] [rbp+140h]
  char v37; // [rsp+1CAh] [rbp+14Ah]
  char v38; // [rsp+1CBh] [rbp+14Bh]
  char v39; // [rsp+1CCh] [rbp+14Ch]
  char v40; // [rsp+1CDh] [rbp+14Dh]
  char v41; // [rsp+1CEh] [rbp+14Eh]
  char v42; // [rsp+1CFh] [rbp+14Fh]
  __int64 v43; // [rsp+1D0h] [rbp+150h]

  v43 = -2;
  v6 = sub_140C2B610(a2);
  if ( v6 )
    return sub_140C45750(a1, v6, aThreadProvider_0, 32);
  sub_14024DBF0(v23, a2, &dword_141A3CEF0, 6);
  v37 = 1;
  sub_14024DBF0(v22, a2, aOpenai, 6);
  *(_QWORD *)&v25 = 0;
  v26 = 0;
  nullsub_1(v8);
  v9 = (_QWORD *)sub_140001650(8, 1);
  if ( !v9 )
  {
    v42 = 1;
    v41 = 1;
    sub_141938D2B(1, 8);
  }
  *v9 = 0x7362446574617473LL;
  v24[0] = 8;
  v36 = v9;
  v24[1] = v9;
  v24[2] = 8;
  sub_1401B7010(&v27, a2);
  v10 = *((_QWORD *)&v27 + 1);
  v11 = v28;
  *(_QWORD *)&v29 = *((_QWORD *)&v27 + 1);
  *((_QWORD *)&v29 + 1) = *((_QWORD *)&v27 + 1) + 32 * v28;
  *(_QWORD *)&v30 = a3;
  sub_1403EBA90((__int64)&v33, &v29);
  v40 = 1;
  sub_140C100F0(&v29, &v33);
  if ( (_BYTE)v29 == 0xFF )
  {
    *(_QWORD *)&v31 = *((_QWORD *)&v29 + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v31,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3CF00);
  }
  v32 = v30;
  v31 = v29;
  v40 = 0;
  sub_140E72AA0(&v29, &v25, v24, &v31);
  if ( (_BYTE)v29 != 0xFF )
    sub_14002F9D0(&v29);
  v13 = v34;
  v14 = v35;
  if ( v35 )
  {
    v15 = v34 + 8;
    do
    {
      v16 = *(v15 - 1);
      if ( v16 )
        sub_140001660(*v15, v16, 1);
      v15 += 3;
      --v14;
    }
    while ( v14 );
  }
  if ( v33 )
    sub_140001660(v13, 24 * v33, 8);
  if ( v11 )
  {
    v17 = (_QWORD *)(v10 + 8);
    do
    {
      v18 = *(v17 - 1);
      if ( v18 )
        sub_140001660(*v17, v18, 1);
      v17 += 4;
      --v11;
    }
    while ( v11 );
  }
  if ( (_QWORD)v27 )
    sub_140001660(v10, 32 * v27, 8);
  nullsub_1(v12);
  v19 = (char *)sub_140001650(12, 1);
  if ( !v19 )
  {
    v42 = 1;
    v41 = 1;
    sub_141938D2B(1, 12);
  }
  qmemcpy(v19, "routerTarget", 12);
  v33 = 12;
  v36 = v19;
  v34 = v19;
  v35 = 12;
  sub_140C2AAB0(&v29, v23, a3);
  v39 = 1;
  sub_140412420(&v31, &v29);
  if ( (_BYTE)v31 == 0xFF )
  {
    *(_QWORD *)&v27 = *((_QWORD *)&v31 + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v27,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3CF00);
  }
  v28 = v32;
  v27 = v31;
  v39 = 0;
  sub_140E72AA0(&v31, &v25, &v33, &v27);
  if ( (_BYTE)v31 != 0xFF )
    sub_14002F9D0(&v31);
  v42 = 1;
  v41 = 0;
  sub_14002F9D0(&v29);
  nullsub_1(v20);
  v21 = (char *)sub_140001650(12, 1);
  if ( !v21 )
  {
    v42 = 1;
    v41 = 0;
    sub_141938D2B(1, 12);
  }
  qmemcpy(v21, "nativeTarget", 12);
  v33 = 12;
  v36 = v21;
  v34 = v21;
  v35 = 12;
  sub_140C2AAB0(&v29, v22, a3);
  v38 = 1;
  sub_140412420(&v31, &v29);
  if ( (_BYTE)v31 == 0xFF )
  {
    *(_QWORD *)&v27 = *((_QWORD *)&v31 + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v27,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3CF00);
  }
  v28 = v32;
  v27 = v31;
  v38 = 0;
  sub_140E72AA0(&v31, &v25, &v33, &v27);
  if ( (_BYTE)v31 != 0xFF )
    sub_14002F9D0(&v31);
  v42 = 0;
  v41 = 0;
  sub_14002F9D0(&v29);
  result = v26;
  *(_QWORD *)(a1 + 24) = v26;
  *(_OWORD *)(a1 + 8) = v25;
  *(_BYTE *)a1 = 5;
  return result;
}
