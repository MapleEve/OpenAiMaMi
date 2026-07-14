// win 1.1.8 detect_api_proxy_config node va=0x1407a7610 depth=1
// invoke_resolver_respond_sys
volatile signed __int64 *__fastcall invoke_resolver_respond_sys(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        int a6)
{
  __int64 v7; // rdi
  __int64 *v8; // rbx
  int v9; // eax
  __int64 v10; // r12
  __int64 v11; // r13
  __int128 v12; // xmm1
  void (__fastcall *v13)(__int64, __m128i *, __int128 *, _OWORD *, int, int); // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  char *v16; // rdi
  char v17; // al
  volatile signed __int64 *result; // rax
  _OWORD v19[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __m128i v21[22]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v22; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v23; // [rsp+1D0h] [rbp+150h]
  int v24; // [rsp+1D8h] [rbp+158h]
  int v25; // [rsp+1DCh] [rbp+15Ch]
  __int64 v26; // [rsp+1E0h] [rbp+160h]
  __int64 v27; // [rsp+1E8h] [rbp+168h]
  __int128 *v28; // [rsp+1F0h] [rbp+170h]
  const __m128i *v29; // [rsp+1F8h] [rbp+178h]
  __int64 v30; // [rsp+200h] [rbp+180h]
  __int64 v31; // [rsp+208h] [rbp+188h]
  volatile signed __int64 *v32; // [rsp+210h] [rbp+190h] BYREF
  int v33; // [rsp+218h] [rbp+198h]
  char v34; // [rsp+21Dh] [rbp+19Dh]
  char v35; // [rsp+21Eh] [rbp+19Eh]
  char v36; // [rsp+21Fh] [rbp+19Fh]
  __int64 v37; // [rsp+220h] [rbp+1A0h]

  v37 = -2; /*0x1407a762b*/
  v28 = a4; /*0x1407a7636*/
  v27 = a3; /*0x1407a763d*/
  v29 = a1; /*0x1407a7647*/
  v32 = (volatile signed __int64 *)a2; /*0x1407a764e*/
  v7 = a2 + 16; /*0x1407a7655*/
  LOBYTE(a1) = 1; /*0x1407a7659*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a2 + 16), 1, 0) ) /*0x1407a765d*/
  {
    v36 = 1; /*0x1407a77ce*/
    sub_1412ABCB0((volatile void *)(a2 + 16)); /*0x1407a77d8*/
  }
  v8 = off_141963EA8; /*0x1407a7668*/
  if ( !(2 * *off_141963EA8) ) /*0x1407a7672*/
  {
    v9 = 0; /*0x1407a767e*/
    if ( !*(_BYTE *)(a2 + 17) ) /*0x1407a7680*/
      goto LABEL_5; /*0x1407a7686*/
LABEL_16:
    *(_QWORD *)&v19[0] = v7; /*0x1407a77fe*/
    BYTE8(v19[0]) = v9; /*0x1407a7802*/
    sub_1412AD780( /*0x1407a7828*/
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)v19,
      (unsigned int)&off_1413581E0,
      (__int64)&off_141358280);
  }
  v36 = 1; /*0x1407a77e3*/
  v9 = sub_1412AC970(a1, a2); /*0x1407a77ea*/
  LOBYTE(v9) = v9 ^ 1; /*0x1407a77f0*/
  if ( *(_BYTE *)(a2 + 17) ) /*0x1407a77f2*/
    goto LABEL_16; /*0x1407a77f8*/
LABEL_5:
  v33 = v9; /*0x1407a768c*/
  v26 = v7; /*0x1407a7692*/
  v10 = *(_QWORD *)(a2 + 24); /*0x1407a7699*/
  v11 = *(_QWORD *)(a2 + 32); /*0x1407a769d*/
  *(_QWORD *)(a2 + 24) = 0; /*0x1407a76a1*/
  if ( !v10 ) /*0x1407a76ac*/
  {
    v35 = 1; /*0x1407a7830*/
    sub_1412AD720(aResolverConsum, 17, &off_1413582B0); /*0x1407a784a*/
  }
  sub_1412762D0(v21, v29, 0x168u); /*0x1407a76d4*/
  v22 = *v28; /*0x1407a76ea*/
  v23 = *((_QWORD *)v28 + 2); /*0x1407a76f5*/
  v12 = *(_OWORD *)(v27 + 16); /*0x1407a7706*/
  v19[0] = *(_OWORD *)v27; /*0x1407a770a*/
  v19[1] = v12; /*0x1407a770e*/
  v20 = *(_QWORD *)(v27 + 32); /*0x1407a7716*/
  v24 = a5; /*0x1407a771a*/
  v25 = a6; /*0x1407a7721*/
  v31 = v11; /*0x1407a7728*/
  v13 = *(void (__fastcall **)(__int64, __m128i *, __int128 *, _OWORD *, int, int))(v11 + 24); /*0x1407a772f*/
  v30 = v10; /*0x1407a7741*/
  v13(v10, v21, &v22, v19, a5, a6); /*0x1407a774e*/
  v15 = *(_QWORD *)(v31 + 8); /*0x1407a7758*/
  v16 = (char *)(a2 + 16); /*0x1407a775f*/
  if ( v15 ) /*0x1407a7763*/
    sub_140001370(v30, v15, *(_QWORD *)(v31 + 16)); /*0x1407a7770*/
  if ( !(_BYTE)v33 ) /*0x1407a777c*/
  {
    if ( 2 * *v8 ) /*0x1407a7781*/
    {
      v36 = 0; /*0x1407a7867*/
      if ( !(unsigned __int8)sub_1412AC970(v14, v15) ) /*0x1407a786e*/
        *(_BYTE *)(a2 + 17) = 1; /*0x1407a787c*/
    }
  }
  v17 = *v16; /*0x1407a778f*/
  *v16 = 0; /*0x1407a778f*/
  if ( v17 == 2 ) /*0x1407a7793*/
  {
    v36 = 0; /*0x1407a7852*/
    WakeByAddressSingle((PVOID)(a2 + 16)); /*0x1407a785c*/
  }
  result = v32; /*0x1407a7799*/
  if ( !_InterlockedDecrement64(v32) ) /*0x1407a77a0*/
  {
    v34 = 0; /*0x1407a77a6*/
    return (volatile signed __int64 *)sub_140E0ABD0(&v32); /*0x1407a77b4*/
  }
  return result; /*0x1407a77ba*/
}