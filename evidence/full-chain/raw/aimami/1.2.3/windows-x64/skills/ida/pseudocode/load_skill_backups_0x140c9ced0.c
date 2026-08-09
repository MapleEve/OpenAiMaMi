// module: codexmate_lib (tauri command handler, src/lib.rs command-name xref)
// win 1.2.3 IDB (AiMaMi.1.2.3 win64.exe) live py_eval/decompile this session
// tauri command handler = load_skill_backups | mapped via command-name string xref (win-native, ground-truth)
// NOTE: newly captured this session; not previously in raw/; not yet dirtree-moved.
// addr: 0x140c9ced0
// name: load_skill_backups
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = load_skill_backups | mapped via command-name string xref (win-native, ground-truth)
char __fastcall load_skill_backups(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r15
  _BYTE *v11; // r14
  volatile void *v12; // rbx
  int v13; // eax
  char *v14; // r14
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 **v18; // r13
  __int128 v19; // rdi
  int v20; // r12d
  unsigned int v21; // r15d
  __int64 v22; // rbx
  PVOID v23; // rcx
  char v24; // al
  unsigned __int64 v25; // rbx
  __int64 v26; // rsi
  unsigned __int64 v27; // r15
  char v28; // bl
  int v29; // r13d
  unsigned int v30; // r12d
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  PVOID v37; // rcx
  char v38; // al
  __int64 v39; // r14
  char *v40; // r15
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rax
  unsigned __int8 v46; // r12
  __int64 v47; // r13
  char v48; // al
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  const char *v55; // rdi
  __int64 v56; // r14
  char v57; // bl
  unsigned __int64 v58; // r12
  __int64 v59; // r15
  _BYTE *v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // r8
  int v63; // r14d
  __int64 v64; // rbx
  int v65; // esi
  __int64 v66; // rdi
  int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // r13
  __int64 v71; // rbx
  __int64 v72; // rax
  PVOID v73; // rdx
  __int64 *v74; // rcx
  __int64 *v75; // r13
  void *v76; // rbx
  __int128 v77; // xmm6
  char v78; // cl
  char result; // al
  __int64 v80; // r8
  __int64 v81; // rdi
  __int64 v82; // rdx
  _QWORD *v83; // rdi
  __int128 v84; // [rsp+30h] [rbp-50h] BYREF
  __int128 v85; // [rsp+40h] [rbp-40h]
  __int128 v86; // [rsp+50h] [rbp-30h]
  __int128 v87; // [rsp+60h] [rbp-20h]
  __int64 v88; // [rsp+70h] [rbp-10h]
  __int128 v89; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v90[24]; // [rsp+90h] [rbp+10h]
  __m256i v91; // [rsp+A8h] [rbp+28h]
  __int128 v92; // [rsp+C8h] [rbp+48h]
  __int128 v93; // [rsp+D8h] [rbp+58h]
  __int128 v94; // [rsp+E8h] [rbp+68h]
  __int128 v95; // [rsp+F8h] [rbp+78h]
  __int64 v96; // [rsp+108h] [rbp+88h]
  __m256i v97; // [rsp+110h] [rbp+90h]
  __int128 v98; // [rsp+130h] [rbp+B0h]
  __int128 v99; // [rsp+140h] [rbp+C0h]
  __int128 v100; // [rsp+150h] [rbp+D0h]
  __int128 v101; // [rsp+160h] [rbp+E0h]
  __int64 v102; // [rsp+170h] [rbp+F0h]
  __int64 v103; // [rsp+178h] [rbp+F8h] BYREF
  char v104; // [rsp+180h] [rbp+100h]
  int v105; // [rsp+181h] [rbp+101h]
  __int16 v106; // [rsp+185h] [rbp+105h]
  char v107; // [rsp+187h] [rbp+107h]
  __int64 v108; // [rsp+188h] [rbp+108h]
  __int128 v109; // [rsp+190h] [rbp+110h]
  __m256i v110; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v111; // [rsp+1C0h] [rbp+140h]
  __int128 v112; // [rsp+1D0h] [rbp+150h]
  __int128 v113; // [rsp+1E0h] [rbp+160h]
  __int128 v114; // [rsp+1F0h] [rbp+170h]
  __int64 v115; // [rsp+200h] [rbp+180h]
  const char *v116; // [rsp+208h] [rbp+188h] BYREF
  __int64 v117; // [rsp+210h] [rbp+190h]
  __int64 v118; // [rsp+218h] [rbp+198h] BYREF
  _BYTE v119[48]; // [rsp+220h] [rbp+1A0h]
  __int128 v120; // [rsp+250h] [rbp+1D0h]
  __int128 v121; // [rsp+260h] [rbp+1E0h]
  __int128 v122; // [rsp+270h] [rbp+1F0h]
  __int128 v123; // [rsp+280h] [rbp+200h]
  __int64 v124; // [rsp+290h] [rbp+210h]
  __m256i v125; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v126; // [rsp+390h] [rbp+310h]
  __int128 v127; // [rsp+3A0h] [rbp+320h]
  __int128 v128; // [rsp+3B0h] [rbp+330h]
  __int128 v129; // [rsp+3C0h] [rbp+340h]
  __int64 v130; // [rsp+3D0h] [rbp+350h]
  __int128 v131; // [rsp+3D8h] [rbp+358h]
  __int64 v132; // [rsp+3E8h] [rbp+368h]
  __int64 v133; // [rsp+3F0h] [rbp+370h]
  __int64 *v134; // [rsp+3F8h] [rbp+378h] BYREF
  __int64 v135; // [rsp+400h] [rbp+380h]
  __int64 v136; // [rsp+408h] [rbp+388h]
  __int128 v137; // [rsp+410h] [rbp+390h] BYREF
  __int128 v138; // [rsp+420h] [rbp+3A0h]
  __int128 v139; // [rsp+430h] [rbp+3B0h]
  __int64 v140; // [rsp+440h] [rbp+3C0h]
  int v141; // [rsp+448h] [rbp+3C8h]
  __int64 v142; // [rsp+458h] [rbp+3D8h]
  _DWORD v143[2]; // [rsp+460h] [rbp+3E0h]
  _QWORD *v144; // [rsp+468h] [rbp+3E8h]
  _BYTE *v145; // [rsp+470h] [rbp+3F0h]
  __int64 **v146; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v147; // [rsp+480h] [rbp+400h]
  __int64 v148; // [rsp+488h] [rbp+408h]
  __int64 v149; // [rsp+490h] [rbp+410h]
  __int64 *v150; // [rsp+498h] [rbp+418h]
  __int64 v151; // [rsp+4A0h] [rbp+420h]
  PVOID Address; // [rsp+4A8h] [rbp+428h]
  char v153; // [rsp+4B5h] [rbp+435h]
  char v154; // [rsp+4B6h] [rbp+436h]
  char v155; // [rsp+4B7h] [rbp+437h] BYREF
  __int64 v156; // [rsp+4B8h] [rbp+438h]

  v156 = -2; /*0x140c9cef2*/
  v5 = a1; /*0x140c9cf00*/
  v6 = *(unsigned __int8 *)(a1 + 7664); /*0x140c9cf03*/
  v151 = a1; /*0x140c9cf18*/
  switch ( v6 ) /*0x140c9cf1f*/
  {
    case 0LL: /*0x140c9cf1f*/
      *(_WORD *)(a1 + 7665) = 257; /*0x140c9cf21*/
      *(_BYTE *)(a1 + 7667) = 1; /*0x140c9cf2a*/
      v7 = a1 + 4024; /*0x140c9cf38*/
      sub_141684120(a1 + 4024, a1 + 392, 3632); /*0x140c9cf48*/
      switch ( *(_BYTE *)(v5 + 7648) ) /*0x140c9cf62*/
      {
        case 0: /*0x140c9cf62*/
          goto LABEL_4;
        case 1: /*0x140c9cf62*/
          goto LABEL_112;
        case 2: /*0x140c9cf62*/
          goto LABEL_111;
        case 3: /*0x140c9cf62*/
          goto LABEL_6;
      }
    case 1LL: /*0x140c9cf1f*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140c9e1b8*/
    case 2LL: /*0x140c9cf1f*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140c9e1aa*/
    case 3LL: /*0x140c9cf1f*/
      v7 = a1 + 4024; /*0x140c9cf64*/
      switch ( *(_BYTE *)(a1 + 7648) ) /*0x140c9cf80*/
      {
        case 0: /*0x140c9cf80*/
LABEL_4:
          v116 = aLoadSkillBacku; /*0x140c9cf82*/
          v117 = 18; /*0x140c9cfa2*/
          v118 = (__int64)aRepo_0; /*0x140c9cfb4*/
          *(_QWORD *)v119 = 4; /*0x140c9cfbb*/
          v149 = v7; /*0x140c9cfc6*/
          *(_QWORD *)&v119[8] = v7; /*0x140c9cfcd*/
          *(_OWORD *)&v119[16] = (unsigned __int64)(v5 + 4544); /*0x140c9cfd4*/
          v8 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4536) + 16LL)); /*0x140c9cfe6*/
          if ( v8 ) /*0x140c9cfef*/
            goto LABEL_5; /*0x140c9cfef*/
          sub_1416850A0(&v89, &v116, &v118); /*0x140c9d227*/
          v28 = v89; /*0x140c9d22d*/
          if ( (_BYTE)v89 == 0xFF ) /*0x140c9d234*/
          {
            v8 = *((_QWORD *)&v89 + 1); /*0x140c9d3d6*/
LABEL_5:
            v5 = v151; /*0x140c9cff5*/
            v9 = v151 + 4568; /*0x140c9cffc*/
            *(_QWORD *)(v151 + 4568) = v8; /*0x140c9d003*/
            *(_BYTE *)(v5 + 5584) = 0; /*0x140c9d00a*/
            v10 = (_QWORD *)(v5 + 5592); /*0x140c9d011*/
            sub_141684120(v5 + 5592, v9, 1024); /*0x140c9d021*/
            v11 = (_BYTE *)(v5 + 7640); /*0x140c9d026*/
            *(_BYTE *)(v5 + 7640) = 0; /*0x140c9d02d*/
            v7 = v149; /*0x140c9d034*/
LABEL_7:
            sub_141684120(v5 + 6616, v10, 1024); /*0x140c9d072*/
            switch ( *(_BYTE *)(v5 + 7632) ) /*0x140c9d08c*/
            {
              case 0: /*0x140c9d08c*/
                goto LABEL_9;
              case 1: /*0x140c9d08c*/
                goto LABEL_114;
              case 2: /*0x140c9d08c*/
                goto LABEL_113;
              case 3: /*0x140c9d08c*/
                goto LABEL_21;
            }
          }
          v150 = (__int64 *)(v5 + 4544); /*0x140c9d23a*/
          v29 = BYTE7(v89); /*0x140c9d241*/
          v30 = *(unsigned __int16 *)((char *)&v89 + 5); /*0x140c9d246*/
          v31 = *(unsigned int *)((char *)&v89 + 1); /*0x140c9d24b*/
          v32 = *((_QWORD *)&v89 + 1); /*0x140c9d24f*/
          v19 = *(_OWORD *)v90; /*0x140c9d253*/
          sub_140BF0DE0(v149); /*0x140c9d262*/
          v27 = ((unsigned __int64)((v29 << 16) | v30) << 32) | v31; /*0x140c9d273*/
          if ( *v150 == -1 ) /*0x140c9d281*/
          {
            v46 = 1; /*0x140c9def8*/
            v47 = v151; /*0x140c9defb*/
            goto LABEL_94; /*0x140c9defb*/
          }
          v144 = (_QWORD *)(v151 + 4552); /*0x140c9d295*/
          v33 = *(_QWORD *)(v151 + 4552); /*0x140c9d29c*/
          v145 = *(_BYTE **)(v151 + 4560); /*0x140c9d2aa*/
          Address = nullptr; /*0x140c9d2b1*/
          v142 = v33; /*0x140c9d2bc*/
          while ( v145 != Address ) /*0x140c9d2de*/
          {
            Address = (char *)Address + 1; /*0x140c9d2e7*/
            v34 = v33 + 96; /*0x140c9d2ee*/
            sub_1402C7520(); /*0x140c9d2f2*/
            v33 = v34; /*0x140c9d2f8*/
          }
          v45 = *v150; /*0x140c9d3bb*/
          v46 = 1; /*0x140c9d3be*/
          v47 = v151; /*0x140c9d3c4*/
          if ( !*v150 ) /*0x140c9d3bb*/
            goto LABEL_94; /*0x140c9d3cb*/
          goto LABEL_83; /*0x140c9d3cb*/
        case 1: /*0x140c9cf80*/
LABEL_112:
          v149 = v7; /*0x140c9e1d8*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140c9e1e6*/
        case 2: /*0x140c9cf80*/
LABEL_111:
          v149 = v7; /*0x140c9e1bf*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140c9e1cd*/
        case 3: /*0x140c9cf80*/
          goto LABEL_6;
      }
  }
LABEL_6:
  v11 = (_BYTE *)(v5 + 7640); /*0x140c9d03d*/
  v10 = (_QWORD *)(v5 + 5592); /*0x140c9d04b*/
  switch ( *(_BYTE *)(v5 + 7640) ) /*0x140c9d060*/
  {
    case 0: /*0x140c9d060*/
      goto LABEL_7;
    case 1: /*0x140c9d060*/
      v149 = v7; /*0x140c9e256*/
      v133 = v5 + 5592; /*0x140c9e25d*/
      sub_1416C3400(&off_1417B7B80, a2, a3, a4); /*0x140c9e26b*/
    case 2: /*0x140c9d060*/
      v149 = v7; /*0x140c9e239*/
      v133 = v5 + 5592; /*0x140c9e240*/
      sub_1416C3420(&off_1417B7B80, a2, a3, a4); /*0x140c9e24e*/
    case 3: /*0x140c9d060*/
      switch ( *(_BYTE *)(v5 + 7632) ) /*0x140c9d0a3*/
      {
        case 0: /*0x140c9d0a3*/
LABEL_9:
          v144 = v10; /*0x140c9d0a5*/
          v145 = v11; /*0x140c9d0ac*/
          v149 = v7; /*0x140c9d0b3*/
          v12 = *(volatile void **)(v5 + 6616); /*0x140c9d0ba*/
          *(_QWORD *)(v5 + 6624) = v12; /*0x140c9d0c1*/
          LOBYTE(a1) = 1; /*0x140c9d0c8*/
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v12, 1, 0) ) /*0x140c9d0cc*/
            sub_1416C15B0(v12); /*0x140c9e026*/
          Address = (PVOID)v12; /*0x140c9d0d6*/
          if ( 2 * *off_141EC90B8 ) /*0x140c9d0e7*/
          {
            v13 = sub_1416C2250(a1, a2); /*0x140c9e031*/
            LOBYTE(v13) = v13 ^ 1; /*0x140c9e037*/
          }
          else
          {
            v13 = 0; /*0x140c9d0f3*/
          }
          v14 = (char *)Address; /*0x140c9d0f5*/
          v15 = *((_BYTE *)Address + 1); /*0x140c9d0fc*/
          LODWORD(v150) = v13; /*0x140c9d103*/
          if ( !v15 ) /*0x140c9d109*/
            goto LABEL_28; /*0x140c9d109*/
          *(_QWORD *)&v137 = 0; /*0x140c9d10f*/
          *((_QWORD *)&v137 + 1) = 1; /*0x140c9d11a*/
          *(_QWORD *)&v138 = 0; /*0x140c9d125*/
          v118 = 1610612768; /*0x140c9d130*/
          v116 = (const char *)&v137; /*0x140c9d142*/
          v117 = (__int64)&off_1417C41C0; /*0x140c9d150*/
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v116) ) /*0x140c9d16a*/
            sub_1416C3060( /*0x140c9e064*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v155,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v14 = *((char **)&v137 + 1); /*0x140c9d17f*/
          v18 = (__int64 **)v137; /*0x140c9d17f*/
          LODWORD(v19) = (unsigned __int8)v138; /*0x140c9d186*/
          v20 = BYTE7(v138); /*0x140c9d18d*/
          v21 = *(unsigned __int16 *)((char *)&v138 + 5); /*0x140c9d195*/
          v22 = *(unsigned int *)((char *)&v138 + 1); /*0x140c9d19d*/
          if ( !(_BYTE)v150 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v17, v16) ) /*0x140c9e085*/
            *((_BYTE *)Address + 1) = 1; /*0x140c9e09a*/
          v23 = Address; /*0x140c9d1c4*/
          v24 = *(_BYTE *)Address; /*0x140c9d1cb*/
          *(_BYTE *)Address = 0; /*0x140c9d1cb*/
          if ( v24 == 2 ) /*0x140c9d1cf*/
            WakeByAddressSingle(v23); /*0x140c9e06f*/
          if ( v18 != (__int64 **)-1LL ) /*0x140c9d1d9*/
          {
            v25 = ((unsigned __int64)((v20 << 16) | v21) << 32) | v22; /*0x140c9d1ea*/
            v26 = v151; /*0x140c9d1ed*/
            v27 = (unsigned __int64)v14; /*0x140c9d1f4*/
LABEL_69:
            Address = v18; /*0x140c9d925*/
            v130 = v115; /*0x140c9d933*/
            v129 = v114; /*0x140c9d941*/
            v128 = v113; /*0x140c9d94f*/
            v127 = v112; /*0x140c9d972*/
            v126 = v111; /*0x140c9d979*/
            v125 = v110; /*0x140c9d980*/
            *(_BYTE *)(v26 + 7632) = 1; /*0x140c9d98e*/
            v97 = v125; /*0x140c9d9b1*/
            v98 = v126; /*0x140c9d9bf*/
            v99 = v127; /*0x140c9d9c6*/
            v100 = v128; /*0x140c9d9d4*/
            v101 = v129; /*0x140c9d9e2*/
            v102 = v130; /*0x140c9d9f0*/
            goto LABEL_70; /*0x140c9d9f0*/
          }
          LODWORD(v150) = v19; /*0x140c9d2ff*/
LABEL_28:
          Address = v14; /*0x140c9d305*/
          sub_1407BC950(v151 + 6632, v14 + 8); /*0x140c9d31e*/
          if ( ((unsigned __int8)v150 & 1) == 0 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v36, v35) ) /*0x140c9e0a3*/
            *((_BYTE *)Address + 1) = 1; /*0x140c9e0b8*/
          v37 = Address; /*0x140c9d345*/
          v38 = *(_BYTE *)Address; /*0x140c9d34c*/
          *(_BYTE *)Address = 0; /*0x140c9d34c*/
          if ( v38 == 2 ) /*0x140c9d350*/
            WakeByAddressSingle(v37); /*0x140c9e07a*/
          v39 = v151; /*0x140c9d356*/
          v40 = *(char **)(v151 + 7128); /*0x140c9d35d*/
          if ( (__int64)v40 < 0 ) /*0x140c9d367*/
          {
            v41 = 0; /*0x140c9d369*/
            goto LABEL_34; /*0x140c9d369*/
          }
          if ( v40 ) /*0x140c9d37c*/
          {
            v42 = *(_QWORD *)(v151 + 7120); /*0x140c9d37e*/
            nullsub_1(v37); /*0x140c9d385*/
            v41 = 1; /*0x140c9d38a*/
            v43 = sub_140001650(v40, 1); /*0x140c9d397*/
            if ( !v43 ) /*0x140c9d39f*/
LABEL_34:
              sub_1416C2D4B(v41, v40); /*0x140c9d36b*/
            v44 = v43; /*0x140c9d3a1*/
            sub_141684120(v43, v42, v40); /*0x140c9d3ad*/
          }
          else
          {
            v44 = 1; /*0x140c9d3df*/
          }
          v48 = *(_BYTE *)(v39 + 7136); /*0x140c9d3e5*/
          v116 = v40; /*0x140c9d3ed*/
          v150 = (__int64 *)v44; /*0x140c9d3f4*/
          v117 = v44; /*0x140c9d3fb*/
          Address = v40; /*0x140c9d402*/
          v118 = (__int64)v40; /*0x140c9d409*/
          v119[0] = v48; /*0x140c9d410*/
          v49 = off_141EC8710; /*0x140c9d416*/
          if ( *((_DWORD *)off_141EC8710 + 24) ) /*0x140c9d41d*/
          {
            v154 = 0; /*0x140c9e0c1*/
            v83 = off_141EC8710; /*0x140c9e0cf*/
            sub_1416984A3(off_141EC8710); /*0x140c9e0d2*/
            v49 = v83; /*0x140c9e0d7*/
          }
          if ( *((_DWORD *)v49 + 4) == 2 ) /*0x140c9d42c*/
          {
            v50 = 704; /*0x140c9d436*/
            if ( *(_BYTE *)v49 ) /*0x140c9d42e*/
              v50 = 472; /*0x140c9d43b*/
            v51 = v49[1] + v50; /*0x140c9d43f*/
            v154 = 1; /*0x140c9d443*/
            v52 = sub_1408995E0(v51, v49, &v116, &off_1417642A8); /*0x140c9d458*/
          }
          else
          {
            v53 = 704; /*0x140c9d469*/
            if ( *((_BYTE *)v49 + 64) ) /*0x140c9d460*/
              v53 = 472; /*0x140c9d46e*/
            v54 = v49[9] + v53; /*0x140c9d476*/
            v154 = 1; /*0x140c9d47a*/
            v52 = sub_1408995E0(v54, v49 + 8, &v116, &off_141764290); /*0x140c9d492*/
          }
          v5 = v151; /*0x140c9d498*/
          *(_QWORD *)(v151 + 7624) = v52; /*0x140c9d49f*/
LABEL_52:
          Address = (PVOID)(v5 + 7624); /*0x140c9d4a6*/
          sub_140AFEC50(&v116, v5 + 7624, a2); /*0x140c9d4be*/
          v55 = v116; /*0x140c9d4c4*/
          if ( v116 == (const char *)-3LL ) /*0x140c9d4cf*/
          {
            v60 = (_BYTE *)v151; /*0x140c9d50f*/
            *(_BYTE *)(v151 + 7632) = 3; /*0x140c9d516*/
            goto LABEL_88; /*0x140c9d51d*/
          }
          if ( (_DWORD)v116 == -2 ) /*0x140c9d4d4*/
          {
            v56 = v117; /*0x140c9d4d6*/
            v57 = v118; /*0x140c9d4dd*/
            LODWORD(v146) = *(_DWORD *)((char *)&v118 + 1); /*0x140c9d4ea*/
            *(_DWORD *)((char *)&v146 + 3) = HIDWORD(v118); /*0x140c9d4f6*/
            v58 = 0x800000000000000CuLL; /*0x140c9d4fc*/
            v59 = *(_QWORD *)v119; /*0x140c9d506*/
          }
          else
          {
            v58 = v117; /*0x140c9d522*/
            v56 = v118; /*0x140c9d529*/
            v57 = v119[0]; /*0x140c9d530*/
            LODWORD(v146) = *(_DWORD *)&v119[1]; /*0x140c9d53d*/
            *(_DWORD *)((char *)&v146 + 3) = *(_DWORD *)&v119[4]; /*0x140c9d549*/
            v59 = *(_QWORD *)&v119[8]; /*0x140c9d54f*/
            v137 = *(_OWORD *)&v119[16]; /*0x140c9d55d*/
            v138 = *(_OWORD *)&v119[32]; /*0x140c9d56b*/
            v139 = v120; /*0x140c9d579*/
            v140 = v121; /*0x140c9d587*/
          }
          v143[0] = (_DWORD)v146; /*0x140c9d5a1*/
          *(_DWORD *)((char *)v143 + 3) = *(_DWORD *)((char *)&v146 + 3); /*0x140c9d5a7*/
          v85 = v137; /*0x140c9d5c2*/
          v86 = v138; /*0x140c9d5c6*/
          v87 = v139; /*0x140c9d5ca*/
          v88 = v140; /*0x140c9d5d5*/
          v61 = *(_QWORD *)Address; /*0x140c9d5d9*/
          if ( (unsigned __int8)sub_1412F2A80(*(_QWORD *)Address) ) /*0x140c9d5df*/
            sub_1412E7580(v61); /*0x140c9d5ec*/
          if ( (_DWORD)v55 != -1 ) /*0x140c9d5f5*/
          {
            if ( (_DWORD)v55 == -2 ) /*0x140c9d5fe*/
            {
              v116 = (const char *)v58; /*0x140c9d604*/
              v117 = v56; /*0x140c9d60b*/
              LOBYTE(v118) = v57; /*0x140c9d612*/
              *(_DWORD *)((char *)&v118 + 1) = v143[0]; /*0x140c9d624*/
              HIDWORD(v118) = *(_DWORD *)((char *)v143 + 3); /*0x140c9d62a*/
              *(_QWORD *)v119 = v59; /*0x140c9d630*/
              *(_OWORD *)&v119[8] = v85; /*0x140c9d63b*/
              v146 = nullptr; /*0x140c9d642*/
              v147 = 1; /*0x140c9d64d*/
              v148 = 0; /*0x140c9d658*/
              *(_QWORD *)&v138 = 1610612768; /*0x140c9d663*/
              *(_QWORD *)&v137 = &v146; /*0x140c9d675*/
              *((_QWORD *)&v137 + 1) = &off_1417C41C0; /*0x140c9d683*/
              if ( (unsigned __int8)sub_141230630(&v116, &v137, v62) ) /*0x140c9d698*/
                sub_1416C3060( /*0x140c9e105*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v155,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v18 = v146; /*0x140c9d6a6*/
              v27 = v147; /*0x140c9d6ad*/
              LOBYTE(v19) = v148; /*0x140c9d6b4*/
              v63 = HIBYTE(v148); /*0x140c9d6bb*/
              DWORD2(v19) = *(unsigned __int16 *)((char *)&v148 + 5); /*0x140c9d6c3*/
              v64 = *(unsigned int *)((char *)&v148 + 1); /*0x140c9d6ca*/
              sub_140BF0F60(&v116); /*0x140c9d6d7*/
            }
            else
            {
              v116 = v55; /*0x140c9d803*/
              v117 = v58; /*0x140c9d80a*/
              v118 = v56; /*0x140c9d811*/
              v119[0] = v57; /*0x140c9d818*/
              *(_DWORD *)&v119[1] = v143[0]; /*0x140c9d82a*/
              *(_DWORD *)&v119[4] = *(_DWORD *)((char *)v143 + 3); /*0x140c9d830*/
              *(_QWORD *)&v119[8] = v59; /*0x140c9d836*/
              *(_OWORD *)&v119[16] = v85; /*0x140c9d849*/
              *(_OWORD *)&v119[32] = v86; /*0x140c9d850*/
              v120 = v87; /*0x140c9d857*/
              *(_QWORD *)&v121 = v88; /*0x140c9d862*/
              v146 = nullptr; /*0x140c9d869*/
              v147 = 1; /*0x140c9d874*/
              v148 = 0; /*0x140c9d87f*/
              *(_QWORD *)&v138 = 1610612768; /*0x140c9d88a*/
              *(_QWORD *)&v137 = &v146; /*0x140c9d89c*/
              *((_QWORD *)&v137 + 1) = &off_1417C41C0; /*0x140c9d8aa*/
              if ( (unsigned __int8)sub_140B036A0(&v116, &v137) ) /*0x140c9d8bf*/
                sub_1416C3060( /*0x140c9e167*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v155,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v18 = v146; /*0x140c9d8cd*/
              v27 = v147; /*0x140c9d8d4*/
              LOBYTE(v19) = v148; /*0x140c9d8db*/
              v63 = HIBYTE(v148); /*0x140c9d8e2*/
              DWORD2(v19) = *(unsigned __int16 *)((char *)&v148 + 5); /*0x140c9d8ea*/
              v64 = *(unsigned int *)((char *)&v148 + 1); /*0x140c9d8f1*/
              sub_140BF2F60(&v116); /*0x140c9d8fe*/
            }
            v25 = ((unsigned __int64)((unsigned int)(v63 << 16) | DWORD2(v19)) << 32) | v64; /*0x140c9d90f*/
            v26 = v151; /*0x140c9d912*/
            sub_140016620(v151 + 6632); /*0x140c9d920*/
            goto LABEL_69; /*0x140c9d920*/
          }
          HIDWORD(v132) = *(_DWORD *)((char *)v143 + 3); /*0x140c9d6ee*/
          *(_DWORD *)((char *)&v132 + 1) = v143[0]; /*0x140c9d6f4*/
          *(_QWORD *)&v131 = v58; /*0x140c9d6fa*/
          *((_QWORD *)&v131 + 1) = v56; /*0x140c9d701*/
          LOBYTE(v132) = v57; /*0x140c9d708*/
          v65 = v132; /*0x140c9d70e*/
          Address = (PVOID)(v151 + 6632); /*0x140c9d722*/
          v84 = *(_OWORD *)(v151 + 7120); /*0x140c9d730*/
          v134 = nullptr; /*0x140c9d734*/
          v135 = 1; /*0x140c9d73f*/
          v136 = 0; /*0x140c9d74a*/
          v148 = 1610612768; /*0x140c9d755*/
          v146 = &v134; /*0x140c9d767*/
          v147 = (__int64)&off_1417C41C0; /*0x140c9d775*/
          if ( (unsigned __int8)sub_14148F3A0(&v84, &v146, v62) ) /*0x140c9d787*/
            sub_1416C3060( /*0x140c9e136*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v155,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v150 = v134; /*0x140c9d79c*/
          v142 = v135; /*0x140c9d7aa*/
          v66 = v136; /*0x140c9d7b1*/
          LODWORD(v134) = sub_141475580(); /*0x140c9d7be*/
          HIDWORD(v134) = v67; /*0x140c9d7c4*/
          sub_141475530(&v146, &v134, 3577643008LL, 27111902); /*0x140c9d7e4*/
          if ( (_BYTE)v146 ) /*0x140c9d7f1*/
            v68 = 0; /*0x140c9db6c*/
          else
            v68 = v147; /*0x140c9d7f7*/
          v137 = v131; /*0x140c9db75*/
          *(_QWORD *)&v138 = v132; /*0x140c9db83*/
          v141 = v65; /*0x140c9db8a*/
          *((_QWORD *)&v138 + 1) = v150; /*0x140c9db97*/
          *(_QWORD *)&v139 = v142; /*0x140c9dba5*/
          *((_QWORD *)&v139 + 1) = v66; /*0x140c9dbac*/
          v140 = v68; /*0x140c9dbb3*/
          v153 = 0; /*0x140c9dbba*/
          sub_140ACC5D0(&v116, &v137); /*0x140c9dbcf*/
          *((_QWORD *)&v19 + 1) = v116; /*0x140c9dbd5*/
          v76 = (void *)v117; /*0x140c9dbdc*/
          v27 = v118; /*0x140c9dbe3*/
          v77 = *(_OWORD *)v119; /*0x140c9dbea*/
          *(_QWORD *)&v19 = *(_QWORD *)v119; /*0x140c9dbf1*/
          v110 = *(__m256i *)&v119[16]; /*0x140c9dbff*/
          v111 = v120; /*0x140c9dc1b*/
          v112 = v121; /*0x140c9dc29*/
          v113 = v122; /*0x140c9dc37*/
          v114 = v123; /*0x140c9dc45*/
          v115 = v124; /*0x140c9dc53*/
          sub_140016620(Address); /*0x140c9dc61*/
          v125 = v110; /*0x140c9dc82*/
          v126 = v111; /*0x140c9dc90*/
          v127 = v112; /*0x140c9dc97*/
          v128 = v113; /*0x140c9dca5*/
          v129 = v114; /*0x140c9dcb3*/
          v130 = v115; /*0x140c9dcc1*/
          v60 = (_BYTE *)v151; /*0x140c9dcc8*/
          *(_BYTE *)(v151 + 7632) = 1; /*0x140c9dccf*/
          if ( *((_QWORD *)&v19 + 1) == -2 ) /*0x140c9dcda*/
          {
LABEL_88:
            v60[7640] = 3; /*0x140c9dcdc*/
            v60[7648] = 3; /*0x140c9dce3*/
            v78 = 3; /*0x140c9dcea*/
            result = 1; /*0x140c9dcec*/
            goto LABEL_95; /*0x140c9dcee*/
          }
          v102 = v130; /*0x140c9dcfa*/
          v101 = v129; /*0x140c9dd08*/
          v100 = v128; /*0x140c9dd16*/
          v99 = v127; /*0x140c9dd39*/
          v98 = v126; /*0x140c9dd40*/
          v97 = v125; /*0x140c9dd47*/
          if ( *((_QWORD *)&v19 + 1) != -1 ) /*0x140c9dd59*/
          {
            v96 = v102; /*0x140c9dd66*/
            v95 = v101; /*0x140c9dd74*/
            v94 = v100; /*0x140c9dd7f*/
            v93 = v99; /*0x140c9dd9f*/
            v92 = v98; /*0x140c9dda3*/
            v91 = v97; /*0x140c9dda7*/
            *(_QWORD *)&v89 = *((_QWORD *)&v19 + 1); /*0x140c9ddaf*/
            *((_QWORD *)&v89 + 1) = v76; /*0x140c9ddb3*/
            *(_QWORD *)v90 = v27; /*0x140c9ddb7*/
            *(_OWORD *)&v90[8] = v77; /*0x140c9ddbb*/
            sub_140B09030(&v116, &v89); /*0x140c9ddc9*/
            v27 = ((unsigned __int64)((HIBYTE(v117) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v117 + 5)) << 32) /*0x140c9ddf4*/
                | *(unsigned int *)((char *)&v117 + 1);
            v28 = v117; /*0x140c9ddf7*/
            v32 = v118; /*0x140c9ddfe*/
            v19 = *(_OWORD *)v119; /*0x140c9de05*/
            if ( v116 == (const char *)-1LL ) /*0x140c9de17*/
            {
              v46 = 0; /*0x140c9e014*/
            }
            else
            {
              HIBYTE(v117) = (((unsigned __int64)((HIBYTE(v117) << 16) /*0x140c9de2b*/
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v117 + 5)) << 32)
                            | *(unsigned int *)((char *)&v117 + 1)) >> 48;
              *(_WORD *)((char *)&v117 + 5) = WORD2(v27); /*0x140c9de38*/
              *(_DWORD *)((char *)&v117 + 1) = v27; /*0x140c9de3f*/
              v125.m256i_i64[0] = 0; /*0x140c9de6f*/
              *(_OWORD *)&v125.m256i_u64[1] = 1u; /*0x140c9de7a*/
              v110.m256i_i64[2] = 1610612768; /*0x140c9de90*/
              v110.m256i_i64[0] = (__int64)&v125; /*0x140c9dea2*/
              v110.m256i_i64[1] = (__int64)&off_1417C41C0; /*0x140c9dea9*/
              if ( (unsigned __int8)sub_141230630(&v116, &v110, v80) ) /*0x140c9debe*/
                sub_1416C3060( /*0x140c9e198*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v155,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v19 = *(_OWORD *)&v125.m256i_u64[1]; /*0x140c9ded3*/
              v32 = v125.m256i_i64[0]; /*0x140c9ded3*/
              sub_140BF0F60(&v116); /*0x140c9dee8*/
              v46 = 1; /*0x140c9deee*/
              v28 = 3; /*0x140c9def1*/
            }
            v70 = v149; /*0x140c9e017*/
            goto LABEL_78; /*0x140c9e01e*/
          }
          Address = v76; /*0x140c9e001*/
          v25 = (unsigned __int64)v19 >> 8; /*0x140c9e00b*/
LABEL_70:
          v69 = v25 << 8; /*0x140c9d9f7*/
          *((_QWORD *)&v19 + 1) = v69 | (unsigned __int8)v19; /*0x140c9d9ff*/
          v70 = v149; /*0x140c9da05*/
          if ( v69 < 0 ) /*0x140c9da0c*/
          {
            v71 = 0; /*0x140c9da0e*/
            goto LABEL_72; /*0x140c9da0e*/
          }
          if ( *((_QWORD *)&v19 + 1) ) /*0x140c9da2b*/
          {
            nullsub_1(v23); /*0x140c9da31*/
            v71 = 1; /*0x140c9da36*/
            v72 = sub_140001650(*((_QWORD *)&v19 + 1), 1); /*0x140c9da43*/
            if ( !v72 ) /*0x140c9da4b*/
            {
LABEL_72:
              v150 = (__int64 *)v27; /*0x140c9da10*/
              sub_1416C2D4B(v71, *((_QWORD *)&v19 + 1)); /*0x140c9da1d*/
            }
            *(_QWORD *)&v19 = v72; /*0x140c9da4d*/
            sub_141684120(v72, v27, *((_QWORD *)&v19 + 1)); /*0x140c9da59*/
            v73 = Address; /*0x140c9da5e*/
            if ( !Address ) /*0x140c9da68*/
              goto LABEL_77; /*0x140c9da68*/
          }
          else
          {
            *(_QWORD *)&v19 = 1; /*0x140c9db52*/
            v73 = Address; /*0x140c9db57*/
            if ( !Address ) /*0x140c9db61*/
              goto LABEL_77; /*0x140c9db61*/
          }
          sub_140001660(v27, v73, 1); /*0x140c9da73*/
LABEL_77:
          v46 = 1; /*0x140c9da78*/
          v28 = 3; /*0x140c9da7b*/
          v32 = *((_QWORD *)&v19 + 1); /*0x140c9da7d*/
LABEL_78:
          *v145 = 1; /*0x140c9da80*/
          v149 = v70; /*0x140c9da8a*/
          sub_140BF0DE0(v70); /*0x140c9da94*/
          v47 = v151; /*0x140c9da9a*/
          if ( *(_QWORD *)(v151 + 4544) != -1 ) /*0x140c9daa9*/
          {
            v144 = (_QWORD *)(v151 + 4552); /*0x140c9dab6*/
            v74 = *(__int64 **)(v151 + 4552); /*0x140c9dabd*/
            v145 = *(_BYTE **)(v151 + 4560); /*0x140c9dacb*/
            Address = nullptr; /*0x140c9dad2*/
            v150 = v74; /*0x140c9dadd*/
            while ( v145 != Address ) /*0x140c9dafe*/
            {
              Address = (char *)Address + 1; /*0x140c9db03*/
              v75 = v74 + 12; /*0x140c9db0a*/
              sub_1402C7520(); /*0x140c9db0e*/
              v74 = v75; /*0x140c9db14*/
            }
            v47 = v151; /*0x140c9db19*/
            v45 = *(_QWORD *)(v151 + 4544); /*0x140c9db20*/
            if ( v45 ) /*0x140c9db2a*/
LABEL_83:
              sub_140001660(*v144, 96 * v45, 8); /*0x140c9db30*/
          }
LABEL_94:
          *(_BYTE *)(v47 + 7648) = 1; /*0x140c9df02*/
          sub_140BE0EC0(v149); /*0x140c9df11*/
          v105 = v27; /*0x140c9df17*/
          v107 = BYTE6(v27); /*0x140c9df25*/
          v106 = WORD2(v27); /*0x140c9df2f*/
          v109 = v19; /*0x140c9df37*/
          v104 = v28; /*0x140c9df49*/
          v108 = v32; /*0x140c9df4f*/
          v103 = v46; /*0x140c9df56*/
          v81 = v151; /*0x140c9df5d*/
          *(_BYTE *)(v151 + 7667) = 0; /*0x140c9df64*/
          sub_141684120(&v116, v81, 360); /*0x140c9df7e*/
          *(_BYTE *)(v81 + 7666) = 0; /*0x140c9df83*/
          v82 = *(_QWORD *)(v81 + 384); /*0x140c9df8a*/
          *(_BYTE *)(v81 + 7665) = 0; /*0x140c9df91*/
          *(_QWORD *)v90 = *(_QWORD *)(v81 + 376); /*0x140c9df9f*/
          v89 = *(_OWORD *)(v81 + 360); /*0x140c9dfaa*/
          sub_14047E370( /*0x140c9dfcf*/
            (unsigned int)&v116,
            v82,
            (unsigned int)&v103,
            (unsigned int)&v89,
            *(_DWORD *)(v81 + 7656),
            *(_DWORD *)(v81 + 7660));
          v78 = 1; /*0x140c9dfd5*/
          result = 0; /*0x140c9dfd7*/
          v60 = (_BYTE *)v151; /*0x140c9dfd9*/
LABEL_95:
          v60[7664] = v78; /*0x140c9dfe0*/
          return result;
        case 1: /*0x140c9d0a3*/
LABEL_114:
          v144 = v10; /*0x140c9e215*/
          v145 = v11; /*0x140c9e21c*/
          JUMPOUT(0x140C9E223LL); /*0x140c9e223*/
        case 2: /*0x140c9d0a3*/
LABEL_113:
          v144 = v10; /*0x140c9e1f1*/
          v145 = v11; /*0x140c9e1f8*/
          v149 = v7; /*0x140c9e1ff*/
          sub_1416C3420(&off_1417BB0F0, a2, a3, a4); /*0x140c9e20d*/
        case 3: /*0x140c9d0a3*/
LABEL_21:
          v144 = v10; /*0x140c9d1fc*/
          v145 = v11; /*0x140c9d203*/
          v149 = v7; /*0x140c9d20a*/
          goto LABEL_52; /*0x140c9d211*/
      }
  }
}

// --- refs (first 60) ---
//   ref: 0x141684120 sub_141684120 
//   ref: 0x1416c3400 sub_1416C3400 
//   ref: 0x1417b7c00 off_1417B7C00 
//   ref: 0x1416c3420 sub_1416C3420 
//   ref: 0x1417b9908 aLoadSkillBacku load_skill_backups
//   ref: 0x1417b9798 aRepo_0 repo
//   ref: 0x140003640 sub_140003640 
//   ref: 0x1416850a0 sub_1416850A0 
//   ref: 0x140bf0de0 sub_140BF0DE0 
//   ref: 0x1402c7520 sub_1402C7520 
//   ref: 0x1417b9768 off_1417B9768 
//   ref: 0x1417b7b80 off_1417B7B80 
//   ref: 0x1416c15b0 sub_1416C15B0 
//   ref: 0x1416c2250 sub_1416C2250 
//   ref: 0x141ec90b8 off_141EC90B8 
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
//   ref: 0x1408995e0 sub_1408995E0 
//   ref: 0x1417642a8 off_1417642A8 
//   ref: 0x141764290 off_141764290 
//   ref: 0x140afec50 sub_140AFEC50 
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
//   ref: 0x140acc5d0 sub_140ACC5D0 
//   ref: 0x140b09030 sub_140B09030 
//   ref: 0x140001660 sub_140001660 
//   ref: 0x140be0ec0 sub_140BE0EC0 
//   ref: 0x14047e370 sub_14047E370 
//   ref: 0x1417bb0f0 off_1417BB0F0 
