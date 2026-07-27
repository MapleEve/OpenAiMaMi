// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1406ca670
// name: sub_1406CA670
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406CA670(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // [rsp+28h] [rbp-18h]
  _QWORD *v6; // [rsp+30h] [rbp-10h]

  result = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return sub_1406CEFC0(a1 + 8);
  if ( (_DWORD)result != 1 )
    return result;
  v3 = (_DWORD *)(a1 + 8);
  result = *(unsigned __int8 *)(a1 + 489);
  if ( *(_BYTE *)(a1 + 489) )
  {
    if ( (_DWORD)result != 3 )
      return result;
    v6 = (_QWORD *)a1;
    if ( *v3 != 2 )
      sub_1406CE8F0(v3);
  }
  else
  {
    v6 = (_QWORD *)a1;
    if ( *v3 != 2 )
      sub_1406CE8F0(v3);
  }
  v5 = v6[58];
  sub_1405B02E0(v5);
  sub_140001660(v5, 64, 8);
  result = (__int64)v6;
  v4 = v6[55];
  if ( v4 )
    return sub_140001660(v6[56], v4, 1);
  return result;
}