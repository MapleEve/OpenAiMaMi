// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406da510 | successor of pre-update 0x140d38ba0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.459, "str_ov": 0.0, "verdict": "CONFIRMED_DIFF"}
char __fastcall sub_1406DA510(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
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
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __m128i v37; // xmm2
  int v38; // r14d
  __int64 v39; // r13
  __int64 v40; // r12
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdi
  int v46; // edx
  __int64 v47; // r14
  __int64 (__fastcall **v48)(); // r12
  _OWORD *v49; // r13
  volatile signed __int64 *v50; // rbx
  __int64 v51; // r15
  __int16 v52; // r15
  __int64 v53; // rdi
  __int64 v54; // rax
  unsigned int v55; // eax
  int v56; // ecx
  __int64 v57; // r13
  __int64 v58; // rax
  int v59; // edi
  __int64 v60; // rax
  int v61; // edx
  _QWORD *v62; // rdi
  __int64 v63; // rcx
  __m128i v64; // xmm1
  __m128i v65; // xmm2
  __m128i v66; // xmm3
  __int16 v67; // cx
  __m128i v68; // xmm1
  __m128i v69; // xmm2
  __m128i v70; // xmm1
  __m128i v71; // xmm2
  __m128i v72; // xmm3
  __int64 v73; // rdi
  unsigned __int64 v74; // r15
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // rax
  __int64 v77; // r14
  __m128i si128; // xmm8
  __m128i v79; // xmm9
  __m128i v80; // xmm10
  __m128i v81; // xmm11
  __m128i v82; // xmm12
  __m128i v83; // xmm13
  __m128i v84; // xmm14
  __m128i v85; // xmm15
  __m128i v86; // xmm6
  __m128i v87; // xmm7
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // r8
  _QWORD *v90; // rbx
  unsigned __int64 v91; // r9
  __int64 v92; // rdx
  _QWORD *i; // r9
  __int64 v94; // r14
  __int64 v95; // rdx
  __int64 v96; // rcx
  _QWORD *v97; // r14
  _QWORD *v98; // rbx
  __int64 v99; // rax
  _QWORD *v100; // rbx
  __int64 v101; // r12
  unsigned __int64 v102; // rdi
  unsigned __int64 v103; // r13
  __int64 v104; // r15
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // r8
  unsigned __int64 v108; // rdx
  __int64 v109; // rcx
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  __m128i v112; // xmm2
  __m128i v113; // xmm3
  __int64 v114; // rcx
  __m128i v115; // xmm0
  __m128i v116; // xmm1
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 j; // rax
  unsigned __int8 v120; // cl
  __int64 v121; // rdx
  __int64 v122; // r8
  __m128i v123; // xmm0
  __int64 v124; // rax
  __int64 v125; // r8
  __int64 v126; // rdx
  void (__fastcall *v127)(unsigned __int64 *, __int64, __int64); // rax
  __m128i v128; // xmm0
  __m128i v129; // xmm1
  __m128i v130; // xmm2
  __m128i v131; // xmm3
  __int64 v132; // rcx
  __m128i v133; // xmm0
  __m128i v134; // xmm1
  __int64 v135; // rax
  __int64 v136; // rcx
  char v137; // of
  __int64 (__fastcall **v138)(); // rdx
  __int64 v139; // rcx
  volatile signed __int64 *v140; // rdi
  __int64 v141; // rt0
  __int64 v142; // rt0
  __int64 v143; // rdx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rax
  __int128 v148; // xmm0
  __int128 v149; // xmm1
  __int128 v150; // xmm2
  __int64 v151; // rdx
  int v152; // edx
  __int64 v153; // rdi
  __int64 v154; // rcx
  __m128i v155; // [rsp+30h] [rbp-50h] BYREF
  __m128i v156; // [rsp+40h] [rbp-40h] BYREF
  __m128i v157; // [rsp+50h] [rbp-30h] BYREF
  __m128i v158[3]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v159; // [rsp+90h] [rbp+10h] BYREF
  __m128i v160; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v161; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v162; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v163; // [rsp+D0h] [rbp+50h]
  __int128 v164; // [rsp+E0h] [rbp+60h]
  __m128i v165; // [rsp+F0h] [rbp+70h]
  _QWORD *v166; // [rsp+100h] [rbp+80h]
  __m128i v167; // [rsp+110h] [rbp+90h] BYREF
  __int64 v168; // [rsp+120h] [rbp+A0h]
  __int128 v169; // [rsp+128h] [rbp+A8h]
  unsigned __int64 v170; // [rsp+138h] [rbp+B8h]
  __int128 v171; // [rsp+140h] [rbp+C0h]
  unsigned __int64 v172; // [rsp+150h] [rbp+D0h]
  __int64 v173; // [rsp+158h] [rbp+D8h]
  __int64 (__fastcall **v174)(); // [rsp+160h] [rbp+E0h]
  __int16 v175; // [rsp+168h] [rbp+E8h]
  __m128i v176; // [rsp+178h] [rbp+F8h] BYREF
  _OWORD v177[2]; // [rsp+188h] [rbp+108h] BYREF
  __m128i v178; // [rsp+1A8h] [rbp+128h] BYREF
  __m128i v179; // [rsp+1B8h] [rbp+138h]
  __int128 v180; // [rsp+1C8h] [rbp+148h]
  __int128 v181; // [rsp+1D8h] [rbp+158h]
  __m128i v182; // [rsp+1E8h] [rbp+168h]
  _QWORD *v183; // [rsp+1F8h] [rbp+178h]
  _BYTE v184[224]; // [rsp+200h] [rbp+180h] BYREF
  __m128i v185; // [rsp+310h] [rbp+290h] BYREF
  __m128i v186; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v187; // [rsp+330h] [rbp+2B0h]
  unsigned __int64 v188; // [rsp+338h] [rbp+2B8h]
  __int128 v189; // [rsp+340h] [rbp+2C0h]
  __m128i v190; // [rsp+350h] [rbp+2D0h] BYREF
  __m128i v191; // [rsp+360h] [rbp+2E0h] BYREF
  __m128i v192; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v193; // [rsp+380h] [rbp+300h]
  __int128 v194; // [rsp+390h] [rbp+310h]
  __m128i v195; // [rsp+3A0h] [rbp+320h] BYREF
  __int64 v196; // [rsp+3B0h] [rbp+330h]
  volatile signed __int64 *v197; // [rsp+3B8h] [rbp+338h] BYREF
  __m128i v198[2]; // [rsp+3C0h] [rbp+340h] BYREF
  _BYTE v199[112]; // [rsp+3E0h] [rbp+360h] BYREF
  __m128i v200; // [rsp+450h] [rbp+3D0h] BYREF
  _QWORD *v201; // [rsp+460h] [rbp+3E0h]
  __m128i v202; // [rsp+4F0h] [rbp+470h] BYREF
  __m128i v203; // [rsp+500h] [rbp+480h] BYREF
  __int64 v204; // [rsp+510h] [rbp+490h]
  __m128i v205; // [rsp+520h] [rbp+4A0h] BYREF
  __m128i v206; // [rsp+530h] [rbp+4B0h] BYREF
  __m128i v207; // [rsp+540h] [rbp+4C0h] BYREF
  __m128i v208; // [rsp+550h] [rbp+4D0h] BYREF
  __m128i v209; // [rsp+560h] [rbp+4E0h]
  __m128i v210; // [rsp+570h] [rbp+4F0h] BYREF
  int v211; // [rsp+58Ch] [rbp+50Ch]
  unsigned __int64 v212; // [rsp+590h] [rbp+510h]
  _QWORD *v213; // [rsp+598h] [rbp+518h]
  unsigned __int64 v214; // [rsp+5A0h] [rbp+520h]
  __int64 v215; // [rsp+5A8h] [rbp+528h]
  unsigned __int16 v216; // [rsp+5B6h] [rbp+536h] BYREF
  __int64 v217; // [rsp+5B8h] [rbp+538h]
  char v218; // [rsp+5C7h] [rbp+547h]
  __int64 v219; // [rsp+5C8h] [rbp+548h]
  __int64 v220; // [rsp+5D0h] [rbp+550h]
  __int64 (__fastcall **v221)(); // [rsp+5D8h] [rbp+558h]
  char v222; // [rsp+5E1h] [rbp+561h]
  char v223; // [rsp+5E2h] [rbp+562h]
  char v224; // [rsp+5E3h] [rbp+563h]
  char v225; // [rsp+5E4h] [rbp+564h]
  char v226; // [rsp+5E5h] [rbp+565h]
  char v227; // [rsp+5E6h] [rbp+566h]
  char v228; // [rsp+5E7h] [rbp+567h]
  __int64 v229; // [rsp+5E8h] [rbp+568h]

  v229 = -2;
  v3 = a3;
  v5 = *(unsigned __int8 *)(a2 + 145);
  v219 = a2;
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
      LOBYTE(a3) = 1;
      sub_140736EB0(&v155, v7, a3);
      v11 = v219;
      *(_BYTE *)(v219 + 144) = 1;
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
          sub_141969B00((volatile void *)(v13 + 16));
        }
        v18 = _InterlockedIncrement64(*(volatile signed __int64 **)(v13 + 32));
        if ( (v18 < 0) ^ v15 | (v18 == 0) )
          goto LABEL_140;
        v19 = *(_QWORD *)(v13 + 32);
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v13 + 16)) & 0xBFFFFFFF), 1) )
LABEL_12:
          sub_141969DF0(v13 + 16);
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
          sub_141969B00((volatile void *)(v13 + 16));
        }
        v24 = _InterlockedIncrement64(*(volatile signed __int64 **)(v13 + 32));
        if ( (v24 < 0) ^ v21 | (v24 == 0) )
          goto LABEL_140;
        v19 = *(_QWORD *)(v13 + 32);
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v13 + 16)) & 0xBFFFFFFF), 1) )
          goto LABEL_12;
      }
      *(_QWORD *)(v219 + 112) = v19;
      sub_140657900((unsigned int)v199, v19, (unsigned int)&unk_141A35958, v8, v9);
      *(_BYTE *)(v219 + 144) = 0;
      v210 = v158[2];
      v209 = v158[1];
      v25 = _mm_loadu_si128(&v155);
      v26 = _mm_loadu_si128(&v156);
      v27 = _mm_loadu_si128(&v157);
      v208 = _mm_loadu_si128(v158);
      v207 = v27;
      v206 = v26;
      v205 = v25;
      sub_14126FD80(v184, v199, &v205);
      sub_14065F550(v199, v184, v219);
      v28 = sub_14126FCB0(v199);
      v29 = v219;
      *(_QWORD *)(v219 + 64) = v28;
      *(_QWORD *)(v29 + 72) = v30;
      a2 = v29;
LABEL_14:
      sub_141298A20(v199, a2 + 64, v3);
      v31 = *(_QWORD *)v199;
      if ( *(_QWORD *)v199 != -2 )
      {
        v33 = *(_QWORD *)&v199[8];
        v159 = *(__m128i *)&v199[16];
        v160 = *(__m128i *)&v199[32];
        v161 = *(__m128i *)&v199[48];
        v162 = *(__m128i *)&v199[64];
        v163 = *(_OWORD *)&v199[80];
        v164 = *(_OWORD *)&v199[96];
        v165 = _mm_loadu_si128(&v200);
        v166 = v201;
        sub_1406C1D00(*(_QWORD *)(v219 + 64), *(_QWORD *)(v219 + 72));
        if ( (_DWORD)v31 == -1 )
        {
          v221 = (__int64 (__fastcall **)())v33;
          v43 = *(_QWORD *)(v219 + 96);
          v44 = *(unsigned __int8 *)(*(_QWORD *)(v219 + 104) + 253LL);
          v223 = 1;
          sub_14070F130(v43, v44);
          v223 = 0;
          v205.m128i_i64[0] = sub_1412469C0(v221);
          *(_QWORD *)v184 = &v205;
          *(_QWORD *)&v184[8] = sub_141246C00;
          sub_1416DAFA0(v199, &unk_141A39A80, v184);
          v223 = 0;
          sub_14028DCE0(v205.m128i_i64[0]);
          v205 = _mm_loadu_si128((const __m128i *)v199);
          v206.m128i_i64[0] = *(_QWORD *)&v199[16];
          sub_1416DB410(v184, &v205);
          v45 = v205.m128i_i64[1];
          LOWORD(v46) = 502;
          sub_1407360F0((unsigned int)v199, v46, v205.m128i_i32[2], v206.m128i_i32[0], (__int64)aProxyUpstream, 14);
          v47 = *(_QWORD *)v199;
          v189 = *(_OWORD *)&v199[8];
          v190 = *(__m128i *)&v199[24];
          v191 = *(__m128i *)&v199[40];
          v192 = *(__m128i *)&v199[56];
          v193 = *(_OWORD *)&v199[72];
          v194 = *(_OWORD *)&v199[88];
          v195 = _mm_loadu_si128((const __m128i *)&v199[104]);
          v196 = v200.m128i_i64[1];
          v49 = *(_OWORD **)&v184[8];
          v48 = *(__int64 (__fastcall ***)())v184;
          v50 = *(volatile signed __int64 **)&v184[16];
          v51 = v219;
          if ( v205.m128i_i64[0] )
            sub_140001660(v45, v205.m128i_i64[0], 1);
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v51 + 112)) )
            goto LABEL_40;
LABEL_39:
          sub_141258070(v219 + 112);
LABEL_40:
          v63 = v219;
          *(_BYTE *)(v219 + 144) = 0;
          sub_1406C0ED0(v63);
LABEL_41:
          *(_QWORD *)a1 = v47;
          v64 = _mm_load_si128(&v190);
          v65 = _mm_load_si128(&v191);
          v66 = _mm_load_si128(&v192);
          *(_OWORD *)(a1 + 8) = v189;
          *(__m128i *)(a1 + 24) = v64;
          *(__m128i *)(a1 + 40) = v65;
          *(__m128i *)(a1 + 56) = v66;
          *(_OWORD *)(a1 + 72) = v193;
          *(_OWORD *)(a1 + 88) = v194;
          *(__m128i *)(a1 + 104) = _mm_load_si128(&v195);
          *(_QWORD *)(a1 + 120) = v196;
          *(_QWORD *)(a1 + 128) = v48;
          *(_QWORD *)(a1 + 136) = v49;
          *(_QWORD *)(a1 + 144) = v50;
          result = 1;
          goto LABEL_42;
        }
        v183 = v166;
        v182 = v165;
        v181 = v164;
        v180 = v163;
        v35 = _mm_load_si128(&v159);
        v36 = _mm_load_si128(&v160);
        v37 = _mm_load_si128(&v161);
        v179 = _mm_load_si128(&v162);
        v178 = v37;
        v177[1] = v36;
        v177[0] = v35;
        v176.m128i_i64[0] = v31;
        v176.m128i_i64[1] = v33;
        v38 = WORD4(v164);
        v216 = WORD4(v164);
        v39 = v163;
        v40 = 4 * v163;
        v41 = 0x7FFFFFFFFFFFFFFELL;
        LOBYTE(v41) = (unsigned __int64)v163 >> 62 != 0 || (unsigned __int64)(4 * v163) > 0x7FFFFFFFFFFFFFFELL;
        if ( (_BYTE)v41 )
        {
          v42 = 0;
          goto LABEL_19;
        }
        v52 = WORD4(v180);
        v217 = 4 * v163;
        v221 = (__int64 (__fastcall **)())v163;
        if ( v40 )
        {
          v53 = v179.m128i_i64[1];
          nullsub_1(v41, v34);
          v42 = 2;
          v54 = sub_140001650(v40, 2);
          if ( !v54 )
          {
LABEL_19:
            v224 = 1;
            sub_14196B2DB(v42, v40);
          }
          v220 = v54;
          if ( v39 )
            sub_1419234B0(v54, v53, v40);
        }
        else
        {
          v220 = 2;
        }
        sub_14022BA60(v184, (char *)v177 + 8);
        sub_14022B8C0(v199, &v178);
        v175 = v52;
        v173 = v220;
        v174 = v221;
        v169 = *(_OWORD *)v184;
        v170 = *(_QWORD *)&v184[16];
        v171 = *(_OWORD *)v199;
        v172 = *(_QWORD *)&v199[16];
        v167 = _mm_loadu_si128(&v176);
        v168 = *(_QWORD *)&v177[0];
        if ( (unsigned __int16)(v38 - 500) < 0x64u
          || (v55 = (unsigned __int16)v38 - 401, v55 <= 0x1C) && (v56 = 268435917, _bittest(&v56, v55)) )
        {
          v57 = v219;
          v58 = *(_QWORD *)(v219 + 104);
          *(_QWORD *)v199 = &v216;
          *(_QWORD *)&v199[8] = sub_141680990;
          *(_QWORD *)&v199[16] = v58 + 24;
          *(_QWORD *)&v199[24] = sub_1400015F0;
          v226 = 1;
          sub_1416DAFA0(v184, &unk_141A39B67, v199);
          v220 = *(_QWORD *)&v184[8];
          v221 = *(__int64 (__fastcall ***)())v184;
          v50 = *(volatile signed __int64 **)&v184[16];
          v59 = v216;
          v60 = *(_QWORD *)(v57 + 104);
          *(_QWORD *)v184 = &v216;
          *(_QWORD *)&v184[8] = sub_141680990;
          *(_QWORD *)&v184[16] = v60 + 24;
          *(_QWORD *)&v184[24] = sub_1400015F0;
          sub_1416DAFA0(&v205, &unk_141A39B67, v184);
          v61 = 502;
          if ( (unsigned __int16)(v59 - 1000) >= 0xFC7Cu )
            v61 = v59;
          v215 = v205.m128i_i64[1];
          v217 = v205.m128i_i64[0];
          sub_1407360F0((unsigned int)v199, v61, v205.m128i_i32[2], v206.m128i_i32[0], (__int64)aProxyUpstream, 14);
          v47 = *(_QWORD *)v199;
          v189 = *(_OWORD *)&v199[8];
          v190 = *(__m128i *)&v199[24];
          v191 = *(__m128i *)&v199[40];
          v192 = *(__m128i *)&v199[56];
          v193 = *(_OWORD *)&v199[72];
          v194 = *(_OWORD *)&v199[88];
          v195 = _mm_loadu_si128((const __m128i *)&v199[104]);
          v196 = v200.m128i_i64[1];
          if ( v217 )
            sub_140001660(v215, v217, 1);
          v224 = 1;
          sub_1400366B0(&v167);
          v48 = v221;
          v49 = (_OWORD *)v220;
          sub_14068B4D0(&v176);
          v62 = v183;
          if ( *v183 )
            sub_140001660(v183[1], *v183, 1);
          sub_140001660(v62, 88, 8);
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v219 + 112)) )
            goto LABEL_40;
          goto LABEL_39;
        }
        v226 = 1;
        sub_14167FD30(v199);
        v211 = v38 - 200;
        v205 = *(__m128i *)&v199[8];
        v206 = *(__m128i *)&v199[24];
        v207 = *(__m128i *)&v199[40];
        v208 = *(__m128i *)&v199[56];
        v209 = *(__m128i *)&v199[72];
        v210 = *(__m128i *)&v199[88];
        v67 = *(_WORD *)&v199[104];
        LODWORD(v197) = *(_DWORD *)&v199[106];
        WORD2(v197) = *(_WORD *)&v199[110];
        if ( *(_QWORD *)v199 != -1 )
        {
          v67 = 200;
          if ( (unsigned __int16)(v38 - 1000) >= 0xFC7Cu )
            v67 = v38;
          v210 = *(__m128i *)&v199[88];
          v209 = *(__m128i *)&v199[72];
          v68 = _mm_loadu_si128((const __m128i *)&v199[24]);
          v69 = _mm_loadu_si128((const __m128i *)&v199[40]);
          v208 = _mm_loadu_si128((const __m128i *)&v199[56]);
          v207 = v69;
          v206 = v68;
          v205 = *(__m128i *)&v199[8];
          LODWORD(v197) = *(_DWORD *)&v199[106];
          WORD2(v197) = *(_WORD *)&v199[110];
        }
        *(_QWORD *)v184 = *(_QWORD *)v199;
        v70 = _mm_load_si128(&v206);
        v71 = _mm_load_si128(&v207);
        v72 = _mm_load_si128(&v208);
        *(__m128i *)&v184[8] = v205;
        *(__m128i *)&v184[24] = v70;
        *(__m128i *)&v184[40] = v71;
        *(__m128i *)&v184[56] = v72;
        *(__m128i *)&v184[72] = v209;
        *(__m128i *)&v184[88] = _mm_load_si128(&v210);
        *(_WORD *)&v184[104] = v67;
        *(_DWORD *)&v184[106] = (_DWORD)v197;
        *(_WORD *)&v184[110] = WORD2(v197);
        v73 = *((_QWORD *)&v169 + 1);
        v74 = v170;
        v49 = (_OWORD *)v198;
        v75 = v172;
        v76 = *((_QWORD *)&v171 + 1);
        v188 = *((_QWORD *)&v171 + 1);
        v77 = 2 * (unsigned int)(v170 == 0);
        si128 = _mm_load_si128((const __m128i *)&xmmword_141A34E00);
        v79 = _mm_cvtsi32_si128(0x6574u);
        v80 = _mm_load_si128((const __m128i *)&xmmword_141A34DE0);
        v81 = _mm_load_si128((const __m128i *)&xmmword_141A34DF0);
        v82 = _mm_load_si128((const __m128i *)&xmmword_141A045D0);
        v83 = _mm_load_si128((const __m128i *)&xmmword_141A045E0);
        v84 = _mm_load_si128((const __m128i *)&xmmword_141A045F0);
        v85 = _mm_load_si128((const __m128i *)&xmmword_141A045A0);
        v86 = _mm_load_si128((const __m128i *)&xmmword_141A045B0);
        v87 = _mm_load_si128((const __m128i *)&xmmword_141A045C0);
        v88 = 0;
        if ( v77 != 2 )
          goto LABEL_50;
LABEL_48:
        ++v88;
        v89 = v220;
        if ( v88 < v74 )
        {
          v215 = v88;
          v90 = (_QWORD *)(v73 + 104 * v88);
LABEL_56:
          v92 = 2;
          if ( *v90 == 1 )
          {
            v214 = v90[1];
            v92 = 1;
          }
          for ( i = v90 + 3; ; i = (_QWORD *)(v91 + 32) )
          {
            v217 = v92;
            if ( v90[8] )
            {
              v94 = v90[9];
              v95 = v90[10];
            }
            else
            {
              v96 = *((unsigned __int8 *)v90 + 72);
              v97 = v90;
              v98 = i;
              v99 = sub_14070DB70(v96, v92, v89);
              i = v98;
              v90 = v97;
              v89 = v220;
              v94 = v99;
            }
            if ( v95 < 0 )
            {
              v104 = 0;
              goto LABEL_115;
            }
            v221 = (__int64 (__fastcall **)())v95;
            if ( v95 )
              break;
            v220 = 1;
            v77 = v217;
LABEL_77:
            v117 = i[1];
            v118 = i[2];
            if ( v118 )
            {
              for ( j = 0; v118 != j; ++j )
              {
                v120 = *(_BYTE *)(v117 + j);
                if ( v120 > 0x1Fu )
                {
                  if ( v120 == 127 )
                    goto LABEL_90;
                }
                else if ( v120 != 9 )
                {
                  goto LABEL_90;
                }
              }
            }
            sub_141682400(&v185, v117);
            LOBYTE(v187) = 0;
            v204 = v187;
            v123 = _mm_loadu_si128(&v185);
            v203 = _mm_loadu_si128(&v186);
            v202 = v123;
            if ( v90[8] )
            {
              v124 = v90[9];
              v125 = v90[10];
            }
            else
            {
              v124 = sub_14070DB70(*((unsigned __int8 *)v90 + 72), v121, v122);
              v125 = v126;
            }
            v218 = 1;
            sub_14167D570(&v197, v124, v125);
            if ( (_BYTE)v197 )
            {
              v127 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v202.m128i_i64[0] + 32);
              v222 = 1;
              v127(&v203.m128i_u64[1], v202.m128i_i64[1], v203.m128i_i64[0]);
            }
            else
            {
              v206 = v198[1];
              v205 = v198[0];
              v209.m128i_i64[0] = v204;
              v128 = _mm_load_si128(&v202);
              v208 = _mm_load_si128(&v203);
              v207 = v128;
              v218 = 0;
              sub_140656870(v199, v184, &v205);
              v129 = _mm_loadu_si128((const __m128i *)&v199[16]);
              v130 = _mm_loadu_si128((const __m128i *)&v199[32]);
              v131 = _mm_loadu_si128((const __m128i *)&v199[48]);
              *(_OWORD *)v184 = *(_OWORD *)v199;
              *(__m128i *)&v184[16] = v129;
              *(__m128i *)&v184[32] = v130;
              *(__m128i *)&v184[48] = v131;
              *(_OWORD *)&v184[64] = *(_OWORD *)&v199[64];
              *(_OWORD *)&v184[80] = *(_OWORD *)&v199[80];
              *(__m128i *)&v184[96] = _mm_loadu_si128((const __m128i *)&v199[96]);
            }
LABEL_90:
            v108 = (unsigned __int64)v221;
            if ( v221 )
            {
              v132 = v220;
LABEL_92:
              sub_140001660(v132, v108, 1);
            }
            v88 = v215;
            v76 = v214;
            if ( v77 == 2 )
              goto LABEL_48;
LABEL_50:
            v89 = v220;
            if ( v88 >= v74 )
            {
              v228 = 1;
              v227 = 1;
              sub_14196B673(v88, v74, &off_141A42B18);
            }
            v90 = (_QWORD *)(v73 + 104 * v88);
            v215 = v88;
            if ( !v77 )
              goto LABEL_56;
            if ( v76 >= v75 )
            {
              v228 = 1;
              v227 = 1;
              sub_14196B673(v76, v75, &off_141A42B30);
            }
            v214 = v76;
            v88 = v188;
            v91 = v188 + 72 * v76;
            v92 = 2;
            if ( *(_BYTE *)(v91 + 16) )
            {
              v214 = *(_QWORD *)(v91 + 24);
              v92 = 1;
            }
          }
          v213 = v90;
          v100 = i;
          v212 = v75;
          v101 = v73;
          v102 = v74;
          v103 = v95;
          nullsub_1(v88, v95);
          v104 = 1;
          v105 = sub_140001650(v103, 1);
          if ( !v105 )
          {
            v89 = v103;
LABEL_115:
            v228 = 1;
            v227 = 1;
            sub_14196B2DB(v104, v89);
          }
          v220 = v105;
          sub_1419234B0(v105, v94, v103);
          if ( v103 < 8 )
          {
            v106 = 0;
            v74 = v102;
            v73 = v101;
            v75 = v212;
            v49 = (_OWORD *)v198;
            v107 = v220;
            v77 = v217;
            i = v100;
            v90 = v213;
            goto LABEL_95;
          }
          v108 = v103;
          v74 = v102;
          v77 = v217;
          i = v100;
          if ( v103 < 0x20 )
          {
            v106 = 0;
            v73 = v101;
            v75 = v212;
            v49 = (_OWORD *)v198;
            v107 = v220;
            v90 = v213;
LABEL_74:
            v114 = v106;
            v106 = v108 & 0x7FFFFFFFFFFFFFF8LL;
            do
            {
              v115 = _mm_loadl_epi64((const __m128i *)(v107 + v114));
              v116 = _mm_add_epi8(v115, v82);
              *(_QWORD *)(v107 + v114) = _mm_or_si128(
                                           _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v116, v83), v116), v84),
                                           v115).m128i_u64[0];
              v114 += 8;
            }
            while ( v106 != v114 );
            v108 = (unsigned __int64)v221;
            goto LABEL_96;
          }
          v106 = v103 & 0x7FFFFFFFFFFFFFE0LL;
          v109 = 0;
          v73 = v101;
          v107 = v220;
          v90 = v213;
          do
          {
            v110 = _mm_loadu_si128((const __m128i *)(v107 + v109));
            v111 = _mm_loadu_si128((const __m128i *)(v107 + v109 + 16));
            v112 = _mm_add_epi8(v110, v85);
            v113 = _mm_add_epi8(v111, v85);
            *(__m128i *)(v107 + v109) = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v112, v86), v112), v87),
                                          v110);
            *(__m128i *)(v107 + v109 + 16) = _mm_or_si128(
                                               _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v113, v86), v113), v87),
                                               v111);
            v109 += 32;
          }
          while ( v106 != v109 );
          v75 = v212;
          v49 = (_OWORD *)v198;
          if ( v108 != v106 )
          {
            if ( (v108 & 0x18) != 0 )
              goto LABEL_74;
            do
            {
LABEL_95:
              *(_BYTE *)(v107 + v106) |= 32 * ((unsigned __int8)(*(_BYTE *)(v107 + v106) - 65) < 0x1Au);
              v108 = (unsigned __int64)v221;
              ++v106;
LABEL_96:
              ;
            }
            while ( v108 != v106 );
          }
          switch ( v108 )
          {
            case 2uLL:
              if ( *(_WORD *)v107 != 25972 )
                goto LABEL_77;
              goto LABEL_113;
            case 7uLL:
              v108 = (unsigned __int64)v221;
              if ( *(_DWORD *)v107 ^ 0x72677075 | *(_DWORD *)(v107 + 3) ^ 0x65646172 )
                goto LABEL_77;
              goto LABEL_113;
            case 8uLL:
              if ( *(_QWORD *)v107 != 0x7372656C69617274LL )
                goto LABEL_77;
              goto LABEL_113;
            case 0xAuLL:
              if ( !(*(_QWORD *)v107 ^ 0x697463656E6E6F63LL | *(unsigned __int16 *)(v107 + 8) ^ 0x6E6FLL) )
                goto LABEL_113;
              v135 = *(_QWORD *)v107 ^ 0x696C612D7065656BLL;
              v136 = *(unsigned __int16 *)(v107 + 8) ^ 0x6576LL;
LABEL_112:
              if ( !(v135 | v136) )
                goto LABEL_113;
              goto LABEL_77;
            case 0xEuLL:
              v135 = *(_QWORD *)v107 ^ 0x2D746E65746E6F63LL;
              v136 = *(_QWORD *)(v107 + 6) ^ 0x6874676E656C2D74LL;
              v108 = (unsigned __int64)v221;
              goto LABEL_112;
            case 0x11uLL:
              v133 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v107), (__m128i)xmmword_141A34E20);
              v134 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v107 + 16)), (__m128i)xmmword_141A34E30);
              goto LABEL_105;
            case 0x12uLL:
              v133 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v107), si128);
              v134 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v107 + 16)), v79);
              goto LABEL_105;
            case 0x13uLL:
              v133 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v107), v81);
              v134 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v107 + 3)), v80);
LABEL_105:
              if ( _mm_movemask_epi8(_mm_and_si128(v134, v133)) != 0xFFFF )
                goto LABEL_77;
LABEL_113:
              v132 = v107;
              break;
            default:
              goto LABEL_77;
          }
          goto LABEL_92;
        }
        sub_1419234B0(v199, &v176, 136);
        v228 = 1;
        v227 = 0;
        v220 = sub_14107D110(v199);
        v221 = v138;
        v139 = v219;
        v140 = **(volatile signed __int64 ***)(v219 + 96);
        v141 = _InterlockedIncrement64(v140);
        if ( !((v141 < 0) ^ v137 | (v141 == 0)) )
        {
          v185.m128i_i64[0] = (__int64)v140;
          v50 = *(volatile signed __int64 **)(*(_QWORD *)(v139 + 96) + 8LL);
          v142 = _InterlockedIncrement64(v50);
          if ( !((v142 < 0) ^ v137 | (v142 == 0)) )
          {
            v202.m128i_i64[0] = (__int64)v50;
            v143 = *(_QWORD *)(v139 + 104);
            v225 = 1;
            sub_1416DB410(v199, v143);
            v197 = v140;
            v205.m128i_i64[0] = (__int64)v50;
            nullsub_1(v145, v144);
            v146 = sub_140001650(24, 8);
            if ( !v146 )
            {
              v217 = (__int64)v50;
              sub_14196B2C1(8, 24);
            }
            *(_QWORD *)v146 = 1;
            *(_QWORD *)(v146 + 8) = 1;
            *(_BYTE *)(v146 + 16) = 0;
            if ( *(_QWORD *)v199 == -1 )
            {
              v228 = 1;
              v227 = 0;
              sub_14196B5D0(&off_141A37B10);
            }
            *(_QWORD *)&v199[24] = &unk_141A39AF0;
            *(_QWORD *)&v199[32] = 32;
            *(_QWORD *)&v199[40] = v146;
            *(_QWORD *)&v199[48] = v50;
            *(_QWORD *)&v199[56] = v140;
            v199[64] = 0;
            *(_QWORD *)&v199[72] = v220;
            *(_QWORD *)&v199[80] = v221;
            nullsub_1(*(_QWORD *)v199, &unk_141A39AF0);
            v147 = sub_140001650(88, 8);
            if ( !v147 )
              sub_14196B2C1(8, 88);
            *(_QWORD *)(v147 + 80) = *(_QWORD *)&v199[80];
            *(_OWORD *)(v147 + 64) = *(_OWORD *)&v199[64];
            v148 = *(_OWORD *)v199;
            v149 = *(_OWORD *)&v199[16];
            v150 = *(_OWORD *)&v199[32];
            *(_OWORD *)(v147 + 48) = *(_OWORD *)&v199[48];
            *(_OWORD *)(v147 + 32) = v150;
            *(_OWORD *)(v147 + 16) = v149;
            *(_OWORD *)v147 = v148;
            if ( *(_QWORD *)v184 == -1 )
            {
              v220 = *(_QWORD *)(v147 + 72);
              v221 = (__int64 (__fastcall **)())v147;
              v217 = *(_QWORD *)(v147 + 80);
              if ( *(_QWORD *)v217 )
                (*(void (__fastcall **)(__int64))v217)(v220);
              v151 = *(_QWORD *)(v217 + 8);
              if ( v151 )
                sub_140001660(v220, v151, *(_QWORD *)(v217 + 16));
              sub_14069B920(v221);
              sub_140001660(v221, 88, 8);
              v228 = 0;
              v227 = 0;
              LOWORD(v152) = 500;
              sub_1407360F0((unsigned int)v199, v152, (unsigned int)aBuildStreaming, 27, (__int64)aProxyUpstream, 14);
              v48 = (__int64 (__fastcall **)())v200.m128i_i64[1];
            }
            else
            {
              *(_OWORD *)&v199[10] = *(_OWORD *)&v184[10];
              *(_OWORD *)&v199[26] = *(_OWORD *)&v184[26];
              *(_OWORD *)&v199[42] = *(_OWORD *)&v184[42];
              *(_OWORD *)&v199[58] = *(_OWORD *)&v184[58];
              *(_OWORD *)&v199[74] = *(_OWORD *)&v184[74];
              *(_OWORD *)&v199[90] = *(_OWORD *)&v184[90];
              *(_QWORD *)&v199[104] = *(_QWORD *)&v184[104];
              *(_QWORD *)v199 = *(_QWORD *)v184;
              *(_WORD *)&v199[8] = *(_WORD *)&v184[8];
              v200.m128i_i64[0] = v147;
              v48 = &off_141A37B58;
            }
            v153 = 0;
            LOBYTE(v50) = (unsigned __int16)v211 >= 0x64u;
            v196 = v200.m128i_i64[0];
            v195 = *(__m128i *)&v199[96];
            v194 = *(_OWORD *)&v199[80];
            v193 = *(_OWORD *)&v199[64];
            v192 = *(__m128i *)&v199[48];
            v191 = *(__m128i *)&v199[32];
            v190 = *(__m128i *)&v199[16];
            v189 = *(_OWORD *)v199;
            v224 = 0;
            sub_1400366B0(&v167);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v219 + 112)) )
              sub_141258070(v219 + 112);
            v154 = v219;
            *(_BYTE *)(v219 + 144) = 0;
            sub_1406C0ED0(v154);
            LOBYTE(v153) = (_BYTE)v50;
            v47 = 2 * v153 + 3;
            goto LABEL_41;
          }
        }
LABEL_140:
        BUG();
      }
      *(_QWORD *)a1 = -1;
      result = 3;
LABEL_42:
      *(_BYTE *)(v219 + 145) = result;
      return result;
    case 1LL:
      sub_14196B990(&off_141A39AD8);
    case 2LL:
      sub_14196B9B0(&off_141A39AD8);
    case 3LL:
      goto LABEL_14;
  }
}
