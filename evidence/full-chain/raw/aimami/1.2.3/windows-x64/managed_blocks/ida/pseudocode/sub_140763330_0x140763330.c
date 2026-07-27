// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x140763330
// name: sub_140763330
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140763330(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  char result; // al
  unsigned __int64 v7; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  __m128i v11; // xmm0
  __m128i v12; // xmm6
  __int64 i; // r15
  unsigned __int64 v14; // rax
  __m128i v15; // xmm8
  unsigned __int64 v17; // r13
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rcx
  bool v22; // al

  if ( a2 == 22 )
  {
    if ( _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1417864C0),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a1 + 6)), (__m128i)xmmword_1417864B0))) != 0xFFFF )
      goto LABEL_13;
    return 1;
  }
  if ( a2 == 14 )
  {
    if ( *(_QWORD *)a1 ^ 0x622D69616E65706FLL | *(_QWORD *)(a1 + 6) ^ 0x64656C646E75622DLL )
      goto LABEL_13;
    return 1;
  }
  if ( a2 != 6 )
    goto LABEL_13;
  if ( (*(_BYTE *)a1 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)a1 - 65) < 0x1Au))) != 111
    || (*(_BYTE *)(a1 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 1) - 65) < 0x1Au))) != 112
    || (*(_BYTE *)(a1 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 2) - 65) < 0x1Au))) != 101
    || (*(_BYTE *)(a1 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 3) - 65) < 0x1Au))) != 110
    || (*(_BYTE *)(a1 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 4) - 65) < 0x1Au))) != 97
    || (result = 1,
        (*(_BYTE *)(a1 + 5) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 5) - 65) < 0x1Au))) != 105) )
  {
    if ( !(*(_DWORD *)a1 ^ 0x616D6961 | *(unsigned __int16 *)(a1 + 4) ^ 0x3169) )
      return 1;
LABEL_13:
    if ( !a3[3] )
      return 0;
    v7 = sub_1403795A0(a3 + 4, a1, a2);
    _RCX = v7 >> 57;
    v9 = *a3;
    v10 = a3[1];
    v11 = _mm_cvtsi32_si128(v7 >> 57);
    v12 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v11, v11), 0), 68);
    for ( i = 0; ; i += 16 )
    {
      v14 = v10 & v7;
      v15 = _mm_loadu_si128((const __m128i *)(v9 + v14));
      _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v12));
      if ( _R12D )
        break;
LABEL_19:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v15, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        return 0;
      v7 = i + v14 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   ecx, r12d }
      v17 = v14;
      _RCX = -(__int64)(v10 & (v14 + _RCX));
      if ( a2 == *(_QWORD *)(v9 + 24 * _RCX - 8)
        && !(unsigned int)sub_1416847B0(a1, *(_QWORD *)(v9 + 24 * _RCX - 16), a2) )
      {
        break;
      }
      v18 = _R12D - 1;
      LOWORD(v18) = _R12D & (_R12D - 1);
      v19 = (_WORD)v18 == 0;
      _R12D = v18;
      v14 = v17;
      if ( v19 )
        goto LABEL_19;
    }
    if ( a2 == 12 )
    {
      v20 = *(_QWORD *)a1 ^ 0x725F696D616D6961LL;
      v21 = *(_DWORD *)(a1 + 8) ^ 0x79616C65u;
    }
    else
    {
      if ( a2 <= 0xC )
      {
        v22 = 0;
        return !v22;
      }
      v20 = *(_QWORD *)a1 ^ 0x725F696D616D6961LL;
      v21 = *(_QWORD *)(a1 + 5) ^ 0x5F79616C65725F69LL;
    }
    v22 = (v20 | v21) == 0;
    return !v22;
  }
  return result;
}