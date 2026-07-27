// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140faf540
// name: sub_140FAF540
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140FAF540(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  if ( *(_DWORD *)a2 == 1 )
    sub_140FAF430(a1, v4, v5);
  else
    sub_140FAEBE0(a1, v4, v5);
  return a1;
}