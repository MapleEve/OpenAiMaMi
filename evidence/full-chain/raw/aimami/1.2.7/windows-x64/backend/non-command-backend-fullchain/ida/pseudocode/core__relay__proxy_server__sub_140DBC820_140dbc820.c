// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140dbc820 | name sub_140DBC820
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140DBC820(unsigned __int64 _RCX, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 *v6; // r14
  char v7; // bp
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __m128i v11; // xmm0
  __m128i v12; // xmm6
  __int64 i; // rdx
  unsigned __int64 v14; // rax
  __m128i v15; // xmm8
  __int64 v17; // r14
  int v18; // eax
  bool v19; // zf
  char v20; // al
  __int64 v21; // [rsp+20h] [rbp-88h]
  unsigned __int64 v22; // [rsp+28h] [rbp-80h]

  v5 = *(_QWORD *)_RCX;
  LOBYTE(_RCX) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v5 + 16), 1, 0) )
    sub_141937480((volatile void *)(v5 + 16));
  v6 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v7 = sub_141938160(_RCX) ^ 1;
    if ( !*(_QWORD *)(v5 + 48) )
      goto LABEL_14;
  }
  else
  {
    v7 = 0;
    if ( !*(_QWORD *)(v5 + 48) )
      goto LABEL_14;
  }
  v8 = sub_140D2CC10(v5 + 56, a2, a3);
  _RCX = v8 >> 57;
  v9 = *(_QWORD *)(v5 + 24);
  v10 = *(_QWORD *)(v5 + 32);
  v11 = _mm_cvtsi32_si128(v8 >> 57);
  v12 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v11, v11), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    v14 = v10 & v8;
    v15 = _mm_loadu_si128((const __m128i *)(v9 + v14));
    _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v12));
    if ( _R13D )
      break;
LABEL_11:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v15, (__m128i)-1LL));
    if ( (_DWORD)_RCX )
      goto LABEL_14;
    v8 = i + v14 + 16;
  }
  v22 = v14;
  v21 = i;
  while ( 1 )
  {
    __asm { tzcnt   ecx, r13d }
    _RCX = -(__int64)(v10 & (v14 + _RCX));
    if ( a3 == *(_QWORD *)(v9 + 40 * _RCX - 24) )
    {
      v17 = v9 + 40 * _RCX;
      if ( !(unsigned int)sub_1418F4B70(a2, *(_QWORD *)(v17 - 32)) )
        break;
    }
    v18 = _R13D - 1;
    LOWORD(v18) = _R13D & (_R13D - 1);
    v19 = (_WORD)v18 == 0;
    _R13D = v18;
    v14 = v22;
    v6 = off_1421E7210;
    i = v21;
    if ( v19 )
      goto LABEL_11;
  }
  *(_DWORD *)(v17 - 8) = 0;
  *(_QWORD *)(v17 - 16) = 0;
  v6 = off_1421E7210;
LABEL_14:
  if ( !v7 && 2 * *v6 && !(unsigned __int8)sub_141938160(_RCX) )
    *(_BYTE *)(v5 + 17) = 1;
  v20 = *(_BYTE *)(v5 + 16);
  *(_BYTE *)(v5 + 16) = 0;
  if ( v20 == 2 )
    WakeByAddressSingle((PVOID)(v5 + 16));
}
