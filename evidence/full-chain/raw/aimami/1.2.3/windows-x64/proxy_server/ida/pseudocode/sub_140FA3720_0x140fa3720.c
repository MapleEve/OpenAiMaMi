// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140fa3720
// name: sub_140FA3720
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140FA3720(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  v4 = 3;
  if ( *a2 >= 2u )
    v4 = *a2 - 2LL;
  switch ( v4 )
  {
    case 0LL:
      sub_140FA3940(a1, a2[1], a2[2]);
      result = a1;
      break;
    case 1LL:
      sub_140FA3830(a1, a2[1], a2[2]);
      result = a1;
      break;
    case 2LL:
      sub_140FAEBB0(a1, aExpectedReques, 54, a4);
      *(_WORD *)(a1 + 104) = 415;
      result = a1;
      break;
    case 3LL:
      sub_140FAF540(a1, a2);
      result = a1;
      break;
  }
  return result;
}