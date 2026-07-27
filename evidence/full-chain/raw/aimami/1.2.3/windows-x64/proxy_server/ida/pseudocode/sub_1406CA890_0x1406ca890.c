// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1406ca890
// name: sub_1406CA890
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406CA890(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // [rsp+28h] [rbp-18h]
  _QWORD *v4; // [rsp+30h] [rbp-10h]

  result = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return sub_1406CF0B0(a1 + 8);
  if ( (_DWORD)result != 1 )
    return result;
  result = *(unsigned __int8 *)(a1 + 425);
  if ( *(_BYTE *)(a1 + 425) )
  {
    if ( (_DWORD)result != 3 )
      return result;
    v4 = (_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 32) != -1 )
      sub_1406CED30(a1 + 32);
  }
  else
  {
    v4 = (_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 32) != -1 )
      sub_1406CED30(a1 + 32);
  }
  v3 = v4[50];
  sub_1405B02E0(v3);
  sub_140001660(v3, 64, 8);
  result = (__int64)v4;
  v2 = v4[1];
  if ( v2 )
    return sub_140001660(v4[2], v2, 1);
  return result;
}