// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x1409e3d80 | name sub_1409E3D80
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409E3D80(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int64 **v2; // [rsp+28h] [rbp-18h]
  __int64 v3; // [rsp+30h] [rbp-10h]

  v3 = *a1;
  v2 = (volatile signed __int64 **)(*a1 + 16LL);
  sub_14017D590();
  if ( *v2 && !_InterlockedDecrement64(*v2) )
    sub_141691120(v2);
  result = sub_140961CC0(v3 + 24);
  if ( v3 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v3 + 8)) )
    return sub_140001660(v3, 48, 8);
  return result;
}
