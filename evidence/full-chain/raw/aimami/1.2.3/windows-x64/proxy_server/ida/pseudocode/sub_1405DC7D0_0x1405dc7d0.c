// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dc7d0
// name: sub_1405DC7D0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DC7D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  if ( *(_BYTE *)(a1 + 167) == 3 )
  {
    if ( *(_BYTE *)(a1 + 152) == 3 )
    {
      result = a1;
      if ( *(_WORD *)(a1 + 120) == 0xFFFF )
        result = sub_140018650(a1 + 128);
    }
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      result = sub_140001660(*(_QWORD *)a1, 2 * v2, 2);
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 != -1 )
    {
      if ( v3 )
        result = sub_140001660(*(_QWORD *)(a1 + 72), v3, 1);
    }
    *(_BYTE *)(a1 + 166) = 0;
  }
  return result;
}