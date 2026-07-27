// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140335300
// name: sub_140335300
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140335300(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    do
    {
      v3 = *(v2 - 9);
      if ( v3 )
        result = sub_140001660(*(v2 - 8), v3, 1);
      v5 = *(v2 - 6);
      if ( v5 )
        result = sub_140001660(*(v2 - 5), v5, 1);
      v6 = *(v2 - 3);
      if ( v6 )
        result = sub_140001660(*(v2 - 2), v6, 1);
      if ( *v2 != -1 )
        result = sub_1402C7EE0(v2);
      v2 += 25;
      --v1;
    }
    while ( v1 );
  }
  return result;
}