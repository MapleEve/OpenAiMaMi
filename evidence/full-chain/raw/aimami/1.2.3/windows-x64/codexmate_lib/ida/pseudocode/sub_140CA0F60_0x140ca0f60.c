// module: codexmate_lib
// addr: 0x140ca0f60
// name: sub_140CA0F60
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140CA0F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // rcx
  bool v5; // of
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  char v10; // bl
  __int64 v11; // rax
  __int128 v12; // xmm0
  const char *v13; // r14
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  const char *v18; // r13
  _QWORD *v19; // r12
  const char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rt0
  volatile signed __int64 *v23; // r8
  __int64 v24; // rt0
  volatile signed __int64 *v25; // r9
  __int64 v26; // rt0
  volatile signed __int64 *v27; // r10
  __int64 v28; // rt0
  volatile signed __int64 *v29; // r11
  __int64 v30; // rt0
  volatile signed __int64 *v31; // rdi
  __int64 v32; // rt0
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // r15
  __int64 v38; // r14
  __int128 v39; // rdi
  const char *v40; // rcx
  const char *v41; // r12
  __int64 v42; // rax
  unsigned __int8 v43; // r12
  __int64 v44; // r13
  __int64 v45; // rcx
  __int64 v46; // rcx
  const char *v47; // r14
  unsigned __int64 v48; // r15
  _BYTE *v49; // rdx
  char v50; // cl
  char result; // al
  _QWORD *v52; // r12
  const char *v53; // r13
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 *v56; // r14
  const char *v57; // rax
  __int128 v58; // xmm0
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 *v63; // rcx
  __int64 *v64; // r13
  __int64 v65; // rdi
  __int64 v66; // rdx
  _QWORD *v67; // rdi
  _QWORD v68[4]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v69; // [rsp+58h] [rbp-28h]
  __int128 v70; // [rsp+68h] [rbp-18h]
  __int64 v71; // [rsp+78h] [rbp-8h]
  __int128 v72; // [rsp+80h] [rbp+0h]
  __m256i v73; // [rsp+90h] [rbp+10h]
  __m256i v74; // [rsp+B0h] [rbp+30h]
  __int128 v75; // [rsp+D0h] [rbp+50h]
  __int128 v76; // [rsp+E0h] [rbp+60h]
  __int128 v77; // [rsp+F0h] [rbp+70h]
  __m256i v78; // [rsp+100h] [rbp+80h] BYREF
  __m256i v79; // [rsp+120h] [rbp+A0h]
  __int128 v80; // [rsp+140h] [rbp+C0h]
  __int128 v81; // [rsp+150h] [rbp+D0h]
  __int128 v82; // [rsp+160h] [rbp+E0h]
  _BYTE v83[40]; // [rsp+170h] [rbp+F0h] BYREF
  __m256i v84; // [rsp+198h] [rbp+118h]
  __m256i v85; // [rsp+1B8h] [rbp+138h]
  __int128 v86; // [rsp+1D8h] [rbp+158h]
  __int128 v87; // [rsp+1E8h] [rbp+168h]
  __int128 v88; // [rsp+1F8h] [rbp+178h]
  __int64 v89; // [rsp+208h] [rbp+188h] BYREF
  char v90; // [rsp+210h] [rbp+190h]
  int v91; // [rsp+211h] [rbp+191h]
  __int16 v92; // [rsp+215h] [rbp+195h]
  char v93; // [rsp+217h] [rbp+197h]
  __int64 v94; // [rsp+218h] [rbp+198h]
  __int128 v95; // [rsp+220h] [rbp+1A0h]
  __int128 v96; // [rsp+230h] [rbp+1B0h]
  __int128 v97; // [rsp+240h] [rbp+1C0h]
  __int64 v98; // [rsp+250h] [rbp+1D0h]
  const char *v99; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v100; // [rsp+260h] [rbp+1E0h]
  const char *v101; // [rsp+268h] [rbp+1E8h] BYREF
  _BYTE v102[48]; // [rsp+270h] [rbp+1F0h]
  __m256i v103; // [rsp+2A0h] [rbp+220h]
  __int128 v104; // [rsp+2C0h] [rbp+240h]
  __int128 v105; // [rsp+2D0h] [rbp+250h]
  __int128 v106; // [rsp+2E0h] [rbp+260h]
  __m256i v107; // [rsp+3C0h] [rbp+340h] BYREF
  __m256i v108; // [rsp+3E0h] [rbp+360h]
  __int128 v109; // [rsp+400h] [rbp+380h]
  __int128 v110; // [rsp+410h] [rbp+390h]
  __int128 v111; // [rsp+420h] [rbp+3A0h]
  __int128 v112; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v113; // [rsp+440h] [rbp+3C0h]
  __int64 v114; // [rsp+450h] [rbp+3D0h]
  __int64 v115; // [rsp+460h] [rbp+3E0h]
  _BYTE *v116; // [rsp+468h] [rbp+3E8h]
  __int128 v117; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v118; // [rsp+480h] [rbp+400h]
  __int64 *v119; // [rsp+488h] [rbp+408h]
  const char *v120; // [rsp+490h] [rbp+410h]
  _QWORD *v121; // [rsp+498h] [rbp+418h]
  const char *v122; // [rsp+4A0h] [rbp+420h]
  const char *v123; // [rsp+4A8h] [rbp+428h]
  const char *v124; // [rsp+4B0h] [rbp+430h]
  _QWORD *v125; // [rsp+4B8h] [rbp+438h]
  char v126; // [rsp+4C7h] [rbp+447h] BYREF
  __int64 v127; // [rsp+4C8h] [rbp+448h]
  __int64 v128; // [rsp+4D0h] [rbp+450h]
  char v129; // [rsp+4DFh] [rbp+45Fh]
  __int64 v130; // [rsp+4E0h] [rbp+460h]

  *(_QWORD *)&v4 = a1;
  v5 = 0;
  v130 = -2;
  v7 = v4;
  v8 = *(unsigned __int8 *)(v4 + 1856);
  v128 = v4;
  switch ( v8 )
  {
    case 0LL:
      *(_WORD *)(v4 + 1857) = 257;
      *(_BYTE *)(v4 + 1859) = 1;
      *((_QWORD *)&v4 + 1) = v4 + 1120;
      sub_141684120(v4 + 1120, v4 + 392, 728);
      switch ( *(_BYTE *)(v7 + 1840) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_83;
        case 2:
          goto LABEL_82;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      *((_QWORD *)&v4 + 1) = v4 + 1120;
      switch ( *(_BYTE *)(v4 + 1840) )
      {
        case 0:
LABEL_4:
          v99 = aFixCodexRouter;
          v100 = 22;
          v101 = aManager_1;
          *(_QWORD *)v102 = 7;
          v127 = *((_QWORD *)&v4 + 1);
          *(_QWORD *)&v102[8] = *((_QWORD *)&v4 + 1);
          *(_OWORD *)&v102[16] = (unsigned __int64)(v7 + 1640);
          v9 = sub_140004B10((volatile void *)(*(_QWORD *)(v7 + 1632) + 16LL));
          v119 = (__int64 *)(v7 + 1640);
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(v83, &v99, &v101);
          v10 = v83[0];
          if ( v83[0] == 0xFF )
          {
            v9 = *(_QWORD *)&v83[8];
LABEL_5:
            v99 = aFixCodexRouter;
            v100 = 22;
            v101 = aItemid;
            *(_QWORD *)v102 = 6;
            *(_QWORD *)&v102[8] = v127;
            *(_OWORD *)&v102[16] = (unsigned __int64)(v7 + 1640);
            sub_1409757B0(v83, &v99);
            v10 = v83[0];
            v5 = __OFSUB__(v83[0], -1);
            if ( v83[0] == 0xFF )
            {
              v11 = *(_QWORD *)&v83[24];
              v12 = *(_OWORD *)&v83[8];
              v7 = v128;
              *(_QWORD *)(v128 + 1688) = v9;
              *(_OWORD *)(v7 + 1664) = v12;
              *(_QWORD *)(v7 + 1680) = v11;
              *(_BYTE *)(v7 + 1712) = 0;
              v13 = (const char *)(v7 + 1720);
              *(_OWORD *)(v7 + 1752) = *(_OWORD *)(v7 + 1696);
              *(_OWORD *)(v7 + 1720) = *(_OWORD *)(v7 + 1664);
              *(_QWORD *)(v7 + 1736) = *(_QWORD *)(v7 + 1680);
              *(_QWORD *)(v7 + 1744) = *(_QWORD *)(v7 + 1688);
              *(_QWORD *)(v7 + 1768) = *(_QWORD *)(v7 + 1712);
              v116 = (_BYTE *)(v7 + 1832);
              *(_BYTE *)(v7 + 1832) = 0;
              *(_QWORD *)(v7 + 1824) = *(_QWORD *)(v7 + 1768);
              v14 = *(_OWORD *)(v7 + 1720);
              v15 = *(_OWORD *)(v7 + 1736);
              *(_OWORD *)(v7 + 1808) = *(_OWORD *)(v7 + 1752);
              *(_OWORD *)(v7 + 1792) = v15;
              *(_OWORD *)(v7 + 1776) = v14;
              *((_QWORD *)&v4 + 1) = v127;
              switch ( *(_BYTE *)(v7 + 1824) )
              {
                case 0:
                  goto LABEL_10;
                case 1:
                  goto LABEL_85;
                case 2:
                  goto LABEL_84;
                case 3:
                  goto LABEL_36;
              }
            }
          }
          v37 = ((unsigned __int64)((v83[7] << 16) | (unsigned int)*(unsigned __int16 *)&v83[5]) << 32)
              | *(unsigned int *)&v83[1];
          v38 = *(_QWORD *)&v83[8];
          v39 = *(_OWORD *)&v83[16];
          sub_140BF0DE0(v127);
          if ( *v119 == -1 )
          {
            v43 = 1;
            v44 = v128;
            goto LABEL_73;
          }
          v125 = (_QWORD *)(v128 + 1648);
          v40 = *(const char **)(v128 + 1648);
          v123 = *(const char **)(v128 + 1656);
          v124 = nullptr;
          v120 = v40;
          while ( v123 != v124 )
          {
            ++v124;
            v41 = v40 + 96;
            sub_1402C7520();
            v40 = v41;
          }
          v42 = *v119;
          v43 = 1;
          v44 = v128;
          if ( !*v119 )
            goto LABEL_73;
          goto LABEL_72;
        case 1:
LABEL_83:
          v127 = *((_QWORD *)&v4 + 1);
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_82:
          v127 = *((_QWORD *)&v4 + 1);
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v116 = (_BYTE *)(v7 + 1832);
  v13 = (const char *)(v7 + 1720);
  switch ( *(_BYTE *)(v7 + 1832) )
  {
    case 0:
      *(_QWORD *)(v7 + 1824) = *(_QWORD *)(v7 + 1768);
      v16 = *(_OWORD *)v13;
      v17 = *(_OWORD *)(v7 + 1736);
      *(_OWORD *)(v7 + 1808) = *(_OWORD *)(v7 + 1752);
      *(_OWORD *)(v7 + 1792) = v17;
      *(_OWORD *)(v7 + 1776) = v16;
      switch ( *(_BYTE *)(v7 + 1824) )
      {
        case 0:
          goto LABEL_10;
        case 1:
          goto LABEL_85;
        case 2:
          goto LABEL_84;
        case 3:
          goto LABEL_36;
      }
    case 1:
      v127 = *((_QWORD *)&v4 + 1);
      v115 = v7 + 1720;
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2:
      v127 = *((_QWORD *)&v4 + 1);
      v115 = v7 + 1720;
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3:
      switch ( *(_BYTE *)(v7 + 1824) )
      {
        case 0:
LABEL_10:
          *(_QWORD *)&v4 = *(_QWORD *)(v7 + 1800);
          *(_QWORD *)(v7 + 1808) = v4;
          *(_BYTE *)(v7 + 1825) = 1;
          v18 = *(const char **)(v7 + 1776);
          v19 = *(_QWORD **)(v7 + 1784);
          v20 = *(const char **)(v7 + 1792);
          v21 = *(_QWORD *)v4;
          v22 = _InterlockedIncrement64(*(volatile signed __int64 **)v4);
          if ( (v22 < 0) ^ v5 | (v22 == 0) )
            goto LABEL_89;
          v23 = *(volatile signed __int64 **)(v4 + 8);
          v24 = _InterlockedIncrement64(v23);
          if ( (v24 < 0) ^ v5 | (v24 == 0) )
            goto LABEL_89;
          v25 = *(volatile signed __int64 **)(v4 + 16);
          v26 = _InterlockedIncrement64(v25);
          if ( (v26 < 0) ^ v5 | (v26 == 0) )
            goto LABEL_89;
          v27 = *(volatile signed __int64 **)(v4 + 24);
          v28 = _InterlockedIncrement64(v27);
          if ( (v28 < 0) ^ v5 | (v28 == 0) )
            goto LABEL_89;
          v29 = *(volatile signed __int64 **)(v4 + 32);
          v30 = _InterlockedIncrement64(v29);
          if ( (v30 < 0) ^ v5 | (v30 == 0) )
            goto LABEL_89;
          v31 = *(volatile signed __int64 **)(v4 + 40);
          v32 = _InterlockedIncrement64(v31);
          if ( (v32 < 0) ^ v5 | (v32 == 0) )
            goto LABEL_89;
          v124 = v13;
          v127 = *((_QWORD *)&v4 + 1);
          *((_QWORD *)&v4 + 1) = *(_QWORD *)(v4 + 56);
          if ( *((_QWORD *)&v4 + 1) )
          {
            if ( _InterlockedIncrement64(*((volatile signed __int64 **)&v4 + 1)) <= 0 )
              goto LABEL_89;
          }
          *(_QWORD *)&v4 = *(_QWORD *)(v4 + 48);
          if ( _InterlockedIncrement64((volatile signed __int64 *)v4) <= 0 )
LABEL_89:
            BUG();
          *(_BYTE *)(v7 + 1825) = 0;
          *(_QWORD *)v102 = v21;
          *(_QWORD *)&v102[8] = v23;
          *(_QWORD *)&v102[16] = v25;
          *(_QWORD *)&v102[24] = v27;
          *(_QWORD *)&v102[32] = v29;
          *(_QWORD *)&v102[40] = v31;
          *(_OWORD *)v103.m256i_i8 = v4;
          v120 = v18;
          v99 = v18;
          v125 = v19;
          v100 = (__int64)v19;
          v101 = v20;
          v33 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v129 = 1;
            v67 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v33 = v67;
          }
          if ( *((_DWORD *)v33 + 4) == 2 )
          {
            v34 = 704;
            if ( *(_BYTE *)v33 )
              v34 = 472;
            v35 = v33[1] + v34;
            v129 = 0;
            v36 = sub_140897D80(v35, v33, &v99, &off_1417642A8);
          }
          else
          {
            v45 = 704;
            if ( *((_BYTE *)v33 + 64) )
              v45 = 472;
            v46 = v33[9] + v45;
            v129 = 0;
            v36 = sub_140897D80(v46, v33 + 8, &v99, &off_141764290);
          }
          v7 = v128;
          *(_QWORD *)(v128 + 1816) = v36;
          *((_QWORD *)&v4 + 1) = v127;
          v13 = v124;
          break;
        case 1:
LABEL_85:
          v124 = v13;
          JUMPOUT(0x140CA2005LL);
        case 2:
LABEL_84:
          v124 = v13;
          v127 = *((_QWORD *)&v4 + 1);
          sub_1416C3420(&off_1417BAEC0, a2, a3, a4);
        case 3:
          break;
      }
LABEL_36:
      v124 = v13;
      v127 = *((_QWORD *)&v4 + 1);
      v119 = (__int64 *)(v7 + 1816);
      sub_140B02940(&v99, v7 + 1816, a2);
      v47 = v99;
      if ( v99 == (const char *)-3LL )
      {
        v49 = (_BYTE *)v128;
        *(_BYTE *)(v128 + 1824) = 3;
        goto LABEL_40;
      }
      if ( (_DWORD)v99 == -2 )
      {
        *((_QWORD *)&v39 + 1) = v100;
        v123 = v101;
        v48 = 0x800000000000000CuLL;
        *(_QWORD *)&v39 = *(_QWORD *)v102;
      }
      else
      {
        v48 = v100;
        *((_QWORD *)&v39 + 1) = v101;
        *(_QWORD *)&v39 = *(_QWORD *)&v102[8];
        v123 = *(const char **)v102;
        v112 = *(_OWORD *)&v102[16];
        v113 = *(_OWORD *)&v102[32];
        v114 = v103.m256i_i64[0];
        v117 = *(_OWORD *)&v103.m256i_u64[1];
      }
      v52 = v125;
      v53 = v120;
      v96 = v112;
      v97 = v113;
      v98 = v114;
      v72 = v117;
      v54 = *v119;
      v122 = v120;
      v121 = v125;
      if ( (unsigned __int8)sub_1412F2A80(v54) )
      {
        v122 = v53;
        v121 = v52;
        sub_1412E7580(v54);
      }
      if ( (_DWORD)v47 != -1 )
      {
        if ( (_DWORD)v47 == -2 )
        {
          v99 = (const char *)v48;
          v100 = *((_QWORD *)&v39 + 1);
          v101 = v123;
          *(_QWORD *)v102 = v39;
          *(_OWORD *)&v102[8] = v96;
          *(_QWORD *)&v117 = &v99;
          *((_QWORD *)&v117 + 1) = sub_141230630;
          sub_14149C0F0(&v112, &unk_1417BA0E4, &v117);
          v122 = v120;
          v121 = v125;
          sub_140BF0F60(&v99);
          v37 = *((_QWORD *)&v112 + 1);
          v56 = (__int64 *)v112;
          *((_QWORD *)&v39 + 1) = v113;
        }
        else
        {
          v99 = v47;
          v100 = v48;
          v101 = *((const char **)&v39 + 1);
          *(_QWORD *)v102 = v123;
          *(_QWORD *)&v102[8] = v39;
          *(_OWORD *)&v102[16] = v96;
          *(_OWORD *)&v102[32] = v97;
          v103.m256i_i64[0] = v98;
          *(_OWORD *)&v103.m256i_u64[1] = v72;
          *(_QWORD *)&v117 = 0;
          *((_QWORD *)&v117 + 1) = 1;
          v118 = 0;
          *(_QWORD *)&v113 = 1610612768;
          *(_QWORD *)&v112 = &v117;
          *((_QWORD *)&v112 + 1) = &off_1417C41C0;
          if ( (unsigned __int8)sub_140B036A0(&v99, &v112) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v126,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v37 = *((_QWORD *)&v117 + 1);
          v56 = (__int64 *)v117;
          *((_QWORD *)&v39 + 1) = v118;
          v122 = v120;
          v121 = v125;
          sub_140BF2F60(&v99);
        }
        goto LABEL_58;
      }
      if ( v48 == -1 )
      {
        v56 = *((__int64 **)&v39 + 1);
        *((_QWORD *)&v39 + 1) = v39;
        v37 = (unsigned __int64)v123;
LABEL_58:
        v60 = v128;
        *(_BYTE *)(v128 + 1825) = 0;
        v111 = v82;
        v110 = v81;
        v109 = v80;
        v108 = v79;
        v107 = v78;
        *(_BYTE *)(v60 + 1824) = 1;
        v73 = v107;
        v74 = v108;
        v75 = v109;
        v76 = v110;
        v77 = v111;
        goto LABEL_59;
      }
      v71 = v98;
      v70 = v97;
      v69 = v96;
      v68[0] = v48;
      v68[1] = *((_QWORD *)&v39 + 1);
      v68[2] = v123;
      v68[3] = v39;
      v122 = v53;
      v121 = v52;
      sub_140ACDE30(&v99, v68);
      v57 = v99;
      v56 = (__int64 *)v100;
      v37 = (unsigned __int64)v101;
      v58 = *(_OWORD *)v102;
      *((_QWORD *)&v39 + 1) = *(_QWORD *)v102;
      v78 = *(__m256i *)&v102[16];
      v79 = v103;
      v80 = v104;
      v81 = v105;
      v82 = v106;
      v49 = (_BYTE *)v128;
      *(_BYTE *)(v128 + 1825) = 0;
      v111 = v82;
      v110 = v81;
      v109 = v80;
      v108 = v79;
      v107 = v78;
      v49[1824] = 1;
      if ( v57 == (const char *)-2LL )
      {
LABEL_40:
        v49[1832] = 3;
        v49[1840] = 3;
        v50 = 3;
        result = 1;
        goto LABEL_74;
      }
      v77 = v111;
      v76 = v110;
      v75 = v109;
      v74 = v108;
      v73 = v107;
      if ( v57 != (const char *)-1LL )
      {
        v88 = v77;
        v87 = v76;
        v86 = v75;
        v85 = v74;
        v84 = v73;
        *(_QWORD *)v83 = v57;
        *(_QWORD *)&v83[8] = v56;
        *(_QWORD *)&v83[16] = v37;
        *(_OWORD *)&v83[24] = v58;
        sub_140B0BE00(&v99, v83);
        v37 = ((unsigned __int64)((HIBYTE(v100) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v100 + 5)) << 32)
            | *(unsigned int *)((char *)&v100 + 1);
        v10 = v100;
        v38 = (__int64)v101;
        v39 = *(_OWORD *)v102;
        if ( v99 == (const char *)-1LL )
        {
          v43 = 0;
        }
        else
        {
          HIBYTE(v100) = (((unsigned __int64)((HIBYTE(v100) << 16)
                                            | (unsigned int)*(unsigned __int16 *)((char *)&v100 + 5)) << 32)
                        | *(unsigned int *)((char *)&v100 + 1)) >> 48;
          *(_WORD *)((char *)&v100 + 5) = WORD2(v37);
          *(_DWORD *)((char *)&v100 + 1) = v37;
          v107.m256i_i64[0] = 0;
          *(_OWORD *)&v107.m256i_u64[1] = 1u;
          v78.m256i_i64[2] = 1610612768;
          v78.m256i_i64[0] = (__int64)&v107;
          v78.m256i_i64[1] = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_141230630(&v99, &v78, v59) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v126,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v39 = *(_OWORD *)&v107.m256i_u64[1];
          v38 = v107.m256i_i64[0];
          sub_140BF0F60(&v99);
          v43 = 1;
          v10 = 3;
        }
        goto LABEL_67;
      }
LABEL_59:
      if ( v39 < 0 )
      {
        v61 = 0;
        goto LABEL_61;
      }
      if ( *((_QWORD *)&v39 + 1) )
      {
        nullsub_1(v55);
        v61 = 1;
        v62 = sub_140001650(*((_QWORD *)&v39 + 1), 1);
        if ( !v62 )
        {
LABEL_61:
          v123 = (const char *)v37;
          v119 = v56;
          sub_1416C2D4B(v61, *((_QWORD *)&v39 + 1));
        }
        *(_QWORD *)&v39 = v62;
        sub_141684120(v62, v37, *((_QWORD *)&v39 + 1));
        if ( !v56 )
          goto LABEL_66;
      }
      else
      {
        *(_QWORD *)&v39 = 1;
        if ( !v56 )
          goto LABEL_66;
      }
      sub_140001660(v37, v56, 1);
LABEL_66:
      v43 = 1;
      v10 = 3;
      v38 = *((_QWORD *)&v39 + 1);
LABEL_67:
      *v116 = 1;
      sub_140BC6870(v124);
      sub_140BF0DE0(v127);
      v44 = v128;
      if ( *(_QWORD *)(v128 + 1640) != -1 )
      {
        v125 = (_QWORD *)(v128 + 1648);
        v63 = *(__int64 **)(v128 + 1648);
        v123 = *(const char **)(v128 + 1656);
        v124 = nullptr;
        v119 = v63;
        while ( v123 != v124 )
        {
          ++v124;
          v64 = v63 + 12;
          sub_1402C7520();
          v63 = v64;
        }
        v44 = v128;
        v42 = *(_QWORD *)(v128 + 1640);
        if ( v42 )
LABEL_72:
          sub_140001660(*v125, 96 * v42, 8);
      }
LABEL_73:
      *(_BYTE *)(v44 + 1840) = 1;
      sub_140BE1300(v127);
      v91 = v37;
      v93 = BYTE6(v37);
      v92 = WORD2(v37);
      v95 = v39;
      v90 = v10;
      v94 = v38;
      v89 = v43;
      v65 = v128;
      *(_BYTE *)(v128 + 1859) = 0;
      sub_141684120(&v99, v65, 360);
      *(_BYTE *)(v65 + 1858) = 0;
      v66 = *(_QWORD *)(v65 + 384);
      *(_BYTE *)(v65 + 1857) = 0;
      *(_QWORD *)&v83[16] = *(_QWORD *)(v65 + 376);
      *(_OWORD *)v83 = *(_OWORD *)(v65 + 360);
      sub_14047E370(
        (unsigned int)&v99,
        v66,
        (unsigned int)&v89,
        (unsigned int)v83,
        *(_DWORD *)(v65 + 1848),
        *(_DWORD *)(v65 + 1852));
      v50 = 1;
      result = 0;
      v49 = (_BYTE *)v128;
LABEL_74:
      v49[1856] = v50;
      return result;
  }
}