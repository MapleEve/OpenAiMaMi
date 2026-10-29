// win 1.2.7 | module src/core/relay/quota.rs | ea 0x140dbab50 | name sub_140DBAB50
// win 1.2.7 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DBAB50(unsigned __int8 *a1)
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
      v2 = sub_140E91160(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
      sub_1416BAA10(v5, v2, v3);
      return v5[0] ^ 1LL;
    }
    return 0;
  }
  return 1;
}
