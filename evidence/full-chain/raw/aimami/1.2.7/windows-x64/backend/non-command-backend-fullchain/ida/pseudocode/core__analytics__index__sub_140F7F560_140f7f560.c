// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140f7f560 | name sub_140F7F560
// win 1.2.7 | module src/core/analytics/index.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F7F560(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v8; // r12
  void *v9; // rdx
  void *v10; // r13
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int64 v24; // rax
  char v25; // al
  HANDLE v26; // r15
  HANDLE v27; // rcx
  __int64 v29; // r12
  int v30; // eax
  __int64 v31; // rdi
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // rax
  __int64 v36; // r15
  char v37; // r12
  __int64 v38; // rax
  char *v39; // rdx
  int v40; // edx
  int v41; // ecx
  unsigned int v42; // ecx
  __int64 v43; // r12
  _QWORD *v44; // r13
  __int64 v45; // r14
  int v46; // eax
  __int64 v47; // r9
  int v48; // r8d
  __int64 v49; // r15
  unsigned int v50; // eax
  __int64 v51; // rdx
  _QWORD *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rcx
  void *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rbx
  _QWORD *v61; // r14
  __int64 v62; // rdx
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm2
  __int64 v66; // rax
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm2
  __int128 v70; // xmm0
  char v71; // al
  __int64 v72; // rax
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  int v76; // eax
  __int64 v77; // rax
  __int128 v78; // xmm0
  __int128 v79; // xmm0
  __int128 v80; // xmm2
  __int128 v81; // xmm3
  __int64 v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // r15
  __int64 v85; // r12
  char v86; // r14
  __int64 v87; // rax
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  __int128 v90; // xmm2
  __int64 v91; // rax
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int128 v94; // xmm2
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm2
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // xmm2
  __int64 v101; // [rsp+20h] [rbp-60h]
  __int64 v102; // [rsp+28h] [rbp-58h]
  __int128 v103; // [rsp+30h] [rbp-50h] BYREF
  __int128 v104; // [rsp+40h] [rbp-40h]
  __int64 v105; // [rsp+50h] [rbp-30h]
  _OWORD v106[6]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v107; // [rsp+C0h] [rbp+40h]
  unsigned __int8 v108; // [rsp+C8h] [rbp+48h]
  _DWORD v109[3]; // [rsp+C9h] [rbp+49h]
  _QWORD v110[6]; // [rsp+D8h] [rbp+58h] BYREF
  void *v111; // [rsp+108h] [rbp+88h] BYREF
  __int128 v112; // [rsp+110h] [rbp+90h] BYREF
  __int64 v113; // [rsp+120h] [rbp+A0h]
  __int64 v114; // [rsp+130h] [rbp+B0h]
  _QWORD *v115; // [rsp+138h] [rbp+B8h]
  __m256i v116; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v117; // [rsp+160h] [rbp+E0h]
  __int128 v118; // [rsp+170h] [rbp+F0h]
  __m512i v119; // [rsp+180h] [rbp+100h] BYREF
  __int128 v120; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v121; // [rsp+1D0h] [rbp+150h]
  int v122; // [rsp+1DCh] [rbp+15Ch]
  __m512i v123; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v124; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v125; // [rsp+230h] [rbp+1B0h]
  __int128 v126; // [rsp+240h] [rbp+1C0h]
  __int128 v127; // [rsp+250h] [rbp+1D0h]
  __int128 v128; // [rsp+260h] [rbp+1E0h]
  __int128 v129; // [rsp+270h] [rbp+1F0h]
  __int64 v130; // [rsp+280h] [rbp+200h]
  unsigned __int64 v131; // [rsp+288h] [rbp+208h]
  _BYTE v132[80]; // [rsp+290h] [rbp+210h] BYREF
  __int128 v133; // [rsp+2E0h] [rbp+260h]
  __int64 v134; // [rsp+2F0h] [rbp+270h]
  char v135; // [rsp+2FFh] [rbp+27Fh] BYREF
  _BYTE v136[96]; // [rsp+300h] [rbp+280h] BYREF
  __int64 v137; // [rsp+360h] [rbp+2E0h]
  unsigned __int8 v138; // [rsp+368h] [rbp+2E8h]
  _BYTE v139[7]; // [rsp+369h] [rbp+2E9h]
  HANDLE hObject; // [rsp+370h] [rbp+2F0h]
  char v141; // [rsp+37Eh] [rbp+2FEh]
  char v142; // [rsp+37Fh] [rbp+2FFh]
  __int64 v143; // [rsp+380h] [rbp+300h]

  v143 = -2;
  sub_140F7EB70((__int64)v136, a2);
  if ( v138 == 0xFF )
  {
    v133 = *(_OWORD *)&v136[80];
    v11 = *(_OWORD *)&v136[64];
    *(_OWORD *)&v132[64] = *(_OWORD *)&v136[64];
    v12 = *(_OWORD *)v136;
    v13 = *(_OWORD *)&v136[16];
    v14 = *(_OWORD *)&v136[32];
    v15 = *(_OWORD *)&v136[48];
    *(_OWORD *)&v132[48] = *(_OWORD *)&v136[48];
    *(_OWORD *)&v132[32] = *(_OWORD *)&v136[32];
    *(_OWORD *)&v132[16] = *(_OWORD *)&v136[16];
    *(_OWORD *)v132 = *(_OWORD *)v136;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[80];
    *(_OWORD *)(a1 + 64) = v11;
    *(_OWORD *)(a1 + 48) = v15;
    *(_OWORD *)(a1 + 32) = v14;
    *(_OWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
    return a1;
  }
  v134 = v137;
  v133 = *(_OWORD *)&v136[80];
  *(_OWORD *)&v132[64] = *(_OWORD *)&v136[64];
  *(_OWORD *)&v132[48] = *(_OWORD *)&v136[48];
  *(_OWORD *)&v132[32] = *(_OWORD *)&v136[32];
  *(_OWORD *)&v132[16] = *(_OWORD *)&v136[16];
  *(_OWORD *)v132 = *(_OWORD *)v136;
  v109[0] = *(_DWORD *)v139;
  *(_DWORD *)((char *)v109 + 3) = *(_DWORD *)&v139[3];
  v107 = v137;
  v106[5] = *(_OWORD *)&v136[80];
  v106[4] = *(_OWORD *)&v136[64];
  v106[3] = *(_OWORD *)&v136[48];
  v106[2] = *(_OWORD *)&v136[32];
  v106[1] = *(_OWORD *)&v136[16];
  v106[0] = *(_OWORD *)v136;
  v108 = v138;
  *(_DWORD *)v136 = 0;
  *(_QWORD *)&v136[8] = 0;
  *(_DWORD *)&v136[16] = 7;
  *(_QWORD *)&v136[20] = 0x100000000LL;
  *(_QWORD *)&v136[25] = 16777217;
  sub_1416828D0((unsigned int)v132, *(_QWORD *)(a2 + 456), *(_QWORD *)(a2 + 464), (unsigned int)&unk_141A6477D, 17);
  hObject = *(HANDLE *)&v132[8];
  v8 = sub_141690E40(v136);
  v10 = v9;
  if ( *(_QWORD *)v132 )
    sub_140001660(hObject, *(_QWORD *)v132, 1);
  if ( (v8 & 1) != 0 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v10;
    goto LABEL_24;
  }
  hObject = v10;
  v111 = v10;
  v16 = sub_141412DF0(&v111);
  v18 = v16;
  if ( v16 )
  {
    v19 = v16 & 3;
    switch ( v16 & 3 )
    {
      case 0LL:
        if ( *(_BYTE *)(v16 + 16) == 13 )
          goto LABEL_16;
        goto LABEL_20;
      case 1LL:
        if ( *(_BYTE *)(v16 + 31) != 13 )
          goto LABEL_20;
        goto LABEL_16;
      case 2LL:
        v131 = v16;
        v24 = sub_1416B3F10(v17, v16);
        v25 = (*(__int64 (__fastcall **)(unsigned __int64))(v24 + 8))(HIDWORD(v131));
        v18 = v131;
        if ( v25 != 13 )
          goto LABEL_20;
        goto LABEL_16;
      case 3LL:
        if ( BYTE4(v16) == 13 )
        {
LABEL_16:
          *(_QWORD *)a1 = -1;
          if ( (unsigned int)(v19 - 2) >= 2 && v19 )
          {
            *(_QWORD *)&v136[8] = v18 - 1;
            v136[0] = 3;
            sub_1416BCB00(&v136[8]);
          }
        }
        else
        {
LABEL_20:
          *(_QWORD *)a1 = 2;
          *(_QWORD *)(a1 + 8) = v18;
        }
        break;
    }
    goto LABEL_21;
  }
  sub_140F8DF00(v136, a2);
  v20 = *(_QWORD *)v136;
  *(_OWORD *)v132 = *(_OWORD *)&v136[8];
  *(_QWORD *)&v132[16] = *(_QWORD *)&v136[24];
  if ( *(_QWORD *)v136 != -1 )
  {
    v21 = *(_OWORD *)&v136[32];
    v22 = *(_OWORD *)&v136[48];
    v23 = *(_OWORD *)&v136[64];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[80];
    *(_OWORD *)(a1 + 64) = v23;
    *(_OWORD *)(a1 + 48) = v22;
    *(_OWORD *)(a1 + 32) = v21;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v132[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v132;
    *(_QWORD *)a1 = v20;
LABEL_21:
    v26 = hObject;
    goto LABEL_22;
  }
  v120 = *(_OWORD *)v132;
  v121 = *(_QWORD *)&v132[16];
  sub_140EC0780(v136, v106, aInsertIntoMeta_1, 92);
  if ( *(_DWORD *)v136 == 1 )
  {
    v127 = *(_OWORD *)&v136[56];
    v126 = *(_OWORD *)&v136[40];
    v125 = *(_OWORD *)&v136[24];
    v124 = *(_OWORD *)&v136[8];
  }
  else
  {
    *(_OWORD *)&v132[48] = *(_OWORD *)&v136[56];
    *(_OWORD *)&v132[32] = *(_OWORD *)&v136[40];
    *(_OWORD *)&v132[16] = *(_OWORD *)&v136[24];
    *(_OWORD *)v132 = *(_OWORD *)&v136[8];
    v29 = *(_QWORD *)&v136[64];
    v30 = sub_1417A9630(*(_QWORD *)&v136[64]);
    if ( v30 )
    {
      v124 = 0x8000000000000013uLL;
      *(_QWORD *)&v125 = v30;
    }
    else
    {
      sub_140EBD680(&v124, *(_QWORD *)v132, v29);
    }
    sub_140E970D0(v132);
  }
  if ( (_QWORD)v124 != -1 )
  {
    *(_OWORD *)&v132[48] = v127;
    *(_OWORD *)&v132[32] = v126;
    *(_OWORD *)&v132[16] = v125;
    *(_OWORD *)v132 = v124;
    *(_QWORD *)v136 = v132;
    *(_QWORD *)&v136[8] = sub_141404740;
    sub_1416ABFD0(&v123, &unk_141A6499F, v136);
    v31 = v123.m512i_i64[0];
    *(_OWORD *)v136 = *(_OWORD *)&v123.m512i_u64[1];
    sub_140E96F40(v132);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[64];
    v32 = *(_OWORD *)v136;
    v33 = *(_OWORD *)&v136[16];
    v34 = *(_OWORD *)&v136[32];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v136[48];
    *(_OWORD *)(a1 + 48) = v34;
    *(_OWORD *)(a1 + 32) = v33;
    *(_OWORD *)(a1 + 16) = v32;
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = v31;
    goto LABEL_73;
  }
  v35 = v121;
  *(_QWORD *)(a3 + 40) = v121;
  v36 = *((_QWORD *)&v120 + 1);
  v131 = *((_QWORD *)&v120 + 1) + (v35 << 6);
  v37 = 0;
  v141 = a4;
  while ( v36 != v131 )
  {
    if ( !*(_BYTE *)(a3 + 80) )
      goto LABEL_72;
    sub_141406CE0(v136);
    v40 = (*(int *)v136 >> 13) - 1;
    v41 = 0;
    if ( *(int *)v136 >> 13 <= 0 )
    {
      v42 = (1 - (*(int *)v136 >> 13)) / 0x190u + 1;
      v40 += 400 * v42;
      v41 = -146097 * v42;
    }
    if ( 86400LL
       * (((v40 / 100) >> 2) + ((1461 * v40) >> 2) + v41 + ((*(_DWORD *)v136 >> 4) & 0x1FF) - v40 / 100 - 719163)
       + *(unsigned int *)&v136[4]
       - *(_QWORD *)(a3 + 16) >= 75 )
      goto LABEL_72;
    sub_140F82290((unsigned int)&v124, (unsigned int)v106, v36, a3, a4);
    if ( (_DWORD)v124 != -1 )
    {
      v133 = v129;
      *(_OWORD *)&v132[64] = v128;
      *(_OWORD *)&v132[48] = v127;
      *(_OWORD *)&v132[32] = v126;
      *(_OWORD *)&v132[16] = v125;
      *(_OWORD *)v132 = v124;
      sub_1416AB5A0(v110, *(_QWORD *)(v36 + 8), *(_QWORD *)(v36 + 16));
      v130 = v110[1];
      v43 = v110[2];
      sub_140EC0780(v136, v106, aUpdateFilesSet, 39);
      if ( *(_DWORD *)v136 == 1 )
      {
        v119 = *(__m512i *)&v136[8];
LABEL_59:
        if ( v119.m512i_i64[0] != -1 )
        {
          v123 = v119;
          sub_140F82200(v136, &v123);
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[80];
          v63 = *(_OWORD *)&v136[16];
          v64 = *(_OWORD *)&v136[32];
          v65 = *(_OWORD *)&v136[48];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v136[64];
          *(_OWORD *)(a1 + 48) = v65;
          *(_OWORD *)(a1 + 32) = v64;
          *(_OWORD *)(a1 + 16) = v63;
          *(_OWORD *)a1 = *(_OWORD *)v136;
          if ( v110[0] > 0LL )
            sub_140001660(v130, v110[0], 1);
          sub_140E97700(v132);
          goto LABEL_73;
        }
        if ( v110[0] > 0LL )
          sub_140001660(v130, v110[0], 1);
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v56 = *(_QWORD *)v132 - 2LL;
          if ( *(_QWORD *)v132 < 2u )
            v56 = 2;
          if ( v56 == 1 )
          {
            v38 = 12;
            v39 = &aSourceOrIndexI[18];
          }
          else
          {
            v38 = 11;
            v39 = &aSourceOrIndexI[30];
            if ( !v56 )
            {
              v38 = 18;
              v39 = aSourceOrIndexI;
            }
          }
          v116.m256i_i64[0] = (__int64)v39;
          v116.m256i_i64[1] = v38;
          v123.m512i_i64[0] = (__int64)&v116;
          v123.m512i_i64[1] = (__int64)sub_140186EE0;
          *(_QWORD *)&v136[48] = 2;
          *(_QWORD *)&v136[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v136[64] = 37;
          *(_QWORD *)&v136[80] = &unk_141A64811;
          *(_QWORD *)&v136[88] = &v123;
          *(_QWORD *)v136 = 0;
          *(_QWORD *)&v136[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v136[16] = 0x25u;
          *(_QWORD *)&v136[32] = aSrcCoreAnalyti_1;
          *(_QWORD *)&v136[40] = 27;
          *(_QWORD *)&v136[72] = 0xEA00000001LL;
          sub_1414D53A0(&v135, v136);
        }
        sub_140E97700(v132);
        v37 = 1;
        goto LABEL_38;
      }
      v118 = *(_OWORD *)&v136[56];
      v117 = *(_OWORD *)&v136[40];
      v116 = *(__m256i *)&v136[8];
      v44 = *(_QWORD **)&v136[8];
      v45 = *(_QWORD *)&v136[64];
      v46 = sub_1417A9630(*(_QWORD *)&v136[64]);
      v47 = 1;
      if ( v46 )
      {
        v122 = v46;
        v114 = v36;
        v48 = v130;
        if ( !v43 )
          v48 = 1;
        v49 = v45;
        v50 = sub_1417A9200(v45, 1, v48, v43, -(v43 != 0), 1);
        if ( *v44 >= 0x7FFFFFFFFFFFFFFFuLL )
          sub_141938FA0(&off_141A594A0);
        ++*v44;
        v51 = v44[2];
        v115 = v44;
        sub_141404710(&v123, v51, v50);
        a4 = v141;
        v52 = v115;
        --*v115;
        v53 = v123.m512i_i64[0];
        v47 = 1;
        if ( v123.m512i_i64[0] != -1 )
        {
          v54 = v123.m512i_i64[2];
          v47 = v123.m512i_i64[1];
          v103 = *(_OWORD *)&v123.m512i_u64[3];
          v104 = *(_OWORD *)&v123.m512i_u64[5];
          v105 = v123.m512i_i64[7];
          v36 = v114;
          goto LABEL_57;
        }
        v55 = v49;
        v36 = v114;
        if ( v122 == 1 )
        {
          sub_140EBD680(&v119, v52, v55);
LABEL_58:
          sub_140E970D0(&v116);
          goto LABEL_59;
        }
        v54 = v122;
        v53 = 0x8000000000000013uLL;
      }
      else
      {
        v53 = 0x8000000000000013uLL;
        v54 = 0;
        a4 = v141;
      }
LABEL_57:
      v119.m512i_i64[0] = v53;
      v119.m512i_i64[1] = v47;
      v119.m512i_i64[2] = v54;
      v119.m512i_i64[7] = v105;
      *(_OWORD *)&v119.m512i_u64[5] = v104;
      *(_OWORD *)&v119.m512i_u64[3] = v103;
      goto LABEL_58;
    }
LABEL_38:
    v36 += 64;
    _InterlockedIncrement64((volatile signed __int64 *)(a3 + 32));
  }
  if ( !(unsigned __int8)sub_140EBE540(a3) )
  {
LABEL_72:
    *(_QWORD *)a1 = -1;
    goto LABEL_73;
  }
  if ( (v37 & 1) != 0 )
  {
    nullsub_1(v57);
    v58 = (void *)sub_140001650(28, 1);
    v26 = hObject;
    if ( !v58 )
      sub_141938D2B(1, 28);
    qmemcpy(v58, "analytics sources incomplete", 28);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 28;
    *(_QWORD *)(a1 + 16) = v58;
    *(_QWORD *)(a1 + 24) = 28;
    goto LABEL_74;
  }
  sub_140F8DF00(v136, a2);
  v66 = *(_QWORD *)v136;
  *(_OWORD *)v132 = *(_OWORD *)&v136[8];
  *(_QWORD *)&v132[16] = *(_QWORD *)&v136[24];
  if ( *(_QWORD *)v136 != -1 )
  {
    v67 = *(_OWORD *)&v136[32];
    v68 = *(_OWORD *)&v136[48];
    v69 = *(_OWORD *)&v136[64];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[80];
    *(_OWORD *)(a1 + 64) = v69;
    *(_OWORD *)(a1 + 48) = v68;
    *(_OWORD *)(a1 + 32) = v67;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v132[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v132;
    *(_QWORD *)a1 = v66;
    goto LABEL_73;
  }
  v112 = *(_OWORD *)v132;
  v113 = *(_QWORD *)&v132[16];
  sub_140EBA2B0(v110, *(_QWORD *)&v132[8], *(_QWORD *)&v132[8] + (*(_QWORD *)&v132[16] << 6));
  sub_140EBA2B0(&v103, *((_QWORD *)&v120 + 1), *((_QWORD *)&v120 + 1) + (v121 << 6));
  if ( !(unsigned __int8)sub_140F9AE90(v110, &v103) )
  {
    *(_QWORD *)(a3 + 24) = 0;
    *(_QWORD *)a1 = -1;
    goto LABEL_117;
  }
  sub_1414039F0(
    v136,
    v106,
    *(&off_141A65F90 + (unsigned int)v108),
    qword_141A65FA8[v108],
    v101,
    v102,
    v103,
    *((_QWORD *)&v103 + 1));
  if ( *(_QWORD *)v136 != -1 )
  {
    *(_OWORD *)&v132[48] = *(_OWORD *)&v136[48];
    *(_OWORD *)&v132[33] = *(_OWORD *)&v136[33];
    *(_OWORD *)&v132[17] = *(_OWORD *)&v136[17];
    *(_OWORD *)v132 = *(_OWORD *)v136;
    v132[16] = v136[16];
    sub_140F82200(v136, v132);
    v70 = *(_OWORD *)v136;
    v71 = v136[16];
    *(_OWORD *)(a1 + 17) = *(_OWORD *)&v136[17];
    *(_OWORD *)(a1 + 33) = *(_OWORD *)&v136[33];
    *(_OWORD *)(a1 + 49) = *(_OWORD *)&v136[49];
    *(_OWORD *)(a1 + 65) = *(_OWORD *)&v136[65];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[80];
    *(_OWORD *)a1 = v70;
    *(_BYTE *)(a1 + 16) = v71;
    goto LABEL_117;
  }
  v142 = 1;
  sub_140EC0780(v132, v106, aSelectPathFrom, 22);
  if ( *(_DWORD *)v132 == 1 )
  {
    v127 = *(_OWORD *)&v132[56];
    v126 = *(_OWORD *)&v132[40];
    v125 = *(_OWORD *)&v132[24];
    v124 = *(_OWORD *)&v132[8];
    v142 = 1;
    sub_140F82200(v136, &v124);
    v72 = *(_QWORD *)v136;
    v123 = *(__m512i *)&v136[8];
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v136[88];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v136[72];
    v73 = *(_OWORD *)v123.m512i_i8;
    v74 = *(_OWORD *)&v123.m512i_u64[2];
    v75 = *(_OWORD *)&v123.m512i_u64[4];
    v116 = *(__m256i *)v123.m512i_i8;
    v117 = *(_OWORD *)&v123.m512i_u64[4];
    v118 = *(_OWORD *)&v123.m512i_u64[6];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v123.m512i_u64[6];
    *(_OWORD *)(a1 + 40) = v75;
    *(_OWORD *)(a1 + 24) = v74;
    *(_OWORD *)(a1 + 8) = v73;
    *(_QWORD *)a1 = v72;
    goto LABEL_116;
  }
  *(_OWORD *)v116.m256i_i8 = *(_OWORD *)&v132[8];
  v119 = *(__m512i *)&v132[8];
  v76 = sub_1417A9630(*(_QWORD *)&v132[64]);
  if ( v76 )
  {
    *(_OWORD *)v132 = 0x8000000000000013uLL;
    *(_QWORD *)&v132[16] = v76;
    sub_140F82200(v136, v132);
    v77 = *(_QWORD *)v136;
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v136[88];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v136[72];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v136[56];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v136[40];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v136[24];
    v78 = *(_OWORD *)&v136[8];
    *(_QWORD *)a1 = v77;
    *(_OWORD *)(a1 + 8) = v78;
    v142 = 1;
    sub_140E970D0(&v119);
    goto LABEL_116;
  }
  sub_14019AAB0(&v124, &v119, 0);
  if ( (_QWORD)v124 != -1 )
  {
    *(_OWORD *)&v132[48] = v127;
    *(_OWORD *)&v132[32] = v126;
    *(_OWORD *)&v132[16] = v125;
    *(_OWORD *)v132 = v124;
    sub_140F82200(v136, v132);
    v79 = *(_OWORD *)&v136[16];
    v80 = *(_OWORD *)&v136[48];
    v81 = *(_OWORD *)&v136[64];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v136[32];
    *(_OWORD *)(a1 + 48) = v80;
    *(_OWORD *)(a1 + 64) = v81;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[80];
    *(_OWORD *)a1 = *(_OWORD *)v136;
    *(_OWORD *)(a1 + 16) = v79;
    v142 = 1;
    sub_140E970D0(&v119);
    goto LABEL_116;
  }
  v82 = *((_QWORD *)&v124 + 1);
  v83 = *((_QWORD *)&v125 + 1);
  v84 = v125;
  v142 = 1;
  sub_140E970D0(&v119);
  v85 = v84 + 24 * v83;
  v123.m512i_i64[0] = v84;
  v123.m512i_i64[1] = v84;
  v123.m512i_i64[2] = v82;
  v123.m512i_i64[3] = v85;
  v86 = 0;
  while ( 2 )
  {
    if ( v84 == v85
      || (v123.m512i_i64[1] = v84 + 24, v87 = *(_QWORD *)v84, *(_OWORD *)v119.m512i_i8 = *(_OWORD *)(v84 + 8), v87 == -1) )
    {
      v142 = 1;
      sub_140383620(&v123);
      if ( (v86 & 1) == 0 || (v142 = 1, sub_140F7E910(v136, v106), *(_DWORD *)v136 == -1) )
      {
        v142 = 1;
        v91 = sub_140F7EAD0();
        v142 = 1;
        sub_140E94610(&v124, v106, v91);
        if ( (_QWORD)v124 == -1 )
        {
          v142 = 1;
          sub_140E942B0((__int64)&v124, (__int64)v106);
          if ( (_QWORD)v124 == -1 )
          {
            v142 = 0;
            sub_140EBD5C0(&v124, v106);
            if ( (_QWORD)v124 != -1 )
            {
              *(_OWORD *)&v132[48] = v127;
              *(_OWORD *)&v132[32] = v126;
              *(_OWORD *)&v132[16] = v125;
              *(_OWORD *)v132 = v124;
              v142 = 0;
              sub_140F82200(v136, v132);
              *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[80];
              *(_OWORD *)(a1 + 64) = *(_OWORD *)&v136[64];
              v98 = *(_OWORD *)v136;
              v99 = *(_OWORD *)&v136[16];
              v100 = *(_OWORD *)&v136[32];
              *(_OWORD *)(a1 + 48) = *(_OWORD *)&v136[48];
              *(_OWORD *)(a1 + 32) = v100;
              *(_OWORD *)(a1 + 16) = v99;
              *(_OWORD *)a1 = v98;
              goto LABEL_117;
            }
            *(_QWORD *)a1 = -1;
            sub_140370B80(&v103);
            sub_140370B80(v110);
            sub_140623B10(&v112);
            sub_140623B10(&v120);
            v27 = hObject;
            goto LABEL_23;
          }
        }
        *(_OWORD *)&v132[48] = v127;
        *(_OWORD *)&v132[32] = v126;
        *(_OWORD *)&v132[16] = v125;
        *(_OWORD *)v132 = v124;
        v142 = 1;
        sub_140F82200(v136, v132);
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[80];
        v92 = *(_OWORD *)&v136[16];
        v93 = *(_OWORD *)&v136[32];
        v94 = *(_OWORD *)&v136[48];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v136[64];
        *(_OWORD *)(a1 + 48) = v94;
        *(_OWORD *)(a1 + 32) = v93;
        *(_OWORD *)(a1 + 16) = v92;
        v88 = *(_OWORD *)v136;
      }
      else
      {
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v136[64];
        v88 = *(_OWORD *)v136;
        v89 = *(_OWORD *)&v136[16];
        v90 = *(_OWORD *)&v136[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v136[48];
        *(_OWORD *)(a1 + 32) = v90;
        *(_OWORD *)(a1 + 16) = v89;
      }
      *(_OWORD *)a1 = v88;
      goto LABEL_116;
    }
    v116.m256i_i64[0] = v87;
    *(_OWORD *)&v116.m256i_u64[1] = *(_OWORD *)v119.m512i_i8;
    if ( (unsigned __int8)sub_140373DE0(v110, &v116) )
    {
LABEL_104:
      if ( v116.m256i_i64[0] )
        sub_140001660(v116.m256i_i64[1], v116.m256i_i64[0], 1);
      v84 += 24;
      continue;
    }
    break;
  }
  sub_140E943B0(&v124, v106, &v116);
  if ( (_QWORD)v124 == -1 )
  {
    v86 = 1;
    goto LABEL_104;
  }
  *(_OWORD *)&v132[48] = v127;
  *(_OWORD *)&v132[32] = v126;
  *(_OWORD *)&v132[16] = v125;
  *(_OWORD *)v132 = v124;
  sub_140F82200(v136, v132);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v136[80];
  v95 = *(_OWORD *)&v136[16];
  v96 = *(_OWORD *)&v136[32];
  v97 = *(_OWORD *)&v136[48];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v136[64];
  *(_OWORD *)(a1 + 48) = v97;
  *(_OWORD *)(a1 + 32) = v96;
  *(_OWORD *)(a1 + 16) = v95;
  *(_OWORD *)a1 = *(_OWORD *)v136;
  if ( v116.m256i_i64[0] )
    sub_140001660(v116.m256i_i64[1], v116.m256i_i64[0], 1);
  v142 = 1;
  sub_140383620(&v123);
LABEL_116:
  sub_140E96CB0(v106);
LABEL_117:
  sub_140370B80(&v103);
  sub_140370B80(v110);
  sub_140623B10(&v112);
LABEL_73:
  v26 = hObject;
LABEL_74:
  v59 = *((_QWORD *)&v120 + 1);
  v60 = v121;
  if ( v121 )
  {
    v61 = (_QWORD *)(*((_QWORD *)&v120 + 1) + 8LL);
    do
    {
      v62 = *(v61 - 1);
      if ( v62 )
        sub_140001660(*v61, v62, 1);
      v61 += 8;
      --v60;
    }
    while ( v60 );
  }
  if ( (_QWORD)v120 )
    sub_140001660(v59, (_QWORD)v120 << 6, 16);
LABEL_22:
  v27 = v26;
LABEL_23:
  CloseHandle(v27);
LABEL_24:
  sub_140E963A0(v106);
  return a1;
}
