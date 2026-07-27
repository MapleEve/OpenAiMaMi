// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dd820
// name: sub_1405DD820
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DD820(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 3768);
  if ( *(_BYTE *)(a1 + 3768) )
  {
    if ( (_DWORD)result == 3 )
    {
      sub_1405DE4E0(a1 + 400);
      sub_1402C3580(a1 + 312);
      return sub_1405E7870(a1 + 264);
    }
  }
  else
  {
    sub_1405E7870(a1 + 216);
    sub_1402C3580(a1 + 96);
    sub_140017140(a1);
    return sub_1400104F0(a1 + 184);
  }
  return result;
}