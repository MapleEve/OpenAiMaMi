// win 1.2.7 | module src/core/repository.rs | ea 0x1401e88b0 | name sub_1401E88B0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401E88B0(__int64 a1, __int128 *a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v5; // xmm6_8
  __int64 v6; // xmm7_8
  _DWORD *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // r13
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // rax
  int v23; // edi
  int v24; // edx
  __int64 v25; // rax
  bool v26; // al
  bool v27; // al
  int v28; // edx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int128 v33; // xmm11
  char v34; // dl
  __int64 v35; // r13
  char v36; // r14
  __int128 v37; // xmm10
  __int64 v38; // rdi
  __int128 v39; // xmm9
  __int64 v40; // rdi
  __m128 v41; // xmm8
  __int64 v42; // r12
  __int64 result; // rax
  char v44; // r15
  int v45; // r8d
  __int64 v46; // r9
  char v47; // r10
  __int64 v48; // r11
  char v49; // bl
  __int128 v50; // [rsp+20h] [rbp-60h]
  __int128 v51; // [rsp+38h] [rbp-48h] BYREF
  __int64 v52; // [rsp+48h] [rbp-38h]
  __int128 v53; // [rsp+50h] [rbp-30h] BYREF
  __int64 v54; // [rsp+60h] [rbp-20h]
  __int64 v55; // [rsp+68h] [rbp-18h]
  __int64 v56; // [rsp+70h] [rbp-10h]
  __int64 v57; // [rsp+78h] [rbp-8h]
  __int128 v58; // [rsp+80h] [rbp+0h] BYREF
  __int64 v59; // [rsp+90h] [rbp+10h]
  __int128 v60; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v61; // [rsp+B0h] [rbp+30h]
  __int128 v62; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v63; // [rsp+C8h] [rbp+48h]
  __int64 v64; // [rsp+D0h] [rbp+50h]
  int v65; // [rsp+DCh] [rbp+5Ch]
  __int64 v66; // [rsp+E0h] [rbp+60h]
  __int64 v67; // [rsp+E8h] [rbp+68h]
  __int64 v68; // [rsp+F0h] [rbp+70h]
  int v69; // [rsp+F8h] [rbp+78h]
  int v70; // [rsp+FCh] [rbp+7Ch]
  __int64 v71; // [rsp+100h] [rbp+80h]
  __int64 v72; // [rsp+108h] [rbp+88h]
  __int64 v73; // [rsp+110h] [rbp+90h]
  __int64 v74; // [rsp+118h] [rbp+98h]
  int v75; // [rsp+124h] [rbp+A4h]
  __int128 v76; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v77; // [rsp+138h] [rbp+B8h]
  __int64 v78; // [rsp+140h] [rbp+C0h]
  __int64 v79; // [rsp+148h] [rbp+C8h]
  int v80; // [rsp+154h] [rbp+D4h]
  _BYTE v81[24]; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v82; // [rsp+170h] [rbp+F0h]
  int v83; // [rsp+178h] [rbp+F8h]
  char v84; // [rsp+17Dh] [rbp+FDh]
  char v85; // [rsp+17Eh] [rbp+FEh]
  char v86; // [rsp+17Fh] [rbp+FFh]
  int v87; // [rsp+180h] [rbp+100h]
  unsigned __int8 v88; // [rsp+186h] [rbp+106h]
  char v89; // [rsp+187h] [rbp+107h]
  __int64 v90; // [rsp+188h] [rbp+108h]

  v90 = -2;
  v71 = a3;
  v10 = *((_DWORD **)a2 + 37);
  v11 = *((_QWORD *)a2 + 38);
  sub_140E91160(v10, v11);
  if ( v12 && (v11 != 7 || *v10 ^ 0x6E6B6E75 | *(_DWORD *)((char *)v10 + 3) ^ 0x6E776F6E) )
  {
    sub_1416AC440(&v60, a2 + 18);
  }
  else
  {
    *(_QWORD *)&v76 = v71 + 170;
    *((_QWORD *)&v76 + 1) = sub_1402889E0;
    sub_1416ABFD0(v81, &unk_1419D405D, &v76);
    v82 = *(_QWORD *)&v81[8];
    sub_1416AA4F0(&v76, *(_QWORD *)&v81[8], *(_QWORD *)&v81[16]);
    if ( *(_QWORD *)v81 )
      sub_140001660(v82, *(_QWORD *)v81, 1);
    v60 = v76;
    v61 = v77;
  }
  v57 = *((_QWORD *)&v60 + 1);
  v14 = sub_1402C0B10(*((_QWORD *)&v60 + 1), v61);
  v15 = a5;
  v16 = (__int64 *)(a5 + 176);
  v17 = (__int64)a2 + 104;
  if ( !a5 )
    v16 = (__int64 *)a2 + 13;
  v18 = 1;
  if ( !a5 )
    v18 = *((_QWORD *)a2 + 12);
  v19 = *v16;
  if ( !a5 )
  {
    v69 = 0;
    v82 = 2;
    v78 = 2;
    v66 = 2;
    goto LABEL_31;
  }
  v69 = *(unsigned __int8 *)(a5 + 184);
  v17 = *(_QWORD *)(a5 + 16);
  v66 = 2;
  v82 = v17;
  if ( v17 == 2 )
  {
    v82 = 2;
    v78 = 2;
    v20 = *(_QWORD *)(a5 + 56);
    if ( v20 == 2 )
      goto LABEL_31;
    goto LABEL_15;
  }
  v5 = *(_QWORD *)(a5 + 40);
  v65 = *(_DWORD *)(a5 + 48);
  v23 = *(_DWORD *)(a5 + 32);
  v78 = *(unsigned int *)(a5 + 36);
  v68 = *(_QWORD *)(a5 + 24);
  LODWORD(v76) = sub_141683E80(v17, a5, v13);
  DWORD1(v76) = v24;
  sub_141683E30(v81, &v76, 3577643008LL, 27111902);
  if ( v81[0] )
    v25 = 0;
  else
    v25 = *(_QWORD *)&v81[8];
  v17 = v68;
  v26 = v68 <= v25;
  if ( !v23 )
  {
    v82 = 2;
    v78 = 2;
    v15 = a5;
    v20 = *(_QWORD *)(a5 + 56);
    if ( v20 == 2 )
      goto LABEL_31;
    goto LABEL_15;
  }
  v17 = (unsigned int)(v78 - 361);
  v15 = a5;
  if ( (unsigned int)v17 < 0xFFFFFE98 || ((unsigned __int8)v82 & v26) != 0 )
  {
    v82 = 2;
    v78 = 2;
  }
  v20 = *(_QWORD *)(a5 + 56);
  if ( v20 != 2 )
  {
LABEL_15:
    v6 = *(_QWORD *)(v15 + 80);
    v83 = *(_DWORD *)(v15 + 88);
    v70 = *(_DWORD *)(v15 + 72);
    v75 = *(_DWORD *)(v15 + 76);
    v64 = *(_QWORD *)(v15 + 64);
    LODWORD(v76) = sub_141683E80(v17, v15, v13);
    DWORD1(v76) = v21;
    sub_141683E30(v81, &v76, 3577643008LL, 27111902);
    if ( v81[0] )
      v22 = 0;
    else
      v22 = *(_QWORD *)&v81[8];
    v17 = (unsigned int)v75;
    LOBYTE(v17) = v75 < 8640;
    v27 = v64 <= v22;
    if ( ((v75 < 8640) & (unsigned __int8)v70) == 0 && ((unsigned __int8)v20 & v27) == 0 )
      v66 = v20;
  }
LABEL_31:
  LODWORD(v76) = sub_141683E80(v17, v15, v13);
  DWORD1(v76) = v28;
  sub_141683E30(v81, &v76, 3577643008LL, 27111902);
  v55 = *((_QWORD *)a2 + 2);
  if ( v55 != 1 )
  {
    v30 = *((unsigned __int8 *)a2 + 416);
    LOBYTE(v29) = 2;
    if ( (_BYTE)v30 != 2 )
    {
      LOBYTE(v30) = (_BYTE)v30 == 0;
      v80 = v30;
      LOBYTE(v30) = !(_BYTE)v30;
LABEL_44:
      v87 = v30;
      goto LABEL_45;
    }
LABEL_43:
    v80 = v29;
    LOBYTE(v30) = 2;
    goto LABEL_44;
  }
  v29 = 0;
  if ( !*(_QWORD *)v81 )
    v29 = *(_QWORD *)&v81[8];
  v30 = *((unsigned __int8 *)a2 + 416);
  if ( *((_QWORD *)a2 + 3) <= v29 )
  {
    LOBYTE(v29) = 3;
    if ( !(_BYTE)v30 && *((_BYTE *)a2 + 419) == 2 )
    {
      v87 = 0;
      LOBYTE(v30) = 1;
      v80 = v30;
      goto LABEL_45;
    }
    goto LABEL_43;
  }
  if ( !(_BYTE)v30 )
  {
    LOBYTE(v29) = 3;
    goto LABEL_43;
  }
  LOBYTE(v30) = 1;
  v87 = v30;
  v80 = 0;
LABEL_45:
  sub_1416AC440(&v53, a2 + 12);
  v31 = v71;
  sub_1416AC440(v81, v71 + 64);
  v79 = *(_QWORD *)&v81[8];
  v67 = *(_QWORD *)v81;
  v73 = *(_QWORD *)&v81[16];
  sub_1416AC440(&v51, (char *)a2 + 264);
  if ( *((_QWORD *)a2 + 42) == -1 || (sub_1416AC440(v81, a2 + 21), *(_QWORD *)v81 == -1) )
  {
    if ( *(_QWORD *)(v31 + 88) == -1 )
    {
      *(_QWORD *)&v58 = -1;
      if ( *((_QWORD *)a2 + 45) == -1 )
        goto LABEL_55;
    }
    else
    {
      sub_1416AC440(&v58, v31 + 88);
      if ( *((_QWORD *)a2 + 45) == -1 )
        goto LABEL_55;
    }
  }
  else
  {
    v59 = *(_QWORD *)&v81[16];
    v58 = *(_OWORD *)v81;
    if ( *((_QWORD *)a2 + 45) == -1 )
      goto LABEL_55;
  }
  sub_1416AC440(v81, (char *)a2 + 360);
  if ( *(_QWORD *)v81 != -1 )
  {
    v62 = *(_OWORD *)v81;
    v63 = *(_QWORD *)&v81[16];
    if ( *((_QWORD *)a2 + 48) == -1 )
      goto LABEL_60;
    goto LABEL_57;
  }
LABEL_55:
  if ( *(_QWORD *)(v31 + 112) == -1 )
  {
    *(_QWORD *)&v62 = -1;
    if ( *((_QWORD *)a2 + 48) == -1 )
      goto LABEL_60;
  }
  else
  {
    sub_1416AC440(&v62, v31 + 112);
    if ( *((_QWORD *)a2 + 48) == -1 )
      goto LABEL_60;
  }
LABEL_57:
  sub_1416AC440(v81, a2 + 24);
  if ( *(_QWORD *)v81 != -1 )
  {
    v76 = *(_OWORD *)v81;
    v77 = *(_QWORD *)&v81[16];
    goto LABEL_63;
  }
LABEL_60:
  if ( *(_QWORD *)(v31 + 136) == -1 )
    *(_QWORD *)&v76 = -1;
  else
    sub_1416AC440(&v76, v31 + 136);
LABEL_63:
  v85 = v14;
  v56 = v19;
  v84 = a4;
  v32 = *((unsigned __int8 *)a2 + 418);
  v33 = *a2;
  v34 = *(_BYTE *)(v31 + 168);
  v35 = *((_QWORD *)a2 + 3);
  v89 = *((_BYTE *)a2 + 417);
  v36 = *((_BYTE *)a2 + 419);
  v37 = a2[4];
  v38 = *((_QWORD *)a2 + 51);
  v39 = a2[5];
  v86 = v34;
  if ( !a5 )
  {
    result = 2;
    v72 = 2;
    v44 = v32;
    v41 = 0;
    v45 = v83;
    v46 = v79;
    v47 = v87;
    v48 = v73;
    goto LABEL_69;
  }
  v74 = v38;
  v40 = v18;
  v41 = (__m128)*(unsigned __int64 *)(a5 + 168);
  v42 = *(_QWORD *)(a5 + 96);
  result = 2;
  if ( v42 == 2 )
  {
    v72 = 2;
LABEL_66:
    v44 = v32;
LABEL_67:
    v18 = v40;
    v45 = v83;
    v46 = v79;
    v47 = v87;
    v48 = v73;
    v38 = v74;
LABEL_69:
    v49 = v89;
    goto LABEL_70;
  }
  v72 = 2;
  if ( *(_QWORD *)(a5 + 112) == -1 )
    goto LABEL_66;
  v44 = v32;
  result = v71;
  if ( *(_QWORD *)(a5 + 128) != *(_QWORD *)(v71 + 32) )
    goto LABEL_67;
  result = sub_1418F4B70(*(_QWORD *)(a5 + 120), *(_QWORD *)(v71 + 24));
  if ( (_DWORD)result )
    goto LABEL_67;
  v88 = *(_BYTE *)(a5 + 136);
  sub_1416AC440(v81, a5 + 112);
  v32 = *(_QWORD *)v81;
  v50 = *(_OWORD *)&v81[8];
  v45 = v83;
  v46 = v79;
  v47 = v87;
  v48 = v73;
  v49 = v89;
  if ( (_DWORD)v42 == 1 )
  {
    v71 = *(_QWORD *)(a5 + 104);
    v72 = 1;
  }
  else
  {
    v72 = 0;
  }
  v18 = v40;
  v38 = v74;
  result = v88;
LABEL_70:
  *(_QWORD *)(a1 + 224) = v54;
  *(_OWORD *)(a1 + 208) = v53;
  *(_QWORD *)(a1 + 232) = v67;
  *(_QWORD *)(a1 + 240) = v46;
  *(_QWORD *)(a1 + 248) = v48;
  *(_QWORD *)(a1 + 272) = v52;
  *(_OWORD *)(a1 + 256) = v51;
  *(_QWORD *)(a1 + 296) = v59;
  *(_OWORD *)(a1 + 280) = v58;
  *(_QWORD *)(a1 + 320) = v63;
  *(_OWORD *)(a1 + 304) = v62;
  *(_QWORD *)(a1 + 344) = v77;
  *(_OWORD *)(a1 + 328) = v76;
  *(_BYTE *)(a1 + 376) = v85;
  *(_BYTE *)(a1 + 373) = v44;
  *(_OWORD *)a1 = v33;
  *(_BYTE *)(a1 + 368) = v86;
  *(_BYTE *)(a1 + 371) = v47;
  *(_QWORD *)(a1 + 16) = v55;
  *(_QWORD *)(a1 + 24) = v35;
  *(_BYTE *)(a1 + 372) = v49;
  *(_BYTE *)(a1 + 374) = v80;
  *(_BYTE *)(a1 + 375) = v36;
  *(_OWORD *)(a1 + 32) = v37;
  *(_BYTE *)(a1 + 369) = v84;
  *(_QWORD *)(a1 + 360) = v38;
  *(_OWORD *)(a1 + 48) = v39;
  *(_QWORD *)(a1 + 64) = v18;
  *(_QWORD *)(a1 + 72) = v56;
  *(_BYTE *)(a1 + 370) = v69;
  *(_QWORD *)(a1 + 80) = v82;
  *(_QWORD *)(a1 + 88) = v68;
  *(_DWORD *)(a1 + 96) = 1;
  *(_DWORD *)(a1 + 100) = v78;
  *(_QWORD *)(a1 + 104) = v5;
  *(_DWORD *)(a1 + 112) = v65;
  *(_QWORD *)(a1 + 120) = v66;
  *(_QWORD *)(a1 + 128) = v64;
  *(_DWORD *)(a1 + 136) = v70;
  *(_DWORD *)(a1 + 140) = v75;
  *(_QWORD *)(a1 + 144) = v6;
  *(_DWORD *)(a1 + 152) = v45;
  _mm_storel_ps((double *)(a1 + 352), v41);
  *(_QWORD *)(a1 + 160) = v72;
  *(_QWORD *)(a1 + 168) = v71;
  *(_QWORD *)(a1 + 176) = v32;
  *(_OWORD *)(a1 + 184) = v50;
  *(_BYTE *)(a1 + 200) = result;
  if ( (_QWORD)v60 )
    return sub_140001660(*((_QWORD *)&v60 + 1), v60, 1);
  return result;
}
