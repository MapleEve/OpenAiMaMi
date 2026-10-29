// win 1.2.7 latest-exe | module src/core/skills.rs | ea 0x140d412c0 | successor of pre-update 0x140ee1b50 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
double __fastcall sub_140D412C0(
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rax
  __int128 v24; // kr00_16
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // r13
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  _BYTE *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  int v49; // edi
  __int64 v50; // r14
  __int64 v51; // rbx
  __int128 v52; // xmm6
  __int64 v53; // r15
  double result; // xmm0_8
  __int128 v55; // [rsp+28h] [rbp-58h] BYREF
  __int128 v56; // [rsp+38h] [rbp-48h] BYREF
  __int64 v57; // [rsp+48h] [rbp-38h]
  __int64 v58; // [rsp+50h] [rbp-30h] BYREF
  __int64 v59; // [rsp+58h] [rbp-28h]
  __int64 v60; // [rsp+60h] [rbp-20h]
  __int64 v61; // [rsp+68h] [rbp-18h] BYREF
  __int64 v62; // [rsp+70h] [rbp-10h]
  __int64 v63; // [rsp+78h] [rbp-8h]
  __int64 v64; // [rsp+88h] [rbp+8h] BYREF
  __int128 v65; // [rsp+90h] [rbp+10h] BYREF
  __int64 v66; // [rsp+A0h] [rbp+20h]
  __int64 v67; // [rsp+A8h] [rbp+28h]
  __int128 v68; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v69; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v70; // [rsp+D0h] [rbp+50h]
  __int128 v71; // [rsp+E0h] [rbp+60h]
  __int128 v72; // [rsp+F0h] [rbp+70h]
  __int128 v73; // [rsp+100h] [rbp+80h]
  __int128 v74; // [rsp+110h] [rbp+90h] BYREF
  __int128 v75; // [rsp+120h] [rbp+A0h]
  __int128 v76; // [rsp+130h] [rbp+B0h]
  __int64 v77; // [rsp+140h] [rbp+C0h]
  __int128 v78; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v79; // [rsp+158h] [rbp+D8h]
  _OWORD v80[2]; // [rsp+160h] [rbp+E0h] BYREF
  char v81; // [rsp+180h] [rbp+100h]
  __int64 v82; // [rsp+188h] [rbp+108h] BYREF
  __int64 v83; // [rsp+190h] [rbp+110h]
  __int64 v84; // [rsp+198h] [rbp+118h]
  __int64 v85; // [rsp+1A8h] [rbp+128h]
  _BYTE v86[104]; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v87; // [rsp+218h] [rbp+198h]
  _OWORD v88[4]; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v89; // [rsp+268h] [rbp+1E8h]
  __int128 v90; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v91; // [rsp+280h] [rbp+200h]
  __int64 v92; // [rsp+288h] [rbp+208h] BYREF
  __int64 v93; // [rsp+290h] [rbp+210h]
  __int64 v94; // [rsp+298h] [rbp+218h]
  __int64 v95; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v96; // [rsp+2A8h] [rbp+228h]
  __int64 v97; // [rsp+2B0h] [rbp+230h]
  __int64 v98; // [rsp+2B8h] [rbp+238h]
  __int64 v99; // [rsp+2C0h] [rbp+240h]
  __int64 v100; // [rsp+2C8h] [rbp+248h]
  __int64 v101; // [rsp+2D0h] [rbp+250h]
  __int64 v102; // [rsp+2D8h] [rbp+258h]
  __int64 v103; // [rsp+2E0h] [rbp+260h]
  __int64 v104; // [rsp+2E8h] [rbp+268h]
  __int64 v105; // [rsp+2F0h] [rbp+270h]
  __int16 v106; // [rsp+2F8h] [rbp+278h] BYREF
  _BYTE *v107; // [rsp+300h] [rbp+280h]
  __int64 v108; // [rsp+308h] [rbp+288h]
  __int128 v109; // [rsp+310h] [rbp+290h] BYREF
  __int64 v110; // [rsp+320h] [rbp+2A0h]
  char v111; // [rsp+32Fh] [rbp+2AFh] BYREF
  _BYTE v112[24]; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v113; // [rsp+348h] [rbp+2C8h]
  char v114; // [rsp+350h] [rbp+2D0h]
  __int64 v115; // [rsp+360h] [rbp+2E0h]
  __int64 v116; // [rsp+368h] [rbp+2E8h]
  __int64 v117; // [rsp+370h] [rbp+2F0h]
  char v118; // [rsp+37Fh] [rbp+2FFh]
  char v119; // [rsp+380h] [rbp+300h]
  char v120; // [rsp+381h] [rbp+301h]
  char v121; // [rsp+382h] [rbp+302h]
  char v122; // [rsp+383h] [rbp+303h]
  char v123; // [rsp+384h] [rbp+304h]
  char v124; // [rsp+385h] [rbp+305h]
  char v125; // [rsp+386h] [rbp+306h]
  char v126; // [rsp+387h] [rbp+307h]
  __int64 v127; // [rsp+388h] [rbp+308h]

  v127 = -2;
  v8 = (int)a4;
  v55 = a8;
  sub_1416B18A0((unsigned int)v112, a2, a3, (unsigned int)&unk_141A909F3, 8);
  v117 = *(_QWORD *)&v112[8];
  sub_140D3CCE0((unsigned int)v86, *(_DWORD *)&v112[8], *(_DWORD *)&v112[16], v8, a5);
  if ( *(_QWORD *)v86 == 2 )
  {
    nullsub_1(v13, v12);
    v14 = (void *)sub_140001650(20, 1);
    if ( !v14 )
      sub_14196B2DB(1, 20);
    *(_QWORD *)&v15 = 0x2064696C61766E49LL;
    qmemcpy(v14, "Invalid skill source", 20);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 20;
    *(_QWORD *)(a1 + 24) = v14;
    *(_QWORD *)(a1 + 32) = 20;
    *(_QWORD *)a1 = -1;
    if ( *(_QWORD *)v112 )
      *(double *)&v15 = sub_140001660(v117, *(_QWORD *)v112, 1);
    goto LABEL_95;
  }
  v16 = a7;
  v17 = *(_QWORD *)&v86[32];
  v68 = *(_OWORD *)&v86[40];
  v69 = *(_OWORD *)&v86[56];
  v70 = *(_OWORD *)&v86[72];
  v71 = *(_OWORD *)&v86[88];
  v72 = v87;
  v73 = v88[0];
  v74 = v88[1];
  v75 = v88[2];
  v76 = v88[3];
  v77 = v89;
  v108 = *(_QWORD *)&v86[16];
  *(_QWORD *)&v15 = *(_QWORD *)&v86[8];
  v64 = *(_QWORD *)v86;
  v65 = *(_OWORD *)&v86[8];
  v102 = *(_QWORD *)&v86[24];
  v66 = *(_QWORD *)&v86[24];
  v67 = *(_QWORD *)&v86[32];
  if ( *(_QWORD *)v112 )
    *(double *)&v15 = sub_140001660(v117, *(_QWORD *)v112, 1);
  v86[0] = 1;
  v126 = 1;
  v18 = sub_1416B9760(v86, a6, a7);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)a1 = -1;
LABEL_47:
    sub_1402922A0(&v64);
    goto LABEL_95;
  }
  v126 = 1;
  *(_DWORD *)v112 = sub_1416B2E50(v20, v19, v21);
  *(_DWORD *)&v112[4] = v22;
  v126 = 1;
  sub_1416B2E00(v86, v112, 3577643008LL, 27111902);
  if ( v86[0] )
    v23 = 0;
  else
    v23 = *(_QWORD *)&v86[8];
  v95 = v23;
  v24 = v70;
  *(_QWORD *)v86 = 0;
  *(_QWORD *)&v86[8] = 1;
  *(_QWORD *)&v86[16] = 0;
  if ( *((_QWORD *)&v70 + 1) )
  {
    sub_141939070((unsigned int)v86, 0, (*((_QWORD *)&v70 + 1) >> 2) - (((BYTE8(v70) & 3) == 0) - 1), 1, 1);
    v16 = a7;
    v24 = v70;
  }
  sub_14085E1D0(v24, v24 + *((_QWORD *)&v24 + 1), v86);
  v116 = *(_QWORD *)&v86[8];
  v117 = *(_QWORD *)v86;
  v25 = sub_1408FE720(*(_QWORD *)&v86[8], *(_QWORD *)&v86[16]);
  v28 = v26;
  if ( v26 )
  {
    if ( v26 < 0 )
    {
      v29 = 0;
      goto LABEL_17;
    }
    v32 = v25;
    v85 = v17;
    nullsub_1(v27, v26);
    v29 = 1;
    v33 = sub_140001650(v28, 1);
    if ( !v33 )
LABEL_17:
      sub_14196B2DB(v29, v28);
    v31 = v33;
    sub_1419234B0(v33, v32, v28);
    v16 = a7;
  }
  else
  {
    v85 = v17;
    nullsub_1(v27, 0);
    v28 = 5;
    v30 = sub_140001650(5, 1);
    if ( !v30 )
      sub_14196B2DB(1, 5);
    v31 = v30;
    *(_BYTE *)(v30 + 4) = 108;
    *(_DWORD *)v30 = 1818848115;
  }
  v92 = v28;
  v93 = v31;
  v94 = v28;
  if ( v117 )
    sub_140001660(v116, v117, 1);
  v125 = 1;
  sub_141597890(v80);
  *(_QWORD *)v112 = 0;
  *(_QWORD *)&v112[8] = 1;
  *(_QWORD *)&v112[16] = 0;
  *(_QWORD *)&v86[16] = 1610612768;
  *(_QWORD *)v86 = v112;
  *(_QWORD *)&v86[8] = &off_141A997B8;
  if ( (unsigned __int8)sub_1415989F0(v80, v86) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_10,
      55,
      (unsigned int)&v111,
      (unsigned int)&unk_141A93F80,
      (__int64)&off_141A99870);
  v116 = *(_QWORD *)&v112[8];
  v117 = *(_QWORD *)v112;
  if ( *(_QWORD *)&v112[16] > 8u )
  {
    if ( *(char *)(*(_QWORD *)&v112[8] + 8LL) < -64 )
LABEL_27:
      sub_14196B4F0(*(_DWORD *)&v112[8], *(_DWORD *)&v112[16], 0, 8, (__int64)&off_141A96C30);
  }
  else if ( *(_QWORD *)&v112[16] != 8 )
  {
    goto LABEL_27;
  }
  v82 = *(_QWORD *)&v112[8];
  v83 = 8;
  *(_QWORD *)v86 = &v95;
  *(_QWORD *)&v86[8] = sub_1416EBBB0;
  *(_QWORD *)&v86[16] = &v92;
  *(_QWORD *)&v86[24] = sub_1400015F0;
  *(_QWORD *)&v86[32] = &v55;
  *(_QWORD *)&v86[40] = sub_140191200;
  *(_QWORD *)&v86[48] = &v82;
  *(_QWORD *)&v86[56] = sub_140191200;
  sub_1416DAFA0(v112, &unk_141A96C48, v86);
  if ( v117 )
    sub_140001660(v116, v117, 1);
  v90 = *(_OWORD *)v112;
  v91 = *(_QWORD *)&v112[16];
  v119 = 1;
  sub_1416B18A0((unsigned int)&v61, a6, v16, *(_DWORD *)&v112[8], *(__int64 *)&v112[16]);
  v124 = 1;
  sub_141597890(v86);
  *(_OWORD *)v112 = *(_OWORD *)v86;
  *(_QWORD *)v86 = v112;
  *(_QWORD *)&v86[8] = sub_1402230B0;
  v124 = 1;
  sub_1416DAFA0(&v58, &unk_141A96C53, v86);
  v117 = v59;
  sub_1416B18A0((unsigned int)v86, a6, v16, v59, v60);
  if ( v58 )
    sub_140001660(v117, v58, 1);
  *(_QWORD *)&v15 = *(_QWORD *)v86;
  v80[1] = *(_OWORD *)&v86[16];
  v80[0] = *(_OWORD *)v86;
  v81 = 0;
  v34 = *(_QWORD *)&v86[8];
  v35 = *(_QWORD *)&v86[16];
  v118 = 1;
  sub_1416B18A0((unsigned int)&v82, *(_DWORD *)&v86[8], *(_DWORD *)&v86[16], (unsigned int)aSkill, 5);
  v86[0] = 1;
  v123 = 1;
  v36 = sub_1416B9760(v86, v34, v35);
  if ( v36 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v36;
    goto LABEL_37;
  }
  v37 = v83;
  v123 = 1;
  sub_140D394A0((unsigned int)v86, a2, a3, v83, v84);
  if ( *(_DWORD *)v86 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v86[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v86[64];
    v15 = *(_OWORD *)v86;
    v38 = *(_OWORD *)&v86[16];
    v39 = *(_OWORD *)&v86[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v86[48];
    *(_OWORD *)(a1 + 40) = v39;
    *(_OWORD *)(a1 + 24) = v38;
    *(_OWORD *)(a1 + 8) = v15;
LABEL_37:
    *(_QWORD *)a1 = -1;
    v117 = v34;
    v40 = v82;
    if ( !v82 )
    {
LABEL_39:
      sub_140D82AD0(v80);
      if ( *(_QWORD *)&v80[0] )
        *(double *)&v15 = sub_140001660(v117, *(_QWORD *)&v80[0], 1);
      if ( v61 )
        *(double *)&v15 = sub_140001660(v62, v61, 1);
      if ( (_QWORD)v90 )
        *(double *)&v15 = sub_140001660(*((_QWORD *)&v90 + 1), v90, 1);
      if ( v92 )
        *(double *)&v15 = sub_140001660(v93, v92, 1);
      goto LABEL_47;
    }
LABEL_38:
    *(double *)&v15 = sub_140001660(v83, v40, 1);
    goto LABEL_39;
  }
  v123 = 1;
  sub_1416DB410(&v56, &v90);
  sub_1416DB410(&v78, (char *)&v65 + 8);
  sub_1416DB410(&v109, &v68);
  v104 = v74;
  if ( (_QWORD)v74 == -1 )
  {
    v116 = -1;
  }
  else
  {
    sub_1416DB410(v112, &v74);
    v116 = *(_QWORD *)v112;
    v115 = *(_QWORD *)&v112[8];
    v16 = *(_QWORD *)&v112[16];
  }
  sub_1416DB410(v112, (char *)&v69 + 8);
  *(_QWORD *)&v86[16] = v57;
  *(_OWORD *)v86 = v56;
  *(_OWORD *)&v86[24] = v78;
  *(_QWORD *)&v86[40] = v79;
  *(_OWORD *)&v86[48] = v109;
  *(_QWORD *)&v86[64] = v110;
  *(_QWORD *)&v86[96] = v116;
  *(_QWORD *)&v87 = v115;
  *((_QWORD *)&v87 + 1) = v16;
  *(_QWORD *)&v15 = *(_QWORD *)v112;
  *(_OWORD *)&v86[72] = *(_OWORD *)v112;
  *(_QWORD *)&v86[88] = *(_QWORD *)&v112[16];
  *(_QWORD *)&v88[0] = v95;
  nullsub_1(v42, v41);
  v43 = (_BYTE *)sub_140001650(128, 1);
  if ( !v43 )
  {
    v122 = 1;
    sub_14196B2DB(1, 128);
  }
  *(_QWORD *)&v109 = 128;
  *((_QWORD *)&v109 + 1) = v43;
  *(_QWORD *)v112 = &v109;
  *(_QWORD *)&v112[8] = asc_141A907A8;
  *(_QWORD *)&v112[16] = 2;
  v113 = 1;
  v114 = 0;
  *v43 = 123;
  v110 = 1;
  v106 = 256;
  v107 = v112;
  v44 = sub_14079DAC0(&v106, aBackupid, 8, v86);
  if ( v44 )
    goto LABEL_57;
  if ( (_BYTE)v106 )
    goto LABEL_55;
  v44 = sub_14079DAC0(&v106, aSkillid, 7, &v86[24]);
  if ( v44 )
    goto LABEL_57;
  if ( (_BYTE)v106 )
    goto LABEL_55;
  v44 = sub_14079DAC0(&v106, aName_10, 4, &v86[48]);
  if ( v44 )
    goto LABEL_57;
  if ( (_BYTE)v106 )
    goto LABEL_55;
  v44 = sub_14079B8D0(&v106, aTitle_6, 5, &v86[96]);
  if ( v44 )
    goto LABEL_57;
  if ( (_BYTE)v106 )
    goto LABEL_55;
  v46 = sub_14079DAC0(&v106, aRelativepath_0, 12, &v86[72]);
  v116 = v37;
  if ( v46 )
  {
LABEL_68:
    v44 = v46;
    goto LABEL_57;
  }
  if ( (_BYTE)v106 )
  {
LABEL_55:
    v44 = sub_141967030();
LABEL_57:
    if ( (_QWORD)v109 )
      *(double *)&v15 = sub_140001660(*((_QWORD *)&v109 + 1), v109, 1);
    v45 = 3;
LABEL_60:
    *(_QWORD *)(a1 + 8) = v45;
    *(_QWORD *)(a1 + 16) = v44;
    *(_QWORD *)a1 = -1;
    sub_140CB9A30(v86);
    v117 = v34;
    v40 = v82;
    if ( !v82 )
      goto LABEL_39;
    goto LABEL_38;
  }
  v46 = sub_1407A1A50(&v106, aCreatedat_2, 9, v88);
  if ( v46 )
    goto LABEL_68;
  sub_140766E00(&v106);
  v115 = *((_QWORD *)&v109 + 1);
  v96 = v109;
  if ( (_QWORD)v109 == -1 )
  {
    v45 = 3;
    v44 = v115;
    goto LABEL_60;
  }
  v47 = v110;
  v121 = 1;
  v120 = 1;
  sub_1416B18A0((unsigned int)v112, v34, v35, (unsigned int)&unk_141A9691C, 13);
  *(_QWORD *)&v109 = v96;
  *((_QWORD *)&v109 + 1) = v115;
  v110 = v47;
  v121 = 0;
  v120 = 1;
  v48 = sub_14077ADA0(v112, &v109);
  v45 = 2;
  if ( v48 || (v49 = v63, v121 = 0, v120 = 1, v97 = v62, (v48 = sub_1416C4800(v34, v35, v62, v63)) != 0) )
  {
    v44 = v48;
    goto LABEL_60;
  }
  v81 = 1;
  v98 = *((_QWORD *)&v90 + 1);
  v117 = v90;
  v50 = v91;
  v99 = *((_QWORD *)&v68 + 1);
  v105 = v68;
  v100 = *((_QWORD *)&v74 + 1);
  v51 = v75;
  v103 = *((_QWORD *)&v69 + 1);
  v52 = v69;
  v53 = *((_QWORD *)&v70 + 1);
  v101 = v70;
  sub_1416B18A0((unsigned int)v112, v97, v49, (unsigned int)aSkill, 5);
  v115 = *(_QWORD *)&v112[8];
  v78 = *(_OWORD *)&v112[8];
  sub_140D82310(&v109, &v78);
  *(_QWORD *)(a1 + 112) = v110;
  *(_QWORD *)&v15 = v109;
  *(_OWORD *)(a1 + 96) = v109;
  *(_QWORD *)a1 = v117;
  *(_QWORD *)(a1 + 8) = v98;
  *(_QWORD *)(a1 + 16) = v50;
  *(_QWORD *)(a1 + 24) = v108;
  *(_QWORD *)(a1 + 32) = v102;
  *(_QWORD *)(a1 + 40) = v85;
  *(_QWORD *)(a1 + 48) = v105;
  *(_QWORD *)(a1 + 56) = v99;
  *(_OWORD *)(a1 + 64) = v52;
  *(_QWORD *)(a1 + 80) = v101;
  *(_QWORD *)(a1 + 88) = v53;
  *(_QWORD *)(a1 + 120) = v104;
  *(_QWORD *)(a1 + 128) = v100;
  *(_QWORD *)(a1 + 136) = v51;
  *(_QWORD *)(a1 + 144) = v95;
  sub_140CB9A30(v86);
  if ( v82 )
    *(double *)&v15 = sub_140001660(v116, v82, 1);
  sub_140CB99A0(v80);
  if ( v61 )
    *(double *)&v15 = sub_140001660(v97, v61, 1);
  if ( v92 )
    *(double *)&v15 = sub_140001660(v93, v92, 1);
  if ( *((_QWORD *)&v75 + 1) != -1 && *((_QWORD *)&v75 + 1) )
    *(double *)&v15 = sub_140001660(v76, *((_QWORD *)&v75 + 1), 1);
  if ( (_QWORD)v71 )
    *(double *)&v15 = sub_140001660(*((_QWORD *)&v71 + 1), v71, 1);
  if ( *((_QWORD *)&v72 + 1) )
    *(double *)&v15 = sub_140001660(v73, *((_QWORD *)&v72 + 1), 1);
  if ( *(_QWORD *)v112 )
    *(double *)&v15 = sub_140001660(v115, *(_QWORD *)v112, 1);
LABEL_95:
  *(_QWORD *)&result = v15;
  return result;
}
