// win 1.2.7 | module src/core/repository.rs | ea 0x140194b60 | name sub_140194B60
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140194B60(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[4];
  if ( v3 != -1 )
  {
    if ( v3 )
      return sub_140001660(a1[5], v3, 1);
  }
  return result;
}
