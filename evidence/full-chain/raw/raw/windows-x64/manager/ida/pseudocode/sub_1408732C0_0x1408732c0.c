// module: codexmate_lib/core/relay/manager
// addr: 0x1408732c0
// name: sub_1408732C0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_1408732C0(_QWORD *a1)
{
  _OWORD *result; // rax

  nullsub_1(a1);
  result = (_OWORD *)sub_140001650(107, 1);
  if ( !result )
    sub_1416C2D4B(1, 107);
  *(_OWORD *)((char *)result + 91) = *(__int128 *)((char *)&xmmword_141798C00 + 11);
  result[5] = xmmword_141798C00;
  result[4] = xmmword_141798BF0;
  result[3] = xmmword_141798BE0;
  result[2] = xmmword_141798BD0;
  result[1] = xmmword_141798BC0;
  *result = xmmword_141798BB0;
  a1[1] = 107;
  a1[2] = result;
  a1[3] = 107;
  *a1 = 10;
  return result;
}