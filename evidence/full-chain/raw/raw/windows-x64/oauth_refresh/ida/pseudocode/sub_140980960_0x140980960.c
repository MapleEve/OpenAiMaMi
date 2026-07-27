// module: codexmate_lib/core/oauth_refresh
// addr: 0x140980960
// name: sub_140980960
// win 1.2.1 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140980960(_BYTE *a1)
{
  __int64 v1; // [rsp+28h] [rbp-18h] BYREF
  HANDLE *v2; // [rsp+30h] [rbp-10h]
  __int64 v3; // [rsp+38h] [rbp-8h]

  v3 = -2;
  if ( *a1 )
  {
    v2 = (HANDLE *)(a1 + 8);
    v1 = sub_1412018B0(a1 + 8);
    if ( v1 )
      sub_140018650(&v1);
    CloseHandle(*v2);
  }
}