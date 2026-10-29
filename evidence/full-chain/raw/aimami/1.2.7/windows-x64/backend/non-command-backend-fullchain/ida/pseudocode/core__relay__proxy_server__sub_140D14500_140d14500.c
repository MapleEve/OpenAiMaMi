// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d14500 | name sub_140D14500
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D14500(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 3880);
  if ( *(_BYTE *)(a1 + 3880) )
  {
    if ( (_DWORD)result == 3 )
    {
      sub_140D154E0(a1 + 400);
      sub_14029B810(a1 + 312);
      return sub_14040DE90(a1 + 264);
    }
  }
  else
  {
    sub_14040DE90(a1 + 216);
    sub_14029B810(a1 + 96);
    sub_14029C800(a1);
    return sub_140409B40(a1 + 184);
  }
  return result;
}
