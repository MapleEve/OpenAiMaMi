// module: codexmate_lib/core/relay/quota
// addr: 0x1404d1020
// name: sub_1404D1020
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404D1020(unsigned __int8 *a1)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rdx
  _BYTE v5[8]; // [rsp+28h] [rbp-10h] BYREF

  if ( !a1 )
    return 0;
  v1 = *a1;
  if ( v1 != 2 )
  {
    if ( v1 == 3 )
    {
      v2 = sub_14033BC10(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
      sub_1414AA750(v5, v2, v3);
      return v5[0] ^ 1LL;
    }
    return 0;
  }
  return 1;
}