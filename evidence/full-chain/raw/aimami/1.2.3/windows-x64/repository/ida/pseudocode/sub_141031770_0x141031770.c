// module: codexmate_lib/core/repository
// addr: 0x141031770
// name: sub_141031770
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_141031770(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __m128i si128; // xmm6
  __int64 v4; // rdx
  __m128i v6; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1417F81F0);
  while ( 1 )
  {
    (*(void (__fastcall **)(__m128i *, __int64))(v2 + 56))(&v6, v1);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v6), si128)) == 0xFFFF && *(_BYTE *)(v1 + 48) == 2 )
      break;
    v1 = (*(__int64 (__fastcall **)(__int64))(v2 + 48))(v1);
    v2 = v4;
    if ( !v1 )
      return 0;
  }
  return 1;
}