// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d59ab0 | name sub_140D59AB0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D59AB0(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 result; // rax
  _OWORD v8[6]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v9; // [rsp+88h] [rbp+8h]
  __int16 v10; // [rsp+90h] [rbp+10h]
  int v11; // [rsp+92h] [rbp+12h]
  __int16 v12; // [rsp+96h] [rbp+16h]
  __int128 v13; // [rsp+98h] [rbp+18h]
  _BYTE *v14; // [rsp+A8h] [rbp+28h]
  __int64 v15; // [rsp+B0h] [rbp+30h]

  v15 = -2;
  v3 = *a2;
  v14 = a2;
  switch ( v3 )
  {
    case 0LL:
      a2[1] = 0;
      break;
    case 1LL:
      sub_1419393E0(&off_141A495F8);
    case 2LL:
      sub_141939400(&off_141A495F8);
    case 3LL:
      if ( (a2[1] & 1) != 0 )
        sub_1419393E0(&off_141A49058);
      return result;
  }
  a2[1] = 1;
  sub_1411BE1A0(v8, aOk_0, 2);
  v10 = 200;
  *(_OWORD *)(a1 + 112) = v13;
  *(_OWORD *)(a1 + 80) = v8[5];
  *(_OWORD *)(a1 + 64) = v8[4];
  v4 = v8[0];
  v5 = v8[1];
  v6 = v8[2];
  *(_OWORD *)(a1 + 48) = v8[3];
  *(_OWORD *)(a1 + 32) = v6;
  *(_OWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 96) = v9;
  *(_WORD *)(a1 + 104) = v10;
  *(_DWORD *)(a1 + 106) = v11;
  *(_WORD *)(a1 + 110) = v12;
  *v14 = 1;
  return a1;
}
