// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::reader::Fingerprint::can_append_to::hc0586f23b9552117; addr: 0x1009bff50; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
unsigned __int8 __fastcall codexmate_lib::core::analytics::reader::Fingerprint::can_append_to::hc0586f23b9552117(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  size_t v4; // rdx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  size_t v8; // rdx
  size_t v9; // rdx
  unsigned __int8 result; // al
  __m128i v11; // xmm0

  v4 = *(_QWORD *)(a1 + 32); /*0x1009bff53*/
  if ( v4 != *(_QWORD *)(a2 + 32) ) /*0x1009bff5b*/
    return 0; /*0x1009bffe8*/
  v5 = a3; /*0x1009bff75*/
  if ( memcmp(*(const void **)(a1 + 24), *(const void **)(a2 + 24), v4) ) /*0x1009bff80*/
    return 0; /*0x1009bff80*/
  v6 = *(_QWORD *)(a1 + 88); /*0x1009bff89*/
  v7 = *(_QWORD *)(a2 + 88); /*0x1009bff8d*/
  if ( v6 < v7 || v6 < v5 ) /*0x1009bff9a*/
    return 0; /*0x1009bff9d*/
  v8 = *(_QWORD *)(a1 + 56); /*0x1009bffa1*/
  if ( v8 != *(_QWORD *)(a2 + 56) ) /*0x1009bffa9*/
    return 0; /*0x1009bffa9*/
  if ( memcmp(*(const void **)(a1 + 48), *(const void **)(a2 + 48), v8) ) /*0x1009bffb3*/
    return 0; /*0x1009bffb3*/
  v9 = *(_QWORD *)(a1 + 80); /*0x1009bffbc*/
  if ( v9 != *(_QWORD *)(a2 + 80) || memcmp(*(const void **)(a1 + 72), *(const void **)(a2 + 72), v9) ) /*0x1009bffce*/
    return 0; /*0x1009bffd7*/
  result = 1; /*0x1009bffeb*/
  if ( v6 <= v7 ) /*0x1009bfff0*/
  {
    v11 = _mm_xor_si128(_mm_load_si128((const __m128i *)a1), *(__m128i *)a2); /*0x1009bfff7*/
    return _mm_testz_si128(v11, v11); /*0x1009c0000*/
  }
  return result; /*0x1009bffe7*/
}