// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1406caab0
// name: sub_1406CAAB0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406CAAB0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  result = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return sub_1406CF1A0(a1 + 8);
  if ( (_DWORD)result != 1 )
    return result;
  result = *(unsigned __int8 *)(a1 + 169);
  if ( *(_BYTE *)(a1 + 169) )
  {
    if ( (_DWORD)result != 3 )
      return result;
    if ( *(_QWORD *)(a1 + 32) != -2 )
    {
      v2 = a1;
      sub_1405E95F0((__int64 *)(a1 + 32));
      a1 = v2;
    }
  }
  else if ( *(_QWORD *)(a1 + 32) != -2 )
  {
    v3 = a1;
    sub_1405E95F0((__int64 *)(a1 + 32));
    a1 = v3;
  }
  v6 = a1;
  v5 = *(_QWORD *)(a1 + 144);
  sub_1405B02E0(v5);
  sub_140001660(v5, 64, 8);
  result = v6;
  v4 = *(_QWORD *)(v6 + 8);
  if ( v4 )
    return sub_140001660(*(_QWORD *)(v6 + 16), v4, 1);
  return result;
}