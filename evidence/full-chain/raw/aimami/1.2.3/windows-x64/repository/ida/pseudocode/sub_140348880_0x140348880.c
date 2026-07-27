// module: codexmate_lib/core/repository
// addr: 0x140348880
// name: sub_140348880
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140348880(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rsi
  __int64 result; // rax
  __int64 v4; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 == -1 )
      return result;
    v2 = a1;
    result = sub_140001660(a1[1], v1, 1);
    a1 = v2;
  }
  v4 = a1[3];
  if ( v4 > 0 )
    return sub_140001660(a1[4], v4, 1);
  return result;
}