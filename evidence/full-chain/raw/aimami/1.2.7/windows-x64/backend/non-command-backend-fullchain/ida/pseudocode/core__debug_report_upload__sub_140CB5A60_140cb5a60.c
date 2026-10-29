// win 1.2.7 | module src/core/debug_report_upload.rs | ea 0x140cb5a60 | name sub_140CB5A60
// win 1.2.7 | module src/core/debug_report_upload.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140CB5A60(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // rdi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __m128i v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h]
  __m128i v20; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v21; // [rsp+138h] [rbp+B8h]
  __m128i v22[16]; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v23; // [rsp+240h] [rbp+1C0h]
  __int128 v24; // [rsp+250h] [rbp+1D0h]
  __int128 v25; // [rsp+260h] [rbp+1E0h]
  __int128 v26; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v27; // [rsp+280h] [rbp+200h]
  __int128 *v28; // [rsp+290h] [rbp+210h]
  char v29; // [rsp+29Fh] [rbp+21Fh]
  __int64 v30; // [rsp+2A0h] [rbp+220h]

  v30 = -2;
  v28 = a2;
  v8 = a5[1];
  v9 = a5[2];
  if ( *a5 == -1 )
  {
    v20.m128i_i64[0] = (__int64)off_141A422B8;
    v20.m128i_i64[1] = v8;
    v21 = v9;
    v22[0].m128i_i64[0] = 0;
  }
  else
  {
    v18.m128i_i64[0] = *a5;
    v18.m128i_i64[1] = v8;
    v19 = v9;
    v29 = 1;
    sub_141654790(&v20, &v18);
  }
  v29 = 1;
  sub_141259060(&v18, &v20, 0);
  v27 = v28[4];
  v10 = *v28;
  v11 = v28[1];
  v12 = v28[2];
  v26 = v28[3];
  v25 = v12;
  v24 = v11;
  v23 = v10;
  sub_1418F44E0(v22, &v18, 0x100u);
  v20.m128i_i64[0] = -1;
  v20.m128i_i64[1] = a3;
  v21 = a4;
  v13 = v27;
  if ( (_QWORD)v27 == (_QWORD)v26 )
    sub_141910370(&v26);
  sub_1418F44E0((__m128i *)(*((_QWORD *)&v26 + 1) + 280 * v13), &v20, 0x118u);
  *(_QWORD *)(a1 + 64) = v13 + 1;
  *(_QWORD *)(a1 + 72) = *((_QWORD *)&v27 + 1);
  v14 = v23;
  v15 = v24;
  v16 = v25;
  *(_OWORD *)(a1 + 48) = v26;
  *(_OWORD *)(a1 + 32) = v16;
  *(_OWORD *)(a1 + 16) = v15;
  *(_OWORD *)a1 = v14;
  return a1;
}
