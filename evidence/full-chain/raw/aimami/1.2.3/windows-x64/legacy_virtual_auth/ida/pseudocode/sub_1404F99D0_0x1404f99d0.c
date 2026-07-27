// module: codexmate_lib/core/relay/legacy_virtual_auth
// addr: 0x1404f99d0
// name: sub_1404F99D0
// win 1.2.1 | module src/core/relay/legacy_virtual_auth.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404F99D0(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // [rsp+20h] [rbp-10h]

  if ( *(_BYTE *)a1 != 0xFF )
    return sub_1400104F0(a1);
  v2 = *(_QWORD **)(a1 + 8);
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