// win 1.2.1 NEW set_voice_overlay_style 0x1403d7a60 d=2
__m128i *__fastcall sub_1403D7A60(__m128i *a1, __int64 a2)
{
  volatile signed __int64 *v2; // rax
  volatile signed __int64 *v5; // r14
  __int64 v6; // rt0
  int v7; // r15d
  volatile signed __int64 *v8; // rbx
  __int64 v9; // rt0
  char v10; // of
  volatile signed __int64 *v11; // r14
  __int64 v12; // rt0
  volatile signed __int64 *v13; // r15
  __int64 v14; // rt0
  volatile signed __int64 *v15; // r12
  __int64 v16; // rt0
  __int8 v17; // di
  _QWORD v19[22]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v20[8]; // [rsp+D8h] [rbp+58h] BYREF
  volatile signed __int64 *v21; // [rsp+160h] [rbp+E0h]
  int v22; // [rsp+168h] [rbp+E8h]
  __m128i v23; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v24; // [rsp+180h] [rbp+100h]
  volatile signed __int64 *v25; // [rsp+1F8h] [rbp+178h]
  volatile signed __int64 *v26; // [rsp+200h] [rbp+180h]
  __int64 v27; // [rsp+208h] [rbp+188h]

  v27 = -2; /*0x1403d7a79*/
  v2 = *(volatile signed __int64 **)(a2 + 328); /*0x1403d7a84*/
  if ( _InterlockedIncrement64(v2) <= 0 ) /*0x1403d7a8f*/
    goto LABEL_8; /*0x1403d7a8f*/
  v26 = v2; /*0x1403d7a9b*/
  v25 = v2; /*0x1403d7aa2*/
  sub_1413CB3E0(&v23, a2 + 152); /*0x1403d7ab7*/
  v5 = *(volatile signed __int64 **)(a2 + 136); /*0x1403d7abd*/
  v6 = _InterlockedIncrement64(v5); /*0x1403d7ac4*/
  if ( (v6 < 0) ^ v10 | (v6 == 0) ) /*0x1403d7ac8*/
    goto LABEL_8; /*0x1403d7ac8*/
  v7 = *(_DWORD *)(a2 + 144); /*0x1403d7ace*/
  sub_140498060(v20, a2); /*0x1403d7adf*/
  v21 = v5; /*0x1403d7ae4*/
  v22 = v7; /*0x1403d7aeb*/
  *(__m128i *)&v19[19] = v23; /*0x1403d7af9*/
  v19[21] = v24; /*0x1403d7b04*/
  sub_1415B2FE0((__m128i *)v19, v20, 0x98u); /*0x1403d7b15*/
  v8 = *(volatile signed __int64 **)(a2 + 336); /*0x1403d7b1a*/
  v9 = _InterlockedIncrement64(v8); /*0x1403d7b21*/
  if ( (v9 < 0) ^ v10 | (v9 == 0) ) /*0x1403d7b25*/
    goto LABEL_8; /*0x1403d7b25*/
  sub_1403D97B0(v20, a2 + 176); /*0x1403d7b36*/
  v11 = *(volatile signed __int64 **)(a2 + 312); /*0x1403d7b3b*/
  v12 = _InterlockedIncrement64(v11); /*0x1403d7b42*/
  if ( (v12 < 0) ^ v10 | (v12 == 0) /*0x1403d7b7f*/
    || (v13 = *(volatile signed __int64 **)(a2 + 320), v14 = _InterlockedIncrement64(v13), (v14 < 0) ^ v10 | (v14 == 0))
    || (sub_1415B2FE0(&v23, v20, 0x88u),
        v15 = *(volatile signed __int64 **)(a2 + 344),
        v16 = _InterlockedIncrement64(v15),
        (v16 < 0) ^ v10 | (v16 == 0)) )
  {
LABEL_8:
    BUG(); /*0x1403d7bf9*/
  }
  v17 = *(_BYTE *)(a2 + 352); /*0x1403d7b81*/
  a1[20].m128i_i64[1] = (__int64)v26; /*0x1403d7b8f*/
  sub_1415B2FE0(a1, (const __m128i *)v19, 0xB0u); /*0x1403d7ba3*/
  a1[21].m128i_i64[0] = (__int64)v8; /*0x1403d7ba8*/
  sub_1415B2FE0(a1 + 11, &v23, 0x88u); /*0x1403d7bc3*/
  a1[19].m128i_i64[1] = (__int64)v11; /*0x1403d7bc8*/
  a1[20].m128i_i64[0] = (__int64)v13; /*0x1403d7bcf*/
  a1[21].m128i_i64[1] = (__int64)v15; /*0x1403d7bd6*/
  a1[22].m128i_i8[0] = v17; /*0x1403d7bdd*/
  return a1; /*0x1403d7be7*/
}