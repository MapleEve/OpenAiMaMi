// win 1.2.4 delta | codexmate_lib4core5relay23codex_thread_visibility4 @ 0x140538780
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay23codex_thread_visibility4 | (win-native 锚点: 命令名串/跨平台签名)
int __fastcall sub_140538780(__int64 *a1, HANDLE *a2, char **a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  const char *v18; // rax
  __int64 v19; // rcx
  void *v20; // rax
  void *v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r14
  void *v24; // rdx
  unsigned __int64 v25; // r12
  char **v26; // rbx
  unsigned __int64 v27; // rsi
  char **v28; // r14
  char v29; // al
  char **v30; // rdx
  char **v31; // rdx
  unsigned __int64 v32; // rsi
  __int64 v33; // r14
  __int128 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  char **v37; // rdi
  bool v38; // cf
  char **v39; // rax
  char v40; // al
  char **v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 *v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 *v49; // rax
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  __int128 v52; // xmm3
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 *v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  void *v64; // rax
  __int64 *v65; // rcx
  __int128 v67; // [rsp+30h] [rbp-50h] BYREF
  __int64 v68; // [rsp+40h] [rbp-40h]
  _QWORD v69[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v70; // [rsp+58h] [rbp-28h] BYREF
  _QWORD *v71; // [rsp+60h] [rbp-20h]
  __int64 v72; // [rsp+68h] [rbp-18h]
  __int64 v73; // [rsp+70h] [rbp-10h] BYREF
  __int64 v74; // [rsp+78h] [rbp-8h]
  __int64 v75; // [rsp+80h] [rbp+0h]
  __int64 v76; // [rsp+90h] [rbp+10h]
  __int64 v77; // [rsp+98h] [rbp+18h]
  __m256i v78; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v79; // [rsp+C0h] [rbp+40h]
  __int128 v80; // [rsp+D0h] [rbp+50h]
  __int128 v81; // [rsp+E0h] [rbp+60h]
  HANDLE *v82; // [rsp+F0h] [rbp+70h] BYREF
  char **v83; // [rsp+F8h] [rbp+78h]
  char **v84; // [rsp+100h] [rbp+80h]
  char **v85; // [rsp+108h] [rbp+88h] BYREF
  char **v86; // [rsp+110h] [rbp+90h]
  HANDLE *v87; // [rsp+118h] [rbp+98h]
  HANDLE **v88; // [rsp+120h] [rbp+A0h] BYREF
  __int64 (__fastcall *v89)(); // [rsp+128h] [rbp+A8h]
  __int64 *v90; // [rsp+130h] [rbp+B0h]
  __int64 (__fastcall *v91)(); // [rsp+138h] [rbp+B8h]
  _QWORD *v92; // [rsp+140h] [rbp+C0h]
  __int128 v93; // [rsp+148h] [rbp+C8h] BYREF
  __m256i v94; // [rsp+158h] [rbp+D8h]
  __int128 v95; // [rsp+178h] [rbp+F8h]
  __int128 v96; // [rsp+188h] [rbp+108h]
  __int128 v97; // [rsp+198h] [rbp+118h]
  HANDLE hObject; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 *v99; // [rsp+1B0h] [rbp+130h]
  HANDLE v100; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v101; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v102; // [rsp+1C8h] [rbp+148h]
  __int64 v103; // [rsp+1D0h] [rbp+150h]
  char v104; // [rsp+1DDh] [rbp+15Dh]
  char v105; // [rsp+1DEh] [rbp+15Eh]
  char v106; // [rsp+1DFh] [rbp+15Fh]
  __int64 v107; // [rsp+1E0h] [rbp+160h]

  v107 = -2;
  v10 = sub_1414E1550(a2, a3);
  if ( !v10 )
  {
    nullsub_1(v12, v11, v13);
    v20 = (void *)sub_140001650(26, 1);
    if ( !v20 )
      sub_141733E1B(1, 26);
    qmemcpy(v20, "rollout path has no parent", 26);
    *a1 = 9;
    a1[1] = 26;
    a1[2] = (__int64)v20;
    a1[3] = 26;
    return (int)v20;
  }
  v14 = v10;
  v15 = v11;
  v16 = sub_1414E1760(a2, a3);
  if ( v16 )
  {
    sub_141511130(&v93, v16, v17);
    v18 = aRollout;
    if ( !(_BYTE)v93 )
      v18 = *((const char **)&v93 + 1);
    v19 = 7;
    if ( !(_BYTE)v93 )
      v19 = v94.m256i_i64[0];
  }
  else
  {
    v19 = 7;
    v18 = aRollout;
  }
  v69[0] = v18;
  v69[1] = v19;
  LODWORD(v88) = GetCurrentProcessId();
  sub_1413C3890(&v93);
  *(_OWORD *)v78.m256i_i8 = v93;
  *(_QWORD *)&v93 = v69;
  *((_QWORD *)&v93 + 1) = sub_1403B4630;
  v94.m256i_i64[0] = (__int64)&v88;
  v94.m256i_i64[1] = (__int64)sub_141518C20;
  v94.m256i_i64[2] = (__int64)&v78;
  v94.m256i_i64[3] = (__int64)sub_1403B45A0;
  sub_141509590(&v70, &unk_1417E627C, &v93);
  v92 = v71;
  sub_1414E1440((unsigned int)&v73, v14, v15, (_DWORD)v71, v72);
  if ( v70 )
    sub_140001660(v92, v70, 1);
  LODWORD(v93) = 0;
  *((_QWORD *)&v93 + 1) = 0;
  v94.m256i_i32[0] = 7;
  *(__int64 *)((char *)v94.m256i_i64 + 4) = 0x100000000LL;
  *(__int64 *)((char *)&v94.m256i_i64[1] + 1) = 0;
  v20 = (void *)sub_1414EE920(&v93, a2, a3);
  if ( v20 == (void *)1 )
  {
    *a1 = 2;
    a1[1] = (__int64)v21;
    goto LABEL_59;
  }
  v76 = v15;
  v100 = v21;
  LODWORD(v93) = 0;
  *((_QWORD *)&v93 + 1) = 0;
  v94.m256i_i32[0] = 7;
  *(__int64 *)((char *)v94.m256i_i64 + 4) = 0;
  *(__int64 *)((char *)&v94.m256i_i64[1] + 1) = 0x100000001LL;
  v22 = v74;
  v23 = v75;
  v104 = 1;
  if ( sub_1414EE920(&v93, v74, v75) == 1 )
  {
    *a1 = 2;
    a1[1] = (__int64)v24;
LABEL_58:
    LODWORD(v20) = CloseHandle(v100);
    goto LABEL_59;
  }
  v77 = v14;
  v87 = a2;
  v86 = a3;
  v102 = v23;
  v103 = v22;
  v99 = a1;
  hObject = v24;
  v92 = &a4[8 * a5];
  v25 = 0;
LABEL_20:
  if ( a4 != v92 )
  {
    v27 = a4[6];
    v28 = nullptr;
    if ( v27 >= v25 )
      v28 = (char **)(v27 - v25);
    v85 = v28;
    if ( v27 > v25 )
    {
      v82 = &v100;
      v83 = v28;
      v84 = v28;
      v106 = 1;
      v105 = 1;
      v29 = sub_1403670B0(&v82, &hObject);
      v26 = v30;
      if ( (v29 & 1) != 0 )
      {
        v42 = 2;
        goto LABEL_54;
      }
      v101 = (__int64)v30;
      if ( v28 != v30 )
        goto LABEL_53;
    }
    v25 = a4[7] + v27;
    v106 = 1;
    v105 = 1;
    if ( sub_1414FF0C0(&v100, 0, v25) == 1 )
    {
      v26 = v31;
LABEL_51:
      v42 = 2;
LABEL_55:
      v46 = v103;
      v47 = v102;
      CloseHandle(hObject);
      *(_QWORD *)&v93 = v42;
      *((_QWORD *)&v93 + 1) = v26;
      v94 = v78;
      v95 = v79;
      v96 = v80;
      v97 = v81;
      v48 = sub_1414F3390(v46, v47);
      if ( v48 )
        sub_14049AA50(v48);
      v49 = v99;
      *v99 = v42;
      v49[1] = (__int64)v26;
      v50 = *(_OWORD *)&v78.m256i_u64[2];
      v51 = v79;
      v52 = v80;
      *((_OWORD *)v49 + 1) = *(_OWORD *)v78.m256i_i8;
      *((_OWORD *)v49 + 2) = v50;
      *((_OWORD *)v49 + 3) = v51;
      *((_OWORD *)v49 + 4) = v52;
      *((_OWORD *)v49 + 5) = v81;
      goto LABEL_58;
    }
    v32 = a4[5];
    if ( !v32 )
    {
LABEL_18:
      v26 = nullptr;
      goto LABEL_19;
    }
    v33 = a4[4];
    while ( 1 )
    {
      v106 = 1;
      v105 = 1;
      *(_QWORD *)&v34 = sub_1414FF0A0(&hObject, v33, v32);
      v26 = *((char ***)&v34 + 1);
      v93 = v34;
      if ( (_QWORD)v34 == 1 )
      {
        switch ( BYTE8(v34) & 3 )
        {
          case 0:
            LOBYTE(v34) = *(_BYTE *)(*((_QWORD *)&v34 + 1) + 16LL);
            goto LABEL_38;
          case 1:
            LOBYTE(v34) = *(_BYTE *)(*((_QWORD *)&v34 + 1) + 15LL);
            goto LABEL_38;
          case 2:
            goto LABEL_19;
          case 3:
            *(_QWORD *)&v34 = HIDWORD(*((_QWORD *)&v34 + 1));
LABEL_38:
            if ( (_BYTE)v34 != 35 )
              goto LABEL_19;
            v106 = 1;
            v105 = 1;
            sub_140045000((char *)&v93 + 8);
            break;
        }
      }
      else
      {
        if ( !*((_QWORD *)&v34 + 1) )
        {
          v26 = &off_1417DC6E8;
LABEL_19:
          a4 += 8;
          if ( v26 )
            goto LABEL_51;
          goto LABEL_20;
        }
        if ( v32 < *((_QWORD *)&v34 + 1) )
        {
          v106 = 1;
          v105 = 1;
          sub_1417343C0(*((_QWORD *)&v34 + 1), v32, v32, &off_1417DC700);
        }
        v33 += *((_QWORD *)&v34 + 1);
        v32 -= *((_QWORD *)&v34 + 1);
      }
      if ( !v32 )
        goto LABEL_18;
    }
  }
  v35 = a6;
  v36 = *(_QWORD *)(a6 + 56);
  v37 = nullptr;
  v38 = v36 < v25;
  v39 = (char **)(v36 - v25);
  if ( !v38 )
    v37 = v39;
  v85 = v37;
  if ( !v38 && v39 != nullptr )
  {
    v82 = &v100;
    v83 = v37;
    v84 = v37;
    v106 = 1;
    v105 = 1;
    v40 = sub_1403670B0(&v82, &hObject);
    v26 = v41;
    v42 = 2;
    if ( (v40 & 1) != 0 )
    {
LABEL_54:
      v78 = v94;
      v79 = v95;
      v80 = v96;
      v81 = v97;
      goto LABEL_55;
    }
    v101 = (__int64)v41;
    if ( v37 != v41 )
    {
LABEL_53:
      v88 = (HANDLE **)&v85;
      v89 = sub_1415199C0;
      v90 = &v101;
      v91 = sub_1415199C0;
      v106 = 1;
      v105 = 1;
      sub_141509590((char *)&v93 + 8, &unk_1417E4BB5, &v88);
      v42 = 10;
      v26 = *((char ***)&v93 + 1);
      goto LABEL_54;
    }
    v35 = a6;
  }
  v43 = *(unsigned int *)(v35 + 76);
  v106 = 1;
  v105 = 1;
  v26 = (char **)sub_1414F3660(v103, v102, v43);
  if ( v26 )
    goto LABEL_51;
  CloseHandle(hObject);
  v106 = 1;
  v105 = 0;
  sub_1414F3BB0(&v93, v87, v86);
  if ( (_DWORD)v93 == 2 )
  {
    v44 = *((_QWORD *)&v93 + 1);
    v45 = v99;
    *v99 = 2;
    v45[1] = v44;
    goto LABEL_58;
  }
  if ( v95 != *(_OWORD *)(a6 + 48) )
  {
    v106 = 1;
    v105 = 0;
    v60 = sub_1414F3390(v103, v102);
    if ( v60 )
    {
      v106 = 1;
      v105 = 0;
      sub_14049AA50(v60);
    }
    nullsub_1(v62, v61, v63);
    v64 = (void *)sub_140001650(68, 1);
    if ( !v64 )
    {
      v106 = 1;
      v105 = 0;
      sub_141733E1B(1, 68);
    }
    qmemcpy(v64, "rollout changed while router migration was streaming; retry required", 68);
    v65 = v99;
    *v99 = 10;
    v65[1] = 68;
    v65[2] = (__int64)v64;
    v65[3] = 68;
    goto LABEL_58;
  }
  CloseHandle(v100);
  v106 = 0;
  v105 = 0;
  v55 = sub_14051AF80(v103, v102, v87, v86);
  if ( v55 )
  {
    v101 = v55;
    v56 = v99;
    v57 = v103;
    v58 = v102;
    if ( *(_QWORD *)off_141F53DF0 >= 2u )
    {
      v82 = v87;
      v83 = v86;
      v88 = &v82;
      v89 = sub_1414FC840;
      v90 = &v101;
      v91 = sub_1414FDBC0;
      *(_QWORD *)&v93 = aCodexmateLibCo_16;
      *((_QWORD *)&v93 + 1) = 51;
      v94.m256i_i64[0] = (__int64)aCodexmateLibCo_16;
      v94.m256i_i64[1] = 51;
      v94.m256i_i64[2] = (__int64)&off_1417E62F0;
      sub_140575CA0(&unk_1417E628A, &v88, 2, &v93);
    }
    v59 = sub_1414F3390(v57, v58);
    if ( v59 )
      sub_14049AA50(v59);
    *(_QWORD *)&v93 = &v101;
    *((_QWORD *)&v93 + 1) = sub_1414FDBC0;
    sub_141509590(&v67, &unk_1417E6308, &v93);
    v56[3] = v68;
    *(_OWORD *)(v56 + 1) = v67;
    *v56 = 10;
    v106 = 0;
    v105 = 0;
    LODWORD(v20) = sub_14049AA50(v101);
LABEL_59:
    v53 = v73;
    if ( v73 )
    {
      v54 = v74;
      goto LABEL_61;
    }
  }
  else
  {
    v106 = 0;
    v105 = 0;
    sub_14051B2F0(v77, v76);
    LODWORD(v20) = (_DWORD)v99;
    *v99 = -1;
    v53 = v73;
    if ( !v73 )
      return (int)v20;
    v54 = v103;
LABEL_61:
    LODWORD(v20) = sub_140001660(v54, v53, 1);
  }
  return (int)v20;
}
