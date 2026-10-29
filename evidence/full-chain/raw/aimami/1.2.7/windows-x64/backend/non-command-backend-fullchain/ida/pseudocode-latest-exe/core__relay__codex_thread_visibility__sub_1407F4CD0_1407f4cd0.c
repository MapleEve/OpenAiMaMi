// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407f4cd0 | successor of pre-update 0x14024dbf0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
_OWORD *__fastcall sub_1407F4CD0(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  _OWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r14
  _BYTE *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  unsigned __int64 v18; // r12
  _QWORD *v19; // r13
  __int64 *i; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r15
  unsigned __int64 v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // r14
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 *v37; // rax
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rdi
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r14
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdi
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int64 v50; // rdx
  unsigned __int128 v51; // rax
  unsigned __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // rdi
  unsigned __int64 v55; // r12
  __int64 v56; // rdx
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __int64 v61; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v62[24]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v63; // [rsp+48h] [rbp-38h]
  __int128 v64; // [rsp+58h] [rbp-28h]
  __int128 v65; // [rsp+68h] [rbp-18h]
  __int128 v66; // [rsp+78h] [rbp-8h]
  __int64 v67; // [rsp+88h] [rbp+8h]
  char v68; // [rsp+90h] [rbp+10h]
  _BYTE v69[7]; // [rsp+91h] [rbp+11h]
  __int64 v70; // [rsp+98h] [rbp+18h]
  _QWORD *v71; // [rsp+A0h] [rbp+20h]
  __int64 v72; // [rsp+A8h] [rbp+28h]
  __int64 v73; // [rsp+B0h] [rbp+30h]
  _QWORD v74[2]; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v75; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v76; // [rsp+D8h] [rbp+58h]
  __int128 v77; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v78; // [rsp+F0h] [rbp+70h]
  _OWORD *v79; // [rsp+F8h] [rbp+78h]
  __int128 v80; // [rsp+100h] [rbp+80h]
  __int64 v81; // [rsp+110h] [rbp+90h]
  __int64 v82; // [rsp+118h] [rbp+98h]
  __int128 v83; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE *v84; // [rsp+130h] [rbp+B0h]
  __int64 (__fastcall *v85)(_QWORD, _QWORD); // [rsp+138h] [rbp+B8h]
  __int64 v86; // [rsp+168h] [rbp+E8h]
  __int128 v87; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v88; // [rsp+180h] [rbp+100h] BYREF
  __m256i v89; // [rsp+190h] [rbp+110h]
  _OWORD v90[3]; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v91; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v92; // [rsp+1F0h] [rbp+170h]
  __int64 v93; // [rsp+200h] [rbp+180h]
  __int64 v94; // [rsp+208h] [rbp+188h]
  __int128 v95; // [rsp+210h] [rbp+190h] BYREF
  _BYTE *v96; // [rsp+220h] [rbp+1A0h]
  __int64 v97; // [rsp+228h] [rbp+1A8h]
  __int128 v98; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v99; // [rsp+240h] [rbp+1C0h]
  __m256i v100; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v101; // [rsp+270h] [rbp+1F0h]
  __int128 v102; // [rsp+280h] [rbp+200h]
  __int128 v103; // [rsp+290h] [rbp+210h]
  __int128 v104; // [rsp+2A0h] [rbp+220h]
  __int128 v105; // [rsp+2B0h] [rbp+230h] BYREF
  _BYTE *v106; // [rsp+2C0h] [rbp+240h]
  __int64 v107; // [rsp+2C8h] [rbp+248h]
  __int64 *v108; // [rsp+2D8h] [rbp+258h]
  _BYTE v109[104]; // [rsp+2E0h] [rbp+260h] BYREF
  char v110; // [rsp+348h] [rbp+2C8h]
  _BYTE v111[7]; // [rsp+349h] [rbp+2C9h]
  __int128 v112; // [rsp+350h] [rbp+2D0h]
  __int64 v113; // [rsp+360h] [rbp+2E0h]
  __int64 v114; // [rsp+368h] [rbp+2E8h]
  _BYTE v115[2]; // [rsp+374h] [rbp+2F4h] BYREF
  char v116; // [rsp+376h] [rbp+2F6h]
  char v117; // [rsp+377h] [rbp+2F7h]
  __int64 v118; // [rsp+378h] [rbp+2F8h]

  v118 = -2;
  if ( a4 < 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v7 = a1;
  if ( a4 )
  {
    v8 = a2;
    nullsub_1(a1, a2);
    v5 = 1;
    v9 = sub_140001650(a4, 1);
    if ( !v9 )
LABEL_3:
      sub_14196B2DB(v5, a4);
    v10 = v9;
    sub_1419234B0(v9, a3, a4);
    a2 = v8;
  }
  else
  {
    v10 = 1;
  }
  *(_QWORD *)&v87 = a4;
  *((_QWORD *)&v87 + 1) = v10;
  v88 = (unsigned __int64)a4;
  v89.m256i_i64[0] = 8;
  *(_OWORD *)&v89.m256i_u64[1] = 0;
  v89.m256i_i64[3] = 8;
  memset(v90, 0, sizeof(v90));
  v100.m256i_i64[0] = a3;
  v100.m256i_i64[1] = a4;
  if ( a4 != 6
    || *(_DWORD *)a3 ^ 0x6E65706F | *(unsigned __int16 *)(a3 + 4) ^ 0x6961
    && *(_DWORD *)a3 ^ 0x616D6961 | *(unsigned __int16 *)(a3 + 4) ^ 0x3169 )
  {
    *(_QWORD *)v109 = &v100;
    *(_QWORD *)&v109[8] = sub_140191200;
    v116 = 1;
    sub_1416DAFA0(v62, &unk_141A4A9C6, v109);
    v61 = 10;
    *(_OWORD *)&v109[80] = v66;
    *(_OWORD *)&v109[64] = v65;
    *(_OWORD *)&v109[48] = v64;
    *(_OWORD *)&v109[32] = v63;
    *(_OWORD *)&v109[16] = *(_OWORD *)&v62[8];
    *(_OWORD *)v109 = __PAIR128__(*(unsigned __int64 *)v62, 10);
    *(_QWORD *)&v83 = 0;
    *((_QWORD *)&v83 + 1) = 1;
    v84 = nullptr;
    v100.m256i_i64[2] = 1610612768;
    v100.m256i_i64[0] = (__int64)&v83;
    v100.m256i_i64[1] = (__int64)&off_141A49990;
    if ( (unsigned __int8)sub_140D76130(v109, &v100) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_59,
        55,
        (unsigned int)v115,
        (unsigned int)&unk_141A481A8,
        (__int64)&off_141A4E498);
    v108 = *((__int64 **)&v83 + 1);
    v114 = v83;
    v11 = v84;
    v12 = v89.m256i_i64[1];
    if ( v89.m256i_i64[1] == *((_QWORD *)&v88 + 1) )
      sub_141939F90((char *)&v88 + 8);
    v13 = v89.m256i_i64[0];
    v14 = 3 * v12;
    *(_QWORD *)(v89.m256i_i64[0] + 8 * v14) = v114;
    *(_QWORD *)(v13 + 8 * v14 + 8) = v108;
    *(_QWORD *)(v13 + 8 * v14 + 16) = v11;
    v89.m256i_i64[1] = v12 + 1;
    v7[6] = v90[2];
    v7[5] = v90[1];
    v15 = v87;
    v16 = v88;
    v17 = *(_OWORD *)&v89.m256i_u64[2];
    v7[4] = v90[0];
    v7[3] = v17;
    v7[1] = v16;
    *v7 = v15;
    v7[2] = *(_OWORD *)v89.m256i_i8;
    v116 = 0;
    sub_140778C60(v109);
  }
  else
  {
    v93 = a3;
    v116 = 1;
    sub_140A2C460(v109, a2);
    v79 = v7;
    v70 = *(_QWORD *)&v109[8];
    v80 = *(_OWORD *)v109;
    v72 = *(_QWORD *)v109;
    v86 = *(_QWORD *)&v109[8] + 32LL * *(_QWORD *)&v109[16];
    v73 = v86;
    v18 = 32LL * *(_QWORD *)&v109[16] - 32;
    v19 = (_QWORD *)(*(_QWORD *)&v109[8] + 40LL);
    for ( i = *(__int64 **)&v109[8]; i != (__int64 *)v86; i = v108 )
    {
      v108 = i + 4;
      v71 = i + 4;
      if ( *i == -1 )
      {
        if ( (__int64 *)v86 != v108 )
        {
          v55 = v18 >> 5;
          do
          {
            v56 = *(v19 - 1);
            if ( v56 )
              sub_140001660(*v19, v56, 1);
            v19 += 4;
            --v55;
          }
          while ( v55 );
        }
        break;
      }
      v97 = *i;
      v21 = i[2];
      v114 = i[1];
      sub_1416C49D0(v109, v114, v21);
      if ( *(_DWORD *)v109 == 2 )
      {
        if ( (v109[8] & 3u) - 2 >= 2 && (v109[8] & 3) != 0 )
        {
          --*(_QWORD *)&v109[8];
          v109[0] = 3;
          sub_1416EBAD0(&v109[8]);
        }
      }
      else
      {
        sub_1407D83C0((__int64)v109, v114, v21, 32769);
        if ( v110 == -1 )
        {
          v102 = *(_OWORD *)&v109[48];
          v101 = *(_OWORD *)&v109[32];
          v100 = *(__m256i *)v109;
          v74[0] = &v100;
          v74[1] = sub_14142D4D0;
          sub_1416DAFA0(&v83, &unk_141A47418, v74);
          v105 = v83;
          v106 = v84;
          sub_1407785F0(&v100);
          v95 = v105;
          v96 = v106;
          *(_QWORD *)v109 = 10;
          *(_QWORD *)&v109[24] = v106;
          *(_OWORD *)&v109[8] = v105;
          *(_QWORD *)&v83 = v114;
          *((_QWORD *)&v83 + 1) = v21;
          v100.m256i_i64[0] = (__int64)&v83;
          v100.m256i_i64[1] = (__int64)sub_1416CE600;
          v100.m256i_i64[2] = (__int64)v109;
          v100.m256i_i64[3] = (__int64)sub_140D76130;
          sub_1416DAFA0(&v77, &unk_141A46156, &v100);
          v25 = v89.m256i_i64[1];
          if ( v89.m256i_i64[1] == *((_QWORD *)&v88 + 1) )
            sub_141939F90((char *)&v88 + 8);
          v26 = v89.m256i_i64[0];
          v27 = 3 * v25;
          *(_QWORD *)(v89.m256i_i64[0] + 8 * v27 + 16) = v78;
          *(_OWORD *)(v26 + 8 * v27) = v77;
          v89.m256i_i64[1] = v25 + 1;
          sub_140778C60(v109);
        }
        else
        {
          v106 = *(_BYTE **)&v109[24];
          v105 = *(_OWORD *)&v109[8];
          v63 = *(_OWORD *)&v109[32];
          v64 = *(_OWORD *)&v109[48];
          v65 = *(_OWORD *)&v109[64];
          v66 = *(_OWORD *)&v109[80];
          *(_DWORD *)&v69[3] = *(_DWORD *)&v111[3];
          *(_DWORD *)v69 = *(_DWORD *)v111;
          v92 = *(_QWORD *)&v109[24];
          v91 = *(_OWORD *)&v109[8];
          v96 = *(_BYTE **)&v109[24];
          v95 = *(_OWORD *)&v109[8];
          v61 = *(_QWORD *)v109;
          *(_QWORD *)&v62[16] = *(_QWORD *)&v109[24];
          *(_OWORD *)v62 = *(_OWORD *)&v109[8];
          v67 = *(_QWORD *)&v109[96];
          v68 = v110;
          sub_1407F8DF0((__int64)&v100, (__int64)&v61);
          if ( v100.m256i_i32[0] == -1 )
          {
            v28 = v100.m256i_i64[3];
            v99 = v100.m256i_i64[3];
            v98 = *(_OWORD *)&v100.m256i_u64[1];
            v29 = v18;
            if ( v100.m256i_i64[3] > 7uLL )
            {
              *(_QWORD *)v109 = 0;
              *(_OWORD *)&v109[16] = 4u;
              *(_QWORD *)&v109[40] = 1;
              *(_QWORD *)&v109[48] = &unk_141A04A50;
              *(_QWORD *)&v109[56] = 0;
              *(_QWORD *)&v109[72] = 0;
              *(_WORD *)&v109[88] = 0;
              v117 = 1;
              sub_140199620(&v100, v109);
              v33 = v100.m256i_i64[1];
              if ( v100.m256i_i64[0] == -1 )
              {
                *(_QWORD *)&v95 = v100.m256i_i64[1];
                v37 = (__int64 *)sub_140236F10(0);
                v38 = v33 + 128;
                v39 = *v37;
                if ( *v37 )
                {
                  if ( *(_QWORD *)(v39 + 272) == v33 )
                  {
                    *(_QWORD *)v109 = 0;
                    *(_QWORD *)&v109[8] = 8;
                    *(_QWORD *)&v109[16] = 0;
                    sub_1401D3F90(v109, *((_QWORD *)&v98 + 1), v28, v38);
                    v84 = *(_BYTE **)&v109[16];
                    v83 = *(_OWORD *)v109;
                  }
                  else
                  {
                    sub_141938340(&v83, v33 + 128, v39, &v98);
                  }
                }
                else
                {
                  sub_140AA1350(&v83, &off_141A04C20, &v98, v38);
                }
                v40 = *((_QWORD *)&v83 + 1);
                v102 = 0;
                v100.m256i_i64[0] = *((_QWORD *)&v98 + 1);
                v100.m256i_i64[1] = *((_QWORD *)&v98 + 1) + 104 * v99;
                v100.m256i_i64[2] = *((_QWORD *)&v83 + 1);
                v100.m256i_i64[3] = *((_QWORD *)&v83 + 1);
                *(_QWORD *)&v101 = v83;
                *((_QWORD *)&v112 + 1) = *((_QWORD *)&v83 + 1) + 72LL * (_QWORD)v84;
                *((_QWORD *)&v101 + 1) = *((_QWORD *)&v112 + 1);
                v41 = *((_QWORD *)&v83 + 1);
                v81 = v83;
                if ( v99 )
                {
                  v42 = *((_QWORD *)&v98 + 1);
                  if ( v84 )
                  {
                    v82 = *((_QWORD *)&v98 + 1) + 104 * v99;
                    v43 = 104 * v99 - 104;
                    v41 = *((_QWORD *)&v83 + 1) + 72LL;
                    v94 = *((_QWORD *)&v83 + 1);
                    v44 = *((_QWORD *)&v83 + 1);
                    while ( 1 )
                    {
                      v45 = *(_QWORD *)(v41 - 72);
                      if ( v45 == -2 )
                      {
                        v50 = v42 + 104;
                        goto LABEL_87;
                      }
                      v113 = v41;
                      v46 = v41 - 72;
                      v47 = *(_OWORD *)(v41 - 72 + 8);
                      v48 = *(_OWORD *)(v41 - 72 + 24);
                      v49 = *(_OWORD *)(v41 - 72 + 40);
                      *(_OWORD *)&v109[56] = *(_OWORD *)(v41 - 72 + 56);
                      *(_OWORD *)&v109[40] = v49;
                      *(_OWORD *)&v109[24] = v48;
                      *(_OWORD *)&v109[8] = v47;
                      *(_QWORD *)v109 = v45;
                      *(_QWORD *)&v112 = v42;
                      sub_1407FA4D0(&v87, v42, v109, v93);
                      if ( !v43 )
                        break;
                      v42 = v112 + 104;
                      v43 -= 104;
                      v41 = v113 + 72;
                      v44 = v46 + 72;
                      if ( v46 + 72 == *((_QWORD *)&v112 + 1) )
                      {
                        v50 = v112 + 208;
                        v41 = *((_QWORD *)&v112 + 1);
LABEL_87:
                        v40 = v94;
                        goto LABEL_89;
                      }
                    }
                    v41 = v44 + 72;
                    v40 = v94;
                    v50 = v82;
                  }
                  else
                  {
                    v50 = *((_QWORD *)&v98 + 1) + 104LL;
                    v41 = *((_QWORD *)&v83 + 1);
                  }
LABEL_89:
                  v100.m256i_i64[0] = v50;
                  v100.m256i_i64[3] = v41;
                }
                v51 = 0xE38E38E38E38E38FuLL * (unsigned __int128)(unsigned __int64)(*((_QWORD *)&v112 + 1) - v41);
                if ( *((_QWORD *)&v112 + 1) != v41 )
                {
                  v52 = (*((_QWORD *)&v112 + 1) - v41) / 0x48uLL;
                  do
                  {
                    v53 = v41;
                    sub_1401B1550(v41);
                    v41 = v53 + 72;
                    --v52;
                  }
                  while ( v52 );
                }
                if ( v81 )
                  sub_140001660(v40, 72 * v81, 8);
                sub_1411EE6A0(&v95, *((_QWORD *)&v51 + 1));
                if ( !_InterlockedDecrement64((volatile signed __int64 *)v95) )
                {
                  v117 = 1;
                  sub_1411ED250(&v95);
                }
                v54 = *((_QWORD *)&v98 + 1);
                sub_1401B3250(*((__int64 *)&v98 + 1), v99);
                if ( (_QWORD)v98 )
                  sub_140001660(v54, 104 * v98, 8);
              }
              else
              {
                v91 = *(_OWORD *)v100.m256i_i8;
                if ( *(_QWORD *)off_14223FF10 >= 2u )
                {
                  v100.m256i_i64[0] = (__int64)&v91;
                  v100.m256i_i64[1] = (__int64)sub_1411ED6B0;
                  *(_QWORD *)&v109[48] = 2;
                  *(_QWORD *)&v109[56] = aCodexmateLibCo_11;
                  *(_QWORD *)&v109[64] = 51;
                  *(_QWORD *)&v109[80] = &unk_141A4CB8B;
                  *(_QWORD *)&v109[88] = &v100;
                  *(_QWORD *)v109 = 0;
                  *(_QWORD *)&v109[8] = aCodexmateLibCo_11;
                  *(_OWORD *)&v109[16] = 0x33u;
                  *(_QWORD *)&v109[32] = aSrcCoreRelayCo_0;
                  *(_QWORD *)&v109[40] = 41;
                  *(_QWORD *)&v109[72] = 0x4D400000001LL;
                  v115[1] = 1;
                  sub_141503E20(v115, v109);
                }
                v34 = *((_QWORD *)&v98 + 1) + 104 * v28;
                *(_QWORD *)&v105 = *((_QWORD *)&v98 + 1);
                v112 = v98;
                v106 = (_BYTE *)v98;
                v107 = v34;
                v35 = *((_QWORD *)&v98 + 1) + 104LL;
                while ( 1 )
                {
                  v36 = *(_QWORD *)(v35 - 104);
                  v104 = *(_OWORD *)(v35 - 16);
                  v103 = *(_OWORD *)(v35 - 32);
                  v102 = *(_OWORD *)(v35 - 48);
                  v101 = *(_OWORD *)(v35 - 64);
                  v100 = *(__m256i *)(v35 - 96);
                  if ( v36 == -1 )
                    break;
                  v113 = v35;
                  *(_QWORD *)v109 = v36;
                  *(_OWORD *)&v109[88] = v104;
                  *(_OWORD *)&v109[72] = v103;
                  *(_OWORD *)&v109[56] = v102;
                  *(_OWORD *)&v109[40] = v101;
                  *(__m256i *)&v109[8] = v100;
                  sub_1408139D0(&v83, v109);
                  sub_1407FA4D0(&v87, v109, &v83, v93);
                  if ( v36 )
                    sub_140001660(*(_QWORD *)&v109[8], v36, 1);
                  v18 = v29;
                  if ( *(_QWORD *)&v109[48] != -1 && *(_QWORD *)&v109[48] )
                    sub_140001660(*(_QWORD *)&v109[56], *(_QWORD *)&v109[48], 1);
                  if ( *(_QWORD *)&v109[24] )
                    sub_140001660(*(_QWORD *)&v109[32], *(_QWORD *)&v109[24], 1);
                  if ( *(_QWORD *)&v109[80] != -1 && *(_QWORD *)&v109[80] )
                    sub_140001660(*(_QWORD *)&v109[88], *(_QWORD *)&v109[80], 1);
                  v35 = v113 + 104;
                  if ( v113 == v34 )
                  {
                    v35 = v34;
                    break;
                  }
                }
                *((_QWORD *)&v105 + 1) = v35;
                sub_1401B3250(v35, 0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)(v34 - v35) >> 3));
                if ( (_QWORD)v112 )
                  sub_140001660(*((_QWORD *)&v112 + 1), 104 * v112, 8);
                if ( (unsigned int)v91 >= 2 && (BYTE8(v91) & 3u) - 2 >= 2 && (BYTE8(v91) & 3) != 0 )
                {
                  *(_QWORD *)&v109[8] = *((_QWORD *)&v91 + 1) - 1LL;
                  v109[0] = 3;
                  v117 = 0;
                  sub_1416EBAD0(&v109[8]);
                }
              }
            }
            else
            {
              v30 = *((_QWORD *)&v98 + 1) + 104 * v100.m256i_i64[3];
              *(_QWORD *)&v105 = *((_QWORD *)&v98 + 1);
              *((_QWORD *)&v112 + 1) = v98;
              v106 = (_BYTE *)v98;
              v107 = v30;
              *(_QWORD *)&v112 = *((_QWORD *)&v98 + 1);
              v31 = *((_QWORD *)&v98 + 1);
              if ( v100.m256i_i64[3] )
              {
                v31 = v112 + 104;
                while ( 1 )
                {
                  v32 = *(_QWORD *)(v31 - 104);
                  v104 = *(_OWORD *)(v31 - 16);
                  v103 = *(_OWORD *)(v31 - 32);
                  v102 = *(_OWORD *)(v31 - 48);
                  v101 = *(_OWORD *)(v31 - 64);
                  v100 = *(__m256i *)(v31 - 96);
                  if ( v32 == -1 )
                    break;
                  v113 = v31;
                  *(_QWORD *)v109 = v32;
                  *(_OWORD *)&v109[88] = v104;
                  *(_OWORD *)&v109[72] = v103;
                  *(_OWORD *)&v109[56] = v102;
                  *(_OWORD *)&v109[40] = v101;
                  *(__m256i *)&v109[8] = v100;
                  sub_1408139D0(&v83, v109);
                  sub_1407FA4D0(&v87, v109, &v83, v93);
                  if ( v32 )
                    sub_140001660(*(_QWORD *)&v109[8], v32, 1);
                  v18 = v29;
                  if ( *(_QWORD *)&v109[48] != -1 && *(_QWORD *)&v109[48] )
                    sub_140001660(*(_QWORD *)&v109[56], *(_QWORD *)&v109[48], 1);
                  if ( *(_QWORD *)&v109[24] )
                    sub_140001660(*(_QWORD *)&v109[32], *(_QWORD *)&v109[24], 1);
                  if ( *(_QWORD *)&v109[80] != -1 && *(_QWORD *)&v109[80] )
                    sub_140001660(*(_QWORD *)&v109[88], *(_QWORD *)&v109[80], 1);
                  v31 = v113 + 104;
                  if ( v113 == v30 )
                  {
                    v31 = v30;
                    break;
                  }
                }
              }
              *((_QWORD *)&v105 + 1) = v31;
              sub_1401B3250(v31, 0x4EC4EC4EC4EC4EC5LL * ((unsigned __int64)(v30 - v31) >> 3));
              if ( *((_QWORD *)&v112 + 1) )
                sub_140001660(v112, 104LL * *((_QWORD *)&v112 + 1), 8);
            }
            sub_140777BC0(&v61);
          }
          else
          {
            *(_OWORD *)&v109[80] = v104;
            *(_OWORD *)&v109[64] = v103;
            *(_OWORD *)&v109[48] = v102;
            *(_OWORD *)&v109[32] = v101;
            *(__m256i *)v109 = v100;
            *(_QWORD *)&v105 = v114;
            *((_QWORD *)&v105 + 1) = v21;
            *(_QWORD *)&v83 = &v105;
            *((_QWORD *)&v83 + 1) = sub_1416CE600;
            v84 = v109;
            v85 = sub_140D76130;
            sub_1416DAFA0(&v75, &unk_141A46156, &v83);
            v22 = v89.m256i_i64[1];
            if ( v89.m256i_i64[1] == *((_QWORD *)&v88 + 1) )
              sub_141939F90((char *)&v88 + 8);
            v23 = v89.m256i_i64[0];
            v24 = 3 * v22;
            *(_QWORD *)(v89.m256i_i64[0] + 8 * v24 + 16) = v76;
            *(_OWORD *)(v23 + 8 * v24) = v75;
            v89.m256i_i64[1] = v22 + 1;
            sub_140778C60(v109);
            sub_140777BC0(&v61);
          }
        }
      }
      if ( v97 )
        sub_140001660(v114, v97, 1);
      v18 -= 32LL;
      v19 += 4;
    }
    if ( (_QWORD)v80 )
      sub_140001660(*((_QWORD *)&v80 + 1), 32 * v80, 8);
    v7 = v79;
    v79[6] = v90[2];
    v7[5] = v90[1];
    v7[4] = v90[0];
    v57 = v87;
    v58 = v88;
    v59 = *(_OWORD *)v89.m256i_i8;
    v7[3] = *(_OWORD *)&v89.m256i_u64[2];
    v7[2] = v59;
    v7[1] = v58;
    *v7 = v57;
  }
  return v7;
}
