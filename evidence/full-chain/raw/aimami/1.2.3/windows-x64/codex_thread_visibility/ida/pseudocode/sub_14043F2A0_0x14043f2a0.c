// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x14043f2a0
// name: sub_14043F2A0
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_14043F2A0(__int64 *a1)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  const __m128i *v5; // rbx
  const __m128i *v6; // r14
  __m128i si128; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx

  v3 = a1[4];
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = (const __m128i *)a1[3];
      v6 = v5 + 1;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v5));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v6);
            v5 -= 24;
            ++v6;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v9 = -3 * _RAX;
        v10 = *((_QWORD *)&v5[-1] + v9 - 1);
        if ( v10 )
          sub_140001660(v5[-1].m128i_i64[v9], v10, 1);
        --v4;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v4 );
    }
    v11 = (24 * v3 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v12 = v11 + v3 + 17;
    if ( v12 )
      sub_140001660(a1[3] - v11, v12, 16);
  }
  sub_14067EB80(a1 + 9);
  result = (__int64)a1;
  v14 = *a1;
  if ( *a1 != -1 )
  {
    if ( v14 )
      return sub_140001660(a1[1], v14, 1);
  }
  return result;
}