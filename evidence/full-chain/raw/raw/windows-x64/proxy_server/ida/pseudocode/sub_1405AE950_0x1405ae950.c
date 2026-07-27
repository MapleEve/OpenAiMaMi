// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405ae950
// name: sub_1405AE950
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405AE950(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]

  sub_140017140(a1);
  v1 = a1;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v4 = *(_QWORD *)(a1 + 96);
    sub_14067E8F0();
    sub_140001660(v4, 32, 8);
    v1 = a1;
  }
  v7 = *(_QWORD *)(v1 + 112);
  v5 = *(_QWORD *)(v1 + 120);
  if ( *(_QWORD *)v5 )
    (*(void (__fastcall **)(__int64))v5)(v7);
  result = v5;
  v3 = *(_QWORD *)(v5 + 8);
  if ( v3 )
    return sub_140001660(v7, v3, *(_QWORD *)(v5 + 16));
  return result;
}