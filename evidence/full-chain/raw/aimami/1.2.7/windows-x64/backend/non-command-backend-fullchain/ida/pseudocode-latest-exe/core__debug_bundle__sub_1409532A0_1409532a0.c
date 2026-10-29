// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x1409532a0 | successor of pre-update 0x140c2aab0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 __fastcall sub_1409532A0(__int64 a1, _QWORD *a2, __int64 a3)
{
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rbx
  bool v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // r14
  __int64 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  void *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  _QWORD *v48; // r15
  _QWORD *v49; // r14
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdi
  _QWORD *v53; // r14
  _QWORD *v54; // rbx
  __int64 v55; // rdx
  __int64 v57; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v58; // [rsp+38h] [rbp-48h]
  __int64 v59; // [rsp+40h] [rbp-40h]
  _QWORD *v60; // [rsp+48h] [rbp-38h]
  __int128 v61; // [rsp+50h] [rbp-30h] BYREF
  __int64 v62; // [rsp+60h] [rbp-20h]
  _QWORD *v63; // [rsp+68h] [rbp-18h]
  __int128 v64; // [rsp+70h] [rbp-10h] BYREF
  __int128 v65; // [rsp+80h] [rbp+0h]
  __int128 v66; // [rsp+90h] [rbp+10h] BYREF
  __int128 v67; // [rsp+A0h] [rbp+20h]
  __int64 v68; // [rsp+B0h] [rbp+30h] BYREF
  _DWORD *v69; // [rsp+B8h] [rbp+38h]
  __int64 v70; // [rsp+C0h] [rbp+40h]
  char v71; // [rsp+CDh] [rbp+4Dh]
  char v72; // [rsp+CEh] [rbp+4Eh]
  char v73; // [rsp+CFh] [rbp+4Fh]
  __int64 v74; // [rsp+D0h] [rbp+50h]

  v74 = -2;
  *(_QWORD *)&v61 = 0;
  v62 = 0;
  nullsub_1(a1, a2);
  v6 = (void *)sub_140001650(14, 1);
  v63 = a2;
  if ( !v6 )
    sub_14196B2DB(1, 14);
  qmemcpy(v6, "targetProvider", 14);
  v68 = 14;
  v69 = v6;
  v70 = 14;
  v8 = a2[2];
  if ( v8 < 0 )
  {
    v9 = 0;
    goto LABEL_4;
  }
  if ( v8 )
  {
    v10 = a2[1];
    nullsub_1(0x7250746567726174LL, v7);
    v9 = 1;
    v11 = sub_140001650(v8, 1);
    if ( !v11 )
    {
LABEL_4:
      v71 = 1;
      sub_14196B2DB(v9, v8);
    }
    v12 = v11;
    sub_1419234B0(v11, v10, v8);
  }
  else
  {
    v12 = 1;
  }
  LOBYTE(v66) = 3;
  *((_QWORD *)&v66 + 1) = v8;
  *(_QWORD *)&v67 = v12;
  *((_QWORD *)&v67 + 1) = v8;
  v71 = 0;
  sub_140A68320(&v64, &v61, &v68, &v66);
  if ( (_BYTE)v64 != 0xFF )
    sub_140032FF0(&v64);
  nullsub_1(v14, v13);
  v15 = sub_140001650(5, 1);
  if ( !v15 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v15 + 4) = 110;
  *(_DWORD *)v15 = 1634036835;
  v68 = 5;
  v69 = (_DWORD *)v15;
  v70 = 5;
  v16 = v63[10];
  v17 = v63[11];
  v18 = v63[12];
  v19 = !(v18 | v17 | v16) && !v63[5] && v63[13] == 0;
  LOBYTE(v66) = 1;
  BYTE1(v66) = v19;
  sub_140A68320(&v64, &v61, &v68, &v66);
  if ( (_BYTE)v64 != 0xFF )
    sub_140032FF0(&v64);
  nullsub_1(v21, v20);
  v22 = (_DWORD *)sub_140001650(7, 1);
  if ( !v22 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v22 + 3) = 1684369006;
  *v22 = 1851876211;
  v68 = 7;
  v69 = v22;
  v70 = 7;
  v23 = v63[9];
  LOBYTE(v66) = 2;
  *((_QWORD *)&v66 + 1) = 0;
  *(_QWORD *)&v67 = v23;
  sub_140A68320(&v64, &v61, &v68, &v66);
  if ( (_BYTE)v64 != 0xFF )
    sub_140032FF0(&v64);
  nullsub_1(v25, v24);
  v26 = (void *)sub_140001650(10, 1);
  if ( !v26 )
    sub_14196B2DB(1, 10);
  qmemcpy(v26, "issueCount", 10);
  v68 = 10;
  v69 = v26;
  v70 = 10;
  v27 = v63[5];
  v28 = v63[13];
  LOBYTE(v66) = 2;
  *((_QWORD *)&v66 + 1) = 0;
  *(_QWORD *)&v67 = v27 + v16 + v17 + v18 + v28;
  sub_140A68320(&v64, &v61, &v68, &v66);
  if ( (_BYTE)v64 != 0xFF )
    sub_140032FF0(&v64);
  nullsub_1(v30, v29);
  v31 = (void *)sub_140001650(12, 1);
  if ( !v31 )
    sub_14196B2DB(1, 12);
  qmemcpy(v31, "dbMismatched", 12);
  v68 = 12;
  v69 = v31;
  v70 = 12;
  LOBYTE(v66) = 2;
  *((_QWORD *)&v66 + 1) = 0;
  *(_QWORD *)&v67 = v16;
  sub_140A68320(&v64, &v61, &v68, &v66);
  if ( (_BYTE)v64 != 0xFF )
    sub_140032FF0(&v64);
  nullsub_1(v33, v32);
  v34 = (void *)sub_140001650(17, 1);
  if ( !v34 )
    sub_14196B2DB(1, 17);
  qmemcpy(v34, "rolloutMismatched", 17);
  v68 = 17;
  v69 = v34;
  v70 = 17;
  LOBYTE(v66) = 2;
  *((_QWORD *)&v66 + 1) = 0;
  *(_QWORD *)&v67 = v17;
  sub_140A68320(&v64, &v61, &v68, &v66);
  if ( (_BYTE)v64 != 0xFF )
    sub_140032FF0(&v64);
  nullsub_1(v36, v35);
  v37 = (void *)sub_140001650(15, 1);
  if ( !v37 )
    sub_14196B2DB(1, 15);
  qmemcpy(v37, "missingRollouts", 15);
  v68 = 15;
  v69 = v37;
  v70 = 15;
  LOBYTE(v66) = 2;
  *((_QWORD *)&v66 + 1) = 0;
  *(_QWORD *)&v67 = v18;
  sub_140A68320(&v64, &v61, &v68, &v66);
  if ( (_BYTE)v64 != 0xFF )
    sub_140032FF0(&v64);
  nullsub_1(v39, v38);
  v40 = (void *)sub_140001650(18, 1);
  if ( !v40 )
    sub_14196B2DB(1, 18);
  qmemcpy(v40, "unreadableRollouts", 18);
  v68 = 18;
  v69 = v40;
  v70 = 18;
  LOBYTE(v66) = 2;
  *((_QWORD *)&v66 + 1) = 0;
  *(_QWORD *)&v67 = v28;
  sub_140A68320(&v64, &v61, &v68, &v66);
  if ( (_BYTE)v64 != 0xFF )
    sub_140032FF0(&v64);
  nullsub_1(v42, v41);
  v43 = (void *)sub_140001650(10, 1);
  if ( !v43 )
    sub_14196B2DB(1, 10);
  qmemcpy(v43, "readErrors", 10);
  v57 = 10;
  v60 = v43;
  v58 = v43;
  v59 = 10;
  v44 = v63[4] + 24 * v27;
  *(_QWORD *)&v66 = v63[4];
  *((_QWORD *)&v66 + 1) = v44;
  *(_QWORD *)&v67 = a3;
  sub_140226750(&v68, &v66);
  v73 = 1;
  sub_1407B3FB0(&v66, &v68);
  if ( (_BYTE)v66 == 0xFF )
  {
    *(_QWORD *)&v64 = *((_QWORD *)&v66 + 1);
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v64,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5C188);
  }
  v65 = v67;
  v64 = v66;
  v73 = 0;
  sub_140A68320(&v66, &v61, &v57, &v64);
  if ( (_BYTE)v66 != 0xFF )
    sub_140032FF0(&v66);
  v47 = v70;
  v48 = v63;
  if ( v70 )
  {
    v49 = v69 + 2;
    do
    {
      v45 = *(v49 - 1);
      if ( v45 )
        sub_140001660(*v49, v45, 1);
      v49 += 3;
      --v47;
    }
    while ( v47 );
  }
  if ( v68 )
    sub_140001660(v69, 24 * v68, 8);
  nullsub_1(v46, v45);
  v50 = (_QWORD *)sub_140001650(8, 1);
  if ( !v50 )
    sub_14196B2DB(1, 8);
  *v50 = 0x73656C706D617865LL;
  v57 = 8;
  v60 = v50;
  v58 = v50;
  v59 = 8;
  v51 = v48[7] + 24LL * v48[8];
  *(_QWORD *)&v66 = v48[7];
  *((_QWORD *)&v66 + 1) = v51;
  *(_QWORD *)&v67 = a3;
  sub_140226750(&v68, &v66);
  v72 = 1;
  sub_1407B3FB0(&v66, &v68);
  if ( (_BYTE)v66 == 0xFF )
  {
    *(_QWORD *)&v64 = *((_QWORD *)&v66 + 1);
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v64,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5C188);
  }
  v65 = v67;
  v64 = v66;
  v72 = 0;
  sub_140A68320(&v66, &v61, &v57, &v64);
  if ( (_BYTE)v66 != 0xFF )
    sub_140032FF0(&v66);
  v52 = v70;
  v53 = v63;
  if ( v70 )
  {
    v54 = v69 + 2;
    do
    {
      v55 = *(v54 - 1);
      if ( v55 )
        sub_140001660(*v54, v55, 1);
      v54 += 3;
      --v52;
    }
    while ( v52 );
  }
  if ( v68 )
    sub_140001660(v69, 24 * v68, 8);
  *(_QWORD *)(a1 + 24) = v62;
  *(_OWORD *)(a1 + 8) = v61;
  *(_BYTE *)a1 = 5;
  return sub_140779A80(v53);
}
