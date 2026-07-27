// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1404f2b60
// name: sub_1404F2B60
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1404F2B60(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i si128; // xmm0
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v10; // xmm0
  __int64 v11; // r10
  char v12; // bl
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 (__fastcall **v16)(); // rcx
  __m128i v17; // kr00_16
  __m128i *v18; // rax
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v24; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v25[8]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v26; // [rsp+38h] [rbp-48h]
  __int128 v27; // [rsp+48h] [rbp-38h]
  __int128 v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+68h] [rbp-18h]
  __int128 v30; // [rsp+78h] [rbp-8h]
  __int128 v31; // [rsp+88h] [rbp+8h]
  __int128 v32; // [rsp+98h] [rbp+18h]
  __int128 v33; // [rsp+A8h] [rbp+28h]
  __int128 v34; // [rsp+B8h] [rbp+38h]
  char v35; // [rsp+C8h] [rbp+48h]
  __m128i v36[3]; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v37; // [rsp+100h] [rbp+80h]
  __m128i v38; // [rsp+110h] [rbp+90h]
  __m128i v39; // [rsp+120h] [rbp+A0h]
  __int128 v40; // [rsp+130h] [rbp+B0h]
  __m128i v41; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v42; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v43; // [rsp+160h] [rbp+E0h]
  __m128i v44; // [rsp+170h] [rbp+F0h]
  __int128 v45; // [rsp+180h] [rbp+100h]
  __int64 v46; // [rsp+190h] [rbp+110h]
  __int64 v47; // [rsp+198h] [rbp+118h]
  __int128 v48; // [rsp+1A0h] [rbp+120h]
  __int128 v49; // [rsp+1B0h] [rbp+130h]
  __int128 v50; // [rsp+1C0h] [rbp+140h]
  __int128 v51; // [rsp+1D0h] [rbp+150h]
  __m128i v52; // [rsp+1E8h] [rbp+168h] BYREF
  __m128i v53; // [rsp+1F8h] [rbp+178h]
  __int64 v54; // [rsp+208h] [rbp+188h]
  __int64 v55; // [rsp+210h] [rbp+190h]
  __m128i v56; // [rsp+218h] [rbp+198h]
  __m128i v57; // [rsp+228h] [rbp+1A8h]
  __m128i v58; // [rsp+238h] [rbp+1B8h]
  __int128 v59; // [rsp+248h] [rbp+1C8h]
  __m128i v60; // [rsp+258h] [rbp+1D8h]
  __m128i v61; // [rsp+268h] [rbp+1E8h]
  __m128i v62; // [rsp+278h] [rbp+1F8h]
  __int128 v63; // [rsp+288h] [rbp+208h]
  char v64; // [rsp+298h] [rbp+218h]
  __int64 v65; // [rsp+2A8h] [rbp+228h]

  v65 = -2;
  v3.m128i_i64[1] = a3;
  v3.m128i_i64[0] = a2;
  sub_14056F2B0(&v24, a1);
  v51 = v30;
  v50 = v29;
  v49 = v28;
  v48 = v27;
  v36[0] = v3;
  si128 = _mm_load_si128((const __m128i *)v27);
  if ( *((_QWORD *)&v27 + 1) )
  {
    v4 = 369LL * *((_QWORD *)&v27 + 1) + 385;
    v5 = v27 - 368LL * *((_QWORD *)&v27 + 1) - 368;
    v7 = 16;
  }
  else
  {
    v7 = 0;
  }
  v52.m128i_i64[0] = v7;
  v52.m128i_i64[1] = v4;
  v53.m128i_i64[0] = v5;
  v53.m128i_i64[1] = v27;
  v54 = v27 + 16;
  v55 = v27 + *((_QWORD *)&v27 + 1) + 1;
  v56.m128i_i16[0] = ~(unsigned __int16)_mm_movemask_epi8(si128);
  v56.m128i_i64[1] = *((_QWORD *)&v28 + 1);
  v57.m128i_i64[0] = (__int64)v36;
  sub_14003B1D0(&v42, &v52);
  v37 = v42;
  v38 = v43;
  v39 = v44;
  *(_QWORD *)&v40 = v51;
  DWORD2(v40) = DWORD2(v51);
  v51 = v34;
  v50 = v33;
  v49 = v32;
  v48 = v31;
  v41 = v3;
  v10 = _mm_load_si128((const __m128i *)v31);
  if ( *((_QWORD *)&v31 + 1) )
  {
    v8 = 369LL * *((_QWORD *)&v31 + 1) + 385;
    v9 = v31 - 368LL * *((_QWORD *)&v31 + 1) - 368;
    v11 = 16;
  }
  else
  {
    v11 = 0;
  }
  v52.m128i_i64[0] = v11;
  v52.m128i_i64[1] = v8;
  v53.m128i_i64[0] = v9;
  v53.m128i_i64[1] = v31;
  v54 = v31 + 16;
  v55 = v31 + *((_QWORD *)&v31 + 1) + 1;
  v56.m128i_i16[0] = ~(unsigned __int16)_mm_movemask_epi8(v10);
  v56.m128i_i64[1] = *((_QWORD *)&v32 + 1);
  v57.m128i_i64[0] = (__int64)&v41;
  sub_14003B1D0(v36, &v52);
  v42 = _mm_loadu_si128(v36);
  v43 = v36[1];
  v44 = v36[2];
  *(_QWORD *)&v45 = v51;
  DWORD2(v45) = DWORD2(v51);
  v12 = v35;
  v13 = v24;
  if ( !v24 )
  {
    v54 = v26.m128i_i64[1];
    v53 = _mm_loadu_si128((const __m128i *)v25);
    v52 = v3;
    nullsub_1(v26.m128i_i64[1]);
    v14 = sub_140001650(40, 8);
    if ( !v14 )
      sub_1416C2D31(8, 40);
    goto LABEL_12;
  }
  if ( v24 == 1 )
  {
    v54 = v26.m128i_i64[1];
    v53 = _mm_loadu_si128((const __m128i *)v25);
    v52 = v3;
    nullsub_1(v26.m128i_i64[1]);
    v14 = sub_140001650(40, 8);
    if ( !v14 )
      sub_1416C2D31(8, 40);
LABEL_12:
    *(_QWORD *)(v14 + 32) = v54;
    v15 = v52;
    *(__m128i *)(v14 + 16) = v53;
    *(__m128i *)v14 = v15;
    v16 = &off_1417B3488;
    goto LABEL_17;
  }
  v17 = v26;
  if ( v25[1] )
  {
    v52 = v26;
    sub_1416C3060(
      (unsigned int)aCalledResultUn_6,
      43,
      (unsigned int)&v52,
      (unsigned int)&off_141760FE0,
      (__int64)&off_14175FB70);
  }
  nullsub_1(DWORD2(v51));
  v18 = (__m128i *)sub_140001650(16, 8);
  if ( !v18 )
  {
    v46 = (unsigned __int128)v17 >> 64;
    v47 = (__int64)v17;
    sub_1416C2D31(8, 16);
  }
  *v18 = v3;
  v52 = v17;
  v53.m128i_i64[0] = (__int64)v18;
  v53.m128i_i64[1] = (__int64)&unk_14175FB88;
  nullsub_1(v19);
  v14 = sub_140001650(32, 8);
  if ( !v14 )
    sub_1416C2D31(8, 32);
  v20 = v52;
  *(__m128i *)(v14 + 16) = v53;
  *(__m128i *)v14 = v20;
  v16 = &off_14175FBB0;
LABEL_17:
  v59 = v40;
  v58 = v39;
  v57 = v38;
  v56 = v37;
  v60 = _mm_load_si128(&v42);
  v61 = v43;
  v62 = v44;
  v63 = v45;
  v52.m128i_i64[0] = 1;
  v52.m128i_i64[1] = 1;
  v53 = (__m128i)v13;
  v54 = v14;
  v55 = (__int64)v16;
  v64 = v12;
  nullsub_1(v16);
  v21 = sub_140001650(184, 8);
  if ( !v21 )
    sub_1416C2D31(8, 184);
  v22 = v21;
  sub_141684120(v21, &v52, 184);
  return v22;
}