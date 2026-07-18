// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x100a27e90 d=2
unsigned __int64 __fastcall codexmate_lib::core::relay::keychain::read_legacy_secret::h50ecdc4bfc1e690c(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        __int64 a4,
        size_t a5)
{
  _QWORD *v7; // r13
  const void *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  unsigned __int64 result; // rax
  size_t v12; // r15
  unsigned __int64 v13; // r14
  size_t v14; // rcx
  __m128i v15; // xmm1
  size_t v16; // rdx
  __int64 v17; // rsi
  __m128i v18; // xmm2
  unsigned __int64 v19; // r14
  __m128i v20; // xmm3
  __m128i v21; // xmm0
  __int64 v23; // rbx
  size_t v24; // r13
  int v25; // eax
  __int64 v26; // r15
  __int64 v27; // r15
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // r14
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rax
  size_t v36; // r13
  size_t v37; // r12
  size_t v38; // rbx
  const void *v39; // rsi
  __int64 v40; // r15
  unsigned __int64 v41; // r14
  _OWORD *v42; // rax
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __int64 v46; // rbx
  __int64 v47; // r14
  __int64 v48; // rsi
  size_t v49; // rax
  _QWORD *v50; // rcx
  __m128i v51; // [rsp+0h] [rbp-270h] BYREF
  __int128 v52; // [rsp+10h] [rbp-260h] BYREF
  __int128 v53; // [rsp+20h] [rbp-250h]
  __int128 v54; // [rsp+30h] [rbp-240h]
  __int64 v55; // [rsp+40h] [rbp-230h]
  unsigned __int64 v56; // [rsp+48h] [rbp-228h]
  size_t v57; // [rsp+58h] [rbp-218h] BYREF
  const void *v58; // [rsp+60h] [rbp-210h]
  size_t v59; // [rsp+68h] [rbp-208h]
  const __m128i *v60; // [rsp+70h] [rbp-200h] BYREF
  size_t v61; // [rsp+78h] [rbp-1F8h]
  size_t v62; // [rsp+80h] [rbp-1F0h]
  size_t v63; // [rsp+88h] [rbp-1E8h]
  _QWORD v64[2]; // [rsp+90h] [rbp-1E0h] BYREF
  __m128i si128; // [rsp+A0h] [rbp-1D0h] BYREF
  __m128i v66; // [rsp+B0h] [rbp-1C0h] BYREF
  size_t v67[14]; // [rsp+C8h] [rbp-1A8h] BYREF
  _QWORD v68[3]; // [rsp+138h] [rbp-138h] BYREF
  int v69; // [rsp+150h] [rbp-120h] BYREF
  __int64 v70; // [rsp+158h] [rbp-118h]
  __int64 v71; // [rsp+160h] [rbp-110h]
  __int64 v72; // [rsp+168h] [rbp-108h]
  _OWORD v73[7]; // [rsp+170h] [rbp-100h] BYREF
  __int64 v74; // [rsp+1E0h] [rbp-90h] BYREF
  __int64 v75; // [rsp+1E8h] [rbp-88h]
  __int64 v76; // [rsp+1F0h] [rbp-80h]
  __int64 v77; // [rsp+1F8h] [rbp-78h] BYREF
  __int64 v78; // [rsp+200h] [rbp-70h]
  __int64 v79; // [rsp+208h] [rbp-68h]
  size_t v80; // [rsp+210h] [rbp-60h]
  unsigned __int64 v81; // [rsp+218h] [rbp-58h]
  __int128 v82; // [rsp+220h] [rbp-50h]
  const void *v83; // [rsp+230h] [rbp-40h]
  __int64 v84; // [rsp+238h] [rbp-38h]
  _QWORD *v85; // [rsp+240h] [rbp-30h]

  v7 = a1; /*0x100a27eaa*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v57, a2, a3, byte_1015A2B9B, 0xCu); /*0x100a27ec1*/
  v8 = v58; /*0x100a27ec6*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v73, v58, v59); /*0x100a27ede*/
  v10 = *((_QWORD *)&v73[0] + 1); /*0x100a27eea*/
  v9 = *(_QWORD *)&v73[0]; /*0x100a27eea*/
  if ( __OFSUB__(-*(_QWORD *)&v73[0], 1) ) /*0x100a27ef4*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::ha9b120268625f5ba( /*0x100a27f06*/
      0x8000000000000000LL,
      *((__int64 *)&v73[0] + 1));
    result = 0x8000000000000000LL; /*0x100a27f0b*/
    *a1 = 0x8000000000000000LL; /*0x100a27f15*/
    goto LABEL_65; /*0x100a27f19*/
  }
  *((_QWORD *)&v82 + 1) = a4; /*0x100a27f1e*/
  v73[0] = *(_OWORD *)((char *)v73 + 8); /*0x100a27f29*/
  v73[1] = 0u; /*0x100a27f37*/
  v73[2] = __PAIR128__(*((unsigned __int64 *)&v73[0] + 1), v10); /*0x100a27f4d*/
  v84 = v9; /*0x100a27f69*/
  serde_json::de::from_trait::h91d719bd0c9f98fd(v67, v73); /*0x100a27f6d*/
  v12 = v67[0]; /*0x100a27f72*/
  if ( v67[0] ) /*0x100a27f83*/
  {
    v81 = v10; /*0x100a27f89*/
    v64[1] = v67[5]; /*0x100a27f91*/
    v64[0] = v67[4]; /*0x100a27f9c*/
    v63 = v67[3]; /*0x100a27fa7*/
    v62 = v67[2]; /*0x100a27fb5*/
    v61 = v67[1]; /*0x100a27fbc*/
    v60 = (const __m128i *)v67[0]; /*0x100a27fc3*/
    if ( !v67[3] ) /*0x100a27fcd*/
    {
LABEL_13:
      *v7 = 0x8000000000000000LL; /*0x100a280da*/
      v26 = v84; /*0x100a280f3*/
      result = _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc14174b96e674899(&v60); /*0x100a280f7*/
      goto LABEL_63; /*0x100a280fc*/
    }
    v85 = a1; /*0x100a27fd3*/
    v13 = core::hash::BuildHasher::hash_one::h6159beed3a7466cf(v64, *((_QWORD *)&v82 + 1), a5); /*0x100a27fea*/
    v14 = v61; /*0x100a27ff1*/
    v15 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v13 >> 57), (__m128i)0LL); /*0x100a28000*/
    v16 = v12 - 48; /*0x100a28005*/
    v17 = 0; /*0x100a28009*/
    v18 = (__m128i)-1LL; /*0x100a2800b*/
    while ( 1 ) /*0x100a2800f*/
    {
      v19 = v14 & v13; /*0x100a2800f*/
      v20 = _mm_loadu_si128((const __m128i *)(v12 + v19)); /*0x100a28012*/
      v21 = _mm_cmpeq_epi8(v20, v15); /*0x100a2801c*/
      _RAX = (unsigned int)_mm_movemask_epi8(v21); /*0x100a28020*/
      if ( (_DWORD)_RAX ) /*0x100a28026*/
        break; /*0x100a28026*/
LABEL_11:
      v7 = v85; /*0x100a280bc*/
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v20, v18)) ) /*0x100a280c0*/
        goto LABEL_13; /*0x100a280ca*/
      v13 = v19 + v17 + 16; /*0x100a280cc*/
      v17 += 16; /*0x100a280d1*/
    }
    v83 = v8; /*0x100a2802c*/
    v80 = v14; /*0x100a28030*/
    si128 = v15; /*0x100a28034*/
    v66.i64[0] = v17; /*0x100a2803c*/
    v51 = v20; /*0x100a28043*/
    while ( 1 ) /*0x100a2804b*/
    {
      *(_QWORD *)&v82 = _RAX; /*0x100a2804b*/
      __asm { tzcnt eax, eax } /*0x100a2804f*/
      v23 = -48LL * (v14 & (v19 + _RAX)); /*0x100a28060*/
      if ( a5 == *(_QWORD *)(v16 - 48 * (v14 & (v19 + _RAX)) + 16) ) /*0x100a28069*/
      {
        v24 = v16; /*0x100a28077*/
        v25 = memcmp(*((const void **)&v82 + 1), *(const void **)(v16 - 48 * (v14 & (v19 + _RAX)) + 8), a5); /*0x100a2807d*/
        v16 = v24; /*0x100a28082*/
        if ( !v25 ) /*0x100a28087*/
          break; /*0x100a28087*/
      }
      _RAX = (unsigned int)(v82 - 1); /*0x100a28091*/
      LOWORD(_RAX) = v82 & (v82 - 1); /*0x100a28094*/
      v8 = v83; /*0x100a28097*/
      v14 = v80; /*0x100a2809b*/
      v15 = _mm_load_si128(&si128); /*0x100a2809f*/
      v17 = v66.i64[0]; /*0x100a280a7*/
      v18 = (__m128i)-1LL; /*0x100a280ae*/
      v20 = _mm_load_si128(&v51); /*0x100a280b2*/
      if ( !(_WORD)_RAX ) /*0x100a280ba*/
        goto LABEL_11; /*0x100a280ba*/
    }
    base64::engine::Engine::decode::inner::h1ffe54c3de7378f8( /*0x100a2813e*/
      v73,
      &unk_1015A2BA7,
      *(_QWORD *)(v12 + v23 - 16),
      *(_QWORD *)(v12 + v23 - 8),
      *(double *)v21.i64,
      *(double *)v15.i64,
      *(double *)v18.i64);
    v26 = v84; /*0x100a2815f*/
    if ( *(_QWORD *)&v73[0] == 0x8000000000000000LL ) /*0x100a28163*/
    {
      *v85 = 0x8000000000000000LL; /*0x100a28169*/
LABEL_62:
      result = _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc14174b96e674899(&v60); /*0x100a2878d*/
LABEL_63:
      if ( !v26 ) /*0x100a2879c*/
        goto LABEL_65; /*0x100a2879c*/
      goto LABEL_64; /*0x100a2879c*/
    }
    v82 = v73[0]; /*0x100a28171*/
    v80 = *(_QWORD *)&v73[1]; /*0x100a28187*/
    hostname::get::hc653fae84de866de(v73); /*0x100a28192*/
    v28 = *(_QWORD *)&v73[0]; /*0x100a28197*/
    if ( *(_QWORD *)&v73[0] == 0x8000000000000000LL ) /*0x100a281a1*/
    {
      if ( (BYTE8(v73[0]) & 3) == 1 ) /*0x100a281b2*/
      {
        v29 = *(_QWORD *)(*((_QWORD *)&v73[0] + 1) + 7LL); /*0x100a281bc*/
        if ( *(_QWORD *)v29 ) /*0x100a281c0*/
          (*(void (__fastcall **)(_QWORD))v29)(*(_QWORD *)(*((_QWORD *)&v73[0] + 1) - 1LL)); /*0x100a281cb*/
        if ( *(_QWORD *)(v29 + 8) ) /*0x100a281cd*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a281dd*/
LABEL_27:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a2822a*/
      }
    }
    else
    {
      v30 = *((_QWORD *)&v73[0] + 1); /*0x100a281f1*/
      v31 = *(_QWORD *)&v73[1]; /*0x100a281f8*/
      core::str::converts::from_utf8::hb32deb9559450f6e( /*0x100a2820c*/
        (__int64)v73,
        *((__int64 *)&v73[0] + 1),
        *(unsigned __int64 *)&v73[1]);
      if ( LODWORD(v73[0]) != 1 ) /*0x100a28218*/
      {
        v78 = v30; /*0x100a2826e*/
        v79 = v31; /*0x100a28272*/
        v77 = v28; /*0x100a28276*/
        goto LABEL_31; /*0x100a28276*/
      }
      if ( v28 ) /*0x100a2821d*/
        goto LABEL_27; /*0x100a2821d*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a2822f*/
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x100a2823e*/
    if ( !v32 ) /*0x100a28246*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100a28816*/
    *(_WORD *)(v32 + 4) = 26989; /*0x100a2824c*/
    *(_DWORD *)v32 = 1634560353; /*0x100a28252*/
    v77 = 6; /*0x100a28258*/
    v78 = v32; /*0x100a28260*/
    v79 = 6; /*0x100a28264*/
LABEL_31:
    std::env::_var::h5297a832922dea45(&v69, &unk_1015A0324, 4); /*0x100a2827a*/
    if ( v69 != 1 ) /*0x100a28299*/
      goto LABEL_38; /*0x100a28299*/
    v33 = v70; /*0x100a2829f*/
    std::env::_var::h5297a832922dea45(&v69, &unk_1015A02F0, 8); /*0x100a282c0*/
    if ( 2 * v33 ) /*0x100a282c5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a282dd*/
    if ( v69 == 1 ) /*0x100a282e9*/
    {
      v34 = v70; /*0x100a282eb*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a282f9*/
      v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x100a28308*/
      if ( !v35 ) /*0x100a28310*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100a28827*/
      *(_WORD *)(v35 + 4) = 26989; /*0x100a28316*/
      *(_DWORD *)v35 = 1634560353; /*0x100a2831c*/
      v74 = 6; /*0x100a28322*/
      v75 = v35; /*0x100a2832d*/
      v76 = 6; /*0x100a28334*/
      if ( 2 * v34 ) /*0x100a2833c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a28354*/
    }
    else
    {
LABEL_38:
      v76 = v72; /*0x100a28362*/
      v75 = v71; /*0x100a28374*/
      v74 = v70; /*0x100a2837b*/
    }
    *(_QWORD *)&v73[0] = &v77; /*0x100a28386*/
    *((_QWORD *)&v73[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a28394*/
    *(_QWORD *)&v73[1] = &v74; /*0x100a283a2*/
    *((_QWORD *)&v73[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a283a9*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v67, byte_1016FE89F, (unsigned __int64)v73); /*0x100a283c5*/
    v36 = v67[0]; /*0x100a283ca*/
    v37 = v67[1]; /*0x100a283d1*/
    v38 = v67[2]; /*0x100a283d8*/
    v67[0] = 0xBB67AE856A09E667LL; /*0x100a2844f*/
    v67[1] = 0xA54FF53A3C6EF372LL; /*0x100a28460*/
    v67[2] = 0x9B05688C510E527FLL; /*0x100a28471*/
    v67[3] = 0x5BE0CD191F83D9ABLL; /*0x100a28482*/
    memset(&v67[4], 0, 73); /*0x100a28489*/
    if ( v38 >= 0x40 ) /*0x100a28498*/
    {
      v67[4] = v38 >> 6; /*0x100a284a9*/
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v67, v37); /*0x100a284ba*/
      v39 = (const void *)(v37 + (v38 & 0x7FFFFFFFFFFFFFC0LL)); /*0x100a284d0*/
      v38 &= 0x3Fu; /*0x100a284d3*/
    }
    else
    {
      v39 = (const void *)v37; /*0x100a2849d*/
    }
    memcpy(&v67[5], v39, v38); /*0x100a284dc*/
    LOBYTE(v67[13]) = v38; /*0x100a284e1*/
    qmemcpy(v73, v67, sizeof(v73)); /*0x100a284fa*/
    v40 = BYTE8(v73[6]); /*0x100a28504*/
    v41 = _byteswap_uint64((*(_QWORD *)&v73[2] << 9) | (8 * (unsigned int)BYTE8(v73[6]))); /*0x100a28522*/
    *((_BYTE *)&v73[2] + BYTE8(v73[6]) + 8) = 0x80; /*0x100a28525*/
    if ( (_DWORD)v40 == 63 || (__bzero((char *)&v73[2] + v40 + 9, v40 ^ 0x3F), ((unsigned int)v40 ^ 0x38) <= 7) ) /*0x100a28553*/
    {
      v26 = v84; /*0x100a28564*/
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v73, (char *)&v73[2] + 8); /*0x100a28568*/
      v54 = 0; /*0x100a28571*/
      v53 = 0; /*0x100a28579*/
      v52 = 0; /*0x100a28581*/
      v55 = 0; /*0x100a28589*/
      v56 = v41; /*0x100a28594*/
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v73, &v52); /*0x100a285ae*/
    }
    else
    {
      *(_QWORD *)&v73[6] = v41; /*0x100a285b5*/
      v26 = v84; /*0x100a285cb*/
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v73, (char *)&v73[2] + 8); /*0x100a285cf*/
    }
    v66 = (__m128i)v73[0]; /*0x100a285db*/
    si128 = _mm_load_si128((const __m128i *)&v73[1]); /*0x100a285ea*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a285f2*/
    v42 = (_OWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x20u, 1u); /*0x100a28601*/
    if ( !v42 ) /*0x100a28609*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100a28805*/
    v43 = _mm_load_si128((const __m128i *)&xmmword_10151B460); /*0x100a2860f*/
    v44 = _mm_shuffle_epi8(_mm_load_si128(&si128), v43); /*0x100a2861f*/
    v45 = _mm_shuffle_epi8(_mm_load_si128(&v66), v43); /*0x100a2862c*/
    v68[0] = 32; /*0x100a28631*/
    v68[1] = v42; /*0x100a2863c*/
    *v42 = v45; /*0x100a28643*/
    v42[1] = v44; /*0x100a28647*/
    v68[2] = 32; /*0x100a2864c*/
    if ( v36 ) /*0x100a2865a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a28667*/
    if ( v74 ) /*0x100a28676*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a28684*/
    if ( v77 ) /*0x100a2869a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a286a5*/
    *(_QWORD *)&v73[0] = *((_QWORD *)&v82 + 1); /*0x100a286b5*/
    *((_QWORD *)&v73[0] + 1) = *((_QWORD *)&v82 + 1) + v80; /*0x100a286bc*/
    *(_QWORD *)&v73[1] = 0; /*0x100a286c3*/
    *((_QWORD *)&v73[1] + 1) = v68; /*0x100a286d5*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hbcfad58b98b2263c( /*0x100a286ea*/
      &v52,
      v73);
    v46 = *((_QWORD *)&v52 + 1); /*0x100a286ef*/
    v47 = v53; /*0x100a286f6*/
    core::str::converts::from_utf8::hb32deb9559450f6e((__int64)v67, *((__int64 *)&v52 + 1), v53); /*0x100a2870a*/
    if ( LOBYTE(v67[0]) ) /*0x100a28716*/
    {
      v48 = v52; /*0x100a28718*/
      if ( (_QWORD)v52 != 0x8000000000000000LL ) /*0x100a28722*/
      {
        *v85 = 0x8000000000000000LL; /*0x100a287dd*/
        if ( v48 ) /*0x100a287e3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a287f1*/
        goto LABEL_58; /*0x100a287f6*/
      }
      v49 = v67[1]; /*0x100a28728*/
    }
    else
    {
      v47 = v46; /*0x100a28731*/
      v46 = v52; /*0x100a28734*/
      v49 = v53; /*0x100a2873b*/
    }
    v50 = v85; /*0x100a28742*/
    *v85 = v46; /*0x100a28746*/
    v50[1] = v47; /*0x100a28749*/
    v50[2] = v49; /*0x100a2874d*/
LABEL_58:
    if ( v68[0] ) /*0x100a2875f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a2876d*/
    if ( (_QWORD)v82 ) /*0x100a2877d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a28788*/
    goto LABEL_62; /*0x100a28788*/
  }
  v27 = v84; /*0x100a28101*/
  core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7((__int64 **)&v67[1]); /*0x100a28105*/
  result = 0x8000000000000000LL; /*0x100a2810a*/
  *a1 = 0x8000000000000000LL; /*0x100a28114*/
  if ( v27 ) /*0x100a2811b*/
LABEL_64:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a2879e*/
LABEL_65:
  if ( v57 ) /*0x100a287b8*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a287c2*/
  return result; /*0x100a287c7*/
}