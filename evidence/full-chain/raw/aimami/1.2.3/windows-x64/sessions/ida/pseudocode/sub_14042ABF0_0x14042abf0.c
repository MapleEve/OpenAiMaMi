// module: codexmate_lib/core/sessions
// addr: 0x14042abf0
// name: sub_14042ABF0
// win 1.2.1 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_14042ABF0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __m128i v10; // xmm0
  __m128i v11; // xmm6
  __int64 i; // r15
  unsigned __int64 v13; // rax
  __m128i v14; // xmm8
  unsigned __int64 v16; // r13
  char result; // al
  int v18; // eax
  bool v19; // zf

  if ( !a1[3] )
    return 0;
  v6 = sub_1403795A0(a1 + 4, a2, a3);
  _RCX = v6 >> 57;
  v8 = *a1;
  v9 = a1[1];
  v10 = _mm_cvtsi32_si128(v6 >> 57);
  v11 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v10, v10), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    v13 = v9 & v6;
    v14 = _mm_loadu_si128((const __m128i *)(v8 + v13));
    _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v14, v11));
    if ( _R12D )
      break;
LABEL_7:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v14, (__m128i)-1LL));
    if ( (_DWORD)_RCX )
      return 0;
    v6 = i + v13 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   ecx, r12d }
    v16 = v13;
    _RCX = -(__int64)(v9 & (v13 + _RCX));
    if ( a3 == *(_QWORD *)(v8 + 24 * _RCX - 8) )
    {
      _RCX = (unsigned int)sub_1416847B0(a2, *(_QWORD *)(v8 + 24 * _RCX - 16), a3);
      result = 1;
      if ( !(_DWORD)_RCX )
        return result;
    }
    v18 = _R12D - 1;
    LOWORD(v18) = _R12D & (_R12D - 1);
    v19 = (_WORD)v18 == 0;
    _R12D = v18;
    v13 = v16;
    if ( v19 )
      goto LABEL_7;
  }
}