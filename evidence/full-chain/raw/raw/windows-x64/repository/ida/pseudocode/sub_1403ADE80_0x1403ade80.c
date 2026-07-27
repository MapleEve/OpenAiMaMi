// module: codexmate_lib/core/repository
// addr: 0x1403ade80
// name: sub_1403ADE80
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1403ADE80(__int64 a1, _QWORD *a2)
{
  __int128 v4; // kr00_16
  __m128i v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __m128i v12; // xmm0
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  bool v22; // zf
  __int128 v23; // rax
  __m128i si128; // xmm0
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // r13
  __int128 v28; // kr10_16
  __int64 v29; // rbx
  __int32 v30; // edx
  __int64 v31; // rax
  __m128i v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r14
  const __m128i *v39; // r15
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v47; // rbx
  __m128i v48; // xmm0
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r13
  __int64 v54; // rax
  __int32 v55; // edx
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rcx
  __int64 v59; // rax
  __int128 *v60; // rdx
  int v61; // r15d
  __int128 *v62; // rdx
  int v63; // r12d
  __int64 v64; // r14
  __int64 v65; // rdi
  __int64 v66; // rbx
  __int64 v67; // rbx
  bool v68; // r14
  __int64 v69; // rax
  __int64 v70; // rcx
  __m128i v71; // xmm0
  __int128 v72; // xmm1
  __m128i v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  __int64 v76; // rdi
  _QWORD *v77; // rbx
  __int64 v78; // rdx
  __int64 v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // r14
  const __m128i *v83; // r15
  __m128i v85; // xmm0
  __int64 v86; // rax
  __int64 v87; // rdx
  unsigned __int64 v88; // rax
  __int64 v89; // rdi
  __int64 i; // r13
  int v91; // [rsp+40h] [rbp-40h] BYREF
  __m128i v92; // [rsp+48h] [rbp-38h] BYREF
  __int128 v93; // [rsp+58h] [rbp-28h]
  __int64 v94; // [rsp+68h] [rbp-18h]
  __m128i v95; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v96; // [rsp+B0h] [rbp+30h]
  __m128i v97; // [rsp+B8h] [rbp+38h] BYREF
  __m256i v98; // [rsp+C8h] [rbp+48h]
  __int64 v99; // [rsp+E8h] [rbp+68h]
  __m128i v100; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v101; // [rsp+100h] [rbp+80h]
  __int128 v102; // [rsp+110h] [rbp+90h]
  __int128 v103; // [rsp+120h] [rbp+A0h]
  __int128 v104; // [rsp+130h] [rbp+B0h]
  __int64 v105; // [rsp+140h] [rbp+C0h]
  __m128i v106; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v107; // [rsp+160h] [rbp+E0h]
  __int128 v108; // [rsp+170h] [rbp+F0h]
  __int128 v109; // [rsp+180h] [rbp+100h]
  __m128i v110; // [rsp+190h] [rbp+110h] BYREF
  __int64 v111; // [rsp+1A0h] [rbp+120h]
  __m128i v112; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v113; // [rsp+1C0h] [rbp+140h]
  __int128 v114; // [rsp+1D0h] [rbp+150h]
  _DWORD v115[3]; // [rsp+1E4h] [rbp+164h] BYREF
  __m128i v116; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v117; // [rsp+200h] [rbp+180h]
  __int64 v118; // [rsp+210h] [rbp+190h]
  __m128i v119; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v120; // [rsp+230h] [rbp+1B0h]
  __int128 v121; // [rsp+240h] [rbp+1C0h]
  __int128 v122; // [rsp+250h] [rbp+1D0h]
  __int128 v123; // [rsp+260h] [rbp+1E0h]
  __int128 v124; // [rsp+270h] [rbp+1F0h]
  __m128i v125; // [rsp+280h] [rbp+200h] BYREF
  __int64 v126; // [rsp+290h] [rbp+210h]
  _BYTE v127[96]; // [rsp+2A0h] [rbp+220h] BYREF
  HANDLE hObject; // [rsp+300h] [rbp+280h] BYREF
  __int64 v129; // [rsp+308h] [rbp+288h]
  __int64 v130; // [rsp+310h] [rbp+290h]
  char v131; // [rsp+31Bh] [rbp+29Bh]
  char v132; // [rsp+31Ch] [rbp+29Ch]
  char v133; // [rsp+31Dh] [rbp+29Dh]
  char v134; // [rsp+31Eh] [rbp+29Eh]
  char v135; // [rsp+31Fh] [rbp+29Fh]
  __int64 v136; // [rsp+320h] [rbp+2A0h]

  v136 = -2;
  sub_1403885B0(v127, a2[33], a2[34]);
  v4 = *(_OWORD *)v127;
  if ( *(_QWORD *)v127 == -1 )
  {
    hObject = *(HANDLE *)&v127[8];
    sub_14039C370((__int64)v127, a2[37], a2[38]);
    v8 = *(_QWORD *)v127;
    v119 = *(__m128i *)&v127[8];
    v120 = *(_OWORD *)&v127[24];
    v121 = *(_OWORD *)&v127[40];
    v122 = *(_OWORD *)&v127[56];
    v123 = *(_OWORD *)&v127[72];
    *(_QWORD *)&v124 = *(_QWORD *)&v127[88];
    if ( *(_QWORD *)v127 != -1 )
    {
      *(_QWORD *)(a1 + 96) = v124;
      *(_OWORD *)(a1 + 80) = v123;
      v9 = _mm_load_si128(&v119);
      v10 = v120;
      v11 = v121;
      *(_OWORD *)(a1 + 64) = v122;
      *(_OWORD *)(a1 + 48) = v11;
      *(_OWORD *)(a1 + 32) = v10;
      *(__m128i *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 8) = v8;
      *(_QWORD *)a1 = 1;
LABEL_33:
      *(_QWORD *)v127 = sub_1412018B0(&hObject);
      if ( *(_QWORD *)v127 )
        sub_140018650(v127);
LABEL_35:
      CloseHandle(hObject);
      return a1;
    }
    v105 = v124;
    v104 = v123;
    v12 = _mm_load_si128(&v119);
    v103 = v122;
    v102 = v121;
    v101 = v120;
    v100 = v12;
    v13 = v120;
    sub_1402AF090(&v100, a2);
    v14 = v100.m128i_i64[1];
    v15 = v101;
    v18 = sub_141470CD0(v17, v16);
    v21 = v18;
    v22 = *(_BYTE *)(v18 + 16) == 1;
    v99 = v13;
    if ( v22 )
    {
      v23 = *(_OWORD *)v18;
    }
    else
    {
      *(_QWORD *)&v23 = sub_141486EF0();
      *(_OWORD *)v21 = v23;
      *(_BYTE *)(v21 + 16) = 1;
    }
    *(_QWORD *)v21 = v23 + 1;
    *(_OWORD *)&v127[16] = *(&off_14174C6F0 + 1);
    *(__m128i *)v127 = _mm_loadu_si128((const __m128i *)&off_14174C6F0);
    *(_OWORD *)&v127[32] = v23;
    if ( v15 )
    {
      LOBYTE(v20) = 1;
      sub_1416BA580(v127, v15, &v127[32], v20);
      for ( i = 0; i != v15; ++i )
      {
        sub_14149C500(&v119, v14 + 424 * i + 192);
        sub_140474440(v127, &v119);
      }
    }
    si128 = _mm_load_si128((const __m128i *)v127);
    v114 = *(_OWORD *)&v127[32];
    v113 = *(_OWORD *)&v127[16];
    v112 = si128;
    v25 = *((_QWORD *)&v101 + 1);
    v129 = *((_QWORD *)&v101 + 1);
    if ( (_QWORD)v101 )
    {
      if ( v129 != -1 )
      {
        v26 = v100.m128i_i64[1];
        v27 = 424 * v101;
        v28 = v102;
        v29 = 0;
        while ( *(_QWORD *)(v26 + v29 + 208) != *((_QWORD *)&v28 + 1)
             || (unsigned int)sub_1416847B0(*(_QWORD *)(v26 + v29 + 200), v28, *((_QWORD *)&v28 + 1)) )
        {
          v29 += 424;
          if ( v27 == v29 )
            goto LABEL_15;
        }
LABEL_18:
        v119.m128i_i32[0] = sub_141475580(v25, *((_QWORD *)&v23 + 1), v19, v20);
        v119.m128i_i32[1] = v30;
        sub_141475530(v127, &v119, 3577643008LL, 27111902);
        if ( v127[0] )
          v31 = 0;
        else
          v31 = *(_QWORD *)&v127[8];
        *((_QWORD *)&v104 + 1) = v31;
        HIDWORD(_RAX) = (unsigned __int64)persist_registry(v127, a2, (__int64)&v100, 0) >> 32;
        if ( *(_DWORD *)v127 != -1 )
        {
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v127[80];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v127[64];
          v33 = _mm_loadu_si128((const __m128i *)v127);
          v34 = *(_OWORD *)&v127[16];
          v35 = *(_OWORD *)&v127[32];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v127[48];
          *(_OWORD *)(a1 + 40) = v35;
          *(_OWORD *)(a1 + 24) = v34;
          *(__m128i *)(a1 + 8) = v33;
          *(_QWORD *)a1 = 1;
          v36 = v112.m128i_i64[1];
          if ( v112.m128i_i64[1] )
          {
            v37 = *((_QWORD *)&v113 + 1);
            if ( *((_QWORD *)&v113 + 1) )
            {
              v38 = v112.m128i_i64[0];
              v39 = (const __m128i *)(v112.m128i_i64[0] + 16);
              _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v112.m128i_i64[0]));
              do
              {
                if ( !(_WORD)_R12D )
                {
                  do
                  {
                    v41 = _mm_load_si128(v39);
                    v38 -= 384;
                    ++v39;
                    _R12D = _mm_movemask_epi8(v41) ^ 0xFFFF;
                  }
                  while ( !_R12D );
                }
                __asm { tzcnt   eax, r12d }
                v42 = -3 * _RAX;
                v43 = *(_QWORD *)(v38 + 8 * v42 - 24);
                if ( v43 )
                  sub_140001660(*(_QWORD *)(v38 + 8 * v42 - 16), v43, 1);
                --v37;
                _RAX = _R12D & (unsigned int)(_R12D - 1);
                _R12D &= _R12D - 1;
              }
              while ( v37 );
            }
            v44 = (24 * v36 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v45 = v44 + v36 + 17;
            if ( v45 )
              sub_140001660(v112.m128i_i64[0] - v44, v45, 16);
          }
          sub_14034DF40(&v100);
          goto LABEL_33;
        }
        sub_1403C7270(&v91, a2[69], a2[70]);
        if ( v91 == -1 )
        {
          v48 = _mm_loadu_si128(&v92);
          v117 = v93;
          v118 = v94;
          v116 = v48;
          v47 = v93;
        }
        else
        {
          LODWORD(v118) = 3;
          v116.m128i_i64[0] = 0;
          v116.m128i_i64[1] = 8;
          v117 = 0;
          sub_14034ED40(&v91);
          v47 = 0;
        }
        sub_1402AF760((__int64)&v116, v112.m128i_i64);
        v97.m128i_i64[0] = -1;
        v53 = v117;
        v54 = -1;
        if ( (_QWORD)v117 != v47 )
        {
          v130 = -1;
          v135 = 1;
          v119.m128i_i32[0] = sub_141475580(v50, v49, v51, v52);
          v119.m128i_i32[1] = v55;
          v130 = -1;
          v135 = 1;
          sub_141475530(v127, &v119, 3577643008LL, 27111902);
          if ( v127[0] )
            v56 = 0;
          else
            v56 = *(_QWORD *)&v127[8];
          *((_QWORD *)&v117 + 1) = v56;
          v130 = -1;
          v135 = 1;
          sub_1403C75B0(&v119);
          if ( v119.m128i_i32[0] == -1 )
            goto LABEL_50;
          *(_OWORD *)&v127[80] = v124;
          *(_OWORD *)&v127[64] = v123;
          v57 = _mm_loadu_si128(&v119);
          *(_OWORD *)&v127[48] = v122;
          *(_OWORD *)&v127[32] = v121;
          *(_OWORD *)&v127[16] = v120;
          *(__m128i *)v127 = v57;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v125.m128i_i64[0] = (__int64)v127;
            v125.m128i_i64[1] = (__int64)sub_140B036A0;
            v106.m128i_i64[0] = (__int64)aCodexmateLibCo_16;
            v106.m128i_i64[1] = 31;
            *(_QWORD *)&v107 = aCodexmateLibCo_16;
            *((_QWORD *)&v107 + 1) = 31;
            *(_QWORD *)&v108 = &off_14174E9F8;
            sub_140985BA0(&unk_14174E9C1, &v125, 2, &v106);
          }
          v106 = *(__m128i *)&v127[8];
          v107 = *(_OWORD *)&v127[24];
          v108 = *(_OWORD *)&v127[40];
          v109 = *(_OWORD *)&v127[56];
          v110 = _mm_loadu_si128((const __m128i *)&v127[72]);
          v58 = *(_QWORD *)&v127[88];
          v111 = *(_QWORD *)&v127[88];
          if ( *(_QWORD *)v127 == -1 )
          {
LABEL_50:
            v54 = -1;
          }
          else
          {
            *(__m128i *)&v127[8] = v106;
            *(_OWORD *)&v127[24] = v107;
            *(_OWORD *)&v127[40] = v108;
            *(_OWORD *)&v127[56] = v109;
            *(__m128i *)&v127[72] = _mm_load_si128(&v110);
            *(_QWORD *)&v127[88] = v111;
            nullsub_1(v58);
            v59 = sub_140001650(30, 1);
            if ( !v59 )
              sub_1416C2D4B(1, 30);
            *(_OWORD *)(v59 + 14) = *(__int128 *)((char *)&xmmword_14174FB3F + 14);
            v129 = v59;
            *(__m128i *)v59 = _mm_loadu_si128((const __m128i *)&xmmword_14174FB3F);
            v119.m128i_i64[0] = (__int64)v127;
            v119.m128i_i64[1] = (__int64)sub_140B036A0;
            sub_14149C0F0(&v95, &unk_14174FB5D, &v119);
            *(__m128i *)&v98.m256i_u64[1] = _mm_loadu_si128(&v95);
            v98.m256i_i64[3] = v96;
            v97.m128i_i64[0] = 30;
            v97.m128i_i64[1] = v129;
            v98.m256i_i64[0] = 30;
            v130 = 30;
            v135 = 1;
            sub_14034ED40(v127);
            v54 = 30;
          }
        }
        v60 = (__int128 *)a2[45];
        v129 = v54;
        v130 = v54;
        v135 = 1;
        remove_account_backup_files((__int64)v127, v60);
        v61 = *(_DWORD *)v127;
        v126 = *(_QWORD *)&v127[24];
        v125 = _mm_loadu_si128((const __m128i *)&v127[8]);
        v62 = (__int128 *)a2[49];
        v132 = 1;
        v131 = 1;
        remove_account_backup_files((__int64)v127, v62);
        v63 = *(_DWORD *)v127;
        v64 = *(_QWORD *)&v127[24];
        *(_QWORD *)&v107 = *(_QWORD *)&v127[24];
        v106 = _mm_loadu_si128((const __m128i *)&v127[8]);
        v65 = v106.m128i_i64[1];
        v66 = v126;
        if ( *(_QWORD *)&v127[24] > (unsigned __int64)(v125.m128i_i64[0] - v126) )
        {
          v134 = 1;
          v133 = 1;
          sub_141688D30((unsigned int)&v125, v126, *(_DWORD *)&v127[24], 8, 48);
          v66 = v126;
        }
        else if ( !*(_QWORD *)&v127[24] )
        {
LABEL_54:
          v67 = v64 + v66;
          v126 = v67;
          *(_QWORD *)&v107 = 0;
          v68 = v129 == -1;
          if ( (_DWORD)v129 != -1 )
          {
            if ( v67 == v125.m128i_i64[0] )
              sub_141688FC0(&v125);
            v69 = v125.m128i_i64[1];
            v70 = 48 * v67;
            v71 = _mm_loadu_si128(&v97);
            v72 = *(_OWORD *)v98.m256i_i8;
            *(_OWORD *)(v125.m128i_i64[1] + v70 + 32) = *(_OWORD *)&v98.m256i_u64[2];
            *(_OWORD *)(v69 + v70 + 16) = v72;
            *(__m128i *)(v69 + v70) = v71;
            v126 = v67 + 1;
          }
          v115[0] = v61;
          v115[1] = v63;
          v115[2] = v99 - v101;
          *(_QWORD *)&v120 = v126;
          v119 = _mm_load_si128(&v125);
          v134 = 0;
          v133 = v68;
          sub_140AC94D0(v127, v115, &v119);
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v127[80];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v127[64];
          v73 = _mm_loadu_si128((const __m128i *)v127);
          v74 = *(_OWORD *)&v127[16];
          v75 = *(_OWORD *)&v127[32];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v127[48];
          *(_OWORD *)(a1 + 40) = v75;
          *(_OWORD *)(a1 + 24) = v74;
          *(__m128i *)(a1 + 8) = v73;
          *(_QWORD *)a1 = 0;
          if ( v106.m128i_i64[0] )
            sub_140001660(v65, 48 * v106.m128i_i64[0], 8);
          v76 = v116.m128i_i64[1];
          if ( v53 )
          {
            v77 = (_QWORD *)(v116.m128i_i64[1] + 128);
            do
            {
              v78 = *(v77 - 1);
              if ( v78 )
                sub_140001660(*v77, v78, 1);
              v77 += 20;
              --v53;
            }
            while ( v53 );
          }
          HIDWORD(_RAX) = v116.m128i_i32[1];
          if ( v116.m128i_i64[0] )
            HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v76, 160 * v116.m128i_i64[0], 8) >> 32;
          v80 = v112.m128i_i64[1];
          if ( v112.m128i_i64[1] )
          {
            v81 = *((_QWORD *)&v113 + 1);
            if ( *((_QWORD *)&v113 + 1) )
            {
              v82 = v112.m128i_i64[0];
              v83 = (const __m128i *)(v112.m128i_i64[0] + 16);
              _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v112.m128i_i64[0]));
              do
              {
                if ( !(_WORD)_R12D )
                {
                  do
                  {
                    v85 = _mm_load_si128(v83);
                    v82 -= 384;
                    ++v83;
                    _R12D = _mm_movemask_epi8(v85) ^ 0xFFFF;
                  }
                  while ( !_R12D );
                }
                __asm { tzcnt   eax, r12d }
                v86 = -3 * _RAX;
                v87 = *(_QWORD *)(v82 + 8 * v86 - 24);
                if ( v87 )
                  sub_140001660(*(_QWORD *)(v82 + 8 * v86 - 16), v87, 1);
                --v81;
                _RAX = _R12D & (unsigned int)(_R12D - 1);
                _R12D &= _R12D - 1;
              }
              while ( v81 );
            }
            v88 = (24 * v80 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v89 = v88 + v80 + 17;
            if ( v89 )
              sub_140001660(v112.m128i_i64[0] - v88, v89, 16);
          }
          sub_14034DF40(&v100);
          *(_QWORD *)v127 = sub_1412018B0(&hObject);
          if ( *(_QWORD *)v127 )
            sub_140018650(v127);
          goto LABEL_35;
        }
        sub_141684120(v125.m128i_i64[1] + 48 * v66, v65, 48 * v64);
        goto LABEL_54;
      }
    }
    else
    {
LABEL_15:
      *((_QWORD *)&v23 + 1) = v129;
      if ( (unsigned __int64)(v129 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v102, v129, 1);
    }
    *((_QWORD *)&v101 + 1) = -1;
    goto LABEL_18;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v127[80];
  v5 = _mm_loadu_si128((const __m128i *)&v127[16]);
  v6 = *(_OWORD *)&v127[32];
  v7 = *(_OWORD *)&v127[48];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v127[64];
  *(_OWORD *)(a1 + 56) = v7;
  *(_OWORD *)(a1 + 40) = v6;
  *(__m128i *)(a1 + 24) = v5;
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 1;
  return a1;
}