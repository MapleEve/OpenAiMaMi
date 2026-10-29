double __fastcall sub_140A3CD90(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdx
  double result; // xmm0_8
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _WORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int128 v47; // xmm0
  _OWORD *v48; // rax
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // r15
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // r12
  unsigned __int64 v63; // rbx
  __int64 v64; // r14
  __int64 *v65; // r15
  __int64 v66; // rdx
  _OWORD v67[2]; // [rsp+30h] [rbp-50h] BYREF
  __m256i *v68; // [rsp+50h] [rbp-30h] BYREF
  __int128 v69; // [rsp+58h] [rbp-28h] BYREF
  __int64 v70; // [rsp+68h] [rbp-18h]
  __int64 v71; // [rsp+70h] [rbp-10h]
  __int128 v72; // [rsp+78h] [rbp-8h] BYREF
  __int64 v73; // [rsp+88h] [rbp+8h]
  __int64 *v74; // [rsp+90h] [rbp+10h]
  __int128 v75; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v76; // [rsp+A8h] [rbp+28h]
  __int64 v77; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v78; // [rsp+B8h] [rbp+38h]
  unsigned __int64 v79; // [rsp+C8h] [rbp+48h]
  __m256i v80; // [rsp+D0h] [rbp+50h] BYREF
  __m256i v81; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v82; // [rsp+110h] [rbp+90h]
  char v83; // [rsp+11Ah] [rbp+9Ah]
  char v84; // [rsp+11Bh] [rbp+9Bh]
  char v85; // [rsp+11Ch] [rbp+9Ch]
  char v86; // [rsp+11Dh] [rbp+9Dh]
  char v87; // [rsp+11Eh] [rbp+9Eh]
  char v88; // [rsp+11Fh] [rbp+9Fh]
  __int64 v89; // [rsp+120h] [rbp+A0h]

  v89 = -2;
  if ( *(_BYTE *)(a2 + 477) )
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    v4 = *a3;
    if ( *a3 >= (__int64)0x8000000000000002uLL )
    {
      if ( v4 )
        return sub_140001660(a3[1], v4, 1);
    }
    return result;
  }
  v74 = a3;
  *(_QWORD *)&v72 = 0;
  *((_QWORD *)&v72 + 1) = 1;
  v73 = 0;
  sub_140A3BCF0(a2, &v72);
  sub_140A4A910(a2, &v72);
  sub_140A47F90(a2, &v72);
  sub_140A3DD70(a2, &v72);
  LOBYTE(v7) = __OFSUB__(0, *v74);
  sub_140A40370(a2, &v72, v7);
  *(_QWORD *)&v75 = 0;
  v76 = 0;
  nullsub_1(v9, v8);
  v10 = (_WORD *)sub_140001650(2, 1);
  if ( !v10 )
    sub_14196B2DB(1, 2);
  *v10 = 25705;
  v77 = 2;
  *(_QWORD *)&v78 = v10;
  *((_QWORD *)&v78 + 1) = 2;
  v13 = *(_QWORD *)(a2 + 120);
  v82 = (__int64)v10;
  if ( v13 < 0 )
  {
    v14 = 0;
    goto LABEL_8;
  }
  if ( v13 )
  {
    v15 = *(_QWORD *)(a2 + 112);
    nullsub_1(v12, v11);
    v14 = 1;
    v16 = sub_140001650(v13, 1);
    if ( !v16 )
    {
LABEL_8:
      v86 = 1;
      sub_14196B2DB(v14, v13);
    }
    v17 = v16;
    sub_1419234B0(v16, v15, v13);
  }
  else
  {
    v17 = 1;
  }
  v81.m256i_i8[0] = 3;
  v81.m256i_i64[1] = v13;
  v81.m256i_i64[2] = v17;
  v81.m256i_i64[3] = v13;
  v86 = 0;
  sub_140A68320(&v80, &v75, &v77, &v81);
  if ( v80.m256i_i8[0] != -1 )
    sub_140A192F0(&v80);
  nullsub_1(v19, v18);
  v20 = sub_140001650(6, 1);
  if ( !v20 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v20 + 4) = 29795;
  *(_DWORD *)v20 = 1701470831;
  v77 = 6;
  v71 = v20;
  *(_QWORD *)&v78 = v20;
  *((_QWORD *)&v78 + 1) = 6;
  nullsub_1(v22, v21);
  v23 = (_QWORD *)sub_140001650(8, 1);
  v82 = (__int64)v23;
  if ( !v23 )
    sub_14196B2DB(1, 8);
  *v23 = 0x65736E6F70736572LL;
  v81.m256i_i8[0] = 3;
  v81.m256i_i64[1] = 8;
  v81.m256i_i64[2] = (__int64)v23;
  v81.m256i_i64[3] = 8;
  sub_140A68320(&v80, &v75, &v77, &v81);
  if ( v80.m256i_i8[0] != -1 )
    sub_140A192F0(&v80);
  nullsub_1(v25, v24);
  v26 = (void *)sub_140001650(10, 1);
  if ( !v26 )
    sub_14196B2DB(1, 10);
  qmemcpy(v26, "created_at", 10);
  v77 = 10;
  *(_QWORD *)&v78 = v26;
  *((_QWORD *)&v78 + 1) = 10;
  v27 = *(_QWORD *)(a2 + 464);
  v81.m256i_i8[0] = 2;
  v81.m256i_i64[1] = v27 >> 63;
  v81.m256i_i64[2] = v27;
  sub_140A68320(&v80, &v75, &v77, &v81);
  if ( v80.m256i_i8[0] != -1 )
    sub_140A192F0(&v80);
  nullsub_1(v29, v28);
  v30 = sub_140001650(6, 1);
  if ( !v30 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v30 + 4) = 29557;
  *(_DWORD *)v30 = 1952543859;
  v77 = 6;
  v71 = v30;
  *(_QWORD *)&v78 = v30;
  *((_QWORD *)&v78 + 1) = 6;
  nullsub_1(v32, v31);
  v33 = sub_140001650(9, 1);
  v82 = v33;
  if ( !v33 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v33 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v33 + 8) = 100;
  v81.m256i_i8[0] = 3;
  v81.m256i_i64[1] = 9;
  v81.m256i_i64[2] = v33;
  v81.m256i_i64[3] = 9;
  sub_140A68320(&v80, &v75, &v77, &v81);
  if ( v80.m256i_i8[0] != -1 )
    sub_140A192F0(&v80);
  nullsub_1(v35, v34);
  v36 = sub_140001650(5, 1);
  if ( !v36 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v36 + 4) = 108;
  *(_DWORD *)v36 = 1701080941;
  v77 = 5;
  *(_QWORD *)&v78 = v36;
  *((_QWORD *)&v78 + 1) = 5;
  v39 = *(_QWORD *)(a2 + 96);
  v82 = v36;
  if ( v39 < 0 )
  {
    v40 = 0;
    goto LABEL_29;
  }
  if ( v39 )
  {
    v41 = *(_QWORD *)(a2 + 88);
    nullsub_1(v38, v37);
    v40 = 1;
    v42 = sub_140001650(v39, 1);
    if ( !v42 )
    {
LABEL_29:
      v85 = 1;
      sub_14196B2DB(v40, v39);
    }
    v43 = v42;
    sub_1419234B0(v42, v41, v39);
  }
  else
  {
    v43 = 1;
  }
  v81.m256i_i8[0] = 3;
  v81.m256i_i64[1] = v39;
  v81.m256i_i64[2] = v43;
  v81.m256i_i64[3] = v39;
  v85 = 0;
  sub_140A68320(&v80, &v75, &v77, &v81);
  if ( v80.m256i_i8[0] != -1 )
    sub_140A192F0(&v80);
  nullsub_1(v45, v44);
  v46 = sub_140001650(6, 1);
  if ( !v46 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v46 + 4) = 29813;
  *(_DWORD *)v46 = 1886680431;
  v77 = 6;
  v82 = v46;
  *(_QWORD *)&v78 = v46;
  *((_QWORD *)&v78 + 1) = 6;
  v88 = 1;
  sub_1407B3D00(&v81, a2 + 128);
  if ( v81.m256i_i8[0] == -1 )
  {
    v80.m256i_i64[0] = v81.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v80,
      (unsigned int)&off_141A699C8,
      (__int64)&off_141A6A578);
  }
  v80 = v81;
  v88 = 0;
  sub_140A68320(&v81, &v75, &v77, &v80);
  if ( v81.m256i_i8[0] != -1 )
    sub_140A192F0(&v81);
  v78 = v75;
  v79 = v76;
  LOBYTE(v77) = 5;
  sub_1407BC940(v67, a2);
  if ( LOBYTE(v67[0]) != 0xFF )
  {
    v84 = 1;
    v82 = sub_1416725D0(aUsage_3, 5, &v77);
    sub_140A192F0(v82);
    v47 = v67[0];
    v48 = (_OWORD *)v82;
    *(_OWORD *)(v82 + 16) = v67[1];
    *v48 = v47;
  }
  v49 = sub_140625D70(v74, &v77);
  v51 = v50;
  *(_QWORD *)&v69 = 0;
  v70 = 0;
  nullsub_1(v52, v50);
  v53 = (_DWORD *)sub_140001650(4, 1);
  if ( !v53 )
    sub_14196B2DB(1, 4);
  *v53 = 1701869940;
  *(_QWORD *)&v75 = 4;
  *((_QWORD *)&v75 + 1) = v53;
  v76 = 4;
  v82 = (__int64)v53;
  if ( v51 < 0 )
  {
    v56 = 0;
    goto LABEL_45;
  }
  if ( v51 )
  {
    nullsub_1(v55, v54);
    v56 = 1;
    v57 = sub_140001650(v51, 1);
    if ( !v57 )
    {
LABEL_45:
      v83 = 1;
      sub_14196B2DB(v56, v51);
    }
    v58 = v57;
    sub_1419234B0(v57, v49, v51);
  }
  else
  {
    v58 = 1;
  }
  v81.m256i_i8[0] = 3;
  v81.m256i_i64[1] = v51;
  v81.m256i_i64[2] = v58;
  v81.m256i_i64[3] = v51;
  v83 = 0;
  sub_140A68320(&v80, &v69, &v75, &v81);
  if ( v80.m256i_i8[0] != -1 )
    sub_140A192F0(&v80);
  nullsub_1(v60, v59);
  v61 = (_QWORD *)sub_140001650(8, 1);
  if ( !v61 )
    sub_14196B2DB(1, 8);
  *v61 = 0x65736E6F70736572LL;
  *(_QWORD *)&v75 = 8;
  v82 = (__int64)v61;
  *((_QWORD *)&v75 + 1) = v61;
  v76 = 8;
  v87 = 1;
  sub_140B73E90(&v81, &v77);
  if ( v81.m256i_i8[0] == -1 )
  {
    v80.m256i_i64[0] = v81.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v80,
      (unsigned int)&off_141A699C8,
      (__int64)&off_141A6A590);
  }
  v80 = v81;
  v87 = 0;
  sub_140A68320(&v81, &v69, &v75, &v80);
  if ( v81.m256i_i8[0] != -1 )
    sub_140A192F0(&v81);
  *(_OWORD *)&v80.m256i_u64[1] = v69;
  v80.m256i_i64[3] = v70;
  v80.m256i_i8[0] = 5;
  *(_QWORD *)&v69 = v49;
  *((_QWORD *)&v69 + 1) = v51;
  v68 = &v80;
  v81.m256i_i64[0] = (__int64)&v69;
  v81.m256i_i64[1] = (__int64)sub_140191200;
  v81.m256i_i64[2] = (__int64)&v68;
  v81.m256i_i64[3] = (__int64)sub_140BE6880;
  sub_1416DAFA0(&v75, &unk_141A6C33A, &v81);
  sub_140A192F0(&v77);
  sub_140A192F0(&v80);
  v62 = *((_QWORD *)&v75 + 1);
  v63 = v76;
  v64 = v73;
  if ( v76 > (__int64)v72 - v73 )
  {
    v82 = *((_QWORD *)&v75 + 1);
    sub_141939070((unsigned int)&v72, v73, v76, 1, 1);
    v64 = v73;
    v65 = v74;
    v62 = v82;
    goto LABEL_58;
  }
  v65 = v74;
  if ( v76 )
LABEL_58:
    sub_1419234B0(v64 + *((_QWORD *)&v72 + 1), v62, v63);
  v73 = v63 + v64;
  if ( (_QWORD)v75 )
    sub_140001660(v62, v75, 1);
  *(_BYTE *)(a2 + 477) = 1;
  a1[2] = v73;
  result = *(double *)&v72;
  *(_OWORD *)a1 = v72;
  v66 = *v65;
  if ( *v65 >= (__int64)0x8000000000000002uLL && v66 )
    return sub_140001660(v65[1], v66, 1);
  return result;
}
