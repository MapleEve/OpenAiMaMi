// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1400213e0 | name sub_1400213E0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1400213E0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-8h] BYREF

  if ( a1 )
  {
    result = a1 & 3;
    if ( (unsigned int)(result - 2) >= 2 && (a1 & 3) != 0 )
    {
      v2 = a1 - 1;
      return sub_1416BCB00(&v2);
    }
  }
  return result;
}
