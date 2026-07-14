// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x1003ff120 d=2
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_raw::h25c4e64449bbb7db(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // r13
  _BYTE *v6; // r14
  __int64 v7; // r9
  __m128i v8; // xmm1
  __int8 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 result; // rax
  __int128 *v13; // rcx
  __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-150h]
  __int64 v16; // [rsp+30h] [rbp-120h]
  __int64 v17; // [rsp+38h] [rbp-118h]
  __int64 v18; // [rsp+40h] [rbp-110h] BYREF
  __int64 v19; // [rsp+48h] [rbp-108h]
  __m128i v20; // [rsp+50h] [rbp-100h] BYREF
  __int64 v21; // [rsp+60h] [rbp-F0h]
  __int64 v22; // [rsp+68h] [rbp-E8h]
  __int64 v23; // [rsp+70h] [rbp-E0h]
  __int64 v24; // [rsp+78h] [rbp-D8h]
  __m128i v25[7]; // [rsp+80h] [rbp-D0h] BYREF
  __m128i v26; // [rsp+F0h] [rbp-60h] BYREF
  __int128 *v27; // [rsp+108h] [rbp-48h]
  __m128i v28; // [rsp+110h] [rbp-40h]
  __int64 v29; // [rsp+120h] [rbp-30h]

  rusqlite::path_to_cstring::h3a6b3c588767bae1(v25); /*0x1003ff14b*/
  v6 = (_BYTE *)v25[0].i64[1]; /*0x1003ff157*/
  v5 = v25[0].i64[0]; /*0x1003ff157*/
  if ( v25[0].i64[0] != 0x8000000000000016LL ) /*0x1003ff168*/
  {
    v27 = (__int128 *)v25[2].i64[1]; /*0x1003ff271*/
    v10 = v25[2].i64[0]; /*0x1003ff271*/
    v28 = v25[3]; /*0x1003ff27c*/
    v8 = _mm_unpacklo_epi64((__m128i)v25[1].u64[0], _mm_loadl_epi64((const __m128i *)&v25[1].u64[1])); /*0x1003ff298*/
LABEL_14:
    result = v28.i64[1]; /*0x1003ff3f5*/
    v13 = v27; /*0x1003ff400*/
    a1[3] = v28; /*0x1003ff41a*/
    a1[2].i64[1] = (__int64)v13; /*0x1003ff41e*/
    a1->i64[0] = v5; /*0x1003ff422*/
    a1->i64[1] = (__int64)v6; /*0x1003ff425*/
    a1[1] = v8; /*0x1003ff429*/
    a1[2].i64[0] = v10; /*0x1003ff42e*/
    a1[6].i8[8] = 3; /*0x1003ff432*/
    return result; /*0x1003ff447*/
  }
  v26.i64[0] = v25[1].i64[0]; /*0x1003ff178*/
  rusqlite::inner_connection::InnerConnection::open_with_flags::h3a2e27052a583d8e( /*0x1003ff182*/
    v25,
    v25[0].i64[1],
    v25[1].i64[0],
    a4,
    0);
  v5 = v25[0].i64[0]; /*0x1003ff187*/
  v16 = v25[0].i64[0]; /*0x1003ff19b*/
  if ( v25[0].i64[0] != 0x8000000000000016LL ) /*0x1003ff1a2*/
  {
    v7 = v25[0].i64[1]; /*0x1003ff2a1*/
    v8 = _mm_loadu_si128(&v25[1]); /*0x1003ff2a8*/
    v27 = (__int128 *)v25[2].i64[1]; /*0x1003ff2be*/
    v10 = v25[2].i64[0]; /*0x1003ff2be*/
    v28 = v25[3]; /*0x1003ff2c9*/
    v9 = 3; /*0x1003ff2d8*/
    *v6 = 0; /*0x1003ff2db*/
    if ( !v26.i64[0] ) /*0x1003ff2e6*/
      goto LABEL_10; /*0x1003ff2e6*/
    goto LABEL_9; /*0x1003ff2e6*/
  }
  v20 = v25[1]; /*0x1003ff1c1*/
  v19 = v25[0].i64[1]; /*0x1003ff1c8*/
  v18 = 0; /*0x1003ff1cf*/
  v17 = foldhash::seed::gen_per_hasher_seed::h01eea3e643df83bd(); /*0x1003ff1df*/
  if ( byte_1015B7310 != 2 ) /*0x1003ff1f3*/
    foldhash::seed::global::GlobalSeed::init_slow::h7823214f07caac7d(); /*0x1003ff4b1*/
  v5 = v18; /*0x1003ff1f9*/
  v7 = v19; /*0x1003ff200*/
  v8 = _mm_loadu_si128(&v20); /*0x1003ff207*/
  v15 = 0; /*0x1003ff213*/
  v27 = &xmmword_10125CF30; /*0x1003ff222*/
  v28 = 0u; /*0x1003ff22d*/
  v29 = 0; /*0x1003ff243*/
  v9 = 0; /*0x1003ff247*/
  v10 = 0; /*0x1003ff24a*/
  *v6 = 0; /*0x1003ff24d*/
  if ( v26.i64[0] ) /*0x1003ff258*/
  {
LABEL_9:
    v26 = v8; /*0x1003ff2e8*/
    v11 = v7; /*0x1003ff2f5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ff2f8*/
    v7 = v11; /*0x1003ff2fd*/
    v8 = _mm_load_si128(&v26); /*0x1003ff300*/
  }
LABEL_10:
  if ( v16 != 0x8000000000000016LL ) /*0x1003ff316*/
  {
    v6 = (_BYTE *)v7; /*0x1003ff3f2*/
    goto LABEL_14; /*0x1003ff3f2*/
  }
  v25[5] = v15; /*0x1003ff356*/
  v25[2].i64[1] = (__int64)v27; /*0x1003ff35e*/
  v25[3] = v28; /*0x1003ff365*/
  v25[4].i64[0] = v29; /*0x1003ff373*/
  v25[0].i64[0] = v5; /*0x1003ff37a*/
  v25[0].i64[1] = v7; /*0x1003ff381*/
  v25[1] = v8; /*0x1003ff388*/
  v25[2].i64[0] = v10; /*0x1003ff390*/
  v25[4].i64[1] = v17; /*0x1003ff39e*/
  v25[6].i64[0] = 16; /*0x1003ff3a5*/
  v25[6].i8[8] = v9; /*0x1003ff3ad*/
  rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(&v18, v25, 5, 0); /*0x1003ff3c6*/
  result = 0x8000000000000016LL; /*0x1003ff3cb*/
  if ( v18 == 0x8000000000000016LL ) /*0x1003ff3dc*/
  {
    qmemcpy(a1, v25, 0x70u); /*0x1003ff3ed*/
  }
  else
  {
    a1[3].i64[1] = v24; /*0x1003ff44f*/
    a1[3].i64[0] = v23; /*0x1003ff45a*/
    a1[2].i64[1] = v22; /*0x1003ff465*/
    a1[2].i64[0] = v21; /*0x1003ff470*/
    a1[1] = v20; /*0x1003ff486*/
    v14 = v18; /*0x1003ff48a*/
    a1->i64[1] = v19; /*0x1003ff498*/
    a1->i64[0] = v14; /*0x1003ff49c*/
    a1[6].i8[8] = 3; /*0x1003ff49f*/
    return core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0((__int64)v25); /*0x1003ff4aa*/
  }
  return result; /*0x1003ff436*/
}