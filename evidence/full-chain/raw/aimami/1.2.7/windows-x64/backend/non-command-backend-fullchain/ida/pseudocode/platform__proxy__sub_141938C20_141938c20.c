// win 1.2.7 | module src/platform/proxy.rs | ea 0x141938c20 | name sub_141938C20
// win 1.2.7 | module src/platform/proxy.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141938C20(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-18h] BYREF
  __int64 v5; // [rsp+30h] [rbp-10h]
  __int64 v6; // [rsp+38h] [rbp-8h]

  v2 = 8;
  if ( (unsigned __int64)(2 * *a1) >= 9 )
    v2 = 2 * *a1;
  sub_141938C80(&v4, *a1, a1[1], v2);
  if ( v4 == 1 )
    sub_141938D2B(v5, v6);
  result = v5;
  a1[1] = v5;
  *a1 = v2;
  return result;
}
