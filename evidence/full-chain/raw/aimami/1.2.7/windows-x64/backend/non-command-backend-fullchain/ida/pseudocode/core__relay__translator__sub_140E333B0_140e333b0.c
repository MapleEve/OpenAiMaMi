// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e333b0 | name sub_140E333B0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140E333B0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // r8
  signed __int64 v5; // rbx
  unsigned __int64 v6[6]; // [rsp+20h] [rbp-50h] BYREF
  const __m128i *v7; // [rsp+50h] [rbp-20h]
  const __m128i *v8; // [rsp+58h] [rbp-18h]
  unsigned __int64 v9; // [rsp+60h] [rbp-10h]
  unsigned __int64 v10; // [rsp+68h] [rbp-8h]
  __int64 v11; // [rsp+70h] [rbp+0h]

  v11 = -2;
  sub_1402F5700(v6, *(_QWORD *)(a1 + 160), *(_QWORD *)(a1 + 168));
  if ( v6[0] != -1 )
  {
    v9 = v6[0];
    v7 = (const __m128i *)v6[1];
    v4 = v6[2];
    v10 = v6[3];
    v8 = (const __m128i *)v6[4];
    v5 = v6[5];
    *(_BYTE *)(a1 + 176) = 2;
    *(_QWORD *)(a1 + 168) = 0;
    if ( v4 )
    {
      sub_140E322D0(a1, v7, v4, a2);
      sub_140E30B70(a1, a2);
    }
    if ( v5 )
      sub_140E2EC90(a1, v8, v5, a2);
    if ( v10 )
      sub_140001660(v8, v10, 1);
    if ( v9 )
      sub_140001660(v7, v9, 1);
  }
}
