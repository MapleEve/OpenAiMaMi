// module: codexmate_lib/core/sessions
// addr: 0x14074e1a0
// name: sub_14074E1A0
// win 1.2.1 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14074E1A0(unsigned __int64 _RCX, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  __m128i v13; // xmm0
  __m128i v14; // xmm6
  __int64 i; // r12
  unsigned __int64 v16; // rax
  __m128i v17; // xmm8
  unsigned __int64 v19; // rbp
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v25; // rcx
  __int64 v26; // rax

  v6 = (__int64 *)_RCX;
  if ( a2[3] )
  {
    v7 = a4;
    v10 = sub_1403795A0(a2 + 4, a3, a4);
    _RCX = v10 >> 57;
    v11 = *a2;
    v12 = a2[1];
    v13 = _mm_cvtsi32_si128(v10 >> 57);
    v14 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v13, v13), 0), 68);
    for ( i = 0; ; i += 16 )
    {
      v16 = v12 & v10;
      v17 = _mm_loadu_si128((const __m128i *)(v11 + v16));
      _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v17, v14));
      if ( _R13D )
        break;
LABEL_7:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v17, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        goto LABEL_9;
      v10 = i + v16 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   ecx, r13d }
      v19 = v16;
      _RCX = -(__int64)(v12 & (v16 + _RCX));
      if ( v7 == *(_QWORD *)(v11 + 24 * _RCX - 8)
        && !(unsigned int)sub_1416847B0(a3, *(_QWORD *)(v11 + 24 * _RCX - 16), v7) )
      {
        break;
      }
      v20 = _R13D - 1;
      LOWORD(v20) = _R13D & (_R13D - 1);
      v21 = (_WORD)v20 == 0;
      _R13D = v20;
      v16 = v19;
      if ( v21 )
        goto LABEL_7;
    }
    nullsub_1(_RCX);
    v26 = sub_140001650(v7, 1);
    if ( v26 )
    {
      v23 = v26;
      v25 = v26;
      a5 = a3;
      goto LABEL_13;
    }
LABEL_14:
    sub_1416C2D4B(1, v7);
  }
LABEL_9:
  v7 = a6;
  nullsub_1(_RCX);
  v22 = sub_140001650(a6, 1);
  if ( !v22 )
    goto LABEL_14;
  v23 = v22;
  v25 = v22;
LABEL_13:
  sub_141684120(v25, a5, v7);
  *v6 = v7;
  v6[1] = v23;
  v6[2] = v7;
}