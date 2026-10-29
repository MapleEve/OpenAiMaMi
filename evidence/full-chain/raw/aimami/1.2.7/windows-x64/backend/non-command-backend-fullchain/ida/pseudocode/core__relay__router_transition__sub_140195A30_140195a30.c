// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140195a30 | name sub_140195A30
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140195A30(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
    result = sub_140001660(*(_QWORD *)(a1 + 72), v2, 1);
  if ( *(_DWORD *)a1 != 2 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      return sub_140001660(*(_QWORD *)(a1 + 24), v4, 1);
  }
  return result;
}
