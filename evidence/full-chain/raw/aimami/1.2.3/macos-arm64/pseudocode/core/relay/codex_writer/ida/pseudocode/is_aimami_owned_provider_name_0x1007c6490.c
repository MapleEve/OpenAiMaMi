// __ZN13codexmate_lib4core5relay12codex_writer29is_aimami_owned_provider_name @ 0x1007c6490 | 基线 same-set
unsigned __int8 __fastcall codexmate_lib::core::relay::codex_writer::is_aimami_owned_provider_name::h9d4dad6db8595928(
        __int64 a1,
        unsigned __int64 a2)
{
  __m128i v3; // xmm0

  if ( a2 == 12 ) /*0x1007c6494*/
    return (*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(unsigned int *)(a1 + 8) ^ 0x79616C65LL) == 0; /*0x1007c64b0*/
  if ( a2 > 0xC && !(*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(_QWORD *)(a1 + 5) ^ 0x5F79616C65725F69LL) ) /*0x1007c64d1*/
    return 1; /*0x1007c6527*/
  if ( a2 == 6 ) /*0x1007c64da*/
    return (*(_DWORD *)a1 ^ 0x616D6961 | *(unsigned __int16 *)(a1 + 4) ^ 0x3169) == 0; /*0x1007c6520*/
  if ( a2 != 19 ) /*0x1007c64e0*/
    return 0; /*0x1007c6524*/
  v3 = _mm_or_si128( /*0x1007c64ff*/
         _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBE90),
         _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 3)), (__m128i)xmmword_1015FBE80));
  return _mm_testz_si128(v3, v3); /*0x1007c64b3*/
}