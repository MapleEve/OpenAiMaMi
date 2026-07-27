// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dc430
// name: sub_1405DC430
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DC430(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 145);
  if ( !*(_BYTE *)(a1 + 145) )
    return sub_1400104F0(a1 + 32);
  if ( (_DWORD)result == 3 )
  {
    sub_1405E6830(a1 + 64);
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 112)) )
      sub_141018B80(a1 + 112);
    *(_BYTE *)(a1 + 144) = 0;
    return sub_1400104F0(a1);
  }
  return result;
}