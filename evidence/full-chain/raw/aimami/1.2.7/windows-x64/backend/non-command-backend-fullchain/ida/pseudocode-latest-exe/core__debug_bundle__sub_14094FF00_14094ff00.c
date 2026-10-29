// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x14094ff00 | successor of pre-update 0x140c27670 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
__int64 __fastcall sub_14094FF00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  _QWORD *v15; // r12
  __int64 v16; // rdx
  _QWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  char *v23; // rax
  _BYTE v24[112]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v25[112]; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v26[3]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v27; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v28; // [rsp+138h] [rbp+B8h]
  __int128 v29; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v30; // [rsp+150h] [rbp+D0h]
  __int128 v31; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v32; // [rsp+170h] [rbp+F0h]
  __int128 v33; // [rsp+180h] [rbp+100h] BYREF
  __int128 v34; // [rsp+190h] [rbp+110h]
  __int64 v35; // [rsp+1A0h] [rbp+120h] BYREF
  char *v36; // [rsp+1A8h] [rbp+128h]
  __int64 v37; // [rsp+1B0h] [rbp+130h]
  _QWORD *v38; // [rsp+1B8h] [rbp+138h]
  char v39; // [rsp+1C2h] [rbp+142h]
  char v40; // [rsp+1C3h] [rbp+143h]
  char v41; // [rsp+1C4h] [rbp+144h]
  char v42; // [rsp+1C5h] [rbp+145h]
  char v43; // [rsp+1C6h] [rbp+146h]
  char v44; // [rsp+1C7h] [rbp+147h]
  __int64 v45; // [rsp+1C8h] [rbp+148h]

  v45 = -2;
  v6 = sub_140953E00(a2);
  if ( v6 )
    return sub_14096A650(a1, v6, aThreadProvider, 32);
  sub_1407F4CD0(v25, a2, aAimai1_2, 6);
  v39 = 1;
  sub_1407F4CD0(v24, a2, aOpenai_2, 6);
  *(_QWORD *)&v27 = 0;
  v28 = 0;
  nullsub_1(v9, v8);
  v10 = (_QWORD *)sub_140001650(8, 1);
  if ( !v10 )
  {
    v44 = 1;
    v43 = 1;
    sub_14196B2DB(1, 8);
  }
  *v10 = 0x7362446574617473LL;
  v26[0] = 8;
  v38 = v10;
  v26[1] = v10;
  v26[2] = 8;
  sub_140A2C460(&v29, a2);
  v11 = *((_QWORD *)&v29 + 1);
  v12 = v30;
  *(_QWORD *)&v31 = *((_QWORD *)&v29 + 1);
  *((_QWORD *)&v31 + 1) = *((_QWORD *)&v29 + 1) + 32 * v30;
  *(_QWORD *)&v32 = a3;
  sub_1402268D0((__int64)&v35, &v31);
  v42 = 1;
  sub_1407B3FB0(&v31, &v35);
  if ( (_BYTE)v31 == 0xFF )
  {
    *(_QWORD *)&v33 = *((_QWORD *)&v31 + 1);
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v33,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5BE80);
  }
  v34 = v32;
  v33 = v31;
  v42 = 0;
  sub_140A68320(&v31, &v27, v26, &v33);
  if ( (_BYTE)v31 != 0xFF )
    sub_140032FF0(&v31);
  v14 = v37;
  if ( v37 )
  {
    v15 = v36 + 8;
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
  if ( v35 )
    sub_140001660(v36, 24 * v35, 8);
  if ( v12 )
  {
    v17 = (_QWORD *)(v11 + 8);
    do
    {
      v18 = *(v17 - 1);
      if ( v18 )
        sub_140001660(*v17, v18, 1);
      v17 += 4;
      --v12;
    }
    while ( v12 );
  }
  v19 = v29;
  if ( (_QWORD)v29 )
    sub_140001660(v11, 32 * v29, 8);
  nullsub_1(v13, v19);
  v20 = (char *)sub_140001650(12, 1);
  if ( !v20 )
  {
    v44 = 1;
    v43 = 1;
    sub_14196B2DB(1, 12);
  }
  qmemcpy(v20, "routerTarget", 12);
  v35 = 12;
  v38 = v20;
  v36 = v20;
  v37 = 12;
  sub_1409532A0(&v31, v25, a3);
  v41 = 1;
  sub_140B73E90(&v33, &v31);
  if ( (_BYTE)v33 == 0xFF )
  {
    *(_QWORD *)&v29 = *((_QWORD *)&v33 + 1);
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v29,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5BE80);
  }
  v30 = v34;
  v29 = v33;
  v41 = 0;
  sub_140A68320(&v33, &v27, &v35, &v29);
  if ( (_BYTE)v33 != 0xFF )
    sub_140032FF0(&v33);
  v44 = 1;
  v43 = 0;
  sub_140032FF0(&v31);
  nullsub_1(v22, v21);
  v23 = (char *)sub_140001650(12, 1);
  if ( !v23 )
  {
    v44 = 1;
    v43 = 0;
    sub_14196B2DB(1, 12);
  }
  qmemcpy(v23, "nativeTarget", 12);
  v35 = 12;
  v38 = v23;
  v36 = v23;
  v37 = 12;
  sub_1409532A0(&v31, v24, a3);
  v40 = 1;
  sub_140B73E90(&v33, &v31);
  if ( (_BYTE)v33 == 0xFF )
  {
    *(_QWORD *)&v29 = *((_QWORD *)&v33 + 1);
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v29,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5BE80);
  }
  v30 = v34;
  v29 = v33;
  v40 = 0;
  sub_140A68320(&v33, &v27, &v35, &v29);
  if ( (_BYTE)v33 != 0xFF )
    sub_140032FF0(&v33);
  v44 = 0;
  v43 = 0;
  sub_140032FF0(&v31);
  result = v28;
  *(_QWORD *)(a1 + 24) = v28;
  *(_OWORD *)(a1 + 8) = v27;
  *(_BYTE *)a1 = 5;
  return result;
}
