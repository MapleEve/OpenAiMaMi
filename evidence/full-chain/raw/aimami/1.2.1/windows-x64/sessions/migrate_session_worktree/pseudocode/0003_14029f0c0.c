// win 1.2.1 NEW migrate_session_worktree 0x14029f0c0 d=1
__int64 __fastcall sub_14029F0C0(_QWORD *Address)
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

  v24 = -2; /*0x14029f0cd*/
  v2 = Address; /*0x14029f0d5*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)Address, 1, 0) ) /*0x14029f0dc*/
    sub_1415EF110(Address); /*0x14029f228*/
  v3 = off_141DC2000; /*0x14029f0e6*/
  if ( !(2 * *off_141DC2000) ) /*0x14029f0f0*/
  {
    v4 = 0; /*0x14029f0fc*/
    if ( !*((_BYTE *)v2 + 1) ) /*0x14029f0fe*/
      goto LABEL_5; /*0x14029f104*/
LABEL_21:
    v20 = v2; /*0x14029f245*/
    v21 = v4; /*0x14029f249*/
    sub_1415F0BC0( /*0x14029f26f*/
      (unsigned int)aCalledResultUn_3,
      43,
      (unsigned int)&v20,
      (unsigned int)&off_1416836C8,
      (__int64)&off_14167E2E0);
  }
  v4 = sub_1415EFDB0(); /*0x14029f232*/
  LOBYTE(v4) = v4 ^ 1; /*0x14029f237*/
  if ( *((_BYTE *)v2 + 1) ) /*0x14029f239*/
    goto LABEL_21; /*0x14029f23f*/
LABEL_5:
  if ( v2[4] ) /*0x14029f10a*/
  {
    v5 = v2[1]; /*0x14029f115*/
    v6 = v2[2]; /*0x14029f119*/
    v7 = 0xCEAED2BA82109C9CuLL; /*0x14029f11d*/
    v8 = 0; /*0x14029f127*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_14167B8C0); /*0x14029f12a*/
    v10 = _mm_load_si128((const __m128i *)&xmmword_14167B8D0); /*0x14029f136*/
    while ( 1 ) /*0x14029f13e*/
    {
      v11 = v6 & v7; /*0x14029f13e*/
      v12 = _mm_loadu_si128((const __m128i *)(v5 + v11)); /*0x14029f141*/
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v12, si128)); /*0x14029f14e*/
      if ( _R9D ) /*0x14029f156*/
        break; /*0x14029f156*/
LABEL_10:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v12, (__m128i)-1LL)) ) /*0x14029f1a4*/
        goto LABEL_12; /*0x14029f1ac*/
      v7 = v8 + v11 + 16; /*0x14029f1b1*/
      v8 += 16; /*0x14029f1b5*/
    }
    while ( 1 ) /*0x14029f158*/
    {
      __asm { tzcnt r11d, r9d } /*0x14029f158*/
      v14 = v5 - 32 * (v6 & (v11 + _R11)); /*0x14029f16a*/
      _R11 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v14 - 32)), v10)); /*0x14029f177*/
      if ( (_DWORD)_R11 == 0xFFFF ) /*0x14029f183*/
        break; /*0x14029f183*/
      v15 = _R9D - 1; /*0x14029f185*/
      LOWORD(v15) = _R9D & (_R9D - 1); /*0x14029f189*/
      _R9D = v15; /*0x14029f18d*/
      if ( !(_WORD)v15 ) /*0x14029f190*/
        goto LABEL_10; /*0x14029f190*/
    }
    v23 = v4; /*0x14029f1e4*/
    v22 = v2; /*0x14029f1e7*/
    v16 = *(_QWORD *)(v14 - 16); /*0x14029f1eb*/
    (*(void (__fastcall **)(_QWORD **, __int64, __int64))(*(_QWORD *)(v14 - 8) + 24LL))(&v20, v16, v8); /*0x14029f1fa*/
    if ( !(_BYTE)v23 && 2 * *v3 && !(unsigned __int8)sub_1415EFDB0() ) /*0x14029f28d*/
      v22[1] = 1; /*0x14029f29e*/
    v2 = v22; /*0x14029f211*/
    v19 = *v22; /*0x14029f215*/
    *v22 = 0; /*0x14029f215*/
    if ( v19 == 2 ) /*0x14029f219*/
      goto LABEL_19; /*0x14029f219*/
  }
  else
  {
LABEL_12:
    if ( !(_BYTE)v4 && 2 * *v3 && !(unsigned __int8)sub_1415EFDB0() ) /*0x14029f277*/
      *((_BYTE *)v2 + 1) = 1; /*0x14029f284*/
    v16 = 0; /*0x14029f1ce*/
    v17 = *(_BYTE *)v2; /*0x14029f1d2*/
    *(_BYTE *)v2 = 0; /*0x14029f1d2*/
    if ( v17 == 2 ) /*0x14029f1d6*/
LABEL_19:
      WakeByAddressSingle(v2); /*0x14029f21b*/
  }
  return v16; /*0x14029f1db*/
}