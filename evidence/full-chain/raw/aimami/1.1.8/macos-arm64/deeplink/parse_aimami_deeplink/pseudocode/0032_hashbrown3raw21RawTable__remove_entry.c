// mac 1.1.8 parse_aimami_deeplink node va=0x1001e5da0 depth=2
// hashbrown3raw21RawTable::remove_entry
unsigned __int64 *__fastcall hashbrown::raw::RawTable$LT$T$C$A$GT$::remove_entry::h8c0a0626865fae94(
        unsigned __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        const void *a4,
        size_t a5)
{
  __int64 v9; // r10
  __int64 v10; // rsi
  __m128i v11; // xmm1
  __int64 v12; // rdi
  __int64 v13; // r11
  __m128i v14; // xmm2
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm3
  const void *v18; // rsi
  int v19; // eax
  __int64 v20; // r15
  __int64 v21; // r12
  unsigned __int64 v22; // rcx
  unsigned __int16 v23; // di
  char v26; // dl
  unsigned __int64 v27; // rax
  __m128i v29; // [rsp+0h] [rbp-80h] BYREF
  __m128i v30; // [rsp+10h] [rbp-70h] BYREF
  __int64 v31; // [rsp+20h] [rbp-60h]
  __int64 v32; // [rsp+28h] [rbp-58h]
  const void *v33; // [rsp+30h] [rbp-50h]
  __int64 v34; // [rsp+38h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-40h]
  unsigned __int64 v36; // [rsp+48h] [rbp-38h]
  __int64 v37; // [rsp+50h] [rbp-30h]

  v9 = *a2; /*0x1001e5dc1*/
  v10 = a2[1]; /*0x1001e5dc4*/
  v11 = _mm_shuffle_epi8(_mm_cvtsi32_si128(a3 >> 57), (__m128i)0LL); /*0x1001e5dd0*/
  v12 = v9 - 48; /*0x1001e5dd5*/
  v13 = 0; /*0x1001e5dd9*/
  v14 = (__m128i)-1LL; /*0x1001e5ddc*/
  while ( 1 ) /*0x1001e5de0*/
  {
    v15 = v10 & a3; /*0x1001e5de0*/
    v16 = _mm_loadu_si128((const __m128i *)(v9 + v15)); /*0x1001e5de3*/
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v16, v11)); /*0x1001e5df1*/
    if ( (_DWORD)_RAX ) /*0x1001e5df7*/
      break; /*0x1001e5df7*/
LABEL_7:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v16, v14)) ) /*0x1001e5e94*/
    {
      v27 = 0x8000000000000000LL; /*0x1001e5f52*/
      goto LABEL_13; /*0x1001e5f52*/
    }
    a3 = v15 + v13 + 16; /*0x1001e5ea0*/
    v13 += 16; /*0x1001e5ea5*/
  }
  v36 = v15; /*0x1001e5dfd*/
  v29 = v11; /*0x1001e5e01*/
  v37 = v13; /*0x1001e5e06*/
  v30 = v16; /*0x1001e5e0a*/
  while ( 1 ) /*0x1001e5e0f*/
  {
    v35 = _RAX; /*0x1001e5e0f*/
    __asm { tzcnt r12d, eax } /*0x1001e5e13*/
    _R12 = v10 & (v15 + _R12); /*0x1001e5e1b*/
    if ( a5 == *(_QWORD *)(v12 - 48 * _R12 + 16) ) /*0x1001e5e31*/
    {
      v31 = v10; /*0x1001e5e37*/
      v18 = *(const void **)(v12 - 48 * _R12 + 8); /*0x1001e5e3b*/
      v34 = v12; /*0x1001e5e3f*/
      v32 = v9; /*0x1001e5e49*/
      v33 = a4; /*0x1001e5e4d*/
      v19 = memcmp(a4, v18, a5); /*0x1001e5e51*/
      v12 = v34; /*0x1001e5e56*/
      a4 = v33; /*0x1001e5e5a*/
      v9 = v32; /*0x1001e5e5e*/
      v10 = v31; /*0x1001e5e62*/
      if ( !v19 ) /*0x1001e5e68*/
        break; /*0x1001e5e68*/
    }
    _RAX = (unsigned int)(v35 - 1); /*0x1001e5e6e*/
    LOWORD(_RAX) = v35 & (v35 - 1); /*0x1001e5e71*/
    v15 = v36; /*0x1001e5e74*/
    v11 = _mm_load_si128(&v29); /*0x1001e5e78*/
    v13 = v37; /*0x1001e5e7d*/
    v14 = (__m128i)-1LL; /*0x1001e5e81*/
    v16 = _mm_load_si128(&v30); /*0x1001e5e85*/
    if ( !(_WORD)_RAX ) /*0x1001e5e8a*/
      goto LABEL_7; /*0x1001e5e8a*/
  }
  v20 = v32 - 48 * _R12; /*0x1001e5eae*/
  v21 = 16 * _R12; /*0x1001e5eb1*/
  v22 = v31 & (0xAAAAAAAAAAAAAAABLL * ((3 * v21) >> 4) - 16); /*0x1001e5ecf*/
  _BitScanReverse(&v23, _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v32 + v22)), (__m128i)-1LL))); /*0x1001e5ef6*/
  _ESI = _mm_movemask_epi8( /*0x1001e5efd*/
           _mm_cmpeq_epi8(
             _mm_loadu_si128((const __m128i *)(v32 - 0x5555555555555555LL * ((3 * v21) >> 4))),
             (__m128i)-1LL))
       | 0x10000;
  __asm { tzcnt esi, esi } /*0x1001e5f03*/
  v26 = 0x80; /*0x1001e5f09*/
  if ( (unsigned __int16)((v23 ^ 0xF) + _ESI) <= 0xFu ) /*0x1001e5f0f*/
  {
    ++a2[2]; /*0x1001e5f11*/
    v26 = -1; /*0x1001e5f15*/
  }
  *(_BYTE *)(v9 - 0x5555555555555555LL * ((3 * v21) >> 4)) = v26; /*0x1001e5f17*/
  *(_BYTE *)(v9 + v22 + 16) = v26; /*0x1001e5f1b*/
  --a2[3]; /*0x1001e5f20*/
  a1[5] = *(_QWORD *)(v20 - 8); /*0x1001e5f28*/
  a1[4] = *(_QWORD *)(v20 - 16); /*0x1001e5f30*/
  a1[3] = *(_QWORD *)(v20 - 24); /*0x1001e5f38*/
  a1[2] = *(_QWORD *)(v20 - 32); /*0x1001e5f40*/
  v27 = *(_QWORD *)(v20 - 48); /*0x1001e5f44*/
  a1[1] = *(_QWORD *)(v20 - 40); /*0x1001e5f4c*/
LABEL_13:
  *a1 = v27; /*0x1001e5f5c*/
  return a1; /*0x1001e5f62*/
}