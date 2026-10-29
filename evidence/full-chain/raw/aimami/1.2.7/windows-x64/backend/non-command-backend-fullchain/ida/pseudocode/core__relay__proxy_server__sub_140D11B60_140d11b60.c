// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d11b60 | name sub_140D11B60
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D11B60(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rsi
  __int64 v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+30h] [rbp-10h]

  result = *(unsigned __int8 *)(a1 + 344);
  if ( *(_BYTE *)(a1 + 344) )
  {
    if ( (_DWORD)result == 3 )
    {
      v4 = *(_QWORD *)(a1 + 320);
      v5 = *(_QWORD *)(a1 + 328);
      if ( *(_QWORD *)v5 )
        (*(void (__fastcall **)(__int64))v5)(v4);
      v2 = *(_QWORD *)(v5 + 8);
      if ( v2 )
        sub_140001660(v4, v2, *(_QWORD *)(v5 + 16));
      sub_1416547E0(a1 + 288);
      result = a1;
      *(_WORD *)(a1 + 345) = 0;
    }
  }
  else
  {
    sub_140402120(a1);
    v3 = *(_QWORD **)(a1 + 128);
    if ( *v3 )
      sub_140001660(v3[1], *v3, 1);
    return sub_140001660(v3, 88, 8);
  }
  return result;
}
