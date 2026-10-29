// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x141501100 | name sub_141501100
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141501100(volatile void *Address)
{
  volatile void *v1; // rsi

  v1 = Address;
  LOBYTE(Address) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v1, 1, 0) )
    sub_141937480(v1);
  if ( 2 * *off_1421E7210 )
    sub_141938160(Address);
  return sub_1414FDED0(v1);
}
