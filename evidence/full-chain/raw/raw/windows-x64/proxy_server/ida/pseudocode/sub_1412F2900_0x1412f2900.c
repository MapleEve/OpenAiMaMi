// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1412f2900
// name: sub_1412F2900
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1412F2900(_BYTE *a1, unsigned __int64 a2)
{
  _BYTE *v2; // rsi
  unsigned __int64 v3; // rdi
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rdi
  int v6; // r9d

  if ( a2 )
  {
    if ( _InterlockedCompareExchange8(a1, 1, 0) )
    {
      v2 = a1;
      v3 = a2;
      sub_1416C15B0(a1);
      a2 = v3;
      a1 = v2;
    }
    if ( 2 * *off_141EC90B8 )
    {
      v4 = a1;
      v5 = a2;
      v6 = sub_1416C2250(a1, a2);
      LOBYTE(v6) = v6 ^ 1;
      sub_1412F2070((unsigned __int64)v4, v5, v4, v6);
    }
    else
    {
      sub_1412F2070((unsigned __int64)a1, a2, a1, 0);
    }
  }
}