// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x140777180 | successor of pre-update 0x1403f9c40 | session <审计会话>
// match evidence: {"body_sim": 0.446, "str_ov": 0, "anchor": 0.066, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
double __fastcall sub_140777180(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  __int64 v4; // rbx
  double result; // xmm0_8

  v2 = a1[1];
  v3 = a1[2];
  if ( v3 )
  {
    v4 = a1[1];
    do
    {
      sub_1401B1470(v4);
      v4 += 176;
      --v3;
    }
    while ( v3 );
  }
  if ( *a1 )
    return sub_140001660(v2, 176LL * *a1, 8);
  return result;
}
