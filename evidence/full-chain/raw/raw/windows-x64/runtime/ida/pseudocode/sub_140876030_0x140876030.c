// module: codexmate_lib/core/voice/runtime
// addr: 0x140876030
// name: sub_140876030
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140876030(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE *v7; // rbx
  __int64 *v8; // r15
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // kr00_16
  char v13; // r14
  char *v14; // r12
  char v15; // al
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rbx
  char v21; // al
  __int64 v22; // r14
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  char v26; // bl
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // r12
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int128 v41; // kr10_16
  char v42; // r12
  PVOID v43; // rcx
  char v44; // al
  int v45; // eax
  __int128 v46; // xmm0
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int128 v57; // xmm6
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  char v60; // al
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  char *v65; // r12
  char v66; // al
  _BYTE *v68; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall **v69)(); // [rsp+38h] [rbp-48h]
  __int64 v70; // [rsp+40h] [rbp-40h]
  __int128 v71; // [rsp+318h] [rbp+298h]
  __int128 v72; // [rsp+410h] [rbp+390h]
  __int64 v73; // [rsp+420h] [rbp+3A0h]
  __int128 v74; // [rsp+430h] [rbp+3B0h]
  __int64 v75; // [rsp+440h] [rbp+3C0h]
  __int64 v76; // [rsp+448h] [rbp+3C8h] BYREF
  __int128 v77; // [rsp+450h] [rbp+3D0h]
  __int64 v78; // [rsp+460h] [rbp+3E0h]
  _QWORD v79[2]; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v80; // [rsp+478h] [rbp+3F8h]
  _QWORD *v81; // [rsp+480h] [rbp+400h]
  __int64 v82; // [rsp+488h] [rbp+408h]
  __int64 v83; // [rsp+490h] [rbp+410h] BYREF
  __int64 v84; // [rsp+498h] [rbp+418h]
  __int64 v85; // [rsp+4A0h] [rbp+420h]
  __int64 v86; // [rsp+4A8h] [rbp+428h] BYREF
  _QWORD *v87; // [rsp+4B0h] [rbp+430h]
  __int64 v88; // [rsp+4B8h] [rbp+438h]
  __int64 v89; // [rsp+4C0h] [rbp+440h] BYREF
  __int64 v90; // [rsp+4C8h] [rbp+448h]
  __int64 v91; // [rsp+4D0h] [rbp+450h]
  __int64 v92; // [rsp+4D8h] [rbp+458h] BYREF
  _QWORD *v93; // [rsp+4E0h] [rbp+460h]
  __int64 v94; // [rsp+4E8h] [rbp+468h]
  __int64 v95; // [rsp+4F8h] [rbp+478h]
  __int64 v96; // [rsp+500h] [rbp+480h]
  __int64 v97; // [rsp+510h] [rbp+490h]
  __int64 v98; // [rsp+518h] [rbp+498h]
  __int64 v99; // [rsp+540h] [rbp+4C0h]
  __int64 v100; // [rsp+548h] [rbp+4C8h]
  char v101[24]; // [rsp+550h] [rbp+4D0h] BYREF
  _BYTE v102[24]; // [rsp+568h] [rbp+4E8h] BYREF
  __int64 v103; // [rsp+580h] [rbp+500h]
  __int128 v104; // [rsp+588h] [rbp+508h]
  __int64 v105; // [rsp+598h] [rbp+518h] BYREF
  __int64 v106; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v107; // [rsp+5A8h] [rbp+528h] BYREF
  __int128 v108; // [rsp+5B0h] [rbp+530h] BYREF
  __int64 v109; // [rsp+5C0h] [rbp+540h] BYREF
  __int16 v110; // [rsp+5CCh] [rbp+54Ch]
  char v111; // [rsp+5CEh] [rbp+54Eh]
  char v112; // [rsp+5CFh] [rbp+54Fh]
  char v113; // [rsp+5D1h] [rbp+551h]
  char v114; // [rsp+5D2h] [rbp+552h]
  char v115; // [rsp+5D3h] [rbp+553h]
  _BYTE v116[24]; // [rsp+5D8h] [rbp+558h] BYREF
  __int128 v117; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v118; // [rsp+600h] [rbp+580h]
  __int128 v119; // [rsp+610h] [rbp+590h]
  __int128 v120; // [rsp+620h] [rbp+5A0h]
  __int128 v121; // [rsp+630h] [rbp+5B0h]
  __int64 v122; // [rsp+768h] [rbp+6E8h]
  __int128 v123; // [rsp+770h] [rbp+6F0h] BYREF
  __int64 v124; // [rsp+780h] [rbp+700h]
  __int128 v125; // [rsp+790h] [rbp+710h] BYREF
  __int128 v126; // [rsp+7A0h] [rbp+720h]
  __int128 v127; // [rsp+7B0h] [rbp+730h]
  __int128 v128; // [rsp+7C0h] [rbp+740h]
  __int128 v129; // [rsp+7D0h] [rbp+750h]
  __int128 v130; // [rsp+7E0h] [rbp+760h]
  _DWORD v131[2]; // [rsp+7F8h] [rbp+778h]
  __int128 v132; // [rsp+800h] [rbp+780h] BYREF
  __int128 v133; // [rsp+810h] [rbp+790h]
  __int128 v134; // [rsp+820h] [rbp+7A0h]
  __int128 v135; // [rsp+830h] [rbp+7B0h]
  __int128 v136; // [rsp+840h] [rbp+7C0h]
  __int128 v137; // [rsp+850h] [rbp+7D0h]
  __int128 v138; // [rsp+860h] [rbp+7E0h] BYREF
  __int64 v139; // [rsp+870h] [rbp+7F0h]
  PVOID v140; // [rsp+880h] [rbp+800h]
  PVOID Address; // [rsp+888h] [rbp+808h]
  char v142; // [rsp+896h] [rbp+816h] BYREF
  char v143; // [rsp+897h] [rbp+817h]
  __int64 v144; // [rsp+898h] [rbp+818h]

  v144 = -2;
  v4 = (_BYTE *)sub_140003640((volatile void *)(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 5016LL) + 16LL));
  if ( !v4 )
  {
    *(_QWORD *)v116 = aStdSyncPoisonM;
    *(_QWORD *)&v116[8] = 76;
    v68 = v116;
    v69 = (__int64 (__fastcall **)())sub_14041F680;
    sub_1416C32C0(&unk_1416C99C2, &v68, &off_1416C9A50);
  }
  v7 = v4;
  LOBYTE(v6) = 1;
  if ( _InterlockedCompareExchange8(v4, 1, 0) )
    sub_1416C15B0(v4);
  v8 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v17 = sub_1416C2250(v6, v5);
    LOBYTE(v17) = v17 ^ 1;
    LODWORD(v140) = v17;
    LOBYTE(v17) = v7[1];
    Address = v7;
    if ( (_BYTE)v17 )
      goto LABEL_6;
LABEL_14:
    sub_1407BC950(&v68, v7 + 8);
    v20 = (char *)Address;
    if ( !(_BYTE)v140 && 2 * *v8 && !(unsigned __int8)sub_1416C2250(v19, v18) )
      v20[1] = 1;
    v21 = *v20;
    *v20 = 0;
    if ( v21 == 2 )
      WakeByAddressSingle(v20);
    sub_140878660(v116, &v68);
    v22 = *(_QWORD *)v116;
    if ( *(_QWORD *)v116 == -1 )
    {
      v137 = v121;
      v136 = v120;
      v135 = v119;
      v134 = v118;
      v133 = v117;
      v132 = *(_OWORD *)&v116[8];
      *(_QWORD *)&v138 = 0;
      *((_QWORD *)&v138 + 1) = 1;
      v139 = 0;
      *(_QWORD *)&v126 = 1610612768;
      *(_QWORD *)&v125 = &v138;
      *((_QWORD *)&v125 + 1) = &off_141799500;
      if ( (unsigned __int8)sub_140B036A0(&v132, &v125) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v142,
          (unsigned int)&unk_141796270,
          (__int64)&off_1417995B8);
      v124 = v139;
      v123 = v138;
      sub_1407DA310(&v116[8]);
      v46 = v123;
      v72 = v123;
      v73 = v124;
      *(_QWORD *)(a1 + 16) = v124;
      *(_OWORD *)a1 = v46;
      goto LABEL_114;
    }
    v75 = v117;
    v74 = *(_OWORD *)&v116[8];
    sub_141684120(v79, (char *)&v117 + 8, 368);
    v73 = v75;
    v77 = v74;
    v78 = v75;
    v76 = v22;
    if ( !v107 || (sub_140884530(v116, v107, v108), *(_QWORD *)v116 == -1) )
    {
      v26 = 0;
      v27 = *((_QWORD *)&v108 + 1);
      if ( !*((_QWORD *)&v108 + 1) )
        goto LABEL_40;
    }
    else
    {
      if ( *(_QWORD *)v116 )
        sub_140001660(*(_QWORD *)&v116[8], *(_QWORD *)v116, 1);
      *(_QWORD *)v116 = &v107;
      *(_QWORD *)&v116[8] = sub_1414AC5F0;
      *(_QWORD *)&v116[16] = &v108;
      *(_QWORD *)&v117 = sub_1414AC520;
      sub_14149C0F0(&v138, &unk_1417991A6, v116);
      sub_1403565C0((unsigned int)aVoice_0, 5, (unsigned int)aTriggerBinding_0, 25, (__int64)&v138);
      v107 = 0;
      if ( v83 )
        sub_140001660(v84, v83, 1);
      v83 = 0;
      v84 = 1;
      v85 = 0;
      nullsub_1(v23);
      v24 = (_QWORD *)sub_140001650(8, 1);
      if ( !v24 )
        sub_1416C2D4B(1, 8);
      v25 = v24;
      *v24 = 0x7265696669646F6DLL;
      if ( v86 )
        sub_140001660(v87, v86, 1);
      v86 = 8;
      v87 = v25;
      v88 = 8;
      *(_QWORD *)&v108 = 0;
      v26 = 1;
      v27 = *((_QWORD *)&v108 + 1);
      if ( !*((_QWORD *)&v108 + 1) )
      {
LABEL_40:
        if ( v105 )
        {
          sub_140884530(v116, v105, v106);
          if ( *(_QWORD *)v116 != -1 )
          {
            if ( *(_QWORD *)v116 )
              sub_140001660(*(_QWORD *)&v116[8], *(_QWORD *)v116, 1);
            *(_QWORD *)v116 = &v105;
            *(_QWORD *)&v116[8] = sub_1414AC5F0;
            *(_QWORD *)&v116[16] = &v106;
            *(_QWORD *)&v117 = sub_1414AC520;
            sub_14149C0F0(&v132, &unk_141799202, v116);
            sub_1403565C0((unsigned int)aVoice_0, 5, (unsigned int)aTriggerBinding_0, 25, (__int64)&v132);
            v105 = 0;
            if ( v78 )
              sub_140001660(v79[0], v78, 1);
            v78 = 0;
            v79[0] = 1;
            v79[1] = 0;
            nullsub_1(v31);
            v32 = (_QWORD *)sub_140001650(8, 1);
            if ( !v32 )
              sub_1416C2D4B(1, 8);
            v33 = v32;
            *v32 = 0x7265696669646F6DLL;
            if ( v80 )
              sub_140001660(v81, v80, 1);
            v80 = 8;
            v81 = v33;
            v82 = 8;
            v106 = 0;
            v26 = 1;
          }
        }
        v34 = v103;
        sub_140427750(v102);
        if ( (v103 != v34) | (unsigned __int8)v26 )
        {
          v35 = off_141EC8D80;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)v116 = 0;
            *(_QWORD *)&v116[8] = aCodexmateLibCo_6;
            *(_QWORD *)&v116[16] = 35;
            *(_QWORD *)&v117 = 0;
            *((_QWORD *)&v117 + 1) = aSrcCoreVoiceRu_3;
            *(_QWORD *)&v118 = 29;
            *((_QWORD *)&v118 + 1) = 2;
            *(_QWORD *)&v119 = aCodexmateLibCo_6;
            *((_QWORD *)&v119 + 1) = 35;
            *(_QWORD *)&v120 = 0x27B00000001LL;
            *((_QWORD *)&v120 + 1) = &unk_141798D53;
            *(_QWORD *)&v121 = 195;
            sub_1412C36A0(&v142, v116);
          }
          sub_14087B3D0(&v125, &v68, &v76);
          if ( (_DWORD)v125 != -1 )
          {
            v137 = v130;
            v136 = v129;
            v135 = v128;
            v134 = v127;
            v133 = v126;
            v132 = v125;
            if ( *v35 >= 2u )
            {
              *(_QWORD *)&v138 = &v132;
              *((_QWORD *)&v138 + 1) = sub_140B036A0;
              *(_QWORD *)v116 = 0;
              *(_QWORD *)&v116[8] = aCodexmateLibCo_6;
              *(_QWORD *)&v116[16] = 35;
              *(_QWORD *)&v117 = 0;
              *((_QWORD *)&v117 + 1) = aSrcCoreVoiceRu_3;
              *(_QWORD *)&v118 = 29;
              *((_QWORD *)&v118 + 1) = 2;
              *(_QWORD *)&v119 = aCodexmateLibCo_6;
              *((_QWORD *)&v119 + 1) = 35;
              *(_QWORD *)&v120 = 0x27F00000001LL;
              *((_QWORD *)&v120 + 1) = &unk_141798DB4;
              *(_QWORD *)&v121 = &v138;
              sub_1412C36A0(&v142, v116);
            }
            sub_1407DA310(&v132);
          }
        }
        v37 = sub_1400640A0(a2);
        LOBYTE(v38) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v37 + 32), 1, 0) )
          sub_1416C15B0((volatile void *)(v37 + 32));
        if ( 2 * *v8 )
        {
          v47 = sub_1416C2250(v38, v36);
          LOBYTE(v47) = v47 ^ 1;
          LODWORD(Address) = v47;
          v140 = (PVOID)(v37 + 32);
          if ( *(_BYTE *)(v37 + 33) )
            goto LABEL_61;
        }
        else
        {
          LODWORD(Address) = 0;
          v140 = (PVOID)(v37 + 32);
          if ( *(_BYTE *)(v37 + 33) )
          {
LABEL_61:
            *(_QWORD *)&v132 = 0;
            *((_QWORD *)&v132 + 1) = 1;
            *(_QWORD *)&v133 = 0;
            *(_QWORD *)&v116[16] = 1610612768;
            *(_QWORD *)v116 = &v132;
            *(_QWORD *)&v116[8] = &off_141799500;
            if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, v116) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_7,
                55,
                (unsigned int)&v142,
                (unsigned int)&unk_141796270,
                (__int64)&off_1417995B8);
            v41 = v132;
            v42 = v133;
            LODWORD(v125) = *(_DWORD *)((char *)&v133 + 1);
            *(_DWORD *)((char *)&v125 + 3) = DWORD1(v133);
            if ( !(_BYTE)Address && 2 * *v8 && !(unsigned __int8)sub_1416C2250(v40, v39) )
              *(_BYTE *)(v37 + 33) = 1;
            v43 = v140;
            v44 = *(_BYTE *)v140;
            *(_BYTE *)v140 = 0;
            if ( v44 == 2 )
              WakeByAddressSingle(v43);
            v45 = v125;
            *(_DWORD *)(a1 + 20) = *(_DWORD *)((char *)&v125 + 3);
            *(_DWORD *)(a1 + 17) = v45;
            *(_OWORD *)a1 = v41;
            *(_BYTE *)(a1 + 16) = v42;
            goto LABEL_113;
          }
        }
        sub_140881650(v116, &v76);
        *(_BYTE *)(v37 + 858) = v111;
        v143 = 1;
        sub_14149C500(&v132, &v76);
        v48 = *(_QWORD *)(v37 + 96);
        if ( v48 )
          sub_140001660(*(_QWORD *)(v37 + 104), v48, 1);
        *(_QWORD *)(v37 + 112) = v133;
        *(_OWORD *)(v37 + 96) = v132;
        *(_QWORD *)(v37 + 784) = *((_QWORD *)&v118 + 1);
        v49 = *(_QWORD *)(v37 + 120);
        if ( v49 )
          sub_140001660(*(_QWORD *)(v37 + 128), v49, 1);
        *(_QWORD *)(v37 + 136) = *(_QWORD *)&v116[16];
        *(_OWORD *)(v37 + 120) = *(_OWORD *)v116;
        v50 = *(_QWORD *)(v37 + 144);
        if ( v50 )
          sub_140001660(*(_QWORD *)(v37 + 152), v50, 1);
        *(_QWORD *)(v37 + 160) = v118;
        *(_OWORD *)(v37 + 144) = v117;
        *(_BYTE *)(v37 + 859) = v112;
        *(_QWORD *)(v37 + 792) = v119;
        *(_QWORD *)(v37 + 800) = v107;
        v143 = 0;
        sub_14149C500(&v132, &v83);
        v51 = *(_QWORD *)(v37 + 168);
        if ( v51 )
          sub_140001660(*(_QWORD *)(v37 + 176), v51, 1);
        *(_QWORD *)(v37 + 184) = v133;
        *(_OWORD *)(v37 + 168) = v132;
        v143 = 0;
        sub_14149C500(&v132, &v86);
        v52 = *(_QWORD *)(v37 + 192);
        if ( v52 )
          sub_140001660(*(_QWORD *)(v37 + 200), v52, 1);
        *(_QWORD *)(v37 + 208) = v133;
        *(_OWORD *)(v37 + 192) = v132;
        *(_OWORD *)(v37 + 808) = v108;
        v143 = 0;
        sub_14149C500(&v132, &v89);
        v53 = *(_QWORD *)(v37 + 216);
        if ( v53 )
          sub_140001660(*(_QWORD *)(v37 + 224), v53, 1);
        *(_QWORD *)(v37 + 232) = v133;
        *(_OWORD *)(v37 + 216) = v132;
        v143 = 0;
        sub_14149C500(&v132, &v92);
        v54 = *(_QWORD *)(v37 + 240);
        if ( v54 )
          sub_140001660(*(_QWORD *)(v37 + 248), v54, 1);
        *(_QWORD *)(v37 + 256) = v133;
        *(_OWORD *)(v37 + 240) = v132;
        *(_QWORD *)(v37 + 824) = v109;
        *(_BYTE *)(v37 + 860) = v113;
        v143 = 0;
        sub_140886210(&v132, v95, v96);
        v55 = *(_QWORD *)(v37 + 264);
        if ( v55 )
          sub_140001660(*(_QWORD *)(v37 + 272), v55, 1);
        *(_QWORD *)(v37 + 280) = v133;
        *(_OWORD *)(v37 + 264) = v132;
        *(_BYTE *)(v37 + 862) = v114;
        v143 = 0;
        sub_140885470(&v132, v97, v98);
        v56 = *(_QWORD *)(v37 + 288);
        if ( v56 )
          sub_140001660(*(_QWORD *)(v37 + 296), v56, 1);
        *(_QWORD *)(v37 + 304) = v133;
        *(_OWORD *)(v37 + 288) = v132;
        v57 = v104;
        v143 = 0;
        sub_14067D7A0(&v132, v102);
        v134 = v57;
        v125 = v132;
        v126 = v133;
        v127 = v57;
        v122 = v37 + 736;
        sub_1405AF180((const __m128i **)(v37 + 736));
        v58 = v125;
        v59 = v126;
        *(_OWORD *)(v37 + 768) = v127;
        *(_OWORD *)(v37 + 752) = v59;
        *(_OWORD *)(v37 + 736) = v58;
        *(_WORD *)(v37 + 856) = v110;
        if ( v100 == 10 )
        {
          if ( *(_QWORD *)v99 ^ 0x6F72447265746177LL | *(unsigned __int16 *)(v99 + 8) ^ 0x3170LL )
          {
            if ( *(_QWORD *)v99 ^ 0x6F72447265746177LL | *(unsigned __int16 *)(v99 + 8) ^ 0x3270LL )
              goto LABEL_95;
            goto LABEL_98;
          }
        }
        else
        {
          if ( v100 != 6 )
          {
LABEL_95:
            v60 = 2;
LABEL_100:
            *(_BYTE *)(v37 + 861) = v60;
            v143 = 0;
            sub_14149C500(&v132, v101);
            v62 = *(_QWORD *)(v37 + 576);
            if ( v62 )
              sub_140001660(*(_QWORD *)(v37 + 584), v62, 1);
            *(_QWORD *)(v37 + 592) = v133;
            *(_OWORD *)(v37 + 576) = v132;
            *(_BYTE *)(v37 + 863) = v115;
            v123 = v71;
            *(_QWORD *)&v125 = 0;
            *((_QWORD *)&v125 + 1) = 1;
            *(_QWORD *)&v126 = 0;
            *(_QWORD *)&v133 = 1610612768;
            *(_QWORD *)&v132 = &v125;
            *((_QWORD *)&v132 + 1) = &off_141799500;
            if ( (unsigned __int8)sub_14148F3A0(&v123, &v132, v61) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_7,
                55,
                (unsigned int)&v142,
                (unsigned int)&unk_141796270,
                (__int64)&off_1417995B8);
            v139 = v126;
            v138 = v125;
            v64 = *(_QWORD *)(v37 + 552);
            v65 = (char *)(v37 + 32);
            if ( v64 )
              sub_140001660(*(_QWORD *)(v37 + 560), v64, 1);
            *(_QWORD *)(v37 + 568) = v139;
            *(_OWORD *)(v37 + 552) = v138;
            if ( !(_BYTE)Address && 2 * *v8 && !(unsigned __int8)sub_1416C2250(v63, v64) )
              *(_BYTE *)(v37 + 33) = 1;
            v66 = *v65;
            *v65 = 0;
            if ( v66 == 2 )
              WakeByAddressSingle((PVOID)(v37 + 32));
            sub_1408846D0(v116);
            if ( *(_QWORD *)v116 == -1 )
            {
              sub_1408866E0(v116, a2);
              if ( *(_QWORD *)v116 == -1 )
              {
                sub_140873770(v116, a2);
                if ( *(_QWORD *)v116 == -1 )
                {
                  *(_QWORD *)a1 = -1;
                  sub_1407DB700((__int64)&v76);
                  goto LABEL_114;
                }
              }
            }
            *(_QWORD *)(a1 + 16) = *(_QWORD *)&v116[16];
            *(_OWORD *)a1 = *(_OWORD *)v116;
LABEL_113:
            sub_1407DB700((__int64)&v76);
LABEL_114:
            sub_140016620(&v68);
            return a1;
          }
          if ( *(_DWORD *)v99 ^ 0x65746177 | *(unsigned __int16 *)(v99 + 4) ^ 0x3172 )
          {
            if ( *(_DWORD *)v99 ^ 0x65746177 | *(unsigned __int16 *)(v99 + 4) ^ 0x3272 )
              goto LABEL_95;
LABEL_98:
            v60 = 1;
            goto LABEL_100;
          }
        }
        v60 = 0;
        goto LABEL_100;
      }
    }
    sub_140884530(v116, v27, v109);
    if ( *(_QWORD *)v116 != -1 )
    {
      if ( *(_QWORD *)v116 )
        sub_140001660(*(_QWORD *)&v116[8], *(_QWORD *)v116, 1);
      *(_QWORD *)v116 = (char *)&v108 + 8;
      *(_QWORD *)&v116[8] = sub_1414AC5F0;
      *(_QWORD *)&v116[16] = &v109;
      *(_QWORD *)&v117 = sub_1414AC520;
      sub_14149C0F0(&v125, &unk_1417991E2, v116);
      sub_1403565C0((unsigned int)aVoice_0, 5, (unsigned int)aTriggerBinding_0, 25, (__int64)&v125);
      *((_QWORD *)&v108 + 1) = 0;
      if ( v89 )
        sub_140001660(v90, v89, 1);
      v89 = 0;
      v90 = 1;
      v91 = 0;
      nullsub_1(v28);
      v29 = (_QWORD *)sub_140001650(8, 1);
      if ( !v29 )
        sub_1416C2D4B(1, 8);
      v30 = v29;
      *v29 = 0x7265696669646F6DLL;
      if ( v92 )
        sub_140001660(v93, v92, 1);
      v92 = 8;
      v93 = v30;
      v94 = 8;
      v109 = 0;
      v26 = 1;
    }
    goto LABEL_40;
  }
  LODWORD(v140) = 0;
  v9 = v7[1];
  Address = v7;
  if ( !v9 )
    goto LABEL_14;
LABEL_6:
  *(_QWORD *)v116 = 0;
  *(_QWORD *)&v116[8] = 1;
  *(_QWORD *)&v116[16] = 0;
  v70 = 1610612768;
  v68 = v116;
  v69 = &off_141799500;
  if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v68) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_7,
      55,
      (unsigned int)&v142,
      (unsigned int)&unk_141796270,
      (__int64)&off_1417995B8);
  v12 = *(_OWORD *)v116;
  v13 = v116[16];
  v131[0] = *(_DWORD *)&v116[17];
  *(_DWORD *)((char *)v131 + 3) = *(_DWORD *)&v116[20];
  v14 = (char *)Address;
  if ( !(_BYTE)v140 && 2 * *v8 && !(unsigned __int8)sub_1416C2250(v11, v10) )
    v14[1] = 1;
  v15 = *v14;
  *v14 = 0;
  if ( v15 == 2 )
    WakeByAddressSingle(v14);
  *(_OWORD *)a1 = v12;
  *(_BYTE *)(a1 + 16) = v13;
  v16 = *(_DWORD *)((char *)v131 + 3);
  *(_DWORD *)(a1 + 17) = v131[0];
  *(_DWORD *)(a1 + 20) = v16;
  return a1;
}