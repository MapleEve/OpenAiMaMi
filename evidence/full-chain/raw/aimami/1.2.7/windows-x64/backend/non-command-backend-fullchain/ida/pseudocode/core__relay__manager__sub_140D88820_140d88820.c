// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d88820 | name sub_140D88820
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_140D88820(__int128 *a1, _QWORD *a2, char a3, unsigned __int8 a4, __int128 a5)
{
  __int128 *v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rbx
  char *v12; // r15
  __int64 *v13; // r14
  unsigned int v14; // r12d
  void *v15; // rax
  __int64 v16; // rcx
  char v17; // cl
  __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // dl
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  int v25; // edx
  unsigned __int8 v26; // r15
  void *v27; // rcx
  __int64 v28; // r15
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  char v35; // al
  __int64 v36; // r12
  unsigned __int8 v37; // cl
  __int64 v38; // r15
  __int64 v39; // r12
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int128 v43; // kr10_16
  __int128 *v44; // r12
  __int64 v45; // r13
  __int64 v46; // rcx
  char v47; // al
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int64 (__fastcall *v55)(); // r12
  __int64 v56; // r9
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __int64 v60; // rax
  char v61; // r15
  unsigned __int8 v62; // di
  __int64 v63; // rdi
  __int64 v64; // r13
  __int64 v65; // r15
  __int64 v66; // rdx
  __int64 v67; // r15
  unsigned int v68; // edi
  __int128 v69; // kr20_16
  int v70; // edx
  int v71; // r14d
  char v72; // cl
  __int64 v73; // rax
  __int64 v74; // r13
  char v75; // al
  char v76; // cl
  char *v77; // rdi
  char v78; // al
  PVOID v79; // rcx
  char v80; // al
  void *v81; // rdi
  void *v82; // rdi
  char v83; // cl
  __int64 v84; // [rsp+78h] [rbp-8h] BYREF
  __int128 v85; // [rsp+80h] [rbp+0h]
  __int128 v86; // [rsp+90h] [rbp+10h]
  __int128 v87; // [rsp+A0h] [rbp+20h]
  __int128 v88; // [rsp+B0h] [rbp+30h]
  __int128 v89; // [rsp+C0h] [rbp+40h]
  __int128 v90; // [rsp+D0h] [rbp+50h]
  __m128i v91[42]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v92; // [rsp+380h] [rbp+300h]
  __int64 v93; // [rsp+388h] [rbp+308h]
  _BYTE v94[24]; // [rsp+458h] [rbp+3D8h] BYREF
  _BYTE v95[24]; // [rsp+470h] [rbp+3F0h] BYREF
  _BYTE v96[24]; // [rsp+488h] [rbp+408h] BYREF
  _QWORD v97[45]; // [rsp+4A0h] [rbp+420h] BYREF
  char v98; // [rsp+60Ch] [rbp+58Ch]
  unsigned __int8 v99; // [rsp+61Eh] [rbp+59Eh]
  _OWORD v100[6]; // [rsp+620h] [rbp+5A0h] BYREF
  _BYTE v101[24]; // [rsp+688h] [rbp+608h] BYREF
  __int64 v102; // [rsp+6A0h] [rbp+620h] BYREF
  _OWORD v103[10]; // [rsp+6A8h] [rbp+628h] BYREF
  __int64 v104; // [rsp+748h] [rbp+6C8h]
  __int128 v105; // [rsp+750h] [rbp+6D0h] BYREF
  __int64 v106; // [rsp+760h] [rbp+6E0h]
  __int128 v107; // [rsp+768h] [rbp+6E8h] BYREF
  __int64 v108; // [rsp+778h] [rbp+6F8h]
  __int128 v109; // [rsp+780h] [rbp+700h] BYREF
  __int64 v110; // [rsp+790h] [rbp+710h]
  __int128 v111; // [rsp+798h] [rbp+718h] BYREF
  __int64 v112; // [rsp+7A8h] [rbp+728h]
  __int128 v113; // [rsp+7B0h] [rbp+730h] BYREF
  __int64 v114; // [rsp+7C0h] [rbp+740h]
  __int128 v115; // [rsp+7C8h] [rbp+748h] BYREF
  __int64 v116; // [rsp+7D8h] [rbp+758h]
  _BYTE v117[104]; // [rsp+7E0h] [rbp+760h] BYREF
  __m128i v118[17]; // [rsp+848h] [rbp+7C8h] BYREF
  char v119; // [rsp+95Eh] [rbp+8DEh]
  __int128 v120; // [rsp+960h] [rbp+8E0h]
  _BYTE *v121; // [rsp+970h] [rbp+8F0h]
  __m128i v122; // [rsp+978h] [rbp+8F8h]
  _BYTE *v123; // [rsp+988h] [rbp+908h]
  __m128i v124; // [rsp+BC8h] [rbp+B48h] BYREF
  _BYTE *v125; // [rsp+BD8h] [rbp+B58h]
  __int64 (__fastcall *v126)(_QWORD, _QWORD); // [rsp+BE0h] [rbp+B60h]
  __int64 v127; // [rsp+C78h] [rbp+BF8h] BYREF
  __int128 v128; // [rsp+C80h] [rbp+C00h]
  __int64 v129; // [rsp+C90h] [rbp+C10h]
  _BYTE v130[104]; // [rsp+C98h] [rbp+C18h] BYREF
  _BYTE v131[104]; // [rsp+D00h] [rbp+C80h] BYREF
  __int128 v132; // [rsp+D68h] [rbp+CE8h]
  __int128 v133; // [rsp+D78h] [rbp+CF8h]
  __int128 v134; // [rsp+D88h] [rbp+D08h]
  __int128 v135; // [rsp+D98h] [rbp+D18h]
  __int64 v136; // [rsp+DA8h] [rbp+D28h]
  __int128 v137; // [rsp+E88h] [rbp+E08h] BYREF
  __int128 v138; // [rsp+E98h] [rbp+E18h] BYREF
  __int64 v139; // [rsp+EA8h] [rbp+E28h]
  __int128 *v140; // [rsp+EB0h] [rbp+E30h] BYREF
  PVOID v141; // [rsp+EB8h] [rbp+E38h]
  __int128 v142; // [rsp+EC0h] [rbp+E40h] BYREF
  __int128 v143; // [rsp+ED0h] [rbp+E50h]
  __int128 v144; // [rsp+EE0h] [rbp+E60h]
  __int128 v145; // [rsp+EF0h] [rbp+E70h]
  __int128 v146; // [rsp+F00h] [rbp+E80h]
  __int128 v147; // [rsp+F10h] [rbp+E90h]
  __int64 v148; // [rsp+F28h] [rbp+EA8h]
  __int64 v149; // [rsp+F30h] [rbp+EB0h]
  PVOID Address; // [rsp+F38h] [rbp+EB8h]
  __int128 v151; // [rsp+F40h] [rbp+EC0h] BYREF
  _BYTE *v152; // [rsp+F50h] [rbp+ED0h]
  __int64 (__fastcall *v153)(_QWORD, _QWORD); // [rsp+F58h] [rbp+ED8h]
  __int128 v154; // [rsp+F60h] [rbp+EE0h] BYREF
  __int64 v155; // [rsp+F70h] [rbp+EF0h]
  unsigned int v156; // [rsp+F78h] [rbp+EF8h]
  int v157; // [rsp+F7Ch] [rbp+EFCh]
  __int64 v158; // [rsp+F80h] [rbp+F00h]
  _BYTE v159[2]; // [rsp+F8Ah] [rbp+F0Ah] BYREF
  int v160; // [rsp+F8Ch] [rbp+F0Ch]
  __int64 v161; // [rsp+F90h] [rbp+F10h]
  unsigned __int8 v162; // [rsp+F9Ah] [rbp+F1Ah] BYREF
  unsigned __int8 v163; // [rsp+F9Bh] [rbp+F1Bh]
  char v164; // [rsp+F9Ch] [rbp+F1Ch]
  unsigned __int8 v165; // [rsp+F9Dh] [rbp+F1Dh]
  char v166; // [rsp+F9Eh] [rbp+F1Eh] BYREF
  unsigned __int8 v167; // [rsp+F9Fh] [rbp+F1Fh] BYREF
  __int64 v168; // [rsp+FA0h] [rbp+F20h]

  v168 = -2;
  v6 = a1;
  v166 = a3;
  v162 = a4;
  v137 = a5;
  v7 = a2[2];
  if ( *(_QWORD *)(v7 + 16) != -1 )
  {
    sub_1416AC440(&v117[8], v7 + 16);
    *(_QWORD *)v117 = 9;
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v117[80];
    v8 = *(_OWORD *)&v117[16];
    v9 = *(_OWORD *)&v117[32];
    v10 = *(_OWORD *)&v117[48];
    *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v117[64];
    *(__int128 *)((char *)v6 + 56) = v10;
    *(__int128 *)((char *)v6 + 40) = v9;
    *(__int128 *)((char *)v6 + 24) = v8;
    *(__int128 *)((char *)v6 + 8) = *(_OWORD *)v117;
LABEL_13:
    *(_QWORD *)v6 = -1;
    return v6;
  }
  v11 = a2[4];
  v12 = (char *)(v11 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v11 + 16), 1, 0) )
    sub_141937480((volatile void *)(v11 + 16));
  v13 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v14 = sub_141938160(a1);
    LOBYTE(v14) = v14 ^ 1;
    if ( *(_BYTE *)(v11 + 17) )
      goto LABEL_7;
  }
  else
  {
    v14 = 0;
    if ( *(_BYTE *)(v11 + 17) )
    {
LABEL_7:
      nullsub_1(a1);
      v15 = (void *)sub_140001650(40, 1);
      if ( !v15 )
      {
        v156 = v14;
        Address = (PVOID)(v11 + 16);
        sub_141938D2B(1, 40);
      }
      qmemcpy(v15, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v14 )
      {
        v16 = 2 * *v13;
        if ( v16 )
        {
          v82 = v15;
          v83 = sub_141938160(v16);
          v15 = v82;
          if ( !v83 )
            *(_BYTE *)(v11 + 17) = 1;
        }
      }
      v17 = *v12;
      *v12 = 0;
      if ( v17 == 2 )
      {
        v81 = v15;
        WakeByAddressSingle((PVOID)(v11 + 16));
        v15 = v81;
      }
      *((_QWORD *)v6 + 1) = 10;
      *((_QWORD *)v6 + 2) = 40;
      *((_QWORD *)v6 + 3) = v15;
      *((_QWORD *)v6 + 4) = 40;
      goto LABEL_13;
    }
  }
  v156 = v14;
  Address = (PVOID)(v11 + 16);
  sub_140DA5500(v117, a2 + 5, aSwitchingTheCo, 26);
  v20 = *(_QWORD *)&v117[8];
  v19 = *(_QWORD *)v117;
  v21 = v117[16];
  if ( *(_QWORD *)v117 != -1 )
  {
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v117[80];
    v22 = *(_OWORD *)&v117[17];
    v23 = *(_OWORD *)&v117[33];
    v24 = *(_OWORD *)&v117[49];
    *(__int128 *)((char *)v6 + 73) = *(_OWORD *)&v117[65];
    *(__int128 *)((char *)v6 + 57) = v24;
    *(__int128 *)((char *)v6 + 41) = v23;
    *(__int128 *)((char *)v6 + 25) = v22;
    *((_QWORD *)v6 + 1) = v19;
    *((_QWORD *)v6 + 2) = v20;
    *((_BYTE *)v6 + 24) = v21;
    *(_QWORD *)v6 = -1;
LABEL_148:
    if ( !(_BYTE)v156 && 2 * *v13 && !(unsigned __int8)sub_141938160(v20) )
      *(_BYTE *)(v11 + 17) = 1;
    v79 = Address;
    v80 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v80 == 2 )
      WakeByAddressSingle(v79);
    return v6;
  }
  v163 = v117[16];
  v141 = *(PVOID *)&v117[8];
  v167 = v166 ^ 1;
  v158 = sub_14167FC00();
  v160 = v25;
  v26 = v167;
  *(_QWORD *)v117 = &v166;
  *(_QWORD *)&v117[8] = sub_1416BCC50;
  *(_QWORD *)&v117[16] = &v162;
  *(_QWORD *)&v117[24] = sub_1416BCC50;
  sub_1416ABFD0(&v127, &unk_141A4A8F9, v117);
  v27 = &unk_141A46267;
  if ( v26 )
    v27 = &unk_141A4626F;
  v97[0] = v27;
  v97[1] = v26 | 8LL;
  v161 = v128;
  *(_OWORD *)v131 = v128;
  *(_QWORD *)v117 = v97;
  *(_QWORD *)&v117[8] = sub_140186EE0;
  *(_QWORD *)&v117[16] = v131;
  *(_QWORD *)&v117[24] = sub_140186EE0;
  sub_1416ABFD0(&v84, &unk_141A46278, v117);
  sub_14019B500((unsigned int)aRouterToggle, 13, (unsigned int)aStart_1, 5, (__int64)&v84);
  if ( v127 )
    sub_140001660(v161, v127, 1);
  sub_140D81D50(v117, a2);
  v28 = *(_QWORD *)v117;
  *(_OWORD *)v131 = *(_OWORD *)&v117[8];
  *(_OWORD *)&v131[16] = *(_OWORD *)&v117[24];
  *(_OWORD *)&v131[32] = *(_OWORD *)&v117[40];
  *(_OWORD *)&v131[48] = *(_OWORD *)&v117[56];
  *(_OWORD *)&v131[64] = *(_OWORD *)&v117[72];
  *(_OWORD *)&v131[80] = *(_OWORD *)&v117[88];
  if ( *(_QWORD *)v117 == -1 )
  {
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v131[80];
    *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v131[64];
    v32 = *(_OWORD *)v131;
    v33 = *(_OWORD *)&v131[16];
    v34 = *(_OWORD *)&v131[32];
    *(__int128 *)((char *)v6 + 56) = *(_OWORD *)&v131[48];
    *(__int128 *)((char *)v6 + 40) = v34;
    *(__int128 *)((char *)v6 + 24) = v33;
    *(__int128 *)((char *)v6 + 8) = v32;
    *(_QWORD *)v6 = -1;
    goto LABEL_144;
  }
  sub_1418F44E0(v91, v118, 0x378u);
  v85 = *(_OWORD *)v131;
  v86 = *(_OWORD *)&v131[16];
  v87 = *(_OWORD *)&v131[32];
  v88 = *(_OWORD *)&v131[48];
  v89 = *(_OWORD *)&v131[64];
  v90 = *(_OWORD *)&v131[80];
  v84 = v28;
  sub_140D9A5F0(v97, a2);
  v165 = v162;
  if ( v162 == 1 )
  {
    v29 = sub_141040BC0(aChatgpt, 7);
    LOBYTE(v30) = 1;
    LODWORD(v161) = v30;
    if ( v29 != 1 )
    {
      v31 = sub_141040BC0(aCodex_3, 5);
      LOBYTE(v31) = v31 == 1;
      LODWORD(v161) = v31;
    }
  }
  else
  {
    LODWORD(v161) = 0;
  }
  v35 = v166;
  if ( v98 == v166 )
  {
    LOBYTE(v28) = v167;
    v36 = a2[3];
    sub_140D8FC20((unsigned int)&v138, v36, (unsigned int)&v84, v28, 0);
    sub_140D9A5F0(v117, a2);
    sub_140D90850(v131, a2, v117);
    sub_1407ADB20(v117);
    if ( *(_QWORD *)v131 == -1 )
    {
      sub_140D90410(&v154, v92, v93, v97);
    }
    else
    {
      v155 = *(_QWORD *)&v131[16];
      v154 = *(_OWORD *)v131;
    }
    v129 = v36;
    LOBYTE(v157) = v28;
    v45 = v139;
    if ( !v139 && (_QWORD)v154 == -1 )
    {
      sub_1410261E0(v117, *a2 + 16LL);
      v46 = *(_QWORD *)v117;
      v47 = v117[8];
      if ( *(_QWORD *)v117 != -1 )
      {
        *((_QWORD *)v6 + 12) = *(_QWORD *)&v117[88];
        *(__int128 *)((char *)v6 + 81) = *(_OWORD *)&v117[73];
        v48 = *(_OWORD *)&v117[9];
        v49 = *(_OWORD *)&v117[25];
        v50 = *(_OWORD *)&v117[41];
        *(__int128 *)((char *)v6 + 65) = *(_OWORD *)&v117[57];
        *(__int128 *)((char *)v6 + 49) = v50;
        *(__int128 *)((char *)v6 + 33) = v49;
        *(__int128 *)((char *)v6 + 17) = v48;
        *((_QWORD *)v6 + 1) = v46;
        *((_BYTE *)v6 + 16) = v47;
        *(_QWORD *)v6 = -1;
LABEL_89:
        if ( (_QWORD)v154 != -1 && (_QWORD)v154 )
          sub_140001660(*((_QWORD *)&v154 + 1), v154, 1);
        v63 = *((_QWORD *)&v138 + 1);
        if ( v45 )
        {
          v64 = 32 * v45;
          v65 = 0;
          do
          {
            v66 = *(_QWORD *)(v63 + v65);
            if ( v66 )
              sub_140001660(*(_QWORD *)(v63 + v65 + 8), v66, 1);
            v65 += 32;
          }
          while ( v64 != v65 );
        }
        if ( (_QWORD)v138 )
          sub_140001660(v63, 32 * v138, 8);
        goto LABEL_143;
      }
      if ( (v117[8] & 1) == 0 )
      {
        sub_140D22810(v167, v158, v160, (unsigned int)&unk_141A4AC15, 33);
        sub_140D824F0(v117, a2);
        v62 = 0;
        if ( v166 )
          v62 = v99;
        sub_1418F44E0((__m128i *)v6, (const __m128i *)v117, 0x180u);
        *((_QWORD *)v6 + 48) = 0;
        *((_QWORD *)v6 + 49) = 8;
        *((_QWORD *)v6 + 50) = 0;
        *((_QWORD *)v6 + 51) = -1;
        *((_BYTE *)v6 + 432) = v62;
        goto LABEL_89;
      }
    }
    LOBYTE(v28) = v167;
    sub_140DBD1A0(v131, *((_QWORD *)&v138 + 1), v45);
    *(_QWORD *)v117 = v131;
    v55 = sub_1400015F0;
    *(_QWORD *)&v117[8] = sub_1400015F0;
    *(_QWORD *)&v117[16] = &v154;
    *(_QWORD *)&v117[24] = sub_140DD7AB0;
    sub_1416ABFD0(v101, &unk_141A4AC36, v117);
    if ( *(_QWORD *)v131 )
      sub_140001660(*(_QWORD *)&v131[8], *(_QWORD *)v131, 1);
    sub_140D226F0((unsigned int)v28, aSameTargetReco, 21, v101);
    sub_140D94D30((unsigned int)v131, (_DWORD)a2, (unsigned int)aSameTargetRout, 25, 0);
    if ( *(_DWORD *)v131 != -1 )
    {
      *(_OWORD *)&v117[80] = *(_OWORD *)&v131[80];
      *(_OWORD *)&v117[64] = *(_OWORD *)&v131[64];
      *(_OWORD *)&v117[48] = *(_OWORD *)&v131[48];
      *(_OWORD *)&v117[32] = *(_OWORD *)&v131[32];
      *(_OWORD *)&v117[16] = *(_OWORD *)&v131[16];
      *(_OWORD *)v117 = *(_OWORD *)v131;
      if ( (unsigned __int8)sub_140D8B0B0(v129, &v84, (unsigned __int8)v157) )
      {
        sub_140D8B020(&v124, a2);
        if ( v124.m128i_i64[0] == -1 )
        {
          sub_140D90410(&v124, v92, v93, v97);
          LOBYTE(v56) = v124.m128i_i64[0] == -1;
          if ( v124.m128i_i64[0] != -1 && v124.m128i_i64[0] )
          {
            v68 = v56;
            sub_140001660(v124.m128i_i64[1], v124.m128i_i64[0], 1);
            v56 = v68;
          }
          goto LABEL_63;
        }
        if ( v124.m128i_i64[0] )
          sub_140001660(v124.m128i_i64[1], v124.m128i_i64[0], 1);
      }
      v56 = 0;
LABEL_63:
      sub_140D9E7E0(&v124, v165, (unsigned int)v161, v56);
      sub_140DBCEA0(&v142, &v124);
      v124.m128i_i64[0] = (__int64)&v142;
      v124.m128i_i64[1] = (__int64)sub_1400015F0;
      v125 = v117;
      v126 = sub_14104A7D0;
      sub_1416ABFD0(&v115, &unk_141A4ACB9, &v124);
      *((_QWORD *)v6 + 4) = v116;
      v6[1] = v115;
      *((_QWORD *)v6 + 1) = 10;
      *(_QWORD *)v6 = -1;
      if ( (_QWORD)v142 )
        sub_140001660(*((_QWORD *)&v142 + 1), v142, 1);
      sub_140D1BEA0(v117);
      goto LABEL_89;
    }
    v152 = *(_BYTE **)&v131[88];
    v151 = *(_OWORD *)&v131[72];
    sub_140BAD350(&v131[8]);
    if ( v166 )
    {
      if ( (((unsigned __int8)sub_140EE56F0() ^ 1) & v165) == 1 )
      {
LABEL_80:
        sub_140DBCF70(&v124);
        v60 = v124.m128i_i64[0];
LABEL_82:
        v161 = v60;
        v131[0] = v60 != -1;
        LOBYTE(v55) = v167;
        *(_QWORD *)v117 = v131;
        *(_QWORD *)&v117[8] = sub_1416BCC50;
        v164 = 1;
        sub_1416ABFD0(v96, &unk_141A4AC82, v117);
        v164 = 1;
        sub_140D229A0((_DWORD)v55, (unsigned int)aTotal_4, 5, v158, v160, (__int64)v96);
        v164 = 1;
        sub_140D824F0(v131, a2);
        if ( v166 == 1 )
        {
          v158 = v124.m128i_i64[1];
          sub_140D9A5F0(v117, a2);
          v61 = v119;
          sub_1407ADB20(v117);
        }
        else
        {
          v61 = 0;
        }
        v121 = v152;
        v120 = v151;
        sub_1418F44E0((__m128i *)v117, (const __m128i *)v131, 0x180u);
        v122 = v124;
        v123 = v125;
        sub_1418F44E0((__m128i *)v6, (const __m128i *)v117, 0x1B0u);
        *((_BYTE *)v6 + 432) = v61;
        goto LABEL_89;
      }
    }
    else if ( v165 && (((unsigned __int8)sub_140EE56F0() ^ 1) & (unsigned __int8)v161) == 1 )
    {
      goto LABEL_80;
    }
    v124.m128i_i64[0] = -1;
    v60 = -1;
    goto LABEL_82;
  }
  v37 = 0;
  v157 = v99;
  if ( v166 )
    v37 = v99;
  v159[1] = v37;
  v38 = v137;
  if ( (_QWORD)v137 )
  {
    v39 = *((_QWORD *)&v137 + 1);
    sub_140D73B40(v117, aPreparing, 9);
    *(_OWORD *)&v131[48] = *(_OWORD *)&v117[48];
    *(_OWORD *)&v131[32] = *(_OWORD *)&v117[32];
    *(_OWORD *)&v131[16] = *(_OWORD *)&v117[16];
    *(_OWORD *)v131 = *(_OWORD *)v117;
    (*(void (__fastcall **)(__int64, _BYTE *))(v39 + 40))(v38, v131);
    v35 = v166;
  }
  if ( v35 )
  {
    sub_1401BDA50(v117, v97);
    sub_1401BDEC0(&v102, v117, &v84);
    if ( (_DWORD)v102 == -2
      || (sub_1418F44E0((__m128i *)v117, (const __m128i *)&v102, 0xB0u), sub_140D38240(&v102, a2, v117), v102 == -2) )
    {
      sub_140D385E0((unsigned int)v117, v167, v158, v160, (__int64)v103);
      *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v117[80];
      *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v117[64];
      v40 = *(_OWORD *)v117;
      v41 = *(_OWORD *)&v117[16];
      v42 = *(_OWORD *)&v117[32];
      *(__int128 *)((char *)v6 + 56) = *(_OWORD *)&v117[48];
      *(__int128 *)((char *)v6 + 40) = v42;
      *(__int128 *)((char *)v6 + 24) = v41;
      *(__int128 *)((char *)v6 + 8) = v40;
      *(_QWORD *)v6 = -1;
LABEL_143:
      sub_1407ADB20(v97);
      sub_140034990(&v84);
LABEL_144:
      v77 = (char *)v141;
      if ( (v163 & 1) == 0 && 2 * *v13 && !(unsigned __int8)sub_141938160(v20) )
        v77[1] = 1;
      v78 = *v77;
      *v77 = 0;
      if ( v78 == 2 )
        WakeByAddressSingle(v77);
      goto LABEL_148;
    }
    v136 = v104;
    v135 = v103[9];
    v134 = v103[8];
    v133 = v103[7];
    v132 = v103[6];
    *(_OWORD *)&v131[8] = v103[0];
    *(_OWORD *)&v131[24] = v103[1];
    *(_OWORD *)&v131[40] = v103[2];
    *(_OWORD *)&v131[56] = v103[3];
    *(_OWORD *)&v131[72] = v103[4];
    *(_OWORD *)&v131[88] = v103[5];
    *(_QWORD *)v131 = v102;
    if ( *(_QWORD *)off_1421E6EC0 > 2u )
    {
      *(_QWORD *)&v154 = *((_QWORD *)&v132 + 1);
      *(_QWORD *)&v151 = v134;
      LOBYTE(v138) = v136;
      *(_QWORD *)v117 = &v154;
      *(_QWORD *)&v117[8] = sub_1416BCB10;
      *(_QWORD *)&v117[16] = &v151;
      *(_QWORD *)&v117[24] = sub_1416BCB10;
      *(_QWORD *)&v117[32] = &v138;
      *(_QWORD *)&v117[40] = sub_1416BCC50;
      *(_QWORD *)&v142 = aCodexmateLibCo_36;
      *((_QWORD *)&v142 + 1) = 35;
      *(_QWORD *)&v143 = aCodexmateLibCo_36;
      *((_QWORD *)&v143 + 1) = 35;
      *(_QWORD *)&v144 = &off_141A4A960;
      sub_140BAD520(&unk_141A4A919, v117, 3, &v142);
    }
    sub_1418F44E0(&v124, (const __m128i *)v131, 0xB0u);
  }
  else
  {
    v124.m128i_i64[0] = -2;
  }
  v140 = &v137;
  v43 = v137;
  v138 = v137;
  if ( (_QWORD)v137 )
  {
    sub_140D73B40(v117, aStoppingCodex_0, 14);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*((_QWORD *)&v43 + 1) + 40LL))(v43, v117);
  }
  v159[0] = v167;
  *(_QWORD *)v117 = &v140;
  *(_QWORD *)&v117[8] = &v124;
  *(_QWORD *)&v117[16] = a2;
  *(_QWORD *)&v117[24] = &v84;
  *(_QWORD *)&v117[32] = v97;
  *(_QWORD *)&v117[40] = &v138;
  *(_QWORD *)&v117[48] = &v167;
  *(_QWORD *)v131 = a2;
  *(_QWORD *)&v131[8] = &v84;
  *(_QWORD *)&v131[16] = v159;
  LOBYTE(v151) = 0;
  LOBYTE(v142) = 0;
  v44 = &v151;
  sub_140BC9880((__int128 *)v130, (__int64)&v84, v167, 0, (__int64)&unk_141A4A986, 13, (__int64)&v84, 0, (__int64)&v151);
  if ( *(_DWORD *)v130 != -1 )
  {
    if ( v130[96] )
    {
      if ( v166 )
      {
        *(_QWORD *)&v117[96] = *(_QWORD *)&v130[96];
        *(_OWORD *)&v117[80] = *(_OWORD *)&v130[80];
        *(_OWORD *)&v117[64] = *(_OWORD *)&v130[64];
        *(_OWORD *)&v117[48] = *(_OWORD *)&v130[48];
        *(_OWORD *)&v117[32] = *(_OWORD *)&v130[32];
        *(_OWORD *)&v117[16] = *(_OWORD *)&v130[16];
        *(_OWORD *)v117 = *(_OWORD *)v130;
        *(_QWORD *)&v142 = v117;
        *((_QWORD *)&v142 + 1) = sub_140C9DC90;
        sub_1416ABFD0(v131, &unk_141A4AA93, &v142);
        v154 = *(_OWORD *)v131;
        v155 = *(_QWORD *)&v131[16];
        sub_140D8C7B0(
          (unsigned int)&v142,
          (_DWORD)a2,
          (unsigned int)&v84,
          *(_DWORD *)&v131[8],
          *(__int64 *)&v131[16],
          (__int64)v97,
          v157);
        if ( (_DWORD)v142 == -1 )
        {
          if ( *((_QWORD *)&v142 + 1) == -1 )
          {
            sub_140D22810(v167, v158, v160, (unsigned int)&unk_141A4AAB6, 40);
            if ( v165 && (((unsigned __int8)sub_140EE56F0() ^ 1) & (unsigned __int8)v161) == 1 )
              sub_140DBCF70(v131);
            else
              *(_QWORD *)v131 = -1;
            sub_140DBCEA0(&v151, v131);
            *(_QWORD *)v131 = &v154;
            *(_QWORD *)&v131[8] = sub_1400015F0;
            *(_QWORD *)&v131[16] = &v151;
            *(_QWORD *)&v131[24] = sub_1400015F0;
            sub_1416ABFD0(&v113, &unk_141A4AA90, v131);
            *((_QWORD *)v6 + 4) = v114;
            v6[1] = v113;
            *((_QWORD *)v6 + 1) = 10;
            *(_QWORD *)v6 = -1;
            if ( (_QWORD)v151 )
              sub_140001660(*((_QWORD *)&v151 + 1), v151, 1);
          }
          else
          {
            v69 = v143;
            sub_140D22810(v167, v158, v160, (unsigned int)&unk_141A4AADE, 45);
            sub_140D1EE10((unsigned int)v131, v69, DWORD2(v69), (unsigned int)&unk_141A4AB0B, 3);
            v152 = *(_BYTE **)&v131[16];
            v151 = *(_OWORD *)v131;
            *(_QWORD *)v131 = &v154;
            *(_QWORD *)&v131[8] = sub_1400015F0;
            *(_QWORD *)&v131[16] = &v151;
            *(_QWORD *)&v131[24] = sub_1400015F0;
            sub_1416ABFD0(&v111, &unk_141A4AB0E, v131);
            if ( (_QWORD)v151 )
              sub_140001660(*((_QWORD *)&v151 + 1), v151, 1);
            *((_QWORD *)v6 + 4) = v112;
            v6[1] = v111;
            *((_QWORD *)v6 + 1) = 10;
            *(_QWORD *)v6 = -1;
            sub_140025530((char *)&v142 + 8);
          }
        }
        else
        {
          *(_OWORD *)&v131[80] = v147;
          *(_OWORD *)&v131[64] = v146;
          *(_OWORD *)&v131[48] = v145;
          *(_OWORD *)&v131[32] = v144;
          *(_OWORD *)&v131[16] = v143;
          *(_OWORD *)v131 = v142;
          sub_140D22810(v167, v158, v160, (unsigned int)&unk_141A4ABC7, 27);
          *(_QWORD *)&v151 = &v154;
          *((_QWORD *)&v151 + 1) = sub_1400015F0;
          v152 = v131;
          v153 = sub_14104A7D0;
          sub_1416ABFD0(&v109, &unk_141A4ABE2, &v151);
          *((_QWORD *)v6 + 4) = v110;
          v6[1] = v109;
          *((_QWORD *)v6 + 1) = 10;
          *(_QWORD *)v6 = -1;
          sub_140D1BEA0(v131);
        }
        if ( (_QWORD)v154 )
          sub_140001660(*((_QWORD *)&v154 + 1), v154, 1);
      }
      else
      {
        *(_QWORD *)&v117[96] = *(_QWORD *)&v130[96];
        *(_OWORD *)&v117[80] = *(_OWORD *)&v130[80];
        *(_OWORD *)&v117[64] = *(_OWORD *)&v130[64];
        *(_OWORD *)&v117[48] = *(_OWORD *)&v130[48];
        *(_OWORD *)&v117[32] = *(_OWORD *)&v130[32];
        *(_OWORD *)&v117[16] = *(_OWORD *)&v130[16];
        *(_OWORD *)v117 = *(_OWORD *)v130;
        *(_QWORD *)&v142 = v117;
        *((_QWORD *)&v142 + 1) = sub_140C9DC90;
        sub_1416ABFD0(v131, &unk_141A4A9E2, &v142);
        v154 = *(_OWORD *)v131;
        v155 = *(_QWORD *)&v131[16];
        if ( v98 == 1 && (unsigned __int8)sub_140D8B0B0(a2[3], &v84, 0)
          || (sub_140D8BE20((unsigned int)&v142, (_DWORD)a2, (unsigned int)&v84, DWORD2(v154), v155, (__int64)v97),
              (_DWORD)v142 == -1) )
        {
          sub_140D22810(v167, v158, v160, (unsigned int)&unk_141A4AA63, 45);
          if ( v165 && (((unsigned __int8)sub_140EE56F0() ^ 1) & (unsigned __int8)v161) == 1 )
            sub_140DBCF70(v131);
          else
            *(_QWORD *)v131 = -1;
          sub_140DBCEA0(&v142, v131);
          *(_QWORD *)v131 = &v154;
          *(_QWORD *)&v131[8] = sub_1400015F0;
          *(_QWORD *)&v131[16] = &v142;
          *(_QWORD *)&v131[24] = sub_1400015F0;
          sub_1416ABFD0(&v105, &unk_141A4AA90, v131);
          *((_QWORD *)v6 + 4) = v106;
          v6[1] = v105;
          *((_QWORD *)v6 + 1) = 10;
          *(_QWORD *)v6 = -1;
          if ( (_QWORD)v142 )
            sub_140001660(*((_QWORD *)&v142 + 1), v142, 1);
        }
        else
        {
          *(_OWORD *)&v131[80] = v147;
          *(_OWORD *)&v131[64] = v146;
          *(_OWORD *)&v131[48] = v145;
          *(_OWORD *)&v131[32] = v144;
          *(_OWORD *)&v131[16] = v143;
          *(_OWORD *)v131 = v142;
          sub_140D22810(v167, v158, v160, (unsigned int)&unk_141A4AA06, 33);
          *(_QWORD *)&v151 = &v154;
          *((_QWORD *)&v151 + 1) = sub_1400015F0;
          v152 = v131;
          v153 = sub_14104A7D0;
          sub_1416ABFD0(&v107, &unk_141A4AA27, &v151);
          *((_QWORD *)v6 + 4) = v108;
          v6[1] = v107;
          *((_QWORD *)v6 + 1) = 10;
          *(_QWORD *)v6 = -1;
          sub_140D1BEA0(v131);
        }
        if ( (_QWORD)v154 )
          sub_140001660(*((_QWORD *)&v154 + 1), v154, 1);
      }
      sub_140D1BEA0(v117);
      goto LABEL_141;
    }
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v130[80];
    *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v130[64];
    v57 = *(_OWORD *)v130;
    v58 = *(_OWORD *)&v130[16];
    v59 = *(_OWORD *)&v130[32];
    *(__int128 *)((char *)v6 + 56) = *(_OWORD *)&v130[48];
    *(__int128 *)((char *)v6 + 40) = v59;
    *(__int128 *)((char *)v6 + 24) = v58;
    *(__int128 *)((char *)v6 + 8) = v57;
LABEL_70:
    *(_QWORD *)v6 = -1;
LABEL_141:
    if ( v124.m128i_i32[0] != -2 )
      sub_140D1CCF0(&v124);
    goto LABEL_143;
  }
  v100[5] = *(_OWORD *)&v130[88];
  v100[4] = *(_OWORD *)&v130[72];
  v100[3] = *(_OWORD *)&v130[56];
  v100[2] = *(_OWORD *)&v130[40];
  v100[1] = *(_OWORD *)&v130[24];
  v100[0] = *(_OWORD *)&v130[8];
  sub_140C1E360(v117, v100);
  v51 = *(_QWORD *)v117;
  *(_OWORD *)v131 = *(_OWORD *)&v117[8];
  *(_OWORD *)&v131[16] = *(_OWORD *)&v117[24];
  *(_OWORD *)&v131[32] = *(_OWORD *)&v117[40];
  *(_OWORD *)&v131[48] = *(_OWORD *)&v117[56];
  *(_OWORD *)&v131[64] = *(_OWORD *)&v117[72];
  *(_QWORD *)&v131[80] = *(_QWORD *)&v117[88];
  if ( *(_QWORD *)v117 != -1 )
  {
    *((_QWORD *)v6 + 12) = *(_QWORD *)&v131[80];
    v6[5] = *(_OWORD *)&v131[64];
    v52 = *(_OWORD *)v131;
    v53 = *(_OWORD *)&v131[16];
    v54 = *(_OWORD *)&v131[32];
    v6[4] = *(_OWORD *)&v131[48];
    v6[3] = v54;
    v6[2] = v53;
    v6[1] = v52;
    *((_QWORD *)v6 + 1) = v51;
    goto LABEL_70;
  }
  v145 = *(_OWORD *)&v131[48];
  v144 = *(_OWORD *)&v131[32];
  v143 = *(_OWORD *)&v131[16];
  v142 = *(_OWORD *)v131;
  v152 = *(_BYTE **)&v131[80];
  v151 = *(_OWORD *)&v131[64];
  v67 = 0;
  if ( (v131[0] & 1) == 0 )
    v67 = DWORD2(v145);
  v157 = v67;
  if ( !v166 )
  {
    if ( !v165 || ((unsigned __int8)v161 & ((unsigned __int8)sub_140EE56F0() ^ 1)) != 1 )
      goto LABEL_125;
LABEL_122:
    sub_140D387E0(v140, aLaunchingCodex, 15);
    LODWORD(v11) = sub_14167FC00();
    v71 = v70;
    if ( v166 )
    {
      v72 = (sub_140EE56F0() ^ 1) & v165;
      v73 = -1;
      if ( v72 != 1 )
        goto LABEL_131;
    }
    else
    {
      v76 = (sub_140EE56F0() ^ 1) & v161;
      v73 = -1;
      if ( v76 != 1 )
        goto LABEL_131;
    }
    sub_140DBCF70(v117);
    v73 = *(_QWORD *)v117;
LABEL_131:
    v161 = v73;
    LOBYTE(v154) = v73 != -1;
    LOBYTE(v67) = v167;
    *(_QWORD *)v131 = &v154;
    *(_QWORD *)&v131[8] = sub_1416BCC50;
    sub_1416ABFD0(v95, &unk_141A4A9A2, v131);
    sub_140D229A0(v67, (unsigned int)aLaunchCodex, 12, v11, v71, (__int64)v95);
    v67 = *(_QWORD *)&v117[8];
    v44 = *(__int128 **)&v117[16];
    v75 = 1;
    v74 = v161;
    if ( v161 != -1 )
      goto LABEL_132;
    goto LABEL_125;
  }
  if ( (((unsigned __int8)sub_140EE56F0() ^ 1) & v165) != 0 )
    goto LABEL_122;
LABEL_125:
  v149 = -1;
  v148 = v67;
  sub_140D387E0(v140, aDone_4, 4);
  v74 = -1;
  v75 = 0;
LABEL_132:
  LOBYTE(v11) = v167;
  LOBYTE(v154) = v75;
  *(_QWORD *)v131 = v152;
  *(_QWORD *)v117 = &v154;
  *(_QWORD *)&v117[8] = sub_1416BCC50;
  *(_QWORD *)&v117[16] = v131;
  *(_QWORD *)&v117[24] = sub_1416BCB10;
  v149 = v74;
  v148 = v67;
  sub_1416ABFD0(v94, &unk_141A4A9B7, v117);
  v149 = v74;
  v148 = v67;
  sub_140D229A0(v11, (unsigned int)aTotal_4, 5, v158, v160, (__int64)v94);
  v149 = v74;
  v148 = v67;
  sub_140D824F0(v131, a2);
  v121 = v152;
  v120 = v151;
  sub_1418F44E0((__m128i *)v117, (const __m128i *)v131, 0x180u);
  sub_1418F44E0((__m128i *)v6, (const __m128i *)v117, 0x198u);
  *((_QWORD *)v6 + 51) = v74;
  *((_QWORD *)v6 + 52) = v67;
  *((_QWORD *)v6 + 53) = v44;
  *((_BYTE *)v6 + 432) = v157;
  sub_140BAD350(&v142);
  if ( v124.m128i_i32[0] != -2 )
    sub_140D1CCF0(&v124);
  sub_1407ADB20(v97);
  sub_140034990(&v84);
  sub_140028CC0(v141, v163);
  sub_140028CC0(Address, v156);
  return v6;
}
