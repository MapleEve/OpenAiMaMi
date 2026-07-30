// __ZN13codexmate_lib4core5relay13codex_catalog34inspect_official_catalog_freshness @ 0x100225bc0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_catalog::inspect_official_catalog_freshness::hf4c809afff3654aa(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  const __m128i *v6; // rax
  const __m128i *v7; // rdx
  __int16 v8; // dx
  const __m128i *v10; // r12
  const __m128i *v11; // r13
  const __m128i *v12; // r15
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  char *v20; // r12
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rsi
  const __m128i *v27; // r12
  const __m128i *v28; // r13
  const __m128i *v30; // r14
  int v31; // r15d
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rdi
  _QWORD v39[3]; // [rsp+0h] [rbp-250h] BYREF
  __int16 v40; // [rsp+18h] [rbp-238h]
  const __m128i *v41; // [rsp+20h] [rbp-230h]
  const __m128i **v42; // [rsp+28h] [rbp-228h]
  _QWORD v43[3]; // [rsp+30h] [rbp-220h] BYREF
  char v44; // [rsp+48h] [rbp-208h]
  unsigned __int64 v45; // [rsp+4Ch] [rbp-204h]
  int v46; // [rsp+54h] [rbp-1FCh]
  char v47; // [rsp+58h] [rbp-1F8h]
  unsigned __int64 v48; // [rsp+5Ch] [rbp-1F4h]
  int v49; // [rsp+64h] [rbp-1ECh]
  __m128i v50; // [rsp+68h] [rbp-1E8h] BYREF
  char v51; // [rsp+78h] [rbp-1D8h]
  unsigned __int8 v52; // [rsp+79h] [rbp-1D7h]
  __int64 v53; // [rsp+80h] [rbp-1D0h] BYREF
  __int64 v54; // [rsp+88h] [rbp-1C8h]
  __int64 v55; // [rsp+90h] [rbp-1C0h]
  __int64 v56; // [rsp+98h] [rbp-1B8h]
  _QWORD v57[12]; // [rsp+A0h] [rbp-1B0h] BYREF
  unsigned __int64 *v58; // [rsp+100h] [rbp-150h]
  __int64 v59; // [rsp+108h] [rbp-148h]
  unsigned __int64 v60; // [rsp+110h] [rbp-140h]
  const __m128i *v61; // [rsp+118h] [rbp-138h]
  const __m128i *v62; // [rsp+120h] [rbp-130h]
  const __m128i *v63; // [rsp+128h] [rbp-128h]
  const __m128i *v64; // [rsp+130h] [rbp-120h]
  const __m128i *v65; // [rsp+138h] [rbp-118h]
  const __m128i *v66; // [rsp+140h] [rbp-110h]
  unsigned __int64 *v67; // [rsp+148h] [rbp-108h] BYREF
  __int64 (__fastcall **v68)(); // [rsp+150h] [rbp-100h]
  __int64 v69; // [rsp+158h] [rbp-F8h]
  __int64 v70; // [rsp+160h] [rbp-F0h]
  __int64 v71; // [rsp+168h] [rbp-E8h]
  __int64 v72; // [rsp+170h] [rbp-E0h]
  __int64 v73; // [rsp+178h] [rbp-D8h]
  unsigned __int64 *v74; // [rsp+180h] [rbp-D0h] BYREF
  __int64 (__fastcall **v75)(); // [rsp+188h] [rbp-C8h]
  unsigned __int64 v76; // [rsp+190h] [rbp-C0h]
  const __m128i *v77[12]; // [rsp+198h] [rbp-B8h] BYREF
  unsigned __int64 v78; // [rsp+1F8h] [rbp-58h] BYREF
  __int64 v79; // [rsp+200h] [rbp-50h] BYREF
  __int64 v80; // [rsp+208h] [rbp-48h]
  __int64 v81; // [rsp+210h] [rbp-40h]
  unsigned __int64 v82; // [rsp+218h] [rbp-38h]
  _BYTE v83[41]; // [rsp+227h] [rbp-29h] BYREF

  v70 = a1; /*0x100225bd7*/
  codexmate_lib::core::relay::codex_catalog::load_official_catalog_snapshot::habb5579c0ab2db89(v43, a2[1], a2[2]); /*0x100225bed*/
  _R14 = v43[1]; /*0x100225bf2*/
  v3 = v43[2]; /*0x100225bf9*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100225c07*/
  v5 = v4; /*0x100225c09*/
  if ( *(_BYTE *)(v4 + 16) == 1 ) /*0x100225c10*/
  {
    v6 = *(const __m128i **)v4; /*0x100225c16*/
    v7 = *(const __m128i **)(v5 + 8); /*0x100225c1a*/
  }
  else
  {
    v6 = (const __m128i *)std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1002263cd*/
    *(_QWORD *)v5 = v6; /*0x1002263d2*/
    *(_QWORD *)(v5 + 8) = v7; /*0x1002263d6*/
    *(_BYTE *)(v5 + 16) = 1; /*0x1002263db*/
  }
  *(_QWORD *)v5 = (char *)v6->i64 + 1; /*0x100225c23*/
  memset(&v77[1], 0, 24); /*0x100225c54*/
  v77[0] = (const __m128i *)anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x100225c62*/
  v77[4] = v6; /*0x100225c69*/
  v77[5] = v7; /*0x100225c70*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h0bbdab13c9d67cc1( /*0x100225c84*/
    _R14,
    _R14 + 32 * v3,
    v77);
  v66 = v77[5]; /*0x100225c90*/
  v65 = v77[4]; /*0x100225c9e*/
  v64 = v77[3]; /*0x100225cac*/
  v63 = v77[2]; /*0x100225cba*/
  v62 = v77[1]; /*0x100225ccf*/
  v61 = v77[0]; /*0x100225cd6*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v53, a2[73], a2[74], "codex_router_catalog.jsondebug--bundled", 25); /*0x100225cff*/
  v72 = v54; /*0x100225d19*/
  codexmate_lib::core::relay::codex_catalog::read_catalog_model_slugs::hb2ecb05eb98a3e4e(v57, v54, v55); /*0x100225d20*/
  v71 = _R14; /*0x100225d2c*/
  if ( LODWORD(v57[0]) == 11 ) /*0x100225d33*/
  {
    v77[5] = (const __m128i *)v57[6]; /*0x100225d40*/
    v77[4] = (const __m128i *)v57[5]; /*0x100225d4e*/
    v77[3] = (const __m128i *)v57[4]; /*0x100225d5c*/
    v77[2] = (const __m128i *)v57[3]; /*0x100225d6a*/
    v77[1] = (const __m128i *)v57[2]; /*0x100225d7f*/
    v77[0] = (const __m128i *)v57[1]; /*0x100225d86*/
    v8 = ~(unsigned __int16)_mm_movemask_epi8(_mm_load_si128(v61)); /*0x100225da8*/
    v39[0] = v61; /*0x100225db1*/
    v39[1] = v61 + 1; /*0x100225dbc*/
    v39[2] = (char *)v62->i64 + (_QWORD)v61 + 1; /*0x100225dc3*/
    v40 = v8; /*0x100225dca*/
    v41 = v64; /*0x100225dd1*/
    v42 = v77; /*0x100225dd8*/
    ((void (__fastcall *)(unsigned __int64 **, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8bd8e3c5837a17c5)( /*0x100225ded*/
      &v74,
      v39);
    HIDWORD(_RAX) = HIDWORD(v77[1]); /*0x100225df2*/
    if ( v77[1] ) /*0x100225dfc*/
    {
      v82 = (unsigned __int64)v77[1]; /*0x100225e02*/
      v10 = v77[3]; /*0x100225e06*/
      if ( v77[3] ) /*0x100225e10*/
      {
        v11 = v77[0]; /*0x100225e16*/
        LODWORD(_R14) = ~_mm_movemask_epi8(_mm_load_si128(v77[0])); /*0x100225e28*/
        v12 = v77[0] + 1; /*0x100225e2b*/
        do /*0x100225e50*/
        {
          if ( !(_WORD)_R14 ) /*0x100225e5a*/
          {
            do /*0x100225e7c*/
            {
              v13 = _mm_movemask_epi8(_mm_load_si128(v12)); /*0x100225e65*/
              v11 -= 24; /*0x100225e6a*/
              ++v12; /*0x100225e71*/
            }
            while ( v13 == 0xFFFF ); /*0x100225e7c*/
            LODWORD(_R14) = ~v13; /*0x100225e7e*/
          }
          __asm { tzcnt eax, r14d } /*0x100225e81*/
          v14 = -3 * _RAX; /*0x100225e89*/
          v15 = *((_QWORD *)&v11[-1] + v14 - 1); /*0x100225e8d*/
          if ( v15 ) /*0x100225e95*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11[-1].i64[v14], v15, 1); /*0x100225ea5*/
          v10 = (const __m128i *)((char *)v10 - 1); /*0x100225e40*/
          _RAX = (unsigned int)_R14 & ((_DWORD)_R14 - 1); /*0x100225e47*/
          _R14 = _RAX; /*0x100225e4a*/
        }
        while ( v10 ); /*0x100225e50*/
      }
      v17 = (24 * v82 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100225f98*/
      if ( v17 + v82 != -17 ) /*0x100225fa3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v77[0] - v17, v17 + v82 + 17, 16); /*0x100225fb4*/
    }
    v16 = 0x8000000000000000LL; /*0x100225fb9*/
  }
  else
  {
    qmemcpy(v77, v57, sizeof(v77)); /*0x100225ec2*/
    v58 = nullptr; /*0x100225ec5*/
    v59 = 8; /*0x100225ed0*/
    v60 = 0; /*0x100225edb*/
    v78 = 0; /*0x100225ee6*/
    v79 = 1; /*0x100225eee*/
    v80 = 0; /*0x100225ef6*/
    v69 = 1610612768; /*0x100225efe*/
    v67 = &v78; /*0x100225f0d*/
    v68 = &anon_7245a3145add9b93f83b0a9aa358a664_1177; /*0x100225f1b*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b( /*0x100225f2c*/
                            v77,
                            &v67) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100226421*/
        "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result::u"
        "nwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
        55,
        v83,
        &anon_7245a3145add9b93f83b0a9aa358a664_1194,
        &anon_7245a3145add9b93f83b0a9aa358a664_1180);
    v16 = v78; /*0x100225f39*/
    v81 = v79; /*0x100225f41*/
    v56 = v80; /*0x100225f49*/
    v74 = v58; /*0x100225f5e*/
    v75 = (__int64 (__fastcall **)())v59; /*0x100225f65*/
    v76 = v60; /*0x100225f73*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v57); /*0x100225f81*/
  }
  v69 = v76; /*0x100225fca*/
  v68 = v75; /*0x100225fdf*/
  v67 = v74; /*0x100225fe6*/
  if ( v76 >= 2 ) /*0x100225ff1*/
  {
    if ( v76 >= 0x15 ) /*0x1002263ea*/
      core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v75, v76, v83); /*0x100226476*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h25cba5eb821395c3(v75, v76, 1, v83); /*0x1002263f9*/
  }
  v18 = v52; /*0x100225ffe*/
  v19 = *(_QWORD *)((char *)&unk_1015E4BE0 + v18 * 8); /*0x100226008*/
  v20 = (&off_10196C430)[v18]; /*0x100226013*/
  v82 = v16; /*0x10022601e*/
  if ( (v44 & 1) == 0 ) /*0x100226022*/
  {
    v22 = 0x8000000000000000LL; /*0x1002260f7*/
    v21 = 0x8000000000000000LL; /*0x100226101*/
    if ( (v47 & 1) == 0 ) /*0x10022610b*/
      goto LABEL_26; /*0x10022610b*/
    goto LABEL_24; /*0x10022610b*/
  }
  LODWORD(v79) = v46; /*0x10022602e*/
  v78 = v45; /*0x100226038*/
  v57[0] = 0; /*0x100226040*/
  v57[1] = 1; /*0x10022604b*/
  v57[2] = 0; /*0x100226056*/
  v77[0] = (const __m128i *)&v78; /*0x100226069*/
  v77[1] = (const __m128i *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x100226077*/
  v77[2] = (const __m128i *)((char *)&v78 + 4); /*0x10022607e*/
  v77[3] = (const __m128i *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x100226085*/
  v77[4] = (const __m128i *)&v79; /*0x10022608c*/
  v77[5] = (const __m128i *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x100226093*/
  if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d( /*0x1002260b6*/
                          v57,
                          &anon_7245a3145add9b93f83b0a9aa358a664_1177,
                          "\xC0\x01.\xC0\x01.\xC0\x14token endpoint HTTP \xC0\xC0",
                          v77) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100226446*/
      "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result::unw"
      "rap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
      55,
      v83,
      &anon_7245a3145add9b93f83b0a9aa358a664_1194,
      &anon_7245a3145add9b93f83b0a9aa358a664_1180);
  v21 = v57[0]; /*0x1002260c3*/
  v73 = v57[1]; /*0x1002260d1*/
  _R14 = v57[2]; /*0x1002260d8*/
  v22 = 0x8000000000000000LL; /*0x1002260df*/
  if ( (v47 & 1) != 0 ) /*0x1002260f0*/
  {
LABEL_24:
    LODWORD(v79) = v49; /*0x100226111*/
    v78 = v48; /*0x100226121*/
    v57[0] = 0; /*0x100226129*/
    v57[1] = 1; /*0x100226134*/
    v57[2] = 0; /*0x10022613f*/
    v77[0] = (const __m128i *)&v78; /*0x100226152*/
    v77[1] = (const __m128i *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x100226160*/
    v77[2] = (const __m128i *)((char *)&v78 + 4); /*0x100226167*/
    v77[3] = (const __m128i *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10022616e*/
    v77[4] = (const __m128i *)&v79; /*0x100226175*/
    v77[5] = (const __m128i *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10022617c*/
    if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d( /*0x10022619f*/
                            v57,
                            &anon_7245a3145add9b93f83b0a9aa358a664_1177,
                            "\xC0\x01.\xC0\x01.\xC0\x14token endpoint HTTP \xC0\xC0",
                            v77) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10022646b*/
        "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result::u"
        "nwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
        55,
        v83,
        &anon_7245a3145add9b93f83b0a9aa358a664_1194,
        &anon_7245a3145add9b93f83b0a9aa358a664_1180);
    v22 = v57[0]; /*0x1002261b3*/
    v77[0] = (const __m128i *)v57[1]; /*0x1002261c1*/
    v77[1] = (const __m128i *)v57[2]; /*0x1002261c8*/
  }
LABEL_26:
  v23 = v70; /*0x1002261cf*/
  *(_QWORD *)(v70 + 16) = v76; /*0x1002261dd*/
  *(_QWORD *)(v23 + 8) = v75; /*0x1002261e8*/
  *(_QWORD *)v23 = v74; /*0x1002261f3*/
  *(_QWORD *)(v23 + 72) = v82; /*0x1002261fa*/
  *(_QWORD *)(v23 + 80) = v81; /*0x100226202*/
  *(_QWORD *)(v23 + 88) = v56; /*0x10022620d*/
  *(_QWORD *)(v23 + 96) = v20; /*0x100226211*/
  *(_QWORD *)(v23 + 104) = v19; /*0x100226215*/
  *(_QWORD *)(v23 + 24) = v21; /*0x100226219*/
  *(_QWORD *)(v23 + 32) = v73; /*0x100226224*/
  *(_QWORD *)(v23 + 40) = _R14; /*0x100226228*/
  *(_QWORD *)(v23 + 48) = v22; /*0x10022622c*/
  *(const __m128i **)(v23 + 56) = v77[0]; /*0x100226237*/
  *(const __m128i **)(v23 + 64) = v77[1]; /*0x100226242*/
  v24 = v51; /*0x100226246*/
  *(__m128i *)(v23 + 112) = _mm_loadu_si128(&v50); /*0x100226255*/
  *(_QWORD *)(v23 + 128) = v3; /*0x10022625a*/
  *(_BYTE *)(v23 + 136) = v24; /*0x100226261*/
  v25 = v53; /*0x100226267*/
  if ( v53 ) /*0x100226271*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v53, 1); /*0x10022627f*/
  HIDWORD(_RAX) = HIDWORD(v62); /*0x100226284*/
  if ( v62 ) /*0x10022628e*/
  {
    v82 = (unsigned __int64)v62; /*0x100226294*/
    v27 = v64; /*0x100226298*/
    if ( v64 ) /*0x1002262a2*/
    {
      v28 = v61; /*0x1002262a8*/
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v61)); /*0x1002262ba*/
      v30 = v61 + 1; /*0x1002262bd*/
      do /*0x1002262e0*/
      {
        if ( !(_WORD)_R15D ) /*0x1002262e6*/
        {
          do /*0x10022630c*/
          {
            v31 = _mm_movemask_epi8(_mm_load_si128(v30)); /*0x1002262f5*/
            v28 -= 24; /*0x1002262fa*/
            ++v30; /*0x100226301*/
          }
          while ( v31 == 0xFFFF ); /*0x10022630c*/
          _R15D = ~v31; /*0x10022630e*/
        }
        __asm { tzcnt eax, r15d } /*0x100226311*/
        v32 = -3 * _RAX; /*0x100226319*/
        v33 = *((_QWORD *)&v28[-1] + v32 - 1); /*0x10022631d*/
        if ( v33 ) /*0x100226325*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28[-1].i64[v32], v33, 1); /*0x100226335*/
        v27 = (const __m128i *)((char *)v27 - 1); /*0x1002262d0*/
        _RAX = _R15D & (unsigned int)(_R15D - 1); /*0x1002262d7*/
        _R15D &= _R15D - 1; /*0x1002262da*/
      }
      while ( v27 ); /*0x1002262e0*/
    }
    v34 = (24 * v82 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10022634c*/
    v25 = v34 + v82 + 17; /*0x100226353*/
    if ( v34 + v82 != -17 ) /*0x100226357*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v61 - v34, v25, 16); /*0x100226368*/
  }
  v35 = v3 + 1; /*0x10022636d*/
  v36 = v71; /*0x100226370*/
  v37 = v71; /*0x100226377*/
  while ( v35 != 1 ) /*0x100226384*/
  {
    --v35; /*0x10022638a*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v37, v25, v22, v23); /*0x10022638d*/
    v37 += 32; /*0x100226392*/
  }
  if ( v43[0] ) /*0x1002263a1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 32LL * v43[0], 8); /*0x1002263af*/
  return v70; /*0x1002263bb*/
}