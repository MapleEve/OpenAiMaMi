// module: codexmate_lib/core/voice/runtime
// addr: 0x140585f80
// name: sub_140585F80
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
volatile signed __int64 *__fastcall sub_140585F80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // r14d
  int v11; // edx
  int v12; // r15d
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  _BYTE *v23; // r14
  __int64 v24; // r14
  __int64 v25; // r14
  char v26; // r12
  __int64 v27; // rdx
  __int64 v28; // r12
  char *v29; // r14
  __int64 v30; // rcx
  char v31; // al
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // r14
  __int64 v35; // r12
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  bool v38; // zf
  __int64 v39; // rax
  int v40; // r14d
  __int64 v41; // r12
  __int64 v42; // r13
  PVOID v43; // rcx
  signed __int64 v44; // r14
  _BYTE *v45; // r13
  __int64 v46; // rdx
  _QWORD *v47; // r12
  __int64 v48; // rdx
  char *v49; // r14
  char v50; // al
  __int64 v51; // rdx
  __int64 v52; // r14
  void *v53; // rcx
  _BYTE *v54; // r12
  PVOID v55; // rcx
  char v56; // al
  char v57; // r13
  int v58; // r14d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r14
  __int64 v62; // r12
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  bool v65; // zf
  __int64 v66; // rax
  char *v67; // r14
  char v68; // al
  PVOID v69; // rcx
  char v70; // al
  __int64 v71; // rdx
  __int64 v72; // rax
  volatile signed __int64 *v73; // rdx
  __int64 v74; // r14
  char v75; // of
  volatile signed __int64 *v76; // r12
  __int64 v77; // rt0
  volatile signed __int64 *v78; // r14
  __int64 v79; // rt0
  char v80; // r14
  __int64 v81; // rax
  void *v82; // rcx
  __int64 v83; // r14
  __int64 v84; // r12
  __int64 v85; // rdx
  unsigned __int64 v86; // rax
  bool v87; // zf
  __int64 v88; // rax
  int v89; // r14d
  __int64 v90; // r12
  int v91; // r13d
  __int64 v92; // r14
  __int64 v93; // r12
  __int64 v94; // rdx
  unsigned __int64 v95; // rax
  bool v96; // zf
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // r13
  __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // rcx
  char v103; // al
  __int64 v104; // rcx
  __int64 v105; // rdx
  unsigned __int64 v106; // rax
  __int64 v107; // rax
  unsigned int v108; // edx
  __int64 v109; // rcx
  char v110; // al
  __int64 v111; // r14
  signed __int64 v112; // r14
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r12
  char v116; // al
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r12
  char v120; // of
  volatile signed __int64 *v121; // r13
  __int64 v122; // rt0
  volatile signed __int64 *v123; // r12
  __int64 v124; // rt0
  __int64 v125; // r14
  char v126; // al
  void (__fastcall *v127)(__int64); // rax
  volatile signed __int64 *result; // rax
  char v129[11584]; // [rsp+30h] [rbp-50h] BYREF
  char v130[11584]; // [rsp+2D70h] [rbp+2CF0h] BYREF
  __int128 v131; // [rsp+5AB0h] [rbp+5A30h] BYREF
  void **v132; // [rsp+5AC0h] [rbp+5A40h]
  void *v133; // [rsp+87F0h] [rbp+8770h] BYREF
  __int128 v134; // [rsp+87F8h] [rbp+8778h]
  __int128 v135; // [rsp+8808h] [rbp+8788h]
  __int64 v136; // [rsp+8818h] [rbp+8798h]
  __int64 v137; // [rsp+8820h] [rbp+87A0h]
  __int64 v138; // [rsp+8828h] [rbp+87A8h]
  __int64 *v139; // [rsp+8830h] [rbp+87B0h]
  __int64 v140; // [rsp+8838h] [rbp+87B8h]
  __int64 *v141; // [rsp+8840h] [rbp+87C0h]
  __int64 v142; // [rsp+8848h] [rbp+87C8h]
  PVOID v143; // [rsp+8850h] [rbp+87D0h] BYREF
  __int64 v144; // [rsp+8858h] [rbp+87D8h]
  __int64 v145; // [rsp+8860h] [rbp+87E0h]
  __int128 v146; // [rsp+8868h] [rbp+87E8h]
  __int64 v147; // [rsp+8878h] [rbp+87F8h]
  __int128 v148; // [rsp+8880h] [rbp+8800h]
  __int64 v149; // [rsp+8890h] [rbp+8810h]
  __int128 v150; // [rsp+8898h] [rbp+8818h]
  __int64 v151; // [rsp+88A8h] [rbp+8828h]
  int v152; // [rsp+88B0h] [rbp+8830h]
  __int64 v153; // [rsp+88B8h] [rbp+8838h] BYREF
  __int128 v154; // [rsp+88C0h] [rbp+8840h]
  __int64 v155; // [rsp+88D0h] [rbp+8850h]
  __int128 v156; // [rsp+88D8h] [rbp+8858h]
  __int128 v157; // [rsp+88E8h] [rbp+8868h]
  __int128 v158; // [rsp+88F8h] [rbp+8878h]
  __int128 v159; // [rsp+8908h] [rbp+8888h]
  __int64 v160; // [rsp+8918h] [rbp+8898h]
  volatile signed __int64 *v161; // [rsp+8920h] [rbp+88A0h] BYREF
  signed __int64 v162; // [rsp+8928h] [rbp+88A8h]
  __int64 v163; // [rsp+8930h] [rbp+88B0h]
  PVOID v164; // [rsp+8938h] [rbp+88B8h]
  int v165; // [rsp+8940h] [rbp+88C0h]
  volatile signed __int64 *v166; // [rsp+8948h] [rbp+88C8h] BYREF
  _OWORD v167[3]; // [rsp+8950h] [rbp+88D0h] BYREF
  __int64 v168; // [rsp+8980h] [rbp+8900h] BYREF
  unsigned __int16 v169; // [rsp+8988h] [rbp+8908h]
  char v170; // [rsp+898Ah] [rbp+890Ah]
  unsigned __int8 v171; // [rsp+898Bh] [rbp+890Bh] BYREF
  char v172; // [rsp+898Ch] [rbp+890Ch] BYREF
  __int16 v173; // [rsp+898Dh] [rbp+890Dh]
  char v174; // [rsp+898Fh] [rbp+890Fh]
  __int128 v175; // [rsp+8990h] [rbp+8910h] BYREF
  _OWORD v176[2]; // [rsp+89A0h] [rbp+8920h] BYREF
  _OWORD v177[2]; // [rsp+89C0h] [rbp+8940h] BYREF
  __int128 v178; // [rsp+89E0h] [rbp+8960h] BYREF
  __int128 v179; // [rsp+89F0h] [rbp+8970h] BYREF
  char v180; // [rsp+8A00h] [rbp+8980h]
  __int64 v181; // [rsp+8A08h] [rbp+8988h] BYREF
  _QWORD v182[5]; // [rsp+8A10h] [rbp+8990h] BYREF
  char v183; // [rsp+8A38h] [rbp+89B8h]
  char v184; // [rsp+8A60h] [rbp+89E0h]
  PVOID Address; // [rsp+8A68h] [rbp+89E8h] BYREF
  __int64 v186; // [rsp+8A70h] [rbp+89F0h]
  char v187; // [rsp+8A78h] [rbp+89F8h]
  _OWORD v188[6]; // [rsp+8A80h] [rbp+8A00h] BYREF
  _QWORD v189[17]; // [rsp+8AE0h] [rbp+8A60h] BYREF
  char v190; // [rsp+8B6Ch] [rbp+8AECh]
  __m256i v191; // [rsp+B530h] [rbp+B4B0h] BYREF
  __int128 v192; // [rsp+B550h] [rbp+B4D0h]
  __int128 v193; // [rsp+B560h] [rbp+B4E0h]
  __int128 v194; // [rsp+B570h] [rbp+B4F0h]
  __int128 v195; // [rsp+B580h] [rbp+B500h]
  __int128 v196; // [rsp+B590h] [rbp+B510h]
  volatile signed __int64 *v197; // [rsp+B5B8h] [rbp+B538h]
  volatile signed __int64 *v198; // [rsp+B5C0h] [rbp+B540h]
  volatile signed __int64 *v199; // [rsp+B5C8h] [rbp+B548h]
  __int64 v200; // [rsp+B5D0h] [rbp+B550h]
  char v201; // [rsp+B748h] [rbp+B6C8h]
  __int128 v202; // [rsp+B750h] [rbp+B6D0h]
  __int128 v203; // [rsp+B760h] [rbp+B6E0h]
  __int128 v204; // [rsp+B770h] [rbp+B6F0h]
  __int128 v205; // [rsp+B780h] [rbp+B700h]
  __int64 v206; // [rsp+B790h] [rbp+B710h]
  void *v207; // [rsp+B7A0h] [rbp+B720h] BYREF
  __int128 v208; // [rsp+B7A8h] [rbp+B728h]
  void **v209; // [rsp+B7B8h] [rbp+B738h]
  __int128 v210; // [rsp+B7C0h] [rbp+B740h]
  void **v211; // [rsp+B7D0h] [rbp+B750h]
  __int128 v212; // [rsp+B7E0h] [rbp+B760h] BYREF
  __int64 v213; // [rsp+B7F0h] [rbp+B770h]
  __int128 v214; // [rsp+B870h] [rbp+B7F0h]
  __int64 v215; // [rsp+B880h] [rbp+B800h]
  _QWORD v216[4]; // [rsp+B888h] [rbp+B808h] BYREF
  volatile signed __int64 *v217; // [rsp+B8A8h] [rbp+B828h] BYREF
  volatile signed __int64 *v218[2]; // [rsp+B8B0h] [rbp+B830h] BYREF
  __int128 v219; // [rsp+B8C0h] [rbp+B840h] BYREF
  __int64 v220; // [rsp+B8D0h] [rbp+B850h]
  __int64 v221; // [rsp+B8D8h] [rbp+B858h] BYREF
  __int64 v222; // [rsp+B8E0h] [rbp+B860h]
  void *v223; // [rsp+B8E8h] [rbp+B868h]
  __int64 v224; // [rsp+B8F0h] [rbp+B870h]
  PVOID v225; // [rsp+B8F8h] [rbp+B878h]
  _BYTE v226[2]; // [rsp+B902h] [rbp+B882h] BYREF
  char v227; // [rsp+B904h] [rbp+B884h]
  char v228; // [rsp+B905h] [rbp+B885h] BYREF
  char v229; // [rsp+B906h] [rbp+B886h]
  char v230; // [rsp+B907h] [rbp+B887h]
  __int64 v231; // [rsp+B908h] [rbp+B888h]

  v231 = -2;
  sub_141684120(v130, a2, 11584);
  v229 = 1;
  sub_1412EB530(&v217, a1);
  if ( *(_DWORD *)a1 != 1 )
  {
    sub_141684120(&v133, a2, 11584);
    *(_QWORD *)&v131 = a1 + 48;
    *((_QWORD *)&v131 + 1) = a1 + 8;
    v132 = &v133;
    sub_140616160(a1 + 48, 0, &v131, a3);
    sub_1407D7380(&v133);
    goto LABEL_278;
  }
  sub_141684120(v129, a2, 11584);
  v230 = 1;
  v6 = sub_1412F09C0();
  v7 = *(unsigned __int8 *)(v6 + 72);
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
      goto LABEL_4;
    v230 = 1;
    sub_14148BBF0(v6, sub_140B82FF0);
    *(_BYTE *)(v6 + 72) = 1;
  }
  if ( *(_BYTE *)(v6 + 70) != 2 )
    goto LABEL_288;
  *(_BYTE *)(v6 + 70) = 1;
  v8 = 720;
  if ( *(_BYTE *)(a1 + 48) )
    v8 = 512;
  v9 = *(_QWORD *)(a1 + 56) + v8;
  v230 = 1;
  v10 = sub_141302F30(v9);
  v12 = v11;
  if ( (*(_BYTE *)(v6 + 56) & 1) != 0 )
  {
    v13 = *(_DWORD *)(v6 + 60);
    v14 = *(_DWORD *)(v6 + 64);
  }
  else
  {
    v230 = 1;
    v13 = sub_1412FEBA0();
    v14 = v15;
  }
  *(_DWORD *)(v6 + 56) = 1;
  *(_DWORD *)(v6 + 60) = v10;
  *(_DWORD *)(v6 + 64) = v12;
  v230 = 1;
  sub_1412F6360(&v133, v6, a1 + 48);
  *(_QWORD *)&v135 = __PAIR64__(v14, v13);
  v131 = v134;
  v132 = (void **)__PAIR64__(v14, v13);
  if ( v133 == (void *)-2LL )
  {
LABEL_4:
    v230 = 1;
    sub_1416C2100(&off_141792398);
  }
  v211 = v132;
  v210 = v131;
  if ( v133 == (void *)-1LL )
  {
LABEL_288:
    v230 = 1;
    sub_1416C32C0(&unk_141766AF5, 387, &off_141764458);
  }
  v207 = v133;
  v208 = v210;
  v209 = v211;
  sub_141684120(&v131, a2, 11584);
  v227 = 1;
  v16 = sub_1412F90E0(&v228);
  if ( !v16 )
  {
    sub_1405D9EE0(&v131);
    sub_1416C3060(
      (unsigned int)aFailedToParkTh,
      21,
      (unsigned int)&v228,
      (unsigned int)&unk_141769398,
      (__int64)&off_141766E98);
  }
  v221 = v16;
  v222 = v17;
  v216[0] = &v221;
  v216[1] = &v221;
  v216[2] = 0;
  sub_141684120(&v133, &v131, 11584);
  while ( 2 )
  {
    v18 = (_BYTE *)sub_1412F09C0();
    v22 = (unsigned __int8)v18[72];
    if ( v22 != 1 )
    {
      if ( v22 == 2 )
        goto LABEL_21;
      v23 = v18;
      sub_14148BBF0(v18, sub_140B82FF0);
      v18 = v23;
      v23[72] = 1;
    }
    LOBYTE(v22) = v18[68];
    v19 = (unsigned __int8)v18[69];
    *((_WORD *)v18 + 34) = -32767;
LABEL_21:
    v226[0] = v22;
    v226[1] = v19;
    switch ( v170 )
    {
      case 0:
        v173 = 0;
        v174 = 1;
        v225 = v133;
        v24 = *((_QWORD *)&v134 + 1);
        v224 = v134;
        sub_14149C500(&v212, v137);
        sub_14149C500(&v191, v138);
        v174 = 0;
        v143 = v225;
        v144 = v224;
        v145 = v24;
        v147 = v213;
        v146 = v212;
        v149 = v191.m256i_i64[2];
        v148 = *(_OWORD *)v191.m256i_i8;
        v151 = v136;
        v150 = v135;
        v152 = 16000;
        v189[15] = &v143;
        v190 = 0;
        goto LABEL_23;
      case 1:
        sub_1416C3400(&off_141767868, v19, v20, v21);
      case 2:
        sub_1416C3420(&off_141767868, v19, v20, v21);
      case 3:
LABEL_23:
        hbb4b340bd79fba8f(&v191, &v175, v216);
        v25 = v191.m256i_i64[0];
        if ( v191.m256i_i64[0] == -2 )
        {
          v26 = 1;
          v170 = 3;
          if ( v226[0] == 2 )
            goto LABEL_227;
LABEL_226:
          sub_1412F1BF0(v226);
          goto LABEL_227;
        }
        v215 = v191.m256i_i64[3];
        v214 = *(_OWORD *)&v191.m256i_u64[1];
        v202 = v192;
        v203 = v193;
        v204 = v194;
        v205 = v195;
        v206 = v196;
        sub_1405DAF60(&v175);
        if ( v25 == -1 )
        {
          v220 = v215;
          v219 = v214;
          v40 = v140;
          v41 = *v139;
          v42 = *v141;
          *(_QWORD *)&v212 = &v219;
          *((_QWORD *)&v212 + 1) = sub_1400015F0;
          sub_14149C0F0(&v191, &unk_141767898, &v212);
          v212 = *(_OWORD *)v191.m256i_i8;
          v213 = v191.m256i_i64[2];
          sub_140885540(v40, v41, 1, v42, (__int64)&v212);
          if ( (_QWORD)v219 )
            sub_140001660(*((_QWORD *)&v219 + 1), v219, 1);
          goto LABEL_217;
        }
        v153 = v25;
        v155 = v215;
        v154 = v214;
        v160 = v206;
        v159 = v205;
        v158 = v204;
        v157 = v203;
        v156 = v202;
        v161 = (volatile signed __int64 *)sub_140AD0A60(&v153);
        LOBYTE(v173) = 1;
        v28 = sub_1400640A0(v140);
        v163 = v28;
        v29 = (char *)(v28 + 32);
        LOBYTE(v30) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v28 + 32), 1, 0) )
          sub_1416C15B0(v29);
        if ( 2 * *off_141EC90B8 )
        {
          v31 = sub_1416C2250(v30, v27) ^ 1;
          v32 = *(unsigned __int8 *)(v28 + 33);
          if ( !(_BYTE)v32 )
            goto LABEL_59;
LABEL_31:
          if ( !v31 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v32, v27) )
            *(_BYTE *)(v28 + 33) = 1;
          v33 = *v29;
          *v29 = 0;
          if ( v33 == 2 )
            WakeByAddressSingle(v29);
          *(_QWORD *)&v175 = &v153;
          v184 = 0;
LABEL_36:
          sub_14061FAB0(&v191, &v175, v216);
          v34 = v191.m256i_i64[0];
          if ( v191.m256i_i64[0] == -2 )
          {
            v26 = 1;
            v170 = 4;
            if ( v226[0] == 2 )
              goto LABEL_227;
            goto LABEL_226;
          }
          v35 = v191.m256i_i64[1];
          if ( v184 != 3 )
          {
LABEL_56:
            if ( v34 > 0 )
              sub_140001660(v35, v34, 1);
            goto LABEL_213;
          }
          if ( BYTE8(v178) != 5 )
          {
            if ( BYTE8(v178) == 4 )
            {
              sub_1405E6D10(&v179);
            }
            else
            {
              if ( BYTE8(v178) != 3 )
                goto LABEL_56;
              v36 = v179;
              if ( (_QWORD)v179 == -1 )
                goto LABEL_55;
              v37 = v179 ^ 0x8000000000000000uLL;
              if ( (__int64)v179 >= 0 )
                v37 = 5;
              v38 = v37 == 4;
              if ( v37 < 4 )
              {
                v39 = 520;
                v36 = *((_QWORD *)&v179 + 1);
                goto LABEL_53;
              }
              v39 = 512;
              if ( !v38 || (v36 = *((_QWORD *)&v179 + 1), v39 = 520, *((_QWORD *)&v179 + 1) <= 0xFFFFFFFFFFFFFFFDuLL) )
              {
LABEL_53:
                if ( v36 )
                  sub_140001660(*(_QWORD *)((char *)&v134 + v39), v36, 1);
              }
            }
          }
LABEL_55:
          sub_1400104F0((char *)v177 + 8);
          goto LABEL_56;
        }
        v31 = 0;
        v32 = *(unsigned __int8 *)(v28 + 33);
        if ( (_BYTE)v32 )
          goto LABEL_31;
LABEL_59:
        Address = (PVOID)(v28 + 32);
        LOBYTE(v186) = v31;
        if ( *(_QWORD *)(v28 + 832) != *v141
          || qword_141EC9338 != *v141
          || !*v139
          || (v43 = Address, *((_QWORD *)Address + 101) != *v139)
          || *((_BYTE *)Address + 835) != 1 )
        {
          *(_QWORD *)&v175 = &v153;
          v184 = 0;
LABEL_82:
          sub_14061FAB0(&v191, &v175, v216);
          v61 = v191.m256i_i64[0];
          if ( v191.m256i_i64[0] == -2 )
          {
            v26 = 1;
            v170 = 5;
            if ( v226[0] == 2 )
              goto LABEL_227;
            goto LABEL_226;
          }
          v62 = v191.m256i_i64[1];
          if ( v184 != 3 )
            goto LABEL_100;
          switch ( BYTE8(v178) )
          {
            case 5u:
              break;
            case 4u:
              sub_1405E6D10(&v179);
              break;
            case 3u:
              v63 = v179;
              if ( (_QWORD)v179 != -1 )
              {
                v64 = v179 ^ 0x8000000000000000uLL;
                if ( (__int64)v179 >= 0 )
                  v64 = 5;
                v65 = v64 == 4;
                if ( v64 < 4 )
                {
                  v66 = 520;
                  v63 = *((_QWORD *)&v179 + 1);
                  goto LABEL_97;
                }
                v66 = 512;
                if ( !v65 || (v63 = *((_QWORD *)&v179 + 1), v66 = 520, *((_QWORD *)&v179 + 1) <= 0xFFFFFFFFFFFFFFFDuLL) )
                {
LABEL_97:
                  if ( v63 )
                    sub_140001660(*(_QWORD *)((char *)&v134 + v66), v63, 1);
                }
              }
              break;
            default:
LABEL_100:
              if ( v61 > 0 )
                sub_140001660(v62, v61, 1);
              v67 = (char *)Address;
              if ( !(_BYTE)v186 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v60, v59) )
                v67[1] = 1;
              v68 = *v67;
              *v67 = 0;
              if ( v68 == 2 )
                WakeByAddressSingle(v67);
              goto LABEL_213;
          }
          sub_1400104F0((char *)v177 + 8);
          goto LABEL_100;
        }
        v44 = _InterlockedIncrement64(&qword_141EC9338);
        v45 = Address;
        *((_QWORD *)Address + 100) = v44;
        v45[835] = 2;
        v46 = *((_QWORD *)v45 + 80);
        v47 = v45;
        if ( v46 != -1 )
        {
          v47 = v45;
          if ( v46 )
          {
            sub_140001660(*((_QWORD *)v45 + 81), v46, 1);
            v47 = Address;
          }
        }
        *((_QWORD *)v45 + 80) = -1;
        v48 = v47[77];
        if ( v48 != -1 && v48 )
          sub_140001660(v47[78], v48, 1);
        v47[77] = -1;
        v162 = v44;
        v49 = (char *)Address;
        if ( !(_BYTE)v186 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v43, v48) )
          v49[1] = 1;
        v50 = *v49;
        *v49 = 0;
        if ( v50 == 2 )
          WakeByAddressSingle(v49);
        v52 = sub_1400640A0(v140);
        v225 = (PVOID)(v52 + 32);
        LOBYTE(v53) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v52 + 32), 1, 0) )
          sub_1416C15B0((volatile void *)(v52 + 32));
        if ( !(2 * *off_141EC90B8) )
        {
          v54 = (_BYTE *)(v52 + 33);
          if ( *(_BYTE *)(v52 + 33) )
          {
LABEL_78:
            if ( 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v53, v51) )
              *v54 = 1;
            goto LABEL_79;
          }
          v57 = *(_BYTE *)(v52 + 861);
          LOWORD(v224) = *(_WORD *)(v52 + 856);
          v223 = *(void **)(v52 + 720);
          v58 = *(_DWORD *)(v52 + 728);
          goto LABEL_107;
        }
        v126 = sub_1416C2250(v53, v51);
        v54 = (_BYTE *)(v52 + 33);
        v53 = (void *)*(unsigned __int8 *)(v52 + 33);
        if ( !(_BYTE)v53 )
        {
          v57 = *(_BYTE *)(v52 + 861);
          LOWORD(v224) = *(_WORD *)(v52 + 856);
          v53 = *(void **)(v52 + 720);
          v223 = v53;
          v58 = *(_DWORD *)(v52 + 728);
          if ( !v126 )
          {
LABEL_108:
            v69 = v225;
            v70 = *(_BYTE *)v225;
            *(_BYTE *)v225 = 0;
            if ( v70 == 2 )
              WakeByAddressSingle(v69);
            v55 = v223;
            goto LABEL_111;
          }
LABEL_107:
          if ( 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v53, v51) )
            *v54 = 1;
          goto LABEL_108;
        }
        if ( v126 )
          goto LABEL_78;
LABEL_79:
        v55 = v225;
        v56 = *(_BYTE *)v225;
        *(_BYTE *)v225 = 0;
        LOWORD(v224) = -1;
        v57 = 2;
        v58 = -1;
        if ( v56 == 2 )
          WakeByAddressSingle(v55);
LABEL_111:
        v171 = v57;
        v169 = v224;
        v164 = v55;
        v165 = v58;
        show_voice_overlay(v140);
        LOBYTE(v71) = 1;
        sub_14025D570(v140, v71);
        sub_140662590(v171);
        if ( v169 <= 0x64u && v165 != -1 )
        {
          v72 = sub_140656A30(&v171);
          if ( !v72 )
            goto LABEL_119;
          sub_1412F1530(
            &v191,
            (0x4189374BC6A7F0LL * (unsigned __int128)(unsigned __int64)v72) >> 64,
            1000000
          * ((unsigned int)v72
           - 1000 * (unsigned int)((0x4189374BC6A7F0LL * (unsigned __int128)(unsigned __int64)v72) >> 64)),
            &off_141767880);
          v179 = v196;
          v178 = v195;
          v177[1] = v194;
          v177[0] = v193;
          v176[1] = v192;
          v176[0] = *(_OWORD *)&v191.m256i_u64[2];
          v175 = *(_OWORD *)v191.m256i_i8;
LABEL_115:
          if ( (unsigned __int8)sub_1412F1D10(&v175, v216) )
          {
            v26 = 1;
            v170 = 6;
            if ( v226[0] == 2 )
              goto LABEL_227;
            goto LABEL_226;
          }
          sub_1405E6D10(&v175);
          if ( v169 <= 0x64u )
LABEL_119:
            sub_1401B8C50();
        }
        sub_140873770(&v191, v140);
        if ( v191.m256i_i64[0] != -1 && v191.m256i_i64[0] )
          sub_140001660(v191.m256i_i64[1], v191.m256i_i64[0], 1);
        *(_QWORD *)&v219 = sub_1407DC880(64, &off_1417678B0);
        v166 = v73;
        HIBYTE(v173) = 0;
        sub_1408858D0(v188, v219);
        if ( LODWORD(v188[0]) == -1 )
        {
          *(_QWORD *)&v176[0] = *((_QWORD *)&v188[1] + 1);
          v175 = *(_OWORD *)((char *)v188 + 8);
          v89 = v140;
          v90 = *v139;
          v91 = v162;
          *(_QWORD *)&v212 = &v175;
          *((_QWORD *)&v212 + 1) = sub_1400015F0;
          sub_14149C0F0(&v191, &unk_1417678E0, &v212);
          v212 = *(_OWORD *)v191.m256i_i8;
          v213 = v191.m256i_i64[2];
          sub_140885540(v89, v90, 1, v91, (__int64)&v212);
          *((_QWORD *)&v176[0] + 1) = &v153;
          v187 = 0;
LABEL_151:
          sub_14061FAB0(&v191, (char *)v176 + 8, v216);
          v92 = v191.m256i_i64[0];
          if ( v191.m256i_i64[0] == -2 )
          {
            v26 = 1;
            v170 = 7;
            if ( v226[0] == 2 )
              goto LABEL_227;
            goto LABEL_226;
          }
          v93 = v191.m256i_i64[1];
          if ( v187 == 3 )
          {
            switch ( v180 )
            {
              case 5:
                goto LABEL_184;
              case 4:
                sub_1405E6D10(&v181);
                goto LABEL_184;
              case 3:
                v94 = v181;
                if ( v181 != -1 )
                {
                  v95 = v181 ^ 0x8000000000000000uLL;
                  if ( v181 >= 0 )
                    v95 = 5;
                  v96 = v95 == 4;
                  if ( v95 >= 4 )
                  {
                    v97 = 536;
                    if ( !v96 )
                      goto LABEL_182;
                    v94 = v182[0];
                    v97 = 544;
                    if ( v182[0] <= 0xFFFFFFFFFFFFFFFDuLL )
                      goto LABEL_182;
                  }
                  else
                  {
                    v97 = 544;
                    v94 = v182[0];
LABEL_182:
                    if ( v94 )
                      sub_140001660(*(_QWORD *)((char *)&v134 + v97), v94, 1);
                  }
                }
LABEL_184:
                sub_1400104F0(&v178);
                break;
            }
          }
          if ( v92 > 0 )
            sub_140001660(v93, v92, 1);
          if ( (_QWORD)v175 )
            sub_140001660(*((_QWORD *)&v175 + 1), v175, 1);
LABEL_210:
          sub_140892E70(&v166);
          if ( !_InterlockedDecrement64(v166) )
            sub_1405742E0((__int64 *)&v166);
          HIBYTE(v173) = 0;
LABEL_213:
          if ( (_BYTE)v173 )
          {
            sub_140893210(&v161);
            if ( !_InterlockedDecrement64(v161) )
              sub_140574470(&v161);
          }
          LOBYTE(v173) = 0;
          sub_1405E7D00(&v153);
          goto LABEL_217;
        }
        v167[2] = v188[2];
        v167[1] = v188[1];
        v167[0] = v188[0];
        v74 = v140;
        sub_1401C50B0(&v212, v140);
        v76 = *(volatile signed __int64 **)(v74 + 136);
        v77 = _InterlockedIncrement64(v76);
        if ( (v77 < 0) ^ v75 | (v77 == 0)
          || (v78 = *(volatile signed __int64 **)(v74 + 144),
              v79 = _InterlockedIncrement64(v78),
              (v79 < 0) ^ v75 | (v79 == 0)) )
        {
LABEL_290:
          BUG();
        }
        sub_141684120(&v191, &v212, 136);
        LOBYTE(v173) = 0;
        v197 = v76;
        v198 = v78;
        v199 = v161;
        v200 = *v139;
        v201 = 0;
        v168 = sub_14054DDD0(&v191, &off_1417678C8);
        v172 = 0;
        *(_QWORD *)&v175 = v142;
        BYTE8(v175) = 0;
        v182[0] = &v166;
        v182[1] = &v153;
        v183 = 0;
        v189[0] = &v172;
        v189[1] = &v175;
LABEL_127:
        v80 = sub_14088E070(v189, v216);
        if ( v80 == -1 )
        {
          v26 = 1;
          v170 = 8;
          if ( v226[0] == 2 )
            goto LABEL_227;
          goto LABEL_226;
        }
        if ( BYTE8(v175) == 4 )
          sub_1405E6D10(v176);
        sub_1405D9070(v182);
        v81 = 7;
        v82 = &unk_1417678FA;
        if ( v80 )
        {
          if ( v80 != 1 )
            sub_1416C32C0("all branches are disabled and there is no else branch", 107, &off_141767988);
          v81 = 12;
          v82 = &unk_141767901;
        }
        Address = v82;
        v186 = v81;
        if ( *(_QWORD *)off_141EC8D80 >= 3u )
        {
          *(_QWORD *)&v212 = &Address;
          *((_QWORD *)&v212 + 1) = sub_14041F680;
          v191.m256i_i64[0] = 0;
          v191.m256i_i64[1] = (__int64)"codexmate_lib::core::voice::runtimeall branches are disabled and there is no else branch";
          *(_OWORD *)&v191.m256i_u64[2] = 0x23u;
          *(_QWORD *)&v192 = aSrcCoreVoiceRu_2;
          *((_QWORD *)&v192 + 1) = 29;
          *(_QWORD *)&v193 = 3;
          *((_QWORD *)&v193 + 1) = "codexmate_lib::core::voice::runtimeall branches are disabled and there is no else branch";
          *(_QWORD *)&v194 = 35;
          *((_QWORD *)&v194 + 1) = 0x106300000001LL;
          *(_QWORD *)&v195 = &unk_14176790D;
          *((_QWORD *)&v195 + 1) = &v212;
          sub_1412C36A0(&v228, &v191);
        }
        *(_QWORD *)&v175 = &v153;
        v184 = 0;
LABEL_136:
        sub_14061FAB0(&v191, &v175, v216);
        v83 = v191.m256i_i64[0];
        if ( v191.m256i_i64[0] == -2 )
        {
          v26 = 1;
          v170 = 9;
          if ( v226[0] == 2 )
            goto LABEL_227;
          goto LABEL_226;
        }
        v84 = v191.m256i_i64[1];
        if ( v184 == 3 )
        {
          if ( BYTE8(v178) != 5 )
          {
            if ( BYTE8(v178) == 4 )
            {
              sub_1405E6D10(&v179);
            }
            else
            {
              if ( BYTE8(v178) != 3 )
                goto LABEL_170;
              v85 = v179;
              if ( (_QWORD)v179 == -1 )
                goto LABEL_169;
              v86 = v179 ^ 0x8000000000000000uLL;
              if ( (__int64)v179 >= 0 )
                v86 = 5;
              v87 = v86 == 4;
              if ( v86 < 4 )
              {
                v88 = 520;
                v85 = *((_QWORD *)&v179 + 1);
                goto LABEL_167;
              }
              v88 = 512;
              if ( !v87 || (v85 = *((_QWORD *)&v179 + 1), v88 = 520, *((_QWORD *)&v179 + 1) <= 0xFFFFFFFFFFFFFFFDuLL) )
              {
LABEL_167:
                if ( v85 )
                  sub_140001660(*(_QWORD *)((char *)&v134 + v88), v85, 1);
              }
            }
          }
LABEL_169:
          sub_1400104F0((char *)v177 + 8);
        }
LABEL_170:
        if ( v83 > 0 )
          sub_140001660(v84, v83, 1);
        sub_1412E75E0(&v168);
        v99 = sub_1400640A0(v140);
        v225 = (PVOID)(v99 + 32);
        LOBYTE(v100) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v99 + 32), 1, 0) )
          sub_1416C15B0((volatile void *)(v99 + 32));
        if ( 2 * *off_141EC90B8 )
        {
          v101 = sub_1416C2250(v100, v98);
          LOBYTE(v101) = v101 ^ 1;
          v102 = *(unsigned __int8 *)(v99 + 33);
          if ( (_BYTE)v102 )
          {
LABEL_176:
            if ( !(_BYTE)v101 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v102, v98) )
              *(_BYTE *)(v99 + 33) = 1;
            v103 = *(_BYTE *)v225;
            *(_BYTE *)v225 = 0;
            if ( v103 != 2 )
              goto LABEL_204;
            goto LABEL_203;
          }
        }
        else
        {
          v101 = 0;
          v102 = *(unsigned __int8 *)(v99 + 33);
          if ( (_BYTE)v102 )
            goto LABEL_176;
        }
        v104 = *v139;
        if ( !*v139
          || *(_QWORD *)(v99 + 840) != v104
          || (v104 = *(unsigned __int8 *)(v99 + 867), LOBYTE(v104) = v104 - 1, (unsigned __int8)v104 >= 3u) )
        {
          if ( !(_BYTE)v101 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v104, v98) )
            *(_BYTE *)(v99 + 33) = 1;
          v110 = *(_BYTE *)v225;
          *(_BYTE *)v225 = 0;
          if ( v110 != 2 )
            goto LABEL_204;
LABEL_203:
          WakeByAddressSingle(v225);
LABEL_204:
          v111 = v168;
          if ( (unsigned __int8)sub_1412F2A80(v168) )
            sub_1412E7580(v111);
          sub_140F7E890(&v191, v167);
          if ( v191.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v191.m256i_i64[0] )
            sub_140001660(v191.m256i_i64[1], v191.m256i_i64[0], 1);
          sub_1405E6230(v167);
          goto LABEL_210;
        }
        v38 = *(_QWORD *)(v99 + 352) == 0;
        LODWORD(v224) = v101;
        if ( v38 && *(_QWORD *)(v99 + 328) )
        {
          sub_14149C500(&v191, v99 + 312);
          v105 = *(_QWORD *)(v99 + 336);
          if ( v105 )
            sub_140001660(*(_QWORD *)(v99 + 344), v105, 1);
          *(_QWORD *)(v99 + 352) = v191.m256i_i64[2];
          *(_OWORD *)(v99 + 336) = *(_OWORD *)v191.m256i_i8;
        }
        v106 = *(unsigned int *)(v99 + 728);
        if ( (_DWORD)v106 == -1 )
        {
          v109 = 0;
        }
        else
        {
          v191.m256i_i64[0] = *(_QWORD *)(v99 + 720);
          v191.m256i_i32[2] = v106;
          v107 = sub_141471AC0(&v191);
          v106 = 1000 * v107 + v108 / 0xF4240uLL;
          v109 = 1;
        }
        *(_QWORD *)(v99 + 40) = v109;
        *(_QWORD *)(v99 + 48) = v106;
        *(_DWORD *)(v99 + 728) = -1;
        if ( *(_DWORD *)(v99 + 80) <= 0xFFFFFFFD )
        {
          v223 = (void *)(v99 + 80);
          sub_140264080((__int64 *)(v99 + 80));
        }
        *(_QWORD *)(v99 + 80) = -2;
        v112 = _InterlockedIncrement64(&qword_141EC9338);
        *(_QWORD *)(v99 + 832) = v112;
        sub_14033BC10(*(_QWORD *)(v99 + 344), *(_QWORD *)(v99 + 352));
        v115 = v113;
        if ( v113 )
        {
          *(_BYTE *)(v99 + 867) = 4;
          if ( !(_BYTE)v224 )
            goto LABEL_236;
        }
        else
        {
          *(_QWORD *)(v99 + 840) = 0;
          *(_BYTE *)(v99 + 867) = 0;
          if ( !(_BYTE)v224 )
          {
LABEL_236:
            if ( 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v114, v113) )
              *(_BYTE *)(v99 + 33) = 1;
          }
        }
        v116 = *(_BYTE *)v225;
        *(_BYTE *)v225 = 0;
        if ( v116 == 2 )
          WakeByAddressSingle(v225);
        sub_140AED970(v140);
        sub_14025D570(v140, 0);
        sub_140662590(v171);
        sub_1401B91A0(v118, v117);
        if ( v115 )
        {
          v119 = v140;
          sub_1401C50B0(&v212, v140);
          v121 = *(volatile signed __int64 **)(v119 + 136);
          v122 = _InterlockedIncrement64(v121);
          if ( (v122 < 0) ^ v120 | (v122 == 0) )
            goto LABEL_290;
          v123 = *(volatile signed __int64 **)(v119 + 144);
          v124 = _InterlockedIncrement64(v123);
          if ( (v124 < 0) ^ v120 | (v124 == 0) )
            goto LABEL_290;
          sub_141684120(&v191, &v212, 136);
          v197 = v121;
          v198 = v123;
          sub_140971D80(&v191, v112);
        }
        sub_140873770(&v191, v140);
        if ( v191.m256i_i64[0] != -1 && v191.m256i_i64[0] )
          sub_140001660(v191.m256i_i64[1], v191.m256i_i64[0], 1);
        v125 = v168;
        if ( (unsigned __int8)sub_1412F2A80(v168) )
          sub_1412E7580(v125);
        sub_140F7E890(&v191, v167);
        if ( v191.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v191.m256i_i64[0] )
          sub_140001660(v191.m256i_i64[1], v191.m256i_i64[0], 1);
        sub_1405E6230(v167);
        sub_140892E70(&v166);
        if ( !_InterlockedDecrement64(v166) )
          sub_1405742E0((__int64 *)&v166);
        v173 = 0;
        sub_1405E7D00(&v153);
LABEL_217:
        if ( v143 )
          sub_140001660(v144, v143, 1);
        if ( (_QWORD)v146 )
          sub_140001660(*((_QWORD *)&v146 + 1), v146, 1);
        if ( (_QWORD)v148 )
          sub_140001660(*((_QWORD *)&v148 + 1), v148, 1);
        if ( (_QWORD)v150 )
          sub_140001660(*((_QWORD *)&v150 + 1), v150, 1);
        v26 = 0;
        v170 = 1;
        if ( v226[0] != 2 )
          goto LABEL_226;
LABEL_227:
        if ( v26 )
        {
          sub_1412F9060(&v228);
          continue;
        }
        sub_1405D9EE0(&v133);
        v127 = *(void (__fastcall **)(__int64))(v221 + 24);
        v227 = 0;
        v127(v222);
        v230 = 0;
        sub_1405E80C0(&v207);
LABEL_278:
        sub_1412EC290(&v217);
        result = v217;
        if ( v217 != (volatile signed __int64 *)2 )
        {
          if ( v217 )
          {
            result = v218[0];
            if ( !_InterlockedDecrement64(v218[0]) )
            {
              v229 = 0;
              return (volatile signed __int64 *)sub_1412E9930(v218);
            }
          }
          else
          {
            result = v218[0];
            if ( !_InterlockedDecrement64(v218[0]) )
            {
              v229 = 0;
              return (volatile signed __int64 *)sub_1412E9570(v218);
            }
          }
        }
        return result;
      case 4:
        goto LABEL_36;
      case 5:
        goto LABEL_82;
      case 6:
        goto LABEL_115;
      case 7:
        goto LABEL_151;
      case 8:
        goto LABEL_127;
      case 9:
        goto LABEL_136;
    }
  }
}