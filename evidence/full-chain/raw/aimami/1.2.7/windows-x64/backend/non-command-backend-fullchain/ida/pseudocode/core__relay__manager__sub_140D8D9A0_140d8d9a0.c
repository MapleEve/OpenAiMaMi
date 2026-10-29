// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d8d9a0 | name sub_140D8D9A0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_140D8D9A0(__int128 *a1, _QWORD *a2, char a3, char a4, __int128 a5)
{
  __int128 *v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v12; // r15
  char *v13; // r14
  __int64 *v14; // r12
  unsigned int v15; // r13d
  void *v16; // rax
  __int64 v17; // rcx
  char v18; // cl
  __int64 v20; // rax
  PVOID v21; // rcx
  char v22; // dl
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // r14
  __int64 v27; // rcx
  char v28; // al
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // rdx
  __int64 v33; // rcx
  char v34; // al
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int128 v41; // xmm3
  __int64 v42; // rcx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int64 v46; // r14
  __int64 v47; // r14
  __int64 v48; // r13
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  __int64 v52; // rax
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int64 v59; // rbx
  char v60; // bl
  char v61; // al
  PVOID v62; // rcx
  char v63; // al
  char v64; // bl
  void *v65; // rdi
  void *v66; // rdi
  char v67; // cl
  __m128i v68[23]; // [rsp+60h] [rbp-20h] BYREF
  char v69; // [rsp+1DEh] [rbp+15Eh]
  __int64 v70; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v71; // [rsp+1E8h] [rbp+168h]
  __int128 v72; // [rsp+1F8h] [rbp+178h]
  __int128 v73; // [rsp+208h] [rbp+188h]
  __int128 v74; // [rsp+218h] [rbp+198h]
  __int128 v75; // [rsp+228h] [rbp+1A8h]
  __int128 v76; // [rsp+238h] [rbp+1B8h]
  __m128i v77[55]; // [rsp+248h] [rbp+1C8h] BYREF
  _BYTE v78[384]; // [rsp+5C0h] [rbp+540h] BYREF
  __m128i v79[22]; // [rsp+740h] [rbp+6C0h] BYREF
  char v80; // [rsp+8ACh] [rbp+82Ch]
  char v81; // [rsp+8BEh] [rbp+83Eh]
  _OWORD v82[6]; // [rsp+8C0h] [rbp+840h] BYREF
  __int64 v83; // [rsp+920h] [rbp+8A0h] BYREF
  __int128 v84; // [rsp+928h] [rbp+8A8h]
  __int128 v85; // [rsp+938h] [rbp+8B8h]
  __int128 v86; // [rsp+948h] [rbp+8C8h]
  __int128 v87; // [rsp+958h] [rbp+8D8h]
  __int128 v88; // [rsp+968h] [rbp+8E8h]
  __int128 v89; // [rsp+978h] [rbp+8F8h]
  __int128 v90; // [rsp+988h] [rbp+908h]
  __int128 v91; // [rsp+998h] [rbp+918h]
  __int128 v92; // [rsp+9A8h] [rbp+928h]
  __int128 v93; // [rsp+9B8h] [rbp+938h]
  __int64 v94; // [rsp+9C8h] [rbp+948h]
  __int128 v95; // [rsp+9D0h] [rbp+950h] BYREF
  __int128 v96; // [rsp+9E0h] [rbp+960h]
  __int128 v97; // [rsp+9F0h] [rbp+970h]
  __int128 v98; // [rsp+A00h] [rbp+980h]
  __int128 v99; // [rsp+A10h] [rbp+990h]
  __int128 v100; // [rsp+A20h] [rbp+9A0h]
  char v101; // [rsp+B4Eh] [rbp+ACEh]
  _BYTE v102[104]; // [rsp+B50h] [rbp+AD0h] BYREF
  _QWORD v103[38]; // [rsp+BB8h] [rbp+B38h] BYREF
  __int128 v104; // [rsp+CE8h] [rbp+C68h]
  __int64 v105; // [rsp+CF8h] [rbp+C78h]
  __int128 v106; // [rsp+F30h] [rbp+EB0h] BYREF
  __int64 v107; // [rsp+F40h] [rbp+EC0h]
  __int128 v108; // [rsp+F48h] [rbp+EC8h] BYREF
  __int64 v109; // [rsp+F58h] [rbp+ED8h]
  __int128 v110; // [rsp+F60h] [rbp+EE0h] BYREF
  __int64 v111; // [rsp+F70h] [rbp+EF0h]
  _BYTE v112[104]; // [rsp+F78h] [rbp+EF8h] BYREF
  _BYTE v113[104]; // [rsp+FE0h] [rbp+F60h] BYREF
  __int128 v114; // [rsp+1048h] [rbp+FC8h]
  __int128 v115; // [rsp+1058h] [rbp+FD8h]
  __int128 v116; // [rsp+1068h] [rbp+FE8h]
  __int128 v117; // [rsp+1078h] [rbp+FF8h]
  __int64 v118; // [rsp+1088h] [rbp+1008h]
  __int128 v119; // [rsp+1160h] [rbp+10E0h] BYREF
  __int128 v120; // [rsp+1170h] [rbp+10F0h]
  __int128 v121; // [rsp+1180h] [rbp+1100h]
  __int128 v122; // [rsp+1190h] [rbp+1110h]
  __int128 v123; // [rsp+11A0h] [rbp+1120h] BYREF
  __int64 v124; // [rsp+11B0h] [rbp+1130h]
  __int64 v125; // [rsp+11B8h] [rbp+1138h]
  __int128 v126; // [rsp+11C0h] [rbp+1140h] BYREF
  __int64 v127; // [rsp+11D0h] [rbp+1150h]
  __int128 *v128; // [rsp+11D8h] [rbp+1158h] BYREF
  PVOID v129; // [rsp+11E0h] [rbp+1160h]
  __int64 v130; // [rsp+11E8h] [rbp+1168h]
  __int128 v131; // [rsp+11F0h] [rbp+1170h] BYREF
  __int64 v132; // [rsp+1200h] [rbp+1180h]
  PVOID Address; // [rsp+1208h] [rbp+1188h]
  int v134; // [rsp+1210h] [rbp+1190h]
  unsigned int v135; // [rsp+1214h] [rbp+1194h]
  char v136; // [rsp+121Bh] [rbp+119Bh] BYREF
  unsigned __int8 v137; // [rsp+121Ch] [rbp+119Ch]
  char v138; // [rsp+121Dh] [rbp+119Dh]
  char v139; // [rsp+121Eh] [rbp+119Eh]
  char v140; // [rsp+121Fh] [rbp+119Fh] BYREF
  __int64 v141; // [rsp+1220h] [rbp+11A0h]

  v141 = -2;
  v6 = a1;
  v140 = a3;
  v123 = a5;
  v7 = a2[2];
  if ( *(_QWORD *)(v7 + 16) != -1 )
  {
    sub_1416AC440(&v102[8], v7 + 16);
    *(_QWORD *)v102 = 9;
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v102[80];
    v8 = *(_OWORD *)&v102[16];
    v9 = *(_OWORD *)&v102[32];
    v10 = *(_OWORD *)&v102[48];
    *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v102[64];
    *(__int128 *)((char *)v6 + 56) = v10;
    *(__int128 *)((char *)v6 + 40) = v9;
    *(__int128 *)((char *)v6 + 24) = v8;
    *(__int128 *)((char *)v6 + 8) = *(_OWORD *)v102;
LABEL_13:
    *(_QWORD *)v6 = -1;
    return v6;
  }
  v12 = a2[4];
  v13 = (char *)(v12 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v12 + 16), 1, 0) )
    sub_141937480((volatile void *)(v12 + 16));
  v14 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v15 = sub_141938160(a1);
    LOBYTE(v15) = v15 ^ 1;
    if ( *(_BYTE *)(v12 + 17) )
      goto LABEL_7;
  }
  else
  {
    v15 = 0;
    if ( *(_BYTE *)(v12 + 17) )
    {
LABEL_7:
      nullsub_1(a1);
      v16 = (void *)sub_140001650(40, 1);
      if ( !v16 )
      {
        v135 = v15;
        Address = (PVOID)(v12 + 16);
        sub_141938D2B(1, 40);
      }
      qmemcpy(v16, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v15 )
      {
        v17 = 2 * *v14;
        if ( v17 )
        {
          v66 = v16;
          v67 = sub_141938160(v17);
          v16 = v66;
          if ( !v67 )
            *(_BYTE *)(v12 + 17) = 1;
        }
      }
      v18 = *v13;
      *v13 = 0;
      if ( v18 == 2 )
      {
        v65 = v16;
        WakeByAddressSingle((PVOID)(v12 + 16));
        v16 = v65;
      }
      *((_QWORD *)v6 + 1) = 10;
      *((_QWORD *)v6 + 2) = 40;
      *((_QWORD *)v6 + 3) = v16;
      *((_QWORD *)v6 + 4) = 40;
      goto LABEL_13;
    }
  }
  v135 = v15;
  Address = (PVOID)(v12 + 16);
  sub_140DA5500(v102, a2 + 5, aSwitchingRoute, 29);
  v21 = *(PVOID *)&v102[8];
  v20 = *(_QWORD *)v102;
  v22 = v102[16];
  if ( *(_QWORD *)v102 == -1 )
  {
    v137 = v102[16];
    v129 = *(PVOID *)&v102[8];
    sub_140D9A5F0(v79, a2);
    if ( v80 )
    {
      v139 = 1;
      sub_140D81D50(v102, a2);
      v26 = *(_QWORD *)v102;
      *(_OWORD *)v113 = *(_OWORD *)&v102[8];
      *(_OWORD *)&v113[16] = *(_OWORD *)&v102[24];
      *(_OWORD *)&v113[32] = *(_OWORD *)&v102[40];
      *(_OWORD *)&v113[48] = *(_OWORD *)&v102[56];
      *(_OWORD *)&v113[64] = *(_OWORD *)&v102[72];
      *(_OWORD *)&v113[80] = *(_OWORD *)&v102[88];
      if ( *(_QWORD *)v102 != -1 )
      {
        sub_1418F44E0(v77, (const __m128i *)v103, 0x378u);
        v71 = *(_OWORD *)v113;
        v72 = *(_OWORD *)&v113[16];
        v73 = *(_OWORD *)&v113[32];
        v74 = *(_OWORD *)&v113[48];
        v75 = *(_OWORD *)&v113[64];
        v76 = *(_OWORD *)&v113[80];
        v70 = v26;
        if ( v81 == v140 )
        {
          sub_1410261E0(v102, *a2 + 16LL);
          v27 = *(_QWORD *)v102;
          v28 = v102[8];
          if ( *(_QWORD *)v102 != -1 )
          {
            *((_QWORD *)v6 + 12) = *(_QWORD *)&v102[88];
            *(__int128 *)((char *)v6 + 81) = *(_OWORD *)&v102[73];
            v29 = *(_OWORD *)&v102[9];
            v30 = *(_OWORD *)&v102[25];
            v31 = *(_OWORD *)&v102[41];
            *(__int128 *)((char *)v6 + 65) = *(_OWORD *)&v102[57];
            *(__int128 *)((char *)v6 + 49) = v31;
            *(__int128 *)((char *)v6 + 33) = v30;
            *(__int128 *)((char *)v6 + 17) = v29;
            *((_QWORD *)v6 + 1) = v27;
            *((_BYTE *)v6 + 16) = v28;
            *(_QWORD *)v6 = -1;
LABEL_73:
            sub_140034990(&v70);
            goto LABEL_74;
          }
          if ( (v102[8] & 1) == 0 )
          {
            sub_140D8FC20((unsigned int)v102, a2[3], (unsigned int)&v70, 0, 0);
            v46 = *(_QWORD *)&v102[16];
            sub_140025860(v102);
            if ( !v46 )
            {
              sub_140D8B020(v102, a2);
              if ( *(_QWORD *)v102 == -1 )
              {
                sub_140D824F0(v102, a2);
                v64 = v81;
                sub_1418F44E0((__m128i *)v6, (const __m128i *)v102, 0x180u);
                *((_QWORD *)v6 + 48) = 0;
                *((_QWORD *)v6 + 49) = 8;
                *((_QWORD *)v6 + 50) = 0;
                *((_QWORD *)v6 + 51) = -1;
                *((_BYTE *)v6 + 432) = v64;
                goto LABEL_73;
              }
              if ( *(_QWORD *)v102 )
                sub_140001660(*(_QWORD *)&v102[8], *(_QWORD *)v102, 1);
            }
          }
        }
        v128 = &v123;
        v47 = v123;
        if ( (_QWORD)v123 )
        {
          v48 = *((_QWORD *)&v123 + 1);
          sub_140D73B40(v102, aPreparing, 9);
          (*(void (__fastcall **)(__int64, _BYTE *))(v48 + 40))(v47, v102);
        }
        sub_140DCB2E0(v78, v79);
        v78[382] = v140;
        sub_1401BDA50(v102, v78);
        sub_1401BDEC0(v113, v102, &v70);
        v95 = *(_OWORD *)&v113[8];
        v96 = *(_OWORD *)&v113[24];
        v97 = *(_OWORD *)&v113[40];
        v98 = *(_OWORD *)&v113[56];
        v99 = *(_OWORD *)&v113[72];
        v100 = *(_OWORD *)&v113[88];
        if ( *(_QWORD *)v113 == -2 )
        {
          *(__int128 *)((char *)v6 + 88) = v100;
          *(__int128 *)((char *)v6 + 72) = v99;
          v49 = v95;
          v50 = v96;
          v51 = v97;
          *(__int128 *)((char *)v6 + 56) = v98;
          *(__int128 *)((char *)v6 + 40) = v51;
          *(__int128 *)((char *)v6 + 24) = v50;
          *(__int128 *)((char *)v6 + 8) = v49;
          *(_QWORD *)v6 = -1;
LABEL_72:
          sub_1407ADB20(v78);
          goto LABEL_73;
        }
        v94 = v118;
        v93 = v117;
        v92 = v116;
        v91 = v115;
        v90 = v114;
        v84 = v95;
        v85 = v96;
        v86 = v97;
        v87 = v98;
        v88 = v99;
        v89 = v100;
        v83 = *(_QWORD *)v113;
        if ( a4 )
          v134 = sub_140EE56F0();
        else
          v134 = 0;
        sub_140D387E0(v128, aStoppingCodex_0, 14);
        *(_QWORD *)v102 = &v128;
        *(_QWORD *)&v102[8] = &v140;
        *(_QWORD *)&v102[16] = &v70;
        *(_QWORD *)&v102[24] = a2;
        *(_QWORD *)&v102[32] = &v83;
        sub_140BDD010((__int128 *)v112, (__int64)&v70, 0, 0, (__int64)aRouterAuthMode, 23);
        if ( *(_DWORD *)v112 != -1 )
        {
          if ( v112[96] )
          {
            *(_QWORD *)&v102[96] = *(_QWORD *)&v112[96];
            *(_OWORD *)&v102[80] = *(_OWORD *)&v112[80];
            *(_OWORD *)&v102[64] = *(_OWORD *)&v112[64];
            *(_OWORD *)&v102[48] = *(_OWORD *)&v112[48];
            *(_OWORD *)&v102[32] = *(_OWORD *)&v112[32];
            *(_OWORD *)&v102[16] = *(_OWORD *)&v112[16];
            *(_OWORD *)v102 = *(_OWORD *)v112;
            *(_QWORD *)&v95 = v102;
            *((_QWORD *)&v95 + 1) = sub_140C9DC90;
            sub_1416ABFD0(v113, &unk_141A4B056, &v95);
            v125 = *(_QWORD *)&v113[8];
            v130 = *(_QWORD *)v113;
            sub_140D8BE20(
              (unsigned int)&v95,
              (_DWORD)a2,
              (unsigned int)&v70,
              *(_DWORD *)&v113[8],
              *(__int64 *)&v113[16],
              (__int64)v79);
            if ( (_DWORD)v95 != -1 )
            {
              *(_OWORD *)&v113[80] = v100;
              *(_OWORD *)&v113[64] = v99;
              *(_OWORD *)&v113[48] = v98;
              *(_OWORD *)&v113[32] = v97;
              *(_OWORD *)&v113[16] = v96;
              *(_OWORD *)v113 = v95;
              *(_QWORD *)&v119 = v102;
              *((_QWORD *)&v119 + 1) = sub_140C9DC90;
              *(_QWORD *)&v120 = v113;
              *((_QWORD *)&v120 + 1) = sub_14104A7D0;
              sub_1416ABFD0(&v108, &unk_141A4B0C9, &v119);
              *((_QWORD *)v6 + 4) = v109;
              v6[1] = v108;
              *((_QWORD *)v6 + 1) = 10;
              *(_QWORD *)v6 = -1;
              sub_140D1BEA0(v113);
LABEL_68:
              if ( v130 )
                sub_140001660(v125, v130, 1);
              sub_140D1BEA0(v102);
              goto LABEL_71;
            }
            if ( a4 && (((unsigned __int8)sub_140EE56F0() ^ 1) & (unsigned __int8)v134) == 1 )
            {
              sub_140DBCF70(&v126);
              if ( (_QWORD)v126 != -1 )
              {
                *(_QWORD *)&v113[16] = v127;
                *(_OWORD *)v113 = v126;
                sub_140D38820(&v119, v113);
                v131 = v119;
                v132 = v120;
                goto LABEL_66;
              }
            }
            else
            {
              *(_QWORD *)&v126 = -1;
            }
            *(_QWORD *)&v131 = 0;
            *((_QWORD *)&v131 + 1) = 1;
            v132 = 0;
LABEL_66:
            *(_QWORD *)v113 = &v131;
            *(_QWORD *)&v113[8] = sub_1400015F0;
            *(_QWORD *)&v113[16] = v102;
            *(_QWORD *)&v113[24] = sub_140C9DC90;
            sub_1416ABFD0(&v110, &unk_141A4B07C, v113);
            *((_QWORD *)v6 + 4) = v111;
            v6[1] = v110;
            *((_QWORD *)v6 + 1) = 10;
            *(_QWORD *)v6 = -1;
            if ( (_QWORD)v131 )
              sub_140001660(*((_QWORD *)&v131 + 1), v131, 1);
            goto LABEL_68;
          }
          *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v112[80];
          *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v112[64];
          v56 = *(_OWORD *)v112;
          v57 = *(_OWORD *)&v112[16];
          v58 = *(_OWORD *)&v112[32];
          *(__int128 *)((char *)v6 + 56) = *(_OWORD *)&v112[48];
          *(__int128 *)((char *)v6 + 40) = v58;
          *(__int128 *)((char *)v6 + 24) = v57;
          *(__int128 *)((char *)v6 + 8) = v56;
          *(_QWORD *)v6 = -1;
LABEL_71:
          sub_140D1CCF0(&v83);
          goto LABEL_72;
        }
        v82[5] = *(_OWORD *)&v112[88];
        v82[4] = *(_OWORD *)&v112[72];
        v82[3] = *(_OWORD *)&v112[56];
        v82[2] = *(_OWORD *)&v112[40];
        v82[1] = *(_OWORD *)&v112[24];
        v82[0] = *(_OWORD *)&v112[8];
        sub_140C1E360(v102, v82);
        v52 = *(_QWORD *)v102;
        *(_OWORD *)v113 = *(_OWORD *)&v102[8];
        *(_OWORD *)&v113[16] = *(_OWORD *)&v102[24];
        *(_OWORD *)&v113[32] = *(_OWORD *)&v102[40];
        *(_OWORD *)&v113[48] = *(_OWORD *)&v102[56];
        *(_OWORD *)&v113[64] = *(_OWORD *)&v102[72];
        *(_QWORD *)&v113[80] = *(_QWORD *)&v102[88];
        if ( *(_QWORD *)v102 != -1 )
        {
          *((_QWORD *)v6 + 12) = *(_QWORD *)&v113[80];
          v6[5] = *(_OWORD *)&v113[64];
          v53 = *(_OWORD *)v113;
          v54 = *(_OWORD *)&v113[16];
          v55 = *(_OWORD *)&v113[32];
          v6[4] = *(_OWORD *)&v113[48];
          v6[3] = v55;
          v6[2] = v54;
          v6[1] = v53;
          *((_QWORD *)v6 + 1) = v52;
          *(_QWORD *)v6 = -1;
          goto LABEL_71;
        }
        v122 = *(_OWORD *)&v113[48];
        v121 = *(_OWORD *)&v113[32];
        v120 = *(_OWORD *)&v113[16];
        v119 = *(_OWORD *)v113;
        v127 = *(_QWORD *)&v113[80];
        v126 = *(_OWORD *)&v113[64];
        if ( *(_QWORD *)&v113[80] )
        {
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v138 = 1;
            sub_140D1EE10((unsigned int)v102, DWORD2(v126), *(_DWORD *)&v113[80], (unsigned int)&unk_141A4AB0B, 3);
            *(_QWORD *)&v113[16] = *(_QWORD *)&v102[16];
            *(_OWORD *)v113 = *(_OWORD *)v102;
            *(_QWORD *)&v95 = v113;
            *((_QWORD *)&v95 + 1) = sub_1400015F0;
            *(_QWORD *)v102 = aCodexmateLibCo_36;
            *(_QWORD *)&v102[8] = 35;
            *(_QWORD *)&v102[16] = aCodexmateLibCo_36;
            *(_QWORD *)&v102[24] = 35;
            *(_QWORD *)&v102[32] = &off_141A4AFF8;
            sub_140BAD520(&unk_141A4AFA4, &v95, 2, v102);
            if ( *(_QWORD *)v113 )
              sub_140001660(*(_QWORD *)&v113[8], *(_QWORD *)v113, 1);
          }
        }
        v138 = 1;
        sub_140D9A5F0(&v95, a2);
        v136 = v101;
        if ( v101 != v140 )
        {
          *(_QWORD *)v113 = 0;
          *(_QWORD *)&v113[8] = 1;
          *(_QWORD *)&v113[16] = 0;
          *(_QWORD *)v102 = v113;
          *(_QWORD *)&v102[8] = sub_1400015F0;
          *(_QWORD *)&v102[16] = &v140;
          *(_QWORD *)&v102[24] = sub_1416BCC50;
          *(_QWORD *)&v102[32] = &v136;
          *(_QWORD *)&v102[40] = sub_1416BCC50;
          sub_1416ABFD0(&v106, &unk_141A4B010, v102);
          *((_QWORD *)v6 + 4) = v107;
          v6[1] = v106;
          *((_QWORD *)v6 + 1) = 10;
          *(_QWORD *)v6 = -1;
          if ( *(_QWORD *)v113 )
            sub_140001660(*(_QWORD *)&v113[8], *(_QWORD *)v113, 1);
          v138 = 1;
          sub_1407ADB20(&v95);
          sub_140025530(&v126);
          sub_140BAD350(&v119);
          goto LABEL_71;
        }
        if ( a4
          && (((unsigned __int8)sub_140EE56F0() ^ 1) & (unsigned __int8)v134) == 1
          && (sub_140D387E0(v128, aLaunchingCodex, 15), !(unsigned __int8)sub_140EE56F0()) )
        {
          sub_140DBCF70(&v131);
          v59 = v131;
          if ( (_QWORD)v131 != -1 )
            goto LABEL_63;
        }
        else
        {
          *(_QWORD *)&v131 = -1;
        }
        v124 = -1;
        v59 = -1;
        sub_140D387E0(v128, aDone_4, 4);
LABEL_63:
        v124 = v59;
        sub_140D824F0(v113, a2);
        v105 = v132;
        v104 = v131;
        *(_OWORD *)&v103[35] = v126;
        v103[37] = v127;
        sub_1418F44E0((__m128i *)v102, (const __m128i *)v113, 0x180u);
        v60 = v136;
        sub_1418F44E0((__m128i *)v6, (const __m128i *)v102, 0x1B0u);
        *((_BYTE *)v6 + 432) = v60;
        v138 = 0;
        sub_1407ADB20(&v95);
        sub_140BAD350(&v119);
        sub_140D1CCF0(&v83);
        sub_1407ADB20(v78);
        sub_140034990(&v70);
        sub_1407ADB20(v79);
        sub_140028CC0(v129, v137);
        sub_140028CC0(Address, v135);
        return v6;
      }
      *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v113[80];
      *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v113[64];
      v38 = *(_OWORD *)v113;
      v39 = *(_OWORD *)&v113[16];
      v40 = *(_OWORD *)&v113[32];
      v41 = *(_OWORD *)&v113[48];
    }
    else
    {
      v32 = *a2 + 16LL;
      v139 = 1;
      sub_1410261E0(v102, v32);
      v33 = *(_QWORD *)v102;
      v34 = v102[8];
      if ( *(_QWORD *)v102 != -1 )
      {
        *((_QWORD *)v6 + 12) = *(_QWORD *)&v102[88];
        *(__int128 *)((char *)v6 + 81) = *(_OWORD *)&v102[73];
        v35 = *(_OWORD *)&v102[9];
        v36 = *(_OWORD *)&v102[25];
        v37 = *(_OWORD *)&v102[41];
        *(__int128 *)((char *)v6 + 65) = *(_OWORD *)&v102[57];
        *(__int128 *)((char *)v6 + 49) = v37;
        *(__int128 *)((char *)v6 + 33) = v36;
        *(__int128 *)((char *)v6 + 17) = v35;
        *((_QWORD *)v6 + 1) = v33;
        *((_BYTE *)v6 + 16) = v34;
LABEL_29:
        *(_QWORD *)v6 = -1;
LABEL_74:
        sub_1407ADB20(v79);
LABEL_75:
        if ( (v137 & 1) == 0 && 2 * *v14 && !(unsigned __int8)sub_141938160(v42) )
          *((_BYTE *)v129 + 1) = 1;
        v21 = v129;
        v61 = *(_BYTE *)v129;
        *(_BYTE *)v129 = 0;
        if ( v61 == 2 )
          WakeByAddressSingle(v21);
        goto LABEL_79;
      }
      if ( (v102[8] & 1) == 0 )
      {
        sub_1418F44E0(v68, v79, 0x180u);
        v69 = v140;
        v139 = 0;
        sub_140D98BE0(v102, a2, v68);
        if ( *(_DWORD *)v102 == -1 )
        {
          v139 = 0;
          sub_140D824F0(v102, a2);
          sub_1418F44E0((__m128i *)v6, (const __m128i *)v102, 0x180u);
          *((_QWORD *)v6 + 48) = 0;
          *((_QWORD *)v6 + 49) = 8;
          *((_QWORD *)v6 + 50) = 0;
          *((_QWORD *)v6 + 51) = -1;
          *((_BYTE *)v6 + 432) = 0;
        }
        else
        {
          *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v102[80];
          *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v102[64];
          v43 = *(_OWORD *)v102;
          v44 = *(_OWORD *)&v102[16];
          v45 = *(_OWORD *)&v102[32];
          *(__int128 *)((char *)v6 + 56) = *(_OWORD *)&v102[48];
          *(__int128 *)((char *)v6 + 40) = v45;
          *(__int128 *)((char *)v6 + 24) = v44;
          *(__int128 *)((char *)v6 + 8) = v43;
          *(_QWORD *)v6 = -1;
        }
        goto LABEL_75;
      }
      v139 = 1;
      sub_141026E80(v102);
      *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v102[80];
      *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v102[64];
      v38 = *(_OWORD *)v102;
      v39 = *(_OWORD *)&v102[16];
      v40 = *(_OWORD *)&v102[32];
      v41 = *(_OWORD *)&v102[48];
    }
    *(__int128 *)((char *)v6 + 56) = v41;
    *(__int128 *)((char *)v6 + 40) = v40;
    *(__int128 *)((char *)v6 + 24) = v39;
    *(__int128 *)((char *)v6 + 8) = v38;
    goto LABEL_29;
  }
  *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v102[80];
  v23 = *(_OWORD *)&v102[17];
  v24 = *(_OWORD *)&v102[33];
  v25 = *(_OWORD *)&v102[49];
  *(__int128 *)((char *)v6 + 73) = *(_OWORD *)&v102[65];
  *(__int128 *)((char *)v6 + 57) = v25;
  *(__int128 *)((char *)v6 + 41) = v24;
  *(__int128 *)((char *)v6 + 25) = v23;
  *((_QWORD *)v6 + 1) = v20;
  *((_QWORD *)v6 + 2) = v21;
  *((_BYTE *)v6 + 24) = v22;
  *(_QWORD *)v6 = -1;
LABEL_79:
  if ( !(_BYTE)v135 && 2 * *v14 && !(unsigned __int8)sub_141938160(v21) )
    *(_BYTE *)(v12 + 17) = 1;
  v62 = Address;
  v63 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v63 == 2 )
    WakeByAddressSingle(v62);
  return v6;
}
