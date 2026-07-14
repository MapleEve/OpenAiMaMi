// mac 1.1.8 switch_account_and_restart_codex node va=0x100e75d20 depth=3
// alloc4sync16Arc::drop_slow
volatile signed __int64 *__fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hdfb64b25354f1526(_QWORD *a1)
{
  __int64 v1; // rbx
  pthread_mutex_t **v2; // r12
  pthread_mutex_t *v3; // r15
  pthread_mutex_t *v4; // r15
  __int64 v5; // r14
  __int64 v6; // r15
  const __m128i *v8; // r12
  const __m128i *v10; // r13
  int v11; // ebx
  pthread_mutex_t *v12; // r15
  __int64 v13; // r14
  __int64 v14; // r15
  const __m128i *v16; // r12
  const __m128i *v18; // r13
  int v19; // ebx
  volatile signed __int64 *result; // rax
  __int64 v21; // [rsp+0h] [rbp-30h]

  v1 = *a1; /*0x100e75d2e*/
  v2 = (pthread_mutex_t **)(*a1 + 56LL); /*0x100e75d31*/
  v21 = *a1; /*0x100e75d38*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v2); /*0x100e75d3c*/
  v3 = *v2; /*0x100e75d41*/
  *v2 = nullptr; /*0x100e75d45*/
  if ( v3 ) /*0x100e75d50*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v3); /*0x100e75d55*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e75d67*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1554297d32bfc9c(v1 + 72); /*0x100e75d73*/
  if ( *(_QWORD *)(v1 + 72) ) /*0x100e75d78*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e75d91*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)(v1 + 96)); /*0x100e75d9d*/
  v4 = *(pthread_mutex_t **)(v1 + 96); /*0x100e75da2*/
  *(_QWORD *)(v1 + 96) = 0; /*0x100e75da6*/
  if ( v4 ) /*0x100e75db1*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v4); /*0x100e75db6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e75dc8*/
  }
  v5 = *(_QWORD *)(v1 + 120); /*0x100e75dcd*/
  if ( v5 ) /*0x100e75dd4*/
  {
    v6 = *(_QWORD *)(v1 + 136); /*0x100e75dda*/
    if ( v6 ) /*0x100e75de4*/
    {
      HIDWORD(_RAX) = HIDWORD(v21); /*0x100e75de6*/
      v8 = *(const __m128i **)(v21 + 112); /*0x100e75dea*/
      _EBX = ~_mm_movemask_epi8(_mm_load_si128(v8)); /*0x100e75df8*/
      v10 = v8 + 1; /*0x100e75dfa*/
      do /*0x100e75e4e*/
      {
        if ( !(_WORD)_EBX ) /*0x100e75e03*/
        {
          do /*0x100e75e2b*/
          {
            v11 = _mm_movemask_epi8(_mm_load_si128(v10)); /*0x100e75e16*/
            v8 -= 72; /*0x100e75e1a*/
            ++v10; /*0x100e75e21*/
          }
          while ( v11 == 0xFFFF ); /*0x100e75e2b*/
          _EBX = ~v11; /*0x100e75e2d*/
        }
        __asm { tzcnt eax, ebx } /*0x100e75e2f*/
        core::ptr::drop_in_place$LT$$LP$tauri..event..event_name..EventName$C$std..collections..hash..map..HashMap$LT$u32$C$tauri..event..listener..Handler$GT$$RP$$GT$::haa1b97ba1d228be1((char *)&v8[-4] - 72 * _RAX - 8); /*0x100e75e3f*/
        _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x100e75e47*/
        _EBX &= _EBX - 1; /*0x100e75e49*/
        --v6; /*0x100e75e4b*/
      }
      while ( v6 ); /*0x100e75e4e*/
    }
    v1 = v21; /*0x100e75e67*/
    if ( ((72 * v5 + 87) & 0xFFFFFFFFFFFFFFF0LL) + v5 != -17 ) /*0x100e75e6b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e75e7c*/
  }
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)(v1 + 160)); /*0x100e75e8b*/
  v12 = *(pthread_mutex_t **)(v1 + 160); /*0x100e75e90*/
  *(_QWORD *)(v1 + 160) = 0; /*0x100e75e94*/
  if ( v12 ) /*0x100e75e9f*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v12); /*0x100e75ea4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e75eb6*/
  }
  v13 = *(_QWORD *)(v1 + 184); /*0x100e75ebb*/
  if ( v13 ) /*0x100e75ec5*/
  {
    v14 = *(_QWORD *)(v1 + 200); /*0x100e75ecb*/
    if ( v14 ) /*0x100e75ed5*/
    {
      HIDWORD(_RAX) = HIDWORD(v21); /*0x100e75ed7*/
      v16 = *(const __m128i **)(v21 + 176); /*0x100e75edb*/
      _EBX = ~_mm_movemask_epi8(_mm_load_si128(v16)); /*0x100e75eec*/
      v18 = v16 + 1; /*0x100e75eee*/
      do /*0x100e75f4e*/
      {
        if ( !(_WORD)_EBX ) /*0x100e75f03*/
        {
          do /*0x100e75f2b*/
          {
            v19 = _mm_movemask_epi8(_mm_load_si128(v18)); /*0x100e75f16*/
            v16 -= 72; /*0x100e75f1a*/
            ++v18; /*0x100e75f21*/
          }
          while ( v19 == 0xFFFF ); /*0x100e75f2b*/
          _EBX = ~v19; /*0x100e75f2d*/
        }
        __asm { tzcnt eax, ebx } /*0x100e75f2f*/
        core::ptr::drop_in_place$LT$$LP$alloc..string..String$C$std..collections..hash..map..HashMap$LT$tauri..event..event_name..EventName$C$std..collections..hash..set..HashSet$LT$tauri..event..listener..JsHandler$GT$$GT$$RP$$GT$::hab70b9d7a870a6af((char *)&v16[-4] - 72 * _RAX - 8); /*0x100e75f3f*/
        _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x100e75f47*/
        _EBX &= _EBX - 1; /*0x100e75f49*/
        --v14; /*0x100e75f4b*/
      }
      while ( v14 ); /*0x100e75f4e*/
    }
    v1 = v21; /*0x100e75f67*/
    if ( ((72 * v13 + 87) & 0xFFFFFFFFFFFFFFF0LL) + v13 != -17 ) /*0x100e75f6b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e75f7f*/
  }
  result = *(volatile signed __int64 **)(v1 + 48); /*0x100e75f84*/
  if ( !_InterlockedDecrement64(result) ) /*0x100e75f88*/
    result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21((__int64 *)(v1 + 48)); /*0x100e75f92*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100e75f9d*/
    return (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e75fbf*/
  return result; /*0x100e75fb5*/
}