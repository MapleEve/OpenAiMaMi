// module: codexmate_lib/core/voice/runtime
// addr: 0x1412e7ce0
// name: sub_1412E7CE0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1412E7CE0(volatile void *Address, __int64 a2)
{
  volatile void *v2; // rsi

  v2 = Address;
  LOBYTE(Address) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v2, 1, 0) )
    sub_1416C15B0(v2);
  if ( 2 * *off_141EC90B8 )
    sub_1416C2250(Address, a2);
  return sub_1412F2070(v2);
}