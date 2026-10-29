// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x1403fbdc0 | name sub_1403FBDC0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403FBDC0(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    do
    {
      v3 = *(v2 - 4);
      if ( v3 )
        result = sub_140001660(*(v2 - 3), v3, 1);
      v5 = *(v2 - 1);
      if ( v5 )
        result = sub_140001660(*v2, v5, 1);
      v2 += 8;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
