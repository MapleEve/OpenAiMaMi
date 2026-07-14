// mac 1.1.8 behavioral persist_account_auth 0x1001deca0 d=1
unsigned __int64 __fastcall _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h96d53e17d4e72df3(
        const __m128i **a1)
{
  unsigned __int64 result; // rax
  const __m128i *v2; // rbx
  const __m128i *v3; // r15
  const __m128i *v5; // r12
  const __m128i *v7; // r13
  int v8; // r14d

  v2 = a1[1]; /*0x1001decae*/
  if ( v2 ) /*0x1001decb5*/
  {
    v3 = a1[3]; /*0x1001decbf*/
    if ( v3 ) /*0x1001decc6*/
    {
      HIDWORD(_RAX) = HIDWORD(a1); /*0x1001deccc*/
      v5 = *a1; /*0x1001decd0*/
      _R14D = ~_mm_movemask_epi8(_mm_load_si128(*a1)); /*0x1001decde*/
      v7 = *a1 + 1; /*0x1001dece1*/
      do /*0x1001ded00*/
      {
        if ( !(_WORD)_R14D ) /*0x1001ded06*/
        {
          do /*0x1001ded2d*/
          {
            v8 = _mm_movemask_epi8(_mm_load_si128(v7)); /*0x1001ded16*/
            v5 -= 24; /*0x1001ded1b*/
            ++v7; /*0x1001ded22*/
          }
          while ( v8 == 0xFFFF ); /*0x1001ded2d*/
          _R14D = ~v8; /*0x1001ded2f*/
        }
        __asm { tzcnt eax, r14d } /*0x1001ded32*/
        if ( *((_QWORD *)&v5[-1] - 3 * _RAX - 1) ) /*0x1001ded3e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ded55*/
        v3 = (const __m128i *)((char *)v3 - 1); /*0x1001decf0*/
        _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x1001decf7*/
        _R14D &= _R14D - 1; /*0x1001decfa*/
      }
      while ( v3 ); /*0x1001ded00*/
    }
    result = (24LL * (_QWORD)v2 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1001ded68*/
    if ( &v2->i8[result] != (__int8 *)-17LL ) /*0x1001ded77*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ded95*/
  }
  return result; /*0x1001ded8b*/
}