// module: codexmate_lib/core/oauth_login
// addr: 0x140d3e910
// name: sub_140D3E910
// win 1.2.1 | module src/core/oauth_login.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140D3E910(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r14

  nullsub_1(a1);
  v6 = sub_140001650(a3, 1);
  if ( !v6 )
    sub_1416C2D4B(1, a3);
  v7 = v6;
  sub_141684120(v6, a2, a3);
  *a1 = a3;
  a1[1] = v7;
  a1[2] = a3;
}