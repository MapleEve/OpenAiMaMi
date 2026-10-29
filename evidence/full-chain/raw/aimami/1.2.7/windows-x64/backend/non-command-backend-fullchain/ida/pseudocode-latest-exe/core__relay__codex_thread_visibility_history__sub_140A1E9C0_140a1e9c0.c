// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility_history.rs | ea 0x140a1e9c0 | successor of pre-update 0x14023da40 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.515, "str_ov": 0.4, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140A1E9C0(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 *v9; // r14
  __int64 *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  const char *v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __m128 v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rax
  void *v25; // rdx
  void *v26; // rax
  void *v27; // rax
  void *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 v31; // rcx
  bool v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  void *v40; // rax
  HANDLE v41; // rcx
  __int128 v42; // kr00_16
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int64 v46; // rdx
  __int64 v47; // r12
  void *v48; // rcx
  void *v49; // r12
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rax
  void *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  void *v58; // rax
  __int64 v59; // [rsp+38h] [rbp-48h] BYREF
  __int128 v60; // [rsp+40h] [rbp-40h]
  __int128 v61; // [rsp+50h] [rbp-30h]
  __int64 v62; // [rsp+60h] [rbp-20h]
  __int64 *v63; // [rsp+68h] [rbp-18h]
  __int64 *v64; // [rsp+70h] [rbp-10h]
  __int128 v65; // [rsp+78h] [rbp-8h]
  __int64 v66; // [rsp+88h] [rbp+8h]
  __int128 v67; // [rsp+90h] [rbp+10h]
  __int128 v68; // [rsp+A0h] [rbp+20h]
  __int64 v69; // [rsp+B0h] [rbp+30h]
  __int128 v70; // [rsp+C0h] [rbp+40h]
  __int64 v71; // [rsp+D0h] [rbp+50h]
  __int128 v72; // [rsp+E0h] [rbp+60h]
  __int64 v73; // [rsp+F0h] [rbp+70h]
  __int64 v74; // [rsp+F8h] [rbp+78h] BYREF
  void *v75; // [rsp+100h] [rbp+80h]
  __int64 v76; // [rsp+108h] [rbp+88h]
  int v77; // [rsp+114h] [rbp+94h] BYREF
  __int64 v78; // [rsp+11Ch] [rbp+9Ch]
  int v79; // [rsp+124h] [rbp+A4h]
  _BYTE v80[13]; // [rsp+128h] [rbp+A8h]
  const char *v81; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v82; // [rsp+140h] [rbp+C0h]
  __int128 v83; // [rsp+148h] [rbp+C8h]
  __int64 *v84; // [rsp+158h] [rbp+D8h]
  __int64 *v85; // [rsp+160h] [rbp+E0h] BYREF
  int v86; // [rsp+168h] [rbp+E8h]
  double v87; // [rsp+16Ch] [rbp+ECh] BYREF
  const char *v88; // [rsp+178h] [rbp+F8h] BYREF
  __m256i v89; // [rsp+180h] [rbp+100h] BYREF
  __int128 v90; // [rsp+1A0h] [rbp+120h]
  __int128 v91; // [rsp+1B0h] [rbp+130h]
  __int64 v92; // [rsp+1C0h] [rbp+140h]
  __int64 *v93; // [rsp+1C8h] [rbp+148h]
  __int64 *v94; // [rsp+1D0h] [rbp+150h]
  __int128 v95; // [rsp+1D8h] [rbp+158h]
  __int64 v96; // [rsp+1E8h] [rbp+168h]
  HANDLE v97; // [rsp+1F0h] [rbp+170h]
  __int64 v98; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v99; // [rsp+200h] [rbp+180h]
  __int64 v100; // [rsp+208h] [rbp+188h]
  HANDLE v101; // [rsp+218h] [rbp+198h]
  __int128 v102; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v103; // [rsp+230h] [rbp+1B0h]
  HANDLE v104[2]; // [rsp+240h] [rbp+1C0h]
  __int128 v105; // [rsp+250h] [rbp+1D0h]
  _BYTE v106[96]; // [rsp+260h] [rbp+1E0h]
  const char *v107; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v108; // [rsp+2C8h] [rbp+248h]
  __int64 v109; // [rsp+2D8h] [rbp+258h]
  _BYTE v110[96]; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v111; // [rsp+348h] [rbp+2C8h]
  __int64 v112; // [rsp+350h] [rbp+2D0h]
  __int64 v113; // [rsp+358h] [rbp+2D8h]
  HANDLE hObject; // [rsp+360h] [rbp+2E0h]
  char v115; // [rsp+369h] [rbp+2E9h]
  char v116; // [rsp+36Ah] [rbp+2EAh]
  char v117; // [rsp+36Bh] [rbp+2EBh]
  char v118; // [rsp+36Ch] [rbp+2ECh]
  char v119; // [rsp+36Dh] [rbp+2EDh]
  char v120; // [rsp+36Eh] [rbp+2EEh]
  char v121; // [rsp+36Fh] [rbp+2EFh]
  __int64 v122; // [rsp+370h] [rbp+2F0h]

  v122 = -2;
  sub_140A934F0(&v88, a2, a3);
  v8 = (__int64)v88;
  if ( v89.m256i_i64[3] == -1 )
    goto LABEL_4;
  v71 = v89.m256i_i64[2];
  v70 = *(_OWORD *)v89.m256i_i8;
  v67 = v90;
  v68 = v91;
  v69 = v92;
  v9 = v93;
  v10 = v94;
  v72 = v95;
  v73 = v96;
  if ( v89.m256i_i32[6] == 2 )
  {
    v8 = sub_1416A8370(0, aRolloutIsMissi_0, 18);
LABEL_4:
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v8;
    return a1;
  }
  v109 = v71;
  v108 = v70;
  v62 = v69;
  v61 = v68;
  v60 = v67;
  v65 = v72;
  v66 = v73;
  v107 = v88;
  v59 = v89.m256i_i64[3];
  v63 = v93;
  v64 = v94;
  sub_140A934F0(&v88, a2, a3);
  if ( v89.m256i_i64[3] == -1 )
  {
    v12 = (unsigned __int8)v88 & 3;
    v11 = (unsigned int)(v12 - 2);
    if ( (unsigned int)v11 >= 2 && ((unsigned __int8)v88 & 3) != 0 )
    {
      *(_QWORD *)&v110[8] = v88 - 1;
      v110[0] = 3;
      sub_1416EBAD0(&v110[8]);
    }
    goto LABEL_18;
  }
  if ( v89.m256i_i32[6] == 2 || (v13 = v88, v88 == (const char *)-1LL) )
  {
LABEL_18:
    nullsub_1(v12, v11);
    v26 = (void *)sub_140001650(38, 1);
    if ( !v26 )
      sub_14196B2DB(1, 38);
    qmemcpy(v26, "cannot snapshot rollout before writing", 38);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 38;
    *(_QWORD *)(a1 + 16) = v26;
    *(_QWORD *)(a1 + 24) = 38;
    goto LABEL_62;
  }
  v14 = v89.m256i_i64[0];
  v15 = *(_OWORD *)&v89.m256i_u64[1];
  v16 = v89.m256i_i64[1];
  v17 = (__m128)*((unsigned __int64 *)&v91 + 1);
  v84 = v94;
  _mm_storel_ps((double *)&v85, (__m128)(unsigned __int64)v93);
  v86 = 1;
  _mm_storel_ps(&v87, v17);
  v81 = v13;
  v82 = v14;
  v83 = v15;
  if ( ((v84 == v10) & (unsigned __int8)sub_140222930(v14, v16, v108, *((_QWORD *)&v108 + 1))) != 1 || v85 != v9 )
  {
    LOBYTE(v19) = v84 == v10;
    nullsub_1(v19, v18);
    v27 = (void *)sub_140001650(61, 1);
    if ( !v27 )
      sub_14196B2DB(1, 61);
    qmemcpy(v27, "rollout representation changed before writing; retry required", 61);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 61;
    *(_QWORD *)(a1 + 16) = v27;
    *(_QWORD *)(a1 + 24) = 61;
    goto LABEL_60;
  }
  v22 = sub_1416B19D0(v108, *((_QWORD *)&v108 + 1));
  if ( !v22 )
  {
    nullsub_1(v21, v20);
    v28 = (void *)sub_140001650(21, 1);
    if ( !v28 )
      sub_14196B2DB(1, 21);
    qmemcpy(v28, "rollout has no parent", 21);
    *(_QWORD *)(a1 + 24) = 21;
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 21;
    *(_QWORD *)(a1 + 16) = v28;
    goto LABEL_60;
  }
  v23 = v20;
  sub_141597890(v110);
  v88 = v110;
  v89.m256i_i64[0] = (__int64)sub_1415989F0;
  sub_1416DAFA0(&v74, &unk_141A69092, &v88);
  hObject = v75;
  sub_1416B18A0((unsigned int)&v98, v22, v23, (_DWORD)v75, v76);
  if ( v74 )
    sub_140001660(hObject, v74, 1);
  v77 = 0;
  v78 = 0;
  v79 = 7;
  *(_QWORD *)v80 = 0;
  *(_QWORD *)&v80[5] = 0x100000001LL;
  v24 = sub_1416BFE10(&v77, v99, v100);
  hObject = v25;
  if ( v24 == 1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = hObject;
    goto LABEL_58;
  }
  v88 = a2;
  v89.m256i_i64[0] = a3;
  v89.m256i_i64[1] = (__int64)&v107;
  v97 = hObject;
  v29 = *(_OWORD *)(a4 + 16);
  v30 = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v89.m256i_u64[2] = *(_OWORD *)a4;
  v90 = v29;
  v91 = v30;
  v92 = *(_QWORD *)(a4 + 48);
  v93 = &v98;
  v94 = &v59;
  *(_QWORD *)&v95 = &v81;
  *((_QWORD *)&v95 + 1) = v22;
  v96 = v23;
  v116 = 1;
  sub_140A92FF0(v110, a2, a3);
  v112 = *(_QWORD *)v110;
  if ( !*(_QWORD *)v110 )
  {
    *(_QWORD *)v106 = 2;
    *(_QWORD *)&v106[8] = *(_QWORD *)&v110[8];
    CloseHandle(hObject);
    goto LABEL_51;
  }
  v113 = *(_QWORD *)&v110[8];
  v121 = 1;
  v120 = 1;
  sub_1416DA570(v110);
  v31 = *(_QWORD *)&v110[8];
  v32 = *(_QWORD *)&v110[16] >= 0xAu
     && (*(_QWORD *)(*(_QWORD *)&v110[8] + *(_QWORD *)&v110[16] - 10LL) ^ 0x7A2E6C6E6F736A2ELL
       | *(unsigned __int16 *)(*(_QWORD *)&v110[8] + *(_QWORD *)&v110[16] - 2LL) ^ 0x7473LL) == 0;
  v33 = *(_QWORD *)v110;
  if ( *(__int64 *)v110 > 0 )
    sub_140001660(*(_QWORD *)&v110[8], *(_QWORD *)v110, 1);
  if ( !v32 )
  {
    nullsub_1(v31, v33);
    v34 = sub_140001650(0x2000, 1);
    if ( !v34 )
      sub_14196B2DB(1, 0x2000);
    *(_QWORD *)&v102 = 0x2000;
    *((_QWORD *)&v102 + 1) = v34;
    *(_QWORD *)&v103 = 0;
    BYTE8(v103) = 0;
    v104[0] = hObject;
    v35 = *(_QWORD *)(v113 + 112);
    v118 = 1;
    sub_140A279F0(
      (unsigned int)v110,
      (unsigned int)&v89.m256i_u32[4],
      v112,
      v35,
      (__int64)&v102,
      (__int64)sub_140A98A70);
    v37 = *(_QWORD *)&v110[8];
    if ( *(_QWORD *)v110 == -1 )
    {
      v118 = 1;
      v38 = sub_140CA17C0(&v102);
      if ( !v38 )
      {
        *(HANDLE *)&v110[32] = v104[0];
        *(_OWORD *)&v110[16] = v103;
        *(_OWORD *)v110 = v102;
        v47 = sub_140CA17C0(v110);
        if ( v47 )
        {
          v48 = *(void **)&v110[8];
          *(_OWORD *)v106 = *(_OWORD *)&v110[16];
          *(_QWORD *)&v106[16] = *(_QWORD *)&v110[32];
          if ( *(_QWORD *)v110 != -1 )
          {
            *(_OWORD *)&v110[16] = *(_OWORD *)v106;
            *(_QWORD *)&v110[32] = *(_QWORD *)&v106[16];
            *(_QWORD *)&v110[40] = v47;
            v118 = 0;
            sub_14068DD40(v110, *(_QWORD *)v110);
            *(_QWORD *)v106 = 2;
            *(_QWORD *)&v106[8] = v47;
            goto LABEL_46;
          }
        }
        else
        {
          v48 = *(void **)&v110[32];
          if ( *(_QWORD *)v110 )
          {
            v49 = *(void **)&v110[32];
            sub_140001660(*(_QWORD *)&v110[8], *(_QWORD *)v110, 1);
            v48 = v49;
          }
        }
        goto LABEL_79;
      }
      *(_QWORD *)v106 = 2;
      *(_QWORD *)&v106[8] = v38;
    }
    else
    {
      *(_OWORD *)&v106[80] = *(_OWORD *)&v110[80];
      *(_OWORD *)&v106[64] = *(_OWORD *)&v110[64];
      *(_OWORD *)&v106[48] = *(_OWORD *)&v110[48];
      *(_OWORD *)&v106[32] = *(_OWORD *)&v110[32];
      *(_OWORD *)&v106[16] = *(_OWORD *)&v110[16];
      *(_OWORD *)v106 = *(_OWORD *)v110;
    }
    v121 = 1;
    v120 = 0;
    sub_14068DD40(&v102, v36);
    goto LABEL_46;
  }
  v121 = 1;
  v120 = 0;
  sub_140C9FF40((unsigned int)v110, (_DWORD)hObject, 3, 1, 0);
  if ( *(_QWORD *)v110 == 2 )
  {
    *(_OWORD *)v106 = __PAIR128__(*(unsigned __int64 *)&v110[8], 2);
LABEL_46:
    if ( *(_QWORD *)v113 )
      (*(void (__fastcall **)(__int64))v113)(v112);
    v39 = *(_QWORD *)(v113 + 8);
    if ( v39 )
      sub_140001660(v112, v39, *(_QWORD *)(v113 + 16));
    goto LABEL_50;
  }
  v105 = *(_OWORD *)&v110[48];
  *(_OWORD *)v104 = *(_OWORD *)&v110[32];
  v103 = *(_OWORD *)&v110[16];
  v102 = *(_OWORD *)v110;
  v117 = 1;
  sub_140A92D70(v110, a2, a3);
  if ( *(_QWORD *)v110 != -1 )
  {
    *(_QWORD *)&v106[88] = *(_QWORD *)&v110[88];
    *(_OWORD *)&v106[73] = *(_OWORD *)&v110[73];
    *(_OWORD *)&v106[57] = *(_OWORD *)&v110[57];
    *(_OWORD *)&v106[41] = *(_OWORD *)&v110[41];
    *(_OWORD *)&v106[25] = *(_OWORD *)&v110[25];
    *(_OWORD *)&v106[9] = *(_OWORD *)&v110[9];
    *(_QWORD *)v106 = *(_QWORD *)v110;
    v106[8] = v110[8];
LABEL_39:
    if ( !(_BYTE)v102 )
      sub_1411D1520((char *)&v102 + 8);
    CloseHandle(v104[1]);
    if ( (_QWORD)v103 )
      sub_140001660(*((_QWORD *)&v103 + 1), v103, 1);
    goto LABEL_46;
  }
  if ( v110[8] == 1 )
  {
    v117 = 1;
    if ( sub_140A92B20(a2, a3) == 1 )
    {
      *(_QWORD *)v106 = 2;
      *(_QWORD *)&v106[8] = v46;
      goto LABEL_39;
    }
    v117 = 1;
    v50 = sub_1411D0DB0(&v102, 1, v46);
    if ( v50 )
    {
      *(_QWORD *)v106 = 2;
      *(_QWORD *)&v106[8] = v50;
      goto LABEL_39;
    }
  }
  v51 = *(_QWORD *)(v113 + 112);
  v117 = 1;
  sub_140A279F0((unsigned int)v110, (unsigned int)&v89.m256i_u32[4], v112, v51, (__int64)&v102, (__int64)sub_140CB0F20);
  v37 = *(_QWORD *)&v110[8];
  if ( *(_QWORD *)v110 != -1 )
  {
    *(_OWORD *)&v106[80] = *(_OWORD *)&v110[80];
    *(_OWORD *)&v106[64] = *(_OWORD *)&v110[64];
    *(_OWORD *)&v106[48] = *(_OWORD *)&v110[48];
    *(_OWORD *)&v106[32] = *(_OWORD *)&v110[32];
    *(_OWORD *)&v106[16] = *(_OWORD *)&v110[16];
    *(_OWORD *)v106 = *(_OWORD *)v110;
    goto LABEL_39;
  }
  *(_OWORD *)&v110[48] = v105;
  *(_OWORD *)&v110[32] = *(_OWORD *)v104;
  *(_OWORD *)&v110[16] = v103;
  *(_OWORD *)v110 = v102;
  v117 = 0;
  v52 = sub_140CA0080(v110);
  v48 = v53;
  if ( v52 == 1 )
  {
    *(_QWORD *)v106 = 2;
    *(_QWORD *)&v106[8] = v53;
    goto LABEL_46;
  }
LABEL_79:
  v101 = v48;
  *(_QWORD *)&v102 = v48;
  v119 = 1;
  v54 = sub_1416C43E0(v99, v100, HIDWORD(v65));
  if ( v54 || (v119 = 1, (v54 = sub_1416B21F0(&v102)) != 0) )
  {
    *(_QWORD *)v106 = 2;
    *(_QWORD *)&v106[8] = v54;
    CloseHandle(v101);
    goto LABEL_46;
  }
  CloseHandle(v101);
  v119 = 0;
  sub_1400249C0(v112, v113);
  v119 = 0;
  sub_1407C5250(v110, a2, a3);
  v111 = *(_QWORD *)v110;
  if ( *(_QWORD *)v110 == -1 )
    goto LABEL_90;
  if ( !(unsigned __int8)sub_140A97FE0(v110, &v81) )
  {
    if ( v111 )
      sub_140001660(*(_QWORD *)&v110[8], v111, 1);
LABEL_90:
    nullsub_1(v56, v55);
    v58 = (void *)sub_140001650(49, 1);
    if ( !v58 )
    {
      v119 = 0;
      sub_14196B2DB(1, 49);
    }
    qmemcpy(v58, "rollout changed during rewrite; history preserved", 49);
    *(_QWORD *)v106 = 10;
    *(_QWORD *)&v106[8] = 49;
    *(_QWORD *)&v106[16] = v58;
    *(_QWORD *)&v106[24] = 49;
    goto LABEL_50;
  }
  if ( v111 )
    sub_140001660(*(_QWORD *)&v110[8], v111, 1);
  v119 = 0;
  v57 = sub_1407D7960(v99, v100, v108, *((_QWORD *)&v108 + 1));
  if ( !v57 )
  {
    v119 = 0;
    sub_1407D8110(v22, v23);
    *(_QWORD *)&v110[4] = v63;
    *(_DWORD *)v110 = 1;
    v119 = 0;
    sub_1407F0EA0(v108, *((_QWORD *)&v108 + 1), v110);
    *(_QWORD *)&v106[8] = v37;
    *(_QWORD *)v106 = -1;
    goto LABEL_57;
  }
  *(_QWORD *)v106 = 2;
  *(_QWORD *)&v106[8] = v57;
LABEL_50:
  if ( *(_QWORD *)v106 != -1 )
  {
LABEL_51:
    v40 = (void *)sub_1416C4110(v99, v100);
    if ( v40 )
    {
      v115 = 1;
      hObject = v40;
      if ( (unsigned __int8)sub_140A4E2E0(v40) )
      {
        v41 = hObject;
        *(_QWORD *)&v102 = hObject;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v110 = &v102;
          *(_QWORD *)&v110[8] = sub_1416EA080;
          v88 = aCodexmateLibCo_40;
          v89.m256i_i64[0] = 68;
          v89.m256i_i64[1] = (__int64)aCodexmateLibCo_40;
          v89.m256i_i64[2] = 68;
          v89.m256i_i64[3] = (__int64)&off_141A69118;
          sub_140AF72B0(&unk_141A690AA, v110, 2, &v88);
          v41 = (HANDLE)v102;
        }
        v115 = 0;
        sub_14028F450(v41);
      }
      else
      {
        v115 = 0;
        sub_14028F450(hObject);
      }
    }
  }
LABEL_57:
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v106[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v106[64];
  v42 = *(_OWORD *)v106;
  v43 = *(_OWORD *)&v106[16];
  v44 = *(_OWORD *)&v106[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v106[48];
  *(_OWORD *)(a1 + 32) = v44;
  *(_OWORD *)(a1 + 16) = v43;
  *(_OWORD *)a1 = v42;
LABEL_58:
  if ( v98 )
    sub_140001660(v99, v98, 1);
LABEL_60:
  if ( v81 )
    sub_140001660(v82, v81, 1);
LABEL_62:
  if ( v107 )
    sub_140001660(v108, v107, 1);
  return a1;
}
