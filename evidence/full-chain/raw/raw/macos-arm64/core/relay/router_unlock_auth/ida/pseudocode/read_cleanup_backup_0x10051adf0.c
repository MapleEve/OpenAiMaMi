// __ZN13codexmate_lib4core5relay18router_unlock_auth19read_cleanup_backup @ 0x10051adf0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::router_unlock_auth::read_cleanup_backup::hdafbced71039cf9f(
        _QWORD *a1,
        _QWORD *a2,
        __int64 (__fastcall *a3)(),
        __int64 a4,
        __int64 a5)
{
  __int64 (__fastcall *v6)(); // r14
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __int64 (__fastcall *v13)(); // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  _BYTE *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int8 v20; // bl
  __int64 v21; // rax
  _QWORD __src[22]; // [rsp+0h] [rbp-220h] BYREF
  _QWORD v24[3]; // [rsp+B0h] [rbp-170h] BYREF
  _QWORD v25[2]; // [rsp+C8h] [rbp-158h] BYREF
  _QWORD __dst[22]; // [rsp+D8h] [rbp-148h] BYREF
  __int64 v27; // [rsp+188h] [rbp-98h] BYREF
  __int64 v28; // [rsp+190h] [rbp-90h]
  __int64 v29; // [rsp+198h] [rbp-88h]
  _QWORD v30[4]; // [rsp+1A0h] [rbp-80h] BYREF
  __int64 v31; // [rsp+1C0h] [rbp-60h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+1C8h] [rbp-58h]
  __int64 (__fastcall *v33)(); // [rsp+1D0h] [rbp-50h]
  __int64 v34; // [rsp+1D8h] [rbp-48h]
  int v35; // [rsp+1E4h] [rbp-3Ch]
  __int64 v36; // [rsp+1E8h] [rbp-38h]
  __int64 v37; // [rsp+1F0h] [rbp-30h]

  v25[0] = a4; /*0x10051ae0d*/
  v25[1] = a5; /*0x10051ae14*/
  std::fs::read::inner::h6a30c15c40add28b(&v31, a2, a3); /*0x10051ae1f*/
  v6 = v32; /*0x10051ae28*/
  if ( __OFSUB__(-v31, 1) ) /*0x10051ae2f*/
  {
    v30[0] = v32; /*0x10051ae38*/
    __dst[0] = v25; /*0x10051ae43*/
    __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10051ae51*/
    __dst[2] = v30; /*0x10051ae5c*/
    __dst[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10051ae6a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C1305, __dst); /*0x10051ae86*/
    v7 = __src[0]; /*0x10051ae8b*/
    v8 = __src[1]; /*0x10051ae92*/
    v9 = __src[2]; /*0x10051ae99*/
    if ( (v30[0] & 3) == 1 ) /*0x10051aeac*/
    {
      v36 = v30[0] - 1LL; /*0x10051aeb2*/
      v37 = *(_QWORD *)(v30[0] - 1LL); /*0x10051aeba*/
      v10 = *(_QWORD *)(v30[0] + 7LL); /*0x10051aebe*/
      if ( *(_QWORD *)v10 ) /*0x10051aec2*/
        (*(void (__fastcall **)(__int64))v10)(v37); /*0x10051aece*/
      v11 = *(_QWORD *)(v10 + 8); /*0x10051aed4*/
      if ( v11 ) /*0x10051aedb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v11, *(_QWORD *)(v10 + 16)); /*0x10051aee1*/
      *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24, 8); /*0x10051aef4*/
    }
    a1[1] = v7; /*0x10051aef9*/
    a1[2] = v8; /*0x10051aefe*/
    a1[3] = v9; /*0x10051af03*/
    *a1 = 10; /*0x10051af08*/
    return *(double *)v12.i64; /*0x10051af10*/
  }
  v37 = v31; /*0x10051af15*/
  v13 = v33; /*0x10051af19*/
  codexmate_lib::core::relay::router_unlock_auth::validate_user_owned_auth_backup::h8180e94bd907e42f(&v27, v32, v33); /*0x10051af2a*/
  if ( v27 == 0x8000000000000000LL ) /*0x10051af43*/
  {
    a1[1] = v37; /*0x10051af49*/
    a1[2] = v6; /*0x10051af4e*/
    a1[3] = v13; /*0x10051af53*/
    *a1 = 11; /*0x10051af58*/
    return *(double *)v12.i64; /*0x10051af60*/
  }
  v36 = v27; /*0x10051af65*/
  v31 = (__int64)v6; /*0x10051af69*/
  v32 = v13; /*0x10051af6d*/
  v33 = nullptr; /*0x10051af71*/
  v34 = 0; /*0x10051af79*/
  serde_json::de::from_trait::ha73f8db442141d1f(__dst, &v31); /*0x10051af8f*/
  if ( LOBYTE(__dst[0]) == 6 ) /*0x10051af9b*/
  {
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&__dst[1]); /*0x10051afa8*/
    goto LABEL_13; /*0x10051afa8*/
  }
  v30[3] = __dst[3]; /*0x10051b0be*/
  v30[2] = __dst[2]; /*0x10051b0c9*/
  v30[1] = __dst[1]; /*0x10051b0db*/
  v30[0] = __dst[0]; /*0x10051b0df*/
  v16 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10051b0f3*/
                   "aimami_router_unlock_authlast_refresh",
                   25,
                   v30);
  if ( v16 && *v16 == 1 && v16[1] ) /*0x10051b102*/
    goto LABEL_31; /*0x10051b106*/
  v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10051b11c*/
          "OPENAI_API_KEY",
          14,
          v30);
  if ( v17 /*0x10051b13c*/
    && *(_BYTE *)v17 == 3
    && (v18 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                *(_QWORD *)(v17 + 16),
                *(_QWORD *)(v17 + 24)),
        v19 >= 0x17) )
  {
    v12 = _mm_or_si128( /*0x10051b481*/
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)v18), (__m128i)xmmword_1015DCAC0),
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v18 + 7)), (__m128i)xmmword_1015DCAB0));
    v20 = _mm_testz_si128(v12, v12); /*0x10051b48a*/
  }
  else
  {
    v20 = 0; /*0x10051b142*/
  }
  v21 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("tokens", 6, v30); /*0x10051b154*/
  if ( v21 && *(_BYTE *)v21 == 5 ) /*0x10051b161*/
  {
    if ( ((*(_QWORD *)(v21 + 24) == 0) & v20) == 0 ) /*0x10051b16d*/
      goto LABEL_28; /*0x10051b16d*/
LABEL_31:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v30); /*0x10051b1ca*/
    goto LABEL_54; /*0x10051b1d7*/
  }
  if ( v20 ) /*0x10051b1c8*/
    goto LABEL_31; /*0x10051b1c8*/
LABEL_28:
  serde_json::de::from_trait::hee93ab9047d5d7fd(__src, &v31); /*0x10051b16f*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x10051b193*/
  {
    __dst[1] = __src[1]; /*0x10051b1a3*/
    LOBYTE(__dst[0]) = 1; /*0x10051b1aa*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&__dst[1]); /*0x10051b1b1*/
    v35 = 0; /*0x10051b1b6*/
  }
  else
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x10051b1f2*/
    v35 = codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(__dst); /*0x10051b1ff*/
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x10051b21f*/
      *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x10051b22d*/
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x10051b24b*/
      *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x10051b259*/
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x10051b277*/
      *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x10051b285*/
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x10051b2a3*/
      *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x10051b2b1*/
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x10051b2cf*/
      *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x10051b2dd*/
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x10051b2fb*/
      *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x10051b309*/
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x10051b327*/
      *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x10051b335*/
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v30); /*0x10051b33e*/
  if ( !(_BYTE)v35 ) /*0x10051b347*/
  {
LABEL_13:
    __src[2] = v29; /*0x10051afad*/
    __src[1] = v28; /*0x10051afc9*/
    __src[0] = v27; /*0x10051afd0*/
    v31 = (__int64)a2; /*0x10051afd7*/
    v32 = a3; /*0x10051afdb*/
    __dst[0] = v25; /*0x10051afe6*/
    __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10051aff4*/
    __dst[2] = &v31; /*0x10051affb*/
    __dst[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10051b009*/
    __dst[4] = __src; /*0x10051b017*/
    __dst[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10051b025*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &unk_1017C1266, __dst); /*0x10051b041*/
    a1[3] = v24[2]; /*0x10051b04d*/
    v14 = v24[0]; /*0x10051b052*/
    a1[2] = v24[1]; /*0x10051b060*/
    a1[1] = v14; /*0x10051b065*/
    *a1 = 10; /*0x10051b06a*/
    v15 = __src[0]; /*0x10051b072*/
    if ( !__src[0] ) /*0x10051b07c*/
      goto LABEL_15; /*0x10051b07c*/
    goto LABEL_14; /*0x10051b07c*/
  }
LABEL_54:
  __src[2] = v29; /*0x10051b34d*/
  __src[1] = v28; /*0x10051b369*/
  __src[0] = v27; /*0x10051b370*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10051b385*/
  {
    v31 = (__int64)__src; /*0x10051b392*/
    v32 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10051b39d*/
    __dst[6] = 2; /*0x10051b3a1*/
    __dst[7] = "codexmate_lib::core::relay::router_unlock_auth"; /*0x10051b3b3*/
    __dst[8] = 46; /*0x10051b3ba*/
    __dst[10] = &unk_1017C12B7; /*0x10051b3cc*/
    __dst[11] = &v31; /*0x10051b3d3*/
    __dst[0] = 0; /*0x10051b3da*/
    __dst[1] = "codexmate_lib::core::relay::router_unlock_auth"; /*0x10051b3e5*/
    __dst[2] = 46; /*0x10051b3ec*/
    __dst[3] = 0; /*0x10051b3f7*/
    __dst[4] = "src/core/relay/router_unlock_auth.rs"; /*0x10051b409*/
    __dst[5] = 36; /*0x10051b410*/
    __dst[9] = 0x1A900000001LL; /*0x10051b425*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v30, __dst); /*0x10051b437*/
  }
  a1[1] = 0x8000000000000000LL; /*0x10051b446*/
  *a1 = 11; /*0x10051b44b*/
  v15 = __src[0]; /*0x10051b453*/
  if ( !__src[0] ) /*0x10051b45d*/
    goto LABEL_15; /*0x10051b45d*/
LABEL_14:
  *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], v15, 1); /*0x10051b07e*/
LABEL_15:
  if ( v37 ) /*0x10051b096*/
    *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v37, 1); /*0x10051b0a0*/
  return *(double *)v12.i64; /*0x10051b0a5*/
}