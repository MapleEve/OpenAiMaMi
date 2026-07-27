// __ZN13codexmate_lib8platform9debug_log18install_panic_hook28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10036a400 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::debug_log::install_panic_hook::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::he5234a36472b4551(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  void (__fastcall *v6)(__m128i *, __int64); // r15
  __m128i v7; // xmm0
  signed __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  __m128i v11; // xmm0
  void *v12; // rax
  const void *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 result; // rax
  __int64 v17; // [rsp+8h] [rbp-D8h] BYREF
  _QWORD v18[4]; // [rsp+10h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-B0h]
  __int64 v20; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-A0h]
  __int64 v22; // [rsp+48h] [rbp-98h]
  _QWORD v23[3]; // [rsp+50h] [rbp-90h] BYREF
  const void *v24; // [rsp+68h] [rbp-78h]
  __m128i v25; // [rsp+70h] [rbp-70h] BYREF
  __m128i *v26; // [rsp+80h] [rbp-60h]
  __int64 (__fastcall *v27)(); // [rsp+88h] [rbp-58h]
  __int64 *v28; // [rsp+90h] [rbp-50h]
  __int64 (__fastcall *v29)(); // [rsp+98h] [rbp-48h]
  __m128i v30; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-30h]

  v3 = (__int64 *)a2[2]; /*0x10036a41a*/
  v4 = v3[1]; /*0x10036a421*/
  v17 = *v3; /*0x10036a425*/
  v18[0] = v4; /*0x10036a42c*/
  v30.i32[0] = *((_DWORD *)v3 + 4); /*0x10036a436*/
  v25.i64[0] = (__int64)&v17; /*0x10036a440*/
  v25.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10036a44b*/
  v26 = &v30; /*0x10036a453*/
  v27 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10036a45e*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v23, &unk_1017B8B96, &v25); /*0x10036a474*/
  v5 = *a2; /*0x10036a479*/
  v6 = *(void (__fastcall **)(__m128i *, __int64))(a2[1] + 24); /*0x10036a480*/
  v6(&v25, *a2); /*0x10036a48b*/
  v7 = _mm_xor_si128(_mm_load_si128(&v25), (__m128i)xmmword_1015E36F0); /*0x10036a493*/
  if ( !_mm_testz_si128(v7, v7) ) /*0x10036a4a0*/
  {
    v10 = v5; /*0x10036a4c6*/
    v6(&v25, v5); /*0x10036a4c9*/
    v11 = _mm_xor_si128(_mm_load_si128(&v25), (__m128i)xmmword_1015E3700); /*0x10036a4d1*/
    if ( _mm_testz_si128(v11, v11) ) /*0x10036a4d9*/
    {
      v10 = v5; /*0x10036a4e4*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v25, v5); /*0x10036a4e7*/
      if ( !__OFSUB__(0, v25.i64[0]) ) /*0x10036a4f2*/
        goto LABEL_14; /*0x10036a4f2*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v25, v10); /*0x10036a4fb*/
    v8 = 24; /*0x10036a500*/
    v9 = 1; /*0x10036a506*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x10036a516*/
    if ( v12 ) /*0x10036a51e*/
    {
      qmemcpy(v12, "non-string panic payload", 24); /*0x10036a546*/
      v30.i64[0] = 24; /*0x10036a549*/
      v30.i64[1] = (__int64)v12; /*0x10036a551*/
      v31 = 24; /*0x10036a555*/
      goto LABEL_15; /*0x10036a560*/
    }
    goto LABEL_4; /*0x10036a51e*/
  }
  v8 = *(_QWORD *)(v5 + 8); /*0x10036a4a2*/
  if ( v8 < 0 ) /*0x10036a4a9*/
  {
    v9 = 0; /*0x10036a4af*/
    goto LABEL_4; /*0x10036a4af*/
  }
  v13 = *(const void **)v5; /*0x10036a562*/
  if ( !v8 ) /*0x10036a566*/
  {
    v15 = 1; /*0x10036a596*/
    goto LABEL_13; /*0x10036a596*/
  }
  v24 = *(const void **)v5; /*0x10036a568*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v25, v13); /*0x10036a56c*/
  v9 = 1; /*0x10036a571*/
  v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x10036a57f*/
  if ( !v14 ) /*0x10036a587*/
LABEL_4:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x10036a4b2*/
  v15 = v14; /*0x10036a58d*/
  v13 = v24; /*0x10036a590*/
LABEL_13:
  memcpy((void *)v15, v13, v8); /*0x10036a59c*/
  v25.i64[0] = v8; /*0x10036a5a7*/
  v25.i64[1] = v15; /*0x10036a5ab*/
  v26 = (__m128i *)v8; /*0x10036a5af*/
LABEL_14:
  v31 = (__int64)v26; /*0x10036a5b7*/
  v30 = v25; /*0x10036a5cb*/
LABEL_15:
  std::backtrace::Backtrace::force_capture::h94c726e92871db4e(&v17); /*0x10036a5cf*/
  v25.i64[0] = (__int64)v23; /*0x10036a5e5*/
  v25.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10036a5f0*/
  v26 = &v30; /*0x10036a5f4*/
  v27 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10036a5f8*/
  v28 = &v17; /*0x10036a5fc*/
  v29 = _$LT$std..backtrace..Backtrace$u20$as$u20$core..fmt..Display$GT$::fmt::h8097c44bc68d8e4f; /*0x10036a607*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v20, &unk_1017BD3D0, &v25); /*0x10036a61d*/
  if ( !codexmate_lib::platform::debug_log::CRASH_LOG_PATH::h320329a3baf7598c ) /*0x10036a62c*/
    codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc(&unk_1019FF228, v21, v22); /*0x10036a646*/
  if ( v20 ) /*0x10036a655*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x10036a663*/
  result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(a1[1] + 40LL))(*a1, a2); /*0x10036a672*/
  if ( (unsigned int)v17 >= 2 ) /*0x10036a67c*/
  {
    result = v19; /*0x10036a67e*/
    if ( v19 ) /*0x10036a688*/
    {
      if ( v19 == 2 ) /*0x10036a68e*/
        goto LABEL_24; /*0x10036a68e*/
      if ( v19 != 3 ) /*0x10036a694*/
        core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x10036a6fb*/
          &anon_3ce6d1417794db0febde534c64082f90_385,
          121,
          &anon_3ce6d1417794db0febde534c64082f90_387);
    }
    result = core::ptr::drop_in_place$LT$std..backtrace..Capture$GT$::ha6c440799953121f(v18); /*0x10036a69d*/
  }
LABEL_24:
  if ( v30.i64[0] ) /*0x10036a6a9*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30.i64[1], v30.i64[0], 1); /*0x10036a6b4*/
  if ( v23[0] ) /*0x10036a6c3*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23[1], v23[0], 1); /*0x10036a6d1*/
  return result; /*0x10036a6d6*/
}