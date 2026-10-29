// win 1.2.7 | module src/core/relay/proxy_stream.rs | ea 0x140ce7150 | name sub_140CE7150
// win 1.2.7 | module src/core/relay/proxy_stream.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_140CE7150(__int64 *a1)
{
  __int64 v1; // rdx
  volatile signed __int64 *result; // rax
  __int64 v3; // [rsp+20h] [rbp-20h]
  __int64 v4; // [rsp+28h] [rbp-18h]

  v3 = *a1;
  v4 = a1[1];
  if ( *(_QWORD *)v4 )
    (*(void (__fastcall **)(__int64))v4)(v3);
  v1 = *(_QWORD *)(v4 + 8);
  if ( v1 )
    sub_140001660(v3, v1, *(_QWORD *)(v4 + 16));
  result = (volatile signed __int64 *)a1[2];
  if ( result )
  {
    if ( !_InterlockedDecrement64(result) )
      return sub_1409E5F10(a1 + 2);
  }
  return result;
}
