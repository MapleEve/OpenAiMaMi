// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140b22c80
// name: sub_140B22C80
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140B22C80(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+30h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)v5 )
    (*(void (__fastcall **)(__int64))v5)(v4);
  v1 = *(_QWORD *)(v5 + 8);
  if ( v1 )
    sub_140001660(v4, v1, *(_QWORD *)(v5 + 16));
  return sub_1405BE810(a1);
}