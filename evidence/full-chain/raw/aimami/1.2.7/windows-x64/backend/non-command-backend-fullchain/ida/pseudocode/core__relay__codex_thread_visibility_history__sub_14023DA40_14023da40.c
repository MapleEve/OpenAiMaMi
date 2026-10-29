// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x14023da40 | name sub_14023DA40
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14023DA40(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rcx
  __m128 v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  _BYTE *v11; // rax
  _BYTE *v12; // r15
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 result; // rax
  __int64 v18; // r12
  int v19; // eax
  _BYTE *v20; // rax
  _BYTE *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r12
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  __int64 v27; // rdx
  _BYTE *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r12
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __m128 v34; // xmm1
  unsigned __int8 v35; // al
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rdx
  _BYTE *v41; // rax
  _BYTE *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  _BYTE v45[24]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v46; // [rsp+40h] [rbp-40h]
  __int64 v47; // [rsp+50h] [rbp-30h]
  __int128 v48; // [rsp+60h] [rbp-20h]
  __int64 v49; // [rsp+70h] [rbp-10h]
  __int64 v50; // [rsp+78h] [rbp-8h]
  __int64 v51; // [rsp+80h] [rbp+0h] BYREF
  __int64 v52; // [rsp+88h] [rbp+8h]
  __int128 v53; // [rsp+90h] [rbp+10h]
  __int64 v54; // [rsp+A0h] [rbp+20h]
  __int64 v55; // [rsp+A8h] [rbp+28h] BYREF
  int v56; // [rsp+B0h] [rbp+30h]
  _BYTE *v57; // [rsp+B4h] [rbp+34h] BYREF
  __int128 v58; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v59; // [rsp+D0h] [rbp+50h]
  __int128 v60; // [rsp+E0h] [rbp+60h] BYREF
  __m256i v61; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v62; // [rsp+110h] [rbp+90h]
  _BYTE v63[40]; // [rsp+120h] [rbp+A0h] BYREF
  __m256i v64; // [rsp+148h] [rbp+C8h]
  __int64 v65; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v66; // [rsp+178h] [rbp+F8h]
  __int64 v67; // [rsp+180h] [rbp+100h]
  __int128 v68; // [rsp+190h] [rbp+110h] BYREF
  __m256i v69; // [rsp+1A0h] [rbp+120h]
  _BYTE v70[104]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v71; // [rsp+228h] [rbp+1A8h]
  __int128 v72; // [rsp+238h] [rbp+1B8h]
  __int64 v73; // [rsp+248h] [rbp+1C8h]
  __int128 v74; // [rsp+250h] [rbp+1D0h] BYREF
  __m256i v75; // [rsp+260h] [rbp+1E0h]
  __int128 v76; // [rsp+280h] [rbp+200h]
  __int64 v77; // [rsp+290h] [rbp+210h] BYREF
  __int128 v78; // [rsp+298h] [rbp+218h]
  __int64 v79; // [rsp+2A8h] [rbp+228h]
  _BYTE v80[48]; // [rsp+2B0h] [rbp+230h] BYREF
  __m256i v81; // [rsp+2E0h] [rbp+260h]
  __int128 v82; // [rsp+300h] [rbp+280h]
  __int64 v83; // [rsp+318h] [rbp+298h] BYREF
  __int64 v84; // [rsp+320h] [rbp+2A0h]
  _BYTE v85[120]; // [rsp+328h] [rbp+2A8h] BYREF
  __int128 v86; // [rsp+3A0h] [rbp+320h]
  __int64 v87; // [rsp+3B0h] [rbp+330h]
  char v88; // [rsp+3BFh] [rbp+33Fh] BYREF
  __int64 v89; // [rsp+3C0h] [rbp+340h]
  char v90; // [rsp+3CFh] [rbp+34Fh] BYREF
  __int64 v91; // [rsp+3D0h] [rbp+350h]
  char v92; // [rsp+3DFh] [rbp+35Fh]
  __int64 v93; // [rsp+3E0h] [rbp+360h]

  v93 = -2;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v4 = a2[4];
  v5 = a2[5];
  sub_140282430(v85);
  if ( *(_QWORD *)&v85[32] == -1 )
  {
    v6 = v85[0] & 3;
    if ( (unsigned int)(v6 - 2) >= 2 && (v85[0] & 3) != 0 )
    {
      *(_QWORD *)&v70[8] = *(_QWORD *)v85 - 1LL;
      v70[0] = 3;
      sub_1416BCB00(&v70[8]);
    }
    goto LABEL_15;
  }
  if ( *(_DWORD *)&v85[32] == 2 || *(_QWORD *)v85 == -1 )
  {
LABEL_15:
    nullsub_1(v6);
    v10 = 49;
    v11 = (_BYTE *)sub_140001650(49, 1);
    if ( !v11 )
      sub_141938D2B(1, 49);
    v12 = v11;
    qmemcpy(v11, "private reasoning candidate is no longer readable", 49);
    v13 = 10;
    v14 = 49;
    goto LABEL_21;
  }
  v7 = (__m128)*(unsigned __int64 *)&v85[64];
  v51 = *(_QWORD *)v85;
  v52 = *(_QWORD *)&v85[8];
  v53 = *(_OWORD *)&v85[16];
  v54 = *(_QWORD *)&v85[88];
  _mm_storel_ps((double *)&v55, (__m128)*(unsigned __int64 *)&v85[80]);
  v56 = 1;
  _mm_storel_ps(&v57, v7);
  sub_14023B160((unsigned int)v85, v4, v5, a2[1], a2[2]);
  v9 = *(_QWORD *)v85;
  *(_OWORD *)v80 = *(_OWORD *)&v85[8];
  *(_OWORD *)&v80[16] = *(_OWORD *)&v85[24];
  *(_OWORD *)&v80[32] = *(_OWORD *)&v85[40];
  v81 = *(__m256i *)&v85[56];
  v82 = *(_OWORD *)&v85[88];
  if ( *(_QWORD *)v85 == -1 )
  {
    v58 = *(_OWORD *)v80;
    v59 = *(_OWORD *)&v80[16];
    v60 = *(_OWORD *)&v80[32];
    v61 = v81;
    v62 = v82;
  }
  else
  {
    v73 = v87;
    v72 = v86;
    v71 = *(_OWORD *)&v85[104];
    *(_OWORD *)&v70[8] = *(_OWORD *)v80;
    *(_OWORD *)&v70[24] = *(_OWORD *)&v80[16];
    *(_OWORD *)&v70[40] = *(_OWORD *)&v80[32];
    *(__m256i *)&v70[56] = v81;
    *(_OWORD *)&v70[88] = v82;
    *(_QWORD *)v70 = *(_QWORD *)v85;
    sub_140232D30(&v58, v70, v4, v5);
    if ( v9 )
      sub_140001660(*(_QWORD *)&v70[8], v9, 1);
    if ( *(_QWORD *)&v70[48] )
      sub_140001660(*(_QWORD *)&v70[56], *(_QWORD *)&v70[48], 1);
    if ( *(_QWORD *)&v70[96] != -1 && *(_QWORD *)&v70[96] )
      sub_140001660(v71, *(_QWORD *)&v70[96], 1);
  }
  v13 = v58;
  v14 = *((_QWORD *)&v59 + 1);
  v12 = (_BYTE *)v59;
  v68 = v60;
  v69 = v61;
  if ( (_QWORD)v58 != -1 )
  {
    v76 = v62;
    v74 = v68;
    v75 = v69;
    v10 = *((_QWORD *)&v58 + 1);
    v15 = v51;
    if ( !v51 )
    {
LABEL_21:
      v16 = v10 >> 8;
LABEL_22:
      *(_QWORD *)v70 = v13;
      v70[9] = v16;
      v70[10] = BYTE1(v16);
      v70[11] = BYTE2(v16);
      v70[12] = BYTE3(v16);
      v70[13] = BYTE4(v16);
      v70[14] = BYTE5(v16);
      v70[15] = BYTE6(v16);
      v70[8] = v10;
      *(_QWORD *)&v70[16] = v12;
      *(_QWORD *)&v70[24] = v14;
      *(_OWORD *)&v70[32] = v74;
      *(__m256i *)&v70[48] = v75;
      *(_OWORD *)&v70[80] = v76;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)v80 = a2;
        *(_QWORD *)&v80[8] = sub_1400015F0;
        *(_QWORD *)&v80[16] = v70;
        *(_QWORD *)&v80[24] = sub_14104A7D0;
        *(_QWORD *)&v85[48] = 2;
        *(_QWORD *)&v85[56] = aCodexmateLibCo_0;
        *(_QWORD *)&v85[64] = 51;
        *(_QWORD *)&v85[80] = &unk_1419DEE44;
        *(_QWORD *)&v85[88] = v80;
        *(_QWORD *)v85 = 0;
        *(_QWORD *)&v85[8] = aCodexmateLibCo_0;
        *(_QWORD *)&v85[16] = 51;
        *(_QWORD *)&v85[24] = 0;
        *(_QWORD *)&v85[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v85[40] = 41;
        *(_QWORD *)&v85[72] = 0x268800000001LL;
        sub_1414D53A0(&v88, v85);
      }
      *(_QWORD *)(a1 + 24) = 1;
      return sub_1401954F0(v70);
    }
LABEL_20:
    sub_140001660(v52, v15, 1);
    goto LABEL_21;
  }
  *(_QWORD *)v63 = *((_QWORD *)&v58 + 1);
  *(_OWORD *)&v63[8] = v59;
  *(_OWORD *)&v63[24] = v68;
  v64 = v69;
  v18 = *((_QWORD *)&v58 + 1);
  if ( *((_QWORD *)&v58 + 1) != -1
    && (*((_QWORD *)&v59 + 1) != 6
     || (v19 = *(_DWORD *)v59 ^ 0x6E65706F, (v8 = v19 | *(unsigned __int16 *)(v59 + 4) ^ 0x6961u) != 0))
    || *(_QWORD *)&v63[24] != -1
    && (v64.m256i_i64[0] != 6
     || (v8 = **(_DWORD **)&v63[32] ^ 0x6E65706Fu,
         (unsigned int)v8 | *(unsigned __int16 *)(*(_QWORD *)&v63[32] + 4LL) ^ 0x6961))
    || v64.m256i_i64[1] != -1
    && (v64.m256i_i64[3] != 6
     || (v8 = *(_DWORD *)v64.m256i_i64[2] ^ 0x6E65706Fu,
         (unsigned int)v8 | *(unsigned __int16 *)(v64.m256i_i64[2] + 4) ^ 0x6961)) )
  {
    nullsub_1(v8);
    v20 = (_BYTE *)sub_140001650(60, 1);
    if ( !v20 )
      sub_141938D2B(1, 60);
    v21 = v20;
    qmemcpy(v20, "private reasoning candidate provider changed; retry required", 60);
    if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v12, v18, 1);
    if ( *(_QWORD *)&v63[24] != -1 && *(_QWORD *)&v63[24] )
      sub_140001660(*(_QWORD *)&v63[32], *(_QWORD *)&v63[24], 1);
    v13 = 10;
    v10 = 60;
    if ( v64.m256i_i64[1] != -1 && v64.m256i_i64[1] )
      sub_140001660(v64.m256i_i64[2], v64.m256i_i64[1], 1);
    v14 = 60;
    v12 = v21;
    v15 = v51;
    if ( !v51 )
      goto LABEL_21;
    goto LABEL_20;
  }
  sub_140196250(v63);
  sub_140282430(v85);
  if ( *(_QWORD *)&v85[32] == -1 )
  {
    v22 = v85[0] & 3;
    if ( (unsigned int)(v22 - 2) >= 2 && (v85[0] & 3) != 0 )
    {
      *(_QWORD *)&v70[8] = *(_QWORD *)v85 - 1LL;
      v70[0] = 3;
      sub_1416BCB00(&v70[8]);
    }
    goto LABEL_67;
  }
  if ( *(_DWORD *)&v85[32] == 2 || (v23 = *(_QWORD *)v85, *(_QWORD *)v85 == -1) )
  {
LABEL_67:
    nullsub_1(v22);
    v14 = 64;
    v28 = (_BYTE *)sub_140001650(64, 1);
    if ( !v28 )
      sub_141938D2B(1, 64);
    v12 = v28;
    qmemcpy(v28, "rollout changed before private reasoning cleanup; retry required", 64);
    v13 = 10;
    LOBYTE(v10) = 64;
    v16 = 0;
    goto LABEL_69;
  }
  v22 = *(_QWORD *)&v85[8];
  if ( *(_QWORD *)&v85[88] != v54
    || (v89 = *(_QWORD *)v85,
        v12 = *(_BYTE **)&v85[64],
        v24 = *(_QWORD *)&v85[80],
        v91 = *(_QWORD *)&v85[8],
        v25 = sub_1402899E0(*(_QWORD *)&v85[8], *(_QWORD *)&v85[16], v52, v53),
        v23 = v89,
        v22 = v91,
        ((v24 == v55) & v25) != 1)
    || !(_BYTE)v56
    || v12 != *(_BYTE **)&v57 )
  {
    if ( v23 )
      sub_140001660(v22, v23, 1);
    goto LABEL_67;
  }
  if ( v89 )
    sub_140001660(v91, v89, 1);
  sub_140281F40(v85, v4, v5);
  v89 = *(_QWORD *)v85;
  if ( !*(_QWORD *)v85 )
  {
    v13 = 2;
    v10 = *(_QWORD *)&v85[8];
LABEL_86:
    v76 = *(_OWORD *)&v70[48];
    v75 = *(__m256i *)&v70[16];
    v74 = *(_OWORD *)v70;
LABEL_87:
    v16 = v10 >> 8;
    goto LABEL_69;
  }
  *(_QWORD *)v80 = 0;
  *(_QWORD *)&v80[8] = 1;
  v91 = *(_QWORD *)&v85[8];
  v14 = *(_QWORD *)(*(_QWORD *)&v85[8] + 112LL);
  v12 = v85;
  v13 = -1;
  while ( 1 )
  {
    *(_QWORD *)&v80[16] = 0;
    LOBYTE(v26) = 10;
    if ( (((__int64 (__fastcall *)(__int64, __int64, _BYTE *))v14)(v89, v26, v80) & 1) != 0 )
    {
      v84 = v27;
      v13 = 2;
      goto LABEL_78;
    }
    if ( !v27 )
    {
      v84 = 0;
      goto LABEL_78;
    }
    sub_14026A110((unsigned int)v85, *(_DWORD *)&v80[8], *(_DWORD *)&v80[16], v4, v5);
    if ( *(_QWORD *)v85 != -1 )
      break;
    if ( v85[8] == 1 )
    {
      v84 = 1;
      goto LABEL_78;
    }
  }
  v12 = *(_BYTE **)&v85[16];
  v84 = *(_QWORD *)&v85[8];
  v14 = *(_QWORD *)&v85[24];
  *(_OWORD *)v70 = *(_OWORD *)&v85[32];
  *(_OWORD *)&v70[16] = *(_OWORD *)&v85[48];
  *(_OWORD *)&v70[32] = *(_OWORD *)&v85[64];
  *(_OWORD *)&v70[48] = *(_OWORD *)&v85[80];
  v13 = *(_QWORD *)v85;
LABEL_78:
  if ( *(_QWORD *)v80 )
    sub_140001660(*(_QWORD *)&v80[8], *(_QWORD *)v80, 1);
  if ( *(_QWORD *)v91 )
    (*(void (__fastcall **)(__int64))v91)(v89);
  v29 = *(_QWORD *)(v91 + 8);
  if ( v29 )
    sub_140001660(v89, v29, *(_QWORD *)(v91 + 16));
  if ( (_DWORD)v13 != -1 )
  {
    v10 = v84;
    goto LABEL_86;
  }
  if ( (v84 & 1) != 0 )
  {
    sub_140281CC0(v85, v4, v5);
    v13 = *(_QWORD *)v85;
    if ( *(_QWORD *)v85 != -1 )
    {
      v16 = ((unsigned __int64)((v85[15] << 16) | (unsigned int)*(unsigned __int16 *)&v85[13]) << 32)
          | *(unsigned int *)&v85[9];
      v12 = *(_BYTE **)&v85[16];
      v14 = *(_QWORD *)&v85[24];
      v74 = *(_OWORD *)&v85[32];
      v75 = *(__m256i *)&v85[48];
      v76 = *(_OWORD *)&v85[80];
      LOBYTE(v10) = v85[8];
      goto LABEL_69;
    }
    v90 = v85[8];
    sub_140282430(v85);
    v91 = *(_QWORD *)v85;
    if ( *(_QWORD *)&v85[32] == -1 )
      goto LABEL_95;
    v47 = *(_QWORD *)&v85[24];
    v46 = *(_OWORD *)&v85[8];
    *(_OWORD *)v63 = *(_OWORD *)&v85[40];
    *(_OWORD *)&v63[16] = *(_OWORD *)&v85[56];
    *(_QWORD *)&v63[32] = *(_QWORD *)&v85[72];
    v12 = *(_BYTE **)&v85[80];
    v30 = *(_QWORD *)&v85[88];
    v48 = *(_OWORD *)&v85[96];
    v49 = *(_QWORD *)&v85[112];
    if ( *(_DWORD *)&v85[32] == 2 )
    {
      v91 = sub_1416793A0(0, aRolloutIsMissi, 18);
LABEL_95:
      v13 = 2;
LABEL_128:
      v10 = v91;
      goto LABEL_87;
    }
    v79 = v47;
    v78 = v46;
    *(_QWORD *)&v80[40] = *(_QWORD *)&v63[32];
    *(_OWORD *)&v80[24] = *(_OWORD *)&v63[16];
    *(_OWORD *)&v80[8] = *(_OWORD *)v63;
    *(_OWORD *)&v81.m256i_u64[2] = v48;
    *(_QWORD *)&v82 = v49;
    v77 = v91;
    *(_QWORD *)v80 = *(_QWORD *)&v85[32];
    *(_OWORD *)v81.m256i_i8 = *(_OWORD *)&v85[80];
    sub_140282430(v85);
    if ( *(_QWORD *)&v85[32] == -1 )
    {
      v31 = v85[0] & 3;
      if ( (unsigned int)(v31 - 2) >= 2 && (v85[0] & 3) != 0 )
      {
        *(_QWORD *)&v70[8] = *(_QWORD *)v85 - 1LL;
        v70[0] = 3;
        sub_1416BCB00(&v70[8]);
      }
    }
    else if ( *(_DWORD *)&v85[32] != 2 && *(_QWORD *)v85 != -1 )
    {
      v32 = *(_QWORD *)&v85[16];
      v33 = *(_QWORD *)&v85[8];
      v34 = (__m128)*(unsigned __int64 *)&v85[64];
      v58 = *(_OWORD *)v85;
      v59 = *(_OWORD *)&v85[16];
      *(_QWORD *)&v60 = *(_QWORD *)&v85[88];
      _mm_storel_ps((double *)&v60 + 1, (__m128)*(unsigned __int64 *)&v85[80]);
      v61.m256i_i32[0] = 1;
      _mm_storel_ps((double *)((char *)v61.m256i_i64 + 4), v34);
      v35 = sub_1402899E0(v33, v32, v78, *((_QWORD *)&v78 + 1));
      if ( (((_QWORD)v60 == v30) & v35) == 1 && *((_BYTE **)&v60 + 1) == v12 )
      {
        v12 = (_BYTE *)sub_141682A00(v78, *((_QWORD *)&v78 + 1));
        if ( v12 )
        {
          v38 = v37;
          sub_141568C20(v70);
          *(_QWORD *)v85 = v70;
          *(_QWORD *)&v85[8] = sub_141569D80;
          sub_1416ABFD0(v45, &unk_1419D590A, v85);
          v14 = (__int64)&v65;
          sub_140BA4A70(&v65, v12, v38, v45);
          LODWORD(v68) = 0;
          *((_QWORD *)&v68 + 1) = 0;
          v69.m256i_i32[0] = 7;
          *(__int64 *)((char *)v69.m256i_i64 + 4) = 0;
          *(__int64 *)((char *)&v69.m256i_i64[1] + 1) = 0x100000001LL;
          v39 = sub_141690E40(&v68);
          v91 = v40;
          if ( v39 == 1 )
          {
            if ( v65 )
              sub_140001660(v66, v65, 1);
            v13 = 2;
          }
          else
          {
            *(_QWORD *)v85 = v4;
            *(_QWORD *)&v85[8] = v5;
            *(_QWORD *)&v85[16] = &v77;
            *(_QWORD *)&v85[96] = v91;
            *(_QWORD *)&v85[24] = v4;
            *(_QWORD *)&v85[32] = v5;
            *(_QWORD *)&v85[40] = &v90;
            *(_QWORD *)&v85[48] = &v51;
            *(_QWORD *)&v85[56] = &v65;
            *(_QWORD *)&v85[64] = v80;
            *(_QWORD *)&v85[72] = &v58;
            *(_QWORD *)&v85[80] = v12;
            *(_QWORD *)&v85[88] = v38;
            sub_1401AEF00(v70, v85);
            v13 = *(_QWORD *)v70;
            if ( *(_QWORD *)v70 != -1 )
            {
              v43 = sub_141695140(v66, v67);
              v44 = v43;
              v50 = v43;
              if ( v43 )
              {
                v92 = 1;
                if ( (unsigned __int8)sub_1401C6A70(v43) )
                {
                  v83 = v44;
                  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                  {
                    *(_QWORD *)&v74 = &v83;
                    *((_QWORD *)&v74 + 1) = sub_1416BB0B0;
                    *(_QWORD *)v85 = aCodexmateLibCo_19;
                    *(_QWORD *)&v85[8] = 68;
                    *(_QWORD *)&v85[16] = aCodexmateLibCo_19;
                    *(_QWORD *)&v85[24] = 68;
                    *(_QWORD *)&v85[32] = &off_1419D5990;
                    sub_140BAD520(&unk_1419D5922, &v74, 2, v85);
                  }
                  v92 = 0;
                  sub_140032B80(&v83);
                }
                else
                {
                  *(_QWORD *)v85 = v44;
                  v92 = 0;
                  sub_140032B80(v85);
                }
              }
            }
            v91 = *(_QWORD *)&v70[8];
            v14 = *(_QWORD *)&v70[24];
            v12 = *(_BYTE **)&v70[16];
            v74 = *(_OWORD *)&v70[32];
            v75 = *(__m256i *)&v70[48];
            v76 = *(_OWORD *)&v70[80];
            if ( v65 )
              sub_140001660(v66, v65, 1);
          }
        }
        else
        {
          sub_1401AEE90(v85);
          v13 = *(_QWORD *)v85;
          v12 = *(_BYTE **)&v85[16];
          v91 = *(_QWORD *)&v85[8];
          v14 = *(_QWORD *)&v85[24];
          v74 = *(_OWORD *)&v85[32];
          v75 = *(__m256i *)&v85[48];
          v76 = *(_OWORD *)&v85[80];
        }
      }
      else
      {
        LOBYTE(v36) = (_QWORD)v60 == v30;
        nullsub_1(v36);
        v91 = 61;
        v42 = (_BYTE *)sub_140001650(61, 1);
        if ( !v42 )
          sub_141938D2B(1, 61);
        v12 = v42;
        qmemcpy(v42, "rollout representation changed before writing; retry required", 61);
        v13 = 10;
        v14 = 61;
      }
      if ( (_QWORD)v58 )
        sub_140001660(*((_QWORD *)&v58 + 1), v58, 1);
LABEL_126:
      if ( v77 )
        sub_140001660(v78, v77, 1);
      goto LABEL_128;
    }
    nullsub_1(v31);
    v91 = 38;
    v41 = (_BYTE *)sub_140001650(38, 1);
    if ( !v41 )
      sub_141938D2B(1, 38);
    v12 = v41;
    qmemcpy(v41, "cannot snapshot rollout before writing", 38);
    v13 = 10;
    v14 = 38;
    goto LABEL_126;
  }
  v13 = -1;
  v16 = 0;
  LOBYTE(v10) = 0;
LABEL_69:
  if ( v51 )
    sub_140001660(v52, v51, 1);
  if ( v13 != -1 )
    goto LABEL_22;
  result = (v16 << 8) | (unsigned __int8)v10;
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 1;
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
