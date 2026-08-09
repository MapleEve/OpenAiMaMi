// Pseudocode for set_codex_router_no_account_mode (EA: 0x140d77830, size: 0x12af)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 set_codex_router_no_account_mode 的 handler：按入参 enabled 开关 codex router 免账号模式，涉及 relaunch（进程副作用：可触发应用重启）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs。
// Tauri 命令 set_codex_router_no_account_mode 的 handler：按入参 enabled 开关 codex router 免账号模式，涉及 relaunch（进程副作用：可触发应用重启）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs。
char __fastcall set_codex_router_no_account_mode(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  __int8 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rsi
  char v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 *v15; // r14
  _QWORD *v16; // r13
  __int64 v17; // rdi
  char v18; // of
  __int64 v19; // rcx
  char v20; // bl
  char v21; // di
  __int128 v22; // rax
  __int64 v23; // rt0
  __int64 v24; // rt0
  volatile signed __int64 *v25; // r8
  __int64 v26; // rt0
  volatile signed __int64 *v27; // r9
  __int64 v28; // rt0
  volatile signed __int64 *v29; // r10
  __int64 v30; // rt0
  volatile signed __int64 *v31; // r11
  __int64 v32; // rt0
  volatile signed __int64 *v33; // r14
  volatile signed __int64 *v34; // rcx
  char v35; // of
  volatile signed __int64 *v36; // r14
  __int64 v37; // rt0
  volatile signed __int64 *v38; // r15
  __int64 v39; // rt0
  char v40; // cl
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  const char *v47; // rbx
  __int64 v48; // r14
  _BYTE *v49; // rdx
  __int64 v50; // rdi
  unsigned __int64 v51; // rbx
  __int64 v52; // rsi
  __int64 v53; // rdi
  const char *v54; // r15
  __int64 v55; // r14
  __int64 v56; // rax
  char v57; // cl
  char result; // al
  __int64 v59; // rdi
  __int64 v60; // r12
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rax
  unsigned __int8 v67; // di
  __int64 v68; // rax
  unsigned __int64 v69; // r12
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 v74; // r14
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 *v80; // rcx
  __int64 *v81; // r15
  __int64 v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rbx
  _QWORD *v85; // rsi
  __int64 v86; // [rsp+20h] [rbp-60h]
  _BYTE v87[392]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v88[2]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v89; // [rsp+1D0h] [rbp+150h]
  _BYTE v90[320]; // [rsp+1E0h] [rbp+160h] BYREF
  _BYTE v91[136]; // [rsp+320h] [rbp+2A0h] BYREF
  volatile signed __int64 *v92; // [rsp+3A8h] [rbp+328h]
  volatile signed __int64 *v93; // [rsp+3B0h] [rbp+330h]
  __int64 v94; // [rsp+3B8h] [rbp+338h] BYREF
  __int64 v95; // [rsp+3C0h] [rbp+340h]
  __int64 v96; // [rsp+3C8h] [rbp+348h]
  __m256i v97; // [rsp+540h] [rbp+4C0h] BYREF
  __int128 v98; // [rsp+560h] [rbp+4E0h]
  __int128 v99; // [rsp+570h] [rbp+4F0h]
  __int128 v100; // [rsp+580h] [rbp+500h]
  __int64 v101; // [rsp+590h] [rbp+510h]
  __int128 v102; // [rsp+670h] [rbp+5F0h]
  __int64 v103; // [rsp+680h] [rbp+600h]
  __int128 *v104; // [rsp+690h] [rbp+610h] BYREF
  __int64 (__fastcall **v105)(); // [rsp+698h] [rbp+618h]
  __int64 v106; // [rsp+6A0h] [rbp+620h]
  __int128 v107; // [rsp+7D0h] [rbp+750h]
  __int64 v108; // [rsp+7E0h] [rbp+760h]
  char v109; // [rsp+7E8h] [rbp+768h]
  __int128 v110; // [rsp+7F0h] [rbp+770h] BYREF
  __int64 v111; // [rsp+800h] [rbp+780h]
  unsigned __int128 v112; // [rsp+808h] [rbp+788h]
  _OWORD v113[24]; // [rsp+818h] [rbp+798h] BYREF
  const char *v114; // [rsp+9A0h] [rbp+920h] BYREF
  __int64 v115; // [rsp+9A8h] [rbp+928h]
  __int64 v116; // [rsp+9B0h] [rbp+930h]
  __int64 v117; // [rsp+9B8h] [rbp+938h]
  __int64 v118; // [rsp+9C0h] [rbp+940h]
  __int64 v119; // [rsp+9C8h] [rbp+948h]
  __int64 v120; // [rsp+9D0h] [rbp+950h]
  __int128 v121; // [rsp+B28h] [rbp+AA8h]
  __int128 v122; // [rsp+B38h] [rbp+AB8h]
  __int128 v123; // [rsp+B48h] [rbp+AC8h]
  __int128 v124; // [rsp+B58h] [rbp+AD8h]
  __int64 v125; // [rsp+B68h] [rbp+AE8h] BYREF
  __int8 v126; // [rsp+B70h] [rbp+AF0h]
  char v127; // [rsp+B71h] [rbp+AF1h]
  int v128; // [rsp+B72h] [rbp+AF2h]
  __int16 v129; // [rsp+B76h] [rbp+AF6h]
  __int64 v130; // [rsp+B78h] [rbp+AF8h]
  __int64 v131; // [rsp+B80h] [rbp+B00h]
  __int64 v132; // [rsp+B88h] [rbp+B08h]
  const char *v133; // [rsp+B90h] [rbp+B10h] BYREF
  __m256i v134; // [rsp+B98h] [rbp+B18h] BYREF
  __int128 v135; // [rsp+BB8h] [rbp+B38h] BYREF
  __int128 v136; // [rsp+BC8h] [rbp+B48h]
  __int128 v137; // [rsp+BD8h] [rbp+B58h]
  __int128 v138; // [rsp+BE8h] [rbp+B68h]
  __int128 v139; // [rsp+BF8h] [rbp+B78h]
  __int128 v140; // [rsp+C08h] [rbp+B88h]
  __int128 v141; // [rsp+C18h] [rbp+B98h]
  __int128 v142; // [rsp+C28h] [rbp+BA8h]
  __int128 v143; // [rsp+C38h] [rbp+BB8h]
  __int128 v144; // [rsp+C48h] [rbp+BC8h]
  __int128 v145; // [rsp+C58h] [rbp+BD8h]
  char v146; // [rsp+C68h] [rbp+BE8h]
  char v147; // [rsp+C69h] [rbp+BE9h]
  __int64 v148; // [rsp+D40h] [rbp+CC0h]
  __int64 v149; // [rsp+D48h] [rbp+CC8h]
  __int128 v150; // [rsp+D50h] [rbp+CD0h] BYREF
  __int64 v151; // [rsp+D60h] [rbp+CE0h]
  _QWORD *v152; // [rsp+D70h] [rbp+CF0h]
  _QWORD *v153; // [rsp+D78h] [rbp+CF8h]
  __int64 v154; // [rsp+D80h] [rbp+D00h]
  _QWORD *v155; // [rsp+D88h] [rbp+D08h]
  char v156; // [rsp+D97h] [rbp+D17h] BYREF
  __int64 *v157; // [rsp+D98h] [rbp+D18h]
  __int64 v158; // [rsp+DA0h] [rbp+D20h]
  char v159; // [rsp+DAFh] [rbp+D2Fh]
  __int64 v160; // [rsp+DB0h] [rbp+D30h]
  char v161; // [rsp+DBFh] [rbp+D3Fh]
  __int64 v162; // [rsp+DC0h] [rbp+D40h]

  v162 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 3536);
  v160 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 3537) = 257;
      *(_BYTE *)(a1 + 3539) = 1;
      v5 = a1 + 1960;
      sub_14172B820(a1 + 1960, a1 + 392, 1568);
      switch ( *(_BYTE *)(v3 + 3520) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_93;
        case 2:
          goto LABEL_92;
        case 3:
          goto LABEL_8;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1960;
      switch ( *(_BYTE *)(a1 + 3520) )
      {
        case 0:
LABEL_4:
          v155 = a2;
          v120 = 0;
          v114 = aSetCodexRouter;
          v115 = 32;
          v116 = (__int64)aApp_4;
          v117 = 3;
          v158 = v5;
          v118 = v5;
          v157 = (__int64 *)(v3 + 2480);
          v119 = v3 + 2480;
          sub_1401A9630((__int64)&v133, (__int64)&v114);
          v6 = *(unsigned int *)((char *)v134.m256i_u32 + 2) | ((unsigned __int64)v134.m256i_u16[3] << 32);
          v7 = v134.m256i_i8[0];
          LOBYTE(v8) = v134.m256i_i8[1];
          v9 = v134.m256i_i64[2];
          v10 = v134.m256i_i64[1];
          if ( v133 == (const char *)-1LL )
          {
            v154 = v134.m256i_i64[3];
            goto LABEL_53;
          }
          v113[6] = v141;
          v113[5] = v140;
          v113[4] = v139;
          v113[3] = v138;
          v113[2] = v137;
          v113[1] = v136;
          v113[0] = v135;
          *(_DWORD *)((char *)&v110 + 10) = *(__int32 *)((char *)v134.m256i_i32 + 2);
          HIWORD(v110) = WORD2(v6);
          v112 = *(_OWORD *)&v134.m256i_u64[2];
          *(_QWORD *)&v110 = v133;
          WORD4(v110) = v134.m256i_i16[0];
          v111 = v134.m256i_i64[1];
          v133 = aSetCodexRouter;
          v134.m256i_i64[0] = 32;
          v134.m256i_i64[1] = (__int64)aManager_1;
          v134.m256i_i64[2] = 7;
          v134.m256i_i64[3] = v158;
          v135 = (unsigned __int64)v157;
          v11 = sub_14002B2A0((_QWORD *)(*(_QWORD *)(v160 + 2472) + 16LL));
          if ( v11 )
            goto LABEL_6;
          sub_14172C620((__int64)&v114, (__int64)&v133, (__int64)&v134.m256i_i64[1]);
          v7 = (char)v114;
          if ( (_BYTE)v114 == 0xFF )
          {
            v11 = v115;
LABEL_6:
            v133 = aSetCodexRouter;
            v134.m256i_i64[0] = 32;
            v134.m256i_i64[1] = (__int64)aEnabled_9;
            v134.m256i_i64[2] = 7;
            v134.m256i_i64[3] = v158;
            v135 = (unsigned __int64)v157;
            sub_1409562A0(&v114, &v133);
            v7 = (char)v114;
            v12 = BYTE1(v114);
            if ( (_BYTE)v114 != 0xFF )
            {
              v13 = *(unsigned int *)((char *)&v114 + 2);
              v14 = HIWORD(v114);
              v10 = v115;
              v9 = v116;
              v154 = v117;
              sub_140203A20(&v110);
              v6 = v13 | (v14 << 32);
              LOBYTE(v8) = v12;
              goto LABEL_53;
            }
            v133 = aSetCodexRouter;
            v134.m256i_i64[0] = 32;
            v134.m256i_i64[1] = (__int64)aRelaunch;
            v134.m256i_i64[2] = 8;
            v134.m256i_i64[3] = v158;
            v135 = (unsigned __int64)v157;
            sub_1409543D0(&v114, &v133);
            v7 = (char)v114;
            LOBYTE(v8) = BYTE1(v114);
            if ( (_BYTE)v114 == 0xFF )
            {
              v3 = v160;
              v84 = v160 + 2504;
              sub_14172B820(v160 + 2504, &v110, 152);
              *(_QWORD *)(v3 + 2656) = v11;
              *(_BYTE *)(v3 + 2832) = v12;
              *(_BYTE *)(v3 + 2833) = v8;
              *(_BYTE *)(v3 + 2834) = 0;
              v16 = (_QWORD *)(v3 + 2840);
              sub_14172B820(v3 + 2840, v84, 336);
              v15 = (__int64 *)(v3 + 3512);
              *(_BYTE *)(v3 + 3512) = 0;
              v5 = v158;
              a2 = v155;
LABEL_9:
              v17 = v3 + 3176;
              sub_14172B820(v3 + 3176, v16, 336);
              switch ( *(_BYTE *)(v3 + 3506) )
              {
                case 0:
                  goto LABEL_11;
                case 1:
                  goto LABEL_95;
                case 2:
                  goto LABEL_94;
                case 3:
                  goto LABEL_30;
              }
            }
            v59 = *(unsigned int *)((char *)&v114 + 2);
            v60 = HIWORD(v114);
            v10 = v115;
            v9 = v116;
            v154 = v117;
            sub_140203A20(&v110);
          }
          else
          {
            LOBYTE(v8) = BYTE1(v114);
            v59 = *(unsigned int *)((char *)&v114 + 2);
            v60 = HIWORD(v114);
            v10 = v115;
            v9 = v116;
            v154 = v117;
            sub_140203A20(&v110);
          }
          v6 = v59 | (v60 << 32);
LABEL_53:
          sub_140CAB140(v158);
          if ( *v157 == -1 )
          {
            v67 = 1;
            goto LABEL_77;
          }
          v153 = (_QWORD *)(v160 + 2488);
          v64 = *(_QWORD *)(v160 + 2488);
          v152 = *(_QWORD **)(v160 + 2496);
          v155 = nullptr;
          v148 = v64;
          while ( v152 != v155 )
          {
            v155 = (_QWORD *)((char *)v155 + 1);
            v65 = v64 + 96;
            sub_140401FB0(v64, v61, v62, v63, v86);
            v64 = v65;
          }
          v66 = *v157;
          v67 = 1;
          if ( !*v157 )
            goto LABEL_77;
          goto LABEL_76;
        case 1:
LABEL_93:
          v158 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_92:
          v158 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_8;
      }
  }
LABEL_8:
  v15 = (__int64 *)(v3 + 3512);
  v16 = (_QWORD *)(v3 + 2840);
  switch ( *(_BYTE *)(v3 + 3512) )
  {
    case 0:
      goto LABEL_9;
    case 1:
      v158 = v5;
      v149 = v3 + 2840;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v158 = v5;
      v149 = v3 + 2840;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v17 = v3 + 3176;
      switch ( *(_BYTE *)(v3 + 3506) )
      {
        case 0:
LABEL_11:
          v155 = a2;
          *(_WORD *)(v3 + 3507) = 0;
          v154 = v17;
          sub_14172B820(v3 + 3336, v17, 152);
          v19 = *(_QWORD *)(v3 + 3328);
          *(_QWORD *)(v3 + 3488) = v19;
          v20 = *(_BYTE *)(v3 + 3504);
          v21 = *(_BYTE *)(v3 + 3505);
          *(_QWORD *)&v22 = *(_QWORD *)v19;
          v23 = _InterlockedIncrement64(*(volatile signed __int64 **)v19);
          if ( (v23 < 0) ^ v18 | (v23 == 0) )
            goto LABEL_99;
          *((_QWORD *)&v22 + 1) = *(_QWORD *)(v19 + 8);
          v24 = _InterlockedIncrement64(*((volatile signed __int64 **)&v22 + 1));
          if ( (v24 < 0) ^ v18 | (v24 == 0) )
            goto LABEL_99;
          v25 = *(volatile signed __int64 **)(v19 + 16);
          v26 = _InterlockedIncrement64(v25);
          if ( (v26 < 0) ^ v18 | (v26 == 0) )
            goto LABEL_99;
          v27 = *(volatile signed __int64 **)(v19 + 24);
          v28 = _InterlockedIncrement64(v27);
          if ( (v28 < 0) ^ v18 | (v28 == 0) )
            goto LABEL_99;
          v29 = *(volatile signed __int64 **)(v19 + 32);
          v30 = _InterlockedIncrement64(v29);
          if ( (v30 < 0) ^ v18 | (v30 == 0) )
            goto LABEL_99;
          v157 = v15;
          v31 = *(volatile signed __int64 **)(v19 + 40);
          v32 = _InterlockedIncrement64(v31);
          if ( (v32 < 0) ^ v18 | (v32 == 0) )
            goto LABEL_99;
          v33 = *(volatile signed __int64 **)(v19 + 56);
          if ( v33 )
          {
            if ( _InterlockedIncrement64(v33) <= 0 )
              goto LABEL_99;
          }
          v34 = *(volatile signed __int64 **)(v19 + 48);
          if ( _InterlockedIncrement64(v34) <= 0 )
            goto LABEL_99;
          v153 = v16;
          v158 = v5;
          v121 = v22;
          *(_QWORD *)&v122 = v25;
          *((_QWORD *)&v122 + 1) = v27;
          *(_QWORD *)&v123 = v29;
          *((_QWORD *)&v123 + 1) = v31;
          *((_QWORD *)&v124 + 1) = v33;
          *(_QWORD *)&v124 = v34;
          *(_BYTE *)(v3 + 3508) = 1;
          sub_1401A9D00(&v133, v3 + 3336);
          v36 = *(volatile signed __int64 **)(v3 + 3472);
          v37 = _InterlockedIncrement64(v36);
          if ( (v37 < 0) ^ v35 | (v37 == 0)
            || (v38 = *(volatile signed __int64 **)(v3 + 3480),
                v39 = _InterlockedIncrement64(v38),
                (v39 < 0) ^ v35 | (v39 == 0)) )
          {
LABEL_99:
            BUG();
          }
          sub_14172B820(v91, &v133, 136);
          v92 = v36;
          v93 = v38;
          *(_WORD *)(v3 + 3507) = 0;
          sub_14172B820(&v133, v91, 152);
          v142 = v121;
          v143 = v122;
          v144 = v123;
          v145 = v124;
          v146 = v20;
          v40 = 1;
          if ( v21 != 2 )
            v40 = v21;
          v147 = v40;
          v41 = off_141FB97C0;
          a2 = v155;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v161 = 1;
            v85 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v41 = v85;
          }
          if ( *((_DWORD *)v41 + 4) == 2 )
          {
            v42 = 704;
            if ( *(_BYTE *)v41 )
              v42 = 472;
            v43 = v41[1] + v42;
            v161 = 0;
            v44 = sub_140858C00(v43, v41, &v133, &off_1417EBF48);
          }
          else
          {
            v45 = 704;
            if ( *((_BYTE *)v41 + 64) )
              v45 = 472;
            v46 = v41[9] + v45;
            v161 = 0;
            v44 = sub_140858C00(v46, v41 + 8, &v133, &off_1417EBF30);
          }
          v3 = v160;
          *(_QWORD *)(v160 + 3496) = v44;
          break;
        case 1:
LABEL_95:
          v154 = v17;
          v157 = v15;
          v153 = v16;
          JUMPOUT(0x140D78A8FLL);
        case 2:
LABEL_94:
          v154 = v17;
          v157 = v15;
          v153 = v16;
          v158 = v5;
          sub_14176EC20(&off_1418886E8);
        case 3:
LABEL_30:
          v154 = v17;
          v157 = v15;
          v153 = v16;
          v158 = v5;
          break;
      }
      v152 = (_QWORD *)(v3 + 3496);
      sub_1405054B0(&v133, v3 + 3496, a2);
      v47 = v133;
      if ( v133 == (const char *)-3LL )
      {
        v49 = (_BYTE *)v160;
        *(_BYTE *)(v160 + 3506) = 3;
        goto LABEL_47;
      }
      if ( v133 == (const char *)-2LL )
      {
        v151 = v134.m256i_i64[2];
        v150 = *(_OWORD *)v134.m256i_i8;
        v48 = 0x800000000000000CuLL;
      }
      else
      {
        v48 = v134.m256i_i64[0];
        v150 = *(_OWORD *)&v134.m256i_u64[1];
        v151 = v134.m256i_i64[3];
        sub_14172B820(&v104, &v135, 312);
      }
      *(_OWORD *)v97.m256i_i8 = v150;
      v97.m256i_i64[2] = v151;
      sub_14172B820(&v97.m256i_u64[3], &v104, 312);
      v50 = *v152;
      if ( (unsigned __int8)sub_141398090(*v152) )
        sub_14139A2E0(v50);
      if ( v47 == (const char *)-2LL )
      {
        v133 = (const char *)v48;
        v134 = v97;
        *(_QWORD *)&v135 = v98;
        *(_QWORD *)&v150 = &v133;
        *((_QWORD *)&v150 + 1) = sub_1412DDF00;
        sub_141543AF0(&v104, &unk_1418862D0, &v150);
        sub_140CAB2C0(&v133);
        v51 = (unsigned __int64)v104;
        v8 = (__int64)v105;
        v10 = v106;
LABEL_62:
        v68 = v160;
        *(_BYTE *)(v160 + 3507) = 0;
        *(_BYTE *)(v68 + 3508) = 0;
        sub_140203A20(v68 + 3336);
        sub_14172B820(&v94, &v114, 392);
        *(_BYTE *)(v160 + 3506) = 1;
        v69 = v51 >> 8;
        sub_14172B820(v87, &v94, 392);
        goto LABEL_63;
      }
      v52 = v160;
      if ( v47 == (const char *)-1LL )
      {
        v133 = (const char *)v48;
        v134 = v97;
        v135 = v98;
        v136 = v99;
        v137 = v100;
        *(_QWORD *)&v138 = v101;
        *(_QWORD *)&v150 = 0;
        *((_QWORD *)&v150 + 1) = 1;
        v151 = 0;
        v106 = 1610612768;
        v104 = &v150;
        v105 = &off_141891B48;
        if ( (unsigned __int8)sub_1405060F0(&v133, &v104) )
          sub_14176E860(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v156,
            (unsigned int)&unk_141889838,
            (__int64)&off_141891C00);
        v8 = *((_QWORD *)&v150 + 1);
        v51 = v150;
        v10 = v151;
        sub_140CAC460(&v133);
        goto LABEL_62;
      }
      sub_14172B820(v90, &v97.m256i_u64[2], 320);
      v88[1] = v48;
      v89 = *(_OWORD *)v97.m256i_i8;
      v88[0] = v47;
      v53 = v52 + 3336;
      v159 = 1;
      sub_140B2E080(v52 + 3336);
      sub_14172B820(&v104, v88, 320);
      v107 = v102;
      v108 = v103;
      v109 = v90[312];
      v159 = 0;
      sub_1404D18A0(&v133, &v104);
      v54 = v133;
      v8 = v134.m256i_i64[1];
      v51 = v134.m256i_i64[0];
      v55 = v134.m256i_i64[3];
      v10 = v134.m256i_i64[2];
      sub_14172B820(&v114, &v135, 392);
      v56 = v160;
      *(_BYTE *)(v160 + 3507) = 0;
      *(_BYTE *)(v56 + 3508) = 0;
      sub_140203A20(v53);
      sub_14172B820(&v94, &v114, 392);
      v49 = (_BYTE *)v160;
      *(_BYTE *)(v160 + 3506) = 1;
      if ( v54 == (const char *)-2LL )
      {
LABEL_47:
        v49[3512] = 3;
        v49[3520] = 3;
        v57 = 3;
        result = 1;
        goto LABEL_78;
      }
      v69 = v51 >> 8;
      sub_14172B820(v87, &v94, 392);
      if ( v54 != (const char *)-1LL )
      {
        sub_14172B820(v113, v87, 392);
        *(_QWORD *)&v110 = v54;
        BYTE8(v110) = v51;
        *(_DWORD *)((char *)&v110 + 9) = v51 >> 8;
        HIBYTE(v110) = v51 >> 8 >> 48;
        *(_WORD *)((char *)&v110 + 13) = HIDWORD(v51) >> 8;
        v111 = v8;
        v112 = __PAIR128__(v55, v10);
        sub_140511050(&v133, &v110);
        v6 = *(unsigned int *)((char *)v134.m256i_u32 + 2) | ((unsigned __int64)v134.m256i_u16[3] << 32);
        v7 = v134.m256i_i8[0];
        LOBYTE(v8) = v134.m256i_i8[1];
        v9 = v134.m256i_i64[2];
        v10 = v134.m256i_i64[1];
        if ( v133 == (const char *)-1LL )
        {
          v154 = v134.m256i_i64[3];
          v67 = 0;
        }
        else
        {
          v94 = 0;
          v95 = 1;
          v96 = 0;
          v116 = 1610612768;
          v114 = (const char *)&v94;
          v115 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1412DDF00(&v133, &v114) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v156,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v10 = v94;
          v9 = v95;
          v154 = v96;
          sub_140CAB2C0(&v133);
          v67 = 1;
          v7 = 3;
        }
        goto LABEL_71;
      }
LABEL_63:
      v6 = v69 << 8;
      v74 = v6 | (unsigned __int8)v51;
      if ( v10 < 0 )
      {
        v75 = 0;
        goto LABEL_65;
      }
      if ( v10 )
      {
        nullsub_1(v71, v70, v72, v73, v86);
        v75 = 1;
        v76 = sub_140001650(v10, 1);
        if ( !v76 )
        {
LABEL_65:
          v155 = (_QWORD *)(v6 | (unsigned __int8)v51);
          v152 = (_QWORD *)v8;
          sub_14176E54B(v75, v10);
        }
        v9 = v76;
        sub_14172B820(v76, v8, v10);
        if ( !v74 )
          goto LABEL_70;
      }
      else
      {
        v9 = 1;
        if ( !v74 )
          goto LABEL_70;
      }
      sub_140001660(v8, v74, 1);
LABEL_70:
      v67 = 1;
      v7 = 3;
      v154 = v10;
LABEL_71:
      *(_BYTE *)v157 = 1;
      sub_140C7FD90(v153);
      sub_140CAB140(v158);
      if ( *(_QWORD *)(v160 + 2480) != -1 )
      {
        v153 = (_QWORD *)(v160 + 2488);
        v80 = *(__int64 **)(v160 + 2488);
        v152 = *(_QWORD **)(v160 + 2496);
        v155 = nullptr;
        v157 = v80;
        while ( v152 != v155 )
        {
          v155 = (_QWORD *)((char *)v155 + 1);
          v81 = v80 + 12;
          sub_140401FB0(v80, v77, v78, v79, v86);
          v80 = v81;
        }
        v66 = *(_QWORD *)(v160 + 2480);
        if ( v66 )
LABEL_76:
          sub_140001660(*v153, 96 * v66, 8);
      }
LABEL_77:
      *(_BYTE *)(v160 + 3520) = 1;
      sub_140C9E7B0(v158);
      v128 = v6;
      v129 = WORD2(v6);
      v131 = v9;
      v132 = v154;
      v126 = v7;
      v127 = v8;
      v130 = v10;
      v125 = v67;
      v82 = v160;
      *(_BYTE *)(v160 + 3539) = 0;
      sub_14172B820(&v133, v82, 360);
      *(_BYTE *)(v82 + 3538) = 0;
      v83 = *(_QWORD *)(v82 + 384);
      *(_BYTE *)(v82 + 3537) = 0;
      v111 = *(_QWORD *)(v82 + 376);
      v110 = *(_OWORD *)(v82 + 360);
      sub_140AFFC30((__int64)&v133, v83, (__int64)&v125, &v110, *(_DWORD *)(v82 + 3528), *(_DWORD *)(v82 + 3532));
      v57 = 1;
      result = 0;
      v49 = (_BYTE *)v160;
LABEL_78:
      v49[3536] = v57;
      return result;
  }
}
