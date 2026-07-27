// __ZN13codexmate_lib4core19debug_report_upload14validate_input @ 0x100323270 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::debug_report_upload::validate_input::h165d03ca0e6c1202(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  const __m128i *v6; // rax
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rax
  __m128i v10; // xmm1

  v4 = a2[3]; /*0x10032327d*/
  v5 = a2[4]; /*0x100323281*/
  if ( v5 >= 0x20 ) /*0x100323289*/
  {
    if ( (unsigned __int64)core::str::count::do_count_chars::h4875767a8f682eeb(v4, v5) <= 0x7D0 ) /*0x1003232e6*/
    {
LABEL_3:
      v6 = (const __m128i *)a2[6]; /*0x100323298*/
      v7 = a2[7]; /*0x10032329c*/
      if ( v7 == 17 ) /*0x1003232a4*/
      {
        v10 = _mm_or_si128( /*0x100323426*/
                _mm_xor_si128(_mm_cvtsi32_si128(v6[1].u8[0]), (__m128i)xmmword_1015E35B0),
                _mm_xor_si128(_mm_loadu_si128(v6), (__m128i)xmmword_1015E35A0));
        if ( !_mm_testz_si128(v10, v10) ) /*0x10032342f*/
          goto LABEL_12; /*0x10032342f*/
      }
      else
      {
        if ( v7 != 8 ) /*0x1003232ae*/
        {
          if ( v7 == 6 && !(v6->i32[0] ^ 0x756E616D | v6->u16[2] ^ 0x6C61) ) /*0x1003232ce*/
            goto LABEL_15; /*0x1003232d0*/
          goto LABEL_12; /*0x1003232d0*/
        }
        if ( v6->i64[0] != 0x6B63616264656566LL ) /*0x100323385*/
        {
LABEL_12:
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v5); /*0x10032338b*/
          v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1); /*0x10032339a*/
          if ( !v9 ) /*0x1003233a2*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 38); /*0x10032345d*/
          qmemcpy(v9, "unsupported diagnostic report category", 38); /*0x1003233ea*/
          *a1 = 10; /*0x1003233ed*/
          a1[1] = 38; /*0x1003233f4*/
          a1[2] = v9; /*0x1003233fc*/
          a1[3] = 38; /*0x100323400*/
          return a1; /*0x100323408*/
        }
      }
LABEL_15:
      *a1 = 11; /*0x100323435*/
      return a1; /*0x100323435*/
    }
  }
  else if ( (unsigned __int64)core::str::count::char_count_general_case::h35f326d7c82e4f55(v4, v5) <= 0x7D0 ) /*0x100323296*/
  {
    goto LABEL_3; /*0x100323296*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v5); /*0x1003232e8*/
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x1003232f7*/
  if ( !v8 ) /*0x1003232ff*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47); /*0x10032344e*/
  qmemcpy(v8, "diagnostic note must not exceed 2000 characters", 47); /*0x100323355*/
  *a1 = 10; /*0x100323358*/
  a1[1] = 47; /*0x10032335f*/
  a1[2] = v8; /*0x100323367*/
  a1[3] = 47; /*0x10032336b*/
  return a1; /*0x10032343f*/
}