// module: codexmate_lib/core/oauth_refresh
// addr: 0x140010450
// name: sub_140010450
// win 1.2.1 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140010450(_QWORD **a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rdx
  _QWORD *v4; // [rsp+20h] [rbp-10h]

  v1 = *a1;
  v4 = v1;
  if ( *v1 == 1 )
  {
    sub_140018650(v1 + 1);
  }
  else if ( !*v1 )
  {
    v2 = v1[2];
    if ( v2 )
      sub_140001660(v1[1], v2, 1);
  }
  return sub_140001660(v4, 40, 8);
}