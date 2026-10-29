// win 1.2.7 latest-exe | module src/core/voice/runtime/mod.rs | ea 0x140829ca0 | successor of pre-update 0x140c87b90 | session <审计会话>
// match evidence: {"body_sim": 0.73, "str_ov": 0, "anchor": 0.29, "conf": true, "verdict": "CONFIRMED_FINAL"}
void __fastcall sub_140829CA0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx

  v6 = sub_1408FEA60(a2, a3);
  if ( v7 )
  {
    v9 = v7;
    if ( v7 < 0 )
      sub_14196B2DB(0, v7);
    v11 = v6;
    nullsub_1(v8, v7);
    v12 = sub_140001650(v9, 1);
    if ( !v12 )
      sub_14196B2DB(1, v9);
  }
  else
  {
    v10 = 8 * (unsigned int)a4;
    v9 = *(_QWORD *)((char *)&unk_141A4EF18 + v10);
    v11 = *(__int64 *)((char *)&off_141A4EF38 + v10);
    nullsub_1(&off_141A4EF38, 0);
    v12 = sub_140001650(v9, 1);
    if ( !v12 )
      sub_14196B2DB(1, v9);
  }
  v13 = v12;
  sub_1419234B0(v12, v11, v9);
  *a1 = v9;
  a1[1] = v13;
  a1[2] = v9;
}
