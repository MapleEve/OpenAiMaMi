// module: codexmate_lib/core/repository
// addr: 0x141031800
// name: sub_141031800
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141031800(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  __m128i si128; // xmm6
  __m128i v5; // xmm7
  __m128i v6; // xmm8
  __int64 v7; // rdx
  void (__fastcall *v8)(__m128i *, _QWORD *); // r14
  __m128i v10; // [rsp+20h] [rbp-68h] BYREF

  v2 = *(_QWORD **)(*(_QWORD *)a1 + 128LL);
  if ( v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
    si128 = _mm_load_si128((const __m128i *)&xmmword_141838320);
    v5 = _mm_load_si128((const __m128i *)&xmmword_1417F8200);
    v6 = _mm_load_si128((const __m128i *)&xmmword_1417F8210);
    while ( 1 )
    {
      v8 = *(void (__fastcall **)(__m128i *, _QWORD *))(v3 + 56);
      v8(&v10, v2);
      LOBYTE(v1) = 1;
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v10), si128)) == 0xFFFF )
        break;
      v8(&v10, v2);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v10), v5)) == 0xFFFF )
      {
        if ( (unsigned __int8)sub_1411F01A0(v2) )
          break;
      }
      v8(&v10, v2);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v10), v6)) == 0xFFFF
        && (unsigned __int8)sub_141031BC0(*v2) == 22 )
      {
        break;
      }
      v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v3 + 48))(v2);
      v3 = v7;
      if ( !v2 )
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return v1;
}