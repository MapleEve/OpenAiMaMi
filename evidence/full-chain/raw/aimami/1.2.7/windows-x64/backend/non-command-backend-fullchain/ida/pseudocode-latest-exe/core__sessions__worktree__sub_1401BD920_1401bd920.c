// win 1.2.7 latest-exe | module src/core/sessions/worktree.rs | ea 0x1401bd920 | successor of pre-update 0x140be2630 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.885, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
_OWORD *__fastcall sub_1401BD920(_OWORD *a1, __int64 a2, __int128 *a3)
{
  _OWORD *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  __m128i si128; // xmm0
  unsigned __int64 v20; // r10
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r13
  unsigned __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r14
  __int64 v42; // rdi
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  bool v48; // zf
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rsi
  __int64 v52; // rdx
  _QWORD *v53; // r15
  __int64 v54; // r13
  _QWORD *v55; // rsi
  unsigned __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v59; // rsi
  __int64 v60; // rsi
  __int64 v61; // [rsp+28h] [rbp-58h] BYREF
  _OWORD *v62; // [rsp+30h] [rbp-50h]
  __int64 v63; // [rsp+38h] [rbp-48h]
  __m128i v64; // [rsp+40h] [rbp-40h] BYREF
  __int64 v65; // [rsp+50h] [rbp-30h]
  __int64 v66; // [rsp+58h] [rbp-28h]
  __m128i *v67; // [rsp+60h] [rbp-20h]
  __int128 v68; // [rsp+70h] [rbp-10h] BYREF
  __int128 v69; // [rsp+80h] [rbp+0h]
  __int64 v70; // [rsp+90h] [rbp+10h]
  unsigned __int64 v71; // [rsp+98h] [rbp+18h]
  __int64 v72; // [rsp+A0h] [rbp+20h]
  __int64 v73; // [rsp+A8h] [rbp+28h]
  __m128i v74; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v75; // [rsp+C0h] [rbp+40h]
  __m128i **v76; // [rsp+D0h] [rbp+50h]
  __int64 v77; // [rsp+D8h] [rbp+58h]
  __int16 v78; // [rsp+E0h] [rbp+60h]
  __int64 v79; // [rsp+E8h] [rbp+68h]
  __m128i *v80; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v81; // [rsp+F8h] [rbp+78h]
  _BYTE v82[2]; // [rsp+105h] [rbp+85h] BYREF
  char v83; // [rsp+107h] [rbp+87h]
  __int64 v84; // [rsp+108h] [rbp+88h]

  v84 = -2;
  v5 = a1;
  v61 = a2;
  v6 = sub_1416AE140(a1);
  if ( *(_BYTE *)(v6 + 16) == 1 )
  {
    v11 = *(_QWORD *)v6;
    v12 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v59 = v6;
    v11 = sub_1416C5230(v8, v7, v9, v10);
    v6 = v59;
    *(_QWORD *)v59 = v11;
    *(_QWORD *)(v59 + 8) = v12;
    *(_BYTE *)(v59 + 16) = 1;
  }
  *(_QWORD *)v6 = v11 + 1;
  v75 = xmmword_141A058A0;
  v74 = *(__m128i *)&off_141A05890;
  v76 = (__m128i **)v11;
  v77 = v12;
  v13 = *((_QWORD *)a3 + 4);
  v14 = *((_QWORD *)a3 + 7);
  v64 = *(__m128i *)((char *)a3 + 40);
  v65 = v14;
  v66 = a2;
  v67 = &v74;
  v80 = &v64;
  v15 = *a3;
  v69 = a3[1];
  v68 = v15;
  sub_140022B20(&v68, v13, &v80);
  v18 = *((_QWORD *)&v75 + 1);
  si128 = _mm_load_si128((const __m128i *)v74.m128i_i64[0]);
  if ( v74.m128i_i64[1] )
  {
    v20 = (24 * v74.m128i_i64[1] + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v16 = v74.m128i_i64[1] + v20 + 17;
    v17 = v74.m128i_i64[0] - v20;
    v21 = 16;
  }
  else
  {
    v21 = 0;
  }
  *((_QWORD *)&v75 + 1) = v74.m128i_i64[0];
  v76 = (__m128i **)(v74.m128i_i64[0] + 16);
  v77 = v74.m128i_i64[0] + v74.m128i_i64[1] + 1;
  v78 = ~(unsigned __int16)_mm_movemask_epi8(si128);
  v79 = v18;
  v74.m128i_i64[0] = v21;
  v74.m128i_i64[1] = v16;
  *(_QWORD *)&v75 = v17;
  sub_14020D1B0(&v68, &v74);
  v24 = *((_QWORD *)&v68 + 1);
  v25 = v69;
  if ( (unsigned __int64)v69 >= 2 )
  {
    if ( (unsigned __int64)v69 >= 0x15 )
    {
      v83 = 1;
      sub_141587440(*((_QWORD *)&v68 + 1), v69, v82);
    }
    else
    {
      sub_140CC2B00(*((_QWORD *)&v68 + 1), v69, 1, v82);
    }
  }
  else if ( !(_QWORD)v69 )
  {
    v83 = 1;
    v30 = sub_1416AE140(v23);
    if ( *(_BYTE *)(v30 + 16) == 1 )
    {
      v35 = *(_QWORD *)v30;
      v36 = *(_QWORD *)(v30 + 8);
    }
    else
    {
      v83 = 1;
      v60 = v30;
      v35 = sub_1416C5230(v32, v31, v33, v34);
      v30 = v60;
      *(_QWORD *)v60 = v35;
      *(_QWORD *)(v60 + 8) = v36;
      *(_BYTE *)(v60 + 16) = 1;
    }
    *(_QWORD *)v30 = v35 + 1;
    v5[1] = xmmword_141A058A0;
    *v5 = *(_OWORD *)&off_141A05890;
    *((_QWORD *)v5 + 4) = v35;
    *((_QWORD *)v5 + 5) = v36;
    if ( (_QWORD)v68 )
      sub_140001660(v24, 24 * v68, 8);
    return v5;
  }
  v62 = v5;
  v80 = (__m128i *)v25;
  v26 = 4;
  if ( v25 < 4 )
    v26 = v25;
  v27 = 3LL * (unsigned int)(8 * v26);
  nullsub_1(v23, v22);
  v28 = sub_140001650(v27, 8);
  if ( !v28 )
  {
    v83 = 1;
    sub_14196B2DB(8, v27);
  }
  v29 = v28;
  if ( (unsigned __int64)(v26 - 1) >= 3 )
  {
    v37 = (_QWORD *)(v28 + 88);
    v38 = 0;
    do
    {
      *(v37 - 11) = 0;
      *(v37 - 10) = 8;
      *(_OWORD *)(v37 - 9) = 0;
      *(v37 - 7) = 8;
      *((_OWORD *)v37 - 3) = 0;
      *(v37 - 4) = 8;
      *(_OWORD *)(v37 - 3) = 0;
      v38 += 4;
      *(v37 - 1) = 8;
      *v37 = 0;
      v37 += 12;
    }
    while ( (v26 & 4) != v38 );
  }
  else
  {
    v39 = v28 + 16;
    v40 = 0;
    do
    {
      *(_QWORD *)(v28 + v40) = 0;
      *(_QWORD *)(v39 + v40 - 8) = 8;
      *(_QWORD *)(v39 + v40) = 0;
      v40 += 24;
    }
    while ( 24 * (v26 & 3) != v40 );
  }
  v64.m128i_i64[0] = v26;
  v64.m128i_i64[1] = v28;
  v65 = v26;
  v41 = 24 * v25;
  v74.m128i_i64[0] = v24;
  v63 = v68;
  *(_QWORD *)&v75 = v68;
  *((_QWORD *)&v75 + 1) = v41 + v24;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v73 = v24;
  while ( 1 )
  {
    v49 = *(_QWORD *)(v24 + v43);
    if ( v49 == -1 )
      break;
    v50 = *(_QWORD *)(v24 + v43 + 8);
    v51 = *(_QWORD *)(v24 + v43 + 16);
    v70 = v43;
    v71 = v44;
    v81 = v49;
    v72 = v50;
    if ( HIDWORD(v44) )
      v52 = v42;
    else
      v52 = (unsigned int)v44 % (unsigned int)v26;
    v53 = (_QWORD *)(v29 + 24 * v52);
    v54 = v53[2];
    if ( v54 == *v53 )
      sub_141939F90(v29 + 24 * v52);
    v45 = v53[1];
    v46 = 3 * v54;
    *(_QWORD *)(v45 + 8 * v46) = v81;
    *(_QWORD *)(v45 + 8 * v46 + 8) = v72;
    *(_QWORD *)(v45 + 8 * v46 + 16) = v51;
    v53[2] = v54 + 1;
    v43 = v70 + 24;
    v47 = v42 + 1;
    v48 = v42 + 1 == v26;
    v42 = 0;
    if ( !v48 )
      v42 = v47;
    v44 = v71 + 1;
    v24 = v73;
    if ( v41 == v43 )
      goto LABEL_36;
  }
  if ( v41 - 24 != v43 )
  {
    v55 = (_QWORD *)(v43 + v24 + 32);
    v56 = (v41 - v43 - 24) / 0x18uLL;
    do
    {
      v57 = *(v55 - 1);
      if ( v57 )
        sub_140001660(*v55, v57, 1);
      v55 += 3;
      --v56;
    }
    while ( v56 );
  }
LABEL_36:
  if ( v63 )
    sub_140001660(v24, 24 * v63, 8);
  *(_QWORD *)&v75 = v65;
  v74 = _mm_loadu_si128(&v64);
  *((_QWORD *)&v75 + 1) = &v61;
  v76 = &v80;
  v82[1] = 0;
  v5 = v62;
  sub_140432470(v62, &v74, (__int64)&off_141A06400);
  return v5;
}
