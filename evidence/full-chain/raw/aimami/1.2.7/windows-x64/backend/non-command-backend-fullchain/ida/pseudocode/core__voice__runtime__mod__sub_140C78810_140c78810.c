// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140c78810 | name sub_140C78810
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C78810(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  __int64 v5; // rcx
  _BYTE *v6; // rbx
  __int64 *v7; // r15
  char v8; // al
  __int64 v9; // rcx
  __int128 v10; // kr00_16
  char v11; // r14
  char *v12; // r12
  char v13; // al
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  char *v17; // rbx
  char v18; // al
  __int64 v19; // r14
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  char v23; // bl
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // r12
  _QWORD *v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int128 v36; // kr10_16
  char v37; // r12
  PVOID v38; // rcx
  char v39; // al
  int v40; // eax
  __int128 v41; // xmm0
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int128 v52; // xmm6
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  char v55; // al
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  char *v60; // r12
  char v61; // al
  _BYTE *v63; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall **v64)(); // [rsp+38h] [rbp-48h]
  __int64 v65; // [rsp+40h] [rbp-40h]
  __int128 v66; // [rsp+318h] [rbp+298h]
  __int128 v67; // [rsp+410h] [rbp+390h]
  __int64 v68; // [rsp+420h] [rbp+3A0h]
  __int128 v69; // [rsp+430h] [rbp+3B0h]
  __int64 v70; // [rsp+440h] [rbp+3C0h]
  __int64 v71; // [rsp+448h] [rbp+3C8h] BYREF
  __int128 v72; // [rsp+450h] [rbp+3D0h]
  __int64 v73; // [rsp+460h] [rbp+3E0h]
  __m128i v74; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v75; // [rsp+478h] [rbp+3F8h]
  _QWORD *v76; // [rsp+480h] [rbp+400h]
  __int64 v77; // [rsp+488h] [rbp+408h]
  __int64 v78; // [rsp+490h] [rbp+410h] BYREF
  __int64 v79; // [rsp+498h] [rbp+418h]
  __int64 v80; // [rsp+4A0h] [rbp+420h]
  __int64 v81; // [rsp+4A8h] [rbp+428h] BYREF
  _QWORD *v82; // [rsp+4B0h] [rbp+430h]
  __int64 v83; // [rsp+4B8h] [rbp+438h]
  __int64 v84; // [rsp+4C0h] [rbp+440h] BYREF
  __int64 v85; // [rsp+4C8h] [rbp+448h]
  __int64 v86; // [rsp+4D0h] [rbp+450h]
  __int64 v87; // [rsp+4D8h] [rbp+458h] BYREF
  _QWORD *v88; // [rsp+4E0h] [rbp+460h]
  __int64 v89; // [rsp+4E8h] [rbp+468h]
  __int64 v90; // [rsp+4F8h] [rbp+478h]
  __int64 v91; // [rsp+500h] [rbp+480h]
  __int64 v92; // [rsp+510h] [rbp+490h]
  __int64 v93; // [rsp+518h] [rbp+498h]
  __int64 v94; // [rsp+540h] [rbp+4C0h]
  __int64 v95; // [rsp+548h] [rbp+4C8h]
  char v96[24]; // [rsp+550h] [rbp+4D0h] BYREF
  _BYTE v97[24]; // [rsp+568h] [rbp+4E8h] BYREF
  __int64 v98; // [rsp+580h] [rbp+500h]
  __int128 v99; // [rsp+588h] [rbp+508h]
  __int64 v100; // [rsp+598h] [rbp+518h] BYREF
  __int64 v101; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v102; // [rsp+5A8h] [rbp+528h] BYREF
  __int128 v103; // [rsp+5B0h] [rbp+530h] BYREF
  __int64 v104; // [rsp+5C0h] [rbp+540h] BYREF
  __int16 v105; // [rsp+5CCh] [rbp+54Ch]
  char v106; // [rsp+5CEh] [rbp+54Eh]
  char v107; // [rsp+5CFh] [rbp+54Fh]
  char v108; // [rsp+5D1h] [rbp+551h]
  char v109; // [rsp+5D2h] [rbp+552h]
  char v110; // [rsp+5D3h] [rbp+553h]
  _BYTE v111[24]; // [rsp+5D8h] [rbp+558h] BYREF
  __int128 v112; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v113; // [rsp+600h] [rbp+580h]
  __int128 v114; // [rsp+610h] [rbp+590h]
  __int128 v115; // [rsp+620h] [rbp+5A0h]
  __int128 v116; // [rsp+630h] [rbp+5B0h]
  __int64 v117; // [rsp+768h] [rbp+6E8h]
  __int128 v118; // [rsp+770h] [rbp+6F0h] BYREF
  __int64 v119; // [rsp+780h] [rbp+700h]
  __int128 v120; // [rsp+790h] [rbp+710h] BYREF
  __int128 v121; // [rsp+7A0h] [rbp+720h]
  __int128 v122; // [rsp+7B0h] [rbp+730h]
  __int128 v123; // [rsp+7C0h] [rbp+740h]
  __int128 v124; // [rsp+7D0h] [rbp+750h]
  __int128 v125; // [rsp+7E0h] [rbp+760h]
  _DWORD v126[2]; // [rsp+7F8h] [rbp+778h]
  __int128 v127; // [rsp+800h] [rbp+780h] BYREF
  __int128 v128; // [rsp+810h] [rbp+790h]
  __int128 v129; // [rsp+820h] [rbp+7A0h]
  __int128 v130; // [rsp+830h] [rbp+7B0h]
  __int128 v131; // [rsp+840h] [rbp+7C0h]
  __int128 v132; // [rsp+850h] [rbp+7D0h]
  __int128 v133; // [rsp+860h] [rbp+7E0h] BYREF
  __int64 v134; // [rsp+870h] [rbp+7F0h]
  PVOID v135; // [rsp+880h] [rbp+800h]
  PVOID Address; // [rsp+888h] [rbp+808h]
  char v137; // [rsp+896h] [rbp+816h] BYREF
  char v138; // [rsp+897h] [rbp+817h]
  __int64 v139; // [rsp+898h] [rbp+818h]

  v139 = -2;
  v4 = (_BYTE *)sub_1404C9470((volatile void *)(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 5016LL) + 16LL));
  if ( !v4 )
  {
    *(_QWORD *)v111 = aStdSyncPoisonM;
    *(_QWORD *)&v111[8] = 76;
    v63 = v111;
    v64 = (__int64 (__fastcall **)())sub_140186EE0;
    sub_1419392A0(&unk_141A0F720, &v63, &off_141A0F7A8);
  }
  v6 = v4;
  LOBYTE(v5) = 1;
  if ( _InterlockedCompareExchange8(v4, 1, 0) )
    sub_141937480(v4);
  v7 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v15 = sub_141938160(v5);
    LOBYTE(v15) = v15 ^ 1;
    LODWORD(v135) = v15;
    LOBYTE(v15) = v6[1];
    Address = v6;
    if ( (_BYTE)v15 )
      goto LABEL_6;
LABEL_14:
    sub_14028DE70((__int64)&v63, (__int64)(v6 + 8));
    v17 = (char *)Address;
    if ( !(_BYTE)v135 && 2 * *v7 && !(unsigned __int8)sub_141938160(v16) )
      v17[1] = 1;
    v18 = *v17;
    *v17 = 0;
    if ( v18 == 2 )
      WakeByAddressSingle(v17);
    sub_140C7AE80(v111, &v63);
    v19 = *(_QWORD *)v111;
    if ( *(_QWORD *)v111 == -1 )
    {
      v132 = v116;
      v131 = v115;
      v130 = v114;
      v129 = v113;
      v128 = v112;
      v127 = *(_OWORD *)&v111[8];
      *(_QWORD *)&v133 = 0;
      *((_QWORD *)&v133 + 1) = 1;
      v134 = 0;
      *(_QWORD *)&v121 = 1610612768;
      *(_QWORD *)&v120 = &v133;
      *((_QWORD *)&v120 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(&v127, &v120) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v137,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v119 = v134;
      v118 = v133;
      sub_140BAC840(&v111[8]);
      v41 = v118;
      v67 = v118;
      v68 = v119;
      *(_QWORD *)(a1 + 16) = v119;
      *(_OWORD *)a1 = v41;
      goto LABEL_114;
    }
    v70 = v112;
    v69 = *(_OWORD *)&v111[8];
    sub_1418F44E0(&v74, (const __m128i *)((char *)&v112 + 8), 0x170u);
    v68 = v70;
    v72 = v69;
    v73 = v70;
    v71 = v19;
    if ( !v102 || (sub_140C86C50(v111, v102, v103), *(_QWORD *)v111 == -1) )
    {
      v23 = 0;
      v24 = *((_QWORD *)&v103 + 1);
      if ( !*((_QWORD *)&v103 + 1) )
        goto LABEL_40;
    }
    else
    {
      if ( *(_QWORD *)v111 )
        sub_140001660(*(_QWORD *)&v111[8], *(_QWORD *)v111, 1);
      *(_QWORD *)v111 = &v102;
      *(_QWORD *)&v111[8] = sub_1416BCBE0;
      *(_QWORD *)&v111[16] = &v103;
      *(_QWORD *)&v112 = sub_1416BCB10;
      sub_1416ABFD0(&v133, &unk_141A3F018, v111);
      sub_14019B500((unsigned int)aVoice_0, 5, (unsigned int)aTriggerBinding_0, 25, (__int64)&v133);
      v102 = 0;
      if ( v78 )
        sub_140001660(v79, v78, 1);
      v78 = 0;
      v79 = 1;
      v80 = 0;
      nullsub_1(v20);
      v21 = (_QWORD *)sub_140001650(8, 1);
      if ( !v21 )
        sub_141938D2B(1, 8);
      v22 = v21;
      *v21 = 0x7265696669646F6DLL;
      if ( v81 )
        sub_140001660(v82, v81, 1);
      v81 = 8;
      v82 = v22;
      v83 = 8;
      *(_QWORD *)&v103 = 0;
      v23 = 1;
      v24 = *((_QWORD *)&v103 + 1);
      if ( !*((_QWORD *)&v103 + 1) )
      {
LABEL_40:
        if ( v100 )
        {
          sub_140C86C50(v111, v100, v101);
          if ( *(_QWORD *)v111 != -1 )
          {
            if ( *(_QWORD *)v111 )
              sub_140001660(*(_QWORD *)&v111[8], *(_QWORD *)v111, 1);
            *(_QWORD *)v111 = &v100;
            *(_QWORD *)&v111[8] = sub_1416BCBE0;
            *(_QWORD *)&v111[16] = &v101;
            *(_QWORD *)&v112 = sub_1416BCB10;
            sub_1416ABFD0(&v127, &unk_141A3F074, v111);
            sub_14019B500((unsigned int)aVoice_0, 5, (unsigned int)aTriggerBinding_0, 25, (__int64)&v127);
            v100 = 0;
            if ( v73 )
              sub_140001660(v74.m128i_i64[0], v73, 1);
            v73 = 0;
            v74 = (__m128i)1uLL;
            nullsub_1(v28);
            v29 = (_QWORD *)sub_140001650(8, 1);
            if ( !v29 )
              sub_141938D2B(1, 8);
            v30 = v29;
            *v29 = 0x7265696669646F6DLL;
            if ( v75 )
              sub_140001660(v76, v75, 1);
            v75 = 8;
            v76 = v30;
            v77 = 8;
            v101 = 0;
            v23 = 1;
          }
        }
        v31 = v98;
        sub_140373580(v97);
        if ( (v98 != v31) | (unsigned __int8)v23 )
        {
          v32 = off_1421E6EC0;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            *((_QWORD *)&v113 + 1) = 2;
            *(_QWORD *)&v114 = aCodexmateLibCo_32;
            *((_QWORD *)&v114 + 1) = 35;
            *((_QWORD *)&v115 + 1) = &unk_141A3EBFB;
            *(_QWORD *)&v116 = 195;
            *(_QWORD *)v111 = 0;
            *(_QWORD *)&v111[8] = aCodexmateLibCo_32;
            *(_QWORD *)&v111[16] = 35;
            *(_QWORD *)&v112 = 0;
            *((_QWORD *)&v112 + 1) = aSrcCoreVoiceRu_1;
            *(_QWORD *)&v113 = 29;
            *(_QWORD *)&v115 = 0x27B00000001LL;
            sub_1414D53A0(&v137, v111);
          }
          sub_140C7DBC0(&v120, &v63, &v71);
          if ( (_DWORD)v120 != -1 )
          {
            v132 = v125;
            v131 = v124;
            v130 = v123;
            v129 = v122;
            v128 = v121;
            v127 = v120;
            if ( *v32 >= 2u )
            {
              *(_QWORD *)&v133 = &v127;
              *((_QWORD *)&v133 + 1) = sub_14104A7D0;
              *((_QWORD *)&v113 + 1) = 2;
              *(_QWORD *)&v114 = aCodexmateLibCo_32;
              *((_QWORD *)&v114 + 1) = 35;
              *((_QWORD *)&v115 + 1) = &unk_141A3EC5C;
              *(_QWORD *)&v116 = &v133;
              *(_QWORD *)v111 = 0;
              *(_QWORD *)&v111[8] = aCodexmateLibCo_32;
              *(_QWORD *)&v111[16] = 35;
              *(_QWORD *)&v112 = 0;
              *((_QWORD *)&v112 + 1) = aSrcCoreVoiceRu_1;
              *(_QWORD *)&v113 = 29;
              *(_QWORD *)&v115 = 0x27F00000001LL;
              sub_1414D53A0(&v137, v111);
            }
            sub_140BAC840(&v127);
          }
        }
        v33 = sub_14054A5A0(a2);
        LOBYTE(v34) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v33 + 32), 1, 0) )
          sub_141937480((volatile void *)(v33 + 32));
        if ( 2 * *v7 )
        {
          v42 = sub_141938160(v34);
          LOBYTE(v42) = v42 ^ 1;
          LODWORD(Address) = v42;
          v135 = (PVOID)(v33 + 32);
          if ( *(_BYTE *)(v33 + 33) )
            goto LABEL_61;
        }
        else
        {
          LODWORD(Address) = 0;
          v135 = (PVOID)(v33 + 32);
          if ( *(_BYTE *)(v33 + 33) )
          {
LABEL_61:
            *(_QWORD *)&v127 = 0;
            *((_QWORD *)&v127 + 1) = 1;
            *(_QWORD *)&v128 = 0;
            *(_QWORD *)&v111[16] = 1610612768;
            *(_QWORD *)v111 = &v127;
            *(_QWORD *)&v111[8] = &off_141A3FE88;
            if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, v111) )
              sub_141939040(
                (unsigned int)aADisplayImplem_7,
                55,
                (unsigned int)&v137,
                (unsigned int)&unk_141A3BB68,
                (__int64)&off_141A3FF40);
            v36 = v127;
            v37 = v128;
            LODWORD(v120) = *(_DWORD *)((char *)&v128 + 1);
            *(_DWORD *)((char *)&v120 + 3) = DWORD1(v128);
            if ( !(_BYTE)Address && 2 * *v7 && !(unsigned __int8)sub_141938160(v35) )
              *(_BYTE *)(v33 + 33) = 1;
            v38 = v135;
            v39 = *(_BYTE *)v135;
            *(_BYTE *)v135 = 0;
            if ( v39 == 2 )
              WakeByAddressSingle(v38);
            v40 = v120;
            *(_DWORD *)(a1 + 20) = *(_DWORD *)((char *)&v120 + 3);
            *(_DWORD *)(a1 + 17) = v40;
            *(_OWORD *)a1 = v36;
            *(_BYTE *)(a1 + 16) = v37;
            goto LABEL_113;
          }
        }
        sub_140C83D70(v111, &v71);
        *(_BYTE *)(v33 + 858) = v106;
        v138 = 1;
        sub_1416AC440(&v127, &v71);
        v43 = *(_QWORD *)(v33 + 96);
        if ( v43 )
          sub_140001660(*(_QWORD *)(v33 + 104), v43, 1);
        *(_QWORD *)(v33 + 112) = v128;
        *(_OWORD *)(v33 + 96) = v127;
        *(_QWORD *)(v33 + 784) = *((_QWORD *)&v113 + 1);
        v44 = *(_QWORD *)(v33 + 120);
        if ( v44 )
          sub_140001660(*(_QWORD *)(v33 + 128), v44, 1);
        *(_QWORD *)(v33 + 136) = *(_QWORD *)&v111[16];
        *(_OWORD *)(v33 + 120) = *(_OWORD *)v111;
        v45 = *(_QWORD *)(v33 + 144);
        if ( v45 )
          sub_140001660(*(_QWORD *)(v33 + 152), v45, 1);
        *(_QWORD *)(v33 + 160) = v113;
        *(_OWORD *)(v33 + 144) = v112;
        *(_BYTE *)(v33 + 859) = v107;
        *(_QWORD *)(v33 + 792) = v114;
        *(_QWORD *)(v33 + 800) = v102;
        v138 = 0;
        sub_1416AC440(&v127, &v78);
        v46 = *(_QWORD *)(v33 + 168);
        if ( v46 )
          sub_140001660(*(_QWORD *)(v33 + 176), v46, 1);
        *(_QWORD *)(v33 + 184) = v128;
        *(_OWORD *)(v33 + 168) = v127;
        v138 = 0;
        sub_1416AC440(&v127, &v81);
        v47 = *(_QWORD *)(v33 + 192);
        if ( v47 )
          sub_140001660(*(_QWORD *)(v33 + 200), v47, 1);
        *(_QWORD *)(v33 + 208) = v128;
        *(_OWORD *)(v33 + 192) = v127;
        *(_OWORD *)(v33 + 808) = v103;
        v138 = 0;
        sub_1416AC440(&v127, &v84);
        v48 = *(_QWORD *)(v33 + 216);
        if ( v48 )
          sub_140001660(*(_QWORD *)(v33 + 224), v48, 1);
        *(_QWORD *)(v33 + 232) = v128;
        *(_OWORD *)(v33 + 216) = v127;
        v138 = 0;
        sub_1416AC440(&v127, &v87);
        v49 = *(_QWORD *)(v33 + 240);
        if ( v49 )
          sub_140001660(*(_QWORD *)(v33 + 248), v49, 1);
        *(_QWORD *)(v33 + 256) = v128;
        *(_OWORD *)(v33 + 240) = v127;
        *(_QWORD *)(v33 + 824) = v104;
        *(_BYTE *)(v33 + 860) = v108;
        v138 = 0;
        sub_140C88910(&v127, v90, v91);
        v50 = *(_QWORD *)(v33 + 264);
        if ( v50 )
          sub_140001660(*(_QWORD *)(v33 + 272), v50, 1);
        *(_QWORD *)(v33 + 280) = v128;
        *(_OWORD *)(v33 + 264) = v127;
        *(_BYTE *)(v33 + 862) = v109;
        v138 = 0;
        sub_140C87B90(&v127, v92, v93);
        v51 = *(_QWORD *)(v33 + 288);
        if ( v51 )
          sub_140001660(*(_QWORD *)(v33 + 296), v51, 1);
        *(_QWORD *)(v33 + 304) = v128;
        *(_OWORD *)(v33 + 288) = v127;
        v52 = v99;
        v138 = 0;
        sub_14036DC70(&v127, v97);
        v129 = v52;
        v120 = v127;
        v121 = v128;
        v122 = v52;
        v117 = v33 + 736;
        sub_140298A70((const __m128i **)(v33 + 736));
        v53 = v120;
        v54 = v121;
        *(_OWORD *)(v33 + 768) = v122;
        *(_OWORD *)(v33 + 752) = v54;
        *(_OWORD *)(v33 + 736) = v53;
        *(_WORD *)(v33 + 856) = v105;
        if ( v95 == 10 )
        {
          if ( *(_QWORD *)v94 ^ 0x6F72447265746177LL | *(unsigned __int16 *)(v94 + 8) ^ 0x3170LL )
          {
            if ( *(_QWORD *)v94 ^ 0x6F72447265746177LL | *(unsigned __int16 *)(v94 + 8) ^ 0x3270LL )
              goto LABEL_95;
            goto LABEL_98;
          }
        }
        else
        {
          if ( v95 != 6 )
          {
LABEL_95:
            v55 = 2;
LABEL_100:
            *(_BYTE *)(v33 + 861) = v55;
            v138 = 0;
            sub_1416AC440(&v127, v96);
            v57 = *(_QWORD *)(v33 + 576);
            if ( v57 )
              sub_140001660(*(_QWORD *)(v33 + 584), v57, 1);
            *(_QWORD *)(v33 + 592) = v128;
            *(_OWORD *)(v33 + 576) = v127;
            *(_BYTE *)(v33 + 863) = v110;
            v118 = v66;
            *(_QWORD *)&v120 = 0;
            *((_QWORD *)&v120 + 1) = 1;
            *(_QWORD *)&v121 = 0;
            *(_QWORD *)&v128 = 1610612768;
            *(_QWORD *)&v127 = &v120;
            *((_QWORD *)&v127 + 1) = &off_141A3FE88;
            if ( (unsigned __int8)sub_14169F630(&v118, &v127, v56) )
              sub_141939040(
                (unsigned int)aADisplayImplem_7,
                55,
                (unsigned int)&v137,
                (unsigned int)&unk_141A3BB68,
                (__int64)&off_141A3FF40);
            v134 = v121;
            v133 = v120;
            v59 = *(_QWORD *)(v33 + 552);
            v60 = (char *)(v33 + 32);
            if ( v59 )
              sub_140001660(*(_QWORD *)(v33 + 560), v59, 1);
            *(_QWORD *)(v33 + 568) = v134;
            *(_OWORD *)(v33 + 552) = v133;
            if ( !(_BYTE)Address && 2 * *v7 && !(unsigned __int8)sub_141938160(v58) )
              *(_BYTE *)(v33 + 33) = 1;
            v61 = *v60;
            *v60 = 0;
            if ( v61 == 2 )
              WakeByAddressSingle((PVOID)(v33 + 32));
            sub_140C86DF0(v111);
            if ( *(_QWORD *)v111 == -1 )
            {
              sub_140C88E30(v111, a2);
              if ( *(_QWORD *)v111 == -1 )
              {
                sub_140C75E50(v111, a2);
                if ( *(_QWORD *)v111 == -1 )
                {
                  *(_QWORD *)a1 = -1;
                  sub_14062B2F0((__int64)&v71);
                  goto LABEL_114;
                }
              }
            }
            *(_QWORD *)(a1 + 16) = *(_QWORD *)&v111[16];
            *(_OWORD *)a1 = *(_OWORD *)v111;
LABEL_113:
            sub_14062B2F0((__int64)&v71);
LABEL_114:
            sub_140034990(&v63);
            return a1;
          }
          if ( *(_DWORD *)v94 ^ 0x65746177 | *(unsigned __int16 *)(v94 + 4) ^ 0x3172 )
          {
            if ( *(_DWORD *)v94 ^ 0x65746177 | *(unsigned __int16 *)(v94 + 4) ^ 0x3272 )
              goto LABEL_95;
LABEL_98:
            v55 = 1;
            goto LABEL_100;
          }
        }
        v55 = 0;
        goto LABEL_100;
      }
    }
    sub_140C86C50(v111, v24, v104);
    if ( *(_QWORD *)v111 != -1 )
    {
      if ( *(_QWORD *)v111 )
        sub_140001660(*(_QWORD *)&v111[8], *(_QWORD *)v111, 1);
      *(_QWORD *)v111 = (char *)&v103 + 8;
      *(_QWORD *)&v111[8] = sub_1416BCBE0;
      *(_QWORD *)&v111[16] = &v104;
      *(_QWORD *)&v112 = sub_1416BCB10;
      sub_1416ABFD0(&v120, &unk_141A3F054, v111);
      sub_14019B500((unsigned int)aVoice_0, 5, (unsigned int)aTriggerBinding_0, 25, (__int64)&v120);
      *((_QWORD *)&v103 + 1) = 0;
      if ( v84 )
        sub_140001660(v85, v84, 1);
      v84 = 0;
      v85 = 1;
      v86 = 0;
      nullsub_1(v25);
      v26 = (_QWORD *)sub_140001650(8, 1);
      if ( !v26 )
        sub_141938D2B(1, 8);
      v27 = v26;
      *v26 = 0x7265696669646F6DLL;
      if ( v87 )
        sub_140001660(v88, v87, 1);
      v87 = 8;
      v88 = v27;
      v89 = 8;
      v104 = 0;
      v23 = 1;
    }
    goto LABEL_40;
  }
  LODWORD(v135) = 0;
  v8 = v6[1];
  Address = v6;
  if ( !v8 )
    goto LABEL_14;
LABEL_6:
  *(_QWORD *)v111 = 0;
  *(_QWORD *)&v111[8] = 1;
  *(_QWORD *)&v111[16] = 0;
  v65 = 1610612768;
  v63 = v111;
  v64 = &off_141A3FE88;
  if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, &v63) )
    sub_141939040(
      (unsigned int)aADisplayImplem_7,
      55,
      (unsigned int)&v137,
      (unsigned int)&unk_141A3BB68,
      (__int64)&off_141A3FF40);
  v10 = *(_OWORD *)v111;
  v11 = v111[16];
  v126[0] = *(_DWORD *)&v111[17];
  *(_DWORD *)((char *)v126 + 3) = *(_DWORD *)&v111[20];
  v12 = (char *)Address;
  if ( !(_BYTE)v135 && 2 * *v7 && !(unsigned __int8)sub_141938160(v9) )
    v12[1] = 1;
  v13 = *v12;
  *v12 = 0;
  if ( v13 == 2 )
    WakeByAddressSingle(v12);
  *(_OWORD *)a1 = v10;
  *(_BYTE *)(a1 + 16) = v11;
  v14 = *(_DWORD *)((char *)v126 + 3);
  *(_DWORD *)(a1 + 17) = v126[0];
  *(_DWORD *)(a1 + 20) = v14;
  return a1;
}
