// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dcf80
// name: sub_1405DCF80
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DCF80(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+28h] [rbp-18h]

  result = *(unsigned __int8 *)(a1 + 464);
  if ( !*(_BYTE *)(a1 + 464) )
    return sub_1405AE950(a1);
  if ( (_DWORD)result == 3 )
  {
    sub_1405DD570(a1 + 368);
    *(_BYTE *)(a1 + 465) = 0;
    sub_140017140(a1 + 256);
    result = a1;
    if ( *(_QWORD *)(a1 + 352) )
    {
      v2 = *(_QWORD *)(a1 + 352);
      sub_14067E8F0();
      sub_140001660(v2, 32, 8);
      result = a1;
    }
    *(_WORD *)(result + 466) = 0;
  }
  return result;
}