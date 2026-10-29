// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d14c40 | name sub_140D14C40
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D14C40(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // [rsp+28h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 245);
  if ( !*(_BYTE *)(a1 + 245) )
    return sub_140409B40(a1 + 64);
  if ( (_DWORD)result == 3 )
  {
    v4 = a1;
    sub_140D1A820(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 256));
  }
  else
  {
    if ( (_DWORD)result != 4 )
      return result;
    v4 = a1;
    if ( *(_BYTE *)(a1 + 881) == 3 )
    {
      sub_140D11B60(a1 + 528);
    }
    else if ( !*(_BYTE *)(a1 + 881) )
    {
      sub_140402120(a1 + 392);
      v2 = *(_QWORD **)(v4 + 520);
      if ( *v2 )
        sub_140001660(v2[1], *v2, 1);
      sub_140001660(v2, 88, 8);
    }
    sub_14029C800(v4 + 888);
  }
  *(_WORD *)(v4 + 240) = 0;
  result = *(_QWORD *)(v4 + 208);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)result) )
    result = sub_141242F50(v4 + 208);
  *(_WORD *)(v4 + 242) = 0;
  v3 = *(_QWORD *)(v4 + 176);
  if ( v3 )
    result = sub_140001660(*(_QWORD *)(v4 + 184), v3, 1);
  *(_BYTE *)(v4 + 244) = 0;
  return result;
}
