// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405da6c0
// name: sub_1405DA6C0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DA6C0(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rsi
  __int64 v3; // rdx

  result = *(unsigned __int8 *)(a1 + 416);
  if ( !*(_BYTE *)(a1 + 416) )
  {
    sub_1405AE7F0(a1);
    v2 = *(__int64 **)(a1 + 128);
    v3 = *v2;
    if ( !*v2 )
      return sub_140001660(v2, 88, 8);
    goto LABEL_4;
  }
  if ( (_DWORD)result != 3 )
    return result;
  sub_1404FC390(a1 + 272);
  v2 = *(__int64 **)(a1 + 264);
  v3 = *v2;
  if ( *v2 )
LABEL_4:
    sub_140001660(v2[1], v3, 1);
  return sub_140001660(v2, 88, 8);
}