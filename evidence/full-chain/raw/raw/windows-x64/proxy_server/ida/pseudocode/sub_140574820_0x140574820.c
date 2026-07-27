// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140574820
// name: sub_140574820
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140574820(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx
  const __m128i *v5; // r14
  const __m128i *v6; // r15
  __m128i si128; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 32);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v2 + 48);
    if ( v4 )
    {
      v5 = *(const __m128i **)(v2 + 24);
      v6 = v5 + 1;
      _R12D = ~_mm_movemask_epi8(_mm_load_si128(v5));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            si128 = _mm_load_si128(v6);
            v5 -= 40;
            ++v6;
            _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v9 = -5 * _RAX;
        v10 = *((_QWORD *)&v5[-2] + v9 - 1);
        if ( v10 )
          sub_140001660(v5[-2].m128i_i64[v9], v10, 1);
        --v4;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v4 );
    }
    v11 = (40 * v3 + 55) & 0xFFFFFFFFFFFFFFF0uLL;
    v12 = v11 + v3 + 17;
    if ( v12 )
      sub_140001660(*(_QWORD *)(v2 + 24) - v11, v12, 16);
  }
  if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) )
    sub_140001660(v2, 72, 8);
}