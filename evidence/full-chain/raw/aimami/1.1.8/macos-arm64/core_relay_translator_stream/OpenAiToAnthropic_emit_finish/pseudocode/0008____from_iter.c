// mac 1.1.8 behavioral OpenAiToAnthropic_emit_finish 0x1006c2330 d=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd22e05381b9f3144(
        unsigned __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 _RCX)
{
  __int64 v4; // r12
  __int64 v5; // r13
  const __m128i *v6; // r15
  bool v8; // cf
  int v9; // ebx
  int v10; // r14d
  _DWORD *v11; // rax
  __int64 v13; // rsi
  int v14; // ebx
  unsigned __int64 v15; // rax
  int v17; // [rsp+Ch] [rbp-44h]
  unsigned __int64 v18; // [rsp+10h] [rbp-40h] BYREF
  _DWORD *v19; // [rsp+18h] [rbp-38h]
  __int64 v20; // [rsp+20h] [rbp-30h]

  v4 = a2[4]; /*0x1006c2341*/
  v5 = *a2; /*0x1006c2345*/
  v6 = (const __m128i *)a2[1]; /*0x1006c2348*/
  _EBX = *((unsigned __int16 *)a2 + 12); /*0x1006c234c*/
  do /*0x1006c2380*/
  {
    v8 = v4-- == 0; /*0x1006c2382*/
    if ( v8 ) /*0x1006c2386*/
    {
      *a1 = 0; /*0x1006c23b7*/
      a1[1] = 4; /*0x1006c23be*/
      a1[2] = 0; /*0x1006c23c6*/
      return a1; /*0x1006c23ce*/
    }
    if ( !(_WORD)_EBX ) /*0x1006c238b*/
    {
      do /*0x1006c23aa*/
      {
        v9 = _mm_movemask_epi8(_mm_load_si128(v6)); /*0x1006c2395*/
        v5 -= 640; /*0x1006c2399*/
        ++v6; /*0x1006c23a0*/
      }
      while ( v9 == 0xFFFF ); /*0x1006c23aa*/
      _EBX = ~v9; /*0x1006c23ac*/
      a2[1] = (__int64)v6; /*0x1006c23ae*/
      *a2 = v5; /*0x1006c23b2*/
    }
    __asm { tzcnt ecx, ebx } /*0x1006c2363*/
    _EBX &= _EBX - 1; /*0x1006c2369*/
    *((_WORD *)a2 + 12) = _EBX; /*0x1006c236b*/
    _RCX = -_RCX; /*0x1006c236f*/
    a2[4] = v4; /*0x1006c2376*/
  }
  while ( *(_BYTE *)(v5 + 40 * _RCX - 4) != 1 ); /*0x1006c2380*/
  v10 = *(_DWORD *)(v5 + 40 * _RCX - 8); /*0x1006c23dc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006c23e0*/
  v11 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 4u); /*0x1006c23ef*/
  if ( !v11 ) /*0x1006c23f7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(4, 16); /*0x1006c24e9*/
  *v11 = v10; /*0x1006c23fd*/
  v18 = 4; /*0x1006c2400*/
  v19 = v11; /*0x1006c2408*/
  v13 = 1; /*0x1006c240c*/
LABEL_10:
  v20 = v13; /*0x1006c2415*/
  while ( 1 ) /*0x1006c243a*/
  {
    v8 = v4-- == 0; /*0x1006c243a*/
    if ( v8 ) /*0x1006c243e*/
      break; /*0x1006c243e*/
    if ( !(_WORD)_EBX ) /*0x1006c2443*/
    {
      do /*0x1006c246a*/
      {
        v14 = _mm_movemask_epi8(_mm_load_si128(v6)); /*0x1006c2455*/
        v5 -= 640; /*0x1006c2459*/
        ++v6; /*0x1006c2460*/
      }
      while ( v14 == 0xFFFF ); /*0x1006c246a*/
      _EBX = ~v14; /*0x1006c246c*/
    }
    __asm { tzcnt edx, ebx } /*0x1006c2423*/
    _EBX &= _EBX - 1; /*0x1006c2429*/
    _RDX = -_RDX; /*0x1006c242b*/
    if ( *(_BYTE *)(v5 + 40 * _RDX - 4) == 1 ) /*0x1006c2438*/
    {
      v17 = *(_DWORD *)(v5 + 40 * _RDX - 8); /*0x1006c2478*/
      if ( v13 == v18 ) /*0x1006c247f*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v18, v13, 1, 4, 4u); /*0x1006c2494*/
        v11 = v19; /*0x1006c2499*/
      }
      v11[v13++] = v17; /*0x1006c24a7*/
      goto LABEL_10; /*0x1006c24ad*/
    }
  }
  a1[2] = v20; /*0x1006c24ba*/
  v15 = v18; /*0x1006c24be*/
  a1[1] = (unsigned __int64)v19; /*0x1006c24c6*/
  *a1 = v15; /*0x1006c24ca*/
  return a1; /*0x1006c24d0*/
}