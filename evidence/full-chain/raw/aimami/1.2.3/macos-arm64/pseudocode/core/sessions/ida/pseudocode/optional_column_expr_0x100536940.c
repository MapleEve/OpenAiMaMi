// __ZN13codexmate_lib4core8sessions20optional_column_expr @ 0x100536940 | 基线 same-set
void *__fastcall codexmate_lib::core::sessions::optional_column_expr::hd7f630f3a7df6033(
        size_t *a1,
        __int64 *a2,
        void *a3,
        size_t a4,
        void *a5,
        size_t a6)
{
  size_t *v7; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdx
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  unsigned __int64 v14; // r12
  __m128i v15; // xmm3
  __int64 v17; // rax
  void *v18; // rdi
  void *v19; // rax
  size_t v20; // r12
  void *result; // rax
  void *v22; // rax
  __m128i v23; // [rsp+0h] [rbp-80h] BYREF
  __m128i v24; // [rsp+10h] [rbp-70h] BYREF
  void *__src; // [rsp+28h] [rbp-58h]
  __int64 v26; // [rsp+30h] [rbp-50h]
  __int64 v27; // [rsp+38h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-40h]
  size_t *v29; // [rsp+48h] [rbp-38h]
  void *__s1; // [rsp+50h] [rbp-30h]

  __src = a5; /*0x100536954*/
  v7 = a1; /*0x100536958*/
  if ( a2[3] ) /*0x10053695b*/
  {
    __s1 = a3; /*0x100536970*/
    v9 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(a2 + 4, a3, a4); /*0x10053697f*/
    v10 = *a2; /*0x100536986*/
    v11 = a2[1]; /*0x10053698a*/
    v12 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v9 >> 57), (__m128i)0LL); /*0x100536996*/
    a2 = (__int64 *)(*a2 - 24); /*0x10053699b*/
    a1 = nullptr; /*0x10053699f*/
    v13 = (__m128i)-1LL; /*0x1005369a1*/
    while ( 1 ) /*0x1005369a5*/
    {
      v14 = v11 & v9; /*0x1005369a5*/
      v15 = _mm_loadu_si128((const __m128i *)(v10 + v14)); /*0x1005369a8*/
      _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v15, v12)); /*0x1005369b6*/
      if ( (_DWORD)_RAX ) /*0x1005369bc*/
        break; /*0x1005369bc*/
LABEL_8:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v13)) ) /*0x100536a44*/
        goto LABEL_10; /*0x100536a4a*/
      v9 = (unsigned __int64)a1 + v14 + 16; /*0x100536a4c*/
      a1 += 2; /*0x100536a51*/
    }
    v27 = v10; /*0x1005369c2*/
    v28 = v11; /*0x1005369c6*/
    v23 = v12; /*0x1005369ca*/
    v29 = a1; /*0x1005369cf*/
    v24 = v15; /*0x1005369d3*/
    while ( 1 ) /*0x1005369d8*/
    {
      v26 = _RAX; /*0x1005369d8*/
      __asm { tzcnt eax, eax } /*0x1005369dc*/
      v17 = -3LL * (v11 & (v14 + _RAX)); /*0x1005369e9*/
      if ( a4 == a2[v17 + 2] ) /*0x1005369f2*/
      {
        v18 = __s1; /*0x100536a02*/
        if ( !memcmp(__s1, (const void *)a2[v17 + 1], a4) ) /*0x100536a09*/
          break; /*0x100536a09*/
      }
      _RAX = (unsigned int)(v26 - 1); /*0x100536a1c*/
      LOWORD(_RAX) = v26 & (v26 - 1); /*0x100536a1f*/
      v10 = v27; /*0x100536a22*/
      v11 = v28; /*0x100536a26*/
      v12 = _mm_load_si128(&v23); /*0x100536a2a*/
      a1 = v29; /*0x100536a2f*/
      v13 = (__m128i)-1LL; /*0x100536a33*/
      v15 = _mm_load_si128(&v24); /*0x100536a37*/
      if ( !(_WORD)_RAX ) /*0x100536a3c*/
        goto LABEL_8; /*0x100536a3c*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, a2); /*0x100536a85*/
    v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x100536a92*/
    if ( !v22 ) /*0x100536a9a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a4); /*0x100536ae0*/
    v20 = (size_t)v22; /*0x100536a9c*/
    result = memcpy(v22, __s1, a4); /*0x100536aa9*/
    a6 = a4; /*0x100536aae*/
  }
  else
  {
LABEL_10:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100536a5a*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a6, 1); /*0x100536a67*/
    if ( !v19 ) /*0x100536a6f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a6); /*0x100536ad3*/
    v20 = (size_t)v19; /*0x100536a71*/
    result = memcpy(v19, __src, a6); /*0x100536a7e*/
  }
  *v7 = a6; /*0x100536ab1*/
  v7[1] = v20; /*0x100536ab4*/
  v7[2] = a6; /*0x100536ab8*/
  return result; /*0x100536abc*/
}