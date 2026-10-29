// win 1.2.7 | module src/core/repository/account_reset_credits.rs | ea 0x140195330 | name sub_140195330
// win 1.2.7 | module src/core/repository/account_reset_credits.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140195330(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 176);
  if ( v1 != -1 && v1 )
  {
    v2 = a1;
    result = sub_140001660(*(_QWORD *)(a1 + 184), v1, 1);
    a1 = v2;
  }
  if ( *(_DWORD *)a1 != 2 )
    return sub_140034220(a1);
  return result;
}
