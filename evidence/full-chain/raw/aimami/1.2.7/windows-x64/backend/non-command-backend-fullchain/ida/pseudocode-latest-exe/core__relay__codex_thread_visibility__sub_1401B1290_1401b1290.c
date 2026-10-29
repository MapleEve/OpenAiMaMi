// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1401b1290 | successor of pre-update 0x14038cc60 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.792, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1401B1290(_QWORD *a1)
{
  double result; // xmm0_8
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[44];
  if ( v3 == -2 )
  {
    v4 = a1[45];
    v5 = 2;
    if ( !v4 )
      goto LABEL_12;
LABEL_11:
    result = sub_140001660(a1[v5 + 44], v4, 1);
    goto LABEL_12;
  }
  if ( v3 > 0 )
    result = sub_140001660(a1[45], v3, 1);
  v6 = a1[47];
  if ( v6 > 0 )
    result = sub_140001660(a1[48], v6, 1);
  v4 = a1[50];
  v5 = 7;
  if ( v4 > 0 )
    goto LABEL_11;
LABEL_12:
  if ( a1[3] != -1 )
    sub_1401B1470(a1 + 3);
  v7 = a1[25];
  if ( v7 > 0 )
    result = sub_140001660(a1[26], v7, 1);
  v8 = a1[33];
  if ( v8 != -1 )
  {
    if ( v8 )
      result = sub_140001660(a1[34], v8, 1);
    v9 = a1[36];
    if ( v9 )
      return sub_140001660(a1[37], v9, 1);
  }
  return result;
}
