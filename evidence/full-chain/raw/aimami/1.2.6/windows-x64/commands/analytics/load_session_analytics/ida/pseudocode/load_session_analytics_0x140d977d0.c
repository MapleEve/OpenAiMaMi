// Pseudocode for load_session_analytics (EA: 0x140d977d0, size: 0x141b)
// Module: commands/analytics
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:加载会话分析(range)。归属:锚src\commands\analytics.rs。
// Tauri命令handler:加载会话分析(range)。归属:锚src\commands\analytics.rs。
char __fastcall load_session_analytics(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // r12
  volatile void *v15; // rdi
  __int64 *v16; // r15
  char *v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rdi
  unsigned __int64 v20; // rbx
  int v21; // r13d
  unsigned int v22; // r12d
  PVOID v23; // rcx
  char v24; // al
  unsigned __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // r12
  char *v28; // r13
  __int64 v29; // rax
  _QWORD *v30; // r12
  const char *v31; // r14
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rax
  unsigned __int8 v37; // r12
  __int64 v38; // r13
  __int64 v39; // rcx
  PVOID v40; // rcx
  char v41; // al
  _QWORD *v42; // rbx
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int64 v49; // r12
  _BYTE *v50; // rdx
  char v51; // cl
  char result; // al
  __int64 v53; // rsi
  __int64 v54; // rdi
  const char *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r14
  __int64 v61; // rbx
  __int64 v62; // rax
  char *v63; // rbx
  _QWORD *v64; // rcx
  _QWORD *v65; // r13
  __int64 v66; // rdi
  __int64 v67; // rdx
  _QWORD *v68; // rdi
  int v69; // eax
  __int64 v70; // [rsp+20h] [rbp-60h]
  _BYTE v71[992]; // [rsp+38h] [rbp-48h] BYREF
  const char *v72; // [rsp+418h] [rbp+398h] BYREF
  __int64 v73; // [rsp+420h] [rbp+3A0h]
  const char *v74; // [rsp+428h] [rbp+3A8h] BYREF
  __int64 v75; // [rsp+430h] [rbp+3B0h]
  __int64 *v76; // [rsp+438h] [rbp+3B8h]
  __int128 v77; // [rsp+440h] [rbp+3C0h]
  __int128 v78; // [rsp+450h] [rbp+3D0h]
  __int128 v79; // [rsp+460h] [rbp+3E0h]
  __int128 v80; // [rsp+470h] [rbp+3F0h]
  __int128 v81; // [rsp+480h] [rbp+400h]
  __int128 v82; // [rsp+810h] [rbp+790h]
  __int128 v83; // [rsp+820h] [rbp+7A0h]
  __int128 v84; // [rsp+830h] [rbp+7B0h]
  __int128 v85; // [rsp+840h] [rbp+7C0h]
  __int128 v86; // [rsp+850h] [rbp+7D0h]
  _QWORD v87[5]; // [rsp+868h] [rbp+7E8h] BYREF
  __int128 v88; // [rsp+890h] [rbp+810h]
  __int128 v89; // [rsp+8A0h] [rbp+820h]
  __int64 v90; // [rsp+8B0h] [rbp+830h]
  __int128 v91; // [rsp+8C0h] [rbp+840h]
  __int128 v92; // [rsp+8D0h] [rbp+850h]
  __int128 v93; // [rsp+8E0h] [rbp+860h]
  __int128 v94; // [rsp+8F0h] [rbp+870h]
  __int128 v95; // [rsp+900h] [rbp+880h]
  __int64 v96; // [rsp+918h] [rbp+898h] BYREF
  char v97; // [rsp+920h] [rbp+8A0h]
  int v98; // [rsp+921h] [rbp+8A1h]
  __int16 v99; // [rsp+925h] [rbp+8A5h]
  char v100; // [rsp+927h] [rbp+8A7h]
  const char *v101; // [rsp+928h] [rbp+8A8h]
  __int64 v102; // [rsp+930h] [rbp+8B0h]
  __int64 v103; // [rsp+938h] [rbp+8B8h]
  _BYTE v104[24]; // [rsp+950h] [rbp+8D0h] BYREF
  __int64 v105; // [rsp+968h] [rbp+8E8h]
  __int64 *v106; // [rsp+970h] [rbp+8F0h]
  __int128 v107; // [rsp+978h] [rbp+8F8h]
  __int128 v108; // [rsp+988h] [rbp+908h]
  __int128 v109; // [rsp+998h] [rbp+918h]
  __int128 v110; // [rsp+9A8h] [rbp+928h]
  __int128 v111; // [rsp+9B8h] [rbp+938h]
  __int128 v112; // [rsp+9D0h] [rbp+950h] BYREF
  __int128 v113; // [rsp+9E0h] [rbp+960h]
  __int128 v114; // [rsp+9F0h] [rbp+970h]
  __int128 v115; // [rsp+A00h] [rbp+980h]
  __int128 v116; // [rsp+A10h] [rbp+990h]
  __int128 v117; // [rsp+A20h] [rbp+9A0h] BYREF
  __int128 v118; // [rsp+A30h] [rbp+9B0h]
  __int64 v119; // [rsp+A40h] [rbp+9C0h]
  _BYTE *v120; // [rsp+A50h] [rbp+9D0h]
  __int64 v121; // [rsp+A58h] [rbp+9D8h]
  __int64 v122; // [rsp+A60h] [rbp+9E0h]
  __int64 v123; // [rsp+A68h] [rbp+9E8h]
  __int64 **v124; // [rsp+A70h] [rbp+9F0h] BYREF
  __int64 v125; // [rsp+A78h] [rbp+9F8h]
  unsigned __int64 v126; // [rsp+A80h] [rbp+A00h]
  __int64 *v127; // [rsp+A88h] [rbp+A08h] BYREF
  __int64 v128; // [rsp+A90h] [rbp+A10h]
  __int64 v129; // [rsp+A98h] [rbp+A18h]
  char *v130; // [rsp+AA0h] [rbp+A20h]
  _BYTE *v131; // [rsp+AA8h] [rbp+A28h]
  _BYTE *v132; // [rsp+AB0h] [rbp+A30h]
  _BYTE *v133; // [rsp+AB8h] [rbp+A38h]
  __int128 v134; // [rsp+AC0h] [rbp+A40h]
  __int128 v135; // [rsp+AD0h] [rbp+A50h]
  __int64 v136; // [rsp+AE0h] [rbp+A60h]
  __int64 v137; // [rsp+AE8h] [rbp+A68h]
  _BYTE *v138; // [rsp+AF0h] [rbp+A70h]
  __int64 *v139; // [rsp+AF8h] [rbp+A78h]
  __int64 v140; // [rsp+B00h] [rbp+A80h]
  __int64 v141; // [rsp+B08h] [rbp+A88h]
  PVOID v142; // [rsp+B10h] [rbp+A90h]
  _QWORD *v143; // [rsp+B18h] [rbp+A98h]
  char *v144; // [rsp+B20h] [rbp+AA0h]
  _QWORD *v145; // [rsp+B28h] [rbp+AA8h]
  char *v146; // [rsp+B30h] [rbp+AB0h]
  __int64 *v147; // [rsp+B38h] [rbp+AB8h]
  __int64 v148; // [rsp+B40h] [rbp+AC0h]
  char *v149; // [rsp+B48h] [rbp+AC8h]
  char v150; // [rsp+B57h] [rbp+AD7h] BYREF
  __int64 v151; // [rsp+B58h] [rbp+AD8h]
  _QWORD *v152; // [rsp+B60h] [rbp+AE0h]
  PVOID Address; // [rsp+B68h] [rbp+AE8h]
  char v154; // [rsp+B77h] [rbp+AF7h]
  char *v155; // [rsp+B78h] [rbp+AF8h]
  __int64 v156; // [rsp+B80h] [rbp+B00h]

  v156 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 8000);
  v151 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8001) = 257;
      *(_BYTE *)(a1 + 8003) = 1;
      v5 = (__int64 *)(a1 + 4192);
      sub_14172B820(a1 + 4192, a1 + 392, 3800);
      switch ( *(_BYTE *)(v3 + 7984) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_107;
        case 2:
          goto LABEL_106;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = (__int64 *)(a1 + 4192);
      switch ( *(_BYTE *)(a1 + 7984) )
      {
        case 0:
LABEL_4:
          v6 = v3 + 4712;
          v72 = aLoadSessionAna;
          v73 = 22;
          v74 = aRepo_0;
          v75 = 4;
          v147 = v5;
          v76 = v5;
          v77 = (unsigned __int64)(v3 + 4712);
          v7 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 4704) + 16LL));
          v149 = (char *)(v3 + 4712);
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)v104, (__int64)&v72, (__int64)&v74);
          v8 = v104[0];
          if ( v104[0] == 0xFF )
          {
            v7 = *(_QWORD *)&v104[8];
LABEL_5:
            v72 = aLoadSessionAna;
            v73 = 22;
            v74 = aRange;
            v75 = 5;
            v76 = v147;
            v77 = v6;
            sub_140955980(v104, &v72);
            v8 = v104[0];
            if ( v104[0] == 0xFF )
            {
              v9 = v105;
              v3 = v151;
              v10 = v151 + 4736;
              v11 = *(_OWORD *)&v104[8];
              *(_QWORD *)(v151 + 4760) = v7;
              *(_OWORD *)(v3 + 4736) = v11;
              *(_QWORD *)(v3 + 4752) = v9;
              *(_BYTE *)(v3 + 5808) = 0;
              v12 = v3 + 5816;
              sub_14172B820(v3 + 5816, v10, 1080);
              v13 = v3 + 7976;
              *(_BYTE *)(v3 + 7976) = 0;
              v5 = v147;
LABEL_8:
              v14 = v3 + 6896;
              sub_14172B820(v3 + 6896, v12, 1080);
              switch ( *(_BYTE *)(v3 + 7968) )
              {
                case 0:
                  goto LABEL_10;
                case 1:
                  goto LABEL_109;
                case 2:
                  goto LABEL_108;
                case 3:
                  goto LABEL_22;
              }
            }
          }
          v16 = (__int64 *)(((unsigned __int64)((v104[7] << 16) | (unsigned int)*(unsigned __int16 *)&v104[5]) << 32)
                          | *(unsigned int *)&v104[1]);
          v31 = *(const char **)&v104[8];
          v32 = *(_QWORD *)&v104[16];
          v33 = v105;
          sub_140CAB140(v147);
          if ( *(_QWORD *)v149 == -1 )
          {
            v37 = 1;
            v38 = v151;
            goto LABEL_90;
          }
          v152 = (_QWORD *)(v151 + 4720);
          v34 = *(_QWORD *)(v151 + 4720);
          Address = *(PVOID *)(v151 + 4728);
          v155 = nullptr;
          v148 = v34;
          while ( Address != v155 )
          {
            ++v155;
            v35 = v34 + 96;
            sub_140401FB0();
            v34 = v35;
          }
          v36 = *(_QWORD *)v149;
          v37 = 1;
          v38 = v151;
          if ( !*(_QWORD *)v149 )
            goto LABEL_90;
          goto LABEL_89;
        case 1:
LABEL_107:
          v147 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_106:
          v147 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v13 = v3 + 7976;
  v12 = v3 + 5816;
  switch ( *(_BYTE *)(v3 + 7976) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v147 = v5;
      v122 = v3 + 7976;
      v121 = v3 + 5816;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v147 = v5;
      v122 = v3 + 7976;
      v121 = v3 + 5816;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v14 = v3 + 6896;
      switch ( *(_BYTE *)(v3 + 7968) )
      {
        case 0:
LABEL_10:
          v140 = v14;
          v137 = v12;
          v138 = (_BYTE *)v13;
          v147 = v5;
          v15 = *(volatile void **)(v3 + 6920);
          *(_QWORD *)(v3 + 6928) = v15;
          *(_BYTE *)(v3 + 7969) = 1;
          v155 = *(char **)(v3 + 6896);
          v152 = *(_QWORD **)(v3 + 6904);
          v139 = *(__int64 **)(v3 + 6912);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v15, 1, 0) )
          {
            v146 = v155;
            v145 = v152;
            sub_14176CDB0(v15);
          }
          Address = (PVOID)v15;
          v16 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v146 = v155;
            v145 = v152;
            v69 = sub_14176DA50(a1);
            LOBYTE(v69) = v69 ^ 1;
            LODWORD(v148) = v69;
            v17 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_33;
          }
          else
          {
            LODWORD(v148) = 0;
            v17 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_33;
          }
          v127 = nullptr;
          v128 = 1;
          v129 = 0;
          v74 = (const char *)1610612768;
          v72 = (const char *)&v127;
          v73 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v72) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v150,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v19 = v127;
          v149 = (char *)v128;
          LODWORD(v20) = (unsigned __int8)v129;
          v21 = HIBYTE(v129);
          v22 = *(unsigned __int16 *)((char *)&v129 + 5);
          v13 = *(unsigned int *)((char *)&v129 + 1);
          if ( !(_BYTE)v148 )
          {
            if ( 2 * *v16 )
            {
              v146 = v155;
              v145 = v152;
              if ( !(unsigned __int8)sub_14176DA50(v18) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v23 = Address;
          v24 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v24 == 2 )
          {
            v146 = v155;
            v145 = v152;
            WakeByAddressSingle(v23);
          }
          if ( v19 != (__int64 *)-1LL )
          {
            v25 = ((unsigned __int64)((v21 << 16) | v22) << 32) | v13;
            v26 = v151;
            v27 = v140;
            v28 = (char *)v19;
            if ( *(_BYTE *)(v151 + 7969) != 1 )
              goto LABEL_70;
LABEL_68:
            if ( v155 )
              sub_140001660(v152, v155, 1);
            goto LABEL_70;
          }
          v17 = v149;
          LODWORD(v148) = v20;
LABEL_33:
          Address = v17;
          sub_140A80280(v71, v17 + 8);
          if ( (v148 & 1) == 0 )
          {
            if ( 2 * *v16 )
            {
              v146 = v155;
              v145 = v152;
              if ( !(unsigned __int8)sub_14176DA50(v39) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v40 = Address;
          v41 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v41 == 2 )
          {
            v146 = v155;
            v145 = v152;
            WakeByAddressSingle(v40);
          }
          v42 = (_QWORD *)v151;
          *(_BYTE *)(v151 + 7969) = 0;
          v30 = v42 + 867;
          sub_14172B820(v42 + 867, v71, 992);
          v42[991] = v155;
          v42[992] = v152;
          v42[993] = v139;
          Address = v42 + 995;
          *((_BYTE *)v42 + 7960) = 0;
LABEL_38:
          v148 = (__int64)v30;
          sub_14172B820(&v72, v30, 1016);
          v43 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v154 = 1;
            v68 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v43 = v68;
          }
          if ( *((_DWORD *)v43 + 4) == 2 )
          {
            v44 = 704;
            if ( *(_BYTE *)v43 )
              v44 = 472;
            v45 = v43[1] + v44;
            v154 = 0;
            v46 = sub_14085F350(v45, v43, &v72, &off_1417EBF48);
          }
          else
          {
            v47 = 704;
            if ( *((_BYTE *)v43 + 64) )
              v47 = 472;
            v48 = v43[9] + v47;
            v154 = 0;
            v46 = sub_14085F350(v48, v43 + 8, &v72, &off_1417EBF30);
          }
          v3 = v151;
          *(_QWORD *)(v151 + 7952) = v46;
LABEL_48:
          v139 = (__int64 *)(v3 + 7952);
          sub_140503FD0(&v127, v3 + 7952, a2);
          v16 = v127;
          if ( v127 == (__int64 *)-3LL )
          {
            *(_BYTE *)Address = 3;
            goto LABEL_52;
          }
          if ( (_DWORD)v127 == -2 )
          {
            v28 = (char *)v128;
            v149 = (char *)v129;
            v49 = 0x800000000000000CuLL;
            v20 = (unsigned __int64)v130;
          }
          else
          {
            v49 = v128;
            v28 = (char *)v129;
            v149 = v130;
            v20 = (unsigned __int64)v131;
            v13 = (unsigned __int64)v132;
            v120 = v133;
            v117 = v134;
            v118 = v135;
            v119 = v136;
          }
          v88 = v117;
          v89 = v118;
          v90 = v119;
          v53 = *v139;
          v144 = v155;
          v143 = v152;
          v142 = Address;
          v141 = v148;
          if ( (unsigned __int8)sub_141398090(v53) )
          {
            v144 = v155;
            v143 = v152;
            v142 = Address;
            v141 = v148;
            sub_14139A2E0(v53);
          }
          if ( (_DWORD)v16 == -1 )
          {
            *(_BYTE *)Address = 1;
            if ( v49 == -1 )
              goto LABEL_67;
            if ( v49 != -2 )
            {
              v87[0] = v49;
              v87[1] = v28;
              v87[2] = v149;
              v87[3] = v20;
              v87[4] = v13;
              v146 = v155;
              v145 = v152;
              sub_1404CDDC0(&v72, v87);
              v54 = (__int64)v72;
              v28 = (char *)v73;
              v55 = v74;
              v20 = v75;
              v16 = v76;
              v112 = v77;
              v113 = v78;
              v114 = v79;
              v115 = v80;
              v116 = v81;
              v50 = (_BYTE *)v151;
              *(_BYTE *)(v151 + 7969) = 0;
              v95 = v116;
              v94 = v115;
              v93 = v114;
              v92 = v113;
              v91 = v112;
              v50[7968] = 1;
              if ( v54 != -2 )
              {
                v149 = (char *)v55;
                v25 = v20 >> 8;
                v27 = v140;
                goto LABEL_71;
              }
LABEL_53:
              v50[7976] = 3;
              v50[7984] = 3;
              v51 = 3;
              result = 1;
              goto LABEL_91;
            }
LABEL_52:
            v50 = (_BYTE *)v151;
            *(_BYTE *)(v151 + 7968) = 3;
            goto LABEL_53;
          }
          if ( (_DWORD)v16 == -2 )
          {
            v127 = (__int64 *)v49;
            v128 = (__int64)v28;
            v129 = (__int64)v149;
            v130 = (char *)v20;
            v131 = (_BYTE *)v13;
            v132 = v120;
            v124 = &v127;
            v125 = (__int64)sub_1412DDF00;
            sub_141543AF0(&v117, &unk_1418862F1, &v124);
            v144 = v155;
            v143 = v152;
            v142 = Address;
            v141 = v148;
            sub_140CAB2C0(&v127);
            v149 = *((char **)&v117 + 1);
            v28 = (char *)v117;
            v20 = v118;
          }
          else
          {
            v127 = v16;
            v128 = v49;
            v129 = (__int64)v28;
            v130 = v149;
            v131 = (_BYTE *)v20;
            v132 = (_BYTE *)v13;
            v133 = v120;
            v134 = v88;
            v135 = v89;
            v136 = v90;
            v124 = nullptr;
            v125 = 1;
            v126 = 0;
            *(_QWORD *)&v118 = 1610612768;
            *(_QWORD *)&v117 = &v124;
            *((_QWORD *)&v117 + 1) = &off_141891B48;
            if ( (unsigned __int8)sub_1405060F0(&v127, &v117) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v150,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v28 = (char *)v124;
            v149 = (char *)v125;
            v20 = v126;
            v144 = v155;
            v143 = v152;
            v142 = Address;
            v141 = v148;
            sub_140CAC460(&v127);
          }
          *(_BYTE *)Address = 1;
LABEL_67:
          v26 = v151;
          v27 = v140;
          v25 = v20 >> 8;
          if ( *(_BYTE *)(v151 + 7969) == 1 )
            goto LABEL_68;
LABEL_70:
          *(_BYTE *)(v26 + 7969) = 0;
          v95 = v116;
          v94 = v115;
          v93 = v114;
          v92 = v113;
          v91 = v112;
          *(_BYTE *)(v26 + 7968) = 1;
          v54 = -1;
LABEL_71:
          v86 = v95;
          v85 = v94;
          v84 = v93;
          v83 = v92;
          v82 = v91;
          sub_140CA7FC0(v27);
          v60 = v25 << 8;
          v33 = v60 | (unsigned __int8)v20;
          if ( v54 != -1 )
          {
            v111 = v86;
            v110 = v85;
            v109 = v84;
            v108 = v83;
            v107 = v82;
            *(_QWORD *)v104 = v54;
            *(_QWORD *)&v104[8] = v28;
            *(_QWORD *)&v104[16] = v149;
            v105 = v60 | (unsigned __int8)v20;
            v106 = v16;
            sub_14050C3C0(&v72, v104);
            v16 = (__int64 *)(((unsigned __int64)((HIBYTE(v73) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v73 + 5)) << 32)
                            | *(unsigned int *)((char *)&v73 + 1));
            v8 = v73;
            v31 = v74;
            v32 = v75;
            v33 = (__int64)v76;
            if ( v72 == (const char *)-1LL )
            {
              v37 = 0;
            }
            else
            {
              HIBYTE(v73) = (((unsigned __int64)((HIBYTE(v73) << 16)
                                               | (unsigned int)*(unsigned __int16 *)((char *)&v73 + 5)) << 32)
                           | *(unsigned int *)((char *)&v73 + 1)) >> 48;
              *(_WORD *)((char *)&v73 + 5) = WORD2(v16);
              *(_DWORD *)((char *)&v73 + 1) = (_DWORD)v16;
              *(_QWORD *)&v112 = 0;
              *((_QWORD *)&v112 + 1) = 1;
              *(_QWORD *)&v113 = 0;
              v129 = 1610612768;
              v127 = (__int64 *)&v112;
              v128 = (__int64)&off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v72, &v127) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v150,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v32 = *((_QWORD *)&v112 + 1);
              v31 = (const char *)v112;
              v33 = v113;
              sub_140CAB2C0(&v72);
              v37 = 1;
              v8 = 3;
            }
            goto LABEL_84;
          }
          if ( v60 < 0 )
          {
            v61 = 0;
            goto LABEL_77;
          }
          if ( !v33 )
          {
            v32 = 1;
            v63 = v149;
            if ( !v28 )
              goto LABEL_83;
            goto LABEL_82;
          }
          nullsub_1(v57, v56, v58, v59, v70);
          v61 = 1;
          v62 = sub_140001650(v33, 1);
          if ( !v62 )
          {
LABEL_77:
            v155 = v28;
            sub_14176E54B(v61, v33);
          }
          v32 = v62;
          v63 = v149;
          sub_14172B820(v62, v149, v33);
          if ( v28 )
LABEL_82:
            sub_140001660(v63, v28, 1);
LABEL_83:
          v37 = 1;
          v8 = 3;
          v31 = (const char *)v33;
LABEL_84:
          *v138 = 1;
          sub_140CAB140(v147);
          v38 = v151;
          if ( *(_QWORD *)(v151 + 4712) != -1 )
          {
            v152 = (_QWORD *)(v151 + 4720);
            v64 = *(_QWORD **)(v151 + 4720);
            Address = *(PVOID *)(v151 + 4728);
            v155 = nullptr;
            v149 = (char *)v64;
            while ( Address != v155 )
            {
              ++v155;
              v65 = v64 + 12;
              sub_140401FB0();
              v64 = v65;
            }
            v38 = v151;
            v36 = *(_QWORD *)(v151 + 4712);
            if ( v36 )
LABEL_89:
              sub_140001660(*v152, 96 * v36, 8);
          }
LABEL_90:
          *(_BYTE *)(v38 + 7984) = 1;
          sub_140CA0C60(v147);
          v98 = (int)v16;
          v100 = BYTE6(v16);
          v99 = WORD2(v16);
          v102 = v32;
          v103 = v33;
          v97 = v8;
          v101 = v31;
          v96 = v37;
          v66 = v151;
          *(_BYTE *)(v151 + 8003) = 0;
          sub_14172B820(&v72, v66, 360);
          *(_BYTE *)(v66 + 8002) = 0;
          v67 = *(_QWORD *)(v66 + 384);
          *(_BYTE *)(v66 + 8001) = 0;
          *(_QWORD *)&v104[16] = *(_QWORD *)(v66 + 376);
          *(_OWORD *)v104 = *(_OWORD *)(v66 + 360);
          sub_140AFFC30(
            (__int64)&v72,
            v67,
            (__int64)&v96,
            (__int128 *)v104,
            *(_DWORD *)(v66 + 7992),
            *(_DWORD *)(v66 + 7996));
          v51 = 1;
          result = 0;
          v50 = (_BYTE *)v151;
LABEL_91:
          v50[8000] = v51;
          return result;
        case 1:
LABEL_109:
          v140 = v14;
          v137 = v12;
          v138 = (_BYTE *)v13;
          JUMPOUT(0x140D98B61LL);
        case 2:
LABEL_108:
          v140 = v14;
          v137 = v12;
          v138 = (_BYTE *)v13;
          v147 = v5;
          sub_14176EC20(&off_141888BC0);
        case 3:
LABEL_22:
          v140 = v14;
          Address = (PVOID)(v3 + 7960);
          v29 = *(unsigned __int8 *)(v3 + 7960);
          v30 = (_QWORD *)(v3 + 6936);
          v147 = v5;
          v138 = (_BYTE *)v13;
          v137 = v12;
          switch ( v29 )
          {
            case 0LL:
              goto LABEL_38;
            case 1LL:
              v123 = v3 + 6936;
              sub_14176EC00(&off_1418856B8);
            case 2LL:
              v123 = v3 + 6936;
              sub_14176EC20(&off_1418856B8);
            case 3LL:
              v148 = v3 + 6936;
              goto LABEL_48;
          }
      }
  }
}
