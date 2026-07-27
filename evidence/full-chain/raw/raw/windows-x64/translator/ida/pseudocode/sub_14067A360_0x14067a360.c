// module: codexmate_lib/core/relay/translator
// addr: 0x14067a360
// name: sub_14067A360
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_14067A360(__int64 _RCX, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // rbx
  const __m128i *v6; // r14
  __m128i si128; // xmm0
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  _OWORD *result; // rax
  __int128 v16; // xmm1

  v2 = _RCX;
  v3 = *(_QWORD *)(_RCX + 32);
  if ( v3 )
  {
    _R15D = *(unsigned __int16 *)(_RCX + 24);
    v5 = *(_QWORD *)_RCX;
    v6 = *(const __m128i **)(_RCX + 8);
    do
    {
      if ( !(_WORD)_R15D )
      {
        do
        {
          si128 = _mm_load_si128(v6);
          v5 -= 1792;
          ++v6;
          _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
        }
        while ( !_R15D );
        *(_QWORD *)(v2 + 8) = v6;
        *(_QWORD *)v2 = v5;
      }
      __asm { tzcnt   ecx, r15d }
      _R15D &= _R15D - 1;
      *(_WORD *)(v2 + 24) = _R15D;
      _RCX = -_RCX;
      v8 = v5 + 112 * _RCX;
      *(_QWORD *)(v2 + 32) = --v3;
      v9 = *(_QWORD *)(v8 - 104);
      if ( v9 )
        sub_140001660(*(_QWORD *)(v8 - 96), v9, 1);
      v10 = *(_QWORD *)(v8 - 80);
      if ( v10 )
        sub_140001660(*(_QWORD *)(v8 - 72), v10, 1);
      v11 = *(_QWORD *)(v8 - 56);
      if ( v11 )
        sub_140001660(*(_QWORD *)(v8 - 48), v11, 1);
      a2 = *(_QWORD *)(v8 - 32);
      if ( a2 )
        sub_140001660(*(_QWORD *)(v8 - 24), a2, 1);
    }
    while ( v3 );
  }
  v12 = (_QWORD *)(v2 + 40);
  v13 = *(_QWORD *)(v2 + 48);
  if ( v13 )
  {
    LOBYTE(a2) = -1;
    sub_1416848B0(*v12, a2, v13 + 17);
  }
  *(_QWORD *)(v2 + 64) = 0;
  v14 = ((v13 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v13 + 1) >> 3);
  if ( v13 < 8 )
    v14 = v13;
  *(_QWORD *)(v2 + 56) = v14;
  result = *(_OWORD **)(v2 + 72);
  v16 = *(_OWORD *)(v2 + 56);
  *result = *(_OWORD *)v12;
  result[1] = v16;
  return result;
}