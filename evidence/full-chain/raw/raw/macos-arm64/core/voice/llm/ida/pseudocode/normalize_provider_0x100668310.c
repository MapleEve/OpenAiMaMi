// __ZN13codexmate_lib4core5voice3llm18normalize_provider @ 0x100668310 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::voice::llm::normalize_provider::hc20fe0bd6fa0e76d(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  size_t v9; // rbx
  __int64 v10; // r12
  const void *v11; // r15
  void *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i si128; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __m128i v22; // xmm6
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  __int64 v29; // rdx
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r13
  size_t v32; // rdx
  unsigned __int64 v33; // rsi
  __int64 v34; // r15
  char v35; // al
  __int64 v36; // rdx
  size_t v37; // r15
  size_t v38; // r15
  __int64 v39; // rcx
  size_t v40; // r13
  size_t v41; // r15
  size_t v42; // r13
  size_t v43; // rdi
  unsigned __int64 v44; // rsi
  __int64 v45; // r15
  char *v46; // rax
  __int64 v47; // rcx
  __int64 *v49; // [rsp+0h] [rbp-60h]
  unsigned __int64 v50; // [rsp+8h] [rbp-58h] BYREF
  __int64 v51; // [rsp+10h] [rbp-50h]
  size_t v52; // [rsp+18h] [rbp-48h]
  size_t v53; // [rsp+20h] [rbp-40h]
  unsigned __int64 v54; // [rsp+28h] [rbp-38h]
  __int64 v55; // [rsp+30h] [rbp-30h]

  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x10066832a*/
  v9 = v7; /*0x10066832f*/
  if ( v7 < 0 ) /*0x100668335*/
  {
    v10 = 0; /*0x100668337*/
    goto LABEL_3; /*0x100668337*/
  }
  v49 = a1; /*0x100668345*/
  if ( v7 ) /*0x100668349*/
  {
    v11 = (const void *)v6; /*0x10066834b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x10066834e*/
    v10 = 1; /*0x100668353*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x100668361*/
    if ( !v12 ) /*0x100668369*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x10066833a*/
    v13 = (__int64)v12; /*0x10066836b*/
    memcpy(v12, v11, v9); /*0x100668377*/
    if ( v9 < 8 ) /*0x100668380*/
    {
      v14 = 0; /*0x100668382*/
      do /*0x1006684c0*/
      {
LABEL_18:
        *(_BYTE *)(v13 + v14) |= 32 * ((unsigned __int8)(*(_BYTE *)(v13 + v14) - 65) < 0x1Au); /*0x1006684a3*/
        ++v14; /*0x1006684ba*/
LABEL_19:
        ; /*0x1006684bd*/
      }
      while ( v9 != v14 ); /*0x1006684c0*/
      goto LABEL_20; /*0x1006684c0*/
    }
    if ( v9 < 0x20 ) /*0x1006683b2*/
    {
      v14 = 0; /*0x1006683b4*/
      goto LABEL_15; /*0x1006683b6*/
    }
    v14 = v9 & 0x7FFFFFFFFFFFFFE0LL; /*0x1006683be*/
    v15 = 0; /*0x1006683c1*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x1006683c3*/
    v17 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x1006683cb*/
    v18 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x1006683d3*/
    do /*0x100668439*/
    {
      v19 = _mm_loadu_si128((const __m128i *)(v13 + v15)); /*0x1006683e0*/
      v20 = _mm_loadu_si128((const __m128i *)(v13 + v15 + 16)); /*0x1006683e6*/
      v21 = _mm_add_epi8(v19, si128); /*0x1006683f1*/
      v22 = _mm_add_epi8(v20, si128); /*0x1006683f9*/
      *(__m128i *)(v13 + v15) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v17), v21), v18), v19); /*0x100668425*/
      *(__m128i *)(v13 + v15 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v22, v17), v22), v18), v20); /*0x10066842b*/
      v15 += 32; /*0x100668432*/
    }
    while ( v14 != v15 ); /*0x100668439*/
    if ( v9 != v14 ) /*0x10066843e*/
    {
      if ( (v9 & 0x18) == 0 ) /*0x100668447*/
        goto LABEL_18; /*0x100668447*/
LABEL_15:
      v23 = v14; /*0x100668449*/
      v14 = v9 & 0x7FFFFFFFFFFFFFF8LL; /*0x100668453*/
      v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100668456*/
      v25 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10066845e*/
      v26 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100668466*/
      do /*0x10066849f*/
      {
        v27 = _mm_loadl_epi64((const __m128i *)(v13 + v23)); /*0x100668470*/
        v28 = _mm_add_epi8(v27, v24); /*0x10066847a*/
        *(_QWORD *)(v13 + v23) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v28, v25), v28), v26), v27).u64[0]; /*0x100668492*/
        v23 += 8; /*0x100668498*/
      }
      while ( v14 != v23 ); /*0x10066849f*/
      goto LABEL_19; /*0x10066849f*/
    }
  }
  else
  {
    v13 = 1; /*0x100668389*/
  }
LABEL_20:
  v50 = 0; /*0x1006684c2*/
  v51 = 1; /*0x1006684ca*/
  v52 = 0; /*0x1006684d2*/
  v29 = 1; /*0x1006684da*/
  v53 = 0; /*0x1006684df*/
  v30 = 0; /*0x1006684e7*/
  do /*0x1006685de*/
  {
    v55 = v29; /*0x1006684ea*/
    v31 = v30; /*0x1006684ee*/
    v54 = v30; /*0x1006684f1*/
    while ( 1 ) /*0x10066850f*/
    {
      v32 = v9 - v31; /*0x10066850f*/
      v33 = v13 + v31; /*0x100668512*/
      if ( v9 - v31 >= 0x10 ) /*0x10066851a*/
      {
        v35 = core::slice::memchr::memchr_aligned::hda948616f04379f9(95, v33, v32); /*0x100668555*/
        v34 = v36; /*0x10066855a*/
        if ( (v35 & 1) == 0 ) /*0x10066855f*/
        {
LABEL_35:
          v30 = v54; /*0x10066860f*/
          v29 = v55; /*0x100668613*/
          goto LABEL_36; /*0x100668613*/
        }
      }
      else
      {
        v34 = 0; /*0x10066851c*/
        if ( !v32 ) /*0x100668522*/
          goto LABEL_35; /*0x100668522*/
        while ( *(_BYTE *)(v33 + v34) != 95 ) /*0x100668535*/
        {
          if ( v32 == ++v34 ) /*0x10066853d*/
            goto LABEL_35; /*0x10066853d*/
        }
      }
      v30 = v34 + v31 + 1; /*0x100668580*/
      v37 = v31 + v34; /*0x100668585*/
      if ( v37 < v9 && *(_BYTE *)(v13 + v37) == 95 ) /*0x100668596*/
        break; /*0x100668596*/
      v31 = v30; /*0x100668500*/
      if ( v30 > v9 ) /*0x100668506*/
        goto LABEL_35; /*0x100668506*/
    }
    v38 = v37 - v54; /*0x10066859c*/
    v39 = v55; /*0x1006685ab*/
    if ( v38 > v50 - v53 ) /*0x1006685af*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v50, v53, v38, 1, 1, v8); /*0x1006685fc*/
      v39 = v51; /*0x100668601*/
      v53 = v52; /*0x100668609*/
    }
    v55 = v39; /*0x1006685b1*/
    v40 = v53; /*0x1006685bc*/
    memcpy((void *)(v39 + v53), (const void *)(v13 + v54), v38); /*0x1006685c7*/
    v29 = v55; /*0x1006685cc*/
    v53 = v38 + v40; /*0x1006685d3*/
    v52 = v38 + v40; /*0x1006685d7*/
  }
  while ( v30 <= v9 ); /*0x1006685de*/
LABEL_36:
  v41 = v9 - v30; /*0x100668617*/
  if ( v9 - v30 > v50 - v53 ) /*0x10066862b*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100668ada*/
      &v50,
      v53,
      v9 - v30,
      1,
      1,
      v8);
    v53 = v52; /*0x100668ae3*/
    v54 = v50; /*0x100668aeb*/
    v29 = v51; /*0x100668aef*/
  }
  else
  {
    v54 = v50; /*0x100668631*/
  }
  v42 = v53; /*0x100668638*/
  v55 = v29; /*0x10066863c*/
  v43 = v29 + v53; /*0x100668640*/
  v44 = v13 + v30; /*0x100668644*/
  memcpy((void *)(v29 + v53), (const void *)(v13 + v30), v41); /*0x10066864a*/
  switch ( v42 + v41 ) /*0x10066866c*/
  {
    case 4uLL: /*0x10066866c*/
      if ( *(_DWORD *)v55 != 1768778091 ) /*0x100668678*/
        goto LABEL_66; /*0x100668678*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x10066867e*/
      v45 = 4; /*0x100668683*/
      v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100668693*/
      if ( !v46 ) /*0x10066869b*/
        goto LABEL_85; /*0x10066869b*/
      *(_DWORD *)v46 = 1768778091; /*0x1006686a1*/
      v47 = 4; /*0x1006686a7*/
      goto LABEL_69; /*0x1006686ac*/
    case 5uLL: /*0x10066866c*/
      if ( *(_DWORD *)v55 ^ 0x7069687A | *(unsigned __int8 *)(v55 + 4) ^ 0x75 ) /*0x10066888f*/
        goto LABEL_66; /*0x100668891*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x100668897*/
      v45 = 5; /*0x10066889c*/
      v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1006688ac*/
      if ( !v46 ) /*0x1006688b4*/
        goto LABEL_85; /*0x1006688b4*/
      v46[4] = 117; /*0x1006688ba*/
      *(_DWORD *)v46 = 1885956218; /*0x1006688be*/
      v47 = 5; /*0x1006688c4*/
      goto LABEL_69; /*0x1006688c9*/
    case 6uLL: /*0x10066866c*/
      if ( !(*(_DWORD *)v55 ^ 0x62756F64 | *(unsigned __int16 *)(v55 + 4) ^ 0x6F61) ) /*0x10066870f*/
        goto LABEL_66; /*0x10066870f*/
      if ( !(*(_DWORD *)v55 ^ 0x6E65706F | *(unsigned __int16 *)(v55 + 4) ^ 0x6961) ) /*0x100668728*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x1006689fc*/
        v45 = 6; /*0x100668a01*/
        v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100668a11*/
        if ( v46 ) /*0x100668a19*/
        {
          *((_WORD *)v46 + 2) = 26977; /*0x100668a1f*/
          *(_DWORD *)v46 = 1852141679; /*0x100668a25*/
          goto LABEL_68; /*0x100668a2b*/
        }
        goto LABEL_85; /*0x100668a19*/
      }
      if ( !(*(_DWORD *)v55 ^ 0x696D6567 | *(unsigned __int16 *)(v55 + 4) ^ 0x696E) ) /*0x100668741*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x100668a30*/
        v45 = 6; /*0x100668a35*/
        v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100668a45*/
        if ( v46 ) /*0x100668a4d*/
        {
          *((_WORD *)v46 + 2) = 26990; /*0x100668a53*/
          *(_DWORD *)v46 = 1768777063; /*0x100668a59*/
          goto LABEL_68; /*0x100668a5f*/
        }
        goto LABEL_85; /*0x100668a4d*/
      }
      if ( !(*(_DWORD *)v55 ^ 0x75616C63 | *(unsigned __int16 *)(v55 + 4) ^ 0x6564) ) /*0x10066875a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x100668a64*/
        v45 = 6; /*0x100668a69*/
        v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100668a79*/
        if ( v46 ) /*0x100668a81*/
        {
          *((_WORD *)v46 + 2) = 25956; /*0x100668a83*/
          *(_DWORD *)v46 = 1969319011; /*0x100668a89*/
          goto LABEL_68; /*0x100668a8f*/
        }
        goto LABEL_85; /*0x100668a81*/
      }
      if ( !(*(_DWORD *)v55 ^ 0x616C6C6F | *(unsigned __int16 *)(v55 + 4) ^ 0x616D) ) /*0x100668773*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x100668a94*/
        v45 = 6; /*0x100668a99*/
        v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100668aa9*/
        if ( v46 ) /*0x100668ab1*/
        {
          *((_WORD *)v46 + 2) = 24941; /*0x100668ab3*/
          *(_DWORD *)v46 = 1634495599; /*0x100668ab9*/
          goto LABEL_68; /*0x100668abf*/
        }
        goto LABEL_85; /*0x100668ab1*/
      }
      if ( *(_DWORD *)v55 ^ 0x74737563 | *(unsigned __int16 *)(v55 + 4) ^ 0x6D6F ) /*0x10066878a*/
      {
LABEL_66:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x100668948*/
        v45 = 6; /*0x10066894d*/
        v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10066895d*/
        if ( v46 ) /*0x100668965*/
        {
          *((_WORD *)v46 + 2) = 28513; /*0x10066896b*/
          *(_DWORD *)v46 = 1651863396; /*0x100668971*/
          goto LABEL_68; /*0x100668971*/
        }
LABEL_85:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v45); /*0x100668af8*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x100668792*/
      v45 = 6; /*0x100668797*/
      v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1006687a7*/
      if ( !v46 ) /*0x1006687af*/
        goto LABEL_85; /*0x1006687af*/
      *((_WORD *)v46 + 2) = 28015; /*0x1006687b5*/
      *(_DWORD *)v46 = 1953723747; /*0x1006687bb*/
LABEL_68:
      v47 = 6; /*0x100668977*/
LABEL_69:
      *v49 = v47; /*0x10066897c*/
      v49[1] = (__int64)v46; /*0x100668983*/
      v49[2] = v47; /*0x100668987*/
      if ( v54 ) /*0x100668992*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v54, 1); /*0x10066899d*/
      if ( v9 ) /*0x1006689a5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v9, 1); /*0x1006689b2*/
      return v49;
    case 7uLL: /*0x10066866c*/
      if ( *(_DWORD *)v55 ^ 0x6C696162 | *(_DWORD *)(v55 + 3) ^ 0x6E61696C ) /*0x1006687d9*/
        goto LABEL_66; /*0x1006687db*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x1006687e1*/
      v45 = 7; /*0x1006687e6*/
      v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1006687f6*/
      if ( !v46 ) /*0x1006687fe*/
        goto LABEL_85; /*0x1006687fe*/
      *(_DWORD *)(v46 + 3) = 1851877740; /*0x100668804*/
      *(_DWORD *)v46 = 1818845538; /*0x10066880b*/
      v47 = 7; /*0x100668811*/
      goto LABEL_69; /*0x100668816*/
    case 8uLL: /*0x10066866c*/
      if ( *(_QWORD *)v55 != 0x6B65657370656564LL ) /*0x1006686c2*/
        goto LABEL_66; /*0x1006686c2*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x1006686c8*/
      v45 = 8; /*0x1006686cd*/
      v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1006686dd*/
      if ( !v46 ) /*0x1006686e5*/
        goto LABEL_85; /*0x1006686e5*/
      *(_QWORD *)v46 = 0x6B65657370656564LL; /*0x1006686eb*/
      v47 = 8; /*0x1006686ee*/
      goto LABEL_69; /*0x1006686f3*/
    case 9uLL: /*0x10066866c*/
      if ( *(_QWORD *)v55 ^ 0x6378616D696E696DLL | *(unsigned __int8 *)(v55 + 8) ^ 0x6ELL ) /*0x1006688ea*/
        goto LABEL_66; /*0x1006688ed*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x1006688ef*/
      v45 = 9; /*0x1006688f4*/
      v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100668904*/
      if ( !v46 ) /*0x10066890c*/
        goto LABEL_85; /*0x10066890c*/
      *(_QWORD *)v46 = 0x6378616D696E696DLL; /*0x100668912*/
      v46[8] = 110; /*0x100668915*/
      v47 = 9; /*0x100668919*/
      goto LABEL_69; /*0x10066891e*/
    case 0xAuLL: /*0x10066866c*/
      if ( *(_QWORD *)v55 ^ 0x74756F726E65706FLL | *(unsigned __int16 *)(v55 + 8) ^ 0x7265LL ) /*0x10066893f*/
        goto LABEL_66; /*0x100668942*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x1006689c9*/
      v45 = 10; /*0x1006689ce*/
      v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1006689de*/
      if ( !v46 ) /*0x1006689e6*/
        goto LABEL_85; /*0x1006689e6*/
      qmemcpy(v46, "openrouter", 10); /*0x1006689ec*/
      v47 = 10; /*0x1006689f5*/
      goto LABEL_69; /*0x1006689fa*/
    case 0xBuLL: /*0x10066866c*/
      if ( *(_QWORD *)v55 ^ 0x6978616D696E696DLL | *(_QWORD *)(v55 + 3) ^ 0x6C746E6978616D69LL ) /*0x10066883d*/
        goto LABEL_66; /*0x100668840*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44); /*0x100668846*/
      v45 = 11; /*0x10066884b*/
      v46 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x10066885b*/
      if ( !v46 ) /*0x100668863*/
        goto LABEL_85; /*0x100668863*/
      qmemcpy(v46, "minimaxintl", 11); /*0x100668869*/
      v47 = 11; /*0x100668873*/
      goto LABEL_69; /*0x100668878*/
    default:
      goto LABEL_66;
  }
}