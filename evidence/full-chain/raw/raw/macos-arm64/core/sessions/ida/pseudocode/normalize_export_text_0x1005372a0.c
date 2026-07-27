// __ZN13codexmate_lib4core8sessions21normalize_export_text @ 0x1005372a0 | 基线 same-set
size_t *__fastcall codexmate_lib::core::sessions::normalize_export_text::habb588d1fecee409(
        size_t *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __int64 v14; // rdx
  __m128i si128; // xmm1
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  char v20; // di
  char v21; // dl
  char v22; // dl
  char v23; // dl
  char v24; // dl
  void *v25; // rax
  __int64 v26; // rdx
  size_t v27; // r13
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r15
  size_t *v31; // rax
  _QWORD v33[2]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+10h] [rbp-40h]
  void *__src; // [rsp+18h] [rbp-38h]
  size_t *v36; // [rsp+20h] [rbp-30h]

  alloc::str::_$LT$impl$u20$str$GT$::replace::h0711137c3db96933( /*0x1005372c6*/
    v33,
    a2,
    a3,
    "\r\n/payload/role",
    &anon_92869709a5e99ce1936aa4e326b6c562_1024);
  v3 = v33[1]; /*0x1005372cb*/
  v4 = v34; /*0x1005372cf*/
  if ( v34 < 0 ) /*0x1005372d6*/
  {
    v5 = 0; /*0x1005372d8*/
    goto LABEL_3; /*0x1005372d8*/
  }
  v36 = a1; /*0x1005372eb*/
  if ( !v34 ) /*0x1005372ef*/
  {
    v7 = 1; /*0x100537330*/
    goto LABEL_33; /*0x100537336*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, a2); /*0x1005372f1*/
  v5 = 1; /*0x1005372f6*/
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x100537304*/
  if ( !v6 ) /*0x10053730c*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x1005372db*/
  v7 = v6; /*0x10053730e*/
  if ( (unsigned __int64)(v6 - v3) < 0x20 || v4 < 8 ) /*0x100537315*/
  {
    v8 = 0; /*0x100537329*/
    goto LABEL_18; /*0x10053732b*/
  }
  if ( v4 < 0x20 ) /*0x100537349*/
  {
    v8 = 0; /*0x10053734b*/
LABEL_15:
    v14 = v8; /*0x1005373be*/
    v8 = v4 & 0x7FFFFFFFFFFFFFF8LL; /*0x1005373c8*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBE60); /*0x1005373cb*/
    v16 = _mm_load_si128((const __m128i *)&xmmword_1015FBE70); /*0x1005373d3*/
    do /*0x1005373ff*/
    {
      v17 = _mm_loadl_epi64((const __m128i *)(v3 + v14)); /*0x1005373e0*/
      *(_QWORD *)(v7 + v14) = _mm_blendv_epi8(v17, v16, _mm_cmpeq_epi8(v17, si128)).u64[0]; /*0x1005373f2*/
      v14 += 8; /*0x1005373f8*/
    }
    while ( v8 != v14 ); /*0x1005373ff*/
    if ( v4 == v8 ) /*0x100537404*/
      goto LABEL_33; /*0x100537404*/
    goto LABEL_18; /*0x100537404*/
  }
  v8 = v4 & 0x7FFFFFFFFFFFFFE0LL; /*0x100537352*/
  v9 = 0; /*0x100537355*/
  v10 = _mm_load_si128((const __m128i *)&xmmword_1015FBE40); /*0x100537357*/
  v11 = _mm_load_si128((const __m128i *)&xmmword_1015FBE50); /*0x10053735f*/
  do /*0x1005373ad*/
  {
    v12 = _mm_loadu_si128((const __m128i *)(v3 + v9)); /*0x100537370*/
    v13 = _mm_loadu_si128((const __m128i *)(v3 + v9 + 16)); /*0x100537375*/
    *(__m128i *)(v7 + v9) = _mm_blendv_epi8(v12, v11, _mm_cmpeq_epi8(v12, v10)); /*0x100537399*/
    *(__m128i *)(v7 + v9 + 16) = _mm_blendv_epi8(v13, v11, _mm_cmpeq_epi8(v13, v10)); /*0x10053739f*/
    v9 += 32; /*0x1005373a6*/
  }
  while ( v8 != v9 ); /*0x1005373ad*/
  if ( v4 == v8 ) /*0x1005373b2*/
    goto LABEL_33; /*0x1005373b2*/
  if ( (v4 & 0x18) != 0 ) /*0x1005373bc*/
    goto LABEL_15; /*0x1005373bc*/
LABEL_18:
  v18 = v8; /*0x10053740a*/
  v19 = v4 & 3; /*0x100537410*/
  if ( (v4 & 3) != 0 ) /*0x100537414*/
  {
    v18 = v8; /*0x10053741b*/
    do /*0x100537435*/
    {
      v20 = *(_BYTE *)(v3 + v18); /*0x100537420*/
      if ( v20 == 13 ) /*0x100537428*/
        v20 = 10; /*0x100537428*/
      *(_BYTE *)(v7 + v18++) = v20; /*0x10053742b*/
      --v19; /*0x100537432*/
    }
    while ( v19 ); /*0x100537435*/
  }
  if ( v8 - v4 <= 0xFFFFFFFFFFFFFFFCLL ) /*0x10053743e*/
  {
    do /*0x100537495*/
    {
      v21 = *(_BYTE *)(v3 + v18); /*0x100537450*/
      if ( v21 == 13 ) /*0x100537457*/
        v21 = 10; /*0x100537457*/
      *(_BYTE *)(v7 + v18) = v21; /*0x10053745a*/
      v22 = *(_BYTE *)(v3 + v18 + 1); /*0x10053745e*/
      if ( v22 == 13 ) /*0x100537466*/
        v22 = 10; /*0x100537466*/
      *(_BYTE *)(v7 + v18 + 1) = v22; /*0x100537469*/
      v23 = *(_BYTE *)(v3 + v18 + 2); /*0x10053746e*/
      if ( v23 == 13 ) /*0x100537476*/
        v23 = 10; /*0x100537476*/
      *(_BYTE *)(v7 + v18 + 2) = v23; /*0x100537479*/
      v24 = *(_BYTE *)(v3 + v18 + 3); /*0x10053747e*/
      if ( v24 == 13 ) /*0x100537486*/
        v24 = 10; /*0x100537486*/
      *(_BYTE *)(v7 + v18 + 3) = v24; /*0x100537489*/
      v18 += 4; /*0x10053748e*/
    }
    while ( v4 != v18 ); /*0x100537495*/
  }
LABEL_33:
  v25 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v7, v4); /*0x100537497*/
  v27 = v26; /*0x1005374a2*/
  if ( v26 < 0 ) /*0x1005374a8*/
  {
    v28 = 0; /*0x1005374aa*/
    goto LABEL_35; /*0x1005374aa*/
  }
  if ( v26 ) /*0x1005374b9*/
  {
    __src = v25; /*0x1005374bb*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v4); /*0x1005374bf*/
    v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1); /*0x1005374cc*/
    v28 = 1; /*0x1005374d1*/
    if ( !v29 ) /*0x1005374d9*/
LABEL_35:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, v27); /*0x1005374ac*/
    v30 = v29; /*0x1005374db*/
    v25 = __src; /*0x1005374de*/
  }
  else
  {
    v30 = 1; /*0x1005374e4*/
  }
  memcpy((void *)v30, v25, v27); /*0x1005374f3*/
  v31 = v36; /*0x1005374f8*/
  *v36 = v27; /*0x1005374fc*/
  v31[1] = v30; /*0x1005374ff*/
  v31[2] = v27; /*0x100537503*/
  if ( v4 ) /*0x10053750a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v4, 1); /*0x100537517*/
  if ( v33[0] ) /*0x100537523*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v33[0], 1); /*0x10053752d*/
  return v36; /*0x100537536*/
}