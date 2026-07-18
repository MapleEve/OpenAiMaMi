// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x100405fe0 d=1
__int64 __fastcall codexmate_lib::core::debug_bundle::summarize_last_error_value::h0f7ba293666eee16(
        unsigned __int64 **a1,
        __int64 a2)
{
  unsigned __int8 *v2; // rax
  size_t v3; // rdx
  unsigned __int8 *v4; // r14
  int v5; // ebx
  __int64 v6; // r13
  __int64 v7; // r15
  unsigned __int8 *v8; // r12
  _BYTE *v9; // r8
  bool v10; // zf
  int v11; // r13d
  int v12; // ecx
  int v13; // esi
  _BYTE *v14; // rdi
  int v15; // edx
  _BOOL8 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // esi
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  size_t v23; // r15
  const void *v24; // rsi
  __int64 v25; // rax
  int v26; // ecx
  int v27; // edx
  __int64 v28; // rax
  __int64 (__fastcall *v29)(); // r13
  unsigned __int64 v30; // rdx
  size_t v31; // rsi
  __int64 v32; // r13
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  size_t v37; // rdx
  __int64 v38; // r15
  _BYTE *v39; // rax
  _BYTE *v40; // r12
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rcx
  __m128i si128; // xmm0
  __m128i v45; // xmm1
  __m128i v46; // xmm2
  __m128i v47; // xmm3
  __m128i v48; // xmm4
  __m128i v49; // xmm5
  __m128i v50; // xmm6
  __int64 v51; // rcx
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __m128i v54; // xmm2
  __m128i v55; // xmm3
  __m128i v56; // xmm4
  char *v57; // r15
  __int64 v58; // rbx
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // rcx
  size_t v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r14
  __int64 v66; // rax
  __int64 v67; // rcx
  size_t v68; // rdx
  __int64 v69; // r14
  unsigned __int64 v70; // rbx
  __int64 v71; // r15
  __int64 v72; // r14
  __int64 v73; // r15
  __int64 (__fastcall *v74)(); // rax
  __int64 result; // rax
  unsigned __int64 *v76; // rax
  unsigned __int8 v77; // al
  size_t v78[3]; // [rsp+0h] [rbp-150h] BYREF
  size_t v79[3]; // [rsp+18h] [rbp-138h] BYREF
  size_t v80[3]; // [rsp+30h] [rbp-120h] BYREF
  __int64 (__fastcall *v81)(); // [rsp+48h] [rbp-108h]
  size_t v82; // [rsp+50h] [rbp-100h]
  unsigned __int64 **v83; // [rsp+58h] [rbp-F8h]
  __int64 v84; // [rsp+60h] [rbp-F0h]
  size_t v85; // [rsp+68h] [rbp-E8h] BYREF
  unsigned __int64 *v86; // [rsp+70h] [rbp-E0h]
  size_t v87; // [rsp+78h] [rbp-D8h]
  __int64 v88; // [rsp+80h] [rbp-D0h] BYREF
  __int64 v89; // [rsp+88h] [rbp-C8h]
  __int64 v90; // [rsp+90h] [rbp-C0h]
  void *__src; // [rsp+98h] [rbp-B8h]
  unsigned __int64 *v92; // [rsp+A0h] [rbp-B0h] BYREF
  __int64 (__fastcall *v93)(); // [rsp+A8h] [rbp-A8h]
  size_t v94; // [rsp+B0h] [rbp-A0h]
  unsigned __int64 *v95; // [rsp+B8h] [rbp-98h]
  unsigned __int64 v96; // [rsp+C0h] [rbp-90h]
  __int64 v97; // [rsp+C8h] [rbp-88h]
  size_t v98; // [rsp+D0h] [rbp-80h]
  unsigned __int64 *v99; // [rsp+D8h] [rbp-78h]
  size_t v100; // [rsp+E0h] [rbp-70h]
  const void *v101; // [rsp+E8h] [rbp-68h]
  __int64 v102; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v103; // [rsp+F8h] [rbp-58h]
  __int64 v104; // [rsp+100h] [rbp-50h]
  __int64 v105; // [rsp+108h] [rbp-48h] BYREF
  __int64 v106; // [rsp+110h] [rbp-40h]
  __int64 v107; // [rsp+118h] [rbp-38h]
  size_t __n; // [rsp+120h] [rbp-30h]

  if ( !a2 ) /*0x100405ff7*/
    goto LABEL_104; /*0x100405ff7*/
  if ( *(_BYTE *)a2 != 3 ) /*0x100406000*/
    goto LABEL_104; /*0x100406000*/
  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14( /*0x100406011*/
         *(unsigned __int8 **)(a2 + 16),
         *(_QWORD *)(a2 + 24));
  if ( !v3 ) /*0x100406019*/
    goto LABEL_104; /*0x100406019*/
  v83 = a1; /*0x10040601f*/
  v102 = 0; /*0x100406026*/
  v103 = 8; /*0x10040602e*/
  v104 = 0; /*0x100406036*/
  v85 = 0; /*0x10040603e*/
  v87 = 0; /*0x100406049*/
  v105 = 0; /*0x100406054*/
  v106 = 1; /*0x10040605c*/
  v107 = 0; /*0x100406064*/
  __n = v3; /*0x10040606f*/
  v4 = &v2[v3]; /*0x100406073*/
  v5 = 32; /*0x100406076*/
  v6 = 1; /*0x10040607b*/
  v7 = 0; /*0x100406081*/
  __src = v2; /*0x100406084*/
  v8 = v2; /*0x10040608b*/
  while ( 1 ) /*0x1004060e8*/
  {
    while ( 1 ) /*0x1004060b7*/
    {
      v9 = (_BYTE *)v6; /*0x1004060b7*/
      if ( v8 == nullptr || v8 == v4 ) /*0x1004060ad*/
        goto LABEL_8; /*0x1004060ba*/
      v11 = *v8; /*0x1004060e0*/
      if ( (v11 & 0x80u) != 0 ) /*0x1004060e8*/
        break; /*0x1004060e8*/
      ++v8; /*0x1004060ea*/
      if ( (unsigned int)(v11 - 48) < 0xA ) /*0x1004060f4*/
        goto LABEL_31; /*0x1004060f4*/
LABEL_5:
      if ( v7 == 3 ) /*0x100406094*/
      {
        v6 = (__int64)v9; /*0x10040616e*/
        v16 = *v9 == 43; /*0x10040617a*/
        v17 = (unsigned __int8)v9[v16] - 48; /*0x100406182*/
        if ( v17 <= 9 ) /*0x100406188*/
        {
          v18 = (unsigned __int8)v9[v16 + 1] - 48; /*0x100406194*/
          if ( v18 <= 9 ) /*0x10040619a*/
          {
            v19 = v18 + 10 * (__int16)v17; /*0x1004061a8*/
            if ( *v9 != 43 ) /*0x1004061ad*/
            {
              v20 = (unsigned __int8)v9[v16 + 2] - 48; /*0x1004061b5*/
              if ( v20 > 9 ) /*0x1004061bb*/
                goto LABEL_36; /*0x1004061bb*/
              v19 = v20 + 10 * (_DWORD)v19; /*0x1004061c6*/
            }
            if ( (unsigned __int16)(v19 - 400) <= 0xC7u ) /*0x1004061d6*/
            {
              v21 = core::fmt::num::imp::_$LT$impl$u20$u16$GT$::_fmt::he37f58232fb48d79(v19, &v88, 5); /*0x1004061e8*/
              v23 = v22; /*0x1004061ed*/
              if ( v22 < 0 ) /*0x1004061f3*/
              {
                v42 = 0; /*0x1004064cb*/
                goto LABEL_55; /*0x1004064cb*/
              }
              v24 = (const void *)v21; /*0x1004061f9*/
              v84 = v6; /*0x1004061ff*/
              if ( v22 ) /*0x100406206*/
              {
                v101 = (const void *)v21; /*0x100406208*/
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10040620c*/
                v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1u); /*0x100406219*/
                if ( !v25 ) /*0x100406221*/
                {
                  v101 = (const void *)v23; /*0x1004065f6*/
                  v42 = 1; /*0x1004065fa*/
LABEL_55:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v42); /*0x1004064cd*/
                }
                v24 = v101; /*0x100406227*/
              }
              else
              {
                v25 = 1; /*0x10040627c*/
              }
              v29 = (__int64 (__fastcall *)())v25; /*0x100406284*/
              memcpy((void *)v25, v24, v23); /*0x10040628a*/
              v92 = (unsigned __int64 *)v23; /*0x10040628f*/
              v101 = v29; /*0x100406296*/
              v93 = v29; /*0x10040629a*/
              v94 = v23; /*0x1004062a1*/
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1e593a78bb104b56(&v85, &v92); /*0x1004062b6*/
              v6 = v84; /*0x1004062bb*/
            }
          }
        }
LABEL_36:
        v7 = 0; /*0x1004062c2*/
        v107 = 0; /*0x1004062c5*/
      }
      else
      {
        v7 = 0; /*0x10040609a*/
        v6 = (__int64)v9; /*0x10040609d*/
        v107 = 0; /*0x1004060a0*/
      }
    }
    v12 = v11 & 0x1F; /*0x1004060fe*/
    v13 = v8[1] & 0x3F; /*0x100406107*/
    if ( (unsigned __int8)v11 > 0xDFu ) /*0x10040610e*/
      break; /*0x10040610e*/
    v8 += 2; /*0x10040622d*/
    v26 = v13 | (v12 << 6); /*0x100406234*/
    LOBYTE(v11) = v26; /*0x100406236*/
    if ( (unsigned int)(v26 - 48) >= 0xA ) /*0x100406240*/
      goto LABEL_5; /*0x100406240*/
LABEL_31:
    v28 = v7; /*0x100406260*/
    if ( v105 == v7 ) /*0x100406267*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e( /*0x1004062e5*/
        (unsigned __int64 *)&v105,
        v7,
        1,
        1,
        1u);
      v9 = (_BYTE *)v106; /*0x1004062ea*/
      v28 = v107; /*0x1004062ee*/
    }
    v9[v28] = v11; /*0x100406269*/
    v6 = (__int64)v9; /*0x10040626d*/
    v107 = ++v7; /*0x100406273*/
  }
  v15 = (v13 << 6) | v8[2] & 0x3F; /*0x100406125*/
  if ( (unsigned __int8)v11 < 0xF0u ) /*0x10040612b*/
  {
    v27 = (v12 << 12) | v15; /*0x10040624b*/
    LOBYTE(v11) = v27; /*0x10040624d*/
    v8 += 3; /*0x100406250*/
    if ( (unsigned int)(v27 - 48) < 0xA ) /*0x10040625a*/
      goto LABEL_31; /*0x10040625a*/
    goto LABEL_5; /*0x10040625a*/
  }
  v14 = v8 + 3; /*0x100406114*/
  if ( (((v11 & 7) << 18) | (v15 << 6) | v8[3] & 0x3F) != 0x110000 ) /*0x10040614a*/
  {
    v8 += 4; /*0x100406150*/
    v11 = ((v11 & 7) << 18) | (v15 << 6) | *v14 & 0x3F; /*0x10040615e*/
LABEL_9:
    if ( (unsigned int)(v11 - 48) < 0xA ) /*0x1004060d7*/
      goto LABEL_31; /*0x1004060d7*/
    goto LABEL_5; /*0x1004060d7*/
  }
LABEL_8:
  v8 = nullptr; /*0x1004060bc*/
  v10 = v5 == 1114112; /*0x1004060bf*/
  v11 = v5; /*0x1004060c5*/
  v5 = 1114112; /*0x1004060c8*/
  if ( !v10 ) /*0x1004060ca*/
    goto LABEL_9; /*0x1004060ca*/
  v30 = 0; /*0x100406305*/
  v31 = v85; /*0x100406307*/
  if ( v85 ) /*0x100406311*/
    v31 = v87; /*0x100406313*/
  LOBYTE(v30) = v85 != 0; /*0x10040631a*/
  v92 = (unsigned __int64 *)v30; /*0x10040631d*/
  v93 = nullptr; /*0x100406324*/
  v94 = v85; /*0x10040632f*/
  v95 = v86; /*0x100406336*/
  v96 = v30; /*0x10040633d*/
  v97 = 0; /*0x100406344*/
  v98 = v85; /*0x10040634f*/
  v99 = v86; /*0x100406353*/
  v100 = v31; /*0x100406357*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9532dbab3c8dd237( /*0x10040636c*/
    &v88,
    &v92,
    v30,
    v86,
    v9);
  if ( v105 ) /*0x100406378*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100406383*/
  v32 = v90; /*0x100406388*/
  v33 = __n; /*0x100406392*/
  if ( v90 )
  {
    alloc::str::join_generic_copy::hfccd3ffc09b1fad9((unsigned __int64 *)&v92, v89, v90, ",;  header(s): ", 1u);
    v107 = v94; /*0x1004063c6*/
    v106 = (__int64)v93; /*0x1004063d8*/
    v105 = (__int64)v92; /*0x1004063dc*/
    v92 = (unsigned __int64 *)&v105; /*0x1004063e4*/
    v93 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004063f2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v80, byte_1016F1189, (unsigned __int64)&v92); /*0x10040640e*/
    if ( v105 ) /*0x10040641a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100406425*/
    v34 = v104; /*0x10040642a*/
    if ( v104 == v102 ) /*0x100406432*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v102); /*0x100406438*/
    v35 = v103; /*0x10040643d*/
    v36 = 3 * v34; /*0x100406441*/
    *(_QWORD *)(v103 + 8 * v36 + 16) = v80[2]; /*0x10040644c*/
    v37 = v80[0]; /*0x100406451*/
    *(_QWORD *)(v35 + 8 * v36 + 8) = v80[1]; /*0x10040645f*/
    *(_QWORD *)(v35 + 8 * v36) = v37; /*0x100406464*/
    v104 = v34 + 1; /*0x10040646b*/
  }
  if ( v33 < 0 ) /*0x100406472*/
  {
    v38 = 0; /*0x100406474*/
    goto LABEL_49; /*0x100406474*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10040648c*/
  v38 = 1; /*0x100406491*/
  v39 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v33, 1u); /*0x10040649f*/
  if ( !v39 ) /*0x1004064a7*/
LABEL_49:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v38); /*0x100406477*/
  v40 = v39; /*0x1004064a9*/
  memcpy(v39, __src, v33); /*0x1004064b9*/
  if ( (unsigned __int64)v33 < 8 ) /*0x1004064c2*/
  {
    v41 = 0; /*0x1004064c4*/
    goto LABEL_66; /*0x1004064c6*/
  }
  if ( (unsigned __int64)v33 < 0x20 ) /*0x1004064df*/
  {
    v41 = 0; /*0x1004064e1*/
    goto LABEL_62; /*0x1004064e3*/
  }
  v41 = v33 & 0x7FFFFFFFFFFFFFE0LL; /*0x1004064f5*/
  v43 = 0; /*0x1004064f8*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_101513710); /*0x1004064fa*/
  v45 = _mm_load_si128((const __m128i *)&xmmword_101513720); /*0x100406502*/
  v46 = _mm_load_si128((const __m128i *)&xmmword_101513730); /*0x10040650a*/
  do /*0x100406579*/
  {
    v47 = _mm_loadu_si128((const __m128i *)&v40[v43]); /*0x100406520*/
    v48 = _mm_loadu_si128((const __m128i *)&v40[v43 + 16]); /*0x100406526*/
    v49 = _mm_add_epi8(v47, si128); /*0x100406531*/
    v50 = _mm_add_epi8(v48, si128); /*0x100406539*/
    *(__m128i *)&v40[v43] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v49, v45), v49), v46), v47); /*0x100406565*/
    *(__m128i *)&v40[v43 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v50, v45), v50), v46), v48); /*0x10040656b*/
    v43 += 32; /*0x100406572*/
  }
  while ( v41 != v43 ); /*0x100406579*/
  if ( v33 != v41 ) /*0x10040657e*/
  {
    if ( (v33 & 0x18) != 0 ) /*0x100406588*/
    {
LABEL_62:
      v51 = v41; /*0x10040658e*/
      v41 = v33 & 0x7FFFFFFFFFFFFFF8LL; /*0x10040659f*/
      v52 = _mm_load_si128((const __m128i *)&xmmword_101513740); /*0x1004065a2*/
      v53 = _mm_load_si128((const __m128i *)&xmmword_101513750); /*0x1004065aa*/
      v54 = _mm_load_si128((const __m128i *)&xmmword_101513760); /*0x1004065b2*/
      do /*0x1004065ef*/
      {
        v55 = _mm_loadl_epi64((const __m128i *)&v40[v51]); /*0x1004065c0*/
        v56 = _mm_add_epi8(v55, v52); /*0x1004065ca*/
        *(_QWORD *)&v40[v51] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v56, v53), v56), v54), v55).u64[0]; /*0x1004065e2*/
        v51 += 8; /*0x1004065e8*/
      }
      while ( v41 != v51 ); /*0x1004065ef*/
      goto LABEL_67; /*0x1004065ef*/
    }
    do /*0x1004066a4*/
    {
LABEL_66:
      v40[v41] |= 32 * ((unsigned __int8)(v40[v41] - 65) < 0x1Au); /*0x100406687*/
      ++v41; /*0x10040669e*/
LABEL_67:
      ; /*0x1004066a1*/
    }
    while ( v33 != v41 ); /*0x1004066a4*/
  }
  v57 = (char *)&anon_68347d2bbd113ff8f7653f9946f1b8f6_156; /*0x1004066a6*/
  v58 = 7; /*0x1004066ad*/
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004066df*/
                           &anon_68347d2bbd113ff8f7653f9946f1b8f6_156,
                           7u,
                           v40)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &anon_68347d2bbd113ff8f7653f9946f1b8f6_157,
                           9u,
                           v40) )
  {
    v57 = (char *)&unk_10151BDE9; /*0x1004066ec*/
    if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10040675e*/
                             &unk_10151BDE9,
                             7u,
                             v40)
      && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             &unk_10151BDF0,
                             3u,
                             v40)
      && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             &unk_10151BDF3,
                             7u,
                             v40)
      && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             &unk_10151BDFA,
                             0xFu,
                             v40) )
    {
      v57 = "authnonesluglogsroleuserdonehostnametool\t"; /*0x100406782*/
      v58 = 4; /*0x100406789*/
      if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004067c7*/
                               &unk_10151BE09,
                               3u,
                               v40)
        && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                               &unk_10151BE0C,
                               3u,
                               v40)
        && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                               &unk_10151BE0F,
                               0xCu,
                               v40) )
      {
        if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004067e6*/
                                &unk_10151BE1B,
                                3u,
                                v40) )
        {
          v57 = "model"; /*0x1004067ef*/
          v58 = 5; /*0x1004067f6*/
        }
        else
        {
          v57 = "model"; /*0x1004067fd*/
          v58 = 5; /*0x100406804*/
          if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100406817*/
                                   "model",
                                   5u,
                                   v40) )
          {
            v57 = (char *)&unk_10151BE36; /*0x100406837*/
            v58 = 10; /*0x10040683e*/
            if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100406b36*/
                                     &unk_10151BE1E,
                                     3u,
                                     v40)
              && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                     "rateauthnonesluglogsroleuserdonehostnametool\t",
                                     4u,
                                     v40)
              && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                     &unk_10151BE21,
                                     5u,
                                     v40) )
            {
              v57 = "upstreammismatch[event][previousarchivedidentitytrailers"; /*0x100406b5a*/
              v58 = 8; /*0x100406b61*/
              if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100406b84*/
                                       &unk_10151BE26,
                                       3u,
                                       v40)
                && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                       &unk_10151BE29,
                                       3u,
                                       v40) )
              {
                v77 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100406ba3*/
                        &unk_10151BE2C,
                        3u,
                        v40);
                v58 = v77 + 7LL; /*0x100406bab*/
                v57 = (char *)&unk_10151BE2F; /*0x100406bb6*/
                if ( v77 ) /*0x100406bbf*/
                  v57 = "upstreammismatch[event][previousarchivedidentitytrailers"; /*0x100406bbf*/
              }
            }
          }
        }
      }
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100406879*/
  v105 = (__int64)v57; /*0x10040687e*/
  v106 = v58; /*0x100406882*/
  v92 = (unsigned __int64 *)&v105; /*0x10040688a*/
  v93 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x100406898*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1004068b4*/
    v79,
    (unsigned __int8 *)"\tcategory=\xC0src/commands/debug_report.rs",
    (unsigned __int64)&v92);
  v59 = v104; /*0x1004068b9*/
  if ( v104 == v102 ) /*0x1004068c1*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v102); /*0x1004068c7*/
  v60 = v103; /*0x1004068cc*/
  v61 = 3 * v59; /*0x1004068d0*/
  *(_QWORD *)(v103 + 8 * v61 + 16) = v79[2]; /*0x1004068db*/
  v62 = v79[0]; /*0x1004068e0*/
  *(_QWORD *)(v60 + 8 * v61 + 8) = v79[1]; /*0x1004068ee*/
  *(_QWORD *)(v60 + 8 * v61) = v62; /*0x1004068f3*/
  v104 = v59 + 1; /*0x1004068fa*/
  v63 = codexmate_lib::core::relay::models::error_hint::h08c0f26c5846d8c4(__src, __n); /*0x100406909*/
  if ( v63 ) /*0x100406911*/
  {
    v105 = v63; /*0x100406913*/
    v106 = v64; /*0x100406917*/
    v92 = (unsigned __int64 *)&v105; /*0x10040691f*/
    v93 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x100406926*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, byte_1016F1193, (unsigned __int64)&v92); /*0x100406942*/
    v65 = v104; /*0x100406947*/
    if ( v104 == v102 ) /*0x10040694f*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v102); /*0x100406955*/
    v66 = v103; /*0x10040695a*/
    v67 = 3 * v65; /*0x10040695e*/
    *(_QWORD *)(v103 + 8 * v67 + 16) = v78[2]; /*0x100406969*/
    v68 = v78[0]; /*0x10040696e*/
    *(_QWORD *)(v66 + 8 * v67 + 8) = v78[1]; /*0x10040697c*/
    *(_QWORD *)(v66 + 8 * v67) = v68; /*0x100406981*/
    v69 = v65 + 1; /*0x100406985*/
    v104 = v69; /*0x100406988*/
  }
  else
  {
    v69 = v104; /*0x10040698e*/
  }
  alloc::str::join_generic_copy::hfccd3ffc09b1fad9((unsigned __int64 *)&v92, v103, v69, ";  header(s): ", 2u);
  v70 = (unsigned __int64)v92; /*0x1004069b2*/
  v81 = v93; /*0x1004069c0*/
  v82 = v94; /*0x1004069ce*/
  if ( v32 ) /*0x1004069df*/
  {
    v71 = v89 + 8; /*0x1004069e1*/
    do /*0x1004069f7*/
    {
      if ( *(_QWORD *)(v71 - 8) ) /*0x1004069f9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100406a0a*/
      v71 += 24; /*0x1004069f0*/
      --v32; /*0x1004069f4*/
    }
    while ( v32 ); /*0x1004069f7*/
  }
  if ( v88 ) /*0x100406a1b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100406a2d*/
  v72 = v104; /*0x100406a32*/
  if ( v104 ) /*0x100406a39*/
  {
    v73 = v103 + 8; /*0x100406a3f*/
    do /*0x100406a57*/
    {
      if ( *(_QWORD *)(v73 - 8) ) /*0x100406a59*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100406a6a*/
      v73 += 24; /*0x100406a50*/
      --v72; /*0x100406a54*/
    }
    while ( v72 ); /*0x100406a57*/
  }
  if ( v102 ) /*0x100406a78*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100406a8b*/
  a1 = v83; /*0x100406aa1*/
  if ( v70 == 0x8000000000000000LL ) /*0x100406aa8*/
  {
LABEL_104:
    LOBYTE(v92) = 0; /*0x100406aaa*/
    a1[3] = v95; /*0x100406ab8*/
    v74 = v93; /*0x100406abc*/
    a1[2] = (unsigned __int64 *)v94; /*0x100406aca*/
    a1[1] = (unsigned __int64 *)v74; /*0x100406ace*/
    result = (__int64)v92; /*0x100406ad2*/
    *a1 = v92; /*0x100406ad9*/
  }
  else
  {
    v76 = (unsigned __int64 *)v81; /*0x100406aee*/
    v83[3] = (unsigned __int64 *)v82; /*0x100406afc*/
    a1[2] = v76; /*0x100406b00*/
    LOBYTE(v92) = 0; /*0x100406b04*/
    *(_BYTE *)a1 = 3; /*0x100406b0b*/
    a1[1] = (unsigned __int64 *)v70; /*0x100406b0e*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v92); /*0x100406b19*/
  }
  return result; /*0x100406adc*/
}