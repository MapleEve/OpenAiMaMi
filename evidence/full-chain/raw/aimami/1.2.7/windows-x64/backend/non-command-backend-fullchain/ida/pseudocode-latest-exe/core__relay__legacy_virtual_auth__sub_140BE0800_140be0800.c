// win 1.2.7 latest-exe | module src/core/relay/legacy_virtual_auth.rs | ea 0x140be0800 | successor of pre-update 0x140f6d450 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.955, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_140BE0800(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r14
  __m128i v19; // [rsp+20h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h]
  __m128i v22; // [rsp+50h] [rbp-30h]
  const __m128i *v23; // [rsp+60h] [rbp-20h]
  __int128 v24; // [rsp+68h] [rbp-18h]
  __int128 v25; // [rsp+78h] [rbp-8h]
  __int128 v26; // [rsp+88h] [rbp+8h]
  __int128 v27; // [rsp+98h] [rbp+18h]
  __int128 v28; // [rsp+A8h] [rbp+28h]
  __int128 v29; // [rsp+B8h] [rbp+38h]
  __int128 v30; // [rsp+C8h] [rbp+48h]
  __int128 v31; // [rsp+D8h] [rbp+58h]
  __int64 v32; // [rsp+E8h] [rbp+68h]
  __m128i v33; // [rsp+F0h] [rbp+70h] BYREF
  const __m128i *v34; // [rsp+100h] [rbp+80h]
  __int64 v35; // [rsp+110h] [rbp+90h] BYREF
  __int64 v36; // [rsp+118h] [rbp+98h]
  __m128i v37; // [rsp+120h] [rbp+A0h]
  const __m128i *v38; // [rsp+130h] [rbp+B0h]
  __int128 v39; // [rsp+138h] [rbp+B8h]
  __int128 v40; // [rsp+148h] [rbp+C8h]
  __int128 v41; // [rsp+158h] [rbp+D8h]
  __int128 v42; // [rsp+168h] [rbp+E8h]
  __int128 v43; // [rsp+178h] [rbp+F8h]
  __int128 v44; // [rsp+188h] [rbp+108h]
  __int128 v45; // [rsp+198h] [rbp+118h]
  __int128 v46; // [rsp+1A8h] [rbp+128h]
  __int64 v47; // [rsp+1B8h] [rbp+138h]
  unsigned __int128 v48; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v49; // [rsp+1D0h] [rbp+150h]
  __m128i v50; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v51; // [rsp+1F0h] [rbp+170h]
  __int64 v52; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v53; // [rsp+200h] [rbp+180h]
  __int64 v54; // [rsp+208h] [rbp+188h]
  __int64 v55; // [rsp+210h] [rbp+190h]

  v55 = -2;
  sub_1416CC450(&v35, a2, a3);
  if ( v35 == -1 )
  {
    v50.m128i_i64[0] = v36;
    *(_QWORD *)&v48 = &v50;
    *((_QWORD *)&v48 + 1) = sub_1416EA080;
    sub_1416DAFA0(&v20, &unk_141A899FC, &v48);
    v8 = v20;
    v9 = v21;
    v10 = v22.m128i_i64[0];
    if ( (v50.m128i_i8[0] & 3u) - 2 >= 2 && (v50.m128i_i8[0] & 3) != 0 )
    {
      *((_QWORD *)&v48 + 1) = v50.m128i_i64[0] - 1;
      LOBYTE(v48) = 3;
      sub_1416EBAD0((char *)&v48 + 8);
    }
    a1[1] = v8;
    a1[2] = v9;
    a1[3] = v10;
    *a1 = 10;
  }
  else
  {
    v54 = v35;
    v4 = v37.m128i_i64[0];
    v53 = v36;
    v48 = __PAIR128__(v37.m128i_u64[0], v36);
    v49 = 0;
    sub_140D8EBC0(&v20, &v48);
    v5 = v20;
    if ( v20 == -2 )
    {
      v52 = v21;
      v50.m128i_i64[0] = (__int64)&v52;
      v50.m128i_i64[1] = (__int64)sub_14166FAD0;
      sub_1416DAFA0(&v48, &unk_141A89A18, &v50);
      v50 = _mm_loadu_si128((const __m128i *)&v48);
      v51 = v49;
      sub_140032F30(&v52);
      v19 = _mm_load_si128(&v50);
      a1[3] = v51;
      *(__m128i *)(a1 + 1) = v19;
      *a1 = 10;
      v6 = v54;
      v7 = v53;
LABEL_30:
      if ( !v6 )
        return;
      v16 = v7;
      v17 = v6;
      goto LABEL_32;
    }
    v11 = v21;
    v33 = v22;
    v34 = v23;
    v39 = v24;
    v40 = v25;
    v41 = v26;
    v42 = v27;
    v43 = v28;
    v44 = v29;
    v45 = v30;
    v46 = v31;
    v47 = v32;
    v12 = _mm_load_si128(&v33);
    v38 = v23;
    v37 = v12;
    v35 = v20;
    v36 = v21;
    if ( (unsigned __int8)sub_14071CE40(&v35)
      || (v18 = v37.m128i_i64[1], v37.m128i_i64[1] != -1)
      && (unsigned __int64)v39 > 0x16
      && _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(_mm_loadu_si128(v38), (__m128i)xmmword_141A34F70),
             _mm_cmpeq_epi8(
               _mm_loadu_si128((const __m128i *)((char *)&v38->m128i_u32[1] + 3)),
               (__m128i)xmmword_141A34F60))) == 0xFFFF
      || !(unsigned __int8)sub_14071C530(&v35) && !(unsigned __int8)sub_140719130(&v35) )
    {
      nullsub_1(v14, v13);
      v15 = (__m128i *)sub_140001650(63, 1);
      if ( !v15 )
        sub_14196B2DB(1, 63);
      qmemcpy(&v15[1], "up is not user-owned auth; backup was preserved", 47);
      *v15 = _mm_loadu_si128((const __m128i *)&xmmword_141A8A182);
      *a1 = 10;
      a1[1] = 63;
      a1[2] = v15;
      a1[3] = 63;
      if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v11, v5, 1);
      if ( v37.m128i_i64[1] != -1 && v37.m128i_i64[1] )
        sub_140001660(v38, v37.m128i_i64[1], 1);
      v6 = v54;
      v7 = v53;
      if ( *((_QWORD *)&v39 + 1) != -1 && *((_QWORD *)&v39 + 1) )
        sub_140001660(v40, *((_QWORD *)&v39 + 1), 1);
      if ( (_QWORD)v41 != -1 && (_QWORD)v41 )
        sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
      if ( *((_QWORD *)&v42 + 1) != -1 && *((_QWORD *)&v42 + 1) )
        sub_140001660(v43, *((_QWORD *)&v42 + 1), 1);
      if ( (_QWORD)v44 != -1 && (_QWORD)v44 )
        sub_140001660(*((_QWORD *)&v44 + 1), v44, 1);
      if ( *((_QWORD *)&v45 + 1) != -1 )
      {
        if ( *((_QWORD *)&v45 + 1) )
          sub_140001660(v46, *((_QWORD *)&v45 + 1), 1);
      }
      goto LABEL_30;
    }
    a1[1] = v54;
    a1[2] = v53;
    a1[3] = v4;
    *a1 = -1;
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v11, v5, 1);
    if ( v18 != -1 && v18 )
      sub_140001660(v38, v18, 1);
    if ( *((_QWORD *)&v39 + 1) != -1 && *((_QWORD *)&v39 + 1) )
      sub_140001660(v40, *((_QWORD *)&v39 + 1), 1);
    if ( (_QWORD)v41 != -1 && (_QWORD)v41 )
      sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
    if ( *((_QWORD *)&v42 + 1) != -1 && *((_QWORD *)&v42 + 1) )
      sub_140001660(v43, *((_QWORD *)&v42 + 1), 1);
    if ( (_QWORD)v44 != -1 && (_QWORD)v44 )
      sub_140001660(*((_QWORD *)&v44 + 1), v44, 1);
    v17 = *((_QWORD *)&v45 + 1);
    if ( *((_QWORD *)&v45 + 1) != -1 && *((_QWORD *)&v45 + 1) )
    {
      v16 = v46;
LABEL_32:
      sub_140001660(v16, v17, 1);
    }
  }
}
