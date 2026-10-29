// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_observation::AuthObservation::still_current::hd6c125a0cf742a4e; addr: 0x100986a80; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
_BYTE *__fastcall codexmate_lib::core::account_observation::AuthObservation::still_current::hd6c125a0cf742a4e(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128i a5)
{
  unsigned __int8 v5; // al
  __int64 v7; // [rsp+8h] [rbp-258h] BYREF
  _BYTE v8[96]; // [rsp+10h] [rbp-250h] BYREF
  _BYTE __src[136]; // [rsp+70h] [rbp-1F0h] BYREF
  _BYTE v10[96]; // [rsp+F8h] [rbp-168h] BYREF
  __int64 v11; // [rsp+158h] [rbp-108h] BYREF
  _BYTE v12[96]; // [rsp+160h] [rbp-100h] BYREF
  _QWORD __dst[20]; // [rsp+1C0h] [rbp-A0h] BYREF

  codexmate_lib::core::account_observation::AuthObservation::read::hee36ca1fcea17c52(&v7, a3, a4); /*0x100986aa3*/
  qmemcpy(v10, v8, sizeof(v10)); /*0x100986ac2*/
  if ( v7 == 3 ) /*0x100986ac9*/
  {
    qmemcpy(a1, v10, 0x60u); /*0x100986ada*/
  }
  else
  {
    memcpy(__dst, __src, 0x88u); /*0x100986af5*/
    qmemcpy(v12, v10, sizeof(v12)); /*0x100986b0d*/
    v11 = v7; /*0x100986b10*/
    if ( *(_BYTE *)(a2 + 200) == 1 ) /*0x100986b23*/
    {
      if ( LOBYTE(__dst[12]) ) /*0x100986b27*/
      {
        a5 = _mm_or_si128( /*0x100986b4d*/
               _mm_xor_si128(
                 _mm_loadu_si128((const __m128i *)((char *)&__dst[14] + 1)),
                 _mm_loadu_si128((const __m128i *)(a2 + 217))),
               _mm_xor_si128(
                 _mm_loadu_si128((const __m128i *)((char *)&__dst[12] + 1)),
                 _mm_loadu_si128((const __m128i *)(a2 + 201))));
        v5 = _mm_testz_si128(a5, a5); /*0x100986b56*/
      }
      else
      {
        v5 = 0; /*0x100986b5f*/
      }
    }
    else
    {
      v5 = LOBYTE(__dst[12]) ^ 1; /*0x100986b5b*/
    }
    a1[8] = v5; /*0x100986b61*/
    *(_QWORD *)a1 = 11; /*0x100986b64*/
    if ( !__OFSUB__(-__dst[9], 1) && __dst[9] ) /*0x100986b77*/
      *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x100986b82*/
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..auth..AuthSnapshot$GT$$GT$::hdf3848feccc703ef( /*0x100986b8e*/
      &v11,
      *(double *)a5.i64);
  }
  return a1; /*0x100986b96*/
}