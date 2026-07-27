// module: codexmate_lib/commands/accounts
// addr: 0x140bec490
// name: sub_140BEC490
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BEC490(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rsi

  result = *(unsigned __int8 *)(a1 + 520);
  if ( *(_BYTE *)(a1 + 520) )
  {
    if ( (_DWORD)result == 3 )
    {
      if ( *(_BYTE *)(a1 + 512) == 3 )
      {
        v4 = *(_QWORD *)(a1 + 504);
        if ( (unsigned __int8)sub_1412F2A80(v4) )
          sub_1412E7580(v4);
      }
      else if ( !*(_BYTE *)(a1 + 512) )
      {
        sub_140014150(a1 + 328);
        v2 = *(_QWORD *)(a1 + 480);
        if ( v2 )
          sub_140001660(*(_QWORD *)(a1 + 488), v2, 1);
      }
      *(_BYTE *)(a1 + 521) = 0;
      return sub_140014150(a1 + 176);
    }
  }
  else
  {
    sub_140014150(a1);
    result = a1;
    v3 = *(_QWORD *)(a1 + 152);
    if ( v3 )
      return sub_140001660(*(_QWORD *)(a1 + 160), v3, 1);
  }
  return result;
}