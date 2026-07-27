// __ZN13codexmate_lib4core5relay12health_check24is_stream_terminal_event @ 0x10089f2d0 | 基线 same-set
unsigned __int8 __fastcall codexmate_lib::core::relay::health_check::is_stream_terminal_event::h09de8abbbb4ab994(
        char a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __m128i v5; // xmm1
  __m128i v8; // xmm0

  v2 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10089f2e7*/
         &anon_10420c9971c21f44d230d15b39fb3fec_75,
         4,
         a2);
  v3 = 1; /*0x10089f2ec*/
  if ( v2 && *(_BYTE *)v2 == 3 ) /*0x10089f2f9*/
  {
    v3 = *(_QWORD *)(v2 + 16); /*0x10089f2fb*/
    v4 = *(_QWORD *)(v2 + 24); /*0x10089f2ff*/
    if ( !a1 ) /*0x10089f305*/
      return 0; /*0x10089f305*/
  }
  else
  {
    v4 = 0; /*0x10089f309*/
    if ( !a1 ) /*0x10089f30d*/
      return 0; /*0x10089f30d*/
  }
  if ( a1 != 1 ) /*0x10089f315*/
  {
    if ( v4 == 12 ) /*0x10089f358*/
      return (*(_QWORD *)v3 ^ 0x5F6567617373656DLL | *(unsigned int *)(v3 + 8) ^ 0x706F7473LL) == 0; /*0x10089f374*/
    return 0; /*0x10089f37e*/
  }
  if ( v4 == 15 ) /*0x10089f31b*/
    return (*(_QWORD *)v3 ^ 0x65736E6F70736572LL | *(_QWORD *)(v3 + 7) ^ 0x64656C6961662E65LL) == 0; /*0x10089f3be*/
  if ( v4 == 19 ) /*0x10089f325*/
  {
    v8 = _mm_or_si128( /*0x10089f398*/
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1016749B0),
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1016749A0));
    return _mm_testz_si128(v8, v8); /*0x10089f3a1*/
  }
  if ( v4 != 18 ) /*0x10089f32b*/
    return 0; /*0x10089f32b*/
  v5 = _mm_or_si128( /*0x10089f349*/
         _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v3 + 16)), (__m128i)xmmword_1015E38E0),
         _mm_xor_si128(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1016749C0));
  return _mm_testz_si128(v5, v5); /*0x10089f37c*/
}