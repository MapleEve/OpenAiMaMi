// module: codexmate_lib/platform/process
// addr: 0x1403f83a0
// name: sub_1403F83A0
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
bool __fastcall sub_1403F83A0(__int64 a1, unsigned __int64 a2)
{
  bool result; // al

  if ( a2 == 9 )
  {
    result = 1;
    if ( !(*(_QWORD *)a1 ^ 0x78652E7865646F63LL | *(unsigned __int8 *)(a1 + 8) ^ 0x65LL)
      || !(*(_DWORD *)a1 ^ 0x65646F63 | *(unsigned __int16 *)(a1 + 4) ^ 0x2D78)
      || !(*(_DWORD *)a1 ^ 0x65646F63 | *(unsigned __int16 *)(a1 + 4) ^ 0x2078) )
    {
      return result;
    }
    return *(_QWORD *)a1 == 0x2074706774616863LL;
  }
  if ( a2 < 6 )
    return 0;
  result = 1;
  if ( *(_DWORD *)a1 ^ 0x65646F63 | *(unsigned __int16 *)(a1 + 4) ^ 0x2D78
    && (a2 < 0xC || *(_QWORD *)a1 ^ 0x6568207865646F63LL | *(unsigned int *)(a1 + 8) ^ 0x7265706CLL)
    && *(_DWORD *)a1 ^ 0x65646F63 | *(unsigned __int16 *)(a1 + 4) ^ 0x2078 )
  {
    if ( a2 == 11 )
    {
      if ( !(*(_QWORD *)a1 ^ 0x2E74706774616863LL | *(_QWORD *)(a1 + 3) ^ 0x6578652E74706774LL) )
        return result;
      return *(_QWORD *)a1 == 0x2074706774616863LL;
    }
    if ( a2 >= 0xE )
    {
      if ( !(*(_QWORD *)a1 ^ 0x2074706774616863LL | *(_QWORD *)(a1 + 6) ^ 0x7265706C65682074LL) )
        return result;
      return *(_QWORD *)a1 == 0x2074706774616863LL;
    }
    if ( a2 >= 8 )
      return *(_QWORD *)a1 == 0x2074706774616863LL;
    return 0;
  }
  return result;
}