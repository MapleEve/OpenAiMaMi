// __ZN13codexmate_lib4core5relay6models26validate_relay_provider_id @ 0x100331770 | 基线 same-set
unsigned __int8 *__fastcall codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        size_t a3)
{
  size_t v3; // r14
  unsigned __int8 *v4; // rbx
  void *v5; // rax
  char *v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // r8d
  int v11; // r9d
  int v12; // r11d
  int v13; // r10d
  unsigned __int64 v14; // r9
  void *v15; // rax
  void *v16; // r14
  const void *v18; // r12
  size_t v19; // r15
  char *v20; // rax
  size_t v21; // rcx
  __int64 v22; // r13
  _BYTE *v23; // rax
  _BYTE *v24; // r15
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __m128i si128; // xmm0
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __m128i v32; // xmm4
  __m128i v33; // xmm5
  __m128i v34; // xmm6
  __int64 v35; // rcx
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  __m128i v40; // xmm4
  int v41; // eax
  void *v42; // rax
  int v43; // [rsp+8h] [rbp-88h] BYREF
  __int64 v44; // [rsp+10h] [rbp-80h]
  __int64 *v45; // [rsp+20h] [rbp-70h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+28h] [rbp-68h]
  _QWORD v47[5]; // [rsp+30h] [rbp-60h] BYREF
  char v48; // [rsp+58h] [rbp-38h]
  __int16 v49; // [rsp+60h] [rbp-30h]

  v4 = a1; /*0x100331781*/
  if ( a3 ) /*0x100331787*/
  {
    if ( a3 > 0x80 ) /*0x100331790*/
    {
      v45 = &qword_1015DA238; /*0x10033179d*/
      v46 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003317a8*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017BC69F, &v45); /*0x1003317ba*/
      return v4; /*0x1003317bf*/
    }
    if ( (_BYTE)a3 == 2 ) /*0x10033183a*/
    {
      v6 = ".."; /*0x10033184a*/
    }
    else
    {
      if ( (_DWORD)a3 != 1 ) /*0x10033183f*/
        goto LABEL_11; /*0x10033183f*/
      v6 = "..."; /*0x100331841*/
    }
    a1 = a2; /*0x100331851*/
    v3 = a3; /*0x10033185a*/
    v7 = memcmp(a2, v6, a3); /*0x10033185d*/
    a3 = v3; /*0x100331862*/
    if ( !v7 ) /*0x10033186a*/
    {
LABEL_30:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100331982*/
      v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(77, 1); /*0x100331991*/
      if ( !v15 ) /*0x100331999*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 77); /*0x100331bec*/
      v16 = v15; /*0x10033199f*/
      memcpy(v15, "relay provider id is not a portable filename or contains reserved slug syntax", 0x4Du); /*0x1003319b1*/
      *(_QWORD *)v4 = 77; /*0x1003319b6*/
      *((_QWORD *)v4 + 1) = v16; /*0x1003319bd*/
      *((_QWORD *)v4 + 2) = 77; /*0x1003319c1*/
      return v4; /*0x1003319c1*/
    }
LABEL_11:
    v8 = a2[a3 - 1]; /*0x100331870*/
    if ( v8 != 32 && v8 != 46 ) /*0x100331881*/
    {
      v9 = 0x400000035002101LL; /*0x10033188b*/
      a1 = a2; /*0x100331895*/
      while ( a1 != &a2[a3] ) /*0x1003318ad*/
      {
        v10 = *a1; /*0x1003318b3*/
        if ( (v10 & 0x80u) != 0 ) /*0x1003318ba*/
        {
          v11 = v10 & 0x1F; /*0x1003318d1*/
          v12 = a1[1] & 0x3F; /*0x1003318da*/
          if ( (unsigned __int8)v10 <= 0xDFu ) /*0x1003318e2*/
          {
            a1 += 2; /*0x10033192e*/
            v10 = v12 | (v11 << 6); /*0x100331939*/
            if ( v10 < 0x20 ) /*0x100331940*/
              goto LABEL_30; /*0x100331940*/
          }
          else
          {
            v13 = (v12 << 6) | a1[2] & 0x3F; /*0x1003318f1*/
            if ( (unsigned __int8)v10 < 0xF0u ) /*0x1003318f8*/
            {
              a1 += 3; /*0x100331944*/
              v10 = (v11 << 12) | v13; /*0x10033194f*/
              if ( v10 < 0x20 ) /*0x100331956*/
                goto LABEL_30; /*0x100331956*/
            }
            else
            {
              v10 = ((v10 & 7) << 18) | (v13 << 6) | a1[3] & 0x3F; /*0x100331912*/
              if ( v10 == 1114112 ) /*0x10033191c*/
                break; /*0x10033191c*/
              a1 += 4; /*0x100331922*/
              if ( v10 < 0x20 ) /*0x10033192a*/
                goto LABEL_30; /*0x10033192a*/
            }
          }
        }
        else
        {
          ++a1; /*0x1003318bc*/
          if ( v10 < 0x20 ) /*0x1003318c3*/
            goto LABEL_30; /*0x1003318c3*/
        }
        if ( v10 - 127 < 0x21 ) /*0x100331968*/
          goto LABEL_30; /*0x100331968*/
        v14 = v10 - 34; /*0x10033196a*/
        if ( (unsigned int)v14 <= 0x3A ) /*0x100331972*/
        {
          if ( _bittest64(&v9, v14) ) /*0x100331978*/
            goto LABEL_30; /*0x100331978*/
        }
        if ( v10 == 124 ) /*0x1003318a4*/
          goto LABEL_30; /*0x1003318a4*/
      }
      v45 = nullptr; /*0x1003319db*/
      v46 = (__int64 (__fastcall *)())a3; /*0x1003319e3*/
      v18 = a2; /*0x1003319eb*/
      v47[0] = a2; /*0x1003319ee*/
      v47[1] = a3; /*0x1003319f2*/
      v47[2] = 0; /*0x1003319f6*/
      v19 = a3; /*0x1003319fe*/
      v47[3] = a3; /*0x100331a01*/
      v47[4] = 0x2E0000002ELL; /*0x100331a0f*/
      v48 = 1; /*0x100331a13*/
      v49 = 1; /*0x100331a17*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100331a27*/
        &v43,
        v47);
      if ( v43 == 1 ) /*0x100331a33*/
      {
        v3 = v44 - (_QWORD)v45; /*0x100331a3d*/
        v20 = (char *)v45 + (_QWORD)a2; /*0x100331a40*/
        v21 = v19; /*0x100331a43*/
      }
      else
      {
        v21 = v19; /*0x100331a4c*/
        if ( HIBYTE(v49) || (v3 = (char *)v46 - (char *)v45, ((unsigned __int8)v49 | ((char *)v46 != (char *)v45)) != 1) ) /*0x100331a65*/
          v20 = nullptr; /*0x100331a6d*/
        else
          v20 = (char *)v45 + v47[0]; /*0x100331a67*/
      }
      if ( v20 ) /*0x100331a72*/
        v18 = v20; /*0x100331a76*/
      else
        v3 = v21; /*0x100331a72*/
      if ( (v3 & 0x8000000000000000LL) != 0LL ) /*0x100331a7d*/
      {
        v22 = 0; /*0x100331a7f*/
        goto LABEL_44; /*0x100331a7f*/
      }
      if ( !v3 ) /*0x100331a8d*/
      {
        *(_QWORD *)v4 = 0x8000000000000000LL; /*0x100331ade*/
        return v4; /*0x100331ae1*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v43, v47); /*0x100331a8f*/
      v22 = 1; /*0x100331a94*/
      v23 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1); /*0x100331aa2*/
      if ( !v23 ) /*0x100331aaa*/
LABEL_44:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v22, v3); /*0x100331a82*/
      v24 = v23; /*0x100331aac*/
      v25 = v23; /*0x100331ab9*/
      memcpy(v23, v18, v3); /*0x100331ac2*/
      if ( v3 < 8 ) /*0x100331acb*/
      {
        v26 = 0; /*0x100331acd*/
        goto LABEL_61; /*0x100331acf*/
      }
      if ( v3 >= 0x20 ) /*0x100331aea*/
      {
        v26 = v3 & 0x7FFFFFFFFFFFFFE0LL; /*0x100331af7*/
        v27 = 0; /*0x100331afa*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_1015E35F0); /*0x100331afc*/
        v29 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100331b04*/
        v30 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100331b0c*/
        do /*0x100331b6d*/
        {
          v31 = _mm_loadu_si128((const __m128i *)&v24[v27]); /*0x100331b14*/
          v32 = _mm_loadu_si128((const __m128i *)&v24[v27 + 16]); /*0x100331b1a*/
          v33 = _mm_add_epi8(v31, si128); /*0x100331b25*/
          v34 = _mm_add_epi8(v32, si128); /*0x100331b2d*/
          *(__m128i *)&v24[v27] = _mm_xor_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v33, v29), v33), v30), v31); /*0x100331b59*/
          *(__m128i *)&v24[v27 + 16] = _mm_xor_si128( /*0x100331b5f*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v34, v29), v34), v30),
                                         v32);
          v27 += 32; /*0x100331b66*/
        }
        while ( v26 != v27 ); /*0x100331b6d*/
        if ( v3 == v26 ) /*0x100331b72*/
          goto LABEL_63; /*0x100331b72*/
        if ( (v3 & 0x18) == 0 ) /*0x100331b7c*/
        {
          do /*0x100331c0e*/
          {
LABEL_61:
            v24[v26] ^= 32 * ((unsigned __int8)(v24[v26] - 97) < 0x1Au); /*0x100331bf1*/
            ++v26; /*0x100331c08*/
LABEL_62:
            ; /*0x100331c0b*/
          }
          while ( v3 != v26 ); /*0x100331c0e*/
LABEL_63:
          if ( v3 == 3 ) /*0x100331c14*/
          {
            if ( !(*(_WORD *)v24 ^ 0x4F43 | (unsigned __int8)v24[2] ^ 0x4E) /*0x100331c75*/
              || !(*(_WORD *)v24 ^ 0x5250 | (unsigned __int8)v24[2] ^ 0x4E)
              || !(*(_WORD *)v24 ^ 0x5541 | (unsigned __int8)v24[2] ^ 0x58)
              || !(*(_WORD *)v24 ^ 0x554E | (unsigned __int8)v24[2] ^ 0x4C) )
            {
              goto LABEL_77; /*0x100331c78*/
            }
            if ( !(*(_WORD *)v24 ^ 0x4F43 | (unsigned __int8)v24[2] ^ 0x4D) ) /*0x100331c8b*/
              goto LABEL_79; /*0x100331c8e*/
          }
          else
          {
            if ( v3 < 3 ) /*0x100331c95*/
              goto LABEL_79; /*0x100331c95*/
            if ( !(*(_WORD *)v24 ^ 0x4F43 | (unsigned __int8)v24[2] ^ 0x4D) ) /*0x100331caf*/
            {
              if ( v3 != 4 ) /*0x100331ce4*/
                goto LABEL_79; /*0x100331ce4*/
              goto LABEL_76; /*0x100331ce4*/
            }
          }
          v41 = 0; /*0x100331cc3*/
          if ( v3 != 4 ) /*0x100331ccf*/
            goto LABEL_79; /*0x100331ccf*/
          LOBYTE(v41) = (*(_WORD *)v24 ^ 0x504C | (unsigned __int8)v24[2] ^ 0x54) != 0; /*0x100331cd5*/
          if ( v41 ) /*0x100331cd9*/
            goto LABEL_79; /*0x100331cd9*/
LABEL_76:
          if ( (unsigned __int8)(v24[3] - 49) < 9u ) /*0x100331cf3*/
          {
LABEL_77:
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v18); /*0x100331cf9*/
            v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(50, 1); /*0x100331d08*/
            if ( !v42 ) /*0x100331d10*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 50); /*0x100331da6*/
            qmemcpy(v42, "relay provider id uses a reserved Windows filename", 50); /*0x100331d66*/
            *(_QWORD *)v4 = 50; /*0x100331d6f*/
            *((_QWORD *)v4 + 1) = v42; /*0x100331d76*/
            *((_QWORD *)v4 + 2) = 50; /*0x100331d7a*/
            goto LABEL_80; /*0x100331d82*/
          }
LABEL_79:
          *(_QWORD *)v4 = 0x8000000000000000LL; /*0x100331d84*/
LABEL_80:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v3, 1); /*0x100331d87*/
          return v4; /*0x100331d97*/
        }
      }
      else
      {
        v26 = 0; /*0x100331aec*/
      }
      v35 = v26; /*0x100331b7e*/
      v26 = v3 & 0x7FFFFFFFFFFFFFF8LL; /*0x100331b85*/
      v36 = _mm_load_si128((const __m128i *)&xmmword_1015E3600); /*0x100331b88*/
      v37 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100331b90*/
      v38 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100331b98*/
      do /*0x100331bcf*/
      {
        v39 = _mm_loadl_epi64((const __m128i *)&v24[v35]); /*0x100331ba0*/
        v40 = _mm_add_epi8(v39, v36); /*0x100331baa*/
        *(_QWORD *)&v24[v35] = _mm_xor_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v40, v37), v40), v38), v39).u64[0]; /*0x100331bc2*/
        v35 += 8; /*0x100331bc8*/
      }
      while ( v26 != v35 ); /*0x100331bcf*/
      goto LABEL_62; /*0x100331bcf*/
    }
    goto LABEL_30; /*0x100331881*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003317c4*/
  v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x1003317d3*/
  if ( !v5 ) /*0x1003317db*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35); /*0x100331bdd*/
  qmemcpy(v5, "relay provider id must not be empty", 35); /*0x100331815*/
  *(_QWORD *)a1 = 35; /*0x10033181f*/
  *((_QWORD *)a1 + 1) = v5; /*0x100331826*/
  *((_QWORD *)a1 + 2) = 35; /*0x10033182a*/
  return v4; /*0x1003319cc*/
}