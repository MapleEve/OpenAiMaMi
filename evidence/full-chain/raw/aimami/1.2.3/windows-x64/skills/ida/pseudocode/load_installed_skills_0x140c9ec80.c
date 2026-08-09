// module: codexmate_lib (tauri command handler, src/lib.rs command-name xref)
// win 1.2.3 IDB (AiMaMi.1.2.3 win64.exe) live py_eval/decompile this session
// tauri command handler = load_installed_skills | mapped via command-name string xref (win-native, ground-truth)
// NOTE: newly captured this session; not previously in raw/; not yet dirtree-moved.
// addr: 0x140c9ec80
// name: load_installed_skills
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = load_installed_skills | mapped via command-name string xref (win-native, ground-truth)
char __fastcall load_installed_skills(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // r15
  _BYTE *v11; // r14
  volatile void *v12; // rbx
  __int64 *v13; // rbx
  char *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // r13
  __int128 v18; // rdi
  int v19; // r12d
  int v20; // r15d
  __int64 v21; // r14
  PVOID v22; // rcx
  char v23; // al
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r14
  __int64 v26; // rbx
  char v27; // r14
  int v28; // r13d
  unsigned int v29; // ebx
  __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  PVOID v36; // rcx
  char v37; // al
  __int64 v38; // r14
  char *v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rax
  unsigned __int8 v45; // bl
  __int64 v46; // r13
  char v47; // al
  _QWORD *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  const char *v54; // rdi
  __int64 v55; // r14
  char v56; // bl
  __int64 v57; // r15
  _BYTE *v58; // r14
  char v59; // cl
  char result; // al
  __int64 v61; // rsi
  __int64 v62; // r8
  int v63; // ebx
  __int64 v64; // r14
  int v65; // edi
  __int64 v66; // r14
  int v67; // edx
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // r13
  __int64 v72; // rbx
  __int64 v73; // rax
  PVOID v74; // rdx
  __int64 *v75; // rcx
  __int64 *v76; // r13
  volatile void *v77; // rdi
  char *v78; // rcx
  __int64 *v79; // r15
  char *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  int v83; // r12d
  __int64 v84; // r14
  PVOID v85; // rcx
  char v86; // al
  __int64 v87; // rsi
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int128 v93; // xmm6
  PVOID v94; // rcx
  char v95; // al
  __int64 v96; // r8
  int v97; // eax
  _QWORD *v98; // rdi
  int v99; // eax
  __int128 v100; // [rsp+30h] [rbp-50h] BYREF
  __int128 v101; // [rsp+40h] [rbp-40h]
  __int128 v102; // [rsp+50h] [rbp-30h]
  __int128 v103; // [rsp+60h] [rbp-20h]
  __int64 v104; // [rsp+70h] [rbp-10h]
  __int128 v105; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v106[24]; // [rsp+90h] [rbp+10h]
  __m256i v107; // [rsp+A8h] [rbp+28h]
  __int128 v108; // [rsp+C8h] [rbp+48h]
  __int128 v109; // [rsp+D8h] [rbp+58h]
  __int128 v110; // [rsp+E8h] [rbp+68h]
  __int128 v111; // [rsp+F8h] [rbp+78h]
  __int64 v112; // [rsp+108h] [rbp+88h]
  __m256i v113; // [rsp+110h] [rbp+90h]
  __int128 v114; // [rsp+130h] [rbp+B0h]
  __int128 v115; // [rsp+140h] [rbp+C0h]
  __int128 v116; // [rsp+150h] [rbp+D0h]
  __int128 v117; // [rsp+160h] [rbp+E0h]
  __int64 v118; // [rsp+170h] [rbp+F0h]
  __int64 v119; // [rsp+178h] [rbp+F8h] BYREF
  char v120; // [rsp+180h] [rbp+100h]
  int v121; // [rsp+181h] [rbp+101h]
  __int16 v122; // [rsp+185h] [rbp+105h]
  char v123; // [rsp+187h] [rbp+107h]
  __int64 v124; // [rsp+188h] [rbp+108h]
  __int128 v125; // [rsp+190h] [rbp+110h]
  __m256i v126; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v127; // [rsp+1C0h] [rbp+140h]
  __int128 v128; // [rsp+1D0h] [rbp+150h]
  __int128 v129; // [rsp+1E0h] [rbp+160h]
  __int128 v130; // [rsp+1F0h] [rbp+170h]
  __int64 v131; // [rsp+200h] [rbp+180h]
  const char *v132; // [rsp+208h] [rbp+188h] BYREF
  __int64 v133; // [rsp+210h] [rbp+190h]
  __int64 v134; // [rsp+218h] [rbp+198h] BYREF
  _BYTE v135[48]; // [rsp+220h] [rbp+1A0h]
  __int128 v136; // [rsp+250h] [rbp+1D0h]
  __int128 v137; // [rsp+260h] [rbp+1E0h]
  __int128 v138; // [rsp+270h] [rbp+1F0h]
  __int128 v139; // [rsp+280h] [rbp+200h]
  __int64 v140; // [rsp+290h] [rbp+210h]
  __m256i v141; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v142; // [rsp+390h] [rbp+310h]
  __int128 v143; // [rsp+3A0h] [rbp+320h]
  __int128 v144; // [rsp+3B0h] [rbp+330h]
  __int128 v145; // [rsp+3C0h] [rbp+340h]
  __int64 v146; // [rsp+3D0h] [rbp+350h]
  __int128 v147; // [rsp+3E0h] [rbp+360h]
  __int64 v148; // [rsp+3F0h] [rbp+370h]
  __int64 v149; // [rsp+3F8h] [rbp+378h]
  __int128 v150; // [rsp+400h] [rbp+380h] BYREF
  __int128 v151; // [rsp+410h] [rbp+390h]
  __int128 v152; // [rsp+420h] [rbp+3A0h]
  __int128 v153; // [rsp+430h] [rbp+3B0h]
  __int128 v154; // [rsp+440h] [rbp+3C0h] BYREF
  __int128 v155; // [rsp+450h] [rbp+3D0h]
  __int128 v156; // [rsp+460h] [rbp+3E0h]
  __int128 v157; // [rsp+470h] [rbp+3F0h]
  _DWORD v158[2]; // [rsp+488h] [rbp+408h]
  _BYTE *v159; // [rsp+490h] [rbp+410h]
  __int64 *v160; // [rsp+498h] [rbp+418h]
  __int64 v161; // [rsp+4A0h] [rbp+420h]
  __int64 v162; // [rsp+4A8h] [rbp+428h]
  char *v163; // [rsp+4B0h] [rbp+430h]
  __int64 v164; // [rsp+4B8h] [rbp+438h]
  char v165; // [rsp+4C6h] [rbp+446h]
  char v166; // [rsp+4C7h] [rbp+447h]
  PVOID Address; // [rsp+4C8h] [rbp+448h]
  char v168; // [rsp+4D6h] [rbp+456h] BYREF
  char v169; // [rsp+4D7h] [rbp+457h]
  __int64 v170; // [rsp+4D8h] [rbp+458h]

  v170 = -2; /*0x140c9eca2*/
  v5 = a1; /*0x140c9ecb0*/
  v6 = *(unsigned __int8 *)(a1 + 7664); /*0x140c9ecb3*/
  v164 = a1; /*0x140c9ecc8*/
  switch ( v6 ) /*0x140c9eccf*/
  {
    case 0LL: /*0x140c9eccf*/
      *(_WORD *)(a1 + 7665) = 257; /*0x140c9ecd1*/
      *(_BYTE *)(a1 + 7667) = 1; /*0x140c9ecda*/
      v7 = a1 + 4024; /*0x140c9ece8*/
      sub_141684120(a1 + 4024, a1 + 392, 3632); /*0x140c9ecf8*/
      switch ( *(_BYTE *)(v5 + 7648) ) /*0x140c9ed12*/
      {
        case 0: /*0x140c9ed12*/
          goto LABEL_4;
        case 1: /*0x140c9ed12*/
          goto LABEL_142;
        case 2: /*0x140c9ed12*/
          goto LABEL_141;
        case 3: /*0x140c9ed12*/
          goto LABEL_6;
      }
    case 1LL: /*0x140c9eccf*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140ca02ac*/
    case 2LL: /*0x140c9eccf*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140ca029e*/
    case 3LL: /*0x140c9eccf*/
      v7 = a1 + 4024; /*0x140c9ed14*/
      switch ( *(_BYTE *)(a1 + 7648) ) /*0x140c9ed30*/
      {
        case 0: /*0x140c9ed30*/
LABEL_4:
          v132 = aLoadInstalledS; /*0x140c9ed32*/
          v133 = 21; /*0x140c9ed52*/
          v134 = (__int64)aRepo_0; /*0x140c9ed64*/
          *(_QWORD *)v135 = 4; /*0x140c9ed6b*/
          v162 = v7; /*0x140c9ed76*/
          *(_QWORD *)&v135[8] = v7; /*0x140c9ed7d*/
          *(_OWORD *)&v135[16] = (unsigned __int64)(v5 + 4544); /*0x140c9ed84*/
          v8 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4536) + 16LL)); /*0x140c9ed96*/
          if ( v8 ) /*0x140c9ed9f*/
            goto LABEL_5; /*0x140c9ed9f*/
          sub_1416850A0(&v105, &v132, &v134); /*0x140c9efd6*/
          v27 = v105; /*0x140c9efdc*/
          if ( (_BYTE)v105 == 0xFF ) /*0x140c9efe5*/
          {
            v8 = *((_QWORD *)&v105 + 1); /*0x140c9f185*/
LABEL_5:
            v5 = v164; /*0x140c9eda5*/
            v9 = v164 + 4568; /*0x140c9edac*/
            *(_QWORD *)(v164 + 4568) = v8; /*0x140c9edb3*/
            *(_BYTE *)(v5 + 5584) = 0; /*0x140c9edba*/
            v10 = (__int64 *)(v5 + 5592); /*0x140c9edc1*/
            sub_141684120(v5 + 5592, v9, 1024); /*0x140c9edd1*/
            v11 = (_BYTE *)(v5 + 7640); /*0x140c9edd6*/
            *(_BYTE *)(v5 + 7640) = 0; /*0x140c9eddd*/
            v7 = v162; /*0x140c9ede4*/
LABEL_7:
            sub_141684120(v5 + 6616, v10, 1024); /*0x140c9ee22*/
            switch ( *(_BYTE *)(v5 + 7632) ) /*0x140c9ee3c*/
            {
              case 0: /*0x140c9ee3c*/
                goto LABEL_9;
              case 1: /*0x140c9ee3c*/
                goto LABEL_144;
              case 2: /*0x140c9ee3c*/
                goto LABEL_143;
              case 3: /*0x140c9ee3c*/
                goto LABEL_20;
            }
          }
          v160 = (__int64 *)(v5 + 4544); /*0x140c9efeb*/
          v28 = BYTE7(v105); /*0x140c9eff2*/
          v29 = *(unsigned __int16 *)((char *)&v105 + 5); /*0x140c9eff7*/
          v30 = *(unsigned int *)((char *)&v105 + 1); /*0x140c9effb*/
          v31 = *((_QWORD *)&v105 + 1); /*0x140c9efff*/
          v18 = *(_OWORD *)v106; /*0x140c9f003*/
          sub_140BF0DE0(v162); /*0x140c9f012*/
          v24 = ((unsigned __int64)((v28 << 16) | v29) << 32) | v30; /*0x140c9f023*/
          if ( *v160 == -1 ) /*0x140c9f031*/
          {
            v45 = 1; /*0x140c9fb05*/
            v46 = v164; /*0x140c9fb07*/
            goto LABEL_104; /*0x140c9fb07*/
          }
          v163 = (char *)(v164 + 4552); /*0x140c9f045*/
          v32 = *(_QWORD *)(v164 + 4552); /*0x140c9f04c*/
          v159 = *(_BYTE **)(v164 + 4560); /*0x140c9f05a*/
          Address = nullptr; /*0x140c9f061*/
          v161 = v32; /*0x140c9f06c*/
          while ( v159 != Address ) /*0x140c9f08e*/
          {
            Address = (char *)Address + 1; /*0x140c9f097*/
            v33 = v32 + 96; /*0x140c9f09e*/
            sub_1402C7520(); /*0x140c9f0a2*/
            v32 = v33; /*0x140c9f0a8*/
          }
          v44 = *v160; /*0x140c9f16b*/
          v45 = 1; /*0x140c9f16e*/
          v46 = v164; /*0x140c9f173*/
          if ( !*v160 ) /*0x140c9f16b*/
            goto LABEL_104; /*0x140c9f17a*/
          goto LABEL_84; /*0x140c9f17a*/
        case 1: /*0x140c9ed30*/
LABEL_142:
          v162 = v7; /*0x140ca02cc*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140ca02da*/
        case 2: /*0x140c9ed30*/
LABEL_141:
          v162 = v7; /*0x140ca02b3*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140ca02c1*/
        case 3: /*0x140c9ed30*/
          goto LABEL_6;
      }
  }
LABEL_6:
  v11 = (_BYTE *)(v5 + 7640); /*0x140c9eded*/
  v10 = (__int64 *)(v5 + 5592); /*0x140c9edfb*/
  switch ( *(_BYTE *)(v5 + 7640) ) /*0x140c9ee10*/
  {
    case 0: /*0x140c9ee10*/
      goto LABEL_7;
    case 1: /*0x140c9ee10*/
      v162 = v7; /*0x140ca034a*/
      v149 = v5 + 5592; /*0x140ca0351*/
      sub_1416C3400(&off_1417B7B80, a2, a3, a4); /*0x140ca035f*/
    case 2: /*0x140c9ee10*/
      v162 = v7; /*0x140ca032d*/
      v149 = v5 + 5592; /*0x140ca0334*/
      sub_1416C3420(&off_1417B7B80, a2, a3, a4); /*0x140ca0342*/
    case 3: /*0x140c9ee10*/
      switch ( *(_BYTE *)(v5 + 7632) ) /*0x140c9ee53*/
      {
        case 0: /*0x140c9ee53*/
LABEL_9:
          v160 = v10; /*0x140c9ee55*/
          v159 = v11; /*0x140c9ee5c*/
          v162 = v7; /*0x140c9ee63*/
          v12 = *(volatile void **)(v5 + 6616); /*0x140c9ee6a*/
          *(_QWORD *)(v5 + 6624) = v12; /*0x140c9ee71*/
          LOBYTE(a1) = 1; /*0x140c9ee78*/
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v12, 1, 0) ) /*0x140c9ee7c*/
            sub_1416C15B0(v12); /*0x140ca0020*/
          Address = (PVOID)v12; /*0x140c9ee86*/
          v13 = off_141EC90B8; /*0x140c9ee8d*/
          if ( 2 * *off_141EC90B8 ) /*0x140c9ee97*/
          {
            v97 = sub_1416C2250(a1, a2); /*0x140ca002b*/
            LOBYTE(v97) = v97 ^ 1; /*0x140ca0031*/
            LODWORD(v161) = v97; /*0x140ca0033*/
            v14 = (char *)Address; /*0x140ca0039*/
            if ( !*((_BYTE *)Address + 1) ) /*0x140ca0040*/
              goto LABEL_27; /*0x140ca0046*/
          }
          else
          {
            LODWORD(v161) = 0; /*0x140c9eea3*/
            v14 = (char *)Address; /*0x140c9eead*/
            if ( !*((_BYTE *)Address + 1) ) /*0x140c9eeba*/
              goto LABEL_27; /*0x140c9eeba*/
          }
          *(_QWORD *)&v154 = 0; /*0x140c9eec0*/
          *((_QWORD *)&v154 + 1) = 1; /*0x140c9eecb*/
          *(_QWORD *)&v155 = 0; /*0x140c9eed6*/
          v134 = 1610612768; /*0x140c9eee1*/
          v132 = (const char *)&v154; /*0x140c9eef3*/
          v133 = (__int64)&off_1417C41C0; /*0x140c9ef01*/
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v132) ) /*0x140c9ef1b*/
            sub_1416C3060( /*0x140ca0077*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v168,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v163 = *((char **)&v154 + 1); /*0x140c9ef37*/
          v17 = (void *)v154; /*0x140c9ef37*/
          LODWORD(v18) = (unsigned __int8)v155; /*0x140c9ef3e*/
          v19 = BYTE7(v155); /*0x140c9ef45*/
          v20 = *(unsigned __int16 *)((char *)&v155 + 5); /*0x140c9ef4d*/
          v21 = *(unsigned int *)((char *)&v155 + 1); /*0x140c9ef55*/
          if ( !(_BYTE)v161 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v16, v15) ) /*0x140ca0098*/
            *((_BYTE *)Address + 1) = 1; /*0x140ca00ad*/
          v22 = Address; /*0x140c9ef76*/
          v23 = *(_BYTE *)Address; /*0x140c9ef7d*/
          *(_BYTE *)Address = 0; /*0x140c9ef7d*/
          if ( v23 == 2 ) /*0x140c9ef81*/
            WakeByAddressSingle(v22); /*0x140ca0082*/
          if ( v17 != (void *)-1LL ) /*0x140c9ef8b*/
          {
            v24 = (unsigned int)(v19 << 16); /*0x140c9ef91*/
            v25 = ((unsigned __int64)((unsigned int)v24 | v20) << 32) | v21; /*0x140c9ef9c*/
            v26 = v164; /*0x140c9ef9f*/
LABEL_70:
            Address = v17; /*0x140c9f6f4*/
            v146 = v131; /*0x140c9f702*/
            v145 = v130; /*0x140c9f710*/
            v144 = v129; /*0x140c9f71e*/
            v143 = v128; /*0x140c9f741*/
            v142 = v127; /*0x140c9f748*/
            v141 = v126; /*0x140c9f74f*/
            *(_BYTE *)(v26 + 7632) = 1; /*0x140c9f75d*/
            v113 = v141; /*0x140c9f780*/
            v114 = v142; /*0x140c9f78e*/
            v115 = v143; /*0x140c9f795*/
            v116 = v144; /*0x140c9f7a3*/
            v117 = v145; /*0x140c9f7b1*/
            v118 = v146; /*0x140c9f7bf*/
            goto LABEL_71; /*0x140c9f7bf*/
          }
          v14 = v163; /*0x140c9f0ad*/
          LODWORD(v161) = v18; /*0x140c9f0b6*/
LABEL_27:
          Address = v14; /*0x140c9f0bc*/
          sub_1407BC950(v164 + 6632, v14 + 8); /*0x140c9f0d5*/
          if ( (v161 & 1) == 0 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v35, v34) ) /*0x140ca00b6*/
            *((_BYTE *)Address + 1) = 1; /*0x140ca00cb*/
          v36 = Address; /*0x140c9f0f5*/
          v37 = *(_BYTE *)Address; /*0x140c9f0fc*/
          *(_BYTE *)Address = 0; /*0x140c9f0fc*/
          if ( v37 == 2 ) /*0x140c9f100*/
            WakeByAddressSingle(v36); /*0x140ca008d*/
          v38 = v164; /*0x140c9f106*/
          v39 = *(char **)(v164 + 6872); /*0x140c9f10d*/
          if ( (__int64)v39 < 0 ) /*0x140c9f117*/
          {
            v40 = 0; /*0x140c9f119*/
            goto LABEL_33; /*0x140c9f119*/
          }
          if ( v39 ) /*0x140c9f12c*/
          {
            v41 = *(_QWORD *)(v164 + 6864); /*0x140c9f12e*/
            nullsub_1(v36); /*0x140c9f135*/
            v40 = 1; /*0x140c9f13a*/
            v42 = sub_140001650(v39, 1); /*0x140c9f147*/
            if ( !v42 ) /*0x140c9f14f*/
LABEL_33:
              sub_1416C2D4B(v40, v39); /*0x140c9f11b*/
            v43 = v42; /*0x140c9f151*/
            sub_141684120(v42, v41, v39); /*0x140c9f15d*/
          }
          else
          {
            v43 = 1; /*0x140c9f18e*/
          }
          v47 = *(_BYTE *)(v38 + 6880); /*0x140c9f194*/
          v132 = v39; /*0x140c9f19c*/
          v163 = (char *)v43; /*0x140c9f1a3*/
          v133 = v43; /*0x140c9f1aa*/
          Address = v39; /*0x140c9f1b1*/
          v134 = (__int64)v39; /*0x140c9f1b8*/
          v135[0] = v47; /*0x140c9f1bf*/
          v48 = off_141EC8710; /*0x140c9f1c5*/
          if ( *((_DWORD *)off_141EC8710 + 24) ) /*0x140c9f1cc*/
          {
            v166 = 0; /*0x140ca00d4*/
            v98 = off_141EC8710; /*0x140ca00e2*/
            sub_1416984A3(off_141EC8710); /*0x140ca00e5*/
            v48 = v98; /*0x140ca00ea*/
          }
          if ( *((_DWORD *)v48 + 4) == 2 ) /*0x140c9f1db*/
          {
            v49 = 704; /*0x140c9f1e5*/
            if ( *(_BYTE *)v48 ) /*0x140c9f1dd*/
              v49 = 472; /*0x140c9f1ea*/
            v50 = v48[1] + v49; /*0x140c9f1ee*/
            v166 = 1; /*0x140c9f1f2*/
            v51 = sub_140899EC0(v50, v48, &v132, &off_1417642A8); /*0x140c9f207*/
          }
          else
          {
            v52 = 704; /*0x140c9f218*/
            if ( *((_BYTE *)v48 + 64) ) /*0x140c9f20f*/
              v52 = 472; /*0x140c9f21d*/
            v53 = v48[9] + v52; /*0x140c9f225*/
            v166 = 1; /*0x140c9f229*/
            v51 = sub_140899EC0(v53, v48 + 8, &v132, &off_141764290); /*0x140c9f241*/
          }
          v5 = v164; /*0x140c9f247*/
          *(_QWORD *)(v164 + 7624) = v51; /*0x140c9f24e*/
LABEL_51:
          Address = (PVOID)(v5 + 7624); /*0x140c9f255*/
          sub_140AFEE30(&v132, v5 + 7624, a2); /*0x140c9f26d*/
          v54 = v132; /*0x140c9f273*/
          if ( v132 == (const char *)-3LL ) /*0x140c9f27e*/
          {
            v58 = (_BYTE *)v164; /*0x140c9f2c1*/
            *(_BYTE *)(v164 + 7632) = 3; /*0x140c9f2c8*/
LABEL_55:
            v58[7640] = 3; /*0x140c9f2d0*/
            v58[7648] = 3; /*0x140c9f2d8*/
            v59 = 3; /*0x140c9f2e0*/
            result = 1; /*0x140c9f2e2*/
            goto LABEL_105; /*0x140c9f2e4*/
          }
          if ( (_DWORD)v132 == -2 ) /*0x140c9f283*/
          {
            v55 = v133; /*0x140c9f285*/
            v56 = v134; /*0x140c9f28c*/
            LODWORD(v150) = *(_DWORD *)((char *)&v134 + 1); /*0x140c9f299*/
            *(_DWORD *)((char *)&v150 + 3) = HIDWORD(v134); /*0x140c9f2a5*/
            v24 = 0x800000000000000CuLL; /*0x140c9f2ab*/
            v57 = *(_QWORD *)v135; /*0x140c9f2b5*/
          }
          else
          {
            v24 = v133; /*0x140c9f2e9*/
            v55 = v134; /*0x140c9f2f0*/
            v56 = v135[0]; /*0x140c9f2f7*/
            LODWORD(v150) = *(_DWORD *)&v135[1]; /*0x140c9f304*/
            *(_DWORD *)((char *)&v150 + 3) = *(_DWORD *)&v135[4]; /*0x140c9f310*/
            v57 = *(_QWORD *)&v135[8]; /*0x140c9f316*/
            v154 = *(_OWORD *)&v135[16]; /*0x140c9f324*/
            v155 = *(_OWORD *)&v135[32]; /*0x140c9f332*/
            v156 = v136; /*0x140c9f340*/
            *(_QWORD *)&v157 = v137; /*0x140c9f34e*/
          }
          v158[0] = v150; /*0x140c9f368*/
          *(_DWORD *)((char *)v158 + 3) = *(_DWORD *)((char *)&v150 + 3); /*0x140c9f36e*/
          v101 = v154; /*0x140c9f389*/
          v102 = v155; /*0x140c9f38d*/
          v103 = v156; /*0x140c9f391*/
          v104 = v157; /*0x140c9f39c*/
          v61 = *(_QWORD *)Address; /*0x140c9f3a0*/
          if ( (unsigned __int8)sub_1412F2A80(*(_QWORD *)Address) ) /*0x140c9f3a6*/
            sub_1412E7580(v61); /*0x140c9f3b3*/
          if ( (_DWORD)v54 != -1 ) /*0x140c9f3bc*/
          {
            if ( (_DWORD)v54 == -2 ) /*0x140c9f3c5*/
            {
              v132 = (const char *)v24; /*0x140c9f3cb*/
              v133 = v55; /*0x140c9f3d2*/
              LOBYTE(v134) = v56; /*0x140c9f3d9*/
              *(_DWORD *)((char *)&v134 + 1) = v158[0]; /*0x140c9f3eb*/
              HIDWORD(v134) = *(_DWORD *)((char *)v158 + 3); /*0x140c9f3f1*/
              *(_QWORD *)v135 = v57; /*0x140c9f3f7*/
              *(_OWORD *)&v135[8] = v101; /*0x140c9f402*/
              *(_QWORD *)&v150 = 0; /*0x140c9f409*/
              *((_QWORD *)&v150 + 1) = 1; /*0x140c9f414*/
              *(_QWORD *)&v151 = 0; /*0x140c9f41f*/
              *(_QWORD *)&v155 = 1610612768; /*0x140c9f42a*/
              *(_QWORD *)&v154 = &v150; /*0x140c9f43c*/
              *((_QWORD *)&v154 + 1) = &off_1417C41C0; /*0x140c9f44a*/
              if ( (unsigned __int8)sub_141230630(&v132, &v154, v62) ) /*0x140c9f45f*/
                sub_1416C3060( /*0x140ca0118*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v168,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v163 = *((char **)&v150 + 1); /*0x140c9f47b*/
              v17 = (void *)v150; /*0x140c9f47b*/
              LOBYTE(v18) = v151; /*0x140c9f482*/
              v63 = BYTE7(v151); /*0x140c9f489*/
              DWORD2(v18) = *(unsigned __int16 *)((char *)&v151 + 5); /*0x140c9f490*/
              v64 = *(unsigned int *)((char *)&v151 + 1); /*0x140c9f497*/
              sub_140BF0F60(&v132); /*0x140c9f4a5*/
            }
            else
            {
              v132 = v54; /*0x140c9f5cd*/
              v133 = v24; /*0x140c9f5d4*/
              v134 = v55; /*0x140c9f5db*/
              v135[0] = v56; /*0x140c9f5e2*/
              *(_DWORD *)&v135[1] = v158[0]; /*0x140c9f5f4*/
              *(_DWORD *)&v135[4] = *(_DWORD *)((char *)v158 + 3); /*0x140c9f5fa*/
              *(_QWORD *)&v135[8] = v57; /*0x140c9f600*/
              *(_OWORD *)&v135[16] = v101; /*0x140c9f613*/
              *(_OWORD *)&v135[32] = v102; /*0x140c9f61a*/
              v136 = v103; /*0x140c9f621*/
              *(_QWORD *)&v137 = v104; /*0x140c9f62c*/
              *(_QWORD *)&v150 = 0; /*0x140c9f633*/
              *((_QWORD *)&v150 + 1) = 1; /*0x140c9f63e*/
              *(_QWORD *)&v151 = 0; /*0x140c9f649*/
              *(_QWORD *)&v155 = 1610612768; /*0x140c9f654*/
              *(_QWORD *)&v154 = &v150; /*0x140c9f666*/
              *((_QWORD *)&v154 + 1) = &off_1417C41C0; /*0x140c9f674*/
              if ( (unsigned __int8)sub_140B036A0(&v132, &v154) ) /*0x140c9f689*/
                sub_1416C3060( /*0x140ca017a*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v168,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v163 = *((char **)&v150 + 1); /*0x140c9f6a5*/
              v17 = (void *)v150; /*0x140c9f6a5*/
              LOBYTE(v18) = v151; /*0x140c9f6ac*/
              v63 = BYTE7(v151); /*0x140c9f6b3*/
              DWORD2(v18) = *(unsigned __int16 *)((char *)&v151 + 5); /*0x140c9f6ba*/
              v64 = *(unsigned int *)((char *)&v151 + 1); /*0x140c9f6c1*/
              sub_140BF2F60(&v132); /*0x140c9f6cf*/
            }
            v25 = ((unsigned __int64)((unsigned int)(v63 << 16) | DWORD2(v18)) << 32) | v64; /*0x140c9f6de*/
            v26 = v164; /*0x140c9f6e1*/
LABEL_69:
            sub_140016620(v26 + 6632); /*0x140c9f6e8*/
            goto LABEL_70; /*0x140c9f6ef*/
          }
          HIDWORD(v148) = *(_DWORD *)((char *)v158 + 3); /*0x140c9f4bc*/
          *(_DWORD *)((char *)&v148 + 1) = v158[0]; /*0x140c9f4c2*/
          *(_QWORD *)&v147 = v24; /*0x140c9f4c8*/
          *((_QWORD *)&v147 + 1) = v55; /*0x140c9f4cf*/
          LOBYTE(v148) = v56; /*0x140c9f4d6*/
          v65 = v148; /*0x140c9f4dc*/
          v100 = *(_OWORD *)(v164 + 6864); /*0x140c9f4f0*/
          *(_QWORD *)&v154 = 0; /*0x140c9f4f4*/
          *((_QWORD *)&v154 + 1) = 1; /*0x140c9f4ff*/
          *(_QWORD *)&v155 = 0; /*0x140c9f50a*/
          v134 = 1610612768; /*0x140c9f515*/
          v132 = (const char *)&v154; /*0x140c9f527*/
          v133 = (__int64)&off_1417C41C0; /*0x140c9f535*/
          if ( (unsigned __int8)sub_14148F3A0(&v100, &v132, v62) ) /*0x140c9f547*/
            sub_1416C3060( /*0x140ca0149*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v168,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v163 = *((char **)&v154 + 1); /*0x140c9f56a*/
          Address = (PVOID)v154; /*0x140c9f56a*/
          v66 = v155; /*0x140c9f571*/
          LODWORD(v154) = sub_141475580(); /*0x140c9f57e*/
          DWORD1(v154) = v67; /*0x140c9f584*/
          sub_141475530(&v132, &v154, 3577643008LL, 27111902); /*0x140c9f5a7*/
          v68 = v164; /*0x140c9f5b4*/
          if ( (_BYTE)v132 ) /*0x140c9f5bb*/
            v69 = 0; /*0x140c9f93c*/
          else
            v69 = v133; /*0x140c9f5c1*/
          v150 = v147; /*0x140c9f945*/
          *(_QWORD *)&v151 = v148; /*0x140c9f953*/
          DWORD2(v153) = v65; /*0x140c9f95a*/
          *((_QWORD *)&v151 + 1) = Address; /*0x140c9f967*/
          v78 = v163; /*0x140c9f96e*/
          *(_QWORD *)&v152 = v163; /*0x140c9f975*/
          *((_QWORD *)&v152 + 1) = v66; /*0x140c9f97c*/
          *(_QWORD *)&v153 = v69; /*0x140c9f983*/
          v77 = *(volatile void **)(v164 + 6624); /*0x140c9f98a*/
          LOBYTE(v78) = 1; /*0x140c9f991*/
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v77, 1, 0) ) /*0x140c9f995*/
          {
            v169 = 1; /*0x140ca0185*/
            sub_1416C15B0(v77); /*0x140ca018f*/
          }
          Address = (PVOID)v77; /*0x140c9f99f*/
          v79 = off_141EC90B8; /*0x140c9f9a6*/
          if ( 2 * *off_141EC90B8 ) /*0x140c9f9b0*/
          {
            v169 = 1; /*0x140ca019a*/
            v99 = sub_1416C2250(v78, v68); /*0x140ca01a1*/
            LOBYTE(v99) = v99 ^ 1; /*0x140ca01a7*/
            LODWORD(v161) = v99; /*0x140ca01a9*/
            v80 = (char *)Address; /*0x140ca01af*/
            if ( !*((_BYTE *)Address + 1) ) /*0x140ca01b6*/
              goto LABEL_107; /*0x140ca01bc*/
          }
          else
          {
            LODWORD(v161) = 0; /*0x140c9f9bc*/
            v80 = (char *)Address; /*0x140c9f9c6*/
            if ( !*((_BYTE *)Address + 1) ) /*0x140c9f9d3*/
              goto LABEL_107; /*0x140c9f9d3*/
          }
          *(_QWORD *)&v154 = 0; /*0x140c9f9d9*/
          *((_QWORD *)&v154 + 1) = 1; /*0x140c9f9e4*/
          *(_QWORD *)&v155 = 0; /*0x140c9f9ef*/
          v134 = 1610612768; /*0x140c9f9fa*/
          v132 = (const char *)&v154; /*0x140c9fa05*/
          v133 = (__int64)&off_1417C41C0; /*0x140c9fa0c*/
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v132) ) /*0x140c9fa26*/
            sub_1416C3060( /*0x140ca01ed*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v168,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v163 = *((char **)&v154 + 1); /*0x140c9fa42*/
          v17 = (void *)v154; /*0x140c9fa42*/
          LODWORD(v18) = (unsigned __int8)v155; /*0x140c9fa49*/
          v83 = BYTE7(v155); /*0x140c9fa50*/
          DWORD2(v18) = *(unsigned __int16 *)((char *)&v155 + 5); /*0x140c9fa58*/
          v84 = *(unsigned int *)((char *)&v155 + 1); /*0x140c9fa5f*/
          if ( !(_BYTE)v161 ) /*0x140c9fa6d*/
          {
            if ( 2 * *v79 ) /*0x140c9fa72*/
            {
              v169 = 1; /*0x140ca021c*/
              if ( !(unsigned __int8)sub_1416C2250(v82, v81) ) /*0x140ca0223*/
                *((_BYTE *)Address + 1) = 1; /*0x140ca0238*/
            }
          }
          v85 = Address; /*0x140c9fa80*/
          v86 = *(_BYTE *)Address; /*0x140c9fa87*/
          *(_BYTE *)Address = 0; /*0x140c9fa87*/
          if ( v86 == 2 ) /*0x140c9fa8b*/
          {
            v169 = 1; /*0x140ca01f8*/
            WakeByAddressSingle(v85); /*0x140ca01ff*/
          }
          if ( v17 != (void *)-1LL ) /*0x140c9fa95*/
          {
            sub_140334E90(&v150); /*0x140c9faa2*/
            v24 = (unsigned int)(v83 << 16); /*0x140c9faa8*/
            v87 = (unsigned int)v24 | DWORD2(v18); /*0x140c9faac*/
            if ( (_QWORD)v150 ) /*0x140c9fab9*/
              sub_140001660(*((_QWORD *)&v150 + 1), 184 * v150, 8); /*0x140c9facf*/
            v88 = v87 << 32; /*0x140c9fad4*/
            v26 = v164; /*0x140c9fae2*/
            if ( *((_QWORD *)&v151 + 1) ) /*0x140c9fae9*/
              sub_140001660(v152, *((_QWORD *)&v151 + 1), 1); /*0x140c9faf8*/
            v25 = v88 | v84; /*0x140c9fafd*/
            goto LABEL_69; /*0x140c9fb00*/
          }
          v80 = v163; /*0x140c9fc0e*/
          LODWORD(v161) = v18; /*0x140c9fc17*/
LABEL_107:
          Address = v80; /*0x140c9fc1d*/
          v165 = 1; /*0x140c9fc28*/
          sub_1403A8CF0(&v132, v80 + 8, &v150); /*0x140c9fc3d*/
          if ( (_DWORD)v132 != -1 ) /*0x140c9fc4a*/
          {
            v165 = 1; /*0x140c9fc4c*/
            sub_140BF2F60(&v132); /*0x140c9fc5a*/
          }
          v157 = v153; /*0x140c9fc7c*/
          v156 = v152; /*0x140c9fc83*/
          v155 = v151; /*0x140c9fc8a*/
          v154 = v150; /*0x140c9fc91*/
          v165 = 0; /*0x140c9fc98*/
          sub_140ACA140(&v132, &v154); /*0x140c9fcad*/
          *((_QWORD *)&v18 + 1) = v132; /*0x140c9fcb3*/
          v24 = v133; /*0x140c9fcba*/
          v163 = (char *)v134; /*0x140c9fcc8*/
          v93 = *(_OWORD *)v135; /*0x140c9fccf*/
          *(_QWORD *)&v18 = *(_QWORD *)v135; /*0x140c9fcd6*/
          v126 = *(__m256i *)&v135[16]; /*0x140c9fce4*/
          v127 = v136; /*0x140c9fd00*/
          v128 = v137; /*0x140c9fd0e*/
          v129 = v138; /*0x140c9fd1c*/
          v130 = v139; /*0x140c9fd2a*/
          v131 = v140; /*0x140c9fd38*/
          if ( (v161 & 1) == 0 ) /*0x140c9fd46*/
          {
            if ( 2 * *v79 ) /*0x140c9fd4b*/
            {
              v169 = 0; /*0x140ca0241*/
              if ( !(unsigned __int8)sub_1416C2250(v92, v91) ) /*0x140ca0248*/
                *((_BYTE *)Address + 1) = 1; /*0x140ca025d*/
            }
          }
          v94 = Address; /*0x140c9fd59*/
          v95 = *(_BYTE *)Address; /*0x140c9fd60*/
          *(_BYTE *)Address = 0; /*0x140c9fd60*/
          if ( v95 == 2 ) /*0x140c9fd64*/
          {
            v169 = 0; /*0x140ca020a*/
            WakeByAddressSingle(v94); /*0x140ca0211*/
          }
          v58 = (_BYTE *)v164; /*0x140c9fd6a*/
          sub_140016620(v164 + 6632); /*0x140c9fd78*/
          v146 = v131; /*0x140c9fd84*/
          v145 = v130; /*0x140c9fd92*/
          v144 = v129; /*0x140c9fda0*/
          v143 = v128; /*0x140c9fdc3*/
          v142 = v127; /*0x140c9fdca*/
          v141 = v126; /*0x140c9fdd1*/
          v58[7632] = 1; /*0x140c9fddf*/
          if ( *((_QWORD *)&v18 + 1) == -2 ) /*0x140c9fdeb*/
            goto LABEL_55; /*0x140c9fdeb*/
          v118 = v146; /*0x140c9fdf8*/
          v117 = v145; /*0x140c9fe06*/
          v116 = v144; /*0x140c9fe14*/
          v115 = v143; /*0x140c9fe37*/
          v114 = v142; /*0x140c9fe3e*/
          v113 = v141; /*0x140c9fe45*/
          if ( *((_QWORD *)&v18 + 1) != -1 ) /*0x140c9fe57*/
          {
            v112 = v118; /*0x140c9fe64*/
            v111 = v117; /*0x140c9fe72*/
            v110 = v116; /*0x140c9fe7d*/
            v109 = v115; /*0x140c9fe9d*/
            v108 = v114; /*0x140c9fea1*/
            v107 = v113; /*0x140c9fea5*/
            *(_QWORD *)&v105 = *((_QWORD *)&v18 + 1); /*0x140c9fead*/
            *((_QWORD *)&v105 + 1) = v24; /*0x140c9feb1*/
            *(_QWORD *)v106 = v163; /*0x140c9febc*/
            *(_OWORD *)&v106[8] = v93; /*0x140c9fec0*/
            sub_140B052F0(&v132, &v105); /*0x140c9fece*/
            v24 = ((unsigned __int64)((HIBYTE(v133) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v133 + 5)) << 32) /*0x140c9fef9*/
                | *(unsigned int *)((char *)&v133 + 1);
            v27 = v133; /*0x140c9fefc*/
            v31 = v134; /*0x140c9ff04*/
            v18 = *(_OWORD *)v135; /*0x140c9ff0b*/
            if ( v132 == (const char *)-1LL ) /*0x140c9ff1d*/
            {
              v45 = 0; /*0x140ca000f*/
            }
            else
            {
              HIBYTE(v133) = (((unsigned __int64)((HIBYTE(v133) << 16) /*0x140c9ff31*/
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v133 + 5)) << 32)
                            | *(unsigned int *)((char *)&v133 + 1)) >> 48;
              *(_WORD *)((char *)&v133 + 5) = WORD2(v24); /*0x140c9ff3e*/
              *(_DWORD *)((char *)&v133 + 1) = v24; /*0x140c9ff45*/
              v141.m256i_i64[0] = 0; /*0x140c9ff76*/
              *(_OWORD *)&v141.m256i_u64[1] = 1u; /*0x140c9ff81*/
              v126.m256i_i64[2] = 1610612768; /*0x140c9ff97*/
              v126.m256i_i64[0] = (__int64)&v141; /*0x140c9ffa9*/
              v126.m256i_i64[1] = (__int64)&off_1417C41C0; /*0x140c9ffb0*/
              if ( (unsigned __int8)sub_141230630(&v132, &v126, v96) ) /*0x140c9ffc5*/
                sub_1416C3060( /*0x140ca028c*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v168,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v18 = *(_OWORD *)&v141.m256i_u64[1]; /*0x140c9ffda*/
              v31 = v141.m256i_i64[0]; /*0x140c9ffda*/
              sub_140BF0F60(&v132); /*0x140c9ffef*/
              v45 = 1; /*0x140c9fff5*/
              v27 = 3; /*0x140c9fff7*/
            }
            v71 = v162; /*0x140ca0011*/
            goto LABEL_79; /*0x140ca0018*/
          }
          Address = (PVOID)v24; /*0x140c9fffc*/
          v25 = (unsigned __int64)v18 >> 8; /*0x140ca0006*/
LABEL_71:
          v70 = v25 << 8; /*0x140c9f7c6*/
          *((_QWORD *)&v18 + 1) = v70 | (unsigned __int8)v18; /*0x140c9f7ce*/
          v71 = v162; /*0x140c9f7d4*/
          if ( v70 < 0 ) /*0x140c9f7db*/
          {
            v72 = 0; /*0x140c9f7dd*/
            goto LABEL_73; /*0x140c9f7dd*/
          }
          if ( *((_QWORD *)&v18 + 1) ) /*0x140c9f7f3*/
          {
            nullsub_1(v22); /*0x140c9f7f9*/
            v72 = 1; /*0x140c9f7fe*/
            v73 = sub_140001650(v70 | (unsigned __int8)v18, 1); /*0x140c9f80b*/
            if ( !v73 ) /*0x140c9f813*/
LABEL_73:
              sub_1416C2D4B(v72, v70 | (unsigned __int8)v18); /*0x140c9f7df*/
            *(_QWORD *)&v18 = v73; /*0x140c9f815*/
            sub_141684120(v73, v163, *((_QWORD *)&v18 + 1)); /*0x140c9f825*/
            v74 = Address; /*0x140c9f82a*/
            if ( !Address ) /*0x140c9f834*/
              goto LABEL_78; /*0x140c9f834*/
          }
          else
          {
            *(_QWORD *)&v18 = 1; /*0x140c9f922*/
            v74 = Address; /*0x140c9f927*/
            if ( !Address ) /*0x140c9f931*/
              goto LABEL_78; /*0x140c9f931*/
          }
          sub_140001660(v163, v74, 1); /*0x140c9f843*/
LABEL_78:
          v45 = 1; /*0x140c9f848*/
          v27 = 3; /*0x140c9f84a*/
          v31 = *((_QWORD *)&v18 + 1); /*0x140c9f84d*/
LABEL_79:
          *v159 = 1; /*0x140c9f850*/
          v162 = v71; /*0x140c9f85a*/
          sub_140BF0DE0(v71); /*0x140c9f864*/
          v46 = v164; /*0x140c9f86a*/
          if ( *(_QWORD *)(v164 + 4544) != -1 ) /*0x140c9f879*/
          {
            v163 = (char *)(v164 + 4552); /*0x140c9f886*/
            v75 = *(__int64 **)(v164 + 4552); /*0x140c9f88d*/
            v159 = *(_BYTE **)(v164 + 4560); /*0x140c9f89b*/
            Address = nullptr; /*0x140c9f8a2*/
            v160 = v75; /*0x140c9f8ad*/
            while ( v159 != Address ) /*0x140c9f8ce*/
            {
              Address = (char *)Address + 1; /*0x140c9f8d3*/
              v76 = v75 + 12; /*0x140c9f8da*/
              sub_1402C7520(); /*0x140c9f8de*/
              v75 = v76; /*0x140c9f8e4*/
            }
            v46 = v164; /*0x140c9f8e9*/
            v44 = *(_QWORD *)(v164 + 4544); /*0x140c9f8f0*/
            if ( v44 ) /*0x140c9f8fa*/
LABEL_84:
              sub_140001660(*(_QWORD *)v163, 96 * v44, 8); /*0x140c9f900*/
          }
LABEL_104:
          *(_BYTE *)(v46 + 7648) = 1; /*0x140c9fb0e*/
          sub_140BE0EC0(v162); /*0x140c9fb1d*/
          v121 = v24; /*0x140c9fb23*/
          v123 = BYTE6(v24); /*0x140c9fb31*/
          v122 = WORD2(v24); /*0x140c9fb3b*/
          v125 = v18; /*0x140c9fb43*/
          v120 = v27; /*0x140c9fb54*/
          v124 = v31; /*0x140c9fb5b*/
          v119 = v45; /*0x140c9fb62*/
          v89 = v164; /*0x140c9fb69*/
          *(_BYTE *)(v164 + 7667) = 0; /*0x140c9fb70*/
          sub_141684120(&v132, v89, 360); /*0x140c9fb8a*/
          *(_BYTE *)(v89 + 7666) = 0; /*0x140c9fb8f*/
          v90 = *(_QWORD *)(v89 + 384); /*0x140c9fb96*/
          *(_BYTE *)(v89 + 7665) = 0; /*0x140c9fb9d*/
          *(_QWORD *)v106 = *(_QWORD *)(v89 + 376); /*0x140c9fbab*/
          v105 = *(_OWORD *)(v89 + 360); /*0x140c9fbb6*/
          sub_14047E370( /*0x140c9fbdb*/
            (unsigned int)&v132,
            v90,
            (unsigned int)&v119,
            (unsigned int)&v105,
            *(_DWORD *)(v89 + 7656),
            *(_DWORD *)(v89 + 7660));
          v59 = 1; /*0x140c9fbe1*/
          result = 0; /*0x140c9fbe3*/
          v58 = (_BYTE *)v164; /*0x140c9fbe5*/
LABEL_105:
          v58[7664] = v59; /*0x140c9fbec*/
          return result;
        case 1: /*0x140c9ee53*/
LABEL_144:
          v160 = v10; /*0x140ca0309*/
          v159 = v11; /*0x140ca0310*/
          JUMPOUT(0x140CA0317LL); /*0x140ca0317*/
        case 2: /*0x140c9ee53*/
LABEL_143:
          v160 = v10; /*0x140ca02e5*/
          v159 = v11; /*0x140ca02ec*/
          v162 = v7; /*0x140ca02f3*/
          sub_1416C3420(&off_1417BB138, a2, a3, a4); /*0x140ca0301*/
        case 3: /*0x140c9ee53*/
LABEL_20:
          v160 = v10; /*0x140c9efab*/
          v159 = v11; /*0x140c9efb2*/
          v162 = v7; /*0x140c9efb9*/
          goto LABEL_51; /*0x140c9efc0*/
      }
  }
}

// --- refs (first 60) ---
//   ref: 0x141684120 sub_141684120 
//   ref: 0x1416c3400 sub_1416C3400 
//   ref: 0x1417b7c00 off_1417B7C00 
//   ref: 0x1416c3420 sub_1416C3420 
//   ref: 0x1417b991a aLoadInstalledS load_installed_skills
//   ref: 0x1417b9798 aRepo_0 repo
//   ref: 0x140003640 sub_140003640 
//   ref: 0x1416850a0 sub_1416850A0 
//   ref: 0x140bf0de0 sub_140BF0DE0 
//   ref: 0x1402c7520 sub_1402C7520 
//   ref: 0x1417b9768 off_1417B9768 
//   ref: 0x1417b7b80 off_1417B7B80 
//   ref: 0x1416c15b0 sub_1416C15B0 
//   ref: 0x141ec90b8 off_141EC90B8 
//   ref: 0x1416c2250 sub_1416C2250 
//   ref: 0x1417c41c0 off_1417C41C0 
//   ref: 0x1416c3060 sub_1416C3060 
//   ref: 0x1417c41f0 aADisplayImplem_11 a Display implementation returned an error unexpectedly
//   ref: 0x1417bc180 unk_1417BC180 
//   ref: 0x1417c4278 off_1417C4278 
//   ref: 0x1414acab0 sub_1414ACAB0 
//   ref: 0x141753898 aPoisonedLockAn poisoned lock: another task failed inside
//   ref: 0x1416c1670 WakeByAddressSingle 
//   ref: 0x1407bc950 sub_1407BC950 
//   ref: 0x140001690 nullsub_1 
//   ref: 0x140001650 sub_140001650 
//   ref: 0x1416c2d4b sub_1416C2D4B 
//   ref: 0x141ec8710 off_141EC8710 
//   ref: 0x1416984a3 sub_1416984A3 
//   ref: 0x140899ec0 sub_140899EC0 
//   ref: 0x1417642a8 off_1417642A8 
//   ref: 0x141764290 off_141764290 
//   ref: 0x140afee30 sub_140AFEE30 
//   ref: 0x1412e7580 sub_1412E7580 
//   ref: 0x1412f2a80 sub_1412F2A80 
//   ref: 0x141230630 sub_141230630 
//   ref: 0x140bf0f60 sub_140BF0F60 
//   ref: 0x140b036a0 sub_140B036A0 
//   ref: 0x140bf2f60 sub_140BF2F60 
//   ref: 0x140016620 sub_140016620 
//   ref: 0x14148f3a0 sub_14148F3A0 
//   ref: 0x141475580 sub_141475580 
//   ref: 0x141475530 sub_141475530 
//   ref: 0x140334e90 sub_140334E90 
//   ref: 0x140001660 sub_140001660 
//   ref: 0x1403a8cf0 sub_1403A8CF0 
//   ref: 0x140aca140 sub_140ACA140 
//   ref: 0x140b052f0 sub_140B052F0 
//   ref: 0x140be0ec0 sub_140BE0EC0 
//   ref: 0x14047e370 sub_14047E370 
//   ref: 0x1417bb138 off_1417BB138 
