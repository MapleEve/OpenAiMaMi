// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140cfec10 | successor of pre-update 0x1401cb610 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.789, "str_ov": 0.5, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140CFEC10(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // r15
  _QWORD *v6; // r13
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rsi
  __int64 v12; // rdi
  const __m128i *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rsi
  const __m128i *v17; // r15
  __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // rbx
  __m128i v22; // xmm0
  __int16 v24; // ax
  __m128i *v25; // r12
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v30; // rsi
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int64 v34; // rbx
  _QWORD *v35; // rbx
  __int64 v36; // rsi
  _QWORD *v37; // rdi
  __int64 v38; // rdx
  _QWORD *v40; // r14
  _QWORD *v41; // r15
  _QWORD *v42; // r13
  __int64 v43; // rsi
  __m128i v44; // xmm0
  __int64 v45; // rbx
  __int64 v46; // rax
  __m128i v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int64 v50; // rax
  __int64 v51; // rdx
  __m128i v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __m128i v55; // xmm0
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 *v60; // r13
  __int64 v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rcx
  __m128i *v64; // rax
  _QWORD *v65; // rcx
  _QWORD *v66; // r15
  __int64 v67; // rdx
  __int64 v68; // r8
  _QWORD *v69; // r14
  __int64 v70; // rsi
  unsigned __int64 v71; // r13
  __int64 v73; // rcx
  __int64 v74; // r8
  __m128i v75; // xmm0
  __m128i v76; // xmm7
  __int64 i; // rdx
  unsigned __int64 v78; // r13
  __m128i v79; // xmm8
  __int64 v81; // rsi
  unsigned __int64 v82; // r12
  __int64 v83; // r14
  int v84; // eax
  char v85; // al
  _QWORD *v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // r8
  __m128i *v89; // rsi
  _QWORD *v90; // rsi
  __int64 v91; // r14
  __int8 v92; // al
  __int64 v93; // rax
  __int128 v94; // xmm0
  __int64 v95; // rdx
  __m128i v96; // xmm0
  __int128 v97; // xmm1
  __int64 v98; // r14
  __int64 v99; // r15
  __int64 v100; // rsi
  __int64 v101; // r9
  __int64 v102; // rax
  __int64 v103; // rdx
  __m128i v104; // xmm0
  __int128 v105; // xmm1
  __int128 v106; // xmm2
  __int64 v107; // rax
  __m128i v108; // xmm0
  __int128 v109; // xmm1
  __int128 v110; // xmm2
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __m128i v114; // xmm0
  __m128i *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __m128i v118; // xmm0
  __int64 v119; // rdx
  __int64 v120; // rcx
  __m128i *v121; // rax
  __m128i *v122; // rax
  __m128i v123; // xmm0
  __int64 v124; // rax
  __m128i v125; // xmm0
  __int128 v126; // xmm1
  __int128 v127; // xmm2
  __m128i v128; // xmm0
  __int64 v129; // rax
  __m128i v130; // xmm0
  __int128 v131; // xmm1
  __int128 v132; // xmm2
  _OWORD v133[6]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v134[6]; // [rsp+90h] [rbp+10h] BYREF
  __m128i v135; // [rsp+F0h] [rbp+70h] BYREF
  __m256i v136; // [rsp+100h] [rbp+80h]
  __int128 v137; // [rsp+120h] [rbp+A0h]
  __int128 v138; // [rsp+130h] [rbp+B0h]
  __int128 v139; // [rsp+140h] [rbp+C0h]
  __m128i v140[6]; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v141; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v142; // [rsp+1C0h] [rbp+140h]
  __m128i v143; // [rsp+210h] [rbp+190h] BYREF
  __int64 v144; // [rsp+220h] [rbp+1A0h]
  _BYTE v145[48]; // [rsp+228h] [rbp+1A8h] BYREF
  __m128i v146; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v147; // [rsp+268h] [rbp+1E8h]
  __m128i v148; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v149; // [rsp+280h] [rbp+200h]
  _BYTE v150[48]; // [rsp+288h] [rbp+208h] BYREF
  __m128i v151; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v152; // [rsp+2C8h] [rbp+248h]
  __m128i v153; // [rsp+2D0h] [rbp+250h] BYREF
  __m256i v154; // [rsp+2E0h] [rbp+260h]
  __int64 v155; // [rsp+300h] [rbp+280h]
  __m128i v156; // [rsp+310h] [rbp+290h] BYREF
  __m256i v157; // [rsp+320h] [rbp+2A0h]
  __int128 v158; // [rsp+340h] [rbp+2C0h]
  __int128 v159; // [rsp+350h] [rbp+2D0h]
  __int64 v160; // [rsp+360h] [rbp+2E0h]
  __m128i v161; // [rsp+370h] [rbp+2F0h] BYREF
  __m256i v162; // [rsp+380h] [rbp+300h]
  __int128 v163; // [rsp+3A0h] [rbp+320h]
  _BYTE v164[16]; // [rsp+3B0h] [rbp+330h] BYREF
  __int64 v165; // [rsp+3C0h] [rbp+340h]
  __int64 v166; // [rsp+3C8h] [rbp+348h]
  char v167[8]; // [rsp+3D8h] [rbp+358h] BYREF
  _QWORD *v168; // [rsp+3E0h] [rbp+360h]
  __int64 v169; // [rsp+3E8h] [rbp+368h]
  __int64 v170; // [rsp+3F0h] [rbp+370h]
  __int64 v171; // [rsp+3F8h] [rbp+378h]
  __m128i si128; // [rsp+400h] [rbp+380h] BYREF
  __int128 v173; // [rsp+410h] [rbp+390h]
  __int128 v174; // [rsp+420h] [rbp+3A0h] BYREF
  __m128i v175; // [rsp+430h] [rbp+3B0h] BYREF
  __m256i v176; // [rsp+440h] [rbp+3C0h] BYREF
  __int128 v177; // [rsp+460h] [rbp+3E0h]
  __int128 v178; // [rsp+470h] [rbp+3F0h]
  __int64 v179; // [rsp+480h] [rbp+400h]
  __m128i v180; // [rsp+490h] [rbp+410h] BYREF
  __int64 v181; // [rsp+4A0h] [rbp+420h]
  __int64 v182; // [rsp+4A8h] [rbp+428h] BYREF
  __int64 v183; // [rsp+4B0h] [rbp+430h]
  char v184; // [rsp+4C0h] [rbp+440h]
  char v185; // [rsp+4C1h] [rbp+441h]
  __int64 v186; // [rsp+4C8h] [rbp+448h]
  __m128i v187; // [rsp+4D0h] [rbp+450h] BYREF
  __int64 v188; // [rsp+4E0h] [rbp+460h]
  __m128i v189; // [rsp+4F0h] [rbp+470h] BYREF
  __m256i v190; // [rsp+500h] [rbp+480h]
  __int128 v191; // [rsp+520h] [rbp+4A0h]
  __int128 v192; // [rsp+530h] [rbp+4B0h]
  __int128 v193; // [rsp+540h] [rbp+4C0h]
  __int64 v194; // [rsp+558h] [rbp+4D8h] BYREF
  __int64 v195; // [rsp+560h] [rbp+4E0h]
  __int64 v196; // [rsp+568h] [rbp+4E8h]
  _QWORD *v197; // [rsp+570h] [rbp+4F0h]
  _QWORD *v198; // [rsp+578h] [rbp+4F8h]
  __int64 v199; // [rsp+580h] [rbp+500h]
  _QWORD *v200; // [rsp+588h] [rbp+508h]
  __int64 v201; // [rsp+590h] [rbp+510h]
  _QWORD *v202; // [rsp+598h] [rbp+518h]
  _BYTE v203[96]; // [rsp+5A0h] [rbp+520h] BYREF
  __m128i v204; // [rsp+630h] [rbp+5B0h] BYREF
  __m256i v205; // [rsp+640h] [rbp+5C0h]
  __int128 v206; // [rsp+660h] [rbp+5E0h]
  __int128 v207; // [rsp+670h] [rbp+5F0h]
  __int128 v208; // [rsp+680h] [rbp+600h]
  __int64 v209; // [rsp+690h] [rbp+610h]
  const __m128i *v210; // [rsp+698h] [rbp+618h]
  __int64 v211; // [rsp+6A0h] [rbp+620h]
  char v212; // [rsp+6ACh] [rbp+62Ch]
  char v213; // [rsp+6ADh] [rbp+62Dh]
  char v214; // [rsp+6AEh] [rbp+62Eh]
  char v215; // [rsp+6AFh] [rbp+62Fh]
  __int64 v216; // [rsp+6B0h] [rbp+630h]
  char v217; // [rsp+6BEh] [rbp+63Eh]
  char v218; // [rsp+6BFh] [rbp+63Fh]
  char v219; // [rsp+6C0h] [rbp+640h]
  char v220; // [rsp+6C1h] [rbp+641h]
  char v221; // [rsp+6C2h] [rbp+642h]
  char v222; // [rsp+6C3h] [rbp+643h]
  char v223; // [rsp+6C4h] [rbp+644h]
  char v224; // [rsp+6C5h] [rbp+645h]
  char v225; // [rsp+6C6h] [rbp+646h]
  char v226; // [rsp+6C7h] [rbp+647h]
  __int64 v227; // [rsp+6C8h] [rbp+648h]

  v227 = -2;
  v201 = a3;
  v5 = (_QWORD *)a2[37];
  v6 = (_QWORD *)a2[38];
  sub_140CFB3B0(v203, v5, v6);
  v7 = *(_QWORD *)v203;
  v204 = *(__m128i *)&v203[8];
  v205 = *(__m256i *)&v203[24];
  v206 = *(_OWORD *)&v203[56];
  v207 = *(_OWORD *)&v203[72];
  *(_QWORD *)&v208 = *(_QWORD *)&v203[88];
  if ( *(_QWORD *)v203 != -1 )
  {
    *(_QWORD *)(a1 + 96) = v208;
    *(_OWORD *)(a1 + 80) = v207;
    v8 = _mm_load_si128(&v204);
    v9 = *(_OWORD *)v205.m256i_i8;
    v10 = *(_OWORD *)&v205.m256i_u64[2];
    *(_OWORD *)(a1 + 64) = v206;
    *(_OWORD *)(a1 + 48) = v10;
    *(_OWORD *)(a1 + 32) = v9;
    *(__m128i *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = -1;
LABEL_25:
    v35 = (_QWORD *)v201;
    v36 = *(_QWORD *)(v201 + 16);
    if ( v36 )
    {
      v37 = (_QWORD *)(*(_QWORD *)(v201 + 8) + 8LL);
      do
      {
        v38 = *(v37 - 1);
        if ( v38 )
          sub_140001660(*v37, v38, 1);
        v37 += 3;
        --v36;
      }
      while ( v36 );
    }
    if ( *v35 )
      sub_140001660(v35[1], 24LL * *v35, 8);
    return a1;
  }
  v160 = v208;
  v159 = v207;
  v158 = v206;
  v157 = v205;
  v156 = _mm_load_si128(&v204);
  v11 = v156.m128i_i64[1];
  v12 = v205.m256i_i64[0];
  v13 = (const __m128i *)sub_1404D9AA0(0);
  v211 = a1;
  if ( !v13 )
    sub_14196A580(&off_141A6E388);
  v14 = _mm_loadu_si128(v13);
  ++v13->m128i_i64[0];
  *(_OWORD *)&v203[16] = xmmword_141A1CBA0;
  *(_OWORD *)v203 = *(_OWORD *)&off_141A1CB90;
  *(__m128i *)&v203[32] = v14;
  v209 = v11;
  v204.m128i_i64[0] = v11;
  v204.m128i_i64[1] = v11 + 424 * v12;
  v205.m256i_i64[0] = v201;
  sub_1408604C0(v203, &v204);
  v173 = *(_OWORD *)&v203[16];
  si128 = _mm_load_si128((const __m128i *)v203);
  v174 = *(_OWORD *)&v203[32];
  if ( !*(_QWORD *)&v203[24] )
  {
    sub_1406C5480((unsigned int)v203, *(_QWORD *)(v201 + 8), *(_QWORD *)(v201 + 16), (unsigned int)&unk_141A94949, 2);
    v205.m256i_i64[0] = *(_QWORD *)&v203[16];
    v204 = _mm_loadu_si128((const __m128i *)v203);
    *(_QWORD *)v203 = &v204;
    *(_QWORD *)&v203[8] = sub_1400015F0;
    sub_1416DAFA0(&v151, &unk_141A9494B, v203);
    a1 = v211;
    v30 = v209;
    if ( v204.m128i_i64[0] )
      sub_140001660(v204.m128i_i64[1], v204.m128i_i64[0], 1);
    *(_QWORD *)(a1 + 32) = v152;
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v151);
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)a1 = -1;
    goto LABEL_17;
  }
  v197 = v6;
  v200 = v5;
  v15 = si128.m128i_i64[0];
  _RAX = si128.m128i_i64[0] + si128.m128i_i64[1] + 1;
  v195 = _RAX;
  v17 = (const __m128i *)(si128.m128i_i64[0] + 16);
  _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)si128.m128i_i64[0]));
  v19 = a2[41];
  v202 = a2;
  v20 = a2[42];
  v216 = *(_QWORD *)&v203[24];
  v196 = si128.m128i_i64[0] + 16;
  v210 = (const __m128i *)si128.m128i_i64[0];
  v21 = *(_QWORD *)&v203[24] - 1LL;
  do
  {
    if ( !(_WORD)_R13D )
    {
      do
      {
        v22 = _mm_load_si128(v17);
        v15 -= 896;
        ++v17;
        _R13D = _mm_movemask_epi8(v22) ^ 0xFFFF;
      }
      while ( !_R13D );
    }
    __asm { tzcnt   eax, r13d }
    sub_14071E1C0((unsigned int)v203, *(_QWORD *)(v15 - 56 * _RAX - 24), *(_QWORD *)(v15 - 56 * _RAX - 16), v19, v20);
    if ( *(_DWORD *)v203 != -1 )
    {
      a1 = v211;
      *(_OWORD *)(v211 + 88) = *(_OWORD *)&v203[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v203[64];
      v31 = *(_OWORD *)v203;
      v32 = *(_OWORD *)&v203[16];
      v33 = *(_OWORD *)&v203[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v203[48];
      *(_OWORD *)(a1 + 40) = v33;
      *(_OWORD *)(a1 + 24) = v32;
      *(_OWORD *)(a1 + 8) = v31;
LABEL_16:
      *(_QWORD *)a1 = -1;
      v30 = v209;
      goto LABEL_17;
    }
    _RAX = _R13D & (unsigned int)(_R13D - 1);
    _R13D &= _R13D - 1;
  }
  while ( v21-- != 0 );
  v24 = _mm_movemask_epi8(_mm_load_si128(v210));
  v204.m128i_i64[0] = (__int64)v210;
  v204.m128i_i64[1] = v196;
  v205.m256i_i64[0] = v195;
  v205.m256i_i16[4] = ~v24;
  v205.m256i_i64[2] = v216;
  v25 = &v204;
  sub_140C69F40(v203, &v204);
  v26 = *(_QWORD *)v203;
  v189 = *(__m128i *)&v203[8];
  v190.m256i_i64[0] = *(_QWORD *)&v203[24];
  if ( *(_QWORD *)v203 != -1 )
  {
    v27 = *(_OWORD *)&v203[32];
    v28 = *(_OWORD *)&v203[48];
    v29 = *(_OWORD *)&v203[64];
    a1 = v211;
    *(_OWORD *)(v211 + 88) = *(_OWORD *)&v203[80];
    *(_OWORD *)(a1 + 72) = v29;
    *(_OWORD *)(a1 + 56) = v28;
    *(_OWORD *)(a1 + 40) = v27;
    *(_QWORD *)(a1 + 32) = v190.m256i_i64[0];
    *(__m128i *)(a1 + 16) = _mm_load_si128(&v189);
    *(_QWORD *)(a1 + 8) = v26;
    goto LABEL_16;
  }
  v187 = _mm_load_si128(&v189);
  v188 = v190.m256i_i64[0];
  v40 = v202;
  sub_1416B18A0((unsigned int)&v189, v202[33], v202[34], (unsigned int)aAccountDomainL, 20);
  v216 = v189.m128i_i64[1];
  sub_140C97180((unsigned int)v203, v189.m128i_i32[2], v190.m256i_i32[0], (unsigned int)&aAccountDomainL[20], 13);
  v41 = v200;
  v42 = v197;
  v43 = *(_QWORD *)v203;
  if ( *(_QWORD *)v203 != -1 )
  {
    v207 = *(_OWORD *)&v203[80];
    v44 = _mm_loadu_si128((const __m128i *)&v203[16]);
    v206 = *(_OWORD *)&v203[64];
    v205 = *(__m256i *)&v203[32];
    v204 = v44;
  }
  v45 = *(_QWORD *)&v203[8];
  if ( v189.m128i_i64[0] )
    sub_140001660(v216, v189.m128i_i64[0], 1);
  if ( (_DWORD)v43 != -1 )
  {
    v46 = v211;
    *(_OWORD *)(v211 + 88) = v207;
    v47 = _mm_load_si128(&v204);
    v48 = *(_OWORD *)v205.m256i_i8;
    v49 = *(_OWORD *)&v205.m256i_u64[2];
    *(_OWORD *)(v46 + 72) = v206;
    *(_OWORD *)(v46 + 56) = v49;
    *(_OWORD *)(v46 + 40) = v48;
    *(__m128i *)(v46 + 24) = v47;
    *(_QWORD *)(v46 + 8) = v43;
    *(_QWORD *)(v46 + 16) = v45;
    *(_QWORD *)v46 = -1;
LABEL_74:
    sub_1402350E0(&v187);
    v30 = v209;
    a1 = v211;
    if ( v187.m128i_i64[0] )
      sub_140001660(v187.m128i_i64[1], 8 * v187.m128i_i64[0], 8);
LABEL_17:
    sub_14018F700(&si128);
    if ( v157.m256i_i64[1] != -1 && v157.m256i_i64[1] )
      sub_140001660(v157.m256i_i64[2], v157.m256i_i64[1], 1);
    if ( v12 )
    {
      v34 = v30;
      do
      {
        sub_1401AE3E0(v34);
        v34 += 424;
        --v12;
      }
      while ( v12 );
    }
    if ( v156.m128i_i64[0] )
      sub_140001660(v30, 424 * v156.m128i_i64[0], 8);
    goto LABEL_25;
  }
  v194 = v45;
  sub_140CFB3B0(v203, v41, v42);
  v50 = *(_QWORD *)v203;
  v204 = *(__m128i *)&v203[8];
  v205 = *(__m256i *)&v203[24];
  v206 = *(_OWORD *)&v203[56];
  v207 = *(_OWORD *)&v203[72];
  *(_QWORD *)&v208 = *(_QWORD *)&v203[88];
  if ( *(_QWORD *)v203 != -1 )
  {
    v51 = v211;
    *(_QWORD *)(v211 + 96) = v208;
    *(_OWORD *)(v51 + 80) = v207;
    v52 = _mm_load_si128(&v204);
    v53 = *(_OWORD *)v205.m256i_i8;
    v54 = *(_OWORD *)&v205.m256i_u64[2];
    *(_OWORD *)(v51 + 64) = v206;
    *(_OWORD *)(v51 + 48) = v54;
    *(_OWORD *)(v51 + 32) = v53;
    *(__m128i *)(v51 + 16) = v52;
    *(_QWORD *)(v51 + 8) = v50;
    *(_QWORD *)v51 = -1;
LABEL_73:
    sub_1401AF000(&v194);
    goto LABEL_74;
  }
  v179 = v208;
  v178 = v207;
  v55 = _mm_load_si128(&v204);
  v177 = v206;
  v176 = v205;
  v175 = v55;
  v219 = 1;
  sub_140D20050(&v180, v40, v55.m128i_i64[1], v205.m256i_i64[0]);
  v56 = *(_QWORD *)(v201 + 8);
  v57 = v56 + 24LL * *(_QWORD *)(v201 + 16);
  v222 = 1;
  sub_140CEB810(v150, v56, v57);
  v58 = v202[5];
  v59 = v202[6];
  v215 = 1;
  v60 = &v182;
  sub_140D05480(&v182, v58, v59);
  v61 = v182;
  if ( v182 == -1 )
  {
    if ( v184 || v185 || v176.m256i_i64[1] == -1 )
      goto LABEL_49;
    v60 = &v176.m256i_i64[1];
  }
  v199 = v182;
  v221 = 1;
  if ( (unsigned __int8)sub_1408457C0(v150, v60) )
  {
    nullsub_1(v63, v62);
    v64 = (__m128i *)sub_140001650(52, 1);
    if ( !v64 )
    {
      v199 = v61;
      v221 = 1;
      sub_14196B2DB(1, 52);
    }
    qmemcpy(&v64[1], "e currently active account snapshot.", 36);
    *v64 = _mm_loadu_si128((const __m128i *)&xmmword_141A94AAE);
    v65 = (_QWORD *)v211;
    *(_QWORD *)(v211 + 8) = 10;
    v65[2] = 52;
    v65[3] = v64;
    v65[4] = 52;
    *v65 = -1;
LABEL_70:
    if ( v61 > 0 )
      sub_140001660(v183, v61, 1);
    v222 = 1;
    sub_140190060(v150);
    sub_140029260(&v180);
    sub_140037470(&v175);
    goto LABEL_73;
  }
LABEL_49:
  *(_QWORD *)v203 = v175.m128i_i64[1];
  *(_QWORD *)&v203[8] = v175.m128i_i64[1] + 424 * v176.m256i_i64[0];
  *(_QWORD *)&v203[16] = v150;
  v199 = v61;
  v221 = 1;
  sub_1402111A0(v167, v203);
  if ( !v169 )
  {
    v87 = *(_QWORD *)(v201 + 8);
    v88 = *(_QWORD *)(v201 + 16);
    v225 = 1;
    sub_1406C5480((unsigned int)v203, v87, v88, (unsigned int)&unk_141A94949, 2);
    v205.m256i_i64[0] = *(_QWORD *)&v203[16];
    v204 = _mm_loadu_si128((const __m128i *)v203);
    *(_QWORD *)v203 = &v204;
    *(_QWORD *)&v203[8] = sub_1400015F0;
    sub_1416DAFA0(&v148, &unk_141A9494B, v203);
    v89 = (__m128i *)v211;
    if ( v204.m128i_i64[0] )
      sub_140001660(v204.m128i_i64[1], v204.m128i_i64[0], 1);
    v89[2].m128i_i64[0] = v149;
    v89[1] = _mm_loadu_si128(&v148);
    v89->m128i_i64[1] = 8;
    v89->m128i_i64[0] = -1;
LABEL_69:
    sub_140CB3EE0(v167);
    v61 = v182;
    goto LABEL_70;
  }
  v66 = v168;
  v186 = v169;
  v200 = &v168[53 * v169];
  v198 = v168;
  while ( v66 != v200 )
  {
    v67 = v66[28];
    v68 = v66[29];
    v225 = 1;
    sub_1416DA980(v203, v67, v68);
    v216 = *(_QWORD *)&v203[8];
    v210 = *(const __m128i **)v203;
    v69 = v66 + 24;
    v25 = (__m128i *)v211;
    if ( !*((_QWORD *)&v173 + 1) )
      goto LABEL_64;
    v70 = *(_QWORD *)&v203[16];
    v71 = sub_1406CECD0(&v174, v66 + 24);
    v195 = v70;
    v196 = (__int64)(v66 + 53);
    _RAX = v71 >> 57;
    v73 = si128.m128i_i64[1];
    v74 = si128.m128i_i64[0];
    v75 = _mm_cvtsi32_si128(v71 >> 57);
    v76 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v75, v75), 0), 68);
    for ( i = 0; ; i += 16 )
    {
      v78 = v73 & v71;
      v79 = _mm_loadu_si128((const __m128i *)(v74 + v78));
      _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v79, v76));
      if ( _EBX )
        break;
LABEL_59:
      _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v79, (__m128i)-1LL));
      if ( (_DWORD)_RAX )
        goto LABEL_64;
      v71 = i + v78 + 16;
    }
    v81 = v66[26];
    v170 = v73;
    v171 = i;
    v197 = v69;
    while ( 1 )
    {
      __asm { tzcnt   eax, ebx }
      if ( v81 == *(_QWORD *)(v74 - 56 * (v73 & (v78 + _RAX)) - 40) )
      {
        v82 = v74 - 56 * (v73 & (v78 + _RAX));
        v83 = v74;
        v84 = sub_141923B40(v66[25], *(_QWORD *)(v82 - 48), v81);
        v74 = v83;
        if ( !v84 )
          break;
      }
      _RAX = (unsigned int)(_EBX - 1);
      LOWORD(_RAX) = _EBX & (_EBX - 1);
      _EBX = _RAX;
      v25 = (__m128i *)v211;
      v73 = v170;
      i = v171;
      v69 = v66 + 24;
      if ( !(_WORD)_RAX )
        goto LABEL_59;
    }
    v85 = sub_140222930(*(_QWORD *)(v82 - 24), *(_QWORD *)(v82 - 16), v216, v195);
    v25 = (__m128i *)v211;
    v69 = v197;
    if ( !v85 )
    {
LABEL_64:
      *(_QWORD *)v203 = v69;
      *(_QWORD *)&v203[8] = sub_1400015F0;
      sub_1416DAFA0(&v146, &unk_141A9496A, v203);
      v25[2].m128i_i64[0] = v147;
      v25[1] = _mm_loadu_si128(&v146);
      v25->m128i_i64[1] = 10;
      v25->m128i_i64[0] = -1;
      if ( v210 )
        sub_140001660(v216, v210, 1);
      goto LABEL_69;
    }
    v86 = (_QWORD *)v196;
    v66 = (_QWORD *)v196;
    if ( v210 )
    {
      sub_140001660(v216, v210, 1);
      v66 = v86;
    }
  }
  v225 = 1;
  sub_140CEB980(v145, v198, v200);
  v223 = 1;
  sub_14019C620(&v175, v145);
  v90 = v202;
  v91 = v176.m256i_i64[1];
  if ( v176.m256i_i64[1] != -1 )
  {
    v223 = 1;
    if ( (unsigned __int8)sub_1408457C0(v150, &v176.m256i_u64[1]) )
    {
      if ( v91 )
        sub_140001660(v176.m256i_i64[2], v91, 1);
      v176.m256i_i64[1] = -1;
      v90 = v202;
    }
  }
  v223 = 1;
  sub_14022C3D0(&v141, v90 + 68);
  v92 = *((_BYTE *)v90 + 568);
  v190.m256i_i64[0] = v142;
  v189 = _mm_loadu_si128(&v141);
  v190.m256i_i8[8] = v92;
  v223 = 1;
  sub_140CF3620(v203, &v189);
  v93 = *(_QWORD *)v203;
  v204 = *(__m128i *)&v203[8];
  v205 = *(__m256i *)&v203[24];
  *(_QWORD *)&v206 = *(_QWORD *)&v203[56];
  if ( *(_QWORD *)v203 != -1 )
  {
    v94 = *(_OWORD *)&v203[64];
    v95 = v211;
    *(_OWORD *)(v211 + 88) = *(_OWORD *)&v203[80];
    *(_OWORD *)(v95 + 72) = v94;
    *(_QWORD *)(v95 + 64) = v206;
    v96 = _mm_load_si128(&v204);
    v97 = *(_OWORD *)v205.m256i_i8;
    *(_OWORD *)(v95 + 48) = *(_OWORD *)&v205.m256i_u64[2];
    *(_OWORD *)(v95 + 32) = v97;
    *(__m128i *)(v95 + 16) = v96;
    *(_QWORD *)(v95 + 8) = v93;
    *(_QWORD *)v95 = -1;
LABEL_117:
    sub_140190690(v145);
    goto LABEL_69;
  }
  v153 = _mm_load_si128(&v204);
  v154 = v205;
  v155 = v206;
  v98 = v90[69];
  v99 = v90[70];
  v214 = 1;
  sub_140D36B30(v164, v98, v99);
  v100 = v165;
  v224 = 1;
  sub_14019CC40(v164, v145);
  v224 = 1;
  *((_QWORD *)&v178 + 1) = sub_140719230();
  v224 = 1;
  sub_140CF3B10(v203, v202, v198, v186);
  v102 = *(_QWORD *)v203;
  v204 = *(__m128i *)&v203[8];
  v205 = *(__m256i *)&v203[24];
  v206 = *(_OWORD *)&v203[56];
  if ( *(_QWORD *)v203 != -1 )
  {
    v103 = v211;
    *(_QWORD *)(v211 + 96) = *(_QWORD *)&v203[88];
    *(_OWORD *)(v103 + 80) = *(_OWORD *)&v203[72];
    v104 = _mm_load_si128(&v204);
    v105 = *(_OWORD *)v205.m256i_i8;
    v106 = *(_OWORD *)&v205.m256i_u64[2];
    *(_OWORD *)(v103 + 64) = v206;
    *(_OWORD *)(v103 + 48) = v106;
    *(_OWORD *)(v103 + 32) = v105;
    *(__m128i *)(v103 + 16) = v104;
    *(_QWORD *)(v103 + 8) = v102;
    *(_QWORD *)v103 = -1;
LABEL_116:
    sub_1400376C0(v164);
    sub_1401921C0(&v153);
    goto LABEL_117;
  }
  v161 = _mm_load_si128(&v204);
  v162 = v205;
  v163 = v206;
  if ( v165 == v100 )
  {
    v216 = -1;
  }
  else
  {
    v220 = 1;
    v166 = sub_140719230();
    v220 = 1;
    sub_140D36790(v203, v164);
    v216 = *(_QWORD *)&v203[8];
    v107 = *(_QWORD *)v203;
    v25 = *(__m128i **)&v203[24];
    v210 = *(const __m128i **)&v203[16];
    if ( *(_QWORD *)v203 != -1 )
    {
      v108 = _mm_loadu_si128((const __m128i *)&v203[32]);
      v109 = *(_OWORD *)&v203[48];
      v110 = *(_OWORD *)&v203[64];
      v111 = v211;
      *(_OWORD *)(v211 + 88) = *(_OWORD *)&v203[80];
      *(_OWORD *)(v111 + 72) = v110;
      *(_OWORD *)(v111 + 56) = v109;
      *(__m128i *)(v111 + 40) = v108;
      *(_QWORD *)(v111 + 16) = v216;
      *(_QWORD *)(v111 + 24) = v210;
      *(_QWORD *)(v111 + 32) = v25;
      *(_QWORD *)(v111 + 8) = v107;
      *(_QWORD *)v111 = -1;
LABEL_115:
      v224 = 1;
      sub_140CB8330(&v161);
      goto LABEL_116;
    }
    sub_140D037E0(v140, v98, v99, v164);
    if ( v140[0].m128i_i32[0] != -1 )
    {
      v213 = 1;
      sub_140CF4860(v203, &v161);
      if ( *(_DWORD *)v203 == -1 )
      {
        *(_QWORD *)&v134[0] = -1;
      }
      else
      {
        v134[5] = *(_OWORD *)&v203[80];
        v134[4] = *(_OWORD *)&v203[64];
        v134[3] = *(_OWORD *)&v203[48];
        v134[2] = *(_OWORD *)&v203[32];
        v134[1] = *(_OWORD *)&v203[16];
        v134[0] = _mm_loadu_si128((const __m128i *)v203);
      }
      *(__m128i *)&v203[80] = v140[5];
      *(__m128i *)&v203[64] = v140[4];
      v128 = _mm_loadu_si128(v140);
      *(__m128i *)&v203[48] = v140[3];
      *(__m128i *)&v203[32] = v140[2];
      *(__m128i *)&v203[16] = v140[1];
      *(__m128i *)v203 = v128;
      v213 = 0;
      sub_140D318B0(&v204, v203, v134);
      v129 = v211;
      *(_OWORD *)(v211 + 88) = v208;
      *(_OWORD *)(v129 + 72) = v207;
      v130 = _mm_loadu_si128(&v204);
      v131 = *(_OWORD *)v205.m256i_i8;
      v132 = *(_OWORD *)&v205.m256i_u64[2];
      *(_OWORD *)(v129 + 56) = v206;
      *(_OWORD *)(v129 + 40) = v132;
      *(_OWORD *)(v129 + 24) = v131;
      *(__m128i *)(v129 + 8) = v130;
      *(_QWORD *)v129 = -1;
      if ( !v216 )
        goto LABEL_115;
LABEL_114:
      sub_140001660(v210, v216, 1);
      goto LABEL_115;
    }
  }
  v226 = 1;
  LOBYTE(v101) = 1;
  sub_140D02DF0(&v135, v202, &v175, v101);
  if ( v135.m128i_i32[0] != -1 )
  {
    if ( v216 == -1 )
    {
      v141.m128i_i64[0] = -1;
    }
    else
    {
      v218 = 1;
      sub_140CEDFD0(&v141, &v153, v210, v25);
    }
    v217 = 1;
    sub_140CF4860(v203, &v161);
    if ( *(_DWORD *)v203 == -1 )
    {
      *(_QWORD *)&v133[0] = -1;
    }
    else
    {
      v133[5] = *(_OWORD *)&v203[80];
      v133[4] = *(_OWORD *)&v203[64];
      v133[3] = *(_OWORD *)&v203[48];
      v133[2] = *(_OWORD *)&v203[32];
      v133[1] = *(_OWORD *)&v203[16];
      v133[0] = _mm_loadu_si128((const __m128i *)v203);
    }
    v208 = v139;
    v207 = v138;
    v123 = _mm_loadu_si128(&v135);
    v206 = v137;
    v205 = v136;
    v204 = v123;
    v212 = 1;
    sub_140D2C310(v203, &v141, v133);
    v212 = 0;
    sub_140D318B0(&v189, &v204, v203);
    v124 = v211;
    *(_OWORD *)(v211 + 88) = v193;
    *(_OWORD *)(v124 + 72) = v192;
    v125 = _mm_loadu_si128(&v189);
    v126 = *(_OWORD *)v190.m256i_i8;
    v127 = *(_OWORD *)&v190.m256i_u64[2];
    *(_OWORD *)(v124 + 56) = v191;
    *(_OWORD *)(v124 + 40) = v127;
    *(_OWORD *)(v124 + 24) = v126;
    *(__m128i *)(v124 + 8) = v125;
    *(_QWORD *)v124 = -1;
    if ( (unsigned __int64)(v216 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_115;
    goto LABEL_114;
  }
  v226 = 1;
  sub_140D1F830(&v204, v202);
  if ( v204.m128i_i32[0] != -1 )
  {
    *(_OWORD *)&v203[80] = v208;
    *(_OWORD *)&v203[64] = v207;
    v114 = _mm_loadu_si128(&v204);
    *(_OWORD *)&v203[48] = v206;
    *(__m256i *)&v203[16] = v205;
    *(__m128i *)v203 = v114;
    nullsub_1(v113, v112);
    v209 = sub_140001650(36, 1);
    if ( !v209 )
      sub_14196B2DB(1, 36);
    v115 = (__m128i *)v209;
    *(_OWORD *)(v209 + 16) = xmmword_141A94814;
    *v115 = _mm_loadu_si128((const __m128i *)&xmmword_141A94804);
    v115[2].m128i_i32[0] = 1145392201;
    v189.m128i_i64[0] = (__int64)v203;
    v189.m128i_i64[1] = (__int64)sub_140D76130;
    sub_1416DAFA0(&v143, &unk_141A9499E, &v189);
    v189.m128i_i64[0] = 36;
    v189.m128i_i64[1] = v209;
    v190.m256i_i64[0] = 36;
    *(__m128i *)&v190.m256i_u64[1] = _mm_loadu_si128(&v143);
    v190.m256i_i64[3] = v144;
    sub_14017A7B0(&v180, &v189);
    v226 = 1;
    sub_140CB96B0(v203);
  }
  v226 = 1;
  sub_140CF39A0(&v204, &v161);
  if ( v204.m128i_i32[0] != -1 )
  {
    *(_OWORD *)&v203[80] = v208;
    *(_OWORD *)&v203[64] = v207;
    v118 = _mm_loadu_si128(&v204);
    *(_OWORD *)&v203[48] = v206;
    *(__m256i *)&v203[16] = v205;
    *(__m128i *)v203 = v118;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v141.m128i_i64[0] = (__int64)v203;
      v141.m128i_i64[1] = (__int64)sub_140D76130;
      v189.m128i_i64[0] = (__int64)aCodexmateLibCo_44;
      v189.m128i_i64[1] = 31;
      v190.m256i_i64[0] = (__int64)aCodexmateLibCo_44;
      v190.m256i_i64[1] = 31;
      v190.m256i_i64[2] = (__int64)&off_141A94A30;
      sub_140AF72B0(&unk_141A949EA, &v141, 2, &v189);
    }
    nullsub_1(v117, v116);
    v209 = sub_140001650(32, 1);
    if ( !v209 )
      sub_14196B2DB(1, 32);
    v121 = (__m128i *)v209;
    *(_OWORD *)(v209 + 16) = xmmword_141A94A58;
    *v121 = _mm_loadu_si128((const __m128i *)&xmmword_141A94A48);
    nullsub_1(v120, v119);
    v122 = (__m128i *)sub_140001650(70, 1);
    if ( !v122 )
      sub_14196B2DB(1, 70);
    qmemcpy(&v122[1], "completed; private cleanup will retry on next startup.", 54);
    *v122 = _mm_loadu_si128((const __m128i *)&xmmword_141A94A68);
    v189.m128i_i64[0] = 32;
    v189.m128i_i64[1] = v209;
    v190.m256i_i64[0] = 32;
    v190.m256i_i64[1] = 70;
    v190.m256i_i64[2] = (__int64)v122;
    v190.m256i_i64[3] = 70;
    sub_14017A7B0(&v180, &v189);
    v226 = 1;
    sub_140CB96B0(v203);
  }
  v226 = 1;
  sub_1402269E0(v203, v198, v200);
  v205.m256i_i64[3] = v176.m256i_i64[3];
  *(_OWORD *)&v205.m256i_u64[1] = *(_OWORD *)&v176.m256i_u64[1];
  v204 = *(__m128i *)v203;
  v205.m256i_i64[0] = *(_QWORD *)&v203[16];
  LODWORD(v206) = v186;
  v190.m256i_i64[0] = v181;
  v189 = _mm_loadu_si128(&v180);
  v226 = 0;
  sub_140CF5450(v203, &v204, &v189);
  sub_1419234B0(v211, v203, 136);
  if ( (unsigned __int64)(v216 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v210, v216, 1);
  v224 = 0;
  sub_140CB8330(&v161);
  sub_1400376C0(v164);
  sub_1401921C0(&v153);
  sub_140190690(v145);
  sub_140CB3EE0(v167);
  if ( v182 > 0 )
    sub_140001660(v183, v182, 1);
  v222 = 0;
  sub_140190060(v150);
  sub_140CB3EE0(&v175);
  sub_1401AF000(&v194);
  sub_140902BA0(&v187);
  sub_14018F700(&si128);
  a1 = v211;
  sub_140037470(&v156);
  sub_1400290B0(v201);
  return a1;
}
