// module: codexmate_lib
// addr: 0x140c8b7a0
// name: set_auto_switch
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = set_auto_switch | mapped via command-name string xref (win-native, ground-truth)
char __fastcall set_auto_switch(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // r15
  unsigned __int64 v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  char v10; // r14
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int8 v21; // di
  __int64 v22; // rsi
  char v23; // bl
  char v24; // of
  __int64 v25; // rax
  volatile signed __int64 *v26; // rsi
  __int64 v27; // rt0
  volatile signed __int64 *v28; // rdi
  __int64 v29; // rt0
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rsi
  unsigned __int64 v38; // r12
  char v39; // cl
  __int64 v40; // r14
  _QWORD *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdi
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  char v47; // al
  _BYTE *v48; // rdx
  _QWORD *v49; // rcx
  char v50; // cl
  char result; // al
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rax
  _QWORD *v56; // rcx
  _QWORD *v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rdx
  _QWORD *v60; // rsi
  __int128 v61; // [rsp+30h] [rbp-50h]
  __int128 v62; // [rsp+40h] [rbp-40h]
  __int128 v63; // [rsp+50h] [rbp-30h]
  __int128 v64; // [rsp+60h] [rbp-20h]
  __int128 v65; // [rsp+70h] [rbp-10h]
  _QWORD v66[2]; // [rsp+80h] [rbp+0h] BYREF
  const char *v67; // [rsp+90h] [rbp+10h] BYREF
  __int64 v68; // [rsp+98h] [rbp+18h]
  __int128 v69; // [rsp+A0h] [rbp+20h]
  _BYTE v70[24]; // [rsp+B0h] [rbp+30h]
  __int128 v71; // [rsp+C8h] [rbp+48h]
  __int128 v72; // [rsp+D8h] [rbp+58h]
  __int128 v73; // [rsp+E8h] [rbp+68h]
  __int128 v74; // [rsp+F8h] [rbp+78h]
  __int128 v75; // [rsp+108h] [rbp+88h]
  __int128 v76; // [rsp+118h] [rbp+98h]
  char v77; // [rsp+128h] [rbp+A8h]
  const char *v78; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v79; // [rsp+200h] [rbp+180h]
  const char *v80; // [rsp+208h] [rbp+188h]
  __int64 v81; // [rsp+210h] [rbp+190h]
  __int64 v82; // [rsp+218h] [rbp+198h]
  __int128 v83; // [rsp+220h] [rbp+1A0h]
  __int128 v84; // [rsp+230h] [rbp+1B0h]
  __int128 v85; // [rsp+240h] [rbp+1C0h]
  __int128 v86; // [rsp+250h] [rbp+1D0h]
  __int128 v87; // [rsp+260h] [rbp+1E0h]
  __int64 v88; // [rsp+270h] [rbp+1F0h] BYREF
  char v89; // [rsp+278h] [rbp+1F8h]
  char v90; // [rsp+279h] [rbp+1F9h]
  int v91; // [rsp+27Ah] [rbp+1FAh]
  __int16 v92; // [rsp+27Eh] [rbp+1FEh]
  __int64 v93; // [rsp+280h] [rbp+200h]
  __int64 v94; // [rsp+288h] [rbp+208h]
  __int64 v95; // [rsp+290h] [rbp+210h]
  __int64 v96; // [rsp+298h] [rbp+218h]
  __int128 v97; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v98; // [rsp+2B0h] [rbp+230h]
  __int128 v99; // [rsp+2C0h] [rbp+240h]
  __int128 v100; // [rsp+2D0h] [rbp+250h]
  __int128 v101; // [rsp+2E0h] [rbp+260h]
  __int128 v102; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v103; // [rsp+300h] [rbp+280h]
  _BYTE v104[56]; // [rsp+310h] [rbp+290h]
  __int128 v105; // [rsp+348h] [rbp+2C8h]
  __int128 v106; // [rsp+358h] [rbp+2D8h]
  __int128 v107; // [rsp+368h] [rbp+2E8h]
  __int128 v108; // [rsp+378h] [rbp+2F8h]
  __int64 v109; // [rsp+388h] [rbp+308h]
  __int64 v110; // [rsp+390h] [rbp+310h]
  char v111; // [rsp+39Fh] [rbp+31Fh] BYREF
  __int64 v112; // [rsp+3A0h] [rbp+320h]
  __int64 v113; // [rsp+3A8h] [rbp+328h]
  _QWORD *v114; // [rsp+3B0h] [rbp+330h]
  _BYTE *v115; // [rsp+3B8h] [rbp+338h]
  _BYTE *v116; // [rsp+3C0h] [rbp+340h]
  _QWORD *v117; // [rsp+3C8h] [rbp+348h]
  __int64 v118; // [rsp+3D0h] [rbp+350h]
  char v119; // [rsp+3DFh] [rbp+35Fh]
  __int64 v120; // [rsp+3E0h] [rbp+360h]

  v120 = -2;
  v5 = a2;
  v6 = a1;
  v7 = *(unsigned __int8 *)(a1 + 8720);
  v118 = a1;
  switch ( v7 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8721) = 257;
      *(_BYTE *)(a1 + 8723) = 1;
      v8 = a1 + 4552;
      sub_141684120(a1 + 4552, a1 + 392, 4160);
      switch ( *(_BYTE *)(v6 + 8704) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_87;
        case 2:
          goto LABEL_86;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v8 = a1 + 4552;
      switch ( *(_BYTE *)(a1 + 8704) )
      {
        case 0:
LABEL_4:
          v9 = v5;
          v78 = aSetAutoSwitch;
          v79 = 15;
          v80 = aApp_2;
          v81 = 3;
          v112 = v8;
          v82 = v8;
          v117 = (_QWORD *)(v6 + 5072);
          v83 = (unsigned __int64)(v6 + 5072);
          sub_1401C3650(&v67, &v78);
          v5 = *(unsigned int *)((char *)&v68 + 2) | ((unsigned __int64)HIWORD(v68) << 32);
          v10 = v68;
          LOBYTE(v4) = BYTE1(v68);
          v11 = v69;
          if ( v67 == (const char *)-1LL )
          {
            v113 = *(_QWORD *)v70;
            v14 = *((_QWORD *)&v69 + 1);
          }
          else
          {
            v108 = v76;
            v107 = v75;
            v106 = v74;
            v105 = v73;
            *(_OWORD *)&v104[40] = v72;
            *(_OWORD *)&v104[24] = v71;
            *(_OWORD *)&v104[8] = *(_OWORD *)&v70[8];
            *(_DWORD *)((char *)&v102 + 10) = *(_DWORD *)((char *)&v68 + 2);
            HIWORD(v102) = WORD2(v5);
            v103 = v69;
            *(_QWORD *)v104 = *(_QWORD *)v70;
            *(_QWORD *)&v102 = v67;
            WORD4(v102) = v68;
            *(_QWORD *)&v70[16] = 0;
            v67 = aSetAutoSwitch;
            v68 = 15;
            *(_QWORD *)&v69 = aEnabled_7;
            *((_QWORD *)&v69 + 1) = 7;
            *(_QWORD *)v70 = v112;
            *(_QWORD *)&v70[8] = v117;
            sub_1401BCE80(&v78, &v67);
            v10 = (char)v78;
            LOBYTE(v4) = BYTE1(v78);
            if ( (_BYTE)v78 == 0xFF )
            {
              v5 = v9;
              v6 = v118;
              v22 = v118 + 5096;
              sub_141684120(v118 + 5096, &v102, 152);
              *(_BYTE *)(v6 + 5400) = (_BYTE)v4;
              *(_BYTE *)(v6 + 5401) = 0;
              v17 = v6 + 6296;
              sub_141684120(v6 + 6296, v22, 1200);
              v115 = (_BYTE *)(v6 + 8696);
              *(_BYTE *)(v6 + 8696) = 0;
LABEL_18:
              v116 = (_BYTE *)(v6 + 7496);
              v113 = v17;
              sub_141684120(v6 + 7496, v17, 1200);
              switch ( *(_BYTE *)(v6 + 7801) )
              {
                case 0:
                  goto LABEL_19;
                case 1:
                  goto LABEL_91;
                case 2:
                  goto LABEL_90;
                case 3:
                  goto LABEL_31;
                case 4:
                  goto LABEL_44;
              }
            }
            v12 = *(unsigned int *)((char *)&v78 + 2);
            v13 = HIWORD(v78);
            v11 = v79;
            v14 = (__int64)v80;
            v113 = v81;
            sub_140014150(&v102);
            v5 = v12 | (v13 << 32);
          }
          sub_140BF0DE0(v112);
          if ( *v117 == -1 )
          {
            v21 = 1;
            goto LABEL_81;
          }
          v114 = (_QWORD *)(v118 + 5080);
          v18 = *(_QWORD *)(v118 + 5080);
          v115 = *(_BYTE **)(v118 + 5088);
          v116 = nullptr;
          v96 = v18;
          while ( v115 != v116 )
          {
            ++v116;
            v19 = v18 + 96;
            sub_1402C7520();
            v18 = v19;
          }
          v20 = *v117;
          v21 = 1;
          if ( !*v117 )
            goto LABEL_81;
          goto LABEL_80;
        case 1:
LABEL_87:
          v112 = v8;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_86:
          v112 = v8;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v112 = v8;
  v15 = v6 + 8696;
  v16 = *(unsigned __int8 *)(v6 + 8696);
  v17 = v6 + 6296;
  v115 = (_BYTE *)(v6 + 8696);
  switch ( v16 )
  {
    case 0LL:
      goto LABEL_18;
    case 1LL:
      v110 = v6 + 8696;
      v109 = v6 + 6296;
      sub_1416C3400(&off_1417B7B80, v15, a3, a4);
    case 2LL:
      v110 = v6 + 8696;
      v109 = v6 + 6296;
      sub_1416C3420(&off_1417B7B80, v15, a3, a4);
    case 3LL:
      v113 = v6 + 6296;
      v116 = (_BYTE *)(v6 + 7496);
      switch ( *(_BYTE *)(v6 + 7801) )
      {
        case 0:
LABEL_19:
          *(_BYTE *)(v6 + 7802) = 1;
          sub_141684120(v6 + 7648, v116, 152);
          v23 = *(_BYTE *)(v6 + 7800);
          sub_1401C50B0(&v102, v6 + 7648);
          v25 = v118;
          v26 = *(volatile signed __int64 **)(v118 + 7784);
          v27 = _InterlockedIncrement64(v26);
          if ( (v27 < 0) ^ v24 | (v27 == 0)
            || (v28 = *(volatile signed __int64 **)(v25 + 7792),
                v29 = _InterlockedIncrement64(v28),
                (v29 < 0) ^ v24 | (v29 == 0)) )
          {
            BUG();
          }
          sub_141684120(&v67, &v102, 136);
          *(_QWORD *)&v76 = v26;
          *((_QWORD *)&v76 + 1) = v28;
          v77 = v23;
          v30 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v119 = 1;
            v60 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v30 = v60;
          }
          if ( *((_DWORD *)v30 + 4) == 2 )
          {
            v31 = 704;
            if ( *(_BYTE *)v30 )
              v31 = 472;
            v32 = v30[1] + v31;
            v119 = 0;
            v33 = sub_14089A760(v32, v30, &v67, &off_1417642A8);
          }
          else
          {
            v34 = 704;
            if ( *((_BYTE *)v30 + 64) )
              v34 = 472;
            v35 = v30[9] + v34;
            v119 = 0;
            v33 = sub_14089A760(v35, v30 + 8, &v67, &off_141764290);
          }
          v6 = v118;
          *(_QWORD *)(v118 + 7808) = v33;
          goto LABEL_31;
        case 1:
LABEL_91:
          sub_1416C3400(&off_1417BB198, v15, a3, a4);
        case 2:
LABEL_90:
          sub_1416C3420(&off_1417BB198, v15, a3, a4);
        case 3:
LABEL_31:
          v117 = (_QWORD *)(v6 + 7808);
          sub_140B00260(&v67, v6 + 7808, v5);
          v4 = v67;
          if ( v67 == (const char *)-3LL )
          {
            v39 = 3;
LABEL_45:
            v48 = (_BYTE *)v118;
            *(_BYTE *)(v118 + 7801) = v39;
LABEL_59:
            v48[8696] = 3;
            v48[8704] = 3;
            v50 = 3;
            result = 1;
            goto LABEL_82;
          }
          if ( v67 == (const char *)-2LL )
          {
            v36 = v68;
            v37 = v69;
            v38 = 0x800000000000000CuLL;
            v114 = *((_QWORD **)&v69 + 1);
          }
          else
          {
            v38 = v68;
            v37 = *((_QWORD *)&v69 + 1);
            v36 = v69;
            v114 = *(_QWORD **)v70;
            v102 = *(_OWORD *)&v70[8];
            v103 = v71;
            *(_OWORD *)v104 = v72;
            *(_OWORD *)&v104[16] = v73;
            *(_OWORD *)&v104[32] = v74;
          }
          v97 = v102;
          v98 = v103;
          v99 = *(_OWORD *)v104;
          v100 = *(_OWORD *)&v104[16];
          v101 = *(_OWORD *)&v104[32];
          v40 = *v117;
          if ( (unsigned __int8)sub_1412F2A80(*v117) )
            sub_1412E7580(v40);
          if ( v4 == (const char *)-1LL )
          {
            v42 = v118;
            v41 = (_QWORD *)v36;
            goto LABEL_42;
          }
          if ( v4 == (const char *)-2LL )
          {
            v67 = (const char *)v38;
            v68 = v36;
            *(_QWORD *)&v69 = v37;
            *((_QWORD *)&v69 + 1) = v114;
            *(_OWORD *)v70 = v97;
            v66[0] = &v67;
            v66[1] = sub_141230630;
            sub_14149C0F0(&v102, &unk_1417B8CB0, v66);
            sub_140BF0F60(&v67);
            v41 = *((_QWORD **)&v102 + 1);
            v38 = v102;
            v37 = v103;
            v42 = v118;
LABEL_42:
            sub_140014150(v42 + 7648);
            *(_WORD *)(v118 + 7801) = 1;
            v43 = -1;
            goto LABEL_60;
          }
          v6 = v118;
          *(_QWORD *)(v118 + 7808) = v4;
          *(_QWORD *)(v6 + 7816) = v38;
          *(_QWORD *)(v6 + 7824) = v36;
          *(_QWORD *)(v6 + 7832) = v37;
          *(_QWORD *)(v6 + 7840) = v114;
          v44 = v98;
          v45 = v99;
          v46 = v100;
          *(_OWORD *)(v6 + 7848) = v97;
          *(_OWORD *)(v6 + 7864) = v44;
          *(_OWORD *)(v6 + 7880) = v45;
          *(_OWORD *)(v6 + 7896) = v46;
          *(_OWORD *)(v6 + 7912) = v101;
          *(_BYTE *)(v6 + 7802) = 0;
          sub_141684120(v6 + 7928, v6 + 7648, 152);
          *(_QWORD *)(v6 + 8080) = v117;
          *(_QWORD *)(v6 + 8088) = aRuntimeRefresh;
          *(_QWORD *)(v6 + 8096) = 47;
          *(_QWORD *)(v6 + 8104) = aAutoSwitchConf;
          *(_QWORD *)(v6 + 8112) = 35;
          *(_QWORD *)(v6 + 8120) = aMutation_0;
          *(_QWORD *)(v6 + 8128) = 8;
          *(_BYTE *)(v6 + 8688) = 0;
LABEL_44:
          v117 = (_QWORD *)(v6 + 7928);
          v47 = sub_140CE1E30(v6 + 7928, v5);
          v39 = 4;
          if ( v47 )
            goto LABEL_45;
          if ( *(_BYTE *)(v118 + 8688) == 3 )
          {
            if ( *(_BYTE *)(v118 + 8680) )
            {
              if ( *(_BYTE *)(v118 + 8680) != 3 )
                goto LABEL_58;
              if ( *(_BYTE *)(v118 + 8672) == 3 )
              {
                sub_140B03640(v118 + 8664);
              }
              else if ( !*(_BYTE *)(v118 + 8672) )
              {
                sub_140014150(v118 + 8512);
              }
              v49 = (_QWORD *)(v118 + 8344);
            }
            else
            {
              v49 = (_QWORD *)(v118 + 8176);
            }
          }
          else
          {
            v49 = v117;
            if ( *(_BYTE *)(v118 + 8688) )
              goto LABEL_58;
          }
          sub_140014150(v49);
LABEL_58:
          v48 = (_BYTE *)v118;
          v43 = *(_QWORD *)(v118 + 7808);
          v36 = *(_QWORD *)(v118 + 7840);
          v65 = *(_OWORD *)(v118 + 7912);
          v64 = *(_OWORD *)(v118 + 7896);
          v63 = *(_OWORD *)(v118 + 7880);
          v62 = *(_OWORD *)(v118 + 7864);
          v61 = *(_OWORD *)(v118 + 7848);
          v38 = *(_QWORD *)(v118 + 7816);
          v41 = *(_QWORD **)(v118 + 7824);
          v37 = *(_QWORD *)(v118 + 7832);
          *(_WORD *)(v118 + 7801) = 1;
          if ( v43 == -2 )
            goto LABEL_59;
LABEL_60:
          sub_140BEBD70(v116);
          if ( v43 == -1 )
          {
            if ( v37 < 0 )
            {
              v54 = 0;
              goto LABEL_66;
            }
            if ( v37 )
            {
              nullsub_1(v52);
              v54 = 1;
              v55 = sub_140001650(v37, 1);
              if ( !v55 )
              {
LABEL_66:
                v116 = (_BYTE *)v38;
                v117 = v41;
                sub_1416C2D4B(v54, v37);
              }
              v14 = v55;
              sub_141684120(v55, v41, v37);
            }
            else
            {
              v14 = 1;
            }
            if ( v38 )
              sub_140001660(v41, v38, 1);
            v21 = 1;
            v10 = 3;
            v113 = v37;
            v11 = v37;
            goto LABEL_75;
          }
          v87 = v65;
          v86 = v64;
          v85 = v63;
          v84 = v62;
          v83 = v61;
          v78 = (const char *)v43;
          v79 = v38;
          v80 = (const char *)v41;
          v81 = v37;
          v82 = v36;
          sub_140B092C0(&v67, &v78);
          v5 = *(unsigned int *)((char *)&v68 + 2) | ((unsigned __int64)HIWORD(v68) << 32);
          v10 = v68;
          LOBYTE(v4) = BYTE1(v68);
          v14 = *((_QWORD *)&v69 + 1);
          v11 = v69;
          if ( v67 == (const char *)-1LL )
          {
            v113 = *(_QWORD *)v70;
            v21 = 0;
          }
          else
          {
            *(_QWORD *)&v97 = 0;
            *((_QWORD *)&v97 + 1) = 1;
            *(_QWORD *)&v98 = 0;
            *(_QWORD *)&v103 = 1610612768;
            *(_QWORD *)&v102 = &v97;
            *((_QWORD *)&v102 + 1) = &off_1417C41C0;
            if ( (unsigned __int8)sub_141230630(&v67, &v102, *(_QWORD *)v70) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v111,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v14 = *((_QWORD *)&v97 + 1);
            v11 = v97;
            v53 = v98;
            sub_140BF0F60(&v67);
            v113 = v53;
            v21 = 1;
            v10 = 3;
          }
LABEL_75:
          *v115 = 1;
          sub_140BF0DE0(v112);
          if ( *(_QWORD *)(v118 + 5072) != -1 )
          {
            v114 = (_QWORD *)(v118 + 5080);
            v56 = *(_QWORD **)(v118 + 5080);
            v115 = *(_BYTE **)(v118 + 5088);
            v116 = nullptr;
            v117 = v56;
            while ( v115 != v116 )
            {
              ++v116;
              v57 = v56 + 12;
              sub_1402C7520();
              v56 = v57;
            }
            v20 = *(_QWORD *)(v118 + 5072);
            if ( v20 )
LABEL_80:
              sub_140001660(*v114, 96 * v20, 8);
          }
LABEL_81:
          *(_BYTE *)(v118 + 8704) = 1;
          sub_140BDF5B0(v112);
          v91 = v5;
          v92 = WORD2(v5);
          v93 = v11;
          v94 = v14;
          v95 = v113;
          v89 = v10;
          v90 = (char)v4;
          v88 = v21;
          v58 = v118;
          *(_BYTE *)(v118 + 8723) = 0;
          sub_141684120(&v67, v58, 360);
          *(_BYTE *)(v58 + 8722) = 0;
          v59 = *(_QWORD *)(v58 + 384);
          *(_BYTE *)(v58 + 8721) = 0;
          *(_QWORD *)&v103 = *(_QWORD *)(v58 + 376);
          v102 = *(_OWORD *)(v58 + 360);
          sub_14047E370(
            (unsigned int)&v67,
            v59,
            (unsigned int)&v88,
            (unsigned int)&v102,
            *(_DWORD *)(v58 + 8712),
            *(_DWORD *)(v58 + 8716));
          v50 = 1;
          result = 0;
          v48 = (_BYTE *)v118;
LABEL_82:
          v48[8720] = v50;
          return result;
        case 4:
          goto LABEL_44;
      }
  }
}