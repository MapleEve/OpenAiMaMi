// win 1.2.7 latest-exe | module src/core/sessions/worktree.rs | ea 0x14068dea0 | successor of pre-update 0x140e95610 | session <审计会话>
// match evidence: {"body_sim": 0.557, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
double __fastcall sub_14068DEA0(__int64 a1)
{
  __int64 v1; // rdx
  double result; // xmm0_8
  __int64 v3; // [rsp+20h] [rbp-20h]
  __int64 v4; // [rsp+28h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)v4 )
    (*(void (__fastcall **)(__int64))v4)(v3);
  v1 = *(_QWORD *)(v4 + 8);
  if ( v1 )
    result = sub_140001660(v3, v1, *(_QWORD *)(v4 + 16));
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 32)) )
    sub_140CA5C00(a1 + 32);
  if ( *(_QWORD *)a1 )
    return sub_140001660(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, 1);
  return result;
}
