// module: codexmate_lib/core/account_io
// addr: 0x14085d1b0
// name: export_accounts
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::account_io::export_accounts | 跨平台字符串签名匹配(名↔函数一致)
__int64 *__fastcall export_accounts(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __m128i *v5; // rbx
  __m128i v9; // xmm1
  __int64 v10; // rcx
  __int64 v11; // rdi
  __m128i *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // r14
  __int64 v19; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rbx
  __m128i v26; // xmm0
  __m128i si128; // xmm1
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __int64 v36; // rax
  __int64 v37; // rax
  __m128i *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rcx
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __int128 v44; // xmm2
  __int64 v45; // rdx
  __int64 v46; // r12
  __m128i *v47; // r13
  __int64 v48; // rbx
  unsigned __int64 v49; // rax
  __int64 v50; // r15
  __m128i v51; // xmm0
  __m128i v52; // xmm7
  __int64 v53; // rdi
  __int64 v54; // r14
  __int64 i; // rdx
  __int64 v56; // rax
  __m128i v57; // xmm8
  int v59; // eax
  bool v60; // zf
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int128 v65; // kr30_16
  bool v66; // bl
  __int64 v67; // r13
  __int64 v68; // rsi
  __m128i v69; // xmm1
  __int64 v70; // rdi
  __m128i v71; // xmm0
  __m128i v72; // xmm1
  __int64 v73; // rsi
  __int64 v74; // rbx
  __m128i v75; // xmm0
  __m128i v76; // xmm1
  int v77; // edi
  int v78; // ebx
  __m128i v79; // xmm1
  __int64 v80; // rcx
  __m128i *v81; // rax
  __int64 v82; // r13
  __int128 v83; // kr80_16
  __int64 v84; // rdi
  __m256i *v85; // rcx
  __m128i *v86; // rsi
  __m128i v87; // xmm1
  bool v88; // si
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rcx
  __m128i v92; // xmm0
  __m128i v93; // xmm1
  __int128 v94; // xmm2
  unsigned __int64 v95; // rsi
  unsigned __int64 v96; // rdi
  __int64 v97; // rbx
  unsigned __int128 v98; // krE0_16
  unsigned __int128 v99; // krF0_16
  __int64 v100; // rax
  __int64 v101; // rsi
  char v102; // di
  char v103; // bl
  __int64 v104; // rsi
  __int64 v105; // rsi
  __int64 v106; // r13
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // rcx
  __m128i *v111; // rax
  __int64 *v112; // rcx
  __int32 v113; // edx
  __int64 v114; // rcx
  __int64 v115; // r14
  __int32 v116; // r15d
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rdx
  _BYTE *v122; // rax
  _QWORD *v123; // r12
  __int64 v124; // rax
  __m128i v125; // kr120_16
  __int64 v126; // rbx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 *v129; // rax
  __int64 v130; // rsi
  _QWORD *v131; // rdi
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rdx
  __int64 v136; // rcx
  __int64 v137; // rsi
  __int64 v138; // rdi
  __int64 v139; // rbx
  __int64 v140; // r14
  const __m128i *v141; // r15
  __int64 v143; // r12
  __m128i v144; // xmm0
  __int64 v145; // rax
  __int64 v146; // rdx
  unsigned __int64 v147; // rax
  __int64 v148; // rbx
  __int64 v149; // rax
  __int64 v150; // rdx
  unsigned __int64 v151; // rbx
  void *v152; // r12
  __int64 v153; // rsi
  __int64 v154; // rax
  __int64 v155; // rdx
  __m128i v156; // rax
  __int64 v157; // rbx
  __int64 v158; // rax
  __int64 v159; // r8
  __int64 *v160; // rcx
  __m128i v161; // xmm0
  __int64 *v162; // rcx
  _BYTE v163[40]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v164; // [rsp+58h] [rbp-28h]
  __int64 v165; // [rsp+60h] [rbp-20h]
  __int64 v166; // [rsp+138h] [rbp+B8h]
  __int64 v167; // [rsp+140h] [rbp+C0h]
  __int64 v168; // [rsp+158h] [rbp+D8h]
  __int64 v169; // [rsp+160h] [rbp+E0h]
  __int64 v170; // [rsp+178h] [rbp+F8h]
  __int64 v171; // [rsp+180h] [rbp+100h]
  __int128 v172; // [rsp+410h] [rbp+390h] BYREF
  __int64 v173; // [rsp+420h] [rbp+3A0h]
  __int128 v174; // [rsp+428h] [rbp+3A8h] BYREF
  __int64 v175; // [rsp+438h] [rbp+3B8h]
  _BYTE v176[24]; // [rsp+440h] [rbp+3C0h] BYREF
  __int64 v177; // [rsp+458h] [rbp+3D8h]
  char v178[144]; // [rsp+460h] [rbp+3E0h] BYREF
  _QWORD v179[3]; // [rsp+4F0h] [rbp+470h] BYREF
  _OWORD v180[4]; // [rsp+508h] [rbp+488h] BYREF
  _QWORD v181[3]; // [rsp+548h] [rbp+4C8h] BYREF
  _QWORD v182[4]; // [rsp+560h] [rbp+4E0h] BYREF
  __m128i v183; // [rsp+580h] [rbp+500h] BYREF
  __int64 v184; // [rsp+590h] [rbp+510h]
  __int64 v185; // [rsp+610h] [rbp+590h]
  __int64 v186; // [rsp+618h] [rbp+598h]
  __m128i v187; // [rsp+620h] [rbp+5A0h] BYREF
  __m128i v188; // [rsp+630h] [rbp+5B0h]
  __int128 v189; // [rsp+640h] [rbp+5C0h] BYREF
  __m256i v190; // [rsp+650h] [rbp+5D0h] BYREF
  _QWORD v191[19]; // [rsp+670h] [rbp+5F0h] BYREF
  _BYTE *v192; // [rsp+708h] [rbp+688h] BYREF
  __int64 (__fastcall *v193)(_QWORD, _QWORD); // [rsp+710h] [rbp+690h]
  HANDLE v194; // [rsp+718h] [rbp+698h]
  __int64 v195; // [rsp+720h] [rbp+6A0h]
  __m128i *v196; // [rsp+728h] [rbp+6A8h]
  __int64 v197; // [rsp+730h] [rbp+6B0h]
  __int64 v198; // [rsp+738h] [rbp+6B8h]
  __int64 v199; // [rsp+740h] [rbp+6C0h]
  __int64 v200; // [rsp+748h] [rbp+6C8h]
  _BYTE v201[96]; // [rsp+750h] [rbp+6D0h] BYREF
  __int64 v202; // [rsp+7B0h] [rbp+730h] BYREF
  __m128i v203; // [rsp+7B8h] [rbp+738h] BYREF
  __int64 v204; // [rsp+7C8h] [rbp+748h]
  __m128i v205; // [rsp+7D0h] [rbp+750h]
  __int64 v206; // [rsp+7E0h] [rbp+760h]
  __int64 v207; // [rsp+7E8h] [rbp+768h]
  unsigned __int64 v208; // [rsp+7F0h] [rbp+770h]
  __int64 v209; // [rsp+7F8h] [rbp+778h]
  __int64 v210; // [rsp+800h] [rbp+780h]
  unsigned __int64 v211; // [rsp+808h] [rbp+788h]
  __int64 v212; // [rsp+810h] [rbp+790h]
  __int64 v213; // [rsp+818h] [rbp+798h]
  __int64 v214; // [rsp+820h] [rbp+7A0h]
  __int64 v215; // [rsp+828h] [rbp+7A8h]
  char v216[176]; // [rsp+830h] [rbp+7B0h] BYREF
  __int64 v217; // [rsp+8E0h] [rbp+860h]
  char v218; // [rsp+8E8h] [rbp+868h]
  char v219; // [rsp+8E9h] [rbp+869h]
  __int64 v220; // [rsp+8F8h] [rbp+878h]
  unsigned __int64 v221; // [rsp+900h] [rbp+880h]
  unsigned __int64 v222; // [rsp+908h] [rbp+888h]
  __m128i v223; // [rsp+910h] [rbp+890h] BYREF
  __m256i v224; // [rsp+920h] [rbp+8A0h] BYREF
  __int128 v225; // [rsp+940h] [rbp+8C0h]
  __int64 v226; // [rsp+950h] [rbp+8D0h]
  __int64 v227; // [rsp+9C8h] [rbp+948h]
  __int128 v228; // [rsp+9D0h] [rbp+950h] BYREF
  __int64 v229; // [rsp+9E0h] [rbp+960h]
  __int64 *v230; // [rsp+9E8h] [rbp+968h]
  __m128i v231; // [rsp+9F0h] [rbp+970h] BYREF
  __int64 v232; // [rsp+A00h] [rbp+980h]
  __m128i v233; // [rsp+A10h] [rbp+990h] BYREF
  _BYTE v234[160]; // [rsp+A20h] [rbp+9A0h] BYREF
  __int64 v235; // [rsp+AC0h] [rbp+A40h]
  __m128i v236; // [rsp+AC8h] [rbp+A48h] BYREF
  __int64 v237; // [rsp+AD8h] [rbp+A58h]
  HANDLE hObject; // [rsp+AE0h] [rbp+A60h] BYREF
  HANDLE v239; // [rsp+AE8h] [rbp+A68h] BYREF
  __int64 v240; // [rsp+AF0h] [rbp+A70h]
  __int64 v241; // [rsp+AF8h] [rbp+A78h]
  __int64 v242; // [rsp+B00h] [rbp+A80h]
  char v243; // [rsp+B0Fh] [rbp+A8Fh] BYREF
  __int64 v244; // [rsp+B10h] [rbp+A90h]
  __m128i v245; // [rsp+B18h] [rbp+A98h]
  __int64 v246; // [rsp+B28h] [rbp+AA8h]
  char v247; // [rsp+B34h] [rbp+AB4h]
  char v248; // [rsp+B35h] [rbp+AB5h]
  char v249; // [rsp+B36h] [rbp+AB6h]
  bool v250; // [rsp+B37h] [rbp+AB7h]
  _QWORD *v251; // [rsp+B38h] [rbp+AB8h]
  __int64 v252; // [rsp+B40h] [rbp+AC0h]
  char v253; // [rsp+B4Eh] [rbp+ACEh]
  char v254; // [rsp+B4Fh] [rbp+ACFh]
  char v255; // [rsp+B52h] [rbp+AD2h]
  char v256; // [rsp+B53h] [rbp+AD3h]
  char v257; // [rsp+B54h] [rbp+AD4h]
  char v258; // [rsp+B55h] [rbp+AD5h]
  char v259; // [rsp+B56h] [rbp+AD6h]
  char v260; // [rsp+B57h] [rbp+AD7h]
  __int64 v261; // [rsp+B58h] [rbp+AD8h]

  v261 = -2;
  v249 = 1;
  sub_1407BC950(v163, a2);
  v260 = 1;
  sub_141486710(v201, v168, v169);
  if ( *(_DWORD *)v201 == 2 )
  {
    v233.m128i_i64[1] = *(_QWORD *)&v201[8];
    v233.m128i_i64[0] = 2;
LABEL_4:
    v260 = 1;
    sub_140018650(&v233.m128i_u64[1]);
    nullsub_1(v10);
    v11 = 36;
    v12 = (__m128i *)sub_140001650(36, 1);
    if ( !v12 )
    {
      v260 = 1;
      sub_1416C2D4B(1, 36);
    }
    qmemcpy(&v12[1], "t registry found yet", 20);
    *v12 = _mm_loadu_si128((const __m128i *)&xmmword_141798551);
    v13 = 8;
    v14 = 36;
    goto LABEL_6;
  }
  v9 = _mm_loadu_si128((const __m128i *)&v201[16]);
  v233 = *(__m128i *)v201;
  *(_QWORD *)&v234[64] = *(_QWORD *)&v201[80];
  *(__m128i *)&v234[48] = _mm_loadu_si128((const __m128i *)&v201[64]);
  *(_OWORD *)&v234[32] = *(_OWORD *)&v201[48];
  *(_OWORD *)&v234[16] = *(_OWORD *)&v201[32];
  *(__m128i *)v234 = v9;
  if ( *(_QWORD *)v201 == 2 )
    goto LABEL_4;
  v260 = 1;
  sub_14148D130(v201, v168, v169);
  v14 = *(_QWORD *)&v201[8];
  v12 = *(__m128i **)v201;
  if ( *(_QWORD *)v201 == -1 )
  {
    v13 = 2;
    v11 = 21;
LABEL_6:
    *a1 = v13;
    a1[1] = v14;
    a1[2] = (__int64)v12;
    a1[3] = v11;
    sub_140016620(v163);
    v15 = *a5;
    if ( *a5 != -1 )
    {
      v16 = a5[1];
      v17 = a5[2];
      if ( v17 )
      {
        v18 = (_QWORD *)(v16 + 8);
        do
        {
          v19 = *(v18 - 1);
          if ( v19 )
            sub_140001660(*v18, v19, 1);
          v18 += 3;
          --v17;
        }
        while ( v17 );
      }
      if ( v15 )
        sub_140001660(v16, 24 * v15, 8);
    }
    return a1;
  }
  v246 = *(_QWORD *)v201;
  *(_OWORD *)v190.m256i_i8 = *(_OWORD *)&v201[8];
  *(_OWORD *)&v190.m256i_u64[2] = 0;
  v251 = *(_QWORD **)&v201[8];
  v191[0] = *(_QWORD *)&v201[8];
  v191[1] = *(_QWORD *)&v201[16];
  sub_1408A6390(v201, &v190);
  v14 = *(_QWORD *)&v201[8];
  v22 = *(_QWORD *)v201;
  if ( *(_QWORD *)v201 == -1 )
  {
    v13 = 3;
LABEL_28:
    v11 = 21;
    if ( v246 )
      sub_140001660(v251, v246, 1);
    v12 = v5;
    goto LABEL_6;
  }
  *(_QWORD *)&v234[64] = *(_QWORD *)&v201[80];
  v23 = _mm_loadu_si128((const __m128i *)&v201[16]);
  v24 = _mm_loadu_si128((const __m128i *)&v201[32]);
  *(__m256i *)&v234[32] = *(__m256i *)&v201[48];
  *(__m128i *)&v234[16] = v24;
  *(__m128i *)v234 = v23;
  v233 = *(__m128i *)v201;
  v25 = v23.m128i_i64[0];
  if ( !v23.m128i_i64[0] )
  {
    nullsub_1(v21);
    v14 = 21;
    v36 = sub_140001650(21, 1);
    if ( !v36 )
      sub_1416C2D4B(1, 21);
    *(__m128i *)v36 = _mm_loadu_si128(&xmmword_141798575);
    v5 = (__m128i *)v36;
    *(_QWORD *)(v36 + 13) = 0x74726F707865206FLL;
    v13 = 10;
    sub_140015340(&v233);
    goto LABEL_28;
  }
  v225 = *(_OWORD *)&v234[56];
  v224 = *(__m256i *)&v234[24];
  v223 = *(__m128i *)&v234[8];
  if ( v246 )
    sub_140001660(v251, v246, 1);
  v26 = _mm_load_si128(&v223);
  si128 = _mm_load_si128((const __m128i *)&v224);
  v180[3] = v225;
  v180[2] = *(_OWORD *)&v224.m256i_u64[2];
  v180[1] = si128;
  v180[0] = v26;
  v179[0] = v22;
  v179[1] = v14;
  v179[2] = v25;
  v28 = *a5;
  if ( *a5 == -1 )
  {
    v187.m128i_i64[0] = 0;
  }
  else
  {
    v29 = a5[1];
    v30 = v29 + 24 * a5[2];
    v182[0] = v29;
    v182[2] = v28;
    v182[1] = v29;
    v182[3] = v30;
    v255 = 1;
    v31 = sub_141470CD0(v29, v30);
    if ( *(_BYTE *)(v31 + 16) == 1 )
    {
      v32 = *(_QWORD *)v31;
      v33 = *(_QWORD *)(v31 + 8);
    }
    else
    {
      v255 = 1;
      v153 = v31;
      v32 = sub_141486EF0();
      v31 = v153;
      *(_QWORD *)v153 = v32;
      *(_QWORD *)(v153 + 8) = v33;
      *(_BYTE *)(v153 + 16) = 1;
    }
    *(_QWORD *)v31 = v32 + 1;
    *(_OWORD *)&v201[16] = xmmword_1417939D0;
    *(__m128i *)v201 = _mm_loadu_si128((const __m128i *)&off_1417939C0);
    *(_QWORD *)&v201[32] = v32;
    *(_QWORD *)&v201[40] = v33;
    sub_140446630(v201, v182);
    v34 = _mm_load_si128((const __m128i *)v201);
    v35 = _mm_load_si128((const __m128i *)&v201[16]);
    v189 = *(_OWORD *)&v201[32];
    v188 = v35;
    v187 = v34;
  }
  nullsub_1(v21);
  v37 = sub_140001650(416 * v25, 8);
  if ( !v37 )
    sub_1416C2D4B(8, 416 * v25);
  *(_QWORD *)&v228 = v25;
  *((_QWORD *)&v228 + 1) = v37;
  v229 = 0;
  v236.m128i_i64[0] = 0;
  v236.m128i_i64[1] = 8;
  v237 = 0;
  v230 = a1;
  v185 = a4;
  v186 = a3;
  if ( *(_QWORD *)&v180[0] == -1 )
  {
    v240 = -1;
  }
  else
  {
    v248 = 1;
    v247 = 1;
    sub_14149C500(v201, v180);
    v227 = *(_QWORD *)&v201[8];
    v240 = *(_QWORD *)v201;
    v241 = *(_QWORD *)&v201[16];
  }
  v246 = v14;
  v242 = v14 + 424 * v25;
  v39 = &v183;
LABEL_38:
  while ( 1 )
  {
    v46 = v246;
    if ( v246 == v242 )
      break;
    v47 = v39;
    v246 += 424;
    v48 = v187.m128i_i64[0];
    if ( v187.m128i_i64[0] )
    {
      if ( v188.m128i_i64[1] )
      {
        v259 = 1;
        v258 = 1;
        v49 = sub_140378810(&v189, v46 + 192);
        _RCX = v49 >> 57;
        v50 = v187.m128i_i64[1];
        v51 = _mm_cvtsi32_si128(v49 >> 57);
        v52 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v51, v51), 0), 68);
        v53 = *(_QWORD *)(v46 + 200);
        v54 = *(_QWORD *)(v46 + 208);
        for ( i = 0; ; i += 16 )
        {
          v56 = v50 & v49;
          v57 = _mm_loadu_si128((const __m128i *)(v48 + v56));
          _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v57, v52));
          if ( _ESI )
            break;
LABEL_47:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v57, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
          {
            v39 = v47;
            goto LABEL_38;
          }
          v49 = i + v56 + 16;
        }
        v251 = (_QWORD *)v56;
        v244 = i;
        while ( 1 )
        {
          __asm { tzcnt ecx, esi }
          _RCX = -(__int64)(v50 & (v56 + _RCX));
          if ( v54 == *(_QWORD *)(v48 + 24 * _RCX - 8)
            && !(unsigned int)sub_1416847B0(v53, *(_QWORD *)(v48 + 24 * _RCX - 16), v54) )
          {
            goto LABEL_49;
          }
          v59 = _ESI - 1;
          LOWORD(v59) = _ESI & (_ESI - 1);
          v60 = (_WORD)v59 == 0;
          _ESI = v59;
          v56 = (__int64)v251;
          i = v244;
          if ( v60 )
            goto LABEL_47;
        }
      }
    }
    else
    {
LABEL_49:
      v61 = *(_QWORD *)(v46 + 224);
      v62 = *(_QWORD *)(v46 + 232);
      v259 = 1;
      v258 = 1;
      sub_14149BB70(v201, v61, v62);
      v39 = v47;
      v251 = *(_QWORD **)v201;
      v63 = *(_QWORD *)&v201[16];
      v244 = *(_QWORD *)&v201[8];
      sub_1403CE160((unsigned int)&v233, *(_DWORD *)&v201[8], *(_DWORD *)&v201[16], v170, v171);
      if ( v233.m128i_i32[0] == -1 )
      {
        sub_1403C8920(&v223, v244, v63);
        v252 = v223.m128i_i64[1];
        sub_14037FAC0((__int64)v201, v223.m128i_i64[1], v224.m256i_i64[0], (__int64)&aTtenaccountCre[4], 18);
        v65 = *(_OWORD *)v201;
        if ( *(_QWORD *)v201 != -1 )
        {
          *(__m512i *)v234 = *(__m512i *)&v201[32];
          v233 = *(__m128i *)&v201[16];
          if ( v223.m128i_i64[0] )
            sub_140001660(v252, v223.m128i_i64[0], 1);
          *(_OWORD *)v201 = v65;
          *(__m512i *)&v201[32] = *(__m512i *)v234;
          *(__m128i *)&v201[16] = v233;
          sub_14149C500(v176, v46 + 192);
          sub_14149C500(&v190, v46 + 240);
          v183.m128i_i64[0] = (__int64)v201;
          v183.m128i_i64[1] = (__int64)sub_140B036A0;
          sub_14149C0F0(&v172, &unk_14179807D, v47);
          v223 = *(__m128i *)v176;
          v224.m256i_i64[0] = *(_QWORD *)&v176[16];
          v224.m256i_i64[3] = v190.m256i_i64[2];
          *(_OWORD *)&v224.m256i_u64[1] = *(_OWORD *)v190.m256i_i8;
          v226 = v173;
          v225 = v172;
          v64 = v237;
          if ( v237 == v236.m128i_i64[0] )
            sub_141689730(&v236);
          goto LABEL_37;
        }
        if ( v223.m128i_i64[0] )
          sub_140001660(v252, v223.m128i_i64[0], 1);
        v66 = 0;
        v239 = *((HANDLE *)&v65 + 1);
        v67 = *(_QWORD *)(v46 + 200);
        v68 = *(_QWORD *)(v46 + 208);
        if ( v240 != -1 && v241 == v68 )
          v66 = (unsigned int)sub_1416847B0(v227, *(_QWORD *)(v46 + 200), v241) == 0;
        sub_141486710(v201, v244, v63);
        if ( *(_DWORD *)v201 == 2 )
        {
          v233.m128i_i64[1] = *(_QWORD *)&v201[8];
          v233.m128i_i64[0] = 2;
LABEL_67:
          sub_140018650(&v233.m128i_u64[1]);
          v233.m128i_i64[0] = v244;
          v233.m128i_i64[1] = v63;
          *(_QWORD *)v201 = &v233;
          *(_QWORD *)&v201[8] = sub_14148F3A0;
          sub_14149C0F0(&v190.m256i_u64[1], &unk_14179829D, v201);
LABEL_68:
          v190.m256i_i64[0] = -2;
          goto LABEL_69;
        }
        v69 = _mm_loadu_si128((const __m128i *)&v201[16]);
        v233 = *(__m128i *)v201;
        *(_QWORD *)&v234[64] = *(_QWORD *)&v201[80];
        *(__m128i *)&v234[48] = _mm_loadu_si128((const __m128i *)&v201[64]);
        *(_OWORD *)&v234[32] = *(_OWORD *)&v201[48];
        *(_OWORD *)&v234[16] = *(_OWORD *)&v201[32];
        *(__m128i *)v234 = v69;
        if ( *(_QWORD *)v201 == 2 )
          goto LABEL_67;
        sub_1403CE160((unsigned int)v201, v244, v63, v170, v171);
        if ( *(_DWORD *)v201 == -1 )
        {
          sub_141486270(v201, v244, v63);
          if ( *(_DWORD *)v201 == 2 )
          {
            v233.m128i_i64[0] = 2;
            v233.m128i_i64[1] = *(_QWORD *)&v201[8];
LABEL_103:
            *(_OWORD *)&v201[80] = *(_OWORD *)&v234[64];
            *(_OWORD *)&v201[64] = *(_OWORD *)&v234[48];
            v87 = _mm_load_si128((const __m128i *)&v234[16]);
            *(_OWORD *)&v201[48] = *(_OWORD *)&v234[32];
            *(__m128i *)&v201[32] = v87;
            *(_OWORD *)&v201[16] = *(_OWORD *)v234;
            *(__m128i *)v201 = v233;
            v192 = v201;
            v193 = sub_140B036A0;
            sub_14149C0F0(&v231, &unk_141795D48, &v192);
            sub_1407DA310(v201);
            v190.m256i_i64[3] = v232;
            *(__m128i *)&v190.m256i_u64[1] = _mm_loadu_si128(&v231);
            goto LABEL_68;
          }
          if ( (v201[76] & 0x10) != 0 || (*(_DWORD *)&v201[80] & 0x20000000) != 0 && (*(_WORD *)&v201[76] & 0x400) != 0 )
          {
            v231.m128i_i64[0] = v244;
            v231.m128i_i64[1] = v63;
            *(_QWORD *)v201 = &v231;
            *(_QWORD *)&v201[8] = sub_14148F3A0;
            sub_14149C0F0(&v233.m128i_u64[1], &unk_14174E2E9, v201);
            v233.m128i_i64[0] = 9;
            goto LABEL_103;
          }
        }
        else
        {
          *(_OWORD *)&v234[64] = *(_OWORD *)&v201[80];
          *(_OWORD *)&v234[48] = *(_OWORD *)&v201[64];
          v75 = _mm_loadu_si128((const __m128i *)v201);
          v76 = _mm_loadu_si128((const __m128i *)&v201[16]);
          *(_OWORD *)&v234[32] = *(_OWORD *)&v201[48];
          *(_OWORD *)&v234[16] = *(_OWORD *)&v201[32];
          *(__m128i *)v234 = v76;
          v233 = v75;
          if ( v75.m128i_i64[0] != -1 )
            goto LABEL_103;
        }
        load_matching_export_auth((unsigned int)&v190, v244, v63, v67, v68);
LABEL_69:
        v70 = v46 + 192;
        if ( !v66 )
        {
          v252 = v190.m256i_i64[1];
          v74 = v190.m256i_i64[0];
          v73 = v190.m256i_i64[3];
          v245.m128i_i64[1] = v190.m256i_i64[2];
          sub_141684120(v39, v191, 144);
          goto LABEL_113;
        }
        sub_1403871C0(&v233, v166, v167);
        if ( v233.m128i_i32[0] != -1 )
        {
          *(_OWORD *)&v201[80] = *(_OWORD *)&v234[64];
          *(_OWORD *)&v201[64] = *(_OWORD *)&v234[48];
          v71 = _mm_loadu_si128(&v233);
          v72 = _mm_loadu_si128((const __m128i *)v234);
          *(_OWORD *)&v201[48] = *(_OWORD *)&v234[32];
          *(_OWORD *)&v201[32] = *(_OWORD *)&v234[16];
          *(__m128i *)&v201[16] = v72;
          *(__m128i *)v201 = v71;
          v192 = v201;
          v193 = sub_140B036A0;
          sub_14149C0F0(&v231, &unk_141795D61, &v192);
          sub_1407DA310(v201);
          v245.m128i_i64[1] = v231.m128i_i64[1];
          v252 = v231.m128i_i64[0];
          v73 = v232;
          if ( v190.m256i_i64[0] == -2 )
          {
            v74 = -2;
            if ( v190.m256i_i64[1] )
              sub_140001660(v190.m256i_i64[2], v190.m256i_i64[1], 1);
          }
          else
          {
            sub_14052D960(v190.m256i_i64);
            v74 = -2;
          }
          goto LABEL_113;
        }
        v194 = (HANDLE)v233.m128i_i64[1];
        hObject = (HANDLE)v233.m128i_i64[1];
        v77 = v164;
        v78 = v165;
        sub_141486710(v201, v164, v165);
        if ( *(_DWORD *)v201 == 2 )
        {
          v233.m128i_i64[1] = *(_QWORD *)&v201[8];
          v233.m128i_i64[0] = 2;
LABEL_84:
          sub_140018650(&v233.m128i_u64[1]);
          nullsub_1(v80);
          v81 = (__m128i *)sub_140001650(35, 1);
          if ( !v81 )
            sub_1416C2D4B(1, 35);
          qmemcpy(&v81[1], "ion file is missing", 19);
          *v81 = _mm_loadu_si128((const __m128i *)&xmmword_1417982B7);
          v223.m128i_i64[1] = 35;
          v224.m256i_i64[0] = (__int64)v81;
          v224.m256i_i64[1] = 35;
          v223.m128i_i64[0] = -2;
          v82 = -2;
          v235 = 35;
          goto LABEL_90;
        }
        v79 = _mm_loadu_si128((const __m128i *)&v201[16]);
        v233 = *(__m128i *)v201;
        *(_QWORD *)&v234[64] = *(_QWORD *)&v201[80];
        *(__m128i *)&v234[48] = _mm_loadu_si128((const __m128i *)&v201[64]);
        *(_OWORD *)&v234[32] = *(_OWORD *)&v201[48];
        *(_OWORD *)&v234[16] = *(_OWORD *)&v201[32];
        *(__m128i *)v234 = v79;
        if ( *(_QWORD *)v201 == 2 )
          goto LABEL_84;
        load_matching_export_auth((unsigned int)&v223, v77, v78, v67, v68);
        v235 = v223.m128i_i64[1];
        v82 = v223.m128i_i64[0];
        v81 = (__m128i *)v224.m256i_i64[0];
LABEL_90:
        v83 = *(_OWORD *)&v190.m256i_u64[1];
        v245.m128i_i64[0] = v190.m256i_i64[0];
        v196 = v81;
        v195 = v190.m256i_i64[2];
        v220 = v190.m256i_i64[1];
        if ( v190.m256i_i64[0] == -2 )
        {
          if ( v82 == -2 )
          {
            LOBYTE(v252) = v190.m256i_i64[0] != -2;
            v232 = v190.m256i_i64[3];
            v231 = *(__m128i *)&v190.m256i_u64[1];
            *(_QWORD *)v234 = v224.m256i_i64[1];
            v233 = _mm_loadu_si128((const __m128i *)&v223.m128i_u64[1]);
            *(_QWORD *)v201 = &v231;
            *(_QWORD *)&v201[8] = sub_1400015F0;
            *(_QWORD *)&v201[16] = &v233;
            *(_QWORD *)&v201[24] = sub_1400015F0;
            sub_14149C0F0(v181, &unk_1417982DA, v201);
            v252 = v181[0];
            v245.m128i_i64[1] = v181[1];
            v73 = v181[2];
            v70 = v46 + 192;
            if ( v233.m128i_i64[0] )
              sub_140001660(v233.m128i_i64[1], v233.m128i_i64[0], 1);
            if ( v231.m128i_i64[0] )
              sub_140001660(v231.m128i_i64[1], v231.m128i_i64[0], 1);
            sub_1404220A0(&hObject);
            CloseHandle(hObject);
LABEL_114:
            v253 = 1;
            sub_14149C500(&v223, v70);
            sub_14149C500(&v233, v46 + 240);
            *(_QWORD *)&v201[48] = v252;
            *(_QWORD *)&v201[56] = v245.m128i_i64[1];
            *(_QWORD *)&v201[64] = v73;
            *(__m128i *)v201 = v223;
            *(_QWORD *)&v201[16] = v224.m256i_i64[0];
            *(_QWORD *)&v201[40] = *(_QWORD *)v234;
            *(__m128i *)&v201[24] = _mm_loadu_si128(&v233);
            v89 = v237;
            if ( v237 == v236.m128i_i64[0] )
              sub_141689730(&v236);
            v90 = v236.m128i_i64[1];
            v91 = 9 * v89;
            *(_QWORD *)(v236.m128i_i64[1] + 8 * v91 + 64) = *(_QWORD *)&v201[64];
            v92 = _mm_load_si128((const __m128i *)v201);
            v93 = _mm_load_si128((const __m128i *)&v201[16]);
            v94 = *(_OWORD *)&v201[32];
            *(_OWORD *)(v90 + 8 * v91 + 48) = *(_OWORD *)&v201[48];
            *(_OWORD *)(v90 + 8 * v91 + 32) = v94;
            *(__m128i *)(v90 + 8 * v91 + 16) = v93;
            *(__m128i *)(v90 + 8 * v91) = v92;
            v237 = v89 + 1;
            *(_QWORD *)v201 = sub_1412018B0(&v239);
            if ( !*(_QWORD *)v201 )
              goto LABEL_118;
            goto LABEL_117;
          }
          v250 = v82 == -2;
          v84 = v224.m256i_i64[1];
          v86 = v81;
          sub_141684120(v39, &v224.m256i_u64[2], 144);
          v245.m128i_i64[1] = (__int64)v86;
          v252 = v235;
          v74 = v82;
        }
        else
        {
          v250 = v82 == -2;
          if ( v82 == -2 )
          {
            v84 = v190.m256i_i64[3];
            sub_141684120(v39, v191, 144);
            v245.m128i_i64[1] = *((_QWORD *)&v83 + 1);
            v252 = v83;
            v74 = v245.m128i_i64[0];
          }
          else
          {
            LOBYTE(v252) = v190.m256i_i64[0] != -2;
            sub_141684120(&v233, &v190, 176);
            sub_141684120(v201, &v223, 176);
            if ( (unsigned __int8)sub_1409DBBA0(&v233, v201) )
            {
              v252 = v233.m128i_i64[1];
              v74 = v233.m128i_i64[0];
              v84 = *(_QWORD *)&v234[8];
              v245.m128i_i64[1] = *(_QWORD *)v234;
              sub_141684120(v39, v191, 144);
              v85 = (__m256i *)&v223;
            }
            else
            {
              v252 = *(_QWORD *)&v201[8];
              v74 = *(_QWORD *)v201;
              v84 = *(_QWORD *)&v201[24];
              v245.m128i_i64[1] = *(_QWORD *)&v201[16];
              sub_141684120(v39, &v224.m256i_u64[2], 144);
              v85 = &v190;
            }
            sub_14052D960(v85->m256i_i64);
          }
        }
        *(_QWORD *)v201 = sub_1412018B0(&hObject);
        if ( *(_QWORD *)v201 )
          sub_140018650(v201);
        v88 = v245.m128i_i64[0] != -2;
        CloseHandle(v194);
        if ( !v88 && v220 != 0 )
          sub_140001660(v195, v220, 1);
        v73 = v84;
        if ( v235 != 0 && v82 == -2 )
          sub_140001660(v196, v235, 1);
        v70 = v46 + 192;
LABEL_113:
        if ( v74 == -2 )
          goto LABEL_114;
        sub_141684120(v178, v39, 144);
        *(_QWORD *)v176 = v74;
        *(_QWORD *)&v176[8] = v252;
        *(_QWORD *)&v176[16] = v245.m128i_i64[1];
        v177 = v73;
        v254 = 1;
        sub_14149C500(&v231, v70);
        sub_14149C500(v39, v46 + 240);
        v95 = v221;
        v96 = v222;
        v97 = v197;
        sub_14149C500(&v190, v46 + 264);
        v98 = __PAIR128__(v95, -1);
        v99 = __PAIR128__(v96, -1);
        if ( *(_QWORD *)(v46 + 336) != -1 )
        {
          sub_14149C500(&v233, v46 + 336);
          v98 = (unsigned __int128)v233;
          v97 = *(_QWORD *)v234;
        }
        v221 = *((_QWORD *)&v98 + 1);
        v252 = v98;
        v100 = v198;
        if ( *(_QWORD *)(v46 + 360) != -1 )
        {
          sub_14149C500(&v233, v46 + 360);
          v99 = (unsigned __int128)v233;
          v100 = *(_QWORD *)v234;
        }
        v222 = *((_QWORD *)&v99 + 1);
        v60 = *(_QWORD *)(v46 + 384) == -1;
        v198 = v100;
        v245.m128i_i64[1] = v99;
        if ( v60 )
        {
          v245.m128i_i64[0] = -1;
          v101 = v199;
        }
        else
        {
          sub_14149C500(&v233, v46 + 384);
          v200 = v233.m128i_i64[1];
          v245.m128i_i64[0] = v233.m128i_i64[0];
          v101 = *(_QWORD *)v234;
        }
        sub_14149C500(&v223, v46 + 288);
        v197 = v97;
        v199 = v101;
        sub_14149C500(&v233, v46 + 312);
        v102 = *(_BYTE *)(v46 + 416);
        v103 = *(_BYTE *)(v46 + 417);
        v104 = *(_QWORD *)(v46 + 408);
        sub_141684120(v216, v176, 176);
        *(_QWORD *)&v201[48] = v232;
        *(__m128i *)&v201[32] = v231;
        *(_QWORD *)&v201[72] = v184;
        *(__m128i *)&v201[56] = v183;
        v202 = v190.m256i_i64[2];
        *(_OWORD *)&v201[80] = *(_OWORD *)v190.m256i_i8;
        v207 = v252;
        v208 = v221;
        v209 = v197;
        v210 = v245.m128i_i64[1];
        v211 = v222;
        v212 = v198;
        v213 = v245.m128i_i64[0];
        v214 = v200;
        v215 = v199;
        v204 = v224.m256i_i64[0];
        v203 = v223;
        v206 = *(_QWORD *)v234;
        v205 = v233;
        v218 = v102;
        *(_OWORD *)v201 = *(_OWORD *)(v46 + 16);
        v219 = v103;
        v217 = v104;
        *(__m128i *)&v201[16] = _mm_loadu_si128((const __m128i *)(v46 + 80));
        v105 = v229;
        if ( v229 == (_QWORD)v228 )
          sub_141689260(&v228);
        sub_141684120(*((_QWORD *)&v228 + 1) + 416 * v105, v201, 416);
        v229 = v105 + 1;
        *(_QWORD *)v201 = sub_1412018B0(&v239);
        if ( !*(_QWORD *)v201 )
          goto LABEL_118;
LABEL_117:
        sub_140018650(v201);
LABEL_118:
        CloseHandle(v239);
        v45 = (__int64)v251;
        if ( v251 )
LABEL_119:
          sub_140001660(v244, v45, 1);
      }
      else
      {
        *(_OWORD *)&v201[80] = *(_OWORD *)&v234[64];
        *(__m512i *)&v201[16] = *(__m512i *)v234;
        *(__m128i *)v201 = v233;
        sub_14149C500(v176, v46 + 192);
        sub_14149C500(&v190, v46 + 240);
        v183.m128i_i64[0] = (__int64)v201;
        v183.m128i_i64[1] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v174, &unk_141798064, v47);
        v223 = *(__m128i *)v176;
        v224.m256i_i64[0] = *(_QWORD *)&v176[16];
        v224.m256i_i64[3] = v190.m256i_i64[2];
        *(_OWORD *)&v224.m256i_u64[1] = *(_OWORD *)v190.m256i_i8;
        v226 = v175;
        v225 = v174;
        v64 = v237;
        if ( v237 == v236.m128i_i64[0] )
          sub_141689730(&v236);
LABEL_37:
        v40 = v236.m128i_i64[1];
        v41 = 9 * v64;
        *(_QWORD *)(v236.m128i_i64[1] + 8 * v41 + 64) = v226;
        v42 = _mm_load_si128(&v223);
        v43 = _mm_load_si128((const __m128i *)&v224);
        v44 = *(_OWORD *)&v224.m256i_u64[2];
        *(_OWORD *)(v40 + 8 * v41 + 48) = v225;
        *(_OWORD *)(v40 + 8 * v41 + 32) = v44;
        *(__m128i *)(v40 + 8 * v41 + 16) = v43;
        *(__m128i *)(v40 + 8 * v41) = v42;
        v237 = v64 + 1;
        sub_1407DA310(v201);
        v45 = (__int64)v251;
        if ( v251 )
          goto LABEL_119;
      }
    }
  }
  v106 = v229;
  if ( !v229 )
  {
    nullsub_1(_RCX);
    v111 = (__m128i *)sub_140001650(64, 1);
    if ( !v111 )
    {
      v259 = 1;
      v258 = 1;
      sub_1416C2D4B(1, 64);
    }
    qmemcpy(&v111[1], "counts: all snapshots are missing or unreadable.", 48);
    *v111 = _mm_loadu_si128((const __m128i *)&xmmword_141798092);
    v112 = v230;
    *v230 = 10;
    v112[1] = 64;
    v112[2] = (__int64)v111;
    v112[3] = 64;
    goto LABEL_168;
  }
  v259 = 1;
  v258 = 1;
  sub_140F46EF0(&v233);
  if ( v233.m128i_i64[0] == -1 )
  {
    v259 = 1;
    v258 = 1;
    sub_140018650(&v233.m128i_u64[1]);
    goto LABEL_139;
  }
  *(_QWORD *)&v201[24] = *(_QWORD *)&v234[8];
  *(__m128i *)&v201[8] = _mm_loadu_si128((const __m128i *)&v233.m128i_u64[1]);
  *(_QWORD *)v201 = v233.m128i_i64[0];
  v259 = 1;
  v258 = 1;
  sub_14149A1F0(&v233, v201);
  v110 = v233.m128i_i64[1];
  v109 = v233.m128i_i64[0];
  if ( v233.m128i_i64[0] != -1 )
  {
    if ( v233.m128i_i64[0] )
      sub_140001660(v233.m128i_i64[1], v233.m128i_i64[0], 1);
    goto LABEL_139;
  }
  if ( v233.m128i_i64[1] == -1 )
    goto LABEL_139;
  v108 = *(_QWORD *)v234;
  if ( *(_QWORD *)&v234[8] )
  {
    v246 = v233.m128i_i64[1];
    *(_QWORD *)v176 = v233.m128i_i64[1];
    v244 = *(_QWORD *)v234;
    *(_OWORD *)&v176[8] = *(_OWORD *)v234;
  }
  else
  {
    if ( v233.m128i_i64[1] )
      sub_140001660(*(_QWORD *)v234, v233.m128i_i64[1], 1);
LABEL_139:
    *(_QWORD *)v176 = -1;
    v246 = -1;
  }
  v257 = 1;
  v256 = 1;
  v233.m128i_i32[0] = sub_141475580(v110, v109, v107, v108);
  v233.m128i_i32[1] = v113;
  v257 = 1;
  v256 = 1;
  sub_141475530(v201, &v233, 3577643008LL, 27111902);
  if ( v201[0] )
    v115 = 0;
  else
    v115 = *(_QWORD *)&v201[8];
  v116 = v229;
  nullsub_1(v114);
  v117 = sub_140001650(22, 1);
  if ( !v117 )
  {
    v257 = 1;
    v256 = 1;
    sub_1416C2D4B(1, 22);
  }
  v119 = v117;
  *(__m128i *)v117 = _mm_loadu_si128((const __m128i *)aAimamiAccounts_2);
  *(_QWORD *)(v117 + 14) = 0x74726F7078652D73LL;
  nullsub_1(v118);
  v120 = sub_140001650(5, 1);
  if ( !v120 )
  {
    v251 = (_QWORD *)v119;
    sub_1416C2D4B(1, 5);
  }
  *(_BYTE *)(v120 + 4) = 51;
  *(_DWORD *)v120 = 775040561;
  if ( v246 == -1 )
  {
    v121 = -1;
  }
  else
  {
    v242 = v120;
    v251 = (_QWORD *)v119;
    sub_14149C500(&v233, v176);
    v121 = v233.m128i_i64[0];
    v223 = _mm_loadu_si128((const __m128i *)&v233.m128i_u64[1]);
    v119 = (__int64)v251;
    v120 = v242;
  }
  *(_QWORD *)&v201[64] = v229;
  *(_OWORD *)&v201[48] = v228;
  v203.m128i_i32[0] = 1;
  *(_QWORD *)v201 = 22;
  *(_QWORD *)&v201[8] = v119;
  *(_QWORD *)&v201[16] = 22;
  *(_QWORD *)&v201[24] = 5;
  *(_QWORD *)&v201[32] = v120;
  *(_QWORD *)&v201[40] = 5;
  v202 = v115;
  *(_QWORD *)&v201[72] = v121;
  *(__m128i *)&v201[80] = _mm_load_si128(&v223);
  v203.m128i_i32[1] = v116;
  nullsub_1(v229);
  v122 = (_BYTE *)sub_140001650(128, 1);
  if ( !v122 )
    sub_1416C2D4B(1, 128);
  v223.m128i_i64[0] = 128;
  v223.m128i_i64[1] = (__int64)v122;
  v233.m128i_i64[0] = (__int64)&v223;
  v233.m128i_i64[1] = (__int64)"  Compression method not supportedZipFileReader was in an invalid state";
  *(_QWORD *)v234 = 2;
  *(_QWORD *)&v234[8] = 1;
  v234[16] = 0;
  *v122 = 123;
  v224.m256i_i64[0] = 1;
  v183.m128i_i16[0] = 256;
  v183.m128i_i64[1] = (__int64)&v233;
  v123 = (_QWORD *)sub_1404563F0(&v183, aSchemaversion_3, 13, &v203);
  if ( !v123 )
  {
    if ( v183.m128i_i8[0] )
      goto LABEL_151;
    v123 = (_QWORD *)sub_140452760(&v183, aKind_5, 4, v201);
    if ( !v123 )
    {
      if ( v183.m128i_i8[0] )
        goto LABEL_151;
      v123 = (_QWORD *)sub_140452760(&v183, aAppversion, 10, &v201[24]);
      if ( v123 )
        goto LABEL_157;
      if ( v183.m128i_i8[0] )
        goto LABEL_151;
      v123 = (_QWORD *)sub_140456E50(&v183, aExportedat, 10, &v202);
      if ( v123 )
        goto LABEL_157;
      if ( v183.m128i_i8[0] )
        goto LABEL_151;
      v124 = sub_1404504B0(&v183, aExportedhostna, 16, &v201[72]);
      if ( v124 )
        goto LABEL_152;
      if ( v183.m128i_i8[0] )
      {
LABEL_151:
        v124 = sub_1416BF0E0();
      }
      else
      {
        v124 = sub_1404563F0(&v183, aAccountcount, 12, (char *)v203.m128i_i64 + 4);
        if ( !v124 )
        {
          v124 = sub_1407E61E0(&v183, &v201[48]);
          if ( !v124 )
          {
            *(__m128i *)v190.m256i_i8 = _mm_loadu_si128(&v183);
            sub_1407BB0F0(&v190);
            v251 = (_QWORD *)v223.m128i_i64[1];
            v252 = v223.m128i_i64[0];
            if ( v223.m128i_i64[0] == -1 )
            {
              v123 = v251;
              goto LABEL_159;
            }
            v235 = v224.m256i_i64[0];
            sub_1414734D0(&v233, v186, v185);
            v149 = sub_1414742C0(v233.m128i_i64[1], *(_QWORD *)v234);
            if ( v149 )
            {
              sub_1414A3C90(&v223, v149, v150);
              v151 = 15;
              if ( !v223.m128i_i8[0] )
                v151 = v224.m256i_i64[0];
              v152 = &unk_1417985B5;
              if ( !v223.m128i_i8[0] )
                v152 = (void *)v223.m128i_i64[1];
            }
            else
            {
              v152 = &unk_1417985B5;
              v151 = 15;
            }
            sub_140388B60((unsigned int)&v223, v151, 0, 1, 1);
            v241 = v223.m128i_i64[1];
            if ( v223.m128i_i32[0] == 1 )
              sub_1416C2D4B(v241, v224.m256i_i64[0]);
            v242 = v224.m256i_i64[0];
            if ( !v151
              || (sub_141684120(v242, v152, v151), v151 < 0x15)
              || _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v242 + v151 - 21)), (__m128i)xmmword_1417921A0),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v242 + v151 - 16)), (__m128i)xmmword_141792190))) != 0xFFFF )
            {
              v154 = sub_14033C1F0(v242, v151, aJson_4, 5);
              v156.m128i_i64[0] = sub_14033C1F0(v154, v155, aAimamiAccounts_3, 16);
              v183 = v156;
              v190.m256i_i64[0] = (__int64)&v183;
              v190.m256i_i64[1] = (__int64)sub_14041F680;
              sub_14149C0F0(&v223, &unk_1417985D9, &v190);
              sub_140347FE0(&v233, &v223);
            }
            v245 = v233;
            v157 = *(_QWORD *)v234;
            if ( v241 )
              sub_140001660(v242, v241, 1);
            v158 = sub_1408726C0(v245.m128i_i64[1], v157, (__int64)v251, v235);
            if ( v158 )
            {
              v160 = v230;
              *v230 = 2;
              v160[1] = v158;
              if ( v245.m128i_i64[0] )
                sub_140001660(v245.m128i_i64[1], v245.m128i_i64[0], 1);
              if ( v252 )
                sub_140001660(v251, v252, 1);
              goto LABEL_166;
            }
            v183.m128i_i64[0] = v245.m128i_i64[1];
            v183.m128i_i64[1] = v157;
            v190.m256i_i64[0] = 0;
            *(_OWORD *)&v190.m256i_u64[1] = 1u;
            v224.m256i_i64[0] = 1610612768;
            v223.m128i_i64[0] = (__int64)&v190;
            v223.m128i_i64[1] = (__int64)&off_141799500;
            if ( (unsigned __int8)sub_14148F3A0(&v183, &v223, v159) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_7,
                55,
                (unsigned int)&v243,
                (unsigned int)&unk_141796270,
                (__int64)&off_1417995B8);
            *(_QWORD *)v234 = v190.m256i_i64[2];
            v161 = _mm_loadu_si128((const __m128i *)&v190);
            v233 = v161;
            *(__m128i *)&v234[8] = _mm_loadu_si128(&v236);
            *(_QWORD *)&v234[24] = v237;
            v162 = v230;
            v230[3] = v190.m256i_i64[2];
            v162[4] = *(_QWORD *)&v234[8];
            *(_OWORD *)(v162 + 5) = *(_OWORD *)&v234[16];
            *(__m128i *)(v162 + 1) = v161;
            v162[7] = v115;
            *((_DWORD *)v162 + 16) = v116;
            *v162 = -1;
            if ( v245.m128i_i64[0] )
              sub_140001660(v245.m128i_i64[1], v245.m128i_i64[0], 1);
            if ( v252 )
              sub_140001660(v251, v252, 1);
            v257 = 0;
            v256 = 0;
            sub_1407D9AE0(v201);
            if ( (unsigned __int64)(v246 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            {
              if ( (unsigned __int64)(v240 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
              {
LABEL_242:
                if ( !v187.m128i_i64[0] )
                  goto LABEL_247;
                goto LABEL_246;
              }
            }
            else
            {
              sub_140001660(v244, v246, 1);
              if ( (unsigned __int64)(v240 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_242;
            }
            sub_140001660(v227, v240, 1);
            if ( !v187.m128i_i64[0] )
            {
LABEL_247:
              v260 = 0;
              sub_140015340(v179);
              a1 = v230;
              goto LABEL_199;
            }
LABEL_246:
            sub_14067FFB0(&v187);
            goto LABEL_247;
          }
        }
      }
LABEL_152:
      v123 = (_QWORD *)v124;
    }
  }
LABEL_157:
  if ( v223.m128i_i64[0] )
    sub_140001660(v223.m128i_i64[1], v223.m128i_i64[0], 1);
LABEL_159:
  v190.m256i_i64[0] = (__int64)v123;
  v223.m128i_i64[0] = 0;
  v223.m128i_i64[1] = 1;
  v224.m256i_i64[0] = 0;
  *(_QWORD *)v234 = 1610612768;
  v233.m128i_i64[0] = (__int64)&v223;
  v233.m128i_i64[1] = (__int64)&off_141799500;
  if ( sub_14142D3F0(v190.m256i_i64, v233.m128i_i64) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_7,
      55,
      (unsigned int)&v243,
      (unsigned int)&unk_141796270,
      (__int64)&off_1417995B8);
  v125 = v223;
  v126 = v224.m256i_i64[0];
  v127 = *v123;
  v60 = *v123 == 1;
  v251 = v123;
  if ( v60 )
  {
    sub_140018650(v123 + 1);
  }
  else if ( !v127 )
  {
    v128 = v251[2];
    if ( v128 )
      sub_140001660(v251[1], v128, 1);
  }
  sub_140001660(v251, 40, 8);
  v129 = v230;
  *v230 = 9;
  *(__m128i *)(v129 + 1) = v125;
  v129[3] = v126;
LABEL_166:
  v257 = 0;
  v256 = 1;
  sub_1407D9AE0(v201);
  if ( (unsigned __int64)(v246 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v244, v246, 1);
LABEL_168:
  if ( (unsigned __int64)(v240 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v227, v240, 1);
  v130 = v237;
  if ( v237 )
  {
    v131 = (_QWORD *)(v236.m128i_i64[1] + 56);
    do
    {
      v132 = *(v131 - 7);
      if ( v132 )
        sub_140001660(*(v131 - 6), v132, 1);
      v133 = *(v131 - 4);
      if ( v133 )
        sub_140001660(*(v131 - 3), v133, 1);
      v134 = *(v131 - 1);
      if ( v134 )
        sub_140001660(*v131, v134, 1);
      v131 += 9;
      --v130;
    }
    while ( v130 );
  }
  HIDWORD(_RAX) = v236.m128i_i32[1];
  if ( v236.m128i_i64[0] )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v236.m128i_i64[1], 72 * v236.m128i_i64[0], 8) >> 32;
  v60 = v106 == 0;
  a1 = v230;
  if ( v60 )
  {
    v136 = *((_QWORD *)&v228 + 1);
    v251 = (_QWORD *)v229;
    v246 = 0;
    v242 = *((_QWORD *)&v228 + 1);
    while ( v251 != (_QWORD *)v246 )
    {
      ++v246;
      v137 = v136 + 416;
      sub_1402C58D0();
      v136 = v137;
    }
    HIDWORD(_RAX) = DWORD1(v228);
    if ( (_QWORD)v228 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(*((_QWORD *)&v228 + 1), 416 * v228, 8) >> 32;
  }
  v138 = v187.m128i_i64[0];
  if ( v187.m128i_i64[0] )
  {
    v139 = v187.m128i_i64[1];
    if ( v187.m128i_i64[1] )
    {
      v140 = v188.m128i_i64[1];
      if ( v188.m128i_i64[1] )
      {
        v141 = (const __m128i *)(v187.m128i_i64[0] + 16);
        _ESI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v187.m128i_i64[0]));
        v143 = v187.m128i_i64[0];
        do
        {
          if ( !(_WORD)_ESI )
          {
            do
            {
              v144 = _mm_load_si128(v141);
              v143 -= 384;
              ++v141;
              _ESI = _mm_movemask_epi8(v144) ^ 0xFFFF;
            }
            while ( !_ESI );
          }
          __asm { tzcnt eax, esi }
          v145 = -3 * _RAX;
          v146 = *(_QWORD *)(v143 + 8 * v145 - 24);
          if ( v146 )
            sub_140001660(*(_QWORD *)(v143 + 8 * v145 - 16), v146, 1);
          --v140;
          _RAX = _ESI & (unsigned int)(_ESI - 1);
          _ESI &= _ESI - 1;
        }
        while ( v140 );
      }
      v147 = (24 * v139 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v148 = v147 + v139 + 17;
      if ( v148 )
        sub_140001660(v138 - v147, v148, 16);
    }
  }
  v260 = 0;
  sub_140015340(v179);
LABEL_199:
  sub_140016620(v163);
  return a1;
}
