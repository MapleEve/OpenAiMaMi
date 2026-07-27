// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dde20
// name: sub_1405DDE20
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DDE20(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 656);
  if ( *(_BYTE *)(a1 + 656) )
  {
    if ( (_DWORD)result == 3 )
    {
      sub_1405DE2E0(a1 + 224);
      return sub_1405E7870(a1 + 176);
    }
  }
  else
  {
    sub_1405E7870(a1 + 96);
    sub_140017140(a1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 144) + 32LL))(
             a1 + 168,
             *(_QWORD *)(a1 + 152),
             *(_QWORD *)(a1 + 160));
  }
  return result;
}