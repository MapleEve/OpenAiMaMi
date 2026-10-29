// win 1.2.7 | module src/core/sessions/history.rs | ea 0x140bae350 | name sub_140BAE350
// win 1.2.7 | module src/core/sessions/history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BAE350(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  _OWORD v7[5]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v8; // [rsp+78h] [rbp-10h]

  sub_141695A00(v7, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( LODWORD(v7[0]) == 2 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v7[0] + 1);
    *(_QWORD *)a1 = 2;
  }
  else
  {
    *(_QWORD *)(a1 + 80) = v8;
    *(_OWORD *)(a1 + 64) = v7[4];
    v4 = v7[0];
    v5 = v7[1];
    v6 = v7[2];
    *(_OWORD *)(a1 + 48) = v7[3];
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
  }
  return a1;
}
