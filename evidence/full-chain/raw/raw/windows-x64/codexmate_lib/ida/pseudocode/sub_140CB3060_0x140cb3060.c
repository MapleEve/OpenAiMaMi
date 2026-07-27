// module: codexmate_lib
// addr: 0x140cb3060
// name: sub_140CB3060
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140CB3060(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // of
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _OWORD *v10; // r14
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  volatile signed __int64 **v13; // rcx
  volatile signed __int64 *v14; // rax
  __int64 v15; // rt0
  volatile signed __int64 *v16; // rdx
  __int64 v17; // rt0
  volatile signed __int64 *v18; // r8
  __int64 v19; // rt0
  volatile signed __int64 *v20; // r9
  __int64 v21; // rt0
  volatile signed __int64 *v22; // r10
  __int64 v23; // rt0
  volatile signed __int64 *v24; // r11
  __int64 v25; // rt0
  volatile signed __int64 *v26; // rdi
  volatile signed __int64 *v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  const char *v34; // r14
  __int64 v35; // r12
  __int64 v36; // r13
  unsigned __int64 v37; // r15
  __int128 v38; // rdi
  _BYTE *v39; // rdx
  char v40; // cl
  char result; // al
  __int64 v42; // rbx
  __int64 v43; // rcx
  const char *v44; // rax
  __int128 v45; // xmm0
  __int64 v46; // r8
  char v47; // bl
  __int64 v48; // r14
  unsigned __int8 v49; // r12
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 *v53; // rcx
  __int64 *v54; // r13
  int v55; // r13d
  unsigned int v56; // r12d
  __int64 v57; // r15
  __int64 v58; // rcx
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdx
  _QWORD *v63; // rdi
  _QWORD v64[4]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v65; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v66[24]; // [rsp+60h] [rbp-20h]
  __int128 v67; // [rsp+78h] [rbp-8h]
  __int128 v68; // [rsp+88h] [rbp+8h]
  __int128 v69; // [rsp+98h] [rbp+18h]
  __int128 v70; // [rsp+A8h] [rbp+28h]
  __int64 v71; // [rsp+B8h] [rbp+38h]
  __int128 v72; // [rsp+C0h] [rbp+40h]
  __int128 v73; // [rsp+D0h] [rbp+50h]
  __int128 v74; // [rsp+E0h] [rbp+60h]
  __int128 v75; // [rsp+F0h] [rbp+70h]
  __int64 v76; // [rsp+100h] [rbp+80h]
  __int64 v77; // [rsp+108h] [rbp+88h] BYREF
  char v78; // [rsp+110h] [rbp+90h]
  int v79; // [rsp+111h] [rbp+91h]
  __int16 v80; // [rsp+115h] [rbp+95h]
  char v81; // [rsp+117h] [rbp+97h]
  __int64 v82; // [rsp+118h] [rbp+98h]
  __int128 v83; // [rsp+120h] [rbp+A0h]
  const char *v84; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v85; // [rsp+138h] [rbp+B8h]
  const char *v86; // [rsp+140h] [rbp+C0h] BYREF
  _BYTE v87[48]; // [rsp+148h] [rbp+C8h]
  __int128 v88; // [rsp+178h] [rbp+F8h]
  __int128 v89; // [rsp+188h] [rbp+108h]
  __int64 v90; // [rsp+198h] [rbp+118h]
  __int64 v91; // [rsp+298h] [rbp+218h]
  __int128 v92; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v93; // [rsp+2B0h] [rbp+230h]
  __int128 v94; // [rsp+2C0h] [rbp+240h]
  __int128 v95; // [rsp+2D0h] [rbp+250h]
  __int64 v96; // [rsp+2E0h] [rbp+260h]
  __m256i v97; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v98; // [rsp+310h] [rbp+290h]
  __int64 v99; // [rsp+320h] [rbp+2A0h]
  __m256i v100; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v101; // [rsp+350h] [rbp+2D0h]
  __int64 v102; // [rsp+360h] [rbp+2E0h]
  __int64 v103; // [rsp+370h] [rbp+2F0h]
  const char **v104; // [rsp+378h] [rbp+2F8h] BYREF
  __int64 v105; // [rsp+380h] [rbp+300h]
  __int64 v106; // [rsp+388h] [rbp+308h]
  _QWORD *v107; // [rsp+390h] [rbp+310h]
  __int64 *v108; // [rsp+398h] [rbp+318h]
  _QWORD *v109; // [rsp+3A0h] [rbp+320h]
  _QWORD *v110; // [rsp+3A8h] [rbp+328h]
  __int64 v111; // [rsp+3B0h] [rbp+330h]
  char v112; // [rsp+3BFh] [rbp+33Fh] BYREF
  __int64 v113; // [rsp+3C0h] [rbp+340h]
  char v114; // [rsp+3CFh] [rbp+34Fh]
  __int64 v115; // [rsp+3D0h] [rbp+350h]

  v4 = 0;
  v115 = -2;
  v6 = a1;
  v7 = *(unsigned __int8 *)(a1 + 1712);
  v113 = a1;
  switch ( v7 )
  {
    case 0LL:
      *(_WORD *)(a1 + 1713) = 257;
      *(_BYTE *)(a1 + 1715) = 1;
      v8 = a1 + 1048;
      sub_141684120(a1 + 1048, a1 + 392, 656);
      switch ( *(_BYTE *)(v6 + 1696) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_81;
        case 2:
          goto LABEL_80;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v8 = a1 + 1048;
      switch ( *(_BYTE *)(a1 + 1696) )
      {
        case 0:
LABEL_4:
          v84 = aRunCodexRouter;
          v85 = 28;
          v86 = aManager_1;
          *(_QWORD *)v87 = 7;
          v111 = v8;
          *(_QWORD *)&v87[8] = v8;
          *(_OWORD *)&v87[16] = (unsigned __int64)(v6 + 1568);
          v9 = sub_140004B10((volatile void *)(*(_QWORD *)(v6 + 1560) + 16LL));
          v4 = 0;
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(&v65, &v84, &v86);
          v47 = v65;
          v4 = __OFSUB__((_BYTE)v65, -1);
          if ( (_BYTE)v65 == 0xFF )
          {
            v9 = *((_QWORD *)&v65 + 1);
LABEL_5:
            v6 = v113;
            *(_QWORD *)(v113 + 1592) = v9;
            *(_BYTE *)(v6 + 1616) = 0;
            v10 = (_OWORD *)(v6 + 1624);
            *(_QWORD *)(v6 + 1624) = *(_QWORD *)(v6 + 1592);
            *(_QWORD *)(v6 + 1632) = *(_QWORD *)(v6 + 1600);
            *(_QWORD *)(v6 + 1640) = *(_QWORD *)(v6 + 1608);
            *(_BYTE *)(v6 + 1648) = *(_BYTE *)(v6 + 1616);
            *(_DWORD *)(v6 + 1649) = *(_DWORD *)(v6 + 1617);
            *(_WORD *)(v6 + 1653) = *(_WORD *)(v6 + 1621);
            *(_BYTE *)(v6 + 1655) = *(_BYTE *)(v6 + 1623);
            v107 = (_QWORD *)(v6 + 1688);
            *(_BYTE *)(v6 + 1688) = 0;
            v11 = *(_OWORD *)(v6 + 1624);
            *(_OWORD *)(v6 + 1672) = *(_OWORD *)(v6 + 1640);
            *(_OWORD *)(v6 + 1656) = v11;
            v8 = v111;
            switch ( *(_BYTE *)(v6 + 1680) )
            {
              case 0:
                goto LABEL_9;
              case 1:
                goto LABEL_83;
              case 2:
                goto LABEL_82;
              case 3:
                goto LABEL_28;
            }
          }
          v108 = (__int64 *)(v6 + 1568);
          v55 = BYTE7(v65);
          v56 = *(unsigned __int16 *)((char *)&v65 + 5);
          v57 = *(unsigned int *)((char *)&v65 + 1);
          v48 = *((_QWORD *)&v65 + 1);
          v38 = *(_OWORD *)v66;
          sub_140BF0DE0(v111);
          v37 = ((unsigned __int64)((v55 << 16) | v56) << 32) | v57;
          if ( *v108 == -1 )
          {
            v49 = 1;
            v52 = v113;
            goto LABEL_73;
          }
          v107 = (_QWORD *)(v113 + 1576);
          v58 = *(_QWORD *)(v113 + 1576);
          v109 = *(_QWORD **)(v113 + 1584);
          v110 = nullptr;
          v91 = v58;
          while ( v109 != v110 )
          {
            v110 = (_QWORD *)((char *)v110 + 1);
            v59 = v58 + 96;
            sub_1402C7520();
            v58 = v59;
          }
          v60 = *v108;
          v49 = 1;
          v52 = v113;
          if ( *v108 )
            goto LABEL_70;
          goto LABEL_73;
        case 1:
LABEL_81:
          v111 = v8;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_80:
          v111 = v8;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v107 = (_QWORD *)(v6 + 1688);
  v10 = (_OWORD *)(v6 + 1624);
  switch ( *(_BYTE *)(v6 + 1688) )
  {
    case 0:
      v12 = *v10;
      *(_OWORD *)(v6 + 1672) = *(_OWORD *)(v6 + 1640);
      *(_OWORD *)(v6 + 1656) = v12;
      switch ( *(_BYTE *)(v6 + 1680) )
      {
        case 0:
          goto LABEL_9;
        case 1:
          goto LABEL_83;
        case 2:
          goto LABEL_82;
        case 3:
          goto LABEL_28;
      }
    case 1:
      v111 = v8;
      v103 = v6 + 1624;
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2:
      v111 = v8;
      v103 = v6 + 1624;
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3:
      switch ( *(_BYTE *)(v6 + 1680) )
      {
        case 0:
LABEL_9:
          v13 = *(volatile signed __int64 ***)(v6 + 1656);
          *(_QWORD *)(v6 + 1664) = v13;
          v14 = *v13;
          v15 = _InterlockedIncrement64(*v13);
          if ( (v15 < 0) ^ v4 | (v15 == 0) )
            goto LABEL_87;
          v16 = v13[1];
          v17 = _InterlockedIncrement64(v16);
          if ( (v17 < 0) ^ v4 | (v17 == 0) )
            goto LABEL_87;
          v18 = v13[2];
          v19 = _InterlockedIncrement64(v18);
          if ( (v19 < 0) ^ v4 | (v19 == 0) )
            goto LABEL_87;
          v20 = v13[3];
          v21 = _InterlockedIncrement64(v20);
          if ( (v21 < 0) ^ v4 | (v21 == 0) )
            goto LABEL_87;
          v22 = v13[4];
          v23 = _InterlockedIncrement64(v22);
          if ( (v23 < 0) ^ v4 | (v23 == 0) )
            goto LABEL_87;
          v24 = v13[5];
          v25 = _InterlockedIncrement64(v24);
          if ( (v25 < 0) ^ v4 | (v25 == 0) )
            goto LABEL_87;
          v110 = v10;
          v111 = v8;
          v26 = v13[7];
          if ( v26 )
          {
            if ( _InterlockedIncrement64(v26) <= 0 )
              goto LABEL_87;
          }
          v27 = v13[6];
          if ( _InterlockedIncrement64(v27) <= 0 )
LABEL_87:
            BUG();
          v84 = (const char *)v14;
          v85 = (__int64)v16;
          v86 = (const char *)v18;
          *(_QWORD *)v87 = v20;
          *(_QWORD *)&v87[8] = v22;
          *(_QWORD *)&v87[16] = v24;
          *(_QWORD *)&v87[24] = v27;
          *(_QWORD *)&v87[32] = v26;
          v28 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v114 = 1;
            v63 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v28 = v63;
          }
          if ( *((_DWORD *)v28 + 4) == 2 )
          {
            v29 = 704;
            if ( *(_BYTE *)v28 )
              v29 = 472;
            v30 = v28[1] + v29;
            v114 = 0;
            v31 = sub_1408986A0(v30, v28, &v84, &off_1417642A8);
          }
          else
          {
            v32 = 704;
            if ( *((_BYTE *)v28 + 64) )
              v32 = 472;
            v33 = v28[9] + v32;
            v114 = 0;
            v31 = sub_1408986A0(v33, v28 + 8, &v84, &off_141764290);
          }
          v6 = v113;
          *(_QWORD *)(v113 + 1672) = v31;
          v8 = v111;
          v10 = v110;
          break;
        case 1:
LABEL_83:
          v110 = v10;
          JUMPOUT(0x140CB3DBCLL);
        case 2:
LABEL_82:
          v110 = v10;
          v111 = v8;
          sub_1416C3420(&off_1417BB048, a2, a3, a4);
        case 3:
          break;
      }
LABEL_28:
      v110 = v10;
      v111 = v8;
      v109 = (_QWORD *)(v6 + 1672);
      sub_140B02760(&v84, v6 + 1672, a2);
      v34 = v84;
      if ( v84 == (const char *)-3LL )
      {
        v39 = (_BYTE *)v113;
        *(_BYTE *)(v113 + 1680) = 3;
        goto LABEL_32;
      }
      if ( (_DWORD)v84 == -2 )
      {
        v35 = v85;
        v36 = (__int64)v86;
        v37 = 0x800000000000000CuLL;
        *((_QWORD *)&v38 + 1) = *(_QWORD *)v87;
      }
      else
      {
        v37 = v85;
        v35 = (__int64)v86;
        *((_QWORD *)&v38 + 1) = *(_QWORD *)&v87[8];
        v36 = *(_QWORD *)v87;
        v97 = *(__m256i *)&v87[16];
        v98 = v88;
        v99 = v89;
      }
      v100 = v97;
      v101 = v98;
      v102 = v99;
      v42 = *v109;
      if ( (unsigned __int8)sub_1412F2A80(*v109) )
        sub_1412E7580(v42);
      if ( (_DWORD)v34 != -1 )
      {
        if ( (_DWORD)v34 == -2 )
        {
          v84 = (const char *)v37;
          v85 = v35;
          v86 = (const char *)v36;
          *(_QWORD *)v87 = *((_QWORD *)&v38 + 1);
          *(_OWORD *)&v87[8] = *(_OWORD *)v100.m256i_i8;
          v104 = &v84;
          v105 = (__int64)sub_141230630;
          sub_14149C0F0(&v97, &unk_1417BA130, &v104);
          sub_140BF0F60(&v84);
          v36 = v97.m256i_i64[1];
          v35 = v97.m256i_i64[0];
          *((_QWORD *)&v38 + 1) = v97.m256i_i64[2];
        }
        else
        {
          v84 = v34;
          v85 = v37;
          v86 = (const char *)v35;
          *(_QWORD *)v87 = v36;
          *(_QWORD *)&v87[8] = *((_QWORD *)&v38 + 1);
          *(__m256i *)&v87[16] = v100;
          v88 = v101;
          *(_QWORD *)&v89 = v102;
          v104 = nullptr;
          v105 = 1;
          v106 = 0;
          v97.m256i_i64[2] = 1610612768;
          v97.m256i_i64[0] = (__int64)&v104;
          v97.m256i_i64[1] = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_140B036A0(&v84, &v97) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v112,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v35 = (__int64)v104;
          v36 = v105;
          *((_QWORD *)&v38 + 1) = v106;
          sub_140BF2F60(&v84);
        }
        goto LABEL_47;
      }
      if ( v37 == -1 )
      {
LABEL_47:
        *(_BYTE *)(v113 + 1680) = 1;
        v72 = v92;
        v73 = v93;
        v74 = v94;
        v75 = v95;
        v76 = v96;
        goto LABEL_48;
      }
      v64[0] = v37;
      v64[1] = v35;
      v64[2] = v36;
      v64[3] = *((_QWORD *)&v38 + 1);
      sub_140ACDCD0(&v84, v64);
      v44 = v84;
      v35 = v85;
      v36 = (__int64)v86;
      v45 = *(_OWORD *)v87;
      *((_QWORD *)&v38 + 1) = *(_QWORD *)v87;
      v92 = *(_OWORD *)&v87[16];
      v93 = *(_OWORD *)&v87[32];
      v94 = v88;
      v95 = v89;
      v96 = v90;
      v39 = (_BYTE *)v113;
      *(_BYTE *)(v113 + 1680) = 1;
      if ( v44 == (const char *)-2LL )
      {
LABEL_32:
        v39[1688] = 3;
        v39[1696] = 3;
        v40 = 3;
        result = 1;
        goto LABEL_74;
      }
      v43 = v96;
      v76 = v96;
      v75 = v95;
      v74 = v94;
      v73 = v93;
      v72 = v92;
      if ( v44 != (const char *)-1LL )
      {
        v71 = v76;
        v70 = v75;
        v69 = v74;
        v68 = v73;
        v67 = v72;
        *(_QWORD *)&v65 = v44;
        *((_QWORD *)&v65 + 1) = v35;
        *(_QWORD *)v66 = v36;
        *(_OWORD *)&v66[8] = v45;
        sub_140B0BB80(&v84, &v65);
        v37 = ((unsigned __int64)((HIBYTE(v85) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v85 + 5)) << 32)
            | *(unsigned int *)((char *)&v85 + 1);
        v47 = v85;
        v48 = (__int64)v86;
        v38 = *(_OWORD *)v87;
        if ( v84 == (const char *)-1LL )
        {
          v49 = 0;
        }
        else
        {
          HIBYTE(v85) = (((unsigned __int64)((HIBYTE(v85) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v85 + 5)) << 32)
                       | *(unsigned int *)((char *)&v85 + 1)) >> 48;
          *(_WORD *)((char *)&v85 + 5) = WORD2(v37);
          *(_DWORD *)((char *)&v85 + 1) = v37;
          v100.m256i_i64[0] = 0;
          *(_OWORD *)&v100.m256i_u64[1] = 1u;
          *(_QWORD *)&v93 = 1610612768;
          *(_QWORD *)&v92 = &v100;
          *((_QWORD *)&v92 + 1) = &off_1417C41C0;
          if ( (unsigned __int8)sub_141230630(&v84, &v92, v46) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v112,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v38 = *(_OWORD *)&v100.m256i_u64[1];
          v48 = v100.m256i_i64[0];
          sub_140BF0F60(&v84);
          v49 = 1;
          v47 = 3;
        }
        goto LABEL_56;
      }
LABEL_48:
      if ( v38 < 0 )
      {
        v50 = 0;
        goto LABEL_50;
      }
      if ( *((_QWORD *)&v38 + 1) )
      {
        nullsub_1(v43);
        v50 = 1;
        v51 = sub_140001650(*((_QWORD *)&v38 + 1), 1);
        if ( !v51 )
        {
LABEL_50:
          v108 = (__int64 *)v36;
          v109 = (_QWORD *)v35;
          sub_1416C2D4B(v50, *((_QWORD *)&v38 + 1));
        }
        *(_QWORD *)&v38 = v51;
        sub_141684120(v51, v36, *((_QWORD *)&v38 + 1));
        if ( !v35 )
          goto LABEL_55;
      }
      else
      {
        *(_QWORD *)&v38 = 1;
        if ( !v35 )
          goto LABEL_55;
      }
      sub_140001660(v36, v35, 1);
LABEL_55:
      v49 = 1;
      v47 = 3;
      v48 = *((_QWORD *)&v38 + 1);
LABEL_56:
      *(_BYTE *)v107 = 1;
      sub_140BF0DE0(v111);
      v52 = v113;
      if ( *(_QWORD *)(v113 + 1568) != -1 )
      {
        v107 = (_QWORD *)(v113 + 1576);
        v53 = *(__int64 **)(v113 + 1576);
        v109 = *(_QWORD **)(v113 + 1584);
        v110 = nullptr;
        v108 = v53;
        while ( v109 != v110 )
        {
          v110 = (_QWORD *)((char *)v110 + 1);
          v54 = v53 + 12;
          sub_1402C7520();
          v53 = v54;
        }
        v52 = v113;
        v60 = *(_QWORD *)(v113 + 1568);
        if ( v60 )
LABEL_70:
          sub_140001660(*v107, 96 * v60, 8);
      }
LABEL_73:
      *(_BYTE *)(v52 + 1696) = 1;
      sub_140BE0090(v111);
      v79 = v37;
      v81 = BYTE6(v37);
      v80 = WORD2(v37);
      v83 = v38;
      v78 = v47;
      v82 = v48;
      v77 = v49;
      v61 = v113;
      *(_BYTE *)(v113 + 1715) = 0;
      sub_141684120(&v84, v61, 360);
      *(_BYTE *)(v61 + 1714) = 0;
      v62 = *(_QWORD *)(v61 + 384);
      *(_BYTE *)(v61 + 1713) = 0;
      *(_QWORD *)v66 = *(_QWORD *)(v61 + 376);
      v65 = *(_OWORD *)(v61 + 360);
      sub_14047E370(
        (unsigned int)&v84,
        v62,
        (unsigned int)&v77,
        (unsigned int)&v65,
        *(_DWORD *)(v61 + 1704),
        *(_DWORD *)(v61 + 1708));
      v40 = 1;
      result = 0;
      v39 = (_BYTE *)v113;
LABEL_74:
      v39[1712] = v40;
      return result;
  }
}