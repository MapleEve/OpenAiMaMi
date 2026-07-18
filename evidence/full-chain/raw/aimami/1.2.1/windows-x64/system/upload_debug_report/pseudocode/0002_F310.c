// win 1.2.1 NEW upload_debug_report 0x14029f310 d=1
__int64 __fastcall sub_14029F310(_QWORD *Address)
{
  _QWORD *v2; // rbx
  __int64 *v3; // rdi
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __m128i si128; // xmm0
  __m128i v10; // xmm2
  __int64 v11; // rdx
  __m128i v12; // xmm3
  __int64 v14; // r10
  int v15; // r10d
  __int64 v16; // rsi
  char v17; // al
  char v19; // al
  _QWORD *v20; // [rsp+30h] [rbp-20h] BYREF
  char v21; // [rsp+38h] [rbp-18h]
  _BYTE *v22; // [rsp+40h] [rbp-10h]
  int v23; // [rsp+4Ch] [rbp-4h]
  __int64 v24; // [rsp+50h] [rbp+0h]

  v24 = -2; /*0x14029f31d*/
  v2 = Address; /*0x14029f325*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)Address, 1, 0) ) /*0x14029f32c*/
    sub_1415EF110(Address); /*0x14029f478*/
  v3 = off_141DC2000; /*0x14029f336*/
  if ( !(2 * *off_141DC2000) ) /*0x14029f340*/
  {
    v4 = 0; /*0x14029f34c*/
    if ( !*((_BYTE *)v2 + 1) ) /*0x14029f34e*/
      goto LABEL_5; /*0x14029f354*/
LABEL_21:
    v20 = v2; /*0x14029f495*/
    v21 = v4; /*0x14029f499*/
    sub_1415F0BC0( /*0x14029f4bf*/
      (unsigned int)aCalledResultUn_3,
      43,
      (unsigned int)&v20,
      (unsigned int)&off_1416836C8,
      (__int64)&off_14167E2E0);
  }
  v4 = sub_1415EFDB0(); /*0x14029f482*/
  LOBYTE(v4) = v4 ^ 1; /*0x14029f487*/
  if ( *((_BYTE *)v2 + 1) ) /*0x14029f489*/
    goto LABEL_21; /*0x14029f48f*/
LABEL_5:
  if ( v2[4] ) /*0x14029f35a*/
  {
    v5 = v2[1]; /*0x14029f365*/
    v6 = v2[2]; /*0x14029f369*/
    v7 = 0x650B5F7949F527B3LL; /*0x14029f36d*/
    v8 = 0; /*0x14029f377*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_14167B8E0); /*0x14029f37a*/
    v10 = _mm_load_si128((const __m128i *)&xmmword_14167B8F0); /*0x14029f386*/
    while ( 1 ) /*0x14029f38e*/
    {
      v11 = v6 & v7; /*0x14029f38e*/
      v12 = _mm_loadu_si128((const __m128i *)(v5 + v11)); /*0x14029f391*/
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v12, si128)); /*0x14029f39e*/
      if ( _R9D ) /*0x14029f3a6*/
        break; /*0x14029f3a6*/
LABEL_10:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v12, (__m128i)-1LL)) ) /*0x14029f3f4*/
        goto LABEL_12; /*0x14029f3fc*/
      v7 = v8 + v11 + 16; /*0x14029f401*/
      v8 += 16; /*0x14029f405*/
    }
    while ( 1 ) /*0x14029f3a8*/
    {
      __asm { tzcnt r11d, r9d } /*0x14029f3a8*/
      v14 = v5 - 32 * (v6 & (v11 + _R11)); /*0x14029f3ba*/
      _R11 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v14 - 32)), v10)); /*0x14029f3c7*/
      if ( (_DWORD)_R11 == 0xFFFF ) /*0x14029f3d3*/
        break; /*0x14029f3d3*/
      v15 = _R9D - 1; /*0x14029f3d5*/
      LOWORD(v15) = _R9D & (_R9D - 1); /*0x14029f3d9*/
      _R9D = v15; /*0x14029f3dd*/
      if ( !(_WORD)v15 ) /*0x14029f3e0*/
        goto LABEL_10; /*0x14029f3e0*/
    }
    v23 = v4; /*0x14029f434*/
    v22 = v2; /*0x14029f437*/
    v16 = *(_QWORD *)(v14 - 16); /*0x14029f43b*/
    (*(void (__fastcall **)(_QWORD **, __int64, __int64))(*(_QWORD *)(v14 - 8) + 24LL))(&v20, v16, v8); /*0x14029f44a*/
    if ( !(_BYTE)v23 && 2 * *v3 && !(unsigned __int8)sub_1415EFDB0() ) /*0x14029f4dd*/
      v22[1] = 1; /*0x14029f4ee*/
    v2 = v22; /*0x14029f461*/
    v19 = *v22; /*0x14029f465*/
    *v22 = 0; /*0x14029f465*/
    if ( v19 == 2 ) /*0x14029f469*/
      goto LABEL_19; /*0x14029f469*/
  }
  else
  {
LABEL_12:
    if ( !(_BYTE)v4 && 2 * *v3 && !(unsigned __int8)sub_1415EFDB0() ) /*0x14029f4c7*/
      *((_BYTE *)v2 + 1) = 1; /*0x14029f4d4*/
    v16 = 0; /*0x14029f41e*/
    v17 = *(_BYTE *)v2; /*0x14029f422*/
    *(_BYTE *)v2 = 0; /*0x14029f422*/
    if ( v17 == 2 ) /*0x14029f426*/
LABEL_19:
      WakeByAddressSingle(v2); /*0x14029f46b*/
  }
  return v16; /*0x14029f42b*/
}