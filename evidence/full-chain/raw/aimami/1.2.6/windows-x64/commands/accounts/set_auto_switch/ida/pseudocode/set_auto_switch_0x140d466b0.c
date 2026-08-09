// Pseudocode for set_auto_switch (EA: 0x140d466b0, size: 0xdef)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:开关auto-switch(enabled),提交后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATE)。副作用:写配置(mutation)。归属:锚src\commands\system.rs。
// Tauri命令handler:开关auto-switch(enabled),提交后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITCH_UPDATE)。副作用:写配置(mutation)。归属:锚src\commands\system.rs。
char __fastcall set_auto_switch(__int64 a1, unsigned __int64 a2)
{
  const char *v2; // r15
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  char v8; // r14
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int8 v18; // di
  __int64 v19; // rsi
  char v20; // bl
  char v21; // of
  volatile signed __int64 *v22; // rsi
  __int64 v23; // rt0
  volatile signed __int64 *v24; // rdi
  __int64 v25; // rt0
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rsi
  unsigned __int64 v34; // r12
  char v35; // cl
  __int64 v36; // r14
  _QWORD *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rdi
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  char v43; // al
  _BYTE *v44; // rdx
  _QWORD *v45; // rcx
  char v46; // cl
  char result; // al
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rax
  _QWORD *v55; // rcx
  _QWORD *v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rdx
  _QWORD *v59; // rsi
  __int64 v60; // [rsp+20h] [rbp-60h]
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
  v4 = a1;
  v5 = *(unsigned __int8 *)(a1 + 8720);
  v118 = a1;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8721) = 257;
      *(_BYTE *)(a1 + 8723) = 1;
      v6 = a1 + 4552;
      sub_14172B820(a1 + 4552, a1 + 392, 4160);
      switch ( *(_BYTE *)(v4 + 8704) )
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
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v6 = a1 + 4552;
      switch ( *(_BYTE *)(a1 + 8704) )
      {
        case 0:
LABEL_4:
          v7 = a2;
          v78 = aSetAutoSwitch;
          v79 = 15;
          v80 = aApp_4;
          v81 = 3;
          v112 = v6;
          v82 = v6;
          v117 = (_QWORD *)(v4 + 5072);
          v83 = (unsigned __int64)(v4 + 5072);
          sub_1401A9630((__int64)&v67, (__int64)&v78);
          a2 = *(unsigned int *)((char *)&v68 + 2) | ((unsigned __int64)HIWORD(v68) << 32);
          v8 = v68;
          LOBYTE(v2) = BYTE1(v68);
          v9 = v69;
          if ( v67 == (const char *)-1LL )
          {
            v113 = *(_QWORD *)v70;
            v12 = *((_QWORD *)&v69 + 1);
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
            HIWORD(v102) = WORD2(a2);
            v103 = v69;
            *(_QWORD *)v104 = *(_QWORD *)v70;
            *(_QWORD *)&v102 = v67;
            WORD4(v102) = v68;
            *(_QWORD *)&v70[16] = 0;
            v67 = aSetAutoSwitch;
            v68 = 15;
            *(_QWORD *)&v69 = aEnabled_9;
            *((_QWORD *)&v69 + 1) = 7;
            *(_QWORD *)v70 = v112;
            *(_QWORD *)&v70[8] = v117;
            sub_1409562A0(&v78, &v67);
            v8 = (char)v78;
            LOBYTE(v2) = BYTE1(v78);
            if ( (_BYTE)v78 == 0xFF )
            {
              a2 = v7;
              v4 = v118;
              v19 = v118 + 5096;
              sub_14172B820(v118 + 5096, &v102, 152);
              *(_BYTE *)(v4 + 5400) = (_BYTE)v2;
              *(_BYTE *)(v4 + 5401) = 0;
              v14 = v4 + 6296;
              sub_14172B820(v4 + 6296, v19, 1200);
              v115 = (_BYTE *)(v4 + 8696);
              *(_BYTE *)(v4 + 8696) = 0;
LABEL_18:
              v116 = (_BYTE *)(v4 + 7496);
              v113 = v14;
              sub_14172B820(v4 + 7496, v14, 1200);
              switch ( *(_BYTE *)(v4 + 7801) )
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
            v10 = *(unsigned int *)((char *)&v78 + 2);
            v11 = HIWORD(v78);
            v9 = v79;
            v12 = (__int64)v80;
            v113 = v81;
            sub_140203A20(&v102);
            a2 = v10 | (v11 << 32);
          }
          sub_140CAB140(v112);
          if ( *v117 == -1 )
          {
            v18 = 1;
            goto LABEL_81;
          }
          v114 = (_QWORD *)(v118 + 5080);
          v15 = *(_QWORD *)(v118 + 5080);
          v115 = *(_BYTE **)(v118 + 5088);
          v116 = nullptr;
          v96 = v15;
          while ( v115 != v116 )
          {
            ++v116;
            v16 = v15 + 96;
            sub_140401FB0();
            v15 = v16;
          }
          v17 = *v117;
          v18 = 1;
          if ( !*v117 )
            goto LABEL_81;
          goto LABEL_80;
        case 1:
LABEL_87:
          v112 = v6;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_86:
          v112 = v6;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v112 = v6;
  v13 = *(unsigned __int8 *)(v4 + 8696);
  v14 = v4 + 6296;
  v115 = (_BYTE *)(v4 + 8696);
  switch ( v13 )
  {
    case 0LL:
      goto LABEL_18;
    case 1LL:
      v110 = v4 + 8696;
      v109 = v4 + 6296;
      sub_14176EC00(&off_1418851A0);
    case 2LL:
      v110 = v4 + 8696;
      v109 = v4 + 6296;
      sub_14176EC20(&off_1418851A0);
    case 3LL:
      v113 = v4 + 6296;
      v116 = (_BYTE *)(v4 + 7496);
      switch ( *(_BYTE *)(v4 + 7801) )
      {
        case 0:
LABEL_19:
          *(_BYTE *)(v4 + 7802) = 1;
          sub_14172B820(v4 + 7648, v116, 152);
          v20 = *(_BYTE *)(v4 + 7800);
          sub_1401A9D00(&v102, v4 + 7648);
          v22 = *(volatile signed __int64 **)(v4 + 7784);
          v23 = _InterlockedIncrement64(v22);
          if ( (v23 < 0) ^ v21 | (v23 == 0)
            || (v24 = *(volatile signed __int64 **)(v4 + 7792),
                v25 = _InterlockedIncrement64(v24),
                (v25 < 0) ^ v21 | (v25 == 0)) )
          {
            BUG();
          }
          sub_14172B820(&v67, &v102, 136);
          *(_QWORD *)&v76 = v22;
          *((_QWORD *)&v76 + 1) = v24;
          v77 = v20;
          v26 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v119 = 1;
            v59 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v26 = v59;
          }
          if ( *((_DWORD *)v26 + 4) == 2 )
          {
            v27 = 704;
            if ( *(_BYTE *)v26 )
              v27 = 472;
            v28 = v26[1] + v27;
            v119 = 0;
            v29 = sub_14085A9E0(v28, v26, &v67, &off_1417EBF48);
          }
          else
          {
            v30 = 704;
            if ( *((_BYTE *)v26 + 64) )
              v30 = 472;
            v31 = v26[9] + v30;
            v119 = 0;
            v29 = sub_14085A9E0(v31, v26 + 8, &v67, &off_1417EBF30);
          }
          v4 = v118;
          *(_QWORD *)(v118 + 7808) = v29;
          goto LABEL_31;
        case 1:
LABEL_91:
          sub_14176EC00(&off_141888820);
        case 2:
LABEL_90:
          sub_14176EC20(&off_141888820);
        case 3:
LABEL_31:
          v117 = (_QWORD *)(v4 + 7808);
          sub_140502620(&v67, v4 + 7808, a2);
          v2 = v67;
          if ( v67 == (const char *)-3LL )
          {
            v35 = 3;
LABEL_45:
            v44 = (_BYTE *)v118;
            *(_BYTE *)(v118 + 7801) = v35;
LABEL_59:
            v44[8696] = 3;
            v44[8704] = 3;
            v46 = 3;
            result = 1;
            goto LABEL_82;
          }
          if ( v67 == (const char *)-2LL )
          {
            v32 = v68;
            v33 = v69;
            v34 = 0x800000000000000CuLL;
            v114 = *((_QWORD **)&v69 + 1);
          }
          else
          {
            v34 = v68;
            v33 = *((_QWORD *)&v69 + 1);
            v32 = v69;
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
          v36 = *v117;
          if ( (unsigned __int8)sub_141398090(*v117) )
            sub_14139A2E0(v36);
          if ( v2 == (const char *)-1LL )
          {
            v38 = v118;
            v37 = (_QWORD *)v32;
            goto LABEL_42;
          }
          if ( v2 == (const char *)-2LL )
          {
            v67 = (const char *)v34;
            v68 = v32;
            *(_QWORD *)&v69 = v33;
            *((_QWORD *)&v69 + 1) = v114;
            *(_OWORD *)v70 = v97;
            v66[0] = &v67;
            v66[1] = sub_1412DDF00;
            sub_141543AF0(&v102, &unk_1418862D0, v66);
            sub_140CAB2C0(&v67);
            v37 = *((_QWORD **)&v102 + 1);
            v34 = v102;
            v33 = v103;
            v38 = v118;
LABEL_42:
            sub_140203A20(v38 + 7648);
            *(_WORD *)(v118 + 7801) = 1;
            v39 = -1;
            goto LABEL_60;
          }
          v4 = v118;
          *(_QWORD *)(v118 + 7808) = v2;
          *(_QWORD *)(v4 + 7816) = v34;
          *(_QWORD *)(v4 + 7824) = v32;
          *(_QWORD *)(v4 + 7832) = v33;
          *(_QWORD *)(v4 + 7840) = v114;
          v40 = v98;
          v41 = v99;
          v42 = v100;
          *(_OWORD *)(v4 + 7848) = v97;
          *(_OWORD *)(v4 + 7864) = v40;
          *(_OWORD *)(v4 + 7880) = v41;
          *(_OWORD *)(v4 + 7896) = v42;
          *(_OWORD *)(v4 + 7912) = v101;
          *(_BYTE *)(v4 + 7802) = 0;
          sub_14172B820(v4 + 7928, v4 + 7648, 152);
          *(_QWORD *)(v4 + 8080) = v117;
          *(_QWORD *)(v4 + 8088) = aRuntimeRefresh;
          *(_QWORD *)(v4 + 8096) = 47;
          *(_QWORD *)(v4 + 8104) = aAutoSwitchConf;
          *(_QWORD *)(v4 + 8112) = 35;
          *(_QWORD *)(v4 + 8120) = aMutation_0;
          *(_QWORD *)(v4 + 8128) = 8;
          *(_BYTE *)(v4 + 8688) = 0;
LABEL_44:
          v117 = (_QWORD *)(v4 + 7928);
          v43 = sub_140D9FA30(v4 + 7928, a2);
          v35 = 4;
          if ( v43 )
            goto LABEL_45;
          if ( *(_BYTE *)(v118 + 8688) == 3 )
          {
            if ( *(_BYTE *)(v118 + 8680) )
            {
              if ( *(_BYTE *)(v118 + 8680) != 3 )
                goto LABEL_58;
              if ( *(_BYTE *)(v118 + 8672) == 3 )
              {
                sub_140505F80(v118 + 8664);
              }
              else if ( !*(_BYTE *)(v118 + 8672) )
              {
                sub_140203A20(v118 + 8512);
              }
              v45 = (_QWORD *)(v118 + 8344);
            }
            else
            {
              v45 = (_QWORD *)(v118 + 8176);
            }
          }
          else
          {
            v45 = v117;
            if ( *(_BYTE *)(v118 + 8688) )
              goto LABEL_58;
          }
          sub_140203A20(v45);
LABEL_58:
          v44 = (_BYTE *)v118;
          v39 = *(_QWORD *)(v118 + 7808);
          v32 = *(_QWORD *)(v118 + 7840);
          v65 = *(_OWORD *)(v118 + 7912);
          v64 = *(_OWORD *)(v118 + 7896);
          v63 = *(_OWORD *)(v118 + 7880);
          v62 = *(_OWORD *)(v118 + 7864);
          v61 = *(_OWORD *)(v118 + 7848);
          v34 = *(_QWORD *)(v118 + 7816);
          v37 = *(_QWORD **)(v118 + 7824);
          v33 = *(_QWORD *)(v118 + 7832);
          *(_WORD *)(v118 + 7801) = 1;
          if ( v39 == -2 )
            goto LABEL_59;
LABEL_60:
          sub_140CA60E0(v116);
          if ( v39 == -1 )
          {
            if ( v33 < 0 )
            {
              v53 = 0;
              goto LABEL_66;
            }
            if ( v33 )
            {
              nullsub_1(v49, v48, v50, v51, v60);
              v53 = 1;
              v54 = sub_140001650(v33, 1);
              if ( !v54 )
              {
LABEL_66:
                v116 = (_BYTE *)v34;
                v117 = v37;
                sub_14176E54B(v53, v33);
              }
              v12 = v54;
              sub_14172B820(v54, v37, v33);
            }
            else
            {
              v12 = 1;
            }
            if ( v34 )
              sub_140001660(v37, v34, 1);
            v18 = 1;
            v8 = 3;
            v113 = v33;
            v9 = v33;
            goto LABEL_75;
          }
          v87 = v65;
          v86 = v64;
          v85 = v63;
          v84 = v62;
          v83 = v61;
          v78 = (const char *)v39;
          v79 = v34;
          v80 = (const char *)v37;
          v81 = v33;
          v82 = v32;
          sub_14050C140(&v67, &v78);
          a2 = *(unsigned int *)((char *)&v68 + 2) | ((unsigned __int64)HIWORD(v68) << 32);
          v8 = v68;
          LOBYTE(v2) = BYTE1(v68);
          v12 = *((_QWORD *)&v69 + 1);
          v9 = v69;
          if ( v67 == (const char *)-1LL )
          {
            v113 = *(_QWORD *)v70;
            v18 = 0;
          }
          else
          {
            *(_QWORD *)&v97 = 0;
            *((_QWORD *)&v97 + 1) = 1;
            *(_QWORD *)&v98 = 0;
            *(_QWORD *)&v103 = 1610612768;
            *(_QWORD *)&v102 = &v97;
            *((_QWORD *)&v102 + 1) = &off_141891B48;
            if ( (unsigned __int8)sub_1412DDF00(&v67, &v102) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v111,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v12 = *((_QWORD *)&v97 + 1);
            v9 = v97;
            v52 = v98;
            sub_140CAB2C0(&v67);
            v113 = v52;
            v18 = 1;
            v8 = 3;
          }
LABEL_75:
          *v115 = 1;
          sub_140CAB140(v112);
          if ( *(_QWORD *)(v118 + 5072) != -1 )
          {
            v114 = (_QWORD *)(v118 + 5080);
            v55 = *(_QWORD **)(v118 + 5080);
            v115 = *(_BYTE **)(v118 + 5088);
            v116 = nullptr;
            v117 = v55;
            while ( v115 != v116 )
            {
              ++v116;
              v56 = v55 + 12;
              sub_140401FB0();
              v55 = v56;
            }
            v17 = *(_QWORD *)(v118 + 5072);
            if ( v17 )
LABEL_80:
              sub_140001660(*v114, 96 * v17, 8);
          }
LABEL_81:
          *(_BYTE *)(v118 + 8704) = 1;
          sub_140C991F0(v112);
          v91 = a2;
          v92 = WORD2(a2);
          v93 = v9;
          v94 = v12;
          v95 = v113;
          v89 = v8;
          v90 = (char)v2;
          v88 = v18;
          v57 = v118;
          *(_BYTE *)(v118 + 8723) = 0;
          sub_14172B820(&v67, v57, 360);
          *(_BYTE *)(v57 + 8722) = 0;
          v58 = *(_QWORD *)(v57 + 384);
          *(_BYTE *)(v57 + 8721) = 0;
          *(_QWORD *)&v103 = *(_QWORD *)(v57 + 376);
          v102 = *(_OWORD *)(v57 + 360);
          sub_140AFFC30((__int64)&v67, v58, (__int64)&v88, &v102, *(_DWORD *)(v57 + 8712), *(_DWORD *)(v57 + 8716));
          v46 = 1;
          result = 0;
          v44 = (_BYTE *)v118;
LABEL_82:
          v44[8720] = v46;
          return result;
        case 4:
          goto LABEL_44;
      }
  }
}
