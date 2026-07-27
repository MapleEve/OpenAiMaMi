// module: codexmate_lib/core/relay/translator
// addr: 0x1409b54f0
// name: sub_1409B54F0
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1409B54F0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6[6]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  __int64 v10; // [rsp+68h] [rbp-8h]
  __int64 v11; // [rsp+70h] [rbp+0h]

  v11 = -2;
  sub_140A01ED0(v6, *(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 104));
  if ( v6[0] != -1 )
  {
    v9 = v6[0];
    v7 = v6[1];
    v4 = v6[2];
    v10 = v6[3];
    v8 = v6[4];
    v5 = v6[5];
    *(_BYTE *)(a1 + 112) = 2;
    *(_QWORD *)(a1 + 104) = 0;
    if ( v4 )
    {
      sub_1409B4460(a1, v7, v4, a2);
      sub_1409B2D80(a1, a2);
    }
    if ( v5 )
      sub_1409B0FA0((_QWORD *)a1, v8, v5, a2);
    if ( v10 )
      sub_140001660(v8, v10, 1);
    if ( v9 )
      sub_140001660(v7, v9, 1);
  }
}