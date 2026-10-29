// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_trace::Trace::failed::h9577e8d7d4502f9f; addr: 0x10057eeb0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:42Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_trace::Trace::failed::h9577e8d7d4502f9f(
        _QWORD *a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  void *v5; // r13
  __int64 v6; // r15
  bool v7; // zf
  void *v8; // rax
  __m128i v9; // xmm0
  _QWORD *v10; // rbx
  unsigned __int8 *v11; // rdi
  int v12; // eax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  _QWORD *v19; // r12
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rcx
  _BYTE *v23; // r15
  char v25; // al

  v5 = &anon_05dfdba247e196beb5b0260c96b315e5_138; /*0x10057eec1*/
  v6 = 5; /*0x10057eec8*/
  switch ( a3 ) /*0x10057eef2*/
  {
    case 9LL: /*0x10057eef2*/
      v7 = (*(_QWORD *)a2 ^ 0x6F7272655F697061LL | a2[8] ^ 0x72LL) == 0; /*0x10057ef0b*/
      v6 = 2LL * ((*(_QWORD *)a2 ^ 0x6F7272655F697061LL | a2[8] ^ 0x72LL) != 0) + 3; /*0x10057ef11*/
      v8 = &anon_05dfdba247e196beb5b0260c96b315e5_352; /*0x10057ef16*/
      goto LABEL_8; /*0x10057ef1d*/
    case 16LL: /*0x10057eef2*/
      v13 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10181FE30); /*0x10057ef9c*/
      if ( _mm_testz_si128(v13, v13) ) /*0x10057efa9*/
      {
        v5 = &anon_05dfdba247e196beb5b0260c96b315e5_358; /*0x10057f066*/
        v6 = 9; /*0x10057f06d*/
      }
      else
      {
        v14 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10181FE50); /*0x10057efb3*/
        if ( _mm_testz_si128(v14, v14) ) /*0x10057efc0*/
        {
          v5 = &anon_05dfdba247e196beb5b0260c96b315e5_356; /*0x10057f075*/
        }
        else
        {
          v15 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10181FE60); /*0x10057efca*/
          if ( _mm_testz_si128(v15, v15) ) /*0x10057efd7*/
          {
            v5 = &anon_05dfdba247e196beb5b0260c96b315e5_355; /*0x10057f07e*/
          }
          else
          {
            v16 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10181FE40); /*0x10057efe1*/
            if ( !_mm_testz_si128(v16, v16) ) /*0x10057efee*/
              goto LABEL_24; /*0x10057efee*/
            v5 = &anon_05dfdba247e196beb5b0260c96b315e5_353; /*0x10057eff4*/
          }
        }
        v6 = 10; /*0x10057f085*/
      }
LABEL_24:
      v19 = a1; /*0x10057f08b*/
      v20 = (_QWORD *)*a1; /*0x10057f08e*/
      v21 = *(_QWORD *)(*a1 + 56LL); /*0x10057f091*/
      if ( !v21 ) /*0x10057f098*/
        v21 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h8dd8979d8d8a8a3a(v20 + 7); /*0x10057f118*/
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v21); /*0x10057f09a*/
      if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10057f0a9*/
      {
        v25 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, a2); /*0x10057f120*/
        v20[29] = v5; /*0x10057f129*/
        v20[30] = v6; /*0x10057f130*/
        if ( !v25 ) /*0x10057f139*/
          goto LABEL_28; /*0x10057f139*/
        v23 = v20 + 8; /*0x10057f13b*/
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x10057f14f*/
          goto LABEL_28; /*0x10057f14f*/
      }
      else
      {
        v22 = v6; /*0x10057f0b1*/
        v23 = v20 + 8; /*0x10057f0b4*/
        v20[29] = v5; /*0x10057f0bc*/
        v20[30] = v22; /*0x10057f0c3*/
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x10057f0da*/
          goto LABEL_28; /*0x10057f0da*/
      }
      if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, a2) ) /*0x10057f151*/
        *v23 = 1; /*0x10057f15a*/
LABEL_28:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v20[7]); /*0x10057f0dc*/
      return codexmate_lib::core::relay::anthropic_trace::Trace::finish::h8b671b497d9a1e5c(
               v19,
               &anon_05dfdba247e196beb5b0260c96b315e5_278,
               6,
               a4,
               a5);
    case 20LL: /*0x10057eef2*/
      v9 = _mm_or_si128( /*0x10057ef38*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10181FDE0),
             _mm_xor_si128(_mm_cvtsi32_si128(*((_DWORD *)a2 + 4)), (__m128i)xmmword_10181FDD0));
      if ( _mm_testz_si128(v9, v9) ) /*0x10057ef3c*/
      {
        v5 = &anon_05dfdba247e196beb5b0260c96b315e5_354; /*0x10057ef47*/
        v6 = 14; /*0x10057ef4e*/
      }
      goto LABEL_24; /*0x10057ef54*/
    case 21LL: /*0x10057eef2*/
      v17 = _mm_or_si128( /*0x10057f019*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10181FE00),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 5)), (__m128i)xmmword_10181FDF0));
      if ( _mm_testz_si128(v17, v17) ) /*0x10057f01d*/
      {
        v5 = &anon_05dfdba247e196beb5b0260c96b315e5_357; /*0x10057f024*/
        v6 = 15; /*0x10057f02b*/
      }
      goto LABEL_24; /*0x10057f031*/
    case 23LL: /*0x10057eef2*/
      v18 = _mm_or_si128( /*0x10057f04c*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_10181FE80),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 7)), (__m128i)xmmword_10181FE70));
      if ( _mm_testz_si128(v18, v18) ) /*0x10057f050*/
      {
        v5 = &anon_05dfdba247e196beb5b0260c96b315e5_359; /*0x10057f057*/
        v6 = 8; /*0x10057f05e*/
      }
      goto LABEL_24; /*0x10057f064*/
    case 31LL: /*0x10057eef2*/
      v10 = a1; /*0x10057ef65*/
      v11 = a2; /*0x10057ef68*/
      a2 = (unsigned __int8 *)&anon_05dfdba247e196beb5b0260c96b315e5_350; /*0x10057ef6b*/
      v12 = memcmp(v11, &anon_05dfdba247e196beb5b0260c96b315e5_350, 0x1Fu); /*0x10057ef6e*/
      a1 = v10; /*0x10057ef73*/
      v7 = v12 == 0; /*0x10057ef76*/
      if ( !v12 ) /*0x10057ef7d*/
        v6 = 12; /*0x10057ef7d*/
      v8 = &anon_05dfdba247e196beb5b0260c96b315e5_351; /*0x10057ef81*/
LABEL_8:
      v5 = &anon_05dfdba247e196beb5b0260c96b315e5_138; /*0x10057ef88*/
      if ( v7 ) /*0x10057ef8f*/
        v5 = v8; /*0x10057ef8f*/
      goto LABEL_24; /*0x10057ef8f*/
    default:
      goto LABEL_24;
  }
}