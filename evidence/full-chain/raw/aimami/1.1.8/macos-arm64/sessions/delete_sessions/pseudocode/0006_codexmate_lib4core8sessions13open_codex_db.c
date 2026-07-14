// mac 1.1.8 delete_sessions node va=0x1001b9e10 depth=1
// codexmate_lib4core8sessions13open_codex_db
__int64 __fastcall codexmate_lib::core::sessions::open_codex_db::h3aad3cf6c75ec1cc(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  _BYTE *v6; // r14
  size_t v7; // r15
  __int64 v8; // r12
  __int64 v9; // rdi
  __m128i v10; // xmm1
  __int8 v11; // r8
  __int64 v12; // r13
  __int8 v13; // r14
  __int64 result; // rax
  size_t v15; // r14
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rcx
  __m128i v19; // [rsp+0h] [rbp-1A0h] BYREF
  __int64 v20; // [rsp+18h] [rbp-188h]
  __m128i v21; // [rsp+20h] [rbp-180h]
  __int64 v22; // [rsp+30h] [rbp-170h]
  __int64 v23; // [rsp+38h] [rbp-168h]
  __int64 v24; // [rsp+40h] [rbp-160h]
  __m128i v25; // [rsp+48h] [rbp-158h] BYREF
  __int64 v26; // [rsp+58h] [rbp-148h]
  __m128i v27; // [rsp+60h] [rbp-140h]
  size_t v28; // [rsp+70h] [rbp-130h] BYREF
  _BYTE v29[24]; // [rsp+78h] [rbp-128h] BYREF
  __int64 v30; // [rsp+90h] [rbp-110h]
  __int64 v31; // [rsp+98h] [rbp-108h]
  __int64 v32; // [rsp+A0h] [rbp-100h]
  __int64 v33; // [rsp+A8h] [rbp-F8h]
  __m128i v34[7]; // [rsp+B0h] [rbp-F0h] BYREF
  void *v35; // [rsp+120h] [rbp-80h] BYREF
  __m128i v36; // [rsp+128h] [rbp-78h]
  __int64 v37; // [rsp+138h] [rbp-68h]
  __int64 v38; // [rsp+140h] [rbp-60h]
  __int64 v39; // [rsp+148h] [rbp-58h]
  __int64 v40; // [rsp+150h] [rbp-50h]
  __int64 v41; // [rsp+158h] [rbp-48h]
  __m128i v42; // [rsp+160h] [rbp-40h] BYREF
  __int64 v43; // [rsp+170h] [rbp-30h]

  rusqlite::path_to_cstring::h3a6b3c588767bae1(v34); /*0x1001b9e3b*/
  v6 = (_BYTE *)v34[0].i64[1]; /*0x1001b9e47*/
  v7 = v34[0].i64[0]; /*0x1001b9e47*/
  if ( v34[0].i64[0] != 0x8000000000000016LL )
  {
    v35 = (void *)v34[2].i64[1]; /*0x1001b9f61*/
    v12 = v34[2].i64[0]; /*0x1001b9f61*/
    v36 = v34[3]; /*0x1001b9f6c*/
    v10 = _mm_unpacklo_epi64((__m128i)v34[1].u64[0], _mm_loadl_epi64((const __m128i *)&v34[1].u64[1])); /*0x1001b9f88*/
LABEL_14:
    v34[3] = v36; /*0x1001ba10a*/
    v34[2].i64[1] = (__int64)v35; /*0x1001ba124*/
    v34[0].i64[0] = v7; /*0x1001ba12b*/
    v34[0].i64[1] = (__int64)v6; /*0x1001ba132*/
    v34[1] = v10; /*0x1001ba139*/
    v34[2].i64[0] = v12; /*0x1001ba141*/
    v25.i64[0] = (__int64)v34; /*0x1001ba14f*/
    v25.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1001ba15d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(
      &v28,
      "\rsqlite open: \xC0\x15sqlite busy_timeout: \xC0\x1Asqlite delete spawn edge: \xC0\x16sqlite delete thread: \xC0sr"
      "c/core/sessions.rs",
      (unsigned __int64)&v25);
    v15 = v28; /*0x1001ba17e*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(v34); /*0x1001ba18c*/
    v16 = _mm_loadu_si128((const __m128i *)v29); /*0x1001ba191*/
    a1[4].i64[0] = v22; /*0x1001ba1a0*/
    a1[3].i64[1] = v21.i64[1]; /*0x1001ba1ab*/
    v17 = v20; /*0x1001ba1af*/
    a1[3].i64[0] = v21.i64[0]; /*0x1001ba1bd*/
    a1[2].i64[1] = v17; /*0x1001ba1c1*/
    v18 = v27.i64[1]; /*0x1001ba1cc*/
    result = v27.i64[0]; /*0x1001ba1cc*/
    a1[5].i64[0] = v27.i64[0]; /*0x1001ba1d3*/
    a1[5].i64[1] = v18; /*0x1001ba1d7*/
    a1->i64[0] = 9; /*0x1001ba1db*/
    a1->i64[1] = v15; /*0x1001ba1e2*/
    a1[1] = v16; /*0x1001ba1e6*/
    a1[6].i8[8] = 3; /*0x1001ba1eb*/
    return result; /*0x1001ba200*/
  }
  v8 = v34[1].i64[0]; /*0x1001b9e76*/
  rusqlite::inner_connection::InnerConnection::open_with_flags::h3a2e27052a583d8e( /*0x1001b9e79*/
    v34,
    v34[0].i64[1],
    v34[1].i64[0],
    32770 - (unsigned int)a4,
    0);
  v7 = v34[0].i64[0]; /*0x1001b9e7e*/
  v23 = v34[0].i64[0]; /*0x1001b9e92*/
  if ( v34[0].i64[0] != 0x8000000000000016LL ) /*0x1001b9e99*/
  {
    v9 = v34[0].i64[1]; /*0x1001b9f91*/
    v10 = _mm_loadu_si128(&v34[1]); /*0x1001b9f98*/
    v35 = (void *)v34[2].i64[1]; /*0x1001b9fae*/
    v12 = v34[2].i64[0]; /*0x1001b9fae*/
    v36 = v34[3]; /*0x1001b9fb9*/
    v11 = 3; /*0x1001b9fc8*/
    *v6 = 0; /*0x1001b9fcb*/
    if ( !v8 ) /*0x1001b9fd2*/
      goto LABEL_10; /*0x1001b9fd2*/
    goto LABEL_9; /*0x1001b9fd2*/
  }
  *(__m128i *)&v29[8] = v34[1]; /*0x1001b9eb8*/
  *(_QWORD *)v29 = v34[0].i64[1]; /*0x1001b9ebf*/
  v28 = 0; /*0x1001b9ec6*/
  v24 = foldhash::seed::gen_per_hasher_seed::h01eea3e643df83bd(); /*0x1001b9ed6*/
  if ( byte_1015B7310 != 2 ) /*0x1001b9eea*/
    foldhash::seed::global::GlobalSeed::init_slow::h7823214f07caac7d(); /*0x1001ba2e7*/
  v7 = v28; /*0x1001b9ef0*/
  v9 = *(_QWORD *)v29; /*0x1001b9ef7*/
  v10 = _mm_loadu_si128((const __m128i *)&v29[8]); /*0x1001b9efe*/
  v42 = 0; /*0x1001b9f0a*/
  v35 = anon_0bcfb5f5de49270c5675714f036928d0_3; /*0x1001b9f16*/
  v36 = 0u; /*0x1001b9f21*/
  v37 = 0; /*0x1001b9f37*/
  v11 = 0; /*0x1001b9f3b*/
  v12 = 0; /*0x1001b9f3e*/
  *v6 = 0; /*0x1001b9f41*/
  if ( v8 ) /*0x1001b9f48*/
  {
LABEL_9:
    v19 = v10; /*0x1001b9fd4*/
    v13 = v11; /*0x1001b9fea*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001b9fed*/
    v11 = v13; /*0x1001b9ff2*/
    v10 = _mm_load_si128(&v19); /*0x1001b9ff8*/
  }
LABEL_10:
  if ( v23 != 0x8000000000000016LL ) /*0x1001ba011*/
  {
    v6 = (_BYTE *)v9; /*0x1001ba107*/
    goto LABEL_14; /*0x1001ba107*/
  }
  v22 = v37; /*0x1001ba01b*/
  v21 = v36; /*0x1001ba035*/
  v20 = (__int64)v35; /*0x1001ba03c*/
  v27 = _mm_load_si128(&v42); /*0x1001ba048*/
  v34[0].i64[0] = v7; /*0x1001ba050*/
  v34[0].i64[1] = v9; /*0x1001ba057*/
  v34[1] = v10; /*0x1001ba05e*/
  v34[2].i64[0] = v12; /*0x1001ba066*/
  v34[2].i64[1] = (__int64)v35; /*0x1001ba06d*/
  v34[3] = v36; /*0x1001ba074*/
  v34[4].i64[0] = v37; /*0x1001ba082*/
  v34[4].i64[1] = v24; /*0x1001ba090*/
  v34[5] = v27; /*0x1001ba0ac*/
  v34[6].i64[0] = 16; /*0x1001ba0b3*/
  v34[6].i8[8] = v11; /*0x1001ba0be*/
  rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(&v35, v34, 5, 0); /*0x1001ba0d7*/
  result = 0x8000000000000016LL; /*0x1001ba0dc*/
  if ( v35 == (void *)0x8000000000000016LL )
  {
    qmemcpy(a1, v34, 0x70u); /*0x1001ba0ff*/
  }
  else
  {
    v33 = v41; /*0x1001ba205*/
    v32 = v40; /*0x1001ba210*/
    v31 = v39; /*0x1001ba21b*/
    v30 = v38; /*0x1001ba226*/
    *(_QWORD *)&v29[16] = v37; /*0x1001ba231*/
    *(__m128i *)v29 = v36; /*0x1001ba24b*/
    v28 = (size_t)v35; /*0x1001ba252*/
    v42.i64[0] = (__int64)&v28; /*0x1001ba260*/
    v42.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1001ba26b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(
      (size_t *)&v25,
      (unsigned __int8 *)"\x15sqlite busy_timeout: \xC0\x1Asqlite delete spawn edge: \xC0\x16sqlite delete thread: \xC0src/core/sessions.rs",
      (unsigned __int64)&v42);
    v42 = v25; /*0x1001ba294*/
    v43 = v26; /*0x1001ba2a3*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(&v28); /*0x1001ba2ae*/
    a1[1].i64[1] = v43; /*0x1001ba2b7*/
    *(__m128i *)((char *)a1 + 8) = v42; /*0x1001ba2c7*/
    a1->i64[0] = 9; /*0x1001ba2cb*/
    a1[6].i8[8] = 3; /*0x1001ba2d2*/
    return core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0(v34); /*0x1001ba2dd*/
  }
  return result; /*0x1001ba1ef*/
}