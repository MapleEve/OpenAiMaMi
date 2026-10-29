// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x140be1e00 | name sub_140BE1E00
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140BE1E00(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  __m128i si128; // xmm0
  unsigned __int64 v15; // r10
  __int64 v16; // r10
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  char *v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r9
  __int64 v37; // r13
  unsigned __int64 v38; // rdx
  _QWORD *v39; // r15
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  bool v44; // zf
  unsigned __int64 v45; // rbx
  _QWORD *v46; // r15
  __int64 v47; // rdx
  unsigned __int64 v49; // r8
  __int64 v50; // rsi
  __int64 v51; // rsi
  unsigned __int64 v52; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v53[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v54; // [rsp+40h] [rbp-40h]
  __int64 v55; // [rsp+48h] [rbp-38h]
  char *v56; // [rsp+50h] [rbp-30h]
  _QWORD *v57; // [rsp+58h] [rbp-28h]
  __m128i v58; // [rsp+60h] [rbp-20h] BYREF
  __int128 v59; // [rsp+70h] [rbp-10h]
  unsigned __int64 v60; // [rsp+88h] [rbp+8h]
  __int64 v61; // [rsp+90h] [rbp+10h] BYREF
  _QWORD *v62; // [rsp+98h] [rbp+18h]
  __m128i *v63; // [rsp+A0h] [rbp+20h]
  char *v64; // [rsp+A8h] [rbp+28h]
  __int64 v65; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v66; // [rsp+B8h] [rbp+38h]
  __m128i v67; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v68; // [rsp+D0h] [rbp+50h]
  _QWORD *v69; // [rsp+E0h] [rbp+60h]
  __int64 v70; // [rsp+E8h] [rbp+68h]
  __int16 v71; // [rsp+F0h] [rbp+70h]
  __int64 v72; // [rsp+F8h] [rbp+78h]
  __int64 v73; // [rsp+108h] [rbp+88h]
  _BYTE v74[2]; // [rsp+115h] [rbp+95h] BYREF
  char v75; // [rsp+117h] [rbp+97h]
  __int64 v76; // [rsp+118h] [rbp+98h]

  v76 = -2;
  v53[0] = a2;
  v6 = sub_14167F170();
  if ( *(_BYTE *)(v6 + 16) == 1 )
  {
    v7 = *(_QWORD *)v6;
    v8 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v50 = v6;
    v7 = sub_141696260();
    v6 = v50;
    *(_QWORD *)v50 = v7;
    *(_QWORD *)(v50 + 8) = v8;
    *(_BYTE *)(v50 + 16) = 1;
  }
  *(_QWORD *)v6 = v7 + 1;
  v68 = xmmword_141A39750;
  v67 = *(__m128i *)&off_141A39740;
  v69 = (_QWORD *)v7;
  v70 = v8;
  v9 = *(_QWORD *)(a3 + 32);
  v61 = *(_QWORD *)(a3 + 40);
  v62 = a2;
  v63 = &v67;
  v10 = *(__m128i *)a3;
  v59 = *(_OWORD *)(a3 + 16);
  v58 = v10;
  sub_140296350(&v58, v9, &v61);
  v13 = *((_QWORD *)&v68 + 1);
  si128 = _mm_load_si128((const __m128i *)v67.m128i_i64[0]);
  if ( v67.m128i_i64[1] )
  {
    v15 = (24 * v67.m128i_i64[1] + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v11 = v67.m128i_i64[1] + v15 + 17;
    v12 = v67.m128i_i64[0] - v15;
    v16 = 16;
  }
  else
  {
    v16 = 0;
  }
  *((_QWORD *)&v68 + 1) = v67.m128i_i64[0];
  v69 = (_QWORD *)(v67.m128i_i64[0] + 16);
  v70 = v67.m128i_i64[0] + v67.m128i_i64[1] + 1;
  v71 = ~(unsigned __int16)_mm_movemask_epi8(si128);
  v72 = v13;
  v67.m128i_i64[0] = v16;
  v67.m128i_i64[1] = v11;
  *(_QWORD *)&v68 = v12;
  sub_1403D6640(&v61, &v67);
  v18 = v62;
  v19 = (unsigned __int64)v63;
  if ( (unsigned __int64)v63 >= 2 )
  {
    if ( (unsigned __int64)v63 >= 0x15 )
    {
      v75 = 1;
      sub_1415584D0(v62, v63, v74);
    }
    else
    {
      sub_140DFF490(v62, v63, 1, v74);
    }
  }
  else if ( !v63 )
  {
    v75 = 1;
    v24 = sub_14167F170();
    if ( *(_BYTE *)(v24 + 16) == 1 )
    {
      v25 = *(_QWORD *)v24;
      v26 = *(_QWORD *)(v24 + 8);
    }
    else
    {
      v75 = 1;
      v51 = v24;
      v25 = sub_141696260();
      v24 = v51;
      *(_QWORD *)v51 = v25;
      *(_QWORD *)(v51 + 8) = v26;
      *(_BYTE *)(v51 + 16) = 1;
    }
    *(_QWORD *)v24 = v25 + 1;
    *(_OWORD *)(a1 + 16) = xmmword_141A39750;
    *(_OWORD *)a1 = *(_OWORD *)&off_141A39740;
    *(_QWORD *)(a1 + 32) = v25;
    *(_QWORD *)(a1 + 40) = v26;
    if ( v61 )
      sub_140001660(v18, 24 * v61, 8);
    return a1;
  }
  v54 = a1;
  v52 = v19;
  v20 = 4;
  if ( v19 < 4 )
    v20 = v19;
  v21 = 3LL * (unsigned int)(8 * v20);
  nullsub_1(v17);
  v22 = sub_140001650(v21, 8);
  if ( !v22 )
  {
    v75 = 1;
    sub_141938D2B(8, v21);
  }
  v23 = v22;
  if ( (unsigned __int64)(v20 - 1) >= 3 )
  {
    v27 = (_QWORD *)(v22 + 88);
    v28 = 0;
    do
    {
      *(v27 - 11) = 0;
      *(v27 - 10) = 8;
      *(_OWORD *)(v27 - 9) = 0;
      *(v27 - 7) = 8;
      *((_OWORD *)v27 - 3) = 0;
      *(v27 - 4) = 8;
      *(_OWORD *)(v27 - 3) = 0;
      v28 += 4;
      *(v27 - 1) = 8;
      *v27 = 0;
      v27 += 12;
    }
    while ( (v20 & 4) != v28 );
    v49 = v28 - 1;
  }
  else
  {
    v29 = (_QWORD *)(v22 + 16);
    v30 = 0;
    do
    {
      *(v29 - 2) = 0;
      *(v29 - 1) = 8;
      *v29 = 0;
      --v30;
      v29 += 3;
    }
    while ( -(v20 & 3) != v30 );
    v49 = ~v30;
  }
  v58.m128i_i64[0] = v20;
  v58.m128i_i64[1] = v22;
  *(_QWORD *)&v59 = v20;
  v31 = 24 * v19;
  v67.m128i_i64[0] = (__int64)v18;
  v67.m128i_i64[1] = (__int64)v18;
  v55 = v61;
  *(_QWORD *)&v68 = v61;
  v56 = (char *)&v18[3 * v19];
  *((_QWORD *)&v68 + 1) = v56;
  v69 = nullptr;
  v32 = (char *)(v18 + 3);
  v57 = v18;
  v33 = *v18;
  if ( *v18 == -1 )
  {
    v36 = 0;
LABEL_36:
    v67.m128i_i64[1] = (__int64)v32;
    v69 = (_QWORD *)v36;
    if ( v56 != v32 )
    {
      v45 = (v56 - v32) / 0x18uLL;
      v46 = v32 + 8;
      do
      {
        v47 = *(v46 - 1);
        if ( v47 )
          sub_140001660(*v46, v47, 1);
        v46 += 3;
        --v45;
      }
      while ( v45 );
    }
  }
  else
  {
    v34 = v31 - 24;
    v35 = 0;
    v36 = 0;
    v60 = v49;
    while ( 1 )
    {
      v65 = *((_QWORD *)v32 - 2);
      v37 = *((_QWORD *)v32 - 1);
      if ( HIDWORD(v36) )
        v38 = v35;
      else
        v38 = (unsigned int)v36 % (unsigned int)v20;
      v66 = v36;
      v73 = v33;
      v64 = v32;
      v53[1] = v38;
      if ( v38 > v49 )
      {
        v67.m128i_i64[1] = (__int64)v64;
        v69 = (_QWORD *)(v66 + 1);
        sub_1419390C3(v38, v20, &off_141A3A330);
      }
      v39 = (_QWORD *)(v23 + 24 * v38);
      v40 = v39[2];
      if ( v40 == *v39 )
        sub_14190FDC0(v23 + 24 * v38);
      v41 = v39[1];
      v42 = 3 * v40;
      *(_QWORD *)(v41 + 8 * v42) = v73;
      *(_QWORD *)(v41 + 8 * v42 + 8) = v65;
      *(_QWORD *)(v41 + 8 * v42 + 16) = v37;
      v39[2] = v40 + 1;
      if ( !v34 )
        break;
      v33 = *(_QWORD *)v64;
      v32 = v64 + 24;
      v34 -= 24;
      v43 = v35 + 1;
      v44 = v35 + 1 == v20;
      v35 = 0;
      if ( !v44 )
        v35 = v43;
      v36 = v66 + 1;
      v49 = v60;
      if ( v33 == -1 )
        goto LABEL_36;
    }
  }
  if ( v55 )
    sub_140001660(v57, 24 * v55, 8);
  *(_QWORD *)&v68 = v59;
  v67 = _mm_loadu_si128(&v58);
  *((_QWORD *)&v68 + 1) = v53;
  v69 = &v52;
  v74[1] = 0;
  a1 = v54;
  sub_140EA0AB0(v54, &v67, &off_141A3A318);
  return a1;
}
