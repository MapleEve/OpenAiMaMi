// __ZN13codexmate_lib4core5relay2io14export_to_file @ 0x100523f60 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::io::export_to_file::ha6954daba252f349(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128i a7)
{
  __int64 v7; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned __int64 v12; // r14
  size_t v13; // rax
  __int64 *v14; // rax
  __int64 v15; // r13
  char v16; // bl
  char v17; // r15
  __int64 v18; // r13
  char v19; // al
  __int64 v20; // r14
  unsigned int v21; // r15d
  int v22; // r13d
  int v23; // r12d
  unsigned int v24; // eax
  __int64 v25; // rbx
  void *v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // r13
  __int64 v30; // r15
  __int64 *v31; // rbx
  void *v32; // r14
  size_t v33; // r15
  size_t v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  size_t v38; // r12
  __int64 v39; // rax
  __int64 v40; // rdx
  size_t v41; // rbx
  void *v42; // r12
  __m128i v43; // xmm1
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 **v46; // rdx
  size_t v47; // rbx
  __int64 v48; // rax
  _QWORD *v49; // r14
  __int64 v50; // r12
  __int64 v51; // rbx
  __int64 v52; // r13
  __int64 v53; // rsi
  __int64 v54; // rax
  void *v55; // r12
  size_t v56; // rbx
  size_t v57; // r13
  _QWORD *v58; // rax
  _QWORD __src[22]; // [rsp+0h] [rbp-1E0h] BYREF
  _QWORD v60[3]; // [rsp+B0h] [rbp-130h] BYREF
  _QWORD v61[3]; // [rsp+C8h] [rbp-118h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-100h]
  size_t v63; // [rsp+E8h] [rbp-F8h]
  _QWORD *v64; // [rsp+F0h] [rbp-F0h]
  __int64 v65; // [rsp+F8h] [rbp-E8h] BYREF
  __int64 v66; // [rsp+100h] [rbp-E0h]
  __int64 v67; // [rsp+108h] [rbp-D8h]
  __int64 v68; // [rsp+110h] [rbp-D0h] BYREF
  __int64 **v69; // [rsp+118h] [rbp-C8h]
  __int64 v70; // [rsp+120h] [rbp-C0h]
  void *v71; // [rsp+128h] [rbp-B8h]
  __int64 v72; // [rsp+130h] [rbp-B0h] BYREF
  __int64 **v73; // [rsp+138h] [rbp-A8h]
  size_t v74; // [rsp+140h] [rbp-A0h]
  size_t v75; // [rsp+148h] [rbp-98h]
  __int64 **v76; // [rsp+150h] [rbp-90h]
  size_t v77; // [rsp+158h] [rbp-88h]
  __int64 v78; // [rsp+160h] [rbp-80h]
  int v79; // [rsp+16Ch] [rbp-74h]
  __int64 *v80; // [rsp+170h] [rbp-70h] BYREF
  void *v81; // [rsp+178h] [rbp-68h]
  size_t __n; // [rsp+180h] [rbp-60h]
  __int64 v83; // [rsp+188h] [rbp-58h]
  char v84; // [rsp+190h] [rbp-50h]
  void *v85; // [rsp+198h] [rbp-48h]
  __int64 v86; // [rsp+1A0h] [rbp-40h] BYREF
  void *v87; // [rsp+1A8h] [rbp-38h]
  size_t v88; // [rsp+1B0h] [rbp-30h]

  v79 = a6; /*0x100523f74*/
  v78 = a5; /*0x100523f78*/
  v62 = a4; /*0x100523f7c*/
  v77 = (size_t)a2; /*0x100523f83*/
  v7 = *(_QWORD *)(a3 + 16); /*0x100523f8a*/
  v64 = a1; /*0x100523f91*/
  if ( v7 ) /*0x100523f98*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100523fa8*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(176 * v7, 8); /*0x100523fb5*/
    if ( !v9 ) /*0x100523fbd*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 176 * v7); /*0x100524b2f*/
    v65 = v7; /*0x100523fcd*/
    v66 = v9; /*0x100523fd4*/
    v67 = 0; /*0x100523fdb*/
    v10 = *(_QWORD *)(a3 + 8); /*0x100523fe6*/
    v76 = (__int64 **)(v10 + 232 * v7); /*0x100523ff4*/
    v71 = (void *)0x8000000000000001LL; /*0x100524006*/
    while ( 1 ) /*0x10052404a*/
    {
      if ( !(_BYTE)v79 ) /*0x10052404e*/
        goto LABEL_18; /*0x10052404e*/
      if ( *(_QWORD *)(v10 + 88) ) /*0x100524054*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v80, v10 + 72); /*0x100524063*/
        v12 = (unsigned __int64)v80; /*0x100524068*/
        v13 = __n; /*0x10052406c*/
        if ( !__n ) /*0x100524073*/
          goto LABEL_16; /*0x100524073*/
      }
      else
      {
        if ( !*(_BYTE *)(v10 + 228) ) /*0x100524095*/
          goto LABEL_18; /*0x100524095*/
        codexmate_lib::core::relay::keychain::get_api_key::hc52a6eafd9a74e53( /*0x1005240b1*/
          __src,
          v77,
          *(_QWORD *)(v10 + 8),
          *(_QWORD *)(v10 + 16));
        if ( LODWORD(__src[0]) == 1 ) /*0x1005240bd*/
        {
          if ( __src[1] ) /*0x1005240c9*/
            *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[2], __src[1], 1); /*0x1005240d7*/
LABEL_15:
          v80 = nullptr; /*0x100524128*/
          v81 = (void *)1; /*0x100524130*/
          __n = 0; /*0x100524138*/
          v12 = 0; /*0x100524140*/
LABEL_16:
          if ( v12 ) /*0x100524154*/
            *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v12, 1); /*0x100524162*/
LABEL_18:
          v12 = 0x8000000000000000LL; /*0x100524170*/
          goto LABEL_19; /*0x100524170*/
        }
        v14 = (__int64 *)__src[1]; /*0x1005240de*/
        v86 = __src[2]; /*0x1005240ee*/
        v87 = (void *)__src[3]; /*0x1005240f2*/
        if ( (void *)__src[1] == v71 ) /*0x1005240fd*/
          goto LABEL_15; /*0x1005240fd*/
        __src[1] = v87; /*0x100524107*/
        __src[0] = v86; /*0x10052410e*/
        if ( v14 == (__int64 *)0x8000000000000000LL ) /*0x100524122*/
          goto LABEL_15; /*0x100524122*/
        v80 = v14; /*0x10052431b*/
        __n = __src[1]; /*0x100524331*/
        v81 = (void *)__src[0]; /*0x100524335*/
        v12 = (unsigned __int64)v14; /*0x100524338*/
        v13 = __src[1]; /*0x10052433c*/
        if ( !__src[1] ) /*0x100524343*/
          goto LABEL_16; /*0x100524343*/
      }
      v85 = v81; /*0x10052407d*/
      v75 = v13; /*0x100524081*/
LABEL_19:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v61, v10); /*0x10052417a*/
      v15 = v10 + 24; /*0x100524189*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v60, v15); /*0x100524197*/
      v15 += 24; /*0x10052419c*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v68, v15); /*0x1005241aa*/
      v15 += 48; /*0x1005241af*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v72, v15); /*0x1005241bd*/
      v16 = *(_BYTE *)(v15 + 134); /*0x1005241c2*/
      v17 = *(_BYTE *)(v15 + 135); /*0x1005241ca*/
      v15 += 24; /*0x1005241d2*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h30f03e4abd722ada(&v86, v15); /*0x1005241dd*/
      v18 = v15 + 24; /*0x1005241e2*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v80, v18); /*0x1005241ed*/
      v19 = *(_BYTE *)(v18 + 85); /*0x1005241f2*/
      __src[2] = v61[2]; /*0x1005241fe*/
      __src[1] = v61[1]; /*0x100524213*/
      __src[0] = v61[0]; /*0x10052421a*/
      __src[5] = v60[2]; /*0x100524228*/
      __src[4] = v60[1]; /*0x10052423b*/
      __src[3] = v60[0]; /*0x100524240*/
      __src[8] = v70; /*0x10052424c*/
      __src[7] = v69; /*0x10052425f*/
      __src[6] = v68; /*0x100524264*/
      __src[18] = v12; /*0x100524269*/
      __src[19] = v85; /*0x100524274*/
      __src[20] = v75; /*0x100524282*/
      __src[11] = v74; /*0x100524290*/
      __src[10] = v73; /*0x1005242a3*/
      __src[9] = v72; /*0x1005242a8*/
      BYTE1(__src[21]) = v16; /*0x1005242ad*/
      BYTE2(__src[21]) = v17; /*0x1005242b3*/
      __src[14] = v88; /*0x1005242be*/
      __src[13] = v87; /*0x1005242cb*/
      __src[12] = v86; /*0x1005242d0*/
      __src[17] = __n; /*0x1005242d9*/
      __src[16] = v81; /*0x1005242e6*/
      __src[15] = v80; /*0x1005242eb*/
      LOBYTE(__src[21]) = v19; /*0x1005242f0*/
      v20 = v67; /*0x1005242f6*/
      if ( v67 == v65 ) /*0x100524304*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h9ed33eaa3b6bc90b(&v65); /*0x100524311*/
      a2 = __src; /*0x100524023*/
      memcpy((void *)(v66 + 176 * v20), __src, 0xB0u); /*0x10052402a*/
      v11 = v20 + 1; /*0x10052402f*/
      v67 = v11; /*0x100524032*/
      v10 = v18 + 88; /*0x100524039*/
      if ( (__int64 **)v10 == v76 ) /*0x100524044*/
        goto LABEL_24; /*0x100524044*/
    }
  }
  v65 = 0; /*0x10052434e*/
  v66 = 8; /*0x100524359*/
  v67 = 0; /*0x100524364*/
  v11 = 0; /*0x10052436f*/
LABEL_24:
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v80); /*0x100524372*/
  v21 = (unsigned int)v80; /*0x10052437b*/
  v22 = ((int)v80 >> 13) - 1; /*0x100524385*/
  v23 = 0; /*0x100524389*/
  if ( (int)v80 >> 13 <= 0 ) /*0x10052438e*/
  {
    v24 = (1 - ((int)v80 >> 13)) / 0x190u + 1; /*0x1005243a2*/
    v22 += 400 * v24; /*0x1005243aa*/
    v23 = -146097 * v24; /*0x1005243ad*/
  }
  v25 = HIDWORD(v80); /*0x1005243b4*/
  LODWORD(v85) = (_DWORD)v81; /*0x1005243ba*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v80, a2); /*0x1005243bd*/
  v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1005243cc*/
  if ( !v26 ) /*0x1005243d4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x100524b0f*/
  qmemcpy(v26, "AiMaMi 1.2.3", 12); /*0x100524412*/
  __src[5] = v67; /*0x100524459*/
  __src[4] = v66; /*0x10052446e*/
  __src[3] = v65; /*0x100524475*/
  LODWORD(__src[7]) = 1; /*0x10052447c*/
  __src[6] = 1000 /*0x100524486*/
           * (v25
            + 86400LL
            * (int)(((v22 / 100) >> 2) + ((1461 * v22) >> 2) + v23 + ((v21 >> 4) & 0x1FF) - v22 / 100 - 719163))
           + (unsigned int)v85 / 0xF4240uLL;
  __src[0] = 12; /*0x10052448d*/
  v85 = v26; /*0x100524498*/
  __src[1] = v26; /*0x10052449c*/
  __src[2] = 12; /*0x1005244a3*/
  BYTE4(__src[7]) = v79; /*0x1005244b1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, v65); /*0x1005244b7*/
  v27 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1005244c6*/
  if ( !v27 ) /*0x1005244ce*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100524b20*/
  v86 = 128; /*0x1005244db*/
  v87 = v27; /*0x1005244e3*/
  v80 = &v86; /*0x1005244eb*/
  v81 = &unk_1015FBFF9; /*0x1005244f6*/
  __n = 2; /*0x1005244fa*/
  v83 = 1; /*0x100524502*/
  v84 = 0; /*0x10052450a*/
  *v27 = 123; /*0x10052450e*/
  v88 = 1; /*0x100524511*/
  LOWORD(v68) = 256; /*0x100524519*/
  v69 = &v80; /*0x100524526*/
  v28 = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb(
          &v68,
          "schemaVersionThis bundle is read-only: collecting it does not stop Codex, repair files, write probes or open C"
          "odex databases in read-write mode.",
          13,
          &__src[7]);
  v29 = v64; /*0x100524545*/
  v30 = v28; /*0x10052454c*/
  if ( v28 ) /*0x100524559*/
    goto LABEL_32; /*0x100524559*/
  if ( (_BYTE)v68 ) /*0x100524562*/
    goto LABEL_30; /*0x100524562*/
  v30 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10052458d*/
          &v68,
          &anon_92869709a5e99ce1936aa4e326b6c562_947,
          10,
          &__src[6]);
  if ( v30 ) /*0x100524593*/
    goto LABEL_32; /*0x100524593*/
  if ( (_BYTE)v68 ) /*0x100524668*/
    goto LABEL_30; /*0x100524668*/
  v30 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10052468d*/
          &v68,
          &anon_92869709a5e99ce1936aa4e326b6c562_948,
          10,
          __src);
  if ( v30 ) /*0x100524693*/
    goto LABEL_32; /*0x100524693*/
  if ( (_BYTE)v68 ) /*0x1005246a0*/
  {
LABEL_30:
    v30 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(*(double *)a7.i64); /*0x100524564*/
    goto LABEL_32; /*0x10052456c*/
  }
  v30 = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x1005246c5*/
          &v68,
          &anon_92869709a5e99ce1936aa4e326b6c562_949,
          14,
          (char *)&__src[7] + 4);
  if ( v30 /*0x1005246e6*/
    || (v30 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hd2054d7b0f121056(
                &v68,
                &__src[3])) != 0 )
  {
LABEL_32:
    if ( v86 ) /*0x1005245a0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v86, 1); /*0x1005245ab*/
    goto LABEL_34; /*0x1005245ab*/
  }
  v73 = v69; /*0x1005246fa*/
  v72 = v68; /*0x100524701*/
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910( /*0x10052470f*/
    &v72,
    *(double *)a7.i64);
  v30 = (__int64)v87; /*0x100524718*/
  v75 = v86; /*0x10052471c*/
  if ( __OFSUB__(-v86, 1) ) /*0x100524726*/
  {
LABEL_34:
    v72 = v30; /*0x1005245b0*/
    v86 = (__int64)&v72; /*0x1005245be*/
    v87 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1005245c9*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v80, &unk_1017C1516, &v86); /*0x1005245dc*/
    v31 = v80; /*0x1005245e1*/
    v32 = v81; /*0x1005245e5*/
    v33 = __n; /*0x1005245e9*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v72); /*0x1005245f4*/
    *v29 = 10; /*0x1005245f9*/
    v29[1] = v31; /*0x100524601*/
    v29[2] = v32; /*0x100524605*/
    v29[3] = v33; /*0x100524609*/
    goto LABEL_35; /*0x100524609*/
  }
  v38 = v88; /*0x10052472c*/
  std::path::Path::to_path_buf::h73855ce4b54f7174(&v72, v62, v78); /*0x100524742*/
  v39 = std::path::Path::file_name::hf6c2daad91e50ebf(v73, v74); /*0x100524755*/
  v63 = v38; /*0x10052475d*/
  if ( v39 ) /*0x100524764*/
  {
    core::str::converts::from_utf8::hb32deb9559450f6e(&v80, v39, v40); /*0x10052476d*/
    v41 = 12; /*0x100524776*/
    if ( !(_BYTE)v80 ) /*0x10052477b*/
      v41 = __n; /*0x10052477b*/
    v42 = &unk_1015FEC47; /*0x100524780*/
    if ( !(_BYTE)v80 ) /*0x100524787*/
      v42 = v81; /*0x100524787*/
  }
  else
  {
    v42 = &unk_1015FEC47; /*0x10052478e*/
    v41 = 12; /*0x100524795*/
  }
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v80, v41, 0, 1, 1); /*0x1005247ae*/
  v71 = v81; /*0x1005247b7*/
  if ( (_DWORD)v80 == 1 ) /*0x1005247c2*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v71, __n); /*0x100524b3f*/
  v77 = __n; /*0x1005247cc*/
  memcpy((void *)__n, v42, v41); /*0x1005247d9*/
  if ( v41 < 0x12 /*0x100524813*/
    || (a7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v77 + v41 - 18)), (__m128i)xmmword_1015FBDA0),
        v43 = _mm_or_si128(
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v77 + v41 - 2)), (__m128i)xmmword_1015FBD70),
                a7),
        !_mm_testz_si128(v43, v43)) )
  {
    v44 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h46c0c6bee54dbcbb(v77, v41, &unk_1015FEC65, 5); /*0x10052482f*/
    v68 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h46c0c6bee54dbcbb(v44, v45, &unk_1015FEC6A, 13); /*0x10052484e*/
    v69 = v46; /*0x100524855*/
    v80 = &v68; /*0x100524863*/
    v81 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10052486e*/
    __n = (size_t)&off_101964510; /*0x100524879*/
    v83 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10052487d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v86, "\xC0\xC0", &v80); /*0x100524890*/
    std::path::PathBuf::set_file_name::ha6bfe008214891f9(&v72, &v86); /*0x1005248a0*/
  }
  v78 = v72; /*0x1005248ac*/
  v76 = v73; /*0x1005248b7*/
  v47 = v74; /*0x1005248be*/
  if ( v71 ) /*0x1005248cf*/
    *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v71, 1); /*0x1005248dd*/
  v48 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1005248fb*/
          v76,
          v47,
          v30,
          v63,
          (unsigned __int8)v79);
  if ( v48 ) /*0x100524903*/
  {
    v72 = v48; /*0x100524909*/
    v86 = (__int64)&v72; /*0x100524917*/
    v87 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100524922*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v80, &unk_1017C14F9, &v86); /*0x100524935*/
    v86 = (__int64)v80; /*0x100524942*/
    v87 = v81; /*0x100524946*/
    v88 = __n; /*0x10052494e*/
    if ( (v72 & 3) == 1 ) /*0x100524968*/
    {
      v49 = v29; /*0x10052496a*/
      v50 = v72 - 1; /*0x10052496d*/
      v51 = *(_QWORD *)(v72 - 1); /*0x100524971*/
      v52 = *(_QWORD *)(v72 + 7); /*0x100524975*/
      if ( *(_QWORD *)v52 ) /*0x100524979*/
        (*(void (__fastcall **)(__int64, double))v52)(v51, *(double *)a7.i64); /*0x100524985*/
      v53 = *(_QWORD *)(v52 + 8); /*0x100524987*/
      if ( v53 ) /*0x10052498e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v53, *(_QWORD *)(v52 + 16)); /*0x100524997*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 24, 8); /*0x1005249a9*/
      v29 = v49; /*0x1005249ae*/
    }
    v29[3] = v88; /*0x1005249bc*/
    v54 = v86; /*0x1005249c0*/
    v29[2] = v87; /*0x1005249c8*/
    v29[1] = v54; /*0x1005249cc*/
    *v29 = 10; /*0x1005249d0*/
    if ( v78 ) /*0x1005249df*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v78, 1); /*0x1005249ed*/
    if ( v75 ) /*0x1005249fc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v75, 1); /*0x100524a0a*/
LABEL_35:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, 12, 1); /*0x10052460d*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7c83e3d83281f011(&__src[3]); /*0x100524623*/
    if ( __src[3] ) /*0x100524632*/
    {
      v34 = __src[4]; /*0x100524634*/
      v35 = 176LL * __src[3]; /*0x10052463b*/
      v36 = 8; /*0x100524642*/
LABEL_37:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v35, v36); /*0x100524647*/
      return v29; /*0x100524647*/
    }
    return v29; /*0x100524632*/
  }
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v86, v76, v47); /*0x100524a22*/
  v55 = v87; /*0x100524a27*/
  v56 = v88; /*0x100524a2b*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v80, v88, 0, 1, 1); /*0x100524a43*/
  v85 = v81; /*0x100524a4c*/
  if ( (_BYTE)v80 ) /*0x100524a54*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v85, __n); /*0x100524b4e*/
  v57 = __n; /*0x100524a5a*/
  v77 = (size_t)v55; /*0x100524a61*/
  memcpy((void *)__n, v55, v56); /*0x100524a6e*/
  v58 = v64; /*0x100524a73*/
  v64[1] = v85; /*0x100524a7e*/
  v58[2] = v57; /*0x100524a82*/
  v29 = v58; /*0x100524a86*/
  v58[3] = v56; /*0x100524a89*/
  v58[4] = v11; /*0x100524a8d*/
  *((_BYTE *)v58 + 40) = v79; /*0x100524a94*/
  *v58 = 11; /*0x100524a98*/
  if ( v78 ) /*0x100524aa7*/
    *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v78, 1); /*0x100524ab5*/
  if ( v75 ) /*0x100524ac4*/
    *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v75, 1); /*0x100524ace*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..io..RelayExportFile$GT$::h5a7f1d24e4fe5736( /*0x100524ada*/
    __src,
    *(double *)a7.i64);
  v35 = v86; /*0x100524adf*/
  if ( 2 * v86 ) /*0x100524ae3*/
  {
    v36 = 1; /*0x100524af4*/
    v34 = v77; /*0x100524af9*/
    goto LABEL_37; /*0x100524b00*/
  }
  return v29; /*0x10052464f*/
}