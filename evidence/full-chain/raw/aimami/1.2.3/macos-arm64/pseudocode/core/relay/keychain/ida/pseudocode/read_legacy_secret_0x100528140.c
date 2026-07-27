// __ZN13codexmate_lib4core5relay8keychain18read_legacy_secret @ 0x100528140 | 基线 same-set
double __fastcall codexmate_lib::core::relay::keychain::read_legacy_secret::hcbd56474a2086818(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        size_t a5,
        __m128i a6)
{
  _QWORD *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  __m128i v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rsi
  __m128i v18; // xmm2
  unsigned __int64 v19; // r14
  __m128i v20; // xmm3
  __int64 v22; // rbx
  __int64 v23; // r13
  int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rsi
  _OWORD *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rdx
  _OWORD *v34; // r14
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rbx
  int *v38; // r14
  void *v39; // rsi
  int *v40; // rdi
  __int64 v41; // rbx
  int *v42; // r14
  __int64 v43; // rax
  __int64 v44; // r13
  char *v45; // r12
  size_t v46; // rbx
  char *v47; // rsi
  __int64 v48; // r15
  unsigned __int64 v49; // r14
  char *v50; // rsi
  __m128i *v51; // rax
  __m128i v52; // xmm1
  __m128i v53; // xmm2
  __int64 v54; // rbx
  __int64 v55; // r14
  __int64 v56; // rsi
  __int64 v57; // rax
  _QWORD *v58; // rcx
  __m128i v60; // [rsp+0h] [rbp-270h] BYREF
  __int128 v61; // [rsp+10h] [rbp-260h] BYREF
  __int128 v62; // [rsp+20h] [rbp-250h]
  __int128 v63; // [rsp+30h] [rbp-240h]
  __int64 v64; // [rsp+40h] [rbp-230h]
  unsigned __int64 v65; // [rsp+48h] [rbp-228h]
  __int64 v66; // [rsp+58h] [rbp-218h] BYREF
  __int64 v67; // [rsp+60h] [rbp-210h]
  __int64 v68; // [rsp+68h] [rbp-208h]
  __int64 v69; // [rsp+70h] [rbp-200h] BYREF
  __int64 v70; // [rsp+78h] [rbp-1F8h]
  __int64 v71; // [rsp+80h] [rbp-1F0h]
  __int64 v72; // [rsp+88h] [rbp-1E8h]
  _QWORD v73[2]; // [rsp+90h] [rbp-1E0h] BYREF
  __m128i si128; // [rsp+A0h] [rbp-1D0h] BYREF
  __m128i v75; // [rsp+B0h] [rbp-1C0h] BYREF
  _QWORD v76[14]; // [rsp+C8h] [rbp-1A8h] BYREF
  __int64 v77; // [rsp+138h] [rbp-138h] BYREF
  __m128i *v78; // [rsp+140h] [rbp-130h]
  __int64 v79; // [rsp+148h] [rbp-128h]
  int v80; // [rsp+150h] [rbp-120h] BYREF
  __int64 v81; // [rsp+158h] [rbp-118h]
  int *v82; // [rsp+160h] [rbp-110h]
  __int64 v83; // [rsp+168h] [rbp-108h]
  _OWORD v84[7]; // [rsp+170h] [rbp-100h] BYREF
  __int64 v85; // [rsp+1E0h] [rbp-90h] BYREF
  __int64 v86; // [rsp+1E8h] [rbp-88h]
  __int64 v87; // [rsp+1F0h] [rbp-80h]
  __int64 v88; // [rsp+1F8h] [rbp-78h] BYREF
  __int64 v89; // [rsp+200h] [rbp-70h]
  __int64 v90; // [rsp+208h] [rbp-68h]
  __int64 v91; // [rsp+210h] [rbp-60h]
  unsigned __int64 v92; // [rsp+218h] [rbp-58h]
  __int128 v93; // [rsp+220h] [rbp-50h]
  __int64 v94; // [rsp+230h] [rbp-40h]
  __int64 v95; // [rsp+238h] [rbp-38h]
  _QWORD *v96; // [rsp+240h] [rbp-30h]

  v8 = a1; /*0x10052815a*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v66, a2, a3, &unk_1015FECB1, 12); /*0x100528171*/
  v9 = v67; /*0x100528176*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v84, v67, v68); /*0x10052818e*/
  v11 = *((_QWORD *)&v84[0] + 1); /*0x10052819a*/
  v10 = *(_QWORD *)&v84[0]; /*0x10052819a*/
  if ( __OFSUB__(-*(_QWORD *)&v84[0], 1) ) /*0x1005281a4*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x1005281b6*/
      0x8000000000000000LL,
      *((_QWORD *)&v84[0] + 1));
    *a1 = 0x8000000000000000LL; /*0x1005281c5*/
    goto LABEL_66; /*0x1005281c9*/
  }
  *((_QWORD *)&v93 + 1) = a4; /*0x1005281ce*/
  v84[0] = *(_OWORD *)((char *)v84 + 8); /*0x1005281d9*/
  v84[1] = 0u; /*0x1005281e7*/
  v84[2] = __PAIR128__(*((unsigned __int64 *)&v84[0] + 1), v11); /*0x1005281fd*/
  v95 = v10; /*0x100528219*/
  serde_json::de::from_trait::h3d3b15d3afcce048(v76, v84); /*0x10052821d*/
  v12 = v76[0]; /*0x100528222*/
  if ( v76[0] ) /*0x100528233*/
  {
    v92 = v11; /*0x100528239*/
    v73[1] = v76[5]; /*0x100528241*/
    v73[0] = v76[4]; /*0x10052824c*/
    v72 = v76[3]; /*0x100528257*/
    v71 = v76[2]; /*0x100528265*/
    v70 = v76[1]; /*0x10052826c*/
    v69 = v76[0]; /*0x100528273*/
    if ( !v76[3] ) /*0x10052827d*/
    {
LABEL_13:
      *v8 = 0x8000000000000000LL; /*0x10052838a*/
      v11 = v92; /*0x10052839f*/
      v25 = v95; /*0x1005283a3*/
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(&v69); /*0x1005283a7*/
      goto LABEL_64; /*0x1005283ac*/
    }
    v96 = a1; /*0x100528283*/
    v13 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v73, *((_QWORD *)&v93 + 1), a5); /*0x10052829a*/
    v14 = v70; /*0x1005282a1*/
    v15 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v13 >> 57), (__m128i)0LL); /*0x1005282b0*/
    v16 = v12 - 48; /*0x1005282b5*/
    v17 = 0; /*0x1005282b9*/
    v18 = (__m128i)-1LL; /*0x1005282bb*/
    while ( 1 ) /*0x1005282bf*/
    {
      v19 = v14 & v13; /*0x1005282bf*/
      v20 = _mm_loadu_si128((const __m128i *)(v12 + v19)); /*0x1005282c2*/
      a6 = _mm_cmpeq_epi8(v20, v15); /*0x1005282cc*/
      _RAX = (unsigned int)_mm_movemask_epi8(a6); /*0x1005282d0*/
      if ( (_DWORD)_RAX ) /*0x1005282d6*/
        break; /*0x1005282d6*/
LABEL_11:
      v8 = v96; /*0x10052836c*/
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v20, v18)) ) /*0x100528370*/
        goto LABEL_13; /*0x10052837a*/
      v13 = v19 + v17 + 16; /*0x10052837c*/
      v17 += 16; /*0x100528381*/
    }
    v94 = v9; /*0x1005282dc*/
    v91 = v14; /*0x1005282e0*/
    si128 = v15; /*0x1005282e4*/
    v75.i64[0] = v17; /*0x1005282ec*/
    v60 = v20; /*0x1005282f3*/
    while ( 1 ) /*0x1005282fb*/
    {
      *(_QWORD *)&v93 = _RAX; /*0x1005282fb*/
      __asm { tzcnt eax, eax } /*0x1005282ff*/
      v22 = -48LL * (v14 & (v19 + _RAX)); /*0x100528310*/
      if ( a5 == *(_QWORD *)(v16 - 48 * (v14 & (v19 + _RAX)) + 16) ) /*0x100528319*/
      {
        v23 = v16; /*0x100528327*/
        v24 = memcmp(*((const void **)&v93 + 1), *(const void **)(v16 - 48 * (v14 & (v19 + _RAX)) + 8), a5); /*0x10052832d*/
        v16 = v23; /*0x100528332*/
        if ( !v24 ) /*0x100528337*/
          break; /*0x100528337*/
      }
      _RAX = (unsigned int)(v93 - 1); /*0x100528341*/
      LOWORD(_RAX) = v93 & (v93 - 1); /*0x100528344*/
      v9 = v94; /*0x100528347*/
      v14 = v91; /*0x10052834b*/
      v15 = _mm_load_si128(&si128); /*0x10052834f*/
      v17 = v75.i64[0]; /*0x100528357*/
      v18 = (__m128i)-1LL; /*0x10052835e*/
      v20 = _mm_load_si128(&v60); /*0x100528362*/
      if ( !(_WORD)_RAX ) /*0x10052836a*/
        goto LABEL_11; /*0x10052836a*/
    }
    v26 = (__int64)&unk_1015FECBD; /*0x1005283e0*/
    base64::engine::Engine::decode::inner::h0ef0f283e408ae41( /*0x1005283ee*/
      v84,
      &unk_1015FECBD,
      *(_QWORD *)(v12 + v22 - 16),
      *(_QWORD *)(v12 + v22 - 8));
    v9 = v94; /*0x100528407*/
    v11 = v92; /*0x10052840b*/
    v25 = v95; /*0x10052840f*/
    if ( *(_QWORD *)&v84[0] == 0x8000000000000000LL ) /*0x100528413*/
    {
      *v96 = 0x8000000000000000LL; /*0x100528419*/
LABEL_63:
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(&v69); /*0x100528a3d*/
LABEL_64:
      if ( !v25 ) /*0x100528a4c*/
        goto LABEL_66; /*0x100528a4c*/
      goto LABEL_65; /*0x100528a4c*/
    }
    v93 = v84[0]; /*0x100528421*/
    v91 = *(_QWORD *)&v84[1]; /*0x100528437*/
    v27 = v84; /*0x10052843b*/
    hostname::get::hc653fae84de866de(v84, *(double *)a6.i64, *(double *)v15.i64, *(double *)v18.i64); /*0x100528442*/
    v28 = *(_QWORD *)&v84[0]; /*0x100528447*/
    if ( *(_QWORD *)&v84[0] == 0x8000000000000000LL ) /*0x100528451*/
    {
      if ( (BYTE8(v84[0]) & 3) == 1 ) /*0x100528462*/
      {
        v29 = *((_QWORD *)&v84[0] + 1) - 1LL; /*0x100528464*/
        v30 = *(_QWORD *)(*((_QWORD *)&v84[0] + 1) - 1LL); /*0x100528468*/
        v31 = *(_QWORD *)(*((_QWORD *)&v84[0] + 1) + 7LL); /*0x10052846c*/
        if ( *(_QWORD *)v31 ) /*0x100528470*/
          (*(void (__fastcall **)(__int64))v31)(v30); /*0x10052847b*/
        v32 = *(_QWORD *)(v31 + 8); /*0x10052847d*/
        if ( v32 ) /*0x100528484*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16)); /*0x10052848d*/
        v26 = 24; /*0x100528492*/
        v33 = 8; /*0x100528497*/
        v27 = (_OWORD *)v29; /*0x10052849c*/
        goto LABEL_28; /*0x10052849f*/
      }
    }
    else
    {
      v34 = *((_OWORD **)&v84[0] + 1); /*0x1005284a1*/
      v35 = *(_QWORD *)&v84[1]; /*0x1005284a8*/
      v27 = v84; /*0x1005284af*/
      v26 = *((_QWORD *)&v84[0] + 1); /*0x1005284b6*/
      core::str::converts::from_utf8::hb32deb9559450f6e(v84, *((_QWORD *)&v84[0] + 1), *(_QWORD *)&v84[1]); /*0x1005284bc*/
      if ( LODWORD(v84[0]) != 1 ) /*0x1005284c8*/
      {
        v89 = (__int64)v34; /*0x10052851e*/
        v90 = v35; /*0x100528522*/
        v88 = v28; /*0x100528526*/
        goto LABEL_32; /*0x100528526*/
      }
      if ( v28 ) /*0x1005284cd*/
      {
        v33 = 1; /*0x1005284cf*/
        v27 = v34; /*0x1005284d4*/
        v26 = v28; /*0x1005284d7*/
LABEL_28:
        *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v26, v33); /*0x1005284da*/
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v26); /*0x1005284df*/
    v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1005284ee*/
    if ( !v36 ) /*0x1005284f6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100528ac6*/
    *(_WORD *)(v36 + 4) = 26989; /*0x1005284fc*/
    *(_DWORD *)v36 = 1634560353; /*0x100528502*/
    v88 = 6; /*0x100528508*/
    v89 = v36; /*0x100528510*/
    v90 = 6; /*0x100528514*/
LABEL_32:
    std::env::_var::h5297a832922dea45(&v80, "USERkeysNULLUser.gitAuth", 4, *(double *)a6.i64); /*0x10052852a*/
    if ( v80 != 1 ) /*0x100528549*/
      goto LABEL_39; /*0x100528549*/
    v37 = v81; /*0x10052854f*/
    v38 = v82; /*0x100528556*/
    v39 = &unk_1015FBFD0; /*0x10052855d*/
    v40 = &v80; /*0x100528564*/
    std::env::_var::h5297a832922dea45(&v80, &unk_1015FBFD0, 8, *(double *)a6.i64); /*0x100528570*/
    if ( 2 * v37 ) /*0x100528575*/
    {
      v40 = v38; /*0x100528587*/
      v39 = (void *)v37; /*0x10052858a*/
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v37, 1); /*0x10052858d*/
    }
    if ( v80 == 1 ) /*0x100528599*/
    {
      v41 = v81; /*0x10052859b*/
      v42 = v82; /*0x1005285a2*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, v39); /*0x1005285a9*/
      v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1005285b8*/
      if ( !v43 ) /*0x1005285c0*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100528ad7*/
      *(_WORD *)(v43 + 4) = 26989; /*0x1005285c6*/
      *(_DWORD *)v43 = 1634560353; /*0x1005285cc*/
      v85 = 6; /*0x1005285d2*/
      v86 = v43; /*0x1005285dd*/
      v87 = 6; /*0x1005285e4*/
      if ( 2 * v41 ) /*0x1005285ec*/
        *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1); /*0x100528604*/
    }
    else
    {
LABEL_39:
      v87 = v83; /*0x100528612*/
      v86 = (__int64)v82; /*0x100528624*/
      v85 = v81; /*0x10052862b*/
    }
    *(_QWORD *)&v84[0] = &v88; /*0x100528636*/
    *((_QWORD *)&v84[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100528644*/
    *(_QWORD *)&v84[1] = &v85; /*0x100528652*/
    *((_QWORD *)&v84[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100528659*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v76, &unk_1017C17F4, v84); /*0x100528675*/
    v44 = v76[0]; /*0x10052867a*/
    v45 = (char *)v76[1]; /*0x100528681*/
    v46 = v76[2]; /*0x100528688*/
    v76[0] = 0xBB67AE856A09E667LL; /*0x1005286ff*/
    v76[1] = 0xA54FF53A3C6EF372LL; /*0x100528710*/
    v76[2] = 0x9B05688C510E527FLL; /*0x100528721*/
    v76[3] = 0x5BE0CD191F83D9ABLL; /*0x100528732*/
    memset(&v76[4], 0, 73); /*0x100528739*/
    if ( v46 >= 0x40 ) /*0x100528748*/
    {
      v76[4] = v46 >> 6; /*0x100528759*/
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v76, v45, *(double *)a6.i64); /*0x10052876a*/
      v47 = &v45[v46 & 0x7FFFFFFFFFFFFFC0LL]; /*0x100528780*/
      v46 &= 0x3Fu; /*0x100528783*/
    }
    else
    {
      v47 = v45; /*0x10052874d*/
    }
    memcpy(&v76[5], v47, v46); /*0x10052878c*/
    LOBYTE(v76[13]) = v46; /*0x100528791*/
    qmemcpy(v84, v76, sizeof(v84)); /*0x1005287aa*/
    v48 = BYTE8(v84[6]); /*0x1005287b4*/
    v49 = _byteswap_uint64((*(_QWORD *)&v84[2] << 9) | (8 * (unsigned int)BYTE8(v84[6]))); /*0x1005287d2*/
    *((_BYTE *)&v84[2] + BYTE8(v84[6]) + 8) = 0x80; /*0x1005287d5*/
    if ( (_DWORD)v48 == 63 || (__bzero((char *)&v84[2] + v48 + 9, v48 ^ 0x3F), ((unsigned int)v48 ^ 0x38) <= 7) ) /*0x100528803*/
    {
      v25 = v95; /*0x100528814*/
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v84, (char *)&v84[2] + 8, *(double *)a6.i64); /*0x100528818*/
      v63 = 0; /*0x100528821*/
      v62 = 0; /*0x100528829*/
      v61 = 0; /*0x100528831*/
      v64 = 0; /*0x100528839*/
      v65 = v49; /*0x100528844*/
      v50 = (char *)&v61; /*0x100528852*/
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v84, &v61, 0.0); /*0x10052885e*/
    }
    else
    {
      *(_QWORD *)&v84[6] = v49; /*0x100528865*/
      v50 = (char *)&v84[2] + 8; /*0x100528878*/
      v25 = v95; /*0x10052887b*/
      sha2::sha256::compress256::hc74ebc2fd6208bb9(v84, (char *)&v84[2] + 8, *(double *)a6.i64); /*0x10052887f*/
    }
    v75 = (__m128i)v84[0]; /*0x10052888b*/
    si128 = _mm_load_si128((const __m128i *)&v84[1]); /*0x10052889a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v84, v50); /*0x1005288a2*/
    v51 = (__m128i *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x1005288b1*/
    if ( !v51 ) /*0x1005288b9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x100528ab5*/
    a6 = _mm_load_si128((const __m128i *)&xmmword_1015FBDB0); /*0x1005288bf*/
    v52 = _mm_shuffle_epi8(_mm_load_si128(&si128), a6); /*0x1005288cf*/
    v53 = _mm_shuffle_epi8(_mm_load_si128(&v75), a6); /*0x1005288dc*/
    v77 = 32; /*0x1005288e1*/
    v78 = v51; /*0x1005288ec*/
    *v51 = v53; /*0x1005288f3*/
    v51[1] = v52; /*0x1005288f7*/
    v79 = 32; /*0x1005288fc*/
    if ( v44 ) /*0x10052890a*/
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x100528917*/
    if ( v85 ) /*0x100528926*/
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v85, 1); /*0x100528934*/
    if ( v88 ) /*0x10052894a*/
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, v88, 1); /*0x100528955*/
    *(_QWORD *)&v84[0] = *((_QWORD *)&v93 + 1); /*0x100528965*/
    *((_QWORD *)&v84[0] + 1) = *((_QWORD *)&v93 + 1) + v91; /*0x10052896c*/
    *(_QWORD *)&v84[1] = 0; /*0x100528973*/
    *((_QWORD *)&v84[1] + 1) = &v77; /*0x100528985*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h5fdde1434f5d0c5d( /*0x10052899a*/
      &v61,
      v84,
      *(double *)a6.i64);
    v54 = *((_QWORD *)&v61 + 1); /*0x10052899f*/
    v55 = v62; /*0x1005289a6*/
    core::str::converts::from_utf8::hb32deb9559450f6e(v76, *((_QWORD *)&v61 + 1), v62); /*0x1005289ba*/
    if ( LOBYTE(v76[0]) ) /*0x1005289c6*/
    {
      v56 = v61; /*0x1005289c8*/
      if ( (_QWORD)v61 != 0x8000000000000000LL ) /*0x1005289d2*/
      {
        *v96 = 0x8000000000000000LL; /*0x100528a8d*/
        if ( v56 ) /*0x100528a93*/
          *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v56, 1); /*0x100528aa1*/
        goto LABEL_59; /*0x100528aa6*/
      }
      v57 = v76[1]; /*0x1005289d8*/
    }
    else
    {
      v55 = v54; /*0x1005289e1*/
      v54 = v61; /*0x1005289e4*/
      v57 = v62; /*0x1005289eb*/
    }
    v58 = v96; /*0x1005289f2*/
    *v96 = v54; /*0x1005289f6*/
    v58[1] = v55; /*0x1005289f9*/
    v58[2] = v57; /*0x1005289fd*/
LABEL_59:
    v11 = v92; /*0x100528a01*/
    if ( v77 ) /*0x100528a0f*/
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v77, 1); /*0x100528a1d*/
    v9 = v94; /*0x100528a29*/
    if ( (_QWORD)v93 ) /*0x100528a2d*/
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v93 + 1), v93, 1); /*0x100528a38*/
    goto LABEL_63; /*0x100528a38*/
  }
  v25 = v95; /*0x1005283b1*/
  core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v76[1]); /*0x1005283b5*/
  *a1 = 0x8000000000000000LL; /*0x1005283c4*/
  if ( v25 ) /*0x1005283cb*/
LABEL_65:
    *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v25, 1); /*0x100528a4e*/
LABEL_66:
  if ( v66 ) /*0x100528a68*/
    *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v66, 1); /*0x100528a72*/
  return *(double *)a6.i64; /*0x100528a77*/
}