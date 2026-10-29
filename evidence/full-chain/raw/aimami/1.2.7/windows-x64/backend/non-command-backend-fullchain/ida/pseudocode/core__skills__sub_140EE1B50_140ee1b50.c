// win 1.2.7 | module src/core/skills.rs | ea 0x140ee1b50 | name sub_140EE1B50
// win 1.2.7 | module src/core/skills.rs | attributed via panic-Location xref (win-native)
void *__fastcall sub_140EE1B50(
        __int64 a1,
        int a2,
        int a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 a8)
{
  int v8; // r14d
  __int64 v12; // rcx
  void *result; // rax
  int v14; // r14d
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rax
  __int128 v22; // kr00_16
  char *v23; // rdx
  unsigned __int8 *v24; // rax
  __int64 v25; // r12
  int v26; // r8d
  unsigned __int8 *v27; // rcx
  int v28; // r9d
  int v29; // r10d
  int v30; // r8d
  __int64 v31; // r13
  bool v32; // sf
  signed __int64 v33; // r13
  __int64 v34; // r12
  int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // r14
  int v38; // r14d
  __int64 v39; // r15
  int v40; // edx
  unsigned __int8 *v41; // r8
  char v42; // r9
  char v43; // r10
  int v44; // r10d
  int v45; // r9d
  __int64 v46; // rcx
  __int64 v47; // r13
  __int64 v48; // r14
  __int64 v49; // rax
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  __int64 v53; // rdx
  __int64 v54; // rax
  __m128i *v55; // rax
  __int64 v56; // rcx
  _BYTE *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  int v63; // edi
  __int64 v64; // r14
  __int64 v65; // rbx
  __int128 v66; // xmm6
  __int64 v67; // r15
  __int128 v68; // [rsp+30h] [rbp-50h] BYREF
  __int128 v69; // [rsp+40h] [rbp-40h] BYREF
  __int64 v70; // [rsp+50h] [rbp-30h]
  __int64 v71; // [rsp+58h] [rbp-28h] BYREF
  __int64 v72; // [rsp+60h] [rbp-20h]
  __int64 v73; // [rsp+68h] [rbp-18h]
  __int64 v74; // [rsp+70h] [rbp-10h] BYREF
  __int64 v75; // [rsp+78h] [rbp-8h]
  __int64 v76; // [rsp+80h] [rbp+0h]
  __int64 v77; // [rsp+90h] [rbp+10h] BYREF
  __int128 v78; // [rsp+98h] [rbp+18h] BYREF
  __int64 v79; // [rsp+A8h] [rbp+28h]
  __int64 v80; // [rsp+B0h] [rbp+30h]
  __int128 v81; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v82; // [rsp+C8h] [rbp+48h] BYREF
  __int128 v83; // [rsp+D8h] [rbp+58h]
  __int128 v84; // [rsp+E8h] [rbp+68h]
  __int128 v85; // [rsp+F8h] [rbp+78h]
  __int128 v86; // [rsp+108h] [rbp+88h]
  __int128 v87; // [rsp+118h] [rbp+98h] BYREF
  __int128 v88; // [rsp+128h] [rbp+A8h]
  __int128 v89; // [rsp+138h] [rbp+B8h]
  __int128 v90; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v91; // [rsp+158h] [rbp+D8h]
  _OWORD v92[2]; // [rsp+160h] [rbp+E0h] BYREF
  char v93; // [rsp+180h] [rbp+100h]
  __int64 v94; // [rsp+190h] [rbp+110h] BYREF
  __int64 v95; // [rsp+198h] [rbp+118h]
  __int64 v96; // [rsp+1A0h] [rbp+120h]
  _BYTE v97[104]; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v98; // [rsp+218h] [rbp+198h]
  _OWORD v99[4]; // [rsp+228h] [rbp+1A8h] BYREF
  __int128 v100; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v101; // [rsp+280h] [rbp+200h]
  signed __int64 v102; // [rsp+288h] [rbp+208h] BYREF
  __int64 v103; // [rsp+290h] [rbp+210h]
  signed __int64 v104; // [rsp+298h] [rbp+218h]
  __int64 v105; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v106; // [rsp+2A8h] [rbp+228h]
  __int64 v107; // [rsp+2B0h] [rbp+230h]
  __int64 v108; // [rsp+2B8h] [rbp+238h]
  __int64 v109; // [rsp+2C0h] [rbp+240h]
  __int64 v110; // [rsp+2C8h] [rbp+248h]
  __int64 v111; // [rsp+2D0h] [rbp+250h]
  __int64 v112; // [rsp+2D8h] [rbp+258h]
  __int64 v113; // [rsp+2E0h] [rbp+260h]
  __int64 v114; // [rsp+2E8h] [rbp+268h]
  __int16 v115; // [rsp+2F0h] [rbp+270h] BYREF
  _BYTE *v116; // [rsp+2F8h] [rbp+278h]
  __int64 v117; // [rsp+300h] [rbp+280h]
  __int64 v118; // [rsp+308h] [rbp+288h]
  __int128 v119; // [rsp+310h] [rbp+290h] BYREF
  __int64 v120; // [rsp+320h] [rbp+2A0h]
  char v121; // [rsp+32Fh] [rbp+2AFh] BYREF
  _BYTE v122[24]; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v123; // [rsp+348h] [rbp+2C8h]
  char v124; // [rsp+350h] [rbp+2D0h]
  __int64 v125; // [rsp+360h] [rbp+2E0h]
  __int64 v126; // [rsp+368h] [rbp+2E8h]
  __int64 v127; // [rsp+370h] [rbp+2F0h]
  char v128; // [rsp+37Fh] [rbp+2FFh]
  char v129; // [rsp+380h] [rbp+300h]
  char v130; // [rsp+381h] [rbp+301h]
  char v131; // [rsp+382h] [rbp+302h]
  char v132; // [rsp+383h] [rbp+303h]
  char v133; // [rsp+384h] [rbp+304h]
  char v134; // [rsp+385h] [rbp+305h]
  char v135; // [rsp+386h] [rbp+306h]
  char v136; // [rsp+387h] [rbp+307h]
  __int64 v137; // [rsp+388h] [rbp+308h]

  v137 = -2;
  v8 = (int)a4;
  v68 = a8;
  sub_1416828D0((unsigned int)v122, a2, a3, (unsigned int)&unk_141A57500, 8);
  v127 = *(_QWORD *)&v122[8];
  sub_140EDD650((unsigned int)v97, *(_DWORD *)&v122[8], *(_DWORD *)&v122[16], v8, a5);
  if ( *(_QWORD *)v97 == 2 )
  {
    nullsub_1(v12);
    result = (void *)sub_140001650(20, 1);
    if ( !result )
      sub_141938D2B(1, 20);
    qmemcpy(result, "Invalid skill source", 20);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 20;
    *(_QWORD *)(a1 + 24) = result;
    *(_QWORD *)(a1 + 32) = 20;
    *(_QWORD *)a1 = -1;
    if ( *(_QWORD *)v122 )
      return (void *)sub_140001660(v127, *(_QWORD *)v122, 1);
    return result;
  }
  v14 = a7;
  v15 = *(_QWORD *)&v97[32];
  v81 = *(_OWORD *)&v97[40];
  v82 = *(_OWORD *)&v97[56];
  v83 = *(_OWORD *)&v97[72];
  v84 = *(_OWORD *)&v97[88];
  v85 = v98;
  v86 = v99[0];
  v87 = v99[1];
  v88 = v99[2];
  v89 = v99[3];
  v117 = *(_QWORD *)&v97[16];
  v77 = *(_QWORD *)v97;
  v78 = *(_OWORD *)&v97[8];
  v111 = *(_QWORD *)&v97[24];
  v79 = *(_QWORD *)&v97[24];
  v80 = *(_QWORD *)&v97[32];
  if ( *(_QWORD *)v122 )
    sub_140001660(v127, *(_QWORD *)v122, 1);
  v97[0] = 1;
  v136 = 1;
  v16 = sub_14168A790(v97, a6, a7);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)a1 = -1;
    return (void *)sub_14038B430(&v77);
  }
  v136 = 1;
  *(_DWORD *)v122 = sub_141683E80(v18, v17, v19);
  *(_DWORD *)&v122[4] = v20;
  v136 = 1;
  sub_141683E30(v97, v122, 3577643008LL, 27111902);
  if ( v97[0] )
    v21 = 0;
  else
    v21 = *(_QWORD *)&v97[8];
  v105 = v21;
  v22 = v83;
  *(_QWORD *)v97 = 0;
  *(_QWORD *)&v97[8] = 1;
  *(_QWORD *)&v97[16] = 0;
  if ( *((_QWORD *)&v83 + 1) )
  {
    sub_14190D590((unsigned int)v97, 0, (*((_QWORD *)&v83 + 1) >> 2) - (((BYTE8(v83) & 3) == 0) - 1), 1, 1);
    v14 = a7;
    v22 = v83;
  }
  sub_1402B20E0(v22, v22 + *((_QWORD *)&v22 + 1), v97);
  v23 = *(char **)&v97[8];
  v127 = *(_QWORD *)v97;
  v24 = (unsigned __int8 *)(*(_QWORD *)&v97[8] + *(_QWORD *)&v97[16]);
  v125 = *(_QWORD *)&v97[8];
  if ( *(_QWORD *)&v97[16] )
  {
    v25 = 0;
    while ( 1 )
    {
      v26 = (unsigned __int8)*v23;
      if ( *v23 < 0 )
      {
        v28 = v26 & 0x1F;
        v29 = v23[1] & 0x3F;
        if ( (unsigned __int8)v26 <= 0xDFu )
        {
          v27 = (unsigned __int8 *)(v23 + 2);
          v26 = v29 | (v28 << 6);
        }
        else
        {
          v30 = (v29 << 6) | v23[2] & 0x3F;
          if ( (unsigned __int8)*v23 < 0xF0u )
          {
            v27 = (unsigned __int8 *)(v23 + 3);
            v26 = (v28 << 12) | v30;
          }
          else
          {
            v27 = (unsigned __int8 *)(v23 + 4);
            v26 = ((v28 & 7) << 18) | (v30 << 6) | v23[3] & 0x3F;
          }
        }
      }
      else
      {
        v27 = (unsigned __int8 *)(v23 + 1);
      }
      v31 = v25 + v27 - (unsigned __int8 *)v23;
      if ( v26 != 95 && v26 != 46 )
        break;
      v25 += v27 - (unsigned __int8 *)v23;
      v23 = (char *)v27;
      if ( v27 == v24 )
        goto LABEL_30;
    }
  }
  else
  {
    v27 = *(unsigned __int8 **)&v97[8];
    v31 = 0;
    v25 = 0;
  }
  if ( v27 == v24 )
  {
LABEL_29:
    v33 = v31 - v25;
    v32 = v33 < 0;
    if ( v33 )
      goto LABEL_51;
    goto LABEL_30;
  }
  while ( 1 )
  {
    v40 = (char)*(v24 - 1);
    if ( v40 < 0 )
    {
      v42 = *(v24 - 2);
      if ( v42 >= -64 )
      {
        v41 = v24 - 2;
        v45 = v42 & 0x1F;
      }
      else
      {
        v43 = *(v24 - 3);
        if ( v43 >= -64 )
        {
          v41 = v24 - 3;
          v44 = v43 & 0xF;
        }
        else
        {
          v41 = v24 - 4;
          v44 = ((*(v24 - 4) & 7) << 6) | v43 & 0x3F;
        }
        v45 = (v44 << 6) | v42 & 0x3F;
      }
      v40 = (v45 << 6) | v40 & 0x3F;
      if ( v40 == 95 )
        goto LABEL_38;
    }
    else
    {
      v41 = v24 - 1;
      if ( v40 == 95 )
        goto LABEL_38;
    }
    if ( v40 != 46 )
      break;
LABEL_38:
    v24 = v41;
    if ( v27 == v41 )
      goto LABEL_29;
  }
  v33 = (signed __int64)&v24[v31 - (_QWORD)v27 - v25];
  v32 = v33 < 0;
  if ( !v33 )
  {
LABEL_30:
    v34 = v15;
    v35 = v14;
    nullsub_1(v27);
    v33 = 5;
    v36 = sub_140001650(5, 1);
    if ( !v36 )
      sub_141938D2B(1, 5);
    v37 = v36;
    *(_BYTE *)(v36 + 4) = 108;
    *(_DWORD *)v36 = 1818848115;
    goto LABEL_32;
  }
LABEL_51:
  if ( v32 )
  {
    v46 = 0;
    goto LABEL_53;
  }
  v54 = v15;
  v35 = v14;
  v126 = v54;
  nullsub_1(v27);
  v55 = (__m128i *)sub_140001650(v33, 1);
  v46 = 1;
  if ( !v55 )
LABEL_53:
    sub_141938D2B(v46, v33);
  v37 = (__int64)v55;
  sub_1418F44E0(v55, (const __m128i *)(v125 + v25), v33);
  v34 = v126;
LABEL_32:
  v102 = v33;
  v103 = v37;
  v104 = v33;
  if ( v127 )
    sub_140001660(v125, v127, 1);
  v135 = 1;
  sub_141568C20(v92);
  v38 = v35;
  *(_QWORD *)v122 = 0;
  *(_QWORD *)&v122[8] = 1;
  *(_QWORD *)&v122[16] = 0;
  *(_QWORD *)&v97[16] = 1610612768;
  *(_QWORD *)v97 = v122;
  *(_QWORD *)&v97[8] = &off_141A65938;
  if ( (unsigned __int8)sub_141569D80(v92, v97) )
    sub_141939040(
      (unsigned int)aADisplayImplem_10,
      55,
      (unsigned int)&v121,
      (unsigned int)&unk_141A58C98,
      (__int64)&off_141A659F0);
  v39 = v34;
  v127 = *(_QWORD *)v122;
  v125 = *(_QWORD *)&v122[8];
  if ( *(_QWORD *)&v122[16] <= 8u )
  {
    if ( *(_QWORD *)&v122[16] != 8 )
LABEL_37:
      sub_141938F40(*(_DWORD *)&v122[8], *(_DWORD *)&v122[16], 0, 8, (__int64)&off_141A5A4F8);
  }
  else if ( *(char *)(*(_QWORD *)&v122[8] + 8LL) <= -65 )
  {
    goto LABEL_37;
  }
  v94 = *(_QWORD *)&v122[8];
  v95 = 8;
  *(_QWORD *)v97 = &v105;
  *(_QWORD *)&v97[8] = sub_1416BCBE0;
  *(_QWORD *)&v97[16] = &v102;
  *(_QWORD *)&v97[24] = sub_1400015F0;
  *(_QWORD *)&v97[32] = &v68;
  *(_QWORD *)&v97[40] = sub_140186EE0;
  *(_QWORD *)&v97[48] = &v94;
  *(_QWORD *)&v97[56] = sub_140186EE0;
  sub_1416ABFD0(v122, &unk_141A5A510, v97);
  if ( v127 )
    sub_140001660(v125, v127, 1);
  v100 = *(_OWORD *)v122;
  v101 = *(_QWORD *)&v122[16];
  v129 = 1;
  sub_1416828D0((unsigned int)&v74, a6, v38, *(_DWORD *)&v122[8], *(__int64 *)&v122[16]);
  v134 = 1;
  sub_141568C20(v97);
  *(_OWORD *)v122 = *(_OWORD *)v97;
  *(_QWORD *)v97 = v122;
  *(_QWORD *)&v97[8] = sub_14028A180;
  v134 = 1;
  sub_1416ABFD0(&v71, &unk_141A5A51B, v97);
  v127 = v72;
  sub_1416828D0((unsigned int)v97, a6, v38, v72, v73);
  if ( v71 )
    sub_140001660(v127, v71, 1);
  v92[1] = *(_OWORD *)&v97[16];
  v92[0] = *(_OWORD *)v97;
  v93 = 0;
  v47 = *(_QWORD *)&v97[8];
  v48 = *(_QWORD *)&v97[16];
  v128 = 1;
  sub_1416828D0((unsigned int)&v94, *(_DWORD *)&v97[8], *(_DWORD *)&v97[16], (unsigned int)&unk_141A5A1ED, 5);
  v97[0] = 1;
  v133 = 1;
  v49 = sub_14168A790(v97, v47, v48);
  if ( v49 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v49;
    goto LABEL_63;
  }
  v133 = 1;
  v125 = v95;
  sub_140ED9E90((unsigned int)v97, a2, a3, v95, v96);
  if ( *(_DWORD *)v97 == -1 )
  {
    v133 = 1;
    sub_1416AC440(&v69, &v100);
    sub_1416AC440(&v90, (char *)&v78 + 8);
    sub_1416AC440(&v119, &v81);
    v113 = v87;
    if ( (_QWORD)v87 == -1 )
    {
      v126 = -1;
    }
    else
    {
      sub_1416AC440(v122, &v87);
      v126 = *(_QWORD *)v122;
      v118 = *(_QWORD *)&v122[8];
      v39 = *(_QWORD *)&v122[16];
    }
    sub_1416AC440(v122, (char *)&v82 + 8);
    *(_QWORD *)&v97[16] = v70;
    *(_OWORD *)v97 = v69;
    *(_OWORD *)&v97[24] = v90;
    *(_QWORD *)&v97[40] = v91;
    *(_OWORD *)&v97[48] = v119;
    *(_QWORD *)&v97[64] = v120;
    *(_QWORD *)&v97[96] = v126;
    *(_QWORD *)&v98 = v118;
    *((_QWORD *)&v98 + 1) = v39;
    *(_OWORD *)&v97[72] = *(_OWORD *)v122;
    *(_QWORD *)&v97[88] = *(_QWORD *)&v122[16];
    *(_QWORD *)&v99[0] = v105;
    nullsub_1(v56);
    v57 = (_BYTE *)sub_140001650(128, 1);
    if ( !v57 )
    {
      v132 = 1;
      sub_141938D2B(1, 128);
    }
    *(_QWORD *)&v119 = 128;
    *((_QWORD *)&v119 + 1) = v57;
    *(_QWORD *)v122 = &v119;
    *(_QWORD *)&v122[8] = asc_141A55A38;
    *(_QWORD *)&v122[16] = 2;
    v123 = 1;
    v124 = 0;
    *v57 = 123;
    v120 = 1;
    v115 = 256;
    v116 = v122;
    v58 = sub_140BF62F0(&v115, aBackupid_0, 8, v97);
    if ( v58 )
      goto LABEL_85;
    if ( !(_BYTE)v115 )
    {
      v58 = sub_140BF62F0(&v115, aSkillid_0, 7, &v97[24]);
      if ( v58 )
        goto LABEL_85;
      if ( !(_BYTE)v115 )
      {
        v58 = sub_140BF62F0(&v115, aName_10, 4, &v97[48]);
        if ( v58 )
          goto LABEL_85;
        if ( !(_BYTE)v115 )
        {
          v58 = sub_140BF4100(&v115, aTitle_5, 5, &v97[96]);
          if ( v58 )
            goto LABEL_85;
          if ( !(_BYTE)v115 )
          {
            v60 = sub_140BF62F0(&v115, aRelativepath_1, 12, &v97[72]);
            if ( v60 )
            {
LABEL_96:
              v58 = v60;
              goto LABEL_85;
            }
            if ( !(_BYTE)v115 )
            {
              v60 = sub_140BFA750(&v115, aCreatedat_3, 9, v99);
              if ( !v60 )
              {
                sub_140288D60(&v115);
                v126 = *((_QWORD *)&v119 + 1);
                v118 = v119;
                if ( (_QWORD)v119 == -1 )
                {
                  v59 = 3;
                  v58 = v126;
                }
                else
                {
                  v61 = v120;
                  v131 = 1;
                  v130 = 1;
                  sub_1416828D0((unsigned int)v122, v47, v48, (unsigned int)&unk_141A5A1E0, 13);
                  *(_QWORD *)&v119 = v118;
                  *((_QWORD *)&v119 + 1) = v126;
                  v120 = v61;
                  v131 = 0;
                  v130 = 1;
                  v62 = sub_140BAE1D0(v122, &v119);
                  v59 = 2;
                  if ( !v62 )
                  {
                    v63 = v76;
                    v131 = 0;
                    v130 = 1;
                    v106 = v75;
                    v62 = sub_141695830(v47, v48, v75, v76);
                    if ( !v62 )
                    {
                      v93 = 1;
                      v107 = *((_QWORD *)&v100 + 1);
                      v127 = v100;
                      v64 = v101;
                      v108 = *((_QWORD *)&v81 + 1);
                      v114 = v81;
                      v109 = *((_QWORD *)&v87 + 1);
                      v65 = v88;
                      v112 = *((_QWORD *)&v82 + 1);
                      v66 = v82;
                      v67 = *((_QWORD *)&v83 + 1);
                      v110 = v83;
                      sub_1416828D0((unsigned int)v122, v106, v63, (unsigned int)&unk_141A5A1ED, 5);
                      v126 = *(_QWORD *)&v122[8];
                      v90 = *(_OWORD *)&v122[8];
                      sub_140F9BE10(&v119, &v90);
                      *(_QWORD *)(a1 + 112) = v120;
                      *(_OWORD *)(a1 + 96) = v119;
                      *(_QWORD *)a1 = v127;
                      *(_QWORD *)(a1 + 8) = v107;
                      *(_QWORD *)(a1 + 16) = v64;
                      *(_QWORD *)(a1 + 24) = v117;
                      *(_QWORD *)(a1 + 32) = v111;
                      *(_QWORD *)(a1 + 40) = v34;
                      *(_QWORD *)(a1 + 48) = v114;
                      *(_QWORD *)(a1 + 56) = v108;
                      *(_OWORD *)(a1 + 64) = v66;
                      *(_QWORD *)(a1 + 80) = v110;
                      *(_QWORD *)(a1 + 88) = v67;
                      *(_QWORD *)(a1 + 120) = v113;
                      *(_QWORD *)(a1 + 128) = v109;
                      *(_QWORD *)(a1 + 136) = v65;
                      *(_QWORD *)(a1 + 144) = v105;
                      sub_140E979D0(v97);
                      if ( v94 )
                        sub_140001660(v125, v94, 1);
                      result = (void *)sub_140E97940(v92);
                      if ( v74 )
                        result = (void *)sub_140001660(v106, v74, 1);
                      if ( v102 )
                        result = (void *)sub_140001660(v103, v102, 1);
                      if ( *((_QWORD *)&v88 + 1) != -1 && *((_QWORD *)&v88 + 1) )
                        result = (void *)sub_140001660(v89, *((_QWORD *)&v88 + 1), 1);
                      if ( (_QWORD)v84 )
                        result = (void *)sub_140001660(*((_QWORD *)&v84 + 1), v84, 1);
                      if ( *((_QWORD *)&v85 + 1) )
                        result = (void *)sub_140001660(v86, *((_QWORD *)&v85 + 1), 1);
                      if ( *(_QWORD *)v122 )
                        return (void *)sub_140001660(v126, *(_QWORD *)v122, 1);
                      return result;
                    }
                  }
                  v58 = v62;
                }
LABEL_88:
                *(_QWORD *)(a1 + 8) = v59;
                *(_QWORD *)(a1 + 16) = v58;
                *(_QWORD *)a1 = -1;
                sub_140E979D0(v97);
                v127 = v47;
                v53 = v94;
                if ( v94 )
                  goto LABEL_64;
                goto LABEL_65;
              }
              goto LABEL_96;
            }
          }
        }
      }
    }
    v58 = sub_141934E70();
LABEL_85:
    if ( (_QWORD)v119 )
      sub_140001660(*((_QWORD *)&v119 + 1), v119, 1);
    v59 = 3;
    goto LABEL_88;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v97[80];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v97[64];
  v50 = *(_OWORD *)v97;
  v51 = *(_OWORD *)&v97[16];
  v52 = *(_OWORD *)&v97[32];
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v97[48];
  *(_OWORD *)(a1 + 40) = v52;
  *(_OWORD *)(a1 + 24) = v51;
  *(_OWORD *)(a1 + 8) = v50;
LABEL_63:
  *(_QWORD *)a1 = -1;
  v127 = v47;
  v53 = v94;
  if ( v94 )
LABEL_64:
    sub_140001660(v95, v53, 1);
LABEL_65:
  sub_140F9C860(v92);
  if ( *(_QWORD *)&v92[0] )
    sub_140001660(v127, *(_QWORD *)&v92[0], 1);
  if ( v74 )
    sub_140001660(v75, v74, 1);
  if ( (_QWORD)v100 )
    sub_140001660(*((_QWORD *)&v100 + 1), v100, 1);
  if ( v102 )
    sub_140001660(v103, v102, 1);
  return (void *)sub_14038B430(&v77);
}
