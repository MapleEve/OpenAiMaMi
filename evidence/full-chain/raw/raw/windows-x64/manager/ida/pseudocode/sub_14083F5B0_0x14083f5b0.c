// module: codexmate_lib/core/relay/manager
// addr: 0x14083f5b0
// name: sub_14083F5B0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14083F5B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  char v4; // cl
  __int64 v5; // [rsp+28h] [rbp-18h] BYREF
  char v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+38h] [rbp-8h]

  v7 = -2;
  if ( *(_DWORD *)a1 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_BYTE *)(a1 + 16);
    v5 = v3;
    v6 = v4;
    sub_1416C3060((unsigned int)aRelayStatePois_0, 20, (unsigned int)&v5, (unsigned int)&off_141796230, a2);
  }
  return *(_QWORD *)(a1 + 8);
}