// win 1.2.7 latest-exe | module src/core/sessions/worktree.rs | ea 0x1401bd260 | successor of pre-update 0x140be1e00 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.862, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
_OWORD *__fastcall sub_1401BD260(_OWORD *a1, __int64 a2, __int64 a3)
{
  _OWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  __m128i si128; // xmm0
  unsigned __int64 v19; // r10
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r14
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
  __int64 v41; // rbx
  __int64 v42; // r13
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
  _QWORD *v53; // r14
  __int64 v54; // r12
  _QWORD *v55; // rsi
  unsigned __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v59; // rsi
  __int64 v60; // rsi
  unsigned __int64 v61; // [rsp+20h] [rbp-60h] BYREF
  __int64 v62; // [rsp+28h] [rbp-58h] BYREF
  _OWORD *v63; // [rsp+30h] [rbp-50h]
  __int64 v64; // [rsp+38h] [rbp-48h]
  __m128i v65; // [rsp+40h] [rbp-40h] BYREF
  __int128 v66; // [rsp+50h] [rbp-30h]
  __int64 v67; // [rsp+60h] [rbp-20h]
  unsigned __int64 v68; // [rsp+68h] [rbp-18h]
  __int64 v69; // [rsp+70h] [rbp-10h]
  __int64 v70; // [rsp+78h] [rbp-8h] BYREF
  __int64 v71; // [rsp+80h] [rbp+0h]
  __m128i *v72; // [rsp+88h] [rbp+8h]
  __m128i v73; // [rsp+90h] [rbp+10h] BYREF
  __int128 v74; // [rsp+A0h] [rbp+20h]
  _QWORD *v75; // [rsp+B0h] [rbp+30h]
  __int64 v76; // [rsp+B8h] [rbp+38h]
  __int16 v77; // [rsp+C0h] [rbp+40h]
  __int64 v78; // [rsp+C8h] [rbp+48h]
  __int64 v79; // [rsp+D0h] [rbp+50h]
  __int64 v80; // [rsp+D8h] [rbp+58h]
  _BYTE v81[2]; // [rsp+E5h] [rbp+65h] BYREF
  char v82; // [rsp+E7h] [rbp+67h]
  __int64 v83; // [rsp+E8h] [rbp+68h]

  v83 = -2;
  v5 = a1;
  v62 = a2;
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
  v74 = xmmword_141A058A0;
  v73 = *(__m128i *)&off_141A05890;
  v75 = (_QWORD *)v11;
  v76 = v12;
  v13 = *(_QWORD *)(a3 + 32);
  v70 = *(_QWORD *)(a3 + 40);
  v71 = a2;
  v72 = &v73;
  v14 = *(__m128i *)a3;
  v66 = *(_OWORD *)(a3 + 16);
  v65 = v14;
  sub_140023100(&v65, v13, &v70);
  v17 = *((_QWORD *)&v74 + 1);
  si128 = _mm_load_si128((const __m128i *)v73.m128i_i64[0]);
  if ( v73.m128i_i64[1] )
  {
    v19 = (24 * v73.m128i_i64[1] + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v15 = v73.m128i_i64[1] + v19 + 17;
    v16 = v73.m128i_i64[0] - v19;
    v20 = 16;
  }
  else
  {
    v20 = 0;
  }
  *((_QWORD *)&v74 + 1) = v73.m128i_i64[0];
  v75 = (_QWORD *)(v73.m128i_i64[0] + 16);
  v76 = v73.m128i_i64[0] + v73.m128i_i64[1] + 1;
  v77 = ~(unsigned __int16)_mm_movemask_epi8(si128);
  v78 = v17;
  v73.m128i_i64[0] = v20;
  v73.m128i_i64[1] = v15;
  *(_QWORD *)&v74 = v16;
  sub_14020D1B0(&v70, &v73);
  v23 = v71;
  v24 = (unsigned __int64)v72;
  if ( (unsigned __int64)v72 >= 2 )
  {
    if ( (unsigned __int64)v72 >= 0x15 )
    {
      v82 = 1;
      sub_141587440(v71, v72, v81);
    }
    else
    {
      sub_140CC2B00(v71, v72, 1, v81, v61, v62, v63, v64);
    }
  }
  else if ( !v72 )
  {
    v82 = 1;
    v30 = sub_1416AE140(v22);
    if ( *(_BYTE *)(v30 + 16) == 1 )
    {
      v35 = *(_QWORD *)v30;
      v36 = *(_QWORD *)(v30 + 8);
    }
    else
    {
      v82 = 1;
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
    if ( v70 )
      sub_140001660(v23, 24 * v70, 8);
    return v5;
  }
  v80 = v23;
  v61 = v24;
  v25 = 4;
  if ( v24 < 4 )
    v25 = v24;
  v26 = 3LL * (unsigned int)(8 * v25);
  nullsub_1(v22, v21);
  v27 = sub_140001650(v26, 8);
  if ( !v27 )
  {
    v82 = 1;
    sub_14196B2DB(8, v26);
  }
  v28 = v27;
  v63 = v5;
  if ( (unsigned __int64)(v25 - 1) >= 3 )
  {
    v37 = (_QWORD *)(v27 + 88);
    v38 = 0;
    v29 = v80;
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
    while ( (v25 & 4) != v38 );
  }
  else
  {
    v29 = v80;
    v39 = v27 + 16;
    v40 = 0;
    do
    {
      *(_QWORD *)(v27 + v40) = 0;
      *(_QWORD *)(v39 + v40 - 8) = 8;
      *(_QWORD *)(v39 + v40) = 0;
      v40 += 24;
    }
    while ( 24 * (v25 & 3) != v40 );
  }
  v65.m128i_i64[0] = v25;
  v65.m128i_i64[1] = v27;
  *(_QWORD *)&v66 = v25;
  v41 = 24 * v24;
  v73.m128i_i64[0] = v29;
  v64 = v70;
  *(_QWORD *)&v74 = v70;
  *((_QWORD *)&v74 + 1) = v29 + v41;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  while ( 1 )
  {
    v49 = *(_QWORD *)(v29 + v43);
    if ( v49 == -1 )
      break;
    v50 = *(_QWORD *)(v29 + v43 + 8);
    v51 = *(_QWORD *)(v29 + v43 + 16);
    v67 = v43;
    v68 = v44;
    v79 = v49;
    v69 = v50;
    if ( HIDWORD(v44) )
      v52 = v42;
    else
      v52 = (unsigned int)v44 % (unsigned int)v25;
    v53 = (_QWORD *)(v28 + 24 * v52);
    v54 = v53[2];
    if ( v54 == *v53 )
      sub_141939F90(v28 + 24 * v52);
    v45 = v53[1];
    v46 = 3 * v54;
    *(_QWORD *)(v45 + 8 * v46) = v79;
    *(_QWORD *)(v45 + 8 * v46 + 8) = v69;
    *(_QWORD *)(v45 + 8 * v46 + 16) = v51;
    v53[2] = v54 + 1;
    v43 = v67 + 24;
    v47 = v42 + 1;
    v48 = v42 + 1 == v25;
    v42 = 0;
    if ( !v48 )
      v42 = v47;
    v44 = v68 + 1;
    v29 = v80;
    if ( v41 == v43 )
      goto LABEL_37;
  }
  if ( v41 - 24 != v43 )
  {
    v55 = (_QWORD *)(v29 + v43 + 32);
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
LABEL_37:
  if ( v64 )
    sub_140001660(v29, 24 * v64, 8);
  *(_QWORD *)&v74 = v66;
  v73 = _mm_loadu_si128(&v65);
  *((_QWORD *)&v74 + 1) = &v62;
  v75 = &v61;
  v81[1] = 0;
  v5 = v63;
  sub_140431A90(v63, &v73, (__int64)&off_141A06400);
  return v5;
}
