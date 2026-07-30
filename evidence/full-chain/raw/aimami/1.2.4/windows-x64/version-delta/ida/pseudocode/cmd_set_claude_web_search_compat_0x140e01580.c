// win 1.2.4 delta | cmd_set_claude_web_search_compat @ 0x140e01580
// [FULL decompile]
// win 1.2.4 delta | cmd_set_claude_web_search_compat | (win-native 锚点: 命令名串/跨平台签名)
char __fastcall set_claude_web_search_compat(__int64 a1, __int64 a2)
{
  bool v2; // of
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  __int8 v9; // bl
  char v10; // al
  __int64 *v11; // r12
  __int64 *v12; // r14
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  volatile signed __int64 **v15; // rdx
  char v16; // al
  volatile signed __int64 *v17; // rcx
  __int64 v18; // rt0
  volatile signed __int64 *v19; // r8
  __int64 v20; // rt0
  volatile signed __int64 *v21; // r9
  __int64 v22; // rt0
  volatile signed __int64 *v23; // r10
  __int64 v24; // rt0
  volatile signed __int64 *v25; // r11
  __int64 v26; // rt0
  volatile signed __int64 *v27; // rdi
  __int64 v28; // rt0
  volatile signed __int64 *v29; // rbx
  volatile signed __int64 *v30; // rdx
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rax
  unsigned __int8 v42; // r13
  __int64 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rcx
  const char *v46; // rbx
  _BYTE *v47; // rdx
  __int64 *v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // r8
  unsigned __int64 v51; // rdi
  __int64 v52; // r12
  __int64 v53; // rbx
  char v54; // cl
  char result; // al
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  __int64 *v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 *v62; // rcx
  __int64 *v63; // r15
  __int64 v64; // rdi
  __int64 v65; // rdx
  _QWORD *v66; // rdi
  __int128 *v67; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall **v68)(); // [rsp+40h] [rbp-40h]
  __int64 v69; // [rsp+48h] [rbp-38h]
  __m256i v70; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v71; // [rsp+170h] [rbp+F0h]
  __int128 v72; // [rsp+180h] [rbp+100h]
  __int128 v73; // [rsp+190h] [rbp+110h]
  __int64 v74; // [rsp+1A0h] [rbp+120h]
  __int128 v75; // [rsp+280h] [rbp+200h] BYREF
  __int128 v76; // [rsp+290h] [rbp+210h]
  _BYTE v77[288]; // [rsp+2A0h] [rbp+220h] BYREF
  unsigned __int64 v78; // [rsp+3C0h] [rbp+340h] BYREF
  char v79; // [rsp+3C8h] [rbp+348h]
  int v80; // [rsp+3C9h] [rbp+349h]
  __int16 v81; // [rsp+3CDh] [rbp+34Dh]
  char v82; // [rsp+3CFh] [rbp+34Fh]
  __int64 v83; // [rsp+3D0h] [rbp+350h]
  __int64 v84; // [rsp+3D8h] [rbp+358h]
  __int64 v85; // [rsp+3E0h] [rbp+360h]
  __int128 v86; // [rsp+3E8h] [rbp+368h]
  __int128 v87; // [rsp+3F8h] [rbp+378h]
  __int64 v88; // [rsp+408h] [rbp+388h]
  __int128 v89; // [rsp+410h] [rbp+390h]
  __int128 v90; // [rsp+420h] [rbp+3A0h]
  __int64 v91; // [rsp+430h] [rbp+3B0h]
  __int64 v92; // [rsp+438h] [rbp+3B8h] BYREF
  __int8 v93; // [rsp+440h] [rbp+3C0h]
  char v94; // [rsp+441h] [rbp+3C1h]
  int v95; // [rsp+442h] [rbp+3C2h]
  __int16 v96; // [rsp+446h] [rbp+3C6h]
  __int64 v97; // [rsp+448h] [rbp+3C8h]
  __int64 v98; // [rsp+450h] [rbp+3D0h]
  __int64 v99; // [rsp+458h] [rbp+3D8h]
  __int128 v100; // [rsp+460h] [rbp+3E0h]
  __int128 v101; // [rsp+470h] [rbp+3F0h]
  __int64 v102; // [rsp+480h] [rbp+400h]
  __int128 v103; // [rsp+490h] [rbp+410h]
  __int128 v104; // [rsp+4A0h] [rbp+420h]
  __int64 v105; // [rsp+4B0h] [rbp+430h]
  const char *v106; // [rsp+4B8h] [rbp+438h] BYREF
  __m256i v107; // [rsp+4C0h] [rbp+440h] BYREF
  __int128 v108; // [rsp+4E0h] [rbp+460h] BYREF
  __int128 v109; // [rsp+4F0h] [rbp+470h]
  __int128 v110; // [rsp+500h] [rbp+480h]
  __int64 v111; // [rsp+510h] [rbp+490h]
  __int64 v112; // [rsp+620h] [rbp+5A0h]
  __int64 v113; // [rsp+628h] [rbp+5A8h]
  _QWORD *v114; // [rsp+630h] [rbp+5B0h]
  __int64 v115; // [rsp+638h] [rbp+5B8h]
  __int128 v116; // [rsp+640h] [rbp+5C0h] BYREF
  __int64 v117; // [rsp+650h] [rbp+5D0h]
  __int64 *v118; // [rsp+658h] [rbp+5D8h]
  __int64 *v119; // [rsp+660h] [rbp+5E0h]
  __int64 *v120; // [rsp+668h] [rbp+5E8h]
  char v121; // [rsp+677h] [rbp+5F7h] BYREF
  __int64 v122; // [rsp+678h] [rbp+5F8h]
  __int64 v123; // [rsp+680h] [rbp+600h]
  char v124; // [rsp+68Fh] [rbp+60Fh]
  __int64 v125; // [rsp+690h] [rbp+610h]

  v2 = 0;
  v125 = -2;
  v4 = a1;
  v5 = *(unsigned __int8 *)(a1 + 1712);
  v123 = a1;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(a1 + 1713) = 257;
      *(_BYTE *)(a1 + 1715) = 1;
      v6 = a1 + 1048;
      sub_1416F15C0(a1 + 1048, a1 + 392, 656);
      switch ( *(_BYTE *)(v4 + 1696) )
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
      sub_1417344D0(&off_14182F8F0);
    case 2LL:
      sub_1417344F0(&off_14182F8F0);
    case 3LL:
      v6 = a1 + 1048;
      switch ( *(_BYTE *)(a1 + 1696) )
      {
        case 0:
LABEL_4:
          v7 = v4 + 1568;
          v106 = aSetClaudeWebSe;
          v107.m256i_i64[0] = 28;
          v107.m256i_i64[1] = (__int64)aManager_1;
          v107.m256i_i64[2] = 7;
          v122 = v6;
          v107.m256i_i64[3] = v6;
          v108 = (unsigned __int64)(v4 + 1568);
          v8 = sub_14002B7A0((volatile void *)(*(_QWORD *)(v4 + 1560) + 16LL));
          v119 = (__int64 *)(v4 + 1568);
          if ( v8 )
            goto LABEL_5;
          sub_1416F2670(&v75, &v106, &v107.m256i_u64[1]);
          v9 = v75;
          if ( (_BYTE)v75 == 0xFF )
          {
            v8 = *((_QWORD *)&v75 + 1);
LABEL_5:
            v106 = aSetClaudeWebSe;
            v107.m256i_i64[0] = 28;
            v107.m256i_i64[1] = (__int64)aEnabled_8;
            v107.m256i_i64[2] = 7;
            v107.m256i_i64[3] = v122;
            v108 = v7;
            sub_1407AC9D0(&v75, &v106);
            v9 = v75;
            v10 = BYTE1(v75);
            v2 = __OFSUB__((_BYTE)v75, -1);
            if ( (_BYTE)v75 == 0xFF )
            {
              v4 = v123;
              *(_QWORD *)(v123 + 1608) = v8;
              *(_BYTE *)(v4 + 1617) = v10;
              *(_BYTE *)(v4 + 1616) = 0;
              v11 = (__int64 *)(v4 + 1624);
              *(_OWORD *)(v4 + 1624) = *(_OWORD *)(v4 + 1592);
              *(_QWORD *)(v4 + 1640) = *(_QWORD *)(v4 + 1608);
              *(_BYTE *)(v4 + 1648) = *(_BYTE *)(v4 + 1616);
              *(_BYTE *)(v4 + 1649) = *(_BYTE *)(v4 + 1617);
              *(_DWORD *)(v4 + 1650) = *(_DWORD *)(v4 + 1618);
              *(_WORD *)(v4 + 1654) = *(_WORD *)(v4 + 1622);
              v12 = (__int64 *)(v4 + 1688);
              *(_BYTE *)(v4 + 1688) = 0;
              v13 = *(_OWORD *)(v4 + 1624);
              *(_OWORD *)(v4 + 1672) = *(_OWORD *)(v4 + 1640);
              *(_OWORD *)(v4 + 1656) = v13;
              v6 = v122;
              switch ( *(_BYTE *)(v4 + 1680) )
              {
                case 0:
                  goto LABEL_10;
                case 1:
                  goto LABEL_85;
                case 2:
                  goto LABEL_84;
                case 3:
                  goto LABEL_25;
              }
            }
          }
          else
          {
            v10 = BYTE1(v75);
          }
          LOBYTE(v115) = v10;
          v35 = *(unsigned int *)((char *)&v75 + 2) | ((unsigned __int64)WORD3(v75) << 32);
          v36 = *((_QWORD *)&v75 + 1);
          v37 = *((_QWORD *)&v76 + 1);
          v38 = v76;
          sub_140D64CE0(v122);
          if ( *v119 == -1 )
          {
            v42 = 1;
            v43 = v123;
            goto LABEL_68;
          }
          v114 = (_QWORD *)(v123 + 1576);
          v39 = *(_QWORD *)(v123 + 1576);
          v118 = *(__int64 **)(v123 + 1584);
          v120 = nullptr;
          v112 = v39;
          while ( v118 != v120 )
          {
            v120 = (__int64 *)((char *)v120 + 1);
            v40 = v39 + 96;
            sub_140296460();
            v39 = v40;
          }
          v41 = *v119;
          v42 = 1;
          v43 = v123;
          if ( !*v119 )
            goto LABEL_68;
          goto LABEL_67;
        case 1:
LABEL_83:
          v122 = v6;
          sub_1417344D0(&off_141831488);
        case 2:
LABEL_82:
          v122 = v6;
          sub_1417344F0(&off_141831488);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v12 = (__int64 *)(v4 + 1688);
  v11 = (__int64 *)(v4 + 1624);
  switch ( *(_BYTE *)(v4 + 1688) )
  {
    case 0:
      v14 = *(_OWORD *)v11;
      *(_OWORD *)(v4 + 1672) = *(_OWORD *)(v4 + 1640);
      *(_OWORD *)(v4 + 1656) = v14;
      switch ( *(_BYTE *)(v4 + 1680) )
      {
        case 0:
          goto LABEL_10;
        case 1:
          goto LABEL_85;
        case 2:
          goto LABEL_84;
        case 3:
          goto LABEL_25;
      }
    case 1:
      v122 = v6;
      v113 = v4 + 1624;
      sub_1417344D0(&off_14182F870);
    case 2:
      v122 = v6;
      v113 = v4 + 1624;
      sub_1417344F0(&off_14182F870);
    case 3:
      switch ( *(_BYTE *)(v4 + 1680) )
      {
        case 0:
LABEL_10:
          v15 = *(volatile signed __int64 ***)(v4 + 1672);
          *(_QWORD *)(v4 + 1656) = v15;
          v16 = *(_BYTE *)(v4 + 1681);
          v17 = *v15;
          v18 = _InterlockedIncrement64(*v15);
          if ( (v18 < 0) ^ v2 | (v18 == 0) )
            goto LABEL_89;
          v19 = v15[1];
          v20 = _InterlockedIncrement64(v19);
          if ( (v20 < 0) ^ v2 | (v20 == 0) )
            goto LABEL_89;
          v21 = v15[2];
          v22 = _InterlockedIncrement64(v21);
          if ( (v22 < 0) ^ v2 | (v22 == 0) )
            goto LABEL_89;
          v23 = v15[3];
          v24 = _InterlockedIncrement64(v23);
          if ( (v24 < 0) ^ v2 | (v24 == 0) )
            goto LABEL_89;
          v25 = v15[4];
          v26 = _InterlockedIncrement64(v25);
          if ( (v26 < 0) ^ v2 | (v26 == 0) )
            goto LABEL_89;
          v27 = v15[5];
          v28 = _InterlockedIncrement64(v27);
          if ( (v28 < 0) ^ v2 | (v28 == 0) )
            goto LABEL_89;
          v119 = v11;
          v118 = v12;
          v122 = v6;
          v29 = v15[7];
          if ( v29 )
          {
            if ( _InterlockedIncrement64(v29) <= 0 )
              goto LABEL_89;
          }
          v30 = v15[6];
          if ( _InterlockedIncrement64(v30) <= 0 )
LABEL_89:
            BUG();
          v106 = (const char *)v17;
          v107.m256i_i64[0] = (__int64)v19;
          v107.m256i_i64[1] = (__int64)v21;
          v107.m256i_i64[2] = (__int64)v23;
          v107.m256i_i64[3] = (__int64)v25;
          *(_QWORD *)&v108 = v27;
          *((_QWORD *)&v108 + 1) = v30;
          *(_QWORD *)&v109 = v29;
          BYTE8(v109) = v16;
          v31 = off_141F53780;
          if ( *((_DWORD *)off_141F53780 + 24) )
          {
            v124 = 1;
            v66 = off_141F53780;
            sub_14170CFB7(off_141F53780);
            v31 = v66;
          }
          if ( *((_DWORD *)v31 + 4) == 2 )
          {
            v32 = 704;
            if ( *(_BYTE *)v31 )
              v32 = 472;
            v33 = v31[1] + v32;
            v124 = 0;
            v34 = sub_1406BA270(v33, v31, &v106, &off_1417FC2F8);
          }
          else
          {
            v44 = 704;
            if ( *((_BYTE *)v31 + 64) )
              v44 = 472;
            v45 = v31[9] + v44;
            v124 = 0;
            v34 = sub_1406BA270(v45, v31 + 8, &v106, &off_1417FC2E0);
          }
          v4 = v123;
          *(_QWORD *)(v123 + 1664) = v34;
          break;
        case 1:
LABEL_85:
          v119 = v11;
          v118 = v12;
          JUMPOUT(0x140E023C7LL);
        case 2:
LABEL_84:
          v119 = v11;
          v118 = v12;
          v122 = v6;
          sub_1417344F0(&off_141832FB8);
        case 3:
LABEL_25:
          v119 = v11;
          v118 = v12;
          v122 = v6;
          break;
      }
      v120 = (__int64 *)(v4 + 1664);
      sub_1406A2C90(&v106, v4 + 1664, a2);
      v46 = v106;
      if ( v106 == (const char *)-3LL )
      {
        v47 = (_BYTE *)v123;
        *(_BYTE *)(v123 + 1680) = 3;
        goto LABEL_49;
      }
      if ( v106 == (const char *)-2LL )
      {
        v117 = v107.m256i_i64[2];
        v116 = *(_OWORD *)v107.m256i_i8;
        v35 = 0x800000000000000CuLL;
      }
      else
      {
        v35 = v107.m256i_i64[0];
        v116 = *(_OWORD *)&v107.m256i_u64[1];
        v117 = v107.m256i_i64[3];
        sub_1416F15C0(&v67, &v108, 280);
      }
      v48 = v120;
      *(_OWORD *)v70.m256i_i8 = v116;
      v70.m256i_i64[2] = v117;
      sub_1416F15C0(&v70.m256i_u64[3], &v67, 280);
      v49 = *v48;
      if ( (unsigned __int8)sub_1413601F0(v49) )
        sub_141354CF0(v49);
      if ( v46 == (const char *)-2LL )
      {
        v106 = (const char *)v35;
        v107 = v70;
        *(_QWORD *)&v108 = v71;
        *(_QWORD *)&v116 = &v106;
        *((_QWORD *)&v116 + 1) = sub_1412A4620;
        sub_141509590(&v67, &unk_1418309A0, &v116);
        sub_140D64E60(&v106);
        v51 = (unsigned __int64)v67;
        v52 = (__int64)v68;
        v37 = v69;
LABEL_53:
        *(_BYTE *)(v123 + 1680) = 1;
        v56 = v51 >> 8;
        v100 = v103;
        v101 = v104;
        v57 = v105;
        v102 = v105;
        goto LABEL_54;
      }
      if ( v46 == (const char *)-1LL )
      {
        v106 = (const char *)v35;
        v107 = v70;
        v108 = v71;
        v109 = v72;
        v110 = v73;
        v111 = v74;
        *(_QWORD *)&v116 = 0;
        *((_QWORD *)&v116 + 1) = 1;
        v117 = 0;
        v69 = 1610612768;
        v67 = &v116;
        v68 = &off_14183C100;
        if ( (unsigned __int8)sub_1406A4FE0(&v106, &v67) )
          sub_141734130(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v121,
            (unsigned int)&unk_141833EE0,
            (__int64)&off_14183C1B8);
        v52 = *((_QWORD *)&v116 + 1);
        v51 = v116;
        v37 = v117;
        sub_140D660A0(&v106);
        goto LABEL_53;
      }
      sub_1416F15C0(v77, &v70.m256i_u64[2], 288);
      *((_QWORD *)&v75 + 1) = v35;
      v76 = *(_OWORD *)v70.m256i_i8;
      *(_QWORD *)&v75 = v46;
      sub_140662E70(&v106, v77[286]);
      v35 = (unsigned __int64)v106;
      v52 = v107.m256i_i64[1];
      v51 = v107.m256i_i64[0];
      v53 = v107.m256i_i64[3];
      v37 = v107.m256i_i64[2];
      v89 = v108;
      v90 = v109;
      v91 = v110;
      sub_1403CCB70(&v75);
      v103 = v89;
      v104 = v90;
      v105 = v91;
      v47 = (_BYTE *)v123;
      *(_BYTE *)(v123 + 1680) = 1;
      if ( v35 == -2 )
      {
LABEL_49:
        v47[1688] = 3;
        v47[1696] = 3;
        v54 = 3;
        result = 1;
        goto LABEL_69;
      }
      v56 = v51 >> 8;
      v57 = v105;
      v102 = v105;
      v101 = v104;
      v100 = v103;
      if ( v35 != -1 )
      {
        v88 = v102;
        v87 = v101;
        v86 = v100;
        v78 = v35;
        v79 = v51;
        v80 = v51 >> 8;
        v82 = v51 >> 8 >> 48;
        v81 = HIDWORD(v51) >> 8;
        v83 = v52;
        v84 = v37;
        v85 = v53;
        sub_1406A7210(&v106, &v78);
        v35 = *(unsigned int *)((char *)v107.m256i_u32 + 2) | ((unsigned __int64)v107.m256i_u16[3] << 32);
        v9 = v107.m256i_i8[0];
        v36 = v107.m256i_i64[1];
        v37 = v107.m256i_i64[3];
        v61 = v107.m256i_i64[2];
        if ( v106 == (const char *)-1LL )
        {
          LOBYTE(v115) = v107.m256i_i8[1];
          v42 = 0;
        }
        else
        {
          v70.m256i_i64[0] = 0;
          *(_OWORD *)&v70.m256i_u64[1] = 1u;
          *(_QWORD *)&v76 = 1610612768;
          *(_QWORD *)&v75 = &v70;
          *((_QWORD *)&v75 + 1) = &off_14183C100;
          if ( (unsigned __int8)sub_1412A4620(&v106, &v75) )
            sub_141734130(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v121,
              (unsigned int)&unk_141833EE0,
              (__int64)&off_14183C1B8);
          v61 = v70.m256i_i64[1];
          v36 = v70.m256i_i64[0];
          v37 = v70.m256i_i64[2];
          sub_140D64E60(&v106);
          v42 = 1;
          v9 = 3;
        }
        goto LABEL_62;
      }
LABEL_54:
      v58 = (__int64 *)((v56 << 8) | (unsigned __int8)v51);
      if ( v37 < 0 )
      {
        v59 = 0;
        goto LABEL_56;
      }
      if ( v37 )
      {
        nullsub_1(v57, v47, v50);
        v59 = 1;
        v60 = sub_140001650(v37, 1);
        if ( !v60 )
        {
LABEL_56:
          v120 = v58;
          v115 = v52;
          sub_141733E1B(v59, v37);
        }
        v61 = v60;
        sub_1416F15C0(v60, v52, v37);
        if ( !v58 )
          goto LABEL_61;
      }
      else
      {
        v61 = 1;
        if ( !v58 )
          goto LABEL_61;
      }
      sub_140001660(v52, v58, 1);
LABEL_61:
      v42 = 1;
      v9 = 3;
      v36 = v37;
LABEL_62:
      v38 = v61;
      *(_BYTE *)v118 = 1;
      sub_140D64CE0(v122);
      v43 = v123;
      if ( *(_QWORD *)(v123 + 1568) != -1 )
      {
        v114 = (_QWORD *)(v123 + 1576);
        v62 = *(__int64 **)(v123 + 1576);
        v118 = *(__int64 **)(v123 + 1584);
        v120 = nullptr;
        v119 = v62;
        while ( v118 != v120 )
        {
          v120 = (__int64 *)((char *)v120 + 1);
          v63 = v62 + 12;
          sub_140296460();
          v62 = v63;
        }
        v43 = v123;
        v41 = *(_QWORD *)(v123 + 1568);
        if ( v41 )
LABEL_67:
          sub_140001660(*v114, 96 * v41, 8);
      }
LABEL_68:
      *(_BYTE *)(v43 + 1696) = 1;
      sub_140D54730(v122);
      v95 = v35;
      v96 = WORD2(v35);
      v98 = v38;
      v99 = v37;
      v93 = v9;
      v94 = v115;
      v97 = v36;
      v92 = v42;
      v64 = v123;
      *(_BYTE *)(v123 + 1715) = 0;
      sub_1416F15C0(&v106, v64, 360);
      *(_BYTE *)(v64 + 1714) = 0;
      v65 = *(_QWORD *)(v64 + 384);
      *(_BYTE *)(v64 + 1713) = 0;
      *(_QWORD *)&v76 = *(_QWORD *)(v64 + 376);
      v75 = *(_OWORD *)(v64 + 360);
      sub_1407A09A0(
        (unsigned int)&v106,
        v65,
        (unsigned int)&v92,
        (unsigned int)&v75,
        *(_DWORD *)(v64 + 1704),
        *(_DWORD *)(v64 + 1708));
      v54 = 1;
      result = 0;
      v47 = (_BYTE *)v123;
LABEL_69:
      v47[1712] = v54;
      return result;
  }
}
