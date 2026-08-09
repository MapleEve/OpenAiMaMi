// Pseudocode for load_token_analytics (EA: 0x140d95800, size: 0x15b0)
// Module: commands/analytics
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:加载token用量分析(range)。归属:锚src\commands\analytics.rs。
// Tauri命令handler:加载token用量分析(range)。归属:锚src\commands\analytics.rs。
char __fastcall load_token_analytics(__int64 a1, __int64 a2)
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
  _BYTE *v13; // r14
  __int64 v14; // r12
  volatile void *v15; // r14
  __int64 v16; // rdi
  __int64 *v17; // r15
  char *v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // r13d
  unsigned int v22; // r12d
  __int64 v23; // r14
  PVOID v24; // rcx
  char v25; // al
  unsigned __int64 v26; // r14
  _BYTE *v27; // rsi
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rax
  char *v31; // r12
  const char *v32; // r14
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // r12
  __int64 v37; // rax
  unsigned __int8 v38; // r12
  __int64 v39; // r13
  __int64 v40; // rcx
  PVOID v41; // rcx
  char v42; // al
  _QWORD *v43; // rbx
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  char *v50; // r12
  unsigned __int64 v51; // r14
  __int64 v52; // rsi
  char v53; // cl
  char result; // al
  char *v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r14
  char *v62; // r12
  __int64 v63; // rbx
  __int64 v64; // rax
  char *v65; // rbx
  _QWORD *v66; // rcx
  _QWORD *v67; // r13
  __int64 v68; // rdi
  __int64 v69; // rdx
  char *v70; // rax
  const char *v71; // rcx
  _QWORD *v72; // rdi
  int v73; // eax
  __int64 v74; // [rsp+20h] [rbp-60h]
  _BYTE v75[992]; // [rsp+30h] [rbp-50h] BYREF
  const char *v76; // [rsp+410h] [rbp+390h] BYREF
  __int64 v77; // [rsp+418h] [rbp+398h]
  const char *v78; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v79; // [rsp+428h] [rbp+3A8h]
  __int64 *v80; // [rsp+430h] [rbp+3B0h]
  __int128 v81; // [rsp+438h] [rbp+3B8h]
  __int128 v82; // [rsp+448h] [rbp+3C8h]
  __int128 v83; // [rsp+458h] [rbp+3D8h]
  __int128 v84; // [rsp+468h] [rbp+3E8h]
  __int128 v85; // [rsp+478h] [rbp+3F8h]
  __int128 v86; // [rsp+488h] [rbp+408h]
  __int128 v87; // [rsp+498h] [rbp+418h]
  __int128 v88; // [rsp+4A8h] [rbp+428h]
  _QWORD v89[4]; // [rsp+808h] [rbp+788h] BYREF
  __int128 v90; // [rsp+828h] [rbp+7A8h]
  __int128 v91; // [rsp+838h] [rbp+7B8h]
  __int128 v92; // [rsp+848h] [rbp+7C8h]
  __int64 v93; // [rsp+858h] [rbp+7D8h]
  __int128 v94; // [rsp+860h] [rbp+7E0h]
  __int128 v95; // [rsp+870h] [rbp+7F0h]
  __int128 v96; // [rsp+880h] [rbp+800h]
  __int128 v97; // [rsp+890h] [rbp+810h]
  __int128 v98; // [rsp+8A0h] [rbp+820h]
  __int128 v99; // [rsp+8B0h] [rbp+830h]
  __int128 v100; // [rsp+8C0h] [rbp+840h]
  __int128 v101; // [rsp+8D0h] [rbp+850h]
  __int128 v102; // [rsp+8E0h] [rbp+860h]
  __int128 v103; // [rsp+8F0h] [rbp+870h]
  __int128 v104; // [rsp+900h] [rbp+880h]
  __int64 v105; // [rsp+910h] [rbp+890h]
  __int128 v106; // [rsp+920h] [rbp+8A0h]
  __int128 v107; // [rsp+930h] [rbp+8B0h]
  __int128 v108; // [rsp+940h] [rbp+8C0h]
  __int64 v109; // [rsp+950h] [rbp+8D0h]
  _BYTE v110[24]; // [rsp+960h] [rbp+8E0h] BYREF
  __int64 v111; // [rsp+978h] [rbp+8F8h]
  __int64 *v112; // [rsp+980h] [rbp+900h]
  __int128 v113; // [rsp+988h] [rbp+908h]
  __int128 v114; // [rsp+998h] [rbp+918h]
  __int128 v115; // [rsp+9A8h] [rbp+928h]
  __int128 v116; // [rsp+9B8h] [rbp+938h]
  __int128 v117; // [rsp+9C8h] [rbp+948h]
  __int128 v118; // [rsp+9D8h] [rbp+958h]
  __int128 v119; // [rsp+9E8h] [rbp+968h]
  __int128 v120; // [rsp+9F8h] [rbp+978h]
  __int128 v121; // [rsp+A10h] [rbp+990h] BYREF
  __int128 v122; // [rsp+A20h] [rbp+9A0h]
  __int128 v123; // [rsp+A30h] [rbp+9B0h]
  __int128 v124; // [rsp+A40h] [rbp+9C0h]
  __int128 v125; // [rsp+A50h] [rbp+9D0h]
  __int128 v126; // [rsp+A60h] [rbp+9E0h]
  __int128 v127; // [rsp+A70h] [rbp+9F0h]
  __int128 v128; // [rsp+A80h] [rbp+A00h]
  __int64 v129; // [rsp+A98h] [rbp+A18h] BYREF
  char v130; // [rsp+AA0h] [rbp+A20h]
  int v131; // [rsp+AA1h] [rbp+A21h]
  __int16 v132; // [rsp+AA5h] [rbp+A25h]
  char v133; // [rsp+AA7h] [rbp+A27h]
  const char *v134; // [rsp+AA8h] [rbp+A28h]
  __int64 v135; // [rsp+AB0h] [rbp+A30h]
  __int64 v136; // [rsp+AB8h] [rbp+A38h]
  __int128 v137; // [rsp+AC0h] [rbp+A40h]
  __int128 v138; // [rsp+AD0h] [rbp+A50h]
  __int128 v139; // [rsp+AE0h] [rbp+A60h]
  __int64 v140; // [rsp+AF0h] [rbp+A70h]
  __int128 v141; // [rsp+B10h] [rbp+A90h] BYREF
  __int128 v142; // [rsp+B20h] [rbp+AA0h]
  __int128 v143; // [rsp+B30h] [rbp+AB0h]
  __int128 v144; // [rsp+B40h] [rbp+AC0h]
  __int128 v145; // [rsp+B50h] [rbp+AD0h]
  __int128 v146; // [rsp+B60h] [rbp+AE0h]
  __int128 v147; // [rsp+B70h] [rbp+AF0h]
  __int128 v148; // [rsp+B80h] [rbp+B00h]
  __int128 v149; // [rsp+B90h] [rbp+B10h] BYREF
  __int128 v150; // [rsp+BA0h] [rbp+B20h]
  __int128 v151; // [rsp+BB0h] [rbp+B30h]
  __int64 v152; // [rsp+BC0h] [rbp+B40h]
  char *v153; // [rsp+BC8h] [rbp+B48h] BYREF
  __int64 v154; // [rsp+BD0h] [rbp+B50h]
  char *v155; // [rsp+BD8h] [rbp+B58h]
  char *v156; // [rsp+BE0h] [rbp+B60h]
  _BYTE v157[24]; // [rsp+BE8h] [rbp+B68h]
  __int128 v158; // [rsp+C00h] [rbp+B80h]
  __int128 v159; // [rsp+C10h] [rbp+B90h]
  __int64 v160; // [rsp+C20h] [rbp+BA0h]
  __int64 v161; // [rsp+C28h] [rbp+BA8h]
  __int64 v162; // [rsp+C30h] [rbp+BB0h]
  __int64 v163; // [rsp+C38h] [rbp+BB8h]
  char **v164; // [rsp+C40h] [rbp+BC0h] BYREF
  __int64 v165; // [rsp+C48h] [rbp+BC8h]
  unsigned __int64 v166; // [rsp+C50h] [rbp+BD0h]
  __int64 v167; // [rsp+C58h] [rbp+BD8h]
  _BYTE *v168; // [rsp+C60h] [rbp+BE0h]
  __int64 v169; // [rsp+C68h] [rbp+BE8h]
  __int64 *v170; // [rsp+C70h] [rbp+BF0h]
  char *v171; // [rsp+C78h] [rbp+BF8h]
  PVOID v172; // [rsp+C80h] [rbp+C00h]
  __int64 v173; // [rsp+C88h] [rbp+C08h]
  void *v174; // [rsp+C90h] [rbp+C10h]
  __int64 v175; // [rsp+C98h] [rbp+C18h]
  void *v176; // [rsp+CA0h] [rbp+C20h]
  __int64 *v177; // [rsp+CA8h] [rbp+C28h]
  char *v178; // [rsp+CB0h] [rbp+C30h]
  __int64 v179; // [rsp+CB8h] [rbp+C38h]
  char v180; // [rsp+CC7h] [rbp+C47h] BYREF
  char *v181; // [rsp+CC8h] [rbp+C48h]
  __int64 v182; // [rsp+CD0h] [rbp+C50h]
  PVOID v183; // [rsp+CD8h] [rbp+C58h]
  char v184; // [rsp+CE7h] [rbp+C67h]
  PVOID Address; // [rsp+CE8h] [rbp+C68h]
  __int64 v186; // [rsp+CF0h] [rbp+C70h]

  v186 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 8000);
  v182 = a1;
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
          goto LABEL_108;
        case 2:
          goto LABEL_107;
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
          v76 = aLoadTokenAnaly;
          v77 = 20;
          v78 = aRepo_0;
          v79 = 4;
          v177 = v5;
          v80 = v5;
          v81 = (unsigned __int64)(v3 + 4712);
          v7 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 4704) + 16LL));
          v178 = (char *)(v3 + 4712);
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)v110, (__int64)&v76, (__int64)&v78);
          v8 = v110[0];
          if ( v110[0] == 0xFF )
          {
            v7 = *(_QWORD *)&v110[8];
LABEL_5:
            v76 = aLoadTokenAnaly;
            v77 = 20;
            v78 = aRange;
            v79 = 5;
            v80 = v177;
            v81 = v6;
            sub_140955980(v110, &v76);
            v8 = v110[0];
            if ( v110[0] == 0xFF )
            {
              v9 = v111;
              v3 = v182;
              v10 = v182 + 4736;
              v11 = *(_OWORD *)&v110[8];
              *(_QWORD *)(v182 + 4760) = v7;
              *(_OWORD *)(v3 + 4736) = v11;
              *(_QWORD *)(v3 + 4752) = v9;
              *(_BYTE *)(v3 + 5808) = 0;
              v12 = v3 + 5816;
              sub_14172B820(v3 + 5816, v10, 1080);
              v13 = (_BYTE *)(v3 + 7976);
              *(_BYTE *)(v3 + 7976) = 0;
              v5 = v177;
LABEL_8:
              v14 = v3 + 6896;
              sub_14172B820(v3 + 6896, v12, 1080);
              switch ( *(_BYTE *)(v3 + 7968) )
              {
                case 0:
                  goto LABEL_10;
                case 1:
                  goto LABEL_110;
                case 2:
                  goto LABEL_109;
                case 3:
                  goto LABEL_22;
              }
            }
          }
          v17 = (__int64 *)(((unsigned __int64)((v110[7] << 16) | (unsigned int)*(unsigned __int16 *)&v110[5]) << 32)
                          | *(unsigned int *)&v110[1]);
          v32 = *(const char **)&v110[8];
          v33 = *(_QWORD *)&v110[16];
          v34 = v111;
          sub_140CAB140(v177);
          if ( *(_QWORD *)v178 == -1 )
          {
            v38 = 1;
            v39 = v182;
            goto LABEL_87;
          }
          v181 = (char *)(v182 + 4720);
          v35 = *(_QWORD *)(v182 + 4720);
          v183 = *(PVOID *)(v182 + 4728);
          Address = nullptr;
          v179 = v35;
          while ( v183 != Address )
          {
            Address = (char *)Address + 1;
            v36 = v35 + 96;
            sub_140401FB0();
            v35 = v36;
          }
          v37 = *(_QWORD *)v178;
          v38 = 1;
          v39 = v182;
          if ( !*(_QWORD *)v178 )
            goto LABEL_87;
          goto LABEL_86;
        case 1:
LABEL_108:
          v177 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_107:
          v177 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v13 = (_BYTE *)(v3 + 7976);
  v12 = v3 + 5816;
  switch ( *(_BYTE *)(v3 + 7976) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v177 = v5;
      v162 = v3 + 7976;
      v161 = v3 + 5816;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v177 = v5;
      v162 = v3 + 7976;
      v161 = v3 + 5816;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v14 = v3 + 6896;
      switch ( *(_BYTE *)(v3 + 7968) )
      {
        case 0:
LABEL_10:
          v169 = v14;
          v167 = v12;
          v168 = v13;
          v177 = v5;
          v15 = *(volatile void **)(v3 + 6920);
          *(_QWORD *)(v3 + 6928) = v15;
          *(_BYTE *)(v3 + 7969) = 1;
          v183 = *(PVOID *)(v3 + 6896);
          v179 = *(_QWORD *)(v3 + 6904);
          v16 = *(_QWORD *)(v3 + 6912);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v15, 1, 0) )
          {
            v176 = v183;
            v175 = v179;
            sub_14176CDB0(v15);
          }
          Address = (PVOID)v15;
          v17 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v176 = v183;
            v175 = v179;
            v73 = sub_14176DA50(a1);
            LOBYTE(v73) = v73 ^ 1;
            LODWORD(v170) = v73;
            v18 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_33;
          }
          else
          {
            LODWORD(v170) = 0;
            v18 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_33;
          }
          v153 = nullptr;
          v154 = 1;
          v155 = nullptr;
          v78 = (const char *)1610612768;
          v76 = (const char *)&v153;
          v77 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v76) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v180,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v181 = v153;
          v178 = (char *)v154;
          LODWORD(v20) = (unsigned __int8)v155;
          v21 = HIBYTE(v155);
          v22 = *(unsigned __int16 *)((char *)&v155 + 5);
          v23 = *(unsigned int *)((char *)&v155 + 1);
          if ( !(_BYTE)v170 )
          {
            if ( 2 * *v17 )
            {
              v176 = v183;
              v175 = v179;
              if ( !(unsigned __int8)sub_14176DA50(v19) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v24 = Address;
          v25 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v25 == 2 )
          {
            v176 = v183;
            v175 = v179;
            WakeByAddressSingle(v24);
          }
          if ( v181 != (char *)-1LL )
          {
            v26 = ((unsigned __int64)((v21 << 16) | v22) << 32) | v23;
            v27 = (_BYTE *)v182;
            v28 = v169;
            v29 = v179;
            if ( *(_BYTE *)(v182 + 7969) != 1 )
              goto LABEL_67;
            goto LABEL_65;
          }
          v18 = v178;
          LODWORD(v170) = v20;
LABEL_33:
          Address = v18;
          sub_140A80280(v75, v18 + 8);
          if ( ((unsigned __int8)v170 & 1) == 0 )
          {
            if ( 2 * *v17 )
            {
              v176 = v183;
              v175 = v179;
              if ( !(unsigned __int8)sub_14176DA50(v40) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v41 = Address;
          v42 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v42 == 2 )
          {
            v176 = v183;
            v175 = v179;
            WakeByAddressSingle(v41);
          }
          v43 = (_QWORD *)v182;
          *(_BYTE *)(v182 + 7969) = 0;
          v31 = (char *)(v43 + 867);
          sub_14172B820(v43 + 867, v75, 992);
          v43[991] = v183;
          v43[992] = v179;
          v43[993] = v16;
          Address = v43 + 995;
          *((_BYTE *)v43 + 7960) = 0;
LABEL_38:
          v181 = v31;
          sub_14172B820(&v76, v31, 1016);
          v44 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v184 = 1;
            v72 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v44 = v72;
          }
          if ( *((_DWORD *)v44 + 4) == 2 )
          {
            v45 = 704;
            if ( *(_BYTE *)v44 )
              v45 = 472;
            v46 = v44[1] + v45;
            v184 = 0;
            v47 = sub_14085EA80(v46, v44, &v76, &off_1417EBF48);
          }
          else
          {
            v48 = 704;
            if ( *((_BYTE *)v44 + 64) )
              v48 = 472;
            v49 = v44[9] + v48;
            v184 = 0;
            v47 = sub_14085EA80(v49, v44 + 8, &v76, &off_1417EBF30);
          }
          v3 = v182;
          *(_QWORD *)(v182 + 7952) = v47;
LABEL_48:
          v170 = (__int64 *)(v3 + 7952);
          sub_1405041B0(&v153, v3 + 7952, a2);
          v17 = (__int64 *)v153;
          if ( v153 == (char *)-3LL )
          {
            *(_BYTE *)Address = 3;
            v27 = (_BYTE *)v182;
LABEL_59:
            v27[7968] = 3;
            goto LABEL_60;
          }
          if ( (_DWORD)v153 == -2 )
          {
            v50 = (char *)v154;
            v178 = v155;
            v51 = 0x800000000000000CuLL;
            v20 = (unsigned __int64)v156;
          }
          else
          {
            v51 = v154;
            v50 = v155;
            v178 = v156;
            v20 = *(_QWORD *)v157;
            v149 = *(_OWORD *)&v157[8];
            v150 = v158;
            v151 = v159;
            v152 = v160;
          }
          v29 = v179;
          v137 = v149;
          v138 = v150;
          v139 = v151;
          v140 = v152;
          v52 = *v170;
          v174 = v183;
          v173 = v179;
          v172 = Address;
          v171 = v181;
          if ( (unsigned __int8)sub_141398090(v52) )
          {
            v174 = v183;
            v173 = v29;
            v172 = Address;
            v171 = v181;
            sub_14139A2E0(v52);
          }
          if ( (_DWORD)v17 != -1 )
          {
            if ( (_DWORD)v17 == -2 )
            {
              v153 = (char *)v51;
              v154 = (__int64)v50;
              v155 = v178;
              v156 = (char *)v20;
              *(_OWORD *)v157 = v137;
              v164 = &v153;
              v165 = (__int64)sub_1412DDF00;
              sub_141543AF0(&v149, &unk_1418862F1, &v164);
              v174 = v183;
              v29 = v179;
              v173 = v179;
              v172 = Address;
              v171 = v181;
              sub_140CAB2C0(&v153);
              v178 = *((char **)&v149 + 1);
              v181 = (char *)v149;
              v20 = v150;
            }
            else
            {
              v153 = (char *)v17;
              v154 = v51;
              v155 = v50;
              v156 = v178;
              *(_QWORD *)v157 = v20;
              *(_OWORD *)&v157[8] = v137;
              v158 = v138;
              v159 = v139;
              v160 = v140;
              v164 = nullptr;
              v165 = 1;
              v166 = 0;
              *(_QWORD *)&v150 = 1610612768;
              *(_QWORD *)&v149 = &v164;
              *((_QWORD *)&v149 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1405060F0(&v153, &v149) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v180,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v55 = (char *)v164;
              v178 = (char *)v165;
              v20 = v166;
              v174 = v183;
              v29 = v179;
              v173 = v179;
              v172 = Address;
              v171 = v181;
              sub_140CAC460(&v153);
              v181 = v55;
            }
            *(_BYTE *)Address = 1;
            v27 = (_BYTE *)v182;
LABEL_64:
            v28 = v169;
            v26 = v20 >> 8;
            if ( v27[7969] != 1 )
            {
LABEL_67:
              v27[7969] = 0;
              v148 = v128;
              v147 = v127;
              v146 = v126;
              v145 = v125;
              v144 = v124;
              v143 = v123;
              v142 = v122;
              v141 = v121;
              v27[7968] = 1;
              v56 = -1;
              goto LABEL_68;
            }
LABEL_65:
            if ( v183 )
              sub_140001660(v29, v183, 1);
            goto LABEL_67;
          }
          v106 = v137;
          v107 = v138;
          v108 = v139;
          v109 = v140;
          *(_BYTE *)Address = 1;
          v27 = (_BYTE *)v182;
          if ( v51 == -2 )
            goto LABEL_59;
          v105 = v109;
          v104 = v108;
          v103 = v107;
          v102 = v106;
          if ( v51 == -1 )
          {
            v181 = v50;
            goto LABEL_64;
          }
          v93 = v105;
          v92 = v104;
          v91 = v103;
          v90 = v102;
          v89[0] = v51;
          v89[1] = v50;
          v89[2] = v178;
          v89[3] = v20;
          v176 = v183;
          v175 = v29;
          sub_1404CE570(&v76, v89);
          v56 = (__int64)v76;
          v70 = (char *)v77;
          v71 = v78;
          v20 = v79;
          v17 = v80;
          v121 = v81;
          v122 = v82;
          v123 = v83;
          v124 = v84;
          v125 = v85;
          v126 = v86;
          v127 = v87;
          v128 = v88;
          v27 = (_BYTE *)v182;
          *(_BYTE *)(v182 + 7969) = 0;
          v148 = v128;
          v147 = v127;
          v146 = v126;
          v145 = v125;
          v144 = v124;
          v143 = v123;
          v142 = v122;
          v141 = v121;
          v27[7968] = 1;
          if ( v56 == -2 )
          {
LABEL_60:
            v27[7976] = 3;
            v27[7984] = 3;
            v53 = 3;
            result = 1;
            goto LABEL_88;
          }
          v178 = (char *)v71;
          v181 = v70;
          v26 = v20 >> 8;
          v28 = v169;
LABEL_68:
          v101 = v148;
          v100 = v147;
          v99 = v146;
          v98 = v145;
          v97 = v144;
          v96 = v143;
          v95 = v142;
          v94 = v141;
          sub_140CA7FC0(v28);
          v61 = v26 << 8;
          v34 = v61 | (unsigned __int8)v20;
          v62 = v181;
          if ( v56 != -1 )
          {
            v120 = v101;
            v119 = v100;
            v118 = v99;
            v117 = v98;
            v116 = v97;
            v115 = v96;
            v114 = v95;
            v113 = v94;
            *(_QWORD *)v110 = v56;
            *(_QWORD *)&v110[8] = v181;
            *(_QWORD *)&v110[16] = v178;
            v111 = v61 | (unsigned __int8)v20;
            v112 = v17;
            sub_14050AF60(&v76, v110);
            v17 = (__int64 *)(((unsigned __int64)((HIBYTE(v77) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v77 + 5)) << 32)
                            | *(unsigned int *)((char *)&v77 + 1));
            v8 = v77;
            v32 = v78;
            v33 = v79;
            v34 = (__int64)v80;
            if ( v76 == (const char *)-1LL )
            {
              v38 = 0;
            }
            else
            {
              HIBYTE(v77) = (((unsigned __int64)((HIBYTE(v77) << 16)
                                               | (unsigned int)*(unsigned __int16 *)((char *)&v77 + 5)) << 32)
                           | *(unsigned int *)((char *)&v77 + 1)) >> 48;
              *(_WORD *)((char *)&v77 + 5) = WORD2(v17);
              *(_DWORD *)((char *)&v77 + 1) = (_DWORD)v17;
              *(_QWORD *)&v141 = 0;
              *((_QWORD *)&v141 + 1) = 1;
              *(_QWORD *)&v142 = 0;
              *(_QWORD *)&v122 = 1610612768;
              *(_QWORD *)&v121 = &v141;
              *((_QWORD *)&v121 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v76, &v121) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v180,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v33 = *((_QWORD *)&v141 + 1);
              v32 = (const char *)v141;
              v34 = v142;
              sub_140CAB2C0(&v76);
              v38 = 1;
              v8 = 3;
            }
            goto LABEL_81;
          }
          if ( v61 < 0 )
          {
            v63 = 0;
            goto LABEL_74;
          }
          if ( !v34 )
          {
            v33 = 1;
            v65 = v178;
            if ( !v181 )
              goto LABEL_80;
            goto LABEL_79;
          }
          nullsub_1(v58, v57, v59, v60, v74);
          v63 = 1;
          v64 = sub_140001650(v34, 1);
          if ( !v64 )
LABEL_74:
            sub_14176E54B(v63, v34);
          v33 = v64;
          v65 = v178;
          sub_14172B820(v64, v178, v34);
          if ( v62 )
LABEL_79:
            sub_140001660(v65, v62, 1);
LABEL_80:
          v38 = 1;
          v8 = 3;
          v32 = (const char *)v34;
LABEL_81:
          *v168 = 1;
          sub_140CAB140(v177);
          v39 = v182;
          if ( *(_QWORD *)(v182 + 4712) != -1 )
          {
            v181 = (char *)(v182 + 4720);
            v66 = *(_QWORD **)(v182 + 4720);
            v183 = *(PVOID *)(v182 + 4728);
            Address = nullptr;
            v178 = (char *)v66;
            while ( v183 != Address )
            {
              Address = (char *)Address + 1;
              v67 = v66 + 12;
              sub_140401FB0();
              v66 = v67;
            }
            v39 = v182;
            v37 = *(_QWORD *)(v182 + 4712);
            if ( v37 )
LABEL_86:
              sub_140001660(*(_QWORD *)v181, 96 * v37, 8);
          }
LABEL_87:
          *(_BYTE *)(v39 + 7984) = 1;
          sub_140CA0C60(v177);
          v131 = (int)v17;
          v133 = BYTE6(v17);
          v132 = WORD2(v17);
          v135 = v33;
          v136 = v34;
          v130 = v8;
          v134 = v32;
          v129 = v38;
          v68 = v182;
          *(_BYTE *)(v182 + 8003) = 0;
          sub_14172B820(&v76, v68, 360);
          *(_BYTE *)(v68 + 8002) = 0;
          v69 = *(_QWORD *)(v68 + 384);
          *(_BYTE *)(v68 + 8001) = 0;
          *(_QWORD *)&v110[16] = *(_QWORD *)(v68 + 376);
          *(_OWORD *)v110 = *(_OWORD *)(v68 + 360);
          sub_140AFFC30(
            (__int64)&v76,
            v69,
            (__int64)&v129,
            (__int128 *)v110,
            *(_DWORD *)(v68 + 7992),
            *(_DWORD *)(v68 + 7996));
          v53 = 1;
          result = 0;
          v27 = (_BYTE *)v182;
LABEL_88:
          v27[8000] = v53;
          return result;
        case 1:
LABEL_110:
          v169 = v14;
          v167 = v12;
          v168 = v13;
          JUMPOUT(0x140D96D26LL);
        case 2:
LABEL_109:
          v169 = v14;
          v167 = v12;
          v168 = v13;
          v177 = v5;
          sub_14176EC20(&off_141888B78);
        case 3:
LABEL_22:
          v169 = v14;
          Address = (PVOID)(v3 + 7960);
          v30 = *(unsigned __int8 *)(v3 + 7960);
          v31 = (char *)(v3 + 6936);
          v177 = v5;
          v168 = v13;
          v167 = v12;
          switch ( v30 )
          {
            case 0LL:
              goto LABEL_38;
            case 1LL:
              v163 = v3 + 6936;
              sub_14176EC00(&off_1418856B8);
            case 2LL:
              v163 = v3 + 6936;
              sub_14176EC20(&off_1418856B8);
            case 3LL:
              v181 = (char *)(v3 + 6936);
              goto LABEL_48;
          }
      }
  }
}
