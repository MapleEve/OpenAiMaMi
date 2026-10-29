// win 1.2.7 | module src/core/analytics/threads.rs | ea 0x14035d510 | name sub_14035D510
// win 1.2.7 | module src/core/analytics/threads.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14035D510(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  volatile signed __int64 *v6; // rcx
  __int64 v7; // rt0
  char v8; // of
  __int64 v9; // r12
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int8 v14; // r14
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int128 v21; // xmm4
  __int128 v22; // xmm5
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  int v27; // eax
  char *v28; // rdi
  char v29; // al
  __int128 v31; // kr00_16
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // rdx
  int v36; // r15d
  __int64 v37; // r14
  unsigned int v38; // edi
  _DWORD *v39; // rdi
  int v40; // ecx
  int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  int v47; // edx
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int64 v51; // rax
  __int64 v52; // rcx
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  unsigned int v56; // eax
  __m128 v57; // [rsp+20h] [rbp-60h]
  __int128 v58; // [rsp+30h] [rbp-50h]
  __int128 v59; // [rsp+40h] [rbp-40h] BYREF
  __int128 v60; // [rsp+50h] [rbp-30h]
  __int128 v61; // [rsp+60h] [rbp-20h]
  __int128 v62; // [rsp+70h] [rbp-10h]
  __int128 v63; // [rsp+80h] [rbp+0h]
  __int128 v64; // [rsp+90h] [rbp+10h]
  __int64 v65; // [rsp+A0h] [rbp+20h]
  unsigned __int8 v66; // [rsp+A8h] [rbp+28h]
  _BYTE v67[7]; // [rsp+A9h] [rbp+29h]
  _QWORD v68[2]; // [rsp+B0h] [rbp+30h] BYREF
  __m256i v69; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v70; // [rsp+E0h] [rbp+60h]
  __int128 v71; // [rsp+F0h] [rbp+70h]
  __int128 v72; // [rsp+100h] [rbp+80h]
  __int128 v73; // [rsp+110h] [rbp+90h]
  __int128 v74; // [rsp+120h] [rbp+A0h]
  __int128 v75; // [rsp+130h] [rbp+B0h] BYREF
  int v76; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v77; // [rsp+14Ch] [rbp+CCh]
  unsigned int v78; // [rsp+154h] [rbp+D4h]
  __int64 v79; // [rsp+158h] [rbp+D8h]
  __int64 v80; // [rsp+160h] [rbp+E0h]
  __int64 v81; // [rsp+168h] [rbp+E8h]
  unsigned __int64 v82; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v83; // [rsp+178h] [rbp+F8h]
  __int128 v84; // [rsp+180h] [rbp+100h] BYREF
  __m512i v85; // [rsp+190h] [rbp+110h]
  __int128 v86; // [rsp+1D0h] [rbp+150h]
  __int64 v87; // [rsp+1E0h] [rbp+160h]
  int v88; // [rsp+1F4h] [rbp+174h]
  volatile signed __int64 *v89; // [rsp+1F8h] [rbp+178h] BYREF
  _BYTE v90[96]; // [rsp+200h] [rbp+180h] BYREF
  __int64 v91; // [rsp+260h] [rbp+1E0h]
  unsigned __int8 v92; // [rsp+268h] [rbp+1E8h]
  _DWORD v93[2]; // [rsp+269h] [rbp+1E9h]
  unsigned int v94; // [rsp+274h] [rbp+1F4h]
  char v95; // [rsp+27Bh] [rbp+1FBh]
  char v96[2]; // [rsp+27Ch] [rbp+1FCh] BYREF
  char v97; // [rsp+27Eh] [rbp+1FEh]
  char v98; // [rsp+27Fh] [rbp+1FFh]
  __int64 v99; // [rsp+280h] [rbp+200h]

  v99 = -2;
  v96[0] = a3;
  v5 = sub_140F81EA0(a2);
  *(_QWORD *)v90 = v5;
  v6 = *(volatile signed __int64 **)(v5 + 24);
  v7 = _InterlockedIncrement64(v6);
  if ( (v7 < 0) ^ v8 | (v7 == 0) )
    BUG();
  v9 = *(_QWORD *)(v5 + 24);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v5) )
    sub_1409E6120(v90);
  v89 = (volatile signed __int64 *)v9;
  LOBYTE(v6) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v9 + 16), 1, 0) )
    sub_141937480((volatile void *)(v9 + 16));
  v10 = off_1421E7210;
  v11 = 2 * *off_1421E7210;
  v79 = v9 + 16;
  if ( v11 )
  {
    v56 = sub_141938160(v6);
    LOBYTE(v56) = v56 ^ 1;
    v94 = v56;
  }
  else
  {
    v94 = 0;
  }
  sub_140F7EB70((__int64)v90, a2);
  if ( v92 == 0xFF )
  {
    v86 = *(_OWORD *)&v90[80];
    v18 = *(_OWORD *)&v90[64];
    v85 = *(__m512i *)&v90[16];
    v19 = *(_OWORD *)v90;
    v20 = *(_OWORD *)&v90[16];
    v21 = *(_OWORD *)&v90[32];
    v22 = *(_OWORD *)&v90[48];
    v84 = *(_OWORD *)v90;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v90[80];
    *(_OWORD *)(a1 + 72) = v18;
    *(_OWORD *)(a1 + 56) = v22;
    *(_OWORD *)(a1 + 40) = v21;
    *(_OWORD *)(a1 + 24) = v20;
    *(_OWORD *)(a1 + 8) = v19;
    *(_QWORD *)a1 = 1;
    goto LABEL_19;
  }
  v87 = v91;
  v86 = *(_OWORD *)&v90[80];
  v85 = *(__m512i *)&v90[16];
  v84 = *(_OWORD *)v90;
  *(_DWORD *)v67 = v93[0];
  *(_DWORD *)&v67[3] = *(_DWORD *)((char *)v93 + 3);
  v65 = v91;
  v64 = *(_OWORD *)&v90[80];
  v63 = *(_OWORD *)&v90[64];
  v62 = *(_OWORD *)&v90[48];
  v61 = *(_OWORD *)&v90[32];
  v60 = *(_OWORD *)&v90[16];
  v59 = *(_OWORD *)v90;
  v66 = v92;
  sub_140F7E180(a2, v96[0]);
  sub_1414039F0(v90, &v59, *(&off_1419EBA50 + (unsigned int)v66), qword_1419EBA68[v66]);
  if ( *(_QWORD *)v90 != -1 )
  {
    *(_OWORD *)&v85.m512i_u64[4] = *(_OWORD *)&v90[48];
    *(_OWORD *)((char *)&v85.m512i_u64[2] + 1) = *(_OWORD *)&v90[33];
    *(_OWORD *)&v85.m512i_i8[1] = *(_OWORD *)&v90[17];
    v84 = *(_OWORD *)v90;
    v85.m512i_i8[0] = v90[16];
    *(_QWORD *)v90 = &v84;
    *(_QWORD *)&v90[8] = sub_141404740;
    sub_1416ABFD0(&v69, &unk_141A6499F, v90);
    v13 = v69.m256i_i64[0];
    v14 = v69.m256i_i8[8];
    *(_QWORD *)v90 = *(__int64 *)((char *)&v69.m256i_i64[1] + 1);
    *(_QWORD *)&v90[7] = v69.m256i_i64[2];
    sub_140E96F40(&v84);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v90[63];
    v15 = *(_OWORD *)v90;
    v16 = *(_OWORD *)&v90[16];
    v17 = *(_OWORD *)&v90[32];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v90[48];
    *(_OWORD *)(a1 + 57) = v17;
    *(_OWORD *)(a1 + 41) = v16;
    *(_OWORD *)(a1 + 25) = v15;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)(a1 + 16) = v13;
    *(_BYTE *)(a1 + 24) = v14;
    *(_QWORD *)a1 = 1;
LABEL_18:
    sub_14029B090(&v59);
LABEL_19:
    v28 = (char *)(v9 + 16);
    if ( !(_BYTE)v94 && 2 * *v10 && !(unsigned __int8)sub_141938160(v12) )
      *(_BYTE *)(v9 + 17) = 1;
    v29 = *v28;
    *v28 = 0;
    if ( v29 == 2 )
      WakeByAddressSingle((PVOID)(v9 + 16));
    goto LABEL_23;
  }
  v96[1] = 1;
  sub_140F81000((__int64)v90, a2, (__int64)&v59);
  v23 = *(_QWORD *)v90;
  v84 = *(_OWORD *)&v90[8];
  *(_OWORD *)v85.m512i_i8 = *(_OWORD *)&v90[24];
  *(_OWORD *)&v85.m512i_u64[2] = *(_OWORD *)&v90[40];
  *(_OWORD *)&v85.m512i_u64[4] = *(_OWORD *)&v90[56];
  if ( *(_QWORD *)v90 != -1 )
  {
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v90[88];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v90[72];
    v24 = v84;
    v25 = *(_OWORD *)v85.m512i_i8;
    v26 = *(_OWORD *)&v85.m512i_u64[2];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v85.m512i_u64[4];
    *(_OWORD *)(a1 + 48) = v26;
    *(_OWORD *)(a1 + 32) = v25;
    *(_OWORD *)(a1 + 16) = v24;
    *(_QWORD *)(a1 + 8) = v23;
    *(_QWORD *)a1 = 1;
LABEL_14:
    if ( (unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFFFLL )
      sub_141938FA0(&off_1419E6BC0);
    *(_QWORD *)&v59 = v59 + 1;
    v27 = sub_1417AF4A0(v60);
    *(_QWORD *)&v59 = v59 - 1;
    if ( !v27 )
    {
      sub_1414039F0(v90, &v59, aRollback_1, 8);
      if ( *(_QWORD *)v90 != -1 )
        sub_14029C280(v90);
    }
    goto LABEL_18;
  }
  v72 = v84;
  v73 = *(_OWORD *)v85.m512i_i8;
  v74 = *(_OWORD *)&v85.m512i_u64[2];
  v75 = *(_OWORD *)&v85.m512i_u64[4];
  v98 = 1;
  v97 = 1;
  sub_140F7D200(v90, (__int64)&v59);
  v31 = *(_OWORD *)v90;
  if ( *(_QWORD *)v90 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v90[80];
    v32 = *(_OWORD *)&v90[16];
    v33 = *(_OWORD *)&v90[32];
    v34 = *(_OWORD *)&v90[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v90[64];
    *(_OWORD *)(a1 + 56) = v34;
    *(_OWORD *)(a1 + 40) = v33;
    *(_OWORD *)(a1 + 24) = v32;
    *(_OWORD *)(a1 + 8) = v31;
    *(_QWORD *)a1 = 1;
    v35 = v73;
    if ( (_QWORD)v73 == -1 )
      goto LABEL_14;
    goto LABEL_36;
  }
  v68[0] = *(_QWORD *)&v90[8];
  v98 = 1;
  v97 = 1;
  sub_141407EE0(&v76);
  v36 = v76;
  v37 = (unsigned int)v77;
  v38 = v78;
  *(_DWORD *)v90 = v76;
  *(_QWORD *)&v90[4] = v77;
  v98 = 1;
  v97 = 1;
  sub_141406800(&v84, v90, v78);
  if ( !(_DWORD)v84 )
  {
    v98 = 1;
    v97 = 1;
    sub_141938FE0(aLocalTimeOutOf_0, 43, &off_1419E4D00);
  }
  v82 = __PAIR64__(v38, v84);
  v39 = (_DWORD *)(v9 + 24);
  if ( *(_DWORD *)(v9 + 24) == 2
    || (*(_QWORD *)v90 = v96,
        *(_QWORD *)&v90[8] = &v82,
        *(_QWORD *)&v90[16] = v68,
        *(_QWORD *)&v90[24] = (char *)&v75 + 8,
        v98 = 1,
        v97 = 1,
        !sub_1402B3660((__int64)v90, v9 + 24)) )
  {
    v40 = (v36 >> 13) - 1;
    v41 = 0;
    if ( v36 >> 13 <= 0 )
    {
      v42 = (1 - (v36 >> 13)) / 0x190u + 1;
      v40 += 400 * v42;
      v41 = -146097 * v42;
    }
    v98 = 1;
    v97 = 1;
    sub_14035E550(
      v90,
      &v59,
      v37
    + 86400LL
    * (int)(((v40 / 100) >> 2) + ((1461 * v40) >> 2) + v41 + (((unsigned int)v36 >> 4) & 0x1FF) - v40 / 100 - 719163));
    v43 = *(_QWORD *)v90;
    v84 = *(_OWORD *)&v90[8];
    v85.m512i_i64[0] = *(_QWORD *)&v90[24];
    if ( *(_QWORD *)v90 != -1 )
    {
      v44 = *(_OWORD *)&v90[32];
      v45 = *(_OWORD *)&v90[48];
      v46 = *(_OWORD *)&v90[64];
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v90[80];
      *(_OWORD *)(a1 + 72) = v46;
      *(_OWORD *)(a1 + 56) = v45;
      *(_OWORD *)(a1 + 40) = v44;
      *(_QWORD *)(a1 + 32) = v85.m512i_i64[0];
      *(_OWORD *)(a1 + 16) = v84;
      *(_QWORD *)(a1 + 8) = v43;
      *(_QWORD *)a1 = 1;
      v35 = v73;
      if ( (_QWORD)v73 == -1 )
        goto LABEL_14;
LABEL_36:
      if ( v35 )
        sub_140001660(*((_QWORD *)&v73 + 1), v35, 1);
      goto LABEL_14;
    }
    v80 = *((_QWORD *)&v31 + 1);
    v83 = v9;
    *(_OWORD *)v69.m256i_i8 = v84;
    v69.m256i_i64[2] = v85.m512i_i64[0];
    v95 = 1;
    v81 = sub_14167FC00();
    v88 = v47;
    v58 = v72;
    v57 = (__m128)v82;
    if ( *v39 != 2 )
    {
      v68[1] = v83 + 72;
      sub_140E8B6E0();
    }
    v9 = v83;
    *(_OWORD *)(v83 + 24) = v58;
    *(_QWORD *)(v9 + 40) = v81;
    *(_DWORD *)(v9 + 48) = v88;
    _mm_storel_ps((double *)(v9 + 56), v57);
    *(_QWORD *)(v9 + 64) = v80;
    *(_OWORD *)(v9 + 72) = *(_OWORD *)v69.m256i_i8;
    *(_QWORD *)(v9 + 88) = v69.m256i_i64[2];
  }
  v98 = 0;
  v97 = 1;
  sub_1402B5C00(&v69, &v59);
  if ( v69.m256i_i64[0] != -1 )
  {
    *(_OWORD *)&v85.m512i_u64[4] = v71;
    *(_OWORD *)&v85.m512i_u64[2] = v70;
    *(_OWORD *)v85.m512i_i8 = *(_OWORD *)&v69.m256i_u64[2];
    v84 = *(_OWORD *)v69.m256i_i8;
    v98 = 0;
    v97 = 1;
    sub_140F82200(v90, &v84);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v90[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v90[64];
    v48 = *(_OWORD *)v90;
    v49 = *(_OWORD *)&v90[16];
    v50 = *(_OWORD *)&v90[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v90[48];
    *(_OWORD *)(a1 + 40) = v50;
    *(_OWORD *)(a1 + 24) = v49;
    *(_OWORD *)(a1 + 8) = v48;
    *(_QWORD *)a1 = 1;
    if ( (__int64)v73 > 0 )
      sub_140001660(*((_QWORD *)&v73 + 1), v73, 1);
    goto LABEL_18;
  }
  v51 = *(_QWORD *)v39;
  if ( *(_QWORD *)v39 == 2 )
  {
    v98 = 0;
    v97 = 1;
    sub_141938FE0(aThreadProjecti, 29, &off_1419E4D58);
  }
  v52 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)&v72 = *(_QWORD *)v39;
  *((_QWORD *)&v72 + 1) = v52;
  *(_OWORD *)&v85.m512i_u64[5] = v75;
  *(_OWORD *)&v85.m512i_u64[3] = v74;
  *(_OWORD *)&v85.m512i_u64[1] = v73;
  *((_QWORD *)&v84 + 1) = v51;
  v85.m512i_i64[0] = v52;
  *(_QWORD *)&v84 = v39;
  v98 = 0;
  v97 = 0;
  sub_1402B4930(v90, v39, (char *)&v84 + 8);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v90[80];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v90[64];
  v53 = *(_OWORD *)v90;
  v54 = *(_OWORD *)&v90[16];
  v55 = *(_OWORD *)&v90[32];
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v90[48];
  *(_OWORD *)(a1 + 40) = v55;
  *(_OWORD *)(a1 + 24) = v54;
  *(_OWORD *)(a1 + 8) = v53;
  *(_QWORD *)a1 = 0;
  sub_14029B090(&v59);
  sub_140028CC0(v79, v94);
LABEL_23:
  if ( !_InterlockedDecrement64(v89) )
    sub_1409E50F0(&v89);
  return a1;
}
