// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1411b9cf0 | name sub_1411B9CF0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1411B9CF0(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  _OWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_QWORD *)a2 == -1 )
  {
    sub_1411BE1A0(a1, aNoPathsParamet, 43);
    *(_WORD *)(a1 + 104) = 500;
  }
  else
  {
    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    v7[3] = a2[3];
    v7[2] = v5;
    v7[1] = v4;
    v7[0] = v3;
    sub_1411B9A50(a1, v7);
  }
  return a1;
}
