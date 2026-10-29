// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1411bf060 | name sub_1411BF060
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1411BF060(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  if ( *(_DWORD *)a2 == 1 )
    sub_1411BEF50(a1, v4, v5);
  else
    sub_1411BE1E0(a1, v4, v5);
  return a1;
}
