// win 1.2.7 latest-exe | module src/core/oauth_refresh.rs | ea 0x140d85af0 | successor of pre-update 0x1402932b0 | session <审计会话>
// match evidence: {"body_sim": 0.827, "str_ov": 0, "anchor": 0.186, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
void __fastcall sub_140D85AF0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  __int64 v6; // rdx

  v3 = *a2;
  if ( *a2 != -1 )
  {
    v5 = a2[1];
    sub_1408FEA60(v5, a2[2]);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 16) = a2[2];
      *(_OWORD *)a1 = *(_OWORD *)a2;
      return;
    }
    if ( v3 )
      sub_140001660(v5, v3, 1);
  }
  *(_QWORD *)a1 = -1;
}
