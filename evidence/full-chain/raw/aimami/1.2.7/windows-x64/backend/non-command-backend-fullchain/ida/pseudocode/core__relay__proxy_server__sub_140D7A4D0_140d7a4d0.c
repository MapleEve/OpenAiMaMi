// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d7a4d0 | name sub_140D7A4D0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_140D7A4D0(__m128i *a1, const __m128i *a2, __int64 a3)
{
  volatile signed __int64 *v4; // rax

  v4 = (volatile signed __int64 *)a2[11].m128i_i64[0];
  if ( v4 && !_InterlockedDecrement64(v4) )
    sub_1409E5F10((const __m128i *)a2[11].m128i_i64);
  a2[11].m128i_i64[0] = a3;
  sub_1418F44E0(a1, a2, 0xB8u);
  return a1;
}
