// win 1.2.7 | module src/core/relay/quota.rs | ea 0x140dbac00 | name sub_140DBAC00
// win 1.2.7 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140DBAC00(_QWORD *a1, double a2, double a3)
{
  _WORD *v5; // rax
  double v6; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a3 <= 0.0 )
  {
    nullsub_1(a1);
    v5 = (_WORD *)sub_140001650(2, 1);
    if ( !v5 )
      sub_141938D2B(1, 2);
    *v5 = 9520;
    *a1 = 2;
    a1[1] = v5;
    a1[2] = 2;
    return a1;
  }
  else
  {
    v6 = fmin(100.0, fmax(0.0, a2 / a3 * 100.0));
    v7[0] = &v6;
    v7[1] = sub_1416BB8F0;
    sub_1416ABFD0(a1, &unk_141A4E102, v7);
    return a1;
  }
}
