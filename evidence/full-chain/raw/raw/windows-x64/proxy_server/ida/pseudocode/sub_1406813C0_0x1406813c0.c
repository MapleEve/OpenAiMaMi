// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1406813c0
// name: sub_1406813C0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1406813C0(const __m128i **a1)
{
  const __m128i *v2; // rsi
  const __m128i *v4; // rbx
  const __m128i *v5; // r14
  const __m128i *v6; // r15
  __m128i si128; // xmm0
  const __m128i *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi

  v2 = a1[1];
  if ( v2 )
  {
    v4 = a1[3];
    if ( v4 )
    {
      v5 = *a1;
      v6 = *a1 + 1;
      _R12D = ~_mm_movemask_epi8(_mm_load_si128(*a1));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            si128 = _mm_load_si128(v6);
            v5 -= 112;
            ++v6;
            _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v9 = &v5[-7 * _RAX];
        v10 = v9[-7].m128i_i64[1];
        if ( v10 )
          sub_140001660(v9[-6].m128i_i64[0], v10, 1);
        v11 = v9[-5].m128i_i64[0];
        if ( v11 )
          sub_140001660(v9[-5].m128i_i64[1], v11, 1);
        v12 = v9[-4].m128i_i64[1];
        if ( v12 )
          sub_140001660(v9[-3].m128i_i64[0], v12, 1);
        v13 = v9[-2].m128i_i64[0];
        if ( v13 )
          sub_140001660(v9[-2].m128i_i64[1], v13, 1);
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
        v4 = (const __m128i *)((char *)v4 - 1);
      }
      while ( v4 );
    }
    v14 = 112LL * (_QWORD)v2;
    v15 = 113LL * (_QWORD)v2 + 129;
    if ( v15 )
      sub_140001660(&(*a1)[v14 / 0xFFFFFFFFFFFFFFF0uLL - 7], v15, 16);
  }
}