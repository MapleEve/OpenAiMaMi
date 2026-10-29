// win 1.2.7 | module src/core/oauth_login.rs | ea 0x140b4b390 | name sub_140B4B390
// win 1.2.7 | module src/core/oauth_login.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140B4B390(__int128 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int128 v5; // xmm0
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rsi
  char v12; // bl
  __int64 v13; // rdi
  __int64 v14; // rdx
  _OWORD v16[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  __int128 v18; // [rsp+48h] [rbp-38h]
  char v19; // [rsp+60h] [rbp-20h]
  char v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+78h] [rbp-8h]
  __int64 v22; // [rsp+80h] [rbp+0h]
  __int128 *v23; // [rsp+88h] [rbp+8h]
  __int64 v24; // [rsp+90h] [rbp+10h]

  v24 = -2;
  v3 = *((unsigned __int8 *)a1 + 72);
  v23 = a1;
  switch ( v3 )
  {
    case 0LL:
      v4 = a2;
      v17 = *((_QWORD *)a1 + 4);
      v5 = *a1;
      v16[1] = a1[1];
      v16[0] = v5;
      *((_BYTE *)a1 + 73) = 0;
      v18 = *(__int128 *)((char *)a1 + 40);
      v19 = 0;
      v20 = 2;
      v6 = sub_14092EFB0(v16);
      v8 = v7;
      v9 = v23;
      *((_QWORD *)v23 + 7) = v6;
      *((_QWORD *)v9 + 8) = v8;
      a2 = v4;
      break;
    case 1LL:
      sub_1419393E0(&off_141A2A380);
    case 2LL:
      sub_141939400(&off_141A2A380);
    case 3LL:
      v6 = *((_QWORD *)a1 + 7);
      v8 = *((_QWORD *)a1 + 8);
      break;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(v8 + 24))(v6, a2);
  v12 = 3;
  if ( v11 != 1 )
  {
    v13 = v10;
    v21 = *((_QWORD *)v23 + 7);
    v22 = *((_QWORD *)v23 + 8);
    if ( *(_QWORD *)v22 )
      (*(void (__fastcall **)(__int64))v22)(v21);
    v14 = *(_QWORD *)(v22 + 8);
    if ( v14 )
      sub_140001660(v21, v14, *(_QWORD *)(v22 + 16));
    v12 = 1;
    if ( v13 && (unsigned int)(v13 & 3) - 2 >= 2 && (v13 & 3) != 0 )
    {
      *((_QWORD *)&v16[0] + 1) = v13 - 1;
      LOBYTE(v16[0]) = 3;
      sub_1416BCB00((char *)v16 + 8);
    }
  }
  *((_BYTE *)v23 + 72) = v12;
  LOBYTE(v11) = v11 & 1;
  return (unsigned int)v11;
}
