// __ZN13codexmate_lib4core5relay16codex_diagnostic25fix_requires_quiet_window @ 0x1004f4130 | 基线 same-set
char __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_requires_quiet_window::h450b49c01f430cd0(
        __int64 a1,
        __int64 a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  char result; // al
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0

  switch ( a2 ) /*0x1004f414c*/
  {
    case 12LL: /*0x1004f414c*/
      if ( *(_QWORD *)a1 ^ 0x735F6769666E6F63LL | *(unsigned int *)(a1 + 8) ^ 0x656C6174LL ) /*0x1004f4165*/
        return 2; /*0x1004f4168*/
      return 1; /*0x1004f4168*/
    case 14LL: /*0x1004f414c*/
      if ( !(*(_QWORD *)a1 ^ 0x6C61756469736572LL | *(_QWORD *)(a1 + 6) ^ 0x65686361635F6C61LL) ) /*0x1004f4393*/
        return 0; /*0x1004f4393*/
      if ( !(*(_QWORD *)a1 ^ 0x746E695F68747561LL | *(_QWORD *)(a1 + 6) ^ 0x797469726765746ELL) ) /*0x1004f43b4*/
        return 1; /*0x1004f43b7*/
      return 2; /*0x1004f43b7*/
    case 17LL: /*0x1004f414c*/
      v12 = _mm_or_si128( /*0x1004f4336*/
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(a1 + 16)), (__m128i)xmmword_1015FBD00),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBCF0));
      if ( _mm_testz_si128(v12, v12) ) /*0x1004f433f*/
        return 0; /*0x1004f450a*/
      v13 = _mm_or_si128( /*0x1004f4361*/
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(a1 + 16)), (__m128i)xmmword_1015FBD20),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBD10));
      if ( _mm_testz_si128(v13, v13) ) /*0x1004f4365*/
        return 1; /*0x1004f4463*/
      else
        return 2; /*0x1004f4460*/
    case 18LL: /*0x1004f414c*/
      v10 = _mm_or_si128( /*0x1004f42d9*/
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 16)), (__m128i)xmmword_1015FBCA0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBC90));
      result = 1; /*0x1004f42dd*/
      if ( _mm_testz_si128(v10, v10) ) /*0x1004f42e4*/
        return result; /*0x1004f42e4*/
      v11 = _mm_or_si128( /*0x1004f4306*/
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 16)), (__m128i)xmmword_1015FBCC0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBCB0));
      if ( _mm_testz_si128(v11, v11) ) /*0x1004f430a*/
        return result; /*0x1004f430f*/
      return 2; /*0x1004f430f*/
    case 19LL: /*0x1004f414c*/
      v4 = _mm_or_si128( /*0x1004f41e6*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBB80),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 3)), (__m128i)xmmword_1015FBB70));
      if ( _mm_testz_si128(v4, v4) ) /*0x1004f41ef*/
        return 1; /*0x1004f41ef*/
      return 2 - (memcmp((const void *)a1, "state_db_relocation", 0x13u) == 0); /*0x1004f420f*/
    case 20LL: /*0x1004f414c*/
      v7 = _mm_or_si128( /*0x1004f4259*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015DCAE0),
             _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 16)), (__m128i)xmmword_1015DCAD0));
      result = 1; /*0x1004f425d*/
      if ( _mm_testz_si128(v7, v7) ) /*0x1004f4264*/
        return result; /*0x1004f4264*/
      v8 = _mm_or_si128( /*0x1004f427f*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBCE0),
             _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 16)), (__m128i)xmmword_1015FBCD0));
      if ( _mm_testz_si128(v8, v8) ) /*0x1004f4283*/
        return result; /*0x1004f4288*/
      return 2; /*0x1004f4288*/
    case 21LL: /*0x1004f414c*/
      v14 = _mm_or_si128( /*0x1004f43db*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBBC0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 5)), (__m128i)xmmword_1015FBBB0));
      if ( !_mm_testz_si128(v14, v14) ) /*0x1004f43e4*/
        return 2; /*0x1004f43e4*/
      return 1; /*0x1004f43e4*/
    case 22LL: /*0x1004f414c*/
      v15 = _mm_or_si128( /*0x1004f4402*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBBE0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 6)), (__m128i)xmmword_1015FBBD0));
      result = 1; /*0x1004f4406*/
      if ( _mm_testz_si128(v15, v15) ) /*0x1004f440d*/
        return result; /*0x1004f440d*/
      v16 = _mm_or_si128( /*0x1004f442c*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBC00),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 6)), (__m128i)xmmword_1015FBBF0));
      if ( _mm_testz_si128(v16, v16) ) /*0x1004f4430*/
        return result; /*0x1004f4435*/
      return 2; /*0x1004f4435*/
    case 23LL: /*0x1004f414c*/
      v18 = _mm_or_si128( /*0x1004f447f*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBC20),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 7)), (__m128i)xmmword_1015FBC10));
      result = 1; /*0x1004f4483*/
      if ( !_mm_testz_si128(v18, v18) ) /*0x1004f448a*/
      {
        v19 = _mm_or_si128( /*0x1004f44a9*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBC40),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 7)), (__m128i)xmmword_1015FBC30));
        if ( !_mm_testz_si128(v19, v19) ) /*0x1004f44b2*/
        {
          v20 = _mm_or_si128( /*0x1004f44d1*/
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBC60),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 7)), (__m128i)xmmword_1015FBC50));
          if ( !_mm_testz_si128(v20, v20) ) /*0x1004f44da*/
          {
            v21 = _mm_or_si128( /*0x1004f44f9*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBC80),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 7)), (__m128i)xmmword_1015FBC70));
            return 2 - _mm_testz_si128(v21, v21); /*0x1004f4507*/
          }
        }
      }
      return result; /*0x1004f4509*/
    case 24LL: /*0x1004f414c*/
      v17 = _mm_or_si128( /*0x1004f4455*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBB00),
              _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(a1 + 16)), (__m128i)xmmword_1015FBAF0));
      if ( !_mm_testz_si128(v17, v17) ) /*0x1004f445e*/
        return 2; /*0x1004f445e*/
      return 1; /*0x1004f445e*/
    case 26LL: /*0x1004f414c*/
      v3 = _mm_or_si128( /*0x1004f41b9*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBBA0),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 10)), (__m128i)xmmword_1015FBB90));
      if ( _mm_testz_si128(v3, v3) ) /*0x1004f41bd*/
        return 1; /*0x1004f41c2*/
      return 2; /*0x1004f41c2*/
    case 27LL: /*0x1004f414c*/
      v9 = _mm_or_si128( /*0x1004f42a9*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBB60),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 11)), (__m128i)xmmword_1015FBB50));
      if ( _mm_testz_si128(v9, v9) ) /*0x1004f42ad*/
        return 1; /*0x1004f42b2*/
      return 2; /*0x1004f42b2*/
    case 28LL: /*0x1004f414c*/
      v6 = _mm_or_si128( /*0x1004f422c*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBB20),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 12)), (__m128i)xmmword_1015FBB10));
      if ( _mm_testz_si128(v6, v6) ) /*0x1004f4230*/
        return 1; /*0x1004f4235*/
      return 2; /*0x1004f4235*/
    case 32LL: /*0x1004f414c*/
      v2 = _mm_or_si128( /*0x1004f418c*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1015FBB40),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 16)), (__m128i)xmmword_1015FBB30));
      if ( _mm_testz_si128(v2, v2) ) /*0x1004f4190*/
        return 1; /*0x1004f4195*/
      return 2; /*0x1004f43e8*/
    default:
      return 2;
  }
}