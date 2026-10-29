// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d3d090 | name sub_140D3D090
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D3D090(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r12
  __m128i v10; // xmm1
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int32 v14; // eax
  bool v15; // of
  signed __int32 v16; // eax
  int v17; // ett
  __int64 v18; // rt0
  __int64 v19; // r14
  unsigned __int32 v20; // eax
  bool v21; // of
  signed __int32 v22; // eax
  int v23; // ett
  __int64 v24; // rt0
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdi
  char result; // al
  __int64 v33; // rbx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  int v37; // r14d
  __int64 v38; // r13
  unsigned __int64 v39; // r12
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdi
  int v45; // edx
  __int64 v46; // r14
  __int64 (__fastcall **v47)(); // r12
  _OWORD *v48; // r13
  volatile signed __int64 *v49; // rbx
  __int64 v50; // r15
  __int16 v51; // r15
  const __m128i *v52; // rdi
  __m128i *v53; // rax
  unsigned int v54; // eax
  int v55; // ecx
  __int64 v56; // r13
  __int64 v57; // rax
  int v58; // edi
  __int64 v59; // rax
  int v60; // edx
  _QWORD *v61; // rdi
  __int64 v62; // rcx
  __m128i v63; // xmm1
  __m128i v64; // xmm2
  __m128i v65; // xmm3
  __int16 v66; // cx
  __m128i v67; // xmm1
  __m128i v68; // xmm2
  __m128i v69; // xmm1
  __m128i v70; // xmm2
  __m128i v71; // xmm3
  __int64 v72; // rdi
  unsigned __int64 v73; // r15
  unsigned __int64 v74; // r12
  unsigned __int64 v75; // rax
  __int64 v76; // r14
  __m128i si128; // xmm8
  __m128i v78; // xmm9
  __m128i v79; // xmm10
  __m128i v80; // xmm11
  __m128i v81; // xmm12
  __m128i v82; // xmm13
  __m128i v83; // xmm14
  __m128i v84; // xmm15
  __m128i v85; // xmm6
  __m128i v86; // xmm7
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // r8
  _QWORD *v89; // rbx
  unsigned __int64 v90; // r9
  __int64 v91; // rdx
  _QWORD *i; // r9
  const __m128i *v93; // r14
  __int64 v94; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // r14
  _QWORD *v97; // rbx
  __int64 v98; // rax
  _QWORD *v99; // rbx
  __int64 v100; // r12
  unsigned __int64 v101; // rdi
  unsigned __int64 v102; // r13
  __int64 v103; // r15
  __m128i *v104; // rax
  __int64 v105; // rax
  __int64 v106; // r8
  unsigned __int64 v107; // rdx
  __int64 v108; // rcx
  __m128i v109; // xmm0
  __m128i v110; // xmm1
  __m128i v111; // xmm2
  __m128i v112; // xmm3
  __int64 v113; // rcx
  __m128i v114; // xmm0
  __m128i v115; // xmm1
  __int64 v116; // r8
  __int64 j; // rax
  unsigned __int8 v118; // cl
  __int64 v119; // rdx
  __int64 v120; // r8
  __m128i v121; // xmm0
  __int64 v122; // rax
  __int64 v123; // r8
  __int64 v124; // rdx
  void (__fastcall *v125)(unsigned __int64 *, __int64, __int64); // rax
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __m128i v128; // xmm2
  __m128i v129; // xmm3
  __int64 v130; // rcx
  __m128i v131; // xmm0
  __m128i v132; // xmm1
  __int64 v133; // rax
  __int64 v134; // rcx
  char v135; // of
  __int64 (__fastcall **v136)(); // rdx
  __int64 v137; // rcx
  volatile signed __int64 *v138; // rdi
  __int64 v139; // rt0
  __int64 v140; // rt0
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rax
  __int128 v145; // xmm0
  __int128 v146; // xmm1
  __int128 v147; // xmm2
  int v148; // edx
  __int64 v149; // rdi
  __int64 v150; // rcx
  __m128i v151; // [rsp+30h] [rbp-50h] BYREF
  __m128i v152; // [rsp+40h] [rbp-40h] BYREF
  __m128i v153; // [rsp+50h] [rbp-30h] BYREF
  __m128i v154[3]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v155; // [rsp+90h] [rbp+10h] BYREF
  __m128i v156; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v157; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v158; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v159; // [rsp+D0h] [rbp+50h]
  __int128 v160; // [rsp+E0h] [rbp+60h]
  __m128i v161; // [rsp+F0h] [rbp+70h]
  _QWORD *v162; // [rsp+100h] [rbp+80h]
  __m128i v163; // [rsp+110h] [rbp+90h] BYREF
  __int64 v164; // [rsp+120h] [rbp+A0h]
  __int128 v165; // [rsp+128h] [rbp+A8h]
  unsigned __int64 v166; // [rsp+138h] [rbp+B8h]
  __int128 v167; // [rsp+140h] [rbp+C0h]
  unsigned __int64 v168; // [rsp+150h] [rbp+D0h]
  __int64 v169; // [rsp+158h] [rbp+D8h]
  __int64 (__fastcall **v170)(); // [rsp+160h] [rbp+E0h]
  __int16 v171; // [rsp+168h] [rbp+E8h]
  __m128i v172; // [rsp+178h] [rbp+F8h] BYREF
  _OWORD v173[2]; // [rsp+188h] [rbp+108h] BYREF
  __m128i v174; // [rsp+1A8h] [rbp+128h] BYREF
  __m128i v175; // [rsp+1B8h] [rbp+138h]
  __int128 v176; // [rsp+1C8h] [rbp+148h]
  __int128 v177; // [rsp+1D8h] [rbp+158h]
  __m128i v178; // [rsp+1E8h] [rbp+168h]
  _QWORD *v179; // [rsp+1F8h] [rbp+178h]
  _BYTE v180[224]; // [rsp+200h] [rbp+180h] BYREF
  __m128i v181; // [rsp+310h] [rbp+290h] BYREF
  __m128i v182; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v183; // [rsp+330h] [rbp+2B0h]
  unsigned __int64 v184; // [rsp+338h] [rbp+2B8h]
  __int128 v185; // [rsp+340h] [rbp+2C0h]
  __m128i v186; // [rsp+350h] [rbp+2D0h] BYREF
  __m128i v187; // [rsp+360h] [rbp+2E0h] BYREF
  __m128i v188; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v189; // [rsp+380h] [rbp+300h]
  __int128 v190; // [rsp+390h] [rbp+310h]
  __m128i v191; // [rsp+3A0h] [rbp+320h] BYREF
  __int64 v192; // [rsp+3B0h] [rbp+330h]
  volatile signed __int64 *v193; // [rsp+3B8h] [rbp+338h] BYREF
  __m128i v194[2]; // [rsp+3C0h] [rbp+340h] BYREF
  _BYTE v195[112]; // [rsp+3E0h] [rbp+360h] BYREF
  __m128i v196; // [rsp+450h] [rbp+3D0h] BYREF
  _QWORD *v197; // [rsp+460h] [rbp+3E0h]
  __m128i v198; // [rsp+4F0h] [rbp+470h] BYREF
  __m128i v199; // [rsp+500h] [rbp+480h] BYREF
  __int64 v200; // [rsp+510h] [rbp+490h]
  __m128i v201; // [rsp+520h] [rbp+4A0h] BYREF
  __m128i v202; // [rsp+530h] [rbp+4B0h] BYREF
  __m128i v203; // [rsp+540h] [rbp+4C0h] BYREF
  __m128i v204; // [rsp+550h] [rbp+4D0h] BYREF
  __m128i v205; // [rsp+560h] [rbp+4E0h]
  __m128i v206; // [rsp+570h] [rbp+4F0h] BYREF
  int v207; // [rsp+58Ch] [rbp+50Ch]
  unsigned __int64 v208; // [rsp+590h] [rbp+510h]
  _QWORD *v209; // [rsp+598h] [rbp+518h]
  unsigned __int64 v210; // [rsp+5A0h] [rbp+520h]
  __int64 v211; // [rsp+5A8h] [rbp+528h]
  unsigned __int16 v212; // [rsp+5B6h] [rbp+536h] BYREF
  __int64 v213; // [rsp+5B8h] [rbp+538h]
  __int64 v214; // [rsp+5C0h] [rbp+540h]
  char v215; // [rsp+5CFh] [rbp+54Fh]
  __int64 v216; // [rsp+5D0h] [rbp+550h]
  __int64 (__fastcall **v217)(); // [rsp+5D8h] [rbp+558h]
  char v218; // [rsp+5E1h] [rbp+561h]
  char v219; // [rsp+5E2h] [rbp+562h]
  char v220; // [rsp+5E3h] [rbp+563h]
  char v221; // [rsp+5E4h] [rbp+564h]
  char v222; // [rsp+5E5h] [rbp+565h]
  char v223; // [rsp+5E6h] [rbp+566h]
  char v224; // [rsp+5E7h] [rbp+567h]
  __int64 v225; // [rsp+5E8h] [rbp+568h]

  v225 = -2;
  v5 = *(unsigned __int8 *)(a2 + 145);
  v216 = a2;
  switch ( v5 )
  {
    case 0LL:
      *(_BYTE *)(a2 + 144) = 0;
      v6 = a2;
      v7 = *(_QWORD *)(a2 + 128);
      *(_OWORD *)(v6 + 96) = *(_OWORD *)(v6 + 120);
      v8 = *(_QWORD *)(v6 + 80);
      v9 = *(_QWORD *)(v6 + 88);
      v10 = _mm_loadu_si128((const __m128i *)(v6 + 48));
      *(__m128i *)v6 = _mm_loadu_si128((const __m128i *)(v6 + 32));
      *(__m128i *)(v6 + 16) = v10;
      sub_140DAD590(&v151, v7);
      v11 = v216;
      *(_BYTE *)(v216 + 144) = 1;
      v12 = *(_QWORD *)(v11 + 96);
      if ( *(_BYTE *)(*(_QWORD *)(v11 + 104) + 253LL) == 1 )
      {
        v13 = *(_QWORD *)(v12 + 32);
        v14 = *(_DWORD *)(v13 + 16);
        if ( v14 > 0x3FFFFFFD
          || (v17 = *(_DWORD *)(v13 + 16),
              v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 16), v14 + 1, v14),
              v15 = __OFSUB__(v17, v16),
              v17 != v16) )
        {
          sub_141937550((volatile void *)(v13 + 16));
        }
        v18 = _InterlockedIncrement64(*(volatile signed __int64 **)(v13 + 32));
        if ( (v18 < 0) ^ v15 | (v18 == 0) )
          goto LABEL_136;
        v19 = *(_QWORD *)(v13 + 32);
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v13 + 16)) & 0xBFFFFFFF), 1) )
LABEL_12:
          sub_141937840(v13 + 16);
      }
      else
      {
        v13 = *(_QWORD *)(v12 + 24);
        v20 = *(_DWORD *)(v13 + 16);
        if ( v20 > 0x3FFFFFFD
          || (v23 = *(_DWORD *)(v13 + 16),
              v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 16), v20 + 1, v20),
              v21 = __OFSUB__(v23, v22),
              v23 != v22) )
        {
          sub_141937550((volatile void *)(v13 + 16));
        }
        v24 = _InterlockedIncrement64(*(volatile signed __int64 **)(v13 + 32));
        if ( (v24 < 0) ^ v21 | (v24 == 0) )
          goto LABEL_136;
        v19 = *(_QWORD *)(v13 + 32);
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v13 + 16)) & 0xBFFFFFFF), 1) )
          goto LABEL_12;
      }
      *(_QWORD *)(v216 + 112) = v19;
      sub_140CAF8C0((unsigned int)v195, v19, (unsigned int)&unk_141A433A0, v8, v9);
      *(_BYTE *)(v216 + 144) = 0;
      v206 = v154[2];
      v205 = v154[1];
      v25 = _mm_loadu_si128(&v151);
      v26 = _mm_loadu_si128(&v152);
      v27 = _mm_loadu_si128(&v153);
      v204 = _mm_loadu_si128(v154);
      v203 = v27;
      v202 = v26;
      v201 = v25;
      sub_141259870(v180, v195, &v201);
      sub_140CB5130(v195, v180, v216);
      v28 = sub_1412597A0(v195);
      v29 = v216;
      *(_QWORD *)(v216 + 64) = v28;
      *(_QWORD *)(v29 + 72) = v30;
      a2 = v29;
LABEL_14:
      sub_14126C5E0(v195, a2 + 64, a3);
      v31 = *(_QWORD *)v195;
      if ( *(_QWORD *)v195 != -2 )
      {
        v33 = *(_QWORD *)&v195[8];
        v155 = *(__m128i *)&v195[16];
        v156 = *(__m128i *)&v195[32];
        v157 = *(__m128i *)&v195[48];
        v158 = *(__m128i *)&v195[64];
        v159 = *(_OWORD *)&v195[80];
        v160 = *(_OWORD *)&v195[96];
        v161 = _mm_loadu_si128(&v196);
        v162 = v197;
        sub_140D1A820(*(_QWORD *)(v216 + 64), *(_QWORD *)(v216 + 72));
        if ( (_DWORD)v31 == -1 )
        {
          v217 = (__int64 (__fastcall **)())v33;
          v42 = *(_QWORD *)(v216 + 96);
          v43 = *(unsigned __int8 *)(*(_QWORD *)(v216 + 104) + 253LL);
          v219 = 1;
          sub_140DA5020(v42, v43);
          v219 = 0;
          v201.m128i_i64[0] = sub_14122E700(v217);
          *(_QWORD *)v180 = &v201;
          *(_QWORD *)&v180[8] = sub_14122E940;
          sub_1416ABFD0(v195, &unk_141A48038, v180);
          v219 = 0;
          sub_140D19140(v201.m128i_i64[0]);
          v201 = _mm_loadu_si128((const __m128i *)v195);
          v202.m128i_i64[0] = *(_QWORD *)&v195[16];
          sub_1416AC440(v180, &v201);
          v44 = v201.m128i_i64[1];
          LOWORD(v45) = 502;
          sub_140DAFCE0((unsigned int)v195, v45, v201.m128i_i32[2], v202.m128i_i32[0], (__int64)aProxyUpstream, 14);
          v46 = *(_QWORD *)v195;
          v185 = *(_OWORD *)&v195[8];
          v186 = *(__m128i *)&v195[24];
          v187 = *(__m128i *)&v195[40];
          v188 = *(__m128i *)&v195[56];
          v189 = *(_OWORD *)&v195[72];
          v190 = *(_OWORD *)&v195[88];
          v191 = _mm_loadu_si128((const __m128i *)&v195[104]);
          v192 = v196.m128i_i64[1];
          v48 = *(_OWORD **)&v180[8];
          v47 = *(__int64 (__fastcall ***)())v180;
          v49 = *(volatile signed __int64 **)&v180[16];
          v50 = v216;
          if ( v201.m128i_i64[0] )
            sub_140001660(v44, v201.m128i_i64[0], 1);
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v50 + 112)) )
            goto LABEL_40;
LABEL_39:
          sub_141242F50(v216 + 112);
LABEL_40:
          v62 = v216;
          *(_BYTE *)(v216 + 144) = 0;
          sub_140409B40(v62);
LABEL_41:
          *(_QWORD *)a1 = v46;
          v63 = _mm_load_si128(&v186);
          v64 = _mm_load_si128(&v187);
          v65 = _mm_load_si128(&v188);
          *(_OWORD *)(a1 + 8) = v185;
          *(__m128i *)(a1 + 24) = v63;
          *(__m128i *)(a1 + 40) = v64;
          *(__m128i *)(a1 + 56) = v65;
          *(_OWORD *)(a1 + 72) = v189;
          *(_OWORD *)(a1 + 88) = v190;
          *(__m128i *)(a1 + 104) = _mm_load_si128(&v191);
          *(_QWORD *)(a1 + 120) = v192;
          *(_QWORD *)(a1 + 128) = v47;
          *(_QWORD *)(a1 + 136) = v48;
          *(_QWORD *)(a1 + 144) = v49;
          result = 1;
          goto LABEL_42;
        }
        v179 = v162;
        v178 = v161;
        v177 = v160;
        v176 = v159;
        v34 = _mm_load_si128(&v155);
        v35 = _mm_load_si128(&v156);
        v36 = _mm_load_si128(&v157);
        v175 = _mm_load_si128(&v158);
        v174 = v36;
        v173[1] = v35;
        v173[0] = v34;
        v172.m128i_i64[0] = v31;
        v172.m128i_i64[1] = v33;
        v37 = WORD4(v160);
        v212 = WORD4(v160);
        v38 = v159;
        v39 = 4 * v159;
        v40 = 0x7FFFFFFFFFFFFFFELL;
        LOBYTE(v40) = (unsigned __int64)v159 >> 62 != 0 || (unsigned __int64)(4 * v159) > 0x7FFFFFFFFFFFFFFELL;
        if ( (_BYTE)v40 )
        {
          v41 = 0;
          goto LABEL_19;
        }
        v51 = WORD4(v176);
        v213 = 4 * v159;
        v217 = (__int64 (__fastcall **)())v159;
        if ( v39 )
        {
          v52 = (const __m128i *)v175.m128i_i64[1];
          nullsub_1(v40);
          v41 = 2;
          v53 = (__m128i *)sub_140001650(v39, 2);
          if ( !v53 )
          {
LABEL_19:
            v220 = 1;
            sub_141938D2B(v41, v39);
          }
          v214 = (__int64)v53;
          if ( v38 )
            sub_1418F44E0(v53, v52, v39);
        }
        else
        {
          v214 = 2;
        }
        sub_1403F0BA0(v180, (char *)v173 + 8);
        sub_1403F09D0(v195, &v174);
        v171 = v51;
        v169 = v214;
        v170 = v217;
        v165 = *(_OWORD *)v180;
        v166 = *(_QWORD *)&v180[16];
        v167 = *(_OWORD *)v195;
        v168 = *(_QWORD *)&v195[16];
        v163 = _mm_loadu_si128(&v172);
        v164 = *(_QWORD *)&v173[0];
        if ( (unsigned __int16)(v37 - 500) < 0x64u
          || (v54 = (unsigned __int16)v37 - 401, v54 <= 0x1C) && (v55 = 268435917, _bittest(&v55, v54)) )
        {
          v56 = v216;
          v57 = *(_QWORD *)(v216 + 104);
          *(_QWORD *)v195 = &v212;
          *(_QWORD *)&v195[8] = sub_14164CC40;
          *(_QWORD *)&v195[16] = v57 + 24;
          *(_QWORD *)&v195[24] = sub_1400015F0;
          v222 = 1;
          sub_1416ABFD0(v180, &unk_141A48131, v195);
          v214 = *(_QWORD *)&v180[8];
          v217 = *(__int64 (__fastcall ***)())v180;
          v49 = *(volatile signed __int64 **)&v180[16];
          v58 = v212;
          v59 = *(_QWORD *)(v56 + 104);
          *(_QWORD *)v180 = &v212;
          *(_QWORD *)&v180[8] = sub_14164CC40;
          *(_QWORD *)&v180[16] = v59 + 24;
          *(_QWORD *)&v180[24] = sub_1400015F0;
          sub_1416ABFD0(&v201, &unk_141A48131, v180);
          v60 = 502;
          if ( (unsigned __int16)(v58 - 1000) >= 0xFC7Cu )
            v60 = v58;
          v211 = v201.m128i_i64[1];
          v213 = v201.m128i_i64[0];
          sub_140DAFCE0((unsigned int)v195, v60, v201.m128i_i32[2], v202.m128i_i32[0], (__int64)aProxyUpstream, 14);
          v46 = *(_QWORD *)v195;
          v185 = *(_OWORD *)&v195[8];
          v186 = *(__m128i *)&v195[24];
          v187 = *(__m128i *)&v195[40];
          v188 = *(__m128i *)&v195[56];
          v189 = *(_OWORD *)&v195[72];
          v190 = *(_OWORD *)&v195[88];
          v191 = _mm_loadu_si128((const __m128i *)&v195[104]);
          v192 = v196.m128i_i64[1];
          if ( v213 )
            sub_140001660(v211, v213, 1);
          v220 = 1;
          sub_14029C800(&v163);
          v47 = v217;
          v48 = (_OWORD *)v214;
          sub_140402120(&v172);
          v61 = v179;
          if ( *v179 )
            sub_140001660(v179[1], *v179, 1);
          sub_140001660(v61, 88, 8);
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v216 + 112)) )
            goto LABEL_40;
          goto LABEL_39;
        }
        v222 = 1;
        sub_14164BEA0(v195);
        v207 = v37 - 200;
        v201 = *(__m128i *)&v195[8];
        v202 = *(__m128i *)&v195[24];
        v203 = *(__m128i *)&v195[40];
        v204 = *(__m128i *)&v195[56];
        v205 = *(__m128i *)&v195[72];
        v206 = *(__m128i *)&v195[88];
        v66 = *(_WORD *)&v195[104];
        LODWORD(v193) = *(_DWORD *)&v195[106];
        WORD2(v193) = *(_WORD *)&v195[110];
        if ( *(_QWORD *)v195 != -1 )
        {
          v66 = 200;
          if ( (unsigned __int16)(v37 - 1000) >= 0xFC7Cu )
            v66 = v37;
          v206 = *(__m128i *)&v195[88];
          v205 = *(__m128i *)&v195[72];
          v67 = _mm_loadu_si128((const __m128i *)&v195[24]);
          v68 = _mm_loadu_si128((const __m128i *)&v195[40]);
          v204 = _mm_loadu_si128((const __m128i *)&v195[56]);
          v203 = v68;
          v202 = v67;
          v201 = *(__m128i *)&v195[8];
          LODWORD(v193) = *(_DWORD *)&v195[106];
          WORD2(v193) = *(_WORD *)&v195[110];
        }
        *(_QWORD *)v180 = *(_QWORD *)v195;
        v69 = _mm_load_si128(&v202);
        v70 = _mm_load_si128(&v203);
        v71 = _mm_load_si128(&v204);
        *(__m128i *)&v180[8] = v201;
        *(__m128i *)&v180[24] = v69;
        *(__m128i *)&v180[40] = v70;
        *(__m128i *)&v180[56] = v71;
        *(__m128i *)&v180[72] = v205;
        *(__m128i *)&v180[88] = _mm_load_si128(&v206);
        *(_WORD *)&v180[104] = v66;
        *(_DWORD *)&v180[106] = (_DWORD)v193;
        *(_WORD *)&v180[110] = WORD2(v193);
        v72 = *((_QWORD *)&v165 + 1);
        v73 = v166;
        v48 = (_OWORD *)v194;
        v74 = v168;
        v75 = *((_QWORD *)&v167 + 1);
        v184 = *((_QWORD *)&v167 + 1);
        v76 = 2 * (unsigned int)(v166 == 0);
        si128 = _mm_load_si128((const __m128i *)&xmmword_141A41E50);
        v78 = _mm_cvtsi32_si128(0x6574u);
        v79 = _mm_load_si128((const __m128i *)&xmmword_141A41E30);
        v80 = _mm_load_si128((const __m128i *)&xmmword_141A41E40);
        v81 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
        v82 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
        v83 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
        v84 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
        v85 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
        v86 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
        v87 = 0;
        if ( v76 != 2 )
          goto LABEL_50;
LABEL_48:
        ++v87;
        v88 = v214;
        if ( v87 < v73 )
        {
          v211 = v87;
          v89 = (_QWORD *)(v72 + 104 * v87);
LABEL_56:
          v91 = 2;
          if ( *v89 == 1 )
          {
            v210 = v89[1];
            v91 = 1;
          }
          for ( i = v89 + 3; ; i = (_QWORD *)(v90 + 32) )
          {
            v213 = v91;
            if ( v89[8] )
            {
              v93 = (const __m128i *)v89[9];
              v94 = v89[10];
            }
            else
            {
              v95 = *((unsigned __int8 *)v89 + 72);
              v96 = v89;
              v97 = i;
              v98 = sub_140DA3A00(v95, v91, v88);
              i = v97;
              v89 = v96;
              v88 = v214;
              v93 = (const __m128i *)v98;
            }
            if ( v94 < 0 )
            {
              v103 = 0;
              goto LABEL_115;
            }
            v217 = (__int64 (__fastcall **)())v94;
            if ( v94 )
              break;
            v214 = 1;
            v76 = v213;
LABEL_77:
            v116 = i[2];
            if ( v116 )
            {
              for ( j = 0; v116 != j; ++j )
              {
                v118 = *(_BYTE *)(i[1] + j);
                if ( v118 > 0x1Fu )
                {
                  if ( v118 == 127 )
                    goto LABEL_90;
                }
                else if ( v118 != 9 )
                {
                  goto LABEL_90;
                }
              }
            }
            sub_141653430(&v181);
            LOBYTE(v183) = 0;
            v200 = v183;
            v121 = _mm_loadu_si128(&v181);
            v199 = _mm_loadu_si128(&v182);
            v198 = v121;
            if ( v89[8] )
            {
              v122 = v89[9];
              v123 = v89[10];
            }
            else
            {
              v122 = sub_140DA3A00(*((unsigned __int8 *)v89 + 72), v119, v120);
              v123 = v124;
            }
            v215 = 1;
            sub_141651410(&v193, v122, v123);
            if ( (_BYTE)v193 )
            {
              v125 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v198.m128i_i64[0] + 32);
              v218 = 1;
              v125(&v199.m128i_u64[1], v198.m128i_i64[1], v199.m128i_i64[0]);
            }
            else
            {
              v202 = v194[1];
              v201 = v194[0];
              v205.m128i_i64[0] = v200;
              v126 = _mm_load_si128(&v198);
              v204 = _mm_load_si128(&v199);
              v203 = v126;
              v215 = 0;
              sub_140CAE4F0((__int64)v195, (__int64)v180, (__int128 *)v201.m128i_i8);
              v127 = _mm_loadu_si128((const __m128i *)&v195[16]);
              v128 = _mm_loadu_si128((const __m128i *)&v195[32]);
              v129 = _mm_loadu_si128((const __m128i *)&v195[48]);
              *(_OWORD *)v180 = *(_OWORD *)v195;
              *(__m128i *)&v180[16] = v127;
              *(__m128i *)&v180[32] = v128;
              *(__m128i *)&v180[48] = v129;
              *(_OWORD *)&v180[64] = *(_OWORD *)&v195[64];
              *(_OWORD *)&v180[80] = *(_OWORD *)&v195[80];
              *(__m128i *)&v180[96] = _mm_loadu_si128((const __m128i *)&v195[96]);
            }
LABEL_90:
            v107 = (unsigned __int64)v217;
            if ( v217 )
            {
              v130 = v214;
LABEL_92:
              sub_140001660(v130, v107, 1);
            }
            v87 = v211;
            v75 = v210;
            if ( v76 == 2 )
              goto LABEL_48;
LABEL_50:
            v88 = v214;
            if ( v87 >= v73 )
            {
              v224 = 1;
              v223 = 1;
              sub_1419390C3(v87, v73, &off_141A4FF28);
            }
            v89 = (_QWORD *)(v72 + 104 * v87);
            v211 = v87;
            if ( !v76 )
              goto LABEL_56;
            if ( v75 >= v74 )
            {
              v224 = 1;
              v223 = 1;
              sub_1419390C3(v75, v74, &off_141A4FF40);
            }
            v210 = v75;
            v87 = v184;
            v90 = v184 + 72 * v75;
            v91 = 2;
            if ( *(_BYTE *)(v90 + 16) )
            {
              v210 = *(_QWORD *)(v90 + 24);
              v91 = 1;
            }
          }
          v209 = v89;
          v99 = i;
          v208 = v74;
          v100 = v72;
          v101 = v73;
          v102 = v94;
          nullsub_1(v87);
          v103 = 1;
          v104 = (__m128i *)sub_140001650(v102, 1);
          if ( !v104 )
          {
            v88 = v102;
LABEL_115:
            v224 = 1;
            v223 = 1;
            sub_141938D2B(v103, v88);
          }
          v214 = (__int64)v104;
          sub_1418F44E0(v104, v93, v102);
          if ( v102 < 8 )
          {
            v105 = 0;
            v73 = v101;
            v72 = v100;
            v74 = v208;
            v48 = (_OWORD *)v194;
            v106 = v214;
            v76 = v213;
            i = v99;
            v89 = v209;
            goto LABEL_95;
          }
          v107 = v102;
          v73 = v101;
          v76 = v213;
          i = v99;
          if ( v102 < 0x20 )
          {
            v105 = 0;
            v72 = v100;
            v74 = v208;
            v48 = (_OWORD *)v194;
            v106 = v214;
            v89 = v209;
LABEL_74:
            v113 = v105;
            v105 = v107 & 0x7FFFFFFFFFFFFFF8LL;
            do
            {
              v114 = _mm_loadl_epi64((const __m128i *)(v106 + v113));
              v115 = _mm_add_epi8(v114, v81);
              *(_QWORD *)(v106 + v113) = _mm_or_si128(
                                           _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v115, v82), v115), v83),
                                           v114).m128i_u64[0];
              v113 += 8;
            }
            while ( v105 != v113 );
            v107 = (unsigned __int64)v217;
            goto LABEL_96;
          }
          v105 = v102 & 0x7FFFFFFFFFFFFFE0LL;
          v108 = 0;
          v72 = v100;
          v106 = v214;
          v89 = v209;
          do
          {
            v109 = _mm_loadu_si128((const __m128i *)(v106 + v108));
            v110 = _mm_loadu_si128((const __m128i *)(v106 + v108 + 16));
            v111 = _mm_add_epi8(v109, v84);
            v112 = _mm_add_epi8(v110, v84);
            *(__m128i *)(v106 + v108) = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v111, v85), v111), v86),
                                          v109);
            *(__m128i *)(v106 + v108 + 16) = _mm_or_si128(
                                               _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v112, v85), v112), v86),
                                               v110);
            v108 += 32;
          }
          while ( v105 != v108 );
          v74 = v208;
          v48 = (_OWORD *)v194;
          if ( v107 != v105 )
          {
            if ( (v107 & 0x18) != 0 )
              goto LABEL_74;
            do
            {
LABEL_95:
              *(_BYTE *)(v106 + v105) |= 32 * ((unsigned __int8)(*(_BYTE *)(v106 + v105) - 65) < 0x1Au);
              v107 = (unsigned __int64)v217;
              ++v105;
LABEL_96:
              ;
            }
            while ( v107 != v105 );
          }
          switch ( v107 )
          {
            case 2uLL:
              if ( *(_WORD *)v106 != 25972 )
                goto LABEL_77;
              goto LABEL_113;
            case 7uLL:
              v107 = (unsigned __int64)v217;
              if ( *(_DWORD *)v106 ^ 0x72677075 | *(_DWORD *)(v106 + 3) ^ 0x65646172 )
                goto LABEL_77;
              goto LABEL_113;
            case 8uLL:
              if ( *(_QWORD *)v106 != 0x7372656C69617274LL )
                goto LABEL_77;
              goto LABEL_113;
            case 0xAuLL:
              if ( !(*(_QWORD *)v106 ^ 0x697463656E6E6F63LL | *(unsigned __int16 *)(v106 + 8) ^ 0x6E6FLL) )
                goto LABEL_113;
              v133 = *(_QWORD *)v106 ^ 0x696C612D7065656BLL;
              v134 = *(unsigned __int16 *)(v106 + 8) ^ 0x6576LL;
LABEL_112:
              if ( !(v133 | v134) )
                goto LABEL_113;
              goto LABEL_77;
            case 0xEuLL:
              v133 = *(_QWORD *)v106 ^ 0x2D746E65746E6F63LL;
              v134 = *(_QWORD *)(v106 + 6) ^ 0x6874676E656C2D74LL;
              v107 = (unsigned __int64)v217;
              goto LABEL_112;
            case 0x11uLL:
              v131 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v106), (__m128i)xmmword_141A41E70);
              v132 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v106 + 16)), (__m128i)xmmword_1419D35A0);
              goto LABEL_105;
            case 0x12uLL:
              v131 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v106), si128);
              v132 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v106 + 16)), v78);
              goto LABEL_105;
            case 0x13uLL:
              v131 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v106), v80);
              v132 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v106 + 3)), v79);
LABEL_105:
              if ( _mm_movemask_epi8(_mm_and_si128(v132, v131)) != 0xFFFF )
                goto LABEL_77;
LABEL_113:
              v130 = v106;
              break;
            default:
              goto LABEL_77;
          }
          goto LABEL_92;
        }
        sub_1418F44E0((__m128i *)v195, &v172, 0x88u);
        v224 = 1;
        v223 = 0;
        v214 = sub_1410D5D80(v195);
        v217 = v136;
        v137 = v216;
        v138 = **(volatile signed __int64 ***)(v216 + 96);
        v139 = _InterlockedIncrement64(v138);
        if ( !((v139 < 0) ^ v135 | (v139 == 0)) )
        {
          v181.m128i_i64[0] = (__int64)v138;
          v49 = *(volatile signed __int64 **)(*(_QWORD *)(v137 + 96) + 8LL);
          v140 = _InterlockedIncrement64(v49);
          if ( !((v140 < 0) ^ v135 | (v140 == 0)) )
          {
            v198.m128i_i64[0] = (__int64)v49;
            v141 = *(_QWORD *)(v137 + 104);
            v221 = 1;
            sub_1416AC440(v195, v141);
            v193 = v138;
            v201.m128i_i64[0] = (__int64)v49;
            nullsub_1(v142);
            v143 = sub_140001650(24, 8);
            if ( !v143 )
            {
              v213 = (__int64)v49;
              sub_141938D11(8, 24);
            }
            *(_QWORD *)v143 = 1;
            *(_QWORD *)(v143 + 8) = 1;
            *(_BYTE *)(v143 + 16) = 0;
            if ( *(_QWORD *)v195 == -1 )
            {
              v224 = 1;
              v223 = 0;
              sub_141939020(&off_141A45860);
            }
            *(_QWORD *)&v195[24] = aRelayPassThrou;
            *(_QWORD *)&v195[32] = 32;
            *(_QWORD *)&v195[40] = v143;
            *(_QWORD *)&v195[48] = v49;
            *(_QWORD *)&v195[56] = v138;
            v195[64] = 0;
            *(_QWORD *)&v195[72] = v214;
            *(_QWORD *)&v195[80] = v217;
            nullsub_1(*(_QWORD *)v195);
            v144 = sub_140001650(88, 8);
            if ( !v144 )
              sub_141938D11(8, 88);
            *(_QWORD *)(v144 + 80) = *(_QWORD *)&v195[80];
            *(_OWORD *)(v144 + 64) = *(_OWORD *)&v195[64];
            v145 = *(_OWORD *)v195;
            v146 = *(_OWORD *)&v195[16];
            v147 = *(_OWORD *)&v195[32];
            *(_OWORD *)(v144 + 48) = *(_OWORD *)&v195[48];
            *(_OWORD *)(v144 + 32) = v147;
            *(_OWORD *)(v144 + 16) = v146;
            *(_OWORD *)v144 = v145;
            if ( *(_QWORD *)v180 == -1 )
            {
              v217 = (__int64 (__fastcall **)())v144;
              sub_140CE6340(v144);
              sub_140001660(v217, 88, 8);
              v224 = 0;
              v223 = 0;
              LOWORD(v148) = 500;
              sub_140DAFCE0((unsigned int)v195, v148, (unsigned int)aBuildStreaming, 27, (__int64)aProxyUpstream, 14);
              v47 = (__int64 (__fastcall **)())v196.m128i_i64[1];
            }
            else
            {
              *(_OWORD *)&v195[10] = *(_OWORD *)&v180[10];
              *(_OWORD *)&v195[26] = *(_OWORD *)&v180[26];
              *(_OWORD *)&v195[42] = *(_OWORD *)&v180[42];
              *(_OWORD *)&v195[58] = *(_OWORD *)&v180[58];
              *(_OWORD *)&v195[74] = *(_OWORD *)&v180[74];
              *(_OWORD *)&v195[90] = *(_OWORD *)&v180[90];
              *(_QWORD *)&v195[104] = *(_QWORD *)&v180[104];
              *(_QWORD *)v195 = *(_QWORD *)v180;
              *(_WORD *)&v195[8] = *(_WORD *)&v180[8];
              v196.m128i_i64[0] = v144;
              v47 = &off_141A45878;
              v196.m128i_i64[1] = (__int64)&off_141A45878;
            }
            v149 = 0;
            LOBYTE(v49) = (unsigned __int16)v207 >= 0x64u;
            v192 = v196.m128i_i64[0];
            v191 = *(__m128i *)&v195[96];
            v190 = *(_OWORD *)&v195[80];
            v189 = *(_OWORD *)&v195[64];
            v188 = *(__m128i *)&v195[48];
            v187 = *(__m128i *)&v195[32];
            v186 = *(__m128i *)&v195[16];
            v185 = *(_OWORD *)v195;
            v220 = 0;
            sub_14029C800(&v163);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v216 + 112)) )
              sub_141242F50(v216 + 112);
            v150 = v216;
            *(_BYTE *)(v216 + 144) = 0;
            sub_140409B40(v150);
            LOBYTE(v149) = (_BYTE)v49;
            v46 = 2 * v149 + 3;
            goto LABEL_41;
          }
        }
LABEL_136:
        BUG();
      }
      *(_QWORD *)a1 = -1;
      result = 3;
LABEL_42:
      *(_BYTE *)(v216 + 145) = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A48098);
    case 2LL:
      sub_141939400(&off_141A48098);
    case 3LL:
      goto LABEL_14;
  }
}
