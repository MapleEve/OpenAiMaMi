// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140623b10 | name sub_140623B10
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140623B10(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = a1[1];
  v3 = a1[2];
  if ( v3 )
  {
    v4 = (_QWORD *)(v2 + 8);
    do
    {
      v5 = *(v4 - 1);
      if ( v5 )
        result = sub_140001660(*v4, v5, 1);
      v4 += 8;
      --v3;
    }
    while ( v3 );
  }
  if ( *a1 )
    return sub_140001660(v2, *a1 << 6, 16);
  return result;
}
