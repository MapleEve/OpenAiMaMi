// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1414fe790 | name sub_1414FE790
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1414FE790(volatile void *a1, __int64 a2)
{
  __int64 result; // rax
  volatile void *v3; // rsi
  volatile void *v4; // rsi

  if ( a2 )
  {
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)a1, 1, 0) )
    {
      v3 = a1;
      sub_141937480(a1);
      a1 = v3;
    }
    if ( 2 * *off_1421E7210 )
    {
      v4 = a1;
      sub_141938160(a1);
      return sub_1414FDED0(v4);
    }
    else
    {
      return sub_1414FDED0(a1);
    }
  }
  return result;
}
