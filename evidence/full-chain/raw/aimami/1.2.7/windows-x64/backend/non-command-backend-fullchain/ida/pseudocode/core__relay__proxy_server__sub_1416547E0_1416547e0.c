// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1416547e0 | name sub_1416547E0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1416547E0(_QWORD *a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  v1 = a1[3];
  if ( (v1 & 1) != 0 )
  {
    v2 = v1 >> 5;
    v3 = v2 + a1[2];
    if ( v3 )
      return sub_140001660(*a1 - v2, v3, 1);
  }
  else if ( !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 32)) )
  {
    if ( *(_QWORD *)v1 )
      sub_140001660(*(_QWORD *)(v1 + 8), *(_QWORD *)v1, 1);
    return sub_140001660(v1, 40, 8);
  }
  return result;
}
