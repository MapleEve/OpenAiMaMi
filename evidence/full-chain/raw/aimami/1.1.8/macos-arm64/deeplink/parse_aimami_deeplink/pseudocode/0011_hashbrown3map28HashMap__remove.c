// mac 1.1.8 parse_aimami_deeplink node va=0x100721830 depth=1
// hashbrown3map28HashMap::remove
_QWORD *__fastcall hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h544c848713c4c9cd(
        _QWORD *a1,
        const __m128i *a2,
        void *a3,
        size_t a4)
{
  __int64 *v4; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rsi
  __m128i v9; // xmm1
  __int64 v10; // r15
  __int64 v11; // rdx
  __m128i v12; // xmm2
  unsigned __int64 v13; // rax
  __m128i v14; // xmm3
  unsigned __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // eax
  unsigned __int64 v19; // r12
  __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int16 v22; // di
  char v25; // dl
  __int64 v26; // rsi
  __int64 v27; // rax
  __m128i v29; // [rsp+0h] [rbp-80h] BYREF
  __m128i v30; // [rsp+10h] [rbp-70h] BYREF
  size_t __n; // [rsp+20h] [rbp-60h]
  void *__s1; // [rsp+28h] [rbp-58h]
  __int64 *v33; // [rsp+30h] [rbp-50h]
  __int64 v34; // [rsp+38h] [rbp-48h]
  unsigned __int64 v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h]
  _QWORD *v37; // [rsp+50h] [rbp-30h]

  v4 = (__int64 *)a2; /*0x100721841*/
  _RBX = a1; /*0x100721844*/
  __s1 = a3; /*0x10072184b*/
  __n = a4; /*0x100721852*/
  v6 = core::hash::BuildHasher::hash_one::h245728ff9d912134(a2 + 2); /*0x100721859*/
  v7 = a2->i64[0]; /*0x100721865*/
  v8 = a2->i64[1]; /*0x100721868*/
  v9 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v6 >> 57), (__m128i)0LL); /*0x100721874*/
  v10 = *v4 - 48; /*0x100721879*/
  v11 = 0; /*0x10072187d*/
  v12 = (__m128i)-1LL; /*0x10072187f*/
  while ( 1 ) /*0x100721883*/
  {
    v13 = v8 & v6; /*0x100721883*/
    v14 = _mm_loadu_si128((const __m128i *)(v7 + v13)); /*0x100721886*/
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v14, v9)); /*0x100721895*/
    if ( (_DWORD)_RCX ) /*0x10072189b*/
      break; /*0x10072189b*/
LABEL_7:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v14, v12)) ) /*0x100721934*/
      goto LABEL_12; /*0x100721944*/
    v6 = v13 + v11 + 16; /*0x10072194a*/
    v11 += 16; /*0x10072194f*/
  }
  v35 = v13; /*0x1007218a1*/
  v37 = _RBX; /*0x1007218a5*/
  v29 = v9; /*0x1007218a9*/
  v36 = v11; /*0x1007218ae*/
  v30 = v14; /*0x1007218b2*/
  while ( 1 ) /*0x1007218b7*/
  {
    v34 = _RCX; /*0x1007218b7*/
    __asm { tzcnt ebx, ecx } /*0x1007218bb*/
    v16 = v8 & ((unsigned __int64)_RBX + v13); /*0x1007218c2*/
    if ( __n == *(_QWORD *)(v10 - 48 * v16 + 16) ) /*0x1007218dc*/
    {
      v33 = v4; /*0x1007218e2*/
      v17 = memcmp(__s1, *(const void **)(v10 - 48 * v16 + 8), __n); /*0x1007218f1*/
      v4 = v33; /*0x1007218f9*/
      if ( !v17 ) /*0x1007218ff*/
        break; /*0x1007218ff*/
    }
    v18 = v34 - 1; /*0x100721905*/
    LOWORD(v18) = v34 & (v34 - 1); /*0x100721908*/
    _RCX = v18; /*0x10072190b*/
    v13 = v35; /*0x10072190d*/
    _RBX = v37; /*0x100721911*/
    v9 = _mm_load_si128(&v29); /*0x100721915*/
    v11 = v36; /*0x10072191a*/
    v12 = (__m128i)-1LL; /*0x10072191e*/
    v14 = _mm_load_si128(&v30); /*0x100721922*/
    if ( ((unsigned __int16)v34 & (unsigned __int16)(v34 - 1)) == 0 ) /*0x100721927*/
      goto LABEL_7; /*0x100721927*/
  }
  v19 = v7 - 48 * v16; /*0x100721958*/
  v20 = 16 * v16; /*0x10072195b*/
  v21 = v8 & (0xAAAAAAAAAAAAAAABLL * ((3 * v20) >> 4) - 16); /*0x100721979*/
  _BitScanReverse(&v22, _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v7 + v21)), (__m128i)-1LL))); /*0x1007219a2*/
  _ESI = _mm_movemask_epi8( /*0x1007219a9*/
           _mm_cmpeq_epi8(
             _mm_loadu_si128((const __m128i *)(v7 - 0x5555555555555555LL * ((3 * v20) >> 4))),
             (__m128i)-1LL))
       | 0x10000;
  __asm { tzcnt esi, esi } /*0x1007219af*/
  v25 = 0x80; /*0x1007219b5*/
  if ( (unsigned __int16)((v22 ^ 0xF) + _ESI) <= 0xFu ) /*0x1007219bb*/
  {
    ++v33[2]; /*0x1007219bd*/
    v25 = -1; /*0x1007219c1*/
  }
  *(_BYTE *)(v7 - 0x5555555555555555LL * ((3 * v20) >> 4)) = v25; /*0x1007219c3*/
  *(_BYTE *)(v7 + v21 + 16) = v25; /*0x1007219c8*/
  --v4[3]; /*0x1007219cd*/
  v26 = *(_QWORD *)(v19 - 48); /*0x1007219d1*/
  _RBX = v37; /*0x1007219e3*/
  if ( v26 == 0x8000000000000000LL ) /*0x1007219e7*/
  {
LABEL_12:
    *_RBX = 0x8000000000000000LL; /*0x1007219e9*/
    return _RBX; /*0x1007219ec*/
  }
  v37[2] = *(_QWORD *)(v19 - 8); /*0x1007219f8*/
  v27 = *(_QWORD *)(v19 - 24); /*0x1007219fc*/
  _RBX[1] = *(_QWORD *)(v19 - 16); /*0x100721a06*/
  *_RBX = v27; /*0x100721a0a*/
  if ( v26 ) /*0x100721a10*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100721a17*/
  return _RBX; /*0x100721a1f*/
}