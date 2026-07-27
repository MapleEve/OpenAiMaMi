// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140575f20
// name: sub_140575F20
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140575F20(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax

  v1 = *a1;
  result = sub_140016620(*a1 + 16);
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) )
    return sub_140001660(v1, 1008, 8);
  return result;
}