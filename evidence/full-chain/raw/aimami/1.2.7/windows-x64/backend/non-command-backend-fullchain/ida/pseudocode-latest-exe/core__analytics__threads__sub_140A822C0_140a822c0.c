// win 1.2.7 latest-exe | module src/core/analytics/threads.rs | ea 0x140a822c0 | successor of pre-update 0x14035d510 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_140A822C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  volatile signed __int64 *v8; // rcx
  __int64 v9; // rt0
  char v10; // of
  __int64 v11; // r12
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int8 v18; // r14
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  __int128 v26; // xmm5
  __int64 v27; // rax
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  int v31; // eax
  char *v32; // rdi
  char v33; // al
  __int128 v35; // kr00_16
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // rdx
  int v40; // r15d
  __int64 v41; // r14
  unsigned int v42; // edi
  _DWORD *v43; // rdi
  int v44; // ecx
  int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  int v52; // edx
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  __int64 v56; // rax
  __int64 v57; // rcx
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  unsigned int v61; // eax
  __m256i v62; // [rsp+20h] [rbp-60h] BYREF
  __int128 v63; // [rsp+40h] [rbp-40h]
  __int128 v64; // [rsp+50h] [rbp-30h]
  __m128 v65; // [rsp+60h] [rbp-20h]
  __int128 v66; // [rsp+70h] [rbp-10h]
  __int128 v67; // [rsp+80h] [rbp+0h] BYREF
  __int128 v68; // [rsp+90h] [rbp+10h]
  __int128 v69; // [rsp+A0h] [rbp+20h]
  __int128 v70; // [rsp+B0h] [rbp+30h]
  __int128 v71; // [rsp+C0h] [rbp+40h]
  __int128 v72; // [rsp+D0h] [rbp+50h]
  __int64 v73; // [rsp+E0h] [rbp+60h]
  unsigned __int8 v74; // [rsp+E8h] [rbp+68h]
  _BYTE v75[7]; // [rsp+E9h] [rbp+69h]
  _QWORD v76[2]; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v77; // [rsp+100h] [rbp+80h]
  __int64 v78; // [rsp+110h] [rbp+90h]
  __int128 v79; // [rsp+120h] [rbp+A0h]
  __int128 v80; // [rsp+130h] [rbp+B0h]
  __int128 v81; // [rsp+140h] [rbp+C0h]
  __int128 v82; // [rsp+150h] [rbp+D0h] BYREF
  int v83; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v84; // [rsp+16Ch] [rbp+ECh]
  unsigned int v85; // [rsp+174h] [rbp+F4h]
  __int64 v86; // [rsp+178h] [rbp+F8h]
  __int64 v87; // [rsp+180h] [rbp+100h]
  __int64 v88; // [rsp+188h] [rbp+108h]
  unsigned __int64 v89; // [rsp+190h] [rbp+110h] BYREF
  __int64 v90; // [rsp+198h] [rbp+118h]
  __int128 v91; // [rsp+1A0h] [rbp+120h] BYREF
  __m512i v92; // [rsp+1B0h] [rbp+130h]
  __int128 v93; // [rsp+1F0h] [rbp+170h]
  __int64 v94; // [rsp+200h] [rbp+180h]
  int v95; // [rsp+214h] [rbp+194h]
  volatile signed __int64 *v96; // [rsp+218h] [rbp+198h] BYREF
  _BYTE v97[96]; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v98; // [rsp+280h] [rbp+200h]
  unsigned __int8 v99; // [rsp+288h] [rbp+208h]
  _DWORD v100[2]; // [rsp+289h] [rbp+209h]
  unsigned int v101; // [rsp+294h] [rbp+214h]
  char v102; // [rsp+29Bh] [rbp+21Bh]
  _BYTE v103[2]; // [rsp+29Ch] [rbp+21Ch] BYREF
  char v104; // [rsp+29Eh] [rbp+21Eh]
  char v105; // [rsp+29Fh] [rbp+21Fh]
  __int64 v106; // [rsp+2A0h] [rbp+220h]

  v106 = -2;
  v103[0] = a3;
  v5 = sub_140A04880(a2);
  *(_QWORD *)v97 = v5;
  v8 = *(volatile signed __int64 **)(v5 + 24);
  v9 = _InterlockedIncrement64(v8);
  if ( (v9 < 0) ^ v10 | (v9 == 0) )
    BUG();
  v11 = *(_QWORD *)(v5 + 24);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v5) )
    sub_140CA5E10(v97);
  v96 = (volatile signed __int64 *)v11;
  LOBYTE(v8) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v11 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v11 + 16));
  v12 = off_142240260;
  v13 = 2 * *off_142240260;
  v86 = v11 + 16;
  if ( v13 )
  {
    v61 = sub_14196A710(v8, v6, v7);
    LOBYTE(v61) = v61 ^ 1;
    v101 = v61;
  }
  else
  {
    v101 = 0;
  }
  sub_1409FC900(v97);
  if ( v99 == 0xFF )
  {
    v93 = *(_OWORD *)&v97[80];
    v22 = *(_OWORD *)&v97[64];
    v92 = *(__m512i *)&v97[16];
    v23 = *(_OWORD *)v97;
    v24 = *(_OWORD *)&v97[16];
    v25 = *(_OWORD *)&v97[32];
    v26 = *(_OWORD *)&v97[48];
    v91 = *(_OWORD *)v97;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v97[80];
    *(_OWORD *)(a1 + 72) = v22;
    *(_OWORD *)(a1 + 56) = v26;
    *(_OWORD *)(a1 + 40) = v25;
    *(_OWORD *)(a1 + 24) = v24;
    *(_OWORD *)(a1 + 8) = v23;
    *(_QWORD *)a1 = 1;
    goto LABEL_19;
  }
  v94 = v98;
  v93 = *(_OWORD *)&v97[80];
  v92 = *(__m512i *)&v97[16];
  v91 = *(_OWORD *)v97;
  *(_DWORD *)v75 = v100[0];
  *(_DWORD *)&v75[3] = *(_DWORD *)((char *)v100 + 3);
  v73 = v98;
  v72 = *(_OWORD *)&v97[80];
  v71 = *(_OWORD *)&v97[64];
  v70 = *(_OWORD *)&v97[48];
  v69 = *(_OWORD *)&v97[32];
  v68 = *(_OWORD *)&v97[16];
  v67 = *(_OWORD *)v97;
  v74 = v99;
  sub_1409FBF10(a2, v103[0]);
  sub_141431530(v97, &v67, (&off_141A6D7D8)[v74], qword_141A6D7F0[v74]);
  if ( *(_QWORD *)v97 != -1 )
  {
    *(_OWORD *)&v92.m512i_u64[4] = *(_OWORD *)&v97[48];
    *(_OWORD *)((char *)&v92.m512i_u64[2] + 1) = *(_OWORD *)&v97[33];
    *(_OWORD *)&v92.m512i_i8[1] = *(_OWORD *)&v97[17];
    v91 = *(_OWORD *)v97;
    v92.m512i_i8[0] = v97[16];
    *(_QWORD *)v97 = &v91;
    *(_QWORD *)&v97[8] = sub_14142D4D0;
    sub_1416DAFA0(&v62, &unk_141A6690F, v97);
    v17 = v62.m256i_i64[0];
    v18 = v62.m256i_i8[8];
    *(_QWORD *)v97 = *(__int64 *)((char *)&v62.m256i_i64[1] + 1);
    *(_QWORD *)&v97[7] = v62.m256i_i64[2];
    sub_140904700(&v91);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v97[63];
    v19 = *(_OWORD *)v97;
    v20 = *(_OWORD *)&v97[16];
    v21 = *(_OWORD *)&v97[32];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v97[48];
    *(_OWORD *)(a1 + 57) = v21;
    *(_OWORD *)(a1 + 41) = v20;
    *(_OWORD *)(a1 + 25) = v19;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)(a1 + 16) = v17;
    *(_BYTE *)(a1 + 24) = v18;
    *(_QWORD *)a1 = 1;
LABEL_18:
    sub_140A18DE0(&v67);
LABEL_19:
    v32 = (char *)(v11 + 16);
    if ( !(_BYTE)v101 && 2 * *v12 && !(unsigned __int8)sub_14196A710(v15, v14, v16) )
      *(_BYTE *)(v11 + 17) = 1;
    v33 = *v32;
    *v32 = 0;
    if ( v33 == 2 )
      WakeByAddressSingle((PVOID)(v11 + 16));
    goto LABEL_23;
  }
  v103[1] = 1;
  sub_140A039E0(v97, a2, &v67);
  v27 = *(_QWORD *)v97;
  v91 = *(_OWORD *)&v97[8];
  *(_OWORD *)v92.m512i_i8 = *(_OWORD *)&v97[24];
  *(_OWORD *)&v92.m512i_u64[2] = *(_OWORD *)&v97[40];
  *(_OWORD *)&v92.m512i_u64[4] = *(_OWORD *)&v97[56];
  if ( *(_QWORD *)v97 != -1 )
  {
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v97[88];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v97[72];
    v28 = v91;
    v29 = *(_OWORD *)v92.m512i_i8;
    v30 = *(_OWORD *)&v92.m512i_u64[2];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v92.m512i_u64[4];
    *(_OWORD *)(a1 + 48) = v30;
    *(_OWORD *)(a1 + 32) = v29;
    *(_OWORD *)(a1 + 16) = v28;
    *(_QWORD *)(a1 + 8) = v27;
    *(_QWORD *)a1 = 1;
LABEL_14:
    if ( (unsigned __int64)v67 >= 0x7FFFFFFFFFFFFFFFLL )
      sub_14196B550(&off_141A69BA0);
    *(_QWORD *)&v67 = v67 + 1;
    v31 = sub_1417DE470(v68);
    *(_QWORD *)&v67 = v67 - 1;
    if ( !v31 )
    {
      sub_141431530(v97, &v67, aRollback_3, 8);
      if ( *(_QWORD *)v97 != -1 )
        sub_140A19CC0(v97);
    }
    goto LABEL_18;
  }
  v79 = v91;
  v80 = *(_OWORD *)v92.m512i_i8;
  v81 = *(_OWORD *)&v92.m512i_u64[2];
  v82 = *(_OWORD *)&v92.m512i_u64[4];
  v105 = 1;
  v104 = 1;
  sub_1409FAF90(v97, &v67);
  v35 = *(_OWORD *)v97;
  if ( *(_QWORD *)v97 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v97[80];
    v36 = *(_OWORD *)&v97[16];
    v37 = *(_OWORD *)&v97[32];
    v38 = *(_OWORD *)&v97[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v97[64];
    *(_OWORD *)(a1 + 56) = v38;
    *(_OWORD *)(a1 + 40) = v37;
    *(_OWORD *)(a1 + 24) = v36;
    *(_OWORD *)(a1 + 8) = v35;
    *(_QWORD *)a1 = 1;
    v39 = v80;
    if ( (_QWORD)v80 == -1 )
      goto LABEL_14;
    goto LABEL_36;
  }
  v76[0] = *(_QWORD *)&v97[8];
  v105 = 1;
  v104 = 1;
  sub_141436F90(&v83);
  v40 = v83;
  v41 = (unsigned int)v84;
  v42 = v85;
  *(_DWORD *)v97 = v83;
  *(_QWORD *)&v97[4] = v84;
  v105 = 1;
  v104 = 1;
  sub_141432CF0(&v91, v97, v85);
  if ( !(_DWORD)v91 )
  {
    v105 = 1;
    v104 = 1;
    sub_14196B590(aLocalTimeOutOf_2, 43, &off_141A68FD0);
  }
  v89 = __PAIR64__(v42, v91);
  v43 = (_DWORD *)(v11 + 24);
  if ( *(_DWORD *)(v11 + 24) == 2
    || (*(_QWORD *)v97 = v103,
        *(_QWORD *)&v97[8] = &v89,
        *(_QWORD *)&v97[16] = v76,
        *(_QWORD *)&v97[24] = (char *)&v82 + 8,
        v105 = 1,
        v104 = 1,
        !(unsigned __int8)sub_140A26600(v97, v11 + 24)) )
  {
    v44 = (v40 >> 13) - 1;
    v45 = 0;
    if ( v40 >> 13 <= 0 )
    {
      v46 = (1 - (v40 >> 13)) / 0x190u + 1;
      v44 += 400 * v46;
      v45 = -146097 * v46;
    }
    v105 = 1;
    v104 = 1;
    sub_140A83300(
      (__int64)v97,
      (__int64)&v67,
      v41
    + 86400LL
    * (int)(((v44 / 100) >> 2) + ((1461 * v44) >> 2) + v45 + (((unsigned int)v40 >> 4) & 0x1FF) - v44 / 100 - 719163));
    v48 = *(_QWORD *)v97;
    v91 = *(_OWORD *)&v97[8];
    v92.m512i_i64[0] = *(_QWORD *)&v97[24];
    if ( *(_QWORD *)v97 != -1 )
    {
      v49 = *(_OWORD *)&v97[32];
      v50 = *(_OWORD *)&v97[48];
      v51 = *(_OWORD *)&v97[64];
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v97[80];
      *(_OWORD *)(a1 + 72) = v51;
      *(_OWORD *)(a1 + 56) = v50;
      *(_OWORD *)(a1 + 40) = v49;
      *(_QWORD *)(a1 + 32) = v92.m512i_i64[0];
      *(_OWORD *)(a1 + 16) = v91;
      *(_QWORD *)(a1 + 8) = v48;
      *(_QWORD *)a1 = 1;
      v39 = v80;
      if ( (_QWORD)v80 == -1 )
        goto LABEL_14;
LABEL_36:
      if ( v39 )
        sub_140001660(*((_QWORD *)&v80 + 1), v39, 1);
      goto LABEL_14;
    }
    v87 = *((_QWORD *)&v35 + 1);
    v90 = v11;
    v77 = v91;
    v78 = v92.m512i_i64[0];
    v102 = 1;
    v88 = sub_1416AEBD0(*(_QWORD *)&v97[24], v47);
    v95 = v52;
    v66 = v79;
    v65 = (__m128)v89;
    if ( *v43 != 2 )
    {
      v76[1] = v90 + 72;
      sub_140A95300();
    }
    v11 = v90;
    *(_OWORD *)(v90 + 24) = v66;
    *(_QWORD *)(v11 + 40) = v88;
    *(_DWORD *)(v11 + 48) = v95;
    _mm_storel_ps((double *)(v11 + 56), v65);
    *(_QWORD *)(v11 + 64) = v87;
    *(_OWORD *)(v11 + 72) = v77;
    *(_QWORD *)(v11 + 88) = v78;
  }
  v105 = 0;
  v104 = 1;
  sub_140A29320(&v62, &v67);
  if ( v62.m256i_i64[0] != -1 )
  {
    *(_OWORD *)&v92.m512i_u64[4] = v64;
    *(_OWORD *)&v92.m512i_u64[2] = v63;
    *(_OWORD *)v92.m512i_i8 = *(_OWORD *)&v62.m256i_u64[2];
    v91 = *(_OWORD *)v62.m256i_i8;
    v105 = 0;
    v104 = 1;
    sub_140A04BA0(v97, &v91);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v97[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v97[64];
    v53 = *(_OWORD *)v97;
    v54 = *(_OWORD *)&v97[16];
    v55 = *(_OWORD *)&v97[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v97[48];
    *(_OWORD *)(a1 + 40) = v55;
    *(_OWORD *)(a1 + 24) = v54;
    *(_OWORD *)(a1 + 8) = v53;
    *(_QWORD *)a1 = 1;
    if ( (_QWORD)v80 != -1 && (_QWORD)v80 )
      sub_140001660(*((_QWORD *)&v80 + 1), v80, 1);
    goto LABEL_18;
  }
  v56 = *(_QWORD *)v43;
  if ( *(_QWORD *)v43 == 2 )
  {
    v105 = 0;
    v104 = 1;
    sub_14196B590(aThreadProjecti, 29, &off_141A69028);
  }
  v57 = *(_QWORD *)(v11 + 32);
  *(_QWORD *)&v79 = *(_QWORD *)v43;
  *((_QWORD *)&v79 + 1) = v57;
  *(_OWORD *)&v92.m512i_u64[5] = v82;
  *(_OWORD *)&v92.m512i_u64[3] = v81;
  *(_OWORD *)&v92.m512i_u64[1] = v80;
  *((_QWORD *)&v91 + 1) = v56;
  v92.m512i_i64[0] = v57;
  *(_QWORD *)&v91 = v43;
  v105 = 0;
  v104 = 0;
  sub_140A28CF0(v97, v43, (char *)&v91 + 8);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v97[80];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v97[64];
  v58 = *(_OWORD *)v97;
  v59 = *(_OWORD *)&v97[16];
  v60 = *(_OWORD *)&v97[32];
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v97[48];
  *(_OWORD *)(a1 + 40) = v60;
  *(_OWORD *)(a1 + 24) = v59;
  *(_OWORD *)(a1 + 8) = v58;
  *(_QWORD *)a1 = 0;
  sub_140A18DE0(&v67);
  sub_14002B980(v86, v101);
LABEL_23:
  if ( !_InterlockedDecrement64(v96) )
    sub_140CA47E0(&v96);
  return a1;
}
