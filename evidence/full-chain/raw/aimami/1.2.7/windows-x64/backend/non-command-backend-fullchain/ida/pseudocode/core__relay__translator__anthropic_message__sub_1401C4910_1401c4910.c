// win 1.2.7 | module src/core/relay/translator/anthropic_message.rs | ea 0x1401c4910 | name sub_1401C4910
// win 1.2.7 | module src/core/relay/translator/anthropic_message.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401C4910(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v15[3]; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]
  __int128 v19; // [rsp+78h] [rbp-8h] BYREF
  __int128 v20; // [rsp+88h] [rbp+8h]
  unsigned __int64 v21; // [rsp+98h] [rbp+18h]
  __int64 v22; // [rsp+A0h] [rbp+20h]
  __int64 v23; // [rsp+A8h] [rbp+28h]
  __int64 v24; // [rsp+B0h] [rbp+30h]
  __int64 v25; // [rsp+B8h] [rbp+38h]
  __int64 v26; // [rsp+C0h] [rbp+40h] BYREF
  _DWORD *v27; // [rsp+C8h] [rbp+48h]
  __int64 v28; // [rsp+D0h] [rbp+50h]
  _DWORD *v29; // [rsp+D8h] [rbp+58h]
  char v30; // [rsp+E7h] [rbp+67h]
  __int64 v31; // [rsp+E8h] [rbp+68h]

  v31 = -2;
  *(_QWORD *)&v17 = 0;
  v18 = 0;
  nullsub_1(a1);
  v4 = (_DWORD *)sub_140001650(4, 1);
  if ( !v4 )
    sub_141938D2B(1, 4);
  *v4 = 1701605234;
  v26 = 4;
  v27 = v4;
  v28 = 4;
  nullsub_1(v5);
  v6 = sub_140001650(9, 1);
  v29 = (_DWORD *)v6;
  if ( !v6 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v6 = 0x6E61747369737361LL;
  *(_BYTE *)(v6 + 8) = 116;
  LOBYTE(v19) = 3;
  *((_QWORD *)&v19 + 1) = 9;
  *(_QWORD *)&v20 = v6;
  *((_QWORD *)&v20 + 1) = 9;
  sub_140E72AA0(v16, &v17, &v26, &v19);
  if ( LOBYTE(v16[0]) != 0xFF )
    sub_14002F9D0(v16);
  nullsub_1(v7);
  v8 = (_DWORD *)sub_140001650(7, 1);
  if ( !v8 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v8 + 3) = 1953391988;
  *v8 = 1953394531;
  v15[0] = 7;
  v29 = v8;
  v15[1] = v8;
  v15[2] = 7;
  v10 = a2[7];
  v11 = a2[8];
  v12 = 0;
  v13 = v10;
  if ( v10 )
    v13 = a2[9];
  LOBYTE(v12) = v10 != 0;
  v19 = v12;
  *(_QWORD *)&v20 = v10;
  *((_QWORD *)&v20 + 1) = v11;
  v21 = v12;
  v22 = 0;
  v23 = v10;
  v24 = v11;
  v25 = v13;
  LOBYTE(v9) = v10 != 0;
  sub_1403EF850(&v26, &v19, v13, v9);
  v30 = 1;
  sub_140C11330(&v19, &v26);
  if ( (_BYTE)v19 == 0xFF )
  {
    *(_QWORD *)&v16[0] = *((_QWORD *)&v19 + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_0,
      43,
      (unsigned int)v16,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419D9548);
  }
  v16[1] = v20;
  v16[0] = v19;
  v30 = 0;
  sub_140E72AA0(&v19, &v17, v15, v16);
  if ( (_BYTE)v19 != 0xFF )
    sub_14002F9D0(&v19);
  if ( v26 )
    sub_140001660(v27, 8 * v26, 8);
  *(_QWORD *)(a1 + 24) = v18;
  *(_OWORD *)(a1 + 8) = v17;
  *(_BYTE *)a1 = 5;
  return a1;
}
