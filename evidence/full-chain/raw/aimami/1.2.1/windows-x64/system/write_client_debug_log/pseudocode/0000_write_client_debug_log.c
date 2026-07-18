// win 1.2.1 NEW write_client_debug_log 0x1403a7190 d=0
__int64 __fastcall sub_1403A7190(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __m128i v5[32]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v6[9]; // [rsp+238h] [rbp+1B8h] BYREF
  __m128i v7[24]; // [rsp+2C8h] [rbp+248h] BYREF
  __int64 v8; // [rsp+448h] [rbp+3C8h]
  int v9; // [rsp+450h] [rbp+3D0h]
  int v10; // [rsp+454h] [rbp+3D4h]
  __m128i v11; // [rsp+458h] [rbp+3D8h] BYREF
  const char *v12; // [rsp+468h] [rbp+3E8h]
  __int64 v13; // [rsp+470h] [rbp+3F0h]
  __m128i *v14; // [rsp+478h] [rbp+3F8h]
  __int128 *v15; // [rsp+480h] [rbp+400h]
  __int64 v16; // [rsp+488h] [rbp+408h]
  __int64 v17; // [rsp+5E8h] [rbp+568h] BYREF
  __int128 v18; // [rsp+5F0h] [rbp+570h]
  __int128 v19; // [rsp+600h] [rbp+580h]
  __int64 v20; // [rsp+678h] [rbp+5F8h] BYREF
  __int128 v21; // [rsp+680h] [rbp+600h]
  __int128 v22; // [rsp+690h] [rbp+610h]
  __int128 v23; // [rsp+6A0h] [rbp+620h] BYREF
  __int64 v24; // [rsp+6B0h] [rbp+630h]
  __int64 v25; // [rsp+6C0h] [rbp+640h]
  __int64 v26; // [rsp+6C8h] [rbp+648h]
  __int128 v27; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v28; // [rsp+6E0h] [rbp+660h]
  __int64 v29; // [rsp+6F0h] [rbp+670h]
  char v30; // [rsp+6FFh] [rbp+67Fh]
  __int64 v31; // [rsp+700h] [rbp+680h]

  v31 = -2; /*0x1403a71a3*/
  sub_1415B2FE0(v5, (const __m128i *)a1, 0x208u); /*0x1403a71c1*/
  sub_1415B2FE0(v7, (const __m128i *)(a1 + 520), 0x190u); /*0x1403a71dd*/
  v28 = *(_QWORD *)(a1 + 936); /*0x1403a71e9*/
  v27 = *(_OWORD *)(a1 + 920); /*0x1403a71f7*/
  v16 = 0; /*0x1403a71fe*/
  v11.m128i_i64[0] = (__int64)aWriteClientDeb; /*0x1403a7210*/
  v11.m128i_i64[1] = 22; /*0x1403a7217*/
  v12 = aEvent_0; /*0x1403a7229*/
  v13 = 5; /*0x1403a7230*/
  v14 = v5; /*0x1403a723b*/
  v15 = &v27; /*0x1403a7249*/
  v30 = 1; /*0x1403a7250*/
  sub_1407754D0(&v17, &v11); /*0x1403a7265*/
  if ( v17 == -1 ) /*0x1403a7273*/
  {
    v22 = v19; /*0x1403a72ea*/
    v21 = v18; /*0x1403a72f1*/
    sub_1415B2FE0(&v11, (const __m128i *)(a1 + 520), 0x168u); /*0x1403a730b*/
    v23 = *(_OWORD *)(a1 + 880); /*0x1403a731e*/
    v24 = *(_QWORD *)(a1 + 896); /*0x1403a732c*/
    v20 = 1; /*0x1403a733f*/
    v30 = 0; /*0x1403a734a*/
    sub_140768E20((unsigned int)&v11, v8, (unsigned int)&v20, (unsigned int)&v23, v9, v10); /*0x1403a736a*/
  }
  else
  {
    sub_1415B2FE0(v6, (const __m128i *)&v17, 0x90u); /*0x1403a728c*/
    v30 = 1; /*0x1403a7291*/
    sub_14076A710(v6); /*0x1403a729b*/
    sub_1415B2FE0(&v11, (const __m128i *)(a1 + 520), 0x190u); /*0x1403a72b4*/
    LOBYTE(v17) = -1; /*0x1403a72b9*/
    v30 = 0; /*0x1403a72c0*/
    sub_1406607B0(&v11, &v17); /*0x1403a72d1*/
  }
  if ( (_QWORD)v27 != -1 ) /*0x1403a7378*/
  {
    v2 = *((_QWORD *)&v27 + 1); /*0x1403a737e*/
    v26 = v28; /*0x1403a738c*/
    v29 = 0; /*0x1403a7393*/
    v25 = *((_QWORD *)&v27 + 1); /*0x1403a739e*/
    while ( v26 != v29 ) /*0x1403a73be*/
    {
      ++v29; /*0x1403a73c3*/
      v3 = v2 + 96; /*0x1403a73ca*/
      sub_1408780B0(v2); /*0x1403a73ce*/
      v2 = v3; /*0x1403a73d4*/
    }
    if ( (_QWORD)v27 ) /*0x1403a73e3*/
      sub_140001360(*((__int64 *)&v27 + 1), 96 * v27, 8); /*0x1403a73fa*/
  }
  return sub_1402B3AF0(v5); /*0x1403a7409*/
}