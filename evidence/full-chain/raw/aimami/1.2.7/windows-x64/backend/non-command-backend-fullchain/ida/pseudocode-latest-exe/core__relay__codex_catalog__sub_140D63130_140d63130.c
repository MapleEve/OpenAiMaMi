// win 1.2.7 latest-exe | module src/core/relay/codex_catalog.rs | ea 0x140d63130 | successor of pre-update 0x14101dee0 | session <审计会话>
// match evidence: {"body_sim": 0.312, "str_ov": 0.0, "anchor": 4.836, "conf": false, "verdict": "CONFIRMED_FINAL"}
__int64 __fastcall sub_140D63130(__int64 a1)
{
  HANDLE *v1; // r12
  __m128i v2; // xmm6
  __m128i v3; // xmm7
  __m128 v4; // xmm8
  __int64 v6; // r8
  __int64 v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int32 v10; // r13d
  __int64 *v11; // rbx
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v19; // r14
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int8 v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned int v40; // eax
  char v41; // al
  char *v42; // rdi
  __m128i v43; // xmm1
  int v44; // eax
  int v45; // edx
  unsigned __int64 v46; // rdi
  unsigned int v47; // edx
  unsigned int v48; // r14d
  unsigned __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rax
  void *v54; // r14
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rdi
  int v60; // r9d
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r14
  __int64 v64; // rdx
  __int64 *v65; // r14
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 *v68; // rcx
  char v69; // al
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 *v74; // rcx
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __m128i v82; // xmm0
  int v83; // eax
  char v84; // al
  _DWORD v85[4]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v86[24]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v87; // [rsp+58h] [rbp-28h]
  __int64 v88; // [rsp+100h] [rbp+80h]
  _DWORD v89[2]; // [rsp+108h] [rbp+88h] BYREF
  __int64 v90; // [rsp+110h] [rbp+90h]
  __int64 v91; // [rsp+118h] [rbp+98h] BYREF
  __int64 *v92; // [rsp+120h] [rbp+A0h]
  unsigned __int64 v93; // [rsp+128h] [rbp+A8h]
  __int64 *v94; // [rsp+130h] [rbp+B0h] BYREF
  _QWORD v95[2]; // [rsp+138h] [rbp+B8h] BYREF
  __m128i v96; // [rsp+148h] [rbp+C8h] BYREF
  __m128i v97; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v98; // [rsp+168h] [rbp+E8h]
  unsigned __int64 v99; // [rsp+170h] [rbp+F0h]
  int v100; // [rsp+17Ch] [rbp+FCh]
  __int64 v101; // [rsp+180h] [rbp+100h]
  __int64 v102; // [rsp+188h] [rbp+108h]
  __int64 v103; // [rsp+190h] [rbp+110h] BYREF
  __int64 v104; // [rsp+198h] [rbp+118h] BYREF
  __int64 v105; // [rsp+1A0h] [rbp+120h]
  __int32 v106; // [rsp+1A8h] [rbp+128h]
  __int64 v107; // [rsp+1B0h] [rbp+130h]
  __int32 v108; // [rsp+1B8h] [rbp+138h]
  __m128i v109; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v110; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v111; // [rsp+1E0h] [rbp+160h] BYREF
  __m128i v112; // [rsp+1F0h] [rbp+170h] BYREF
  HANDLE *v113; // [rsp+200h] [rbp+180h]
  __int64 v114; // [rsp+208h] [rbp+188h]
  __int32 v115; // [rsp+210h] [rbp+190h]
  unsigned __int64 v116; // [rsp+214h] [rbp+194h]
  int v117; // [rsp+21Ch] [rbp+19Ch]
  int v118; // [rsp+26Ch] [rbp+1ECh]
  HANDLE v119[2]; // [rsp+280h] [rbp+200h] BYREF
  _BYTE v120[48]; // [rsp+290h] [rbp+210h] BYREF
  __int64 v121; // [rsp+2C0h] [rbp+240h]
  __int64 v122; // [rsp+2C8h] [rbp+248h]
  __int64 v123; // [rsp+2D0h] [rbp+250h]
  __int64 v124; // [rsp+2D8h] [rbp+258h]
  __int64 v125; // [rsp+2E0h] [rbp+260h]
  char v126; // [rsp+2EFh] [rbp+26Fh]
  __int64 v127; // [rsp+2F0h] [rbp+270h]
  __int64 v128; // [rsp+2F8h] [rbp+278h]
  char v129; // [rsp+304h] [rbp+284h]
  char v130; // [rsp+305h] [rbp+285h]
  char v131; // [rsp+306h] [rbp+286h]
  char v132; // [rsp+307h] [rbp+287h]
  __int64 v133; // [rsp+308h] [rbp+288h]

  v133 = -2;
  sub_140980400(&v109);
  v6 = v109.m128i_i64[1];
  v7 = v109.m128i_i64[0];
  v9 = v110.m128i_u64[1];
  v8 = v110.m128i_i64[0];
  v10 = v111.m128i_i32[0];
  if ( v109.m128i_i64[0] != -1 )
  {
    v2 = _mm_loadu_si128(&v112);
    v1 = v113;
    v107 = v114;
    v108 = v115;
    v4 = (__m128)v116;
    LODWORD(v11) = v117;
    v12 = HIDWORD(v110.m128i_i64[1]);
    v3 = _mm_unpacklo_epi64(
           _mm_unpacklo_epi32(_mm_cvtsi32_si128(v111.m128i_u32[0]), _mm_cvtsi32_si128(v111.m128i_u32[1])),
           _mm_loadu_si128((const __m128i *)&v111.m128i_u64[1]));
LABEL_11:
    *(_DWORD *)(a1 + 80) = v108;
    *(_QWORD *)(a1 + 72) = v107;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 24) = (v12 << 32) | (unsigned int)v9;
    *(__m128i *)(a1 + 32) = v3;
    *(__m128i *)(a1 + 48) = v2;
    *(_QWORD *)(a1 + 64) = v1;
    _mm_storel_ps((double *)(a1 + 84), v4);
    *(_DWORD *)(a1 + 92) = (_DWORD)v11;
    return a1;
  }
  v123 = v109.m128i_i64[1];
  v102 = v110.m128i_i64[0];
  sub_1416C49D0(&v109, v110.m128i_i64[0], v110.m128i_i64[1]);
  if ( v109.m128i_i32[0] == 2 )
  {
    v16 = v109.m128i_i64[1];
    v119[0] = (HANDLE)v109.m128i_i64[1];
    sub_140D58530(&v109, aMetadata_1, 8, v109.m128i_i64[1]);
    if ( (unsigned int)(v16 & 3) - 2 >= 2 && (v16 & 3) != 0 )
    {
      *(_QWORD *)&v86[8] = v16 - 1;
      v86[0] = 3;
      sub_1416EBAD0(&v86[8]);
    }
    v127 = v109.m128i_i64[1];
    v7 = v109.m128i_i64[0];
    v125 = v110.m128i_i64[0];
    LODWORD(v9) = v110.m128i_i32[2];
    v12 = v110.m128i_u32[3];
    v3 = _mm_loadu_si128(&v111);
    v2 = _mm_loadu_si128(&v112);
    v1 = v113;
    v107 = v114;
    v108 = v115;
    v4 = (__m128)v116;
    LODWORD(v11) = v117;
    v17 = v123;
    if ( v123 )
      goto LABEL_8;
    goto LABEL_9;
  }
  v98 = v112.m128i_i64[1];
  v19 = v112.m128i_i64[0];
  v124 = v9;
  if ( !v9 )
  {
    v122 = 1;
    if ( !dword_142239450 )
      goto LABEL_25;
    goto LABEL_50;
  }
  nullsub_1(v14, v13);
  v20 = sub_140001650(v9, 1);
  if ( !v20 )
    sub_14196B2DB(1, v9);
  v122 = v20;
  sub_1419234B0(v20, v102, v9);
  if ( dword_142239450 )
  {
LABEL_50:
    v126 = 1;
    sub_1419413ED();
  }
LABEL_25:
  LOBYTE(v14) = 1;
  if ( _InterlockedCompareExchange8(&byte_1422393F0, 1, 0) )
  {
    v132 = 1;
    sub_141969A30(&byte_1422393F0);
  }
  v11 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v132 = 1;
    v40 = sub_14196A710(v14, v13, v15);
    v27 = v40;
    LOBYTE(v27) = v40 ^ 1;
    if ( (_DWORD)qword_1422393F8 == 2 )
      goto LABEL_52;
  }
  else
  {
    v27 = 0;
    if ( (_DWORD)qword_1422393F8 == 2 )
      goto LABEL_52;
  }
  LODWORD(v128) = v27;
  v28 = sub_140222930(qword_142239410, qword_142239418, v122, v124);
  v27 = (unsigned int)v128;
  if ( ((unsigned __int8)dword_142239428 & v28) != 1
    || qword_14223942C != v19
    || !(_BYTE)qword_1422393F8
    || qword_142239400 != v98
    || (_QWORD)xmmword_142239438 == -1 )
  {
LABEL_52:
    if ( !(_BYTE)v27 )
    {
      if ( 2 * *v11 )
      {
        v132 = 1;
        if ( !(unsigned __int8)sub_14196A710(v27, v13, v15) )
          byte_1422393F1 = 1;
      }
    }
    v41 = byte_1422393F0;
    byte_1422393F0 = 0;
    if ( v41 == 2 )
    {
      v132 = 1;
      WakeByAddressSingle(&byte_1422393F0);
    }
    v132 = 1;
    sub_1416B94E0(&v109, v102, v124);
    *(_DWORD *)v86 = 2;
    sub_1416B9570(&v109, v86);
    v118 = 0x8000000;
    sub_1419234B0(v86, &v109, 184);
    sub_1416B93C0(v86, aVersion_8, 9);
    v85[0] = 3;
    sub_1416B95F0(v86, v85);
    sub_1416B95B0(v86, v85);
    sub_1416BCAE0(v119, v86);
    v42 = (char *)v119[1];
    if ( v119[0] == HANDLE_FLAG_PROTECT_FROM_CLOSE )
    {
      v103 = (__int64)v119[1];
      sub_140D58530(&v109, aSpawn_0, 5, v119[1]);
      if ( ((unsigned __int8)v42 & 3u) - 2 >= 2 && ((unsigned __int8)v42 & 3) != 0 )
      {
        v95[0] = v42 - 1;
        LOBYTE(v94) = 3;
        sub_1416EBAD0(v95);
      }
      v128 = v109.m128i_i64[1];
      v7 = v109.m128i_i64[0];
      v9 = v110.m128i_u64[1];
      v125 = v110.m128i_i64[0];
      v3 = _mm_loadu_si128(&v111);
      v2 = _mm_loadu_si128(&v112);
      v1 = v113;
      v105 = v114;
      v106 = v115;
      v4 = (__m128)v116;
      LODWORD(v11) = v117;
    }
    else
    {
      v127 = v19;
      v43 = _mm_loadu_si128((const __m128i *)&v120[24]);
      *(__m128i *)&v120[8] = _mm_loadu_si128((const __m128i *)&v120[8]);
      *(__m128i *)&v120[24] = v43;
      v131 = 1;
      v44 = sub_1416AEBD0();
      v131 = 1;
      v46 = sub_1416D0210(v44, v45, 1, 500000000, (__int64)&off_141A980C8);
      v48 = v47;
      v1 = v119;
      while ( 1 )
      {
        v131 = 1;
        sub_1416BA3E0(v89, v119);
        if ( v89[0] == 1 )
        {
          v52 = v90;
          v103 = v90;
          v53 = sub_1416BA2D0(v119);
          if ( v53 && (unsigned int)(v53 & 3) - 2 >= 2 && (v53 & 3) != 0 )
          {
            v109.m128i_i64[1] = v53 - 1;
            v109.m128i_i8[0] = 3;
            sub_1416EBAD0(&v109.m128i_u64[1]);
          }
          sub_1416BA380(&v94, v119);
          if ( (_DWORD)v94 && (v95[0] & 3) - 2 >= 2 && (v95[0] & 3) != 0 )
          {
            v109.m128i_i64[1] = v95[0] - 1LL;
            v109.m128i_i8[0] = 3;
            sub_1416EBAD0(&v109.m128i_u64[1]);
          }
          sub_140D58530(&v109, "wait", 4, v52);
          v128 = v109.m128i_i64[1];
          v7 = v109.m128i_i64[0];
          v9 = v110.m128i_u64[1];
          v125 = v110.m128i_i64[0];
          v3 = _mm_loadu_si128(&v111);
          v2 = _mm_loadu_si128(&v112);
          v1 = v113;
          v105 = v114;
          v106 = v115;
          v4 = (__m128)v116;
          LODWORD(v11) = v117;
          if ( (unsigned int)(v52 & 3) - 2 >= 2 && (v52 & 3) != 0 )
          {
            v109.m128i_i64[1] = v52 - 1;
            v109.m128i_i8[0] = 3;
            v131 = 1;
            sub_1416EBAD0(&v109.m128i_u64[1]);
          }
          LODWORD(v121) = v10;
          goto LABEL_89;
        }
        if ( v89[1] == 1 )
          break;
        v131 = 1;
        v49 = sub_1416AEBD0();
        if ( v49 == v46 )
        {
          if ( v50 >= v48 )
            goto LABEL_68;
        }
        else if ( v49 >= v46 )
        {
LABEL_68:
          v131 = 1;
          v51 = sub_1416BA2D0(v119);
          if ( v51 && (unsigned int)(v51 & 3) - 2 >= 2 && (v51 & 3) != 0 )
          {
            v109.m128i_i64[1] = v51 - 1;
            v109.m128i_i8[0] = 3;
            v131 = 1;
            sub_1416EBAD0(&v109.m128i_u64[1]);
          }
          v131 = 1;
          sub_1416BA380(&v94, v119);
          if ( (_DWORD)v94 && (v95[0] & 3) - 2 >= 2 && (v95[0] & 3) != 0 )
          {
            v109.m128i_i64[1] = v95[0] - 1LL;
            v109.m128i_i8[0] = 3;
            v131 = 1;
            sub_1416EBAD0(&v109.m128i_u64[1]);
          }
          v104 = 0;
          v103 = 1500;
          v94 = &v103;
          v95[0] = sub_1416E85A0;
          v131 = 1;
          sub_1416DAFA0(&v109, &unk_141A980E0, &v94);
          LODWORD(v121) = v10;
          v125 = v109.m128i_i64[1];
          v128 = v109.m128i_i64[0];
          v7 = 10;
          v9 = v110.m128i_i64[0];
LABEL_89:
          v54 = *(void **)&v120[40];
          CloseHandle(*(HANDLE *)&v120[32]);
          CloseHandle(v54);
          if ( v119[0] )
            CloseHandle(v119[1]);
          LOBYTE(v10) = v121;
          v19 = v127;
          if ( *(_QWORD *)v120 )
            CloseHandle(*(HANDLE *)&v120[8]);
          if ( *(_QWORD *)&v120[16] )
            CloseHandle(*(HANDLE *)&v120[24]);
          goto LABEL_102;
        }
        v131 = 1;
        sub_1416C57D0(0, 25000000);
      }
      v55 = _mm_loadu_si128((const __m128i *)v119);
      v56 = _mm_loadu_si128((const __m128i *)v120);
      v112 = *(__m128i *)&v120[32];
      v111 = *(__m128i *)&v120[16];
      v110 = v56;
      v109 = v55;
      v131 = 0;
      sub_1416B9F00(&v94, &v109);
      v57 = v95[0];
      if ( v94 == (__int64 *)-1LL )
      {
        v88 = v95[0];
        sub_140D58530(&v109, aReadOutput, 11, v95[0]);
        v58 = v57;
        v59 = v57 & 3;
        if ( (unsigned int)(v59 - 2) >= 2 && v59 )
        {
          v104 = v58 - 1;
          LOBYTE(v103) = 3;
          v131 = 0;
          sub_1416EBAD0(&v104);
        }
        v128 = v109.m128i_i64[1];
        v7 = v109.m128i_i64[0];
        v9 = v110.m128i_u64[1];
        v125 = v110.m128i_i64[0];
        v3 = _mm_loadu_si128(&v111);
        v2 = _mm_loadu_si128(&v112);
        v1 = v113;
        v105 = v114;
        v106 = v115;
        v4 = (__m128)v116;
        LODWORD(v11) = v117;
      }
      else
      {
        v128 = (__int64)v94;
        v125 = v95[0];
        v9 = v95[1];
        v3 = _mm_loadu_si128(&v96);
        v7 = -1;
        v2 = _mm_loadu_si128(&v97);
      }
      v19 = v127;
    }
LABEL_102:
    v132 = 1;
    sub_1400358E0(v86);
    if ( v7 != -1 )
    {
      v109.m128i_i32[2] = v106;
      v109.m128i_i64[0] = v105;
      v127 = v128;
      goto LABEL_126;
    }
    v121 = v3.m128i_i64[0];
    v99 = _mm_shuffle_epi32(v3, 238).m128i_u64[0];
    v60 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v2, 238));
    v100 = v60;
    if ( v60 )
    {
      v1 = (HANDLE *)v19;
      HIDWORD(v119[0]) = v60;
      LODWORD(v119[0]) = 1;
      *(_QWORD *)v86 = v119;
      *(_QWORD *)&v86[8] = sub_140D82460;
      sub_1416DAFA0(&v109, &unk_141A98764, v86);
      v9 = v110.m128i_i64[0];
      v63 = v109.m128i_i64[1];
      v127 = v109.m128i_i64[0];
      v7 = 10;
      if ( v128 )
        sub_140001660(v125, v128, 1);
      LODWORD(v11) = 0;
      v64 = v121;
      if ( !v121 )
        goto LABEL_109;
LABEL_108:
      sub_140001660(v99, v64, 1);
LABEL_109:
      if ( (_BYTE)v11 )
      {
        v91 = v127;
        v92 = (__int64 *)v63;
        v93 = v9;
        LOBYTE(v61) = 1;
        if ( _InterlockedCompareExchange8(&byte_1422393F0, 1, 0) )
        {
          v130 = 1;
          v129 = 1;
          sub_141969A30(&byte_1422393F0);
        }
        v65 = off_142240260;
        if ( 2 * *off_142240260 )
        {
          v130 = 1;
          v129 = 1;
          v83 = sub_14196A710(v61, v64, v62);
          LOBYTE(v83) = v83 ^ 1;
          LODWORD(v128) = v83;
          v65 = off_142240260;
        }
        else
        {
          LODWORD(v128) = 0;
        }
        sub_1416DB410(&v109, &v91);
        *(_QWORD *)&v86[16] = v110.m128i_i64[0];
        *(__m128i *)v86 = v109;
        if ( (_DWORD)qword_1422393F8 != 2 && qword_142239408 )
          sub_140001660(qword_142239410, qword_142239408, 1);
        v67 = xmmword_142239438;
        v11 = (__int64 *)v122;
        if ( (_QWORD)xmmword_142239438 != -1 && (_QWORD)xmmword_142239438 )
          sub_140001660(*((_QWORD *)&xmmword_142239438 + 1), xmmword_142239438, 1);
        qword_1422393F8 = 1;
        qword_142239400 = v98;
        qword_142239408 = v124;
        qword_142239410 = (__int64)v11;
        qword_142239418 = v124;
        byte_142239420 = v10;
        dword_142239428 = 1;
        qword_14223942C = (__int64)v1;
        xmmword_142239438 = (__int128)_mm_load_si128((const __m128i *)v86);
        qword_142239448 = *(_QWORD *)&v86[16];
        v68 = v92;
        if ( !(_BYTE)v128 )
        {
          if ( 2 * *v65 )
          {
            v11 = v92;
            v130 = 0;
            v129 = 0;
            v84 = sub_14196A710(v92, v67, v66);
            v68 = v11;
            if ( !v84 )
              byte_1422393F1 = 1;
          }
        }
        v125 = (__int64)v68;
        v69 = byte_1422393F0;
        byte_1422393F0 = 0;
        if ( v69 == 2 )
        {
          v130 = 0;
          v129 = 0;
          WakeByAddressSingle(&byte_1422393F0);
        }
        v7 = -1;
        v17 = v123;
        goto LABEL_128;
      }
      v125 = v63;
LABEL_126:
      v17 = v123;
      v108 = v109.m128i_i32[2];
      v107 = v109.m128i_i64[0];
      v33 = v124;
      if ( !v124 )
        goto LABEL_128;
      goto LABEL_127;
    }
    sub_1416E2AB0(&v109, v125, v9);
    if ( v109.m128i_i8[0] )
    {
      v11 = (__int64 *)v125;
      if ( v128 != -1 )
      {
        v1 = (HANDLE *)v19;
        nullsub_1(v71, v70);
        v9 = 215;
        v72 = sub_140001650(215, 1);
        if ( !v72 )
          sub_14196B2DB(1, 215);
        v63 = v72;
        sub_1419234B0(v72, aCodexEngineVer, 215);
        v7 = 10;
        v73 = v128;
        if ( v128 )
        {
          v74 = v11;
LABEL_142:
          sub_140001660(v74, v73, 1);
          goto LABEL_143;
        }
        goto LABEL_143;
      }
      v75 = v9;
      v9 = v109.m128i_u64[1];
    }
    else
    {
      v11 = (__int64 *)v128;
      v75 = v125;
    }
    v101 = v75;
    v76 = sub_1408FEA60(v75, v9);
    if ( v77 >= 0xA )
    {
      v78 = *(_QWORD *)v76 ^ 0x6C632D7865646F63LL;
      if ( !(v78 | *(unsigned __int16 *)(v76 + 8) ^ 0x2069LL) )
      {
        v127 = (__int64)v11;
        v80 = sub_1408FEA60(v76 + 10, v77 - 10);
        sub_1416A5BF0(&v109, v80, v81);
        if ( v109.m128i_i64[0] )
        {
          v82 = _mm_loadu_si128((const __m128i *)&v109.m128i_u64[1]);
          v87 = _mm_loadu_si128((const __m128i *)&v110.m128i_u64[1]);
          *(_QWORD *)v86 = v109.m128i_i64[0];
          *(__m128i *)&v86[8] = v82;
          sub_1416A7680(v86);
          sub_1416A7680(&v86[8]);
          v1 = (HANDLE *)v19;
          v7 = -1;
          LOBYTE(v11) = 1;
          v63 = v101;
          v64 = v121;
          if ( !v121 )
            goto LABEL_109;
          goto LABEL_108;
        }
        v11 = (__int64 *)v127;
      }
    }
    v1 = (HANDLE *)v19;
    nullsub_1(v78, v77);
    v9 = 215;
    v79 = sub_140001650(215, 1);
    if ( !v79 )
    {
      v127 = (__int64)v11;
      sub_14196B2DB(1, 215);
    }
    v63 = v79;
    sub_1419234B0(v79, aCodexEngineVer, 215);
    v7 = 10;
    if ( v11 )
    {
      v74 = (__int64 *)v101;
      v73 = (__int64)v11;
      goto LABEL_142;
    }
LABEL_143:
    LODWORD(v11) = 0;
    v127 = 215;
    v64 = v121;
    if ( !v121 )
      goto LABEL_109;
    goto LABEL_108;
  }
  sub_1416DB410(&v109, &xmmword_142239438);
  v125 = v109.m128i_i64[1];
  v127 = v109.m128i_i64[0];
  v9 = v110.m128i_i64[0];
  if ( !(_BYTE)v128 )
  {
    if ( 2 * *v11 )
    {
      v132 = 1;
      if ( !(unsigned __int8)sub_14196A710(v30, v29, v31) )
        byte_1422393F1 = 1;
    }
  }
  v32 = byte_1422393F0;
  byte_1422393F0 = 0;
  v7 = -1;
  v17 = v123;
  if ( v32 != 2 )
  {
    v33 = v124;
    if ( !v124 )
      goto LABEL_128;
LABEL_127:
    sub_140001660(v122, v33, 1);
    goto LABEL_128;
  }
  v132 = 1;
  WakeByAddressSingle(&byte_1422393F0);
  v17 = v123;
  v33 = v124;
  if ( v124 )
    goto LABEL_127;
LABEL_128:
  v12 = HIDWORD(v9);
  if ( v17 )
LABEL_8:
    sub_140001660(v102, v17, 1);
LABEL_9:
  if ( v7 != -1 )
  {
    v6 = v127;
    v8 = v125;
    goto LABEL_11;
  }
  sub_1416A5BF0(&v109, a01550Alpha92, 17);
  if ( !v109.m128i_i64[0] )
  {
    *(_QWORD *)v86 = v109.m128i_i64[1];
    sub_14196B5F0(
      (unsigned int)aValidMinimumVe,
      21,
      (unsigned int)v86,
      (unsigned int)&unk_141A93F40,
      (__int64)&off_141A98A50);
  }
  *(_QWORD *)&v120[16] = v111.m128i_i64[0];
  v21 = _mm_loadu_si128(&v109);
  *(__m128i *)v120 = _mm_loadu_si128(&v110);
  *(__m128i *)v119 = v21;
  v22 = sub_1408FEA60(v125, (v12 << 32) | (unsigned int)v9);
  if ( v23 < 0xA
    || (v24 = *(_QWORD *)v22 ^ 0x6C632D7865646F63LL, v24 | *(unsigned __int16 *)(v22 + 8) ^ 0x2069LL)
    || (v34 = sub_1408FEA60(v22 + 10, v23 - 10), sub_1416A5BF0(&v109, v34, v35), (v24 = v109.m128i_i64[0]) == 0) )
  {
    nullsub_1(v24, v23);
    v25 = sub_140001650(215, 1);
    if ( !v25 )
      sub_14196B2DB(1, 215);
    v26 = v25;
    sub_1419234B0(v25, aCodexEngineVer, 215);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 215;
    *(_QWORD *)(a1 + 16) = v26;
    *(_QWORD *)(a1 + 24) = 215;
    sub_1416A7680(v119);
  }
  else
  {
    v36 = v110.m128i_i64[0];
    v37 = (v110.m128i_i64[0] > *(_QWORD *)v120) - (v110.m128i_i64[0] < *(_QWORD *)v120);
    v87 = _mm_loadu_si128((const __m128i *)&v110.m128i_u64[1]);
    *(__m128i *)v86 = v109;
    *(_QWORD *)&v86[16] = v110.m128i_i64[0];
    if ( v110.m128i_i64[0] == *(_QWORD *)v120 )
    {
      v24 = v87.m128i_i64[0];
      v36 = *(_QWORD *)&v120[8];
      v37 = (v87.m128i_i64[0] > *(_QWORD *)&v120[8]) - (v87.m128i_i64[0] < *(_QWORD *)&v120[8]);
      if ( v87.m128i_i64[0] == *(_QWORD *)&v120[8] )
      {
        v24 = v87.m128i_i64[1];
        v36 = *(_QWORD *)&v120[16];
        v37 = (v87.m128i_i64[1] > *(_QWORD *)&v120[16]) - (v87.m128i_i64[1] < *(_QWORD *)&v120[16]);
        if ( v87.m128i_i64[1] == *(_QWORD *)&v120[16] )
        {
          v37 = sub_1416A6410(v86, v119);
          if ( !v37 )
            v37 = sub_1416A6700(&v86[8], &v119[1]);
        }
      }
    }
    if ( v37 < 0 )
    {
      nullsub_1(v24, v36);
      v38 = sub_140001650(217, 1);
      if ( !v38 )
        sub_14196B2DB(1, 217);
      v39 = v38;
      sub_1419234B0(v38, aCodexEngineVer_0, 217);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 217;
      *(_QWORD *)(a1 + 16) = v39;
      *(_QWORD *)(a1 + 24) = 217;
    }
    else
    {
      *(_QWORD *)a1 = -1;
    }
    sub_1416A7680(v86);
    sub_1416A7680(&v86[8]);
    sub_1416A7680(v119);
  }
  sub_1416A7680(&v119[1]);
  if ( v127 )
    sub_140001660(v125, v127, 1);
  return a1;
}
