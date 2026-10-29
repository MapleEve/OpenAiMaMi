// win 1.2.7 | module src/core/repository.rs | ea 0x1401f0d80 | name sub_1401F0D80
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401F0D80(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __m128i v5; // xmm0
  void *v6; // r14
  __m128i v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __m128i v14; // xmm0
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  bool v25; // zf
  __int128 v26; // rax
  __m128i si128; // xmm0
  __int64 v28; // rcx
  __int64 v29; // r13
  __int64 v30; // r12
  __int128 v31; // kr00_16
  __int64 v32; // rbx
  __int32 v33; // edx
  __int64 v34; // rax
  __m128i v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // r14
  const __m128i *v42; // r15
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int32 v56; // edx
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rcx
  __int64 v60; // rax
  __int128 *v61; // rdx
  int v62; // r15d
  __int128 *v63; // rdx
  int v64; // r13d
  __int64 v65; // r14
  const __m128i *v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rbx
  bool v69; // r14
  __int64 v70; // rax
  __int64 v71; // rcx
  __m128i v72; // xmm0
  __int128 v73; // xmm1
  __m128i v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  __int64 v77; // rdi
  _QWORD *v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // r14
  const __m128i *v85; // r15
  __m128i v87; // xmm0
  __int64 v88; // rax
  __int64 v89; // rdx
  unsigned __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 i; // r15
  int v95; // [rsp+40h] [rbp-40h] BYREF
  __m128i v96[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v97; // [rsp+68h] [rbp-18h]
  __m128i v98; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v99; // [rsp+B0h] [rbp+30h]
  __m128i v100; // [rsp+B8h] [rbp+38h] BYREF
  __m256i v101; // [rsp+C8h] [rbp+48h]
  __int64 v102; // [rsp+E8h] [rbp+68h]
  __m128i v103; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v104; // [rsp+100h] [rbp+80h]
  __int128 v105; // [rsp+110h] [rbp+90h]
  __int128 v106; // [rsp+120h] [rbp+A0h]
  __int128 v107; // [rsp+130h] [rbp+B0h]
  __int64 v108; // [rsp+140h] [rbp+C0h]
  __m128i v109; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v110; // [rsp+160h] [rbp+E0h]
  __int128 v111; // [rsp+170h] [rbp+F0h]
  __m128i v112; // [rsp+180h] [rbp+100h] BYREF
  __int128 v113; // [rsp+190h] [rbp+110h]
  __int128 v114; // [rsp+1A0h] [rbp+120h]
  __int128 v115; // [rsp+1B0h] [rbp+130h]
  __m128i v116; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v117; // [rsp+1D0h] [rbp+150h]
  _DWORD v118[3]; // [rsp+1E4h] [rbp+164h] BYREF
  __m128i v119; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v120; // [rsp+200h] [rbp+180h]
  __int64 v121; // [rsp+210h] [rbp+190h]
  __m128i v122; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v123; // [rsp+230h] [rbp+1B0h]
  __int128 v124; // [rsp+240h] [rbp+1C0h]
  __int128 v125; // [rsp+250h] [rbp+1D0h]
  __int128 v126; // [rsp+260h] [rbp+1E0h]
  __int128 v127; // [rsp+270h] [rbp+1F0h]
  __m128i v128; // [rsp+280h] [rbp+200h] BYREF
  __int64 v129; // [rsp+290h] [rbp+210h]
  _BYTE v130[96]; // [rsp+2A0h] [rbp+220h] BYREF
  HANDLE hObject; // [rsp+300h] [rbp+280h] BYREF
  __int64 v132; // [rsp+308h] [rbp+288h]
  __int64 v133; // [rsp+310h] [rbp+290h]
  char v134; // [rsp+31Bh] [rbp+29Bh]
  char v135; // [rsp+31Ch] [rbp+29Ch]
  char v136; // [rsp+31Dh] [rbp+29Dh]
  char v137; // [rsp+31Eh] [rbp+29Eh]
  char v138; // [rsp+31Fh] [rbp+29Fh]
  __int64 v139; // [rsp+320h] [rbp+2A0h]

  v139 = -2;
  sub_1416828D0(
    (unsigned int)&v112,
    a2[33],
    a2[34],
    (unsigned int)".account-domain.lockaccount state.account-transition.lockaccount transition",
    20);
  v133 = v112.m128i_i64[1];
  sub_140FE2210(
    (__int64)v130,
    v112.m128i_i32[2],
    v113,
    (__int64)"account state.account-transition.lockaccount transition",
    13);
  v4 = *(_QWORD *)v130;
  if ( *(_QWORD *)v130 != -1 )
  {
    v126 = *(_OWORD *)&v130[80];
    v5 = _mm_loadu_si128((const __m128i *)&v130[16]);
    v125 = *(_OWORD *)&v130[64];
    v124 = *(_OWORD *)&v130[48];
    v123 = *(_OWORD *)&v130[32];
    v122 = v5;
  }
  v6 = *(void **)&v130[8];
  if ( v112.m128i_i64[0] )
    sub_140001660(v133, v112.m128i_i64[0], 1);
  if ( (_DWORD)v4 == -1 )
  {
    hObject = v6;
    sub_1401DECD0((__int64)v130, a2[37], a2[38]);
    v10 = *(_QWORD *)v130;
    v122 = *(__m128i *)&v130[8];
    v123 = *(_OWORD *)&v130[24];
    v124 = *(_OWORD *)&v130[40];
    v125 = *(_OWORD *)&v130[56];
    v126 = *(_OWORD *)&v130[72];
    *(_QWORD *)&v127 = *(_QWORD *)&v130[88];
    if ( *(_QWORD *)v130 != -1 )
    {
      *(_QWORD *)(a1 + 96) = v127;
      *(_OWORD *)(a1 + 80) = v126;
      v11 = _mm_load_si128(&v122);
      v12 = v123;
      v13 = v124;
      *(_OWORD *)(a1 + 64) = v125;
      *(_OWORD *)(a1 + 48) = v13;
      *(_OWORD *)(a1 + 32) = v12;
      *(__m128i *)(a1 + 16) = v11;
      *(_QWORD *)(a1 + 8) = v10;
      *(_QWORD *)a1 = 1;
LABEL_38:
      v49 = sub_141412E80(&hObject);
      if ( v49 && (unsigned int)(v49 & 3) - 2 >= 2 && (v49 & 3) != 0 )
      {
        *(_QWORD *)&v130[8] = v49 - 1;
        v130[0] = 3;
        sub_1416BCB00(&v130[8]);
      }
LABEL_90:
      CloseHandle(hObject);
      return a1;
    }
    v108 = v127;
    v107 = v126;
    v14 = _mm_load_si128(&v122);
    v106 = v125;
    v105 = v124;
    v104 = v123;
    v103 = v14;
    v15 = v123;
    sub_14037C100(&v103, a2);
    v16 = v103.m128i_i64[1];
    v17 = v104;
    v19 = sub_14167F170(v18);
    v24 = v19;
    v25 = *(_BYTE *)(v19 + 16) == 1;
    v102 = v15;
    if ( v25 )
    {
      v26 = *(_OWORD *)v19;
    }
    else
    {
      *(_QWORD *)&v26 = sub_141696260(v21, v20, v22, v23);
      *(_OWORD *)v24 = v26;
      *(_BYTE *)(v24 + 16) = 1;
    }
    *(_QWORD *)v24 = v26 + 1;
    *(_OWORD *)&v130[16] = xmmword_1419D6520;
    *(__m128i *)v130 = _mm_loadu_si128((const __m128i *)&off_1419D6510);
    *(_OWORD *)&v130[32] = v26;
    if ( v17 )
    {
      LOBYTE(v23) = 1;
      sub_141930360(v130, v17, &v130[32], v23);
      for ( i = 0; i != v17; ++i )
      {
        sub_1416AC440(&v122, 424 * i + v16 + 192);
        sub_1403AAB80(v130, &v122);
      }
    }
    si128 = _mm_load_si128((const __m128i *)v130);
    v111 = *(_OWORD *)&v130[32];
    v110 = *(_OWORD *)&v130[16];
    v109 = si128;
    v28 = *((_QWORD *)&v104 + 1);
    v133 = *((_QWORD *)&v104 + 1);
    if ( (_QWORD)v104 )
    {
      if ( v133 != -1 )
      {
        v29 = v103.m128i_i64[1];
        v30 = 424 * v104;
        v31 = v105;
        v32 = 0;
        while ( *(_QWORD *)(v29 + v32 + 208) != *((_QWORD *)&v31 + 1)
             || (unsigned int)sub_1418F4B70(*(_QWORD *)(v29 + v32 + 200), v31) )
        {
          v32 += 424;
          if ( v30 == v32 )
            goto LABEL_19;
        }
LABEL_23:
        v122.m128i_i32[0] = sub_141683E80(v28, *((_QWORD *)&v26 + 1), v22);
        v122.m128i_i32[1] = v33;
        sub_141683E30(v130, &v122, 3577643008LL, 27111902);
        if ( v130[0] )
          v34 = 0;
        else
          v34 = *(_QWORD *)&v130[8];
        *((_QWORD *)&v107 + 1) = v34;
        HIDWORD(_RAX) = (unsigned __int64)sub_1401CF760(v130, a2, (__int64)&v103, 0) >> 32;
        if ( *(_DWORD *)v130 != -1 )
        {
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v130[80];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v130[64];
          v36 = _mm_loadu_si128((const __m128i *)v130);
          v37 = *(_OWORD *)&v130[16];
          v38 = *(_OWORD *)&v130[32];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v130[48];
          *(_OWORD *)(a1 + 40) = v38;
          *(_OWORD *)(a1 + 24) = v37;
          *(__m128i *)(a1 + 8) = v36;
          *(_QWORD *)a1 = 1;
          v39 = v109.m128i_i64[1];
          if ( v109.m128i_i64[1] )
          {
            v40 = *((_QWORD *)&v110 + 1);
            if ( *((_QWORD *)&v110 + 1) )
            {
              v41 = v109.m128i_i64[0];
              v42 = (const __m128i *)(v109.m128i_i64[0] + 16);
              _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v109.m128i_i64[0]));
              do
              {
                if ( !(_WORD)_R12D )
                {
                  do
                  {
                    v44 = _mm_load_si128(v42);
                    v41 -= 384;
                    ++v42;
                    _R12D = _mm_movemask_epi8(v44) ^ 0xFFFF;
                  }
                  while ( !_R12D );
                }
                __asm { tzcnt   eax, r12d }
                v45 = -3 * _RAX;
                v46 = *(_QWORD *)(v41 + 8 * v45 - 24);
                if ( v46 )
                  sub_140001660(*(_QWORD *)(v41 + 8 * v45 - 16), v46, 1);
                --v40;
                _RAX = _R12D & (unsigned int)(_R12D - 1);
                _R12D &= _R12D - 1;
              }
              while ( v40 );
            }
            v47 = (24 * v39 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v48 = v47 + v39 + 17;
            if ( v48 )
              sub_140001660(v109.m128i_i64[0] - v47, v48, 16);
          }
          sub_140033D80(&v103);
          goto LABEL_38;
        }
        sub_14021B0F0(&v95, a2[69], a2[70]);
        if ( v95 == -1 )
        {
          v121 = v97;
          v50 = _mm_loadu_si128(v96);
          v120 = v96[1];
          v119 = v50;
        }
        else
        {
          LODWORD(v121) = 3;
          v119.m128i_i64[0] = 0;
          v119.m128i_i64[1] = 8;
          v120 = 0;
          sub_1401954F0(&v95);
        }
        v51 = v120.m128i_i64[0];
        sub_14037C790(&v119, &v109);
        v100.m128i_i64[0] = -1;
        v55 = -1;
        if ( v120.m128i_i64[0] != v51 )
        {
          v132 = -1;
          v138 = 1;
          v122.m128i_i32[0] = sub_141683E80(v53, v52, v54);
          v122.m128i_i32[1] = v56;
          v132 = -1;
          v138 = 1;
          sub_141683E30(v130, &v122, 3577643008LL, 27111902);
          if ( v130[0] )
            v57 = 0;
          else
            v57 = *(_QWORD *)&v130[8];
          v120.m128i_i64[1] = v57;
          v132 = -1;
          v138 = 1;
          sub_14021B430(&v122);
          if ( v122.m128i_i32[0] == -1 )
            goto LABEL_55;
          *(_OWORD *)&v130[80] = v127;
          *(_OWORD *)&v130[64] = v126;
          v58 = _mm_loadu_si128(&v122);
          *(_OWORD *)&v130[48] = v125;
          *(_OWORD *)&v130[32] = v124;
          *(_OWORD *)&v130[16] = v123;
          *(__m128i *)v130 = v58;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v128.m128i_i64[0] = (__int64)v130;
            v128.m128i_i64[1] = (__int64)sub_14104A7D0;
            v112.m128i_i64[0] = (__int64)aCodexmateLibCo_21;
            v112.m128i_i64[1] = 31;
            *(_QWORD *)&v113 = aCodexmateLibCo_21;
            *((_QWORD *)&v113 + 1) = 31;
            *(_QWORD *)&v114 = &off_1419D9EA8;
            sub_140BAD520(&unk_1419D9E71, &v128, 2, &v112);
          }
          v112 = *(__m128i *)&v130[8];
          v113 = *(_OWORD *)&v130[24];
          v114 = *(_OWORD *)&v130[40];
          v115 = *(_OWORD *)&v130[56];
          v116 = _mm_loadu_si128((const __m128i *)&v130[72]);
          v59 = *(_QWORD *)&v130[88];
          v117 = *(_QWORD *)&v130[88];
          if ( *(_QWORD *)v130 == -1 )
          {
LABEL_55:
            v55 = -1;
          }
          else
          {
            *(__m128i *)&v130[8] = v112;
            *(_OWORD *)&v130[24] = v113;
            *(_OWORD *)&v130[40] = v114;
            *(_OWORD *)&v130[56] = v115;
            *(__m128i *)&v130[72] = _mm_load_si128(&v116);
            *(_QWORD *)&v130[88] = v117;
            nullsub_1(v59);
            v60 = sub_140001650(30, 1);
            if ( !v60 )
              sub_141938D2B(1, 30);
            *(_OWORD *)(v60 + 14) = *(__int128 *)((char *)&xmmword_1419DB071 + 14);
            v133 = v60;
            *(__m128i *)v60 = _mm_loadu_si128((const __m128i *)&xmmword_1419DB071);
            v122.m128i_i64[0] = (__int64)v130;
            v122.m128i_i64[1] = (__int64)sub_14104A7D0;
            sub_1416ABFD0(&v98, &unk_1419DB08F, &v122);
            sub_140020E50(&v100);
            v100.m128i_i64[0] = 30;
            v100.m128i_i64[1] = v133;
            v101.m256i_i64[0] = 30;
            *(__m128i *)&v101.m256i_u64[1] = _mm_loadu_si128(&v98);
            v101.m256i_i64[3] = v99;
            v132 = 30;
            v138 = 1;
            sub_1401954F0(v130);
            v55 = 30;
          }
        }
        v61 = (__int128 *)a2[45];
        v133 = v55;
        v132 = v55;
        v138 = 1;
        sub_1402146B0((__int64)v130, v61);
        v62 = *(_DWORD *)v130;
        v129 = *(_QWORD *)&v130[24];
        v128 = _mm_loadu_si128((const __m128i *)&v130[8]);
        v63 = (__int128 *)a2[49];
        v135 = 1;
        v134 = 1;
        sub_1402146B0((__int64)v130, v63);
        v64 = *(_DWORD *)v130;
        v65 = *(_QWORD *)&v130[24];
        *(_QWORD *)&v113 = *(_QWORD *)&v130[24];
        v112 = _mm_loadu_si128((const __m128i *)&v130[8]);
        v66 = (const __m128i *)v112.m128i_i64[1];
        v67 = v129;
        if ( *(_QWORD *)&v130[24] > (unsigned __int64)(v128.m128i_i64[0] - v129) )
        {
          v137 = 1;
          v136 = 1;
          sub_14190D590((unsigned int)&v128, v129, *(_DWORD *)&v130[24], 8, 48);
          v67 = v129;
        }
        else if ( !*(_QWORD *)&v130[24] )
        {
LABEL_59:
          v68 = v65 + v67;
          v129 = v68;
          *(_QWORD *)&v113 = 0;
          v69 = v133 == -1;
          if ( (_DWORD)v133 != -1 )
          {
            if ( v68 == v128.m128i_i64[0] )
              sub_14190F490(&v128);
            v70 = v128.m128i_i64[1];
            v71 = 48 * v68;
            v72 = _mm_loadu_si128(&v100);
            v73 = *(_OWORD *)v101.m256i_i8;
            *(_OWORD *)(v128.m128i_i64[1] + v71 + 32) = *(_OWORD *)&v101.m256i_u64[2];
            *(_OWORD *)(v70 + v71 + 16) = v73;
            *(__m128i *)(v70 + v71) = v72;
            v129 = v68 + 1;
          }
          v118[0] = v62;
          v118[1] = v64;
          v118[2] = v102 - v104;
          *(_QWORD *)&v123 = v129;
          v122 = _mm_load_si128(&v128);
          v137 = 0;
          v136 = v69;
          sub_140FE6820(v130, v118, &v122);
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v130[80];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v130[64];
          v74 = _mm_loadu_si128((const __m128i *)v130);
          v75 = *(_OWORD *)&v130[16];
          v76 = *(_OWORD *)&v130[32];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v130[48];
          *(_OWORD *)(a1 + 40) = v76;
          *(_OWORD *)(a1 + 24) = v75;
          *(__m128i *)(a1 + 8) = v74;
          *(_QWORD *)a1 = 0;
          if ( v112.m128i_i64[0] )
            sub_140001660(v66, 48 * v112.m128i_i64[0], 8);
          v77 = v120.m128i_i64[0];
          if ( v120.m128i_i64[0] )
          {
            v78 = (_QWORD *)(v119.m128i_i64[1] + 152);
            do
            {
              v79 = *(v78 - 1);
              if ( v79 )
                sub_140001660(*v78, v79, 1);
              if ( *((_DWORD *)v78 - 14) != 2 )
              {
                v80 = *(v78 - 5);
                if ( v80 != -1 )
                {
                  if ( v80 )
                    sub_140001660(*(v78 - 4), v80, 1);
                }
              }
              v78 += 24;
              --v77;
            }
            while ( v77 );
          }
          HIDWORD(_RAX) = v119.m128i_i32[1];
          if ( v119.m128i_i64[0] )
            HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v119.m128i_i64[1], 192 * v119.m128i_i64[0], 8) >> 32;
          v82 = v109.m128i_i64[1];
          if ( v109.m128i_i64[1] )
          {
            v83 = *((_QWORD *)&v110 + 1);
            if ( *((_QWORD *)&v110 + 1) )
            {
              v84 = v109.m128i_i64[0];
              v85 = (const __m128i *)(v109.m128i_i64[0] + 16);
              _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v109.m128i_i64[0]));
              do
              {
                if ( !(_WORD)_R12D )
                {
                  do
                  {
                    v87 = _mm_load_si128(v85);
                    v84 -= 384;
                    ++v85;
                    _R12D = _mm_movemask_epi8(v87) ^ 0xFFFF;
                  }
                  while ( !_R12D );
                }
                __asm { tzcnt   eax, r12d }
                v88 = -3 * _RAX;
                v89 = *(_QWORD *)(v84 + 8 * v88 - 24);
                if ( v89 )
                  sub_140001660(*(_QWORD *)(v84 + 8 * v88 - 16), v89, 1);
                --v83;
                _RAX = _R12D & (unsigned int)(_R12D - 1);
                _R12D &= _R12D - 1;
              }
              while ( v83 );
            }
            v90 = (24 * v82 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v91 = v90 + v82 + 17;
            if ( v91 )
              sub_140001660(v109.m128i_i64[0] - v90, v91, 16);
          }
          sub_140033D80(&v103);
          v92 = sub_141412E80(&hObject);
          if ( v92 && (unsigned int)(v92 & 3) - 2 >= 2 && (v92 & 3) != 0 )
          {
            *(_QWORD *)&v130[8] = v92 - 1;
            v130[0] = 3;
            sub_1416BCB00(&v130[8]);
          }
          goto LABEL_90;
        }
        sub_1418F44E0((__m128i *)(v128.m128i_i64[1] + 48 * v67), v66, 48 * v65);
        v67 = v129;
        goto LABEL_59;
      }
    }
    else
    {
LABEL_19:
      *((_QWORD *)&v26 + 1) = v133;
      if ( v133 != -1 && v133 )
        sub_140001660(v105, v133, 1);
    }
    *((_QWORD *)&v104 + 1) = -1;
    goto LABEL_23;
  }
  *(_OWORD *)(a1 + 88) = v126;
  v7 = _mm_load_si128(&v122);
  v8 = v123;
  v9 = v124;
  *(_OWORD *)(a1 + 72) = v125;
  *(_OWORD *)(a1 + 56) = v9;
  *(_OWORD *)(a1 + 40) = v8;
  *(__m128i *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)a1 = 1;
  return a1;
}
