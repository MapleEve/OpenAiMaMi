// win 1.2.7 | module src/core/sessions/health.rs | ea 0x14036b560 | name sub_14036B560
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14036B560(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebp
  __int64 v4; // rbx
  const __m128i *v5; // r14
  __m128i si128; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v3 = *(unsigned __int16 *)(a1 + 48);
    v4 = *(_QWORD *)(a1 + 24);
    v5 = *(const __m128i **)(a1 + 32);
    do
    {
      if ( !(_WORD)v3 )
      {
        do
        {
          si128 = _mm_load_si128(v5);
          v4 -= 384;
          ++v5;
          v3 = _mm_movemask_epi8(si128) ^ 0xFFFF;
        }
        while ( !v3 );
        *(_QWORD *)(a1 + 32) = v5;
        *(_QWORD *)(a1 + 24) = v4;
      }
      _RAX = v3;
      v3 &= v3 - 1;
      *(_WORD *)(a1 + 48) = v3;
      *(_QWORD *)(a1 + 56) = --v2;
      __asm { tzcnt   eax, eax }
      v8 = -3 * _RAX;
      v9 = *(_QWORD *)(v4 + 8 * v8 - 24);
      if ( v9 )
        sub_140001660(*(_QWORD *)(v4 + 8 * v8 - 16), v9, 1);
    }
    while ( v2 );
  }
  if ( *(_QWORD *)a1 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( v10 )
      sub_140001660(*(_QWORD *)(a1 + 16), v10, *(_QWORD *)a1);
  }
}
