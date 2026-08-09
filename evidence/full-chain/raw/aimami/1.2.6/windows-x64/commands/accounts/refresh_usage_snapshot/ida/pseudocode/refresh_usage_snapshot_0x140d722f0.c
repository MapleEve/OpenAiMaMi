// Pseudocode for refresh_usage_snapshot (EA: 0x140d722f0, size: 0x1010)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// Tauri命令handler:刷新全部账号用量快照(usage)。归属:锚src\commands\accounts.rs。
char __fastcall refresh_usage_snapshot(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r12
  __int64 v3; // r15
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // r13
  unsigned __int64 v10; // r15
  char v11; // r12
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rbx
  char v22; // of
  volatile signed __int64 *v23; // rbx
  __int64 v24; // rt0
  volatile signed __int64 *v25; // r14
  __int64 v26; // rt0
  char v27; // bl
  __int64 v28; // r14
  _QWORD *v29; // rsi
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r14
  unsigned __int64 v37; // r15
  __int64 v38; // rsi
  _BYTE *v39; // rdx
  char v40; // cl
  char result; // al
  __int64 v42; // r12
  _BYTE *v43; // r13
  __int64 *v44; // rdi
  __int64 v45; // rdi
  _BYTE *v46; // rdi
  unsigned __int64 v47; // r13
  __int64 v48; // rbx
  unsigned __int8 v49; // di
  _BYTE *v50; // rcx
  _BYTE *v51; // r13
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdi
  __int64 v60; // rax
  _QWORD *v61; // rcx
  _QWORD *v62; // r13
  __int64 v63; // rdi
  __int64 v64; // rdx
  _QWORD *v65; // rsi
  __int64 v66; // [rsp+20h] [rbp-60h]
  _BYTE v67[856]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v68[856]; // [rsp+388h] [rbp+308h] BYREF
  _BYTE v69[856]; // [rsp+6E0h] [rbp+660h] BYREF
  _OWORD v70[53]; // [rsp+A38h] [rbp+9B8h] BYREF
  _QWORD v71[107]; // [rsp+D90h] [rbp+D10h] BYREF
  _QWORD v72[5]; // [rsp+10E8h] [rbp+1068h] BYREF
  char v73[856]; // [rsp+1110h] [rbp+1090h] BYREF
  __int64 v74; // [rsp+1468h] [rbp+13E8h] BYREF
  __int64 v75; // [rsp+1470h] [rbp+13F0h]
  __int64 v76; // [rsp+1478h] [rbp+13F8h]
  _BYTE v77[160]; // [rsp+17C0h] [rbp+1740h] BYREF
  __int128 v78; // [rsp+1860h] [rbp+17E0h] BYREF
  __int64 v79; // [rsp+1870h] [rbp+17F0h]
  __int64 v80; // [rsp+1878h] [rbp+17F8h]
  __int64 v81; // [rsp+1880h] [rbp+1800h]
  _QWORD v82[108]; // [rsp+1888h] [rbp+1808h] BYREF
  _BYTE v83[136]; // [rsp+1BE8h] [rbp+1B68h] BYREF
  volatile signed __int64 *v84; // [rsp+1C70h] [rbp+1BF0h]
  volatile signed __int64 *v85; // [rsp+1C78h] [rbp+1BF8h]
  unsigned __int64 v86; // [rsp+1C80h] [rbp+1C00h] BYREF
  unsigned __int64 v87; // [rsp+1C88h] [rbp+1C08h]
  __int64 v88; // [rsp+1C90h] [rbp+1C10h]
  __int64 v89; // [rsp+1C98h] [rbp+1C18h]
  _OWORD v90[54]; // [rsp+1CA0h] [rbp+1C20h] BYREF
  __int128 v91; // [rsp+2000h] [rbp+1F80h]
  __int128 v92; // [rsp+2010h] [rbp+1F90h]
  __int128 v93; // [rsp+2020h] [rbp+1FA0h]
  __int128 v94; // [rsp+2030h] [rbp+1FB0h]
  __int128 v95; // [rsp+2040h] [rbp+1FC0h]
  __int128 v96; // [rsp+2050h] [rbp+1FD0h]
  __int128 v97; // [rsp+2060h] [rbp+1FE0h]
  _QWORD v98[2]; // [rsp+2070h] [rbp+1FF0h] BYREF
  __int64 v99; // [rsp+2080h] [rbp+2000h] BYREF
  char v100; // [rsp+2088h] [rbp+2008h]
  int v101; // [rsp+2089h] [rbp+2009h]
  __int16 v102; // [rsp+208Dh] [rbp+200Dh]
  char v103; // [rsp+208Fh] [rbp+200Fh]
  __int64 v104; // [rsp+2090h] [rbp+2010h]
  __int64 v105; // [rsp+2098h] [rbp+2018h]
  __int64 v106; // [rsp+20A0h] [rbp+2020h]
  __int64 v107; // [rsp+20A8h] [rbp+2028h]
  __int64 v108; // [rsp+20B0h] [rbp+2030h]
  __int64 v109; // [rsp+20B8h] [rbp+2038h]
  __int64 v110; // [rsp+20C0h] [rbp+2040h]
  unsigned __int64 v111; // [rsp+20C8h] [rbp+2048h]
  __int64 v112; // [rsp+20D0h] [rbp+2050h]
  unsigned __int64 v113; // [rsp+20D8h] [rbp+2058h]
  __int64 v114; // [rsp+20E0h] [rbp+2060h]
  unsigned __int64 v115; // [rsp+20E8h] [rbp+2068h]
  __int64 *v116; // [rsp+20F0h] [rbp+2070h]
  __int64 v117; // [rsp+20F8h] [rbp+2078h]
  __int64 v118; // [rsp+2100h] [rbp+2080h]
  unsigned __int64 v119; // [rsp+2108h] [rbp+2088h]
  char v120; // [rsp+2117h] [rbp+2097h] BYREF
  __int64 v121; // [rsp+2118h] [rbp+2098h]
  _BYTE *v122; // [rsp+2120h] [rbp+20A0h]
  _QWORD *v123; // [rsp+2128h] [rbp+20A8h]
  _BYTE *v124; // [rsp+2130h] [rbp+20B0h]
  __int64 v125; // [rsp+2138h] [rbp+20B8h]
  unsigned __int64 v126; // [rsp+2140h] [rbp+20C0h]
  _BYTE *v127; // [rsp+2148h] [rbp+20C8h]
  __int64 v128; // [rsp+2150h] [rbp+20D0h]
  _QWORD *v129; // [rsp+2158h] [rbp+20D8h]
  __int64 v130; // [rsp+2160h] [rbp+20E0h]
  unsigned __int64 v131; // [rsp+2168h] [rbp+20E8h]
  __int64 v132; // [rsp+2170h] [rbp+20F0h]
  char v133; // [rsp+217Fh] [rbp+20FFh]
  __int64 v134; // [rsp+2180h] [rbp+2100h]

  v134 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 5408);
  v132 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 5409) = 257;
      *(_BYTE *)(a1 + 5411) = 1;
      v7 = a1 + 2896;
      sub_14172B820(a1 + 2896, a1 + 392, 2504);
      v8 = *(unsigned __int8 *)(v5 + 5392);
      switch ( *(_BYTE *)(v5 + 5392) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_76;
        case 2:
          goto LABEL_75;
        case 3:
          goto LABEL_6;
        case 4:
          goto LABEL_7;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v7 = a1 + 2896;
      switch ( *(_BYTE *)(a1 + 5392) )
      {
        case 0:
LABEL_4:
          v9 = (_QWORD *)(v5 + 3416);
          v82[1] = 0;
          *(_QWORD *)&v78 = aRefreshUsageSn;
          *((_QWORD *)&v78 + 1) = 22;
          v79 = (__int64)aApp_4;
          v80 = 3;
          v128 = v7;
          v81 = v7;
          v82[0] = v9;
          sub_1401A9630((__int64)&v86, (__int64)&v78);
          v10 = ((unsigned __int64)((HIBYTE(v87) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v87 + 5)) << 32)
              | *(unsigned int *)((char *)&v87 + 1);
          v11 = v87;
          v12 = v88;
          v13 = v89;
          v14 = *(_QWORD *)&v90[0];
          if ( v86 != -1 )
          {
            v97 = *(_OWORD *)((char *)&v90[6] + 8);
            v96 = *(_OWORD *)((char *)&v90[5] + 8);
            v95 = *(_OWORD *)((char *)&v90[4] + 8);
            v94 = *(_OWORD *)((char *)&v90[3] + 8);
            v93 = *(_OWORD *)((char *)&v90[2] + 8);
            v92 = *(_OWORD *)((char *)&v90[1] + 8);
            v91 = *(_OWORD *)((char *)v90 + 8);
            v5 = v132;
            v15 = v132 + 3440;
            *(_QWORD *)(v132 + 3440) = v86;
            *(_BYTE *)(v5 + 3448) = v11;
            *(_BYTE *)(v5 + 3455) = BYTE6(v10);
            *(_WORD *)(v5 + 3453) = WORD2(v10);
            *(_DWORD *)(v5 + 3449) = v10;
            *(_QWORD *)(v5 + 3456) = v12;
            *(_QWORD *)(v5 + 3464) = v13;
            *(_QWORD *)(v5 + 3472) = v14;
            v16 = v92;
            v17 = v93;
            v18 = v94;
            *(_OWORD *)(v5 + 3480) = v91;
            *(_OWORD *)(v5 + 3496) = v16;
            *(_OWORD *)(v5 + 3512) = v17;
            *(_OWORD *)(v5 + 3528) = v18;
            *(_OWORD *)(v5 + 3544) = v95;
            *(_OWORD *)(v5 + 3560) = v96;
            *(_OWORD *)(v5 + 3576) = v97;
            *(_BYTE *)(v5 + 4080) = 0;
            v3 = v5 + 4088;
            sub_14172B820(v5 + 4088, v15, 648);
            v2 = (_BYTE *)(v5 + 5384);
            *(_BYTE *)(v5 + 5384) = 0;
            v7 = v128;
LABEL_8:
            v19 = v5 + 4736;
            sub_14172B820(v5 + 4736, v3, 648);
            v20 = *(unsigned __int8 *)(v5 + 5376);
            switch ( *(_BYTE *)(v5 + 5376) )
            {
              case 0:
                goto LABEL_10;
              case 1:
                goto LABEL_78;
              case 2:
                goto LABEL_77;
              case 3:
                goto LABEL_11;
              case 4:
                goto LABEL_12;
            }
          }
          v129 = v9;
          sub_140CAB140(v128);
          v49 = 1;
          if ( *v129 != -1 )
          {
            v50 = *(_BYTE **)(v132 + 3424);
            v130 = *(_QWORD *)(v132 + 3432);
            v131 = 0;
            v127 = v50;
            while ( v130 != v131 )
            {
              ++v131;
              v51 = v50 + 96;
              sub_140401FB0();
              v50 = v51;
            }
            v52 = *v129;
            if ( *v129 )
            {
              v53 = v132;
              goto LABEL_67;
            }
          }
          v53 = v132;
          goto LABEL_68;
        case 1:
LABEL_76:
          v128 = v7;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_75:
          v128 = v7;
          sub_14176EC20(&off_141886DB8);
        case 3:
LABEL_6:
          v2 = (_BYTE *)(v5 + 5384);
          v8 = *(unsigned __int8 *)(v5 + 5384);
          v3 = v5 + 4088;
          break;
      }
      break;
  }
LABEL_7:
  switch ( v8 )
  {
    case 0LL:
      goto LABEL_8;
    case 1LL:
      v128 = v7;
      v107 = v3;
      sub_14176EC00(&off_1418851A0);
    case 2LL:
      v128 = v7;
      v107 = v3;
      sub_14176EC20(&off_1418851A0);
    case 3LL:
      v19 = v5 + 4736;
      switch ( *(_BYTE *)(v5 + 5376) )
      {
        case 0:
LABEL_10:
          v21 = v5 + 4888;
          v118 = v19;
          sub_14172B820(v5 + 4888, v19, 152);
          v131 = v5 + 5368;
          *(_BYTE *)(v5 + 5368) = 0;
          break;
        case 1:
LABEL_78:
          v118 = v19;
          v122 = v2;
          v121 = v3;
          v128 = v7;
          sub_14176EC00(&off_1418889E0);
        case 2:
LABEL_77:
          v118 = v19;
          v122 = v2;
          v121 = v3;
          v128 = v7;
          sub_14176EC20(&off_1418889E0);
        case 3:
LABEL_11:
          v131 = v5 + 5368;
          v20 = *(unsigned __int8 *)(v5 + 5368);
          v130 = v5 + 4888;
LABEL_12:
          v118 = v19;
          switch ( v20 )
          {
            case 0LL:
              v21 = v5 + 4888;
              break;
            case 1LL:
              v122 = v2;
              v121 = v3;
              v128 = v7;
              v108 = v130;
              sub_14176EC00(&off_141888A48);
            case 2LL:
              v122 = v2;
              v121 = v3;
              v128 = v7;
              v108 = v130;
              sub_14176EC20(&off_141888A48);
            case 3LL:
              v122 = v2;
              v121 = v3;
              v128 = v7;
              v127 = (_BYTE *)(v5 + 5360);
              v29 = (_QWORD *)(v5 + 5192);
              switch ( *(_BYTE *)(v5 + 5360) )
              {
                case 0:
                  goto LABEL_17;
                case 1:
                  v111 = v131;
                  v110 = v130;
                  v109 = v5 + 5192;
                  sub_14176EC00(&off_141885668);
                case 2:
                  v111 = v131;
                  v110 = v130;
                  v109 = v5 + 5192;
                  sub_14176EC20(&off_141885668);
                case 3:
                  v129 = (_QWORD *)(v5 + 5192);
                  goto LABEL_27;
              }
          }
          break;
      }
      *(_BYTE *)(v5 + 5369) = 0;
      v130 = v21;
      sub_14172B820(v5 + 5040, v21, 152);
      sub_1401A9D00(&v86, v5 + 5040);
      v23 = *(volatile signed __int64 **)(v5 + 5176);
      v24 = _InterlockedIncrement64(v23);
      if ( (v24 < 0) ^ v22 | (v24 == 0)
        || (v122 = v2,
            v121 = v3,
            v128 = v7,
            v25 = *(volatile signed __int64 **)(v5 + 5184),
            v26 = _InterlockedIncrement64(v25),
            (v26 < 0) ^ v22 | (v26 == 0)) )
      {
        BUG();
      }
      sub_14172B820(v83, &v86, 136);
      v84 = v23;
      v85 = v25;
      *(_BYTE *)(v5 + 5369) = 1;
      v115 = v131;
      v114 = v130;
      v27 = sub_140BEC420(v5 + 5040);
      v28 = v132;
      *(_BYTE *)(v132 + 5369) = 0;
      v29 = (_QWORD *)(v28 + 5192);
      sub_14172B820(v28 + 5192, v83, 152);
      *(_BYTE *)(v28 + 5344) = v27;
      v127 = (_BYTE *)(v28 + 5360);
      *(_BYTE *)(v28 + 5360) = 0;
LABEL_17:
      v129 = v29;
      sub_14172B820(v77, v29, 160);
      v30 = off_141FB97C0;
      if ( *((_DWORD *)off_141FB97C0 + 24) )
      {
        v133 = 1;
        v65 = off_141FB97C0;
        sub_14172E34C(off_141FB97C0);
        v30 = v65;
      }
      if ( *((_DWORD *)v30 + 4) == 2 )
      {
        v31 = 704;
        if ( *(_BYTE *)v30 )
          v31 = 472;
        v32 = v30[1] + v31;
        v133 = 0;
        v33 = sub_14085D020(v32, v30, v77, &off_1417EBF48);
      }
      else
      {
        v34 = 704;
        if ( *((_BYTE *)v30 + 64) )
          v34 = 472;
        v35 = v30[9] + v34;
        v133 = 0;
        v33 = sub_14085D020(v35, v30 + 8, v77, &off_1417EBF30);
      }
      v5 = v132;
      *(_QWORD *)(v132 + 5352) = v33;
LABEL_27:
      v116 = (__int64 *)(v5 + 5352);
      sub_140501EC0(&v86, v5 + 5352, a2);
      v36 = v86;
      if ( v86 == -3 )
      {
        v39 = (_BYTE *)v132;
        *(_BYTE *)(v132 + 5360) = 3;
        v39[5368] = 3;
        v39[5376] = 3;
        v39[5384] = 3;
        v39[5392] = 3;
        v40 = 3;
        result = 1;
        goto LABEL_69;
      }
      if ( (_DWORD)v86 == -2 )
      {
        v119 = v87;
        v117 = v88;
        v37 = 0x800000000000000CuLL;
        v38 = v89;
      }
      else
      {
        v37 = v87;
        v119 = v88;
        v117 = v89;
        v38 = *(_QWORD *)&v90[0];
        sub_14172B820(v71, (char *)v90 + 8, 856);
      }
      v42 = v130;
      v43 = v127;
      v44 = v116;
      sub_14172B820(v70, v71, 856);
      v45 = *v44;
      v126 = v131;
      v125 = v42;
      v124 = v43;
      v123 = v129;
      if ( (unsigned __int8)sub_141398090(v45) )
      {
        v126 = v131;
        v125 = v42;
        v124 = v43;
        v123 = v129;
        sub_14139A2E0(v45);
      }
      if ( (_DWORD)v36 == -2 )
      {
        v86 = v37;
        v87 = v119;
        v88 = v117;
        v89 = v38;
        v90[0] = v70[0];
        v98[0] = &v86;
        v98[1] = sub_1412DDF00;
        sub_141543AF0(v71, &unk_1418862D0, v98);
        v126 = v131;
        v42 = v130;
        v125 = v130;
        v46 = v127;
        v124 = v127;
        v123 = v129;
        sub_140CAB2C0(&v86);
        v47 = v71[0];
        v10 = v71[1];
        v14 = v71[2];
        *v46 = 1;
        v48 = v132;
      }
      else
      {
        sub_14172B820(&v74, v70, 856);
        *v43 = 1;
        v48 = v132;
        if ( (_DWORD)v36 != -1 )
        {
          v42 = v38;
          v81 = v38;
          sub_14172B820(v82, &v74, 856);
          v47 = v37;
          *((_QWORD *)&v78 + 1) = v37;
          v10 = v119;
          v79 = v119;
          v14 = v117;
          v80 = v117;
          *(_QWORD *)&v78 = v36;
          sub_140BEB110(v48 + 5040, (unsigned int)&v78, (unsigned int)"usage", 5, 0);
          sub_14172B820(v68, &v74, 856);
          *(_BYTE *)(v132 + 5369) = 0;
          v113 = v131;
          v112 = v130;
          sub_140203A20(v48 + 5040);
          goto LABEL_49;
        }
        v47 = v37;
        v10 = v119;
        v14 = v117;
      }
      *(_BYTE *)(v48 + 5369) = 0;
      v113 = v131;
      v112 = v42;
      sub_140203A20(v48 + 5040);
      v36 = -1;
LABEL_49:
      sub_14172B820(v67, v68, 856);
      v54 = v132;
      *(_BYTE *)(v132 + 5368) = 1;
      *(_BYTE *)(v54 + 5376) = 1;
      sub_14172B820(v69, v67, 856);
      if ( (_DWORD)v36 != -1 )
      {
        sub_14172B820(v73, v69, 856);
        v72[0] = v36;
        v72[1] = v47;
        v72[2] = v10;
        v72[3] = v14;
        v72[4] = v42;
        sub_140509350(&v86, v72);
        v10 = ((unsigned __int64)((HIBYTE(v87) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v87 + 5)) << 32)
            | *(unsigned int *)((char *)&v87 + 1);
        v11 = v87;
        v12 = v88;
        v13 = v89;
        v14 = *(_QWORD *)&v90[0];
        if ( v86 == -1 )
        {
          v49 = 0;
        }
        else
        {
          HIBYTE(v87) = (((unsigned __int64)((HIBYTE(v87) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v87 + 5)) << 32)
                       | *(unsigned int *)((char *)&v87 + 1)) >> 48;
          *(_WORD *)((char *)&v87 + 5) = WORD2(v10);
          *(_DWORD *)((char *)&v87 + 1) = v10;
          v74 = 0;
          v75 = 1;
          v76 = 0;
          v79 = 1610612768;
          *(_QWORD *)&v78 = &v74;
          *((_QWORD *)&v78 + 1) = &off_141891B48;
          if ( (unsigned __int8)sub_1412DDF00(&v86, &v78) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v120,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v12 = v74;
          v13 = v75;
          v14 = v76;
          sub_140CAB2C0(&v86);
          v49 = 1;
          v11 = 3;
        }
        goto LABEL_62;
      }
      if ( v14 < 0 )
      {
        v59 = 0;
        goto LABEL_55;
      }
      if ( v14 )
      {
        nullsub_1(v56, v55, v57, v58, v66);
        v59 = 1;
        v60 = sub_140001650(v14, 1);
        if ( !v60 )
        {
LABEL_55:
          v119 = v10;
          v131 = v47;
          sub_14176E54B(v59, v14);
        }
        v13 = v60;
        sub_14172B820(v60, v10, v14);
        if ( v47 )
          goto LABEL_60;
      }
      else
      {
        v13 = 1;
        if ( v47 )
LABEL_60:
          sub_140001660(v10, v47, 1);
      }
      v49 = 1;
      v11 = 3;
      v12 = v14;
LABEL_62:
      *v122 = 1;
      sub_140C7F2C0(v121);
      sub_140CAB140(v128);
      v53 = v132;
      if ( *(_QWORD *)(v132 + 3416) != -1 )
      {
        v61 = *(_QWORD **)(v132 + 3424);
        v130 = *(_QWORD *)(v132 + 3432);
        v131 = 0;
        v129 = v61;
        while ( v130 != v131 )
        {
          ++v131;
          v62 = v61 + 12;
          sub_140401FB0();
          v61 = v62;
        }
        v53 = v132;
        v52 = *(_QWORD *)(v132 + 3416);
        if ( v52 )
LABEL_67:
          sub_140001660(*(_QWORD *)(v53 + 3424), 96 * v52, 8);
      }
LABEL_68:
      *(_BYTE *)(v53 + 5392) = 1;
      sub_140C9DD70(v128);
      v101 = v10;
      v103 = BYTE6(v10);
      v102 = WORD2(v10);
      v104 = v12;
      v105 = v13;
      v106 = v14;
      v100 = v11;
      v99 = v49;
      v63 = v132;
      *(_BYTE *)(v132 + 5411) = 0;
      sub_14172B820(&v86, v63, 360);
      *(_BYTE *)(v63 + 5410) = 0;
      v64 = *(_QWORD *)(v63 + 384);
      *(_BYTE *)(v63 + 5409) = 0;
      v79 = *(_QWORD *)(v63 + 376);
      v78 = *(_OWORD *)(v63 + 360);
      sub_140AFFC30((__int64)&v86, v64, (__int64)&v99, &v78, *(_DWORD *)(v63 + 5400), *(_DWORD *)(v63 + 5404));
      v40 = 1;
      result = 0;
      v39 = (_BYTE *)v132;
LABEL_69:
      v39[5408] = v40;
      return result;
  }
}
