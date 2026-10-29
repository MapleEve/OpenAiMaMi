// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x140854e90 | successor of pre-update 0x1402a8520 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.731, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
_QWORD *__fastcall sub_140854E90(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rdi
  _DWORD *v7; // r12
  _QWORD *v8; // r15
  _DWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  char *v16; // r13
  __int64 v17; // rdi
  _QWORD *v18; // rsi
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  void *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rax
  _QWORD *result; // rax
  __int64 v46; // [rsp+20h] [rbp-60h]
  _BYTE v47[31]; // [rsp+31h] [rbp-4Fh]
  __int64 v48; // [rsp+98h] [rbp+18h]
  __int64 v49; // [rsp+A0h] [rbp+20h]
  __int64 v50; // [rsp+A8h] [rbp+28h] BYREF
  char *v51; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v52; // [rsp+B8h] [rbp+38h]
  char *v53; // [rsp+C0h] [rbp+40h]
  __int64 v54; // [rsp+E0h] [rbp+60h]
  __int64 v55; // [rsp+100h] [rbp+80h]
  _QWORD *v56; // [rsp+108h] [rbp+88h]
  __int64 v57; // [rsp+110h] [rbp+90h] BYREF
  _DWORD *v58; // [rsp+118h] [rbp+98h]
  __int64 v59; // [rsp+120h] [rbp+A0h]
  __int128 v60; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v61; // [rsp+138h] [rbp+B8h]
  _QWORD *v62; // [rsp+140h] [rbp+C0h]
  __int64 v63; // [rsp+148h] [rbp+C8h]
  __int64 v64; // [rsp+150h] [rbp+D0h]
  _DWORD *v65; // [rsp+158h] [rbp+D8h]
  _OWORD v66[2]; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v67; // [rsp+180h] [rbp+100h] BYREF
  __int128 v68; // [rsp+190h] [rbp+110h]
  void *v69; // [rsp+1A0h] [rbp+120h]
  char v70; // [rsp+1ABh] [rbp+12Bh]
  char v71; // [rsp+1ACh] [rbp+12Ch]
  char v72; // [rsp+1ADh] [rbp+12Dh]
  char v73; // [rsp+1AEh] [rbp+12Eh]
  char v74; // [rsp+1AFh] [rbp+12Fh]
  __int64 v75; // [rsp+1B0h] [rbp+130h]

  v75 = -2;
  v2 = *a1;
  v3 = a1[1];
  v56 = *(_QWORD **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v2 != v3 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    v6 = a1[2];
    v7 = (_DWORD *)a1[3];
    v8 = (_QWORD *)((unsigned __int64)(v3 - v2) >> 5);
    v62 = nullptr;
    do
    {
      v55 = v4;
      *(_QWORD *)&v60 = 0;
      v61 = 0;
      nullsub_1(a1, a2);
      v9 = (_DWORD *)sub_140001650(4, 1);
      if ( !v9 )
        sub_14196B2DB(1, 4);
      v10 = 32LL * (_QWORD)v62;
      *v9 = 1752457584;
      v57 = 4;
      v65 = v9;
      v58 = v9;
      v59 = 4;
      v11 = *(_QWORD *)(v2 + v10 + 16);
      v63 = *(_QWORD *)(v2 + v10 + 8);
      v64 = v11;
      sub_1416DA570(&v50);
      v12 = *(_QWORD *)(v6 + 8);
      v46 = *(_QWORD *)(v6 + 16);
      v69 = v51;
      sub_14072B5B0((unsigned int)&v67, (_DWORD)v51, v52, v12, v46);
      v14 = v50;
      if ( v50 > 0 )
        sub_140001660(v69, v50, 1);
      v15 = v2 + v10;
      v69 = *((void **)&v67 + 1);
      v16 = (char *)v68;
      if ( (__int64)v68 < 0 )
      {
        v20 = 0;
LABEL_43:
        v71 = 1;
        sub_14196B2DB(v20, v16);
      }
      v65 = v7;
      if ( (_QWORD)v68 )
      {
        v49 = v6;
        v17 = v5;
        v18 = v8;
        v19 = v2;
        nullsub_1(v13, v14);
        v20 = 1;
        v21 = sub_140001650(v16, 1);
        if ( !v21 )
          goto LABEL_43;
        v22 = v21;
        sub_1419234B0(v21, v69, v16);
        v2 = v19;
        v8 = v18;
        v5 = v17;
        v6 = v49;
      }
      else
      {
        v22 = 1;
      }
      LOBYTE(v50) = 3;
      v51 = v16;
      v52 = v22;
      v53 = v16;
      v71 = 0;
      sub_140A68320(v66, &v60, &v57, &v50);
      v7 = v65;
      if ( LOBYTE(v66[0]) != 0xFF )
        sub_140032FF0(v66);
      v24 = v67;
      if ( (_QWORD)v67 )
        sub_140001660(v69, v67, 1);
      nullsub_1(v23, v24);
      v25 = sub_140001650(6, 1);
      if ( !v25 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v25 + 4) = 25974;
      *(_DWORD *)v25 = 1769235297;
      *(_QWORD *)&v67 = 6;
      *((_QWORD *)&v67 + 1) = v25;
      *(_QWORD *)&v68 = 6;
      v26 = *((_QWORD *)v7 + 1);
      v27 = *((_QWORD *)v7 + 2);
      v70 = 1;
      v28 = sub_1408F9F50(v63, v64, v26, v27);
      LOBYTE(v50) = 1;
      BYTE1(v50) = v28;
      v70 = 0;
      sub_140A68320(v66, &v60, &v67, &v50);
      if ( LOBYTE(v66[0]) != 0xFF )
        sub_140032FF0(v66);
      nullsub_1(v30, v29);
      v31 = sub_140001650(6, 1);
      if ( !v31 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v31 + 4) = 29556;
      *(_DWORD *)v31 = 1936291941;
      *(_QWORD *)&v67 = 6;
      *((_QWORD *)&v67 + 1) = v31;
      *(_QWORD *)&v68 = 6;
      v73 = 1;
      sub_1416C49D0(&v50, v63, v64);
      if ( (_DWORD)v50 == 2 )
      {
        if ( ((unsigned __int8)v51 & 3u) - 2 >= 2 && ((unsigned __int8)v51 & 3) != 0 )
        {
          --v51;
          LOBYTE(v50) = 3;
          v73 = 1;
          sub_1416EBAD0(&v51);
        }
        v32 = 0;
      }
      else
      {
        v32 = 1;
      }
      LOBYTE(v50) = 1;
      BYTE1(v50) = v32;
      v73 = 0;
      sub_140A68320(v66, &v60, &v67, &v50);
      if ( LOBYTE(v66[0]) != 0xFF )
        sub_140032FF0(v66);
      nullsub_1(v34, v33);
      v35 = sub_140001650(5, 1);
      if ( !v35 )
        sub_14196B2DB(1, 5);
      *(_BYTE *)(v35 + 4) = 115;
      *(_DWORD *)v35 = 1702132066;
      *(_QWORD *)&v67 = 5;
      *((_QWORD *)&v67 + 1) = v35;
      *(_QWORD *)&v68 = 5;
      v36 = *(_QWORD *)(v15 + 8);
      v37 = *(_QWORD *)(v15 + 16);
      v72 = 1;
      sub_1416C49D0(&v50, v36, v37);
      if ( (_DWORD)v50 == 2 )
      {
        if ( ((unsigned __int8)v51 & 3u) - 2 >= 2 && ((unsigned __int8)v51 & 3) != 0 )
        {
          --v51;
          LOBYTE(v50) = 3;
          v72 = 1;
          sub_1416EBAD0(&v51);
        }
        v38 = 0;
        v39 = v48;
      }
      else
      {
        v39 = v54;
        v38 = 2;
      }
      LOBYTE(v50) = v38;
      v51 = nullptr;
      v48 = v39;
      v52 = v39;
      v72 = 0;
      sub_140A68320(v66, &v60, &v67, &v50);
      if ( LOBYTE(v66[0]) != 0xFF )
        sub_140032FF0(v66);
      nullsub_1(v41, v40);
      v42 = (void *)sub_140001650(12, 1);
      if ( !v42 )
        sub_14196B2DB(1, 12);
      qmemcpy(v42, "threadsTable", 12);
      v57 = 12;
      v69 = v42;
      v58 = v42;
      v59 = 12;
      sub_14095B4E0((__int64)&v50, v63, v64);
      v74 = 1;
      sub_140B73E90(v66, &v50);
      if ( LOBYTE(v66[0]) == 0xFF )
      {
        *(_QWORD *)&v67 = *((_QWORD *)&v66[0] + 1);
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_11,
          43,
          (unsigned int)&v67,
          (unsigned int)&off_141A52958,
          (__int64)&off_141A51D78);
      }
      v68 = v66[1];
      v67 = v66[0];
      v74 = 0;
      sub_140A68320(v66, &v60, &v57, &v67);
      if ( LOBYTE(v66[0]) != 0xFF )
        sub_140032FF0(v66);
      sub_140032FF0(&v50);
      *(_QWORD *)&v47[23] = v61;
      *(_OWORD *)&v47[7] = v60;
      v43 = v55;
      v44 = 32 * v55;
      *(_BYTE *)(v5 + v44) = 5;
      *(_OWORD *)(v5 + v44 + 1) = *(_OWORD *)v47;
      *(_OWORD *)(v5 + v44 + 16) = *(_OWORD *)&v47[15];
      v4 = v43 + 1;
      a1 = (_QWORD *)((char *)v62 + 1);
      v62 = a1;
    }
    while ( a1 != v8 );
  }
  result = v56;
  *v56 = v4;
  return result;
}
