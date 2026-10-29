// win 1.2.7 latest-exe | module src/core/relay/anthropic_continuation.rs | ea 0x1406c4a40 | successor of pre-update 0x140d1cf80 | session <审计会话>
// match evidence: {"body_sim": 0.632, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
double __fastcall sub_1406C4A40(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  double result; // xmm0_8
  _QWORD *v4; // [rsp+28h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-10h]

  v1 = (_QWORD *)a1[3];
  v5 = *v1;
  v4 = v1;
  v7 = v1[1];
  if ( *(_QWORD *)v7 )
    (*(void (__fastcall **)(__int64))v7)(v5);
  v2 = *(_QWORD *)(v7 + 8);
  if ( v2 )
    sub_140001660(v5, v2, *(_QWORD *)(v7 + 16));
  result = sub_140001660(v4, 16, 8);
  if ( *a1 )
    return sub_140001660(a1[1], *a1, 1);
  return result;
}
