// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x14067fec0
// name: sub_14067FEC0
// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14067FEC0(const __m128i **a1)
{
  const __m128i *v1; // rsi
  const __m128i *v3; // rbx
  const __m128i *v4; // r14
  const __m128i *v5; // r15
  __m128i si128; // xmm0
  __int8 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi

  v1 = a1[1];
  if ( v1 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      v4 = *a1;
      v5 = *a1 + 1;
      _R12D = ~_mm_movemask_epi8(_mm_load_si128(*a1));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            si128 = _mm_load_si128(v5);
            v4 -= 32;
            ++v5;
            _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   ecx, r12d }
        v9 = &v4->m128i_i8[-(32 * _ECX)];
        v10 = *((_QWORD *)v9 - 4);
        if ( v10 )
          sub_140001660(*((_QWORD *)v9 - 3), v10, 1);
        v3 = (const __m128i *)((char *)v3 - 1);
        _R12D &= _R12D - 1;
      }
      while ( v3 );
    }
    v11 = 32LL * (_QWORD)v1;
    v12 = 33LL * (_QWORD)v1 + 49;
    if ( v12 )
      sub_140001660(&(*a1)[v11 / 0xFFFFFFFFFFFFFFF0uLL - 2], v12, 16);
  }
}