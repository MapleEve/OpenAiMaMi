// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x14002edd0 | name sub_14002EDD0
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_14002EDD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 328)) )
    sub_14143AD40(a1 + 328);
  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 )
    sub_140001660(*(_QWORD *)(a1 + 160), v3, 1);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 136)) )
    sub_1409E3900(a1 + 136, v3, a3);
  sub_14001DBA0((volatile signed __int64 **)a1);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 336)) )
    sub_14143B3F0(a1 + 336);
  sub_14002E1F0((volatile signed __int64 **)(a1 + 176));
  result = *(volatile signed __int64 **)(a1 + 344);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_14143AFF0(a1 + 344);
  return result;
}
