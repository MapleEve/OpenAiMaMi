// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140fb2860
// name: sub_140FB2860
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140FB2860(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r15

  v1 = *a1;
  if ( !_InterlockedDecrement64((volatile signed __int64 *)(*a1 + 464)) )
  {
    v2 = *(_QWORD *)(v1 + 520);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v1 + 512);
      v4 = 40 * v2;
      v5 = v1 + 472;
      v6 = 0;
      v7 = 0;
      do
      {
        if ( _InterlockedExchange64((volatile __int64 *)(v3 + v7 + 16), 3) == 2 )
          sub_140FB1E80(v5, v6);
        v7 += 40;
        ++v6;
      }
      while ( v4 != v7 );
    }
  }
}