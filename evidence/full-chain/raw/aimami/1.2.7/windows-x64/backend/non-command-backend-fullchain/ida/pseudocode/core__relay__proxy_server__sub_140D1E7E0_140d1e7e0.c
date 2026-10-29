// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d1e7e0 | name sub_140D1E7E0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140D1E7E0(_QWORD *a1)
{
  __int64 v1; // [rsp+20h] [rbp-10h]

  v1 = a1[17];
  sub_140CE5110(v1);
  sub_140001660(v1, 64, 8);
  if ( *a1 )
    sub_140001660(a1[1], *a1, 1);
  if ( a1[3] != -2 )
    sub_140D1E650(a1 + 3);
}
