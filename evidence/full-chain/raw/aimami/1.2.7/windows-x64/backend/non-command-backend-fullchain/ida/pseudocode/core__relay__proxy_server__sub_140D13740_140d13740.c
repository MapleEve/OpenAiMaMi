// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d13740 | name sub_140D13740
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D13740(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // [rsp+28h] [rbp-18h]

  result = *(unsigned __int8 *)(a1 + 464);
  if ( !*(_BYTE *)(a1 + 464) )
    return sub_140402280(a1);
  if ( (_DWORD)result == 3 )
  {
    sub_140D13DD0(a1 + 368);
    *(_BYTE *)(a1 + 465) = 0;
    sub_14029C800(a1 + 256);
    result = a1;
    v5 = *(_QWORD *)(a1 + 352);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 352);
      sub_14036F280(v5, v2, v3, v4);
      sub_140001660(v6, 32, 8);
      result = a1;
    }
    *(_WORD *)(result + 466) = 0;
  }
  return result;
}
