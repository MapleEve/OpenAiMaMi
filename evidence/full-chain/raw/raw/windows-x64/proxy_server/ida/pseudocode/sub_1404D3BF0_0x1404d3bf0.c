// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1404d3bf0
// name: sub_1404D3BF0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1404D3BF0(unsigned __int64 _RCX, __int64 i, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 *v6; // r14
  char v7; // bp
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __m128i v11; // xmm0
  __m128i v12; // xmm6
  unsigned __int64 v13; // rax
  __m128i v14; // xmm8
  __int64 v16; // r14
  int v17; // eax
  bool v18; // zf
  char v19; // al
  __int64 v20; // [rsp+20h] [rbp-88h]
  unsigned __int64 v21; // [rsp+28h] [rbp-80h]

  v4 = i;
  v5 = *(_QWORD *)_RCX;
  LOBYTE(_RCX) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v5 + 16), 1, 0) )
    sub_1416C15B0((volatile void *)(v5 + 16));
  v6 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v7 = sub_1416C2250(_RCX, i) ^ 1;
    if ( !*(_QWORD *)(v5 + 48) )
      goto LABEL_14;
  }
  else
  {
    v7 = 0;
    if ( !*(_QWORD *)(v5 + 48) )
      goto LABEL_14;
  }
  v8 = sub_1403795A0(v5 + 56, v4, a3);
  _RCX = v8 >> 57;
  v9 = *(_QWORD *)(v5 + 24);
  v10 = *(_QWORD *)(v5 + 32);
  v11 = _mm_cvtsi32_si128(v8 >> 57);
  v12 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v11, v11), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    v13 = v10 & v8;
    v14 = _mm_loadu_si128((const __m128i *)(v9 + v13));
    _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v14, v12));
    if ( _R13D )
      break;
LABEL_11:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v14, (__m128i)-1LL));
    if ( (_DWORD)_RCX )
      goto LABEL_14;
    v8 = i + v13 + 16;
  }
  v21 = v13;
  v20 = i;
  while ( 1 )
  {
    __asm { tzcnt   ecx, r13d }
    _RCX = -(__int64)(v10 & (v13 + _RCX));
    if ( a3 == *(_QWORD *)(v9 + 40 * _RCX - 24) )
    {
      v16 = v9 + 40 * _RCX;
      if ( !(unsigned int)sub_1416847B0(v4, *(_QWORD *)(v16 - 32), a3) )
        break;
    }
    v17 = _R13D - 1;
    LOWORD(v17) = _R13D & (_R13D - 1);
    v18 = (_WORD)v17 == 0;
    _R13D = v17;
    v13 = v21;
    v6 = off_141EC90B8;
    i = v20;
    if ( v18 )
      goto LABEL_11;
  }
  *(_DWORD *)(v16 - 8) = 0;
  *(_QWORD *)(v16 - 16) = 0;
  v6 = off_141EC90B8;
LABEL_14:
  if ( !v7 && 2 * *v6 && !(unsigned __int8)sub_1416C2250(_RCX, i) )
    *(_BYTE *)(v5 + 17) = 1;
  v19 = *(_BYTE *)(v5 + 16);
  *(_BYTE *)(v5 + 16) = 0;
  if ( v19 == 2 )
    WakeByAddressSingle((PVOID)(v5 + 16));
}