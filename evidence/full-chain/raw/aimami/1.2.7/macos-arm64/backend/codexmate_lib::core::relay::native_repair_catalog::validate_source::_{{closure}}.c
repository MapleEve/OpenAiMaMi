// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_repair_catalog::validate_source::_$u7b$$u7b$closure$u7d$$u7d$::h87aae25452fde5b4; addr: 0x10031f7f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 __fastcall codexmate_lib::core::relay::native_repair_catalog::validate_source::_$u7b$$u7b$closure$u7d$$u7d$::h87aae25452fde5b4(
        __int16 a1,
        __int64 *a2)
{
  size_t v3; // rcx
  char *v4; // rbx
  size_t v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // r12d
  const __m128i *v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rsi

  v3 = *((unsigned int *)a2 + 11); /*0x10031f7fe*/
  v4 = (char *)a2[1]; /*0x10031f801*/
  if ( !*((_DWORD *)a2 + 11) ) /*0x10031f7fe*/
    goto LABEL_17; /*0x10031f7fe*/
  v5 = a2[2]; /*0x10031f811*/
  if ( v5 <= v3 ) /*0x10031f818*/
  {
    if ( v5 != v3 ) /*0x10031f833*/
LABEL_4:
      core::str::slice_error_fail::h480e51fbd8b15eba(v4, v5, 0, v3, &off_101AA6460); /*0x10031f820*/
  }
  else if ( v4[v3] <= -65 ) /*0x10031f81e*/
  {
    goto LABEL_4; /*0x10031f81e*/
  }
  if ( (_DWORD)v3 != 4 /*0x10031f86a*/
    || memcmp(v4, "httpJsonMenuTrayRgbaUtf8", v3)
    || (v6 = url::Url::host_str::h951633b861c322f2(a2), v6 == 0 || v7 != 9) )
  {
LABEL_17:
    v8 = 0; /*0x10031f8e7*/
    goto LABEL_18; /*0x10031f8e7*/
  }
  v8 = 0; /*0x10031f889*/
  if ( !(*(_QWORD *)v6 ^ 0x2E302E302E373231LL | *(unsigned __int8 *)(v6 + 8) ^ 0x31LL) /*0x10031f89d*/
    && *((_BYTE *)a2 + 40) == 1
    && *((_WORD *)a2 + 21) == a1 )
  {
    v9 = (const __m128i *)url::Url::path::hdacd300d547f5011(a2); /*0x10031f8a2*/
    if ( v10 == 16 ) /*0x10031f8ab*/
    {
      v11 = _mm_xor_si128(_mm_loadu_si128(v9), (__m128i)xmmword_1016EDC80); /*0x10031f8b1*/
      if ( _mm_testz_si128(v11, v11) ) /*0x10031f8b9*/
      {
        if ( !url::Url::query::h1af7b45471000a3f(a2) && !url::Url::fragment::h2d6f863d83ace37d(a2) ) /*0x10031f8d0*/
        {
          url::Url::username::hd711546128392e77(a2); /*0x10031f8dd*/
          if ( !v12 ) /*0x10031f8e5*/
          {
            LOBYTE(v8) = url::Url::password::hd737168add2f42dd(a2) == 0; /*0x10031f916*/
            v13 = *a2; /*0x10031f91a*/
            if ( !*a2 ) /*0x10031f91a*/
              return v8; /*0x10031f920*/
            goto LABEL_19; /*0x10031f920*/
          }
        }
      }
    }
    goto LABEL_17; /*0x10031f8e5*/
  }
LABEL_18:
  v13 = *a2; /*0x10031f8ea*/
  if ( *a2 ) /*0x10031f8ea*/
LABEL_19:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v13, 1); /*0x10031f8f2*/
  return v8; /*0x10031f902*/
}
