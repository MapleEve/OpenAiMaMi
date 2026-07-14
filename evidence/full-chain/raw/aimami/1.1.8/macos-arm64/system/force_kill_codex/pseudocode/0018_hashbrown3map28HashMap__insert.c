// mac 1.1.8 force_kill_codex node va=0x10071d560 depth=3
// hashbrown3map28HashMap::insert
__int64 __fastcall hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h66247658788e8c84(__int64 a1, __int32 a2)
{
  unsigned __int64 v4; // rax
  const __m128i *v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 v11; // r10
  __int64 i; // r9
  unsigned __int64 v13; // rax
  __m128i v14; // xmm2
  __int8 *v16; // r15
  __int64 v17; // rcx
  char v18; // al
  unsigned __int64 v20; // r15
  __int32 v22[7]; // [rsp+0h] [rbp-1Ch] BYREF

  v22[0] = a2; /*0x10071d56f*/
  v4 = core::hash::BuildHasher::hash_one::hd1616d7d6d01b211(a1 + 32, v22); /*0x10071d57d*/
  if ( !*(_QWORD *)(a1 + 16) ) /*0x10071d582*/
  {
    v20 = v4; /*0x10071d6a6*/
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h65961a3992d9a5d8(a1, 1, a1 + 32, 1); /*0x10071d6a9*/
    v4 = v20; /*0x10071d6ae*/
  }
  v7 = *(const __m128i **)a1; /*0x10071d58d*/
  v8 = *(_QWORD *)(a1 + 8); /*0x10071d590*/
  v9 = v4 >> 57; /*0x10071d597*/
  v10 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v4 >> 57), (__m128i)0LL); /*0x10071d5a3*/
  v11 = 0; /*0x10071d5a8*/
  for ( i = 0; ; i += 16 ) /*0x10071d5af*/
  {
    v13 = v8 & v4; /*0x10071d5b2*/
    v14 = _mm_loadu_si128((const __m128i *)((char *)v7 + v13)); /*0x10071d5b5*/
    _R11D = _mm_movemask_epi8(_mm_cmpeq_epi8(v14, v10)); /*0x10071d5c2*/
    if ( _R11D ) /*0x10071d5ca*/
      break; /*0x10071d5ca*/
LABEL_7:
    if ( v11 != 1 ) /*0x10071d604*/
    {
      _RCX = (unsigned int)_mm_movemask_epi8(v14); /*0x10071d606*/
      if ( !(_DWORD)_RCX ) /*0x10071d60c*/
      {
        v11 = 0; /*0x10071d62d*/
        goto LABEL_13; /*0x10071d62d*/
      }
      __asm { tzcnt r8d, ecx } /*0x10071d60e*/
      _R8 = v8 & (v13 + _R8); /*0x10071d616*/
    }
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v14, (__m128i)-1LL)); /*0x10071d61d*/
    if ( (_DWORD)_RCX ) /*0x10071d623*/
    {
      v18 = v7->i8[_R8]; /*0x10071d63e*/
      if ( v18 >= 0 ) /*0x10071d645*/
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v7)); /*0x10071d6ba*/
        __asm { tzcnt r8d, eax } /*0x10071d6be*/
        v18 = v7->i8[_R8]; /*0x10071d6c3*/
      }
      v7->i8[_R8] = v9; /*0x10071d653*/
      v7[1].i8[v8 & (_R8 - 16)] = v9; /*0x10071d657*/
      *(__m128i *)(a1 + 16) = _mm_sub_epi64( /*0x10071d675*/
                                _mm_loadu_si128((const __m128i *)(a1 + 16)),
                                _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_10125B150), v18 & 1, 0));
      v7->i32[-_R8 - 1] = a2; /*0x10071d682*/
      LODWORD(v17) = 0; /*0x10071d687*/
      return (unsigned int)v17; /*0x10071d687*/
    }
    v11 = 1; /*0x10071d625*/
LABEL_13:
    v4 = i + v13 + 16; /*0x10071d630*/
  }
  while ( 1 ) /*0x10071d5cc*/
  {
    __asm { tzcnt ecx, r11d } /*0x10071d5cc*/
    v17 = 4 * (v8 & (v13 + _RCX)); /*0x10071d5d7*/
    v16 = &v7->i8[-v17]; /*0x10071d5de*/
    LOBYTE(v17) = 1; /*0x10071d5e1*/
    if ( a2 == *((_DWORD *)v16 - 1) ) /*0x10071d5e7*/
      return (unsigned int)v17; /*0x10071d68f*/
    _RCX = (unsigned int)(_R11D - 1); /*0x10071d5ed*/
    LOWORD(_RCX) = _R11D & (_R11D - 1); /*0x10071d5f1*/
    _R11D = _RCX; /*0x10071d5f5*/
    if ( !(_WORD)_RCX ) /*0x10071d5f8*/
      goto LABEL_7; /*0x10071d5f8*/
  }
}