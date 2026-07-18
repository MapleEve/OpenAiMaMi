// mac 1.2.2 NEW upload_debug_report 0x10139fc80 d=2
unsigned __int64 __fastcall core::str::count::char_count_general_case::h35f326d7c82e4f55(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __m128i si128; // xmm2
  __m128i v7; // xmm3
  __m128i v8; // xmm1
  __m128i v9; // xmm1

  if ( !a2 ) /*0x10139fc83*/
    return 0; /*0x10139fc95*/
  if ( a2 >= 4 ) /*0x10139fc8d*/
  {
    v2 = a2 & 0x7FFFFFFFFFFFFFFCLL; /*0x10139fca2*/
    v4 = 0; /*0x10139fca5*/
    v5 = 0; /*0x10139fca9*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_101650E00); /*0x10139fcab*/
    v7 = _mm_load_si128((const __m128i *)&xmmword_1015E0500); /*0x10139fcb3*/
    v8 = 0; /*0x10139fcbb*/
    do /*0x10139fcfa*/
    {
      v4 = _mm_add_epi64( /*0x10139fcde*/
             v4,
             _mm_and_si128(
               _mm_cvtepu8_epi64(_mm_cmpgt_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + v5)), si128)),
               v7));
      v8 = _mm_add_epi64( /*0x10139fcef*/
             v8,
             _mm_and_si128(
               _mm_cvtepu8_epi64(_mm_cmpgt_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + v5 + 2)), si128)),
               v7));
      v5 += 4; /*0x10139fcf3*/
    }
    while ( v2 != v5 ); /*0x10139fcfa*/
    v9 = _mm_add_epi64(v8, v4); /*0x10139fcfc*/
    result = _mm_add_epi64(_mm_shuffle_epi32(v9, 238), v9).u64[0]; /*0x10139fd09*/
    goto LABEL_9; /*0x10139fd0e*/
  }
  v2 = 0; /*0x10139fc8f*/
  result = 0; /*0x10139fc91*/
  do /*0x10139fd22*/
  {
    result += *(_BYTE *)(a1 + v2++) >= 0xC0; /*0x10139fd19*/
LABEL_9:
    ; /*0x10139fd1f*/
  }
  while ( a2 != v2 ); /*0x10139fd22*/
  return result; /*0x10139fc97*/
}