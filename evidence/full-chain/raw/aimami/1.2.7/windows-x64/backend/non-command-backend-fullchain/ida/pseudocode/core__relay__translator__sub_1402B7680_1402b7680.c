// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402b7680 | name sub_1402B7680
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402B7680(_QWORD *a1, const __m128i *a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  __int64 result; // rax

  v6 = a1[2];
  if ( a3 > *a1 - v6 )
  {
    sub_14190D590((_DWORD)a1, v6, a3, 1, 1);
    v6 = a1[2];
  }
  else if ( !a3 )
  {
    goto LABEL_4;
  }
  sub_1418F44E0((__m128i *)(v6 + a1[1]), a2, a3);
  a1[2] = a3 + v6;
  if ( a3 >= 0x20 )
  {
    result = sub_1416B3400(a2, a3);
    goto LABEL_6;
  }
LABEL_4:
  result = sub_1416B3A20(a2, a3);
LABEL_6:
  a1[9] += result;
  return result;
}
