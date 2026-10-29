// win 1.2.7 | module src/core/repository.rs | ea 0x14020e620 | name sub_14020E620
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14020E620(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  int v6; // r14d
  __int64 v7; // r15
  _QWORD *v8; // rsi
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r13
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rdi
  __int64 v19; // rcx
  char v20; // cl
  __int64 v21; // rdx
  int v22; // r9d
  __int64 v23; // rdi
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // al
  int v29; // edx
  int v30; // ecx
  unsigned int v31; // ecx
  int v32; // r8d
  int v33; // edx
  unsigned int v34; // eax
  _QWORD *v35; // rax
  int v36; // esi
  __int64 v37; // r14
  bool v38; // zf
  __int64 v39; // r13
  int v40; // edx
  __int64 v41; // rcx
  void *v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // r14
  int v49; // edx
  int v50; // r8d
  unsigned int v51; // r8d
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 *v54; // r14
  __int64 v55; // r12
  __int64 v56; // r15
  __int64 v57; // rbx
  char v58; // dl
  __int64 v59; // r9
  int v60; // edx
  int v61; // ecx
  unsigned int v62; // ecx
  __int128 v64; // [rsp+48h] [rbp-38h] BYREF
  __int64 v65; // [rsp+58h] [rbp-28h]
  __int128 v66; // [rsp+60h] [rbp-20h] BYREF
  __int128 v67; // [rsp+70h] [rbp-10h]
  __int128 v68; // [rsp+80h] [rbp+0h]
  __int128 v69; // [rsp+90h] [rbp+10h]
  __int128 v70; // [rsp+A0h] [rbp+20h]
  __int128 v71; // [rsp+B0h] [rbp+30h]
  __int128 v72; // [rsp+C0h] [rbp+40h] BYREF
  __m256i v73; // [rsp+D0h] [rbp+50h]
  __int128 v74; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v75; // [rsp+100h] [rbp+80h]
  __int128 v76; // [rsp+110h] [rbp+90h]
  _BYTE v77[48]; // [rsp+120h] [rbp+A0h]
  __int64 v78; // [rsp+150h] [rbp+D0h]
  __int64 v79; // [rsp+158h] [rbp+D8h]
  __int64 v80; // [rsp+160h] [rbp+E0h]
  __int64 v81; // [rsp+168h] [rbp+E8h]
  _QWORD *v82; // [rsp+170h] [rbp+F0h]
  char v83; // [rsp+178h] [rbp+F8h]
  __int128 v84; // [rsp+180h] [rbp+100h]
  __int64 v85; // [rsp+190h] [rbp+110h]
  int v86; // [rsp+198h] [rbp+118h]
  int v87; // [rsp+19Ch] [rbp+11Ch]
  __int64 v88; // [rsp+1A0h] [rbp+120h]
  char v89; // [rsp+1A8h] [rbp+128h]
  _BYTE v90[40]; // [rsp+1B8h] [rbp+138h] BYREF
  __int128 v91; // [rsp+1E0h] [rbp+160h] BYREF
  _BYTE v92[24]; // [rsp+1F0h] [rbp+170h]
  int v93; // [rsp+208h] [rbp+188h]
  int v94; // [rsp+20Ch] [rbp+18Ch]
  _QWORD *v95; // [rsp+210h] [rbp+190h]
  __int64 v96; // [rsp+218h] [rbp+198h]
  __int128 *v97; // [rsp+220h] [rbp+1A0h]
  __int64 v98; // [rsp+228h] [rbp+1A8h]
  __int64 v99; // [rsp+230h] [rbp+1B0h]

  v99 = -2;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  LODWORD(v66) = sub_141683E80(a1, a2, a3);
  DWORD1(v66) = v9;
  sub_141683E30(&v74, &v66, 3577643008LL, 27111902);
  if ( (_BYTE)v74 )
    v11 = 0;
  else
    v11 = *((_QWORD *)&v74 + 1);
  v12 = a4[36];
  v13 = v8[111];
  if ( v12 >= v13 )
    sub_1419390C3(v12, v13, &off_1419DC198);
  v14 = 3 * v12;
  v15 = *(_QWORD *)a5;
  if ( *(_QWORD *)a5 == 2
    || (v16 = *(_QWORD *)(a5 + 8), LOBYTE(v10) = v16 <= v11, *(_DWORD *)(a5 + 16) != 1)
    || (v17 = *(_DWORD *)(a5 + 20), (unsigned int)(v17 - 361) < 0xFFFFFE98)
    || (LOBYTE(v10) = v15 & v10, (_BYTE)v10) )
  {
    *(_QWORD *)v90 = 2;
    v15 = 2;
  }
  else
  {
    *(_OWORD *)&v90[24] = *(_OWORD *)(a5 + 24);
    *(_QWORD *)v90 = v15;
    *(_QWORD *)&v90[8] = v16;
    *(_DWORD *)&v90[16] = 1;
    *(_DWORD *)&v90[20] = v17;
  }
  v18 = v14 << 7;
  v19 = *(_QWORD *)(a5 + 40);
  v98 = v7;
  if ( v19 == 2
    || (v21 = *(_QWORD *)(a5 + 48),
        v10 = *(unsigned int *)(a5 + 56),
        v22 = *(_DWORD *)(a5 + 60),
        ((v22 < 8640) & (unsigned __int8)v10) != 0)
    || ((unsigned __int8)v19 & (v21 <= v11)) != 0 )
  {
    *(_QWORD *)&v91 = 2;
    v97 = nullptr;
    v20 = 0;
  }
  else
  {
    *(_OWORD *)&v92[8] = *(_OWORD *)(a5 + 64);
    *(_QWORD *)&v91 = v19;
    *((_QWORD *)&v91 + 1) = v21;
    *(_DWORD *)v92 = v10;
    *(_DWORD *)&v92[4] = v22;
    v20 = 1;
    v97 = &v91;
  }
  v23 = v8[110] + v18;
  if ( (_DWORD)v15 != 2 )
  {
    v75 = *(_OWORD *)&v90[24];
    v74 = *(_OWORD *)&v90[8];
  }
  LOBYTE(v7) = v20 | (v15 != 2);
  *(_QWORD *)(v23 + 80) = v15;
  v24 = v74;
  *(_OWORD *)(v23 + 104) = v75;
  *(_OWORD *)(v23 + 88) = v24;
  *(_QWORD *)(v23 + 152) = *(_QWORD *)&v92[16];
  v25 = v91;
  *(_OWORD *)(v23 + 136) = *(_OWORD *)v92;
  *(_OWORD *)(v23 + 120) = v25;
  v26 = *(unsigned int *)(a5 + 80);
  v27 = *(unsigned int *)(a5 + 84);
  v93 = v26;
  *(_DWORD *)(v23 + 352) = v26;
  v94 = v27;
  *(_DWORD *)(v23 + 356) = v27;
  *(_BYTE *)(v23 + 370) = 1;
  *(_QWORD *)(v23 + 64) = 1;
  *(_QWORD *)(v23 + 72) = v11;
  v28 = *(_BYTE *)(a5 + 88);
  if ( v28 != 8 )
  {
    *(_BYTE *)(v23 + 376) = v28;
    *(_BYTE *)(v23 + 373) = 2;
    sub_141406CE0(&v74);
    v29 = ((int)v74 >> 13) - 1;
    v30 = 0;
    if ( (int)v74 >> 13 <= 0 )
    {
      v31 = (1 - ((int)v74 >> 13)) / 0x190u + 1;
      v29 += 400 * v31;
      v30 = -146097 * v31;
    }
    v32 = v29;
    v33 = v29 / 100;
    v10 = (unsigned int)((1461 * v32) >> 2);
    v34 = v30 + (((unsigned int)v74 >> 4) & 0x1FF) - v33;
    v27 = (unsigned int)(v33 >> 2);
    v26 = 1000 * (DWORD1(v74) + 86400LL * (int)(v27 + v10 + v34 - 719163)) + DWORD2(v74) / 0xF4240uLL;
    *(_QWORD *)v23 = 1;
    *(_QWORD *)(v23 + 8) = v26;
  }
  if ( (_BYTE)v7 )
  {
    v35 = v8;
    v36 = v6;
    v95 = v35;
    v96 = v11;
    v37 = 0;
    v38 = (_DWORD)v15 == 2;
    v39 = a4[5];
    v7 = a4[6];
    v15 = (__int64)v90;
    if ( v38 )
      v15 = 0;
    LODWORD(v66) = sub_141683E80(v26, v27, v10);
    DWORD1(v66) = v40;
    sub_141683E30(&v74, &v66, 3577643008LL, 27111902);
    if ( !(_BYTE)v74 )
      v37 = *((_QWORD *)&v74 + 1);
    sub_140EC74D0((unsigned int)&v66, v98, v36, v39, v7, v15, (__int64)v97, v37);
    v11 = v96;
    v8 = v95;
    if ( (_DWORD)v66 != -1 )
    {
      *(_OWORD *)&v77[32] = v71;
      *(_OWORD *)&v77[16] = v70;
      *(_OWORD *)v77 = v69;
      v76 = v68;
      v75 = v67;
      v74 = v66;
      nullsub_1(v41);
      v42 = (void *)sub_140001650(27, 1);
      if ( !v42 )
        sub_141938D2B(1, 27);
      v98 = (__int64)v42;
      qmemcpy(v42, "QUOTA_HISTORY_APPEND_FAILED", 27);
      *(_QWORD *)&v72 = a4 + 7;
      *((_QWORD *)&v72 + 1) = sub_1400015F0;
      v73.m256i_i64[0] = (__int64)&v74;
      v73.m256i_i64[1] = (__int64)sub_14104A7D0;
      sub_1416ABFD0(&v64, &unk_1419DC1CB, &v72);
      *(_QWORD *)&v72 = 27;
      *((_QWORD *)&v72 + 1) = v98;
      v73.m256i_i64[0] = 27;
      v73.m256i_i64[3] = v65;
      *(_OWORD *)&v73.m256i_u64[1] = v64;
      v43 = v8[114];
      if ( v43 == v8[112] )
        sub_14190F490(v8 + 112);
      v44 = v8[113];
      v45 = 48 * v43;
      v46 = v72;
      v47 = *(_OWORD *)v73.m256i_i8;
      *(_OWORD *)(v44 + v45 + 32) = *(_OWORD *)&v73.m256i_u64[2];
      *(_OWORD *)(v44 + v45 + 16) = v47;
      *(_OWORD *)(v44 + v45) = v46;
      v8[114] = v43 + 1;
      sub_1401954F0(&v74);
    }
  }
  sub_1416AC440(&v66, a4 + 4);
  v96 = *(_QWORD *)(v23 + 160);
  if ( v96 == 2 )
  {
    v48 = 2;
  }
  else
  {
    LOBYTE(v15) = *(_BYTE *)(v23 + 200);
    if ( *(_QWORD *)(v23 + 176) == -1 )
    {
      v98 = -1;
      if ( (v96 & 1) != 0 )
        goto LABEL_35;
    }
    else
    {
      sub_1416AC440(&v74, v23 + 176);
      v97 = *((__int128 **)&v74 + 1);
      v98 = v74;
      v95 = (_QWORD *)v75;
      if ( (*(_QWORD *)(v23 + 160) & 1) != 0 )
      {
LABEL_35:
        v7 = *(_QWORD *)(v23 + 168);
        v48 = 1;
        goto LABEL_39;
      }
    }
    v48 = 0;
  }
LABEL_39:
  sub_141406CE0(&v74);
  v49 = ((int)v74 >> 13) - 1;
  v50 = 0;
  if ( (int)v74 >> 13 <= 0 )
  {
    v51 = (1 - ((int)v74 >> 13)) / 0x190u + 1;
    v49 += 400 * v51;
    v50 = -146097 * v51;
  }
  v52 = 1000
      * (DWORD1(v74)
       + 86400LL
       * (int)(((v49 / 100) >> 2) + ((1461 * v49) >> 2) + v50 + (((unsigned int)v74 >> 4) & 0x1FF) - v49 / 100 - 719163))
      + DWORD2(v74) / 0xF4240uLL;
  v84 = v66;
  v85 = v67;
  v88 = v11;
  v89 = 1;
  v75 = *(_OWORD *)v90;
  v76 = *(_OWORD *)&v90[16];
  *(_QWORD *)v77 = *(_QWORD *)&v90[32];
  *(_QWORD *)&v77[40] = *(_QWORD *)&v92[16];
  *(_OWORD *)&v77[8] = v91;
  *(_OWORD *)&v77[24] = *(_OWORD *)v92;
  v86 = v93;
  v87 = v94;
  v78 = v48;
  v79 = v7;
  v80 = v98;
  v81 = (__int64)v97;
  v82 = v95;
  v83 = v15;
  *(_QWORD *)&v74 = 1;
  *((_QWORD *)&v74 + 1) = v52;
  sub_14021AA50(v8 + 104, &v74, v11);
  v53 = v8[95];
  if ( v53 )
  {
    v54 = (__int64 *)v8[94];
    v55 = 424 * v53;
    v56 = a4[5];
    v57 = a4[6];
    while ( 1 )
    {
      if ( v54[26] == v57 )
      {
        LODWORD(v53) = sub_1418F4B70(v54[25], v56);
        if ( !(_DWORD)v53 )
          break;
      }
      v54 += 53;
      v55 -= 424;
      if ( !v55 )
        return v53;
    }
    v58 = *(_BYTE *)(v23 + 376);
    if ( v58 != 8 )
    {
      if ( *(_DWORD *)v23 == 1 )
      {
        v59 = *(_QWORD *)(v23 + 8);
      }
      else
      {
        sub_141406CE0(&v74);
        v60 = ((int)v74 >> 13) - 1;
        v61 = 0;
        if ( (int)v74 >> 13 <= 0 )
        {
          v62 = (1 - ((int)v74 >> 13)) / 0x190u + 1;
          v60 += 400 * v62;
          v61 = -146097 * v62;
        }
        v59 = 1000
            * (DWORD1(v74)
             + 86400LL
             * (int)(((v60 / 100) >> 2)
                   + ((1461 * v60) >> 2)
                   + v61
                   + (((unsigned int)v74 >> 4) & 0x1FF)
                   - v60 / 100
                   - 719163))
            + DWORD2(v74) / 0xF4240uLL;
        v58 = *(_BYTE *)(v23 + 376);
      }
      LOBYTE(v53) = sub_14020E290(v54, v58, 2u, v59);
      if ( (_BYTE)v53 )
        v8[102] = v11;
    }
  }
  return v53;
}
