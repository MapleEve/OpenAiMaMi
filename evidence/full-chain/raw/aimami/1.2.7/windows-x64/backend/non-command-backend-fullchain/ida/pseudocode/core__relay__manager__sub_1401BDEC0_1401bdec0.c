// win 1.2.7 | module src/core/relay/manager.rs | ea 0x1401bdec0 | name sub_1401BDEC0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401BDEC0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v5; // rdi
  int v6; // edx
  int v7; // ebx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  const __m128i *v12; // rcx
  __m128i *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __int64 v21; // rax
  unsigned int v22; // edx
  _BYTE v23[24]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h] BYREF
  int v26; // [rsp+78h] [rbp-8h]
  _QWORD v27[2]; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int128 v28; // [rsp+90h] [rbp+10h] BYREF
  __m128i v29; // [rsp+A0h] [rbp+20h]
  __m128i v30; // [rsp+B0h] [rbp+30h]
  __m128i v31; // [rsp+C0h] [rbp+40h]
  __m128i v32; // [rsp+D0h] [rbp+50h]
  __m128i v33; // [rsp+E0h] [rbp+60h]
  __m128i v34; // [rsp+F0h] [rbp+70h]
  _BYTE v35[104]; // [rsp+108h] [rbp+88h] BYREF
  __m128i *v36; // [rsp+170h] [rbp+F0h]
  char v37; // [rsp+17Fh] [rbp+FFh] BYREF
  __int64 v38; // [rsp+180h] [rbp+100h]

  v38 = -2;
  v36 = (__m128i *)a2;
  v5 = sub_14167FC00();
  v7 = v6;
  sub_1401BDB90(v35, v36);
  if ( *(_DWORD *)v35 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v35[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v35[64];
    v8 = *(__m128i *)v35;
    v9 = *(__m128i *)&v35[16];
    v10 = *(__m128i *)&v35[32];
    v11 = *(__m128i *)&v35[48];
LABEL_5:
    *(__m128i *)(a1 + 56) = v11;
    *(__m128i *)(a1 + 40) = v10;
    *(__m128i *)(a1 + 24) = v9;
    *(__m128i *)(a1 + 8) = v8;
    v12 = v36;
    *(_QWORD *)a1 = -2;
    sub_140195C20(v12);
    return a1;
  }
  sub_141018040(
    (__int64)v35,
    a3,
    (__int128 *)v36[6].m128i_i64[1],
    v36[7].m128i_i64[0],
    v36[8].m128i_i64[0],
    v36[8].m128i_i64[1],
    v36[10].m128i_i8[8] ^ 1,
    (_QWORD *)v36[9].m128i_i64[1],
    v36[10].m128i_i64[0]);
  v29 = *(__m128i *)&v35[8];
  v30 = *(__m128i *)&v35[24];
  v31 = *(__m128i *)&v35[40];
  v32 = *(__m128i *)&v35[56];
  v33 = *(__m128i *)&v35[72];
  v34 = *(__m128i *)&v35[88];
  if ( *(_DWORD *)v35 == 1 )
  {
    *(__m128i *)(a1 + 88) = v34;
    *(__m128i *)(a1 + 72) = v33;
    v8 = v29;
    v9 = v30;
    v10 = v31;
    v11 = v32;
    goto LABEL_5;
  }
  v14 = v36;
  v15 = v36->m128i_i64[0];
  if ( v36->m128i_i64[0] != -1 )
  {
    v16 = v36[4].m128i_i64[0];
    if ( v16 )
      sub_140001660(v36[4].m128i_i64[1], v16, 1);
    if ( (_DWORD)v15 != 2 )
    {
      v17 = v14[1].m128i_i64[0];
      if ( v17 )
        sub_140001660(v14[1].m128i_i64[1], v17, 1);
    }
  }
  v14[5] = v34;
  v14[4] = v33;
  v18 = v29;
  v19 = v30;
  v20 = v31;
  v14[3] = v32;
  v14[2] = v20;
  v14[1] = v19;
  *v14 = v18;
  v37 = 0;
  v27[0] = aPrepareBeforeS;
  v27[1] = 19;
  v25 = v5;
  v26 = v7;
  v21 = sub_14167FD50(&v25);
  v28 = 0x3E8 * (unsigned __int128)(unsigned __int64)v21 + v22 / 0xF4240uLL;
  v24[0] = aCatalogReadyTr;
  v24[1] = 18;
  *(_QWORD *)v35 = &v37;
  *(_QWORD *)&v35[8] = sub_140290EB0;
  *(_QWORD *)&v35[16] = v27;
  *(_QWORD *)&v35[24] = sub_140186EE0;
  *(_QWORD *)&v35[32] = &v28;
  *(_QWORD *)&v35[40] = sub_1416B95D0;
  *(_QWORD *)&v35[48] = v24;
  *(_QWORD *)&v35[56] = sub_140186EE0;
  sub_1416ABFD0(v23, &unk_1419D5389, v35);
  sub_14019B500((unsigned int)aRouterTransiti_0, 17, (unsigned int)aPhaseTiming, 12, (__int64)v23);
  sub_1418F44E0((__m128i *)a1, v36, 0xB0u);
  return a1;
}
