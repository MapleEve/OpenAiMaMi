// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1401a2670 | successor of pre-update 0x140190f20 | session <审计会话>
// match evidence: {"body_sim": 0.876, "str_ov": 0, "anchor": 0.066, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
double __fastcall sub_1401A2670(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  double result; // xmm0_8
  __int64 v7; // rdx
  __int64 v8; // rdx

  v2 = a1[1];
  v3 = a1[2];
  if ( v3 )
  {
    v4 = (_QWORD *)(v2 + 56);
    do
    {
      v5 = *(v4 - 7);
      if ( v5 )
        result = sub_140001660(*(v4 - 6), v5, 1);
      v7 = *(v4 - 1);
      if ( v7 > 0 )
        result = sub_140001660(*v4, v7, 1);
      v8 = *(v4 - 4);
      if ( v8 )
        result = sub_140001660(*(v4 - 3), v8, 1);
      v4 += 9;
      --v3;
    }
    while ( v3 );
  }
  if ( *a1 )
    return sub_140001660(v2, 72LL * *a1, 8);
  return result;
}
