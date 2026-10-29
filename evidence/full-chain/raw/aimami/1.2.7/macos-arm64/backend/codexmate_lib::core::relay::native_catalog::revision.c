// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_catalog::revision::h7452ceaa93ef94cc; addr: 0x1005d3c00; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// B-level evidence identity verified; module codexmate_lib/core/relay/native_catalog; range 0x1005d3c00-0x1005d3fb9; sha f019dbc8e267; session <审计会话>; method same-callee-string-number-sets; decompiler-type-variant; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
// A-level native_catalog::revision sha256 of build_relay_models with empty official list for router-catalog-config::RT-01; range 0x1005d3c00-0x1005d3fb9; sha f019dbc8e267; session <审计会话>; not gate promotion
__int64 __fastcall codexmate_lib::core::relay::native_catalog::revision::h7452ceaa93ef94cc(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  size_t v9; // r12
  const void *v10; // rsi
  const void *v11; // r13
  __int64 v12; // r12
  unsigned __int64 v13; // rbx
  __m128i si128; // xmm0
  __m128i v15; // xmm2
  __int64 v16; // rbx
  _OWORD v18[3]; // [rsp+10h] [rbp-170h] BYREF
  __int64 v19; // [rsp+40h] [rbp-140h]
  unsigned __int64 v20; // [rsp+48h] [rbp-138h]
  _QWORD v21[14]; // [rsp+58h] [rbp-128h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-B8h]
  __m128i v23[7]; // [rsp+D0h] [rbp-B0h] BYREF
  _QWORD v24[8]; // [rsp+140h] [rbp-40h] BYREF

  codexmate_lib::core::relay::codex_catalog::build_relay_models::h361f5e7df4a6652a( /*0x1005d3c29*/
    (unsigned int)v24,
    a2,
    a3,
    a4,
    a5,
    8,
    0);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, a2, v5); /*0x1005d3c2e*/
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1005d3c3d*/
  if ( !v6 ) /*0x1005d3c45*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1005d3f66*/
  v23[0].i64[0] = 128; /*0x1005d3c4b*/
  v23[0].i64[1] = v6; /*0x1005d3c56*/
  v23[1].i64[0] = 0; /*0x1005d3c5d*/
  v21[0] = v23; /*0x1005d3c6f*/
  v7 = serde_core::ser::Serializer::collect_seq::he6ac9f50b6d06413(v21, v24); /*0x1005d3c86*/
  if ( v7 ) /*0x1005d3c8c*/
  {
    if ( v23[0].i64[0] ) /*0x1005d3f77*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23[0].i64[1], v23[0].i64[0], 1); /*0x1005d3f85*/
LABEL_19:
    v23[0].i64[0] = v7; /*0x1005d3f8a*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016FD675, 21, v23, &off_101AACF78, &off_101AAC640); /*0x1005d3fb2*/
  }
  v22 = a1; /*0x1005d3c92*/
  v7 = v23[0].i64[1]; /*0x1005d3caa*/
  v8 = v23[0].i64[0]; /*0x1005d3caa*/
  if ( v23[0].i64[0] == 0x8000000000000000LL ) /*0x1005d3cb8*/
    goto LABEL_19; /*0x1005d3cb8*/
  v9 = v23[1].u64[0]; /*0x1005d3cbe*/
  v21[0] = 0xBB67AE856A09E667LL; /*0x1005d3d35*/
  v21[1] = 0xA54FF53A3C6EF372LL; /*0x1005d3d46*/
  v21[2] = 0x9B05688C510E527FLL; /*0x1005d3d57*/
  v21[3] = 0x5BE0CD191F83D9ABLL; /*0x1005d3d68*/
  memset(&v21[4], 0, 73); /*0x1005d3d6f*/
  if ( v23[1].i64[0] >= 0x40uLL ) /*0x1005d3d7e*/
  {
    v21[4] = (unsigned __int64)v23[1].i64[0] >> 6; /*0x1005d3d8f*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v21, v23[0].i64[1]); /*0x1005d3da0*/
    v11 = (const void *)(v7 + (v9 & 0x7FFFFFFFFFFFFFC0LL)); /*0x1005d3da8*/
    v9 &= 0x3Fu; /*0x1005d3dab*/
    v10 = v11; /*0x1005d3db2*/
  }
  else
  {
    v10 = (const void *)v23[0].i64[1]; /*0x1005d3d83*/
  }
  memcpy(&v21[5], v10, v9); /*0x1005d3db8*/
  LOBYTE(v21[13]) = v9; /*0x1005d3dbd*/
  qmemcpy(v23, v21, sizeof(v23)); /*0x1005d3dd7*/
  v12 = v23[6].u8[8]; /*0x1005d3de1*/
  v13 = _byteswap_uint64((v23[2].i64[0] << 9) | (8 * (unsigned int)v23[6].u8[8])); /*0x1005d3dfc*/
  v23[2].i8[v23[6].u8[8] + 8] = 0x80; /*0x1005d3dff*/
  if ( (_DWORD)v12 == 63 || (__bzero((char *)&v23[2].u64[1] + v12 + 1, v12 ^ 0x3F), ((unsigned int)v12 ^ 0x38) <= 7) ) /*0x1005d3e2d*/
  {
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v23, &v23[2].u64[1]); /*0x1005d3e3e*/
    memset(v18, 0, sizeof(v18)); /*0x1005d3e57*/
    v19 = 0; /*0x1005d3e5f*/
    v20 = v13; /*0x1005d3e6a*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v23, v18); /*0x1005d3e84*/
  }
  else
  {
    v23[6].i64[0] = v13; /*0x1005d3e8b*/
    sha2::sha256::compress256::hc74ebc2fd6208bb9(v23, &v23[2].u64[1]); /*0x1005d3e9e*/
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1016F2470); /*0x1005d3ea3*/
  v15 = _mm_shuffle_epi8(_mm_load_si128(&v23[1]), si128); /*0x1005d3ec0*/
  v23[0] = _mm_shuffle_epi8(_mm_load_si128(v23), si128); /*0x1005d3ec5*/
  v23[1] = v15; /*0x1005d3ecd*/
  if ( v8 ) /*0x1005d3ed8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v8, 1); /*0x1005d3ee5*/
  v21[0] = v23; /*0x1005d3ef1*/
  v21[1] = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::h7c96d4390bb614f5; /*0x1005d3eff*/
  v16 = v22; /*0x1005d3f14*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v22, &unk_1018F4375, v21); /*0x1005d3f1e*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd649dddbb4e075e3(v24); /*0x1005d3f27*/
  if ( v24[0] ) /*0x1005d3f33*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[1], 32LL * v24[0], 8); /*0x1005d3f42*/
  return v16; /*0x1005d3f4a*/
}
