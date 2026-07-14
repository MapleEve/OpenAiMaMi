// A/B-level owner for test_relay_provider_stream; sha256=f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10; session <审计会话>; not gate promotion
char __fastcall test_relay_provider_stream_owner_sys(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm6
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  const __m128i *v9; // rdx
  __int64 v10; // r8
  char v11; // bl
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  const __m128i *v15; // rdx
  const __m128i *v16; // r14
  _BYTE *v17; // rsi
  const __m128i *v18; // r15
  unsigned __int64 v19; // rdi
  __m128i v20; // xmm6
  __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int8 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  const __m128i *v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  __int64 v31; // rdi
  __m128i v32; // xmm6
  __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // rdx
  const __m128i *v36; // rcx
  const __m128i *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  bool v48; // of
  __int64 v49; // r14
  __m128i v50; // xmm0
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rcx
  int v55; // eax
  int v56; // ebx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rsi
  __int64 v60; // r15
  unsigned __int64 v61; // r15
  unsigned __int64 v62; // rdi
  __int64 v63; // r12
  char v64; // r12
  char v65; // r15
  __int64 v66; // rdx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rsi
  _QWORD *v70; // r15
  __int64 v71; // rdx
  unsigned __int64 v72; // r14
  __int64 v73; // rdi
  __int64 v74; // r15
  __int64 v75; // r14
  PVOID v76; // rcx
  char v77; // al
  __int64 v78; // r15
  __int64 v79; // rsi
  __int64 v80; // r14
  __int64 v81; // rdi
  unsigned __int64 v82; // rbx
  int v83; // ebx
  int v84; // edi
  int v85; // edx
  int v86; // ecx
  unsigned int v87; // ecx
  _QWORD *v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // r14
  _QWORD *v91; // r15
  __int64 v92; // rdx
  const __m128i *v93; // rcx
  PVOID v94; // r13
  unsigned __int64 v95; // rdi
  __int64 v96; // rdx
  __m128i v97; // xmm0
  const __m128i *v98; // rcx
  char v99; // cl
  char result; // al
  const __m128i *v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rdx
  __m128i v104; // xmm0
  __m128i v105; // xmm0
  unsigned __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rbx
  __m128i v110; // xmm0
  __int64 v111; // rcx
  __m128i *v112; // rax
  __int64 v113; // rbx
  char *v114; // rcx
  char *v115; // r15
  __int64 v116; // rdi
  __int64 v117; // rdx
  __int8 v118; // si
  unsigned __int64 v119; // rbx
  __int64 *v120; // rdi
  unsigned __int64 v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // rdx
  _QWORD v124[4]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v125; // [rsp+50h] [rbp-30h]
  __int128 v126; // [rsp+60h] [rbp-20h]
  __m128i v127; // [rsp+70h] [rbp-10h] BYREF
  __m128i v128; // [rsp+80h] [rbp+0h] BYREF
  __int128 v129; // [rsp+90h] [rbp+10h]
  __int128 v130; // [rsp+A0h] [rbp+20h]
  __int128 v131; // [rsp+B0h] [rbp+30h]
  __int128 v132; // [rsp+C0h] [rbp+40h]
  __m128i v133; // [rsp+D0h] [rbp+50h]
  __int64 v134; // [rsp+E0h] [rbp+60h]
  __m128i v135; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v136; // [rsp+100h] [rbp+80h]
  __int128 v137; // [rsp+110h] [rbp+90h]
  __int64 v138; // [rsp+120h] [rbp+A0h]
  __int128 v139; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v140; // [rsp+138h] [rbp+B8h]
  __m128i v141; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v142; // [rsp+150h] [rbp+D0h]
  __int128 v143; // [rsp+160h] [rbp+E0h]
  __int64 v144; // [rsp+170h] [rbp+F0h]
  __int64 v145; // [rsp+178h] [rbp+F8h] BYREF
  char v146; // [rsp+180h] [rbp+100h]
  int v147; // [rsp+181h] [rbp+101h]
  __int16 v148; // [rsp+185h] [rbp+105h]
  char v149; // [rsp+187h] [rbp+107h]
  __m128i v150; // [rsp+188h] [rbp+108h]
  __int64 v151; // [rsp+198h] [rbp+118h]
  __m128i v152; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v153; // [rsp+1B0h] [rbp+130h]
  __int128 v154; // [rsp+1C0h] [rbp+140h]
  __int128 v155; // [rsp+1D0h] [rbp+150h]
  __int128 v156; // [rsp+1E0h] [rbp+160h]
  __m128i v157; // [rsp+1F0h] [rbp+170h]
  __int64 v158; // [rsp+200h] [rbp+180h]
  __int128 v159; // [rsp+210h] [rbp+190h] BYREF
  __int64 v160; // [rsp+220h] [rbp+1A0h]
  __int128 v161; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v162; // [rsp+238h] [rbp+1B8h]
  __m128i v163; // [rsp+240h] [rbp+1C0h]
  __int64 v164; // [rsp+250h] [rbp+1D0h]
  __int128 v165; // [rsp+260h] [rbp+1E0h]
  __int128 v166; // [rsp+270h] [rbp+1F0h]
  __int128 v167; // [rsp+280h] [rbp+200h]
  __int64 v168; // [rsp+290h] [rbp+210h]
  __int64 v169; // [rsp+2B0h] [rbp+230h]
  __int64 v170; // [rsp+2B8h] [rbp+238h]
  __m128i v171; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v172; // [rsp+2D0h] [rbp+250h]
  __int128 v173; // [rsp+2E0h] [rbp+260h]
  __int128 v174; // [rsp+2F0h] [rbp+270h]
  __int128 v175; // [rsp+300h] [rbp+280h]
  __m128i v176; // [rsp+310h] [rbp+290h]
  __int64 v177; // [rsp+320h] [rbp+2A0h]
  _BYTE v178[24]; // [rsp+330h] [rbp+2B0h] BYREF
  __m128i v179; // [rsp+350h] [rbp+2D0h]
  __int128 v180; // [rsp+360h] [rbp+2E0h]
  __int128 v181; // [rsp+370h] [rbp+2F0h]
  __int64 v182; // [rsp+380h] [rbp+300h]
  __m128i v183; // [rsp+390h] [rbp+310h] BYREF
  const __m128i *v184; // [rsp+3A0h] [rbp+320h]
  __int64 v185; // [rsp+3A8h] [rbp+328h]
  __int64 v186; // [rsp+3B0h] [rbp+330h]
  __m128i v187; // [rsp+3B8h] [rbp+338h]
  __int128 v188; // [rsp+3C8h] [rbp+348h]
  __int128 v189; // [rsp+3D8h] [rbp+358h]
  __int128 v190; // [rsp+3E8h] [rbp+368h]
  __int128 v191; // [rsp+3F8h] [rbp+378h]
  __m128i v192; // [rsp+408h] [rbp+388h]
  __int64 v193; // [rsp+418h] [rbp+398h]
  __int64 v194; // [rsp+428h] [rbp+3A8h]
  __int64 v195; // [rsp+430h] [rbp+3B0h]
  __m128i v196; // [rsp+438h] [rbp+3B8h] BYREF
  __int64 v197; // [rsp+448h] [rbp+3C8h]
  _BYTE v198[152]; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v199; // [rsp+4E8h] [rbp+468h]
  __int128 v200; // [rsp+4F8h] [rbp+478h]
  __m128i v201; // [rsp+508h] [rbp+488h]
  __m128i v202; // [rsp+518h] [rbp+498h]
  __m128i v203; // [rsp+528h] [rbp+4A8h]
  _QWORD *v204; // [rsp+538h] [rbp+4B8h]
  __int64 v205; // [rsp+540h] [rbp+4C0h]
  unsigned __int64 v206; // [rsp+548h] [rbp+4C8h]
  __int64 v207; // [rsp+550h] [rbp+4D0h]
  __int64 v208; // [rsp+558h] [rbp+4D8h]
  unsigned __int64 v209; // [rsp+560h] [rbp+4E0h]
  __int64 v210; // [rsp+568h] [rbp+4E8h]
  __int64 v211; // [rsp+570h] [rbp+4F0h]
  const __m128i *v212; // [rsp+578h] [rbp+4F8h]
  __m128i v213; // [rsp+580h] [rbp+500h]
  const __m128i *v214; // [rsp+590h] [rbp+510h]
  __int32 v215; // [rsp+598h] [rbp+518h]
  int v216; // [rsp+5A0h] [rbp+520h]
  char v217; // [rsp+5A4h] [rbp+524h]
  char v218; // [rsp+5A5h] [rbp+525h]
  __int64 v219; // [rsp+5C0h] [rbp+540h]
  __int64 v220; // [rsp+5C8h] [rbp+548h]
  __int64 v221; // [rsp+5D0h] [rbp+550h]
  const __m128i *v222; // [rsp+5D8h] [rbp+558h]
  const __m128i *v223; // [rsp+5E0h] [rbp+560h]
  const __m128i *v224; // [rsp+5E8h] [rbp+568h]
  const __m128i *v225; // [rsp+5F0h] [rbp+570h]
  const __m128i *v226; // [rsp+5F8h] [rbp+578h]
  __m128i v227; // [rsp+600h] [rbp+580h] BYREF
  _BYTE v228[80]; // [rsp+610h] [rbp+590h] BYREF
  __m128i v229; // [rsp+660h] [rbp+5E0h]
  __m128i v230; // [rsp+670h] [rbp+5F0h] BYREF
  const __m128i *v231; // [rsp+688h] [rbp+608h]
  const __m128i *v232; // [rsp+690h] [rbp+610h]
  const __m128i *v233; // [rsp+698h] [rbp+618h]
  const __m128i *v234; // [rsp+6A0h] [rbp+620h]
  _QWORD *v235; // [rsp+6A8h] [rbp+628h]
  __m128i v236; // [rsp+6B0h] [rbp+630h] BYREF
  __m128i v237; // [rsp+6C0h] [rbp+640h] BYREF
  __m128i v238; // [rsp+6D0h] [rbp+650h]
  __int128 v239; // [rsp+6E0h] [rbp+660h]
  _BYTE *v240; // [rsp+6F8h] [rbp+678h]
  unsigned __int64 v241; // [rsp+700h] [rbp+680h]
  const __m128i *v242; // [rsp+708h] [rbp+688h]
  const __m128i *v243; // [rsp+710h] [rbp+690h]
  unsigned __int64 v244; // [rsp+718h] [rbp+698h]
  unsigned __int64 v245; // [rsp+720h] [rbp+6A0h]
  unsigned __int64 v246; // [rsp+728h] [rbp+6A8h]
  __m128i v247; // [rsp+730h] [rbp+6B0h] BYREF
  __m128i v248; // [rsp+740h] [rbp+6C0h]
  __int64 v249; // [rsp+750h] [rbp+6D0h]
  const __m128i *v250; // [rsp+760h] [rbp+6E0h]
  char v251; // [rsp+76Eh] [rbp+6EEh] BYREF
  char v252; // [rsp+76Fh] [rbp+6EFh]
  __int64 v253; // [rsp+770h] [rbp+6F0h]
  PVOID Address; // [rsp+778h] [rbp+6F8h]
  const __m128i *v255; // [rsp+780h] [rbp+700h]
  __int64 v256; // [rsp+788h] [rbp+708h]
  const __m128i *v257; // [rsp+790h] [rbp+710h]
  __int64 v258; // [rsp+798h] [rbp+718h]
  char v259; // [rsp+7A7h] [rbp+727h]
  __int64 v260; // [rsp+7A8h] [rbp+728h]

  v260 = -2;
  v3 = a2;
  v4 = a1;
  v5 = *(unsigned __int8 *)(a1 + 11072);
  v258 = a1;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(a1 + 11073) = 257;
      *(_BYTE *)(a1 + 11075) = 1;
      v6 = a1 + 5728;
      sub_1412762D0((__m128i *)(a1 + 5728), (const __m128i *)(a1 + 392), 0x14D8u);
      switch ( *(_BYTE *)(v4 + 11056) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_176;
        case 2:
          goto LABEL_175;
        case 3:
          goto LABEL_11;
      }
    case 1LL:
      sub_1412ADB20(&off_141363680);
    case 2LL:
      sub_1412ADB40(&off_141363680);
    case 3LL:
      v6 = a1 + 5728;
      switch ( *(_BYTE *)(a1 + 11056) )
      {
        case 0:
LABEL_4:
          v7 = v4 + 6248;
          *(_QWORD *)v198 = aTestRelayProvi;
          *(_QWORD *)&v198[8] = 26;
          *(_QWORD *)&v198[16] = aManager_1;
          *(_QWORD *)&v198[24] = 7;
          v253 = v6;
          *(_QWORD *)&v198[32] = v6;
          *(_OWORD *)&v198[40] = (unsigned __int64)(v4 + 6248);
          v8 = sub_140419560((char *)(*(_QWORD *)(v4 + 6240) + 16LL), a2);
          Address = (PVOID)(v4 + 6248);
          if ( v8 )
            goto LABEL_7;
          sub_14127A550((__int64)&v183, (__int64)v198, (__int64)&v198[16]);
          v11 = v183.m128i_i8[0];
          if ( v183.m128i_i8[0] != 6 )
            goto LABEL_13;
          v8 = v183.m128i_i64[1];
LABEL_7:
          *(_QWORD *)v198 = aTestRelayProvi;
          *(_QWORD *)&v198[8] = 26;
          *(_QWORD *)&v198[16] = aProviderid_1;
          *(_QWORD *)&v198[24] = 10;
          *(_QWORD *)&v198[32] = v253;
          *(_OWORD *)&v198[40] = v7;
          refresh_usage_arg_extract_poll_sys((__int64)&v183, (__int64 *)v198);
          v11 = v183.m128i_i8[0];
          if ( v183.m128i_i8[0] == 6 )
          {
            v257 = (const __m128i *)v183.m128i_i64[1];
            v255 = v184;
            v12 = v185;
            *(_QWORD *)v198 = aTestRelayProvi;
            *(_QWORD *)&v198[8] = 26;
            *(_QWORD *)&v198[16] = aModel_5;
            *(_QWORD *)&v198[24] = 5;
            *(_QWORD *)&v198[32] = v253;
            *(_OWORD *)&v198[40] = v7;
            sub_1407D2750(&v183, v198);
            v11 = v183.m128i_i8[0];
            if ( v183.m128i_i8[0] == 6 )
            {
              v256 = v183.m128i_i64[1];
              v250 = v184;
              v13 = v185;
              *(_QWORD *)v198 = aTestRelayProvi;
              *(_QWORD *)&v198[8] = 26;
              *(_QWORD *)&v198[16] = aOnevent_0;
              *(_QWORD *)&v198[24] = 7;
              *(_QWORD *)&v198[32] = v253;
              *(_OWORD *)&v198[40] = v7;
              sub_1405B44C0(&v183, v198);
              v11 = v183.m128i_i8[0];
              if ( v183.m128i_i8[0] == 6 )
              {
                v14 = v183.m128i_i64[1];
                v4 = v258;
                v15 = (const __m128i *)(v258 + 6272);
                *(_QWORD *)(v258 + 6320) = v8;
                *(_QWORD *)(v4 + 6272) = v257;
                *(_QWORD *)(v4 + 6280) = v255;
                *(_QWORD *)(v4 + 6288) = v12;
                *(_QWORD *)(v4 + 6296) = v256;
                *(_QWORD *)(v4 + 6304) = v250;
                *(_QWORD *)(v4 + 6312) = v13;
                *(_QWORD *)(v4 + 6328) = v14;
                *(_BYTE *)(v4 + 7856) = 0;
                v16 = (const __m128i *)(v4 + 7864);
                sub_1412762D0((__m128i *)(v4 + 7864), v15, 0x638u);
                v17 = (_BYTE *)(v4 + 11048);
                *(_BYTE *)(v4 + 11048) = 0;
                v6 = v253;
LABEL_12:
                v18 = (const __m128i *)(v4 + 9456);
                sub_1412762D0((__m128i *)(v4 + 9456), v16, 0x638u);
                switch ( *(_BYTE *)(v4 + 11040) )
                {
                  case 0:
                    goto LABEL_18;
                  case 1:
                    goto LABEL_178;
                  case 2:
                    goto LABEL_177;
                  case 3:
                    goto LABEL_19;
                }
              }
              v72 = (unsigned __int64)((v183.m128i_u8[7] << 16)
                                     | (unsigned int)*(unsigned __int16 *)((char *)&v183.m128i_u16[2] + 1)) << 32;
              v73 = *(unsigned int *)((char *)v183.m128i_u32 + 1);
              v20 = _mm_loadu_si128((const __m128i *)&v183.m128i_u64[1]);
              v21 = v185;
              v22 = v253;
              if ( 2 * v256 )
              {
                v74 = v253;
                sub_140001370(v250, v256, 1);
                v22 = v74;
              }
              v19 = v72 | v73;
              v9 = v257;
              if ( v257 )
              {
                v75 = v22;
                sub_140001370(v255, v257, 1);
                v22 = v75;
              }
LABEL_15:
              sub_1409B5490(v22, v9, v10);
              v23 = 1;
              if ( __OFSUB__(0, *(_QWORD *)Address) )
              {
                v24 = v258;
LABEL_151:
                *(_BYTE *)(v24 + 11056) = 1;
                sub_1409890F0(v253);
                v147 = v19;
                v149 = BYTE6(v19);
                v148 = WORD2(v19);
                v151 = v21;
                v146 = v11;
                v150 = v20;
                v145 = v23;
                v116 = v258;
                *(_BYTE *)(v258 + 11075) = 0;
                sub_1412762D0((__m128i *)v198, (const __m128i *)v116, 0x168u);
                *(_BYTE *)(v116 + 11074) = 0;
                v117 = *(_QWORD *)(v116 + 384);
                *(_BYTE *)(v116 + 11073) = 0;
                v184 = *(const __m128i **)(v116 + 376);
                v183 = _mm_loadu_si128((const __m128i *)(v116 + 360));
                invoke_resolver_respond_sys(
                  (const __m128i *)v198,
                  v117,
                  (__int64)&v145,
                  (__int128 *)v183.m128i_i8,
                  *(_DWORD *)(v116 + 11064),
                  *(_DWORD *)(v116 + 11068));
                v99 = 1;
                result = 0;
                v49 = v258;
                goto LABEL_152;
              }
              v256 = v258 + 6256;
              v36 = *(const __m128i **)(v258 + 6256);
              v255 = *(const __m128i **)(v258 + 6264);
              v257 = nullptr;
              v250 = v36;
              while ( v255 != v257 )
              {
                v257 = (const __m128i *)((char *)v257 + 1);
                v37 = v36 + 6;
                sub_1401EEBE0();
                v36 = v37;
              }
              v38 = *(_QWORD *)Address;
              v23 = 1;
              v24 = v258;
              if ( !*(_QWORD *)Address )
                goto LABEL_151;
LABEL_150:
              sub_140001370(*(_QWORD *)v256, 96 * v38, 8);
              goto LABEL_151;
            }
            v19 = ((unsigned __int64)((v183.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v183.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v183.m128i_u32 + 1);
            v20 = _mm_loadu_si128((const __m128i *)&v183.m128i_u64[1]);
            v21 = v185;
            v9 = v257;
            if ( v257 )
              sub_140001370(v255, v257, 1);
          }
          else
          {
LABEL_13:
            v19 = ((unsigned __int64)((v183.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v183.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v183.m128i_u32 + 1);
            v20 = _mm_loadu_si128((const __m128i *)&v183.m128i_u64[1]);
            v21 = v185;
          }
          v22 = v253;
          goto LABEL_15;
        case 1:
LABEL_176:
          v253 = v6;
          sub_1412ADB20(&off_1413613C8);
        case 2:
LABEL_175:
          v253 = v6;
          sub_1412ADB40(&off_1413613C8);
        case 3:
LABEL_11:
          v17 = (_BYTE *)(v4 + 11048);
          v16 = (const __m128i *)(v4 + 7864);
          switch ( *(_BYTE *)(v4 + 11048) )
          {
            case 0:
              goto LABEL_12;
            case 1:
              v253 = v6;
              v220 = v4 + 11048;
              v219 = v4 + 7864;
              sub_1412ADB20(&off_141363708);
            case 2:
              v253 = v6;
              v220 = v4 + 11048;
              v219 = v4 + 7864;
              sub_1412ADB40(&off_141363708);
            case 3:
              v18 = (const __m128i *)(v4 + 9456);
              switch ( *(_BYTE *)(v4 + 11040) )
              {
                case 0:
LABEL_18:
                  v234 = v16;
                  v240 = v17;
                  v253 = v6;
                  v25 = *(_QWORD *)(v4 + 9504);
                  *(_QWORD *)(v4 + 9520) = v25;
                  *(__m128i *)(v4 + 9528) = *v18;
                  v250 = v18;
                  v26 = v18[1].m128i_i64[0];
                  *(_QWORD *)(v4 + 9544) = v26;
                  v16 = *(const __m128i **)(v4 + 9480);
                  v18 = *(const __m128i **)(v4 + 9488);
                  *(_QWORD *)(v4 + 9552) = *(_QWORD *)(v4 + 9512);
                  v27 = *(_QWORD *)(v4 + 9536);
                  *(_BYTE *)(v4 + 11041) = 0;
                  v28 = (const __m128i *)(v4 + 9560);
                  *(_OWORD *)(v4 + 9560) = *(_OWORD *)(v4 + 9480);
                  *(_QWORD *)(v4 + 9576) = *(_QWORD *)(v4 + 9496);
                  *(_QWORD *)(v4 + 9584) = v25;
                  *(_QWORD *)(v4 + 9592) = v27;
                  *(_QWORD *)(v4 + 9600) = v26;
                  *(_QWORD *)(v4 + 9608) = v4 + 9552;
                  *(_QWORD *)(v4 + 9616) = &off_1413628D0;
                  *(_BYTE *)(v4 + 11032) = 0;
                  v2 = _mm_unpacklo_epi64(
                         (__m128i)(unsigned __int64)(v4 + 9552),
                         (__m128i)(unsigned __int64)&off_1413628D0);
LABEL_21:
                  *(_QWORD *)(v4 + 9624) = v25;
                  *(_QWORD *)(v4 + 9632) = v27;
                  *(_QWORD *)(v4 + 9640) = v26;
                  *(_BYTE *)(v4 + 11033) = 1;
                  *(__m128i *)(v4 + 9648) = _mm_loadu_si128(v28);
                  *(_QWORD *)(v4 + 9664) = v28[1].m128i_i64[0];
                  v226 = v18;
                  v225 = v16;
                  v224 = v28;
                  sub_14026CC20(v198, v25, v27, v26);
                  v4 = v258;
                  v30 = v258 + 9632;
                  if ( __OFSUB__(-*(_QWORD *)v198, 1) )
                  {
                    v247.m128i_i64[0] = v258 + 9632;
                    v247.m128i_i64[1] = (__int64)sub_1405906F0;
                    v226 = v18;
                    v225 = v16;
                    v224 = v28;
                    sub_14108F360(&v227.m128i_u8[8], byte_1413624A7, (unsigned __int64)&v247);
                    v31 = v227.m128i_i64[1];
                    Address = *(PVOID *)v228;
                    v32 = _mm_loadu_si128((const __m128i *)&v228[8]);
                    v238 = *(__m128i *)&v228[56];
                    v165 = *(_OWORD *)&v228[24];
                    v166 = *(_OWORD *)&v228[40];
                    v167 = *(_OWORD *)&v228[56];
                    v168 = *(_QWORD *)&v228[72];
                    v182 = *(_QWORD *)&v228[72];
                    v181 = *(_OWORD *)&v228[56];
                    v180 = *(_OWORD *)&v228[40];
                    v179 = *(__m128i *)&v228[24];
                    v33 = 7;
                    v34 = v258;
                    v35 = *(_QWORD *)(v258 + 9648);
                    if ( !__OFSUB__(-v35, 1) )
                      goto LABEL_107;
                    goto LABEL_110;
                  }
                  v255 = v18;
                  v257 = v16;
                  v39 = *(_QWORD *)&v198[40];
                  v236 = *(__m128i *)&v198[48];
                  v237 = *(__m128i *)&v198[64];
                  v238 = *(__m128i *)&v198[80];
                  *(_QWORD *)&v239 = *(_QWORD *)&v198[96];
                  v230 = v203;
                  v229 = v202;
                  *(__m128i *)&v228[64] = v201;
                  *(_OWORD *)&v228[48] = v200;
                  *(_OWORD *)&v228[32] = v199;
                  *(_OWORD *)&v228[16] = *(_OWORD *)&v198[136];
                  *(_OWORD *)v228 = *(_OWORD *)&v198[120];
                  v227 = *(__m128i *)&v198[104];
                  v40 = v258 + 9672;
                  v41 = *(_OWORD *)&v198[8];
                  v42 = *(_OWORD *)&v198[24];
                  v168 = *(_QWORD *)&v198[96];
                  v167 = *(_OWORD *)&v198[80];
                  v166 = *(_OWORD *)&v198[64];
                  v165 = *(_OWORD *)&v198[48];
                  *(_QWORD *)(v258 + 9672) = *(_QWORD *)v198;
                  *(_OWORD *)(v4 + 9680) = v41;
                  *(_OWORD *)(v4 + 9696) = v42;
                  *(_QWORD *)(v4 + 9712) = v39;
                  v43 = v166;
                  v44 = v167;
                  *(_OWORD *)(v4 + 9720) = v165;
                  *(_OWORD *)(v4 + 9736) = v43;
                  *(_OWORD *)(v4 + 9752) = v44;
                  *(_QWORD *)(v4 + 9768) = v168;
                  v45 = *(_OWORD *)v228;
                  v46 = *(_OWORD *)&v228[16];
                  v47 = *(_OWORD *)&v228[32];
                  *(__m128i *)(v4 + 9776) = v227;
                  *(_OWORD *)(v4 + 9792) = v45;
                  *(_OWORD *)(v4 + 9808) = v46;
                  *(_OWORD *)(v4 + 9824) = v47;
                  *(_OWORD *)(v4 + 9840) = *(_OWORD *)&v228[48];
                  *(_OWORD *)(v4 + 9856) = *(_OWORD *)&v228[64];
                  *(__m128i *)(v4 + 9872) = v229;
                  *(__m128i *)(v4 + 9888) = _mm_load_si128(&v230);
                  v48 = __OFSUB__(0, *(_QWORD *)(v4 + 9648));
                  v256 = (__int64)v28;
                  if ( v48 )
                    goto LABEL_30;
                  v244 = v30;
                  *(_BYTE *)(v4 + 11033) = 0;
                  v248.m128i_i64[0] = *(_QWORD *)(v4 + 9664);
                  v247 = _mm_loadu_si128((const __m128i *)(v4 + 9648));
                  sub_14000F6C0(v198, v4 + 9672);
                  v16 = *(const __m128i **)&v198[8];
                  v58 = 32LL * *(_QWORD *)&v198[16];
                  v59 = *(_QWORD *)&v198[8] + 32LL * *(_QWORD *)&v198[16];
                  v236.m128i_i64[0] = *(_QWORD *)&v198[8];
                  __SET_PAIR__(v236.m128i_u64[1], v241, *(_OWORD *)v198);
                  v237.m128i_i64[0] = *(_QWORD *)v198;
                  v237.m128i_i64[1] = v59;
                  v60 = *(_QWORD *)&v198[8];
                  if ( !*(_QWORD *)&v198[16] )
                    goto LABEL_59;
                  v246 = v40;
                  v245 = v3;
                  v235 = (_QWORD *)(v258 + 9776);
                  Address = (PVOID)v247.m128i_i64[1];
                  v61 = v248.m128i_i64[0];
                  v62 = 0;
                  break;
                case 1:
LABEL_178:
                  v250 = v18;
                  v234 = v16;
                  v240 = v17;
                  JUMPOUT(0x140A307EFLL);
                case 2:
LABEL_177:
                  v250 = v18;
                  v234 = v16;
                  v240 = v17;
                  v253 = v6;
                  sub_1412ADB40(&off_141362900);
                case 3:
LABEL_19:
                  v29 = *(unsigned __int8 *)(v4 + 11032);
                  v28 = (const __m128i *)(v4 + 9560);
                  v253 = v6;
                  v240 = v17;
                  v234 = v16;
                  v250 = v18;
                  switch ( v29 )
                  {
                    case 0LL:
                      v25 = *(_QWORD *)(v4 + 9584);
                      v27 = *(_QWORD *)(v4 + 9592);
                      v26 = *(_QWORD *)(v4 + 9600);
                      v2 = _mm_loadu_si128((const __m128i *)(v4 + 9608));
                      goto LABEL_21;
                    case 1LL:
                      v221 = v4 + 9560;
                      sub_1412ADB20(&off_141362438);
                    case 2LL:
                      v221 = v4 + 9560;
                      sub_1412ADB40(&off_141362438);
                    case 3LL:
                      v256 = v4 + 9560;
                      goto LABEL_32;
                  }
              }
              break;
          }
          break;
      }
      break;
  }
  do
  {
    v63 = v16[v62 / 0x10].m128i_i64[0];
    v28 = (const __m128i *)v16[v62 / 0x10].m128i_i64[1];
    if ( v16[v62 / 0x10 + 1].m128i_i64[0] == v61
      && !(unsigned int)sub_141276960((unsigned __int64 *)v16[v62 / 0x10].m128i_i64[1], (__int64)Address, v61) )
    {
      if ( __OFSUB__(-v63, 1) )
        goto LABEL_43;
      v118 = v16[v62 / 0x10 + 1].m128i_i8[8];
      if ( v58 - 32 != v62 )
      {
        v119 = v58 - v62 - 32;
        v120 = &v16[v62 / 0x10 + 2].m128i_i64[1];
        v121 = v119 >> 5;
        do
        {
          v122 = *(v120 - 1);
          if ( v122 )
            sub_140001370(*v120, v122, 1);
          v120 += 4;
          --v121;
        }
        while ( v121 );
      }
      if ( v241 )
        sub_140001370(v16, 32 * v241, 8);
      v123 = *(_QWORD *)(v258 + 9768);
      v40 = v246;
      if ( v123 )
        sub_140001370(*v235, v123, 1);
      v4 = v258;
      *(_QWORD *)(v258 + 9768) = v63;
      *(_QWORD *)(v4 + 9776) = v28;
      *(_QWORD *)(v4 + 9784) = v61;
      *(_BYTE *)(v4 + 9902) = v118;
      if ( v247.m128i_i64[0] )
        sub_140001370(v247.m128i_i64[1], v247.m128i_i64[0], 1);
      v3 = v245;
LABEL_30:
      *(__m128i *)(v4 + 10896) = v2;
      *(_QWORD *)(v4 + 11016) = v40;
      *(_BYTE *)(v4 + 11026) = 0;
LABEL_32:
      Address = (PVOID)(v4 + 9904);
      sub_1409717F0((unsigned __int64 *)v198, (__int8 *)(v4 + 9904), v3);
      if ( __OFSUB__(0, *(_QWORD *)v198) )
      {
        v49 = v258;
        *(_BYTE *)(v258 + 11032) = 3;
        *(_BYTE *)(v49 + 11040) = 3;
        goto LABEL_122;
      }
      v50 = _mm_loadu_si128((const __m128i *)v198);
      v239 = *(_OWORD *)&v198[48];
      v238 = *(__m128i *)&v198[32];
      v237 = *(__m128i *)&v198[16];
      v236 = v50;
      v233 = v255;
      v232 = v257;
      v231 = (const __m128i *)v256;
      sub_140984DC0(Address);
      v52 = *(_QWORD *)(*(_QWORD *)(v258 + 9624) + 8LL);
      v53 = v52 + 16;
      LOBYTE(v54) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v52 + 16), 1, 0) )
        sub_1412ABCB0((volatile void *)(v52 + 16));
      if ( 2 * *off_141963EA8 )
      {
        v55 = sub_1412AC970(v54, v51);
        LOBYTE(v55) = v55 ^ 1;
        if ( !*(_BYTE *)(v52 + 17) )
        {
LABEL_38:
          LODWORD(v241) = v55;
          Address = (PVOID)(v52 + 16);
          v56 = *(_DWORD *)(v52 + 360);
          sub_140216C80(&v139, v52 + 24);
          sub_140217C50(&v227, v52 + 48);
          v164 = *(_QWORD *)v228;
          v163 = _mm_loadu_si128(&v227);
          LOBYTE(v53) = *(_BYTE *)(v52 + 146);
          LOWORD(v16) = *(_WORD *)(v52 + 144);
          sub_14108F780((unsigned __int64 *)&v196, v52 + 72);
          sub_14108F780((unsigned __int64 *)&v247, v52 + 96);
          if ( __OFSUB__(0, *(_QWORD *)(v52 + 120)) )
          {
            v57 = 0x8000000000000000uLL;
          }
          else
          {
            sub_14108F780((unsigned __int64 *)&v227, v52 + 120);
            v57 = v227.m128i_i64[0];
            *(__m128i *)v178 = _mm_loadu_si128((const __m128i *)&v227.m128i_u64[1]);
          }
          v228[58] = v53;
          *(_WORD *)&v228[56] = (_WORD)v16;
          v227 = v196;
          *(_QWORD *)v228 = v197;
          *(__m128i *)&v228[8] = v247;
          *(_QWORD *)&v228[24] = v248.m128i_i64[0];
          *(_QWORD *)&v228[32] = v57;
          *(__m128i *)&v228[40] = _mm_load_si128((const __m128i *)v178);
          v64 = *(_BYTE *)(v52 + 364);
          v65 = *(_BYTE *)(v52 + 365);
          sub_14108F780((unsigned __int64 *)&v161, v52 + 152);
          sub_14108F780((unsigned __int64 *)&v159, v52 + 176);
          if ( __OFSUB__(0, *(_QWORD *)(v52 + 200)) )
          {
            v67 = 0x8000000000000000uLL;
            goto LABEL_78;
          }
          v16 = *(const __m128i **)(v52 + 344);
          sub_14108F780((unsigned __int64 *)v178, v52 + 200);
          sub_14108F780((unsigned __int64 *)&v196, v52 + 224);
          v28 = (const __m128i *)0x8000000000000000LL;
          if ( __OFSUB__(0, *(_QWORD *)(v52 + 248)) )
          {
            v244 = 0x8000000000000000uLL;
            if ( __OFSUB__(0, *(_QWORD *)(v52 + 272)) )
              goto LABEL_55;
          }
          else
          {
            sub_14108F780((unsigned __int64 *)&v247, v52 + 248);
            v235 = (_QWORD *)v247.m128i_i64[1];
            v244 = v247.m128i_i64[0];
            v169 = v248.m128i_i64[0];
            if ( __OFSUB__(0, *(_QWORD *)(v52 + 272)) )
            {
LABEL_55:
              v245 = 0x8000000000000000uLL;
              if ( __OFSUB__(0, *(_QWORD *)(v52 + 296)) )
                goto LABEL_56;
              goto LABEL_75;
            }
          }
          sub_14108F780((unsigned __int64 *)&v247, v52 + 272);
          v194 = v247.m128i_i64[1];
          v245 = v247.m128i_i64[0];
          v170 = v248.m128i_i64[0];
          if ( __OFSUB__(0, *(_QWORD *)(v52 + 296)) )
          {
LABEL_56:
            v246 = 0x8000000000000000uLL;
            v2.m128i_i64[0] = *(_QWORD *)(v52 + 352);
            if ( __OFSUB__(0, *(_QWORD *)(v52 + 320)) )
              goto LABEL_77;
            goto LABEL_76;
          }
LABEL_75:
          sub_14108F780((unsigned __int64 *)&v247, v52 + 296);
          v195 = v247.m128i_i64[1];
          v246 = v247.m128i_i64[0];
          v53 = v248.m128i_i64[0];
          v2.m128i_i64[0] = *(_QWORD *)(v52 + 352);
          if ( __OFSUB__(0, *(_QWORD *)(v52 + 320)) )
          {
LABEL_77:
            v67 = *(_QWORD *)v178;
            v247 = *(__m128i *)&v178[8];
            v248 = _mm_loadu_si128(&v196);
            v249 = v197;
LABEL_78:
            v216 = v56;
            *(_QWORD *)&v198[16] = v140;
            *(_OWORD *)v198 = v139;
            *(_QWORD *)&v198[40] = v164;
            *(__m128i *)&v198[24] = v163;
            *(__m128i *)&v198[48] = v227;
            *(_OWORD *)&v198[64] = *(_OWORD *)v228;
            *(_OWORD *)&v198[80] = *(_OWORD *)&v228[16];
            *(_OWORD *)&v198[96] = *(_OWORD *)&v228[32];
            *(_OWORD *)&v198[112] = *(_OWORD *)&v228[48];
            v217 = v64;
            v218 = v65;
            *(_QWORD *)&v198[144] = v162;
            *(_OWORD *)&v198[128] = v161;
            *(_QWORD *)&v200 = v160;
            v199 = v159;
            *((_QWORD *)&v200 + 1) = v67;
            v203.m128i_i64[0] = v249;
            v201 = v247;
            v202 = v248;
            v203.m128i_i64[1] = v244;
            v204 = v235;
            v205 = v169;
            v206 = v245;
            v207 = v194;
            v208 = v170;
            v209 = v246;
            v210 = v195;
            v211 = v53;
            v212 = v28;
            v213 = _mm_load_si128(&v127);
            v214 = v16;
            v215 = v2.m128i_i32[0];
            if ( !(_BYTE)v241 )
            {
              if ( 2 * *off_141963EA8 )
              {
                v259 = 1;
                if ( !(unsigned __int8)sub_1412AC970(v160, v66) )
                  *(_BYTE *)(v52 + 17) = 1;
              }
            }
            v76 = Address;
            v77 = *(_BYTE *)Address;
            *(_BYTE *)Address = 0;
            if ( v77 == 2 )
            {
              v259 = 1;
              WakeByAddressSingle(v76);
            }
            v78 = v258;
            if ( *(_QWORD *)&v198[16] )
            {
              v79 = *(_QWORD *)&v198[8];
              v80 = 232LL * *(_QWORD *)&v198[16];
              v81 = *(_QWORD *)(v258 + 9632);
              v82 = *(_QWORD *)(v258 + 9640);
              while ( *(_QWORD *)(v79 + 16) != v82
                   || (unsigned int)sub_141276960(*(unsigned __int64 **)(v79 + 8), v81, v82) )
              {
                v79 += 232;
                v80 -= 232;
                if ( !v80 )
                  goto LABEL_93;
              }
              v83 = BYTE8(v239);
              v84 = v239;
              if ( __OFSUB__(0, v237.m128i_i64[1]) )
              {
                v227.m128i_i64[0] = 0x8000000000000000uLL;
              }
              else
              {
                v259 = 1;
                sub_14108F780((unsigned __int64 *)&v227, (__int64)&v237.m128i_i64[1]);
              }
              v252 = 1;
              sub_140BF2330(&v247);
              v85 = (v247.m128i_i32[0] >> 13) - 1;
              v86 = 0;
              if ( v247.m128i_i32[0] >> 13 <= 0 )
              {
                v87 = (1 - (v247.m128i_i32[0] >> 13)) / 0x190u + 1;
                v85 += 400 * v87;
                v86 = -146097 * v87;
              }
              v252 = 0;
              sub_14027CA20(
                v79,
                v83,
                v84,
                (unsigned int)&v227,
                1000
              * (v247.m128i_u32[1]
               + 86400LL
               * (((v85 / 100) >> 2)
                + ((1461 * v85) >> 2)
                + v86
                + (((unsigned __int32)v247.m128i_i32[0] >> 4) & 0x1FF)
                - v85 / 100
                - 719163))
              + v247.m128i_u32[2] / 0xF4240uLL);
              v78 = v258;
            }
LABEL_93:
            v88 = *(_QWORD **)(v78 + 9624);
            v259 = 0;
            sub_14027A5F0(&v227, v88, (const __m128i *)v198);
            v33 = v227.m128i_i64[0];
            if ( v227.m128i_i64[0] != 10 )
            {
              v31 = v227.m128i_i64[1];
              Address = *(PVOID *)v228;
              v32 = _mm_loadu_si128((const __m128i *)&v228[8]);
              v179 = *(__m128i *)&v228[24];
              v180 = *(_OWORD *)&v228[40];
              v181 = *(_OWORD *)&v228[56];
              v182 = *(_QWORD *)&v228[72];
              v34 = v258;
              v28 = (const __m128i *)v256;
              if ( !__OFSUB__(-v237.m128i_i64[1], 1) && v237.m128i_i64[1] )
                sub_140001370(v238.m128i_i64[0], v237.m128i_i64[1], 1);
              v89 = v236.m128i_i64[1];
              v90 = v237.m128i_i64[0];
              if ( v237.m128i_i64[0] )
              {
                v91 = (_QWORD *)(v236.m128i_i64[1] + 8);
                do
                {
                  v92 = *(v91 - 1);
                  if ( v92 )
                    sub_140001370(*v91, v92, 1);
                  v91 += 3;
                  --v90;
                }
                while ( v90 );
              }
              if ( v236.m128i_i64[0] )
                sub_140001370(v89, 24 * v236.m128i_i64[0], 8);
              v16 = v257;
              v18 = v255;
              goto LABEL_106;
            }
            Address = (PVOID)v236.m128i_i64[1];
            v31 = v236.m128i_i64[0];
            v32 = _mm_load_si128(&v237);
            v179 = v238;
            v180 = v239;
            v34 = v258;
            sub_14004AED0(v258 + 9672);
            v33 = 10;
            v16 = v257;
            v18 = v255;
            v28 = (const __m128i *)v256;
            goto LABEL_110;
          }
LABEL_76:
          sub_14108F780((unsigned __int64 *)&v247, v52 + 320);
          v28 = (const __m128i *)v247.m128i_i64[0];
          v127 = _mm_loadu_si128((const __m128i *)&v247.m128i_u64[1]);
          goto LABEL_77;
        }
      }
      else
      {
        v55 = 0;
        if ( !*(_BYTE *)(v52 + 17) )
          goto LABEL_38;
      }
      v227.m128i_i64[0] = v52 + 16;
      v227.m128i_i8[8] = v55;
      sub_1412AD780((__int64)aRelayStatePois_0, 20, (__int64)&v227, (__int64)&off_141363410, (__int64)&off_141362468);
    }
    if ( v63 )
      sub_140001370(v28, v63, 1);
LABEL_43:
    v62 += 32LL;
  }
  while ( v58 != v62 );
  v236.m128i_i64[1] = v59;
  v60 = v59;
LABEL_59:
  v227.m128i_i64[0] = (__int64)&v247;
  v227.m128i_i64[1] = (__int64)sub_140001000;
  *(_QWORD *)v228 = v244;
  *(_QWORD *)&v228[8] = sub_1405906F0;
  sub_14108F360(&v198[8], byte_141362480, (unsigned __int64)&v227);
  v31 = *(_QWORD *)&v198[8];
  Address = *(PVOID *)&v198[16];
  v32 = _mm_loadu_si128((const __m128i *)&v198[24]);
  v179 = *(__m128i *)&v198[40];
  v180 = *(_OWORD *)&v198[56];
  v181 = *(_OWORD *)&v198[72];
  v182 = *(_QWORD *)&v198[88];
  v68 = v59 - v60;
  v34 = v258;
  v28 = (const __m128i *)v256;
  if ( v68 )
  {
    v69 = v68 >> 5;
    v70 = (_QWORD *)(v60 + 8);
    do
    {
      v71 = *(v70 - 1);
      if ( v71 )
        sub_140001370(*v70, v71, 1);
      v70 += 4;
      --v69;
    }
    while ( v69 );
  }
  if ( v241 )
    sub_140001370(v16, 32 * v241, 8);
  v18 = v255;
  if ( v247.m128i_i64[0] )
    sub_140001370(v247.m128i_i64[1], v247.m128i_i64[0], 1);
  v33 = 9;
  v16 = v257;
LABEL_106:
  sub_14004AED0(v34 + 9672);
  v35 = *(_QWORD *)(v34 + 9648);
  if ( !__OFSUB__(-v35, 1) )
  {
LABEL_107:
    if ( *(_BYTE *)(v34 + 11033) == 1 && v35 )
      sub_140001370(*(_QWORD *)(v34 + 9656), v35, 1);
  }
LABEL_110:
  *(_BYTE *)(v34 + 11033) = 0;
  v138 = v182;
  v137 = v181;
  v136 = v180;
  v135 = v179;
  *(_BYTE *)(v34 + 11032) = 1;
  v141 = _mm_load_si128(&v135);
  v142 = v136;
  v143 = v137;
  v144 = v138;
  if ( v28[92].m128i_i8[0] == 3 )
  {
    v255 = v18;
    v257 = v16;
    v256 = (__int64)v28;
    sub_140984DC0(&v28[21].m128i_u64[1]);
    v101 = (const __m128i *)v256;
    sub_14004AED0(v256 + 112);
    v101[92].m128i_i8[1] = 0;
    v34 = v258;
    v16 = v257;
    v18 = v255;
    v93 = (const __m128i *)v32.m128i_i64[0];
    if ( (_DWORD)v33 == 10 )
      goto LABEL_116;
    goto LABEL_124;
  }
  if ( !v28[92].m128i_i8[0] && !__OFSUB__(-v28->m128i_i64[0], 1) && v28->m128i_i64[0] )
    sub_140001370(v28->m128i_i64[1], v28->m128i_i64[0], 1);
  v93 = (const __m128i *)v32.m128i_i64[0];
  if ( (_DWORD)v33 != 10 )
  {
LABEL_124:
    v255 = v18;
    v257 = v16;
    *(_QWORD *)v198 = v33;
    *(_QWORD *)&v198[8] = v31;
    *(_QWORD *)&v198[16] = Address;
    *(_QWORD *)&v198[24] = v93;
    *(_QWORD *)&v198[32] = _mm_shuffle_epi32(v32, 238).m128i_u64[0];
    *(__m128i *)&v198[40] = _mm_load_si128(&v141);
    *(_OWORD *)&v198[56] = v142;
    *(_OWORD *)&v198[72] = v143;
    *(_QWORD *)&v198[88] = v144;
    v236.m128i_i64[0] = 0;
    v236.m128i_i64[1] = 1;
    v237.m128i_i64[0] = 0;
    *(_QWORD *)v228 = 1610612768;
    v227.m128i_i64[0] = (__int64)&v236;
    v227.m128i_i64[1] = (__int64)&off_141363340;
    if ( (unsigned __int8)sub_1400603E0(v198, &v227) )
      sub_1412AD780((__int64)aADisplayImplem_11, 55, (__int64)&v251, (__int64)&unk_141363430, (__int64)&off_1413633F8);
    v256 = v236.m128i_i64[1];
    v94 = (PVOID)v236.m128i_i64[0];
    v21 = v237.m128i_i64[0];
    v18 = v255;
    v243 = v255;
    v16 = v257;
    v242 = v257;
    sub_1409B6100(v198);
    v34 = v258;
    goto LABEL_126;
  }
LABEL_116:
  v256 = (__int64)v93;
  v21 = _mm_shuffle_epi32(v32, 238).m128i_u64[0];
  v94 = Address;
  if ( __OFSUB__(-v31, 1) )
  {
LABEL_126:
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v34 + 9552)) )
    {
      v223 = v18;
      v222 = v16;
      sub_1404E9CE0(v258 + 9552);
    }
    v102 = v258;
    *(_BYTE *)(v258 + 11041) = 0;
    v103 = *(_QWORD *)(v102 + 9528);
    if ( v103 )
      sub_140001370(*(_QWORD *)(v102 + 9536), v103, 1);
    v158 = v177;
    v157 = v176;
    v156 = v175;
    v104 = _mm_load_si128(&v171);
    v155 = v174;
    v154 = v173;
    v153 = v172;
    v152 = v104;
    *(_BYTE *)(v102 + 11040) = 1;
    v95 = 0x8000000000000000uLL;
    v98 = v250;
LABEL_131:
    v134 = v158;
    v133 = v157;
    v132 = v156;
    v105 = _mm_load_si128(&v152);
    v131 = v155;
    v130 = v154;
    v129 = v153;
    v128 = v105;
    sub_1409840F0(v98);
    if ( !__OFSUB__(-(__int64)v95, 1) )
    {
      v193 = v134;
      v192 = v133;
      v191 = v132;
      v110 = _mm_load_si128(&v128);
      v190 = v131;
      v189 = v130;
      v188 = v129;
      v187 = v110;
      v183.m128i_i64[0] = v95;
      v183.m128i_i64[1] = (__int64)v94;
      v184 = (const __m128i *)v256;
      v185 = v21;
      v186 = v33;
      sub_140035530(v198, &v183);
      v106 = (unsigned __int64)((v198[15] << 16) | (unsigned int)*(unsigned __int16 *)&v198[13]) << 32;
      v19 = v106 | *(unsigned int *)&v198[9];
      v11 = v198[8];
      v20 = _mm_loadu_si128((const __m128i *)&v198[16]);
      v21 = *(_QWORD *)&v198[32];
      if ( *(_QWORD *)v198 == 0x8000000000000025uLL )
      {
        v23 = 0;
      }
      else
      {
        v198[15] = (v106 | *(unsigned int *)&v198[9]) >> 48;
        *(_WORD *)&v198[13] = WORD2(v19);
        *(_DWORD *)&v198[9] |= v106;
        *(__m128i *)&v198[16] = v20;
        v171.m128i_i64[0] = 0;
        v171.m128i_i64[1] = 1;
        *(_QWORD *)&v172 = 0;
        *(_QWORD *)v228 = 1610612768;
        v227.m128i_i64[0] = (__int64)&v171;
        v227.m128i_i64[1] = (__int64)&off_141363340;
        if ( (unsigned __int8)sub_140E156C0((__int64)v198, &v227) )
          sub_1412AD780(
            (__int64)aADisplayImplem_11,
            55,
            (__int64)&v251,
            (__int64)&unk_141363430,
            (__int64)&off_1413633F8);
        v20 = _mm_load_si128(&v171);
        v21 = v172;
        sub_1409AF240(v198);
        v23 = 1;
        v11 = 3;
      }
      v111 = v253;
LABEL_145:
      *v240 = 1;
      sub_1409B5490(v111, v106, v108);
      v24 = v258;
      if ( __OFSUB__(0, *(_QWORD *)(v258 + 6248)) )
        goto LABEL_151;
      v256 = v258 + 6256;
      v114 = *(char **)(v258 + 6256);
      v255 = *(const __m128i **)(v258 + 6264);
      v257 = nullptr;
      Address = v114;
      while ( v255 != v257 )
      {
        v257 = (const __m128i *)((char *)v257 + 1);
        v115 = v114 + 96;
        sub_1401EEBE0();
        v114 = v115;
      }
      v24 = v258;
      v38 = *(_QWORD *)(v258 + 6248);
      if ( !v38 )
        goto LABEL_151;
      goto LABEL_150;
    }
    if ( v21 < 0 )
    {
      v109 = 0;
      goto LABEL_134;
    }
    if ( v21 )
    {
      nullsub_1(v107, v106);
      v109 = 1;
      v112 = (__m128i *)sub_140001360(v21, 1);
      if ( !v112 )
      {
LABEL_134:
        Address = v94;
        sub_1412AD46B(v109, v21);
      }
      v19 = (unsigned __int64)v112;
      sub_1412762D0(v112, (const __m128i *)v256, v21);
      v111 = v253;
      if ( !v94 )
        goto LABEL_144;
    }
    else
    {
      v19 = 1;
      v111 = v253;
      if ( !v94 )
        goto LABEL_144;
    }
    v113 = v111;
    sub_140001370(v256, v94, 1);
    v111 = v113;
LABEL_144:
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)v19);
    v23 = 1;
    v11 = 3;
    goto LABEL_145;
  }
  v126 = v142;
  v125 = _mm_load_si128(&v141);
  v124[0] = v31;
  v124[1] = Address;
  v124[2] = v256;
  v124[3] = v21;
  v243 = v18;
  v242 = v16;
  sub_14001BEF0(v198, v124);
  v94 = *(PVOID *)&v198[8];
  v95 = *(_QWORD *)v198;
  v21 = *(_QWORD *)&v198[24];
  v256 = *(_QWORD *)&v198[16];
  v33 = *(_QWORD *)&v198[32];
  v171 = *(__m128i *)&v198[40];
  v172 = *(_OWORD *)&v198[56];
  v173 = *(_OWORD *)&v198[72];
  v174 = *(_OWORD *)&v198[88];
  v175 = *(_OWORD *)&v198[104];
  v176 = _mm_loadu_si128((const __m128i *)&v198[120]);
  v177 = *(_QWORD *)&v198[136];
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v258 + 9552)) )
  {
    v223 = v18;
    v222 = v16;
    sub_1404E9CE0(v258 + 9552);
  }
  v49 = v258;
  *(_BYTE *)(v258 + 11041) = 0;
  v96 = *(_QWORD *)(v49 + 9528);
  if ( v96 )
    sub_140001370(*(_QWORD *)(v49 + 9536), v96, 1);
  v158 = v177;
  v157 = v176;
  v156 = v175;
  v97 = _mm_load_si128(&v171);
  v155 = v174;
  v154 = v173;
  v153 = v172;
  v152 = v97;
  *(_BYTE *)(v49 + 11040) = 1;
  v98 = v250;
  if ( v95 != 0x8000000000000001uLL )
    goto LABEL_131;
LABEL_122:
  *(_BYTE *)(v49 + 11048) = 3;
  *(_BYTE *)(v49 + 11056) = 3;
  v99 = 3;
  result = 1;
LABEL_152:
  *(_BYTE *)(v49 + 11072) = v99;
  return result;
}