// win 1.1.8 delete_sessions node va=0x140419310 depth=1
// sub_140419310
__int64 __fastcall sub_140419310(char *Address, __int64 a2)
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

  v26 = -2; /*0x14041931d*/
  v3 = Address; /*0x140419325*/
  LOBYTE(Address) = 1; /*0x140419328*/
  if ( _InterlockedCompareExchange8(v3, 1, 0) ) /*0x14041932c*/
    sub_1412ABCB0(v3); /*0x140419478*/
  v4 = off_141963EA8; /*0x140419336*/
  if ( !(2 * *off_141963EA8) ) /*0x140419340*/
  {
    v5 = 0; /*0x14041934c*/
    v6 = (unsigned __int8)v3[1]; /*0x14041934e*/
    if ( !(_BYTE)v6 ) /*0x140419354*/
      goto LABEL_5; /*0x140419354*/
LABEL_21:
    v22 = v3; /*0x140419495*/
    v23 = v5; /*0x140419499*/
    sub_1412AD780((__int64)aCalledResultUn_6, 43, (__int64)&v22, (__int64)&off_14133D478, (__int64)&off_14133E728); /*0x1404194bf*/
  }
  v5 = sub_1412AC970(Address, a2); /*0x140419482*/
  LOBYTE(v5) = v5 ^ 1; /*0x140419487*/
  v6 = (unsigned __int8)v3[1]; /*0x140419489*/
  if ( (_BYTE)v6 ) /*0x14041948f*/
    goto LABEL_21; /*0x14041948f*/
LABEL_5:
  if ( *((_QWORD *)v3 + 4) ) /*0x14041935a*/
  {
    v7 = *((_QWORD *)v3 + 1); /*0x140419365*/
    v6 = *((_QWORD *)v3 + 2); /*0x140419369*/
    v8 = 0xE90EFDA467F175EAuLL; /*0x14041936d*/
    v9 = 0; /*0x140419377*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_14133A030); /*0x14041937a*/
    v11 = _mm_load_si128((const __m128i *)&xmmword_14133A040); /*0x140419386*/
    while ( 1 ) /*0x14041938e*/
    {
      a2 = v6 & v8; /*0x14041938e*/
      v12 = _mm_loadu_si128((const __m128i *)(v7 + a2)); /*0x140419391*/
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v12, si128)); /*0x14041939e*/
      if ( _R9D ) /*0x1404193a6*/
        break; /*0x1404193a6*/
LABEL_10:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v12, (__m128i)-1LL)) ) /*0x1404193f4*/
        goto LABEL_12; /*0x1404193fc*/
      v8 = v9 + a2 + 16; /*0x140419401*/
      v9 += 16; /*0x140419405*/
    }
    while ( 1 ) /*0x1404193a8*/
    {
      __asm { tzcnt r11d, r9d } /*0x1404193a8*/
      v14 = v7 - 32 * (v6 & (a2 + _R11)); /*0x1404193ba*/
      _R11 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v14 - 32)), v11)); /*0x1404193c7*/
      if ( (_DWORD)_R11 == 0xFFFF ) /*0x1404193d3*/
        break; /*0x1404193d3*/
      v15 = _R9D - 1; /*0x1404193d5*/
      LOWORD(v15) = _R9D & (_R9D - 1); /*0x1404193d9*/
      _R9D = v15; /*0x1404193dd*/
      if ( !(_WORD)v15 ) /*0x1404193e0*/
        goto LABEL_10; /*0x1404193e0*/
    }
    v25 = v5; /*0x140419434*/
    v24 = v3; /*0x140419437*/
    v16 = *(_QWORD *)(v14 - 16); /*0x14041943b*/
    (*(void (__fastcall **)(char **, __int64, __int64))(*(_QWORD *)(v14 - 8) + 24LL))(&v22, v16, v9); /*0x14041944a*/
    if ( !(_BYTE)v25 && 2 * *v4 && !(unsigned __int8)sub_1412AC970(v20, v19) ) /*0x1404194dd*/
      v24[1] = 1; /*0x1404194ee*/
    v3 = v24; /*0x140419461*/
    v21 = *v24; /*0x140419465*/
    *v24 = 0; /*0x140419465*/
    if ( v21 == 2 ) /*0x140419469*/
      goto LABEL_19; /*0x140419469*/
  }
  else
  {
LABEL_12:
    if ( !(_BYTE)v5 && 2 * *v4 && !(unsigned __int8)sub_1412AC970(v6, a2) ) /*0x1404194c7*/
      v3[1] = 1; /*0x1404194d4*/
    v16 = 0; /*0x14041941e*/
    v17 = *v3; /*0x140419422*/
    *v3 = 0; /*0x140419422*/
    if ( v17 == 2 ) /*0x140419426*/
LABEL_19:
      WakeByAddressSingle(v3); /*0x14041946b*/
  }
  return v16; /*0x14041942b*/
}