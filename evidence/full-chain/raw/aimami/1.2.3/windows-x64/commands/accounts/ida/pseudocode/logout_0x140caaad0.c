// module: codexmate_lib/commands/accounts
// addr: 0x140caaad0
// name: logout
// win 1.2.1 | module src/commands/accounts.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = logout | mapped via command-name string xref (win-native, ground-truth)
char __fastcall logout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // r13
  unsigned __int64 v9; // r15
  __int8 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rdx
  __m128i v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  char v22; // of
  __int64 v23; // r15
  volatile signed __int64 *v24; // rbx
  __int64 v25; // rt0
  volatile signed __int64 *v26; // r14
  __int64 v27; // rt0
  _BYTE *v28; // r12
  __int64 v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdi
  __m128i v37; // xmm0
  __int64 v38; // rcx
  const char *v39; // rax
  __int64 v40; // rdx
  const char *v41; // rbx
  __int64 v42; // r14
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r15
  __int64 v46; // rsi
  unsigned __int64 v47; // rbx
  __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int8 v52; // si
  __int64 v53; // rcx
  __int64 v54; // r13
  char v55; // al
  _BYTE *v56; // r13
  __m128i v57; // xmm1
  __int64 v58; // r14
  __int64 v59; // r14
  __m128i si128; // xmm1
  __m128i v61; // xmm1
  __int128 v62; // xmm1
  _BYTE *v63; // rdx
  __int64 v64; // rdi
  const __m128i *v65; // rdx
  __int64 v66; // rbx
  _BYTE *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // rsi
  __int64 v71; // rsi
  __int64 v72; // rax
  char v73; // cl
  char result; // al
  __int64 v75; // rcx
  __m128i v76; // xmm0
  __int64 v77; // r8
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 *v83; // rcx
  __int64 *v84; // r13
  __int64 v85; // rdi
  __int64 v86; // rdx
  _QWORD *v87; // rdi
  unsigned __int64 v88; // [rsp+20h] [rbp-60h]
  __m128i v89; // [rsp+30h] [rbp-50h] BYREF
  __int64 v90; // [rsp+40h] [rbp-40h]
  __int64 v91; // [rsp+48h] [rbp-38h]
  _BYTE v92[24]; // [rsp+50h] [rbp-30h]
  __m128i v93; // [rsp+68h] [rbp-18h] BYREF
  __int64 v94; // [rsp+78h] [rbp-8h]
  __int128 v95; // [rsp+370h] [rbp+2F0h]
  __int64 v96; // [rsp+380h] [rbp+300h]
  __int64 v97; // [rsp+388h] [rbp+308h] BYREF
  __int64 v98; // [rsp+390h] [rbp+310h]
  __int64 v99; // [rsp+398h] [rbp+318h]
  __m256i v100; // [rsp+410h] [rbp+390h] BYREF
  __int64 v101; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v102; // [rsp+438h] [rbp+3B8h]
  __m128i v103; // [rsp+448h] [rbp+3C8h]
  __int128 v104; // [rsp+458h] [rbp+3D8h]
  __int128 v105; // [rsp+468h] [rbp+3E8h]
  __int128 v106; // [rsp+478h] [rbp+3F8h]
  __int128 v107; // [rsp+488h] [rbp+408h]
  __m128i v108; // [rsp+498h] [rbp+418h]
  __int64 v109; // [rsp+740h] [rbp+6C0h]
  __int64 v110; // [rsp+748h] [rbp+6C8h]
  __int64 v111; // [rsp+758h] [rbp+6D8h]
  __int64 v112; // [rsp+760h] [rbp+6E0h]
  __int64 v113; // [rsp+788h] [rbp+708h]
  _QWORD v114[5]; // [rsp+790h] [rbp+710h] BYREF
  __m128i v115; // [rsp+7B8h] [rbp+738h]
  __m128i v116; // [rsp+7C8h] [rbp+748h]
  __int64 v117; // [rsp+7D8h] [rbp+758h]
  __int128 v118; // [rsp+7E0h] [rbp+760h]
  __m128i v119; // [rsp+7F0h] [rbp+770h] BYREF
  __int128 v120; // [rsp+800h] [rbp+780h]
  __int128 v121; // [rsp+810h] [rbp+790h]
  __int128 v122; // [rsp+820h] [rbp+7A0h]
  __int128 v123; // [rsp+830h] [rbp+7B0h]
  __m128i v124; // [rsp+840h] [rbp+7C0h] BYREF
  __m128i v125; // [rsp+850h] [rbp+7D0h] BYREF
  __m128i v126; // [rsp+860h] [rbp+7E0h] BYREF
  __int64 v127; // [rsp+870h] [rbp+7F0h]
  _QWORD v128[2]; // [rsp+878h] [rbp+7F8h] BYREF
  __int64 v129; // [rsp+888h] [rbp+808h] BYREF
  __int8 v130; // [rsp+890h] [rbp+810h]
  int v131; // [rsp+891h] [rbp+811h]
  __int16 v132; // [rsp+895h] [rbp+815h]
  char v133; // [rsp+897h] [rbp+817h]
  __int64 v134; // [rsp+898h] [rbp+818h]
  __int64 v135; // [rsp+8A0h] [rbp+820h]
  __int64 v136; // [rsp+8A8h] [rbp+828h]
  __m256i v137; // [rsp+8B0h] [rbp+830h]
  __int64 v138; // [rsp+8D0h] [rbp+850h]
  __m256i v139; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v140; // [rsp+900h] [rbp+880h]
  __int64 v141; // [rsp+908h] [rbp+888h]
  __m256i v142; // [rsp+910h] [rbp+890h] BYREF
  __int64 v143; // [rsp+930h] [rbp+8B0h]
  __m128i v144; // [rsp+940h] [rbp+8C0h] BYREF
  __m128i v145; // [rsp+950h] [rbp+8D0h] BYREF
  __int64 v146; // [rsp+960h] [rbp+8E0h]
  __int64 v147; // [rsp+968h] [rbp+8E8h]
  __int64 v148; // [rsp+970h] [rbp+8F0h]
  __int64 *v149; // [rsp+980h] [rbp+900h]
  __int64 v150; // [rsp+988h] [rbp+908h]
  char v151; // [rsp+997h] [rbp+917h] BYREF
  _BYTE *v152; // [rsp+998h] [rbp+918h]
  _BYTE *v153; // [rsp+9A0h] [rbp+920h]
  __int64 v154; // [rsp+9A8h] [rbp+928h]
  __int64 *v155; // [rsp+9B0h] [rbp+930h]
  __int64 v156; // [rsp+9B8h] [rbp+938h]
  _BYTE *v157; // [rsp+9C0h] [rbp+940h]
  _BYTE *v158; // [rsp+9C8h] [rbp+948h]
  char v159; // [rsp+9D7h] [rbp+957h]
  __int64 v160; // [rsp+9D8h] [rbp+958h]
  __int64 v161; // [rsp+9E0h] [rbp+960h]

  v161 = -2;
  v4 = a2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 8480);
  v160 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8481) = 257;
      *(_BYTE *)(a1 + 8483) = 1;
      v7 = a1 + 4432;
      sub_141684120(a1 + 4432, a1 + 392, 4040);
      switch ( *(_BYTE *)(v5 + 8464) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_96;
        case 2:
          goto LABEL_95;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 4432;
      switch ( *(_BYTE *)(a1 + 8464) )
      {
        case 0:
LABEL_4:
          v8 = (__int64 *)(v5 + 4952);
          *(_QWORD *)&v92[16] = 0;
          v89.m128i_i64[0] = (__int64)aLogout;
          v89.m128i_i64[1] = 6;
          v90 = (__int64)aApp_2;
          v91 = 3;
          v156 = v7;
          *(_QWORD *)v92 = v7;
          *(_QWORD *)&v92[8] = v8;
          sub_1401C3650((__int64)&v100, (__int64)&v89);
          v9 = ((unsigned __int64)((v100.m256i_u8[15] << 16)
                                 | (unsigned int)*(unsigned __int16 *)((char *)&v100.m256i_u16[6] + 1)) << 32)
             | *(unsigned int *)((char *)&v100.m256i_u32[2] + 1);
          v10 = v100.m256i_i8[8];
          v11 = v100.m256i_i64[3];
          v12 = v100.m256i_i64[2];
          v13 = v101;
          if ( v100.m256i_i64[0] != -1 )
          {
            v124 = v108;
            v123 = v107;
            v122 = v106;
            v121 = v105;
            v120 = v104;
            v119 = v103;
            v118 = v102;
            v5 = v160;
            v14 = v160 + 4976;
            *(_QWORD *)(v160 + 4976) = v100.m256i_i64[0];
            *(_BYTE *)(v5 + 4984) = v10;
            *(_BYTE *)(v5 + 4991) = BYTE6(v9);
            *(_WORD *)(v5 + 4989) = WORD2(v9);
            *(_DWORD *)(v5 + 4985) = v9;
            *(_QWORD *)(v5 + 4992) = v12;
            *(_QWORD *)(v5 + 5000) = v11;
            *(_QWORD *)(v5 + 5008) = v13;
            v15 = _mm_load_si128(&v119);
            v16 = v120;
            v17 = v121;
            *(_OWORD *)(v5 + 5016) = v118;
            *(__m128i *)(v5 + 5032) = v15;
            *(_OWORD *)(v5 + 5048) = v16;
            *(_OWORD *)(v5 + 5064) = v17;
            *(_OWORD *)(v5 + 5080) = v122;
            *(_OWORD *)(v5 + 5096) = v123;
            *(__m128i *)(v5 + 5112) = _mm_load_si128(&v124);
            *(_BYTE *)(v5 + 5280) = 0;
            v18 = v5 + 6136;
            sub_141684120(v5 + 6136, v14, 1160);
            v155 = (__int64 *)(v5 + 8456);
            *(_BYTE *)(v5 + 8456) = 0;
            v7 = v156;
LABEL_7:
            v21 = v5 + 7296;
            sub_141684120(v5 + 7296, v18, 1160);
            switch ( *(_BYTE *)(v5 + 7600) )
            {
              case 0:
                goto LABEL_9;
              case 1:
                goto LABEL_98;
              case 2:
                goto LABEL_97;
              case 3:
                goto LABEL_12;
              case 4:
                goto LABEL_20;
            }
          }
          v155 = v8;
          sub_140BF0DE0(v156);
          v52 = 1;
          if ( *v155 != -1 )
          {
            v53 = *(_QWORD *)(v160 + 4960);
            v157 = *(_BYTE **)(v160 + 4968);
            v158 = nullptr;
            v154 = v53;
            while ( v157 != v158 )
            {
              ++v158;
              v54 = v53 + 96;
              sub_1402C7520(v53, v49, v50, v51, v88);
              v53 = v54;
            }
            v68 = *v155;
            if ( *v155 )
            {
              v69 = v160;
              goto LABEL_87;
            }
          }
          v69 = v160;
          goto LABEL_88;
        case 1:
LABEL_96:
          v156 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_95:
          v156 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v19 = v5 + 8456;
  v20 = *(unsigned __int8 *)(v5 + 8456);
  v18 = v5 + 6136;
  v155 = (__int64 *)(v5 + 8456);
  switch ( v20 )
  {
    case 0LL:
      goto LABEL_7;
    case 1LL:
      v156 = v7;
      v148 = v5 + 8456;
      v147 = v5 + 6136;
      sub_1416C3400(&off_1417B7B80, v19, a3, a4);
    case 2LL:
      v156 = v7;
      v148 = v5 + 8456;
      v147 = v5 + 6136;
      sub_1416C3420(&off_1417B7B80, v19, a3, a4);
    case 3LL:
      v21 = v5 + 7296;
      switch ( *(_BYTE *)(v5 + 7600) )
      {
        case 0:
LABEL_9:
          v150 = v18;
          v156 = v7;
          *(_BYTE *)(v5 + 7601) = 1;
          v154 = v21;
          sub_141684120(v5 + 7448, v21, 152);
          sub_1401C50B0(&v100, v5 + 7448);
          v23 = v160;
          v24 = *(volatile signed __int64 **)(v160 + 7584);
          v25 = _InterlockedIncrement64(v24);
          if ( (v25 < 0) ^ v22 | (v25 == 0)
            || (v26 = *(volatile signed __int64 **)(v23 + 7592),
                v27 = _InterlockedIncrement64(v26),
                (v27 < 0) ^ v22 | (v27 == 0)) )
          {
            BUG();
          }
          sub_141684120(&v97, &v100, 136);
          v28 = (_BYTE *)(v23 + 7608);
          sub_141684120(v23 + 7608, &v97, 136);
          *(_QWORD *)(v23 + 7744) = v24;
          *(_QWORD *)(v23 + 7752) = v26;
          v158 = (_BYTE *)(v23 + 7768);
          *(_BYTE *)(v23 + 7768) = 0;
LABEL_14:
          v157 = v28;
          sub_141684120(&v100, v28, 152);
          v30 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v159 = 1;
            v87 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v30 = v87;
          }
          if ( *((_DWORD *)v30 + 4) == 2 )
          {
            v31 = 704;
            if ( *(_BYTE *)v30 )
              v31 = 472;
            v32 = v30[1] + v31;
            v159 = 0;
            v33 = sub_14089D080(v32, (__int64)v30, (__int64)&v100, (__int64)&off_1417642A8);
          }
          else
          {
            v43 = 704;
            if ( *((_BYTE *)v30 + 64) )
              v43 = 472;
            v44 = v30[9] + v43;
            v159 = 0;
            v33 = sub_14089D080(v44, (__int64)(v30 + 8), (__int64)&v100, (__int64)&off_141764290);
          }
          v5 = v160;
          *(_QWORD *)(v160 + 7760) = v33;
LABEL_26:
          v149 = (__int64 *)(v5 + 7760);
          sub_140AFF010(&v89, v5 + 7760, v4);
          v45 = v89.m128i_i64[0];
          if ( v89.m128i_i64[0] == -3 )
          {
            *v158 = 3;
            v55 = 3;
LABEL_44:
            v65 = (const __m128i *)v160;
            *(_BYTE *)(v160 + 7600) = v55;
LABEL_68:
            v65[528].m128i_i8[8] = 3;
            v65[529].m128i_i8[0] = 3;
            v73 = 3;
            result = 1;
            goto LABEL_89;
          }
          v141 = v4;
          if ( v89.m128i_i64[0] == -2 )
          {
            v46 = v89.m128i_i64[1];
            v13 = v90;
            v47 = 0x800000000000000CuLL;
            v48 = v91;
          }
          else
          {
            v47 = v89.m128i_u64[1];
            v46 = v90;
            v13 = v91;
            v48 = *(_QWORD *)v92;
            v144 = *(__m128i *)&v92[8];
            v145 = _mm_loadu_si128(&v93);
            v146 = v94;
          }
          v56 = v157;
          v57 = _mm_load_si128(&v145);
          *(__m128i *)v142.m256i_i8 = _mm_load_si128(&v144);
          *(__m128i *)&v142.m256i_u64[2] = v57;
          v143 = v146;
          v58 = *v149;
          v153 = v158;
          v152 = v157;
          if ( (unsigned __int8)sub_1412F2A80(v58) )
          {
            v153 = v158;
            v152 = v56;
            sub_1412E7580(v58);
          }
          if ( v45 == -2 )
          {
            v89.m128i_i64[0] = v47;
            v89.m128i_i64[1] = v46;
            v90 = v13;
            v91 = v48;
            *(__m128i *)v92 = _mm_load_si128((const __m128i *)&v142);
            v128[0] = &v89;
            v128[1] = sub_141230630;
            sub_14149C0F0(&v144, &unk_1417B8CB0, v128);
            v153 = v158;
            v152 = v157;
            sub_140BF0F60(&v89);
            v59 = v144.m128i_i64[1];
            v9 = v144.m128i_i64[0];
            v13 = v145.m128i_i64[0];
            *v158 = 1;
            si128 = _mm_load_si128((const __m128i *)&v139.m256i_u64[2]);
            *(__m128i *)v137.m256i_i8 = _mm_load_si128((const __m128i *)&v139);
            *(__m128i *)&v137.m256i_u64[2] = si128;
            v138 = v140;
            v5 = v160;
LABEL_52:
            sub_140014150(v5 + 7448);
            *(_WORD *)(v160 + 7600) = 1;
            v70 = -1;
            goto LABEL_69;
          }
          v139 = v142;
          v140 = v143;
          *v158 = 1;
          v61 = _mm_load_si128((const __m128i *)&v139.m256i_u64[2]);
          *(__m128i *)v137.m256i_i8 = _mm_load_si128((const __m128i *)&v139);
          *(__m128i *)&v137.m256i_u64[2] = v61;
          v138 = v140;
          v5 = v160;
          v59 = v46;
          if ( v45 == -1 )
          {
            v9 = v47;
            goto LABEL_52;
          }
          v101 = v138;
          v100 = v137;
          *(_QWORD *)(v160 + 7608) = v45;
          *(_QWORD *)(v5 + 7616) = v47;
          *(_QWORD *)(v5 + 7624) = v46;
          *(_QWORD *)(v5 + 7632) = v13;
          *(_QWORD *)(v5 + 7640) = v48;
          v62 = *(_OWORD *)&v100.m256i_u64[2];
          *(_OWORD *)(v5 + 7648) = *(_OWORD *)v100.m256i_i8;
          *(_OWORD *)(v5 + 7664) = v62;
          *(_QWORD *)(v5 + 7680) = v101;
          *(_BYTE *)(v5 + 7601) = 0;
          v36 = v5 + 7688;
          sub_141684120(v5 + 7688, v5 + 7448, 152);
          v63 = v157;
          *(_QWORD *)(v5 + 7840) = v157;
          *(_QWORD *)(v5 + 7848) = aRuntimeRefresh_1;
          *(_QWORD *)(v5 + 7856) = 35;
          v39 = aLogoutCommitte;
          *(_QWORD *)(v5 + 7864) = aLogoutCommitte;
          *(_QWORD *)(v5 + 7872) = 16;
          v41 = aMutation_0;
          *(_QWORD *)(v5 + 7880) = aMutation_0;
          *(_QWORD *)(v5 + 7888) = 8;
          v158 = (_BYTE *)(v5 + 8448);
          *(_BYTE *)(v5 + 8448) = 0;
          v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v63, (__m128i)(unsigned __int64)aRuntimeRefresh_1);
          v38 = 35;
          v40 = 16;
          v42 = 8;
          v4 = v141;
LABEL_41:
          *(__m128i *)(v5 + 7896) = v37;
          *(_QWORD *)(v5 + 7912) = v38;
          *(_QWORD *)(v5 + 7920) = v39;
          *(_QWORD *)(v5 + 7928) = v40;
          sub_141684120(v5 + 7936, v36, 152);
          *(_QWORD *)(v5 + 8088) = v41;
          *(_QWORD *)(v5 + 8096) = v42;
          *(_BYTE *)(v5 + 8440) = 0;
LABEL_42:
          v157 = (_BYTE *)(v5 + 7936);
          sub_140CF87B0(&v100, v5 + 7936, v4);
          v64 = v100.m256i_i64[0];
          if ( v100.m256i_i64[0] == -2 )
          {
            *v158 = 3;
            v55 = 4;
            goto LABEL_44;
          }
          v145.m128i_i64[0] = v100.m256i_i64[3];
          v144 = _mm_loadu_si128((const __m128i *)&v100.m256i_u64[1]);
          sub_141684120(&v89, &v101, 856);
          v66 = v113;
          if ( *(_BYTE *)(v160 + 8440) == 3 )
          {
            if ( *(_BYTE *)(v160 + 8432) == 3 )
            {
              v71 = *(_QWORD *)(v160 + 8424);
              if ( (unsigned __int8)sub_1412F2A80(v71) )
                sub_1412E7580(v71);
            }
            else if ( !*(_BYTE *)(v160 + 8432) )
            {
              sub_140014150(v160 + 8272);
            }
            v67 = (_BYTE *)(v160 + 8104);
          }
          else
          {
            v67 = v157;
            if ( *(_BYTE *)(v160 + 8440) )
              goto LABEL_60;
          }
          sub_140014150(v67);
LABEL_60:
          if ( (_DWORD)v64 == -1 )
          {
            v142.m256i_i64[3] = v145.m128i_i64[0];
            *(__m128i *)&v142.m256i_u64[1] = v144;
            v72 = 1;
          }
          else
          {
            v100.m256i_i64[0] = v64;
            *(__m128i *)&v100.m256i_u64[1] = _mm_load_si128(&v144);
            v100.m256i_i64[3] = v145.m128i_i64[0];
            sub_141684120(&v101, &v89, 856);
            v113 = v66;
            if ( v109 )
              sub_140001660(v110, v109, 1);
            if ( v111 )
              sub_140001660(v112, v111, 1);
            sub_140A8ED10(&v100);
            *(_OWORD *)&v142.m256i_u64[1] = v95;
            v142.m256i_i64[3] = v96;
            v72 = 0;
          }
          v142.m256i_i64[0] = v72;
          v88 = _mm_loadu_si128((const __m128i *)(v160 + 7920)).m128i_u64[0];
          sub_140354D30(*(__int128 **)(v160 + 7896));
          v65 = (const __m128i *)v160;
          *(_BYTE *)(v160 + 8448) = 1;
          v70 = v65[475].m128i_i64[1];
          v47 = v65[477].m128i_u64[1];
          v127 = v65[480].m128i_i64[0];
          v126 = v65[479];
          v125 = _mm_loadu_si128(v65 + 478);
          v9 = v65[476].m128i_u64[0];
          v59 = v65[476].m128i_i64[1];
          v13 = v65[477].m128i_i64[0];
          v65[475].m128i_i16[0] = 1;
          if ( v70 == -2 )
            goto LABEL_68;
LABEL_69:
          sub_140BECEF0(v154);
          if ( v70 != -1 )
          {
            v117 = v127;
            v76 = _mm_load_si128(&v125);
            v116 = _mm_load_si128(&v126);
            v115 = v76;
            v114[0] = v70;
            v114[1] = v9;
            v114[2] = v59;
            v114[3] = v13;
            v114[4] = v47;
            sub_140B043B0(&v100, v114);
            v9 = ((unsigned __int64)((v100.m256i_u8[15] << 16)
                                   | (unsigned int)*(unsigned __int16 *)((char *)&v100.m256i_u16[6] + 1)) << 32)
               | *(unsigned int *)((char *)&v100.m256i_u32[2] + 1);
            v10 = v100.m256i_i8[8];
            v11 = v100.m256i_i64[3];
            v12 = v100.m256i_i64[2];
            v13 = v101;
            if ( v100.m256i_i64[0] == -1 )
            {
              v52 = 0;
            }
            else
            {
              v100.m256i_i8[15] = (((unsigned __int64)((v100.m256i_u8[15] << 16)
                                                     | (unsigned int)*(unsigned __int16 *)((char *)&v100.m256i_u16[6] + 1)) << 32)
                                 | *(unsigned int *)((char *)&v100.m256i_u32[2] + 1)) >> 48;
              *(__int16 *)((char *)&v100.m256i_i16[6] + 1) = WORD2(v9);
              *(__int32 *)((char *)&v100.m256i_i32[2] + 1) = v9;
              v97 = 0;
              v98 = 1;
              v99 = 0;
              v90 = 1610612768;
              v89.m128i_i64[0] = (__int64)&v97;
              v89.m128i_i64[1] = (__int64)&off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v100, &v89, v77) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v151,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v12 = v97;
              v11 = v98;
              v13 = v99;
              sub_140BF0F60(&v100);
              v52 = 1;
              v10 = 3;
            }
            goto LABEL_82;
          }
          if ( v13 < 0 )
          {
            v78 = 0;
            goto LABEL_75;
          }
          if ( !v13 )
          {
            v11 = 1;
            if ( !v9 )
              goto LABEL_81;
            goto LABEL_80;
          }
          nullsub_1(v75);
          v78 = 1;
          v79 = sub_140001650(v13, 1);
          if ( !v79 )
          {
LABEL_75:
            v158 = (_BYTE *)v9;
            v157 = (_BYTE *)v59;
            sub_1416C2D4B(v78, v13);
          }
          v11 = v79;
          sub_141684120(v79, v59, v13);
          if ( v9 )
LABEL_80:
            sub_140001660(v59, v9, 1);
LABEL_81:
          v52 = 1;
          v10 = 3;
          v12 = v13;
LABEL_82:
          *(_BYTE *)v155 = 1;
          sub_140BF0DE0(v156);
          v69 = v160;
          if ( *(_QWORD *)(v160 + 4952) != -1 )
          {
            v83 = *(__int64 **)(v160 + 4960);
            v157 = *(_BYTE **)(v160 + 4968);
            v158 = nullptr;
            v155 = v83;
            while ( v157 != v158 )
            {
              ++v158;
              v84 = v83 + 12;
              sub_1402C7520(v83, v80, v81, v82, v88);
              v83 = v84;
            }
            v69 = v160;
            v68 = *(_QWORD *)(v160 + 4952);
            if ( v68 )
LABEL_87:
              sub_140001660(*(_QWORD *)(v69 + 4960), 96 * v68, 8);
          }
LABEL_88:
          *(_BYTE *)(v69 + 8464) = 1;
          sub_140BE2C20(v156);
          v131 = v9;
          v133 = BYTE6(v9);
          v132 = WORD2(v9);
          v134 = v12;
          v135 = v11;
          v136 = v13;
          v130 = v10;
          v129 = v52;
          v85 = v160;
          *(_BYTE *)(v160 + 8483) = 0;
          sub_141684120(&v100, v85, 360);
          *(_BYTE *)(v85 + 8482) = 0;
          v86 = *(_QWORD *)(v85 + 384);
          *(_BYTE *)(v85 + 8481) = 0;
          v90 = *(_QWORD *)(v85 + 376);
          v89 = _mm_loadu_si128((const __m128i *)(v85 + 360));
          sub_14047E370(
            (unsigned int)&v100,
            v86,
            (unsigned int)&v129,
            (unsigned int)&v89,
            *(_DWORD *)(v85 + 8472),
            *(_DWORD *)(v85 + 8476));
          v73 = 1;
          result = 0;
          v65 = (const __m128i *)v160;
LABEL_89:
          v65[530].m128i_i8[0] = v73;
          return result;
        case 1:
LABEL_98:
          v154 = v21;
          v150 = v18;
          v156 = v7;
          JUMPOUT(0x140CABC4ELL);
        case 2:
LABEL_97:
          v154 = v21;
          v150 = v18;
          v156 = v7;
          sub_1416C3420(&off_1417BB3E0, v19, a3, a4);
        case 3:
LABEL_12:
          v154 = v21;
          v150 = v18;
          v156 = v7;
          v158 = (_BYTE *)(v5 + 7768);
          v29 = *(unsigned __int8 *)(v5 + 7768);
          v157 = (_BYTE *)(v5 + 7608);
          switch ( v29 )
          {
            case 0LL:
              v28 = v157;
              goto LABEL_14;
            case 1LL:
              JUMPOUT(0x140CABCDBLL);
            case 2LL:
              JUMPOUT(0x140CABCAFLL);
            case 3LL:
              goto LABEL_26;
          }
        case 4:
LABEL_20:
          v154 = v21;
          v150 = v18;
          v156 = v7;
          v34 = v5 + 8448;
          v35 = *(unsigned __int8 *)(v5 + 8448);
          v158 = (_BYTE *)(v5 + 8448);
          switch ( v35 )
          {
            case 0LL:
              v36 = v5 + 7688;
              v37 = _mm_loadu_si128((const __m128i *)(v5 + 7840));
              v38 = *(_QWORD *)(v5 + 7856);
              v39 = *(const char **)(v5 + 7864);
              v40 = *(_QWORD *)(v5 + 7872);
              v41 = *(const char **)(v5 + 7880);
              v42 = *(_QWORD *)(v5 + 7888);
              goto LABEL_41;
            case 1LL:
              sub_1416C3400(&off_1417B8060, v34, a3, a4);
            case 2LL:
              sub_1416C3420(&off_1417B8060, v34, a3, a4);
            case 3LL:
              goto LABEL_42;
          }
      }
  }
}