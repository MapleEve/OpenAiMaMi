// win 1.2.7 | module src/core/sessions/health.rs | ea 0x14038d1d0 | name sub_14038D1D0
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14038D1D0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 240);
  if ( v2 )
    sub_140001660(*(_QWORD *)(a1 + 248), v2, 1);
  result = sub_1403880E0(a1 + 160);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    result = sub_140001660(*(_QWORD *)(a1 + 144), v4, 1);
  if ( *(_DWORD *)(a1 + 88) != 2 )
  {
    v5 = *(_QWORD *)(a1 + 104);
    if ( v5 )
      result = sub_140001660(*(_QWORD *)(a1 + 112), v5, 1);
  }
  if ( *(_DWORD *)(a1 + 192) != 2 )
  {
    v6 = *(_QWORD *)(a1 + 208);
    if ( v6 )
      return sub_140001660(*(_QWORD *)(a1 + 216), v6, 1);
  }
  return result;
}
