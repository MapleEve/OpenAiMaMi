// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d12b40 | name sub_140D12B40
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D12B40(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  result = *(unsigned __int8 *)(a1 + 2248);
  if ( *(_BYTE *)(a1 + 2248) )
  {
    if ( (_DWORD)result == 3 )
    {
      if ( *(_BYTE *)(a1 + 2240) == 3 )
      {
        sub_140D138A0(a1 + 448);
        *(_BYTE *)(a1 + 2241) = 0;
      }
      else if ( !*(_BYTE *)(a1 + 2240) )
      {
        sub_140409B40(a1 + 376);
      }
      *(_BYTE *)(a1 + 2249) = 0;
      sub_14029C800(a1 + 272);
      v3 = *(_QWORD *)(a1 + 248);
      if ( v3 )
        sub_140001660(*(_QWORD *)(a1 + 256), v3, 1);
      return sub_14040DE90(a1 + 200);
    }
  }
  else
  {
    sub_14040DE90(a1 + 152);
    v2 = *(_QWORD *)(a1 + 96);
    if ( v2 )
      sub_140001660(*(_QWORD *)(a1 + 104), v2, 1);
    sub_14029C800(a1);
    return sub_140409B40(a1 + 120);
  }
  return result;
}
