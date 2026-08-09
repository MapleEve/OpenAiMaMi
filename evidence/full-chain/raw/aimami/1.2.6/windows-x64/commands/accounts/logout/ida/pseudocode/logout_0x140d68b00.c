// Pseudocode for logout (EA: 0x140d68b00, size: 0x123e)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:登出当前账号并提交(Logout committed),随后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_LOGOUT)。副作用:清当前登录态(mutation)。归属:锚src\commands\accounts.rs。
// Tauri命令handler:登出当前账号并提交(Logout committed),随后刷新运行时(失败报RUNTIME_REFRESH_FAILED_AFTER_LOGOUT)。副作用:清当前登录态(mutation)。归属:锚src\commands\accounts.rs。
char __fastcall logout(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // r13
  unsigned __int64 v7; // r15
  __int8 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __m128i v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int64 v16; // r14
  _BYTE *v17; // rbx
  unsigned __int64 v18; // r15
  char v19; // of
  volatile signed __int64 *v20; // rbx
  __int64 v21; // rt0
  volatile signed __int64 *v22; // r14
  __int64 v23; // rt0
  __int64 v24; // r12
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // rcx
  const char *v34; // rax
  __int64 v35; // rdx
  const char *v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int8 v40; // si
  _BYTE *v41; // rcx
  _BYTE *v42; // r13
  __int64 v43; // r15
  _BYTE *v44; // r13
  __int64 v45; // rsi
  unsigned __int64 v46; // rbx
  __int64 v47; // r12
  char v48; // al
  __m128i v49; // xmm1
  __int64 v50; // r14
  _BYTE *v51; // rsi
  __int64 v52; // r14
  __m128i si128; // xmm1
  __m128i v54; // xmm1
  __int128 v55; // xmm1
  __int64 v56; // rdx
  __int64 v57; // rdi
  const __m128i *v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // r13
  __int64 v63; // rsi
  __int64 v64; // rsi
  __int64 v65; // rax
  char v66; // cl
  char result; // al
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __m128i v72; // xmm0
  __int64 v73; // rsi
  __int64 v74; // rax
  _QWORD *v75; // rcx
  _QWORD *v76; // r13
  __int64 v77; // rdi
  __int64 v78; // rdx
  _QWORD *v79; // rdi
  unsigned __int64 v80; // [rsp+20h] [rbp-60h]
  __m128i v81; // [rsp+30h] [rbp-50h] BYREF
  __int64 v82; // [rsp+40h] [rbp-40h]
  __int64 v83; // [rsp+48h] [rbp-38h]
  _BYTE v84[24]; // [rsp+50h] [rbp-30h]
  __m128i v85; // [rsp+68h] [rbp-18h] BYREF
  __int64 v86; // [rsp+78h] [rbp-8h]
  __int128 v87; // [rsp+370h] [rbp+2F0h]
  __int64 v88; // [rsp+380h] [rbp+300h]
  __int64 v89; // [rsp+388h] [rbp+308h] BYREF
  __int64 v90; // [rsp+390h] [rbp+310h]
  __int64 v91; // [rsp+398h] [rbp+318h]
  __m256i v92; // [rsp+410h] [rbp+390h] BYREF
  __int64 v93; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v94; // [rsp+438h] [rbp+3B8h]
  __m128i v95; // [rsp+448h] [rbp+3C8h]
  __int128 v96; // [rsp+458h] [rbp+3D8h]
  __int128 v97; // [rsp+468h] [rbp+3E8h]
  __int128 v98; // [rsp+478h] [rbp+3F8h]
  __int128 v99; // [rsp+488h] [rbp+408h]
  __m128i v100; // [rsp+498h] [rbp+418h]
  __int64 v101; // [rsp+740h] [rbp+6C0h]
  __int64 v102; // [rsp+748h] [rbp+6C8h]
  __int64 v103; // [rsp+758h] [rbp+6D8h]
  __int64 v104; // [rsp+760h] [rbp+6E0h]
  __int64 v105; // [rsp+788h] [rbp+708h]
  _QWORD v106[5]; // [rsp+790h] [rbp+710h] BYREF
  __m128i v107; // [rsp+7B8h] [rbp+738h]
  __m128i v108; // [rsp+7C8h] [rbp+748h]
  __int64 v109; // [rsp+7D8h] [rbp+758h]
  __int128 v110; // [rsp+7E0h] [rbp+760h]
  __m128i v111; // [rsp+7F0h] [rbp+770h] BYREF
  __int128 v112; // [rsp+800h] [rbp+780h]
  __int128 v113; // [rsp+810h] [rbp+790h]
  __int128 v114; // [rsp+820h] [rbp+7A0h]
  __int128 v115; // [rsp+830h] [rbp+7B0h]
  __m128i v116; // [rsp+840h] [rbp+7C0h] BYREF
  __m128i v117; // [rsp+850h] [rbp+7D0h] BYREF
  __m128i v118; // [rsp+860h] [rbp+7E0h] BYREF
  __int64 v119; // [rsp+870h] [rbp+7F0h]
  _QWORD v120[2]; // [rsp+878h] [rbp+7F8h] BYREF
  __int64 v121; // [rsp+888h] [rbp+808h] BYREF
  __int8 v122; // [rsp+890h] [rbp+810h]
  int v123; // [rsp+891h] [rbp+811h]
  __int16 v124; // [rsp+895h] [rbp+815h]
  char v125; // [rsp+897h] [rbp+817h]
  __int64 v126; // [rsp+898h] [rbp+818h]
  __int64 v127; // [rsp+8A0h] [rbp+820h]
  __int64 v128; // [rsp+8A8h] [rbp+828h]
  __m256i v129; // [rsp+8B0h] [rbp+830h]
  __int64 v130; // [rsp+8D0h] [rbp+850h]
  __m256i v131; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v132; // [rsp+900h] [rbp+880h]
  __int64 v133; // [rsp+908h] [rbp+888h]
  __m256i v134; // [rsp+910h] [rbp+890h] BYREF
  __int64 v135; // [rsp+930h] [rbp+8B0h]
  __m128i v136; // [rsp+940h] [rbp+8C0h] BYREF
  __m128i v137; // [rsp+950h] [rbp+8D0h] BYREF
  __int64 v138; // [rsp+960h] [rbp+8E0h]
  __int64 v139; // [rsp+968h] [rbp+8E8h]
  __int64 v140; // [rsp+970h] [rbp+8F0h]
  __int64 *v141; // [rsp+980h] [rbp+900h]
  __int64 v142; // [rsp+988h] [rbp+908h]
  char v143; // [rsp+997h] [rbp+917h] BYREF
  __int64 v144; // [rsp+998h] [rbp+918h]
  _BYTE *v145; // [rsp+9A0h] [rbp+920h]
  _BYTE *v146; // [rsp+9A8h] [rbp+928h]
  __int64 v147; // [rsp+9B0h] [rbp+930h]
  _QWORD *v148; // [rsp+9B8h] [rbp+938h]
  unsigned __int64 v149; // [rsp+9C0h] [rbp+940h]
  __int64 v150; // [rsp+9C8h] [rbp+948h]
  char v151; // [rsp+9D7h] [rbp+957h]
  __int64 v152; // [rsp+9D8h] [rbp+958h]
  __int64 v153; // [rsp+9E0h] [rbp+960h]

  v153 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 8480);
  v152 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8481) = 257;
      *(_BYTE *)(a1 + 8483) = 1;
      v5 = a1 + 4432;
      sub_14172B820(a1 + 4432, a1 + 392, 4040);
      switch ( *(_BYTE *)(v3 + 8464) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_97;
        case 2:
          goto LABEL_96;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 4432;
      switch ( *(_BYTE *)(a1 + 8464) )
      {
        case 0:
LABEL_4:
          v6 = (_QWORD *)(v3 + 4952);
          *(_QWORD *)&v84[16] = 0;
          v81.m128i_i64[0] = (__int64)aLogout;
          v81.m128i_i64[1] = 6;
          v82 = (__int64)aApp_4;
          v83 = 3;
          v147 = v5;
          *(_QWORD *)v84 = v5;
          *(_QWORD *)&v84[8] = v6;
          sub_1401A9630((__int64)&v92, (__int64)&v81);
          v7 = ((unsigned __int64)((v92.m256i_u8[15] << 16)
                                 | (unsigned int)*(unsigned __int16 *)((char *)&v92.m256i_u16[6] + 1)) << 32)
             | *(unsigned int *)((char *)&v92.m256i_u32[2] + 1);
          v8 = v92.m256i_i8[8];
          v9 = v92.m256i_i64[3];
          v10 = v92.m256i_i64[2];
          v11 = v93;
          if ( v92.m256i_i64[0] != -1 )
          {
            v116 = v100;
            v115 = v99;
            v114 = v98;
            v113 = v97;
            v112 = v96;
            v111 = v95;
            v110 = v94;
            v3 = v152;
            v12 = v152 + 4976;
            *(_QWORD *)(v152 + 4976) = v92.m256i_i64[0];
            *(_BYTE *)(v3 + 4984) = v8;
            *(_BYTE *)(v3 + 4991) = BYTE6(v7);
            *(_WORD *)(v3 + 4989) = WORD2(v7);
            *(_DWORD *)(v3 + 4985) = v7;
            *(_QWORD *)(v3 + 4992) = v10;
            *(_QWORD *)(v3 + 5000) = v9;
            *(_QWORD *)(v3 + 5008) = v11;
            v13 = _mm_load_si128(&v111);
            v14 = v112;
            v15 = v113;
            *(_OWORD *)(v3 + 5016) = v110;
            *(__m128i *)(v3 + 5032) = v13;
            *(_OWORD *)(v3 + 5048) = v14;
            *(_OWORD *)(v3 + 5064) = v15;
            *(_OWORD *)(v3 + 5080) = v114;
            *(_OWORD *)(v3 + 5096) = v115;
            *(__m128i *)(v3 + 5112) = _mm_load_si128(&v116);
            *(_BYTE *)(v3 + 5280) = 0;
            v16 = v3 + 6136;
            sub_14172B820(v3 + 6136, v12, 1160);
            v17 = (_BYTE *)(v3 + 8456);
            *(_BYTE *)(v3 + 8456) = 0;
            v5 = v147;
LABEL_7:
            v18 = v3 + 7296;
            sub_14172B820(v3 + 7296, v16, 1160);
            switch ( *(_BYTE *)(v3 + 7600) )
            {
              case 0:
                goto LABEL_9;
              case 1:
                goto LABEL_99;
              case 2:
                goto LABEL_98;
              case 3:
                goto LABEL_12;
              case 4:
                goto LABEL_19;
            }
          }
          v148 = v6;
          sub_140CAB140(v147);
          v40 = 1;
          if ( *v148 != -1 )
          {
            v41 = *(_BYTE **)(v152 + 4960);
            v150 = *(_QWORD *)(v152 + 4968);
            v149 = 0;
            v146 = v41;
            while ( v150 != v149 )
            {
              ++v149;
              v42 = v41 + 96;
              sub_140401FB0();
              v41 = v42;
            }
            v61 = *v148;
            if ( *v148 )
            {
              v62 = v152;
              goto LABEL_88;
            }
          }
          v62 = v152;
          goto LABEL_89;
        case 1:
LABEL_97:
          v147 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_96:
          v147 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v17 = (_BYTE *)(v3 + 8456);
  v16 = v3 + 6136;
  switch ( *(_BYTE *)(v3 + 8456) )
  {
    case 0:
      goto LABEL_7;
    case 1:
      v147 = v5;
      v140 = v3 + 8456;
      v139 = v3 + 6136;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v147 = v5;
      v140 = v3 + 8456;
      v139 = v3 + 6136;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v18 = v3 + 7296;
      switch ( *(_BYTE *)(v3 + 7600) )
      {
        case 0:
LABEL_9:
          v142 = v16;
          v146 = v17;
          v147 = v5;
          *(_BYTE *)(v3 + 7601) = 1;
          sub_14172B820(v3 + 7448, v18, 152);
          sub_1401A9D00(&v92, v3 + 7448);
          v20 = *(volatile signed __int64 **)(v3 + 7584);
          v21 = _InterlockedIncrement64(v20);
          if ( (v21 < 0) ^ v19 | (v21 == 0)
            || (v22 = *(volatile signed __int64 **)(v3 + 7592),
                v23 = _InterlockedIncrement64(v22),
                (v23 < 0) ^ v19 | (v23 == 0)) )
          {
            BUG();
          }
          v149 = v18;
          sub_14172B820(&v89, &v92, 136);
          v24 = v3 + 7608;
          sub_14172B820(v3 + 7608, &v89, 136);
          *(_QWORD *)(v3 + 7744) = v20;
          *(_QWORD *)(v3 + 7752) = v22;
          v148 = (_QWORD *)(v3 + 7768);
          *(_BYTE *)(v3 + 7768) = 0;
LABEL_13:
          v150 = v24;
          sub_14172B820(&v92, v24, 152);
          v26 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v151 = 1;
            v79 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v26 = v79;
          }
          if ( *((_DWORD *)v26 + 4) == 2 )
          {
            v27 = 704;
            if ( *(_BYTE *)v26 )
              v27 = 472;
            v28 = v26[1] + v27;
            v151 = 0;
            v29 = sub_14085D600(v28, v26, &v92, &off_1417EBF48);
          }
          else
          {
            v38 = 704;
            if ( *((_BYTE *)v26 + 64) )
              v38 = 472;
            v39 = v26[9] + v38;
            v151 = 0;
            v29 = sub_14085D600(v39, v26 + 8, &v92, &off_1417EBF30);
          }
          v3 = v152;
          *(_QWORD *)(v152 + 7760) = v29;
LABEL_30:
          v141 = (__int64 *)(v3 + 7760);
          sub_1405013D0(&v81, v3 + 7760, a2);
          v43 = v81.m128i_i64[0];
          if ( v81.m128i_i64[0] == -3 )
          {
            *(_BYTE *)v148 = 3;
            v48 = 3;
LABEL_45:
            v58 = (const __m128i *)v152;
            *(_BYTE *)(v152 + 7600) = v48;
LABEL_69:
            v58[528].m128i_i8[8] = 3;
            v58[529].m128i_i8[0] = 3;
            v66 = 3;
            result = 1;
            goto LABEL_90;
          }
          v133 = a2;
          v44 = v148;
          if ( v81.m128i_i64[0] == -2 )
          {
            v45 = v81.m128i_i64[1];
            v11 = v82;
            v46 = 0x800000000000000CuLL;
            v47 = v83;
          }
          else
          {
            v46 = v81.m128i_u64[1];
            v45 = v82;
            v11 = v83;
            v47 = *(_QWORD *)v84;
            v136 = *(__m128i *)&v84[8];
            v137 = _mm_loadu_si128(&v85);
            v138 = v86;
          }
          v49 = _mm_load_si128(&v137);
          *(__m128i *)v134.m256i_i8 = _mm_load_si128(&v136);
          *(__m128i *)&v134.m256i_u64[2] = v49;
          v135 = v138;
          v50 = *v141;
          v145 = v148;
          v144 = v150;
          if ( (unsigned __int8)sub_141398090(v50) )
          {
            v145 = v44;
            v144 = v150;
            sub_14139A2E0(v50);
          }
          if ( v43 == -2 )
          {
            v81.m128i_i64[0] = v46;
            v81.m128i_i64[1] = v45;
            v82 = v11;
            v83 = v47;
            *(__m128i *)v84 = _mm_load_si128((const __m128i *)&v134);
            v120[0] = &v81;
            v120[1] = sub_1412DDF00;
            sub_141543AF0(&v136, &unk_1418862D0, v120);
            v51 = v148;
            v145 = v148;
            v144 = v150;
            sub_140CAB2C0(&v81);
            v52 = v136.m128i_i64[1];
            v7 = v136.m128i_i64[0];
            v11 = v137.m128i_i64[0];
            *v51 = 1;
            si128 = _mm_load_si128((const __m128i *)&v131.m256i_u64[2]);
            *(__m128i *)v129.m256i_i8 = _mm_load_si128((const __m128i *)&v131);
            *(__m128i *)&v129.m256i_u64[2] = si128;
            v130 = v132;
            v3 = v152;
LABEL_53:
            sub_140203A20(v3 + 7448);
            *(_WORD *)(v152 + 7600) = 1;
            v63 = -1;
            goto LABEL_70;
          }
          v131 = v134;
          v132 = v135;
          *v44 = 1;
          v54 = _mm_load_si128((const __m128i *)&v131.m256i_u64[2]);
          *(__m128i *)v129.m256i_i8 = _mm_load_si128((const __m128i *)&v131);
          *(__m128i *)&v129.m256i_u64[2] = v54;
          v130 = v132;
          v3 = v152;
          if ( v43 == -1 )
          {
            v52 = v45;
            v7 = v46;
            goto LABEL_53;
          }
          v93 = v130;
          v92 = v129;
          *(_QWORD *)(v152 + 7608) = v43;
          *(_QWORD *)(v3 + 7616) = v46;
          *(_QWORD *)(v3 + 7624) = v45;
          *(_QWORD *)(v3 + 7632) = v11;
          *(_QWORD *)(v3 + 7640) = v47;
          v55 = *(_OWORD *)&v92.m256i_u64[2];
          *(_OWORD *)(v3 + 7648) = *(_OWORD *)v92.m256i_i8;
          *(_OWORD *)(v3 + 7664) = v55;
          *(_QWORD *)(v3 + 7680) = v93;
          *(_BYTE *)(v3 + 7601) = 0;
          v31 = v3 + 7688;
          sub_14172B820(v3 + 7688, v3 + 7448, 152);
          v56 = v150;
          *(_QWORD *)(v3 + 7840) = v150;
          *(_QWORD *)(v3 + 7848) = aRuntimeRefresh_1;
          *(_QWORD *)(v3 + 7856) = 35;
          v34 = aLogoutCommitte;
          *(_QWORD *)(v3 + 7864) = aLogoutCommitte;
          *(_QWORD *)(v3 + 7872) = 16;
          v36 = aMutation_0;
          *(_QWORD *)(v3 + 7880) = aMutation_0;
          *(_QWORD *)(v3 + 7888) = 8;
          v148 = (_QWORD *)(v3 + 8448);
          *(_BYTE *)(v3 + 8448) = 0;
          v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v56, (__m128i)(unsigned __int64)aRuntimeRefresh_1);
          v33 = 35;
          v35 = 16;
          v37 = 8;
          v18 = v149;
          a2 = v133;
LABEL_41:
          v149 = v18;
          *(__m128i *)(v3 + 7896) = v32;
          *(_QWORD *)(v3 + 7912) = v33;
          *(_QWORD *)(v3 + 7920) = v34;
          *(_QWORD *)(v3 + 7928) = v35;
          sub_14172B820(v3 + 7936, v31, 152);
          *(_QWORD *)(v3 + 8088) = v36;
          *(_QWORD *)(v3 + 8096) = v37;
          *(_BYTE *)(v3 + 8440) = 0;
LABEL_43:
          v150 = v3 + 7936;
          sub_140DB62C0(&v92, v3 + 7936, a2);
          v57 = v92.m256i_i64[0];
          if ( v92.m256i_i64[0] == -2 )
          {
            *(_BYTE *)v148 = 3;
            v48 = 4;
            goto LABEL_45;
          }
          v137.m128i_i64[0] = v92.m256i_i64[3];
          v136 = _mm_loadu_si128((const __m128i *)&v92.m256i_u64[1]);
          sub_14172B820(&v81, &v93, 856);
          v59 = v105;
          if ( *(_BYTE *)(v152 + 8440) == 3 )
          {
            if ( *(_BYTE *)(v152 + 8432) == 3 )
            {
              v64 = *(_QWORD *)(v152 + 8424);
              if ( (unsigned __int8)sub_141398090(v64) )
                sub_14139A2E0(v64);
            }
            else if ( !*(_BYTE *)(v152 + 8432) )
            {
              sub_140203A20(v152 + 8272);
            }
            v60 = v152 + 8104;
          }
          else
          {
            v60 = v150;
            if ( *(_BYTE *)(v152 + 8440) )
              goto LABEL_61;
          }
          sub_140203A20(v60);
LABEL_61:
          if ( (_DWORD)v57 == -1 )
          {
            v134.m256i_i64[3] = v137.m128i_i64[0];
            *(__m128i *)&v134.m256i_u64[1] = v136;
            v65 = 1;
          }
          else
          {
            v92.m256i_i64[0] = v57;
            *(__m128i *)&v92.m256i_u64[1] = _mm_load_si128(&v136);
            v92.m256i_i64[3] = v137.m128i_i64[0];
            sub_14172B820(&v93, &v81, 856);
            v105 = v59;
            if ( v101 )
              sub_140001660(v102, v101, 1);
            if ( v103 )
              sub_140001660(v104, v103, 1);
            sub_14049D260(&v92);
            *(_OWORD *)&v134.m256i_u64[1] = v87;
            v134.m256i_i64[3] = v88;
            v65 = 0;
          }
          v134.m256i_i64[0] = v65;
          v80 = _mm_loadu_si128((const __m128i *)(v152 + 7920)).m128i_u64[0];
          sub_140B8E080(*(__int128 **)(v152 + 7896));
          v58 = (const __m128i *)v152;
          *(_BYTE *)(v152 + 8448) = 1;
          v63 = v58[475].m128i_i64[1];
          v46 = v58[477].m128i_u64[1];
          v119 = v58[480].m128i_i64[0];
          v118 = v58[479];
          v117 = _mm_loadu_si128(v58 + 478);
          v7 = v58[476].m128i_u64[0];
          v52 = v58[476].m128i_i64[1];
          v11 = v58[477].m128i_i64[0];
          v58[475].m128i_i16[0] = 1;
          if ( v63 == -2 )
            goto LABEL_69;
LABEL_70:
          sub_140CA7260(v149);
          if ( v63 != -1 )
          {
            v109 = v119;
            v72 = _mm_load_si128(&v117);
            v108 = _mm_load_si128(&v118);
            v107 = v72;
            v106[0] = v63;
            v106[1] = v7;
            v106[2] = v52;
            v106[3] = v11;
            v106[4] = v46;
            sub_140507230(&v92, v106);
            v7 = ((unsigned __int64)((v92.m256i_u8[15] << 16)
                                   | (unsigned int)*(unsigned __int16 *)((char *)&v92.m256i_u16[6] + 1)) << 32)
               | *(unsigned int *)((char *)&v92.m256i_u32[2] + 1);
            v8 = v92.m256i_i8[8];
            v9 = v92.m256i_i64[3];
            v10 = v92.m256i_i64[2];
            v11 = v93;
            if ( v92.m256i_i64[0] == -1 )
            {
              v40 = 0;
            }
            else
            {
              v92.m256i_i8[15] = (((unsigned __int64)((v92.m256i_u8[15] << 16)
                                                    | (unsigned int)*(unsigned __int16 *)((char *)&v92.m256i_u16[6] + 1)) << 32)
                                | *(unsigned int *)((char *)&v92.m256i_u32[2] + 1)) >> 48;
              *(__int16 *)((char *)&v92.m256i_i16[6] + 1) = WORD2(v7);
              *(__int32 *)((char *)&v92.m256i_i32[2] + 1) = v7;
              v89 = 0;
              v90 = 1;
              v91 = 0;
              v82 = 1610612768;
              v81.m128i_i64[0] = (__int64)&v89;
              v81.m128i_i64[1] = (__int64)&off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v92, &v81) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v143,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v10 = v89;
              v9 = v90;
              v11 = v91;
              sub_140CAB2C0(&v92);
              v40 = 1;
              v8 = 3;
            }
            goto LABEL_83;
          }
          if ( v11 < 0 )
          {
            v73 = 0;
            goto LABEL_76;
          }
          if ( !v11 )
          {
            v9 = 1;
            if ( !v7 )
              goto LABEL_82;
            goto LABEL_81;
          }
          nullsub_1(v69, v68, v70, v71, v80);
          v73 = 1;
          v74 = sub_140001650(v11, 1);
          if ( !v74 )
          {
LABEL_76:
            v149 = v7;
            v150 = v52;
            sub_14176E54B(v73, v11);
          }
          v9 = v74;
          sub_14172B820(v74, v52, v11);
          if ( v7 )
LABEL_81:
            sub_140001660(v52, v7, 1);
LABEL_82:
          v40 = 1;
          v8 = 3;
          v10 = v11;
LABEL_83:
          *v146 = 1;
          sub_140CAB140(v147);
          v62 = v152;
          if ( *(_QWORD *)(v152 + 4952) != -1 )
          {
            v75 = *(_QWORD **)(v152 + 4960);
            v150 = *(_QWORD *)(v152 + 4968);
            v149 = 0;
            v148 = v75;
            while ( v150 != v149 )
            {
              ++v149;
              v76 = v75 + 12;
              sub_140401FB0();
              v75 = v76;
            }
            v62 = v152;
            v61 = *(_QWORD *)(v152 + 4952);
            if ( v61 )
LABEL_88:
              sub_140001660(*(_QWORD *)(v62 + 4960), 96 * v61, 8);
          }
LABEL_89:
          *(_BYTE *)(v62 + 8464) = 1;
          sub_140C9CF70(v147);
          v123 = v7;
          v125 = BYTE6(v7);
          v124 = WORD2(v7);
          v126 = v10;
          v127 = v9;
          v128 = v11;
          v122 = v8;
          v121 = v40;
          v77 = v152;
          *(_BYTE *)(v152 + 8483) = 0;
          sub_14172B820(&v92, v77, 360);
          *(_BYTE *)(v77 + 8482) = 0;
          v78 = *(_QWORD *)(v77 + 384);
          *(_BYTE *)(v77 + 8481) = 0;
          v82 = *(_QWORD *)(v77 + 376);
          v81 = _mm_loadu_si128((const __m128i *)(v77 + 360));
          sub_140AFFC30(
            (__int64)&v92,
            v78,
            (__int64)&v121,
            (__int128 *)v81.m128i_i8,
            *(_DWORD *)(v77 + 8472),
            *(_DWORD *)(v77 + 8476));
          v66 = 1;
          result = 0;
          v58 = (const __m128i *)v152;
LABEL_90:
          v58[530].m128i_i8[0] = v66;
          return result;
        case 1:
LABEL_99:
          v149 = v18;
          v142 = v16;
          v146 = v17;
          v147 = v5;
          JUMPOUT(0x140D69C8CLL);
        case 2:
LABEL_98:
          v149 = v18;
          v142 = v16;
          v146 = v17;
          v147 = v5;
          sub_14176EC20(&off_141888A80);
        case 3:
LABEL_12:
          v142 = v16;
          v146 = v17;
          v147 = v5;
          v148 = (_QWORD *)(v3 + 7768);
          v25 = *(unsigned __int8 *)(v3 + 7768);
          v24 = v3 + 7608;
          v149 = v18;
          switch ( v25 )
          {
            case 0LL:
              goto LABEL_13;
            case 1LL:
              JUMPOUT(0x140D69D12LL);
            case 2LL:
              JUMPOUT(0x140D69CE6LL);
            case 3LL:
              v150 = v3 + 7608;
              goto LABEL_30;
          }
        case 4:
LABEL_19:
          v142 = v16;
          v146 = v17;
          v147 = v5;
          v30 = *(unsigned __int8 *)(v3 + 8448);
          v148 = (_QWORD *)(v3 + 8448);
          switch ( v30 )
          {
            case 0LL:
              v31 = v3 + 7688;
              v32 = _mm_loadu_si128((const __m128i *)(v3 + 7840));
              v33 = *(_QWORD *)(v3 + 7856);
              v34 = *(const char **)(v3 + 7864);
              v35 = *(_QWORD *)(v3 + 7872);
              v36 = *(const char **)(v3 + 7880);
              v37 = *(_QWORD *)(v3 + 7888);
              goto LABEL_41;
            case 1LL:
              v149 = v18;
              sub_14176EC00(&off_141885680);
            case 2LL:
              v149 = v18;
              sub_14176EC20(&off_141885680);
            case 3LL:
              v149 = v18;
              goto LABEL_43;
          }
      }
  }
}
