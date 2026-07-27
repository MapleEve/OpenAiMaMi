// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405e7a20
// name: sub_1405E7A20
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405E7A20(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = 1;
  if ( *a1 >= 3u )
    v1 = *a1 - 3LL;
  if ( v1 != 1 )
    return sub_1405AE950((__int64)(a1 + 1));
  sub_1405AE950((__int64)a1);
  result = (__int64)a1;
  v3 = a1[16];
  if ( v3 )
    return sub_140001660(a1[17], v3, 1);
  return result;
}