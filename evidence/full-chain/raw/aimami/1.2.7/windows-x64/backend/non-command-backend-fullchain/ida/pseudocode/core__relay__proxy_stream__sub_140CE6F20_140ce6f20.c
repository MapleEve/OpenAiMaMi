// win 1.2.7 | module src/core/relay/proxy_stream.rs | ea 0x140ce6f20 | name sub_140CE6F20
// win 1.2.7 | module src/core/relay/proxy_stream.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140CE6F20(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v3; // [rsp+20h] [rbp-10h]

  v3 = a1[101];
  sub_140CE7150();
  sub_140001660(v3, 24, 8);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(a1[102] + 32LL))(a1 + 105, a1[103], a1[104]);
  v1 = a1[98];
  if ( v1 )
    sub_140001660(a1[99], v1, 1);
  return sub_140D1C7D0(a1);
}
