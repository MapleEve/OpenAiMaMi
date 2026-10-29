// win 1.2.7 latest-exe | module src/core/analytics/threads.rs | ea 0x140a80d40 | successor of pre-update 0x14035c040 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.971, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
char *__fastcall sub_140A80D40(char *a1, __int64 a2, char *a3, __int64 a4)
{
  char *v4; // rsi
  void *v5; // rax
  __int64 v7; // r14
  int v8; // r10d
  int v9; // edi
  int v10; // edx
  unsigned __int8 v11; // r11
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  int v14; // ebx
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  volatile signed __int64 *v19; // rcx
  __int64 v20; // rt0
  char v21; // of
  __int64 v22; // r13
  __int64 *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int8 v29; // bl
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  __int128 v37; // xmm5
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  int v42; // eax
  char *v43; // rdi
  char v44; // al
  __int128 v45; // kr00_16
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  int v49; // r13d
  __int64 v50; // r12
  unsigned int v51; // r14d
  _DWORD *v52; // r14
  int v53; // ecx
  int v54; // eax
  unsigned int v55; // eax
  __int64 v56; // rax
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  int v60; // edx
  __int64 v61; // rcx
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  __int64 v65; // rcx
  unsigned int v66; // eax
  __m256i v67; // [rsp+30h] [rbp-50h] BYREF
  __int128 v68; // [rsp+50h] [rbp-30h]
  __int128 v69; // [rsp+60h] [rbp-20h]
  __m128 v70; // [rsp+70h] [rbp-10h]
  __int128 v71; // [rsp+80h] [rbp+0h]
  __int128 v72; // [rsp+90h] [rbp+10h] BYREF
  __int128 v73; // [rsp+A0h] [rbp+20h]
  __int128 v74; // [rsp+B0h] [rbp+30h]
  __int128 v75; // [rsp+C0h] [rbp+40h]
  __int128 v76; // [rsp+D0h] [rbp+50h]
  __int128 v77; // [rsp+E0h] [rbp+60h]
  __int64 v78; // [rsp+F0h] [rbp+70h]
  unsigned __int8 v79; // [rsp+F8h] [rbp+78h]
  _DWORD v80[3]; // [rsp+F9h] [rbp+79h]
  _BYTE v81[96]; // [rsp+108h] [rbp+88h] BYREF
  __int64 v82; // [rsp+168h] [rbp+E8h]
  unsigned __int8 v83; // [rsp+170h] [rbp+F0h]
  _DWORD v84[55]; // [rsp+171h] [rbp+F1h]
  _QWORD v85[2]; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v86; // [rsp+260h] [rbp+1E0h]
  __int64 v87; // [rsp+270h] [rbp+1F0h]
  __int128 v88; // [rsp+280h] [rbp+200h]
  __int128 v89; // [rsp+290h] [rbp+210h]
  __int128 v90; // [rsp+2A0h] [rbp+220h]
  __int128 v91; // [rsp+2B0h] [rbp+230h] BYREF
  int v92; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v93; // [rsp+2C4h] [rbp+244h]
  unsigned int v94; // [rsp+2CCh] [rbp+24Ch]
  __int64 v95; // [rsp+2D0h] [rbp+250h]
  __int64 v96; // [rsp+2D8h] [rbp+258h]
  __int64 v97; // [rsp+2E0h] [rbp+260h]
  unsigned __int64 v98; // [rsp+2E8h] [rbp+268h] BYREF
  __int128 v99; // [rsp+2F0h] [rbp+270h] BYREF
  __m512i v100; // [rsp+300h] [rbp+280h]
  __int128 v101; // [rsp+340h] [rbp+2C0h]
  __int64 v102; // [rsp+350h] [rbp+2D0h]
  int v103; // [rsp+35Ch] [rbp+2DCh]
  volatile signed __int64 *v104; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v105; // [rsp+368h] [rbp+2E8h]
  unsigned int v106; // [rsp+374h] [rbp+2F4h]
  _BYTE v107[3]; // [rsp+37Bh] [rbp+2FBh] BYREF
  char v108; // [rsp+37Eh] [rbp+2FEh]
  char v109; // [rsp+37Fh] [rbp+2FFh]
  __int64 v110; // [rsp+380h] [rbp+300h]

  v110 = -2;
  v4 = a1;
  if ( (unsigned __int64)(a4 - 129) <= 0xFFFFFFFFFFFFFF7FuLL )
  {
LABEL_2:
    nullsub_1(a1, a2);
    v5 = (void *)sub_140001650(23, 1);
    if ( !v5 )
      sub_14196B2DB(1, 23);
    qmemcpy(v5, "invalid thread identity", 23);
    *((_QWORD *)v4 + 1) = 9;
    *((_QWORD *)v4 + 2) = 23;
    *((_QWORD *)v4 + 3) = v5;
    *((_QWORD *)v4 + 4) = 23;
    *(_QWORD *)v4 = 2;
    return v4;
  }
  v7 = a2;
  a1 = a3;
  while ( a1 != &a3[a4] )
  {
    a2 = (unsigned __int8)*a1;
    if ( *a1 < 0 )
    {
      v8 = a2 & 0x1F;
      v9 = a1[1] & 0x3F;
      if ( (unsigned __int8)a2 <= 0xDFu )
      {
        a1 += 2;
        v13 = v9 | (v8 << 6);
        a2 = v13;
        if ( v13 < 0x20 )
          goto LABEL_2;
      }
      else
      {
        v10 = (v9 << 6) | a1[2] & 0x3F;
        if ( (unsigned __int8)*a1 < 0xF0u )
        {
          a1 += 3;
          a2 = (v8 << 12) | (unsigned int)v10;
          if ( (unsigned int)a2 < 0x20 )
            goto LABEL_2;
        }
        else
        {
          v11 = a1[3];
          a1 += 4;
          v12 = ((v8 & 7) << 18) | (v10 << 6) | v11 & 0x3F;
          a2 = v12;
          if ( v12 < 0x20 )
            goto LABEL_2;
        }
      }
    }
    else
    {
      ++a1;
      if ( (unsigned int)a2 < 0x20 )
        goto LABEL_2;
    }
    a2 = (unsigned int)(a2 - 127);
    if ( (unsigned int)a2 < 0x21 )
      goto LABEL_2;
  }
  v14 = (int)a3;
  v15 = a4;
  v107[0] = 0;
  v16 = sub_140A04880(v7);
  *(_QWORD *)v81 = v16;
  v19 = *(volatile signed __int64 **)(v16 + 24);
  v20 = _InterlockedIncrement64(v19);
  if ( (v20 < 0) ^ v21 | (v20 == 0) )
    BUG();
  v22 = *(_QWORD *)(v16 + 24);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v16) )
    sub_140CA5E10(v81);
  v104 = (volatile signed __int64 *)v22;
  LOBYTE(v19) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v22 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v22 + 16));
  v23 = off_142240260;
  v24 = 2 * *off_142240260;
  v95 = v22 + 16;
  if ( v24 )
  {
    v66 = sub_14196A710(v19, v17, v18);
    LOBYTE(v66) = v66 ^ 1;
    v106 = v66;
  }
  else
  {
    v106 = 0;
  }
  sub_1409FC900(v81);
  if ( v83 == 255 )
  {
    v101 = *(_OWORD *)&v81[80];
    v33 = *(_OWORD *)&v81[64];
    v100 = *(__m512i *)&v81[16];
    v34 = *(_OWORD *)v81;
    v35 = *(_OWORD *)&v81[16];
    v36 = *(_OWORD *)&v81[32];
    v37 = *(_OWORD *)&v81[48];
    v99 = *(_OWORD *)v81;
    *(_OWORD *)(v4 + 88) = *(_OWORD *)&v81[80];
    *(_OWORD *)(v4 + 72) = v33;
    *(_OWORD *)(v4 + 56) = v37;
    *(_OWORD *)(v4 + 40) = v36;
    *(_OWORD *)(v4 + 24) = v35;
    *(_OWORD *)(v4 + 8) = v34;
    *(_QWORD *)v4 = 2;
    goto LABEL_37;
  }
  v102 = v82;
  v101 = *(_OWORD *)&v81[80];
  v100 = *(__m512i *)&v81[16];
  v99 = *(_OWORD *)v81;
  v80[0] = v84[0];
  *(_DWORD *)((char *)v80 + 3) = *(_DWORD *)((char *)v84 + 3);
  v78 = v82;
  v77 = *(_OWORD *)&v81[80];
  v76 = *(_OWORD *)&v81[64];
  v75 = *(_OWORD *)&v81[48];
  v74 = *(_OWORD *)&v81[32];
  v73 = *(_OWORD *)&v81[16];
  v72 = *(_OWORD *)v81;
  v79 = v83;
  sub_141431530(v81, &v72, (&off_141A6D7D8)[v83], qword_141A6D7F0[v83]);
  if ( *(_QWORD *)v81 == -1 )
  {
    v107[2] = 1;
    sub_140A039E0(v81, v7, &v72);
    v38 = *(_QWORD *)v81;
    v99 = *(_OWORD *)&v81[8];
    *(_OWORD *)v100.m512i_i8 = *(_OWORD *)&v81[24];
    *(_OWORD *)&v100.m512i_u64[2] = *(_OWORD *)&v81[40];
    *(_OWORD *)&v100.m512i_u64[4] = *(_OWORD *)&v81[56];
    if ( *(_QWORD *)v81 != -1 )
    {
      *((_QWORD *)v4 + 12) = *(_QWORD *)&v81[88];
      *((_OWORD *)v4 + 5) = *(_OWORD *)&v81[72];
      v39 = v99;
      v40 = *(_OWORD *)v100.m512i_i8;
      v41 = *(_OWORD *)&v100.m512i_u64[2];
      *((_OWORD *)v4 + 4) = *(_OWORD *)&v100.m512i_u64[4];
      *((_OWORD *)v4 + 3) = v41;
      *((_OWORD *)v4 + 2) = v40;
      *((_OWORD *)v4 + 1) = v39;
      *((_QWORD *)v4 + 1) = v38;
      *(_QWORD *)v4 = 2;
LABEL_32:
      if ( (unsigned __int64)v72 >= 0x7FFFFFFFFFFFFFFFLL )
        sub_14196B550(&off_141A69BA0);
      *(_QWORD *)&v72 = v72 + 1;
      v42 = sub_1417DE470(v73);
      *(_QWORD *)&v72 = v72 - 1;
      if ( !v42 )
      {
        sub_141431530(v81, &v72, aRollback_3, 8);
        if ( *(_QWORD *)v81 != -1 )
          sub_140A19CC0(v81);
      }
      goto LABEL_36;
    }
    v105 = v22;
    v88 = v99;
    v89 = *(_OWORD *)v100.m512i_i8;
    v90 = *(_OWORD *)&v100.m512i_u64[2];
    v91 = *(_OWORD *)&v100.m512i_u64[4];
    v109 = 1;
    v108 = 1;
    sub_1409FAF90(v81, &v72);
    v45 = *(_OWORD *)v81;
    if ( *(_QWORD *)v81 != -1 )
    {
      *(_OWORD *)(v4 + 88) = *(_OWORD *)&v81[80];
      v46 = *(_OWORD *)&v81[16];
      v47 = *(_OWORD *)&v81[32];
      v48 = *(_OWORD *)&v81[48];
      *(_OWORD *)(v4 + 72) = *(_OWORD *)&v81[64];
      *(_OWORD *)(v4 + 56) = v48;
      *(_OWORD *)(v4 + 40) = v47;
      *(_OWORD *)(v4 + 24) = v46;
      *(_OWORD *)(v4 + 8) = v45;
LABEL_52:
      *(_QWORD *)v4 = 2;
      v22 = v105;
      if ( (_QWORD)v89 != -1 && (_QWORD)v89 )
        sub_140001660(*((_QWORD *)&v89 + 1), v89, 1);
      goto LABEL_32;
    }
    v96 = *(_QWORD *)&v81[8];
    v85[0] = *(_QWORD *)&v81[8];
    v109 = 1;
    v108 = 1;
    sub_141436F90(&v92);
    v49 = v92;
    v50 = (unsigned int)v93;
    v51 = v94;
    *(_DWORD *)v81 = v92;
    *(_QWORD *)&v81[4] = v93;
    v109 = 1;
    v108 = 1;
    sub_141432CF0(&v99, v81, v94);
    if ( !(_DWORD)v99 )
    {
      v109 = 1;
      v108 = 1;
      sub_14196B590(aLocalTimeOutOf_2, 43, &off_141A68FD0);
    }
    v98 = __PAIR64__(v51, v99);
    v52 = (_DWORD *)(v105 + 24);
    if ( *(_DWORD *)(v105 + 24) == 2
      || (*(_QWORD *)v81 = v107,
          *(_QWORD *)&v81[8] = &v98,
          *(_QWORD *)&v81[16] = v85,
          *(_QWORD *)&v81[24] = (char *)&v91 + 8,
          v109 = 1,
          v108 = 1,
          !(unsigned __int8)sub_140A26600(v81, v105 + 24)) )
    {
      v53 = (v49 >> 13) - 1;
      v54 = 0;
      if ( v49 >> 13 <= 0 )
      {
        v55 = (1 - (v49 >> 13)) / 0x190u + 1;
        v53 += 400 * v55;
        v54 = -146097 * v55;
      }
      v109 = 1;
      v108 = 1;
      sub_140A83300(
        v81,
        &v72,
        v50
      + 86400LL
      * (int)(((v53 / 100) >> 2) + ((1461 * v53) >> 2) + v54 + (((unsigned int)v49 >> 4) & 0x1FF) - v53 / 100 - 719163));
      v56 = *(_QWORD *)v81;
      v99 = *(_OWORD *)&v81[8];
      v100.m512i_i64[0] = *(_QWORD *)&v81[24];
      if ( *(_QWORD *)v81 != -1 )
      {
        v57 = *(_OWORD *)&v81[32];
        v58 = *(_OWORD *)&v81[48];
        v59 = *(_OWORD *)&v81[64];
        *(_OWORD *)(v4 + 88) = *(_OWORD *)&v81[80];
        *(_OWORD *)(v4 + 72) = v59;
        *(_OWORD *)(v4 + 56) = v58;
        *(_OWORD *)(v4 + 40) = v57;
        *((_QWORD *)v4 + 4) = v100.m512i_i64[0];
        *((_OWORD *)v4 + 1) = v99;
        *((_QWORD *)v4 + 1) = v56;
        goto LABEL_52;
      }
      v86 = v99;
      v87 = v100.m512i_i64[0];
      v107[1] = 1;
      v97 = sub_1416AEBD0();
      v103 = v60;
      v71 = v88;
      v70 = (__m128)v98;
      if ( *v52 != 2 )
      {
        v85[1] = v105 + 72;
        sub_140A95300();
      }
      v61 = v105;
      *(_OWORD *)(v105 + 24) = v71;
      *(_QWORD *)(v61 + 40) = v97;
      *(_DWORD *)(v61 + 48) = v103;
      _mm_storel_ps((double *)(v61 + 56), v70);
      *(_QWORD *)(v61 + 64) = v96;
      *(_OWORD *)(v61 + 72) = v86;
      *(_QWORD *)(v61 + 88) = v87;
    }
    v109 = 0;
    v108 = 1;
    sub_140A29320(&v67, &v72);
    if ( v67.m256i_i64[0] == -1 )
    {
      if ( *(_QWORD *)v52 == 2 )
      {
        v109 = 0;
        v108 = 1;
        sub_14196B590(aThreadProjecti, 29, &off_141A69028);
      }
      v65 = *(_QWORD *)(v105 + 32);
      *(_QWORD *)&v88 = *(_QWORD *)v52;
      *((_QWORD *)&v88 + 1) = v65;
      *(_OWORD *)&v100.m512i_u64[5] = v91;
      *(_OWORD *)&v100.m512i_u64[3] = v90;
      *(_OWORD *)&v100.m512i_u64[1] = v89;
      *((_QWORD *)&v99 + 1) = v88;
      v100.m512i_i64[0] = v65;
      *(_QWORD *)&v99 = v52;
      v109 = 0;
      v108 = 0;
      sub_140A28670((unsigned int)v81, v14, v15, (_DWORD)v52, (__int64)&v99 + 8);
      sub_1419234B0(v4, v81, 328);
      sub_140A18DE0(&v72);
      sub_14002B980(v95, v106);
      goto LABEL_41;
    }
    *(_OWORD *)&v100.m512i_u64[4] = v69;
    *(_OWORD *)&v100.m512i_u64[2] = v68;
    *(_OWORD *)v100.m512i_i8 = *(_OWORD *)&v67.m256i_u64[2];
    v99 = *(_OWORD *)v67.m256i_i8;
    v109 = 0;
    v108 = 1;
    sub_140A04BA0(v81, &v99);
    *(_OWORD *)(v4 + 88) = *(_OWORD *)&v81[80];
    *(_OWORD *)(v4 + 72) = *(_OWORD *)&v81[64];
    v62 = *(_OWORD *)v81;
    v63 = *(_OWORD *)&v81[16];
    v64 = *(_OWORD *)&v81[32];
    *(_OWORD *)(v4 + 56) = *(_OWORD *)&v81[48];
    *(_OWORD *)(v4 + 40) = v64;
    *(_OWORD *)(v4 + 24) = v63;
    *(_OWORD *)(v4 + 8) = v62;
    *(_QWORD *)v4 = 2;
    if ( (_QWORD)v89 != -1 && (_QWORD)v89 )
      sub_140001660(*((_QWORD *)&v89 + 1), v89, 1);
    v22 = v105;
    goto LABEL_36;
  }
  *(_OWORD *)&v100.m512i_u64[4] = *(_OWORD *)&v81[48];
  *(_OWORD *)((char *)&v100.m512i_u64[2] + 1) = *(_OWORD *)&v81[33];
  *(_OWORD *)&v100.m512i_i8[1] = *(_OWORD *)&v81[17];
  v99 = *(_OWORD *)v81;
  v100.m512i_i8[0] = v81[16];
  *(_QWORD *)v81 = &v99;
  *(_QWORD *)&v81[8] = sub_14142D4D0;
  sub_1416DAFA0(&v67, &unk_141A6690F, v81);
  v28 = v67.m256i_i64[0];
  v29 = v67.m256i_i8[8];
  *(_QWORD *)v81 = *(__int64 *)((char *)&v67.m256i_i64[1] + 1);
  *(_QWORD *)&v81[7] = v67.m256i_i64[2];
  sub_140904700(&v99);
  *(_OWORD *)(v4 + 88) = *(_OWORD *)&v81[63];
  v30 = *(_OWORD *)v81;
  v31 = *(_OWORD *)&v81[16];
  v32 = *(_OWORD *)&v81[32];
  *(_OWORD *)(v4 + 73) = *(_OWORD *)&v81[48];
  *(_OWORD *)(v4 + 57) = v32;
  *(_OWORD *)(v4 + 41) = v31;
  *(_OWORD *)(v4 + 25) = v30;
  *((_QWORD *)v4 + 1) = 10;
  *((_QWORD *)v4 + 2) = v28;
  v4[24] = v29;
  *(_QWORD *)v4 = 2;
LABEL_36:
  sub_140A18DE0(&v72);
LABEL_37:
  v43 = (char *)(v22 + 16);
  if ( !(_BYTE)v106 && 2 * *v23 && !(unsigned __int8)sub_14196A710(v26, v25, v27) )
    *(_BYTE *)(v22 + 17) = 1;
  v44 = *v43;
  *v43 = 0;
  if ( v44 == 2 )
    WakeByAddressSingle((PVOID)(v22 + 16));
LABEL_41:
  if ( !_InterlockedDecrement64(v104) )
    sub_140CA47E0(&v104);
  return v4;
}
