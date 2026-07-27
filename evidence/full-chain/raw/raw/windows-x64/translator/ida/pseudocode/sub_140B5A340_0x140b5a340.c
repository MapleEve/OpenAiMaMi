// module: codexmate_lib/core/relay/translator
// addr: 0x140b5a340
// name: sub_140B5A340
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140B5A340(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r13

  v3 = a2 - (a2 >> 1);
  v4 = 76923;
  if ( a2 < 0x12C7B )
    v4 = a2;
  if ( v4 <= v3 )
    v4 = a2 - (a2 >> 1);
  v5 = 48;
  if ( v4 >= 0x31 )
    v5 = v4;
  if ( v3 > 0x13B13B13B13B13BLL )
  {
    v6 = 0;
    goto LABEL_9;
  }
  if ( 104 * v5 )
  {
    v7 = a1;
    v8 = a3;
    v9 = a2;
    nullsub_1(a1);
    v6 = 8;
    v10 = sub_140001650(104 * v5, 8);
    if ( !v10 )
LABEL_9:
      sub_1416C2D4B(v6, 104 * v5);
    v11 = v10;
    a2 = v9;
    a3 = v8;
    LODWORD(a1) = v7;
  }
  else
  {
    v11 = 8;
    v5 = 0;
  }
  sub_140707CC0(a1, a2, v11, v5, a2 < 0x41, a3);
  sub_1402C9810(v11, 0);
  return sub_140001660(v11, 104 * v5, 8);
}