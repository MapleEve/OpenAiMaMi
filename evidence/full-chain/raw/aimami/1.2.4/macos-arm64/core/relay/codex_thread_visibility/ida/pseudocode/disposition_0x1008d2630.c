// __ZN13codexmate_lib4core5relay23codex_thread_visibility23RouterCatalogModelIndex11disposition @ 0x1008d2630 | 1.2.4 NEW-delta
int __fastcall codexmate_lib::core::relay::codex_thread_visibility::RouterCatalogModelIndex::disposition::he0d77a72ab33384d(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned __int64 *v5; // r14
  size_t v8; // rdx
  const void *v9; // rbx
  size_t v10; // rdx
  const void *v11; // r15
  size_t v12; // rbx
  unsigned __int64 *v13; // r13
  _QWORD *v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __m128i v18; // xmm1
  __int64 v19; // r12
  __int64 v20; // r9
  __m128i v21; // xmm2
  unsigned __int64 v22; // rax
  __m128i v23; // xmm3
  __int64 v25; // r14
  size_t v26; // rdx
  size_t v27; // r13
  __int64 v28; // rbx
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  size_t v33; // r13
  unsigned __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rdx
  __m128i v37; // xmm1
  __int64 v38; // rsi
  __int64 v39; // rdi
  __m128i v40; // xmm2
  unsigned __int64 v41; // r15
  __m128i v42; // xmm3
  __int64 v44; // rax
  unsigned __int64 v45; // rbx
  unsigned __int64 *v46; // r15
  unsigned __int64 v47; // r14
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  char *v50; // rax
  unsigned __int64 v51; // rdx
  char *v52; // rbx
  unsigned __int64 v53; // r15
  __m128i v54; // xmm2
  __m128i v56; // [rsp+0h] [rbp-C0h] BYREF
  __m128i v57; // [rsp+10h] [rbp-B0h] BYREF
  unsigned __int64 v58; // [rsp+20h] [rbp-A0h] BYREF
  unsigned __int64 v59; // [rsp+28h] [rbp-98h]
  unsigned __int64 v60; // [rsp+30h] [rbp-90h]
  __int64 v61; // [rsp+38h] [rbp-88h]
  __m128i v62; // [rsp+40h] [rbp-80h] BYREF
  __m128i v63; // [rsp+50h] [rbp-70h] BYREF
  __int64 v64; // [rsp+68h] [rbp-58h]
  unsigned __int64 v65; // [rsp+70h] [rbp-50h]
  __int64 v66; // [rsp+78h] [rbp-48h]
  __int64 v67; // [rsp+80h] [rbp-40h]
  unsigned __int64 *v68; // [rsp+88h] [rbp-38h]
  _QWORD *v69; // [rsp+90h] [rbp-30h]

  v5 = a1; /*0x1008d2644*/
  v69 = a2; /*0x1008d264a*/
  if ( !a3 ) /*0x1008d264e*/
    goto LABEL_16; /*0x1008d264e*/
  v64 = a4; /*0x1008d2659*/
  v9 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(a3, a4); /*0x1008d2665*/
  if ( v9 == nullptr || v8 == 0 ) /*0x1008d2671*/
    goto LABEL_3; /*0x1008d2676*/
  v33 = v8; /*0x1008d27e4*/
  LODWORD(v65) = a5; /*0x1008d27e7*/
  if ( !v69[6] ) /*0x1008d27f4*/
  {
LABEL_31:
    if ( (_BYTE)v65 ) /*0x1008d2982*/
    {
      if ( !*((_BYTE *)v69 + 120) ) /*0x1008d298c*/
      {
        v50 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(v9, v33); /*0x1008d299c*/
        if ( v51 ) /*0x1008d29a4*/
        {
          v52 = v50; /*0x1008d29aa*/
          v53 = v51; /*0x1008d29ad*/
          LODWORD(v31) = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008d29c2*/
                           "::[AiMaMi][patch-instructions] no donor thread found, using fallback instructionsFollow the u"
                           "ser's instructions carefully. Respond helpfully and use tools when appropriate.",
                           2u,
                           v50);
          if ( !(_BYTE)v31 ) /*0x1008d29c9*/
          {
            if ( v53 == 12 ) /*0x1008d29d3*/
            {
              v31 = anon_d163fe72d6e6e73a137b22815ab75905_117 ^ *(_QWORD *)v52; /*0x1008d29d8*/
              if ( !(v31 | *((_DWORD *)v52 + 2) ^ 0x79616C65u) ) /*0x1008d29e8*/
                goto LABEL_3; /*0x1008d29eb*/
            }
            else
            {
              if ( v53 > 0xC ) /*0x1008d2a32*/
              {
                v31 = *(_QWORD *)v52 ^ anon_d163fe72d6e6e73a137b22815ab75905_40; /*0x1008d2a3b*/
                if ( !(v31 | *(_QWORD *)(v52 + 5) ^ *(__int64 *)((char *)&anon_d163fe72d6e6e73a137b22815ab75905_40 + 5)) ) /*0x1008d2a4c*/
                  goto LABEL_3; /*0x1008d2a4c*/
              }
              if ( v53 == 6 ) /*0x1008d2a56*/
              {
                LODWORD(v31) = anon_d163fe72d6e6e73a137b22815ab75905_28 ^ *(_DWORD *)v52; /*0x1008d2a91*/
                if ( !((unsigned int)v31 | *((_WORD *)v52 + 2) ^ 0x3169) ) /*0x1008d2aa7*/
                  goto LABEL_3; /*0x1008d2aa7*/
              }
              else if ( v53 == 19 ) /*0x1008d2a5c*/
              {
                v54 = _mm_or_si128( /*0x1008d2a7f*/
                        _mm_xor_si128(
                          _mm_loadu_si128((const __m128i *)((char *)&anon_d163fe72d6e6e73a137b22815ab75905_37 + 3)),
                          _mm_loadu_si128((const __m128i *)(v52 + 3))),
                        _mm_xor_si128(
                          _mm_loadu_si128((const __m128i *)v52),
                          _mm_loadu_si128((const __m128i *)&anon_d163fe72d6e6e73a137b22815ab75905_37)));
                if ( _mm_testz_si128(v54, v54) ) /*0x1008d2a83*/
                  goto LABEL_3; /*0x1008d2a88*/
              }
            }
            v32 = 0x8000000000000001LL; /*0x1008d2aad*/
            goto LABEL_42; /*0x1008d2ab7*/
          }
        }
      }
    }
LABEL_3:
    v11 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(a3, v64); /*0x1008d267c*/
    v12 = v10; /*0x1008d268b*/
    a2 = v69; /*0x1008d268e*/
    if ( v11 && v10 && v69[12] ) /*0x1008d26b1*/
    {
      v13 = v5; /*0x1008d26c0*/
      v14 = v69; /*0x1008d26c3*/
      v15 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v69 + 13); /*0x1008d26cc*/
      v16 = v14[9]; /*0x1008d26d8*/
      v17 = v14[10]; /*0x1008d26dc*/
      v5 = v13; /*0x1008d26e0*/
      v18 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v15 >> 57), (__m128i)0LL); /*0x1008d26eb*/
      v19 = v16 - 48; /*0x1008d26f0*/
      v20 = 0; /*0x1008d26f4*/
      v21 = (__m128i)-1LL; /*0x1008d26f7*/
      while ( 1 ) /*0x1008d26fb*/
      {
        v22 = v17 & v15; /*0x1008d26fb*/
        v23 = _mm_loadu_si128((const __m128i *)(v16 + v22)); /*0x1008d26fe*/
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v23, v18)); /*0x1008d270c*/
        if ( (_DWORD)_RCX ) /*0x1008d2712*/
          break; /*0x1008d2712*/
LABEL_14:
        a2 = v69; /*0x1008d27a5*/
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v23, v21)) ) /*0x1008d27a9*/
          goto LABEL_16; /*0x1008d27b3*/
        v15 = v22 + v20 + 16; /*0x1008d27b5*/
        v20 += 16; /*0x1008d27ba*/
      }
      v65 = v22; /*0x1008d2718*/
      v68 = v5; /*0x1008d271c*/
      v66 = v17; /*0x1008d2720*/
      v62 = v18; /*0x1008d2724*/
      v67 = v20; /*0x1008d2729*/
      v63 = v23; /*0x1008d272d*/
      while ( 1 ) /*0x1008d2732*/
      {
        v64 = _RCX; /*0x1008d2732*/
        __asm { tzcnt ecx, ecx } /*0x1008d2736*/
        v25 = -48LL * (v17 & (v22 + _RCX)); /*0x1008d2747*/
        if ( v12 == *(_QWORD *)(v19 - 48 * (v17 & (v22 + _RCX)) + 16) ) /*0x1008d2750*/
        {
          v26 = v12; /*0x1008d275d*/
          v27 = v12; /*0x1008d2760*/
          v28 = v16; /*0x1008d2763*/
          v29 = memcmp(v11, *(const void **)(v19 + v25 + 8), v26); /*0x1008d2766*/
          v16 = v28; /*0x1008d276b*/
          v12 = v27; /*0x1008d276e*/
          if ( !v29 ) /*0x1008d2773*/
            break; /*0x1008d2773*/
        }
        v30 = v64 - 1; /*0x1008d277d*/
        LOWORD(v30) = v64 & (v64 - 1); /*0x1008d2780*/
        _RCX = v30; /*0x1008d2783*/
        v22 = v65; /*0x1008d2785*/
        v5 = v68; /*0x1008d2789*/
        v17 = v66; /*0x1008d278d*/
        v18 = _mm_load_si128(&v62); /*0x1008d2791*/
        v20 = v67; /*0x1008d2796*/
        v21 = (__m128i)-1LL; /*0x1008d279a*/
        v23 = _mm_load_si128(&v63); /*0x1008d279e*/
        if ( ((unsigned __int16)v64 & (unsigned __int16)(v64 - 1)) == 0 ) /*0x1008d27a3*/
          goto LABEL_14; /*0x1008d27a3*/
      }
      a2 = (_QWORD *)(v16 + v25 - 24); /*0x1008d2903*/
      v5 = v68; /*0x1008d2908*/
LABEL_28:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v58, a2); /*0x1008d2916*/
      v45 = v58; /*0x1008d2922*/
      LODWORD(v31) = 0; /*0x1008d2929*/
      v32 = 0x8000000000000003LL; /*0x1008d292e*/
      if ( v58 != 0x8000000000000000LL ) /*0x1008d2935*/
      {
        v46 = v5; /*0x1008d293b*/
        v47 = v59; /*0x1008d293e*/
        LODWORD(v31) = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(v59, v60); /*0x1008d294f*/
        if ( v48 ) /*0x1008d2957*/
        {
          v49 = v59; /*0x1008d2964*/
          LODWORD(v31) = v60; /*0x1008d2967*/
          v5 = v46; /*0x1008d296b*/
          v46[2] = v60; /*0x1008d296e*/
          v46[1] = v49; /*0x1008d2972*/
          v32 = v45; /*0x1008d2976*/
        }
        else
        {
          if ( v45 ) /*0x1008d2a08*/
            LODWORD(v31) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v45, 1); /*0x1008d2a15*/
          v5 = v46; /*0x1008d2a1a*/
        }
      }
      goto LABEL_42; /*0x1008d2979*/
    }
LABEL_16:
    LODWORD(v31) = 0; /*0x1008d27c3*/
    if ( *a2 == 0x8000000000000000LL ) /*0x1008d27d5*/
    {
      v32 = 0x8000000000000003LL; /*0x1008d27db*/
      goto LABEL_42; /*0x1008d27df*/
    }
    goto LABEL_28; /*0x1008d27d5*/
  }
  v68 = a1; /*0x1008d27fa*/
  v34 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v69 + 7); /*0x1008d2811*/
  v35 = v69[3]; /*0x1008d2818*/
  v36 = v69[4]; /*0x1008d281c*/
  v37 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v34 >> 57), (__m128i)0LL); /*0x1008d2828*/
  v38 = v35 - 24; /*0x1008d282d*/
  v39 = 0; /*0x1008d2831*/
  v40 = (__m128i)-1LL; /*0x1008d2833*/
  while ( 1 ) /*0x1008d283b*/
  {
    v41 = v36 & v34; /*0x1008d283b*/
    v42 = _mm_loadu_si128((const __m128i *)(v35 + v41)); /*0x1008d283e*/
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v42, v37)); /*0x1008d284c*/
    if ( (_DWORD)_RAX ) /*0x1008d2852*/
      break; /*0x1008d2852*/
LABEL_25:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v42, v40)) ) /*0x1008d28e9*/
      goto LABEL_31; /*0x1008d28ef*/
    v34 = v41 + v39 + 16; /*0x1008d28f5*/
    v39 += 16; /*0x1008d28fa*/
  }
  v67 = v35; /*0x1008d2858*/
  v63.i64[0] = v36; /*0x1008d285c*/
  v56 = v37; /*0x1008d2860*/
  v61 = v39; /*0x1008d2868*/
  v57 = v42; /*0x1008d286f*/
  while ( 1 ) /*0x1008d2877*/
  {
    v62.i64[0] = _RAX; /*0x1008d2877*/
    __asm { tzcnt eax, eax } /*0x1008d287b*/
    v44 = -3LL * (v36 & (v41 + _RAX)); /*0x1008d2888*/
    if ( v33 == *(_QWORD *)(v38 + 8 * v44 + 16) ) /*0x1008d2891*/
    {
      v66 = v38; /*0x1008d2897*/
      LODWORD(v31) = memcmp(v9, *(const void **)(v38 + 8 * v44 + 8), v33); /*0x1008d28a5*/
      v38 = v66; /*0x1008d28aa*/
      if ( !(_DWORD)v31 ) /*0x1008d28b0*/
        break; /*0x1008d28b0*/
    }
    _RAX = (unsigned int)(v62.i32[0] - 1); /*0x1008d28ba*/
    LOWORD(_RAX) = v62.i16[0] & (v62.i16[0] - 1); /*0x1008d28bd*/
    v35 = v67; /*0x1008d28c0*/
    v36 = v63.i64[0]; /*0x1008d28c4*/
    v37 = _mm_load_si128(&v56); /*0x1008d28c8*/
    v39 = v61; /*0x1008d28d0*/
    v40 = (__m128i)-1LL; /*0x1008d28d7*/
    v42 = _mm_load_si128(&v57); /*0x1008d28db*/
    if ( !(_WORD)_RAX ) /*0x1008d28e3*/
      goto LABEL_25; /*0x1008d28e3*/
  }
  v32 = 0x8000000000000000LL; /*0x1008d2a00*/
LABEL_42:
  *v5 = v32; /*0x1008d2a1d*/
  return v31; /*0x1008d2a20*/
}