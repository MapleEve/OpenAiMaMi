// win 1.2.7 | module src/core/repository.rs | ea 0x140034090 | name sub_140034090
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140034090(__int64 *a1)
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
    v4 = (_QWORD *)(v2 + 152);
    do
    {
      v5 = *(v4 - 1);
      if ( v5 )
        sub_140001660(*v4, v5, 1);
      if ( *((_DWORD *)v4 - 14) != 2 )
      {
        v6 = *(v4 - 5);
        if ( v6 != -1 )
        {
          if ( v6 )
            sub_140001660(*(v4 - 4), v6, 1);
        }
      }
      v4 += 24;
      --v3;
    }
    while ( v3 );
  }
  result = *a1;
  if ( *a1 )
    return sub_140001660(v2, 192 * result, 8);
  return result;
}
