// __ZN13codexmate_lib4core5relay10translator41normalize_anthropic_tool_choice_for_tools @ 0x100885180 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::normalize_anthropic_tool_choice_for_tools::hc02ad13318440a11(
        _BYTE *a1,
        __m128i a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  size_t v17; // r14
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbx
  const __m128i *v24; // r14
  const __m128i *v26; // r15
  int v27; // r13d
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rbx
  _DWORD *v32; // rax
  _DWORD *v33; // r15
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __m128i si128; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  __m128i v40; // xmm4
  __m128i v41; // xmm5
  __m128i v42; // xmm6
  __int64 v43; // rdx
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  __m128i v46; // xmm2
  __m128i v47; // xmm3
  __m128i v48; // xmm4
  __int64 v49; // r14
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // rdx
  void *__src; // [rsp+0h] [rbp-90h]
  const __m128i *v57; // [rsp+8h] [rbp-88h] BYREF
  __int64 v58; // [rsp+10h] [rbp-80h]
  __int64 v59; // [rsp+18h] [rbp-78h]
  __int64 v60; // [rsp+20h] [rbp-70h]
  __int64 v61; // [rsp+28h] [rbp-68h]
  __int64 v62; // [rsp+30h] [rbp-60h]
  const __m128i *v63; // [rsp+38h] [rbp-58h] BYREF
  __int64 v64; // [rsp+40h] [rbp-50h]
  __int64 v65; // [rsp+48h] [rbp-48h]
  __int64 v66; // [rsp+50h] [rbp-40h]
  __int64 v67; // [rsp+58h] [rbp-38h]
  __int64 v68; // [rsp+60h] [rbp-30h]

  v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674ECD, 5, a1); /*0x1008851a3*/
  if ( v3 && *(_BYTE *)v3 == 4 ) /*0x1008851b4*/
  {
    v4 = *(_QWORD *)(v3 + 16); /*0x1008851ba*/
    v5 = v4 + 32LL * *(_QWORD *)(v3 + 24); /*0x1008851c6*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008851d0*/
    v8 = (_QWORD *)v6; /*0x1008851d2*/
    if ( *(_BYTE *)(v6 + 16) == 1 ) /*0x1008851d9*/
    {
      v9 = *(_QWORD *)v6; /*0x1008851df*/
      v10 = v8[1]; /*0x1008851e2*/
    }
    else
    {
      v50 = v6; /*0x1008855cd*/
      v9 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008855d0*/
             &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
             v5,
             v7,
             v6);
      v8 = (_QWORD *)v50; /*0x1008855d8*/
      *(_QWORD *)v50 = v9; /*0x1008855db*/
      *(_QWORD *)(v50 + 8) = v10; /*0x1008855de*/
      *(_BYTE *)(v50 + 16) = 1; /*0x1008855e2*/
    }
    *v8 = v9 + 1; /*0x1008851ea*/
    v66 = 0; /*0x1008851f4*/
    v65 = 0; /*0x1008851ff*/
    v64 = 0; /*0x10088520a*/
    v63 = (const __m128i *)&xmmword_1015FBEC0; /*0x100885215*/
    v67 = v9; /*0x100885219*/
    v68 = v10; /*0x10088521d*/
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::he3d92b5b7b8e12b7( /*0x100885228*/
      v4,
      v5,
      &v63);
    v62 = v68; /*0x100885231*/
    v61 = v67; /*0x100885239*/
    v11 = v66; /*0x10088523d*/
    v60 = v66; /*0x100885241*/
    v59 = v65; /*0x100885249*/
    HIDWORD(_RAX) = HIDWORD(v63); /*0x10088524d*/
    v58 = v64; /*0x100885255*/
    v57 = v63; /*0x100885259*/
    if ( v66 ) /*0x100885263*/
    {
      _RAX = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100885278*/
               "tool_choicestop_sequences",
               11,
               a1);
      if ( !_RAX ) /*0x100885280*/
        goto LABEL_19; /*0x100885280*/
      _RAX = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100885295*/
               &anon_10420c9971c21f44d230d15b39fb3fec_75,
               4,
               _RAX);
      if ( !_RAX || *(_BYTE *)_RAX != 3 ) /*0x1008852a6*/
        goto LABEL_19; /*0x1008852a6*/
      v13 = *(_QWORD *)(_RAX + 16); /*0x1008852ac*/
      v14 = *(_QWORD *)(_RAX + 24); /*0x1008852b0*/
      v15 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v13, v14); /*0x1008852b4*/
      v17 = v16; /*0x1008852b9*/
      if ( v16 < 0 ) /*0x1008852bf*/
      {
        v18 = 0; /*0x1008852c5*/
        goto LABEL_11; /*0x1008852c5*/
      }
      if ( !v16 ) /*0x10088544d*/
      {
        HIDWORD(_RAX) = 0; /*0x1008854a4*/
        goto LABEL_19; /*0x1008854a9*/
      }
      __src = (void *)v15; /*0x10088544f*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v14); /*0x100885456*/
      v18 = 1; /*0x10088545b*/
      v32 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1); /*0x100885469*/
      if ( !v32 ) /*0x100885471*/
LABEL_11:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v17); /*0x1008852c8*/
      v33 = v32; /*0x100885477*/
      memcpy(v32, __src, v17); /*0x100885487*/
      if ( v17 < 8 ) /*0x100885490*/
      {
        v34 = 0; /*0x100885492*/
        goto LABEL_47; /*0x100885494*/
      }
      if ( v17 >= 0x20 ) /*0x1008854bc*/
      {
        v34 = v17 & 0x7FFFFFFFFFFFFFE0LL; /*0x1008854c8*/
        v35 = 0; /*0x1008854cb*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x1008854cd*/
        v37 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x1008854d5*/
        v38 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x1008854dd*/
        do /*0x10088553e*/
        {
          v39 = _mm_loadu_si128((const __m128i *)&v33[v35 / 4]); /*0x1008854e5*/
          v40 = _mm_loadu_si128((const __m128i *)&v33[v35 / 4 + 4]); /*0x1008854eb*/
          v41 = _mm_add_epi8(v39, si128); /*0x1008854f6*/
          v42 = _mm_add_epi8(v40, si128); /*0x1008854fe*/
          *(__m128i *)&v33[v35 / 4] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v41, v37), v41), v38), v39); /*0x10088552a*/
          *(__m128i *)&v33[v35 / 4 + 4] = _mm_or_si128( /*0x100885530*/
                                            _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v42, v37), v42), v38),
                                            v40);
          v35 += 32LL; /*0x100885537*/
        }
        while ( v34 != v35 ); /*0x10088553e*/
        if ( v17 == v34 ) /*0x100885543*/
        {
LABEL_49:
          if ( v17 == 4 && *v33 == 1819242356 ) /*0x10088564b*/
          {
            v51 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100885660*/
                    "tool_choicestop_sequences",
                    11,
                    a1);
            v52 = 1; /*0x100885665*/
            if ( v51 /*0x10088568c*/
              && (v53 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                          "name",
                          4,
                          v51)) != 0
              && *(_BYTE *)v53 == 3 )
            {
              v52 = *(_QWORD *)(v53 + 16); /*0x10088568e*/
              v54 = *(_QWORD *)(v53 + 24); /*0x100885692*/
            }
            else
            {
              v54 = 0; /*0x100885698*/
            }
            if ( !((*a1 != 5) /*0x1008856af*/
                 | (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h450e6cee02eb5bbc(
                                      &v57,
                                      v52,
                                      v54)) )
            {
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d( /*0x1008856ca*/
                &v63,
                a1 + 8,
                "tool_choicestop_sequences",
                11);
              if ( (_BYTE)v63 != 6 ) /*0x1008856d3*/
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v63); /*0x1008856d9*/
            }
          }
          *(double *)a2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v17, 1); /*0x1008856e9*/
          goto LABEL_19; /*0x1008856ee*/
        }
        if ( (v17 & 0x18) == 0 ) /*0x10088554d*/
        {
          do /*0x100885638*/
          {
LABEL_47:
            *((_BYTE *)v33 + v34) |= 32 * ((unsigned __int8)(*((_BYTE *)v33 + v34) - 65) < 0x1Au); /*0x10088561b*/
            ++v34; /*0x100885632*/
LABEL_48:
            ; /*0x100885635*/
          }
          while ( v17 != v34 ); /*0x100885638*/
          goto LABEL_49; /*0x100885638*/
        }
      }
      else
      {
        v34 = 0; /*0x1008854be*/
      }
      v43 = v34; /*0x100885553*/
      v34 = v17 & 0x7FFFFFFFFFFFFFF8LL; /*0x10088555d*/
      v44 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100885560*/
      v45 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100885568*/
      v46 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100885570*/
      do /*0x1008855a7*/
      {
        v47 = _mm_loadl_epi64((const __m128i *)((char *)v33 + v43)); /*0x100885578*/
        v48 = _mm_add_epi8(v47, v44); /*0x100885582*/
        *(_QWORD *)((char *)v33 + v43) = _mm_or_si128( /*0x10088559a*/
                                           _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v48, v45), v48), v46),
                                           v47).u64[0];
        v43 += 8; /*0x1008855a0*/
      }
      while ( v34 != v43 ); /*0x1008855a7*/
      goto LABEL_48; /*0x1008855a7*/
    }
  }
  else
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008852dc*/
    v21 = (_QWORD *)v19; /*0x1008852de*/
    if ( *(_BYTE *)(v19 + 16) == 1 ) /*0x1008852e5*/
    {
      _RAX = *(_QWORD *)v19; /*0x1008852eb*/
      v22 = v21[1]; /*0x1008852ee*/
    }
    else
    {
      v49 = v19; /*0x1008855ae*/
      _RAX = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008855b1*/
               &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
               5,
               v20,
               v19);
      v21 = (_QWORD *)v49; /*0x1008855b6*/
      *(_QWORD *)v49 = _RAX; /*0x1008855b9*/
      *(_QWORD *)(v49 + 8) = v22; /*0x1008855bc*/
      *(_BYTE *)(v49 + 16) = 1; /*0x1008855c0*/
    }
    *v21 = _RAX + 1; /*0x1008852f6*/
    v60 = 0; /*0x100885300*/
    v59 = 0; /*0x10088530b*/
    v58 = 0; /*0x100885316*/
    v57 = (const __m128i *)&xmmword_1015FBEC0; /*0x100885321*/
    v61 = _RAX; /*0x100885328*/
    v62 = v22; /*0x10088532c*/
  }
  if ( *a1 == 5 ) /*0x100885333*/
  {
    HIDWORD(_RAX) = (unsigned __int64)alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d( /*0x10088534c*/
                                        &v63,
                                        a1 + 8,
                                        "tool_choicestop_sequences",
                                        11) >> 32;
    if ( (_BYTE)v63 != 6 ) /*0x100885355*/
      HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v63) >> 32; /*0x10088535b*/
  }
  v11 = 0; /*0x100885360*/
LABEL_19:
  v23 = v58; /*0x100885363*/
  if ( v58 ) /*0x10088536a*/
  {
    if ( v11 ) /*0x100885373*/
    {
      v24 = v57; /*0x100885379*/
      a2 = _mm_load_si128(v57); /*0x100885380*/
      _R13D = ~_mm_movemask_epi8(a2); /*0x10088538a*/
      v26 = v57 + 1; /*0x10088538d*/
      do /*0x1008853b0*/
      {
        if ( !(_WORD)_R13D ) /*0x1008853b6*/
        {
          do /*0x1008853dc*/
          {
            a2 = _mm_load_si128(v26); /*0x1008853c0*/
            v27 = _mm_movemask_epi8(a2); /*0x1008853c5*/
            v24 -= 24; /*0x1008853ca*/
            ++v26; /*0x1008853d1*/
          }
          while ( v27 == 0xFFFF ); /*0x1008853dc*/
          _R13D = ~v27; /*0x1008853de*/
        }
        __asm { tzcnt eax, r13d } /*0x1008853e1*/
        v28 = -3 * _RAX; /*0x1008853e9*/
        v29 = *((_QWORD *)&v24[-1] + v28 - 1); /*0x1008853ed*/
        if ( v29 ) /*0x1008853f5*/
          *(double *)a2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[-1].i64[v28], v29, 1); /*0x100885404*/
        --v11; /*0x1008853a0*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1008853a7*/
        _R13D &= _R13D - 1; /*0x1008853aa*/
      }
      while ( v11 ); /*0x1008853b0*/
    }
    v30 = (24 * v23 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100885417*/
    v31 = v30 + v23 + 17; /*0x10088541e*/
    if ( v31 ) /*0x100885422*/
      *(double *)a2.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v57 - v30, v31, 16); /*0x100885436*/
  }
  return *(double *)a2.i64; /*0x10088543b*/
}