// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d12d70 | name sub_140D12D70
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D12D70(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 145);
  if ( !*(_BYTE *)(a1 + 145) )
    return sub_140409B40(a1 + 32);
  if ( (_DWORD)result == 3 )
  {
    sub_140D1A820(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 72));
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 112)) )
      sub_141242F50(a1 + 112);
    *(_BYTE *)(a1 + 144) = 0;
    return sub_140409B40(a1);
  }
  return result;
}
