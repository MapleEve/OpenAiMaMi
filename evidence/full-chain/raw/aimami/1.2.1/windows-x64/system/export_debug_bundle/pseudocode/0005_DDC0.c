// win 1.2.1 NEW export_debug_bundle 0x14063ddc0 d=1
__m128i *__fastcall sub_14063DDC0(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  volatile signed __int64 *v7; // rax
  signed __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  volatile signed __int64 *v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __m128i *v15; // rax
  __m128i *v16; // r15
  __int64 v17; // r8
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  __int64 v21; // [rsp+80h] [rbp+0h] BYREF
  __m128i *v22; // [rsp+98h] [rbp+18h]
  _OWORD v23[6]; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v24; // [rsp+100h] [rbp+80h] BYREF
  _UNKNOWN **v25; // [rsp+110h] [rbp+90h]
  __int64 v26; // [rsp+118h] [rbp+98h]
  volatile signed __int64 *v27; // [rsp+120h] [rbp+A0h]
  __int64 v28; // [rsp+128h] [rbp+A8h]
  signed __int64 v29; // [rsp+130h] [rbp+B0h]
  int v30; // [rsp+138h] [rbp+B8h]
  __int128 v31; // [rsp+13Ch] [rbp+BCh]
  __int128 v32; // [rsp+14Ch] [rbp+CCh]
  __int128 v33; // [rsp+15Ch] [rbp+DCh]
  __int128 v34; // [rsp+16Ch] [rbp+ECh]
  _DWORD v35[17]; // [rsp+17Ch] [rbp+FCh]
  __int64 v36; // [rsp+1C0h] [rbp+140h]
  volatile signed __int64 *v37; // [rsp+1D0h] [rbp+150h]
  __int64 v38; // [rsp+1D8h] [rbp+158h]
  __int64 *v39; // [rsp+238h] [rbp+1B8h]
  __int64 v40; // [rsp+240h] [rbp+1C0h]

  v39 = &v21; /*0x14063ddde*/
  v40 = -2; /*0x14063dde5*/
  v7 = off_141DC1E30; /*0x14063ddf9*/
  do /*0x14063de0d*/
    v8 = _InterlockedExchangeAdd64(v7, 1u); /*0x14063de05*/
  while ( !v8 ); /*0x14063de0d*/
  v9 = *(_QWORD *)(a2 + 8); /*0x14063de0f*/
  v10 = 672; /*0x14063de1b*/
  if ( *(_BYTE *)a2 ) /*0x14063de13*/
    v10 = 480; /*0x14063de21*/
  v11 = *(volatile signed __int64 **)(v9 + v10 + 16); /*0x14063de25*/
  if ( v11 ) /*0x14063de2d*/
  {
    v9 = *(_QWORD *)(v9 + v10 + 24); /*0x14063de2f*/
    if ( _InterlockedIncrement64(v11) <= 0 || _InterlockedIncrement64(v11) <= 0 ) /*0x14063de3e*/
      BUG(); /*0x14063de40*/
  }
  *(_QWORD *)((char *)&v23[5] + 4) = *((_QWORD *)a3 + 10); /*0x14063de46*/
  *(_OWORD *)((char *)&v23[4] + 4) = a3[4]; /*0x14063de52*/
  v12 = *a3; /*0x14063de59*/
  v13 = a3[1]; /*0x14063de5d*/
  v14 = a3[2]; /*0x14063de62*/
  *(_OWORD *)((char *)&v23[3] + 4) = a3[3]; /*0x14063de6c*/
  *(_OWORD *)((char *)&v23[2] + 4) = v14; /*0x14063de73*/
  *(_OWORD *)((char *)&v23[1] + 4) = v13; /*0x14063de7a*/
  *(_OWORD *)((char *)v23 + 4) = v12; /*0x14063de81*/
  v24 = (__m128i)0xCCuLL; /*0x14063de88*/
  v25 = &off_1416E3BB8; /*0x14063dea5*/
  v26 = 0; /*0x14063deac*/
  v27 = v11; /*0x14063deb7*/
  v28 = v9; /*0x14063debe*/
  v29 = v8; /*0x14063dec5*/
  v30 = 0; /*0x14063decc*/
  v31 = v23[0]; /*0x14063def2*/
  v32 = v23[1]; /*0x14063def9*/
  v33 = v23[2]; /*0x14063df00*/
  v34 = v23[3]; /*0x14063df07*/
  *(_OWORD *)v35 = v23[4]; /*0x14063df15*/
  *(_OWORD *)&v35[3] = *(_OWORD *)((char *)&v23[4] + 12); /*0x14063df23*/
  *(_OWORD *)&v35[13] = 0; /*0x14063df2d*/
  v36 = 0; /*0x14063df34*/
  v37 = v11; /*0x14063df3f*/
  v38 = v9; /*0x14063df46*/
  nullsub_1(); /*0x14063df4d*/
  v15 = (__m128i *)sub_140001350(256, 128); /*0x14063df5c*/
  if ( !v15 ) /*0x14063df64*/
    sub_1415F0891(128, 256); /*0x14063dfc3*/
  v16 = v15; /*0x14063df66*/
  sub_1415B2FE0(v15, &v24, 0x100u); /*0x14063df79*/
  v22 = v16; /*0x14063df82*/
  LOBYTE(v17) = 1; /*0x14063df8c*/
  v18 = sub_14121CA40(a1, v16, v17, a2); /*0x14063df92*/
  if ( ((v19 != 0) & v18) != 0 ) /*0x14063dfa0*/
  {
    *(_QWORD *)&v23[0] = v19; /*0x14063dfce*/
    v24.m128i_i64[0] = (__int64)v23; /*0x14063dfdc*/
    v24.m128i_i64[1] = (__int64)sub_1413BF600; /*0x14063dfea*/
    sub_1415F0E20(&unk_14169D290, &v24, a4); /*0x14063e002*/
  }
  return v22; /*0x14063dfa9*/
}