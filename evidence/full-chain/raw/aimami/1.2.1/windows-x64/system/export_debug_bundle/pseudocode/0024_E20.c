// win 1.2.1 NEW export_debug_bundle 0x140768e20 d=1
volatile signed __int64 *__fastcall sub_140768E20(
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
  __int64 v14; // rdx
  char *v15; // rdi
  char v16; // al
  volatile signed __int64 *result; // rax
  _OWORD v18[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  __m128i v20[22]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v21; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v22; // [rsp+1D0h] [rbp+150h]
  int v23; // [rsp+1D8h] [rbp+158h]
  int v24; // [rsp+1DCh] [rbp+15Ch]
  __int64 v25; // [rsp+1E0h] [rbp+160h]
  __int64 v26; // [rsp+1E8h] [rbp+168h]
  __int128 *v27; // [rsp+1F0h] [rbp+170h]
  const __m128i *v28; // [rsp+1F8h] [rbp+178h]
  __int64 v29; // [rsp+200h] [rbp+180h]
  __int64 v30; // [rsp+208h] [rbp+188h]
  volatile signed __int64 *v31; // [rsp+210h] [rbp+190h] BYREF
  int v32; // [rsp+218h] [rbp+198h]
  char v33; // [rsp+21Dh] [rbp+19Dh]
  char v34; // [rsp+21Eh] [rbp+19Eh]
  char v35; // [rsp+21Fh] [rbp+19Fh]
  __int64 v36; // [rsp+220h] [rbp+1A0h]

  v36 = -2; /*0x140768e3b*/
  v27 = a4; /*0x140768e46*/
  v26 = a3; /*0x140768e4d*/
  v28 = a1; /*0x140768e57*/
  v31 = (volatile signed __int64 *)a2; /*0x140768e5e*/
  v7 = a2 + 16; /*0x140768e65*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a2 + 16), 1, 0) ) /*0x140768e6d*/
  {
    v35 = 1; /*0x140768fde*/
    sub_1415EF110((volatile void *)(a2 + 16)); /*0x140768fe8*/
  }
  v8 = off_141DC2000; /*0x140768e78*/
  if ( !(2 * *off_141DC2000) ) /*0x140768e82*/
  {
    v9 = 0; /*0x140768e8e*/
    if ( !*(_BYTE *)(a2 + 17) ) /*0x140768e90*/
      goto LABEL_5; /*0x140768e96*/
LABEL_16:
    *(_QWORD *)&v18[0] = v7; /*0x14076900e*/
    BYTE8(v18[0]) = v9; /*0x140769012*/
    sub_1415F0BC0( /*0x140769038*/
      (unsigned int)aCalledResultUn_6,
      43,
      (unsigned int)v18,
      (unsigned int)&off_1416A1A50,
      (__int64)&off_1416A20D0);
  }
  v35 = 1; /*0x140768ff3*/
  v9 = sub_1415EFDB0(); /*0x140768ffa*/
  LOBYTE(v9) = v9 ^ 1; /*0x140769000*/
  if ( *(_BYTE *)(a2 + 17) ) /*0x140769002*/
    goto LABEL_16; /*0x140769008*/
LABEL_5:
  v32 = v9; /*0x140768e9c*/
  v25 = v7; /*0x140768ea2*/
  v10 = *(_QWORD *)(a2 + 24); /*0x140768ea9*/
  v11 = *(_QWORD *)(a2 + 32); /*0x140768ead*/
  *(_QWORD *)(a2 + 24) = 0; /*0x140768eb1*/
  if ( !v10 ) /*0x140768ebc*/
  {
    v34 = 1; /*0x140769040*/
    sub_1415F0B60(aResolverConsum, 17, &off_1416A2100); /*0x14076905a*/
  }
  sub_1415B2FE0(v20, v28, 0x168u); /*0x140768ee4*/
  v21 = *v27; /*0x140768efa*/
  v22 = *((_QWORD *)v27 + 2); /*0x140768f05*/
  v12 = *(_OWORD *)(v26 + 16); /*0x140768f16*/
  v18[0] = *(_OWORD *)v26; /*0x140768f1a*/
  v18[1] = v12; /*0x140768f1e*/
  v19 = *(_QWORD *)(v26 + 32); /*0x140768f26*/
  v23 = a5; /*0x140768f2a*/
  v24 = a6; /*0x140768f31*/
  v30 = v11; /*0x140768f38*/
  v13 = *(void (__fastcall **)(__int64, __m128i *, __int128 *, _OWORD *, int, int))(v11 + 24); /*0x140768f3f*/
  v29 = v10; /*0x140768f51*/
  v13(v10, v20, &v21, v18, a5, a6); /*0x140768f5e*/
  v14 = *(_QWORD *)(v30 + 8); /*0x140768f68*/
  v15 = (char *)(a2 + 16); /*0x140768f6f*/
  if ( v14 ) /*0x140768f73*/
    sub_140001360(v29, v14, *(_QWORD *)(v30 + 16)); /*0x140768f80*/
  if ( !(_BYTE)v32 ) /*0x140768f8c*/
  {
    if ( 2 * *v8 ) /*0x140768f91*/
    {
      v35 = 0; /*0x140769077*/
      if ( !(unsigned __int8)sub_1415EFDB0() ) /*0x14076907e*/
        *(_BYTE *)(a2 + 17) = 1; /*0x14076908c*/
    }
  }
  v16 = *v15; /*0x140768f9f*/
  *v15 = 0; /*0x140768f9f*/
  if ( v16 == 2 ) /*0x140768fa3*/
  {
    v35 = 0; /*0x140769062*/
    WakeByAddressSingle((PVOID)(a2 + 16)); /*0x14076906c*/
  }
  result = v31; /*0x140768fa9*/
  if ( !_InterlockedDecrement64(v31) ) /*0x140768fb0*/
  {
    v33 = 0; /*0x140768fb6*/
    return (volatile signed __int64 *)sub_141166580(&v31); /*0x140768fc4*/
  }
  return result; /*0x140768fca*/
}