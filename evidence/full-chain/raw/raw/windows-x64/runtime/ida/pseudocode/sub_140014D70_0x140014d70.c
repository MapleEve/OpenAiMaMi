// module: codexmate_lib/core/voice/runtime
// addr: 0x140014d70
// name: sub_140014D70
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_140014D70(__int64 a1)
{
  __int64 v1; // rdx
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 328)) )
    sub_141214E90(a1 + 328);
  v1 = *(_QWORD *)(a1 + 152);
  if ( v1 )
    sub_140001660(*(_QWORD *)(a1 + 160), v1, 1);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 136)) )
    sub_140573D40(a1 + 136);
  sub_140007030(a1);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 336)) )
    sub_141215540(a1 + 336);
  sub_140014150(a1 + 176);
  result = *(volatile signed __int64 **)(a1 + 344);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_141215140(a1 + 344);
  return result;
}