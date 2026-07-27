// module: codexmate_lib/core/oauth_login
// addr: 0x140cefe80
// name: sub_140CEFE80
// win 1.2.1 | module src/core/oauth_login.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140CEFE80(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  char v14; // bl
  __int64 v15; // rdi
  __int64 v16; // rdx
  _OWORD v18[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+48h] [rbp-38h]
  char v21; // [rsp+60h] [rbp-20h]
  char v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+78h] [rbp-8h]
  __int64 v24; // [rsp+80h] [rbp+0h]
  __int128 *v25; // [rsp+88h] [rbp+8h]
  __int64 v26; // [rsp+90h] [rbp+10h]

  v26 = -2;
  v5 = *((unsigned __int8 *)a1 + 72);
  v25 = a1;
  switch ( v5 )
  {
    case 0LL:
      v6 = a2;
      v19 = *((_QWORD *)a1 + 4);
      v7 = *a1;
      v18[1] = a1[1];
      v18[0] = v7;
      *((_BYTE *)a1 + 73) = 0;
      v20 = *(__int128 *)((char *)a1 + 40);
      v21 = 0;
      v22 = 2;
      v8 = sub_140B98700(v18);
      v10 = v9;
      v11 = v25;
      *((_QWORD *)v25 + 7) = v8;
      *((_QWORD *)v11 + 8) = v10;
      a2 = v6;
      break;
    case 1LL:
      sub_1416C3400(&off_1417B9E70, a2, a1, a4);
    case 2LL:
      sub_1416C3420(&off_1417B9E70, a2, a1, a4);
    case 3LL:
      v8 = *((_QWORD *)a1 + 7);
      v10 = *((_QWORD *)a1 + 8);
      break;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 24))(v8, a2);
  v14 = 3;
  if ( v13 != 1 )
  {
    v15 = v12;
    v23 = *((_QWORD *)v25 + 7);
    v24 = *((_QWORD *)v25 + 8);
    if ( *(_QWORD *)v24 )
      (*(void (__fastcall **)(__int64))v24)(v23);
    v16 = *(_QWORD *)(v24 + 8);
    if ( v16 )
      sub_140001660(v23, v16, *(_QWORD *)(v24 + 16));
    v14 = 1;
    if ( v15 )
      sub_1401DD260(v15);
  }
  *((_BYTE *)v25 + 72) = v14;
  LOBYTE(v13) = v13 & 1;
  return (unsigned int)v13;
}