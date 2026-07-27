// module: codexmate_lib/core/relay/config_takeover
// addr: 0x140349780
// name: sub_140349780
// win 1.2.1 | module src/core/relay/config_takeover.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140349780(_QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // [rsp+20h] [rbp-10h]

  if ( *a1 != -1 )
    return sub_1403503B0();
  v2 = (_QWORD *)a1[1];
  v4 = v2;
  if ( *v2 == 1 )
  {
    sub_140018650(v2 + 1);
  }
  else if ( !*v2 )
  {
    v3 = v2[2];
    if ( v3 )
      sub_140001660(v2[1], v3, 1);
  }
  return sub_140001660(v4, 40, 8);
}