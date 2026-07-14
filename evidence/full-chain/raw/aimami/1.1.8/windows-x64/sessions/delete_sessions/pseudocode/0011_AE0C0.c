// win 1.1.8 delete_sessions node va=0x1407ae0c0 depth=1
// AE0C0
volatile signed __int64 *__fastcall sub_1407AE0C0(const __m128i *a1, __int128 *a2)
{
  const __m128i *v3; // rdi
  __int64 v4; // rdx
  bool v5; // of
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  int v13; // ecx
  __m128i v15[22]; // [rsp+48h] [rbp-38h] BYREF
  _OWORD v16[7]; // [rsp+1B0h] [rbp+130h] BYREF
  _OWORD v17[3]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE v18[48]; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v19; // [rsp+280h] [rbp+200h]
  __int64 v20; // [rsp+288h] [rbp+208h] BYREF
  __m256i v21; // [rsp+290h] [rbp+210h]
  _BYTE v22[31]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v23; // [rsp+2D0h] [rbp+250h]
  const __m128i *v24; // [rsp+2D8h] [rbp+258h]
  char v25; // [rsp+2E6h] [rbp+266h] BYREF
  char v26; // [rsp+2E7h] [rbp+267h]
  __int64 v27; // [rsp+2E8h] [rbp+268h]

  v27 = -2; /*0x1407ae0d2*/
  v3 = a1; /*0x1407ae0e0*/
  sub_1412762D0(v15, a1, 0x168u); /*0x1407ae0f0*/
  v4 = v3[24].m128i_i64[0]; /*0x1407ae0f5*/
  v19 = v4; /*0x1407ae0fc*/
  v5 = __OFSUB__(0, *(_QWORD *)a2); /*0x1407ae105*/
  v24 = v3; /*0x1407ae108*/
  v23 = v4; /*0x1407ae10f*/
  if ( v5 ) /*0x1407ae116*/
  {
    v6 = *(__int128 *)((char *)a2 + 8); /*0x1407ae118*/
    *(_OWORD *)&v21.m256i_u64[2] = *(__int128 *)((char *)a2 + 24); /*0x1407ae120*/
    *(_OWORD *)v21.m256i_i8 = v6; /*0x1407ae127*/
    v20 = 1; /*0x1407ae12e*/
  }
  else
  {
    v16[6] = a2[6]; /*0x1407ae142*/
    v16[5] = a2[5]; /*0x1407ae14d*/
    v16[4] = a2[4]; /*0x1407ae158*/
    v7 = *a2; /*0x1407ae15f*/
    v8 = a2[1]; /*0x1407ae162*/
    v9 = a2[2]; /*0x1407ae166*/
    v16[3] = a2[3]; /*0x1407ae16e*/
    v16[2] = v9; /*0x1407ae175*/
    v16[1] = v8; /*0x1407ae17c*/
    v16[0] = v7; /*0x1407ae183*/
    v26 = 1; /*0x1407ae18a*/
    sub_140038110(v18, v16); /*0x1407ae19f*/
    if ( *(_QWORD *)v18 == 0x8000000000000025uLL ) /*0x1407ae1b6*/
    {
      v21 = *(__m256i *)&v18[8]; /*0x1407ae1c6*/
      v10 = 0; /*0x1407ae1d4*/
    }
    else
    {
      v17[2] = *(_OWORD *)&v18[32]; /*0x1407ae1f0*/
      v17[1] = *(_OWORD *)&v18[16]; /*0x1407ae1f7*/
      v17[0] = *(_OWORD *)v18; /*0x1407ae1fe*/
      *(_QWORD *)v22 = 0; /*0x1407ae205*/
      *(_QWORD *)&v22[8] = 1; /*0x1407ae210*/
      *(_QWORD *)&v22[16] = 0; /*0x1407ae21b*/
      v21.m256i_i64[1] = 1610612768; /*0x1407ae226*/
      v20 = (__int64)v22; /*0x1407ae238*/
      v21.m256i_i64[0] = (__int64)&off_141357FD0; /*0x1407ae246*/
      if ( (unsigned __int8)sub_140E156C0((__int64)v17, &v20) ) /*0x1407ae25b*/
        sub_1412AD780((__int64)aADisplayImplem_8, 55, (__int64)&v25, (__int64)&unk_141358170, (__int64)&off_141358088); /*0x1407ae33a*/
      v11 = *(_QWORD *)&v22[16]; /*0x1407ae269*/
      *(_OWORD *)&v22[7] = *(_OWORD *)v22; /*0x1407ae277*/
      *(_QWORD *)&v22[23] = v11; /*0x1407ae27e*/
      v26 = 1; /*0x1407ae285*/
      sub_1407A30E0(v17); /*0x1407ae293*/
      v21.m256i_i8[0] = 3; /*0x1407ae299*/
      *(_OWORD *)&v21.m256i_i8[1] = *(_OWORD *)v22; /*0x1407ae2ae*/
      *(_OWORD *)&v21.m256i_u64[2] = *(_OWORD *)&v22[15]; /*0x1407ae2b5*/
      v10 = 1; /*0x1407ae2bc*/
    }
    v20 = v10; /*0x1407ae2c1*/
    v3 = v24; /*0x1407ae2c8*/
    v4 = v23; /*0x1407ae2cf*/
  }
  v12 = v3[24].m128i_i32[2]; /*0x1407ae2dd*/
  v13 = v3[24].m128i_i32[3]; /*0x1407ae2e3*/
  v26 = 0; /*0x1407ae2e9*/
  return invoke_resolver_respond_sys(v15, v4, (__int64)&v20, (__int128 *)&v3[22].m128i_u64[1], v12, v13); /*0x1407ae309*/
}