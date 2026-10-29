// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x140be2630 | name sub_140BE2630
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140BE2630(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  __m128i si128; // xmm0
  unsigned __int64 v16; // r10
  __int64 v17; // r10
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  unsigned __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  char *v33; // r12
  __int64 v34; // rcx
  __int64 v35; // rsi
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r9
  __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  _QWORD *v40; // r12
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  bool v45; // zf
  unsigned __int64 v46; // r14
  _QWORD *v47; // r12
  __int64 v48; // rdx
  unsigned __int64 v50; // r8
  __int64 v51; // rsi
  __int64 v52; // rsi
  _QWORD v53[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v54; // [rsp+30h] [rbp-50h]
  __int64 v55; // [rsp+38h] [rbp-48h]
  char *v56; // [rsp+40h] [rbp-40h]
  _QWORD *v57; // [rsp+48h] [rbp-38h]
  __m128i v58; // [rsp+50h] [rbp-30h] BYREF
  __int64 v59; // [rsp+60h] [rbp-20h]
  __int64 v60; // [rsp+68h] [rbp-18h]
  __m128i *v61; // [rsp+70h] [rbp-10h]
  __int128 v62; // [rsp+80h] [rbp+0h] BYREF
  __int128 v63; // [rsp+90h] [rbp+10h]
  unsigned __int64 v64; // [rsp+A8h] [rbp+28h]
  __m128i *v65; // [rsp+B0h] [rbp+30h] BYREF
  char *v66; // [rsp+B8h] [rbp+38h]
  __int64 v67; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v68; // [rsp+C8h] [rbp+48h]
  __m128i v69; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v70; // [rsp+E0h] [rbp+60h]
  _QWORD *v71; // [rsp+F0h] [rbp+70h]
  __int64 v72; // [rsp+F8h] [rbp+78h]
  __int16 v73; // [rsp+100h] [rbp+80h]
  __int64 v74; // [rsp+108h] [rbp+88h]
  __int64 v75; // [rsp+118h] [rbp+98h]
  _BYTE v76[2]; // [rsp+125h] [rbp+A5h] BYREF
  char v77; // [rsp+127h] [rbp+A7h]
  __int64 v78; // [rsp+128h] [rbp+A8h]

  v78 = -2;
  v5 = a1;
  v53[0] = a2;
  v6 = sub_14167F170(a1);
  if ( *(_BYTE *)(v6 + 16) == 1 )
  {
    v7 = *(_QWORD *)v6;
    v8 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v51 = v6;
    v7 = sub_141696260();
    v6 = v51;
    *(_QWORD *)v51 = v7;
    *(_QWORD *)(v51 + 8) = v8;
    *(_BYTE *)(v51 + 16) = 1;
  }
  *(_QWORD *)v6 = v7 + 1;
  v70 = xmmword_141A39750;
  v69 = *(__m128i *)&off_141A39740;
  v71 = (_QWORD *)v7;
  v72 = v8;
  v9 = *((_QWORD *)a3 + 4);
  v10 = *((_QWORD *)a3 + 7);
  v58 = *(__m128i *)((char *)a3 + 40);
  v59 = v10;
  v60 = a2;
  v61 = &v69;
  v65 = &v58;
  v11 = *a3;
  v63 = a3[1];
  v62 = v11;
  sub_140295D70(&v62, v9, &v65);
  v14 = *((_QWORD *)&v70 + 1);
  si128 = _mm_load_si128((const __m128i *)v69.m128i_i64[0]);
  if ( v69.m128i_i64[1] )
  {
    v16 = (24 * v69.m128i_i64[1] + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v12 = v69.m128i_i64[1] + v16 + 17;
    v13 = v69.m128i_i64[0] - v16;
    v17 = 16;
  }
  else
  {
    v17 = 0;
  }
  *((_QWORD *)&v70 + 1) = v69.m128i_i64[0];
  v71 = (_QWORD *)(v69.m128i_i64[0] + 16);
  v72 = v69.m128i_i64[0] + v69.m128i_i64[1] + 1;
  v73 = ~(unsigned __int16)_mm_movemask_epi8(si128);
  v74 = v14;
  v69.m128i_i64[0] = v17;
  v69.m128i_i64[1] = v12;
  *(_QWORD *)&v70 = v13;
  sub_1403D6640(&v62, &v69);
  v19 = *((_QWORD **)&v62 + 1);
  v20 = v63;
  if ( (unsigned __int64)v63 >= 2 )
  {
    if ( (unsigned __int64)v63 >= 0x15 )
    {
      v77 = 1;
      sub_1415584D0(*((_QWORD *)&v62 + 1), v63, v76);
    }
    else
    {
      sub_140DFF490(*((_QWORD *)&v62 + 1), v63, 1, v76);
    }
  }
  else if ( !(_QWORD)v63 )
  {
    v77 = 1;
    v25 = sub_14167F170(v18);
    if ( *(_BYTE *)(v25 + 16) == 1 )
    {
      v26 = *(_QWORD *)v25;
      v27 = *(_QWORD *)(v25 + 8);
    }
    else
    {
      v77 = 1;
      v52 = v25;
      v26 = sub_141696260();
      v25 = v52;
      *(_QWORD *)v52 = v26;
      *(_QWORD *)(v52 + 8) = v27;
      *(_BYTE *)(v52 + 16) = 1;
    }
    *(_QWORD *)v25 = v26 + 1;
    *(_OWORD *)(v5 + 16) = xmmword_141A39750;
    *(_OWORD *)v5 = *(_OWORD *)&off_141A39740;
    *(_QWORD *)(v5 + 32) = v26;
    *(_QWORD *)(v5 + 40) = v27;
    if ( (_QWORD)v62 )
      sub_140001660(v19, 24 * v62, 8);
    return v5;
  }
  v54 = v5;
  v65 = (__m128i *)v20;
  v21 = 4;
  if ( v20 < 4 )
    v21 = v20;
  v22 = 3LL * (unsigned int)(8 * v21);
  nullsub_1(v18);
  v23 = sub_140001650(v22, 8);
  if ( !v23 )
  {
    v77 = 1;
    sub_141938D2B(8, v22);
  }
  v24 = v23;
  if ( (unsigned __int64)(v21 - 1) >= 3 )
  {
    v28 = (_QWORD *)(v23 + 88);
    v29 = 0;
    do
    {
      *(v28 - 11) = 0;
      *(v28 - 10) = 8;
      *(_OWORD *)(v28 - 9) = 0;
      *(v28 - 7) = 8;
      *((_OWORD *)v28 - 3) = 0;
      *(v28 - 4) = 8;
      *(_OWORD *)(v28 - 3) = 0;
      v29 += 4;
      *(v28 - 1) = 8;
      *v28 = 0;
      v28 += 12;
    }
    while ( (v21 & 4) != v29 );
    v50 = v29 - 1;
  }
  else
  {
    v30 = (_QWORD *)(v23 + 16);
    v31 = 0;
    do
    {
      *(v30 - 2) = 0;
      *(v30 - 1) = 8;
      *v30 = 0;
      --v31;
      v30 += 3;
    }
    while ( -(v21 & 3) != v31 );
    v50 = ~v31;
  }
  v58.m128i_i64[0] = v21;
  v58.m128i_i64[1] = v23;
  v59 = v21;
  v32 = 24 * v20;
  v69.m128i_i64[0] = (__int64)v19;
  v69.m128i_i64[1] = (__int64)v19;
  v55 = v62;
  *(_QWORD *)&v70 = v62;
  v56 = (char *)&v19[3 * v20];
  *((_QWORD *)&v70 + 1) = v56;
  v71 = nullptr;
  v33 = (char *)(v19 + 3);
  v57 = v19;
  v34 = *v19;
  if ( *v19 == -1 )
  {
    v37 = 0;
LABEL_36:
    v69.m128i_i64[1] = (__int64)v33;
    v71 = (_QWORD *)v37;
    if ( v56 != v33 )
    {
      v46 = (v56 - v33) / 0x18uLL;
      v47 = v33 + 8;
      do
      {
        v48 = *(v47 - 1);
        if ( v48 )
          sub_140001660(*v47, v48, 1);
        v47 += 3;
        --v46;
      }
      while ( v46 );
    }
  }
  else
  {
    v35 = v32 - 24;
    v36 = 0;
    v37 = 0;
    v64 = v50;
    while ( 1 )
    {
      v67 = *((_QWORD *)v33 - 2);
      v38 = *((_QWORD *)v33 - 1);
      if ( HIDWORD(v37) )
        v39 = v36;
      else
        v39 = (unsigned int)v37 % (unsigned int)v21;
      v68 = v37;
      v75 = v34;
      v66 = v33;
      v53[1] = v39;
      if ( v39 > v50 )
      {
        v69.m128i_i64[1] = (__int64)v66;
        v71 = (_QWORD *)(v68 + 1);
        sub_1419390C3(v39, v21, &off_141A3A330);
      }
      v40 = (_QWORD *)(v24 + 24 * v39);
      v41 = v40[2];
      if ( v41 == *v40 )
        sub_14190FDC0(v24 + 24 * v39);
      v42 = v40[1];
      v43 = 3 * v41;
      *(_QWORD *)(v42 + 8 * v43) = v75;
      *(_QWORD *)(v42 + 8 * v43 + 8) = v67;
      *(_QWORD *)(v42 + 8 * v43 + 16) = v38;
      v40[2] = v41 + 1;
      if ( !v35 )
        break;
      v34 = *(_QWORD *)v66;
      v33 = v66 + 24;
      v35 -= 24;
      v44 = v36 + 1;
      v45 = v36 + 1 == v21;
      v36 = 0;
      if ( !v45 )
        v36 = v44;
      v37 = v68 + 1;
      v50 = v64;
      if ( v34 == -1 )
        goto LABEL_36;
    }
  }
  if ( v55 )
    sub_140001660(v57, 24 * v55, 8);
  *(_QWORD *)&v70 = v59;
  v69 = _mm_loadu_si128(&v58);
  *((_QWORD *)&v70 + 1) = v53;
  v71 = &v65;
  v76[1] = 0;
  v5 = v54;
  sub_140EA1330(v54, &v69, &off_141A3A318);
  return v5;
}
