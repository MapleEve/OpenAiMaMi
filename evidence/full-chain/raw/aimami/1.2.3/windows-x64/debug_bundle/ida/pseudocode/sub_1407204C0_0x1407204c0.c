// module: codexmate_lib/core/debug_bundle
// addr: 0x1407204c0
// name: sub_1407204C0
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1407204C0(__int64 a1, _QWORD *a2, __int64 a3)
{
  void *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rbx
  bool v18; // al
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // rcx
  void *v28; // rax
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rbx
  _QWORD *v38; // r15
  _QWORD *v39; // r14
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdi
  _QWORD *v44; // r14
  _QWORD *v45; // rbx
  __int64 v46; // rdx
  __int64 v48; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v49; // [rsp+38h] [rbp-48h]
  __int64 v50; // [rsp+40h] [rbp-40h]
  _QWORD *v51; // [rsp+48h] [rbp-38h]
  __int128 v52; // [rsp+50h] [rbp-30h] BYREF
  __int64 v53; // [rsp+60h] [rbp-20h]
  _QWORD *v54; // [rsp+68h] [rbp-18h]
  __int128 v55; // [rsp+70h] [rbp-10h] BYREF
  __int128 v56; // [rsp+80h] [rbp+0h]
  __int128 v57; // [rsp+90h] [rbp+10h] BYREF
  __int128 v58; // [rsp+A0h] [rbp+20h]
  unsigned __int64 v59; // [rsp+B0h] [rbp+30h] BYREF
  _DWORD *v60; // [rsp+B8h] [rbp+38h]
  __int64 v61; // [rsp+C0h] [rbp+40h]
  char v62; // [rsp+CDh] [rbp+4Dh]
  char v63; // [rsp+CEh] [rbp+4Eh]
  char v64; // [rsp+CFh] [rbp+4Fh]
  __int64 v65; // [rsp+D0h] [rbp+50h]

  v65 = -2;
  *(_QWORD *)&v52 = 0;
  v53 = 0;
  nullsub_1(a1);
  v6 = (void *)sub_140001650(14, 1);
  v54 = a2;
  if ( !v6 )
    sub_1416C2D4B(1, 14);
  qmemcpy(v6, "targetProvider", 14);
  v59 = 14;
  v60 = v6;
  v61 = 14;
  v7 = a2[2];
  if ( v7 < 0 )
  {
    v8 = 0;
    goto LABEL_4;
  }
  if ( v7 )
  {
    v9 = a2[1];
    nullsub_1(0x7250746567726174LL);
    v8 = 1;
    v10 = sub_140001650(v7, 1);
    if ( !v10 )
    {
LABEL_4:
      v62 = 1;
      sub_1416C2D4B(v8, v7);
    }
    v11 = v10;
    sub_141684120(v10, v9, v7);
  }
  else
  {
    v11 = 1;
  }
  LOBYTE(v57) = 3;
  *((_QWORD *)&v57 + 1) = v7;
  *(_QWORD *)&v58 = v11;
  *((_QWORD *)&v58 + 1) = v7;
  v62 = 0;
  sub_140307860(&v55, &v52, &v59, &v57);
  if ( (_BYTE)v55 != 0xFF )
    sub_1400104F0(&v55);
  nullsub_1(v12);
  v13 = sub_140001650(5, 1);
  if ( !v13 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v13 + 4) = 110;
  *(_DWORD *)v13 = 1634036835;
  v59 = 5;
  v60 = (_DWORD *)v13;
  v61 = 5;
  v14 = v54[10];
  v15 = v54[11];
  v16 = v54[12];
  v17 = v54[13];
  if ( v17 | v16 | v15 | v14 )
    v18 = 0;
  else
    v18 = v54[5] == 0;
  LOBYTE(v57) = 1;
  BYTE1(v57) = v18;
  sub_140307860(&v55, &v52, &v59, &v57);
  if ( (_BYTE)v55 != 0xFF )
    sub_1400104F0(&v55);
  nullsub_1(v19);
  v20 = (_DWORD *)sub_140001650(7, 1);
  if ( !v20 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v20 + 3) = 1684369006;
  *v20 = 1851876211;
  v59 = 7;
  v60 = v20;
  v61 = 7;
  v21 = v54[9];
  LOBYTE(v57) = 2;
  *((_QWORD *)&v57 + 1) = 0;
  *(_QWORD *)&v58 = v21;
  sub_140307860(&v55, &v52, &v59, &v57);
  if ( (_BYTE)v55 != 0xFF )
    sub_1400104F0(&v55);
  nullsub_1(v22);
  v23 = (void *)sub_140001650(10, 1);
  if ( !v23 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v23, "issueCount", 10);
  v59 = 10;
  v60 = v23;
  v61 = 10;
  v24 = v54[5];
  LOBYTE(v57) = 2;
  *((_QWORD *)&v57 + 1) = 0;
  *(_QWORD *)&v58 = v24 + v14 + v15 + v16 + v17;
  sub_140307860(&v55, &v52, &v59, &v57);
  if ( (_BYTE)v55 != 0xFF )
    sub_1400104F0(&v55);
  nullsub_1(v25);
  v26 = (void *)sub_140001650(12, 1);
  if ( !v26 )
    sub_1416C2D4B(1, 12);
  qmemcpy(v26, "dbMismatched", 12);
  v59 = 12;
  v60 = v26;
  v61 = 12;
  LOBYTE(v57) = 2;
  *((_QWORD *)&v57 + 1) = 0;
  *(_QWORD *)&v58 = v14;
  sub_140307860(&v55, &v52, &v59, &v57);
  if ( (_BYTE)v55 != 0xFF )
    sub_1400104F0(&v55);
  nullsub_1(v27);
  v28 = (void *)sub_140001650(17, 1);
  if ( !v28 )
    sub_1416C2D4B(1, 17);
  qmemcpy(v28, "rolloutMismatched", 17);
  v59 = 17;
  v60 = v28;
  v61 = 17;
  LOBYTE(v57) = 2;
  *((_QWORD *)&v57 + 1) = 0;
  *(_QWORD *)&v58 = v15;
  sub_140307860(&v55, &v52, &v59, &v57);
  if ( (_BYTE)v55 != 0xFF )
    sub_1400104F0(&v55);
  nullsub_1(v29);
  v30 = (void *)sub_140001650(15, 1);
  if ( !v30 )
    sub_1416C2D4B(1, 15);
  qmemcpy(v30, "missingRollouts", 15);
  v59 = 15;
  v60 = v30;
  v61 = 15;
  LOBYTE(v57) = 2;
  *((_QWORD *)&v57 + 1) = 0;
  *(_QWORD *)&v58 = v16;
  sub_140307860(&v55, &v52, &v59, &v57);
  if ( (_BYTE)v55 != 0xFF )
    sub_1400104F0(&v55);
  nullsub_1(v31);
  v32 = (void *)sub_140001650(18, 1);
  if ( !v32 )
    sub_1416C2D4B(1, 18);
  qmemcpy(v32, "unreadableRollouts", 18);
  v59 = 18;
  v60 = v32;
  v61 = 18;
  LOBYTE(v57) = 2;
  *((_QWORD *)&v57 + 1) = 0;
  *(_QWORD *)&v58 = v17;
  sub_140307860(&v55, &v52, &v59, &v57);
  if ( (_BYTE)v55 != 0xFF )
    sub_1400104F0(&v55);
  nullsub_1(v33);
  v34 = (void *)sub_140001650(10, 1);
  if ( !v34 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v34, "readErrors", 10);
  v48 = 10;
  v51 = v34;
  v49 = v34;
  v50 = 10;
  v35 = v54[4] + 24 * v24;
  *(_QWORD *)&v57 = v54[4];
  *((_QWORD *)&v57 + 1) = v35;
  *(_QWORD *)&v58 = a3;
  sub_140328340(&v59, (__int64 *)&v57);
  v64 = 1;
  sub_140467F40(&v57, &v59);
  if ( (_BYTE)v57 == 0xFF )
  {
    *(_QWORD *)&v55 = *((_QWORD *)&v57 + 1);
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v55,
      (unsigned int)&off_141789020,
      (__int64)&off_141789D28);
  }
  v56 = v58;
  v55 = v57;
  v64 = 0;
  sub_140307860(&v57, &v52, &v48, &v55);
  if ( (_BYTE)v57 != 0xFF )
    sub_1400104F0(&v57);
  v37 = v61;
  v38 = v54;
  if ( v61 )
  {
    v39 = v60 + 2;
    do
    {
      v40 = *(v39 - 1);
      if ( v40 )
        sub_140001660(*v39, v40, 1);
      v39 += 3;
      --v37;
    }
    while ( v37 );
  }
  if ( v59 )
    sub_140001660(v60, 24 * v59, 8);
  nullsub_1(v36);
  v41 = (_QWORD *)sub_140001650(8, 1);
  if ( !v41 )
    sub_1416C2D4B(1, 8);
  *v41 = 0x73656C706D617865LL;
  v48 = 8;
  v51 = v41;
  v49 = v41;
  v50 = 8;
  v42 = v38[7] + 24LL * v38[8];
  *(_QWORD *)&v57 = v38[7];
  *((_QWORD *)&v57 + 1) = v42;
  *(_QWORD *)&v58 = a3;
  sub_140328340(&v59, (__int64 *)&v57);
  v63 = 1;
  sub_140467F40(&v57, &v59);
  if ( (_BYTE)v57 == 0xFF )
  {
    *(_QWORD *)&v55 = *((_QWORD *)&v57 + 1);
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v55,
      (unsigned int)&off_141789020,
      (__int64)&off_141789D28);
  }
  v56 = v58;
  v55 = v57;
  v63 = 0;
  sub_140307860(&v57, &v52, &v48, &v55);
  if ( (_BYTE)v57 != 0xFF )
    sub_1400104F0(&v57);
  v43 = v61;
  v44 = v54;
  if ( v61 )
  {
    v45 = v60 + 2;
    do
    {
      v46 = *(v45 - 1);
      if ( v46 )
        sub_140001660(*v45, v46, 1);
      v45 += 3;
      --v43;
    }
    while ( v43 );
  }
  if ( v59 )
    sub_140001660(v60, 24 * v59, 8);
  *(_QWORD *)(a1 + 24) = v53;
  *(_OWORD *)(a1 + 8) = v52;
  *(_BYTE *)a1 = 5;
  return sub_14043F590(v44);
}