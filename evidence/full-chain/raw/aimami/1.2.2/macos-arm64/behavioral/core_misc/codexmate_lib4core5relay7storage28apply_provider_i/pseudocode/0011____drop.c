// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x1006ac6d0 d=1
__int64 __fastcall _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc14174b96e674899(
        const __m128i **a1)
{
  __int64 result; // rax
  const __m128i *v2; // r15
  const __m128i *v4; // r12
  const __m128i *v6; // r13
  int v7; // r14d
  const __m128i *v8; // rbx
  const __m128i *v9; // [rsp-40h] [rbp-40h]

  result = (__int64)a1[1]; /*0x1006ac6d0*/
  if ( result ) /*0x1006ac6d7*/
  {
    v9 = a1[1]; /*0x1006ac6ee*/
    v2 = a1[3]; /*0x1006ac6f6*/
    if ( v2 ) /*0x1006ac6fd*/
    {
      HIDWORD(_RAX) = HIDWORD(a1); /*0x1006ac703*/
      v4 = *a1; /*0x1006ac707*/
      _R14D = ~_mm_movemask_epi8(_mm_load_si128(*a1)); /*0x1006ac715*/
      v6 = *a1 + 1; /*0x1006ac718*/
      do /*0x1006ac72d*/
      {
        if ( !(_WORD)_R14D ) /*0x1006ac733*/
        {
          do /*0x1006ac75d*/
          {
            v7 = _mm_movemask_epi8(_mm_load_si128(v6)); /*0x1006ac746*/
            v4 -= 48; /*0x1006ac74b*/
            ++v6; /*0x1006ac752*/
          }
          while ( v7 == 0xFFFF ); /*0x1006ac75d*/
          _R14D = ~v7; /*0x1006ac75f*/
        }
        __asm { tzcnt eax, r14d } /*0x1006ac762*/
        v8 = &v4[-3 * _RAX]; /*0x1006ac772*/
        if ( v8[-3].i64[0] ) /*0x1006ac776*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006ac789*/
        if ( v8[-2].i64[1] ) /*0x1006ac78e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006ac7a0*/
        _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x1006ac724*/
        _R14D &= _R14D - 1; /*0x1006ac727*/
        v2 = (const __m128i *)((char *)v2 - 1); /*0x1006ac72a*/
      }
      while ( v2 ); /*0x1006ac72d*/
    }
    result = 48LL * (_QWORD)v9; /*0x1006ac7b5*/
    if ( 49LL * (_QWORD)v9 != -65 ) /*0x1006ac7d3*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006ac7e4*/
  }
  return result; /*0x1006ac7e9*/
}