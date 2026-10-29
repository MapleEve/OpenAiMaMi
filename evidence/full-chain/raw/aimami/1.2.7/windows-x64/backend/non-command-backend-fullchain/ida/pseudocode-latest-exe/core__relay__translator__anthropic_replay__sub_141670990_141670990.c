// win 1.2.7 latest-exe | module src/core/relay/translator/anthropic_replay.rs | ea 0x141670990 | successor of pre-update 0x1401c6120 | session <审计会话>
// match evidence: {"body_sim": 0.482, "verdict": "CONFIRMED_DIFF_CAND"}
__int64 __fastcall sub_141670990(__int64 a1)
{
  __int128 v1; // xmm1
  __int64 v2; // rsi
  _OWORD v4[2]; // [rsp+20h] [rbp-30h] BYREF
  char v5; // [rsp+4Fh] [rbp-1h] BYREF
  __int64 v6; // [rsp+50h] [rbp+0h]

  v6 = -2;
  if ( *(_BYTE *)a1 == 0xFF )
    return 0;
  v1 = *(_OWORD *)(a1 + 16);
  v4[0] = *(_OWORD *)a1;
  v4[1] = v1;
  if ( LOBYTE(v4[0]) )
    v2 = sub_141966F70(a1, &v5);
  else
    v2 = 0;
  sub_14166BA50(v4);
  return v2;
}
