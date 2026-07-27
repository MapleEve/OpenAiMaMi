// __ZN13codexmate_lib4core16account_metadata7bool_at @ 0x10024f980
__int64 __fastcall codexmate_lib::core::account_metadata::bool_at::hfd041bb751a2046b(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r12
  const void *v4; // r15
  _QWORD *v5; // r14
  __int64 v6; // r13
  _QWORD *v7; // rbx
  bool v8; // zf
  char v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  size_t v15; // r13
  void *v16; // rax
  __int64 v17; // rax
  __m128i si128; // xmm5
  __m128i v19; // xmm6
  __m128i v20; // xmm7
  __m128i v21; // xmm8
  __m128i v22; // xmm3
  __m128i v23; // xmm4
  __int64 v24; // rcx
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __int64 v29; // rcx
  __m128i v30; // xmm0
  __m128i v31; // xmm1

  v5 = a2; /*0x10024f991*/
  v6 = a1; /*0x10024f994*/
  v7 = &a2[2 * a3]; /*0x10024f99b*/
  while ( 1 ) /*0x10024f9fa*/
  {
    v10 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v6, *v5, v5[1]); /*0x10024f9fa*/
    if ( !v10 ) /*0x10024fa02*/
      goto LABEL_15; /*0x10024fa02*/
    if ( *(_BYTE *)v10 == 1 ) /*0x10024fa0e*/
      break; /*0x10024fa0e*/
    if ( *(_BYTE *)v10 == 3 ) /*0x10024fa17*/
    {
      v11 = *(_QWORD *)(v10 + 16); /*0x10024fa1d*/
      v12 = *(_QWORD *)(v10 + 24); /*0x10024fa21*/
      v13 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v11, v12); /*0x10024fa25*/
      if ( v14 < 0 ) /*0x10024fa2d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0, v3); /*0x10024fc4b*/
      v15 = v14; /*0x10024fa33*/
      if ( v14 ) /*0x10024fa36*/
      {
        v4 = (const void *)v13; /*0x10024fa38*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12); /*0x10024fa3b*/
        v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x10024fa48*/
        if ( !v16 ) /*0x10024fa50*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v15); /*0x10024fc7a*/
        v3 = (__int64)v16; /*0x10024fa56*/
        memcpy(v16, v4, v15); /*0x10024fa62*/
        if ( v15 < 8 ) /*0x10024fa6b*/
        {
          v17 = 0; /*0x10024fa6d*/
          goto LABEL_26; /*0x10024fa6f*/
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10024fab6*/
        v19 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10024fabe*/
        v20 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x10024fac6*/
        v21 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10024face*/
        if ( v15 < 0x20 ) /*0x10024fad7*/
        {
          v17 = 0; /*0x10024fad9*/
          v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10024fadb*/
          v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10024fae3*/
LABEL_23:
          v29 = v17; /*0x10024fb88*/
          v17 = v15 & 0x7FFFFFFFFFFFFFF8LL; /*0x10024fb99*/
          do /*0x10024fbcf*/
          {
            v30 = _mm_loadl_epi64((const __m128i *)(v3 + v29)); /*0x10024fba0*/
            v31 = _mm_add_epi8(v30, v22); /*0x10024fbaa*/
            *(_QWORD *)(v3 + v29) = _mm_or_si128( /*0x10024fbc2*/
                                      _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v31, v23), v31), si128),
                                      v30).u64[0];
            v29 += 8; /*0x10024fbc8*/
          }
          while ( v17 != v29 ); /*0x10024fbcf*/
          goto LABEL_27; /*0x10024fbcf*/
        }
        v17 = v15 & 0x7FFFFFFFFFFFFFE0LL; /*0x10024fafd*/
        v24 = 0; /*0x10024fb00*/
        do /*0x10024fb6b*/
        {
          v25 = _mm_loadu_si128((const __m128i *)(v3 + v24)); /*0x10024fb10*/
          v26 = _mm_loadu_si128((const __m128i *)(v3 + v24 + 16)); /*0x10024fb16*/
          v27 = _mm_add_epi8(v25, v19); /*0x10024fb21*/
          v28 = _mm_add_epi8(v26, v19); /*0x10024fb29*/
          *(__m128i *)(v3 + v24) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v27, v20), v27), v21), v25); /*0x10024fb57*/
          *(__m128i *)(v3 + v24 + 16) = _mm_or_si128( /*0x10024fb5d*/
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v28, v20), v28), v21),
                                          v26);
          v24 += 32; /*0x10024fb64*/
        }
        while ( v17 != v24 ); /*0x10024fb6b*/
        v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10024fb70*/
        v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10024fb78*/
        if ( v15 != v17 ) /*0x10024fb80*/
        {
          if ( (v15 & 0x18) != 0 ) /*0x10024fb86*/
            goto LABEL_23; /*0x10024fb86*/
          do /*0x10024fbfd*/
          {
LABEL_26:
            *(_BYTE *)(v3 + v17) |= 32 * ((unsigned __int8)(*(_BYTE *)(v3 + v17) - 65) < 0x1Au); /*0x10024fbe0*/
            ++v17; /*0x10024fbf7*/
LABEL_27:
            ; /*0x10024fbfa*/
          }
          while ( v15 != v17 ); /*0x10024fbfd*/
        }
        if ( v15 == 1 ) /*0x10024fc03*/
        {
          v9 = 1; /*0x10024fc34*/
          if ( *(_BYTE *)v3 == 49 ) /*0x10024fc39*/
            goto LABEL_4; /*0x10024fc39*/
          v8 = *(_BYTE *)v3 == 48; /*0x10024fc3f*/
        }
        else
        {
          if ( v15 != 5 ) /*0x10024fc09*/
          {
            v9 = 2; /*0x10024fc0f*/
            if ( v15 == 4 ) /*0x10024fc16*/
              v9 = 2 - (*(_DWORD *)v3 == 1702195828); /*0x10024fc27*/
LABEL_4:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v15, 1); /*0x10024f9c1*/
            v6 = a1; /*0x10024f9d5*/
            if ( v9 != 2 ) /*0x10024f9d9*/
            {
              LOBYTE(v4) = v9 & 1; /*0x10024fc6c*/
              return (unsigned int)v4; /*0x10024fc70*/
            }
            goto LABEL_15; /*0x10024f9d9*/
          }
          v8 = (*(_DWORD *)v3 ^ 0x736C6166 | *(unsigned __int8 *)(v3 + 4) ^ 0x65) == 0; /*0x10024f9b8*/
        }
        v9 = 2 * !v8; /*0x10024f9be*/
        goto LABEL_4; /*0x10024f9be*/
      }
      v3 = 1; /*0x10024fa74*/
      v6 = a1; /*0x10024fa91*/
    }
LABEL_15:
    v5 += 2; /*0x10024faa0*/
    if ( v5 == v7 ) /*0x10024faa7*/
    {
      LOBYTE(v4) = 2; /*0x10024fc50*/
      return (unsigned int)v4; /*0x10024fc53*/
    }
  }
  LODWORD(v4) = *(unsigned __int8 *)(v10 + 1); /*0x10024fc55*/
  return (unsigned int)v4; /*0x10024fc61*/
}