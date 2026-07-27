// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140fa37c0
// name: sub_140FA37C0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140FA37C0(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  _OWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_QWORD *)a2 == -1 )
  {
    sub_140FAEBB0(a1, aNoPathsParamet, 43, a4);
    *(_WORD *)(a1 + 104) = 500;
  }
  else
  {
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    v9[3] = a2[3];
    v9[2] = v7;
    v9[1] = v6;
    v9[0] = v5;
    sub_140FA7090(a1, v9);
  }
  return a1;
}