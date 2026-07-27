// module: codexmate_lib/commands/analytics
// addr: 0x140bedb50
// name: sub_140BEDB50
// win 1.2.1 | module src/commands/analytics.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BEDB50(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rsi

  result = *(unsigned __int8 *)(a1 + 1072);
  if ( *(_BYTE *)(a1 + 1072) )
  {
    if ( (_DWORD)result == 3 )
    {
      if ( *(_BYTE *)(a1 + 1064) == 3 )
      {
        v3 = *(_QWORD *)(a1 + 1056);
        if ( (unsigned __int8)sub_1412F2A80(v3) )
          sub_1412E7580(v3);
      }
      else if ( !*(_BYTE *)(a1 + 1064) )
      {
        sub_140016620(a1 + 40);
        v2 = *(_QWORD *)(a1 + 1032);
        if ( v2 )
          sub_140001660(*(_QWORD *)(a1 + 1040), v2, 1);
      }
      *(_BYTE *)(a1 + 1073) = 0;
      return a1;
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    return sub_140001660(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, 1);
  }
  return result;
}