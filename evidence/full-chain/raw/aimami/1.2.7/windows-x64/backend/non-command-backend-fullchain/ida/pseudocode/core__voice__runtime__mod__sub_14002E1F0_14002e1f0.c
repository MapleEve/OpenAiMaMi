// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x14002e1f0 | name sub_14002E1F0
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_14002E1F0(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  sub_14001DBA0(a1);
  if ( !_InterlockedDecrement64(a1[17]) )
    sub_14143B3F0(a1 + 17);
  result = a1[18];
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_14105BAC0(a1 + 18);
  return result;
}
