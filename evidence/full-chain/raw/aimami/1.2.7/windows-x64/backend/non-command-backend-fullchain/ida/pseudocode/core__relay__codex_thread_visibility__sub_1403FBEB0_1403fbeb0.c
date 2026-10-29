// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1403fbeb0 | name sub_1403FBEB0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403FBEB0(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rsi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = *(_QWORD **)(a1 + 8);
    do
    {
      result = sub_14038CC60(v2);
      v2 += 53;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
