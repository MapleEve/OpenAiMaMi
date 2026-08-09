// Pseudocode for refresh_single_account_usage (EA: 0x140d70840, size: 0x1026)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// Tauri命令handler:按accountKey刷新单个账号用量。归属:锚src\commands\accounts.rs。
char __fastcall refresh_single_account_usage(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  char v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // r13d
  unsigned int v13; // edi
  __int64 v14; // r12
  __int64 *v15; // rcx
  __int64 *v16; // rdi
  __int64 *v17; // rsi
  __int64 v18; // r14
  _QWORD *v19; // r15
  __int64 v20; // rax
  unsigned __int8 v21; // di
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int128 v24; // xmm6
  char v25; // of
  volatile signed __int64 *v26; // r14
  __int64 v27; // rt0
  volatile signed __int64 *v28; // r15
  __int64 v29; // rt0
  char v30; // bl
  _BYTE *v31; // r15
  const char *v32; // rsi
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r15
  const char *v40; // r13
  unsigned __int64 v41; // rdi
  _BYTE *v42; // rdx
  char v43; // cl
  char result; // al
  __int64 v45; // r14
  char *v46; // r14
  __int64 v47; // rbx
  char *v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 *v59; // rcx
  __int64 *v60; // r13
  __int64 v61; // rdi
  __int64 v62; // rdx
  _QWORD *v63; // rsi
  __int64 v64; // [rsp+20h] [rbp-60h]
  _BYTE v65[856]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v66[856]; // [rsp+388h] [rbp+308h] BYREF
  _BYTE v67[176]; // [rsp+6E0h] [rbp+660h] BYREF
  _QWORD v68[107]; // [rsp+790h] [rbp+710h] BYREF
  __int128 v69; // [rsp+AE8h] [rbp+A68h] BYREF
  __int64 v70; // [rsp+AF8h] [rbp+A78h]
  _BYTE v71[184]; // [rsp+E40h] [rbp+DC0h] BYREF
  const char *v72; // [rsp+EF8h] [rbp+E78h] BYREF
  __int128 v73; // [rsp+F00h] [rbp+E80h]
  __int64 v74; // [rsp+F10h] [rbp+E90h]
  __int64 v75; // [rsp+F18h] [rbp+E98h]
  __int64 v76; // [rsp+F20h] [rbp+EA0h]
  __int64 v77; // [rsp+F28h] [rbp+EA8h]
  __int128 v78; // [rsp+1250h] [rbp+11D0h] BYREF
  const char *v79; // [rsp+1260h] [rbp+11E0h]
  __int64 v80; // [rsp+1268h] [rbp+11E8h]
  unsigned __int64 v81; // [rsp+1270h] [rbp+11F0h]
  _OWORD v82[54]; // [rsp+1278h] [rbp+11F8h] BYREF
  _BYTE v83[136]; // [rsp+15D8h] [rbp+1558h] BYREF
  volatile signed __int64 *v84; // [rsp+1660h] [rbp+15E0h]
  volatile signed __int64 *v85; // [rsp+1668h] [rbp+15E8h]
  const char *v86; // [rsp+1670h] [rbp+15F0h] BYREF
  __int64 v87; // [rsp+1678h] [rbp+15F8h]
  const char *v88; // [rsp+1680h] [rbp+1600h]
  __int64 v89; // [rsp+1688h] [rbp+1608h]
  _BYTE v90[24]; // [rsp+1690h] [rbp+1610h] BYREF
  __int128 v91; // [rsp+16A8h] [rbp+1628h]
  __int128 v92; // [rsp+16B8h] [rbp+1638h]
  __int128 v93; // [rsp+16C8h] [rbp+1648h]
  __int128 v94; // [rsp+16D8h] [rbp+1658h]
  __int128 v95; // [rsp+16E8h] [rbp+1668h]
  __int128 v96; // [rsp+16F8h] [rbp+1678h]
  __int128 v97; // [rsp+1708h] [rbp+1688h]
  __int64 v98; // [rsp+1718h] [rbp+1698h]
  char *v99; // [rsp+19F0h] [rbp+1970h]
  const char *v100; // [rsp+19F8h] [rbp+1978h]
  __int64 v101; // [rsp+1A00h] [rbp+1980h]
  _QWORD v102[2]; // [rsp+1A08h] [rbp+1988h] BYREF
  __int128 v103; // [rsp+1A18h] [rbp+1998h] BYREF
  __int64 v104; // [rsp+1A28h] [rbp+19A8h]
  __int64 v105; // [rsp+1A30h] [rbp+19B0h] BYREF
  char v106; // [rsp+1A38h] [rbp+19B8h]
  int v107; // [rsp+1A39h] [rbp+19B9h]
  __int16 v108; // [rsp+1A3Dh] [rbp+19BDh]
  char v109; // [rsp+1A3Fh] [rbp+19BFh]
  __int64 v110; // [rsp+1A40h] [rbp+19C0h]
  __int64 v111; // [rsp+1A48h] [rbp+19C8h]
  __int64 v112; // [rsp+1A50h] [rbp+19D0h]
  __int64 v113; // [rsp+1A58h] [rbp+19D8h]
  const char *v114; // [rsp+1A60h] [rbp+19E0h]
  __int64 v115; // [rsp+1A68h] [rbp+19E8h]
  __int64 v116; // [rsp+1A70h] [rbp+19F0h]
  __int64 v117; // [rsp+1A78h] [rbp+19F8h]
  char *v118; // [rsp+1A80h] [rbp+1A00h]
  __int64 *v119; // [rsp+1A88h] [rbp+1A08h]
  __int64 v120; // [rsp+1A90h] [rbp+1A10h]
  char v121; // [rsp+1A9Fh] [rbp+1A1Fh] BYREF
  const char *v122; // [rsp+1AA0h] [rbp+1A20h]
  char *v123; // [rsp+1AA8h] [rbp+1A28h]
  _QWORD *v124; // [rsp+1AB0h] [rbp+1A30h]
  __int64 *v125; // [rsp+1AB8h] [rbp+1A38h]
  __int64 v126; // [rsp+1AC0h] [rbp+1A40h]
  const char *v127; // [rsp+1AC8h] [rbp+1A48h]
  char *v128; // [rsp+1AD0h] [rbp+1A50h]
  __int64 v129; // [rsp+1AD8h] [rbp+1A58h]
  char v130; // [rsp+1AE7h] [rbp+1A67h]
  __int64 v131; // [rsp+1AE8h] [rbp+1A68h]

  v131 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 4880);
  v129 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 4881) = 257;
      *(_BYTE *)(a1 + 4883) = 1;
      v5 = a1 + 2632;
      sub_14172B820(a1 + 2632, a1 + 392, 2240);
      switch ( *(_BYTE *)(v3 + 4864) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_79;
        case 2:
          goto LABEL_78;
        case 3:
          goto LABEL_11;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 2632;
      switch ( *(_BYTE *)(a1 + 4864) )
      {
        case 0:
LABEL_4:
          v77 = 0;
          v72 = aRefreshSingleA;
          *(_QWORD *)&v73 = 28;
          *((_QWORD *)&v73 + 1) = aApp_4;
          v74 = 3;
          v126 = v5;
          v75 = v5;
          v125 = (__int64 *)(v3 + 3152);
          v76 = v3 + 3152;
          sub_1401A9630((__int64)&v86, (__int64)&v72);
          v6 = (unsigned __int64)((HIBYTE(v87) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v87 + 5)) << 32;
          v7 = v6 | *(unsigned int *)((char *)&v87 + 1);
          v8 = v87;
          v9 = (__int64)v88;
          v10 = v89;
          v11 = *(_QWORD *)v90;
          if ( v86 != (const char *)-1LL )
          {
            v82[6] = v96;
            v82[5] = v95;
            v82[4] = v94;
            v82[3] = v93;
            v82[2] = v92;
            v82[1] = v91;
            v82[0] = *(_OWORD *)&v90[8];
            *(_DWORD *)((char *)&v78 + 9) = *(_DWORD *)((char *)&v87 + 1);
            HIBYTE(v78) = (v6 | *(unsigned int *)((char *)&v87 + 1)) >> 48;
            *(_WORD *)((char *)&v78 + 13) = WORD2(v7);
            v79 = v88;
            v80 = v89;
            v81 = *(_QWORD *)v90;
            *(_QWORD *)&v78 = v86;
            BYTE8(v78) = v87;
            *(_QWORD *)&v90[16] = 0;
            v86 = aRefreshSingleA;
            v87 = 28;
            v88 = aAccountkey_6;
            v89 = 10;
            *(_QWORD *)v90 = v126;
            *(_QWORD *)&v90[8] = v125;
            sub_140955980(&v72, &v86);
            v8 = (char)v72;
            if ( (_BYTE)v72 == 0xFF )
            {
              v22 = v74;
              v3 = v129;
              v23 = v129 + 3176;
              v24 = v73;
              sub_14172B820(v129 + 3176, &v78, 152);
              *(_OWORD *)(v3 + 3328) = v24;
              *(_QWORD *)(v3 + 3344) = v22;
              *(_BYTE *)(v3 + 3728) = 0;
              v18 = v3 + 3736;
              sub_14172B820(v3 + 3736, v23, 560);
              v17 = (__int64 *)(v3 + 4856);
              *(_BYTE *)(v3 + 4856) = 0;
              v5 = v126;
LABEL_17:
              v19 = (_QWORD *)(v3 + 4296);
              sub_14172B820(v3 + 4296, v18, 560);
              switch ( *(_BYTE *)(v3 + 4848) )
              {
                case 0:
                  goto LABEL_18;
                case 1:
                  goto LABEL_81;
                case 2:
                  goto LABEL_80;
                case 3:
                  goto LABEL_21;
              }
            }
            v12 = HIBYTE(v72);
            v13 = *(unsigned __int16 *)((char *)&v72 + 5);
            v14 = *(unsigned int *)((char *)&v72 + 1);
            v10 = *((_QWORD *)&v73 + 1);
            v9 = v73;
            v11 = v74;
            sub_140203A20(&v78);
            v7 = ((unsigned __int64)((v12 << 16) | v13) << 32) | v14;
          }
          sub_140CAB140(v126);
          if ( *v125 == -1 )
          {
            v21 = 1;
            goto LABEL_71;
          }
          v124 = (_QWORD *)(v129 + 3160);
          v15 = *(__int64 **)(v129 + 3160);
          v127 = *(const char **)(v129 + 3168);
          v128 = nullptr;
          v119 = v15;
          while ( v127 != v128 )
          {
            ++v128;
            v16 = v15 + 12;
            sub_140401FB0();
            v15 = v16;
          }
          v20 = *v125;
          v21 = 1;
          if ( !*v125 )
            goto LABEL_71;
          goto LABEL_70;
        case 1:
LABEL_79:
          v126 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_78:
          v126 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_11;
      }
  }
LABEL_11:
  v17 = (__int64 *)(v3 + 4856);
  v18 = v3 + 3736;
  switch ( *(_BYTE *)(v3 + 4856) )
  {
    case 0:
      goto LABEL_17;
    case 1:
      v126 = v5;
      v116 = v3 + 4856;
      v115 = v3 + 3736;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v126 = v5;
      v116 = v3 + 4856;
      v115 = v3 + 3736;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v19 = (_QWORD *)(v3 + 4296);
      switch ( *(_BYTE *)(v3 + 4848) )
      {
        case 0:
LABEL_18:
          v120 = v18;
          v125 = v17;
          *(_WORD *)(v3 + 4849) = 0;
          v124 = v19;
          sub_14172B820(v3 + 4472, v19, 152);
          *(_OWORD *)(v3 + 4624) = *(_OWORD *)(v3 + 4448);
          *(_QWORD *)(v3 + 4640) = *(_QWORD *)(v3 + 4464);
          sub_1401A9D00(&v86, v3 + 4472);
          v26 = *(volatile signed __int64 **)(v3 + 4608);
          v27 = _InterlockedIncrement64(v26);
          if ( (v27 < 0) ^ v25 | (v27 == 0)
            || (v126 = v5,
                v28 = *(volatile signed __int64 **)(v3 + 4616),
                v29 = _InterlockedIncrement64(v28),
                (v29 < 0) ^ v25 | (v29 == 0)) )
          {
            BUG();
          }
          sub_14172B820(v83, &v86, 136);
          v84 = v26;
          v85 = v28;
          *(_BYTE *)(v3 + 4850) = 1;
          sub_141543F00(&v103, v3 + 4624);
          *(_BYTE *)(v129 + 4849) = 1;
          v30 = sub_140BEC420(v3 + 4472);
          v31 = (_BYTE *)v129;
          *(_WORD *)(v129 + 4849) = 0;
          sub_14172B820(&v86, v83, 152);
          v97 = v103;
          v98 = v104;
          sub_14172B820(v67, &v86, 176);
          v32 = v31 + 4648;
          sub_14172B820(v31 + 4648, v67, 176);
          v31[4824] = v30;
          v128 = v31 + 4840;
          v31[4840] = 0;
LABEL_22:
          v127 = v32;
          sub_14172B820(v71, v32, 184);
          v33 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v130 = 1;
            v63 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v33 = v63;
          }
          if ( *((_DWORD *)v33 + 4) == 2 )
          {
            v34 = 704;
            if ( *(_BYTE *)v33 )
              v34 = 472;
            v35 = v33[1] + v34;
            v130 = 0;
            v36 = sub_14085C750(v35, v33, v71, &off_1417EBF48);
          }
          else
          {
            v37 = 704;
            if ( *((_BYTE *)v33 + 64) )
              v37 = 472;
            v38 = v33[9] + v37;
            v130 = 0;
            v36 = sub_14085C750(v38, v33 + 8, v71, &off_1417EBF30);
          }
          v3 = v129;
          *(_QWORD *)(v129 + 4832) = v36;
LABEL_33:
          v119 = (__int64 *)(v3 + 4832);
          sub_140505A30(&v86, v3 + 4832, a2);
          v39 = (__int64)v86;
          if ( v86 == (const char *)-3LL )
          {
            v42 = (_BYTE *)v129;
            *(_BYTE *)(v129 + 4840) = 3;
            v42[4848] = 3;
            v42[4856] = 3;
            v42[4864] = 3;
            v43 = 3;
            result = 1;
            goto LABEL_72;
          }
          if ( (_DWORD)v86 == -2 )
          {
            v40 = (const char *)v87;
            v11 = (__int64)v88;
            v41 = 0x800000000000000CuLL;
            v7 = v89;
          }
          else
          {
            v41 = v87;
            v40 = v88;
            v11 = v89;
            v7 = *(_QWORD *)v90;
            sub_14172B820(v68, &v90[8], 856);
            v118 = v99;
            v114 = v100;
            v113 = v101;
          }
          sub_14172B820(&v69, v68, 856);
          v45 = *v119;
          v123 = v128;
          v122 = v127;
          if ( (unsigned __int8)sub_141398090(v45) )
          {
            v123 = v128;
            v122 = v127;
            sub_14139A2E0(v45);
          }
          if ( (_DWORD)v39 == -2 )
          {
            v86 = (const char *)v41;
            v87 = (__int64)v40;
            v88 = (const char *)v11;
            v89 = v7;
            *(_OWORD *)v90 = v69;
            v102[0] = &v86;
            v102[1] = sub_1412DDF00;
            sub_141543AF0(v68, &unk_1418862D0, v102);
            v123 = v128;
            v122 = v127;
            sub_140CAB2C0(&v86);
            v46 = (char *)v68[0];
            v40 = (const char *)v68[1];
            v11 = v68[2];
            *v128 = 1;
LABEL_45:
            v49 = v129;
            *(_BYTE *)(v129 + 4849) = 0;
            *(_BYTE *)(v49 + 4850) = 0;
            v50 = *(_QWORD *)(v49 + 4624);
            if ( v50 )
              sub_140001660(*(_QWORD *)(v49 + 4632), v50, 1);
            sub_140203A20(v49 + 4472);
            v39 = -1;
            goto LABEL_52;
          }
          sub_14172B820(&v72, &v69, 856);
          *v128 = 1;
          v46 = (char *)v41;
          if ( (_DWORD)v39 == -1 )
            goto LABEL_45;
          v87 = v41;
          v88 = v40;
          v89 = v11;
          v86 = (const char *)v39;
          *(_QWORD *)v90 = v7;
          sub_14172B820(&v90[8], &v72, 856);
          v47 = v129 + 4472;
          sub_140BEB110(
            v129 + 4472,
            (unsigned int)&v86,
            (unsigned int)"account",
            7,
            *(_QWORD *)(v129 + 4632),
            *(_QWORD *)(v129 + 4640));
          v48 = v118;
          if ( v118 == (char *)-1LL )
          {
            sub_14172B820(v65, &v72, 856);
          }
          else
          {
            sub_140496A60(&v86);
            v39 = -1;
            v46 = v48;
            v40 = v114;
            v11 = v113;
          }
          v51 = v129;
          *(_BYTE *)(v129 + 4849) = 0;
          *(_BYTE *)(v51 + 4850) = 0;
          v52 = *(_QWORD *)(v51 + 4624);
          if ( v52 )
            sub_140001660(*(_QWORD *)(v51 + 4632), v52, 1);
          sub_140203A20(v47);
LABEL_52:
          sub_14172B820(v66, v65, 856);
          *(_BYTE *)(v129 + 4848) = 1;
          sub_140CA6E30(v124);
          if ( (_DWORD)v39 != -1 )
          {
            sub_14172B820(v82, v66, 856);
            *(_QWORD *)&v78 = v39;
            *((_QWORD *)&v78 + 1) = v46;
            v79 = v40;
            v80 = v11;
            v81 = v7;
            sub_140509350(&v86, &v78);
            v7 = ((unsigned __int64)((HIBYTE(v87) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v87 + 5)) << 32)
               | *(unsigned int *)((char *)&v87 + 1);
            v8 = v87;
            v9 = (__int64)v88;
            v10 = v89;
            v11 = *(_QWORD *)v90;
            if ( v86 == (const char *)-1LL )
            {
              v21 = 0;
            }
            else
            {
              HIBYTE(v87) = (((unsigned __int64)((HIBYTE(v87) << 16)
                                               | (unsigned int)*(unsigned __int16 *)((char *)&v87 + 5)) << 32)
                           | *(unsigned int *)((char *)&v87 + 1)) >> 48;
              *(_WORD *)((char *)&v87 + 5) = WORD2(v7);
              *(_DWORD *)((char *)&v87 + 1) = v7;
              *(_QWORD *)&v69 = 0;
              *((_QWORD *)&v69 + 1) = 1;
              v70 = 0;
              *((_QWORD *)&v73 + 1) = 1610612768;
              v72 = (const char *)&v69;
              *(_QWORD *)&v73 = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v86, &v72) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v121,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v10 = *((_QWORD *)&v69 + 1);
              v9 = v69;
              v11 = v70;
              sub_140CAB2C0(&v86);
              v21 = 1;
              v8 = 3;
            }
            goto LABEL_65;
          }
          if ( v11 < 0 )
          {
            v57 = 0;
            goto LABEL_58;
          }
          if ( v11 )
          {
            nullsub_1(v54, v53, v55, v56, v64);
            v57 = 1;
            v58 = sub_140001650(v11, 1);
            if ( !v58 )
            {
LABEL_58:
              v127 = v40;
              v128 = v46;
              sub_14176E54B(v57, v11);
            }
            v10 = v58;
            sub_14172B820(v58, v40, v11);
            if ( v46 )
              goto LABEL_63;
          }
          else
          {
            v10 = 1;
            if ( v46 )
LABEL_63:
              sub_140001660(v40, v46, 1);
          }
          v21 = 1;
          v8 = 3;
          v9 = v11;
LABEL_65:
          *(_BYTE *)v125 = 1;
          sub_140CAB140(v126);
          if ( *(_QWORD *)(v129 + 3152) != -1 )
          {
            v124 = (_QWORD *)(v129 + 3160);
            v59 = *(__int64 **)(v129 + 3160);
            v127 = *(const char **)(v129 + 3168);
            v128 = nullptr;
            v125 = v59;
            while ( v127 != v128 )
            {
              ++v128;
              v60 = v59 + 12;
              sub_140401FB0();
              v59 = v60;
            }
            v20 = *(_QWORD *)(v129 + 3152);
            if ( v20 )
LABEL_70:
              sub_140001660(*v124, 96 * v20, 8);
          }
LABEL_71:
          *(_BYTE *)(v129 + 4864) = 1;
          sub_140C9D9F0(v126);
          v107 = v7;
          v109 = BYTE6(v7);
          v108 = WORD2(v7);
          v110 = v9;
          v111 = v10;
          v112 = v11;
          v106 = v8;
          v105 = v21;
          v61 = v129;
          *(_BYTE *)(v129 + 4883) = 0;
          sub_14172B820(&v86, v61, 360);
          *(_BYTE *)(v61 + 4882) = 0;
          v62 = *(_QWORD *)(v61 + 384);
          *(_BYTE *)(v61 + 4881) = 0;
          v79 = *(const char **)(v61 + 376);
          v78 = *(_OWORD *)(v61 + 360);
          sub_140AFFC30((__int64)&v86, v62, (__int64)&v105, &v78, *(_DWORD *)(v61 + 4872), *(_DWORD *)(v61 + 4876));
          v43 = 1;
          result = 0;
          v42 = (_BYTE *)v129;
LABEL_72:
          v42[4880] = v43;
          return result;
        case 1:
LABEL_81:
          v124 = v19;
          v120 = v18;
          v125 = v17;
          JUMPOUT(0x140D717DCLL);
        case 2:
LABEL_80:
          v124 = v19;
          v120 = v18;
          v125 = v17;
          v126 = v5;
          sub_14176EC20(&off_1418889F8);
        case 3:
LABEL_21:
          v124 = v19;
          v120 = v18;
          v125 = v17;
          v126 = v5;
          v128 = (char *)(v3 + 4840);
          v32 = (const char *)(v3 + 4648);
          switch ( *(_BYTE *)(v3 + 4840) )
          {
            case 0:
              goto LABEL_22;
            case 1:
              v117 = v3 + 4648;
              sub_14176EC00(&off_141885668);
            case 2:
              v117 = v3 + 4648;
              sub_14176EC20(&off_141885668);
            case 3:
              v127 = (const char *)(v3 + 4648);
              goto LABEL_33;
          }
      }
  }
}
