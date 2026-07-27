// module: codexmate_lib/commands/accounts
// addr: 0x140cac5d0
// name: remove_accounts
// win 1.2.1 | module src/commands/accounts.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = remove_accounts | mapped via command-name string xref (win-native, ground-truth)
char __fastcall remove_accounts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  __int8 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rdi
  int v14; // r13d
  unsigned int v15; // esi
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rcx
  __int64 *v21; // rsi
  _QWORD *v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rax
  unsigned __int8 v26; // si
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rdi
  __m128i v30; // xmm6
  char v31; // of
  __int64 v32; // r15
  volatile signed __int64 *v33; // rbx
  __int64 v34; // rt0
  volatile signed __int64 *v35; // r14
  __int64 v36; // rt0
  _BYTE *v37; // r12
  __int64 v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdi
  __m128i v46; // xmm0
  __int64 v47; // rcx
  const char *v48; // rax
  __int64 v49; // rdx
  const char *v50; // rbx
  __int64 v51; // r14
  __int64 v52; // rcx
  __int64 v53; // rcx
  __m128i *v54; // rbx
  __int64 v55; // r15
  __int64 v56; // rsi
  char v57; // al
  _BYTE *v58; // r13
  __m128i v59; // xmm1
  __int64 v60; // r14
  __int64 v61; // r14
  __m128i v62; // xmm1
  __m128i v63; // xmm1
  __int128 v64; // xmm1
  __int128 v65; // xmm2
  __int128 v66; // xmm3
  _BYTE *v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rdi
  _BYTE *v72; // rcx
  __int64 v73; // rax
  char v74; // cl
  char result; // al
  __int64 v76; // rcx
  __m128i v77; // xmm0
  __m128i v78; // xmm1
  __int64 v79; // r8
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // r13
  __int64 v87; // rdi
  __int64 v88; // rdx
  _QWORD *v89; // rdi
  unsigned __int64 v90; // [rsp+20h] [rbp-60h]
  __m128i v91; // [rsp+30h] [rbp-50h] BYREF
  __int128 v92; // [rsp+40h] [rbp-40h]
  _BYTE v93[24]; // [rsp+50h] [rbp-30h]
  __m128i v94; // [rsp+68h] [rbp-18h]
  __int128 v95; // [rsp+78h] [rbp-8h]
  __int128 v96; // [rsp+88h] [rbp+8h]
  __int128 v97; // [rsp+98h] [rbp+18h]
  _QWORD v98[92]; // [rsp+A8h] [rbp+28h] BYREF
  _QWORD v99[5]; // [rsp+388h] [rbp+308h] BYREF
  __m128i v100; // [rsp+3B0h] [rbp+330h]
  __m128i v101; // [rsp+3C0h] [rbp+340h]
  __int128 v102; // [rsp+3D0h] [rbp+350h]
  __int128 v103; // [rsp+3E0h] [rbp+360h]
  __int128 v104; // [rsp+3F0h] [rbp+370h]
  __int128 v105; // [rsp+400h] [rbp+380h]
  __m256i v106; // [rsp+410h] [rbp+390h] BYREF
  __int128 v107; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v108; // [rsp+440h] [rbp+3C0h] BYREF
  _BYTE v109[40]; // [rsp+450h] [rbp+3D0h]
  __int128 v110; // [rsp+478h] [rbp+3F8h]
  __int128 v111; // [rsp+488h] [rbp+408h]
  __int128 v112; // [rsp+498h] [rbp+418h]
  __int64 v113; // [rsp+740h] [rbp+6C0h]
  __int64 v114; // [rsp+748h] [rbp+6C8h]
  __int64 v115; // [rsp+758h] [rbp+6D8h]
  __int64 v116; // [rsp+760h] [rbp+6E0h]
  __int64 v117; // [rsp+788h] [rbp+708h]
  __m128i v118; // [rsp+790h] [rbp+710h] BYREF
  __m128i v119; // [rsp+7A0h] [rbp+720h] BYREF
  __int128 v120; // [rsp+7B0h] [rbp+730h]
  __int128 v121; // [rsp+7C0h] [rbp+740h]
  __int128 v122; // [rsp+7D0h] [rbp+750h]
  __int128 v123; // [rsp+7E0h] [rbp+760h]
  __m128i v124; // [rsp+7F0h] [rbp+770h] BYREF
  __m128i v125; // [rsp+800h] [rbp+780h] BYREF
  __int128 v126; // [rsp+810h] [rbp+790h]
  __int128 v127; // [rsp+820h] [rbp+7A0h]
  __int128 v128; // [rsp+830h] [rbp+7B0h]
  __m128i v129; // [rsp+840h] [rbp+7C0h] BYREF
  _QWORD v130[2]; // [rsp+850h] [rbp+7D0h] BYREF
  __m256i v131; // [rsp+860h] [rbp+7E0h]
  __int128 v132; // [rsp+880h] [rbp+800h]
  __int128 v133; // [rsp+890h] [rbp+810h]
  __int128 v134; // [rsp+8A0h] [rbp+820h]
  __m128i v135; // [rsp+8B0h] [rbp+830h]
  __m128i v136; // [rsp+8C0h] [rbp+840h]
  __m128i v137; // [rsp+8D0h] [rbp+850h] BYREF
  __int128 v138; // [rsp+8E0h] [rbp+860h]
  __int128 v139; // [rsp+8F0h] [rbp+870h]
  __int128 v140; // [rsp+900h] [rbp+880h]
  __m128i v141; // [rsp+910h] [rbp+890h] BYREF
  __m128i v142; // [rsp+920h] [rbp+8A0h] BYREF
  __m128i v143; // [rsp+930h] [rbp+8B0h]
  __int128 v144; // [rsp+940h] [rbp+8C0h]
  __int128 v145; // [rsp+950h] [rbp+8D0h]
  __int128 v146; // [rsp+960h] [rbp+8E0h]
  __m128i v147; // [rsp+970h] [rbp+8F0h]
  __m128i v148; // [rsp+980h] [rbp+900h] BYREF
  __int64 v149; // [rsp+990h] [rbp+910h]
  __int64 v150; // [rsp+9A0h] [rbp+920h] BYREF
  __int8 v151; // [rsp+9A8h] [rbp+928h]
  int v152; // [rsp+9A9h] [rbp+929h]
  __int16 v153; // [rsp+9ADh] [rbp+92Dh]
  char v154; // [rsp+9AFh] [rbp+92Fh]
  __int64 v155; // [rsp+9B0h] [rbp+930h]
  __int64 v156; // [rsp+9B8h] [rbp+938h]
  __int64 v157; // [rsp+9C0h] [rbp+940h]
  const char *v158; // [rsp+9C8h] [rbp+948h] BYREF
  __m128i v159; // [rsp+9D0h] [rbp+950h]
  __int64 v160; // [rsp+9E0h] [rbp+960h]
  __int64 v161; // [rsp+9E8h] [rbp+968h]
  __int64 v162; // [rsp+9F0h] [rbp+970h]
  __int64 v163; // [rsp+9F8h] [rbp+978h]
  __int64 v164; // [rsp+A50h] [rbp+9D0h]
  __int64 v165; // [rsp+A58h] [rbp+9D8h]
  __int64 v166; // [rsp+A60h] [rbp+9E0h]
  _BYTE *v167; // [rsp+A68h] [rbp+9E8h]
  __int64 v168; // [rsp+A70h] [rbp+9F0h]
  __int64 *v169; // [rsp+A78h] [rbp+9F8h]
  __int64 v170; // [rsp+A80h] [rbp+A00h]
  char v171; // [rsp+A8Fh] [rbp+A0Fh] BYREF
  _BYTE *v172; // [rsp+A90h] [rbp+A10h]
  _BYTE *v173; // [rsp+A98h] [rbp+A18h]
  _QWORD *v174; // [rsp+AA0h] [rbp+A20h]
  __int128 v175; // [rsp+AA8h] [rbp+A28h]
  _BYTE *v176; // [rsp+AB8h] [rbp+A38h]
  _BYTE *v177; // [rsp+AC0h] [rbp+A40h]
  char v178; // [rsp+ACFh] [rbp+A4Fh]
  __int64 v179; // [rsp+AD0h] [rbp+A50h]
  __int64 v180; // [rsp+AD8h] [rbp+A58h]

  v180 = -2;
  v4 = a2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 8960);
  v179 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8961) = 257;
      *(_BYTE *)(a1 + 8963) = 1;
      v7 = a1 + 4672;
      sub_141684120(a1 + 4672, a1 + 392, 4280);
      switch ( *(_BYTE *)(v5 + 8944) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_97;
        case 2:
          goto LABEL_96;
        case 3:
          goto LABEL_11;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 4672;
      switch ( *(_BYTE *)(a1 + 8944) )
      {
        case 0:
LABEL_4:
          v163 = 0;
          v158 = aRemoveAccounts;
          v159.m128i_i64[0] = 15;
          v159.m128i_i64[1] = (__int64)aApp_2;
          v160 = 3;
          *(_QWORD *)&v175 = v7;
          v161 = v7;
          *((_QWORD *)&v175 + 1) = v5 + 5192;
          v162 = v5 + 5192;
          sub_1401C3650((__int64)&v106, (__int64)&v158);
          v8 = (unsigned __int64)((v106.m256i_u8[15] << 16)
                                | (unsigned int)*(unsigned __int16 *)((char *)&v106.m256i_u16[6] + 1)) << 32;
          v9 = v8 | *(unsigned int *)((char *)&v106.m256i_u32[2] + 1);
          v10 = v106.m256i_i8[8];
          v11 = v106.m256i_i64[3];
          v12 = v106.m256i_i64[2];
          v13 = v107;
          if ( v106.m256i_i64[0] != -1 )
          {
            *(_OWORD *)&v98[2] = v112;
            *(_OWORD *)v98 = v111;
            v97 = v110;
            v96 = *(_OWORD *)&v109[24];
            v95 = *(_OWORD *)&v109[8];
            v94 = _mm_loadu_si128((const __m128i *)((char *)&v108 + 8));
            *(__m128i *)&v93[8] = _mm_loadu_si128((const __m128i *)((char *)&v107 + 8));
            *(__int32 *)((char *)&v91.m128i_i32[2] + 1) = *(__int32 *)((char *)&v106.m256i_i32[2] + 1);
            v91.m128i_i8[15] = (v8 | *(unsigned int *)((char *)&v106.m256i_u32[2] + 1)) >> 48;
            *(__int16 *)((char *)&v91.m128i_i16[6] + 1) = WORD2(v9);
            v92 = *(_OWORD *)&v106.m256i_u64[2];
            *(_QWORD *)v93 = v107;
            v91.m128i_i64[0] = v106.m256i_i64[0];
            v91.m128i_i8[8] = v106.m256i_i8[8];
            *(_QWORD *)&v108 = 0;
            v106.m256i_i64[0] = (__int64)aRemoveAccounts;
            v106.m256i_i64[1] = 15;
            v106.m256i_i64[2] = (__int64)aAccountkeys;
            v106.m256i_i64[3] = 11;
            v107 = v175;
            sub_1403204C0(&v158, &v106);
            v10 = (char)v158;
            if ( (_BYTE)v158 == 0xFF )
            {
              v28 = v160;
              v5 = v179;
              v29 = v179 + 5216;
              v30 = v159;
              sub_141684120(v179 + 5216, &v91, 152);
              *(__m128i *)(v5 + 5368) = v30;
              *(_QWORD *)(v5 + 5384) = v28;
              *(_BYTE *)(v5 + 5544) = 0;
              v23 = v5 + 6456;
              sub_141684120(v5 + 6456, v29, 1240);
              v22 = (_QWORD *)(v5 + 8936);
              *(_BYTE *)(v5 + 8936) = 0;
              v7 = v175;
LABEL_17:
              v24 = v5 + 7696;
              sub_141684120(v5 + 7696, v23, 1240);
              switch ( *(_BYTE *)(v5 + 8024) )
              {
                case 0:
                  goto LABEL_18;
                case 1:
                  goto LABEL_101;
                case 2:
                  goto LABEL_100;
                case 3:
                  goto LABEL_21;
                case 4:
                  goto LABEL_29;
              }
            }
            v14 = HIBYTE(v158);
            v15 = *(unsigned __int16 *)((char *)&v158 + 5);
            v16 = *(unsigned int *)((char *)&v158 + 1);
            v11 = v159.m128i_i64[1];
            v12 = v159.m128i_i64[0];
            v13 = v160;
            sub_140014150(&v91);
            v9 = ((unsigned __int64)((v14 << 16) | v15) << 32) | v16;
          }
          sub_140BF0DE0(v175);
          if ( **((_QWORD **)&v175 + 1) == -1 )
          {
            v26 = 1;
            v27 = v179;
            goto LABEL_91;
          }
          v174 = (_QWORD *)(v179 + 5200);
          v20 = *(__int64 **)(v179 + 5200);
          v176 = *(_BYTE **)(v179 + 5208);
          v177 = nullptr;
          v169 = v20;
          while ( v176 != v177 )
          {
            ++v177;
            v21 = v20 + 12;
            sub_1402C7520(v20, v17, v18, v19, v90);
            v20 = v21;
          }
          v25 = **((_QWORD **)&v175 + 1);
          v26 = 1;
          v27 = v179;
          if ( !**((_QWORD **)&v175 + 1) )
            goto LABEL_91;
          goto LABEL_90;
        case 1:
LABEL_97:
          *(_QWORD *)&v175 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_96:
          *(_QWORD *)&v175 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_11;
      }
  }
LABEL_11:
  v22 = (_QWORD *)(v5 + 8936);
  v23 = v5 + 6456;
  switch ( *(_BYTE *)(v5 + 8936) )
  {
    case 0:
      goto LABEL_17;
    case 1:
      *(_QWORD *)&v175 = v7;
      v166 = v5 + 8936;
      v165 = v5 + 6456;
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2:
      *(_QWORD *)&v175 = v7;
      v166 = v5 + 8936;
      v165 = v5 + 6456;
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3:
      v24 = v5 + 7696;
      switch ( *(_BYTE *)(v5 + 8024) )
      {
        case 0:
LABEL_18:
          v170 = v23;
          v174 = v22;
          *(_QWORD *)&v175 = v7;
          *(_BYTE *)(v5 + 8025) = 1;
          *((_QWORD *)&v175 + 1) = v24;
          sub_141684120(v5 + 7872, v24, 152);
          *(_BYTE *)(v5 + 8026) = 1;
          v148 = _mm_loadu_si128((const __m128i *)(v5 + 7848));
          v149 = *(_QWORD *)(v5 + 7864);
          sub_1401C50B0(&v106, v5 + 7872);
          v32 = v179;
          v33 = *(volatile signed __int64 **)(v179 + 8008);
          v34 = _InterlockedIncrement64(v33);
          if ( (v34 < 0) ^ v31 | (v34 == 0)
            || (v35 = *(volatile signed __int64 **)(v32 + 8016),
                v36 = _InterlockedIncrement64(v35),
                (v36 < 0) ^ v31 | (v36 == 0)) )
          {
            BUG();
          }
          sub_141684120(&v158, &v106, 136);
          *(_BYTE *)(v32 + 8026) = 0;
          v37 = (_BYTE *)(v32 + 8032);
          sub_141684120(v32 + 8032, &v158, 136);
          *(_QWORD *)(v32 + 8168) = v33;
          *(_QWORD *)(v32 + 8176) = v35;
          *(__m128i *)(v32 + 8184) = _mm_load_si128(&v148);
          *(_QWORD *)(v32 + 8200) = v149;
          v177 = (_BYTE *)(v32 + 8216);
          *(_BYTE *)(v32 + 8216) = 0;
LABEL_23:
          v176 = v37;
          sub_141684120(&v106, v37, 176);
          v39 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v178 = 1;
            v89 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v39 = v89;
          }
          if ( *((_DWORD *)v39 + 4) == 2 )
          {
            v40 = 704;
            if ( *(_BYTE *)v39 )
              v40 = 472;
            v41 = v39[1] + v40;
            v178 = 0;
            v42 = sub_14089BEE0(v41, (__int64)v39, (__int64)&v106, (__int64)&off_1417642A8);
          }
          else
          {
            v52 = 704;
            if ( *((_BYTE *)v39 + 64) )
              v52 = 472;
            v53 = v39[9] + v52;
            v178 = 0;
            v42 = sub_14089BEE0(v53, (__int64)(v39 + 8), (__int64)&v106, (__int64)&off_141764290);
          }
          v5 = v179;
          *(_QWORD *)(v179 + 8208) = v42;
LABEL_35:
          v54 = &v91;
          v169 = (__int64 *)(v5 + 8208);
          sub_140AFF1E0(&v91, v5 + 8208, v4);
          v55 = v91.m128i_i64[0];
          if ( v91.m128i_i64[0] == -3 )
          {
            *v177 = 3;
            v57 = 3;
LABEL_51:
            v70 = v179;
            *(_BYTE *)(v179 + 8024) = v57;
LABEL_69:
            *(_BYTE *)(v70 + 8936) = 3;
            *(_BYTE *)(v70 + 8944) = 3;
            v74 = 3;
            result = 1;
            goto LABEL_92;
          }
          v164 = v4;
          if ( v91.m128i_i64[0] == -2 )
          {
            v56 = v91.m128i_i64[1];
            v13 = v92;
            v9 = 0x800000000000000CuLL;
            v168 = *((_QWORD *)&v92 + 1);
          }
          else
          {
            v9 = v91.m128i_u64[1];
            v13 = *((_QWORD *)&v92 + 1);
            v56 = v92;
            v168 = *(_QWORD *)v93;
            v124 = *(__m128i *)&v93[8];
            v125 = v94;
            v126 = v95;
            v127 = v96;
            v128 = v97;
            v129 = _mm_loadu_si128((const __m128i *)v98);
          }
          v58 = v176;
          v59 = _mm_load_si128(&v125);
          v142 = v124;
          v143 = v59;
          v144 = v126;
          v145 = v127;
          v146 = v128;
          v147 = _mm_load_si128(&v129);
          v60 = *v169;
          v173 = v177;
          v172 = v176;
          if ( (unsigned __int8)sub_1412F2A80(v60) )
          {
            v173 = v177;
            v172 = v58;
            sub_1412E7580(v60);
          }
          if ( v55 == -2 )
          {
            v91.m128i_i64[0] = v9;
            v91.m128i_i64[1] = v56;
            *(_QWORD *)&v92 = v13;
            *((_QWORD *)&v92 + 1) = v168;
            *(__m128i *)v93 = _mm_load_si128(&v142);
            v130[0] = &v91;
            v130[1] = sub_141230630;
            sub_14149C0F0(&v124, &unk_1417B8CB0, v130);
            v173 = v177;
            v172 = v176;
            sub_140BF0F60(&v91);
            v61 = v124.m128i_i64[1];
            v9 = v124.m128i_i64[0];
            v13 = v125.m128i_i64[0];
            *v177 = 1;
            v62 = _mm_load_si128(&v137);
            *(__m128i *)v131.m256i_i8 = v136;
            *(__m128i *)&v131.m256i_u64[2] = v62;
            v132 = v138;
            v133 = v139;
            v134 = v140;
            v135 = _mm_load_si128(&v141);
            v5 = v179;
LABEL_47:
            *(_BYTE *)(v5 + 8026) = 0;
            sub_140014150(v5 + 7872);
            *(_WORD *)(v179 + 8024) = 1;
            v68 = -1;
            goto LABEL_70;
          }
          v136 = v142;
          v137 = v143;
          v138 = v144;
          v139 = v145;
          v140 = v146;
          v141 = v147;
          *v177 = 1;
          v63 = _mm_load_si128(&v137);
          *(__m128i *)v131.m256i_i8 = v136;
          *(__m128i *)&v131.m256i_u64[2] = v63;
          v132 = v138;
          v133 = v139;
          v134 = v140;
          v135 = _mm_load_si128(&v141);
          v5 = v179;
          v61 = v56;
          if ( v55 == -1 )
            goto LABEL_47;
          *(__m128i *)&v109[16] = v135;
          *(_OWORD *)v109 = v134;
          v108 = v133;
          v107 = v132;
          v106 = v131;
          *(_QWORD *)(v179 + 8032) = v55;
          *(_QWORD *)(v5 + 8040) = v9;
          *(_QWORD *)(v5 + 8048) = v56;
          *(_QWORD *)(v5 + 8056) = v13;
          *(_QWORD *)(v5 + 8064) = v168;
          v64 = *(_OWORD *)&v106.m256i_u64[2];
          v65 = v107;
          v66 = v108;
          *(_OWORD *)(v5 + 8072) = *(_OWORD *)v106.m256i_i8;
          *(_OWORD *)(v5 + 8088) = v64;
          *(_OWORD *)(v5 + 8104) = v65;
          *(_OWORD *)(v5 + 8120) = v66;
          *(_OWORD *)(v5 + 8136) = *(_OWORD *)v109;
          *(_OWORD *)(v5 + 8152) = *(_OWORD *)&v109[16];
          *(_BYTE *)(v5 + 8025) = 0;
          v45 = v5 + 8168;
          sub_141684120(v5 + 8168, v5 + 7872, 152);
          v67 = v176;
          *(_QWORD *)(v5 + 8320) = v176;
          *(_QWORD *)(v5 + 8328) = "RUNTIME_REFRESH_FAILED_AFTER_REMOVEAccounts were removed";
          *(_QWORD *)(v5 + 8336) = 35;
          v48 = "Accounts were removed";
          *(_QWORD *)(v5 + 8344) = "Accounts were removed";
          *(_QWORD *)(v5 + 8352) = 21;
          v50 = aMutation_0;
          *(_QWORD *)(v5 + 8360) = aMutation_0;
          *(_QWORD *)(v5 + 8368) = 8;
          v177 = (_BYTE *)(v5 + 8928);
          *(_BYTE *)(v5 + 8928) = 0;
          v46 = _mm_unpacklo_epi64(
                  (__m128i)(unsigned __int64)v67,
                  (__m128i)(unsigned __int64)"RUNTIME_REFRESH_FAILED_AFTER_REMOVEAccounts were removed");
          v47 = 35;
          v49 = 21;
          v51 = 8;
          v24 = *((_QWORD *)&v175 + 1);
          v4 = v164;
LABEL_46:
          *((_QWORD *)&v175 + 1) = v24;
          *(__m128i *)(v5 + 8376) = v46;
          *(_QWORD *)(v5 + 8392) = v47;
          *(_QWORD *)(v5 + 8400) = v48;
          *(_QWORD *)(v5 + 8408) = v49;
          sub_141684120(v5 + 8416, v45, 152);
          *(_QWORD *)(v5 + 8568) = v50;
          *(_QWORD *)(v5 + 8576) = v51;
          *(_BYTE *)(v5 + 8920) = 0;
LABEL_49:
          v176 = (_BYTE *)(v5 + 8416);
          sub_140CF87B0(&v106, v5 + 8416, v4);
          v69 = v106.m256i_i64[0];
          if ( v106.m256i_i64[0] == -2 )
          {
            *v177 = 3;
            v57 = 4;
            goto LABEL_51;
          }
          v143.m128i_i64[0] = v106.m256i_i64[3];
          v142 = _mm_loadu_si128((const __m128i *)&v106.m256i_u64[1]);
          sub_141684120(&v91, &v107, 856);
          v71 = v117;
          if ( *(_BYTE *)(v179 + 8920) == 3 )
          {
            if ( *(_BYTE *)(v179 + 8912) == 3 )
            {
              sub_140B03640(v179 + 8904);
            }
            else if ( !*(_BYTE *)(v179 + 8912) )
            {
              sub_140014150(v179 + 8752);
            }
            v72 = (_BYTE *)(v179 + 8584);
          }
          else
          {
            v72 = v176;
            if ( *(_BYTE *)(v179 + 8920) )
              goto LABEL_61;
          }
          sub_140014150(v72);
LABEL_61:
          if ( (_DWORD)v69 == -1 )
          {
            v160 = v143.m128i_i64[0];
            v159 = v142;
            v73 = 1;
          }
          else
          {
            v106.m256i_i64[0] = v69;
            *(__m128i *)&v106.m256i_u64[1] = _mm_load_si128(&v142);
            v106.m256i_i64[3] = v143.m128i_i64[0];
            sub_141684120(&v107, &v91, 856);
            v117 = v71;
            if ( v113 )
              sub_140001660(v114, v113, 1);
            if ( v115 )
              sub_140001660(v116, v115, 1);
            sub_140A8ED10(&v106);
            v159 = *(__m128i *)&v98[89];
            v160 = v98[91];
            v73 = 0;
          }
          v158 = (const char *)v73;
          v90 = _mm_loadu_si128((const __m128i *)(v179 + 8400)).m128i_u64[0];
          sub_140354D30(*(__int128 **)(v179 + 8376));
          v70 = v179;
          *(_BYTE *)(v179 + 8928) = 1;
          v68 = *(_QWORD *)(v70 + 8032);
          v54 = *(__m128i **)(v70 + 8064);
          v123 = *(_OWORD *)(v70 + 8152);
          v122 = *(_OWORD *)(v70 + 8136);
          v121 = *(_OWORD *)(v70 + 8120);
          v120 = *(_OWORD *)(v70 + 8104);
          v119 = *(__m128i *)(v70 + 8088);
          v118 = _mm_loadu_si128((const __m128i *)(v70 + 8072));
          *(_BYTE *)(v70 + 8026) = 0;
          v9 = *(_QWORD *)(v70 + 8040);
          v61 = *(_QWORD *)(v70 + 8048);
          v13 = *(_QWORD *)(v70 + 8056);
          *(_WORD *)(v70 + 8024) = 1;
          if ( v68 == -2 )
            goto LABEL_69;
LABEL_70:
          sub_140BEC630(*((_QWORD *)&v175 + 1));
          if ( v68 == -1 )
          {
            if ( v13 < 0 )
            {
              v80 = 0;
              goto LABEL_76;
            }
            if ( v13 )
            {
              nullsub_1(v76);
              v80 = 1;
              v81 = sub_140001650(v13, 1);
              if ( !v81 )
              {
LABEL_76:
                v177 = (_BYTE *)v9;
                v176 = (_BYTE *)v61;
                sub_1416C2D4B(v80, v13);
              }
              v11 = v81;
              sub_141684120(v81, v61, v13);
            }
            else
            {
              v11 = 1;
            }
            if ( v9 )
              sub_140001660(v61, v9, 1);
            v26 = 1;
            v10 = 3;
            v12 = v13;
            goto LABEL_85;
          }
          v105 = v123;
          v104 = v122;
          v77 = _mm_load_si128(&v118);
          v78 = _mm_load_si128(&v119);
          v103 = v121;
          v102 = v120;
          v101 = v78;
          v100 = v77;
          v99[0] = v68;
          v99[1] = v9;
          v99[2] = v61;
          v99[3] = v13;
          v99[4] = v54;
          sub_140B04630(&v106, v99);
          v9 = ((unsigned __int64)((v106.m256i_u8[15] << 16)
                                 | (unsigned int)*(unsigned __int16 *)((char *)&v106.m256i_u16[6] + 1)) << 32)
             | *(unsigned int *)((char *)&v106.m256i_u32[2] + 1);
          v10 = v106.m256i_i8[8];
          v11 = v106.m256i_i64[3];
          v12 = v106.m256i_i64[2];
          v13 = v107;
          if ( v106.m256i_i64[0] == -1 )
          {
            v26 = 0;
          }
          else
          {
            v106.m256i_i8[15] = (((unsigned __int64)((v106.m256i_u8[15] << 16)
                                                   | (unsigned int)*(unsigned __int16 *)((char *)&v106.m256i_u16[6] + 1)) << 32)
                               | *(unsigned int *)((char *)&v106.m256i_u32[2] + 1)) >> 48;
            *(__int16 *)((char *)&v106.m256i_i16[6] + 1) = WORD2(v9);
            *(__int32 *)((char *)&v106.m256i_i32[2] + 1) = v9;
            v158 = nullptr;
            v159 = (__m128i)1uLL;
            *(_QWORD *)&v92 = 1610612768;
            v91.m128i_i64[0] = (__int64)&v158;
            v91.m128i_i64[1] = (__int64)&off_1417C41C0;
            if ( (unsigned __int8)sub_141230630(&v106, &v91, v79) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v171,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v12 = (__int64)v158;
            v13 = v159.m128i_i64[1];
            v11 = v159.m128i_i64[0];
            sub_140BF0F60(&v106);
            v26 = 1;
            v10 = 3;
          }
LABEL_85:
          *(_BYTE *)v174 = 1;
          sub_140BF0DE0(v175);
          v27 = v179;
          if ( *(_QWORD *)(v179 + 5192) != -1 )
          {
            v174 = (_QWORD *)(v179 + 5200);
            v85 = *(_QWORD *)(v179 + 5200);
            v176 = *(_BYTE **)(v179 + 5208);
            v177 = nullptr;
            *((_QWORD *)&v175 + 1) = v85;
            while ( v176 != v177 )
            {
              ++v177;
              v86 = v85 + 96;
              sub_1402C7520(v85, v82, v83, v84, v90);
              v85 = v86;
            }
            v27 = v179;
            v25 = *(_QWORD *)(v179 + 5192);
            if ( v25 )
LABEL_90:
              sub_140001660(*v174, 96 * v25, 8);
          }
LABEL_91:
          *(_BYTE *)(v27 + 8944) = 1;
          sub_140BE2FA0(v175);
          v152 = v9;
          v154 = BYTE6(v9);
          v153 = WORD2(v9);
          v155 = v12;
          v156 = v11;
          v157 = v13;
          v151 = v10;
          v150 = v26;
          v87 = v179;
          *(_BYTE *)(v179 + 8963) = 0;
          sub_141684120(&v106, v87, 360);
          *(_BYTE *)(v87 + 8962) = 0;
          v88 = *(_QWORD *)(v87 + 384);
          *(_BYTE *)(v87 + 8961) = 0;
          *(_QWORD *)&v92 = *(_QWORD *)(v87 + 376);
          v91 = _mm_loadu_si128((const __m128i *)(v87 + 360));
          sub_14047E370(
            (unsigned int)&v106,
            v88,
            (unsigned int)&v150,
            (unsigned int)&v91,
            *(_DWORD *)(v87 + 8952),
            *(_DWORD *)(v87 + 8956));
          v74 = 1;
          result = 0;
          v70 = v179;
LABEL_92:
          *(_BYTE *)(v70 + 8960) = v74;
          return result;
        case 1:
LABEL_101:
          *((_QWORD *)&v175 + 1) = v24;
          v170 = v23;
          v174 = v22;
          *(_QWORD *)&v175 = v7;
          sub_1416C3400(&off_1417BB2F0, a2, a3, a4);
        case 2:
LABEL_100:
          *((_QWORD *)&v175 + 1) = v24;
          v170 = v23;
          v174 = v22;
          *(_QWORD *)&v175 = v7;
          sub_1416C3420(&off_1417BB2F0, a2, a3, a4);
        case 3:
LABEL_21:
          *((_QWORD *)&v175 + 1) = v24;
          v170 = v23;
          v174 = v22;
          *(_QWORD *)&v175 = v7;
          v177 = (_BYTE *)(v5 + 8216);
          v38 = *(unsigned __int8 *)(v5 + 8216);
          v176 = (_BYTE *)(v5 + 8032);
          switch ( v38 )
          {
            case 0LL:
              v37 = v176;
              goto LABEL_23;
            case 1LL:
              v167 = v176;
              sub_1416C3400(&off_1417B8048, a2, a3, a4);
            case 2LL:
              v167 = v176;
              sub_1416C3420(&off_1417B8048, a2, a3, a4);
            case 3LL:
              goto LABEL_35;
          }
        case 4:
LABEL_29:
          v170 = v23;
          v174 = v22;
          *(_QWORD *)&v175 = v7;
          v43 = v5 + 8928;
          v44 = *(unsigned __int8 *)(v5 + 8928);
          v177 = (_BYTE *)(v5 + 8928);
          switch ( v44 )
          {
            case 0LL:
              v45 = v5 + 8168;
              v46 = _mm_loadu_si128((const __m128i *)(v5 + 8320));
              v47 = *(_QWORD *)(v5 + 8336);
              v48 = *(const char **)(v5 + 8344);
              v49 = *(_QWORD *)(v5 + 8352);
              v50 = *(const char **)(v5 + 8360);
              v51 = *(_QWORD *)(v5 + 8368);
              goto LABEL_46;
            case 1LL:
              *((_QWORD *)&v175 + 1) = v24;
              sub_1416C3400(&off_1417B8060, v43, a3, a4);
            case 2LL:
              *((_QWORD *)&v175 + 1) = v24;
              sub_1416C3420(&off_1417B8060, v43, a3, a4);
            case 3LL:
              *((_QWORD *)&v175 + 1) = v24;
              goto LABEL_49;
          }
      }
  }
}