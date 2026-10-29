// win 1.2.7 latest-exe | module src/core/sessions.rs | ea 0x1401b7660 | successor of pre-update 0x14065bdc0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.942, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1401B7660(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // r15
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rdi

  v3 = a2 - (a2 >> 1);
  v4 = 14925;
  if ( a2 < 0x3A4D )
    v4 = a2;
  if ( v4 <= v3 )
    v4 = a2 - (a2 >> 1);
  v5 = 48;
  if ( v4 >= 0x31 )
    v5 = v4;
  if ( v3 > 0x3D226357E16ECELL )
  {
    v6 = 0;
    goto LABEL_9;
  }
  if ( 536 * v5 )
  {
    v7 = a2;
    v8 = a3;
    v9 = a1;
    nullsub_1(a1, a2);
    v6 = 8;
    v10 = sub_140001650(536 * v5, 8);
    LODWORD(a1) = v9;
    a3 = v8;
    a2 = v7;
    v11 = v10;
    if ( !v10 )
LABEL_9:
      sub_14196B2DB(v6, 536 * v5);
  }
  else
  {
    v11 = 8;
    v5 = 0;
  }
  sub_140917090(a1, a2, v11, v5, a2 < 0x41, a3);
  return sub_140001660(v11, 536 * v5, 8);
}
