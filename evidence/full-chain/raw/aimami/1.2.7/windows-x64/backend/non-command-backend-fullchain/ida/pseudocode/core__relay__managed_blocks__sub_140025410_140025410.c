// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140025410 | name sub_140025410
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140025410(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  __int64 i; // r15
  _QWORD *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r13
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax

  v2 = a1[1];
  v3 = a1[2];
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = (_QWORD *)(v2 + 48 * i);
      if ( *v5 )
        sub_140001660(v5[1], *v5, 1);
      v6 = v5[4];
      v7 = v5[5];
      if ( v7 )
      {
        v8 = (_QWORD *)(v6 + 8);
        do
        {
          v9 = *(v8 - 1);
          if ( v9 )
            sub_140001660(*v8, v9, 1);
          v8 += 3;
          --v7;
        }
        while ( v7 );
      }
      v10 = v5[3];
      if ( v10 )
        sub_140001660(v6, 24 * v10, 8);
    }
  }
  result = *a1;
  if ( *a1 )
    return sub_140001660(v2, 48 * result, 8);
  return result;
}
