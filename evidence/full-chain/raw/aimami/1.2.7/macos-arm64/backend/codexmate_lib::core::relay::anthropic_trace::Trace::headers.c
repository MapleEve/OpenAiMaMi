// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::Trace::headers::h9fa7cd4d4cdc36f4; addr: 0x1005daf50; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_trace::Trace::headers::h9fa7cd4d4cdc36f4(
        unsigned __int8 *a1,
        void **a2,
        unsigned __int8 *a3,
        size_t a4,
        double a5)
{
  unsigned __int16 v5; // r12
  unsigned __int8 *v6; // rbx
  size_t v7; // r14
  const char *v8; // r15
  const __m128i *v10; // rax
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // r13
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int8 *v18; // rax
  unsigned __int8 *v19; // r13
  char v21[8]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+8h] [rbp-B8h]
  __int64 v23; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+28h] [rbp-98h]
  __int64 v25; // [rsp+30h] [rbp-90h]
  _QWORD v26[2]; // [rsp+38h] [rbp-88h] BYREF
  size_t v27; // [rsp+48h] [rbp-78h]
  __int64 v28; // [rsp+50h] [rbp-70h] BYREF
  size_t v29; // [rsp+58h] [rbp-68h]
  unsigned __int8 *v30; // [rsp+60h] [rbp-60h] BYREF
  size_t v31; // [rsp+68h] [rbp-58h]
  __int64 v32; // [rsp+70h] [rbp-50h]
  size_t v33; // [rsp+78h] [rbp-48h]
  __int64 v34; // [rsp+80h] [rbp-40h]
  char v35; // [rsp+88h] [rbp-38h]
  __int16 v36; // [rsp+90h] [rbp-30h]

  v5 = (unsigned __int16)a2; /*0x1005daf64*/
  v6 = a1; /*0x1005daf67*/
  v7 = 7; /*0x1005daf6a*/
  v8 = (const char *)&anon_4bf7b7c8c09ec04f58b93d1c5edcde78_508; /*0x1005daf70*/
  if ( !a3 ) /*0x1005daf7a*/
    goto LABEL_12; /*0x1005daf7a*/
  v28 = 0; /*0x1005daf83*/
  v29 = a4; /*0x1005daf8b*/
  a2 = (void **)&v30; /*0x1005daf8f*/
  v30 = a3; /*0x1005daf93*/
  v31 = a4; /*0x1005daf97*/
  v32 = 0; /*0x1005daf9b*/
  v33 = a4; /*0x1005dafa3*/
  v34 = 0x3B0000003BLL; /*0x1005dafb1*/
  v35 = 1; /*0x1005dafb5*/
  v36 = 1; /*0x1005dafb9*/
  a1 = (unsigned __int8 *)v21; /*0x1005dafbf*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1005dafc6*/
    v21,
    &v30,
    a5);
  if ( v21[0] ) /*0x1005dafd2*/
  {
    a2 = (void **)(v22 - v28); /*0x1005dafdf*/
    a1 = &a3[v28]; /*0x1005dafe5*/
    v10 = (const __m128i *)core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(&a3[v28], v22 - v28); /*0x1005dafe8*/
    if ( a3 != (unsigned __int8 *)16 ) /*0x1005daff1*/
      goto LABEL_4; /*0x1005daff1*/
LABEL_10:
    v12 = _mm_xor_si128( /*0x1005db05c*/
            _mm_loadu_si128(v10),
            *(__m128i *)"application/jsoncal proxy failedCC Switch local catalog-revisionx-aimami-catalogpic-thinking-v1:"
                        "aimami-anthropicccswitch-anthropplatform.kimi.com");
    if ( _mm_testz_si128(v12, v12) ) /*0x1005db06d*/
    {
      v7 = 4; /*0x1005db237*/
      v8 = (const char *)&unk_1016E9904; /*0x1005db23d*/
      goto LABEL_12; /*0x1005db244*/
    }
    goto LABEL_11; /*0x1005db06d*/
  }
  if ( HIBYTE(v36) ) /*0x1005db033*/
    goto LABEL_12; /*0x1005db033*/
  a2 = (void **)(v29 - v28); /*0x1005db03d*/
  if ( ((unsigned __int8)v36 | (v29 != v28)) != 1 ) /*0x1005db048*/
    goto LABEL_12; /*0x1005db048*/
  a1 = &v30[v28]; /*0x1005db04e*/
  v10 = (const __m128i *)core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(&v30[v28], (__int64)a2); /*0x1005db051*/
  if ( a3 == (unsigned __int8 *)16 ) /*0x1005db05a*/
    goto LABEL_10; /*0x1005db05a*/
LABEL_4:
  if ( a3 != (unsigned __int8 *)17 /*0x1005db019*/
    || (v11 = _mm_or_si128(
                _mm_xor_si128(_mm_cvtsi32_si128(v10[1].u8[0]), *(__m128i *)"m"),
                _mm_xor_si128(_mm_loadu_si128(v10), (__m128i)xmmword_1016FC120)),
        !_mm_testz_si128(v11, v11)) )
  {
LABEL_11:
    v7 = 5; /*0x1005db073*/
    v8 = (const char *)&anon_4bf7b7c8c09ec04f58b93d1c5edcde78_517; /*0x1005db079*/
    goto LABEL_12; /*0x1005db079*/
  }
  v7 = 3; /*0x1005db020*/
  v8 = "sse"; /*0x1005db026*/
LABEL_12:
  v26[0] = 0; /*0x1005db080*/
  v27 = 0; /*0x1005db08b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x1005db093*/
  v13 = 11; /*0x1005db098*/
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1005db0a8*/
  if ( !v14 ) /*0x1005db0b0*/
    goto LABEL_21; /*0x1005db0b0*/
  qmemcpy(v14, "http_status", 11); /*0x1005db0c0*/
  v23 = 11; /*0x1005db0ca*/
  v24 = (__int64)v14; /*0x1005db0d5*/
  v25 = 11; /*0x1005db0dc*/
  LOBYTE(v28) = 2; /*0x1005db0eb*/
  v29 = 0; /*0x1005db0ef*/
  v30 = (unsigned __int8 *)v5; /*0x1005db0f7*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v21, v26, &v23, &v28); /*0x1005db114*/
  if ( v21[0] != 6 ) /*0x1005db120*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v21); /*0x1005db129*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v26, v15); /*0x1005db12e*/
  v13 = 5; /*0x1005db133*/
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1005db143*/
  if ( !v16 ) /*0x1005db14b*/
LABEL_21:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v13); /*0x1005db251*/
  *(_BYTE *)(v16 + 4) = 97; /*0x1005db154*/
  *(_DWORD *)v16 = 1768187245; /*0x1005db158*/
  v23 = 5; /*0x1005db15e*/
  v24 = v16; /*0x1005db169*/
  v25 = 5; /*0x1005db170*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v17); /*0x1005db17b*/
  v18 = (unsigned __int8 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1005db188*/
  if ( !v18 ) /*0x1005db190*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7); /*0x1005db260*/
  v19 = v18; /*0x1005db196*/
  memcpy(v18, v8, v7); /*0x1005db1a2*/
  LOBYTE(v28) = 3; /*0x1005db1a7*/
  v29 = v7; /*0x1005db1ab*/
  v30 = v19; /*0x1005db1af*/
  v31 = v7; /*0x1005db1b3*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v21, v26, &v23, &v28); /*0x1005db1d0*/
  if ( v21[0] != 6 ) /*0x1005db1dc*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v21); /*0x1005db1e5*/
  v29 = v26[0]; /*0x1005db1f5*/
  v30 = (unsigned __int8 *)v26[1]; /*0x1005db1f9*/
  v31 = v27; /*0x1005db201*/
  LOBYTE(v28) = 5; /*0x1005db205*/
  return codexmate_lib::core::relay::anthropic_trace::Inner::emit::h84842d22e12e8a46( /*0x1005db225*/
           *(_QWORD *)v6 + 16LL,
           (__int64)"headers",
           7,
           (__int64)&v28);
}