// win 1.2.7 | module src/core/sessions/health.rs | ea 0x140197020 | name sub_140197020
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140197020(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  result = sub_14002F9D0(a1 + 72);
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    result = sub_140001660(*(_QWORD *)(a1 + 56), v2, 1);
  if ( *(_DWORD *)a1 != 2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      return sub_140001660(*(_QWORD *)(a1 + 24), v3, 1);
  }
  return result;
}
