// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140b584e0
// name: sub_140B584E0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140B584E0(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[36]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v6; // [rsp+140h] [rbp+C0h]
  __int64 v7; // [rsp+150h] [rbp+D0h]
  void *v8; // [rsp+158h] [rbp+D8h]
  __int64 v9; // [rsp+160h] [rbp+E0h]
  _QWORD v10[7]; // [rsp+188h] [rbp+108h] BYREF

  v10[5] = -2;
  v5[0] = 0;
  v5[4] = 0;
  v5[8] = 0;
  v5[12] = 0;
  v5[16] = 0;
  v5[20] = 0;
  v5[24] = 0;
  v5[28] = 0;
  v5[32] = 0;
  v6 = 0;
  v7 = 1;
  v8 = &unk_1417B3458;
  v9 = 0;
  nullsub_1(a1);
  v2 = (_QWORD *)sub_140001650(8, 8);
  v10[4] = v2;
  if ( !v2 )
    sub_1416C2D31(8, 8);
  *v2 = sub_140BA2590;
  v10[1] = 0;
  v10[2] = v2;
  v10[3] = &unk_1417B3780;
  v10[0] = 2;
  LOWORD(v3) = 64;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, _QWORD *))sub_140B90C60)(a1, v5, v3, v10);
  return a1;
}