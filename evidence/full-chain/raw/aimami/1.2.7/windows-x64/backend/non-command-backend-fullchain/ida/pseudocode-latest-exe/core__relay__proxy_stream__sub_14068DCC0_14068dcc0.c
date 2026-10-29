// win 1.2.7 latest-exe | module src/core/relay/proxy_stream.rs | ea 0x14068dcc0 | successor of pre-update 0x140ce6f20 | session <审计会话>
// match evidence: {"body_sim": 0.447, "str_ov": 0, "anchor": 0.066, "conf": false, "verdict": "CONFIRMED_FINAL"}
double __fastcall sub_14068DCC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdx

  v2 = a2 + 64;
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 480LL);
  if ( v3 )
    sub_140001660(*(_QWORD *)(*(_QWORD *)(v2 - 8) + 488LL), v3, 1);
  return sub_1406C3CB0(*(_QWORD **)(v2 - 8));
}
