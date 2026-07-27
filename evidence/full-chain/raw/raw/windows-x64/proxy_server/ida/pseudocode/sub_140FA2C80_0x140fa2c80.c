// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140fa2c80
// name: sub_140FA2C80
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140FA2C80(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rdi
  const __m128i *v5; // rbx
  const __m128i *v6; // r14
  __m128i si128; // xmm0
  __int64 v9; // rax
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  const __m128i *v17; // rbx
  const __m128i *v18; // r14
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 result; // rax
  _QWORD *v25; // [rsp+20h] [rbp-10h]
  __int64 v26; // [rsp+28h] [rbp-8h]

  v1 = *a1;
  v25 = (_QWORD *)(*a1 + 16);
  v2 = *(_QWORD *)(*a1 + 56);
  v26 = *a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v1 + 72);
    if ( v3 )
    {
      HIDWORD(_RAX) = HIDWORD(*a1);
      v5 = *(const __m128i **)(v26 + 48);
      v6 = v5 + 1;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v5));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v6);
            v5 -= 368;
            ++v6;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        sub_1405E98A0((__int64)v5[-23 * _RAX - 23].m128i_i64);
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
        --v3;
      }
      while ( v3 );
    }
    v9 = 368 * v2;
    v10 = 369 * v2;
    v11 = v10 == -385;
    v12 = v10 + 385;
    v1 = v26;
    if ( !v11 )
      sub_140001660(*(_QWORD *)(v26 + 48) - v9 - 368, v12, 16);
  }
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 96)) )
    sub_140FA3000(v26 + 96);
  v13 = v26;
  v14 = *(_QWORD *)(v26 + 120);
  if ( v14 )
  {
    v15 = *(_QWORD *)(v26 + 136);
    if ( v15 )
    {
      HIDWORD(_RAX) = HIDWORD(v26);
      v17 = *(const __m128i **)(v26 + 112);
      v18 = v17 + 1;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v17));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v20 = _mm_load_si128(v18);
            v17 -= 368;
            ++v18;
            _R15D = _mm_movemask_epi8(v20) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        sub_1405E98A0((__int64)v17[-23 * _RAX - 23].m128i_i64);
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
        --v15;
      }
      while ( v15 );
    }
    v21 = 368 * v14;
    v22 = 369 * v14;
    v11 = v22 == -385;
    v23 = v22 + 385;
    v13 = v26;
    if ( !v11 )
      sub_140001660(*(_QWORD *)(v26 + 112) - v21 - 368, v23, 16);
  }
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v13 + 160)) )
    sub_140FA3000(v26 + 160);
  result = sub_14043BD60(v25);
  if ( v26 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v26 + 8)) )
    return sub_140001660(v26, 184, 8);
  return result;
}