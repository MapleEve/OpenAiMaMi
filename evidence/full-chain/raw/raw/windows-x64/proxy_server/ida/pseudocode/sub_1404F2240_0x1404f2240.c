// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1404f2240
// name: sub_1404F2240
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1404F2240(__int64 a1, const __m128i *a2)
{
  char v2; // of
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i v5; // xmm0
  const __m128i *v6; // rax
  volatile signed __int64 *v7; // rsi
  __int64 v8; // rt0
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rt0
  volatile signed __int64 *v11; // rbx
  __int64 v12; // rt0
  volatile signed __int64 *v13; // r14
  __int64 v14; // rt0
  volatile signed __int64 *v15; // r15
  __int64 v16; // rt0
  volatile signed __int64 *v17; // r12
  __int64 v18; // rt0
  __m128i si128; // xmm0
  __int64 v20; // r10
  char v21; // of
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i v24; // xmm0
  __int64 v25; // rt0
  __int64 v26; // rt0
  __int64 v27; // rt0
  __int64 v28; // rt0
  __int64 v29; // rt0
  __int64 v30; // rt0
  __m128i v31; // xmm0
  __int64 v32; // r10
  char v33; // bl
  __int64 v34; // rsi
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v41; // [rsp+28h] [rbp-58h] BYREF
  __int64 v42; // [rsp+30h] [rbp-50h] BYREF
  __m128i v43; // [rsp+38h] [rbp-48h]
  __m128i v44; // [rsp+48h] [rbp-38h] BYREF
  __int128 v45; // [rsp+58h] [rbp-28h]
  __int128 v46; // [rsp+68h] [rbp-18h]
  __int128 v47; // [rsp+78h] [rbp-8h]
  __m128i v48; // [rsp+88h] [rbp+8h] BYREF
  __int128 v49; // [rsp+98h] [rbp+18h]
  __int128 v50; // [rsp+A8h] [rbp+28h]
  __int128 v51; // [rsp+B8h] [rbp+38h]
  char v52; // [rsp+C8h] [rbp+48h]
  __m128i v53; // [rsp+D0h] [rbp+50h]
  __int128 v54; // [rsp+E0h] [rbp+60h]
  __int128 v55; // [rsp+F0h] [rbp+70h]
  __int128 v56; // [rsp+100h] [rbp+80h]
  _QWORD v57[6]; // [rsp+110h] [rbp+90h] BYREF
  __m128i v58; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v59; // [rsp+150h] [rbp+D0h]
  __int128 v60; // [rsp+160h] [rbp+E0h]
  __int128 v61; // [rsp+170h] [rbp+F0h]
  __m128i v62; // [rsp+180h] [rbp+100h] BYREF
  __m256i v63; // [rsp+190h] [rbp+110h]
  __m128i v64; // [rsp+1B0h] [rbp+130h]
  __int128 v65; // [rsp+1C0h] [rbp+140h]
  __int128 v66; // [rsp+1D0h] [rbp+150h]
  __int128 v67; // [rsp+1E0h] [rbp+160h]
  __m128i v68; // [rsp+1F0h] [rbp+170h]
  __int128 v69; // [rsp+200h] [rbp+180h]
  __int128 v70; // [rsp+210h] [rbp+190h]
  __int128 v71; // [rsp+220h] [rbp+1A0h]
  char v72; // [rsp+230h] [rbp+1B0h]
  __m128i v73; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v74; // [rsp+250h] [rbp+1D0h]
  __int128 v75; // [rsp+260h] [rbp+1E0h]
  __int128 v76; // [rsp+270h] [rbp+1F0h]
  __m128i v77; // [rsp+280h] [rbp+200h] BYREF
  __int128 v78; // [rsp+290h] [rbp+210h]
  __int128 v79; // [rsp+2A0h] [rbp+220h]
  const __m128i *v80; // [rsp+2B0h] [rbp+230h]
  char v81; // [rsp+2B9h] [rbp+239h]
  char v82; // [rsp+2BAh] [rbp+23Ah]
  char v83; // [rsp+2BBh] [rbp+23Bh]
  char v84; // [rsp+2BDh] [rbp+23Dh]
  __int64 v85; // [rsp+2C0h] [rbp+240h]

  v85 = -2;
  v80 = a2;
  v84 = 1;
  sub_14056F2B0(&v41, a1);
  v5 = _mm_loadu_si128(&v44);
  v76 = v47;
  v75 = v46;
  v74 = v45;
  v73 = v5;
  v6 = v80;
  v7 = (volatile signed __int64 *)v80->m128i_i64[0];
  v8 = _InterlockedIncrement64((volatile signed __int64 *)v80->m128i_i64[0]);
  if ( (v8 < 0) ^ v2 | (v8 == 0) )
    goto LABEL_27;
  v9 = (volatile signed __int64 *)v6->m128i_i64[1];
  v10 = _InterlockedIncrement64(v9);
  if ( (v10 < 0) ^ v2 | (v10 == 0) )
    goto LABEL_27;
  v11 = (volatile signed __int64 *)v6[1].m128i_i64[0];
  v12 = _InterlockedIncrement64(v11);
  if ( (v12 < 0) ^ v2 | (v12 == 0) )
    goto LABEL_27;
  v13 = (volatile signed __int64 *)v6[1].m128i_i64[1];
  v14 = _InterlockedIncrement64(v13);
  if ( (v14 < 0) ^ v2 | (v14 == 0) )
    goto LABEL_27;
  v15 = (volatile signed __int64 *)v6[2].m128i_i64[0];
  v16 = _InterlockedIncrement64(v15);
  if ( (v16 < 0) ^ v2 | (v16 == 0) )
    goto LABEL_27;
  v17 = (volatile signed __int64 *)v6[2].m128i_i64[1];
  v18 = _InterlockedIncrement64(v17);
  if ( (v18 < 0) ^ v2 | (v18 == 0) )
    goto LABEL_27;
  v77.m128i_i64[0] = (__int64)v7;
  v77.m128i_i64[1] = (__int64)v9;
  *(_QWORD *)&v78 = v11;
  *((_QWORD *)&v78 + 1) = v13;
  *(_QWORD *)&v79 = v15;
  *((_QWORD *)&v79 + 1) = v17;
  si128 = _mm_load_si128((const __m128i *)v44.m128i_i64[0]);
  if ( v44.m128i_i64[1] )
  {
    v3 = 369 * v44.m128i_i64[1] + 385;
    v4 = v44.m128i_i64[0] - 368 * v44.m128i_i64[1] - 368;
    v20 = 16;
  }
  else
  {
    v20 = 0;
  }
  v62.m128i_i64[0] = v20;
  v62.m128i_i64[1] = v3;
  v63.m256i_i64[0] = v4;
  v63.m256i_i64[1] = v44.m128i_i64[0];
  v63.m256i_i64[2] = v44.m128i_i64[0] + 16;
  v63.m256i_i64[3] = v44.m128i_i64[0] + v44.m128i_i64[1] + 1;
  v64.m128i_i16[0] = ~(unsigned __int16)_mm_movemask_epi8(si128);
  v64.m128i_i64[1] = *((_QWORD *)&v45 + 1);
  *(_QWORD *)&v65 = &v77;
  sub_14003B510(&v58, &v62);
  v53 = _mm_loadu_si128(&v58);
  v54 = v59;
  v55 = v60;
  *(_QWORD *)&v56 = v76;
  DWORD2(v56) = DWORD2(v76);
  v83 = 0;
  sub_14052E570(&v77);
  v24 = _mm_loadu_si128(&v48);
  v76 = v51;
  v75 = v50;
  v74 = v49;
  v73 = v24;
  v25 = _InterlockedIncrement64(v7);
  if ( (v25 < 0) ^ v21 | (v25 == 0)
    || (v26 = _InterlockedIncrement64(v9), (v26 < 0) ^ v21 | (v26 == 0))
    || (v27 = _InterlockedIncrement64(v11), (v27 < 0) ^ v21 | (v27 == 0))
    || (v28 = _InterlockedIncrement64(v13), (v28 < 0) ^ v21 | (v28 == 0))
    || (v29 = _InterlockedIncrement64(v15), (v29 < 0) ^ v21 | (v29 == 0))
    || (v30 = _InterlockedIncrement64(v17), (v30 < 0) ^ v21 | (v30 == 0)) )
  {
LABEL_27:
    BUG();
  }
  v57[0] = v7;
  v57[1] = v9;
  v57[2] = v11;
  v57[3] = v13;
  v57[4] = v15;
  v57[5] = v17;
  v31 = _mm_load_si128((const __m128i *)v48.m128i_i64[0]);
  if ( v48.m128i_i64[1] )
  {
    v22 = 369 * v48.m128i_i64[1] + 385;
    v23 = v48.m128i_i64[0] - 368 * v48.m128i_i64[1] - 368;
    v32 = 16;
  }
  else
  {
    v32 = 0;
  }
  v62.m128i_i64[0] = v32;
  v62.m128i_i64[1] = v22;
  v63.m256i_i64[0] = v23;
  v63.m256i_i64[1] = v48.m128i_i64[0];
  v63.m256i_i64[2] = v48.m128i_i64[0] + 16;
  v63.m256i_i64[3] = v48.m128i_i64[0] + v48.m128i_i64[1] + 1;
  v64.m128i_i16[0] = ~(unsigned __int16)_mm_movemask_epi8(v31);
  v64.m128i_i64[1] = *((_QWORD *)&v49 + 1);
  *(_QWORD *)&v65 = v57;
  sub_14003B510(&v77, &v62);
  v58 = _mm_loadu_si128(&v77);
  v59 = v78;
  v60 = v79;
  *(_QWORD *)&v61 = v76;
  DWORD2(v61) = DWORD2(v76);
  v82 = 0;
  sub_14052E570(v57);
  v33 = v52;
  v34 = v41;
  if ( v41 == 2 )
  {
    v81 = BYTE1(v42);
    if ( BYTE1(v42) )
    {
      v62 = v43;
      sub_1416C3060(
        (unsigned int)aCalledResultUn_6,
        43,
        (unsigned int)&v62,
        (unsigned int)&off_141760FE0,
        (__int64)&off_1417617A0);
    }
    v35 = _mm_loadu_si128(v80);
    v36 = v80[1];
    *(__m128i *)&v63.m256i_u64[2] = v80[2];
    *(__m128i *)v63.m256i_i8 = v36;
    v62 = v35;
    (*(void (__fastcall **)(__m128i *, __int64, __m128i *))(v43.m128i_i64[1] + 32))(&v73, v43.m128i_i64[0], &v62);
    v77 = _mm_loadu_si128(&v73);
    *(_QWORD *)&v78 = v74;
    v34 = 1;
  }
  else
  {
    *(_QWORD *)&v78 = v43.m128i_i64[1];
    v77 = _mm_loadu_si128((const __m128i *)&v42);
    sub_14052E570(v80);
  }
  v67 = v56;
  v66 = v55;
  v65 = v54;
  v64 = v53;
  v68 = v58;
  v69 = v59;
  v70 = v60;
  v71 = v61;
  *(__m128i *)&v63.m256i_u64[1] = _mm_load_si128(&v77);
  v63.m256i_i64[3] = v78;
  v62.m128i_i64[0] = 1;
  v62.m128i_i64[1] = 1;
  v63.m256i_i64[0] = v34;
  v72 = v33;
  nullsub_1(v37);
  v38 = sub_140001650(184, 8);
  if ( !v38 )
    sub_1416C2D31(8, 184);
  v39 = v38;
  sub_141684120(v38, &v62, 184);
  return v39;
}