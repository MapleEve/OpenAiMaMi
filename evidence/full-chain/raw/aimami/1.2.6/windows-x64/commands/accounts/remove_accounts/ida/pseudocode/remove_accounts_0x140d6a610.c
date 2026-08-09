// Pseudocode for remove_accounts (EA: 0x140d6a610, size: 0x1488)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:按accountKeys删除账号(Accounts were removed),随后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_REMOVE)。⚠破坏性:删除账号数据(mutation)。归属:锚src\commands\accounts.rs。
// Tauri命令handler:按accountKeys删除账号(Accounts were removed),随后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_REMOVE)。⚠破坏性:删除账号数据(mutation)。归属:锚src\commands\accounts.rs。
char __fastcall remove_accounts(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  __int8 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rdi
  int v12; // r13d
  unsigned int v13; // esi
  __int64 v14; // r12
  __int64 *v15; // rcx
  __int64 *v16; // rsi
  _QWORD *v17; // rbx
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int8 v21; // si
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rdi
  __m128i v25; // xmm6
  char v26; // of
  volatile signed __int64 *v27; // rbx
  __int64 v28; // rt0
  volatile signed __int64 *v29; // r14
  __int64 v30; // rt0
  __int64 v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  __m128i v39; // xmm0
  __int64 v40; // rcx
  const char *v41; // rax
  __int64 v42; // rdx
  const char *v43; // rbx
  __int64 v44; // r14
  __int64 v45; // rcx
  __int64 v46; // rcx
  __m128i *v47; // rbx
  __int64 v48; // r15
  _BYTE *v49; // r13
  __int64 v50; // rsi
  char v51; // al
  __m128i v52; // xmm1
  __int64 v53; // r14
  _BYTE *v54; // rsi
  __int64 v55; // r14
  __m128i v56; // xmm1
  __m128i v57; // xmm1
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __int128 v60; // xmm3
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rax
  char v68; // cl
  char result; // al
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __m128i v74; // xmm0
  __m128i v75; // xmm1
  __int64 v76; // rsi
  __int64 v77; // rax
  _QWORD *v78; // rcx
  _QWORD *v79; // r13
  __int64 v80; // rdi
  __int64 v81; // rdx
  _QWORD *v82; // rdi
  unsigned __int64 v83; // [rsp+20h] [rbp-60h]
  __m128i v84; // [rsp+30h] [rbp-50h] BYREF
  __int128 v85; // [rsp+40h] [rbp-40h]
  _BYTE v86[24]; // [rsp+50h] [rbp-30h]
  __m128i v87; // [rsp+68h] [rbp-18h]
  __int128 v88; // [rsp+78h] [rbp-8h]
  __int128 v89; // [rsp+88h] [rbp+8h]
  __int128 v90; // [rsp+98h] [rbp+18h]
  _QWORD v91[92]; // [rsp+A8h] [rbp+28h] BYREF
  _QWORD v92[5]; // [rsp+388h] [rbp+308h] BYREF
  __m128i v93; // [rsp+3B0h] [rbp+330h]
  __m128i v94; // [rsp+3C0h] [rbp+340h]
  __int128 v95; // [rsp+3D0h] [rbp+350h]
  __int128 v96; // [rsp+3E0h] [rbp+360h]
  __int128 v97; // [rsp+3F0h] [rbp+370h]
  __int128 v98; // [rsp+400h] [rbp+380h]
  __m256i v99; // [rsp+410h] [rbp+390h] BYREF
  __int128 v100; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v101; // [rsp+440h] [rbp+3C0h] BYREF
  _BYTE v102[40]; // [rsp+450h] [rbp+3D0h]
  __int128 v103; // [rsp+478h] [rbp+3F8h]
  __int128 v104; // [rsp+488h] [rbp+408h]
  __int128 v105; // [rsp+498h] [rbp+418h]
  __int64 v106; // [rsp+740h] [rbp+6C0h]
  __int64 v107; // [rsp+748h] [rbp+6C8h]
  __int64 v108; // [rsp+758h] [rbp+6D8h]
  __int64 v109; // [rsp+760h] [rbp+6E0h]
  __int64 v110; // [rsp+788h] [rbp+708h]
  __m128i v111; // [rsp+790h] [rbp+710h] BYREF
  __m128i v112; // [rsp+7A0h] [rbp+720h] BYREF
  __int128 v113; // [rsp+7B0h] [rbp+730h]
  __int128 v114; // [rsp+7C0h] [rbp+740h]
  __int128 v115; // [rsp+7D0h] [rbp+750h]
  __int128 v116; // [rsp+7E0h] [rbp+760h]
  __m128i v117; // [rsp+7F0h] [rbp+770h] BYREF
  __m128i v118; // [rsp+800h] [rbp+780h] BYREF
  __int128 v119; // [rsp+810h] [rbp+790h]
  __int128 v120; // [rsp+820h] [rbp+7A0h]
  __int128 v121; // [rsp+830h] [rbp+7B0h]
  __m128i v122; // [rsp+840h] [rbp+7C0h] BYREF
  _QWORD v123[2]; // [rsp+850h] [rbp+7D0h] BYREF
  __m256i v124; // [rsp+860h] [rbp+7E0h]
  __int128 v125; // [rsp+880h] [rbp+800h]
  __int128 v126; // [rsp+890h] [rbp+810h]
  __int128 v127; // [rsp+8A0h] [rbp+820h]
  __m128i v128; // [rsp+8B0h] [rbp+830h]
  __m128i v129; // [rsp+8C0h] [rbp+840h]
  __m128i v130; // [rsp+8D0h] [rbp+850h] BYREF
  __int128 v131; // [rsp+8E0h] [rbp+860h]
  __int128 v132; // [rsp+8F0h] [rbp+870h]
  __int128 v133; // [rsp+900h] [rbp+880h]
  __m128i v134; // [rsp+910h] [rbp+890h] BYREF
  __m128i v135; // [rsp+920h] [rbp+8A0h] BYREF
  __m128i v136; // [rsp+930h] [rbp+8B0h]
  __int128 v137; // [rsp+940h] [rbp+8C0h]
  __int128 v138; // [rsp+950h] [rbp+8D0h]
  __int128 v139; // [rsp+960h] [rbp+8E0h]
  __m128i v140; // [rsp+970h] [rbp+8F0h]
  __m128i v141; // [rsp+980h] [rbp+900h] BYREF
  __int64 v142; // [rsp+990h] [rbp+910h]
  __int64 v143; // [rsp+9A0h] [rbp+920h] BYREF
  __int8 v144; // [rsp+9A8h] [rbp+928h]
  int v145; // [rsp+9A9h] [rbp+929h]
  __int16 v146; // [rsp+9ADh] [rbp+92Dh]
  char v147; // [rsp+9AFh] [rbp+92Fh]
  __int64 v148; // [rsp+9B0h] [rbp+930h]
  __int64 v149; // [rsp+9B8h] [rbp+938h]
  __int64 v150; // [rsp+9C0h] [rbp+940h]
  const char *v151; // [rsp+9C8h] [rbp+948h] BYREF
  __m128i v152; // [rsp+9D0h] [rbp+950h]
  __int64 v153; // [rsp+9E0h] [rbp+960h]
  __int64 v154; // [rsp+9E8h] [rbp+968h]
  __int64 v155; // [rsp+9F0h] [rbp+970h]
  __int64 v156; // [rsp+9F8h] [rbp+978h]
  __int64 v157; // [rsp+A50h] [rbp+9D0h]
  __int64 v158; // [rsp+A58h] [rbp+9D8h]
  __int64 v159; // [rsp+A60h] [rbp+9E0h]
  __int64 v160; // [rsp+A70h] [rbp+9F0h]
  __int64 *v161; // [rsp+A78h] [rbp+9F8h]
  __int64 v162; // [rsp+A80h] [rbp+A00h]
  char v163; // [rsp+A8Fh] [rbp+A0Fh] BYREF
  __int64 v164; // [rsp+A90h] [rbp+A10h]
  _BYTE *v165; // [rsp+A98h] [rbp+A18h]
  _QWORD *v166; // [rsp+AA0h] [rbp+A20h]
  __int64 v167; // [rsp+AA8h] [rbp+A28h]
  unsigned __int64 v168; // [rsp+AB0h] [rbp+A30h]
  __int64 v169; // [rsp+AB8h] [rbp+A38h]
  _QWORD *v170; // [rsp+AC0h] [rbp+A40h]
  char v171; // [rsp+ACFh] [rbp+A4Fh]
  __int64 v172; // [rsp+AD0h] [rbp+A50h]
  __int64 v173; // [rsp+AD8h] [rbp+A58h]

  v173 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 8960);
  v172 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8961) = 257;
      *(_BYTE *)(a1 + 8963) = 1;
      v5 = a1 + 4672;
      sub_14172B820(a1 + 4672, a1 + 392, 4280);
      switch ( *(_BYTE *)(v3 + 8944) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_98;
        case 2:
          goto LABEL_97;
        case 3:
          goto LABEL_11;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 4672;
      switch ( *(_BYTE *)(a1 + 8944) )
      {
        case 0:
LABEL_4:
          v156 = 0;
          v151 = aRemoveAccounts;
          v152.m128i_i64[0] = 15;
          v152.m128i_i64[1] = (__int64)aApp_4;
          v153 = 3;
          v167 = v5;
          v154 = v5;
          v170 = (_QWORD *)(v3 + 5192);
          v155 = v3 + 5192;
          sub_1401A9630((__int64)&v99, (__int64)&v151);
          v6 = (unsigned __int64)((v99.m256i_u8[15] << 16)
                                | (unsigned int)*(unsigned __int16 *)((char *)&v99.m256i_u16[6] + 1)) << 32;
          v7 = v6 | *(unsigned int *)((char *)&v99.m256i_u32[2] + 1);
          v8 = v99.m256i_i8[8];
          v9 = v99.m256i_i64[3];
          v10 = v99.m256i_i64[2];
          v11 = v100;
          if ( v99.m256i_i64[0] != -1 )
          {
            *(_OWORD *)&v91[2] = v105;
            *(_OWORD *)v91 = v104;
            v90 = v103;
            v89 = *(_OWORD *)&v102[24];
            v88 = *(_OWORD *)&v102[8];
            v87 = _mm_loadu_si128((const __m128i *)((char *)&v101 + 8));
            *(__m128i *)&v86[8] = _mm_loadu_si128((const __m128i *)((char *)&v100 + 8));
            *(__int32 *)((char *)&v84.m128i_i32[2] + 1) = *(__int32 *)((char *)&v99.m256i_i32[2] + 1);
            v84.m128i_i8[15] = (v6 | *(unsigned int *)((char *)&v99.m256i_u32[2] + 1)) >> 48;
            *(__int16 *)((char *)&v84.m128i_i16[6] + 1) = WORD2(v7);
            v85 = *(_OWORD *)&v99.m256i_u64[2];
            *(_QWORD *)v86 = v100;
            v84.m128i_i64[0] = v99.m256i_i64[0];
            v84.m128i_i8[8] = v99.m256i_i8[8];
            *(_QWORD *)&v101 = 0;
            v99.m256i_i64[0] = (__int64)aRemoveAccounts;
            v99.m256i_i64[1] = 15;
            v99.m256i_i64[2] = (__int64)aAccountkeys;
            v99.m256i_i64[3] = 11;
            *(_QWORD *)&v100 = v167;
            *((_QWORD *)&v100 + 1) = v170;
            sub_14045AEC0(&v151, &v99);
            v8 = (char)v151;
            if ( (_BYTE)v151 == 0xFF )
            {
              v23 = v153;
              v3 = v172;
              v24 = v172 + 5216;
              v25 = v152;
              sub_14172B820(v172 + 5216, &v84, 152);
              *(__m128i *)(v3 + 5368) = v25;
              *(_QWORD *)(v3 + 5384) = v23;
              *(_BYTE *)(v3 + 5544) = 0;
              v18 = v3 + 6456;
              sub_14172B820(v3 + 6456, v24, 1240);
              v17 = (_QWORD *)(v3 + 8936);
              *(_BYTE *)(v3 + 8936) = 0;
              v5 = v167;
LABEL_17:
              v19 = v3 + 7696;
              sub_14172B820(v3 + 7696, v18, 1240);
              switch ( *(_BYTE *)(v3 + 8024) )
              {
                case 0:
                  goto LABEL_18;
                case 1:
                  goto LABEL_102;
                case 2:
                  goto LABEL_101;
                case 3:
                  goto LABEL_21;
                case 4:
                  goto LABEL_28;
              }
            }
            v12 = HIBYTE(v151);
            v13 = *(unsigned __int16 *)((char *)&v151 + 5);
            v14 = *(unsigned int *)((char *)&v151 + 1);
            v9 = v152.m128i_i64[1];
            v10 = v152.m128i_i64[0];
            v11 = v153;
            sub_140203A20(&v84);
            v7 = ((unsigned __int64)((v12 << 16) | v13) << 32) | v14;
          }
          sub_140CAB140(v167);
          if ( *v170 == -1 )
          {
            v21 = 1;
            v22 = v172;
            goto LABEL_92;
          }
          v166 = (_QWORD *)(v172 + 5200);
          v15 = *(__int64 **)(v172 + 5200);
          v169 = *(_QWORD *)(v172 + 5208);
          v168 = 0;
          v161 = v15;
          while ( v169 != v168 )
          {
            ++v168;
            v16 = v15 + 12;
            sub_140401FB0();
            v15 = v16;
          }
          v20 = *v170;
          v21 = 1;
          v22 = v172;
          if ( !*v170 )
            goto LABEL_92;
          goto LABEL_91;
        case 1:
LABEL_98:
          v167 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_97:
          v167 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_11;
      }
  }
LABEL_11:
  v17 = (_QWORD *)(v3 + 8936);
  v18 = v3 + 6456;
  switch ( *(_BYTE *)(v3 + 8936) )
  {
    case 0:
      goto LABEL_17;
    case 1:
      v167 = v5;
      v159 = v3 + 8936;
      v158 = v3 + 6456;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v167 = v5;
      v159 = v3 + 8936;
      v158 = v3 + 6456;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v19 = v3 + 7696;
      switch ( *(_BYTE *)(v3 + 8024) )
      {
        case 0:
LABEL_18:
          v162 = v18;
          v166 = v17;
          v167 = v5;
          *(_BYTE *)(v3 + 8025) = 1;
          sub_14172B820(v3 + 7872, v19, 152);
          *(_BYTE *)(v3 + 8026) = 1;
          v141 = _mm_loadu_si128((const __m128i *)(v3 + 7848));
          v142 = *(_QWORD *)(v3 + 7864);
          sub_1401A9D00(&v99, v3 + 7872);
          v27 = *(volatile signed __int64 **)(v3 + 8008);
          v28 = _InterlockedIncrement64(v27);
          if ( (v28 < 0) ^ v26 | (v28 == 0)
            || (v29 = *(volatile signed __int64 **)(v3 + 8016),
                v30 = _InterlockedIncrement64(v29),
                (v30 < 0) ^ v26 | (v30 == 0)) )
          {
            BUG();
          }
          v168 = v19;
          sub_14172B820(&v151, &v99, 136);
          *(_BYTE *)(v3 + 8026) = 0;
          v31 = v3 + 8032;
          sub_14172B820(v3 + 8032, &v151, 136);
          *(_QWORD *)(v3 + 8168) = v27;
          *(_QWORD *)(v3 + 8176) = v29;
          *(__m128i *)(v3 + 8184) = _mm_load_si128(&v141);
          *(_QWORD *)(v3 + 8200) = v142;
          v170 = (_QWORD *)(v3 + 8216);
          *(_BYTE *)(v3 + 8216) = 0;
LABEL_22:
          v169 = v31;
          sub_14172B820(&v99, v31, 176);
          v33 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v171 = 1;
            v82 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v33 = v82;
          }
          if ( *((_DWORD *)v33 + 4) == 2 )
          {
            v34 = 704;
            if ( *(_BYTE *)v33 )
              v34 = 472;
            v35 = v33[1] + v34;
            v171 = 0;
            v36 = sub_14085C460(v35, v33, &v99, &off_1417EBF48);
          }
          else
          {
            v45 = 704;
            if ( *((_BYTE *)v33 + 64) )
              v45 = 472;
            v46 = v33[9] + v45;
            v171 = 0;
            v36 = sub_14085C460(v46, v33 + 8, &v99, &off_1417EBF30);
          }
          v3 = v172;
          *(_QWORD *)(v172 + 8208) = v36;
LABEL_35:
          v47 = &v84;
          v161 = (__int64 *)(v3 + 8208);
          sub_1405015A0(&v84, v3 + 8208, a2);
          v48 = v84.m128i_i64[0];
          if ( v84.m128i_i64[0] == -3 )
          {
            *(_BYTE *)v170 = 3;
            v51 = 3;
LABEL_50:
            v63 = v172;
            *(_BYTE *)(v172 + 8024) = v51;
LABEL_70:
            *(_BYTE *)(v63 + 8936) = 3;
            *(_BYTE *)(v63 + 8944) = 3;
            v68 = 3;
            result = 1;
            goto LABEL_93;
          }
          v157 = a2;
          v49 = v170;
          if ( v84.m128i_i64[0] == -2 )
          {
            v50 = v84.m128i_i64[1];
            v11 = v85;
            v7 = 0x800000000000000CuLL;
            v160 = *((_QWORD *)&v85 + 1);
          }
          else
          {
            v7 = v84.m128i_u64[1];
            v11 = *((_QWORD *)&v85 + 1);
            v50 = v85;
            v160 = *(_QWORD *)v86;
            v117 = *(__m128i *)&v86[8];
            v118 = v87;
            v119 = v88;
            v120 = v89;
            v121 = v90;
            v122 = _mm_loadu_si128((const __m128i *)v91);
          }
          v52 = _mm_load_si128(&v118);
          v135 = v117;
          v136 = v52;
          v137 = v119;
          v138 = v120;
          v139 = v121;
          v140 = _mm_load_si128(&v122);
          v53 = *v161;
          v165 = v170;
          v164 = v169;
          if ( (unsigned __int8)sub_141398090(v53) )
          {
            v165 = v49;
            v164 = v169;
            sub_14139A2E0(v53);
          }
          if ( v48 == -2 )
          {
            v84.m128i_i64[0] = v7;
            v84.m128i_i64[1] = v50;
            *(_QWORD *)&v85 = v11;
            *((_QWORD *)&v85 + 1) = v160;
            *(__m128i *)v86 = _mm_load_si128(&v135);
            v123[0] = &v84;
            v123[1] = sub_1412DDF00;
            sub_141543AF0(&v117, &unk_1418862D0, v123);
            v54 = v170;
            v165 = v170;
            v164 = v169;
            sub_140CAB2C0(&v84);
            v55 = v117.m128i_i64[1];
            v7 = v117.m128i_i64[0];
            v11 = v118.m128i_i64[0];
            *v54 = 1;
            v56 = _mm_load_si128(&v130);
            *(__m128i *)v124.m256i_i8 = v129;
            *(__m128i *)&v124.m256i_u64[2] = v56;
            v125 = v131;
            v126 = v132;
            v127 = v133;
            v128 = _mm_load_si128(&v134);
            v3 = v172;
LABEL_55:
            *(_BYTE *)(v3 + 8026) = 0;
            sub_140203A20(v3 + 7872);
            *(_WORD *)(v172 + 8024) = 1;
            v66 = -1;
            goto LABEL_71;
          }
          v129 = v135;
          v130 = v136;
          v131 = v137;
          v132 = v138;
          v133 = v139;
          v134 = v140;
          *v49 = 1;
          v57 = _mm_load_si128(&v130);
          *(__m128i *)v124.m256i_i8 = v129;
          *(__m128i *)&v124.m256i_u64[2] = v57;
          v125 = v131;
          v126 = v132;
          v127 = v133;
          v128 = _mm_load_si128(&v134);
          v3 = v172;
          if ( v48 == -1 )
          {
            v55 = v50;
            goto LABEL_55;
          }
          *(__m128i *)&v102[16] = v128;
          *(_OWORD *)v102 = v127;
          v101 = v126;
          v100 = v125;
          v99 = v124;
          *(_QWORD *)(v172 + 8032) = v48;
          *(_QWORD *)(v3 + 8040) = v7;
          *(_QWORD *)(v3 + 8048) = v50;
          *(_QWORD *)(v3 + 8056) = v11;
          *(_QWORD *)(v3 + 8064) = v160;
          v58 = *(_OWORD *)&v99.m256i_u64[2];
          v59 = v100;
          v60 = v101;
          *(_OWORD *)(v3 + 8072) = *(_OWORD *)v99.m256i_i8;
          *(_OWORD *)(v3 + 8088) = v58;
          *(_OWORD *)(v3 + 8104) = v59;
          *(_OWORD *)(v3 + 8120) = v60;
          *(_OWORD *)(v3 + 8136) = *(_OWORD *)v102;
          *(_OWORD *)(v3 + 8152) = *(_OWORD *)&v102[16];
          *(_BYTE *)(v3 + 8025) = 0;
          v38 = v3 + 8168;
          sub_14172B820(v3 + 8168, v3 + 7872, 152);
          v61 = v169;
          *(_QWORD *)(v3 + 8320) = v169;
          *(_QWORD *)(v3 + 8328) = "RUNTIME_REFRESH_FAILED_AFTER_REMOVEAccounts were removed";
          *(_QWORD *)(v3 + 8336) = 35;
          v41 = "Accounts were removed";
          *(_QWORD *)(v3 + 8344) = "Accounts were removed";
          *(_QWORD *)(v3 + 8352) = 21;
          v43 = aMutation_0;
          *(_QWORD *)(v3 + 8360) = aMutation_0;
          *(_QWORD *)(v3 + 8368) = 8;
          v170 = (_QWORD *)(v3 + 8928);
          *(_BYTE *)(v3 + 8928) = 0;
          v39 = _mm_unpacklo_epi64(
                  (__m128i)(unsigned __int64)v61,
                  (__m128i)(unsigned __int64)"RUNTIME_REFRESH_FAILED_AFTER_REMOVEAccounts were removed");
          v40 = 35;
          v42 = 21;
          v44 = 8;
          v19 = v168;
          a2 = v157;
LABEL_46:
          v168 = v19;
          *(__m128i *)(v3 + 8376) = v39;
          *(_QWORD *)(v3 + 8392) = v40;
          *(_QWORD *)(v3 + 8400) = v41;
          *(_QWORD *)(v3 + 8408) = v42;
          sub_14172B820(v3 + 8416, v38, 152);
          *(_QWORD *)(v3 + 8568) = v43;
          *(_QWORD *)(v3 + 8576) = v44;
          *(_BYTE *)(v3 + 8920) = 0;
LABEL_48:
          v169 = v3 + 8416;
          sub_140DB62C0(&v99, v3 + 8416, a2);
          v62 = v99.m256i_i64[0];
          if ( v99.m256i_i64[0] == -2 )
          {
            *(_BYTE *)v170 = 3;
            v51 = 4;
            goto LABEL_50;
          }
          v136.m128i_i64[0] = v99.m256i_i64[3];
          v135 = _mm_loadu_si128((const __m128i *)&v99.m256i_u64[1]);
          sub_14172B820(&v84, &v100, 856);
          v64 = v110;
          if ( *(_BYTE *)(v172 + 8920) == 3 )
          {
            if ( *(_BYTE *)(v172 + 8912) == 3 )
            {
              sub_140505F80(v172 + 8904);
            }
            else if ( !*(_BYTE *)(v172 + 8912) )
            {
              sub_140203A20(v172 + 8752);
            }
            v65 = v172 + 8584;
          }
          else
          {
            v65 = v169;
            if ( *(_BYTE *)(v172 + 8920) )
              goto LABEL_62;
          }
          sub_140203A20(v65);
LABEL_62:
          if ( (_DWORD)v62 == -1 )
          {
            v153 = v136.m128i_i64[0];
            v152 = v135;
            v67 = 1;
          }
          else
          {
            v99.m256i_i64[0] = v62;
            *(__m128i *)&v99.m256i_u64[1] = _mm_load_si128(&v135);
            v99.m256i_i64[3] = v136.m128i_i64[0];
            sub_14172B820(&v100, &v84, 856);
            v110 = v64;
            if ( v106 )
              sub_140001660(v107, v106, 1);
            if ( v108 )
              sub_140001660(v109, v108, 1);
            sub_14049D260(&v99);
            v152 = *(__m128i *)&v91[89];
            v153 = v91[91];
            v67 = 0;
          }
          v151 = (const char *)v67;
          v83 = _mm_loadu_si128((const __m128i *)(v172 + 8400)).m128i_u64[0];
          sub_140B8E080(*(__int128 **)(v172 + 8376));
          v63 = v172;
          *(_BYTE *)(v172 + 8928) = 1;
          v66 = *(_QWORD *)(v63 + 8032);
          v47 = *(__m128i **)(v63 + 8064);
          v116 = *(_OWORD *)(v63 + 8152);
          v115 = *(_OWORD *)(v63 + 8136);
          v114 = *(_OWORD *)(v63 + 8120);
          v113 = *(_OWORD *)(v63 + 8104);
          v112 = *(__m128i *)(v63 + 8088);
          v111 = _mm_loadu_si128((const __m128i *)(v63 + 8072));
          *(_BYTE *)(v63 + 8026) = 0;
          v7 = *(_QWORD *)(v63 + 8040);
          v55 = *(_QWORD *)(v63 + 8048);
          v11 = *(_QWORD *)(v63 + 8056);
          *(_WORD *)(v63 + 8024) = 1;
          if ( v66 == -2 )
            goto LABEL_70;
LABEL_71:
          sub_140CA69A0(v168);
          if ( v66 == -1 )
          {
            if ( v11 < 0 )
            {
              v76 = 0;
              goto LABEL_77;
            }
            if ( v11 )
            {
              nullsub_1(v71, v70, v72, v73, v83);
              v76 = 1;
              v77 = sub_140001650(v11, 1);
              if ( !v77 )
              {
LABEL_77:
                v168 = v7;
                v169 = v55;
                sub_14176E54B(v76, v11);
              }
              v9 = v77;
              sub_14172B820(v77, v55, v11);
            }
            else
            {
              v9 = 1;
            }
            if ( v7 )
              sub_140001660(v55, v7, 1);
            v21 = 1;
            v8 = 3;
            v10 = v11;
            goto LABEL_86;
          }
          v98 = v116;
          v97 = v115;
          v74 = _mm_load_si128(&v111);
          v75 = _mm_load_si128(&v112);
          v96 = v114;
          v95 = v113;
          v94 = v75;
          v93 = v74;
          v92[0] = v66;
          v92[1] = v7;
          v92[2] = v55;
          v92[3] = v11;
          v92[4] = v47;
          sub_1405074B0(&v99, v92);
          v7 = ((unsigned __int64)((v99.m256i_u8[15] << 16)
                                 | (unsigned int)*(unsigned __int16 *)((char *)&v99.m256i_u16[6] + 1)) << 32)
             | *(unsigned int *)((char *)&v99.m256i_u32[2] + 1);
          v8 = v99.m256i_i8[8];
          v9 = v99.m256i_i64[3];
          v10 = v99.m256i_i64[2];
          v11 = v100;
          if ( v99.m256i_i64[0] == -1 )
          {
            v21 = 0;
          }
          else
          {
            v99.m256i_i8[15] = (((unsigned __int64)((v99.m256i_u8[15] << 16)
                                                  | (unsigned int)*(unsigned __int16 *)((char *)&v99.m256i_u16[6] + 1)) << 32)
                              | *(unsigned int *)((char *)&v99.m256i_u32[2] + 1)) >> 48;
            *(__int16 *)((char *)&v99.m256i_i16[6] + 1) = WORD2(v7);
            *(__int32 *)((char *)&v99.m256i_i32[2] + 1) = v7;
            v151 = nullptr;
            v152 = (__m128i)1uLL;
            *(_QWORD *)&v85 = 1610612768;
            v84.m128i_i64[0] = (__int64)&v151;
            v84.m128i_i64[1] = (__int64)&off_141891B48;
            if ( (unsigned __int8)sub_1412DDF00(&v99, &v84) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v163,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v10 = (__int64)v151;
            v11 = v152.m128i_i64[1];
            v9 = v152.m128i_i64[0];
            sub_140CAB2C0(&v99);
            v21 = 1;
            v8 = 3;
          }
LABEL_86:
          *(_BYTE *)v166 = 1;
          sub_140CAB140(v167);
          v22 = v172;
          if ( *(_QWORD *)(v172 + 5192) != -1 )
          {
            v166 = (_QWORD *)(v172 + 5200);
            v78 = *(_QWORD **)(v172 + 5200);
            v169 = *(_QWORD *)(v172 + 5208);
            v168 = 0;
            v170 = v78;
            while ( v169 != v168 )
            {
              ++v168;
              v79 = v78 + 12;
              sub_140401FB0();
              v78 = v79;
            }
            v22 = v172;
            v20 = *(_QWORD *)(v172 + 5192);
            if ( v20 )
LABEL_91:
              sub_140001660(*v166, 96 * v20, 8);
          }
LABEL_92:
          *(_BYTE *)(v22 + 8944) = 1;
          sub_140C9D2F0(v167);
          v145 = v7;
          v147 = BYTE6(v7);
          v146 = WORD2(v7);
          v148 = v10;
          v149 = v9;
          v150 = v11;
          v144 = v8;
          v143 = v21;
          v80 = v172;
          *(_BYTE *)(v172 + 8963) = 0;
          sub_14172B820(&v99, v80, 360);
          *(_BYTE *)(v80 + 8962) = 0;
          v81 = *(_QWORD *)(v80 + 384);
          *(_BYTE *)(v80 + 8961) = 0;
          *(_QWORD *)&v85 = *(_QWORD *)(v80 + 376);
          v84 = _mm_loadu_si128((const __m128i *)(v80 + 360));
          sub_140AFFC30(
            (__int64)&v99,
            v81,
            (__int64)&v143,
            (__int128 *)v84.m128i_i8,
            *(_DWORD *)(v80 + 8952),
            *(_DWORD *)(v80 + 8956));
          v68 = 1;
          result = 0;
          v63 = v172;
LABEL_93:
          *(_BYTE *)(v63 + 8960) = v68;
          return result;
        case 1:
LABEL_102:
          v168 = v19;
          v162 = v18;
          v166 = v17;
          v167 = v5;
          sub_14176EC00(&off_141888990);
        case 2:
LABEL_101:
          v168 = v19;
          v162 = v18;
          v166 = v17;
          v167 = v5;
          sub_14176EC20(&off_141888990);
        case 3:
LABEL_21:
          v162 = v18;
          v166 = v17;
          v167 = v5;
          v170 = (_QWORD *)(v3 + 8216);
          v32 = *(unsigned __int8 *)(v3 + 8216);
          v31 = v3 + 8032;
          v168 = v19;
          switch ( v32 )
          {
            case 0LL:
              goto LABEL_22;
            case 1LL:
              JUMPOUT(0x140D6BA6CLL);
            case 2LL:
              JUMPOUT(0x140D6BA40LL);
            case 3LL:
              v169 = v3 + 8032;
              goto LABEL_35;
          }
        case 4:
LABEL_28:
          v162 = v18;
          v166 = v17;
          v167 = v5;
          v37 = *(unsigned __int8 *)(v3 + 8928);
          v170 = (_QWORD *)(v3 + 8928);
          switch ( v37 )
          {
            case 0LL:
              v38 = v3 + 8168;
              v39 = _mm_loadu_si128((const __m128i *)(v3 + 8320));
              v40 = *(_QWORD *)(v3 + 8336);
              v41 = *(const char **)(v3 + 8344);
              v42 = *(_QWORD *)(v3 + 8352);
              v43 = *(const char **)(v3 + 8360);
              v44 = *(_QWORD *)(v3 + 8368);
              goto LABEL_46;
            case 1LL:
              v168 = v19;
              sub_14176EC00(&off_141885680);
            case 2LL:
              v168 = v19;
              sub_14176EC20(&off_141885680);
            case 3LL:
              v168 = v19;
              goto LABEL_48;
          }
      }
  }
}
