// module: codexmate_lib (tauri command handler, src/lib.rs command-name xref)
// win 1.2.3 IDB (AiMaMi.1.2.3 win64.exe) live IDA Python/decompile this session
// tauri command handler = restore_skill_backup | mapped via command-name string xref (win-native, ground-truth)
// NOTE: newly captured this session; not previously in raw/; not yet dirtree-moved.
// addr: 0x140c95480
// name: restore_skill_backup
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = restore_skill_backup | mapped via command-name string xref (win-native, ground-truth)
char __fastcall restore_skill_backup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  _BYTE v144[528]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v145[66]; // [rsp+248h] [rbp+1C8h] BYREF
  _OWORD v146[28]; // [rsp+458h] [rbp+3D8h] BYREF
  _QWORD v147[3]; // [rsp+618h] [rbp+598h] BYREF
  char v148; // [rsp+630h] [rbp+5B0h]
  _BYTE v149[7]; // [rsp+631h] [rbp+5B1h]
  unsigned __int64 v150; // [rsp+638h] [rbp+5B8h]
  char v151[448]; // [rsp+640h] [rbp+5C0h] BYREF
  __int64 v152; // [rsp+800h] [rbp+780h] BYREF
  __int64 v153; // [rsp+808h] [rbp+788h]
  __int64 v154; // [rsp+810h] [rbp+790h]
  _QWORD *v155; // [rsp+A10h] [rbp+990h] BYREF
  __int64 v156; // [rsp+A18h] [rbp+998h]
  __int64 v157; // [rsp+A20h] [rbp+9A0h]
  _BYTE v158[24]; // [rsp+BD0h] [rbp+B50h] BYREF
  __int64 v159; // [rsp+BE8h] [rbp+B68h]
  unsigned __int64 v160; // [rsp+BF0h] [rbp+B70h]
  char v161[536]; // [rsp+BF8h] [rbp+B78h] BYREF
  __int128 v162; // [rsp+E10h] [rbp+D90h] BYREF
  __int128 v163; // [rsp+E20h] [rbp+DA0h] BYREF
  __int128 v164; // [rsp+E30h] [rbp+DB0h] BYREF
  __int128 v165; // [rsp+E40h] [rbp+DC0h]
  __int128 v166; // [rsp+E50h] [rbp+DD0h]
  __int128 v167; // [rsp+E60h] [rbp+DE0h]
  __int64 v168; // [rsp+1050h] [rbp+FD0h] BYREF
  char v169; // [rsp+1058h] [rbp+FD8h]
  int v170; // [rsp+1059h] [rbp+FD9h]
  __int16 v171; // [rsp+105Dh] [rbp+FDDh]
  char v172; // [rsp+105Fh] [rbp+FDFh]
  __int64 v173; // [rsp+1060h] [rbp+FE0h]
  __int64 v174; // [rsp+1068h] [rbp+FE8h]
  __int64 v175; // [rsp+1070h] [rbp+FF0h]
  __int64 v176; // [rsp+1078h] [rbp+FF8h]
  __int64 v177; // [rsp+1080h] [rbp+1000h]
  __int64 v178; // [rsp+1088h] [rbp+1008h]
  __int64 v179; // [rsp+1090h] [rbp+1010h]
  _QWORD *v180; // [rsp+1098h] [rbp+1018h]
  _DWORD v181[2]; // [rsp+10A0h] [rbp+1020h]
  _QWORD *v182; // [rsp+10A8h] [rbp+1028h] BYREF
  __int64 v183; // [rsp+10B0h] [rbp+1030h]
  __int64 v184; // [rsp+10B8h] [rbp+1038h]
  __int64 v185; // [rsp+10C0h] [rbp+1040h]
  __int64 v186; // [rsp+10C8h] [rbp+1048h]
  char *v187; // [rsp+10D0h] [rbp+1050h]
  __int64 v188; // [rsp+10D8h] [rbp+1058h]
  __int64 v189; // [rsp+10E0h] [rbp+1060h]
  __int64 v190; // [rsp+10E8h] [rbp+1068h]
  _QWORD *v191; // [rsp+10F0h] [rbp+1070h]
  PVOID Address; // [rsp+10F8h] [rbp+1078h]
  __int64 v193; // [rsp+1100h] [rbp+1080h]
  __int64 v194; // [rsp+1108h] [rbp+1088h]
  __int64 v195; // [rsp+1110h] [rbp+1090h]
  char v196; // [rsp+111Eh] [rbp+109Eh]
  char v197; // [rsp+111Fh] [rbp+109Fh] BYREF
  __int64 v198; // [rsp+1120h] [rbp+10A0h]

  v198 = -2; /*0x140c954a1*/
  v5 = a1; /*0x140c954af*/
  v6 = *(unsigned __int8 *)(a1 + 7808); /*0x140c954b2*/
  v194 = a1; /*0x140c954c7*/
  switch ( v6 ) /*0x140c954ce*/
  {
    case 0LL: /*0x140c954ce*/
      *(_WORD *)(a1 + 7809) = 257; /*0x140c954d0*/
      *(_BYTE *)(a1 + 7811) = 1; /*0x140c954da*/
      v7 = a1 + 4096; /*0x140c954e9*/
      sub_141684120(a1 + 4096, a1 + 392, 3704); /*0x140c954f9*/
      switch ( *(_BYTE *)(v5 + 7792) ) /*0x140c95514*/
      {
        case 0: /*0x140c95514*/
          goto LABEL_4;
        case 1: /*0x140c95514*/
          goto LABEL_219;
        case 2: /*0x140c95514*/
          goto LABEL_218;
        case 3: /*0x140c95514*/
          goto LABEL_7;
      }
    case 1LL: /*0x140c954ce*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140c96de5*/
    case 2LL: /*0x140c954ce*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140c96dd7*/
    case 3LL: /*0x140c954ce*/
      v7 = a1 + 4096; /*0x140c95516*/
      switch ( *(_BYTE *)(a1 + 7792) ) /*0x140c95533*/
      {
        case 0: /*0x140c95533*/
LABEL_4:
          v8 = v5 + 4616; /*0x140c95535*/
          *(_QWORD *)&v165 = 0; /*0x140c9553c*/
          *(_QWORD *)&v162 = aRestoreSkillBa; /*0x140c9554e*/
          *((_QWORD *)&v162 + 1) = 20; /*0x140c95555*/
          *(_QWORD *)&v163 = aRepo_0; /*0x140c95567*/
          *((_QWORD *)&v163 + 1) = 4; /*0x140c9556e*/
          v190 = v7; /*0x140c95579*/
          *(_QWORD *)&v164 = v7; /*0x140c95580*/
          *((_QWORD *)&v164 + 1) = v5 + 4616; /*0x140c95587*/
          v9 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4608) + 16LL)); /*0x140c9559f*/
          Address = (PVOID)(v5 + 4616); /*0x140c955a5*/
          if ( v9 ) /*0x140c955ac*/
            goto LABEL_5; /*0x140c955ac*/
          sub_1416850A0(v158, &v162, &v163); /*0x140c958cb*/
          v10 = v158[0]; /*0x140c958d1*/
          if ( v158[0] == 0xFF ) /*0x140c958dd*/
          {
            v9 = *(_QWORD *)&v158[8]; /*0x140c96b5c*/
LABEL_5:
            *(_QWORD *)&v165 = 0; /*0x140c955b2*/
            *(_QWORD *)&v162 = aRestoreSkillBa; /*0x140c955c4*/
            *((_QWORD *)&v162 + 1) = 20; /*0x140c955cb*/
            *(_QWORD *)&v163 = aId_8; /*0x140c955dd*/
            *((_QWORD *)&v163 + 1) = 2; /*0x140c955e4*/
            *(_QWORD *)&v164 = v190; /*0x140c955ef*/
            *((_QWORD *)&v164 + 1) = v8; /*0x140c955f6*/
            sub_1409757B0(v158, &v162); /*0x140c9560b*/
            v10 = v158[0]; /*0x140c95611*/
            if ( v158[0] == 0xFF ) /*0x140c9561d*/
            {
              v11 = v159; /*0x140c95623*/
              v5 = v194; /*0x140c9562a*/
              v12 = v194 + 4640; /*0x140c95631*/
              v13 = *(_OWORD *)&v158[8]; /*0x140c95638*/
              *(_QWORD *)(v194 + 4664) = v9; /*0x140c9563f*/
              *(_OWORD *)(v5 + 4640) = v13; /*0x140c95646*/
              *(_QWORD *)(v5 + 4656) = v11; /*0x140c9564e*/
              *(_BYTE *)(v5 + 5680) = 0; /*0x140c95655*/
              v14 = v5 + 5688; /*0x140c9565d*/
              sub_141684120(v5 + 5688, v12, 1048); /*0x140c9566d*/
              v180 = (_QWORD *)(v5 + 7784); /*0x140c95679*/
              *(_BYTE *)(v5 + 7784) = 0; /*0x140c95680*/
              v7 = v190; /*0x140c95688*/
LABEL_8:
              v190 = v7; /*0x140c956be*/
              v179 = v5 + 6736; /*0x140c956d2*/
              v176 = v14; /*0x140c956d9*/
              sub_141684120(v5 + 6736, v14, 1048); /*0x140c956e3*/
              switch ( *(_BYTE *)(v5 + 7776) ) /*0x140c956fe*/
              {
                case 0: /*0x140c956fe*/
                  goto LABEL_10;
                case 1: /*0x140c956fe*/
                  goto LABEL_221;
                case 2: /*0x140c956fe*/
                  goto LABEL_220;
                case 3: /*0x140c956fe*/
                  goto LABEL_44;
              }
            }
          }
          v29 = ((unsigned __int64)((v158[7] << 16) | (unsigned int)*(unsigned __int16 *)&v158[5]) << 32) /*0x140c95901*/
              | *(unsigned int *)&v158[1];
          v34 = *(_QWORD *)&v158[8]; /*0x140c95904*/
          v35 = *(_QWORD *)&v158[16]; /*0x140c9590b*/
          v36 = v159; /*0x140c95912*/
          sub_140BF0DE0(v190); /*0x140c95920*/
          if ( *(_QWORD *)Address == -1 ) /*0x140c95931*/
          {
            v40 = 1; /*0x140c959ca*/
            v41 = v194; /*0x140c959cc*/
            goto LABEL_201; /*0x140c959d3*/
          }
          v180 = (_QWORD *)(v194 + 4624); /*0x140c95945*/
          v37 = *(_QWORD *)(v194 + 4624); /*0x140c9594c*/
          v193 = *(_QWORD *)(v194 + 4632); /*0x140c9595a*/
          v195 = 0; /*0x140c95961*/
          v179 = v37; /*0x140c9596c*/
          while ( v193 != v195 ) /*0x140c9598e*/
          {
            ++v195; /*0x140c95993*/
            v38 = v37 + 96; /*0x140c9599a*/
            sub_1402C7520(); /*0x140c9599e*/
            v37 = v38; /*0x140c959a4*/
          }
          v39 = *(_QWORD *)Address; /*0x140c959b0*/
          v40 = 1; /*0x140c959b3*/
          v41 = v194; /*0x140c959b8*/
          if ( !*(_QWORD *)Address ) /*0x140c959b0*/
            goto LABEL_201; /*0x140c959bf*/
          goto LABEL_200; /*0x140c959bf*/
        case 1: /*0x140c95533*/
LABEL_219:
          v190 = v7; /*0x140c96e02*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140c96e10*/
        case 2: /*0x140c95533*/
LABEL_218:
          v190 = v7; /*0x140c96dec*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140c96dfa*/
        case 3: /*0x140c95533*/
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = v5 + 7784; /*0x140c95691*/
  v16 = *(unsigned __int8 *)(v5 + 7784); /*0x140c95698*/
  v14 = v5 + 5688; /*0x140c956a0*/
  v180 = (_QWORD *)(v5 + 7784); /*0x140c956b5*/
  switch ( v16 ) /*0x140c956bc*/
  {
    case 0LL: /*0x140c956bc*/
      goto LABEL_8;
    case 1LL: /*0x140c956bc*/
      v190 = v7; /*0x140c96e5a*/
      v178 = v5 + 7784; /*0x140c96e61*/
      v177 = v5 + 5688; /*0x140c96e68*/
      sub_1416C3400(&off_1417B7B80, v15, a3, a4); /*0x140c96e76*/
    case 2LL: /*0x140c956bc*/
      v190 = v7; /*0x140c96e36*/
      v178 = v5 + 7784; /*0x140c96e3d*/
      v177 = v5 + 5688; /*0x140c96e44*/
      sub_1416C3420(&off_1417B7B80, v15, a3, a4); /*0x140c96e52*/
    case 3LL: /*0x140c956bc*/
      v176 = v5 + 5688; /*0x140c95700*/
      v190 = v7; /*0x140c95707*/
      v179 = v5 + 6736; /*0x140c95715*/
      switch ( *(_BYTE *)(v5 + 7776) ) /*0x140c95732*/
      {
        case 0: /*0x140c95732*/
LABEL_10:
          v17 = *(volatile void **)(v5 + 6760); /*0x140c95734*/
          *(_QWORD *)(v5 + 6768) = v17; /*0x140c9573b*/
          *(_BYTE *)(v5 + 7777) = 1; /*0x140c95742*/
          v195 = *(_QWORD *)(v5 + 6736); /*0x140c95751*/
          v193 = *(_QWORD *)(v5 + 6744); /*0x140c9575f*/
          v18 = *(_QWORD *)(v5 + 6752); /*0x140c95766*/
          LOBYTE(a1) = 1; /*0x140c9576d*/
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v17, 1, 0) ) /*0x140c95771*/
          {
            v186 = v195; /*0x140c96b90*/
            v185 = v193; /*0x140c96b9e*/
            sub_1416C15B0(v17); /*0x140c96ba8*/
          }
          Address = (PVOID)v17; /*0x140c9577b*/
          v19 = off_141EC90B8; /*0x140c95782*/
          if ( 2 * *off_141EC90B8 ) /*0x140c9578c*/
          {
            v186 = v195; /*0x140c96bba*/
            v185 = v193; /*0x140c96bc8*/
            v141 = sub_1416C2250(a1, v15); /*0x140c96bcf*/
            LOBYTE(v141) = v141 ^ 1; /*0x140c96bd5*/
            LODWORD(v191) = v141; /*0x140c96bd7*/
            v20 = (char *)Address; /*0x140c96bdd*/
            if ( !*((_BYTE *)Address + 1) ) /*0x140c96be4*/
            {
LABEL_30:
              Address = v20; /*0x140c959e1*/
              sub_1407BC950(v194 + 6776, v20 + 8); /*0x140c959fa*/
              if ( ((unsigned __int8)v191 & 1) == 0 ) /*0x140c95a07*/
              {
                if ( 2 * *v19 ) /*0x140c95a0c*/
                {
                  v186 = v195; /*0x140c96d9d*/
                  v185 = v193; /*0x140c96dab*/
                  if ( !(unsigned __int8)sub_1416C2250(v43, v42) ) /*0x140c96db2*/
                    *((_BYTE *)Address + 1) = 1; /*0x140c96dc7*/
                }
              }
              v44 = Address; /*0x140c95a1a*/
              v45 = *(_BYTE *)Address; /*0x140c95a21*/
              *(_BYTE *)Address = 0; /*0x140c95a21*/
              if ( v45 == 2 ) /*0x140c95a25*/
              {
                v186 = v195; /*0x140c96c70*/
                v185 = v193; /*0x140c96c7e*/
                WakeByAddressSingle(v44); /*0x140c96c85*/
              }
              v46 = v194; /*0x140c95a2b*/
              *(_BYTE *)(v194 + 7777) = 0; /*0x140c95a32*/
              v47 = *(_OWORD *)(v46 + 7000); /*0x140c95a39*/
              v163 = *(_OWORD *)(v46 + 7016); /*0x140c95a47*/
              v162 = v47; /*0x140c95a4e*/
              v48 = *(_OWORD *)(v46 + 7224); /*0x140c95a55*/
              v165 = *(_OWORD *)(v46 + 7240); /*0x140c95a63*/
              v164 = v48; /*0x140c95a6a*/
              *(_QWORD *)&v166 = v195; /*0x140c95a78*/
              *((_QWORD *)&v166 + 1) = v193; /*0x140c95a86*/
              *(_QWORD *)&v167 = v18; /*0x140c95a8d*/
              v49 = off_141EC8710; /*0x140c95a94*/
              if ( *((_DWORD *)off_141EC8710 + 24) ) /*0x140c95a9b*/
              {
                v196 = 1; /*0x140c96c90*/
                v142 = off_141EC8710; /*0x140c96c9e*/
                sub_1416984A3(off_141EC8710); /*0x140c96ca1*/
                v49 = v142; /*0x140c96ca6*/
              }
              if ( *((_DWORD *)v49 + 4) == 2 ) /*0x140c95aaa*/
              {
                v50 = 704; /*0x140c95ab4*/
                if ( *(_BYTE *)v49 ) /*0x140c95aac*/
                  v50 = 472; /*0x140c95ab9*/
                v51 = v49[1] + v50; /*0x140c95abd*/
                v196 = 0; /*0x140c95ac1*/
                v52 = sub_140899B80(v51, v49, &v162, &off_1417642A8); /*0x140c95ad6*/
              }
              else
              {
                v53 = 704; /*0x140c95ae7*/
                if ( *((_BYTE *)v49 + 64) ) /*0x140c95ade*/
                  v53 = 472; /*0x140c95aec*/
                v54 = v49[9] + v53; /*0x140c95af4*/
                v196 = 0; /*0x140c95af8*/
                v52 = sub_140899B80(v54, v49 + 8, &v162, &off_141764290); /*0x140c95b10*/
              }
              v5 = v194; /*0x140c95b16*/
              *(_QWORD *)(v194 + 7768) = v52; /*0x140c95b1d*/
LABEL_44:
              Address = (PVOID)(v5 + 7768); /*0x140c95b24*/
              sub_140B01670(&v162, v5 + 7768, a2); /*0x140c95b3c*/
              v55 = v162; /*0x140c95b42*/
              if ( (_QWORD)v162 == -2 ) /*0x140c95b4d*/
              {
                v58 = v194; /*0x140c95b8d*/
                *(_BYTE *)(v194 + 7776) = 3; /*0x140c95b94*/
              }
              else
              {
                if ( (_DWORD)v162 == -1 ) /*0x140c95b52*/
                {
                  v23 = *((_QWORD *)&v162 + 1); /*0x140c95b54*/
                  v56 = v163; /*0x140c95b5b*/
                  LODWORD(v182) = *(_DWORD *)((char *)&v163 + 1); /*0x140c95b68*/
                  *(_DWORD *)((char *)&v182 + 3) = DWORD1(v163); /*0x140c95b74*/
                  v57 = 0x800000000000000CuLL; /*0x140c95b7a*/
                  v29 = *((_QWORD *)&v163 + 1); /*0x140c95b84*/
                }
                else
                {
                  v57 = *((_QWORD *)&v162 + 1); /*0x140c95bb5*/
                  v23 = v163; /*0x140c95bbc*/
                  v56 = BYTE8(v163); /*0x140c95bc3*/
                  LODWORD(v182) = *(_DWORD *)((char *)&v163 + 9); /*0x140c95bd0*/
                  *(_DWORD *)((char *)&v182 + 3) = HIDWORD(v163); /*0x140c95bdc*/
                  v29 = v164; /*0x140c95be2*/
                  sub_141684120(&v155, (char *)&v164 + 8, 448); /*0x140c95bfd*/
                }
                v61 = v193; /*0x140c95c02*/
                v181[0] = (_DWORD)v182; /*0x140c95c15*/
                *(_DWORD *)((char *)v181 + 3) = *(_DWORD *)((char *)&v182 + 3); /*0x140c95c1b*/
                sub_141684120(v146, &v155, 448); /*0x140c95c35*/
                v62 = *(_QWORD *)Address; /*0x140c95c41*/
                v189 = v195; /*0x140c95c4b*/
                v188 = v61; /*0x140c95c52*/
                if ( (unsigned __int8)sub_1412F2A80(v62) ) /*0x140c95c5c*/
                {
                  v189 = v195; /*0x140c95c6d*/
                  v188 = v61; /*0x140c95c74*/
                  sub_1412E7580(v62); /*0x140c95c7e*/
                }
                if ( (_DWORD)v55 == 2 ) /*0x140c95c87*/
                {
                  *(_QWORD *)&v162 = v57; /*0x140c95da0*/
                  *((_QWORD *)&v162 + 1) = v23; /*0x140c95da7*/
                  LOBYTE(v163) = v56; /*0x140c95dae*/
                  *(_DWORD *)((char *)&v163 + 1) = v181[0]; /*0x140c95dc0*/
                  DWORD1(v163) = *(_DWORD *)((char *)v181 + 3); /*0x140c95dc6*/
                  *((_QWORD *)&v163 + 1) = v29; /*0x140c95dcc*/
                  v164 = v146[0]; /*0x140c95def*/
                  v165 = v146[1]; /*0x140c95df6*/
                  v166 = v146[2]; /*0x140c95dfd*/
                  v167 = v146[3]; /*0x140c95e04*/
                  v182 = nullptr; /*0x140c95e0b*/
                  v183 = 1; /*0x140c95e16*/
                  v184 = 0; /*0x140c95e21*/
                  v157 = 1610612768; /*0x140c95e2c*/
                  v155 = &v182; /*0x140c95e3e*/
                  v156 = (__int64)&off_1417C41C0; /*0x140c95e4c*/
                  if ( (unsigned __int8)sub_140B036A0(&v162, &v155) ) /*0x140c95e61*/
                    sub_1416C3060( /*0x140c96d36*/
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v197,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v191 = v182; /*0x140c95e76*/
                  v187 = (char *)v183; /*0x140c95e84*/
                  LOBYTE(v23) = v184; /*0x140c95e8b*/
                  v64 = HIBYTE(v184); /*0x140c95e92*/
                  v65 = *(unsigned __int16 *)((char *)&v184 + 5); /*0x140c95e99*/
                  v66 = *(unsigned int *)((char *)&v184 + 1); /*0x140c95ea0*/
                  v189 = v195; /*0x140c95ead*/
                  v188 = v193; /*0x140c95ebb*/
                  sub_140BF2F60(&v162); /*0x140c95ec9*/
                  goto LABEL_58; /*0x140c95ec9*/
                }
                if ( (_DWORD)v55 == -1 ) /*0x140c95c90*/
                {
                  *(_QWORD *)&v162 = v57; /*0x140c95c96*/
                  *((_QWORD *)&v162 + 1) = v23; /*0x140c95c9d*/
                  LOBYTE(v163) = v56; /*0x140c95ca4*/
                  *(_DWORD *)((char *)&v163 + 1) = v181[0]; /*0x140c95cb6*/
                  DWORD1(v163) = *(_DWORD *)((char *)v181 + 3); /*0x140c95cbc*/
                  *((_QWORD *)&v163 + 1) = v29; /*0x140c95cc2*/
                  v164 = v146[0]; /*0x140c95cd0*/
                  v182 = nullptr; /*0x140c95cd7*/
                  v183 = 1; /*0x140c95ce2*/
                  v184 = 0; /*0x140c95ced*/
                  v157 = 1610612768; /*0x140c95cf8*/
                  v155 = &v182; /*0x140c95d0a*/
                  v156 = (__int64)&off_1417C41C0; /*0x140c95d18*/
                  if ( (unsigned __int8)sub_141230630(&v162, &v155, v63) ) /*0x140c95d2d*/
                    sub_1416C3060( /*0x140c96d05*/
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v197,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v191 = v182; /*0x140c95d42*/
                  v187 = (char *)v183; /*0x140c95d50*/
                  LOBYTE(v23) = v184; /*0x140c95d57*/
                  v64 = HIBYTE(v184); /*0x140c95d5e*/
                  v65 = *(unsigned __int16 *)((char *)&v184 + 5); /*0x140c95d65*/
                  v66 = *(unsigned int *)((char *)&v184 + 1); /*0x140c95d6c*/
                  v189 = v195; /*0x140c95d79*/
                  v188 = v193; /*0x140c95d87*/
                  sub_140BF0F60(&v162); /*0x140c95d95*/
LABEL_58:
                  v30 = ((unsigned __int64)((v64 << 16) | v65) << 32) | v66; /*0x140c95ecf*/
                  v31 = v194; /*0x140c95edb*/
                  v67 = *(_QWORD *)(v194 + 6776); /*0x140c95ee2*/
                  v32 = v179; /*0x140c95eec*/
                  v33 = v195; /*0x140c95ef3*/
                  if ( v67 ) /*0x140c95efa*/
                    sub_140001660(*(_QWORD *)(v194 + 6784), v67, 1); /*0x140c95f09*/
                  v68 = *(_QWORD *)(v31 + 6808); /*0x140c95f0e*/
                  if ( v68 ) /*0x140c95f18*/
                    sub_140001660(*(_QWORD *)(v31 + 6816), v68, 1); /*0x140c95f27*/
                  v69 = *(_QWORD *)(v31 + 6840); /*0x140c95f2c*/
                  if ( v69 ) /*0x140c95f36*/
                    sub_140001660(*(_QWORD *)(v31 + 6848), v69, 1); /*0x140c95f45*/
                  v70 = *(_QWORD *)(v31 + 6872); /*0x140c95f4a*/
                  if ( v70 ) /*0x140c95f54*/
                    sub_140001660(*(_QWORD *)(v31 + 6880), v70, 1); /*0x140c95f63*/
                  v71 = *(_QWORD *)(v31 + 6904); /*0x140c95f68*/
                  if ( v71 ) /*0x140c95f72*/
                    sub_140001660(*(_QWORD *)(v31 + 6912), v71, 1); /*0x140c95f81*/
                  v72 = *(_QWORD *)(v31 + 7736); /*0x140c95f86*/
                  if ( v72 != -1 && v72 ) /*0x140c95f96*/
                    sub_140001660(*(_QWORD *)(v31 + 7744), v72, 1); /*0x140c95fa5*/
                  v73 = *(_QWORD *)(v31 + 6936); /*0x140c95faa*/
                  if ( v73 ) /*0x140c95fb4*/
                    sub_140001660(*(_QWORD *)(v31 + 6944), v73, 1); /*0x140c95fc3*/
                  v74 = *(_QWORD *)(v31 + 6968); /*0x140c95fc8*/
                  if ( v74 ) /*0x140c95fd2*/
                    sub_140001660(*(_QWORD *)(v31 + 6976), v74, 1); /*0x140c95fe1*/
                  v75 = *(_QWORD *)(v31 + 7032); /*0x140c95fe6*/
                  if ( v75 ) /*0x140c95ff0*/
                    sub_140001660(*(_QWORD *)(v31 + 7040), v75, 1); /*0x140c95fff*/
                  v76 = *(_QWORD *)(v31 + 7064); /*0x140c96004*/
                  if ( v76 ) /*0x140c9600e*/
                    sub_140001660(*(_QWORD *)(v31 + 7072), v76, 1); /*0x140c9601d*/
                  v77 = *(_QWORD *)(v31 + 7096); /*0x140c96022*/
                  if ( v77 ) /*0x140c9602c*/
                    sub_140001660(*(_QWORD *)(v31 + 7104), v77, 1); /*0x140c9603b*/
                  v78 = *(_QWORD *)(v31 + 7128); /*0x140c96040*/
                  if ( v78 ) /*0x140c9604a*/
                    sub_140001660(*(_QWORD *)(v31 + 7136), v78, 1); /*0x140c96059*/
                  v79 = *(_QWORD *)(v31 + 7160); /*0x140c9605e*/
                  if ( v79 ) /*0x140c96068*/
                    sub_140001660(*(_QWORD *)(v31 + 7168), v79, 1); /*0x140c96077*/
                  v80 = *(_QWORD *)(v31 + 7192); /*0x140c9607c*/
                  if ( v80 ) /*0x140c96086*/
                    sub_140001660(*(_QWORD *)(v31 + 7200), v80, 1); /*0x140c96095*/
                  v81 = *(_QWORD *)(v31 + 7256); /*0x140c9609a*/
                  if ( v81 ) /*0x140c960a4*/
                    sub_140001660(*(_QWORD *)(v31 + 7264), v81, 1); /*0x140c960b3*/
                  v82 = *(_QWORD *)(v31 + 7288); /*0x140c960b8*/
                  if ( v82 ) /*0x140c960c2*/
                    sub_140001660(*(_QWORD *)(v31 + 7296), v82, 1); /*0x140c960d1*/
                  v83 = *(_QWORD *)(v31 + 7320); /*0x140c960d6*/
                  if ( v83 ) /*0x140c960e0*/
                    sub_140001660(*(_QWORD *)(v31 + 7328), v83, 1); /*0x140c960ef*/
                  v84 = *(_QWORD *)(v31 + 7352); /*0x140c960f4*/
                  if ( v84 ) /*0x140c960fe*/
                    sub_140001660(*(_QWORD *)(v31 + 7360), v84, 1); /*0x140c9610d*/
                  v85 = *(_QWORD *)(v31 + 7384); /*0x140c96112*/
                  if ( v85 ) /*0x140c9611c*/
                    sub_140001660(*(_QWORD *)(v31 + 7392), v85, 1); /*0x140c9612b*/
                  v86 = *(_QWORD *)(v31 + 7416); /*0x140c96130*/
                  if ( v86 ) /*0x140c9613a*/
                    sub_140001660(*(_QWORD *)(v31 + 7424), v86, 1); /*0x140c96149*/
                  v87 = *(_QWORD *)(v31 + 7448); /*0x140c9614e*/
                  if ( v87 ) /*0x140c96158*/
                    sub_140001660(*(_QWORD *)(v31 + 7456), v87, 1); /*0x140c96167*/
                  v88 = *(_QWORD *)(v31 + 7480); /*0x140c9616c*/
                  if ( v88 ) /*0x140c96176*/
                    sub_140001660(*(_QWORD *)(v31 + 7488), v88, 1); /*0x140c96185*/
                  v89 = *(_QWORD *)(v31 + 7512); /*0x140c9618a*/
                  if ( v89 ) /*0x140c96194*/
                    sub_140001660(*(_QWORD *)(v31 + 7520), v89, 1); /*0x140c961a3*/
                  v90 = *(_QWORD *)(v31 + 7544); /*0x140c961a8*/
                  if ( v90 ) /*0x140c961b2*/
                    sub_140001660(*(_QWORD *)(v31 + 7552), v90, 1); /*0x140c961c1*/
                  v91 = *(_QWORD *)(v31 + 7576); /*0x140c961c6*/
                  if ( v91 ) /*0x140c961d0*/
                    sub_140001660(*(_QWORD *)(v31 + 7584), v91, 1); /*0x140c961df*/
                  v92 = *(_QWORD *)(v31 + 7608); /*0x140c961e4*/
                  if ( v92 ) /*0x140c961ee*/
                    sub_140001660(*(_QWORD *)(v31 + 7616), v92, 1); /*0x140c961fd*/
                  v93 = *(_QWORD *)(v31 + 7640); /*0x140c96202*/
                  if ( v93 ) /*0x140c9620c*/
                    sub_140001660(*(_QWORD *)(v31 + 7648), v93, 1); /*0x140c9621b*/
                  v94 = *(_QWORD *)(v31 + 7672); /*0x140c96220*/
                  if ( v94 ) /*0x140c9622a*/
                    sub_140001660(*(_QWORD *)(v31 + 7680), v94, 1); /*0x140c96239*/
                  v95 = *(_QWORD *)(v31 + 7704); /*0x140c9623e*/
                  if ( v95 ) /*0x140c96248*/
                    sub_140001660(*(_QWORD *)(v31 + 7712), v95, 1); /*0x140c96257*/
                  goto LABEL_117; /*0x140c96257*/
                }
                v150 = v29; /*0x140c96485*/
                sub_141684120(v151, v146, 448); /*0x140c964a0*/
                v147[0] = v55; /*0x140c964a5*/
                v147[1] = v57; /*0x140c964ac*/
                v147[2] = v23; /*0x140c964b3*/
                v148 = v56; /*0x140c964ba*/
                *(_DWORD *)v149 = v181[0]; /*0x140c964cc*/
                *(_DWORD *)&v149[3] = *(_DWORD *)((char *)v181 + 3); /*0x140c964d2*/
                v189 = v195; /*0x140c964df*/
                v188 = v61; /*0x140c964e6*/
                sub_140ACAD30(&v162, v147); /*0x140c964fb*/
                v191 = *((_QWORD **)&v162 + 1); /*0x140c9650f*/
                v96 = v162; /*0x140c9650f*/
                v187 = (char *)v163; /*0x140c9651d*/
                LOBYTE(v23) = BYTE8(v163); /*0x140c96524*/
                v101 = HIBYTE(v163); /*0x140c9652c*/
                v102 = *(unsigned __int16 *)((char *)&v163 + 13); /*0x140c96533*/
                v103 = *(unsigned int *)((char *)&v163 + 9); /*0x140c9653a*/
                v29 = v164; /*0x140c96540*/
                sub_141684120(v145, (char *)&v164 + 8, 528); /*0x140c9655b*/
                v58 = v194; /*0x140c96560*/
                v104 = *(_QWORD *)(v194 + 6776); /*0x140c96567*/
                if ( v104 ) /*0x140c96571*/
                  sub_140001660(*(_QWORD *)(v194 + 6784), v104, 1); /*0x140c96580*/
                v105 = *(_QWORD *)(v58 + 6808); /*0x140c96585*/
                if ( v105 ) /*0x140c9658f*/
                  sub_140001660(*(_QWORD *)(v58 + 6816), v105, 1); /*0x140c9659e*/
                v106 = *(_QWORD *)(v58 + 6840); /*0x140c965a3*/
                if ( v106 ) /*0x140c965ad*/
                  sub_140001660(*(_QWORD *)(v58 + 6848), v106, 1); /*0x140c965bc*/
                v107 = *(_QWORD *)(v58 + 6872); /*0x140c965c1*/
                if ( v107 ) /*0x140c965cb*/
                  sub_140001660(*(_QWORD *)(v58 + 6880), v107, 1); /*0x140c965da*/
                v108 = *(_QWORD *)(v58 + 6904); /*0x140c965df*/
                if ( v108 ) /*0x140c965e9*/
                  sub_140001660(*(_QWORD *)(v58 + 6912), v108, 1); /*0x140c965f8*/
                v109 = *(_QWORD *)(v58 + 7736); /*0x140c965fd*/
                if ( v109 != -1 && v109 ) /*0x140c9660d*/
                  sub_140001660(*(_QWORD *)(v58 + 7744), v109, 1); /*0x140c9661c*/
                v110 = *(_QWORD *)(v58 + 6936); /*0x140c96621*/
                if ( v110 ) /*0x140c9662b*/
                  sub_140001660(*(_QWORD *)(v58 + 6944), v110, 1); /*0x140c9663a*/
                v111 = *(_QWORD *)(v58 + 6968); /*0x140c9663f*/
                if ( v111 ) /*0x140c96649*/
                  sub_140001660(*(_QWORD *)(v58 + 6976), v111, 1); /*0x140c96658*/
                v112 = *(_QWORD *)(v58 + 7032); /*0x140c9665d*/
                if ( v112 ) /*0x140c96667*/
                  sub_140001660(*(_QWORD *)(v58 + 7040), v112, 1); /*0x140c96676*/
                v113 = *(_QWORD *)(v58 + 7064); /*0x140c9667b*/
                if ( v113 ) /*0x140c96685*/
                  sub_140001660(*(_QWORD *)(v58 + 7072), v113, 1); /*0x140c96694*/
                v114 = *(_QWORD *)(v58 + 7096); /*0x140c96699*/
                if ( v114 ) /*0x140c966a3*/
                  sub_140001660(*(_QWORD *)(v58 + 7104), v114, 1); /*0x140c966b2*/
                v115 = *(_QWORD *)(v58 + 7128); /*0x140c966b7*/
                if ( v115 ) /*0x140c966c1*/
                  sub_140001660(*(_QWORD *)(v58 + 7136), v115, 1); /*0x140c966d0*/
                v116 = *(_QWORD *)(v58 + 7160); /*0x140c966d5*/
                if ( v116 ) /*0x140c966df*/
                  sub_140001660(*(_QWORD *)(v58 + 7168), v116, 1); /*0x140c966ee*/
                v117 = *(_QWORD *)(v58 + 7192); /*0x140c966f3*/
                if ( v117 ) /*0x140c966fd*/
                  sub_140001660(*(_QWORD *)(v58 + 7200), v117, 1); /*0x140c9670c*/
                v118 = *(_QWORD *)(v58 + 7256); /*0x140c96711*/
                if ( v118 ) /*0x140c9671b*/
                  sub_140001660(*(_QWORD *)(v58 + 7264), v118, 1); /*0x140c9672a*/
                v119 = *(_QWORD *)(v58 + 7288); /*0x140c9672f*/
                if ( v119 ) /*0x140c96739*/
                  sub_140001660(*(_QWORD *)(v58 + 7296), v119, 1); /*0x140c96748*/
                v120 = *(_QWORD *)(v58 + 7320); /*0x140c9674d*/
                if ( v120 ) /*0x140c96757*/
                  sub_140001660(*(_QWORD *)(v58 + 7328), v120, 1); /*0x140c96766*/
                v121 = *(_QWORD *)(v58 + 7352); /*0x140c9676b*/
                if ( v121 ) /*0x140c96775*/
                  sub_140001660(*(_QWORD *)(v58 + 7360), v121, 1); /*0x140c96784*/
                v122 = *(_QWORD *)(v58 + 7384); /*0x140c96789*/
                if ( v122 ) /*0x140c96793*/
                  sub_140001660(*(_QWORD *)(v58 + 7392), v122, 1); /*0x140c967a2*/
                v123 = *(_QWORD *)(v58 + 7416); /*0x140c967a7*/
                if ( v123 ) /*0x140c967b1*/
                  sub_140001660(*(_QWORD *)(v58 + 7424), v123, 1); /*0x140c967c0*/
                v124 = *(_QWORD *)(v58 + 7448); /*0x140c967c5*/
                if ( v124 ) /*0x140c967cf*/
                  sub_140001660(*(_QWORD *)(v58 + 7456), v124, 1); /*0x140c967de*/
                v125 = *(_QWORD *)(v58 + 7480); /*0x140c967e3*/
                if ( v125 ) /*0x140c967ed*/
                  sub_140001660(*(_QWORD *)(v58 + 7488), v125, 1); /*0x140c967fc*/
                v126 = *(_QWORD *)(v58 + 7512); /*0x140c96801*/
                if ( v126 ) /*0x140c9680b*/
                  sub_140001660(*(_QWORD *)(v58 + 7520), v126, 1); /*0x140c9681a*/
                v127 = *(_QWORD *)(v58 + 7544); /*0x140c9681f*/
                if ( v127 ) /*0x140c96829*/
                  sub_140001660(*(_QWORD *)(v58 + 7552), v127, 1); /*0x140c96838*/
                v128 = *(_QWORD *)(v58 + 7576); /*0x140c9683d*/
                if ( v128 ) /*0x140c96847*/
                  sub_140001660(*(_QWORD *)(v58 + 7584), v128, 1); /*0x140c96856*/
                v129 = *(_QWORD *)(v58 + 7608); /*0x140c9685b*/
                if ( v129 ) /*0x140c96865*/
                  sub_140001660(*(_QWORD *)(v58 + 7616), v129, 1); /*0x140c96874*/
                v130 = *(_QWORD *)(v58 + 7640); /*0x140c96879*/
                if ( v130 ) /*0x140c96883*/
                  sub_140001660(*(_QWORD *)(v58 + 7648), v130, 1); /*0x140c96892*/
                v131 = *(_QWORD *)(v58 + 7672); /*0x140c96897*/
                if ( v131 ) /*0x140c968a1*/
                  sub_140001660(*(_QWORD *)(v58 + 7680), v131, 1); /*0x140c968b0*/
                v132 = *(_QWORD *)(v58 + 7704); /*0x140c968b5*/
                if ( v132 ) /*0x140c968bf*/
                  sub_140001660(*(_QWORD *)(v58 + 7712), v132, 1); /*0x140c968ce*/
                *(_BYTE *)(v58 + 7777) = 0; /*0x140c968d3*/
                sub_141684120(&v152, v145, 528); /*0x140c968ef*/
                *(_BYTE *)(v58 + 7776) = 1; /*0x140c968f4*/
                if ( v96 != -1 ) /*0x140c96900*/
                {
                  v30 = ((unsigned __int64)((v101 << 16) | v102) << 32) | v103; /*0x140c9690f*/
                  v32 = v179; /*0x140c96912*/
                  goto LABEL_120; /*0x140c96919*/
                }
              }
              *(_BYTE *)(v58 + 7784) = 3; /*0x140c95b9c*/
              *(_BYTE *)(v58 + 7792) = 3; /*0x140c95ba4*/
              v59 = 3; /*0x140c95bac*/
              result = 1; /*0x140c95bae*/
              goto LABEL_202; /*0x140c95bb0*/
            }
          }
          else
          {
            LODWORD(v191) = 0; /*0x140c95798*/
            v20 = (char *)Address; /*0x140c957a2*/
            if ( !*((_BYTE *)Address + 1) ) /*0x140c957b0*/
              goto LABEL_30; /*0x140c957b0*/
          }
          v155 = nullptr; /*0x140c957b6*/
          v156 = 1; /*0x140c957c1*/
          v157 = 0; /*0x140c957cc*/
          *(_QWORD *)&v163 = 1610612768; /*0x140c957d7*/
          *(_QWORD *)&v162 = &v155; /*0x140c957e9*/
          *((_QWORD *)&v162 + 1) = &off_1417C41C0; /*0x140c957f7*/
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v162) ) /*0x140c95811*/
            sub_1416C3060( /*0x140c96c1c*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v197,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v22 = v155; /*0x140c9581f*/
          v20 = (char *)v156; /*0x140c95826*/
          LODWORD(v23) = (unsigned __int8)v157; /*0x140c9582d*/
          v24 = HIBYTE(v157); /*0x140c95835*/
          v25 = *(unsigned __int16 *)((char *)&v157 + 5); /*0x140c9583d*/
          v26 = *(unsigned int *)((char *)&v157 + 1); /*0x140c95845*/
          if ( !(_BYTE)v191 ) /*0x140c95852*/
          {
            if ( 2 * *v19 ) /*0x140c95857*/
            {
              v186 = v195; /*0x140c96d48*/
              v185 = v193; /*0x140c96d56*/
              v191 = v155; /*0x140c96d5d*/
              v187 = (char *)v156; /*0x140c96d64*/
              v143 = sub_1416C2250(v21, v155); /*0x140c96d6b*/
              v20 = v187; /*0x140c96d70*/
              v22 = v191; /*0x140c96d77*/
              if ( !v143 ) /*0x140c96d80*/
                *((_BYTE *)Address + 1) = 1; /*0x140c96d8d*/
            }
          }
          v27 = Address; /*0x140c95865*/
          v28 = *(_BYTE *)Address; /*0x140c9586c*/
          *(_BYTE *)Address = 0; /*0x140c9586c*/
          if ( v28 == 2 ) /*0x140c95870*/
          {
            v186 = v195; /*0x140c96c2e*/
            v185 = v193; /*0x140c96c3c*/
            v187 = v20; /*0x140c96c43*/
            v191 = v22; /*0x140c96c4a*/
            WakeByAddressSingle(v27); /*0x140c96c51*/
            v20 = v187; /*0x140c96c56*/
            v22 = v191; /*0x140c96c5d*/
          }
          if ( v22 == (_QWORD *)-1LL ) /*0x140c9587a*/
          {
            LODWORD(v191) = v23; /*0x140c959db*/
            goto LABEL_30; /*0x140c959db*/
          }
          v187 = v20; /*0x140c95880*/
          v191 = v22; /*0x140c95887*/
          v29 = (unsigned __int64)((v24 << 16) | v25) << 32; /*0x140c95895*/
          v30 = v29 | v26; /*0x140c95899*/
          v31 = v194; /*0x140c9589c*/
          v32 = v179; /*0x140c958a3*/
          v33 = v195; /*0x140c958aa*/
LABEL_117:
          if ( ((v33 != 0) & *(_BYTE *)(v31 + 7777)) != 0 ) /*0x140c96268*/
            sub_140001660(v193, v33, 1); /*0x140c9627a*/
          *(_BYTE *)(v31 + 7777) = 0; /*0x140c9627f*/
          sub_141684120(&v152, v145, 528); /*0x140c9629a*/
          *(_BYTE *)(v31 + 7776) = 1; /*0x140c9629f*/
          v96 = 2; /*0x140c962a6*/
LABEL_120:
          sub_141684120(v144, &v152, 528); /*0x140c962ac*/
          sub_140BEAC10(v32); /*0x140c962c9*/
          v98 = v30 << 8; /*0x140c962d3*/
          if ( v96 != 2 ) /*0x140c962db*/
          {
            sub_141684120(v161, v144, 528); /*0x140c96310*/
            *(_QWORD *)v158 = v96; /*0x140c96315*/
            *(_QWORD *)&v158[8] = v191; /*0x140c96323*/
            *(_QWORD *)&v158[16] = v187; /*0x140c96331*/
            v159 = v98 | (unsigned __int8)v23; /*0x140c96338*/
            v160 = v29; /*0x140c9633f*/
            sub_140B06760(&v162, v158); /*0x140c96354*/
            v29 = ((unsigned __int64)((HIBYTE(v162) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v162 + 13)) << 32) /*0x140c9637f*/
                | *(unsigned int *)((char *)&v162 + 9);
            v10 = BYTE8(v162); /*0x140c96382*/
            v35 = *((_QWORD *)&v163 + 1); /*0x140c96391*/
            v34 = v163; /*0x140c96391*/
            v36 = v164; /*0x140c96398*/
            if ( (_QWORD)v162 == -1 ) /*0x140c963a3*/
            {
              v40 = 0; /*0x140c96991*/
            }
            else
            {
              HIBYTE(v162) = (((unsigned __int64)((HIBYTE(v162) << 16) /*0x140c963b7*/
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v162 + 13)) << 32)
                            | *(unsigned int *)((char *)&v162 + 9)) >> 48;
              *(_WORD *)((char *)&v162 + 13) = WORD2(v29); /*0x140c963c4*/
              *(_DWORD *)((char *)&v162 + 9) = v29; /*0x140c963cb*/
              v152 = 0; /*0x140c963fc*/
              v153 = 1; /*0x140c96407*/
              v154 = 0; /*0x140c96412*/
              v145[2] = 1610612768; /*0x140c9641d*/
              v145[0] = &v152; /*0x140c96428*/
              v145[1] = &off_1417C41C0; /*0x140c96436*/
              if ( (unsigned __int8)sub_141230630(&v162, v145, v100) ) /*0x140c9644b*/
                sub_1416C3060( /*0x140c96cd4*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v197,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v34 = v152; /*0x140c96459*/
              v35 = v153; /*0x140c96460*/
              v36 = v154; /*0x140c96467*/
              sub_140BF0F60(&v162); /*0x140c96475*/
              v40 = 1; /*0x140c9647b*/
              v10 = 3; /*0x140c9647d*/
            }
            v135 = v190; /*0x140c96993*/
            goto LABEL_195; /*0x140c96993*/
          }
          v36 = v98 | (unsigned __int8)v23; /*0x140c962dd*/
          if ( v98 < 0 ) /*0x140c962e3*/
          {
            v99 = 0; /*0x140c962e9*/
            goto LABEL_123; /*0x140c962e9*/
          }
          if ( v36 ) /*0x140c96921*/
          {
            nullsub_1(v97); /*0x140c96927*/
            v99 = 1; /*0x140c9692c*/
            v133 = sub_140001650(v36, 1); /*0x140c96939*/
            if ( !v133 ) /*0x140c96941*/
LABEL_123:
              sub_1416C2D4B(v99, v36); /*0x140c962eb*/
            v35 = v133; /*0x140c96947*/
            sub_141684120(v133, v187, v36); /*0x140c96957*/
            v134 = v191; /*0x140c9695c*/
            v135 = v190; /*0x140c96966*/
            if ( !v191 ) /*0x140c9696d*/
              goto LABEL_192; /*0x140c9696d*/
          }
          else
          {
            v35 = 1; /*0x140c96b68*/
            v134 = v191; /*0x140c96b6d*/
            v135 = v190; /*0x140c96b77*/
            if ( !v191 ) /*0x140c96b7e*/
              goto LABEL_192; /*0x140c96b7e*/
          }
          v136 = v135; /*0x140c96975*/
          sub_140001660(v187, v134, 1); /*0x140c9697f*/
          v135 = v136; /*0x140c96984*/
LABEL_192:
          v40 = 1; /*0x140c96987*/
          v10 = 3; /*0x140c96989*/
          v34 = v36; /*0x140c9698c*/
LABEL_195:
          *(_BYTE *)v180 = 1; /*0x140c9699a*/
          sub_140BF0DE0(v135); /*0x140c969a4*/
          v41 = v194; /*0x140c969aa*/
          if ( *(_QWORD *)(v194 + 4616) != -1 ) /*0x140c969b9*/
          {
            v180 = (_QWORD *)(v194 + 4624); /*0x140c969c6*/
            v137 = *(char **)(v194 + 4624); /*0x140c969cd*/
            v193 = *(_QWORD *)(v194 + 4632); /*0x140c969db*/
            v195 = 0; /*0x140c969e2*/
            Address = v137; /*0x140c969ed*/
            while ( v193 != v195 ) /*0x140c96a0e*/
            {
              ++v195; /*0x140c96a13*/
              v138 = v137 + 96; /*0x140c96a1a*/
              sub_1402C7520(); /*0x140c96a1e*/
              v137 = v138; /*0x140c96a24*/
            }
            v41 = v194; /*0x140c96a29*/
            v39 = *(_QWORD *)(v194 + 4616); /*0x140c96a30*/
            if ( v39 ) /*0x140c96a3a*/
LABEL_200:
              sub_140001660(*v180, 96 * v39, 8); /*0x140c96a3c*/
          }
LABEL_201:
          *(_BYTE *)(v41 + 7792) = 1; /*0x140c96a59*/
          sub_140BE0B40(v190); /*0x140c96a68*/
          v170 = v29; /*0x140c96a6e*/
          v172 = BYTE6(v29); /*0x140c96a7c*/
          v171 = WORD2(v29); /*0x140c96a86*/
          v174 = v35; /*0x140c96a8e*/
          v175 = v36; /*0x140c96a95*/
          v169 = v10; /*0x140c96a9f*/
          v173 = v34; /*0x140c96aa6*/
          v168 = v40; /*0x140c96aad*/
          v139 = v194; /*0x140c96ab4*/
          *(_BYTE *)(v194 + 7811) = 0; /*0x140c96abb*/
          sub_141684120(&v162, v139, 360); /*0x140c96ad5*/
          *(_BYTE *)(v139 + 7810) = 0; /*0x140c96ada*/
          v140 = *(_QWORD *)(v139 + 384); /*0x140c96ae1*/
          *(_BYTE *)(v139 + 7809) = 0; /*0x140c96ae8*/
          *(_QWORD *)&v158[16] = *(_QWORD *)(v139 + 376); /*0x140c96af6*/
          *(_OWORD *)v158 = *(_OWORD *)(v139 + 360); /*0x140c96b04*/
          sub_14047E370( /*0x140c96b30*/
            (unsigned int)&v162,
            v140,
            (unsigned int)&v168,
            (unsigned int)v158,
            *(_DWORD *)(v139 + 7800),
            *(_DWORD *)(v139 + 7804));
          v59 = 1; /*0x140c96b36*/
          result = 0; /*0x140c96b38*/
          v58 = v194; /*0x140c96b3a*/
LABEL_202:
          *(_BYTE *)(v58 + 7808) = v59; /*0x140c96b41*/
          return result;
        case 1: /*0x140c95732*/
LABEL_221:
          sub_1416C3400(&off_1417BB120, v15, a3, a4); /*0x140c96e27*/
        case 2: /*0x140c95732*/
LABEL_220:
          sub_1416C3420(&off_1417BB120, v15, a3, a4); /*0x140c96e18*/
        case 3: /*0x140c95732*/
          goto LABEL_44;
      }
  }
}

// --- refs (first 60) ---
//   ref: 0x141684120 sub_141684120 
//   ref: 0x1416c3400 sub_1416C3400 
//   ref: 0x1417b7c00 off_1417B7C00 
//   ref: 0x1416c3420 sub_1416C3420 
//   ref: 0x1417b98dc aRestoreSkillBa restore_skill_backup
//   ref: 0x1417b9798 aRepo_0 repo
//   ref: 0x140003640 sub_140003640 
//   ref: 0x1416850a0 sub_1416850A0 
//   ref: 0x1417b98da aId_8 id
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
//   ref: 0x140899b80 sub_140899B80 
//   ref: 0x1417642a8 off_1417642A8 
//   ref: 0x141764290 off_141764290 
//   ref: 0x140b01670 sub_140B01670 
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
//   ref: 0x140acad30 sub_140ACAD30 
//   ref: 0x1414acab0 sub_1414ACAB0 
//   ref: 0x141753898 aPoisonedLockAn poisoned lock: another task failed inside
//   ref: 0x140beac10 sub_140BEAC10 
//   ref: 0x140b06760 sub_140B06760 
//   ref: 0x140001690 nullsub_1 
//   ref: 0x140001650 sub_140001650 
//   ref: 0x1416c2d4b sub_1416C2D4B 
//   ref: 0x140be0b40 sub_140BE0B40 
//   ref: 0x14047e370 sub_14047E370 
//   ref: 0x1417bb120 off_1417BB120 
