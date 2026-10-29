// win 1.2.7 | module src/core/analytics/threads.rs | ea 0x1402b3660 | name sub_1402B3660
// win 1.2.7 | module src/core/analytics/threads.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
bool __fastcall sub_1402B3660(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  bool result; // al

  if ( **(_BYTE **)a1 )
    return 0;
  v2 = *(_DWORD **)(a1 + 8);
  if ( *(_DWORD *)(a2 + 32) != *v2 || *(_DWORD *)(a2 + 36) != v2[1] )
    return 0;
  if ( *(_QWORD *)(a2 + 40) != **(_QWORD **)(a1 + 16)
    || (v3 = a1, v4 = a2, v5 = sub_14167FD50(a2 + 16), a1 = v3, a2 = v4, v6 = v5, result = 1, v6 >= 0x1E) )
  {
    if ( **(_BYTE **)(a1 + 24) == 1 )
      return (unsigned __int64)sub_14167FD50(a2 + 16) < 0xA;
    return 0;
  }
  return result;
}
