// __ZN13codexmate_lib4core4auth10string_val @ 0x1008ea1e0 | 基线 same-set
unsigned __int64 __fastcall codexmate_lib::core::auth::string_val::h06aa957814d20bfc(
        signed __int64 *a1,
        __int64 *a2,
        void *a3,
        size_t a4)
{
  void *v6; // r15
  unsigned __int64 v7; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  __m128i v11; // xmm1
  __int64 v12; // rsi
  __int64 v13; // rdi
  __m128i v14; // xmm2
  unsigned __int64 v15; // rax
  __m128i v16; // xmm3
  __int64 v18; // r13
  void *v19; // rdi
  int v20; // eax
  bool v21; // zf
  unsigned __int64 result; // rax
  __int64 v23; // r12
  signed __int64 v24; // r14
  __int64 v25; // r13
  const void *v26; // r15
  __int64 v27; // rax
  __int64 v28; // r12
  __m128i v29; // [rsp+0h] [rbp-70h] BYREF
  __m128i v30; // [rsp+10h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+20h] [rbp-50h]
  __int64 v32; // [rsp+28h] [rbp-48h]
  __int64 v33; // [rsp+30h] [rbp-40h]
  void *__s1; // [rsp+38h] [rbp-38h]
  signed __int64 *v35; // [rsp+40h] [rbp-30h]

  if ( a2[3] ) /*0x1008ea1f4*/
  {
    v6 = a3; /*0x1008ea202*/
    v7 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(a2 + 4, a3, a4); /*0x1008ea212*/
    _RCX = v7 >> 57; /*0x1008ea21a*/
    v9 = *a2; /*0x1008ea21e*/
    v10 = a2[1]; /*0x1008ea221*/
    v11 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v7 >> 57), (__m128i)0LL); /*0x1008ea22d*/
    v12 = *a2 - 56; /*0x1008ea232*/
    v13 = 0; /*0x1008ea237*/
    v14 = (__m128i)-1LL; /*0x1008ea239*/
    while ( 1 ) /*0x1008ea23d*/
    {
      v15 = v10 & v7; /*0x1008ea23d*/
      v16 = _mm_loadu_si128((const __m128i *)(v9 + v15)); /*0x1008ea240*/
      _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v16, v11)); /*0x1008ea24e*/
      if ( _EBX ) /*0x1008ea254*/
        break; /*0x1008ea254*/
LABEL_8:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v16, v14)); /*0x1008ea2e0*/
      if ( (_DWORD)_RCX ) /*0x1008ea2ea*/
        goto LABEL_10; /*0x1008ea2ea*/
      v7 = v15 + v13 + 16; /*0x1008ea2ec*/
      v13 += 16; /*0x1008ea2f1*/
    }
    v31 = v15; /*0x1008ea25a*/
    v35 = a1; /*0x1008ea25e*/
    v32 = v10; /*0x1008ea262*/
    v29 = v11; /*0x1008ea266*/
    __s1 = v6; /*0x1008ea26b*/
    v33 = v13; /*0x1008ea26f*/
    v30 = v16; /*0x1008ea273*/
    while ( 1 ) /*0x1008ea278*/
    {
      __asm { tzcnt ecx, ebx } /*0x1008ea278*/
      _RCX = -(__int64)(v10 & (v15 + _RCX)); /*0x1008ea282*/
      v18 = 56 * _RCX; /*0x1008ea285*/
      if ( a4 == *(_QWORD *)(v12 + 56 * _RCX + 16) ) /*0x1008ea28e*/
      {
        v19 = __s1; /*0x1008ea29b*/
        if ( !memcmp(__s1, *(const void **)(v12 + v18 + 8), a4) ) /*0x1008ea2a2*/
          break; /*0x1008ea2a2*/
      }
      v20 = _EBX - 1; /*0x1008ea2ae*/
      LOWORD(v20) = _EBX & (_EBX - 1); /*0x1008ea2b1*/
      v21 = (_WORD)v20 == 0; /*0x1008ea2b1*/
      _EBX = v20; /*0x1008ea2b4*/
      v15 = v31; /*0x1008ea2b6*/
      a1 = v35; /*0x1008ea2ba*/
      v10 = v32; /*0x1008ea2be*/
      v11 = _mm_load_si128(&v29); /*0x1008ea2c2*/
      v6 = __s1; /*0x1008ea2c7*/
      v13 = v33; /*0x1008ea2cb*/
      v14 = (__m128i)-1LL; /*0x1008ea2cf*/
      v16 = _mm_load_si128(&v30); /*0x1008ea2d3*/
      if ( v21 ) /*0x1008ea2d8*/
        goto LABEL_8; /*0x1008ea2d8*/
    }
    if ( *(_BYTE *)(v9 + v18 - 32) == 3 ) /*0x1008ea313*/
    {
      v23 = v18 + v9; /*0x1008ea315*/
      v24 = *(_QWORD *)(v23 - 8); /*0x1008ea318*/
      if ( v24 < 0 ) /*0x1008ea320*/
      {
        v25 = 0; /*0x1008ea322*/
        goto LABEL_14; /*0x1008ea322*/
      }
      v26 = *(const void **)(v23 - 16); /*0x1008ea343*/
      if ( v24 ) /*0x1008ea348*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v12); /*0x1008ea34a*/
        v25 = 1; /*0x1008ea34f*/
        v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1); /*0x1008ea35d*/
        if ( !v27 ) /*0x1008ea365*/
LABEL_14:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25, v24); /*0x1008ea325*/
        v28 = v27; /*0x1008ea367*/
      }
      else
      {
        v28 = 1; /*0x1008ea36c*/
      }
      memcpy((void *)v28, v26, v24); /*0x1008ea37b*/
      result = (unsigned __int64)v35; /*0x1008ea380*/
      *v35 = v24; /*0x1008ea384*/
      *(_QWORD *)(result + 8) = v28; /*0x1008ea387*/
      *(_QWORD *)(result + 16) = v24; /*0x1008ea38b*/
    }
    else
    {
      *v35 = 0x8000000000000000LL; /*0x1008ea33e*/
      return 0x8000000000000000LL; /*0x1008ea330*/
    }
  }
  else
  {
LABEL_10:
    *a1 = 0x8000000000000000LL; /*0x1008ea2fa*/
    return 0x8000000000000000LL; /*0x1008ea2fa*/
  }
  return result; /*0x1008ea38f*/
}