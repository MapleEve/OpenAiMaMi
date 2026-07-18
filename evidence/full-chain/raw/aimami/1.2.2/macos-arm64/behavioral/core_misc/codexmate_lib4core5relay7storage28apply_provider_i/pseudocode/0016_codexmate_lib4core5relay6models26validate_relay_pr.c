// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x100984c60 d=2
size_t *__fastcall codexmate_lib::core::relay::models::validate_relay_provider_id::he4e399639c4c988d(
        size_t *a1,
        char *a2,
        size_t a3)
{
  size_t v3; // r14
  void *v5; // rax
  char *v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  char *v10; // rdi
  unsigned int v11; // r8d
  int v12; // r9d
  int v13; // r11d
  int v14; // r10d
  unsigned __int64 v15; // r9
  void *v16; // rax
  size_t v17; // r14
  const void *v19; // r12
  size_t v20; // r15
  char *v21; // rax
  size_t v22; // rcx
  __int64 v23; // r13
  _BYTE *v24; // rax
  _BYTE *v25; // r15
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

  if ( a3 ) /*0x100984c77*/
  {
    if ( a3 > 0x80 ) /*0x100984c80*/
    {
      v45 = &qword_1015121F8; /*0x100984c8d*/
      v46 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100984c98*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, byte_1016FAD46, (unsigned __int64)&v45); /*0x100984caa*/
      return a1; /*0x100984caf*/
    }
    if ( (_BYTE)a3 == 2 ) /*0x100984d2a*/
    {
      v6 = ".."; /*0x100984d3a*/
    }
    else
    {
      if ( (_DWORD)a3 != 1 ) /*0x100984d2f*/
        goto LABEL_11; /*0x100984d2f*/
      v6 = "..."; /*0x100984d31*/
    }
    v3 = a3; /*0x100984d4a*/
    v7 = memcmp(a2, v6, a3); /*0x100984d4d*/
    a3 = v3; /*0x100984d52*/
    if ( !v7 ) /*0x100984d5a*/
    {
LABEL_30:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100984e72*/
      v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x4Du, 1u); /*0x100984e81*/
      if ( !v16 ) /*0x100984e89*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009850dc*/
      v17 = (size_t)v16; /*0x100984e8f*/
      memcpy(v16, "relay provider id is not a portable filename or contains reserved slug syntax", 0x4Du); /*0x100984ea1*/
      *a1 = 77; /*0x100984ea6*/
      a1[1] = v17; /*0x100984ead*/
      a1[2] = 77; /*0x100984eb1*/
      return a1; /*0x100984eb1*/
    }
LABEL_11:
    v8 = (unsigned __int8)a2[a3 - 1]; /*0x100984d60*/
    if ( v8 != 32 && v8 != 46 ) /*0x100984d71*/
    {
      v9 = 0x400000035002101LL; /*0x100984d7b*/
      v10 = a2; /*0x100984d85*/
      while ( v10 != &a2[a3] ) /*0x100984d9d*/
      {
        v11 = (unsigned __int8)*v10; /*0x100984da3*/
        if ( (v11 & 0x80u) != 0 ) /*0x100984daa*/
        {
          v12 = v11 & 0x1F; /*0x100984dc1*/
          v13 = v10[1] & 0x3F; /*0x100984dca*/
          if ( (unsigned __int8)v11 <= 0xDFu ) /*0x100984dd2*/
          {
            v10 += 2; /*0x100984e1e*/
            v11 = v13 | (v12 << 6); /*0x100984e29*/
            if ( v11 < 0x20 ) /*0x100984e30*/
              goto LABEL_30; /*0x100984e30*/
          }
          else
          {
            v14 = (v13 << 6) | v10[2] & 0x3F; /*0x100984de1*/
            if ( (unsigned __int8)v11 < 0xF0u ) /*0x100984de8*/
            {
              v10 += 3; /*0x100984e34*/
              v11 = (v12 << 12) | v14; /*0x100984e3f*/
              if ( v11 < 0x20 ) /*0x100984e46*/
                goto LABEL_30; /*0x100984e46*/
            }
            else
            {
              v11 = ((v11 & 7) << 18) | (v14 << 6) | v10[3] & 0x3F; /*0x100984e02*/
              if ( v11 == 1114112 ) /*0x100984e0c*/
                break; /*0x100984e0c*/
              v10 += 4; /*0x100984e12*/
              if ( v11 < 0x20 ) /*0x100984e1a*/
                goto LABEL_30; /*0x100984e1a*/
            }
          }
        }
        else
        {
          ++v10; /*0x100984dac*/
          if ( v11 < 0x20 ) /*0x100984db3*/
            goto LABEL_30; /*0x100984db3*/
        }
        if ( v11 - 127 < 0x21 ) /*0x100984e58*/
          goto LABEL_30; /*0x100984e58*/
        v15 = v11 - 34; /*0x100984e5a*/
        if ( (unsigned int)v15 <= 0x3A ) /*0x100984e62*/
        {
          if ( _bittest64(&v9, v15) ) /*0x100984e68*/
            goto LABEL_30; /*0x100984e68*/
        }
        if ( v11 == 124 ) /*0x100984d94*/
          goto LABEL_30; /*0x100984d94*/
      }
      v45 = nullptr; /*0x100984ecb*/
      v46 = (__int64 (__fastcall *)())a3; /*0x100984ed3*/
      v19 = a2; /*0x100984edb*/
      v47[0] = a2; /*0x100984ede*/
      v47[1] = a3; /*0x100984ee2*/
      v47[2] = 0; /*0x100984ee6*/
      v20 = a3; /*0x100984eee*/
      v47[3] = a3; /*0x100984ef1*/
      v47[4] = 0x2E0000002ELL; /*0x100984eff*/
      v48 = 1; /*0x100984f03*/
      v49 = 1; /*0x100984f07*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100984f17*/
        &v43,
        v47);
      if ( v43 == 1 ) /*0x100984f23*/
      {
        v3 = v44 - (_QWORD)v45; /*0x100984f2d*/
        v21 = (char *)v45 + (_QWORD)a2; /*0x100984f30*/
        v22 = v20; /*0x100984f33*/
      }
      else
      {
        v22 = v20; /*0x100984f3c*/
        if ( HIBYTE(v49) || (v3 = (char *)v46 - (char *)v45, ((unsigned __int8)v49 | ((char *)v46 != (char *)v45)) != 1) ) /*0x100984f55*/
          v21 = nullptr; /*0x100984f5d*/
        else
          v21 = (char *)v45 + v47[0]; /*0x100984f57*/
      }
      if ( v21 ) /*0x100984f62*/
        v19 = v21; /*0x100984f66*/
      else
        v3 = v22; /*0x100984f62*/
      if ( (v3 & 0x8000000000000000LL) != 0LL ) /*0x100984f6d*/
      {
        v23 = 0; /*0x100984f6f*/
        goto LABEL_44; /*0x100984f6f*/
      }
      if ( !v3 ) /*0x100984f7d*/
      {
        *a1 = 0x8000000000000000LL; /*0x100984fce*/
        return a1; /*0x100984fd1*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100984f7f*/
      v23 = 1; /*0x100984f84*/
      v24 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1u); /*0x100984f92*/
      if ( !v24 ) /*0x100984f9a*/
LABEL_44:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23); /*0x100984f72*/
      v25 = v24; /*0x100984f9c*/
      memcpy(v24, v19, v3); /*0x100984fb2*/
      if ( v3 < 8 ) /*0x100984fbb*/
      {
        v26 = 0; /*0x100984fbd*/
        goto LABEL_61; /*0x100984fbf*/
      }
      if ( v3 >= 0x20 ) /*0x100984fda*/
      {
        v26 = v3 & 0x7FFFFFFFFFFFFFE0LL; /*0x100984fe7*/
        v27 = 0; /*0x100984fea*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_10159B4C0); /*0x100984fec*/
        v29 = _mm_load_si128((const __m128i *)&xmmword_101513720); /*0x100984ff4*/
        v30 = _mm_load_si128((const __m128i *)&xmmword_101513730); /*0x100984ffc*/
        do /*0x10098505d*/
        {
          v31 = _mm_loadu_si128((const __m128i *)&v25[v27]); /*0x100985004*/
          v32 = _mm_loadu_si128((const __m128i *)&v25[v27 + 16]); /*0x10098500a*/
          v33 = _mm_add_epi8(v31, si128); /*0x100985015*/
          v34 = _mm_add_epi8(v32, si128); /*0x10098501d*/
          *(__m128i *)&v25[v27] = _mm_xor_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v33, v29), v33), v30), v31); /*0x100985049*/
          *(__m128i *)&v25[v27 + 16] = _mm_xor_si128( /*0x10098504f*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v34, v29), v34), v30),
                                         v32);
          v27 += 32; /*0x100985056*/
        }
        while ( v26 != v27 ); /*0x10098505d*/
        if ( v3 == v26 ) /*0x100985062*/
          goto LABEL_63; /*0x100985062*/
        if ( (v3 & 0x18) == 0 ) /*0x10098506c*/
        {
          do /*0x1009850fe*/
          {
LABEL_61:
            v25[v26] ^= 32 * ((unsigned __int8)(v25[v26] - 97) < 0x1Au); /*0x1009850e1*/
            ++v26; /*0x1009850f8*/
LABEL_62:
            ; /*0x1009850fb*/
          }
          while ( v3 != v26 ); /*0x1009850fe*/
LABEL_63:
          if ( v3 == 3 ) /*0x100985104*/
          {
            if ( !(*(_WORD *)v25 ^ 0x4F43 | (unsigned __int8)v25[2] ^ 0x4E) /*0x100985165*/
              || !(*(_WORD *)v25 ^ 0x5250 | (unsigned __int8)v25[2] ^ 0x4E)
              || !(*(_WORD *)v25 ^ 0x5541 | (unsigned __int8)v25[2] ^ 0x58)
              || !(*(_WORD *)v25 ^ 0x554E | (unsigned __int8)v25[2] ^ 0x4C) )
            {
              goto LABEL_77; /*0x100985168*/
            }
            if ( !(*(_WORD *)v25 ^ 0x4F43 | (unsigned __int8)v25[2] ^ 0x4D) ) /*0x10098517b*/
              goto LABEL_79; /*0x10098517e*/
          }
          else
          {
            if ( v3 < 3 ) /*0x100985185*/
              goto LABEL_79; /*0x100985185*/
            if ( !(*(_WORD *)v25 ^ 0x4F43 | (unsigned __int8)v25[2] ^ 0x4D) ) /*0x10098519f*/
            {
              if ( v3 != 4 ) /*0x1009851d4*/
                goto LABEL_79; /*0x1009851d4*/
              goto LABEL_76; /*0x1009851d4*/
            }
          }
          v41 = 0; /*0x1009851b3*/
          if ( v3 != 4 ) /*0x1009851bf*/
            goto LABEL_79; /*0x1009851bf*/
          LOBYTE(v41) = (*(_WORD *)v25 ^ 0x504C | (unsigned __int8)v25[2] ^ 0x54) != 0; /*0x1009851c5*/
          if ( v41 ) /*0x1009851c9*/
            goto LABEL_79; /*0x1009851c9*/
LABEL_76:
          if ( (unsigned __int8)(v25[3] - 49) < 9u ) /*0x1009851e3*/
          {
LABEL_77:
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009851e9*/
            v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x32u, 1u); /*0x1009851f8*/
            if ( !v42 ) /*0x100985200*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100985296*/
            qmemcpy(v42, "relay provider id uses a reserved Windows filename", 50); /*0x100985256*/
            *a1 = 50; /*0x10098525f*/
            a1[1] = (size_t)v42; /*0x100985266*/
            a1[2] = 50; /*0x10098526a*/
            goto LABEL_80; /*0x100985272*/
          }
LABEL_79:
          *a1 = 0x8000000000000000LL; /*0x100985274*/
LABEL_80:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100985277*/
          return a1; /*0x100985287*/
        }
      }
      else
      {
        v26 = 0; /*0x100984fdc*/
      }
      v35 = v26; /*0x10098506e*/
      v26 = v3 & 0x7FFFFFFFFFFFFFF8LL; /*0x100985075*/
      v36 = _mm_load_si128((const __m128i *)&xmmword_10159B4D0); /*0x100985078*/
      v37 = _mm_load_si128((const __m128i *)&xmmword_101513750); /*0x100985080*/
      v38 = _mm_load_si128((const __m128i *)&xmmword_101513760); /*0x100985088*/
      do /*0x1009850bf*/
      {
        v39 = _mm_loadl_epi64((const __m128i *)&v25[v35]); /*0x100985090*/
        v40 = _mm_add_epi8(v39, v36); /*0x10098509a*/
        *(_QWORD *)&v25[v35] = _mm_xor_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v40, v37), v40), v38), v39).u64[0]; /*0x1009850b2*/
        v35 += 8; /*0x1009850b8*/
      }
      while ( v26 != v35 ); /*0x1009850bf*/
      goto LABEL_62; /*0x1009850bf*/
    }
    goto LABEL_30; /*0x100984d71*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100984cb4*/
  v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x23u, 1u); /*0x100984cc3*/
  if ( !v5 ) /*0x100984ccb*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009850cd*/
  qmemcpy(v5, "relay provider id must not be empty", 35); /*0x100984d05*/
  *a1 = 35; /*0x100984d0f*/
  a1[1] = (size_t)v5; /*0x100984d16*/
  a1[2] = 35; /*0x100984d1a*/
  return a1; /*0x100984ebc*/
}