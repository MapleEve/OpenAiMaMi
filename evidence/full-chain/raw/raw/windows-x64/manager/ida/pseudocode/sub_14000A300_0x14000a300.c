// module: codexmate_lib/core/relay/manager
// addr: 0x14000a300
// name: sub_14000A300
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14000A300(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 result; // rax

  v2 = a1[1];
  v3 = a1[2];
  if ( v3 )
  {
    v4 = (_QWORD *)(v2 + 72);
    do
    {
      v5 = *(v4 - 7);
      if ( v5 )
        sub_140001660(*(v4 - 6), v5, 1);
      v6 = *(v4 - 1);
      if ( v6 != -1 && v6 )
        sub_140001660(*v4, v6, 1);
      v7 = *(v4 - 4);
      if ( v7 )
        sub_140001660(*(v4 - 3), v7, 1);
      v4 += 12;
      --v3;
    }
    while ( v3 );
  }
  result = *a1;
  if ( *a1 )
    return sub_140001660(v2, 96 * result, 8);
  return result;
}