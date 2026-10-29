// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14024dbf0 | name sub_14024DBF0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_14024DBF0(_OWORD *a1, __int64 a2, const __m128i *a3, signed __int64 a4)
{
  __int64 v5; // r15
  _OWORD *v7; // rbx
  __int64 v8; // rsi
  __m128i *v9; // rax
  __int64 v10; // r14
  __m256i *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  unsigned __int64 v18; // r15
  _QWORD *v19; // r14
  __int64 *i; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 *v36; // rax
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r12
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r13
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int64 v49; // rdx
  unsigned __int64 v50; // r15
  __int64 v51; // rdx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int128 v56; // [rsp+50h] [rbp-30h] BYREF
  __int128 v57; // [rsp+60h] [rbp-20h]
  __int128 v58; // [rsp+70h] [rbp-10h]
  __int128 v59; // [rsp+80h] [rbp+0h]
  __int128 v60; // [rsp+90h] [rbp+10h]
  __int128 v61; // [rsp+A0h] [rbp+20h]
  __int128 v62; // [rsp+B0h] [rbp+30h]
  __int128 v63; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v64; // [rsp+D0h] [rbp+50h]
  __int128 v65; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v66; // [rsp+E8h] [rbp+68h]
  _OWORD *v67; // [rsp+F0h] [rbp+70h]
  __int128 v68; // [rsp+F8h] [rbp+78h]
  __int64 v69; // [rsp+108h] [rbp+88h]
  __int128 v70; // [rsp+110h] [rbp+90h] BYREF
  __m256i *v71; // [rsp+120h] [rbp+A0h]
  __int64 (__fastcall *v72)(_QWORD, _QWORD); // [rsp+128h] [rbp+A8h]
  __int64 v73; // [rsp+160h] [rbp+E0h]
  __int64 v74; // [rsp+168h] [rbp+E8h]
  __int128 v75; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v76; // [rsp+180h] [rbp+100h] BYREF
  __m256i v77; // [rsp+190h] [rbp+110h]
  _OWORD v78[3]; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v79; // [rsp+1E0h] [rbp+160h] BYREF
  const __m128i *v80; // [rsp+1F0h] [rbp+170h]
  __int64 v81; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v82; // [rsp+200h] [rbp+180h]
  __int64 v83; // [rsp+208h] [rbp+188h]
  __int64 v84; // [rsp+210h] [rbp+190h]
  __int64 v85; // [rsp+218h] [rbp+198h]
  __m256i v86; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v87; // [rsp+240h] [rbp+1C0h]
  __int128 v88; // [rsp+250h] [rbp+1D0h]
  __int128 v89; // [rsp+260h] [rbp+1E0h]
  __int128 v90; // [rsp+270h] [rbp+1F0h]
  __int128 v91; // [rsp+280h] [rbp+200h] BYREF
  __int64 v92; // [rsp+290h] [rbp+210h]
  __int64 *v93; // [rsp+2A0h] [rbp+220h]
  volatile signed __int64 *v94; // [rsp+2A8h] [rbp+228h] BYREF
  _BYTE v95[112]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v96; // [rsp+320h] [rbp+2A0h]
  __int64 v97; // [rsp+328h] [rbp+2A8h]
  char v98; // [rsp+334h] [rbp+2B4h] BYREF
  char v99; // [rsp+335h] [rbp+2B5h]
  char v100; // [rsp+336h] [rbp+2B6h]
  char v101; // [rsp+337h] [rbp+2B7h]
  __int64 v102; // [rsp+338h] [rbp+2B8h]

  v102 = -2;
  if ( a4 < 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v7 = a1;
  if ( a4 )
  {
    v8 = a2;
    nullsub_1(a1);
    v5 = 1;
    v9 = (__m128i *)sub_140001650(a4, 1);
    if ( !v9 )
LABEL_3:
      sub_141938D2B(v5, a4);
    v10 = (__int64)v9;
    sub_1418F44E0(v9, a3, a4);
    a2 = v8;
  }
  else
  {
    v10 = 1;
  }
  *(_QWORD *)&v75 = a4;
  *((_QWORD *)&v75 + 1) = v10;
  v76 = (unsigned __int64)a4;
  v77.m256i_i64[0] = 8;
  *(_OWORD *)&v77.m256i_u64[1] = 0;
  v77.m256i_i64[3] = 8;
  memset(v78, 0, sizeof(v78));
  v86.m256i_i64[0] = (__int64)a3;
  v86.m256i_i64[1] = a4;
  if ( a4 != 6
    || a3->m128i_i32[0] ^ 0x6E65706F | a3->m128i_u16[2] ^ 0x6961
    && a3->m128i_i32[0] ^ 0x616D6961 | a3->m128i_u16[2] ^ 0x3169 )
  {
    *(_QWORD *)v95 = &v86;
    *(_QWORD *)&v95[8] = sub_140186EE0;
    v100 = 1;
    sub_1416ABFD0((char *)&v56 + 8, &unk_1419DE690, v95);
    *(_QWORD *)&v56 = 10;
    *(_OWORD *)&v95[80] = v61;
    *(_OWORD *)&v95[64] = v60;
    *(_OWORD *)&v95[48] = v59;
    *(_OWORD *)&v95[32] = v58;
    *(_OWORD *)&v95[16] = v57;
    *(_OWORD *)v95 = __PAIR128__(*((unsigned __int64 *)&v56 + 1), 10);
    *(_QWORD *)&v70 = 0;
    *((_QWORD *)&v70 + 1) = 1;
    v71 = nullptr;
    v86.m256i_i64[2] = 1610612768;
    v86.m256i_i64[0] = (__int64)&v70;
    v86.m256i_i64[1] = (__int64)&off_1419E0B60;
    if ( (unsigned __int8)sub_14104A7D0(v95, &v86) )
      sub_141939040(
        (unsigned int)aADisplayImplem_53,
        55,
        (unsigned int)&v98,
        (unsigned int)&unk_1419D7FE8,
        (__int64)&off_1419E29A8);
    v93 = *((__int64 **)&v70 + 1);
    v97 = v70;
    v11 = v71;
    v12 = v77.m256i_i64[1];
    if ( v77.m256i_i64[1] == *((_QWORD *)&v76 + 1) )
      sub_14190FDC0((char *)&v76 + 8);
    v13 = v77.m256i_i64[0];
    v14 = 3 * v12;
    *(_QWORD *)(v77.m256i_i64[0] + 8 * v14) = v97;
    *(_QWORD *)(v13 + 8 * v14 + 8) = v93;
    *(_QWORD *)(v13 + 8 * v14 + 16) = v11;
    v77.m256i_i64[1] = v12 + 1;
    v7[6] = v78[2];
    v7[5] = v78[1];
    v15 = v75;
    v16 = v76;
    v17 = *(_OWORD *)&v77.m256i_u64[2];
    v7[4] = v78[0];
    v7[3] = v17;
    v7[1] = v16;
    *v7 = v15;
    v7[2] = *(_OWORD *)v77.m256i_i8;
    v100 = 0;
    sub_1401954F0(v95);
  }
  else
  {
    v80 = a3;
    v100 = 1;
    sub_1401B7010(v95, a2);
    v67 = v7;
    v68 = *(_OWORD *)v95;
    v73 = *(_QWORD *)&v95[8] + 32LL * *(_QWORD *)&v95[16];
    v18 = 32LL * *(_QWORD *)&v95[16] - 32;
    v19 = (_QWORD *)(*(_QWORD *)&v95[8] + 40LL);
    for ( i = *(__int64 **)&v95[8]; i != (__int64 *)v73; i = v93 )
    {
      v93 = i + 4;
      v85 = *i;
      if ( v85 == -1 )
      {
        if ( (__int64 *)v73 != v93 )
        {
          v50 = v18 >> 5;
          do
          {
            v51 = *(v19 - 1);
            if ( v51 )
              sub_140001660(*v19, v51, 1);
            v19 += 4;
            --v50;
          }
          while ( v50 );
        }
        break;
      }
      v21 = i[2];
      v97 = i[1];
      sub_141695A00(v95, v97, v21);
      if ( *(_DWORD *)v95 == 2 )
      {
        if ( (v95[8] & 3u) - 2 >= 2 && (v95[8] & 3) != 0 )
        {
          --*(_QWORD *)&v95[8];
          v95[0] = 3;
          sub_1416BCB00(&v95[8]);
        }
      }
      else
      {
        sub_140231840((__int64)v95, v97, v21);
        if ( v95[104] == 0xFF )
        {
          v90 = *(_OWORD *)&v95[80];
          v89 = *(_OWORD *)&v95[64];
          v88 = *(_OWORD *)&v95[48];
          v87 = *(_OWORD *)&v95[32];
          v86 = *(__m256i *)v95;
          v81 = v97;
          v82 = v21;
          *(_QWORD *)&v70 = &v81;
          *((_QWORD *)&v70 + 1) = sub_14169F630;
          v71 = &v86;
          v72 = sub_14104A7D0;
          sub_1416ABFD0(&v65, &unk_1419D58EB, &v70);
          v25 = v77.m256i_i64[1];
          if ( v77.m256i_i64[1] == *((_QWORD *)&v76 + 1) )
            sub_14190FDC0((char *)&v76 + 8);
          v26 = v77.m256i_i64[0];
          v27 = 3 * v25;
          *(_QWORD *)(v77.m256i_i64[0] + 8 * v27 + 16) = v66;
          *(_OWORD *)(v26 + 8 * v27) = v65;
          v77.m256i_i64[1] = v25 + 1;
          sub_1401954F0(&v86);
        }
        else
        {
          v62 = *(_OWORD *)&v95[96];
          v61 = *(_OWORD *)&v95[80];
          v60 = *(_OWORD *)&v95[64];
          v59 = *(_OWORD *)&v95[48];
          v58 = *(_OWORD *)&v95[32];
          v57 = *(_OWORD *)&v95[16];
          v56 = *(_OWORD *)v95;
          sub_140251C90(&v86, &v56);
          if ( v86.m256i_i32[0] == -1 )
          {
            v28 = v86.m256i_i64[3];
            v92 = v86.m256i_i64[3];
            v91 = *(_OWORD *)&v86.m256i_u64[1];
            if ( v86.m256i_i64[3] > 7uLL )
            {
              *(_QWORD *)v95 = 0;
              *(_OWORD *)&v95[16] = 4u;
              *(_QWORD *)&v95[40] = 1;
              *(_QWORD *)&v95[48] = &unk_14193C9A8;
              *(_QWORD *)&v95[56] = 0;
              *(_QWORD *)&v95[72] = 0;
              *(_WORD *)&v95[88] = 0;
              v101 = 1;
              sub_14000B630(&v86, v95);
              v32 = v86.m256i_i64[1];
              if ( v86.m256i_i64[0] == -1 )
              {
                v94 = (volatile signed __int64 *)v86.m256i_i64[1];
                v36 = (__int64 *)sub_1401871F0(0);
                v37 = v32 + 128;
                v38 = *v36;
                if ( *v36 )
                {
                  if ( *(_QWORD *)(v38 + 272) == v32 )
                  {
                    *(_QWORD *)v95 = 0;
                    *(_QWORD *)&v95[8] = 8;
                    *(_QWORD *)&v95[16] = 0;
                    sub_14039A410(v95, *((_QWORD *)&v91 + 1), v28, v37);
                    v71 = *(__m256i **)&v95[16];
                    v70 = *(_OWORD *)v95;
                  }
                  else
                  {
                    sub_1418F5AF0(&v70, v32 + 128, v38, &v91);
                  }
                }
                else
                {
                  sub_140894050(&v70, &off_14193CBB0, &v91, v37);
                }
                v39 = *((_QWORD *)&v91 + 1);
                v40 = *((_QWORD *)&v70 + 1);
                v88 = 0;
                v86.m256i_i64[0] = *((_QWORD *)&v91 + 1);
                v69 = *((_QWORD *)&v91 + 1) + 104 * v92;
                v86.m256i_i64[1] = v69;
                v86.m256i_i64[2] = *((_QWORD *)&v70 + 1);
                v86.m256i_i64[3] = *((_QWORD *)&v70 + 1);
                *(_QWORD *)&v87 = v70;
                *((_QWORD *)&v87 + 1) = *((_QWORD *)&v70 + 1) + 72LL * (_QWORD)v71;
                if ( v92 )
                {
                  if ( v71 )
                  {
                    v41 = *((_QWORD *)&v70 + 1) + 72LL * (_QWORD)v71;
                    v42 = 104 * v92 - 104;
                    v43 = *((_QWORD *)&v70 + 1) + 72LL;
                    while ( 1 )
                    {
                      v44 = *(_QWORD *)(v43 - 72);
                      if ( v44 == -2 )
                      {
                        v49 = v39 + 104;
                        v40 = v43;
                        goto LABEL_82;
                      }
                      v74 = v43;
                      v45 = v43 - 72;
                      v46 = *(_OWORD *)(v43 - 72 + 8);
                      v47 = *(_OWORD *)(v43 - 72 + 24);
                      v48 = *(_OWORD *)(v43 - 72 + 40);
                      *(_OWORD *)&v95[56] = *(_OWORD *)(v43 - 72 + 56);
                      *(_OWORD *)&v95[40] = v48;
                      *(_OWORD *)&v95[24] = v47;
                      *(_OWORD *)&v95[8] = v46;
                      *(_QWORD *)v95 = v44;
                      v96 = v39;
                      sub_140253440(&v75, v39, v95, v80);
                      if ( !v42 )
                        break;
                      v39 = v96 + 104;
                      v42 -= 104;
                      v43 = v74 + 72;
                      v40 = v45 + 72;
                      if ( v45 + 72 == v41 )
                      {
                        v49 = v96 + 208;
                        v40 = v41;
                        goto LABEL_82;
                      }
                    }
                    v40 += 72;
                    v49 = v69;
                  }
                  else
                  {
                    v49 = *((_QWORD *)&v91 + 1) + 104LL;
                  }
LABEL_82:
                  v86.m256i_i64[0] = v49;
                  v86.m256i_i64[3] = v40;
                }
                sub_1403F9D20(&v86.m256i_u64[2]);
                sub_1411C79D0(&v94);
                if ( !_InterlockedDecrement64(v94) )
                {
                  v101 = 1;
                  sub_1411C66E0(&v94);
                }
                sub_1403FBEF0(&v91);
                if ( (_QWORD)v91 )
                  sub_140001660(*((_QWORD *)&v91 + 1), 104 * v91, 8);
              }
              else
              {
                v79 = *(_OWORD *)v86.m256i_i8;
                if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                {
                  v86.m256i_i64[0] = (__int64)&v79;
                  v86.m256i_i64[1] = (__int64)sub_1411C6B40;
                  *(_QWORD *)&v95[48] = 2;
                  *(_QWORD *)&v95[56] = aCodexmateLibCo_0;
                  *(_QWORD *)&v95[64] = 51;
                  *(_QWORD *)&v95[80] = &unk_1419E07EA;
                  *(_QWORD *)&v95[88] = &v86;
                  *(_QWORD *)v95 = 0;
                  *(_QWORD *)&v95[8] = aCodexmateLibCo_0;
                  *(_OWORD *)&v95[16] = 0x33u;
                  *(_QWORD *)&v95[32] = aSrcCoreRelayCo_0;
                  *(_QWORD *)&v95[40] = 41;
                  *(_QWORD *)&v95[72] = 0x4D400000001LL;
                  v99 = 1;
                  sub_1414D53A0(&v98, v95);
                }
                v33 = *((_QWORD *)&v91 + 1) + 104 * v28;
                v81 = *((_QWORD *)&v91 + 1);
                v83 = v91;
                v84 = v33;
                v34 = *((_QWORD *)&v91 + 1) + 104LL;
                while ( 1 )
                {
                  v35 = *(_QWORD *)(v34 - 104);
                  v90 = *(_OWORD *)(v34 - 16);
                  v89 = *(_OWORD *)(v34 - 32);
                  v88 = *(_OWORD *)(v34 - 48);
                  v87 = *(_OWORD *)(v34 - 64);
                  v86 = *(__m256i *)(v34 - 96);
                  if ( v35 == -1 )
                    break;
                  v96 = v34;
                  *(_QWORD *)v95 = v35;
                  *(_OWORD *)&v95[88] = v90;
                  *(_OWORD *)&v95[72] = v89;
                  *(_OWORD *)&v95[56] = v88;
                  *(_OWORD *)&v95[40] = v87;
                  *(__m256i *)&v95[8] = v86;
                  sub_14026C9A0(&v70, v95);
                  sub_140253440(&v75, v95, &v70, v80);
                  if ( v35 )
                    sub_140001660(*(_QWORD *)&v95[8], v35, 1);
                  if ( *(_QWORD *)&v95[48] != -1 && *(_QWORD *)&v95[48] )
                    sub_140001660(*(_QWORD *)&v95[56], *(_QWORD *)&v95[48], 1);
                  if ( *(_QWORD *)&v95[24] )
                    sub_140001660(*(_QWORD *)&v95[32], *(_QWORD *)&v95[24], 1);
                  if ( *(_QWORD *)&v95[80] != -1 && *(_QWORD *)&v95[80] )
                    sub_140001660(*(_QWORD *)&v95[88], *(_QWORD *)&v95[80], 1);
                  v34 = v96 + 104;
                  if ( v96 == v33 )
                  {
                    v34 = v33;
                    break;
                  }
                }
                v82 = v34;
                v99 = 0;
                sub_1403F9C40(&v81);
                if ( (unsigned int)v79 >= 2 && (BYTE8(v79) & 3u) - 2 >= 2 && (BYTE8(v79) & 3) != 0 )
                {
                  *(_QWORD *)&v95[8] = *((_QWORD *)&v79 + 1) - 1LL;
                  v95[0] = 3;
                  v101 = 0;
                  sub_1416BCB00(&v95[8]);
                }
              }
            }
            else
            {
              v29 = *((_QWORD *)&v91 + 1);
              v30 = *((_QWORD *)&v91 + 1) + 104 * v86.m256i_i64[3];
              v81 = *((_QWORD *)&v91 + 1);
              v83 = v91;
              v84 = v30;
              if ( v86.m256i_i64[3] )
              {
                v29 = *((_QWORD *)&v91 + 1) + 104LL;
                while ( 1 )
                {
                  v31 = *(_QWORD *)(v29 - 104);
                  v90 = *(_OWORD *)(v29 - 16);
                  v89 = *(_OWORD *)(v29 - 32);
                  v88 = *(_OWORD *)(v29 - 48);
                  v87 = *(_OWORD *)(v29 - 64);
                  v86 = *(__m256i *)(v29 - 96);
                  if ( v31 == -1 )
                    break;
                  v96 = v29;
                  *(_QWORD *)v95 = v31;
                  *(_OWORD *)&v95[88] = v90;
                  *(_OWORD *)&v95[72] = v89;
                  *(_OWORD *)&v95[56] = v88;
                  *(_OWORD *)&v95[40] = v87;
                  *(__m256i *)&v95[8] = v86;
                  sub_14026C9A0(&v70, v95);
                  sub_140253440(&v75, v95, &v70, v80);
                  if ( v31 )
                    sub_140001660(*(_QWORD *)&v95[8], v31, 1);
                  if ( *(_QWORD *)&v95[48] != -1 && *(_QWORD *)&v95[48] )
                    sub_140001660(*(_QWORD *)&v95[56], *(_QWORD *)&v95[48], 1);
                  if ( *(_QWORD *)&v95[24] )
                    sub_140001660(*(_QWORD *)&v95[32], *(_QWORD *)&v95[24], 1);
                  if ( *(_QWORD *)&v95[80] != -1 && *(_QWORD *)&v95[80] )
                    sub_140001660(*(_QWORD *)&v95[88], *(_QWORD *)&v95[80], 1);
                  v29 = v96 + 104;
                  if ( v96 == v30 )
                  {
                    v29 = v30;
                    break;
                  }
                }
              }
              v82 = v29;
              v101 = 0;
              sub_1403F9C40(&v81);
            }
            sub_1401923E0(&v56);
          }
          else
          {
            *(_OWORD *)&v95[80] = v90;
            *(_OWORD *)&v95[64] = v89;
            *(_OWORD *)&v95[48] = v88;
            *(_OWORD *)&v95[32] = v87;
            *(__m256i *)v95 = v86;
            v81 = v97;
            v82 = v21;
            *(_QWORD *)&v70 = &v81;
            *((_QWORD *)&v70 + 1) = sub_14169F630;
            v71 = (__m256i *)v95;
            v72 = sub_14104A7D0;
            sub_1416ABFD0(&v63, &unk_1419D58EB, &v70);
            v22 = v77.m256i_i64[1];
            if ( v77.m256i_i64[1] == *((_QWORD *)&v76 + 1) )
              sub_14190FDC0((char *)&v76 + 8);
            v23 = v77.m256i_i64[0];
            v24 = 3 * v22;
            *(_QWORD *)(v77.m256i_i64[0] + 8 * v24 + 16) = v64;
            *(_OWORD *)(v23 + 8 * v24) = v63;
            v77.m256i_i64[1] = v22 + 1;
            sub_1401954F0(v95);
            sub_1401923E0(&v56);
          }
        }
      }
      if ( v85 )
        sub_140001660(v97, v85, 1);
      v18 -= 32LL;
      v19 += 4;
    }
    if ( (_QWORD)v68 )
      sub_140001660(*((_QWORD *)&v68 + 1), 32 * v68, 8);
    v7 = v67;
    v67[6] = v78[2];
    v7[5] = v78[1];
    v7[4] = v78[0];
    v52 = v75;
    v53 = v76;
    v54 = *(_OWORD *)v77.m256i_i8;
    v7[3] = *(_OWORD *)&v77.m256i_u64[2];
    v7[2] = v54;
    v7[1] = v53;
    *v7 = v52;
  }
  return v7;
}
