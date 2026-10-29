// win 1.2.7 | module src/core/relay/storage.rs | ea 0x140f73220 | name sub_140F73220
// win 1.2.7 | module src/core/relay/storage.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F73220(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int128 v7; // kr00_16
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  void *v14; // rax
  __int128 v15; // xmm0
  _BYTE *v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  _BYTE *v19; // rax
  unsigned __int8 *v20; // rax
  _QWORD *v21; // r12
  int v22; // eax
  _QWORD *v23; // rax
  void *v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rbx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // kr10_16
  __int128 v43; // kr20_16
  __int64 v44; // rcx
  __int64 v45; // r12
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r14
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // r12
  char v53; // al
  __int64 v54; // rax
  __int64 v55; // r15
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // rbx
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // r12
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  bool v68; // al
  __int64 v69; // rbx
  __int64 v70; // r14
  __int64 v71; // rax
  __int128 v72; // [rsp+48h] [rbp-38h] BYREF
  __int64 v73; // [rsp+58h] [rbp-28h]
  __int128 v74; // [rsp+60h] [rbp-20h] BYREF
  __int64 v75; // [rsp+70h] [rbp-10h]
  __int128 v76; // [rsp+78h] [rbp-8h] BYREF
  __int64 v77; // [rsp+88h] [rbp+8h]
  _BYTE v78[40]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v79; // [rsp+B8h] [rbp+38h]
  __int128 v80; // [rsp+C8h] [rbp+48h]
  __int128 v81; // [rsp+D8h] [rbp+58h]
  __int128 v82; // [rsp+E8h] [rbp+68h]
  __m128i v83; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v84; // [rsp+110h] [rbp+90h] BYREF
  __int64 v85; // [rsp+120h] [rbp+A0h]
  int v86; // [rsp+1F8h] [rbp+178h]
  char v87; // [rsp+20Eh] [rbp+18Eh]
  __int128 v88; // [rsp+210h] [rbp+190h] BYREF
  __int64 v89; // [rsp+220h] [rbp+1A0h]
  _OWORD v90[2]; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v91; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v92; // [rsp+260h] [rbp+1E0h]
  __int128 v93; // [rsp+270h] [rbp+1F0h]
  __int128 v94; // [rsp+280h] [rbp+200h]
  __int128 v95; // [rsp+290h] [rbp+210h]
  __int128 v96; // [rsp+2A0h] [rbp+220h]
  const char *v97; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v98; // [rsp+2C0h] [rbp+240h]
  const char *v99; // [rsp+2C8h] [rbp+248h]
  __int64 v100; // [rsp+2D0h] [rbp+250h]
  char **v101; // [rsp+2D8h] [rbp+258h]
  _BYTE v102[104]; // [rsp+2E0h] [rbp+260h] BYREF
  __m128i v103[18]; // [rsp+348h] [rbp+2C8h] BYREF
  __int64 v104; // [rsp+468h] [rbp+3E8h]
  __int128 v105; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v106; // [rsp+480h] [rbp+400h]
  __int128 v107; // [rsp+490h] [rbp+410h]
  __int128 v108; // [rsp+4A0h] [rbp+420h]
  __int128 v109; // [rsp+4B0h] [rbp+430h]
  __int128 v110; // [rsp+4C0h] [rbp+440h]
  int v111; // [rsp+4DCh] [rbp+45Ch] BYREF
  __int128 v112; // [rsp+4E0h] [rbp+460h] BYREF
  __int128 v113; // [rsp+4F0h] [rbp+470h]
  __int128 v114; // [rsp+500h] [rbp+480h]
  __int128 v115; // [rsp+510h] [rbp+490h]
  __int128 v116; // [rsp+520h] [rbp+4A0h]
  __int128 v117; // [rsp+530h] [rbp+4B0h]
  int v118; // [rsp+54Ch] [rbp+4CCh] BYREF
  unsigned __int64 v119; // [rsp+550h] [rbp+4D0h]
  unsigned __int64 v120; // [rsp+558h] [rbp+4D8h]
  __int64 v121; // [rsp+560h] [rbp+4E0h]
  __int64 v122; // [rsp+568h] [rbp+4E8h]
  __int64 v123; // [rsp+570h] [rbp+4F0h]
  char v124; // [rsp+57Fh] [rbp+4FFh]
  __int64 v125; // [rsp+580h] [rbp+500h]

  v125 = -2;
  v4 = sub_1401B6D70(a2);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v4;
LABEL_3:
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v5 = a2[101];
  v6 = a2[102];
  sub_141695A00(v102, v5, v6);
  if ( *(_DWORD *)v102 != 2 )
  {
    sub_14169D1D0(v102, v5, v6);
    v7 = *(_OWORD *)v102;
    if ( *(_QWORD *)v102 == -1 )
    {
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)(a1 + 16) = *((_QWORD *)&v7 + 1);
      goto LABEL_3;
    }
    v8 = *(_QWORD *)&v102[16];
    sub_140E91160(*(_QWORD *)&v102[8], *(_QWORD *)&v102[16]);
    if ( !v10 )
    {
      nullsub_1(v9);
      v14 = (void *)sub_140001650(54, 1);
      if ( !v14 )
      {
        v119 = *((_QWORD *)&v7 + 1);
        v120 = v7;
        sub_141938D2B(1, 54);
      }
      qmemcpy(v14, "relay state file is empty; original file was preserved", 54);
      *(_QWORD *)(a1 + 8) = 9;
      *(_QWORD *)(a1 + 16) = 54;
      *(_QWORD *)(a1 + 24) = v14;
      *(_QWORD *)(a1 + 32) = 54;
      *(_QWORD *)a1 = -1;
      goto LABEL_44;
    }
    *(_QWORD *)v102 = v7 >> 64;
    v120 = v7;
    *(_QWORD *)&v102[8] = v8;
    *(_OWORD *)&v102[16] = 0;
    v119 = *((_QWORD *)&v7 + 1);
    *(_QWORD *)&v102[32] = *((_QWORD *)&v7 + 1);
    *(_QWORD *)&v102[40] = v8;
    sub_14062D280(v78, v102);
    if ( v78[0] == 0xFF )
    {
      v97 = *(const char **)&v78[8];
      *(_QWORD *)v102 = &v97;
      *(_QWORD *)&v102[8] = sub_14163CE40;
      sub_1416ABFD0(&v91, &unk_141A587DB, v102);
      *(_OWORD *)v102 = v91;
      *(_QWORD *)&v102[16] = v92;
      sub_14002F910(&v97);
      v15 = *(_OWORD *)v102;
      v105 = *(_OWORD *)v102;
      v106 = *(_OWORD *)&v102[16];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v102[16];
      *(_OWORD *)(a1 + 16) = v15;
      *(_QWORD *)(a1 + 8) = 9;
      *(_QWORD *)a1 = -1;
LABEL_43:
      v7 = __PAIR128__(v119, v120);
LABEL_44:
      if ( !(_QWORD)v7 )
        return a1;
      v25 = *((_QWORD *)&v7 + 1);
      v26 = v7;
LABEL_46:
      sub_140001660(v25, v26, 1);
      return a1;
    }
    v90[0] = *(_OWORD *)v78;
    v90[1] = *(_OWORD *)&v78[16];
    v11 = sub_1416419F0(aSchemaversion_2, 13, v90);
    if ( !v11 )
    {
      v118 = 0;
      LODWORD(v13) = 0;
      goto LABEL_22;
    }
    if ( *(_BYTE *)v11 == 2 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      if ( v12 != 2 )
      {
        if ( (_DWORD)v12 == 1 )
        {
          v13 = *(_QWORD *)(v11 + 16);
        }
        else
        {
          v13 = *(_QWORD *)(v11 + 16);
          if ( v13 < 0 )
            goto LABEL_39;
        }
        if ( (int)v13 == v13 )
        {
          v118 = v13;
          if ( v13 > 16 )
          {
            *(_QWORD *)v102 = &v118;
            *(_QWORD *)&v102[8] = sub_1416BBE30;
            *(_QWORD *)&v102[16] = &unk_141A63A88;
            *(_QWORD *)&v102[24] = sub_1416BBE30;
            sub_1416ABFD0(&v76, &unk_141A63AE0, v102);
            *(_QWORD *)(a1 + 32) = v77;
            *(_OWORD *)(a1 + 16) = v76;
            *(_QWORD *)(a1 + 8) = 9;
LABEL_41:
            *(_QWORD *)a1 = -1;
LABEL_42:
            sub_14002F9D0(v90);
            goto LABEL_43;
          }
LABEL_22:
          v16 = (_BYTE *)sub_1416419F0(aRoutercommitid_1, 14, v90);
          if ( v16 && *v16 )
          {
            if ( (int)v13 < 15 )
            {
LABEL_27:
              nullsub_1(v17);
              v18 = (void *)sub_140001650(73, 1);
              if ( !v18 )
                sub_141938D2B(1, 73);
              qmemcpy(v18, "relay state router commit receipt is invalid; original file was preserved", 73);
              *(_QWORD *)(a1 + 8) = 9;
              *(_QWORD *)(a1 + 16) = 73;
              *(_QWORD *)(a1 + 24) = v18;
              *(_QWORD *)(a1 + 32) = 73;
              goto LABEL_41;
            }
            sub_140F9A9E0(v102, v16);
            sub_140FCDAF0(v78, v102);
            if ( v78[0] )
            {
              sub_14002F910(&v78[8]);
              goto LABEL_27;
            }
          }
          v19 = (_BYTE *)sub_1416419F0(aActivebyide_1, 11, v90);
          if ( v19 )
          {
            if ( *v19 == 5 )
            {
              v20 = (unsigned __int8 *)sub_140DEB9A0(v19 + 8, aCodex_4, 5);
              if ( v20 )
              {
                v21 = v20;
                v22 = *v20;
                if ( v22 == 3 )
                {
                  v122 = v21[1];
                  v121 = v21[2];
                  v28 = v21[3];
                  v21[1] = 0;
                  v21[2] = 1;
                  v21[3] = 0;
                  v124 = 1;
                  v29 = sub_140C23890(32);
                  *(_BYTE *)v29 = 3;
                  *(_QWORD *)(v29 + 8) = v122;
                  *(_QWORD *)(v29 + 16) = v121;
                  v104 = v29;
                  *(_QWORD *)(v29 + 24) = v28;
                  v123 = (__int64)v21;
                  sub_14002F9D0(v21);
                  v30 = (_QWORD *)v123;
                  *(_BYTE *)v123 = 4;
                  v30[1] = 1;
                  v30[2] = v104;
                  v30[3] = 1;
                }
                else if ( !v22 )
                {
                  v123 = (__int64)v21;
                  sub_14002F9D0(v21);
                  v23 = (_QWORD *)v123;
                  *(_BYTE *)v123 = 4;
                  v23[1] = 0;
                  v23[2] = 8;
                  v23[3] = 0;
                }
              }
            }
          }
          sub_140F9A9E0(&v112, v90);
          sub_14042E3D0(v102, &v112, aRelaystate, 10, &off_141A6C388, 10);
          v31 = *(_QWORD *)v102;
          if ( *(_QWORD *)v102 == -1 )
          {
            sub_140EBCE00(&v112, *(_QWORD *)&v102[8]);
            v110 = v117;
            v109 = v116;
            v108 = v115;
            v91 = v112;
            v92 = v113;
            v93 = v114;
            v94 = v115;
            v95 = v116;
            v96 = v117;
            *(_OWORD *)(a1 + 88) = v117;
            *(_OWORD *)(a1 + 72) = v95;
            v35 = v91;
            v36 = v92;
            v37 = v93;
            *(_OWORD *)(a1 + 56) = v94;
            *(_OWORD *)(a1 + 40) = v37;
            *(_OWORD *)(a1 + 24) = v36;
            *(_OWORD *)(a1 + 8) = v35;
            goto LABEL_41;
          }
          v110 = *(_OWORD *)&v102[88];
          v109 = *(_OWORD *)&v102[72];
          v108 = *(_OWORD *)&v102[56];
          v107 = *(_OWORD *)&v102[40];
          v106 = *(_OWORD *)&v102[24];
          v105 = *(_OWORD *)&v102[8];
          sub_1418F44E0(&v83, v103, 0x118u);
          v96 = v110;
          v95 = v109;
          v94 = v108;
          v93 = v107;
          v92 = v106;
          v91 = v105;
          *(_OWORD *)&v78[8] = v105;
          *(_OWORD *)&v78[24] = v106;
          v79 = v107;
          v80 = v108;
          v81 = v109;
          v82 = v110;
          *(_QWORD *)v78 = v31;
          sub_140F70370(v102, v78);
          if ( *(_DWORD *)v102 != -1 )
          {
            *(_OWORD *)(a1 + 88) = *(_OWORD *)&v102[80];
            *(_OWORD *)(a1 + 72) = *(_OWORD *)&v102[64];
            v32 = *(_OWORD *)v102;
            v33 = *(_OWORD *)&v102[16];
            v34 = *(_OWORD *)&v102[32];
            *(_OWORD *)(a1 + 56) = *(_OWORD *)&v102[48];
            *(_OWORD *)(a1 + 40) = v34;
            *(_OWORD *)(a1 + 24) = v33;
            *(_OWORD *)(a1 + 8) = v32;
LABEL_55:
            *(_QWORD *)a1 = -1;
LABEL_56:
            sub_14040E150(v78);
            goto LABEL_42;
          }
          sub_140F70EE0(v102, *(_QWORD *)&v78[8], *(_QWORD *)&v78[16]);
          v38 = *(_QWORD *)v102;
          v112 = *(_OWORD *)&v102[8];
          *(_QWORD *)&v113 = *(_QWORD *)&v102[24];
          if ( *(_QWORD *)v102 != -1 )
          {
            v39 = *(_OWORD *)&v102[32];
            v40 = *(_OWORD *)&v102[48];
            v41 = *(_OWORD *)&v102[64];
            *(_OWORD *)(a1 + 88) = *(_OWORD *)&v102[80];
            *(_OWORD *)(a1 + 72) = v41;
            *(_OWORD *)(a1 + 56) = v40;
            *(_OWORD *)(a1 + 40) = v39;
            *(_QWORD *)(a1 + 32) = v113;
            *(_OWORD *)(a1 + 16) = v112;
            *(_QWORD *)(a1 + 8) = v38;
            goto LABEL_55;
          }
          v88 = v112;
          v89 = v113;
          v123 = v113;
          if ( (_QWORD)v113 )
          {
            sub_140F72AB0((unsigned int)v102, a2[97], a2[98], v119, v8);
            v42 = *(_OWORD *)v102;
            v43 = *(_OWORD *)&v102[16];
            if ( *(_QWORD *)v102 != -1 )
            {
              v44 = *(_QWORD *)&v102[32];
              *(_QWORD *)(a1 + 96) = *(_QWORD *)&v102[88];
              *(_OWORD *)(a1 + 80) = *(_OWORD *)&v102[72];
              *(_OWORD *)(a1 + 64) = *(_OWORD *)&v102[56];
              *(_OWORD *)(a1 + 48) = *(_OWORD *)&v102[40];
              *(_QWORD *)(a1 + 16) = *((_QWORD *)&v42 + 1);
              *(_OWORD *)(a1 + 24) = v43;
              *(_QWORD *)(a1 + 40) = v44;
              *(_QWORD *)(a1 + 8) = v42;
              *(_QWORD *)a1 = -1;
LABEL_103:
              sub_1401911B0(&v88);
              goto LABEL_56;
            }
            v122 = *(_QWORD *)&v102[16];
            v121 = *(_QWORD *)&v102[8];
            sub_140F71C80(a2, v78, *((const __m128i **)&v88 + 1), v123);
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              *(_QWORD *)&v91 = v123;
              *(_QWORD *)&v105 = v122;
              *((_QWORD *)&v105 + 1) = *((_QWORD *)&v43 + 1);
              *(_QWORD *)&v112 = &v91;
              *((_QWORD *)&v112 + 1) = sub_1416BCB10;
              *(_QWORD *)&v113 = &v105;
              *((_QWORD *)&v113 + 1) = sub_14169F630;
              *(_QWORD *)v102 = aCodexmateLibCo_47;
              *(_QWORD *)&v102[8] = 35;
              *(_QWORD *)&v102[16] = aCodexmateLibCo_47;
              *(_QWORD *)&v102[24] = 35;
              *(_QWORD *)&v102[32] = &off_141A63878;
              sub_140BAD520(&unk_141A63831, &v112, 2, v102);
            }
            if ( v121 )
              sub_140001660(v122, v121, 1);
          }
          if ( (int)v13 >= 10 )
          {
            if ( (unsigned int)v13 >= 0xD )
            {
LABEL_72:
              v45 = *(_QWORD *)&v78[16];
              v46 = sub_140893A90(&off_141A56FA0);
              v48 = v47;
              LOBYTE(v49) = 1;
              sub_1402957F0(v102, 16, v45, v49);
              v92 = *(_OWORD *)&v102[16];
              v91 = *(_OWORD *)v102;
              *(_QWORD *)&v93 = v46;
              *((_QWORD *)&v93 + 1) = v48;
              v50 = *(_QWORD *)&v78[8];
              v122 = v45;
              v51 = *(_QWORD *)&v78[8] + (v45 << 8);
              v121 = *(_QWORD *)&v78[8];
              while ( v50 != v51 )
              {
                v52 = v50;
                sub_14102D940(&v105, *(_QWORD *)(v50 + 8), *(_QWORD *)(v50 + 16));
                if ( (_QWORD)v105 != -1 )
                {
                  *(_QWORD *)&v113 = v106;
                  v112 = v105;
                  sub_140EBCE90(v102, v52, &v112);
LABEL_100:
                  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v102[80];
                  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v102[64];
                  v65 = *(_OWORD *)v102;
                  v66 = *(_OWORD *)&v102[16];
                  v67 = *(_OWORD *)&v102[32];
                  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v102[48];
                  *(_OWORD *)(a1 + 40) = v67;
                  *(_OWORD *)(a1 + 24) = v66;
                  *(_OWORD *)(a1 + 8) = v65;
LABEL_101:
                  *(_QWORD *)a1 = -1;
LABEL_102:
                  sub_14036EE30(&v91);
                  goto LABEL_103;
                }
                v53 = sub_1403AC620(&v91, *(_QWORD *)(v52 + 8), *(_QWORD *)(v52 + 16));
                v50 = v52 + 256;
                if ( v53 )
                {
                  *(_QWORD *)v102 = v52;
                  *(_QWORD *)&v102[8] = sub_1400015F0;
                  sub_1416ABFD0(&v74, &unk_141A63625, v102);
                  *(_QWORD *)(a1 + 32) = v75;
                  *(_OWORD *)(a1 + 16) = v74;
                  *(_QWORD *)(a1 + 8) = 9;
                  goto LABEL_101;
                }
              }
              if ( (int)v13 < 14 )
              {
                sub_14101F8A0((__m128i *)v102, v121, v122, *(__int64 *)&v78[32], v79, *((__int64 *)&v84 + 1), v85, v87);
                sub_140025C50(&v84);
                v85 = *(_QWORD *)&v102[16];
                v84 = *(_OWORD *)v102;
              }
              sub_1410217C0(v102, *((_QWORD *)&v84 + 1), v85);
              if ( *(_DWORD *)v102 != -1 )
                goto LABEL_100;
              if ( (int)v13 > 1 )
              {
                if ( v86 == 16 )
                {
LABEL_113:
                  v68 = 0;
                  if ( !v123 )
                    goto LABEL_114;
                  sub_140F74B40(v102, a2, v78);
                  if ( *(_DWORD *)v102 != -1 )
                    goto LABEL_100;
LABEL_121:
                  v69 = *((_QWORD *)&v88 + 1);
                  v70 = *((_QWORD *)&v88 + 1) + (v123 << 6);
                  while ( v69 != v70 )
                  {
                    v71 = v69;
                    v69 += 64;
                    if ( *(_BYTE *)(v71 + 56) == 1 )
                      sub_14034A370((__int64)a2, *(_QWORD *)(v71 + 8), *(_QWORD *)(v71 + 16));
                  }
LABEL_115:
                  sub_1418F44E0((__m128i *)a1, (const __m128i *)v78, 0x180u);
                  sub_14036EE30(&v91);
                  sub_1401911B0(&v88);
                  sub_14002F9D0(v90);
                  v26 = v120;
                  v25 = v119;
                  if ( !v120 )
                    return a1;
                  goto LABEL_46;
                }
                v111 = v86;
                v86 = 16;
                sub_140F74B40(&v112, a2, v78);
                if ( (_DWORD)v112 == -1 )
                {
                  if ( v123 )
                    goto LABEL_121;
                  goto LABEL_113;
                }
                *(_OWORD *)&v102[80] = v117;
                *(_OWORD *)&v102[64] = v116;
                *(_OWORD *)&v102[48] = v115;
                *(_OWORD *)&v102[32] = v114;
                *(_OWORD *)&v102[16] = v113;
                *(_OWORD *)v102 = v112;
                if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                {
                  *(_QWORD *)&v105 = &v111;
                  *((_QWORD *)&v105 + 1) = sub_1416BBE30;
                  *(_QWORD *)&v106 = &unk_141A63A88;
                  *((_QWORD *)&v106 + 1) = sub_1416BBE30;
                  *(_QWORD *)&v107 = v102;
                  *((_QWORD *)&v107 + 1) = sub_14104A7D0;
                  v97 = aCodexmateLibCo_47;
                  v98 = 35;
                  v99 = aCodexmateLibCo_47;
                  v100 = 35;
                  v101 = &off_141A63AC8;
                  sub_140BAD520(&unk_141A63A8C, &v105, 2, &v97);
                }
              }
              else
              {
                v54 = sub_1416419F0(aProviders_1, 9, v90);
                if ( v54 && *(_BYTE *)v54 == 4 )
                {
                  v55 = *(_QWORD *)(v54 + 16);
                  v121 = v55 + 32LL * *(_QWORD *)(v54 + 24);
                  v56 = 0;
                  while ( v55 != v121 )
                  {
                    v57 = v56;
                    v58 = *(_QWORD *)&v78[16];
                    if ( v56 >= *(_QWORD *)&v78[16] )
                    {
                      v122 = 1;
                      v59 = 0;
                    }
                    else
                    {
                      v122 = *(_QWORD *)(*(_QWORD *)&v78[8] + (v56 << 8) + 8);
                      v59 = *(_QWORD *)(*(_QWORD *)&v78[8] + (v56 << 8) + 16);
                    }
                    v60 = sub_1416419F0(aApikey_6, 6, v55);
                    v55 += 32;
                    ++v56;
                    if ( v60 )
                    {
                      v61 = *(_BYTE *)v60 == 3 ? *(_QWORD *)(v60 + 24) : 0LL;
                      if ( v59 && v61 )
                      {
                        v62 = 1;
                        if ( *(_BYTE *)v60 == 3 )
                          v62 = *(_QWORD *)(v60 + 16);
                        sub_1403477B0((unsigned int)&v112, (_DWORD)a2, v122, v59, v62, v61);
                        if ( (_QWORD)v112 != -1 )
                        {
                          *(_QWORD *)&v102[16] = v113;
                          *(_OWORD *)v102 = v112;
                          *(_QWORD *)&v105 = v102;
                          *((_QWORD *)&v105 + 1) = sub_1400015F0;
                          sub_1416ABFD0(&v72, &unk_141A639A1, &v105);
                          *(_QWORD *)(a1 + 32) = v73;
                          *(_OWORD *)(a1 + 16) = v72;
                          *(_QWORD *)(a1 + 8) = 10;
                          *(_QWORD *)a1 = -1;
                          if ( *(_QWORD *)v102 )
                            sub_140001660(*(_QWORD *)&v102[8], *(_QWORD *)v102, 1);
                          goto LABEL_102;
                        }
                        if ( v57 < v58 )
                        {
                          v63 = *(_QWORD *)&v78[8];
                          v64 = v57 << 8;
                          *(_BYTE *)(*(_QWORD *)&v78[8] + v64 + 252) = 1;
                          *(_QWORD *)(v63 + v64 + 88) = 0;
                        }
                      }
                    }
                  }
                }
                v86 = 16;
                sub_140F74B40(&v112, a2, v78);
                if ( (_DWORD)v112 == -1 )
                {
                  v68 = v123 != 0;
LABEL_114:
                  if ( !v68 )
                    goto LABEL_115;
                  goto LABEL_121;
                }
                *(_OWORD *)&v102[80] = v117;
                *(_OWORD *)&v102[64] = v116;
                *(_OWORD *)&v102[48] = v115;
                *(_OWORD *)&v102[32] = v114;
                *(_OWORD *)&v102[16] = v113;
                *(_OWORD *)v102 = v112;
                if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                {
                  v97 = v102;
                  v98 = (__int64)sub_14104A7D0;
                  *(_QWORD *)&v105 = aCodexmateLibCo_47;
                  *((_QWORD *)&v105 + 1) = 35;
                  *(_QWORD *)&v106 = aCodexmateLibCo_47;
                  *((_QWORD *)&v106 + 1) = 35;
                  *(_QWORD *)&v107 = &off_141A63A70;
                  sub_140BAD520(&unk_141A63A39, &v97, 2, &v105);
                }
              }
              sub_140E97700(v102);
              goto LABEL_113;
            }
          }
          else
          {
            *(_QWORD *)&v105 = sub_140F72580(*(_QWORD *)&v78[8], *(_QWORD *)&v78[16]);
            if ( (_QWORD)v105 && *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              *(_QWORD *)&v112 = &v105;
              *((_QWORD *)&v112 + 1) = sub_1416BCB10;
              *(_QWORD *)v102 = aCodexmateLibCo_47;
              *(_QWORD *)&v102[8] = 35;
              *(_QWORD *)&v102[16] = aCodexmateLibCo_47;
              *(_QWORD *)&v102[24] = 35;
              *(_QWORD *)&v102[32] = &off_141A638F8;
              sub_140BAD520(&unk_141A63890, &v112, 2, v102);
            }
          }
          *(_QWORD *)&v105 = sub_140F74BC0(*(_QWORD *)&v78[8], *(_QWORD *)&v78[16]);
          if ( (_QWORD)v105 && *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            *(_QWORD *)&v112 = &v105;
            *((_QWORD *)&v112 + 1) = sub_1416BCB10;
            *(_QWORD *)v102 = aCodexmateLibCo_47;
            *(_QWORD *)&v102[8] = 35;
            *(_QWORD *)&v102[16] = aCodexmateLibCo_47;
            *(_QWORD *)&v102[24] = 35;
            *(_QWORD *)&v102[32] = &off_141A63980;
            sub_140BAD520(&unk_141A63910, &v112, 2, v102);
          }
          goto LABEL_72;
        }
      }
    }
LABEL_39:
    nullsub_1(v12);
    v24 = (void *)sub_140001650(79, 1);
    if ( !v24 )
      sub_141938D2B(1, 79);
    qmemcpy(v24, "relay state schemaVersion must be a 32-bit integer; original file was preserved", 79);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 79;
    *(_QWORD *)(a1 + 24) = v24;
    *(_QWORD *)(a1 + 32) = 79;
    goto LABEL_41;
  }
  if ( (v102[8] & 3u) - 2 >= 2 && (v102[8] & 3) != 0 )
  {
    --*(_QWORD *)&v102[8];
    v102[0] = 3;
    sub_1416BCB00(&v102[8]);
  }
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v103[3] = 0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 8;
  *(_QWORD *)(a1 + 32) = 8;
  *(_QWORD *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = -1;
  *(_WORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 122) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 8;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = -1;
  sub_1418F44E0((__m128i *)(a1 + 160), (const __m128i *)v102, 0xA8u);
  *(_WORD *)(a1 + 352) = -2;
  *(_DWORD *)(a1 + 360) = 16;
  *(_WORD *)(a1 + 364) = 0;
  *(_WORD *)(a1 + 382) = 256;
  return a1;
}
