// __ZN13codexmate_lib4core10account_io14preview_import @ 0x1008da220 | 基线 same-set
__int64 __fastcall codexmate_lib::core::account_io::preview_import::hfc303afa193f9442(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4)
{
  __int64 v7; // r12
  __int64 v8; // r14
  const __m128i *v9; // rax
  const __m128i *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int32 v27; // ebx
  int v28; // r14d
  unsigned __int8 *v29; // rsi
  __m128i v30; // xmm0
  __m128i si128; // xmm2
  unsigned __int64 v32; // rdi
  __m128i v33; // xmm1
  __m128i v34; // xmm1
  unsigned __int64 v35; // rsi
  unsigned __int8 *v36; // rdx
  __int64 v37; // rsi
  unsigned __int8 *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  const __m128i *v47; // r12
  const __m128i *v48; // r13
  const __m128i *v50; // rbx
  int v51; // r14d
  __int64 v52; // rax
  __int64 v53; // rsi
  unsigned __int64 v54; // rax
  __int64 __dst; // [rsp+8h] [rbp-538h] BYREF
  _QWORD v57[92]; // [rsp+10h] [rbp-530h] BYREF
  _QWORD v58[11]; // [rsp+2F0h] [rbp-250h] BYREF
  _QWORD v59[4]; // [rsp+348h] [rbp-1F8h] BYREF
  _QWORD v60[2]; // [rsp+368h] [rbp-1D8h] BYREF
  _QWORD v61[3]; // [rsp+378h] [rbp-1C8h] BYREF
  const __m128i *v62[12]; // [rsp+390h] [rbp-1B0h] BYREF
  __int64 v63; // [rsp+3F0h] [rbp-150h]
  __int64 v64; // [rsp+3F8h] [rbp-148h]
  __int64 v65; // [rsp+400h] [rbp-140h] BYREF
  _QWORD v66[12]; // [rsp+408h] [rbp-138h] BYREF
  __int64 v67; // [rsp+468h] [rbp-D8h]
  __int64 v68; // [rsp+470h] [rbp-D0h]
  __int64 v69; // [rsp+478h] [rbp-C8h]
  unsigned __int64 v70; // [rsp+480h] [rbp-C0h]
  _QWORD v71[11]; // [rsp+488h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+4E0h] [rbp-60h] BYREF
  const __m128i *v73; // [rsp+4E8h] [rbp-58h]
  __int64 v74; // [rsp+4F0h] [rbp-50h] BYREF
  __int64 v75; // [rsp+4F8h] [rbp-48h]
  unsigned __int64 v76; // [rsp+500h] [rbp-40h] BYREF
  __int64 v77; // [rsp+508h] [rbp-38h]
  char v78[41]; // [rsp+517h] [rbp-29h] BYREF

  codexmate_lib::core::account_io::parse_import_file::hafe1dc7bc293604c(&__dst); /*0x1008da257*/
  qmemcpy(v62, v57, sizeof(v62)); /*0x1008da27c*/
  if ( __OFSUB__(-__dst, 1) ) /*0x1008da266*/
  {
    qmemcpy((void *)(a1 + 8), v62, 0x60u); /*0x1008da291*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1008da294*/
    return a1; /*0x1008da297*/
  }
  v73 = a4; /*0x1008da29c*/
  v7 = v57[13]; /*0x1008da2a7*/
  v8 = v57[14]; /*0x1008da2ae*/
  v63 = v57[15]; /*0x1008da2bc*/
  qmemcpy(v66, v62, sizeof(v66)); /*0x1008da2d6*/
  v65 = __dst; /*0x1008da2d9*/
  v67 = v57[12]; /*0x1008da2e0*/
  _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178( /*0x1008da2f1*/
    &__dst,
    a2);
  codexmate_lib::core::account_io::read_registry_for_mutation::h61c2c695512ac956(v62, v57[27], v57[28]); /*0x1008da30b*/
  v9 = v62[0]; /*0x1008da310*/
  qmemcpy(v71, &v62[1], sizeof(v71)); /*0x1008da32a*/
  if ( v62[0] != (const __m128i *)11 ) /*0x1008da331*/
  {
    qmemcpy((void *)(a1 + 16), v71, 0x58u); /*0x1008da497*/
    *(_QWORD *)(a1 + 8) = v9; /*0x1008da49a*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1008da4a8*/
    core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&__dst); /*0x1008da4b2*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_io..ExportFile$GT$::h73a7f10c67007276(&v65); /*0x1008da4be*/
    if ( !v7 ) /*0x1008da4c6*/
      return a1; /*0x1008da4c6*/
    v18 = 1; /*0x1008da4cc*/
    v19 = v8; /*0x1008da4d1*/
    v20 = v7; /*0x1008da4d4*/
LABEL_54:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v20, v18); /*0x1008daa66*/
    return a1; /*0x1008daa66*/
  }
  v77 = v8; /*0x1008da337*/
  qmemcpy(v58, v71, sizeof(v58)); /*0x1008da351*/
  v10 = nullptr; /*0x1008da354*/
  if ( v58[0] != 0x8000000000000000LL ) /*0x1008da368*/
    v10 = (const __m128i *)v58; /*0x1008da368*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008da373*/
  v14 = v11; /*0x1008da375*/
  if ( *(_BYTE *)(v11 + 16) == 1 ) /*0x1008da37c*/
  {
    v15 = *(_QWORD *)v11; /*0x1008da382*/
    v16 = *(_QWORD *)(v14 + 8); /*0x1008da385*/
  }
  else
  {
    v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008daa80*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            &v72,
            v12,
            v13);
    *(_QWORD *)v14 = v15; /*0x1008daa85*/
    *(_QWORD *)(v14 + 8) = v16; /*0x1008daa88*/
    *(_BYTE *)(v14 + 16) = 1; /*0x1008daa8c*/
  }
  *(_QWORD *)v14 = v15 + 1; /*0x1008da38d*/
  memset(&v71[1], 0, 24); /*0x1008da3b3*/
  v71[0] = anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008da3c1*/
  v71[4] = v15; /*0x1008da3c8*/
  v71[5] = v16; /*0x1008da3cf*/
  v62[0] = (const __m128i *)1; /*0x1008da3d6*/
  v62[1] = v10; /*0x1008da3e1*/
  v62[2] = nullptr; /*0x1008da3e8*/
  v62[4] = nullptr; /*0x1008da3f3*/
  _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::h62094a7eef02e581( /*0x1008da40c*/
    v71,
    v62);
  v62[0] = (const __m128i *)v71[0]; /*0x1008da41f*/
  v62[1] = (const __m128i *)v71[1]; /*0x1008da426*/
  v62[2] = (const __m128i *)v71[2]; /*0x1008da434*/
  v62[3] = (const __m128i *)v71[3]; /*0x1008da442*/
  v62[4] = (const __m128i *)v71[4]; /*0x1008da450*/
  v62[5] = (const __m128i *)v71[5]; /*0x1008da45e*/
  v17 = v58[0]; /*0x1008da465*/
  if ( v58[0] == 0x8000000000000000LL ) /*0x1008da479*/
  {
    v71[0] = 0x8000000000000000LL; /*0x1008da47b*/
  }
  else
  {
    v64 = v7; /*0x1008da4dc*/
    v72 = v58[1]; /*0x1008da4ea*/
    v21 = v58[2]; /*0x1008da4ee*/
    v71[0] = v58[3]; /*0x1008da4fc*/
    v71[1] = v58[4]; /*0x1008da50a*/
    v71[2] = v58[5]; /*0x1008da518*/
    if ( v58[2] ) /*0x1008da522*/
    {
      v22 = v72; /*0x1008da524*/
      do /*0x1008da542*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v22); /*0x1008da533*/
        v22 += 424; /*0x1008da538*/
        --v21; /*0x1008da53f*/
      }
      while ( v21 ); /*0x1008da542*/
    }
    v7 = v64; /*0x1008da547*/
    if ( v17 ) /*0x1008da54e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 424 * v17, 8); /*0x1008da560*/
  }
  v23 = v57[3]; /*0x1008da565*/
  codexmate_lib::core::account_io::read_effective_active_account_key::h56ef408fb1c13e98(v61, v57[3], v57[4], v71); /*0x1008da584*/
  v24 = v66[7]; /*0x1008da590*/
  v59[0] = v66[6]; /*0x1008da5a1*/
  v59[1] = v66[6] + 416LL * v66[7]; /*0x1008da5a8*/
  v59[2] = v62; /*0x1008da5b6*/
  v59[3] = v61; /*0x1008da5bd*/
  if ( v66[7] ) /*0x1008da5c7*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v61, v23); /*0x1008da5d0*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(152 * v24, 8); /*0x1008da5dd*/
    if ( !v25 ) /*0x1008da5e5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 152 * v24); /*0x1008da5ef*/
  }
  else
  {
    v25 = 8; /*0x1008da5f9*/
  }
  v74 = v24; /*0x1008da5fe*/
  v75 = v25; /*0x1008da602*/
  v76 = 0; /*0x1008da60a*/
  v71[2] = v25; /*0x1008da612*/
  v71[0] = &v76; /*0x1008da619*/
  v71[1] = 0; /*0x1008da620*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h0cbfd752b94aa8ab( /*0x1008da639*/
    v59,
    v71);
  v68 = v74; /*0x1008da646*/
  v69 = v75; /*0x1008da64d*/
  v70 = v76; /*0x1008da658*/
  if ( !v76 ) /*0x1008da662*/
  {
    v27 = 0; /*0x1008da673*/
    v28 = 0; /*0x1008da675*/
    goto LABEL_37; /*0x1008da678*/
  }
  if ( v76 >= 4 ) /*0x1008da668*/
  {
    v26 = v76 & 0xFFFFFFFFFFFFFFFCLL; /*0x1008da680*/
    v29 = (unsigned __int8 *)(v75 + 600); /*0x1008da684*/
    v30 = 0; /*0x1008da68b*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_101676370); /*0x1008da68f*/
    v32 = v76 & 0xFFFFFFFFFFFFFFFCLL; /*0x1008da697*/
    v33 = 0; /*0x1008da69a*/
    do /*0x1008da6e5*/
    {
      v30 = _mm_add_epi64( /*0x1008da6cd*/
              v30,
              _mm_cvtepu8_epi64(_mm_xor_si128(_mm_insert_epi8(_mm_cvtsi32_si128(*((_DWORD *)v29 - 114)), *(v29 - 304), 1), si128)));
      v33 = _mm_add_epi64( /*0x1008da6d6*/
              v33,
              _mm_cvtepu8_epi64(_mm_xor_si128(_mm_insert_epi8(_mm_cvtsi32_si128(*((_DWORD *)v29 - 38)), *v29, 1), si128)));
      v29 += 608; /*0x1008da6da*/
      v32 -= 4LL; /*0x1008da6e1*/
    }
    while ( v32 ); /*0x1008da6e5*/
    v34 = _mm_add_epi64(v33, v30); /*0x1008da6e7*/
    v27 = _mm_add_epi64(_mm_shuffle_epi32(v34, 238), v34).u32[0]; /*0x1008da6f4*/
    if ( v76 == v26 ) /*0x1008da6fc*/
      goto LABEL_30; /*0x1008da6fc*/
  }
  else
  {
    v26 = 0; /*0x1008da66a*/
    v27 = 0; /*0x1008da66c*/
  }
  v35 = v76 - v26; /*0x1008da701*/
  v36 = (unsigned __int8 *)(152 * v26 + v75 + 144); /*0x1008da70b*/
  do /*0x1008da734*/
  {
    v27 += *v36 ^ 1; /*0x1008da727*/
    v36 += 152; /*0x1008da72a*/
    --v35; /*0x1008da731*/
  }
  while ( v35 ); /*0x1008da734*/
LABEL_30:
  if ( v76 >= 4 ) /*0x1008da73f*/
  {
    v38 = (unsigned __int8 *)(v75 + 600); /*0x1008da74c*/
    v37 = 0; /*0x1008da753*/
    v28 = 0; /*0x1008da755*/
    do /*0x1008da796*/
    {
      v28 += *(v38 - 456) + *(v38 - 304) + *(v38 - 152) + *v38; /*0x1008da785*/
      v37 += 4; /*0x1008da788*/
      v38 += 608; /*0x1008da78c*/
    }
    while ( (v76 & 0xFFFFFFFFFFFFFFFCLL) != v37 ); /*0x1008da796*/
  }
  else
  {
    v37 = 0; /*0x1008da741*/
    v28 = 0; /*0x1008da743*/
  }
  if ( (v76 & 3) != 0 ) /*0x1008da79b*/
  {
    v39 = 0; /*0x1008da7b3*/
    do /*0x1008da7d1*/
    {
      v28 += *(unsigned __int8 *)(152 * v37 + v75 + 144 + v39); /*0x1008da7c4*/
      v39 += 152; /*0x1008da7c7*/
    }
    while ( 152 * (v76 & 3) != v39 ); /*0x1008da7d1*/
  }
LABEL_37:
  v60[0] = a3; /*0x1008da7d3*/
  v60[1] = v73; /*0x1008da7de*/
  v74 = 0; /*0x1008da7e5*/
  v75 = 1; /*0x1008da7ed*/
  v76 = 0; /*0x1008da7f5*/
  v71[2] = 1610612768; /*0x1008da7fd*/
  v71[0] = &v74; /*0x1008da80c*/
  v71[1] = &anon_155c4da9b5393270cfa7378e2b52c417_744; /*0x1008da81a*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v60, v71) ) /*0x1008da82f*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008daab3*/
      &anon_155c4da9b5393270cfa7378e2b52c417_745,
      55,
      v78,
      &anon_155c4da9b5393270cfa7378e2b52c417_758,
      &anon_155c4da9b5393270cfa7378e2b52c417_747);
  *(_QWORD *)(a1 + 16) = v76; /*0x1008da840*/
  v40 = v74; /*0x1008da844*/
  *(_QWORD *)(a1 + 8) = v75; /*0x1008da84c*/
  *(_QWORD *)a1 = v40; /*0x1008da850*/
  *(_QWORD *)(a1 + 64) = v66[1]; /*0x1008da85a*/
  v41 = v65; /*0x1008da85e*/
  *(_QWORD *)(a1 + 56) = v66[0]; /*0x1008da86c*/
  *(_QWORD *)(a1 + 48) = v41; /*0x1008da870*/
  v42 = v66[2]; /*0x1008da874*/
  *(_QWORD *)(a1 + 80) = v66[3]; /*0x1008da882*/
  *(_QWORD *)(a1 + 72) = v42; /*0x1008da886*/
  *(_QWORD *)(a1 + 88) = v66[4]; /*0x1008da891*/
  v43 = v66[11]; /*0x1008da895*/
  v44 = v66[9]; /*0x1008da8a3*/
  *(_QWORD *)(a1 + 120) = v66[8]; /*0x1008da8aa*/
  *(_QWORD *)(a1 + 136) = v66[10]; /*0x1008da8b5*/
  *(_QWORD *)(a1 + 128) = v44; /*0x1008da8bc*/
  *(_QWORD *)(a1 + 112) = v70; /*0x1008da8ca*/
  v45 = v68; /*0x1008da8ce*/
  *(_QWORD *)(a1 + 104) = v69; /*0x1008da8dc*/
  *(_QWORD *)(a1 + 96) = v45; /*0x1008da8e0*/
  *(_QWORD *)(a1 + 24) = v7; /*0x1008da8e4*/
  *(_QWORD *)(a1 + 32) = v77; /*0x1008da8ec*/
  *(_QWORD *)(a1 + 40) = v63; /*0x1008da8f7*/
  *(_QWORD *)(a1 + 144) = v43; /*0x1008da8fb*/
  *(_QWORD *)(a1 + 152) = v67; /*0x1008da909*/
  *(_DWORD *)(a1 + 160) = v27; /*0x1008da910*/
  *(_DWORD *)(a1 + 164) = v28; /*0x1008da917*/
  if ( v61[0] != 0x8000000000000000LL && v61[0] ) /*0x1008da937*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[1], v61[0], 1); /*0x1008da945*/
  HIDWORD(_RAX) = HIDWORD(v62[1]); /*0x1008da951*/
  if ( v62[1] ) /*0x1008da95b*/
  {
    v73 = v62[1]; /*0x1008da961*/
    v47 = v62[3]; /*0x1008da965*/
    if ( v62[3] ) /*0x1008da96f*/
    {
      v48 = v62[0]; /*0x1008da975*/
      _R14D = ~_mm_movemask_epi8(_mm_load_si128(v62[0])); /*0x1008da987*/
      v50 = v62[0] + 1; /*0x1008da98a*/
      do /*0x1008da9a0*/
      {
        if ( !(_WORD)_R14D ) /*0x1008da9a6*/
        {
          do /*0x1008da9cb*/
          {
            v51 = _mm_movemask_epi8(_mm_load_si128(v50)); /*0x1008da9b4*/
            v48 -= 24; /*0x1008da9b9*/
            ++v50; /*0x1008da9c0*/
          }
          while ( v51 == 0xFFFF ); /*0x1008da9cb*/
          _R14D = ~v51; /*0x1008da9cd*/
        }
        __asm { tzcnt eax, r14d } /*0x1008da9d0*/
        v52 = -3 * _RAX; /*0x1008da9d8*/
        v53 = *((_QWORD *)&v48[-1] + v52 - 1); /*0x1008da9dc*/
        if ( v53 ) /*0x1008da9e4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48[-1].i64[v52], v53, 1); /*0x1008da9f4*/
        v47 = (const __m128i *)((char *)v47 - 1); /*0x1008da990*/
        _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x1008da997*/
        _R14D &= _R14D - 1; /*0x1008da99a*/
      }
      while ( v47 ); /*0x1008da9a0*/
    }
    v54 = (24LL * (_QWORD)v73 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1008daa0b*/
    if ( &v73->i8[v54] != (__int8 *)-17LL ) /*0x1008daa1d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v62[0] - v54, &v73[1].i8[v54 + 1], 16); /*0x1008daa2e*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&__dst); /*0x1008daa3a*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h17a389cce54f8b4d(&v66[5]); /*0x1008daa42*/
  if ( v66[5] ) /*0x1008daa51*/
  {
    v19 = v66[6]; /*0x1008daa53*/
    v20 = 416LL * v66[5]; /*0x1008daa5a*/
    v18 = 8; /*0x1008daa61*/
    goto LABEL_54; /*0x1008daa61*/
  }
  return a1; /*0x1008daa6e*/
}