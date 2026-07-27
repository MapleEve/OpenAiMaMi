// __ZN13codexmate_lib4core5relay8dialects19reasoning_requested @ 0x100915310 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::dialects::reasoning_requested::hf4adde044cda7661(__int64 a1)
{
  const void *v1; // r15
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  size_t v7; // rbx
  __int64 v8; // r12
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i si128; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  __m128i v20; // xmm6
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm4

  v2 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, "/reasoning/effort", 17); /*0x10091532a*/
  if ( v2 && *(_BYTE *)v2 == 3 ) /*0x100915337*/
  {
    v3 = *(_QWORD *)(v2 + 16); /*0x100915339*/
    v4 = *(_QWORD *)(v2 + 24); /*0x10091533d*/
    v5 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v3, v4); /*0x100915341*/
    v7 = v6; /*0x100915346*/
    if ( v6 < 0 ) /*0x10091534c*/
    {
      v8 = 0; /*0x10091534e*/
      goto LABEL_5; /*0x10091534e*/
    }
    if ( v6 ) /*0x100915389*/
    {
      v1 = (const void *)v5; /*0x10091538b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, v4); /*0x10091538e*/
      v8 = 1; /*0x100915393*/
      v10 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009153a1*/
      if ( !v10 ) /*0x1009153a9*/
LABEL_5:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x100915351*/
      v11 = v10; /*0x1009153ab*/
      memcpy(v10, v1, v7); /*0x1009153b7*/
      if ( v7 < 8 ) /*0x1009153c0*/
      {
        v12 = 0; /*0x1009153c2*/
        goto LABEL_23; /*0x1009153c4*/
      }
      if ( v7 >= 0x20 ) /*0x1009153ef*/
      {
        v12 = v7 & 0x7FFFFFFFFFFFFFE0LL; /*0x1009153fb*/
        v13 = 0; /*0x1009153fe*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100915400*/
        v15 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100915408*/
        v16 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100915410*/
        do /*0x100915479*/
        {
          v17 = _mm_loadu_si128((const __m128i *)&v11[v13]); /*0x100915420*/
          v18 = _mm_loadu_si128((const __m128i *)&v11[v13 + 16]); /*0x100915426*/
          v19 = _mm_add_epi8(v17, si128); /*0x100915431*/
          v20 = _mm_add_epi8(v18, si128); /*0x100915439*/
          *(__m128i *)&v11[v13] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v15), v19), v16), v17); /*0x100915465*/
          *(__m128i *)&v11[v13 + 16] = _mm_or_si128( /*0x10091546b*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v15), v20), v16),
                                         v18);
          v13 += 32; /*0x100915472*/
        }
        while ( v12 != v13 ); /*0x100915479*/
        if ( v7 == v12 ) /*0x10091547e*/
          goto LABEL_25; /*0x10091547e*/
        if ( (v7 & 0x18) == 0 ) /*0x100915487*/
        {
          do /*0x100915500*/
          {
LABEL_23:
            v11[v12] |= 32 * ((unsigned __int8)(v11[v12] - 65) < 0x1Au); /*0x1009154e3*/
            ++v12; /*0x1009154fa*/
LABEL_24:
            ; /*0x1009154fd*/
          }
          while ( v7 != v12 ); /*0x100915500*/
LABEL_25:
          LOBYTE(v1) = 1; /*0x100915502*/
          if ( v7 == 3 ) /*0x100915509*/
          {
            if ( !(*(_WORD *)v11 ^ 0x666F | (unsigned __int8)v11[2] ^ 0x66) ) /*0x100915546*/
LABEL_32:
              LODWORD(v1) = 0; /*0x10091554b*/
          }
          else
          {
            if ( v7 != 8 ) /*0x10091550f*/
            {
              if ( v7 != 4 || *(_DWORD *)v11 != 1701736302 ) /*0x10091551e*/
                goto LABEL_33; /*0x10091551e*/
              goto LABEL_32; /*0x10091551e*/
            }
            LOBYTE(v1) = *(_QWORD *)v11 != 0x64656C6261736964LL; /*0x10091552f*/
          }
LABEL_33:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v7, 1); /*0x10091554e*/
          return (unsigned int)v1; /*0x100915559*/
        }
      }
      else
      {
        v12 = 0; /*0x1009153f1*/
      }
      v21 = v12; /*0x100915489*/
      v12 = v7 & 0x7FFFFFFFFFFFFFF8LL; /*0x100915493*/
      v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100915496*/
      v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10091549e*/
      v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x1009154a6*/
      do /*0x1009154df*/
      {
        v25 = _mm_loadl_epi64((const __m128i *)&v11[v21]); /*0x1009154b0*/
        v26 = _mm_add_epi8(v25, v22); /*0x1009154ba*/
        *(_QWORD *)&v11[v21] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v26, v23), v26), v24), v25).u64[0]; /*0x1009154d2*/
        v21 += 8; /*0x1009154d8*/
      }
      while ( v12 != v21 ); /*0x1009154df*/
      goto LABEL_24; /*0x1009154df*/
    }
    LOBYTE(v1) = 1; /*0x1009153d9*/
  }
  else
  {
    v9 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10091536b*/
                    "reasoningenabledreasoning_split",
                    9,
                    a1);
    if ( v9 ) /*0x100915373*/
      LOBYTE(v1) = *v9 != 0; /*0x100915378*/
    else
      LOBYTE(v1) = 2; /*0x100915381*/
  }
  return (unsigned int)v1; /*0x100915561*/
}