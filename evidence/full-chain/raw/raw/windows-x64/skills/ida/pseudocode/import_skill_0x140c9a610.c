// module: codexmate_lib (tauri command handler, src/lib.rs command-name xref)
// win 1.2.3 IDB (AiMaMi.1.2.3 win64.exe) live IDA Python/decompile this session
// tauri command handler = import_skill | mapped via command-name string xref (win-native, ground-truth)
// NOTE: this function was NOT previously in raw/aimami/1.2.3/windows-x64/skills/ -- discovered live via dirtree+comment scan gap-check during windows-1.2.3-skills distillation pass. Not yet dirtree-moved into a module folder (was floating unfiled in the live IDB at time of read).
// addr: 0x140c9a610
// name: import_skill
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = import_skill | mapped via command-name string xref (win-native, ground-truth)
char __fastcall import_skill(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rdi
  char v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  volatile void *v17; // rdi
  __int64 v18; // rbx
  __int64 *v19; // r15
  char *v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // r14
  int v24; // r13d
  unsigned int v25; // r12d
  __int64 v26; // rdi
  PVOID v27; // rcx
  char v28; // al
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  unsigned __int8 v40; // bl
  __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rcx
  PVOID v44; // rcx
  char v45; // al
  __int64 v46; // rax
  __int128 v47; // xmm0
  __int128 v48; // xmm0
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdi
  char v56; // bl
  unsigned __int64 v57; // r15
  __int64 v58; // r13
  char v59; // cl
  char result; // al
  __int64 v61; // r13
  __int64 v62; // rsi
  __int64 v63; // r8
  int v64; // ebx
  unsigned int v65; // esi
  __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // r15
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rbx
  __int64 v100; // r8
  int v101; // ebx
  unsigned int v102; // esi
  __int64 v103; // rdi
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rax
  _QWORD *v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rbx
  char *v137; // rcx
  char *v138; // r13
  __int64 v139; // rdi
  __int64 v140; // rdx
  int v141; // eax
  _QWORD *v142; // rdi
  char v143; // al
  _BYTE v144[384]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v145[48]; // [rsp+1B8h] [rbp+138h] BYREF
  _OWORD v146[19]; // [rsp+338h] [rbp+2B8h] BYREF
  _QWORD v147[3]; // [rsp+468h] [rbp+3E8h] BYREF
  char v148; // [rsp+480h] [rbp+400h]
  _BYTE v149[7]; // [rsp+481h] [rbp+401h]
  unsigned __int64 v150; // [rsp+488h] [rbp+408h]
  char v151[304]; // [rsp+490h] [rbp+410h] BYREF
  __int64 v152; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v153; // [rsp+5C8h] [rbp+548h]
  __int64 v154; // [rsp+5D0h] [rbp+550h]
  _BYTE v155[24]; // [rsp+740h] [rbp+6C0h] BYREF
  __int64 v156; // [rsp+758h] [rbp+6D8h]
  unsigned __int64 v157; // [rsp+760h] [rbp+6E0h]
  char v158[384]; // [rsp+768h] [rbp+6E8h] BYREF
  _QWORD *v159; // [rsp+8E8h] [rbp+868h] BYREF
  __int64 v160; // [rsp+8F0h] [rbp+870h]
  __int64 v161; // [rsp+8F8h] [rbp+878h]
  __int64 v162; // [rsp+A18h] [rbp+998h] BYREF
  char v163; // [rsp+A20h] [rbp+9A0h]
  int v164; // [rsp+A21h] [rbp+9A1h]
  __int16 v165; // [rsp+A25h] [rbp+9A5h]
  char v166; // [rsp+A27h] [rbp+9A7h]
  __int64 v167; // [rsp+A28h] [rbp+9A8h]
  __int64 v168; // [rsp+A30h] [rbp+9B0h]
  __int64 v169; // [rsp+A38h] [rbp+9B8h]
  __int128 v170; // [rsp+A40h] [rbp+9C0h] BYREF
  __int128 v171; // [rsp+A50h] [rbp+9D0h] BYREF
  __int128 v172; // [rsp+A60h] [rbp+9E0h] BYREF
  __int128 v173; // [rsp+A70h] [rbp+9F0h]
  __int128 v174; // [rsp+A80h] [rbp+A00h]
  __int128 v175; // [rsp+A90h] [rbp+A10h]
  __int64 v176; // [rsp+BE8h] [rbp+B68h]
  __int64 v177; // [rsp+BF0h] [rbp+B70h]
  __int64 v178; // [rsp+BF8h] [rbp+B78h]
  __int64 v179; // [rsp+C00h] [rbp+B80h]
  _QWORD *v180; // [rsp+C08h] [rbp+B88h]
  _DWORD v181[2]; // [rsp+C10h] [rbp+B90h]
  _QWORD *v182; // [rsp+C18h] [rbp+B98h] BYREF
  __int64 v183; // [rsp+C20h] [rbp+BA0h]
  __int64 v184; // [rsp+C28h] [rbp+BA8h]
  __int64 v185; // [rsp+C30h] [rbp+BB0h]
  __int64 v186; // [rsp+C38h] [rbp+BB8h]
  char *v187; // [rsp+C40h] [rbp+BC0h]
  __int64 v188; // [rsp+C48h] [rbp+BC8h]
  __int64 v189; // [rsp+C50h] [rbp+BD0h]
  __int64 v190; // [rsp+C58h] [rbp+BD8h]
  _QWORD *v191; // [rsp+C60h] [rbp+BE0h]
  PVOID Address; // [rsp+C68h] [rbp+BE8h]
  __int64 v193; // [rsp+C70h] [rbp+BF0h]
  __int64 v194; // [rsp+C78h] [rbp+BF8h]
  __int64 v195; // [rsp+C80h] [rbp+C00h]
  char v196; // [rsp+C8Eh] [rbp+C0Eh]
  char v197; // [rsp+C8Fh] [rbp+C0Fh] BYREF
  __int64 v198; // [rsp+C90h] [rbp+C10h]

  v198 = -2; /*0x140c9a62b*/
  v5 = a1; /*0x140c9a639*/
  v6 = *(unsigned __int8 *)(a1 + 7808); /*0x140c9a63c*/
  v194 = a1; /*0x140c9a651*/
  switch ( v6 ) /*0x140c9a658*/
  {
    case 0LL: /*0x140c9a658*/
      *(_WORD *)(a1 + 7809) = 257; /*0x140c9a65a*/
      *(_BYTE *)(a1 + 7811) = 1; /*0x140c9a664*/
      v7 = a1 + 4096; /*0x140c9a673*/
      sub_141684120(a1 + 4096, a1 + 392, 3704); /*0x140c9a683*/
      switch ( *(_BYTE *)(v5 + 7792) ) /*0x140c9a69e*/
      {
        case 0: /*0x140c9a69e*/
          goto LABEL_4;
        case 1: /*0x140c9a69e*/
          goto LABEL_219;
        case 2: /*0x140c9a69e*/
          goto LABEL_218;
        case 3: /*0x140c9a69e*/
          goto LABEL_7;
      }
    case 1LL: /*0x140c9a658*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140c9bf65*/
    case 2LL: /*0x140c9a658*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140c9bf57*/
    case 3LL: /*0x140c9a658*/
      v7 = a1 + 4096; /*0x140c9a6a0*/
      switch ( *(_BYTE *)(a1 + 7792) ) /*0x140c9a6bd*/
      {
        case 0: /*0x140c9a6bd*/
LABEL_4:
          v8 = v5 + 4616; /*0x140c9a6bf*/
          *(_QWORD *)&v173 = 0; /*0x140c9a6c6*/
          *(_QWORD *)&v170 = aImportSkill; /*0x140c9a6d8*/
          *((_QWORD *)&v170 + 1) = 12; /*0x140c9a6df*/
          *(_QWORD *)&v171 = aRepo_0; /*0x140c9a6f1*/
          *((_QWORD *)&v171 + 1) = 4; /*0x140c9a6f8*/
          v190 = v7; /*0x140c9a703*/
          *(_QWORD *)&v172 = v7; /*0x140c9a70a*/
          *((_QWORD *)&v172 + 1) = v5 + 4616; /*0x140c9a711*/
          v9 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4608) + 16LL)); /*0x140c9a729*/
          Address = (PVOID)(v5 + 4616); /*0x140c9a72f*/
          if ( v9 ) /*0x140c9a736*/
            goto LABEL_5; /*0x140c9a736*/
          sub_1416850A0(v155, &v170, &v171); /*0x140c9aa55*/
          v10 = v155[0]; /*0x140c9aa5b*/
          if ( v155[0] == 0xFF ) /*0x140c9aa67*/
          {
            v9 = *(_QWORD *)&v155[8]; /*0x140c9bcdc*/
LABEL_5:
            *(_QWORD *)&v173 = 0; /*0x140c9a73c*/
            *(_QWORD *)&v170 = aImportSkill; /*0x140c9a74e*/
            *((_QWORD *)&v170 + 1) = 12; /*0x140c9a755*/
            *(_QWORD *)&v171 = aPath_10; /*0x140c9a767*/
            *((_QWORD *)&v171 + 1) = 4; /*0x140c9a76e*/
            *(_QWORD *)&v172 = v190; /*0x140c9a779*/
            *((_QWORD *)&v172 + 1) = v8; /*0x140c9a780*/
            sub_1409757B0(v155, &v170); /*0x140c9a795*/
            v10 = v155[0]; /*0x140c9a79b*/
            if ( v155[0] == 0xFF ) /*0x140c9a7a7*/
            {
              v11 = v156; /*0x140c9a7ad*/
              v5 = v194; /*0x140c9a7b4*/
              v12 = v194 + 4640; /*0x140c9a7bb*/
              v13 = *(_OWORD *)&v155[8]; /*0x140c9a7c2*/
              *(_QWORD *)(v194 + 4664) = v9; /*0x140c9a7c9*/
              *(_OWORD *)(v5 + 4640) = v13; /*0x140c9a7d0*/
              *(_QWORD *)(v5 + 4656) = v11; /*0x140c9a7d8*/
              *(_BYTE *)(v5 + 5680) = 0; /*0x140c9a7df*/
              v14 = v5 + 5688; /*0x140c9a7e7*/
              sub_141684120(v5 + 5688, v12, 1048); /*0x140c9a7f7*/
              v180 = (_QWORD *)(v5 + 7784); /*0x140c9a803*/
              *(_BYTE *)(v5 + 7784) = 0; /*0x140c9a80a*/
              v7 = v190; /*0x140c9a812*/
LABEL_8:
              v190 = v7; /*0x140c9a848*/
              v179 = v5 + 6736; /*0x140c9a85c*/
              v176 = v14; /*0x140c9a863*/
              sub_141684120(v5 + 6736, v14, 1048); /*0x140c9a86d*/
              switch ( *(_BYTE *)(v5 + 7776) ) /*0x140c9a888*/
              {
                case 0: /*0x140c9a888*/
                  goto LABEL_10;
                case 1: /*0x140c9a888*/
                  goto LABEL_221;
                case 2: /*0x140c9a888*/
                  goto LABEL_220;
                case 3: /*0x140c9a888*/
                  goto LABEL_44;
              }
            }
          }
          v29 = ((unsigned __int64)((v155[7] << 16) | (unsigned int)*(unsigned __int16 *)&v155[5]) << 32) /*0x140c9aa8b*/
              | *(unsigned int *)&v155[1];
          v34 = *(_QWORD *)&v155[8]; /*0x140c9aa8e*/
          v35 = *(_QWORD *)&v155[16]; /*0x140c9aa95*/
          v36 = v156; /*0x140c9aa9c*/
          sub_140BF0DE0(v190); /*0x140c9aaaa*/
          if ( *(_QWORD *)Address == -1 ) /*0x140c9aabb*/
          {
            v40 = 1; /*0x140c9ab4a*/
            v41 = v194; /*0x140c9ab4c*/
            goto LABEL_201; /*0x140c9ab53*/
          }
          v180 = (_QWORD *)(v194 + 4624); /*0x140c9aacf*/
          v37 = *(_QWORD *)(v194 + 4624); /*0x140c9aad6*/
          v193 = *(_QWORD *)(v194 + 4632); /*0x140c9aae4*/
          v195 = 0; /*0x140c9aaeb*/
          v179 = v37; /*0x140c9aaf6*/
          while ( v193 != v195 ) /*0x140c9ab0e*/
          {
            ++v195; /*0x140c9ab13*/
            v38 = v37 + 96; /*0x140c9ab1a*/
            sub_1402C7520(); /*0x140c9ab1e*/
            v37 = v38; /*0x140c9ab24*/
          }
          v39 = *(_QWORD *)Address; /*0x140c9ab30*/
          v40 = 1; /*0x140c9ab33*/
          v41 = v194; /*0x140c9ab38*/
          if ( !*(_QWORD *)Address ) /*0x140c9ab30*/
            goto LABEL_201; /*0x140c9ab3f*/
          goto LABEL_200; /*0x140c9ab3f*/
        case 1: /*0x140c9a6bd*/
LABEL_219:
          v190 = v7; /*0x140c9bf82*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140c9bf90*/
        case 2: /*0x140c9a6bd*/
LABEL_218:
          v190 = v7; /*0x140c9bf6c*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140c9bf7a*/
        case 3: /*0x140c9a6bd*/
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = v5 + 7784; /*0x140c9a81b*/
  v16 = *(unsigned __int8 *)(v5 + 7784); /*0x140c9a822*/
  v14 = v5 + 5688; /*0x140c9a82a*/
  v180 = (_QWORD *)(v5 + 7784); /*0x140c9a83f*/
  switch ( v16 ) /*0x140c9a846*/
  {
    case 0LL: /*0x140c9a846*/
      goto LABEL_8;
    case 1LL: /*0x140c9a846*/
      v190 = v7; /*0x140c9bfda*/
      v178 = v5 + 7784; /*0x140c9bfe1*/
      v177 = v5 + 5688; /*0x140c9bfe8*/
      sub_1416C3400(&off_1417B7B80, v15, a3, a4); /*0x140c9bff6*/
    case 2LL: /*0x140c9a846*/
      v190 = v7; /*0x140c9bfb6*/
      v178 = v5 + 7784; /*0x140c9bfbd*/
      v177 = v5 + 5688; /*0x140c9bfc4*/
      sub_1416C3420(&off_1417B7B80, v15, a3, a4); /*0x140c9bfd2*/
    case 3LL: /*0x140c9a846*/
      v176 = v5 + 5688; /*0x140c9a88a*/
      v190 = v7; /*0x140c9a891*/
      v179 = v5 + 6736; /*0x140c9a89f*/
      switch ( *(_BYTE *)(v5 + 7776) ) /*0x140c9a8bc*/
      {
        case 0: /*0x140c9a8bc*/
LABEL_10:
          v17 = *(volatile void **)(v5 + 6760); /*0x140c9a8be*/
          *(_QWORD *)(v5 + 6768) = v17; /*0x140c9a8c5*/
          *(_BYTE *)(v5 + 7777) = 1; /*0x140c9a8cc*/
          v195 = *(_QWORD *)(v5 + 6736); /*0x140c9a8db*/
          v193 = *(_QWORD *)(v5 + 6744); /*0x140c9a8e9*/
          v18 = *(_QWORD *)(v5 + 6752); /*0x140c9a8f0*/
          LOBYTE(a1) = 1; /*0x140c9a8f7*/
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v17, 1, 0) ) /*0x140c9a8fb*/
          {
            v186 = v195; /*0x140c9bd10*/
            v185 = v193; /*0x140c9bd1e*/
            sub_1416C15B0(v17); /*0x140c9bd28*/
          }
          Address = (PVOID)v17; /*0x140c9a905*/
          v19 = off_141EC90B8; /*0x140c9a90c*/
          if ( 2 * *off_141EC90B8 ) /*0x140c9a916*/
          {
            v186 = v195; /*0x140c9bd3a*/
            v185 = v193; /*0x140c9bd48*/
            v141 = sub_1416C2250(a1, v15); /*0x140c9bd4f*/
            LOBYTE(v141) = v141 ^ 1; /*0x140c9bd55*/
            LODWORD(v191) = v141; /*0x140c9bd57*/
            v20 = (char *)Address; /*0x140c9bd5d*/
            if ( !*((_BYTE *)Address + 1) ) /*0x140c9bd64*/
            {
LABEL_30:
              Address = v20; /*0x140c9ab61*/
              sub_1407BC950(v194 + 6776, v20 + 8); /*0x140c9ab7a*/
              if ( ((unsigned __int8)v191 & 1) == 0 ) /*0x140c9ab87*/
              {
                if ( 2 * *v19 ) /*0x140c9ab8c*/
                {
                  v186 = v195; /*0x140c9bf1d*/
                  v185 = v193; /*0x140c9bf2b*/
                  if ( !(unsigned __int8)sub_1416C2250(v43, v42) ) /*0x140c9bf32*/
                    *((_BYTE *)Address + 1) = 1; /*0x140c9bf47*/
                }
              }
              v44 = Address; /*0x140c9ab9a*/
              v45 = *(_BYTE *)Address; /*0x140c9aba1*/
              *(_BYTE *)Address = 0; /*0x140c9aba1*/
              if ( v45 == 2 ) /*0x140c9aba5*/
              {
                v186 = v195; /*0x140c9bdf0*/
                v185 = v193; /*0x140c9bdfe*/
                WakeByAddressSingle(v44); /*0x140c9be05*/
              }
              v46 = v194; /*0x140c9abab*/
              *(_BYTE *)(v194 + 7777) = 0; /*0x140c9abb2*/
              v47 = *(_OWORD *)(v46 + 7000); /*0x140c9abb9*/
              v171 = *(_OWORD *)(v46 + 7016); /*0x140c9abc7*/
              v170 = v47; /*0x140c9abce*/
              v48 = *(_OWORD *)(v46 + 7224); /*0x140c9abd5*/
              v173 = *(_OWORD *)(v46 + 7240); /*0x140c9abe3*/
              v172 = v48; /*0x140c9abea*/
              *(_QWORD *)&v174 = v195; /*0x140c9abf8*/
              *((_QWORD *)&v174 + 1) = v193; /*0x140c9ac06*/
              *(_QWORD *)&v175 = v18; /*0x140c9ac0d*/
              v49 = off_141EC8710; /*0x140c9ac14*/
              if ( *((_DWORD *)off_141EC8710 + 24) ) /*0x140c9ac1b*/
              {
                v196 = 1; /*0x140c9be10*/
                v142 = off_141EC8710; /*0x140c9be1e*/
                sub_1416984A3(off_141EC8710); /*0x140c9be21*/
                v49 = v142; /*0x140c9be26*/
              }
              if ( *((_DWORD *)v49 + 4) == 2 ) /*0x140c9ac2a*/
              {
                v50 = 704; /*0x140c9ac34*/
                if ( *(_BYTE *)v49 ) /*0x140c9ac2c*/
                  v50 = 472; /*0x140c9ac39*/
                v51 = v49[1] + v50; /*0x140c9ac3d*/
                v196 = 0; /*0x140c9ac41*/
                v52 = sub_140898F60(v51, v49, &v170, &off_1417642A8); /*0x140c9ac56*/
              }
              else
              {
                v53 = 704; /*0x140c9ac67*/
                if ( *((_BYTE *)v49 + 64) ) /*0x140c9ac5e*/
                  v53 = 472; /*0x140c9ac6c*/
                v54 = v49[9] + v53; /*0x140c9ac74*/
                v196 = 0; /*0x140c9ac78*/
                v52 = sub_140898F60(v54, v49 + 8, &v170, &off_141764290); /*0x140c9ac90*/
              }
              v5 = v194; /*0x140c9ac96*/
              *(_QWORD *)(v194 + 7768) = v52; /*0x140c9ac9d*/
LABEL_44:
              Address = (PVOID)(v5 + 7768); /*0x140c9aca4*/
              sub_140B012C0(&v170, v5 + 7768, a2); /*0x140c9acbc*/
              v55 = v170; /*0x140c9acc2*/
              if ( (_QWORD)v170 == -2 ) /*0x140c9accd*/
              {
                v58 = v194; /*0x140c9ad0d*/
                *(_BYTE *)(v194 + 7776) = 3; /*0x140c9ad14*/
              }
              else
              {
                if ( (_DWORD)v170 == -1 ) /*0x140c9acd2*/
                {
                  v23 = *((_QWORD *)&v170 + 1); /*0x140c9acd4*/
                  v56 = v171; /*0x140c9acdb*/
                  LODWORD(v182) = *(_DWORD *)((char *)&v171 + 1); /*0x140c9ace8*/
                  *(_DWORD *)((char *)&v182 + 3) = DWORD1(v171); /*0x140c9acf4*/
                  v57 = 0x800000000000000CuLL; /*0x140c9acfa*/
                  v29 = *((_QWORD *)&v171 + 1); /*0x140c9ad04*/
                }
                else
                {
                  v57 = *((_QWORD *)&v170 + 1); /*0x140c9ad35*/
                  v23 = v171; /*0x140c9ad3c*/
                  v56 = BYTE8(v171); /*0x140c9ad43*/
                  LODWORD(v182) = *(_DWORD *)((char *)&v171 + 9); /*0x140c9ad50*/
                  *(_DWORD *)((char *)&v182 + 3) = HIDWORD(v171); /*0x140c9ad5c*/
                  v29 = v172; /*0x140c9ad62*/
                  sub_141684120(&v159, (char *)&v172 + 8, 304); /*0x140c9ad7d*/
                }
                v61 = v193; /*0x140c9ad82*/
                v181[0] = (_DWORD)v182; /*0x140c9ad95*/
                *(_DWORD *)((char *)v181 + 3) = *(_DWORD *)((char *)&v182 + 3); /*0x140c9ad9b*/
                sub_141684120(v146, &v159, 304); /*0x140c9adb5*/
                v62 = *(_QWORD *)Address; /*0x140c9adc1*/
                v189 = v195; /*0x140c9adcb*/
                v188 = v61; /*0x140c9add2*/
                if ( (unsigned __int8)sub_1412F2A80(v62) ) /*0x140c9addc*/
                {
                  v189 = v195; /*0x140c9aded*/
                  v188 = v61; /*0x140c9adf4*/
                  sub_1412E7580(v62); /*0x140c9adfe*/
                }
                if ( (_DWORD)v55 == 2 ) /*0x140c9ae07*/
                {
                  *(_QWORD *)&v170 = v57; /*0x140c9af20*/
                  *((_QWORD *)&v170 + 1) = v23; /*0x140c9af27*/
                  LOBYTE(v171) = v56; /*0x140c9af2e*/
                  *(_DWORD *)((char *)&v171 + 1) = v181[0]; /*0x140c9af40*/
                  DWORD1(v171) = *(_DWORD *)((char *)v181 + 3); /*0x140c9af46*/
                  *((_QWORD *)&v171 + 1) = v29; /*0x140c9af4c*/
                  v172 = v146[0]; /*0x140c9af6f*/
                  v173 = v146[1]; /*0x140c9af76*/
                  v174 = v146[2]; /*0x140c9af7d*/
                  v175 = v146[3]; /*0x140c9af84*/
                  v182 = nullptr; /*0x140c9af8b*/
                  v183 = 1; /*0x140c9af96*/
                  v184 = 0; /*0x140c9afa1*/
                  v161 = 1610612768; /*0x140c9afac*/
                  v159 = &v182; /*0x140c9afbe*/
                  v160 = (__int64)&off_1417C41C0; /*0x140c9afcc*/
                  if ( (unsigned __int8)sub_140B036A0(&v170, &v159) ) /*0x140c9afe1*/
                    sub_1416C3060( /*0x140c9beb6*/
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v197,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v191 = v182; /*0x140c9aff6*/
                  v187 = (char *)v183; /*0x140c9b004*/
                  LOBYTE(v23) = v184; /*0x140c9b00b*/
                  v64 = HIBYTE(v184); /*0x140c9b012*/
                  v65 = *(unsigned __int16 *)((char *)&v184 + 5); /*0x140c9b019*/
                  v66 = *(unsigned int *)((char *)&v184 + 1); /*0x140c9b020*/
                  v189 = v195; /*0x140c9b02d*/
                  v188 = v193; /*0x140c9b03b*/
                  sub_140BF2F60(&v170); /*0x140c9b049*/
                  goto LABEL_58; /*0x140c9b049*/
                }
                if ( (_DWORD)v55 == -1 ) /*0x140c9ae10*/
                {
                  *(_QWORD *)&v170 = v57; /*0x140c9ae16*/
                  *((_QWORD *)&v170 + 1) = v23; /*0x140c9ae1d*/
                  LOBYTE(v171) = v56; /*0x140c9ae24*/
                  *(_DWORD *)((char *)&v171 + 1) = v181[0]; /*0x140c9ae36*/
                  DWORD1(v171) = *(_DWORD *)((char *)v181 + 3); /*0x140c9ae3c*/
                  *((_QWORD *)&v171 + 1) = v29; /*0x140c9ae42*/
                  v172 = v146[0]; /*0x140c9ae50*/
                  v182 = nullptr; /*0x140c9ae57*/
                  v183 = 1; /*0x140c9ae62*/
                  v184 = 0; /*0x140c9ae6d*/
                  v161 = 1610612768; /*0x140c9ae78*/
                  v159 = &v182; /*0x140c9ae8a*/
                  v160 = (__int64)&off_1417C41C0; /*0x140c9ae98*/
                  if ( (unsigned __int8)sub_141230630(&v170, &v159, v63) ) /*0x140c9aead*/
                    sub_1416C3060( /*0x140c9be85*/
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v197,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v191 = v182; /*0x140c9aec2*/
                  v187 = (char *)v183; /*0x140c9aed0*/
                  LOBYTE(v23) = v184; /*0x140c9aed7*/
                  v64 = HIBYTE(v184); /*0x140c9aede*/
                  v65 = *(unsigned __int16 *)((char *)&v184 + 5); /*0x140c9aee5*/
                  v66 = *(unsigned int *)((char *)&v184 + 1); /*0x140c9aeec*/
                  v189 = v195; /*0x140c9aef9*/
                  v188 = v193; /*0x140c9af07*/
                  sub_140BF0F60(&v170); /*0x140c9af15*/
LABEL_58:
                  v30 = ((unsigned __int64)((v64 << 16) | v65) << 32) | v66; /*0x140c9b04f*/
                  v31 = v194; /*0x140c9b05b*/
                  v67 = *(_QWORD *)(v194 + 6776); /*0x140c9b062*/
                  v32 = v179; /*0x140c9b06c*/
                  v33 = v195; /*0x140c9b073*/
                  if ( v67 ) /*0x140c9b07a*/
                    sub_140001660(*(_QWORD *)(v194 + 6784), v67, 1); /*0x140c9b089*/
                  v68 = *(_QWORD *)(v31 + 6808); /*0x140c9b08e*/
                  if ( v68 ) /*0x140c9b098*/
                    sub_140001660(*(_QWORD *)(v31 + 6816), v68, 1); /*0x140c9b0a7*/
                  v69 = *(_QWORD *)(v31 + 6840); /*0x140c9b0ac*/
                  if ( v69 ) /*0x140c9b0b6*/
                    sub_140001660(*(_QWORD *)(v31 + 6848), v69, 1); /*0x140c9b0c5*/
                  v70 = *(_QWORD *)(v31 + 6872); /*0x140c9b0ca*/
                  if ( v70 ) /*0x140c9b0d4*/
                    sub_140001660(*(_QWORD *)(v31 + 6880), v70, 1); /*0x140c9b0e3*/
                  v71 = *(_QWORD *)(v31 + 6904); /*0x140c9b0e8*/
                  if ( v71 ) /*0x140c9b0f2*/
                    sub_140001660(*(_QWORD *)(v31 + 6912), v71, 1); /*0x140c9b101*/
                  v72 = *(_QWORD *)(v31 + 7736); /*0x140c9b106*/
                  if ( v72 != -1 && v72 ) /*0x140c9b116*/
                    sub_140001660(*(_QWORD *)(v31 + 7744), v72, 1); /*0x140c9b125*/
                  v73 = *(_QWORD *)(v31 + 6936); /*0x140c9b12a*/
                  if ( v73 ) /*0x140c9b134*/
                    sub_140001660(*(_QWORD *)(v31 + 6944), v73, 1); /*0x140c9b143*/
                  v74 = *(_QWORD *)(v31 + 6968); /*0x140c9b148*/
                  if ( v74 ) /*0x140c9b152*/
                    sub_140001660(*(_QWORD *)(v31 + 6976), v74, 1); /*0x140c9b161*/
                  v75 = *(_QWORD *)(v31 + 7032); /*0x140c9b166*/
                  if ( v75 ) /*0x140c9b170*/
                    sub_140001660(*(_QWORD *)(v31 + 7040), v75, 1); /*0x140c9b17f*/
                  v76 = *(_QWORD *)(v31 + 7064); /*0x140c9b184*/
                  if ( v76 ) /*0x140c9b18e*/
                    sub_140001660(*(_QWORD *)(v31 + 7072), v76, 1); /*0x140c9b19d*/
                  v77 = *(_QWORD *)(v31 + 7096); /*0x140c9b1a2*/
                  if ( v77 ) /*0x140c9b1ac*/
                    sub_140001660(*(_QWORD *)(v31 + 7104), v77, 1); /*0x140c9b1bb*/
                  v78 = *(_QWORD *)(v31 + 7128); /*0x140c9b1c0*/
                  if ( v78 ) /*0x140c9b1ca*/
                    sub_140001660(*(_QWORD *)(v31 + 7136), v78, 1); /*0x140c9b1d9*/
                  v79 = *(_QWORD *)(v31 + 7160); /*0x140c9b1de*/
                  if ( v79 ) /*0x140c9b1e8*/
                    sub_140001660(*(_QWORD *)(v31 + 7168), v79, 1); /*0x140c9b1f7*/
                  v80 = *(_QWORD *)(v31 + 7192); /*0x140c9b1fc*/
                  if ( v80 ) /*0x140c9b206*/
                    sub_140001660(*(_QWORD *)(v31 + 7200), v80, 1); /*0x140c9b215*/
                  v81 = *(_QWORD *)(v31 + 7256); /*0x140c9b21a*/
                  if ( v81 ) /*0x140c9b224*/
                    sub_140001660(*(_QWORD *)(v31 + 7264), v81, 1); /*0x140c9b233*/
                  v82 = *(_QWORD *)(v31 + 7288); /*0x140c9b238*/
                  if ( v82 ) /*0x140c9b242*/
                    sub_140001660(*(_QWORD *)(v31 + 7296), v82, 1); /*0x140c9b251*/
                  v83 = *(_QWORD *)(v31 + 7320); /*0x140c9b256*/
                  if ( v83 ) /*0x140c9b260*/
                    sub_140001660(*(_QWORD *)(v31 + 7328), v83, 1); /*0x140c9b26f*/
                  v84 = *(_QWORD *)(v31 + 7352); /*0x140c9b274*/
                  if ( v84 ) /*0x140c9b27e*/
                    sub_140001660(*(_QWORD *)(v31 + 7360), v84, 1); /*0x140c9b28d*/
                  v85 = *(_QWORD *)(v31 + 7384); /*0x140c9b292*/
                  if ( v85 ) /*0x140c9b29c*/
                    sub_140001660(*(_QWORD *)(v31 + 7392), v85, 1); /*0x140c9b2ab*/
                  v86 = *(_QWORD *)(v31 + 7416); /*0x140c9b2b0*/
                  if ( v86 ) /*0x140c9b2ba*/
                    sub_140001660(*(_QWORD *)(v31 + 7424), v86, 1); /*0x140c9b2c9*/
                  v87 = *(_QWORD *)(v31 + 7448); /*0x140c9b2ce*/
                  if ( v87 ) /*0x140c9b2d8*/
                    sub_140001660(*(_QWORD *)(v31 + 7456), v87, 1); /*0x140c9b2e7*/
                  v88 = *(_QWORD *)(v31 + 7480); /*0x140c9b2ec*/
                  if ( v88 ) /*0x140c9b2f6*/
                    sub_140001660(*(_QWORD *)(v31 + 7488), v88, 1); /*0x140c9b305*/
                  v89 = *(_QWORD *)(v31 + 7512); /*0x140c9b30a*/
                  if ( v89 ) /*0x140c9b314*/
                    sub_140001660(*(_QWORD *)(v31 + 7520), v89, 1); /*0x140c9b323*/
                  v90 = *(_QWORD *)(v31 + 7544); /*0x140c9b328*/
                  if ( v90 ) /*0x140c9b332*/
                    sub_140001660(*(_QWORD *)(v31 + 7552), v90, 1); /*0x140c9b341*/
                  v91 = *(_QWORD *)(v31 + 7576); /*0x140c9b346*/
                  if ( v91 ) /*0x140c9b350*/
                    sub_140001660(*(_QWORD *)(v31 + 7584), v91, 1); /*0x140c9b35f*/
                  v92 = *(_QWORD *)(v31 + 7608); /*0x140c9b364*/
                  if ( v92 ) /*0x140c9b36e*/
                    sub_140001660(*(_QWORD *)(v31 + 7616), v92, 1); /*0x140c9b37d*/
                  v93 = *(_QWORD *)(v31 + 7640); /*0x140c9b382*/
                  if ( v93 ) /*0x140c9b38c*/
                    sub_140001660(*(_QWORD *)(v31 + 7648), v93, 1); /*0x140c9b39b*/
                  v94 = *(_QWORD *)(v31 + 7672); /*0x140c9b3a0*/
                  if ( v94 ) /*0x140c9b3aa*/
                    sub_140001660(*(_QWORD *)(v31 + 7680), v94, 1); /*0x140c9b3b9*/
                  v95 = *(_QWORD *)(v31 + 7704); /*0x140c9b3be*/
                  if ( v95 ) /*0x140c9b3c8*/
                    sub_140001660(*(_QWORD *)(v31 + 7712), v95, 1); /*0x140c9b3d7*/
                  goto LABEL_117; /*0x140c9b3d7*/
                }
                v150 = v29; /*0x140c9b605*/
                sub_141684120(v151, v146, 304); /*0x140c9b620*/
                v147[0] = v55; /*0x140c9b625*/
                v147[1] = v57; /*0x140c9b62c*/
                v147[2] = v23; /*0x140c9b633*/
                v148 = v56; /*0x140c9b63a*/
                *(_DWORD *)v149 = v181[0]; /*0x140c9b64c*/
                *(_DWORD *)&v149[3] = *(_DWORD *)((char *)v181 + 3); /*0x140c9b652*/
                v189 = v195; /*0x140c9b65f*/
                v188 = v61; /*0x140c9b666*/
                sub_140ACA6E0(&v170, v147); /*0x140c9b67b*/
                v191 = *((_QWORD **)&v170 + 1); /*0x140c9b68f*/
                v96 = v170; /*0x140c9b68f*/
                v187 = (char *)v171; /*0x140c9b69d*/
                LOBYTE(v23) = BYTE8(v171); /*0x140c9b6a4*/
                v101 = HIBYTE(v171); /*0x140c9b6ac*/
                v102 = *(unsigned __int16 *)((char *)&v171 + 13); /*0x140c9b6b3*/
                v103 = *(unsigned int *)((char *)&v171 + 9); /*0x140c9b6ba*/
                v29 = v172; /*0x140c9b6c0*/
                sub_141684120(v145, (char *)&v172 + 8, 384); /*0x140c9b6db*/
                v58 = v194; /*0x140c9b6e0*/
                v104 = *(_QWORD *)(v194 + 6776); /*0x140c9b6e7*/
                if ( v104 ) /*0x140c9b6f1*/
                  sub_140001660(*(_QWORD *)(v194 + 6784), v104, 1); /*0x140c9b700*/
                v105 = *(_QWORD *)(v58 + 6808); /*0x140c9b705*/
                if ( v105 ) /*0x140c9b70f*/
                  sub_140001660(*(_QWORD *)(v58 + 6816), v105, 1); /*0x140c9b71e*/
                v106 = *(_QWORD *)(v58 + 6840); /*0x140c9b723*/
                if ( v106 ) /*0x140c9b72d*/
                  sub_140001660(*(_QWORD *)(v58 + 6848), v106, 1); /*0x140c9b73c*/
                v107 = *(_QWORD *)(v58 + 6872); /*0x140c9b741*/
                if ( v107 ) /*0x140c9b74b*/
                  sub_140001660(*(_QWORD *)(v58 + 6880), v107, 1); /*0x140c9b75a*/
                v108 = *(_QWORD *)(v58 + 6904); /*0x140c9b75f*/
                if ( v108 ) /*0x140c9b769*/
                  sub_140001660(*(_QWORD *)(v58 + 6912), v108, 1); /*0x140c9b778*/
                v109 = *(_QWORD *)(v58 + 7736); /*0x140c9b77d*/
                if ( v109 != -1 && v109 ) /*0x140c9b78d*/
                  sub_140001660(*(_QWORD *)(v58 + 7744), v109, 1); /*0x140c9b79c*/
                v110 = *(_QWORD *)(v58 + 6936); /*0x140c9b7a1*/
                if ( v110 ) /*0x140c9b7ab*/
                  sub_140001660(*(_QWORD *)(v58 + 6944), v110, 1); /*0x140c9b7ba*/
                v111 = *(_QWORD *)(v58 + 6968); /*0x140c9b7bf*/
                if ( v111 ) /*0x140c9b7c9*/
                  sub_140001660(*(_QWORD *)(v58 + 6976), v111, 1); /*0x140c9b7d8*/
                v112 = *(_QWORD *)(v58 + 7032); /*0x140c9b7dd*/
                if ( v112 ) /*0x140c9b7e7*/
                  sub_140001660(*(_QWORD *)(v58 + 7040), v112, 1); /*0x140c9b7f6*/
                v113 = *(_QWORD *)(v58 + 7064); /*0x140c9b7fb*/
                if ( v113 ) /*0x140c9b805*/
                  sub_140001660(*(_QWORD *)(v58 + 7072), v113, 1); /*0x140c9b814*/
                v114 = *(_QWORD *)(v58 + 7096); /*0x140c9b819*/
                if ( v114 ) /*0x140c9b823*/
                  sub_140001660(*(_QWORD *)(v58 + 7104), v114, 1); /*0x140c9b832*/
                v115 = *(_QWORD *)(v58 + 7128); /*0x140c9b837*/
                if ( v115 ) /*0x140c9b841*/
                  sub_140001660(*(_QWORD *)(v58 + 7136), v115, 1); /*0x140c9b850*/
                v116 = *(_QWORD *)(v58 + 7160); /*0x140c9b855*/
                if ( v116 ) /*0x140c9b85f*/
                  sub_140001660(*(_QWORD *)(v58 + 7168), v116, 1); /*0x140c9b86e*/
                v117 = *(_QWORD *)(v58 + 7192); /*0x140c9b873*/
                if ( v117 ) /*0x140c9b87d*/
                  sub_140001660(*(_QWORD *)(v58 + 7200), v117, 1); /*0x140c9b88c*/
                v118 = *(_QWORD *)(v58 + 7256); /*0x140c9b891*/
                if ( v118 ) /*0x140c9b89b*/
                  sub_140001660(*(_QWORD *)(v58 + 7264), v118, 1); /*0x140c9b8aa*/
                v119 = *(_QWORD *)(v58 + 7288); /*0x140c9b8af*/
                if ( v119 ) /*0x140c9b8b9*/
                  sub_140001660(*(_QWORD *)(v58 + 7296), v119, 1); /*0x140c9b8c8*/
                v120 = *(_QWORD *)(v58 + 7320); /*0x140c9b8cd*/
                if ( v120 ) /*0x140c9b8d7*/
                  sub_140001660(*(_QWORD *)(v58 + 7328), v120, 1); /*0x140c9b8e6*/
                v121 = *(_QWORD *)(v58 + 7352); /*0x140c9b8eb*/
                if ( v121 ) /*0x140c9b8f5*/
                  sub_140001660(*(_QWORD *)(v58 + 7360), v121, 1); /*0x140c9b904*/
                v122 = *(_QWORD *)(v58 + 7384); /*0x140c9b909*/
                if ( v122 ) /*0x140c9b913*/
                  sub_140001660(*(_QWORD *)(v58 + 7392), v122, 1); /*0x140c9b922*/
                v123 = *(_QWORD *)(v58 + 7416); /*0x140c9b927*/
                if ( v123 ) /*0x140c9b931*/
                  sub_140001660(*(_QWORD *)(v58 + 7424), v123, 1); /*0x140c9b940*/
                v124 = *(_QWORD *)(v58 + 7448); /*0x140c9b945*/
                if ( v124 ) /*0x140c9b94f*/
                  sub_140001660(*(_QWORD *)(v58 + 7456), v124, 1); /*0x140c9b95e*/
                v125 = *(_QWORD *)(v58 + 7480); /*0x140c9b963*/
                if ( v125 ) /*0x140c9b96d*/
                  sub_140001660(*(_QWORD *)(v58 + 7488), v125, 1); /*0x140c9b97c*/
                v126 = *(_QWORD *)(v58 + 7512); /*0x140c9b981*/
                if ( v126 ) /*0x140c9b98b*/
                  sub_140001660(*(_QWORD *)(v58 + 7520), v126, 1); /*0x140c9b99a*/
                v127 = *(_QWORD *)(v58 + 7544); /*0x140c9b99f*/
                if ( v127 ) /*0x140c9b9a9*/
                  sub_140001660(*(_QWORD *)(v58 + 7552), v127, 1); /*0x140c9b9b8*/
                v128 = *(_QWORD *)(v58 + 7576); /*0x140c9b9bd*/
                if ( v128 ) /*0x140c9b9c7*/
                  sub_140001660(*(_QWORD *)(v58 + 7584), v128, 1); /*0x140c9b9d6*/
                v129 = *(_QWORD *)(v58 + 7608); /*0x140c9b9db*/
                if ( v129 ) /*0x140c9b9e5*/
                  sub_140001660(*(_QWORD *)(v58 + 7616), v129, 1); /*0x140c9b9f4*/
                v130 = *(_QWORD *)(v58 + 7640); /*0x140c9b9f9*/
                if ( v130 ) /*0x140c9ba03*/
                  sub_140001660(*(_QWORD *)(v58 + 7648), v130, 1); /*0x140c9ba12*/
                v131 = *(_QWORD *)(v58 + 7672); /*0x140c9ba17*/
                if ( v131 ) /*0x140c9ba21*/
                  sub_140001660(*(_QWORD *)(v58 + 7680), v131, 1); /*0x140c9ba30*/
                v132 = *(_QWORD *)(v58 + 7704); /*0x140c9ba35*/
                if ( v132 ) /*0x140c9ba3f*/
                  sub_140001660(*(_QWORD *)(v58 + 7712), v132, 1); /*0x140c9ba4e*/
                *(_BYTE *)(v58 + 7777) = 0; /*0x140c9ba53*/
                sub_141684120(&v152, v145, 384); /*0x140c9ba6f*/
                *(_BYTE *)(v58 + 7776) = 1; /*0x140c9ba74*/
                if ( v96 != -1 ) /*0x140c9ba80*/
                {
                  v30 = ((unsigned __int64)((v101 << 16) | v102) << 32) | v103; /*0x140c9ba8f*/
                  v32 = v179; /*0x140c9ba92*/
                  goto LABEL_120; /*0x140c9ba99*/
                }
              }
              *(_BYTE *)(v58 + 7784) = 3; /*0x140c9ad1c*/
              *(_BYTE *)(v58 + 7792) = 3; /*0x140c9ad24*/
              v59 = 3; /*0x140c9ad2c*/
              result = 1; /*0x140c9ad2e*/
              goto LABEL_202; /*0x140c9ad30*/
            }
          }
          else
          {
            LODWORD(v191) = 0; /*0x140c9a922*/
            v20 = (char *)Address; /*0x140c9a92c*/
            if ( !*((_BYTE *)Address + 1) ) /*0x140c9a93a*/
              goto LABEL_30; /*0x140c9a93a*/
          }
          v159 = nullptr; /*0x140c9a940*/
          v160 = 1; /*0x140c9a94b*/
          v161 = 0; /*0x140c9a956*/
          *(_QWORD *)&v171 = 1610612768; /*0x140c9a961*/
          *(_QWORD *)&v170 = &v159; /*0x140c9a973*/
          *((_QWORD *)&v170 + 1) = &off_1417C41C0; /*0x140c9a981*/
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v170) ) /*0x140c9a99b*/
            sub_1416C3060( /*0x140c9bd9c*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v197,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v22 = v159; /*0x140c9a9a9*/
          v20 = (char *)v160; /*0x140c9a9b0*/
          LODWORD(v23) = (unsigned __int8)v161; /*0x140c9a9b7*/
          v24 = HIBYTE(v161); /*0x140c9a9bf*/
          v25 = *(unsigned __int16 *)((char *)&v161 + 5); /*0x140c9a9c7*/
          v26 = *(unsigned int *)((char *)&v161 + 1); /*0x140c9a9cf*/
          if ( !(_BYTE)v191 ) /*0x140c9a9dc*/
          {
            if ( 2 * *v19 ) /*0x140c9a9e1*/
            {
              v186 = v195; /*0x140c9bec8*/
              v185 = v193; /*0x140c9bed6*/
              v191 = v159; /*0x140c9bedd*/
              v187 = (char *)v160; /*0x140c9bee4*/
              v143 = sub_1416C2250(v21, v159); /*0x140c9beeb*/
              v20 = v187; /*0x140c9bef0*/
              v22 = v191; /*0x140c9bef7*/
              if ( !v143 ) /*0x140c9bf00*/
                *((_BYTE *)Address + 1) = 1; /*0x140c9bf0d*/
            }
          }
          v27 = Address; /*0x140c9a9ef*/
          v28 = *(_BYTE *)Address; /*0x140c9a9f6*/
          *(_BYTE *)Address = 0; /*0x140c9a9f6*/
          if ( v28 == 2 ) /*0x140c9a9fa*/
          {
            v186 = v195; /*0x140c9bdae*/
            v185 = v193; /*0x140c9bdbc*/
            v187 = v20; /*0x140c9bdc3*/
            v191 = v22; /*0x140c9bdca*/
            WakeByAddressSingle(v27); /*0x140c9bdd1*/
            v20 = v187; /*0x140c9bdd6*/
            v22 = v191; /*0x140c9bddd*/
          }
          if ( v22 == (_QWORD *)-1LL ) /*0x140c9aa04*/
          {
            LODWORD(v191) = v23; /*0x140c9ab5b*/
            goto LABEL_30; /*0x140c9ab5b*/
          }
          v187 = v20; /*0x140c9aa0a*/
          v191 = v22; /*0x140c9aa11*/
          v29 = (unsigned __int64)((v24 << 16) | v25) << 32; /*0x140c9aa1f*/
          v30 = v29 | v26; /*0x140c9aa23*/
          v31 = v194; /*0x140c9aa26*/
          v32 = v179; /*0x140c9aa2d*/
          v33 = v195; /*0x140c9aa34*/
LABEL_117:
          if ( ((v33 != 0) & *(_BYTE *)(v31 + 7777)) != 0 ) /*0x140c9b3e8*/
            sub_140001660(v193, v33, 1); /*0x140c9b3fa*/
          *(_BYTE *)(v31 + 7777) = 0; /*0x140c9b3ff*/
          sub_141684120(&v152, v145, 384); /*0x140c9b41a*/
          *(_BYTE *)(v31 + 7776) = 1; /*0x140c9b41f*/
          v96 = 2; /*0x140c9b426*/
LABEL_120:
          sub_141684120(v144, &v152, 384); /*0x140c9b42c*/
          sub_140BEAC10(v32); /*0x140c9b449*/
          v98 = v30 << 8; /*0x140c9b453*/
          if ( v96 != 2 ) /*0x140c9b45b*/
          {
            sub_141684120(v158, v144, 384); /*0x140c9b490*/
            *(_QWORD *)v155 = v96; /*0x140c9b495*/
            *(_QWORD *)&v155[8] = v191; /*0x140c9b4a3*/
            *(_QWORD *)&v155[16] = v187; /*0x140c9b4b1*/
            v156 = v98 | (unsigned __int8)v23; /*0x140c9b4b8*/
            v157 = v29; /*0x140c9b4bf*/
            sub_140B05D10(&v170, v155); /*0x140c9b4d4*/
            v29 = ((unsigned __int64)((HIBYTE(v170) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v170 + 13)) << 32) /*0x140c9b4ff*/
                | *(unsigned int *)((char *)&v170 + 9);
            v10 = BYTE8(v170); /*0x140c9b502*/
            v35 = *((_QWORD *)&v171 + 1); /*0x140c9b511*/
            v34 = v171; /*0x140c9b511*/
            v36 = v172; /*0x140c9b518*/
            if ( (_QWORD)v170 == -1 ) /*0x140c9b523*/
            {
              v40 = 0; /*0x140c9bb11*/
            }
            else
            {
              HIBYTE(v170) = (((unsigned __int64)((HIBYTE(v170) << 16) /*0x140c9b537*/
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v170 + 13)) << 32)
                            | *(unsigned int *)((char *)&v170 + 9)) >> 48;
              *(_WORD *)((char *)&v170 + 13) = WORD2(v29); /*0x140c9b544*/
              *(_DWORD *)((char *)&v170 + 9) = v29; /*0x140c9b54b*/
              v152 = 0; /*0x140c9b57c*/
              v153 = 1; /*0x140c9b587*/
              v154 = 0; /*0x140c9b592*/
              v145[2] = 1610612768; /*0x140c9b59d*/
              v145[0] = &v152; /*0x140c9b5a8*/
              v145[1] = &off_1417C41C0; /*0x140c9b5b6*/
              if ( (unsigned __int8)sub_141230630(&v170, v145, v100) ) /*0x140c9b5cb*/
                sub_1416C3060( /*0x140c9be54*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v197,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v34 = v152; /*0x140c9b5d9*/
              v35 = v153; /*0x140c9b5e0*/
              v36 = v154; /*0x140c9b5e7*/
              sub_140BF0F60(&v170); /*0x140c9b5f5*/
              v40 = 1; /*0x140c9b5fb*/
              v10 = 3; /*0x140c9b5fd*/
            }
            v135 = v190; /*0x140c9bb13*/
            goto LABEL_195; /*0x140c9bb13*/
          }
          v36 = v98 | (unsigned __int8)v23; /*0x140c9b45d*/
          if ( v98 < 0 ) /*0x140c9b463*/
          {
            v99 = 0; /*0x140c9b469*/
            goto LABEL_123; /*0x140c9b469*/
          }
          if ( v36 ) /*0x140c9baa1*/
          {
            nullsub_1(v97); /*0x140c9baa7*/
            v99 = 1; /*0x140c9baac*/
            v133 = sub_140001650(v36, 1); /*0x140c9bab9*/
            if ( !v133 ) /*0x140c9bac1*/
LABEL_123:
              sub_1416C2D4B(v99, v36); /*0x140c9b46b*/
            v35 = v133; /*0x140c9bac7*/
            sub_141684120(v133, v187, v36); /*0x140c9bad7*/
            v134 = v191; /*0x140c9badc*/
            v135 = v190; /*0x140c9bae6*/
            if ( !v191 ) /*0x140c9baed*/
              goto LABEL_192; /*0x140c9baed*/
          }
          else
          {
            v35 = 1; /*0x140c9bce8*/
            v134 = v191; /*0x140c9bced*/
            v135 = v190; /*0x140c9bcf7*/
            if ( !v191 ) /*0x140c9bcfe*/
              goto LABEL_192; /*0x140c9bcfe*/
          }
          v136 = v135; /*0x140c9baf5*/
          sub_140001660(v187, v134, 1); /*0x140c9baff*/
          v135 = v136; /*0x140c9bb04*/
LABEL_192:
          v40 = 1; /*0x140c9bb07*/
          v10 = 3; /*0x140c9bb09*/
          v34 = v36; /*0x140c9bb0c*/
LABEL_195:
          *(_BYTE *)v180 = 1; /*0x140c9bb1a*/
          sub_140BF0DE0(v135); /*0x140c9bb24*/
          v41 = v194; /*0x140c9bb2a*/
          if ( *(_QWORD *)(v194 + 4616) != -1 ) /*0x140c9bb39*/
          {
            v180 = (_QWORD *)(v194 + 4624); /*0x140c9bb46*/
            v137 = *(char **)(v194 + 4624); /*0x140c9bb4d*/
            v193 = *(_QWORD *)(v194 + 4632); /*0x140c9bb5b*/
            v195 = 0; /*0x140c9bb62*/
            Address = v137; /*0x140c9bb6d*/
            while ( v193 != v195 ) /*0x140c9bb8e*/
            {
              ++v195; /*0x140c9bb93*/
              v138 = v137 + 96; /*0x140c9bb9a*/
              sub_1402C7520(); /*0x140c9bb9e*/
              v137 = v138; /*0x140c9bba4*/
            }
            v41 = v194; /*0x140c9bba9*/
            v39 = *(_QWORD *)(v194 + 4616); /*0x140c9bbb0*/
            if ( v39 ) /*0x140c9bbba*/
LABEL_200:
              sub_140001660(*v180, 96 * v39, 8); /*0x140c9bbbc*/
          }
LABEL_201:
          *(_BYTE *)(v41 + 7792) = 1; /*0x140c9bbd9*/
          sub_140BE0B40(v190); /*0x140c9bbe8*/
          v164 = v29; /*0x140c9bbee*/
          v166 = BYTE6(v29); /*0x140c9bbfc*/
          v165 = WORD2(v29); /*0x140c9bc06*/
          v168 = v35; /*0x140c9bc0e*/
          v169 = v36; /*0x140c9bc15*/
          v163 = v10; /*0x140c9bc1f*/
          v167 = v34; /*0x140c9bc26*/
          v162 = v40; /*0x140c9bc2d*/
          v139 = v194; /*0x140c9bc34*/
          *(_BYTE *)(v194 + 7811) = 0; /*0x140c9bc3b*/
          sub_141684120(&v170, v139, 360); /*0x140c9bc55*/
          *(_BYTE *)(v139 + 7810) = 0; /*0x140c9bc5a*/
          v140 = *(_QWORD *)(v139 + 384); /*0x140c9bc61*/
          *(_BYTE *)(v139 + 7809) = 0; /*0x140c9bc68*/
          *(_QWORD *)&v155[16] = *(_QWORD *)(v139 + 376); /*0x140c9bc76*/
          *(_OWORD *)v155 = *(_OWORD *)(v139 + 360); /*0x140c9bc84*/
          sub_14047E370( /*0x140c9bcb0*/
            (unsigned int)&v170,
            v140,
            (unsigned int)&v162,
            (unsigned int)v155,
            *(_DWORD *)(v139 + 7800),
            *(_DWORD *)(v139 + 7804));
          v59 = 1; /*0x140c9bcb6*/
          result = 0; /*0x140c9bcb8*/
          v58 = v194; /*0x140c9bcba*/
LABEL_202:
          *(_BYTE *)(v58 + 7808) = v59; /*0x140c9bcc1*/
          return result;
        case 1: /*0x140c9a8bc*/
LABEL_221:
          sub_1416C3400(&off_1417BB0C0, v15, a3, a4); /*0x140c9bfa7*/
        case 2: /*0x140c9a8bc*/
LABEL_220:
          sub_1416C3420(&off_1417BB0C0, v15, a3, a4); /*0x140c9bf98*/
        case 3: /*0x140c9a8bc*/
          goto LABEL_44;
      }
  }
}

// --- refs (first 60) ---
//   ref: 0x141684120 sub_141684120 
//   ref: 0x1416c3400 sub_1416C3400 
//   ref: 0x1417b7c00 off_1417B7C00 
//   ref: 0x1416c3420 sub_1416C3420 
//   ref: 0x1417b98fc aImportSkill import_skill
//   ref: 0x1417b9798 aRepo_0 repo
//   ref: 0x140003640 sub_140003640 
//   ref: 0x1416850a0 sub_1416850A0 
//   ref: 0x1417b8cfc aPath_10 path
//   ref: 0x1409757b0 sub_1409757B0 
//   ref: 0x140bf0de0 sub_140BF0DE0 
//   ref: 0x1402c7520 sub_1402C7520 
//   ref: 0x1417b9768 off_1417B9768 
//   ref: 0x1417b7b80 off_1417B7B80 
//   ref: 0x1416c15b0 sub_1416C15B0 
//   ref: 0x141ec90b8 off_141EC90B8 
//   ref: 0x1416c2250 sub_1416C2250 
//   ref: 0x1407bc950 sub_1407BC950 
//   ref: 0x1416c1670 WakeByAddressSingle 
//   ref: 0x141ec8710 off_141EC8710 
//   ref: 0x1416984a3 sub_1416984A3 
//   ref: 0x140898f60 sub_140898F60 
//   ref: 0x1417642a8 off_1417642A8 
//   ref: 0x141764290 off_141764290 
//   ref: 0x140b012c0 sub_140B012C0 
//   ref: 0x1412e7580 sub_1412E7580 
//   ref: 0x1412f2a80 sub_1412F2A80 
//   ref: 0x1417c41c0 off_1417C41C0 
//   ref: 0x1416c3060 sub_1416C3060 
//   ref: 0x1417c41f0 aADisplayImplem_11 a Display implementation returned an error unexpectedly
//   ref: 0x1417bc180 unk_1417BC180 
//   ref: 0x1417c4278 off_1417C4278 
//   ref: 0x140b036a0 sub_140B036A0 
//   ref: 0x140bf2f60 sub_140BF2F60 
//   ref: 0x141230630 sub_141230630 
//   ref: 0x140bf0f60 sub_140BF0F60 
//   ref: 0x140001660 sub_140001660 
//   ref: 0x140aca6e0 sub_140ACA6E0 
//   ref: 0x1414acab0 sub_1414ACAB0 
//   ref: 0x141753898 aPoisonedLockAn poisoned lock: another task failed inside
//   ref: 0x140beac10 sub_140BEAC10 
//   ref: 0x140b05d10 sub_140B05D10 
//   ref: 0x140001690 nullsub_1 
//   ref: 0x140001650 sub_140001650 
//   ref: 0x1416c2d4b sub_1416C2D4B 
//   ref: 0x140be0b40 sub_140BE0B40 
//   ref: 0x14047e370 sub_14047E370 
//   ref: 0x1417bb0c0 off_1417BB0C0 
