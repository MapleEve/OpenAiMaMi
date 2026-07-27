// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1402cb680
// name: sub_1402CB680
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
_QWORD *__fastcall sub_1402CB680(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int128 *v5; // r14
  __int128 *v6; // rcx
  __int64 v7; // r15
  __int128 v8; // xmm0
  __int64 v9; // r8
  __int64 v10; // r12
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r14
  __int64 v13; // rdx

  v3 = *a2;
  v4 = a2[4];
  if ( v4 )
  {
    v5 = (__int128 *)a2[1];
    v6 = (__int128 *)a2[3];
    v7 = *a2;
    if ( v5 != v6 )
    {
      do
      {
        v8 = *v5;
        v9 = *((_QWORD *)v5 + 2);
        v5 = (__int128 *)((char *)v5 + 24);
        *(_QWORD *)(v7 + 16) = v9;
        *(_OWORD *)v7 = v8;
        v7 += 24;
        --v4;
      }
      while ( v4 && v5 != v6 );
      a2[4] = v4;
    }
  }
  else
  {
    v5 = (__int128 *)a2[1];
    v6 = (__int128 *)a2[3];
    v7 = *a2;
  }
  v10 = a2[2];
  if ( v6 != v5 )
  {
    v11 = ((char *)v6 - (char *)v5) / 0x18uLL;
    v12 = (_QWORD *)v5 + 1;
    do
    {
      v13 = *(v12 - 1);
      if ( v13 )
        sub_140001660(*v12, v13, 1);
      v12 += 3;
      --v11;
    }
    while ( v11 );
  }
  *a1 = v10;
  a1[1] = v3;
  a1[2] = 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v7 - v3) >> 3);
  return a1;
}