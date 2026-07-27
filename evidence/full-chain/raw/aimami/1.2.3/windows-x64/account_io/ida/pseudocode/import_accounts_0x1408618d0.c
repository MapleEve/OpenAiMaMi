// module: codexmate_lib/core/account_io
// addr: 0x1408618d0
// name: import_accounts
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::account_io::import_accounts | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall import_accounts(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        _QWORD *a8)
{
  __int64 v10; // rcx
  __m128i *v11; // rax
  char v12; // di
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  __m128i si128; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rdi
  __int64 v19; // rsi
  _QWORD *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __m128i v36; // xmm0
  __int64 v37; // rax
  bool v38; // zf
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  _QWORD *v46; // rbx
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  __int64 v50; // r13
  __m128i v51; // xmm0
  __m128i v52; // xmm7
  __int64 v53; // r14
  __int64 v54; // r15
  __int64 i; // rdx
  unsigned __int64 v56; // rax
  __m128i v57; // xmm8
  unsigned __int64 v59; // rdi
  int v60; // eax
  bool v61; // si
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  char *v65; // r12
  unsigned __int64 v66; // r15
  __int64 v67; // r14
  __int64 v68; // rsi
  void *v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rcx
  __m128i v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rcx
  void *v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rcx
  void *v82; // rax
  __int64 v83; // rcx
  void *v84; // rax
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rcx
  __m128i v88; // xmm0
  __int128 v89; // xmm1
  __int128 v90; // xmm2
  __m128i v91; // xmm0
  __m128i v92; // xmm0
  __int64 v93; // rsi
  __m128i *v94; // rdx
  __m128i v95; // xmm0
  char v96; // si
  __m128i v97; // xmm0
  int v98; // eax
  __int64 v99; // rsi
  __int64 v100; // rcx
  void *v101; // rax
  __m128i v102; // xmm0
  __int64 v103; // rcx
  _OWORD *v104; // rax
  __int64 v105; // rsi
  __m128i v106; // xmm0
  __int64 v107; // rax
  __m128i v108; // xmm0
  __int64 v109; // rdx
  int v110; // edi
  __int64 v111; // rax
  __int128 v112; // xmm0
  __int128 v113; // xmm1
  __m128i v114; // xmm0
  __m128i v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm2
  __int64 v118; // rdi
  _QWORD *v119; // rbx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rsi
  _QWORD *v124; // rdi
  __int64 v125; // rdx
  int v126; // eax
  __m128i v127; // xmm0
  __int128 v128; // xmm1
  __m128i v129; // xmm0
  __int128 v130; // xmm0
  __int128 v131; // xmm1
  __int128 v132; // xmm2
  __int64 v133; // rsi
  __int64 v134; // rsi
  __int64 v135; // [rsp+40h] [rbp-40h] BYREF
  __int128 v136; // [rsp+48h] [rbp-38h]
  __int128 v137; // [rsp+58h] [rbp-28h]
  __int128 v138; // [rsp+68h] [rbp-18h]
  __int128 v139; // [rsp+78h] [rbp-8h]
  __int128 v140; // [rsp+88h] [rbp+8h]
  __int128 v141; // [rsp+98h] [rbp+18h]
  __int128 v142; // [rsp+A8h] [rbp+28h]
  __int128 v143; // [rsp+B8h] [rbp+38h]
  __int64 v144; // [rsp+148h] [rbp+C8h]
  __int64 v145; // [rsp+150h] [rbp+D0h]
  __int64 v146; // [rsp+168h] [rbp+E8h]
  __int64 v147; // [rsp+170h] [rbp+F0h]
  __int64 v148; // [rsp+188h] [rbp+108h]
  __int64 v149; // [rsp+190h] [rbp+110h]
  _OWORD v150[3]; // [rsp+420h] [rbp+3A0h] BYREF
  __int128 v151; // [rsp+450h] [rbp+3D0h]
  __int128 v152; // [rsp+460h] [rbp+3E0h]
  __int128 v153; // [rsp+470h] [rbp+3F0h]
  __int128 v154; // [rsp+480h] [rbp+400h]
  __m128i v155; // [rsp+490h] [rbp+410h] BYREF
  _BYTE v156[80]; // [rsp+4A0h] [rbp+420h] BYREF
  _OWORD v157[6]; // [rsp+4F0h] [rbp+470h] BYREF
  __int64 v158; // [rsp+550h] [rbp+4D0h]
  __m128i v159; // [rsp+558h] [rbp+4D8h] BYREF
  __int64 v160; // [rsp+568h] [rbp+4E8h]
  __m128i v161; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v162; // [rsp+580h] [rbp+500h]
  __m128i v163; // [rsp+588h] [rbp+508h] BYREF
  __int64 v164; // [rsp+598h] [rbp+518h]
  __m128i v165; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v166; // [rsp+5B0h] [rbp+530h]
  __m128i v167; // [rsp+5B8h] [rbp+538h] BYREF
  __int64 v168; // [rsp+5C8h] [rbp+548h]
  __m128i v169; // [rsp+5D0h] [rbp+550h] BYREF
  __int64 v170; // [rsp+5E0h] [rbp+560h]
  __m128i v171; // [rsp+5E8h] [rbp+568h] BYREF
  __int64 v172; // [rsp+5F8h] [rbp+578h]
  __m128i v173; // [rsp+600h] [rbp+580h] BYREF
  __int64 v174; // [rsp+610h] [rbp+590h]
  __m128i v175; // [rsp+618h] [rbp+598h] BYREF
  __int64 v176; // [rsp+628h] [rbp+5A8h]
  _QWORD v177[4]; // [rsp+630h] [rbp+5B0h] BYREF
  _OWORD v178[2]; // [rsp+650h] [rbp+5D0h] BYREF
  __int64 v179; // [rsp+670h] [rbp+5F0h]
  __int64 v180; // [rsp+678h] [rbp+5F8h]
  __int64 v181; // [rsp+688h] [rbp+608h] BYREF
  _BYTE v182[112]; // [rsp+690h] [rbp+610h]
  __int128 v183; // [rsp+700h] [rbp+680h]
  __int64 v184; // [rsp+710h] [rbp+690h]
  _QWORD *v185; // [rsp+718h] [rbp+698h]
  __int128 v186; // [rsp+720h] [rbp+6A0h]
  __int64 v187; // [rsp+730h] [rbp+6B0h]
  __m128i v188; // [rsp+740h] [rbp+6C0h] BYREF
  __int128 v189; // [rsp+750h] [rbp+6D0h]
  __int128 v190; // [rsp+760h] [rbp+6E0h] BYREF
  __int128 v191; // [rsp+778h] [rbp+6F8h] BYREF
  __int64 v192; // [rsp+788h] [rbp+708h]
  char v193; // [rsp+790h] [rbp+710h]
  __int64 v194; // [rsp+798h] [rbp+718h] BYREF
  __int64 v195; // [rsp+7A0h] [rbp+720h]
  __int64 v196; // [rsp+7A8h] [rbp+728h]
  __int64 v197; // [rsp+7B0h] [rbp+730h]
  __int64 v198; // [rsp+7B8h] [rbp+738h]
  __m128i v199; // [rsp+7C0h] [rbp+740h] BYREF
  __int64 v200; // [rsp+7D0h] [rbp+750h]
  __m128i v201; // [rsp+7F0h] [rbp+770h] BYREF
  __int64 v202; // [rsp+800h] [rbp+780h]
  _QWORD *v203; // [rsp+808h] [rbp+788h]
  __m128i v204; // [rsp+810h] [rbp+790h] BYREF
  __m256i v205; // [rsp+820h] [rbp+7A0h]
  __m128i v206; // [rsp+840h] [rbp+7C0h]
  __int128 v207; // [rsp+850h] [rbp+7D0h]
  __int128 v208; // [rsp+860h] [rbp+7E0h]
  __m128i v209; // [rsp+870h] [rbp+7F0h] BYREF
  __m256i v210; // [rsp+880h] [rbp+800h]
  __m128i v211; // [rsp+8A0h] [rbp+820h]
  __int128 v212; // [rsp+8B0h] [rbp+830h]
  __int128 v213; // [rsp+8C0h] [rbp+840h]
  __int64 v214; // [rsp+8D8h] [rbp+858h]
  __int64 v215; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v216; // [rsp+8E8h] [rbp+868h]
  __int64 v217; // [rsp+8F0h] [rbp+870h]
  _QWORD *v218; // [rsp+8F8h] [rbp+878h] BYREF
  __int64 (__fastcall *v219)(_QWORD, _QWORD); // [rsp+900h] [rbp+880h]
  __m128i v220; // [rsp+908h] [rbp+888h] BYREF
  __int64 v221; // [rsp+918h] [rbp+898h]
  _BYTE v222[112]; // [rsp+920h] [rbp+8A0h] BYREF
  HANDLE hObject; // [rsp+9C0h] [rbp+940h] BYREF
  HANDLE v224; // [rsp+9C8h] [rbp+948h] BYREF
  HANDLE v225; // [rsp+9D0h] [rbp+950h] BYREF
  __int64 v226; // [rsp+9D8h] [rbp+958h]
  _BYTE v227[112]; // [rsp+9E0h] [rbp+960h] BYREF
  __int128 v228; // [rsp+A78h] [rbp+9F8h] BYREF
  __int64 v229; // [rsp+A88h] [rbp+A08h]
  __int64 v230; // [rsp+A90h] [rbp+A10h]
  __int128 v231; // [rsp+A98h] [rbp+A18h] BYREF
  __int64 v232; // [rsp+AA8h] [rbp+A28h]
  char v233; // [rsp+AB2h] [rbp+A32h]
  char v234; // [rsp+AB3h] [rbp+A33h]
  char v235; // [rsp+AB4h] [rbp+A34h]
  char v236; // [rsp+AB6h] [rbp+A36h]
  char v237; // [rsp+AB7h] [rbp+A37h]
  char v238; // [rsp+AB8h] [rbp+A38h]
  char v239; // [rsp+AB9h] [rbp+A39h]
  char v240; // [rsp+ABAh] [rbp+A3Ah]
  char v241; // [rsp+ABBh] [rbp+A3Bh]
  char v242; // [rsp+ABCh] [rbp+A3Ch]
  char v243; // [rsp+ABDh] [rbp+A3Dh]
  char v244; // [rsp+ABEh] [rbp+A3Eh]
  char v245; // [rsp+ABFh] [rbp+A3Fh]
  char v246; // [rsp+AC0h] [rbp+A40h]
  char v247; // [rsp+AC1h] [rbp+A41h]
  char v248; // [rsp+AC2h] [rbp+A42h]
  char v249; // [rsp+AC3h] [rbp+A43h]
  char v250; // [rsp+AC4h] [rbp+A44h]
  char v251; // [rsp+AC5h] [rbp+A45h]
  char v252; // [rsp+AC6h] [rbp+A46h]
  char v253; // [rsp+AC7h] [rbp+A47h]
  __int64 v254; // [rsp+AC8h] [rbp+A48h]

  v254 = -2;
  v237 = 1;
  parse_import_file(&v135, a3, a4);
  *(_OWORD *)v227 = v136;
  *(_OWORD *)&v227[16] = v137;
  *(_OWORD *)&v227[32] = v138;
  *(_OWORD *)&v227[48] = v139;
  *(_OWORD *)&v227[64] = v140;
  *(_OWORD *)&v227[80] = v141;
  if ( v135 == -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v227[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v227[64];
    si128 = _mm_load_si128((const __m128i *)v227);
    v16 = *(_OWORD *)&v227[16];
    v17 = *(_OWORD *)&v227[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v227[48];
    *(_OWORD *)(a1 + 32) = v17;
    *(_OWORD *)(a1 + 16) = v16;
    *(__m128i *)a1 = si128;
    v13 = a8;
    v14 = *a8;
    if ( *a8 == -1 )
      return a1;
LABEL_11:
    v18 = v13[1];
    v19 = v13[2];
    if ( v19 )
    {
      v20 = (_QWORD *)(v18 + 8);
      do
      {
        v21 = *(v20 - 1);
        if ( v21 )
          sub_140001660(*v20, v21, 1);
        v20 += 3;
        --v19;
      }
      while ( v19 );
    }
    if ( v14 )
    {
      v22 = 24 * v14;
      v23 = 8;
      v24 = v18;
LABEL_18:
      sub_140001660(v24, v22, v23);
    }
    return a1;
  }
  v183 = v143;
  *(_OWORD *)&v182[96] = v142;
  *(_OWORD *)v182 = *(_OWORD *)v227;
  *(_OWORD *)&v182[16] = *(_OWORD *)&v227[16];
  *(_OWORD *)&v182[32] = *(_OWORD *)&v227[32];
  *(_OWORD *)&v182[48] = *(_OWORD *)&v227[48];
  *(_OWORD *)&v182[64] = *(_OWORD *)&v227[64];
  *(__m128i *)&v182[80] = _mm_load_si128((const __m128i *)&v227[80]);
  v181 = v135;
  if ( *((_QWORD *)&v143 + 1) != a6 || (unsigned int)sub_1416847B0(v183, a5, a6) )
  {
    nullsub_1(v10);
    v11 = (__m128i *)sub_140001650(68, 1);
    if ( !v11 )
    {
      v239 = 1;
      v238 = 1;
      sub_1416C2D4B(1, 68);
    }
    qmemcpy(&v11[1], "ged after preview; preview it again before importing", 52);
    *v11 = _mm_loadu_si128((const __m128i *)&xmmword_141798259);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 68;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 24) = 68;
    v12 = 1;
    sub_1407D9AE0(&v181);
    goto LABEL_6;
  }
  v154 = *(_OWORD *)&v182[88];
  v153 = *(_OWORD *)&v182[72];
  v152 = *(_OWORD *)&v182[56];
  v26 = _mm_loadu_si128((const __m128i *)&v181);
  v151 = *(_OWORD *)&v182[40];
  v150[2] = *(_OWORD *)&v182[24];
  v150[1] = *(_OWORD *)&v182[8];
  v150[0] = v26;
  v235 = 1;
  sub_1407BC950(&v135, a2);
  v245 = 1;
  v27 = sub_140712590(&v135);
  if ( v27 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v27;
    v12 = 1;
LABEL_169:
    sub_140016620(&v135);
    v239 = v12;
    v238 = 0;
    sub_1407D9AE0(v150);
LABEL_6:
    if ( *(_QWORD *)&v182[104] )
      sub_140001660(v183, *(_QWORD *)&v182[104], 1);
    v13 = a8;
    v14 = *a8;
    if ( ((*a8 != -1) & (unsigned __int8)v12) == 0 )
      return a1;
    goto LABEL_11;
  }
  v29 = a8;
  v30 = *a8;
  if ( *a8 == -1 )
  {
    v188.m128i_i64[0] = 0;
  }
  else
  {
    v31 = a8[1];
    v32 = v31 + 24LL * a8[2];
    v177[0] = v31;
    v177[2] = v30;
    v177[1] = v31;
    v177[3] = v32;
    v236 = 1;
    v33 = sub_141470CD0(v31, v32);
    if ( *(_BYTE *)(v33 + 16) == 1 )
    {
      v34 = *(_QWORD *)v33;
      v35 = *(_QWORD *)(v33 + 8);
    }
    else
    {
      v236 = 1;
      v134 = v33;
      v34 = sub_141486EF0();
      v33 = v134;
      *(_QWORD *)v134 = v34;
      *(_QWORD *)(v134 + 8) = v35;
      *(_BYTE *)(v134 + 16) = 1;
    }
    *(_QWORD *)v33 = v34 + 1;
    *(_OWORD *)&v227[16] = xmmword_1417939D0;
    *(__m128i *)v227 = _mm_loadu_si128((const __m128i *)&off_1417939C0);
    *(_QWORD *)&v227[32] = v34;
    *(_QWORD *)&v227[40] = v35;
    sub_140446630(v227, v177);
    v36 = _mm_load_si128((const __m128i *)v227);
    v190 = *(_OWORD *)&v227[32];
    v189 = *(_OWORD *)&v227[16];
    v188 = v36;
  }
  v201.m128i_i64[0] = 0;
  v201.m128i_i64[1] = 8;
  v202 = 0;
  v244 = 1;
  v37 = sub_141470CD0(v28, v29);
  v38 = *(_BYTE *)(v37 + 16) == 1;
  v214 = a1;
  v185 = a2;
  if ( v38 )
  {
    v39 = *(_QWORD *)v37;
    v40 = *(_QWORD *)(v37 + 8);
  }
  else
  {
    v244 = 1;
    v133 = v37;
    v39 = sub_141486EF0();
    v37 = v133;
    *(_QWORD *)v133 = v39;
    *(_QWORD *)(v133 + 8) = v40;
    *(_BYTE *)(v133 + 16) = 1;
  }
  *(_QWORD *)v37 = v39 + 1;
  v178[1] = xmmword_1417939D0;
  v178[0] = _mm_loadu_si128((const __m128i *)&off_1417939C0);
  v179 = v39;
  v180 = v40;
  *(_QWORD *)&v231 = 0;
  *((_QWORD *)&v231 + 1) = 8;
  v232 = 0;
  v215 = 0;
  v216 = 8;
  v217 = 0;
  v203 = *((_QWORD **)&v151 + 1);
  v184 = *((_QWORD *)&v151 + 1) + 416 * v152;
LABEL_31:
  while ( 1 )
  {
    v46 = v203;
    if ( v203 == (_QWORD *)v184 )
      break;
    v203 += 52;
    v47 = v188.m128i_i64[0];
    if ( v188.m128i_i64[0] )
    {
      if ( *((_QWORD *)&v189 + 1) )
      {
        v48 = sub_140378810(&v190, v46 + 4);
        _RCX = v48 >> 57;
        v50 = v188.m128i_i64[1];
        v51 = _mm_cvtsi32_si128(v48 >> 57);
        v52 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v51, v51), 0), 68);
        v53 = v46[5];
        v54 = v46[6];
        for ( i = 0; ; i += 16 )
        {
          v56 = v50 & v48;
          v57 = _mm_loadu_si128((const __m128i *)(v47 + v56));
          _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v57, v52));
          if ( _ESI )
            break;
LABEL_40:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v57, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
            goto LABEL_31;
          v48 = i + v56 + 16;
        }
        v226 = i;
        while ( 1 )
        {
          __asm { tzcnt ecx, esi }
          v59 = v56;
          _RCX = -(__int64)(v50 & (v56 + _RCX));
          if ( v54 == *(_QWORD *)(v47 + 24 * _RCX - 8)
            && !(unsigned int)sub_1416847B0(v53, *(_QWORD *)(v47 + 24 * _RCX - 16), v54) )
          {
            goto LABEL_42;
          }
          v60 = _ESI - 1;
          LOWORD(v60) = _ESI & (_ESI - 1);
          v38 = (_WORD)v60 == 0;
          _ESI = v60;
          v56 = v59;
          i = v226;
          if ( v38 )
            goto LABEL_40;
        }
      }
    }
    else
    {
LABEL_42:
      if ( (v46[37] == -1 || (sub_14033BC10(v46[38], v46[39]), v61 = 1, !v62))
        && (v46[40] == -1 || (sub_14033BC10(v46[41], v46[42]), v61 = 1, !v63)) )
      {
        if ( v46[34] == -1 )
        {
          v61 = 0;
          if ( v46[31] == -1 )
            goto LABEL_59;
        }
        else
        {
          sub_14033BC10(v46[35], v46[36]);
          v61 = v77 != 0;
          if ( v46[31] == -1 )
            goto LABEL_59;
        }
LABEL_47:
        sub_14033BC10(v46[32], v46[33]);
        if ( v64 != 0 || v61 )
          goto LABEL_48;
LABEL_60:
        sub_14149C500(&v204, v46 + 4);
        sub_14149C500(v222, v46 + 7);
        nullsub_1(v78);
        v79 = (void *)sub_140001650(21, 1);
        if ( !v79 )
          sub_1416C2D4B(1, 21);
        qmemcpy(v79, "ACCOUNT_MISSING_TOKEN", 21);
        *(__m128i *)v227 = v204;
        *(_QWORD *)&v227[16] = v205.m256i_i64[0];
        *(_QWORD *)&v227[40] = *(_QWORD *)&v222[16];
        *(_OWORD *)&v227[24] = *(_OWORD *)v222;
        *(_QWORD *)&v227[48] = 21;
        *(_QWORD *)&v227[56] = v79;
        *(_QWORD *)&v227[64] = 21;
        v80 = v232;
        if ( v232 == (_QWORD)v231 )
LABEL_70:
          sub_141689730(&v231);
LABEL_30:
        v41 = *((_QWORD *)&v231 + 1);
        v42 = 9 * v80;
        *(_QWORD *)(*((_QWORD *)&v231 + 1) + 8 * v42 + 64) = *(_QWORD *)&v227[64];
        v43 = _mm_load_si128((const __m128i *)v227);
        v44 = *(_OWORD *)&v227[16];
        v45 = *(_OWORD *)&v227[32];
        *(_OWORD *)(v41 + 8 * v42 + 48) = *(_OWORD *)&v227[48];
        *(_OWORD *)(v41 + 8 * v42 + 32) = v45;
        *(_OWORD *)(v41 + 8 * v42 + 16) = v44;
        *(__m128i *)(v41 + 8 * v42) = v43;
        v232 = v80 + 1;
      }
      else
      {
        if ( v46[31] != -1 )
          goto LABEL_47;
LABEL_59:
        if ( !v61 )
          goto LABEL_60;
LABEL_48:
        if ( !(unsigned __int8)sub_1403CBE70(v46 + 28) )
        {
          sub_14149C500(&v204, v46 + 4);
          sub_14149C500(v222, v46 + 7);
          nullsub_1(v81);
          v82 = (void *)sub_140001650(21, 1);
          if ( !v82 )
            sub_1416C2D4B(1, 21);
          qmemcpy(v82, "UNSUPPORTED_AUTH_MODE", 21);
          *(__m128i *)v227 = v204;
          *(_QWORD *)&v227[16] = v205.m256i_i64[0];
          *(_QWORD *)&v227[40] = *(_QWORD *)&v222[16];
          *(_OWORD *)&v227[24] = *(_OWORD *)v222;
          *(_QWORD *)&v227[48] = 21;
          *(_QWORD *)&v227[56] = v82;
          *(_QWORD *)&v227[64] = 21;
          v80 = v232;
          if ( v232 == (_QWORD)v231 )
            goto LABEL_70;
          goto LABEL_30;
        }
        v65 = (char *)v46[5];
        v66 = v46[6];
        if ( !(unsigned __int8)sub_1408673F0(v65, v66) )
        {
          sub_14149C500(&v204, v46 + 4);
          sub_14149C500(v222, v46 + 7);
          nullsub_1(v83);
          v84 = (void *)sub_140001650(19, 1);
          if ( !v84 )
            sub_1416C2D4B(1, 19);
          qmemcpy(v84, "INVALID_ACCOUNT_KEY", 19);
          *(__m128i *)v227 = v204;
          *(_QWORD *)&v227[16] = v205.m256i_i64[0];
          *(_QWORD *)&v227[40] = *(_QWORD *)&v222[16];
          *(_OWORD *)&v227[24] = *(_OWORD *)v222;
          *(_QWORD *)&v227[48] = 19;
          *(_QWORD *)&v227[56] = v84;
          *(_QWORD *)&v227[64] = 19;
          v80 = v232;
          if ( v232 == (_QWORD)v231 )
            goto LABEL_70;
          goto LABEL_30;
        }
        sub_1403CB3A0(&v191, v148, v149, v65, v66);
        v67 = v192;
        v226 = *((_QWORD *)&v191 + 1);
        sub_1403C8920(&v204, *((_QWORD *)&v191 + 1), v192);
        v230 = v204.m128i_i64[1];
        sub_14037FAC0((__int64)v227, v204.m128i_i64[1], v205.m256i_i64[0], (__int64)&aTtenaccountCre[4], 18);
        v68 = *(_QWORD *)v227;
        v69 = *(void **)&v227[8];
        if ( *(_QWORD *)v227 == -1 )
        {
          if ( v204.m128i_i64[0] )
            sub_140001660(v230, v204.m128i_i64[0], 1);
          v225 = v69;
          v249 = 1;
          sub_1403871C0(v222, v144, v145);
          if ( *(_DWORD *)v222 != -1 )
          {
            *(_OWORD *)&v227[80] = *(_OWORD *)&v222[80];
            *(_OWORD *)&v227[64] = *(_OWORD *)&v222[64];
            *(_OWORD *)&v227[48] = *(_OWORD *)&v222[48];
            *(_OWORD *)&v227[32] = *(_OWORD *)&v222[32];
            *(_OWORD *)&v227[16] = *(_OWORD *)&v222[16];
            *(_OWORD *)v227 = *(_OWORD *)v222;
            sub_14149C500(&v199, v46 + 4);
            sub_14149C500(&v209, v46 + 7);
            *(_QWORD *)&v228 = v227;
            *((_QWORD *)&v228 + 1) = sub_140B036A0;
            sub_14149C0F0(&v173, &unk_14179821E, &v228);
            v204 = v199;
            v205.m256i_i64[0] = v200;
            v205.m256i_i64[3] = v210.m256i_i64[0];
            *(__m128i *)&v205.m256i_u64[1] = v209;
            *(_QWORD *)&v207 = v174;
            v206 = v173;
            v85 = v232;
            if ( v232 == (_QWORD)v231 )
              sub_141689730(&v231);
            v86 = *((_QWORD *)&v231 + 1);
            v87 = 9 * v85;
            *(_QWORD *)(*((_QWORD *)&v231 + 1) + 8 * v87 + 64) = v207;
            v88 = _mm_load_si128(&v204);
            v89 = *(_OWORD *)v205.m256i_i8;
            v90 = *(_OWORD *)&v205.m256i_u64[2];
            *(__m128i *)(v86 + 8 * v87 + 48) = v206;
            *(_OWORD *)(v86 + 8 * v87 + 32) = v90;
            *(_OWORD *)(v86 + 8 * v87 + 16) = v89;
            *(__m128i *)(v86 + 8 * v87) = v88;
            v232 = v85 + 1;
            v249 = 1;
            sub_1407DA310(v227);
            goto LABEL_117;
          }
          v224 = *(HANDLE *)&v222[8];
          v248 = 1;
          v247 = 1;
          sub_1403885B0(v222, v144, v145);
          if ( *(_DWORD *)v222 == -1 )
          {
            hObject = *(HANDLE *)&v222[8];
            v253 = 1;
            v252 = 1;
            v251 = 1;
            sub_141486710(v227, v226, v67);
            if ( *(_DWORD *)v227 == 2 )
            {
              *(_QWORD *)&v222[8] = *(_QWORD *)&v227[8];
              *(_QWORD *)v222 = 2;
              goto LABEL_82;
            }
            *(_OWORD *)v222 = *(_OWORD *)v227;
            *(_QWORD *)&v222[80] = *(_QWORD *)&v227[80];
            *(__m128i *)&v222[64] = _mm_loadu_si128((const __m128i *)&v227[64]);
            *(_OWORD *)&v222[48] = *(_OWORD *)&v227[48];
            *(_OWORD *)&v222[32] = *(_OWORD *)&v227[32];
            *(_OWORD *)&v222[16] = *(_OWORD *)&v227[16];
            if ( *(_QWORD *)v227 == 2 )
            {
LABEL_82:
              v253 = 1;
              v252 = 1;
              v251 = 1;
              sub_140018650(&v222[8]);
              goto LABEL_83;
            }
            v253 = 1;
            v252 = 1;
            v251 = 1;
            sub_14086C050((unsigned int)v222, v226, v67, v148, v149, (__int64)v65, v66);
            if ( *(_DWORD *)v222 != -1 )
            {
              *(_OWORD *)&v227[80] = *(_OWORD *)&v222[80];
              *(_OWORD *)&v227[64] = *(_OWORD *)&v222[64];
              v97 = _mm_loadu_si128((const __m128i *)v222);
              *(_OWORD *)&v227[48] = *(_OWORD *)&v222[48];
              *(_OWORD *)&v227[32] = *(_OWORD *)&v222[32];
              *(_OWORD *)&v227[16] = *(_OWORD *)&v222[16];
              *(__m128i *)v227 = v97;
              sub_14149C500(&v199, v46 + 4);
              sub_14149C500(&v209, v46 + 7);
              *(_QWORD *)&v228 = v227;
              *((_QWORD *)&v228 + 1) = sub_140B036A0;
              sub_14149C0F0(&v169, &unk_141798125, &v228);
              v204 = v199;
              v205.m256i_i64[0] = v200;
              v205.m256i_i64[3] = v210.m256i_i64[0];
              *(__m128i *)&v205.m256i_u64[1] = v209;
              *(_QWORD *)&v207 = v170;
              v206 = _mm_loadu_si128(&v169);
              sub_140843610(&v231, &v204);
              v253 = 1;
              v252 = 1;
              v251 = 1;
              sub_1407DA310(v227);
LABEL_115:
              sub_1404220A0(&hObject);
              CloseHandle(hObject);
              goto LABEL_116;
            }
LABEL_83:
            v253 = 1;
            v252 = 1;
            v251 = 1;
            sub_1408698E0(&v155, v146, v147);
            if ( v155.m128i_i32[0] != -1 )
            {
              *(_QWORD *)v227 = hObject;
              sub_1404220A0(v227);
              CloseHandle(*(HANDLE *)v227);
              *(_QWORD *)v227 = v224;
              sub_1404220A0(v227);
              a1 = v214;
              CloseHandle(*(HANDLE *)v227);
              *(_QWORD *)v227 = v225;
              sub_1404220A0(v227);
              CloseHandle(*(HANDLE *)v227);
              *(_OWORD *)&v227[80] = *(_OWORD *)&v156[64];
              *(_OWORD *)&v227[64] = *(_OWORD *)&v156[48];
              v129 = _mm_loadu_si128(&v155);
              *(_OWORD *)&v227[48] = *(_OWORD *)&v156[32];
              *(_OWORD *)&v227[32] = *(_OWORD *)&v156[16];
              *(_OWORD *)&v227[16] = *(_OWORD *)v156;
              *(__m128i *)v227 = v129;
              v242 = 0;
              v241 = 0;
              v240 = 0;
              failure_after_snapshot_writes(
                (__int128 *)v222,
                &v135,
                v216,
                v217,
                (__int64)aReadingAccount,
                31,
                (__int64)v227);
              *(_OWORD *)(a1 + 80) = *(_OWORD *)&v222[80];
              *(_OWORD *)(a1 + 64) = *(_OWORD *)&v222[64];
              v130 = *(_OWORD *)v222;
              v131 = *(_OWORD *)&v222[16];
              v132 = *(_OWORD *)&v222[32];
              *(_OWORD *)(a1 + 48) = *(_OWORD *)&v222[48];
              *(_OWORD *)(a1 + 32) = v132;
              *(_OWORD *)(a1 + 16) = v131;
              *(_OWORD *)a1 = v130;
              if ( (_QWORD)v191 )
                sub_140001660(v226, v191, 1);
              goto LABEL_146;
            }
            *(_QWORD *)&v208 = *(_QWORD *)&v156[72];
            v207 = *(_OWORD *)&v156[56];
            v92 = _mm_loadu_si128((const __m128i *)&v155.m128i_u64[1]);
            v206 = *(__m128i *)&v156[40];
            v205 = *(__m256i *)&v156[8];
            v204 = v92;
            v93 = v92.m128i_i64[0];
            v94 = &v204;
            if ( v92.m128i_i64[0] == -1 )
              v94 = nullptr;
            v243 = 1;
            sub_14085C1E0(&v199, v94);
            if ( v92.m128i_i64[0] == -1 )
            {
              *(_QWORD *)v222 = -1;
            }
            else
            {
              *(_OWORD *)&v227[72] = *(_OWORD *)&v156[64];
              v95 = _mm_loadu_si128((const __m128i *)v156);
              *(_OWORD *)&v227[56] = *(_OWORD *)&v156[48];
              *(_OWORD *)&v227[40] = *(_OWORD *)&v156[32];
              *(_OWORD *)&v227[24] = *(_OWORD *)&v156[16];
              *(__m128i *)&v227[8] = v95;
              *(_QWORD *)v227 = v93;
              sub_14037CCF0(v222, v227);
            }
            sub_14086C690(&v194, v138, *((_QWORD *)&v138 + 1), v222);
            v96 = 1;
            if ( !sub_14042AAD0(v199.m128i_i64, (__int64)(v46 + 4)) )
            {
              sub_141486710(v227, v226, v67);
              if ( *(_DWORD *)v227 == 2 )
              {
                *(_QWORD *)&v222[8] = *(_QWORD *)&v227[8];
                *(_QWORD *)v222 = 2;
                goto LABEL_95;
              }
              *(_OWORD *)v222 = *(_OWORD *)v227;
              *(_QWORD *)&v222[80] = *(_QWORD *)&v227[80];
              *(__m128i *)&v222[64] = _mm_loadu_si128((const __m128i *)&v227[64]);
              *(_OWORD *)&v222[48] = *(_OWORD *)&v227[48];
              *(_OWORD *)&v222[32] = *(_OWORD *)&v227[32];
              *(_OWORD *)&v222[16] = *(_OWORD *)&v227[16];
              v96 = 1;
              if ( *(_QWORD *)v227 == 2 )
              {
LABEL_95:
                sub_140018650(&v222[8]);
                v96 = 0;
              }
            }
            v230 = v194;
            if ( v194 == -1 || v196 != v66 )
            {
              if ( a7 | (unsigned __int8)v96 ^ 1 )
                goto LABEL_104;
            }
            else
            {
              v98 = sub_1416847B0(v195, v65, v66);
              if ( !v96 )
                goto LABEL_104;
              if ( a7 )
              {
                if ( !v98 )
                {
                  sub_14149C500(&v209, v46 + 4);
                  v99 = v230;
                  sub_14149C500(v222, v46 + 7);
                  nullsub_1(v100);
                  v101 = (void *)sub_140001650(24, 1);
                  if ( !v101 )
                    sub_1416C2D4B(1, 24);
                  qmemcpy(v101, "ACTIVE_ACCOUNT_PROTECTED", 24);
                  *(__m128i *)v227 = v209;
                  *(_QWORD *)&v227[16] = v210.m256i_i64[0];
                  *(_QWORD *)&v227[40] = *(_QWORD *)&v222[16];
                  *(__m128i *)&v227[24] = _mm_loadu_si128((const __m128i *)v222);
                  *(_QWORD *)&v227[48] = 24;
                  *(_QWORD *)&v227[56] = v101;
                  *(_QWORD *)&v227[64] = 24;
                  sub_140843610(&v231, v227);
LABEL_112:
                  if ( v99 )
                    sub_140001660(v195, v99, 1);
LABEL_114:
                  v243 = 0;
                  sub_14067FFB0(&v199);
                  goto LABEL_115;
                }
LABEL_104:
                sub_1403C9DD0(v222, v46 + 28, v226, v67);
                v99 = v230;
                if ( *(_DWORD *)v222 == 2 )
                {
                  *(_OWORD *)&v227[80] = *(_OWORD *)&v222[88];
                  *(_OWORD *)&v227[64] = *(_OWORD *)&v222[72];
                  v102 = _mm_loadu_si128((const __m128i *)&v222[8]);
                  *(_OWORD *)&v227[48] = *(_OWORD *)&v222[56];
                  *(_OWORD *)&v227[32] = *(_OWORD *)&v222[40];
                  *(_OWORD *)&v227[16] = *(_OWORD *)&v222[24];
                  *(__m128i *)v227 = v102;
                  sub_14149C500(&v220, v46 + 4);
                  sub_14149C500(&v228, v46 + 7);
                  v218 = v227;
                  v219 = sub_140B036A0;
                  sub_14149C0F0(&v165, &unk_1417981B7, &v218);
                  v209 = v220;
                  v210.m256i_i64[0] = v221;
                  v210.m256i_i64[3] = v229;
                  *(_OWORD *)&v210.m256i_u64[1] = v228;
                  *(_QWORD *)&v212 = v166;
                  v211 = _mm_loadu_si128(&v165);
                  sub_140843610(&v231, &v209);
                  sub_1407DA310(v227);
                }
                else
                {
                  sub_141684120(v227, v222, 152);
                  if ( *(_QWORD *)&v227[32] == v66 && !(unsigned int)sub_1416847B0(*(_QWORD *)&v227[24], v65, v66) )
                  {
                    sub_1400157A0(v222);
                    sub_1407DBF50(&v228, v46 + 28);
                    v198 = v228;
                    if ( (_QWORD)v228 == -1 )
                    {
                      v218 = *((_QWORD **)&v228 + 1);
                      sub_14149C500(&v209, v46 + 4);
                      sub_14149C500(v222, v46 + 7);
                      v220.m128i_i64[0] = (__int64)&v218;
                      v220.m128i_i64[1] = (__int64)sub_14142D3F0;
                      sub_14149C0F0(&v163, &unk_14179817D, &v220);
                      *(__m128i *)v227 = v209;
                      *(_QWORD *)&v227[16] = v210.m256i_i64[0];
                      *(_QWORD *)&v227[40] = *(_QWORD *)&v222[16];
                      *(_OWORD *)&v227[24] = *(_OWORD *)v222;
                      *(_QWORD *)&v227[64] = v164;
                      *(__m128i *)&v227[48] = _mm_loadu_si128(&v163);
                      sub_140843610(&v231, v227);
                      v99 = v230;
                      sub_140010450(&v218);
                    }
                    else
                    {
                      v197 = *((_QWORD *)&v228 + 1);
                      v105 = v229;
                      v246 = 1;
                      sub_14149C500(&v228, v46 + 4);
                      v234 = 1;
                      sub_14032C610(&v209, &v191);
                      *(__m128i *)v222 = _mm_loadu_si128(&v209);
                      *(_QWORD *)&v222[16] = v210.m256i_i64[0];
                      v222[24] = v193;
                      v209.m128i_i64[0] = v198;
                      v209.m128i_i64[1] = v197;
                      v210.m256i_i64[0] = v105;
                      v234 = 0;
                      sub_14083F630(v227, &v228, v222, &v209);
                      if ( *(_QWORD *)v227 == -1 )
                      {
                        *(_OWORD *)&v222[80] = *(_OWORD *)&v227[88];
                        *(_OWORD *)&v222[64] = *(_OWORD *)&v227[72];
                        v108 = _mm_loadu_si128((const __m128i *)&v227[8]);
                        *(_OWORD *)&v222[48] = *(_OWORD *)&v227[56];
                        *(_OWORD *)&v222[32] = *(_OWORD *)&v227[40];
                        *(_OWORD *)&v222[16] = *(_OWORD *)&v227[24];
                        *(__m128i *)v222 = v108;
                        sub_14149C500(&v220, v46 + 4);
                        sub_14149C500(&v228, v46 + 7);
                        v218 = v222;
                        v219 = sub_140B036A0;
                        sub_14149C0F0(&v161, &unk_141798164, &v218);
                        v209 = v220;
                        v210.m256i_i64[0] = v221;
                        v210.m256i_i64[3] = v229;
                        *(_OWORD *)&v210.m256i_u64[1] = v228;
                        *(_QWORD *)&v212 = v162;
                        v211 = _mm_loadu_si128(&v161);
                        sub_140843610(&v231, &v209);
                        v246 = 0;
                        sub_1407DA310(v222);
                      }
                      else
                      {
                        v158 = *(_QWORD *)&v227[96];
                        v157[5] = *(_OWORD *)&v227[80];
                        v157[4] = *(_OWORD *)&v227[64];
                        v106 = _mm_loadu_si128((const __m128i *)v227);
                        v157[3] = *(_OWORD *)&v227[48];
                        v157[2] = *(_OWORD *)&v227[32];
                        v157[1] = *(_OWORD *)&v227[16];
                        v157[0] = v106;
                        v250 = 1;
                        v107 = sub_1408726C0(v226, v67, *(__int64 *)&v227[64], *(unsigned __int64 *)&v227[72]);
                        if ( !v107 )
                        {
                          v250 = 1;
                          sub_14149C500(v227, v46 + 4);
                          v250 = 1;
                          sub_1403B1EC0(&v201, v227);
                          sub_14033BC10(v46[11], v46[12]);
                          if ( v109 )
                          {
                            v250 = 1;
                            sub_14149C500(v222, v46 + 4);
                            v233 = 1;
                            sub_14149C500(v227, v46 + 10);
                            v233 = 0;
                            sub_140470E80(&v209, (__int64)v178, (__m128i *)v222, (__int64)v227);
                            if ( v209.m128i_i64[0] != -1 )
                            {
                              if ( v209.m128i_i64[0] )
                                sub_140001660(v209.m128i_i64[1], v209.m128i_i64[0], 1);
                            }
                          }
                          v250 = 0;
                          sub_140843550(&v215, v157);
                          if ( v230 != -1 && v230 )
                            sub_140001660(v195, v230, 1);
                          v243 = 0;
                          sub_14067FFB0(&v199);
                          sub_1404220A0(&hObject);
                          CloseHandle(hObject);
                          sub_1404220A0(&v224);
                          CloseHandle(v224);
                          sub_1404220A0(&v225);
                          goto LABEL_119;
                        }
                        v220.m128i_i64[0] = v107;
                        sub_14149C500(&v209, v46 + 4);
                        sub_14149C500(v222, v46 + 7);
                        *(_QWORD *)&v228 = &v220;
                        *((_QWORD *)&v228 + 1) = sub_141490720;
                        sub_14149C0F0(&v159, &unk_141798153, &v228);
                        *(__m128i *)v227 = v209;
                        *(_QWORD *)&v227[16] = v210.m256i_i64[0];
                        *(_QWORD *)&v227[40] = *(_QWORD *)&v222[16];
                        *(_OWORD *)&v227[24] = *(_OWORD *)v222;
                        *(_QWORD *)&v227[64] = v160;
                        *(__m128i *)&v227[48] = _mm_loadu_si128(&v159);
                        sub_140843610(&v231, v227);
                        v250 = 1;
                        sub_140018650(&v220);
                        sub_1407D9D70(v157);
                      }
                      v99 = v230;
                    }
                  }
                  else
                  {
                    sub_14149C500(&v220, v46 + 4);
                    sub_14149C500(&v228, v46 + 7);
                    v218 = &v227[16];
                    v219 = sub_1400015F0;
                    sub_14149C0F0(&v167, &unk_141798192, &v218);
                    v209 = v220;
                    v210.m256i_i64[0] = v221;
                    v210.m256i_i64[3] = v229;
                    *(_OWORD *)&v210.m256i_u64[1] = v228;
                    *(_QWORD *)&v212 = v168;
                    v211 = _mm_loadu_si128(&v167);
                    sub_140843610(&v231, &v209);
                    sub_1400157A0(v227);
                  }
                }
LABEL_111:
                if ( v99 != -1 )
                  goto LABEL_112;
                goto LABEL_114;
              }
            }
            sub_14149C500(&v209, v46 + 4);
            v99 = v230;
            sub_14149C500(v222, v46 + 7);
            nullsub_1(v103);
            v104 = (_OWORD *)sub_140001650(16, 1);
            if ( !v104 )
              sub_1416C2D4B(1, 16);
            *v104 = xmmword_141798143;
            *(__m128i *)v227 = v209;
            *(_QWORD *)&v227[16] = v210.m256i_i64[0];
            *(_QWORD *)&v227[40] = *(_QWORD *)&v222[16];
            *(__m128i *)&v227[24] = _mm_loadu_si128((const __m128i *)v222);
            *(_QWORD *)&v227[48] = 16;
            *(_QWORD *)&v227[56] = v104;
            *(_QWORD *)&v227[64] = 16;
            sub_140843610(&v231, v227);
            goto LABEL_111;
          }
          *(_OWORD *)&v227[80] = *(_OWORD *)&v222[80];
          *(_OWORD *)&v227[64] = *(_OWORD *)&v222[64];
          v91 = _mm_loadu_si128((const __m128i *)v222);
          *(_OWORD *)&v227[48] = *(_OWORD *)&v222[48];
          *(_OWORD *)&v227[32] = *(_OWORD *)&v222[32];
          *(_OWORD *)&v227[16] = *(_OWORD *)&v222[16];
          *(__m128i *)v227 = v91;
          sub_14149C500(&v199, v46 + 4);
          sub_14149C500(&v209, v46 + 7);
          *(_QWORD *)&v228 = v227;
          *((_QWORD *)&v228 + 1) = sub_140B036A0;
          sub_14149C0F0(&v171, &unk_141798207, &v228);
          v204 = v199;
          v205.m256i_i64[0] = v200;
          v205.m256i_i64[3] = v210.m256i_i64[0];
          *(__m128i *)&v205.m256i_u64[1] = v209;
          *(_QWORD *)&v207 = v172;
          v206 = _mm_loadu_si128(&v171);
          sub_140843610(&v231, &v204);
          v248 = 1;
          v247 = 1;
          sub_1407DA310(v227);
LABEL_116:
          sub_1404220A0(&v224);
          CloseHandle(v224);
LABEL_117:
          *(_QWORD *)v227 = sub_1412018B0(&v225);
          if ( *(_QWORD *)v227 )
            sub_140018650(v227);
LABEL_119:
          CloseHandle(v225);
          v76 = v191;
          if ( (_QWORD)v191 )
            goto LABEL_120;
        }
        else
        {
          *(_OWORD *)&v222[64] = *(_OWORD *)&v227[80];
          *(_OWORD *)&v222[48] = *(_OWORD *)&v227[64];
          *(_OWORD *)&v222[32] = *(_OWORD *)&v227[48];
          *(_OWORD *)&v222[16] = *(_OWORD *)&v227[32];
          *(_OWORD *)v222 = *(_OWORD *)&v227[16];
          if ( v204.m128i_i64[0] )
            sub_140001660(v230, v204.m128i_i64[0], 1);
          *(_QWORD *)v227 = v68;
          *(_QWORD *)&v227[8] = v69;
          *(_OWORD *)&v227[80] = *(_OWORD *)&v222[64];
          *(_OWORD *)&v227[64] = *(_OWORD *)&v222[48];
          *(_OWORD *)&v227[48] = *(_OWORD *)&v222[32];
          *(_OWORD *)&v227[32] = *(_OWORD *)&v222[16];
          *(_OWORD *)&v227[16] = *(_OWORD *)v222;
          sub_14149C500(&v199, v46 + 4);
          sub_14149C500(&v209, v46 + 7);
          *(_QWORD *)&v228 = v227;
          *((_QWORD *)&v228 + 1) = sub_140B036A0;
          sub_14149C0F0(&v175, &unk_141798231, &v228);
          v204 = v199;
          v205.m256i_i64[0] = v200;
          v205.m256i_i64[3] = v210.m256i_i64[0];
          *(__m128i *)&v205.m256i_u64[1] = v209;
          *(_QWORD *)&v207 = v176;
          v206 = v175;
          v70 = v232;
          if ( v232 == (_QWORD)v231 )
            sub_141689730(&v231);
          v71 = *((_QWORD *)&v231 + 1);
          v72 = 9 * v70;
          *(_QWORD *)(*((_QWORD *)&v231 + 1) + 8 * v72 + 64) = v207;
          v73 = _mm_load_si128(&v204);
          v74 = *(_OWORD *)v205.m256i_i8;
          v75 = *(_OWORD *)&v205.m256i_u64[2];
          *(__m128i *)(v71 + 8 * v72 + 48) = v206;
          *(_OWORD *)(v71 + 8 * v72 + 32) = v75;
          *(_OWORD *)(v71 + 8 * v72 + 16) = v74;
          *(__m128i *)(v71 + 8 * v72) = v73;
          v232 = v70 + 1;
          sub_1407DA310(v227);
          v76 = v191;
          if ( (_QWORD)v191 )
LABEL_120:
            sub_140001660(v226, v76, 1);
        }
      }
    }
  }
  if ( v202 )
  {
    rebuild_registry_with_policy(v227, v185, 1u, (__int64)v178);
    if ( *(_QWORD *)v227 != -1 )
    {
      *(_OWORD *)&v222[96] = *(_OWORD *)&v227[96];
      *(_OWORD *)&v222[80] = *(_OWORD *)&v227[80];
      *(_OWORD *)&v222[64] = *(_OWORD *)&v227[64];
      *(_OWORD *)&v222[48] = *(_OWORD *)&v227[48];
      *(_OWORD *)&v222[32] = *(_OWORD *)&v227[32];
      *(_OWORD *)&v222[16] = *(_OWORD *)&v227[16];
      *(_OWORD *)v222 = *(_OWORD *)v227;
      v110 = *(_DWORD *)&v227[96];
      v186 = *(_OWORD *)&v222[72];
      v187 = *(_QWORD *)&v227[88];
      if ( *(_QWORD *)v227 )
        sub_140001660(*(_QWORD *)&v222[8], *(_QWORD *)v227, 1);
      a1 = v214;
      if ( *(_QWORD *)&v222[24] )
        sub_140001660(*(_QWORD *)&v222[32], *(_QWORD *)&v222[24], 1);
      sub_140009EF0(&v222[48]);
      goto LABEL_171;
    }
    v213 = *(_OWORD *)&v227[88];
    v212 = *(_OWORD *)&v227[72];
    v114 = _mm_loadu_si128((const __m128i *)&v227[8]);
    v211 = *(__m128i *)&v227[56];
    v210 = *(__m256i *)&v227[24];
    v209 = v114;
    failure_after_snapshot_writes(
      (__int128 *)v204.m128i_i8,
      &v135,
      v216,
      v217,
      (__int64)aRebuildRegistr_0,
      23,
      (__int64)&v209);
    a1 = v214;
    *(_OWORD *)(v214 + 80) = v208;
    *(_OWORD *)(a1 + 64) = v207;
    v115 = _mm_loadu_si128(&v204);
    v116 = *(_OWORD *)v205.m256i_i8;
    v117 = *(_OWORD *)&v205.m256i_u64[2];
    *(__m128i *)(a1 + 48) = v206;
    *(_OWORD *)(a1 + 32) = v117;
    *(_OWORD *)(a1 + 16) = v116;
    *(__m128i *)a1 = v115;
LABEL_146:
    sub_140334BC0(&v215);
    if ( v215 )
      sub_140001660(v216, 104 * v215, 8);
    v118 = v232;
    if ( v232 )
    {
      v119 = (_QWORD *)(*((_QWORD *)&v231 + 1) + 56LL);
      do
      {
        v120 = *(v119 - 7);
        if ( v120 )
          sub_140001660(*(v119 - 6), v120, 1);
        v121 = *(v119 - 4);
        if ( v121 )
          sub_140001660(*(v119 - 3), v121, 1);
        v122 = *(v119 - 1);
        if ( v122 )
          sub_140001660(*v119, v122, 1);
        v119 += 9;
        --v118;
      }
      while ( v118 );
    }
    if ( (_QWORD)v231 )
      sub_140001660(*((_QWORD *)&v231 + 1), 72 * v231, 8);
    v244 = 1;
    sub_14067EB80(v178);
    v123 = v202;
    if ( v202 )
    {
      v124 = (_QWORD *)(v201.m128i_i64[1] + 8);
      do
      {
        v125 = *(v124 - 1);
        if ( v125 )
          sub_140001660(*v124, v125, 1);
        v124 += 3;
        --v123;
      }
      while ( v123 );
    }
    if ( v201.m128i_i64[0] )
      sub_140001660(v201.m128i_i64[1], 24 * v201.m128i_i64[0], 8);
    if ( v188.m128i_i64[0] )
    {
      v245 = 0;
      sub_14067FFB0(&v188);
    }
    v12 = 0;
    goto LABEL_169;
  }
  sub_140869250(v227, v146, v147);
  v111 = *(_QWORD *)v227;
  v110 = *(_DWORD *)&v227[8];
  *(_OWORD *)v222 = *(_OWORD *)&v227[12];
  *(_OWORD *)&v222[12] = *(_OWORD *)&v227[24];
  if ( *(_QWORD *)v227 != -1 )
  {
    a1 = v214;
    *(_QWORD *)(v214 + 88) = *(_QWORD *)&v227[88];
    v112 = *(_OWORD *)&v227[40];
    v113 = *(_OWORD *)&v227[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v227[72];
    *(_OWORD *)(a1 + 56) = v113;
    *(_OWORD *)(a1 + 40) = v112;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v222[12];
    *(__m128i *)(a1 + 12) = _mm_load_si128((const __m128i *)v222);
    *(_QWORD *)a1 = v111;
    *(_DWORD *)(a1 + 8) = v110;
    goto LABEL_146;
  }
  v186 = *(_OWORD *)&v222[4];
  v187 = *(_QWORD *)&v222[20];
  a1 = v214;
LABEL_171:
  v126 = v202;
  v127 = _mm_loadu_si128(&v201);
  *(__m128i *)v227 = v127;
  *(_QWORD *)&v227[16] = v202;
  *(_QWORD *)&v227[40] = v232;
  *(_OWORD *)&v227[24] = v231;
  *(_QWORD *)&v227[64] = v187;
  v128 = v186;
  *(_OWORD *)&v227[48] = v186;
  *(_QWORD *)(a1 + 72) = v187;
  *(_OWORD *)(a1 + 56) = v128;
  *(__m128i *)(a1 + 8) = v127;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v227[32];
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v227[16];
  *(_DWORD *)(a1 + 80) = v126;
  *(_DWORD *)(a1 + 84) = v110;
  *(_QWORD *)a1 = -1;
  sub_140334BC0(&v215);
  if ( v215 )
    sub_140001660(v216, 104 * v215, 8);
  v244 = 0;
  sub_14067EB80(v178);
  if ( v188.m128i_i64[0] )
  {
    v245 = 0;
    sub_14067FFB0(&v188);
  }
  sub_140016620(&v135);
  v239 = 0;
  v238 = 0;
  sub_1407D9AE0(v150);
  v22 = *(_QWORD *)&v182[104];
  if ( *(_QWORD *)&v182[104] )
  {
    v24 = v183;
    v23 = 1;
    goto LABEL_18;
  }
  return a1;
}
