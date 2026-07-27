// module: codexmate_lib/core/voice/runtime
// addr: 0x140014b00
// name: sub_140014B00
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_140014B00(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  volatile signed __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 328);
  if ( v2 )
    sub_140001660(*(_QWORD *)(a1 + 336), v2, 1);
  sub_140007030(a1);
  if ( *(_DWORD *)(a1 + 144) != -1 )
  {
    v3 = *(_QWORD *)(a1 + 296);
    if ( v3 )
      sub_140001660(*(_QWORD *)(a1 + 304), v3, 1);
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 280)) )
      sub_140573D40(a1 + 280);
    sub_140007030(a1 + 144);
  }
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 512)) )
    sub_141215540(a1 + 512);
  sub_140014150(a1 + 360);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 520)) )
    sub_141214CE0(a1 + 520);
  result = *(volatile signed __int64 **)(a1 + 528);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_141215140(a1 + 528);
  return result;
}