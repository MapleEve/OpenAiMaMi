// win 1.2.7 | module src/core/relay/translator.rs | ea 0x14022f240 | name sub_14022F240
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14022F240(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 v6; // [rsp+28h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-20h]
  unsigned __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  __int64 v10; // [rsp+48h] [rbp-8h]

  v10 = -2;
  sub_14022E550(&v6, a1, a2);
  v3 = v8;
  v9 = v7;
  LOBYTE(v2) = 1;
  if ( !sub_14022E180(v7, v8, (int)aFable5, 7u)
    && !sub_14022E180(v9, v3, (int)aFable51, 9u)
    && !sub_14022E180(v9, v3, (int)aMythos5, 8u)
    && !sub_14022E180(v9, v3, (int)aMythos51, 0xAu)
    && !sub_14022E180(v9, v3, (int)aOpus5, 6u)
    && !sub_14022E180(v9, v3, (int)aOpus55, 8u)
    && !sub_14022E180(v9, v3, (int)aOpus48, 8u) )
  {
    LOBYTE(v4) = sub_14022E180(v9, v3, (int)aSonnet55, 0xAu);
    v2 = v4;
  }
  if ( v6 )
    sub_140001660(v9, v6, 1);
  return v2;
}
