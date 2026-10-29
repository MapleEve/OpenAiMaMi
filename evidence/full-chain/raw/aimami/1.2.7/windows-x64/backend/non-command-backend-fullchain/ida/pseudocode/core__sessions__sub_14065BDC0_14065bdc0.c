// win 1.2.7 | module src/core/sessions.rs | ea 0x14065bdc0 | name sub_14065BDC0
// win 1.2.7 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14065BDC0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  int v7; // r15d
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdi

  v3 = a2 - (a2 >> 1);
  v4 = 14925;
  if ( a2 < 0x3A4D )
    v4 = a2;
  if ( v4 <= v3 )
    v4 = a2 - (a2 >> 1);
  v5 = 48;
  if ( v4 >= 0x31 )
    v5 = v4;
  if ( v3 > 0x3D226357E16ECELL )
  {
    v6 = 0;
    goto LABEL_9;
  }
  if ( 536 * v5 )
  {
    v7 = a1;
    v8 = a3;
    v9 = a2;
    nullsub_1(a1);
    v6 = 8;
    v10 = sub_140001650(536 * v5, 8);
    if ( !v10 )
LABEL_9:
      sub_141938D2B(v6, 536 * v5);
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
  sub_140EA92D0(a1, a2, v11, v5, a2 < 0x41, a3);
  return sub_140001660(v11, 536 * v5, 8);
}
