// __ZN13codexmate_lib4core5relay10translator31is_openai_private_response_item @ 0x10086fea0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::is_openai_private_response_item::h3327d9b54f261496(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  __m128i v10; // xmm0
  bool v12; // zf
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm1

  v1 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086febd*/
         &anon_10420c9971c21f44d230d15b39fb3fec_75,
         4,
         a1);
  if ( v1 && *(_BYTE *)v1 == 3 ) /*0x10086fece*/
  {
    v2 = *(_QWORD *)(v1 + 24); /*0x10086fed4*/
    v3 = 0; /*0x10086fed8*/
    v4 = *(_QWORD *)(v1 + 16); /*0x10086fee8*/
    switch ( v2 ) /*0x10086fefa*/
    {
      case 9LL: /*0x10086fefa*/
        if ( *(_QWORD *)v4 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v4 + 8) ^ 0x67LL ) /*0x10086ff11*/
          return 0; /*0x10086ff14*/
        v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086ff29*/
               &anon_10420c9971c21f44d230d15b39fb3fec_109,
               7,
               a1);
        LOBYTE(v3) = 1; /*0x10086ff2e*/
        if ( v5 ) /*0x10086ff33*/
        {
          if ( *(_BYTE *)v5 == 4 ) /*0x10086ff38*/
          {
            v6 = *(_QWORD *)(v5 + 24); /*0x10086ff3a*/
            if ( v6 ) /*0x10086ff41*/
            {
              v7 = *(_QWORD *)(v5 + 16); /*0x10086ff43*/
              v8 = 32 * v6; /*0x10086ff47*/
              do /*0x10086ff5c*/
              {
                v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086ff69*/
                       &anon_10420c9971c21f44d230d15b39fb3fec_110,
                       4,
                       v7);
                if ( v9 && *(_BYTE *)v9 == 3 && *(_QWORD *)(v9 + 24) ) /*0x10086ff78*/
                  return 0; /*0x10086ff7d*/
                v7 += 32; /*0x10086ff54*/
                v8 -= 32; /*0x10086ff58*/
              }
              while ( v8 ); /*0x10086ff5c*/
            }
          }
        }
        return v3; /*0x10086ff5c*/
      case 10LL: /*0x10086fefa*/
        v12 = (*(_QWORD *)v4 ^ 0x69746361706D6F63LL | *(unsigned __int16 *)(v4 + 8) ^ 0x6E6FLL) == 0; /*0x10086ffc9*/
        goto LABEL_25; /*0x10086ffcc*/
      case 15LL: /*0x10086fefa*/
        if ( *(_QWORD *)v4 ^ 0x726165735F626577LL | *(_QWORD *)(v4 + 7) ^ 0x6C6C61635F686372LL ) /*0x10087000b*/
          return 0; /*0x10087000e*/
        goto LABEL_20; /*0x10087000e*/
      case 16LL: /*0x10086fefa*/
        v14 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_101674880); /*0x100870018*/
        LOBYTE(v3) = 1; /*0x100870020*/
        if ( _mm_testz_si128(v14, v14) ) /*0x100870027*/
          return v3; /*0x100870027*/
        v15 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_101674890); /*0x100870031*/
        if ( _mm_testz_si128(v15, v15) ) /*0x10087003e*/
          return v3; /*0x10087003e*/
        v13 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), *(__m128i *)"custom_tool_calltool_search_output"); /*0x100870048*/
        goto LABEL_24; /*0x100870048*/
      case 18LL: /*0x10086fefa*/
        v16 = _mm_or_si128( /*0x100870079*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v4 + 16)), *(__m128i *)"ut"),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), *(__m128i *)"tool_search_output"));
        if ( !_mm_testz_si128(v16, v16) ) /*0x100870082*/
          return 0; /*0x100870082*/
        goto LABEL_20; /*0x100870082*/
      case 21LL: /*0x10086fefa*/
        v10 = _mm_or_si128( /*0x10086ff9a*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_1015E35C0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v4 + 5)), (__m128i)xmmword_1016748A0));
        if ( !_mm_testz_si128(v10, v10) ) /*0x10086ffa3*/
          return 0; /*0x10086ffa3*/
LABEL_20:
        LOBYTE(v3) = 1; /*0x100870010*/
        return v3; /*0x100870012*/
      case 23LL: /*0x10086fefa*/
        v13 = _mm_or_si128( /*0x10086ffea*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), *(__m128i *)"custom_tool_calltool_search_output"),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)(v4 + 7)),
                  *(__m128i *)"tool_call_outputcustom_tool_calltool_search_output"));
LABEL_24:
        v12 = _mm_testz_si128(v13, v13); /*0x100870050*/
LABEL_25:
        LOBYTE(v3) = v12; /*0x100870055*/
        break; /*0x100870058*/
      default:
        return v3;
    }
  }
  else
  {
    return 0; /*0x10086ffa5*/
  }
  return v3; /*0x10086ffa9*/
}