// Pseudocode for set_codex_router_enabled (EA: 0x140d7aa10, size: 0x12e2)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 set_codex_router_enabled 的 handler：按入参 enabled 开关 codex router（中转路由），涉及 relaunch 流程（进程副作用：可触发应用重启）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs。
// Tauri 命令 set_codex_router_enabled 的 handler：按入参 enabled 开关 codex router（中转路由），涉及 relaunch 流程（进程副作用：可触发应用重启）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\relay.rs。
char __fastcall set_codex_router_enabled(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  __int8 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rsi
  char v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r12
  _QWORD *v15; // r13
  __int64 *v16; // r12
  __int64 v17; // rdi
  char v18; // of
  volatile signed __int64 **v19; // rax
  char v20; // bl
  volatile signed __int64 *v21; // rcx
  __int64 v22; // rt0
  volatile signed __int64 *v23; // rdx
  __int64 v24; // rt0
  volatile signed __int64 *v25; // r8
  __int64 v26; // rt0
  volatile signed __int64 *v27; // r9
  __int64 v28; // rt0
  volatile signed __int64 *v29; // r10
  __int64 v30; // rt0
  volatile signed __int64 *v31; // r11
  __int64 v32; // rt0
  volatile signed __int64 *v33; // rdi
  volatile signed __int64 *v34; // rax
  char v35; // of
  volatile signed __int64 *v36; // rdi
  __int64 v37; // rt0
  volatile signed __int64 *v38; // r14
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
  __int64 v53; // r12
  const char *v54; // r15
  __int64 v55; // r14
  char v56; // cl
  char result; // al
  __int64 v58; // rdi
  __int64 v59; // r12
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // rax
  unsigned __int8 v66; // di
  __int64 v67; // r15
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
  __int64 v84; // rdi
  __int64 v85; // rbx
  _QWORD *v86; // rsi
  __int64 v87; // [rsp+20h] [rbp-60h]
  _BYTE v88[416]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v89[136]; // [rsp+1D0h] [rbp+150h] BYREF
  volatile signed __int64 *v90; // [rsp+258h] [rbp+1D8h]
  volatile signed __int64 *v91; // [rsp+260h] [rbp+1E0h]
  __int64 v92; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v93; // [rsp+270h] [rbp+1F0h]
  __int64 v94; // [rsp+278h] [rbp+1F8h]
  _QWORD v95[2]; // [rsp+408h] [rbp+388h] BYREF
  __int128 v96; // [rsp+418h] [rbp+398h]
  _BYTE v97[344]; // [rsp+428h] [rbp+3A8h] BYREF
  __m256i v98; // [rsp+580h] [rbp+500h] BYREF
  __int128 v99; // [rsp+5A0h] [rbp+520h]
  __int128 v100; // [rsp+5B0h] [rbp+530h]
  __int128 v101; // [rsp+5C0h] [rbp+540h]
  __int64 v102; // [rsp+5D0h] [rbp+550h]
  __int128 v103; // [rsp+6B0h] [rbp+630h]
  __int64 v104; // [rsp+6C0h] [rbp+640h]
  __int128 v105; // [rsp+6C8h] [rbp+648h]
  __int64 v106; // [rsp+6D8h] [rbp+658h]
  __int128 *v107; // [rsp+6E8h] [rbp+668h] BYREF
  __int64 (__fastcall **v108)(); // [rsp+6F0h] [rbp+670h]
  __int64 v109; // [rsp+6F8h] [rbp+678h]
  __int128 v110; // [rsp+828h] [rbp+7A8h]
  __int64 v111; // [rsp+838h] [rbp+7B8h]
  __int128 v112; // [rsp+840h] [rbp+7C0h]
  __int64 v113; // [rsp+850h] [rbp+7D0h]
  char v114; // [rsp+858h] [rbp+7D8h]
  __int128 v115; // [rsp+860h] [rbp+7E0h] BYREF
  __int64 v116; // [rsp+870h] [rbp+7F0h]
  unsigned __int128 v117; // [rsp+878h] [rbp+7F8h]
  _OWORD v118[26]; // [rsp+888h] [rbp+808h] BYREF
  const char *v119; // [rsp+A30h] [rbp+9B0h] BYREF
  __int64 v120; // [rsp+A38h] [rbp+9B8h]
  __int64 v121; // [rsp+A40h] [rbp+9C0h]
  __int64 v122; // [rsp+A48h] [rbp+9C8h]
  __int64 v123; // [rsp+A50h] [rbp+9D0h]
  __int64 v124; // [rsp+A58h] [rbp+9D8h]
  __int64 v125; // [rsp+A60h] [rbp+9E0h]
  __int128 v126; // [rsp+BD0h] [rbp+B50h]
  __int128 v127; // [rsp+BE0h] [rbp+B60h]
  __int128 v128; // [rsp+BF0h] [rbp+B70h]
  __int128 v129; // [rsp+C00h] [rbp+B80h]
  __int64 v130; // [rsp+C10h] [rbp+B90h] BYREF
  __int8 v131; // [rsp+C18h] [rbp+B98h]
  char v132; // [rsp+C19h] [rbp+B99h]
  int v133; // [rsp+C1Ah] [rbp+B9Ah]
  __int16 v134; // [rsp+C1Eh] [rbp+B9Eh]
  __int64 v135; // [rsp+C20h] [rbp+BA0h]
  __int64 v136; // [rsp+C28h] [rbp+BA8h]
  __int64 v137; // [rsp+C30h] [rbp+BB0h]
  const char *v138; // [rsp+C38h] [rbp+BB8h] BYREF
  __m256i v139; // [rsp+C40h] [rbp+BC0h] BYREF
  __int128 v140; // [rsp+C60h] [rbp+BE0h] BYREF
  __int128 v141; // [rsp+C70h] [rbp+BF0h]
  __int128 v142; // [rsp+C80h] [rbp+C00h]
  __int128 v143; // [rsp+C90h] [rbp+C10h]
  __int128 v144; // [rsp+CA0h] [rbp+C20h]
  __int128 v145; // [rsp+CB0h] [rbp+C30h]
  __int128 v146; // [rsp+CC0h] [rbp+C40h]
  __int128 v147; // [rsp+CD0h] [rbp+C50h]
  __int128 v148; // [rsp+CE0h] [rbp+C60h]
  __int128 v149; // [rsp+CF0h] [rbp+C70h]
  __int128 v150; // [rsp+D00h] [rbp+C80h]
  char v151; // [rsp+D10h] [rbp+C90h]
  char v152; // [rsp+D11h] [rbp+C91h]
  __int64 v153; // [rsp+E00h] [rbp+D80h]
  __int64 v154; // [rsp+E08h] [rbp+D88h]
  __int128 v155; // [rsp+E10h] [rbp+D90h] BYREF
  __int64 v156; // [rsp+E20h] [rbp+DA0h]
  _QWORD *v157; // [rsp+E28h] [rbp+DA8h]
  _QWORD *v158; // [rsp+E30h] [rbp+DB0h]
  __int64 v159; // [rsp+E38h] [rbp+DB8h]
  _QWORD *v160; // [rsp+E40h] [rbp+DC0h]
  char v161; // [rsp+E4Fh] [rbp+DCFh] BYREF
  __int64 *v162; // [rsp+E50h] [rbp+DD0h]
  __int64 v163; // [rsp+E58h] [rbp+DD8h]
  __int64 v164; // [rsp+E60h] [rbp+DE0h]
  char v165; // [rsp+E6Eh] [rbp+DEEh]
  char v166; // [rsp+E6Fh] [rbp+DEFh]
  __int64 v167; // [rsp+E70h] [rbp+DF0h]

  v167 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 3536);
  v164 = a1;
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
          goto LABEL_95;
        case 2:
          goto LABEL_94;
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
          v160 = a2;
          v125 = 0;
          v119 = aSetCodexRouter_0;
          v120 = 24;
          v121 = (__int64)aApp_4;
          v122 = 3;
          v163 = v5;
          v123 = v5;
          v162 = (__int64 *)(v3 + 2480);
          v124 = v3 + 2480;
          sub_1401A9630((__int64)&v138, (__int64)&v119);
          v6 = *(unsigned int *)((char *)v139.m256i_u32 + 2) | ((unsigned __int64)v139.m256i_u16[3] << 32);
          v7 = v139.m256i_i8[0];
          LOBYTE(v8) = v139.m256i_i8[1];
          v9 = v139.m256i_i64[2];
          v10 = v139.m256i_i64[1];
          if ( v138 == (const char *)-1LL )
          {
            v159 = v139.m256i_i64[3];
            goto LABEL_55;
          }
          v118[6] = v146;
          v118[5] = v145;
          v118[4] = v144;
          v118[3] = v143;
          v118[2] = v142;
          v118[1] = v141;
          v118[0] = v140;
          *(_DWORD *)((char *)&v115 + 10) = *(__int32 *)((char *)v139.m256i_i32 + 2);
          HIWORD(v115) = WORD2(v6);
          v117 = *(_OWORD *)&v139.m256i_u64[2];
          *(_QWORD *)&v115 = v138;
          WORD4(v115) = v139.m256i_i16[0];
          v116 = v139.m256i_i64[1];
          v138 = aSetCodexRouter_0;
          v139.m256i_i64[0] = 24;
          v139.m256i_i64[1] = (__int64)aManager_1;
          v139.m256i_i64[2] = 7;
          v139.m256i_i64[3] = v163;
          v140 = (unsigned __int64)v162;
          v11 = sub_14002B2A0((_QWORD *)(*(_QWORD *)(v164 + 2472) + 16LL));
          if ( v11 )
            goto LABEL_6;
          sub_14172C620((__int64)&v119, (__int64)&v138, (__int64)&v139.m256i_i64[1]);
          v7 = (char)v119;
          if ( (_BYTE)v119 == 0xFF )
          {
            v11 = v120;
LABEL_6:
            v138 = aSetCodexRouter_0;
            v139.m256i_i64[0] = 24;
            v139.m256i_i64[1] = (__int64)aEnabled_9;
            v139.m256i_i64[2] = 7;
            v139.m256i_i64[3] = v163;
            v140 = (unsigned __int64)v162;
            sub_1409562A0(&v119, &v138);
            v7 = (char)v119;
            v12 = BYTE1(v119);
            if ( (_BYTE)v119 != 0xFF )
            {
              v13 = *(unsigned int *)((char *)&v119 + 2);
              v14 = HIWORD(v119);
              v10 = v120;
              v9 = v121;
              v159 = v122;
              sub_140203A20(&v115);
              v6 = v13 | (v14 << 32);
              LOBYTE(v8) = v12;
              goto LABEL_55;
            }
            v138 = aSetCodexRouter_0;
            v139.m256i_i64[0] = 24;
            v139.m256i_i64[1] = (__int64)aRelaunch;
            v139.m256i_i64[2] = 8;
            v139.m256i_i64[3] = v163;
            v140 = (unsigned __int64)v162;
            sub_1409543D0(&v119, &v138);
            v7 = (char)v119;
            LOBYTE(v8) = BYTE1(v119);
            if ( (_BYTE)v119 == 0xFF )
            {
              v84 = v164;
              v85 = v164 + 2504;
              sub_14172B820(v164 + 2504, &v115, 152);
              *(_QWORD *)(v84 + 2656) = v11;
              *(_BYTE *)(v84 + 2832) = v12;
              v3 = v84;
              *(_BYTE *)(v84 + 2833) = v8;
              *(_BYTE *)(v84 + 2834) = 0;
              v16 = (__int64 *)(v84 + 2840);
              sub_14172B820(v84 + 2840, v85, 336);
              v15 = (_QWORD *)(v84 + 3512);
              *(_BYTE *)(v84 + 3512) = 0;
              v5 = v163;
              a2 = v160;
LABEL_9:
              v17 = v3 + 3176;
              sub_14172B820(v3 + 3176, v16, 336);
              switch ( *(_BYTE *)(v3 + 3506) )
              {
                case 0:
                  goto LABEL_11;
                case 1:
                  goto LABEL_97;
                case 2:
                  goto LABEL_96;
                case 3:
                  goto LABEL_30;
              }
            }
            v58 = *(unsigned int *)((char *)&v119 + 2);
            v59 = HIWORD(v119);
            v10 = v120;
            v9 = v121;
            v159 = v122;
            sub_140203A20(&v115);
          }
          else
          {
            LOBYTE(v8) = BYTE1(v119);
            v58 = *(unsigned int *)((char *)&v119 + 2);
            v59 = HIWORD(v119);
            v10 = v120;
            v9 = v121;
            v159 = v122;
            sub_140203A20(&v115);
          }
          v6 = v58 | (v59 << 32);
LABEL_55:
          sub_140CAB140(v163);
          if ( *v162 == -1 )
          {
            v66 = 1;
            v67 = v164;
            goto LABEL_79;
          }
          v158 = (_QWORD *)(v164 + 2488);
          v63 = *(_QWORD *)(v164 + 2488);
          v157 = *(_QWORD **)(v164 + 2496);
          v160 = nullptr;
          v153 = v63;
          while ( v157 != v160 )
          {
            v160 = (_QWORD *)((char *)v160 + 1);
            v64 = v63 + 96;
            sub_140401FB0(v63, v60, v61, v62, v87);
            v63 = v64;
          }
          v65 = *v162;
          v66 = 1;
          v67 = v164;
          if ( !*v162 )
            goto LABEL_79;
          goto LABEL_78;
        case 1:
LABEL_95:
          v163 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_94:
          v163 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_8;
      }
  }
LABEL_8:
  v15 = (_QWORD *)(v3 + 3512);
  v16 = (__int64 *)(v3 + 2840);
  switch ( *(_BYTE *)(v3 + 3512) )
  {
    case 0:
      goto LABEL_9;
    case 1:
      v163 = v5;
      v154 = v3 + 2840;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v163 = v5;
      v154 = v3 + 2840;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v17 = v3 + 3176;
      switch ( *(_BYTE *)(v3 + 3506) )
      {
        case 0:
LABEL_11:
          v160 = a2;
          *(_WORD *)(v3 + 3508) = 0;
          sub_14172B820(v3 + 3336, v17, 152);
          v19 = *(volatile signed __int64 ***)(v3 + 3328);
          *(_QWORD *)(v3 + 3488) = v19;
          *(_BYTE *)(v3 + 3507) = *(_BYTE *)(v3 + 3504);
          v20 = *(_BYTE *)(v3 + 3505);
          v21 = *v19;
          v22 = _InterlockedIncrement64(*v19);
          if ( (v22 < 0) ^ v18 | (v22 == 0) )
            goto LABEL_101;
          v23 = v19[1];
          v24 = _InterlockedIncrement64(v23);
          if ( (v24 < 0) ^ v18 | (v24 == 0) )
            goto LABEL_101;
          v25 = v19[2];
          v26 = _InterlockedIncrement64(v25);
          if ( (v26 < 0) ^ v18 | (v26 == 0) )
            goto LABEL_101;
          v27 = v19[3];
          v28 = _InterlockedIncrement64(v27);
          if ( (v28 < 0) ^ v18 | (v28 == 0) )
            goto LABEL_101;
          v29 = v19[4];
          v30 = _InterlockedIncrement64(v29);
          if ( (v30 < 0) ^ v18 | (v30 == 0) )
            goto LABEL_101;
          v159 = v17;
          v31 = v19[5];
          v32 = _InterlockedIncrement64(v31);
          if ( (v32 < 0) ^ v18 | (v32 == 0) )
            goto LABEL_101;
          v33 = v19[7];
          if ( v33 )
          {
            if ( _InterlockedIncrement64(v33) <= 0 )
              goto LABEL_101;
          }
          v34 = v19[6];
          if ( _InterlockedIncrement64(v34) <= 0 )
            goto LABEL_101;
          v158 = v15;
          v162 = v16;
          v163 = v5;
          *(_QWORD *)&v126 = v21;
          *((_QWORD *)&v126 + 1) = v23;
          *(_QWORD *)&v127 = v25;
          *((_QWORD *)&v127 + 1) = v27;
          *(_QWORD *)&v128 = v29;
          *((_QWORD *)&v128 + 1) = v31;
          *((_QWORD *)&v129 + 1) = v33;
          *(_QWORD *)&v129 = v34;
          *(_BYTE *)(v3 + 3509) = 1;
          sub_1401A9D00(&v138, v3 + 3336);
          v36 = *(volatile signed __int64 **)(v3 + 3472);
          v37 = _InterlockedIncrement64(v36);
          if ( (v37 < 0) ^ v35 | (v37 == 0)
            || (v38 = *(volatile signed __int64 **)(v3 + 3480),
                v39 = _InterlockedIncrement64(v38),
                (v39 < 0) ^ v35 | (v39 == 0)) )
          {
LABEL_101:
            BUG();
          }
          sub_14172B820(v89, &v138, 136);
          v90 = v36;
          v91 = v38;
          *(_WORD *)(v3 + 3508) = 0;
          sub_14172B820(&v138, v89, 152);
          v147 = v126;
          v148 = v127;
          v149 = v128;
          v150 = v129;
          v151 = *(_BYTE *)(v3 + 3507);
          v40 = 1;
          if ( v20 != 2 )
            v40 = v20;
          v152 = v40;
          v41 = off_141FB97C0;
          a2 = v160;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v166 = 1;
            v86 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v41 = v86;
          }
          if ( *((_DWORD *)v41 + 4) == 2 )
          {
            v42 = 704;
            if ( *(_BYTE *)v41 )
              v42 = 472;
            v43 = v41[1] + v42;
            v166 = 0;
            v44 = sub_140857FF0(v43, v41, &v138, &off_1417EBF48);
          }
          else
          {
            v45 = 704;
            if ( *((_BYTE *)v41 + 64) )
              v45 = 472;
            v46 = v41[9] + v45;
            v166 = 0;
            v44 = sub_140857FF0(v46, v41 + 8, &v138, &off_1417EBF30);
          }
          v3 = v164;
          *(_QWORD *)(v164 + 3496) = v44;
          break;
        case 1:
LABEL_97:
          v159 = v17;
          v158 = v15;
          v162 = v16;
          JUMPOUT(0x140D7BCA2LL);
        case 2:
LABEL_96:
          v159 = v17;
          v158 = v15;
          v162 = v16;
          v163 = v5;
          sub_14176EC20(&off_1418885C0);
        case 3:
LABEL_30:
          v159 = v17;
          v158 = v15;
          v162 = v16;
          v163 = v5;
          break;
      }
      v157 = (_QWORD *)(v3 + 3496);
      sub_1405050D0(&v138, v3 + 3496, a2);
      v47 = v138;
      if ( v138 == (const char *)-3LL )
      {
        v49 = (_BYTE *)v164;
        *(_BYTE *)(v164 + 3506) = 3;
        goto LABEL_49;
      }
      if ( v138 == (const char *)-2LL )
      {
        v156 = v139.m256i_i64[2];
        v155 = *(_OWORD *)v139.m256i_i8;
        v48 = 0x800000000000000CuLL;
      }
      else
      {
        v48 = v139.m256i_i64[0];
        v155 = *(_OWORD *)&v139.m256i_u64[1];
        v156 = v139.m256i_i64[3];
        sub_14172B820(&v107, &v140, 336);
      }
      *(_OWORD *)v98.m256i_i8 = v155;
      v98.m256i_i64[2] = v156;
      sub_14172B820(&v98.m256i_u64[3], &v107, 336);
      v50 = *v157;
      if ( (unsigned __int8)sub_141398090(*v157) )
        sub_14139A2E0(v50);
      if ( v47 == (const char *)-2LL )
      {
        v138 = (const char *)v48;
        v139 = v98;
        *(_QWORD *)&v140 = v99;
        *(_QWORD *)&v155 = &v138;
        *((_QWORD *)&v155 + 1) = sub_1412DDF00;
        sub_141543AF0(&v107, &unk_1418862D0, &v155);
        sub_140CAB2C0(&v138);
        v51 = (unsigned __int64)v107;
        v8 = (__int64)v108;
        v10 = v109;
LABEL_64:
        v68 = v164;
        *(_BYTE *)(v164 + 3508) = 0;
        *(_BYTE *)(v68 + 3509) = 0;
        sub_140203A20(v68 + 3336);
        sub_14172B820(&v92, &v119, 416);
        *(_BYTE *)(v164 + 3506) = 1;
        v69 = v51 >> 8;
        sub_14172B820(v88, &v92, 416);
        goto LABEL_65;
      }
      v52 = v164;
      if ( v47 == (const char *)-1LL )
      {
        v138 = (const char *)v48;
        v139 = v98;
        v140 = v99;
        v141 = v100;
        v142 = v101;
        *(_QWORD *)&v143 = v102;
        *(_QWORD *)&v155 = 0;
        *((_QWORD *)&v155 + 1) = 1;
        v156 = 0;
        v109 = 1610612768;
        v107 = &v155;
        v108 = &off_141891B48;
        if ( (unsigned __int8)sub_1405060F0(&v138, &v107) )
          sub_14176E860(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v161,
            (unsigned int)&unk_141889838,
            (__int64)&off_141891C00);
        v8 = *((_QWORD *)&v155 + 1);
        v51 = v155;
        v10 = v156;
        sub_140CAC460(&v138);
        goto LABEL_64;
      }
      sub_14172B820(v97, &v98.m256i_u64[2], 344);
      v95[1] = v48;
      v96 = *(_OWORD *)v98.m256i_i8;
      v95[0] = v47;
      v53 = v52;
      if ( *(_BYTE *)(v52 + 3507) )
      {
        v165 = 1;
        sub_1405488D0(v52 + 3336);
      }
      v165 = 1;
      sub_140B2E080(v52 + 3336);
      sub_14172B820(&v107, v95, 320);
      v112 = v105;
      v113 = v106;
      v110 = v103;
      v111 = v104;
      v114 = v97[336];
      v165 = 0;
      sub_1404D15A0(&v138, &v107);
      v54 = v138;
      v8 = v139.m256i_i64[1];
      v51 = v139.m256i_i64[0];
      v55 = v139.m256i_i64[3];
      v10 = v139.m256i_i64[2];
      sub_14172B820(&v119, &v140, 416);
      *(_BYTE *)(v53 + 3508) = 0;
      *(_BYTE *)(v53 + 3509) = 0;
      sub_140203A20(v53 + 3336);
      sub_14172B820(&v92, &v119, 416);
      v49 = (_BYTE *)v164;
      *(_BYTE *)(v164 + 3506) = 1;
      if ( v54 == (const char *)-2LL )
      {
LABEL_49:
        v49[3512] = 3;
        v49[3520] = 3;
        v56 = 3;
        result = 1;
        goto LABEL_80;
      }
      v69 = v51 >> 8;
      sub_14172B820(v88, &v92, 416);
      if ( v54 != (const char *)-1LL )
      {
        sub_14172B820(v118, v88, 416);
        *(_QWORD *)&v115 = v54;
        BYTE8(v115) = v51;
        *(_DWORD *)((char *)&v115 + 9) = v51 >> 8;
        HIBYTE(v115) = v51 >> 8 >> 48;
        *(_WORD *)((char *)&v115 + 13) = HIDWORD(v51) >> 8;
        v116 = v8;
        v117 = __PAIR128__(v55, v10);
        sub_140510B30(&v138, &v115);
        v6 = *(unsigned int *)((char *)v139.m256i_u32 + 2) | ((unsigned __int64)v139.m256i_u16[3] << 32);
        v7 = v139.m256i_i8[0];
        LOBYTE(v8) = v139.m256i_i8[1];
        v9 = v139.m256i_i64[2];
        v10 = v139.m256i_i64[1];
        if ( v138 == (const char *)-1LL )
        {
          v159 = v139.m256i_i64[3];
          v66 = 0;
        }
        else
        {
          v92 = 0;
          v93 = 1;
          v94 = 0;
          v121 = 1610612768;
          v119 = (const char *)&v92;
          v120 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1412DDF00(&v138, &v119) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v161,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v10 = v92;
          v9 = v93;
          v159 = v94;
          sub_140CAB2C0(&v138);
          v66 = 1;
          v7 = 3;
        }
        goto LABEL_73;
      }
LABEL_65:
      v6 = v69 << 8;
      v74 = v6 | (unsigned __int8)v51;
      if ( v10 < 0 )
      {
        v75 = 0;
        goto LABEL_67;
      }
      if ( v10 )
      {
        nullsub_1(v71, v70, v72, v73, v87);
        v75 = 1;
        v76 = sub_140001650(v10, 1);
        if ( !v76 )
        {
LABEL_67:
          v160 = (_QWORD *)(v6 | (unsigned __int8)v51);
          v157 = (_QWORD *)v8;
          sub_14176E54B(v75, v10);
        }
        v9 = v76;
        sub_14172B820(v76, v8, v10);
        if ( !v74 )
          goto LABEL_72;
      }
      else
      {
        v9 = 1;
        if ( !v74 )
          goto LABEL_72;
      }
      sub_140001660(v8, v74, 1);
LABEL_72:
      v66 = 1;
      v7 = 3;
      v159 = v10;
LABEL_73:
      *(_BYTE *)v158 = 1;
      sub_140C7F9E0(v162);
      sub_140CAB140(v163);
      v67 = v164;
      if ( *(_QWORD *)(v164 + 2480) != -1 )
      {
        v158 = (_QWORD *)(v164 + 2488);
        v80 = *(__int64 **)(v164 + 2488);
        v157 = *(_QWORD **)(v164 + 2496);
        v160 = nullptr;
        v162 = v80;
        while ( v157 != v160 )
        {
          v160 = (_QWORD *)((char *)v160 + 1);
          v81 = v80 + 12;
          sub_140401FB0(v80, v77, v78, v79, v87);
          v80 = v81;
        }
        v67 = v164;
        v65 = *(_QWORD *)(v164 + 2480);
        if ( v65 )
LABEL_78:
          sub_140001660(*v158, 96 * v65, 8);
      }
LABEL_79:
      *(_BYTE *)(v67 + 3520) = 1;
      sub_140C9EE70(v163);
      v133 = v6;
      v134 = WORD2(v6);
      v136 = v9;
      v137 = v159;
      v131 = v7;
      v132 = v8;
      v135 = v10;
      v130 = v66;
      v82 = v164;
      *(_BYTE *)(v164 + 3539) = 0;
      sub_14172B820(&v138, v82, 360);
      *(_BYTE *)(v82 + 3538) = 0;
      v83 = *(_QWORD *)(v82 + 384);
      *(_BYTE *)(v82 + 3537) = 0;
      v116 = *(_QWORD *)(v82 + 376);
      v115 = *(_OWORD *)(v82 + 360);
      sub_140AFFC30((__int64)&v138, v83, (__int64)&v130, &v115, *(_DWORD *)(v82 + 3528), *(_DWORD *)(v82 + 3532));
      v56 = 1;
      result = 0;
      v49 = (_BYTE *)v164;
LABEL_80:
      v49[3536] = v56;
      return result;
  }
}
