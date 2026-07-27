// module: codexmate_lib/commands/analytics
// addr: 0x140cd3d40
// name: load_change_analytics
// win 1.2.1 | module src/commands/analytics.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = load_change_analytics | mapped via command-name string xref (win-native, ground-truth)
char __fastcall load_change_analytics(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rdi
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  volatile void *v17; // rdi
  __int64 *v18; // r15
  char *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rdi
  unsigned __int64 v23; // rbx
  int v24; // r13d
  unsigned int v25; // r12d
  PVOID v26; // rcx
  char v27; // al
  unsigned __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // r12
  char *v31; // r13
  __int64 v32; // rax
  _QWORD *v33; // r12
  const char *v34; // r14
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r12
  __int64 v42; // rax
  unsigned __int8 v43; // r12
  __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  PVOID v47; // rcx
  char v48; // al
  _QWORD *v49; // rbx
  _QWORD *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned __int64 v56; // r12
  _BYTE *v57; // rdx
  char v58; // cl
  char result; // al
  __int64 v60; // rsi
  __int64 v61; // rdi
  const char *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r14
  __int64 v65; // r8
  __int64 v66; // rbx
  __int64 v67; // rax
  char *v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  _QWORD *v72; // rcx
  _QWORD *v73; // r13
  __int64 v74; // rdi
  __int64 v75; // rdx
  _QWORD *v76; // rdi
  int v77; // eax
  __int64 v78; // [rsp+20h] [rbp-60h]
  _BYTE v79[992]; // [rsp+38h] [rbp-48h] BYREF
  const char *v80; // [rsp+418h] [rbp+398h] BYREF
  __int64 v81; // [rsp+420h] [rbp+3A0h]
  const char *v82; // [rsp+428h] [rbp+3A8h] BYREF
  __int64 v83; // [rsp+430h] [rbp+3B0h]
  __int64 v84; // [rsp+438h] [rbp+3B8h]
  __int128 v85; // [rsp+440h] [rbp+3C0h]
  __int128 v86; // [rsp+450h] [rbp+3D0h]
  __int128 v87; // [rsp+460h] [rbp+3E0h]
  __int128 v88; // [rsp+470h] [rbp+3F0h]
  __int128 v89; // [rsp+480h] [rbp+400h]
  __int128 v90; // [rsp+810h] [rbp+790h]
  __int128 v91; // [rsp+820h] [rbp+7A0h]
  __int128 v92; // [rsp+830h] [rbp+7B0h]
  __int128 v93; // [rsp+840h] [rbp+7C0h]
  __int128 v94; // [rsp+850h] [rbp+7D0h]
  _QWORD v95[5]; // [rsp+868h] [rbp+7E8h] BYREF
  __int128 v96; // [rsp+890h] [rbp+810h]
  __int128 v97; // [rsp+8A0h] [rbp+820h]
  __int64 v98; // [rsp+8B0h] [rbp+830h]
  __int128 v99; // [rsp+8C0h] [rbp+840h]
  __int128 v100; // [rsp+8D0h] [rbp+850h]
  __int128 v101; // [rsp+8E0h] [rbp+860h]
  __int128 v102; // [rsp+8F0h] [rbp+870h]
  __int128 v103; // [rsp+900h] [rbp+880h]
  __int64 v104; // [rsp+918h] [rbp+898h] BYREF
  char v105; // [rsp+920h] [rbp+8A0h]
  int v106; // [rsp+921h] [rbp+8A1h]
  __int16 v107; // [rsp+925h] [rbp+8A5h]
  char v108; // [rsp+927h] [rbp+8A7h]
  const char *v109; // [rsp+928h] [rbp+8A8h]
  __int64 v110; // [rsp+930h] [rbp+8B0h]
  __int64 v111; // [rsp+938h] [rbp+8B8h]
  _BYTE v112[24]; // [rsp+950h] [rbp+8D0h] BYREF
  __int64 v113; // [rsp+968h] [rbp+8E8h]
  __int64 *v114; // [rsp+970h] [rbp+8F0h]
  __int128 v115; // [rsp+978h] [rbp+8F8h]
  __int128 v116; // [rsp+988h] [rbp+908h]
  __int128 v117; // [rsp+998h] [rbp+918h]
  __int128 v118; // [rsp+9A8h] [rbp+928h]
  __int128 v119; // [rsp+9B8h] [rbp+938h]
  __int128 v120; // [rsp+9D0h] [rbp+950h] BYREF
  __int128 v121; // [rsp+9E0h] [rbp+960h]
  __int128 v122; // [rsp+9F0h] [rbp+970h]
  __int128 v123; // [rsp+A00h] [rbp+980h]
  __int128 v124; // [rsp+A10h] [rbp+990h]
  __int128 v125; // [rsp+A20h] [rbp+9A0h] BYREF
  __int128 v126; // [rsp+A30h] [rbp+9B0h]
  __int64 v127; // [rsp+A40h] [rbp+9C0h]
  _BYTE *v128; // [rsp+A50h] [rbp+9D0h]
  __int64 v129; // [rsp+A58h] [rbp+9D8h]
  __int64 v130; // [rsp+A60h] [rbp+9E0h]
  __int64 v131; // [rsp+A68h] [rbp+9E8h]
  __int64 **v132; // [rsp+A70h] [rbp+9F0h] BYREF
  __int64 v133; // [rsp+A78h] [rbp+9F8h]
  unsigned __int64 v134; // [rsp+A80h] [rbp+A00h]
  __int64 *v135; // [rsp+A88h] [rbp+A08h] BYREF
  __int64 v136; // [rsp+A90h] [rbp+A10h]
  __int64 v137; // [rsp+A98h] [rbp+A18h]
  char *v138; // [rsp+AA0h] [rbp+A20h]
  _BYTE *v139; // [rsp+AA8h] [rbp+A28h]
  _BYTE *v140; // [rsp+AB0h] [rbp+A30h]
  _BYTE *v141; // [rsp+AB8h] [rbp+A38h]
  __int128 v142; // [rsp+AC0h] [rbp+A40h]
  __int128 v143; // [rsp+AD0h] [rbp+A50h]
  __int64 v144; // [rsp+AE0h] [rbp+A60h]
  __int64 v145; // [rsp+AE8h] [rbp+A68h]
  _BYTE *v146; // [rsp+AF0h] [rbp+A70h]
  __int64 *v147; // [rsp+AF8h] [rbp+A78h]
  __int64 v148; // [rsp+B00h] [rbp+A80h]
  __int64 v149; // [rsp+B08h] [rbp+A88h]
  PVOID v150; // [rsp+B10h] [rbp+A90h]
  _QWORD *v151; // [rsp+B18h] [rbp+A98h]
  char *v152; // [rsp+B20h] [rbp+AA0h]
  _QWORD *v153; // [rsp+B28h] [rbp+AA8h]
  char *v154; // [rsp+B30h] [rbp+AB0h]
  __int64 v155; // [rsp+B38h] [rbp+AB8h]
  __int64 v156; // [rsp+B40h] [rbp+AC0h]
  char *v157; // [rsp+B48h] [rbp+AC8h]
  char v158; // [rsp+B57h] [rbp+AD7h] BYREF
  __int64 v159; // [rsp+B58h] [rbp+AD8h]
  _QWORD *v160; // [rsp+B60h] [rbp+AE0h]
  PVOID Address; // [rsp+B68h] [rbp+AE8h]
  char v162; // [rsp+B77h] [rbp+AF7h]
  char *v163; // [rsp+B78h] [rbp+AF8h]
  __int64 v164; // [rsp+B80h] [rbp+B00h]

  v164 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 8000);
  v159 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8001) = 257;
      *(_BYTE *)(a1 + 8003) = 1;
      v7 = a1 + 4192;
      sub_141684120(a1 + 4192, a1 + 392, 3800);
      switch ( *(_BYTE *)(v5 + 7984) )
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
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 4192;
      switch ( *(_BYTE *)(a1 + 7984) )
      {
        case 0:
LABEL_4:
          v8 = v5 + 4712;
          v80 = aLoadChangeAnal;
          v81 = 21;
          v82 = aRepo_0;
          v83 = 4;
          v155 = v7;
          v84 = v7;
          v85 = (unsigned __int64)(v5 + 4712);
          v9 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4704) + 16LL));
          v157 = (char *)(v5 + 4712);
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(v112, &v80, &v82);
          v10 = v112[0];
          if ( v112[0] == 0xFF )
          {
            v9 = *(_QWORD *)&v112[8];
LABEL_5:
            v80 = aLoadChangeAnal;
            v81 = 21;
            v82 = aRange;
            v83 = 5;
            v84 = v155;
            v85 = v8;
            sub_1409757B0(v112, &v80);
            v10 = v112[0];
            if ( v112[0] == 0xFF )
            {
              v11 = v113;
              v5 = v159;
              v12 = v159 + 4736;
              v13 = *(_OWORD *)&v112[8];
              *(_QWORD *)(v159 + 4760) = v9;
              *(_OWORD *)(v5 + 4736) = v13;
              *(_QWORD *)(v5 + 4752) = v11;
              *(_BYTE *)(v5 + 5808) = 0;
              v14 = v5 + 5816;
              sub_141684120(v5 + 5816, v12, 1080);
              v15 = v5 + 7976;
              *(_BYTE *)(v5 + 7976) = 0;
              v7 = v155;
LABEL_8:
              v16 = v5 + 6896;
              sub_141684120(v5 + 6896, v14, 1080);
              switch ( *(_BYTE *)(v5 + 7968) )
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
          v18 = (__int64 *)(((unsigned __int64)((v112[7] << 16) | (unsigned int)*(unsigned __int16 *)&v112[5]) << 32)
                          | *(unsigned int *)&v112[1]);
          v34 = *(const char **)&v112[8];
          v35 = *(_QWORD *)&v112[16];
          v36 = v113;
          sub_140BF0DE0(v155);
          if ( *(_QWORD *)v157 == -1 )
          {
            v43 = 1;
            v44 = v159;
            goto LABEL_90;
          }
          v160 = (_QWORD *)(v159 + 4720);
          v40 = *(_QWORD *)(v159 + 4720);
          Address = *(PVOID *)(v159 + 4728);
          v163 = nullptr;
          v156 = v40;
          while ( Address != v163 )
          {
            ++v163;
            v41 = v40 + 96;
            sub_1402C7520(v40, v37, v38, v39, v78);
            v40 = v41;
          }
          v42 = *(_QWORD *)v157;
          v43 = 1;
          v44 = v159;
          if ( !*(_QWORD *)v157 )
            goto LABEL_90;
          goto LABEL_89;
        case 1:
LABEL_107:
          v155 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_106:
          v155 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = v5 + 7976;
  v14 = v5 + 5816;
  switch ( *(_BYTE *)(v5 + 7976) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v155 = v7;
      v130 = v5 + 7976;
      v129 = v5 + 5816;
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2:
      v155 = v7;
      v130 = v5 + 7976;
      v129 = v5 + 5816;
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3:
      v16 = v5 + 6896;
      switch ( *(_BYTE *)(v5 + 7968) )
      {
        case 0:
LABEL_10:
          v148 = v16;
          v145 = v14;
          v146 = (_BYTE *)v15;
          v155 = v7;
          v17 = *(volatile void **)(v5 + 6920);
          *(_QWORD *)(v5 + 6928) = v17;
          *(_BYTE *)(v5 + 7969) = 1;
          v163 = *(char **)(v5 + 6896);
          v160 = *(_QWORD **)(v5 + 6904);
          v147 = *(__int64 **)(v5 + 6912);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v17, 1, 0) )
          {
            v154 = v163;
            v153 = v160;
            sub_1416C15B0(v17);
          }
          Address = (PVOID)v17;
          v18 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v154 = v163;
            v153 = v160;
            v77 = sub_1416C2250(a1, a2);
            LOBYTE(v77) = v77 ^ 1;
            LODWORD(v156) = v77;
            v19 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_33;
          }
          else
          {
            LODWORD(v156) = 0;
            v19 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_33;
          }
          v135 = nullptr;
          v136 = 1;
          v137 = 0;
          v82 = (const char *)1610612768;
          v80 = (const char *)&v135;
          v81 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v80) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v158,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v22 = v135;
          v157 = (char *)v136;
          LODWORD(v23) = (unsigned __int8)v137;
          v24 = HIBYTE(v137);
          v25 = *(unsigned __int16 *)((char *)&v137 + 5);
          v15 = *(unsigned int *)((char *)&v137 + 1);
          if ( !(_BYTE)v156 )
          {
            if ( 2 * *v18 )
            {
              v154 = v163;
              v153 = v160;
              if ( !(unsigned __int8)sub_1416C2250(v21, v20) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v26 = Address;
          v27 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v27 == 2 )
          {
            v154 = v163;
            v153 = v160;
            WakeByAddressSingle(v26);
          }
          if ( v22 != (__int64 *)-1LL )
          {
            v28 = ((unsigned __int64)((v24 << 16) | v25) << 32) | v15;
            v29 = v159;
            v30 = v148;
            v31 = (char *)v22;
            if ( *(_BYTE *)(v159 + 7969) != 1 )
              goto LABEL_70;
LABEL_68:
            if ( v163 )
              sub_140001660(v160, v163, 1);
            goto LABEL_70;
          }
          v19 = v157;
          LODWORD(v156) = v23;
LABEL_33:
          Address = v19;
          sub_1407BC950(v79, v19 + 8);
          if ( (v156 & 1) == 0 )
          {
            if ( 2 * *v18 )
            {
              v154 = v163;
              v153 = v160;
              if ( !(unsigned __int8)sub_1416C2250(v46, v45) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v47 = Address;
          v48 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v48 == 2 )
          {
            v154 = v163;
            v153 = v160;
            WakeByAddressSingle(v47);
          }
          v49 = (_QWORD *)v159;
          *(_BYTE *)(v159 + 7969) = 0;
          v33 = v49 + 867;
          sub_141684120(v49 + 867, v79, 992);
          v49[991] = v163;
          v49[992] = v160;
          v49[993] = v147;
          Address = v49 + 995;
          *((_BYTE *)v49 + 7960) = 0;
LABEL_38:
          v156 = (__int64)v33;
          sub_141684120(&v80, v33, 1016);
          v50 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v162 = 1;
            v76 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v50 = v76;
          }
          if ( *((_DWORD *)v50 + 4) == 2 )
          {
            v51 = 704;
            if ( *(_BYTE *)v50 )
              v51 = 472;
            v52 = v50[1] + v51;
            v162 = 0;
            v53 = sub_14089E7F0(v52, (__int64)v50, (__int64)&v80, (__int64)&off_1417642A8);
          }
          else
          {
            v54 = 704;
            if ( *((_BYTE *)v50 + 64) )
              v54 = 472;
            v55 = v50[9] + v54;
            v162 = 0;
            v53 = sub_14089E7F0(v55, (__int64)(v50 + 8), (__int64)&v80, (__int64)&off_141764290);
          }
          v5 = v159;
          *(_QWORD *)(v159 + 7952) = v53;
LABEL_48:
          v147 = (__int64 *)(v5 + 7952);
          sub_140B01FD0(&v135, v5 + 7952, a2);
          v18 = v135;
          if ( v135 == (__int64 *)-3LL )
          {
            *(_BYTE *)Address = 3;
            goto LABEL_52;
          }
          if ( (_DWORD)v135 == -2 )
          {
            v31 = (char *)v136;
            v157 = (char *)v137;
            v56 = 0x800000000000000CuLL;
            v23 = (unsigned __int64)v138;
          }
          else
          {
            v56 = v136;
            v31 = (char *)v137;
            v157 = v138;
            v23 = (unsigned __int64)v139;
            v15 = (unsigned __int64)v140;
            v128 = v141;
            v125 = v142;
            v126 = v143;
            v127 = v144;
          }
          v96 = v125;
          v97 = v126;
          v98 = v127;
          v60 = *v147;
          v152 = v163;
          v151 = v160;
          v150 = Address;
          v149 = v156;
          if ( (unsigned __int8)sub_1412F2A80(v60) )
          {
            v152 = v163;
            v151 = v160;
            v150 = Address;
            v149 = v156;
            sub_1412E7580(v60);
          }
          if ( (_DWORD)v18 == -1 )
          {
            *(_BYTE *)Address = 1;
            if ( v56 == -1 )
              goto LABEL_67;
            if ( v56 != -2 )
            {
              v95[0] = v56;
              v95[1] = v31;
              v95[2] = v157;
              v95[3] = v23;
              v95[4] = v15;
              v154 = v163;
              v153 = v160;
              sub_140ACC2E0(&v80, v95);
              v61 = (__int64)v80;
              v31 = (char *)v81;
              v62 = v82;
              v23 = v83;
              v18 = (__int64 *)v84;
              v120 = v85;
              v121 = v86;
              v122 = v87;
              v123 = v88;
              v124 = v89;
              v57 = (_BYTE *)v159;
              *(_BYTE *)(v159 + 7969) = 0;
              v103 = v124;
              v102 = v123;
              v101 = v122;
              v100 = v121;
              v99 = v120;
              v57[7968] = 1;
              if ( v61 != -2 )
              {
                v157 = (char *)v62;
                v28 = v23 >> 8;
                v30 = v148;
                goto LABEL_71;
              }
LABEL_53:
              v57[7976] = 3;
              v57[7984] = 3;
              v58 = 3;
              result = 1;
              goto LABEL_91;
            }
LABEL_52:
            v57 = (_BYTE *)v159;
            *(_BYTE *)(v159 + 7968) = 3;
            goto LABEL_53;
          }
          if ( (_DWORD)v18 == -2 )
          {
            v135 = (__int64 *)v56;
            v136 = (__int64)v31;
            v137 = (__int64)v157;
            v138 = (char *)v23;
            v139 = (_BYTE *)v15;
            v140 = v128;
            v132 = &v135;
            v133 = (__int64)sub_141230630;
            sub_14149C0F0(&v125, &unk_1417B8CD1, &v132);
            v152 = v163;
            v151 = v160;
            v150 = Address;
            v149 = v156;
            sub_140BF0F60(&v135);
            v157 = *((char **)&v125 + 1);
            v31 = (char *)v125;
            v23 = v126;
          }
          else
          {
            v135 = v18;
            v136 = v56;
            v137 = (__int64)v31;
            v138 = v157;
            v139 = (_BYTE *)v23;
            v140 = (_BYTE *)v15;
            v141 = v128;
            v142 = v96;
            v143 = v97;
            v144 = v98;
            v132 = nullptr;
            v133 = 1;
            v134 = 0;
            *(_QWORD *)&v126 = 1610612768;
            *(_QWORD *)&v125 = &v132;
            *((_QWORD *)&v125 + 1) = &off_1417C41C0;
            if ( (unsigned __int8)sub_140B036A0(&v135, &v125) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v158,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v31 = (char *)v132;
            v157 = (char *)v133;
            v23 = v134;
            v152 = v163;
            v151 = v160;
            v150 = Address;
            v149 = v156;
            sub_140BF2F60(&v135);
          }
          *(_BYTE *)Address = 1;
LABEL_67:
          v29 = v159;
          v30 = v148;
          v28 = v23 >> 8;
          if ( *(_BYTE *)(v159 + 7969) == 1 )
            goto LABEL_68;
LABEL_70:
          *(_BYTE *)(v29 + 7969) = 0;
          v103 = v124;
          v102 = v123;
          v101 = v122;
          v100 = v121;
          v99 = v120;
          *(_BYTE *)(v29 + 7968) = 1;
          v61 = -1;
LABEL_71:
          v94 = v103;
          v93 = v102;
          v92 = v101;
          v91 = v100;
          v90 = v99;
          sub_140BEDB50(v30);
          v64 = v28 << 8;
          v36 = v64 | (unsigned __int8)v23;
          if ( v61 != -1 )
          {
            v119 = v94;
            v118 = v93;
            v117 = v92;
            v116 = v91;
            v115 = v90;
            *(_QWORD *)v112 = v61;
            *(_QWORD *)&v112[8] = v31;
            *(_QWORD *)&v112[16] = v157;
            v113 = v64 | (unsigned __int8)v23;
            v114 = v18;
            sub_140B088A0(&v80, v112);
            v18 = (__int64 *)(((unsigned __int64)((HIBYTE(v81) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v81 + 5)) << 32)
                            | *(unsigned int *)((char *)&v81 + 1));
            v10 = v81;
            v34 = v82;
            v35 = v83;
            v36 = v84;
            if ( v80 == (const char *)-1LL )
            {
              v43 = 0;
            }
            else
            {
              HIBYTE(v81) = (((unsigned __int64)((HIBYTE(v81) << 16)
                                               | (unsigned int)*(unsigned __int16 *)((char *)&v81 + 5)) << 32)
                           | *(unsigned int *)((char *)&v81 + 1)) >> 48;
              *(_WORD *)((char *)&v81 + 5) = WORD2(v18);
              *(_DWORD *)((char *)&v81 + 1) = (_DWORD)v18;
              *(_QWORD *)&v120 = 0;
              *((_QWORD *)&v120 + 1) = 1;
              *(_QWORD *)&v121 = 0;
              v137 = 1610612768;
              v135 = (__int64 *)&v120;
              v136 = (__int64)&off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v80, &v135, v65) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v158,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v35 = *((_QWORD *)&v120 + 1);
              v34 = (const char *)v120;
              v36 = v121;
              sub_140BF0F60(&v80);
              v43 = 1;
              v10 = 3;
            }
            goto LABEL_84;
          }
          if ( v64 < 0 )
          {
            v66 = 0;
            goto LABEL_77;
          }
          if ( !v36 )
          {
            v35 = 1;
            v68 = v157;
            if ( !v31 )
              goto LABEL_83;
            goto LABEL_82;
          }
          nullsub_1(v63);
          v66 = 1;
          v67 = sub_140001650(v36, 1);
          if ( !v67 )
          {
LABEL_77:
            v163 = v31;
            sub_1416C2D4B(v66, v36);
          }
          v35 = v67;
          v68 = v157;
          sub_141684120(v67, v157, v36);
          if ( v31 )
LABEL_82:
            sub_140001660(v68, v31, 1);
LABEL_83:
          v43 = 1;
          v10 = 3;
          v34 = (const char *)v36;
LABEL_84:
          *v146 = 1;
          sub_140BF0DE0(v155);
          v44 = v159;
          if ( *(_QWORD *)(v159 + 4712) != -1 )
          {
            v160 = (_QWORD *)(v159 + 4720);
            v72 = *(_QWORD **)(v159 + 4720);
            Address = *(PVOID *)(v159 + 4728);
            v163 = nullptr;
            v157 = (char *)v72;
            while ( Address != v163 )
            {
              ++v163;
              v73 = v72 + 12;
              sub_1402C7520(v72, v69, v70, v71, v78);
              v72 = v73;
            }
            v44 = v159;
            v42 = *(_QWORD *)(v159 + 4712);
            if ( v42 )
LABEL_89:
              sub_140001660(*v160, 96 * v42, 8);
          }
LABEL_90:
          *(_BYTE *)(v44 + 7984) = 1;
          sub_140BE6930(v155);
          v106 = (int)v18;
          v108 = BYTE6(v18);
          v107 = WORD2(v18);
          v110 = v35;
          v111 = v36;
          v105 = v10;
          v109 = v34;
          v104 = v43;
          v74 = v159;
          *(_BYTE *)(v159 + 8003) = 0;
          sub_141684120(&v80, v74, 360);
          *(_BYTE *)(v74 + 8002) = 0;
          v75 = *(_QWORD *)(v74 + 384);
          *(_BYTE *)(v74 + 8001) = 0;
          *(_QWORD *)&v112[16] = *(_QWORD *)(v74 + 376);
          *(_OWORD *)v112 = *(_OWORD *)(v74 + 360);
          sub_14047E370(
            (unsigned int)&v80,
            v75,
            (unsigned int)&v104,
            (unsigned int)v112,
            *(_DWORD *)(v74 + 7992),
            *(_DWORD *)(v74 + 7996));
          v58 = 1;
          result = 0;
          v57 = (_BYTE *)v159;
LABEL_91:
          v57[8000] = v58;
          return result;
        case 1:
LABEL_109:
          v148 = v16;
          v145 = v14;
          v146 = (_BYTE *)v15;
          JUMPOUT(0x140CD50D1LL);
        case 2:
LABEL_108:
          v148 = v16;
          v145 = v14;
          v146 = (_BYTE *)v15;
          v155 = v7;
          sub_1416C3420(&off_1417BB4F0, a2, a3, a4);
        case 3:
LABEL_22:
          v148 = v16;
          Address = (PVOID)(v5 + 7960);
          v32 = *(unsigned __int8 *)(v5 + 7960);
          v33 = (_QWORD *)(v5 + 6936);
          v155 = v7;
          v146 = (_BYTE *)v15;
          v145 = v14;
          switch ( v32 )
          {
            case 0LL:
              goto LABEL_38;
            case 1LL:
              v131 = v5 + 6936;
              sub_1416C3400(&off_1417B8098, a2, a3, a4);
            case 2LL:
              v131 = v5 + 6936;
              sub_1416C3420(&off_1417B8098, a2, a3, a4);
            case 3LL:
              v156 = v5 + 6936;
              goto LABEL_48;
          }
      }
  }
}