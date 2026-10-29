// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x14038e010 | name sub_14038E010
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14038E010(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 i; // rdx
  __int64 v6; // rbx
  __int64 v7; // [rsp+28h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp-8h]

  result = a2 - 1;
  v4 = a1 + 24;
  for ( i = 0; i != a2; i = v8 )
  {
    v10 = v4;
    v7 = result;
    v6 = 3 * i;
    v11 = a1 + 24 * i;
    v8 = i + 1;
    CloseHandle(*(HANDLE *)(v11 + 16));
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 8 * v6)) )
      sub_141691170(v11);
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v11 + 8)) )
      sub_1409E3C60(v11 + 8);
    result = v7 - 1;
    v4 = v10 + 24;
  }
  return result;
}
