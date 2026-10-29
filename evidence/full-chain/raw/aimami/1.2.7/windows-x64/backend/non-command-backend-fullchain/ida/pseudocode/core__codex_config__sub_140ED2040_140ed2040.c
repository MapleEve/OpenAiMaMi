// win 1.2.7 | module src/core/codex_config.rs | ea 0x140ed2040 | name sub_140ED2040
// win 1.2.7 | module src/core/codex_config.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140ED2040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  bool v11; // r12
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rbx
  void *v19; // r15
  __int128 v20; // xmm6
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // r15
  _QWORD *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rax
  __int128 v32; // kr50_16
  __int64 v33; // r8
  __int128 v34; // xmm0
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int128 v39; // kr60_16
  __int128 v40; // kr70_16
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int64 v44; // rbx
  _QWORD *v45; // r14
  __int64 v46; // rdi
  __int64 v47; // r13
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  _QWORD *v51; // rcx
  _QWORD *v52; // rsi
  __int128 v53; // [rsp+30h] [rbp-50h] BYREF
  __int128 v54; // [rsp+40h] [rbp-40h]
  void *v55; // [rsp+50h] [rbp-30h]
  __m128i v56; // [rsp+58h] [rbp-28h]
  __int128 v57; // [rsp+68h] [rbp-18h]
  __int128 v58; // [rsp+78h] [rbp-8h]
  __int128 v59; // [rsp+88h] [rbp+8h]
  __m128i v60[9]; // [rsp+98h] [rbp+18h] BYREF
  __m128i v61; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v62; // [rsp+138h] [rbp+B8h]
  __int128 v63; // [rsp+148h] [rbp+C8h]
  __int128 v64; // [rsp+158h] [rbp+D8h]
  __m128i v65[9]; // [rsp+168h] [rbp+E8h] BYREF
  _QWORD v66[3]; // [rsp+1F8h] [rbp+178h] BYREF
  _QWORD v67[2]; // [rsp+210h] [rbp+190h] BYREF
  _QWORD v68[2]; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v69; // [rsp+230h] [rbp+1B0h]
  __int128 v70; // [rsp+240h] [rbp+1C0h]
  __int128 v71; // [rsp+250h] [rbp+1D0h]
  __int128 v72; // [rsp+260h] [rbp+1E0h]
  __int128 v73; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v74; // [rsp+280h] [rbp+200h]
  __int128 v75; // [rsp+290h] [rbp+210h]
  __int128 v76; // [rsp+2A0h] [rbp+220h]
  __int128 v77; // [rsp+2B0h] [rbp+230h]
  __int128 v78; // [rsp+2C0h] [rbp+240h]
  unsigned __int64 v79; // [rsp+2D0h] [rbp+250h] BYREF
  _QWORD v80[2]; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v81; // [rsp+2E8h] [rbp+268h]
  _BYTE v82[208]; // [rsp+2F0h] [rbp+270h] BYREF
  __m256i v83; // [rsp+3E8h] [rbp+368h] BYREF
  __int128 v84; // [rsp+408h] [rbp+388h]
  __int128 v85; // [rsp+418h] [rbp+398h]
  __int128 v86; // [rsp+428h] [rbp+3A8h]
  __int128 v87; // [rsp+438h] [rbp+3B8h]
  __int64 v88; // [rsp+448h] [rbp+3C8h]
  __int64 v89; // [rsp+450h] [rbp+3D0h]
  __int64 v90; // [rsp+458h] [rbp+3D8h]
  __int64 v91; // [rsp+460h] [rbp+3E0h]
  __int64 v92; // [rsp+468h] [rbp+3E8h]
  __int64 v93; // [rsp+470h] [rbp+3F0h]
  __int64 v94; // [rsp+478h] [rbp+3F8h]
  __int64 v95; // [rsp+480h] [rbp+400h]
  __int64 v96; // [rsp+488h] [rbp+408h]
  char v97; // [rsp+497h] [rbp+417h] BYREF
  __int64 v98; // [rsp+498h] [rbp+418h]

  v98 = -2;
  v88 = a4;
  v68[0] = a4;
  v68[1] = a5;
  v80[0] = aChangeMcpServe;
  v80[1] = 23;
  v90 = a2;
  v91 = a3;
  v7 = sub_141682A00(a2, a3);
  if ( v7 )
  {
    v82[0] = 1;
    v9 = sub_14168A790(v82, v7, v8);
    if ( v9 )
    {
      v83.m256i_i64[0] = 2;
      v83.m256i_i64[1] = v9;
      goto LABEL_55;
    }
  }
  v10 = 1;
  v11 = 0;
  v81 = a1;
  while ( 1 )
  {
    if ( v11 || v10 > 3 )
    {
      *(_QWORD *)v82 = v80;
      *(_QWORD *)&v82[8] = sub_140186EE0;
      sub_1416ABFD0(&v83.m256i_u64[1], &unk_141A55A3A, v82);
      v83.m256i_i64[0] = 10;
      goto LABEL_55;
    }
    v12 = v10 + 1;
    v11 = v10 == 3;
    if ( v10 == 3 )
      v12 = 3;
    v79 = v10;
    sub_140EC7390(v82, v90, v91);
    v93 = *(_QWORD *)&v82[8];
    v13 = *(_QWORD *)&v82[24];
    if ( *(_QWORD *)v82 != -1 )
    {
      v87 = *(_OWORD *)&v82[80];
      v86 = *(_OWORD *)&v82[64];
      v85 = *(_OWORD *)&v82[48];
      v84 = *(_OWORD *)&v82[32];
      v83.m256i_i64[1] = v93;
      *(_OWORD *)&v83.m256i_u64[2] = *(_OWORD *)&v82[16];
      v83.m256i_i64[0] = *(_QWORD *)v82;
      goto LABEL_55;
    }
    v96 = *(_QWORD *)&v82[16];
    sub_140ED39C0((unsigned int)v82, *(_DWORD *)&v82[16], *(_DWORD *)&v82[24], v88, a5);
    v95 = *(_QWORD *)&v82[8];
    v14 = *(_QWORD *)v82;
    v16 = *(_QWORD *)&v82[24];
    v15 = *(_QWORD *)&v82[16];
    if ( *(_QWORD *)v82 != -1 )
    {
      v72 = *(_OWORD *)&v82[80];
      v71 = *(_OWORD *)&v82[64];
      v70 = *(_OWORD *)&v82[48];
      v69 = *(_OWORD *)&v82[32];
      v21 = v95;
LABEL_52:
      v87 = v72;
      v86 = v71;
      v85 = v70;
      v84 = v69;
      v83.m256i_i64[2] = v15;
      v83.m256i_i64[3] = v16;
      v83.m256i_i64[0] = v14;
      v83.m256i_i64[1] = v21;
      if ( v93 )
        sub_140001660(v96, v93, 1);
      a1 = v81;
LABEL_55:
      *(_OWORD *)(a1 + 88) = v87;
      *(_OWORD *)(a1 + 72) = v86;
      v31 = v83.m256i_i64[0];
      v32 = *(_OWORD *)&v83.m256i_u64[1];
      v33 = v83.m256i_i64[3];
      v34 = v84;
      *(_OWORD *)(a1 + 56) = v85;
      *(_OWORD *)(a1 + 40) = v34;
      *(_QWORD *)(a1 + 24) = *((_QWORD *)&v32 + 1);
      *(_QWORD *)(a1 + 32) = v33;
      *(_QWORD *)(a1 + 8) = v31;
      *(_QWORD *)(a1 + 16) = v32;
LABEL_56:
      *(_QWORD *)a1 = -1;
      return a1;
    }
    v94 = *(_QWORD *)&v82[16];
    sub_1411D9990(v82, *(_QWORD *)&v82[16], *(_QWORD *)&v82[24]);
    v17 = *(_QWORD *)v82;
    if ( *(_QWORD *)v82 == 2 )
    {
      v78 = *(_OWORD *)&v82[88];
      v77 = *(_OWORD *)&v82[72];
      v76 = *(_OWORD *)&v82[56];
      v75 = *(_OWORD *)&v82[40];
      v74 = *(_OWORD *)&v82[24];
      v73 = *(_OWORD *)&v82[8];
      v67[0] = &v73;
      v67[1] = sub_1411CFD60;
      sub_1416ABFD0(v66, &unk_141A57333, v67);
      v21 = v66[0];
      v26 = v66[1];
      v16 = v66[2];
      if ( *((_QWORD *)&v74 + 1) )
        sub_140001660(v75, *((_QWORD *)&v74 + 1), 1);
      if ( *((_QWORD *)&v77 + 1) != -1 && *((_QWORD *)&v77 + 1) )
        sub_140001660(v78, *((_QWORD *)&v77 + 1), 1);
      v27 = *((_QWORD *)&v76 + 1);
      v28 = v77;
      if ( (_QWORD)v77 )
      {
        v29 = (_QWORD *)(*((_QWORD *)&v76 + 1) + 8LL);
        do
        {
          v30 = *(v29 - 1);
          if ( v30 )
            sub_140001660(*v29, v30, 1);
          v29 += 3;
          --v28;
        }
        while ( v28 );
      }
      if ( (_QWORD)v76 )
        sub_140001660(v27, 24 * v76, 8);
      v14 = 9;
      goto LABEL_49;
    }
    v18 = *(_QWORD *)&v82[8];
    v19 = *(void **)&v82[32];
    sub_1418F44E0(&v61, (const __m128i *)&v82[40], 0xD0u);
    v20 = *(_OWORD *)&v82[16];
    v59 = v64;
    v58 = v63;
    v57 = v62;
    v56 = v61;
    sub_1418F44E0(v60, v65, 0x90u);
    v54 = v20;
    v55 = v19;
    *(_QWORD *)&v53 = v17;
    *((_QWORD *)&v53 + 1) = v18;
    sub_140ED3770(v82, &v53, v88, a5);
    v21 = *(_QWORD *)&v82[8];
    v14 = *(_QWORD *)v82;
    if ( *(_QWORD *)v82 != -1 )
    {
      v16 = *(_QWORD *)&v82[24];
      v26 = *(_QWORD *)&v82[16];
      v69 = *(_OWORD *)&v82[32];
      v70 = *(_OWORD *)&v82[48];
      v71 = *(_OWORD *)&v82[64];
      v72 = *(_OWORD *)&v82[80];
      sub_140E96BD0(&v53);
LABEL_49:
      if ( v95 )
        sub_140001660(v94, v95, 1);
      v15 = v26;
      goto LABEL_52;
    }
    *(_QWORD *)v82 = 5;
    *(_QWORD *)&v82[8] = -1;
    *(_QWORD *)&v82[32] = -1;
    *(_QWORD *)&v82[56] = -1;
    v82[80] = a6;
    sub_1411CD040((unsigned int)&v61, v21, (unsigned int)aEnabled_7, 7, (__int64)v82);
    if ( v61.m128i_i32[0] != -1 )
      sub_140E96620(&v61);
    v61.m128i_i64[0] = 0;
    v61.m128i_i64[1] = 1;
    *(_QWORD *)&v62 = 0;
    *(_QWORD *)&v82[16] = 1610612768;
    *(_QWORD *)v82 = &v61;
    *(_QWORD *)&v82[8] = &off_141A65938;
    if ( (unsigned __int8)sub_1411D9F80(&v53, v82) )
      sub_141939040(
        (unsigned int)aADisplayImplem_10,
        55,
        (unsigned int)&v97,
        (unsigned int)&unk_141A58C98,
        (__int64)&off_141A659F0);
    v92 = v61.m128i_i64[1];
    v22 = v61.m128i_i64[0];
    v23 = v62;
    sub_140E96BD0(&v53);
    if ( v95 )
      sub_140001660(v94, v95, 1);
    a1 = v81;
    if ( v23 == v13 && !(unsigned int)sub_1418F4B70(v92, v96) )
      break;
    v94 = v22;
    sub_140EC7390(v82, v90, v91);
    v24 = *(_QWORD *)&v82[8];
    v95 = *(_QWORD *)&v82[16];
    if ( *(_QWORD *)v82 != -1 )
    {
      v87 = *(_OWORD *)&v82[80];
      v86 = *(_OWORD *)&v82[64];
      v85 = *(_OWORD *)&v82[48];
      v84 = *(_OWORD *)&v82[32];
      *(_OWORD *)&v83.m256i_u64[2] = __PAIR128__(*(unsigned __int64 *)&v82[24], v95);
      *(_OWORD *)v83.m256i_i8 = *(_OWORD *)v82;
      goto LABEL_59;
    }
    if ( *(_QWORD *)&v82[24] == v13 && !(unsigned int)sub_1418F4B70(v95, v96) )
    {
      v89 = v24;
      if ( (sub_140222E10(v90, v91, v92, v23) & 1) == 0 )
      {
        sub_1401BD710(v38);
        v83.m256i_i64[0] = -1;
        if ( v89 )
          sub_140001660(v95, v89, 1);
        v37 = v94;
        if ( v94 )
        {
          v36 = v92;
LABEL_75:
          sub_140001660(v36, v37, 1);
        }
        goto LABEL_76;
      }
      *(_QWORD *)&v73 = v38;
      *(_QWORD *)v82 = v80;
      *(_QWORD *)&v82[8] = sub_140186EE0;
      *(_QWORD *)&v82[16] = &v73;
      *(_QWORD *)&v82[24] = sub_1416BB0B0;
      sub_1416ABFD0(&v53, &unk_141A56E20, v82);
      *(_OWORD *)v82 = v53;
      *(_QWORD *)&v82[16] = v54;
      if ( (unsigned int)(v73 & 3) - 2 >= 2 && (v73 & 3) != 0 )
      {
        v61.m128i_i64[1] = v73 - 1;
        v61.m128i_i8[0] = 3;
        sub_1416BCB00(&v61.m128i_u64[1]);
      }
      *(_OWORD *)&v83.m256i_u64[1] = *(_OWORD *)v82;
      v83.m256i_i64[3] = *(_QWORD *)&v82[16];
      v83.m256i_i64[0] = 10;
      if ( v89 )
        sub_140001660(v95, v89, 1);
LABEL_59:
      if ( v94 )
        sub_140001660(v92, v94, 1);
      if ( v93 )
        sub_140001660(v96, v93, 1);
      goto LABEL_55;
    }
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v89 = v24;
      *(_QWORD *)&v53 = v80;
      *((_QWORD *)&v53 + 1) = sub_140186EE0;
      *(_QWORD *)&v54 = &v79;
      *((_QWORD *)&v54 + 1) = sub_1416BCB10;
      v55 = &unk_141A55A88;
      v56.m128i_i64[0] = (__int64)sub_1416BCB10;
      *(_QWORD *)&v82[48] = 2;
      *(_QWORD *)&v82[56] = aCodexmateLibCo_38;
      *(_QWORD *)&v82[64] = 33;
      *(_QWORD *)&v82[80] = &unk_141A55A90;
      *(_QWORD *)&v82[88] = &v53;
      *(_QWORD *)v82 = 0;
      *(_QWORD *)&v82[8] = aCodexmateLibCo_38;
      *(_OWORD *)&v82[16] = 0x21u;
      *(_QWORD *)&v82[32] = aSrcCoreCodexCo;
      *(_QWORD *)&v82[40] = 24;
      *(_QWORD *)&v82[72] = 0x2600000001LL;
      sub_1414D53A0(&v97, v82);
      v24 = v89;
    }
    v25 = v94;
    if ( v24 )
      sub_140001660(v95, v24, 1);
    if ( v25 )
      sub_140001660(v92, v25, 1);
    if ( v93 )
      sub_140001660(v96, v93, 1);
    v10 = v12;
  }
  if ( v22 )
  {
    v36 = v92;
    v37 = v22;
    goto LABEL_75;
  }
LABEL_76:
  if ( v93 )
    sub_140001660(v96, v93, 1);
  sub_140EC90E0(v82, v90, v91);
  v39 = *(_OWORD *)v82;
  v40 = *(_OWORD *)&v82[16];
  if ( *(_QWORD *)v82 != -1 )
  {
    v41 = *(_OWORD *)&v82[32];
    v42 = *(_OWORD *)&v82[48];
    v43 = *(_OWORD *)&v82[64];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v82[80];
    *(_OWORD *)(a1 + 72) = v43;
    *(_OWORD *)(a1 + 56) = v42;
    *(_OWORD *)(a1 + 40) = v41;
    *(_OWORD *)(a1 + 8) = v39;
    *(_OWORD *)(a1 + 24) = v40;
    goto LABEL_56;
  }
  v44 = *(_QWORD *)&v82[16] + 224LL * *(_QWORD *)&v82[24];
  v61.m128i_i64[0] = *(_QWORD *)&v82[16];
  v91 = *(_QWORD *)&v82[8];
  *(_QWORD *)&v62 = *(_QWORD *)&v82[8];
  v61.m128i_i64[1] = *(_QWORD *)&v82[16];
  *((_QWORD *)&v62 + 1) = v44;
  v45 = *(_QWORD **)&v82[16];
  v90 = *(_QWORD *)&v82[16];
  if ( *(_QWORD *)&v82[24] )
  {
    v46 = *(_QWORD *)&v82[16];
    do
    {
      sub_1418F44E0((__m128i *)v82, (const __m128i *)v46, 0xE0u);
      v45 = (_QWORD *)(v46 + 224);
      v61.m128i_i64[1] = v46 + 224;
      if ( *(_QWORD *)&v82[16] != a5 || (unsigned int)sub_1418F4B70(*(_QWORD *)&v82[8], v88) )
      {
        sub_14038AF80(v82);
      }
      else
      {
        v47 = *(_QWORD *)v82;
        if ( *(_QWORD *)v82 != -1 )
        {
          sub_1418F44E0((__m128i *)(a1 + 8), (const __m128i *)(v46 + 8), 0xD8u);
          *(_QWORD *)a1 = v47;
          goto LABEL_90;
        }
      }
      v46 += 224;
    }
    while ( v45 != (_QWORD *)v44 );
    v45 = (_QWORD *)v44;
  }
  *(_QWORD *)&v53 = -1;
  sub_140E95FF0((__int64 *)&v53);
  *(_QWORD *)&v53 = v68;
  *((_QWORD *)&v53 + 1) = sub_140186EE0;
  sub_1416ABFD0(&v82[8], &unk_141A5730D, &v53);
  *(_QWORD *)v82 = 8;
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v82[80];
  v48 = *(_OWORD *)&v82[16];
  v49 = *(_OWORD *)&v82[32];
  v50 = *(_OWORD *)&v82[48];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v82[64];
  *(_OWORD *)(a1 + 56) = v50;
  *(_OWORD *)(a1 + 40) = v49;
  *(_OWORD *)(a1 + 24) = v48;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v82;
  *(_QWORD *)a1 = -1;
LABEL_90:
  v88 = 0x6DB6DB6DB6DB6DB7LL * ((unsigned __int64)(v44 - (_QWORD)v45) >> 5);
  v96 = 0;
  v93 = (__int64)v45;
  v51 = v45;
  while ( v88 != v96 )
  {
    ++v96;
    v52 = v51 + 28;
    sub_14038AF80(v51);
    v51 = v52;
  }
  if ( v91 )
    sub_140001660(v90, 224 * v91, 8);
  return a1;
}
