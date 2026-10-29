// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140da3970 | name sub_140DA3970
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DA3970(_QWORD *a1, const __m128i *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = a1[2];
  if ( v3 == *a1 )
    sub_1419100D0(a1);
  result = sub_1418F44E0((__m128i *)(a1[1] + (v3 << 8)), a2, 0x100u);
  a1[2] = v3 + 1;
  return result;
}
