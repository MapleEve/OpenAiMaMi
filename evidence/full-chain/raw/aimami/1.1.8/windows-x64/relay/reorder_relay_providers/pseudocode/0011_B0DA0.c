// win 1.1.8 reorder_relay_providers node va=0x1407b0da0 depth=1
// B0DA0
volatile signed __int64 *__fastcall sub_1407B0DA0(const __m128i *a1, const __m128i *a2)
{
  const __m128i *v3; // rdi
  __int64 v4; // r10
  bool v5; // of
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  int v10; // ecx
  __m128i v12[26]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v13[22]; // [rsp+1F8h] [rbp+178h] BYREF
  _OWORD v14[3]; // [rsp+360h] [rbp+2E0h] BYREF
  _BYTE v15[48]; // [rsp+390h] [rbp+310h] BYREF
  __int64 v16; // [rsp+3C0h] [rbp+340h]
  __int64 v17; // [rsp+3C8h] [rbp+348h] BYREF
  __m256i v18; // [rsp+3D0h] [rbp+350h]
  _BYTE v19[31]; // [rsp+3F0h] [rbp+370h] BYREF
  __int64 v20; // [rsp+410h] [rbp+390h]
  const __m128i *v21; // [rsp+418h] [rbp+398h]
  char v22; // [rsp+426h] [rbp+3A6h] BYREF
  char v23; // [rsp+427h] [rbp+3A7h]
  __int64 v24; // [rsp+428h] [rbp+3A8h]

  v24 = -2; /*0x1407b0db2*/
  v3 = a1; /*0x1407b0dc0*/
  sub_1412762D0(v13, a1, 0x168u); /*0x1407b0dd3*/
  v4 = v3[24].m128i_i64[0]; /*0x1407b0ddb*/
  v16 = v4; /*0x1407b0de2*/
  v5 = __OFSUB__(0, a2->m128i_i64[0]); /*0x1407b0deb*/
  v21 = v3; /*0x1407b0dee*/
  v20 = v4; /*0x1407b0df5*/
  if ( v5 ) /*0x1407b0dfc*/
  {
    v6 = *(__int128 *)((char *)a2 + 8); /*0x1407b0dfe*/
    *(__m128i *)&v18.m256i_u64[2] = *(const __m128i *)((char *)a2 + 24); /*0x1407b0e06*/
    *(_OWORD *)v18.m256i_i8 = v6; /*0x1407b0e0d*/
    v17 = 1; /*0x1407b0e14*/
  }
  else
  {
    sub_1412762D0(v12, a2, 0x1A8u); /*0x1407b0e31*/
    v23 = 1; /*0x1407b0e36*/
    sub_1400388C0(v15, v12); /*0x1407b0e47*/
    if ( *(_QWORD *)v15 == 0x8000000000000025uLL ) /*0x1407b0e5e*/
    {
      v18 = *(__m256i *)&v15[8]; /*0x1407b0e6e*/
      v7 = 0; /*0x1407b0e7c*/
    }
    else
    {
      v14[2] = *(_OWORD *)&v15[32]; /*0x1407b0e98*/
      v14[1] = *(_OWORD *)&v15[16]; /*0x1407b0e9f*/
      v14[0] = *(_OWORD *)v15; /*0x1407b0ea6*/
      *(_QWORD *)v19 = 0; /*0x1407b0ead*/
      *(_QWORD *)&v19[8] = 1; /*0x1407b0eb8*/
      *(_QWORD *)&v19[16] = 0; /*0x1407b0ec3*/
      v18.m256i_i64[1] = 1610612768; /*0x1407b0ece*/
      v17 = (__int64)v19; /*0x1407b0ee0*/
      v18.m256i_i64[0] = (__int64)&off_141357FD0; /*0x1407b0eee*/
      if ( (unsigned __int8)sub_140E156C0((__int64)v14, &v17) ) /*0x1407b0f03*/
        sub_1412AD780((__int64)aADisplayImplem_8, 55, (__int64)&v22, (__int64)&unk_141358170, (__int64)&off_141358088); /*0x1407b0fe8*/
      v8 = *(_QWORD *)&v19[16]; /*0x1407b0f11*/
      *(_OWORD *)&v19[7] = *(_OWORD *)v19; /*0x1407b0f1f*/
      *(_QWORD *)&v19[23] = v8; /*0x1407b0f26*/
      v23 = 1; /*0x1407b0f2d*/
      sub_1407A30E0((__int64 *)v14); /*0x1407b0f3b*/
      v18.m256i_i8[0] = 3; /*0x1407b0f41*/
      *(_OWORD *)&v18.m256i_i8[1] = *(_OWORD *)v19; /*0x1407b0f56*/
      *(_OWORD *)&v18.m256i_u64[2] = *(_OWORD *)&v19[15]; /*0x1407b0f5d*/
      v7 = 1; /*0x1407b0f64*/
    }
    v17 = v7; /*0x1407b0f69*/
    v3 = v21; /*0x1407b0f70*/
    v4 = v20; /*0x1407b0f77*/
  }
  v9 = v3[24].m128i_i32[2]; /*0x1407b0f85*/
  v10 = v3[24].m128i_i32[3]; /*0x1407b0f8b*/
  v23 = 0; /*0x1407b0f91*/
  return invoke_resolver_respond_sys(v13, v4, (__int64)&v17, (__int128 *)&v3[22].m128i_u64[1], v9, v10); /*0x1407b0fb7*/
}