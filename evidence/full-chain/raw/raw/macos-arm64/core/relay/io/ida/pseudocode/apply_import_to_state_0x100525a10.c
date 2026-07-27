// __ZN13codexmate_lib4core5relay2io21apply_import_to_state @ 0x100525a10 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::io::apply_import_to_state::h68dc3af05ea9926e(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __m128i a5,
        __m128i si128)
{
  unsigned int v8; // r13d
  int v9; // r15d
  int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rsi
  void *v23; // rax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(); // rsi
  __int64 (__fastcall **v26)(); // rdi
  void *v27; // rax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(); // r13
  unsigned __int64 v30; // rax
  const __m128i *v32; // r9
  __int64 v33; // r8
  __int8 *v34; // rsi
  char *i; // rdi
  unsigned __int64 v36; // rax
  __m128i v37; // xmm2
  size_t v39; // r15
  int v40; // eax
  bool v41; // zf
  __int64 v42; // rsi
  void *v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 (__fastcall **v46)(); // rdi
  __int64 v47; // rdx
  __int64 v48; // rsi
  void *v49; // rax
  __int64 v50; // rbx
  unsigned __int8 *v51; // r14
  size_t v52; // r15
  __int64 v53; // rsi
  void *v54; // rax
  __int64 v55; // rbx
  __int64 (__fastcall *v56)(); // rbx
  __int64 (__fastcall **v57)(); // r14
  _QWORD *v58; // r15
  __int64 v59; // rsi
  __int64 v60; // rsi
  __int64 v61; // rsi
  void *v62; // r15
  char v63; // r14
  size_t v64; // r14
  char v65; // r15
  char v66; // al
  __int64 v67; // r14
  _QWORD *v68; // rdx
  __int64 v70; // rbx
  __int64 v71; // r14
  const __m128i *v72; // r15
  const __m128i *v74; // r12
  int v75; // r13d
  __int64 v76; // rax
  __int64 v77; // rsi
  unsigned __int64 v78; // rax
  __int64 v79; // rbx
  __int64 (__fastcall *v81)(); // [rsp+8h] [rbp-2A8h]
  _QWORD *v82; // [rsp+10h] [rbp-2A0h]
  __int64 v83; // [rsp+18h] [rbp-298h]
  __int64 v84; // [rsp+20h] [rbp-290h]
  unsigned __int64 v85; // [rsp+28h] [rbp-288h]
  __m128i v86; // [rsp+30h] [rbp-280h] BYREF
  const __m128i *v87; // [rsp+48h] [rbp-268h] BYREF
  __int64 v88; // [rsp+50h] [rbp-260h]
  __int64 v89; // [rsp+58h] [rbp-258h]
  __int64 v90; // [rsp+60h] [rbp-250h]
  _QWORD v91[2]; // [rsp+68h] [rbp-248h] BYREF
  _QWORD *v92; // [rsp+78h] [rbp-238h]
  __int64 v93; // [rsp+80h] [rbp-230h]
  __int64 (__fastcall *v94)(); // [rsp+88h] [rbp-228h]
  __int64 (__fastcall **v95)(); // [rsp+90h] [rbp-220h]
  const __m128i *v96; // [rsp+98h] [rbp-218h]
  size_t __n[2]; // [rsp+A0h] [rbp-210h] BYREF
  _QWORD v98[29]; // [rsp+B0h] [rbp-200h] BYREF
  __int64 *v99; // [rsp+198h] [rbp-118h]
  __int64 v100; // [rsp+1A0h] [rbp-110h]
  __int64 (__fastcall **v101)(); // [rsp+1A8h] [rbp-108h]
  __int64 v102; // [rsp+1B0h] [rbp-100h]
  __int64 v103; // [rsp+1B8h] [rbp-F8h]
  __int64 v104; // [rsp+1C0h] [rbp-F0h] BYREF
  __int64 (__fastcall *v105)(); // [rsp+1C8h] [rbp-E8h]
  __int64 (__fastcall **v106)(); // [rsp+1D0h] [rbp-E0h]
  __int64 (__fastcall *v107)(); // [rsp+1D8h] [rbp-D8h]
  __int64 v108; // [rsp+1E0h] [rbp-D0h]
  __int64 v109; // [rsp+1E8h] [rbp-C8h]
  char v110; // [rsp+1F0h] [rbp-C0h]
  __int64 (__fastcall *v111)(); // [rsp+1F8h] [rbp-B8h] BYREF
  __int64 (__fastcall **v112)(); // [rsp+200h] [rbp-B0h]
  __int64 (__fastcall *v113)(); // [rsp+208h] [rbp-A8h]
  __int64 v114; // [rsp+210h] [rbp-A0h]
  __int64 (__fastcall *v115)(); // [rsp+218h] [rbp-98h] BYREF
  __int64 (__fastcall **v116)(); // [rsp+220h] [rbp-90h]
  __int64 (__fastcall *v117)(); // [rsp+228h] [rbp-88h]
  __int64 (__fastcall *v118)(); // [rsp+230h] [rbp-80h]
  __int64 v119; // [rsp+238h] [rbp-78h] BYREF
  __int64 (__fastcall *v120)(); // [rsp+240h] [rbp-70h]
  __int64 (__fastcall **v121)(); // [rsp+248h] [rbp-68h]
  __int64 (__fastcall *v122)(); // [rsp+250h] [rbp-60h]
  __int64 v123; // [rsp+258h] [rbp-58h] BYREF
  __int64 v124; // [rsp+260h] [rbp-50h]
  __int64 v125; // [rsp+268h] [rbp-48h]
  void *__src; // [rsp+270h] [rbp-40h]
  char v127; // [rsp+27Fh] [rbp-31h] BYREF
  __int64 (__fastcall *v128)(); // [rsp+280h] [rbp-30h]

  v114 = a2; /*0x100525a2a*/
  v92 = a1; /*0x100525a31*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v98); /*0x100525a3f*/
  v8 = v98[0]; /*0x100525a44*/
  v9 = (SLODWORD(v98[0]) >> 13) - 1; /*0x100525a51*/
  v10 = 0; /*0x100525a55*/
  if ( SLODWORD(v98[0]) >> 13 <= 0 ) /*0x100525a59*/
  {
    v11 = (1 - (SLODWORD(v98[0]) >> 13)) / 0x190u + 1; /*0x100525a6d*/
    v9 += 400 * v11; /*0x100525a75*/
    v10 = -146097 * v11; /*0x100525a78*/
  }
  v102 = HIDWORD(v98[0]); /*0x100525a84*/
  v101 = (__int64 (__fastcall **)())LODWORD(v98[1]); /*0x100525a91*/
  v128 = (__int64 (__fastcall *)())a3[1]; /*0x100525a9d*/
  v82 = a3; /*0x100525aa1*/
  v12 = a3[2]; /*0x100525aa8*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100525ab4*/
  v15 = (__int64 *)v13; /*0x100525ab6*/
  if ( *(_BYTE *)(v13 + 16) == 1 ) /*0x100525abd*/
  {
    v16 = *(_QWORD *)v13; /*0x100525ac3*/
    v17 = v15[1]; /*0x100525ac6*/
  }
  else
  {
    v99 = (__int64 *)v13; /*0x100526c95*/
    v16 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100526c9c*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            a2,
            v14,
            v13);
    v15 = v99; /*0x100526ca1*/
    *v99 = v16; /*0x100526ca8*/
    v15[1] = v17; /*0x100526cab*/
    *((_BYTE *)v15 + 16) = 1; /*0x100526caf*/
  }
  *v15 = v16 + 1; /*0x100525ace*/
  memset(&v98[1], 0, 24); /*0x100525af4*/
  v98[0] = &xmmword_1015FBEC0; /*0x100525b02*/
  v98[4] = v16; /*0x100525b09*/
  v98[5] = v17; /*0x100525b10*/
  if ( v12 ) /*0x100525b1a*/
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(v98, v12, &v98[4], 1); /*0x100526cce*/
    do /*0x100526d0b*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v104, v128); /*0x100526ce1*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v98, &v104); /*0x100526cf4*/
      v128 = (__int64 (__fastcall *)())((char *)v128 + 232); /*0x100526cf9*/
      --v12; /*0x100526d01*/
    }
    while ( v12 ); /*0x100526d0b*/
  }
  v91[1] = v98[5]; /*0x100525b27*/
  v91[0] = v98[4]; /*0x100525b35*/
  v90 = v98[3]; /*0x100525b43*/
  v89 = v98[2]; /*0x100525b51*/
  v88 = v98[1]; /*0x100525b66*/
  v87 = (const __m128i *)v98[0]; /*0x100525b6d*/
  v123 = 0; /*0x100525b74*/
  v124 = 8; /*0x100525b7c*/
  v125 = 0; /*0x100525b84*/
  v18 = *(_QWORD *)(a4 + 40); /*0x100525b8c*/
  if ( v18 ) /*0x100525b93*/
  {
    v85 = 1000 /*0x100525c02*/
        * (v102 + 86400LL
                * (int)(((v9 / 100) >> 2) + ((1461 * v9) >> 2) + v10 + ((v8 >> 4) & 0x1FF) - v9 / 100 - 719163))
        + ((unsigned __int64)(1125899907LL * (_QWORD)v101) >> 50);
    v19 = *(_QWORD *)(a4 + 32); /*0x100525c13*/
    v20 = v19 + 176 * v18; /*0x100525c21*/
    v83 = *(_QWORD *)(v114 + 584); /*0x100525c32*/
    v84 = *(_QWORD *)(v114 + 592); /*0x100525c40*/
    v99 = nullptr; /*0x100525c47*/
    v102 = v20; /*0x100525c59*/
    while ( 1 ) /*0x100525c9e*/
    {
      v21 = v19; /*0x100525c9e*/
      codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997( /*0x100525cae*/
        (unsigned __int8 *)v98,
        *(unsigned __int8 **)(v19 + 8),
        *(_QWORD *)(v19 + 16));
      v19 += 176; /*0x100525cb3*/
      if ( v98[0] != 0x8000000000000000LL ) /*0x100525cc4*/
      {
        if ( v98[0] ) /*0x100525f23*/
          *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98[1], v98[0], 1); /*0x100525f31*/
LABEL_23:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v119, v21); /*0x100525f36*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v104, v21 + 24); /*0x100525f50*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, v21 + 24); /*0x100525f55*/
        v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100525f64*/
        if ( !v27 ) /*0x100525f6c*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x100526d1c*/
        qmemcpy(v27, "INVALID_FIELD", 13); /*0x100525f8a*/
        v98[2] = v121; /*0x100525f91*/
        v98[1] = v120; /*0x100525fa0*/
        v98[0] = v119; /*0x100525fa7*/
        v98[5] = v106; /*0x100525fbc*/
        v98[4] = v105; /*0x100525fce*/
        v98[3] = v104; /*0x100525fd2*/
        v98[6] = 13; /*0x100525fd5*/
        v98[7] = v27; /*0x100525fe0*/
        v98[8] = 13; /*0x100525fe7*/
        v28 = v125; /*0x100525ff2*/
        if ( v125 == v123 ) /*0x100525ffa*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v123); /*0x100526004*/
        qmemcpy((void *)(v124 + 72 * v28), v98, 0x48u); /*0x100525c84*/
        v125 = v28 + 1; /*0x100525c8a*/
        goto LABEL_9; /*0x100525c8a*/
      }
      if ( !*(_QWORD *)(v21 + 40) || !*(_QWORD *)(v21 + 88) ) /*0x100525cd5*/
        goto LABEL_23; /*0x100525cda*/
      codexmate_lib::core::relay::upstream_url::normalize_upstream_base_url::ha7493063c3bbb978( /*0x100525cec*/
        &v119,
        *(_QWORD *)(v21 + 56),
        *(double *)a5.i64,
        *(double *)si128.i64);
      v114 = v21 + 24; /*0x100525cf5*/
      if ( (_BYTE)v119 ) /*0x100525d00*/
      {
        v113 = v122; /*0x100525d0e*/
        v112 = v121; /*0x100525d1c*/
        v111 = v120; /*0x100525d23*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100525d38*/
        {
          v104 = v21; /*0x100525d3e*/
          v105 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100525d4c*/
          v106 = &v111; /*0x100525d5a*/
          v107 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100525d61*/
          v98[6] = 2; /*0x100525d68*/
          v98[7] = "codexmate_lib::core::relay::io"; /*0x100525d7a*/
          v98[8] = 30; /*0x100525d81*/
          v98[10] = &unk_1017C1683; /*0x100525d93*/
          v98[11] = &v104; /*0x100525da1*/
          v98[0] = 0; /*0x100525da8*/
          v98[1] = "codexmate_lib::core::relay::io"; /*0x100525db3*/
          v98[2] = 30; /*0x100525dba*/
          v98[3] = 0; /*0x100525dc5*/
          v98[4] = "src/core/relay/io.rs"; /*0x100525dd7*/
          v98[5] = 20; /*0x100525dde*/
          v98[9] = 0x12D00000001LL; /*0x100525df3*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v127, v98); /*0x100525e01*/
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v115, v21); /*0x100525e10*/
        v22 = v114; /*0x100525e1c*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v104, v114); /*0x100525e23*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, v22); /*0x100525e28*/
        v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100525e37*/
        if ( !v23 ) /*0x100525e3f*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x100526d42*/
        qmemcpy(v23, "INVALID_FIELD", 13); /*0x100525e5d*/
        v98[2] = v117; /*0x100525e67*/
        v98[1] = v116; /*0x100525e7c*/
        v98[0] = v115; /*0x100525e83*/
        v98[5] = v106; /*0x100525e98*/
        v98[4] = v105; /*0x100525eaa*/
        v98[3] = v104; /*0x100525eae*/
        v98[6] = 13; /*0x100525eb1*/
        v98[7] = v23; /*0x100525ebc*/
        v98[8] = 13; /*0x100525ec3*/
        v24 = v125; /*0x100525ece*/
        if ( v125 == v123 ) /*0x100525ed6*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v123); /*0x100525edc*/
        qmemcpy((void *)(v124 + 72 * v24), v98, 0x48u); /*0x100525ef5*/
        v125 = v24 + 1; /*0x100525efb*/
        v25 = v111; /*0x100525eff*/
        if ( !v111 ) /*0x100525f09*/
          goto LABEL_9; /*0x100525f09*/
        v26 = v112; /*0x100525f0f*/
        goto LABEL_77; /*0x100525f1b*/
      }
      v29 = v120; /*0x10052600e*/
      v101 = v121; /*0x100526016*/
      v81 = v122; /*0x100526021*/
      if ( v90 ) /*0x100526030*/
        break; /*0x100526030*/
LABEL_35:
      codexmate_lib::core::relay::models::normalize_relay_models::hdc474f64afe66555( /*0x10052615c*/
        (__int64)&v104,
        *(_QWORD *)(v21 + 104),
        *(_QWORD *)(v21 + 112),
        *(_QWORD *)(v21 + 80),
        *(_QWORD *)(v21 + 88),
        *(_BYTE *)(v21 + 169));
      if ( v104 == 0x8000000000000000LL ) /*0x100526187*/
      {
        v113 = v107; /*0x100526198*/
        v112 = v106; /*0x1005261a6*/
        v111 = v105; /*0x1005261ad*/
        v20 = v102; /*0x1005261c2*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005261c9*/
        {
          v119 = v21; /*0x1005261cf*/
          v120 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005261da*/
          v121 = &v111; /*0x1005261e5*/
          v122 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005261e9*/
          v98[6] = 2; /*0x1005261ed*/
          v98[7] = "codexmate_lib::core::relay::io"; /*0x1005261ff*/
          v98[8] = 30; /*0x100526206*/
          v98[10] = &unk_1017C164B; /*0x100526218*/
          v98[11] = &v119; /*0x100526223*/
          v98[0] = 0; /*0x10052622a*/
          v98[1] = "codexmate_lib::core::relay::io"; /*0x100526235*/
          v98[2] = 30; /*0x10052623c*/
          v98[3] = 0; /*0x100526247*/
          v98[4] = "src/core/relay/io.rs"; /*0x100526259*/
          v98[5] = 20; /*0x100526260*/
          v98[9] = 0x14600000001LL; /*0x100526275*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v127, v98); /*0x100526287*/
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v115, v21); /*0x100526296*/
        v42 = v114; /*0x10052629f*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v119, v114); /*0x1005262a6*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v119, v42); /*0x1005262ab*/
        v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1005262ba*/
        if ( !v43 ) /*0x1005262c2*/
        {
          v128 = v29; /*0x100526d5a*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x100526d68*/
        }
        qmemcpy(v43, "INVALID_FIELD", 13); /*0x1005262e0*/
        v98[2] = v117; /*0x1005262ea*/
        v98[1] = v116; /*0x1005262ff*/
        v98[0] = v115; /*0x100526306*/
        v98[5] = v121; /*0x100526318*/
        v98[4] = v120; /*0x100526324*/
        v98[3] = v119; /*0x100526328*/
        v98[6] = 13; /*0x10052632b*/
        v98[7] = v43; /*0x100526336*/
        v98[8] = 13; /*0x10052633d*/
        v44 = v125; /*0x100526348*/
        if ( v125 == v123 ) /*0x100526350*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v123); /*0x100526356*/
        qmemcpy((void *)(v124 + 72 * v44), v98, 0x48u); /*0x100526373*/
        v125 = v44 + 1; /*0x100526379*/
        v45 = (__int64)v111; /*0x10052637d*/
        if ( v111 ) /*0x100526387*/
        {
          v46 = v112; /*0x10052638d*/
          v47 = 1; /*0x100526394*/
LABEL_74:
          *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, v47); /*0x1005268b3*/
        }
LABEL_75:
        if ( v29 ) /*0x1005268bb*/
        {
          v26 = v101; /*0x1005268c6*/
          v25 = v29; /*0x1005268cd*/
LABEL_77:
          *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x1005268d0*/
        }
LABEL_9:
        if ( v19 == v20 ) /*0x100525c98*/
          goto LABEL_86; /*0x100525c98*/
      }
      else
      {
        v95 = v106; /*0x1005264a9*/
        v94 = v105; /*0x1005264be*/
        v93 = v104; /*0x1005264c5*/
        v118 = v107; /*0x1005264d3*/
        v103 = v108; /*0x1005264de*/
        v41 = *(_QWORD *)(v21 + 144) == 0x8000000000000000LL; /*0x1005264f3*/
        v86.i64[0] = v109; /*0x1005264fa*/
        LOBYTE(v96) = v110; /*0x100526501*/
        if ( v41 || !*(_QWORD *)(v21 + 160) ) /*0x10052650d*/
        {
          v100 = 1; /*0x1005268df*/
          v62 = nullptr; /*0x1005268e6*/
          __n[0] = 0; /*0x1005268e9*/
          v63 = 0; /*0x1005268f4*/
        }
        else
        {
          __n[0] = *(_QWORD *)(v21 + 160); /*0x10052651d*/
          __src = *(void **)(v21 + 152); /*0x10052652b*/
          v51 = *(unsigned __int8 **)(v21 + 8); /*0x10052652f*/
          v52 = *(_QWORD *)(v21 + 16); /*0x100526533*/
          codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997( /*0x100526544*/
            (unsigned __int8 *)v98,
            v51,
            v52);
          if ( v98[0] == 0x8000000000000000LL ) /*0x10052655a*/
          {
            codexmate_lib::core::relay::keychain::write_key_file::h73e6c3aba7b96586( /*0x100526586*/
              (unsigned int)&v111,
              v83,
              v84,
              (_DWORD)v51,
              v52,
              (_DWORD)__src,
              __n[0]);
          }
          else
          {
            v113 = (__int64 (__fastcall *)())v98[2]; /*0x100526594*/
            v112 = (__int64 (__fastcall **)())v98[1]; /*0x1005265a9*/
            v111 = (__int64 (__fastcall *)())v98[0]; /*0x1005265b0*/
          }
          if ( v111 != (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1005265c8*/
          {
            v117 = v113; /*0x1005265d5*/
            v116 = v112; /*0x1005265ea*/
            v115 = v111; /*0x1005265f1*/
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100526606*/
            {
              v104 = v21; /*0x10052660c*/
              v105 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10052661a*/
              v106 = &v115; /*0x100526628*/
              v107 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10052662f*/
              v98[6] = 2; /*0x100526636*/
              v98[7] = "codexmate_lib::core::relay::io"; /*0x100526648*/
              v98[8] = 30; /*0x10052664f*/
              v98[10] = &unk_1017C1607; /*0x100526661*/
              v98[11] = &v104; /*0x10052666f*/
              v98[0] = 0; /*0x100526676*/
              v98[1] = "codexmate_lib::core::relay::io"; /*0x100526681*/
              v98[2] = 30; /*0x100526688*/
              v98[3] = 0; /*0x100526693*/
              v98[4] = "src/core/relay/io.rs"; /*0x1005266a5*/
              v98[5] = 20; /*0x1005266ac*/
              v98[9] = 0x15700000001LL; /*0x1005266c1*/
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v127, v98); /*0x1005266d3*/
            }
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v119, v21); /*0x1005266df*/
            v53 = v114; /*0x1005266eb*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v104, v114); /*0x1005266f2*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, v53); /*0x1005266f7*/
            v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x100526706*/
            if ( !v54 ) /*0x10052670e*/
            {
              v128 = v29; /*0x100526d6f*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x100526d7d*/
            }
            qmemcpy(v54, "KEYCHAIN_WRITE", 14); /*0x10052672c*/
            v98[2] = v121; /*0x100526733*/
            v98[1] = v120; /*0x100526742*/
            v98[0] = v119; /*0x100526749*/
            v98[5] = v106; /*0x10052675e*/
            v98[4] = v105; /*0x100526770*/
            v98[3] = v104; /*0x100526774*/
            v98[6] = 14; /*0x100526777*/
            v98[7] = v54; /*0x100526782*/
            v98[8] = 14; /*0x100526789*/
            v55 = v125; /*0x100526794*/
            if ( v125 == v123 ) /*0x10052679c*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v123); /*0x1005267a2*/
            qmemcpy((void *)(v124 + 72 * v55), v98, 0x48u); /*0x1005267bf*/
            v125 = v55 + 1; /*0x1005267c5*/
            if ( v115 ) /*0x1005267d3*/
              *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v115, 1); /*0x1005267e1*/
            if ( v118 ) /*0x1005267ed*/
              *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103, v118, 1); /*0x1005267fb*/
            v56 = v94; /*0x100526800*/
            v57 = v95; /*0x100526807*/
            if ( !v95 ) /*0x100526811*/
            {
LABEL_72:
              v20 = v102; /*0x100526886*/
              if ( !v93 ) /*0x1005268a1*/
                goto LABEL_75; /*0x1005268a1*/
              v45 = 96 * v93; /*0x1005268a7*/
              v47 = 8; /*0x1005268ab*/
              v46 = (__int64 (__fastcall **)())v56; /*0x1005268b0*/
              goto LABEL_74; /*0x1005268b0*/
            }
            v58 = (_QWORD *)((char *)v94 + 72); /*0x100526813*/
            while ( 2 ) /*0x100526829*/
            {
              v59 = *(v58 - 7); /*0x100526829*/
              if ( v59 ) /*0x100526830*/
                *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v58 - 6), v59, 1); /*0x10052683b*/
              v60 = *(v58 - 1); /*0x100526840*/
              if ( 2 * v60 ) /*0x100526844*/
              {
                *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v58, v60, 1); /*0x100526868*/
                v61 = *(v58 - 4); /*0x10052686d*/
                if ( !v61 ) /*0x100526874*/
                  goto LABEL_64; /*0x100526874*/
              }
              else
              {
                v61 = *(v58 - 4); /*0x100526851*/
                if ( !v61 ) /*0x100526858*/
                {
LABEL_64:
                  v58 += 12; /*0x100526820*/
                  v57 = (__int64 (__fastcall **)())((char *)v57 - 1); /*0x100526824*/
                  if ( !v57 ) /*0x100526827*/
                    goto LABEL_72; /*0x100526827*/
                  continue; /*0x100526827*/
                }
              }
              break;
            }
            *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v58 - 3), v61, 1); /*0x10052687f*/
            goto LABEL_64; /*0x100526884*/
          }
          v64 = __n[0]; /*0x10052690b*/
          alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v98, __n[0], 0, 1, 1); /*0x100526917*/
          v62 = (void *)v98[1]; /*0x10052691c*/
          if ( LOBYTE(v98[0]) ) /*0x10052692a*/
          {
            v128 = v29; /*0x100526d23*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v98[1], v98[2]); /*0x100526d31*/
          }
          v100 = v98[2]; /*0x100526937*/
          memcpy((void *)v98[2], __src, v64); /*0x100526945*/
          v63 = 1; /*0x10052694a*/
        }
        __src = v62; /*0x100526957*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v115, v21); /*0x10052695b*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v119, v114); /*0x10052696b*/
        v65 = *(_BYTE *)(v21 + 170); /*0x100526970*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v104, v21 + 120); /*0x100526983*/
        v66 = *(_BYTE *)(v21 + 168); /*0x100526988*/
        v98[2] = v117; /*0x100526996*/
        v98[1] = v116; /*0x1005269a4*/
        v98[0] = v115; /*0x1005269b2*/
        v98[5] = v121; /*0x1005269c4*/
        v98[4] = v120; /*0x1005269cc*/
        v98[3] = v119; /*0x1005269d4*/
        v98[6] = v29; /*0x1005269d7*/
        v98[7] = v101; /*0x1005269e5*/
        v98[8] = v81; /*0x1005269f3*/
        v98[9] = __src; /*0x1005269fe*/
        v98[10] = v100; /*0x100526a0c*/
        v98[11] = __n[0]; /*0x100526a1a*/
        BYTE4(v98[28]) = v63; /*0x100526a21*/
        v98[12] = v118; /*0x100526a2c*/
        v98[13] = v103; /*0x100526a3a*/
        v98[14] = v86.i64[0]; /*0x100526a48*/
        BYTE6(v98[28]) = (_BYTE)v96; /*0x100526a56*/
        HIBYTE(v98[28]) = v65; /*0x100526a5c*/
        v98[17] = v95; /*0x100526a6a*/
        v98[16] = v94; /*0x100526a75*/
        v98[15] = v93; /*0x100526a80*/
        v98[20] = v106; /*0x100526a8b*/
        v98[19] = v105; /*0x100526a99*/
        v98[18] = v104; /*0x100526aa7*/
        LODWORD(v98[28]) = 0; /*0x100526aab*/
        v98[24] = -1; /*0x100526ab5*/
        v98[25] = 0; /*0x100526ac0*/
        v98[26] = v85; /*0x100526ad2*/
        v98[27] = v85; /*0x100526ad9*/
        v98[21] = 0x8000000000000000LL; /*0x100526aea*/
        BYTE5(v98[28]) = v66; /*0x100526af1*/
        v67 = v82[2]; /*0x100526afe*/
        if ( v67 == *v82 ) /*0x100526b05*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf440e359b97d50fe(v82); /*0x100526b0a*/
        memcpy((void *)(v82[1] + 232 * v67), v98, 0xE8u); /*0x100526b29*/
        v82[2] = v67 + 1; /*0x100526b31*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, v21); /*0x100526b3b*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v87, v98); /*0x100526b4a*/
        v99 = (__int64 *)((char *)v99 + 1); /*0x100526b4f*/
        v20 = v102; /*0x100526b56*/
        if ( v19 == v102 ) /*0x100526b6a*/
          goto LABEL_86; /*0x100526b6a*/
      }
    }
    v30 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v91, v21); /*0x100526040*/
    v128 = v29; /*0x100526045*/
    _RCX = v30 >> 57; /*0x10052604c*/
    v32 = v87; /*0x100526050*/
    v33 = v88; /*0x100526057*/
    si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v30 >> 57), (__m128i)0LL); /*0x100526066*/
    v34 = &v87[-2].i8[8]; /*0x10052606b*/
    for ( i = nullptr; ; i += 16 ) /*0x10052606f*/
    {
      v36 = v33 & v30; /*0x100526071*/
      v37 = _mm_loadu_si128((const __m128i *)((char *)v32 + v36)); /*0x100526074*/
      a5 = _mm_cmpeq_epi8(v37, si128); /*0x10052607e*/
      _R13D = _mm_movemask_epi8(a5); /*0x100526082*/
      if ( _R13D ) /*0x10052608a*/
        break; /*0x10052608a*/
LABEL_33:
      a5.i64[0] = -1; /*0x100526130*/
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v37, (__m128i)-1LL)); /*0x100526138*/
      v29 = v128; /*0x10052613e*/
      if ( (_DWORD)_RCX ) /*0x10052614c*/
        goto LABEL_35; /*0x10052614c*/
      v30 = (unsigned __int64)&i[v36 + 16]; /*0x10052614e*/
    }
    v39 = *(_QWORD *)(v21 + 16); /*0x100526090*/
    v118 = (__int64 (__fastcall *)())v36; /*0x100526094*/
    v103 = v33; /*0x100526098*/
    *(__m128i *)__n = si128; /*0x10052609f*/
    __src = i; /*0x1005260a7*/
    v86 = v37; /*0x1005260ab*/
    v96 = v32; /*0x1005260b3*/
    while ( 1 ) /*0x1005260ba*/
    {
      __asm { tzcnt ecx, r13d } /*0x1005260ba*/
      _RCX = -(__int64)(v33 & (v36 + _RCX)); /*0x1005260c5*/
      if ( v39 == *(_QWORD *)&v34[24 * _RCX + 16] /*0x1005260e5*/
        && !memcmp(*(const void **)(v21 + 8), *(const void **)&v34[24 * _RCX + 8], v39) )
      {
        break; /*0x1005260e5*/
      }
      v40 = _R13D - 1; /*0x1005260f5*/
      LOWORD(v40) = _R13D & (_R13D - 1); /*0x1005260f9*/
      v41 = (_WORD)v40 == 0; /*0x1005260f9*/
      _R13D = v40; /*0x1005260fd*/
      v36 = (unsigned __int64)v118; /*0x100526100*/
      v33 = v103; /*0x100526104*/
      si128 = _mm_load_si128((const __m128i *)__n); /*0x10052610b*/
      i = (char *)__src; /*0x100526113*/
      v37 = _mm_load_si128(&v86); /*0x100526117*/
      v32 = v96; /*0x10052611f*/
      if ( v41 ) /*0x100526126*/
        goto LABEL_33; /*0x100526126*/
    }
    v29 = v128; /*0x1005263a5*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v119, v21); /*0x1005263a9*/
    v48 = v114; /*0x1005263bf*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v104, v114); /*0x1005263c6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, v48); /*0x1005263cb*/
    v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1005263da*/
    v20 = v102; /*0x1005263e2*/
    if ( !v49 ) /*0x1005263e9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x100526d53*/
    qmemcpy(v49, "DUPLICATE_ID", 12); /*0x1005263f9*/
    v98[2] = v121; /*0x100526407*/
    v98[1] = v120; /*0x100526416*/
    v98[0] = v119; /*0x10052641d*/
    v98[5] = v106; /*0x100526432*/
    v98[4] = v105; /*0x100526444*/
    v98[3] = v104; /*0x100526448*/
    v98[6] = 12; /*0x10052644b*/
    v98[7] = v49; /*0x100526456*/
    v98[8] = 12; /*0x10052645d*/
    v50 = v125; /*0x100526468*/
    if ( v125 == v123 ) /*0x100526470*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v123); /*0x100526476*/
    qmemcpy((void *)(v124 + 72 * v50), v98, 0x48u); /*0x100526493*/
    v125 = v50 + 1; /*0x100526499*/
    goto LABEL_75; /*0x10052649d*/
  }
  v99 = nullptr; /*0x100526b72*/
LABEL_86:
  v68 = v92; /*0x100526b7d*/
  v92[2] = v125; /*0x100526b88*/
  _RAX = v123; /*0x100526b8c*/
  v68[1] = v124; /*0x100526b94*/
  *v68 = _RAX; /*0x100526b98*/
  HIDWORD(_RAX) = HIDWORD(v99); /*0x100526b9b*/
  v68[3] = v99; /*0x100526ba2*/
  v70 = v88; /*0x100526ba6*/
  if ( v88 ) /*0x100526bb0*/
  {
    v71 = v90; /*0x100526bb6*/
    if ( v90 ) /*0x100526bc0*/
    {
      v72 = v87; /*0x100526bc6*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v87)); /*0x100526bd7*/
      v74 = v87 + 1; /*0x100526bda*/
      do /*0x100526bf0*/
      {
        if ( !(_WORD)_R13D ) /*0x100526bf6*/
        {
          do /*0x100526c1d*/
          {
            v75 = _mm_movemask_epi8(_mm_load_si128(v74)); /*0x100526c06*/
            v72 -= 24; /*0x100526c0b*/
            ++v74; /*0x100526c12*/
          }
          while ( v75 == 0xFFFF ); /*0x100526c1d*/
          _R13D = ~v75; /*0x100526c1f*/
        }
        __asm { tzcnt eax, r13d } /*0x100526c22*/
        v76 = -3 * _RAX; /*0x100526c2a*/
        v77 = *((_QWORD *)&v72[-1] + v76 - 1); /*0x100526c2e*/
        if ( v77 ) /*0x100526c36*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72[-1].i64[v76], v77, 1); /*0x100526c45*/
        --v71; /*0x100526be0*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100526be7*/
        _R13D &= _R13D - 1; /*0x100526bea*/
      }
      while ( v71 ); /*0x100526bf0*/
    }
    v78 = (24 * v70 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100526c58*/
    v79 = v78 + v70 + 17; /*0x100526c5f*/
    if ( v79 ) /*0x100526c63*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v87 - v78, v79, 16); /*0x100526c77*/
  }
  return v92; /*0x100526c83*/
}