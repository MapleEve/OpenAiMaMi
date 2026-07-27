// __ZN13codexmate_lib4core4auth7int_val @ 0x1008f33b0 | 基线 same-set
_BOOL8 __fastcall codexmate_lib::core::auth::int_val::hcd49c95662bf88b4(__int64 *a1)
{
  unsigned __int64 v1; // rcx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __m128i v5; // xmm0
  __int64 v6; // rdi
  _BOOL8 result; // rax
  __int64 i; // r8
  unsigned __int64 v9; // rcx
  __m128i v10; // xmm2
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( !a1[3] ) /*0x1008f33b5*/
    return 0; /*0x1008f34b7*/
  v1 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(a1 + 4, "iat", 3); /*0x1008f33dc*/
  v3 = *a1; /*0x1008f33e3*/
  v4 = a1[1]; /*0x1008f33e6*/
  v5 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v1 >> 57), (__m128i)0LL); /*0x1008f33f2*/
  v6 = *a1 - 56; /*0x1008f33f7*/
  result = 0; /*0x1008f33fb*/
  for ( i = 0; ; i += 16 ) /*0x1008f3401*/
  {
    v9 = v4 & v1; /*0x1008f3404*/
    v10 = _mm_loadu_si128((const __m128i *)(v3 + v9)); /*0x1008f3407*/
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v10, v5)); /*0x1008f3414*/
    if ( _R9D ) /*0x1008f341c*/
      break; /*0x1008f341c*/
LABEL_7:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v10, (__m128i)-1LL)) ) /*0x1008f3474*/
      return result; /*0x1008f347c*/
    v1 = v9 + i + 16; /*0x1008f347e*/
  }
  while ( 1 ) /*0x1008f341e*/
  {
    __asm { tzcnt r10d, r9d } /*0x1008f341e*/
    v12 = -56LL * (v4 & (v9 + _R10)); /*0x1008f342c*/
    if ( *(_QWORD *)(v6 + v12 + 16) == 3 /*0x1008f3453*/
      && !(**(_WORD **)(v6 + v12 + 8) ^ 0x6169 | *(unsigned __int8 *)(*(_QWORD *)(v6 + v12 + 8) + 2LL) ^ 0x74) )
    {
      break; /*0x1008f3453*/
    }
    _R10 = (unsigned int)(_R9D - 1); /*0x1008f3459*/
    LOWORD(_R10) = _R9D & (_R9D - 1); /*0x1008f345d*/
    _R9D = _R10; /*0x1008f3461*/
    if ( !(_WORD)_R10 ) /*0x1008f3464*/
      goto LABEL_7; /*0x1008f3464*/
  }
  if ( *(_BYTE *)(v3 + v12 - 32) == 2 ) /*0x1008f3492*/
  {
    v13 = v12 + v3; /*0x1008f3494*/
    v14 = *(_QWORD *)(v13 - 24); /*0x1008f3497*/
    if ( !v14 ) /*0x1008f349e*/
      return *(_QWORD *)(v13 - 16) >= 0LL; /*0x1008f34cb*/
    if ( (_DWORD)v14 == 1 ) /*0x1008f34a3*/
      return 1; /*0x1008f34b4*/
  }
  return 0; /*0x1008f34b4*/
}