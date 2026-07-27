// module: codexmate_lib/commands/accounts
// addr: 0x1403db4a0
// name: sub_1403DB4A0
// win 1.2.1 | module src/commands/accounts.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1403DB4A0(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // edx
  bool v11; // zf
  __int64 v12; // rsi
  __int128 v13; // kr10_16
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // r14
  unsigned __int64 v22; // rbx
  __int64 v23; // r12
  unsigned __int64 v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rbx
  unsigned __int64 v27; // r12
  __int64 v28; // r15
  char v29; // r14
  __int64 v30; // rsi
  unsigned __int64 v31; // r14
  _QWORD *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r12
  unsigned __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // r15
  __int64 v51; // rcx
  __int64 v52; // r12
  __int64 v53; // r14
  __int64 v54; // rbx
  __int64 v55; // rbx
  __int64 v56; // r14
  __int64 v57; // r14
  unsigned __int64 v58; // rbx
  __int64 v59; // rbx
  __int64 v60; // r15
  __int64 v61; // rsi
  __int64 v62; // r14
  __int64 v63; // r12
  bool v64; // cl
  char v65; // bl
  char v66; // al
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rbx
  _QWORD *v71; // r12
  __int64 v72; // rbx
  __int64 v73; // r14
  __int64 v74; // rsi
  __int64 v75; // r14
  __int64 v76; // r15
  __int64 v77; // rbx
  __int64 v78; // r8
  __int64 v79; // r12
  _QWORD *v80; // rsi
  __int64 v81; // rax
  char v82; // r8
  __int128 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rcx
  char v87; // si
  __int64 v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // r14
  __int64 v91; // rsi
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rbx
  __int64 v96; // rax
  void *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rcx
  __int64 v102; // rbx
  __int64 v103; // r15
  void *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // rax
  unsigned int v108; // edx
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int64 v111; // rdx
  __int64 v112; // rsi
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rcx
  __int128 v118; // rax
  _OWORD *v119; // rcx
  __int64 v120; // rsi
  _QWORD *v121; // rdi
  __int64 v122; // rdx
  __int64 result; // rax
  unsigned __int64 v124; // rax
  _QWORD v125[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v126[3]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v127; // [rsp+58h] [rbp-28h] BYREF
  __int64 v128; // [rsp+68h] [rbp-18h]
  __int128 v129; // [rsp+70h] [rbp-10h] BYREF
  __int64 v130; // [rsp+80h] [rbp+0h]
  __int128 v131; // [rsp+88h] [rbp+8h] BYREF
  __int64 v132; // [rsp+98h] [rbp+18h]
  __int64 v133; // [rsp+A0h] [rbp+20h]
  __int64 v134; // [rsp+A8h] [rbp+28h]
  __int64 v135; // [rsp+B0h] [rbp+30h]
  __int64 v136; // [rsp+B8h] [rbp+38h]
  __int64 v137; // [rsp+C0h] [rbp+40h]
  __int64 v138; // [rsp+C8h] [rbp+48h]
  __int128 *v139; // [rsp+D0h] [rbp+50h]
  unsigned __int64 v140; // [rsp+D8h] [rbp+58h]
  __int64 v141; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v142; // [rsp+E8h] [rbp+68h]
  unsigned __int64 v143; // [rsp+F0h] [rbp+70h]
  _BYTE v144[160]; // [rsp+100h] [rbp+80h] BYREF
  _BYTE v145[88]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v146; // [rsp+208h] [rbp+188h] BYREF
  __int64 v147; // [rsp+210h] [rbp+190h]
  __int64 v148; // [rsp+218h] [rbp+198h]
  __int64 v149; // [rsp+220h] [rbp+1A0h] BYREF
  HANDLE v150; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v151; // [rsp+230h] [rbp+1B0h]
  __int64 v152; // [rsp+238h] [rbp+1B8h]
  __int64 v153; // [rsp+240h] [rbp+1C0h]
  __int64 v154; // [rsp+248h] [rbp+1C8h]
  __int64 v155; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v156; // [rsp+258h] [rbp+1D8h]
  __int64 v157; // [rsp+260h] [rbp+1E0h]
  HANDLE hObject; // [rsp+268h] [rbp+1E8h] BYREF
  HANDLE v159; // [rsp+270h] [rbp+1F0h] BYREF
  unsigned __int64 v160; // [rsp+278h] [rbp+1F8h]
  __int128 v161; // [rsp+280h] [rbp+200h] BYREF
  __int128 v162; // [rsp+290h] [rbp+210h] BYREF
  __int128 v163; // [rsp+2A0h] [rbp+220h]
  __int128 v164; // [rsp+2B0h] [rbp+230h]
  __int128 v165; // [rsp+2C0h] [rbp+240h]
  __int128 v166; // [rsp+2D0h] [rbp+250h]
  __int64 v167; // [rsp+2E0h] [rbp+260h]
  __int64 v168; // [rsp+2F0h] [rbp+270h]
  __int64 v169; // [rsp+2F8h] [rbp+278h]
  __int64 v170; // [rsp+330h] [rbp+2B0h]
  __int64 v171; // [rsp+338h] [rbp+2B8h]
  __int64 v172; // [rsp+340h] [rbp+2C0h]
  __int64 v173; // [rsp+348h] [rbp+2C8h] BYREF
  __int64 v174; // [rsp+350h] [rbp+2D0h]
  __int64 v175; // [rsp+358h] [rbp+2D8h]
  _BYTE v176[192]; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v177; // [rsp+430h] [rbp+3B0h]
  __int64 v178; // [rsp+438h] [rbp+3B8h]
  __int128 v179; // [rsp+440h] [rbp+3C0h] BYREF
  unsigned __int64 v180; // [rsp+450h] [rbp+3D0h]
  _QWORD *v181; // [rsp+460h] [rbp+3E0h]
  __int64 v182; // [rsp+468h] [rbp+3E8h]
  char v183; // [rsp+475h] [rbp+3F5h]
  char v184; // [rsp+476h] [rbp+3F6h]
  char v185; // [rsp+477h] [rbp+3F7h]
  int v186; // [rsp+478h] [rbp+3F8h]
  char v187; // [rsp+47Ch] [rbp+3FCh]
  char v188; // [rsp+47Dh] [rbp+3FDh]
  _BYTE v189[2]; // [rsp+47Eh] [rbp+3FEh] BYREF
  __int64 v190; // [rsp+480h] [rbp+400h]
  __int64 v191; // [rsp+488h] [rbp+408h]
  __int64 v192; // [rsp+490h] [rbp+410h]
  char v193; // [rsp+49Eh] [rbp+41Eh]
  char v194; // [rsp+49Fh] [rbp+41Fh]
  __int64 v195; // [rsp+4A0h] [rbp+420h]
  char v196; // [rsp+4ACh] [rbp+42Ch]
  char v197; // [rsp+4ADh] [rbp+42Dh]
  char v198; // [rsp+4AEh] [rbp+42Eh]
  char v199; // [rsp+4AFh] [rbp+42Fh]
  __int64 v200; // [rsp+4B0h] [rbp+430h]

  v200 = -2;
  v139 = a4;
  nullsub_1(a1);
  v8 = sub_140001650(24, 8);
  v135 = v8;
  if ( !v8 )
  {
    v185 = 1;
    sub_1416C2D31(8, 24);
  }
  v133 = a1;
  *(_QWORD *)(v8 + 16) = *(_QWORD *)(a5 + 16);
  *(_OWORD *)v8 = *(_OWORD *)a5;
  v173 = 1;
  v174 = v8;
  v175 = 1;
  v197 = 1;
  v134 = a2 + 16;
  v9 = sub_141471AC0(a2 + 16);
  *(_OWORD *)v145 = 0x3E8 * (unsigned __int128)(unsigned __int64)v9 + v10 / 0xF4240uLL;
  *(_QWORD *)v144 = aReasonTransact;
  *(_QWORD *)&v144[8] = 26;
  *(_QWORD *)v176 = a2;
  *(_QWORD *)&v176[8] = sub_141356790;
  *(_QWORD *)&v176[16] = v145;
  *(_QWORD *)&v176[24] = sub_1414A9600;
  *(_QWORD *)&v176[32] = v144;
  *(_QWORD *)&v176[40] = sub_14041F680;
  v197 = 1;
  sub_14149C0F0(&v161, &unk_1417493E8, v176);
  v197 = 1;
  sub_1403565C0((unsigned int)aAccountSwitch, 14, (unsigned int)aRollbackStarte, 16, (__int64)&v161);
  v11 = *(_QWORD *)(a3 + 120) == -1;
  v181 = (_QWORD *)a3;
  if ( v11 )
  {
    *(_QWORD *)v145 = -1;
LABEL_17:
    v141 = -1;
    v20 = v181;
LABEL_18:
    v23 = v20[1];
    v24 = v20[2];
    v29 = 1;
    v30 = 0;
    v25 = a2;
    goto LABEL_19;
  }
  v161 = *(_OWORD *)(a3 + 128);
  v162 = 0;
  v197 = 1;
  sub_1408A9120(v176, &v161);
  if ( *(_QWORD *)v176 == -1 )
  {
    *(_QWORD *)v145 = -1;
    v197 = 1;
    sub_140348F00(v176);
    goto LABEL_17;
  }
  *(_OWORD *)v145 = *(_OWORD *)v176;
  *(_QWORD *)&v145[80] = *(_QWORD *)&v176[80];
  *(_OWORD *)&v145[64] = *(_OWORD *)&v176[64];
  *(_OWORD *)&v145[48] = *(_OWORD *)&v176[48];
  *(_OWORD *)&v145[32] = *(_OWORD *)&v176[32];
  *(_OWORD *)&v145[16] = *(_OWORD *)&v176[16];
  v12 = *(_QWORD *)v176;
  if ( *(_QWORD *)&v176[24] == -1 || !*(_QWORD *)&v145[16] )
    goto LABEL_17;
  v13 = *(_OWORD *)&v145[32];
  v14 = *(_QWORD *)&v145[8];
  v15 = 424LL * *(_QWORD *)&v145[16];
  v16 = 0;
  while ( *(_QWORD *)(v14 + v16 + 208) != *((_QWORD *)&v13 + 1)
       || (unsigned int)sub_1416847B0(*(_QWORD *)(v14 + v16 + 200), v13, *((_QWORD *)&v13 + 1)) )
  {
    v16 += 424;
    if ( v15 == v16 )
      goto LABEL_17;
  }
  v17 = *(_QWORD *)(v14 + v16 + 224);
  v18 = *(_QWORD *)(v14 + v16 + 232);
  v138 = v12;
  v184 = 1;
  sub_14149BB70(&v141, v17, v18);
  v19 = v141;
  v20 = v181;
  if ( v141 == -1 )
    goto LABEL_18;
  v21 = v142;
  v22 = v143;
  v23 = v181[1];
  v24 = v181[2];
  v196 = 1;
  sub_141473FA0((unsigned int)v144, v23, v24, (unsigned int)&unk_14174CD30, 9);
  v25 = a2;
  v195 = *(_QWORD *)&v144[8];
  sub_1403CE160((unsigned int)&v161, v21, v22, *(_DWORD *)&v144[8], *(__int64 *)&v144[16]);
  if ( (_DWORD)v161 != -1 )
  {
    *(_OWORD *)&v176[80] = v166;
    *(_OWORD *)&v176[64] = v165;
    *(_OWORD *)&v176[48] = v164;
    *(_OWORD *)&v176[32] = v163;
    *(_OWORD *)&v176[16] = v162;
    *(_OWORD *)v176 = v161;
    v155 = 0;
    v156 = 1;
    v157 = 0;
    v180 = 1610612768;
    *(_QWORD *)&v179 = &v155;
    *((_QWORD *)&v179 + 1) = &off_141754110;
    if ( (unsigned __int8)sub_140B036A0(v176, &v179) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)v189,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    v26 = v155;
    v27 = v156;
    v28 = v157;
    sub_14034ED40(&v161);
    if ( *(_QWORD *)v144 )
      sub_140001660(v195, *(_QWORD *)v144, 1);
LABEL_97:
    if ( v19 )
      sub_140001660(v21, v19, 1);
    v31 = v27 >> 8;
    goto LABEL_167;
  }
  if ( *(_QWORD *)v144 )
    sub_140001660(v195, *(_QWORD *)v144, 1);
  v196 = 1;
  sub_1403815E0(v176, v21, v22);
  v20 = *(_QWORD **)&v176[8];
  v161 = *(_OWORD *)&v176[24];
  v162 = *(_OWORD *)&v176[40];
  v163 = *(_OWORD *)&v176[56];
  v164 = *(_OWORD *)&v176[72];
  *(_QWORD *)&v165 = *(_QWORD *)&v176[88];
  if ( *(_QWORD *)v176 != -1 )
  {
    *(_QWORD *)&v176[88] = v165;
    *(_OWORD *)&v176[72] = v164;
    *(_OWORD *)&v176[56] = v163;
    *(_OWORD *)&v176[40] = v162;
    *(_OWORD *)&v176[24] = v161;
    *(_QWORD *)v144 = 0;
    *(_QWORD *)&v144[8] = 1;
    *(_QWORD *)&v144[16] = 0;
    *(_QWORD *)&v162 = 1610612768;
    *(_QWORD *)&v161 = v144;
    *((_QWORD *)&v161 + 1) = &off_141754110;
    if ( (unsigned __int8)sub_140B036A0(v176, &v161) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)v189,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    v27 = *(_QWORD *)&v144[8];
    v26 = *(_QWORD *)v144;
    v28 = *(_QWORD *)&v144[16];
    v196 = 1;
    sub_14034ED40(v176);
    goto LABEL_97;
  }
  v30 = 1;
  v29 = 0;
LABEL_19:
  v149 = v30;
  v150 = v20;
  v194 = 1;
  sub_1403871C0(&v161, v23, v24);
  if ( (_DWORD)v161 != -1 )
  {
    *(_OWORD *)&v176[80] = v166;
    *(_OWORD *)&v176[64] = v165;
    *(_OWORD *)&v176[48] = v164;
    *(_OWORD *)&v176[32] = v163;
    *(_OWORD *)&v176[16] = v162;
    *(_OWORD *)v176 = v161;
    *(_QWORD *)&v179 = 0;
    *((_QWORD *)&v179 + 1) = 1;
    v180 = 0;
    *(_QWORD *)&v144[16] = 1610612768;
    *(_QWORD *)v144 = &v179;
    *(_QWORD *)&v144[8] = &off_141754110;
    if ( (unsigned __int8)sub_140B036A0(v176, v144) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)v189,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    v27 = *((_QWORD *)&v179 + 1);
    v26 = v179;
    v28 = v180;
    v194 = 1;
    sub_14034ED40(&v161);
    v31 = v27 >> 8;
    LOBYTE(v24) = 1;
    if ( !v30 )
      goto LABEL_164;
LABEL_161:
    LODWORD(v181) = v24;
    *(_QWORD *)v176 = sub_1412018B0(&v150);
    if ( *(_QWORD *)v176 )
      sub_140018650(v176);
    CloseHandle(v150);
    LOBYTE(v24) = (_BYTE)v181;
    goto LABEL_164;
  }
  v159 = *((HANDLE *)&v161 + 1);
  v193 = 1;
  sub_1403885B0(&v161, v23, v24);
  v32 = v181;
  if ( (_DWORD)v161 != -1 )
  {
    *(_OWORD *)&v176[80] = v166;
    *(_OWORD *)&v176[64] = v165;
    *(_OWORD *)&v176[48] = v164;
    *(_OWORD *)&v176[32] = v163;
    *(_OWORD *)&v176[16] = v162;
    *(_OWORD *)v176 = v161;
    *(_QWORD *)&v179 = 0;
    *((_QWORD *)&v179 + 1) = 1;
    v180 = 0;
    *(_QWORD *)&v144[16] = 1610612768;
    *(_QWORD *)v144 = &v179;
    *(_QWORD *)&v144[8] = &off_141754110;
    if ( (unsigned __int8)sub_140B036A0(v176, v144) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)v189,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    v27 = *((_QWORD *)&v179 + 1);
    v26 = v179;
    v28 = v180;
    v193 = 1;
    v33 = sub_14034ED40(&v161);
    v31 = v27 >> 8;
    LOBYTE(v33) = 1;
    LODWORD(v181) = v33;
    goto LABEL_158;
  }
  hObject = *((HANDLE *)&v161 + 1);
  v34 = v181[5];
  v35 = v181[6];
  v188 = 1;
  v177 = v34;
  sub_14148D3C0(v176, v34, v35);
  v151 = *(_QWORD *)v176;
  if ( *(_QWORD *)v176 == -1 )
  {
    v188 = 1;
    v40 = sub_140018650(&v176[8]);
    v146 = -1;
    if ( v32[32] == -1 )
    {
      LOBYTE(v40) = v32[8] == -1;
      v186 = v40;
      LOBYTE(v37) = 1;
    }
    else
    {
      v37 = 0;
      v186 = 0;
    }
  }
  else
  {
    v36 = *(_QWORD *)&v176[16];
    v137 = *(_QWORD *)&v176[8];
    v183 = 1;
    v153 = *(_QWORD *)&v176[8];
    sub_1403DFA60((unsigned int)&v146, *(_DWORD *)&v176[8], *(_DWORD *)&v176[16], v177, v35);
    if ( v32[32] == -1 )
    {
      v186 = 0;
      LOBYTE(v37) = 1;
      if ( v32[8] != -1 && v36 == v32[10] )
      {
        v41 = sub_1416847B0(v153, v32[9], v36);
        LOBYTE(v37) = 1;
        LOBYTE(v41) = v41 == 0;
        v186 = v41;
      }
    }
    else if ( v146 == -1 || (v38 = v32[34], v148 != v38) )
    {
      v37 = 0;
      v186 = 0;
    }
    else
    {
      v39 = sub_1416847B0(v147, v32[33], v38);
      LOBYTE(v39) = v39 == 0;
      v186 = v39;
      v37 = 0;
    }
  }
  if ( v32[8] == -1 )
  {
    LODWORD(v178) = v37;
    v171 = v35;
    v44 = -1;
    v160 = v24;
    if ( v29 )
      goto LABEL_43;
    goto LABEL_50;
  }
  v42 = v32[10];
  if ( v42 < 0 )
  {
    v43 = 0;
    goto LABEL_41;
  }
  LODWORD(v178) = v37;
  v171 = v35;
  if ( !v42 )
  {
    v35 = 1;
    LODWORD(v24) = 0;
    v44 = 0;
    v160 = 0;
    if ( v29 )
      goto LABEL_43;
LABEL_50:
    v47 = v142;
    v24 = v143;
    v192 = v35;
    v191 = v35;
    v195 = v44;
    v190 = v44;
    v199 = 1;
    v198 = 1;
    sub_14148D3C0(v144, v142, v143);
    sub_1403C9010(&v161, v47, v24);
    *(_QWORD *)&v176[16] = *(_QWORD *)&v144[16];
    *(_OWORD *)v176 = *(_OWORD *)v144;
    sub_141684120(&v176[24], &v161, 176);
    if ( *(_QWORD *)v176 == -1 || *(_QWORD *)&v176[24] == -2 )
    {
      v182 = *(_QWORD *)&v176[24];
      if ( *(_QWORD *)v176 == -1 )
      {
        sub_140018650(&v176[8]);
      }
      else if ( *(_QWORD *)v176 )
      {
        sub_140001660(*(_QWORD *)&v176[8], *(_QWORD *)v176, 1);
      }
      if ( v182 == -2 )
      {
        v191 = v192;
        v190 = v195;
        v199 = 1;
        v198 = 1;
        sub_14034ED40(&v176[32]);
      }
      else
      {
        sub_14034E960(&v176[24]);
      }
LABEL_112:
      v35 = v192;
      v44 = v195;
      v32 = v181;
      if ( !(_BYTE)v186 )
        goto LABEL_120;
      goto LABEL_113;
    }
    v170 = *(_QWORD *)&v176[8];
    v172 = *(_QWORD *)v176;
    v48 = *(_QWORD *)&v176[16];
    sub_141684120(v144, &v176[24], 176);
    sub_1403C9DD0(&v161, v144, v47, v24);
    v140 = v48;
    if ( (_DWORD)v161 == 2 )
    {
      sub_14034ED40((char *)&v161 + 8);
      v49 = v192;
      v182 = -1;
      if ( v195 == -1 )
      {
LABEL_54:
        v155 = -1;
        *(_QWORD *)&v161 = -2;
LABEL_69:
        if ( *(_QWORD *)v145 == -1 || *(_QWORD *)&v145[24] == -1 )
        {
          v60 = v182;
          v61 = v192;
          v62 = v195;
          if ( v182 != -1 )
            goto LABEL_103;
        }
        else
        {
          sub_14149C500(&v179, &v145[24]);
          v59 = v179;
          v60 = v182;
          if ( v182 != -1 )
          {
            v61 = v192;
            v62 = v195;
            if ( (_QWORD)v179 != -1 )
            {
              if ( v152 == v180 )
              {
                v63 = *((_QWORD *)&v179 + 1);
                if ( !(unsigned int)sub_1416847B0(v154, *((_QWORD *)&v179 + 1), v152) )
                {
                  if ( v59 > 0 )
                    sub_140001660(v63, v59, 1);
                  goto LABEL_78;
                }
              }
              goto LABEL_101;
            }
LABEL_103:
            v65 = 0;
            goto LABEL_104;
          }
          v61 = v192;
          v62 = v195;
          if ( (_QWORD)v179 != -1 )
          {
LABEL_101:
            if ( v59 )
              sub_140001660(*((_QWORD *)&v179 + 1), v59, 1);
            goto LABEL_103;
          }
        }
LABEL_78:
        v64 = v60 == -1;
        if ( v155 == -1 )
          goto LABEL_82;
        v65 = 0;
        if ( v60 != -1 && v157 == v152 )
        {
          v64 = (unsigned int)sub_1416847B0(v156, v154, v152) == 0;
LABEL_82:
          if ( (_QWORD)v161 != -2 && v64 )
          {
            v66 = sub_1409DBBA0(v144, &v161);
            v61 = v192;
            if ( v66 )
            {
              v65 = 1;
              if ( v195 > 0 )
                sub_140001660(v192, v195, 1);
              v160 = v140;
              v61 = v170;
              v62 = v172;
              v60 = v182;
              if ( (_QWORD)v161 == -2 )
                goto LABEL_106;
            }
            else
            {
              v65 = 0;
              v62 = v195;
              v60 = v182;
              if ( (_QWORD)v161 == -2 )
                goto LABEL_106;
            }
          }
          else
          {
            v65 = 0;
            if ( (_QWORD)v161 == -2 )
              goto LABEL_106;
          }
          goto LABEL_105;
        }
LABEL_104:
        if ( (_QWORD)v161 == -2 )
        {
LABEL_106:
          if ( v155 > 0 )
            sub_140001660(v156, v155, 1);
          if ( (unsigned __int64)(v60 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v154, v60, 1);
          v195 = v62;
          v192 = v61;
          sub_14034E960(v144);
          if ( !((unsigned __int8)v65 | (v172 == 0)) )
            sub_140001660(v170, v172, 1);
          goto LABEL_112;
        }
LABEL_105:
        sub_14034E960(&v161);
        goto LABEL_106;
      }
LABEL_68:
      v58 = v160;
      sub_1403DFA60((unsigned int)&v155, v49, v160, v177, v171);
      sub_14037C980(&v161, v49, v58);
      goto LABEL_69;
    }
    v154 = *((_QWORD *)&v162 + 1);
    v50 = v162;
    v152 = v163;
    v51 = *((_QWORD *)&v165 + 1);
    v24 = v165;
    v52 = *((_QWORD *)&v166 + 1);
    v53 = v167;
    v54 = v168;
    v182 = v169;
    if ( *((_QWORD *)&v163 + 1) )
    {
      v136 = v168;
      v55 = v167;
      v56 = *((_QWORD *)&v165 + 1);
      sub_140001660(v164, *((_QWORD *)&v163 + 1), 1);
      v51 = v56;
      v53 = v55;
      v54 = v136;
    }
    if ( v24 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v49 = v192;
      if ( (unsigned __int64)(v52 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_62:
        v57 = v195;
        if ( (unsigned __int64)(v54 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_63;
        goto LABEL_67;
      }
    }
    else
    {
      sub_140001660(v51, v24, 1);
      v49 = v192;
      if ( (unsigned __int64)(v52 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_62;
    }
    sub_140001660(v53, v52, 1);
    v57 = v195;
    if ( (unsigned __int64)(v54 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_63:
      sub_140001660(v182, v54, 1);
      v182 = v50;
      if ( v57 == -1 )
        goto LABEL_54;
      goto LABEL_68;
    }
LABEL_67:
    v182 = v50;
    if ( v57 == -1 )
      goto LABEL_54;
    goto LABEL_68;
  }
  v45 = v32[9];
  v24 = v42;
  nullsub_1(v37);
  v43 = 1;
  v46 = sub_140001650(v24, 1);
  v42 = v24;
  if ( !v46 )
  {
LABEL_41:
    v189[1] = 1;
    sub_1416C2D4B(v43, v42);
  }
  v35 = v46;
  sub_141684120(v46, v45, v24);
  v44 = v24;
  v160 = v24;
  if ( !v29 )
    goto LABEL_50;
LABEL_43:
  v192 = v35;
  v195 = v44;
  if ( !(_BYTE)v186 )
    goto LABEL_120;
LABEL_113:
  if ( v44 == -1 )
  {
    v191 = v35;
    v190 = -1;
    v199 = 1;
    v198 = 1;
    v69 = sub_141485EF0(v177, v171);
    v70 = v69;
    v35 = v192;
    v44 = v195;
    v32 = v181;
    if ( v69 )
    {
      if ( (unsigned __int8)sub_1403887F0(v69) )
      {
        *(_QWORD *)&v161 = v70;
        sub_140421910(v176, &v161);
        v27 = *(_QWORD *)&v176[8];
        v26 = *(_QWORD *)v176;
        v28 = *(_QWORD *)&v176[16];
        v191 = v192;
        v190 = -1;
        v199 = 1;
        v198 = 1;
        sub_140018650(&v161);
        v31 = v27 >> 8;
        LOBYTE(v24) = 1;
        goto LABEL_151;
      }
      *(_QWORD *)v176 = v70;
      v191 = v35;
      v190 = -1;
      v199 = 1;
      v198 = 1;
      sub_140018650(v176);
      v35 = v192;
      v44 = v195;
      v32 = v181;
    }
  }
  else
  {
    v191 = v35;
    v190 = v44;
    v199 = 1;
    v198 = 1;
    v67 = sub_1408726C0(v177, v171, v35, v160);
    v35 = v192;
    v44 = v195;
    v32 = v181;
    if ( v67 )
    {
      *(_QWORD *)&v179 = v67;
      *(_QWORD *)v144 = v177;
      *(_QWORD *)&v144[8] = v171;
      *(_QWORD *)v176 = v144;
      *(_QWORD *)&v176[8] = sub_14148F3A0;
      *(_QWORD *)&v176[16] = &v179;
      *(_QWORD *)&v176[24] = sub_141490720;
      sub_14149C0F0(&v161, &unk_14174C9DE, v176);
      v191 = v192;
      v190 = v195;
      v199 = 1;
      v198 = 1;
      sub_140018650(&v179);
      LOBYTE(v27) = BYTE8(v161);
      v26 = v161;
      v31 = *((_QWORD *)&v161 + 1) >> 8;
      v28 = v162;
      LOBYTE(v24) = 1;
      v68 = v195;
      goto LABEL_149;
    }
  }
LABEL_120:
  v71 = v32 + 11;
  if ( !(_BYTE)v178 )
  {
    if ( *(_QWORD *)v145 == -1 )
    {
      v191 = v35;
      v190 = v44;
      v199 = 1;
      v198 = 1;
      sub_140380690((__int64)v176, v32 + 11);
      v26 = *(_QWORD *)v176;
      if ( *(_QWORD *)v176 != -1 )
      {
        LOBYTE(v27) = v176[8];
        v28 = *(_QWORD *)&v176[16];
        v31 = *(_QWORD *)&v176[8] >> 8;
        LOBYTE(v24) = 1;
        goto LABEL_147;
      }
    }
    else
    {
      v72 = v32[12];
      v73 = v32[13];
      v191 = v35;
      v190 = v44;
      v199 = 1;
      v198 = 1;
      sub_14148D3C0(v176, v72, v73);
      if ( *(_QWORD *)v176 == -1 )
      {
        v191 = v192;
        v190 = v195;
        v199 = 1;
        v198 = 1;
        sub_140348BB0((__int64 *)v176);
        v75 = v192;
        v76 = v195;
      }
      else
      {
        v182 = *(_QWORD *)&v176[8];
        v178 = *(_QWORD *)v176;
        *(_OWORD *)v144 = *(_OWORD *)&v176[8];
        *(_OWORD *)&v144[16] = 0;
        sub_1408A9120(v176, v144);
        v24 = (unsigned __int64)v181;
        v74 = *(_QWORD *)v176;
        if ( *(_QWORD *)v176 == -1 )
        {
          sub_140348F00(v176);
        }
        else
        {
          v165 = *(_OWORD *)&v176[72];
          v164 = *(_OWORD *)&v176[56];
          v163 = *(_OWORD *)&v176[40];
          v162 = *(_OWORD *)&v176[24];
          v161 = *(_OWORD *)&v176[8];
        }
        v170 = v73;
        v172 = v72;
        v75 = v192;
        v76 = v195;
        if ( v178 )
          sub_140001660(v182, v178, 1);
        if ( v74 != -1 )
        {
          *(_QWORD *)v176 = v74;
          *(_OWORD *)&v176[72] = v165;
          *(_OWORD *)&v176[56] = v164;
          *(_OWORD *)&v176[40] = v163;
          *(_OWORD *)&v176[24] = v162;
          *(_OWORD *)&v176[8] = v161;
          v77 = v162;
          LOBYTE(v27) = 0;
          if ( (_QWORD)v162 == -1 )
            goto LABEL_138;
          v78 = *(_QWORD *)(v24 + 272);
          if ( *(_QWORD *)&v176[40] != v78 )
            goto LABEL_138;
          v79 = *(_QWORD *)&v176[32];
          if ( (unsigned int)sub_1416847B0(*(_QWORD *)&v176[32], *(_QWORD *)(v24 + 264), v78) )
          {
            LOBYTE(v27) = 0;
LABEL_138:
            v191 = v75;
            v190 = v76;
            v199 = 1;
            v198 = 1;
            sub_14034DF40(v176);
            goto LABEL_143;
          }
          if ( *(_QWORD *)&v145[24] == -1 )
          {
            v90 = v25;
            v91 = -1;
          }
          else
          {
            sub_14149C500(v144, &v145[24]);
            v90 = v25;
            v91 = *(_QWORD *)v144;
            v179 = *(_OWORD *)&v144[8];
          }
          if ( v77 )
            sub_140001660(v79, v77, 1);
          *(_QWORD *)&v176[24] = v91;
          *(_OWORD *)&v176[32] = v179;
          v25 = v90;
          *(_QWORD *)&v176[72] = sub_1403C9370();
          sub_1403506C0(&v179, v176);
          v94 = v172;
          v95 = v170;
          if ( (_QWORD)v179 == -1 )
          {
            sub_14037C9F0(v144, *((_QWORD *)&v179 + 1));
            v27 = *(_QWORD *)&v144[8];
            v26 = *(_QWORD *)v144;
            v28 = *(_QWORD *)&v144[16];
          }
          else
          {
            v182 = *((_QWORD *)&v179 + 1);
            v178 = v179;
            v96 = sub_1408726C0(v172, v170, *((__int64 *)&v179 + 1), v180);
            if ( !v96 )
            {
              LOBYTE(v27) = 1;
              if ( v178 )
                sub_140001660(v182, v178, 1);
              v75 = v192;
              v76 = v195;
              goto LABEL_138;
            }
            sub_14037CB60(v144, v94, v95, v96);
            v27 = *(_QWORD *)&v144[8];
            v26 = *(_QWORD *)v144;
            v28 = *(_QWORD *)&v144[16];
            if ( v178 )
              sub_140001660(v182, v178, 1);
          }
          v191 = v192;
          v190 = v195;
          v199 = 1;
          v198 = 1;
          sub_14034DF40(v176);
LABEL_141:
          v68 = v195;
          v31 = v27 >> 8;
          LOBYTE(v24) = 1;
          goto LABEL_148;
        }
      }
      v191 = v75;
      v190 = v76;
      v199 = 1;
      v198 = 1;
      sub_140380690((__int64)v176, v71);
      v26 = *(_QWORD *)v176;
      if ( *(_QWORD *)v176 != -1 )
      {
        v27 = *(_QWORD *)&v176[8];
        v28 = *(_QWORD *)&v176[16];
        goto LABEL_141;
      }
    }
    LOBYTE(v27) = 1;
LABEL_143:
    v31 = (unsigned __int64)(v181 + 18);
    v191 = v192;
    v190 = v195;
    v199 = 1;
    v198 = 1;
    sub_14037FF70((__int64)v176, v181 + 18);
    v26 = *(_QWORD *)v176;
    LODWORD(v24) = v176[8];
    if ( *(_QWORD *)v176 != -1 )
    {
      v31 = ((unsigned __int64)((v176[15] << 16) | (unsigned int)*(unsigned __int16 *)&v176[13]) << 32)
          | *(unsigned int *)&v176[9];
      v28 = *(_QWORD *)&v176[16];
      LOBYTE(v27) = v176[8];
      LOBYTE(v24) = 1;
      goto LABEL_147;
    }
    v80 = v181 + 25;
    v191 = v192;
    v190 = v195;
    v199 = 1;
    v198 = 1;
    v81 = sub_14037FF70((__int64)v176, v181 + 25);
    v26 = *(_QWORD *)v176;
    v82 = v176[8];
    if ( *(_QWORD *)v176 != -1 )
    {
      v31 = ((unsigned __int64)((v176[15] << 16) | (unsigned int)*(unsigned __int16 *)&v176[13]) << 32)
          | *(unsigned int *)&v176[9];
      v28 = *(_QWORD *)&v176[16];
      LOBYTE(v24) = 1;
      LOBYTE(v27) = v176[8];
      goto LABEL_147;
    }
    v28 = v192;
    if ( (_BYTE)v186 )
    {
      LOBYTE(v186) = v176[8];
      if ( v195 == -1 )
      {
        v191 = v192;
        v190 = -1;
        v199 = 1;
        v198 = 1;
        sub_141486710(v176, v177, v171);
        if ( *(_DWORD *)v176 == 2 )
        {
          *((_QWORD *)&v161 + 1) = *(_QWORD *)&v176[8];
          *(_QWORD *)&v161 = 2;
          v93 = v192;
        }
        else
        {
          v161 = *(_OWORD *)v176;
          *(_QWORD *)&v166 = *(_QWORD *)&v176[80];
          v165 = *(_OWORD *)&v176[64];
          v164 = *(_OWORD *)&v176[48];
          v163 = *(_OWORD *)&v176[32];
          v162 = *(_OWORD *)&v176[16];
          v93 = v192;
          if ( *(_QWORD *)v176 != 2 )
          {
            nullsub_1(v92);
            v28 = 37;
            v124 = sub_140001650(37, 1);
            if ( !v124 )
            {
              v191 = v192;
              v190 = -1;
              v199 = 1;
              v198 = 1;
              sub_1416C2D4B(1, 37);
            }
            LOBYTE(v27) = v124;
            qmemcpy((void *)v124, "auth.json still exists after rollback", 37);
            v31 = v124 >> 8;
            LOBYTE(v24) = 1;
            v26 = 37;
            goto LABEL_151;
          }
        }
        v191 = v93;
        v190 = -1;
        v199 = 1;
        v198 = 1;
        v81 = sub_140018650((char *)&v161 + 8);
        v28 = v192;
        goto LABEL_208;
      }
      v191 = v192;
      v190 = v195;
      v199 = 1;
      v198 = 1;
      sub_14148D3C0(v176, v177, v171);
      v88 = *(_QWORD *)v176;
      if ( *(_QWORD *)v176 == -1 )
      {
        v191 = v192;
        v190 = v195;
        v199 = 1;
        v198 = 1;
        sub_140348BB0((__int64 *)v176);
        v28 = v192;
LABEL_202:
        nullsub_1(v89);
        v97 = (void *)sub_140001650(68, 1);
        v98 = v195;
        if ( !v97 )
          sub_1416C2D4B(1, 68);
        v27 = (unsigned __int64)v97;
        qmemcpy(v97, "Restored auth.json does not match the selected credential generation", 68);
        if ( v98 )
          sub_140001660(v28, v98, 1);
        v31 = v27 >> 8;
        LOBYTE(v24) = 1;
        v28 = 68;
        v26 = 68;
        goto LABEL_151;
      }
      v89 = *(_QWORD *)&v176[8];
      v28 = v192;
      if ( *(_QWORD *)&v176[16] != v160
        || (v177 = *(_QWORD *)&v176[8],
            LODWORD(v81) = sub_1416847B0(*(_QWORD *)&v176[8], v192, v160),
            v89 = v177,
            (_DWORD)v81) )
      {
        if ( v88 )
          sub_140001660(v89, v88, 1);
        goto LABEL_202;
      }
      v82 = v186;
      if ( v88 )
      {
        v81 = sub_140001660(v177, v88, 1);
LABEL_208:
        v82 = v186;
      }
    }
    LOBYTE(v81) = 1;
    if ( (v27 & 1) == 0 )
      goto LABEL_242;
    LOBYTE(v186) = v82;
    v99 = v181[12];
    v100 = v181[13];
    v191 = v28;
    v190 = v195;
    v199 = 1;
    v198 = 1;
    sub_14148D3C0(v144, v99, v100);
    if ( *(_QWORD *)v144 == -1 )
    {
      v191 = v192;
      v190 = v195;
      v199 = 1;
      v198 = 1;
      sub_140348BB0((__int64 *)v144);
      *(_QWORD *)&v161 = -1;
    }
    else
    {
      *(_OWORD *)&v176[8] = *(_OWORD *)&v144[8];
      *(_QWORD *)v176 = *(_QWORD *)v144;
      v191 = v192;
      v190 = v195;
      v199 = 1;
      v198 = 1;
      sub_14037CBF0(&v161, v176);
      if ( (_QWORD)v161 != -1 && *((_QWORD *)&v162 + 1) != -1 )
      {
        v187 = 1;
        sub_14149C500(&v179, (char *)&v162 + 8);
        goto LABEL_216;
      }
    }
    *(_QWORD *)&v179 = -1;
LABEL_216:
    if ( *(_QWORD *)v145 == -1 )
    {
      v103 = v179;
      if ( (_QWORD)v179 != -1 )
        goto LABEL_233;
    }
    else
    {
      *(_OWORD *)&v176[72] = *(_OWORD *)&v145[72];
      *(_OWORD *)&v176[56] = *(_OWORD *)&v145[56];
      *(_OWORD *)&v176[40] = *(_OWORD *)&v145[40];
      *(_OWORD *)&v176[24] = *(_OWORD *)&v145[24];
      *(_OWORD *)&v176[8] = *(_OWORD *)&v145[8];
      *(_QWORD *)v176 = *(_QWORD *)v145;
      sub_14037CCF0(v144, v176);
      v102 = *(_QWORD *)v144;
      v103 = v179;
      if ( (_QWORD)v179 != -1 )
      {
        if ( *(_QWORD *)v144 != -1 )
        {
          if ( v180 == *(_QWORD *)&v144[16] )
          {
            v27 = *(_QWORD *)&v144[8];
            if ( !(unsigned int)sub_1416847B0(*((_QWORD *)&v179 + 1), *(_QWORD *)&v144[8], v180) )
            {
              if ( v102 > 0 )
                sub_140001660(v27, v102, 1);
              if ( v103 )
                sub_140001660(*((_QWORD *)&v179 + 1), v103, 1);
              goto LABEL_239;
            }
          }
          goto LABEL_231;
        }
LABEL_233:
        if ( v103 > 0 )
          sub_140001660(*((_QWORD *)&v179 + 1), v103, 1);
        nullsub_1(v101);
        v104 = (void *)sub_140001650(58, 1);
        if ( !v104 )
        {
          v187 = 0;
          sub_1416C2D4B(1, 58);
        }
        v27 = (unsigned __int64)v104;
        qmemcpy(v104, "Registry active account does not match the rollback target", 58);
        if ( (_QWORD)v161 != -1 )
        {
          v191 = v192;
          v190 = v195;
          v199 = 1;
          v198 = 0;
          sub_14034DF40(&v161);
        }
        v31 = v27 >> 8;
        v28 = 58;
        LODWORD(v24) = 0;
        v26 = 58;
        goto LABEL_147;
      }
      if ( *(_QWORD *)v144 != -1 )
      {
LABEL_231:
        if ( v102 > 0 )
          sub_140001660(*(_QWORD *)&v144[8], v102, 1);
        goto LABEL_233;
      }
    }
LABEL_239:
    if ( (_QWORD)v161 != -1 )
    {
      v191 = v192;
      v190 = v195;
      v199 = 1;
      v198 = 0;
      sub_14034DF40(&v161);
    }
    LODWORD(v81) = 0;
    v28 = v192;
    v82 = v186;
LABEL_242:
    v11 = (v24 & 1) == 0;
    v105 = v195;
    LODWORD(v24) = v81;
    if ( !v11 )
    {
      LOBYTE(v27) = v82;
      v191 = v28;
      v190 = v195;
      v199 = 1;
      v198 = v81;
      sub_140380210(v176, (_QWORD *)v31);
      v26 = *(_QWORD *)v176;
      if ( *(_QWORD *)v176 != -1 )
      {
LABEL_247:
        LOBYTE(v27) = v176[8];
        v28 = *(_QWORD *)&v176[16];
        v31 = *(_QWORD *)&v176[8] >> 8;
        goto LABEL_147;
      }
      v28 = v192;
      v105 = v195;
      v82 = v27;
    }
    if ( (v82 & 1) != 0 )
    {
      v191 = v28;
      v190 = v105;
      v199 = 1;
      v198 = v24;
      sub_140380210(v176, v80);
      v26 = *(_QWORD *)v176;
      if ( *(_QWORD *)v176 != -1 )
        goto LABEL_247;
      v28 = v192;
      v105 = v195;
    }
    v106 = v153;
    if ( v105 > 0 )
      sub_140001660(v28, v105, 1);
    if ( v146 > 0 )
      sub_140001660(v147, v146, 1);
    if ( v151 > 0 )
      sub_140001660(v106, v151, 1);
    v193 = v24;
    sub_14034E7D0(&hObject);
    v194 = v24;
    sub_14034E7D0(&v159);
    v196 = v24;
    sub_140348680(&v149);
    if ( v141 > 0 )
      sub_140001660(v142, v141, 1);
    if ( !(_BYTE)v24 || *(_QWORD *)v145 == -1 )
      goto LABEL_261;
    v26 = -1;
LABEL_168:
    v197 = 1;
    sub_14034DF40(v145);
    goto LABEL_169;
  }
  v191 = v35;
  v190 = v44;
  v199 = 1;
  v198 = 1;
  sub_14037FF70((__int64)v176, v32 + 11);
  v26 = *(_QWORD *)v176;
  LOBYTE(v27) = v176[8];
  if ( *(_QWORD *)v176 == -1 )
    goto LABEL_143;
  v31 = ((unsigned __int64)((v176[15] << 16) | (unsigned int)*(unsigned __int16 *)&v176[13]) << 32)
      | *(unsigned int *)&v176[9];
  v28 = *(_QWORD *)&v176[16];
  LOBYTE(v24) = 1;
LABEL_147:
  v68 = v195;
LABEL_148:
  if ( v68 != -1 )
  {
LABEL_149:
    if ( v68 )
      sub_140001660(v192, v68, 1);
  }
LABEL_151:
  if ( v146 > 0 )
    sub_140001660(v147, v146, 1);
  LODWORD(v181) = v24;
  if ( v151 > 0 )
    sub_140001660(v153, v151, 1);
  *(_QWORD *)v176 = sub_1412018B0(&hObject);
  if ( *(_QWORD *)v176 )
    sub_140018650(v176);
  CloseHandle(hObject);
LABEL_158:
  *(_QWORD *)v176 = sub_1412018B0(&v159);
  if ( *(_QWORD *)v176 )
    sub_140018650(v176);
  CloseHandle(v159);
  LODWORD(v24) = (_DWORD)v181;
  if ( v149 )
    goto LABEL_161;
LABEL_164:
  if ( v141 > 0 )
    sub_140001660(v142, v141, 1);
  if ( (_BYTE)v24 )
  {
LABEL_167:
    if ( *(_QWORD *)v145 == -1 )
      goto LABEL_169;
    goto LABEL_168;
  }
LABEL_169:
  if ( v26 == -1 )
  {
LABEL_261:
    v197 = 1;
    v107 = sub_141471AC0(v134);
    *(_OWORD *)v145 = 0x3E8 * (unsigned __int128)(unsigned __int64)v107 + v108 / 0xF4240uLL;
    *(_QWORD *)v144 = aStatusVerified;
    *(_QWORD *)&v144[8] = 15;
    *(_QWORD *)v176 = v25;
    *(_QWORD *)&v176[8] = sub_141356790;
    *(_QWORD *)&v176[16] = v145;
    *(_QWORD *)&v176[24] = sub_1414A9600;
    *(_QWORD *)&v176[32] = v144;
    *(_QWORD *)&v176[40] = sub_14041F680;
    v197 = 1;
    sub_14149C0F0(&v161, &unk_1417493E8, v176);
    v197 = 1;
    sub_1403565C0((unsigned int)aAccountSwitch, 14, (unsigned int)aRollbackComple, 18, (__int64)&v161);
    v87 = 1;
    goto LABEL_262;
  }
  *(_QWORD *)v176 = v26;
  *(_QWORD *)&v176[8] = (v31 << 8) | (unsigned __int8)v27;
  *(_QWORD *)&v176[16] = v28;
  *(_QWORD *)&v83 = sub_1403DB1E0(*(_BYTE **)&v176[8], v28);
  *(_OWORD *)v144 = v83;
  *(_QWORD *)&v161 = v144;
  *((_QWORD *)&v161 + 1) = sub_14041F680;
  sub_14149C0F0(v126, &unk_141749922, &v161);
  sub_140343D80(v25, (int)aRollbackFailed, 15, v126);
  *(_QWORD *)&v161 = v176;
  *((_QWORD *)&v161 + 1) = sub_1400015F0;
  sub_14149C0F0(&v131, &unk_141751287, &v161);
  v84 = v175;
  if ( v175 == v173 )
    sub_141689AB0(&v173);
  v85 = v174;
  v86 = 3 * v84;
  *(_QWORD *)(v174 + 8 * v86 + 16) = v132;
  *(_OWORD *)(v85 + 8 * v86) = v131;
  v175 = v84 + 1;
  if ( *(_QWORD *)v176 )
    sub_140001660(*(_QWORD *)&v176[8], *(_QWORD *)v176, 1);
  v87 = 0;
LABEL_262:
  *(_QWORD *)&v176[48] = *((_QWORD *)v139 + 6);
  v109 = *v139;
  v110 = v139[1];
  *(_OWORD *)&v176[32] = v139[2];
  *(_OWORD *)&v176[16] = v110;
  *(_OWORD *)v176 = v109;
  v197 = 0;
  sub_140387CC0((__int64)&v161, (__int64 *)v176);
  if ( (_DWORD)v161 == -1 )
  {
    if ( v87 )
    {
      v197 = 0;
      sub_1403B6530(&v161, v111);
      if ( (_DWORD)v161 != -1 )
      {
        *(_OWORD *)&v176[80] = v166;
        *(_OWORD *)&v176[64] = v165;
        *(_OWORD *)&v176[48] = v164;
        *(_OWORD *)&v176[32] = v163;
        *(_OWORD *)&v176[16] = v162;
        *(_OWORD *)v176 = v161;
        *(_QWORD *)v144 = v176;
        *(_QWORD *)&v144[8] = sub_140B036A0;
        sub_14149C0F0(&v127, &unk_141749DD4, v144);
        v115 = v175;
        if ( v175 == v173 )
          sub_141689AB0(&v173);
        v116 = v174;
        v117 = 3 * v115;
        *(_QWORD *)(v174 + 8 * v117 + 16) = v128;
        *(_OWORD *)(v116 + 8 * v117) = v127;
        v175 = v115 + 1;
        v197 = 0;
        sub_14034ED40(v176);
      }
    }
  }
  else
  {
    *(_OWORD *)&v176[80] = v166;
    *(_OWORD *)&v176[64] = v165;
    *(_OWORD *)&v176[48] = v164;
    *(_OWORD *)&v176[32] = v163;
    *(_OWORD *)&v176[16] = v162;
    *(_OWORD *)v176 = v161;
    *(_QWORD *)v144 = v176;
    *(_QWORD *)&v144[8] = sub_140B036A0;
    sub_14149C0F0(&v129, &unk_1417512A2, v144);
    v112 = v175;
    if ( v175 == v173 )
      sub_141689AB0(&v173);
    v113 = v174;
    v114 = 3 * v112;
    *(_QWORD *)(v174 + 8 * v114 + 16) = v130;
    *(_OWORD *)(v113 + 8 * v114) = v129;
    v175 = v112 + 1;
    v197 = 0;
    sub_14034ED40(v176);
  }
  if ( !v175 )
  {
    v197 = 0;
    sub_1416C30E3(0, 0, &off_1417512E0);
  }
  *(_QWORD *)&v118 = sub_1403DB1E0(*(_BYTE **)(v174 + 8), *(_QWORD *)(v174 + 16));
  v161 = v118;
  *(_QWORD *)v176 = &v161;
  *(_QWORD *)&v176[8] = sub_14041F680;
  v197 = 0;
  sub_14149C0F0(v125, &unk_141749922, v176);
  v197 = 0;
  sub_140343D80(v25, (int)aFailed, 6, v125);
  v197 = 0;
  sub_140440300((unsigned int)v176, v174, v175, (unsigned int)&aCodeSwitchRoll[35], 3);
  v119 = (_OWORD *)v133;
  *(_QWORD *)(v133 + 16) = *(_QWORD *)&v176[16];
  *v119 = *(_OWORD *)v176;
  v120 = v175;
  if ( v175 )
  {
    v121 = (_QWORD *)(v174 + 8);
    do
    {
      v122 = *(v121 - 1);
      if ( v122 )
        sub_140001660(*v121, v122, 1);
      v121 += 3;
      --v120;
    }
    while ( v120 );
  }
  result = v173;
  if ( v173 )
    return sub_140001660(v174, 24 * v173, 8);
  return result;
}