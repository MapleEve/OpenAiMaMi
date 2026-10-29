// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d14b10 | name sub_140D14B10
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D14B10(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 656);
  if ( *(_BYTE *)(a1 + 656) )
  {
    if ( (_DWORD)result == 3 )
    {
      sub_140D152D0(a1 + 224);
      return sub_14040DE90(a1 + 176);
    }
  }
  else
  {
    sub_14040DE90(a1 + 96);
    sub_14029C800(a1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 144) + 32LL))(
             a1 + 168,
             *(_QWORD *)(a1 + 152),
             *(_QWORD *)(a1 + 160));
  }
  return result;
}
