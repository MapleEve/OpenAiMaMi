// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140001000 | name sub_140001000
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140001000(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx

  v2 = a1[1];
  v3 = a1[3] - v2;
  if ( v3 )
  {
    v4 = v3 >> 5;
    v5 = (_QWORD *)(v2 + 8);
    do
    {
      v6 = *(v5 - 1);
      if ( v6 )
        result = sub_140001660(*v5, v6, 1);
      v5 += 4;
      --v4;
    }
    while ( v4 );
  }
  v8 = a1[2];
  if ( v8 )
    return sub_140001660(*a1, 32 * v8, 8);
  return result;
}
