// module: codexmate_lib/core/oauth_login
// addr: 0x14169c860
// name: sub_14169C860
// win 1.2.1 | module src/core/oauth_login.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14169C860(__int64 *a1, __int64 a2, __int64 a3)
{
  bool v3; // cf
  unsigned __int64 v4; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v3 = __CFADD__(a3, a2);
  v4 = a3 + a2;
  if ( v3 )
    sub_1416C2D4B(0, v4);
  v6 = *a1;
  v7 = 2 * *a1;
  if ( v4 > v7 )
    v7 = v4;
  v8 = 8;
  if ( v7 >= 9 )
    v8 = v7;
  sub_14169C8E0(&v10, v6, a1[1], v8);
  if ( v10 == 1 )
    sub_1416C2D4B(v11, v12);
  result = v11;
  a1[1] = v11;
  *a1 = v8;
  return result;
}