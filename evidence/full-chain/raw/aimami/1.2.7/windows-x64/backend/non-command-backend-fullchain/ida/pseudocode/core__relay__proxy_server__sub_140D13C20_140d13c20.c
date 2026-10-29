// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d13c20 | name sub_140D13C20
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D13C20(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rsi
  __int64 v3; // [rsp+28h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 131);
  if ( !*(_BYTE *)(a1 + 131) )
    return sub_140409B40(a1 + 32);
  if ( (_DWORD)result == 3 )
  {
    v3 = a1;
    sub_140D1A820(*(_QWORD *)(a1 + 136), *(_QWORD *)(a1 + 144));
  }
  else
  {
    if ( (_DWORD)result != 4 )
      return result;
    v3 = a1;
    if ( *(_BYTE *)(a1 + 769) == 3 )
    {
      sub_140D11B60(a1 + 416);
    }
    else if ( !*(_BYTE *)(a1 + 769) )
    {
      sub_140402120(a1 + 280);
      v2 = *(_QWORD **)(v3 + 408);
      if ( *v2 )
        sub_140001660(v2[1], *v2, 1);
      sub_140001660(v2, 88, 8);
    }
  }
  *(_BYTE *)(v3 + 129) = 0;
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v3 + 96)) )
    sub_141242F50(v3 + 96);
  *(_BYTE *)(v3 + 130) = 0;
  return sub_140409B40(v3);
}
