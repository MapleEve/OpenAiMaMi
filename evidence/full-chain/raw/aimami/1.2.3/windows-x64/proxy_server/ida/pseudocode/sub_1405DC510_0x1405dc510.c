// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dc510
// name: sub_1405DC510
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DC510(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // [rsp+28h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 544);
  if ( *(_BYTE *)(a1 + 544) )
  {
    if ( (_DWORD)result == 3 )
    {
      v4 = a1;
      sub_1405DD9A0(a1 + 552);
    }
    else
    {
      if ( (_DWORD)result != 4 )
        return result;
      v4 = a1;
      if ( *(_BYTE *)(a1 + 2096) == 3 )
      {
        sub_1405DD0E0(a1 + 632);
        *(_BYTE *)(v4 + 2097) = 0;
      }
      else if ( !*(_BYTE *)(a1 + 2096) )
      {
        sub_1400104F0(a1 + 560);
      }
    }
    *(_BYTE *)(v4 + 545) = 0;
    sub_140017140(v4 + 448);
    sub_1402C3580(v4 + 360);
    v3 = *(_QWORD *)(v4 + 336);
    if ( v3 )
      sub_140001660(*(_QWORD *)(v4 + 344), v3, 1);
    return sub_1405E7870(v4 + 288);
  }
  else
  {
    sub_1405E7870(a1 + 240);
    v2 = *(_QWORD *)(a1 + 96);
    if ( v2 )
      sub_140001660(*(_QWORD *)(a1 + 104), v2, 1);
    sub_1402C3580(a1 + 120);
    sub_140017140(a1);
    return sub_1400104F0(a1 + 208);
  }
}