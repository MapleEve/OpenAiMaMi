// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140cf4600 | name sub_140CF4600
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140CF4600(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // [rsp+20h] [rbp-10h]
  _QWORD *v5; // [rsp+28h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 161);
  if ( *(_BYTE *)(a1 + 161) )
  {
    if ( (_DWORD)result != 3 )
      return result;
    if ( *(_QWORD *)(a1 + 24) != -2 )
    {
      v2 = a1;
      sub_140D1E650(a1 + 24);
      a1 = v2;
    }
  }
  else if ( *(_QWORD *)(a1 + 24) != -2 )
  {
    v3 = a1;
    sub_140D1E650(a1 + 24);
    a1 = v3;
  }
  v5 = (_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 136);
  sub_140CE5110(v4);
  sub_140001660(v4, 64, 8);
  result = (__int64)v5;
  if ( *v5 )
    return sub_140001660(v5[1], *v5, 1);
  return result;
}
