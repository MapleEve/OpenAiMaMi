// module: codexmate_lib/core/oauth_refresh
// addr: 0x14097be40
// name: sub_14097BE40
// win 1.2.1 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14097BE40(__int64 a1, __int64 *a2)
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
    result = sub_14033BC10(v6, a2[2]);
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