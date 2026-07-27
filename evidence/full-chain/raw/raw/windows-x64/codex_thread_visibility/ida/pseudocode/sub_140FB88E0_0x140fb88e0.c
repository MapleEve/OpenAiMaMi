// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140fb88e0
// name: sub_140FB88E0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140FB88E0(_QWORD *a1, __int64 a2, int a3)
{
  if ( a3 )
  {
    sub_1416A21C0();
    return a1;
  }
  else
  {
    *a1 = -1;
    return a1;
  }
}