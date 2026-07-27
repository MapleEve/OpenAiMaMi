// module: codexmate_lib/commands/analytics
// addr: 0x140cd79e0
// name: load_token_analytics
// win 1.2.1 | module src/commands/analytics.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = load_token_analytics | mapped via command-name string xref (win-native, ground-truth)
char __fastcall load_token_analytics(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  _BYTE *v15; // r14
  __int64 v16; // r12
  volatile void *v17; // r14
  __int64 v18; // rdi
  __int64 *v19; // r15
  char *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  int v24; // r13d
  unsigned int v25; // r12d
  __int64 v26; // r14
  PVOID v27; // rcx
  char v28; // al
  unsigned __int64 v29; // r14
  _BYTE *v30; // rsi
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // rax
  char *v34; // r12
  const char *v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r12
  __int64 v43; // rax
  unsigned __int8 v44; // r12
  __int64 v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  PVOID v48; // rcx
  char v49; // al
  _QWORD *v50; // rbx
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  char *v57; // r12
  unsigned __int64 v58; // r14
  __int64 v59; // rsi
  char v60; // cl
  char result; // al
  char *v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // r14
  char *v66; // r12
  __int64 v67; // r8
  __int64 v68; // rbx
  __int64 v69; // rax
  char *v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // rcx
  _QWORD *v75; // r13
  __int64 v76; // rdi
  __int64 v77; // rdx
  char *v78; // rax
  const char *v79; // rcx
  _QWORD *v80; // rdi
  int v81; // eax
  __int64 v82; // [rsp+20h] [rbp-60h]
  _BYTE v83[992]; // [rsp+30h] [rbp-50h] BYREF
  const char *v84; // [rsp+410h] [rbp+390h] BYREF
  __int64 v85; // [rsp+418h] [rbp+398h]
  const char *v86; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v87; // [rsp+428h] [rbp+3A8h]
  __int64 v88; // [rsp+430h] [rbp+3B0h]
  __int128 v89; // [rsp+438h] [rbp+3B8h]
  __int128 v90; // [rsp+448h] [rbp+3C8h]
  __int128 v91; // [rsp+458h] [rbp+3D8h]
  __int128 v92; // [rsp+468h] [rbp+3E8h]
  __int128 v93; // [rsp+478h] [rbp+3F8h]
  __int128 v94; // [rsp+488h] [rbp+408h]
  __int128 v95; // [rsp+498h] [rbp+418h]
  __int128 v96; // [rsp+4A8h] [rbp+428h]
  _QWORD v97[4]; // [rsp+808h] [rbp+788h] BYREF
  __int128 v98; // [rsp+828h] [rbp+7A8h]
  __int128 v99; // [rsp+838h] [rbp+7B8h]
  __int128 v100; // [rsp+848h] [rbp+7C8h]
  __int64 v101; // [rsp+858h] [rbp+7D8h]
  __int128 v102; // [rsp+860h] [rbp+7E0h]
  __int128 v103; // [rsp+870h] [rbp+7F0h]
  __int128 v104; // [rsp+880h] [rbp+800h]
  __int128 v105; // [rsp+890h] [rbp+810h]
  __int128 v106; // [rsp+8A0h] [rbp+820h]
  __int128 v107; // [rsp+8B0h] [rbp+830h]
  __int128 v108; // [rsp+8C0h] [rbp+840h]
  __int128 v109; // [rsp+8D0h] [rbp+850h]
  __int128 v110; // [rsp+8E0h] [rbp+860h]
  __int128 v111; // [rsp+8F0h] [rbp+870h]
  __int128 v112; // [rsp+900h] [rbp+880h]
  __int64 v113; // [rsp+910h] [rbp+890h]
  __int128 v114; // [rsp+920h] [rbp+8A0h]
  __int128 v115; // [rsp+930h] [rbp+8B0h]
  __int128 v116; // [rsp+940h] [rbp+8C0h]
  __int64 v117; // [rsp+950h] [rbp+8D0h]
  _BYTE v118[24]; // [rsp+960h] [rbp+8E0h] BYREF
  __int64 v119; // [rsp+978h] [rbp+8F8h]
  __int64 *v120; // [rsp+980h] [rbp+900h]
  __int128 v121; // [rsp+988h] [rbp+908h]
  __int128 v122; // [rsp+998h] [rbp+918h]
  __int128 v123; // [rsp+9A8h] [rbp+928h]
  __int128 v124; // [rsp+9B8h] [rbp+938h]
  __int128 v125; // [rsp+9C8h] [rbp+948h]
  __int128 v126; // [rsp+9D8h] [rbp+958h]
  __int128 v127; // [rsp+9E8h] [rbp+968h]
  __int128 v128; // [rsp+9F8h] [rbp+978h]
  __int128 v129; // [rsp+A10h] [rbp+990h] BYREF
  __int128 v130; // [rsp+A20h] [rbp+9A0h]
  __int128 v131; // [rsp+A30h] [rbp+9B0h]
  __int128 v132; // [rsp+A40h] [rbp+9C0h]
  __int128 v133; // [rsp+A50h] [rbp+9D0h]
  __int128 v134; // [rsp+A60h] [rbp+9E0h]
  __int128 v135; // [rsp+A70h] [rbp+9F0h]
  __int128 v136; // [rsp+A80h] [rbp+A00h]
  __int64 v137; // [rsp+A98h] [rbp+A18h] BYREF
  char v138; // [rsp+AA0h] [rbp+A20h]
  int v139; // [rsp+AA1h] [rbp+A21h]
  __int16 v140; // [rsp+AA5h] [rbp+A25h]
  char v141; // [rsp+AA7h] [rbp+A27h]
  const char *v142; // [rsp+AA8h] [rbp+A28h]
  __int64 v143; // [rsp+AB0h] [rbp+A30h]
  __int64 v144; // [rsp+AB8h] [rbp+A38h]
  __int128 v145; // [rsp+AC0h] [rbp+A40h]
  __int128 v146; // [rsp+AD0h] [rbp+A50h]
  __int128 v147; // [rsp+AE0h] [rbp+A60h]
  __int64 v148; // [rsp+AF0h] [rbp+A70h]
  __int128 v149; // [rsp+B10h] [rbp+A90h] BYREF
  __int128 v150; // [rsp+B20h] [rbp+AA0h]
  __int128 v151; // [rsp+B30h] [rbp+AB0h]
  __int128 v152; // [rsp+B40h] [rbp+AC0h]
  __int128 v153; // [rsp+B50h] [rbp+AD0h]
  __int128 v154; // [rsp+B60h] [rbp+AE0h]
  __int128 v155; // [rsp+B70h] [rbp+AF0h]
  __int128 v156; // [rsp+B80h] [rbp+B00h]
  __int128 v157; // [rsp+B90h] [rbp+B10h] BYREF
  __int128 v158; // [rsp+BA0h] [rbp+B20h]
  __int128 v159; // [rsp+BB0h] [rbp+B30h]
  __int64 v160; // [rsp+BC0h] [rbp+B40h]
  char *v161; // [rsp+BC8h] [rbp+B48h] BYREF
  __int64 v162; // [rsp+BD0h] [rbp+B50h]
  char *v163; // [rsp+BD8h] [rbp+B58h]
  char *v164; // [rsp+BE0h] [rbp+B60h]
  _BYTE v165[24]; // [rsp+BE8h] [rbp+B68h]
  __int128 v166; // [rsp+C00h] [rbp+B80h]
  __int128 v167; // [rsp+C10h] [rbp+B90h]
  __int64 v168; // [rsp+C20h] [rbp+BA0h]
  __int64 v169; // [rsp+C28h] [rbp+BA8h]
  __int64 v170; // [rsp+C30h] [rbp+BB0h]
  __int64 v171; // [rsp+C38h] [rbp+BB8h]
  char **v172; // [rsp+C40h] [rbp+BC0h] BYREF
  __int64 v173; // [rsp+C48h] [rbp+BC8h]
  unsigned __int64 v174; // [rsp+C50h] [rbp+BD0h]
  __int64 v175; // [rsp+C58h] [rbp+BD8h]
  _BYTE *v176; // [rsp+C60h] [rbp+BE0h]
  __int64 v177; // [rsp+C68h] [rbp+BE8h]
  __int64 *v178; // [rsp+C70h] [rbp+BF0h]
  char *v179; // [rsp+C78h] [rbp+BF8h]
  PVOID v180; // [rsp+C80h] [rbp+C00h]
  __int64 v181; // [rsp+C88h] [rbp+C08h]
  void *v182; // [rsp+C90h] [rbp+C10h]
  __int64 v183; // [rsp+C98h] [rbp+C18h]
  void *v184; // [rsp+CA0h] [rbp+C20h]
  __int64 v185; // [rsp+CA8h] [rbp+C28h]
  char *v186; // [rsp+CB0h] [rbp+C30h]
  __int64 v187; // [rsp+CB8h] [rbp+C38h]
  char v188; // [rsp+CC7h] [rbp+C47h] BYREF
  char *v189; // [rsp+CC8h] [rbp+C48h]
  __int64 v190; // [rsp+CD0h] [rbp+C50h]
  PVOID v191; // [rsp+CD8h] [rbp+C58h]
  char v192; // [rsp+CE7h] [rbp+C67h]
  PVOID Address; // [rsp+CE8h] [rbp+C68h]
  __int64 v194; // [rsp+CF0h] [rbp+C70h]

  v194 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 8000);
  v190 = a1;
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
          goto LABEL_108;
        case 2:
          goto LABEL_107;
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
          v84 = aLoadTokenAnaly;
          v85 = 20;
          v86 = aRepo_0;
          v87 = 4;
          v185 = v7;
          v88 = v7;
          v89 = (unsigned __int64)(v5 + 4712);
          v9 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4704) + 16LL));
          v186 = (char *)(v5 + 4712);
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(v118, &v84, &v86);
          v10 = v118[0];
          if ( v118[0] == 0xFF )
          {
            v9 = *(_QWORD *)&v118[8];
LABEL_5:
            v84 = aLoadTokenAnaly;
            v85 = 20;
            v86 = aRange;
            v87 = 5;
            v88 = v185;
            v89 = v8;
            sub_1409757B0(v118, &v84);
            v10 = v118[0];
            if ( v118[0] == 0xFF )
            {
              v11 = v119;
              v5 = v190;
              v12 = v190 + 4736;
              v13 = *(_OWORD *)&v118[8];
              *(_QWORD *)(v190 + 4760) = v9;
              *(_OWORD *)(v5 + 4736) = v13;
              *(_QWORD *)(v5 + 4752) = v11;
              *(_BYTE *)(v5 + 5808) = 0;
              v14 = v5 + 5816;
              sub_141684120(v5 + 5816, v12, 1080);
              v15 = (_BYTE *)(v5 + 7976);
              *(_BYTE *)(v5 + 7976) = 0;
              v7 = v185;
LABEL_8:
              v16 = v5 + 6896;
              sub_141684120(v5 + 6896, v14, 1080);
              switch ( *(_BYTE *)(v5 + 7968) )
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
          v19 = (__int64 *)(((unsigned __int64)((v118[7] << 16) | (unsigned int)*(unsigned __int16 *)&v118[5]) << 32)
                          | *(unsigned int *)&v118[1]);
          v35 = *(const char **)&v118[8];
          v36 = *(_QWORD *)&v118[16];
          v37 = v119;
          sub_140BF0DE0(v185);
          if ( *(_QWORD *)v186 == -1 )
          {
            v44 = 1;
            v45 = v190;
            goto LABEL_87;
          }
          v189 = (char *)(v190 + 4720);
          v41 = *(_QWORD *)(v190 + 4720);
          v191 = *(PVOID *)(v190 + 4728);
          Address = nullptr;
          v187 = v41;
          while ( v191 != Address )
          {
            Address = (char *)Address + 1;
            v42 = v41 + 96;
            sub_1402C7520(v41, v38, v39, v40, v82);
            v41 = v42;
          }
          v43 = *(_QWORD *)v186;
          v44 = 1;
          v45 = v190;
          if ( !*(_QWORD *)v186 )
            goto LABEL_87;
          goto LABEL_86;
        case 1:
LABEL_108:
          v185 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_107:
          v185 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = (_BYTE *)(v5 + 7976);
  v14 = v5 + 5816;
  switch ( *(_BYTE *)(v5 + 7976) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v185 = v7;
      v170 = v5 + 7976;
      v169 = v5 + 5816;
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2:
      v185 = v7;
      v170 = v5 + 7976;
      v169 = v5 + 5816;
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3:
      v16 = v5 + 6896;
      switch ( *(_BYTE *)(v5 + 7968) )
      {
        case 0:
LABEL_10:
          v177 = v16;
          v175 = v14;
          v176 = v15;
          v185 = v7;
          v17 = *(volatile void **)(v5 + 6920);
          *(_QWORD *)(v5 + 6928) = v17;
          *(_BYTE *)(v5 + 7969) = 1;
          v191 = *(PVOID *)(v5 + 6896);
          v187 = *(_QWORD *)(v5 + 6904);
          v18 = *(_QWORD *)(v5 + 6912);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v17, 1, 0) )
          {
            v184 = v191;
            v183 = v187;
            sub_1416C15B0(v17);
          }
          Address = (PVOID)v17;
          v19 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v184 = v191;
            v183 = v187;
            v81 = sub_1416C2250(a1, a2);
            LOBYTE(v81) = v81 ^ 1;
            LODWORD(v178) = v81;
            v20 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_33;
          }
          else
          {
            LODWORD(v178) = 0;
            v20 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_33;
          }
          v161 = nullptr;
          v162 = 1;
          v163 = nullptr;
          v86 = (const char *)1610612768;
          v84 = (const char *)&v161;
          v85 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v84) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v188,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v189 = v161;
          v186 = (char *)v162;
          LODWORD(v23) = (unsigned __int8)v163;
          v24 = HIBYTE(v163);
          v25 = *(unsigned __int16 *)((char *)&v163 + 5);
          v26 = *(unsigned int *)((char *)&v163 + 1);
          if ( !(_BYTE)v178 )
          {
            if ( 2 * *v19 )
            {
              v184 = v191;
              v183 = v187;
              if ( !(unsigned __int8)sub_1416C2250(v22, v21) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v27 = Address;
          v28 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v28 == 2 )
          {
            v184 = v191;
            v183 = v187;
            WakeByAddressSingle(v27);
          }
          if ( v189 != (char *)-1LL )
          {
            v29 = ((unsigned __int64)((v24 << 16) | v25) << 32) | v26;
            v30 = (_BYTE *)v190;
            v31 = v177;
            v32 = v187;
            if ( *(_BYTE *)(v190 + 7969) != 1 )
              goto LABEL_67;
            goto LABEL_65;
          }
          v20 = v186;
          LODWORD(v178) = v23;
LABEL_33:
          Address = v20;
          sub_1407BC950(v83, v20 + 8);
          if ( ((unsigned __int8)v178 & 1) == 0 )
          {
            if ( 2 * *v19 )
            {
              v184 = v191;
              v183 = v187;
              if ( !(unsigned __int8)sub_1416C2250(v47, v46) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v48 = Address;
          v49 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v49 == 2 )
          {
            v184 = v191;
            v183 = v187;
            WakeByAddressSingle(v48);
          }
          v50 = (_QWORD *)v190;
          *(_BYTE *)(v190 + 7969) = 0;
          v34 = (char *)(v50 + 867);
          sub_141684120(v50 + 867, v83, 992);
          v50[991] = v191;
          v50[992] = v187;
          v50[993] = v18;
          Address = v50 + 995;
          *((_BYTE *)v50 + 7960) = 0;
LABEL_38:
          v189 = v34;
          sub_141684120(&v84, v34, 1016);
          v51 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v192 = 1;
            v80 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v51 = v80;
          }
          if ( *((_DWORD *)v51 + 4) == 2 )
          {
            v52 = 704;
            if ( *(_BYTE *)v51 )
              v52 = 472;
            v53 = v51[1] + v52;
            v192 = 0;
            v54 = sub_14089E210(v53, (__int64)v51, (__int64)&v84, (__int64)&off_1417642A8);
          }
          else
          {
            v55 = 704;
            if ( *((_BYTE *)v51 + 64) )
              v55 = 472;
            v56 = v51[9] + v55;
            v192 = 0;
            v54 = sub_14089E210(v56, (__int64)(v51 + 8), (__int64)&v84, (__int64)&off_141764290);
          }
          v5 = v190;
          *(_QWORD *)(v190 + 7952) = v54;
LABEL_48:
          v178 = (__int64 *)(v5 + 7952);
          sub_140B01DF0(&v161, v5 + 7952, a2);
          v19 = (__int64 *)v161;
          if ( v161 == (char *)-3LL )
          {
            *(_BYTE *)Address = 3;
            v30 = (_BYTE *)v190;
LABEL_59:
            v30[7968] = 3;
            goto LABEL_60;
          }
          if ( (_DWORD)v161 == -2 )
          {
            v57 = (char *)v162;
            v186 = v163;
            v58 = 0x800000000000000CuLL;
            v23 = (unsigned __int64)v164;
          }
          else
          {
            v58 = v162;
            v57 = v163;
            v186 = v164;
            v23 = *(_QWORD *)v165;
            v157 = *(_OWORD *)&v165[8];
            v158 = v166;
            v159 = v167;
            v160 = v168;
          }
          v32 = v187;
          v145 = v157;
          v146 = v158;
          v147 = v159;
          v148 = v160;
          v59 = *v178;
          v182 = v191;
          v181 = v187;
          v180 = Address;
          v179 = v189;
          if ( (unsigned __int8)sub_1412F2A80(v59) )
          {
            v182 = v191;
            v181 = v32;
            v180 = Address;
            v179 = v189;
            sub_1412E7580(v59);
          }
          if ( (_DWORD)v19 != -1 )
          {
            if ( (_DWORD)v19 == -2 )
            {
              v161 = (char *)v58;
              v162 = (__int64)v57;
              v163 = v186;
              v164 = (char *)v23;
              *(_OWORD *)v165 = v145;
              v172 = &v161;
              v173 = (__int64)sub_141230630;
              sub_14149C0F0(&v157, &unk_1417B8CD1, &v172);
              v182 = v191;
              v32 = v187;
              v181 = v187;
              v180 = Address;
              v179 = v189;
              sub_140BF0F60(&v161);
              v186 = *((char **)&v157 + 1);
              v189 = (char *)v157;
              v23 = v158;
            }
            else
            {
              v161 = (char *)v19;
              v162 = v58;
              v163 = v57;
              v164 = v186;
              *(_QWORD *)v165 = v23;
              *(_OWORD *)&v165[8] = v145;
              v166 = v146;
              v167 = v147;
              v168 = v148;
              v172 = nullptr;
              v173 = 1;
              v174 = 0;
              *(_QWORD *)&v158 = 1610612768;
              *(_QWORD *)&v157 = &v172;
              *((_QWORD *)&v157 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_140B036A0(&v161, &v157) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v188,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v62 = (char *)v172;
              v186 = (char *)v173;
              v23 = v174;
              v182 = v191;
              v32 = v187;
              v181 = v187;
              v180 = Address;
              v179 = v189;
              sub_140BF2F60(&v161);
              v189 = v62;
            }
            *(_BYTE *)Address = 1;
            v30 = (_BYTE *)v190;
LABEL_64:
            v31 = v177;
            v29 = v23 >> 8;
            if ( v30[7969] != 1 )
            {
LABEL_67:
              v30[7969] = 0;
              v156 = v136;
              v155 = v135;
              v154 = v134;
              v153 = v133;
              v152 = v132;
              v151 = v131;
              v150 = v130;
              v149 = v129;
              v30[7968] = 1;
              v63 = -1;
              goto LABEL_68;
            }
LABEL_65:
            if ( v191 )
              sub_140001660(v32, v191, 1);
            goto LABEL_67;
          }
          v114 = v145;
          v115 = v146;
          v116 = v147;
          v117 = v148;
          *(_BYTE *)Address = 1;
          v30 = (_BYTE *)v190;
          if ( v58 == -2 )
            goto LABEL_59;
          v113 = v117;
          v112 = v116;
          v111 = v115;
          v110 = v114;
          if ( v58 == -1 )
          {
            v189 = v57;
            goto LABEL_64;
          }
          v101 = v113;
          v100 = v112;
          v99 = v111;
          v98 = v110;
          v97[0] = v58;
          v97[1] = v57;
          v97[2] = v186;
          v97[3] = v23;
          v184 = v191;
          v183 = v32;
          sub_140ACBE00(&v84, v97);
          v63 = (__int64)v84;
          v78 = (char *)v85;
          v79 = v86;
          v23 = v87;
          v19 = (__int64 *)v88;
          v129 = v89;
          v130 = v90;
          v131 = v91;
          v132 = v92;
          v133 = v93;
          v134 = v94;
          v135 = v95;
          v136 = v96;
          v30 = (_BYTE *)v190;
          *(_BYTE *)(v190 + 7969) = 0;
          v156 = v136;
          v155 = v135;
          v154 = v134;
          v153 = v133;
          v152 = v132;
          v151 = v131;
          v150 = v130;
          v149 = v129;
          v30[7968] = 1;
          if ( v63 == -2 )
          {
LABEL_60:
            v30[7976] = 3;
            v30[7984] = 3;
            v60 = 3;
            result = 1;
            goto LABEL_88;
          }
          v186 = (char *)v79;
          v189 = v78;
          v29 = v23 >> 8;
          v31 = v177;
LABEL_68:
          v109 = v156;
          v108 = v155;
          v107 = v154;
          v106 = v153;
          v105 = v152;
          v104 = v151;
          v103 = v150;
          v102 = v149;
          sub_140BEDB50(v31);
          v65 = v29 << 8;
          v37 = v65 | (unsigned __int8)v23;
          v66 = v189;
          if ( v63 != -1 )
          {
            v128 = v109;
            v127 = v108;
            v126 = v107;
            v125 = v106;
            v124 = v105;
            v123 = v104;
            v122 = v103;
            v121 = v102;
            *(_QWORD *)v118 = v63;
            *(_QWORD *)&v118[8] = v189;
            *(_QWORD *)&v118[16] = v186;
            v119 = v65 | (unsigned __int8)v23;
            v120 = v19;
            sub_140B080E0(&v84, v118);
            v19 = (__int64 *)(((unsigned __int64)((HIBYTE(v85) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v85 + 5)) << 32)
                            | *(unsigned int *)((char *)&v85 + 1));
            v10 = v85;
            v35 = v86;
            v36 = v87;
            v37 = v88;
            if ( v84 == (const char *)-1LL )
            {
              v44 = 0;
            }
            else
            {
              HIBYTE(v85) = (((unsigned __int64)((HIBYTE(v85) << 16)
                                               | (unsigned int)*(unsigned __int16 *)((char *)&v85 + 5)) << 32)
                           | *(unsigned int *)((char *)&v85 + 1)) >> 48;
              *(_WORD *)((char *)&v85 + 5) = WORD2(v19);
              *(_DWORD *)((char *)&v85 + 1) = (_DWORD)v19;
              *(_QWORD *)&v149 = 0;
              *((_QWORD *)&v149 + 1) = 1;
              *(_QWORD *)&v150 = 0;
              *(_QWORD *)&v130 = 1610612768;
              *(_QWORD *)&v129 = &v149;
              *((_QWORD *)&v129 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v84, &v129, v67) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v188,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v36 = *((_QWORD *)&v149 + 1);
              v35 = (const char *)v149;
              v37 = v150;
              sub_140BF0F60(&v84);
              v44 = 1;
              v10 = 3;
            }
            goto LABEL_81;
          }
          if ( v65 < 0 )
          {
            v68 = 0;
            goto LABEL_74;
          }
          if ( !v37 )
          {
            v36 = 1;
            v70 = v186;
            if ( !v189 )
              goto LABEL_80;
            goto LABEL_79;
          }
          nullsub_1(v64);
          v68 = 1;
          v69 = sub_140001650(v37, 1);
          if ( !v69 )
LABEL_74:
            sub_1416C2D4B(v68, v37);
          v36 = v69;
          v70 = v186;
          sub_141684120(v69, v186, v37);
          if ( v66 )
LABEL_79:
            sub_140001660(v70, v66, 1);
LABEL_80:
          v44 = 1;
          v10 = 3;
          v35 = (const char *)v37;
LABEL_81:
          *v176 = 1;
          sub_140BF0DE0(v185);
          v45 = v190;
          if ( *(_QWORD *)(v190 + 4712) != -1 )
          {
            v189 = (char *)(v190 + 4720);
            v74 = *(_QWORD **)(v190 + 4720);
            v191 = *(PVOID *)(v190 + 4728);
            Address = nullptr;
            v186 = (char *)v74;
            while ( v191 != Address )
            {
              Address = (char *)Address + 1;
              v75 = v74 + 12;
              sub_1402C7520(v74, v71, v72, v73, v82);
              v74 = v75;
            }
            v45 = v190;
            v43 = *(_QWORD *)(v190 + 4712);
            if ( v43 )
LABEL_86:
              sub_140001660(*(_QWORD *)v189, 96 * v43, 8);
          }
LABEL_87:
          *(_BYTE *)(v45 + 7984) = 1;
          sub_140BE6930(v185);
          v139 = (int)v19;
          v141 = BYTE6(v19);
          v140 = WORD2(v19);
          v143 = v36;
          v144 = v37;
          v138 = v10;
          v142 = v35;
          v137 = v44;
          v76 = v190;
          *(_BYTE *)(v190 + 8003) = 0;
          sub_141684120(&v84, v76, 360);
          *(_BYTE *)(v76 + 8002) = 0;
          v77 = *(_QWORD *)(v76 + 384);
          *(_BYTE *)(v76 + 8001) = 0;
          *(_QWORD *)&v118[16] = *(_QWORD *)(v76 + 376);
          *(_OWORD *)v118 = *(_OWORD *)(v76 + 360);
          sub_14047E370(
            (unsigned int)&v84,
            v77,
            (unsigned int)&v137,
            (unsigned int)v118,
            *(_DWORD *)(v76 + 7992),
            *(_DWORD *)(v76 + 7996));
          v60 = 1;
          result = 0;
          v30 = (_BYTE *)v190;
LABEL_88:
          v30[8000] = v60;
          return result;
        case 1:
LABEL_110:
          v177 = v16;
          v175 = v14;
          v176 = v15;
          JUMPOUT(0x140CD8F06LL);
        case 2:
LABEL_109:
          v177 = v16;
          v175 = v14;
          v176 = v15;
          v185 = v7;
          sub_1416C3420(&off_1417BB4C0, a2, a3, a4);
        case 3:
LABEL_22:
          v177 = v16;
          Address = (PVOID)(v5 + 7960);
          v33 = *(unsigned __int8 *)(v5 + 7960);
          v34 = (char *)(v5 + 6936);
          v185 = v7;
          v176 = v15;
          v175 = v14;
          switch ( v33 )
          {
            case 0LL:
              goto LABEL_38;
            case 1LL:
              v171 = v5 + 6936;
              sub_1416C3400(&off_1417B8098, a2, a3, a4);
            case 2LL:
              v171 = v5 + 6936;
              sub_1416C3420(&off_1417B8098, a2, a3, a4);
            case 3LL:
              v189 = (char *)(v5 + 6936);
              goto LABEL_48;
          }
      }
  }
}