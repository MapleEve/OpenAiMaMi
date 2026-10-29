// win 1.2.7 | module src/core/relay/codex_mutation.rs | ea 0x140c4dea0 | name sub_140C4DEA0
// win 1.2.7 | module src/commands/account_observer.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C4DEA0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rsi
  char v9; // al
  volatile void *v10; // rcx
  __int64 v11; // r13
  unsigned __int64 v12; // rcx
  char *v13; // r15
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rsi
  void *v17; // rax
  __int64 v18; // rsi
  char v19; // al
  __int64 v20; // rax
  int v21; // edx
  __int64 (__fastcall *v22)(); // rdi
  PVOID v23; // r15
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // r14
  unsigned __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // r15
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rsi
  volatile void *v35; // rcx
  volatile signed __int8 *v36; // rax
  volatile signed __int8 *v37; // rsi
  int v38; // edi
  char v39; // al
  void *v40; // rax
  __int64 v41; // rcx
  volatile signed __int8 v42; // al
  char *v43; // rdi
  char v44; // al
  unsigned __int64 v45; // rdi
  PVOID v46; // r13
  PVOID v47; // rdi
  __int64 v48; // rcx
  PVOID v49; // rcx
  char v50; // al
  char v51; // al
  char *v52; // rbx
  char v53; // al
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbx
  char v57; // al
  unsigned __int64 v58; // rdi
  char v59; // al
  int v60; // esi
  int v61; // esi
  const char *v63; // [rsp+30h] [rbp-50h] BYREF
  __int64 v64; // [rsp+38h] [rbp-48h]
  __int64 v65; // [rsp+40h] [rbp-40h]
  __int64 v66; // [rsp+48h] [rbp-38h]
  __int128 v67; // [rsp+50h] [rbp-30h]
  __int128 v68; // [rsp+60h] [rbp-20h]
  __int128 v69; // [rsp+70h] [rbp-10h]
  __int128 v70; // [rsp+80h] [rbp+0h]
  _QWORD v71[22]; // [rsp+3A0h] [rbp+320h] BYREF
  __int64 v72; // [rsp+450h] [rbp+3D0h]
  __int64 v73; // [rsp+458h] [rbp+3D8h]
  __int64 v74[22]; // [rsp+4B8h] [rbp+438h] BYREF
  __int64 v75; // [rsp+568h] [rbp+4E8h]
  __int64 v76; // [rsp+570h] [rbp+4F0h]
  _BYTE v77[136]; // [rsp+5A8h] [rbp+528h] BYREF
  __int128 v78; // [rsp+630h] [rbp+5B0h] BYREF
  __int64 v79; // [rsp+640h] [rbp+5C0h]
  __int128 *v80; // [rsp+938h] [rbp+8B8h] BYREF
  __int64 (__fastcall *v81)(); // [rsp+940h] [rbp+8C0h]
  PVOID v82; // [rsp+948h] [rbp+8C8h]
  __int64 v83; // [rsp+950h] [rbp+8D0h]
  __int64 v84; // [rsp+958h] [rbp+8D8h]
  __int128 v85; // [rsp+960h] [rbp+8E0h]
  __int128 v86; // [rsp+970h] [rbp+8F0h]
  __int128 v87; // [rsp+980h] [rbp+900h]
  __int128 v88; // [rsp+990h] [rbp+910h]
  char v89[72]; // [rsp+9A0h] [rbp+920h] BYREF
  __int64 v90; // [rsp+9E8h] [rbp+968h]
  __int64 v91; // [rsp+9F0h] [rbp+970h]
  _BYTE v92[24]; // [rsp+A28h] [rbp+9A8h] BYREF
  PVOID v93[2]; // [rsp+A40h] [rbp+9C0h] BYREF
  __int64 v94; // [rsp+A50h] [rbp+9D0h]
  __int64 v95; // [rsp+A58h] [rbp+9D8h]
  _BYTE v96[72]; // [rsp+A60h] [rbp+9E0h]
  _BYTE v97[496]; // [rsp+AA8h] [rbp+A28h] BYREF
  __int64 v98; // [rsp+C98h] [rbp+C18h]
  __int64 v99; // [rsp+D20h] [rbp+CA0h]
  __int64 v100; // [rsp+D28h] [rbp+CA8h]
  void *v101; // [rsp+D30h] [rbp+CB0h]
  __int64 v102; // [rsp+D38h] [rbp+CB8h]
  __int64 v103; // [rsp+D40h] [rbp+CC0h]
  __int64 v104; // [rsp+D50h] [rbp+CD0h]
  __int64 v105; // [rsp+D58h] [rbp+CD8h]
  __int128 v106; // [rsp+DB0h] [rbp+D30h]
  __int128 v107; // [rsp+DC0h] [rbp+D40h]
  __int128 v108; // [rsp+DD0h] [rbp+D50h]
  __int128 v109; // [rsp+DE0h] [rbp+D60h]
  __int128 v110; // [rsp+DF0h] [rbp+D70h]
  __int128 v111; // [rsp+E00h] [rbp+D80h]
  __int128 v112; // [rsp+E10h] [rbp+D90h]
  __int128 v113; // [rsp+E20h] [rbp+DA0h]
  __int64 v114; // [rsp+E30h] [rbp+DB0h]
  __int64 v115; // [rsp+E38h] [rbp+DB8h]
  __int128 v116; // [rsp+E40h] [rbp+DC0h] BYREF
  __int128 v117; // [rsp+E50h] [rbp+DD0h]
  __int128 v118; // [rsp+E60h] [rbp+DE0h]
  __int128 v119; // [rsp+E70h] [rbp+DF0h]
  __int128 *v120; // [rsp+E80h] [rbp+E00h]
  _QWORD *v121; // [rsp+E88h] [rbp+E08h]
  _QWORD v122[2]; // [rsp+E90h] [rbp+E10h] BYREF
  __int64 v123; // [rsp+EA0h] [rbp+E20h]
  __int64 v124; // [rsp+EA8h] [rbp+E28h]
  __int64 v125; // [rsp+EB0h] [rbp+E30h]
  PVOID v126; // [rsp+EB8h] [rbp+E38h]
  PVOID v127; // [rsp+EC0h] [rbp+E40h]
  char v128; // [rsp+ECFh] [rbp+E4Fh] BYREF
  PVOID Address; // [rsp+ED0h] [rbp+E50h]
  __int64 v130; // [rsp+ED8h] [rbp+E58h]
  unsigned __int64 v131; // [rsp+EE0h] [rbp+E60h]
  __int64 v132; // [rsp+EE8h] [rbp+E68h]
  __int64 v133; // [rsp+EF0h] [rbp+E70h]
  __int64 v134; // [rsp+EF8h] [rbp+E78h]
  char v135; // [rsp+F07h] [rbp+E87h]
  char v136; // [rsp+F08h] [rbp+E88h]
  char v137; // [rsp+F09h] [rbp+E89h]
  char v138; // [rsp+F0Ah] [rbp+E8Ah]
  char v139; // [rsp+F0Bh] [rbp+E8Bh]
  char v140; // [rsp+F0Ch] [rbp+E8Ch]
  char v141; // [rsp+F0Dh] [rbp+E8Dh]
  char v142; // [rsp+F0Eh] [rbp+E8Eh]
  char v143; // [rsp+F0Fh] [rbp+E8Fh]
  __int64 v144; // [rsp+F10h] [rbp+E90h]

  v144 = -2;
  v125 = a1;
  v122[0] = a3;
  v122[1] = a4;
  v71[0] = -1;
  v74[0] = -1;
  v114 = a2[1];
  v121 = a2;
  v115 = a2[2];
  v8 = -1;
  while ( 1 )
  {
    v133 = v7;
    v134 = v8;
    v132 = v8;
    v9 = sub_14092BA30(v122, 1, 0);
    if ( v9 == 2 || (v9 & 1) != 0 )
      break;
    v10 = (volatile void *)(*(_QWORD *)(*(_QWORD *)(v125 + 136) + 5016LL) + 16LL);
    v133 = v7;
    v132 = v134;
    v11 = sub_1404CA6F0(v10);
    if ( !v11 )
    {
      v63 = aCodexmateLibCo;
      v64 = 61;
      v93[0] = &v63;
      v93[1] = sub_140186EE0;
      v133 = v7;
      v132 = v134;
      sub_1419392A0(&unk_141A0F720, v93, &off_141A0F7A8);
    }
    v133 = v7;
    v132 = v134;
    sub_140DA5660(v93, v11);
    v12 = (unsigned __int64)v93[0];
    v13 = (char *)v93[1];
    v130 = v7;
    if ( v93[0] != (PVOID)-1LL )
    {
      v5 = v94;
      v4 = v95;
      v116 = *(_OWORD *)v96;
      v117 = *(_OWORD *)&v96[16];
      v118 = *(_OWORD *)&v96[32];
      v119 = *(_OWORD *)&v96[48];
      v6 = (unsigned __int64)v93[1];
      v14 = v134;
      goto LABEL_7;
    }
    v131 = v5;
    if ( (_BYTE)v94 == 2 )
      goto LABEL_15;
    v18 = v130;
    if ( (v94 & 1) == 0 )
    {
      if ( 2 * *off_1421E7210 )
      {
        v133 = v130;
        v132 = v134;
        if ( !(unsigned __int8)((__int64 (*)(void))sub_141938160)() )
          v13[1] = 1;
      }
    }
    v19 = *v13;
    *v13 = 0;
    if ( v19 == 2 )
    {
      v133 = v18;
      v132 = v134;
      WakeByAddressSingle(v13);
    }
    v133 = v18;
    v132 = v134;
    v20 = sub_14167FC00();
    v133 = v18;
    v132 = v134;
    sub_1401C5450((unsigned int)v93, (unsigned int)v71, v114, v115, v20, v21);
    v22 = (__int64 (__fastcall *)())v93[1];
    v23 = (PVOID)v94;
    v24 = v95;
    v25 = *(_QWORD *)v96;
    v110 = *(_OWORD *)&v96[8];
    v111 = *(_OWORD *)&v96[24];
    v112 = *(_OWORD *)&v96[40];
    v113 = *(_OWORD *)&v96[56];
    if ( v93[0] == (PVOID)-2LL )
    {
      v116 = v110;
      v117 = v111;
      v118 = v112;
      v119 = v113;
      v14 = v134;
LABEL_90:
      v12 = (unsigned __int64)v22;
      goto LABEL_91;
    }
    v120 = (__int128 *)v93[0];
    sub_1418F44E0(v77, v97, 136);
    if ( (_DWORD)v120 == -1 )
      goto LABEL_15;
    v80 = v120;
    v81 = v22;
    v82 = v23;
    v83 = v24;
    v84 = v25;
    v88 = v113;
    v87 = v112;
    v86 = v111;
    v85 = v110;
    sub_1418F44E0(v89, v77, 136);
    v139 = 1;
    sub_140DA5660(v93, v11);
    v12 = (unsigned __int64)v93[0];
    v23 = v93[1];
    v24 = v131;
    if ( v93[0] != (PVOID)-1LL )
    {
      v24 = v94;
      v25 = v95;
      v116 = *(_OWORD *)v96;
      v117 = *(_OWORD *)&v96[16];
      v118 = *(_OWORD *)&v96[32];
      v119 = *(_OWORD *)&v96[48];
      goto LABEL_85;
    }
    v12 = -1;
    if ( (_BYTE)v94 == 2 )
      goto LABEL_54;
    v135 = v94;
    v126 = v93[1];
    v143 = 1;
    v142 = 1;
    v32 = sub_14092BB20(v122);
    v12 = -1;
    if ( v32 == 2 )
      goto LABEL_80;
    v143 = 1;
    v142 = 1;
    sub_140C60610(&v63);
    if ( (_DWORD)v63 == -1 )
    {
      LOBYTE(v23) = 3;
    }
    else
    {
      sub_1418F44E0(v93, &v63, 880);
      LODWORD(v23) = v97[489];
      sub_140BAC5B0(&v63);
      v33 = v100;
      v127 = v101;
      v123 = v100;
      Address = nullptr;
      while ( v127 != Address )
      {
        Address = (char *)Address + 1;
        v34 = v33 + 384;
        sub_140034430(v33);
        v33 = v34;
      }
      if ( v99 )
        sub_140001660(v123, 384 * v99, 8);
      if ( v102 != -1 )
      {
        if ( v102 )
          sub_140001660(v103, v102, 1);
        if ( v104 != -1 && v104 )
          sub_140001660(v105, v104, 1);
      }
    }
    v35 = (volatile void *)(*(_QWORD *)(*(_QWORD *)(v125 + 136) + 5016LL) + 16LL);
    v143 = 1;
    v142 = 1;
    v36 = (volatile signed __int8 *)sub_1404C9470(v35);
    v37 = v36;
    if ( !v36 )
    {
      v63 = aStdSyncPoisonM;
      v64 = 76;
      v93[0] = &v63;
      v93[1] = sub_140186EE0;
      v143 = 1;
      v142 = 1;
      sub_1419392A0(&unk_141A0F720, v93, &off_141A0F7A8);
    }
    v12 = -1;
    if ( _InterlockedCompareExchange8(v36, 1, 0) )
      goto LABEL_80;
    if ( 2 * *off_1421E7210 )
    {
      v143 = 1;
      v142 = 1;
      v38 = sub_141938160(-1);
      LOBYTE(v38) = v38 ^ 1;
    }
    else
    {
      v38 = 0;
    }
    v39 = *((_BYTE *)v37 + 1);
    v93[1] = (PVOID)v37;
    LOBYTE(v94) = v38;
    v93[0] = (PVOID)(v39 != 0);
    if ( v39 )
    {
      nullsub_1(v39 != 0);
      v40 = (void *)sub_140001650(35, 1);
      if ( !v40 )
        sub_141938D2B(1, 35);
      v24 = (__int64)v40;
      qmemcpy(v40, "Account repository lock is poisoned", 35);
      if ( !(_BYTE)v38 )
      {
        if ( 2 * *off_1421E7210 )
        {
          v143 = 1;
          v142 = 1;
          if ( !(unsigned __int8)sub_141938160(v41) )
            *((_BYTE *)v37 + 1) = 1;
        }
      }
      v42 = *v37;
      *v37 = 0;
      v6 = 35;
      v12 = 10;
      if ( v42 == 2 )
      {
        v143 = 1;
        v142 = 1;
        WakeByAddressSingle((PVOID)v37);
        v12 = 10;
      }
      v4 = 35;
LABEL_80:
      v25 = v4;
      v23 = (PVOID)v6;
LABEL_81:
      v43 = (char *)v126;
      if ( (v135 & 1) == 0 )
      {
        if ( 2 * *off_1421E7210 )
        {
          v139 = 1;
          v56 = v12;
          v57 = sub_141938160(v12);
          v12 = v56;
          if ( !v57 )
            v43[1] = 1;
        }
      }
      v44 = *v43;
      *v43 = 0;
      if ( v44 == 2 )
      {
        v139 = 1;
        v55 = v12;
        WakeByAddressSingle(v43);
        v12 = v55;
      }
LABEL_85:
      if ( v90 != -1 && v90 )
      {
        v45 = v12;
        sub_140001660(v91, v90, 1);
        v12 = v45;
      }
      v14 = v134;
      if ( (_DWORD)v120 != 2 )
      {
        v22 = (__int64 (__fastcall *)())v12;
        sub_140034220(&v80);
        goto LABEL_90;
      }
LABEL_91:
      v6 = (unsigned __int64)v23;
      v4 = v25;
      v5 = v24;
      v7 = v130;
      if ( v12 == -1 )
        goto LABEL_92;
LABEL_7:
      v63 = (const char *)v12;
      v64 = v6;
      v65 = v5;
      v66 = v4;
      v70 = v119;
      v69 = v118;
      v68 = v117;
      v67 = v116;
      v131 = v12;
      v15 = v12 - 2;
      if ( v12 < 2 )
        v15 = 2;
      if ( !v15 )
      {
        v80 = (__int128 *)v6;
        switch ( v6 & 3 )
        {
          case 0uLL:
            LOBYTE(v27) = *(_BYTE *)(v6 + 16);
            break;
          case 1uLL:
            LOBYTE(v27) = *(_BYTE *)(v6 + 31);
            break;
          case 2uLL:
            v29 = sub_1416B3F10();
            LOBYTE(v27) = (*(__int64 (__fastcall **)(unsigned __int64))(v29 + 8))(HIDWORD(v6));
            break;
          case 3uLL:
            v27 = HIDWORD(v6);
            break;
        }
        v77[0] = v27;
        *(_QWORD *)&v78 = v77;
        *((_QWORD *)&v78 + 1) = sub_140C9E0F0;
        sub_1416ABFD0(v93, &unk_141A3DCB6, &v78);
        v78 = *(_OWORD *)v93;
        v79 = v94;
        if ( (v6 & 3) - 2 >= 2 && (v6 & 3) != 0 )
        {
          v93[1] = (PVOID)(v6 - 1);
          LOBYTE(v93[0]) = 3;
          sub_1416BCB00(&v93[1]);
        }
        v26 = v79;
        v14 = v134;
        v16 = v124;
        if ( v134 == -1 )
          goto LABEL_43;
        goto LABEL_41;
      }
      if ( v15 == 1 )
      {
        nullsub_1(2);
        v17 = (void *)sub_140001650(12, 1);
        v16 = v124;
        if ( !v17 )
          sub_141938D2B(1, 12);
        qmemcpy(v17, "invalid_json", 12);
LABEL_24:
        *(_QWORD *)&v78 = 12;
        *((_QWORD *)&v78 + 1) = v17;
        v79 = 12;
        v26 = 12;
        if ( v14 != -1 )
          goto LABEL_41;
LABEL_43:
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v80 = &v78;
          v81 = sub_1400015F0;
          *(_QWORD *)&v96[16] = 2;
          *(_QWORD *)&v96[24] = aCodexmateLibCo_33;
          *(_QWORD *)&v96[32] = 41;
          *(_QWORD *)&v96[48] = &unk_141A3DCBC;
          *(_QWORD *)&v96[56] = &v80;
          v93[0] = nullptr;
          v93[1] = aCodexmateLibCo_33;
          v94 = 41;
          v95 = 0;
          *(_QWORD *)v96 = aSrcCommandsAcc_0;
          *(_QWORD *)&v96[8] = 32;
          *(_QWORD *)&v96[40] = 0x3500000001LL;
          sub_1414D53A0(&v128, v93);
          v26 = v79;
          v14 = v134;
        }
        v31 = *((_QWORD *)&v78 + 1);
        v8 = v78;
        if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v130, v14, 1);
        v124 = v26;
        v7 = v31;
        if ( v131 != 2 )
          goto LABEL_48;
      }
      else
      {
        v16 = v124;
        if ( v15 == 7 )
        {
          nullsub_1(2);
          v17 = (void *)sub_140001650(12, 1);
          if ( !v17 )
            sub_141938D2B(1, 12);
          qmemcpy(v17, "invalid_auth", 12);
          goto LABEL_24;
        }
        nullsub_1(2);
        v28 = (void *)sub_140001650(11, 1);
        if ( !v28 )
          sub_141938D2B(1, 11);
        qmemcpy(v28, "sync_failed", 11);
        *(_QWORD *)&v78 = 11;
        *((_QWORD *)&v78 + 1) = v28;
        v79 = 11;
        v26 = 11;
        if ( v14 == -1 )
          goto LABEL_43;
LABEL_41:
        if ( v16 != v26 )
          goto LABEL_43;
        v30 = *((_QWORD *)&v78 + 1);
        if ( (unsigned int)sub_1418F4B70(v130, *((_QWORD *)&v78 + 1)) )
          goto LABEL_43;
        if ( (_QWORD)v78 )
          sub_140001660(v30, v78, 1);
        v8 = v14;
        v7 = v130;
        if ( v131 != 2 )
        {
LABEL_48:
          v133 = v7;
          v132 = v8;
          sub_140BAC840(&v63);
        }
      }
    }
    else
    {
      LODWORD(v127) = v38;
      Address = (PVOID)v37;
      v138 = 1;
      v137 = 1;
      v136 = 1;
      sub_1401BB880(v93, v37 + 8, &v80, (unsigned int)v23);
      v46 = v93[0];
      v12 = (unsigned __int64)v93[1];
      v23 = (PVOID)v94;
      v24 = v95;
      v25 = *(_QWORD *)v96;
      v106 = *(_OWORD *)&v96[8];
      v107 = *(_OWORD *)&v96[24];
      v108 = *(_OWORD *)&v96[40];
      v109 = *(_OWORD *)&v96[56];
      if ( v93[0] == (PVOID)-2LL )
      {
        v116 = v106;
        v117 = v107;
        v118 = v108;
        v119 = v109;
        goto LABEL_108;
      }
      v47 = v93[1];
      sub_1418F44E0(&v78, v97, 776);
      if ( (_DWORD)v46 == -1 )
      {
        v12 = -1;
        v24 = v131;
        v25 = v4;
        v23 = (PVOID)v6;
LABEL_108:
        v52 = (char *)Address;
        if ( !(_BYTE)v127 )
        {
          if ( 2 * *off_1421E7210 )
          {
            v143 = 1;
            v142 = 1;
            v58 = v12;
            v59 = sub_141938160(v12);
            v12 = v58;
            if ( !v59 )
              v52[1] = 1;
          }
        }
        v53 = *v52;
        *v52 = 0;
        if ( v53 == 2 )
        {
          v143 = 1;
          v142 = 1;
          v54 = v12;
          WakeByAddressSingle(v52);
          v12 = v54;
        }
        goto LABEL_81;
      }
      v93[0] = v46;
      v93[1] = v47;
      v94 = (__int64)v23;
      v95 = v24;
      *(_QWORD *)v96 = v25;
      *(_OWORD *)&v96[56] = v109;
      *(_OWORD *)&v96[40] = v108;
      *(_OWORD *)&v96[24] = v107;
      *(_OWORD *)&v96[8] = v106;
      sub_1418F44E0(v97, &v78, 776);
      if ( !(_BYTE)v127 )
      {
        if ( 2 * *off_1421E7210 )
        {
          v141 = 1;
          v140 = 1;
          if ( !(unsigned __int8)sub_141938160(v48) )
            *((_BYTE *)Address + 1) = 1;
        }
      }
      v49 = Address;
      v50 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      v24 = v131;
      if ( v50 == 2 )
      {
        v141 = 1;
        v140 = 1;
        WakeByAddressSingle(Address);
      }
      if ( (v135 & 1) == 0 )
      {
        if ( 2 * *off_1421E7210 )
        {
          v141 = 0;
          v140 = 1;
          if ( !(unsigned __int8)sub_141938160(v49) )
            *((_BYTE *)v126 + 1) = 1;
        }
      }
      v51 = *(_BYTE *)v126;
      *(_BYTE *)v126 = 0;
      if ( v51 == 2 )
      {
        v141 = 0;
        v140 = 1;
        WakeByAddressSingle(v126);
      }
      v141 = 0;
      v140 = 1;
      if ( (unsigned __int8)sub_14092BB20(v122) == 2 )
      {
        v138 = 0;
        v137 = 0;
        v136 = 1;
        sub_140BAC690(v93);
        v12 = -1;
LABEL_54:
        v25 = v4;
        v23 = (PVOID)v6;
        goto LABEL_85;
      }
      v141 = 0;
      v140 = 1;
      sub_140C67FD0(v125, (unsigned int)v93, (unsigned int)aAuth_2, 4, 0);
      v141 = 0;
      v140 = 0;
      sub_1401C5BE0(v71, &v80);
      LOBYTE(v116) = v98 != -1;
      v63 = (const char *)&v116;
      v64 = (__int64)sub_1416BCC50;
      v141 = 0;
      v140 = 0;
      sub_1416ABFD0(v92, &unk_141A3DC61, &v63);
      v141 = 0;
      v140 = 0;
      sub_14019B500((unsigned int)aAccounts_2, 8, (unsigned int)aExternalAuthSy, 20, (__int64)v92);
      v138 = 0;
      v137 = 0;
      v136 = 0;
      sub_140BAC690(v93);
LABEL_15:
      v7 = v130;
      v14 = v134;
      v5 = v131;
LABEL_92:
      v8 = -1;
      if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v7, v14, 1);
    }
  }
  if ( (unsigned __int64)(v134 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v7, v134, 1);
  v60 = v71[0];
  if ( v71[0] != -1 )
  {
    if ( v72 != -1 && v72 )
      sub_140001660(v73, v72, 1);
    if ( v60 != 2 )
      sub_140034220(v71);
  }
  v61 = v74[0];
  if ( v74[0] != -1 )
  {
    if ( v75 != -1 && v75 )
      sub_140001660(v76, v75, 1);
    if ( v61 != 2 )
      sub_140034220(v74);
  }
  sub_1409499D0(v122);
  if ( *v121 )
    sub_140001660(v121[1], *v121, 1);
  return sub_140BA9EA0(v125);
}
