// win 1.2.7 | module src/core/oauth_refresh.rs | ea 0x1402932b0 | name sub_1402932B0
// win 1.2.7 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402932B0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]

  result = *a2;
  if ( *a2 != -1 )
  {
    v7 = *a2;
    v6 = a2[1];
    result = sub_140E91160(v6, a2[2]);
    if ( v5 )
    {
      result = a2[2];
      *(_QWORD *)(a1 + 16) = result;
      *(_OWORD *)a1 = *(_OWORD *)a2;
      return result;
    }
    if ( v7 )
      result = sub_140001660(v6, v7, 1);
  }
  *(_QWORD *)a1 = -1;
  return result;
}
