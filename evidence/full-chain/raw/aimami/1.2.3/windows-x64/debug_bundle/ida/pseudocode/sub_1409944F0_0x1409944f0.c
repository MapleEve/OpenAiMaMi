// module: codexmate_lib/core/debug_bundle
// addr: 0x1409944f0
// name: sub_1409944F0
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_1409944F0(char **a1, __int64 a2)
{
  char *v2; // r12
  char *v3; // r14
  __int64 v4; // r8
  __int128 *v5; // r13
  char *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 *v10; // rdi
  __int64 v11; // rcx
  char *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r12
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  char v30; // al
  __int64 v31; // rcx
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  _QWORD *result; // rax
  __int64 v37; // [rsp+20h] [rbp-60h]
  _BYTE v38[31]; // [rsp+31h] [rbp-4Fh]
  char *v39; // [rsp+50h] [rbp-30h]
  char *v40; // [rsp+58h] [rbp-28h]
  char **v41; // [rsp+60h] [rbp-20h]
  __int64 v42; // [rsp+68h] [rbp-18h]
  __int64 v43; // [rsp+70h] [rbp-10h]
  __int128 v44; // [rsp+78h] [rbp-8h] BYREF
  __int64 v45; // [rsp+88h] [rbp+8h]
  __int128 v46; // [rsp+90h] [rbp+10h] BYREF
  __int128 v47; // [rsp+A0h] [rbp+20h]
  __int128 v48; // [rsp+B0h] [rbp+30h]
  __int128 v49; // [rsp+C0h] [rbp+40h]
  __int128 v50; // [rsp+D0h] [rbp+50h]
  __int64 v51; // [rsp+E0h] [rbp+60h]
  __int64 v52; // [rsp+F0h] [rbp+70h]
  _QWORD *v53; // [rsp+F8h] [rbp+78h]
  __int128 v54; // [rsp+100h] [rbp+80h] BYREF
  __int128 v55; // [rsp+110h] [rbp+90h]
  __int128 v56; // [rsp+120h] [rbp+A0h]
  __int128 v57; // [rsp+130h] [rbp+B0h]
  __int128 v58; // [rsp+140h] [rbp+C0h]
  __int64 v59; // [rsp+150h] [rbp+D0h]
  __int128 v60; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v61; // [rsp+170h] [rbp+F0h]
  char v62; // [rsp+198h] [rbp+118h]
  char v63; // [rsp+199h] [rbp+119h]
  char **v64; // [rsp+1A8h] [rbp+128h]
  __int64 v65; // [rsp+1B0h] [rbp+130h]
  __int64 v66; // [rsp+1B8h] [rbp+138h]
  char *v67; // [rsp+1C0h] [rbp+140h]
  __int64 v68; // [rsp+1C8h] [rbp+148h] BYREF
  _DWORD *v69; // [rsp+1D0h] [rbp+150h]
  __int64 v70; // [rsp+1D8h] [rbp+158h]
  void *v71; // [rsp+1E0h] [rbp+160h]
  char v72; // [rsp+1EBh] [rbp+16Bh]
  char v73; // [rsp+1ECh] [rbp+16Ch]
  char v74; // [rsp+1EDh] [rbp+16Dh]
  char v75; // [rsp+1EEh] [rbp+16Eh]
  char v76; // [rsp+1EFh] [rbp+16Fh]
  __int64 v77; // [rsp+1F0h] [rbp+170h]

  v77 = -2;
  v2 = *a1;
  v3 = a1[1];
  v53 = *(_QWORD **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v2 != v3 )
  {
    v42 = *(_QWORD *)(a2 + 16);
    v39 = a1[2];
    v40 = a1[3];
    v5 = &v60;
    v64 = nullptr;
    v41 = (char **)((unsigned __int64)(v3 - v2) >> 5);
    while ( 1 )
    {
      v52 = v4;
      *(_QWORD *)&v44 = 0;
      v45 = 0;
      nullsub_1(a1);
      v6 = (char *)sub_140001650(4, 1);
      if ( !v6 )
        sub_1416C2D4B(1, 4);
      v7 = 32LL * (_QWORD)v64;
      *(_DWORD *)v6 = 1752457584;
      v68 = 4;
      v67 = v6;
      v69 = v6;
      v70 = 4;
      v8 = *(_QWORD *)&v2[v7 + 16];
      v65 = *(_QWORD *)&v2[v7 + 8];
      v66 = v8;
      sub_14149B760(&v46, v65, v8);
      v9 = *((_QWORD *)v39 + 1);
      v37 = *((_QWORD *)v39 + 2);
      v10 = v5;
      v71 = *((void **)&v46 + 1);
      sub_140403D70((__int64)v5, *((__int64 *)&v46 + 1), v47, v9, v37);
      if ( (__int64)v46 > 0 )
        sub_140001660(v71, v46, 1);
      v12 = &v2[v7];
      v13 = *((_QWORD *)&v60 + 1);
      v14 = v61;
      v71 = *((void **)&v60 + 1);
      if ( (__int64)v61 < 0 )
      {
        v15 = 0;
LABEL_46:
        v72 = 1;
        sub_1416C2D4B(v15, v14);
      }
      v67 = v2;
      if ( (_QWORD)v61 )
      {
        nullsub_1(v11);
        v15 = 1;
        v16 = sub_140001650(v14, 1);
        if ( !v16 )
          goto LABEL_46;
        v17 = v16;
        sub_141684120(v16, v13, v14);
      }
      else
      {
        v17 = 1;
      }
      LOBYTE(v46) = 3;
      *((_QWORD *)&v46 + 1) = v14;
      *(_QWORD *)&v47 = v17;
      *((_QWORD *)&v47 + 1) = v14;
      v72 = 0;
      sub_140307860(&v54, &v44, &v68, &v46);
      if ( (_BYTE)v54 != 0xFF )
        sub_1400104F0(&v54);
      v5 = v10;
      if ( (_QWORD)v60 )
        sub_140001660(v71, v60, 1);
      nullsub_1(v18);
      v19 = sub_140001650(6, 1);
      if ( !v19 )
        sub_1416C2D4B(1, 6);
      *(_WORD *)(v19 + 4) = 25974;
      *(_DWORD *)v19 = 1769235297;
      v68 = 6;
      v69 = (_DWORD *)v19;
      v70 = 6;
      v20 = *((_QWORD *)v40 + 1);
      v21 = *((_QWORD *)v40 + 2);
      v76 = 1;
      sub_141473290(v10, v65, v66);
      v76 = 1;
      sub_141473290(&v54, v20, v21);
      if ( *((_QWORD *)&v60 + 1) == *((_QWORD *)&v54 + 1)
        && v62 == BYTE8(v57)
        && v63 == 2
        && BYTE9(v57) == 2
        && (unsigned __int8)v61 < 3u == (unsigned __int8)v55 < 3u
        && !(unsigned int)sub_1416847B0(v60, v54, *((_QWORD *)&v60 + 1)) )
      {
        v22 = 1;
      }
      else
      {
        v49 = v57;
        v48 = v56;
        v47 = v55;
        v46 = v54;
        v76 = 1;
        v22 = sub_140467AB0(v10, &v46);
      }
      LOBYTE(v46) = 1;
      BYTE1(v46) = v22;
      v76 = 0;
      sub_140307860(&v54, &v44, &v68, &v46);
      v2 = v67;
      if ( (_BYTE)v54 != 0xFF )
        sub_1400104F0(&v54);
      nullsub_1(v23);
      v24 = sub_140001650(6, 1);
      if ( !v24 )
        sub_1416C2D4B(1, 6);
      *(_WORD *)(v24 + 4) = 29556;
      *(_DWORD *)v24 = 1936291941;
      *(_QWORD *)&v60 = 6;
      *((_QWORD *)&v60 + 1) = v24;
      *(_QWORD *)&v61 = 6;
      v74 = 1;
      sub_141486710(&v46, v65, v66);
      if ( (_DWORD)v46 == 2 )
        break;
      v54 = v46;
      v59 = v51;
      v58 = v50;
      v57 = v49;
      v56 = v48;
      v55 = v47;
      v25 = (_QWORD)v46 != 2;
      if ( (_QWORD)v46 == 2 )
        goto LABEL_29;
LABEL_30:
      LOBYTE(v46) = 1;
      BYTE1(v46) = v25;
      v74 = 0;
      sub_140307860(&v54, &v44, v10, &v46);
      if ( (_BYTE)v54 != 0xFF )
        sub_1400104F0(&v54);
      nullsub_1(v26);
      v27 = sub_140001650(5, 1);
      if ( !v27 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v27 + 4) = 115;
      *(_DWORD *)v27 = 1702132066;
      *(_QWORD *)&v60 = 5;
      *((_QWORD *)&v60 + 1) = v27;
      *(_QWORD *)&v61 = 5;
      v28 = *((_QWORD *)v12 + 1);
      v29 = *((_QWORD *)v12 + 2);
      v73 = 1;
      sub_141486710(&v46, v28, v29);
      if ( (_DWORD)v46 == 2 )
      {
        *((_QWORD *)&v54 + 1) = *((_QWORD *)&v46 + 1);
        *(_QWORD *)&v54 = 1;
        v73 = 1;
        sub_140018650((char *)&v54 + 8);
        v30 = 0;
        v31 = v43;
      }
      else
      {
        v31 = *((_QWORD *)&v49 + 1);
        v30 = 2;
      }
      LOBYTE(v46) = v30;
      *((_QWORD *)&v46 + 1) = 0;
      v43 = v31;
      *(_QWORD *)&v47 = v31;
      v73 = 0;
      sub_140307860(&v54, &v44, v10, &v46);
      if ( (_BYTE)v54 != 0xFF )
        sub_1400104F0(&v54);
      nullsub_1(v32);
      v33 = (void *)sub_140001650(12, 1);
      if ( !v33 )
        sub_1416C2D4B(1, 12);
      qmemcpy(v33, "threadsTable", 12);
      v68 = 12;
      v71 = v33;
      v69 = v33;
      v70 = 12;
      sub_1407287C0((__int64)&v46, v65, v66);
      v75 = 1;
      sub_140B842D0(&v54, &v46);
      if ( (_BYTE)v54 == 0xFF )
      {
        *(_QWORD *)&v60 = *((_QWORD *)&v54 + 1);
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v60,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A4B38);
      }
      v61 = v55;
      v60 = v54;
      v75 = 0;
      sub_140307860(&v54, &v44, &v68, v10);
      if ( (_BYTE)v54 != 0xFF )
        sub_1400104F0(&v54);
      sub_1400104F0(&v46);
      *(_QWORD *)&v38[23] = v45;
      *(_OWORD *)&v38[7] = v44;
      v34 = v52;
      v35 = 32 * v52;
      *(_BYTE *)(v42 + v35) = 5;
      *(_OWORD *)(v42 + v35 + 1) = *(_OWORD *)v38;
      *(_OWORD *)(v42 + v35 + 16) = *(_OWORD *)&v38[15];
      v4 = v34 + 1;
      a1 = (char **)((char *)v64 + 1);
      v64 = a1;
      if ( a1 == v41 )
        goto LABEL_47;
    }
    *((_QWORD *)&v54 + 1) = *((_QWORD *)&v46 + 1);
    *(_QWORD *)&v54 = 2;
    v25 = 0;
LABEL_29:
    v74 = 1;
    sub_140018650((char *)&v54 + 8);
    goto LABEL_30;
  }
LABEL_47:
  result = v53;
  *v53 = v4;
  return result;
}