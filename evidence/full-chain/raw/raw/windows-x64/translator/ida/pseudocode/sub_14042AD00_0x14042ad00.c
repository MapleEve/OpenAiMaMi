// module: codexmate_lib/core/relay/translator
// addr: 0x14042ad00
// name: sub_14042AD00
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14042AD00(const __m128i *a1, __int64 *a2)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __int64 v10; // r9
  __int64 i; // r10
  unsigned __int64 v12; // rax
  __m128i v13; // xmm2
  __int64 v15; // rsi
  __int64 v16; // rcx

  if ( a1[1].m128i_i64[1] )
  {
    v4 = sub_140378FA0(a1 + 2, a2);
    _RCX = v4 >> 57;
    v6 = a1->m128i_i64[0];
    v7 = a1->m128i_i64[1];
    v8 = _mm_cvtsi32_si128(v4 >> 57);
    v9 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v8, v8), 0), 68);
    v10 = *a2;
    for ( i = 0; ; i += 16 )
    {
      v12 = v7 & v4;
      v13 = _mm_loadu_si128((const __m128i *)(v6 + v12));
      _R11D = _mm_movemask_epi8(_mm_cmpeq_epi8(v13, v9));
      if ( _R11D )
        break;
LABEL_6:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v13, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        goto LABEL_8;
      v4 = i + v12 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   ecx, r11d }
      v16 = -(__int64)(v7 & (v12 + _RCX));
      v15 = 112 * v16;
      LOBYTE(v16) = 1;
      if ( v10 == *(_QWORD *)(v6 + v15 - 112) )
        break;
      _RCX = (unsigned int)(_R11D - 1);
      LOWORD(_RCX) = _R11D & (_R11D - 1);
      _R11D = _RCX;
      if ( !(_WORD)_RCX )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v16) = 0;
  }
  return (unsigned int)v16;
}