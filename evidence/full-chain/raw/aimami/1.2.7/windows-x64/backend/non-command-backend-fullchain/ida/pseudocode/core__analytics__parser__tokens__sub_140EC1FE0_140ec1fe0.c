// win 1.2.7 | module src/core/analytics/parser/tokens.rs | ea 0x140ec1fe0 | name sub_140EC1FE0
// win 1.2.7 | module src/core/analytics/parser/tokens.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EC1FE0(_QWORD *a1, const __m128i *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = a1[2];
  if ( v3 == *a1 )
    sub_141910220(a1);
  result = sub_1418F44E0((__m128i *)(a1[1] + 144 * v3), a2, 0x90u);
  a1[2] = v3 + 1;
  return result;
}
