// module: codexmate_lib/core/oauth_refresh
// addr: 0x1402c5e50
// name: sub_1402C5E50
// win 1.2.1 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
BOOL __fastcall sub_1402C5E50(HANDLE *a1)
{
  __int64 v2; // [rsp+28h] [rbp-18h] BYREF
  HANDLE *v3; // [rsp+30h] [rbp-10h]
  __int64 v4; // [rsp+38h] [rbp-8h]

  v4 = -2;
  v3 = a1;
  v2 = sub_1412018B0(a1);
  if ( v2 )
    sub_140018650(&v2);
  return CloseHandle(*v3);
}