// module: codexmate_lib/core/repository
// addr: 0x14034e200
// name: sub_14034E200
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14034E200(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[4];
  if ( v3 > 0 )
    return sub_140001660(a1[5], v3, 1);
  return result;
}