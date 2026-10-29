// win 1.2.7 latest-exe | module src/core/relay/codex_diagnostic.rs | ea 0x140b72ed0 | successor of pre-update 0x1401b8c00 | session <审计会话>
// match evidence: {"body_sim": 0.562, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
__int64 __fastcall sub_140B72ED0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi

  v2 = a2[1];
  if ( v2 < 0 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  if ( v2 )
  {
    v4 = a1;
    v5 = *a2;
    nullsub_1(a1, a2);
    v3 = 1;
    v6 = sub_140001650(v2, 1);
    if ( !v6 )
LABEL_3:
      sub_14196B2DB(v3, v2);
    v7 = v6;
    sub_1419234B0(v6, v5, v2);
    a1 = v4;
  }
  else
  {
    v7 = 1;
  }
  *(_BYTE *)a1 = 3;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = v2;
  return a1;
}
