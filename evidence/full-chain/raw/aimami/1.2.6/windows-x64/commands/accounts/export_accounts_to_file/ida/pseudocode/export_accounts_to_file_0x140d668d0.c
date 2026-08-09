// Pseudocode for export_accounts_to_file (EA: 0x140d668d0, size: 0x102e)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:把选中账号(accountKeys)导出到targetPath文件,含10M大小校验。副作用:写磁盘文件。归属:锚src\commands\account_io.rs。
// Tauri命令handler:把选中账号(accountKeys)导出到targetPath文件,含10M大小校验。副作用:写磁盘文件。归属:锚src\commands\account_io.rs。
char __fastcall export_accounts_to_file(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  __int8 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // r13d
  unsigned int v13; // edi
  __int64 v14; // r12
  _QWORD *v15; // r12
  __int64 v16; // r13
  __int64 *v17; // rbx
  __int64 v18; // rbx
  char v19; // of
  volatile signed __int64 *v20; // rsi
  __int64 v21; // rt0
  volatile signed __int64 *v22; // r14
  __int64 v23; // rt0
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rbx
  unsigned __int64 v32; // r15
  _BYTE *v33; // rdx
  char v34; // cl
  char result; // al
  __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // rdi
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int8 v45; // di
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 *v48; // rcx
  __int64 *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // r13
  __int64 v52; // rcx
  __int64 v53; // rax
  __int128 v54; // xmm6
  __int64 v55; // r14
  __int64 v56; // rsi
  __int64 v57; // r15
  __int64 *v58; // rcx
  __int64 *v59; // r13
  __int64 v60; // rdi
  __int64 v61; // rdx
  _QWORD *v62; // rsi
  __int64 v63; // [rsp+20h] [rbp-60h]
  __int128 v64; // [rsp+50h] [rbp-30h]
  __int128 v65; // [rsp+60h] [rbp-20h]
  __int128 v66; // [rsp+70h] [rbp-10h]
  __int128 v67; // [rsp+80h] [rbp+0h]
  __int64 v68; // [rsp+90h] [rbp+10h]
  __int128 v69; // [rsp+C0h] [rbp+40h]
  __int128 v70; // [rsp+D0h] [rbp+50h]
  __int128 v71; // [rsp+E0h] [rbp+60h]
  __int128 v72; // [rsp+F0h] [rbp+70h]
  __int64 v73; // [rsp+100h] [rbp+80h]
  _QWORD v74[2]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v75; // [rsp+120h] [rbp+A0h]
  __int64 v76; // [rsp+130h] [rbp+B0h]
  __m256i v77; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v78; // [rsp+160h] [rbp+E0h]
  __int128 v79; // [rsp+170h] [rbp+F0h]
  __int128 v80; // [rsp+180h] [rbp+100h]
  __int128 v81; // [rsp+190h] [rbp+110h]
  __int64 v82; // [rsp+1A0h] [rbp+120h]
  __int64 v83; // [rsp+1A8h] [rbp+128h] BYREF
  __int8 v84; // [rsp+1B0h] [rbp+130h]
  int v85; // [rsp+1B1h] [rbp+131h]
  __int16 v86; // [rsp+1B5h] [rbp+135h]
  char v87; // [rsp+1B7h] [rbp+137h]
  __int64 v88; // [rsp+1B8h] [rbp+138h]
  __int64 v89; // [rsp+1C0h] [rbp+140h]
  __int64 v90; // [rsp+1C8h] [rbp+148h]
  __int128 v91; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v92; // [rsp+1E0h] [rbp+160h]
  __int64 v93; // [rsp+1E8h] [rbp+168h]
  __int64 v94; // [rsp+1F0h] [rbp+170h]
  __m256i v95; // [rsp+1F8h] [rbp+178h]
  __int128 v96; // [rsp+218h] [rbp+198h]
  __int128 v97; // [rsp+228h] [rbp+1A8h]
  __int128 v98; // [rsp+238h] [rbp+1B8h]
  __int128 v99; // [rsp+248h] [rbp+1C8h]
  __int128 v100; // [rsp+258h] [rbp+1D8h]
  const char *v101; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v102; // [rsp+270h] [rbp+1F0h]
  const char *v103; // [rsp+278h] [rbp+1F8h]
  __int64 v104; // [rsp+280h] [rbp+200h]
  _BYTE v105[40]; // [rsp+288h] [rbp+208h]
  __int128 v106; // [rsp+2B0h] [rbp+230h]
  __int128 v107; // [rsp+2C0h] [rbp+240h]
  __int128 v108; // [rsp+2D0h] [rbp+250h]
  __int128 v109; // [rsp+2E0h] [rbp+260h]
  __int128 v110; // [rsp+2F0h] [rbp+270h]
  __int64 v111; // [rsp+300h] [rbp+280h]
  __int64 v112; // [rsp+308h] [rbp+288h]
  __int64 v113; // [rsp+310h] [rbp+290h]
  __int128 v114; // [rsp+318h] [rbp+298h]
  __int64 v115; // [rsp+328h] [rbp+2A8h]
  __m256i v116; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v117; // [rsp+3F0h] [rbp+370h]
  __int128 v118; // [rsp+400h] [rbp+380h]
  __int128 v119; // [rsp+410h] [rbp+390h]
  __int128 v120; // [rsp+420h] [rbp+3A0h]
  __int64 v121; // [rsp+430h] [rbp+3B0h]
  __int64 v122; // [rsp+460h] [rbp+3E0h]
  __int64 v123; // [rsp+468h] [rbp+3E8h]
  __int64 v124; // [rsp+470h] [rbp+3F0h]
  __int64 *v125; // [rsp+478h] [rbp+3F8h]
  __int64 v126; // [rsp+480h] [rbp+400h]
  char v127; // [rsp+48Fh] [rbp+40Fh] BYREF
  __int64 v128; // [rsp+490h] [rbp+410h]
  __int64 v129; // [rsp+498h] [rbp+418h]
  _QWORD *v130; // [rsp+4A0h] [rbp+420h]
  __int64 *v131; // [rsp+4A8h] [rbp+428h]
  __int64 v132; // [rsp+4B0h] [rbp+430h]
  __int64 v133; // [rsp+4B8h] [rbp+438h]
  __int64 v134; // [rsp+4C0h] [rbp+440h]
  __int64 v135; // [rsp+4C8h] [rbp+448h]
  char v136; // [rsp+4D7h] [rbp+457h]
  __int64 v137; // [rsp+4D8h] [rbp+458h]
  __m256i v138; // 0:^30.32
  __m256i v139; // 0:^A0.32

  v137 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 3728);
  v135 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 3729) = 257;
      *(_BYTE *)(a1 + 3731) = 1;
      v5 = a1 + 2056;
      sub_14172B820(a1 + 2056, a1 + 392, 1664);
      switch ( *(_BYTE *)(v3 + 3712) )
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
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 2056;
      switch ( *(_BYTE *)(a1 + 3712) )
      {
        case 0:
LABEL_4:
          *(_QWORD *)&v118 = 0;
          v116.m256i_i64[0] = (__int64)aExportAccounts;
          v116.m256i_i64[1] = 23;
          v116.m256i_i64[2] = (__int64)aApp_4;
          v116.m256i_i64[3] = 3;
          v132 = v5;
          *(_QWORD *)&v117 = v5;
          v131 = (__int64 *)(v3 + 2576);
          *((_QWORD *)&v117 + 1) = v3 + 2576;
          sub_1401A9630((__int64)&v101, (__int64)&v116);
          v6 = (unsigned __int64)((HIBYTE(v102) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v102 + 5)) << 32;
          v7 = v6 | *(unsigned int *)((char *)&v102 + 1);
          v8 = v102;
          v9 = (__int64)v103;
          v10 = v104;
          v11 = *(_QWORD *)v105;
          if ( v101 != (const char *)-1LL )
          {
            v100 = v110;
            v99 = v109;
            v98 = v108;
            v97 = v107;
            v96 = v106;
            v95 = *(__m256i *)&v105[8];
            *(_DWORD *)((char *)&v91 + 9) = *(_DWORD *)((char *)&v102 + 1);
            HIBYTE(v91) = (v6 | *(unsigned int *)((char *)&v102 + 1)) >> 48;
            *(_WORD *)((char *)&v91 + 13) = WORD2(v7);
            v92 = (__int64)v103;
            v93 = v104;
            v94 = *(_QWORD *)v105;
            *(_QWORD *)&v91 = v101;
            BYTE8(v91) = v102;
            *(_QWORD *)&v105[16] = 0;
            v101 = aExportAccounts;
            v102 = 23;
            v103 = aTargetpath_1;
            v104 = 10;
            *(_QWORD *)v105 = v132;
            *(_QWORD *)&v105[8] = v131;
            sub_140955980(&v116, &v101);
            v8 = v116.m256i_i8[0];
            if ( v116.m256i_i8[0] == -1 )
            {
              v134 = v116.m256i_i64[1];
              v47 = v116.m256i_i64[3];
              v133 = v116.m256i_i64[2];
              *(_QWORD *)&v105[16] = 0;
              v101 = aExportAccounts;
              v102 = 23;
              v103 = aAccountkeys;
              v104 = 11;
              *(_QWORD *)v105 = v132;
              *(_QWORD *)&v105[8] = v131;
              sub_140951470(&v116, &v101);
              v8 = v116.m256i_i8[0];
              if ( v116.m256i_i8[0] == -1 )
              {
                v54 = *(_OWORD *)&v116.m256i_u64[1];
                v55 = v116.m256i_i64[3];
                v3 = v135;
                v56 = v135 + 2600;
                sub_14172B820(v135 + 2600, &v91, 152);
                *(_QWORD *)(v3 + 2752) = v134;
                *(_QWORD *)(v3 + 2760) = v133;
                *(_QWORD *)(v3 + 2768) = v47;
                *(_OWORD *)(v3 + 2776) = v54;
                *(_QWORD *)(v3 + 2792) = v55;
                *(_BYTE *)(v3 + 2960) = 0;
                v16 = v3 + 2968;
                sub_14172B820(v3 + 2968, v56, 368);
                v15 = (_QWORD *)(v3 + 3704);
                *(_BYTE *)(v3 + 3704) = 0;
                v5 = v132;
LABEL_8:
                v17 = (__int64 *)(v3 + 3336);
                sub_14172B820(v3 + 3336, v16, 368);
                switch ( *(_BYTE *)(v3 + 3696) )
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
              v12 = v116.m256i_u8[7];
              v13 = *(unsigned __int16 *)((char *)&v116.m256i_u16[2] + 1);
              v14 = *(unsigned int *)((char *)v116.m256i_u32 + 1);
              v9 = v116.m256i_i64[1];
              v11 = v116.m256i_i64[3];
              v10 = v116.m256i_i64[2];
              if ( v134 )
                sub_140001660(v133, v134, 1);
              sub_140203A20(&v91);
            }
            else
            {
              v12 = v116.m256i_u8[7];
              v13 = *(unsigned __int16 *)((char *)&v116.m256i_u16[2] + 1);
              v14 = *(unsigned int *)((char *)v116.m256i_u32 + 1);
              v9 = v116.m256i_i64[1];
              v11 = v116.m256i_i64[3];
              v10 = v116.m256i_i64[2];
              sub_140203A20(&v91);
            }
            v7 = ((unsigned __int64)((v12 << 16) | v13) << 32) | v14;
          }
          sub_140CAB140(v132);
          if ( *v131 == -1 )
          {
            v45 = 1;
            v51 = v135;
            goto LABEL_68;
          }
          v130 = (_QWORD *)(v135 + 2584);
          v48 = *(__int64 **)(v135 + 2584);
          v133 = *(_QWORD *)(v135 + 2592);
          v134 = 0;
          v125 = v48;
          while ( v133 != v134 )
          {
            ++v134;
            v49 = v48 + 12;
            sub_140401FB0();
            v48 = v49;
          }
          v50 = *v131;
          v45 = 1;
          v51 = v135;
          if ( !*v131 )
            goto LABEL_68;
          goto LABEL_67;
        case 1:
LABEL_74:
          v132 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_73:
          v132 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = (_QWORD *)(v3 + 3704);
  v16 = v3 + 2968;
  switch ( *(_BYTE *)(v3 + 3704) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v132 = v5;
      v123 = v3 + 3704;
      v122 = v3 + 2968;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v132 = v5;
      v123 = v3 + 3704;
      v122 = v3 + 2968;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v17 = (__int64 *)(v3 + 3336);
      switch ( *(_BYTE *)(v3 + 3696) )
      {
        case 0:
LABEL_10:
          v131 = v17;
          sub_14172B820(v3 + 3536, v17, 152);
          *(_BYTE *)(v3 + 3698) = 1;
          v133 = *(_QWORD *)(v3 + 3488);
          v134 = *(_QWORD *)(v3 + 3496);
          v18 = *(_QWORD *)(v3 + 3504);
          *(_BYTE *)(v3 + 3697) = 1;
          v76 = *(_QWORD *)(v3 + 3528);
          v75 = *(_OWORD *)(v3 + 3512);
          sub_1401A9D00(&v116, v3 + 3536);
          v20 = *(volatile signed __int64 **)(v3 + 3672);
          v21 = _InterlockedIncrement64(v20);
          if ( (v21 < 0) ^ v19 | (v21 == 0)
            || (v126 = v16,
                v130 = v15,
                v132 = v5,
                v22 = *(volatile signed __int64 **)(v3 + 3680),
                v23 = _InterlockedIncrement64(v22),
                (v23 < 0) ^ v19 | (v23 == 0)) )
          {
            BUG();
          }
          sub_14172B820(&v101, &v116, 136);
          *(_WORD *)(v3 + 3697) = 0;
          *(_QWORD *)&v110 = v20;
          *((_QWORD *)&v110 + 1) = v22;
          v111 = v133;
          v112 = v134;
          v113 = v18;
          v114 = v75;
          v115 = v76;
          v24 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v136 = 1;
            v62 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v24 = v62;
          }
          if ( *((_DWORD *)v24 + 4) == 2 )
          {
            v25 = 704;
            if ( *(_BYTE *)v24 )
              v25 = 472;
            v26 = v24[1] + v25;
            v136 = 0;
            v27 = sub_140856A80(v26, v24, &v101, &off_1417EBF48);
          }
          else
          {
            v28 = 704;
            if ( *((_BYTE *)v24 + 64) )
              v28 = 472;
            v29 = v24[9] + v28;
            v136 = 0;
            v27 = sub_140856A80(v29, v24 + 8, &v101, &off_1417EBF30);
          }
          v3 = v135;
          *(_QWORD *)(v135 + 3688) = v27;
          break;
        case 1:
LABEL_76:
          v131 = v17;
          v126 = v16;
          v130 = v15;
          JUMPOUT(0x140D678A0LL);
        case 2:
LABEL_75:
          v131 = v17;
          v126 = v16;
          v130 = v15;
          v132 = v5;
          sub_14176EC20(&off_141888188);
        case 3:
LABEL_18:
          v131 = v17;
          v126 = v16;
          v130 = v15;
          v132 = v5;
          break;
      }
      v125 = (__int64 *)(v3 + 3688);
      sub_1405020B0(&v101, v3 + 3688, a2);
      v30 = (__int64)v101;
      if ( v101 == (const char *)-3LL )
      {
        v33 = (_BYTE *)v135;
        *(_BYTE *)(v135 + 3696) = 3;
        v33[3704] = 3;
        v33[3712] = 3;
        v34 = 3;
        result = 1;
        goto LABEL_69;
      }
      if ( v101 == (const char *)-2LL )
      {
        v31 = v102;
        v11 = (__int64)v103;
        v32 = 0x800000000000000CuLL;
        v124 = v104;
      }
      else
      {
        v32 = v102;
        v31 = (__int64)v103;
        v11 = v104;
        v124 = *(_QWORD *)v105;
        v116 = *(__m256i *)&v105[8];
        v117 = v106;
        v118 = v107;
        v119 = v108;
        v120 = v109;
        v121 = v110;
      }
      v36 = v134;
      v37 = v133;
      v139 = v116;
      v69 = v117;
      v70 = v118;
      v71 = v119;
      v72 = v120;
      v73 = v121;
      v38 = *v125;
      v129 = v133;
      v128 = v134;
      if ( (unsigned __int8)sub_141398090(v38) )
      {
        v129 = v37;
        v128 = v36;
        sub_14139A2E0(v38);
      }
      if ( v30 == -2 )
      {
        v101 = (const char *)v32;
        v102 = v31;
        v103 = (const char *)v11;
        v104 = v124;
        *(_OWORD *)v105 = *(_OWORD *)v139.m256i_i8;
        v74[0] = &v101;
        v74[1] = sub_1412DDF00;
        sub_141543AF0(&v116, &unk_1418862D0, v74);
        v129 = v133;
        v128 = v134;
        sub_140CAB2C0(&v101);
        v39 = v116.m256i_i64[1];
        v7 = v116.m256i_i64[0];
        v11 = v116.m256i_i64[2];
        v40 = v135;
        *(_BYTE *)(v135 + 3697) = 0;
        *(_BYTE *)(v40 + 3698) = 0;
        sub_140203A20(v40 + 3536);
        v30 = -1;
      }
      else
      {
        v82 = v73;
        v81 = v72;
        v80 = v71;
        v79 = v70;
        v78 = v69;
        v77 = v139;
        v41 = v135;
        *(_BYTE *)(v135 + 3697) = 0;
        *(_BYTE *)(v41 + 3698) = 0;
        sub_140203A20(v41 + 3536);
        v7 = v32;
        v39 = v31;
      }
      v68 = v82;
      v67 = v81;
      v66 = v80;
      v65 = v79;
      v64 = v78;
      v138 = v77;
      *(_BYTE *)(v135 + 3696) = 1;
      sub_140CA3370(v131);
      if ( v30 == -1 )
      {
        if ( v11 < 0 )
        {
          v46 = 0;
          goto LABEL_39;
        }
        if ( v11 )
        {
          nullsub_1(v124, v42, v43, v44, v63);
          v46 = 1;
          v53 = sub_140001650(v11, 1);
          if ( !v53 )
          {
LABEL_39:
            v133 = v39;
            v134 = v7;
            sub_14176E54B(v46, v11);
          }
          v10 = v53;
          sub_14172B820(v53, v39, v11);
        }
        else
        {
          v10 = 1;
        }
        v45 = 1;
        v8 = 3;
        v52 = v132;
        if ( v7 )
        {
          v57 = v132;
          sub_140001660(v39, v7, 1);
          v52 = v57;
        }
        v9 = v11;
        goto LABEL_62;
      }
      *(_QWORD *)&v100 = v68;
      v99 = v67;
      v98 = v66;
      v97 = v65;
      v96 = v64;
      v95 = v138;
      *(_QWORD *)&v91 = v30;
      *((_QWORD *)&v91 + 1) = v7;
      v92 = v39;
      v93 = v11;
      v94 = v124;
      sub_140509870(&v101, &v91);
      v7 = ((unsigned __int64)((HIBYTE(v102) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v102 + 5)) << 32)
         | *(unsigned int *)((char *)&v102 + 1);
      v8 = v102;
      v9 = (__int64)v103;
      v10 = v104;
      v11 = *(_QWORD *)v105;
      if ( v101 == (const char *)-1LL )
      {
        v45 = 0;
      }
      else
      {
        HIBYTE(v102) = (((unsigned __int64)((HIBYTE(v102) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v102 + 5)) << 32)
                      | *(unsigned int *)((char *)&v102 + 1)) >> 48;
        *(_WORD *)((char *)&v102 + 5) = WORD2(v7);
        *(_DWORD *)((char *)&v102 + 1) = v7;
        v77.m256i_i64[0] = 0;
        *(_OWORD *)&v77.m256i_u64[1] = 1u;
        v116.m256i_i64[2] = 1610612768;
        v116.m256i_i64[0] = (__int64)&v77;
        v116.m256i_i64[1] = (__int64)&off_141891B48;
        if ( (unsigned __int8)sub_1412DDF00(&v101, &v116) )
          sub_14176E860(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v127,
            (unsigned int)&unk_141889838,
            (__int64)&off_141891C00);
        v10 = v77.m256i_i64[1];
        v9 = v77.m256i_i64[0];
        v11 = v77.m256i_i64[2];
        sub_140CAB2C0(&v101);
        v45 = 1;
        v8 = 3;
      }
      v52 = v132;
LABEL_62:
      *(_BYTE *)v130 = 1;
      sub_140CAB140(v52);
      v51 = v135;
      if ( *(_QWORD *)(v135 + 2576) != -1 )
      {
        v130 = (_QWORD *)(v135 + 2584);
        v58 = *(__int64 **)(v135 + 2584);
        v133 = *(_QWORD *)(v135 + 2592);
        v134 = 0;
        v131 = v58;
        while ( v133 != v134 )
        {
          ++v134;
          v59 = v58 + 12;
          sub_140401FB0();
          v58 = v59;
        }
        v51 = v135;
        v50 = *(_QWORD *)(v135 + 2576);
        if ( v50 )
LABEL_67:
          sub_140001660(*v130, 96 * v50, 8);
      }
LABEL_68:
      *(_BYTE *)(v51 + 3712) = 1;
      sub_140C9C890(v132);
      v85 = v7;
      v87 = BYTE6(v7);
      v86 = WORD2(v7);
      v88 = v9;
      v89 = v10;
      v90 = v11;
      v84 = v8;
      v83 = v45;
      v60 = v135;
      *(_BYTE *)(v135 + 3731) = 0;
      sub_14172B820(&v101, v60, 360);
      *(_BYTE *)(v60 + 3730) = 0;
      v61 = *(_QWORD *)(v60 + 384);
      *(_BYTE *)(v60 + 3729) = 0;
      v92 = *(_QWORD *)(v60 + 376);
      v91 = *(_OWORD *)(v60 + 360);
      sub_140AFFC30((__int64)&v101, v61, (__int64)&v83, &v91, *(_DWORD *)(v60 + 3720), *(_DWORD *)(v60 + 3724));
      v34 = 1;
      result = 0;
      v33 = (_BYTE *)v135;
LABEL_69:
      v33[3728] = v34;
      return result;
  }
}
