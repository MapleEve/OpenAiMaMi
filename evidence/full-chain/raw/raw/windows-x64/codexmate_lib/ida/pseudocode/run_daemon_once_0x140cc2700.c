// module: codexmate_lib
// addr: 0x140cc2700
// name: run_daemon_once
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = run_daemon_once | mapped via command-name string xref (win-native, ground-truth)
char __fastcall run_daemon_once(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 *v8; // r13
  unsigned __int64 v9; // r15
  char v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r13
  unsigned __int64 v25; // r14
  __int64 *v26; // r13
  unsigned __int64 v27; // r12
  _BYTE *v28; // rdx
  char v29; // cl
  char result; // al
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int8 v34; // bl
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 *v41; // rcx
  __int64 *v42; // r13
  __int64 v43; // rdi
  __int64 v44; // rdx
  _QWORD *v45; // rsi
  __int128 v46; // [rsp+30h] [rbp-50h]
  __int128 v47; // [rsp+40h] [rbp-40h]
  __int128 v48; // [rsp+50h] [rbp-30h]
  __int128 v49; // [rsp+60h] [rbp-20h]
  __int128 v50; // [rsp+70h] [rbp-10h]
  __int128 v51; // [rsp+80h] [rbp+0h]
  __int128 v52; // [rsp+90h] [rbp+10h]
  __int128 v53; // [rsp+A0h] [rbp+20h]
  __int128 v54; // [rsp+B0h] [rbp+30h]
  __int128 v55; // [rsp+C0h] [rbp+40h]
  __int128 v56; // [rsp+D0h] [rbp+50h]
  __int128 v57; // [rsp+E0h] [rbp+60h]
  __int128 v58; // [rsp+F0h] [rbp+70h]
  __int128 v59; // [rsp+100h] [rbp+80h]
  __int128 v60; // [rsp+110h] [rbp+90h]
  __int128 v61; // [rsp+120h] [rbp+A0h] BYREF
  const char *v62; // [rsp+130h] [rbp+B0h]
  __int64 v63; // [rsp+138h] [rbp+B8h]
  unsigned __int64 v64; // [rsp+140h] [rbp+C0h]
  __int128 v65; // [rsp+148h] [rbp+C8h]
  __int128 v66; // [rsp+158h] [rbp+D8h]
  __int128 v67; // [rsp+168h] [rbp+E8h]
  __int128 v68; // [rsp+178h] [rbp+F8h]
  __int128 v69; // [rsp+188h] [rbp+108h]
  __int128 v70; // [rsp+198h] [rbp+118h]
  __int128 v71; // [rsp+1A8h] [rbp+128h]
  __int128 v72; // [rsp+1B8h] [rbp+138h]
  __int128 v73; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v74; // [rsp+1E0h] [rbp+160h]
  __int128 v75; // [rsp+1F0h] [rbp+170h]
  __int128 v76; // [rsp+200h] [rbp+180h]
  __int128 v77; // [rsp+210h] [rbp+190h]
  __int128 v78; // [rsp+220h] [rbp+1A0h]
  __int128 v79; // [rsp+230h] [rbp+1B0h]
  __int128 v80; // [rsp+240h] [rbp+1C0h]
  unsigned __int64 v81; // [rsp+250h] [rbp+1D0h] BYREF
  unsigned __int64 v82; // [rsp+258h] [rbp+1D8h]
  __int64 v83; // [rsp+260h] [rbp+1E0h]
  unsigned __int64 v84; // [rsp+268h] [rbp+1E8h]
  _BYTE v85[24]; // [rsp+270h] [rbp+1F0h]
  __int128 v86; // [rsp+288h] [rbp+208h]
  __int128 v87; // [rsp+298h] [rbp+218h]
  __int128 v88; // [rsp+2A8h] [rbp+228h]
  __int128 v89; // [rsp+2B8h] [rbp+238h]
  __int128 v90; // [rsp+2C8h] [rbp+248h]
  __int128 v91; // [rsp+2D8h] [rbp+258h]
  __int128 v92; // [rsp+2E8h] [rbp+268h]
  _QWORD v93[2]; // [rsp+3B8h] [rbp+338h] BYREF
  __int64 v94; // [rsp+3C8h] [rbp+348h] BYREF
  char v95; // [rsp+3D0h] [rbp+350h]
  int v96; // [rsp+3D1h] [rbp+351h]
  __int16 v97; // [rsp+3D5h] [rbp+355h]
  char v98; // [rsp+3D7h] [rbp+357h]
  __int64 v99; // [rsp+3D8h] [rbp+358h]
  __int64 v100; // [rsp+3E0h] [rbp+360h]
  __int64 v101; // [rsp+3E8h] [rbp+368h]
  __int128 v102; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v103; // [rsp+400h] [rbp+380h]
  __int128 v104; // [rsp+410h] [rbp+390h]
  __int128 v105; // [rsp+420h] [rbp+3A0h]
  __int128 v106; // [rsp+430h] [rbp+3B0h]
  __int128 v107; // [rsp+440h] [rbp+3C0h]
  __int128 v108; // [rsp+450h] [rbp+3D0h]
  __int128 v109; // [rsp+460h] [rbp+3E0h]
  __int64 v110; // [rsp+478h] [rbp+3F8h]
  __int64 v111; // [rsp+480h] [rbp+400h]
  char v112; // [rsp+48Fh] [rbp+40Fh] BYREF
  unsigned __int64 v113; // [rsp+490h] [rbp+410h]
  _BYTE *v114; // [rsp+498h] [rbp+418h]
  _QWORD *v115; // [rsp+4A0h] [rbp+420h]
  __int64 *v116; // [rsp+4A8h] [rbp+428h]
  __int64 v117; // [rsp+4B0h] [rbp+430h]
  char v118; // [rsp+4BFh] [rbp+43Fh]
  __int64 v119; // [rsp+4C0h] [rbp+440h]

  v119 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 2528);
  v117 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 2529) = 257;
      *(_BYTE *)(a1 + 2531) = 1;
      v7 = a1 + 1456;
      sub_141684120(a1 + 1456, a1 + 392, 1064);
      switch ( *(_BYTE *)(v5 + 2512) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_61;
        case 2:
          goto LABEL_60;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 1456;
      switch ( *(_BYTE *)(a1 + 2512) )
      {
        case 0:
LABEL_4:
          v8 = (__int64 *)(v5 + 1976);
          *(_QWORD *)&v61 = aRunDaemonOnce;
          *((_QWORD *)&v61 + 1) = 15;
          v62 = aApp_2;
          v63 = 3;
          v113 = v7;
          v64 = v7;
          v65 = (unsigned __int64)v8;
          sub_1401C3650(&v81, &v61);
          v9 = ((unsigned __int64)((HIBYTE(v82) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v82 + 5)) << 32)
             | *(unsigned int *)((char *)&v82 + 1);
          v10 = v82;
          v11 = v83;
          v12 = v84;
          v13 = *(_QWORD *)v85;
          if ( v81 == -1 )
          {
            v116 = v8;
            sub_140BF0DE0(v113);
            v34 = 1;
            if ( *v116 == -1 )
              goto LABEL_45;
            v36 = *(_QWORD *)(v117 + 1984);
            v115 = *(_QWORD **)(v117 + 1992);
            v114 = nullptr;
            v111 = v36;
            while ( v115 != (_QWORD *)v114 )
            {
              ++v114;
              v37 = v36 + 96;
              sub_1402C7520();
              v36 = v37;
            }
            v39 = *v116;
            if ( !*v116 )
            {
LABEL_45:
              v40 = v117;
              goto LABEL_55;
            }
            v40 = v117;
            goto LABEL_54;
          }
          v60 = v91;
          v59 = v90;
          v58 = v89;
          v57 = v88;
          v56 = v87;
          v55 = v86;
          v54 = *(_OWORD *)&v85[8];
          v5 = v117;
          v14 = v117 + 2000;
          *(_QWORD *)(v117 + 2000) = v81;
          *(_BYTE *)(v5 + 2008) = v10;
          *(_BYTE *)(v5 + 2015) = BYTE6(v9);
          *(_WORD *)(v5 + 2013) = WORD2(v9);
          *(_DWORD *)(v5 + 2009) = v9;
          *(_QWORD *)(v5 + 2016) = v11;
          *(_QWORD *)(v5 + 2024) = v12;
          *(_QWORD *)(v5 + 2032) = v13;
          *(_OWORD *)(v5 + 2040) = v54;
          *(_OWORD *)(v5 + 2056) = v55;
          *(_OWORD *)(v5 + 2072) = v56;
          *(_OWORD *)(v5 + 2088) = v57;
          *(_OWORD *)(v5 + 2104) = v58;
          *(_OWORD *)(v5 + 2120) = v59;
          *(_OWORD *)(v5 + 2136) = v60;
          *(_BYTE *)(v5 + 2160) = 0;
          v15 = v5 + 2168;
          sub_141684120(v5 + 2168, v14, 168);
          v114 = (_BYTE *)(v5 + 2504);
          *(_BYTE *)(v5 + 2504) = 0;
LABEL_7:
          v116 = (__int64 *)(v5 + 2336);
          v111 = v15;
          sub_141684120(v5 + 2336, v15, 168);
LABEL_9:
          sub_141684120(&v81, v116, 152);
          v18 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v118 = 1;
            v45 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v18 = v45;
          }
          if ( *((_DWORD *)v18 + 4) == 2 )
          {
            v19 = 704;
            if ( *(_BYTE *)v18 )
              v19 = 472;
            v20 = v18[1] + v19;
            v118 = 0;
            v21 = sub_14089A470(v20, v18, &v81, &off_1417642A8);
          }
          else
          {
            v22 = 704;
            if ( *((_BYTE *)v18 + 64) )
              v22 = 472;
            v23 = v18[9] + v22;
            v118 = 0;
            v21 = sub_14089A470(v23, v18 + 8, &v81, &off_141764290);
          }
          v24 = v117;
          *(_QWORD *)(v117 + 2488) = v21;
          v115 = (_QWORD *)(v24 + 2488);
          sub_140AFF780(&v81, v24 + 2488, a2);
          v25 = v81;
          if ( v81 == -3 )
          {
            v28 = (_BYTE *)v117;
            *(_BYTE *)(v117 + 2496) = 3;
            v28[2504] = 3;
            v28[2512] = 3;
            v29 = 3;
            result = 1;
            goto LABEL_56;
          }
          if ( v81 == -2 )
          {
            v26 = (__int64 *)v82;
            v13 = v83;
            v27 = 0x800000000000000CuLL;
            v9 = v84;
          }
          else
          {
            v27 = v82;
            v26 = (__int64 *)v83;
            v13 = v84;
            v9 = *(_QWORD *)v85;
            v102 = *(_OWORD *)&v85[8];
            v103 = v86;
            v104 = v87;
            v105 = v88;
            v106 = v89;
            v107 = v90;
            v108 = v91;
            v109 = v92;
          }
          v73 = v102;
          v74 = v103;
          v75 = v104;
          v76 = v105;
          v77 = v106;
          v78 = v107;
          v79 = v108;
          v80 = v109;
          v31 = *v115;
          if ( (unsigned __int8)sub_1412F2A80(*v115) )
            sub_1412E7580(v31);
          if ( v25 == -2 )
          {
            v81 = v27;
            v82 = (unsigned __int64)v26;
            v83 = v13;
            v84 = v9;
            *(_OWORD *)v85 = v73;
            v93[0] = &v81;
            v93[1] = sub_141230630;
            sub_14149C0F0(&v102, &unk_1417BA177, v93);
            sub_140BF0F60(&v81);
            v26 = *((__int64 **)&v102 + 1);
            v27 = v102;
            v13 = v103;
            *(_BYTE *)(v117 + 2496) = 1;
            goto LABEL_31;
          }
          v53 = v80;
          v52 = v79;
          v51 = v78;
          v50 = v77;
          v49 = v76;
          v48 = v75;
          v47 = v74;
          v46 = v73;
          *(_BYTE *)(v117 + 2496) = 1;
          if ( v25 == -1 )
          {
LABEL_31:
            if ( v13 < 0 )
            {
              v35 = 0;
              goto LABEL_33;
            }
            if ( v13 )
            {
              nullsub_1(v32);
              v35 = 1;
              v38 = sub_140001650(v13, 1);
              if ( !v38 )
              {
LABEL_33:
                v116 = v26;
                v115 = (_QWORD *)v27;
                sub_1416C2D4B(v35, v13);
              }
              v12 = v38;
              sub_141684120(v38, v26, v13);
              if ( !v27 )
                goto LABEL_42;
            }
            else
            {
              v12 = 1;
              if ( !v27 )
                goto LABEL_42;
            }
            sub_140001660(v26, v27, 1);
LABEL_42:
            v34 = 1;
            v10 = 3;
            v11 = v13;
            goto LABEL_49;
          }
          v72 = v53;
          v71 = v52;
          v70 = v51;
          v69 = v50;
          v68 = v49;
          v67 = v48;
          v66 = v47;
          v65 = v46;
          *(_QWORD *)&v61 = v25;
          *((_QWORD *)&v61 + 1) = v27;
          v62 = (const char *)v26;
          v63 = v13;
          v64 = v9;
          sub_140B05060(&v81, &v61);
          v9 = ((unsigned __int64)((HIBYTE(v82) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v82 + 5)) << 32)
             | *(unsigned int *)((char *)&v82 + 1);
          v10 = v82;
          v11 = v83;
          v12 = v84;
          v13 = *(_QWORD *)v85;
          if ( v81 == -1 )
          {
            v34 = 0;
          }
          else
          {
            HIBYTE(v82) = (((unsigned __int64)((HIBYTE(v82) << 16)
                                             | (unsigned int)*(unsigned __int16 *)((char *)&v82 + 5)) << 32)
                         | *(unsigned int *)((char *)&v82 + 1)) >> 48;
            *(_WORD *)((char *)&v82 + 5) = WORD2(v9);
            *(_DWORD *)((char *)&v82 + 1) = v9;
            *(_QWORD *)&v102 = 0;
            *((_QWORD *)&v102 + 1) = 1;
            *(_QWORD *)&v103 = 0;
            *(_QWORD *)&v74 = 1610612768;
            *(_QWORD *)&v73 = &v102;
            *((_QWORD *)&v73 + 1) = &off_1417C41C0;
            if ( (unsigned __int8)sub_141230630(&v81, &v73, v33) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v112,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v12 = *((_QWORD *)&v102 + 1);
            v11 = v102;
            v13 = v103;
            sub_140BF0F60(&v81);
            v34 = 1;
            v10 = 3;
          }
LABEL_49:
          *v114 = 1;
          sub_140BF0DE0(v113);
          v40 = v117;
          if ( *(_QWORD *)(v117 + 1976) != -1 )
          {
            v41 = *(__int64 **)(v117 + 1984);
            v115 = *(_QWORD **)(v117 + 1992);
            v114 = nullptr;
            v116 = v41;
            while ( v115 != (_QWORD *)v114 )
            {
              ++v114;
              v42 = v41 + 12;
              sub_1402C7520();
              v41 = v42;
            }
            v40 = v117;
            v39 = *(_QWORD *)(v117 + 1976);
            if ( v39 )
LABEL_54:
              sub_140001660(*(_QWORD *)(v40 + 1984), 96 * v39, 8);
          }
LABEL_55:
          *(_BYTE *)(v40 + 2512) = 1;
          sub_140BE4E80(v113);
          v96 = v9;
          v98 = BYTE6(v9);
          v97 = WORD2(v9);
          v99 = v11;
          v100 = v12;
          v101 = v13;
          v95 = v10;
          v94 = v34;
          v43 = v117;
          *(_BYTE *)(v117 + 2531) = 0;
          sub_141684120(&v81, v43, 360);
          *(_BYTE *)(v43 + 2530) = 0;
          v44 = *(_QWORD *)(v43 + 384);
          *(_BYTE *)(v43 + 2529) = 0;
          v62 = *(const char **)(v43 + 376);
          v61 = *(_OWORD *)(v43 + 360);
          sub_14047E370(
            (unsigned int)&v81,
            v44,
            (unsigned int)&v94,
            (unsigned int)&v61,
            *(_DWORD *)(v43 + 2520),
            *(_DWORD *)(v43 + 2524));
          v29 = 1;
          result = 0;
          v28 = (_BYTE *)v117;
LABEL_56:
          v28[2528] = v29;
          return result;
        case 1:
LABEL_61:
          v113 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_60:
          v113 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
LABEL_6:
          v113 = v7;
          v16 = v5 + 2504;
          v17 = *(unsigned __int8 *)(v5 + 2504);
          v15 = v5 + 2168;
          v114 = (_BYTE *)(v5 + 2504);
          switch ( v17 )
          {
            case 0LL:
              goto LABEL_7;
            case 1LL:
              v110 = v5 + 2168;
              sub_1416C3400(&off_1417B7B80, v16, a3, a4);
            case 2LL:
              v110 = v5 + 2168;
              sub_1416C3420(&off_1417B7B80, v16, a3, a4);
            case 3LL:
              v111 = v5 + 2168;
              v116 = (__int64 *)(v5 + 2336);
              goto LABEL_9;
          }
      }
  }
}