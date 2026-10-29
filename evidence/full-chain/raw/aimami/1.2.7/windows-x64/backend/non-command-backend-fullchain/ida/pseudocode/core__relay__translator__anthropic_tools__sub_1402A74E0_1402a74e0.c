// win 1.2.7 | module src/core/relay/translator/anthropic_tools.rs | ea 0x1402a74e0 | name sub_1402A74E0
// win 1.2.7 | module src/core/relay/translator/anthropic_tools.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_1402A74E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rax
  _QWORD *result; // rax
  _BYTE v16[31]; // [rsp+29h] [rbp-57h]
  _OWORD v17[2]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v18; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v19; // [rsp+C0h] [rbp+40h]
  __int128 v20; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+E0h] [rbp+60h]
  __int64 v22; // [rsp+E8h] [rbp+68h]
  _QWORD *v23; // [rsp+F0h] [rbp+70h]
  __int64 v24; // [rsp+F8h] [rbp+78h] BYREF
  _DWORD *v25; // [rsp+100h] [rbp+80h]
  __int64 v26; // [rsp+108h] [rbp+88h]
  __int64 v27; // [rsp+110h] [rbp+90h]
  char v28; // [rsp+11Fh] [rbp+9Fh]
  __int64 v29; // [rsp+120h] [rbp+A0h]

  v29 = -2;
  v23 = *(_QWORD **)a3;
  v27 = *(_QWORD *)(a3 + 8);
  if ( a1 != a2 )
  {
    v3 = a1;
    v4 = *(_QWORD *)(a3 + 16);
    v5 = (unsigned __int64)(a2 - a1) >> 5;
    v6 = 0;
    do
    {
      *(_QWORD *)&v20 = 0;
      v21 = 0;
      nullsub_1(a1);
      v9 = (_DWORD *)sub_140001650(4, 1);
      if ( !v9 )
        sub_141938D2B(1, 4);
      *v9 = 1701869940;
      v24 = 4;
      v25 = v9;
      v26 = 4;
      nullsub_1(v10);
      v22 = sub_140001650(14, 1);
      if ( !v22 )
        sub_141938D2B(1, 14);
      v11 = (_QWORD *)v22;
      *(_QWORD *)(v22 + 6) = 0x65636E6572656665LL;
      *v11 = 0x6665725F6C6F6F74LL;
      LOBYTE(v18) = 3;
      *((_QWORD *)&v18 + 1) = 14;
      *(_QWORD *)&v19 = v11;
      *((_QWORD *)&v19 + 1) = 14;
      sub_140E72AA0(v17, &v20, &v24, &v18);
      if ( LOBYTE(v17[0]) != 0xFF )
        sub_14002F9D0(v17);
      nullsub_1(v12);
      v13 = sub_140001650(9, 1);
      if ( !v13 )
        sub_141938D2B(1, 9);
      *(_QWORD *)v13 = 0x6D616E5F6C6F6F74LL;
      *(_BYTE *)(v13 + 8) = 101;
      v24 = 9;
      v25 = (_DWORD *)v13;
      v26 = 9;
      v28 = 1;
      v14 = (void *)sub_1416419F0(aName_2, 4, v3 + 32 * v6);
      if ( !v14 )
        v14 = off_1421E7108;
      v28 = 1;
      sub_140412420(&v18, v14);
      if ( (_BYTE)v18 == 0xFF )
      {
        *(_QWORD *)&v17[0] = *((_QWORD *)&v18 + 1);
        sub_141939040(
          (unsigned int)aCalledResultUn_2,
          43,
          (unsigned int)v17,
          (unsigned int)&off_1419E6A30,
          (__int64)&off_1419E6818);
      }
      v17[1] = v19;
      v17[0] = v18;
      v28 = 0;
      sub_140E72AA0(&v18, &v20, &v24, v17);
      if ( (_BYTE)v18 != 0xFF )
        sub_14002F9D0(&v18);
      *(_QWORD *)&v16[23] = v21;
      *(_OWORD *)&v16[7] = v20;
      v7 = v27;
      v8 = 32 * v27;
      *(_BYTE *)(v4 + v8) = 5;
      *(_OWORD *)(v4 + v8 + 1) = *(_OWORD *)v16;
      *(_OWORD *)(v4 + v8 + 16) = *(_OWORD *)&v16[15];
      a1 = v7 + 1;
      v27 = a1;
      ++v6;
    }
    while ( v6 != v5 );
  }
  result = v23;
  *v23 = v27;
  return result;
}
