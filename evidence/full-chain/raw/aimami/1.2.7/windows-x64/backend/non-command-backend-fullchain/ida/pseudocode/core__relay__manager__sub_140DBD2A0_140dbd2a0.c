// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140dbd2a0 | name sub_140DBD2A0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_140DBD2A0(_QWORD *a1)
{
  _OWORD *result; // rax

  nullsub_1(a1);
  result = (_OWORD *)sub_140001650(107, 1);
  if ( !result )
    sub_141938D2B(1, 107);
  *(_OWORD *)((char *)result + 91) = *(__int128 *)((char *)&xmmword_141A4E29B + 11);
  result[5] = xmmword_141A4E29B;
  result[4] = xmmword_141A4E28B;
  result[3] = xmmword_141A4E27B;
  result[2] = xmmword_141A4E26B;
  result[1] = xmmword_141A4E25B;
  *result = xmmword_141A4E24B;
  a1[1] = 107;
  a1[2] = result;
  a1[3] = 107;
  *a1 = 10;
  return result;
}
