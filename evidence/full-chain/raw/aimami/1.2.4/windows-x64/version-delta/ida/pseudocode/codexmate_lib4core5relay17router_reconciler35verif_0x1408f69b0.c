// win 1.2.4 delta | codexmate_lib4core5relay17router_reconciler35verif @ 0x1408f69b0
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay17router_reconciler35verif | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_1408F69B0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  __int64 v5; // [rsp+30h] [rbp-20h]
  _QWORD v6[2]; // [rsp+38h] [rbp-18h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp-8h]
  __int64 v8; // [rsp+50h] [rbp+0h]

  v8 = -2;
  v7 = a2;
  v6[0] = a2;
  v6[1] = sub_1400015F0;
  sub_141509590(&v4, &unk_141808715, v6);
  *(_QWORD *)(a1 + 24) = v5;
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 10;
  result = (__int64)v7;
  if ( *v7 )
    return sub_140001660(v7[1], *v7, 1);
  return result;
}
