// module: codexmate_lib/core/relay/translator
// addr: 0x1402c9810
// name: sub_1402C9810
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402C9810(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx

  if ( a2 )
  {
    v3 = 104 * a2;
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(a1 + v4);
      if ( v5 )
        result = sub_140001660(*(_QWORD *)(a1 + v4 + 8), v5, 1);
      v7 = *(_QWORD *)(a1 + v4 + 24);
      if ( v7 )
        result = sub_140001660(*(_QWORD *)(a1 + v4 + 32), v7, 1);
      v8 = *(_QWORD *)(a1 + v4 + 48);
      if ( v8 )
        result = sub_140001660(*(_QWORD *)(a1 + v4 + 56), v8, 1);
      v9 = *(_QWORD *)(a1 + v4 + 72);
      if ( v9 )
        result = sub_140001660(*(_QWORD *)(a1 + v4 + 80), v9, 1);
      v4 += 104;
    }
    while ( v3 != v4 );
  }
  return result;
}