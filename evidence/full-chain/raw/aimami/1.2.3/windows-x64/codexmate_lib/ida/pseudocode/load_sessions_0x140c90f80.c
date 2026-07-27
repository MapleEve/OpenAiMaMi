// module: codexmate_lib
// addr: 0x140c90f80
// name: load_sessions
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = load_sessions | mapped via command-name string xref (win-native, ground-truth)
char __fastcall load_sessions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int128 *v9; // rdx
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int128 v12; // xmm0
  volatile void *v13; // rbx
  __int64 *v14; // r14
  char *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // r13
  __int128 v19; // rdi
  int v20; // r12d
  unsigned int v21; // r15d
  __int64 v22; // rbx
  PVOID v23; // rcx
  char v24; // al
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rbx
  char v27; // bl
  int v28; // r13d
  unsigned int v29; // r12d
  __int64 v30; // r15
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  PVOID v36; // rcx
  char v37; // al
  _QWORD *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdi
  const char *v45; // r14
  __int64 v46; // rbx
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // r13
  __int64 v49; // r12
  _BYTE *v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // r8
  int v53; // r14d
  __int64 v54; // rbx
  const char *v55; // rax
  char *v56; // r8
  __int128 v57; // xmm0
  char v58; // cl
  char result; // al
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rbx
  __int64 v63; // rax
  unsigned __int8 v64; // r12
  __int64 v65; // r13
  __int64 *v66; // rcx
  __int64 *v67; // r13
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rdi
  __int64 v71; // rdx
  int v72; // eax
  _QWORD *v73; // rdi
  __int128 v74; // [rsp+30h] [rbp-50h] BYREF
  __int128 v75; // [rsp+40h] [rbp-40h]
  _QWORD v76[3]; // [rsp+410h] [rbp+390h] BYREF
  __int128 v77; // [rsp+428h] [rbp+3A8h]
  __m256i v78; // [rsp+438h] [rbp+3B8h]
  __int128 v79; // [rsp+458h] [rbp+3D8h]
  __int128 v80; // [rsp+468h] [rbp+3E8h]
  __int64 v81; // [rsp+478h] [rbp+3F8h]
  const char *v82; // [rsp+480h] [rbp+400h] BYREF
  __int64 v83; // [rsp+488h] [rbp+408h]
  __int64 v84; // [rsp+490h] [rbp+410h] BYREF
  _BYTE v85[48]; // [rsp+498h] [rbp+418h]
  __int128 v86; // [rsp+4C8h] [rbp+448h]
  __int128 v87; // [rsp+4D8h] [rbp+458h]
  __int64 v88; // [rsp+4E8h] [rbp+468h]
  __int128 v89; // [rsp+860h] [rbp+7E0h]
  __int128 v90; // [rsp+870h] [rbp+7F0h]
  __int128 v91; // [rsp+880h] [rbp+800h]
  __int64 v92; // [rsp+890h] [rbp+810h]
  __m256i v93; // [rsp+8A0h] [rbp+820h]
  __int128 v94; // [rsp+8C0h] [rbp+840h]
  __int128 v95; // [rsp+8D0h] [rbp+850h]
  __int64 v96; // [rsp+8E0h] [rbp+860h]
  __int64 v97; // [rsp+8E8h] [rbp+868h] BYREF
  char v98; // [rsp+8F0h] [rbp+870h]
  int v99; // [rsp+8F1h] [rbp+871h]
  __int16 v100; // [rsp+8F5h] [rbp+875h]
  char v101; // [rsp+8F7h] [rbp+877h]
  __int64 v102; // [rsp+8F8h] [rbp+878h]
  __int128 v103; // [rsp+900h] [rbp+880h]
  __m256i v104; // [rsp+910h] [rbp+890h] BYREF
  __int128 v105; // [rsp+930h] [rbp+8B0h]
  __int128 v106; // [rsp+940h] [rbp+8C0h]
  __int64 v107; // [rsp+950h] [rbp+8D0h]
  __m256i v108; // [rsp+960h] [rbp+8E0h]
  __int128 v109; // [rsp+980h] [rbp+900h]
  __int128 v110; // [rsp+990h] [rbp+910h]
  __int64 v111; // [rsp+9A0h] [rbp+920h]
  __int64 v112; // [rsp+9A8h] [rbp+928h]
  __int128 v113; // [rsp+9B0h] [rbp+930h] BYREF
  __int128 v114; // [rsp+9C0h] [rbp+940h]
  __int128 v115; // [rsp+9D0h] [rbp+950h]
  __int64 v116; // [rsp+9E0h] [rbp+960h]
  void *v117; // [rsp+9E8h] [rbp+968h] BYREF
  __int64 v118; // [rsp+9F0h] [rbp+970h]
  __int64 v119; // [rsp+9F8h] [rbp+978h]
  __int64 v120; // [rsp+A00h] [rbp+980h]
  __int64 v121; // [rsp+A08h] [rbp+988h]
  _BYTE *v122; // [rsp+A10h] [rbp+990h]
  __int64 *v123; // [rsp+A18h] [rbp+998h]
  char *v124; // [rsp+A20h] [rbp+9A0h]
  __int64 v125; // [rsp+A28h] [rbp+9A8h]
  PVOID Address; // [rsp+A30h] [rbp+9B0h]
  char v127; // [rsp+A3Eh] [rbp+9BEh]
  char v128; // [rsp+A3Fh] [rbp+9BFh] BYREF
  __int64 v129; // [rsp+A40h] [rbp+9C0h]

  v129 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 1712);
  v125 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 1713) = 257;
      *(_BYTE *)(a1 + 1715) = 1;
      v7 = a1 + 1048;
      sub_141684120(a1 + 1048, a1 + 392, 656);
      switch ( *(_BYTE *)(v5 + 1696) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_96;
        case 2:
          goto LABEL_95;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 1048;
      switch ( *(_BYTE *)(a1 + 1696) )
      {
        case 0:
LABEL_4:
          v82 = aLoadSessions;
          v83 = 13;
          v84 = (__int64)aRepo_0;
          *(_QWORD *)v85 = 4;
          v120 = v7;
          *(_QWORD *)&v85[8] = v7;
          *(_OWORD *)&v85[16] = (unsigned __int64)(v5 + 1568);
          v8 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 1560) + 16LL));
          if ( v8 )
            goto LABEL_5;
          sub_1416850A0(&v74, &v82, &v84);
          v27 = v74;
          if ( (_BYTE)v74 != 0xFF )
          {
            v123 = (__int64 *)(v5 + 1568);
            v28 = BYTE7(v74);
            v29 = *(unsigned __int16 *)((char *)&v74 + 5);
            v30 = *(unsigned int *)((char *)&v74 + 1);
            v31 = *((_QWORD *)&v74 + 1);
            v19 = v75;
            sub_140BF0DE0(v120);
            v25 = ((unsigned __int64)((v28 << 16) | v29) << 32) | v30;
            if ( *v123 == -1 )
            {
              v64 = 1;
              v65 = v125;
              goto LABEL_79;
            }
            v124 = (char *)(v125 + 1576);
            v32 = *(_QWORD *)(v125 + 1576);
            v122 = *(_BYTE **)(v125 + 1584);
            Address = nullptr;
            v121 = v32;
            while ( v122 != Address )
            {
              Address = (char *)Address + 1;
              v33 = v32 + 96;
              sub_1402C7520();
              v32 = v33;
            }
            v68 = *v123;
            v64 = 1;
            v65 = v125;
            if ( !*v123 )
              goto LABEL_79;
LABEL_76:
            sub_140001660(*(_QWORD *)v124, 96 * v68, 8);
LABEL_79:
            *(_BYTE *)(v65 + 1696) = 1;
            sub_140BE0090(v120);
            v99 = v25;
            v101 = BYTE6(v25);
            v100 = WORD2(v25);
            v103 = v19;
            v98 = v27;
            v102 = v31;
            v97 = v64;
            v70 = v125;
            *(_BYTE *)(v125 + 1715) = 0;
            sub_141684120(&v82, v70, 360);
            *(_BYTE *)(v70 + 1714) = 0;
            v71 = *(_QWORD *)(v70 + 384);
            *(_BYTE *)(v70 + 1713) = 0;
            *(_QWORD *)&v75 = *(_QWORD *)(v70 + 376);
            v74 = *(_OWORD *)(v70 + 360);
            sub_14047E370(
              (unsigned int)&v82,
              v71,
              (unsigned int)&v97,
              (unsigned int)&v74,
              *(_DWORD *)(v70 + 1704),
              *(_DWORD *)(v70 + 1708));
            v58 = 1;
            result = 0;
            v50 = (_BYTE *)v125;
            goto LABEL_80;
          }
          v8 = *((_QWORD *)&v74 + 1);
LABEL_5:
          v5 = v125;
          *(_QWORD *)(v125 + 1592) = v8;
          *(_BYTE *)(v5 + 1616) = 0;
          a1 = v5 + 1624;
          *(_QWORD *)(v5 + 1624) = *(_QWORD *)(v5 + 1592);
          *(_QWORD *)(v5 + 1632) = *(_QWORD *)(v5 + 1600);
          *(_QWORD *)(v5 + 1640) = *(_QWORD *)(v5 + 1608);
          *(_BYTE *)(v5 + 1648) = *(_BYTE *)(v5 + 1616);
          *(_DWORD *)(v5 + 1649) = *(_DWORD *)(v5 + 1617);
          *(_WORD *)(v5 + 1653) = *(_WORD *)(v5 + 1621);
          *(_BYTE *)(v5 + 1655) = *(_BYTE *)(v5 + 1623);
          v122 = (_BYTE *)(v5 + 1688);
          *(_BYTE *)(v5 + 1688) = 0;
          v10 = *(_OWORD *)(v5 + 1624);
          v123 = (__int64 *)(v5 + 1624);
          *(_OWORD *)(v5 + 1672) = *(_OWORD *)(v5 + 1640);
          *(_OWORD *)(v5 + 1656) = v10;
LABEL_8:
          v13 = *(volatile void **)(v5 + 1656);
          *(_QWORD *)(v5 + 1664) = v13;
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v13, 1, 0) )
            sub_1416C15B0(v13);
          Address = (PVOID)v13;
          v14 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v72 = sub_1416C2250(a1, v9);
            LOBYTE(v72) = v72 ^ 1;
            LODWORD(v121) = v72;
            v15 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_25;
          }
          else
          {
            LODWORD(v121) = 0;
            v15 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_25;
          }
          *(_QWORD *)&v113 = 0;
          *((_QWORD *)&v113 + 1) = 1;
          *(_QWORD *)&v114 = 0;
          v84 = 1610612768;
          v82 = (const char *)&v113;
          v83 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v82) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v128,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v124 = *((char **)&v113 + 1);
          v18 = (void *)v113;
          LODWORD(v19) = (unsigned __int8)v114;
          v20 = BYTE7(v114);
          v21 = *(unsigned __int16 *)((char *)&v114 + 5);
          v22 = *(unsigned int *)((char *)&v114 + 1);
          if ( !(_BYTE)v121 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v17, v16) )
            *((_BYTE *)Address + 1) = 1;
          v23 = Address;
          v24 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v24 == 2 )
            WakeByAddressSingle(v23);
          if ( v18 != (void *)-1LL )
          {
            v25 = (unsigned __int64)((v20 << 16) | v21) << 32;
            v26 = v25 | v22;
LABEL_54:
            v60 = v125;
            v108 = v104;
            v109 = v105;
            v110 = v106;
            v111 = v107;
            *(_BYTE *)(v125 + 1680) = 1;
            v93 = v108;
            v94 = v109;
            v95 = v110;
            v96 = v111;
            goto LABEL_55;
          }
          v15 = v124;
          LODWORD(v121) = v19;
LABEL_25:
          Address = v15;
          sub_1407BC950(&v74, v15 + 8);
          if ( (v121 & 1) == 0 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v35, v34) )
            *((_BYTE *)Address + 1) = 1;
          v36 = Address;
          v37 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v37 == 2 )
            WakeByAddressSingle(v36);
          sub_141684120(&v82, &v74, 992);
          v38 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v127 = 1;
            v73 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v38 = v73;
          }
          if ( *((_DWORD *)v38 + 4) == 2 )
          {
            v39 = 704;
            if ( *(_BYTE *)v38 )
              v39 = 472;
            v40 = v38[1] + v39;
            v127 = 0;
            v41 = sub_14089D370(v40, v38, &v82, &off_1417642A8);
          }
          else
          {
            v42 = 704;
            if ( *((_BYTE *)v38 + 64) )
              v42 = 472;
            v43 = v38[9] + v42;
            v127 = 0;
            v41 = sub_14089D370(v43, v38 + 8, &v82, &off_141764290);
          }
          v44 = v125;
          *(_QWORD *)(v125 + 1672) = v41;
          Address = (PVOID)(v44 + 1672);
          sub_140AFEA70(&v82, v44 + 1672, a2);
          v45 = v82;
          if ( v82 == (const char *)-3LL )
          {
            v50 = (_BYTE *)v125;
            *(_BYTE *)(v125 + 1680) = 3;
          }
          else
          {
            if ( (_DWORD)v82 == -2 )
            {
              v46 = v83;
              v25 = (unsigned __int8)v84;
              v47 = ((unsigned __int64)((HIBYTE(v84) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v84 + 5)) << 32)
                  | *(unsigned int *)((char *)&v84 + 1);
              v48 = 0x800000000000000CuLL;
              v49 = *(_QWORD *)v85;
            }
            else
            {
              v48 = v83;
              v46 = v84;
              v25 = v85[0];
              v47 = ((unsigned __int64)((v85[7] << 16) | (unsigned int)*(unsigned __int16 *)&v85[5]) << 32)
                  | *(unsigned int *)&v85[1];
              v49 = *(_QWORD *)&v85[8];
              v113 = *(_OWORD *)&v85[16];
              v114 = *(_OWORD *)&v85[32];
              v115 = v86;
              v116 = v87;
            }
            v89 = v113;
            v90 = v114;
            v91 = v115;
            v92 = v116;
            v51 = *(_QWORD *)Address;
            if ( (unsigned __int8)sub_1412F2A80(*(_QWORD *)Address) )
              sub_1412E7580(v51);
            if ( (_DWORD)v45 != -1 )
            {
              if ( (_DWORD)v45 == -2 )
              {
                v82 = (const char *)v48;
                v83 = v46;
                LOBYTE(v84) = v25;
                *(_DWORD *)((char *)&v84 + 1) = v47;
                HIBYTE(v84) = BYTE6(v47);
                *(_WORD *)((char *)&v84 + 5) = WORD2(v47);
                *(_QWORD *)v85 = v49;
                *(_OWORD *)&v85[8] = v89;
                v117 = nullptr;
                v118 = 1;
                v119 = 0;
                *(_QWORD *)&v114 = 1610612768;
                *(_QWORD *)&v113 = &v117;
                *((_QWORD *)&v113 + 1) = &off_1417C41C0;
                if ( (unsigned __int8)sub_141230630(&v82, &v113, v52) )
                  sub_1416C3060(
                    (unsigned int)aADisplayImplem_11,
                    55,
                    (unsigned int)&v128,
                    (unsigned int)&unk_1417BC180,
                    (__int64)&off_1417C4278);
                v18 = v117;
                v124 = (char *)v118;
                LOBYTE(v19) = v119;
                v53 = HIBYTE(v119);
                DWORD2(v19) = *(unsigned __int16 *)((char *)&v119 + 5);
                v54 = *(unsigned int *)((char *)&v119 + 1);
                sub_140BF0F60(&v82);
              }
              else
              {
                v82 = v45;
                v83 = v48;
                v84 = v46;
                v85[0] = v25;
                *(_DWORD *)&v85[1] = v47;
                v85[7] = BYTE6(v47);
                *(_WORD *)&v85[5] = WORD2(v47);
                *(_QWORD *)&v85[8] = v49;
                *(_OWORD *)&v85[16] = v89;
                *(_OWORD *)&v85[32] = v90;
                v86 = v91;
                *(_QWORD *)&v87 = v92;
                v117 = nullptr;
                v118 = 1;
                v119 = 0;
                *(_QWORD *)&v114 = 1610612768;
                *(_QWORD *)&v113 = &v117;
                *((_QWORD *)&v113 + 1) = &off_1417C41C0;
                if ( (unsigned __int8)sub_140B036A0(&v82, &v113) )
                  sub_1416C3060(
                    (unsigned int)aADisplayImplem_11,
                    55,
                    (unsigned int)&v128,
                    (unsigned int)&unk_1417BC180,
                    (__int64)&off_1417C4278);
                v18 = v117;
                v124 = (char *)v118;
                LOBYTE(v19) = v119;
                v53 = HIBYTE(v119);
                DWORD2(v19) = *(unsigned __int16 *)((char *)&v119 + 5);
                v54 = *(unsigned int *)((char *)&v119 + 1);
                sub_140BF2F60(&v82);
              }
              v26 = ((unsigned __int64)((unsigned int)(v53 << 16) | DWORD2(v19)) << 32) | v54;
              goto LABEL_54;
            }
            *(_QWORD *)&v113 = v48;
            *((_QWORD *)&v113 + 1) = v46;
            *(_QWORD *)&v114 = (unsigned __int8)v25 | (v47 << 8);
            DWORD2(v114) = (unsigned __int8)v25 | ((_DWORD)v47 << 8);
            sub_140ACA580(&v82, &v113);
            v55 = v82;
            v18 = (void *)v83;
            v56 = (char *)v84;
            v57 = *(_OWORD *)v85;
            *(_QWORD *)&v19 = *(_QWORD *)v85;
            v104 = *(__m256i *)&v85[16];
            v105 = v86;
            v106 = v87;
            v107 = v88;
            v111 = v88;
            v110 = v87;
            v109 = v86;
            v108 = *(__m256i *)&v85[16];
            v50 = (_BYTE *)v125;
            *(_BYTE *)(v125 + 1680) = 1;
            if ( v55 != (const char *)-2LL )
            {
              v60 = v111;
              v96 = v111;
              v95 = v110;
              v94 = v109;
              v93 = v108;
              if ( v55 != (const char *)-1LL )
              {
                v81 = v96;
                v80 = v95;
                v79 = v94;
                v78 = v93;
                v76[0] = v55;
                v76[1] = v18;
                v76[2] = v56;
                v77 = v57;
                sub_140B05A90(&v82, v76);
                v25 = ((unsigned __int64)((HIBYTE(v83) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v83 + 5)) << 32)
                    | *(unsigned int *)((char *)&v83 + 1);
                v27 = v83;
                v31 = v84;
                v19 = *(_OWORD *)v85;
                if ( v82 == (const char *)-1LL )
                {
                  v64 = 0;
                }
                else
                {
                  HIBYTE(v83) = (((unsigned __int64)((HIBYTE(v83) << 16)
                                                   | (unsigned int)*(unsigned __int16 *)((char *)&v83 + 5)) << 32)
                               | *(unsigned int *)((char *)&v83 + 1)) >> 48;
                  *(_WORD *)((char *)&v83 + 5) = WORD2(v25);
                  *(_DWORD *)((char *)&v83 + 1) = v25;
                  v104.m256i_i64[0] = 0;
                  *(_OWORD *)&v104.m256i_u64[1] = 1u;
                  *(_QWORD *)&v75 = 1610612768;
                  *(_QWORD *)&v74 = &v104;
                  *((_QWORD *)&v74 + 1) = &off_1417C41C0;
                  if ( (unsigned __int8)sub_141230630(&v82, &v74, v69) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v128,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v19 = *(_OWORD *)&v104.m256i_u64[1];
                  v31 = v104.m256i_i64[0];
                  sub_140BF0F60(&v82);
                  v64 = 1;
                  v27 = 3;
                }
LABEL_63:
                *v122 = 1;
                sub_140BF0DE0(v120);
                v65 = v125;
                if ( *(_QWORD *)(v125 + 1568) == -1 )
                  goto LABEL_79;
                v124 = (char *)(v125 + 1576);
                v66 = *(__int64 **)(v125 + 1576);
                v122 = *(_BYTE **)(v125 + 1584);
                Address = nullptr;
                v123 = v66;
                while ( v122 != Address )
                {
                  Address = (char *)Address + 1;
                  v67 = v66 + 12;
                  sub_1402C7520();
                  v66 = v67;
                }
                v65 = v125;
                v68 = *(_QWORD *)(v125 + 1568);
                if ( !v68 )
                  goto LABEL_79;
                goto LABEL_76;
              }
              v124 = v56;
              v26 = (unsigned __int64)v19 >> 8;
LABEL_55:
              v61 = v26 << 8;
              *((_QWORD *)&v19 + 1) = v61 | (unsigned __int8)v19;
              if ( v61 < 0 )
              {
                v62 = 0;
                goto LABEL_57;
              }
              if ( *((_QWORD *)&v19 + 1) )
              {
                nullsub_1(v60);
                v62 = 1;
                v63 = sub_140001650(*((_QWORD *)&v19 + 1), 1);
                if ( !v63 )
                {
LABEL_57:
                  Address = v18;
                  sub_1416C2D4B(v62, *((_QWORD *)&v19 + 1));
                }
                *(_QWORD *)&v19 = v63;
                sub_141684120(v63, v124, *((_QWORD *)&v19 + 1));
                if ( !v18 )
                  goto LABEL_62;
              }
              else
              {
                *(_QWORD *)&v19 = 1;
                if ( !v18 )
                  goto LABEL_62;
              }
              sub_140001660(v124, v18, 1);
LABEL_62:
              v64 = 1;
              v27 = 3;
              v31 = *((_QWORD *)&v19 + 1);
              goto LABEL_63;
            }
          }
          v50[1688] = 3;
          v50[1696] = 3;
          v58 = 3;
          result = 1;
LABEL_80:
          v50[1712] = v58;
          return result;
        case 1:
LABEL_96:
          v120 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_95:
          v120 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
LABEL_6:
          v120 = v7;
          v122 = (_BYTE *)(v5 + 1688);
          v11 = *(unsigned __int8 *)(v5 + 1688);
          v9 = (__int128 *)(v5 + 1624);
          v123 = (__int64 *)(v5 + 1624);
          switch ( v11 )
          {
            case 0LL:
              v12 = *v9;
              *(_OWORD *)(v5 + 1672) = *(_OWORD *)(v5 + 1640);
              *(_OWORD *)(v5 + 1656) = v12;
              break;
            case 1LL:
              v112 = v5 + 1624;
              sub_1416C3400(&off_1417B7B80, v9, a3, a4);
            case 2LL:
              v112 = v5 + 1624;
              sub_1416C3420(&off_1417B7B80, v9, a3, a4);
            case 3LL:
              goto LABEL_8;
          }
          goto LABEL_8;
      }
  }
}