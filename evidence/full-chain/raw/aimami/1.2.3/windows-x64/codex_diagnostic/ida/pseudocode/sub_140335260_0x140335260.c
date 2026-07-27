// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x140335260
// name: sub_140335260
// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140335260(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
    do
    {
      v3 = *(v2 - 11);
      if ( v3 )
        result = sub_140001660(*(v2 - 10), v3, 1);
      v5 = *(v2 - 7);
      if ( v5 )
        result = sub_140001660(*(v2 - 6), v5, 1);
      v6 = *(v2 - 1);
      if ( v6 != -1 && v6 )
        result = sub_140001660(*v2, v6, 1);
      v7 = *(v2 - 4);
      if ( v7 )
        result = sub_140001660(*(v2 - 3), v7, 1);
      v2 += 14;
      --v1;
    }
    while ( v1 );
  }
  return result;
}