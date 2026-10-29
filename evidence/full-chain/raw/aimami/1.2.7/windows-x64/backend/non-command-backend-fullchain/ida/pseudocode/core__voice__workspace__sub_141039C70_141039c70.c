// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x141039c70 | name sub_141039C70
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_141039C70(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // kr00_16
  char v6; // dl
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int32 v14; // edx
  __m128i v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  char *v18; // rbx
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rcx
  signed __int64 v31; // rbx
  __int64 v32; // r12
  bool v33; // zf
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 v38; // r15
  unsigned __int64 v39; // r15
  __int64 v40; // r14
  __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // r14
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // r14
  void *v48; // rax
  void *v49; // rax
  const __m128i *v50; // r12
  __m128i *v51; // rax
  __m128i *v52; // rbx
  __int64 v53; // rax
  char v54; // al
  _QWORD *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned __int64 v63; // r13
  __int64 v64; // r14
  __int64 v65; // r12
  __m128i *v66; // rax
  __int64 v67; // rcx
  unsigned __int64 v68; // r13
  __int64 v69; // r15
  __int64 v70; // rbx
  __m128i *v71; // rax
  __m128i *v72; // r14
  char v73; // al
  __int64 v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // r14
  __int64 v80; // rdx
  __int64 v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rax
  __int32 v84; // edx
  __int64 v85; // rax
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  __int64 *v89; // rdi
  __int64 v90; // rcx
  PVOID v91; // rcx
  char v92; // al
  __int64 v93; // rdx
  __m128i v94[10]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v95; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v96; // [rsp+D8h] [rbp+58h]
  __int128 v97; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v98; // [rsp+F8h] [rbp+78h]
  __int128 v99; // [rsp+108h] [rbp+88h]
  __m256i v100; // [rsp+118h] [rbp+98h]
  __int128 v101; // [rsp+138h] [rbp+B8h]
  __int128 v102; // [rsp+148h] [rbp+C8h]
  __int64 v103; // [rsp+158h] [rbp+D8h]
  _QWORD v104[2]; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v105[2]; // [rsp+170h] [rbp+F0h] BYREF
  _BYTE v106[136]; // [rsp+180h] [rbp+100h] BYREF
  __int64 v107; // [rsp+208h] [rbp+188h]
  const __m128i *v108; // [rsp+2A8h] [rbp+228h]
  __int64 *v109; // [rsp+2B0h] [rbp+230h]
  __m128i *v110; // [rsp+2B8h] [rbp+238h]
  __m128i v111; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v112; // [rsp+2D0h] [rbp+250h]
  __int128 v113; // [rsp+2E0h] [rbp+260h]
  __int128 v114; // [rsp+2F0h] [rbp+270h]
  __m256i v115; // [rsp+300h] [rbp+280h]
  __int128 v116; // [rsp+320h] [rbp+2A0h]
  _BYTE v117[24]; // [rsp+330h] [rbp+2B0h]
  unsigned __int64 v118; // [rsp+348h] [rbp+2C8h]
  __int64 v119; // [rsp+350h] [rbp+2D0h]
  char v120; // [rsp+358h] [rbp+2D8h]
  __int128 v121; // [rsp+368h] [rbp+2E8h] BYREF
  __int64 v122; // [rsp+378h] [rbp+2F8h]
  __int128 v123; // [rsp+380h] [rbp+300h] BYREF
  __int64 v124; // [rsp+390h] [rbp+310h]
  __int128 v125; // [rsp+398h] [rbp+318h] BYREF
  unsigned __int64 v126; // [rsp+3A8h] [rbp+328h]
  __int64 v127; // [rsp+3B0h] [rbp+330h]
  PVOID Address; // [rsp+3B8h] [rbp+338h]
  __int64 v129; // [rsp+3C0h] [rbp+340h]
  char v130; // [rsp+3CFh] [rbp+34Fh] BYREF
  const __m128i *v131; // [rsp+3D0h] [rbp+350h]
  __int64 v132; // [rsp+3D8h] [rbp+358h]
  __int64 v133; // [rsp+3E0h] [rbp+360h]
  __int64 v134; // [rsp+3E8h] [rbp+368h]
  char v135; // [rsp+3F5h] [rbp+375h]
  char v136; // [rsp+3F6h] [rbp+376h]
  char v137; // [rsp+3F7h] [rbp+377h]
  char v138; // [rsp+3F8h] [rbp+378h]
  char v139; // [rsp+3F9h] [rbp+379h]
  char v140; // [rsp+3FAh] [rbp+37Ah]
  char v141; // [rsp+3FBh] [rbp+37Bh]
  char v142; // [rsp+3FCh] [rbp+37Ch]
  char v143; // [rsp+3FDh] [rbp+37Dh]
  char v144; // [rsp+3FEh] [rbp+37Eh]
  char v145; // [rsp+3FFh] [rbp+37Fh]
  __int64 v146; // [rsp+400h] [rbp+380h]

  v146 = -2;
  v134 = a3;
  v144 = 1;
  v143 = 1;
  sub_14103FB60(v106);
  v5 = *(_OWORD *)v106;
  v6 = v106[16];
  if ( *(_QWORD *)v106 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v106[80];
    v7 = *(_OWORD *)&v106[17];
    v8 = *(_OWORD *)&v106[33];
    v9 = *(_OWORD *)&v106[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v106[65];
    *(_OWORD *)(a1 + 57) = v9;
    *(_OWORD *)(a1 + 41) = v8;
    *(_OWORD *)(a1 + 25) = v7;
    *(_OWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 24) = v6;
    *(_QWORD *)a1 = -1;
    v10 = 1;
    goto LABEL_57;
  }
  v138 = v106[16];
  Address = *(PVOID *)&v106[8];
  v140 = 1;
  v139 = 1;
  sub_14103B320(v106);
  v111 = *(__m128i *)&v106[8];
  v112 = *(_OWORD *)&v106[24];
  v113 = *(_OWORD *)&v106[40];
  v114 = *(_OWORD *)&v106[56];
  v115 = *(__m256i *)&v106[72];
  if ( *(_QWORD *)v106 == -1 )
  {
    *(__m256i *)(a1 + 72) = v115;
    v15 = v111;
    v16 = v112;
    v17 = v113;
    *(_OWORD *)(a1 + 56) = v114;
    *(_OWORD *)(a1 + 40) = v17;
    *(_OWORD *)(a1 + 24) = v16;
    *(__m128i *)(a1 + 8) = v15;
    *(_QWORD *)a1 = -1;
    v10 = 1;
    v18 = (char *)Address;
    if ( (v138 & 1) == 0 )
    {
LABEL_54:
      if ( 2 * *off_1421E7210 )
      {
        v144 = v10;
        v143 = v10;
        if ( !(unsigned __int8)sub_141938160(v12) )
          v18[1] = 1;
      }
    }
LABEL_55:
    v54 = *v18;
    *v18 = 0;
    if ( v54 == 2 )
    {
      v144 = v10;
      v143 = v10;
      WakeByAddressSingle(v18);
    }
LABEL_57:
    v55 = (_QWORD *)v134;
    v56 = *(_QWORD *)(v134 + 48);
    if ( v56 != -1 && v56 )
      sub_140001660(*(_QWORD *)(v134 + 56), v56, 1);
    if ( *v55 )
      sub_140001660(v55[1], *v55, 1);
    v57 = v55[3];
    if ( v57 )
      sub_140001660(v55[4], v57, 1);
    if ( v10 )
    {
      v58 = v55[9];
      if ( v58 != -1 && v58 )
        sub_140001660(v55[10], v58, 1);
      v59 = v55[12];
      if ( v59 != -1 )
      {
        if ( v59 )
        {
          v60 = v55[13];
LABEL_71:
          sub_140001660(v60, v59, 1);
          goto LABEL_72;
        }
      }
    }
    goto LABEL_72;
  }
  v103 = v107;
  v102 = *(_OWORD *)&v106[120];
  v101 = *(_OWORD *)&v106[104];
  v96 = v111;
  v97 = v112;
  v98 = v113;
  v99 = v114;
  v100 = v115;
  v95 = *(_QWORD *)v106;
  v142 = 1;
  v141 = 1;
  v111.m128i_i32[0] = sub_141683E80(v107, v11, v13);
  v111.m128i_i32[1] = v14;
  v142 = 1;
  v141 = 1;
  sub_141683E30(v106, &v111, 3577643008LL, 27111902);
  if ( v106[0] )
    v127 = 0;
  else
    v127 = *(_QWORD *)&v106[8];
  v19 = (_QWORD *)v134;
  v131 = (const __m128i *)sub_140E91160(*(_QWORD *)(v134 + 8), *(_QWORD *)(v134 + 16));
  v21 = v20;
  v108 = (const __m128i *)sub_140E91160(v19[4], v19[5]);
  v23 = v22;
  if ( v19[15] != -1 && (v24 = sub_140E91160(*(_QWORD *)(v134 + 128), *(_QWORD *)(v134 + 136))) != 0 && (v27 = v25) != 0 )
  {
    if ( v25 < 0 )
    {
      v28 = 0;
      goto LABEL_14;
    }
    v132 = v21;
    v133 = v23;
    v50 = (const __m128i *)v24;
    nullsub_1(v26);
    v28 = 1;
    v51 = (__m128i *)sub_140001650(v27, 1);
    if ( !v51 )
    {
LABEL_14:
      v142 = 1;
      v141 = 1;
      sub_141938D2B(v28, v27);
    }
    v52 = v51;
    sub_1418F44E0(v51, v50, v27);
    *(_QWORD *)&v125 = v27;
    *((_QWORD *)&v125 + 1) = v52;
    v126 = v27;
    v23 = v133;
    v21 = v132;
  }
  else
  {
    *(_QWORD *)&v125 = -1;
  }
  v29 = v134;
  v137 = 1;
  v136 = 1;
  sub_141039B30((unsigned __int64 *)&v121, (__int64 *)(v134 + 72));
  v135 = 1;
  sub_141039B30((unsigned __int64 *)&v123, (__int64 *)(v29 + 96));
  if ( !v21 )
  {
    nullsub_1(v30);
    v48 = (void *)sub_140001650(33, 1);
    if ( !v48 )
    {
      v145 = 1;
      sub_141938D2B(1, 33);
    }
    qmemcpy(v48, "Vocabulary source cannot be empty", 33);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 33;
    *(_QWORD *)(a1 + 24) = v48;
    *(_QWORD *)(a1 + 32) = 33;
    goto LABEL_44;
  }
  if ( !v23 )
  {
    nullsub_1(v30);
    v49 = (void *)sub_140001650(38, 1);
    if ( !v49 )
    {
      v145 = 1;
      sub_141938D2B(1, 38);
    }
    qmemcpy(v49, "Vocabulary replacement cannot be empty", 38);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 38;
    *(_QWORD *)(a1 + 24) = v49;
    *(_QWORD *)(a1 + 32) = 38;
    goto LABEL_44;
  }
  v132 = v21;
  v31 = v23;
  v32 = v134 + 48;
  v33 = *(_QWORD *)(v134 + 48) == -1;
  v109 = (__int64 *)(v134 + 48);
  if ( v33 || (v34 = *(_QWORD *)(v134 + 56), v35 = *(_QWORD *)(v134 + 64), sub_140E91160(v34, v35), !v36) )
  {
    v145 = 1;
    sub_141568C20(v105);
    v111.m128i_i64[0] = 0;
    v111.m128i_i64[1] = 1;
    *(_QWORD *)&v112 = 0;
    *(_QWORD *)&v106[16] = 1610612768;
    *(_QWORD *)v106 = &v111;
    *(_QWORD *)&v106[8] = &off_141A72708;
    if ( (unsigned __int8)sub_141569D80(v105, v106) )
      sub_141939040(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v130,
        (unsigned int)&unk_141A6D618,
        (__int64)&off_141A727C0);
    v129 = v111.m128i_i64[1];
    v133 = v111.m128i_i64[0];
    if ( (unsigned __int64)v112 <= 8 )
    {
      if ( (_QWORD)v112 != 8 )
LABEL_38:
        sub_141938F40(v111.m128i_i32[2], v112, 0, 8, (__int64)&off_141A71950);
    }
    else if ( *(char *)(v111.m128i_i64[1] + 8) <= -65 )
    {
      goto LABEL_38;
    }
    v104[0] = v111.m128i_i64[1];
    v104[1] = 8;
    v111.m128i_i64[0] = (__int64)v104;
    v111.m128i_i64[1] = (__int64)sub_140186EE0;
    sub_1416ABFD0(v106, &unk_141A71968, &v111);
    if ( v133 )
      sub_140001660(v129, v133, 1);
    v63 = v132;
    v129 = *(_QWORD *)&v106[8];
    v133 = *(_QWORD *)v106;
    if ( v132 >= 0 )
    {
      v65 = *(_QWORD *)&v106[16];
      nullsub_1(*(_QWORD *)&v106[8]);
      v64 = 1;
      v66 = (__m128i *)sub_140001650(v63, 1);
      if ( v66 )
      {
        v110 = v66;
        sub_1418F44E0(v66, v131, v63);
        v68 = v31;
        if ( v31 >= 0 )
        {
          v70 = v127;
          nullsub_1(v67);
          v69 = 1;
          v71 = (__m128i *)sub_140001650(v68, 1);
          if ( v71 )
          {
            v72 = v71;
            sub_1418F44E0(v71, v108, v68);
            v73 = *(_BYTE *)(v134 + 144);
            *(_OWORD *)&v115.m256i_u64[1] = v121;
            v115.m256i_i64[3] = v122;
            *(_QWORD *)v117 = v124;
            v116 = v123;
            v118 = v126;
            *(_OWORD *)&v117[8] = v125;
            v111.m128i_i64[0] = v133;
            v111.m128i_i64[1] = v129;
            *(_QWORD *)&v112 = v65;
            *((_QWORD *)&v112 + 1) = v132;
            *(_QWORD *)&v113 = v110;
            *((_QWORD *)&v113 + 1) = v132;
            *(_QWORD *)&v114 = v68;
            *((_QWORD *)&v114 + 1) = v72;
            v115.m256i_i64[0] = v68;
            v120 = v73;
            v119 = v70;
            sub_14104A340(v106, &v111);
            v74 = v98;
            if ( (_QWORD)v98 == (_QWORD)v97 )
              sub_14190FCE0(&v97);
            sub_1418F44E0((__m128i *)(*((_QWORD *)&v97 + 1) + 160 * v74), (const __m128i *)v106, 0xA0u);
            *(_QWORD *)&v98 = v74 + 1;
            sub_1418F44E0(v94, &v111, 0xA0u);
            LODWORD(v131) = 0;
            goto LABEL_107;
          }
        }
        else
        {
          v69 = 0;
        }
        sub_141938D2B(v69, v68);
      }
    }
    else
    {
      v64 = 0;
    }
    sub_141938D2B(v64, v63);
  }
  v105[0] = v32;
  if ( !(_QWORD)v98 )
  {
LABEL_43:
    v111.m128i_i64[0] = (__int64)v105;
    v111.m128i_i64[1] = (__int64)sub_140369D80;
    v145 = 1;
    sub_1416ABFD0(&v106[8], &unk_141A6D29E, &v111);
    *(_QWORD *)v106 = 8;
    v53 = *(_QWORD *)&v106[8];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v106[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v106[64];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v106[48];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v106[32];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v106[16];
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 16) = v53;
LABEL_44:
    *(_QWORD *)a1 = -1;
LABEL_45:
    if ( (unsigned __int64)(v123 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
      sub_140001660(*((_QWORD *)&v123 + 1), v123, 1);
    if ( (_QWORD)v121 != -1 && (_QWORD)v121 )
      sub_140001660(*((_QWORD *)&v121 + 1), v121, 1);
    if ( (_QWORD)v125 != -1 && (_QWORD)v125 )
      sub_140001660(*((_QWORD *)&v125 + 1), v125, 1);
LABEL_53:
    v140 = 0;
    v139 = 0;
    sub_140FA5420((__int64)&v95);
    v10 = 0;
    v18 = (char *)Address;
    if ( (v138 & 1) == 0 )
      goto LABEL_54;
    goto LABEL_55;
  }
  v37 = *((_QWORD *)&v97 + 1);
  v38 = 160 * v98;
  while ( *(_QWORD *)(v37 + 16) != v35 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v37 + 8), v34) )
  {
    v37 += 160;
    v38 -= 160;
    if ( !v38 )
      goto LABEL_43;
  }
  v39 = v132;
  sub_14072C410((unsigned int)v106, v132, 0, 1, 1);
  v40 = *(_QWORD *)&v106[8];
  if ( v106[0] )
  {
    v145 = 1;
    sub_141938D2B(*(_QWORD *)&v106[8], *(_QWORD *)&v106[16]);
  }
  v41 = *(_QWORD *)&v106[16];
  sub_1418F44E0(*(__m128i **)&v106[16], v131, v39);
  v42 = *(_QWORD *)(v37 + 24);
  if ( v42 )
    sub_140001660(*(_QWORD *)(v37 + 32), v42, 1);
  *(_QWORD *)(v37 + 24) = v40;
  *(_QWORD *)(v37 + 32) = v41;
  *(_QWORD *)(v37 + 40) = v132;
  sub_14072C410((unsigned int)v106, v31, 0, 1, 1);
  v43 = *(_QWORD *)&v106[8];
  if ( *(_DWORD *)v106 == 1 )
  {
    v145 = 1;
    sub_141938D2B(*(_QWORD *)&v106[8], *(_QWORD *)&v106[16]);
  }
  v44 = *(_QWORD *)&v106[16];
  sub_1418F44E0(*(__m128i **)&v106[16], v108, v31);
  v45 = *(_QWORD *)(v37 + 48);
  if ( v45 )
    sub_140001660(*(_QWORD *)(v37 + 56), v45, 1);
  *(_QWORD *)(v37 + 48) = v43;
  *(_QWORD *)(v37 + 56) = v44;
  *(_QWORD *)(v37 + 64) = v31;
  *(_BYTE *)(v37 + 152) = *(_BYTE *)(v134 + 144);
  if ( (_QWORD)v121 == -1 )
  {
    v47 = -1;
    v46 = v127;
  }
  else
  {
    v145 = 1;
    sub_1416AC440(v106, &v121);
    v46 = v127;
    v47 = *(_QWORD *)v106;
    v111 = *(__m128i *)&v106[8];
  }
  v78 = *(_QWORD *)(v37 + 72);
  if ( v78 != -1 && v78 )
    sub_140001660(*(_QWORD *)(v37 + 80), v78, 1);
  *(_QWORD *)(v37 + 72) = v47;
  *(__m128i *)(v37 + 80) = v111;
  if ( (_QWORD)v123 == -1 )
  {
    v79 = -1;
  }
  else
  {
    v145 = 1;
    sub_1416AC440(v106, &v123);
    v79 = *(_QWORD *)v106;
    v111 = *(__m128i *)&v106[8];
  }
  v80 = *(_QWORD *)(v37 + 96);
  if ( v80 != -1 && v80 )
    sub_140001660(*(_QWORD *)(v37 + 104), v80, 1);
  *(_QWORD *)(v37 + 96) = v79;
  *(__m128i *)(v37 + 104) = v111;
  if ( (_QWORD)v125 == -1 )
  {
    v81 = -1;
  }
  else
  {
    v145 = 1;
    sub_1416AC440(v106, &v125);
    v81 = *(_QWORD *)v106;
    v111 = *(__m128i *)&v106[8];
  }
  v82 = *(_QWORD *)(v37 + 120);
  if ( v82 != -1 && v82 )
    sub_140001660(*(_QWORD *)(v37 + 128), v82, 1);
  *(_QWORD *)(v37 + 120) = v81;
  *(__m128i *)(v37 + 128) = v111;
  *(_QWORD *)(v37 + 144) = v46;
  v145 = 1;
  v83 = sub_14104A340(v94, v37);
  LOBYTE(v83) = 1;
  LODWORD(v131) = v83;
LABEL_107:
  LODWORD(v103) = 1;
  v111.m128i_i32[0] = sub_141683E80(v76, v75, v77);
  v111.m128i_i32[1] = v84;
  sub_141683E30(v106, &v111, 3577643008LL, 27111902);
  if ( v106[0] )
    v85 = 0;
  else
    v85 = *(_QWORD *)&v106[8];
  *((_QWORD *)&v102 + 1) = v85;
  sub_14102FC50(&v95);
  sub_14103CBF0(v106, a2, &v95);
  if ( *(_DWORD *)v106 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v106[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v106[64];
    v86 = *(_OWORD *)v106;
    v87 = *(_OWORD *)&v106[16];
    v88 = *(_OWORD *)&v106[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v106[48];
    *(_OWORD *)(a1 + 40) = v88;
    *(_OWORD *)(a1 + 24) = v87;
    *(_OWORD *)(a1 + 8) = v86;
    *(_QWORD *)a1 = -1;
    sub_14038B370(v94);
    if ( !(_BYTE)v131 )
      goto LABEL_53;
    goto LABEL_45;
  }
  sub_14102FA30(&v111, *(_QWORD *)(a2 + 712), *(_QWORD *)(a2 + 720), &v95);
  sub_1418F44E0((__m128i *)&v106[128], v94, 0xA0u);
  *(__m128i *)v106 = v111;
  *(_OWORD *)&v106[16] = v112;
  *(_OWORD *)&v106[32] = v113;
  *(_OWORD *)&v106[48] = v114;
  *(__m256i *)&v106[64] = v115;
  *(_OWORD *)&v106[96] = v116;
  *(_OWORD *)&v106[112] = *(_OWORD *)v117;
  sub_1418F44E0((__m128i *)a1, (const __m128i *)v106, 0x120u);
  if ( (_BYTE)v131 )
  {
    if ( (_QWORD)v123 != -1 && (_QWORD)v123 )
      sub_140001660(*((_QWORD *)&v123 + 1), v123, 1);
    v89 = v109;
    if ( (_QWORD)v121 != -1 && (_QWORD)v121 )
      sub_140001660(*((_QWORD *)&v121 + 1), v121, 1);
    if ( (_QWORD)v125 != -1 && (_QWORD)v125 )
      sub_140001660(*((_QWORD *)&v125 + 1), v125, 1);
  }
  else
  {
    v89 = v109;
  }
  v140 = 0;
  v139 = 0;
  sub_140FA5420((__int64)&v95);
  if ( (v138 & 1) == 0 )
  {
    if ( 2 * *off_1421E7210 )
    {
      v144 = 0;
      v143 = 0;
      if ( !(unsigned __int8)sub_141938160(v90) )
        *((_BYTE *)Address + 1) = 1;
    }
  }
  v91 = Address;
  v92 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v92 == 2 )
  {
    v144 = 0;
    v143 = 0;
    WakeByAddressSingle(v91);
  }
  v93 = *v89;
  v55 = (_QWORD *)v134;
  if ( *v89 != -1 && v93 )
    sub_140001660(*(_QWORD *)(v134 + 56), v93, 1);
  if ( *v55 )
    sub_140001660(v55[1], *v55, 1);
  v59 = v55[3];
  if ( v59 )
  {
    v60 = v55[4];
    goto LABEL_71;
  }
LABEL_72:
  v61 = v55[15];
  if ( v61 != -1 && v61 )
    sub_140001660(v55[16], v61, 1);
  return a1;
}
