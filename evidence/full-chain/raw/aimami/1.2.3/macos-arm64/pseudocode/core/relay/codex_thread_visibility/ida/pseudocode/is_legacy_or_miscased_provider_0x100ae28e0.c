// __ZN13codexmate_lib4core5relay23codex_thread_visibility30is_legacy_or_miscased_provider @ 0x100ae28e0 | 基线 same-set
unsigned __int8 __fastcall codexmate_lib::core::relay::codex_thread_visibility::is_legacy_or_miscased_provider::h5f1be5e6f3f489e9(
        __int64 a1,
        __int64 a2)
{
  __m128i v3; // xmm0

  if ( a2 == 19 ) /*0x100ae28e4*/
  {
    v3 = _mm_or_si128( /*0x100ae29d1*/
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBE90),
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 3)), (__m128i)xmmword_1015FBE80));
    return _mm_testz_si128(v3, v3); /*0x100ae29da*/
  }
  else
  {
    if ( a2 != 6 ) /*0x100ae28ee*/
      return 0; /*0x100ae29b3*/
    if ( *(_DWORD *)a1 ^ 0x616D6961 | *(unsigned __int16 *)(a1 + 4) ^ 0x3169 ) /*0x100ae2905*/
    {
      if ( (*(_BYTE *)a1 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)a1 - 65) < 0x1Au))) == 111 /*0x100ae2998*/
        && (*(_BYTE *)(a1 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 1) - 65) < 0x1Au))) == 112
        && (*(_BYTE *)(a1 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 2) - 65) < 0x1Au))) == 101
        && (*(_BYTE *)(a1 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 3) - 65) < 0x1Au))) == 110
        && (*(_BYTE *)(a1 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 4) - 65) < 0x1Au))) == 97
        && (*(_BYTE *)(a1 + 5) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 5) - 65) < 0x1Au))) == 105 )
      {
        return (*(_DWORD *)a1 ^ 0x6E65706F | *(unsigned __int16 *)(a1 + 4) ^ 0x6961) != 0; /*0x100ae29b0*/
      }
      return 0; /*0x100ae2998*/
    }
    return 1; /*0x100ae29df*/
  }
}