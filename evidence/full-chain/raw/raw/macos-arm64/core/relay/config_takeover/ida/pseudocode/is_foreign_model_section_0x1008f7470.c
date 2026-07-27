// __ZN13codexmate_lib4core5relay15config_takeover24is_foreign_model_section @ 0x1008f7470 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::config_takeover::is_foreign_model_section::h9031f03a25b35ea5(
        const __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __m128i v6; // xmm0
  __int64 v7; // r15
  unsigned __int64 v9; // rbx
  const __m128i *v10; // r14
  unsigned __int8 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned int v15; // r15d
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  unsigned __int8 v19; // r15
  unsigned __int64 v20; // r12
  char v21; // r13
  __int64 v22; // rcx
  char v23; // dl
  unsigned int v24; // r8d
  const void *v25; // rax
  __int64 v26; // rdx
  size_t v27; // rbx
  __int64 v28; // r12
  const void *v29; // r13
  __int64 v30; // rax
  __int64 v31; // r14
  bool v32; // zf
  __m128i v33; // xmm2
  __int64 v34; // [rsp+8h] [rbp-48h]
  __int64 v35; // [rsp+10h] [rbp-40h] BYREF
  __int64 v36; // [rsp+18h] [rbp-38h]
  __int64 v37; // [rsp+20h] [rbp-30h]

  if ( a2 >= 0x10 ) /*0x1008f748b*/
  {
    v6 = _mm_xor_si128(_mm_loadu_si128(a1), (__m128i)xmmword_1015DCC20); /*0x1008f749a*/
    if ( _mm_testz_si128(v6, v6) ) /*0x1008f74a7*/
    {
      v9 = a2 - 16; /*0x1008f74e3*/
      v10 = a1 + 1; /*0x1008f74e7*/
      goto LABEL_10; /*0x1008f74e7*/
    }
  }
  else if ( a2 < 9 ) /*0x1008f7491*/
  {
    goto LABEL_6; /*0x1008f7491*/
  }
  if ( a1->i64[0] ^ 0x73656C69666F7270LL | a1->u8[8] ^ 0x2ELL ) /*0x1008f74bf*/
  {
LABEL_6:
    LODWORD(v7) = 0; /*0x1008f74c4*/
    return (unsigned int)v7; /*0x1008f74c4*/
  }
  v9 = a2 - 9; /*0x1008f74d9*/
  v10 = (const __m128i *)((char *)&a1->u64[1] + 1); /*0x1008f74dd*/
LABEL_10:
  v35 = 0; /*0x1008f74eb*/
  v36 = 1; /*0x1008f74f3*/
  v37 = 0; /*0x1008f74fb*/
  if ( v9 ) /*0x1008f7506*/
  {
    v11 = &v10->u8[v9]; /*0x1008f750c*/
    v12 = 1; /*0x1008f750f*/
    v13 = 0; /*0x1008f7514*/
    v34 = 0; /*0x1008f751a*/
    while ( 1 ) /*0x1008f754b*/
    {
      while ( 1 ) /*0x1008f7544*/
      {
        v15 = v10->u8[0]; /*0x1008f7544*/
        if ( (v15 & 0x80u) != 0 ) /*0x1008f754b*/
          break; /*0x1008f754b*/
        v10 = (const __m128i *)((char *)v10 + 1); /*0x1008f754d*/
        if ( v15 == 34 ) /*0x1008f7554*/
          goto LABEL_12; /*0x1008f7554*/
LABEL_23:
        if ( v15 == 46 ) /*0x1008f75e4*/
        {
          if ( (v34 & 1) == 0 ) /*0x1008f75ea*/
            goto LABEL_44; /*0x1008f75ea*/
        }
        else if ( v15 >= 0x80 ) /*0x1008f7607*/
        {
          if ( v15 >= 0x800 ) /*0x1008f761b*/
            v20 = 4LL - (v15 < 0x10000); /*0x1008f7632*/
          else
            v20 = 2; /*0x1008f761d*/
          v21 = 0; /*0x1008f7636*/
          goto LABEL_32; /*0x1008f7636*/
        }
        v20 = 1; /*0x1008f7609*/
        v21 = 1; /*0x1008f760f*/
LABEL_32:
        v22 = v13; /*0x1008f7639*/
        if ( v20 > v35 - v13 ) /*0x1008f7646*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f7678*/
            &v35,
            v13,
            v20,
            1,
            1,
            a6);
          v12 = v36; /*0x1008f767d*/
          v22 = v37; /*0x1008f7681*/
          if ( v21 ) /*0x1008f7690*/
            goto LABEL_34; /*0x1008f7690*/
LABEL_37:
          v23 = v15 & 0x3F | 0x80; /*0x1008f76a0*/
          a6 = v15 >> 6; /*0x1008f76ac*/
          if ( v15 >= 0x800 ) /*0x1008f76b7*/
          {
            LOBYTE(a6) = a6 & 0x3F | 0x80; /*0x1008f76db*/
            v24 = v15 >> 12; /*0x1008f76e2*/
            if ( v15 > 0xFFFF ) /*0x1008f76ed*/
            {
              *(_BYTE *)(v12 + v22) = (v15 >> 18) | 0xF0; /*0x1008f7722*/
              *(_BYTE *)(v12 + v22 + 1) = v24 & 0x3F | 0x80; /*0x1008f7726*/
              *(_BYTE *)(v12 + v22 + 2) = a6; /*0x1008f772b*/
              *(_BYTE *)(v12 + v22 + 3) = v23; /*0x1008f7730*/
              v13 += v20; /*0x1008f7734*/
              v37 = v13; /*0x1008f7737*/
              if ( v10 == (const __m128i *)v11 ) /*0x1008f773e*/
              {
LABEL_44:
                v7 = v36; /*0x1008f7744*/
                goto LABEL_46; /*0x1008f7748*/
              }
            }
            else
            {
              *(_BYTE *)(v12 + v22) = v24 | 0xE0; /*0x1008f76f3*/
              *(_BYTE *)(v12 + v22 + 1) = a6; /*0x1008f76f7*/
              *(_BYTE *)(v12 + v22 + 2) = v23; /*0x1008f76fc*/
              v13 += v20; /*0x1008f7700*/
              v37 = v13; /*0x1008f7703*/
              if ( v10 == (const __m128i *)v11 ) /*0x1008f770a*/
                goto LABEL_44; /*0x1008f770a*/
            }
          }
          else
          {
            LOBYTE(a6) = a6 | 0xC0; /*0x1008f76b9*/
            *(_BYTE *)(v12 + v22) = a6; /*0x1008f76bd*/
            *(_BYTE *)(v12 + v22 + 1) = v23; /*0x1008f76c1*/
            v13 += v20; /*0x1008f76c5*/
            v37 = v13; /*0x1008f76c8*/
            if ( v10 == (const __m128i *)v11 ) /*0x1008f76cf*/
              goto LABEL_44; /*0x1008f76cf*/
          }
        }
        else
        {
          if ( !v21 ) /*0x1008f764b*/
            goto LABEL_37; /*0x1008f764b*/
LABEL_34:
          *(_BYTE *)(v12 + v22) = v15; /*0x1008f764d*/
          v13 += v20; /*0x1008f7651*/
          v37 = v13; /*0x1008f7654*/
          if ( v10 == (const __m128i *)v11 ) /*0x1008f765b*/
            goto LABEL_44; /*0x1008f765b*/
        }
      }
      v16 = v15 & 0x1F; /*0x1008f7563*/
      v17 = v10->i8[1] & 0x3F; /*0x1008f756b*/
      if ( (unsigned __int8)v15 <= 0xDFu ) /*0x1008f7573*/
      {
        v10 = (const __m128i *)((char *)v10 + 2); /*0x1008f75ae*/
        v15 = v17 | (v16 << 6); /*0x1008f75b8*/
        if ( v15 == 34 ) /*0x1008f75bf*/
          goto LABEL_12; /*0x1008f75bf*/
        goto LABEL_23; /*0x1008f75bf*/
      }
      v18 = (v17 << 6) | v10->i8[2] & 0x3F; /*0x1008f7581*/
      if ( (unsigned __int8)v15 >= 0xF0u ) /*0x1008f7588*/
      {
        v19 = v10->u8[3]; /*0x1008f758a*/
        v10 = (const __m128i *)((char *)v10 + 4); /*0x1008f758f*/
        v15 = ((v16 & 7) << 18) | (v18 << 6) | v19 & 0x3F; /*0x1008f75a3*/
        if ( v15 == 34 ) /*0x1008f75aa*/
          goto LABEL_12; /*0x1008f75aa*/
        goto LABEL_23; /*0x1008f75aa*/
      }
      v10 = (const __m128i *)((char *)v10 + 3); /*0x1008f75c6*/
      v15 = (v16 << 12) | v18; /*0x1008f75cf*/
      if ( v15 != 34 ) /*0x1008f75d6*/
        goto LABEL_23; /*0x1008f75d6*/
LABEL_12:
      v14 = v34; /*0x1008f7530*/
      LOBYTE(v14) = v34 ^ 1; /*0x1008f7534*/
      v34 = v14; /*0x1008f7537*/
      if ( v10 == (const __m128i *)v11 ) /*0x1008f753e*/
        goto LABEL_44; /*0x1008f753e*/
    }
  }
  v7 = 1; /*0x1008f774a*/
  v13 = 0; /*0x1008f7750*/
LABEL_46:
  v25 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v7, v13); /*0x1008f7752*/
  v27 = v26; /*0x1008f775a*/
  if ( v26 < 0 ) /*0x1008f7760*/
  {
    v28 = 0; /*0x1008f7762*/
    goto LABEL_48; /*0x1008f7762*/
  }
  if ( v26 ) /*0x1008f7775*/
  {
    v29 = v25; /*0x1008f7777*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v13); /*0x1008f777a*/
    v28 = 1; /*0x1008f777f*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1); /*0x1008f778d*/
    if ( !v30 ) /*0x1008f7795*/
LABEL_48:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, v27); /*0x1008f7765*/
    v31 = v30; /*0x1008f7797*/
    v25 = v29; /*0x1008f779a*/
  }
  else
  {
    v31 = 1; /*0x1008f779f*/
  }
  memcpy((void *)v31, v25, v27); /*0x1008f77ae*/
  if ( v35 ) /*0x1008f77ba*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v35, 1); /*0x1008f77c4*/
  if ( v27 == 12 ) /*0x1008f77cd*/
  {
    v32 = (anon_3ce6d1417794db0febde534c64082f90_184 ^ *(_QWORD *)v31 | *(_DWORD *)(v31 + 8) ^ 0x79616C65u) == 0; /*0x1008f77e3*/
LABEL_63:
    LOBYTE(v7) = v32; /*0x1008f7858*/
    goto LABEL_64; /*0x1008f7858*/
  }
  if ( v27 <= 0xC /*0x1008f77ff*/
    || *(_QWORD *)v31 ^ anon_3ce6d1417794db0febde534c64082f90_194
     | *(_QWORD *)(v31 + 5) ^ *(__int64 *)((char *)&anon_3ce6d1417794db0febde534c64082f90_194 + 5) )
  {
    if ( v27 == 6 ) /*0x1008f7808*/
    {
      v32 = (anon_3ce6d1417794db0febde534c64082f90_165 ^ *(_DWORD *)v31 | *(_WORD *)(v31 + 4) ^ 0x3169) == 0; /*0x1008f7856*/
      goto LABEL_63; /*0x1008f7856*/
    }
    if ( v27 == 19 ) /*0x1008f780e*/
    {
      v33 = _mm_or_si128( /*0x1008f7833*/
              _mm_xor_si128(
                _mm_loadu_si128((const __m128i *)((char *)&anon_3ce6d1417794db0febde534c64082f90_217 + 3)),
                _mm_loadu_si128((const __m128i *)(v31 + 3))),
              _mm_xor_si128(
                _mm_loadu_si128((const __m128i *)v31),
                _mm_loadu_si128((const __m128i *)&anon_3ce6d1417794db0febde534c64082f90_217)));
      v32 = _mm_testz_si128(v33, v33); /*0x1008f7837*/
      goto LABEL_63; /*0x1008f783c*/
    }
    LODWORD(v7) = 0; /*0x1008f787e*/
  }
  else
  {
    LOBYTE(v7) = 1; /*0x1008f7883*/
  }
LABEL_64:
  LOBYTE(v7) = v7 ^ 1; /*0x1008f785c*/
  if ( v27 ) /*0x1008f7863*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v27, 1); /*0x1008f7874*/
  return (unsigned int)v7; /*0x1008f74ca*/
}