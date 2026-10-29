// win 1.2.7 | module src/core/relay/storage.rs | ea 0x1401911b0 | name sub_1401911B0
// win 1.2.7 | module src/core/relay/storage.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401911B0(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx

  v2 = a1[1];
  v3 = a1[2];
  if ( v3 )
  {
    v4 = (_QWORD *)(v2 + 32);
    do
    {
      v5 = *(v4 - 4);
      if ( v5 )
        result = sub_140001660(*(v4 - 3), v5, 1);
      v7 = *(v4 - 1);
      if ( v7 )
        result = sub_140001660(*v4, v7, 1);
      v4 += 8;
      --v3;
    }
    while ( v3 );
  }
  if ( *a1 )
    return sub_140001660(v2, *a1 << 6, 8);
  return result;
}
