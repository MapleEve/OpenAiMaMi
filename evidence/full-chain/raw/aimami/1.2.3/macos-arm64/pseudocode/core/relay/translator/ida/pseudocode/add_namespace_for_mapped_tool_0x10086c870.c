// __ZN13codexmate_lib4core5relay10translator29add_namespace_for_mapped_tool @ 0x10086c870 | 基线 same-set
void __fastcall codexmate_lib::core::relay::translator::add_namespace_for_mapped_tool::h7403e268179b70d8(
        __int64 a1,
        const void *a2,
        size_t a3,
        __int64 *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __m128i v9; // xmm1
  __int64 v10; // r13
  __int64 v11; // r8
  __m128i v12; // xmm2
  unsigned __int64 v13; // rax
  __m128i v14; // xmm3
  __int64 v16; // r12
  unsigned int v17; // eax
  size_t v18; // rbx
  bool v19; // cf
  signed __int64 v20; // rbx
  char *v21; // r13
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __m128i v29; // [rsp+0h] [rbp-90h] BYREF
  __m128i v30; // [rsp+10h] [rbp-80h] BYREF
  __int64 v31; // [rsp+20h] [rbp-70h]
  __int64 v32; // [rsp+28h] [rbp-68h]
  unsigned __int64 v33; // [rsp+30h] [rbp-60h]
  __int64 v34; // [rsp+38h] [rbp-58h]
  __int64 v35; // [rsp+40h] [rbp-50h]
  __int64 v36; // [rsp+48h] [rbp-48h]
  signed __int64 v37; // [rsp+50h] [rbp-40h]
  __int64 v38; // [rsp+58h] [rbp-38h]
  signed __int64 v39; // [rsp+60h] [rbp-30h]

  v31 = a1; /*0x10086c881*/
  if ( a3 && a4[3] ) /*0x10086c88e*/
  {
    v6 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(a4 + 4, a2, a3); /*0x10086c8a6*/
    v7 = *a4; /*0x10086c8b2*/
    v8 = a4[1]; /*0x10086c8b5*/
    v9 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v6 >> 57), (__m128i)0LL); /*0x10086c8c1*/
    v10 = *a4 - 48; /*0x10086c8c6*/
    v11 = 0; /*0x10086c8ca*/
    v12 = (__m128i)-1LL; /*0x10086c8cd*/
    while ( 1 ) /*0x10086c8d1*/
    {
      v13 = v8 & v6; /*0x10086c8d1*/
      v14 = _mm_loadu_si128((const __m128i *)(v7 + v13)); /*0x10086c8d4*/
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v14, v9)); /*0x10086c8e1*/
      if ( (_DWORD)_RCX ) /*0x10086c8e7*/
        break; /*0x10086c8e7*/
LABEL_9:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v14, v12)) ) /*0x10086c973*/
        return; /*0x10086c979*/
      v6 = v13 + v11 + 16; /*0x10086c97f*/
      v11 += 16; /*0x10086c984*/
    }
    v33 = v13; /*0x10086c8ed*/
    v34 = v8; /*0x10086c8f1*/
    v29 = v9; /*0x10086c8f5*/
    v35 = v11; /*0x10086c8fd*/
    v30 = v14; /*0x10086c901*/
    while ( 1 ) /*0x10086c906*/
    {
      v32 = _RCX; /*0x10086c906*/
      __asm { tzcnt ecx, ecx } /*0x10086c90a*/
      v16 = -48LL * (v8 & (v13 + _RCX)); /*0x10086c91b*/
      if ( a3 == *(_QWORD *)(v10 - 48 * (v8 & (v13 + _RCX)) + 16) /*0x10086c938*/
        && !memcmp(a2, *(const void **)(v10 - 48 * (v8 & (v13 + _RCX)) + 8), a3) )
      {
        break; /*0x10086c938*/
      }
      v17 = v32 - 1; /*0x10086c948*/
      LOWORD(v17) = v32 & (v32 - 1); /*0x10086c94b*/
      _RCX = v17; /*0x10086c94e*/
      v13 = v33; /*0x10086c950*/
      v8 = v34; /*0x10086c954*/
      v9 = _mm_load_si128(&v29); /*0x10086c958*/
      v11 = v35; /*0x10086c960*/
      v12 = (__m128i)-1LL; /*0x10086c964*/
      v14 = _mm_load_si128(&v30); /*0x10086c968*/
      if ( ((unsigned __int16)v32 & (unsigned __int16)(v32 - 1)) == 0 ) /*0x10086c96d*/
        goto LABEL_9; /*0x10086c96d*/
    }
    v18 = *(_QWORD *)(v7 + v16 - 8); /*0x10086c992*/
    v19 = v18 < a3; /*0x10086c995*/
    v20 = v18 - a3; /*0x10086c995*/
    if ( !v19 ) /*0x10086c998*/
    {
      v21 = *(char **)(v7 + v16 - 16); /*0x10086c99e*/
      v22 = *(_QWORD *)(v7 + v16 - 8); /*0x10086c9ae*/
      if ( !memcmp(a2, &v21[v20], a3) ) /*0x10086c9b1*/
      {
        if ( v20 < 0 ) /*0x10086c9c1*/
        {
          v23 = 0; /*0x10086c9c3*/
          goto LABEL_15; /*0x10086c9c3*/
        }
        v24 = v22; /*0x10086c9d1*/
        v25 = 1; /*0x10086c9d4*/
        if ( v24 != a3 ) /*0x10086c9dd*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, &v21[v20]); /*0x10086c9df*/
          v23 = 1; /*0x10086c9e4*/
          v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v20, 1); /*0x10086c9f2*/
          if ( !v26 ) /*0x10086c9fa*/
LABEL_15:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, v20); /*0x10086c9c6*/
          v25 = v26; /*0x10086c9fc*/
        }
        memcpy((void *)v25, v21, v20); /*0x10086ca08*/
        v37 = v20; /*0x10086ca0d*/
        v38 = v25; /*0x10086ca11*/
        v39 = v20; /*0x10086ca15*/
        LOBYTE(v36) = 3; /*0x10086ca19*/
        v27 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10086ca32*/
                          "namespace",
                          9u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v27); /*0x10086ca38*/
        v27[3] = v39; /*0x10086ca41*/
        v27[2] = v38; /*0x10086ca49*/
        v28 = v36; /*0x10086ca4d*/
        v27[1] = v37; /*0x10086ca55*/
        *v27 = v28; /*0x10086ca59*/
      }
    }
  }
}