// win 1.1.8 detect_api_proxy_config node va=0x140870b80 depth=2
// B80
__m128i *__fastcall sub_140870B80(__m128i *a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbx
  volatile signed __int64 *v5; // rax
  __int64 v6; // rt0
  int v7; // ebx
  volatile signed __int64 *v8; // rax
  __int64 v9; // rt0
  char v10; // of
  volatile signed __int64 *v11; // rbx
  __int64 v12; // rt0
  volatile signed __int64 *v13; // r14
  __int64 v14; // rt0
  volatile signed __int64 *v15; // r15
  __int64 v16; // rt0
  __int8 v17; // di
  __m128i v19[8]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v20[8]; // [rsp+B0h] [rbp+30h] BYREF
  volatile signed __int64 *v21; // [rsp+138h] [rbp+B8h]
  int v22; // [rsp+140h] [rbp+C0h]
  __m128i v23; // [rsp+148h] [rbp+C8h]
  __int64 v24; // [rsp+158h] [rbp+D8h]
  __m128i v25; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v26; // [rsp+170h] [rbp+F0h]
  volatile signed __int64 *v27; // [rsp+1E8h] [rbp+168h]
  volatile signed __int64 *v28; // [rsp+1F0h] [rbp+170h]
  volatile signed __int64 *v29; // [rsp+1F8h] [rbp+178h]
  volatile signed __int64 *v30; // [rsp+200h] [rbp+180h]
  volatile signed __int64 *v31; // [rsp+208h] [rbp+188h]
  __int64 v32; // [rsp+210h] [rbp+190h]

  v32 = -2; /*0x140870b97*/
  v2 = *(volatile signed __int64 **)(a2 + 328); /*0x140870ba2*/
  if ( _InterlockedIncrement64(v2) <= 0 ) /*0x140870bad*/
    goto LABEL_8; /*0x140870bad*/
  v27 = v2; /*0x140870bb9*/
  v29 = v2; /*0x140870bc7*/
  sub_14108F780(&v25); /*0x140870bd5*/
  v28 = v2; /*0x140870bdb*/
  v5 = *(volatile signed __int64 **)(a2 + 136); /*0x140870be2*/
  v6 = _InterlockedIncrement64(v5); /*0x140870be9*/
  if ( (v6 < 0) ^ v10 | (v6 == 0) ) /*0x140870bed*/
    goto LABEL_8; /*0x140870bed*/
  v31 = v5; /*0x140870bf3*/
  v30 = v5; /*0x140870bfa*/
  v7 = *(_DWORD *)(a2 + 144); /*0x140870c01*/
  sub_140103590(v19, a2); /*0x140870c0e*/
  sub_1412762D0(v20, v19, 0x88u); /*0x140870c22*/
  v23 = v25; /*0x140870c2e*/
  v24 = v26; /*0x140870c3c*/
  v21 = v31; /*0x140870c4a*/
  v22 = v7; /*0x140870c51*/
  v8 = *(volatile signed __int64 **)(a2 + 336); /*0x140870c57*/
  v9 = _InterlockedIncrement64(v8); /*0x140870c5e*/
  if ( (v9 < 0) ^ v10 | (v9 == 0) ) /*0x140870c62*/
    goto LABEL_8; /*0x140870c62*/
  v31 = v8; /*0x140870c68*/
  v30 = v8; /*0x140870c6f*/
  sub_140103590(v19, a2 + 176); /*0x140870c81*/
  v11 = *(volatile signed __int64 **)(a2 + 312); /*0x140870c87*/
  v12 = _InterlockedIncrement64(v11); /*0x140870c8e*/
  if ( (v12 < 0) ^ v10 | (v12 == 0) /*0x140870cca*/
    || (v13 = *(volatile signed __int64 **)(a2 + 320), v14 = _InterlockedIncrement64(v13), (v14 < 0) ^ v10 | (v14 == 0))
    || (sub_1412762D0(&v25, v19, 0x88u),
        v15 = *(volatile signed __int64 **)(a2 + 344),
        v16 = _InterlockedIncrement64(v15),
        (v16 < 0) ^ v10 | (v16 == 0)) )
  {
LABEL_8:
    BUG(); /*0x140870d49*/
  }
  v17 = *(_BYTE *)(a2 + 352); /*0x140870ccc*/
  a1[20].m128i_i64[1] = (__int64)v28; /*0x140870cda*/
  sub_1412762D0(a1, v20, 0xB0u); /*0x140870cee*/
  a1[21].m128i_i64[0] = (__int64)v31; /*0x140870cfa*/
  sub_1412762D0(a1 + 11, &v25, 0x88u); /*0x140870d15*/
  a1[19].m128i_i64[1] = (__int64)v11; /*0x140870d1a*/
  a1[20].m128i_i64[0] = (__int64)v13; /*0x140870d21*/
  a1[21].m128i_i64[1] = (__int64)v15; /*0x140870d28*/
  a1[22].m128i_i8[0] = v17; /*0x140870d2f*/
  return a1; /*0x140870d39*/
}