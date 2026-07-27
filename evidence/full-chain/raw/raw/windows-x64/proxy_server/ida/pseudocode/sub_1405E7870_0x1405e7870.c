// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405e7870
// name: sub_1405E7870
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_1405E7870(__int64 *a1)
{
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64((volatile signed __int64 *)*a1) )
    sub_140574DB0(a1);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)a1[1]) )
    sub_140574820(a1 + 1);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)a1[2]) )
    sub_140575F20(a1 + 2);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)a1[3]) )
    sub_140575000(a1 + 3);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)a1[4]) )
    sub_140575000(a1 + 4);
  result = (volatile signed __int64 *)a1[5];
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_140573D40(a1 + 5);
  return result;
}