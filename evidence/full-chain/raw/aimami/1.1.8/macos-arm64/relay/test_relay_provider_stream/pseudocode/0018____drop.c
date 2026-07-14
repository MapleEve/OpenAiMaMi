// mac 1.1.8 test_relay_provider_stream node va=0x1001ddbf0 depth=4
// _::drop
__int64 __fastcall _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4f3df4ae14586d84(
        const __m128i **a1)
{
  __int64 result; // rax
  const __m128i *v2; // rcx
  const __m128i *v3; // r13
  const __m128i *v5; // r14
  int v6; // ebx
  __int8 *v8; // rcx
  __int64 v9; // r15
  const __m128i *v10; // [rsp+0h] [rbp-40h]
  const __m128i *v11; // [rsp+8h] [rbp-38h]

  result = (__int64)a1[1]; /*0x1001ddc01*/
  if ( result ) /*0x1001ddc08*/
  {
    v11 = a1[1]; /*0x1001ddc0e*/
    v2 = a1[3]; /*0x1001ddc16*/
    if ( v2 ) /*0x1001ddc1d*/
    {
      v3 = *a1; /*0x1001ddc27*/
      _EBX = ~_mm_movemask_epi8(_mm_load_si128(*a1)); /*0x1001ddc34*/
      v5 = *a1 + 1; /*0x1001ddc36*/
      do /*0x1001ddc4e*/
      {
        if ( !(_WORD)_EBX ) /*0x1001ddc53*/
        {
          do /*0x1001ddc7a*/
          {
            v6 = _mm_movemask_epi8(_mm_load_si128(v5)); /*0x1001ddc65*/
            v3 -= 32; /*0x1001ddc69*/
            ++v5; /*0x1001ddc70*/
          }
          while ( v6 == 0xFFFF ); /*0x1001ddc7a*/
          _EBX = ~v6; /*0x1001ddc7c*/
        }
        v10 = v2; /*0x1001ddc7e*/
        __asm { tzcnt eax, ebx } /*0x1001ddc82*/
        v8 = &v3->i8[-(32 * _EAX)]; /*0x1001ddc8c*/
        v9 = *((_QWORD *)v8 - 1); /*0x1001ddc93*/
        if ( *(_QWORD *)v9 ) /*0x1001ddc97*/
          (*(void (__fastcall **)(_QWORD))v9)(*((_QWORD *)v8 - 2)); /*0x1001ddca2*/
        if ( *(_QWORD *)(v9 + 8) ) /*0x1001ddca4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ddcb4*/
        _EBX &= _EBX - 1; /*0x1001ddc45*/
        v2 = (const __m128i *)((char *)v10 - 1); /*0x1001ddc4b*/
      }
      while ( v10 != (const __m128i *)1 ); /*0x1001ddc4e*/
    }
    result = 32LL * (_QWORD)v11; /*0x1001ddcc2*/
    if ( 33LL * (_QWORD)v11 != -49 ) /*0x1001ddcd1*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ddcf0*/
  }
  return result; /*0x1001ddce2*/
}