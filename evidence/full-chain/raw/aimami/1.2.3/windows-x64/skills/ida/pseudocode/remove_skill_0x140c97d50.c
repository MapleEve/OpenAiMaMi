// module: codexmate_lib (tauri command handler, src/lib.rs command-name xref)
// win 1.2.3 IDB (AiMaMi.1.2.3 win64.exe) live py_eval/decompile this session
// tauri command handler = remove_skill | mapped via command-name string xref (win-native, ground-truth)
// NOTE: newly captured this session; not previously in raw/; not yet dirtree-moved.
// addr: 0x140c97d50
// name: remove_skill
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = remove_skill | mapped via command-name string xref (win-native, ground-truth)
char __fastcall remove_skill(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 *v18; // r15
  char *v19; // rdi
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  int v22; // ebx
  int v23; // r13d
  unsigned int v24; // r12d
  __int64 v25; // r14
  PVOID v26; // rcx
  char v27; // al
  unsigned __int64 v28; // r14
  __int64 v29; // rsi
  _QWORD *v30; // r15
  char *v31; // r13
  unsigned __int64 v32; // r12
  unsigned __int8 v33; // di
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
  __int64 v56; // r14
  char v57; // bl
  unsigned __int64 v58; // r15
  __int64 v59; // r12
  __int64 v60; // r13
  _QWORD *v61; // r13
  __int64 v62; // rsi
  __int64 v63; // r8
  int v64; // ebx
  unsigned int v65; // esi
  __int64 v66; // r14
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
  __int64 v96; // rsi
  __int64 v97; // rcx
  __int64 v98; // r14
  __int64 v99; // r8
  __int64 v100; // rbx
  int v101; // r12d
  unsigned int v102; // ebx
  __int64 v103; // r14
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
  char v133; // cl
  char result; // al
  __int64 v135; // rcx
  __int64 v136; // rax
  _QWORD *v137; // rdx
  __int64 v138; // rbx
  _QWORD *v139; // rcx
  _QWORD *v140; // r13
  __int64 v141; // rdi
  __int64 v142; // rdx
  int v143; // eax
  _QWORD *v144; // rdi
  char v145; // al
  _BYTE v146[224]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v147[28]; // [rsp+118h] [rbp+98h] BYREF
  _OWORD v148[9]; // [rsp+1F8h] [rbp+178h] BYREF
  _QWORD v149[3]; // [rsp+288h] [rbp+208h] BYREF
  char v150; // [rsp+2A0h] [rbp+220h]
  _BYTE v151[7]; // [rsp+2A1h] [rbp+221h]
  __int64 v152; // [rsp+2A8h] [rbp+228h]
  char v153[144]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v154; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v155; // [rsp+348h] [rbp+2C8h]
  __int64 v156; // [rsp+350h] [rbp+2D0h]
  _BYTE v157[24]; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v158; // [rsp+438h] [rbp+3B8h]
  _QWORD *v159; // [rsp+440h] [rbp+3C0h]
  char v160[232]; // [rsp+448h] [rbp+3C8h] BYREF
  _QWORD *v161; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v162; // [rsp+538h] [rbp+4B8h]
  __int64 v163; // [rsp+540h] [rbp+4C0h]
  __int64 v164; // [rsp+5C0h] [rbp+540h] BYREF
  char v165; // [rsp+5C8h] [rbp+548h]
  int v166; // [rsp+5C9h] [rbp+549h]
  __int16 v167; // [rsp+5CDh] [rbp+54Dh]
  char v168; // [rsp+5CFh] [rbp+54Fh]
  __int64 v169; // [rsp+5D0h] [rbp+550h]
  __int64 v170; // [rsp+5D8h] [rbp+558h]
  __int64 v171; // [rsp+5E0h] [rbp+560h]
  __int64 v172; // [rsp+5E8h] [rbp+568h]
  __int128 v173; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v174; // [rsp+600h] [rbp+580h] BYREF
  __int128 v175; // [rsp+610h] [rbp+590h] BYREF
  __int128 v176; // [rsp+620h] [rbp+5A0h]
  __int128 v177; // [rsp+630h] [rbp+5B0h]
  __int128 v178; // [rsp+640h] [rbp+5C0h]
  __int64 v179; // [rsp+760h] [rbp+6E0h]
  __int64 v180; // [rsp+768h] [rbp+6E8h]
  __int64 v181; // [rsp+770h] [rbp+6F0h]
  __int64 v182; // [rsp+778h] [rbp+6F8h]
  _QWORD *v183; // [rsp+780h] [rbp+700h]
  _DWORD v184[2]; // [rsp+788h] [rbp+708h]
  _QWORD *v185; // [rsp+790h] [rbp+710h] BYREF
  __int64 v186; // [rsp+798h] [rbp+718h]
  __int64 v187; // [rsp+7A0h] [rbp+720h]
  _QWORD *v188; // [rsp+7A8h] [rbp+728h]
  char *v189; // [rsp+7B0h] [rbp+730h]
  _QWORD *v190; // [rsp+7B8h] [rbp+738h]
  char *v191; // [rsp+7C0h] [rbp+740h]
  __int64 v192; // [rsp+7C8h] [rbp+748h]
  PVOID Address; // [rsp+7D0h] [rbp+750h]
  _QWORD *v194; // [rsp+7D8h] [rbp+758h]
  __int64 v195; // [rsp+7E0h] [rbp+760h]
  _QWORD *v196; // [rsp+7E8h] [rbp+768h]
  char v197; // [rsp+7F6h] [rbp+776h]
  char v198; // [rsp+7F7h] [rbp+777h] BYREF
  char *v199; // [rsp+7F8h] [rbp+778h]
  __int64 v200; // [rsp+800h] [rbp+780h]

  v200 = -2; /*0x140c97d6b*/
  v5 = a1; /*0x140c97d79*/
  v6 = *(unsigned __int8 *)(a1 + 7808); /*0x140c97d7c*/
  v195 = a1; /*0x140c97d91*/
  switch ( v6 ) /*0x140c97d98*/
  {
    case 0LL: /*0x140c97d98*/
      *(_WORD *)(a1 + 7809) = 257; /*0x140c97d9a*/
      *(_BYTE *)(a1 + 7811) = 1; /*0x140c97da4*/
      v7 = a1 + 4096; /*0x140c97db3*/
      sub_141684120(a1 + 4096, a1 + 392, 3704); /*0x140c97dc3*/
      switch ( *(_BYTE *)(v5 + 7792) ) /*0x140c97dde*/
      {
        case 0: /*0x140c97dde*/
          goto LABEL_4;
        case 1: /*0x140c97dde*/
          goto LABEL_219;
        case 2: /*0x140c97dde*/
          goto LABEL_218;
        case 3: /*0x140c97dde*/
          goto LABEL_7;
      }
    case 1LL: /*0x140c97d98*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140c99692*/
    case 2LL: /*0x140c97d98*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140c99684*/
    case 3LL: /*0x140c97d98*/
      v7 = a1 + 4096; /*0x140c97de0*/
      switch ( *(_BYTE *)(a1 + 7792) ) /*0x140c97dfd*/
      {
        case 0: /*0x140c97dfd*/
LABEL_4:
          v8 = v5 + 4616; /*0x140c97dff*/
          *(_QWORD *)&v176 = 0; /*0x140c97e06*/
          *(_QWORD *)&v173 = aRemoveSkill; /*0x140c97e18*/
          *((_QWORD *)&v173 + 1) = 12; /*0x140c97e1f*/
          *(_QWORD *)&v174 = aRepo_0; /*0x140c97e31*/
          *((_QWORD *)&v174 + 1) = 4; /*0x140c97e38*/
          v192 = v7; /*0x140c97e43*/
          *(_QWORD *)&v175 = v7; /*0x140c97e4a*/
          *((_QWORD *)&v175 + 1) = v5 + 4616; /*0x140c97e51*/
          v9 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4608) + 16LL)); /*0x140c97e69*/
          v196 = (_QWORD *)(v5 + 4616); /*0x140c97e6f*/
          if ( v9 ) /*0x140c97e76*/
            goto LABEL_5; /*0x140c97e76*/
          sub_1416850A0(v157, &v173, &v174); /*0x140c98199*/
          v10 = v157[0]; /*0x140c9819f*/
          if ( v157[0] == 0xFF ) /*0x140c981ab*/
          {
            v9 = *(_QWORD *)&v157[8]; /*0x140c9940c*/
LABEL_5:
            *(_QWORD *)&v176 = 0; /*0x140c97e7c*/
            *(_QWORD *)&v173 = aRemoveSkill; /*0x140c97e8e*/
            *((_QWORD *)&v173 + 1) = 12; /*0x140c97e95*/
            *(_QWORD *)&v174 = aId_8; /*0x140c97ea7*/
            *((_QWORD *)&v174 + 1) = 2; /*0x140c97eae*/
            *(_QWORD *)&v175 = v192; /*0x140c97eb9*/
            *((_QWORD *)&v175 + 1) = v8; /*0x140c97ec0*/
            sub_1409757B0(v157, &v173); /*0x140c97ed5*/
            v10 = v157[0]; /*0x140c97edb*/
            if ( v157[0] == 0xFF ) /*0x140c97ee7*/
            {
              v11 = v158; /*0x140c97eed*/
              v5 = v195; /*0x140c97ef4*/
              v12 = v195 + 4640; /*0x140c97efb*/
              v13 = *(_OWORD *)&v157[8]; /*0x140c97f02*/
              *(_QWORD *)(v195 + 4664) = v9; /*0x140c97f09*/
              *(_OWORD *)(v5 + 4640) = v13; /*0x140c97f10*/
              *(_QWORD *)(v5 + 4656) = v11; /*0x140c97f18*/
              *(_BYTE *)(v5 + 5680) = 0; /*0x140c97f1f*/
              v14 = v5 + 5688; /*0x140c97f27*/
              sub_141684120(v5 + 5688, v12, 1048); /*0x140c97f37*/
              v183 = (_QWORD *)(v5 + 7784); /*0x140c97f43*/
              *(_BYTE *)(v5 + 7784) = 0; /*0x140c97f4a*/
              v7 = v192; /*0x140c97f52*/
LABEL_8:
              v192 = v7; /*0x140c97f88*/
              v182 = v5 + 6736; /*0x140c97f9c*/
              v179 = v14; /*0x140c97fa3*/
              sub_141684120(v5 + 6736, v14, 1048); /*0x140c97fad*/
              switch ( *(_BYTE *)(v5 + 7776) ) /*0x140c97fc8*/
              {
                case 0: /*0x140c97fc8*/
                  goto LABEL_10;
                case 1: /*0x140c97fc8*/
                  goto LABEL_221;
                case 2: /*0x140c97fc8*/
                  goto LABEL_220;
                case 3: /*0x140c97fc8*/
                  goto LABEL_44;
              }
            }
          }
          v32 = ((unsigned __int64)((v157[7] << 16) | (unsigned int)*(unsigned __int16 *)&v157[5]) << 32) /*0x140c981cf*/
              | *(unsigned int *)&v157[1];
          v34 = *(_QWORD *)&v157[8]; /*0x140c981d2*/
          v35 = *(_QWORD *)&v157[16]; /*0x140c981d9*/
          v36 = v158; /*0x140c981e0*/
          sub_140BF0DE0(v192); /*0x140c981ee*/
          if ( *v196 == -1 ) /*0x140c981ff*/
          {
            v40 = 1; /*0x140c9829a*/
            v41 = v195; /*0x140c9829c*/
            goto LABEL_200; /*0x140c982a3*/
          }
          v183 = (_QWORD *)(v195 + 4624); /*0x140c98213*/
          v37 = *(_QWORD *)(v195 + 4624); /*0x140c9821a*/
          Address = *(PVOID *)(v195 + 4632); /*0x140c98228*/
          v199 = nullptr; /*0x140c9822f*/
          v182 = v37; /*0x140c9823a*/
          while ( Address != v199 ) /*0x140c9825e*/
          {
            ++v199; /*0x140c98263*/
            v38 = v37 + 96; /*0x140c9826a*/
            sub_1402C7520(); /*0x140c9826e*/
            v37 = v38; /*0x140c98274*/
          }
          v39 = *v196; /*0x140c98280*/
          v40 = 1; /*0x140c98283*/
          v41 = v195; /*0x140c98288*/
          if ( !*v196 ) /*0x140c98280*/
            goto LABEL_200; /*0x140c9828f*/
          goto LABEL_199; /*0x140c9828f*/
        case 1: /*0x140c97dfd*/
LABEL_219:
          v192 = v7; /*0x140c996af*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140c996bd*/
        case 2: /*0x140c97dfd*/
LABEL_218:
          v192 = v7; /*0x140c99699*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140c996a7*/
        case 3: /*0x140c97dfd*/
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = v5 + 7784; /*0x140c97f5b*/
  v16 = *(unsigned __int8 *)(v5 + 7784); /*0x140c97f62*/
  v14 = v5 + 5688; /*0x140c97f6a*/
  v183 = (_QWORD *)(v5 + 7784); /*0x140c97f7f*/
  switch ( v16 ) /*0x140c97f86*/
  {
    case 0LL: /*0x140c97f86*/
      goto LABEL_8;
    case 1LL: /*0x140c97f86*/
      v192 = v7; /*0x140c99707*/
      v181 = v5 + 7784; /*0x140c9970e*/
      v180 = v5 + 5688; /*0x140c99715*/
      sub_1416C3400(&off_1417B7B80, v15, a3, a4); /*0x140c99723*/
    case 2LL: /*0x140c97f86*/
      v192 = v7; /*0x140c996e3*/
      v181 = v5 + 7784; /*0x140c996ea*/
      v180 = v5 + 5688; /*0x140c996f1*/
      sub_1416C3420(&off_1417B7B80, v15, a3, a4); /*0x140c996ff*/
    case 3LL: /*0x140c97f86*/
      v179 = v5 + 5688; /*0x140c97fca*/
      v192 = v7; /*0x140c97fd1*/
      v182 = v5 + 6736; /*0x140c97fdf*/
      switch ( *(_BYTE *)(v5 + 7776) ) /*0x140c97ffc*/
      {
        case 0: /*0x140c97ffc*/
LABEL_10:
          v17 = *(volatile void **)(v5 + 6760); /*0x140c97ffe*/
          *(_QWORD *)(v5 + 6768) = v17; /*0x140c98005*/
          *(_BYTE *)(v5 + 7777) = 1; /*0x140c9800c*/
          v199 = *(char **)(v5 + 6736); /*0x140c9801b*/
          v196 = *(_QWORD **)(v5 + 6744); /*0x140c98029*/
          v172 = *(_QWORD *)(v5 + 6752); /*0x140c98037*/
          LOBYTE(a1) = 1; /*0x140c9803e*/
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v17, 1, 0) ) /*0x140c98042*/
          {
            v189 = v199; /*0x140c9945a*/
            v188 = v196; /*0x140c99468*/
            sub_1416C15B0(v17); /*0x140c99472*/
          }
          Address = (PVOID)v17; /*0x140c9804c*/
          v18 = off_141EC90B8; /*0x140c98053*/
          if ( 2 * *off_141EC90B8 ) /*0x140c9805d*/
          {
            v189 = v199; /*0x140c99484*/
            v188 = v196; /*0x140c99492*/
            v143 = sub_1416C2250(a1, v15); /*0x140c99499*/
            LOBYTE(v143) = v143 ^ 1; /*0x140c9949f*/
            LODWORD(v194) = v143; /*0x140c994a1*/
            v19 = (char *)Address; /*0x140c994a7*/
            if ( !*((_BYTE *)Address + 1) ) /*0x140c994ae*/
            {
LABEL_30:
              Address = v19; /*0x140c982b0*/
              sub_1407BC950(v195 + 6776, v19 + 8); /*0x140c982c9*/
              if ( ((unsigned __int8)v194 & 1) == 0 ) /*0x140c982d6*/
              {
                if ( 2 * *v18 ) /*0x140c982db*/
                {
                  v189 = v199; /*0x140c9964a*/
                  v188 = v196; /*0x140c99658*/
                  if ( !(unsigned __int8)sub_1416C2250(v43, v42) ) /*0x140c9965f*/
                    *((_BYTE *)Address + 1) = 1; /*0x140c99674*/
                }
              }
              v44 = Address; /*0x140c982e9*/
              v45 = *(_BYTE *)Address; /*0x140c982f0*/
              *(_BYTE *)Address = 0; /*0x140c982f0*/
              if ( v45 == 2 ) /*0x140c982f4*/
              {
                v189 = v199; /*0x140c9952b*/
                v188 = v196; /*0x140c99539*/
                WakeByAddressSingle(v44); /*0x140c99540*/
              }
              v46 = v195; /*0x140c982fa*/
              *(_BYTE *)(v195 + 7777) = 0; /*0x140c98301*/
              v47 = *(_OWORD *)(v46 + 7000); /*0x140c98308*/
              v174 = *(_OWORD *)(v46 + 7016); /*0x140c98316*/
              v173 = v47; /*0x140c9831d*/
              v48 = *(_OWORD *)(v46 + 7224); /*0x140c98324*/
              v176 = *(_OWORD *)(v46 + 7240); /*0x140c98332*/
              v175 = v48; /*0x140c98339*/
              *(_QWORD *)&v177 = v199; /*0x140c98347*/
              *((_QWORD *)&v177 + 1) = v196; /*0x140c98355*/
              *(_QWORD *)&v178 = v172; /*0x140c98363*/
              v49 = off_141EC8710; /*0x140c9836a*/
              if ( *((_DWORD *)off_141EC8710 + 24) ) /*0x140c98371*/
              {
                v197 = 1; /*0x140c9954b*/
                v144 = off_141EC8710; /*0x140c99559*/
                sub_1416984A3(off_141EC8710); /*0x140c9955c*/
                v49 = v144; /*0x140c99561*/
              }
              if ( *((_DWORD *)v49 + 4) == 2 ) /*0x140c98380*/
              {
                v50 = 704; /*0x140c9838a*/
                if ( *(_BYTE *)v49 ) /*0x140c98382*/
                  v50 = 472; /*0x140c9838f*/
                v51 = v49[1] + v50; /*0x140c98393*/
                v197 = 0; /*0x140c98397*/
                v52 = sub_1408992A0(v51, v49, &v173, &off_1417642A8); /*0x140c983ac*/
              }
              else
              {
                v53 = 704; /*0x140c983bd*/
                if ( *((_BYTE *)v49 + 64) ) /*0x140c983b4*/
                  v53 = 472; /*0x140c983c2*/
                v54 = v49[9] + v53; /*0x140c983ca*/
                v197 = 0; /*0x140c983ce*/
                v52 = sub_1408992A0(v54, v49 + 8, &v173, &off_141764290); /*0x140c983e6*/
              }
              v5 = v195; /*0x140c983ec*/
              *(_QWORD *)(v195 + 7768) = v52; /*0x140c983f3*/
LABEL_44:
              Address = (PVOID)(v5 + 7768); /*0x140c983fa*/
              sub_140B014B0(&v173, v5 + 7768, a2); /*0x140c98412*/
              v55 = v173; /*0x140c98418*/
              if ( (_QWORD)v173 == -3 ) /*0x140c98423*/
              {
                v60 = v195; /*0x140c98464*/
                *(_BYTE *)(v195 + 7776) = 3; /*0x140c9846b*/
              }
              else
              {
                if ( (_QWORD)v173 == -2 ) /*0x140c98429*/
                {
                  v56 = *((_QWORD *)&v173 + 1); /*0x140c9842b*/
                  v57 = v174; /*0x140c98432*/
                  LODWORD(v185) = *(_DWORD *)((char *)&v174 + 1); /*0x140c9843f*/
                  *(_DWORD *)((char *)&v185 + 3) = DWORD1(v174); /*0x140c9844b*/
                  v58 = 0x800000000000000CuLL; /*0x140c98451*/
                  v59 = *((_QWORD *)&v174 + 1); /*0x140c9845b*/
                }
                else
                {
                  v58 = *((_QWORD *)&v173 + 1); /*0x140c98478*/
                  v56 = v174; /*0x140c9847f*/
                  v57 = BYTE8(v174); /*0x140c98486*/
                  LODWORD(v185) = *(_DWORD *)((char *)&v174 + 9); /*0x140c98493*/
                  *(_DWORD *)((char *)&v185 + 3) = HIDWORD(v174); /*0x140c9849f*/
                  v59 = v175; /*0x140c984a5*/
                  sub_141684120(&v161, (char *)&v175 + 8, 144); /*0x140c984c0*/
                }
                v61 = v196; /*0x140c984c5*/
                v184[0] = (_DWORD)v185; /*0x140c984d8*/
                *(_DWORD *)((char *)v184 + 3) = *(_DWORD *)((char *)&v185 + 3); /*0x140c984de*/
                sub_141684120(v148, &v161, 144); /*0x140c984f8*/
                v62 = *(_QWORD *)Address; /*0x140c98504*/
                v191 = v199; /*0x140c9850e*/
                v190 = v61; /*0x140c98515*/
                if ( (unsigned __int8)sub_1412F2A80(v62) ) /*0x140c9851f*/
                {
                  v191 = v199; /*0x140c98530*/
                  v190 = v61; /*0x140c98537*/
                  sub_1412E7580(v62); /*0x140c98541*/
                }
                if ( v55 == -1 ) /*0x140c9854b*/
                {
                  *(_QWORD *)&v173 = v58; /*0x140c9865f*/
                  *((_QWORD *)&v173 + 1) = v56; /*0x140c98666*/
                  LOBYTE(v174) = v57; /*0x140c9866d*/
                  *(_DWORD *)((char *)&v174 + 1) = v184[0]; /*0x140c9867f*/
                  DWORD1(v174) = *(_DWORD *)((char *)v184 + 3); /*0x140c98685*/
                  *((_QWORD *)&v174 + 1) = v59; /*0x140c9868b*/
                  v175 = v148[0]; /*0x140c986ae*/
                  v176 = v148[1]; /*0x140c986b5*/
                  v177 = v148[2]; /*0x140c986bc*/
                  v178 = v148[3]; /*0x140c986c3*/
                  v185 = nullptr; /*0x140c986ca*/
                  v186 = 1; /*0x140c986d5*/
                  v187 = 0; /*0x140c986e0*/
                  v163 = 1610612768; /*0x140c986eb*/
                  v161 = &v185; /*0x140c986fd*/
                  v162 = (__int64)&off_1417C41C0; /*0x140c9870b*/
                  if ( (unsigned __int8)sub_140B036A0(&v173, &v161) ) /*0x140c98720*/
                    sub_1416C3060( /*0x140c995f1*/
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v198,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v194 = v185; /*0x140c98735*/
                  v32 = v186; /*0x140c9873c*/
                  v33 = v187; /*0x140c98743*/
                  v64 = HIBYTE(v187); /*0x140c9874a*/
                  v65 = *(unsigned __int16 *)((char *)&v187 + 5); /*0x140c98751*/
                  v66 = *(unsigned int *)((char *)&v187 + 1); /*0x140c98758*/
                  v191 = v199; /*0x140c98766*/
                  v30 = v196; /*0x140c9876d*/
                  v190 = v196; /*0x140c98774*/
                  sub_140BF2F60(&v173); /*0x140c98782*/
                  goto LABEL_57; /*0x140c98782*/
                }
                if ( v55 == -2 ) /*0x140c98555*/
                {
                  *(_QWORD *)&v173 = v58; /*0x140c9855b*/
                  *((_QWORD *)&v173 + 1) = v56; /*0x140c98562*/
                  LOBYTE(v174) = v57; /*0x140c98569*/
                  *(_DWORD *)((char *)&v174 + 1) = v184[0]; /*0x140c9857b*/
                  DWORD1(v174) = *(_DWORD *)((char *)v184 + 3); /*0x140c98581*/
                  *((_QWORD *)&v174 + 1) = v59; /*0x140c98587*/
                  v175 = v148[0]; /*0x140c98595*/
                  v185 = nullptr; /*0x140c9859c*/
                  v186 = 1; /*0x140c985a7*/
                  v187 = 0; /*0x140c985b2*/
                  v163 = 1610612768; /*0x140c985bd*/
                  v161 = &v185; /*0x140c985cf*/
                  v162 = (__int64)&off_1417C41C0; /*0x140c985dd*/
                  if ( (unsigned __int8)sub_141230630(&v173, &v161, v63) ) /*0x140c985f2*/
                    sub_1416C3060( /*0x140c995c0*/
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v198,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v194 = v185; /*0x140c98607*/
                  v32 = v186; /*0x140c9860e*/
                  v33 = v187; /*0x140c98615*/
                  v64 = HIBYTE(v187); /*0x140c9861c*/
                  v65 = *(unsigned __int16 *)((char *)&v187 + 5); /*0x140c98623*/
                  v66 = *(unsigned int *)((char *)&v187 + 1); /*0x140c9862a*/
                  v191 = v199; /*0x140c98638*/
                  v30 = v196; /*0x140c9863f*/
                  v190 = v196; /*0x140c98646*/
                  sub_140BF0F60(&v173); /*0x140c98654*/
LABEL_57:
                  v28 = ((unsigned __int64)((v64 << 16) | v65) << 32) | v66; /*0x140c98788*/
                  v29 = v195; /*0x140c98794*/
                  v67 = *(_QWORD *)(v195 + 6776); /*0x140c9879b*/
                  v31 = v199; /*0x140c987a5*/
                  if ( v67 ) /*0x140c987ac*/
                    sub_140001660(*(_QWORD *)(v195 + 6784), v67, 1); /*0x140c987bb*/
                  v68 = *(_QWORD *)(v29 + 6808); /*0x140c987c0*/
                  if ( v68 ) /*0x140c987ca*/
                    sub_140001660(*(_QWORD *)(v29 + 6816), v68, 1); /*0x140c987d9*/
                  v69 = *(_QWORD *)(v29 + 6840); /*0x140c987de*/
                  if ( v69 ) /*0x140c987e8*/
                    sub_140001660(*(_QWORD *)(v29 + 6848), v69, 1); /*0x140c987f7*/
                  v70 = *(_QWORD *)(v29 + 6872); /*0x140c987fc*/
                  if ( v70 ) /*0x140c98806*/
                    sub_140001660(*(_QWORD *)(v29 + 6880), v70, 1); /*0x140c98815*/
                  v71 = *(_QWORD *)(v29 + 6904); /*0x140c9881a*/
                  if ( v71 ) /*0x140c98824*/
                    sub_140001660(*(_QWORD *)(v29 + 6912), v71, 1); /*0x140c98833*/
                  v72 = *(_QWORD *)(v29 + 7736); /*0x140c98838*/
                  if ( v72 != -1 && v72 ) /*0x140c98848*/
                    sub_140001660(*(_QWORD *)(v29 + 7744), v72, 1); /*0x140c98857*/
                  v73 = *(_QWORD *)(v29 + 6936); /*0x140c9885c*/
                  if ( v73 ) /*0x140c98866*/
                    sub_140001660(*(_QWORD *)(v29 + 6944), v73, 1); /*0x140c98875*/
                  v74 = *(_QWORD *)(v29 + 6968); /*0x140c9887a*/
                  if ( v74 ) /*0x140c98884*/
                    sub_140001660(*(_QWORD *)(v29 + 6976), v74, 1); /*0x140c98893*/
                  v75 = *(_QWORD *)(v29 + 7032); /*0x140c98898*/
                  if ( v75 ) /*0x140c988a2*/
                    sub_140001660(*(_QWORD *)(v29 + 7040), v75, 1); /*0x140c988b1*/
                  v76 = *(_QWORD *)(v29 + 7064); /*0x140c988b6*/
                  if ( v76 ) /*0x140c988c0*/
                    sub_140001660(*(_QWORD *)(v29 + 7072), v76, 1); /*0x140c988cf*/
                  v77 = *(_QWORD *)(v29 + 7096); /*0x140c988d4*/
                  if ( v77 ) /*0x140c988de*/
                    sub_140001660(*(_QWORD *)(v29 + 7104), v77, 1); /*0x140c988ed*/
                  v78 = *(_QWORD *)(v29 + 7128); /*0x140c988f2*/
                  if ( v78 ) /*0x140c988fc*/
                    sub_140001660(*(_QWORD *)(v29 + 7136), v78, 1); /*0x140c9890b*/
                  v79 = *(_QWORD *)(v29 + 7160); /*0x140c98910*/
                  if ( v79 ) /*0x140c9891a*/
                    sub_140001660(*(_QWORD *)(v29 + 7168), v79, 1); /*0x140c98929*/
                  v80 = *(_QWORD *)(v29 + 7192); /*0x140c9892e*/
                  if ( v80 ) /*0x140c98938*/
                    sub_140001660(*(_QWORD *)(v29 + 7200), v80, 1); /*0x140c98947*/
                  v81 = *(_QWORD *)(v29 + 7256); /*0x140c9894c*/
                  if ( v81 ) /*0x140c98956*/
                    sub_140001660(*(_QWORD *)(v29 + 7264), v81, 1); /*0x140c98965*/
                  v82 = *(_QWORD *)(v29 + 7288); /*0x140c9896a*/
                  if ( v82 ) /*0x140c98974*/
                    sub_140001660(*(_QWORD *)(v29 + 7296), v82, 1); /*0x140c98983*/
                  v83 = *(_QWORD *)(v29 + 7320); /*0x140c98988*/
                  if ( v83 ) /*0x140c98992*/
                    sub_140001660(*(_QWORD *)(v29 + 7328), v83, 1); /*0x140c989a1*/
                  v84 = *(_QWORD *)(v29 + 7352); /*0x140c989a6*/
                  if ( v84 ) /*0x140c989b0*/
                    sub_140001660(*(_QWORD *)(v29 + 7360), v84, 1); /*0x140c989bf*/
                  v85 = *(_QWORD *)(v29 + 7384); /*0x140c989c4*/
                  if ( v85 ) /*0x140c989ce*/
                    sub_140001660(*(_QWORD *)(v29 + 7392), v85, 1); /*0x140c989dd*/
                  v86 = *(_QWORD *)(v29 + 7416); /*0x140c989e2*/
                  if ( v86 ) /*0x140c989ec*/
                    sub_140001660(*(_QWORD *)(v29 + 7424), v86, 1); /*0x140c989fb*/
                  v87 = *(_QWORD *)(v29 + 7448); /*0x140c98a00*/
                  if ( v87 ) /*0x140c98a0a*/
                    sub_140001660(*(_QWORD *)(v29 + 7456), v87, 1); /*0x140c98a19*/
                  v88 = *(_QWORD *)(v29 + 7480); /*0x140c98a1e*/
                  if ( v88 ) /*0x140c98a28*/
                    sub_140001660(*(_QWORD *)(v29 + 7488), v88, 1); /*0x140c98a37*/
                  v89 = *(_QWORD *)(v29 + 7512); /*0x140c98a3c*/
                  if ( v89 ) /*0x140c98a46*/
                    sub_140001660(*(_QWORD *)(v29 + 7520), v89, 1); /*0x140c98a55*/
                  v90 = *(_QWORD *)(v29 + 7544); /*0x140c98a5a*/
                  if ( v90 ) /*0x140c98a64*/
                    sub_140001660(*(_QWORD *)(v29 + 7552), v90, 1); /*0x140c98a73*/
                  v91 = *(_QWORD *)(v29 + 7576); /*0x140c98a78*/
                  if ( v91 ) /*0x140c98a82*/
                    sub_140001660(*(_QWORD *)(v29 + 7584), v91, 1); /*0x140c98a91*/
                  v92 = *(_QWORD *)(v29 + 7608); /*0x140c98a96*/
                  if ( v92 ) /*0x140c98aa0*/
                    sub_140001660(*(_QWORD *)(v29 + 7616), v92, 1); /*0x140c98aaf*/
                  v93 = *(_QWORD *)(v29 + 7640); /*0x140c98ab4*/
                  if ( v93 ) /*0x140c98abe*/
                    sub_140001660(*(_QWORD *)(v29 + 7648), v93, 1); /*0x140c98acd*/
                  v94 = *(_QWORD *)(v29 + 7672); /*0x140c98ad2*/
                  if ( v94 ) /*0x140c98adc*/
                    sub_140001660(*(_QWORD *)(v29 + 7680), v94, 1); /*0x140c98aeb*/
                  v95 = *(_QWORD *)(v29 + 7704); /*0x140c98af0*/
                  if ( v95 ) /*0x140c98afa*/
                    sub_140001660(*(_QWORD *)(v29 + 7712), v95, 1); /*0x140c98b09*/
                  goto LABEL_116; /*0x140c98b09*/
                }
                v152 = v59; /*0x140c98d40*/
                sub_141684120(v153, v148, 144); /*0x140c98d5b*/
                v149[0] = v55; /*0x140c98d60*/
                v149[1] = v58; /*0x140c98d67*/
                v149[2] = v56; /*0x140c98d6e*/
                v150 = v57; /*0x140c98d75*/
                *(_DWORD *)v151 = v184[0]; /*0x140c98d87*/
                *(_DWORD *)&v151[3] = *(_DWORD *)((char *)v184 + 3); /*0x140c98d8d*/
                v191 = v199; /*0x140c98d9a*/
                v190 = v61; /*0x140c98da1*/
                sub_140ACA880(&v173, v149); /*0x140c98db6*/
                v194 = *((_QWORD **)&v173 + 1); /*0x140c98dca*/
                v96 = v173; /*0x140c98dca*/
                v199 = (char *)v174; /*0x140c98dd8*/
                v33 = BYTE8(v174); /*0x140c98ddf*/
                v101 = HIBYTE(v174); /*0x140c98de6*/
                v102 = *(unsigned __int16 *)((char *)&v174 + 13); /*0x140c98dee*/
                v103 = *(unsigned int *)((char *)&v174 + 9); /*0x140c98df5*/
                v30 = (_QWORD *)v175; /*0x140c98dfc*/
                sub_141684120(v147, (char *)&v175 + 8, 224); /*0x140c98e17*/
                v60 = v195; /*0x140c98e1c*/
                v104 = *(_QWORD *)(v195 + 6776); /*0x140c98e23*/
                if ( v104 ) /*0x140c98e2d*/
                  sub_140001660(*(_QWORD *)(v195 + 6784), v104, 1); /*0x140c98e3c*/
                v105 = *(_QWORD *)(v60 + 6808); /*0x140c98e41*/
                if ( v105 ) /*0x140c98e4b*/
                  sub_140001660(*(_QWORD *)(v60 + 6816), v105, 1); /*0x140c98e5a*/
                v106 = *(_QWORD *)(v60 + 6840); /*0x140c98e5f*/
                if ( v106 ) /*0x140c98e69*/
                  sub_140001660(*(_QWORD *)(v60 + 6848), v106, 1); /*0x140c98e78*/
                v107 = *(_QWORD *)(v60 + 6872); /*0x140c98e7d*/
                if ( v107 ) /*0x140c98e87*/
                  sub_140001660(*(_QWORD *)(v60 + 6880), v107, 1); /*0x140c98e96*/
                v108 = *(_QWORD *)(v60 + 6904); /*0x140c98e9b*/
                if ( v108 ) /*0x140c98ea5*/
                  sub_140001660(*(_QWORD *)(v60 + 6912), v108, 1); /*0x140c98eb4*/
                v109 = *(_QWORD *)(v60 + 7736); /*0x140c98eb9*/
                if ( v109 != -1 && v109 ) /*0x140c98ec9*/
                  sub_140001660(*(_QWORD *)(v60 + 7744), v109, 1); /*0x140c98ed8*/
                v110 = *(_QWORD *)(v60 + 6936); /*0x140c98edd*/
                if ( v110 ) /*0x140c98ee7*/
                  sub_140001660(*(_QWORD *)(v60 + 6944), v110, 1); /*0x140c98ef6*/
                v111 = *(_QWORD *)(v60 + 6968); /*0x140c98efb*/
                if ( v111 ) /*0x140c98f05*/
                  sub_140001660(*(_QWORD *)(v60 + 6976), v111, 1); /*0x140c98f14*/
                v112 = *(_QWORD *)(v60 + 7032); /*0x140c98f19*/
                if ( v112 ) /*0x140c98f23*/
                  sub_140001660(*(_QWORD *)(v60 + 7040), v112, 1); /*0x140c98f32*/
                v113 = *(_QWORD *)(v60 + 7064); /*0x140c98f37*/
                if ( v113 ) /*0x140c98f41*/
                  sub_140001660(*(_QWORD *)(v60 + 7072), v113, 1); /*0x140c98f50*/
                v114 = *(_QWORD *)(v60 + 7096); /*0x140c98f55*/
                if ( v114 ) /*0x140c98f5f*/
                  sub_140001660(*(_QWORD *)(v60 + 7104), v114, 1); /*0x140c98f6e*/
                v115 = *(_QWORD *)(v60 + 7128); /*0x140c98f73*/
                if ( v115 ) /*0x140c98f7d*/
                  sub_140001660(*(_QWORD *)(v60 + 7136), v115, 1); /*0x140c98f8c*/
                v116 = *(_QWORD *)(v60 + 7160); /*0x140c98f91*/
                if ( v116 ) /*0x140c98f9b*/
                  sub_140001660(*(_QWORD *)(v60 + 7168), v116, 1); /*0x140c98faa*/
                v117 = *(_QWORD *)(v60 + 7192); /*0x140c98faf*/
                if ( v117 ) /*0x140c98fb9*/
                  sub_140001660(*(_QWORD *)(v60 + 7200), v117, 1); /*0x140c98fc8*/
                v118 = *(_QWORD *)(v60 + 7256); /*0x140c98fcd*/
                if ( v118 ) /*0x140c98fd7*/
                  sub_140001660(*(_QWORD *)(v60 + 7264), v118, 1); /*0x140c98fe6*/
                v119 = *(_QWORD *)(v60 + 7288); /*0x140c98feb*/
                if ( v119 ) /*0x140c98ff5*/
                  sub_140001660(*(_QWORD *)(v60 + 7296), v119, 1); /*0x140c99004*/
                v120 = *(_QWORD *)(v60 + 7320); /*0x140c99009*/
                if ( v120 ) /*0x140c99013*/
                  sub_140001660(*(_QWORD *)(v60 + 7328), v120, 1); /*0x140c99022*/
                v121 = *(_QWORD *)(v60 + 7352); /*0x140c99027*/
                if ( v121 ) /*0x140c99031*/
                  sub_140001660(*(_QWORD *)(v60 + 7360), v121, 1); /*0x140c99040*/
                v122 = *(_QWORD *)(v60 + 7384); /*0x140c99045*/
                if ( v122 ) /*0x140c9904f*/
                  sub_140001660(*(_QWORD *)(v60 + 7392), v122, 1); /*0x140c9905e*/
                v123 = *(_QWORD *)(v60 + 7416); /*0x140c99063*/
                if ( v123 ) /*0x140c9906d*/
                  sub_140001660(*(_QWORD *)(v60 + 7424), v123, 1); /*0x140c9907c*/
                v124 = *(_QWORD *)(v60 + 7448); /*0x140c99081*/
                if ( v124 ) /*0x140c9908b*/
                  sub_140001660(*(_QWORD *)(v60 + 7456), v124, 1); /*0x140c9909a*/
                v125 = *(_QWORD *)(v60 + 7480); /*0x140c9909f*/
                if ( v125 ) /*0x140c990a9*/
                  sub_140001660(*(_QWORD *)(v60 + 7488), v125, 1); /*0x140c990b8*/
                v126 = *(_QWORD *)(v60 + 7512); /*0x140c990bd*/
                if ( v126 ) /*0x140c990c7*/
                  sub_140001660(*(_QWORD *)(v60 + 7520), v126, 1); /*0x140c990d6*/
                v127 = *(_QWORD *)(v60 + 7544); /*0x140c990db*/
                if ( v127 ) /*0x140c990e5*/
                  sub_140001660(*(_QWORD *)(v60 + 7552), v127, 1); /*0x140c990f4*/
                v128 = *(_QWORD *)(v60 + 7576); /*0x140c990f9*/
                if ( v128 ) /*0x140c99103*/
                  sub_140001660(*(_QWORD *)(v60 + 7584), v128, 1); /*0x140c99112*/
                v129 = *(_QWORD *)(v60 + 7608); /*0x140c99117*/
                if ( v129 ) /*0x140c99121*/
                  sub_140001660(*(_QWORD *)(v60 + 7616), v129, 1); /*0x140c99130*/
                v130 = *(_QWORD *)(v60 + 7640); /*0x140c99135*/
                if ( v130 ) /*0x140c9913f*/
                  sub_140001660(*(_QWORD *)(v60 + 7648), v130, 1); /*0x140c9914e*/
                v131 = *(_QWORD *)(v60 + 7672); /*0x140c99153*/
                if ( v131 ) /*0x140c9915d*/
                  sub_140001660(*(_QWORD *)(v60 + 7680), v131, 1); /*0x140c9916c*/
                v132 = *(_QWORD *)(v60 + 7704); /*0x140c99171*/
                if ( v132 ) /*0x140c9917b*/
                  sub_140001660(*(_QWORD *)(v60 + 7712), v132, 1); /*0x140c9918a*/
                *(_BYTE *)(v60 + 7777) = 0; /*0x140c9918f*/
                sub_141684120(&v154, v147, 224); /*0x140c991ab*/
                *(_BYTE *)(v60 + 7776) = 1; /*0x140c991b0*/
                if ( v96 != -2 ) /*0x140c991bc*/
                {
                  v28 = ((unsigned __int64)((v101 << 16) | v102) << 32) | v103; /*0x140c99423*/
                  v32 = (unsigned __int64)v199; /*0x140c99426*/
                  goto LABEL_119; /*0x140c9942d*/
                }
              }
              *(_BYTE *)(v60 + 7784) = 3; /*0x140c991c2*/
              *(_BYTE *)(v60 + 7792) = 3; /*0x140c991ca*/
              v133 = 3; /*0x140c991d2*/
              result = 1; /*0x140c991d4*/
              goto LABEL_201; /*0x140c991d6*/
            }
          }
          else
          {
            LODWORD(v194) = 0; /*0x140c98069*/
            v19 = (char *)Address; /*0x140c98073*/
            if ( !*((_BYTE *)Address + 1) ) /*0x140c98080*/
              goto LABEL_30; /*0x140c98080*/
          }
          v161 = nullptr; /*0x140c98086*/
          v162 = 1; /*0x140c98091*/
          v163 = 0; /*0x140c9809c*/
          *(_QWORD *)&v174 = 1610612768; /*0x140c980a7*/
          *(_QWORD *)&v173 = &v161; /*0x140c980b9*/
          *((_QWORD *)&v173 + 1) = &off_1417C41C0; /*0x140c980c7*/
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v173) ) /*0x140c980e1*/
            sub_1416C3060( /*0x140c994e5*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v198,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v21 = v161; /*0x140c980ef*/
          v19 = (char *)v162; /*0x140c980f6*/
          v22 = (unsigned __int8)v163; /*0x140c980fd*/
          v23 = HIBYTE(v163); /*0x140c98104*/
          v24 = *(unsigned __int16 *)((char *)&v163 + 5); /*0x140c9810c*/
          v25 = *(unsigned int *)((char *)&v163 + 1); /*0x140c98114*/
          if ( !(_BYTE)v194 ) /*0x140c98122*/
          {
            if ( 2 * *v18 ) /*0x140c98127*/
            {
              v189 = v199; /*0x140c99603*/
              v188 = v196; /*0x140c99611*/
              v194 = v161; /*0x140c99618*/
              v145 = sub_1416C2250(v20, v161); /*0x140c9961f*/
              v21 = v194; /*0x140c99624*/
              if ( !v145 ) /*0x140c9962d*/
                *((_BYTE *)Address + 1) = 1; /*0x140c9963a*/
            }
          }
          v26 = Address; /*0x140c98135*/
          v27 = *(_BYTE *)Address; /*0x140c9813c*/
          *(_BYTE *)Address = 0; /*0x140c9813c*/
          if ( v27 == 2 ) /*0x140c98140*/
          {
            v189 = v199; /*0x140c994f7*/
            v188 = v196; /*0x140c99505*/
            v194 = v21; /*0x140c9950c*/
            WakeByAddressSingle(v26); /*0x140c99513*/
            v21 = v194; /*0x140c99518*/
          }
          if ( v21 == (_QWORD *)-1LL ) /*0x140c9814a*/
          {
            LODWORD(v194) = v22; /*0x140c982aa*/
            goto LABEL_30; /*0x140c982aa*/
          }
          v194 = v21; /*0x140c98150*/
          v28 = ((unsigned __int64)((v23 << 16) | v24) << 32) | v25; /*0x140c98162*/
          v29 = v195; /*0x140c98165*/
          v30 = v196; /*0x140c9816c*/
          v31 = v199; /*0x140c98173*/
          v32 = (unsigned __int64)v19; /*0x140c9817a*/
          v33 = v22; /*0x140c9817d*/
LABEL_116:
          if ( ((v31 != nullptr) & *(_BYTE *)(v29 + 7777)) != 0 ) /*0x140c98b1a*/
            sub_140001660(v30, v31, 1); /*0x140c98b28*/
          *(_BYTE *)(v29 + 7777) = 0; /*0x140c98b2d*/
          sub_141684120(&v154, v147, 224); /*0x140c98b48*/
          *(_BYTE *)(v29 + 7776) = 1; /*0x140c98b4d*/
          v96 = -1; /*0x140c98b54*/
LABEL_119:
          sub_141684120(v146, &v154, 224); /*0x140c98b5b*/
          sub_140BEAC10(v182); /*0x140c98b7c*/
          v98 = v28 << 8; /*0x140c98b82*/
          if ( v96 != -1 ) /*0x140c98b8a*/
          {
            sub_141684120(v160, v146, 224); /*0x140c98ba8*/
            *(_QWORD *)v157 = v96; /*0x140c98bad*/
            *(_QWORD *)&v157[8] = v194; /*0x140c98bbb*/
            *(_QWORD *)&v157[16] = v32; /*0x140c98bc2*/
            v158 = v98 | v33; /*0x140c98bc9*/
            v159 = v30; /*0x140c98bd0*/
            sub_140B05FA0(&v173, v157); /*0x140c98be5*/
            v32 = ((unsigned __int64)((HIBYTE(v173) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v173 + 13)) << 32) /*0x140c98c10*/
                | *(unsigned int *)((char *)&v173 + 9);
            v10 = BYTE8(v173); /*0x140c98c13*/
            v35 = *((_QWORD *)&v174 + 1); /*0x140c98c22*/
            v34 = v174; /*0x140c98c22*/
            v36 = v175; /*0x140c98c29*/
            if ( (_QWORD)v173 == -1 ) /*0x140c98c34*/
            {
              v40 = 0; /*0x140c991db*/
            }
            else
            {
              HIBYTE(v173) = (((unsigned __int64)((HIBYTE(v173) << 16) /*0x140c98c48*/
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v173 + 13)) << 32)
                            | *(unsigned int *)((char *)&v173 + 9)) >> 48;
              *(_WORD *)((char *)&v173 + 13) = WORD2(v32); /*0x140c98c55*/
              *(_DWORD *)((char *)&v173 + 9) = v32; /*0x140c98c5c*/
              v154 = 0; /*0x140c98c8d*/
              v155 = 1; /*0x140c98c98*/
              v156 = 0; /*0x140c98ca3*/
              v147[2] = 1610612768; /*0x140c98cae*/
              v147[0] = &v154; /*0x140c98cb9*/
              v147[1] = &off_1417C41C0; /*0x140c98cc7*/
              if ( (unsigned __int8)sub_141230630(&v173, v147, v99) ) /*0x140c98cdc*/
                sub_1416C3060( /*0x140c9958f*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v198,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v34 = v154; /*0x140c98cea*/
              v35 = v155; /*0x140c98cf1*/
              v36 = v156; /*0x140c98cf8*/
              sub_140BF0F60(&v173); /*0x140c98d06*/
              v40 = 1; /*0x140c98d0c*/
              v10 = 3; /*0x140c98d0e*/
            }
            v135 = v192; /*0x140c991dd*/
            goto LABEL_194; /*0x140c991e4*/
          }
          v36 = v98 | v33; /*0x140c98d1a*/
          if ( v98 < 0 ) /*0x140c98d20*/
          {
            v100 = 0; /*0x140c98d26*/
            goto LABEL_125; /*0x140c98d26*/
          }
          if ( !v36 ) /*0x140c991e9*/
          {
            v35 = 1; /*0x140c99432*/
            v137 = v194; /*0x140c99437*/
            v135 = v192; /*0x140c99441*/
            if ( !v194 ) /*0x140c99448*/
              goto LABEL_193; /*0x140c99448*/
            goto LABEL_192; /*0x140c99448*/
          }
          nullsub_1(v97); /*0x140c991ef*/
          v100 = 1; /*0x140c991f4*/
          v136 = sub_140001650(v98 | v33, 1); /*0x140c99201*/
          if ( !v136 ) /*0x140c99209*/
          {
LABEL_125:
            v199 = (char *)v32; /*0x140c98d28*/
            sub_1416C2D4B(v100, v98 | v33); /*0x140c98d35*/
          }
          v35 = v136; /*0x140c9920f*/
          sub_141684120(v136, v32, v36); /*0x140c9921b*/
          v137 = v194; /*0x140c99220*/
          v135 = v192; /*0x140c9922a*/
          if ( v194 ) /*0x140c99231*/
          {
LABEL_192:
            v138 = v135; /*0x140c99233*/
            sub_140001660(v32, v137, 1); /*0x140c9923f*/
            v135 = v138; /*0x140c99244*/
          }
LABEL_193:
          v40 = 1; /*0x140c99247*/
          v10 = 3; /*0x140c99249*/
          v34 = v36; /*0x140c9924c*/
LABEL_194:
          *(_BYTE *)v183 = 1; /*0x140c9924f*/
          sub_140BF0DE0(v135); /*0x140c99259*/
          v41 = v195; /*0x140c9925f*/
          if ( *(_QWORD *)(v195 + 4616) != -1 ) /*0x140c9926e*/
          {
            v183 = (_QWORD *)(v195 + 4624); /*0x140c9927b*/
            v139 = *(_QWORD **)(v195 + 4624); /*0x140c99282*/
            Address = *(PVOID *)(v195 + 4632); /*0x140c99290*/
            v199 = nullptr; /*0x140c99297*/
            v196 = v139; /*0x140c992a2*/
            while ( Address != v199 ) /*0x140c992be*/
            {
              ++v199; /*0x140c992c3*/
              v140 = v139 + 12; /*0x140c992ca*/
              sub_1402C7520(); /*0x140c992ce*/
              v139 = v140; /*0x140c992d4*/
            }
            v41 = v195; /*0x140c992d9*/
            v39 = *(_QWORD *)(v195 + 4616); /*0x140c992e0*/
            if ( v39 ) /*0x140c992ea*/
LABEL_199:
              sub_140001660(*v183, 96 * v39, 8); /*0x140c992ec*/
          }
LABEL_200:
          *(_BYTE *)(v41 + 7792) = 1; /*0x140c99309*/
          sub_140BE0B40(v192); /*0x140c99318*/
          v166 = v32; /*0x140c9931e*/
          v168 = BYTE6(v32); /*0x140c9932c*/
          v167 = WORD2(v32); /*0x140c99336*/
          v170 = v35; /*0x140c9933e*/
          v171 = v36; /*0x140c99345*/
          v165 = v10; /*0x140c9934f*/
          v169 = v34; /*0x140c99356*/
          v164 = v40; /*0x140c9935d*/
          v141 = v195; /*0x140c99364*/
          *(_BYTE *)(v195 + 7811) = 0; /*0x140c9936b*/
          sub_141684120(&v173, v141, 360); /*0x140c99385*/
          *(_BYTE *)(v141 + 7810) = 0; /*0x140c9938a*/
          v142 = *(_QWORD *)(v141 + 384); /*0x140c99391*/
          *(_BYTE *)(v141 + 7809) = 0; /*0x140c99398*/
          *(_QWORD *)&v157[16] = *(_QWORD *)(v141 + 376); /*0x140c993a6*/
          *(_OWORD *)v157 = *(_OWORD *)(v141 + 360); /*0x140c993b4*/
          sub_14047E370( /*0x140c993e0*/
            (unsigned int)&v173,
            v142,
            (unsigned int)&v164,
            (unsigned int)v157,
            *(_DWORD *)(v141 + 7800),
            *(_DWORD *)(v141 + 7804));
          v133 = 1; /*0x140c993e6*/
          result = 0; /*0x140c993e8*/
          v60 = v195; /*0x140c993ea*/
LABEL_201:
          *(_BYTE *)(v60 + 7808) = v133; /*0x140c993f1*/
          return result;
        case 1: /*0x140c97ffc*/
LABEL_221:
          sub_1416C3400(&off_1417BB0D8, v15, a3, a4); /*0x140c996d4*/
        case 2: /*0x140c97ffc*/
LABEL_220:
          sub_1416C3420(&off_1417BB0D8, v15, a3, a4); /*0x140c996c5*/
        case 3: /*0x140c97ffc*/
          goto LABEL_44;
      }
  }
}

// --- refs (first 60) ---
//   ref: 0x141684120 sub_141684120 
//   ref: 0x1416c3400 sub_1416C3400 
//   ref: 0x1417b7c00 off_1417B7C00 
//   ref: 0x1416c3420 sub_1416C3420 
//   ref: 0x1417b98f0 aRemoveSkill remove_skill
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
//   ref: 0x1408992a0 sub_1408992A0 
//   ref: 0x1417642a8 off_1417642A8 
//   ref: 0x141764290 off_141764290 
//   ref: 0x140b014b0 sub_140B014B0 
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
//   ref: 0x140aca880 sub_140ACA880 
//   ref: 0x1414acab0 sub_1414ACAB0 
//   ref: 0x141753898 aPoisonedLockAn poisoned lock: another task failed inside
//   ref: 0x140beac10 sub_140BEAC10 
//   ref: 0x140b05fa0 sub_140B05FA0 
//   ref: 0x140001690 nullsub_1 
//   ref: 0x140001650 sub_140001650 
//   ref: 0x1416c2d4b sub_1416C2D4B 
//   ref: 0x140be0b40 sub_140BE0B40 
//   ref: 0x14047e370 sub_14047E370 
//   ref: 0x1417bb0d8 off_1417BB0D8 
