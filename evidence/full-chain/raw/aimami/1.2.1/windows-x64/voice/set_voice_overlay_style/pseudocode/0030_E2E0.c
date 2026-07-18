// win 1.2.1 NEW set_voice_overlay_style 0x14029e2e0 d=2
__int64 __fastcall sub_14029E2E0(_QWORD *Address)
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

  v24 = -2; /*0x14029e2ed*/
  v2 = Address; /*0x14029e2f5*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)Address, 1, 0) ) /*0x14029e2fc*/
    sub_1415EF110(Address); /*0x14029e448*/
  v3 = off_141DC2000; /*0x14029e306*/
  if ( !(2 * *off_141DC2000) ) /*0x14029e310*/
  {
    v4 = 0; /*0x14029e31c*/
    if ( !*((_BYTE *)v2 + 1) ) /*0x14029e31e*/
      goto LABEL_5; /*0x14029e324*/
LABEL_21:
    v20 = v2; /*0x14029e465*/
    v21 = v4; /*0x14029e469*/
    sub_1415F0BC0( /*0x14029e48f*/
      (unsigned int)aCalledResultUn_3,
      43,
      (unsigned int)&v20,
      (unsigned int)&off_1416836C8,
      (__int64)&off_14167E2E0);
  }
  v4 = sub_1415EFDB0(); /*0x14029e452*/
  LOBYTE(v4) = v4 ^ 1; /*0x14029e457*/
  if ( *((_BYTE *)v2 + 1) ) /*0x14029e459*/
    goto LABEL_21; /*0x14029e45f*/
LABEL_5:
  if ( v2[4] ) /*0x14029e32a*/
  {
    v5 = v2[1]; /*0x14029e335*/
    v6 = v2[2]; /*0x14029e339*/
    v7 = 0xFEF51DEAD49E22CFuLL; /*0x14029e33d*/
    v8 = 0; /*0x14029e347*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_14167B800); /*0x14029e34a*/
    v10 = _mm_load_si128((const __m128i *)&xmmword_14167B810); /*0x14029e356*/
    while ( 1 ) /*0x14029e35e*/
    {
      v11 = v6 & v7; /*0x14029e35e*/
      v12 = _mm_loadu_si128((const __m128i *)(v5 + v11)); /*0x14029e361*/
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v12, si128)); /*0x14029e36e*/
      if ( _R9D ) /*0x14029e376*/
        break; /*0x14029e376*/
LABEL_10:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v12, (__m128i)-1LL)) ) /*0x14029e3c4*/
        goto LABEL_12; /*0x14029e3cc*/
      v7 = v8 + v11 + 16; /*0x14029e3d1*/
      v8 += 16; /*0x14029e3d5*/
    }
    while ( 1 ) /*0x14029e378*/
    {
      __asm { tzcnt r11d, r9d } /*0x14029e378*/
      v14 = v5 - 32 * (v6 & (v11 + _R11)); /*0x14029e38a*/
      _R11 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v14 - 32)), v10)); /*0x14029e397*/
      if ( (_DWORD)_R11 == 0xFFFF ) /*0x14029e3a3*/
        break; /*0x14029e3a3*/
      v15 = _R9D - 1; /*0x14029e3a5*/
      LOWORD(v15) = _R9D & (_R9D - 1); /*0x14029e3a9*/
      _R9D = v15; /*0x14029e3ad*/
      if ( !(_WORD)v15 ) /*0x14029e3b0*/
        goto LABEL_10; /*0x14029e3b0*/
    }
    v23 = v4; /*0x14029e404*/
    v22 = v2; /*0x14029e407*/
    v16 = *(_QWORD *)(v14 - 16); /*0x14029e40b*/
    (*(void (__fastcall **)(_QWORD **, __int64, __int64))(*(_QWORD *)(v14 - 8) + 24LL))(&v20, v16, v8); /*0x14029e41a*/
    if ( !(_BYTE)v23 && 2 * *v3 && !(unsigned __int8)sub_1415EFDB0() ) /*0x14029e4ad*/
      v22[1] = 1; /*0x14029e4be*/
    v2 = v22; /*0x14029e431*/
    v19 = *v22; /*0x14029e435*/
    *v22 = 0; /*0x14029e435*/
    if ( v19 == 2 ) /*0x14029e439*/
      goto LABEL_19; /*0x14029e439*/
  }
  else
  {
LABEL_12:
    if ( !(_BYTE)v4 && 2 * *v3 && !(unsigned __int8)sub_1415EFDB0() ) /*0x14029e497*/
      *((_BYTE *)v2 + 1) = 1; /*0x14029e4a4*/
    v16 = 0; /*0x14029e3ee*/
    v17 = *(_BYTE *)v2; /*0x14029e3f2*/
    *(_BYTE *)v2 = 0; /*0x14029e3f2*/
    if ( v17 == 2 ) /*0x14029e3f6*/
LABEL_19:
      WakeByAddressSingle(v2); /*0x14029e43b*/
  }
  return v16; /*0x14029e3fb*/
}