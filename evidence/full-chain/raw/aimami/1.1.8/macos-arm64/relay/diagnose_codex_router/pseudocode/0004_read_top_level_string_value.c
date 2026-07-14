// callee: codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hb49f8d2212cac9c1
// VA: 0x1006813c0 | callee of owner (depth1, called 2x w/ different key args) and of codex_config_stale_reason (depth2)

_QWORD *__fastcall codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hb49f8d2212cac9c1(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t a5)
{
  char v5; // r13
  __int64 v6; // r14
  __int64 v7; // rax
  signed __int64 v8; // rbx
  char *v9; // r14
  __int64 v10; // rax
  _BYTE *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r15
  __m128i v14; // xmm2
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // r15
  unsigned __int64 v31; // rbx
  _QWORD *v32; // r14
  __int64 v33; // rsi
  _QWORD *result; // rax
  __int64 v35; // rbx
  _QWORD *v36; // r14
  unsigned __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rdi
  void *v42; // [rsp+18h] [rbp-D8h]
  __int64 v43; // [rsp+20h] [rbp-D0h]
  __int64 v44; // [rsp+28h] [rbp-C8h]
  __int64 v45; // [rsp+30h] [rbp-C0h]
  __int64 v47; // [rsp+40h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+48h] [rbp-A8h]
  __int64 v49; // [rsp+50h] [rbp-A0h]
  __int64 v50; // [rsp+58h] [rbp-98h]
  __int64 v51; // [rsp+60h] [rbp-90h]
  char v52; // [rsp+68h] [rbp-88h]
  __int16 v53; // [rsp+70h] [rbp-80h]
  __int64 v54; // [rsp+78h] [rbp-78h] BYREF
  void *__s1; // [rsp+80h] [rbp-70h]
  __int64 v56; // [rsp+88h] [rbp-68h]
  __int64 v57; // [rsp+90h] [rbp-60h] BYREF
  __int64 v58; // [rsp+98h] [rbp-58h]
  __int64 v59; // [rsp+A0h] [rbp-50h]
  __int64 v60; // [rsp+A8h] [rbp-48h]
  _QWORD *v61; // [rsp+B0h] [rbp-40h]
  __int64 v62; // [rsp+B8h] [rbp-38h]
  signed __int64 v63; // [rsp+C0h] [rbp-30h]

  v61 = a1; /*0x1006813e2*/
  v57 = 0; /*0x1006813e6*/
  v58 = 8; /*0x1006813ee*/
  v59 = 0; /*0x1006813f6*/
  v45 = 0; /*0x1006813fe*/
  v47 = a2; /*0x100681410*/
  v48 = a3; /*0x100681417*/
  v49 = 0; /*0x10068141e*/
  v50 = a3; /*0x100681429*/
  v51 = 0xA0000000ALL; /*0x10068143a*/
  v52 = 1; /*0x100681441*/
  v53 = 0; /*0x100681448*/
  v5 = 0; /*0x10068144e*/
  while ( 1 ) /*0x10068146d*/
  {
    v6 = v47; /*0x10068146d*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10068147f*/
      &v54,
      &v47);
    if ( (_DWORD)v54 == 1 ) /*0x100681488*/
    {
      v7 = v45; /*0x10068148e*/
      v45 = v56; /*0x100681495*/
      v8 = v56 - v7; /*0x10068149c*/
      v9 = (char *)(v7 + v6); /*0x10068149f*/
      if ( v56 != v7 ) /*0x1006814a5*/
        goto LABEL_10; /*0x1006814a5*/
      goto LABEL_16; /*0x1006814a5*/
    }
    if ( HIBYTE(v53) ) /*0x1006814b4*/
      break; /*0x1006814b4*/
    HIBYTE(v53) = 1; /*0x1006814ba*/
    v8 = a3 - v45; /*0x1006814cc*/
    if ( ((unsigned __int8)v53 | (a3 != v45)) != 1 ) /*0x1006814d7*/
      break; /*0x1006814d7*/
    v9 = (char *)(v47 + v45); /*0x1006814dd*/
    if ( v8 ) /*0x1006814e7*/
    {
LABEL_10:
      if ( v9[v8 - 1] == 10 ) /*0x1006814ef*/
      {
        if ( v8 == 1 ) /*0x1006814f7*/
        {
          v8 = 0; /*0x100681507*/
        }
        else if ( v9[v8 - 2] == 13 ) /*0x1006814ff*/
        {
          v8 -= 2LL; /*0x100681501*/
        }
        else
        {
          --v8; /*0x10068150b*/
        }
      }
    }
LABEL_16:
    v10 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v9, v8); /*0x100681516*/
    v11 = (_BYTE *)v10; /*0x10068151b*/
    v13 = v12; /*0x10068151e*/
    switch ( v12 ) /*0x100681539*/
    {
      case 0LL: /*0x100681539*/
        goto LABEL_33;
      case 30LL: /*0x100681539*/
        v14 = _mm_or_si128( /*0x100681560*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_0bcfb5f5de49270c5675714f036928d0_303 + 14)),
                  _mm_loadu_si128((const __m128i *)(v10 + 14))),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v10),
                  _mm_loadu_si128((const __m128i *)&anon_0bcfb5f5de49270c5675714f036928d0_303)));
        if ( _mm_testz_si128(v14, v14) ) /*0x100681564*/
          goto LABEL_3; /*0x100681569*/
        goto LABEL_28; /*0x100681569*/
      case 36LL: /*0x100681539*/
        if ( !memcmp((const void *)v10, &anon_0bcfb5f5de49270c5675714f036928d0_304, 0x24u) ) /*0x1006815c1*/
          goto LABEL_3; /*0x1006815c8*/
        goto LABEL_28; /*0x1006815c8*/
      case 39LL: /*0x100681539*/
        if ( !memcmp((const void *)v10, &anon_0bcfb5f5de49270c5675714f036928d0_305, 0x27u) ) /*0x1006815de*/
          goto LABEL_3; /*0x1006815e5*/
        goto LABEL_28; /*0x1006815e5*/
      case 55LL: /*0x100681539*/
        if ( memcmp((const void *)v10, "# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)", 0x37u) ) /*0x1006815fb*/
          goto LABEL_28; /*0x100681602*/
        goto LABEL_3; /*0x100681602*/
      case 60LL: /*0x100681539*/
        if ( !memcmp((const void *)v10, &anon_0bcfb5f5de49270c5675714f036928d0_54, 0x3Cu) ) /*0x100681583*/
          goto LABEL_3; /*0x10068158a*/
        goto LABEL_28; /*0x10068158a*/
      case 64LL: /*0x100681539*/
        if ( !memcmp((const void *)v10, &anon_0bcfb5f5de49270c5675714f036928d0_55, 0x40u) ) /*0x1006815a4*/
          goto LABEL_3; /*0x1006815ab*/
        goto LABEL_28; /*0x1006815ab*/
      default:
LABEL_28:
        if ( *v11 == 91 && v11[v13 - 1] == 93 ) /*0x10068161d*/
        {
          if ( v13 == 1 || (v5 = 1, (char)v11[1] <= -65) ) /*0x100681632*/
            core::str::slice_error_fail::h480e51fbd8b15eba( /*0x1006819d4*/
              v11,
              v13,
              1,
              v13 - 1,
              &anon_0bcfb5f5de49270c5675714f036928d0_302);
        }
        else
        {
LABEL_33:
          if ( (v5 & 1) != 0 ) /*0x100681644*/
          {
            v5 = 1; /*0x100681460*/
          }
          else
          {
            v15 = &v54; /*0x10068164a*/
            codexmate_lib::core::relay::codex_writer::top_level_assignment_key::he7414c9c9baca68e(&v54, v11, v13); /*0x100681654*/
            if ( v54 != 0x8000000000000000LL ) /*0x10068166a*/
            {
              if ( v54 ) /*0x100681673*/
              {
                v15 = (__int64 *)__s1; /*0x100681675*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v54, 1); /*0x10068167e*/
              }
              if ( v8 < 0 ) /*0x100681686*/
              {
                v39 = 0; /*0x1006816f9*/
LABEL_47:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v39, v63); /*0x1006816fb*/
              }
              if ( v8 ) /*0x100681688*/
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15); /*0x10068168a*/
                v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x100681697*/
                if ( !v16 ) /*0x10068169f*/
                {
                  v63 = v8; /*0x1006819db*/
                  v39 = 1; /*0x1006819df*/
                  goto LABEL_47; /*0x1006819e4*/
                }
              }
              else
              {
                v16 = 1; /*0x1006816a6*/
              }
              v63 = v16; /*0x1006816ab*/
              memcpy((void *)v16, v9, v8); /*0x1006816b8*/
              v17 = v59; /*0x1006816bd*/
              if ( v59 == v57 ) /*0x1006816c5*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v57); /*0x1006816cb*/
              v18 = v58; /*0x1006816d0*/
              v19 = 3 * v17; /*0x1006816d4*/
              *(_QWORD *)(v58 + 8 * v19) = v8; /*0x1006816d8*/
              *(_QWORD *)(v18 + 8 * v19 + 8) = v63; /*0x1006816e0*/
              *(_QWORD *)(v18 + 8 * v19 + 16) = v8; /*0x1006816e5*/
              v59 = v17 + 1; /*0x1006816ed*/
            }
            v5 = 0; /*0x1006816f1*/
          }
        }
LABEL_3:
        if ( HIBYTE(v53) ) /*0x100681467*/
          goto LABEL_48; /*0x100681467*/
        break; /*0x100681467*/
    }
  }
LABEL_48:
  v20 = v57; /*0x100681709*/
  v21 = v58; /*0x10068170d*/
  v60 = 24 * v59; /*0x100681721*/
  v47 = v57; /*0x100681736*/
  v43 = v58 + 24 * v59; /*0x10068173d*/
  v48 = v43; /*0x100681744*/
  v22 = v58; /*0x10068174b*/
  if ( !v59 ) /*0x100681751*/
  {
LABEL_62:
    v30 = v21; /*0x10068184e*/
    if ( v43 != v22 ) /*0x10068186e*/
    {
      v31 = (v43 - v22) / 0x18uLL; /*0x100681873*/
      v32 = (_QWORD *)(v22 + 8); /*0x100681877*/
      do /*0x100681887*/
      {
        v33 = *(v32 - 1); /*0x100681889*/
        if ( v33 ) /*0x100681890*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v32, v33, 1); /*0x10068189a*/
        v32 += 3; /*0x100681880*/
        --v31; /*0x100681884*/
      }
      while ( v31 ); /*0x100681887*/
    }
    if ( v20 ) /*0x1006818a4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 24 * v20, 8); /*0x1006818b6*/
    result = v61; /*0x1006818bb*/
    *v61 = 0x8000000000000000LL; /*0x1006818c9*/
    return result; /*0x1006818dd*/
  }
  v44 = v57; /*0x100681757*/
  v23 = 0; /*0x10068175e*/
  v62 = v58; /*0x100681761*/
  while ( 2 ) /*0x100681782*/
  {
    v24 = *(_QWORD *)(v21 + v23); /*0x100681782*/
    if ( v24 == 0x8000000000000000LL ) /*0x100681793*/
    {
      v22 = v21 + v23 + 24; /*0x100681832*/
LABEL_61:
      v20 = v44; /*0x100681840*/
      goto LABEL_62; /*0x100681847*/
    }
    v25 = *(_QWORD *)(v21 + v23 + 16); /*0x10068179e*/
    v63 = *(_QWORD *)(v21 + v23 + 8); /*0x1006817a3*/
    v26 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v63, v25); /*0x1006817ac*/
    v28 = v27; /*0x1006817af*/
    codexmate_lib::core::relay::codex_writer::top_level_assignment_key::he7414c9c9baca68e(&v54, v26, v27); /*0x1006817b9*/
    v29 = v54; /*0x1006817be*/
    if ( v54 == 0x8000000000000000LL ) /*0x1006817cf*/
    {
LABEL_57:
      if ( v24 ) /*0x100681816*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v24, 1); /*0x100681828*/
      v23 += 24; /*0x100681770*/
      v21 = v62; /*0x100681778*/
      if ( v60 == v23 ) /*0x10068177c*/
      {
        v22 = v43; /*0x100681839*/
        goto LABEL_61; /*0x100681839*/
      }
      continue; /*0x10068177c*/
    }
    break;
  }
  if ( v56 != a5 || (v42 = __s1, memcmp(__s1, a4, a5)) ) /*0x1006817f0*/
  {
    if ( v29 ) /*0x100681800*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v29, 1); /*0x10068180e*/
    goto LABEL_57; /*0x10068180e*/
  }
  if ( v29 ) /*0x1006818f8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v29, 1); /*0x100681902*/
  codexmate_lib::core::relay::codex_writer::extract_toml_string_value::h3938e1d4b3c3d2f9(v61, v26, v28); /*0x100681911*/
  v35 = v60 - 24; /*0x10068191a*/
  if ( v24 ) /*0x100681921*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v24, 1); /*0x10068192f*/
  if ( v35 != v23 ) /*0x100681937*/
  {
    v36 = (_QWORD *)(v62 + v23 + 32); /*0x100681948*/
    v37 = (v60 - v23 - 24) / 0x18uLL; /*0x100681960*/
    do /*0x100681977*/
    {
      v38 = *(v36 - 1); /*0x100681979*/
      if ( v38 ) /*0x100681980*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v36, v38, 1); /*0x10068198a*/
      v36 += 3; /*0x100681970*/
      --v37; /*0x100681974*/
    }
    while ( v37 ); /*0x100681977*/
  }
  if ( v44 ) /*0x10068199b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, 24 * v44, 8); /*0x1006819ae*/
  return v61; /*0x1006818cc*/
}