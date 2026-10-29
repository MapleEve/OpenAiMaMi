// win 1.2.7 | module src/core/relay/storage.rs | ea 0x140f74b40 | name sub_140F74B40
// win 1.2.7 | module src/core/relay/storage.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F74B40(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  _OWORD v9[6]; // [rsp+20h] [rbp-68h] BYREF

  sub_140F70980((__int64)v9, a2, a3);
  if ( LODWORD(v9[0]) == -1 )
  {
    sub_1401BD710(*((unsigned __int64 *)&v9[0] + 1), v4);
    *(_QWORD *)a1 = -1;
  }
  else
  {
    *(_OWORD *)(a1 + 80) = v9[5];
    *(_OWORD *)(a1 + 64) = v9[4];
    v5 = v9[0];
    v6 = v9[1];
    v7 = v9[2];
    *(_OWORD *)(a1 + 48) = v9[3];
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
  }
  return a1;
}
