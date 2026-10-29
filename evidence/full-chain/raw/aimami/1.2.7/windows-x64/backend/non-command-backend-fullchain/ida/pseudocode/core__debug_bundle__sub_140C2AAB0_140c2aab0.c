// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140c2aab0 | name sub_140C2AAB0
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C2AAB0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // rax
  signed __int64 v7; // rbx
  __int64 v8; // r12
  const __m128i *v9; // r15
  __m128i *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rbx
  bool v17; // al
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // r14
  __int64 v24; // r12
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
  _DWORD *v37; // rbx
  __int64 v38; // r14
  _QWORD *v39; // r12
  _QWORD *v40; // r15
  __int64 v41; // rdx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rdi
  __int64 v45; // rbx
  _QWORD *v46; // r15
  _QWORD *v47; // r14
  __int64 v48; // rdx
  __int64 v50; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v51; // [rsp+38h] [rbp-48h]
  __int64 v52; // [rsp+40h] [rbp-40h]
  _QWORD *v53; // [rsp+48h] [rbp-38h]
  __int128 v54; // [rsp+50h] [rbp-30h] BYREF
  __int64 v55; // [rsp+60h] [rbp-20h]
  _QWORD *v56; // [rsp+68h] [rbp-18h]
  __int128 v57; // [rsp+70h] [rbp-10h] BYREF
  __int128 v58; // [rsp+80h] [rbp+0h]
  __int128 v59; // [rsp+90h] [rbp+10h] BYREF
  __int128 v60; // [rsp+A0h] [rbp+20h]
  unsigned __int64 v61; // [rsp+B0h] [rbp+30h] BYREF
  _DWORD *v62; // [rsp+B8h] [rbp+38h]
  __int64 v63; // [rsp+C0h] [rbp+40h]
  char v64; // [rsp+CDh] [rbp+4Dh]
  char v65; // [rsp+CEh] [rbp+4Eh]
  char v66; // [rsp+CFh] [rbp+4Fh]
  __int64 v67; // [rsp+D0h] [rbp+50h]

  v67 = -2;
  *(_QWORD *)&v54 = 0;
  v55 = 0;
  nullsub_1(a1);
  v6 = (void *)sub_140001650(14, 1);
  v56 = (_QWORD *)a2;
  if ( !v6 )
    sub_141938D2B(1, 14);
  qmemcpy(v6, "targetProvider", 14);
  v61 = 14;
  v62 = v6;
  v63 = 14;
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 < 0 )
  {
    v8 = 0;
    goto LABEL_4;
  }
  if ( v7 )
  {
    v9 = *(const __m128i **)(a2 + 8);
    nullsub_1(0x7250746567726174LL);
    v8 = 1;
    v10 = (__m128i *)sub_140001650(v7, 1);
    if ( !v10 )
    {
LABEL_4:
      v64 = 1;
      sub_141938D2B(v8, v7);
    }
    v11 = (__int64)v10;
    sub_1418F44E0(v10, v9, v7);
  }
  else
  {
    v11 = 1;
  }
  LOBYTE(v59) = 3;
  *((_QWORD *)&v59 + 1) = v7;
  *(_QWORD *)&v60 = v11;
  *((_QWORD *)&v60 + 1) = v7;
  v64 = 0;
  sub_140E72AA0(&v57, &v54, &v61, &v59);
  if ( (_BYTE)v57 != 0xFF )
    sub_14002F9D0(&v57);
  nullsub_1(v12);
  v13 = sub_140001650(5, 1);
  if ( !v13 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v13 + 4) = 110;
  *(_DWORD *)v13 = 1634036835;
  v61 = 5;
  v62 = (_DWORD *)v13;
  v63 = 5;
  v14 = v56[10];
  v15 = v56[11];
  v16 = v56[12];
  v17 = !(v16 | v15 | v14) && !v56[5] && v56[13] == 0;
  LOBYTE(v59) = 1;
  BYTE1(v59) = v17;
  sub_140E72AA0(&v57, &v54, &v61, &v59);
  if ( (_BYTE)v57 != 0xFF )
    sub_14002F9D0(&v57);
  nullsub_1(v18);
  v19 = (_DWORD *)sub_140001650(7, 1);
  if ( !v19 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v19 + 3) = 1684369006;
  *v19 = 1851876211;
  v61 = 7;
  v62 = v19;
  v63 = 7;
  v20 = v56[9];
  LOBYTE(v59) = 2;
  *((_QWORD *)&v59 + 1) = 0;
  *(_QWORD *)&v60 = v20;
  sub_140E72AA0(&v57, &v54, &v61, &v59);
  if ( (_BYTE)v57 != 0xFF )
    sub_14002F9D0(&v57);
  nullsub_1(v21);
  v22 = (void *)sub_140001650(10, 1);
  if ( !v22 )
    sub_141938D2B(1, 10);
  qmemcpy(v22, "issueCount", 10);
  v61 = 10;
  v62 = v22;
  v63 = 10;
  v23 = v56[5];
  v24 = v56[13];
  LOBYTE(v59) = 2;
  *((_QWORD *)&v59 + 1) = 0;
  *(_QWORD *)&v60 = v23 + v14 + v15 + v16 + v24;
  sub_140E72AA0(&v57, &v54, &v61, &v59);
  if ( (_BYTE)v57 != 0xFF )
    sub_14002F9D0(&v57);
  nullsub_1(v25);
  v26 = (void *)sub_140001650(12, 1);
  if ( !v26 )
    sub_141938D2B(1, 12);
  qmemcpy(v26, "dbMismatched", 12);
  v61 = 12;
  v62 = v26;
  v63 = 12;
  LOBYTE(v59) = 2;
  *((_QWORD *)&v59 + 1) = 0;
  *(_QWORD *)&v60 = v14;
  sub_140E72AA0(&v57, &v54, &v61, &v59);
  if ( (_BYTE)v57 != 0xFF )
    sub_14002F9D0(&v57);
  nullsub_1(v27);
  v28 = (void *)sub_140001650(17, 1);
  if ( !v28 )
    sub_141938D2B(1, 17);
  qmemcpy(v28, "rolloutMismatched", 17);
  v61 = 17;
  v62 = v28;
  v63 = 17;
  LOBYTE(v59) = 2;
  *((_QWORD *)&v59 + 1) = 0;
  *(_QWORD *)&v60 = v15;
  sub_140E72AA0(&v57, &v54, &v61, &v59);
  if ( (_BYTE)v57 != 0xFF )
    sub_14002F9D0(&v57);
  nullsub_1(v29);
  v30 = (void *)sub_140001650(15, 1);
  if ( !v30 )
    sub_141938D2B(1, 15);
  qmemcpy(v30, "missingRollouts", 15);
  v61 = 15;
  v62 = v30;
  v63 = 15;
  LOBYTE(v59) = 2;
  *((_QWORD *)&v59 + 1) = 0;
  *(_QWORD *)&v60 = v16;
  sub_140E72AA0(&v57, &v54, &v61, &v59);
  if ( (_BYTE)v57 != 0xFF )
    sub_14002F9D0(&v57);
  nullsub_1(v31);
  v32 = (void *)sub_140001650(18, 1);
  if ( !v32 )
    sub_141938D2B(1, 18);
  qmemcpy(v32, "unreadableRollouts", 18);
  v61 = 18;
  v62 = v32;
  v63 = 18;
  LOBYTE(v59) = 2;
  *((_QWORD *)&v59 + 1) = 0;
  *(_QWORD *)&v60 = v24;
  sub_140E72AA0(&v57, &v54, &v61, &v59);
  if ( (_BYTE)v57 != 0xFF )
    sub_14002F9D0(&v57);
  nullsub_1(v33);
  v34 = (void *)sub_140001650(10, 1);
  if ( !v34 )
    sub_141938D2B(1, 10);
  qmemcpy(v34, "readErrors", 10);
  v50 = 10;
  v53 = v34;
  v51 = v34;
  v52 = 10;
  v35 = v56[4] + 24 * v23;
  *(_QWORD *)&v59 = v56[4];
  *((_QWORD *)&v59 + 1) = v35;
  *(_QWORD *)&v60 = a3;
  sub_1403EB7B0(&v61, (__int64 *)&v59);
  v66 = 1;
  sub_140C100F0(&v59, &v61);
  if ( (_BYTE)v59 == 0xFF )
  {
    *(_QWORD *)&v57 = *((_QWORD *)&v59 + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v57,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3D210);
  }
  v58 = v60;
  v57 = v59;
  v66 = 0;
  sub_140E72AA0(&v59, &v54, &v50, &v57);
  if ( (_BYTE)v59 != 0xFF )
    sub_14002F9D0(&v59);
  v37 = v62;
  v38 = v63;
  v39 = v56;
  if ( v63 )
  {
    v40 = v62 + 2;
    do
    {
      v41 = *(v40 - 1);
      if ( v41 )
        sub_140001660(*v40, v41, 1);
      v40 += 3;
      --v38;
    }
    while ( v38 );
  }
  if ( v61 )
    sub_140001660(v37, 24 * v61, 8);
  nullsub_1(v36);
  v42 = (_QWORD *)sub_140001650(8, 1);
  if ( !v42 )
    sub_141938D2B(1, 8);
  *v42 = 0x73656C706D617865LL;
  v50 = 8;
  v53 = v42;
  v51 = v42;
  v52 = 8;
  v43 = v39[7] + 24LL * v39[8];
  *(_QWORD *)&v59 = v39[7];
  *((_QWORD *)&v59 + 1) = v43;
  *(_QWORD *)&v60 = a3;
  sub_1403EB7B0(&v61, (__int64 *)&v59);
  v65 = 1;
  sub_140C100F0(&v59, &v61);
  if ( (_BYTE)v59 == 0xFF )
  {
    *(_QWORD *)&v57 = *((_QWORD *)&v59 + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v57,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3D210);
  }
  v58 = v60;
  v57 = v59;
  v65 = 0;
  sub_140E72AA0(&v59, &v54, &v50, &v57);
  if ( (_BYTE)v59 != 0xFF )
    sub_14002F9D0(&v59);
  v44 = v62;
  v45 = v63;
  v46 = v56;
  if ( v63 )
  {
    v47 = v62 + 2;
    do
    {
      v48 = *(v47 - 1);
      if ( v48 )
        sub_140001660(*v47, v48, 1);
      v47 += 3;
      --v45;
    }
    while ( v45 );
  }
  if ( v61 )
    sub_140001660(v44, 24 * v61, 8);
  *(_QWORD *)(a1 + 24) = v55;
  *(_OWORD *)(a1 + 8) = v54;
  *(_BYTE *)a1 = 5;
  return sub_140196AD0(v46);
}
