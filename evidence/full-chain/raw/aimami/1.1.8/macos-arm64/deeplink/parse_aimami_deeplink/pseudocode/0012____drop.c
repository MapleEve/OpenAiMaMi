// mac 1.1.8 parse_aimami_deeplink node va=0x1001dd9c0 depth=1
// _::drop
__int64 __fastcall _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h37f7d692fde42b17(
        const __m128i **a1)
{
  __int64 result; // rax
  const __m128i *v2; // r15
  const __m128i *v4; // r12
  const __m128i *v6; // r13
  int v7; // r14d
  const __m128i *v8; // rbx
  const __m128i *v9; // [rsp-40h] [rbp-40h]

  result = (__int64)a1[1]; /*0x1001dd9c0*/
  if ( result ) /*0x1001dd9c7*/
  {
    v9 = a1[1]; /*0x1001dd9de*/
    v2 = a1[3]; /*0x1001dd9e6*/
    if ( v2 ) /*0x1001dd9ed*/
    {
      HIDWORD(_RAX) = HIDWORD(a1); /*0x1001dd9f3*/
      v4 = *a1; /*0x1001dd9f7*/
      _R14D = ~_mm_movemask_epi8(_mm_load_si128(*a1)); /*0x1001dda05*/
      v6 = *a1 + 1; /*0x1001dda08*/
      do /*0x1001dda1d*/
      {
        if ( !(_WORD)_R14D ) /*0x1001dda23*/
        {
          do /*0x1001dda4d*/
          {
            v7 = _mm_movemask_epi8(_mm_load_si128(v6)); /*0x1001dda36*/
            v4 -= 48; /*0x1001dda3b*/
            ++v6; /*0x1001dda42*/
          }
          while ( v7 == 0xFFFF ); /*0x1001dda4d*/
          _R14D = ~v7; /*0x1001dda4f*/
        }
        __asm { tzcnt eax, r14d } /*0x1001dda52*/
        v8 = &v4[-3 * _RAX]; /*0x1001dda62*/
        if ( v8[-3].i64[0] ) /*0x1001dda66*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001dda79*/
        if ( v8[-2].i64[1] ) /*0x1001dda7e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001dda90*/
        _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x1001dda14*/
        _R14D &= _R14D - 1; /*0x1001dda17*/
        v2 = (const __m128i *)((char *)v2 - 1); /*0x1001dda1a*/
      }
      while ( v2 ); /*0x1001dda1d*/
    }
    result = 48LL * (_QWORD)v9; /*0x1001ddaa5*/
    if ( 49LL * (_QWORD)v9 != -65 ) /*0x1001ddac3*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ddad4*/
  }
  return result; /*0x1001ddad9*/
}