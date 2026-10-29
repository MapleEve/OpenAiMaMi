// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140ce6340 | name sub_140CE6340
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140CE6340(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+30h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)v5 )
    (*(void (__fastcall **)(__int64))v5)(v4);
  v1 = *(_QWORD *)(v5 + 8);
  if ( v1 )
    sub_140001660(v4, v1, *(_QWORD *)(v5 + 16));
  return sub_140CF4470(a1);
}
