// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x1401aee90 | name sub_1401AEE90
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void *__fastcall sub_1401AEE90(_QWORD *a1)
{
  void *result; // rax

  nullsub_1(a1);
  result = (void *)sub_140001650(21, 1);
  if ( !result )
    sub_141938D2B(1, 21);
  qmemcpy(result, "rollout has no parent", 21);
  a1[1] = 21;
  a1[2] = result;
  a1[3] = 21;
  *a1 = 9;
  return result;
}
