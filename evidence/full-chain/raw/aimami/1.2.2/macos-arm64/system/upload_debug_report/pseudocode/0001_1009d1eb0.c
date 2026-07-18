// mac 1.2.2 NEW upload_debug_report 0x1009d1eb0 d=1
_QWORD *__fastcall codexmate_lib::core::debug_report_upload::validate_input::h80af460dc3b12bc8(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  const __m128i *v6; // rax
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rax
  __m128i v10; // xmm1

  v4 = a2[3]; /*0x1009d1ebd*/
  v5 = a2[4]; /*0x1009d1ec1*/
  if ( v5 >= 0x20 ) /*0x1009d1ec9*/
  {
    if ( (unsigned __int64)core::str::count::do_count_chars::h4875767a8f682eeb(v4, v5) <= 0x7D0 ) /*0x1009d1f26*/
    {
LABEL_3:
      v6 = (const __m128i *)a2[6]; /*0x1009d1ed8*/
      v7 = a2[7]; /*0x1009d1edc*/
      if ( v7 == 17 ) /*0x1009d1ee4*/
      {
        v10 = _mm_or_si128( /*0x1009d2066*/
                _mm_xor_si128(_mm_cvtsi32_si128(v6[1].u8[0]), (__m128i)xmmword_10151EB00),
                _mm_xor_si128(_mm_loadu_si128(v6), (__m128i)xmmword_10159FE70));
        if ( !_mm_testz_si128(v10, v10) ) /*0x1009d206f*/
          goto LABEL_12; /*0x1009d206f*/
      }
      else
      {
        if ( v7 != 8 ) /*0x1009d1eee*/
        {
          if ( v7 == 6 && !(v6->i32[0] ^ 0x756E616D | v6->u16[2] ^ 0x6C61) ) /*0x1009d1f0e*/
            goto LABEL_15; /*0x1009d1f10*/
          goto LABEL_12; /*0x1009d1f10*/
        }
        if ( v6->i64[0] != 0x6B63616264656566LL ) /*0x1009d1fc5*/
        {
LABEL_12:
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009d1fcb*/
          v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x26u, 1u); /*0x1009d1fda*/
          if ( !v9 ) /*0x1009d1fe2*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009d209d*/
          qmemcpy(v9, "unsupported diagnostic report category", 38); /*0x1009d202a*/
          *a1 = 9; /*0x1009d202d*/
          a1[1] = 38; /*0x1009d2034*/
          a1[2] = v9; /*0x1009d203c*/
          a1[3] = 38; /*0x1009d2040*/
          return a1; /*0x1009d2048*/
        }
      }
LABEL_15:
      *a1 = 10; /*0x1009d2075*/
      return a1; /*0x1009d2075*/
    }
  }
  else if ( (unsigned __int64)core::str::count::char_count_general_case::h35f326d7c82e4f55(v4, v5) <= 0x7D0 ) /*0x1009d1ed6*/
  {
    goto LABEL_3; /*0x1009d1ed6*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009d1f28*/
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2Fu, 1u); /*0x1009d1f37*/
  if ( !v8 ) /*0x1009d1f3f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009d208e*/
  qmemcpy(v8, "diagnostic note must not exceed 2000 characters", 47); /*0x1009d1f95*/
  *a1 = 9; /*0x1009d1f98*/
  a1[1] = 47; /*0x1009d1f9f*/
  a1[2] = v8; /*0x1009d1fa7*/
  a1[3] = 47; /*0x1009d1fab*/
  return a1; /*0x1009d207f*/
}