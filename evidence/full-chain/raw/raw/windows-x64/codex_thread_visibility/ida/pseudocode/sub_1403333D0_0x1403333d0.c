// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1403333d0
// name: sub_1403333D0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403333D0(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 result; // rax

  v2 = a1[1];
  v3 = a1[3];
  if ( v3 != v2 )
  {
    v4 = (v3 - v2) / 0x50uLL;
    v5 = (_QWORD *)(v2 + 56);
    do
    {
      v6 = *(v5 - 7);
      if ( v6 )
        sub_140001660(*(v5 - 6), v6, 1);
      v7 = *(v5 - 1);
      if ( v7 != -1 && v7 )
        sub_140001660(*v5, v7, 1);
      v8 = *(v5 - 4);
      if ( v8 )
        sub_140001660(*(v5 - 3), v8, 1);
      v5 += 10;
      --v4;
    }
    while ( v4 );
  }
  result = a1[2];
  if ( result )
    return sub_140001660(*a1, 80 * result, 8);
  return result;
}