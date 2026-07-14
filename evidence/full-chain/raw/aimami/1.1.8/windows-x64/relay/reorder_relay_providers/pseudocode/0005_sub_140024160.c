// win 1.1.8 reorder_relay_providers node va=0x140024160 depth=1
// sub_140024160
__int64 __fastcall sub_140024160(__int64 a1)
{
  __int64 v2; // rbx
  __int128 v3; // xmm0
  __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  __int128 v6; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v7[20]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+188h] [rbp+108h] BYREF
  __int128 v9; // [rsp+190h] [rbp+110h]
  __int64 v10; // [rsp+1A0h] [rbp+120h]
  __m128i v11[19]; // [rsp+1A8h] [rbp+128h] BYREF
  _OWORD v12[6]; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v13; // [rsp+340h] [rbp+2C0h]
  __int64 v14; // [rsp+350h] [rbp+2D0h]
  _QWORD v15[3]; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v16; // [rsp+378h] [rbp+2F8h] BYREF
  __int64 v17; // [rsp+388h] [rbp+308h]
  __int128 v18; // [rsp+390h] [rbp+310h]
  __int64 v19; // [rsp+3A0h] [rbp+320h]
  char v20; // [rsp+3AFh] [rbp+32Fh] BYREF
  __int64 v21; // [rsp+3B0h] [rbp+330h]

  v21 = -2; /*0x140024173*/
  sub_14027A9A0(&v5); /*0x140024185*/
  v2 = v5; /*0x14002418a*/
  if ( __OFSUB__(-v5, 1) ) /*0x140024191*/
  {
    v12[5] = v7[4]; /*0x1400241a2*/
    v12[4] = v7[3]; /*0x1400241ad*/
    v12[3] = v7[2]; /*0x1400241c3*/
    v12[2] = v7[1]; /*0x1400241ca*/
    v12[1] = v7[0]; /*0x1400241d1*/
    v12[0] = v6; /*0x1400241d8*/
    *(_QWORD *)&v16 = 0; /*0x1400241df*/
    *((_QWORD *)&v16 + 1) = 1; /*0x1400241ea*/
    v17 = 0; /*0x1400241f5*/
    v15[2] = 1610612768; /*0x140024200*/
    v15[0] = &v16; /*0x140024212*/
    v15[1] = &off_141314DA0; /*0x140024220*/
    if ( (unsigned __int8)sub_1400603E0(v12, v15) ) /*0x140024235*/
      sub_1412AD780((__int64)aADisplayImplem, 55, (__int64)&v20, (__int64)&unk_141314FC8, (__int64)&off_141314E58); /*0x140024333*/
    v19 = v17; /*0x14002424a*/
    v18 = v16; /*0x140024258*/
    sub_140048640(&v6); /*0x140024262*/
    v14 = v19; /*0x14002426e*/
    v3 = v18; /*0x140024275*/
    v13 = v18; /*0x14002427c*/
    *(_QWORD *)(a1 + 24) = v19; /*0x140024283*/
    *(_OWORD *)(a1 + 8) = v3; /*0x140024287*/
    *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x140024295*/
  }
  else
  {
    v19 = *(_QWORD *)&v7[0]; /*0x14002429e*/
    v18 = v6; /*0x1400242a8*/
    sub_1412762D0(v11, (const __m128i *)((char *)v7 + 8), 0x138u); /*0x1400242c0*/
    v13 = v18; /*0x1400242cc*/
    v8 = v2; /*0x1400242da*/
    v9 = v18; /*0x1400242e1*/
    v10 = v19; /*0x1400242e8*/
    sub_14001B730(a1, (__int64)&v8); /*0x1400242f9*/
  }
  return a1; /*0x140024301*/
}