// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::sessions::open_codex_db::h89dffd484138ba2b; addr: 0x100b03d40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
__int64 __fastcall codexmate_lib::core::sessions::open_codex_db::h89dffd484138ba2b(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  _BYTE *v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rdi
  __m128i v10; // xmm1
  __int8 v11; // r8
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r12
  _BYTE *v15; // rdi
  __int8 v16; // r14
  __m128i v17; // xmm0
  __int64 result; // rax
  __int64 v19; // r14
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rcx
  __m128i v23; // [rsp+0h] [rbp-1A0h] BYREF
  __int64 v24; // [rsp+18h] [rbp-188h]
  __m128i v25; // [rsp+20h] [rbp-180h]
  __int64 v26; // [rsp+30h] [rbp-170h]
  __int64 v27; // [rsp+38h] [rbp-168h]
  __int64 v28; // [rsp+40h] [rbp-160h]
  __m128i v29; // [rsp+48h] [rbp-158h] BYREF
  __int64 v30; // [rsp+58h] [rbp-148h]
  __m128i v31; // [rsp+60h] [rbp-140h]
  __int64 v32; // [rsp+70h] [rbp-130h] BYREF
  _BYTE v33[24]; // [rsp+78h] [rbp-128h] BYREF
  __int64 v34; // [rsp+90h] [rbp-110h]
  __int64 v35; // [rsp+98h] [rbp-108h]
  __int64 v36; // [rsp+A0h] [rbp-100h]
  __int64 v37; // [rsp+A8h] [rbp-F8h]
  __m128i v38[7]; // [rsp+B0h] [rbp-F0h] BYREF
  void *v39; // [rsp+120h] [rbp-80h] BYREF
  __m128i v40; // [rsp+128h] [rbp-78h]
  __int64 v41; // [rsp+138h] [rbp-68h]
  __int64 v42; // [rsp+140h] [rbp-60h]
  __int64 v43; // [rsp+148h] [rbp-58h]
  __int64 v44; // [rsp+150h] [rbp-50h]
  __int64 v45; // [rsp+158h] [rbp-48h]
  __m128i v46; // [rsp+160h] [rbp-40h] BYREF
  __int64 v47; // [rsp+170h] [rbp-30h]

  rusqlite::path_to_cstring::h3a6b3c588767bae1(v38, a2, a3); /*0x100b03d6b*/
  v6 = (_BYTE *)v38[0].i64[1]; /*0x100b03d77*/
  v7 = v38[0].i64[0]; /*0x100b03d77*/
  if ( v38[0].i64[0] != 0x8000000000000016LL ) /*0x100b03d88*/
  {
    v39 = (void *)v38[2].i64[1]; /*0x100b03e91*/
    v12 = v38[2].i64[0]; /*0x100b03e91*/
    v40 = v38[3]; /*0x100b03e9c*/
    v10 = _mm_unpacklo_epi64((__m128i)v38[1].u64[0], _mm_loadl_epi64((const __m128i *)&v38[1].u64[1])); /*0x100b03eb8*/
LABEL_14:
    v38[3] = v40; /*0x100b0403a*/
    v38[2].i64[1] = (__int64)v39; /*0x100b04054*/
    v38[0].i64[0] = v7; /*0x100b0405b*/
    v38[0].i64[1] = (__int64)v6; /*0x100b04062*/
    v38[1] = v10; /*0x100b04069*/
    v38[2].i64[0] = v12; /*0x100b04071*/
    v29.i64[0] = (__int64)v38; /*0x100b0407f*/
    v29.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100b0408d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v32, &unk_1018F76B4, &v29); /*0x100b040a9*/
    v19 = v32; /*0x100b040ae*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v38); /*0x100b040bc*/
    v20 = _mm_loadu_si128((const __m128i *)v33); /*0x100b040c1*/
    a1[4].i64[0] = v26; /*0x100b040d0*/
    a1[3].i64[1] = v25.i64[1]; /*0x100b040db*/
    v21 = v24; /*0x100b040df*/
    a1[3].i64[0] = v25.i64[0]; /*0x100b040ed*/
    a1[2].i64[1] = v21; /*0x100b040f1*/
    v22 = v31.i64[1]; /*0x100b040fc*/
    result = v31.i64[0]; /*0x100b040fc*/
    a1[5].i64[0] = v31.i64[0]; /*0x100b04103*/
    a1[5].i64[1] = v22; /*0x100b04107*/
    a1->i64[0] = 10; /*0x100b0410b*/
    a1->i64[1] = v19; /*0x100b04112*/
    a1[1] = v20; /*0x100b04116*/
    a1[6].i8[8] = 3; /*0x100b0411b*/
    return result; /*0x100b04130*/
  }
  v8 = v38[1].i64[0]; /*0x100b03da6*/
  rusqlite::inner_connection::InnerConnection::open_with_flags::h3a2e27052a583d8e( /*0x100b03da9*/
    v38,
    v38[0].i64[1],
    v38[1].i64[0],
    32770 - (unsigned int)a4,
    0);
  v7 = v38[0].i64[0]; /*0x100b03dae*/
  v27 = v38[0].i64[0]; /*0x100b03dc2*/
  if ( v38[0].i64[0] != 0x8000000000000016LL ) /*0x100b03dc9*/
  {
    v9 = v38[0].i64[1]; /*0x100b03ec1*/
    v10 = _mm_loadu_si128(&v38[1]); /*0x100b03ec8*/
    v39 = (void *)v38[2].i64[1]; /*0x100b03ede*/
    v12 = v38[2].i64[0]; /*0x100b03ede*/
    v40 = v38[3]; /*0x100b03ee9*/
    v11 = 3; /*0x100b03ef8*/
    *v6 = 0; /*0x100b03efb*/
    if ( !v8 ) /*0x100b03f02*/
      goto LABEL_10; /*0x100b03f02*/
    goto LABEL_9; /*0x100b03f02*/
  }
  *(__m128i *)&v33[8] = v38[1]; /*0x100b03de8*/
  *(_QWORD *)v33 = v38[0].i64[1]; /*0x100b03def*/
  v32 = 0; /*0x100b03df6*/
  v28 = foldhash::seed::gen_per_hasher_seed::h01eea3e643df83bd(); /*0x100b03e06*/
  if ( byte_101B4DF20 != 2 ) /*0x100b03e1a*/
    foldhash::seed::global::GlobalSeed::init_slow::h7823214f07caac7d(); /*0x100b04217*/
  v7 = v32; /*0x100b03e20*/
  v9 = *(_QWORD *)v33; /*0x100b03e27*/
  v10 = _mm_loadu_si128((const __m128i *)&v33[8]); /*0x100b03e2e*/
  v46 = 0; /*0x100b03e3a*/
  v39 = anon_0f4958e580c48b75b8f6e2e6da3e4224_10; /*0x100b03e46*/
  v40 = 0u; /*0x100b03e51*/
  v41 = 0; /*0x100b03e67*/
  v11 = 0; /*0x100b03e6b*/
  v12 = 0; /*0x100b03e6e*/
  *v6 = 0; /*0x100b03e71*/
  if ( v8 ) /*0x100b03e78*/
  {
LABEL_9:
    v13 = v8; /*0x100b03f04*/
    v14 = v9; /*0x100b03f0c*/
    v15 = v6; /*0x100b03f0f*/
    v23 = v10; /*0x100b03f12*/
    v16 = v11; /*0x100b03f1a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v13, 1); /*0x100b03f1d*/
    v11 = v16; /*0x100b03f22*/
    v9 = v14; /*0x100b03f25*/
    v10 = _mm_load_si128(&v23); /*0x100b03f28*/
  }
LABEL_10:
  if ( v27 != 0x8000000000000016LL ) /*0x100b03f41*/
  {
    v6 = (_BYTE *)v9; /*0x100b04037*/
    goto LABEL_14; /*0x100b04037*/
  }
  v26 = v41; /*0x100b03f4b*/
  v25 = v40; /*0x100b03f65*/
  v24 = (__int64)v39; /*0x100b03f6c*/
  v17 = _mm_load_si128(&v46); /*0x100b03f73*/
  v31 = v17; /*0x100b03f78*/
  v38[0].i64[0] = v7; /*0x100b03f80*/
  v38[0].i64[1] = v9; /*0x100b03f87*/
  v38[1] = v10; /*0x100b03f8e*/
  v38[2].i64[0] = v12; /*0x100b03f96*/
  v38[2].i64[1] = (__int64)v39; /*0x100b03f9d*/
  v38[3] = v40; /*0x100b03fa4*/
  v38[4].i64[0] = v41; /*0x100b03fb2*/
  v38[4].i64[1] = v28; /*0x100b03fc0*/
  v38[5] = v17; /*0x100b03fdc*/
  v38[6].i64[0] = 16; /*0x100b03fe3*/
  v38[6].i8[8] = v11; /*0x100b03fee*/
  rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(&v39, v38, 5, 0); /*0x100b04007*/
  result = 0x8000000000000016LL; /*0x100b0400c*/
  if ( v39 == (void *)0x8000000000000016LL ) /*0x100b0401a*/
  {
    qmemcpy(a1, v38, 0x70u); /*0x100b0402f*/
  }
  else
  {
    v37 = v45; /*0x100b04135*/
    v36 = v44; /*0x100b04140*/
    v35 = v43; /*0x100b0414b*/
    v34 = v42; /*0x100b04156*/
    *(_QWORD *)&v33[16] = v41; /*0x100b04161*/
    *(__m128i *)v33 = v40; /*0x100b0417b*/
    v32 = (__int64)v39; /*0x100b04182*/
    v46.i64[0] = (__int64)&v32; /*0x100b04190*/
    v46.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100b0419b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v29, &unk_101907B75, &v46); /*0x100b041b1*/
    v46 = v29; /*0x100b041c4*/
    v47 = v30; /*0x100b041d3*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v32); /*0x100b041de*/
    a1[1].i64[1] = v47; /*0x100b041e7*/
    *(__m128i *)((char *)a1 + 8) = v46; /*0x100b041f7*/
    a1->i64[0] = 10; /*0x100b041fb*/
    a1[6].i8[8] = 3; /*0x100b04202*/
    return core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v38, *(double *)v17.i64); /*0x100b0420d*/
  }
  return result; /*0x100b0411f*/
}