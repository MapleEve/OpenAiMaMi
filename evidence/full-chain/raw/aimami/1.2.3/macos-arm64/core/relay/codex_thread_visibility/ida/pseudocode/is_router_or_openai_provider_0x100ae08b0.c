// __ZN13codexmate_lib4core5relay23codex_thread_visibility28is_router_or_openai_provider @ 0x100ae08b0 | 基线 same-set
char __fastcall codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hc08336a603e89a33(
        __int64 a1,
        unsigned __int64 a2)
{
  __m128i v3; // xmm0

  switch ( a2 ) /*0x100ae08b8*/
  {
    case 0x13uLL: /*0x100ae08b8*/
      v3 = _mm_or_si128( /*0x100ae09bb*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBE90),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 3)), (__m128i)xmmword_1015FBE80));
      if ( _mm_testz_si128(v3, v3) ) /*0x100ae09bf*/
        return 1; /*0x100ae09c4*/
      break;
    case 0xCuLL: /*0x100ae08b8*/
      return (*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(unsigned int *)(a1 + 8) ^ 0x79616C65LL) == 0; /*0x100ae09a1*/
    case 6uLL: /*0x100ae08b8*/
      if ( *(_DWORD *)a1 ^ 0x616D6961 | *(unsigned __int16 *)(a1 + 4) ^ 0x3169 ) /*0x100ae08e3*/
      {
        if ( (*(_BYTE *)a1 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)a1 - 65) < 0x1Au))) == 111 /*0x100ae0967*/
          && (*(_BYTE *)(a1 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 1) - 65) < 0x1Au))) == 112
          && (*(_BYTE *)(a1 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 2) - 65) < 0x1Au))) == 101
          && (*(_BYTE *)(a1 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 3) - 65) < 0x1Au))) == 110
          && (*(_BYTE *)(a1 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 4) - 65) < 0x1Au))) == 97 )
        {
          return (*(_BYTE *)(a1 + 5) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 5) - 65) < 0x1Au))) == 105; /*0x100ae0982*/
        }
        return 0; /*0x100ae0967*/
      }
      return 1; /*0x100ae09c9*/
    default:
      if ( a2 < 0xD ) /*0x100ae09ce*/
        return 0; /*0x100ae09d3*/
      break;
  }
  return (*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(_QWORD *)(a1 + 5) ^ 0x5F79616C65725F69LL) == 0; /*0x100ae0981*/
}