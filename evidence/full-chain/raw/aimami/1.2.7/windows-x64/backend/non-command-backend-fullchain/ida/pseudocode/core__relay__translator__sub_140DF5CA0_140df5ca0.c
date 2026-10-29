// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140df5ca0 | name sub_140DF5CA0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DF5CA0(__int64 *a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  bool v4; // sf
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx

  v2 = *a1;
  v3 = *a1 ^ 0x8000000000000000uLL;
  v4 = v2 < 0;
  result = 2;
  if ( v4 )
    result = v3;
  if ( result )
  {
    if ( result == 1 )
    {
      v6 = a1[1];
      if ( v6 )
        sub_140001660(a1[2], v6, 1);
      return sub_14029EFF0(a1 + 4);
    }
    else
    {
      return sub_14038D8C0(a1);
    }
  }
  else
  {
    v7 = a1[1];
    if ( v7 )
      result = sub_140001660(a1[2], v7, 1);
    v8 = a1[4];
    if ( v8 )
      result = sub_140001660(a1[5], v8, 1);
    v9 = a1[7];
    if ( v9 )
      result = sub_140001660(a1[8], v9, 1);
    v10 = a1[10];
    if ( v10 )
      return sub_140001660(a1[11], v10, 1);
  }
  return result;
}
