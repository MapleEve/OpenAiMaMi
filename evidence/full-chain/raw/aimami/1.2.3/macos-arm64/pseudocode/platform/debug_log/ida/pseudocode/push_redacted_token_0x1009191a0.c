// __ZN13codexmate_lib8platform9debug_log19push_redacted_token @ 0x1009191a0 | 基线 same-set
void __fastcall codexmate_lib::platform::debug_log::push_redacted_token::h8d53e02b1628054e(
        _QWORD *a1,
        void *a2,
        __int64 a3)
{
  size_t v3; // r14
  unsigned __int8 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  size_t v9; // r12
  __int64 v10; // rbx
  unsigned __int8 *v11; // r15
  char *v12; // rax
  char *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i si128; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __m128i v22; // xmm6
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  _QWORD *v29; // rsi
  _QWORD *v30; // r13
  _QWORD *v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  __int64 v37; // r15
  char v38[24]; // [rsp+0h] [rbp-80h] BYREF
  _QWORD v39[5]; // [rsp+18h] [rbp-68h] BYREF
  char v40; // [rsp+40h] [rbp-40h]
  void *__src; // [rsp+48h] [rbp-38h]
  _QWORD *v42; // [rsp+50h] [rbp-30h]

  if ( a3 ) /*0x1009191b4*/
  {
    v3 = a3; /*0x1009191ba*/
    v42 = a1; /*0x1009191bd*/
    __src = a2; /*0x1009191c1*/
    v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hef7e87297a68fd7a((unsigned __int8 *)a2, a3); /*0x1009191cb*/
    v9 = v7; /*0x1009191d0*/
    if ( v7 < 0 ) /*0x1009191d6*/
    {
      v10 = 0; /*0x1009191d8*/
      goto LABEL_4; /*0x1009191d8*/
    }
    v11 = v6; /*0x1009191e5*/
    if ( !v7 ) /*0x1009191e8*/
      goto LABEL_19; /*0x1009191e8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x1009191ea*/
    v10 = 1; /*0x1009191ef*/
    v12 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1009191fc*/
    if ( !v12 ) /*0x100919204*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x1009191da*/
    v13 = v12; /*0x100919206*/
    memcpy(v12, v11, v9); /*0x100919212*/
    if ( v9 < 8 ) /*0x10091921b*/
    {
      v14 = 0; /*0x10091921d*/
      goto LABEL_23; /*0x10091921f*/
    }
    if ( v9 >= 0x20 ) /*0x100919247*/
    {
      v14 = v9 & 0x7FFFFFFFFFFFFFE0LL; /*0x100919253*/
      v15 = 0; /*0x100919256*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100919258*/
      v17 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100919260*/
      v18 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100919268*/
      do /*0x1009192cb*/
      {
        v19 = _mm_loadu_si128((const __m128i *)&v13[v15]); /*0x100919270*/
        v20 = _mm_loadu_si128((const __m128i *)&v13[v15 + 16]); /*0x100919277*/
        v21 = _mm_add_epi8(v19, si128); /*0x100919282*/
        v22 = _mm_add_epi8(v20, si128); /*0x10091928a*/
        *(__m128i *)&v13[v15] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v17), v21), v18), v19); /*0x1009192b6*/
        *(__m128i *)&v13[v15 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v22, v17), v22), v18), v20); /*0x1009192bd*/
        v15 += 32; /*0x1009192c4*/
      }
      while ( v14 != v15 ); /*0x1009192cb*/
      if ( v9 == v14 ) /*0x1009192d0*/
      {
LABEL_25:
        if ( v9 <= 2 ) /*0x1009193bf*/
        {
LABEL_26:
          v33 = 0; /*0x1009193c1*/
          while ( v11[v33] != 64 ) /*0x1009193d5*/
          {
            if ( v9 == ++v33 ) /*0x1009193dd*/
              goto LABEL_45; /*0x1009193dd*/
          }
          v35 = 0; /*0x10091942c*/
          while ( v11[v35] != 46 ) /*0x100919435*/
          {
            if ( v9 == ++v35 ) /*0x100919441*/
              goto LABEL_45; /*0x100919441*/
          }
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v9, 1); /*0x100919537*/
          v29 = v42; /*0x10091953c*/
          v30 = v42 + 2; /*0x100919540*/
          v31 = v42 + 1; /*0x100919544*/
          if ( v9 > 4 ) /*0x10091954c*/
            goto LABEL_47; /*0x10091954c*/
LABEL_20:
          v32 = v29[2]; /*0x100919351*/
          if ( v3 > *v29 - v32 ) /*0x10091935e*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10091938e*/
              v29,
              v29[2],
              v3,
              1,
              1,
              v8);
            v32 = v29[2]; /*0x100919393*/
          }
          memcpy((void *)(v32 + *v31), __src, v3); /*0x10091936d*/
LABEL_50:
          *v30 = v3 + v32; /*0x100919581*/
          return; /*0x100919584*/
        }
        v34 = 0; /*0x1009193f7*/
        if ( v9 >= 0xA ) /*0x100919403*/
        {
          LOBYTE(v34) = (*(_WORD *)v13 ^ 0x6B73 | (unsigned __int8)v13[2] ^ 0x2D) != 0; /*0x100919405*/
          if ( !v34 ) /*0x100919409*/
            goto LABEL_32; /*0x100919409*/
        }
        if ( !(*(_WORD *)v11 ^ 0x7965 | v11[2] ^ 0x4A) ) /*0x100919459*/
        {
          v39[0] = v11; /*0x10091945e*/
          v39[1] = v9; /*0x100919462*/
          v39[2] = 0; /*0x100919466*/
          v39[3] = v9; /*0x10091946e*/
          v39[4] = 0x2E0000002ELL; /*0x10091947c*/
          v40 = 1; /*0x100919480*/
          v36 = -1; /*0x100919484*/
          do /*0x1009194a4*/
          {
            _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100919498*/
              v38,
              v39);
            ++v36; /*0x10091949d*/
          }
          while ( v38[0] ); /*0x1009194a4*/
          if ( v36 >= 2 && v9 >= 0x28 ) /*0x1009194b1*/
          {
LABEL_32:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v9, 1); /*0x100919416*/
            v29 = v42; /*0x10091941b*/
            v30 = v42 + 2; /*0x10091941f*/
            v31 = v42 + 1; /*0x100919423*/
            goto LABEL_47; /*0x100919427*/
          }
        }
        if ( v9 < 0x10 ) /*0x1009194c0*/
          goto LABEL_26; /*0x1009194c0*/
        if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(64, v11, v9) == 1 ) /*0x1009194da*/
        {
          v37 = core::slice::memchr::memchr_aligned::hda948616f04379f9(46, v11, v9); /*0x1009194ec*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v9, 1); /*0x1009194fa*/
          v29 = v42; /*0x1009194ff*/
          v30 = v42 + 2; /*0x100919503*/
          v31 = v42 + 1; /*0x100919507*/
          if ( v37 != 1 ) /*0x10091950f*/
            goto LABEL_20; /*0x10091950f*/
LABEL_47:
          v32 = v29[2]; /*0x100919552*/
          if ( (unsigned __int64)(*v29 - v32) <= 9 ) /*0x100919560*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1009195b0*/
              v29,
              v29[2],
              10,
              1,
              1,
              v8);
            v32 = v29[2]; /*0x1009195b5*/
          }
          qmemcpy((void *)(*v31 + v32), "[REDACTED]", 10); /*0x10091956f*/
          v3 = 10; /*0x10091957b*/
          goto LABEL_50; /*0x10091957b*/
        }
LABEL_45:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v9, 1); /*0x100919517*/
LABEL_19:
        v29 = v42; /*0x100919345*/
        v30 = v42 + 2; /*0x100919349*/
        v31 = v42 + 1; /*0x10091934d*/
        goto LABEL_20; /*0x10091934d*/
      }
      if ( (v9 & 0x18) == 0 ) /*0x1009192da*/
      {
        do /*0x1009193b9*/
        {
LABEL_23:
          v13[v14] |= 32 * ((unsigned __int8)(v13[v14] - 65) < 0x1Au); /*0x10091939a*/
          ++v14; /*0x1009193b3*/
LABEL_24:
          ; /*0x1009193b6*/
        }
        while ( v9 != v14 ); /*0x1009193b9*/
        goto LABEL_25; /*0x1009193b9*/
      }
    }
    else
    {
      v14 = 0; /*0x100919249*/
    }
    v23 = v14; /*0x1009192e0*/
    v14 = v9 & 0x7FFFFFFFFFFFFFF8LL; /*0x1009192ea*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x1009192ed*/
    v25 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x1009192f5*/
    v26 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x1009192fd*/
    do /*0x100919341*/
    {
      v27 = _mm_loadl_epi64((const __m128i *)&v13[v23]); /*0x100919310*/
      v28 = _mm_add_epi8(v27, v24); /*0x10091931b*/
      *(_QWORD *)&v13[v23] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v28, v25), v28), v26), v27).u64[0]; /*0x100919333*/
      v23 += 8; /*0x10091933a*/
    }
    while ( v14 != v23 ); /*0x100919341*/
    goto LABEL_24; /*0x100919341*/
  }
}