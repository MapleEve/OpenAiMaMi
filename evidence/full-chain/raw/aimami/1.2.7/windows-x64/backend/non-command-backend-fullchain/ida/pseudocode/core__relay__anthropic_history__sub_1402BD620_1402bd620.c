// win 1.2.7 | module src/core/relay/anthropic_history.rs | ea 0x1402bd620 | name sub_1402BD620
// win 1.2.7 | module src/core/relay/anthropic_history.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_1402BD620(_QWORD *a1, unsigned __int64 a2, __int128 *a3)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // r14
  __int128 v8; // xmm0

  v4 = a1[2];
  if ( v4 < a2 )
    sub_141938D74(a2, v4, &off_1419E9950);
  if ( v4 == *a1 )
    sub_14190F570(a1);
  v6 = a1[1] + 32 * a2;
  if ( v4 > a2 )
    sub_1418F44E0((__m128i *)(v6 + 32), (const __m128i *)(a1[1] + 32 * a2), 32 * (v4 - a2));
  v8 = *a3;
  *(_OWORD *)(v6 + 16) = a3[1];
  *(_OWORD *)v6 = v8;
  a1[2] = v4 + 1;
  return a3;
}
