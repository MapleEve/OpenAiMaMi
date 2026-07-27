// module: codexmate_lib/core/relay/manager
// addr: 0x1408436c0
// name: sub_1408436C0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1408436C0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = a1[2];
  if ( v3 == *a1 )
    sub_1416899D0(a1);
  sub_141684120(a1[1] + 232 * v3, a2, 232);
  a1[2] = v3 + 1;
}