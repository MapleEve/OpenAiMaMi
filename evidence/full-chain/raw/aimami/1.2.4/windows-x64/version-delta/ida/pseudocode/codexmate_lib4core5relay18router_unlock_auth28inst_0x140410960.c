// win 1.2.4 delta | codexmate_lib4core5relay18router_unlock_auth28inst @ 0x140410960
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay18router_unlock_auth28inst | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_140410960(__int64 a1, __int64 a2)
{
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  __int64 v5; // [rsp+30h] [rbp-20h]
  _QWORD v6[2]; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v7[3]; // [rsp+48h] [rbp-8h] BYREF

  v7[1] = -2;
  v7[0] = a2;
  v6[0] = v7;
  v6[1] = sub_1414FDBC0;
  sub_141509590(&v4, &unk_1417C5F2D, v6);
  *(_QWORD *)(a1 + 24) = v5;
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 10;
  return sub_140045000(v7);
}
