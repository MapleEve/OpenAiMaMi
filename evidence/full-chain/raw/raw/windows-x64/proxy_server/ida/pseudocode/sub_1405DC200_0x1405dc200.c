// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dc200
// name: sub_1405DC200
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DC200(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  result = *(unsigned __int8 *)(a1 + 1920);
  if ( *(_BYTE *)(a1 + 1920) )
  {
    if ( (_DWORD)result == 3 )
    {
      if ( *(_BYTE *)(a1 + 1912) == 3 )
      {
        sub_1405DD0E0(a1 + 448);
        *(_BYTE *)(a1 + 1913) = 0;
      }
      else if ( !*(_BYTE *)(a1 + 1912) )
      {
        sub_1400104F0(a1 + 376);
      }
      *(_BYTE *)(a1 + 1921) = 0;
      sub_140017140(a1 + 272);
      v3 = *(_QWORD *)(a1 + 248);
      if ( v3 )
        sub_140001660(*(_QWORD *)(a1 + 256), v3, 1);
      return sub_1405E7870(a1 + 200);
    }
  }
  else
  {
    sub_1405E7870(a1 + 152);
    v2 = *(_QWORD *)(a1 + 96);
    if ( v2 )
      sub_140001660(*(_QWORD *)(a1 + 104), v2, 1);
    sub_140017140(a1);
    return sub_1400104F0(a1 + 120);
  }
  return result;
}