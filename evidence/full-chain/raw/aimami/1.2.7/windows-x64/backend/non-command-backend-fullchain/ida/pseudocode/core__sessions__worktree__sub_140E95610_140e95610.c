// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x140e95610 | name sub_140E95610
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E95610(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+30h] [rbp-10h]
  __int64 v6; // [rsp+30h] [rbp-10h]

  if ( *a1 == -1 )
  {
    v6 = a1[1];
    v4 = a1[2];
    if ( *(_QWORD *)v4 )
      (*(void (__fastcall **)(__int64))v4)(v6);
    result = v4;
    v2 = *(_QWORD *)(v4 + 8);
    if ( v2 )
      return sub_140001660(v6, v2, *(_QWORD *)(v4 + 16));
  }
  else
  {
    v5 = *a1;
    result = sub_1403FC5F0();
    if ( v5 )
      return sub_140001660(a1[1], 104 * v5, 8);
  }
  return result;
}
