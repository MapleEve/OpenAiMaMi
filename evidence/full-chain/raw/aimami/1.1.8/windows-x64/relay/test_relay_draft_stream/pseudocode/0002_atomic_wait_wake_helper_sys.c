__int64 __fastcall sub_140419560(char *Address, __int64 a2)
{
  char *v3; // rbx
  __int64 *v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __m128i si128; // xmm0
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __int64 v14; // r10
  int v15; // r10d
  __int64 v16; // rsi
  char v17; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  char *v22; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+38h] [rbp-18h]
  char *v24; // [rsp+40h] [rbp-10h]
  int v25; // [rsp+4Ch] [rbp-4h]
  __int64 v26; // [rsp+50h] [rbp+0h]

  v26 = -2;
  v3 = Address;
  LOBYTE(Address) = 1;
  if ( _InterlockedCompareExchange8(v3, 1, 0) )
    sub_1412ABCB0(v3);
  v4 = off_141963EA8;
  if ( !(2 * *off_141963EA8) )
  {
    v5 = 0;
    v6 = (unsigned __int8)v3[1];
    if ( !(_BYTE)v6 )
      goto LABEL_5;
LABEL_21:
    v22 = v3;
    v23 = v5;
    sub_1412AD780(
      (unsigned int)aCalledResultUn_6,
      43,
      (unsigned int)&v22,
      (unsigned int)&off_14133D478,
      (__int64)&off_14133E728);
  }
  v5 = sub_1412AC970(Address, a2);
  LOBYTE(v5) = v5 ^ 1;
  v6 = (unsigned __int8)v3[1];
  if ( (_BYTE)v6 )
    goto LABEL_21;
LABEL_5:
  if ( *((_QWORD *)v3 + 4) )
  {
    v7 = *((_QWORD *)v3 + 1);
    v6 = *((_QWORD *)v3 + 2);
    v8 = 0xC1898E9841CC8BA5uLL;
    v9 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_14133A010);
    v11 = _mm_load_si128((const __m128i *)&xmmword_14133A020);
    while ( 1 )
    {
      a2 = v6 & v8;
      v12 = _mm_loadu_si128((const __m128i *)(v7 + a2));
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v12, si128));
      if ( _R9D )
        break;
LABEL_10:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v12, (__m128i)-1LL)) )
        goto LABEL_12;
      v8 = v9 + a2 + 16;
      v9 += 16;
    }
    while ( 1 )
    {
      __asm { tzcnt r11d, r9d }
      v14 = v7 - 32 * (v6 & (a2 + _R11));
      _R11 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v14 - 32)), v11));
      if ( (_DWORD)_R11 == 0xFFFF )
        break;
      v15 = _R9D - 1;
      LOWORD(v15) = _R9D & (_R9D - 1);
      _R9D = v15;
      if ( !(_WORD)v15 )
        goto LABEL_10;
    }
    v25 = v5;
    v24 = v3;
    v16 = *(_QWORD *)(v14 - 16);
    (*(void (__fastcall **)(char **, __int64, __int64))(*(_QWORD *)(v14 - 8) + 24LL))(&v22, v16, v9);
    if ( !(_BYTE)v25 && 2 * *v4 && !(unsigned __int8)sub_1412AC970(v20, v19) )
      v24[1] = 1;
    v3 = v24;
    v21 = *v24;
    *v24 = 0;
    if ( v21 == 2 )
      goto LABEL_19;
  }
  else
  {
LABEL_12:
    if ( !(_BYTE)v5 && 2 * *v4 && !(unsigned __int8)sub_1412AC970(v6, a2) )
      v3[1] = 1;
    v16 = 0;
    v17 = *v3;
    *v3 = 0;
    if ( v17 == 2 )
LABEL_19:
      WakeByAddressSingle(v3);
  }
  return v16;
}