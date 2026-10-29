// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility_history.rs | ea 0x140a1d3e0 | successor of pre-update 0x14026fa40 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 __fastcall sub_140A1D3E0(__int64 a1, const char *a2, __int64 a3, _OWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
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
  __int64 v30; // rcx
  bool v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rdx
  void *v39; // rax
  HANDLE v40; // rcx
  __int128 v41; // kr00_16
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int64 v45; // rdx
  __int64 v46; // r12
  void *v47; // rcx
  void *v48; // r12
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rax
  void *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  void *v57; // rax
  __int64 v58; // [rsp+38h] [rbp-48h] BYREF
  __int128 v59; // [rsp+40h] [rbp-40h]
  __int128 v60; // [rsp+50h] [rbp-30h]
  const char **v61; // [rsp+60h] [rbp-20h]
  __int64 v62; // [rsp+68h] [rbp-18h]
  __int64 v63; // [rsp+70h] [rbp-10h]
  __int128 v64; // [rsp+78h] [rbp-8h]
  __int64 v65; // [rsp+88h] [rbp+8h]
  __int128 v66; // [rsp+90h] [rbp+10h]
  __int128 v67; // [rsp+A0h] [rbp+20h]
  const char **v68; // [rsp+B0h] [rbp+30h]
  __int128 v69; // [rsp+C0h] [rbp+40h]
  __int64 v70; // [rsp+D0h] [rbp+50h]
  __int128 v71; // [rsp+E0h] [rbp+60h]
  __int64 v72; // [rsp+F0h] [rbp+70h]
  __int64 v73; // [rsp+100h] [rbp+80h] BYREF
  void *v74; // [rsp+108h] [rbp+88h]
  __int64 v75; // [rsp+110h] [rbp+90h]
  int v76; // [rsp+11Ch] [rbp+9Ch] BYREF
  __int64 v77; // [rsp+124h] [rbp+A4h]
  int v78; // [rsp+12Ch] [rbp+ACh]
  _BYTE v79[13]; // [rsp+130h] [rbp+B0h]
  const char *v80; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v81; // [rsp+148h] [rbp+C8h]
  __int128 v82; // [rsp+150h] [rbp+D0h]
  __int64 v83; // [rsp+160h] [rbp+E0h]
  __int64 v84; // [rsp+168h] [rbp+E8h] BYREF
  int v85; // [rsp+170h] [rbp+F0h]
  double v86; // [rsp+174h] [rbp+F4h] BYREF
  const char *v87; // [rsp+180h] [rbp+100h] BYREF
  __m256i v88; // [rsp+188h] [rbp+108h] BYREF
  __int128 v89; // [rsp+1A8h] [rbp+128h]
  __int128 v90; // [rsp+1B8h] [rbp+138h]
  const char **v91; // [rsp+1C8h] [rbp+148h]
  __int64 v92; // [rsp+1D0h] [rbp+150h]
  __int64 v93; // [rsp+1D8h] [rbp+158h]
  __int128 v94; // [rsp+1E0h] [rbp+160h]
  __int64 v95; // [rsp+1F0h] [rbp+170h]
  __int64 v96; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v97; // [rsp+200h] [rbp+180h]
  __int64 v98; // [rsp+208h] [rbp+188h]
  HANDLE v99; // [rsp+218h] [rbp+198h]
  __int128 v100; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v101; // [rsp+230h] [rbp+1B0h]
  HANDLE v102[2]; // [rsp+240h] [rbp+1C0h]
  __int128 v103; // [rsp+250h] [rbp+1D0h]
  _BYTE v104[96]; // [rsp+260h] [rbp+1E0h]
  const char *v105; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v106; // [rsp+2C8h] [rbp+248h]
  __int64 v107; // [rsp+2D8h] [rbp+258h]
  _BYTE v108[96]; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v109; // [rsp+348h] [rbp+2C8h]
  __int64 v110; // [rsp+350h] [rbp+2D0h]
  __int64 v111; // [rsp+358h] [rbp+2D8h]
  HANDLE hObject; // [rsp+360h] [rbp+2E0h]
  char v113; // [rsp+369h] [rbp+2E9h]
  char v114; // [rsp+36Ah] [rbp+2EAh]
  char v115; // [rsp+36Bh] [rbp+2EBh]
  char v116; // [rsp+36Ch] [rbp+2ECh]
  char v117; // [rsp+36Dh] [rbp+2EDh]
  char v118; // [rsp+36Eh] [rbp+2EEh]
  char v119; // [rsp+36Fh] [rbp+2EFh]
  __int64 v120; // [rsp+370h] [rbp+2F0h]

  v120 = -2;
  sub_140A934F0(&v87, a2, a3);
  v8 = (__int64)v87;
  if ( v88.m256i_i64[3] == -1 )
    goto LABEL_4;
  v70 = v88.m256i_i64[2];
  v69 = *(_OWORD *)v88.m256i_i8;
  v66 = v89;
  v67 = v90;
  v68 = v91;
  v9 = v92;
  v10 = v93;
  v71 = v94;
  v72 = v95;
  if ( v88.m256i_i32[6] == 2 )
  {
    v8 = sub_1416A8370(0, aRolloutIsMissi_0, 18);
LABEL_4:
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v8;
    return a1;
  }
  v107 = v70;
  v106 = v69;
  v61 = v68;
  v60 = v67;
  v59 = v66;
  v64 = v71;
  v65 = v72;
  v105 = v87;
  v58 = v88.m256i_i64[3];
  v62 = v92;
  v63 = v93;
  sub_140A934F0(&v87, a2, a3);
  if ( v88.m256i_i64[3] == -1 )
  {
    v12 = (unsigned __int8)v87 & 3;
    v11 = (unsigned int)(v12 - 2);
    if ( (unsigned int)v11 >= 2 && ((unsigned __int8)v87 & 3) != 0 )
    {
      *(_QWORD *)&v108[8] = v87 - 1;
      v108[0] = 3;
      sub_1416EBAD0(&v108[8]);
    }
    goto LABEL_18;
  }
  if ( v88.m256i_i32[6] == 2 || (v13 = v87, v87 == (const char *)-1LL) )
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
  v14 = v88.m256i_i64[0];
  v15 = *(_OWORD *)&v88.m256i_u64[1];
  v16 = v88.m256i_i64[1];
  v17 = (__m128)*((unsigned __int64 *)&v90 + 1);
  v83 = v93;
  _mm_storel_ps((double *)&v84, (__m128)(unsigned __int64)v92);
  v85 = 1;
  _mm_storel_ps(&v86, v17);
  v80 = v13;
  v81 = v14;
  v82 = v15;
  if ( ((v83 == v10) & (unsigned __int8)sub_140222930(v14, v16, v106, *((_QWORD *)&v106 + 1))) != 1 || v84 != v9 )
  {
    LOBYTE(v19) = v83 == v10;
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
  v22 = sub_1416B19D0(v106, *((_QWORD *)&v106 + 1));
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
  sub_141597890(v108);
  v87 = v108;
  v88.m256i_i64[0] = (__int64)sub_1415989F0;
  sub_1416DAFA0(&v73, &unk_141A69092, &v87);
  hObject = v74;
  sub_1416B18A0((unsigned int)&v96, v22, v23, (_DWORD)v74, v75);
  if ( v73 )
    sub_140001660(hObject, v73, 1);
  v76 = 0;
  v77 = 0;
  v78 = 7;
  *(_QWORD *)v79 = 0;
  *(_QWORD *)&v79[5] = 0x100000001LL;
  v24 = sub_1416BFE10(&v76, v97, v98);
  hObject = v25;
  if ( v24 == 1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = hObject;
    goto LABEL_58;
  }
  v87 = a2;
  v88.m256i_i64[0] = a3;
  v88.m256i_i64[1] = (__int64)&v105;
  *(_QWORD *)&v94 = hObject;
  v29 = a4[1];
  *(_OWORD *)&v88.m256i_u64[2] = *a4;
  v89 = v29;
  *(_QWORD *)&v90 = &v96;
  *((_QWORD *)&v90 + 1) = &v58;
  v91 = &v80;
  v92 = v22;
  v93 = v23;
  v114 = 1;
  sub_140A92FF0(v108, a2, a3);
  v110 = *(_QWORD *)v108;
  if ( !*(_QWORD *)v108 )
  {
    *(_QWORD *)v104 = 2;
    *(_QWORD *)&v104[8] = *(_QWORD *)&v108[8];
    CloseHandle(hObject);
    goto LABEL_51;
  }
  v111 = *(_QWORD *)&v108[8];
  v119 = 1;
  v118 = 1;
  sub_1416DA570(v108);
  v30 = *(_QWORD *)&v108[8];
  v31 = *(_QWORD *)&v108[16] >= 0xAu
     && (*(_QWORD *)(*(_QWORD *)&v108[8] + *(_QWORD *)&v108[16] - 10LL) ^ 0x7A2E6C6E6F736A2ELL
       | *(unsigned __int16 *)(*(_QWORD *)&v108[8] + *(_QWORD *)&v108[16] - 2LL) ^ 0x7473LL) == 0;
  v32 = *(_QWORD *)v108;
  if ( *(__int64 *)v108 > 0 )
    sub_140001660(*(_QWORD *)&v108[8], *(_QWORD *)v108, 1);
  if ( !v31 )
  {
    nullsub_1(v30, v32);
    v33 = sub_140001650(0x2000, 1);
    if ( !v33 )
      sub_14196B2DB(1, 0x2000);
    *(_QWORD *)&v100 = 0x2000;
    *((_QWORD *)&v100 + 1) = v33;
    *(_QWORD *)&v101 = 0;
    BYTE8(v101) = 0;
    v102[0] = hObject;
    v34 = *(_QWORD *)(v111 + 112);
    v116 = 1;
    sub_140A26A60(
      (unsigned int)v108,
      (unsigned int)&v88.m256i_u32[4],
      v110,
      v34,
      (__int64)&v100,
      (__int64)sub_140A98A70);
    v36 = *(_QWORD *)&v108[8];
    if ( *(_QWORD *)v108 == -1 )
    {
      v116 = 1;
      v37 = sub_140CA17C0(&v100);
      if ( !v37 )
      {
        *(HANDLE *)&v108[32] = v102[0];
        *(_OWORD *)&v108[16] = v101;
        *(_OWORD *)v108 = v100;
        v46 = sub_140CA17C0(v108);
        if ( v46 )
        {
          v47 = *(void **)&v108[8];
          *(_OWORD *)v104 = *(_OWORD *)&v108[16];
          *(_QWORD *)&v104[16] = *(_QWORD *)&v108[32];
          if ( *(_QWORD *)v108 != -1 )
          {
            *(_OWORD *)&v108[16] = *(_OWORD *)v104;
            *(_QWORD *)&v108[32] = *(_QWORD *)&v104[16];
            *(_QWORD *)&v108[40] = v46;
            v116 = 0;
            sub_14068DD40(v108, *(_QWORD *)v108);
            *(_QWORD *)v104 = 2;
            *(_QWORD *)&v104[8] = v46;
            goto LABEL_46;
          }
        }
        else
        {
          v47 = *(void **)&v108[32];
          if ( *(_QWORD *)v108 )
          {
            v48 = *(void **)&v108[32];
            sub_140001660(*(_QWORD *)&v108[8], *(_QWORD *)v108, 1);
            v47 = v48;
          }
        }
        goto LABEL_79;
      }
      *(_QWORD *)v104 = 2;
      *(_QWORD *)&v104[8] = v37;
    }
    else
    {
      *(_OWORD *)&v104[80] = *(_OWORD *)&v108[80];
      *(_OWORD *)&v104[64] = *(_OWORD *)&v108[64];
      *(_OWORD *)&v104[48] = *(_OWORD *)&v108[48];
      *(_OWORD *)&v104[32] = *(_OWORD *)&v108[32];
      *(_OWORD *)&v104[16] = *(_OWORD *)&v108[16];
      *(_OWORD *)v104 = *(_OWORD *)v108;
    }
    v119 = 1;
    v118 = 0;
    sub_14068DD40(&v100, v35);
    goto LABEL_46;
  }
  v119 = 1;
  v118 = 0;
  sub_140C9FF40((unsigned int)v108, (_DWORD)hObject, 3, 1, 0);
  if ( *(_QWORD *)v108 == 2 )
  {
    *(_OWORD *)v104 = __PAIR128__(*(unsigned __int64 *)&v108[8], 2);
LABEL_46:
    if ( *(_QWORD *)v111 )
      (*(void (__fastcall **)(__int64))v111)(v110);
    v38 = *(_QWORD *)(v111 + 8);
    if ( v38 )
      sub_140001660(v110, v38, *(_QWORD *)(v111 + 16));
    goto LABEL_50;
  }
  v103 = *(_OWORD *)&v108[48];
  *(_OWORD *)v102 = *(_OWORD *)&v108[32];
  v101 = *(_OWORD *)&v108[16];
  v100 = *(_OWORD *)v108;
  v115 = 1;
  sub_140A92D70(v108, a2, a3);
  if ( *(_QWORD *)v108 != -1 )
  {
    *(_QWORD *)&v104[88] = *(_QWORD *)&v108[88];
    *(_OWORD *)&v104[73] = *(_OWORD *)&v108[73];
    *(_OWORD *)&v104[57] = *(_OWORD *)&v108[57];
    *(_OWORD *)&v104[41] = *(_OWORD *)&v108[41];
    *(_OWORD *)&v104[25] = *(_OWORD *)&v108[25];
    *(_OWORD *)&v104[9] = *(_OWORD *)&v108[9];
    *(_QWORD *)v104 = *(_QWORD *)v108;
    v104[8] = v108[8];
LABEL_39:
    if ( !(_BYTE)v100 )
      sub_1411D1520((char *)&v100 + 8);
    CloseHandle(v102[1]);
    if ( (_QWORD)v101 )
      sub_140001660(*((_QWORD *)&v101 + 1), v101, 1);
    goto LABEL_46;
  }
  if ( v108[8] == 1 )
  {
    v115 = 1;
    if ( sub_140A92B20(a2, a3) == 1 )
    {
      *(_QWORD *)v104 = 2;
      *(_QWORD *)&v104[8] = v45;
      goto LABEL_39;
    }
    v115 = 1;
    v49 = sub_1411D0DB0(&v100, 1, v45);
    if ( v49 )
    {
      *(_QWORD *)v104 = 2;
      *(_QWORD *)&v104[8] = v49;
      goto LABEL_39;
    }
  }
  v50 = *(_QWORD *)(v111 + 112);
  v115 = 1;
  sub_140A26A60((unsigned int)v108, (unsigned int)&v88.m256i_u32[4], v110, v50, (__int64)&v100, (__int64)sub_140CB0F20);
  v36 = *(_QWORD *)&v108[8];
  if ( *(_QWORD *)v108 != -1 )
  {
    *(_OWORD *)&v104[80] = *(_OWORD *)&v108[80];
    *(_OWORD *)&v104[64] = *(_OWORD *)&v108[64];
    *(_OWORD *)&v104[48] = *(_OWORD *)&v108[48];
    *(_OWORD *)&v104[32] = *(_OWORD *)&v108[32];
    *(_OWORD *)&v104[16] = *(_OWORD *)&v108[16];
    *(_OWORD *)v104 = *(_OWORD *)v108;
    goto LABEL_39;
  }
  *(_OWORD *)&v108[48] = v103;
  *(_OWORD *)&v108[32] = *(_OWORD *)v102;
  *(_OWORD *)&v108[16] = v101;
  *(_OWORD *)v108 = v100;
  v115 = 0;
  v51 = sub_140CA0080(v108);
  v47 = v52;
  if ( v51 == 1 )
  {
    *(_QWORD *)v104 = 2;
    *(_QWORD *)&v104[8] = v52;
    goto LABEL_46;
  }
LABEL_79:
  v99 = v47;
  *(_QWORD *)&v100 = v47;
  v117 = 1;
  v53 = sub_1416C43E0(v97, v98, HIDWORD(v64));
  if ( v53 || (v117 = 1, (v53 = sub_1416B21F0(&v100)) != 0) )
  {
    *(_QWORD *)v104 = 2;
    *(_QWORD *)&v104[8] = v53;
    CloseHandle(v99);
    goto LABEL_46;
  }
  CloseHandle(v99);
  v117 = 0;
  sub_1400249C0(v110, v111);
  v117 = 0;
  sub_1407C5250(v108, a2, a3);
  v109 = *(_QWORD *)v108;
  if ( *(_QWORD *)v108 == -1 )
    goto LABEL_90;
  if ( !(unsigned __int8)sub_140A97FE0(v108, &v80) )
  {
    if ( v109 )
      sub_140001660(*(_QWORD *)&v108[8], v109, 1);
LABEL_90:
    nullsub_1(v55, v54);
    v57 = (void *)sub_140001650(49, 1);
    if ( !v57 )
    {
      v117 = 0;
      sub_14196B2DB(1, 49);
    }
    qmemcpy(v57, "rollout changed during rewrite; history preserved", 49);
    *(_QWORD *)v104 = 10;
    *(_QWORD *)&v104[8] = 49;
    *(_QWORD *)&v104[16] = v57;
    *(_QWORD *)&v104[24] = 49;
    goto LABEL_50;
  }
  if ( v109 )
    sub_140001660(*(_QWORD *)&v108[8], v109, 1);
  v117 = 0;
  v56 = sub_1407D7960(v97, v98, v106, *((_QWORD *)&v106 + 1));
  if ( !v56 )
  {
    v117 = 0;
    sub_1407D8110(v22, v23);
    *(_QWORD *)&v108[4] = v62;
    *(_DWORD *)v108 = 1;
    v117 = 0;
    sub_1407F0EA0(v106, *((_QWORD *)&v106 + 1), v108);
    *(_QWORD *)&v104[8] = v36;
    *(_QWORD *)v104 = -1;
    goto LABEL_57;
  }
  *(_QWORD *)v104 = 2;
  *(_QWORD *)&v104[8] = v56;
LABEL_50:
  if ( *(_QWORD *)v104 != -1 )
  {
LABEL_51:
    v39 = (void *)sub_1416C4110(v97, v98);
    if ( v39 )
    {
      v113 = 1;
      hObject = v39;
      if ( (unsigned __int8)sub_140A4E2E0(v39) )
      {
        v40 = hObject;
        *(_QWORD *)&v100 = hObject;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v108 = &v100;
          *(_QWORD *)&v108[8] = sub_1416EA080;
          v87 = aCodexmateLibCo_40;
          v88.m256i_i64[0] = 68;
          v88.m256i_i64[1] = (__int64)aCodexmateLibCo_40;
          v88.m256i_i64[2] = 68;
          v88.m256i_i64[3] = (__int64)&off_141A69118;
          sub_140AF72B0(&unk_141A690AA, v108, 2, &v87);
          v40 = (HANDLE)v100;
        }
        v113 = 0;
        sub_14028F450(v40);
      }
      else
      {
        v113 = 0;
        sub_14028F450(hObject);
      }
    }
  }
LABEL_57:
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v104[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v104[64];
  v41 = *(_OWORD *)v104;
  v42 = *(_OWORD *)&v104[16];
  v43 = *(_OWORD *)&v104[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v104[48];
  *(_OWORD *)(a1 + 32) = v43;
  *(_OWORD *)(a1 + 16) = v42;
  *(_OWORD *)a1 = v41;
LABEL_58:
  if ( v96 )
    sub_140001660(v97, v96, 1);
LABEL_60:
  if ( v80 )
    sub_140001660(v81, v80, 1);
LABEL_62:
  if ( v105 )
    sub_140001660(v106, v105, 1);
  return a1;
}
