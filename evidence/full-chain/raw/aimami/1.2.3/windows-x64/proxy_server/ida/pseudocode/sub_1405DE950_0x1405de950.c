// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405de950
// name: sub_1405DE950
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DE950(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 204);
  if ( *(_BYTE *)(a1 + 204) )
  {
    if ( (_DWORD)result == 3 )
    {
      sub_1405DC7D0(a1 + 32);
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 24)) )
        sub_140FA2C80(a1 + 24);
      *(_DWORD *)(a1 + 208) = 0;
      *(_DWORD *)(a1 + 205) = 0;
      return a1;
    }
  }
  else
  {
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)a1) )
      sub_140574DB0((__int64 *)a1);
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 8)) )
      sub_140574820((__int64 *)(a1 + 8));
    result = *(_QWORD *)(a1 + 16);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)result) )
      return sub_140575F20((__int64 *)(a1 + 16));
  }
  return result;
}