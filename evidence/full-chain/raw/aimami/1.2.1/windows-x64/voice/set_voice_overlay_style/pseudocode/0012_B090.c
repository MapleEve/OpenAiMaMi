// win 1.2.1 NEW set_voice_overlay_style 0x14065b090 d=1
volatile signed __int64 *__fastcall sub_14065B090(const __m128i *a1, __int64 a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  int v6; // eax
  int v7; // ecx
  __m128i v9[49]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v10[22]; // [rsp+368h] [rbp+2E8h] BYREF
  _OWORD v11[3]; // [rsp+4D0h] [rbp+450h] BYREF
  _BYTE v12[48]; // [rsp+500h] [rbp+480h] BYREF
  __int64 v13; // [rsp+530h] [rbp+4B0h]
  __int64 v14; // [rsp+538h] [rbp+4B8h] BYREF
  __m256i v15; // [rsp+540h] [rbp+4C0h]
  __int64 v16; // [rsp+560h] [rbp+4E0h]
  _BYTE v17[31]; // [rsp+568h] [rbp+4E8h] BYREF
  const __m128i *v18; // [rsp+588h] [rbp+508h]
  char v19; // [rsp+596h] [rbp+516h] BYREF
  char v20; // [rsp+597h] [rbp+517h]
  __int64 v21; // [rsp+598h] [rbp+518h]

  v21 = -2; /*0x14065b0a2*/
  sub_1415B2FE0(v10, a1, 0x168u); /*0x14065b0c3*/
  v18 = a1; /*0x14065b0cb*/
  v16 = a1[24].m128i_i64[0]; /*0x14065b0d9*/
  v13 = v16; /*0x14065b0e0*/
  if ( *(_DWORD *)a2 == -1 ) /*0x14065b0ea*/
  {
    v5 = *(_OWORD *)(a2 + 8); /*0x14065b215*/
    *(_OWORD *)&v15.m256i_u64[2] = *(_OWORD *)(a2 + 24); /*0x14065b21d*/
    *(_OWORD *)v15.m256i_i8 = v5; /*0x14065b224*/
    v14 = 1; /*0x14065b22b*/
  }
  else
  {
    sub_1415B2FE0(v9, (const __m128i *)a2, 0x318u); /*0x14065b0fd*/
    v20 = 1; /*0x14065b102*/
    sub_14028C8B0(v12, v9); /*0x14065b113*/
    if ( *(_QWORD *)v12 == -1 ) /*0x14065b121*/
    {
      v15 = *(__m256i *)&v12[8]; /*0x14065b246*/
      v14 = 0; /*0x14065b254*/
    }
    else
    {
      v11[2] = *(_OWORD *)&v12[32]; /*0x14065b13c*/
      v11[1] = *(_OWORD *)&v12[16]; /*0x14065b143*/
      v11[0] = *(_OWORD *)v12; /*0x14065b14a*/
      *(_QWORD *)v17 = 0; /*0x14065b151*/
      *(_QWORD *)&v17[8] = 1; /*0x14065b15c*/
      *(_QWORD *)&v17[16] = 0; /*0x14065b167*/
      v15.m256i_i64[1] = 1610612768; /*0x14065b172*/
      v14 = (__int64)v17; /*0x14065b184*/
      v15.m256i_i64[0] = (__int64)&off_1416A2CE8; /*0x14065b192*/
      if ( (unsigned __int8)sub_141170260((__int64)v11, &v14) ) /*0x14065b1a7*/
        sub_1415F0BC0((__int64)aADisplayImplem_6, 55, (__int64)&v19, (__int64)&unk_1416A1C00, (__int64)&off_1416A2DA0); /*0x14065b2d4*/
      v4 = *(_QWORD *)&v17[16]; /*0x14065b1b5*/
      *(_OWORD *)&v17[7] = *(_OWORD *)v17; /*0x14065b1c3*/
      *(_QWORD *)&v17[23] = v4; /*0x14065b1ca*/
      v20 = 1; /*0x14065b1d1*/
      sub_140663790((__int64 *)v11); /*0x14065b1df*/
      v15.m256i_i8[0] = 3; /*0x14065b1e5*/
      *(_OWORD *)&v15.m256i_i8[1] = *(_OWORD *)v17; /*0x14065b1fa*/
      *(_OWORD *)&v15.m256i_u64[2] = *(_OWORD *)&v17[15]; /*0x14065b201*/
      v14 = 1; /*0x14065b208*/
    }
  }
  v6 = v18[24].m128i_i32[2]; /*0x14065b26d*/
  v7 = v18[24].m128i_i32[3]; /*0x14065b273*/
  v20 = 0; /*0x14065b279*/
  return sub_140768E20(v10, v16, (__int64)&v14, (__int128 *)&v18[22].m128i_u64[1], v6, v7); /*0x14065b2a3*/
}