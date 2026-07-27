// module: codexmate_lib/core/voice/workspace
// addr: 0x1414ab9c0
// name: sub_1414AB9C0
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1414AB9C0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0xFFFFFFFFLL;
  if ( a1[1] != *a1 )
  {
    *a1 = v1 + 1;
    return *((unsigned int *)a1 + v1 + 4);
  }
  return result;
}