// module: codexmate_lib/core/relay/manager
// addr: 0x1408488e0
// name: fix_diagnostic_issue
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::fix_diagnostic_issue | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall fix_diagnostic_issue(__int64 a1, __int64 *a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // rdx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __int128 v9; // xmm2
  __int64 v11; // rcx
  const __m128i *v12; // rdi
  __int64 v13; // r14
  char v14; // al
  __int64 v15; // r15
  __int64 *v16; // r13
  int v17; // edi
  __m128i *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // cl
  const __m128i *v22; // rdi
  __int64 v23; // r14
  const __m128i *v24; // rdi
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // r12
  const __m128i *v28; // rdi
  __int64 v29; // rax
  PVOID v30; // rcx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // r14
  __int64 v36; // r9
  const __m128i *v37; // rcx
  char v38; // al
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __int128 v41; // xmm2
  char v42; // al
  char v43; // al
  char v44; // r12
  bool v45; // di
  __int64 v46; // r14
  _BYTE *v47; // rdx
  __int64 v48; // rcx
  bool v49; // r15
  __m128i v50; // xmm1
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r15
  __int64 v57; // r9
  __int64 v58; // rbx
  __int64 v59; // r12
  unsigned __int128 v60; // kr30_16
  __m128i v61; // xmm1
  bool v62; // r12
  __m128i v63; // xmm1
  __m128i v64; // xmm1
  __m128i v65; // xmm1
  __int128 v66; // rax
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __m128i v69; // xmm1
  __int128 v70; // xmm2
  __int128 v71; // xmm3
  __m128i v72; // xmm0
  __m128i v73; // xmm1
  __m128i v74; // xmm1
  __int128 v75; // xmm2
  __int128 v76; // xmm3
  __m128i v77; // xmm0
  __m128i v78; // xmm1
  __m128i v79; // xmm1
  __int128 v80; // xmm2
  __int128 v81; // xmm3
  __m128i v82; // xmm0
  __m128i v83; // xmm1
  __m128i v84; // xmm0
  __m128i v85; // xmm1
  __m128i v86; // xmm0
  __m128i v87; // xmm1
  __int128 v88; // xmm2
  __m128i v89; // xmm0
  __m128i v90; // xmm1
  __int64 v91; // rax
  __m128i v92; // xmm0
  __m128i v93; // xmm1
  __int128 v94; // xmm2
  __int64 v95; // rcx
  char v96; // al
  __int64 v97; // rcx
  char v98; // al
  __m128i *v99; // rdi
  __m128i *v100; // rdi
  char v101; // cl
  __int64 v102; // [rsp+50h] [rbp-30h] BYREF
  __m128i v103; // [rsp+58h] [rbp-28h]
  __m128i v104; // [rsp+68h] [rbp-18h]
  __int128 v105; // [rsp+78h] [rbp-8h]
  __int128 v106; // [rsp+88h] [rbp+8h]
  __int128 v107; // [rsp+98h] [rbp+18h]
  __m128i si128; // [rsp+A8h] [rbp+28h]
  char v109[888]; // [rsp+B8h] [rbp+38h] BYREF
  _BYTE v110[296]; // [rsp+430h] [rbp+3B0h] BYREF
  _BYTE v111[24]; // [rsp+558h] [rbp+4D8h] BYREF
  _BYTE v112[104]; // [rsp+570h] [rbp+4F0h] BYREF
  char v113[896]; // [rsp+5D8h] [rbp+558h] BYREF
  __m128i v114; // [rsp+958h] [rbp+8D8h] BYREF
  __int64 v115; // [rsp+968h] [rbp+8E8h]
  _QWORD v116[4]; // [rsp+970h] [rbp+8F0h] BYREF
  __m128i v117; // [rsp+990h] [rbp+910h] BYREF
  __m128i v118; // [rsp+9A0h] [rbp+920h] BYREF
  __int128 v119; // [rsp+9B0h] [rbp+930h]
  __int128 v120; // [rsp+9C0h] [rbp+940h]
  __int128 v121; // [rsp+9D0h] [rbp+950h]
  __int128 v122; // [rsp+9E0h] [rbp+960h]
  __m128i v123; // [rsp+9F0h] [rbp+970h] BYREF
  __m128i v124; // [rsp+A00h] [rbp+980h] BYREF
  __int128 v125; // [rsp+A10h] [rbp+990h]
  __int128 v126; // [rsp+A20h] [rbp+9A0h] BYREF
  __int128 v127; // [rsp+A30h] [rbp+9B0h]
  __m128i v128[13]; // [rsp+A40h] [rbp+9C0h] BYREF
  char v129; // [rsp+B14h] [rbp+A94h]
  unsigned __int8 v130[11]; // [rsp+B15h] [rbp+A95h] BYREF
  __m128i v131; // [rsp+B20h] [rbp+AA0h] BYREF
  __m128i v132; // [rsp+B30h] [rbp+AB0h] BYREF
  __int128 v133; // [rsp+B40h] [rbp+AC0h]
  __int128 v134; // [rsp+B50h] [rbp+AD0h] BYREF
  __int64 v135; // [rsp+B60h] [rbp+AE0h]
  __int64 v136; // [rsp+B68h] [rbp+AE8h] BYREF
  __int64 v137; // [rsp+B70h] [rbp+AF0h]
  __int64 v138; // [rsp+B78h] [rbp+AF8h]
  unsigned __int128 v139; // [rsp+B88h] [rbp+B08h]
  __int64 v140; // [rsp+B98h] [rbp+B18h]
  __int64 v141; // [rsp+BA0h] [rbp+B20h]
  __int64 v142; // [rsp+BA8h] [rbp+B28h]
  __int64 v143; // [rsp+BB0h] [rbp+B30h]
  __int64 v144; // [rsp+BB8h] [rbp+B38h]
  __int64 v145; // [rsp+BC0h] [rbp+B40h]
  __int64 v146; // [rsp+BC8h] [rbp+B48h]
  __int64 v147; // [rsp+BD0h] [rbp+B50h]
  __int128 v148; // [rsp+BD8h] [rbp+B58h]
  __int128 v149; // [rsp+BE8h] [rbp+B68h]
  __int64 v150; // [rsp+BF8h] [rbp+B78h]
  __m128i v151; // [rsp+C00h] [rbp+B80h] BYREF
  __m128i v152; // [rsp+C10h] [rbp+B90h] BYREF
  __int128 v153; // [rsp+C20h] [rbp+BA0h]
  __m256i v154; // [rsp+C30h] [rbp+BB0h] BYREF
  __int64 v155; // [rsp+C50h] [rbp+BD0h]
  _BYTE v156[48]; // [rsp+C58h] [rbp+BD8h]
  __int64 v157; // [rsp+C88h] [rbp+C08h]
  __int64 v158; // [rsp+C90h] [rbp+C10h]
  __int64 v159; // [rsp+C98h] [rbp+C18h]
  __int64 v160; // [rsp+CA8h] [rbp+C28h]
  const __m128i *v161; // [rsp+CB0h] [rbp+C30h] BYREF
  __int64 v162; // [rsp+CB8h] [rbp+C38h]
  __int64 v163; // [rsp+CC0h] [rbp+C40h]
  PVOID Address; // [rsp+CC8h] [rbp+C48h]
  __int64 v165; // [rsp+CD0h] [rbp+C50h]
  _BYTE v166[80]; // [rsp+CD8h] [rbp+C58h] BYREF
  __m128i v167; // [rsp+D28h] [rbp+CA8h]
  __int64 v168; // [rsp+D38h] [rbp+CB8h]
  int v169; // [rsp+D44h] [rbp+CC4h]
  _BYTE v170[2]; // [rsp+D49h] [rbp+CC9h] BYREF
  bool v171; // [rsp+D4Bh] [rbp+CCBh]
  char v172; // [rsp+D4Ch] [rbp+CCCh]
  char v173; // [rsp+D4Dh] [rbp+CCDh]
  char v174; // [rsp+D4Eh] [rbp+CCEh] BYREF
  unsigned __int8 v175; // [rsp+D4Fh] [rbp+CCFh]
  __int64 v176; // [rsp+D50h] [rbp+CD0h]

  v176 = -2;
  v161 = a3;
  v162 = a4;
  v6 = a2[2];
  if ( *(_QWORD *)(v6 + 16) != -1 )
  {
    sub_14149C500(&v112[8], v6 + 16);
    *(_QWORD *)v112 = 9;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v112[80];
    v7 = _mm_loadu_si128((const __m128i *)&v112[16]);
    v8 = _mm_loadu_si128((const __m128i *)&v112[32]);
    v9 = *(_OWORD *)&v112[48];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v112[64];
    *(_OWORD *)(a1 + 48) = v9;
    *(__m128i *)(a1 + 32) = v8;
    *(__m128i *)(a1 + 16) = v7;
    *(_OWORD *)a1 = *(_OWORD *)v112;
    return a1;
  }
  if ( a4 != 3
    || (v11 = a3->m128i_u8[2] ^ 0x6Cu, LOWORD(v11) = a3->m128i_i16[0] ^ 0x6C61 | a3->m128i_u8[2] ^ 0x6C, (_WORD)v11) )
  {
    v12 = a3;
    v13 = a4;
    v14 = sub_14076D370(a3, a4);
    a4 = v13;
    a3 = v12;
    if ( v14 == 2 )
    {
      *(_QWORD *)v112 = &v161;
      *(_QWORD *)&v112[8] = sub_14041F680;
      sub_14149C0F0(a1 + 8, &unk_141796A83, v112);
      *(_QWORD *)a1 = 10;
      return a1;
    }
  }
  v15 = a2[4];
  LOBYTE(v11) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v15 + 16), 1, 0) )
  {
    v22 = a3;
    v23 = a4;
    sub_1416C15B0((volatile void *)(v15 + 16));
    a4 = v23;
    a3 = v22;
  }
  v16 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v24 = a3;
    v25 = a4;
    v26 = sub_1416C2250(v11, v6);
    a4 = v25;
    a3 = v24;
    v17 = v26;
    LOBYTE(v17) = v26 ^ 1;
    if ( *(_BYTE *)(v15 + 17) )
      goto LABEL_12;
  }
  else
  {
    v17 = 0;
    if ( *(_BYTE *)(v15 + 17) )
    {
LABEL_12:
      nullsub_1(v11);
      v18 = (__m128i *)sub_140001650(40, 1);
      if ( !v18 )
      {
        v169 = v17;
        v168 = v15;
        sub_1416C2D4B(1, 40);
      }
      qmemcpy(&v18[1], "nsition lock is poisoned", 24);
      *v18 = _mm_loadu_si128((const __m128i *)&xmmword_141795608);
      if ( !(_BYTE)v17 )
      {
        v20 = 2 * *v16;
        if ( v20 )
        {
          v100 = v18;
          v101 = sub_1416C2250(v20, v19);
          v18 = v100;
          if ( !v101 )
            *(_BYTE *)(v15 + 17) = 1;
        }
      }
      v21 = *(_BYTE *)(v15 + 16);
      *(_BYTE *)(v15 + 16) = 0;
      if ( v21 == 2 )
      {
        v99 = v18;
        WakeByAddressSingle((PVOID)(v15 + 16));
        v18 = v99;
      }
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 40;
      *(_QWORD *)(a1 + 16) = v18;
      *(_QWORD *)(a1 + 24) = 40;
      return a1;
    }
  }
  v169 = v17;
  v168 = v15;
  v27 = a4;
  v28 = a3;
  lock((__int64)v112, a2 + 5, (__int64)aRepairingCodex, 27);
  v30 = *(PVOID *)&v112[8];
  v29 = *(_QWORD *)v112;
  v31 = v112[16];
  if ( *(_QWORD *)v112 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v112[80];
    v32 = _mm_loadu_si128((const __m128i *)&v112[17]);
    v33 = _mm_loadu_si128((const __m128i *)&v112[33]);
    v34 = *(_OWORD *)&v112[49];
    *(_OWORD *)(a1 + 65) = *(_OWORD *)&v112[65];
    *(_OWORD *)(a1 + 49) = v34;
    *(__m128i *)(a1 + 33) = v33;
    *(__m128i *)(a1 + 17) = v32;
    *(_QWORD *)a1 = v29;
    *(_QWORD *)(a1 + 8) = v30;
    *(_BYTE *)(a1 + 16) = v31;
    goto LABEL_84;
  }
  v175 = v112[16];
  Address = *(PVOID *)&v112[8];
  sub_14085A1E0((__int64)v110, (__int64)a2);
  transition_paths((__int64)v112, *a2);
  v35 = *(_QWORD *)v112;
  v123 = *(__m128i *)&v112[8];
  v124 = *(__m128i *)&v112[24];
  v125 = *(_OWORD *)&v112[40];
  v126 = *(_OWORD *)&v112[56];
  v127 = *(_OWORD *)&v112[72];
  v128[0] = *(__m128i *)&v112[88];
  if ( *(_QWORD *)v112 != -1 )
  {
    sub_141684120(v109, v113, 888);
    v103 = v123;
    v104 = _mm_load_si128(&v124);
    v105 = v125;
    v106 = v126;
    v107 = v127;
    si128 = _mm_load_si128(v128);
    v102 = v35;
    LOBYTE(v36) = 1;
    run_diagnostics_with_mode(&v136, &v102, v110, v36);
    v37 = v28;
    if ( v27 == 20 )
    {
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128(v28), (__m128i)xmmword_1417862A0),
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(v28[1].m128i_u32[0]), (__m128i)xmmword_1416C6760))) == 0xFFFF )
      {
        v38 = 1;
LABEL_30:
        v174 = v38;
        goto LABEL_31;
      }
    }
    else if ( v27 == 3 )
    {
      if ( v28->m128i_i16[0] ^ 0x6C61 | v28->m128i_u8[2] ^ 0x6C )
      {
        v42 = 0;
      }
      else
      {
        *(_QWORD *)v112 = v137;
        *(_QWORD *)&v112[8] = v137 + 104 * v138;
        v42 = sub_1407E2190(v112);
        v37 = v28;
      }
      v174 = v42;
      if ( !(v37->m128i_i16[0] ^ 0x6C61 | v37->m128i_u8[2] ^ 0x6C) )
      {
        *(_QWORD *)v112 = v137;
        *(_QWORD *)&v112[8] = v137 + 104 * v138;
        v43 = sub_1407E2120(v112);
LABEL_32:
        v44 = v43;
        v45 = 1;
        if ( (unsigned int)sub_140AECEB0(aChatgpt, 7) != 1 )
          v45 = (unsigned int)sub_140AECEB0(aCodex_0, 5) == 1;
        if ( v162 == 20
          && _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128(v161), (__m128i)xmmword_1417862A0),
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(v161[1].m128i_u32[0]), (__m128i)xmmword_1416C6760))) == 0xFFFF )
        {
          sub_1408547A0((unsigned int)v166, (_DWORD)a2, (unsigned int)aManualReconcil, 16, 0);
          v49 = 1;
          v46 = *(_QWORD *)v166;
        }
        else
        {
          v116[0] = a2;
          v116[1] = &v161;
          v116[2] = &v102;
          v116[3] = v110;
          if ( (v44 & 1) != 0 )
          {
            sub_14085A1E0((__int64)&v123, (__int64)a2);
            sub_1407BC950(v112, &v102);
            v171 = v45;
            v170[0] = v129 ^ 1;
            *(_QWORD *)v166 = v116;
            *(_QWORD *)&v166[8] = a2;
            *(_QWORD *)&v166[16] = v112;
            *(_QWORD *)&v166[24] = v170;
            *(_QWORD *)&v166[32] = &v174;
            v131.m128i_i64[0] = (__int64)a2;
            v131.m128i_i64[1] = (__int64)v112;
            v132.m128i_i64[0] = (__int64)v170;
            run_with_writer_policy(
              (__int128 *)v151.m128i_i8,
              v112,
              v129 ^ 1,
              0,
              (__int64)aDiagnosticRepa,
              17,
              (__int64)v166,
              v131.m128i_i64,
              (__int64)a2,
              v130);
            v46 = v151.m128i_i64[1];
            if ( v151.m128i_i64[0] == -2 )
            {
              *(_QWORD *)v166 = v151.m128i_i64[1];
              *(__m128i *)&v166[8] = v152;
              *(_OWORD *)&v166[24] = v153;
              *(__m256i *)&v166[40] = v154;
              *(_QWORD *)&v166[72] = v155;
              v167 = *(__m128i *)v156;
              v45 = v171;
              v16 = off_141EC90B8;
            }
            else
            {
              v165 = v155;
              v145 = v152.m128i_i64[1];
              v146 = v152.m128i_i64[0];
              v144 = v153;
              v143 = *(_QWORD *)v156;
              v160 = *(_QWORD *)&v156[8];
              v142 = *((_QWORD *)&v153 + 1);
              v140 = v154.m256i_i64[1];
              v141 = v154.m256i_i64[0];
              v139 = *(_OWORD *)&v154.m256i_u64[2];
              v163 = v151.m128i_i64[0];
              if ( v151.m128i_i32[0] == -1 )
              {
                v51 = 8;
                v150 = v142;
                v148 = *(_OWORD *)&v156[32];
                v149 = *(_OWORD *)&v156[16];
                v59 = v141;
                v58 = v140;
                v60 = v139;
                v54 = v157;
                v57 = v165;
                v147 = 0;
                v165 = 0;
                v55 = v143;
                v52 = v144;
                v53 = v145;
                v56 = v146;
              }
              else
              {
                v51 = v158;
                v147 = v159;
                v150 = v144;
                v148 = *(_OWORD *)&v156[24];
                v52 = v145;
                *(_QWORD *)&v149 = v160;
                *((_QWORD *)&v149 + 1) = *(_QWORD *)&v156[16];
                v160 = v143;
                v53 = v146;
                v54 = *(_QWORD *)&v156[40];
                v55 = v165;
                v56 = v151.m128i_i64[1];
                v46 = v163;
                v165 = v157;
                v57 = *((_QWORD *)&v139 + 1);
                v58 = v141;
                v59 = v142;
                v60 = __PAIR128__(v139, v140);
              }
              v16 = off_141EC90B8;
              v163 = v46;
              v151.m128i_i64[0] = v46;
              v151.m128i_i64[1] = v56;
              v152.m128i_i64[0] = v53;
              v152.m128i_i64[1] = v52;
              *(_QWORD *)&v153 = v150;
              *((_QWORD *)&v153 + 1) = v59;
              v154.m256i_i64[0] = v58;
              *(_OWORD *)&v154.m256i_u64[1] = v60;
              v154.m256i_i64[3] = v57;
              v155 = v55;
              *(_QWORD *)v156 = v160;
              *(_OWORD *)&v156[8] = v149;
              *(_OWORD *)&v156[24] = v148;
              *(_QWORD *)&v156[40] = v54;
              v135 = v54;
              v134 = v148;
              v133 = v149;
              v132.m128i_i64[0] = v55;
              v132.m128i_i64[1] = v160;
              *(_QWORD *)v166 = v51;
              *(_QWORD *)&v166[16] = v165;
              *(_QWORD *)&v166[8] = v51;
              v131 = _mm_loadu_si128((const __m128i *)&v154.m256i_u64[2]);
              *(_QWORD *)&v166[24] = v51 + 24 * v147;
              sub_140322D70(&v134, v166);
              v64 = _mm_load_si128(&v132);
              *(__m128i *)&v166[8] = _mm_load_si128(&v131);
              *(__m128i *)&v166[24] = v64;
              *(_OWORD *)&v166[40] = v133;
              *(_OWORD *)&v166[56] = v134;
              *(_QWORD *)&v166[72] = v135;
              *(_QWORD *)v166 = -1;
              v45 = v171;
              if ( v163 != 2 )
                sub_1406CE2E0(&v151);
              v46 = -1;
            }
            sub_140016620(v112);
            sub_140018740(&v123);
            v49 = 1;
          }
          else
          {
            *(_QWORD *)v166 = a2;
            if ( v162 == 3 && !(v161->m128i_i16[0] ^ 0x6C61 | v161->m128i_u8[2] ^ 0x6C) )
              sub_140790A30(
                (unsigned int)v112,
                (unsigned int)&v102,
                (unsigned int)v110,
                (unsigned int)v166,
                (__int64)&unk_1417950F0,
                0);
            else
              fix_thread_poisoned_instructions(
                (__int64)v112,
                (__int64)&v102,
                (__int64)v110,
                (__int64)v161,
                v162,
                (__int64)v166,
                (__int64)&unk_1417950F0,
                0);
            v46 = *(_QWORD *)v112;
            v123 = *(__m128i *)&v112[8];
            v124 = *(__m128i *)&v112[24];
            v125 = *(_OWORD *)&v112[40];
            v126 = *(_OWORD *)&v112[56];
            *(_QWORD *)&v127 = *(_QWORD *)&v112[72];
            v49 = *(_QWORD *)v112 == -1;
            if ( *(_QWORD *)v112 == -1 )
            {
              v61 = _mm_load_si128(&v124);
              v151 = _mm_load_si128(&v123);
              v152 = v61;
              v153 = v125;
              *(_OWORD *)v154.m256i_i8 = v126;
              v154.m256i_i64[2] = v127;
              v62 = v174;
              if ( v174 )
              {
                sub_1408547A0((unsigned int)v112, (_DWORD)a2, (unsigned int)aManualReconcil, 16, 0);
                v46 = *(_QWORD *)v112;
                v123 = *(__m128i *)&v112[8];
                v124 = *(__m128i *)&v112[24];
                v125 = *(_OWORD *)&v112[40];
                v126 = *(_OWORD *)&v112[56];
                *(_QWORD *)&v127 = *(_QWORD *)&v112[72];
                if ( *(_QWORD *)v112 != -1 )
                {
                  v167 = *(__m128i *)&v112[80];
                  v63 = _mm_load_si128(&v124);
                  *(__m128i *)&v166[8] = _mm_load_si128(&v123);
                  *(__m128i *)&v166[24] = v63;
                  *(_OWORD *)&v166[40] = v125;
                  *(_OWORD *)&v166[56] = v126;
                  *(_QWORD *)&v166[72] = v127;
                  *(_QWORD *)v166 = *(_QWORD *)v112;
                  sub_14052E730(&v151);
                  goto LABEL_61;
                }
                v65 = _mm_load_si128(&v124);
                *(__m128i *)v112 = _mm_load_si128(&v123);
                *(__m128i *)&v112[16] = v65;
                *(_OWORD *)&v112[32] = v125;
                *(_OWORD *)&v112[48] = v126;
                *(_QWORD *)&v112[64] = v127;
                *(_QWORD *)&v66 = *(_QWORD *)v112;
                *((_QWORD *)&v66 + 1) = *(_QWORD *)&v112[8] + 24 * v65.m128i_i64[0];
                *(_QWORD *)v166 = *(_QWORD *)&v112[8];
                *(_OWORD *)&v166[16] = v66;
                *(_QWORD *)&v166[8] = *(_QWORD *)&v112[8];
                v173 = 1;
                v172 = 1;
                sub_140322D70(&v151, v166);
                *(_QWORD *)v166 = *(_QWORD *)&v112[32];
                *(_QWORD *)&v166[16] = *(_QWORD *)&v112[24];
                *(_QWORD *)&v166[8] = *(_QWORD *)&v112[32];
                *(_QWORD *)&v166[24] = *(_QWORD *)&v112[32] + 24LL * *(_QWORD *)&v112[40];
                v173 = 1;
                v172 = 0;
                sub_140322D70(&v152.m128i_u64[1], v166);
                *(_QWORD *)v166 = *(_QWORD *)&v112[56];
                *(_QWORD *)&v166[8] = *(_QWORD *)&v112[56];
                *(_QWORD *)&v166[16] = *(_QWORD *)&v112[48];
                *(_QWORD *)&v166[24] = *(_QWORD *)&v112[56] + 24LL * *(_QWORD *)&v112[64];
                v173 = 0;
                v172 = 0;
                sub_140322D70(&v154, v166);
              }
              *(_QWORD *)&v166[72] = v154.m256i_i64[2];
              v67 = _mm_load_si128(&v151);
              v68 = _mm_load_si128(&v152);
              *(_OWORD *)&v166[56] = *(_OWORD *)v154.m256i_i8;
              *(_OWORD *)&v166[40] = v153;
              *(__m128i *)&v166[24] = v68;
              *(__m128i *)&v166[8] = v67;
              *(_QWORD *)v166 = -1;
              v46 = -1;
              v49 = v62;
              goto LABEL_61;
            }
            v167 = *(__m128i *)&v112[80];
            v50 = _mm_load_si128(&v124);
            *(__m128i *)&v166[8] = _mm_load_si128(&v123);
            *(__m128i *)&v166[24] = v50;
            *(_OWORD *)&v166[40] = v125;
            *(_OWORD *)&v166[56] = v126;
            *(_QWORD *)&v166[72] = v127;
            *(_QWORD *)v166 = *(_QWORD *)v112;
          }
        }
LABEL_61:
        if ( v49 && v46 == -1 )
        {
          if ( v45 )
          {
            sub_1403B6530(&v117, (__int64)v47);
            v69 = _mm_loadu_si128((const __m128i *)&v166[16]);
            v70 = *(_OWORD *)&v166[32];
            v71 = *(_OWORD *)&v166[48];
            *(_OWORD *)a1 = *(_OWORD *)v166;
            *(__m128i *)(a1 + 80) = v167;
            *(__m128i *)(a1 + 64) = _mm_loadu_si128((const __m128i *)&v166[64]);
            *(_OWORD *)(a1 + 48) = v71;
            *(_OWORD *)(a1 + 32) = v70;
            *(__m128i *)(a1 + 16) = v69;
            v47 = v112;
            if ( *(_DWORD *)a1 != -1 )
            {
              if ( v117.m128i_i32[0] != -1 )
              {
                v128[0] = v167;
                v127 = *(_OWORD *)&v166[64];
                v126 = *(_OWORD *)&v166[48];
                v125 = *(_OWORD *)&v166[32];
                v124 = *(__m128i *)&v166[16];
                v123 = *(__m128i *)v166;
                *(_OWORD *)&v112[80] = v122;
                *(_OWORD *)&v112[64] = v121;
                v72 = _mm_loadu_si128(&v117);
                v73 = _mm_loadu_si128(&v118);
                *(_OWORD *)&v112[48] = v120;
                *(_OWORD *)&v112[32] = v119;
                *(__m128i *)&v112[16] = v73;
                *(__m128i *)v112 = v72;
                v151.m128i_i64[0] = (__int64)&v123;
                v151.m128i_i64[1] = (__int64)sub_140B036A0;
                v152.m128i_i64[0] = (__int64)v112;
                v152.m128i_i64[1] = (__int64)sub_140B036A0;
                sub_14149C0F0(&v114, &unk_141796A17, &v151);
                *(_QWORD *)(a1 + 24) = v115;
                *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v114);
                *(_QWORD *)a1 = 10;
                sub_1407DA310(v112);
                sub_1407DA310(&v123);
              }
              goto LABEL_78;
            }
            if ( v117.m128i_i32[0] != -1 )
            {
              *(_QWORD *)&v127 = *(_QWORD *)&v166[72];
              v126 = *(_OWORD *)&v166[56];
              v125 = *(_OWORD *)&v166[40];
              v124 = *(__m128i *)&v166[24];
              v123 = *(__m128i *)&v166[8];
              *(_OWORD *)&v112[80] = v122;
              *(_OWORD *)&v112[64] = v121;
              v84 = _mm_loadu_si128(&v117);
              v85 = _mm_loadu_si128(&v118);
              *(_OWORD *)&v112[48] = v120;
              *(_OWORD *)&v112[32] = v119;
              *(__m128i *)&v112[16] = v85;
              *(__m128i *)v112 = v84;
              v151.m128i_i64[0] = (__int64)v112;
              v151.m128i_i64[1] = (__int64)sub_140B036A0;
              sub_14149C0F0(v111, &unk_1417969C3, &v151);
              sub_1403B1EC0(&v126, v111);
              *(_QWORD *)(a1 + 72) = v127;
              v86 = _mm_load_si128(&v123);
              v87 = _mm_load_si128(&v124);
              v88 = v125;
              *(_OWORD *)(a1 + 56) = v126;
              *(_OWORD *)(a1 + 40) = v88;
              *(__m128i *)(a1 + 24) = v87;
              *(__m128i *)(a1 + 8) = v86;
              *(_QWORD *)a1 = -1;
              v170[1] = 0;
              sub_1407DA310(v112);
              goto LABEL_78;
            }
            v48 = *(_QWORD *)&v166[72];
            *(_QWORD *)&v112[64] = *(_QWORD *)&v166[72];
            v89 = _mm_loadu_si128((const __m128i *)&v166[8]);
            v90 = _mm_loadu_si128((const __m128i *)&v166[24]);
            *(_OWORD *)&v112[48] = *(_OWORD *)&v166[56];
            *(_OWORD *)&v112[32] = *(_OWORD *)&v166[40];
            *(__m128i *)&v112[16] = v90;
            *(__m128i *)v112 = v89;
            goto LABEL_75;
          }
          v117.m128i_i64[0] = -1;
          v79 = _mm_loadu_si128((const __m128i *)&v166[16]);
          v80 = *(_OWORD *)&v166[32];
          v81 = *(_OWORD *)&v166[48];
          *(_OWORD *)a1 = *(_OWORD *)v166;
          *(__m128i *)(a1 + 80) = v167;
          *(__m128i *)(a1 + 64) = _mm_loadu_si128((const __m128i *)&v166[64]);
          *(_OWORD *)(a1 + 48) = v81;
          *(_OWORD *)(a1 + 32) = v80;
          *(__m128i *)(a1 + 16) = v79;
          if ( *(_DWORD *)a1 == -1 )
          {
            *(_QWORD *)&v112[64] = *(_QWORD *)&v166[72];
            v82 = _mm_loadu_si128((const __m128i *)&v166[8]);
            v83 = _mm_loadu_si128((const __m128i *)&v166[24]);
            *(_OWORD *)&v112[48] = *(_OWORD *)&v166[56];
            *(_OWORD *)&v112[32] = *(_OWORD *)&v166[40];
            *(__m128i *)&v112[16] = v83;
            *(__m128i *)v112 = v82;
            goto LABEL_77;
          }
        }
        else
        {
          v117.m128i_i64[0] = -1;
          v74 = _mm_loadu_si128((const __m128i *)&v166[16]);
          v75 = *(_OWORD *)&v166[32];
          v76 = *(_OWORD *)&v166[48];
          *(_OWORD *)a1 = *(_OWORD *)v166;
          *(__m128i *)(a1 + 80) = v167;
          *(__m128i *)(a1 + 64) = _mm_loadu_si128((const __m128i *)&v166[64]);
          *(_OWORD *)(a1 + 48) = v76;
          *(_OWORD *)(a1 + 32) = v75;
          *(__m128i *)(a1 + 16) = v74;
          if ( *(_DWORD *)a1 == -1 )
          {
            *(_QWORD *)&v112[64] = *(_QWORD *)&v166[72];
            v77 = _mm_loadu_si128((const __m128i *)&v166[8]);
            v78 = _mm_loadu_si128((const __m128i *)&v166[24]);
            *(_OWORD *)&v112[48] = *(_OWORD *)&v166[56];
            *(_OWORD *)&v112[32] = *(_OWORD *)&v166[40];
            *(__m128i *)&v112[16] = v78;
            *(__m128i *)v112 = v77;
            if ( v49 && v45 )
            {
LABEL_75:
              nullsub_1(v48);
              v91 = sub_140001650(45, 1);
              if ( !v91 )
                sub_1416C2D4B(1, 45);
              *(_OWORD *)(v91 + 29) = *(__int128 *)((char *)&xmmword_141796A66 + 13);
              *(_OWORD *)(v91 + 16) = xmmword_141796A66;
              *(__m128i *)v91 = _mm_loadu_si128((const __m128i *)&xmmword_141796A56);
              v123.m128i_i64[0] = 45;
              v123.m128i_i64[1] = v91;
              v124.m128i_i64[0] = 45;
              sub_1403B1EC0(&v112[48], &v123);
            }
LABEL_77:
            *(_QWORD *)(a1 + 72) = *(_QWORD *)&v112[64];
            v92 = _mm_load_si128((const __m128i *)v112);
            v93 = _mm_load_si128((const __m128i *)&v112[16]);
            v94 = *(_OWORD *)&v112[32];
            *(_OWORD *)(a1 + 56) = *(_OWORD *)&v112[48];
            *(_OWORD *)(a1 + 40) = v94;
            *(__m128i *)(a1 + 24) = v93;
            *(__m128i *)(a1 + 8) = v92;
            *(_QWORD *)a1 = -1;
          }
        }
LABEL_78:
        sub_1403351C0(&v136, v47);
        if ( v136 )
          sub_140001660(v137, 104 * v136, 8);
        sub_140016620(&v102);
        sub_140018740(v110);
        if ( (v175 & 1) == 0 && 2 * *v16 && !(unsigned __int8)sub_1416C2250(v95, v31) )
          *((_BYTE *)Address + 1) = 1;
        v30 = Address;
        v96 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        if ( v96 == 2 )
          WakeByAddressSingle(v30);
        goto LABEL_84;
      }
LABEL_31:
      v43 = sub_14076D370(v161, v162);
      goto LABEL_32;
    }
    v38 = 0;
    goto LABEL_30;
  }
  *(__m128i *)(a1 + 80) = v128[0];
  *(_OWORD *)(a1 + 64) = v127;
  v39 = _mm_load_si128(&v123);
  v40 = _mm_load_si128(&v124);
  v41 = v125;
  *(_OWORD *)(a1 + 48) = v126;
  *(_OWORD *)(a1 + 32) = v41;
  *(__m128i *)(a1 + 16) = v40;
  *(__m128i *)a1 = v39;
  sub_140018740(v110);
  sub_14000E270(Address, v175);
LABEL_84:
  if ( !(_BYTE)v169 && 2 * *v16 && !(unsigned __int8)sub_1416C2250(v30, v31) )
    *(_BYTE *)(v168 + 17) = 1;
  v97 = v168;
  v98 = *(_BYTE *)(v168 + 16);
  *(_BYTE *)(v168 + 16) = 0;
  if ( v98 == 2 )
    WakeByAddressSingle((PVOID)(v97 + 16));
  return a1;
}