// win 1.2.4 delta | codexmate_lib4core5relay19anthropic_reasoning22use @ 0x1408a2a20
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay19anthropic_reasoning22use | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_1408A2A20(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // [rsp+28h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-20h]
  __int64 v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp-8h]

  v9 = -2;
  sub_1408A2590(&v5, a1, a2);
  v3 = v7;
  v8 = v6;
  LOBYTE(v2) = 1;
  if ( !(unsigned __int8)sub_1408A8D60(aFable5, 7, v6, v7)
    && !(unsigned __int8)sub_1408A8D60(aMythos5, 8, v8, v3)
    && !(unsigned __int8)sub_1408A8D60(aMythosPreview, 14, v8, v3)
    && !(unsigned __int8)sub_1408A8D60(aSonnet5, 8, v8, v3)
    && !(unsigned __int8)sub_1408A8D60(aOpus5, 6, v8, v3)
    && !(unsigned __int8)sub_1408A8D60(aOpus48, 8, v8, v3)
    && !(unsigned __int8)sub_1408A8D60(aOpus47, 8, v8, v3)
    && !(unsigned __int8)sub_1408A8D60(aOpus46, 8, v8, v3) )
  {
    v2 = sub_1408A8D60(aSonnet46, 10, v8, v3);
  }
  if ( v5 )
    sub_140001660(v8, v5, 1);
  return v2;
}
