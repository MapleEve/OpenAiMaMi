// module: codexmate_lib
// addr: 0x140ca88a0
// name: export_accounts_to_file
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = export_accounts_to_file | mapped via command-name string xref (win-native, ground-truth)
char __fastcall export_accounts_to_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  __int8 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // r13d
  unsigned int v15; // edi
  __int64 v16; // r12
  _BYTE *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rbx
  char v23; // of
  __int64 v24; // r15
  volatile signed __int64 *v25; // rsi
  __int64 v26; // rt0
  volatile signed __int64 *v27; // r14
  __int64 v28; // rt0
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rbx
  unsigned __int64 v37; // r15
  _BYTE *v38; // rdx
  char v39; // cl
  char result; // al
  __int64 v41; // r12
  __int64 v42; // r13
  __int64 v43; // rdi
  __int64 v44; // r13
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int8 v48; // di
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rcx
  __int64 v56; // rax
  __int128 v57; // xmm6
  __int64 v58; // r14
  __int64 v59; // rsi
  __int64 v60; // r15
  __int64 *v61; // rcx
  __int64 *v62; // r13
  __int64 v63; // rdi
  __int64 v64; // rdx
  _QWORD *v65; // rsi
  __int128 v66; // [rsp+50h] [rbp-30h]
  __int128 v67; // [rsp+60h] [rbp-20h]
  __int128 v68; // [rsp+70h] [rbp-10h]
  __int128 v69; // [rsp+80h] [rbp+0h]
  __int64 v70; // [rsp+90h] [rbp+10h]
  __int128 v71; // [rsp+C0h] [rbp+40h]
  __int128 v72; // [rsp+D0h] [rbp+50h]
  __int128 v73; // [rsp+E0h] [rbp+60h]
  __int128 v74; // [rsp+F0h] [rbp+70h]
  __int64 v75; // [rsp+100h] [rbp+80h]
  _QWORD v76[2]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v77; // [rsp+120h] [rbp+A0h]
  __int64 v78; // [rsp+130h] [rbp+B0h]
  __m256i v79; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v80; // [rsp+160h] [rbp+E0h]
  __int128 v81; // [rsp+170h] [rbp+F0h]
  __int128 v82; // [rsp+180h] [rbp+100h]
  __int128 v83; // [rsp+190h] [rbp+110h]
  __int64 v84; // [rsp+1A0h] [rbp+120h]
  __int64 v85; // [rsp+1A8h] [rbp+128h] BYREF
  __int8 v86; // [rsp+1B0h] [rbp+130h]
  int v87; // [rsp+1B1h] [rbp+131h]
  __int16 v88; // [rsp+1B5h] [rbp+135h]
  char v89; // [rsp+1B7h] [rbp+137h]
  __int64 v90; // [rsp+1B8h] [rbp+138h]
  __int64 v91; // [rsp+1C0h] [rbp+140h]
  __int64 v92; // [rsp+1C8h] [rbp+148h]
  __int128 v93; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v94; // [rsp+1E0h] [rbp+160h]
  __int64 v95; // [rsp+1E8h] [rbp+168h]
  _QWORD *v96; // [rsp+1F0h] [rbp+170h]
  __m256i v97; // [rsp+1F8h] [rbp+178h]
  __int128 v98; // [rsp+218h] [rbp+198h]
  __int128 v99; // [rsp+228h] [rbp+1A8h]
  __int128 v100; // [rsp+238h] [rbp+1B8h]
  __int128 v101; // [rsp+248h] [rbp+1C8h]
  __int128 v102; // [rsp+258h] [rbp+1D8h]
  const char *v103; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v104; // [rsp+278h] [rbp+1F8h]
  const char *v105; // [rsp+280h] [rbp+200h]
  __int64 v106; // [rsp+288h] [rbp+208h]
  _BYTE v107[40]; // [rsp+290h] [rbp+210h]
  __int128 v108; // [rsp+2B8h] [rbp+238h]
  __int128 v109; // [rsp+2C8h] [rbp+248h]
  __int128 v110; // [rsp+2D8h] [rbp+258h]
  __int128 v111; // [rsp+2E8h] [rbp+268h]
  __int128 v112; // [rsp+2F8h] [rbp+278h]
  __int64 v113; // [rsp+308h] [rbp+288h]
  __int64 v114; // [rsp+310h] [rbp+290h]
  __int64 v115; // [rsp+318h] [rbp+298h]
  __int128 v116; // [rsp+320h] [rbp+2A0h]
  __int64 v117; // [rsp+330h] [rbp+2B0h]
  __int64 v118; // [rsp+3D8h] [rbp+358h]
  __m256i v119; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v120; // [rsp+400h] [rbp+380h]
  __int128 v121; // [rsp+410h] [rbp+390h]
  __int128 v122; // [rsp+420h] [rbp+3A0h]
  __int128 v123; // [rsp+430h] [rbp+3B0h]
  __int64 v124; // [rsp+440h] [rbp+3C0h]
  __int64 v125; // [rsp+468h] [rbp+3E8h]
  __int64 v126; // [rsp+470h] [rbp+3F0h]
  char v127; // [rsp+47Fh] [rbp+3FFh] BYREF
  __int64 v128; // [rsp+480h] [rbp+400h]
  _QWORD *v129; // [rsp+488h] [rbp+408h]
  __int64 v130; // [rsp+490h] [rbp+410h]
  __int64 v131; // [rsp+498h] [rbp+418h]
  __int64 v132; // [rsp+4A0h] [rbp+420h]
  __int64 *v133; // [rsp+4A8h] [rbp+428h]
  __int64 v134; // [rsp+4B0h] [rbp+430h]
  __int64 v135; // [rsp+4B8h] [rbp+438h]
  _BYTE *v136; // [rsp+4C0h] [rbp+440h]
  __int64 v137; // [rsp+4C8h] [rbp+448h]
  char v138; // [rsp+4D7h] [rbp+457h]
  __int64 v139; // [rsp+4D8h] [rbp+458h]
  __m256i v140; // 0:^30.32
  __m256i v141; // 0:^A0.32

  v139 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 3728);
  v137 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 3729) = 257;
      *(_BYTE *)(a1 + 3731) = 1;
      v7 = a1 + 2056;
      sub_141684120(a1 + 2056, a1 + 392, 1664);
      switch ( *(_BYTE *)(v5 + 3712) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_74;
        case 2:
          goto LABEL_73;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 2056;
      switch ( *(_BYTE *)(a1 + 3712) )
      {
        case 0:
LABEL_4:
          *(_QWORD *)&v121 = 0;
          v119.m256i_i64[0] = (__int64)aExportAccounts;
          v119.m256i_i64[1] = 23;
          v119.m256i_i64[2] = (__int64)aApp_2;
          v119.m256i_i64[3] = 3;
          v134 = v7;
          *(_QWORD *)&v120 = v7;
          v133 = (__int64 *)(v5 + 2576);
          *((_QWORD *)&v120 + 1) = v5 + 2576;
          sub_1401C3650(&v103, &v119);
          v8 = (unsigned __int64)((HIBYTE(v104) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v104 + 5)) << 32;
          v9 = v8 | *(unsigned int *)((char *)&v104 + 1);
          v10 = v104;
          v11 = (__int64)v105;
          v12 = v106;
          v13 = *(_QWORD *)v107;
          if ( v103 != (const char *)-1LL )
          {
            v102 = v112;
            v101 = v111;
            v100 = v110;
            v99 = v109;
            v98 = v108;
            v97 = *(__m256i *)&v107[8];
            *(_DWORD *)((char *)&v93 + 9) = *(_DWORD *)((char *)&v104 + 1);
            HIBYTE(v93) = (v8 | *(unsigned int *)((char *)&v104 + 1)) >> 48;
            *(_WORD *)((char *)&v93 + 13) = WORD2(v9);
            v94 = (__int64)v105;
            v95 = v106;
            v96 = *(_QWORD **)v107;
            *(_QWORD *)&v93 = v103;
            BYTE8(v93) = v104;
            *(_QWORD *)&v107[16] = 0;
            v103 = aExportAccounts;
            v104 = 23;
            v105 = aTargetpath_1;
            v106 = 10;
            *(_QWORD *)v107 = v134;
            *(_QWORD *)&v107[8] = v133;
            sub_1409757B0(&v119, &v103);
            v10 = v119.m256i_i8[0];
            if ( v119.m256i_i8[0] == -1 )
            {
              v136 = (_BYTE *)v119.m256i_i64[1];
              v50 = v119.m256i_i64[3];
              v135 = v119.m256i_i64[2];
              *(_QWORD *)&v107[16] = 0;
              v103 = aExportAccounts;
              v104 = 23;
              v105 = aAccountkeys;
              v106 = 11;
              *(_QWORD *)v107 = v134;
              *(_QWORD *)&v107[8] = v133;
              sub_140972400(&v119, &v103);
              v10 = v119.m256i_i8[0];
              if ( v119.m256i_i8[0] == -1 )
              {
                v57 = *(_OWORD *)&v119.m256i_u64[1];
                v58 = v119.m256i_i64[3];
                v5 = v137;
                v59 = v137 + 2600;
                sub_141684120(v137 + 2600, &v93, 152);
                *(_QWORD *)(v5 + 2752) = v136;
                *(_QWORD *)(v5 + 2760) = v135;
                *(_QWORD *)(v5 + 2768) = v50;
                *(_OWORD *)(v5 + 2776) = v57;
                *(_QWORD *)(v5 + 2792) = v58;
                *(_BYTE *)(v5 + 2960) = 0;
                sub_141684120(v5 + 2968, v59, 368);
                v18 = v5 + 2968;
                v17 = (_BYTE *)(v5 + 3704);
                *(_BYTE *)(v5 + 3704) = 0;
                v7 = v134;
LABEL_8:
                v134 = v7;
                v19 = v5 + 3336;
                v118 = v18;
                sub_141684120(v5 + 3336, v18, 368);
                switch ( *(_BYTE *)(v5 + 3696) )
                {
                  case 0:
                    goto LABEL_10;
                  case 1:
                    goto LABEL_76;
                  case 2:
                    goto LABEL_75;
                  case 3:
                    goto LABEL_18;
                }
              }
              v14 = v119.m256i_u8[7];
              v15 = *(unsigned __int16 *)((char *)&v119.m256i_u16[2] + 1);
              v16 = *(unsigned int *)((char *)v119.m256i_u32 + 1);
              v11 = v119.m256i_i64[1];
              v13 = v119.m256i_i64[3];
              v12 = v119.m256i_i64[2];
              if ( v136 )
                sub_140001660(v135, v136, 1);
              sub_140014150(&v93);
            }
            else
            {
              v14 = v119.m256i_u8[7];
              v15 = *(unsigned __int16 *)((char *)&v119.m256i_u16[2] + 1);
              v16 = *(unsigned int *)((char *)v119.m256i_u32 + 1);
              v11 = v119.m256i_i64[1];
              v13 = v119.m256i_i64[3];
              v12 = v119.m256i_i64[2];
              sub_140014150(&v93);
            }
            v9 = ((unsigned __int64)((v14 << 16) | v15) << 32) | v16;
          }
          sub_140BF0DE0(v134);
          if ( *v133 == -1 )
          {
            v48 = 1;
            v54 = v137;
            goto LABEL_68;
          }
          v129 = (_QWORD *)(v137 + 2584);
          v51 = *(_QWORD *)(v137 + 2584);
          v135 = *(_QWORD *)(v137 + 2592);
          v136 = nullptr;
          v132 = v51;
          while ( (_BYTE *)v135 != v136 )
          {
            ++v136;
            v52 = v51 + 96;
            sub_1402C7520();
            v51 = v52;
          }
          v53 = *v133;
          v48 = 1;
          v54 = v137;
          if ( !*v133 )
            goto LABEL_68;
          goto LABEL_67;
        case 1:
LABEL_74:
          v134 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_73:
          v134 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v17 = (_BYTE *)(v5 + 3704);
  v18 = v5 + 2968;
  switch ( *(_BYTE *)(v5 + 3704) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v134 = v7;
      v126 = v5 + 3704;
      v125 = v5 + 2968;
      sub_1416C3400(&off_1417B7B80, v18, a3, a4);
    case 2:
      v134 = v7;
      v126 = v5 + 3704;
      v125 = v5 + 2968;
      sub_1416C3420(&off_1417B7B80, v18, a3, a4);
    case 3:
      v118 = v5 + 2968;
      v134 = v7;
      v19 = v5 + 3336;
      switch ( *(_BYTE *)(v5 + 3696) )
      {
        case 0:
LABEL_10:
          v136 = v17;
          v135 = v19;
          sub_141684120(v5 + 3536, v19, 152);
          *(_BYTE *)(v5 + 3698) = 1;
          v20 = *(_QWORD *)(v5 + 3488);
          v21 = *(_QWORD *)(v5 + 3496);
          v22 = *(_QWORD *)(v5 + 3504);
          *(_BYTE *)(v5 + 3697) = 1;
          v78 = *(_QWORD *)(v5 + 3528);
          v77 = *(_OWORD *)(v5 + 3512);
          v131 = v20;
          v130 = v21;
          sub_1401C50B0(&v119, v5 + 3536);
          v24 = v137;
          v25 = *(volatile signed __int64 **)(v137 + 3672);
          v26 = _InterlockedIncrement64(v25);
          if ( (v26 < 0) ^ v23 | (v26 == 0)
            || (v27 = *(volatile signed __int64 **)(v24 + 3680),
                v28 = _InterlockedIncrement64(v27),
                (v28 < 0) ^ v23 | (v28 == 0)) )
          {
            BUG();
          }
          sub_141684120(&v103, &v119, 136);
          *(_WORD *)(v24 + 3697) = 0;
          *(_QWORD *)&v112 = v25;
          *((_QWORD *)&v112 + 1) = v27;
          v128 = v20;
          v113 = v20;
          v132 = v21;
          v114 = v21;
          v115 = v22;
          v116 = v77;
          v117 = v78;
          v29 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v138 = 1;
            v65 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v29 = v65;
          }
          if ( *((_DWORD *)v29 + 4) == 2 )
          {
            v30 = 704;
            if ( *(_BYTE *)v29 )
              v30 = 472;
            v31 = v29[1] + v30;
            v138 = 0;
            v32 = sub_140896B50(v31, v29, &v103, &off_1417642A8);
          }
          else
          {
            v33 = 704;
            if ( *((_BYTE *)v29 + 64) )
              v33 = 472;
            v34 = v29[9] + v33;
            v138 = 0;
            v32 = sub_140896B50(v34, v29 + 8, &v103, &off_141764290);
          }
          v5 = v137;
          *(_QWORD *)(v137 + 3688) = v32;
          break;
        case 1:
LABEL_76:
          v135 = v19;
          JUMPOUT(0x140CA9864LL);
        case 2:
LABEL_75:
          v135 = v19;
          v136 = v17;
          sub_1416C3420(&off_1417BAB18, v18, a3, a4);
        case 3:
LABEL_18:
          v135 = v19;
          v136 = v17;
          break;
      }
      v133 = (__int64 *)(v5 + 3688);
      sub_140AFFCF0(&v103, v5 + 3688, a2);
      v35 = (__int64)v103;
      if ( v103 == (const char *)-3LL )
      {
        v38 = (_BYTE *)v137;
        *(_BYTE *)(v137 + 3696) = 3;
        v38[3704] = 3;
        v38[3712] = 3;
        v39 = 3;
        result = 1;
        goto LABEL_69;
      }
      if ( v103 == (const char *)-2LL )
      {
        v36 = v104;
        v13 = (__int64)v105;
        v37 = 0x800000000000000CuLL;
        v129 = (_QWORD *)v106;
      }
      else
      {
        v37 = v104;
        v36 = (__int64)v105;
        v13 = v106;
        v129 = *(_QWORD **)v107;
        v119 = *(__m256i *)&v107[8];
        v120 = v108;
        v121 = v109;
        v122 = v110;
        v123 = v111;
        v124 = v112;
      }
      v41 = v132;
      v42 = v128;
      v141 = v119;
      v71 = v120;
      v72 = v121;
      v73 = v122;
      v74 = v123;
      v75 = v124;
      v43 = *v133;
      v131 = v128;
      v130 = v132;
      if ( (unsigned __int8)sub_1412F2A80(v43) )
      {
        v131 = v42;
        v130 = v41;
        sub_1412E7580(v43);
      }
      if ( v35 == -2 )
      {
        v103 = (const char *)v37;
        v104 = v36;
        v105 = (const char *)v13;
        v106 = (__int64)v129;
        *(_OWORD *)v107 = *(_OWORD *)v141.m256i_i8;
        v76[0] = &v103;
        v76[1] = sub_141230630;
        sub_14149C0F0(&v119, &unk_1417B8CB0, v76);
        v131 = v128;
        v130 = v132;
        sub_140BF0F60(&v103);
        v44 = v119.m256i_i64[1];
        v9 = v119.m256i_i64[0];
        v13 = v119.m256i_i64[2];
        v45 = v137;
        *(_BYTE *)(v137 + 3697) = 0;
        *(_BYTE *)(v45 + 3698) = 0;
        sub_140014150(v45 + 3536);
        v35 = -1;
      }
      else
      {
        v84 = v75;
        v83 = v74;
        v82 = v73;
        v81 = v72;
        v80 = v71;
        v79 = v141;
        v46 = v137;
        *(_BYTE *)(v137 + 3697) = 0;
        *(_BYTE *)(v46 + 3698) = 0;
        sub_140014150(v46 + 3536);
        v9 = v37;
        v44 = v36;
      }
      v70 = v84;
      v69 = v83;
      v68 = v82;
      v67 = v81;
      v66 = v80;
      v140 = v79;
      *(_BYTE *)(v137 + 3696) = 1;
      sub_140BE9140(v135);
      if ( v35 == -1 )
      {
        if ( v13 < 0 )
        {
          v49 = 0;
          goto LABEL_39;
        }
        if ( v13 )
        {
          nullsub_1(v129);
          v49 = 1;
          v56 = sub_140001650(v13, 1);
          if ( !v56 )
          {
LABEL_39:
            v133 = (__int64 *)v44;
            v135 = v9;
            sub_1416C2D4B(v49, v13);
          }
          v12 = v56;
          sub_141684120(v56, v44, v13);
        }
        else
        {
          v12 = 1;
        }
        v48 = 1;
        v10 = 3;
        v55 = v134;
        if ( v9 )
        {
          v60 = v134;
          sub_140001660(v44, v9, 1);
          v55 = v60;
        }
        v11 = v13;
        goto LABEL_62;
      }
      *(_QWORD *)&v102 = v70;
      v101 = v69;
      v100 = v68;
      v99 = v67;
      v98 = v66;
      v97 = v140;
      *(_QWORD *)&v93 = v35;
      *((_QWORD *)&v93 + 1) = v9;
      v94 = v44;
      v95 = v13;
      v96 = v129;
      sub_140B069F0(&v103, &v93);
      v9 = ((unsigned __int64)((HIBYTE(v104) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v104 + 5)) << 32)
         | *(unsigned int *)((char *)&v104 + 1);
      v10 = v104;
      v11 = (__int64)v105;
      v12 = v106;
      v13 = *(_QWORD *)v107;
      if ( v103 == (const char *)-1LL )
      {
        v48 = 0;
      }
      else
      {
        HIBYTE(v104) = (((unsigned __int64)((HIBYTE(v104) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v104 + 5)) << 32)
                      | *(unsigned int *)((char *)&v104 + 1)) >> 48;
        *(_WORD *)((char *)&v104 + 5) = WORD2(v9);
        *(_DWORD *)((char *)&v104 + 1) = v9;
        v79.m256i_i64[0] = 0;
        *(_OWORD *)&v79.m256i_u64[1] = 1u;
        v119.m256i_i64[2] = 1610612768;
        v119.m256i_i64[0] = (__int64)&v79;
        v119.m256i_i64[1] = (__int64)&off_1417C41C0;
        if ( (unsigned __int8)sub_141230630(&v103, &v119, v47) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v127,
            (unsigned int)&unk_1417BC180,
            (__int64)&off_1417C4278);
        v12 = v79.m256i_i64[1];
        v11 = v79.m256i_i64[0];
        v13 = v79.m256i_i64[2];
        sub_140BF0F60(&v103);
        v48 = 1;
        v10 = 3;
      }
      v55 = v134;
LABEL_62:
      *v136 = 1;
      sub_140BF0DE0(v55);
      v54 = v137;
      if ( *(_QWORD *)(v137 + 2576) != -1 )
      {
        v129 = (_QWORD *)(v137 + 2584);
        v61 = *(__int64 **)(v137 + 2584);
        v135 = *(_QWORD *)(v137 + 2592);
        v136 = nullptr;
        v133 = v61;
        while ( (_BYTE *)v135 != v136 )
        {
          ++v136;
          v62 = v61 + 12;
          sub_1402C7520();
          v61 = v62;
        }
        v54 = v137;
        v53 = *(_QWORD *)(v137 + 2576);
        if ( v53 )
LABEL_67:
          sub_140001660(*v129, 96 * v53, 8);
      }
LABEL_68:
      *(_BYTE *)(v54 + 3712) = 1;
      sub_140BE2540(v134);
      v87 = v9;
      v89 = BYTE6(v9);
      v88 = WORD2(v9);
      v90 = v11;
      v91 = v12;
      v92 = v13;
      v86 = v10;
      v85 = v48;
      v63 = v137;
      *(_BYTE *)(v137 + 3731) = 0;
      sub_141684120(&v103, v63, 360);
      *(_BYTE *)(v63 + 3730) = 0;
      v64 = *(_QWORD *)(v63 + 384);
      *(_BYTE *)(v63 + 3729) = 0;
      v94 = *(_QWORD *)(v63 + 376);
      v93 = *(_OWORD *)(v63 + 360);
      sub_14047E370(
        (unsigned int)&v103,
        v64,
        (unsigned int)&v85,
        (unsigned int)&v93,
        *(_DWORD *)(v63 + 3720),
        *(_DWORD *)(v63 + 3724));
      v39 = 1;
      result = 0;
      v38 = (_BYTE *)v137;
LABEL_69:
      v38[3728] = v39;
      return result;
  }
}