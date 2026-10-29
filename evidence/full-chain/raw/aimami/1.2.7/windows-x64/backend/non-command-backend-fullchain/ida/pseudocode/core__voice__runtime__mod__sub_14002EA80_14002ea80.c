// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x14002ea80 | name sub_14002EA80
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_14002EA80(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  volatile signed __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 328);
  if ( v2 )
    sub_140001660(*(_QWORD *)(a1 + 336), v2, 1);
  sub_14001DBA0((volatile signed __int64 **)a1);
  if ( *(_DWORD *)(a1 + 144) != -1 )
  {
    v4 = *(_QWORD *)(a1 + 296);
    if ( v4 )
      sub_140001660(*(_QWORD *)(a1 + 304), v4, 1);
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 280)) )
      sub_1409E3900(a1 + 280, v4, v3);
    sub_14001DBA0((volatile signed __int64 **)(a1 + 144));
  }
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 512)) )
    sub_14143B3F0(a1 + 512);
  sub_14002E1F0((volatile signed __int64 **)(a1 + 360));
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 520)) )
    sub_14143AB90(a1 + 520);
  result = *(volatile signed __int64 **)(a1 + 528);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_14143AFF0(a1 + 528);
  return result;
}
