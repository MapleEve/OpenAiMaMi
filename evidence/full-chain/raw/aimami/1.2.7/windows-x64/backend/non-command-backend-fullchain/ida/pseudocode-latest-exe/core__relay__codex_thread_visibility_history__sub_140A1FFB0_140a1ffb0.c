// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility_history.rs | ea 0x140a1ffb0 | successor of pre-update 0x1401a38d0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_140A1FFB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int64 v18; // rdx
  __m128 v19; // xmm1
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // r15
  void *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  void *v31; // rax
  __int64 v32; // rcx
  void *v34; // rax
  __int64 v35; // rdi
  void *v36; // rax
  __int64 v37; // rcx
  bool v38; // r15
  HANDLE v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int128 v50; // kr10_16
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // r12
  void *v56; // rcx
  void *v57; // r12
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rax
  void *v62; // rdx
  HANDLE v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  void *v68; // rax
  _QWORD v69[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v70; // [rsp+50h] [rbp-30h]
  __int64 v71; // [rsp+60h] [rbp-20h]
  __int64 v72; // [rsp+68h] [rbp-18h] BYREF
  int v73; // [rsp+70h] [rbp-10h]
  double v74; // [rsp+74h] [rbp-Ch] BYREF
  __int64 v75; // [rsp+80h] [rbp+0h] BYREF
  void *v76; // [rsp+88h] [rbp+8h]
  __int64 v77; // [rsp+90h] [rbp+10h]
  int v78; // [rsp+9Ch] [rbp+1Ch] BYREF
  __int64 v79; // [rsp+A4h] [rbp+24h]
  int v80; // [rsp+ACh] [rbp+2Ch]
  _BYTE v81[13]; // [rsp+B0h] [rbp+30h]
  __int64 v82; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v83; // [rsp+C8h] [rbp+48h]
  void *v84; // [rsp+D0h] [rbp+50h]
  __int64 v85; // [rsp+E0h] [rbp+60h]
  __int64 v86; // [rsp+E8h] [rbp+68h]
  __int64 v87; // [rsp+F0h] [rbp+70h]
  __int64 v88; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v89; // [rsp+100h] [rbp+80h]
  __int128 v90; // [rsp+108h] [rbp+88h] BYREF
  __int128 v91; // [rsp+118h] [rbp+98h]
  HANDLE v92[2]; // [rsp+128h] [rbp+A8h]
  __int128 v93; // [rsp+138h] [rbp+B8h]
  __int64 v94; // [rsp+148h] [rbp+C8h]
  _BYTE v95[96]; // [rsp+150h] [rbp+D0h] BYREF
  HANDLE hObject; // [rsp+1B8h] [rbp+138h]
  _BYTE v97[96]; // [rsp+1C0h] [rbp+140h] BYREF
  int v98; // [rsp+22Ch] [rbp+1ACh]
  __int64 v99; // [rsp+238h] [rbp+1B8h]
  __int64 v100; // [rsp+240h] [rbp+1C0h]
  __int64 v101; // [rsp+248h] [rbp+1C8h]
  __int64 v102; // [rsp+250h] [rbp+1D0h]
  HANDLE v103; // [rsp+258h] [rbp+1D8h]
  __int64 v104; // [rsp+260h] [rbp+1E0h]
  char v105; // [rsp+269h] [rbp+1E9h]
  char v106; // [rsp+26Ah] [rbp+1EAh]
  char v107; // [rsp+26Bh] [rbp+1EBh]
  char v108; // [rsp+26Ch] [rbp+1ECh]
  char v109; // [rsp+26Dh] [rbp+1EDh]
  char v110; // [rsp+26Eh] [rbp+1EEh]
  char v111; // [rsp+26Fh] [rbp+1EFh]
  __int64 v112; // [rsp+270h] [rbp+1F0h]

  v112 = -2;
  sub_140A934F0(v97, a2, a3);
  v8 = *(_QWORD *)v97;
  if ( *(_QWORD *)&v97[32] == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v8;
    return a1;
  }
  if ( *(_DWORD *)&v97[32] == 2 )
  {
    v9 = sub_1416A8370(0, aRolloutIsMissi_0, 18);
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v9;
    return a1;
  }
  v101 = *(_QWORD *)&v97[8];
  v99 = *(_QWORD *)v97;
  v10 = *(_QWORD *)&v97[16];
  v11 = *(_QWORD *)&v97[80];
  v12 = *(_QWORD *)&v97[88];
  LODWORD(v104) = v98;
  sub_140A934F0(v97, a2, a3);
  if ( *(_QWORD *)&v97[32] == -1 )
  {
    v14 = v97[0] & 3;
    v13 = (unsigned int)(v14 - 2);
    if ( (unsigned int)v13 >= 2 && (v97[0] & 3) != 0 )
    {
      *(_QWORD *)&v95[8] = *(_QWORD *)v97 - 1LL;
      v95[0] = 3;
      sub_1416EBAD0(&v95[8]);
    }
    goto LABEL_20;
  }
  if ( *(_DWORD *)&v97[32] == 2 || (v15 = *(_QWORD *)v97, *(_QWORD *)v97 == -1) )
  {
LABEL_20:
    nullsub_1(v14, v13);
    v31 = (void *)sub_140001650(38, 1);
    v29 = v99;
    if ( !v31 )
      sub_14196B2DB(1, 38);
    qmemcpy(v31, "cannot snapshot rollout before writing", 38);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 38;
    *(_QWORD *)(a1 + 16) = v31;
    *(_QWORD *)(a1 + 24) = 38;
    goto LABEL_22;
  }
  v85 = v11;
  v16 = *(_QWORD *)&v97[8];
  v17 = *(_OWORD *)&v97[16];
  v18 = *(_QWORD *)&v97[16];
  v19 = (__m128)*(unsigned __int64 *)&v97[64];
  v20 = *(_QWORD *)&v97[88];
  v71 = *(_QWORD *)&v97[88];
  _mm_storel_ps((double *)&v72, (__m128)*(unsigned __int64 *)&v97[80]);
  v73 = 1;
  _mm_storel_ps(&v74, v19);
  v94 = v15;
  v69[0] = v15;
  v69[1] = v16;
  v70 = v17;
  v89 = v16;
  if ( ((v20 == v12) & (unsigned __int8)sub_140222930(v16, v18, v101, v10)) != 1 || v72 != v85 )
  {
    LOBYTE(v22) = v20 == v12;
    nullsub_1(v22, v21);
    v34 = (void *)sub_140001650(61, 1);
    if ( !v34 )
      sub_14196B2DB(1, 61);
    qmemcpy(v34, "rollout representation changed before writing; retry required", 61);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 61;
    *(_QWORD *)(a1 + 16) = v34;
    *(_QWORD *)(a1 + 24) = 61;
LABEL_28:
    v29 = v99;
    v30 = v94;
    if ( !v94 )
    {
LABEL_22:
      if ( !v29 )
        return a1;
      v32 = v101;
LABEL_24:
      sub_140001660(v32, v29, 1);
      return a1;
    }
LABEL_29:
    v35 = v29;
    sub_140001660(v89, v30, 1);
    v29 = v35;
    goto LABEL_22;
  }
  v23 = sub_1416B19D0(v101, v10);
  v86 = v24;
  v26 = v23;
  if ( !v23 )
  {
    nullsub_1(v25, v24);
    v36 = (void *)sub_140001650(21, 1);
    if ( !v36 )
      sub_14196B2DB(1, 21);
    qmemcpy(v36, "rollout has no parent", 21);
    *(_QWORD *)(a1 + 24) = 21;
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 21;
    *(_QWORD *)(a1 + 16) = v36;
    v29 = v99;
    v30 = v94;
    if ( !v94 )
      goto LABEL_22;
    goto LABEL_29;
  }
  sub_141597890(v95);
  *(_QWORD *)v97 = v95;
  *(_QWORD *)&v97[8] = sub_1415989F0;
  sub_1416DAFA0(&v75, &unk_141A69092, v97);
  v103 = v76;
  sub_1416B18A0((unsigned int)&v82, v26, v86, (_DWORD)v76, v77);
  if ( v75 )
    sub_140001660(v103, v75, 1);
  v78 = 0;
  v79 = 0;
  v80 = 7;
  *(_QWORD *)v81 = 0;
  *(_QWORD *)&v81[5] = 0x100000001LL;
  v27 = v83;
  v103 = v84;
  if ( sub_1416BFE10(&v78, v83, v84) == 1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v28;
    if ( v82 )
    {
      sub_140001660(v27, v82, 1);
      v29 = v99;
      v30 = v94;
      if ( !v94 )
        goto LABEL_22;
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  hObject = v28;
  v106 = 1;
  sub_140A92FF0(v97, a2, a3);
  v100 = *(_QWORD *)v97;
  if ( *(_QWORD *)v97 )
  {
    v102 = *(_QWORD *)&v97[8];
    v111 = 1;
    v110 = 1;
    sub_1416DA570(v97);
    v87 = v27;
    v37 = *(_QWORD *)&v97[8];
    v38 = *(_QWORD *)&v97[16] >= 0xAu
       && (*(_QWORD *)(*(_QWORD *)&v97[8] + *(_QWORD *)&v97[16] - 10LL) ^ 0x7A2E6C6E6F736A2ELL
         | *(unsigned __int16 *)(*(_QWORD *)&v97[8] + *(_QWORD *)&v97[16] - 2LL) ^ 0x7473LL) == 0;
    v40 = *(_QWORD *)v97;
    if ( *(__int64 *)v97 > 0 )
      sub_140001660(*(_QWORD *)&v97[8], *(_QWORD *)v97, 1);
    if ( v38 )
    {
      v111 = 1;
      v110 = 0;
      sub_140C9FF40((unsigned int)v97, (_DWORD)hObject, 3, 1, 0);
      v41 = v87;
      if ( *(_QWORD *)v97 == 2 )
      {
        *(_OWORD *)v95 = __PAIR128__(*(unsigned __int64 *)&v97[8], 2);
        goto LABEL_55;
      }
      v93 = *(_OWORD *)&v97[48];
      *(_OWORD *)v92 = *(_OWORD *)&v97[32];
      v91 = *(_OWORD *)&v97[16];
      v90 = *(_OWORD *)v97;
      v107 = 1;
      sub_140A92D70(v97, a2, a3);
      if ( *(_QWORD *)v97 != -1 )
      {
        *(_QWORD *)&v95[88] = *(_QWORD *)&v97[88];
        *(_OWORD *)&v95[73] = *(_OWORD *)&v97[73];
        *(_OWORD *)&v95[57] = *(_OWORD *)&v97[57];
        *(_OWORD *)&v95[41] = *(_OWORD *)&v97[41];
        *(_OWORD *)&v95[25] = *(_OWORD *)&v97[25];
        *(_OWORD *)&v95[9] = *(_OWORD *)&v97[9];
        *(_QWORD *)v95 = *(_QWORD *)v97;
        v95[8] = v97[8];
LABEL_48:
        if ( !(_BYTE)v90 )
          sub_1411D1520((char *)&v90 + 8);
        CloseHandle(v92[1]);
        if ( (_QWORD)v91 )
          sub_140001660(*((_QWORD *)&v91 + 1), v91, 1);
        goto LABEL_55;
      }
      if ( v97[8] == 1 )
      {
        v107 = 1;
        if ( sub_140A92B20(a2, a3) == 1 )
        {
          *(_QWORD *)v95 = 2;
          *(_QWORD *)&v95[8] = v54;
          goto LABEL_48;
        }
        v107 = 1;
        v58 = sub_1411D0DB0(&v90, 1, v54);
        if ( v58 )
        {
          *(_QWORD *)v95 = 2;
          *(_QWORD *)&v95[8] = v58;
          goto LABEL_48;
        }
      }
      v59 = *(_QWORD *)(a4 + 8);
      v60 = *(_QWORD *)(a4 + 16);
      v107 = 1;
      sub_140A26690((unsigned int)v97, v59, v60, v100, v102, (__int64)&v90, (__int64)&off_141A69448);
      if ( *(_QWORD *)v97 != -1 )
      {
        *(_QWORD *)&v95[88] = *(_QWORD *)&v97[88];
        *(_OWORD *)&v95[72] = *(_OWORD *)&v97[72];
        *(_OWORD *)&v95[56] = *(_OWORD *)&v97[56];
        *(_OWORD *)&v95[40] = *(_OWORD *)&v97[40];
        *(_OWORD *)&v95[24] = *(_OWORD *)&v97[24];
        *(_OWORD *)&v95[8] = *(_OWORD *)&v97[8];
        *(_QWORD *)v95 = *(_QWORD *)v97;
        goto LABEL_48;
      }
      *(_OWORD *)&v97[48] = v93;
      *(_OWORD *)&v97[32] = *(_OWORD *)v92;
      *(_OWORD *)&v97[16] = v91;
      *(_OWORD *)v97 = v90;
      v107 = 0;
      v61 = sub_140CA0080(v97);
      v56 = v62;
      if ( v61 == 1 )
      {
        *(_QWORD *)v95 = 2;
        *(_QWORD *)&v95[8] = v62;
        goto LABEL_55;
      }
LABEL_87:
      v63 = v103;
      v103 = v56;
      *(_QWORD *)&v90 = v56;
      v109 = 1;
      v64 = sub_1416C43E0(v41, v63, (unsigned int)v104);
      if ( !v64 )
      {
        v109 = 1;
        v64 = sub_1416B21F0(&v90);
        if ( !v64 )
        {
          CloseHandle(v103);
          v109 = 0;
          sub_1400249C0(v100, v102);
          v109 = 0;
          sub_1407C5250(v97, a2, a3);
          v104 = *(_QWORD *)v97;
          if ( *(_QWORD *)v97 != -1 )
          {
            if ( (unsigned __int8)sub_140A97FE0(v97, v69) )
            {
              if ( v104 )
                sub_140001660(*(_QWORD *)&v97[8], v104, 1);
              v109 = 0;
              v67 = sub_1407D7960(v83, v84, v101, v10);
              if ( !v67 )
              {
                v109 = 0;
                sub_1407D8110(v26, v86);
                *(_QWORD *)&v97[4] = v85;
                *(_DWORD *)v97 = 1;
                v109 = 0;
                sub_1407F0EA0(v101, v10, v97);
                *(_QWORD *)v95 = -1;
                goto LABEL_67;
              }
              *(_QWORD *)v95 = 2;
              *(_QWORD *)&v95[8] = v67;
              goto LABEL_59;
            }
            if ( v104 )
              sub_140001660(*(_QWORD *)&v97[8], v104, 1);
          }
          nullsub_1(v66, v65);
          v68 = (void *)sub_140001650(49, 1);
          if ( !v68 )
          {
            v109 = 0;
            sub_14196B2DB(1, 49);
          }
          qmemcpy(v68, "rollout changed during rewrite; history preserved", 49);
          *(_QWORD *)v95 = 10;
          *(_QWORD *)&v95[8] = 49;
          *(_QWORD *)&v95[16] = v68;
          *(_QWORD *)&v95[24] = 49;
LABEL_59:
          if ( *(_QWORD *)v95 == -1 )
            goto LABEL_67;
          v27 = v83;
          v39 = v84;
          goto LABEL_61;
        }
      }
      *(_QWORD *)v95 = 2;
      *(_QWORD *)&v95[8] = v64;
      CloseHandle(v103);
LABEL_55:
      if ( *(_QWORD *)v102 )
        (*(void (__fastcall **)(__int64))v102)(v100);
      v47 = *(_QWORD *)(v102 + 8);
      if ( v47 )
        sub_140001660(v100, v47, *(_QWORD *)(v102 + 16));
      goto LABEL_59;
    }
    nullsub_1(v37, v40);
    v42 = sub_140001650(0x2000, 1);
    v41 = v87;
    if ( !v42 )
      sub_14196B2DB(1, 0x2000);
    *(_QWORD *)&v90 = 0x2000;
    *((_QWORD *)&v90 + 1) = v42;
    *(_QWORD *)&v91 = 0;
    BYTE8(v91) = 0;
    v92[0] = hObject;
    v43 = *(_QWORD *)(a4 + 8);
    v44 = *(_QWORD *)(a4 + 16);
    v108 = 1;
    sub_140A26690((unsigned int)v97, v43, v44, v100, v102, (__int64)&v90, (__int64)&off_141A693F8);
    if ( *(_QWORD *)v97 == -1 )
    {
      v108 = 1;
      v46 = sub_140CA17C0(&v90);
      if ( !v46 )
      {
        *(HANDLE *)&v97[32] = v92[0];
        *(_OWORD *)&v97[16] = v91;
        *(_OWORD *)v97 = v90;
        v55 = sub_140CA17C0(v97);
        if ( v55 )
        {
          v56 = *(void **)&v97[8];
          *(_OWORD *)v95 = *(_OWORD *)&v97[16];
          *(_QWORD *)&v95[16] = *(_QWORD *)&v97[32];
          if ( *(_QWORD *)v97 != -1 )
          {
            *(_OWORD *)&v97[16] = *(_OWORD *)v95;
            *(_QWORD *)&v97[32] = *(_QWORD *)&v95[16];
            *(_QWORD *)&v97[40] = v55;
            v108 = 0;
            sub_14068DD40(v97, *(_QWORD *)v97);
            *(_QWORD *)v95 = 2;
            *(_QWORD *)&v95[8] = v55;
            goto LABEL_55;
          }
        }
        else
        {
          v56 = *(void **)&v97[32];
          if ( *(_QWORD *)v97 )
          {
            v57 = *(void **)&v97[32];
            sub_140001660(*(_QWORD *)&v97[8], *(_QWORD *)v97, 1);
            v56 = v57;
          }
        }
        goto LABEL_87;
      }
      *(_QWORD *)v95 = 2;
      *(_QWORD *)&v95[8] = v46;
    }
    else
    {
      *(_QWORD *)&v95[88] = *(_QWORD *)&v97[88];
      *(_OWORD *)&v95[72] = *(_OWORD *)&v97[72];
      *(_OWORD *)&v95[56] = *(_OWORD *)&v97[56];
      *(_OWORD *)&v95[40] = *(_OWORD *)&v97[40];
      *(_OWORD *)&v95[24] = *(_OWORD *)&v97[24];
      *(_OWORD *)&v95[8] = *(_OWORD *)&v97[8];
      *(_QWORD *)v95 = *(_QWORD *)v97;
    }
    v111 = 1;
    v110 = 0;
    sub_14068DD40(&v90, v45);
    goto LABEL_55;
  }
  *(_QWORD *)v95 = 2;
  *(_QWORD *)&v95[8] = *(_QWORD *)&v97[8];
  CloseHandle(hObject);
  v39 = v103;
LABEL_61:
  v48 = sub_1416C4110(v27, v39);
  if ( v48 )
  {
    v105 = 1;
    v104 = v48;
    if ( (unsigned __int8)sub_140A4E2E0(v48) )
    {
      v49 = v104;
      v88 = v104;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v90 = &v88;
        *((_QWORD *)&v90 + 1) = sub_1416EA080;
        *(_QWORD *)v97 = aCodexmateLibCo_40;
        *(_QWORD *)&v97[8] = 68;
        *(_QWORD *)&v97[16] = aCodexmateLibCo_40;
        *(_QWORD *)&v97[24] = 68;
        *(_QWORD *)&v97[32] = &off_141A69118;
        sub_140AF72B0(&unk_141A690AA, &v90, 2, v97);
        v49 = v88;
      }
      v105 = 0;
      sub_14028F450(v49);
    }
    else
    {
      v105 = 0;
      sub_14028F450(v104);
    }
  }
LABEL_67:
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v95[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v95[64];
  v50 = *(_OWORD *)v95;
  v51 = *(_OWORD *)&v95[16];
  v52 = *(_OWORD *)&v95[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v95[48];
  *(_OWORD *)(a1 + 32) = v52;
  *(_OWORD *)(a1 + 16) = v51;
  *(_OWORD *)a1 = v50;
  if ( v82 )
    sub_140001660(v83, v82, 1);
  v53 = v99;
  if ( v94 )
    sub_140001660(v89, v94, 1);
  if ( v53 )
  {
    v32 = v101;
    v29 = v53;
    goto LABEL_24;
  }
  return a1;
}
