// win 1.1.8 set_codex_router_no_account_mode node va=0x140419560 depth=1
// sub_140419560
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

  v26 = -2; /*0x14041956d*/
  v3 = Address; /*0x140419575*/
  LOBYTE(Address) = 1; /*0x140419578*/
  if ( _InterlockedCompareExchange8(v3, 1, 0) ) /*0x14041957c*/
    sub_1412ABCB0(v3); /*0x1404196c8*/
  v4 = off_141963EA8; /*0x140419586*/
  if ( !(2 * *off_141963EA8) ) /*0x140419590*/
  {
    v5 = 0; /*0x14041959c*/
    v6 = (unsigned __int8)v3[1]; /*0x14041959e*/
    if ( !(_BYTE)v6 ) /*0x1404195a4*/
      goto LABEL_5; /*0x1404195a4*/
LABEL_21:
    v22 = v3; /*0x1404196e5*/
    v23 = v5; /*0x1404196e9*/
    sub_1412AD780( /*0x14041970f*/
      (unsigned int)aCalledResultUn_6,
      43,
      (unsigned int)&v22,
      (unsigned int)&off_14133D478,
      (__int64)&off_14133E728);
  }
  v5 = sub_1412AC970(Address, a2); /*0x1404196d2*/
  LOBYTE(v5) = v5 ^ 1; /*0x1404196d7*/
  v6 = (unsigned __int8)v3[1]; /*0x1404196d9*/
  if ( (_BYTE)v6 ) /*0x1404196df*/
    goto LABEL_21; /*0x1404196df*/
LABEL_5:
  if ( *((_QWORD *)v3 + 4) ) /*0x1404195aa*/
  {
    v7 = *((_QWORD *)v3 + 1); /*0x1404195b5*/
    v6 = *((_QWORD *)v3 + 2); /*0x1404195b9*/
    v8 = 0xC1898E9841CC8BA5uLL; /*0x1404195bd*/
    v9 = 0; /*0x1404195c7*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_14133A010); /*0x1404195ca*/
    v11 = _mm_load_si128((const __m128i *)&xmmword_14133A020); /*0x1404195d6*/
    while ( 1 ) /*0x1404195de*/
    {
      a2 = v6 & v8; /*0x1404195de*/
      v12 = _mm_loadu_si128((const __m128i *)(v7 + a2)); /*0x1404195e1*/
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v12, si128)); /*0x1404195ee*/
      if ( _R9D ) /*0x1404195f6*/
        break; /*0x1404195f6*/
LABEL_10:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v12, (__m128i)-1LL)) ) /*0x140419644*/
        goto LABEL_12; /*0x14041964c*/
      v8 = v9 + a2 + 16; /*0x140419651*/
      v9 += 16; /*0x140419655*/
    }
    while ( 1 ) /*0x1404195f8*/
    {
      __asm { tzcnt r11d, r9d } /*0x1404195f8*/
      v14 = v7 - 32 * (v6 & (a2 + _R11)); /*0x14041960a*/
      _R11 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v14 - 32)), v11)); /*0x140419617*/
      if ( (_DWORD)_R11 == 0xFFFF ) /*0x140419623*/
        break; /*0x140419623*/
      v15 = _R9D - 1; /*0x140419625*/
      LOWORD(v15) = _R9D & (_R9D - 1); /*0x140419629*/
      _R9D = v15; /*0x14041962d*/
      if ( !(_WORD)v15 ) /*0x140419630*/
        goto LABEL_10; /*0x140419630*/
    }
    v25 = v5; /*0x140419684*/
    v24 = v3; /*0x140419687*/
    v16 = *(_QWORD *)(v14 - 16); /*0x14041968b*/
    (*(void (__fastcall **)(char **, __int64, __int64))(*(_QWORD *)(v14 - 8) + 24LL))(&v22, v16, v9); /*0x14041969a*/
    if ( !(_BYTE)v25 && 2 * *v4 && !(unsigned __int8)sub_1412AC970(v20, v19) ) /*0x14041972d*/
      v24[1] = 1; /*0x14041973e*/
    v3 = v24; /*0x1404196b1*/
    v21 = *v24; /*0x1404196b5*/
    *v24 = 0; /*0x1404196b5*/
    if ( v21 == 2 ) /*0x1404196b9*/
      goto LABEL_19; /*0x1404196b9*/
  }
  else
  {
LABEL_12:
    if ( !(_BYTE)v5 && 2 * *v4 && !(unsigned __int8)sub_1412AC970(v6, a2) ) /*0x140419717*/
      v3[1] = 1; /*0x140419724*/
    v16 = 0; /*0x14041966e*/
    v17 = *v3; /*0x140419672*/
    *v3 = 0; /*0x140419672*/
    if ( v17 == 2 ) /*0x140419676*/
LABEL_19:
      WakeByAddressSingle(v3); /*0x1404196bb*/
  }
  return v16; /*0x14041967b*/
}