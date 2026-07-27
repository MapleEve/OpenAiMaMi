// __ZN13codexmate_lib4core17session_analytics24compute_change_analytics @ 0x100a87f80 | 基线 same-set
const __m128i **__fastcall codexmate_lib::core::session_analytics::compute_change_analytics::hb043741ba7c9bfd5(
        const __m128i **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  const __m128i **v6; // rbx
  const __m128i *v7; // rax
  const __m128i *v8; // rsi
  __int64 v9; // r14
  unsigned __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rax
  const __m128i *v16; // rdx
  const __m128i *v17; // rcx
  const __m128i **v18; // r15
  __int64 v19; // rbx
  const __m128i **v20; // rbx
  int v21; // r13d
  double v22; // xmm0_8
  unsigned __int64 v23; // rdx
  __int8 *v24; // rax
  const __m128i *v25; // r12
  __int64 v26; // r8
  __int64 v27; // r9
  char v30; // r9
  const __m128i *v31; // r11
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // r11
  const __m128i *v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  unsigned __int32 v39; // eax
  int v40; // eax
  int v41; // edx
  const __m128i *v42; // r14
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 i64; // r14
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  double v49; // xmm0_8
  const __m128i *v50; // r13
  const __m128i *v51; // rbx
  __int64 v52; // r14
  __m128i *v53; // rdx
  __int64 v54; // rax
  _QWORD *v55; // r15
  __int64 v56; // rsi
  unsigned __int64 v58; // r14
  const __m128i *v59; // rbx
  const __m128i *v60; // r15
  const __m128i *v62; // r12
  int v63; // r13d
  __int64 v64; // rax
  __int64 v65; // rsi
  unsigned __int64 v66; // rax
  __int64 v67; // r14
  __m128i v69; // [rsp+0h] [rbp-170h]
  _QWORD v70[3]; // [rsp+10h] [rbp-160h] BYREF
  _QWORD v71[3]; // [rsp+28h] [rbp-148h] BYREF
  const __m128i *v72; // [rsp+40h] [rbp-130h]
  const __m128i *v73; // [rsp+48h] [rbp-128h]
  unsigned __int64 v74; // [rsp+50h] [rbp-120h]
  __int64 v75; // [rsp+58h] [rbp-118h]
  const __m128i *v76; // [rsp+60h] [rbp-110h]
  __int64 v77; // [rsp+68h] [rbp-108h]
  const __m128i *v78; // [rsp+70h] [rbp-100h] BYREF
  unsigned __int64 v79; // [rsp+78h] [rbp-F8h]
  const __m128i *v80; // [rsp+80h] [rbp-F0h]
  const __m128i *v81; // [rsp+88h] [rbp-E8h]
  __int64 v82; // [rsp+90h] [rbp-E0h]
  const __m128i *v83; // [rsp+98h] [rbp-D8h]
  const __m128i *v84; // [rsp+A0h] [rbp-D0h]
  const __m128i *v85; // [rsp+A8h] [rbp-C8h]
  const __m128i *v86; // [rsp+B0h] [rbp-C0h]
  const __m128i *v87; // [rsp+B8h] [rbp-B8h]
  const __m128i *v88; // [rsp+C0h] [rbp-B0h]
  const __m128i *v89; // [rsp+C8h] [rbp-A8h]
  __m128i v90; // [rsp+D0h] [rbp-A0h] BYREF
  unsigned __int64 v91; // [rsp+E8h] [rbp-88h] BYREF
  const __m128i *v92; // [rsp+F0h] [rbp-80h]
  const __m128i *v93; // [rsp+F8h] [rbp-78h]
  __m128i *v94; // [rsp+100h] [rbp-70h]
  __int64 v95; // [rsp+108h] [rbp-68h] BYREF
  __int64 v96; // [rsp+110h] [rbp-60h]
  const __m128i *v97; // [rsp+118h] [rbp-58h]
  unsigned __int64 v98; // [rsp+120h] [rbp-50h] BYREF
  const __m128i *v99; // [rsp+128h] [rbp-48h]
  const __m128i *v100; // [rsp+130h] [rbp-40h]
  const __m128i *v101; // [rsp+138h] [rbp-38h]
  unsigned __int64 v102; // [rsp+140h] [rbp-30h]

  v6 = a1; /*0x100a87f9a*/
  codexmate_lib::core::session_analytics::parse_all_sessions::h61d984ccd4ee9321(&v78, a2, a3, a4); /*0x100a87fa4*/
  v7 = v78; /*0x100a87fa9*/
  v98 = v79; /*0x100a87fb7*/
  v99 = v80; /*0x100a87fc2*/
  v100 = v81; /*0x100a87fcd*/
  if ( v78 == (const __m128i *)11 ) /*0x100a87fd5*/
  {
    v91 = v98; /*0x100a87fe3*/
    v92 = v99; /*0x100a87fea*/
    v93 = v100; /*0x100a87ff2*/
    v75 = a4; /*0x100a87ff9*/
    v8 = (const __m128i *)a4; /*0x100a88000*/
    v9 = codexmate_lib::core::session_analytics::range_to_cutoff::hbe9b944a87b55264(a3, a4); /*0x100a88008*/
    v10 = (unsigned __int64 *)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x100a8800b*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100a88012*/
    v14 = v11; /*0x100a88014*/
    if ( *(_BYTE *)(v11 + 16) == 1 ) /*0x100a8801b*/
    {
      v15 = *(_QWORD *)v11; /*0x100a88021*/
      v16 = *(const __m128i **)(v14 + 8); /*0x100a88024*/
    }
    else
    {
      v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100a88652*/
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v8,
              v12,
              v13);
      *(_QWORD *)v14 = v15; /*0x100a88657*/
      *(_QWORD *)(v14 + 8) = v16; /*0x100a8865a*/
      *(_BYTE *)(v14 + 16) = 1; /*0x100a8865e*/
    }
    v77 = a3; /*0x100a88028*/
    *(_QWORD *)v14 = v15 + 1; /*0x100a88033*/
    v81 = nullptr; /*0x100a8803d*/
    v80 = nullptr; /*0x100a8804b*/
    v79 = 0; /*0x100a88059*/
    v78 = (const __m128i *)&xmmword_1015FBEC0; /*0x100a88067*/
    v82 = v15; /*0x100a8806e*/
    v83 = v16; /*0x100a88075*/
    v17 = v92; /*0x100a8807c*/
    v76 = v92; /*0x100a88087*/
    v94 = (__m128i *)v6; /*0x100a8808e*/
    if ( v93 ) /*0x100a88092*/
    {
      v73 = &v92[7 * (_QWORD)v93]; /*0x100a880a9*/
      v90 = 0; /*0x100a880b4*/
      v74 = 0x8000000000000000LL; /*0x100a880c0*/
      do /*0x100a880d7*/
      {
        v18 = (const __m128i **)v17[5].i64[0]; /*0x100a880dd*/
        v19 = v17[5].i64[1]; /*0x100a880e1*/
        v17 += 7; /*0x100a880e5*/
        v20 = &v18[2 * v19]; /*0x100a880f1*/
        while ( v18 != v20 ) /*0x100a88103*/
        {
          v8 = *v18; /*0x100a88105*/
          v18 += 2; /*0x100a88108*/
          if ( (__int64)v8 >= v9 ) /*0x100a8810f*/
          {
            v72 = v17; /*0x100a88111*/
            v69 = _mm_loadl_epi64((const __m128i *)(v18 - 1)); /*0x100a8811e*/
            v21 = *((_DWORD *)v18 - 2) + *((_DWORD *)v18 - 1); /*0x100a8812a*/
            v22 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076( /*0x100a88131*/
                    (unsigned __int64 *)&v95,
                    (__int64)v8);
            v10 = &v98; /*0x100a88136*/
            v8 = (const __m128i *)&v78; /*0x100a8813a*/
            hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h40383baac158ee74( /*0x100a88144*/
              &v98,
              &v78,
              &v95,
              v22);
            v23 = v98; /*0x100a88149*/
            v24 = (__int8 *)v99; /*0x100a8814d*/
            if ( v98 != v74 ) /*0x100a88158*/
            {
              v25 = v101; /*0x100a8815e*/
              v8 = (const __m128i *)v101->i64[0]; /*0x100a88166*/
              v26 = v101->i64[1]; /*0x100a8816a*/
              v27 = v102 & v26; /*0x100a88172*/
              _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v101->i64[0] + (v102 & v26)))); /*0x100a8817b*/
              if ( !(_DWORD)_R10 ) /*0x100a88183*/
              {
                v34 = 16; /*0x100a8825f*/
                do /*0x100a8827d*/
                {
                  v27 = v26 & (v34 + v27); /*0x100a88268*/
                  _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v8 + v27))); /*0x100a88271*/
                  v34 += 16; /*0x100a88276*/
                }
                while ( !(_DWORD)_R10 ); /*0x100a8827d*/
              }
              __asm { tzcnt r10d, r10d } /*0x100a88189*/
              _R10 = v26 & (v27 + _R10); /*0x100a88191*/
              v30 = v8->i8[_R10]; /*0x100a88194*/
              if ( v30 >= 0 ) /*0x100a8819c*/
              {
                _R9D = _mm_movemask_epi8(_mm_load_si128(v8)); /*0x100a88289*/
                __asm { tzcnt r10d, r9d } /*0x100a8828e*/
                v30 = v8->i8[_R10]; /*0x100a88293*/
              }
              v31 = v100; /*0x100a881a2*/
              v10 = (unsigned __int64 *)(v102 >> 57); /*0x100a881a6*/
              v8->i8[_R10] = v102 >> 57; /*0x100a881b1*/
              v8[1].i8[v26 & (_R10 - 16)] = (char)v10; /*0x100a881b5*/
              v32 = -_R10; /*0x100a881ba*/
              v33 = 5 * v32; /*0x100a881bd*/
              *((_QWORD *)&v8[-2] + v33 - 1) = v23; /*0x100a881c1*/
              v8[-2].i64[v33] = (__int64)v24; /*0x100a881c6*/
              v24 = &v8->i8[40 * v32]; /*0x100a881cb*/
              *((_QWORD *)&v8[-1] + v33 - 1) = v31; /*0x100a881d7*/
              v8[-1].i64[v33] = 0; /*0x100a881dc*/
              v8->i32[2 * v33 - 2] = 0; /*0x100a881e5*/
              v25[1] = _mm_sub_epi64( /*0x100a88207*/
                         _mm_loadu_si128(v25 + 1),
                         _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v30 & 1, 0));
            }
            v90 = _mm_add_epi32( /*0x100a88239*/
                    _mm_load_si128(&v90),
                    _mm_insert_epi32(_mm_insert_epi32(_mm_shuffle_epi32(v69, 80), v21, 0), 1, 3));
            *((_DWORD *)v24 - 4) += v21; /*0x100a88241*/
            *((_DWORD *)v24 - 3) += *((_DWORD *)v18 - 2); /*0x100a88249*/
            *((_DWORD *)v24 - 2) += *((_DWORD *)v18 - 1); /*0x100a88250*/
            v17 = v72; /*0x100a88253*/
          }
        }
      }
      while ( v17 != v73 ); /*0x100a880d7*/
    }
    else
    {
      v90 = 0; /*0x100a88319*/
    }
    v38 = 7; /*0x100a88321*/
    if ( v75 == 5 ) /*0x100a8832e*/
    {
      if ( *(_DWORD *)v77 ^ 0x61646F74 | *(unsigned __int8 *)(v77 + 4) ^ 0x79 ) /*0x100a88345*/
      {
        v39 = _byteswap_ulong(*(_DWORD *)v77); /*0x100a8834b*/
        if ( v39 == 1836019316 ) /*0x100a88352*/
          v40 = *(unsigned __int8 *)(v77 + 4) - 104; /*0x100a88358*/
        else
          v40 = 2 * (v39 >= 0x6D6F6E74) - 1; /*0x100a8836a*/
        if ( !v40 ) /*0x100a88375*/
          v38 = 30; /*0x100a88375*/
      }
      else
      {
        v38 = 1; /*0x100a8835d*/
      }
    }
    v95 = std::time::SystemTime::now::h1fe79e41f9d5677f(v10, v8); /*0x100a8837e*/
    LODWORD(v96) = v41; /*0x100a88382*/
    std::time::SystemTime::duration_since::had059553cab94f96(&v98, &v95, 0, 0); /*0x100a88391*/
    if ( (_BYTE)v98 ) /*0x100a8839a*/
      v42 = nullptr; /*0x100a883a2*/
    else
      v42 = v99; /*0x100a8839c*/
    v43 = 3LL * (unsigned int)(8 * v38); /*0x100a883ac*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v98, &v95); /*0x100a883b0*/
    v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v43, 8); /*0x100a883bd*/
    if ( !v44 ) /*0x100a883c5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v43); /*0x100a88670*/
    v95 = v38; /*0x100a883cb*/
    v96 = v44; /*0x100a883cf*/
    v97 = nullptr; /*0x100a883d3*/
    i64 = (__int64)v42[-5400 * v38 + 5400].i64; /*0x100a883e5*/
    do /*0x100a88437*/
    {
      v49 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076(&v98, i64); /*0x100a8843f*/
      v50 = v97; /*0x100a88444*/
      if ( v97 == (const __m128i *)v95 ) /*0x100a8844c*/
        v49 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v95); /*0x100a88451*/
      --v38; /*0x100a88400*/
      v46 = v96; /*0x100a88403*/
      v47 = 3LL * (_QWORD)v50; /*0x100a88407*/
      *(_QWORD *)(v96 + 8 * v47 + 16) = v100; /*0x100a88410*/
      v48 = v98; /*0x100a88415*/
      *(_QWORD *)(v46 + 8 * v47 + 8) = v99; /*0x100a8841d*/
      *(_QWORD *)(v46 + 8 * v47) = v48; /*0x100a88422*/
      v97 = (const __m128i *)&v50->i8[1]; /*0x100a88429*/
      i64 += 86400; /*0x100a8842d*/
    }
    while ( v38 ); /*0x100a88437*/
    v51 = v97; /*0x100a88458*/
    v100 = v97; /*0x100a8845c*/
    v52 = v96; /*0x100a88464*/
    v99 = (const __m128i *)v96; /*0x100a88468*/
    v98 = v95; /*0x100a8846c*/
    v70[0] = v96; /*0x100a88478*/
    v70[1] = v96 + 24LL * (_QWORD)v97; /*0x100a8847f*/
    v70[2] = &v78; /*0x100a8848d*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4e0b7216b20d9445( /*0x100a884a2*/
      v71,
      v70,
      v49);
    v53 = v94; /*0x100a884ae*/
    v94[1].i64[1] = v71[2]; /*0x100a884b2*/
    v54 = v71[0]; /*0x100a884b6*/
    v53[1].i64[0] = v71[1]; /*0x100a884c4*/
    v53->i64[1] = v54; /*0x100a884c8*/
    v53[2] = _mm_load_si128(&v90); /*0x100a884d4*/
    v53->i64[0] = 11; /*0x100a884d9*/
    if ( v51 ) /*0x100a884e3*/
    {
      v55 = (_QWORD *)(v52 + 8); /*0x100a884e5*/
      do /*0x100a884f7*/
      {
        v56 = *(v55 - 1); /*0x100a884f9*/
        if ( v56 ) /*0x100a88500*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v55, v56, 1); /*0x100a8850a*/
        v55 += 3; /*0x100a884f0*/
        v51 = (const __m128i *)((char *)v51 - 1); /*0x100a884f4*/
      }
      while ( v51 ); /*0x100a884f7*/
    }
    HIDWORD(_RAX) = HIDWORD(v98); /*0x100a88511*/
    if ( v98 ) /*0x100a88518*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, 24 * v98, 8); /*0x100a8852a*/
    v58 = v79; /*0x100a8852f*/
    if ( v79 ) /*0x100a88539*/
    {
      v59 = v81; /*0x100a8853f*/
      if ( v81 ) /*0x100a88549*/
      {
        v60 = v78; /*0x100a8854f*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v78)); /*0x100a88560*/
        v62 = v78 + 1; /*0x100a88563*/
        do /*0x100a88580*/
        {
          if ( !(_WORD)_R13D ) /*0x100a88586*/
          {
            do /*0x100a885ad*/
            {
              v63 = _mm_movemask_epi8(_mm_load_si128(v62)); /*0x100a88596*/
              v60 -= 40; /*0x100a8859b*/
              ++v62; /*0x100a885a2*/
            }
            while ( v63 == 0xFFFF ); /*0x100a885ad*/
            _R13D = ~v63; /*0x100a885af*/
          }
          __asm { tzcnt eax, r13d } /*0x100a885b2*/
          v64 = -5 * _RAX; /*0x100a885ba*/
          v65 = *((_QWORD *)&v60[-2] + v64 - 1); /*0x100a885be*/
          if ( v65 ) /*0x100a885c6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60[-2].i64[v64], v65, 1); /*0x100a885d5*/
          v59 = (const __m128i *)((char *)v59 - 1); /*0x100a88570*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100a88577*/
          _R13D &= _R13D - 1; /*0x100a8857a*/
        }
        while ( v59 ); /*0x100a88580*/
      }
      v66 = (40 * v58 + 55) & 0xFFFFFFFFFFFFFFF0LL; /*0x100a885e8*/
      v67 = v66 + v58 + 17; /*0x100a885ef*/
      if ( v67 ) /*0x100a885f3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v78 - v66, v67, 16); /*0x100a88607*/
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h78df5ffcd006998d(&v91); /*0x100a88613*/
    v6 = (const __m128i **)v94; /*0x100a88622*/
    if ( v91 ) /*0x100a88626*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, 112 * v91, 8); /*0x100a88638*/
  }
  else
  {
    a1[11] = v89; /*0x100a882a4*/
    a1[10] = v88; /*0x100a882af*/
    a1[9] = v87; /*0x100a882ba*/
    a1[8] = v86; /*0x100a882c5*/
    a1[7] = v85; /*0x100a882d0*/
    a1[6] = v84; /*0x100a882db*/
    v36 = (const __m128i *)v82; /*0x100a882df*/
    a1[5] = v83; /*0x100a882ed*/
    a1[4] = v36; /*0x100a882f1*/
    a1[3] = v100; /*0x100a882f9*/
    v37 = v98; /*0x100a882fd*/
    a1[2] = v99; /*0x100a88305*/
    a1[1] = (const __m128i *)v37; /*0x100a88309*/
    *a1 = v7; /*0x100a8830d*/
  }
  return v6; /*0x100a88640*/
}