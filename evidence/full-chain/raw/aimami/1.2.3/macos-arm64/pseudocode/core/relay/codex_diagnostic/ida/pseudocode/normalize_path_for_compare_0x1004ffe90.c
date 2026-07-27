// __ZN13codexmate_lib4core5relay16codex_diagnostic26normalize_path_for_compare @ 0x1004ffe90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::normalize_path_for_compare::h8f27ab8ddab37fc8(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __m128i si128; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  __int64 v15; // rsi
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  char v19; // si
  unsigned __int64 v20; // r12
  __int64 v21; // rsi
  signed __int64 v22; // r13
  unsigned __int64 v23; // r15
  int v24; // eax
  char v25; // cl
  char v26; // dl
  char v27; // si
  unsigned __int64 v28; // r15
  int v29; // edx
  int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 result; // rax
  __int64 v34; // rax
  _QWORD v35[3]; // [rsp+8h] [rbp-48h] BYREF
  signed __int64 *v36; // [rsp+20h] [rbp-30h]

  v3 = a3; /*0x1004ffea1*/
  if ( a3 < 0 ) /*0x1004ffea7*/
  {
    v4 = 0; /*0x1004ffea9*/
    goto LABEL_3; /*0x1004ffea9*/
  }
  v36 = a1; /*0x1004ffeb7*/
  if ( !a3 ) /*0x1004ffebb*/
  {
    v7 = 1; /*0x1004ffef0*/
    goto LABEL_21; /*0x1004ffef5*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004ffec0*/
  v4 = 1; /*0x1004ffec5*/
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1); /*0x1004ffed3*/
  if ( !v6 ) /*0x1004ffedb*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v3); /*0x1004ffeac*/
  v7 = v6; /*0x1004ffedd*/
  if ( v3 <= 7 ) /*0x1004ffee4*/
  {
    v8 = 0; /*0x1004ffee6*/
    v9 = a2; /*0x1004ffee8*/
    goto LABEL_18; /*0x1004ffeeb*/
  }
  v9 = a2; /*0x1004fff08*/
  if ( v3 >= 0x20 ) /*0x1004fff0b*/
  {
    v8 = v3 & 0x7FFFFFFFFFFFFFE0LL; /*0x1004fff14*/
    v10 = 0; /*0x1004fff17*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1015E36B0); /*0x1004fff19*/
    v12 = _mm_load_si128((const __m128i *)&xmmword_1015E36C0); /*0x1004fff21*/
    do /*0x1004fff6b*/
    {
      v13 = _mm_loadu_si128((const __m128i *)(a2 + v10)); /*0x1004fff30*/
      v14 = _mm_loadu_si128((const __m128i *)(a2 + v10 + 16)); /*0x1004fff35*/
      *(__m128i *)(v7 + v10) = _mm_blendv_epi8(v13, v12, _mm_cmpeq_epi8(v13, si128)); /*0x1004fff59*/
      *(__m128i *)(v7 + v10 + 16) = _mm_blendv_epi8(v14, v12, _mm_cmpeq_epi8(v14, si128)); /*0x1004fff5e*/
      v10 += 32; /*0x1004fff64*/
    }
    while ( v8 != v10 ); /*0x1004fff6b*/
    if ( v3 == v8 ) /*0x1004fff70*/
      goto LABEL_21; /*0x1004fff70*/
    if ( (v3 & 0x18) == 0 ) /*0x1004fff76*/
      goto LABEL_18; /*0x1004fff76*/
  }
  else
  {
    v8 = 0; /*0x1004fff0d*/
  }
  v15 = v8; /*0x1004fff78*/
  v8 = v3 & 0x7FFFFFFFFFFFFFF8LL; /*0x1004fff82*/
  v16 = _mm_load_si128((const __m128i *)&xmmword_1015E36D0); /*0x1004fff85*/
  v17 = _mm_load_si128((const __m128i *)&xmmword_1015E36E0); /*0x1004fff8d*/
  do /*0x1004fffbe*/
  {
    v18 = _mm_loadl_epi64((const __m128i *)(a2 + v15)); /*0x1004fffa0*/
    *(_QWORD *)(v7 + v15) = _mm_blendv_epi8(v18, v17, _mm_cmpeq_epi8(v18, v16)).u64[0]; /*0x1004fffb2*/
    v15 += 8; /*0x1004fffb7*/
  }
  while ( v8 != v15 ); /*0x1004fffbe*/
  for ( ; v3 != v8; *(_BYTE *)(v7 + v8++) = v19 ) /*0x1004fffc3*/
  {
LABEL_18:
    v19 = *(_BYTE *)(v9 + v8); /*0x1004fffd0*/
    if ( v19 == 92 ) /*0x1004fffd8*/
      v19 = 47; /*0x1004fffd8*/
  }
LABEL_21:
  v20 = v3; /*0x1004fffe7*/
  while ( 1 ) /*0x10050000c*/
  {
    v21 = 2; /*0x10050000c*/
    if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10050001a*/
                             &unk_1015FDBD0,
                             2u,
                             (void *)v7) )
      break; /*0x10050001a*/
    alloc::str::_$LT$impl$u20$str$GT$::replace::h0711137c3db96933(v35, v7, v3, &unk_1015FDBD0, &unk_1015FDBCF); /*0x100500036*/
    if ( v20 ) /*0x10050003e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v20, 1); /*0x10050004b*/
    v20 = v35[0]; /*0x100500000*/
    v7 = v35[1]; /*0x100500004*/
    v3 = v35[2]; /*0x100500008*/
  }
  do /*0x1005000cf*/
  {
    while ( 1 ) /*0x10050006b*/
    {
      if ( !v3 ) /*0x10050006e*/
      {
        v32 = 1; /*0x1005000e2*/
        v22 = 0; /*0x1005000e8*/
        goto LABEL_40; /*0x1005000e8*/
      }
      v22 = v3; /*0x100500070*/
      v23 = v7 + v3; /*0x100500073*/
      v24 = *(char *)(v23 - 1); /*0x100500076*/
      if ( v24 < 0 ) /*0x10050007d*/
        break; /*0x10050007d*/
      v3 = v23 - 1 - v7; /*0x100500063*/
      if ( v24 != 47 ) /*0x100500069*/
        goto LABEL_36; /*0x100500069*/
    }
    v25 = *(_BYTE *)(v23 - 2); /*0x10050007f*/
    if ( v25 >= -64 ) /*0x100500087*/
    {
      v28 = v23 - 2; /*0x1005000a9*/
      v30 = v25 & 0x1F; /*0x1005000ad*/
    }
    else
    {
      v26 = *(_BYTE *)(v23 - 3); /*0x100500089*/
      if ( v26 >= -64 ) /*0x100500091*/
      {
        v28 = v23 - 3; /*0x1005000b2*/
        v29 = v26 & 0xF; /*0x1005000b6*/
      }
      else
      {
        v27 = *(_BYTE *)(v23 - 4); /*0x100500093*/
        v28 = v23 - 4; /*0x100500098*/
        v21 = (unsigned __int8)(v27 & 7) << 6; /*0x10050009f*/
        v29 = v21 | v26 & 0x3F; /*0x1005000a5*/
      }
      v30 = (v29 << 6) | v25 & 0x3F; /*0x1005000bf*/
    }
    v3 = v28 - v7; /*0x1005000c9*/
  }
  while ( ((v30 << 6) | v24 & 0x3F) == 0x2F ); /*0x1005000cf*/
LABEL_36:
  if ( v22 < 0 ) /*0x1005000d4*/
  {
    v31 = 0; /*0x1005000d6*/
    goto LABEL_38; /*0x1005000d6*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_1015FDBD0, v21); /*0x10050013a*/
  v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1); /*0x100500147*/
  v31 = 1; /*0x10050014c*/
  if ( !v34 ) /*0x100500154*/
LABEL_38:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v22); /*0x1005000d8*/
  v32 = v34; /*0x100500156*/
LABEL_40:
  memcpy((void *)v32, (const void *)v7, v22); /*0x1005000eb*/
  result = (__int64)v36; /*0x1005000f9*/
  *v36 = v22; /*0x1005000fd*/
  *(_QWORD *)(result + 8) = v32; /*0x100500100*/
  *(_QWORD *)(result + 16) = v22; /*0x100500104*/
  if ( v20 ) /*0x10050010b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v20, 1); /*0x100500126*/
  return result; /*0x100500118*/
}