// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x141474a10
// name: sub_141474A10
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_141474A10(__int64 a1, _QWORD *a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  _OWORD v7[5]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+70h] [rbp+0h]

  sub_141476890(v7, *a2);
  if ( LODWORD(v7[0]) == 2 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v7[0] + 1);
    *(_QWORD *)a1 = 2;
  }
  else
  {
    *(_QWORD *)(a1 + 80) = v8;
    *(_OWORD *)(a1 + 64) = v7[4];
    v3 = v7[0];
    v4 = v7[1];
    v5 = v7[2];
    *(_OWORD *)(a1 + 48) = v7[3];
    *(_OWORD *)(a1 + 32) = v5;
    *(_OWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = v3;
  }
  return a1;
}