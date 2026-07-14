// win 1.1.8 detect_api_proxy_config node va=0x1401a5190 depth=1
// A5190
__m128i *__fastcall sub_1401A5190(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v4; // r13
  volatile signed __int64 *v8; // rcx
  signed __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  volatile signed __int64 *v12; // r12
  __m128i *v13; // rax
  __m128i *v14; // r12
  __int64 v15; // r8
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  __m128i v19; // [rsp+80h] [rbp+0h] BYREF
  _UNKNOWN **v20; // [rsp+90h] [rbp+10h]
  __int64 v21; // [rsp+98h] [rbp+18h]
  volatile signed __int64 *v22; // [rsp+A0h] [rbp+20h]
  __int64 v23; // [rsp+A8h] [rbp+28h]
  signed __int64 v24; // [rsp+B0h] [rbp+30h]
  int v25; // [rsp+B8h] [rbp+38h]
  _DWORD v26[49]; // [rsp+BCh] [rbp+3Ch] BYREF
  __int64 v27; // [rsp+180h] [rbp+100h]
  volatile signed __int64 *v28; // [rsp+190h] [rbp+110h]
  __int64 v29; // [rsp+198h] [rbp+118h]
  __m128i v30[10]; // [rsp+208h] [rbp+188h] BYREF
  __m128i *v31; // [rsp+2A8h] [rbp+228h]
  __int64 v32; // [rsp+2B0h] [rbp+230h]

  v31 = &v19; /*0x1401a51b2*/
  v32 = -2; /*0x1401a51b9*/
  v8 = off_141963CD0; /*0x1401a51d0*/
  do /*0x1401a51ee*/
    v9 = _InterlockedExchangeAdd64(v8, 1u); /*0x1401a51e6*/
  while ( !v9 ); /*0x1401a51ee*/
  v10 = *(_QWORD *)(a2 + 8); /*0x1401a51f0*/
  v11 = 672; /*0x1401a51fd*/
  if ( *(_BYTE *)a2 ) /*0x1401a51f4*/
    v11 = 480; /*0x1401a5202*/
  v12 = *(volatile signed __int64 **)(v10 + v11 + 16); /*0x1401a5206*/
  if ( v12 ) /*0x1401a520e*/
  {
    v4 = *(_QWORD *)(v10 + v11 + 24); /*0x1401a5210*/
    if ( _InterlockedIncrement64(v12) <= 0 || _InterlockedIncrement64(v12) <= 0 ) /*0x1401a5221*/
      BUG(); /*0x1401a5223*/
  }
  sub_1412762D0((__m128i *)((char *)v30[0].m128i_i64 + 4), a3, 0x98u); /*0x1401a5235*/
  v19 = (__m128i)0xCCuLL; /*0x1401a523a*/
  v20 = &off_141368000; /*0x1401a5257*/
  v21 = 0; /*0x1401a525e*/
  v22 = v12; /*0x1401a5269*/
  v23 = v4; /*0x1401a5270*/
  v24 = v9; /*0x1401a5277*/
  v25 = 0; /*0x1401a527e*/
  sub_1412762D0((__m128i *)v26, v30, 0x9Cu); /*0x1401a529f*/
  *(_OWORD *)&v26[45] = 0; /*0x1401a52a7*/
  v27 = 0; /*0x1401a52ae*/
  v28 = v12; /*0x1401a52b9*/
  v29 = v4; /*0x1401a52c0*/
  nullsub_1(); /*0x1401a52c7*/
  v13 = (__m128i *)sub_140001360(384, 128); /*0x1401a52d6*/
  if ( !v13 ) /*0x1401a52de*/
    sub_1412AD451(128, 384); /*0x1401a533b*/
  v14 = v13; /*0x1401a52e0*/
  sub_1412762D0(v13, &v19, 0x180u); /*0x1401a52f3*/
  LOBYTE(v15) = 1; /*0x1401a5303*/
  v16 = sub_140EE3CC0(a1, v14, v15, a2); /*0x1401a5309*/
  if ( ((v17 != 0) & v16) != 0 ) /*0x1401a5317*/
  {
    v30[0].m128i_i64[0] = v17; /*0x1401a5346*/
    v19.m128i_i64[0] = (__int64)v30; /*0x1401a534d*/
    v19.m128i_i64[1] = (__int64)sub_141084170; /*0x1401a535b*/
    sub_1412AD9E0((__int64)&unk_141321CD0, (__int64)&v19, a4); /*0x1401a5373*/
  }
  return v14; /*0x1401a531d*/
}