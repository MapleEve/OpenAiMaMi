// module: codexmate_lib/core/debug_bundle
// addr: 0x14071d450
// name: sub_14071D450
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14071D450(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r15
  _QWORD *v17; // r12
  __int64 v18; // rdx
  _QWORD *v19; // r15
  __int64 v20; // rdx
  char *v21; // rax
  __int64 v22; // rcx
  char *v23; // rax
  __int64 result; // rax
  unsigned __int64 v25; // rax
  _BYTE v26[112]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v27[112]; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v28[3]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v29; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v30; // [rsp+138h] [rbp+B8h]
  __int128 v31; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v32; // [rsp+150h] [rbp+D0h]
  __int128 v33; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v34; // [rsp+170h] [rbp+F0h]
  __int128 v35; // [rsp+180h] [rbp+100h] BYREF
  __int128 v36; // [rsp+190h] [rbp+110h]
  __int64 v37; // [rsp+1A0h] [rbp+120h] BYREF
  char *v38; // [rsp+1A8h] [rbp+128h]
  __int64 v39; // [rsp+1B0h] [rbp+130h]
  _QWORD *v40; // [rsp+1B8h] [rbp+138h]
  char v41; // [rsp+1C2h] [rbp+142h]
  char v42; // [rsp+1C3h] [rbp+143h]
  char v43; // [rsp+1C4h] [rbp+144h]
  char v44; // [rsp+1C5h] [rbp+145h]
  char v45; // [rsp+1C6h] [rbp+146h]
  char v46; // [rsp+1C7h] [rbp+147h]
  __int64 v47; // [rsp+1C8h] [rbp+148h]

  v47 = -2;
  if ( *(_BYTE *)(a2 + 1577) != 1 || *(_QWORD *)(a2 + 1504) == -1 )
    goto LABEL_13;
  v6 = *(unsigned __int64 **)(a2 + 1512);
  v7 = *(_QWORD *)(a2 + 1520);
  switch ( v7 )
  {
    case 8LL:
      v25 = _byteswap_uint64(*v6);
      if ( v25 > 0x7265747279696E67LL != v25 < 0x7265747279696E67LL )
        break;
      return sub_140735F70(a1, a2 + 1504, aThreadProvider, 32);
    case 11LL:
      v8 = _byteswap_uint64(*v6);
      v9 = 0x7265636F6E63696CLL;
      if ( v8 == 0x7265636F6E63696CLL )
      {
        v8 = _byteswap_uint64(*(unsigned __int64 *)((char *)v6 + 3));
        v9 = 0x6F6E63696C696E67LL;
LABEL_10:
        v10 = 0;
        if ( v8 == v9 )
          goto LABEL_12;
      }
LABEL_11:
      v10 = 2 * (v8 >= v9) - 1;
LABEL_12:
      if ( v10 )
        break;
      return sub_140735F70(a1, a2 + 1504, aThreadProvider, 32);
    case 14LL:
      v8 = _byteswap_uint64(*v6);
      v9 = 0x73746F7070696E67LL;
      if ( v8 == 0x73746F7070696E67LL )
      {
        v8 = _byteswap_uint64(*(unsigned __int64 *)((char *)v6 + 6));
        v9 = 0x6E675F636F646578LL;
        goto LABEL_10;
      }
      goto LABEL_11;
  }
LABEL_13:
  sub_1404C22C0(v27, a2, aAimai1_1, 6);
  v41 = 1;
  sub_1404C22C0(v26, a2, aOpenai_0, 6);
  *(_QWORD *)&v29 = 0;
  v30 = 0;
  nullsub_1(v11);
  v12 = (_QWORD *)sub_140001650(8, 1);
  if ( !v12 )
  {
    v46 = 1;
    v45 = 1;
    sub_1416C2D4B(1, 8);
  }
  *v12 = 0x7362446574617473LL;
  v28[0] = 8;
  v40 = v12;
  v28[1] = v12;
  v28[2] = 8;
  sub_140712830(&v31);
  v13 = *((_QWORD *)&v31 + 1);
  v14 = v32;
  *(_QWORD *)&v33 = *((_QWORD *)&v31 + 1);
  *((_QWORD *)&v33 + 1) = *((_QWORD *)&v31 + 1) + 32 * v32;
  *(_QWORD *)&v34 = a3;
  sub_140328620((__int64)&v37, &v33);
  v44 = 1;
  sub_140467F40(&v33, &v37);
  if ( (_BYTE)v33 == 0xFF )
  {
    *(_QWORD *)&v35 = *((_QWORD *)&v33 + 1);
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v35,
      (unsigned int)&off_141789020,
      (__int64)&off_141789A40);
  }
  v36 = v34;
  v35 = v33;
  v44 = 0;
  sub_140307860(&v33, &v29, v28, &v35);
  if ( (_BYTE)v33 != 0xFF )
    sub_1400104F0(&v33);
  v16 = v39;
  if ( v39 )
  {
    v17 = v38 + 8;
    do
    {
      v18 = *(v17 - 1);
      if ( v18 )
        sub_140001660(*v17, v18, 1);
      v17 += 3;
      --v16;
    }
    while ( v16 );
  }
  if ( v37 )
    sub_140001660(v38, 24 * v37, 8);
  if ( v14 )
  {
    v19 = (_QWORD *)(v13 + 8);
    do
    {
      v20 = *(v19 - 1);
      if ( v20 )
        sub_140001660(*v19, v20, 1);
      v19 += 4;
      --v14;
    }
    while ( v14 );
  }
  if ( (_QWORD)v31 )
    sub_140001660(v13, 32 * v31, 8);
  nullsub_1(v15);
  v21 = (char *)sub_140001650(12, 1);
  if ( !v21 )
  {
    v46 = 1;
    v45 = 1;
    sub_1416C2D4B(1, 12);
  }
  qmemcpy(v21, "routerTarget", 12);
  v37 = 12;
  v40 = v21;
  v38 = v21;
  v39 = 12;
  sub_1407204C0(&v33, v27, a3);
  v43 = 1;
  sub_140B842D0(&v35, &v33);
  if ( (_BYTE)v35 == 0xFF )
  {
    *(_QWORD *)&v31 = *((_QWORD *)&v35 + 1);
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v31,
      (unsigned int)&off_141789020,
      (__int64)&off_141789A40);
  }
  v32 = v36;
  v31 = v35;
  v43 = 0;
  sub_140307860(&v35, &v29, &v37, &v31);
  if ( (_BYTE)v35 != 0xFF )
    sub_1400104F0(&v35);
  v46 = 1;
  v45 = 0;
  sub_1400104F0(&v33);
  nullsub_1(v22);
  v23 = (char *)sub_140001650(12, 1);
  if ( !v23 )
  {
    v46 = 1;
    v45 = 0;
    sub_1416C2D4B(1, 12);
  }
  qmemcpy(v23, "nativeTarget", 12);
  v37 = 12;
  v40 = v23;
  v38 = v23;
  v39 = 12;
  sub_1407204C0(&v33, v26, a3);
  v42 = 1;
  sub_140B842D0(&v35, &v33);
  if ( (_BYTE)v35 == 0xFF )
  {
    *(_QWORD *)&v31 = *((_QWORD *)&v35 + 1);
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v31,
      (unsigned int)&off_141789020,
      (__int64)&off_141789A40);
  }
  v32 = v36;
  v31 = v35;
  v42 = 0;
  sub_140307860(&v35, &v29, &v37, &v31);
  if ( (_BYTE)v35 != 0xFF )
    sub_1400104F0(&v35);
  v46 = 0;
  v45 = 0;
  sub_1400104F0(&v33);
  result = v30;
  *(_QWORD *)(a1 + 24) = v30;
  *(_OWORD *)(a1 + 8) = v29;
  *(_BYTE *)a1 = 5;
  return result;
}