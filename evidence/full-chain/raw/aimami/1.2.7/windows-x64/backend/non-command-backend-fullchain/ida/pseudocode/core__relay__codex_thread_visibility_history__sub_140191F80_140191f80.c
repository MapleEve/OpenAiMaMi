// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x140191f80 | name sub_140191F80
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
BOOL __fastcall sub_140191F80(__int64 a1)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_140001660(*(_QWORD *)a1, v2, 1);
  return CloseHandle(*(HANDLE *)(a1 + 40));
}
