// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1401917c0 | name sub_1401917C0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401917C0(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 result; // rax

  v2 = a1[1];
  v3 = a1[2];
  if ( v3 )
  {
    v4 = (_QWORD *)(v2 + 56);
    do
    {
      v5 = *(v4 - 7);
      if ( v5 )
        sub_140001660(*(v4 - 6), v5, 1);
      v6 = *(v4 - 1);
      if ( v6 )
        sub_140001660(*v4, v6, 1);
      v4 += 9;
      --v3;
    }
    while ( v3 );
  }
  result = *a1;
  if ( *a1 )
    return sub_140001660(v2, 72 * result, 8);
  return result;
}
