// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x14077ac30 | successor of pre-update 0x1401977e0 | session <审计会话>
// match evidence: {"body_sim": 0.75, "str_ov": 0, "anchor": 0.169, "conf": 1.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_14077AC30(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int128 *v6; // [rsp+28h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp-8h]

  v9 = -2;
  nullsub_1(a1, a2);
  v4 = sub_140001650(128, 1);
  if ( !v4 )
    sub_14196B2DB(1, 128);
  *(_QWORD *)&v7 = 128;
  *((_QWORD *)&v7 + 1) = v4;
  v8 = 0;
  v6 = &v7;
  sub_140785060(a2, &v6);
  result = v8;
  *(_QWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  return result;
}
