// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x14001dba0 | name sub_14001DBA0
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_14001DBA0(volatile signed __int64 **a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(a1[3]) )
    sub_14143ACD0(a1 + 3);
  sub_140184B00(a1);
  sub_14001DA80(a1 + 5);
  if ( !_InterlockedDecrement64(a1[11]) )
    sub_14143A9C0(a1 + 11);
  if ( !_InterlockedDecrement64(a1[12]) )
    sub_1409E3900(a1 + 12, v1, v2);
  if ( !_InterlockedDecrement64(a1[13]) )
    sub_1409E3900(a1 + 13, v1, v2);
  if ( !_InterlockedDecrement64(a1[14]) )
    sub_1409E3900(a1 + 14, v1, v2);
  result = a1[15];
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_1409E3900(a1 + 15, v1, v2);
  return result;
}
