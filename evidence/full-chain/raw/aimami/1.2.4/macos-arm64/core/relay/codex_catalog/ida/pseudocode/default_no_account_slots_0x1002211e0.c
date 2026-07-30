// __ZN13codexmate_lib4core5relay13codex_catalog24default_no_account_slots @ 0x1002211e0 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::default_no_account_slots::hf70572559361205d(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  size_t v14; // r12
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rsi
  _QWORD *v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rsi
  signed __int64 v22; // rsi
  __int64 v23; // rdi
  signed __int64 v24; // r12
  const void *v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r13
  unsigned __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v33; // rbx
  const __m128i *v34; // r15
  const __m128i *v36; // r12
  int v37; // r13d
  const __m128i *v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v46; // rbx
  const __m128i *v47; // r15
  const __m128i *v49; // r12
  int v50; // r13d
  const __m128i *v51; // r14
  __int64 v52; // rsi
  __int64 v53; // rsi
  _BYTE v54[88]; // [rsp+8h] [rbp-1F8h] BYREF
  _QWORD v55[9]; // [rsp+60h] [rbp-1A0h] BYREF
  _QWORD v56[3]; // [rsp+A8h] [rbp-158h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-140h]
  __int64 v58; // [rsp+C8h] [rbp-138h]
  __int64 v59; // [rsp+D0h] [rbp-130h]
  __int64 v60; // [rsp+D8h] [rbp-128h] BYREF
  _QWORD v61[11]; // [rsp+E0h] [rbp-120h] BYREF
  __int64 v62; // [rsp+138h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+140h] [rbp-C0h]
  __int64 v64; // [rsp+148h] [rbp-B8h]
  const __m128i *v65; // [rsp+150h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+158h] [rbp-A8h]
  __int64 v67; // [rsp+160h] [rbp-A0h]
  __int64 v68; // [rsp+168h] [rbp-98h]
  __int64 v69; // [rsp+170h] [rbp-90h]
  __int64 v70; // [rsp+178h] [rbp-88h]
  _QWORD *v71; // [rsp+180h] [rbp-80h]
  __int64 v72; // [rsp+188h] [rbp-78h] BYREF
  __int64 v73; // [rsp+190h] [rbp-70h]
  __int64 v74; // [rsp+198h] [rbp-68h]
  _QWORD *v75; // [rsp+1A0h] [rbp-60h]
  const void *v76; // [rsp+1A8h] [rbp-58h]
  _QWORD *v77; // [rsp+1B0h] [rbp-50h]
  __int64 v78; // [rsp+1B8h] [rbp-48h] BYREF
  __int64 v79; // [rsp+1C0h] [rbp-40h]
  unsigned __int64 v80; // [rsp+1C8h] [rbp-38h]
  __int64 v81; // [rsp+1D0h] [rbp-30h]

  v57 = a2; /*0x1002211fd*/
  v8 = a1; /*0x100221204*/
  v78 = 0; /*0x100221207*/
  v79 = 8; /*0x10022120f*/
  v80 = 0; /*0x100221217*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100221226*/
  v10 = v9; /*0x100221228*/
  if ( *(_BYTE *)(v9 + 16) == 1 ) /*0x10022122f*/
  {
    v11 = *(_QWORD *)v9; /*0x100221235*/
    v12 = *(_QWORD *)(v10 + 8); /*0x100221239*/
  }
  else
  {
    v11 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1002218f7*/
    *(_QWORD *)v10 = v11; /*0x1002218fc*/
    *(_QWORD *)(v10 + 8) = v12; /*0x100221900*/
    *(_BYTE *)(v10 + 16) = 1; /*0x100221905*/
  }
  *(_QWORD *)v10 = v11 + 1; /*0x100221242*/
  v68 = 0; /*0x10022124d*/
  v67 = 0; /*0x10022125b*/
  v66 = 0; /*0x100221269*/
  v65 = (const __m128i *)anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x100221277*/
  v69 = v11; /*0x10022127e*/
  v70 = v12; /*0x100221285*/
  if ( !a5 || !a3 ) /*0x100221298*/
  {
    a1[2] = v80; /*0x10022171e*/
    v41 = v78; /*0x100221722*/
    a1[1] = v79; /*0x10022172a*/
    *a1 = v41; /*0x10022172e*/
    return v8; /*0x10022172e*/
  }
  v59 = a4 + 24 * a5; /*0x1002212a6*/
  v58 = 232 * a3; /*0x1002212b4*/
  v77 = a1; /*0x1002212bb*/
LABEL_6:
  while ( 1 ) /*0x1002212bf*/
  {
    v13 = a4; /*0x1002212bf*/
    v81 = a4 + 24; /*0x1002212c6*/
    v14 = *(_QWORD *)(a4 + 16); /*0x1002212ca*/
    v15 = v58; /*0x1002212ce*/
    v16 = v57; /*0x1002212d5*/
    while ( *(_QWORD *)(v16 + 16) != v14 || memcmp(*(const void **)(v16 + 8), *(const void **)(v13 + 8), v14) ) /*0x10022130c*/
    {
      v16 += 232; /*0x1002212e0*/
      v15 -= 232; /*0x1002212e7*/
      if ( !v15 ) /*0x1002212ee*/
      {
        a4 = v81; /*0x100221620*/
        if ( v81 == v59 ) /*0x10022162b*/
          goto LABEL_38; /*0x10022162b*/
        goto LABEL_6; /*0x10022162b*/
      }
    }
    v17 = v16; /*0x100221315*/
    codexmate_lib::core::relay::models::RelayProvider::exposed_models::h2ff218b9bb419776(&v60, v16); /*0x100221318*/
    a4 = v81; /*0x10022131d*/
    v18 = (_QWORD *)(v61[0] + 96LL * v61[1]); /*0x100221345*/
    v72 = v61[0]; /*0x100221348*/
    v73 = v61[0]; /*0x10022134c*/
    v74 = v60; /*0x100221350*/
    v71 = v18; /*0x100221354*/
    v75 = v18; /*0x100221358*/
    if ( v61[1] ) /*0x10022135f*/
      break; /*0x10022135f*/
LABEL_35:
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h505c428a5ddff2d5( /*0x100221600*/
      &v72,
      v17,
      v18);
    if ( a4 == v59 ) /*0x100221617*/
    {
LABEL_38:
      v31 = v66; /*0x100221631*/
      v8[2] = v80; /*0x10022163c*/
      _RAX = v78; /*0x100221640*/
      v8[1] = v79; /*0x100221648*/
      *v8 = _RAX; /*0x10022164c*/
      if ( v31 ) /*0x100221653*/
      {
        v81 = v31; /*0x100221659*/
        v33 = v68; /*0x10022165d*/
        if ( v68 ) /*0x100221667*/
        {
          v34 = v65; /*0x10022166d*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v65)); /*0x10022167e*/
          v36 = v65 + 1; /*0x100221681*/
          do /*0x10022169d*/
          {
            if ( !(_WORD)_R13D ) /*0x1002216a7*/
            {
              do /*0x1002216cd*/
              {
                v37 = _mm_movemask_epi8(_mm_load_si128(v36)); /*0x1002216b6*/
                v34 -= 48; /*0x1002216bb*/
                ++v36; /*0x1002216c2*/
              }
              while ( v37 == 0xFFFF ); /*0x1002216cd*/
              _R13D = ~v37; /*0x1002216cf*/
            }
            __asm { tzcnt eax, r13d } /*0x1002216d2*/
            v38 = &v34[-3 * _RAX]; /*0x1002216e2*/
            v39 = v38[-3].i64[0]; /*0x1002216e6*/
            if ( v39 ) /*0x1002216ee*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38[-3].i64[1], v39, 1); /*0x1002216f9*/
            v40 = v38[-2].i64[1]; /*0x1002216fe*/
            if ( v40 ) /*0x100221705*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38[-1].i64[0], v40, 1); /*0x100221710*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100221694*/
            _R13D &= _R13D - 1; /*0x100221697*/
            --v33; /*0x10022169a*/
          }
          while ( v33 ); /*0x10022169d*/
        }
LABEL_71:
        v8 = v77; /*0x1002218ba*/
        if ( 49 * v81 != -65 ) /*0x1002218d4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v65[-3 * v81 - 3], 49 * v81 + 65, 16); /*0x1002218ed*/
      }
      return v8; /*0x1002218f2*/
    }
  }
  v19 = v61[0] + 96LL; /*0x100221365*/
  while ( 1 ) /*0x100221369*/
  {
    v20 = *(_QWORD *)(v19 - 96); /*0x100221369*/
    qmemcpy(v54, (const void *)(v19 - 88), sizeof(v54)); /*0x100221379*/
    v17 = v19; /*0x100221379*/
    if ( v20 == 2 ) /*0x100221380*/
      goto LABEL_34; /*0x100221380*/
    v60 = v20; /*0x100221386*/
    qmemcpy(v61, v54, sizeof(v61)); /*0x10022139c*/
    if ( v80 >= 5 ) /*0x1002213a4*/
      break; /*0x1002213a4*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v56, v16); /*0x1002213b4*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v62, &v61[1]); /*0x1002213c7*/
    v55[2] = v56[2]; /*0x1002213d3*/
    v55[1] = v56[1]; /*0x1002213e8*/
    v55[0] = v56[0]; /*0x1002213ef*/
    v55[5] = v64; /*0x100221404*/
    v55[4] = v63; /*0x100221416*/
    v55[3] = v62; /*0x10022141a*/
    if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb1c36ab2eafb4a3a(&v65, v55) ) /*0x10022142b*/
    {
      if ( v61[1] ) /*0x10022143e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[2], v61[1], 1); /*0x10022144c*/
      v21 = v61[7]; /*0x100221451*/
      if ( v61[7] == 0x8000000000000000LL ) /*0x100221465*/
        goto LABEL_30; /*0x100221465*/
    }
    else
    {
      v22 = (signed __int64)v76; /*0x100221478*/
      if ( v80 >= 5 ) /*0x100221483*/
      {
        v73 = v19; /*0x100221910*/
        core::panicking::panic_bounds_check::h56740b1198b22635(v80, 5, &off_10196B138); /*0x100221920*/
      }
      v23 = 16 * v80; /*0x100221489*/
      v24 = (signed __int64)*(&off_10196B0E8 + 2 * v80 + 1); /*0x10022148d*/
      if ( v24 < 0 ) /*0x100221495*/
      {
        v26 = 0; /*0x100221747*/
        goto LABEL_52; /*0x100221747*/
      }
      v25 = *(_UNKNOWN **)((char *)&off_10196B0E8 + v23); /*0x10022149b*/
      if ( v24 ) /*0x10022149f*/
      {
        v76 = *(_UNKNOWN **)((char *)&off_10196B0E8 + v23); /*0x1002214a1*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1002214a5*/
        v26 = 1; /*0x1002214aa*/
        v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1); /*0x1002214b8*/
        if ( !v27 ) /*0x1002214c0*/
        {
          v22 = v24; /*0x100221927*/
LABEL_52:
          v73 = v19; /*0x10022174a*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v22); /*0x100221751*/
        }
        a4 = v81; /*0x1002214c6*/
        v25 = v76; /*0x1002214ca*/
      }
      else
      {
        v27 = 1; /*0x1002214d0*/
      }
      v28 = v27; /*0x1002214db*/
      memcpy((void *)v27, v25, v24); /*0x1002214de*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v62, v16); /*0x1002214ed*/
      v18 = &v55[3]; /*0x1002214fd*/
      v55[5] = v61[3]; /*0x100221504*/
      v55[4] = v61[2]; /*0x10022150f*/
      v55[3] = v61[1]; /*0x100221513*/
      v55[6] = v24; /*0x100221516*/
      v76 = (const void *)v28; /*0x10022151d*/
      v55[7] = v28; /*0x100221521*/
      v55[8] = v24; /*0x100221528*/
      v55[0] = v62; /*0x10022153d*/
      v55[1] = v63; /*0x100221544*/
      v55[2] = v64; /*0x100221552*/
      v29 = v80; /*0x100221559*/
      if ( v80 == v78 ) /*0x100221561*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe98f8595b104309(&v78); /*0x100221567*/
      qmemcpy((void *)(v79 + 72 * v29), v55, 0x48u); /*0x100221584*/
      v80 = v29 + 1; /*0x10022158a*/
      v8 = v77; /*0x10022158e*/
      v21 = v61[7]; /*0x100221599*/
      if ( v61[7] == 0x8000000000000000LL ) /*0x1002215ad*/
        goto LABEL_30; /*0x1002215ad*/
    }
    if ( v21 ) /*0x1002215b2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[8], v21, 1); /*0x1002215c0*/
LABEL_30:
    v17 = v61[4]; /*0x1002215c5*/
    if ( v61[4] ) /*0x1002215cf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[5], v61[4], 1); /*0x1002215dd*/
    v30 = v19 - 96; /*0x1002215e2*/
    v19 += 96; /*0x1002215e6*/
    if ( (_QWORD *)(v30 + 96) == v71 ) /*0x1002215f2*/
    {
      v19 = (__int64)v71; /*0x1002215f8*/
LABEL_34:
      v73 = v19; /*0x1002215fc*/
      goto LABEL_35; /*0x1002215fc*/
    }
  }
  v73 = v19; /*0x10022175b*/
  v8[2] = v80; /*0x100221763*/
  v43 = v78; /*0x100221767*/
  v8[1] = v79; /*0x10022176f*/
  *v8 = v43; /*0x100221773*/
  if ( v61[1] ) /*0x100221781*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[2], v61[1], 1); /*0x10022178f*/
  if ( v61[7] != 0x8000000000000000LL && v61[7] ) /*0x1002217ad*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[8], v61[7], 1); /*0x1002217bb*/
  v44 = v61[4]; /*0x1002217c0*/
  if ( v61[4] ) /*0x1002217ca*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[5], v61[4], 1); /*0x1002217d8*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h505c428a5ddff2d5( /*0x1002217e1*/
    &v72,
    v44,
    v18);
  HIDWORD(_RAX) = HIDWORD(v66); /*0x1002217e6*/
  if ( v66 ) /*0x1002217f0*/
  {
    v81 = v66; /*0x1002217f6*/
    v46 = v68; /*0x1002217fa*/
    if ( v68 ) /*0x100221804*/
    {
      v47 = v65; /*0x10022180a*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v65)); /*0x10022181b*/
      v49 = v65 + 1; /*0x10022181e*/
      do /*0x10022183d*/
      {
        if ( !(_WORD)_R13D ) /*0x100221843*/
        {
          do /*0x10022186d*/
          {
            v50 = _mm_movemask_epi8(_mm_load_si128(v49)); /*0x100221856*/
            v47 -= 48; /*0x10022185b*/
            ++v49; /*0x100221862*/
          }
          while ( v50 == 0xFFFF ); /*0x10022186d*/
          _R13D = ~v50; /*0x10022186f*/
        }
        __asm { tzcnt eax, r13d } /*0x100221872*/
        v51 = &v47[-3 * _RAX]; /*0x100221882*/
        v52 = v51[-3].i64[0]; /*0x100221886*/
        if ( v52 ) /*0x10022188e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[-3].i64[1], v52, 1); /*0x100221899*/
        v53 = v51[-2].i64[1]; /*0x10022189e*/
        if ( v53 ) /*0x1002218a5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[-1].i64[0], v53, 1); /*0x1002218b0*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100221834*/
        _R13D &= _R13D - 1; /*0x100221837*/
        --v46; /*0x10022183a*/
      }
      while ( v46 ); /*0x10022183d*/
    }
    goto LABEL_71; /*0x10022183d*/
  }
  return v8; /*0x100221735*/
}