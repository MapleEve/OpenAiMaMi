// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x14040d400
// name: sub_14040D400
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
bool __fastcall sub_14040D400(__int64 a1, unsigned __int64 a2)
{
  if ( a2 == 12 )
    return (*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(unsigned int *)(a1 + 8) ^ 0x79616C65LL) == 0;
  if ( a2 > 0xC )
    return (*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(_QWORD *)(a1 + 5) ^ 0x5F79616C65725F69LL) == 0;
  return 0;
}