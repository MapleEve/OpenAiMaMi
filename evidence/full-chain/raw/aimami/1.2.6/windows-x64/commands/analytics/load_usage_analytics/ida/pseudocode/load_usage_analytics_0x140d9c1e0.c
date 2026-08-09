// Pseudocode for load_usage_analytics (EA: 0x140d9c1e0, size: 0x1236)
// Module: commands/analytics
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:加载用量分析总览。归属:锚src\commands\analytics.rs。
// Tauri命令handler:加载用量分析总览。归属:锚src\commands\analytics.rs。
char __fastcall load_usage_analytics(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rax
  volatile void *v9; // rsi
  __int64 *v10; // rsi
  int v11; // eax
  char *v12; // r14
  char v13; // cl
  __int64 v14; // rcx
  void *v15; // r13
  unsigned __int64 v16; // rbx
  int v17; // r12d
  unsigned int v18; // r15d
  __int64 v19; // rdi
  PVOID v20; // rcx
  char v21; // al
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rdi
  _BYTE *v24; // rsi
  PVOID v25; // r12
  __int64 v26; // rax
  void *v27; // rsi
  char v28; // bl
  int v29; // r13d
  unsigned int v30; // r12d
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 *v35; // rcx
  __int64 *v36; // r12
  __int64 v37; // rcx
  PVOID v38; // rcx
  char v39; // al
  __int64 v40; // rdi
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned __int64 v47; // r14
  __int64 v48; // rsi
  __int64 v49; // rcx
  char v50; // cl
  char result; // al
  __int64 v52; // r14
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int8 v57; // r12
  __int64 v58; // rbx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r14
  __int64 v61; // rax
  unsigned __int64 v62; // rbx
  __int64 v63; // r13
  __int64 *v64; // rcx
  __int64 *v65; // r13
  __int64 v66; // rax
  char *v67; // rdi
  __int64 *v68; // rsi
  __int64 v69; // rcx
  char v70; // al
  __int64 v71; // rdi
  __int64 v72; // rdx
  _QWORD *v73; // rdi
  unsigned int v74; // eax
  __int64 v75; // rcx
  PVOID v76; // rcx
  char v77; // al
  __int64 v78; // [rsp+20h] [rbp-60h]
  _BYTE v79[136]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v80; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v81; // [rsp+D0h] [rbp+50h]
  __int64 v82; // [rsp+D8h] [rbp+58h]
  _BYTE v83[136]; // [rsp+4A0h] [rbp+420h] BYREF
  _QWORD v84[5]; // [rsp+528h] [rbp+4A8h] BYREF
  char v85[136]; // [rsp+550h] [rbp+4D0h] BYREF
  const char *v86; // [rsp+5D8h] [rbp+558h] BYREF
  __int64 v87; // [rsp+5E0h] [rbp+560h]
  __int64 v88; // [rsp+5E8h] [rbp+568h] BYREF
  __int64 v89; // [rsp+5F0h] [rbp+570h]
  unsigned __int64 v90; // [rsp+5F8h] [rbp+578h]
  _QWORD v91[119]; // [rsp+600h] [rbp+580h] BYREF
  __int64 v92; // [rsp+9B8h] [rbp+938h] BYREF
  __int64 v93; // [rsp+9C0h] [rbp+940h]
  __int64 v94; // [rsp+9C8h] [rbp+948h]
  __int128 v95; // [rsp+A40h] [rbp+9C0h]
  __int128 v96; // [rsp+A50h] [rbp+9D0h]
  __int128 v97; // [rsp+A60h] [rbp+9E0h]
  __int128 v98; // [rsp+A70h] [rbp+9F0h]
  __int128 v99; // [rsp+A80h] [rbp+A00h]
  __int128 v100; // [rsp+A90h] [rbp+A10h]
  __int128 v101; // [rsp+AA0h] [rbp+A20h]
  __int128 v102; // [rsp+AB0h] [rbp+A30h]
  __int128 v103; // [rsp+AC0h] [rbp+A40h] BYREF
  __int128 v104; // [rsp+AD0h] [rbp+A50h]
  __int128 v105; // [rsp+AE0h] [rbp+A60h]
  __int128 v106; // [rsp+AF0h] [rbp+A70h]
  __int128 v107; // [rsp+B00h] [rbp+A80h]
  __int128 v108; // [rsp+B10h] [rbp+A90h]
  __int128 v109; // [rsp+B20h] [rbp+AA0h]
  __int128 v110; // [rsp+B30h] [rbp+AB0h]
  __int128 v111; // [rsp+B40h] [rbp+AC0h]
  __int128 v112; // [rsp+B50h] [rbp+AD0h]
  __int64 v113; // [rsp+B68h] [rbp+AE8h] BYREF
  char v114; // [rsp+B70h] [rbp+AF0h]
  int v115; // [rsp+B71h] [rbp+AF1h]
  __int16 v116; // [rsp+B75h] [rbp+AF5h]
  char v117; // [rsp+B77h] [rbp+AF7h]
  __int64 v118; // [rsp+B78h] [rbp+AF8h]
  __int64 v119; // [rsp+B80h] [rbp+B00h]
  __int64 v120; // [rsp+B88h] [rbp+B08h]
  __int128 v121; // [rsp+B90h] [rbp+B10h] BYREF
  __int128 v122; // [rsp+BA0h] [rbp+B20h]
  __int128 v123; // [rsp+BB0h] [rbp+B30h]
  __int128 v124; // [rsp+BC0h] [rbp+B40h]
  __int128 v125; // [rsp+BD0h] [rbp+B50h] BYREF
  __int128 v126; // [rsp+BE0h] [rbp+B60h]
  _BYTE v127[72]; // [rsp+BF0h] [rbp+B70h]
  __int64 v128; // [rsp+C40h] [rbp+BC0h]
  __int64 v129; // [rsp+C48h] [rbp+BC8h]
  __int128 *v130; // [rsp+C50h] [rbp+BD0h] BYREF
  __int64 v131; // [rsp+C58h] [rbp+BD8h]
  unsigned __int64 v132; // [rsp+C60h] [rbp+BE0h]
  __int64 *v133; // [rsp+C68h] [rbp+BE8h]
  __int64 v134; // [rsp+C70h] [rbp+BF0h]
  _QWORD *v135; // [rsp+C78h] [rbp+BF8h]
  __int64 *v136; // [rsp+C80h] [rbp+C00h]
  void *v137; // [rsp+C88h] [rbp+C08h]
  PVOID v138; // [rsp+C90h] [rbp+C10h]
  unsigned __int64 v139; // [rsp+C98h] [rbp+C18h]
  char v140; // [rsp+CA7h] [rbp+C27h] BYREF
  __int64 v141; // [rsp+CA8h] [rbp+C28h]
  PVOID v142; // [rsp+CB0h] [rbp+C30h]
  char v143; // [rsp+CBFh] [rbp+C3Fh]
  PVOID Address; // [rsp+CC0h] [rbp+C40h]
  char v145; // [rsp+CCFh] [rbp+C4Fh]
  __int64 v146; // [rsp+CD0h] [rbp+C50h]

  v146 = -2;
  v2 = a1;
  v3 = *(unsigned __int8 *)(a1 + 7712);
  v141 = a1;
  v135 = a2;
  switch ( v3 )
  {
    case 0LL:
      *(_WORD *)(a1 + 7713) = 257;
      *(_BYTE *)(a1 + 7715) = 1;
      v4 = a1 + 4048;
      sub_14172B820(a1 + 4048, a1 + 392, 3656);
      switch ( *(_BYTE *)(v2 + 7696) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_123;
        case 2:
          goto LABEL_122;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v4 = a1 + 4048;
      switch ( *(_BYTE *)(a1 + 7696) )
      {
        case 0:
LABEL_4:
          v91[1] = 0;
          v86 = aLoadUsageAnaly;
          v87 = 20;
          v88 = (__int64)aRepo_0;
          v89 = 4;
          v139 = v4;
          v90 = v4;
          v91[0] = v2 + 4568;
          v5 = sub_140029DD0((volatile void *)(*(_QWORD *)(v2 + 4560) + 16LL));
          if ( v5 )
            goto LABEL_5;
          sub_14172C620((__int64)&v80, (__int64)&v86, (__int64)&v88);
          v28 = v80;
          if ( (_BYTE)v80 == 0xFF )
          {
            v5 = *((_QWORD *)&v80 + 1);
LABEL_5:
            v2 = v141;
            v6 = v141 + 4592;
            *(_QWORD *)(v141 + 4592) = v5;
            *(_BYTE *)(v2 + 5616) = 0;
            v7 = v2 + 5624;
            sub_14172B820(v2 + 5624, v6, 1032);
            v136 = (__int64 *)(v2 + 7688);
            *(_BYTE *)(v2 + 7688) = 0;
            v4 = v139;
LABEL_7:
            sub_14172B820(v2 + 6656, v7, 1032);
            switch ( *(_BYTE *)(v2 + 7680) )
            {
              case 0:
                goto LABEL_9;
              case 1:
                goto LABEL_125;
              case 2:
                goto LABEL_124;
              case 3:
                goto LABEL_21;
            }
          }
          v136 = (__int64 *)(v2 + 4568);
          v29 = BYTE7(v80);
          v30 = *(unsigned __int16 *)((char *)&v80 + 5);
          v31 = *(unsigned int *)((char *)&v80 + 1);
          v32 = *((_QWORD *)&v80 + 1);
          v33 = v81;
          v34 = v82;
          sub_140CAB140(v139);
          v22 = ((unsigned __int64)((v29 << 16) | v30) << 32) | v31;
          if ( *v136 == -1 )
          {
            v57 = 1;
            v63 = v141;
            goto LABEL_93;
          }
          v135 = (_QWORD *)(v141 + 4576);
          v35 = *(__int64 **)(v141 + 4576);
          v142 = *(PVOID *)(v141 + 4584);
          Address = nullptr;
          v133 = v35;
          while ( v142 != Address )
          {
            Address = (char *)Address + 1;
            v36 = v35 + 12;
            sub_140401FB0();
            v35 = v36;
          }
          v66 = *v136;
          v57 = 1;
          v63 = v141;
          if ( *v136 )
            goto LABEL_92;
          goto LABEL_93;
        case 1:
LABEL_123:
          v139 = v4;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_122:
          v139 = v4;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v8 = *(unsigned __int8 *)(v2 + 7688);
  v7 = v2 + 5624;
  v136 = (__int64 *)(v2 + 7688);
  switch ( v8 )
  {
    case 0LL:
      goto LABEL_7;
    case 1LL:
      v139 = v4;
      v128 = v2 + 5624;
      sub_14176EC00(&off_1418851A0);
    case 2LL:
      v139 = v4;
      v128 = v2 + 5624;
      sub_14176EC20(&off_1418851A0);
    case 3LL:
      switch ( *(_BYTE *)(v2 + 7680) )
      {
        case 0:
LABEL_9:
          v134 = v7;
          v139 = v4;
          v9 = *(volatile void **)(v2 + 6656);
          *(_QWORD *)(v2 + 6664) = v9;
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v9, 1, 0) )
            sub_14176CDB0(v9);
          Address = (PVOID)v9;
          v10 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v11 = sub_14176DA50(a1);
            LOBYTE(v11) = v11 ^ 1;
          }
          else
          {
            v11 = 0;
          }
          v12 = (char *)Address;
          v13 = *((_BYTE *)Address + 1);
          LODWORD(v142) = v11;
          if ( !v13 )
            goto LABEL_29;
          *(_QWORD *)&v125 = 0;
          *((_QWORD *)&v125 + 1) = 1;
          *(_QWORD *)&v126 = 0;
          v88 = 1610612768;
          v86 = (const char *)&v125;
          v87 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v86) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v140,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v12 = *((char **)&v125 + 1);
          v15 = (void *)v125;
          LODWORD(v16) = (unsigned __int8)v126;
          v17 = BYTE7(v126);
          v18 = *(unsigned __int16 *)((char *)&v126 + 5);
          v19 = *(unsigned int *)((char *)&v126 + 1);
          if ( !(_BYTE)v142 && 2 * *v10 && !(unsigned __int8)sub_14176DA50(v14) )
            *((_BYTE *)Address + 1) = 1;
          v20 = Address;
          v21 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v21 == 2 )
            WakeByAddressSingle(v20);
          if ( v15 != (void *)-1LL )
          {
            v22 = (unsigned __int64)((v17 << 16) | v18) << 32;
            v23 = v22 | v19;
            v24 = (_BYTE *)v141;
            v25 = v12;
LABEL_61:
            sub_14172B820(v83, &v92, 136);
            v24[7680] = 1;
            v52 = -1;
            goto LABEL_62;
          }
          LODWORD(v142) = v16;
LABEL_29:
          Address = v12;
          sub_140A80280(&v80, v12 + 8);
          if ( ((unsigned __int8)v142 & 1) == 0 && 2 * *v10 && !(unsigned __int8)sub_14176DA50(v37) )
            *((_BYTE *)Address + 1) = 1;
          v38 = Address;
          v39 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v39 == 2 )
            WakeByAddressSingle(v38);
          v40 = v141;
          v27 = (void *)(v141 + 6672);
          sub_14172B820(v141 + 6672, &v80, 992);
          Address = (PVOID)(v40 + 7672);
          *(_BYTE *)(v40 + 7672) = 0;
LABEL_34:
          v142 = v27;
          sub_14172B820(&v86, v27, 992);
          v41 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v143 = 1;
            v73 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v41 = v73;
          }
          if ( *((_DWORD *)v41 + 4) == 2 )
          {
            v42 = 704;
            if ( *(_BYTE *)v41 )
              v42 = 472;
            v43 = v41[1] + v42;
            v143 = 0;
            v44 = sub_14085ED70(v43, v41, &v86, &off_1417EBF48);
          }
          else
          {
            v45 = 704;
            if ( *((_BYTE *)v41 + 64) )
              v45 = 472;
            v46 = v41[9] + v45;
            v143 = 0;
            v44 = sub_14085ED70(v46, v41 + 8, &v86, &off_1417EBF30);
          }
          v2 = v141;
          *(_QWORD *)(v141 + 7664) = v44;
LABEL_44:
          v133 = (__int64 *)(v2 + 7664);
          sub_140504940(&v125, v2 + 7664, v135);
          v22 = v125;
          if ( (_QWORD)v125 == -1 )
          {
            *(_BYTE *)Address = 3;
            v24 = (_BYTE *)v141;
LABEL_55:
            v24[7680] = 3;
LABEL_56:
            v24[7688] = 3;
            v24[7696] = 3;
            v50 = 3;
            result = 1;
            goto LABEL_94;
          }
          if ( (_DWORD)v125 == 2 )
          {
            v15 = *((void **)&v125 + 1);
            v25 = (PVOID)v126;
            v47 = 0x800000000000000CuLL;
            v16 = *((_QWORD *)&v126 + 1);
          }
          else
          {
            v47 = *((_QWORD *)&v125 + 1);
            v25 = *((PVOID *)&v126 + 1);
            v15 = (void *)v126;
            v16 = *(_QWORD *)v127;
            v121 = *(_OWORD *)&v127[8];
            v122 = *(_OWORD *)&v127[24];
            v123 = *(_OWORD *)&v127[40];
            v124 = *(_OWORD *)&v127[56];
          }
          v109 = v121;
          v110 = v122;
          v111 = v123;
          v112 = v124;
          v48 = *v133;
          v138 = Address;
          v137 = v142;
          if ( (unsigned __int8)sub_141398090(v48) )
          {
            v138 = Address;
            v137 = v142;
            sub_14139A2E0(v48);
          }
          if ( v22 )
          {
            if ( (_DWORD)v22 == 2 )
            {
              *(_QWORD *)&v125 = v47;
              *((_QWORD *)&v125 + 1) = v15;
              *(_QWORD *)&v126 = v25;
              *((_QWORD *)&v126 + 1) = v16;
              *(_OWORD *)v127 = v109;
              v130 = &v125;
              v131 = (__int64)sub_1412DDF00;
              sub_141543AF0(&v121, &unk_1418862F1, &v130);
              v138 = Address;
              v137 = v142;
              sub_140CAB2C0(&v125);
              v25 = *((PVOID *)&v121 + 1);
              v15 = (void *)v121;
              v16 = v122;
            }
            else
            {
              *(_QWORD *)&v125 = v47;
              *((_QWORD *)&v125 + 1) = v15;
              *(_QWORD *)&v126 = v25;
              *((_QWORD *)&v126 + 1) = v16;
              *(_OWORD *)v127 = v109;
              *(_OWORD *)&v127[16] = v110;
              *(_OWORD *)&v127[32] = v111;
              *(_OWORD *)&v127[48] = v112;
              v130 = nullptr;
              v131 = 1;
              v132 = 0;
              *(_QWORD *)&v122 = 1610612768;
              *(_QWORD *)&v121 = &v130;
              *((_QWORD *)&v121 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1405060F0(&v125, &v121) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v140,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v15 = v130;
              v25 = (PVOID)v131;
              v16 = v132;
              v138 = Address;
              v137 = v142;
              sub_140CAC460(&v125);
            }
            *(_BYTE *)Address = 1;
            v24 = (_BYTE *)v141;
            goto LABEL_60;
          }
          v99 = v109;
          v100 = v110;
          v101 = v111;
          v102 = v112;
          *(_BYTE *)Address = 1;
          v24 = (_BYTE *)v141;
          if ( v47 == -2 )
            goto LABEL_55;
          v98 = v102;
          v97 = v101;
          v96 = v100;
          v95 = v99;
          if ( v47 == -1 )
          {
LABEL_60:
            v23 = v16 >> 8;
            goto LABEL_61;
          }
          v108 = v98;
          v107 = v97;
          v106 = v96;
          v105 = v95;
          *(_QWORD *)&v103 = v47;
          *((_QWORD *)&v103 + 1) = v15;
          *(_QWORD *)&v104 = v25;
          *((_QWORD *)&v104 + 1) = v16;
          v67 = *(char **)(v141 + 6664);
          LOBYTE(v49) = 1;
          if ( _InterlockedCompareExchange8(v67, 1, 0) )
          {
            v145 = 1;
            sub_14176CDB0(v67);
          }
          v68 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v145 = 1;
            v74 = sub_14176DA50(v49);
            v69 = v74;
            LOBYTE(v69) = v74 ^ 1;
            if ( v67[1] )
            {
LABEL_87:
              if ( !(_BYTE)v69 )
              {
                if ( 2 * *v68 )
                {
                  v145 = 1;
                  if ( !(unsigned __int8)sub_14176DA50(v69) )
                    v67[1] = 1;
                }
              }
              v70 = *v67;
              *v67 = 0;
              if ( v70 == 2 )
              {
                v145 = 1;
                WakeByAddressSingle(v67);
              }
              goto LABEL_114;
            }
          }
          else
          {
            v69 = 0;
            if ( v67[1] )
              goto LABEL_87;
          }
          LODWORD(v142) = v69;
          Address = v67;
          sub_140AE9FF0(&v86, v67 + 8, &v103);
          if ( (_DWORD)v86 != -1 )
            sub_140CAC460(&v86);
          if ( !(_BYTE)v142 )
          {
            if ( 2 * *v68 )
            {
              v145 = 1;
              if ( !(unsigned __int8)sub_14176DA50(v75) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v76 = Address;
          v77 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v77 == 2 )
          {
            v145 = 1;
            WakeByAddressSingle(v76);
          }
LABEL_114:
          *(_OWORD *)&v127[48] = v108;
          *(_OWORD *)&v127[32] = v107;
          *(_OWORD *)&v127[16] = v106;
          *(_OWORD *)v127 = v105;
          v126 = v104;
          v125 = v103;
          v145 = 0;
          sub_1404D0140(&v86, &v125);
          v52 = (__int64)v86;
          v15 = (void *)v87;
          v25 = (PVOID)v88;
          v16 = v89;
          v22 = v90;
          sub_14172B820(&v92, v91, 136);
          sub_14172B820(v83, &v92, 136);
          v24 = (_BYTE *)v141;
          *(_BYTE *)(v141 + 7680) = 1;
          if ( v52 == -2 )
            goto LABEL_56;
          v23 = v16 >> 8;
LABEL_62:
          v53 = v23 << 8;
          v34 = v53 | (unsigned __int8)v16;
          sub_14172B820(v79, v83, 136);
          if ( v52 != -1 )
          {
            sub_14172B820(v85, v79, 136);
            v84[0] = v52;
            v84[1] = v15;
            v84[2] = v25;
            v84[3] = v53 | (unsigned __int8)v16;
            v84[4] = v22;
            sub_14050E4D0(&v86, v84);
            v22 = ((unsigned __int64)((HIBYTE(v87) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v87 + 5)) << 32)
                | *(unsigned int *)((char *)&v87 + 1);
            v28 = v87;
            v32 = v88;
            v33 = v89;
            v34 = v90;
            if ( v86 == (const char *)-1LL )
            {
              v57 = 0;
            }
            else
            {
              HIBYTE(v87) = (((unsigned __int64)((HIBYTE(v87) << 16)
                                               | (unsigned int)*(unsigned __int16 *)((char *)&v87 + 5)) << 32)
                           | *(unsigned int *)((char *)&v87 + 1)) >> 48;
              *(_WORD *)((char *)&v87 + 5) = WORD2(v22);
              *(_DWORD *)((char *)&v87 + 1) = v22;
              v92 = 0;
              v93 = 1;
              v94 = 0;
              v81 = 1610612768;
              *(_QWORD *)&v80 = &v92;
              *((_QWORD *)&v80 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v86, &v80) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v140,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v32 = v92;
              v33 = v93;
              v34 = v94;
              sub_140CAB2C0(&v86);
              v57 = 1;
              v28 = 3;
            }
            v59 = v139;
            goto LABEL_76;
          }
          if ( v53 < 0 )
          {
            v58 = 0;
            goto LABEL_68;
          }
          v59 = v139;
          if ( !v34 )
          {
            v33 = 1;
            if ( !v15 )
              goto LABEL_75;
            goto LABEL_74;
          }
          v60 = v139;
          nullsub_1(v139, v54, v55, v56, v78);
          v58 = 1;
          v61 = sub_140001650(v34, 1);
          if ( !v61 )
          {
LABEL_68:
            v142 = v25;
            Address = v15;
            sub_14176E54B(v58, v34);
          }
          v33 = v61;
          sub_14172B820(v61, v25, v34);
          v59 = v60;
          if ( v15 )
          {
LABEL_74:
            v62 = v59;
            sub_140001660(v25, v15, 1);
            v59 = v62;
          }
LABEL_75:
          v57 = 1;
          v28 = 3;
          v32 = v34;
LABEL_76:
          *(_BYTE *)v136 = 1;
          sub_140CAB140(v59);
          v63 = v141;
          if ( *(_QWORD *)(v141 + 4568) != -1 )
          {
            v135 = (_QWORD *)(v141 + 4576);
            v64 = *(__int64 **)(v141 + 4576);
            v142 = *(PVOID *)(v141 + 4584);
            Address = nullptr;
            v136 = v64;
            while ( v142 != Address )
            {
              Address = (char *)Address + 1;
              v65 = v64 + 12;
              sub_140401FB0();
              v64 = v65;
            }
            v63 = v141;
            v66 = *(_QWORD *)(v141 + 4568);
            if ( v66 )
LABEL_92:
              sub_140001660(*v135, 96 * v66, 8);
          }
LABEL_93:
          *(_BYTE *)(v63 + 7696) = 1;
          sub_140CA1360(v139);
          v115 = v22;
          v117 = BYTE6(v22);
          v116 = WORD2(v22);
          v119 = v33;
          v120 = v34;
          v114 = v28;
          v118 = v32;
          v113 = v57;
          v71 = v141;
          *(_BYTE *)(v141 + 7715) = 0;
          sub_14172B820(&v86, v71, 360);
          *(_BYTE *)(v71 + 7714) = 0;
          v72 = *(_QWORD *)(v71 + 384);
          *(_BYTE *)(v71 + 7713) = 0;
          v81 = *(_QWORD *)(v71 + 376);
          v80 = *(_OWORD *)(v71 + 360);
          sub_140AFFC30((__int64)&v86, v72, (__int64)&v113, &v80, *(_DWORD *)(v71 + 7704), *(_DWORD *)(v71 + 7708));
          v50 = 1;
          result = 0;
          v24 = (_BYTE *)v141;
LABEL_94:
          v24[7712] = v50;
          return result;
        case 1:
LABEL_125:
          v134 = v7;
          JUMPOUT(0x140D9D39ALL);
        case 2:
LABEL_124:
          v134 = v7;
          v139 = v4;
          sub_14176EC20(&off_141888B90);
        case 3:
LABEL_21:
          Address = (PVOID)(v2 + 7672);
          v26 = *(unsigned __int8 *)(v2 + 7672);
          v27 = (void *)(v2 + 6672);
          v139 = v4;
          v134 = v7;
          switch ( v26 )
          {
            case 0LL:
              goto LABEL_34;
            case 1LL:
              v129 = v2 + 6672;
              sub_14176EC00(&off_1418856B8);
            case 2LL:
              v129 = v2 + 6672;
              sub_14176EC20(&off_1418856B8);
            case 3LL:
              v142 = (PVOID)(v2 + 6672);
              goto LABEL_44;
          }
      }
  }
}
