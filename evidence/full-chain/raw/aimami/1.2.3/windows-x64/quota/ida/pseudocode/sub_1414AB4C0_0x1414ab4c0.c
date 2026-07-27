// module: codexmate_lib/core/relay/quota
// addr: 0x1414ab4c0
// name: sub_1414AB4C0
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1414AB4C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = *(_DWORD *)(a2 + 16);
  if ( (v2 & 0x10000000) != 0 )
    return sub_14149CAE0(a2, a2, (v2 >> 21) & 1, *(unsigned __int16 *)(a2 + 22));
  else
    return sub_14149D360(a2, a2, (v2 >> 21) & 1, 0);
}