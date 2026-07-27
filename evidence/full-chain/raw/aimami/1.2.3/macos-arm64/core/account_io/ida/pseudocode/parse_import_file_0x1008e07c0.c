// __ZN13codexmate_lib4core10account_io17parse_import_file @ 0x1008e07c0 | 基线 same-set
double __fastcall codexmate_lib::core::account_io::parse_import_file::hafe1dc7bc293604c(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  void *v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r12
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  void *v25; // rax
  _QWORD v27[12]; // [rsp+8h] [rbp-338h] BYREF
  _QWORD v28[12]; // [rsp+68h] [rbp-2D8h] BYREF
  _QWORD v29[3]; // [rsp+C8h] [rbp-278h] BYREF
  _QWORD v30[3]; // [rsp+E0h] [rbp-260h] BYREF
  _QWORD v31[3]; // [rsp+F8h] [rbp-248h] BYREF
  _QWORD v32[3]; // [rsp+110h] [rbp-230h] BYREF
  _QWORD v33[3]; // [rsp+128h] [rbp-218h] BYREF
  _QWORD v34[3]; // [rsp+140h] [rbp-200h] BYREF
  _QWORD v35[3]; // [rsp+158h] [rbp-1E8h] BYREF
  _QWORD v36[12]; // [rsp+170h] [rbp-1D0h] BYREF
  _QWORD v37[14]; // [rsp+1D0h] [rbp-170h] BYREF
  __int64 v38; // [rsp+240h] [rbp-100h]
  __int64 v39; // [rsp+248h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+250h] [rbp-F0h]
  __int64 v41; // [rsp+258h] [rbp-E8h]
  int v42; // [rsp+264h] [rbp-DCh] BYREF
  _QWORD __src[19]; // [rsp+268h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+300h] [rbp-40h] BYREF
  __int64 v45; // [rsp+308h] [rbp-38h]
  unsigned __int64 v46; // [rsp+310h] [rbp-30h]

  std::sys::fs::symlink_metadata::hd69903fe66faddbd(__src, a2, a3); /*0x1008e07e4*/
  if ( LODWORD(__src[0]) == 1 ) /*0x1008e07f0*/
  {
    v4 = __src[1]; /*0x1008e07f2*/
    __dst[1] = 2; /*0x1008e07f9*/
    __dst[2] = v4; /*0x1008e0801*/
LABEL_8:
    *__dst = 0x8000000000000000LL; /*0x1008e0911*/
    return *(double *)v16.i64; /*0x1008e091b*/
  }
  if ( (__src[1] & 0xF00000000000LL) != 0x800000000000LL ) /*0x1008e082b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, a2); /*0x1008e089b*/
    v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x1008e08aa*/
    if ( !v6 ) /*0x1008e08b2*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x1008e11db*/
    qmemcpy(v6, "Backup path must be a regular file", 34); /*0x1008e08ec*/
    __dst[1] = 9; /*0x1008e08f5*/
    __dst[2] = 34; /*0x1008e08fd*/
    __dst[3] = v6; /*0x1008e0905*/
    __dst[4] = 34; /*0x1008e0909*/
    goto LABEL_8; /*0x1008e0909*/
  }
  LODWORD(v37[0]) = 0; /*0x1008e082d*/
  WORD2(v37[0]) = 438; /*0x1008e0837*/
  *(_DWORD *)((char *)v37 + 6) = 1; /*0x1008e0840*/
  WORD1(v37[1]) = 0; /*0x1008e084a*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(__src, v37, a2, a3); /*0x1008e086e*/
  if ( LOBYTE(__src[0]) ) /*0x1008e087a*/
  {
    v5 = __src[1]; /*0x1008e0880*/
    __dst[1] = 2; /*0x1008e0887*/
    __dst[2] = v5; /*0x1008e088f*/
    goto LABEL_8; /*0x1008e0899*/
  }
  v7 = HIDWORD(__src[0]); /*0x1008e0930*/
  v42 = HIDWORD(__src[0]); /*0x1008e0937*/
  std::fs::File::metadata::h408606eff73040af(__src, &v42); /*0x1008e094c*/
  if ( LODWORD(__src[0]) == 1 ) /*0x1008e0958*/
  {
    v8 = __src[1]; /*0x1008e095a*/
    __dst[1] = 2; /*0x1008e0961*/
    v9 = 2; /*0x1008e0969*/
LABEL_17:
    __dst[v9] = v8; /*0x1008e0a9a*/
    *__dst = 0x8000000000000000LL; /*0x1008e0aa8*/
    close_NOCANCEL(v7); /*0x1008e0aae*/
    return *(double *)v16.i64; /*0x1008e0ab3*/
  }
  if ( (__src[1] & 0xF00000000000LL) != 0x800000000000LL ) /*0x1008e097d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, &v42); /*0x1008e0a16*/
    v11 = 34; /*0x1008e0a1b*/
    v12 = 1; /*0x1008e0a21*/
    v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x1008e0a31*/
    if ( v13 ) /*0x1008e0a39*/
    {
      qmemcpy(v13, "Backup path must be a regular file", 34); /*0x1008e0a73*/
      __dst[1] = 9; /*0x1008e0a7c*/
      __dst[2] = 34; /*0x1008e0a84*/
      __dst[3] = v13; /*0x1008e0a8c*/
      v8 = 34; /*0x1008e0a90*/
      v9 = 4; /*0x1008e0a95*/
      goto LABEL_17; /*0x1008e0a95*/
    }
LABEL_49:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v11); /*0x1008e1169*/
  }
  if ( __src[13] > 0xA00000u ) /*0x1008e098e*/
  {
    v37[0] = __src[13]; /*0x1008e0994*/
    __src[0] = v37; /*0x1008e09a2*/
    __src[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e09b0*/
    __src[2] = ""; /*0x1008e09be*/
    __src[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e09c5*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v35, &unk_1017C6D4E, __src); /*0x1008e09e1*/
    __dst[4] = v35[2]; /*0x1008e09ed*/
    v10 = v35[0]; /*0x1008e09f1*/
    __dst[3] = v35[1]; /*0x1008e09ff*/
    __dst[2] = v10; /*0x1008e0a03*/
    v8 = 9; /*0x1008e0a07*/
    v9 = 1; /*0x1008e0a0c*/
    goto LABEL_17; /*0x1008e0a11*/
  }
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(__src, __src[13], 0, 1, 1); /*0x1008e0acc*/
  v12 = __src[1]; /*0x1008e0ad1*/
  if ( LOBYTE(__src[0]) ) /*0x1008e0adf*/
  {
    v11 = __src[2]; /*0x1008e1162*/
    goto LABEL_49; /*0x1008e1162*/
  }
  v44 = __src[1]; /*0x1008e0aec*/
  v45 = __src[2]; /*0x1008e0af0*/
  v46 = 0; /*0x1008e0af4*/
  LODWORD(__src[2]) = v7; /*0x1008e0afc*/
  __src[0] = 10485761; /*0x1008e0b03*/
  __src[1] = 10485761; /*0x1008e0b0e*/
  if ( (std::io::default_read_to_end::h6c36c6ac05e6361a(__src, &v44, 0) & 1) != 0 ) /*0x1008e0b2d*/
  {
    __dst[1] = 2; /*0x1008e0b2f*/
    __dst[2] = v14; /*0x1008e0b37*/
    *__dst = 0x8000000000000000LL; /*0x1008e0b45*/
    close_NOCANCEL(LODWORD(__src[2])); /*0x1008e0b4e*/
    goto LABEL_33; /*0x1008e0b53*/
  }
  close_NOCANCEL(LODWORD(__src[2])); /*0x1008e0b5e*/
  if ( v46 > 0xA00000 ) /*0x1008e0b6e*/
  {
    __src[0] = ""; /*0x1008e0b77*/
    __src[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e0b85*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v34, &unk_1017C6D29, __src); /*0x1008e0ba1*/
    __dst[4] = v34[2]; /*0x1008e0bad*/
    v15 = v34[0]; /*0x1008e0bb1*/
    __dst[3] = v34[1]; /*0x1008e0bbf*/
    __dst[2] = v15; /*0x1008e0bc3*/
    __dst[1] = 9; /*0x1008e0bc7*/
    *__dst = 0x8000000000000000LL; /*0x1008e0bd9*/
    goto LABEL_33; /*0x1008e0bdc*/
  }
  _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::hce21fc8cdee71057(__src, v45); /*0x1008e0bec*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::h922405f54faf08af( /*0x1008e0c06*/
    &v39,
    __src,
    &__src[4]);
  v36[0] = v45; /*0x1008e0c13*/
  v36[1] = v46; /*0x1008e0c1a*/
  v36[2] = 0; /*0x1008e0c21*/
  v36[3] = 0; /*0x1008e0c2c*/
  serde_json::de::from_trait::he4a2256f6dcef84f(__src, v36); /*0x1008e0c48*/
  if ( __OFSUB__(-__src[0], 1) ) /*0x1008e0c61*/
  {
    codexmate_lib::core::account_io::parse_import_file::_$u7b$$u7b$closure$u7d$$u7d$::hbbe92ed43b1fbf90(v36, __src[1]); /*0x1008e0c74*/
    qmemcpy(v27, v36, sizeof(v27)); /*0x1008e0c8f*/
    qmemcpy(v28, v27, sizeof(v28)); /*0x1008e0ca4*/
    qmemcpy(__dst + 1, v28, 0x60u); /*0x1008e0cb3*/
    *__dst = 0x8000000000000000LL; /*0x1008e0cb6*/
    goto LABEL_31; /*0x1008e0cb9*/
  }
  qmemcpy(v27, &__src[1], sizeof(v27)); /*0x1008e0cd4*/
  qmemcpy(v28, v27, sizeof(v28)); /*0x1008e0ced*/
  qmemcpy(&v37[1], v28, 0x60u); /*0x1008e0cff*/
  v37[0] = __src[0]; /*0x1008e0d02*/
  v37[13] = __src[13]; /*0x1008e0d09*/
  if ( v37[2] != 22 /*0x1008e0d43*/
    || (v16 = _mm_or_si128(
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v37[1]), (__m128i)xmmword_1016763B0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v37[1] + 6LL)), (__m128i)xmmword_1016763A0)),
        !_mm_testz_si128(v16, v16)) )
  {
    __src[0] = v37; /*0x1008e0d50*/
    __src[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e0d5e*/
    __src[2] = &off_10196D928; /*0x1008e0d6c*/
    __src[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e0d7a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v33, &unk_1017C6D04, __src); /*0x1008e0d96*/
    __dst[4] = v33[2]; /*0x1008e0da2*/
    v17 = v33[0]; /*0x1008e0da6*/
    v18 = v33[1]; /*0x1008e0dad*/
LABEL_28:
    __dst[3] = v18; /*0x1008e0db4*/
    __dst[2] = v17; /*0x1008e0db8*/
    __dst[1] = 9; /*0x1008e0dbc*/
LABEL_29:
    *__dst = 0x8000000000000000LL; /*0x1008e0dc4*/
LABEL_30:
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_io..ExportFile$GT$::h73a7f10c67007276(v37); /*0x1008e0dc7*/
LABEL_31:
    if ( v39 ) /*0x1008e0ddd*/
      *(double *)v16.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v39, 1); /*0x1008e0deb*/
    goto LABEL_33; /*0x1008e0deb*/
  }
  if ( LODWORD(__src[13]) != 1 ) /*0x1008e0e13*/
  {
    __src[0] = &v37[13]; /*0x1008e0e98*/
    __src[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1008e0ea6*/
    __src[2] = &dword_1015FFB3C; /*0x1008e0eb4*/
    __src[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1008e0ebb*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v32, &unk_1017C6CC7, __src); /*0x1008e0ed7*/
    __dst[4] = v32[2]; /*0x1008e0ee3*/
    v17 = v32[0]; /*0x1008e0ee7*/
    v18 = v32[1]; /*0x1008e0eee*/
    goto LABEL_28; /*0x1008e0ef5*/
  }
  if ( v37[8] > 0x1F4u ) /*0x1008e0e22*/
  {
    v36[0] = v37[8]; /*0x1008e0e28*/
    __src[0] = v36; /*0x1008e0e2f*/
    __src[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e0e3d*/
    __src[2] = &unk_1016764F8; /*0x1008e0e4b*/
    __src[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e0e52*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v31, &unk_1017C6C97, __src); /*0x1008e0e6e*/
    __dst[4] = v31[2]; /*0x1008e0e7a*/
    v17 = v31[0]; /*0x1008e0e7e*/
    v18 = v31[1]; /*0x1008e0e85*/
    goto LABEL_28; /*0x1008e0e8c*/
  }
  if ( !v37[8] ) /*0x1008e0efd*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v37[13], v29); /*0x1008e106c*/
    v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x1008e107b*/
    if ( !v25 ) /*0x1008e1083*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x1008e11ea*/
    qmemcpy(v25, "Backup contains no accounts", 27); /*0x1008e10af*/
    __dst[1] = 9; /*0x1008e10b9*/
    __dst[2] = 27; /*0x1008e10c1*/
    __dst[3] = v25; /*0x1008e10c9*/
    __dst[4] = 27; /*0x1008e10cd*/
    goto LABEL_29; /*0x1008e10d5*/
  }
  if ( HIDWORD(__src[13]) != v37[8] ) /*0x1008e0f0a*/
  {
    v36[0] = v37[8]; /*0x1008e10e1*/
    __src[0] = (char *)&v37[13] + 4; /*0x1008e10e8*/
    __src[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1008e10f6*/
    __src[2] = v36; /*0x1008e10fd*/
    __src[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e110b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v30, &unk_1017C6C62, __src); /*0x1008e1127*/
    __dst[4] = v30[2]; /*0x1008e1133*/
    v17 = v30[0]; /*0x1008e1137*/
    v18 = v30[1]; /*0x1008e113e*/
    goto LABEL_28; /*0x1008e1145*/
  }
  codexmate_lib::core::account_io::validate_import_display_fields::ha74f21d7ef2f2eaf(__src, v37); /*0x1008e0f1e*/
  if ( LODWORD(__src[0]) != 11 ) /*0x1008e0f2a*/
  {
    qmemcpy(__dst + 1, __src, 0x60u); /*0x1008e115a*/
    goto LABEL_29; /*0x1008e115a*/
  }
  v19 = v37[8]; /*0x1008e0f30*/
  v38 = std::thread::local::LocalKey$LT$T$GT$::with::h2d85312d63c74f41(&off_10196D920); /*0x1008e0f43*/
  v21 = v20; /*0x1008e0f4a*/
  hashbrown::raw::RawTableInner::fallible_with_capacity::hdcfda39df8718338(__src, 24, v19, 1); /*0x1008e0f61*/
  v36[3] = __src[3]; /*0x1008e0f6d*/
  v36[2] = __src[2]; /*0x1008e0f7b*/
  v36[1] = __src[1]; /*0x1008e0f90*/
  v36[0] = __src[0]; /*0x1008e0f97*/
  v36[4] = v38; /*0x1008e0fa5*/
  v36[5] = v21; /*0x1008e0fac*/
  v28[0] = v37[7]; /*0x1008e0fc8*/
  v28[1] = v37[7] + 416LL * v37[8]; /*0x1008e0fcf*/
  v22 = core::iter::traits::iterator::Iterator::try_fold::hb41fffcec3635719(v28, v36); /*0x1008e0fe4*/
  if ( v22 ) /*0x1008e0fec*/
  {
    v27[0] = v22; /*0x1008e0ff2*/
    v27[1] = v23; /*0x1008e0ff9*/
    __src[0] = v27; /*0x1008e1000*/
    __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e100e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v29, &unk_1017C6C38, __src); /*0x1008e102a*/
    __dst[4] = v29[2]; /*0x1008e1036*/
    v24 = v29[0]; /*0x1008e103a*/
    __dst[3] = v29[1]; /*0x1008e1048*/
    __dst[2] = v24; /*0x1008e104c*/
    __dst[1] = 9; /*0x1008e1050*/
    *__dst = 0x8000000000000000LL; /*0x1008e1058*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(v36); /*0x1008e1062*/
    goto LABEL_30; /*0x1008e1067*/
  }
  qmemcpy(__src, v37, 0x70u); /*0x1008e118c*/
  __src[16] = v41; /*0x1008e1196*/
  __src[15] = v40; /*0x1008e11a8*/
  __src[14] = v39; /*0x1008e11ac*/
  memcpy(__dst, __src, 0x88u); /*0x1008e11bb*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(v36); /*0x1008e11c7*/
LABEL_33:
  if ( v44 ) /*0x1008e0df7*/
    *(double *)v16.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x1008e0e06*/
  return *(double *)v16.i64; /*0x1008e091e*/
}