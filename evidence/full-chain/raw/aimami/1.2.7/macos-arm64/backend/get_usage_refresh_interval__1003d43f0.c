// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: _$LT$$RF$mut$u20$A$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element::hb1c4d7b6d66a86de; addr: 0x1003d43b0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:29Z
__int64 __fastcall _$LT$$RF$mut$u20$A$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element::hb1c4d7b6d66a86de(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  double v4; // xmm0_8
  __m128d v6; // xmm1
  char v7; // [rsp-11h] [rbp-11h] BYREF

  v2 = *a2; /*0x1003d43b0*/
  if ( *a2 == a2[1] ) /*0x1003d43b7*/
  {
    *(_QWORD *)a1 = 0; /*0x1003d43e9*/
    return 0; /*0x1003d43e7*/
  }
  else
  {
    *a2 = v2 + 32; /*0x1003d43bd*/
    if ( *(_BYTE *)v2 == 2 ) /*0x1003d43c3*/
    {
      v3 = *(_QWORD *)(v2 + 8); /*0x1003d43c5*/
      if ( v3 ) /*0x1003d43cc*/
      {
        if ( (_DWORD)v3 == 1 ) /*0x1003d43d1*/
          v4 = (double)(int)*(_QWORD *)(v2 + 16); /*0x1003d43d3*/
        else
          v4 = *(double *)(v2 + 16); /*0x1003d441b*/
        *(double *)(a1 + 8) = v4; /*0x1003d43d9*/
        *(_QWORD *)a1 = 1; /*0x1003d43e3*/
        return 1; /*0x1003d43de*/
      }
      else
      {
        v6 = _mm_sub_pd( /*0x1003d43f9*/
               (__m128d)_mm_unpacklo_ps((__m128)*(unsigned __int64 *)(v2 + 16), (__m128)xmmword_1016EDD60),
               (__m128d)xmmword_1016EDD70);
        *(double *)(a1 + 8) = _mm_unpackhi_pd(v6, v6).f64[0] + v6.f64[0]; /*0x1003d440d*/
        *(_QWORD *)a1 = 1; /*0x1003d4417*/
        return 1; /*0x1003d4412*/
      }
    }
    else
    {
      v7 = HIBYTE(v2); /*0x1003d4433*/
      *(_QWORD *)(a1 + 8) = serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::invalid_type::h568960455138bcde( /*0x1003d444d*/
                              v2,
                              &v7,
                              &anon_7534e791983e23e0bbee4dd7c8383343_84);
      *(_QWORD *)a1 = 2; /*0x1003d445c*/
      return 2; /*0x1003d4451*/
    }
  }
}