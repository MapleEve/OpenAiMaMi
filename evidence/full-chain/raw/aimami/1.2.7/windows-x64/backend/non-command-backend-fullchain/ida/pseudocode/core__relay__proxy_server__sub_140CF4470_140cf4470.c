// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140cf4470 | name sub_140CF4470
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_140CF4470(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 40)) )
    sub_1409E3900(a1 + 40, a2, a3);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 48)) )
    sub_1409E4860((__int64 *)(a1 + 48));
  if ( *(_QWORD *)a1 )
    sub_140001660(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, 1);
  result = *(volatile signed __int64 **)(a1 + 56);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_1409E4DF0((__int64 *)(a1 + 56));
  return result;
}
