// module: codexmate_lib/core/repository
// addr: 0x1403b99e0
// name: sub_1403B99E0
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_1403B99E0(_QWORD *a1, __int64 a2, void *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v5; // rbx
  _QWORD *v8; // rsi
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r14
  bool v16; // zf
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // r12
  _BYTE *v21; // r15
  __int128 v22; // xmm0
  unsigned __int64 v23; // rcx
  __int128 v24; // xmm0
  char v25; // al
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // ecx
  int v29; // r8d
  int v30; // edx
  unsigned int v31; // eax
  __int64 v32; // rdi
  _QWORD *v33; // rsi
  __int64 v34; // r14
  __int128 *v35; // rbx
  int v36; // edx
  __int64 v37; // rcx
  void *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int64 v44; // r14
  int v45; // r8d
  int v46; // edx
  unsigned int v47; // edx
  unsigned __int64 v48; // rdx
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 *v51; // r14
  __int64 v52; // rdi
  __int64 v53; // r15
  __int64 v54; // rbx
  char v55; // dl
  __int64 v56; // r9
  int v57; // edx
  int v58; // ecx
  unsigned int v59; // ecx
  __int128 v61; // [rsp+40h] [rbp-40h] BYREF
  __int64 v62; // [rsp+50h] [rbp-30h]
  __int128 v63; // [rsp+58h] [rbp-28h] BYREF
  __int128 v64; // [rsp+68h] [rbp-18h]
  __int128 v65; // [rsp+78h] [rbp-8h]
  __int128 v66; // [rsp+88h] [rbp+8h]
  __int128 v67; // [rsp+98h] [rbp+18h]
  __int128 v68; // [rsp+A8h] [rbp+28h]
  __int64 v69; // [rsp+B8h] [rbp+38h]
  _QWORD *v70; // [rsp+C0h] [rbp+40h]
  __int64 v71; // [rsp+C8h] [rbp+48h]
  __int128 v72; // [rsp+D0h] [rbp+50h] BYREF
  __m256i v73; // [rsp+E0h] [rbp+60h]
  __int128 v74; // [rsp+100h] [rbp+80h] BYREF
  __int128 v75; // [rsp+110h] [rbp+90h]
  __int128 v76; // [rsp+120h] [rbp+A0h]
  _BYTE v77[48]; // [rsp+130h] [rbp+B0h]
  __int64 v78; // [rsp+160h] [rbp+E0h]
  __int64 v79; // [rsp+168h] [rbp+E8h]
  char v80; // [rsp+170h] [rbp+F0h]
  __int128 v81; // [rsp+178h] [rbp+F8h]
  __int64 v82; // [rsp+188h] [rbp+108h]
  __int64 v83; // [rsp+190h] [rbp+110h]
  char v84; // [rsp+198h] [rbp+118h]
  _BYTE v85[40]; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v86; // [rsp+1D0h] [rbp+150h] BYREF
  _BYTE v87[24]; // [rsp+1E0h] [rbp+160h]
  void *v88; // [rsp+1F8h] [rbp+178h]
  __int64 v89; // [rsp+200h] [rbp+180h]

  v89 = -2;
  v5 = a4;
  v8 = a1;
  LODWORD(v63) = sub_141475580(a1, a2, a3, a4);
  DWORD1(v63) = v9;
  sub_141475530(&v74, &v63, 3577643008LL, 27111902);
  if ( (_BYTE)v74 )
    v12 = 0;
  else
    v12 = *((_QWORD *)&v74 + 1);
  v13 = v5[36];
  v14 = v8[103];
  if ( v13 >= v14 )
    sub_1416C30E3(v13, v14, &off_141750240);
  v15 = *(_QWORD *)a5;
  v16 = *(_QWORD *)a5 == 2;
  v69 = a2;
  if ( v16
    || (v14 = *(_QWORD *)(a5 + 8), LOBYTE(v11) = (__int64)v14 <= v12, *(_DWORD *)(a5 + 16) != 1)
    || (v10 = *(unsigned int *)(a5 + 20), (unsigned int)(v10 - 361) < 0xFFFFFE98)
    || (LOBYTE(v11) = v15 & v11, (_BYTE)v11) )
  {
    *(_QWORD *)v85 = 2;
    v15 = 2;
  }
  else
  {
    *(_OWORD *)&v85[24] = *(_OWORD *)(a5 + 24);
    *(_QWORD *)v85 = v15;
    *(_QWORD *)&v85[8] = v14;
    *(_DWORD *)&v85[16] = 1;
    *(_DWORD *)&v85[20] = v10;
  }
  v17 = 352 * v13;
  v18 = *(_QWORD *)(a5 + 40);
  v88 = a3;
  if ( v18 == 2
    || (v19 = *(_QWORD *)(a5 + 48),
        v14 = *(unsigned int *)(a5 + 56),
        v10 = *(unsigned int *)(a5 + 60),
        LOBYTE(v11) = v19 <= v12,
        (((int)v10 < 8640) & (unsigned __int8)v14) != 0)
    || (LOBYTE(v11) = v18 & v11, (_BYTE)v11) )
  {
    *(_QWORD *)&v86 = 2;
    v18 = 2;
  }
  else
  {
    v11 = a5 + 64;
    *(_OWORD *)&v87[8] = *(_OWORD *)(a5 + 64);
    *(_QWORD *)&v86 = v18;
    *((_QWORD *)&v86 + 1) = v19;
    *(_DWORD *)v87 = v14;
    *(_DWORD *)&v87[4] = v10;
  }
  v20 = v8[102] + v17;
  if ( (_DWORD)v15 != 2 )
  {
    v75 = *(_OWORD *)&v85[24];
    v74 = *(_OWORD *)&v85[8];
  }
  LOBYTE(v21) = v18 != 2 || v15 != 2;
  *(_QWORD *)(v20 + 80) = v15;
  v22 = v74;
  *(_OWORD *)(v20 + 104) = v75;
  *(_OWORD *)(v20 + 88) = v22;
  v23 = *(_QWORD *)&v87[16];
  *(_QWORD *)(v20 + 152) = *(_QWORD *)&v87[16];
  v24 = v86;
  *(_OWORD *)(v20 + 136) = *(_OWORD *)v87;
  *(_OWORD *)(v20 + 120) = v24;
  *(_BYTE *)(v20 + 338) = 1;
  *(_QWORD *)(v20 + 64) = 1;
  *(_QWORD *)(v20 + 72) = v12;
  v25 = *(_BYTE *)(a5 + 80);
  if ( v25 != 8 )
  {
    *(_BYTE *)(v20 + 344) = v25;
    *(_BYTE *)(v20 + 341) = 2;
    sub_140FFA6E0(&v74);
    v26 = ((int)v74 >> 13) - 1;
    v27 = 0;
    if ( (int)v74 >> 13 <= 0 )
    {
      v28 = (1 - ((int)v74 >> 13)) / 0x190u + 1;
      v26 += 400 * v28;
      v27 = -146097 * v28;
    }
    v29 = v26;
    v30 = v26 / 100;
    v10 = (unsigned int)((1461 * v29) >> 2);
    v11 = DWORD2(v74);
    v31 = v27 + (((unsigned int)v74 >> 4) & 0x1FF) - v30;
    v14 = (unsigned int)(v30 >> 2);
    v23 = 1000 * (DWORD1(v74) + 86400LL * (int)(v14 + v10 + v31 - 719163)) + DWORD2(v74) / 0xF4240uLL;
    *(_QWORD *)v20 = 1;
    *(_QWORD *)(v20 + 8) = v23;
  }
  if ( (_BYTE)v21 )
  {
    v70 = v8;
    v71 = v12;
    v32 = 0;
    v21 = v85;
    if ( (_DWORD)v15 == 2 )
      v21 = nullptr;
    v16 = v18 == 2;
    v18 = v5[5];
    v33 = v5;
    v34 = v5[6];
    v35 = &v86;
    if ( v16 )
      v35 = nullptr;
    LODWORD(v63) = sub_141475580(v23, v14, v10, v11);
    DWORD1(v63) = v36;
    sub_141475530(&v74, &v63, 3577643008LL, 27111902);
    if ( !(_BYTE)v74 )
      v32 = *((_QWORD *)&v74 + 1);
    sub_1403C8260((unsigned int)&v63, v69, (_DWORD)v88, v18, v34, (__int64)v21, (__int64)v35, v32);
    v5 = v33;
    v8 = v70;
    if ( (_DWORD)v63 != -1 )
    {
      *(_OWORD *)&v77[32] = v68;
      *(_OWORD *)&v77[16] = v67;
      *(_OWORD *)v77 = v66;
      v76 = v65;
      v75 = v64;
      v74 = v63;
      nullsub_1(v37);
      v38 = (void *)sub_140001650(27, 1);
      if ( !v38 )
        sub_1416C2D4B(1, 27);
      v88 = v38;
      qmemcpy(v38, "QUOTA_HISTORY_APPEND_FAILED", 27);
      *(_QWORD *)&v72 = v5 + 7;
      *((_QWORD *)&v72 + 1) = sub_1400015F0;
      v73.m256i_i64[0] = (__int64)&v74;
      v73.m256i_i64[1] = (__int64)sub_140B036A0;
      sub_14149C0F0(&v61, &unk_141750273, &v72);
      *(_QWORD *)&v72 = 27;
      *((_QWORD *)&v72 + 1) = v88;
      v73.m256i_i64[0] = 27;
      v73.m256i_i64[3] = v62;
      *(_OWORD *)&v73.m256i_u64[1] = v61;
      v39 = v8[106];
      if ( v39 == v8[104] )
        sub_141688FC0(v8 + 104);
      v40 = v8[105];
      v41 = 48 * v39;
      v42 = v72;
      v43 = *(_OWORD *)v73.m256i_i8;
      *(_OWORD *)(v40 + v41 + 32) = *(_OWORD *)&v73.m256i_u64[2];
      *(_OWORD *)(v40 + v41 + 16) = v43;
      *(_OWORD *)(v40 + v41) = v42;
      v8[106] = v39 + 1;
      sub_14034ED40(&v74);
    }
    v12 = v71;
  }
  sub_14149C500(&v63, v5 + 4);
  v44 = *(_QWORD *)(v20 + 160);
  if ( v44 != 2 )
  {
    LOBYTE(v21) = *(_BYTE *)(v20 + 176);
    v18 = *(_QWORD *)(v20 + 168);
  }
  sub_140FFA6E0(&v74);
  v45 = ((int)v74 >> 13) - 1;
  v46 = 0;
  if ( (int)v74 >> 13 <= 0 )
  {
    v47 = (1 - ((int)v74 >> 13)) / 0x190u + 1;
    v45 += 400 * v47;
    v46 = -146097 * v47;
  }
  v48 = 1000
      * (DWORD1(v74)
       + 86400LL
       * (int)(((v45 / 100) >> 2) + ((1461 * v45) >> 2) + v46 + (((unsigned int)v74 >> 4) & 0x1FF) - v45 / 100 - 719163))
      + DWORD2(v74) / 0xF4240uLL;
  v81 = v63;
  v82 = v64;
  v83 = v12;
  v84 = 1;
  v75 = *(_OWORD *)v85;
  v76 = *(_OWORD *)&v85[16];
  *(_QWORD *)v77 = *(_QWORD *)&v85[32];
  *(_OWORD *)&v77[8] = v86;
  *(_OWORD *)&v77[24] = *(_OWORD *)v87;
  *(_QWORD *)&v77[40] = *(_QWORD *)&v87[16];
  v78 = v44;
  v79 = v18;
  v80 = (char)v21;
  *(_QWORD *)&v74 = 1;
  *((_QWORD *)&v74 + 1) = v48;
  v49 = v12;
  sub_1403C6C20(v8 + 96, &v74, v12);
  v50 = v8[87];
  if ( v50 )
  {
    v51 = (__int64 *)v8[86];
    v52 = 424 * v50;
    v53 = v5[5];
    v54 = v5[6];
    while ( 1 )
    {
      if ( v51[26] == v54 )
      {
        LODWORD(v50) = sub_1416847B0(v51[25], v53, v54);
        if ( !(_DWORD)v50 )
          break;
      }
      v51 += 53;
      v52 -= 424;
      if ( !v52 )
        return v50;
    }
    v55 = *(_BYTE *)(v20 + 344);
    if ( v55 != 8 )
    {
      if ( *(_DWORD *)v20 == 1 )
      {
        v56 = *(_QWORD *)(v20 + 8);
      }
      else
      {
        sub_140FFA6E0(&v74);
        v57 = ((int)v74 >> 13) - 1;
        v58 = 0;
        if ( (int)v74 >> 13 <= 0 )
        {
          v59 = (1 - ((int)v74 >> 13)) / 0x190u + 1;
          v57 += 400 * v59;
          v58 = -146097 * v59;
        }
        v56 = 1000
            * (DWORD1(v74)
             + 86400LL
             * (int)(((v57 / 100) >> 2)
                   + ((1461 * v57) >> 2)
                   + v58
                   + (((unsigned int)v74 >> 4) & 0x1FF)
                   - v57 / 100
                   - 719163))
            + DWORD2(v74) / 0xF4240uLL;
        v55 = *(_BYTE *)(v20 + 344);
      }
      LOBYTE(v50) = sub_1403B9650(v51, v55, 2u, v56);
      if ( (_BYTE)v50 )
        v8[94] = v49;
    }
  }
  return v50;
}