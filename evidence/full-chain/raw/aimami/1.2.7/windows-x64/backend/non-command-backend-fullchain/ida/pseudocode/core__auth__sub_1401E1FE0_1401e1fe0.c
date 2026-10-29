// win 1.2.7 | module src/core/auth.rs | ea 0x1401e1fe0 | name sub_1401E1FE0 (via content-string anchor xref)
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
char *__fastcall sub_1401E1FE0(_QWORD *a1, _QWORD *a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *result; // rax
  __int64 v11; // rsi
  __m128i *v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int128 v16; // kr10_16
  __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // r12
  _DWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // rbx
  void *v34; // rsi
  __int128 v35; // kr30_16
  __int64 v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  _QWORD *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // r12
  __int64 v50; // rsi
  _QWORD *v51; // r13
  void *v52; // rdi
  _QWORD *v53; // rax
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  __int64 v57; // rdx
  __int64 v58; // rsi
  _QWORD *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // rax
  _QWORD *v63; // rdx
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm2
  _QWORD *v67; // rcx
  _QWORD *v68; // rdx
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  _QWORD *v74; // rax
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm2
  __int64 v78; // rcx
  _QWORD *v79; // r9
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  unsigned __int128 v83; // kr00_16
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int128 v86; // kr90_16
  __int64 v87; // rbx
  __int64 v88; // r15
  __int128 v89; // rdi
  __int64 v90; // rax
  void *v91; // rsi
  char v92; // cl
  __m128 v93; // xmm0
  __int64 v94; // rdx
  char v95; // r8
  __int64 v96; // r12
  __int64 v97; // rbx
  __m128i *v98; // r15
  __int64 v99; // r13
  int v100; // edx
  __int128 v101; // xmm0
  unsigned __int64 v102; // rdi
  unsigned __int64 v103; // rax
  __int64 v104; // r15
  __int64 v105; // r14
  __int64 v106; // rsi
  __int64 v107; // r12
  __int64 v108; // rbx
  __int64 v109; // r13
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r12
  __int64 v113; // r8
  __int64 v114; // r15
  __int128 v115; // xmm6
  __int128 v116; // xmm7
  __int64 v117; // r14
  unsigned int v118; // r12d
  int v119; // r15d
  unsigned int v120; // eax
  __int64 v121; // rbx
  __int64 v122; // rsi
  char v123; // r12
  __int64 v124; // r14
  __int64 v125; // r15
  __int64 v126; // rbx
  __int64 v127; // rsi
  unsigned __int64 v128; // rbx
  __m128i *v129; // rdi
  __int128 *v130; // rcx
  __int64 v131; // rbx
  __int32 v132; // r13d
  __int64 v133; // rax
  __int64 v134; // rsi
  char v135; // bl
  int v136; // r9d
  __int64 v137; // rbx
  int v138; // esi
  int v139; // edi
  int v140; // eax
  __int64 v141; // rdi
  __int64 v142; // r14
  int v143; // edi
  __int128 v144; // xmm0
  _QWORD *v145; // rax
  __m128i v146; // xmm1
  __int128 v147; // xmm2
  __int128 v148; // xmm3
  __int64 v149; // rax
  __int64 v150; // rsi
  _QWORD *v151; // rdi
  __int64 v152; // rdx
  _OWORD *v153; // rax
  __int128 v154; // xmm0
  __int128 v155; // xmm1
  __int128 v156; // xmm2
  __int64 v157; // rbx
  __int128 v158; // xmm6
  __int128 v159; // xmm7
  __int64 v160; // rsi
  __int64 v161; // r14
  __int64 v162; // r15
  __int64 v163; // rax
  __int128 *v164; // rcx
  __int64 v165; // rax
  __int128 v166; // [rsp+50h] [rbp-30h] BYREF
  __int128 v167; // [rsp+60h] [rbp-20h]
  __int128 v168; // [rsp+70h] [rbp-10h]
  __int128 v169; // [rsp+80h] [rbp+0h]
  __int128 v170; // [rsp+90h] [rbp+10h]
  __int64 v171; // [rsp+A0h] [rbp+20h]
  __m128i v172; // [rsp+B0h] [rbp+30h]
  __m128i v173; // [rsp+C0h] [rbp+40h]
  __int128 v174; // [rsp+D0h] [rbp+50h]
  __int128 v175; // [rsp+E0h] [rbp+60h]
  _QWORD v176[3]; // [rsp+F0h] [rbp+70h] BYREF
  _QWORD v177[3]; // [rsp+108h] [rbp+88h] BYREF
  __m128i v178; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v179; // [rsp+130h] [rbp+B0h]
  _QWORD v180[2]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v181; // [rsp+1E0h] [rbp+160h]
  __m128i v182; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v183; // [rsp+200h] [rbp+180h] BYREF
  __int128 v184; // [rsp+210h] [rbp+190h] BYREF
  __int128 v185; // [rsp+220h] [rbp+1A0h]
  void *v186; // [rsp+230h] [rbp+1B0h]
  __int64 v187; // [rsp+238h] [rbp+1B8h]
  __int64 v188; // [rsp+240h] [rbp+1C0h]
  __int64 v189; // [rsp+248h] [rbp+1C8h]
  __int64 v190; // [rsp+250h] [rbp+1D0h]
  __int128 v191; // [rsp+258h] [rbp+1D8h]
  __int64 v192; // [rsp+268h] [rbp+1E8h]
  __int128 v193; // [rsp+270h] [rbp+1F0h]
  __int64 v194; // [rsp+280h] [rbp+200h]
  __int64 v195; // [rsp+288h] [rbp+208h]
  __int64 v196; // [rsp+290h] [rbp+210h]
  char v197; // [rsp+298h] [rbp+218h] BYREF
  char v198; // [rsp+29Ah] [rbp+21Ah] BYREF
  __int64 v199; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v200; // [rsp+458h] [rbp+3D8h] BYREF
  __int128 v201; // [rsp+468h] [rbp+3E8h]
  __m128i v202; // [rsp+478h] [rbp+3F8h]
  __m128i v203; // [rsp+488h] [rbp+408h]
  __int128 v204; // [rsp+498h] [rbp+418h]
  __int128 v205; // [rsp+4A8h] [rbp+428h]
  __int128 v206; // [rsp+500h] [rbp+480h] BYREF
  __int128 v207; // [rsp+510h] [rbp+490h]
  __int128 v208; // [rsp+520h] [rbp+4A0h] BYREF
  __int128 v209; // [rsp+530h] [rbp+4B0h]
  _BYTE v210[40]; // [rsp+540h] [rbp+4C0h]
  __int128 v211; // [rsp+568h] [rbp+4E8h]
  __int128 v212; // [rsp+578h] [rbp+4F8h]
  __int128 v213; // [rsp+588h] [rbp+508h]
  __m256i v214; // [rsp+598h] [rbp+518h]
  __int128 v215; // [rsp+5B8h] [rbp+538h]
  __int64 v216; // [rsp+5C8h] [rbp+548h]
  __int128 v217; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v218; // [rsp+5E0h] [rbp+560h]
  __int128 v219; // [rsp+5F0h] [rbp+570h]
  __int128 v220; // [rsp+600h] [rbp+580h]
  __int128 v221; // [rsp+610h] [rbp+590h]
  __int64 v222; // [rsp+620h] [rbp+5A0h]
  _BYTE v223[104]; // [rsp+630h] [rbp+5B0h] BYREF
  __int128 v224; // [rsp+698h] [rbp+618h]
  __m256i v225; // [rsp+6A8h] [rbp+628h]
  __int128 v226; // [rsp+6C8h] [rbp+648h]
  _QWORD v227[57]; // [rsp+6D8h] [rbp+658h] BYREF
  __m128i v228; // [rsp+8A0h] [rbp+820h] BYREF
  __int128 v229; // [rsp+8B0h] [rbp+830h]
  __int128 v230; // [rsp+8C0h] [rbp+840h]
  __int128 v231; // [rsp+8D0h] [rbp+850h]
  __int128 v232; // [rsp+8E0h] [rbp+860h]
  __int128 v233; // [rsp+8F0h] [rbp+870h]
  __m128i *v234; // [rsp+958h] [rbp+8D8h]
  __int128 v235; // [rsp+960h] [rbp+8E0h] BYREF
  __int64 v236; // [rsp+970h] [rbp+8F0h]
  __int64 v237; // [rsp+978h] [rbp+8F8h]
  __int64 v238; // [rsp+980h] [rbp+900h]
  __int64 v239; // [rsp+988h] [rbp+908h]
  _BYTE v240[104]; // [rsp+990h] [rbp+910h] BYREF
  __m128i v241; // [rsp+A40h] [rbp+9C0h] BYREF
  __m128i v242; // [rsp+A50h] [rbp+9D0h]
  __int128 v243; // [rsp+A60h] [rbp+9E0h]
  __int128 v244; // [rsp+A70h] [rbp+9F0h]
  __m128i v245; // [rsp+A80h] [rbp+A00h] BYREF
  __int64 v246; // [rsp+A90h] [rbp+A10h]
  __int64 v247; // [rsp+A98h] [rbp+A18h] BYREF
  __int64 v248; // [rsp+AA0h] [rbp+A20h]
  unsigned __int64 v249; // [rsp+AA8h] [rbp+A28h]
  __m128i v250; // [rsp+AB0h] [rbp+A30h]
  __m128i v251; // [rsp+AC0h] [rbp+A40h]
  __int128 v252; // [rsp+AD0h] [rbp+A50h] BYREF
  __int128 v253; // [rsp+AE0h] [rbp+A60h]
  __m128i *v254; // [rsp+AF0h] [rbp+A70h]
  _DWORD v255[2]; // [rsp+AF8h] [rbp+A78h]
  _BYTE v256[120]; // [rsp+B00h] [rbp+A80h] BYREF
  __m256i v257; // [rsp+B78h] [rbp+AF8h]
  __int128 v258; // [rsp+B98h] [rbp+B18h]
  __int64 v259; // [rsp+BA8h] [rbp+B28h]
  __int128 v260; // [rsp+BC0h] [rbp+B40h]
  __int64 v261; // [rsp+BD0h] [rbp+B50h]
  __m128i v262; // [rsp+BD8h] [rbp+B58h]
  __int64 v263; // [rsp+BE8h] [rbp+B68h]
  __int64 v264; // [rsp+BF0h] [rbp+B70h]
  __int64 v265; // [rsp+BF8h] [rbp+B78h]
  __int64 v266; // [rsp+C00h] [rbp+B80h]
  __int64 v267; // [rsp+C08h] [rbp+B88h]
  __int64 v268; // [rsp+C10h] [rbp+B90h]
  __int64 v269; // [rsp+C18h] [rbp+B98h]
  __m128i v270; // [rsp+C20h] [rbp+BA0h]
  __int64 v271; // [rsp+C30h] [rbp+BB0h]
  __m128i v272; // [rsp+C38h] [rbp+BB8h]
  __int64 v273; // [rsp+C48h] [rbp+BC8h]
  __int64 v274; // [rsp+C50h] [rbp+BD0h]
  __int64 v275; // [rsp+C58h] [rbp+BD8h]
  __int128 v276; // [rsp+C60h] [rbp+BE0h]
  __int64 v277; // [rsp+C70h] [rbp+BF0h]
  __int128 v278; // [rsp+C78h] [rbp+BF8h]
  __int64 v279; // [rsp+C88h] [rbp+C08h]
  __int64 v280; // [rsp+C90h] [rbp+C10h]
  __int64 v281; // [rsp+C98h] [rbp+C18h]
  int v282; // [rsp+CA0h] [rbp+C20h]
  HANDLE v283; // [rsp+D78h] [rbp+CF8h] BYREF
  __int64 v284; // [rsp+D80h] [rbp+D00h]
  __int64 v285; // [rsp+D88h] [rbp+D08h]
  int v286; // [rsp+D94h] [rbp+D14h]
  HANDLE v287; // [rsp+D98h] [rbp+D18h] BYREF
  unsigned __int64 v288; // [rsp+DA0h] [rbp+D20h]
  __int64 v289; // [rsp+DA8h] [rbp+D28h]
  __int64 v290; // [rsp+DB0h] [rbp+D30h]
  __int64 v291; // [rsp+DB8h] [rbp+D38h]
  __int64 v292; // [rsp+DC0h] [rbp+D40h] BYREF
  __int128 v293; // [rsp+DC8h] [rbp+D48h]
  __int64 v294; // [rsp+DD8h] [rbp+D58h]
  __int64 v295; // [rsp+DE0h] [rbp+D60h]
  __int64 v296; // [rsp+DE8h] [rbp+D68h]
  __m128i v297; // [rsp+DF0h] [rbp+D70h]
  __m128i v298; // [rsp+E00h] [rbp+D80h]
  __int128 v299; // [rsp+E10h] [rbp+D90h]
  __int128 v300; // [rsp+E20h] [rbp+DA0h]
  __int64 v301; // [rsp+E38h] [rbp+DB8h]
  __int64 v302; // [rsp+E40h] [rbp+DC0h]
  unsigned __int64 v303; // [rsp+E48h] [rbp+DC8h]
  __int64 v304; // [rsp+E50h] [rbp+DD0h]
  __int64 v305; // [rsp+E58h] [rbp+DD8h]
  __int64 v306; // [rsp+E60h] [rbp+DE0h]
  __int64 v307; // [rsp+E68h] [rbp+DE8h]
  _QWORD *v308; // [rsp+E70h] [rbp+DF0h]
  __int64 v309; // [rsp+E78h] [rbp+DF8h]
  _QWORD *v310; // [rsp+E80h] [rbp+E00h]
  __int64 v311; // [rsp+E88h] [rbp+E08h]
  __int64 v312; // [rsp+E90h] [rbp+E10h]
  __int64 v313; // [rsp+E98h] [rbp+E18h]
  __int64 v314; // [rsp+EA0h] [rbp+E20h]
  __int64 v315; // [rsp+EA8h] [rbp+E28h]
  char v316; // [rsp+EB4h] [rbp+E34h]
  char v317; // [rsp+EB5h] [rbp+E35h]
  char v318; // [rsp+EB6h] [rbp+E36h]
  char v319; // [rsp+EB7h] [rbp+E37h]
  HANDLE hObject; // [rsp+EB8h] [rbp+E38h]
  __int64 v321; // [rsp+EC0h] [rbp+E40h]
  char v322; // [rsp+ECFh] [rbp+E4Fh]
  __int64 v323; // [rsp+ED0h] [rbp+E50h]
  char v324; // [rsp+EDCh] [rbp+E5Ch]
  _BYTE v325[3]; // [rsp+EDDh] [rbp+E5Dh] BYREF
  char v326; // [rsp+EE0h] [rbp+E60h]
  char v327; // [rsp+EE1h] [rbp+E61h]
  char v328; // [rsp+EE2h] [rbp+E62h]
  char v329; // [rsp+EE3h] [rbp+E63h]
  char v330; // [rsp+EE4h] [rbp+E64h]
  char v331; // [rsp+EE5h] [rbp+E65h]
  char v332; // [rsp+EE6h] [rbp+E66h]
  unsigned __int8 v333; // [rsp+EE7h] [rbp+E67h]
  __int64 v334; // [rsp+EE8h] [rbp+E68h]

  v334 = -2;
  result = (char *)sub_1401B6D70(a2);
  if ( result )
  {
    a1[1] = 2;
    a1[2] = result;
    *a1 = -1;
    return result;
  }
  v333 = a3;
  v237 = a4;
  v308 = a1;
  v11 = a2[41];
  v301 = a2[42];
  v12 = &v183;
  v288 = a2[33];
  v310 = a2;
  v323 = a2[34];
  v13 = 0;
  v295 = v11;
  while ( 2 )
  {
    v303 = v13;
    v14 = v301;
    sub_141695A00(v256, v11, v301);
    if ( *(_DWORD *)v256 == 2 )
    {
      if ( (v256[8] & 3u) - 2 >= 2 && (v256[8] & 3) != 0 )
      {
        --*(_QWORD *)&v256[8];
        v256[0] = 3;
        sub_1416BCB00(&v256[8]);
      }
      v15 = 0;
      v16 = 8u;
      goto LABEL_41;
    }
    v199 = 0;
    v200 = 8u;
    sub_141695AF0(v256, v11, v14);
    v17 = *(_QWORD *)&v256[8];
    v18 = *(_QWORD *)v256;
    if ( *(_QWORD *)v256 == 2 )
    {
      v23 = 2;
      v58 = *((_QWORD *)&v200 + 1);
      if ( *((_QWORD *)&v200 + 1) )
        goto LABEL_99;
      goto LABEL_115;
    }
    sub_1418F44E0((__m128i *)&v223[16], (const __m128i *)&v256[16], 0x260u);
    *(_OWORD *)v223 = __PAIR128__(v17, v18);
    while ( 1 )
    {
      sub_1416A31D0(v256, v223);
      if ( *(_DWORD *)v256 != 1 )
        break;
      v19 = *(_QWORD *)&v256[8];
      v17 = *(_QWORD *)&v256[16];
      if ( !*(_QWORD *)&v256[8] )
      {
        v23 = 2;
        goto LABEL_94;
      }
      sub_1418F44E0(&v183, (const __m128i *)&v256[24], 0x248u);
      v182.m128i_i64[0] = v19;
      v182.m128i_i64[1] = v17;
      sub_14168A660(&v178, &v182);
      v20 = v179;
      v327 = 1;
      v321 = v178.m128i_i64[1];
      v21 = (_DWORD *)sub_141682BC0(v178.m128i_i64[1], v179);
      if ( v21 == nullptr || v22 != 4 || *v21 != 1852797802 )
        goto LABEL_16;
      if ( (v182.m128i_i16[4] & 0x400) != 0 )
      {
        if ( !(v182.m128i_i8[8] & 0x10 | HIDWORD(v184) & 0x20000000) )
          goto LABEL_22;
LABEL_26:
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v247 = v321;
          v248 = v20;
          v228.m128i_i64[0] = (__int64)&v247;
          v228.m128i_i64[1] = (__int64)sub_14169F630;
          *(_QWORD *)&v240[48] = 2;
          *(_QWORD *)&v240[56] = aCodexmateLibCo_21;
          *(_QWORD *)&v240[64] = 31;
          *(_QWORD *)&v240[80] = &unk_1419DAB5F;
          *(_QWORD *)&v240[88] = &v228;
          *(_QWORD *)v240 = 0;
          *(_QWORD *)&v240[8] = aCodexmateLibCo_21;
          *(_OWORD *)&v240[16] = 0x1Fu;
          *(_QWORD *)&v240[32] = aSrcCoreReposit;
          *(_QWORD *)&v240[40] = 22;
          *(_QWORD *)&v240[72] = 0x49B00000001LL;
          v327 = 1;
          sub_1414D53A0(v325, v240);
        }
LABEL_16:
        if ( v178.m128i_i64[0] )
          sub_140001660(v321, v178.m128i_i64[0], 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v182.m128i_i64[0]) )
          goto LABEL_19;
      }
      else
      {
        if ( (v182.m128i_i8[8] & 0x10) != 0 )
          goto LABEL_26;
LABEL_22:
        v327 = 1;
        sub_140ED9AE0((unsigned int)v240, v321, v20, v295, v301);
        if ( *(_DWORD *)v240 == -1 )
        {
          v327 = 1;
          sub_141695550(v240, v321, v20);
          if ( *(_DWORD *)v240 == 2 )
          {
            v228.m128i_i64[0] = 2;
            v228.m128i_i64[1] = *(_QWORD *)&v240[8];
            v23 = 2;
            goto LABEL_134;
          }
          if ( (v240[76] & 0x10) != 0 || (*(_DWORD *)&v240[80] & 0x20000000) != 0 && (*(_WORD *)&v240[76] & 0x400) != 0 )
          {
            v247 = v321;
            v248 = v20;
            *(_QWORD *)v240 = &v247;
            *(_QWORD *)&v240[8] = sub_14169F630;
            v327 = 1;
            sub_1416ABFD0(&v228.m128i_u64[1], &unk_141A5A094, v240);
            v23 = 9;
LABEL_134:
            v17 = v228.m128i_i64[1];
            v296 = *((_QWORD *)&v229 + 1);
            v309 = v229;
            v208 = v230;
            v209 = v231;
            *(_OWORD *)v210 = v232;
            *(_OWORD *)&v210[16] = v233;
            if ( v178.m128i_i64[0] )
              sub_140001660(v321, v178.m128i_i64[0], 1);
            if ( !_InterlockedDecrement64((volatile signed __int64 *)v182.m128i_i64[0]) )
              sub_14119A730(&v182);
LABEL_94:
            if ( *(_QWORD *)v223 )
              sub_1416A0770(&v223[8]);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v223[16]) )
              sub_14119A730(&v223[16]);
            v58 = *((_QWORD *)&v200 + 1);
            if ( *((_QWORD *)&v200 + 1) )
            {
LABEL_99:
              v59 = (_QWORD *)(v200 + 8);
              do
              {
                v60 = *(v59 - 1);
                if ( v60 )
                  sub_140001660(*v59, v60, 1);
                v59 += 4;
                --v58;
              }
              while ( v58 );
            }
LABEL_115:
            if ( v199 )
              sub_140001660(v200, 32 * v199, 8);
            v80 = v208;
            v81 = v209;
            v82 = *(_OWORD *)v210;
            result = (char *)v308;
            *(_OWORD *)(v308 + 11) = *(_OWORD *)&v210[16];
            *(_OWORD *)(result + 72) = v82;
            *(_OWORD *)(result + 56) = v81;
            *(_OWORD *)(result + 40) = v80;
            *((_QWORD *)result + 1) = v23;
            *((_QWORD *)result + 2) = v17;
            *((_QWORD *)result + 3) = v309;
            *((_QWORD *)result + 4) = v296;
            *(_QWORD *)result = -1;
            return result;
          }
        }
        else
        {
          v233 = *(_OWORD *)&v240[80];
          v232 = *(_OWORD *)&v240[64];
          v231 = *(_OWORD *)&v240[48];
          v230 = *(_OWORD *)&v240[32];
          v229 = *(_OWORD *)&v240[16];
          v228 = *(__m128i *)v240;
          v23 = *(_QWORD *)v240;
          if ( *(_QWORD *)v240 != -1 )
            goto LABEL_134;
        }
        v311 = v178.m128i_i64[0];
        v24 = *((_QWORD *)&v200 + 1);
        if ( *((_QWORD *)&v200 + 1) == v199 )
          sub_14190F570(&v199);
        v25 = v200;
        v26 = 32 * v24;
        *(_QWORD *)(v200 + v26) = v311;
        *(_QWORD *)(v25 + v26 + 8) = v321;
        *(_OWORD *)(v25 + v26 + 16) = v179;
        *((_QWORD *)&v200 + 1) = v24 + 1;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v182.m128i_i64[0]) )
LABEL_19:
          sub_14119A730(&v182);
      }
    }
    if ( *(_QWORD *)v223 )
      sub_1416A0770(&v223[8]);
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v223[16]) )
      sub_14119A730(&v223[16]);
    if ( *((_QWORD *)&v200 + 1) >= 2u )
    {
      v47 = v200;
      if ( *((_QWORD *)&v200 + 1) >= 0x15u )
      {
        sub_14065B1E0(v200, *((_QWORD *)&v200 + 1), v325);
      }
      else
      {
        v48 = v200 + 32LL * *((_QWORD *)&v200 + 1);
        v49 = v200 + 32;
        do
        {
          sub_140DF9210(v47, v49);
          v49 += 32;
        }
        while ( v49 != v48 );
      }
    }
    sub_14037BBA0(&v199);
    v15 = v199;
    v16 = v200;
LABEL_41:
    v292 = v15;
    __SET_PAIR__(v296, v309, v16);
    v293 = v16;
    sub_1401E8400(v256, v310, 0);
    v27 = *(_QWORD *)&v256[8];
    result = *(char **)v256;
    v28 = *(_QWORD *)&v256[16];
    v181 = *(_OWORD *)&v256[24];
    if ( *(_QWORD *)v256 != -1 )
    {
      v68 = v308;
      v308[12] = *(_QWORD *)&v256[88];
      v69 = *(_OWORD *)&v256[40];
      v70 = *(_OWORD *)&v256[56];
      *((_OWORD *)v68 + 5) = *(_OWORD *)&v256[72];
      *((_OWORD *)v68 + 4) = v70;
      *((_OWORD *)v68 + 3) = v69;
      v68[3] = v28;
      *((_OWORD *)v68 + 2) = v181;
      v68[1] = result;
      v68[2] = v27;
LABEL_111:
      *v68 = -1;
      goto LABEL_336;
    }
    if ( *(_QWORD *)&v256[8] != -1 )
    {
      v311 = *(_QWORD *)&v256[16];
      v321 = *(_QWORD *)&v256[8];
      v29 = *((_QWORD *)&v293 + 1);
      if ( *((_QWORD *)&v293 + 1) == v292 )
        sub_14190F570(&v292);
      v30 = v293;
      v31 = 32 * v29;
      *(_QWORD *)(v293 + v31) = v321;
      *(_QWORD *)(v30 + v31 + 8) = v311;
      *(_OWORD *)(v30 + v31 + 16) = v181;
      v32 = v29 + 1;
      *((_QWORD *)&v293 + 1) = v32;
      if ( v32 >= 2 )
      {
        if ( v32 >= 0x15 )
        {
          sub_14065B1E0(v30, v32, v325);
        }
        else
        {
          v45 = v30 + 32 * v32;
          v46 = v30 + 32;
          do
          {
            v321 = v46;
            sub_140DF9210(v30, v46);
            v46 = v321 + 32;
          }
          while ( v321 + 32 != v45 );
        }
      }
      sub_14037BBA0(&v292);
    }
    sub_1403F17E0(v223, &v292, v27, v28);
    sub_140FA5F10(v256, v223);
    result = *(char **)v256;
    v182 = *(__m128i *)&v256[8];
    v183.m128i_i64[0] = *(_QWORD *)&v256[24];
    if ( *(_QWORD *)v256 != -1 )
    {
      v71 = *(_OWORD *)&v256[32];
      v72 = *(_OWORD *)&v256[48];
      v73 = *(_OWORD *)&v256[64];
      v68 = v308;
      *(_OWORD *)(v308 + 11) = *(_OWORD *)&v256[80];
      *(_OWORD *)(v68 + 9) = v73;
      *(_OWORD *)(v68 + 7) = v72;
      *(_OWORD *)(v68 + 5) = v71;
      v68[4] = v183.m128i_i64[0];
      *((__m128i *)v68 + 1) = v182;
      v68[1] = result;
      goto LABEL_111;
    }
    v245 = v182;
    v246 = v183.m128i_i64[0];
    v325[2] = 1;
    sub_1416828D0(
      (unsigned int)&v182,
      v288,
      v323,
      (unsigned int)".live-auth.locklive auth.account-domain.lockaccount state.account-transition.lockaccount transition",
      15);
    v321 = v182.m128i_i64[1];
    sub_140FE2210(
      (__int64)v256,
      v182.m128i_i32[2],
      v183.m128i_i32[0],
      (__int64)"live auth.account-domain.lockaccount state.account-transition.lockaccount transition",
      9);
    v33 = *(_QWORD *)v256;
    if ( *(_QWORD *)v256 != -1 )
    {
      *(_OWORD *)&v223[64] = *(_OWORD *)&v256[80];
      *(_OWORD *)&v223[48] = *(_OWORD *)&v256[64];
      *(_OWORD *)&v223[32] = *(_OWORD *)&v256[48];
      *(_OWORD *)&v223[16] = *(_OWORD *)&v256[32];
      *(_OWORD *)v223 = *(_OWORD *)&v256[16];
    }
    v34 = *(void **)&v256[8];
    if ( v182.m128i_i64[0] )
      sub_140001660(v321, v182.m128i_i64[0], 1);
    if ( (_DWORD)v33 != -1 )
    {
      v74 = v308;
      *(_OWORD *)(v308 + 11) = *(_OWORD *)&v223[64];
      v75 = *(_OWORD *)v223;
      v76 = *(_OWORD *)&v223[16];
      v77 = *(_OWORD *)&v223[32];
      *(_OWORD *)(v74 + 9) = *(_OWORD *)&v223[48];
      *(_OWORD *)(v74 + 7) = v77;
      *(_OWORD *)(v74 + 5) = v76;
      *(_OWORD *)(v74 + 3) = v75;
      v74[1] = v33;
      v74[2] = v34;
      *v74 = -1;
      goto LABEL_334;
    }
    v287 = v34;
    v319 = 1;
    v318 = 1;
    sub_1401E8400(v256, v310, v333);
    v35 = *(_OWORD *)v256;
    v36 = *(_QWORD *)&v256[24];
    v321 = *(_QWORD *)&v256[16];
    if ( *(_QWORD *)v256 != -1 )
    {
      v78 = *(_QWORD *)&v256[32];
      v79 = v308;
      v308[12] = *(_QWORD *)&v256[88];
      *((_OWORD *)v79 + 5) = *(_OWORD *)&v256[72];
      *((_OWORD *)v79 + 4) = *(_OWORD *)&v256[56];
      *((_OWORD *)v79 + 3) = *(_OWORD *)&v256[40];
      v79[2] = *((_QWORD *)&v35 + 1);
      v79[3] = v321;
      v79[4] = v36;
      v79[5] = v78;
      v79[1] = v35;
      *v79 = -1;
      goto LABEL_329;
    }
    v311 = *(_QWORD *)&v256[8];
    if ( *(_QWORD *)&v256[8] != -1 )
    {
      ++v303;
      v33 = v293;
      v37 = v293 + 32LL * *((_QWORD *)&v293 + 1);
      while ( v33 != v37 )
      {
        v38 = *(_QWORD *)(v33 + 8);
        v39 = *(_QWORD *)(v33 + 16);
        v332 = 1;
        v331 = 1;
        v33 += 32;
        if ( (unsigned __int8)sub_1402899E0(v38, v39, v321, v36) )
          goto LABEL_86;
      }
      hObject = v287;
      *(_QWORD *)v223 = v287;
      v40 = sub_141412E80(v223);
      if ( v40 && (unsigned int)(v40 & 3) - 2 >= 2 && (v40 & 3) != 0 )
      {
        *(_QWORD *)&v256[8] = v40 - 1;
        v256[0] = 3;
        sub_1416BCB00(&v256[8]);
      }
      CloseHandle(hObject);
      v315 = v245.m128i_i64[1];
      hObject = (HANDLE)v245.m128i_i64[0];
      sub_1403FB7C0(&v245);
      if ( hObject )
        sub_140001660(v315, 8LL * (_QWORD)hObject, 8);
      if ( v311 )
        sub_140001660(v321, v311, 1);
      v42 = *((_QWORD *)&v293 + 1);
      if ( *((_QWORD *)&v293 + 1) )
      {
        v43 = (_QWORD *)(v293 + 8);
        do
        {
          v44 = *(v43 - 1);
          if ( v44 )
            sub_140001660(*v43, v44, 1);
          v43 += 4;
          --v42;
        }
        while ( v42 );
      }
      if ( v292 )
        sub_140001660(v293, 32 * v292, 8);
      v11 = v295;
      v13 = v303;
      if ( v303 >= 3 )
      {
        nullsub_1(v41);
        result = (char *)sub_140001650(71, 1);
        if ( !result )
          sub_141938D2B(1, 71);
        qmemcpy(result, "auth.json ownership kept changing while rebuilding the account registry", 71);
        v67 = v308;
        v308[1] = 10;
        v67[2] = 71;
        v67[3] = result;
        v67[4] = 71;
        *v67 = -1;
        return result;
      }
      continue;
    }
    break;
  }
LABEL_86:
  v332 = 1;
  v331 = 1;
  sub_1416828D0(
    (unsigned int)&v182,
    v288,
    v323,
    (unsigned int)".account-domain.lockaccount state.account-transition.lockaccount transition",
    20);
  v303 = v182.m128i_u64[1];
  sub_140FE2210(
    (__int64)v256,
    v182.m128i_i32[2],
    v183.m128i_i32[0],
    (__int64)"account state.account-transition.lockaccount transition",
    13);
  v50 = *(_QWORD *)v256;
  v51 = v310;
  if ( *(_QWORD *)v256 != -1 )
  {
    *(_OWORD *)&v223[64] = *(_OWORD *)&v256[80];
    *(_OWORD *)&v223[48] = *(_OWORD *)&v256[64];
    *(_OWORD *)&v223[32] = *(_OWORD *)&v256[48];
    *(_OWORD *)&v223[16] = *(_OWORD *)&v256[32];
    *(_OWORD *)v223 = *(_OWORD *)&v256[16];
  }
  v52 = *(void **)&v256[8];
  if ( v182.m128i_i64[0] )
    sub_140001660(v303, v182.m128i_i64[0], 1);
  if ( (_DWORD)v50 != -1 )
  {
    v53 = v308;
    *(_OWORD *)(v308 + 11) = *(_OWORD *)&v223[64];
    v54 = *(_OWORD *)v223;
    v55 = *(_OWORD *)&v223[16];
    v56 = *(_OWORD *)&v223[32];
    *(_OWORD *)(v53 + 9) = *(_OWORD *)&v223[48];
    *(_OWORD *)(v53 + 7) = v56;
    *(_OWORD *)(v53 + 5) = v55;
    *(_OWORD *)(v53 + 3) = v54;
    v53[1] = v50;
    v53[2] = v52;
    *v53 = -1;
    v57 = v311;
    if ( (unsigned __int64)(v311 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_328;
    goto LABEL_329;
  }
  v283 = v52;
  if ( v333 )
  {
    v61 = v51[37];
    v33 = v51[38];
    sub_141695A00(v256, v61, v33);
    v12 = *(__m128i **)v256;
    sub_14018FCC0(*(_QWORD *)v256, *(_QWORD *)&v256[8]);
    if ( (_DWORD)v12 != 2 )
    {
      sub_1401C7E40(v256, v61, v33);
      v62 = *(_QWORD *)v256;
      v166 = *(_OWORD *)&v256[8];
      v167 = *(_OWORD *)&v256[24];
      v168 = *(_OWORD *)&v256[40];
      v169 = *(_OWORD *)&v256[56];
      v170 = *(_OWORD *)&v256[72];
      v171 = *(_QWORD *)&v256[88];
      if ( *(_QWORD *)v256 != -1 )
      {
        v63 = v308;
        v308[12] = v171;
        *((_OWORD *)v63 + 5) = v170;
        v64 = v166;
        v65 = v167;
        v66 = v168;
        *((_OWORD *)v63 + 4) = v169;
        *((_OWORD *)v63 + 3) = v66;
        *((_OWORD *)v63 + 2) = v65;
        *((_OWORD *)v63 + 1) = v64;
        v63[1] = v62;
        *v63 = -1;
        goto LABEL_327;
      }
      sub_140033D80(&v166);
    }
  }
  v83 = v293;
  v288 = v83 >> 64;
  v303 = v83;
  v84 = sub_1401B6D70(v51);
  if ( v84 )
  {
    v85 = 2;
    goto LABEL_326;
  }
  sub_1401C7E40(v256, v51[37], v51[38]);
  if ( *(_DWORD *)v256 == -1 )
  {
    v222 = *(_QWORD *)&v256[88];
    v221 = *(_OWORD *)&v256[72];
    v220 = *(_OWORD *)&v256[56];
    v219 = *(_OWORD *)&v256[40];
    v218 = *(_OWORD *)&v256[24];
    v217 = *(_OWORD *)&v256[8];
  }
  else
  {
    *(_QWORD *)&v217 = -1;
    sub_1401954F0(v256);
  }
  if ( !a5 )
  {
    v84 = -1;
    goto LABEL_147;
  }
  sub_140ED9000((unsigned int)v256, a5, a6, v295, v301);
  v85 = *(_QWORD *)v256;
  if ( *(_QWORD *)v256 != -1 )
  {
    v84 = *(_QWORD *)&v256[8];
    v12 = *(__m128i **)&v256[24];
    v33 = *(_QWORD *)&v256[16];
    *(_OWORD *)&v223[32] = *(_OWORD *)&v256[64];
    v182 = *(__m128i *)&v256[32];
    v183 = *(__m128i *)&v256[48];
    v184 = *(_OWORD *)&v256[64];
    v185 = *(_OWORD *)&v256[80];
LABEL_127:
    v300 = v185;
    v299 = v184;
    v298 = v183;
    v297 = v182;
    goto LABEL_323;
  }
  sub_140216790(v256, a5, a6);
  if ( *(_DWORD *)v256 != 2 )
  {
    v86 = *(_OWORD *)&v256[64];
    v87 = *(_QWORD *)&v256[88];
    v309 = *(_QWORD *)&v256[96];
    v88 = *(_QWORD *)&v256[112];
    v323 = v257.m256i_i64[0];
    v89 = *(_OWORD *)&v257.m256i_u64[2];
    if ( *(_QWORD *)&v256[16] )
      sub_140001660(*(_QWORD *)&v256[24], *(_QWORD *)&v256[16], 1);
    if ( (_QWORD)v86 )
      sub_140001660(*((_QWORD *)&v86 + 1), v86, 1);
    if ( (unsigned __int64)(v87 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v309, v87, 1);
      if ( (unsigned __int64)(v88 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_144:
        if ( (unsigned __int64)(v89 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_146:
          v84 = *(_QWORD *)&v256[40];
          v12 = *(__m128i **)&v256[56];
          v33 = *(_QWORD *)&v256[48];
          goto LABEL_147;
        }
LABEL_145:
        sub_140001660(*((_QWORD *)&v89 + 1), v89, 1);
        goto LABEL_146;
      }
    }
    else if ( (unsigned __int64)(v88 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      goto LABEL_144;
    }
    sub_140001660(v323, v88, 1);
    if ( (unsigned __int64)(v89 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_146;
    goto LABEL_145;
  }
  v85 = *(_QWORD *)&v256[8];
  v33 = *(_QWORD *)&v256[24];
  v84 = *(_QWORD *)&v256[16];
  v12 = *(__m128i **)&v256[32];
  v182 = *(__m128i *)&v256[40];
  v183 = *(__m128i *)&v256[56];
  v184 = *(_OWORD *)&v256[72];
  v185 = *(_OWORD *)&v256[88];
  if ( *(_QWORD *)&v256[8] != -1 )
    goto LABEL_127;
LABEL_147:
  v296 = v33;
  v309 = v84;
  v90 = sub_140ED4BD0();
  v91 = (void *)v217;
  if ( (_QWORD)v217 == -1 )
  {
    v93 = (__m128)0xA0000000FuLL;
    v95 = 1;
    v92 = 0;
    v94 = 0;
  }
  else
  {
    v92 = v221;
    if ( (_BYTE)v221 == 2 )
    {
      v93 = (__m128)0xA0000000FuLL;
      v94 = 0;
      v92 = 0;
    }
    else
    {
      v94 = v220;
      v93 = (__m128)*((unsigned __int64 *)&v220 + 1);
      v255[0] = *(_DWORD *)((char *)&v221 + 1);
      *(_DWORD *)((char *)v255 + 3) = DWORD1(v221);
    }
    v95 = 1;
    if ( BYTE4(v222) != 2 )
      v95 = BYTE4(v222);
  }
  DWORD2(v253) = 4;
  *(_QWORD *)&v253 = v90;
  v250.m128i_i64[0] = -1;
  v247 = 0;
  v248 = 8;
  v249 = 0;
  v251.m128i_i64[1] = v94;
  _mm_storel_ps((double *)&v252, v93);
  BYTE8(v252) = v92;
  *(_DWORD *)((char *)&v252 + 9) = v255[0];
  HIDWORD(v252) = *(_DWORD *)((char *)v255 + 3);
  BYTE12(v253) = v95;
  v96 = v51[5];
  v97 = v51[6];
  sub_140ED4870(&v199, v96, v97);
  v98 = (__m128i *)v199;
  if ( v199 != -2 )
  {
    v294 = v199;
    v330 = 1;
    v329 = 1;
    if ( !(unsigned __int8)sub_140ED7E50(&v199) )
    {
      sub_140195410(&v199);
      goto LABEL_169;
    }
    hObject = v91;
    sub_1418F44E0(&v178, (const __m128i *)&v199, 0xB0u);
    v234 = v98;
    v99 = v97;
    sub_140ED5630(v256, &v178, v96, v97);
    v85 = *(_QWORD *)&v256[8];
    v33 = *(_QWORD *)&v256[24];
    v84 = *(_QWORD *)&v256[16];
    *(_OWORD *)v223 = *(_OWORD *)&v256[40];
    *(_OWORD *)&v223[16] = *(_OWORD *)&v256[56];
    *(_OWORD *)&v223[32] = *(_OWORD *)&v256[72];
    *(_OWORD *)&v223[48] = *(_OWORD *)&v256[88];
    v100 = v295;
    if ( *(_QWORD *)v256 == 2 )
    {
      v98 = *(__m128i **)&v256[32];
      v297 = *(__m128i *)v223;
      v298 = *(__m128i *)&v223[16];
      v299 = *(_OWORD *)&v223[32];
      v300 = *(_OWORD *)&v223[48];
LABEL_320:
      sub_140195410(&v178);
      v12 = v98;
      goto LABEL_321;
    }
    v216 = v259;
    v215 = v258;
    v214 = v257;
    v213 = *(_OWORD *)&v256[104];
    v209 = *(_OWORD *)&v256[16];
    *(_QWORD *)v210 = *(_QWORD *)&v256[32];
    *(_OWORD *)&v210[8] = *(_OWORD *)v223;
    *(_OWORD *)&v210[24] = *(_OWORD *)&v223[16];
    v211 = *(_OWORD *)&v223[32];
    v212 = *(_OWORD *)&v223[48];
    v208 = *(_OWORD *)v256;
    v136 = *(_DWORD *)&v223[8];
    v137 = *(_QWORD *)&v223[16];
    v314 = *(_QWORD *)&v223[8];
    v315 = *(_QWORD *)&v223[16];
    if ( a5
      && v309 != -1
      && v12 == *(__m128i **)&v223[16]
      && (v138 = v295,
          v139 = *(_DWORD *)&v223[8],
          v140 = sub_1418F4B70(v296, *(_QWORD *)&v223[8]),
          v136 = v139,
          v100 = v138,
          !v140) )
    {
      v254 = v98;
      sub_141681D30(v256, a5, a6);
      v141 = v301;
      v33 = v99;
      v207 = *(_OWORD *)&v256[16];
      v206 = *(_OWORD *)v256;
    }
    else
    {
      v254 = v98;
      v138 = v100;
      v141 = v301;
      sub_140ED6DC0((unsigned int)&v206, v100, v301, v136, v137);
      v33 = v99;
    }
    v142 = v207;
    v323 = *((_QWORD *)&v206 + 1);
    sub_140ED9AE0((unsigned int)v256, DWORD2(v206), v207, v138, v141);
    v85 = *(_QWORD *)v256;
    if ( *(_QWORD *)v256 != -1 )
    {
      v84 = *(_QWORD *)&v256[8];
      v98 = *(__m128i **)&v256[24];
      v33 = *(_QWORD *)&v256[16];
      v297 = *(__m128i *)&v256[32];
      v298 = *(__m128i *)&v256[48];
      v299 = *(_OWORD *)&v256[64];
      v300 = *(_OWORD *)&v256[80];
LABEL_317:
      if ( (_QWORD)v206 )
        sub_140001660(v323, v206, 1);
      sub_140034220(&v208);
      goto LABEL_320;
    }
    sub_14028DA20(&v228, &v178);
    sub_141695A00(v256, v323, v142);
    v143 = *(_DWORD *)v256;
    sub_14018FCC0(*(_QWORD *)v256, *(_QWORD *)&v256[8]);
    if ( v143 == 2 )
    {
LABEL_279:
      v84 = sub_140222D40(v96, v33, v323, v142);
      if ( v84 )
      {
        v85 = 2;
LABEL_316:
        sub_140195410(&v228);
        goto LABEL_317;
      }
LABEL_314:
      sub_140ED5630(v256, &v228, v323, v142);
      v85 = *(_QWORD *)&v256[8];
      v33 = *(_QWORD *)&v256[24];
      v84 = *(_QWORD *)&v256[16];
      v98 = *(__m128i **)&v256[32];
      v182 = *(__m128i *)&v256[40];
      v183 = *(__m128i *)&v256[56];
      v184 = *(_OWORD *)&v256[72];
      v185 = *(_OWORD *)&v256[88];
      if ( *(_QWORD *)v256 != 2 )
      {
        v227[0] = v259;
        v226 = v258;
        v225 = v257;
        v224 = *(_OWORD *)&v256[104];
        *(_OWORD *)&v223[16] = *(_OWORD *)&v256[16];
        *(_QWORD *)&v223[32] = *(_QWORD *)&v256[32];
        *(__m128i *)&v223[40] = v182;
        *(__m128i *)&v223[56] = v183;
        *(_OWORD *)&v223[72] = v184;
        *(_OWORD *)&v223[88] = v185;
        *(_OWORD *)v223 = *(_OWORD *)v256;
        v325[1] = 1;
        sub_1416AC440(&v235, &v223[40]);
        v180[0] = v323;
        v180[1] = v142;
        v317 = 1;
        sub_140289550(&v241, v180);
        v304 = *(_QWORD *)&v223[72];
        v312 = *(_QWORD *)&v223[64];
        v313 = *(_QWORD *)&v223[88];
        v157 = *(_QWORD *)&v223[80];
        v305 = *(_QWORD *)&v223[96];
        v302 = *((_QWORD *)&v224 + 1);
        v158 = v224;
        v306 = v225.m256i_i64[0];
        v307 = v225.m256i_i64[2];
        v159 = *(_OWORD *)&v225.m256i_u64[1];
        v289 = v225.m256i_i64[3];
        v160 = v226;
        v182.m128i_i64[0] = (__int64)v227 + 2;
        v182.m128i_i64[1] = (__int64)sub_1402889E0;
        sub_1416ABFD0(v256, &unk_1419D405D, &v182);
        v284 = *(_QWORD *)&v256[8];
        v315 = *(_QWORD *)v256;
        sub_1416AA4F0(v240, *(_QWORD *)&v256[8], *(_QWORD *)&v256[16]);
        v161 = sub_140211D10();
        v182.m128i_i64[0] = (__int64)v227;
        v182.m128i_i64[1] = (__int64)sub_140290F60;
        sub_1416ABFD0(v256, &unk_1419D405D, &v182);
        v285 = *(_QWORD *)&v256[8];
        v314 = *(_QWORD *)v256;
        sub_1416AA4F0(&v182, *(_QWORD *)&v256[8], *(_QWORD *)&v256[16]);
        v162 = *((_QWORD *)&v226 + 1);
        v163 = sub_140ED4BD0();
        v261 = v236;
        v260 = v235;
        v262 = v241;
        v263 = v242.m128i_i64[0];
        v264 = v312;
        v265 = v304;
        v266 = v157;
        v267 = 0;
        v268 = 1;
        v269 = 0;
        v274 = v313;
        v275 = v305;
        v276 = v158;
        v277 = v306;
        v278 = v159;
        v279 = v289;
        v280 = v160;
        v271 = *(_QWORD *)&v240[16];
        v270 = *(__m128i *)v240;
        *(_QWORD *)v256 = 1;
        *(_QWORD *)&v256[8] = v161;
        v272 = v182;
        v273 = v183.m128i_i64[0];
        *(_QWORD *)&v256[16] = 0;
        v282 = -16776702;
        *(_QWORD *)&v256[32] = 0;
        *(_QWORD *)&v256[48] = 0;
        *(_QWORD *)&v256[64] = 0;
        v281 = v162;
        *(_QWORD *)&v256[80] = 1;
        *(_QWORD *)&v256[88] = v163;
        *(_QWORD *)&v256[96] = 0;
        *(_QWORD *)&v256[112] = 2;
        *(_QWORD *)&v258 = 2;
        if ( v314 )
          sub_140001660(v285, v314, 1);
        if ( v315 )
          sub_140001660(v284, v315, 1);
        v164 = &v217;
        if ( hObject == (HANDLE)-1LL )
          v164 = nullptr;
        v165 = sub_14021A9E0(v164, *(_QWORD *)&v223[48], *(_QWORD *)&v223[56]);
        v322 = 1;
        sub_140210A60(v256, v165);
        v322 = 1;
        sub_14020F030(v256, v237);
        v322 = 0;
        sub_1401F47F0(&v247, v256);
        v183.m128i_i64[0] = *(_QWORD *)&v223[56];
        v182 = *(__m128i *)&v223[40];
        if ( v250.m128i_i64[0] != -1 && v250.m128i_i64[0] )
          sub_140001660(v250.m128i_i64[1], v250.m128i_i64[0], 1);
        v251.m128i_i64[0] = v183.m128i_i64[0];
        v250 = v182;
        if ( *(_QWORD *)&v223[16] )
          sub_140001660(*(_QWORD *)&v223[24], *(_QWORD *)&v223[16], 1);
        sub_140195410(&v228);
        if ( (_QWORD)v206 )
          sub_140001660(v323, v206, 1);
        sub_140034220(&v208);
        sub_140195410(&v178);
        v51 = v310;
        goto LABEL_169;
      }
      v297 = v182;
      v298 = v183;
      v299 = v184;
      v300 = v185;
      goto LABEL_316;
    }
    sub_140ED9000((unsigned int)v256, v323, v142, v295, v301);
    v85 = *(_QWORD *)v256;
    if ( *(_QWORD *)v256 != -1 )
    {
      v84 = *(_QWORD *)&v256[8];
      v98 = *(__m128i **)&v256[24];
      v33 = *(_QWORD *)&v256[16];
      v297 = *(__m128i *)&v256[32];
      v298 = *(__m128i *)&v256[48];
      v299 = *(_OWORD *)&v256[64];
      v144 = *(_OWORD *)&v256[80];
LABEL_283:
      v300 = v144;
      goto LABEL_316;
    }
    sub_140ED4870(v240, v323, v142);
    if ( *(_QWORD *)v240 == -2 )
    {
      if ( v333 )
      {
        v85 = *(_QWORD *)&v240[8];
        v33 = *(_QWORD *)&v240[24];
        v84 = *(_QWORD *)&v240[16];
        v98 = *(__m128i **)&v240[32];
        v297 = *(__m128i *)&v240[40];
        v298 = *(__m128i *)&v240[56];
        v299 = *(_OWORD *)&v240[72];
        v144 = *(_OWORD *)&v240[88];
        goto LABEL_283;
      }
      *(_OWORD *)&v256[80] = *(_OWORD *)&v240[88];
      *(_OWORD *)&v256[64] = *(_OWORD *)&v240[72];
      *(_OWORD *)&v256[48] = *(_OWORD *)&v240[56];
      *(_OWORD *)&v256[32] = *(_OWORD *)&v240[40];
      *(_OWORD *)&v256[16] = *(_OWORD *)&v240[24];
      *(_OWORD *)v256 = *(_OWORD *)&v240[8];
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v182.m128i_i64[0] = (__int64)v256;
        v182.m128i_i64[1] = (__int64)sub_14104A7D0;
        *(_QWORD *)v223 = aCodexmateLibCo_21;
        *(_QWORD *)&v223[8] = 31;
        *(_QWORD *)&v223[16] = aCodexmateLibCo_21;
        *(_QWORD *)&v223[24] = 31;
        *(_QWORD *)&v223[32] = &off_1419DA098;
        sub_140BAD520(&unk_1419DA03F, &v182, 2, v223);
      }
      v326 = 1;
      sub_1401954F0(v256);
LABEL_364:
      v33 = v99;
      goto LABEL_279;
    }
    v326 = 1;
    if ( (unsigned __int8)sub_140ED7E50(v240) )
    {
      sub_1418F44E0(&v182, (const __m128i *)v240, 0xB0u);
      sub_140ED5630(v256, &v182, v323, v142);
      v85 = *(_QWORD *)&v256[8];
      v33 = *(_QWORD *)&v256[24];
      v84 = *(_QWORD *)&v256[16];
      v98 = *(__m128i **)&v256[32];
      v241 = *(__m128i *)&v256[40];
      v242 = *(__m128i *)&v256[56];
      v243 = *(_OWORD *)&v256[72];
      v244 = *(_OWORD *)&v256[88];
      if ( *(_QWORD *)v256 == 2 )
      {
        v297 = v241;
        v298 = v242;
        v299 = v243;
        v300 = v244;
LABEL_304:
        sub_140195410(v240);
        goto LABEL_316;
      }
      v227[0] = v259;
      v226 = v258;
      v225 = v257;
      v224 = *(_OWORD *)&v256[104];
      *(_OWORD *)&v223[16] = *(_OWORD *)&v256[16];
      *(_QWORD *)&v223[32] = *(_QWORD *)&v256[32];
      *(__m128i *)&v223[40] = v241;
      *(__m128i *)&v223[56] = v242;
      *(_OWORD *)&v223[72] = v243;
      *(_OWORD *)&v223[88] = v244;
      *(_OWORD *)v223 = *(_OWORD *)v256;
      if ( v242.m128i_i64[0] != v315 || (unsigned int)sub_1418F4B70(*(_QWORD *)&v223[48], v314) )
      {
        v241.m128i_i64[0] = v323;
        v241.m128i_i64[1] = v142;
        *(_QWORD *)v256 = &v241;
        *(_QWORD *)&v256[8] = sub_14169F630;
        sub_1416ABFD0(v177, &unk_1419DA011, v256);
        v84 = v177[0];
        v33 = v177[1];
        v98 = (__m128i *)v177[2];
        sub_140034220(v223);
        v85 = 9;
        goto LABEL_304;
      }
      if ( a5
        && (sub_141681AF0(&v241, a5, a6), sub_141681AF0(v256, v323, v142), (unsigned __int8)sub_140291BB0(&v241, v256))
        || (unsigned __int8)sub_1402C22D0(&v182, &v178) )
      {
        sub_140195410(&v228);
        sub_1418F44E0(&v228, (const __m128i *)v240, 0xB0u);
        sub_140034220(v223);
        goto LABEL_314;
      }
      sub_140034220(v223);
    }
    else
    {
      if ( v333 )
      {
        *(_QWORD *)v223 = v323;
        *(_QWORD *)&v223[8] = v142;
        *(_QWORD *)v256 = v223;
        *(_QWORD *)&v256[8] = sub_14169F630;
        v326 = 1;
        sub_1416ABFD0(v176, &unk_1419D9FD0, v256);
        v84 = v176[0];
        v33 = v176[1];
        v98 = (__m128i *)v176[2];
        sub_140195410(v240);
        v85 = 9;
        goto LABEL_316;
      }
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)v256 = aCodexmateLibCo_21;
        *(_QWORD *)&v256[8] = 31;
        *(_QWORD *)&v256[16] = aCodexmateLibCo_21;
        *(_QWORD *)&v256[24] = 31;
        *(_QWORD *)&v256[32] = &off_1419D9FB8;
        v326 = 1;
        sub_140BAD520(&unk_1419D9F64, 169, 2, v256);
        if ( *(_QWORD *)v240 == -2 )
          goto LABEL_364;
      }
    }
    sub_140195410(v240);
    goto LABEL_364;
  }
  v294 = -2;
  v330 = 1;
  v329 = 1;
  sub_141695A00(v256, v96, v97);
  if ( *(_DWORD *)v256 == 2 )
  {
    if ( (v256[8] & 3u) - 2 >= 2 && (v256[8] & 3) != 0 )
    {
      --*(_QWORD *)&v256[8];
      v256[0] = 3;
      v294 = -2;
      v330 = 1;
      v329 = 1;
      sub_1416BCB00(&v256[8]);
    }
    v294 = -2;
    v330 = 1;
    v329 = 0;
    sub_1401954F0(&v200);
    goto LABEL_169;
  }
  if ( v333 )
  {
    v84 = *((_QWORD *)&v200 + 1);
    v85 = v200;
    v12 = *((__m128i **)&v201 + 1);
    v33 = v201;
    v297 = v202;
    v298 = v203;
    v299 = v204;
    v101 = v205;
    goto LABEL_263;
  }
  *(_OWORD *)&v256[80] = v205;
  *(_OWORD *)&v256[64] = v204;
  *(__m128i *)&v256[48] = v203;
  *(__m128i *)&v256[32] = v202;
  *(_OWORD *)&v256[16] = v201;
  *(_OWORD *)v256 = v200;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v182.m128i_i64[0] = (__int64)v256;
    v182.m128i_i64[1] = (__int64)sub_14104A7D0;
    *(_QWORD *)v223 = aCodexmateLibCo_21;
    *(_QWORD *)&v223[8] = 31;
    *(_QWORD *)&v223[16] = aCodexmateLibCo_21;
    *(_QWORD *)&v223[24] = 31;
    *(_QWORD *)&v223[32] = &off_1419DA100;
    sub_140BAD520(&unk_1419DA0B0, &v182, 2, v223);
  }
  v294 = -2;
  v330 = 1;
  v329 = 0;
  sub_1401954F0(v256);
LABEL_169:
  v288 = v303 + 32 * v288;
  v102 = (unsigned __int64)&v184 + 8;
  v103 = v303;
  if ( v303 == v288 )
  {
LABEL_259:
    *(_QWORD *)v256 = v325;
    if ( v249 >= 2 )
    {
      if ( v249 >= 0x15 )
        sub_14065B380(v248, v249, v256);
      else
        sub_140DFF5A0(v248, v249, 1, v256);
      v51 = v310;
    }
    sub_1401CF760(v256, v51, (__int64)&v247, 1);
    v85 = *(_QWORD *)v256;
    if ( *(_QWORD *)v256 == -1 )
    {
      v84 = v247;
      v33 = v248;
      v12 = (__m128i *)v249;
      v297 = v250;
      v298 = v251;
      v299 = v252;
      v300 = v253;
      if ( (unsigned __int64)(v309 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v296, v309, 1);
      if ( (_QWORD)v217 != -1 )
        sub_140033D80(&v217);
      goto LABEL_343;
    }
    v84 = *(_QWORD *)&v256[8];
    v12 = *(__m128i **)&v256[24];
    v33 = *(_QWORD *)&v256[16];
    v297 = *(__m128i *)&v256[32];
    v298 = *(__m128i *)&v256[48];
    v299 = *(_OWORD *)&v256[64];
    v101 = *(_OWORD *)&v256[80];
LABEL_263:
    v300 = v101;
    goto LABEL_321;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      v104 = *(_QWORD *)(v103 + 8);
      v105 = *(_QWORD *)(v103 + 16);
      sub_140ED9AE0((unsigned int)v256, v104, v105, v295, v301);
      v303 += 32LL;
      if ( *(_DWORD *)v256 == -1 )
      {
        sub_141695550(v256, v104, v105);
        if ( *(_DWORD *)v256 == 2 )
        {
          *(_QWORD *)v223 = 2;
          *(_QWORD *)&v223[8] = *(_QWORD *)&v256[8];
          v85 = 2;
          goto LABEL_192;
        }
        if ( (v256[76] & 0x10) != 0 || (*(_DWORD *)&v256[80] & 0x20000000) != 0 && (*(_WORD *)&v256[76] & 0x400) != 0 )
        {
          v182.m128i_i64[0] = v104;
          v182.m128i_i64[1] = v105;
          *(_QWORD *)v256 = &v182;
          *(_QWORD *)&v256[8] = sub_14169F630;
          sub_1416ABFD0(&v223[8], &unk_141A5A094, v256);
          *(_QWORD *)v223 = 9;
          v85 = 9;
LABEL_192:
          *(_OWORD *)&v256[80] = *(_OWORD *)&v223[80];
          *(_OWORD *)&v256[64] = *(_OWORD *)&v223[64];
          *(_OWORD *)&v256[48] = *(_OWORD *)&v223[48];
          *(_OWORD *)&v256[32] = *(_OWORD *)&v223[32];
          *(_OWORD *)&v256[16] = *(_OWORD *)&v223[16];
          *(_OWORD *)v256 = *(_OWORD *)v223;
          if ( v333 )
          {
            v84 = *(_QWORD *)&v223[8];
            v12 = *(__m128i **)&v223[24];
            v33 = *(_QWORD *)&v223[16];
            v297 = *(__m128i *)&v223[32];
            v298 = *(__m128i *)&v223[48];
            v299 = *(_OWORD *)&v223[64];
            v101 = *(_OWORD *)&v223[80];
            goto LABEL_263;
          }
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            *(_QWORD *)v240 = v256;
            *(_QWORD *)&v240[8] = sub_14104A7D0;
            v182.m128i_i64[0] = (__int64)aCodexmateLibCo_21;
            v182.m128i_i64[1] = 31;
            v183.m128i_i64[0] = (__int64)aCodexmateLibCo_21;
            v183.m128i_i64[1] = 31;
            *(_QWORD *)&v184 = &off_1419DA168;
            sub_140BAD520(&unk_1419DA118, v240, 2, &v182);
          }
          sub_1401954F0(v256);
LABEL_172:
          v103 = v303;
          if ( v303 == v288 )
            goto LABEL_259;
          continue;
        }
      }
      else
      {
        *(_OWORD *)&v223[80] = *(_OWORD *)&v256[80];
        *(_OWORD *)&v223[64] = *(_OWORD *)&v256[64];
        *(_OWORD *)&v223[48] = *(_OWORD *)&v256[48];
        *(_OWORD *)&v223[32] = *(_OWORD *)&v256[32];
        *(_OWORD *)&v223[16] = *(_OWORD *)&v256[16];
        *(_OWORD *)v223 = *(_OWORD *)v256;
        v85 = *(_QWORD *)v256;
        if ( *(_QWORD *)v256 != -1 )
          goto LABEL_192;
      }
      break;
    }
    sub_140ED4870(v256, v104, v105);
    if ( *(_QWORD *)v256 == -2 )
    {
      if ( v333 )
      {
        v85 = *(_QWORD *)&v256[8];
        v33 = *(_QWORD *)&v256[24];
        v84 = *(_QWORD *)&v256[16];
        v12 = *(__m128i **)&v256[32];
        v297 = *(__m128i *)&v256[40];
        v298 = *(__m128i *)&v256[56];
        v299 = *(_OWORD *)&v256[72];
        v101 = *(_OWORD *)&v256[88];
        goto LABEL_263;
      }
      *(_OWORD *)&v223[80] = *(_OWORD *)&v256[88];
      *(_OWORD *)&v223[64] = *(_OWORD *)&v256[72];
      *(_OWORD *)&v223[48] = *(_OWORD *)&v256[56];
      *(_OWORD *)&v223[32] = *(_OWORD *)&v256[40];
      *(_OWORD *)&v223[16] = *(_OWORD *)&v256[24];
      *(_OWORD *)v223 = *(_OWORD *)&v256[8];
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v208 = v104;
        *((_QWORD *)&v208 + 1) = v105;
        v228.m128i_i64[0] = (__int64)&v208;
        v228.m128i_i64[1] = (__int64)sub_14169F630;
        *(_QWORD *)&v229 = v223;
        *((_QWORD *)&v229 + 1) = sub_14104A7D0;
        v182.m128i_i64[0] = (__int64)aCodexmateLibCo_21;
        v182.m128i_i64[1] = 31;
        v183.m128i_i64[0] = (__int64)aCodexmateLibCo_21;
        v183.m128i_i64[1] = 31;
        *(_QWORD *)&v184 = &off_1419DA368;
        sub_140BAD520(&unk_1419DA308, &v228, 2, &v182);
      }
      sub_1401954F0(v223);
      goto LABEL_172;
    }
    sub_1418F44E0((__m128i *)v240, (const __m128i *)v256, 0xB0u);
    if ( !(unsigned __int8)sub_140ED7E50(v240) )
    {
LABEL_258:
      sub_140195410(v240);
      v103 = v303;
      if ( v303 == v288 )
        goto LABEL_259;
      continue;
    }
    break;
  }
  sub_140ED5630(v256, v240, v104, v105);
  if ( *(_DWORD *)v256 == 2 )
  {
    if ( v333 )
    {
      v85 = *(_QWORD *)&v256[8];
      v33 = *(_QWORD *)&v256[24];
      v84 = *(_QWORD *)&v256[16];
      v12 = *(__m128i **)&v256[32];
      v297 = *(__m128i *)&v256[40];
      v298 = *(__m128i *)&v256[56];
      v299 = *(_OWORD *)&v256[72];
      v300 = *(_OWORD *)&v256[88];
      goto LABEL_286;
    }
    *(_OWORD *)&v223[80] = *(_OWORD *)&v256[88];
    *(_OWORD *)&v223[64] = *(_OWORD *)&v256[72];
    *(_OWORD *)&v223[48] = *(_OWORD *)&v256[56];
    *(_OWORD *)&v223[32] = *(_OWORD *)&v256[40];
    *(_OWORD *)&v223[16] = *(_OWORD *)&v256[24];
    *(_OWORD *)v223 = *(_OWORD *)&v256[8];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v178.m128i_i64[0] = v104;
      v178.m128i_i64[1] = v105;
      *(_QWORD *)&v208 = &v178;
      *((_QWORD *)&v208 + 1) = sub_14169F630;
      *(_QWORD *)&v209 = v223;
      *((_QWORD *)&v209 + 1) = sub_14104A7D0;
      v228.m128i_i64[0] = (__int64)aCodexmateLibCo_21;
      v228.m128i_i64[1] = 31;
      *(_QWORD *)&v229 = aCodexmateLibCo_21;
      *((_QWORD *)&v229 + 1) = 31;
      *(_QWORD *)&v230 = &off_1419DA2F0;
      sub_140BAD520(&unk_1419DA290, &v208, 2, &v228);
    }
    sub_1401954F0(v223);
    goto LABEL_258;
  }
  sub_1418F44E0(&v182, (const __m128i *)v256, 0xB0u);
  v316 = 1;
  sub_1416AC440(&v178, (char *)&v184 + 8);
  if ( !v249 )
  {
    LODWORD(v112) = 0;
LABEL_214:
    v328 = 1;
    sub_1416AC440(&v208, &v178);
    v241.m128i_i64[0] = v104;
    v241.m128i_i64[1] = v105;
    v228.m128i_i64[0] = 0;
    v228.m128i_i64[1] = 1;
    *(_QWORD *)&v229 = 0;
    *(_QWORD *)&v223[16] = 1610612768;
    *(_QWORD *)v223 = &v228;
    *(_QWORD *)&v223[8] = &off_1419E0B60;
    if ( (unsigned __int8)sub_14169F630(&v241, v223, v113) )
      sub_141939040(
        (unsigned int)aADisplayImplem_53,
        55,
        (unsigned int)v325,
        (unsigned int)&unk_1419D7FE8,
        (__int64)&off_1419E29A8);
    v312 = v228.m128i_i64[1];
    v323 = v228.m128i_i64[0];
    v114 = v229;
    hObject = v186;
    v313 = v187;
    v289 = v188;
    v315 = v189;
    v304 = v190;
    v290 = *((_QWORD *)&v191 + 1);
    v115 = v191;
    v305 = v192;
    v291 = *((_QWORD *)&v193 + 1);
    v116 = v193;
    v306 = v194;
    v117 = v195;
    v228.m128i_i64[0] = (__int64)&v198;
    v228.m128i_i64[1] = (__int64)sub_1402889E0;
    sub_1416ABFD0(v223, &unk_1419D405D, &v228);
    v302 = v114;
    v285 = v117;
    LODWORD(v284) = v112;
    v238 = *(_QWORD *)&v223[8];
    v314 = *(_QWORD *)v223;
    sub_1416AA4F0(&v228, *(_QWORD *)&v223[8], *(_QWORD *)&v223[16]);
    sub_141406CE0(v223);
    v118 = *(_DWORD *)v223;
    v119 = (*(int *)v223 >> 13) - 1;
    if ( *(int *)v223 >> 13 <= 0 )
    {
      v120 = (1 - (*(int *)v223 >> 13)) / 0x190u + 1;
      v119 += 400 * v120;
      v286 = -146097 * v120;
    }
    else
    {
      v286 = 0;
    }
    v121 = *(unsigned int *)&v223[4];
    v122 = *(unsigned int *)&v223[8];
    v199 = (__int64)&v197;
    *(_QWORD *)&v200 = sub_140290F60;
    sub_1416ABFD0(v223, &unk_1419D405D, &v199);
    v239 = *(_QWORD *)&v223[8];
    v307 = *(_QWORD *)v223;
    sub_1416AA4F0(v223, *(_QWORD *)&v223[8], *(_QWORD *)&v223[16]);
    v261 = v209;
    v260 = v208;
    v262.m128i_i64[0] = v323;
    v262.m128i_i64[1] = v312;
    v263 = v302;
    v264 = (__int64)hObject;
    v265 = v313;
    v266 = v289;
    v267 = 0;
    v268 = 1;
    v269 = 0;
    v274 = v315;
    v275 = v304;
    v276 = v115;
    v277 = v305;
    v278 = v116;
    v279 = v306;
    v280 = v285;
    v271 = v229;
    v270 = v228;
    *(_QWORD *)v256 = 1;
    *(_QWORD *)&v256[8] = 1000
                        * (v121
                         + 86400LL
                         * (int)(((1461 * v119) >> 2)
                               + v286
                               + ((v118 >> 4) & 0x1FF)
                               - v119 / 100
                               + ((v119 / 100) >> 2)
                               - 719163))
                        + ((unsigned __int64)(1125899907 * v122) >> 50);
    v273 = *(_QWORD *)&v223[16];
    v272 = *(__m128i *)v223;
    *(_QWORD *)&v256[16] = 0;
    v282 = -16776702;
    *(_QWORD *)&v256[32] = 0;
    *(_QWORD *)&v256[48] = 0;
    *(_QWORD *)&v256[64] = 0;
    v281 = v196;
    *(_QWORD *)&v256[80] = 0;
    *(_QWORD *)&v256[96] = 0;
    *(_QWORD *)&v256[112] = 2;
    *(_QWORD *)&v258 = 2;
    if ( v307 )
      sub_140001660(v239, v307, 1);
    v123 = v284;
    if ( v314 )
      sub_140001660(v238, v314, 1);
    v124 = v178.m128i_i64[1];
    if ( (_QWORD)v217 == -1 || !(_QWORD)v218 )
    {
LABEL_229:
      v126 = 0;
    }
    else
    {
      v125 = v179;
      v126 = *((_QWORD *)&v217 + 1);
      v127 = 424 * v218;
      while ( *(_QWORD *)(v126 + 208) != v125 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v126 + 200), v124) )
      {
        v126 += 424;
        v127 -= 424;
        if ( !v127 )
          goto LABEL_229;
      }
    }
    v324 = 1;
    sub_140210A60(v256, v126);
    v324 = 1;
    sub_14020F030(v256, v237);
    v128 = v249;
    if ( v123 )
    {
      if ( v102 >= v249 )
        sub_1419390C3(v102, v249, &off_1419DA278);
      v129 = (__m128i *)(v248 + 424 * v102);
      sub_140194A20(v129);
      sub_1418F44E0(v129, (const __m128i *)v256, 0x1A8u);
    }
    else
    {
      if ( v249 == v247 )
        sub_14190F880(&v247);
      sub_1418F44E0((__m128i *)(v248 + 424 * v128), (const __m128i *)v256, 0x1A8u);
      v249 = v128 + 1;
    }
    v102 = (unsigned __int64)&v184 + 8;
    if ( v178.m128i_i64[0] )
      sub_140001660(v124, v178.m128i_i64[0], 1);
    if ( v183.m128i_i64[0] )
      sub_140001660(v183.m128i_i64[1], v183.m128i_i64[0], 1);
    if ( *((_QWORD *)&v184 + 1) )
      sub_140001660(v185, *((_QWORD *)&v184 + 1), 1);
    goto LABEL_258;
  }
  v106 = v248;
  v107 = 424 * v249;
  v323 = v178.m128i_i64[1];
  v108 = v179;
  v109 = 0;
  v102 = 0;
  while ( *(_QWORD *)(v106 + v109 + 208) != v108 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v106 + v109 + 200), v323) )
  {
    ++v102;
    v109 += 424;
    if ( v107 == v109 )
    {
      LODWORD(v112) = 0;
      v51 = v310;
      goto LABEL_214;
    }
  }
  if ( v250.m128i_i64[0] != -1 && v251.m128i_i64[0] == v108 && !(unsigned int)sub_1418F4B70(v250.m128i_i64[1], v323) )
  {
LABEL_255:
    if ( v178.m128i_i64[0] )
      sub_140001660(v178.m128i_i64[1], v178.m128i_i64[0], 1);
    sub_140034220(&v182);
    v51 = v310;
    v102 = (unsigned __int64)&v184 + 8;
    goto LABEL_258;
  }
  v110 = *(_QWORD *)(v106 + v109 + 224);
  v111 = *(_QWORD *)(v106 + v109 + 232);
  v328 = 1;
  sub_1416AB9B0(v256, v110, v111);
  v51 = v310;
  hObject = *(HANDLE *)v256;
  v112 = *(_QWORD *)&v256[16];
  v323 = *(_QWORD *)&v256[8];
  if ( (unsigned __int8)sub_1402899E0(*(_QWORD *)&v256[8], *(_QWORD *)&v256[16], v104, v105) )
    goto LABEL_253;
  if ( !a5 )
    goto LABEL_207;
  sub_141681AF0(v223, a5, a6);
  sub_141681AF0(v256, v323, v112);
  if ( (unsigned __int8)sub_140291BB0(v223, v256) )
  {
LABEL_253:
    if ( hObject )
      sub_140001660(v323, hObject, 1);
    goto LABEL_255;
  }
  sub_141681AF0(v223, a5, a6);
  sub_141681AF0(v256, v104, v105);
  if ( (unsigned __int8)sub_140291BB0(v223, v256) )
    goto LABEL_249;
LABEL_207:
  sub_140ED4870(v223, v323, v112);
  if ( *(_QWORD *)v223 != -2 )
  {
    sub_1418F44E0((__m128i *)v256, (const __m128i *)v223, 0xB0u);
    v130 = &v217;
    if ( (_QWORD)v217 == -1 )
      v130 = nullptr;
    v131 = v179;
    v132 = v178.m128i_i32[2];
    v133 = sub_14021A9E0(v130, v178.m128i_i64[1], v179);
    v134 = 0;
    if ( v133 )
    {
      v134 = *(_QWORD *)(v133 + 224);
      v315 = *(_QWORD *)(v133 + 232);
    }
    sub_140ED6DC0((unsigned int)&v228, v295, v301, v132, v131);
    v314 = v228.m128i_i64[1];
    v135 = sub_140217C80(v104, v105, (unsigned int)v240, v323, v112, (__int64)v256, v134, v315, v228.m128i_i64[1], v229);
    if ( v228.m128i_i64[0] )
      sub_140001660(v314, v228.m128i_i64[0], 1);
    sub_140195410(v256);
    v51 = v310;
    if ( v135 )
    {
LABEL_249:
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)v256 = aCodexmateLibCo_21;
        *(_QWORD *)&v256[8] = 31;
        *(_QWORD *)&v256[16] = aCodexmateLibCo_21;
        *(_QWORD *)&v256[24] = 31;
        *(_QWORD *)&v256[32] = &off_1419DA260;
        sub_140BAD520(
          "[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity",
          215,
          2,
          v256);
      }
      LOBYTE(v112) = 1;
      if ( hObject )
        sub_140001660(v323, hObject, 1);
      goto LABEL_214;
    }
    goto LABEL_253;
  }
  if ( !v333 )
  {
    *(_OWORD *)&v256[80] = *(_OWORD *)&v223[88];
    *(_OWORD *)&v256[64] = *(_OWORD *)&v223[72];
    *(_OWORD *)&v256[48] = *(_OWORD *)&v223[56];
    *(_OWORD *)&v256[32] = *(_OWORD *)&v223[40];
    *(_OWORD *)&v256[16] = *(_OWORD *)&v223[24];
    *(_OWORD *)v256 = *(_OWORD *)&v223[8];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v208 = v256;
      *((_QWORD *)&v208 + 1) = sub_14104A7D0;
      v228.m128i_i64[0] = (__int64)aCodexmateLibCo_21;
      v228.m128i_i64[1] = 31;
      *(_QWORD *)&v229 = aCodexmateLibCo_21;
      *((_QWORD *)&v229 + 1) = 31;
      *(_QWORD *)&v230 = &off_1419DA1D8;
      sub_140BAD520(&unk_1419DA180, &v208, 2, &v228);
    }
    sub_1401954F0(v256);
    v51 = v310;
    goto LABEL_249;
  }
  v85 = *(_QWORD *)&v223[8];
  v33 = *(_QWORD *)&v223[24];
  v84 = *(_QWORD *)&v223[16];
  v12 = *(__m128i **)&v223[32];
  v297 = *(__m128i *)&v223[40];
  v298 = *(__m128i *)&v223[56];
  v299 = *(_OWORD *)&v223[72];
  v300 = *(_OWORD *)&v223[88];
  if ( hObject )
    sub_140001660(v323, hObject, 1);
  if ( v178.m128i_i64[0] )
    sub_140001660(v178.m128i_i64[1], v178.m128i_i64[0], 1);
  sub_140034220(&v182);
LABEL_286:
  sub_140195410(v240);
LABEL_321:
  sub_140033D80(&v247);
  if ( (unsigned __int64)(v309 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v296, v309, 1);
LABEL_323:
  if ( (_QWORD)v217 != -1 )
    sub_140033D80(&v217);
  if ( v85 != -1 )
  {
LABEL_326:
    v175 = v300;
    v174 = v299;
    v173 = v298;
    v172 = v297;
    v145 = v308;
    v308[3] = v33;
    v145[4] = v12;
    v146 = v173;
    v147 = v174;
    v148 = v175;
    *(__m128i *)(v145 + 5) = v172;
    *(__m128i *)(v145 + 7) = v146;
    *(_OWORD *)(v145 + 9) = v147;
    *(_OWORD *)(v145 + 11) = v148;
    v145[1] = v85;
    v145[2] = v84;
    *v145 = -1;
    goto LABEL_327;
  }
LABEL_343:
  v175 = v300;
  v174 = v299;
  *(_QWORD *)&v223[8] = v33;
  *(_QWORD *)&v223[16] = v12;
  *(__m128i *)&v223[24] = v297;
  *(__m128i *)&v223[40] = v298;
  *(_OWORD *)&v223[56] = v299;
  *(_OWORD *)&v223[72] = v300;
  *(_QWORD *)v223 = v84;
  v183.m128i_i64[0] = v298.m128i_i64[0];
  v182 = v297;
  v183.m128i_i32[2] = (int)v12;
  v183.m128i_i8[12] = 1;
  sub_140FE6FF0(v256, &v182);
  v153 = v308;
  *((_OWORD *)v308 + 6) = *(_OWORD *)&v256[96];
  v153[5] = *(_OWORD *)&v256[80];
  v153[4] = *(_OWORD *)&v256[64];
  v154 = *(_OWORD *)v256;
  v155 = *(_OWORD *)&v256[16];
  v156 = *(_OWORD *)&v256[32];
  v153[3] = *(_OWORD *)&v256[48];
  v153[2] = v156;
  v153[1] = v155;
  *v153 = v154;
  sub_140190530((__int64 *)v223);
LABEL_327:
  sub_141057160(&v283);
  CloseHandle(v283);
  v57 = v311;
  if ( (unsigned __int64)(v311 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_328:
    sub_140001660(v321, v57, 1);
LABEL_329:
  v149 = sub_141412E80(&v287);
  if ( v149 && (unsigned int)(v149 & 3) - 2 >= 2 && (v149 & 3) != 0 )
  {
    *(_QWORD *)&v256[8] = v149 - 1;
    v256[0] = 3;
    sub_1416BCB00(&v256[8]);
  }
  CloseHandle(v287);
LABEL_334:
  result = (char *)sub_1403FB7C0(&v245);
  if ( v245.m128i_i64[0] )
    result = (char *)sub_140001660(v245.m128i_i64[1], 8 * v245.m128i_i64[0], 8);
LABEL_336:
  v150 = *((_QWORD *)&v293 + 1);
  if ( *((_QWORD *)&v293 + 1) )
  {
    v151 = (_QWORD *)(v293 + 8);
    do
    {
      v152 = *(v151 - 1);
      if ( v152 )
        result = (char *)sub_140001660(*v151, v152, 1);
      v151 += 4;
      --v150;
    }
    while ( v150 );
  }
  if ( v292 )
    return (char *)sub_140001660(v293, 32 * v292, 8);
  return result;
}
