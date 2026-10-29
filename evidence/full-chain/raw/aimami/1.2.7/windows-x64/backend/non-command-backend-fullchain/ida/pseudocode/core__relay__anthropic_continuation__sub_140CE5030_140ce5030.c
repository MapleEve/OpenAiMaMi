// win 1.2.7 | module src/core/relay/anthropic_continuation.rs | ea 0x140ce5030 | name sub_140CE5030
// win 1.2.7 | module src/core/relay/anthropic_continuation.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140CE5030(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // rcx

  result = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    if ( *(_DWORD *)(a1 + 8) == 2 )
      return result;
    v2 = (_DWORD *)(a1 + 8);
    return sub_140D1CF80(v2);
  }
  if ( (_DWORD)result == 1 )
  {
    result = *(unsigned __int8 *)(a1 + 2312);
    if ( (_DWORD)result == 3 )
    {
      sub_140D11A10(a1 + 2088);
      sub_140D1CF80(a1 + 1048);
      *(_BYTE *)(a1 + 2313) = 0;
      return a1;
    }
    if ( !*(_BYTE *)(a1 + 2312) )
    {
      v2 = (_DWORD *)(a1 + 8);
      if ( *v2 != 2 )
        return sub_140D1CF80(v2);
    }
  }
  return result;
}
