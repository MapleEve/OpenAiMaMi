// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140b90c60
// name: sub_140B90C60
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140B90C60(__int64 a1, __int64 a2, __int16 a3, __int64 *a4)
{
  __int64 v6; // r14
  int v9; // [rsp+20h] [rbp-50h]
  int v10; // [rsp+20h] [rbp-50h]
  int v11; // [rsp+20h] [rbp-50h]
  int v12; // [rsp+20h] [rbp-50h]
  int v13; // [rsp+20h] [rbp-50h]
  int v14; // [rsp+20h] [rbp-50h]
  int v15; // [rsp+20h] [rbp-50h]
  int v16; // [rsp+20h] [rbp-50h]

  v6 = a2 + 320;
  sub_140B83060((unsigned int)"GETHEAD", 3, a2, (_DWORD)a4, a3, 4, a2 + 320, (__int64)&off_1417B58A0, 2);
  LOWORD(v9) = a3;
  sub_140B83060((unsigned int)"HEAD", 4, a2 + 32, (_DWORD)a4, v9, 8, v6, (__int64)&off_1417B58C0, 1);
  LOWORD(v10) = a3;
  sub_140B83060((unsigned int)"TRACE", 5, a2 + 224, (_DWORD)a4, v10, 256, v6, (__int64)&off_1417B58D8, 1);
  LOWORD(v11) = a3;
  sub_140B83060((unsigned int)&unk_1417B58E8, 3, a2 + 192, (_DWORD)a4, v11, 128, v6, (__int64)&off_1417B58F0, 1);
  LOWORD(v12) = a3;
  sub_140B83060((unsigned int)"POST", 4, a2 + 160, (_DWORD)a4, v12, 64, v6, (__int64)&off_1417B5908, 1);
  LOWORD(v13) = a3;
  sub_140B83060((unsigned int)"PATCH", 5, a2 + 128, (_DWORD)a4, v13, 32, v6, (__int64)&off_1417B5920, 1);
  LOWORD(v14) = a3;
  sub_140B83060((unsigned int)"OPTIONS", 7, a2 + 96, (_DWORD)a4, v14, 16, v6, (__int64)&off_1417B5938, 1);
  LOWORD(v15) = a3;
  sub_140B83060((unsigned int)"DELETE", 6, a2 + 64, (_DWORD)a4, v15, 2, v6, (__int64)&off_1417B5950, 1);
  LOWORD(v16) = a3;
  sub_140B83060((unsigned int)"CONNECT", 7, a2 + 96, (_DWORD)a4, v16, 1, v6, (__int64)&off_1417B5968, 1);
  sub_141684120(a1, a2, 360);
  return sub_14043C0F0(a4);
}