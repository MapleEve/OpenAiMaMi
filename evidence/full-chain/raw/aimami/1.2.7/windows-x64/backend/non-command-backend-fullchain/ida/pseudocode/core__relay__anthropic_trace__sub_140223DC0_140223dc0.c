// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x140223dc0 | name sub_140223DC0
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
const char *__fastcall sub_140223DC0(__int64 a1, __int64 a2)
{
  const char *result; // rax

  if ( !a1 )
    return aMissing;
  switch ( a2 )
  {
    case 3LL:
      if ( *(_WORD *)a1 ^ 0x6F6C | *(unsigned __int8 *)(a1 + 2) ^ 0x77 )
      {
        result = aOther_1;
        if ( !(*(_WORD *)a1 ^ 0x616D | *(unsigned __int8 *)(a1 + 2) ^ 0x78) )
          result = aMax_0;
      }
      else
      {
        result = aLow;
      }
      break;
    case 4LL:
      if ( *(_DWORD *)a1 == 1701736302 )
      {
        result = aNone;
      }
      else
      {
        result = aOther_1;
        if ( *(_DWORD *)a1 == 1751607656 )
          result = aHigh;
      }
      break;
    case 5LL:
      if ( *(_DWORD *)a1 ^ 0x67696878 | *(unsigned __int8 *)(a1 + 4) ^ 0x68 )
      {
        result = aOther_1;
        if ( !(*(_DWORD *)a1 ^ 0x72746C75 | *(unsigned __int8 *)(a1 + 4) ^ 0x61) )
          result = (const char *)&unk_1419DCF39;
      }
      else
      {
        result = aXhigh;
      }
      break;
    case 6LL:
      result = aOther_1;
      if ( !(*(_DWORD *)a1 ^ 0x6964656D | *(unsigned __int16 *)(a1 + 4) ^ 0x6D75) )
        result = aMedium;
      break;
    case 7LL:
      result = aOther_1;
      if ( !(*(_DWORD *)a1 ^ 0x696E696D | *(_DWORD *)(a1 + 3) ^ 0x6C616D69) )
        result = (const char *)&unk_1419DCF1D;
      break;
    default:
      result = aOther_1;
      break;
  }
  return result;
}
