// __ZN13codexmate_lib4core5relay10translator20strip_billing_header @ 0x10084d120 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::translator::strip_billing_header::h742dc2e7fc7a94c2(
        __int64 *a1,
        const void *a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i v13; // xmm0
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  void *result; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rsi
  void *v22; // rdi
  const void *v23; // rsi
  size_t v24; // rdx
  size_t v25; // rcx
  __int64 v26; // r15
  size_t v27; // r12
  __int64 v28; // rax
  char v29[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v30; // [rsp+8h] [rbp-68h]
  _QWORD v31[5]; // [rsp+18h] [rbp-58h] BYREF
  char v32; // [rsp+40h] [rbp-30h]

  v3 = a3; /*0x10084d131*/
  v8 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(a2, a3); /*0x10084d140*/
  if ( v9 < 0x1B /*0x10084d16d*/
    || (v13 = _mm_or_si128(
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v8),
                  *(__m128i *)"x-anthropic-billtool_call_outputcustom_tool_calltool_search_output"),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)(v8 + 11)),
                  *(__m128i *)"-billing-header:x-anthropic-billtool_call_outputcustom_tool_calltool_search_output")),
        !_mm_testz_si128(v13, v13)) )
  {
    if ( v3 < 0 ) /*0x10084d172*/
    {
      v14 = 0; /*0x10084d174*/
      goto LABEL_5; /*0x10084d174*/
    }
    if ( v3 ) /*0x10084d182*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x10084d188*/
      v14 = 1; /*0x10084d18d*/
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1); /*0x10084d19b*/
      if ( !v15 ) /*0x10084d1a3*/
LABEL_5:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v3); /*0x10084d177*/
      v16 = v15; /*0x10084d1a5*/
    }
    else
    {
      v16 = 1; /*0x10084d219*/
    }
    v22 = (void *)v16; /*0x10084d21f*/
    v23 = a2; /*0x10084d222*/
    v24 = v3; /*0x10084d225*/
    goto LABEL_16; /*0x10084d225*/
  }
  v17 = v8; /*0x10084d1aa*/
  v31[0] = v8; /*0x10084d1ad*/
  v31[1] = v9; /*0x10084d1b1*/
  v31[2] = 0; /*0x10084d1b5*/
  v18 = v9; /*0x10084d1bd*/
  v31[3] = v9; /*0x10084d1c0*/
  v32 = 1; /*0x10084d1c4*/
  v31[4] = 0xA0000000ALL; /*0x10084d1d2*/
  result = (void *)((__int64 (__fastcall *)(char *, _QWORD *, unsigned __int64, __int64, __int64, __int64))_$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792)( /*0x10084d1de*/
                     v29,
                     v31,
                     v9,
                     v10,
                     v11,
                     v12);
  if ( !v29[0] ) /*0x10084d1e7*/
  {
    v3 = 0; /*0x10084d247*/
    v16 = 1; /*0x10084d24a*/
    goto LABEL_17; /*0x10084d250*/
  }
  v20 = v30 + 1; /*0x10084d1ed*/
  v21 = v17; /*0x10084d1f3*/
  if ( v30 != -1 ) /*0x10084d1f6*/
  {
    if ( v18 <= v20 ) /*0x10084d1fb*/
    {
      if ( v18 != v20 ) /*0x10084d252*/
LABEL_13:
        core::str::slice_error_fail::h480e51fbd8b15eba(v17, v18, v30 + 1, v18, &off_10196C820); /*0x10084d204*/
    }
    else if ( *(char *)(v17 + v20) < -64 ) /*0x10084d202*/
    {
      goto LABEL_13; /*0x10084d202*/
    }
  }
  v25 = v18 - v20; /*0x10084d254*/
  if ( (__int64)(v18 - v20) < 0 ) /*0x10084d257*/
  {
    v26 = 0; /*0x10084d259*/
    goto LABEL_22; /*0x10084d259*/
  }
  if ( v25 ) /*0x10084d267*/
  {
    v27 = v18 - v20; /*0x10084d269*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v17); /*0x10084d26c*/
    v26 = 1; /*0x10084d271*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1); /*0x10084d27f*/
    v25 = v27; /*0x10084d284*/
    if ( !v28 ) /*0x10084d28a*/
LABEL_22:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v25); /*0x10084d25c*/
    v16 = v28; /*0x10084d28c*/
    v21 = v17; /*0x10084d28f*/
  }
  else
  {
    v16 = 1; /*0x10084d294*/
  }
  v23 = (const void *)(v20 + v21); /*0x10084d29a*/
  v22 = (void *)v16; /*0x10084d29d*/
  v3 = v25; /*0x10084d2a0*/
  v24 = v25; /*0x10084d2a3*/
LABEL_16:
  result = memcpy(v22, v23, v24); /*0x10084d228*/
LABEL_17:
  *a1 = v3; /*0x10084d22d*/
  a1[1] = v16; /*0x10084d230*/
  a1[2] = v3; /*0x10084d234*/
  return result; /*0x10084d238*/
}