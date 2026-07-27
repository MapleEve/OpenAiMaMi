// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140575000
// name: sub_140575000
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_140575000(__int64 *a1)
{
  volatile signed __int64 *result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  v2 = *a1;
  result = *(volatile signed __int64 **)(*a1 + 32);
  if ( !_InterlockedDecrement64(result) )
    result = (volatile signed __int64 *)sub_141018B80(v2 + 32);
  if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) )
    return (volatile signed __int64 *)sub_140001660(v2, 40, 8);
  return result;
}