// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x1416bbf60 | name sub_1416BBF60
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1416BBF60(__int64 *a1)
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
