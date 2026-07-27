// module: codexmate_lib/core/skills
// addr: 0x140ad8b50
// name: backup_skill_directory_0
// win 1.2.1 | module src/core/skills.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::skills::backup_skill_directory | 跨平台字符串签名匹配(名↔函数一致)
void *__fastcall backup_skill_directory_0(
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
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  __int128 v19; // kr00_16
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r13
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v36; // rdx
  __int64 v37; // rcx
  _BYTE *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // edi
  __int64 v45; // r14
  __int64 v46; // rbx
  __int128 v47; // xmm6
  __int64 v48; // r15
  __int128 v49; // [rsp+30h] [rbp-50h] BYREF
  __int128 v50; // [rsp+40h] [rbp-40h] BYREF
  __int64 v51; // [rsp+50h] [rbp-30h]
  __int64 v52; // [rsp+58h] [rbp-28h] BYREF
  __int64 v53; // [rsp+60h] [rbp-20h]
  __int64 v54; // [rsp+68h] [rbp-18h]
  __int64 v55; // [rsp+70h] [rbp-10h] BYREF
  __int64 v56; // [rsp+78h] [rbp-8h]
  __int64 v57; // [rsp+80h] [rbp+0h]
  __int64 v58; // [rsp+90h] [rbp+10h] BYREF
  __int128 v59; // [rsp+98h] [rbp+18h] BYREF
  __int64 v60; // [rsp+A8h] [rbp+28h]
  __int64 v61; // [rsp+B0h] [rbp+30h]
  __int128 v62; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v63; // [rsp+C8h] [rbp+48h] BYREF
  __int128 v64; // [rsp+D8h] [rbp+58h]
  __int128 v65; // [rsp+E8h] [rbp+68h]
  __int128 v66; // [rsp+F8h] [rbp+78h]
  __int128 v67; // [rsp+108h] [rbp+88h]
  __int128 v68; // [rsp+118h] [rbp+98h] BYREF
  __int128 v69; // [rsp+128h] [rbp+A8h]
  __int128 v70; // [rsp+138h] [rbp+B8h]
  __int128 v71; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v72; // [rsp+158h] [rbp+D8h]
  _OWORD v73[2]; // [rsp+160h] [rbp+E0h] BYREF
  char v74; // [rsp+180h] [rbp+100h]
  __int64 v75; // [rsp+188h] [rbp+108h] BYREF
  __int64 v76; // [rsp+190h] [rbp+110h]
  __int64 v77; // [rsp+198h] [rbp+118h]
  __int64 v78; // [rsp+1A8h] [rbp+128h]
  _BYTE v79[104]; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v80; // [rsp+218h] [rbp+198h]
  _OWORD v81[4]; // [rsp+228h] [rbp+1A8h] BYREF
  __int128 v82; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v83; // [rsp+280h] [rbp+200h]
  __int64 v84; // [rsp+288h] [rbp+208h] BYREF
  __int64 v85; // [rsp+290h] [rbp+210h]
  __int64 v86; // [rsp+298h] [rbp+218h]
  __int64 v87; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v88; // [rsp+2A8h] [rbp+228h]
  __int64 v89; // [rsp+2B0h] [rbp+230h]
  __int64 v90; // [rsp+2B8h] [rbp+238h]
  __int64 v91; // [rsp+2C0h] [rbp+240h]
  __int64 v92; // [rsp+2C8h] [rbp+248h]
  __int64 v93; // [rsp+2D0h] [rbp+250h]
  __int64 v94; // [rsp+2D8h] [rbp+258h]
  __int64 v95; // [rsp+2E0h] [rbp+260h]
  __int64 v96; // [rsp+2E8h] [rbp+268h]
  __int64 v97; // [rsp+2F0h] [rbp+270h]
  __int16 v98; // [rsp+2F8h] [rbp+278h] BYREF
  _BYTE *v99; // [rsp+300h] [rbp+280h]
  __int64 v100; // [rsp+308h] [rbp+288h]
  __int128 v101; // [rsp+310h] [rbp+290h] BYREF
  __int64 v102; // [rsp+320h] [rbp+2A0h]
  char v103; // [rsp+32Fh] [rbp+2AFh] BYREF
  _BYTE v104[24]; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v105; // [rsp+348h] [rbp+2C8h]
  char v106; // [rsp+350h] [rbp+2D0h]
  __int64 v107; // [rsp+360h] [rbp+2E0h]
  __int64 v108; // [rsp+368h] [rbp+2E8h]
  __int64 v109; // [rsp+370h] [rbp+2F0h]
  char v110; // [rsp+37Fh] [rbp+2FFh]
  char v111; // [rsp+380h] [rbp+300h]
  char v112; // [rsp+381h] [rbp+301h]
  char v113; // [rsp+382h] [rbp+302h]
  char v114; // [rsp+383h] [rbp+303h]
  char v115; // [rsp+384h] [rbp+304h]
  char v116; // [rsp+385h] [rbp+305h]
  char v117; // [rsp+386h] [rbp+306h]
  char v118; // [rsp+387h] [rbp+307h]
  __int64 v119; // [rsp+388h] [rbp+308h]

  v119 = -2;
  v8 = (int)a4;
  v49 = a8;
  sub_141473FA0((unsigned int)v104, a2, a3, (unsigned int)&unk_1417AE817, 8);
  v109 = *(_QWORD *)&v104[8];
  sub_140AD4760((unsigned int)v79, *(_DWORD *)&v104[8], *(_DWORD *)&v104[16], v8, a5);
  if ( *(_QWORD *)v79 == 2 )
  {
    nullsub_1(v12);
    result = (void *)sub_140001650(20, 1);
    if ( !result )
      sub_1416C2D4B(1, 20);
    qmemcpy(result, "Invalid skill source", 20);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 20;
    *(_QWORD *)(a1 + 24) = result;
    *(_QWORD *)(a1 + 32) = 20;
    *(_QWORD *)a1 = -1;
    if ( *(_QWORD *)v104 )
      return (void *)sub_140001660(v109, *(_QWORD *)v104, 1);
    return result;
  }
  v14 = a7;
  v15 = *(_QWORD *)&v79[32];
  v62 = *(_OWORD *)&v79[40];
  v63 = *(_OWORD *)&v79[56];
  v64 = *(_OWORD *)&v79[72];
  v65 = *(_OWORD *)&v79[88];
  v66 = v80;
  v67 = v81[0];
  v68 = v81[1];
  v69 = v81[2];
  v70 = v81[3];
  v100 = *(_QWORD *)&v79[16];
  v58 = *(_QWORD *)v79;
  v59 = *(_OWORD *)&v79[8];
  v94 = *(_QWORD *)&v79[24];
  v60 = *(_QWORD *)&v79[24];
  v61 = *(_QWORD *)&v79[32];
  if ( *(_QWORD *)v104 )
    sub_140001660(v109, *(_QWORD *)v104, 1);
  v79[0] = 1;
  v118 = 1;
  v16 = sub_14147B9A0(v79, a6, a7);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)a1 = -1;
    return (void *)sub_1402C65A0(&v58);
  }
  v118 = 1;
  *(_DWORD *)v104 = sub_141475580();
  *(_DWORD *)&v104[4] = v17;
  v118 = 1;
  sub_141475530(v79, v104, 3577643008LL, 27111902);
  if ( v79[0] )
    v18 = 0;
  else
    v18 = *(_QWORD *)&v79[8];
  v87 = v18;
  v19 = v64;
  *(_QWORD *)v79 = 0;
  *(_QWORD *)&v79[8] = 1;
  *(_QWORD *)&v79[16] = 0;
  if ( *((_QWORD *)&v64 + 1) )
  {
    sub_141688D30((unsigned int)v79, 0, (*((_QWORD *)&v64 + 1) >> 2) - (((BYTE8(v64) & 3) == 0) - 1), 1, 1);
    v14 = a7;
    v19 = v64;
  }
  sub_140998600(v19, v19 + *((_QWORD *)&v19 + 1), v79);
  v108 = *(_QWORD *)&v79[8];
  v109 = *(_QWORD *)v79;
  v20 = sub_14033BA70(*(_QWORD *)&v79[8], *(_QWORD *)&v79[16]);
  v23 = v21;
  if ( v21 )
  {
    if ( v21 < 0 )
    {
      v24 = 0;
      goto LABEL_17;
    }
    v27 = v20;
    v78 = v15;
    nullsub_1(v22);
    v24 = 1;
    v28 = sub_140001650(v23, 1);
    if ( !v28 )
LABEL_17:
      sub_1416C2D4B(v24, v23);
    v26 = v28;
    sub_141684120(v28, v27, v23);
    v14 = a7;
  }
  else
  {
    v78 = v15;
    nullsub_1(v22);
    v23 = 5;
    v25 = sub_140001650(5, 1);
    if ( !v25 )
      sub_1416C2D4B(1, 5);
    v26 = v25;
    *(_BYTE *)(v25 + 4) = 108;
    *(_DWORD *)v25 = 1818848115;
  }
  v84 = v23;
  v85 = v26;
  v86 = v23;
  if ( v109 )
    sub_140001660(v108, v109, 1);
  v117 = 1;
  sub_141356270(v73);
  *(_QWORD *)v104 = 0;
  *(_QWORD *)&v104[8] = 1;
  *(_QWORD *)&v104[16] = 0;
  *(_QWORD *)&v79[16] = 1610612768;
  *(_QWORD *)v79 = v104;
  *(_QWORD *)&v79[8] = &off_1417B1268;
  if ( (unsigned __int8)sub_141356790(v73, v79) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_9,
      55,
      (unsigned int)&v103,
      (unsigned int)&unk_1417AEA70,
      (__int64)&off_1417B1320);
  v108 = *(_QWORD *)&v104[8];
  v109 = *(_QWORD *)v104;
  if ( *(_QWORD *)&v104[16] > 8u )
  {
    if ( *(char *)(*(_QWORD *)&v104[8] + 8LL) < -64 )
LABEL_27:
      sub_1416C2F60(*(_DWORD *)&v104[8], *(_DWORD *)&v104[16], 0, 8, (__int64)&off_1417AF490);
  }
  else if ( *(_QWORD *)&v104[16] != 8 )
  {
    goto LABEL_27;
  }
  v75 = *(_QWORD *)&v104[8];
  v76 = 8;
  *(_QWORD *)v79 = &v87;
  *(_QWORD *)&v79[8] = sub_1414AC5F0;
  *(_QWORD *)&v79[16] = &v84;
  *(_QWORD *)&v79[24] = sub_1400015F0;
  *(_QWORD *)&v79[32] = &v49;
  *(_QWORD *)&v79[40] = sub_14041F680;
  *(_QWORD *)&v79[48] = &v75;
  *(_QWORD *)&v79[56] = sub_14041F680;
  sub_14149C0F0(v104, &unk_1417AF4A8, v79);
  if ( v109 )
    sub_140001660(v108, v109, 1);
  v82 = *(_OWORD *)v104;
  v83 = *(_QWORD *)&v104[16];
  v111 = 1;
  sub_141473FA0((unsigned int)&v55, a6, v14, *(_DWORD *)&v104[8], *(__int64 *)&v104[16]);
  v116 = 1;
  sub_141356270(v79);
  *(_OWORD *)v104 = *(_OWORD *)v79;
  *(_QWORD *)v79 = v104;
  *(_QWORD *)&v79[8] = sub_140421AE0;
  v116 = 1;
  sub_14149C0F0(&v52, &unk_1417AF4B3, v79);
  v109 = v53;
  sub_141473FA0((unsigned int)v79, a6, v14, v53, v54);
  if ( v52 )
    sub_140001660(v109, v52, 1);
  v73[1] = *(_OWORD *)&v79[16];
  v73[0] = *(_OWORD *)v79;
  v74 = 0;
  v29 = *(_QWORD *)&v79[8];
  v30 = *(_QWORD *)&v79[16];
  v110 = 1;
  sub_141473FA0(
    (unsigned int)&v75,
    *(_DWORD *)&v79[8],
    *(_DWORD *)&v79[16],
    (unsigned int)"skillreplacedExistingbackupremovedSkillIDremainingInstalledCountrestoredSkillrollbackBackupdeletedBack"
                  "upIDremainingBackupCountpreviousAccountKeyactiveAccountauthUpdatedregistryUpdatedremovedAccountKeysrem"
                  "ovedCountauthRemovedauthBackedUpauthBackupsRemovedregistryBackupsRemovedstaleEntriesRemovedkilledCount"
                  "processesosarchhasActiveAccountlatestRolloutFoundlatestRolloutTimestampusageAttemptCountusageSuccessCo"
                  "untlastUsageFailurelastUsageFailureAccountpathscoreVersionplatformregistryStatesessionStateapiState",
    5);
  v79[0] = 1;
  v115 = 1;
  v31 = sub_14147B9A0(v79, v29, v30);
  if ( v31 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v31;
    goto LABEL_37;
  }
  v32 = v76;
  v115 = 1;
  sub_140AD0D70((unsigned int)v79, a2, a3, v76, v77);
  if ( *(_DWORD *)v79 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v79[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v79[64];
    v33 = *(_OWORD *)v79;
    v34 = *(_OWORD *)&v79[16];
    v35 = *(_OWORD *)&v79[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v79[48];
    *(_OWORD *)(a1 + 40) = v35;
    *(_OWORD *)(a1 + 24) = v34;
    *(_OWORD *)(a1 + 8) = v33;
LABEL_37:
    *(_QWORD *)a1 = -1;
    v109 = v29;
    v36 = v75;
    if ( !v75 )
    {
LABEL_39:
      sub_140B0FD50(v73);
      if ( *(_QWORD *)&v73[0] )
        sub_140001660(v109, *(_QWORD *)&v73[0], 1);
      if ( v55 )
        sub_140001660(v56, v55, 1);
      if ( (_QWORD)v82 )
        sub_140001660(*((_QWORD *)&v82 + 1), v82, 1);
      if ( v84 )
        sub_140001660(v85, v84, 1);
      return (void *)sub_1402C65A0(&v58);
    }
LABEL_38:
    sub_140001660(v76, v36, 1);
    goto LABEL_39;
  }
  v115 = 1;
  sub_14149C500(&v50, &v82);
  sub_14149C500(&v71, (char *)&v59 + 8);
  sub_14149C500(&v101, &v62);
  v96 = v68;
  if ( (_QWORD)v68 == -1 )
  {
    v108 = -1;
  }
  else
  {
    sub_14149C500(v104, &v68);
    v108 = *(_QWORD *)v104;
    v107 = *(_QWORD *)&v104[8];
    v14 = *(_QWORD *)&v104[16];
  }
  sub_14149C500(v104, (char *)&v63 + 8);
  *(_QWORD *)&v79[16] = v51;
  *(_OWORD *)v79 = v50;
  *(_OWORD *)&v79[24] = v71;
  *(_QWORD *)&v79[40] = v72;
  *(_OWORD *)&v79[48] = v101;
  *(_QWORD *)&v79[64] = v102;
  *(_QWORD *)&v79[96] = v108;
  *(_QWORD *)&v80 = v107;
  *((_QWORD *)&v80 + 1) = v14;
  *(_OWORD *)&v79[72] = *(_OWORD *)v104;
  *(_QWORD *)&v79[88] = *(_QWORD *)&v104[16];
  *(_QWORD *)&v81[0] = v87;
  nullsub_1(v37);
  v38 = (_BYTE *)sub_140001650(128, 1);
  if ( !v38 )
  {
    v114 = 1;
    sub_1416C2D4B(1, 128);
  }
  *(_QWORD *)&v101 = 128;
  *((_QWORD *)&v101 + 1) = v38;
  *(_QWORD *)v104 = &v101;
  *(_QWORD *)&v104[8] = asc_1417ABA68;
  *(_QWORD *)&v104[16] = 2;
  v105 = 1;
  v106 = 0;
  *v38 = 123;
  v102 = 1;
  v98 = 256;
  v99 = v104;
  v39 = sub_140452760(&v98, aBackupid_0, 8, v79);
  if ( v39 )
    goto LABEL_57;
  if ( (_BYTE)v98 )
    goto LABEL_55;
  v39 = sub_140452760(&v98, aSkillid_0, 7, &v79[24]);
  if ( v39 )
    goto LABEL_57;
  if ( (_BYTE)v98 )
    goto LABEL_55;
  v39 = sub_140452760(&v98, aName_8, 4, &v79[48]);
  if ( v39 )
    goto LABEL_57;
  if ( (_BYTE)v98 )
    goto LABEL_55;
  v39 = sub_1404504B0(&v98, aTitle_5, 5, &v79[96]);
  if ( v39 )
    goto LABEL_57;
  if ( (_BYTE)v98 )
    goto LABEL_55;
  v41 = sub_140452760(&v98, aRelativepath_1, 12, &v79[72]);
  v108 = v32;
  if ( v41 )
  {
LABEL_68:
    v39 = v41;
    goto LABEL_57;
  }
  if ( (_BYTE)v98 )
  {
LABEL_55:
    v39 = sub_1416BF0E0();
LABEL_57:
    if ( (_QWORD)v101 )
      sub_140001660(*((_QWORD *)&v101 + 1), v101, 1);
    v40 = 3;
LABEL_60:
    *(_QWORD *)(a1 + 8) = v40;
    *(_QWORD *)(a1 + 16) = v39;
    *(_QWORD *)a1 = -1;
    sub_1408A4BA0(v79);
    v109 = v29;
    v36 = v75;
    if ( !v75 )
      goto LABEL_39;
    goto LABEL_38;
  }
  v41 = sub_140456E50(&v98, aCreatedat_4, 9, v81);
  if ( v41 )
    goto LABEL_68;
  sub_1407BB0F0(&v98);
  v107 = *((_QWORD *)&v101 + 1);
  v88 = v101;
  if ( (_QWORD)v101 == -1 )
  {
    v40 = 3;
    v39 = v107;
    goto LABEL_60;
  }
  v42 = v102;
  v113 = 1;
  v112 = 1;
  sub_141473FA0((unsigned int)v104, v29, v30, (unsigned int)&unk_1417AF17D, 13);
  *(_QWORD *)&v101 = v88;
  *((_QWORD *)&v101 + 1) = v107;
  v102 = v42;
  v113 = 0;
  v112 = 1;
  v43 = sub_140690440(v104, &v101);
  v40 = 2;
  if ( v43 || (v44 = v57, v113 = 0, v112 = 1, v89 = v56, (v43 = sub_141486540(v29, v30, v56, v57)) != 0) )
  {
    v39 = v43;
    goto LABEL_60;
  }
  v74 = 1;
  v90 = *((_QWORD *)&v82 + 1);
  v109 = v82;
  v45 = v83;
  v91 = *((_QWORD *)&v62 + 1);
  v97 = v62;
  v92 = *((_QWORD *)&v68 + 1);
  v46 = v69;
  v95 = *((_QWORD *)&v63 + 1);
  v47 = v63;
  v48 = *((_QWORD *)&v64 + 1);
  v93 = v64;
  sub_141473FA0(
    (unsigned int)v104,
    v89,
    v44,
    (unsigned int)"skillreplacedExistingbackupremovedSkillIDremainingInstalledCountrestoredSkillrollbackBackupdeletedBack"
                  "upIDremainingBackupCountpreviousAccountKeyactiveAccountauthUpdatedregistryUpdatedremovedAccountKeysrem"
                  "ovedCountauthRemovedauthBackedUpauthBackupsRemovedregistryBackupsRemovedstaleEntriesRemovedkilledCount"
                  "processesosarchhasActiveAccountlatestRolloutFoundlatestRolloutTimestampusageAttemptCountusageSuccessCo"
                  "untlastUsageFailurelastUsageFailureAccountpathscoreVersionplatformregistryStatesessionStateapiState",
    5);
  v107 = *(_QWORD *)&v104[8];
  v71 = *(_OWORD *)&v104[8];
  sub_140B0F580(&v101, &v71);
  *(_QWORD *)(a1 + 112) = v102;
  *(_OWORD *)(a1 + 96) = v101;
  *(_QWORD *)a1 = v109;
  *(_QWORD *)(a1 + 8) = v90;
  *(_QWORD *)(a1 + 16) = v45;
  *(_QWORD *)(a1 + 24) = v100;
  *(_QWORD *)(a1 + 32) = v94;
  *(_QWORD *)(a1 + 40) = v78;
  *(_QWORD *)(a1 + 48) = v97;
  *(_QWORD *)(a1 + 56) = v91;
  *(_OWORD *)(a1 + 64) = v47;
  *(_QWORD *)(a1 + 80) = v93;
  *(_QWORD *)(a1 + 88) = v48;
  *(_QWORD *)(a1 + 120) = v96;
  *(_QWORD *)(a1 + 128) = v92;
  *(_QWORD *)(a1 + 136) = v46;
  *(_QWORD *)(a1 + 144) = v87;
  sub_1408A4BA0(v79);
  if ( v75 )
    sub_140001660(v108, v75, 1);
  result = (void *)sub_140A902C0(v73);
  if ( v55 )
    result = (void *)sub_140001660(v89, v55, 1);
  if ( v84 )
    result = (void *)sub_140001660(v85, v84, 1);
  if ( *((_QWORD *)&v69 + 1) != -1 && *((_QWORD *)&v69 + 1) )
    result = (void *)sub_140001660(v70, *((_QWORD *)&v69 + 1), 1);
  if ( (_QWORD)v65 )
    result = (void *)sub_140001660(*((_QWORD *)&v65 + 1), v65, 1);
  if ( *((_QWORD *)&v66 + 1) )
    result = (void *)sub_140001660(v67, *((_QWORD *)&v66 + 1), 1);
  if ( *(_QWORD *)v104 )
    return (void *)sub_140001660(v107, *(_QWORD *)v104, 1);
  return result;
}