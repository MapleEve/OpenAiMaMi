// module: codexmate_lib/commands/analytics
// addr: 0x140cde3c0
// name: load_usage_analytics
// win 1.2.1 | module src/commands/analytics.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = load_usage_analytics | mapped via command-name string xref (win-native, ground-truth)
char __fastcall load_usage_analytics(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  volatile void *v12; // rsi
  __int64 *v13; // rsi
  int v14; // eax
  char *v15; // r14
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // r13
  unsigned __int64 v20; // rbx
  int v21; // r12d
  unsigned int v22; // r15d
  __int64 v23; // rdi
  PVOID v24; // rcx
  char v25; // al
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rdi
  _BYTE *v28; // rsi
  PVOID v29; // r12
  __int64 v30; // rax
  void *v31; // rsi
  char v32; // bl
  int v33; // r13d
  unsigned int v34; // r12d
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rcx
  __int64 *v43; // r12
  __int64 v44; // rdx
  __int64 v45; // rcx
  PVOID v46; // rcx
  char v47; // al
  __int64 v48; // rdi
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned __int64 v55; // r14
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  char v59; // cl
  char result; // al
  __int64 v61; // r14
  __int64 v62; // rdi
  __int64 v63; // r8
  unsigned __int8 v64; // r12
  __int64 v65; // rbx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // r14
  __int64 v68; // rax
  unsigned __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r13
  __int64 *v74; // rcx
  __int64 *v75; // r13
  __int64 v76; // rax
  char *v77; // rdi
  __int64 *v78; // rsi
  __int64 v79; // rcx
  char v80; // al
  __int64 v81; // rdi
  __int64 v82; // rdx
  _QWORD *v83; // rdi
  unsigned int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  PVOID v87; // rcx
  char v88; // al
  __int64 v89; // [rsp+20h] [rbp-60h]
  _BYTE v90[136]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v91; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v92; // [rsp+D0h] [rbp+50h]
  __int64 v93; // [rsp+D8h] [rbp+58h]
  _BYTE v94[136]; // [rsp+4A0h] [rbp+420h] BYREF
  _QWORD v95[5]; // [rsp+528h] [rbp+4A8h] BYREF
  char v96[136]; // [rsp+550h] [rbp+4D0h] BYREF
  const char *v97; // [rsp+5D8h] [rbp+558h] BYREF
  __int64 v98; // [rsp+5E0h] [rbp+560h]
  __int64 v99; // [rsp+5E8h] [rbp+568h] BYREF
  __int64 v100; // [rsp+5F0h] [rbp+570h]
  unsigned __int64 v101; // [rsp+5F8h] [rbp+578h]
  _QWORD v102[119]; // [rsp+600h] [rbp+580h] BYREF
  __int64 v103; // [rsp+9B8h] [rbp+938h] BYREF
  __int64 v104; // [rsp+9C0h] [rbp+940h]
  __int64 v105; // [rsp+9C8h] [rbp+948h]
  __int128 v106; // [rsp+A40h] [rbp+9C0h]
  __int128 v107; // [rsp+A50h] [rbp+9D0h]
  __int128 v108; // [rsp+A60h] [rbp+9E0h]
  __int128 v109; // [rsp+A70h] [rbp+9F0h]
  __int128 v110; // [rsp+A80h] [rbp+A00h]
  __int128 v111; // [rsp+A90h] [rbp+A10h]
  __int128 v112; // [rsp+AA0h] [rbp+A20h]
  __int128 v113; // [rsp+AB0h] [rbp+A30h]
  __int128 v114; // [rsp+AC0h] [rbp+A40h] BYREF
  __int128 v115; // [rsp+AD0h] [rbp+A50h]
  __int128 v116; // [rsp+AE0h] [rbp+A60h]
  __int128 v117; // [rsp+AF0h] [rbp+A70h]
  __int128 v118; // [rsp+B00h] [rbp+A80h]
  __int128 v119; // [rsp+B10h] [rbp+A90h]
  __int128 v120; // [rsp+B20h] [rbp+AA0h]
  __int128 v121; // [rsp+B30h] [rbp+AB0h]
  __int128 v122; // [rsp+B40h] [rbp+AC0h]
  __int128 v123; // [rsp+B50h] [rbp+AD0h]
  __int64 v124; // [rsp+B68h] [rbp+AE8h] BYREF
  char v125; // [rsp+B70h] [rbp+AF0h]
  int v126; // [rsp+B71h] [rbp+AF1h]
  __int16 v127; // [rsp+B75h] [rbp+AF5h]
  char v128; // [rsp+B77h] [rbp+AF7h]
  __int64 v129; // [rsp+B78h] [rbp+AF8h]
  __int64 v130; // [rsp+B80h] [rbp+B00h]
  __int64 v131; // [rsp+B88h] [rbp+B08h]
  __int128 v132; // [rsp+B90h] [rbp+B10h] BYREF
  __int128 v133; // [rsp+BA0h] [rbp+B20h]
  __int128 v134; // [rsp+BB0h] [rbp+B30h]
  __int128 v135; // [rsp+BC0h] [rbp+B40h]
  __int128 v136; // [rsp+BD0h] [rbp+B50h] BYREF
  __int128 v137; // [rsp+BE0h] [rbp+B60h]
  _BYTE v138[72]; // [rsp+BF0h] [rbp+B70h]
  __int64 v139; // [rsp+C40h] [rbp+BC0h]
  __int64 v140; // [rsp+C48h] [rbp+BC8h]
  __int128 *v141; // [rsp+C50h] [rbp+BD0h] BYREF
  __int64 v142; // [rsp+C58h] [rbp+BD8h]
  unsigned __int64 v143; // [rsp+C60h] [rbp+BE0h]
  __int64 *v144; // [rsp+C68h] [rbp+BE8h]
  __int64 v145; // [rsp+C70h] [rbp+BF0h]
  _QWORD *v146; // [rsp+C78h] [rbp+BF8h]
  __int64 *v147; // [rsp+C80h] [rbp+C00h]
  void *v148; // [rsp+C88h] [rbp+C08h]
  PVOID v149; // [rsp+C90h] [rbp+C10h]
  unsigned __int64 v150; // [rsp+C98h] [rbp+C18h]
  char v151; // [rsp+CA7h] [rbp+C27h] BYREF
  __int64 v152; // [rsp+CA8h] [rbp+C28h]
  PVOID v153; // [rsp+CB0h] [rbp+C30h]
  char v154; // [rsp+CBFh] [rbp+C3Fh]
  PVOID Address; // [rsp+CC0h] [rbp+C40h]
  char v156; // [rsp+CCFh] [rbp+C4Fh]
  __int64 v157; // [rsp+CD0h] [rbp+C50h]

  v157 = -2;
  v4 = a1;
  v5 = *(unsigned __int8 *)(a1 + 7712);
  v152 = a1;
  v146 = a2;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(a1 + 7713) = 257;
      *(_BYTE *)(a1 + 7715) = 1;
      v6 = a1 + 4048;
      sub_141684120(a1 + 4048, a1 + 392, 3656);
      switch ( *(_BYTE *)(v4 + 7696) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_123;
        case 2:
          goto LABEL_122;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v6 = a1 + 4048;
      switch ( *(_BYTE *)(a1 + 7696) )
      {
        case 0:
LABEL_4:
          v102[1] = 0;
          v97 = aLoadUsageAnaly;
          v98 = 20;
          v99 = (__int64)aRepo_0;
          v100 = 4;
          v150 = v6;
          v101 = v6;
          v102[0] = v4 + 4568;
          v7 = sub_140003640((volatile void *)(*(_QWORD *)(v4 + 4560) + 16LL));
          if ( v7 )
            goto LABEL_5;
          sub_1416850A0(&v91, &v97, &v99);
          v32 = v91;
          if ( (_BYTE)v91 == 0xFF )
          {
            v7 = *((_QWORD *)&v91 + 1);
LABEL_5:
            v4 = v152;
            v8 = v152 + 4592;
            *(_QWORD *)(v152 + 4592) = v7;
            *(_BYTE *)(v4 + 5616) = 0;
            v9 = v4 + 5624;
            sub_141684120(v4 + 5624, v8, 1032);
            v147 = (__int64 *)(v4 + 7688);
            *(_BYTE *)(v4 + 7688) = 0;
            v6 = v150;
LABEL_7:
            sub_141684120(v4 + 6656, v9, 1032);
            switch ( *(_BYTE *)(v4 + 7680) )
            {
              case 0:
                goto LABEL_9;
              case 1:
                goto LABEL_125;
              case 2:
                goto LABEL_124;
              case 3:
                goto LABEL_21;
            }
          }
          v147 = (__int64 *)(v4 + 4568);
          v33 = BYTE7(v91);
          v34 = *(unsigned __int16 *)((char *)&v91 + 5);
          v35 = *(unsigned int *)((char *)&v91 + 1);
          v36 = *((_QWORD *)&v91 + 1);
          v37 = v92;
          v38 = v93;
          sub_140BF0DE0(v150);
          v26 = ((unsigned __int64)((v33 << 16) | v34) << 32) | v35;
          if ( *v147 == -1 )
          {
            v64 = 1;
            v73 = v152;
            goto LABEL_93;
          }
          v146 = (_QWORD *)(v152 + 4576);
          v42 = *(__int64 **)(v152 + 4576);
          v153 = *(PVOID *)(v152 + 4584);
          Address = nullptr;
          v144 = v42;
          while ( v153 != Address )
          {
            Address = (char *)Address + 1;
            v43 = v42 + 12;
            sub_1402C7520(v42, v39, v40, v41, v89);
            v42 = v43;
          }
          v76 = *v147;
          v64 = 1;
          v73 = v152;
          if ( *v147 )
            goto LABEL_92;
          goto LABEL_93;
        case 1:
LABEL_123:
          v150 = v6;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_122:
          v150 = v6;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v10 = v4 + 7688;
  v11 = *(unsigned __int8 *)(v4 + 7688);
  v9 = v4 + 5624;
  v147 = (__int64 *)(v4 + 7688);
  switch ( v11 )
  {
    case 0LL:
      goto LABEL_7;
    case 1LL:
      v150 = v6;
      v139 = v4 + 5624;
      sub_1416C3400(&off_1417B7B80, v10, a3, a4);
    case 2LL:
      v150 = v6;
      v139 = v4 + 5624;
      sub_1416C3420(&off_1417B7B80, v10, a3, a4);
    case 3LL:
      switch ( *(_BYTE *)(v4 + 7680) )
      {
        case 0:
LABEL_9:
          v145 = v9;
          v150 = v6;
          v12 = *(volatile void **)(v4 + 6656);
          *(_QWORD *)(v4 + 6664) = v12;
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v12, 1, 0) )
            sub_1416C15B0(v12);
          Address = (PVOID)v12;
          v13 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v14 = sub_1416C2250(a1, v10);
            LOBYTE(v14) = v14 ^ 1;
          }
          else
          {
            v14 = 0;
          }
          v15 = (char *)Address;
          v16 = *((_BYTE *)Address + 1);
          LODWORD(v153) = v14;
          if ( !v16 )
            goto LABEL_29;
          *(_QWORD *)&v136 = 0;
          *((_QWORD *)&v136 + 1) = 1;
          *(_QWORD *)&v137 = 0;
          v99 = 1610612768;
          v97 = (const char *)&v136;
          v98 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v97) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v151,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v15 = *((char **)&v136 + 1);
          v19 = (void *)v136;
          LODWORD(v20) = (unsigned __int8)v137;
          v21 = BYTE7(v137);
          v22 = *(unsigned __int16 *)((char *)&v137 + 5);
          v23 = *(unsigned int *)((char *)&v137 + 1);
          if ( !(_BYTE)v153 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v18, v17) )
            *((_BYTE *)Address + 1) = 1;
          v24 = Address;
          v25 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v25 == 2 )
            WakeByAddressSingle(v24);
          if ( v19 != (void *)-1LL )
          {
            v26 = (unsigned __int64)((v21 << 16) | v22) << 32;
            v27 = v26 | v23;
            v28 = (_BYTE *)v152;
            v29 = v15;
LABEL_61:
            sub_141684120(v94, &v103, 136);
            v28[7680] = 1;
            v61 = -1;
            goto LABEL_62;
          }
          LODWORD(v153) = v20;
LABEL_29:
          Address = v15;
          sub_1407BC950(&v91, v15 + 8);
          if ( ((unsigned __int8)v153 & 1) == 0 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v45, v44) )
            *((_BYTE *)Address + 1) = 1;
          v46 = Address;
          v47 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v47 == 2 )
            WakeByAddressSingle(v46);
          v48 = v152;
          v31 = (void *)(v152 + 6672);
          sub_141684120(v152 + 6672, &v91, 992);
          Address = (PVOID)(v48 + 7672);
          *(_BYTE *)(v48 + 7672) = 0;
LABEL_34:
          v153 = v31;
          sub_141684120(&v97, v31, 992);
          v49 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v154 = 1;
            v83 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v49 = v83;
          }
          if ( *((_DWORD *)v49 + 4) == 2 )
          {
            v50 = 704;
            if ( *(_BYTE *)v49 )
              v50 = 472;
            v51 = v49[1] + v50;
            v154 = 0;
            v52 = sub_14089E500(v51, (__int64)v49, (__int64)&v97, (__int64)&off_1417642A8);
          }
          else
          {
            v53 = 704;
            if ( *((_BYTE *)v49 + 64) )
              v53 = 472;
            v54 = v49[9] + v53;
            v154 = 0;
            v52 = sub_14089E500(v54, (__int64)(v49 + 8), (__int64)&v97, (__int64)&off_141764290);
          }
          v4 = v152;
          *(_QWORD *)(v152 + 7664) = v52;
LABEL_44:
          v144 = (__int64 *)(v4 + 7664);
          sub_140B02580(&v136, v4 + 7664, v146);
          v26 = v136;
          if ( (_QWORD)v136 == -1 )
          {
            *(_BYTE *)Address = 3;
            v28 = (_BYTE *)v152;
LABEL_55:
            v28[7680] = 3;
LABEL_56:
            v28[7688] = 3;
            v28[7696] = 3;
            v59 = 3;
            result = 1;
            goto LABEL_94;
          }
          if ( (_DWORD)v136 == 2 )
          {
            v19 = *((void **)&v136 + 1);
            v29 = (PVOID)v137;
            v55 = 0x800000000000000CuLL;
            v20 = *((_QWORD *)&v137 + 1);
          }
          else
          {
            v55 = *((_QWORD *)&v136 + 1);
            v29 = *((PVOID *)&v137 + 1);
            v19 = (void *)v137;
            v20 = *(_QWORD *)v138;
            v132 = *(_OWORD *)&v138[8];
            v133 = *(_OWORD *)&v138[24];
            v134 = *(_OWORD *)&v138[40];
            v135 = *(_OWORD *)&v138[56];
          }
          v120 = v132;
          v121 = v133;
          v122 = v134;
          v123 = v135;
          v56 = *v144;
          v149 = Address;
          v148 = v153;
          if ( (unsigned __int8)sub_1412F2A80(v56) )
          {
            v149 = Address;
            v148 = v153;
            sub_1412E7580(v56);
          }
          if ( v26 )
          {
            if ( (_DWORD)v26 == 2 )
            {
              *(_QWORD *)&v136 = v55;
              *((_QWORD *)&v136 + 1) = v19;
              *(_QWORD *)&v137 = v29;
              *((_QWORD *)&v137 + 1) = v20;
              *(_OWORD *)v138 = v120;
              v141 = &v136;
              v142 = (__int64)sub_141230630;
              sub_14149C0F0(&v132, &unk_1417B8CD1, &v141);
              v149 = Address;
              v148 = v153;
              sub_140BF0F60(&v136);
              v29 = *((PVOID *)&v132 + 1);
              v19 = (void *)v132;
              v20 = v133;
            }
            else
            {
              *(_QWORD *)&v136 = v55;
              *((_QWORD *)&v136 + 1) = v19;
              *(_QWORD *)&v137 = v29;
              *((_QWORD *)&v137 + 1) = v20;
              *(_OWORD *)v138 = v120;
              *(_OWORD *)&v138[16] = v121;
              *(_OWORD *)&v138[32] = v122;
              *(_OWORD *)&v138[48] = v123;
              v141 = nullptr;
              v142 = 1;
              v143 = 0;
              *(_QWORD *)&v133 = 1610612768;
              *(_QWORD *)&v132 = &v141;
              *((_QWORD *)&v132 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_140B036A0(&v136, &v132) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v151,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v19 = v141;
              v29 = (PVOID)v142;
              v20 = v143;
              v149 = Address;
              v148 = v153;
              sub_140BF2F60(&v136);
            }
            *(_BYTE *)Address = 1;
            v28 = (_BYTE *)v152;
            goto LABEL_60;
          }
          v110 = v120;
          v111 = v121;
          v112 = v122;
          v113 = v123;
          *(_BYTE *)Address = 1;
          v28 = (_BYTE *)v152;
          if ( v55 == -2 )
            goto LABEL_55;
          v109 = v113;
          v108 = v112;
          v107 = v111;
          v106 = v110;
          if ( v55 == -1 )
          {
LABEL_60:
            v27 = v20 >> 8;
            goto LABEL_61;
          }
          v119 = v109;
          v118 = v108;
          v117 = v107;
          v116 = v106;
          *(_QWORD *)&v114 = v55;
          *((_QWORD *)&v114 + 1) = v19;
          *(_QWORD *)&v115 = v29;
          *((_QWORD *)&v115 + 1) = v20;
          v77 = *(char **)(v152 + 6664);
          LOBYTE(v58) = 1;
          if ( _InterlockedCompareExchange8(v77, 1, 0) )
          {
            v156 = 1;
            sub_1416C15B0(v77);
          }
          v78 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v156 = 1;
            v84 = sub_1416C2250(v58, v57);
            v79 = v84;
            LOBYTE(v79) = v84 ^ 1;
            if ( v77[1] )
            {
LABEL_87:
              if ( !(_BYTE)v79 )
              {
                if ( 2 * *v78 )
                {
                  v156 = 1;
                  if ( !(unsigned __int8)sub_1416C2250(v79, v57) )
                    v77[1] = 1;
                }
              }
              v80 = *v77;
              *v77 = 0;
              if ( v80 == 2 )
              {
                v156 = 1;
                WakeByAddressSingle(v77);
              }
              goto LABEL_114;
            }
          }
          else
          {
            v79 = 0;
            if ( v77[1] )
              goto LABEL_87;
          }
          LODWORD(v153) = v79;
          Address = v77;
          sub_1403A6A60(&v97, v77 + 8, &v114);
          if ( (_DWORD)v97 != -1 )
            sub_140BF2F60(&v97);
          if ( !(_BYTE)v153 )
          {
            if ( 2 * *v78 )
            {
              v156 = 1;
              if ( !(unsigned __int8)sub_1416C2250(v86, v85) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v87 = Address;
          v88 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v88 == 2 )
          {
            v156 = 1;
            WakeByAddressSingle(v87);
          }
LABEL_114:
          *(_OWORD *)&v138[48] = v119;
          *(_OWORD *)&v138[32] = v118;
          *(_OWORD *)&v138[16] = v117;
          *(_OWORD *)v138 = v116;
          v137 = v115;
          v136 = v114;
          v156 = 0;
          sub_140ACD9D0(&v97, &v136);
          v61 = (__int64)v97;
          v19 = (void *)v98;
          v29 = (PVOID)v99;
          v20 = v100;
          v26 = v101;
          sub_141684120(&v103, v102, 136);
          sub_141684120(v94, &v103, 136);
          v28 = (_BYTE *)v152;
          *(_BYTE *)(v152 + 7680) = 1;
          if ( v61 == -2 )
            goto LABEL_56;
          v27 = v20 >> 8;
LABEL_62:
          v62 = v27 << 8;
          v38 = v62 | (unsigned __int8)v20;
          sub_141684120(v90, v94, 136);
          if ( v61 != -1 )
          {
            sub_141684120(v96, v90, 136);
            v95[0] = v61;
            v95[1] = v19;
            v95[2] = v29;
            v95[3] = v62 | (unsigned __int8)v20;
            v95[4] = v26;
            sub_140B0B650(&v97, v95);
            v26 = ((unsigned __int64)((HIBYTE(v98) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v98 + 5)) << 32)
                | *(unsigned int *)((char *)&v98 + 1);
            v32 = v98;
            v36 = v99;
            v37 = v100;
            v38 = v101;
            if ( v97 == (const char *)-1LL )
            {
              v64 = 0;
            }
            else
            {
              HIBYTE(v98) = (((unsigned __int64)((HIBYTE(v98) << 16)
                                               | (unsigned int)*(unsigned __int16 *)((char *)&v98 + 5)) << 32)
                           | *(unsigned int *)((char *)&v98 + 1)) >> 48;
              *(_WORD *)((char *)&v98 + 5) = WORD2(v26);
              *(_DWORD *)((char *)&v98 + 1) = v26;
              v103 = 0;
              v104 = 1;
              v105 = 0;
              v92 = 1610612768;
              *(_QWORD *)&v91 = &v103;
              *((_QWORD *)&v91 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v97, &v91, v63) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v151,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v36 = v103;
              v37 = v104;
              v38 = v105;
              sub_140BF0F60(&v97);
              v64 = 1;
              v32 = 3;
            }
            v66 = v150;
            goto LABEL_76;
          }
          if ( v62 < 0 )
          {
            v65 = 0;
            goto LABEL_68;
          }
          v66 = v150;
          if ( !v38 )
          {
            v37 = 1;
            if ( !v19 )
              goto LABEL_75;
            goto LABEL_74;
          }
          v67 = v150;
          nullsub_1(v150);
          v65 = 1;
          v68 = sub_140001650(v38, 1);
          if ( !v68 )
          {
LABEL_68:
            v153 = v29;
            Address = v19;
            sub_1416C2D4B(v65, v38);
          }
          v37 = v68;
          sub_141684120(v68, v29, v38);
          v66 = v67;
          if ( v19 )
          {
LABEL_74:
            v69 = v66;
            sub_140001660(v29, v19, 1);
            v66 = v69;
          }
LABEL_75:
          v64 = 1;
          v32 = 3;
          v36 = v38;
LABEL_76:
          *(_BYTE *)v147 = 1;
          sub_140BF0DE0(v66);
          v73 = v152;
          if ( *(_QWORD *)(v152 + 4568) != -1 )
          {
            v146 = (_QWORD *)(v152 + 4576);
            v74 = *(__int64 **)(v152 + 4576);
            v153 = *(PVOID *)(v152 + 4584);
            Address = nullptr;
            v147 = v74;
            while ( v153 != Address )
            {
              Address = (char *)Address + 1;
              v75 = v74 + 12;
              sub_1402C7520(v74, v70, v71, v72, v89);
              v74 = v75;
            }
            v73 = v152;
            v76 = *(_QWORD *)(v152 + 4568);
            if ( v76 )
LABEL_92:
              sub_140001660(*v146, 96 * v76, 8);
          }
LABEL_93:
          *(_BYTE *)(v73 + 7696) = 1;
          sub_140BE7030(v150);
          v126 = v26;
          v128 = BYTE6(v26);
          v127 = WORD2(v26);
          v130 = v37;
          v131 = v38;
          v125 = v32;
          v129 = v36;
          v124 = v64;
          v81 = v152;
          *(_BYTE *)(v152 + 7715) = 0;
          sub_141684120(&v97, v81, 360);
          *(_BYTE *)(v81 + 7714) = 0;
          v82 = *(_QWORD *)(v81 + 384);
          *(_BYTE *)(v81 + 7713) = 0;
          v92 = *(_QWORD *)(v81 + 376);
          v91 = *(_OWORD *)(v81 + 360);
          sub_14047E370(
            (unsigned int)&v97,
            v82,
            (unsigned int)&v124,
            (unsigned int)&v91,
            *(_DWORD *)(v81 + 7704),
            *(_DWORD *)(v81 + 7708));
          v59 = 1;
          result = 0;
          v28 = (_BYTE *)v152;
LABEL_94:
          v28[7712] = v59;
          return result;
        case 1:
LABEL_125:
          v145 = v9;
          JUMPOUT(0x140CDF57ALL);
        case 2:
LABEL_124:
          v145 = v9;
          v150 = v6;
          sub_1416C3420(&off_1417BB4D8, v10, a3, a4);
        case 3:
LABEL_21:
          Address = (PVOID)(v4 + 7672);
          v30 = *(unsigned __int8 *)(v4 + 7672);
          v31 = (void *)(v4 + 6672);
          v150 = v6;
          v145 = v9;
          switch ( v30 )
          {
            case 0LL:
              goto LABEL_34;
            case 1LL:
              v140 = v4 + 6672;
              sub_1416C3400(&off_1417B8098, v10, a3, a4);
            case 2LL:
              v140 = v4 + 6672;
              sub_1416C3420(&off_1417B8098, v10, a3, a4);
            case 3LL:
              v153 = (PVOID)(v4 + 6672);
              goto LABEL_44;
          }
      }
  }
}